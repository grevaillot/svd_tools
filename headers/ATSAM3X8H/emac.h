#pragma once 

/* --- EMAC: Ethernet MAC 10/100 ------------------------------------ */

/** @defgroup emac_registers Ethernet MAC 10/100 Register
@{*/

/** EMAC_NCR Network Control Register **/
#define EMAC_NCR			MMIO32(EMAC_BASE + 0x00)
/** EMAC_NCFGR Network Configuration Register **/
#define EMAC_NCFGR			MMIO32(EMAC_BASE + 0x04)
/** EMAC_NSR Network Status Register **/
#define EMAC_NSR			MMIO32(EMAC_BASE + 0x08)
/** EMAC_TSR Transmit Status Register **/
#define EMAC_TSR			MMIO32(EMAC_BASE + 0x14)
/** EMAC_RBQP Receive Buffer Queue Pointer Register **/
#define EMAC_RBQP			MMIO32(EMAC_BASE + 0x18)
/** EMAC_TBQP Transmit Buffer Queue Pointer Register **/
#define EMAC_TBQP			MMIO32(EMAC_BASE + 0x1c)
/** EMAC_RSR Receive Status Register **/
#define EMAC_RSR			MMIO32(EMAC_BASE + 0x20)
/** EMAC_ISR Interrupt Status Register **/
#define EMAC_ISR			MMIO32(EMAC_BASE + 0x24)
/** EMAC_IER Interrupt Enable Register **/
#define EMAC_IER			MMIO32(EMAC_BASE + 0x28)
/** EMAC_IDR Interrupt Disable Register **/
#define EMAC_IDR			MMIO32(EMAC_BASE + 0x2c)
/** EMAC_IMR Interrupt Mask Register **/
#define EMAC_IMR			MMIO32(EMAC_BASE + 0x30)
/** EMAC_MAN Phy Maintenance Register **/
#define EMAC_MAN			MMIO32(EMAC_BASE + 0x34)
/** EMAC_PTR Pause Time Register **/
#define EMAC_PTR			MMIO32(EMAC_BASE + 0x38)
/** EMAC_PFR Pause Frames Received Register **/
#define EMAC_PFR			MMIO32(EMAC_BASE + 0x3c)
/** EMAC_FTO Frames Transmitted Ok Register **/
#define EMAC_FTO			MMIO32(EMAC_BASE + 0x40)
/** EMAC_SCF Single Collision Frames Register **/
#define EMAC_SCF			MMIO32(EMAC_BASE + 0x44)
/** EMAC_MCF Multiple Collision Frames Register **/
#define EMAC_MCF			MMIO32(EMAC_BASE + 0x48)
/** EMAC_FRO Frames Received Ok Register **/
#define EMAC_FRO			MMIO32(EMAC_BASE + 0x4c)
/** EMAC_FCSE Frame Check Sequence Errors Register **/
#define EMAC_FCSE			MMIO32(EMAC_BASE + 0x50)
/** EMAC_ALE Alignment Errors Register **/
#define EMAC_ALE			MMIO32(EMAC_BASE + 0x54)
/** EMAC_DTF Deferred Transmission Frames Register **/
#define EMAC_DTF			MMIO32(EMAC_BASE + 0x58)
/** EMAC_LCOL Late Collisions Register **/
#define EMAC_LCOL			MMIO32(EMAC_BASE + 0x5c)
/** EMAC_ECOL Excessive Collisions Register **/
#define EMAC_ECOL			MMIO32(EMAC_BASE + 0x60)
/** EMAC_TUND Transmit Underrun Errors Register **/
#define EMAC_TUND			MMIO32(EMAC_BASE + 0x64)
/** EMAC_CSE Carrier Sense Errors Register **/
#define EMAC_CSE			MMIO32(EMAC_BASE + 0x68)
/** EMAC_RRE Receive Resource Errors Register **/
#define EMAC_RRE			MMIO32(EMAC_BASE + 0x6c)
/** EMAC_ROV Receive Overrun Errors Register **/
#define EMAC_ROV			MMIO32(EMAC_BASE + 0x70)
/** EMAC_RSE Receive Symbol Errors Register **/
#define EMAC_RSE			MMIO32(EMAC_BASE + 0x74)
/** EMAC_ELE Excessive Length Errors Register **/
#define EMAC_ELE			MMIO32(EMAC_BASE + 0x78)
/** EMAC_RJA Receive Jabbers Register **/
#define EMAC_RJA			MMIO32(EMAC_BASE + 0x7c)
/** EMAC_USF Undersize Frames Register **/
#define EMAC_USF			MMIO32(EMAC_BASE + 0x80)
/** EMAC_STE SQE Test Errors Register **/
#define EMAC_STE			MMIO32(EMAC_BASE + 0x84)
/** EMAC_RLE Received Length Field Mismatch Register **/
#define EMAC_RLE			MMIO32(EMAC_BASE + 0x88)
/** EMAC_HRB Hash Register Bottom [31:0] Register **/
#define EMAC_HRB			MMIO32(EMAC_BASE + 0x90)
/** EMAC_HRT Hash Register Top [63:32] Register **/
#define EMAC_HRT			MMIO32(EMAC_BASE + 0x94)
/** EMAC_SA1B Specific Address 1 Bottom Register **/
#define EMAC_SA1B			MMIO32(EMAC_BASE + 0x98)
/** EMAC_SA1T Specific Address 1 Top Register **/
#define EMAC_SA1T			MMIO32(EMAC_BASE + 0x9c)
/** EMAC_SA2B Specific Address 2 Bottom Register **/
#define EMAC_SA2B			MMIO32(EMAC_BASE + 0xa0)
/** EMAC_SA2T Specific Address 2 Top Register **/
#define EMAC_SA2T			MMIO32(EMAC_BASE + 0xa4)
/** EMAC_SA3B Specific Address 3 Bottom Register **/
#define EMAC_SA3B			MMIO32(EMAC_BASE + 0xa8)
/** EMAC_SA3T Specific Address 3 Top Register **/
#define EMAC_SA3T			MMIO32(EMAC_BASE + 0xac)
/** EMAC_SA4B Specific Address 4 Bottom Register **/
#define EMAC_SA4B			MMIO32(EMAC_BASE + 0xb0)
/** EMAC_SA4T Specific Address 4 Top Register **/
#define EMAC_SA4T			MMIO32(EMAC_BASE + 0xb4)
/** EMAC_TID Type ID Checking Register **/
#define EMAC_TID			MMIO32(EMAC_BASE + 0xb8)
/** EMAC_USRIO User Input/Output Register **/
#define EMAC_USRIO			MMIO32(EMAC_BASE + 0xc0)

/**@}*/


/** @defgroup emac_ncr NCR Network Control Register
@{*/

/** EMAC_NCR_THALT Transmit halt **/
#define EMAC_NCR_THALT		(1 << 10)
/** EMAC_NCR_TSTART Start transmission **/
#define EMAC_NCR_TSTART		(1 << 9)
/** EMAC_NCR_BP Back pressure **/
#define EMAC_NCR_BP		(1 << 8)
/** EMAC_NCR_WESTAT Write enable for statistics registers **/
#define EMAC_NCR_WESTAT		(1 << 7)
/** EMAC_NCR_INCSTAT Increment statistics registers **/
#define EMAC_NCR_INCSTAT		(1 << 6)
/** EMAC_NCR_CLRSTAT Clear statistics registers **/
#define EMAC_NCR_CLRSTAT		(1 << 5)
/** EMAC_NCR_MPE Management port enable **/
#define EMAC_NCR_MPE		(1 << 4)
/** EMAC_NCR_TE Transmit enable **/
#define EMAC_NCR_TE		(1 << 3)
/** EMAC_NCR_RE Receive enable **/
#define EMAC_NCR_RE		(1 << 2)
/** EMAC_NCR_LLB Loopback local **/
#define EMAC_NCR_LLB		(1 << 1)
/** EMAC_NCR_LB LoopBack **/
#define EMAC_NCR_LB		(1 << 0)

/**@}*/

/** @defgroup emac_ncfgr NCFGR Network Configuration Register
@{*/

/** EMAC_NCFGR_IRXFCS Ignore RX FCS **/
#define EMAC_NCFGR_IRXFCS		(1 << 19)
/** EMAC_NCFGR_EFRHD  **/
#define EMAC_NCFGR_EFRHD		(1 << 18)
/** EMAC_NCFGR_DRFCS Discard Receive FCS **/
#define EMAC_NCFGR_DRFCS		(1 << 17)
/** EMAC_NCFGR_RLCE Receive Length field Checking Enable **/
#define EMAC_NCFGR_RLCE		(1 << 16)

#define EMAC_NCFGR_RBOF_SHIFT		14
#define EMAC_NCFGR_RBOF_MASK		0x03
/** @defgroup emac_ncfgr_rbof RBOF Receive Buffer Offset
@{*/
/**@}*/

/** EMAC_NCFGR_PAE Pause Enable **/
#define EMAC_NCFGR_PAE		(1 << 13)
/** EMAC_NCFGR_RTY Retry test **/
#define EMAC_NCFGR_RTY		(1 << 12)

#define EMAC_NCFGR_CLK_SHIFT		10
#define EMAC_NCFGR_CLK_MASK		0x03
/** @defgroup emac_ncfgr_clk CLK MDC clock divider
@{*/
/**@}*/

/** EMAC_NCFGR_BIG Receive 1536 bytes frames **/
#define EMAC_NCFGR_BIG		(1 << 8)
/** EMAC_NCFGR_UNI Unicast Hash Enable **/
#define EMAC_NCFGR_UNI		(1 << 7)
/** EMAC_NCFGR_MTI Multicast Hash Enable **/
#define EMAC_NCFGR_MTI		(1 << 6)
/** EMAC_NCFGR_NBC No Broadcast **/
#define EMAC_NCFGR_NBC		(1 << 5)
/** EMAC_NCFGR_CAF Copy All Frames **/
#define EMAC_NCFGR_CAF		(1 << 4)
/** EMAC_NCFGR_JFRAME Jumbo Frames **/
#define EMAC_NCFGR_JFRAME		(1 << 3)
/** EMAC_NCFGR_FD Full Duplex **/
#define EMAC_NCFGR_FD		(1 << 1)
/** EMAC_NCFGR_SPD Speed **/
#define EMAC_NCFGR_SPD		(1 << 0)

/**@}*/

/** @defgroup emac_nsr NSR Network Status Register
@{*/

/** EMAC_NSR_IDLE  **/
#define EMAC_NSR_IDLE		(1 << 2)
/** EMAC_NSR_MDIO  **/
#define EMAC_NSR_MDIO		(1 << 1)

/**@}*/

/** @defgroup emac_tsr TSR Transmit Status Register
@{*/

/** EMAC_TSR_UND Transmit Underrun **/
#define EMAC_TSR_UND		(1 << 6)
/** EMAC_TSR_COMP Transmit Complete **/
#define EMAC_TSR_COMP		(1 << 5)
/** EMAC_TSR_BEX Buffers exhausted mid frame **/
#define EMAC_TSR_BEX		(1 << 4)
/** EMAC_TSR_TGO Transmit Go **/
#define EMAC_TSR_TGO		(1 << 3)
/** EMAC_TSR_RLES Retry Limit exceeded **/
#define EMAC_TSR_RLES		(1 << 2)
/** EMAC_TSR_COL Collision Occurred **/
#define EMAC_TSR_COL		(1 << 1)
/** EMAC_TSR_UBR Used Bit Read **/
#define EMAC_TSR_UBR		(1 << 0)

/**@}*/

/** @defgroup emac_rbqp RBQP Receive Buffer Queue Pointer Register
@{*/


#define EMAC_RBQP_ADDR_SHIFT		2
#define EMAC_RBQP_ADDR_MASK		0x3fffffff
/** @defgroup emac_rbqp_addr ADDR Receive buffer queue pointer address
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_tbqp TBQP Transmit Buffer Queue Pointer Register
@{*/


#define EMAC_TBQP_ADDR_SHIFT		2
#define EMAC_TBQP_ADDR_MASK		0x3fffffff
/** @defgroup emac_tbqp_addr ADDR Transmit buffer queue pointer address
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_rsr RSR Receive Status Register
@{*/

/** EMAC_RSR_OVR Receive Overrun **/
#define EMAC_RSR_OVR		(1 << 2)
/** EMAC_RSR_REC Frame Received **/
#define EMAC_RSR_REC		(1 << 1)
/** EMAC_RSR_BNA Buffer Not Available **/
#define EMAC_RSR_BNA		(1 << 0)

/**@}*/

/** @defgroup emac_isr ISR Interrupt Status Register
@{*/

/** EMAC_ISR_PTZ Pause Time Zero **/
#define EMAC_ISR_PTZ		(1 << 13)
/** EMAC_ISR_PFRE Pause Frame Received **/
#define EMAC_ISR_PFRE		(1 << 12)
/** EMAC_ISR_HRESP Hresp not OK **/
#define EMAC_ISR_HRESP		(1 << 11)
/** EMAC_ISR_ROVR Receive Overrun **/
#define EMAC_ISR_ROVR		(1 << 10)
/** EMAC_ISR_TCOMP Transmit Complete **/
#define EMAC_ISR_TCOMP		(1 << 7)
/** EMAC_ISR_TXERR Transmit Error **/
#define EMAC_ISR_TXERR		(1 << 6)
/** EMAC_ISR_RLEX Retry Limit Exceeded **/
#define EMAC_ISR_RLEX		(1 << 5)
/** EMAC_ISR_TUND Ethernet Transmit Buffer Underrun **/
#define EMAC_ISR_TUND		(1 << 4)
/** EMAC_ISR_TXUBR Transmit Used Bit Read **/
#define EMAC_ISR_TXUBR		(1 << 3)
/** EMAC_ISR_RXUBR Receive Used Bit Read **/
#define EMAC_ISR_RXUBR		(1 << 2)
/** EMAC_ISR_RCOMP Receive Complete **/
#define EMAC_ISR_RCOMP		(1 << 1)
/** EMAC_ISR_MFD Management Frame Done **/
#define EMAC_ISR_MFD		(1 << 0)

/**@}*/

/** @defgroup emac_ier IER Interrupt Enable Register
@{*/

/** EMAC_IER_PTZ Pause Time Zero **/
#define EMAC_IER_PTZ		(1 << 13)
/** EMAC_IER_PFR Pause Frame Received **/
#define EMAC_IER_PFR		(1 << 12)
/** EMAC_IER_HRESP Hresp not OK **/
#define EMAC_IER_HRESP		(1 << 11)
/** EMAC_IER_ROVR Receive Overrun **/
#define EMAC_IER_ROVR		(1 << 10)
/** EMAC_IER_TCOMP Transmit Complete **/
#define EMAC_IER_TCOMP		(1 << 7)
/** EMAC_IER_TXERR  **/
#define EMAC_IER_TXERR		(1 << 6)
/** EMAC_IER_RLE Retry Limit Exceeded **/
#define EMAC_IER_RLE		(1 << 5)
/** EMAC_IER_TUND Ethernet Transmit Buffer Underrun **/
#define EMAC_IER_TUND		(1 << 4)
/** EMAC_IER_TXUBR Transmit Used Bit Read **/
#define EMAC_IER_TXUBR		(1 << 3)
/** EMAC_IER_RXUBR Receive Used Bit Read **/
#define EMAC_IER_RXUBR		(1 << 2)
/** EMAC_IER_RCOMP Receive Complete **/
#define EMAC_IER_RCOMP		(1 << 1)
/** EMAC_IER_MFD Management Frame sent **/
#define EMAC_IER_MFD		(1 << 0)

/**@}*/

/** @defgroup emac_idr IDR Interrupt Disable Register
@{*/

/** EMAC_IDR_PTZ Pause Time Zero **/
#define EMAC_IDR_PTZ		(1 << 13)
/** EMAC_IDR_PFR Pause Frame Received **/
#define EMAC_IDR_PFR		(1 << 12)
/** EMAC_IDR_HRESP Hresp not OK **/
#define EMAC_IDR_HRESP		(1 << 11)
/** EMAC_IDR_ROVR Receive Overrun **/
#define EMAC_IDR_ROVR		(1 << 10)
/** EMAC_IDR_TCOMP Transmit Complete **/
#define EMAC_IDR_TCOMP		(1 << 7)
/** EMAC_IDR_TXERR  **/
#define EMAC_IDR_TXERR		(1 << 6)
/** EMAC_IDR_RLE Retry Limit Exceeded **/
#define EMAC_IDR_RLE		(1 << 5)
/** EMAC_IDR_TUND Ethernet Transmit Buffer Underrun **/
#define EMAC_IDR_TUND		(1 << 4)
/** EMAC_IDR_TXUBR Transmit Used Bit Read **/
#define EMAC_IDR_TXUBR		(1 << 3)
/** EMAC_IDR_RXUBR Receive Used Bit Read **/
#define EMAC_IDR_RXUBR		(1 << 2)
/** EMAC_IDR_RCOMP Receive Complete **/
#define EMAC_IDR_RCOMP		(1 << 1)
/** EMAC_IDR_MFD Management Frame sent **/
#define EMAC_IDR_MFD		(1 << 0)

/**@}*/

/** @defgroup emac_imr IMR Interrupt Mask Register
@{*/

/** EMAC_IMR_PTZ Pause Time Zero **/
#define EMAC_IMR_PTZ		(1 << 13)
/** EMAC_IMR_PFR Pause Frame Received **/
#define EMAC_IMR_PFR		(1 << 12)
/** EMAC_IMR_HRESP Hresp not OK **/
#define EMAC_IMR_HRESP		(1 << 11)
/** EMAC_IMR_ROVR Receive Overrun **/
#define EMAC_IMR_ROVR		(1 << 10)
/** EMAC_IMR_TCOMP Transmit Complete **/
#define EMAC_IMR_TCOMP		(1 << 7)
/** EMAC_IMR_TXERR  **/
#define EMAC_IMR_TXERR		(1 << 6)
/** EMAC_IMR_RLE Retry Limit Exceeded **/
#define EMAC_IMR_RLE		(1 << 5)
/** EMAC_IMR_TUND Ethernet Transmit Buffer Underrun **/
#define EMAC_IMR_TUND		(1 << 4)
/** EMAC_IMR_TXUBR Transmit Used Bit Read **/
#define EMAC_IMR_TXUBR		(1 << 3)
/** EMAC_IMR_RXUBR Receive Used Bit Read **/
#define EMAC_IMR_RXUBR		(1 << 2)
/** EMAC_IMR_RCOMP Receive Complete **/
#define EMAC_IMR_RCOMP		(1 << 1)
/** EMAC_IMR_MFD Management Frame sent **/
#define EMAC_IMR_MFD		(1 << 0)

/**@}*/

/** @defgroup emac_man MAN Phy Maintenance Register
@{*/


#define EMAC_MAN_SOF_SHIFT		30
#define EMAC_MAN_SOF_MASK		0x03
/** @defgroup emac_man_sof SOF Start of frame
@{*/
/**@}*/


#define EMAC_MAN_RW_SHIFT		28
#define EMAC_MAN_RW_MASK		0x03
/** @defgroup emac_man_rw RW Read-write
@{*/
/**@}*/


#define EMAC_MAN_PHYA_SHIFT		23
#define EMAC_MAN_PHYA_MASK		0x1f
/** @defgroup emac_man_phya PHYA PHY Address
@{*/
/**@}*/


#define EMAC_MAN_REGA_SHIFT		18
#define EMAC_MAN_REGA_MASK		0x1f
/** @defgroup emac_man_rega REGA Register Address
@{*/
/**@}*/


#define EMAC_MAN_CODE_SHIFT		16
#define EMAC_MAN_CODE_MASK		0x03
/** @defgroup emac_man_code CODE 
@{*/
/**@}*/


#define EMAC_MAN_DATA_SHIFT		0
#define EMAC_MAN_DATA_MASK		0xffff
/** @defgroup emac_man_data DATA 
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_ptr PTR Pause Time Register
@{*/


#define EMAC_PTR_PTIME_SHIFT		0
#define EMAC_PTR_PTIME_MASK		0xffff
/** @defgroup emac_ptr_ptime PTIME Pause Time
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_pfr PFR Pause Frames Received Register
@{*/


#define EMAC_PFR_FROK_SHIFT		0
#define EMAC_PFR_FROK_MASK		0xffff
/** @defgroup emac_pfr_frok FROK Pause Frames received OK
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_fto FTO Frames Transmitted Ok Register
@{*/


#define EMAC_FTO_FTOK_SHIFT		0
#define EMAC_FTO_FTOK_MASK		0xffffff
/** @defgroup emac_fto_ftok FTOK Frames Transmitted OK
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_scf SCF Single Collision Frames Register
@{*/


#define EMAC_SCF_SCF_SHIFT		0
#define EMAC_SCF_SCF_MASK		0xffff
/** @defgroup emac_scf_scf SCF Single Collision Frames
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_mcf MCF Multiple Collision Frames Register
@{*/


#define EMAC_MCF_MCF_SHIFT		0
#define EMAC_MCF_MCF_MASK		0xffff
/** @defgroup emac_mcf_mcf MCF Multicollision Frames
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_fro FRO Frames Received Ok Register
@{*/


#define EMAC_FRO_FROK_SHIFT		0
#define EMAC_FRO_FROK_MASK		0xffffff
/** @defgroup emac_fro_frok FROK Frames Received OK
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_fcse FCSE Frame Check Sequence Errors Register
@{*/


#define EMAC_FCSE_FCSE_SHIFT		0
#define EMAC_FCSE_FCSE_MASK		0xff
/** @defgroup emac_fcse_fcse FCSE Frame Check Sequence Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_ale ALE Alignment Errors Register
@{*/


#define EMAC_ALE_ALE_SHIFT		0
#define EMAC_ALE_ALE_MASK		0xff
/** @defgroup emac_ale_ale ALE Alignment Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_dtf DTF Deferred Transmission Frames Register
@{*/


#define EMAC_DTF_DTF_SHIFT		0
#define EMAC_DTF_DTF_MASK		0xffff
/** @defgroup emac_dtf_dtf DTF Deferred Transmission Frames
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_lcol LCOL Late Collisions Register
@{*/


#define EMAC_LCOL_LCOL_SHIFT		0
#define EMAC_LCOL_LCOL_MASK		0xff
/** @defgroup emac_lcol_lcol LCOL Late Collisions
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_ecol ECOL Excessive Collisions Register
@{*/


#define EMAC_ECOL_EXCOL_SHIFT		0
#define EMAC_ECOL_EXCOL_MASK		0xff
/** @defgroup emac_ecol_excol EXCOL Excessive Collisions
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_tund TUND Transmit Underrun Errors Register
@{*/


#define EMAC_TUND_TUND_SHIFT		0
#define EMAC_TUND_TUND_MASK		0xff
/** @defgroup emac_tund_tund TUND Transmit Underruns
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_cse CSE Carrier Sense Errors Register
@{*/


#define EMAC_CSE_CSE_SHIFT		0
#define EMAC_CSE_CSE_MASK		0xff
/** @defgroup emac_cse_cse CSE Carrier Sense Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_rre RRE Receive Resource Errors Register
@{*/


#define EMAC_RRE_RRE_SHIFT		0
#define EMAC_RRE_RRE_MASK		0xffff
/** @defgroup emac_rre_rre RRE Receive Resource Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_rov ROV Receive Overrun Errors Register
@{*/


#define EMAC_ROV_ROVR_SHIFT		0
#define EMAC_ROV_ROVR_MASK		0xff
/** @defgroup emac_rov_rovr ROVR Receive Overrun
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_rse RSE Receive Symbol Errors Register
@{*/


#define EMAC_RSE_RSE_SHIFT		0
#define EMAC_RSE_RSE_MASK		0xff
/** @defgroup emac_rse_rse RSE Receive Symbol Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_ele ELE Excessive Length Errors Register
@{*/


#define EMAC_ELE_EXL_SHIFT		0
#define EMAC_ELE_EXL_MASK		0xff
/** @defgroup emac_ele_exl EXL Excessive Length Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_rja RJA Receive Jabbers Register
@{*/


#define EMAC_RJA_RJB_SHIFT		0
#define EMAC_RJA_RJB_MASK		0xff
/** @defgroup emac_rja_rjb RJB Receive Jabbers
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_usf USF Undersize Frames Register
@{*/


#define EMAC_USF_USF_SHIFT		0
#define EMAC_USF_USF_MASK		0xff
/** @defgroup emac_usf_usf USF Undersize frames
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_ste STE SQE Test Errors Register
@{*/


#define EMAC_STE_SQER_SHIFT		0
#define EMAC_STE_SQER_MASK		0xff
/** @defgroup emac_ste_sqer SQER SQE test errors
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_rle RLE Received Length Field Mismatch Register
@{*/


#define EMAC_RLE_RLFM_SHIFT		0
#define EMAC_RLE_RLFM_MASK		0xff
/** @defgroup emac_rle_rlfm RLFM Receive Length Field Mismatch
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_hrb HRB Hash Register Bottom [31:0] Register
@{*/


#define EMAC_HRB_ADDR_SHIFT		0
#define EMAC_HRB_ADDR_MASK		0xffffffff
/** @defgroup emac_hrb_addr ADDR 
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_hrt HRT Hash Register Top [63:32] Register
@{*/


#define EMAC_HRT_ADDR_SHIFT		0
#define EMAC_HRT_ADDR_MASK		0xffffffff
/** @defgroup emac_hrt_addr ADDR 
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_sa1b SA1B Specific Address 1 Bottom Register
@{*/


#define EMAC_SA1B_ADDR_SHIFT		0
#define EMAC_SA1B_ADDR_MASK		0xffffffff
/** @defgroup emac_sa1b_addr ADDR 
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_sa1t SA1T Specific Address 1 Top Register
@{*/


#define EMAC_SA1T_ADDR_SHIFT		0
#define EMAC_SA1T_ADDR_MASK		0xffff
/** @defgroup emac_sa1t_addr ADDR 
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_sa2b SA2B Specific Address 2 Bottom Register
@{*/


#define EMAC_SA2B_ADDR_SHIFT		0
#define EMAC_SA2B_ADDR_MASK		0xffffffff
/** @defgroup emac_sa2b_addr ADDR 
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_sa2t SA2T Specific Address 2 Top Register
@{*/


#define EMAC_SA2T_ADDR_SHIFT		0
#define EMAC_SA2T_ADDR_MASK		0xffff
/** @defgroup emac_sa2t_addr ADDR 
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_sa3b SA3B Specific Address 3 Bottom Register
@{*/


#define EMAC_SA3B_ADDR_SHIFT		0
#define EMAC_SA3B_ADDR_MASK		0xffffffff
/** @defgroup emac_sa3b_addr ADDR 
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_sa3t SA3T Specific Address 3 Top Register
@{*/


#define EMAC_SA3T_ADDR_SHIFT		0
#define EMAC_SA3T_ADDR_MASK		0xffff
/** @defgroup emac_sa3t_addr ADDR 
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_sa4b SA4B Specific Address 4 Bottom Register
@{*/


#define EMAC_SA4B_ADDR_SHIFT		0
#define EMAC_SA4B_ADDR_MASK		0xffffffff
/** @defgroup emac_sa4b_addr ADDR 
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_sa4t SA4T Specific Address 4 Top Register
@{*/


#define EMAC_SA4T_ADDR_SHIFT		0
#define EMAC_SA4T_ADDR_MASK		0xffff
/** @defgroup emac_sa4t_addr ADDR 
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_tid TID Type ID Checking Register
@{*/


#define EMAC_TID_TID_SHIFT		0
#define EMAC_TID_TID_MASK		0xffff
/** @defgroup emac_tid_tid TID Type ID checking
@{*/
/**@}*/


/**@}*/

/** @defgroup emac_usrio USRIO User Input/Output Register
@{*/

/** EMAC_USRIO_CLKEN Clock Enable **/
#define EMAC_USRIO_CLKEN		(1 << 1)
/** EMAC_USRIO_RMII Reduce MII **/
#define EMAC_USRIO_RMII		(1 << 0)

/**@}*/

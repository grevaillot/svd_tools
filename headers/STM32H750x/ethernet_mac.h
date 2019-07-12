#pragma once 

/* --- Ethernet_MAC: Ethernet: media access control (MAC) ----------- */

/** @defgroup ethernet_mac_registers Ethernet: media access control
      (MAC) Register
@{*/

/** Ethernet_MAC_DMAMR DMA mode register **/
#define Ethernet_MAC_DMAMR			MMIO32(Ethernet_MAC_BASE + 0x00)
/** Ethernet_MAC_DMASBMR System bus mode register **/
#define Ethernet_MAC_DMASBMR			MMIO32(Ethernet_MAC_BASE + 0x04)
/** Ethernet_MAC_DMAISR Interrupt status register **/
#define Ethernet_MAC_DMAISR			MMIO32(Ethernet_MAC_BASE + 0x08)
/** Ethernet_MAC_DMADSR Debug status register **/
#define Ethernet_MAC_DMADSR			MMIO32(Ethernet_MAC_BASE + 0x0c)
/** Ethernet_MAC_DMACCR Channel control register **/
#define Ethernet_MAC_DMACCR			MMIO32(Ethernet_MAC_BASE + 0x100)
/** Ethernet_MAC_DMACTxCR Channel transmit control register **/
#define Ethernet_MAC_DMACTxCR			MMIO32(Ethernet_MAC_BASE + 0x104)
/** Ethernet_MAC_DMACRxCR Channel receive control register **/
#define Ethernet_MAC_DMACRxCR			MMIO32(Ethernet_MAC_BASE + 0x108)
/** Ethernet_MAC_DMACTxDLAR Channel Tx descriptor list address register **/
#define Ethernet_MAC_DMACTxDLAR			MMIO32(Ethernet_MAC_BASE + 0x114)
/** Ethernet_MAC_DMACRxDLAR Channel Rx descriptor list address register **/
#define Ethernet_MAC_DMACRxDLAR			MMIO32(Ethernet_MAC_BASE + 0x11c)
/** Ethernet_MAC_DMACTxDTPR Channel Tx descriptor tail pointer register **/
#define Ethernet_MAC_DMACTxDTPR			MMIO32(Ethernet_MAC_BASE + 0x120)
/** Ethernet_MAC_DMACRxDTPR Channel Rx descriptor tail pointer register **/
#define Ethernet_MAC_DMACRxDTPR			MMIO32(Ethernet_MAC_BASE + 0x128)
/** Ethernet_MAC_DMACTxRLR Channel Tx descriptor ring length register **/
#define Ethernet_MAC_DMACTxRLR			MMIO32(Ethernet_MAC_BASE + 0x12c)
/** Ethernet_MAC_DMACRxRLR Channel Rx descriptor ring length register **/
#define Ethernet_MAC_DMACRxRLR			MMIO32(Ethernet_MAC_BASE + 0x130)
/** Ethernet_MAC_DMACIER Channel interrupt enable register **/
#define Ethernet_MAC_DMACIER			MMIO32(Ethernet_MAC_BASE + 0x134)
/** Ethernet_MAC_DMACRxIWTR Channel Rx interrupt watchdog timer register **/
#define Ethernet_MAC_DMACRxIWTR			MMIO32(Ethernet_MAC_BASE + 0x138)
/** Ethernet_MAC_DMACCATxDR Channel current application transmit descriptor register **/
#define Ethernet_MAC_DMACCATxDR			MMIO32(Ethernet_MAC_BASE + 0x144)
/** Ethernet_MAC_DMACCARxDR Channel current application receive descriptor register **/
#define Ethernet_MAC_DMACCARxDR			MMIO32(Ethernet_MAC_BASE + 0x14c)
/** Ethernet_MAC_DMACCATxBR Channel current application transmit buffer register **/
#define Ethernet_MAC_DMACCATxBR			MMIO32(Ethernet_MAC_BASE + 0x154)
/** Ethernet_MAC_DMACCARxBR Channel current application receive buffer register **/
#define Ethernet_MAC_DMACCARxBR			MMIO32(Ethernet_MAC_BASE + 0x15c)
/** Ethernet_MAC_DMACSR Channel status register **/
#define Ethernet_MAC_DMACSR			MMIO32(Ethernet_MAC_BASE + 0x160)
/** Ethernet_MAC_DMACMFCR Channel missed frame count register **/
#define Ethernet_MAC_DMACMFCR			MMIO32(Ethernet_MAC_BASE + 0x16c)

/**@}*/


/** @defgroup ethernet_mac_dmamr DMAMR DMA mode register
@{*/

/** Ethernet_MAC_DMAMR_INTM Interrupt Mode **/
#define Ethernet_MAC_DMAMR_INTM		(1 << 16)

#define Ethernet_MAC_DMAMR_PR_SHIFT		12
#define Ethernet_MAC_DMAMR_PR_MASK		0x07
/** @defgroup ethernet_mac_dmamr_pr PR Priority ratio
@{*/
/**@}*/

/** Ethernet_MAC_DMAMR_TXPR Transmit priority **/
#define Ethernet_MAC_DMAMR_TXPR		(1 << 11)
/** Ethernet_MAC_DMAMR_DA DMA Tx or Rx Arbitration Scheme **/
#define Ethernet_MAC_DMAMR_DA		(1 << 1)
/** Ethernet_MAC_DMAMR_SWR Software Reset **/
#define Ethernet_MAC_DMAMR_SWR		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmasbmr DMASBMR System bus mode register
@{*/

/** Ethernet_MAC_DMASBMR_RB Rebuild INCRx Burst **/
#define Ethernet_MAC_DMASBMR_RB		(1 << 15)
/** Ethernet_MAC_DMASBMR_MB Mixed Burst **/
#define Ethernet_MAC_DMASBMR_MB		(1 << 14)
/** Ethernet_MAC_DMASBMR_AAL Address-Aligned Beats **/
#define Ethernet_MAC_DMASBMR_AAL		(1 << 12)
/** Ethernet_MAC_DMASBMR_FB Fixed Burst Length **/
#define Ethernet_MAC_DMASBMR_FB		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmaisr DMAISR Interrupt status register
@{*/

/** Ethernet_MAC_DMAISR_MACIS MAC Interrupt Status **/
#define Ethernet_MAC_DMAISR_MACIS		(1 << 17)
/** Ethernet_MAC_DMAISR_MTLIS MTL Interrupt Status **/
#define Ethernet_MAC_DMAISR_MTLIS		(1 << 16)
/** Ethernet_MAC_DMAISR_DC0IS DMA Channel Interrupt Status **/
#define Ethernet_MAC_DMAISR_DC0IS		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmadsr DMADSR Debug status register
@{*/


#define Ethernet_MAC_DMADSR_TPS0_SHIFT		12
#define Ethernet_MAC_DMADSR_TPS0_MASK		0x0f
/** @defgroup ethernet_mac_dmadsr_tps0 TPS0 DMA Channel Transmit Process State
@{*/
/**@}*/


#define Ethernet_MAC_DMADSR_RPS0_SHIFT		8
#define Ethernet_MAC_DMADSR_RPS0_MASK		0x0f
/** @defgroup ethernet_mac_dmadsr_rps0 RPS0 DMA Channel Receive Process State
@{*/
/**@}*/

/** Ethernet_MAC_DMADSR_AXWHSTS AHB Master Write Channel **/
#define Ethernet_MAC_DMADSR_AXWHSTS		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmaccr DMACCR Channel control register
@{*/


#define Ethernet_MAC_DMACCR_DSL_SHIFT		18
#define Ethernet_MAC_DMACCR_DSL_MASK		0x07
/** @defgroup ethernet_mac_dmaccr_dsl DSL Descriptor Skip Length
@{*/
/**@}*/

/** Ethernet_MAC_DMACCR_PBLX8 8xPBL mode **/
#define Ethernet_MAC_DMACCR_PBLX8		(1 << 16)

#define Ethernet_MAC_DMACCR_MSS_SHIFT		0
#define Ethernet_MAC_DMACCR_MSS_MASK		0x3fff
/** @defgroup ethernet_mac_dmaccr_mss MSS Maximum Segment Size
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmactxcr DMACTxCR Channel transmit control register
@{*/


#define Ethernet_MAC_DMACTxCR_TXPBL_SHIFT		16
#define Ethernet_MAC_DMACTxCR_TXPBL_MASK		0x3f
/** @defgroup ethernet_mac_dmactxcr_txpbl TXPBL Transmit Programmable Burst Length
@{*/
/**@}*/

/** Ethernet_MAC_DMACTxCR_TSE TCP Segmentation Enabled **/
#define Ethernet_MAC_DMACTxCR_TSE		(1 << 12)
/** Ethernet_MAC_DMACTxCR_OSF Operate on Second Packet **/
#define Ethernet_MAC_DMACTxCR_OSF		(1 << 4)
/** Ethernet_MAC_DMACTxCR_ST Start or Stop Transmission Command **/
#define Ethernet_MAC_DMACTxCR_ST		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmacrxcr DMACRxCR Channel receive control register
@{*/

/** Ethernet_MAC_DMACRxCR_RPF DMA Rx Channel Packet Flush **/
#define Ethernet_MAC_DMACRxCR_RPF		(1 << 31)

#define Ethernet_MAC_DMACRxCR_RXPBL_SHIFT		16
#define Ethernet_MAC_DMACRxCR_RXPBL_MASK		0x3f
/** @defgroup ethernet_mac_dmacrxcr_rxpbl RXPBL RXPBL
@{*/
/**@}*/


#define Ethernet_MAC_DMACRxCR_RBSZ_SHIFT		1
#define Ethernet_MAC_DMACRxCR_RBSZ_MASK		0x3fff
/** @defgroup ethernet_mac_dmacrxcr_rbsz RBSZ Receive Buffer size
@{*/
/**@}*/

/** Ethernet_MAC_DMACRxCR_SR Start or Stop Receive Command **/
#define Ethernet_MAC_DMACRxCR_SR		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmactxdlar DMACTxDLAR Channel Tx descriptor list address register
@{*/


#define Ethernet_MAC_DMACTxDLAR_TDESLA_SHIFT		2
#define Ethernet_MAC_DMACTxDLAR_TDESLA_MASK		0x3fffffff
/** @defgroup ethernet_mac_dmactxdlar_tdesla TDESLA Start of Transmit List
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmacrxdlar DMACRxDLAR Channel Rx descriptor list address register
@{*/


#define Ethernet_MAC_DMACRxDLAR_RDESLA_SHIFT		2
#define Ethernet_MAC_DMACRxDLAR_RDESLA_MASK		0x3fffffff
/** @defgroup ethernet_mac_dmacrxdlar_rdesla RDESLA Start of Receive List
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmactxdtpr DMACTxDTPR Channel Tx descriptor tail pointer register
@{*/


#define Ethernet_MAC_DMACTxDTPR_TDT_SHIFT		2
#define Ethernet_MAC_DMACTxDTPR_TDT_MASK		0x3fffffff
/** @defgroup ethernet_mac_dmactxdtpr_tdt TDT Transmit Descriptor Tail Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmacrxdtpr DMACRxDTPR Channel Rx descriptor tail pointer register
@{*/


#define Ethernet_MAC_DMACRxDTPR_RDT_SHIFT		2
#define Ethernet_MAC_DMACRxDTPR_RDT_MASK		0x3fffffff
/** @defgroup ethernet_mac_dmacrxdtpr_rdt RDT Receive Descriptor Tail Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmactxrlr DMACTxRLR Channel Tx descriptor ring length register
@{*/


#define Ethernet_MAC_DMACTxRLR_TDRL_SHIFT		0
#define Ethernet_MAC_DMACTxRLR_TDRL_MASK		0x3ff
/** @defgroup ethernet_mac_dmactxrlr_tdrl TDRL Transmit Descriptor Ring Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmacrxrlr DMACRxRLR Channel Rx descriptor ring length register
@{*/


#define Ethernet_MAC_DMACRxRLR_RDRL_SHIFT		0
#define Ethernet_MAC_DMACRxRLR_RDRL_MASK		0x3ff
/** @defgroup ethernet_mac_dmacrxrlr_rdrl RDRL Receive Descriptor Ring Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmacier DMACIER Channel interrupt enable register
@{*/

/** Ethernet_MAC_DMACIER_NIE Normal Interrupt Summary Enable **/
#define Ethernet_MAC_DMACIER_NIE		(1 << 15)
/** Ethernet_MAC_DMACIER_AIE Abnormal Interrupt Summary Enable **/
#define Ethernet_MAC_DMACIER_AIE		(1 << 14)
/** Ethernet_MAC_DMACIER_CDEE Context Descriptor Error Enable **/
#define Ethernet_MAC_DMACIER_CDEE		(1 << 13)
/** Ethernet_MAC_DMACIER_FBEE Fatal Bus Error Enable **/
#define Ethernet_MAC_DMACIER_FBEE		(1 << 12)
/** Ethernet_MAC_DMACIER_ERIE Early Receive Interrupt Enable **/
#define Ethernet_MAC_DMACIER_ERIE		(1 << 11)
/** Ethernet_MAC_DMACIER_ETIE Early Transmit Interrupt Enable **/
#define Ethernet_MAC_DMACIER_ETIE		(1 << 10)
/** Ethernet_MAC_DMACIER_RWTE Receive Watchdog Timeout Enable **/
#define Ethernet_MAC_DMACIER_RWTE		(1 << 9)
/** Ethernet_MAC_DMACIER_RSE Receive Stopped Enable **/
#define Ethernet_MAC_DMACIER_RSE		(1 << 8)
/** Ethernet_MAC_DMACIER_RBUE Receive Buffer Unavailable Enable **/
#define Ethernet_MAC_DMACIER_RBUE		(1 << 7)
/** Ethernet_MAC_DMACIER_RIE Receive Interrupt Enable **/
#define Ethernet_MAC_DMACIER_RIE		(1 << 6)
/** Ethernet_MAC_DMACIER_TBUE Transmit Buffer Unavailable Enable **/
#define Ethernet_MAC_DMACIER_TBUE		(1 << 2)
/** Ethernet_MAC_DMACIER_TXSE Transmit Stopped Enable **/
#define Ethernet_MAC_DMACIER_TXSE		(1 << 1)
/** Ethernet_MAC_DMACIER_TIE Transmit Interrupt Enable **/
#define Ethernet_MAC_DMACIER_TIE		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmacrxiwtr DMACRxIWTR Channel Rx interrupt watchdog timer register
@{*/


#define Ethernet_MAC_DMACRxIWTR_RWT_SHIFT		0
#define Ethernet_MAC_DMACRxIWTR_RWT_MASK		0xff
/** @defgroup ethernet_mac_dmacrxiwtr_rwt RWT Receive Interrupt Watchdog Timer Count
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmaccatxdr DMACCATxDR Channel current application transmit descriptor register
@{*/


#define Ethernet_MAC_DMACCATxDR_CURTDESAPTR_SHIFT		0
#define Ethernet_MAC_DMACCATxDR_CURTDESAPTR_MASK		0xffffffff
/** @defgroup ethernet_mac_dmaccatxdr_curtdesaptr CURTDESAPTR Application Transmit Descriptor Address Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmaccarxdr DMACCARxDR Channel current application receive descriptor register
@{*/


#define Ethernet_MAC_DMACCARxDR_CURRDESAPTR_SHIFT		0
#define Ethernet_MAC_DMACCARxDR_CURRDESAPTR_MASK		0xffffffff
/** @defgroup ethernet_mac_dmaccarxdr_currdesaptr CURRDESAPTR Application Receive Descriptor Address Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmaccatxbr DMACCATxBR Channel current application transmit buffer register
@{*/


#define Ethernet_MAC_DMACCATxBR_CURTBUFAPTR_SHIFT		0
#define Ethernet_MAC_DMACCATxBR_CURTBUFAPTR_MASK		0xffffffff
/** @defgroup ethernet_mac_dmaccatxbr_curtbufaptr CURTBUFAPTR Application Transmit Buffer Address Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmaccarxbr DMACCARxBR Channel current application receive buffer register
@{*/


#define Ethernet_MAC_DMACCARxBR_CURRBUFAPTR_SHIFT		0
#define Ethernet_MAC_DMACCARxBR_CURRBUFAPTR_MASK		0xffffffff
/** @defgroup ethernet_mac_dmaccarxbr_currbufaptr CURRBUFAPTR Application Receive Buffer Address Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmacsr DMACSR Channel status register
@{*/


#define Ethernet_MAC_DMACSR_REB_SHIFT		19
#define Ethernet_MAC_DMACSR_REB_MASK		0x07
/** @defgroup ethernet_mac_dmacsr_reb REB Rx DMA Error Bits
@{*/
/**@}*/


#define Ethernet_MAC_DMACSR_TEB_SHIFT		16
#define Ethernet_MAC_DMACSR_TEB_MASK		0x07
/** @defgroup ethernet_mac_dmacsr_teb TEB Tx DMA Error Bits
@{*/
/**@}*/

/** Ethernet_MAC_DMACSR_NIS Normal Interrupt Summary **/
#define Ethernet_MAC_DMACSR_NIS		(1 << 15)
/** Ethernet_MAC_DMACSR_AIS Abnormal Interrupt Summary **/
#define Ethernet_MAC_DMACSR_AIS		(1 << 14)
/** Ethernet_MAC_DMACSR_CDE Context Descriptor Error **/
#define Ethernet_MAC_DMACSR_CDE		(1 << 13)
/** Ethernet_MAC_DMACSR_FBE Fatal Bus Error **/
#define Ethernet_MAC_DMACSR_FBE		(1 << 12)
/** Ethernet_MAC_DMACSR_ER Early Receive Interrupt **/
#define Ethernet_MAC_DMACSR_ER		(1 << 11)
/** Ethernet_MAC_DMACSR_ET Early Transmit Interrupt **/
#define Ethernet_MAC_DMACSR_ET		(1 << 10)
/** Ethernet_MAC_DMACSR_RWT Receive Watchdog Timeout **/
#define Ethernet_MAC_DMACSR_RWT		(1 << 9)
/** Ethernet_MAC_DMACSR_RPS Receive Process Stopped **/
#define Ethernet_MAC_DMACSR_RPS		(1 << 8)
/** Ethernet_MAC_DMACSR_RBU Receive Buffer Unavailable **/
#define Ethernet_MAC_DMACSR_RBU		(1 << 7)
/** Ethernet_MAC_DMACSR_RI Receive Interrupt **/
#define Ethernet_MAC_DMACSR_RI		(1 << 6)
/** Ethernet_MAC_DMACSR_TBU Transmit Buffer Unavailable **/
#define Ethernet_MAC_DMACSR_TBU		(1 << 2)
/** Ethernet_MAC_DMACSR_TPS Transmit Process Stopped **/
#define Ethernet_MAC_DMACSR_TPS		(1 << 1)
/** Ethernet_MAC_DMACSR_TI Transmit Interrupt **/
#define Ethernet_MAC_DMACSR_TI		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmacmfcr DMACMFCR Channel missed frame count register
@{*/

/** Ethernet_MAC_DMACMFCR_MFCO Overflow status of the MFC Counter **/
#define Ethernet_MAC_DMACMFCR_MFCO		(1 << 15)

#define Ethernet_MAC_DMACMFCR_MFC_SHIFT		0
#define Ethernet_MAC_DMACMFCR_MFC_MASK		0x7ff
/** @defgroup ethernet_mac_dmacmfcr_mfc MFC Dropped Packet Counters
@{*/
/**@}*/


/**@}*/

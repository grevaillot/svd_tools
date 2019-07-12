#pragma once 

/* --- Ethernet_DMA: Ethernet: DMA mode register (DMA) -------------- */

/** @defgroup ethernet_dma_registers Ethernet: DMA mode register (DMA) Register
@{*/

/** Ethernet_DMA_DMAMR DMA mode register **/
#define Ethernet_DMA_DMAMR			MMIO32(Ethernet_DMA_BASE + 0x00)
/** Ethernet_DMA_DMASBMR System bus mode register **/
#define Ethernet_DMA_DMASBMR			MMIO32(Ethernet_DMA_BASE + 0x04)
/** Ethernet_DMA_DMAISR Interrupt status register **/
#define Ethernet_DMA_DMAISR			MMIO32(Ethernet_DMA_BASE + 0x08)
/** Ethernet_DMA_DMADSR Debug status register **/
#define Ethernet_DMA_DMADSR			MMIO32(Ethernet_DMA_BASE + 0x0c)
/** Ethernet_DMA_DMACCR Channel control register **/
#define Ethernet_DMA_DMACCR			MMIO32(Ethernet_DMA_BASE + 0x100)
/** Ethernet_DMA_DMACTxCR Channel transmit control register **/
#define Ethernet_DMA_DMACTxCR			MMIO32(Ethernet_DMA_BASE + 0x104)
/** Ethernet_DMA_DMACRxCR Channel receive control register **/
#define Ethernet_DMA_DMACRxCR			MMIO32(Ethernet_DMA_BASE + 0x108)
/** Ethernet_DMA_DMACTxDLAR Channel Tx descriptor list address register **/
#define Ethernet_DMA_DMACTxDLAR			MMIO32(Ethernet_DMA_BASE + 0x114)
/** Ethernet_DMA_DMACRxDLAR Channel Rx descriptor list address register **/
#define Ethernet_DMA_DMACRxDLAR			MMIO32(Ethernet_DMA_BASE + 0x11c)
/** Ethernet_DMA_DMACTxDTPR Channel Tx descriptor tail pointer register **/
#define Ethernet_DMA_DMACTxDTPR			MMIO32(Ethernet_DMA_BASE + 0x120)
/** Ethernet_DMA_DMACRxDTPR Channel Rx descriptor tail pointer register **/
#define Ethernet_DMA_DMACRxDTPR			MMIO32(Ethernet_DMA_BASE + 0x128)
/** Ethernet_DMA_DMACTxRLR Channel Tx descriptor ring length register **/
#define Ethernet_DMA_DMACTxRLR			MMIO32(Ethernet_DMA_BASE + 0x12c)
/** Ethernet_DMA_DMACRxRLR Channel Rx descriptor ring length register **/
#define Ethernet_DMA_DMACRxRLR			MMIO32(Ethernet_DMA_BASE + 0x130)
/** Ethernet_DMA_DMACIER Channel interrupt enable register **/
#define Ethernet_DMA_DMACIER			MMIO32(Ethernet_DMA_BASE + 0x134)
/** Ethernet_DMA_DMACRxIWTR Channel Rx interrupt watchdog timer register **/
#define Ethernet_DMA_DMACRxIWTR			MMIO32(Ethernet_DMA_BASE + 0x138)
/** Ethernet_DMA_DMACCATxDR Channel current application transmit descriptor register **/
#define Ethernet_DMA_DMACCATxDR			MMIO32(Ethernet_DMA_BASE + 0x144)
/** Ethernet_DMA_DMACCARxDR Channel current application receive descriptor register **/
#define Ethernet_DMA_DMACCARxDR			MMIO32(Ethernet_DMA_BASE + 0x14c)
/** Ethernet_DMA_DMACCATxBR Channel current application transmit buffer register **/
#define Ethernet_DMA_DMACCATxBR			MMIO32(Ethernet_DMA_BASE + 0x154)
/** Ethernet_DMA_DMACCARxBR Channel current application receive buffer register **/
#define Ethernet_DMA_DMACCARxBR			MMIO32(Ethernet_DMA_BASE + 0x15c)
/** Ethernet_DMA_DMACSR Channel status register **/
#define Ethernet_DMA_DMACSR			MMIO32(Ethernet_DMA_BASE + 0x160)
/** Ethernet_DMA_DMACMFCR Channel missed frame count register **/
#define Ethernet_DMA_DMACMFCR			MMIO32(Ethernet_DMA_BASE + 0x16c)

/**@}*/


/** @defgroup ethernet_dma_dmamr DMAMR DMA mode register
@{*/

/** Ethernet_DMA_DMAMR_INTM Interrupt Mode **/
#define Ethernet_DMA_DMAMR_INTM		(1 << 16)

#define Ethernet_DMA_DMAMR_PR_SHIFT		12
#define Ethernet_DMA_DMAMR_PR_MASK		0x07
/** @defgroup ethernet_dma_dmamr_pr PR Priority ratio
@{*/
/**@}*/

/** Ethernet_DMA_DMAMR_TXPR Transmit priority **/
#define Ethernet_DMA_DMAMR_TXPR		(1 << 11)
/** Ethernet_DMA_DMAMR_DA DMA Tx or Rx Arbitration Scheme **/
#define Ethernet_DMA_DMAMR_DA		(1 << 1)
/** Ethernet_DMA_DMAMR_SWR Software Reset **/
#define Ethernet_DMA_DMAMR_SWR		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmasbmr DMASBMR System bus mode register
@{*/

/** Ethernet_DMA_DMASBMR_RB Rebuild INCRx Burst **/
#define Ethernet_DMA_DMASBMR_RB		(1 << 15)
/** Ethernet_DMA_DMASBMR_MB Mixed Burst **/
#define Ethernet_DMA_DMASBMR_MB		(1 << 14)
/** Ethernet_DMA_DMASBMR_AAL Address-Aligned Beats **/
#define Ethernet_DMA_DMASBMR_AAL		(1 << 12)
/** Ethernet_DMA_DMASBMR_FB Fixed Burst Length **/
#define Ethernet_DMA_DMASBMR_FB		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmaisr DMAISR Interrupt status register
@{*/

/** Ethernet_DMA_DMAISR_MACIS MAC Interrupt Status **/
#define Ethernet_DMA_DMAISR_MACIS		(1 << 17)
/** Ethernet_DMA_DMAISR_MTLIS MTL Interrupt Status **/
#define Ethernet_DMA_DMAISR_MTLIS		(1 << 16)
/** Ethernet_DMA_DMAISR_DC0IS DMA Channel Interrupt Status **/
#define Ethernet_DMA_DMAISR_DC0IS		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmadsr DMADSR Debug status register
@{*/


#define Ethernet_DMA_DMADSR_TPS0_SHIFT		12
#define Ethernet_DMA_DMADSR_TPS0_MASK		0x0f
/** @defgroup ethernet_dma_dmadsr_tps0 TPS0 DMA Channel Transmit Process State
@{*/
/**@}*/


#define Ethernet_DMA_DMADSR_RPS0_SHIFT		8
#define Ethernet_DMA_DMADSR_RPS0_MASK		0x0f
/** @defgroup ethernet_dma_dmadsr_rps0 RPS0 DMA Channel Receive Process State
@{*/
/**@}*/

/** Ethernet_DMA_DMADSR_AXWHSTS AHB Master Write Channel **/
#define Ethernet_DMA_DMADSR_AXWHSTS		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmaccr DMACCR Channel control register
@{*/


#define Ethernet_DMA_DMACCR_DSL_SHIFT		18
#define Ethernet_DMA_DMACCR_DSL_MASK		0x07
/** @defgroup ethernet_dma_dmaccr_dsl DSL Descriptor Skip Length
@{*/
/**@}*/

/** Ethernet_DMA_DMACCR_PBLX8 8xPBL mode **/
#define Ethernet_DMA_DMACCR_PBLX8		(1 << 16)

#define Ethernet_DMA_DMACCR_MSS_SHIFT		0
#define Ethernet_DMA_DMACCR_MSS_MASK		0x3fff
/** @defgroup ethernet_dma_dmaccr_mss MSS Maximum Segment Size
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmactxcr DMACTxCR Channel transmit control register
@{*/


#define Ethernet_DMA_DMACTxCR_TXPBL_SHIFT		16
#define Ethernet_DMA_DMACTxCR_TXPBL_MASK		0x3f
/** @defgroup ethernet_dma_dmactxcr_txpbl TXPBL Transmit Programmable Burst Length
@{*/
/**@}*/

/** Ethernet_DMA_DMACTxCR_TSE TCP Segmentation Enabled **/
#define Ethernet_DMA_DMACTxCR_TSE		(1 << 12)
/** Ethernet_DMA_DMACTxCR_OSF Operate on Second Packet **/
#define Ethernet_DMA_DMACTxCR_OSF		(1 << 4)
/** Ethernet_DMA_DMACTxCR_ST Start or Stop Transmission Command **/
#define Ethernet_DMA_DMACTxCR_ST		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmacrxcr DMACRxCR Channel receive control register
@{*/

/** Ethernet_DMA_DMACRxCR_RPF DMA Rx Channel Packet Flush **/
#define Ethernet_DMA_DMACRxCR_RPF		(1 << 31)

#define Ethernet_DMA_DMACRxCR_RXPBL_SHIFT		16
#define Ethernet_DMA_DMACRxCR_RXPBL_MASK		0x3f
/** @defgroup ethernet_dma_dmacrxcr_rxpbl RXPBL RXPBL
@{*/
/**@}*/


#define Ethernet_DMA_DMACRxCR_RBSZ_SHIFT		1
#define Ethernet_DMA_DMACRxCR_RBSZ_MASK		0x3fff
/** @defgroup ethernet_dma_dmacrxcr_rbsz RBSZ Receive Buffer size
@{*/
/**@}*/

/** Ethernet_DMA_DMACRxCR_SR Start or Stop Receive Command **/
#define Ethernet_DMA_DMACRxCR_SR		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmactxdlar DMACTxDLAR Channel Tx descriptor list address register
@{*/


#define Ethernet_DMA_DMACTxDLAR_TDESLA_SHIFT		2
#define Ethernet_DMA_DMACTxDLAR_TDESLA_MASK		0x3fffffff
/** @defgroup ethernet_dma_dmactxdlar_tdesla TDESLA Start of Transmit List
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmacrxdlar DMACRxDLAR Channel Rx descriptor list address register
@{*/


#define Ethernet_DMA_DMACRxDLAR_RDESLA_SHIFT		2
#define Ethernet_DMA_DMACRxDLAR_RDESLA_MASK		0x3fffffff
/** @defgroup ethernet_dma_dmacrxdlar_rdesla RDESLA Start of Receive List
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmactxdtpr DMACTxDTPR Channel Tx descriptor tail pointer register
@{*/


#define Ethernet_DMA_DMACTxDTPR_TDT_SHIFT		2
#define Ethernet_DMA_DMACTxDTPR_TDT_MASK		0x3fffffff
/** @defgroup ethernet_dma_dmactxdtpr_tdt TDT Transmit Descriptor Tail Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmacrxdtpr DMACRxDTPR Channel Rx descriptor tail pointer register
@{*/


#define Ethernet_DMA_DMACRxDTPR_RDT_SHIFT		2
#define Ethernet_DMA_DMACRxDTPR_RDT_MASK		0x3fffffff
/** @defgroup ethernet_dma_dmacrxdtpr_rdt RDT Receive Descriptor Tail Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmactxrlr DMACTxRLR Channel Tx descriptor ring length register
@{*/


#define Ethernet_DMA_DMACTxRLR_TDRL_SHIFT		0
#define Ethernet_DMA_DMACTxRLR_TDRL_MASK		0x3ff
/** @defgroup ethernet_dma_dmactxrlr_tdrl TDRL Transmit Descriptor Ring Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmacrxrlr DMACRxRLR Channel Rx descriptor ring length register
@{*/


#define Ethernet_DMA_DMACRxRLR_RDRL_SHIFT		0
#define Ethernet_DMA_DMACRxRLR_RDRL_MASK		0x3ff
/** @defgroup ethernet_dma_dmacrxrlr_rdrl RDRL Receive Descriptor Ring Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmacier DMACIER Channel interrupt enable register
@{*/

/** Ethernet_DMA_DMACIER_NIE Normal Interrupt Summary Enable **/
#define Ethernet_DMA_DMACIER_NIE		(1 << 15)
/** Ethernet_DMA_DMACIER_AIE Abnormal Interrupt Summary Enable **/
#define Ethernet_DMA_DMACIER_AIE		(1 << 14)
/** Ethernet_DMA_DMACIER_CDEE Context Descriptor Error Enable **/
#define Ethernet_DMA_DMACIER_CDEE		(1 << 13)
/** Ethernet_DMA_DMACIER_FBEE Fatal Bus Error Enable **/
#define Ethernet_DMA_DMACIER_FBEE		(1 << 12)
/** Ethernet_DMA_DMACIER_ERIE Early Receive Interrupt Enable **/
#define Ethernet_DMA_DMACIER_ERIE		(1 << 11)
/** Ethernet_DMA_DMACIER_ETIE Early Transmit Interrupt Enable **/
#define Ethernet_DMA_DMACIER_ETIE		(1 << 10)
/** Ethernet_DMA_DMACIER_RWTE Receive Watchdog Timeout Enable **/
#define Ethernet_DMA_DMACIER_RWTE		(1 << 9)
/** Ethernet_DMA_DMACIER_RSE Receive Stopped Enable **/
#define Ethernet_DMA_DMACIER_RSE		(1 << 8)
/** Ethernet_DMA_DMACIER_RBUE Receive Buffer Unavailable Enable **/
#define Ethernet_DMA_DMACIER_RBUE		(1 << 7)
/** Ethernet_DMA_DMACIER_RIE Receive Interrupt Enable **/
#define Ethernet_DMA_DMACIER_RIE		(1 << 6)
/** Ethernet_DMA_DMACIER_TBUE Transmit Buffer Unavailable Enable **/
#define Ethernet_DMA_DMACIER_TBUE		(1 << 2)
/** Ethernet_DMA_DMACIER_TXSE Transmit Stopped Enable **/
#define Ethernet_DMA_DMACIER_TXSE		(1 << 1)
/** Ethernet_DMA_DMACIER_TIE Transmit Interrupt Enable **/
#define Ethernet_DMA_DMACIER_TIE		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmacrxiwtr DMACRxIWTR Channel Rx interrupt watchdog timer register
@{*/


#define Ethernet_DMA_DMACRxIWTR_RWT_SHIFT		0
#define Ethernet_DMA_DMACRxIWTR_RWT_MASK		0xff
/** @defgroup ethernet_dma_dmacrxiwtr_rwt RWT Receive Interrupt Watchdog Timer Count
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmaccatxdr DMACCATxDR Channel current application transmit descriptor register
@{*/


#define Ethernet_DMA_DMACCATxDR_CURTDESAPTR_SHIFT		0
#define Ethernet_DMA_DMACCATxDR_CURTDESAPTR_MASK		0xffffffff
/** @defgroup ethernet_dma_dmaccatxdr_curtdesaptr CURTDESAPTR Application Transmit Descriptor Address Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmaccarxdr DMACCARxDR Channel current application receive descriptor register
@{*/


#define Ethernet_DMA_DMACCARxDR_CURRDESAPTR_SHIFT		0
#define Ethernet_DMA_DMACCARxDR_CURRDESAPTR_MASK		0xffffffff
/** @defgroup ethernet_dma_dmaccarxdr_currdesaptr CURRDESAPTR Application Receive Descriptor Address Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmaccatxbr DMACCATxBR Channel current application transmit buffer register
@{*/


#define Ethernet_DMA_DMACCATxBR_CURTBUFAPTR_SHIFT		0
#define Ethernet_DMA_DMACCATxBR_CURTBUFAPTR_MASK		0xffffffff
/** @defgroup ethernet_dma_dmaccatxbr_curtbufaptr CURTBUFAPTR Application Transmit Buffer Address Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmaccarxbr DMACCARxBR Channel current application receive buffer register
@{*/


#define Ethernet_DMA_DMACCARxBR_CURRBUFAPTR_SHIFT		0
#define Ethernet_DMA_DMACCARxBR_CURRBUFAPTR_MASK		0xffffffff
/** @defgroup ethernet_dma_dmaccarxbr_currbufaptr CURRBUFAPTR Application Receive Buffer Address Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmacsr DMACSR Channel status register
@{*/


#define Ethernet_DMA_DMACSR_REB_SHIFT		19
#define Ethernet_DMA_DMACSR_REB_MASK		0x07
/** @defgroup ethernet_dma_dmacsr_reb REB Rx DMA Error Bits
@{*/
/**@}*/


#define Ethernet_DMA_DMACSR_TEB_SHIFT		16
#define Ethernet_DMA_DMACSR_TEB_MASK		0x07
/** @defgroup ethernet_dma_dmacsr_teb TEB Tx DMA Error Bits
@{*/
/**@}*/

/** Ethernet_DMA_DMACSR_NIS Normal Interrupt Summary **/
#define Ethernet_DMA_DMACSR_NIS		(1 << 15)
/** Ethernet_DMA_DMACSR_AIS Abnormal Interrupt Summary **/
#define Ethernet_DMA_DMACSR_AIS		(1 << 14)
/** Ethernet_DMA_DMACSR_CDE Context Descriptor Error **/
#define Ethernet_DMA_DMACSR_CDE		(1 << 13)
/** Ethernet_DMA_DMACSR_FBE Fatal Bus Error **/
#define Ethernet_DMA_DMACSR_FBE		(1 << 12)
/** Ethernet_DMA_DMACSR_ER Early Receive Interrupt **/
#define Ethernet_DMA_DMACSR_ER		(1 << 11)
/** Ethernet_DMA_DMACSR_ET Early Transmit Interrupt **/
#define Ethernet_DMA_DMACSR_ET		(1 << 10)
/** Ethernet_DMA_DMACSR_RWT Receive Watchdog Timeout **/
#define Ethernet_DMA_DMACSR_RWT		(1 << 9)
/** Ethernet_DMA_DMACSR_RPS Receive Process Stopped **/
#define Ethernet_DMA_DMACSR_RPS		(1 << 8)
/** Ethernet_DMA_DMACSR_RBU Receive Buffer Unavailable **/
#define Ethernet_DMA_DMACSR_RBU		(1 << 7)
/** Ethernet_DMA_DMACSR_RI Receive Interrupt **/
#define Ethernet_DMA_DMACSR_RI		(1 << 6)
/** Ethernet_DMA_DMACSR_TBU Transmit Buffer Unavailable **/
#define Ethernet_DMA_DMACSR_TBU		(1 << 2)
/** Ethernet_DMA_DMACSR_TPS Transmit Process Stopped **/
#define Ethernet_DMA_DMACSR_TPS		(1 << 1)
/** Ethernet_DMA_DMACSR_TI Transmit Interrupt **/
#define Ethernet_DMA_DMACSR_TI		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmacmfcr DMACMFCR Channel missed frame count register
@{*/

/** Ethernet_DMA_DMACMFCR_MFCO Overflow status of the MFC Counter **/
#define Ethernet_DMA_DMACMFCR_MFCO		(1 << 15)

#define Ethernet_DMA_DMACMFCR_MFC_SHIFT		0
#define Ethernet_DMA_DMACMFCR_MFC_MASK		0x7ff
/** @defgroup ethernet_dma_dmacmfcr_mfc MFC Dropped Packet Counters
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- ETHERNET_DMA: Ethernet: DMA controller operation ------------- */

/** @defgroup ethernet_dma_registers Ethernet: DMA controller operation Register
@{*/

/** ETHERNET_DMA_DMABMR Ethernet DMA bus mode register **/
#define ETHERNET_DMA_DMABMR			MMIO32(ETHERNET_DMA_BASE + 0x00)
/** ETHERNET_DMA_DMATPDR Ethernet DMA transmit poll demand register **/
#define ETHERNET_DMA_DMATPDR			MMIO32(ETHERNET_DMA_BASE + 0x04)
/** ETHERNET_DMA_DMARPDR EHERNET DMA receive poll demand register **/
#define ETHERNET_DMA_DMARPDR			MMIO32(ETHERNET_DMA_BASE + 0x08)
/** ETHERNET_DMA_DMARDLAR Ethernet DMA receive descriptor list address register **/
#define ETHERNET_DMA_DMARDLAR			MMIO32(ETHERNET_DMA_BASE + 0x0c)
/** ETHERNET_DMA_DMATDLAR Ethernet DMA transmit descriptor list address register **/
#define ETHERNET_DMA_DMATDLAR			MMIO32(ETHERNET_DMA_BASE + 0x10)
/** ETHERNET_DMA_DMASR Ethernet DMA status register **/
#define ETHERNET_DMA_DMASR			MMIO32(ETHERNET_DMA_BASE + 0x14)
/** ETHERNET_DMA_DMAOMR Ethernet DMA operation mode register **/
#define ETHERNET_DMA_DMAOMR			MMIO32(ETHERNET_DMA_BASE + 0x18)
/** ETHERNET_DMA_DMAIER Ethernet DMA interrupt enable register **/
#define ETHERNET_DMA_DMAIER			MMIO32(ETHERNET_DMA_BASE + 0x1c)
/** ETHERNET_DMA_DMAMFBOCR Ethernet DMA missed frame and buffer overflow counter register **/
#define ETHERNET_DMA_DMAMFBOCR			MMIO32(ETHERNET_DMA_BASE + 0x20)
/** ETHERNET_DMA_DMACHTDR Ethernet DMA current host transmit descriptor register **/
#define ETHERNET_DMA_DMACHTDR			MMIO32(ETHERNET_DMA_BASE + 0x48)
/** ETHERNET_DMA_DMACHRDR Ethernet DMA current host receive descriptor register **/
#define ETHERNET_DMA_DMACHRDR			MMIO32(ETHERNET_DMA_BASE + 0x4c)
/** ETHERNET_DMA_DMACHTBAR Ethernet DMA current host transmit buffer address register **/
#define ETHERNET_DMA_DMACHTBAR			MMIO32(ETHERNET_DMA_BASE + 0x50)
/** ETHERNET_DMA_DMACHRBAR Ethernet DMA current host receive buffer address register **/
#define ETHERNET_DMA_DMACHRBAR			MMIO32(ETHERNET_DMA_BASE + 0x54)

/**@}*/


/** @defgroup ethernet_dma_dmabmr DMABMR Ethernet DMA bus mode register
@{*/

/** ETHERNET_DMA_DMABMR_AAB Address-aligned beats **/
#define ETHERNET_DMA_DMABMR_AAB		(1 << 25)
/** ETHERNET_DMA_DMABMR_FPM 4xPBL mode **/
#define ETHERNET_DMA_DMABMR_FPM		(1 << 24)
/** ETHERNET_DMA_DMABMR_USP Use separate PBL **/
#define ETHERNET_DMA_DMABMR_USP		(1 << 23)

#define ETHERNET_DMA_DMABMR_RDP_SHIFT		17
#define ETHERNET_DMA_DMABMR_RDP_MASK		0x3f
/** @defgroup ethernet_dma_dmabmr_rdp RDP Rx DMA PBL
@{*/
/**@}*/

/** ETHERNET_DMA_DMABMR_FB Fixed burst **/
#define ETHERNET_DMA_DMABMR_FB		(1 << 16)

#define ETHERNET_DMA_DMABMR_RTPR_SHIFT		14
#define ETHERNET_DMA_DMABMR_RTPR_MASK		0x03
/** @defgroup ethernet_dma_dmabmr_rtpr RTPR Rx Tx priority ratio
@{*/
/**@}*/


#define ETHERNET_DMA_DMABMR_PBL_SHIFT		8
#define ETHERNET_DMA_DMABMR_PBL_MASK		0x3f
/** @defgroup ethernet_dma_dmabmr_pbl PBL Programmable burst length
@{*/
/**@}*/


#define ETHERNET_DMA_DMABMR_DSL_SHIFT		2
#define ETHERNET_DMA_DMABMR_DSL_MASK		0x1f
/** @defgroup ethernet_dma_dmabmr_dsl DSL Descriptor skip length
@{*/
/**@}*/

/** ETHERNET_DMA_DMABMR_DA DMA Arbitration **/
#define ETHERNET_DMA_DMABMR_DA		(1 << 1)
/** ETHERNET_DMA_DMABMR_SR Software reset **/
#define ETHERNET_DMA_DMABMR_SR		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmatpdr DMATPDR Ethernet DMA transmit poll demand register
@{*/


#define ETHERNET_DMA_DMATPDR_TPD_SHIFT		0
#define ETHERNET_DMA_DMATPDR_TPD_MASK		0xffffffff
/** @defgroup ethernet_dma_dmatpdr_tpd TPD Transmit poll demand
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmarpdr DMARPDR EHERNET DMA receive poll demand register
@{*/


#define ETHERNET_DMA_DMARPDR_RPD_SHIFT		0
#define ETHERNET_DMA_DMARPDR_RPD_MASK		0xffffffff
/** @defgroup ethernet_dma_dmarpdr_rpd RPD Receive poll demand
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmardlar DMARDLAR Ethernet DMA receive descriptor list address register
@{*/


#define ETHERNET_DMA_DMARDLAR_SRL_SHIFT		0
#define ETHERNET_DMA_DMARDLAR_SRL_MASK		0xffffffff
/** @defgroup ethernet_dma_dmardlar_srl SRL Start of receive list
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmatdlar DMATDLAR Ethernet DMA transmit descriptor list address register
@{*/


#define ETHERNET_DMA_DMATDLAR_STL_SHIFT		0
#define ETHERNET_DMA_DMATDLAR_STL_MASK		0xffffffff
/** @defgroup ethernet_dma_dmatdlar_stl STL Start of transmit list
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmasr DMASR Ethernet DMA status register
@{*/

/** ETHERNET_DMA_DMASR_TSTS Time stamp trigger status **/
#define ETHERNET_DMA_DMASR_TSTS		(1 << 29)
/** ETHERNET_DMA_DMASR_PMTS PMT status **/
#define ETHERNET_DMA_DMASR_PMTS		(1 << 28)
/** ETHERNET_DMA_DMASR_MMCS MMC status **/
#define ETHERNET_DMA_DMASR_MMCS		(1 << 27)

#define ETHERNET_DMA_DMASR_EBS_SHIFT		23
#define ETHERNET_DMA_DMASR_EBS_MASK		0x07
/** @defgroup ethernet_dma_dmasr_ebs EBS Error bits status
@{*/
/**@}*/


#define ETHERNET_DMA_DMASR_TPS_SHIFT		20
#define ETHERNET_DMA_DMASR_TPS_MASK		0x07
/** @defgroup ethernet_dma_dmasr_tps TPS Transmit process state
@{*/
/**@}*/


#define ETHERNET_DMA_DMASR_RPS_SHIFT		17
#define ETHERNET_DMA_DMASR_RPS_MASK		0x07
/** @defgroup ethernet_dma_dmasr_rps RPS Receive process state
@{*/
/**@}*/

/** ETHERNET_DMA_DMASR_NIS Normal interrupt summary **/
#define ETHERNET_DMA_DMASR_NIS		(1 << 16)
/** ETHERNET_DMA_DMASR_AIS Abnormal interrupt summary **/
#define ETHERNET_DMA_DMASR_AIS		(1 << 15)
/** ETHERNET_DMA_DMASR_ERS Early receive status **/
#define ETHERNET_DMA_DMASR_ERS		(1 << 14)
/** ETHERNET_DMA_DMASR_FBES Fatal bus error status **/
#define ETHERNET_DMA_DMASR_FBES		(1 << 13)
/** ETHERNET_DMA_DMASR_ETS Early transmit status **/
#define ETHERNET_DMA_DMASR_ETS		(1 << 10)
/** ETHERNET_DMA_DMASR_PWTS Receive watchdog timeout status **/
#define ETHERNET_DMA_DMASR_PWTS		(1 << 9)
/** ETHERNET_DMA_DMASR_RPSS Receive process stopped status **/
#define ETHERNET_DMA_DMASR_RPSS		(1 << 8)
/** ETHERNET_DMA_DMASR_RBUS Receive buffer unavailable status **/
#define ETHERNET_DMA_DMASR_RBUS		(1 << 7)
/** ETHERNET_DMA_DMASR_RS Receive status **/
#define ETHERNET_DMA_DMASR_RS		(1 << 6)
/** ETHERNET_DMA_DMASR_TUS Transmit underflow status **/
#define ETHERNET_DMA_DMASR_TUS		(1 << 5)
/** ETHERNET_DMA_DMASR_ROS Receive overflow status **/
#define ETHERNET_DMA_DMASR_ROS		(1 << 4)
/** ETHERNET_DMA_DMASR_TJTS Transmit jabber timeout status **/
#define ETHERNET_DMA_DMASR_TJTS		(1 << 3)
/** ETHERNET_DMA_DMASR_TBUS Transmit buffer unavailable status **/
#define ETHERNET_DMA_DMASR_TBUS		(1 << 2)
/** ETHERNET_DMA_DMASR_TPSS Transmit process stopped status **/
#define ETHERNET_DMA_DMASR_TPSS		(1 << 1)
/** ETHERNET_DMA_DMASR_TS Transmit status **/
#define ETHERNET_DMA_DMASR_TS		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmaomr DMAOMR Ethernet DMA operation mode register
@{*/

/** ETHERNET_DMA_DMAOMR_DTCEFD DTCEFD **/
#define ETHERNET_DMA_DMAOMR_DTCEFD		(1 << 26)
/** ETHERNET_DMA_DMAOMR_RSF RSF **/
#define ETHERNET_DMA_DMAOMR_RSF		(1 << 25)
/** ETHERNET_DMA_DMAOMR_DFRF DFRF **/
#define ETHERNET_DMA_DMAOMR_DFRF		(1 << 24)
/** ETHERNET_DMA_DMAOMR_TSF TSF **/
#define ETHERNET_DMA_DMAOMR_TSF		(1 << 21)
/** ETHERNET_DMA_DMAOMR_FTF FTF **/
#define ETHERNET_DMA_DMAOMR_FTF		(1 << 20)

#define ETHERNET_DMA_DMAOMR_TTC_SHIFT		14
#define ETHERNET_DMA_DMAOMR_TTC_MASK		0x07
/** @defgroup ethernet_dma_dmaomr_ttc TTC TTC
@{*/
/**@}*/

/** ETHERNET_DMA_DMAOMR_ST ST **/
#define ETHERNET_DMA_DMAOMR_ST		(1 << 13)
/** ETHERNET_DMA_DMAOMR_FEF FEF **/
#define ETHERNET_DMA_DMAOMR_FEF		(1 << 7)
/** ETHERNET_DMA_DMAOMR_FUGF FUGF **/
#define ETHERNET_DMA_DMAOMR_FUGF		(1 << 6)

#define ETHERNET_DMA_DMAOMR_RTC_SHIFT		3
#define ETHERNET_DMA_DMAOMR_RTC_MASK		0x03
/** @defgroup ethernet_dma_dmaomr_rtc RTC RTC
@{*/
/**@}*/

/** ETHERNET_DMA_DMAOMR_OSF OSF **/
#define ETHERNET_DMA_DMAOMR_OSF		(1 << 2)
/** ETHERNET_DMA_DMAOMR_SR SR **/
#define ETHERNET_DMA_DMAOMR_SR		(1 << 1)

/**@}*/

/** @defgroup ethernet_dma_dmaier DMAIER Ethernet DMA interrupt enable register
@{*/

/** ETHERNET_DMA_DMAIER_NISE Normal interrupt summary enable **/
#define ETHERNET_DMA_DMAIER_NISE		(1 << 16)
/** ETHERNET_DMA_DMAIER_AISE Abnormal interrupt summary enable **/
#define ETHERNET_DMA_DMAIER_AISE		(1 << 15)
/** ETHERNET_DMA_DMAIER_ERIE Early receive interrupt enable **/
#define ETHERNET_DMA_DMAIER_ERIE		(1 << 14)
/** ETHERNET_DMA_DMAIER_FBEIE Fatal bus error interrupt enable **/
#define ETHERNET_DMA_DMAIER_FBEIE		(1 << 13)
/** ETHERNET_DMA_DMAIER_ETIE Early transmit interrupt enable **/
#define ETHERNET_DMA_DMAIER_ETIE		(1 << 10)
/** ETHERNET_DMA_DMAIER_RWTIE receive watchdog timeout interrupt enable **/
#define ETHERNET_DMA_DMAIER_RWTIE		(1 << 9)
/** ETHERNET_DMA_DMAIER_RPSIE Receive process stopped interrupt enable **/
#define ETHERNET_DMA_DMAIER_RPSIE		(1 << 8)
/** ETHERNET_DMA_DMAIER_RBUIE Receive buffer unavailable interrupt enable **/
#define ETHERNET_DMA_DMAIER_RBUIE		(1 << 7)
/** ETHERNET_DMA_DMAIER_RIE Receive interrupt enable **/
#define ETHERNET_DMA_DMAIER_RIE		(1 << 6)
/** ETHERNET_DMA_DMAIER_TUIE Underflow interrupt enable **/
#define ETHERNET_DMA_DMAIER_TUIE		(1 << 5)
/** ETHERNET_DMA_DMAIER_ROIE Overflow interrupt enable **/
#define ETHERNET_DMA_DMAIER_ROIE		(1 << 4)
/** ETHERNET_DMA_DMAIER_TJTIE Transmit jabber timeout interrupt enable **/
#define ETHERNET_DMA_DMAIER_TJTIE		(1 << 3)
/** ETHERNET_DMA_DMAIER_TBUIE Transmit buffer unavailable interrupt enable **/
#define ETHERNET_DMA_DMAIER_TBUIE		(1 << 2)
/** ETHERNET_DMA_DMAIER_TPSIE Transmit process stopped interrupt enable **/
#define ETHERNET_DMA_DMAIER_TPSIE		(1 << 1)
/** ETHERNET_DMA_DMAIER_TIE Transmit interrupt enable **/
#define ETHERNET_DMA_DMAIER_TIE		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmamfbocr DMAMFBOCR Ethernet DMA missed frame and buffer overflow counter register
@{*/

/** ETHERNET_DMA_DMAMFBOCR_OFOC Overflow bit for FIFO overflow counter **/
#define ETHERNET_DMA_DMAMFBOCR_OFOC		(1 << 28)

#define ETHERNET_DMA_DMAMFBOCR_MFA_SHIFT		17
#define ETHERNET_DMA_DMAMFBOCR_MFA_MASK		0x7ff
/** @defgroup ethernet_dma_dmamfbocr_mfa MFA Missed frames by the application
@{*/
/**@}*/

/** ETHERNET_DMA_DMAMFBOCR_OMFC Overflow bit for missed frame counter **/
#define ETHERNET_DMA_DMAMFBOCR_OMFC		(1 << 16)

#define ETHERNET_DMA_DMAMFBOCR_MFC_SHIFT		0
#define ETHERNET_DMA_DMAMFBOCR_MFC_MASK		0xffff
/** @defgroup ethernet_dma_dmamfbocr_mfc MFC Missed frames by the controller
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmachtdr DMACHTDR Ethernet DMA current host transmit descriptor register
@{*/


#define ETHERNET_DMA_DMACHTDR_HTDAP_SHIFT		0
#define ETHERNET_DMA_DMACHTDR_HTDAP_MASK		0xffffffff
/** @defgroup ethernet_dma_dmachtdr_htdap HTDAP Host transmit descriptor address pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmachrdr DMACHRDR Ethernet DMA current host receive descriptor register
@{*/


#define ETHERNET_DMA_DMACHRDR_HRDAP_SHIFT		0
#define ETHERNET_DMA_DMACHRDR_HRDAP_MASK		0xffffffff
/** @defgroup ethernet_dma_dmachrdr_hrdap HRDAP Host receive descriptor address pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmachtbar DMACHTBAR Ethernet DMA current host transmit buffer address register
@{*/


#define ETHERNET_DMA_DMACHTBAR_HTBAP_SHIFT		0
#define ETHERNET_DMA_DMACHTBAR_HTBAP_MASK		0xffffffff
/** @defgroup ethernet_dma_dmachtbar_htbap HTBAP Host transmit buffer address pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmachrbar DMACHRBAR Ethernet DMA current host receive buffer address register
@{*/


#define ETHERNET_DMA_DMACHRBAR_HRBAP_SHIFT		0
#define ETHERNET_DMA_DMACHRBAR_HRBAP_MASK		0xffffffff
/** @defgroup ethernet_dma_dmachrbar_hrbap HRBAP Host receive buffer address pointer
@{*/
/**@}*/


/**@}*/

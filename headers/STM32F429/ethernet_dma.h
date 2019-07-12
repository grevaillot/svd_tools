#pragma once 

/* --- Ethernet_DMA: Ethernet: DMA controller operation ------------- */

/** @defgroup ethernet_dma_registers Ethernet: DMA controller operation Register
@{*/

/** Ethernet_DMA_DMABMR Ethernet DMA bus mode register **/
#define Ethernet_DMA_DMABMR			MMIO32(Ethernet_DMA_BASE + 0x00)
/** Ethernet_DMA_DMATPDR Ethernet DMA transmit poll demand register **/
#define Ethernet_DMA_DMATPDR			MMIO32(Ethernet_DMA_BASE + 0x04)
/** Ethernet_DMA_DMARPDR EHERNET DMA receive poll demand register **/
#define Ethernet_DMA_DMARPDR			MMIO32(Ethernet_DMA_BASE + 0x08)
/** Ethernet_DMA_DMARDLAR Ethernet DMA receive descriptor list address register **/
#define Ethernet_DMA_DMARDLAR			MMIO32(Ethernet_DMA_BASE + 0x0c)
/** Ethernet_DMA_DMATDLAR Ethernet DMA transmit descriptor list address register **/
#define Ethernet_DMA_DMATDLAR			MMIO32(Ethernet_DMA_BASE + 0x10)
/** Ethernet_DMA_DMASR Ethernet DMA status register **/
#define Ethernet_DMA_DMASR			MMIO32(Ethernet_DMA_BASE + 0x14)
/** Ethernet_DMA_DMAOMR Ethernet DMA operation mode register **/
#define Ethernet_DMA_DMAOMR			MMIO32(Ethernet_DMA_BASE + 0x18)
/** Ethernet_DMA_DMAIER Ethernet DMA interrupt enable register **/
#define Ethernet_DMA_DMAIER			MMIO32(Ethernet_DMA_BASE + 0x1c)
/** Ethernet_DMA_DMAMFBOCR Ethernet DMA missed frame and buffer overflow counter register **/
#define Ethernet_DMA_DMAMFBOCR			MMIO32(Ethernet_DMA_BASE + 0x20)
/** Ethernet_DMA_DMARSWTR Ethernet DMA receive status watchdog timer register **/
#define Ethernet_DMA_DMARSWTR			MMIO32(Ethernet_DMA_BASE + 0x24)
/** Ethernet_DMA_DMACHTDR Ethernet DMA current host transmit descriptor register **/
#define Ethernet_DMA_DMACHTDR			MMIO32(Ethernet_DMA_BASE + 0x48)
/** Ethernet_DMA_DMACHRDR Ethernet DMA current host receive descriptor register **/
#define Ethernet_DMA_DMACHRDR			MMIO32(Ethernet_DMA_BASE + 0x4c)
/** Ethernet_DMA_DMACHTBAR Ethernet DMA current host transmit buffer address register **/
#define Ethernet_DMA_DMACHTBAR			MMIO32(Ethernet_DMA_BASE + 0x50)
/** Ethernet_DMA_DMACHRBAR Ethernet DMA current host receive buffer address register **/
#define Ethernet_DMA_DMACHRBAR			MMIO32(Ethernet_DMA_BASE + 0x54)

/**@}*/


/** @defgroup ethernet_dma_dmabmr DMABMR Ethernet DMA bus mode register
@{*/

/** Ethernet_DMA_DMABMR_MB MB **/
#define Ethernet_DMA_DMABMR_MB		(1 << 26)
/** Ethernet_DMA_DMABMR_AAB AAB **/
#define Ethernet_DMA_DMABMR_AAB		(1 << 25)
/** Ethernet_DMA_DMABMR_FPM FPM **/
#define Ethernet_DMA_DMABMR_FPM		(1 << 24)
/** Ethernet_DMA_DMABMR_USP USP **/
#define Ethernet_DMA_DMABMR_USP		(1 << 23)

#define Ethernet_DMA_DMABMR_RDP_SHIFT		17
#define Ethernet_DMA_DMABMR_RDP_MASK		0x3f
/** @defgroup ethernet_dma_dmabmr_rdp RDP RDP
@{*/
/**@}*/

/** Ethernet_DMA_DMABMR_FB FB **/
#define Ethernet_DMA_DMABMR_FB		(1 << 16)

#define Ethernet_DMA_DMABMR_RTPR_SHIFT		14
#define Ethernet_DMA_DMABMR_RTPR_MASK		0x03
/** @defgroup ethernet_dma_dmabmr_rtpr RTPR RTPR
@{*/
/**@}*/


#define Ethernet_DMA_DMABMR_PBL_SHIFT		8
#define Ethernet_DMA_DMABMR_PBL_MASK		0x3f
/** @defgroup ethernet_dma_dmabmr_pbl PBL PBL
@{*/
/**@}*/

/** Ethernet_DMA_DMABMR_EDFE EDFE **/
#define Ethernet_DMA_DMABMR_EDFE		(1 << 7)

#define Ethernet_DMA_DMABMR_DSL_SHIFT		2
#define Ethernet_DMA_DMABMR_DSL_MASK		0x1f
/** @defgroup ethernet_dma_dmabmr_dsl DSL DSL
@{*/
/**@}*/

/** Ethernet_DMA_DMABMR_DA DA **/
#define Ethernet_DMA_DMABMR_DA		(1 << 1)
/** Ethernet_DMA_DMABMR_SR SR **/
#define Ethernet_DMA_DMABMR_SR		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmatpdr DMATPDR Ethernet DMA transmit poll demand register
@{*/


#define Ethernet_DMA_DMATPDR_TPD_SHIFT		0
#define Ethernet_DMA_DMATPDR_TPD_MASK		0xffffffff
/** @defgroup ethernet_dma_dmatpdr_tpd TPD TPD
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmarpdr DMARPDR EHERNET DMA receive poll demand register
@{*/


#define Ethernet_DMA_DMARPDR_RPD_SHIFT		0
#define Ethernet_DMA_DMARPDR_RPD_MASK		0xffffffff
/** @defgroup ethernet_dma_dmarpdr_rpd RPD RPD
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmardlar DMARDLAR Ethernet DMA receive descriptor list address register
@{*/


#define Ethernet_DMA_DMARDLAR_SRL_SHIFT		0
#define Ethernet_DMA_DMARDLAR_SRL_MASK		0xffffffff
/** @defgroup ethernet_dma_dmardlar_srl SRL SRL
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmatdlar DMATDLAR Ethernet DMA transmit descriptor list address register
@{*/


#define Ethernet_DMA_DMATDLAR_STL_SHIFT		0
#define Ethernet_DMA_DMATDLAR_STL_MASK		0xffffffff
/** @defgroup ethernet_dma_dmatdlar_stl STL STL
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmasr DMASR Ethernet DMA status register
@{*/

/** Ethernet_DMA_DMASR_TSTS TSTS **/
#define Ethernet_DMA_DMASR_TSTS		(1 << 29)
/** Ethernet_DMA_DMASR_PMTS PMTS **/
#define Ethernet_DMA_DMASR_PMTS		(1 << 28)
/** Ethernet_DMA_DMASR_MMCS MMCS **/
#define Ethernet_DMA_DMASR_MMCS		(1 << 27)

#define Ethernet_DMA_DMASR_EBS_SHIFT		23
#define Ethernet_DMA_DMASR_EBS_MASK		0x07
/** @defgroup ethernet_dma_dmasr_ebs EBS EBS
@{*/
/**@}*/


#define Ethernet_DMA_DMASR_TPS_SHIFT		20
#define Ethernet_DMA_DMASR_TPS_MASK		0x07
/** @defgroup ethernet_dma_dmasr_tps TPS TPS
@{*/
/**@}*/


#define Ethernet_DMA_DMASR_RPS_SHIFT		17
#define Ethernet_DMA_DMASR_RPS_MASK		0x07
/** @defgroup ethernet_dma_dmasr_rps RPS RPS
@{*/
/**@}*/

/** Ethernet_DMA_DMASR_NIS NIS **/
#define Ethernet_DMA_DMASR_NIS		(1 << 16)
/** Ethernet_DMA_DMASR_AIS AIS **/
#define Ethernet_DMA_DMASR_AIS		(1 << 15)
/** Ethernet_DMA_DMASR_ERS ERS **/
#define Ethernet_DMA_DMASR_ERS		(1 << 14)
/** Ethernet_DMA_DMASR_FBES FBES **/
#define Ethernet_DMA_DMASR_FBES		(1 << 13)
/** Ethernet_DMA_DMASR_ETS ETS **/
#define Ethernet_DMA_DMASR_ETS		(1 << 10)
/** Ethernet_DMA_DMASR_PWTS PWTS **/
#define Ethernet_DMA_DMASR_PWTS		(1 << 9)
/** Ethernet_DMA_DMASR_RPSS RPSS **/
#define Ethernet_DMA_DMASR_RPSS		(1 << 8)
/** Ethernet_DMA_DMASR_RBUS RBUS **/
#define Ethernet_DMA_DMASR_RBUS		(1 << 7)
/** Ethernet_DMA_DMASR_RS RS **/
#define Ethernet_DMA_DMASR_RS		(1 << 6)
/** Ethernet_DMA_DMASR_TUS TUS **/
#define Ethernet_DMA_DMASR_TUS		(1 << 5)
/** Ethernet_DMA_DMASR_ROS ROS **/
#define Ethernet_DMA_DMASR_ROS		(1 << 4)
/** Ethernet_DMA_DMASR_TJTS TJTS **/
#define Ethernet_DMA_DMASR_TJTS		(1 << 3)
/** Ethernet_DMA_DMASR_TBUS TBUS **/
#define Ethernet_DMA_DMASR_TBUS		(1 << 2)
/** Ethernet_DMA_DMASR_TPSS TPSS **/
#define Ethernet_DMA_DMASR_TPSS		(1 << 1)
/** Ethernet_DMA_DMASR_TS TS **/
#define Ethernet_DMA_DMASR_TS		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmaomr DMAOMR Ethernet DMA operation mode register
@{*/

/** Ethernet_DMA_DMAOMR_DTCEFD DTCEFD **/
#define Ethernet_DMA_DMAOMR_DTCEFD		(1 << 26)
/** Ethernet_DMA_DMAOMR_RSF RSF **/
#define Ethernet_DMA_DMAOMR_RSF		(1 << 25)
/** Ethernet_DMA_DMAOMR_DFRF DFRF **/
#define Ethernet_DMA_DMAOMR_DFRF		(1 << 24)
/** Ethernet_DMA_DMAOMR_TSF TSF **/
#define Ethernet_DMA_DMAOMR_TSF		(1 << 21)
/** Ethernet_DMA_DMAOMR_FTF FTF **/
#define Ethernet_DMA_DMAOMR_FTF		(1 << 20)

#define Ethernet_DMA_DMAOMR_TTC_SHIFT		14
#define Ethernet_DMA_DMAOMR_TTC_MASK		0x07
/** @defgroup ethernet_dma_dmaomr_ttc TTC TTC
@{*/
/**@}*/

/** Ethernet_DMA_DMAOMR_ST ST **/
#define Ethernet_DMA_DMAOMR_ST		(1 << 13)
/** Ethernet_DMA_DMAOMR_FEF FEF **/
#define Ethernet_DMA_DMAOMR_FEF		(1 << 7)
/** Ethernet_DMA_DMAOMR_FUGF FUGF **/
#define Ethernet_DMA_DMAOMR_FUGF		(1 << 6)

#define Ethernet_DMA_DMAOMR_RTC_SHIFT		3
#define Ethernet_DMA_DMAOMR_RTC_MASK		0x03
/** @defgroup ethernet_dma_dmaomr_rtc RTC RTC
@{*/
/**@}*/

/** Ethernet_DMA_DMAOMR_OSF OSF **/
#define Ethernet_DMA_DMAOMR_OSF		(1 << 2)
/** Ethernet_DMA_DMAOMR_SR SR **/
#define Ethernet_DMA_DMAOMR_SR		(1 << 1)

/**@}*/

/** @defgroup ethernet_dma_dmaier DMAIER Ethernet DMA interrupt enable register
@{*/

/** Ethernet_DMA_DMAIER_NISE NISE **/
#define Ethernet_DMA_DMAIER_NISE		(1 << 16)
/** Ethernet_DMA_DMAIER_AISE AISE **/
#define Ethernet_DMA_DMAIER_AISE		(1 << 15)
/** Ethernet_DMA_DMAIER_ERIE ERIE **/
#define Ethernet_DMA_DMAIER_ERIE		(1 << 14)
/** Ethernet_DMA_DMAIER_FBEIE FBEIE **/
#define Ethernet_DMA_DMAIER_FBEIE		(1 << 13)
/** Ethernet_DMA_DMAIER_ETIE ETIE **/
#define Ethernet_DMA_DMAIER_ETIE		(1 << 10)
/** Ethernet_DMA_DMAIER_RWTIE RWTIE **/
#define Ethernet_DMA_DMAIER_RWTIE		(1 << 9)
/** Ethernet_DMA_DMAIER_RPSIE RPSIE **/
#define Ethernet_DMA_DMAIER_RPSIE		(1 << 8)
/** Ethernet_DMA_DMAIER_RBUIE RBUIE **/
#define Ethernet_DMA_DMAIER_RBUIE		(1 << 7)
/** Ethernet_DMA_DMAIER_RIE RIE **/
#define Ethernet_DMA_DMAIER_RIE		(1 << 6)
/** Ethernet_DMA_DMAIER_TUIE TUIE **/
#define Ethernet_DMA_DMAIER_TUIE		(1 << 5)
/** Ethernet_DMA_DMAIER_ROIE ROIE **/
#define Ethernet_DMA_DMAIER_ROIE		(1 << 4)
/** Ethernet_DMA_DMAIER_TJTIE TJTIE **/
#define Ethernet_DMA_DMAIER_TJTIE		(1 << 3)
/** Ethernet_DMA_DMAIER_TBUIE TBUIE **/
#define Ethernet_DMA_DMAIER_TBUIE		(1 << 2)
/** Ethernet_DMA_DMAIER_TPSIE TPSIE **/
#define Ethernet_DMA_DMAIER_TPSIE		(1 << 1)
/** Ethernet_DMA_DMAIER_TIE TIE **/
#define Ethernet_DMA_DMAIER_TIE		(1 << 0)

/**@}*/

/** @defgroup ethernet_dma_dmamfbocr DMAMFBOCR Ethernet DMA missed frame and buffer overflow counter register
@{*/

/** Ethernet_DMA_DMAMFBOCR_OFOC OFOC **/
#define Ethernet_DMA_DMAMFBOCR_OFOC		(1 << 28)

#define Ethernet_DMA_DMAMFBOCR_MFA_SHIFT		17
#define Ethernet_DMA_DMAMFBOCR_MFA_MASK		0x7ff
/** @defgroup ethernet_dma_dmamfbocr_mfa MFA MFA
@{*/
/**@}*/

/** Ethernet_DMA_DMAMFBOCR_OMFC OMFC **/
#define Ethernet_DMA_DMAMFBOCR_OMFC		(1 << 16)

#define Ethernet_DMA_DMAMFBOCR_MFC_SHIFT		0
#define Ethernet_DMA_DMAMFBOCR_MFC_MASK		0xffff
/** @defgroup ethernet_dma_dmamfbocr_mfc MFC MFC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmarswtr DMARSWTR Ethernet DMA receive status watchdog timer register
@{*/


#define Ethernet_DMA_DMARSWTR_RSWTC_SHIFT		0
#define Ethernet_DMA_DMARSWTR_RSWTC_MASK		0xff
/** @defgroup ethernet_dma_dmarswtr_rswtc RSWTC RSWTC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmachtdr DMACHTDR Ethernet DMA current host transmit descriptor register
@{*/


#define Ethernet_DMA_DMACHTDR_HTDAP_SHIFT		0
#define Ethernet_DMA_DMACHTDR_HTDAP_MASK		0xffffffff
/** @defgroup ethernet_dma_dmachtdr_htdap HTDAP HTDAP
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmachrdr DMACHRDR Ethernet DMA current host receive descriptor register
@{*/


#define Ethernet_DMA_DMACHRDR_HRDAP_SHIFT		0
#define Ethernet_DMA_DMACHRDR_HRDAP_MASK		0xffffffff
/** @defgroup ethernet_dma_dmachrdr_hrdap HRDAP HRDAP
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmachtbar DMACHTBAR Ethernet DMA current host transmit buffer address register
@{*/


#define Ethernet_DMA_DMACHTBAR_HTBAP_SHIFT		0
#define Ethernet_DMA_DMACHTBAR_HTBAP_MASK		0xffffffff
/** @defgroup ethernet_dma_dmachtbar_htbap HTBAP HTBAP
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_dma_dmachrbar DMACHRBAR Ethernet DMA current host receive buffer address register
@{*/


#define Ethernet_DMA_DMACHRBAR_HRBAP_SHIFT		0
#define Ethernet_DMA_DMACHRBAR_HRBAP_MASK		0xffffffff
/** @defgroup ethernet_dma_dmachrbar_hrbap HRBAP HRBAP
@{*/
/**@}*/


/**@}*/

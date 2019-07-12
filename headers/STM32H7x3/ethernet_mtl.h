#pragma once 

/* --- Ethernet_MTL: Ethernet: MTL mode register (MTL) -------------- */

/** @defgroup ethernet_mtl_registers Ethernet: MTL mode register (MTL) Register
@{*/

/** Ethernet_MTL_MTLOMR Operating mode Register **/
#define Ethernet_MTL_MTLOMR			MMIO32(Ethernet_MTL_BASE + 0x00)
/** Ethernet_MTL_MTLISR Interrupt status Register **/
#define Ethernet_MTL_MTLISR			MMIO32(Ethernet_MTL_BASE + 0x20)
/** Ethernet_MTL_MTLTxQOMR Tx queue operating mode Register **/
#define Ethernet_MTL_MTLTxQOMR			MMIO32(Ethernet_MTL_BASE + 0x100)
/** Ethernet_MTL_MTLTxQUR Tx queue underflow register **/
#define Ethernet_MTL_MTLTxQUR			MMIO32(Ethernet_MTL_BASE + 0x104)
/** Ethernet_MTL_MTLTxQDR Tx queue debug Register **/
#define Ethernet_MTL_MTLTxQDR			MMIO32(Ethernet_MTL_BASE + 0x108)
/** Ethernet_MTL_MTLQICSR Queue interrupt control status Register **/
#define Ethernet_MTL_MTLQICSR			MMIO32(Ethernet_MTL_BASE + 0x12c)
/** Ethernet_MTL_MTLRxQOMR Rx queue operating mode register **/
#define Ethernet_MTL_MTLRxQOMR			MMIO32(Ethernet_MTL_BASE + 0x130)
/** Ethernet_MTL_MTLRxQMPOCR Rx queue missed packet and overflow counter register **/
#define Ethernet_MTL_MTLRxQMPOCR			MMIO32(Ethernet_MTL_BASE + 0x134)
/** Ethernet_MTL_MTLRxQDR Rx queue debug register **/
#define Ethernet_MTL_MTLRxQDR			MMIO32(Ethernet_MTL_BASE + 0x138)

/**@}*/


/** @defgroup ethernet_mtl_mtlomr MTLOMR Operating mode Register
@{*/

/** Ethernet_MTL_MTLOMR_CNTCLR CNTCLR **/
#define Ethernet_MTL_MTLOMR_CNTCLR		(1 << 9)
/** Ethernet_MTL_MTLOMR_CNTPRST CNTPRST **/
#define Ethernet_MTL_MTLOMR_CNTPRST		(1 << 8)
/** Ethernet_MTL_MTLOMR_DTXSTS DTXSTS **/
#define Ethernet_MTL_MTLOMR_DTXSTS		(1 << 1)

/**@}*/

/** @defgroup ethernet_mtl_mtlisr MTLISR Interrupt status Register
@{*/

/** Ethernet_MTL_MTLISR_Q0IS Queue interrupt status **/
#define Ethernet_MTL_MTLISR_Q0IS		(1 << 0)

/**@}*/

/** @defgroup ethernet_mtl_mtltxqomr MTLTxQOMR Tx queue operating mode Register
@{*/


#define Ethernet_MTL_MTLTxQOMR_TQS_SHIFT		16
#define Ethernet_MTL_MTLTxQOMR_TQS_MASK		0x07
/** @defgroup ethernet_mtl_mtltxqomr_tqs TQS Transmit Queue Size
@{*/
/**@}*/


#define Ethernet_MTL_MTLTxQOMR_TTC_SHIFT		4
#define Ethernet_MTL_MTLTxQOMR_TTC_MASK		0x07
/** @defgroup ethernet_mtl_mtltxqomr_ttc TTC Transmit Threshold Control
@{*/
/**@}*/


#define Ethernet_MTL_MTLTxQOMR_TXQEN_SHIFT		2
#define Ethernet_MTL_MTLTxQOMR_TXQEN_MASK		0x03
/** @defgroup ethernet_mtl_mtltxqomr_txqen TXQEN Transmit Queue Enable
@{*/
/**@}*/

/** Ethernet_MTL_MTLTxQOMR_TSF Transmit Store and Forward **/
#define Ethernet_MTL_MTLTxQOMR_TSF		(1 << 1)
/** Ethernet_MTL_MTLTxQOMR_FTQ Flush Transmit Queue **/
#define Ethernet_MTL_MTLTxQOMR_FTQ		(1 << 0)

/**@}*/

/** @defgroup ethernet_mtl_mtltxqur MTLTxQUR Tx queue underflow register
@{*/

/** Ethernet_MTL_MTLTxQUR_UFCNTOVF UFCNTOVF **/
#define Ethernet_MTL_MTLTxQUR_UFCNTOVF		(1 << 11)

#define Ethernet_MTL_MTLTxQUR_UFFRMCNT_SHIFT		0
#define Ethernet_MTL_MTLTxQUR_UFFRMCNT_MASK		0x7ff
/** @defgroup ethernet_mtl_mtltxqur_uffrmcnt UFFRMCNT Underflow Packet Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mtl_mtltxqdr MTLTxQDR Tx queue debug Register
@{*/


#define Ethernet_MTL_MTLTxQDR_STXSTSF_SHIFT		20
#define Ethernet_MTL_MTLTxQDR_STXSTSF_MASK		0x07
/** @defgroup ethernet_mtl_mtltxqdr_stxstsf STXSTSF STXSTSF
@{*/
/**@}*/


#define Ethernet_MTL_MTLTxQDR_PTXQ_SHIFT		16
#define Ethernet_MTL_MTLTxQDR_PTXQ_MASK		0x07
/** @defgroup ethernet_mtl_mtltxqdr_ptxq PTXQ PTXQ
@{*/
/**@}*/

/** Ethernet_MTL_MTLTxQDR_TXSTSFSTS TXSTSFSTS **/
#define Ethernet_MTL_MTLTxQDR_TXSTSFSTS		(1 << 5)
/** Ethernet_MTL_MTLTxQDR_TXQSTS TXQSTS **/
#define Ethernet_MTL_MTLTxQDR_TXQSTS		(1 << 4)
/** Ethernet_MTL_MTLTxQDR_TWCSTS TWCSTS **/
#define Ethernet_MTL_MTLTxQDR_TWCSTS		(1 << 3)

#define Ethernet_MTL_MTLTxQDR_TRCSTS_SHIFT		1
#define Ethernet_MTL_MTLTxQDR_TRCSTS_MASK		0x03
/** @defgroup ethernet_mtl_mtltxqdr_trcsts TRCSTS TRCSTS
@{*/
/**@}*/

/** Ethernet_MTL_MTLTxQDR_TXQPAUSED TXQPAUSED **/
#define Ethernet_MTL_MTLTxQDR_TXQPAUSED		(1 << 0)

/**@}*/

/** @defgroup ethernet_mtl_mtlqicsr MTLQICSR Queue interrupt control status Register
@{*/

/** Ethernet_MTL_MTLQICSR_RXOIE RXOIE **/
#define Ethernet_MTL_MTLQICSR_RXOIE		(1 << 24)
/** Ethernet_MTL_MTLQICSR_RXOVFIS RXOVFIS **/
#define Ethernet_MTL_MTLQICSR_RXOVFIS		(1 << 16)
/** Ethernet_MTL_MTLQICSR_TXUIE TXUIE **/
#define Ethernet_MTL_MTLQICSR_TXUIE		(1 << 8)
/** Ethernet_MTL_MTLQICSR_TXUNFIS TXUNFIS **/
#define Ethernet_MTL_MTLQICSR_TXUNFIS		(1 << 0)

/**@}*/

/** @defgroup ethernet_mtl_mtlrxqomr MTLRxQOMR Rx queue operating mode register
@{*/


#define Ethernet_MTL_MTLRxQOMR_RQS_SHIFT		20
#define Ethernet_MTL_MTLRxQOMR_RQS_MASK		0x07
/** @defgroup ethernet_mtl_mtlrxqomr_rqs RQS RQS
@{*/
/**@}*/


#define Ethernet_MTL_MTLRxQOMR_RFD_SHIFT		14
#define Ethernet_MTL_MTLRxQOMR_RFD_MASK		0x07
/** @defgroup ethernet_mtl_mtlrxqomr_rfd RFD RFD
@{*/
/**@}*/


#define Ethernet_MTL_MTLRxQOMR_RFA_SHIFT		8
#define Ethernet_MTL_MTLRxQOMR_RFA_MASK		0x07
/** @defgroup ethernet_mtl_mtlrxqomr_rfa RFA RFA
@{*/
/**@}*/

/** Ethernet_MTL_MTLRxQOMR_EHFC EHFC **/
#define Ethernet_MTL_MTLRxQOMR_EHFC		(1 << 7)
/** Ethernet_MTL_MTLRxQOMR_DIS_TCP_EF DIS_TCP_EF **/
#define Ethernet_MTL_MTLRxQOMR_DIS_TCP_EF		(1 << 6)
/** Ethernet_MTL_MTLRxQOMR_RSF RSF **/
#define Ethernet_MTL_MTLRxQOMR_RSF		(1 << 5)
/** Ethernet_MTL_MTLRxQOMR_FEP FEP **/
#define Ethernet_MTL_MTLRxQOMR_FEP		(1 << 4)
/** Ethernet_MTL_MTLRxQOMR_FUP FUP **/
#define Ethernet_MTL_MTLRxQOMR_FUP		(1 << 3)

#define Ethernet_MTL_MTLRxQOMR_RTC_SHIFT		0
#define Ethernet_MTL_MTLRxQOMR_RTC_MASK		0x03
/** @defgroup ethernet_mtl_mtlrxqomr_rtc RTC RTC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mtl_mtlrxqmpocr MTLRxQMPOCR Rx queue missed packet and overflow counter register
@{*/

/** Ethernet_MTL_MTLRxQMPOCR_MISCNTOVF MISCNTOVF **/
#define Ethernet_MTL_MTLRxQMPOCR_MISCNTOVF		(1 << 27)

#define Ethernet_MTL_MTLRxQMPOCR_MISPKTCNT_SHIFT		16
#define Ethernet_MTL_MTLRxQMPOCR_MISPKTCNT_MASK		0x7ff
/** @defgroup ethernet_mtl_mtlrxqmpocr_mispktcnt MISPKTCNT MISPKTCNT
@{*/
/**@}*/

/** Ethernet_MTL_MTLRxQMPOCR_OVFCNTOVF OVFCNTOVF **/
#define Ethernet_MTL_MTLRxQMPOCR_OVFCNTOVF		(1 << 11)

#define Ethernet_MTL_MTLRxQMPOCR_OVFPKTCNT_SHIFT		0
#define Ethernet_MTL_MTLRxQMPOCR_OVFPKTCNT_MASK		0x7ff
/** @defgroup ethernet_mtl_mtlrxqmpocr_ovfpktcnt OVFPKTCNT OVFPKTCNT
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mtl_mtlrxqdr MTLRxQDR Rx queue debug register
@{*/


#define Ethernet_MTL_MTLRxQDR_PRXQ_SHIFT		16
#define Ethernet_MTL_MTLRxQDR_PRXQ_MASK		0x3fff
/** @defgroup ethernet_mtl_mtlrxqdr_prxq PRXQ PRXQ
@{*/
/**@}*/


#define Ethernet_MTL_MTLRxQDR_RXQSTS_SHIFT		4
#define Ethernet_MTL_MTLRxQDR_RXQSTS_MASK		0x03
/** @defgroup ethernet_mtl_mtlrxqdr_rxqsts RXQSTS RXQSTS
@{*/
/**@}*/


#define Ethernet_MTL_MTLRxQDR_RRCSTS_SHIFT		1
#define Ethernet_MTL_MTLRxQDR_RRCSTS_MASK		0x03
/** @defgroup ethernet_mtl_mtlrxqdr_rrcsts RRCSTS RRCSTS
@{*/
/**@}*/

/** Ethernet_MTL_MTLRxQDR_RWCSTS RWCSTS **/
#define Ethernet_MTL_MTLRxQDR_RWCSTS		(1 << 0)

/**@}*/

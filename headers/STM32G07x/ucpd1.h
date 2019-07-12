#pragma once 

/* --- UCPD1: USB Power Delivery interface -------------------------- */

/** @defgroup ucpd1_registers USB Power Delivery interface Register
@{*/

/** UCPD1_CFG1 UCPD configuration register **/
#define UCPD1_CFG1			MMIO32(UCPD1_BASE + 0x00)
/** UCPD1_CFG2 UCPD configuration register 2 **/
#define UCPD1_CFG2			MMIO32(UCPD1_BASE + 0x04)
/** UCPD1_CFG3 UCPD configuration register 3 **/
#define UCPD1_CFG3			MMIO32(UCPD1_BASE + 0x08)
/** UCPD1_CR UCPD control register **/
#define UCPD1_CR			MMIO32(UCPD1_BASE + 0x0c)
/** UCPD1_IMR UCPD Interrupt Mask Register **/
#define UCPD1_IMR			MMIO32(UCPD1_BASE + 0x10)
/** UCPD1_SR UCPD Status Register **/
#define UCPD1_SR			MMIO32(UCPD1_BASE + 0x14)
/** UCPD1_ICR UCPD Interrupt Clear Register **/
#define UCPD1_ICR			MMIO32(UCPD1_BASE + 0x18)
/** UCPD1_TX_ORDSET UCPD Tx Ordered Set Type Register **/
#define UCPD1_TX_ORDSET			MMIO32(UCPD1_BASE + 0x1c)
/** UCPD1_TX_PAYSZ UCPD Tx Paysize Register **/
#define UCPD1_TX_PAYSZ			MMIO32(UCPD1_BASE + 0x20)
/** UCPD1_TXDR UCPD Tx Data Register **/
#define UCPD1_TXDR			MMIO32(UCPD1_BASE + 0x24)
/** UCPD1_RX_ORDSET UCPD Rx Ordered Set Register **/
#define UCPD1_RX_ORDSET			MMIO32(UCPD1_BASE + 0x28)
/** UCPD1_RX_PAYSZ UCPD Rx Paysize Register **/
#define UCPD1_RX_PAYSZ			MMIO32(UCPD1_BASE + 0x2c)
/** UCPD1_RXDR UCPD Receive Data Register **/
#define UCPD1_RXDR			MMIO32(UCPD1_BASE + 0x30)
/** UCPD1_RX_ORDEXT1 UCPD Rx Ordered Set Extension Register **/
#define UCPD1_RX_ORDEXT1			MMIO32(UCPD1_BASE + 0x34)
/** UCPD1_RX_ORDEXT2 UCPD Rx Ordered Set Extension Register **/
#define UCPD1_RX_ORDEXT2			MMIO32(UCPD1_BASE + 0x38)
/** UCPD1_IPVER UCPD IP ID register **/
#define UCPD1_IPVER			MMIO32(UCPD1_BASE + 0x3f4)
/** UCPD1_IPID UCPD IP ID register **/
#define UCPD1_IPID			MMIO32(UCPD1_BASE + 0x3f8)
/** UCPD1_MID UCPD IP ID register **/
#define UCPD1_MID			MMIO32(UCPD1_BASE + 0x3fc)

/**@}*/


/** @defgroup ucpd1_cfg1 CFG1 UCPD configuration register
@{*/

/** UCPD1_CFG1_UCPDEN UCPDEN **/
#define UCPD1_CFG1_UCPDEN		(1 << 31)
/** UCPD1_CFG1_RXDMAEN RXDMAEN: **/
#define UCPD1_CFG1_RXDMAEN		(1 << 30)
/** UCPD1_CFG1_TXDMAEN TXDMAEN **/
#define UCPD1_CFG1_TXDMAEN		(1 << 29)

#define UCPD1_CFG1_RXORDSETEN_SHIFT		20
#define UCPD1_CFG1_RXORDSETEN_MASK		0x1ff
/** @defgroup ucpd1_cfg1_rxordseten RXORDSETEN RXORDSETEN
@{*/
/**@}*/


#define UCPD1_CFG1_PSC_USBPDCLK_SHIFT		17
#define UCPD1_CFG1_PSC_USBPDCLK_MASK		0x07
/** @defgroup ucpd1_cfg1_psc_usbpdclk PSCUSBPDCLK PSC_USBPDCLK
@{*/
/**@}*/


#define UCPD1_CFG1_TRANSWIN_SHIFT		11
#define UCPD1_CFG1_TRANSWIN_MASK		0x1f
/** @defgroup ucpd1_cfg1_transwin TRANSWIN TRANSWIN
@{*/
/**@}*/


#define UCPD1_CFG1_IFRGAP_SHIFT		6
#define UCPD1_CFG1_IFRGAP_MASK		0x1f
/** @defgroup ucpd1_cfg1_ifrgap IFRGAP IFRGAP
@{*/
/**@}*/


#define UCPD1_CFG1_HBITCLKDIV_SHIFT		0
#define UCPD1_CFG1_HBITCLKDIV_MASK		0x3f
/** @defgroup ucpd1_cfg1_hbitclkdiv HBITCLKDIV HBITCLKDIV
@{*/
/**@}*/


/**@}*/

/** @defgroup ucpd1_cfg2 CFG2 UCPD configuration register 2
@{*/

/** UCPD1_CFG2_WUPEN WUPEN **/
#define UCPD1_CFG2_WUPEN		(1 << 3)
/** UCPD1_CFG2_FORCECLK FORCECLK **/
#define UCPD1_CFG2_FORCECLK		(1 << 2)
/** UCPD1_CFG2_RXFILT2N3 RXFILT2N3 **/
#define UCPD1_CFG2_RXFILT2N3		(1 << 1)
/** UCPD1_CFG2_RXFILTDIS RXFILTDIS **/
#define UCPD1_CFG2_RXFILTDIS		(1 << 0)

/**@}*/

/** @defgroup ucpd1_cfg3 CFG3 UCPD configuration register 3
@{*/


#define UCPD1_CFG3_TRIM2_NG_CC3A0_SHIFT		25
#define UCPD1_CFG3_TRIM2_NG_CC3A0_MASK		0x0f
/** @defgroup ucpd1_cfg3_trim2_ng_cc3a0 TRIM2NGCC3A0 TRIM2_NG_CC3A0
@{*/
/**@}*/


#define UCPD1_CFG3_TRIM2_NG_CC1A5_SHIFT		20
#define UCPD1_CFG3_TRIM2_NG_CC1A5_MASK		0x1f
/** @defgroup ucpd1_cfg3_trim2_ng_cc1a5 TRIM2NGCC1A5 TRIM2_NG_CC1A5
@{*/
/**@}*/


#define UCPD1_CFG3_TRIM2_NG_CCRPD_SHIFT		16
#define UCPD1_CFG3_TRIM2_NG_CCRPD_MASK		0x0f
/** @defgroup ucpd1_cfg3_trim2_ng_ccrpd TRIM2NGCCRPD TRIM2_NG_CCRPD
@{*/
/**@}*/


#define UCPD1_CFG3_TRIM1_NG_CC3A0_SHIFT		9
#define UCPD1_CFG3_TRIM1_NG_CC3A0_MASK		0x0f
/** @defgroup ucpd1_cfg3_trim1_ng_cc3a0 TRIM1NGCC3A0 TRIM1_NG_CC3A0
@{*/
/**@}*/


#define UCPD1_CFG3_TRIM1_NG_CC1A5_SHIFT		4
#define UCPD1_CFG3_TRIM1_NG_CC1A5_MASK		0x1f
/** @defgroup ucpd1_cfg3_trim1_ng_cc1a5 TRIM1NGCC1A5 TRIM1_NG_CC1A5
@{*/
/**@}*/


#define UCPD1_CFG3_TRIM1_NG_CCRPD_SHIFT		0
#define UCPD1_CFG3_TRIM1_NG_CCRPD_MASK		0x0f
/** @defgroup ucpd1_cfg3_trim1_ng_ccrpd TRIM1NGCCRPD TRIM1_NG_CCRPD
@{*/
/**@}*/


/**@}*/

/** @defgroup ucpd1_cr CR UCPD control register
@{*/

/** UCPD1_CR_CC2TCDIS CC2TCDIS **/
#define UCPD1_CR_CC2TCDIS		(1 << 21)
/** UCPD1_CR_CC1TCDIS CC1TCDIS **/
#define UCPD1_CR_CC1TCDIS		(1 << 20)
/** UCPD1_CR_RDCH RDCH **/
#define UCPD1_CR_RDCH		(1 << 18)
/** UCPD1_CR_FRSTX FRSTX **/
#define UCPD1_CR_FRSTX		(1 << 17)
/** UCPD1_CR_FRSRXEN FRSRXEN **/
#define UCPD1_CR_FRSRXEN		(1 << 16)
/** UCPD1_CR_DBATTEN DBATTEN **/
#define UCPD1_CR_DBATTEN		(1 << 15)

#define UCPD1_CR_CCENABLE_SHIFT		10
#define UCPD1_CR_CCENABLE_MASK		0x03
/** @defgroup ucpd1_cr_ccenable CCENABLE CCENABLE
@{*/
/**@}*/

/** UCPD1_CR_ANAMODE ANAMODE **/
#define UCPD1_CR_ANAMODE		(1 << 9)

#define UCPD1_CR_ANASUBMODE_SHIFT		7
#define UCPD1_CR_ANASUBMODE_MASK		0x03
/** @defgroup ucpd1_cr_anasubmode ANASUBMODE ANASUBMODE
@{*/
/**@}*/

/** UCPD1_CR_PHYCCSEL PHYCCSEL **/
#define UCPD1_CR_PHYCCSEL		(1 << 6)
/** UCPD1_CR_PHYRXEN PHYRXEN **/
#define UCPD1_CR_PHYRXEN		(1 << 5)
/** UCPD1_CR_RXMODE RXMODE **/
#define UCPD1_CR_RXMODE		(1 << 4)
/** UCPD1_CR_TXHRST TXHRST **/
#define UCPD1_CR_TXHRST		(1 << 3)
/** UCPD1_CR_TXSEND TXSEND **/
#define UCPD1_CR_TXSEND		(1 << 2)

#define UCPD1_CR_TXMODE_SHIFT		0
#define UCPD1_CR_TXMODE_MASK		0x03
/** @defgroup ucpd1_cr_txmode TXMODE TXMODE
@{*/
/**@}*/


/**@}*/

/** @defgroup ucpd1_imr IMR UCPD Interrupt Mask Register
@{*/

/** UCPD1_IMR_FRSEVTIE FRSEVTIE **/
#define UCPD1_IMR_FRSEVTIE		(1 << 20)
/** UCPD1_IMR_TYPECEVT2IE TYPECEVT2IE **/
#define UCPD1_IMR_TYPECEVT2IE		(1 << 15)
/** UCPD1_IMR_TYPECEVT1IE TYPECEVT1IE **/
#define UCPD1_IMR_TYPECEVT1IE		(1 << 14)
/** UCPD1_IMR_RXMSGENDIE RXMSGENDIE **/
#define UCPD1_IMR_RXMSGENDIE		(1 << 12)
/** UCPD1_IMR_RXOVRIE RXOVRIE **/
#define UCPD1_IMR_RXOVRIE		(1 << 11)
/** UCPD1_IMR_RXHRSTDETIE RXHRSTDETIE **/
#define UCPD1_IMR_RXHRSTDETIE		(1 << 10)
/** UCPD1_IMR_RXORDDETIE RXORDDETIE **/
#define UCPD1_IMR_RXORDDETIE		(1 << 9)
/** UCPD1_IMR_RXNEIE RXNEIE **/
#define UCPD1_IMR_RXNEIE		(1 << 8)
/** UCPD1_IMR_TXUNDIE TXUNDIE **/
#define UCPD1_IMR_TXUNDIE		(1 << 6)
/** UCPD1_IMR_HRSTSENTIE HRSTSENTIE **/
#define UCPD1_IMR_HRSTSENTIE		(1 << 5)
/** UCPD1_IMR_HRSTDISCIE HRSTDISCIE **/
#define UCPD1_IMR_HRSTDISCIE		(1 << 4)
/** UCPD1_IMR_TXMSGABTIE TXMSGABTIE **/
#define UCPD1_IMR_TXMSGABTIE		(1 << 3)
/** UCPD1_IMR_TXMSGSENTIE TXMSGSENTIE **/
#define UCPD1_IMR_TXMSGSENTIE		(1 << 2)
/** UCPD1_IMR_TXMSGDISCIE TXMSGDISCIE **/
#define UCPD1_IMR_TXMSGDISCIE		(1 << 1)
/** UCPD1_IMR_TXISIE TXISIE **/
#define UCPD1_IMR_TXISIE		(1 << 0)

/**@}*/

/** @defgroup ucpd1_sr SR UCPD Status Register
@{*/

/** UCPD1_SR_FRSEVT FRSEVT **/
#define UCPD1_SR_FRSEVT		(1 << 20)

#define UCPD1_SR_TYPEC_VSTATE_CC2_SHIFT		18
#define UCPD1_SR_TYPEC_VSTATE_CC2_MASK		0x03
/** @defgroup ucpd1_sr_typec_vstate_cc2 TYPECVSTATECC2 TYPEC_VSTATE_CC2
@{*/
/**@}*/


#define UCPD1_SR_TYPEC_VSTATE_CC1_SHIFT		16
#define UCPD1_SR_TYPEC_VSTATE_CC1_MASK		0x03
/** @defgroup ucpd1_sr_typec_vstate_cc1 TYPECVSTATECC1 TYPEC_VSTATE_CC1
@{*/
/**@}*/

/** UCPD1_SR_TYPECEVT2 TYPECEVT2 **/
#define UCPD1_SR_TYPECEVT2		(1 << 15)
/** UCPD1_SR_TYPECEVT1 TYPECEVT1 **/
#define UCPD1_SR_TYPECEVT1		(1 << 14)
/** UCPD1_SR_RXERR RXERR **/
#define UCPD1_SR_RXERR		(1 << 13)
/** UCPD1_SR_RXMSGEND RXMSGEND **/
#define UCPD1_SR_RXMSGEND		(1 << 12)
/** UCPD1_SR_RXOVR RXOVR **/
#define UCPD1_SR_RXOVR		(1 << 11)
/** UCPD1_SR_RXHRSTDET RXHRSTDET **/
#define UCPD1_SR_RXHRSTDET		(1 << 10)
/** UCPD1_SR_RXORDDET RXORDDET **/
#define UCPD1_SR_RXORDDET		(1 << 9)
/** UCPD1_SR_RXNE RXNE **/
#define UCPD1_SR_RXNE		(1 << 8)
/** UCPD1_SR_TXUND TXUND **/
#define UCPD1_SR_TXUND		(1 << 6)
/** UCPD1_SR_HRSTSENT HRSTSENT **/
#define UCPD1_SR_HRSTSENT		(1 << 5)
/** UCPD1_SR_HRSTDISC HRSTDISC **/
#define UCPD1_SR_HRSTDISC		(1 << 4)
/** UCPD1_SR_TXMSGABT TXMSGABT **/
#define UCPD1_SR_TXMSGABT		(1 << 3)
/** UCPD1_SR_TXMSGSENT TXMSGSENT **/
#define UCPD1_SR_TXMSGSENT		(1 << 2)
/** UCPD1_SR_TXMSGDISC TXMSGDISC **/
#define UCPD1_SR_TXMSGDISC		(1 << 1)
/** UCPD1_SR_TXIS TXIS **/
#define UCPD1_SR_TXIS		(1 << 0)

/**@}*/

/** @defgroup ucpd1_icr ICR UCPD Interrupt Clear Register
@{*/

/** UCPD1_ICR_FRSEVTCF FRSEVTCF **/
#define UCPD1_ICR_FRSEVTCF		(1 << 20)
/** UCPD1_ICR_TYPECEVT2CF TYPECEVT2CF **/
#define UCPD1_ICR_TYPECEVT2CF		(1 << 15)
/** UCPD1_ICR_TYPECEVT1CF TYPECEVT1CF **/
#define UCPD1_ICR_TYPECEVT1CF		(1 << 14)
/** UCPD1_ICR_RXMSGENDCF RXMSGENDCF **/
#define UCPD1_ICR_RXMSGENDCF		(1 << 12)
/** UCPD1_ICR_RXOVRCF RXOVRCF **/
#define UCPD1_ICR_RXOVRCF		(1 << 11)
/** UCPD1_ICR_RXHRSTDETCF RXHRSTDETCF **/
#define UCPD1_ICR_RXHRSTDETCF		(1 << 10)
/** UCPD1_ICR_RXORDDETCF RXORDDETCF **/
#define UCPD1_ICR_RXORDDETCF		(1 << 9)
/** UCPD1_ICR_TXUNDCF TXUNDCF **/
#define UCPD1_ICR_TXUNDCF		(1 << 6)
/** UCPD1_ICR_HRSTSENTCF HRSTSENTCF **/
#define UCPD1_ICR_HRSTSENTCF		(1 << 5)
/** UCPD1_ICR_HRSTDISCCF HRSTDISCCF **/
#define UCPD1_ICR_HRSTDISCCF		(1 << 4)
/** UCPD1_ICR_TXMSGABTCF TXMSGABTCF **/
#define UCPD1_ICR_TXMSGABTCF		(1 << 3)
/** UCPD1_ICR_TXMSGSENTCF TXMSGSENTCF **/
#define UCPD1_ICR_TXMSGSENTCF		(1 << 2)
/** UCPD1_ICR_TXMSGDISCCF TXMSGDISCCF **/
#define UCPD1_ICR_TXMSGDISCCF		(1 << 1)

/**@}*/

/** @defgroup ucpd1_tx_ordset TXORDSET UCPD Tx Ordered Set Type Register
@{*/


#define UCPD1_TX_ORDSET_TXORDSET_SHIFT		0
#define UCPD1_TX_ORDSET_TXORDSET_MASK		0xfffff
/** @defgroup ucpd1_tx_ordset_txordset TXORDSET TXORDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup ucpd1_tx_paysz TXPAYSZ UCPD Tx Paysize Register
@{*/


#define UCPD1_TX_PAYSZ_TXPAYSZ_SHIFT		0
#define UCPD1_TX_PAYSZ_TXPAYSZ_MASK		0x3ff
/** @defgroup ucpd1_tx_paysz_txpaysz TXPAYSZ TXPAYSZ
@{*/
/**@}*/


/**@}*/

/** @defgroup ucpd1_txdr TXDR UCPD Tx Data Register
@{*/


#define UCPD1_TXDR_TXDATA_SHIFT		0
#define UCPD1_TXDR_TXDATA_MASK		0xff
/** @defgroup ucpd1_txdr_txdata TXDATA TXDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup ucpd1_rx_ordset RXORDSET UCPD Rx Ordered Set Register
@{*/


#define UCPD1_RX_ORDSET_RXSOPKINVALID_SHIFT		4
#define UCPD1_RX_ORDSET_RXSOPKINVALID_MASK		0x07
/** @defgroup ucpd1_rx_ordset_rxsopkinvalid RXSOPKINVALID RXSOPKINVALID
@{*/
/**@}*/

/** UCPD1_RX_ORDSET_RXSOP3OF4 RXSOP3OF4 **/
#define UCPD1_RX_ORDSET_RXSOP3OF4		(1 << 3)

#define UCPD1_RX_ORDSET_RXORDSET_SHIFT		0
#define UCPD1_RX_ORDSET_RXORDSET_MASK		0x07
/** @defgroup ucpd1_rx_ordset_rxordset RXORDSET RXORDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup ucpd1_rx_paysz RXPAYSZ UCPD Rx Paysize Register
@{*/


#define UCPD1_RX_PAYSZ_RXPAYSZ_SHIFT		0
#define UCPD1_RX_PAYSZ_RXPAYSZ_MASK		0x3ff
/** @defgroup ucpd1_rx_paysz_rxpaysz RXPAYSZ RXPAYSZ
@{*/
/**@}*/


/**@}*/

/** @defgroup ucpd1_rxdr RXDR UCPD Receive Data Register
@{*/


#define UCPD1_RXDR_RXDATA_SHIFT		0
#define UCPD1_RXDR_RXDATA_MASK		0xff
/** @defgroup ucpd1_rxdr_rxdata RXDATA RXDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup ucpd1_rx_ordext1 RXORDEXT1 UCPD Rx Ordered Set Extension Register
@{*/


#define UCPD1_RX_ORDEXT1_RXSOPX1_SHIFT		0
#define UCPD1_RX_ORDEXT1_RXSOPX1_MASK		0xfffff
/** @defgroup ucpd1_rx_ordext1_rxsopx1 RXSOPX1 RXSOPX1
@{*/
/**@}*/


/**@}*/

/** @defgroup ucpd1_rx_ordext2 RXORDEXT2 UCPD Rx Ordered Set Extension Register
@{*/


#define UCPD1_RX_ORDEXT2_RXSOPX2_SHIFT		0
#define UCPD1_RX_ORDEXT2_RXSOPX2_MASK		0xfffff
/** @defgroup ucpd1_rx_ordext2_rxsopx2 RXSOPX2 RXSOPX2
@{*/
/**@}*/


/**@}*/

/** @defgroup ucpd1_ipver IPVER UCPD IP ID register
@{*/


#define UCPD1_IPVER_IPVER_SHIFT		0
#define UCPD1_IPVER_IPVER_MASK		0xffffffff
/** @defgroup ucpd1_ipver_ipver IPVER IPVER
@{*/
/**@}*/


/**@}*/

/** @defgroup ucpd1_ipid IPID UCPD IP ID register
@{*/


#define UCPD1_IPID_IPID_SHIFT		0
#define UCPD1_IPID_IPID_MASK		0xffffffff
/** @defgroup ucpd1_ipid_ipid IPID IPID
@{*/
/**@}*/


/**@}*/

/** @defgroup ucpd1_mid MID UCPD IP ID register
@{*/


#define UCPD1_MID_IPID_SHIFT		0
#define UCPD1_MID_IPID_MASK		0xffffffff
/** @defgroup ucpd1_mid_ipid IPID IPID
@{*/
/**@}*/


/**@}*/

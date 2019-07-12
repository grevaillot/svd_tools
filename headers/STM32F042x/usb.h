#pragma once 

/* --- USB: Universal serial bus full-speed device interface -------- */

/** @defgroup usb_registers Universal serial bus full-speed device       interface Register
@{*/

/** USB_EP0R endpoint 0 register **/
#define USB_EP0R			MMIO32(USB_BASE + 0x00)
/** USB_EP1R endpoint 1 register **/
#define USB_EP1R			MMIO32(USB_BASE + 0x04)
/** USB_EP2R endpoint 2 register **/
#define USB_EP2R			MMIO32(USB_BASE + 0x08)
/** USB_EP3R endpoint 3 register **/
#define USB_EP3R			MMIO32(USB_BASE + 0x0c)
/** USB_EP4R endpoint 4 register **/
#define USB_EP4R			MMIO32(USB_BASE + 0x10)
/** USB_EP5R endpoint 5 register **/
#define USB_EP5R			MMIO32(USB_BASE + 0x14)
/** USB_EP6R endpoint 6 register **/
#define USB_EP6R			MMIO32(USB_BASE + 0x18)
/** USB_EP7R endpoint 7 register **/
#define USB_EP7R			MMIO32(USB_BASE + 0x1c)
/** USB_CNTR control register **/
#define USB_CNTR			MMIO32(USB_BASE + 0x40)
/** USB_ISTR interrupt status register **/
#define USB_ISTR			MMIO32(USB_BASE + 0x44)
/** USB_FNR frame number register **/
#define USB_FNR			MMIO32(USB_BASE + 0x48)
/** USB_DADDR device address **/
#define USB_DADDR			MMIO32(USB_BASE + 0x4c)
/** USB_BTABLE Buffer table address **/
#define USB_BTABLE			MMIO32(USB_BASE + 0x50)
/** USB_LPMCSR LPM control and status register **/
#define USB_LPMCSR			MMIO32(USB_BASE + 0x54)
/** USB_BCDR Battery charging detector **/
#define USB_BCDR			MMIO32(USB_BASE + 0x58)

/**@}*/


/** @defgroup usb_ep0r EP0R endpoint 0 register
@{*/

/** USB_EP0R_CTR_RX Correct transfer for reception **/
#define USB_EP0R_CTR_RX		(1 << 15)
/** USB_EP0R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_EP0R_DTOG_RX		(1 << 14)

#define USB_EP0R_STAT_RX_SHIFT		12
#define USB_EP0R_STAT_RX_MASK		0x03
/** @defgroup usb_ep0r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_EP0R_SETUP Setup transaction completed **/
#define USB_EP0R_SETUP		(1 << 11)

#define USB_EP0R_EP_TYPE_SHIFT		9
#define USB_EP0R_EP_TYPE_MASK		0x03
/** @defgroup usb_ep0r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_EP0R_EP_KIND Endpoint kind **/
#define USB_EP0R_EP_KIND		(1 << 8)
/** USB_EP0R_CTR_TX Correct Transfer for transmission **/
#define USB_EP0R_CTR_TX		(1 << 7)
/** USB_EP0R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_EP0R_DTOG_TX		(1 << 6)

#define USB_EP0R_STAT_TX_SHIFT		4
#define USB_EP0R_STAT_TX_MASK		0x03
/** @defgroup usb_ep0r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_EP0R_EA_SHIFT		0
#define USB_EP0R_EA_MASK		0x0f
/** @defgroup usb_ep0r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_ep1r EP1R endpoint 1 register
@{*/

/** USB_EP1R_CTR_RX Correct transfer for reception **/
#define USB_EP1R_CTR_RX		(1 << 15)
/** USB_EP1R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_EP1R_DTOG_RX		(1 << 14)

#define USB_EP1R_STAT_RX_SHIFT		12
#define USB_EP1R_STAT_RX_MASK		0x03
/** @defgroup usb_ep1r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_EP1R_SETUP Setup transaction completed **/
#define USB_EP1R_SETUP		(1 << 11)

#define USB_EP1R_EP_TYPE_SHIFT		9
#define USB_EP1R_EP_TYPE_MASK		0x03
/** @defgroup usb_ep1r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_EP1R_EP_KIND Endpoint kind **/
#define USB_EP1R_EP_KIND		(1 << 8)
/** USB_EP1R_CTR_TX Correct Transfer for transmission **/
#define USB_EP1R_CTR_TX		(1 << 7)
/** USB_EP1R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_EP1R_DTOG_TX		(1 << 6)

#define USB_EP1R_STAT_TX_SHIFT		4
#define USB_EP1R_STAT_TX_MASK		0x03
/** @defgroup usb_ep1r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_EP1R_EA_SHIFT		0
#define USB_EP1R_EA_MASK		0x0f
/** @defgroup usb_ep1r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_ep2r EP2R endpoint 2 register
@{*/

/** USB_EP2R_CTR_RX Correct transfer for reception **/
#define USB_EP2R_CTR_RX		(1 << 15)
/** USB_EP2R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_EP2R_DTOG_RX		(1 << 14)

#define USB_EP2R_STAT_RX_SHIFT		12
#define USB_EP2R_STAT_RX_MASK		0x03
/** @defgroup usb_ep2r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_EP2R_SETUP Setup transaction completed **/
#define USB_EP2R_SETUP		(1 << 11)

#define USB_EP2R_EP_TYPE_SHIFT		9
#define USB_EP2R_EP_TYPE_MASK		0x03
/** @defgroup usb_ep2r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_EP2R_EP_KIND Endpoint kind **/
#define USB_EP2R_EP_KIND		(1 << 8)
/** USB_EP2R_CTR_TX Correct Transfer for transmission **/
#define USB_EP2R_CTR_TX		(1 << 7)
/** USB_EP2R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_EP2R_DTOG_TX		(1 << 6)

#define USB_EP2R_STAT_TX_SHIFT		4
#define USB_EP2R_STAT_TX_MASK		0x03
/** @defgroup usb_ep2r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_EP2R_EA_SHIFT		0
#define USB_EP2R_EA_MASK		0x0f
/** @defgroup usb_ep2r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_ep3r EP3R endpoint 3 register
@{*/

/** USB_EP3R_CTR_RX Correct transfer for reception **/
#define USB_EP3R_CTR_RX		(1 << 15)
/** USB_EP3R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_EP3R_DTOG_RX		(1 << 14)

#define USB_EP3R_STAT_RX_SHIFT		12
#define USB_EP3R_STAT_RX_MASK		0x03
/** @defgroup usb_ep3r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_EP3R_SETUP Setup transaction completed **/
#define USB_EP3R_SETUP		(1 << 11)

#define USB_EP3R_EP_TYPE_SHIFT		9
#define USB_EP3R_EP_TYPE_MASK		0x03
/** @defgroup usb_ep3r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_EP3R_EP_KIND Endpoint kind **/
#define USB_EP3R_EP_KIND		(1 << 8)
/** USB_EP3R_CTR_TX Correct Transfer for transmission **/
#define USB_EP3R_CTR_TX		(1 << 7)
/** USB_EP3R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_EP3R_DTOG_TX		(1 << 6)

#define USB_EP3R_STAT_TX_SHIFT		4
#define USB_EP3R_STAT_TX_MASK		0x03
/** @defgroup usb_ep3r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_EP3R_EA_SHIFT		0
#define USB_EP3R_EA_MASK		0x0f
/** @defgroup usb_ep3r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_ep4r EP4R endpoint 4 register
@{*/

/** USB_EP4R_CTR_RX Correct transfer for reception **/
#define USB_EP4R_CTR_RX		(1 << 15)
/** USB_EP4R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_EP4R_DTOG_RX		(1 << 14)

#define USB_EP4R_STAT_RX_SHIFT		12
#define USB_EP4R_STAT_RX_MASK		0x03
/** @defgroup usb_ep4r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_EP4R_SETUP Setup transaction completed **/
#define USB_EP4R_SETUP		(1 << 11)

#define USB_EP4R_EP_TYPE_SHIFT		9
#define USB_EP4R_EP_TYPE_MASK		0x03
/** @defgroup usb_ep4r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_EP4R_EP_KIND Endpoint kind **/
#define USB_EP4R_EP_KIND		(1 << 8)
/** USB_EP4R_CTR_TX Correct Transfer for transmission **/
#define USB_EP4R_CTR_TX		(1 << 7)
/** USB_EP4R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_EP4R_DTOG_TX		(1 << 6)

#define USB_EP4R_STAT_TX_SHIFT		4
#define USB_EP4R_STAT_TX_MASK		0x03
/** @defgroup usb_ep4r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_EP4R_EA_SHIFT		0
#define USB_EP4R_EA_MASK		0x0f
/** @defgroup usb_ep4r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_ep5r EP5R endpoint 5 register
@{*/

/** USB_EP5R_CTR_RX Correct transfer for reception **/
#define USB_EP5R_CTR_RX		(1 << 15)
/** USB_EP5R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_EP5R_DTOG_RX		(1 << 14)

#define USB_EP5R_STAT_RX_SHIFT		12
#define USB_EP5R_STAT_RX_MASK		0x03
/** @defgroup usb_ep5r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_EP5R_SETUP Setup transaction completed **/
#define USB_EP5R_SETUP		(1 << 11)

#define USB_EP5R_EP_TYPE_SHIFT		9
#define USB_EP5R_EP_TYPE_MASK		0x03
/** @defgroup usb_ep5r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_EP5R_EP_KIND Endpoint kind **/
#define USB_EP5R_EP_KIND		(1 << 8)
/** USB_EP5R_CTR_TX Correct Transfer for transmission **/
#define USB_EP5R_CTR_TX		(1 << 7)
/** USB_EP5R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_EP5R_DTOG_TX		(1 << 6)

#define USB_EP5R_STAT_TX_SHIFT		4
#define USB_EP5R_STAT_TX_MASK		0x03
/** @defgroup usb_ep5r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_EP5R_EA_SHIFT		0
#define USB_EP5R_EA_MASK		0x0f
/** @defgroup usb_ep5r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_ep6r EP6R endpoint 6 register
@{*/

/** USB_EP6R_CTR_RX Correct transfer for reception **/
#define USB_EP6R_CTR_RX		(1 << 15)
/** USB_EP6R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_EP6R_DTOG_RX		(1 << 14)

#define USB_EP6R_STAT_RX_SHIFT		12
#define USB_EP6R_STAT_RX_MASK		0x03
/** @defgroup usb_ep6r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_EP6R_SETUP Setup transaction completed **/
#define USB_EP6R_SETUP		(1 << 11)

#define USB_EP6R_EP_TYPE_SHIFT		9
#define USB_EP6R_EP_TYPE_MASK		0x03
/** @defgroup usb_ep6r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_EP6R_EP_KIND Endpoint kind **/
#define USB_EP6R_EP_KIND		(1 << 8)
/** USB_EP6R_CTR_TX Correct Transfer for transmission **/
#define USB_EP6R_CTR_TX		(1 << 7)
/** USB_EP6R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_EP6R_DTOG_TX		(1 << 6)

#define USB_EP6R_STAT_TX_SHIFT		4
#define USB_EP6R_STAT_TX_MASK		0x03
/** @defgroup usb_ep6r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_EP6R_EA_SHIFT		0
#define USB_EP6R_EA_MASK		0x0f
/** @defgroup usb_ep6r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_ep7r EP7R endpoint 7 register
@{*/

/** USB_EP7R_CTR_RX Correct transfer for reception **/
#define USB_EP7R_CTR_RX		(1 << 15)
/** USB_EP7R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_EP7R_DTOG_RX		(1 << 14)

#define USB_EP7R_STAT_RX_SHIFT		12
#define USB_EP7R_STAT_RX_MASK		0x03
/** @defgroup usb_ep7r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_EP7R_SETUP Setup transaction completed **/
#define USB_EP7R_SETUP		(1 << 11)

#define USB_EP7R_EP_TYPE_SHIFT		9
#define USB_EP7R_EP_TYPE_MASK		0x03
/** @defgroup usb_ep7r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_EP7R_EP_KIND Endpoint kind **/
#define USB_EP7R_EP_KIND		(1 << 8)
/** USB_EP7R_CTR_TX Correct Transfer for transmission **/
#define USB_EP7R_CTR_TX		(1 << 7)
/** USB_EP7R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_EP7R_DTOG_TX		(1 << 6)

#define USB_EP7R_STAT_TX_SHIFT		4
#define USB_EP7R_STAT_TX_MASK		0x03
/** @defgroup usb_ep7r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_EP7R_EA_SHIFT		0
#define USB_EP7R_EA_MASK		0x0f
/** @defgroup usb_ep7r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_cntr CNTR control register
@{*/

/** USB_CNTR_CTRM Correct transfer interrupt mask **/
#define USB_CNTR_CTRM		(1 << 15)
/** USB_CNTR_PMAOVRM Packet memory area over / underrun interrupt mask **/
#define USB_CNTR_PMAOVRM		(1 << 14)
/** USB_CNTR_ERRM Error interrupt mask **/
#define USB_CNTR_ERRM		(1 << 13)
/** USB_CNTR_WKUPM Wakeup interrupt mask **/
#define USB_CNTR_WKUPM		(1 << 12)
/** USB_CNTR_SUSPM Suspend mode interrupt mask **/
#define USB_CNTR_SUSPM		(1 << 11)
/** USB_CNTR_RESETM USB reset interrupt mask **/
#define USB_CNTR_RESETM		(1 << 10)
/** USB_CNTR_SOFM Start of frame interrupt mask **/
#define USB_CNTR_SOFM		(1 << 9)
/** USB_CNTR_ESOFM Expected start of frame interrupt mask **/
#define USB_CNTR_ESOFM		(1 << 8)
/** USB_CNTR_L1REQM LPM L1 state request interrupt mask **/
#define USB_CNTR_L1REQM		(1 << 7)
/** USB_CNTR_L1RESUME LPM L1 Resume request **/
#define USB_CNTR_L1RESUME		(1 << 5)
/** USB_CNTR_RESUME Resume request **/
#define USB_CNTR_RESUME		(1 << 4)
/** USB_CNTR_FSUSP Force suspend **/
#define USB_CNTR_FSUSP		(1 << 3)
/** USB_CNTR_LPMODE Low-power mode **/
#define USB_CNTR_LPMODE		(1 << 2)
/** USB_CNTR_PDWN Power down **/
#define USB_CNTR_PDWN		(1 << 1)
/** USB_CNTR_FRES Force USB Reset **/
#define USB_CNTR_FRES		(1 << 0)

/**@}*/

/** @defgroup usb_istr ISTR interrupt status register
@{*/

/** USB_ISTR_CTR Correct transfer **/
#define USB_ISTR_CTR		(1 << 15)
/** USB_ISTR_PMAOVR Packet memory area over / underrun **/
#define USB_ISTR_PMAOVR		(1 << 14)
/** USB_ISTR_ERR Error **/
#define USB_ISTR_ERR		(1 << 13)
/** USB_ISTR_WKUP Wakeup **/
#define USB_ISTR_WKUP		(1 << 12)
/** USB_ISTR_SUSP Suspend mode request **/
#define USB_ISTR_SUSP		(1 << 11)
/** USB_ISTR_RESET reset request **/
#define USB_ISTR_RESET		(1 << 10)
/** USB_ISTR_SOF start of frame **/
#define USB_ISTR_SOF		(1 << 9)
/** USB_ISTR_ESOF Expected start frame **/
#define USB_ISTR_ESOF		(1 << 8)
/** USB_ISTR_L1REQ LPM L1 state request **/
#define USB_ISTR_L1REQ		(1 << 7)
/** USB_ISTR_DIR Direction of transaction **/
#define USB_ISTR_DIR		(1 << 4)

#define USB_ISTR_EP_ID_SHIFT		0
#define USB_ISTR_EP_ID_MASK		0x0f
/** @defgroup usb_istr_ep_id EPID Endpoint Identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fnr FNR frame number register
@{*/

/** USB_FNR_RXDP Receive data + line status **/
#define USB_FNR_RXDP		(1 << 15)
/** USB_FNR_RXDM Receive data - line status **/
#define USB_FNR_RXDM		(1 << 14)
/** USB_FNR_LCK Locked **/
#define USB_FNR_LCK		(1 << 13)

#define USB_FNR_LSOF_SHIFT		11
#define USB_FNR_LSOF_MASK		0x03
/** @defgroup usb_fnr_lsof LSOF Lost SOF
@{*/
/**@}*/


#define USB_FNR_FN_SHIFT		0
#define USB_FNR_FN_MASK		0x7ff
/** @defgroup usb_fnr_fn FN Frame number
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_daddr DADDR device address
@{*/

/** USB_DADDR_EF Enable function **/
#define USB_DADDR_EF		(1 << 7)

#define USB_DADDR_ADD_SHIFT		0
#define USB_DADDR_ADD_MASK		0x7f
/** @defgroup usb_daddr_add ADD Device address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_btable BTABLE Buffer table address
@{*/


#define USB_BTABLE_BTABLE_SHIFT		3
#define USB_BTABLE_BTABLE_MASK		0x1fff
/** @defgroup usb_btable_btable BTABLE Buffer table
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_lpmcsr LPMCSR LPM control and status register
@{*/


#define USB_LPMCSR_BESL_SHIFT		4
#define USB_LPMCSR_BESL_MASK		0x0f
/** @defgroup usb_lpmcsr_besl BESL BESL value
@{*/
/**@}*/

/** USB_LPMCSR_REMWAKE bRemoteWake value **/
#define USB_LPMCSR_REMWAKE		(1 << 3)
/** USB_LPMCSR_LPMACK LPM Token acknowledge enable **/
#define USB_LPMCSR_LPMACK		(1 << 1)
/** USB_LPMCSR_LPMEN LPM support enable **/
#define USB_LPMCSR_LPMEN		(1 << 0)

/**@}*/

/** @defgroup usb_bcdr BCDR Battery charging detector
@{*/

/** USB_BCDR_DPPU DP pull-up control **/
#define USB_BCDR_DPPU		(1 << 15)
/** USB_BCDR_PS2DET DM pull-up detection status **/
#define USB_BCDR_PS2DET		(1 << 7)
/** USB_BCDR_SDET Secondary detection (SD) status **/
#define USB_BCDR_SDET		(1 << 6)
/** USB_BCDR_PDET Primary detection (PD) status **/
#define USB_BCDR_PDET		(1 << 5)
/** USB_BCDR_DCDET Data contact detection (DCD) status **/
#define USB_BCDR_DCDET		(1 << 4)
/** USB_BCDR_SDEN Secondary detection (SD) mode enable **/
#define USB_BCDR_SDEN		(1 << 3)
/** USB_BCDR_PDEN Primary detection (PD) mode enable **/
#define USB_BCDR_PDEN		(1 << 2)
/** USB_BCDR_DCDEN Data contact detection (DCD) mode enable **/
#define USB_BCDR_DCDEN		(1 << 1)
/** USB_BCDR_BCDEN Battery charging detector (BCD) enable **/
#define USB_BCDR_BCDEN		(1 << 0)

/**@}*/

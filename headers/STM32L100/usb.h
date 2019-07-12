#pragma once 

/* --- USB: Universal serial bus full-speed device interface -------- */

/** @defgroup usb_registers Universal serial bus full-speed device
      interface Register
@{*/

/** USB_USB_EP0R endpoint 0 register **/
#define USB_USB_EP0R			MMIO32(USB_BASE + 0x00)
/** USB_USB_EP1R endpoint 1 register **/
#define USB_USB_EP1R			MMIO32(USB_BASE + 0x04)
/** USB_USB_EP2R endpoint 2 register **/
#define USB_USB_EP2R			MMIO32(USB_BASE + 0x08)
/** USB_USB_EP3R endpoint 3 register **/
#define USB_USB_EP3R			MMIO32(USB_BASE + 0x0c)
/** USB_USB_EP4R endpoint 4 register **/
#define USB_USB_EP4R			MMIO32(USB_BASE + 0x10)
/** USB_USB_EP5R endpoint 5 register **/
#define USB_USB_EP5R			MMIO32(USB_BASE + 0x14)
/** USB_USB_EP6R endpoint 6 register **/
#define USB_USB_EP6R			MMIO32(USB_BASE + 0x18)
/** USB_USB_EP7R endpoint 7 register **/
#define USB_USB_EP7R			MMIO32(USB_BASE + 0x1c)
/** USB_USB_CNTR control register **/
#define USB_USB_CNTR			MMIO32(USB_BASE + 0x40)
/** USB_ISTR interrupt status register **/
#define USB_ISTR			MMIO32(USB_BASE + 0x44)
/** USB_FNR frame number register **/
#define USB_FNR			MMIO32(USB_BASE + 0x48)
/** USB_DADDR device address **/
#define USB_DADDR			MMIO32(USB_BASE + 0x4c)
/** USB_BTABLE Buffer table address **/
#define USB_BTABLE			MMIO32(USB_BASE + 0x50)

/**@}*/


/** @defgroup usb_usb_ep0r USBEP0R endpoint 0 register
@{*/

/** USB_USB_EP0R_CTR_RX Correct transfer for reception **/
#define USB_USB_EP0R_CTR_RX		(1 << 15)
/** USB_USB_EP0R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_USB_EP0R_DTOG_RX		(1 << 14)

#define USB_USB_EP0R_STAT_RX_SHIFT		12
#define USB_USB_EP0R_STAT_RX_MASK		0x03
/** @defgroup usb_usb_ep0r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_USB_EP0R_SETUP Setup transaction completed **/
#define USB_USB_EP0R_SETUP		(1 << 11)

#define USB_USB_EP0R_EP_TYPE_SHIFT		9
#define USB_USB_EP0R_EP_TYPE_MASK		0x03
/** @defgroup usb_usb_ep0r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_USB_EP0R_EP_KIND Endpoint kind **/
#define USB_USB_EP0R_EP_KIND		(1 << 8)
/** USB_USB_EP0R_CTR_TX Correct Transfer for transmission **/
#define USB_USB_EP0R_CTR_TX		(1 << 7)
/** USB_USB_EP0R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_USB_EP0R_DTOG_TX		(1 << 6)

#define USB_USB_EP0R_STAT_TX_SHIFT		4
#define USB_USB_EP0R_STAT_TX_MASK		0x03
/** @defgroup usb_usb_ep0r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_USB_EP0R_EA_SHIFT		0
#define USB_USB_EP0R_EA_MASK		0x0f
/** @defgroup usb_usb_ep0r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_usb_ep1r USBEP1R endpoint 1 register
@{*/

/** USB_USB_EP1R_CTR_RX Correct transfer for reception **/
#define USB_USB_EP1R_CTR_RX		(1 << 15)
/** USB_USB_EP1R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_USB_EP1R_DTOG_RX		(1 << 14)

#define USB_USB_EP1R_STAT_RX_SHIFT		12
#define USB_USB_EP1R_STAT_RX_MASK		0x03
/** @defgroup usb_usb_ep1r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_USB_EP1R_SETUP Setup transaction completed **/
#define USB_USB_EP1R_SETUP		(1 << 11)

#define USB_USB_EP1R_EP_TYPE_SHIFT		9
#define USB_USB_EP1R_EP_TYPE_MASK		0x03
/** @defgroup usb_usb_ep1r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_USB_EP1R_EP_KIND Endpoint kind **/
#define USB_USB_EP1R_EP_KIND		(1 << 8)
/** USB_USB_EP1R_CTR_TX Correct Transfer for transmission **/
#define USB_USB_EP1R_CTR_TX		(1 << 7)
/** USB_USB_EP1R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_USB_EP1R_DTOG_TX		(1 << 6)

#define USB_USB_EP1R_STAT_TX_SHIFT		4
#define USB_USB_EP1R_STAT_TX_MASK		0x03
/** @defgroup usb_usb_ep1r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_USB_EP1R_EA_SHIFT		0
#define USB_USB_EP1R_EA_MASK		0x0f
/** @defgroup usb_usb_ep1r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_usb_ep2r USBEP2R endpoint 2 register
@{*/

/** USB_USB_EP2R_CTR_RX Correct transfer for reception **/
#define USB_USB_EP2R_CTR_RX		(1 << 15)
/** USB_USB_EP2R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_USB_EP2R_DTOG_RX		(1 << 14)

#define USB_USB_EP2R_STAT_RX_SHIFT		12
#define USB_USB_EP2R_STAT_RX_MASK		0x03
/** @defgroup usb_usb_ep2r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_USB_EP2R_SETUP Setup transaction completed **/
#define USB_USB_EP2R_SETUP		(1 << 11)

#define USB_USB_EP2R_EP_TYPE_SHIFT		9
#define USB_USB_EP2R_EP_TYPE_MASK		0x03
/** @defgroup usb_usb_ep2r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_USB_EP2R_EP_KIND Endpoint kind **/
#define USB_USB_EP2R_EP_KIND		(1 << 8)
/** USB_USB_EP2R_CTR_TX Correct Transfer for transmission **/
#define USB_USB_EP2R_CTR_TX		(1 << 7)
/** USB_USB_EP2R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_USB_EP2R_DTOG_TX		(1 << 6)

#define USB_USB_EP2R_STAT_TX_SHIFT		4
#define USB_USB_EP2R_STAT_TX_MASK		0x03
/** @defgroup usb_usb_ep2r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_USB_EP2R_EA_SHIFT		0
#define USB_USB_EP2R_EA_MASK		0x0f
/** @defgroup usb_usb_ep2r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_usb_ep3r USBEP3R endpoint 3 register
@{*/

/** USB_USB_EP3R_CTR_RX Correct transfer for reception **/
#define USB_USB_EP3R_CTR_RX		(1 << 15)
/** USB_USB_EP3R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_USB_EP3R_DTOG_RX		(1 << 14)

#define USB_USB_EP3R_STAT_RX_SHIFT		12
#define USB_USB_EP3R_STAT_RX_MASK		0x03
/** @defgroup usb_usb_ep3r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_USB_EP3R_SETUP Setup transaction completed **/
#define USB_USB_EP3R_SETUP		(1 << 11)

#define USB_USB_EP3R_EP_TYPE_SHIFT		9
#define USB_USB_EP3R_EP_TYPE_MASK		0x03
/** @defgroup usb_usb_ep3r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_USB_EP3R_EP_KIND Endpoint kind **/
#define USB_USB_EP3R_EP_KIND		(1 << 8)
/** USB_USB_EP3R_CTR_TX Correct Transfer for transmission **/
#define USB_USB_EP3R_CTR_TX		(1 << 7)
/** USB_USB_EP3R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_USB_EP3R_DTOG_TX		(1 << 6)

#define USB_USB_EP3R_STAT_TX_SHIFT		4
#define USB_USB_EP3R_STAT_TX_MASK		0x03
/** @defgroup usb_usb_ep3r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_USB_EP3R_EA_SHIFT		0
#define USB_USB_EP3R_EA_MASK		0x0f
/** @defgroup usb_usb_ep3r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_usb_ep4r USBEP4R endpoint 4 register
@{*/

/** USB_USB_EP4R_CTR_RX Correct transfer for reception **/
#define USB_USB_EP4R_CTR_RX		(1 << 15)
/** USB_USB_EP4R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_USB_EP4R_DTOG_RX		(1 << 14)

#define USB_USB_EP4R_STAT_RX_SHIFT		12
#define USB_USB_EP4R_STAT_RX_MASK		0x03
/** @defgroup usb_usb_ep4r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_USB_EP4R_SETUP Setup transaction completed **/
#define USB_USB_EP4R_SETUP		(1 << 11)

#define USB_USB_EP4R_EP_TYPE_SHIFT		9
#define USB_USB_EP4R_EP_TYPE_MASK		0x03
/** @defgroup usb_usb_ep4r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_USB_EP4R_EP_KIND Endpoint kind **/
#define USB_USB_EP4R_EP_KIND		(1 << 8)
/** USB_USB_EP4R_CTR_TX Correct Transfer for transmission **/
#define USB_USB_EP4R_CTR_TX		(1 << 7)
/** USB_USB_EP4R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_USB_EP4R_DTOG_TX		(1 << 6)

#define USB_USB_EP4R_STAT_TX_SHIFT		4
#define USB_USB_EP4R_STAT_TX_MASK		0x03
/** @defgroup usb_usb_ep4r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_USB_EP4R_EA_SHIFT		0
#define USB_USB_EP4R_EA_MASK		0x0f
/** @defgroup usb_usb_ep4r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_usb_ep5r USBEP5R endpoint 5 register
@{*/

/** USB_USB_EP5R_CTR_RX Correct transfer for reception **/
#define USB_USB_EP5R_CTR_RX		(1 << 15)
/** USB_USB_EP5R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_USB_EP5R_DTOG_RX		(1 << 14)

#define USB_USB_EP5R_STAT_RX_SHIFT		12
#define USB_USB_EP5R_STAT_RX_MASK		0x03
/** @defgroup usb_usb_ep5r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_USB_EP5R_SETUP Setup transaction completed **/
#define USB_USB_EP5R_SETUP		(1 << 11)

#define USB_USB_EP5R_EP_TYPE_SHIFT		9
#define USB_USB_EP5R_EP_TYPE_MASK		0x03
/** @defgroup usb_usb_ep5r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_USB_EP5R_EP_KIND Endpoint kind **/
#define USB_USB_EP5R_EP_KIND		(1 << 8)
/** USB_USB_EP5R_CTR_TX Correct Transfer for transmission **/
#define USB_USB_EP5R_CTR_TX		(1 << 7)
/** USB_USB_EP5R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_USB_EP5R_DTOG_TX		(1 << 6)

#define USB_USB_EP5R_STAT_TX_SHIFT		4
#define USB_USB_EP5R_STAT_TX_MASK		0x03
/** @defgroup usb_usb_ep5r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_USB_EP5R_EA_SHIFT		0
#define USB_USB_EP5R_EA_MASK		0x0f
/** @defgroup usb_usb_ep5r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_usb_ep6r USBEP6R endpoint 6 register
@{*/

/** USB_USB_EP6R_CTR_RX Correct transfer for reception **/
#define USB_USB_EP6R_CTR_RX		(1 << 15)
/** USB_USB_EP6R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_USB_EP6R_DTOG_RX		(1 << 14)

#define USB_USB_EP6R_STAT_RX_SHIFT		12
#define USB_USB_EP6R_STAT_RX_MASK		0x03
/** @defgroup usb_usb_ep6r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_USB_EP6R_SETUP Setup transaction completed **/
#define USB_USB_EP6R_SETUP		(1 << 11)

#define USB_USB_EP6R_EP_TYPE_SHIFT		9
#define USB_USB_EP6R_EP_TYPE_MASK		0x03
/** @defgroup usb_usb_ep6r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_USB_EP6R_EP_KIND Endpoint kind **/
#define USB_USB_EP6R_EP_KIND		(1 << 8)
/** USB_USB_EP6R_CTR_TX Correct Transfer for transmission **/
#define USB_USB_EP6R_CTR_TX		(1 << 7)
/** USB_USB_EP6R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_USB_EP6R_DTOG_TX		(1 << 6)

#define USB_USB_EP6R_STAT_TX_SHIFT		4
#define USB_USB_EP6R_STAT_TX_MASK		0x03
/** @defgroup usb_usb_ep6r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_USB_EP6R_EA_SHIFT		0
#define USB_USB_EP6R_EA_MASK		0x0f
/** @defgroup usb_usb_ep6r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_usb_ep7r USBEP7R endpoint 7 register
@{*/

/** USB_USB_EP7R_CTR_RX Correct transfer for reception **/
#define USB_USB_EP7R_CTR_RX		(1 << 15)
/** USB_USB_EP7R_DTOG_RX Data Toggle, for reception transfers **/
#define USB_USB_EP7R_DTOG_RX		(1 << 14)

#define USB_USB_EP7R_STAT_RX_SHIFT		12
#define USB_USB_EP7R_STAT_RX_MASK		0x03
/** @defgroup usb_usb_ep7r_stat_rx STATRX Status bits, for reception transfers
@{*/
/**@}*/

/** USB_USB_EP7R_SETUP Setup transaction completed **/
#define USB_USB_EP7R_SETUP		(1 << 11)

#define USB_USB_EP7R_EP_TYPE_SHIFT		9
#define USB_USB_EP7R_EP_TYPE_MASK		0x03
/** @defgroup usb_usb_ep7r_ep_type EPTYPE Endpoint type
@{*/
/**@}*/

/** USB_USB_EP7R_EP_KIND Endpoint kind **/
#define USB_USB_EP7R_EP_KIND		(1 << 8)
/** USB_USB_EP7R_CTR_TX Correct Transfer for transmission **/
#define USB_USB_EP7R_CTR_TX		(1 << 7)
/** USB_USB_EP7R_DTOG_TX Data Toggle, for transmission transfers **/
#define USB_USB_EP7R_DTOG_TX		(1 << 6)

#define USB_USB_EP7R_STAT_TX_SHIFT		4
#define USB_USB_EP7R_STAT_TX_MASK		0x03
/** @defgroup usb_usb_ep7r_stat_tx STATTX Status bits, for transmission transfers
@{*/
/**@}*/


#define USB_USB_EP7R_EA_SHIFT		0
#define USB_USB_EP7R_EA_MASK		0x0f
/** @defgroup usb_usb_ep7r_ea EA Endpoint address
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_usb_cntr USBCNTR control register
@{*/

/** USB_USB_CNTR_CTRM Correct transfer interrupt mask **/
#define USB_USB_CNTR_CTRM		(1 << 15)
/** USB_USB_CNTR_PMAOVRM Packet memory area over / underrun interrupt mask **/
#define USB_USB_CNTR_PMAOVRM		(1 << 14)
/** USB_USB_CNTR_ERRM Error interrupt mask **/
#define USB_USB_CNTR_ERRM		(1 << 13)
/** USB_USB_CNTR_WKUPM Wakeup interrupt mask **/
#define USB_USB_CNTR_WKUPM		(1 << 12)
/** USB_USB_CNTR_SUSPM Suspend mode interrupt mask **/
#define USB_USB_CNTR_SUSPM		(1 << 11)
/** USB_USB_CNTR_RESETM USB reset interrupt mask **/
#define USB_USB_CNTR_RESETM		(1 << 10)
/** USB_USB_CNTR_SOFM Start of frame interrupt mask **/
#define USB_USB_CNTR_SOFM		(1 << 9)
/** USB_USB_CNTR_ESOFM Expected start of frame interrupt mask **/
#define USB_USB_CNTR_ESOFM		(1 << 8)
/** USB_USB_CNTR_RESUME Resume request **/
#define USB_USB_CNTR_RESUME		(1 << 4)
/** USB_USB_CNTR_FSUSP Force suspend **/
#define USB_USB_CNTR_FSUSP		(1 << 3)
/** USB_USB_CNTR_LPMODE Low-power mode **/
#define USB_USB_CNTR_LPMODE		(1 << 2)
/** USB_USB_CNTR_PDWN Power down **/
#define USB_USB_CNTR_PDWN		(1 << 1)
/** USB_USB_CNTR_FRES Force USB Reset **/
#define USB_USB_CNTR_FRES		(1 << 0)

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

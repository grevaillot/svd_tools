#pragma once 

/* --- USB_FS_device: USB_FS_device --------------------------------- */

/** @defgroup usb_fs_device_registers USB_FS_device Register
@{*/

/** USB_FS_device_EP0R USB endpoint n register **/
#define USB_FS_device_EP0R			MMIO32(USB_FS_device_BASE + 0x00)
/** USB_FS_device_EP1R USB endpoint n register **/
#define USB_FS_device_EP1R			MMIO32(USB_FS_device_BASE + 0x04)
/** USB_FS_device_EP2R USB endpoint n register **/
#define USB_FS_device_EP2R			MMIO32(USB_FS_device_BASE + 0x08)
/** USB_FS_device_EP3R USB endpoint n register **/
#define USB_FS_device_EP3R			MMIO32(USB_FS_device_BASE + 0x0c)
/** USB_FS_device_EP4R USB endpoint n register **/
#define USB_FS_device_EP4R			MMIO32(USB_FS_device_BASE + 0x10)
/** USB_FS_device_EP5R USB endpoint n register **/
#define USB_FS_device_EP5R			MMIO32(USB_FS_device_BASE + 0x14)
/** USB_FS_device_EP6R USB endpoint n register **/
#define USB_FS_device_EP6R			MMIO32(USB_FS_device_BASE + 0x18)
/** USB_FS_device_EP7R USB endpoint n register **/
#define USB_FS_device_EP7R			MMIO32(USB_FS_device_BASE + 0x1c)
/** USB_FS_device_CNTR USB control register **/
#define USB_FS_device_CNTR			MMIO32(USB_FS_device_BASE + 0x40)
/** USB_FS_device_ISTR USB interrupt status register **/
#define USB_FS_device_ISTR			MMIO32(USB_FS_device_BASE + 0x44)
/** USB_FS_device_FNR USB frame number register **/
#define USB_FS_device_FNR			MMIO32(USB_FS_device_BASE + 0x48)
/** USB_FS_device_DADDR USB device address **/
#define USB_FS_device_DADDR			MMIO32(USB_FS_device_BASE + 0x4c)
/** USB_FS_device_BTABLE Buffer table address **/
#define USB_FS_device_BTABLE			MMIO32(USB_FS_device_BASE + 0x50)

/**@}*/


/** @defgroup usb_fs_device_ep0r EP0R USB endpoint n register
@{*/

/** USB_FS_device_EP0R_CTR_RX CTR_RX **/
#define USB_FS_device_EP0R_CTR_RX		(1 << 15)
/** USB_FS_device_EP0R_DTOG_RX DTOG_RX **/
#define USB_FS_device_EP0R_DTOG_RX		(1 << 14)

#define USB_FS_device_EP0R_STAT_RX_SHIFT		12
#define USB_FS_device_EP0R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_device_ep0r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_device_EP0R_SETUP SETUP **/
#define USB_FS_device_EP0R_SETUP		(1 << 11)

#define USB_FS_device_EP0R_EP_TYPE_SHIFT		9
#define USB_FS_device_EP0R_EP_TYPE_MASK		0x03
/** @defgroup usb_fs_device_ep0r_ep_type EPTYPE EP_TYPE
@{*/
/**@}*/

/** USB_FS_device_EP0R_EP_KIND EP_KIND **/
#define USB_FS_device_EP0R_EP_KIND		(1 << 8)
/** USB_FS_device_EP0R_CTR_TX CTR_TX **/
#define USB_FS_device_EP0R_CTR_TX		(1 << 7)
/** USB_FS_device_EP0R_DTOG_TX DTOG_TX **/
#define USB_FS_device_EP0R_DTOG_TX		(1 << 6)

#define USB_FS_device_EP0R_STAT_TX_SHIFT		4
#define USB_FS_device_EP0R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_device_ep0r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_device_EP0R_EA_SHIFT		0
#define USB_FS_device_EP0R_EA_MASK		0x0f
/** @defgroup usb_fs_device_ep0r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_device_ep1r EP1R USB endpoint n register
@{*/

/** USB_FS_device_EP1R_CTR_RX CTR_RX **/
#define USB_FS_device_EP1R_CTR_RX		(1 << 15)
/** USB_FS_device_EP1R_DTOG_RX DTOG_RX **/
#define USB_FS_device_EP1R_DTOG_RX		(1 << 14)

#define USB_FS_device_EP1R_STAT_RX_SHIFT		12
#define USB_FS_device_EP1R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_device_ep1r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_device_EP1R_SETUP SETUP **/
#define USB_FS_device_EP1R_SETUP		(1 << 11)

#define USB_FS_device_EP1R_EP_TYPE_SHIFT		9
#define USB_FS_device_EP1R_EP_TYPE_MASK		0x03
/** @defgroup usb_fs_device_ep1r_ep_type EPTYPE EP_TYPE
@{*/
/**@}*/

/** USB_FS_device_EP1R_EP_KIND EP_KIND **/
#define USB_FS_device_EP1R_EP_KIND		(1 << 8)
/** USB_FS_device_EP1R_CTR_TX CTR_TX **/
#define USB_FS_device_EP1R_CTR_TX		(1 << 7)
/** USB_FS_device_EP1R_DTOG_TX DTOG_TX **/
#define USB_FS_device_EP1R_DTOG_TX		(1 << 6)

#define USB_FS_device_EP1R_STAT_TX_SHIFT		4
#define USB_FS_device_EP1R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_device_ep1r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_device_EP1R_EA_SHIFT		0
#define USB_FS_device_EP1R_EA_MASK		0x0f
/** @defgroup usb_fs_device_ep1r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_device_ep2r EP2R USB endpoint n register
@{*/

/** USB_FS_device_EP2R_CTR_RX CTR_RX **/
#define USB_FS_device_EP2R_CTR_RX		(1 << 15)
/** USB_FS_device_EP2R_DTOG_RX DTOG_RX **/
#define USB_FS_device_EP2R_DTOG_RX		(1 << 14)

#define USB_FS_device_EP2R_STAT_RX_SHIFT		12
#define USB_FS_device_EP2R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_device_ep2r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_device_EP2R_SETUP SETUP **/
#define USB_FS_device_EP2R_SETUP		(1 << 11)

#define USB_FS_device_EP2R_EP_TYPE_SHIFT		9
#define USB_FS_device_EP2R_EP_TYPE_MASK		0x03
/** @defgroup usb_fs_device_ep2r_ep_type EPTYPE EP_TYPE
@{*/
/**@}*/

/** USB_FS_device_EP2R_EP_KIND EP_KIND **/
#define USB_FS_device_EP2R_EP_KIND		(1 << 8)
/** USB_FS_device_EP2R_CTR_TX CTR_TX **/
#define USB_FS_device_EP2R_CTR_TX		(1 << 7)
/** USB_FS_device_EP2R_DTOG_TX DTOG_TX **/
#define USB_FS_device_EP2R_DTOG_TX		(1 << 6)

#define USB_FS_device_EP2R_STAT_TX_SHIFT		4
#define USB_FS_device_EP2R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_device_ep2r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_device_EP2R_EA_SHIFT		0
#define USB_FS_device_EP2R_EA_MASK		0x0f
/** @defgroup usb_fs_device_ep2r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_device_ep3r EP3R USB endpoint n register
@{*/

/** USB_FS_device_EP3R_CTR_RX CTR_RX **/
#define USB_FS_device_EP3R_CTR_RX		(1 << 15)
/** USB_FS_device_EP3R_DTOG_RX DTOG_RX **/
#define USB_FS_device_EP3R_DTOG_RX		(1 << 14)

#define USB_FS_device_EP3R_STAT_RX_SHIFT		12
#define USB_FS_device_EP3R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_device_ep3r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_device_EP3R_SETUP SETUP **/
#define USB_FS_device_EP3R_SETUP		(1 << 11)

#define USB_FS_device_EP3R_EP_TYPE_SHIFT		9
#define USB_FS_device_EP3R_EP_TYPE_MASK		0x03
/** @defgroup usb_fs_device_ep3r_ep_type EPTYPE EP_TYPE
@{*/
/**@}*/

/** USB_FS_device_EP3R_EP_KIND EP_KIND **/
#define USB_FS_device_EP3R_EP_KIND		(1 << 8)
/** USB_FS_device_EP3R_CTR_TX CTR_TX **/
#define USB_FS_device_EP3R_CTR_TX		(1 << 7)
/** USB_FS_device_EP3R_DTOG_TX DTOG_TX **/
#define USB_FS_device_EP3R_DTOG_TX		(1 << 6)

#define USB_FS_device_EP3R_STAT_TX_SHIFT		4
#define USB_FS_device_EP3R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_device_ep3r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_device_EP3R_EA_SHIFT		0
#define USB_FS_device_EP3R_EA_MASK		0x0f
/** @defgroup usb_fs_device_ep3r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_device_ep4r EP4R USB endpoint n register
@{*/

/** USB_FS_device_EP4R_CTR_RX CTR_RX **/
#define USB_FS_device_EP4R_CTR_RX		(1 << 15)
/** USB_FS_device_EP4R_DTOG_RX DTOG_RX **/
#define USB_FS_device_EP4R_DTOG_RX		(1 << 14)

#define USB_FS_device_EP4R_STAT_RX_SHIFT		12
#define USB_FS_device_EP4R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_device_ep4r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_device_EP4R_SETUP SETUP **/
#define USB_FS_device_EP4R_SETUP		(1 << 11)

#define USB_FS_device_EP4R_EP_TYPE_SHIFT		9
#define USB_FS_device_EP4R_EP_TYPE_MASK		0x03
/** @defgroup usb_fs_device_ep4r_ep_type EPTYPE EP_TYPE
@{*/
/**@}*/

/** USB_FS_device_EP4R_EP_KIND EP_KIND **/
#define USB_FS_device_EP4R_EP_KIND		(1 << 8)
/** USB_FS_device_EP4R_CTR_TX CTR_TX **/
#define USB_FS_device_EP4R_CTR_TX		(1 << 7)
/** USB_FS_device_EP4R_DTOG_TX DTOG_TX **/
#define USB_FS_device_EP4R_DTOG_TX		(1 << 6)

#define USB_FS_device_EP4R_STAT_TX_SHIFT		4
#define USB_FS_device_EP4R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_device_ep4r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_device_EP4R_EA_SHIFT		0
#define USB_FS_device_EP4R_EA_MASK		0x0f
/** @defgroup usb_fs_device_ep4r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_device_ep5r EP5R USB endpoint n register
@{*/

/** USB_FS_device_EP5R_CTR_RX CTR_RX **/
#define USB_FS_device_EP5R_CTR_RX		(1 << 15)
/** USB_FS_device_EP5R_DTOG_RX DTOG_RX **/
#define USB_FS_device_EP5R_DTOG_RX		(1 << 14)

#define USB_FS_device_EP5R_STAT_RX_SHIFT		12
#define USB_FS_device_EP5R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_device_ep5r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_device_EP5R_SETUP SETUP **/
#define USB_FS_device_EP5R_SETUP		(1 << 11)

#define USB_FS_device_EP5R_EP_TYPE_SHIFT		9
#define USB_FS_device_EP5R_EP_TYPE_MASK		0x03
/** @defgroup usb_fs_device_ep5r_ep_type EPTYPE EP_TYPE
@{*/
/**@}*/

/** USB_FS_device_EP5R_EP_KIND EP_KIND **/
#define USB_FS_device_EP5R_EP_KIND		(1 << 8)
/** USB_FS_device_EP5R_CTR_TX CTR_TX **/
#define USB_FS_device_EP5R_CTR_TX		(1 << 7)
/** USB_FS_device_EP5R_DTOG_TX DTOG_TX **/
#define USB_FS_device_EP5R_DTOG_TX		(1 << 6)

#define USB_FS_device_EP5R_STAT_TX_SHIFT		4
#define USB_FS_device_EP5R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_device_ep5r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_device_EP5R_EA_SHIFT		0
#define USB_FS_device_EP5R_EA_MASK		0x0f
/** @defgroup usb_fs_device_ep5r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_device_ep6r EP6R USB endpoint n register
@{*/

/** USB_FS_device_EP6R_CTR_RX CTR_RX **/
#define USB_FS_device_EP6R_CTR_RX		(1 << 15)
/** USB_FS_device_EP6R_DTOG_RX DTOG_RX **/
#define USB_FS_device_EP6R_DTOG_RX		(1 << 14)

#define USB_FS_device_EP6R_STAT_RX_SHIFT		12
#define USB_FS_device_EP6R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_device_ep6r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_device_EP6R_SETUP SETUP **/
#define USB_FS_device_EP6R_SETUP		(1 << 11)

#define USB_FS_device_EP6R_EP_TYPE_SHIFT		9
#define USB_FS_device_EP6R_EP_TYPE_MASK		0x03
/** @defgroup usb_fs_device_ep6r_ep_type EPTYPE EP_TYPE
@{*/
/**@}*/

/** USB_FS_device_EP6R_EP_KIND EP_KIND **/
#define USB_FS_device_EP6R_EP_KIND		(1 << 8)
/** USB_FS_device_EP6R_CTR_TX CTR_TX **/
#define USB_FS_device_EP6R_CTR_TX		(1 << 7)
/** USB_FS_device_EP6R_DTOG_TX DTOG_TX **/
#define USB_FS_device_EP6R_DTOG_TX		(1 << 6)

#define USB_FS_device_EP6R_STAT_TX_SHIFT		4
#define USB_FS_device_EP6R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_device_ep6r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_device_EP6R_EA_SHIFT		0
#define USB_FS_device_EP6R_EA_MASK		0x0f
/** @defgroup usb_fs_device_ep6r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_device_ep7r EP7R USB endpoint n register
@{*/

/** USB_FS_device_EP7R_CTR_RX CTR_RX **/
#define USB_FS_device_EP7R_CTR_RX		(1 << 15)
/** USB_FS_device_EP7R_DTOG_RX DTOG_RX **/
#define USB_FS_device_EP7R_DTOG_RX		(1 << 14)

#define USB_FS_device_EP7R_STAT_RX_SHIFT		12
#define USB_FS_device_EP7R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_device_ep7r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_device_EP7R_SETUP SETUP **/
#define USB_FS_device_EP7R_SETUP		(1 << 11)

#define USB_FS_device_EP7R_EP_TYPE_SHIFT		9
#define USB_FS_device_EP7R_EP_TYPE_MASK		0x03
/** @defgroup usb_fs_device_ep7r_ep_type EPTYPE EP_TYPE
@{*/
/**@}*/

/** USB_FS_device_EP7R_EP_KIND EP_KIND **/
#define USB_FS_device_EP7R_EP_KIND		(1 << 8)
/** USB_FS_device_EP7R_CTR_TX CTR_TX **/
#define USB_FS_device_EP7R_CTR_TX		(1 << 7)
/** USB_FS_device_EP7R_DTOG_TX DTOG_TX **/
#define USB_FS_device_EP7R_DTOG_TX		(1 << 6)

#define USB_FS_device_EP7R_STAT_TX_SHIFT		4
#define USB_FS_device_EP7R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_device_ep7r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_device_EP7R_EA_SHIFT		0
#define USB_FS_device_EP7R_EA_MASK		0x0f
/** @defgroup usb_fs_device_ep7r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_device_cntr CNTR USB control register
@{*/

/** USB_FS_device_CNTR_CTRM CTRM **/
#define USB_FS_device_CNTR_CTRM		(1 << 15)
/** USB_FS_device_CNTR_PMAOVRM PMAOVRM **/
#define USB_FS_device_CNTR_PMAOVRM		(1 << 14)
/** USB_FS_device_CNTR_ERRM ERRM **/
#define USB_FS_device_CNTR_ERRM		(1 << 13)
/** USB_FS_device_CNTR_WKUPM WKUPM **/
#define USB_FS_device_CNTR_WKUPM		(1 << 12)
/** USB_FS_device_CNTR_SUSPM SUSPM **/
#define USB_FS_device_CNTR_SUSPM		(1 << 11)
/** USB_FS_device_CNTR_RESETM RESETM **/
#define USB_FS_device_CNTR_RESETM		(1 << 10)
/** USB_FS_device_CNTR_SOFM SOFM **/
#define USB_FS_device_CNTR_SOFM		(1 << 9)
/** USB_FS_device_CNTR_ESOFM ESOFM **/
#define USB_FS_device_CNTR_ESOFM		(1 << 8)
/** USB_FS_device_CNTR_L1REQM L1REQM **/
#define USB_FS_device_CNTR_L1REQM		(1 << 7)
/** USB_FS_device_CNTR_L1RESUME L1RESUME **/
#define USB_FS_device_CNTR_L1RESUME		(1 << 5)
/** USB_FS_device_CNTR_RESUME RESUME **/
#define USB_FS_device_CNTR_RESUME		(1 << 4)
/** USB_FS_device_CNTR_FSUSP FSUSP **/
#define USB_FS_device_CNTR_FSUSP		(1 << 3)
/** USB_FS_device_CNTR_LP_MODE LP_MODE **/
#define USB_FS_device_CNTR_LP_MODE		(1 << 2)
/** USB_FS_device_CNTR_PDWN PDWN **/
#define USB_FS_device_CNTR_PDWN		(1 << 1)
/** USB_FS_device_CNTR_FRES FRES **/
#define USB_FS_device_CNTR_FRES		(1 << 0)

/**@}*/

/** @defgroup usb_fs_device_istr ISTR USB interrupt status register
@{*/

/** USB_FS_device_ISTR_CTR CTR **/
#define USB_FS_device_ISTR_CTR		(1 << 15)
/** USB_FS_device_ISTR_PMAOVR PMAOVR **/
#define USB_FS_device_ISTR_PMAOVR		(1 << 14)
/** USB_FS_device_ISTR_ERR ERR **/
#define USB_FS_device_ISTR_ERR		(1 << 13)
/** USB_FS_device_ISTR_WKUP WKUP **/
#define USB_FS_device_ISTR_WKUP		(1 << 12)
/** USB_FS_device_ISTR_SUSP SUSP **/
#define USB_FS_device_ISTR_SUSP		(1 << 11)
/** USB_FS_device_ISTR_RESET RESET **/
#define USB_FS_device_ISTR_RESET		(1 << 10)
/** USB_FS_device_ISTR_SOF SOF **/
#define USB_FS_device_ISTR_SOF		(1 << 9)
/** USB_FS_device_ISTR_ESOF ESOF **/
#define USB_FS_device_ISTR_ESOF		(1 << 8)
/** USB_FS_device_ISTR_L1REQ L1REQ **/
#define USB_FS_device_ISTR_L1REQ		(1 << 7)
/** USB_FS_device_ISTR_DIR DIR **/
#define USB_FS_device_ISTR_DIR		(1 << 4)

#define USB_FS_device_ISTR_EP_ID_SHIFT		0
#define USB_FS_device_ISTR_EP_ID_MASK		0x0f
/** @defgroup usb_fs_device_istr_ep_id EPID EP_ID
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_device_fnr FNR USB frame number register
@{*/

/** USB_FS_device_FNR_RXDP RXDP **/
#define USB_FS_device_FNR_RXDP		(1 << 15)
/** USB_FS_device_FNR_RXDM RXDM **/
#define USB_FS_device_FNR_RXDM		(1 << 14)
/** USB_FS_device_FNR_LCK LCK **/
#define USB_FS_device_FNR_LCK		(1 << 13)

#define USB_FS_device_FNR_LSOF_SHIFT		11
#define USB_FS_device_FNR_LSOF_MASK		0x03
/** @defgroup usb_fs_device_fnr_lsof LSOF LSOF
@{*/
/**@}*/


#define USB_FS_device_FNR_FN_SHIFT		0
#define USB_FS_device_FNR_FN_MASK		0x7ff
/** @defgroup usb_fs_device_fnr_fn FN FN
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_device_daddr DADDR USB device address
@{*/

/** USB_FS_device_DADDR_EF EF **/
#define USB_FS_device_DADDR_EF		(1 << 7)

#define USB_FS_device_DADDR_ADD_SHIFT		0
#define USB_FS_device_DADDR_ADD_MASK		0x7f
/** @defgroup usb_fs_device_daddr_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_device_btable BTABLE Buffer table address
@{*/


#define USB_FS_device_BTABLE_BTABLE_SHIFT		3
#define USB_FS_device_BTABLE_BTABLE_MASK		0x1fff
/** @defgroup usb_fs_device_btable_btable BTABLE BTABLE
@{*/
/**@}*/


/**@}*/

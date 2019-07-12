#pragma once 

/* --- USB_FS: Universal serial bus full-speed device interface ----- */

/** @defgroup usb_fs_registers Universal serial bus full-speed device
      interface Register
@{*/

/** USB_FS_EP0R endpoint register **/
#define USB_FS_EP0R			MMIO32(USB_FS_BASE + 0x00)
/** USB_FS_EP1R endpoint register **/
#define USB_FS_EP1R			MMIO32(USB_FS_BASE + 0x04)
/** USB_FS_EP2R endpoint register **/
#define USB_FS_EP2R			MMIO32(USB_FS_BASE + 0x08)
/** USB_FS_EP3R endpoint register **/
#define USB_FS_EP3R			MMIO32(USB_FS_BASE + 0x0c)
/** USB_FS_EP4R endpoint register **/
#define USB_FS_EP4R			MMIO32(USB_FS_BASE + 0x10)
/** USB_FS_EP5R endpoint register **/
#define USB_FS_EP5R			MMIO32(USB_FS_BASE + 0x14)
/** USB_FS_EP6R endpoint register **/
#define USB_FS_EP6R			MMIO32(USB_FS_BASE + 0x18)
/** USB_FS_EP7R endpoint register **/
#define USB_FS_EP7R			MMIO32(USB_FS_BASE + 0x1c)
/** USB_FS_CNTR control register **/
#define USB_FS_CNTR			MMIO32(USB_FS_BASE + 0x40)
/** USB_FS_ISTR interrupt status register **/
#define USB_FS_ISTR			MMIO32(USB_FS_BASE + 0x44)
/** USB_FS_FNR frame number register **/
#define USB_FS_FNR			MMIO32(USB_FS_BASE + 0x48)
/** USB_FS_DADDR device address **/
#define USB_FS_DADDR			MMIO32(USB_FS_BASE + 0x4c)
/** USB_FS_BTABLE Buffer table address **/
#define USB_FS_BTABLE			MMIO32(USB_FS_BASE + 0x50)
/** USB_FS_LPMCSR LPM control and status register **/
#define USB_FS_LPMCSR			MMIO32(USB_FS_BASE + 0x54)
/** USB_FS_BCDR Battery charging detector **/
#define USB_FS_BCDR			MMIO32(USB_FS_BASE + 0x58)

/**@}*/


/** @defgroup usb_fs_ep0r EP0R endpoint register
@{*/

/** USB_FS_EP0R_CTR_RX CTR_RX **/
#define USB_FS_EP0R_CTR_RX		(1 << 15)
/** USB_FS_EP0R_DTOG_RX DTOG_RX **/
#define USB_FS_EP0R_DTOG_RX		(1 << 14)

#define USB_FS_EP0R_STAT_RX_SHIFT		12
#define USB_FS_EP0R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_ep0r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_EP0R_SETUP SETUP **/
#define USB_FS_EP0R_SETUP		(1 << 11)

#define USB_FS_EP0R_EPTYPE_SHIFT		9
#define USB_FS_EP0R_EPTYPE_MASK		0x03
/** @defgroup usb_fs_ep0r_eptype EPTYPE EPTYPE
@{*/
/**@}*/

/** USB_FS_EP0R_EP_KIND EP_KIND **/
#define USB_FS_EP0R_EP_KIND		(1 << 8)
/** USB_FS_EP0R_CTR_TX CTR_TX **/
#define USB_FS_EP0R_CTR_TX		(1 << 7)
/** USB_FS_EP0R_DTOG_TX DTOG_TX **/
#define USB_FS_EP0R_DTOG_TX		(1 << 6)

#define USB_FS_EP0R_STAT_TX_SHIFT		4
#define USB_FS_EP0R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_ep0r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_EP0R_EA_SHIFT		0
#define USB_FS_EP0R_EA_MASK		0x0f
/** @defgroup usb_fs_ep0r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_ep1r EP1R endpoint register
@{*/

/** USB_FS_EP1R_CTR_RX CTR_RX **/
#define USB_FS_EP1R_CTR_RX		(1 << 15)
/** USB_FS_EP1R_DTOG_RX DTOG_RX **/
#define USB_FS_EP1R_DTOG_RX		(1 << 14)

#define USB_FS_EP1R_STAT_RX_SHIFT		12
#define USB_FS_EP1R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_ep1r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_EP1R_SETUP SETUP **/
#define USB_FS_EP1R_SETUP		(1 << 11)

#define USB_FS_EP1R_EPTYPE_SHIFT		9
#define USB_FS_EP1R_EPTYPE_MASK		0x03
/** @defgroup usb_fs_ep1r_eptype EPTYPE EPTYPE
@{*/
/**@}*/

/** USB_FS_EP1R_EP_KIND EP_KIND **/
#define USB_FS_EP1R_EP_KIND		(1 << 8)
/** USB_FS_EP1R_CTR_TX CTR_TX **/
#define USB_FS_EP1R_CTR_TX		(1 << 7)
/** USB_FS_EP1R_DTOG_TX DTOG_TX **/
#define USB_FS_EP1R_DTOG_TX		(1 << 6)

#define USB_FS_EP1R_STAT_TX_SHIFT		4
#define USB_FS_EP1R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_ep1r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_EP1R_EA_SHIFT		0
#define USB_FS_EP1R_EA_MASK		0x0f
/** @defgroup usb_fs_ep1r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_ep2r EP2R endpoint register
@{*/

/** USB_FS_EP2R_CTR_RX CTR_RX **/
#define USB_FS_EP2R_CTR_RX		(1 << 15)
/** USB_FS_EP2R_DTOG_RX DTOG_RX **/
#define USB_FS_EP2R_DTOG_RX		(1 << 14)

#define USB_FS_EP2R_STAT_RX_SHIFT		12
#define USB_FS_EP2R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_ep2r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_EP2R_SETUP SETUP **/
#define USB_FS_EP2R_SETUP		(1 << 11)

#define USB_FS_EP2R_EPTYPE_SHIFT		9
#define USB_FS_EP2R_EPTYPE_MASK		0x03
/** @defgroup usb_fs_ep2r_eptype EPTYPE EPTYPE
@{*/
/**@}*/

/** USB_FS_EP2R_EP_KIND EP_KIND **/
#define USB_FS_EP2R_EP_KIND		(1 << 8)
/** USB_FS_EP2R_CTR_TX CTR_TX **/
#define USB_FS_EP2R_CTR_TX		(1 << 7)
/** USB_FS_EP2R_DTOG_TX DTOG_TX **/
#define USB_FS_EP2R_DTOG_TX		(1 << 6)

#define USB_FS_EP2R_STAT_TX_SHIFT		4
#define USB_FS_EP2R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_ep2r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_EP2R_EA_SHIFT		0
#define USB_FS_EP2R_EA_MASK		0x0f
/** @defgroup usb_fs_ep2r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_ep3r EP3R endpoint register
@{*/

/** USB_FS_EP3R_CTR_RX CTR_RX **/
#define USB_FS_EP3R_CTR_RX		(1 << 15)
/** USB_FS_EP3R_DTOG_RX DTOG_RX **/
#define USB_FS_EP3R_DTOG_RX		(1 << 14)

#define USB_FS_EP3R_STAT_RX_SHIFT		12
#define USB_FS_EP3R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_ep3r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_EP3R_SETUP SETUP **/
#define USB_FS_EP3R_SETUP		(1 << 11)

#define USB_FS_EP3R_EPTYPE_SHIFT		9
#define USB_FS_EP3R_EPTYPE_MASK		0x03
/** @defgroup usb_fs_ep3r_eptype EPTYPE EPTYPE
@{*/
/**@}*/

/** USB_FS_EP3R_EP_KIND EP_KIND **/
#define USB_FS_EP3R_EP_KIND		(1 << 8)
/** USB_FS_EP3R_CTR_TX CTR_TX **/
#define USB_FS_EP3R_CTR_TX		(1 << 7)
/** USB_FS_EP3R_DTOG_TX DTOG_TX **/
#define USB_FS_EP3R_DTOG_TX		(1 << 6)

#define USB_FS_EP3R_STAT_TX_SHIFT		4
#define USB_FS_EP3R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_ep3r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_EP3R_EA_SHIFT		0
#define USB_FS_EP3R_EA_MASK		0x0f
/** @defgroup usb_fs_ep3r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_ep4r EP4R endpoint register
@{*/

/** USB_FS_EP4R_CTR_RX CTR_RX **/
#define USB_FS_EP4R_CTR_RX		(1 << 15)
/** USB_FS_EP4R_DTOG_RX DTOG_RX **/
#define USB_FS_EP4R_DTOG_RX		(1 << 14)

#define USB_FS_EP4R_STAT_RX_SHIFT		12
#define USB_FS_EP4R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_ep4r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_EP4R_SETUP SETUP **/
#define USB_FS_EP4R_SETUP		(1 << 11)

#define USB_FS_EP4R_EPTYPE_SHIFT		9
#define USB_FS_EP4R_EPTYPE_MASK		0x03
/** @defgroup usb_fs_ep4r_eptype EPTYPE EPTYPE
@{*/
/**@}*/

/** USB_FS_EP4R_EP_KIND EP_KIND **/
#define USB_FS_EP4R_EP_KIND		(1 << 8)
/** USB_FS_EP4R_CTR_TX CTR_TX **/
#define USB_FS_EP4R_CTR_TX		(1 << 7)
/** USB_FS_EP4R_DTOG_TX DTOG_TX **/
#define USB_FS_EP4R_DTOG_TX		(1 << 6)

#define USB_FS_EP4R_STAT_TX_SHIFT		4
#define USB_FS_EP4R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_ep4r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_EP4R_EA_SHIFT		0
#define USB_FS_EP4R_EA_MASK		0x0f
/** @defgroup usb_fs_ep4r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_ep5r EP5R endpoint register
@{*/

/** USB_FS_EP5R_CTR_RX CTR_RX **/
#define USB_FS_EP5R_CTR_RX		(1 << 15)
/** USB_FS_EP5R_DTOG_RX DTOG_RX **/
#define USB_FS_EP5R_DTOG_RX		(1 << 14)

#define USB_FS_EP5R_STAT_RX_SHIFT		12
#define USB_FS_EP5R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_ep5r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_EP5R_SETUP SETUP **/
#define USB_FS_EP5R_SETUP		(1 << 11)

#define USB_FS_EP5R_EPTYPE_SHIFT		9
#define USB_FS_EP5R_EPTYPE_MASK		0x03
/** @defgroup usb_fs_ep5r_eptype EPTYPE EPTYPE
@{*/
/**@}*/

/** USB_FS_EP5R_EP_KIND EP_KIND **/
#define USB_FS_EP5R_EP_KIND		(1 << 8)
/** USB_FS_EP5R_CTR_TX CTR_TX **/
#define USB_FS_EP5R_CTR_TX		(1 << 7)
/** USB_FS_EP5R_DTOG_TX DTOG_TX **/
#define USB_FS_EP5R_DTOG_TX		(1 << 6)

#define USB_FS_EP5R_STAT_TX_SHIFT		4
#define USB_FS_EP5R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_ep5r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_EP5R_EA_SHIFT		0
#define USB_FS_EP5R_EA_MASK		0x0f
/** @defgroup usb_fs_ep5r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_ep6r EP6R endpoint register
@{*/

/** USB_FS_EP6R_CTR_RX CTR_RX **/
#define USB_FS_EP6R_CTR_RX		(1 << 15)
/** USB_FS_EP6R_DTOG_RX DTOG_RX **/
#define USB_FS_EP6R_DTOG_RX		(1 << 14)

#define USB_FS_EP6R_STAT_RX_SHIFT		12
#define USB_FS_EP6R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_ep6r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_EP6R_SETUP SETUP **/
#define USB_FS_EP6R_SETUP		(1 << 11)

#define USB_FS_EP6R_EPTYPE_SHIFT		9
#define USB_FS_EP6R_EPTYPE_MASK		0x03
/** @defgroup usb_fs_ep6r_eptype EPTYPE EPTYPE
@{*/
/**@}*/

/** USB_FS_EP6R_EP_KIND EP_KIND **/
#define USB_FS_EP6R_EP_KIND		(1 << 8)
/** USB_FS_EP6R_CTR_TX CTR_TX **/
#define USB_FS_EP6R_CTR_TX		(1 << 7)
/** USB_FS_EP6R_DTOG_TX DTOG_TX **/
#define USB_FS_EP6R_DTOG_TX		(1 << 6)

#define USB_FS_EP6R_STAT_TX_SHIFT		4
#define USB_FS_EP6R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_ep6r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_EP6R_EA_SHIFT		0
#define USB_FS_EP6R_EA_MASK		0x0f
/** @defgroup usb_fs_ep6r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_ep7r EP7R endpoint register
@{*/

/** USB_FS_EP7R_CTR_RX CTR_RX **/
#define USB_FS_EP7R_CTR_RX		(1 << 15)
/** USB_FS_EP7R_DTOG_RX DTOG_RX **/
#define USB_FS_EP7R_DTOG_RX		(1 << 14)

#define USB_FS_EP7R_STAT_RX_SHIFT		12
#define USB_FS_EP7R_STAT_RX_MASK		0x03
/** @defgroup usb_fs_ep7r_stat_rx STATRX STAT_RX
@{*/
/**@}*/

/** USB_FS_EP7R_SETUP SETUP **/
#define USB_FS_EP7R_SETUP		(1 << 11)

#define USB_FS_EP7R_EPTYPE_SHIFT		9
#define USB_FS_EP7R_EPTYPE_MASK		0x03
/** @defgroup usb_fs_ep7r_eptype EPTYPE EPTYPE
@{*/
/**@}*/

/** USB_FS_EP7R_EP_KIND EP_KIND **/
#define USB_FS_EP7R_EP_KIND		(1 << 8)
/** USB_FS_EP7R_CTR_TX CTR_TX **/
#define USB_FS_EP7R_CTR_TX		(1 << 7)
/** USB_FS_EP7R_DTOG_TX DTOG_TX **/
#define USB_FS_EP7R_DTOG_TX		(1 << 6)

#define USB_FS_EP7R_STAT_TX_SHIFT		4
#define USB_FS_EP7R_STAT_TX_MASK		0x03
/** @defgroup usb_fs_ep7r_stat_tx STATTX STAT_TX
@{*/
/**@}*/


#define USB_FS_EP7R_EA_SHIFT		0
#define USB_FS_EP7R_EA_MASK		0x0f
/** @defgroup usb_fs_ep7r_ea EA EA
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_cntr CNTR control register
@{*/

/** USB_FS_CNTR_CTRM CTRM **/
#define USB_FS_CNTR_CTRM		(1 << 15)
/** USB_FS_CNTR_PMAOVRM PMAOVRM **/
#define USB_FS_CNTR_PMAOVRM		(1 << 14)
/** USB_FS_CNTR_ERRM ERRM **/
#define USB_FS_CNTR_ERRM		(1 << 13)
/** USB_FS_CNTR_WKUPM WKUPM **/
#define USB_FS_CNTR_WKUPM		(1 << 12)
/** USB_FS_CNTR_SUSPM SUSPM **/
#define USB_FS_CNTR_SUSPM		(1 << 11)
/** USB_FS_CNTR_RESETM RESETM **/
#define USB_FS_CNTR_RESETM		(1 << 10)
/** USB_FS_CNTR_SOFM SOFM **/
#define USB_FS_CNTR_SOFM		(1 << 9)
/** USB_FS_CNTR_ESOFM ESOFM **/
#define USB_FS_CNTR_ESOFM		(1 << 8)
/** USB_FS_CNTR_L1REQM L1REQM **/
#define USB_FS_CNTR_L1REQM		(1 << 7)
/** USB_FS_CNTR_L1RESUME L1RESUME **/
#define USB_FS_CNTR_L1RESUME		(1 << 5)
/** USB_FS_CNTR_RESUME RESUME **/
#define USB_FS_CNTR_RESUME		(1 << 4)
/** USB_FS_CNTR_FSUSP FSUSP **/
#define USB_FS_CNTR_FSUSP		(1 << 3)
/** USB_FS_CNTR_LPMODE LPMODE **/
#define USB_FS_CNTR_LPMODE		(1 << 2)
/** USB_FS_CNTR_PDWN PDWN **/
#define USB_FS_CNTR_PDWN		(1 << 1)
/** USB_FS_CNTR_FRES FRES **/
#define USB_FS_CNTR_FRES		(1 << 0)

/**@}*/

/** @defgroup usb_fs_istr ISTR interrupt status register
@{*/

/** USB_FS_ISTR_CTR CTR **/
#define USB_FS_ISTR_CTR		(1 << 15)
/** USB_FS_ISTR_PMAOVR PMAOVR **/
#define USB_FS_ISTR_PMAOVR		(1 << 14)
/** USB_FS_ISTR_ERR ERR **/
#define USB_FS_ISTR_ERR		(1 << 13)
/** USB_FS_ISTR_WKUP WKUP **/
#define USB_FS_ISTR_WKUP		(1 << 12)
/** USB_FS_ISTR_SUSP SUSP **/
#define USB_FS_ISTR_SUSP		(1 << 11)
/** USB_FS_ISTR_RESET RESET **/
#define USB_FS_ISTR_RESET		(1 << 10)
/** USB_FS_ISTR_SOF SOF **/
#define USB_FS_ISTR_SOF		(1 << 9)
/** USB_FS_ISTR_ESOF ESOF **/
#define USB_FS_ISTR_ESOF		(1 << 8)
/** USB_FS_ISTR_L1REQ L1REQ **/
#define USB_FS_ISTR_L1REQ		(1 << 7)
/** USB_FS_ISTR_DIR DIR **/
#define USB_FS_ISTR_DIR		(1 << 4)

#define USB_FS_ISTR_EP_ID_SHIFT		0
#define USB_FS_ISTR_EP_ID_MASK		0x0f
/** @defgroup usb_fs_istr_ep_id EPID EP_ID
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_fnr FNR frame number register
@{*/

/** USB_FS_FNR_RXDP RXDP **/
#define USB_FS_FNR_RXDP		(1 << 15)
/** USB_FS_FNR_RXDM RXDM **/
#define USB_FS_FNR_RXDM		(1 << 14)
/** USB_FS_FNR_LCK LCK **/
#define USB_FS_FNR_LCK		(1 << 13)

#define USB_FS_FNR_LSOF_SHIFT		11
#define USB_FS_FNR_LSOF_MASK		0x03
/** @defgroup usb_fs_fnr_lsof LSOF LSOF
@{*/
/**@}*/


#define USB_FS_FNR_FN_SHIFT		0
#define USB_FS_FNR_FN_MASK		0x7ff
/** @defgroup usb_fs_fnr_fn FN FN
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_daddr DADDR device address
@{*/

/** USB_FS_DADDR_EF EF **/
#define USB_FS_DADDR_EF		(1 << 7)

#define USB_FS_DADDR_ADD_SHIFT		0
#define USB_FS_DADDR_ADD_MASK		0x7f
/** @defgroup usb_fs_daddr_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_btable BTABLE Buffer table address
@{*/


#define USB_FS_BTABLE_BTABLE_SHIFT		3
#define USB_FS_BTABLE_BTABLE_MASK		0x1fff
/** @defgroup usb_fs_btable_btable BTABLE BTABLE
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_fs_lpmcsr LPMCSR LPM control and status register
@{*/


#define USB_FS_LPMCSR_BESL_SHIFT		4
#define USB_FS_LPMCSR_BESL_MASK		0x0f
/** @defgroup usb_fs_lpmcsr_besl BESL BESL
@{*/
/**@}*/

/** USB_FS_LPMCSR_REMWAKE REMWAKE **/
#define USB_FS_LPMCSR_REMWAKE		(1 << 3)
/** USB_FS_LPMCSR_LPMACK LPMACK **/
#define USB_FS_LPMCSR_LPMACK		(1 << 1)
/** USB_FS_LPMCSR_LPMEN LPMEN **/
#define USB_FS_LPMCSR_LPMEN		(1 << 0)

/**@}*/

/** @defgroup usb_fs_bcdr BCDR Battery charging detector
@{*/

/** USB_FS_BCDR_DPPU DPPU **/
#define USB_FS_BCDR_DPPU		(1 << 15)
/** USB_FS_BCDR_PS2DET PS2DET **/
#define USB_FS_BCDR_PS2DET		(1 << 7)
/** USB_FS_BCDR_SDET SDET **/
#define USB_FS_BCDR_SDET		(1 << 6)
/** USB_FS_BCDR_PDET PDET **/
#define USB_FS_BCDR_PDET		(1 << 5)
/** USB_FS_BCDR_DCDET DCDET **/
#define USB_FS_BCDR_DCDET		(1 << 4)
/** USB_FS_BCDR_SDEN SDEN **/
#define USB_FS_BCDR_SDEN		(1 << 3)
/** USB_FS_BCDR_PDEN PDEN **/
#define USB_FS_BCDR_PDEN		(1 << 2)
/** USB_FS_BCDR_DCDEN DCDEN **/
#define USB_FS_BCDR_DCDEN		(1 << 1)
/** USB_FS_BCDR_BCDEN BCDEN **/
#define USB_FS_BCDR_BCDEN		(1 << 0)

/**@}*/

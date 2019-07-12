#pragma once 

/* --- OTG_FS_DEVICE: USB on the go full speed ---------------------- */

/** @defgroup otg_fs_device_registers USB on the go full speed Register
@{*/

/** OTG_FS_DEVICE_FS_DCFG OTG_FS device configuration register (OTG_FS_DCFG) **/
#define OTG_FS_DEVICE_FS_DCFG			MMIO32(OTG_FS_DEVICE_BASE + 0x00)
/** OTG_FS_DEVICE_FS_DCTL OTG_FS device control register (OTG_FS_DCTL) **/
#define OTG_FS_DEVICE_FS_DCTL			MMIO32(OTG_FS_DEVICE_BASE + 0x04)
/** OTG_FS_DEVICE_FS_DSTS OTG_FS device status register (OTG_FS_DSTS) **/
#define OTG_FS_DEVICE_FS_DSTS			MMIO32(OTG_FS_DEVICE_BASE + 0x08)
/** OTG_FS_DEVICE_FS_DIEPMSK OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK) **/
#define OTG_FS_DEVICE_FS_DIEPMSK			MMIO32(OTG_FS_DEVICE_BASE + 0x10)
/** OTG_FS_DEVICE_FS_DOEPMSK OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK) **/
#define OTG_FS_DEVICE_FS_DOEPMSK			MMIO32(OTG_FS_DEVICE_BASE + 0x14)
/** OTG_FS_DEVICE_FS_DAINT OTG_FS device all endpoints interrupt register (OTG_FS_DAINT) **/
#define OTG_FS_DEVICE_FS_DAINT			MMIO32(OTG_FS_DEVICE_BASE + 0x18)
/** OTG_FS_DEVICE_FS_DAINTMSK OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK) **/
#define OTG_FS_DEVICE_FS_DAINTMSK			MMIO32(OTG_FS_DEVICE_BASE + 0x1c)
/** OTG_FS_DEVICE_DVBUSDIS OTG_FS device VBUS discharge time register **/
#define OTG_FS_DEVICE_DVBUSDIS			MMIO32(OTG_FS_DEVICE_BASE + 0x28)
/** OTG_FS_DEVICE_DVBUSPULSE OTG_FS device VBUS pulsing time register **/
#define OTG_FS_DEVICE_DVBUSPULSE			MMIO32(OTG_FS_DEVICE_BASE + 0x2c)
/** OTG_FS_DEVICE_DIEPEMPMSK OTG_FS device IN endpoint FIFO empty interrupt mask register **/
#define OTG_FS_DEVICE_DIEPEMPMSK			MMIO32(OTG_FS_DEVICE_BASE + 0x34)
/** OTG_FS_DEVICE_FS_DIEPCTL0 OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0) **/
#define OTG_FS_DEVICE_FS_DIEPCTL0			MMIO32(OTG_FS_DEVICE_BASE + 0x100)
/** OTG_FS_DEVICE_DIEPINT0 device endpoint-x interrupt register **/
#define OTG_FS_DEVICE_DIEPINT0			MMIO32(OTG_FS_DEVICE_BASE + 0x108)
/** OTG_FS_DEVICE_DIEPTSIZ0 device endpoint-0 transfer size register **/
#define OTG_FS_DEVICE_DIEPTSIZ0			MMIO32(OTG_FS_DEVICE_BASE + 0x110)
/** OTG_FS_DEVICE_DTXFSTS0 OTG_FS device IN endpoint transmit FIFO status register **/
#define OTG_FS_DEVICE_DTXFSTS0			MMIO32(OTG_FS_DEVICE_BASE + 0x118)
/** OTG_FS_DEVICE_DIEPCTL1 OTG device endpoint-1 control register **/
#define OTG_FS_DEVICE_DIEPCTL1			MMIO32(OTG_FS_DEVICE_BASE + 0x120)
/** OTG_FS_DEVICE_DIEPINT1 device endpoint-1 interrupt register **/
#define OTG_FS_DEVICE_DIEPINT1			MMIO32(OTG_FS_DEVICE_BASE + 0x128)
/** OTG_FS_DEVICE_DIEPTSIZ1 device endpoint-1 transfer size register **/
#define OTG_FS_DEVICE_DIEPTSIZ1			MMIO32(OTG_FS_DEVICE_BASE + 0x130)
/** OTG_FS_DEVICE_DTXFSTS1 OTG_FS device IN endpoint transmit FIFO status register **/
#define OTG_FS_DEVICE_DTXFSTS1			MMIO32(OTG_FS_DEVICE_BASE + 0x138)
/** OTG_FS_DEVICE_DIEPCTL2 OTG device endpoint-2 control register **/
#define OTG_FS_DEVICE_DIEPCTL2			MMIO32(OTG_FS_DEVICE_BASE + 0x140)
/** OTG_FS_DEVICE_DIEPINT2 device endpoint-2 interrupt register **/
#define OTG_FS_DEVICE_DIEPINT2			MMIO32(OTG_FS_DEVICE_BASE + 0x148)
/** OTG_FS_DEVICE_DIEPTSIZ2 device endpoint-2 transfer size register **/
#define OTG_FS_DEVICE_DIEPTSIZ2			MMIO32(OTG_FS_DEVICE_BASE + 0x150)
/** OTG_FS_DEVICE_DTXFSTS2 OTG_FS device IN endpoint transmit FIFO status register **/
#define OTG_FS_DEVICE_DTXFSTS2			MMIO32(OTG_FS_DEVICE_BASE + 0x158)
/** OTG_FS_DEVICE_DIEPCTL3 OTG device endpoint-3 control register **/
#define OTG_FS_DEVICE_DIEPCTL3			MMIO32(OTG_FS_DEVICE_BASE + 0x160)
/** OTG_FS_DEVICE_DIEPINT3 device endpoint-3 interrupt register **/
#define OTG_FS_DEVICE_DIEPINT3			MMIO32(OTG_FS_DEVICE_BASE + 0x168)
/** OTG_FS_DEVICE_DIEPTSIZ3 device endpoint-3 transfer size register **/
#define OTG_FS_DEVICE_DIEPTSIZ3			MMIO32(OTG_FS_DEVICE_BASE + 0x170)
/** OTG_FS_DEVICE_DTXFSTS3 OTG_FS device IN endpoint transmit FIFO status register **/
#define OTG_FS_DEVICE_DTXFSTS3			MMIO32(OTG_FS_DEVICE_BASE + 0x178)
/** OTG_FS_DEVICE_DOEPCTL0 device endpoint-0 control register **/
#define OTG_FS_DEVICE_DOEPCTL0			MMIO32(OTG_FS_DEVICE_BASE + 0x300)
/** OTG_FS_DEVICE_DOEPINT0 device endpoint-0 interrupt register **/
#define OTG_FS_DEVICE_DOEPINT0			MMIO32(OTG_FS_DEVICE_BASE + 0x308)
/** OTG_FS_DEVICE_DOEPTSIZ0 device OUT endpoint-0 transfer size register **/
#define OTG_FS_DEVICE_DOEPTSIZ0			MMIO32(OTG_FS_DEVICE_BASE + 0x310)
/** OTG_FS_DEVICE_DOEPCTL1 device endpoint-1 control register **/
#define OTG_FS_DEVICE_DOEPCTL1			MMIO32(OTG_FS_DEVICE_BASE + 0x320)
/** OTG_FS_DEVICE_DOEPINT1 device endpoint-1 interrupt register **/
#define OTG_FS_DEVICE_DOEPINT1			MMIO32(OTG_FS_DEVICE_BASE + 0x328)
/** OTG_FS_DEVICE_DOEPTSIZ1 device OUT endpoint-1 transfer size register **/
#define OTG_FS_DEVICE_DOEPTSIZ1			MMIO32(OTG_FS_DEVICE_BASE + 0x330)
/** OTG_FS_DEVICE_DOEPCTL2 device endpoint-2 control register **/
#define OTG_FS_DEVICE_DOEPCTL2			MMIO32(OTG_FS_DEVICE_BASE + 0x340)
/** OTG_FS_DEVICE_DOEPINT2 device endpoint-2 interrupt register **/
#define OTG_FS_DEVICE_DOEPINT2			MMIO32(OTG_FS_DEVICE_BASE + 0x348)
/** OTG_FS_DEVICE_DOEPTSIZ2 device OUT endpoint-2 transfer size register **/
#define OTG_FS_DEVICE_DOEPTSIZ2			MMIO32(OTG_FS_DEVICE_BASE + 0x350)
/** OTG_FS_DEVICE_DOEPCTL3 device endpoint-3 control register **/
#define OTG_FS_DEVICE_DOEPCTL3			MMIO32(OTG_FS_DEVICE_BASE + 0x360)
/** OTG_FS_DEVICE_DOEPINT3 device endpoint-3 interrupt register **/
#define OTG_FS_DEVICE_DOEPINT3			MMIO32(OTG_FS_DEVICE_BASE + 0x368)
/** OTG_FS_DEVICE_DOEPTSIZ3 device OUT endpoint-3 transfer size register **/
#define OTG_FS_DEVICE_DOEPTSIZ3			MMIO32(OTG_FS_DEVICE_BASE + 0x370)

/**@}*/


/** @defgroup otg_fs_device_fs_dcfg FSDCFG OTG_FS device configuration register (OTG_FS_DCFG)
@{*/


#define OTG_FS_DEVICE_FS_DCFG_PFIVL_SHIFT		11
#define OTG_FS_DEVICE_FS_DCFG_PFIVL_MASK		0x03
/** @defgroup otg_fs_device_fs_dcfg_pfivl PFIVL Periodic frame interval
@{*/
/**@}*/


#define OTG_FS_DEVICE_FS_DCFG_DAD_SHIFT		4
#define OTG_FS_DEVICE_FS_DCFG_DAD_MASK		0x7f
/** @defgroup otg_fs_device_fs_dcfg_dad DAD Device address
@{*/
/**@}*/

/** OTG_FS_DEVICE_FS_DCFG_NZLSOHSK Non-zero-length status OUT handshake **/
#define OTG_FS_DEVICE_FS_DCFG_NZLSOHSK		(1 << 2)

#define OTG_FS_DEVICE_FS_DCFG_DSPD_SHIFT		0
#define OTG_FS_DEVICE_FS_DCFG_DSPD_MASK		0x03
/** @defgroup otg_fs_device_fs_dcfg_dspd DSPD Device speed
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_fs_dctl FSDCTL OTG_FS device control register (OTG_FS_DCTL)
@{*/

/** OTG_FS_DEVICE_FS_DCTL_POPRGDNE Power-on programming done **/
#define OTG_FS_DEVICE_FS_DCTL_POPRGDNE		(1 << 11)
/** OTG_FS_DEVICE_FS_DCTL_CGONAK Clear global OUT NAK **/
#define OTG_FS_DEVICE_FS_DCTL_CGONAK		(1 << 10)
/** OTG_FS_DEVICE_FS_DCTL_SGONAK Set global OUT NAK **/
#define OTG_FS_DEVICE_FS_DCTL_SGONAK		(1 << 9)
/** OTG_FS_DEVICE_FS_DCTL_CGINAK Clear global IN NAK **/
#define OTG_FS_DEVICE_FS_DCTL_CGINAK		(1 << 8)
/** OTG_FS_DEVICE_FS_DCTL_SGINAK Set global IN NAK **/
#define OTG_FS_DEVICE_FS_DCTL_SGINAK		(1 << 7)

#define OTG_FS_DEVICE_FS_DCTL_TCTL_SHIFT		4
#define OTG_FS_DEVICE_FS_DCTL_TCTL_MASK		0x07
/** @defgroup otg_fs_device_fs_dctl_tctl TCTL Test control
@{*/
/**@}*/

/** OTG_FS_DEVICE_FS_DCTL_GONSTS Global OUT NAK status **/
#define OTG_FS_DEVICE_FS_DCTL_GONSTS		(1 << 3)
/** OTG_FS_DEVICE_FS_DCTL_GINSTS Global IN NAK status **/
#define OTG_FS_DEVICE_FS_DCTL_GINSTS		(1 << 2)
/** OTG_FS_DEVICE_FS_DCTL_SDIS Soft disconnect **/
#define OTG_FS_DEVICE_FS_DCTL_SDIS		(1 << 1)
/** OTG_FS_DEVICE_FS_DCTL_RWUSIG Remote wakeup signaling **/
#define OTG_FS_DEVICE_FS_DCTL_RWUSIG		(1 << 0)

/**@}*/

/** @defgroup otg_fs_device_fs_dsts FSDSTS OTG_FS device status register (OTG_FS_DSTS)
@{*/


#define OTG_FS_DEVICE_FS_DSTS_FNSOF_SHIFT		8
#define OTG_FS_DEVICE_FS_DSTS_FNSOF_MASK		0x3fff
/** @defgroup otg_fs_device_fs_dsts_fnsof FNSOF Frame number of the received SOF
@{*/
/**@}*/

/** OTG_FS_DEVICE_FS_DSTS_EERR Erratic error **/
#define OTG_FS_DEVICE_FS_DSTS_EERR		(1 << 3)

#define OTG_FS_DEVICE_FS_DSTS_ENUMSPD_SHIFT		1
#define OTG_FS_DEVICE_FS_DSTS_ENUMSPD_MASK		0x03
/** @defgroup otg_fs_device_fs_dsts_enumspd ENUMSPD Enumerated speed
@{*/
/**@}*/

/** OTG_FS_DEVICE_FS_DSTS_SUSPSTS Suspend status **/
#define OTG_FS_DEVICE_FS_DSTS_SUSPSTS		(1 << 0)

/**@}*/

/** @defgroup otg_fs_device_fs_diepmsk FSDIEPMSK OTG_FS device IN endpoint common interrupt mask register (OTG_FS_DIEPMSK)
@{*/

/** OTG_FS_DEVICE_FS_DIEPMSK_INEPNEM IN endpoint NAK effective mask **/
#define OTG_FS_DEVICE_FS_DIEPMSK_INEPNEM		(1 << 6)
/** OTG_FS_DEVICE_FS_DIEPMSK_INEPNMM IN token received with EP mismatch mask **/
#define OTG_FS_DEVICE_FS_DIEPMSK_INEPNMM		(1 << 5)
/** OTG_FS_DEVICE_FS_DIEPMSK_ITTXFEMSK IN token received when TxFIFO empty mask **/
#define OTG_FS_DEVICE_FS_DIEPMSK_ITTXFEMSK		(1 << 4)
/** OTG_FS_DEVICE_FS_DIEPMSK_TOM Timeout condition mask (Non-isochronous endpoints) **/
#define OTG_FS_DEVICE_FS_DIEPMSK_TOM		(1 << 3)
/** OTG_FS_DEVICE_FS_DIEPMSK_EPDM Endpoint disabled interrupt mask **/
#define OTG_FS_DEVICE_FS_DIEPMSK_EPDM		(1 << 1)
/** OTG_FS_DEVICE_FS_DIEPMSK_XFRCM Transfer completed interrupt mask **/
#define OTG_FS_DEVICE_FS_DIEPMSK_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_device_fs_doepmsk FSDOEPMSK OTG_FS device OUT endpoint common interrupt mask register (OTG_FS_DOEPMSK)
@{*/

/** OTG_FS_DEVICE_FS_DOEPMSK_OTEPDM OUT token received when endpoint disabled mask **/
#define OTG_FS_DEVICE_FS_DOEPMSK_OTEPDM		(1 << 4)
/** OTG_FS_DEVICE_FS_DOEPMSK_STUPM SETUP phase done mask **/
#define OTG_FS_DEVICE_FS_DOEPMSK_STUPM		(1 << 3)
/** OTG_FS_DEVICE_FS_DOEPMSK_EPDM Endpoint disabled interrupt mask **/
#define OTG_FS_DEVICE_FS_DOEPMSK_EPDM		(1 << 1)
/** OTG_FS_DEVICE_FS_DOEPMSK_XFRCM Transfer completed interrupt mask **/
#define OTG_FS_DEVICE_FS_DOEPMSK_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_fs_device_fs_daint FSDAINT OTG_FS device all endpoints interrupt register (OTG_FS_DAINT)
@{*/


#define OTG_FS_DEVICE_FS_DAINT_OEPINT_SHIFT		16
#define OTG_FS_DEVICE_FS_DAINT_OEPINT_MASK		0xffff
/** @defgroup otg_fs_device_fs_daint_oepint OEPINT OUT endpoint interrupt bits
@{*/
/**@}*/


#define OTG_FS_DEVICE_FS_DAINT_IEPINT_SHIFT		0
#define OTG_FS_DEVICE_FS_DAINT_IEPINT_MASK		0xffff
/** @defgroup otg_fs_device_fs_daint_iepint IEPINT IN endpoint interrupt bits
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_fs_daintmsk FSDAINTMSK OTG_FS all endpoints interrupt mask register (OTG_FS_DAINTMSK)
@{*/


#define OTG_FS_DEVICE_FS_DAINTMSK_OEPINT_SHIFT		16
#define OTG_FS_DEVICE_FS_DAINTMSK_OEPINT_MASK		0xffff
/** @defgroup otg_fs_device_fs_daintmsk_oepint OEPINT OUT endpoint interrupt bits
@{*/
/**@}*/


#define OTG_FS_DEVICE_FS_DAINTMSK_IEPM_SHIFT		0
#define OTG_FS_DEVICE_FS_DAINTMSK_IEPM_MASK		0xffff
/** @defgroup otg_fs_device_fs_daintmsk_iepm IEPM IN EP interrupt mask bits
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_dvbusdis DVBUSDIS OTG_FS device VBUS discharge time register
@{*/


#define OTG_FS_DEVICE_DVBUSDIS_VBUSDT_SHIFT		0
#define OTG_FS_DEVICE_DVBUSDIS_VBUSDT_MASK		0xffff
/** @defgroup otg_fs_device_dvbusdis_vbusdt VBUSDT Device VBUS discharge time
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_dvbuspulse DVBUSPULSE OTG_FS device VBUS pulsing time register
@{*/


#define OTG_FS_DEVICE_DVBUSPULSE_DVBUSP_SHIFT		0
#define OTG_FS_DEVICE_DVBUSPULSE_DVBUSP_MASK		0xfff
/** @defgroup otg_fs_device_dvbuspulse_dvbusp DVBUSP Device VBUS pulsing time
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_diepempmsk DIEPEMPMSK OTG_FS device IN endpoint FIFO empty interrupt mask register
@{*/


#define OTG_FS_DEVICE_DIEPEMPMSK_INEPTXFEM_SHIFT		0
#define OTG_FS_DEVICE_DIEPEMPMSK_INEPTXFEM_MASK		0xffff
/** @defgroup otg_fs_device_diepempmsk_ineptxfem INEPTXFEM IN EP Tx FIFO empty interrupt mask bits
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_fs_diepctl0 FSDIEPCTL0 OTG_FS device control IN endpoint 0 control register (OTG_FS_DIEPCTL0)
@{*/

/** OTG_FS_DEVICE_FS_DIEPCTL0_EPENA Endpoint enable **/
#define OTG_FS_DEVICE_FS_DIEPCTL0_EPENA		(1 << 31)
/** OTG_FS_DEVICE_FS_DIEPCTL0_EPDIS Endpoint disable **/
#define OTG_FS_DEVICE_FS_DIEPCTL0_EPDIS		(1 << 30)
/** OTG_FS_DEVICE_FS_DIEPCTL0_SNAK Set NAK **/
#define OTG_FS_DEVICE_FS_DIEPCTL0_SNAK		(1 << 27)
/** OTG_FS_DEVICE_FS_DIEPCTL0_CNAK Clear NAK **/
#define OTG_FS_DEVICE_FS_DIEPCTL0_CNAK		(1 << 26)

#define OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_SHIFT		22
#define OTG_FS_DEVICE_FS_DIEPCTL0_TXFNUM_MASK		0x0f
/** @defgroup otg_fs_device_fs_diepctl0_txfnum TXFNUM TxFIFO number
@{*/
/**@}*/

/** OTG_FS_DEVICE_FS_DIEPCTL0_STALL STALL handshake **/
#define OTG_FS_DEVICE_FS_DIEPCTL0_STALL		(1 << 21)

#define OTG_FS_DEVICE_FS_DIEPCTL0_EPTYP_SHIFT		18
#define OTG_FS_DEVICE_FS_DIEPCTL0_EPTYP_MASK		0x03
/** @defgroup otg_fs_device_fs_diepctl0_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_FS_DEVICE_FS_DIEPCTL0_NAKSTS NAK status **/
#define OTG_FS_DEVICE_FS_DIEPCTL0_NAKSTS		(1 << 17)
/** OTG_FS_DEVICE_FS_DIEPCTL0_USBAEP USB active endpoint **/
#define OTG_FS_DEVICE_FS_DIEPCTL0_USBAEP		(1 << 15)

#define OTG_FS_DEVICE_FS_DIEPCTL0_MPSIZ_SHIFT		0
#define OTG_FS_DEVICE_FS_DIEPCTL0_MPSIZ_MASK		0x03
/** @defgroup otg_fs_device_fs_diepctl0_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_diepint0 DIEPINT0 device endpoint-x interrupt register
@{*/

/** OTG_FS_DEVICE_DIEPINT0_TXFE TXFE **/
#define OTG_FS_DEVICE_DIEPINT0_TXFE		(1 << 7)
/** OTG_FS_DEVICE_DIEPINT0_INEPNE INEPNE **/
#define OTG_FS_DEVICE_DIEPINT0_INEPNE		(1 << 6)
/** OTG_FS_DEVICE_DIEPINT0_ITTXFE ITTXFE **/
#define OTG_FS_DEVICE_DIEPINT0_ITTXFE		(1 << 4)
/** OTG_FS_DEVICE_DIEPINT0_TOC TOC **/
#define OTG_FS_DEVICE_DIEPINT0_TOC		(1 << 3)
/** OTG_FS_DEVICE_DIEPINT0_EPDISD EPDISD **/
#define OTG_FS_DEVICE_DIEPINT0_EPDISD		(1 << 1)
/** OTG_FS_DEVICE_DIEPINT0_XFRC XFRC **/
#define OTG_FS_DEVICE_DIEPINT0_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_device_dieptsiz0 DIEPTSIZ0 device endpoint-0 transfer size register
@{*/


#define OTG_FS_DEVICE_DIEPTSIZ0_PKTCNT_SHIFT		19
#define OTG_FS_DEVICE_DIEPTSIZ0_PKTCNT_MASK		0x03
/** @defgroup otg_fs_device_dieptsiz0_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_DEVICE_DIEPTSIZ0_XFRSIZ_SHIFT		0
#define OTG_FS_DEVICE_DIEPTSIZ0_XFRSIZ_MASK		0x7f
/** @defgroup otg_fs_device_dieptsiz0_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_dtxfsts0 DTXFSTS0 OTG_FS device IN endpoint transmit FIFO status register
@{*/


#define OTG_FS_DEVICE_DTXFSTS0_INEPTFSAV_SHIFT		0
#define OTG_FS_DEVICE_DTXFSTS0_INEPTFSAV_MASK		0xffff
/** @defgroup otg_fs_device_dtxfsts0_ineptfsav INEPTFSAV IN endpoint TxFIFO space available
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_diepctl1 DIEPCTL1 OTG device endpoint-1 control register
@{*/

/** OTG_FS_DEVICE_DIEPCTL1_EPENA EPENA **/
#define OTG_FS_DEVICE_DIEPCTL1_EPENA		(1 << 31)
/** OTG_FS_DEVICE_DIEPCTL1_EPDIS EPDIS **/
#define OTG_FS_DEVICE_DIEPCTL1_EPDIS		(1 << 30)
/** OTG_FS_DEVICE_DIEPCTL1_SODDFRM_SD1PID SODDFRM/SD1PID **/
#define OTG_FS_DEVICE_DIEPCTL1_SODDFRM_SD1PID		(1 << 29)
/** OTG_FS_DEVICE_DIEPCTL1_SD0PID_SEVNFRM SD0PID/SEVNFRM **/
#define OTG_FS_DEVICE_DIEPCTL1_SD0PID_SEVNFRM		(1 << 28)
/** OTG_FS_DEVICE_DIEPCTL1_SNAK SNAK **/
#define OTG_FS_DEVICE_DIEPCTL1_SNAK		(1 << 27)
/** OTG_FS_DEVICE_DIEPCTL1_CNAK CNAK **/
#define OTG_FS_DEVICE_DIEPCTL1_CNAK		(1 << 26)

#define OTG_FS_DEVICE_DIEPCTL1_TXFNUM_SHIFT		22
#define OTG_FS_DEVICE_DIEPCTL1_TXFNUM_MASK		0x0f
/** @defgroup otg_fs_device_diepctl1_txfnum TXFNUM TXFNUM
@{*/
/**@}*/

/** OTG_FS_DEVICE_DIEPCTL1_Stall Stall **/
#define OTG_FS_DEVICE_DIEPCTL1_Stall		(1 << 21)

#define OTG_FS_DEVICE_DIEPCTL1_EPTYP_SHIFT		18
#define OTG_FS_DEVICE_DIEPCTL1_EPTYP_MASK		0x03
/** @defgroup otg_fs_device_diepctl1_eptyp EPTYP EPTYP
@{*/
/**@}*/

/** OTG_FS_DEVICE_DIEPCTL1_NAKSTS NAKSTS **/
#define OTG_FS_DEVICE_DIEPCTL1_NAKSTS		(1 << 17)
/** OTG_FS_DEVICE_DIEPCTL1_EONUM_DPID EONUM/DPID **/
#define OTG_FS_DEVICE_DIEPCTL1_EONUM_DPID		(1 << 16)
/** OTG_FS_DEVICE_DIEPCTL1_USBAEP USBAEP **/
#define OTG_FS_DEVICE_DIEPCTL1_USBAEP		(1 << 15)

#define OTG_FS_DEVICE_DIEPCTL1_MPSIZ_SHIFT		0
#define OTG_FS_DEVICE_DIEPCTL1_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_device_diepctl1_mpsiz MPSIZ MPSIZ
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_diepint1 DIEPINT1 device endpoint-1 interrupt register
@{*/

/** OTG_FS_DEVICE_DIEPINT1_TXFE TXFE **/
#define OTG_FS_DEVICE_DIEPINT1_TXFE		(1 << 7)
/** OTG_FS_DEVICE_DIEPINT1_INEPNE INEPNE **/
#define OTG_FS_DEVICE_DIEPINT1_INEPNE		(1 << 6)
/** OTG_FS_DEVICE_DIEPINT1_ITTXFE ITTXFE **/
#define OTG_FS_DEVICE_DIEPINT1_ITTXFE		(1 << 4)
/** OTG_FS_DEVICE_DIEPINT1_TOC TOC **/
#define OTG_FS_DEVICE_DIEPINT1_TOC		(1 << 3)
/** OTG_FS_DEVICE_DIEPINT1_EPDISD EPDISD **/
#define OTG_FS_DEVICE_DIEPINT1_EPDISD		(1 << 1)
/** OTG_FS_DEVICE_DIEPINT1_XFRC XFRC **/
#define OTG_FS_DEVICE_DIEPINT1_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_device_dieptsiz1 DIEPTSIZ1 device endpoint-1 transfer size register
@{*/


#define OTG_FS_DEVICE_DIEPTSIZ1_MCNT_SHIFT		29
#define OTG_FS_DEVICE_DIEPTSIZ1_MCNT_MASK		0x03
/** @defgroup otg_fs_device_dieptsiz1_mcnt MCNT Multi count
@{*/
/**@}*/


#define OTG_FS_DEVICE_DIEPTSIZ1_PKTCNT_SHIFT		19
#define OTG_FS_DEVICE_DIEPTSIZ1_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_device_dieptsiz1_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_DEVICE_DIEPTSIZ1_XFRSIZ_SHIFT		0
#define OTG_FS_DEVICE_DIEPTSIZ1_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_device_dieptsiz1_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_dtxfsts1 DTXFSTS1 OTG_FS device IN endpoint transmit FIFO status register
@{*/


#define OTG_FS_DEVICE_DTXFSTS1_INEPTFSAV_SHIFT		0
#define OTG_FS_DEVICE_DTXFSTS1_INEPTFSAV_MASK		0xffff
/** @defgroup otg_fs_device_dtxfsts1_ineptfsav INEPTFSAV IN endpoint TxFIFO space available
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_diepctl2 DIEPCTL2 OTG device endpoint-2 control register
@{*/

/** OTG_FS_DEVICE_DIEPCTL2_EPENA EPENA **/
#define OTG_FS_DEVICE_DIEPCTL2_EPENA		(1 << 31)
/** OTG_FS_DEVICE_DIEPCTL2_EPDIS EPDIS **/
#define OTG_FS_DEVICE_DIEPCTL2_EPDIS		(1 << 30)
/** OTG_FS_DEVICE_DIEPCTL2_SODDFRM SODDFRM **/
#define OTG_FS_DEVICE_DIEPCTL2_SODDFRM		(1 << 29)
/** OTG_FS_DEVICE_DIEPCTL2_SD0PID_SEVNFRM SD0PID/SEVNFRM **/
#define OTG_FS_DEVICE_DIEPCTL2_SD0PID_SEVNFRM		(1 << 28)
/** OTG_FS_DEVICE_DIEPCTL2_SNAK SNAK **/
#define OTG_FS_DEVICE_DIEPCTL2_SNAK		(1 << 27)
/** OTG_FS_DEVICE_DIEPCTL2_CNAK CNAK **/
#define OTG_FS_DEVICE_DIEPCTL2_CNAK		(1 << 26)

#define OTG_FS_DEVICE_DIEPCTL2_TXFNUM_SHIFT		22
#define OTG_FS_DEVICE_DIEPCTL2_TXFNUM_MASK		0x0f
/** @defgroup otg_fs_device_diepctl2_txfnum TXFNUM TXFNUM
@{*/
/**@}*/

/** OTG_FS_DEVICE_DIEPCTL2_Stall Stall **/
#define OTG_FS_DEVICE_DIEPCTL2_Stall		(1 << 21)

#define OTG_FS_DEVICE_DIEPCTL2_EPTYP_SHIFT		18
#define OTG_FS_DEVICE_DIEPCTL2_EPTYP_MASK		0x03
/** @defgroup otg_fs_device_diepctl2_eptyp EPTYP EPTYP
@{*/
/**@}*/

/** OTG_FS_DEVICE_DIEPCTL2_NAKSTS NAKSTS **/
#define OTG_FS_DEVICE_DIEPCTL2_NAKSTS		(1 << 17)
/** OTG_FS_DEVICE_DIEPCTL2_EONUM_DPID EONUM/DPID **/
#define OTG_FS_DEVICE_DIEPCTL2_EONUM_DPID		(1 << 16)
/** OTG_FS_DEVICE_DIEPCTL2_USBAEP USBAEP **/
#define OTG_FS_DEVICE_DIEPCTL2_USBAEP		(1 << 15)

#define OTG_FS_DEVICE_DIEPCTL2_MPSIZ_SHIFT		0
#define OTG_FS_DEVICE_DIEPCTL2_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_device_diepctl2_mpsiz MPSIZ MPSIZ
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_diepint2 DIEPINT2 device endpoint-2 interrupt register
@{*/

/** OTG_FS_DEVICE_DIEPINT2_TXFE TXFE **/
#define OTG_FS_DEVICE_DIEPINT2_TXFE		(1 << 7)
/** OTG_FS_DEVICE_DIEPINT2_INEPNE INEPNE **/
#define OTG_FS_DEVICE_DIEPINT2_INEPNE		(1 << 6)
/** OTG_FS_DEVICE_DIEPINT2_ITTXFE ITTXFE **/
#define OTG_FS_DEVICE_DIEPINT2_ITTXFE		(1 << 4)
/** OTG_FS_DEVICE_DIEPINT2_TOC TOC **/
#define OTG_FS_DEVICE_DIEPINT2_TOC		(1 << 3)
/** OTG_FS_DEVICE_DIEPINT2_EPDISD EPDISD **/
#define OTG_FS_DEVICE_DIEPINT2_EPDISD		(1 << 1)
/** OTG_FS_DEVICE_DIEPINT2_XFRC XFRC **/
#define OTG_FS_DEVICE_DIEPINT2_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_device_dieptsiz2 DIEPTSIZ2 device endpoint-2 transfer size register
@{*/


#define OTG_FS_DEVICE_DIEPTSIZ2_MCNT_SHIFT		29
#define OTG_FS_DEVICE_DIEPTSIZ2_MCNT_MASK		0x03
/** @defgroup otg_fs_device_dieptsiz2_mcnt MCNT Multi count
@{*/
/**@}*/


#define OTG_FS_DEVICE_DIEPTSIZ2_PKTCNT_SHIFT		19
#define OTG_FS_DEVICE_DIEPTSIZ2_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_device_dieptsiz2_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_DEVICE_DIEPTSIZ2_XFRSIZ_SHIFT		0
#define OTG_FS_DEVICE_DIEPTSIZ2_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_device_dieptsiz2_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_dtxfsts2 DTXFSTS2 OTG_FS device IN endpoint transmit FIFO status register
@{*/


#define OTG_FS_DEVICE_DTXFSTS2_INEPTFSAV_SHIFT		0
#define OTG_FS_DEVICE_DTXFSTS2_INEPTFSAV_MASK		0xffff
/** @defgroup otg_fs_device_dtxfsts2_ineptfsav INEPTFSAV IN endpoint TxFIFO space available
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_diepctl3 DIEPCTL3 OTG device endpoint-3 control register
@{*/

/** OTG_FS_DEVICE_DIEPCTL3_EPENA EPENA **/
#define OTG_FS_DEVICE_DIEPCTL3_EPENA		(1 << 31)
/** OTG_FS_DEVICE_DIEPCTL3_EPDIS EPDIS **/
#define OTG_FS_DEVICE_DIEPCTL3_EPDIS		(1 << 30)
/** OTG_FS_DEVICE_DIEPCTL3_SODDFRM SODDFRM **/
#define OTG_FS_DEVICE_DIEPCTL3_SODDFRM		(1 << 29)
/** OTG_FS_DEVICE_DIEPCTL3_SD0PID_SEVNFRM SD0PID/SEVNFRM **/
#define OTG_FS_DEVICE_DIEPCTL3_SD0PID_SEVNFRM		(1 << 28)
/** OTG_FS_DEVICE_DIEPCTL3_SNAK SNAK **/
#define OTG_FS_DEVICE_DIEPCTL3_SNAK		(1 << 27)
/** OTG_FS_DEVICE_DIEPCTL3_CNAK CNAK **/
#define OTG_FS_DEVICE_DIEPCTL3_CNAK		(1 << 26)

#define OTG_FS_DEVICE_DIEPCTL3_TXFNUM_SHIFT		22
#define OTG_FS_DEVICE_DIEPCTL3_TXFNUM_MASK		0x0f
/** @defgroup otg_fs_device_diepctl3_txfnum TXFNUM TXFNUM
@{*/
/**@}*/

/** OTG_FS_DEVICE_DIEPCTL3_Stall Stall **/
#define OTG_FS_DEVICE_DIEPCTL3_Stall		(1 << 21)

#define OTG_FS_DEVICE_DIEPCTL3_EPTYP_SHIFT		18
#define OTG_FS_DEVICE_DIEPCTL3_EPTYP_MASK		0x03
/** @defgroup otg_fs_device_diepctl3_eptyp EPTYP EPTYP
@{*/
/**@}*/

/** OTG_FS_DEVICE_DIEPCTL3_NAKSTS NAKSTS **/
#define OTG_FS_DEVICE_DIEPCTL3_NAKSTS		(1 << 17)
/** OTG_FS_DEVICE_DIEPCTL3_EONUM_DPID EONUM/DPID **/
#define OTG_FS_DEVICE_DIEPCTL3_EONUM_DPID		(1 << 16)
/** OTG_FS_DEVICE_DIEPCTL3_USBAEP USBAEP **/
#define OTG_FS_DEVICE_DIEPCTL3_USBAEP		(1 << 15)

#define OTG_FS_DEVICE_DIEPCTL3_MPSIZ_SHIFT		0
#define OTG_FS_DEVICE_DIEPCTL3_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_device_diepctl3_mpsiz MPSIZ MPSIZ
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_diepint3 DIEPINT3 device endpoint-3 interrupt register
@{*/

/** OTG_FS_DEVICE_DIEPINT3_TXFE TXFE **/
#define OTG_FS_DEVICE_DIEPINT3_TXFE		(1 << 7)
/** OTG_FS_DEVICE_DIEPINT3_INEPNE INEPNE **/
#define OTG_FS_DEVICE_DIEPINT3_INEPNE		(1 << 6)
/** OTG_FS_DEVICE_DIEPINT3_ITTXFE ITTXFE **/
#define OTG_FS_DEVICE_DIEPINT3_ITTXFE		(1 << 4)
/** OTG_FS_DEVICE_DIEPINT3_TOC TOC **/
#define OTG_FS_DEVICE_DIEPINT3_TOC		(1 << 3)
/** OTG_FS_DEVICE_DIEPINT3_EPDISD EPDISD **/
#define OTG_FS_DEVICE_DIEPINT3_EPDISD		(1 << 1)
/** OTG_FS_DEVICE_DIEPINT3_XFRC XFRC **/
#define OTG_FS_DEVICE_DIEPINT3_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_device_dieptsiz3 DIEPTSIZ3 device endpoint-3 transfer size register
@{*/


#define OTG_FS_DEVICE_DIEPTSIZ3_MCNT_SHIFT		29
#define OTG_FS_DEVICE_DIEPTSIZ3_MCNT_MASK		0x03
/** @defgroup otg_fs_device_dieptsiz3_mcnt MCNT Multi count
@{*/
/**@}*/


#define OTG_FS_DEVICE_DIEPTSIZ3_PKTCNT_SHIFT		19
#define OTG_FS_DEVICE_DIEPTSIZ3_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_device_dieptsiz3_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_DEVICE_DIEPTSIZ3_XFRSIZ_SHIFT		0
#define OTG_FS_DEVICE_DIEPTSIZ3_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_device_dieptsiz3_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_dtxfsts3 DTXFSTS3 OTG_FS device IN endpoint transmit FIFO status register
@{*/


#define OTG_FS_DEVICE_DTXFSTS3_INEPTFSAV_SHIFT		0
#define OTG_FS_DEVICE_DTXFSTS3_INEPTFSAV_MASK		0xffff
/** @defgroup otg_fs_device_dtxfsts3_ineptfsav INEPTFSAV IN endpoint TxFIFO space available
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_doepctl0 DOEPCTL0 device endpoint-0 control register
@{*/

/** OTG_FS_DEVICE_DOEPCTL0_EPENA EPENA **/
#define OTG_FS_DEVICE_DOEPCTL0_EPENA		(1 << 31)
/** OTG_FS_DEVICE_DOEPCTL0_EPDIS EPDIS **/
#define OTG_FS_DEVICE_DOEPCTL0_EPDIS		(1 << 30)
/** OTG_FS_DEVICE_DOEPCTL0_SNAK SNAK **/
#define OTG_FS_DEVICE_DOEPCTL0_SNAK		(1 << 27)
/** OTG_FS_DEVICE_DOEPCTL0_CNAK CNAK **/
#define OTG_FS_DEVICE_DOEPCTL0_CNAK		(1 << 26)
/** OTG_FS_DEVICE_DOEPCTL0_Stall Stall **/
#define OTG_FS_DEVICE_DOEPCTL0_Stall		(1 << 21)
/** OTG_FS_DEVICE_DOEPCTL0_SNPM SNPM **/
#define OTG_FS_DEVICE_DOEPCTL0_SNPM		(1 << 20)

#define OTG_FS_DEVICE_DOEPCTL0_EPTYP_SHIFT		18
#define OTG_FS_DEVICE_DOEPCTL0_EPTYP_MASK		0x03
/** @defgroup otg_fs_device_doepctl0_eptyp EPTYP EPTYP
@{*/
/**@}*/

/** OTG_FS_DEVICE_DOEPCTL0_NAKSTS NAKSTS **/
#define OTG_FS_DEVICE_DOEPCTL0_NAKSTS		(1 << 17)
/** OTG_FS_DEVICE_DOEPCTL0_USBAEP USBAEP **/
#define OTG_FS_DEVICE_DOEPCTL0_USBAEP		(1 << 15)

#define OTG_FS_DEVICE_DOEPCTL0_MPSIZ_SHIFT		0
#define OTG_FS_DEVICE_DOEPCTL0_MPSIZ_MASK		0x03
/** @defgroup otg_fs_device_doepctl0_mpsiz MPSIZ MPSIZ
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_doepint0 DOEPINT0 device endpoint-0 interrupt register
@{*/

/** OTG_FS_DEVICE_DOEPINT0_B2BSTUP B2BSTUP **/
#define OTG_FS_DEVICE_DOEPINT0_B2BSTUP		(1 << 6)
/** OTG_FS_DEVICE_DOEPINT0_OTEPDIS OTEPDIS **/
#define OTG_FS_DEVICE_DOEPINT0_OTEPDIS		(1 << 4)
/** OTG_FS_DEVICE_DOEPINT0_STUP STUP **/
#define OTG_FS_DEVICE_DOEPINT0_STUP		(1 << 3)
/** OTG_FS_DEVICE_DOEPINT0_EPDISD EPDISD **/
#define OTG_FS_DEVICE_DOEPINT0_EPDISD		(1 << 1)
/** OTG_FS_DEVICE_DOEPINT0_XFRC XFRC **/
#define OTG_FS_DEVICE_DOEPINT0_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_device_doeptsiz0 DOEPTSIZ0 device OUT endpoint-0 transfer size register
@{*/


#define OTG_FS_DEVICE_DOEPTSIZ0_STUPCNT_SHIFT		29
#define OTG_FS_DEVICE_DOEPTSIZ0_STUPCNT_MASK		0x03
/** @defgroup otg_fs_device_doeptsiz0_stupcnt STUPCNT SETUP packet count
@{*/
/**@}*/

/** OTG_FS_DEVICE_DOEPTSIZ0_PKTCNT Packet count **/
#define OTG_FS_DEVICE_DOEPTSIZ0_PKTCNT		(1 << 19)

#define OTG_FS_DEVICE_DOEPTSIZ0_XFRSIZ_SHIFT		0
#define OTG_FS_DEVICE_DOEPTSIZ0_XFRSIZ_MASK		0x7f
/** @defgroup otg_fs_device_doeptsiz0_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_doepctl1 DOEPCTL1 device endpoint-1 control register
@{*/

/** OTG_FS_DEVICE_DOEPCTL1_EPENA EPENA **/
#define OTG_FS_DEVICE_DOEPCTL1_EPENA		(1 << 31)
/** OTG_FS_DEVICE_DOEPCTL1_EPDIS EPDIS **/
#define OTG_FS_DEVICE_DOEPCTL1_EPDIS		(1 << 30)
/** OTG_FS_DEVICE_DOEPCTL1_SODDFRM SODDFRM **/
#define OTG_FS_DEVICE_DOEPCTL1_SODDFRM		(1 << 29)
/** OTG_FS_DEVICE_DOEPCTL1_SD0PID_SEVNFRM SD0PID/SEVNFRM **/
#define OTG_FS_DEVICE_DOEPCTL1_SD0PID_SEVNFRM		(1 << 28)
/** OTG_FS_DEVICE_DOEPCTL1_SNAK SNAK **/
#define OTG_FS_DEVICE_DOEPCTL1_SNAK		(1 << 27)
/** OTG_FS_DEVICE_DOEPCTL1_CNAK CNAK **/
#define OTG_FS_DEVICE_DOEPCTL1_CNAK		(1 << 26)
/** OTG_FS_DEVICE_DOEPCTL1_Stall Stall **/
#define OTG_FS_DEVICE_DOEPCTL1_Stall		(1 << 21)
/** OTG_FS_DEVICE_DOEPCTL1_SNPM SNPM **/
#define OTG_FS_DEVICE_DOEPCTL1_SNPM		(1 << 20)

#define OTG_FS_DEVICE_DOEPCTL1_EPTYP_SHIFT		18
#define OTG_FS_DEVICE_DOEPCTL1_EPTYP_MASK		0x03
/** @defgroup otg_fs_device_doepctl1_eptyp EPTYP EPTYP
@{*/
/**@}*/

/** OTG_FS_DEVICE_DOEPCTL1_NAKSTS NAKSTS **/
#define OTG_FS_DEVICE_DOEPCTL1_NAKSTS		(1 << 17)
/** OTG_FS_DEVICE_DOEPCTL1_EONUM_DPID EONUM/DPID **/
#define OTG_FS_DEVICE_DOEPCTL1_EONUM_DPID		(1 << 16)
/** OTG_FS_DEVICE_DOEPCTL1_USBAEP USBAEP **/
#define OTG_FS_DEVICE_DOEPCTL1_USBAEP		(1 << 15)

#define OTG_FS_DEVICE_DOEPCTL1_MPSIZ_SHIFT		0
#define OTG_FS_DEVICE_DOEPCTL1_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_device_doepctl1_mpsiz MPSIZ MPSIZ
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_doepint1 DOEPINT1 device endpoint-1 interrupt register
@{*/

/** OTG_FS_DEVICE_DOEPINT1_B2BSTUP B2BSTUP **/
#define OTG_FS_DEVICE_DOEPINT1_B2BSTUP		(1 << 6)
/** OTG_FS_DEVICE_DOEPINT1_OTEPDIS OTEPDIS **/
#define OTG_FS_DEVICE_DOEPINT1_OTEPDIS		(1 << 4)
/** OTG_FS_DEVICE_DOEPINT1_STUP STUP **/
#define OTG_FS_DEVICE_DOEPINT1_STUP		(1 << 3)
/** OTG_FS_DEVICE_DOEPINT1_EPDISD EPDISD **/
#define OTG_FS_DEVICE_DOEPINT1_EPDISD		(1 << 1)
/** OTG_FS_DEVICE_DOEPINT1_XFRC XFRC **/
#define OTG_FS_DEVICE_DOEPINT1_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_device_doeptsiz1 DOEPTSIZ1 device OUT endpoint-1 transfer size register
@{*/


#define OTG_FS_DEVICE_DOEPTSIZ1_RXDPID_STUPCNT_SHIFT		29
#define OTG_FS_DEVICE_DOEPTSIZ1_RXDPID_STUPCNT_MASK		0x03
/** @defgroup otg_fs_device_doeptsiz1_rxdpid_stupcnt RXDPIDSTUPCNT Received data PID/SETUP packet count
@{*/
/**@}*/


#define OTG_FS_DEVICE_DOEPTSIZ1_PKTCNT_SHIFT		19
#define OTG_FS_DEVICE_DOEPTSIZ1_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_device_doeptsiz1_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_DEVICE_DOEPTSIZ1_XFRSIZ_SHIFT		0
#define OTG_FS_DEVICE_DOEPTSIZ1_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_device_doeptsiz1_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_doepctl2 DOEPCTL2 device endpoint-2 control register
@{*/

/** OTG_FS_DEVICE_DOEPCTL2_EPENA EPENA **/
#define OTG_FS_DEVICE_DOEPCTL2_EPENA		(1 << 31)
/** OTG_FS_DEVICE_DOEPCTL2_EPDIS EPDIS **/
#define OTG_FS_DEVICE_DOEPCTL2_EPDIS		(1 << 30)
/** OTG_FS_DEVICE_DOEPCTL2_SODDFRM SODDFRM **/
#define OTG_FS_DEVICE_DOEPCTL2_SODDFRM		(1 << 29)
/** OTG_FS_DEVICE_DOEPCTL2_SD0PID_SEVNFRM SD0PID/SEVNFRM **/
#define OTG_FS_DEVICE_DOEPCTL2_SD0PID_SEVNFRM		(1 << 28)
/** OTG_FS_DEVICE_DOEPCTL2_SNAK SNAK **/
#define OTG_FS_DEVICE_DOEPCTL2_SNAK		(1 << 27)
/** OTG_FS_DEVICE_DOEPCTL2_CNAK CNAK **/
#define OTG_FS_DEVICE_DOEPCTL2_CNAK		(1 << 26)
/** OTG_FS_DEVICE_DOEPCTL2_Stall Stall **/
#define OTG_FS_DEVICE_DOEPCTL2_Stall		(1 << 21)
/** OTG_FS_DEVICE_DOEPCTL2_SNPM SNPM **/
#define OTG_FS_DEVICE_DOEPCTL2_SNPM		(1 << 20)

#define OTG_FS_DEVICE_DOEPCTL2_EPTYP_SHIFT		18
#define OTG_FS_DEVICE_DOEPCTL2_EPTYP_MASK		0x03
/** @defgroup otg_fs_device_doepctl2_eptyp EPTYP EPTYP
@{*/
/**@}*/

/** OTG_FS_DEVICE_DOEPCTL2_NAKSTS NAKSTS **/
#define OTG_FS_DEVICE_DOEPCTL2_NAKSTS		(1 << 17)
/** OTG_FS_DEVICE_DOEPCTL2_EONUM_DPID EONUM/DPID **/
#define OTG_FS_DEVICE_DOEPCTL2_EONUM_DPID		(1 << 16)
/** OTG_FS_DEVICE_DOEPCTL2_USBAEP USBAEP **/
#define OTG_FS_DEVICE_DOEPCTL2_USBAEP		(1 << 15)

#define OTG_FS_DEVICE_DOEPCTL2_MPSIZ_SHIFT		0
#define OTG_FS_DEVICE_DOEPCTL2_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_device_doepctl2_mpsiz MPSIZ MPSIZ
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_doepint2 DOEPINT2 device endpoint-2 interrupt register
@{*/

/** OTG_FS_DEVICE_DOEPINT2_B2BSTUP B2BSTUP **/
#define OTG_FS_DEVICE_DOEPINT2_B2BSTUP		(1 << 6)
/** OTG_FS_DEVICE_DOEPINT2_OTEPDIS OTEPDIS **/
#define OTG_FS_DEVICE_DOEPINT2_OTEPDIS		(1 << 4)
/** OTG_FS_DEVICE_DOEPINT2_STUP STUP **/
#define OTG_FS_DEVICE_DOEPINT2_STUP		(1 << 3)
/** OTG_FS_DEVICE_DOEPINT2_EPDISD EPDISD **/
#define OTG_FS_DEVICE_DOEPINT2_EPDISD		(1 << 1)
/** OTG_FS_DEVICE_DOEPINT2_XFRC XFRC **/
#define OTG_FS_DEVICE_DOEPINT2_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_device_doeptsiz2 DOEPTSIZ2 device OUT endpoint-2 transfer size register
@{*/


#define OTG_FS_DEVICE_DOEPTSIZ2_RXDPID_STUPCNT_SHIFT		29
#define OTG_FS_DEVICE_DOEPTSIZ2_RXDPID_STUPCNT_MASK		0x03
/** @defgroup otg_fs_device_doeptsiz2_rxdpid_stupcnt RXDPIDSTUPCNT Received data PID/SETUP packet count
@{*/
/**@}*/


#define OTG_FS_DEVICE_DOEPTSIZ2_PKTCNT_SHIFT		19
#define OTG_FS_DEVICE_DOEPTSIZ2_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_device_doeptsiz2_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_DEVICE_DOEPTSIZ2_XFRSIZ_SHIFT		0
#define OTG_FS_DEVICE_DOEPTSIZ2_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_device_doeptsiz2_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_doepctl3 DOEPCTL3 device endpoint-3 control register
@{*/

/** OTG_FS_DEVICE_DOEPCTL3_EPENA EPENA **/
#define OTG_FS_DEVICE_DOEPCTL3_EPENA		(1 << 31)
/** OTG_FS_DEVICE_DOEPCTL3_EPDIS EPDIS **/
#define OTG_FS_DEVICE_DOEPCTL3_EPDIS		(1 << 30)
/** OTG_FS_DEVICE_DOEPCTL3_SODDFRM SODDFRM **/
#define OTG_FS_DEVICE_DOEPCTL3_SODDFRM		(1 << 29)
/** OTG_FS_DEVICE_DOEPCTL3_SD0PID_SEVNFRM SD0PID/SEVNFRM **/
#define OTG_FS_DEVICE_DOEPCTL3_SD0PID_SEVNFRM		(1 << 28)
/** OTG_FS_DEVICE_DOEPCTL3_SNAK SNAK **/
#define OTG_FS_DEVICE_DOEPCTL3_SNAK		(1 << 27)
/** OTG_FS_DEVICE_DOEPCTL3_CNAK CNAK **/
#define OTG_FS_DEVICE_DOEPCTL3_CNAK		(1 << 26)
/** OTG_FS_DEVICE_DOEPCTL3_Stall Stall **/
#define OTG_FS_DEVICE_DOEPCTL3_Stall		(1 << 21)
/** OTG_FS_DEVICE_DOEPCTL3_SNPM SNPM **/
#define OTG_FS_DEVICE_DOEPCTL3_SNPM		(1 << 20)

#define OTG_FS_DEVICE_DOEPCTL3_EPTYP_SHIFT		18
#define OTG_FS_DEVICE_DOEPCTL3_EPTYP_MASK		0x03
/** @defgroup otg_fs_device_doepctl3_eptyp EPTYP EPTYP
@{*/
/**@}*/

/** OTG_FS_DEVICE_DOEPCTL3_NAKSTS NAKSTS **/
#define OTG_FS_DEVICE_DOEPCTL3_NAKSTS		(1 << 17)
/** OTG_FS_DEVICE_DOEPCTL3_EONUM_DPID EONUM/DPID **/
#define OTG_FS_DEVICE_DOEPCTL3_EONUM_DPID		(1 << 16)
/** OTG_FS_DEVICE_DOEPCTL3_USBAEP USBAEP **/
#define OTG_FS_DEVICE_DOEPCTL3_USBAEP		(1 << 15)

#define OTG_FS_DEVICE_DOEPCTL3_MPSIZ_SHIFT		0
#define OTG_FS_DEVICE_DOEPCTL3_MPSIZ_MASK		0x7ff
/** @defgroup otg_fs_device_doepctl3_mpsiz MPSIZ MPSIZ
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_device_doepint3 DOEPINT3 device endpoint-3 interrupt register
@{*/

/** OTG_FS_DEVICE_DOEPINT3_B2BSTUP B2BSTUP **/
#define OTG_FS_DEVICE_DOEPINT3_B2BSTUP		(1 << 6)
/** OTG_FS_DEVICE_DOEPINT3_OTEPDIS OTEPDIS **/
#define OTG_FS_DEVICE_DOEPINT3_OTEPDIS		(1 << 4)
/** OTG_FS_DEVICE_DOEPINT3_STUP STUP **/
#define OTG_FS_DEVICE_DOEPINT3_STUP		(1 << 3)
/** OTG_FS_DEVICE_DOEPINT3_EPDISD EPDISD **/
#define OTG_FS_DEVICE_DOEPINT3_EPDISD		(1 << 1)
/** OTG_FS_DEVICE_DOEPINT3_XFRC XFRC **/
#define OTG_FS_DEVICE_DOEPINT3_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_fs_device_doeptsiz3 DOEPTSIZ3 device OUT endpoint-3 transfer size register
@{*/


#define OTG_FS_DEVICE_DOEPTSIZ3_RXDPID_STUPCNT_SHIFT		29
#define OTG_FS_DEVICE_DOEPTSIZ3_RXDPID_STUPCNT_MASK		0x03
/** @defgroup otg_fs_device_doeptsiz3_rxdpid_stupcnt RXDPIDSTUPCNT Received data PID/SETUP packet count
@{*/
/**@}*/


#define OTG_FS_DEVICE_DOEPTSIZ3_PKTCNT_SHIFT		19
#define OTG_FS_DEVICE_DOEPTSIZ3_PKTCNT_MASK		0x3ff
/** @defgroup otg_fs_device_doeptsiz3_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_FS_DEVICE_DOEPTSIZ3_XFRSIZ_SHIFT		0
#define OTG_FS_DEVICE_DOEPTSIZ3_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_fs_device_doeptsiz3_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/
#pragma once 

/* --- USB_OTG_HOST: USB on the go full speed ----------------------- */

/** @defgroup usb_otg_host_registers USB on the go full speed Register
@{*/

/** USB_OTG_HOST_FS_HCFG OTG_FS host configuration register (OTG_FS_HCFG) **/
#define USB_OTG_HOST_FS_HCFG			MMIO32(USB_OTG_HOST_BASE + 0x00)
/** USB_OTG_HOST_HFIR OTG_FS Host frame interval register **/
#define USB_OTG_HOST_HFIR			MMIO32(USB_OTG_HOST_BASE + 0x04)
/** USB_OTG_HOST_FS_HFNUM OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM) **/
#define USB_OTG_HOST_FS_HFNUM			MMIO32(USB_OTG_HOST_BASE + 0x08)
/** USB_OTG_HOST_FS_HPTXSTS OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS) **/
#define USB_OTG_HOST_FS_HPTXSTS			MMIO32(USB_OTG_HOST_BASE + 0x10)
/** USB_OTG_HOST_HAINT OTG_FS Host all channels interrupt register **/
#define USB_OTG_HOST_HAINT			MMIO32(USB_OTG_HOST_BASE + 0x14)
/** USB_OTG_HOST_HAINTMSK OTG_FS host all channels interrupt mask register **/
#define USB_OTG_HOST_HAINTMSK			MMIO32(USB_OTG_HOST_BASE + 0x18)
/** USB_OTG_HOST_FS_HPRT OTG_FS host port control and status register (OTG_FS_HPRT) **/
#define USB_OTG_HOST_FS_HPRT			MMIO32(USB_OTG_HOST_BASE + 0x40)
/** USB_OTG_HOST_FS_HCCHAR0 OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0) **/
#define USB_OTG_HOST_FS_HCCHAR0			MMIO32(USB_OTG_HOST_BASE + 0x100)
/** USB_OTG_HOST_FS_HCINT0 OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0) **/
#define USB_OTG_HOST_FS_HCINT0			MMIO32(USB_OTG_HOST_BASE + 0x108)
/** USB_OTG_HOST_FS_HCINTMSK0 OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0) **/
#define USB_OTG_HOST_FS_HCINTMSK0			MMIO32(USB_OTG_HOST_BASE + 0x10c)
/** USB_OTG_HOST_FS_HCTSIZ0 OTG_FS host channel-0 transfer size register **/
#define USB_OTG_HOST_FS_HCTSIZ0			MMIO32(USB_OTG_HOST_BASE + 0x110)
/** USB_OTG_HOST_FS_HCCHAR1 OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1) **/
#define USB_OTG_HOST_FS_HCCHAR1			MMIO32(USB_OTG_HOST_BASE + 0x120)
/** USB_OTG_HOST_FS_HCINT1 OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1) **/
#define USB_OTG_HOST_FS_HCINT1			MMIO32(USB_OTG_HOST_BASE + 0x128)
/** USB_OTG_HOST_FS_HCINTMSK1 OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1) **/
#define USB_OTG_HOST_FS_HCINTMSK1			MMIO32(USB_OTG_HOST_BASE + 0x12c)
/** USB_OTG_HOST_FS_HCTSIZ1 OTG_FS host channel-1 transfer size register **/
#define USB_OTG_HOST_FS_HCTSIZ1			MMIO32(USB_OTG_HOST_BASE + 0x130)
/** USB_OTG_HOST_FS_HCCHAR2 OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2) **/
#define USB_OTG_HOST_FS_HCCHAR2			MMIO32(USB_OTG_HOST_BASE + 0x140)
/** USB_OTG_HOST_FS_HCINT2 OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2) **/
#define USB_OTG_HOST_FS_HCINT2			MMIO32(USB_OTG_HOST_BASE + 0x148)
/** USB_OTG_HOST_FS_HCINTMSK2 OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2) **/
#define USB_OTG_HOST_FS_HCINTMSK2			MMIO32(USB_OTG_HOST_BASE + 0x14c)
/** USB_OTG_HOST_FS_HCTSIZ2 OTG_FS host channel-2 transfer size register **/
#define USB_OTG_HOST_FS_HCTSIZ2			MMIO32(USB_OTG_HOST_BASE + 0x150)
/** USB_OTG_HOST_FS_HCCHAR3 OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3) **/
#define USB_OTG_HOST_FS_HCCHAR3			MMIO32(USB_OTG_HOST_BASE + 0x160)
/** USB_OTG_HOST_FS_HCINT3 OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3) **/
#define USB_OTG_HOST_FS_HCINT3			MMIO32(USB_OTG_HOST_BASE + 0x168)
/** USB_OTG_HOST_FS_HCINTMSK3 OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3) **/
#define USB_OTG_HOST_FS_HCINTMSK3			MMIO32(USB_OTG_HOST_BASE + 0x16c)
/** USB_OTG_HOST_FS_HCTSIZ3 OTG_FS host channel-3 transfer size register **/
#define USB_OTG_HOST_FS_HCTSIZ3			MMIO32(USB_OTG_HOST_BASE + 0x170)
/** USB_OTG_HOST_FS_HCCHAR4 OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4) **/
#define USB_OTG_HOST_FS_HCCHAR4			MMIO32(USB_OTG_HOST_BASE + 0x180)
/** USB_OTG_HOST_FS_HCINT4 OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4) **/
#define USB_OTG_HOST_FS_HCINT4			MMIO32(USB_OTG_HOST_BASE + 0x188)
/** USB_OTG_HOST_FS_HCINTMSK4 OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4) **/
#define USB_OTG_HOST_FS_HCINTMSK4			MMIO32(USB_OTG_HOST_BASE + 0x18c)
/** USB_OTG_HOST_FS_HCTSIZ4 OTG_FS host channel-x transfer size register **/
#define USB_OTG_HOST_FS_HCTSIZ4			MMIO32(USB_OTG_HOST_BASE + 0x190)
/** USB_OTG_HOST_FS_HCCHAR5 OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5) **/
#define USB_OTG_HOST_FS_HCCHAR5			MMIO32(USB_OTG_HOST_BASE + 0x1a0)
/** USB_OTG_HOST_FS_HCINT5 OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5) **/
#define USB_OTG_HOST_FS_HCINT5			MMIO32(USB_OTG_HOST_BASE + 0x1a8)
/** USB_OTG_HOST_FS_HCINTMSK5 OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5) **/
#define USB_OTG_HOST_FS_HCINTMSK5			MMIO32(USB_OTG_HOST_BASE + 0x1ac)
/** USB_OTG_HOST_FS_HCTSIZ5 OTG_FS host channel-5 transfer size register **/
#define USB_OTG_HOST_FS_HCTSIZ5			MMIO32(USB_OTG_HOST_BASE + 0x1b0)
/** USB_OTG_HOST_FS_HCCHAR6 OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6) **/
#define USB_OTG_HOST_FS_HCCHAR6			MMIO32(USB_OTG_HOST_BASE + 0x1c0)
/** USB_OTG_HOST_FS_HCINT6 OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6) **/
#define USB_OTG_HOST_FS_HCINT6			MMIO32(USB_OTG_HOST_BASE + 0x1c8)
/** USB_OTG_HOST_FS_HCINTMSK6 OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6) **/
#define USB_OTG_HOST_FS_HCINTMSK6			MMIO32(USB_OTG_HOST_BASE + 0x1cc)
/** USB_OTG_HOST_FS_HCTSIZ6 OTG_FS host channel-6 transfer size register **/
#define USB_OTG_HOST_FS_HCTSIZ6			MMIO32(USB_OTG_HOST_BASE + 0x1d0)
/** USB_OTG_HOST_FS_HCCHAR7 OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7) **/
#define USB_OTG_HOST_FS_HCCHAR7			MMIO32(USB_OTG_HOST_BASE + 0x1e0)
/** USB_OTG_HOST_FS_HCINT7 OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7) **/
#define USB_OTG_HOST_FS_HCINT7			MMIO32(USB_OTG_HOST_BASE + 0x1e8)
/** USB_OTG_HOST_FS_HCINTMSK7 OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7) **/
#define USB_OTG_HOST_FS_HCINTMSK7			MMIO32(USB_OTG_HOST_BASE + 0x1ec)
/** USB_OTG_HOST_FS_HCTSIZ7 OTG_FS host channel-7 transfer size register **/
#define USB_OTG_HOST_FS_HCTSIZ7			MMIO32(USB_OTG_HOST_BASE + 0x1f0)

/**@}*/


/** @defgroup usb_otg_host_fs_hcfg FSHCFG OTG_FS host configuration register (OTG_FS_HCFG)
@{*/

/** USB_OTG_HOST_FS_HCFG_FSLSS FS- and LS-only support **/
#define USB_OTG_HOST_FS_HCFG_FSLSS		(1 << 2)

#define USB_OTG_HOST_FS_HCFG_FSLSPCS_SHIFT		0
#define USB_OTG_HOST_FS_HCFG_FSLSPCS_MASK		0x03
/** @defgroup usb_otg_host_fs_hcfg_fslspcs FSLSPCS FS/LS PHY clock select
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_hfir HFIR OTG_FS Host frame interval register
@{*/


#define USB_OTG_HOST_HFIR_FRIVL_SHIFT		0
#define USB_OTG_HOST_HFIR_FRIVL_MASK		0xffff
/** @defgroup usb_otg_host_hfir_frivl FRIVL Frame interval
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hfnum FSHFNUM OTG_FS host frame number/frame time remaining register (OTG_FS_HFNUM)
@{*/


#define USB_OTG_HOST_FS_HFNUM_FTREM_SHIFT		16
#define USB_OTG_HOST_FS_HFNUM_FTREM_MASK		0xffff
/** @defgroup usb_otg_host_fs_hfnum_ftrem FTREM Frame time remaining
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HFNUM_FRNUM_SHIFT		0
#define USB_OTG_HOST_FS_HFNUM_FRNUM_MASK		0xffff
/** @defgroup usb_otg_host_fs_hfnum_frnum FRNUM Frame number
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hptxsts FSHPTXSTS OTG_FS_Host periodic transmit FIFO/queue status register (OTG_FS_HPTXSTS)
@{*/


#define USB_OTG_HOST_FS_HPTXSTS_PTXQTOP_SHIFT		24
#define USB_OTG_HOST_FS_HPTXSTS_PTXQTOP_MASK		0xff
/** @defgroup usb_otg_host_fs_hptxsts_ptxqtop PTXQTOP Top of the periodic transmit request queue
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HPTXSTS_PTXQSAV_SHIFT		16
#define USB_OTG_HOST_FS_HPTXSTS_PTXQSAV_MASK		0xff
/** @defgroup usb_otg_host_fs_hptxsts_ptxqsav PTXQSAV Periodic transmit request queue space available
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HPTXSTS_PTXFSAVL_SHIFT		0
#define USB_OTG_HOST_FS_HPTXSTS_PTXFSAVL_MASK		0xffff
/** @defgroup usb_otg_host_fs_hptxsts_ptxfsavl PTXFSAVL Periodic transmit data FIFO space available
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_haint HAINT OTG_FS Host all channels interrupt register
@{*/


#define USB_OTG_HOST_HAINT_HAINT_SHIFT		0
#define USB_OTG_HOST_HAINT_HAINT_MASK		0xffff
/** @defgroup usb_otg_host_haint_haint HAINT Channel interrupts
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_haintmsk HAINTMSK OTG_FS host all channels interrupt mask register
@{*/


#define USB_OTG_HOST_HAINTMSK_HAINTM_SHIFT		0
#define USB_OTG_HOST_HAINTMSK_HAINTM_MASK		0xffff
/** @defgroup usb_otg_host_haintmsk_haintm HAINTM Channel interrupt mask
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hprt FSHPRT OTG_FS host port control and status register (OTG_FS_HPRT)
@{*/


#define USB_OTG_HOST_FS_HPRT_PSPD_SHIFT		17
#define USB_OTG_HOST_FS_HPRT_PSPD_MASK		0x03
/** @defgroup usb_otg_host_fs_hprt_pspd PSPD Port speed
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HPRT_PTCTL_SHIFT		13
#define USB_OTG_HOST_FS_HPRT_PTCTL_MASK		0x0f
/** @defgroup usb_otg_host_fs_hprt_ptctl PTCTL Port test control
@{*/
/**@}*/

/** USB_OTG_HOST_FS_HPRT_PPWR Port power **/
#define USB_OTG_HOST_FS_HPRT_PPWR		(1 << 12)

#define USB_OTG_HOST_FS_HPRT_PLSTS_SHIFT		10
#define USB_OTG_HOST_FS_HPRT_PLSTS_MASK		0x03
/** @defgroup usb_otg_host_fs_hprt_plsts PLSTS Port line status
@{*/
/**@}*/

/** USB_OTG_HOST_FS_HPRT_PRST Port reset **/
#define USB_OTG_HOST_FS_HPRT_PRST		(1 << 8)
/** USB_OTG_HOST_FS_HPRT_PSUSP Port suspend **/
#define USB_OTG_HOST_FS_HPRT_PSUSP		(1 << 7)
/** USB_OTG_HOST_FS_HPRT_PRES Port resume **/
#define USB_OTG_HOST_FS_HPRT_PRES		(1 << 6)
/** USB_OTG_HOST_FS_HPRT_POCCHNG Port overcurrent change **/
#define USB_OTG_HOST_FS_HPRT_POCCHNG		(1 << 5)
/** USB_OTG_HOST_FS_HPRT_POCA Port overcurrent active **/
#define USB_OTG_HOST_FS_HPRT_POCA		(1 << 4)
/** USB_OTG_HOST_FS_HPRT_PENCHNG Port enable/disable change **/
#define USB_OTG_HOST_FS_HPRT_PENCHNG		(1 << 3)
/** USB_OTG_HOST_FS_HPRT_PENA Port enable **/
#define USB_OTG_HOST_FS_HPRT_PENA		(1 << 2)
/** USB_OTG_HOST_FS_HPRT_PCDET Port connect detected **/
#define USB_OTG_HOST_FS_HPRT_PCDET		(1 << 1)
/** USB_OTG_HOST_FS_HPRT_PCSTS Port connect status **/
#define USB_OTG_HOST_FS_HPRT_PCSTS		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hcchar0 FSHCCHAR0 OTG_FS host channel-0 characteristics register (OTG_FS_HCCHAR0)
@{*/

/** USB_OTG_HOST_FS_HCCHAR0_CHENA Channel enable **/
#define USB_OTG_HOST_FS_HCCHAR0_CHENA		(1 << 31)
/** USB_OTG_HOST_FS_HCCHAR0_CHDIS Channel disable **/
#define USB_OTG_HOST_FS_HCCHAR0_CHDIS		(1 << 30)
/** USB_OTG_HOST_FS_HCCHAR0_ODDFRM Odd frame **/
#define USB_OTG_HOST_FS_HCCHAR0_ODDFRM		(1 << 29)

#define USB_OTG_HOST_FS_HCCHAR0_DAD_SHIFT		22
#define USB_OTG_HOST_FS_HCCHAR0_DAD_MASK		0x7f
/** @defgroup usb_otg_host_fs_hcchar0_dad DAD Device address
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR0_MCNT_SHIFT		20
#define USB_OTG_HOST_FS_HCCHAR0_MCNT_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar0_mcnt MCNT Multicount
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR0_EPTYP_SHIFT		18
#define USB_OTG_HOST_FS_HCCHAR0_EPTYP_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar0_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** USB_OTG_HOST_FS_HCCHAR0_LSDEV Low-speed device **/
#define USB_OTG_HOST_FS_HCCHAR0_LSDEV		(1 << 17)
/** USB_OTG_HOST_FS_HCCHAR0_EPDIR Endpoint direction **/
#define USB_OTG_HOST_FS_HCCHAR0_EPDIR		(1 << 15)

#define USB_OTG_HOST_FS_HCCHAR0_EPNUM_SHIFT		11
#define USB_OTG_HOST_FS_HCCHAR0_EPNUM_MASK		0x0f
/** @defgroup usb_otg_host_fs_hcchar0_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR0_MPSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCCHAR0_MPSIZ_MASK		0x7ff
/** @defgroup usb_otg_host_fs_hcchar0_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcint0 FSHCINT0 OTG_FS host channel-0 interrupt register (OTG_FS_HCINT0)
@{*/

/** USB_OTG_HOST_FS_HCINT0_DTERR Data toggle error **/
#define USB_OTG_HOST_FS_HCINT0_DTERR		(1 << 10)
/** USB_OTG_HOST_FS_HCINT0_FRMOR Frame overrun **/
#define USB_OTG_HOST_FS_HCINT0_FRMOR		(1 << 9)
/** USB_OTG_HOST_FS_HCINT0_BBERR Babble error **/
#define USB_OTG_HOST_FS_HCINT0_BBERR		(1 << 8)
/** USB_OTG_HOST_FS_HCINT0_TXERR Transaction error **/
#define USB_OTG_HOST_FS_HCINT0_TXERR		(1 << 7)
/** USB_OTG_HOST_FS_HCINT0_ACK ACK response received/transmitted interrupt **/
#define USB_OTG_HOST_FS_HCINT0_ACK		(1 << 5)
/** USB_OTG_HOST_FS_HCINT0_NAK NAK response received interrupt **/
#define USB_OTG_HOST_FS_HCINT0_NAK		(1 << 4)
/** USB_OTG_HOST_FS_HCINT0_STALL STALL response received interrupt **/
#define USB_OTG_HOST_FS_HCINT0_STALL		(1 << 3)
/** USB_OTG_HOST_FS_HCINT0_CHH Channel halted **/
#define USB_OTG_HOST_FS_HCINT0_CHH		(1 << 1)
/** USB_OTG_HOST_FS_HCINT0_XFRC Transfer completed **/
#define USB_OTG_HOST_FS_HCINT0_XFRC		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hcintmsk0 FSHCINTMSK0 OTG_FS host channel-0 mask register (OTG_FS_HCINTMSK0)
@{*/

/** USB_OTG_HOST_FS_HCINTMSK0_DTERRM Data toggle error mask **/
#define USB_OTG_HOST_FS_HCINTMSK0_DTERRM		(1 << 10)
/** USB_OTG_HOST_FS_HCINTMSK0_FRMORM Frame overrun mask **/
#define USB_OTG_HOST_FS_HCINTMSK0_FRMORM		(1 << 9)
/** USB_OTG_HOST_FS_HCINTMSK0_BBERRM Babble error mask **/
#define USB_OTG_HOST_FS_HCINTMSK0_BBERRM		(1 << 8)
/** USB_OTG_HOST_FS_HCINTMSK0_TXERRM Transaction error mask **/
#define USB_OTG_HOST_FS_HCINTMSK0_TXERRM		(1 << 7)
/** USB_OTG_HOST_FS_HCINTMSK0_NYET response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK0_NYET		(1 << 6)
/** USB_OTG_HOST_FS_HCINTMSK0_ACKM ACK response received/transmitted interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK0_ACKM		(1 << 5)
/** USB_OTG_HOST_FS_HCINTMSK0_NAKM NAK response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK0_NAKM		(1 << 4)
/** USB_OTG_HOST_FS_HCINTMSK0_STALLM STALL response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK0_STALLM		(1 << 3)
/** USB_OTG_HOST_FS_HCINTMSK0_CHHM Channel halted mask **/
#define USB_OTG_HOST_FS_HCINTMSK0_CHHM		(1 << 1)
/** USB_OTG_HOST_FS_HCINTMSK0_XFRCM Transfer completed mask **/
#define USB_OTG_HOST_FS_HCINTMSK0_XFRCM		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hctsiz0 FSHCTSIZ0 OTG_FS host channel-0 transfer size register
@{*/


#define USB_OTG_HOST_FS_HCTSIZ0_DPID_SHIFT		29
#define USB_OTG_HOST_FS_HCTSIZ0_DPID_MASK		0x03
/** @defgroup usb_otg_host_fs_hctsiz0_dpid DPID Data PID
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ0_PKTCNT_SHIFT		19
#define USB_OTG_HOST_FS_HCTSIZ0_PKTCNT_MASK		0x3ff
/** @defgroup usb_otg_host_fs_hctsiz0_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ0_XFRSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCTSIZ0_XFRSIZ_MASK		0x7ffff
/** @defgroup usb_otg_host_fs_hctsiz0_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcchar1 FSHCCHAR1 OTG_FS host channel-1 characteristics register (OTG_FS_HCCHAR1)
@{*/

/** USB_OTG_HOST_FS_HCCHAR1_CHENA Channel enable **/
#define USB_OTG_HOST_FS_HCCHAR1_CHENA		(1 << 31)
/** USB_OTG_HOST_FS_HCCHAR1_CHDIS Channel disable **/
#define USB_OTG_HOST_FS_HCCHAR1_CHDIS		(1 << 30)
/** USB_OTG_HOST_FS_HCCHAR1_ODDFRM Odd frame **/
#define USB_OTG_HOST_FS_HCCHAR1_ODDFRM		(1 << 29)

#define USB_OTG_HOST_FS_HCCHAR1_DAD_SHIFT		22
#define USB_OTG_HOST_FS_HCCHAR1_DAD_MASK		0x7f
/** @defgroup usb_otg_host_fs_hcchar1_dad DAD Device address
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR1_MCNT_SHIFT		20
#define USB_OTG_HOST_FS_HCCHAR1_MCNT_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar1_mcnt MCNT Multicount
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR1_EPTYP_SHIFT		18
#define USB_OTG_HOST_FS_HCCHAR1_EPTYP_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar1_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** USB_OTG_HOST_FS_HCCHAR1_LSDEV Low-speed device **/
#define USB_OTG_HOST_FS_HCCHAR1_LSDEV		(1 << 17)
/** USB_OTG_HOST_FS_HCCHAR1_EPDIR Endpoint direction **/
#define USB_OTG_HOST_FS_HCCHAR1_EPDIR		(1 << 15)

#define USB_OTG_HOST_FS_HCCHAR1_EPNUM_SHIFT		11
#define USB_OTG_HOST_FS_HCCHAR1_EPNUM_MASK		0x0f
/** @defgroup usb_otg_host_fs_hcchar1_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR1_MPSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCCHAR1_MPSIZ_MASK		0x7ff
/** @defgroup usb_otg_host_fs_hcchar1_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcint1 FSHCINT1 OTG_FS host channel-1 interrupt register (OTG_FS_HCINT1)
@{*/

/** USB_OTG_HOST_FS_HCINT1_DTERR Data toggle error **/
#define USB_OTG_HOST_FS_HCINT1_DTERR		(1 << 10)
/** USB_OTG_HOST_FS_HCINT1_FRMOR Frame overrun **/
#define USB_OTG_HOST_FS_HCINT1_FRMOR		(1 << 9)
/** USB_OTG_HOST_FS_HCINT1_BBERR Babble error **/
#define USB_OTG_HOST_FS_HCINT1_BBERR		(1 << 8)
/** USB_OTG_HOST_FS_HCINT1_TXERR Transaction error **/
#define USB_OTG_HOST_FS_HCINT1_TXERR		(1 << 7)
/** USB_OTG_HOST_FS_HCINT1_ACK ACK response received/transmitted interrupt **/
#define USB_OTG_HOST_FS_HCINT1_ACK		(1 << 5)
/** USB_OTG_HOST_FS_HCINT1_NAK NAK response received interrupt **/
#define USB_OTG_HOST_FS_HCINT1_NAK		(1 << 4)
/** USB_OTG_HOST_FS_HCINT1_STALL STALL response received interrupt **/
#define USB_OTG_HOST_FS_HCINT1_STALL		(1 << 3)
/** USB_OTG_HOST_FS_HCINT1_CHH Channel halted **/
#define USB_OTG_HOST_FS_HCINT1_CHH		(1 << 1)
/** USB_OTG_HOST_FS_HCINT1_XFRC Transfer completed **/
#define USB_OTG_HOST_FS_HCINT1_XFRC		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hcintmsk1 FSHCINTMSK1 OTG_FS host channel-1 mask register (OTG_FS_HCINTMSK1)
@{*/

/** USB_OTG_HOST_FS_HCINTMSK1_DTERRM Data toggle error mask **/
#define USB_OTG_HOST_FS_HCINTMSK1_DTERRM		(1 << 10)
/** USB_OTG_HOST_FS_HCINTMSK1_FRMORM Frame overrun mask **/
#define USB_OTG_HOST_FS_HCINTMSK1_FRMORM		(1 << 9)
/** USB_OTG_HOST_FS_HCINTMSK1_BBERRM Babble error mask **/
#define USB_OTG_HOST_FS_HCINTMSK1_BBERRM		(1 << 8)
/** USB_OTG_HOST_FS_HCINTMSK1_TXERRM Transaction error mask **/
#define USB_OTG_HOST_FS_HCINTMSK1_TXERRM		(1 << 7)
/** USB_OTG_HOST_FS_HCINTMSK1_NYET response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK1_NYET		(1 << 6)
/** USB_OTG_HOST_FS_HCINTMSK1_ACKM ACK response received/transmitted interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK1_ACKM		(1 << 5)
/** USB_OTG_HOST_FS_HCINTMSK1_NAKM NAK response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK1_NAKM		(1 << 4)
/** USB_OTG_HOST_FS_HCINTMSK1_STALLM STALL response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK1_STALLM		(1 << 3)
/** USB_OTG_HOST_FS_HCINTMSK1_CHHM Channel halted mask **/
#define USB_OTG_HOST_FS_HCINTMSK1_CHHM		(1 << 1)
/** USB_OTG_HOST_FS_HCINTMSK1_XFRCM Transfer completed mask **/
#define USB_OTG_HOST_FS_HCINTMSK1_XFRCM		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hctsiz1 FSHCTSIZ1 OTG_FS host channel-1 transfer size register
@{*/


#define USB_OTG_HOST_FS_HCTSIZ1_DPID_SHIFT		29
#define USB_OTG_HOST_FS_HCTSIZ1_DPID_MASK		0x03
/** @defgroup usb_otg_host_fs_hctsiz1_dpid DPID Data PID
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ1_PKTCNT_SHIFT		19
#define USB_OTG_HOST_FS_HCTSIZ1_PKTCNT_MASK		0x3ff
/** @defgroup usb_otg_host_fs_hctsiz1_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ1_XFRSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCTSIZ1_XFRSIZ_MASK		0x7ffff
/** @defgroup usb_otg_host_fs_hctsiz1_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcchar2 FSHCCHAR2 OTG_FS host channel-2 characteristics register (OTG_FS_HCCHAR2)
@{*/

/** USB_OTG_HOST_FS_HCCHAR2_CHENA Channel enable **/
#define USB_OTG_HOST_FS_HCCHAR2_CHENA		(1 << 31)
/** USB_OTG_HOST_FS_HCCHAR2_CHDIS Channel disable **/
#define USB_OTG_HOST_FS_HCCHAR2_CHDIS		(1 << 30)
/** USB_OTG_HOST_FS_HCCHAR2_ODDFRM Odd frame **/
#define USB_OTG_HOST_FS_HCCHAR2_ODDFRM		(1 << 29)

#define USB_OTG_HOST_FS_HCCHAR2_DAD_SHIFT		22
#define USB_OTG_HOST_FS_HCCHAR2_DAD_MASK		0x7f
/** @defgroup usb_otg_host_fs_hcchar2_dad DAD Device address
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR2_MCNT_SHIFT		20
#define USB_OTG_HOST_FS_HCCHAR2_MCNT_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar2_mcnt MCNT Multicount
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR2_EPTYP_SHIFT		18
#define USB_OTG_HOST_FS_HCCHAR2_EPTYP_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar2_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** USB_OTG_HOST_FS_HCCHAR2_LSDEV Low-speed device **/
#define USB_OTG_HOST_FS_HCCHAR2_LSDEV		(1 << 17)
/** USB_OTG_HOST_FS_HCCHAR2_EPDIR Endpoint direction **/
#define USB_OTG_HOST_FS_HCCHAR2_EPDIR		(1 << 15)

#define USB_OTG_HOST_FS_HCCHAR2_EPNUM_SHIFT		11
#define USB_OTG_HOST_FS_HCCHAR2_EPNUM_MASK		0x0f
/** @defgroup usb_otg_host_fs_hcchar2_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR2_MPSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCCHAR2_MPSIZ_MASK		0x7ff
/** @defgroup usb_otg_host_fs_hcchar2_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcint2 FSHCINT2 OTG_FS host channel-2 interrupt register (OTG_FS_HCINT2)
@{*/

/** USB_OTG_HOST_FS_HCINT2_DTERR Data toggle error **/
#define USB_OTG_HOST_FS_HCINT2_DTERR		(1 << 10)
/** USB_OTG_HOST_FS_HCINT2_FRMOR Frame overrun **/
#define USB_OTG_HOST_FS_HCINT2_FRMOR		(1 << 9)
/** USB_OTG_HOST_FS_HCINT2_BBERR Babble error **/
#define USB_OTG_HOST_FS_HCINT2_BBERR		(1 << 8)
/** USB_OTG_HOST_FS_HCINT2_TXERR Transaction error **/
#define USB_OTG_HOST_FS_HCINT2_TXERR		(1 << 7)
/** USB_OTG_HOST_FS_HCINT2_ACK ACK response received/transmitted interrupt **/
#define USB_OTG_HOST_FS_HCINT2_ACK		(1 << 5)
/** USB_OTG_HOST_FS_HCINT2_NAK NAK response received interrupt **/
#define USB_OTG_HOST_FS_HCINT2_NAK		(1 << 4)
/** USB_OTG_HOST_FS_HCINT2_STALL STALL response received interrupt **/
#define USB_OTG_HOST_FS_HCINT2_STALL		(1 << 3)
/** USB_OTG_HOST_FS_HCINT2_CHH Channel halted **/
#define USB_OTG_HOST_FS_HCINT2_CHH		(1 << 1)
/** USB_OTG_HOST_FS_HCINT2_XFRC Transfer completed **/
#define USB_OTG_HOST_FS_HCINT2_XFRC		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hcintmsk2 FSHCINTMSK2 OTG_FS host channel-2 mask register (OTG_FS_HCINTMSK2)
@{*/

/** USB_OTG_HOST_FS_HCINTMSK2_DTERRM Data toggle error mask **/
#define USB_OTG_HOST_FS_HCINTMSK2_DTERRM		(1 << 10)
/** USB_OTG_HOST_FS_HCINTMSK2_FRMORM Frame overrun mask **/
#define USB_OTG_HOST_FS_HCINTMSK2_FRMORM		(1 << 9)
/** USB_OTG_HOST_FS_HCINTMSK2_BBERRM Babble error mask **/
#define USB_OTG_HOST_FS_HCINTMSK2_BBERRM		(1 << 8)
/** USB_OTG_HOST_FS_HCINTMSK2_TXERRM Transaction error mask **/
#define USB_OTG_HOST_FS_HCINTMSK2_TXERRM		(1 << 7)
/** USB_OTG_HOST_FS_HCINTMSK2_NYET response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK2_NYET		(1 << 6)
/** USB_OTG_HOST_FS_HCINTMSK2_ACKM ACK response received/transmitted interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK2_ACKM		(1 << 5)
/** USB_OTG_HOST_FS_HCINTMSK2_NAKM NAK response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK2_NAKM		(1 << 4)
/** USB_OTG_HOST_FS_HCINTMSK2_STALLM STALL response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK2_STALLM		(1 << 3)
/** USB_OTG_HOST_FS_HCINTMSK2_CHHM Channel halted mask **/
#define USB_OTG_HOST_FS_HCINTMSK2_CHHM		(1 << 1)
/** USB_OTG_HOST_FS_HCINTMSK2_XFRCM Transfer completed mask **/
#define USB_OTG_HOST_FS_HCINTMSK2_XFRCM		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hctsiz2 FSHCTSIZ2 OTG_FS host channel-2 transfer size register
@{*/


#define USB_OTG_HOST_FS_HCTSIZ2_DPID_SHIFT		29
#define USB_OTG_HOST_FS_HCTSIZ2_DPID_MASK		0x03
/** @defgroup usb_otg_host_fs_hctsiz2_dpid DPID Data PID
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ2_PKTCNT_SHIFT		19
#define USB_OTG_HOST_FS_HCTSIZ2_PKTCNT_MASK		0x3ff
/** @defgroup usb_otg_host_fs_hctsiz2_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ2_XFRSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCTSIZ2_XFRSIZ_MASK		0x7ffff
/** @defgroup usb_otg_host_fs_hctsiz2_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcchar3 FSHCCHAR3 OTG_FS host channel-3 characteristics register (OTG_FS_HCCHAR3)
@{*/

/** USB_OTG_HOST_FS_HCCHAR3_CHENA Channel enable **/
#define USB_OTG_HOST_FS_HCCHAR3_CHENA		(1 << 31)
/** USB_OTG_HOST_FS_HCCHAR3_CHDIS Channel disable **/
#define USB_OTG_HOST_FS_HCCHAR3_CHDIS		(1 << 30)
/** USB_OTG_HOST_FS_HCCHAR3_ODDFRM Odd frame **/
#define USB_OTG_HOST_FS_HCCHAR3_ODDFRM		(1 << 29)

#define USB_OTG_HOST_FS_HCCHAR3_DAD_SHIFT		22
#define USB_OTG_HOST_FS_HCCHAR3_DAD_MASK		0x7f
/** @defgroup usb_otg_host_fs_hcchar3_dad DAD Device address
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR3_MCNT_SHIFT		20
#define USB_OTG_HOST_FS_HCCHAR3_MCNT_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar3_mcnt MCNT Multicount
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR3_EPTYP_SHIFT		18
#define USB_OTG_HOST_FS_HCCHAR3_EPTYP_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar3_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** USB_OTG_HOST_FS_HCCHAR3_LSDEV Low-speed device **/
#define USB_OTG_HOST_FS_HCCHAR3_LSDEV		(1 << 17)
/** USB_OTG_HOST_FS_HCCHAR3_EPDIR Endpoint direction **/
#define USB_OTG_HOST_FS_HCCHAR3_EPDIR		(1 << 15)

#define USB_OTG_HOST_FS_HCCHAR3_EPNUM_SHIFT		11
#define USB_OTG_HOST_FS_HCCHAR3_EPNUM_MASK		0x0f
/** @defgroup usb_otg_host_fs_hcchar3_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR3_MPSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCCHAR3_MPSIZ_MASK		0x7ff
/** @defgroup usb_otg_host_fs_hcchar3_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcint3 FSHCINT3 OTG_FS host channel-3 interrupt register (OTG_FS_HCINT3)
@{*/

/** USB_OTG_HOST_FS_HCINT3_DTERR Data toggle error **/
#define USB_OTG_HOST_FS_HCINT3_DTERR		(1 << 10)
/** USB_OTG_HOST_FS_HCINT3_FRMOR Frame overrun **/
#define USB_OTG_HOST_FS_HCINT3_FRMOR		(1 << 9)
/** USB_OTG_HOST_FS_HCINT3_BBERR Babble error **/
#define USB_OTG_HOST_FS_HCINT3_BBERR		(1 << 8)
/** USB_OTG_HOST_FS_HCINT3_TXERR Transaction error **/
#define USB_OTG_HOST_FS_HCINT3_TXERR		(1 << 7)
/** USB_OTG_HOST_FS_HCINT3_ACK ACK response received/transmitted interrupt **/
#define USB_OTG_HOST_FS_HCINT3_ACK		(1 << 5)
/** USB_OTG_HOST_FS_HCINT3_NAK NAK response received interrupt **/
#define USB_OTG_HOST_FS_HCINT3_NAK		(1 << 4)
/** USB_OTG_HOST_FS_HCINT3_STALL STALL response received interrupt **/
#define USB_OTG_HOST_FS_HCINT3_STALL		(1 << 3)
/** USB_OTG_HOST_FS_HCINT3_CHH Channel halted **/
#define USB_OTG_HOST_FS_HCINT3_CHH		(1 << 1)
/** USB_OTG_HOST_FS_HCINT3_XFRC Transfer completed **/
#define USB_OTG_HOST_FS_HCINT3_XFRC		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hcintmsk3 FSHCINTMSK3 OTG_FS host channel-3 mask register (OTG_FS_HCINTMSK3)
@{*/

/** USB_OTG_HOST_FS_HCINTMSK3_DTERRM Data toggle error mask **/
#define USB_OTG_HOST_FS_HCINTMSK3_DTERRM		(1 << 10)
/** USB_OTG_HOST_FS_HCINTMSK3_FRMORM Frame overrun mask **/
#define USB_OTG_HOST_FS_HCINTMSK3_FRMORM		(1 << 9)
/** USB_OTG_HOST_FS_HCINTMSK3_BBERRM Babble error mask **/
#define USB_OTG_HOST_FS_HCINTMSK3_BBERRM		(1 << 8)
/** USB_OTG_HOST_FS_HCINTMSK3_TXERRM Transaction error mask **/
#define USB_OTG_HOST_FS_HCINTMSK3_TXERRM		(1 << 7)
/** USB_OTG_HOST_FS_HCINTMSK3_NYET response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK3_NYET		(1 << 6)
/** USB_OTG_HOST_FS_HCINTMSK3_ACKM ACK response received/transmitted interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK3_ACKM		(1 << 5)
/** USB_OTG_HOST_FS_HCINTMSK3_NAKM NAK response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK3_NAKM		(1 << 4)
/** USB_OTG_HOST_FS_HCINTMSK3_STALLM STALL response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK3_STALLM		(1 << 3)
/** USB_OTG_HOST_FS_HCINTMSK3_CHHM Channel halted mask **/
#define USB_OTG_HOST_FS_HCINTMSK3_CHHM		(1 << 1)
/** USB_OTG_HOST_FS_HCINTMSK3_XFRCM Transfer completed mask **/
#define USB_OTG_HOST_FS_HCINTMSK3_XFRCM		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hctsiz3 FSHCTSIZ3 OTG_FS host channel-3 transfer size register
@{*/


#define USB_OTG_HOST_FS_HCTSIZ3_DPID_SHIFT		29
#define USB_OTG_HOST_FS_HCTSIZ3_DPID_MASK		0x03
/** @defgroup usb_otg_host_fs_hctsiz3_dpid DPID Data PID
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ3_PKTCNT_SHIFT		19
#define USB_OTG_HOST_FS_HCTSIZ3_PKTCNT_MASK		0x3ff
/** @defgroup usb_otg_host_fs_hctsiz3_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ3_XFRSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCTSIZ3_XFRSIZ_MASK		0x7ffff
/** @defgroup usb_otg_host_fs_hctsiz3_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcchar4 FSHCCHAR4 OTG_FS host channel-4 characteristics register (OTG_FS_HCCHAR4)
@{*/

/** USB_OTG_HOST_FS_HCCHAR4_CHENA Channel enable **/
#define USB_OTG_HOST_FS_HCCHAR4_CHENA		(1 << 31)
/** USB_OTG_HOST_FS_HCCHAR4_CHDIS Channel disable **/
#define USB_OTG_HOST_FS_HCCHAR4_CHDIS		(1 << 30)
/** USB_OTG_HOST_FS_HCCHAR4_ODDFRM Odd frame **/
#define USB_OTG_HOST_FS_HCCHAR4_ODDFRM		(1 << 29)

#define USB_OTG_HOST_FS_HCCHAR4_DAD_SHIFT		22
#define USB_OTG_HOST_FS_HCCHAR4_DAD_MASK		0x7f
/** @defgroup usb_otg_host_fs_hcchar4_dad DAD Device address
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR4_MCNT_SHIFT		20
#define USB_OTG_HOST_FS_HCCHAR4_MCNT_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar4_mcnt MCNT Multicount
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR4_EPTYP_SHIFT		18
#define USB_OTG_HOST_FS_HCCHAR4_EPTYP_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar4_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** USB_OTG_HOST_FS_HCCHAR4_LSDEV Low-speed device **/
#define USB_OTG_HOST_FS_HCCHAR4_LSDEV		(1 << 17)
/** USB_OTG_HOST_FS_HCCHAR4_EPDIR Endpoint direction **/
#define USB_OTG_HOST_FS_HCCHAR4_EPDIR		(1 << 15)

#define USB_OTG_HOST_FS_HCCHAR4_EPNUM_SHIFT		11
#define USB_OTG_HOST_FS_HCCHAR4_EPNUM_MASK		0x0f
/** @defgroup usb_otg_host_fs_hcchar4_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR4_MPSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCCHAR4_MPSIZ_MASK		0x7ff
/** @defgroup usb_otg_host_fs_hcchar4_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcint4 FSHCINT4 OTG_FS host channel-4 interrupt register (OTG_FS_HCINT4)
@{*/

/** USB_OTG_HOST_FS_HCINT4_DTERR Data toggle error **/
#define USB_OTG_HOST_FS_HCINT4_DTERR		(1 << 10)
/** USB_OTG_HOST_FS_HCINT4_FRMOR Frame overrun **/
#define USB_OTG_HOST_FS_HCINT4_FRMOR		(1 << 9)
/** USB_OTG_HOST_FS_HCINT4_BBERR Babble error **/
#define USB_OTG_HOST_FS_HCINT4_BBERR		(1 << 8)
/** USB_OTG_HOST_FS_HCINT4_TXERR Transaction error **/
#define USB_OTG_HOST_FS_HCINT4_TXERR		(1 << 7)
/** USB_OTG_HOST_FS_HCINT4_ACK ACK response received/transmitted interrupt **/
#define USB_OTG_HOST_FS_HCINT4_ACK		(1 << 5)
/** USB_OTG_HOST_FS_HCINT4_NAK NAK response received interrupt **/
#define USB_OTG_HOST_FS_HCINT4_NAK		(1 << 4)
/** USB_OTG_HOST_FS_HCINT4_STALL STALL response received interrupt **/
#define USB_OTG_HOST_FS_HCINT4_STALL		(1 << 3)
/** USB_OTG_HOST_FS_HCINT4_CHH Channel halted **/
#define USB_OTG_HOST_FS_HCINT4_CHH		(1 << 1)
/** USB_OTG_HOST_FS_HCINT4_XFRC Transfer completed **/
#define USB_OTG_HOST_FS_HCINT4_XFRC		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hcintmsk4 FSHCINTMSK4 OTG_FS host channel-4 mask register (OTG_FS_HCINTMSK4)
@{*/

/** USB_OTG_HOST_FS_HCINTMSK4_DTERRM Data toggle error mask **/
#define USB_OTG_HOST_FS_HCINTMSK4_DTERRM		(1 << 10)
/** USB_OTG_HOST_FS_HCINTMSK4_FRMORM Frame overrun mask **/
#define USB_OTG_HOST_FS_HCINTMSK4_FRMORM		(1 << 9)
/** USB_OTG_HOST_FS_HCINTMSK4_BBERRM Babble error mask **/
#define USB_OTG_HOST_FS_HCINTMSK4_BBERRM		(1 << 8)
/** USB_OTG_HOST_FS_HCINTMSK4_TXERRM Transaction error mask **/
#define USB_OTG_HOST_FS_HCINTMSK4_TXERRM		(1 << 7)
/** USB_OTG_HOST_FS_HCINTMSK4_NYET response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK4_NYET		(1 << 6)
/** USB_OTG_HOST_FS_HCINTMSK4_ACKM ACK response received/transmitted interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK4_ACKM		(1 << 5)
/** USB_OTG_HOST_FS_HCINTMSK4_NAKM NAK response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK4_NAKM		(1 << 4)
/** USB_OTG_HOST_FS_HCINTMSK4_STALLM STALL response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK4_STALLM		(1 << 3)
/** USB_OTG_HOST_FS_HCINTMSK4_CHHM Channel halted mask **/
#define USB_OTG_HOST_FS_HCINTMSK4_CHHM		(1 << 1)
/** USB_OTG_HOST_FS_HCINTMSK4_XFRCM Transfer completed mask **/
#define USB_OTG_HOST_FS_HCINTMSK4_XFRCM		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hctsiz4 FSHCTSIZ4 OTG_FS host channel-x transfer size register
@{*/


#define USB_OTG_HOST_FS_HCTSIZ4_DPID_SHIFT		29
#define USB_OTG_HOST_FS_HCTSIZ4_DPID_MASK		0x03
/** @defgroup usb_otg_host_fs_hctsiz4_dpid DPID Data PID
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ4_PKTCNT_SHIFT		19
#define USB_OTG_HOST_FS_HCTSIZ4_PKTCNT_MASK		0x3ff
/** @defgroup usb_otg_host_fs_hctsiz4_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ4_XFRSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCTSIZ4_XFRSIZ_MASK		0x7ffff
/** @defgroup usb_otg_host_fs_hctsiz4_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcchar5 FSHCCHAR5 OTG_FS host channel-5 characteristics register (OTG_FS_HCCHAR5)
@{*/

/** USB_OTG_HOST_FS_HCCHAR5_CHENA Channel enable **/
#define USB_OTG_HOST_FS_HCCHAR5_CHENA		(1 << 31)
/** USB_OTG_HOST_FS_HCCHAR5_CHDIS Channel disable **/
#define USB_OTG_HOST_FS_HCCHAR5_CHDIS		(1 << 30)
/** USB_OTG_HOST_FS_HCCHAR5_ODDFRM Odd frame **/
#define USB_OTG_HOST_FS_HCCHAR5_ODDFRM		(1 << 29)

#define USB_OTG_HOST_FS_HCCHAR5_DAD_SHIFT		22
#define USB_OTG_HOST_FS_HCCHAR5_DAD_MASK		0x7f
/** @defgroup usb_otg_host_fs_hcchar5_dad DAD Device address
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR5_MCNT_SHIFT		20
#define USB_OTG_HOST_FS_HCCHAR5_MCNT_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar5_mcnt MCNT Multicount
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR5_EPTYP_SHIFT		18
#define USB_OTG_HOST_FS_HCCHAR5_EPTYP_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar5_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** USB_OTG_HOST_FS_HCCHAR5_LSDEV Low-speed device **/
#define USB_OTG_HOST_FS_HCCHAR5_LSDEV		(1 << 17)
/** USB_OTG_HOST_FS_HCCHAR5_EPDIR Endpoint direction **/
#define USB_OTG_HOST_FS_HCCHAR5_EPDIR		(1 << 15)

#define USB_OTG_HOST_FS_HCCHAR5_EPNUM_SHIFT		11
#define USB_OTG_HOST_FS_HCCHAR5_EPNUM_MASK		0x0f
/** @defgroup usb_otg_host_fs_hcchar5_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR5_MPSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCCHAR5_MPSIZ_MASK		0x7ff
/** @defgroup usb_otg_host_fs_hcchar5_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcint5 FSHCINT5 OTG_FS host channel-5 interrupt register (OTG_FS_HCINT5)
@{*/

/** USB_OTG_HOST_FS_HCINT5_DTERR Data toggle error **/
#define USB_OTG_HOST_FS_HCINT5_DTERR		(1 << 10)
/** USB_OTG_HOST_FS_HCINT5_FRMOR Frame overrun **/
#define USB_OTG_HOST_FS_HCINT5_FRMOR		(1 << 9)
/** USB_OTG_HOST_FS_HCINT5_BBERR Babble error **/
#define USB_OTG_HOST_FS_HCINT5_BBERR		(1 << 8)
/** USB_OTG_HOST_FS_HCINT5_TXERR Transaction error **/
#define USB_OTG_HOST_FS_HCINT5_TXERR		(1 << 7)
/** USB_OTG_HOST_FS_HCINT5_ACK ACK response received/transmitted interrupt **/
#define USB_OTG_HOST_FS_HCINT5_ACK		(1 << 5)
/** USB_OTG_HOST_FS_HCINT5_NAK NAK response received interrupt **/
#define USB_OTG_HOST_FS_HCINT5_NAK		(1 << 4)
/** USB_OTG_HOST_FS_HCINT5_STALL STALL response received interrupt **/
#define USB_OTG_HOST_FS_HCINT5_STALL		(1 << 3)
/** USB_OTG_HOST_FS_HCINT5_CHH Channel halted **/
#define USB_OTG_HOST_FS_HCINT5_CHH		(1 << 1)
/** USB_OTG_HOST_FS_HCINT5_XFRC Transfer completed **/
#define USB_OTG_HOST_FS_HCINT5_XFRC		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hcintmsk5 FSHCINTMSK5 OTG_FS host channel-5 mask register (OTG_FS_HCINTMSK5)
@{*/

/** USB_OTG_HOST_FS_HCINTMSK5_DTERRM Data toggle error mask **/
#define USB_OTG_HOST_FS_HCINTMSK5_DTERRM		(1 << 10)
/** USB_OTG_HOST_FS_HCINTMSK5_FRMORM Frame overrun mask **/
#define USB_OTG_HOST_FS_HCINTMSK5_FRMORM		(1 << 9)
/** USB_OTG_HOST_FS_HCINTMSK5_BBERRM Babble error mask **/
#define USB_OTG_HOST_FS_HCINTMSK5_BBERRM		(1 << 8)
/** USB_OTG_HOST_FS_HCINTMSK5_TXERRM Transaction error mask **/
#define USB_OTG_HOST_FS_HCINTMSK5_TXERRM		(1 << 7)
/** USB_OTG_HOST_FS_HCINTMSK5_NYET response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK5_NYET		(1 << 6)
/** USB_OTG_HOST_FS_HCINTMSK5_ACKM ACK response received/transmitted interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK5_ACKM		(1 << 5)
/** USB_OTG_HOST_FS_HCINTMSK5_NAKM NAK response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK5_NAKM		(1 << 4)
/** USB_OTG_HOST_FS_HCINTMSK5_STALLM STALL response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK5_STALLM		(1 << 3)
/** USB_OTG_HOST_FS_HCINTMSK5_CHHM Channel halted mask **/
#define USB_OTG_HOST_FS_HCINTMSK5_CHHM		(1 << 1)
/** USB_OTG_HOST_FS_HCINTMSK5_XFRCM Transfer completed mask **/
#define USB_OTG_HOST_FS_HCINTMSK5_XFRCM		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hctsiz5 FSHCTSIZ5 OTG_FS host channel-5 transfer size register
@{*/


#define USB_OTG_HOST_FS_HCTSIZ5_DPID_SHIFT		29
#define USB_OTG_HOST_FS_HCTSIZ5_DPID_MASK		0x03
/** @defgroup usb_otg_host_fs_hctsiz5_dpid DPID Data PID
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ5_PKTCNT_SHIFT		19
#define USB_OTG_HOST_FS_HCTSIZ5_PKTCNT_MASK		0x3ff
/** @defgroup usb_otg_host_fs_hctsiz5_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ5_XFRSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCTSIZ5_XFRSIZ_MASK		0x7ffff
/** @defgroup usb_otg_host_fs_hctsiz5_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcchar6 FSHCCHAR6 OTG_FS host channel-6 characteristics register (OTG_FS_HCCHAR6)
@{*/

/** USB_OTG_HOST_FS_HCCHAR6_CHENA Channel enable **/
#define USB_OTG_HOST_FS_HCCHAR6_CHENA		(1 << 31)
/** USB_OTG_HOST_FS_HCCHAR6_CHDIS Channel disable **/
#define USB_OTG_HOST_FS_HCCHAR6_CHDIS		(1 << 30)
/** USB_OTG_HOST_FS_HCCHAR6_ODDFRM Odd frame **/
#define USB_OTG_HOST_FS_HCCHAR6_ODDFRM		(1 << 29)

#define USB_OTG_HOST_FS_HCCHAR6_DAD_SHIFT		22
#define USB_OTG_HOST_FS_HCCHAR6_DAD_MASK		0x7f
/** @defgroup usb_otg_host_fs_hcchar6_dad DAD Device address
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR6_MCNT_SHIFT		20
#define USB_OTG_HOST_FS_HCCHAR6_MCNT_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar6_mcnt MCNT Multicount
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR6_EPTYP_SHIFT		18
#define USB_OTG_HOST_FS_HCCHAR6_EPTYP_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar6_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** USB_OTG_HOST_FS_HCCHAR6_LSDEV Low-speed device **/
#define USB_OTG_HOST_FS_HCCHAR6_LSDEV		(1 << 17)
/** USB_OTG_HOST_FS_HCCHAR6_EPDIR Endpoint direction **/
#define USB_OTG_HOST_FS_HCCHAR6_EPDIR		(1 << 15)

#define USB_OTG_HOST_FS_HCCHAR6_EPNUM_SHIFT		11
#define USB_OTG_HOST_FS_HCCHAR6_EPNUM_MASK		0x0f
/** @defgroup usb_otg_host_fs_hcchar6_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR6_MPSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCCHAR6_MPSIZ_MASK		0x7ff
/** @defgroup usb_otg_host_fs_hcchar6_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcint6 FSHCINT6 OTG_FS host channel-6 interrupt register (OTG_FS_HCINT6)
@{*/

/** USB_OTG_HOST_FS_HCINT6_DTERR Data toggle error **/
#define USB_OTG_HOST_FS_HCINT6_DTERR		(1 << 10)
/** USB_OTG_HOST_FS_HCINT6_FRMOR Frame overrun **/
#define USB_OTG_HOST_FS_HCINT6_FRMOR		(1 << 9)
/** USB_OTG_HOST_FS_HCINT6_BBERR Babble error **/
#define USB_OTG_HOST_FS_HCINT6_BBERR		(1 << 8)
/** USB_OTG_HOST_FS_HCINT6_TXERR Transaction error **/
#define USB_OTG_HOST_FS_HCINT6_TXERR		(1 << 7)
/** USB_OTG_HOST_FS_HCINT6_ACK ACK response received/transmitted interrupt **/
#define USB_OTG_HOST_FS_HCINT6_ACK		(1 << 5)
/** USB_OTG_HOST_FS_HCINT6_NAK NAK response received interrupt **/
#define USB_OTG_HOST_FS_HCINT6_NAK		(1 << 4)
/** USB_OTG_HOST_FS_HCINT6_STALL STALL response received interrupt **/
#define USB_OTG_HOST_FS_HCINT6_STALL		(1 << 3)
/** USB_OTG_HOST_FS_HCINT6_CHH Channel halted **/
#define USB_OTG_HOST_FS_HCINT6_CHH		(1 << 1)
/** USB_OTG_HOST_FS_HCINT6_XFRC Transfer completed **/
#define USB_OTG_HOST_FS_HCINT6_XFRC		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hcintmsk6 FSHCINTMSK6 OTG_FS host channel-6 mask register (OTG_FS_HCINTMSK6)
@{*/

/** USB_OTG_HOST_FS_HCINTMSK6_DTERRM Data toggle error mask **/
#define USB_OTG_HOST_FS_HCINTMSK6_DTERRM		(1 << 10)
/** USB_OTG_HOST_FS_HCINTMSK6_FRMORM Frame overrun mask **/
#define USB_OTG_HOST_FS_HCINTMSK6_FRMORM		(1 << 9)
/** USB_OTG_HOST_FS_HCINTMSK6_BBERRM Babble error mask **/
#define USB_OTG_HOST_FS_HCINTMSK6_BBERRM		(1 << 8)
/** USB_OTG_HOST_FS_HCINTMSK6_TXERRM Transaction error mask **/
#define USB_OTG_HOST_FS_HCINTMSK6_TXERRM		(1 << 7)
/** USB_OTG_HOST_FS_HCINTMSK6_NYET response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK6_NYET		(1 << 6)
/** USB_OTG_HOST_FS_HCINTMSK6_ACKM ACK response received/transmitted interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK6_ACKM		(1 << 5)
/** USB_OTG_HOST_FS_HCINTMSK6_NAKM NAK response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK6_NAKM		(1 << 4)
/** USB_OTG_HOST_FS_HCINTMSK6_STALLM STALL response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK6_STALLM		(1 << 3)
/** USB_OTG_HOST_FS_HCINTMSK6_CHHM Channel halted mask **/
#define USB_OTG_HOST_FS_HCINTMSK6_CHHM		(1 << 1)
/** USB_OTG_HOST_FS_HCINTMSK6_XFRCM Transfer completed mask **/
#define USB_OTG_HOST_FS_HCINTMSK6_XFRCM		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hctsiz6 FSHCTSIZ6 OTG_FS host channel-6 transfer size register
@{*/


#define USB_OTG_HOST_FS_HCTSIZ6_DPID_SHIFT		29
#define USB_OTG_HOST_FS_HCTSIZ6_DPID_MASK		0x03
/** @defgroup usb_otg_host_fs_hctsiz6_dpid DPID Data PID
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ6_PKTCNT_SHIFT		19
#define USB_OTG_HOST_FS_HCTSIZ6_PKTCNT_MASK		0x3ff
/** @defgroup usb_otg_host_fs_hctsiz6_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ6_XFRSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCTSIZ6_XFRSIZ_MASK		0x7ffff
/** @defgroup usb_otg_host_fs_hctsiz6_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcchar7 FSHCCHAR7 OTG_FS host channel-7 characteristics register (OTG_FS_HCCHAR7)
@{*/

/** USB_OTG_HOST_FS_HCCHAR7_CHENA Channel enable **/
#define USB_OTG_HOST_FS_HCCHAR7_CHENA		(1 << 31)
/** USB_OTG_HOST_FS_HCCHAR7_CHDIS Channel disable **/
#define USB_OTG_HOST_FS_HCCHAR7_CHDIS		(1 << 30)
/** USB_OTG_HOST_FS_HCCHAR7_ODDFRM Odd frame **/
#define USB_OTG_HOST_FS_HCCHAR7_ODDFRM		(1 << 29)

#define USB_OTG_HOST_FS_HCCHAR7_DAD_SHIFT		22
#define USB_OTG_HOST_FS_HCCHAR7_DAD_MASK		0x7f
/** @defgroup usb_otg_host_fs_hcchar7_dad DAD Device address
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR7_MCNT_SHIFT		20
#define USB_OTG_HOST_FS_HCCHAR7_MCNT_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar7_mcnt MCNT Multicount
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR7_EPTYP_SHIFT		18
#define USB_OTG_HOST_FS_HCCHAR7_EPTYP_MASK		0x03
/** @defgroup usb_otg_host_fs_hcchar7_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** USB_OTG_HOST_FS_HCCHAR7_LSDEV Low-speed device **/
#define USB_OTG_HOST_FS_HCCHAR7_LSDEV		(1 << 17)
/** USB_OTG_HOST_FS_HCCHAR7_EPDIR Endpoint direction **/
#define USB_OTG_HOST_FS_HCCHAR7_EPDIR		(1 << 15)

#define USB_OTG_HOST_FS_HCCHAR7_EPNUM_SHIFT		11
#define USB_OTG_HOST_FS_HCCHAR7_EPNUM_MASK		0x0f
/** @defgroup usb_otg_host_fs_hcchar7_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCCHAR7_MPSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCCHAR7_MPSIZ_MASK		0x7ff
/** @defgroup usb_otg_host_fs_hcchar7_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup usb_otg_host_fs_hcint7 FSHCINT7 OTG_FS host channel-7 interrupt register (OTG_FS_HCINT7)
@{*/

/** USB_OTG_HOST_FS_HCINT7_DTERR Data toggle error **/
#define USB_OTG_HOST_FS_HCINT7_DTERR		(1 << 10)
/** USB_OTG_HOST_FS_HCINT7_FRMOR Frame overrun **/
#define USB_OTG_HOST_FS_HCINT7_FRMOR		(1 << 9)
/** USB_OTG_HOST_FS_HCINT7_BBERR Babble error **/
#define USB_OTG_HOST_FS_HCINT7_BBERR		(1 << 8)
/** USB_OTG_HOST_FS_HCINT7_TXERR Transaction error **/
#define USB_OTG_HOST_FS_HCINT7_TXERR		(1 << 7)
/** USB_OTG_HOST_FS_HCINT7_ACK ACK response received/transmitted interrupt **/
#define USB_OTG_HOST_FS_HCINT7_ACK		(1 << 5)
/** USB_OTG_HOST_FS_HCINT7_NAK NAK response received interrupt **/
#define USB_OTG_HOST_FS_HCINT7_NAK		(1 << 4)
/** USB_OTG_HOST_FS_HCINT7_STALL STALL response received interrupt **/
#define USB_OTG_HOST_FS_HCINT7_STALL		(1 << 3)
/** USB_OTG_HOST_FS_HCINT7_CHH Channel halted **/
#define USB_OTG_HOST_FS_HCINT7_CHH		(1 << 1)
/** USB_OTG_HOST_FS_HCINT7_XFRC Transfer completed **/
#define USB_OTG_HOST_FS_HCINT7_XFRC		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hcintmsk7 FSHCINTMSK7 OTG_FS host channel-7 mask register (OTG_FS_HCINTMSK7)
@{*/

/** USB_OTG_HOST_FS_HCINTMSK7_DTERRM Data toggle error mask **/
#define USB_OTG_HOST_FS_HCINTMSK7_DTERRM		(1 << 10)
/** USB_OTG_HOST_FS_HCINTMSK7_FRMORM Frame overrun mask **/
#define USB_OTG_HOST_FS_HCINTMSK7_FRMORM		(1 << 9)
/** USB_OTG_HOST_FS_HCINTMSK7_BBERRM Babble error mask **/
#define USB_OTG_HOST_FS_HCINTMSK7_BBERRM		(1 << 8)
/** USB_OTG_HOST_FS_HCINTMSK7_TXERRM Transaction error mask **/
#define USB_OTG_HOST_FS_HCINTMSK7_TXERRM		(1 << 7)
/** USB_OTG_HOST_FS_HCINTMSK7_NYET response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK7_NYET		(1 << 6)
/** USB_OTG_HOST_FS_HCINTMSK7_ACKM ACK response received/transmitted interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK7_ACKM		(1 << 5)
/** USB_OTG_HOST_FS_HCINTMSK7_NAKM NAK response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK7_NAKM		(1 << 4)
/** USB_OTG_HOST_FS_HCINTMSK7_STALLM STALL response received interrupt mask **/
#define USB_OTG_HOST_FS_HCINTMSK7_STALLM		(1 << 3)
/** USB_OTG_HOST_FS_HCINTMSK7_CHHM Channel halted mask **/
#define USB_OTG_HOST_FS_HCINTMSK7_CHHM		(1 << 1)
/** USB_OTG_HOST_FS_HCINTMSK7_XFRCM Transfer completed mask **/
#define USB_OTG_HOST_FS_HCINTMSK7_XFRCM		(1 << 0)

/**@}*/

/** @defgroup usb_otg_host_fs_hctsiz7 FSHCTSIZ7 OTG_FS host channel-7 transfer size register
@{*/


#define USB_OTG_HOST_FS_HCTSIZ7_DPID_SHIFT		29
#define USB_OTG_HOST_FS_HCTSIZ7_DPID_MASK		0x03
/** @defgroup usb_otg_host_fs_hctsiz7_dpid DPID Data PID
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ7_PKTCNT_SHIFT		19
#define USB_OTG_HOST_FS_HCTSIZ7_PKTCNT_MASK		0x3ff
/** @defgroup usb_otg_host_fs_hctsiz7_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define USB_OTG_HOST_FS_HCTSIZ7_XFRSIZ_SHIFT		0
#define USB_OTG_HOST_FS_HCTSIZ7_XFRSIZ_MASK		0x7ffff
/** @defgroup usb_otg_host_fs_hctsiz7_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

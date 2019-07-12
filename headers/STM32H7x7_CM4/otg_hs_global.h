#pragma once 

/* --- OTG_HS_GLOBAL: USB on the go high speed ---------------------- */

/** @defgroup otg_hs_global_registers USB on the go high speed Register
@{*/

/** OTG_HS_GLOBAL_OTG_HS_GOTGCTL OTG_HS control and status register **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGCTL			MMIO32(OTG_HS_GLOBAL_BASE + 0x00)
/** OTG_HS_GLOBAL_OTG_HS_GOTGINT OTG_HS interrupt register **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGINT			MMIO32(OTG_HS_GLOBAL_BASE + 0x04)
/** OTG_HS_GLOBAL_OTG_HS_GAHBCFG OTG_HS AHB configuration register **/
#define OTG_HS_GLOBAL_OTG_HS_GAHBCFG			MMIO32(OTG_HS_GLOBAL_BASE + 0x08)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG OTG_HS USB configuration register **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG			MMIO32(OTG_HS_GLOBAL_BASE + 0x0c)
/** OTG_HS_GLOBAL_OTG_HS_GRSTCTL OTG_HS reset register **/
#define OTG_HS_GLOBAL_OTG_HS_GRSTCTL			MMIO32(OTG_HS_GLOBAL_BASE + 0x10)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS OTG_HS core interrupt register **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS			MMIO32(OTG_HS_GLOBAL_BASE + 0x14)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK OTG_HS interrupt mask register **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK			MMIO32(OTG_HS_GLOBAL_BASE + 0x18)
/** OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Host OTG_HS Receive status debug read register (host mode) **/
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Host			MMIO32(OTG_HS_GLOBAL_BASE + 0x1c)
/** OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Device OTG_HS Receive status debug read register (peripheral mode mode) **/
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Device			MMIO32(OTG_HS_GLOBAL_BASE + 0x1c)
/** OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Host OTG_HS status read and pop register (host mode) **/
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Host			MMIO32(OTG_HS_GLOBAL_BASE + 0x20)
/** OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Device OTG_HS status read and pop register (peripheral mode) **/
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Device			MMIO32(OTG_HS_GLOBAL_BASE + 0x20)
/** OTG_HS_GLOBAL_OTG_HS_GRXFSIZ OTG_HS Receive FIFO size register **/
#define OTG_HS_GLOBAL_OTG_HS_GRXFSIZ			MMIO32(OTG_HS_GLOBAL_BASE + 0x24)
/** OTG_HS_GLOBAL_OTG_HS_HNPTXFSIZ_Host OTG_HS nonperiodic transmit FIFO size register (host mode) **/
#define OTG_HS_GLOBAL_OTG_HS_HNPTXFSIZ_Host			MMIO32(OTG_HS_GLOBAL_BASE + 0x28)
/** OTG_HS_GLOBAL_OTG_HS_DIEPTXF0_Device Endpoint 0 transmit FIFO size (peripheral mode) **/
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF0_Device			MMIO32(OTG_HS_GLOBAL_BASE + 0x28)
/** OTG_HS_GLOBAL_OTG_HS_HNPTXSTS OTG_HS nonperiodic transmit FIFO/queue status register **/
#define OTG_HS_GLOBAL_OTG_HS_HNPTXSTS			MMIO32(OTG_HS_GLOBAL_BASE + 0x2c)
/** OTG_HS_GLOBAL_OTG_HS_GI2CCTL OTG I2C access register **/
#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL			MMIO32(OTG_HS_GLOBAL_BASE + 0x30)
/** OTG_HS_GLOBAL_OTG_HS_GCCFG OTG_HS general core configuration register **/
#define OTG_HS_GLOBAL_OTG_HS_GCCFG			MMIO32(OTG_HS_GLOBAL_BASE + 0x38)
/** OTG_HS_GLOBAL_OTG_HS_CID OTG_HS core ID register **/
#define OTG_HS_GLOBAL_OTG_HS_CID			MMIO32(OTG_HS_GLOBAL_BASE + 0x3c)
/** OTG_HS_GLOBAL_OTG_HS_GLPMCFG OTG core LPM configuration register **/
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG			MMIO32(OTG_HS_GLOBAL_BASE + 0x54)
/** OTG_HS_GLOBAL_OTG_HS_HPTXFSIZ OTG_HS Host periodic transmit FIFO size register **/
#define OTG_HS_GLOBAL_OTG_HS_HPTXFSIZ			MMIO32(OTG_HS_GLOBAL_BASE + 0x100)
/** OTG_HS_GLOBAL_OTG_HS_DIEPTXF1 OTG_HS device IN endpoint transmit FIFO size register **/
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF1			MMIO32(OTG_HS_GLOBAL_BASE + 0x104)
/** OTG_HS_GLOBAL_OTG_HS_DIEPTXF2 OTG_HS device IN endpoint transmit FIFO size register **/
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF2			MMIO32(OTG_HS_GLOBAL_BASE + 0x108)
/** OTG_HS_GLOBAL_OTG_HS_DIEPTXF3 OTG_HS device IN endpoint transmit FIFO size register **/
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF3			MMIO32(OTG_HS_GLOBAL_BASE + 0x10c)
/** OTG_HS_GLOBAL_OTG_HS_DIEPTXF4 OTG_HS device IN endpoint transmit FIFO size register **/
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF4			MMIO32(OTG_HS_GLOBAL_BASE + 0x110)
/** OTG_HS_GLOBAL_OTG_HS_DIEPTXF5 OTG_HS device IN endpoint transmit FIFO size register **/
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF5			MMIO32(OTG_HS_GLOBAL_BASE + 0x114)
/** OTG_HS_GLOBAL_OTG_HS_DIEPTXF6 OTG_HS device IN endpoint transmit FIFO size register **/
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF6			MMIO32(OTG_HS_GLOBAL_BASE + 0x118)
/** OTG_HS_GLOBAL_OTG_HS_DIEPTXF7 OTG_HS device IN endpoint transmit FIFO size register **/
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF7			MMIO32(OTG_HS_GLOBAL_BASE + 0x11c)
/** OTG_HS_GLOBAL_OTG_HS_DIEPTXF8 OTG_HS device IN endpoint transmit FIFO size register **/
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF8			MMIO32(OTG_HS_GLOBAL_BASE + 0x120)

/**@}*/


/** @defgroup otg_hs_global_otg_hs_gotgctl OTGHSGOTGCTL OTG_HS control and status register
@{*/

/** OTG_HS_GLOBAL_OTG_HS_GOTGCTL_BSVLD B-session valid **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGCTL_BSVLD		(1 << 19)
/** OTG_HS_GLOBAL_OTG_HS_GOTGCTL_ASVLD A-session valid **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGCTL_ASVLD		(1 << 18)
/** OTG_HS_GLOBAL_OTG_HS_GOTGCTL_DBCT Long/short debounce time **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGCTL_DBCT		(1 << 17)
/** OTG_HS_GLOBAL_OTG_HS_GOTGCTL_CIDSTS Connector ID status **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGCTL_CIDSTS		(1 << 16)
/** OTG_HS_GLOBAL_OTG_HS_GOTGCTL_EHEN Embedded host enable **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGCTL_EHEN		(1 << 12)
/** OTG_HS_GLOBAL_OTG_HS_GOTGCTL_DHNPEN Device HNP enabled **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGCTL_DHNPEN		(1 << 11)
/** OTG_HS_GLOBAL_OTG_HS_GOTGCTL_HSHNPEN Host set HNP enable **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGCTL_HSHNPEN		(1 << 10)
/** OTG_HS_GLOBAL_OTG_HS_GOTGCTL_HNPRQ HNP request **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGCTL_HNPRQ		(1 << 9)
/** OTG_HS_GLOBAL_OTG_HS_GOTGCTL_HNGSCS Host negotiation success **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGCTL_HNGSCS		(1 << 8)
/** OTG_HS_GLOBAL_OTG_HS_GOTGCTL_SRQ Session request **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGCTL_SRQ		(1 << 1)
/** OTG_HS_GLOBAL_OTG_HS_GOTGCTL_SRQSCS Session request success **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGCTL_SRQSCS		(1 << 0)

/**@}*/

/** @defgroup otg_hs_global_otg_hs_gotgint OTGHSGOTGINT OTG_HS interrupt register
@{*/

/** OTG_HS_GLOBAL_OTG_HS_GOTGINT_IDCHNG ID input pin changed **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGINT_IDCHNG		(1 << 20)
/** OTG_HS_GLOBAL_OTG_HS_GOTGINT_DBCDNE Debounce done **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGINT_DBCDNE		(1 << 19)
/** OTG_HS_GLOBAL_OTG_HS_GOTGINT_ADTOCHG A-device timeout change **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGINT_ADTOCHG		(1 << 18)
/** OTG_HS_GLOBAL_OTG_HS_GOTGINT_HNGDET Host negotiation detected **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGINT_HNGDET		(1 << 17)
/** OTG_HS_GLOBAL_OTG_HS_GOTGINT_HNSSCHG Host negotiation success status change **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGINT_HNSSCHG		(1 << 9)
/** OTG_HS_GLOBAL_OTG_HS_GOTGINT_SRSSCHG Session request success status change **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGINT_SRSSCHG		(1 << 8)
/** OTG_HS_GLOBAL_OTG_HS_GOTGINT_SEDET Session end detected **/
#define OTG_HS_GLOBAL_OTG_HS_GOTGINT_SEDET		(1 << 2)

/**@}*/

/** @defgroup otg_hs_global_otg_hs_gahbcfg OTGHSGAHBCFG OTG_HS AHB configuration register
@{*/

/** OTG_HS_GLOBAL_OTG_HS_GAHBCFG_PTXFELVL Periodic TxFIFO empty level **/
#define OTG_HS_GLOBAL_OTG_HS_GAHBCFG_PTXFELVL		(1 << 8)
/** OTG_HS_GLOBAL_OTG_HS_GAHBCFG_TXFELVL TxFIFO empty level **/
#define OTG_HS_GLOBAL_OTG_HS_GAHBCFG_TXFELVL		(1 << 7)
/** OTG_HS_GLOBAL_OTG_HS_GAHBCFG_DMAEN DMA enable **/
#define OTG_HS_GLOBAL_OTG_HS_GAHBCFG_DMAEN		(1 << 5)

#define OTG_HS_GLOBAL_OTG_HS_GAHBCFG_HBSTLEN_SHIFT		1
#define OTG_HS_GLOBAL_OTG_HS_GAHBCFG_HBSTLEN_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_gahbcfg_hbstlen HBSTLEN Burst length/type
@{*/
/**@}*/

/** OTG_HS_GLOBAL_OTG_HS_GAHBCFG_GINT Global interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GAHBCFG_GINT		(1 << 0)

/**@}*/

/** @defgroup otg_hs_global_otg_hs_gusbcfg OTGHSGUSBCFG OTG_HS USB configuration register
@{*/

/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_FDMOD Forced peripheral mode **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_FDMOD		(1 << 30)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_FHMOD Forced host mode **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_FHMOD		(1 << 29)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_ULPIIPD ULPI interface protect disable **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_ULPIIPD		(1 << 25)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_PTCI Indicator pass through **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_PTCI		(1 << 24)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_PCCI Indicator complement **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_PCCI		(1 << 23)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_TSDPS TermSel DLine pulsing selection **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_TSDPS		(1 << 22)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_ULPIEVBUSI ULPI external VBUS indicator **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_ULPIEVBUSI		(1 << 21)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_ULPIEVBUSD ULPI External VBUS Drive **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_ULPIEVBUSD		(1 << 20)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_ULPICSM ULPI Clock SuspendM **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_ULPICSM		(1 << 19)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_ULPIAR ULPI Auto-resume **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_ULPIAR		(1 << 18)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_ULPIFSLS ULPI FS/LS select **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_ULPIFSLS		(1 << 17)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_PHYLPCS PHY Low-power clock select **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_PHYLPCS		(1 << 15)

#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_TRDT_SHIFT		10
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_TRDT_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_gusbcfg_trdt TRDT USB turnaround time
@{*/
/**@}*/

/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_HNPCAP HNP-capable **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_HNPCAP		(1 << 9)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_SRPCAP SRP-capable **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_SRPCAP		(1 << 8)
/** OTG_HS_GLOBAL_OTG_HS_GUSBCFG_PHYSEL USB 2.0 high-speed ULPI PHY or USB 1.1 full-speed serial transceiver select **/
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_PHYSEL		(1 << 6)

#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_TOCAL_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_GUSBCFG_TOCAL_MASK		0x07
/** @defgroup otg_hs_global_otg_hs_gusbcfg_tocal TOCAL FS timeout calibration
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_grstctl OTGHSGRSTCTL OTG_HS reset register
@{*/

/** OTG_HS_GLOBAL_OTG_HS_GRSTCTL_AHBIDL AHB master idle **/
#define OTG_HS_GLOBAL_OTG_HS_GRSTCTL_AHBIDL		(1 << 31)
/** OTG_HS_GLOBAL_OTG_HS_GRSTCTL_DMAREQ DMA request signal enabled for USB OTG HS **/
#define OTG_HS_GLOBAL_OTG_HS_GRSTCTL_DMAREQ		(1 << 30)

#define OTG_HS_GLOBAL_OTG_HS_GRSTCTL_TXFNUM_SHIFT		6
#define OTG_HS_GLOBAL_OTG_HS_GRSTCTL_TXFNUM_MASK		0x1f
/** @defgroup otg_hs_global_otg_hs_grstctl_txfnum TXFNUM TxFIFO number
@{*/
/**@}*/

/** OTG_HS_GLOBAL_OTG_HS_GRSTCTL_TXFFLSH TxFIFO flush **/
#define OTG_HS_GLOBAL_OTG_HS_GRSTCTL_TXFFLSH		(1 << 5)
/** OTG_HS_GLOBAL_OTG_HS_GRSTCTL_RXFFLSH RxFIFO flush **/
#define OTG_HS_GLOBAL_OTG_HS_GRSTCTL_RXFFLSH		(1 << 4)
/** OTG_HS_GLOBAL_OTG_HS_GRSTCTL_FCRST Host frame counter reset **/
#define OTG_HS_GLOBAL_OTG_HS_GRSTCTL_FCRST		(1 << 2)
/** OTG_HS_GLOBAL_OTG_HS_GRSTCTL_HSRST HCLK soft reset **/
#define OTG_HS_GLOBAL_OTG_HS_GRSTCTL_HSRST		(1 << 1)
/** OTG_HS_GLOBAL_OTG_HS_GRSTCTL_CSRST Core soft reset **/
#define OTG_HS_GLOBAL_OTG_HS_GRSTCTL_CSRST		(1 << 0)

/**@}*/

/** @defgroup otg_hs_global_otg_hs_gintsts OTGHSGINTSTS OTG_HS core interrupt register
@{*/

/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_WKUINT Resume/remote wakeup detected interrupt **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_WKUINT		(1 << 31)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_SRQINT Session request/new session detected interrupt **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_SRQINT		(1 << 30)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_DISCINT Disconnect detected interrupt **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_DISCINT		(1 << 29)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_CIDSCHG Connector ID status change **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_CIDSCHG		(1 << 28)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_PTXFE Periodic TxFIFO empty **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_PTXFE		(1 << 26)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_HCINT Host channels interrupt **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_HCINT		(1 << 25)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_HPRTINT Host port interrupt **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_HPRTINT		(1 << 24)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_DATAFSUSP Data fetch suspended **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_DATAFSUSP		(1 << 22)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_PXFR_INCOMPISOOUT Incomplete periodic transfer **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_PXFR_INCOMPISOOUT		(1 << 21)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_IISOIXFR Incomplete isochronous IN transfer **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_IISOIXFR		(1 << 20)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_OEPINT OUT endpoint interrupt **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_OEPINT		(1 << 19)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_IEPINT IN endpoint interrupt **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_IEPINT		(1 << 18)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_EOPF End of periodic frame interrupt **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_EOPF		(1 << 15)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_ISOODRP Isochronous OUT packet dropped interrupt **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_ISOODRP		(1 << 14)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_ENUMDNE Enumeration done **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_ENUMDNE		(1 << 13)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_USBRST USB reset **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_USBRST		(1 << 12)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_USBSUSP USB suspend **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_USBSUSP		(1 << 11)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_ESUSP Early suspend **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_ESUSP		(1 << 10)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_BOUTNAKEFF Global OUT NAK effective **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_BOUTNAKEFF		(1 << 7)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_GINAKEFF Global IN nonperiodic NAK effective **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_GINAKEFF		(1 << 6)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_NPTXFE Nonperiodic TxFIFO empty **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_NPTXFE		(1 << 5)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_RXFLVL RxFIFO nonempty **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_RXFLVL		(1 << 4)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_SOF Start of frame **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_SOF		(1 << 3)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_OTGINT OTG interrupt **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_OTGINT		(1 << 2)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_MMIS Mode mismatch interrupt **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_MMIS		(1 << 1)
/** OTG_HS_GLOBAL_OTG_HS_GINTSTS_CMOD Current mode of operation **/
#define OTG_HS_GLOBAL_OTG_HS_GINTSTS_CMOD		(1 << 0)

/**@}*/

/** @defgroup otg_hs_global_otg_hs_gintmsk OTGHSGINTMSK OTG_HS interrupt mask register
@{*/

/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_WUIM Resume/remote wakeup detected interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_WUIM		(1 << 31)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_SRQIM Session request/new session detected interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_SRQIM		(1 << 30)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_DISCINT Disconnect detected interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_DISCINT		(1 << 29)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_CIDSCHGM Connector ID status change mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_CIDSCHGM		(1 << 28)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_LPMINTM LPM interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_LPMINTM		(1 << 27)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_PTXFEM Periodic TxFIFO empty mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_PTXFEM		(1 << 26)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_HCIM Host channels interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_HCIM		(1 << 25)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_PRTIM Host port interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_PRTIM		(1 << 24)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_RSTDE Reset detected interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_RSTDE		(1 << 23)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_FSUSPM Data fetch suspended mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_FSUSPM		(1 << 22)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_PXFRM_IISOOXFRM Incomplete periodic transfer mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_PXFRM_IISOOXFRM		(1 << 21)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_IISOIXFRM Incomplete isochronous IN transfer mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_IISOIXFRM		(1 << 20)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_OEPINT OUT endpoints interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_OEPINT		(1 << 19)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_IEPINT IN endpoints interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_IEPINT		(1 << 18)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_EOPFM End of periodic frame interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_EOPFM		(1 << 15)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_ISOODRPM Isochronous OUT packet dropped interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_ISOODRPM		(1 << 14)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_ENUMDNEM Enumeration done mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_ENUMDNEM		(1 << 13)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_USBRST USB reset mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_USBRST		(1 << 12)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_USBSUSPM USB suspend mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_USBSUSPM		(1 << 11)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_ESUSPM Early suspend mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_ESUSPM		(1 << 10)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_GONAKEFFM Global OUT NAK effective mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_GONAKEFFM		(1 << 7)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_GINAKEFFM Global nonperiodic IN NAK effective mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_GINAKEFFM		(1 << 6)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_NPTXFEM Nonperiodic TxFIFO empty mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_NPTXFEM		(1 << 5)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_RXFLVLM Receive FIFO nonempty mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_RXFLVLM		(1 << 4)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_SOFM Start of frame mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_SOFM		(1 << 3)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_OTGINT OTG interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_OTGINT		(1 << 2)
/** OTG_HS_GLOBAL_OTG_HS_GINTMSK_MMISM Mode mismatch interrupt mask **/
#define OTG_HS_GLOBAL_OTG_HS_GINTMSK_MMISM		(1 << 1)

/**@}*/

/** @defgroup otg_hs_global_otg_hs_grxstsr_host OTGHSGRXSTSRHost OTG_HS Receive status debug read register (host mode)
@{*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Host_PKTSTS_SHIFT		17
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Host_PKTSTS_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_grxstsr_host_pktsts PKTSTS Packet status
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Host_DPID_SHIFT		15
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Host_DPID_MASK		0x03
/** @defgroup otg_hs_global_otg_hs_grxstsr_host_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Host_BCNT_SHIFT		4
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Host_BCNT_MASK		0x7ff
/** @defgroup otg_hs_global_otg_hs_grxstsr_host_bcnt BCNT Byte count
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Host_CHNUM_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Host_CHNUM_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_grxstsr_host_chnum CHNUM Channel number
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_grxstsr_device OTGHSGRXSTSRDevice OTG_HS Receive status debug read register (peripheral mode mode)
@{*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Device_FRMNUM_SHIFT		21
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Device_FRMNUM_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_grxstsr_device_frmnum FRMNUM Frame number
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Device_PKTSTS_SHIFT		17
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Device_PKTSTS_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_grxstsr_device_pktsts PKTSTS Packet status
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Device_DPID_SHIFT		15
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Device_DPID_MASK		0x03
/** @defgroup otg_hs_global_otg_hs_grxstsr_device_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Device_BCNT_SHIFT		4
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Device_BCNT_MASK		0x7ff
/** @defgroup otg_hs_global_otg_hs_grxstsr_device_bcnt BCNT Byte count
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Device_EPNUM_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSR_Device_EPNUM_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_grxstsr_device_epnum EPNUM Endpoint number
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_grxstsp_host OTGHSGRXSTSPHost OTG_HS status read and pop register (host mode)
@{*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Host_PKTSTS_SHIFT		17
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Host_PKTSTS_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_grxstsp_host_pktsts PKTSTS Packet status
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Host_DPID_SHIFT		15
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Host_DPID_MASK		0x03
/** @defgroup otg_hs_global_otg_hs_grxstsp_host_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Host_BCNT_SHIFT		4
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Host_BCNT_MASK		0x7ff
/** @defgroup otg_hs_global_otg_hs_grxstsp_host_bcnt BCNT Byte count
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Host_CHNUM_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Host_CHNUM_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_grxstsp_host_chnum CHNUM Channel number
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_grxstsp_device OTGHSGRXSTSPDevice OTG_HS status read and pop register (peripheral mode)
@{*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Device_FRMNUM_SHIFT		21
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Device_FRMNUM_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_grxstsp_device_frmnum FRMNUM Frame number
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Device_PKTSTS_SHIFT		17
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Device_PKTSTS_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_grxstsp_device_pktsts PKTSTS Packet status
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Device_DPID_SHIFT		15
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Device_DPID_MASK		0x03
/** @defgroup otg_hs_global_otg_hs_grxstsp_device_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Device_BCNT_SHIFT		4
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Device_BCNT_MASK		0x7ff
/** @defgroup otg_hs_global_otg_hs_grxstsp_device_bcnt BCNT Byte count
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Device_EPNUM_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_GRXSTSP_Device_EPNUM_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_grxstsp_device_epnum EPNUM Endpoint number
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_grxfsiz OTGHSGRXFSIZ OTG_HS Receive FIFO size register
@{*/


#define OTG_HS_GLOBAL_OTG_HS_GRXFSIZ_RXFD_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_GRXFSIZ_RXFD_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_grxfsiz_rxfd RXFD RxFIFO depth
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_hnptxfsiz_host OTGHSHNPTXFSIZHost OTG_HS nonperiodic transmit FIFO size register (host mode)
@{*/


#define OTG_HS_GLOBAL_OTG_HS_HNPTXFSIZ_Host_NPTXFD_SHIFT		16
#define OTG_HS_GLOBAL_OTG_HS_HNPTXFSIZ_Host_NPTXFD_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_hnptxfsiz_host_nptxfd NPTXFD Nonperiodic TxFIFO depth
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_HNPTXFSIZ_Host_NPTXFSA_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_HNPTXFSIZ_Host_NPTXFSA_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_hnptxfsiz_host_nptxfsa NPTXFSA Nonperiodic transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_dieptxf0_device OTGHSDIEPTXF0Device Endpoint 0 transmit FIFO size (peripheral mode)
@{*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF0_Device_TX0FD_SHIFT		16
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF0_Device_TX0FD_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf0_device_tx0fd TX0FD Endpoint 0 TxFIFO depth
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF0_Device_TX0FSA_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF0_Device_TX0FSA_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf0_device_tx0fsa TX0FSA Endpoint 0 transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_hnptxsts OTGHSHNPTXSTS OTG_HS nonperiodic transmit FIFO/queue status register
@{*/


#define OTG_HS_GLOBAL_OTG_HS_HNPTXSTS_NPTXQTOP_SHIFT		24
#define OTG_HS_GLOBAL_OTG_HS_HNPTXSTS_NPTXQTOP_MASK		0x7f
/** @defgroup otg_hs_global_otg_hs_hnptxsts_nptxqtop NPTXQTOP Top of the nonperiodic transmit request queue
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_HNPTXSTS_NPTQXSAV_SHIFT		16
#define OTG_HS_GLOBAL_OTG_HS_HNPTXSTS_NPTQXSAV_MASK		0xff
/** @defgroup otg_hs_global_otg_hs_hnptxsts_nptqxsav NPTQXSAV Nonperiodic transmit request queue space available
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_HNPTXSTS_NPTXFSAV_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_HNPTXSTS_NPTXFSAV_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_hnptxsts_nptxfsav NPTXFSAV Nonperiodic TxFIFO space available
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_gi2cctl OTGHSGI2CCTL OTG I2C access register
@{*/

/** OTG_HS_GLOBAL_OTG_HS_GI2CCTL_BSYDNE I2C Busy/Done **/
#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL_BSYDNE		(1 << 31)
/** OTG_HS_GLOBAL_OTG_HS_GI2CCTL_RW Read/Write Indicator **/
#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL_RW		(1 << 30)
/** OTG_HS_GLOBAL_OTG_HS_GI2CCTL_I2CDATSE0 I2C DatSe0 USB mode **/
#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL_I2CDATSE0		(1 << 28)

#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL_I2CDEVADR_SHIFT		26
#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL_I2CDEVADR_MASK		0x03
/** @defgroup otg_hs_global_otg_hs_gi2cctl_i2cdevadr I2CDEVADR I2C Device Address
@{*/
/**@}*/

/** OTG_HS_GLOBAL_OTG_HS_GI2CCTL_ACK I2C ACK **/
#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL_ACK		(1 << 24)
/** OTG_HS_GLOBAL_OTG_HS_GI2CCTL_I2CEN I2C Enable **/
#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL_I2CEN		(1 << 23)

#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL_ADDR_SHIFT		16
#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL_ADDR_MASK		0x7f
/** @defgroup otg_hs_global_otg_hs_gi2cctl_addr ADDR I2C Address
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL_REGADDR_SHIFT		8
#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL_REGADDR_MASK		0xff
/** @defgroup otg_hs_global_otg_hs_gi2cctl_regaddr REGADDR I2C Register Address
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL_RWDATA_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_GI2CCTL_RWDATA_MASK		0xff
/** @defgroup otg_hs_global_otg_hs_gi2cctl_rwdata RWDATA I2C Read/Write Data
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_gccfg OTGHSGCCFG OTG_HS general core configuration register
@{*/

/** OTG_HS_GLOBAL_OTG_HS_GCCFG_VBDEN USB VBUS detection enable **/
#define OTG_HS_GLOBAL_OTG_HS_GCCFG_VBDEN		(1 << 21)
/** OTG_HS_GLOBAL_OTG_HS_GCCFG_SDEN Secondary detection (SD) mode enable **/
#define OTG_HS_GLOBAL_OTG_HS_GCCFG_SDEN		(1 << 20)
/** OTG_HS_GLOBAL_OTG_HS_GCCFG_PDEN Primary detection (PD) mode enable **/
#define OTG_HS_GLOBAL_OTG_HS_GCCFG_PDEN		(1 << 19)
/** OTG_HS_GLOBAL_OTG_HS_GCCFG_DCDEN Data contact detection (DCD) mode enable **/
#define OTG_HS_GLOBAL_OTG_HS_GCCFG_DCDEN		(1 << 18)
/** OTG_HS_GLOBAL_OTG_HS_GCCFG_BCDEN Battery charging detector (BCD) enable **/
#define OTG_HS_GLOBAL_OTG_HS_GCCFG_BCDEN		(1 << 17)
/** OTG_HS_GLOBAL_OTG_HS_GCCFG_PWRDWN Power down **/
#define OTG_HS_GLOBAL_OTG_HS_GCCFG_PWRDWN		(1 << 16)
/** OTG_HS_GLOBAL_OTG_HS_GCCFG_PS2DET DM pull-up detection status **/
#define OTG_HS_GLOBAL_OTG_HS_GCCFG_PS2DET		(1 << 3)
/** OTG_HS_GLOBAL_OTG_HS_GCCFG_SDET Secondary detection (SD) status **/
#define OTG_HS_GLOBAL_OTG_HS_GCCFG_SDET		(1 << 2)
/** OTG_HS_GLOBAL_OTG_HS_GCCFG_PDET Primary detection (PD) status **/
#define OTG_HS_GLOBAL_OTG_HS_GCCFG_PDET		(1 << 1)
/** OTG_HS_GLOBAL_OTG_HS_GCCFG_DCDET Data contact detection (DCD) status **/
#define OTG_HS_GLOBAL_OTG_HS_GCCFG_DCDET		(1 << 0)

/**@}*/

/** @defgroup otg_hs_global_otg_hs_cid OTGHSCID OTG_HS core ID register
@{*/


#define OTG_HS_GLOBAL_OTG_HS_CID_PRODUCT_ID_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_CID_PRODUCT_ID_MASK		0xffffffff
/** @defgroup otg_hs_global_otg_hs_cid_product_id PRODUCTID Product ID field
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_glpmcfg OTGHSGLPMCFG OTG core LPM configuration register
@{*/

/** OTG_HS_GLOBAL_OTG_HS_GLPMCFG_ENBESL Enable best effort service latency **/
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_ENBESL		(1 << 28)

#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_LPMRCNTSTS_SHIFT		25
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_LPMRCNTSTS_MASK		0x07
/** @defgroup otg_hs_global_otg_hs_glpmcfg_lpmrcntsts LPMRCNTSTS LPM retry count status
@{*/
/**@}*/

/** OTG_HS_GLOBAL_OTG_HS_GLPMCFG_SNDLPM Send LPM transaction **/
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_SNDLPM		(1 << 24)

#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_LPMRCNT_SHIFT		21
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_LPMRCNT_MASK		0x07
/** @defgroup otg_hs_global_otg_hs_glpmcfg_lpmrcnt LPMRCNT LPM retry count
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_LPMCHIDX_SHIFT		17
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_LPMCHIDX_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_glpmcfg_lpmchidx LPMCHIDX LPM Channel Index
@{*/
/**@}*/

/** OTG_HS_GLOBAL_OTG_HS_GLPMCFG_L1RSMOK Sleep State Resume OK **/
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_L1RSMOK		(1 << 16)
/** OTG_HS_GLOBAL_OTG_HS_GLPMCFG_SLPSTS Port sleep status **/
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_SLPSTS		(1 << 15)

#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_LPMRST_SHIFT		13
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_LPMRST_MASK		0x03
/** @defgroup otg_hs_global_otg_hs_glpmcfg_lpmrst LPMRST LPM response
@{*/
/**@}*/

/** OTG_HS_GLOBAL_OTG_HS_GLPMCFG_L1DSEN L1 deep sleep enable **/
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_L1DSEN		(1 << 12)

#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_BESLTHRS_SHIFT		8
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_BESLTHRS_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_glpmcfg_beslthrs BESLTHRS BESL threshold
@{*/
/**@}*/

/** OTG_HS_GLOBAL_OTG_HS_GLPMCFG_L1SSEN L1 Shallow Sleep enable **/
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_L1SSEN		(1 << 7)
/** OTG_HS_GLOBAL_OTG_HS_GLPMCFG_REMWAKE bRemoteWake value **/
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_REMWAKE		(1 << 6)

#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_BESL_SHIFT		2
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_BESL_MASK		0x0f
/** @defgroup otg_hs_global_otg_hs_glpmcfg_besl BESL Best effort service latency
@{*/
/**@}*/

/** OTG_HS_GLOBAL_OTG_HS_GLPMCFG_LPMACK LPM token acknowledge enable **/
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_LPMACK		(1 << 1)
/** OTG_HS_GLOBAL_OTG_HS_GLPMCFG_LPMEN LPM support enable **/
#define OTG_HS_GLOBAL_OTG_HS_GLPMCFG_LPMEN		(1 << 0)

/**@}*/

/** @defgroup otg_hs_global_otg_hs_hptxfsiz OTGHSHPTXFSIZ OTG_HS Host periodic transmit FIFO size register
@{*/


#define OTG_HS_GLOBAL_OTG_HS_HPTXFSIZ_PTXFD_SHIFT		16
#define OTG_HS_GLOBAL_OTG_HS_HPTXFSIZ_PTXFD_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_hptxfsiz_ptxfd PTXFD Host periodic TxFIFO depth
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_HPTXFSIZ_PTXSA_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_HPTXFSIZ_PTXSA_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_hptxfsiz_ptxsa PTXSA Host periodic TxFIFO start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_dieptxf1 OTGHSDIEPTXF1 OTG_HS device IN endpoint transmit FIFO size register
@{*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF1_INEPTXFD_SHIFT		16
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF1_INEPTXFD_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf1_ineptxfd INEPTXFD IN endpoint TxFIFO depth
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF1_INEPTXSA_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF1_INEPTXSA_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf1_ineptxsa INEPTXSA IN endpoint FIFOx transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_dieptxf2 OTGHSDIEPTXF2 OTG_HS device IN endpoint transmit FIFO size register
@{*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF2_INEPTXFD_SHIFT		16
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF2_INEPTXFD_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf2_ineptxfd INEPTXFD IN endpoint TxFIFO depth
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF2_INEPTXSA_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF2_INEPTXSA_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf2_ineptxsa INEPTXSA IN endpoint FIFOx transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_dieptxf3 OTGHSDIEPTXF3 OTG_HS device IN endpoint transmit FIFO size register
@{*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF3_INEPTXFD_SHIFT		16
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF3_INEPTXFD_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf3_ineptxfd INEPTXFD IN endpoint TxFIFO depth
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF3_INEPTXSA_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF3_INEPTXSA_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf3_ineptxsa INEPTXSA IN endpoint FIFOx transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_dieptxf4 OTGHSDIEPTXF4 OTG_HS device IN endpoint transmit FIFO size register
@{*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF4_INEPTXFD_SHIFT		16
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF4_INEPTXFD_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf4_ineptxfd INEPTXFD IN endpoint TxFIFO depth
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF4_INEPTXSA_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF4_INEPTXSA_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf4_ineptxsa INEPTXSA IN endpoint FIFOx transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_dieptxf5 OTGHSDIEPTXF5 OTG_HS device IN endpoint transmit FIFO size register
@{*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF5_INEPTXFD_SHIFT		16
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF5_INEPTXFD_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf5_ineptxfd INEPTXFD IN endpoint TxFIFO depth
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF5_INEPTXSA_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF5_INEPTXSA_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf5_ineptxsa INEPTXSA IN endpoint FIFOx transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_dieptxf6 OTGHSDIEPTXF6 OTG_HS device IN endpoint transmit FIFO size register
@{*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF6_INEPTXFD_SHIFT		16
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF6_INEPTXFD_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf6_ineptxfd INEPTXFD IN endpoint TxFIFO depth
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF6_INEPTXSA_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF6_INEPTXSA_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf6_ineptxsa INEPTXSA IN endpoint FIFOx transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_dieptxf7 OTGHSDIEPTXF7 OTG_HS device IN endpoint transmit FIFO size register
@{*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF7_INEPTXFD_SHIFT		16
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF7_INEPTXFD_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf7_ineptxfd INEPTXFD IN endpoint TxFIFO depth
@{*/
/**@}*/


#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF7_INEPTXSA_SHIFT		0
#define OTG_HS_GLOBAL_OTG_HS_DIEPTXF7_INEPTXSA_MASK		0xffff
/** @defgroup otg_hs_global_otg_hs_dieptxf7_ineptxsa INEPTXSA IN endpoint FIFOx transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_global_otg_hs_dieptxf8 OTGHSDIEPTXF8 OTG_HS device IN endpoint transmit FIFO size register
@{*/


/**@}*/

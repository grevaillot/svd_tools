#pragma once 

/* --- OTG_FS_GLOBAL: USB on the go full speed ---------------------- */

/** @defgroup otg_fs_global_registers USB on the go full speed Register
@{*/

/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL OTG_FS control and status register (OTG_FS_GOTGCTL) **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL			MMIO32(OTG_FS_GLOBAL_BASE + 0x00)
/** OTG_FS_GLOBAL_OTG_FS_GOTGINT OTG_FS interrupt register (OTG_FS_GOTGINT) **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGINT			MMIO32(OTG_FS_GLOBAL_BASE + 0x04)
/** OTG_FS_GLOBAL_OTG_FS_GAHBCFG OTG_FS AHB configuration register (OTG_FS_GAHBCFG) **/
#define OTG_FS_GLOBAL_OTG_FS_GAHBCFG			MMIO32(OTG_FS_GLOBAL_BASE + 0x08)
/** OTG_FS_GLOBAL_OTG_FS_GUSBCFG OTG_FS USB configuration register (OTG_FS_GUSBCFG) **/
#define OTG_FS_GLOBAL_OTG_FS_GUSBCFG			MMIO32(OTG_FS_GLOBAL_BASE + 0x0c)
/** OTG_FS_GLOBAL_OTG_FS_GRSTCTL OTG_FS reset register (OTG_FS_GRSTCTL) **/
#define OTG_FS_GLOBAL_OTG_FS_GRSTCTL			MMIO32(OTG_FS_GLOBAL_BASE + 0x10)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS OTG_FS core interrupt register (OTG_FS_GINTSTS) **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS			MMIO32(OTG_FS_GLOBAL_BASE + 0x14)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK OTG_FS interrupt mask register (OTG_FS_GINTMSK) **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK			MMIO32(OTG_FS_GLOBAL_BASE + 0x18)
/** OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device OTG_FS Receive status debug read(Device mode) **/
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device			MMIO32(OTG_FS_GLOBAL_BASE + 0x1c)
/** OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host OTG_FS Receive status debug read(Host mode) **/
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host			MMIO32(OTG_FS_GLOBAL_BASE + 0x1c)
/** OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device OTG status read and pop register (Device mode) **/
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device			MMIO32(OTG_FS_GLOBAL_BASE + 0x20)
/** OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host OTG status read and pop register (Host mode) **/
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host			MMIO32(OTG_FS_GLOBAL_BASE + 0x20)
/** OTG_FS_GLOBAL_OTG_FS_GRXFSIZ OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ) **/
#define OTG_FS_GLOBAL_OTG_FS_GRXFSIZ			MMIO32(OTG_FS_GLOBAL_BASE + 0x24)
/** OTG_FS_GLOBAL_OTG_FS_DIEPTXF0_Device OTG_FS Endpoint 0 Transmit FIFO size **/
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF0_Device			MMIO32(OTG_FS_GLOBAL_BASE + 0x28)
/** OTG_FS_GLOBAL_OTG_FS_HNPTXFSIZ_Host OTG_FS Host non-periodic transmit FIFO size register **/
#define OTG_FS_GLOBAL_OTG_FS_HNPTXFSIZ_Host			MMIO32(OTG_FS_GLOBAL_BASE + 0x28)
/** OTG_FS_GLOBAL_OTG_FS_HNPTXSTS OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS) **/
#define OTG_FS_GLOBAL_OTG_FS_HNPTXSTS			MMIO32(OTG_FS_GLOBAL_BASE + 0x2c)
/** OTG_FS_GLOBAL_OTG_FS_GI2CCTL OTG I2C access register **/
#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL			MMIO32(OTG_FS_GLOBAL_BASE + 0x30)
/** OTG_FS_GLOBAL_OTG_FS_GCCFG OTG_FS general core configuration register (OTG_FS_GCCFG) **/
#define OTG_FS_GLOBAL_OTG_FS_GCCFG			MMIO32(OTG_FS_GLOBAL_BASE + 0x38)
/** OTG_FS_GLOBAL_OTG_FS_CID core ID register **/
#define OTG_FS_GLOBAL_OTG_FS_CID			MMIO32(OTG_FS_GLOBAL_BASE + 0x3c)
/** OTG_FS_GLOBAL_OTG_FS_GLPMCFG OTG core LPM configuration register **/
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG			MMIO32(OTG_FS_GLOBAL_BASE + 0x54)
/** OTG_FS_GLOBAL_OTG_FS_GPWRDN OTG power down register **/
#define OTG_FS_GLOBAL_OTG_FS_GPWRDN			MMIO32(OTG_FS_GLOBAL_BASE + 0x58)
/** OTG_FS_GLOBAL_OTG_FS_GADPCTL OTG ADP timer, control and status register **/
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL			MMIO32(OTG_FS_GLOBAL_BASE + 0x60)
/** OTG_FS_GLOBAL_OTG_FS_HPTXFSIZ OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ) **/
#define OTG_FS_GLOBAL_OTG_FS_HPTXFSIZ			MMIO32(OTG_FS_GLOBAL_BASE + 0x100)
/** OTG_FS_GLOBAL_OTG_FS_DIEPTXF1 OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF1) **/
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF1			MMIO32(OTG_FS_GLOBAL_BASE + 0x104)
/** OTG_FS_GLOBAL_OTG_FS_DIEPTXF2 OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2) **/
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF2			MMIO32(OTG_FS_GLOBAL_BASE + 0x108)
/** OTG_FS_GLOBAL_OTG_FS_DIEPTXF3 OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3) **/
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF3			MMIO32(OTG_FS_GLOBAL_BASE + 0x10c)
/** OTG_FS_GLOBAL_OTG_FS_DIEPTXF4 OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4) **/
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF4			MMIO32(OTG_FS_GLOBAL_BASE + 0x110)
/** OTG_FS_GLOBAL_OTG_FS_DIEPTXF5 OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF5) **/
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF5			MMIO32(OTG_FS_GLOBAL_BASE + 0x114)

/**@}*/


/** @defgroup otg_fs_global_otg_fs_gotgctl OTGFSGOTGCTL OTG_FS control and status register (OTG_FS_GOTGCTL)
@{*/

/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_OTGVER OTG version **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_OTGVER		(1 << 20)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_BSVLD B-session valid **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_BSVLD		(1 << 19)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_ASVLD A-session valid **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_ASVLD		(1 << 18)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_DBCT Long/short debounce time **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_DBCT		(1 << 17)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_CIDSTS Connector ID status **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_CIDSTS		(1 << 16)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_EHEN Embedded host enable **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_EHEN		(1 << 12)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_DHNPEN Device HNP enabled **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_DHNPEN		(1 << 11)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_HSHNPEN Host set HNP enable **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_HSHNPEN		(1 << 10)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_HNPRQ HNP request **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_HNPRQ		(1 << 9)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_HNGSCS Host negotiation success **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_HNGSCS		(1 << 8)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_BVALOVAL B-peripheral session valid override value **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_BVALOVAL		(1 << 7)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_BVALOEN B-peripheral session valid override enable **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_BVALOEN		(1 << 6)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_AVALOVAL A-peripheral session valid override value **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_AVALOVAL		(1 << 5)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_AVALOEN A-peripheral session valid override enable **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_AVALOEN		(1 << 4)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_VBVALOVAL VBUS valid override value **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_VBVALOVAL		(1 << 3)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_VBVALOEN VBUS valid override enable **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_VBVALOEN		(1 << 2)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_SRQ Session request **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_SRQ		(1 << 1)
/** OTG_FS_GLOBAL_OTG_FS_GOTGCTL_SRQSCS Session request success **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGCTL_SRQSCS		(1 << 0)

/**@}*/

/** @defgroup otg_fs_global_otg_fs_gotgint OTGFSGOTGINT OTG_FS interrupt register (OTG_FS_GOTGINT)
@{*/

/** OTG_FS_GLOBAL_OTG_FS_GOTGINT_IDCHNG ID input pin changed **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGINT_IDCHNG		(1 << 20)
/** OTG_FS_GLOBAL_OTG_FS_GOTGINT_DBCDNE Debounce done **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGINT_DBCDNE		(1 << 19)
/** OTG_FS_GLOBAL_OTG_FS_GOTGINT_ADTOCHG A-device timeout change **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGINT_ADTOCHG		(1 << 18)
/** OTG_FS_GLOBAL_OTG_FS_GOTGINT_HNGDET Host negotiation detected **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGINT_HNGDET		(1 << 17)
/** OTG_FS_GLOBAL_OTG_FS_GOTGINT_HNSSCHG Host negotiation success status change **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGINT_HNSSCHG		(1 << 9)
/** OTG_FS_GLOBAL_OTG_FS_GOTGINT_SRSSCHG Session request success status change **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGINT_SRSSCHG		(1 << 8)
/** OTG_FS_GLOBAL_OTG_FS_GOTGINT_SEDET Session end detected **/
#define OTG_FS_GLOBAL_OTG_FS_GOTGINT_SEDET		(1 << 2)

/**@}*/

/** @defgroup otg_fs_global_otg_fs_gahbcfg OTGFSGAHBCFG OTG_FS AHB configuration register (OTG_FS_GAHBCFG)
@{*/

/** OTG_FS_GLOBAL_OTG_FS_GAHBCFG_PTXFELVL Periodic TxFIFO empty level **/
#define OTG_FS_GLOBAL_OTG_FS_GAHBCFG_PTXFELVL		(1 << 8)
/** OTG_FS_GLOBAL_OTG_FS_GAHBCFG_TXFELVL TxFIFO empty level **/
#define OTG_FS_GLOBAL_OTG_FS_GAHBCFG_TXFELVL		(1 << 7)
/** OTG_FS_GLOBAL_OTG_FS_GAHBCFG_GINT Global interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GAHBCFG_GINT		(1 << 0)

/**@}*/

/** @defgroup otg_fs_global_otg_fs_gusbcfg OTGFSGUSBCFG OTG_FS USB configuration register (OTG_FS_GUSBCFG)
@{*/

/** OTG_FS_GLOBAL_OTG_FS_GUSBCFG_FDMOD Force device mode **/
#define OTG_FS_GLOBAL_OTG_FS_GUSBCFG_FDMOD		(1 << 30)
/** OTG_FS_GLOBAL_OTG_FS_GUSBCFG_FHMOD Force host mode **/
#define OTG_FS_GLOBAL_OTG_FS_GUSBCFG_FHMOD		(1 << 29)

#define OTG_FS_GLOBAL_OTG_FS_GUSBCFG_TRDT_SHIFT		10
#define OTG_FS_GLOBAL_OTG_FS_GUSBCFG_TRDT_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_gusbcfg_trdt TRDT USB turnaround time
@{*/
/**@}*/

/** OTG_FS_GLOBAL_OTG_FS_GUSBCFG_HNPCAP HNP-capable **/
#define OTG_FS_GLOBAL_OTG_FS_GUSBCFG_HNPCAP		(1 << 9)
/** OTG_FS_GLOBAL_OTG_FS_GUSBCFG_SRPCAP SRP-capable **/
#define OTG_FS_GLOBAL_OTG_FS_GUSBCFG_SRPCAP		(1 << 8)
/** OTG_FS_GLOBAL_OTG_FS_GUSBCFG_PHYSEL Full Speed serial transceiver select **/
#define OTG_FS_GLOBAL_OTG_FS_GUSBCFG_PHYSEL		(1 << 6)

#define OTG_FS_GLOBAL_OTG_FS_GUSBCFG_TOCAL_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_GUSBCFG_TOCAL_MASK		0x07
/** @defgroup otg_fs_global_otg_fs_gusbcfg_tocal TOCAL FS timeout calibration
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_grstctl OTGFSGRSTCTL OTG_FS reset register (OTG_FS_GRSTCTL)
@{*/

/** OTG_FS_GLOBAL_OTG_FS_GRSTCTL_AHBIDL AHB master idle **/
#define OTG_FS_GLOBAL_OTG_FS_GRSTCTL_AHBIDL		(1 << 31)

#define OTG_FS_GLOBAL_OTG_FS_GRSTCTL_TXFNUM_SHIFT		6
#define OTG_FS_GLOBAL_OTG_FS_GRSTCTL_TXFNUM_MASK		0x1f
/** @defgroup otg_fs_global_otg_fs_grstctl_txfnum TXFNUM TxFIFO number
@{*/
/**@}*/

/** OTG_FS_GLOBAL_OTG_FS_GRSTCTL_TXFFLSH TxFIFO flush **/
#define OTG_FS_GLOBAL_OTG_FS_GRSTCTL_TXFFLSH		(1 << 5)
/** OTG_FS_GLOBAL_OTG_FS_GRSTCTL_RXFFLSH RxFIFO flush **/
#define OTG_FS_GLOBAL_OTG_FS_GRSTCTL_RXFFLSH		(1 << 4)
/** OTG_FS_GLOBAL_OTG_FS_GRSTCTL_FCRST Host frame counter reset **/
#define OTG_FS_GLOBAL_OTG_FS_GRSTCTL_FCRST		(1 << 2)
/** OTG_FS_GLOBAL_OTG_FS_GRSTCTL_HSRST HCLK soft reset **/
#define OTG_FS_GLOBAL_OTG_FS_GRSTCTL_HSRST		(1 << 1)
/** OTG_FS_GLOBAL_OTG_FS_GRSTCTL_CSRST Core soft reset **/
#define OTG_FS_GLOBAL_OTG_FS_GRSTCTL_CSRST		(1 << 0)

/**@}*/

/** @defgroup otg_fs_global_otg_fs_gintsts OTGFSGINTSTS OTG_FS core interrupt register (OTG_FS_GINTSTS)
@{*/

/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_WKUPINT Resume/remote wakeup detected interrupt **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_WKUPINT		(1 << 31)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_SRQINT Session request/new session detected interrupt **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_SRQINT		(1 << 30)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_DISCINT Disconnect detected interrupt **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_DISCINT		(1 << 29)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_CIDSCHG Connector ID status change **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_CIDSCHG		(1 << 28)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_PTXFE Periodic TxFIFO empty **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_PTXFE		(1 << 26)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_HCINT Host channels interrupt **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_HCINT		(1 << 25)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_HPRTINT Host port interrupt **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_HPRTINT		(1 << 24)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_RSTDET Reset detected interrupt **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_RSTDET		(1 << 23)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_IPXFR_INCOMPISOOUT Incomplete periodic transfer(Host mode)/Incomplete isochronous OUT transfer(Device mode) **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_IPXFR_INCOMPISOOUT		(1 << 21)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_IISOIXFR Incomplete isochronous IN transfer **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_IISOIXFR		(1 << 20)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_OEPINT OUT endpoint interrupt **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_OEPINT		(1 << 19)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_IEPINT IN endpoint interrupt **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_IEPINT		(1 << 18)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_EOPF End of periodic frame interrupt **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_EOPF		(1 << 15)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_ISOODRP Isochronous OUT packet dropped interrupt **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_ISOODRP		(1 << 14)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_ENUMDNE Enumeration done **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_ENUMDNE		(1 << 13)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_USBRST USB reset **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_USBRST		(1 << 12)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_USBSUSP USB suspend **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_USBSUSP		(1 << 11)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_ESUSP Early suspend **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_ESUSP		(1 << 10)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_GOUTNAKEFF Global OUT NAK effective **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_GOUTNAKEFF		(1 << 7)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_GINAKEFF Global IN non-periodic NAK effective **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_GINAKEFF		(1 << 6)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_NPTXFE Non-periodic TxFIFO empty **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_NPTXFE		(1 << 5)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_RXFLVL RxFIFO non-empty **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_RXFLVL		(1 << 4)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_SOF Start of frame **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_SOF		(1 << 3)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_OTGINT OTG interrupt **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_OTGINT		(1 << 2)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_MMIS Mode mismatch interrupt **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_MMIS		(1 << 1)
/** OTG_FS_GLOBAL_OTG_FS_GINTSTS_CMOD Current mode of operation **/
#define OTG_FS_GLOBAL_OTG_FS_GINTSTS_CMOD		(1 << 0)

/**@}*/

/** @defgroup otg_fs_global_otg_fs_gintmsk OTGFSGINTMSK OTG_FS interrupt mask register (OTG_FS_GINTMSK)
@{*/

/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_WUIM Resume/remote wakeup detected interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_WUIM		(1 << 31)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_SRQIM Session request/new session detected interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_SRQIM		(1 << 30)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_DISCINT Disconnect detected interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_DISCINT		(1 << 29)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_CIDSCHGM Connector ID status change mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_CIDSCHGM		(1 << 28)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_LPMIN LPM interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_LPMIN		(1 << 27)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_PTXFEM Periodic TxFIFO empty mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_PTXFEM		(1 << 26)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_HCIM Host channels interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_HCIM		(1 << 25)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_PRTIM Host port interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_PRTIM		(1 << 24)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_RSTDETM Reset detected interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_RSTDETM		(1 << 23)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_IPXFRM_IISOOXFRM Incomplete periodic transfer mask(Host mode)/Incomplete isochronous OUT transfer mask(Device mode) **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_IPXFRM_IISOOXFRM		(1 << 21)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_IISOIXFRM Incomplete isochronous IN transfer mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_IISOIXFRM		(1 << 20)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_OEPINT OUT endpoints interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_OEPINT		(1 << 19)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_IEPINT IN endpoints interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_IEPINT		(1 << 18)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_EOPFM End of periodic frame interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_EOPFM		(1 << 15)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_ISOODRPM Isochronous OUT packet dropped interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_ISOODRPM		(1 << 14)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_ENUMDNEM Enumeration done mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_ENUMDNEM		(1 << 13)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_USBRST USB reset mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_USBRST		(1 << 12)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_USBSUSPM USB suspend mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_USBSUSPM		(1 << 11)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_ESUSPM Early suspend mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_ESUSPM		(1 << 10)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_GONAKEFFM Global OUT NAK effective mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_GONAKEFFM		(1 << 7)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_GINAKEFFM Global non-periodic IN NAK effective mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_GINAKEFFM		(1 << 6)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_NPTXFEM Non-periodic TxFIFO empty mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_NPTXFEM		(1 << 5)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_RXFLVLM Receive FIFO non-empty mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_RXFLVLM		(1 << 4)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_SOFM Start of frame mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_SOFM		(1 << 3)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_OTGINT OTG interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_OTGINT		(1 << 2)
/** OTG_FS_GLOBAL_OTG_FS_GINTMSK_MMISM Mode mismatch interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GINTMSK_MMISM		(1 << 1)

/**@}*/

/** @defgroup otg_fs_global_otg_fs_grxstsr_device OTGFSGRXSTSRDevice OTG_FS Receive status debug read(Device mode)
@{*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_FRMNUM_SHIFT		21
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_FRMNUM_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_grxstsr_device_frmnum FRMNUM Frame number
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_PKTSTS_SHIFT		17
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_PKTSTS_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_grxstsr_device_pktsts PKTSTS Packet status
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_DPID_SHIFT		15
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_DPID_MASK		0x03
/** @defgroup otg_fs_global_otg_fs_grxstsr_device_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_BCNT_SHIFT		4
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_BCNT_MASK		0x7ff
/** @defgroup otg_fs_global_otg_fs_grxstsr_device_bcnt BCNT Byte count
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_EPNUM_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Device_EPNUM_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_grxstsr_device_epnum EPNUM Endpoint number
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_grxstsr_host OTGFSGRXSTSRHost OTG_FS Receive status debug read(Host mode)
@{*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host_PKTSTS_SHIFT		17
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host_PKTSTS_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_grxstsr_host_pktsts PKTSTS Packet status
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host_DPID_SHIFT		15
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host_DPID_MASK		0x03
/** @defgroup otg_fs_global_otg_fs_grxstsr_host_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host_BCNT_SHIFT		4
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host_BCNT_MASK		0x7ff
/** @defgroup otg_fs_global_otg_fs_grxstsr_host_bcnt BCNT Byte count
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host_CHNUM_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSR_Host_CHNUM_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_grxstsr_host_chnum CHNUM Endpoint number
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_grxstsp_device OTGFSGRXSTSPDevice OTG status read and pop register (Device mode)
@{*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_FRMNUM_SHIFT		21
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_FRMNUM_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_grxstsp_device_frmnum FRMNUM Frame number
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_PKTSTS_SHIFT		17
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_PKTSTS_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_grxstsp_device_pktsts PKTSTS Packet status
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_DPID_SHIFT		15
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_DPID_MASK		0x03
/** @defgroup otg_fs_global_otg_fs_grxstsp_device_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_BCNT_SHIFT		4
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_BCNT_MASK		0x7ff
/** @defgroup otg_fs_global_otg_fs_grxstsp_device_bcnt BCNT Byte count
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_EPNUM_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Device_EPNUM_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_grxstsp_device_epnum EPNUM Endpoint number
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_grxstsp_host OTGFSGRXSTSPHost OTG status read and pop register (Host mode)
@{*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host_PKTSTS_SHIFT		17
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host_PKTSTS_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_grxstsp_host_pktsts PKTSTS Packet status
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host_DPID_SHIFT		15
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host_DPID_MASK		0x03
/** @defgroup otg_fs_global_otg_fs_grxstsp_host_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host_BCNT_SHIFT		4
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host_BCNT_MASK		0x7ff
/** @defgroup otg_fs_global_otg_fs_grxstsp_host_bcnt BCNT Byte count
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host_CHNUM_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_GRXSTSP_Host_CHNUM_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_grxstsp_host_chnum CHNUM Channel number
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_grxfsiz OTGFSGRXFSIZ OTG_FS Receive FIFO size register (OTG_FS_GRXFSIZ)
@{*/


#define OTG_FS_GLOBAL_OTG_FS_GRXFSIZ_RXFD_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_GRXFSIZ_RXFD_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_grxfsiz_rxfd RXFD RxFIFO depth
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_dieptxf0_device OTGFSDIEPTXF0Device OTG_FS Endpoint 0 Transmit FIFO size
@{*/


#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF0_Device_TX0FD_SHIFT		16
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF0_Device_TX0FD_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_dieptxf0_device_tx0fd TX0FD Endpoint 0 TxFIFO depth
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF0_Device_TX0FSA_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF0_Device_TX0FSA_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_dieptxf0_device_tx0fsa TX0FSA Endpoint 0 transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_hnptxfsiz_host OTGFSHNPTXFSIZHost OTG_FS Host non-periodic transmit FIFO size register
@{*/


#define OTG_FS_GLOBAL_OTG_FS_HNPTXFSIZ_Host_NPTXFD_SHIFT		16
#define OTG_FS_GLOBAL_OTG_FS_HNPTXFSIZ_Host_NPTXFD_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_hnptxfsiz_host_nptxfd NPTXFD Non-periodic TxFIFO depth
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_HNPTXFSIZ_Host_NPTXFSA_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_HNPTXFSIZ_Host_NPTXFSA_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_hnptxfsiz_host_nptxfsa NPTXFSA Non-periodic transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_hnptxsts OTGFSHNPTXSTS OTG_FS non-periodic transmit FIFO/queue status register (OTG_FS_GNPTXSTS)
@{*/


#define OTG_FS_GLOBAL_OTG_FS_HNPTXSTS_NPTXQTOP_SHIFT		24
#define OTG_FS_GLOBAL_OTG_FS_HNPTXSTS_NPTXQTOP_MASK		0x7f
/** @defgroup otg_fs_global_otg_fs_hnptxsts_nptxqtop NPTXQTOP Top of the non-periodic transmit request queue
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_HNPTXSTS_NPTQXSAV_SHIFT		16
#define OTG_FS_GLOBAL_OTG_FS_HNPTXSTS_NPTQXSAV_MASK		0xff
/** @defgroup otg_fs_global_otg_fs_hnptxsts_nptqxsav NPTQXSAV Non-periodic transmit request queue space available
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_HNPTXSTS_NPTXFSAV_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_HNPTXSTS_NPTXFSAV_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_hnptxsts_nptxfsav NPTXFSAV Non-periodic TxFIFO space available
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_gi2cctl OTGFSGI2CCTL OTG I2C access register
@{*/

/** OTG_FS_GLOBAL_OTG_FS_GI2CCTL_BSYDNE I2C Busy/Done **/
#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL_BSYDNE		(1 << 31)
/** OTG_FS_GLOBAL_OTG_FS_GI2CCTL_RW Read/Write Indicator **/
#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL_RW		(1 << 30)
/** OTG_FS_GLOBAL_OTG_FS_GI2CCTL_I2CDATSE0 I2C DatSe0 USB mode **/
#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL_I2CDATSE0		(1 << 28)

#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL_I2CDEVADR_SHIFT		26
#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL_I2CDEVADR_MASK		0x03
/** @defgroup otg_fs_global_otg_fs_gi2cctl_i2cdevadr I2CDEVADR I2C Device Address
@{*/
/**@}*/

/** OTG_FS_GLOBAL_OTG_FS_GI2CCTL_ACK I2C ACK **/
#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL_ACK		(1 << 24)
/** OTG_FS_GLOBAL_OTG_FS_GI2CCTL_I2CEN I2C Enable **/
#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL_I2CEN		(1 << 23)

#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL_ADDR_SHIFT		16
#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL_ADDR_MASK		0x7f
/** @defgroup otg_fs_global_otg_fs_gi2cctl_addr ADDR I2C Address
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL_REGADDR_SHIFT		8
#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL_REGADDR_MASK		0xff
/** @defgroup otg_fs_global_otg_fs_gi2cctl_regaddr REGADDR I2C Register Address
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL_RWDATA_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_GI2CCTL_RWDATA_MASK		0xff
/** @defgroup otg_fs_global_otg_fs_gi2cctl_rwdata RWDATA I2C Read/Write Data
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_gccfg OTGFSGCCFG OTG_FS general core configuration register (OTG_FS_GCCFG)
@{*/

/** OTG_FS_GLOBAL_OTG_FS_GCCFG_VBDEN USB VBUS detection enable **/
#define OTG_FS_GLOBAL_OTG_FS_GCCFG_VBDEN		(1 << 21)
/** OTG_FS_GLOBAL_OTG_FS_GCCFG_SDEN Secondary detection (SD) mode enable **/
#define OTG_FS_GLOBAL_OTG_FS_GCCFG_SDEN		(1 << 20)
/** OTG_FS_GLOBAL_OTG_FS_GCCFG_PDEN Primary detection (PD) mode enable **/
#define OTG_FS_GLOBAL_OTG_FS_GCCFG_PDEN		(1 << 19)
/** OTG_FS_GLOBAL_OTG_FS_GCCFG_DCDEN Data contact detection (DCD) mode enable **/
#define OTG_FS_GLOBAL_OTG_FS_GCCFG_DCDEN		(1 << 18)
/** OTG_FS_GLOBAL_OTG_FS_GCCFG_BCDEN Battery charging detector (BCD) enable **/
#define OTG_FS_GLOBAL_OTG_FS_GCCFG_BCDEN		(1 << 17)
/** OTG_FS_GLOBAL_OTG_FS_GCCFG_PWRDWN Power down **/
#define OTG_FS_GLOBAL_OTG_FS_GCCFG_PWRDWN		(1 << 16)
/** OTG_FS_GLOBAL_OTG_FS_GCCFG_PS2DET DM pull-up detection status **/
#define OTG_FS_GLOBAL_OTG_FS_GCCFG_PS2DET		(1 << 3)
/** OTG_FS_GLOBAL_OTG_FS_GCCFG_SDET Secondary detection (SD) status **/
#define OTG_FS_GLOBAL_OTG_FS_GCCFG_SDET		(1 << 2)
/** OTG_FS_GLOBAL_OTG_FS_GCCFG_PDET Primary detection (PD) status **/
#define OTG_FS_GLOBAL_OTG_FS_GCCFG_PDET		(1 << 1)
/** OTG_FS_GLOBAL_OTG_FS_GCCFG_DCDET Data contact detection (DCD) status **/
#define OTG_FS_GLOBAL_OTG_FS_GCCFG_DCDET		(1 << 0)

/**@}*/

/** @defgroup otg_fs_global_otg_fs_cid OTGFSCID core ID register
@{*/


#define OTG_FS_GLOBAL_OTG_FS_CID_PRODUCT_ID_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_CID_PRODUCT_ID_MASK		0xffffffff
/** @defgroup otg_fs_global_otg_fs_cid_product_id PRODUCTID Product ID field
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_glpmcfg OTGFSGLPMCFG OTG core LPM configuration register
@{*/

/** OTG_FS_GLOBAL_OTG_FS_GLPMCFG_ENBESL Enable best effort service latency **/
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_ENBESL		(1 << 28)

#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMRCNTSTS_SHIFT		25
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMRCNTSTS_MASK		0x07
/** @defgroup otg_fs_global_otg_fs_glpmcfg_lpmrcntsts LPMRCNTSTS LPM retry count status
@{*/
/**@}*/

/** OTG_FS_GLOBAL_OTG_FS_GLPMCFG_SNDLPM Send LPM transaction **/
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_SNDLPM		(1 << 24)

#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMRCNT_SHIFT		21
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMRCNT_MASK		0x07
/** @defgroup otg_fs_global_otg_fs_glpmcfg_lpmrcnt LPMRCNT LPM retry count
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMCHIDX_SHIFT		17
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMCHIDX_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_glpmcfg_lpmchidx LPMCHIDX LPM Channel Index
@{*/
/**@}*/

/** OTG_FS_GLOBAL_OTG_FS_GLPMCFG_L1RSMOK Sleep State Resume OK **/
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_L1RSMOK		(1 << 16)
/** OTG_FS_GLOBAL_OTG_FS_GLPMCFG_SLPSTS Port sleep status **/
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_SLPSTS		(1 << 15)

#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMRST_SHIFT		13
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMRST_MASK		0x03
/** @defgroup otg_fs_global_otg_fs_glpmcfg_lpmrst LPMRST LPM response
@{*/
/**@}*/

/** OTG_FS_GLOBAL_OTG_FS_GLPMCFG_L1DSEN L1 deep sleep enable **/
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_L1DSEN		(1 << 12)

#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_BESLTHRS_SHIFT		8
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_BESLTHRS_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_glpmcfg_beslthrs BESLTHRS BESL threshold
@{*/
/**@}*/

/** OTG_FS_GLOBAL_OTG_FS_GLPMCFG_L1SSEN L1 Shallow Sleep enable **/
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_L1SSEN		(1 << 7)
/** OTG_FS_GLOBAL_OTG_FS_GLPMCFG_REMWAKE bRemoteWake value **/
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_REMWAKE		(1 << 6)

#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_BESL_SHIFT		2
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_BESL_MASK		0x0f
/** @defgroup otg_fs_global_otg_fs_glpmcfg_besl BESL Best effort service latency
@{*/
/**@}*/

/** OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMACK LPM token acknowledge enable **/
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMACK		(1 << 1)
/** OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMEN LPM support enable **/
#define OTG_FS_GLOBAL_OTG_FS_GLPMCFG_LPMEN		(1 << 0)

/**@}*/

/** @defgroup otg_fs_global_otg_fs_gpwrdn OTGFSGPWRDN OTG power down register
@{*/

/** OTG_FS_GLOBAL_OTG_FS_GPWRDN_ADPIF ADP interrupt flag **/
#define OTG_FS_GLOBAL_OTG_FS_GPWRDN_ADPIF		(1 << 23)
/** OTG_FS_GLOBAL_OTG_FS_GPWRDN_ADPMEN ADP module enable **/
#define OTG_FS_GLOBAL_OTG_FS_GPWRDN_ADPMEN		(1 << 0)

/**@}*/

/** @defgroup otg_fs_global_otg_fs_gadpctl OTGFSGADPCTL OTG ADP timer, control and status register
@{*/


#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_AR_SHIFT		27
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_AR_MASK		0x03
/** @defgroup otg_fs_global_otg_fs_gadpctl_ar AR Access request
@{*/
/**@}*/

/** OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPTOIM ADP timeout interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPTOIM		(1 << 26)
/** OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPSNSIM ADP sense interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPSNSIM		(1 << 25)
/** OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPPRBIM ADP probe interrupt mask **/
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPPRBIM		(1 << 24)
/** OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPTOIF ADP timeout interrupt flag **/
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPTOIF		(1 << 23)
/** OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPSNSIF ADP sense interrupt flag **/
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPSNSIF		(1 << 22)
/** OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPPRBIF ADP probe interrupt flag **/
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPPRBIF		(1 << 21)
/** OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPEN ADP enable **/
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPEN		(1 << 20)
/** OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPRST ADP reset **/
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_ADPRST		(1 << 19)
/** OTG_FS_GLOBAL_OTG_FS_GADPCTL_ENASNS Enable sense **/
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_ENASNS		(1 << 18)
/** OTG_FS_GLOBAL_OTG_FS_GADPCTL_ENAPRB Enable probe **/
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_ENAPRB		(1 << 17)

#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_RTIM_SHIFT		6
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_RTIM_MASK		0x7ff
/** @defgroup otg_fs_global_otg_fs_gadpctl_rtim RTIM Ramp time
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_PRBPER_SHIFT		4
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_PRBPER_MASK		0x03
/** @defgroup otg_fs_global_otg_fs_gadpctl_prbper PRBPER Probe period
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_PRBDELTA_SHIFT		2
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_PRBDELTA_MASK		0x03
/** @defgroup otg_fs_global_otg_fs_gadpctl_prbdelta PRBDELTA Probe delta
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_PRBDSCHG_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_GADPCTL_PRBDSCHG_MASK		0x03
/** @defgroup otg_fs_global_otg_fs_gadpctl_prbdschg PRBDSCHG Probe discharge
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_hptxfsiz OTGFSHPTXFSIZ OTG_FS Host periodic transmit FIFO size register (OTG_FS_HPTXFSIZ)
@{*/


#define OTG_FS_GLOBAL_OTG_FS_HPTXFSIZ_PTXFSIZ_SHIFT		16
#define OTG_FS_GLOBAL_OTG_FS_HPTXFSIZ_PTXFSIZ_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_hptxfsiz_ptxfsiz PTXFSIZ Host periodic TxFIFO depth
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_HPTXFSIZ_PTXSA_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_HPTXFSIZ_PTXSA_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_hptxfsiz_ptxsa PTXSA Host periodic TxFIFO start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_dieptxf1 OTGFSDIEPTXF1 OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF1)
@{*/


#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF1_INEPTXFD_SHIFT		16
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF1_INEPTXFD_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_dieptxf1_ineptxfd INEPTXFD IN endpoint TxFIFO depth
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF1_INEPTXSA_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF1_INEPTXSA_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_dieptxf1_ineptxsa INEPTXSA IN endpoint FIFO2 transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_dieptxf2 OTGFSDIEPTXF2 OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF2)
@{*/


#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF2_INEPTXFD_SHIFT		16
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF2_INEPTXFD_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_dieptxf2_ineptxfd INEPTXFD IN endpoint TxFIFO depth
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF2_INEPTXSA_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF2_INEPTXSA_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_dieptxf2_ineptxsa INEPTXSA IN endpoint FIFO3 transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_dieptxf3 OTGFSDIEPTXF3 OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF3)
@{*/


#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF3_INEPTXFD_SHIFT		16
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF3_INEPTXFD_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_dieptxf3_ineptxfd INEPTXFD IN endpoint TxFIFO depth
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF3_INEPTXSA_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF3_INEPTXSA_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_dieptxf3_ineptxsa INEPTXSA IN endpoint FIFO4 transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_dieptxf4 OTGFSDIEPTXF4 OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF4)
@{*/


#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF4_INEPTXFD_SHIFT		16
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF4_INEPTXFD_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_dieptxf4_ineptxfd INEPTXFD IN endpoint Tx FIFO depth
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF4_INEPTXSA_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF4_INEPTXSA_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_dieptxf4_ineptxsa INEPTXSA IN endpoint FIFOx transmit RAM start address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_fs_global_otg_fs_dieptxf5 OTGFSDIEPTXF5 OTG_FS device IN endpoint transmit FIFO size register (OTG_FS_DIEPTXF5)
@{*/


#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF5_INEPTXFD_SHIFT		16
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF5_INEPTXFD_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_dieptxf5_ineptxfd INEPTXFD IN endpoint Tx FIFO depth
@{*/
/**@}*/


#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF5_INEPTXSA_SHIFT		0
#define OTG_FS_GLOBAL_OTG_FS_DIEPTXF5_INEPTXSA_MASK		0xffff
/** @defgroup otg_fs_global_otg_fs_dieptxf5_ineptxsa INEPTXSA IN endpoint FIFOx transmit RAM start address
@{*/
/**@}*/


/**@}*/

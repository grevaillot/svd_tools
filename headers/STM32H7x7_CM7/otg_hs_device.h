#pragma once 

/* --- OTG_HS_DEVICE: USB on the go high speed ---------------------- */

/** @defgroup otg_hs_device_registers USB on the go high speed Register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DCFG OTG_HS device configuration register **/
#define OTG_HS_DEVICE_OTG_HS_DCFG			MMIO32(OTG_HS_DEVICE_BASE + 0x00)
/** OTG_HS_DEVICE_OTG_HS_DCTL OTG_HS device control register **/
#define OTG_HS_DEVICE_OTG_HS_DCTL			MMIO32(OTG_HS_DEVICE_BASE + 0x04)
/** OTG_HS_DEVICE_OTG_HS_DSTS OTG_HS device status register **/
#define OTG_HS_DEVICE_OTG_HS_DSTS			MMIO32(OTG_HS_DEVICE_BASE + 0x08)
/** OTG_HS_DEVICE_OTG_HS_DIEPMSK OTG_HS device IN endpoint common interrupt mask register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPMSK			MMIO32(OTG_HS_DEVICE_BASE + 0x10)
/** OTG_HS_DEVICE_OTG_HS_DOEPMSK OTG_HS device OUT endpoint common interrupt mask register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPMSK			MMIO32(OTG_HS_DEVICE_BASE + 0x14)
/** OTG_HS_DEVICE_OTG_HS_DAINT OTG_HS device all endpoints interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DAINT			MMIO32(OTG_HS_DEVICE_BASE + 0x18)
/** OTG_HS_DEVICE_OTG_HS_DAINTMSK OTG_HS all endpoints interrupt mask register **/
#define OTG_HS_DEVICE_OTG_HS_DAINTMSK			MMIO32(OTG_HS_DEVICE_BASE + 0x1c)
/** OTG_HS_DEVICE_OTG_HS_DVBUSDIS OTG_HS device VBUS discharge time register **/
#define OTG_HS_DEVICE_OTG_HS_DVBUSDIS			MMIO32(OTG_HS_DEVICE_BASE + 0x28)
/** OTG_HS_DEVICE_OTG_HS_DVBUSPULSE OTG_HS device VBUS pulsing time register **/
#define OTG_HS_DEVICE_OTG_HS_DVBUSPULSE			MMIO32(OTG_HS_DEVICE_BASE + 0x2c)
/** OTG_HS_DEVICE_OTG_HS_DTHRCTL OTG_HS Device threshold control register **/
#define OTG_HS_DEVICE_OTG_HS_DTHRCTL			MMIO32(OTG_HS_DEVICE_BASE + 0x30)
/** OTG_HS_DEVICE_OTG_HS_DIEPEMPMSK OTG_HS device IN endpoint FIFO empty interrupt mask register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPEMPMSK			MMIO32(OTG_HS_DEVICE_BASE + 0x34)
/** OTG_HS_DEVICE_OTG_HS_DEACHINT OTG_HS device each endpoint interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DEACHINT			MMIO32(OTG_HS_DEVICE_BASE + 0x38)
/** OTG_HS_DEVICE_OTG_HS_DEACHINTMSK OTG_HS device each endpoint interrupt register mask **/
#define OTG_HS_DEVICE_OTG_HS_DEACHINTMSK			MMIO32(OTG_HS_DEVICE_BASE + 0x3c)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL0 OTG device endpoint-0 control register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0			MMIO32(OTG_HS_DEVICE_BASE + 0x100)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT0 OTG device endpoint-0 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT0			MMIO32(OTG_HS_DEVICE_BASE + 0x108)
/** OTG_HS_DEVICE_OTG_HS_DIEPTSIZ0 OTG_HS device IN endpoint 0 transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ0			MMIO32(OTG_HS_DEVICE_BASE + 0x110)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA0 OTG_HS device endpoint-1 DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA0			MMIO32(OTG_HS_DEVICE_BASE + 0x114)
/** OTG_HS_DEVICE_OTG_HS_DTXFSTS0 OTG_HS device IN endpoint transmit FIFO status register **/
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS0			MMIO32(OTG_HS_DEVICE_BASE + 0x118)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL1 OTG device endpoint-1 control register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1			MMIO32(OTG_HS_DEVICE_BASE + 0x120)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT1 OTG device endpoint-1 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT1			MMIO32(OTG_HS_DEVICE_BASE + 0x128)
/** OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1 OTG_HS device endpoint transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1			MMIO32(OTG_HS_DEVICE_BASE + 0x130)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA1 OTG_HS device endpoint-2 DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA1			MMIO32(OTG_HS_DEVICE_BASE + 0x134)
/** OTG_HS_DEVICE_OTG_HS_DTXFSTS1 OTG_HS device IN endpoint transmit FIFO status register **/
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS1			MMIO32(OTG_HS_DEVICE_BASE + 0x138)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL2 OTG device endpoint-2 control register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2			MMIO32(OTG_HS_DEVICE_BASE + 0x140)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT2 OTG device endpoint-2 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT2			MMIO32(OTG_HS_DEVICE_BASE + 0x148)
/** OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2 OTG_HS device endpoint transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2			MMIO32(OTG_HS_DEVICE_BASE + 0x150)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA2 OTG_HS device endpoint-3 DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA2			MMIO32(OTG_HS_DEVICE_BASE + 0x154)
/** OTG_HS_DEVICE_OTG_HS_DTXFSTS2 OTG_HS device IN endpoint transmit FIFO status register **/
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS2			MMIO32(OTG_HS_DEVICE_BASE + 0x158)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL3 OTG device endpoint-3 control register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3			MMIO32(OTG_HS_DEVICE_BASE + 0x160)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT3 OTG device endpoint-3 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT3			MMIO32(OTG_HS_DEVICE_BASE + 0x168)
/** OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3 OTG_HS device endpoint transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3			MMIO32(OTG_HS_DEVICE_BASE + 0x170)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA3 OTG_HS device endpoint-4 DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA3			MMIO32(OTG_HS_DEVICE_BASE + 0x174)
/** OTG_HS_DEVICE_OTG_HS_DTXFSTS3 OTG_HS device IN endpoint transmit FIFO status register **/
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS3			MMIO32(OTG_HS_DEVICE_BASE + 0x178)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL4 OTG device endpoint-4 control register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4			MMIO32(OTG_HS_DEVICE_BASE + 0x180)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT4 OTG device endpoint-4 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT4			MMIO32(OTG_HS_DEVICE_BASE + 0x188)
/** OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4 OTG_HS device endpoint transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4			MMIO32(OTG_HS_DEVICE_BASE + 0x190)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA4 OTG_HS device endpoint-5 DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA4			MMIO32(OTG_HS_DEVICE_BASE + 0x194)
/** OTG_HS_DEVICE_OTG_HS_DTXFSTS4 OTG_HS device IN endpoint transmit FIFO status register **/
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS4			MMIO32(OTG_HS_DEVICE_BASE + 0x198)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL5 OTG device endpoint-5 control register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5			MMIO32(OTG_HS_DEVICE_BASE + 0x1a0)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT5 OTG device endpoint-5 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT5			MMIO32(OTG_HS_DEVICE_BASE + 0x1a8)
/** OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5 OTG_HS device endpoint transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5			MMIO32(OTG_HS_DEVICE_BASE + 0x1b0)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA5 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA5			MMIO32(OTG_HS_DEVICE_BASE + 0x1b4)
/** OTG_HS_DEVICE_OTG_HS_DTXFSTS5 OTG_HS device IN endpoint transmit FIFO status register **/
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS5			MMIO32(OTG_HS_DEVICE_BASE + 0x1b8)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL6 OTG device endpoint-6 control register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6			MMIO32(OTG_HS_DEVICE_BASE + 0x1c0)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT6 OTG device endpoint-6 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT6			MMIO32(OTG_HS_DEVICE_BASE + 0x1c8)
/** OTG_HS_DEVICE_OTG_HS_DIEPTSIZ6 OTG_HS device endpoint transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ6			MMIO32(OTG_HS_DEVICE_BASE + 0x1d0)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA6 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA6			MMIO32(OTG_HS_DEVICE_BASE + 0x1d4)
/** OTG_HS_DEVICE_OTG_HS_DTXFSTS6 OTG_HS device IN endpoint transmit FIFO status register **/
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS6			MMIO32(OTG_HS_DEVICE_BASE + 0x1d8)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL7 OTG device endpoint-7 control register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7			MMIO32(OTG_HS_DEVICE_BASE + 0x1e0)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT7 OTG device endpoint-7 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT7			MMIO32(OTG_HS_DEVICE_BASE + 0x1e8)
/** OTG_HS_DEVICE_OTG_HS_DIEPTSIZ7 OTG_HS device endpoint transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ7			MMIO32(OTG_HS_DEVICE_BASE + 0x1f0)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA7 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA7			MMIO32(OTG_HS_DEVICE_BASE + 0x1f4)
/** OTG_HS_DEVICE_OTG_HS_DTXFSTS7 OTG_HS device IN endpoint transmit FIFO status register **/
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS7			MMIO32(OTG_HS_DEVICE_BASE + 0x1f8)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA8 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA8			MMIO32(OTG_HS_DEVICE_BASE + 0x214)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA9 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA9			MMIO32(OTG_HS_DEVICE_BASE + 0x234)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA10 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA10			MMIO32(OTG_HS_DEVICE_BASE + 0x254)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA11 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA11			MMIO32(OTG_HS_DEVICE_BASE + 0x274)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA12 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA12			MMIO32(OTG_HS_DEVICE_BASE + 0x294)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA13 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA13			MMIO32(OTG_HS_DEVICE_BASE + 0x2b4)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA14 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA14			MMIO32(OTG_HS_DEVICE_BASE + 0x2d4)
/** OTG_HS_DEVICE_OTG_HS_DIEPDMA15 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA15			MMIO32(OTG_HS_DEVICE_BASE + 0x2f4)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL0 OTG_HS device control OUT endpoint 0 control register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL0			MMIO32(OTG_HS_DEVICE_BASE + 0x300)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT0 OTG_HS device endpoint-0 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT0			MMIO32(OTG_HS_DEVICE_BASE + 0x308)
/** OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0 OTG_HS device endpoint-0 transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0			MMIO32(OTG_HS_DEVICE_BASE + 0x310)
/** OTG_HS_DEVICE_OTG_HS_DOEPDMA0 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPDMA0			MMIO32(OTG_HS_DEVICE_BASE + 0x314)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL1 OTG device endpoint-1 control register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1			MMIO32(OTG_HS_DEVICE_BASE + 0x320)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT1 OTG_HS device endpoint-1 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT1			MMIO32(OTG_HS_DEVICE_BASE + 0x328)
/** OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1 OTG_HS device endpoint-1 transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1			MMIO32(OTG_HS_DEVICE_BASE + 0x330)
/** OTG_HS_DEVICE_OTG_HS_DOEPDMA1 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPDMA1			MMIO32(OTG_HS_DEVICE_BASE + 0x334)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL2 OTG device endpoint-2 control register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2			MMIO32(OTG_HS_DEVICE_BASE + 0x340)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT2 OTG_HS device endpoint-2 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT2			MMIO32(OTG_HS_DEVICE_BASE + 0x348)
/** OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2 OTG_HS device endpoint-2 transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2			MMIO32(OTG_HS_DEVICE_BASE + 0x350)
/** OTG_HS_DEVICE_OTG_HS_DOEPDMA2 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPDMA2			MMIO32(OTG_HS_DEVICE_BASE + 0x354)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL3 OTG device endpoint-3 control register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3			MMIO32(OTG_HS_DEVICE_BASE + 0x360)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT3 OTG_HS device endpoint-3 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT3			MMIO32(OTG_HS_DEVICE_BASE + 0x368)
/** OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3 OTG_HS device endpoint-3 transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3			MMIO32(OTG_HS_DEVICE_BASE + 0x370)
/** OTG_HS_DEVICE_OTG_HS_DOEPDMA3 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPDMA3			MMIO32(OTG_HS_DEVICE_BASE + 0x374)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL4 OTG device endpoint-4 control register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4			MMIO32(OTG_HS_DEVICE_BASE + 0x380)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT4 OTG_HS device endpoint-4 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT4			MMIO32(OTG_HS_DEVICE_BASE + 0x388)
/** OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4 OTG_HS device endpoint-4 transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4			MMIO32(OTG_HS_DEVICE_BASE + 0x390)
/** OTG_HS_DEVICE_OTG_HS_DOEPDMA4 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPDMA4			MMIO32(OTG_HS_DEVICE_BASE + 0x394)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL5 OTG device endpoint-5 control register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5			MMIO32(OTG_HS_DEVICE_BASE + 0x3a0)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT5 OTG_HS device endpoint-5 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT5			MMIO32(OTG_HS_DEVICE_BASE + 0x3a8)
/** OTG_HS_DEVICE_OTG_HS_DOEPTSIZ5 OTG_HS device endpoint-5 transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ5			MMIO32(OTG_HS_DEVICE_BASE + 0x3b0)
/** OTG_HS_DEVICE_OTG_HS_DOEPDMA5 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPDMA5			MMIO32(OTG_HS_DEVICE_BASE + 0x3b4)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL6 OTG device endpoint-6 control register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6			MMIO32(OTG_HS_DEVICE_BASE + 0x3c0)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT6 OTG_HS device endpoint-6 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT6			MMIO32(OTG_HS_DEVICE_BASE + 0x3c8)
/** OTG_HS_DEVICE_OTG_HS_DOEPTSIZ6 OTG_HS device endpoint-6 transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ6			MMIO32(OTG_HS_DEVICE_BASE + 0x3d0)
/** OTG_HS_DEVICE_OTG_HS_DOEPDMA6 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPDMA6			MMIO32(OTG_HS_DEVICE_BASE + 0x3d4)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL7 OTG device endpoint-7 control register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7			MMIO32(OTG_HS_DEVICE_BASE + 0x3e0)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT7 OTG_HS device endpoint-7 interrupt register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT7			MMIO32(OTG_HS_DEVICE_BASE + 0x3e8)
/** OTG_HS_DEVICE_OTG_HS_DOEPTSIZ7 OTG_HS device endpoint-7 transfer size register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ7			MMIO32(OTG_HS_DEVICE_BASE + 0x3f0)
/** OTG_HS_DEVICE_OTG_HS_DOEPDMA7 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPDMA7			MMIO32(OTG_HS_DEVICE_BASE + 0x3f4)
/** OTG_HS_DEVICE_OTG_HS_DOEPDMA8 OTG Device channel-x DMA address register **/
#define OTG_HS_DEVICE_OTG_HS_DOEPDMA8			MMIO32(OTG_HS_DEVICE_BASE + 0x414)

/**@}*/


/** @defgroup otg_hs_device_otg_hs_dcfg OTGHSDCFG OTG_HS device configuration register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DCFG_PERSCHIVL_SHIFT		24
#define OTG_HS_DEVICE_OTG_HS_DCFG_PERSCHIVL_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_dcfg_perschivl PERSCHIVL Periodic scheduling interval
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DCFG_PFIVL_SHIFT		11
#define OTG_HS_DEVICE_OTG_HS_DCFG_PFIVL_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_dcfg_pfivl PFIVL Periodic (micro)frame interval
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DCFG_DAD_SHIFT		4
#define OTG_HS_DEVICE_OTG_HS_DCFG_DAD_MASK		0x7f
/** @defgroup otg_hs_device_otg_hs_dcfg_dad DAD Device address
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DCFG_NZLSOHSK Nonzero-length status OUT handshake **/
#define OTG_HS_DEVICE_OTG_HS_DCFG_NZLSOHSK		(1 << 2)

#define OTG_HS_DEVICE_OTG_HS_DCFG_DSPD_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DCFG_DSPD_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_dcfg_dspd DSPD Device speed
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_dctl OTGHSDCTL OTG_HS device control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DCTL_POPRGDNE Power-on programming done **/
#define OTG_HS_DEVICE_OTG_HS_DCTL_POPRGDNE		(1 << 11)
/** OTG_HS_DEVICE_OTG_HS_DCTL_CGONAK Clear global OUT NAK **/
#define OTG_HS_DEVICE_OTG_HS_DCTL_CGONAK		(1 << 10)
/** OTG_HS_DEVICE_OTG_HS_DCTL_SGONAK Set global OUT NAK **/
#define OTG_HS_DEVICE_OTG_HS_DCTL_SGONAK		(1 << 9)
/** OTG_HS_DEVICE_OTG_HS_DCTL_CGINAK Clear global IN NAK **/
#define OTG_HS_DEVICE_OTG_HS_DCTL_CGINAK		(1 << 8)
/** OTG_HS_DEVICE_OTG_HS_DCTL_SGINAK Set global IN NAK **/
#define OTG_HS_DEVICE_OTG_HS_DCTL_SGINAK		(1 << 7)

#define OTG_HS_DEVICE_OTG_HS_DCTL_TCTL_SHIFT		4
#define OTG_HS_DEVICE_OTG_HS_DCTL_TCTL_MASK		0x07
/** @defgroup otg_hs_device_otg_hs_dctl_tctl TCTL Test control
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DCTL_GONSTS Global OUT NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DCTL_GONSTS		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DCTL_GINSTS Global IN NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DCTL_GINSTS		(1 << 2)
/** OTG_HS_DEVICE_OTG_HS_DCTL_SDIS Soft disconnect **/
#define OTG_HS_DEVICE_OTG_HS_DCTL_SDIS		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DCTL_RWUSIG Remote wakeup signaling **/
#define OTG_HS_DEVICE_OTG_HS_DCTL_RWUSIG		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_dsts OTGHSDSTS OTG_HS device status register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DSTS_FNSOF_SHIFT		8
#define OTG_HS_DEVICE_OTG_HS_DSTS_FNSOF_MASK		0x3fff
/** @defgroup otg_hs_device_otg_hs_dsts_fnsof FNSOF Frame number of the received SOF
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DSTS_EERR Erratic error **/
#define OTG_HS_DEVICE_OTG_HS_DSTS_EERR		(1 << 3)

#define OTG_HS_DEVICE_OTG_HS_DSTS_ENUMSPD_SHIFT		1
#define OTG_HS_DEVICE_OTG_HS_DSTS_ENUMSPD_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_dsts_enumspd ENUMSPD Enumerated speed
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DSTS_SUSPSTS Suspend status **/
#define OTG_HS_DEVICE_OTG_HS_DSTS_SUSPSTS		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepmsk OTGHSDIEPMSK OTG_HS device IN endpoint common interrupt mask register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPMSK_BIM BNA interrupt mask **/
#define OTG_HS_DEVICE_OTG_HS_DIEPMSK_BIM		(1 << 9)
/** OTG_HS_DEVICE_OTG_HS_DIEPMSK_TXFURM FIFO underrun mask **/
#define OTG_HS_DEVICE_OTG_HS_DIEPMSK_TXFURM		(1 << 8)
/** OTG_HS_DEVICE_OTG_HS_DIEPMSK_INEPNEM IN endpoint NAK effective mask **/
#define OTG_HS_DEVICE_OTG_HS_DIEPMSK_INEPNEM		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DIEPMSK_INEPNMM IN token received with EP mismatch mask **/
#define OTG_HS_DEVICE_OTG_HS_DIEPMSK_INEPNMM		(1 << 5)
/** OTG_HS_DEVICE_OTG_HS_DIEPMSK_ITTXFEMSK IN token received when TxFIFO empty mask **/
#define OTG_HS_DEVICE_OTG_HS_DIEPMSK_ITTXFEMSK		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DIEPMSK_TOM Timeout condition mask (nonisochronous endpoints) **/
#define OTG_HS_DEVICE_OTG_HS_DIEPMSK_TOM		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DIEPMSK_EPDM Endpoint disabled interrupt mask **/
#define OTG_HS_DEVICE_OTG_HS_DIEPMSK_EPDM		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DIEPMSK_XFRCM Transfer completed interrupt mask **/
#define OTG_HS_DEVICE_OTG_HS_DIEPMSK_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepmsk OTGHSDOEPMSK OTG_HS device OUT endpoint common interrupt mask register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPMSK_BOIM BNA interrupt mask **/
#define OTG_HS_DEVICE_OTG_HS_DOEPMSK_BOIM		(1 << 9)
/** OTG_HS_DEVICE_OTG_HS_DOEPMSK_OPEM OUT packet error mask **/
#define OTG_HS_DEVICE_OTG_HS_DOEPMSK_OPEM		(1 << 8)
/** OTG_HS_DEVICE_OTG_HS_DOEPMSK_B2BSTUP Back-to-back SETUP packets received mask **/
#define OTG_HS_DEVICE_OTG_HS_DOEPMSK_B2BSTUP		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DOEPMSK_OTEPDM OUT token received when endpoint disabled mask **/
#define OTG_HS_DEVICE_OTG_HS_DOEPMSK_OTEPDM		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DOEPMSK_STUPM SETUP phase done mask **/
#define OTG_HS_DEVICE_OTG_HS_DOEPMSK_STUPM		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DOEPMSK_EPDM Endpoint disabled interrupt mask **/
#define OTG_HS_DEVICE_OTG_HS_DOEPMSK_EPDM		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DOEPMSK_XFRCM Transfer completed interrupt mask **/
#define OTG_HS_DEVICE_OTG_HS_DOEPMSK_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_daint OTGHSDAINT OTG_HS device all endpoints interrupt register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DAINT_OEPINT_SHIFT		16
#define OTG_HS_DEVICE_OTG_HS_DAINT_OEPINT_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_daint_oepint OEPINT OUT endpoint interrupt bits
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DAINT_IEPINT_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DAINT_IEPINT_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_daint_iepint IEPINT IN endpoint interrupt bits
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_daintmsk OTGHSDAINTMSK OTG_HS all endpoints interrupt mask register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DAINTMSK_OEPM_SHIFT		16
#define OTG_HS_DEVICE_OTG_HS_DAINTMSK_OEPM_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_daintmsk_oepm OEPM OUT EP interrupt mask bits
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DAINTMSK_IEPM_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DAINTMSK_IEPM_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_daintmsk_iepm IEPM IN EP interrupt mask bits
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_dvbusdis OTGHSDVBUSDIS OTG_HS device VBUS discharge time register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DVBUSDIS_VBUSDT_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DVBUSDIS_VBUSDT_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_dvbusdis_vbusdt VBUSDT Device VBUS discharge time
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_dvbuspulse OTGHSDVBUSPULSE OTG_HS device VBUS pulsing time register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DVBUSPULSE_DVBUSP_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DVBUSPULSE_DVBUSP_MASK		0xfff
/** @defgroup otg_hs_device_otg_hs_dvbuspulse_dvbusp DVBUSP Device VBUS pulsing time
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_dthrctl OTGHSDTHRCTL OTG_HS Device threshold control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DTHRCTL_ARPEN Arbiter parking enable **/
#define OTG_HS_DEVICE_OTG_HS_DTHRCTL_ARPEN		(1 << 27)

#define OTG_HS_DEVICE_OTG_HS_DTHRCTL_RXTHRLEN_SHIFT		17
#define OTG_HS_DEVICE_OTG_HS_DTHRCTL_RXTHRLEN_MASK		0x1ff
/** @defgroup otg_hs_device_otg_hs_dthrctl_rxthrlen RXTHRLEN Receive threshold length
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DTHRCTL_RXTHREN Receive threshold enable **/
#define OTG_HS_DEVICE_OTG_HS_DTHRCTL_RXTHREN		(1 << 16)

#define OTG_HS_DEVICE_OTG_HS_DTHRCTL_TXTHRLEN_SHIFT		2
#define OTG_HS_DEVICE_OTG_HS_DTHRCTL_TXTHRLEN_MASK		0x1ff
/** @defgroup otg_hs_device_otg_hs_dthrctl_txthrlen TXTHRLEN Transmit threshold length
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DTHRCTL_ISOTHREN ISO IN endpoint threshold enable **/
#define OTG_HS_DEVICE_OTG_HS_DTHRCTL_ISOTHREN		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DTHRCTL_NONISOTHREN Nonisochronous IN endpoints threshold enable **/
#define OTG_HS_DEVICE_OTG_HS_DTHRCTL_NONISOTHREN		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepempmsk OTGHSDIEPEMPMSK OTG_HS device IN endpoint FIFO empty interrupt mask register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPEMPMSK_INEPTXFEM_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPEMPMSK_INEPTXFEM_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_diepempmsk_ineptxfem INEPTXFEM IN EP Tx FIFO empty interrupt mask bits
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_deachint OTGHSDEACHINT OTG_HS device each endpoint interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DEACHINT_OEP1INT OUT endpoint 1 interrupt bit **/
#define OTG_HS_DEVICE_OTG_HS_DEACHINT_OEP1INT		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DEACHINT_IEP1INT IN endpoint 1interrupt bit **/
#define OTG_HS_DEVICE_OTG_HS_DEACHINT_IEP1INT		(1 << 1)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_deachintmsk OTGHSDEACHINTMSK OTG_HS device each endpoint interrupt register mask
@{*/

/** OTG_HS_DEVICE_OTG_HS_DEACHINTMSK_OEP1INTM OUT Endpoint 1 interrupt mask bit **/
#define OTG_HS_DEVICE_OTG_HS_DEACHINTMSK_OEP1INTM		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DEACHINTMSK_IEP1INTM IN Endpoint 1 interrupt mask bit **/
#define OTG_HS_DEVICE_OTG_HS_DEACHINTMSK_IEP1INTM		(1 << 1)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepctl0 OTGHSDIEPCTL0 OTG device endpoint-0 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SD0PID_SEVNFRM Set DATA0 PID **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL0_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_CNAK		(1 << 26)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_SHIFT		22
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_TXFNUM_MASK		0x0f
/** @defgroup otg_hs_device_otg_hs_diepctl0_txfnum TXFNUM TxFIFO number
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL0_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_Stall		(1 << 21)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_diepctl0_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL0_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EONUM_DPID Even/odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL0_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL0_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_diepctl0_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepint0 OTGHSDIEPINT0 OTG device endpoint-0 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPINT0_NAK NAK interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT0_NAK		(1 << 13)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT0_BERR Babble error interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT0_BERR		(1 << 12)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT0_PKTDRPSTS Packet dropped status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT0_PKTDRPSTS		(1 << 11)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT0_BNA Buffer not available interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT0_BNA		(1 << 9)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT0_TXFIFOUDRN Transmit Fifo Underrun **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT0_TXFIFOUDRN		(1 << 8)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT0_TXFE Transmit FIFO empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT0_TXFE		(1 << 7)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT0_INEPNE IN endpoint NAK effective **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT0_INEPNE		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT0_ITTXFE IN token received when TxFIFO is empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT0_ITTXFE		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT0_TOC Timeout condition **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT0_TOC		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT0_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT0_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT0_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT0_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_dieptsiz0 OTGHSDIEPTSIZ0 OTG_HS device IN endpoint 0 transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ0_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ0_PKTCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_dieptsiz0_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ0_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ0_XFRSIZ_MASK		0x7f
/** @defgroup otg_hs_device_otg_hs_dieptsiz0_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma0 OTGHSDIEPDMA0 OTG_HS device endpoint-1 DMA address register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPDMA0_DMAADDR_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA0_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_device_otg_hs_diepdma0_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_dtxfsts0 OTGHSDTXFSTS0 OTG_HS device IN endpoint transmit FIFO status register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DTXFSTS0_INEPTFSAV_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS0_INEPTFSAV_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_dtxfsts0_ineptfsav INEPTFSAV IN endpoint TxFIFO space avail
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepctl1 OTGHSDIEPCTL1 OTG device endpoint-1 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SD0PID_SEVNFRM Set DATA0 PID **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL1_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_CNAK		(1 << 26)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_SHIFT		22
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_TXFNUM_MASK		0x0f
/** @defgroup otg_hs_device_otg_hs_diepctl1_txfnum TXFNUM TxFIFO number
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL1_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_Stall		(1 << 21)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_diepctl1_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL1_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EONUM_DPID Even/odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL1_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL1_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_diepctl1_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepint1 OTGHSDIEPINT1 OTG device endpoint-1 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPINT1_NAK NAK interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT1_NAK		(1 << 13)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT1_BERR Babble error interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT1_BERR		(1 << 12)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT1_PKTDRPSTS Packet dropped status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT1_PKTDRPSTS		(1 << 11)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT1_BNA Buffer not available interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT1_BNA		(1 << 9)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT1_TXFIFOUDRN Transmit Fifo Underrun **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT1_TXFIFOUDRN		(1 << 8)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT1_TXFE Transmit FIFO empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT1_TXFE		(1 << 7)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT1_INEPNE IN endpoint NAK effective **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT1_INEPNE		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT1_ITTXFE IN token received when TxFIFO is empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT1_ITTXFE		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT1_TOC Timeout condition **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT1_TOC		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT1_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT1_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT1_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT1_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_dieptsiz1 OTGHSDIEPTSIZ1 OTG_HS device endpoint transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1_MCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1_MCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_dieptsiz1_mcnt MCNT Multi count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_dieptsiz1_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ1_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_dieptsiz1_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma1 OTGHSDIEPDMA1 OTG_HS device endpoint-2 DMA address register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPDMA1_DMAADDR_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA1_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_device_otg_hs_diepdma1_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_dtxfsts1 OTGHSDTXFSTS1 OTG_HS device IN endpoint transmit FIFO status register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DTXFSTS1_INEPTFSAV_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS1_INEPTFSAV_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_dtxfsts1_ineptfsav INEPTFSAV IN endpoint TxFIFO space avail
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepctl2 OTGHSDIEPCTL2 OTG device endpoint-2 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SD0PID_SEVNFRM Set DATA0 PID **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL2_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_CNAK		(1 << 26)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_SHIFT		22
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_TXFNUM_MASK		0x0f
/** @defgroup otg_hs_device_otg_hs_diepctl2_txfnum TXFNUM TxFIFO number
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL2_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_Stall		(1 << 21)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_diepctl2_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL2_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EONUM_DPID Even/odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL2_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL2_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_diepctl2_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepint2 OTGHSDIEPINT2 OTG device endpoint-2 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPINT2_NAK NAK interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT2_NAK		(1 << 13)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT2_BERR Babble error interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT2_BERR		(1 << 12)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT2_PKTDRPSTS Packet dropped status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT2_PKTDRPSTS		(1 << 11)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT2_BNA Buffer not available interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT2_BNA		(1 << 9)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT2_TXFIFOUDRN Transmit Fifo Underrun **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT2_TXFIFOUDRN		(1 << 8)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT2_TXFE Transmit FIFO empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT2_TXFE		(1 << 7)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT2_INEPNE IN endpoint NAK effective **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT2_INEPNE		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT2_ITTXFE IN token received when TxFIFO is empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT2_ITTXFE		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT2_TOC Timeout condition **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT2_TOC		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT2_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT2_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT2_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT2_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_dieptsiz2 OTGHSDIEPTSIZ2 OTG_HS device endpoint transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2_MCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2_MCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_dieptsiz2_mcnt MCNT Multi count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_dieptsiz2_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ2_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_dieptsiz2_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma2 OTGHSDIEPDMA2 OTG_HS device endpoint-3 DMA address register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPDMA2_DMAADDR_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA2_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_device_otg_hs_diepdma2_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_dtxfsts2 OTGHSDTXFSTS2 OTG_HS device IN endpoint transmit FIFO status register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DTXFSTS2_INEPTFSAV_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS2_INEPTFSAV_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_dtxfsts2_ineptfsav INEPTFSAV IN endpoint TxFIFO space avail
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepctl3 OTGHSDIEPCTL3 OTG device endpoint-3 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SD0PID_SEVNFRM Set DATA0 PID **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL3_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_CNAK		(1 << 26)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_SHIFT		22
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_TXFNUM_MASK		0x0f
/** @defgroup otg_hs_device_otg_hs_diepctl3_txfnum TXFNUM TxFIFO number
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL3_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_Stall		(1 << 21)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_diepctl3_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL3_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EONUM_DPID Even/odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL3_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL3_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_diepctl3_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepint3 OTGHSDIEPINT3 OTG device endpoint-3 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPINT3_NAK NAK interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT3_NAK		(1 << 13)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT3_BERR Babble error interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT3_BERR		(1 << 12)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT3_PKTDRPSTS Packet dropped status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT3_PKTDRPSTS		(1 << 11)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT3_BNA Buffer not available interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT3_BNA		(1 << 9)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT3_TXFIFOUDRN Transmit Fifo Underrun **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT3_TXFIFOUDRN		(1 << 8)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT3_TXFE Transmit FIFO empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT3_TXFE		(1 << 7)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT3_INEPNE IN endpoint NAK effective **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT3_INEPNE		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT3_ITTXFE IN token received when TxFIFO is empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT3_ITTXFE		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT3_TOC Timeout condition **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT3_TOC		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT3_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT3_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT3_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT3_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_dieptsiz3 OTGHSDIEPTSIZ3 OTG_HS device endpoint transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3_MCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3_MCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_dieptsiz3_mcnt MCNT Multi count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_dieptsiz3_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ3_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_dieptsiz3_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma3 OTGHSDIEPDMA3 OTG_HS device endpoint-4 DMA address register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPDMA3_DMAADDR_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA3_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_device_otg_hs_diepdma3_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_dtxfsts3 OTGHSDTXFSTS3 OTG_HS device IN endpoint transmit FIFO status register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DTXFSTS3_INEPTFSAV_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS3_INEPTFSAV_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_dtxfsts3_ineptfsav INEPTFSAV IN endpoint TxFIFO space avail
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepctl4 OTGHSDIEPCTL4 OTG device endpoint-4 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SD0PID_SEVNFRM Set DATA0 PID **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL4_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_CNAK		(1 << 26)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_SHIFT		22
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_TXFNUM_MASK		0x0f
/** @defgroup otg_hs_device_otg_hs_diepctl4_txfnum TXFNUM TxFIFO number
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL4_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_Stall		(1 << 21)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_diepctl4_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL4_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EONUM_DPID Even/odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL4_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL4_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_diepctl4_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepint4 OTGHSDIEPINT4 OTG device endpoint-4 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPINT4_NAK NAK interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT4_NAK		(1 << 13)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT4_BERR Babble error interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT4_BERR		(1 << 12)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT4_PKTDRPSTS Packet dropped status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT4_PKTDRPSTS		(1 << 11)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT4_BNA Buffer not available interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT4_BNA		(1 << 9)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT4_TXFIFOUDRN Transmit Fifo Underrun **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT4_TXFIFOUDRN		(1 << 8)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT4_TXFE Transmit FIFO empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT4_TXFE		(1 << 7)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT4_INEPNE IN endpoint NAK effective **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT4_INEPNE		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT4_ITTXFE IN token received when TxFIFO is empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT4_ITTXFE		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT4_TOC Timeout condition **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT4_TOC		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT4_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT4_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT4_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT4_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_dieptsiz4 OTGHSDIEPTSIZ4 OTG_HS device endpoint transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4_MCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4_MCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_dieptsiz4_mcnt MCNT Multi count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_dieptsiz4_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ4_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_dieptsiz4_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma4 OTGHSDIEPDMA4 OTG_HS device endpoint-5 DMA address register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPDMA4_DMAADDR_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPDMA4_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_device_otg_hs_diepdma4_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_dtxfsts4 OTGHSDTXFSTS4 OTG_HS device IN endpoint transmit FIFO status register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DTXFSTS4_INEPTFSAV_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS4_INEPTFSAV_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_dtxfsts4_ineptfsav INEPTFSAV IN endpoint TxFIFO space avail
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepctl5 OTGHSDIEPCTL5 OTG device endpoint-5 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SD0PID_SEVNFRM Set DATA0 PID **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL5_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_CNAK		(1 << 26)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_SHIFT		22
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_TXFNUM_MASK		0x0f
/** @defgroup otg_hs_device_otg_hs_diepctl5_txfnum TXFNUM TxFIFO number
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL5_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_Stall		(1 << 21)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_diepctl5_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL5_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EONUM_DPID Even/odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL5_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL5_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_diepctl5_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepint5 OTGHSDIEPINT5 OTG device endpoint-5 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPINT5_NAK NAK interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT5_NAK		(1 << 13)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT5_BERR Babble error interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT5_BERR		(1 << 12)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT5_PKTDRPSTS Packet dropped status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT5_PKTDRPSTS		(1 << 11)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT5_BNA Buffer not available interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT5_BNA		(1 << 9)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT5_TXFIFOUDRN Transmit Fifo Underrun **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT5_TXFIFOUDRN		(1 << 8)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT5_TXFE Transmit FIFO empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT5_TXFE		(1 << 7)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT5_INEPNE IN endpoint NAK effective **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT5_INEPNE		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT5_ITTXFE IN token received when TxFIFO is empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT5_ITTXFE		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT5_TOC Timeout condition **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT5_TOC		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT5_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT5_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT5_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT5_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_dieptsiz5 OTGHSDIEPTSIZ5 OTG_HS device endpoint transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5_MCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5_MCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_dieptsiz5_mcnt MCNT Multi count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_dieptsiz5_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ5_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_dieptsiz5_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma5 OTGHSDIEPDMA5 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_dtxfsts5 OTGHSDTXFSTS5 OTG_HS device IN endpoint transmit FIFO status register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DTXFSTS5_INEPTFSAV_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS5_INEPTFSAV_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_dtxfsts5_ineptfsav INEPTFSAV IN endpoint TxFIFO space avail
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepctl6 OTGHSDIEPCTL6 OTG device endpoint-6 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SD0PID_SEVNFRM Set DATA0 PID **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL6_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_CNAK		(1 << 26)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_SHIFT		22
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_TXFNUM_MASK		0x0f
/** @defgroup otg_hs_device_otg_hs_diepctl6_txfnum TXFNUM TxFIFO number
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL6_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_Stall		(1 << 21)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_diepctl6_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL6_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EONUM_DPID Even/odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL6_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL6_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_diepctl6_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepint6 OTGHSDIEPINT6 OTG device endpoint-6 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPINT6_NAK NAK interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT6_NAK		(1 << 13)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT6_BERR Babble error interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT6_BERR		(1 << 12)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT6_PKTDRPSTS Packet dropped status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT6_PKTDRPSTS		(1 << 11)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT6_BNA Buffer not available interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT6_BNA		(1 << 9)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT6_TXFIFOUDRN Transmit Fifo Underrun **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT6_TXFIFOUDRN		(1 << 8)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT6_TXFE Transmit FIFO empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT6_TXFE		(1 << 7)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT6_INEPNE IN endpoint NAK effective **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT6_INEPNE		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT6_ITTXFE IN token received when TxFIFO is empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT6_ITTXFE		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT6_TOC Timeout condition **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT6_TOC		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT6_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT6_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT6_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT6_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_dieptsiz6 OTGHSDIEPTSIZ6 OTG_HS device endpoint transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ6_MCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ6_MCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_dieptsiz6_mcnt MCNT Multi count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ6_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ6_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_dieptsiz6_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ6_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ6_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_dieptsiz6_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma6 OTGHSDIEPDMA6 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_dtxfsts6 OTGHSDTXFSTS6 OTG_HS device IN endpoint transmit FIFO status register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DTXFSTS6_INEPTFSAV_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS6_INEPTFSAV_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_dtxfsts6_ineptfsav INEPTFSAV IN endpoint TxFIFO space avail
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepctl7 OTGHSDIEPCTL7 OTG device endpoint-7 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SD0PID_SEVNFRM Set DATA0 PID **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL7_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_CNAK		(1 << 26)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_SHIFT		22
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_TXFNUM_MASK		0x0f
/** @defgroup otg_hs_device_otg_hs_diepctl7_txfnum TXFNUM TxFIFO number
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL7_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_Stall		(1 << 21)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_diepctl7_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DIEPCTL7_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EONUM_DPID Even/odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DIEPCTL7_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPCTL7_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_diepctl7_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepint7 OTGHSDIEPINT7 OTG device endpoint-7 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DIEPINT7_NAK NAK interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT7_NAK		(1 << 13)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT7_BERR Babble error interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT7_BERR		(1 << 12)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT7_PKTDRPSTS Packet dropped status **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT7_PKTDRPSTS		(1 << 11)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT7_BNA Buffer not available interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT7_BNA		(1 << 9)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT7_TXFIFOUDRN Transmit Fifo Underrun **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT7_TXFIFOUDRN		(1 << 8)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT7_TXFE Transmit FIFO empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT7_TXFE		(1 << 7)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT7_INEPNE IN endpoint NAK effective **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT7_INEPNE		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT7_ITTXFE IN token received when TxFIFO is empty **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT7_ITTXFE		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT7_TOC Timeout condition **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT7_TOC		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT7_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT7_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DIEPINT7_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DIEPINT7_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_dieptsiz7 OTGHSDIEPTSIZ7 OTG_HS device endpoint transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ7_MCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ7_MCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_dieptsiz7_mcnt MCNT Multi count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ7_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ7_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_dieptsiz7_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ7_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DIEPTSIZ7_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_dieptsiz7_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma7 OTGHSDIEPDMA7 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_dtxfsts7 OTGHSDTXFSTS7 OTG_HS device IN endpoint transmit FIFO status register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DTXFSTS7_INEPTFSAV_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DTXFSTS7_INEPTFSAV_MASK		0xffff
/** @defgroup otg_hs_device_otg_hs_dtxfsts7_ineptfsav INEPTFSAV IN endpoint TxFIFO space avail
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma8 OTGHSDIEPDMA8 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma9 OTGHSDIEPDMA9 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma10 OTGHSDIEPDMA10 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma11 OTGHSDIEPDMA11 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma12 OTGHSDIEPDMA12 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma13 OTGHSDIEPDMA13 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma14 OTGHSDIEPDMA14 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_diepdma15 OTGHSDIEPDMA15 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepctl0 OTGHSDOEPCTL0 OTG_HS device control OUT endpoint 0 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL0_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL0_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL0_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL0_CNAK		(1 << 26)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL0_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL0_Stall		(1 << 21)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL0_SNPM Snoop mode **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL0_SNPM		(1 << 20)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL0_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doepctl0_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL0_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL0_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL0_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL0_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL0_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL0_MPSIZ_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doepctl0_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepint0 OTGHSDOEPINT0 OTG_HS device endpoint-0 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPINT0_NYET NYET interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT0_NYET		(1 << 14)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT0_B2BSTUP Back-to-back SETUP packets received **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT0_B2BSTUP		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT0_OTEPDIS OUT token received when endpoint disabled **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT0_OTEPDIS		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT0_STUP SETUP phase done **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT0_STUP		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT0_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT0_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT0_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT0_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_doeptsiz0 OTGHSDOEPTSIZ0 OTG_HS device endpoint-0 transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_STUPCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_STUPCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doeptsiz0_stupcnt STUPCNT SETUP packet count
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_PKTCNT Packet count **/
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_PKTCNT		(1 << 19)

#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ0_XFRSIZ_MASK		0x7f
/** @defgroup otg_hs_device_otg_hs_doeptsiz0_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepdma0 OTGHSDOEPDMA0 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepctl1 OTGHSDOEPCTL1 OTG device endpoint-1 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SD0PID_SEVNFRM Set DATA0 PID/Set even frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL1_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_CNAK		(1 << 26)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL1_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_Stall		(1 << 21)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SNPM Snoop mode **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_SNPM		(1 << 20)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doepctl1_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL1_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EONUM_DPID Even odd frame/Endpoint data PID **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL1_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL1_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_doepctl1_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepint1 OTGHSDOEPINT1 OTG_HS device endpoint-1 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPINT1_NYET NYET interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT1_NYET		(1 << 14)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT1_B2BSTUP Back-to-back SETUP packets received **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT1_B2BSTUP		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT1_OTEPDIS OUT token received when endpoint disabled **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT1_OTEPDIS		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT1_STUP SETUP phase done **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT1_STUP		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT1_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT1_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT1_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT1_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_doeptsiz1 OTGHSDOEPTSIZ1 OTG_HS device endpoint-1 transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1_RXDPID_STUPCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1_RXDPID_STUPCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doeptsiz1_rxdpid_stupcnt RXDPIDSTUPCNT Received data PID/SETUP packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_doeptsiz1_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ1_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_doeptsiz1_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepdma1 OTGHSDOEPDMA1 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepctl2 OTGHSDOEPCTL2 OTG device endpoint-2 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SD0PID_SEVNFRM Set DATA0 PID/Set even frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL2_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_CNAK		(1 << 26)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL2_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_Stall		(1 << 21)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SNPM Snoop mode **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_SNPM		(1 << 20)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doepctl2_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL2_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EONUM_DPID Even odd frame/Endpoint data PID **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL2_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL2_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_doepctl2_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepint2 OTGHSDOEPINT2 OTG_HS device endpoint-2 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPINT2_NYET NYET interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT2_NYET		(1 << 14)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT2_B2BSTUP Back-to-back SETUP packets received **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT2_B2BSTUP		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT2_OTEPDIS OUT token received when endpoint disabled **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT2_OTEPDIS		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT2_STUP SETUP phase done **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT2_STUP		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT2_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT2_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT2_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT2_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_doeptsiz2 OTGHSDOEPTSIZ2 OTG_HS device endpoint-2 transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2_RXDPID_STUPCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2_RXDPID_STUPCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doeptsiz2_rxdpid_stupcnt RXDPIDSTUPCNT Received data PID/SETUP packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_doeptsiz2_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ2_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_doeptsiz2_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepdma2 OTGHSDOEPDMA2 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepctl3 OTGHSDOEPCTL3 OTG device endpoint-3 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SD0PID_SEVNFRM Set DATA0 PID/Set even frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL3_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_CNAK		(1 << 26)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL3_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_Stall		(1 << 21)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SNPM Snoop mode **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_SNPM		(1 << 20)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doepctl3_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL3_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EONUM_DPID Even odd frame/Endpoint data PID **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL3_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL3_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_doepctl3_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepint3 OTGHSDOEPINT3 OTG_HS device endpoint-3 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPINT3_NYET NYET interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT3_NYET		(1 << 14)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT3_B2BSTUP Back-to-back SETUP packets received **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT3_B2BSTUP		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT3_OTEPDIS OUT token received when endpoint disabled **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT3_OTEPDIS		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT3_STUP SETUP phase done **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT3_STUP		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT3_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT3_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT3_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT3_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_doeptsiz3 OTGHSDOEPTSIZ3 OTG_HS device endpoint-3 transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3_RXDPID_STUPCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3_RXDPID_STUPCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doeptsiz3_rxdpid_stupcnt RXDPIDSTUPCNT Received data PID/SETUP packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_doeptsiz3_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ3_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_doeptsiz3_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepdma3 OTGHSDOEPDMA3 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepctl4 OTGHSDOEPCTL4 OTG device endpoint-4 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL4_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL4_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL4_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL4_SD0PID_SEVNFRM Set DATA0 PID/Set even frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL4_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL4_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_CNAK		(1 << 26)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL4_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_Stall		(1 << 21)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL4_SNPM Snoop mode **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_SNPM		(1 << 20)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doepctl4_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL4_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL4_EONUM_DPID Even odd frame/Endpoint data PID **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL4_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL4_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_doepctl4_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepint4 OTGHSDOEPINT4 OTG_HS device endpoint-4 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPINT4_NYET NYET interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT4_NYET		(1 << 14)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT4_B2BSTUP Back-to-back SETUP packets received **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT4_B2BSTUP		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT4_OTEPDIS OUT token received when endpoint disabled **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT4_OTEPDIS		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT4_STUP SETUP phase done **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT4_STUP		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT4_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT4_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT4_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT4_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_doeptsiz4 OTGHSDOEPTSIZ4 OTG_HS device endpoint-4 transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4_RXDPID_STUPCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4_RXDPID_STUPCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doeptsiz4_rxdpid_stupcnt RXDPIDSTUPCNT Received data PID/SETUP packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_doeptsiz4_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ4_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_doeptsiz4_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepdma4 OTGHSDOEPDMA4 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepctl5 OTGHSDOEPCTL5 OTG device endpoint-5 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL5_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL5_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL5_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL5_SD0PID_SEVNFRM Set DATA0 PID/Set even frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL5_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL5_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_CNAK		(1 << 26)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL5_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_Stall		(1 << 21)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL5_SNPM Snoop mode **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_SNPM		(1 << 20)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doepctl5_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL5_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL5_EONUM_DPID Even odd frame/Endpoint data PID **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL5_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL5_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_doepctl5_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepint5 OTGHSDOEPINT5 OTG_HS device endpoint-5 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPINT5_NYET NYET interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT5_NYET		(1 << 14)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT5_B2BSTUP Back-to-back SETUP packets received **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT5_B2BSTUP		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT5_OTEPDIS OUT token received when endpoint disabled **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT5_OTEPDIS		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT5_STUP SETUP phase done **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT5_STUP		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT5_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT5_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT5_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT5_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_doeptsiz5 OTGHSDOEPTSIZ5 OTG_HS device endpoint-5 transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ5_RXDPID_STUPCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ5_RXDPID_STUPCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doeptsiz5_rxdpid_stupcnt RXDPIDSTUPCNT Received data PID/SETUP packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ5_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ5_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_doeptsiz5_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ5_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ5_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_doeptsiz5_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepdma5 OTGHSDOEPDMA5 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepctl6 OTGHSDOEPCTL6 OTG device endpoint-6 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL6_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL6_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL6_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL6_SD0PID_SEVNFRM Set DATA0 PID/Set even frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL6_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL6_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_CNAK		(1 << 26)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL6_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_Stall		(1 << 21)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL6_SNPM Snoop mode **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_SNPM		(1 << 20)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doepctl6_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL6_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL6_EONUM_DPID Even odd frame/Endpoint data PID **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL6_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL6_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_doepctl6_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepint6 OTGHSDOEPINT6 OTG_HS device endpoint-6 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPINT6_NYET NYET interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT6_NYET		(1 << 14)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT6_B2BSTUP Back-to-back SETUP packets received **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT6_B2BSTUP		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT6_OTEPDIS OUT token received when endpoint disabled **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT6_OTEPDIS		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT6_STUP SETUP phase done **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT6_STUP		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT6_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT6_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT6_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT6_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_doeptsiz6 OTGHSDOEPTSIZ6 OTG_HS device endpoint-6 transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ6_RXDPID_STUPCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ6_RXDPID_STUPCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doeptsiz6_rxdpid_stupcnt RXDPIDSTUPCNT Received data PID/SETUP packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ6_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ6_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_doeptsiz6_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ6_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ6_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_doeptsiz6_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepdma6 OTGHSDOEPDMA6 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepctl7 OTGHSDOEPCTL7 OTG device endpoint-7 control register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL7_EPENA Endpoint enable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_EPENA		(1 << 31)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL7_EPDIS Endpoint disable **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_EPDIS		(1 << 30)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL7_SODDFRM Set odd frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_SODDFRM		(1 << 29)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL7_SD0PID_SEVNFRM Set DATA0 PID/Set even frame **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_SD0PID_SEVNFRM		(1 << 28)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL7_SNAK Set NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_SNAK		(1 << 27)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL7_CNAK Clear NAK **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_CNAK		(1 << 26)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL7_Stall STALL handshake **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_Stall		(1 << 21)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL7_SNPM Snoop mode **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_SNPM		(1 << 20)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_EPTYP_SHIFT		18
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_EPTYP_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doepctl7_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_DEVICE_OTG_HS_DOEPCTL7_NAKSTS NAK status **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_NAKSTS		(1 << 17)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL7_EONUM_DPID Even odd frame/Endpoint data PID **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_EONUM_DPID		(1 << 16)
/** OTG_HS_DEVICE_OTG_HS_DOEPCTL7_USBAEP USB active endpoint **/
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_USBAEP		(1 << 15)

#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_MPSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPCTL7_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_device_otg_hs_doepctl7_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepint7 OTGHSDOEPINT7 OTG_HS device endpoint-7 interrupt register
@{*/

/** OTG_HS_DEVICE_OTG_HS_DOEPINT7_NYET NYET interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT7_NYET		(1 << 14)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT7_B2BSTUP Back-to-back SETUP packets received **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT7_B2BSTUP		(1 << 6)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT7_OTEPDIS OUT token received when endpoint disabled **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT7_OTEPDIS		(1 << 4)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT7_STUP SETUP phase done **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT7_STUP		(1 << 3)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT7_EPDISD Endpoint disabled interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT7_EPDISD		(1 << 1)
/** OTG_HS_DEVICE_OTG_HS_DOEPINT7_XFRC Transfer completed interrupt **/
#define OTG_HS_DEVICE_OTG_HS_DOEPINT7_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_device_otg_hs_doeptsiz7 OTGHSDOEPTSIZ7 OTG_HS device endpoint-7 transfer size register
@{*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ7_RXDPID_STUPCNT_SHIFT		29
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ7_RXDPID_STUPCNT_MASK		0x03
/** @defgroup otg_hs_device_otg_hs_doeptsiz7_rxdpid_stupcnt RXDPIDSTUPCNT Received data PID/SETUP packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ7_PKTCNT_SHIFT		19
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ7_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_device_otg_hs_doeptsiz7_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ7_XFRSIZ_SHIFT		0
#define OTG_HS_DEVICE_OTG_HS_DOEPTSIZ7_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_device_otg_hs_doeptsiz7_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepdma7 OTGHSDOEPDMA7 OTG Device channel-x DMA address register
@{*/


/**@}*/

/** @defgroup otg_hs_device_otg_hs_doepdma8 OTGHSDOEPDMA8 OTG Device channel-x DMA address register
@{*/


/**@}*/

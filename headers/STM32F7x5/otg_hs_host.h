#pragma once 

/* --- OTG_HS_HOST: USB on the go high speed ------------------------ */

/** @defgroup otg_hs_host_registers USB on the go high speed Register
@{*/

/** OTG_HS_HOST_OTG_HS_HCFG OTG_HS host configuration register **/
#define OTG_HS_HOST_OTG_HS_HCFG			MMIO32(OTG_HS_HOST_BASE + 0x00)
/** OTG_HS_HOST_OTG_HS_HFIR OTG_HS Host frame interval register **/
#define OTG_HS_HOST_OTG_HS_HFIR			MMIO32(OTG_HS_HOST_BASE + 0x04)
/** OTG_HS_HOST_OTG_HS_HFNUM OTG_HS host frame number/frame time remaining register **/
#define OTG_HS_HOST_OTG_HS_HFNUM			MMIO32(OTG_HS_HOST_BASE + 0x08)
/** OTG_HS_HOST_OTG_HS_HPTXSTS OTG_HS_Host periodic transmit FIFO/queue status register **/
#define OTG_HS_HOST_OTG_HS_HPTXSTS			MMIO32(OTG_HS_HOST_BASE + 0x10)
/** OTG_HS_HOST_OTG_HS_HAINT OTG_HS Host all channels interrupt register **/
#define OTG_HS_HOST_OTG_HS_HAINT			MMIO32(OTG_HS_HOST_BASE + 0x14)
/** OTG_HS_HOST_OTG_HS_HAINTMSK OTG_HS host all channels interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HAINTMSK			MMIO32(OTG_HS_HOST_BASE + 0x18)
/** OTG_HS_HOST_OTG_HS_HPRT OTG_HS host port control and status register **/
#define OTG_HS_HOST_OTG_HS_HPRT			MMIO32(OTG_HS_HOST_BASE + 0x40)
/** OTG_HS_HOST_OTG_HS_HCCHAR0 OTG_HS host channel-0 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR0			MMIO32(OTG_HS_HOST_BASE + 0x100)
/** OTG_HS_HOST_OTG_HS_HCSPLT0 OTG_HS host channel-0 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT0			MMIO32(OTG_HS_HOST_BASE + 0x104)
/** OTG_HS_HOST_OTG_HS_HCINT0 OTG_HS host channel-11 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT0			MMIO32(OTG_HS_HOST_BASE + 0x108)
/** OTG_HS_HOST_OTG_HS_HCINTMSK0 OTG_HS host channel-11 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK0			MMIO32(OTG_HS_HOST_BASE + 0x10c)
/** OTG_HS_HOST_OTG_HS_HCTSIZ0 OTG_HS host channel-11 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ0			MMIO32(OTG_HS_HOST_BASE + 0x110)
/** OTG_HS_HOST_OTG_HS_HCDMA0 OTG_HS host channel-0 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA0			MMIO32(OTG_HS_HOST_BASE + 0x114)
/** OTG_HS_HOST_OTG_HS_HCCHAR1 OTG_HS host channel-1 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR1			MMIO32(OTG_HS_HOST_BASE + 0x120)
/** OTG_HS_HOST_OTG_HS_HCSPLT1 OTG_HS host channel-1 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT1			MMIO32(OTG_HS_HOST_BASE + 0x124)
/** OTG_HS_HOST_OTG_HS_HCINT1 OTG_HS host channel-1 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT1			MMIO32(OTG_HS_HOST_BASE + 0x128)
/** OTG_HS_HOST_OTG_HS_HCINTMSK1 OTG_HS host channel-1 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK1			MMIO32(OTG_HS_HOST_BASE + 0x12c)
/** OTG_HS_HOST_OTG_HS_HCTSIZ1 OTG_HS host channel-1 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ1			MMIO32(OTG_HS_HOST_BASE + 0x130)
/** OTG_HS_HOST_OTG_HS_HCDMA1 OTG_HS host channel-1 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA1			MMIO32(OTG_HS_HOST_BASE + 0x134)
/** OTG_HS_HOST_OTG_HS_HCCHAR2 OTG_HS host channel-2 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR2			MMIO32(OTG_HS_HOST_BASE + 0x140)
/** OTG_HS_HOST_OTG_HS_HCSPLT2 OTG_HS host channel-2 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT2			MMIO32(OTG_HS_HOST_BASE + 0x144)
/** OTG_HS_HOST_OTG_HS_HCINT2 OTG_HS host channel-2 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT2			MMIO32(OTG_HS_HOST_BASE + 0x148)
/** OTG_HS_HOST_OTG_HS_HCINTMSK2 OTG_HS host channel-2 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK2			MMIO32(OTG_HS_HOST_BASE + 0x14c)
/** OTG_HS_HOST_OTG_HS_HCTSIZ2 OTG_HS host channel-2 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ2			MMIO32(OTG_HS_HOST_BASE + 0x150)
/** OTG_HS_HOST_OTG_HS_HCDMA2 OTG_HS host channel-2 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA2			MMIO32(OTG_HS_HOST_BASE + 0x154)
/** OTG_HS_HOST_OTG_HS_HCCHAR3 OTG_HS host channel-3 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR3			MMIO32(OTG_HS_HOST_BASE + 0x160)
/** OTG_HS_HOST_OTG_HS_HCSPLT3 OTG_HS host channel-3 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT3			MMIO32(OTG_HS_HOST_BASE + 0x164)
/** OTG_HS_HOST_OTG_HS_HCINT3 OTG_HS host channel-3 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT3			MMIO32(OTG_HS_HOST_BASE + 0x168)
/** OTG_HS_HOST_OTG_HS_HCINTMSK3 OTG_HS host channel-3 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK3			MMIO32(OTG_HS_HOST_BASE + 0x16c)
/** OTG_HS_HOST_OTG_HS_HCTSIZ3 OTG_HS host channel-3 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ3			MMIO32(OTG_HS_HOST_BASE + 0x170)
/** OTG_HS_HOST_OTG_HS_HCDMA3 OTG_HS host channel-3 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA3			MMIO32(OTG_HS_HOST_BASE + 0x174)
/** OTG_HS_HOST_OTG_HS_HCCHAR4 OTG_HS host channel-4 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR4			MMIO32(OTG_HS_HOST_BASE + 0x180)
/** OTG_HS_HOST_OTG_HS_HCSPLT4 OTG_HS host channel-4 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT4			MMIO32(OTG_HS_HOST_BASE + 0x184)
/** OTG_HS_HOST_OTG_HS_HCINT4 OTG_HS host channel-4 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT4			MMIO32(OTG_HS_HOST_BASE + 0x188)
/** OTG_HS_HOST_OTG_HS_HCINTMSK4 OTG_HS host channel-4 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK4			MMIO32(OTG_HS_HOST_BASE + 0x18c)
/** OTG_HS_HOST_OTG_HS_HCTSIZ4 OTG_HS host channel-4 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ4			MMIO32(OTG_HS_HOST_BASE + 0x190)
/** OTG_HS_HOST_OTG_HS_HCDMA4 OTG_HS host channel-4 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA4			MMIO32(OTG_HS_HOST_BASE + 0x194)
/** OTG_HS_HOST_OTG_HS_HCCHAR5 OTG_HS host channel-5 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR5			MMIO32(OTG_HS_HOST_BASE + 0x1a0)
/** OTG_HS_HOST_OTG_HS_HCSPLT5 OTG_HS host channel-5 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT5			MMIO32(OTG_HS_HOST_BASE + 0x1a4)
/** OTG_HS_HOST_OTG_HS_HCINT5 OTG_HS host channel-5 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT5			MMIO32(OTG_HS_HOST_BASE + 0x1a8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK5 OTG_HS host channel-5 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK5			MMIO32(OTG_HS_HOST_BASE + 0x1ac)
/** OTG_HS_HOST_OTG_HS_HCTSIZ5 OTG_HS host channel-5 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ5			MMIO32(OTG_HS_HOST_BASE + 0x1b0)
/** OTG_HS_HOST_OTG_HS_HCDMA5 OTG_HS host channel-5 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA5			MMIO32(OTG_HS_HOST_BASE + 0x1b4)
/** OTG_HS_HOST_OTG_HS_HCCHAR6 OTG_HS host channel-6 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR6			MMIO32(OTG_HS_HOST_BASE + 0x1c0)
/** OTG_HS_HOST_OTG_HS_HCSPLT6 OTG_HS host channel-6 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT6			MMIO32(OTG_HS_HOST_BASE + 0x1c4)
/** OTG_HS_HOST_OTG_HS_HCINT6 OTG_HS host channel-6 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT6			MMIO32(OTG_HS_HOST_BASE + 0x1c8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK6 OTG_HS host channel-6 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK6			MMIO32(OTG_HS_HOST_BASE + 0x1cc)
/** OTG_HS_HOST_OTG_HS_HCTSIZ6 OTG_HS host channel-6 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ6			MMIO32(OTG_HS_HOST_BASE + 0x1d0)
/** OTG_HS_HOST_OTG_HS_HCDMA6 OTG_HS host channel-6 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA6			MMIO32(OTG_HS_HOST_BASE + 0x1d4)
/** OTG_HS_HOST_OTG_HS_HCCHAR7 OTG_HS host channel-7 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR7			MMIO32(OTG_HS_HOST_BASE + 0x1e0)
/** OTG_HS_HOST_OTG_HS_HCSPLT7 OTG_HS host channel-7 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT7			MMIO32(OTG_HS_HOST_BASE + 0x1e4)
/** OTG_HS_HOST_OTG_HS_HCINT7 OTG_HS host channel-7 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT7			MMIO32(OTG_HS_HOST_BASE + 0x1e8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK7 OTG_HS host channel-7 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK7			MMIO32(OTG_HS_HOST_BASE + 0x1ec)
/** OTG_HS_HOST_OTG_HS_HCTSIZ7 OTG_HS host channel-7 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ7			MMIO32(OTG_HS_HOST_BASE + 0x1f0)
/** OTG_HS_HOST_OTG_HS_HCDMA7 OTG_HS host channel-7 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA7			MMIO32(OTG_HS_HOST_BASE + 0x1f4)
/** OTG_HS_HOST_OTG_HS_HCCHAR8 OTG_HS host channel-8 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR8			MMIO32(OTG_HS_HOST_BASE + 0x200)
/** OTG_HS_HOST_OTG_HS_HCSPLT8 OTG_HS host channel-8 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT8			MMIO32(OTG_HS_HOST_BASE + 0x204)
/** OTG_HS_HOST_OTG_HS_HCINT8 OTG_HS host channel-8 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT8			MMIO32(OTG_HS_HOST_BASE + 0x208)
/** OTG_HS_HOST_OTG_HS_HCINTMSK8 OTG_HS host channel-8 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK8			MMIO32(OTG_HS_HOST_BASE + 0x20c)
/** OTG_HS_HOST_OTG_HS_HCTSIZ8 OTG_HS host channel-8 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ8			MMIO32(OTG_HS_HOST_BASE + 0x210)
/** OTG_HS_HOST_OTG_HS_HCDMA8 OTG_HS host channel-8 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA8			MMIO32(OTG_HS_HOST_BASE + 0x214)
/** OTG_HS_HOST_OTG_HS_HCCHAR9 OTG_HS host channel-9 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR9			MMIO32(OTG_HS_HOST_BASE + 0x220)
/** OTG_HS_HOST_OTG_HS_HCSPLT9 OTG_HS host channel-9 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT9			MMIO32(OTG_HS_HOST_BASE + 0x224)
/** OTG_HS_HOST_OTG_HS_HCINT9 OTG_HS host channel-9 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT9			MMIO32(OTG_HS_HOST_BASE + 0x228)
/** OTG_HS_HOST_OTG_HS_HCINTMSK9 OTG_HS host channel-9 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK9			MMIO32(OTG_HS_HOST_BASE + 0x22c)
/** OTG_HS_HOST_OTG_HS_HCTSIZ9 OTG_HS host channel-9 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ9			MMIO32(OTG_HS_HOST_BASE + 0x230)
/** OTG_HS_HOST_OTG_HS_HCDMA9 OTG_HS host channel-9 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA9			MMIO32(OTG_HS_HOST_BASE + 0x234)
/** OTG_HS_HOST_OTG_HS_HCCHAR10 OTG_HS host channel-10 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR10			MMIO32(OTG_HS_HOST_BASE + 0x240)
/** OTG_HS_HOST_OTG_HS_HCSPLT10 OTG_HS host channel-10 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT10			MMIO32(OTG_HS_HOST_BASE + 0x244)
/** OTG_HS_HOST_OTG_HS_HCINT10 OTG_HS host channel-10 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT10			MMIO32(OTG_HS_HOST_BASE + 0x248)
/** OTG_HS_HOST_OTG_HS_HCINTMSK10 OTG_HS host channel-10 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK10			MMIO32(OTG_HS_HOST_BASE + 0x24c)
/** OTG_HS_HOST_OTG_HS_HCTSIZ10 OTG_HS host channel-10 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ10			MMIO32(OTG_HS_HOST_BASE + 0x250)
/** OTG_HS_HOST_OTG_HS_HCDMA10 OTG_HS host channel-10 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA10			MMIO32(OTG_HS_HOST_BASE + 0x254)
/** OTG_HS_HOST_OTG_HS_HCCHAR11 OTG_HS host channel-11 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR11			MMIO32(OTG_HS_HOST_BASE + 0x260)
/** OTG_HS_HOST_OTG_HS_HCSPLT11 OTG_HS host channel-11 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT11			MMIO32(OTG_HS_HOST_BASE + 0x264)
/** OTG_HS_HOST_OTG_HS_HCINT11 OTG_HS host channel-11 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT11			MMIO32(OTG_HS_HOST_BASE + 0x268)
/** OTG_HS_HOST_OTG_HS_HCINTMSK11 OTG_HS host channel-11 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK11			MMIO32(OTG_HS_HOST_BASE + 0x26c)
/** OTG_HS_HOST_OTG_HS_HCTSIZ11 OTG_HS host channel-11 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ11			MMIO32(OTG_HS_HOST_BASE + 0x270)
/** OTG_HS_HOST_OTG_HS_HCDMA11 OTG_HS host channel-11 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA11			MMIO32(OTG_HS_HOST_BASE + 0x274)
/** OTG_HS_HOST_OTG_HS_HCCHAR12 OTG_HS host channel-12 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR12			MMIO32(OTG_HS_HOST_BASE + 0x278)
/** OTG_HS_HOST_OTG_HS_HCSPLT12 OTG_HS host channel-12 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT12			MMIO32(OTG_HS_HOST_BASE + 0x27c)
/** OTG_HS_HOST_OTG_HS_HCINT12 OTG_HS host channel-12 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT12			MMIO32(OTG_HS_HOST_BASE + 0x280)
/** OTG_HS_HOST_OTG_HS_HCINTMSK12 OTG_HS host channel-12 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK12			MMIO32(OTG_HS_HOST_BASE + 0x284)
/** OTG_HS_HOST_OTG_HS_HCTSIZ12 OTG_HS host channel-12 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ12			MMIO32(OTG_HS_HOST_BASE + 0x288)
/** OTG_HS_HOST_OTG_HS_HCDMA12 OTG_HS host channel-12 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA12			MMIO32(OTG_HS_HOST_BASE + 0x28c)
/** OTG_HS_HOST_OTG_HS_HCCHAR13 OTG_HS host channel-13 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR13			MMIO32(OTG_HS_HOST_BASE + 0x290)
/** OTG_HS_HOST_OTG_HS_HCSPLT13 OTG_HS host channel-13 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT13			MMIO32(OTG_HS_HOST_BASE + 0x294)
/** OTG_HS_HOST_OTG_HS_HCINT13 OTG_HS host channel-13 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT13			MMIO32(OTG_HS_HOST_BASE + 0x298)
/** OTG_HS_HOST_OTG_HS_HCINTMSK13 OTG_HS host channel-13 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK13			MMIO32(OTG_HS_HOST_BASE + 0x29c)
/** OTG_HS_HOST_OTG_HS_HCTSIZ13 OTG_HS host channel-13 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ13			MMIO32(OTG_HS_HOST_BASE + 0x2a0)
/** OTG_HS_HOST_OTG_HS_HCDMA13 OTG_HS host channel-13 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA13			MMIO32(OTG_HS_HOST_BASE + 0x2a4)
/** OTG_HS_HOST_OTG_HS_HCCHAR14 OTG_HS host channel-14 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR14			MMIO32(OTG_HS_HOST_BASE + 0x2a8)
/** OTG_HS_HOST_OTG_HS_HCSPLT14 OTG_HS host channel-14 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT14			MMIO32(OTG_HS_HOST_BASE + 0x2ac)
/** OTG_HS_HOST_OTG_HS_HCINT14 OTG_HS host channel-14 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT14			MMIO32(OTG_HS_HOST_BASE + 0x2b0)
/** OTG_HS_HOST_OTG_HS_HCINTMSK14 OTG_HS host channel-14 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK14			MMIO32(OTG_HS_HOST_BASE + 0x2b4)
/** OTG_HS_HOST_OTG_HS_HCTSIZ14 OTG_HS host channel-14 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ14			MMIO32(OTG_HS_HOST_BASE + 0x2b8)
/** OTG_HS_HOST_OTG_HS_HCDMA14 OTG_HS host channel-14 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA14			MMIO32(OTG_HS_HOST_BASE + 0x2bc)
/** OTG_HS_HOST_OTG_HS_HCCHAR15 OTG_HS host channel-15 characteristics register **/
#define OTG_HS_HOST_OTG_HS_HCCHAR15			MMIO32(OTG_HS_HOST_BASE + 0x2c0)
/** OTG_HS_HOST_OTG_HS_HCSPLT15 OTG_HS host channel-15 split control register **/
#define OTG_HS_HOST_OTG_HS_HCSPLT15			MMIO32(OTG_HS_HOST_BASE + 0x2c4)
/** OTG_HS_HOST_OTG_HS_HCINT15 OTG_HS host channel-15 interrupt register **/
#define OTG_HS_HOST_OTG_HS_HCINT15			MMIO32(OTG_HS_HOST_BASE + 0x2c8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK15 OTG_HS host channel-15 interrupt mask register **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK15			MMIO32(OTG_HS_HOST_BASE + 0x2cc)
/** OTG_HS_HOST_OTG_HS_HCTSIZ15 OTG_HS host channel-15 transfer size register **/
#define OTG_HS_HOST_OTG_HS_HCTSIZ15			MMIO32(OTG_HS_HOST_BASE + 0x2d0)
/** OTG_HS_HOST_OTG_HS_HCDMA15 OTG_HS host channel-15 DMA address register **/
#define OTG_HS_HOST_OTG_HS_HCDMA15			MMIO32(OTG_HS_HOST_BASE + 0x2d4)

/**@}*/


/** @defgroup otg_hs_host_otg_hs_hcfg OTGHSHCFG OTG_HS host configuration register
@{*/

/** OTG_HS_HOST_OTG_HS_HCFG_FSLSS FS- and LS-only support **/
#define OTG_HS_HOST_OTG_HS_HCFG_FSLSS		(1 << 2)

#define OTG_HS_HOST_OTG_HS_HCFG_FSLSPCS_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCFG_FSLSPCS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcfg_fslspcs FSLSPCS FS/LS PHY clock select
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hfir OTGHSHFIR OTG_HS Host frame interval register
@{*/


#define OTG_HS_HOST_OTG_HS_HFIR_FRIVL_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HFIR_FRIVL_MASK		0xffff
/** @defgroup otg_hs_host_otg_hs_hfir_frivl FRIVL Frame interval
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hfnum OTGHSHFNUM OTG_HS host frame number/frame time remaining register
@{*/


#define OTG_HS_HOST_OTG_HS_HFNUM_FTREM_SHIFT		16
#define OTG_HS_HOST_OTG_HS_HFNUM_FTREM_MASK		0xffff
/** @defgroup otg_hs_host_otg_hs_hfnum_ftrem FTREM Frame time remaining
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HFNUM_FRNUM_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HFNUM_FRNUM_MASK		0xffff
/** @defgroup otg_hs_host_otg_hs_hfnum_frnum FRNUM Frame number
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hptxsts OTGHSHPTXSTS OTG_HS_Host periodic transmit FIFO/queue status register
@{*/


#define OTG_HS_HOST_OTG_HS_HPTXSTS_PTXQTOP_SHIFT		24
#define OTG_HS_HOST_OTG_HS_HPTXSTS_PTXQTOP_MASK		0xff
/** @defgroup otg_hs_host_otg_hs_hptxsts_ptxqtop PTXQTOP Top of the periodic transmit request queue
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HPTXSTS_PTXQSAV_SHIFT		16
#define OTG_HS_HOST_OTG_HS_HPTXSTS_PTXQSAV_MASK		0xff
/** @defgroup otg_hs_host_otg_hs_hptxsts_ptxqsav PTXQSAV Periodic transmit request queue space available
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HPTXSTS_PTXFSAVL_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HPTXSTS_PTXFSAVL_MASK		0xffff
/** @defgroup otg_hs_host_otg_hs_hptxsts_ptxfsavl PTXFSAVL Periodic transmit data FIFO space available
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_haint OTGHSHAINT OTG_HS Host all channels interrupt register
@{*/


#define OTG_HS_HOST_OTG_HS_HAINT_HAINT_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HAINT_HAINT_MASK		0xffff
/** @defgroup otg_hs_host_otg_hs_haint_haint HAINT Channel interrupts
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_haintmsk OTGHSHAINTMSK OTG_HS host all channels interrupt mask register
@{*/


#define OTG_HS_HOST_OTG_HS_HAINTMSK_HAINTM_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HAINTMSK_HAINTM_MASK		0xffff
/** @defgroup otg_hs_host_otg_hs_haintmsk_haintm HAINTM Channel interrupt mask
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hprt OTGHSHPRT OTG_HS host port control and status register
@{*/


#define OTG_HS_HOST_OTG_HS_HPRT_PSPD_SHIFT		17
#define OTG_HS_HOST_OTG_HS_HPRT_PSPD_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hprt_pspd PSPD Port speed
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HPRT_PTCTL_SHIFT		13
#define OTG_HS_HOST_OTG_HS_HPRT_PTCTL_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hprt_ptctl PTCTL Port test control
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HPRT_PPWR Port power **/
#define OTG_HS_HOST_OTG_HS_HPRT_PPWR		(1 << 12)

#define OTG_HS_HOST_OTG_HS_HPRT_PLSTS_SHIFT		10
#define OTG_HS_HOST_OTG_HS_HPRT_PLSTS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hprt_plsts PLSTS Port line status
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HPRT_PRST Port reset **/
#define OTG_HS_HOST_OTG_HS_HPRT_PRST		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HPRT_PSUSP Port suspend **/
#define OTG_HS_HOST_OTG_HS_HPRT_PSUSP		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HPRT_PRES Port resume **/
#define OTG_HS_HOST_OTG_HS_HPRT_PRES		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HPRT_POCCHNG Port overcurrent change **/
#define OTG_HS_HOST_OTG_HS_HPRT_POCCHNG		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HPRT_POCA Port overcurrent active **/
#define OTG_HS_HOST_OTG_HS_HPRT_POCA		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HPRT_PENCHNG Port enable/disable change **/
#define OTG_HS_HOST_OTG_HS_HPRT_PENCHNG		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HPRT_PENA Port enable **/
#define OTG_HS_HOST_OTG_HS_HPRT_PENA		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HPRT_PCDET Port connect detected **/
#define OTG_HS_HOST_OTG_HS_HPRT_PCDET		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HPRT_PCSTS Port connect status **/
#define OTG_HS_HOST_OTG_HS_HPRT_PCSTS		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar0 OTGHSHCCHAR0 OTG_HS host channel-0 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR0_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR0_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR0_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR0_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR0_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR0_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR0_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR0_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar0_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR0_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR0_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar0_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR0_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR0_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar0_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR0_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR0_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR0_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR0_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR0_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar0_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR0_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR0_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar0_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt0 OTGHSHCSPLT0 OTG_HS host channel-0 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT0_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT0_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT0_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT0_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT0_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT0_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt0_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT0_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT0_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt0_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT0_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT0_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt0_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint0 OTGHSHCINT0 OTG_HS host channel-11 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT0_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT0_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT0_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT0_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT0_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT0_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT0_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT0_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT0_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT0_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT0_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT0_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT0_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT0_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT0_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT0_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT0_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT0_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT0_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT0_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT0_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT0_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk0 OTGHSHCINTMSK0 OTG_HS host channel-11 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK0_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK0_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK0_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK0_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK0_BBERRM Babble error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK0_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK0_TXERRM Transaction error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK0_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK0_NYET response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK0_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK0_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK0_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK0_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK0_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK0_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK0_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK0_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK0_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK0_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK0_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK0_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK0_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz0 OTGHSHCTSIZ0 OTG_HS host channel-11 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ0_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ0_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz0_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ0_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ0_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz0_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ0_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ0_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz0_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma0 OTGHSHCDMA0 OTG_HS host channel-0 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA0_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA0_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma0_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar1 OTGHSHCCHAR1 OTG_HS host channel-1 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR1_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR1_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR1_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR1_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR1_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR1_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR1_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR1_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar1_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR1_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR1_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar1_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR1_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR1_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar1_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR1_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR1_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR1_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR1_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR1_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar1_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR1_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR1_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar1_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt1 OTGHSHCSPLT1 OTG_HS host channel-1 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT1_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT1_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT1_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT1_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT1_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT1_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt1_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT1_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT1_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt1_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT1_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT1_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt1_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint1 OTGHSHCINT1 OTG_HS host channel-1 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT1_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT1_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT1_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT1_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT1_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT1_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT1_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT1_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT1_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT1_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT1_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT1_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT1_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT1_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT1_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT1_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT1_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT1_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT1_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT1_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT1_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT1_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk1 OTGHSHCINTMSK1 OTG_HS host channel-1 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK1_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK1_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK1_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK1_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK1_BBERRM Babble error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK1_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK1_TXERRM Transaction error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK1_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK1_NYET response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK1_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK1_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK1_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK1_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK1_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK1_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK1_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK1_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK1_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK1_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK1_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK1_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK1_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz1 OTGHSHCTSIZ1 OTG_HS host channel-1 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ1_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ1_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz1_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ1_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ1_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz1_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ1_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ1_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz1_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma1 OTGHSHCDMA1 OTG_HS host channel-1 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA1_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA1_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma1_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar2 OTGHSHCCHAR2 OTG_HS host channel-2 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR2_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR2_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR2_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR2_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR2_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR2_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR2_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR2_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar2_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR2_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR2_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar2_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR2_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR2_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar2_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR2_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR2_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR2_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR2_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR2_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar2_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR2_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR2_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar2_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt2 OTGHSHCSPLT2 OTG_HS host channel-2 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT2_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT2_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT2_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT2_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT2_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT2_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt2_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT2_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT2_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt2_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT2_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT2_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt2_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint2 OTGHSHCINT2 OTG_HS host channel-2 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT2_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT2_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT2_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT2_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT2_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT2_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT2_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT2_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT2_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT2_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT2_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT2_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT2_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT2_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT2_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT2_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT2_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT2_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT2_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT2_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT2_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT2_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk2 OTGHSHCINTMSK2 OTG_HS host channel-2 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK2_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK2_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK2_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK2_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK2_BBERRM Babble error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK2_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK2_TXERRM Transaction error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK2_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK2_NYET response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK2_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK2_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK2_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK2_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK2_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK2_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK2_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK2_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK2_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK2_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK2_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK2_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK2_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz2 OTGHSHCTSIZ2 OTG_HS host channel-2 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ2_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ2_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz2_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ2_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ2_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz2_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ2_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ2_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz2_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma2 OTGHSHCDMA2 OTG_HS host channel-2 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA2_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA2_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma2_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar3 OTGHSHCCHAR3 OTG_HS host channel-3 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR3_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR3_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR3_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR3_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR3_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR3_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR3_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR3_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar3_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR3_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR3_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar3_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR3_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR3_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar3_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR3_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR3_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR3_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR3_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR3_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar3_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR3_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR3_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar3_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt3 OTGHSHCSPLT3 OTG_HS host channel-3 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT3_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT3_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT3_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT3_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT3_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT3_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt3_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT3_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT3_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt3_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT3_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT3_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt3_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint3 OTGHSHCINT3 OTG_HS host channel-3 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT3_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT3_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT3_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT3_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT3_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT3_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT3_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT3_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT3_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT3_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT3_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT3_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT3_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT3_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT3_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT3_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT3_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT3_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT3_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT3_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT3_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT3_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk3 OTGHSHCINTMSK3 OTG_HS host channel-3 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK3_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK3_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK3_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK3_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK3_BBERRM Babble error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK3_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK3_TXERRM Transaction error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK3_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK3_NYET response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK3_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK3_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK3_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK3_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK3_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK3_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK3_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK3_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK3_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK3_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK3_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK3_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK3_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz3 OTGHSHCTSIZ3 OTG_HS host channel-3 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ3_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ3_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz3_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ3_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ3_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz3_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ3_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ3_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz3_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma3 OTGHSHCDMA3 OTG_HS host channel-3 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA3_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA3_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma3_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar4 OTGHSHCCHAR4 OTG_HS host channel-4 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR4_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR4_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR4_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR4_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR4_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR4_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR4_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR4_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar4_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR4_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR4_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar4_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR4_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR4_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar4_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR4_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR4_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR4_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR4_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR4_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar4_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR4_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR4_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar4_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt4 OTGHSHCSPLT4 OTG_HS host channel-4 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT4_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT4_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT4_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT4_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT4_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT4_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt4_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT4_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT4_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt4_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT4_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT4_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt4_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint4 OTGHSHCINT4 OTG_HS host channel-4 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT4_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT4_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT4_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT4_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT4_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT4_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT4_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT4_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT4_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT4_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT4_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT4_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT4_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT4_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT4_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT4_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT4_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT4_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT4_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT4_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT4_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT4_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk4 OTGHSHCINTMSK4 OTG_HS host channel-4 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK4_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK4_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK4_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK4_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK4_BBERRM Babble error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK4_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK4_TXERRM Transaction error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK4_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK4_NYET response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK4_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK4_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK4_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK4_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK4_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK4_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK4_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK4_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK4_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK4_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK4_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK4_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK4_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz4 OTGHSHCTSIZ4 OTG_HS host channel-4 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ4_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ4_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz4_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ4_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ4_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz4_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ4_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ4_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz4_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma4 OTGHSHCDMA4 OTG_HS host channel-4 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA4_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA4_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma4_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar5 OTGHSHCCHAR5 OTG_HS host channel-5 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR5_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR5_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR5_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR5_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR5_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR5_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR5_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR5_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar5_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR5_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR5_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar5_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR5_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR5_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar5_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR5_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR5_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR5_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR5_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR5_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar5_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR5_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR5_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar5_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt5 OTGHSHCSPLT5 OTG_HS host channel-5 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT5_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT5_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT5_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT5_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT5_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT5_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt5_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT5_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT5_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt5_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT5_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT5_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt5_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint5 OTGHSHCINT5 OTG_HS host channel-5 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT5_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT5_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT5_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT5_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT5_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT5_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT5_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT5_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT5_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT5_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT5_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT5_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT5_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT5_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT5_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT5_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT5_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT5_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT5_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT5_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT5_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT5_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk5 OTGHSHCINTMSK5 OTG_HS host channel-5 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK5_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK5_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK5_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK5_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK5_BBERRM Babble error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK5_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK5_TXERRM Transaction error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK5_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK5_NYET response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK5_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK5_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK5_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK5_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK5_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK5_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK5_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK5_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK5_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK5_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK5_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK5_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK5_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz5 OTGHSHCTSIZ5 OTG_HS host channel-5 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ5_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ5_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz5_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ5_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ5_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz5_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ5_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ5_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz5_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma5 OTGHSHCDMA5 OTG_HS host channel-5 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA5_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA5_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma5_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar6 OTGHSHCCHAR6 OTG_HS host channel-6 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR6_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR6_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR6_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR6_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR6_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR6_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR6_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR6_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar6_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR6_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR6_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar6_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR6_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR6_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar6_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR6_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR6_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR6_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR6_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR6_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar6_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR6_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR6_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar6_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt6 OTGHSHCSPLT6 OTG_HS host channel-6 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT6_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT6_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT6_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT6_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT6_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT6_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt6_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT6_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT6_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt6_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT6_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT6_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt6_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint6 OTGHSHCINT6 OTG_HS host channel-6 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT6_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT6_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT6_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT6_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT6_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT6_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT6_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT6_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT6_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT6_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT6_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT6_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT6_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT6_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT6_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT6_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT6_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT6_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT6_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT6_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT6_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT6_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk6 OTGHSHCINTMSK6 OTG_HS host channel-6 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK6_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK6_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK6_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK6_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK6_BBERRM Babble error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK6_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK6_TXERRM Transaction error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK6_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK6_NYET response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK6_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK6_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK6_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK6_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK6_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK6_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK6_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK6_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK6_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK6_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK6_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK6_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK6_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz6 OTGHSHCTSIZ6 OTG_HS host channel-6 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ6_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ6_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz6_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ6_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ6_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz6_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ6_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ6_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz6_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma6 OTGHSHCDMA6 OTG_HS host channel-6 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA6_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA6_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma6_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar7 OTGHSHCCHAR7 OTG_HS host channel-7 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR7_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR7_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR7_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR7_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR7_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR7_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR7_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR7_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar7_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR7_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR7_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar7_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR7_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR7_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar7_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR7_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR7_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR7_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR7_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR7_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar7_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR7_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR7_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar7_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt7 OTGHSHCSPLT7 OTG_HS host channel-7 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT7_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT7_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT7_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT7_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT7_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT7_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt7_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT7_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT7_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt7_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT7_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT7_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt7_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint7 OTGHSHCINT7 OTG_HS host channel-7 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT7_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT7_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT7_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT7_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT7_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT7_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT7_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT7_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT7_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT7_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT7_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT7_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT7_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT7_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT7_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT7_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT7_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT7_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT7_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT7_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT7_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT7_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk7 OTGHSHCINTMSK7 OTG_HS host channel-7 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK7_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK7_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK7_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK7_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK7_BBERRM Babble error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK7_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK7_TXERRM Transaction error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK7_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK7_NYET response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK7_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK7_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK7_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK7_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK7_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK7_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK7_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK7_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK7_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK7_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK7_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK7_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK7_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz7 OTGHSHCTSIZ7 OTG_HS host channel-7 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ7_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ7_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz7_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ7_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ7_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz7_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ7_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ7_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz7_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma7 OTGHSHCDMA7 OTG_HS host channel-7 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA7_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA7_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma7_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar8 OTGHSHCCHAR8 OTG_HS host channel-8 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR8_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR8_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR8_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR8_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR8_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR8_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR8_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR8_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar8_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR8_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR8_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar8_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR8_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR8_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar8_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR8_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR8_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR8_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR8_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR8_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar8_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR8_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR8_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar8_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt8 OTGHSHCSPLT8 OTG_HS host channel-8 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT8_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT8_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT8_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT8_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT8_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT8_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt8_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT8_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT8_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt8_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT8_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT8_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt8_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint8 OTGHSHCINT8 OTG_HS host channel-8 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT8_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT8_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT8_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT8_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT8_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT8_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT8_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT8_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT8_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT8_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT8_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT8_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT8_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT8_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT8_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT8_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT8_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT8_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT8_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT8_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT8_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT8_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk8 OTGHSHCINTMSK8 OTG_HS host channel-8 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK8_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK8_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK8_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK8_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK8_BBERRM Babble error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK8_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK8_TXERRM Transaction error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK8_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK8_NYET response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK8_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK8_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK8_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK8_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK8_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK8_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK8_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK8_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK8_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK8_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK8_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK8_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK8_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz8 OTGHSHCTSIZ8 OTG_HS host channel-8 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ8_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ8_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz8_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ8_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ8_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz8_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ8_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ8_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz8_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma8 OTGHSHCDMA8 OTG_HS host channel-8 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA8_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA8_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma8_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar9 OTGHSHCCHAR9 OTG_HS host channel-9 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR9_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR9_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR9_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR9_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR9_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR9_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR9_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR9_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar9_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR9_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR9_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar9_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR9_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR9_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar9_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR9_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR9_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR9_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR9_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR9_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar9_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR9_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR9_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar9_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt9 OTGHSHCSPLT9 OTG_HS host channel-9 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT9_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT9_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT9_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT9_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT9_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT9_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt9_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT9_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT9_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt9_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT9_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT9_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt9_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint9 OTGHSHCINT9 OTG_HS host channel-9 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT9_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT9_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT9_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT9_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT9_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT9_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT9_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT9_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT9_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT9_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT9_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT9_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT9_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT9_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT9_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT9_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT9_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT9_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT9_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT9_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT9_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT9_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk9 OTGHSHCINTMSK9 OTG_HS host channel-9 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK9_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK9_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK9_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK9_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK9_BBERRM Babble error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK9_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK9_TXERRM Transaction error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK9_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK9_NYET response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK9_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK9_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK9_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK9_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK9_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK9_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK9_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK9_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK9_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK9_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK9_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK9_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK9_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz9 OTGHSHCTSIZ9 OTG_HS host channel-9 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ9_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ9_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz9_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ9_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ9_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz9_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ9_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ9_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz9_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma9 OTGHSHCDMA9 OTG_HS host channel-9 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA9_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA9_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma9_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar10 OTGHSHCCHAR10 OTG_HS host channel-10 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR10_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR10_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR10_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR10_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR10_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR10_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR10_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR10_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar10_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR10_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR10_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar10_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR10_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR10_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar10_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR10_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR10_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR10_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR10_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR10_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar10_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR10_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR10_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar10_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt10 OTGHSHCSPLT10 OTG_HS host channel-10 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT10_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT10_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT10_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT10_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT10_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT10_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt10_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT10_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT10_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt10_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT10_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT10_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt10_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint10 OTGHSHCINT10 OTG_HS host channel-10 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT10_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT10_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT10_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT10_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT10_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT10_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT10_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT10_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT10_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT10_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT10_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT10_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT10_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT10_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT10_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT10_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT10_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT10_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT10_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT10_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT10_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT10_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk10 OTGHSHCINTMSK10 OTG_HS host channel-10 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK10_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK10_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK10_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK10_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK10_BBERRM Babble error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK10_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK10_TXERRM Transaction error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK10_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK10_NYET response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK10_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK10_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK10_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK10_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK10_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK10_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK10_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK10_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK10_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK10_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK10_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK10_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK10_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz10 OTGHSHCTSIZ10 OTG_HS host channel-10 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ10_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ10_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz10_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ10_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ10_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz10_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ10_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ10_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz10_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma10 OTGHSHCDMA10 OTG_HS host channel-10 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA10_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA10_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma10_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar11 OTGHSHCCHAR11 OTG_HS host channel-11 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR11_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR11_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR11_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR11_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR11_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR11_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR11_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR11_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar11_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR11_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR11_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar11_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR11_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR11_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar11_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR11_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR11_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR11_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR11_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR11_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar11_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR11_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR11_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar11_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt11 OTGHSHCSPLT11 OTG_HS host channel-11 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT11_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT11_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT11_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT11_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT11_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT11_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt11_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT11_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT11_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt11_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT11_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT11_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt11_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint11 OTGHSHCINT11 OTG_HS host channel-11 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT11_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT11_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT11_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT11_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT11_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT11_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT11_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT11_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT11_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT11_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT11_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT11_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT11_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT11_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT11_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT11_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT11_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT11_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT11_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT11_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT11_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT11_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk11 OTGHSHCINTMSK11 OTG_HS host channel-11 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK11_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK11_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK11_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK11_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK11_BBERRM Babble error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK11_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK11_TXERRM Transaction error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK11_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK11_NYET response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK11_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK11_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK11_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK11_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK11_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK11_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK11_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK11_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK11_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK11_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK11_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK11_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK11_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz11 OTGHSHCTSIZ11 OTG_HS host channel-11 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ11_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ11_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz11_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ11_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ11_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz11_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ11_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ11_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz11_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma11 OTGHSHCDMA11 OTG_HS host channel-11 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA11_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA11_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma11_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar12 OTGHSHCCHAR12 OTG_HS host channel-12 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR12_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR12_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR12_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR12_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR12_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR12_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR12_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR12_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar12_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR12_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR12_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar12_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR12_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR12_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar12_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR12_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR12_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR12_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR12_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR12_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR12_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar12_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR12_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR12_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar12_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt12 OTGHSHCSPLT12 OTG_HS host channel-12 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT12_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT12_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT12_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT12_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT12_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT12_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt12_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT12_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT12_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt12_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT12_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT12_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt12_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint12 OTGHSHCINT12 OTG_HS host channel-12 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT12_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT12_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT12_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT12_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT12_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT12_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT12_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT12_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT12_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT12_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT12_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT12_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT12_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT12_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT12_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT12_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT12_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT12_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT12_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT12_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT12_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT12_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk12 OTGHSHCINTMSK12 OTG_HS host channel-12 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK12_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK12_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK12_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK12_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK12_BBERRM Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK12_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK12_TXERRM Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK12_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK12_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK12_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK12_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK12_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK12_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK12_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK12_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK12_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK12_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK12_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK12_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK12_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK12_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK12_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz12 OTGHSHCTSIZ12 OTG_HS host channel-12 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ12_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ12_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz12_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ12_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ12_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz12_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ12_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ12_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz12_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma12 OTGHSHCDMA12 OTG_HS host channel-12 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA12_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA12_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma12_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar13 OTGHSHCCHAR13 OTG_HS host channel-13 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR13_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR13_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR13_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR13_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR13_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR13_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR13_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR13_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar13_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR13_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR13_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar13_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR13_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR13_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar13_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR13_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR13_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR13_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR13_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR13_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR13_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar13_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR13_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR13_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar13_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt13 OTGHSHCSPLT13 OTG_HS host channel-13 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT13_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT13_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT13_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT13_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT13_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT13_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt13_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT13_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT13_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt13_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT13_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT13_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt13_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint13 OTGHSHCINT13 OTG_HS host channel-13 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT13_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT13_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT13_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT13_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT13_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT13_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT13_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT13_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT13_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT13_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT13_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT13_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT13_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT13_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT13_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT13_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT13_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT13_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT13_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT13_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT13_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT13_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk13 OTGHSHCINTMSK13 OTG_HS host channel-13 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK13_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK13_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK13_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK13_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK13_BBERRM Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK13_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK13_TXERRM Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK13_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK13_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK13_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK13_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK13_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK13_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK13_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK13_STALLM STALLM response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK13_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK13_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK13_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK13_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK13_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK13_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK13_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz13 OTGHSHCTSIZ13 OTG_HS host channel-13 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ13_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ13_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz13_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ13_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ13_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz13_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ13_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ13_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz13_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma13 OTGHSHCDMA13 OTG_HS host channel-13 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA13_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA13_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma13_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar14 OTGHSHCCHAR14 OTG_HS host channel-14 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR14_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR14_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR14_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR14_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR14_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR14_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR14_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR14_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar14_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR14_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR14_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar14_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR14_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR14_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar14_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR14_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR14_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR14_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR14_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR14_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR14_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar14_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR14_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR14_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar14_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt14 OTGHSHCSPLT14 OTG_HS host channel-14 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT14_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT14_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT14_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT14_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT14_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT14_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt14_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT14_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT14_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt14_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT14_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT14_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt14_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint14 OTGHSHCINT14 OTG_HS host channel-14 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT14_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT14_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT14_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT14_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT14_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT14_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT14_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT14_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT14_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT14_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT14_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT14_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT14_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT14_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT14_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT14_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT14_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT14_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT14_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT14_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT14_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT14_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk14 OTGHSHCINTMSK14 OTG_HS host channel-14 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK14_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK14_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK14_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK14_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK14_BBERRM Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK14_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK14_TXERRM Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK14_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK14_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK14_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK14_ACKM ACKM response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK14_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK14_NAKM NAKM response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK14_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK14_STALLM STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK14_STALLM		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK14_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK14_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK14_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK14_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK14_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK14_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz14 OTGHSHCTSIZ14 OTG_HS host channel-14 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ14_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ14_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz14_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ14_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ14_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz14_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ14_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ14_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz14_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma14 OTGHSHCDMA14 OTG_HS host channel-14 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA14_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA14_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma14_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcchar15 OTGHSHCCHAR15 OTG_HS host channel-15 characteristics register
@{*/

/** OTG_HS_HOST_OTG_HS_HCCHAR15_CHENA Channel enable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR15_CHENA		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCCHAR15_CHDIS Channel disable **/
#define OTG_HS_HOST_OTG_HS_HCCHAR15_CHDIS		(1 << 30)
/** OTG_HS_HOST_OTG_HS_HCCHAR15_ODDFRM Odd frame **/
#define OTG_HS_HOST_OTG_HS_HCCHAR15_ODDFRM		(1 << 29)

#define OTG_HS_HOST_OTG_HS_HCCHAR15_DAD_SHIFT		22
#define OTG_HS_HOST_OTG_HS_HCCHAR15_DAD_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcchar15_dad DAD Device address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR15_MC_SHIFT		20
#define OTG_HS_HOST_OTG_HS_HCCHAR15_MC_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar15_mc MC Multi Count (MC) / Error Count (EC)
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR15_EPTYP_SHIFT		18
#define OTG_HS_HOST_OTG_HS_HCCHAR15_EPTYP_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcchar15_eptyp EPTYP Endpoint type
@{*/
/**@}*/

/** OTG_HS_HOST_OTG_HS_HCCHAR15_LSDEV Low-speed device **/
#define OTG_HS_HOST_OTG_HS_HCCHAR15_LSDEV		(1 << 17)
/** OTG_HS_HOST_OTG_HS_HCCHAR15_EPDIR Endpoint direction **/
#define OTG_HS_HOST_OTG_HS_HCCHAR15_EPDIR		(1 << 15)

#define OTG_HS_HOST_OTG_HS_HCCHAR15_EPNUM_SHIFT		11
#define OTG_HS_HOST_OTG_HS_HCCHAR15_EPNUM_MASK		0x0f
/** @defgroup otg_hs_host_otg_hs_hcchar15_epnum EPNUM Endpoint number
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCCHAR15_MPSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCCHAR15_MPSIZ_MASK		0x7ff
/** @defgroup otg_hs_host_otg_hs_hcchar15_mpsiz MPSIZ Maximum packet size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcsplt15 OTGHSHCSPLT15 OTG_HS host channel-15 split control register
@{*/

/** OTG_HS_HOST_OTG_HS_HCSPLT15_SPLITEN Split enable **/
#define OTG_HS_HOST_OTG_HS_HCSPLT15_SPLITEN		(1 << 31)
/** OTG_HS_HOST_OTG_HS_HCSPLT15_COMPLSPLT Do complete split **/
#define OTG_HS_HOST_OTG_HS_HCSPLT15_COMPLSPLT		(1 << 16)

#define OTG_HS_HOST_OTG_HS_HCSPLT15_XACTPOS_SHIFT		14
#define OTG_HS_HOST_OTG_HS_HCSPLT15_XACTPOS_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hcsplt15_xactpos XACTPOS XACTPOS
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT15_HUBADDR_SHIFT		7
#define OTG_HS_HOST_OTG_HS_HCSPLT15_HUBADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt15_hubaddr HUBADDR Hub address
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCSPLT15_PRTADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCSPLT15_PRTADDR_MASK		0x7f
/** @defgroup otg_hs_host_otg_hs_hcsplt15_prtaddr PRTADDR Port address
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcint15 OTGHSHCINT15 OTG_HS host channel-15 interrupt register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINT15_DTERR Data toggle error **/
#define OTG_HS_HOST_OTG_HS_HCINT15_DTERR		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINT15_FRMOR Frame overrun **/
#define OTG_HS_HOST_OTG_HS_HCINT15_FRMOR		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINT15_BBERR Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINT15_BBERR		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINT15_TXERR Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINT15_TXERR		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINT15_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT15_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINT15_ACK ACK response received/transmitted interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT15_ACK		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINT15_NAK NAK response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT15_NAK		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINT15_STALL STALL response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINT15_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINT15_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINT15_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINT15_CHH Channel halted **/
#define OTG_HS_HOST_OTG_HS_HCINT15_CHH		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINT15_XFRC Transfer completed **/
#define OTG_HS_HOST_OTG_HS_HCINT15_XFRC		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcintmsk15 OTGHSHCINTMSK15 OTG_HS host channel-15 interrupt mask register
@{*/

/** OTG_HS_HOST_OTG_HS_HCINTMSK15_DTERRM Data toggle error mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK15_DTERRM		(1 << 10)
/** OTG_HS_HOST_OTG_HS_HCINTMSK15_FRMORM Frame overrun mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK15_FRMORM		(1 << 9)
/** OTG_HS_HOST_OTG_HS_HCINTMSK15_BBERRM Babble error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK15_BBERRM		(1 << 8)
/** OTG_HS_HOST_OTG_HS_HCINTMSK15_TXERRM Transaction error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK15_TXERRM		(1 << 7)
/** OTG_HS_HOST_OTG_HS_HCINTMSK15_NYET Response received interrupt **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK15_NYET		(1 << 6)
/** OTG_HS_HOST_OTG_HS_HCINTMSK15_ACKM ACK response received/transmitted interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK15_ACKM		(1 << 5)
/** OTG_HS_HOST_OTG_HS_HCINTMSK15_NAKM NAK response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK15_NAKM		(1 << 4)
/** OTG_HS_HOST_OTG_HS_HCINTMSK15_STALL STALL response received interrupt mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK15_STALL		(1 << 3)
/** OTG_HS_HOST_OTG_HS_HCINTMSK15_AHBERR AHB error **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK15_AHBERR		(1 << 2)
/** OTG_HS_HOST_OTG_HS_HCINTMSK15_CHHM Channel halted mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK15_CHHM		(1 << 1)
/** OTG_HS_HOST_OTG_HS_HCINTMSK15_XFRCM Transfer completed mask **/
#define OTG_HS_HOST_OTG_HS_HCINTMSK15_XFRCM		(1 << 0)

/**@}*/

/** @defgroup otg_hs_host_otg_hs_hctsiz15 OTGHSHCTSIZ15 OTG_HS host channel-15 transfer size register
@{*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ15_DPID_SHIFT		29
#define OTG_HS_HOST_OTG_HS_HCTSIZ15_DPID_MASK		0x03
/** @defgroup otg_hs_host_otg_hs_hctsiz15_dpid DPID Data PID
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ15_PKTCNT_SHIFT		19
#define OTG_HS_HOST_OTG_HS_HCTSIZ15_PKTCNT_MASK		0x3ff
/** @defgroup otg_hs_host_otg_hs_hctsiz15_pktcnt PKTCNT Packet count
@{*/
/**@}*/


#define OTG_HS_HOST_OTG_HS_HCTSIZ15_XFRSIZ_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCTSIZ15_XFRSIZ_MASK		0x7ffff
/** @defgroup otg_hs_host_otg_hs_hctsiz15_xfrsiz XFRSIZ Transfer size
@{*/
/**@}*/


/**@}*/

/** @defgroup otg_hs_host_otg_hs_hcdma15 OTGHSHCDMA15 OTG_HS host channel-15 DMA address register
@{*/


#define OTG_HS_HOST_OTG_HS_HCDMA15_DMAADDR_SHIFT		0
#define OTG_HS_HOST_OTG_HS_HCDMA15_DMAADDR_MASK		0xffffffff
/** @defgroup otg_hs_host_otg_hs_hcdma15_dmaaddr DMAADDR DMA address
@{*/
/**@}*/


/**@}*/

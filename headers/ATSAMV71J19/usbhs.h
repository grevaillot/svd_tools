#pragma once 

/* --- USBHS: USB High-Speed Interface ------------------------------ */

/** @defgroup usbhs_registers USB High-Speed Interface Register
@{*/

/** USBHS_USBHS_DEVCTRL Device General Control Register **/
#define USBHS_USBHS_DEVCTRL			MMIO32(USBHS_BASE + 0x00)
/** USBHS_USBHS_DEVISR Device Global Interrupt Status Register **/
#define USBHS_USBHS_DEVISR			MMIO32(USBHS_BASE + 0x04)
/** USBHS_USBHS_DEVICR Device Global Interrupt Clear Register **/
#define USBHS_USBHS_DEVICR			MMIO32(USBHS_BASE + 0x08)
/** USBHS_USBHS_DEVIFR Device Global Interrupt Set Register **/
#define USBHS_USBHS_DEVIFR			MMIO32(USBHS_BASE + 0x0c)
/** USBHS_USBHS_DEVIMR Device Global Interrupt Mask Register **/
#define USBHS_USBHS_DEVIMR			MMIO32(USBHS_BASE + 0x10)
/** USBHS_USBHS_DEVIDR Device Global Interrupt Disable Register **/
#define USBHS_USBHS_DEVIDR			MMIO32(USBHS_BASE + 0x14)
/** USBHS_USBHS_DEVIER Device Global Interrupt Enable Register **/
#define USBHS_USBHS_DEVIER			MMIO32(USBHS_BASE + 0x18)
/** USBHS_USBHS_DEVEPT Device Endpoint Register **/
#define USBHS_USBHS_DEVEPT			MMIO32(USBHS_BASE + 0x1c)
/** USBHS_USBHS_DEVFNUM Device Frame Number Register **/
#define USBHS_USBHS_DEVFNUM			MMIO32(USBHS_BASE + 0x20)
/** USBHS_USBHS_DEVEPTCFG[0] Device Endpoint Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTCFG[0]			MMIO32(USBHS_BASE + 0x100)
/** USBHS_USBHS_DEVEPTCFG[1] Device Endpoint Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTCFG[1]			MMIO32(USBHS_BASE + 0x104)
/** USBHS_USBHS_DEVEPTCFG[2] Device Endpoint Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTCFG[2]			MMIO32(USBHS_BASE + 0x108)
/** USBHS_USBHS_DEVEPTCFG[3] Device Endpoint Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTCFG[3]			MMIO32(USBHS_BASE + 0x10c)
/** USBHS_USBHS_DEVEPTCFG[4] Device Endpoint Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTCFG[4]			MMIO32(USBHS_BASE + 0x110)
/** USBHS_USBHS_DEVEPTCFG[5] Device Endpoint Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTCFG[5]			MMIO32(USBHS_BASE + 0x114)
/** USBHS_USBHS_DEVEPTCFG[6] Device Endpoint Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTCFG[6]			MMIO32(USBHS_BASE + 0x118)
/** USBHS_USBHS_DEVEPTCFG[7] Device Endpoint Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTCFG[7]			MMIO32(USBHS_BASE + 0x11c)
/** USBHS_USBHS_DEVEPTCFG[8] Device Endpoint Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTCFG[8]			MMIO32(USBHS_BASE + 0x120)
/** USBHS_USBHS_DEVEPTCFG[9] Device Endpoint Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTCFG[9]			MMIO32(USBHS_BASE + 0x124)
/** USBHS_USBHS_DEVEPTISR[0] Device Endpoint Status Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTISR[0]			MMIO32(USBHS_BASE + 0x130)
/** USBHS_USBHS_DEVEPTISR[1] Device Endpoint Status Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTISR[1]			MMIO32(USBHS_BASE + 0x134)
/** USBHS_USBHS_DEVEPTISR[2] Device Endpoint Status Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTISR[2]			MMIO32(USBHS_BASE + 0x138)
/** USBHS_USBHS_DEVEPTISR[3] Device Endpoint Status Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTISR[3]			MMIO32(USBHS_BASE + 0x13c)
/** USBHS_USBHS_DEVEPTISR[4] Device Endpoint Status Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTISR[4]			MMIO32(USBHS_BASE + 0x140)
/** USBHS_USBHS_DEVEPTISR[5] Device Endpoint Status Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTISR[5]			MMIO32(USBHS_BASE + 0x144)
/** USBHS_USBHS_DEVEPTISR[6] Device Endpoint Status Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTISR[6]			MMIO32(USBHS_BASE + 0x148)
/** USBHS_USBHS_DEVEPTISR[7] Device Endpoint Status Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTISR[7]			MMIO32(USBHS_BASE + 0x14c)
/** USBHS_USBHS_DEVEPTISR[8] Device Endpoint Status Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTISR[8]			MMIO32(USBHS_BASE + 0x150)
/** USBHS_USBHS_DEVEPTISR[9] Device Endpoint Status Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTISR[9]			MMIO32(USBHS_BASE + 0x154)
/** USBHS_USBHS_DEVEPTICR[0] Device Endpoint Clear Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTICR[0]			MMIO32(USBHS_BASE + 0x160)
/** USBHS_USBHS_DEVEPTICR[1] Device Endpoint Clear Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTICR[1]			MMIO32(USBHS_BASE + 0x164)
/** USBHS_USBHS_DEVEPTICR[2] Device Endpoint Clear Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTICR[2]			MMIO32(USBHS_BASE + 0x168)
/** USBHS_USBHS_DEVEPTICR[3] Device Endpoint Clear Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTICR[3]			MMIO32(USBHS_BASE + 0x16c)
/** USBHS_USBHS_DEVEPTICR[4] Device Endpoint Clear Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTICR[4]			MMIO32(USBHS_BASE + 0x170)
/** USBHS_USBHS_DEVEPTICR[5] Device Endpoint Clear Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTICR[5]			MMIO32(USBHS_BASE + 0x174)
/** USBHS_USBHS_DEVEPTICR[6] Device Endpoint Clear Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTICR[6]			MMIO32(USBHS_BASE + 0x178)
/** USBHS_USBHS_DEVEPTICR[7] Device Endpoint Clear Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTICR[7]			MMIO32(USBHS_BASE + 0x17c)
/** USBHS_USBHS_DEVEPTICR[8] Device Endpoint Clear Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTICR[8]			MMIO32(USBHS_BASE + 0x180)
/** USBHS_USBHS_DEVEPTICR[9] Device Endpoint Clear Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTICR[9]			MMIO32(USBHS_BASE + 0x184)
/** USBHS_USBHS_DEVEPTIFR[0] Device Endpoint Set Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIFR[0]			MMIO32(USBHS_BASE + 0x190)
/** USBHS_USBHS_DEVEPTIFR[1] Device Endpoint Set Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIFR[1]			MMIO32(USBHS_BASE + 0x194)
/** USBHS_USBHS_DEVEPTIFR[2] Device Endpoint Set Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIFR[2]			MMIO32(USBHS_BASE + 0x198)
/** USBHS_USBHS_DEVEPTIFR[3] Device Endpoint Set Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIFR[3]			MMIO32(USBHS_BASE + 0x19c)
/** USBHS_USBHS_DEVEPTIFR[4] Device Endpoint Set Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIFR[4]			MMIO32(USBHS_BASE + 0x1a0)
/** USBHS_USBHS_DEVEPTIFR[5] Device Endpoint Set Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIFR[5]			MMIO32(USBHS_BASE + 0x1a4)
/** USBHS_USBHS_DEVEPTIFR[6] Device Endpoint Set Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIFR[6]			MMIO32(USBHS_BASE + 0x1a8)
/** USBHS_USBHS_DEVEPTIFR[7] Device Endpoint Set Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIFR[7]			MMIO32(USBHS_BASE + 0x1ac)
/** USBHS_USBHS_DEVEPTIFR[8] Device Endpoint Set Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIFR[8]			MMIO32(USBHS_BASE + 0x1b0)
/** USBHS_USBHS_DEVEPTIFR[9] Device Endpoint Set Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIFR[9]			MMIO32(USBHS_BASE + 0x1b4)
/** USBHS_USBHS_DEVEPTIMR[0] Device Endpoint Mask Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIMR[0]			MMIO32(USBHS_BASE + 0x1c0)
/** USBHS_USBHS_DEVEPTIMR[1] Device Endpoint Mask Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIMR[1]			MMIO32(USBHS_BASE + 0x1c4)
/** USBHS_USBHS_DEVEPTIMR[2] Device Endpoint Mask Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIMR[2]			MMIO32(USBHS_BASE + 0x1c8)
/** USBHS_USBHS_DEVEPTIMR[3] Device Endpoint Mask Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIMR[3]			MMIO32(USBHS_BASE + 0x1cc)
/** USBHS_USBHS_DEVEPTIMR[4] Device Endpoint Mask Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIMR[4]			MMIO32(USBHS_BASE + 0x1d0)
/** USBHS_USBHS_DEVEPTIMR[5] Device Endpoint Mask Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIMR[5]			MMIO32(USBHS_BASE + 0x1d4)
/** USBHS_USBHS_DEVEPTIMR[6] Device Endpoint Mask Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIMR[6]			MMIO32(USBHS_BASE + 0x1d8)
/** USBHS_USBHS_DEVEPTIMR[7] Device Endpoint Mask Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIMR[7]			MMIO32(USBHS_BASE + 0x1dc)
/** USBHS_USBHS_DEVEPTIMR[8] Device Endpoint Mask Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIMR[8]			MMIO32(USBHS_BASE + 0x1e0)
/** USBHS_USBHS_DEVEPTIMR[9] Device Endpoint Mask Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIMR[9]			MMIO32(USBHS_BASE + 0x1e4)
/** USBHS_USBHS_DEVEPTIER[0] Device Endpoint Enable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIER[0]			MMIO32(USBHS_BASE + 0x1f0)
/** USBHS_USBHS_DEVEPTIER[1] Device Endpoint Enable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIER[1]			MMIO32(USBHS_BASE + 0x1f4)
/** USBHS_USBHS_DEVEPTIER[2] Device Endpoint Enable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIER[2]			MMIO32(USBHS_BASE + 0x1f8)
/** USBHS_USBHS_DEVEPTIER[3] Device Endpoint Enable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIER[3]			MMIO32(USBHS_BASE + 0x1fc)
/** USBHS_USBHS_DEVEPTIER[4] Device Endpoint Enable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIER[4]			MMIO32(USBHS_BASE + 0x200)
/** USBHS_USBHS_DEVEPTIER[5] Device Endpoint Enable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIER[5]			MMIO32(USBHS_BASE + 0x204)
/** USBHS_USBHS_DEVEPTIER[6] Device Endpoint Enable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIER[6]			MMIO32(USBHS_BASE + 0x208)
/** USBHS_USBHS_DEVEPTIER[7] Device Endpoint Enable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIER[7]			MMIO32(USBHS_BASE + 0x20c)
/** USBHS_USBHS_DEVEPTIER[8] Device Endpoint Enable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIER[8]			MMIO32(USBHS_BASE + 0x210)
/** USBHS_USBHS_DEVEPTIER[9] Device Endpoint Enable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIER[9]			MMIO32(USBHS_BASE + 0x214)
/** USBHS_USBHS_DEVEPTIDR[0] Device Endpoint Disable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIDR[0]			MMIO32(USBHS_BASE + 0x220)
/** USBHS_USBHS_DEVEPTIDR[1] Device Endpoint Disable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIDR[1]			MMIO32(USBHS_BASE + 0x224)
/** USBHS_USBHS_DEVEPTIDR[2] Device Endpoint Disable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIDR[2]			MMIO32(USBHS_BASE + 0x228)
/** USBHS_USBHS_DEVEPTIDR[3] Device Endpoint Disable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIDR[3]			MMIO32(USBHS_BASE + 0x22c)
/** USBHS_USBHS_DEVEPTIDR[4] Device Endpoint Disable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIDR[4]			MMIO32(USBHS_BASE + 0x230)
/** USBHS_USBHS_DEVEPTIDR[5] Device Endpoint Disable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIDR[5]			MMIO32(USBHS_BASE + 0x234)
/** USBHS_USBHS_DEVEPTIDR[6] Device Endpoint Disable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIDR[6]			MMIO32(USBHS_BASE + 0x238)
/** USBHS_USBHS_DEVEPTIDR[7] Device Endpoint Disable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIDR[7]			MMIO32(USBHS_BASE + 0x23c)
/** USBHS_USBHS_DEVEPTIDR[8] Device Endpoint Disable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIDR[8]			MMIO32(USBHS_BASE + 0x240)
/** USBHS_USBHS_DEVEPTIDR[9] Device Endpoint Disable Register (n = 0) 0 **/
#define USBHS_USBHS_DEVEPTIDR[9]			MMIO32(USBHS_BASE + 0x244)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMANXTDSC			MMIO32(USBHS_BASE + 0x310)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMAADDRESS Device DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMAADDRESS			MMIO32(USBHS_BASE + 0x314)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL Device DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL			MMIO32(USBHS_BASE + 0x318)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS Device DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS			MMIO32(USBHS_BASE + 0x31c)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMANXTDSC			MMIO32(USBHS_BASE + 0x320)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMAADDRESS Device DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMAADDRESS			MMIO32(USBHS_BASE + 0x324)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL Device DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL			MMIO32(USBHS_BASE + 0x328)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS Device DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS			MMIO32(USBHS_BASE + 0x32c)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMANXTDSC			MMIO32(USBHS_BASE + 0x330)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMAADDRESS Device DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMAADDRESS			MMIO32(USBHS_BASE + 0x334)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL Device DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL			MMIO32(USBHS_BASE + 0x338)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS Device DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS			MMIO32(USBHS_BASE + 0x33c)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMANXTDSC			MMIO32(USBHS_BASE + 0x340)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMAADDRESS Device DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMAADDRESS			MMIO32(USBHS_BASE + 0x344)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL Device DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL			MMIO32(USBHS_BASE + 0x348)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS Device DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS			MMIO32(USBHS_BASE + 0x34c)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMANXTDSC			MMIO32(USBHS_BASE + 0x350)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMAADDRESS Device DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMAADDRESS			MMIO32(USBHS_BASE + 0x354)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL Device DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL			MMIO32(USBHS_BASE + 0x358)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS Device DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS			MMIO32(USBHS_BASE + 0x35c)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMANXTDSC			MMIO32(USBHS_BASE + 0x360)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMAADDRESS Device DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMAADDRESS			MMIO32(USBHS_BASE + 0x364)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL Device DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL			MMIO32(USBHS_BASE + 0x368)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS Device DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS			MMIO32(USBHS_BASE + 0x36c)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMANXTDSC			MMIO32(USBHS_BASE + 0x370)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMAADDRESS Device DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMAADDRESS			MMIO32(USBHS_BASE + 0x374)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL Device DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL			MMIO32(USBHS_BASE + 0x378)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS Device DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS			MMIO32(USBHS_BASE + 0x37c)
/** USBHS_USBHS_HSTCTRL Host General Control Register **/
#define USBHS_USBHS_HSTCTRL			MMIO32(USBHS_BASE + 0x400)
/** USBHS_USBHS_HSTISR Host Global Interrupt Status Register **/
#define USBHS_USBHS_HSTISR			MMIO32(USBHS_BASE + 0x404)
/** USBHS_USBHS_HSTICR Host Global Interrupt Clear Register **/
#define USBHS_USBHS_HSTICR			MMIO32(USBHS_BASE + 0x408)
/** USBHS_USBHS_HSTIFR Host Global Interrupt Set Register **/
#define USBHS_USBHS_HSTIFR			MMIO32(USBHS_BASE + 0x40c)
/** USBHS_USBHS_HSTIMR Host Global Interrupt Mask Register **/
#define USBHS_USBHS_HSTIMR			MMIO32(USBHS_BASE + 0x410)
/** USBHS_USBHS_HSTIDR Host Global Interrupt Disable Register **/
#define USBHS_USBHS_HSTIDR			MMIO32(USBHS_BASE + 0x414)
/** USBHS_USBHS_HSTIER Host Global Interrupt Enable Register **/
#define USBHS_USBHS_HSTIER			MMIO32(USBHS_BASE + 0x418)
/** USBHS_USBHS_HSTPIP Host Pipe Register **/
#define USBHS_USBHS_HSTPIP			MMIO32(USBHS_BASE + 0x41c)
/** USBHS_USBHS_HSTFNUM Host Frame Number Register **/
#define USBHS_USBHS_HSTFNUM			MMIO32(USBHS_BASE + 0x420)
/** USBHS_USBHS_HSTADDR1 Host Address 1 Register **/
#define USBHS_USBHS_HSTADDR1			MMIO32(USBHS_BASE + 0x424)
/** USBHS_USBHS_HSTADDR2 Host Address 2 Register **/
#define USBHS_USBHS_HSTADDR2			MMIO32(USBHS_BASE + 0x428)
/** USBHS_USBHS_HSTADDR3 Host Address 3 Register **/
#define USBHS_USBHS_HSTADDR3			MMIO32(USBHS_BASE + 0x42c)
/** USBHS_USBHS_HSTPIPCFG[0] Host Pipe Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPCFG[0]			MMIO32(USBHS_BASE + 0x500)
/** USBHS_USBHS_HSTPIPCFG[1] Host Pipe Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPCFG[1]			MMIO32(USBHS_BASE + 0x504)
/** USBHS_USBHS_HSTPIPCFG[2] Host Pipe Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPCFG[2]			MMIO32(USBHS_BASE + 0x508)
/** USBHS_USBHS_HSTPIPCFG[3] Host Pipe Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPCFG[3]			MMIO32(USBHS_BASE + 0x50c)
/** USBHS_USBHS_HSTPIPCFG[4] Host Pipe Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPCFG[4]			MMIO32(USBHS_BASE + 0x510)
/** USBHS_USBHS_HSTPIPCFG[5] Host Pipe Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPCFG[5]			MMIO32(USBHS_BASE + 0x514)
/** USBHS_USBHS_HSTPIPCFG[6] Host Pipe Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPCFG[6]			MMIO32(USBHS_BASE + 0x518)
/** USBHS_USBHS_HSTPIPCFG[7] Host Pipe Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPCFG[7]			MMIO32(USBHS_BASE + 0x51c)
/** USBHS_USBHS_HSTPIPCFG[8] Host Pipe Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPCFG[8]			MMIO32(USBHS_BASE + 0x520)
/** USBHS_USBHS_HSTPIPCFG[9] Host Pipe Configuration Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPCFG[9]			MMIO32(USBHS_BASE + 0x524)
/** USBHS_USBHS_HSTPIPISR[0] Host Pipe Status Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPISR[0]			MMIO32(USBHS_BASE + 0x530)
/** USBHS_USBHS_HSTPIPISR[1] Host Pipe Status Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPISR[1]			MMIO32(USBHS_BASE + 0x534)
/** USBHS_USBHS_HSTPIPISR[2] Host Pipe Status Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPISR[2]			MMIO32(USBHS_BASE + 0x538)
/** USBHS_USBHS_HSTPIPISR[3] Host Pipe Status Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPISR[3]			MMIO32(USBHS_BASE + 0x53c)
/** USBHS_USBHS_HSTPIPISR[4] Host Pipe Status Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPISR[4]			MMIO32(USBHS_BASE + 0x540)
/** USBHS_USBHS_HSTPIPISR[5] Host Pipe Status Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPISR[5]			MMIO32(USBHS_BASE + 0x544)
/** USBHS_USBHS_HSTPIPISR[6] Host Pipe Status Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPISR[6]			MMIO32(USBHS_BASE + 0x548)
/** USBHS_USBHS_HSTPIPISR[7] Host Pipe Status Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPISR[7]			MMIO32(USBHS_BASE + 0x54c)
/** USBHS_USBHS_HSTPIPISR[8] Host Pipe Status Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPISR[8]			MMIO32(USBHS_BASE + 0x550)
/** USBHS_USBHS_HSTPIPISR[9] Host Pipe Status Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPISR[9]			MMIO32(USBHS_BASE + 0x554)
/** USBHS_USBHS_HSTPIPICR[0] Host Pipe Clear Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPICR[0]			MMIO32(USBHS_BASE + 0x560)
/** USBHS_USBHS_HSTPIPICR[1] Host Pipe Clear Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPICR[1]			MMIO32(USBHS_BASE + 0x564)
/** USBHS_USBHS_HSTPIPICR[2] Host Pipe Clear Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPICR[2]			MMIO32(USBHS_BASE + 0x568)
/** USBHS_USBHS_HSTPIPICR[3] Host Pipe Clear Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPICR[3]			MMIO32(USBHS_BASE + 0x56c)
/** USBHS_USBHS_HSTPIPICR[4] Host Pipe Clear Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPICR[4]			MMIO32(USBHS_BASE + 0x570)
/** USBHS_USBHS_HSTPIPICR[5] Host Pipe Clear Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPICR[5]			MMIO32(USBHS_BASE + 0x574)
/** USBHS_USBHS_HSTPIPICR[6] Host Pipe Clear Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPICR[6]			MMIO32(USBHS_BASE + 0x578)
/** USBHS_USBHS_HSTPIPICR[7] Host Pipe Clear Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPICR[7]			MMIO32(USBHS_BASE + 0x57c)
/** USBHS_USBHS_HSTPIPICR[8] Host Pipe Clear Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPICR[8]			MMIO32(USBHS_BASE + 0x580)
/** USBHS_USBHS_HSTPIPICR[9] Host Pipe Clear Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPICR[9]			MMIO32(USBHS_BASE + 0x584)
/** USBHS_USBHS_HSTPIPIFR[0] Host Pipe Set Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIFR[0]			MMIO32(USBHS_BASE + 0x590)
/** USBHS_USBHS_HSTPIPIFR[1] Host Pipe Set Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIFR[1]			MMIO32(USBHS_BASE + 0x594)
/** USBHS_USBHS_HSTPIPIFR[2] Host Pipe Set Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIFR[2]			MMIO32(USBHS_BASE + 0x598)
/** USBHS_USBHS_HSTPIPIFR[3] Host Pipe Set Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIFR[3]			MMIO32(USBHS_BASE + 0x59c)
/** USBHS_USBHS_HSTPIPIFR[4] Host Pipe Set Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIFR[4]			MMIO32(USBHS_BASE + 0x5a0)
/** USBHS_USBHS_HSTPIPIFR[5] Host Pipe Set Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIFR[5]			MMIO32(USBHS_BASE + 0x5a4)
/** USBHS_USBHS_HSTPIPIFR[6] Host Pipe Set Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIFR[6]			MMIO32(USBHS_BASE + 0x5a8)
/** USBHS_USBHS_HSTPIPIFR[7] Host Pipe Set Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIFR[7]			MMIO32(USBHS_BASE + 0x5ac)
/** USBHS_USBHS_HSTPIPIFR[8] Host Pipe Set Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIFR[8]			MMIO32(USBHS_BASE + 0x5b0)
/** USBHS_USBHS_HSTPIPIFR[9] Host Pipe Set Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIFR[9]			MMIO32(USBHS_BASE + 0x5b4)
/** USBHS_USBHS_HSTPIPIMR[0] Host Pipe Mask Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIMR[0]			MMIO32(USBHS_BASE + 0x5c0)
/** USBHS_USBHS_HSTPIPIMR[1] Host Pipe Mask Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIMR[1]			MMIO32(USBHS_BASE + 0x5c4)
/** USBHS_USBHS_HSTPIPIMR[2] Host Pipe Mask Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIMR[2]			MMIO32(USBHS_BASE + 0x5c8)
/** USBHS_USBHS_HSTPIPIMR[3] Host Pipe Mask Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIMR[3]			MMIO32(USBHS_BASE + 0x5cc)
/** USBHS_USBHS_HSTPIPIMR[4] Host Pipe Mask Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIMR[4]			MMIO32(USBHS_BASE + 0x5d0)
/** USBHS_USBHS_HSTPIPIMR[5] Host Pipe Mask Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIMR[5]			MMIO32(USBHS_BASE + 0x5d4)
/** USBHS_USBHS_HSTPIPIMR[6] Host Pipe Mask Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIMR[6]			MMIO32(USBHS_BASE + 0x5d8)
/** USBHS_USBHS_HSTPIPIMR[7] Host Pipe Mask Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIMR[7]			MMIO32(USBHS_BASE + 0x5dc)
/** USBHS_USBHS_HSTPIPIMR[8] Host Pipe Mask Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIMR[8]			MMIO32(USBHS_BASE + 0x5e0)
/** USBHS_USBHS_HSTPIPIMR[9] Host Pipe Mask Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIMR[9]			MMIO32(USBHS_BASE + 0x5e4)
/** USBHS_USBHS_HSTPIPIER[0] Host Pipe Enable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIER[0]			MMIO32(USBHS_BASE + 0x5f0)
/** USBHS_USBHS_HSTPIPIER[1] Host Pipe Enable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIER[1]			MMIO32(USBHS_BASE + 0x5f4)
/** USBHS_USBHS_HSTPIPIER[2] Host Pipe Enable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIER[2]			MMIO32(USBHS_BASE + 0x5f8)
/** USBHS_USBHS_HSTPIPIER[3] Host Pipe Enable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIER[3]			MMIO32(USBHS_BASE + 0x5fc)
/** USBHS_USBHS_HSTPIPIER[4] Host Pipe Enable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIER[4]			MMIO32(USBHS_BASE + 0x600)
/** USBHS_USBHS_HSTPIPIER[5] Host Pipe Enable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIER[5]			MMIO32(USBHS_BASE + 0x604)
/** USBHS_USBHS_HSTPIPIER[6] Host Pipe Enable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIER[6]			MMIO32(USBHS_BASE + 0x608)
/** USBHS_USBHS_HSTPIPIER[7] Host Pipe Enable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIER[7]			MMIO32(USBHS_BASE + 0x60c)
/** USBHS_USBHS_HSTPIPIER[8] Host Pipe Enable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIER[8]			MMIO32(USBHS_BASE + 0x610)
/** USBHS_USBHS_HSTPIPIER[9] Host Pipe Enable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIER[9]			MMIO32(USBHS_BASE + 0x614)
/** USBHS_USBHS_HSTPIPIDR[0] Host Pipe Disable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIDR[0]			MMIO32(USBHS_BASE + 0x620)
/** USBHS_USBHS_HSTPIPIDR[1] Host Pipe Disable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIDR[1]			MMIO32(USBHS_BASE + 0x624)
/** USBHS_USBHS_HSTPIPIDR[2] Host Pipe Disable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIDR[2]			MMIO32(USBHS_BASE + 0x628)
/** USBHS_USBHS_HSTPIPIDR[3] Host Pipe Disable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIDR[3]			MMIO32(USBHS_BASE + 0x62c)
/** USBHS_USBHS_HSTPIPIDR[4] Host Pipe Disable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIDR[4]			MMIO32(USBHS_BASE + 0x630)
/** USBHS_USBHS_HSTPIPIDR[5] Host Pipe Disable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIDR[5]			MMIO32(USBHS_BASE + 0x634)
/** USBHS_USBHS_HSTPIPIDR[6] Host Pipe Disable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIDR[6]			MMIO32(USBHS_BASE + 0x638)
/** USBHS_USBHS_HSTPIPIDR[7] Host Pipe Disable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIDR[7]			MMIO32(USBHS_BASE + 0x63c)
/** USBHS_USBHS_HSTPIPIDR[8] Host Pipe Disable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIDR[8]			MMIO32(USBHS_BASE + 0x640)
/** USBHS_USBHS_HSTPIPIDR[9] Host Pipe Disable Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPIDR[9]			MMIO32(USBHS_BASE + 0x644)
/** USBHS_USBHS_HSTPIPINRQ[0] Host Pipe IN Request Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPINRQ[0]			MMIO32(USBHS_BASE + 0x650)
/** USBHS_USBHS_HSTPIPINRQ[1] Host Pipe IN Request Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPINRQ[1]			MMIO32(USBHS_BASE + 0x654)
/** USBHS_USBHS_HSTPIPINRQ[2] Host Pipe IN Request Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPINRQ[2]			MMIO32(USBHS_BASE + 0x658)
/** USBHS_USBHS_HSTPIPINRQ[3] Host Pipe IN Request Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPINRQ[3]			MMIO32(USBHS_BASE + 0x65c)
/** USBHS_USBHS_HSTPIPINRQ[4] Host Pipe IN Request Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPINRQ[4]			MMIO32(USBHS_BASE + 0x660)
/** USBHS_USBHS_HSTPIPINRQ[5] Host Pipe IN Request Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPINRQ[5]			MMIO32(USBHS_BASE + 0x664)
/** USBHS_USBHS_HSTPIPINRQ[6] Host Pipe IN Request Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPINRQ[6]			MMIO32(USBHS_BASE + 0x668)
/** USBHS_USBHS_HSTPIPINRQ[7] Host Pipe IN Request Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPINRQ[7]			MMIO32(USBHS_BASE + 0x66c)
/** USBHS_USBHS_HSTPIPINRQ[8] Host Pipe IN Request Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPINRQ[8]			MMIO32(USBHS_BASE + 0x670)
/** USBHS_USBHS_HSTPIPINRQ[9] Host Pipe IN Request Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPINRQ[9]			MMIO32(USBHS_BASE + 0x674)
/** USBHS_USBHS_HSTPIPERR[0] Host Pipe Error Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPERR[0]			MMIO32(USBHS_BASE + 0x680)
/** USBHS_USBHS_HSTPIPERR[1] Host Pipe Error Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPERR[1]			MMIO32(USBHS_BASE + 0x684)
/** USBHS_USBHS_HSTPIPERR[2] Host Pipe Error Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPERR[2]			MMIO32(USBHS_BASE + 0x688)
/** USBHS_USBHS_HSTPIPERR[3] Host Pipe Error Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPERR[3]			MMIO32(USBHS_BASE + 0x68c)
/** USBHS_USBHS_HSTPIPERR[4] Host Pipe Error Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPERR[4]			MMIO32(USBHS_BASE + 0x690)
/** USBHS_USBHS_HSTPIPERR[5] Host Pipe Error Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPERR[5]			MMIO32(USBHS_BASE + 0x694)
/** USBHS_USBHS_HSTPIPERR[6] Host Pipe Error Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPERR[6]			MMIO32(USBHS_BASE + 0x698)
/** USBHS_USBHS_HSTPIPERR[7] Host Pipe Error Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPERR[7]			MMIO32(USBHS_BASE + 0x69c)
/** USBHS_USBHS_HSTPIPERR[8] Host Pipe Error Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPERR[8]			MMIO32(USBHS_BASE + 0x6a0)
/** USBHS_USBHS_HSTPIPERR[9] Host Pipe Error Register (n = 0) 0 **/
#define USBHS_USBHS_HSTPIPERR[9]			MMIO32(USBHS_BASE + 0x6a4)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMANXTDSC			MMIO32(USBHS_BASE + 0x710)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMAADDRESS Host DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMAADDRESS			MMIO32(USBHS_BASE + 0x714)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL Host DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL			MMIO32(USBHS_BASE + 0x718)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS Host DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS			MMIO32(USBHS_BASE + 0x71c)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMANXTDSC			MMIO32(USBHS_BASE + 0x720)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMAADDRESS Host DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMAADDRESS			MMIO32(USBHS_BASE + 0x724)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL Host DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL			MMIO32(USBHS_BASE + 0x728)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS Host DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS			MMIO32(USBHS_BASE + 0x72c)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMANXTDSC			MMIO32(USBHS_BASE + 0x730)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMAADDRESS Host DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMAADDRESS			MMIO32(USBHS_BASE + 0x734)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL Host DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL			MMIO32(USBHS_BASE + 0x738)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS Host DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS			MMIO32(USBHS_BASE + 0x73c)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMANXTDSC			MMIO32(USBHS_BASE + 0x740)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMAADDRESS Host DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMAADDRESS			MMIO32(USBHS_BASE + 0x744)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL Host DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL			MMIO32(USBHS_BASE + 0x748)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS Host DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS			MMIO32(USBHS_BASE + 0x74c)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMANXTDSC			MMIO32(USBHS_BASE + 0x750)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMAADDRESS Host DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMAADDRESS			MMIO32(USBHS_BASE + 0x754)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL Host DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL			MMIO32(USBHS_BASE + 0x758)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS Host DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS			MMIO32(USBHS_BASE + 0x75c)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMANXTDSC			MMIO32(USBHS_BASE + 0x760)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMAADDRESS Host DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMAADDRESS			MMIO32(USBHS_BASE + 0x764)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL Host DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL			MMIO32(USBHS_BASE + 0x768)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS Host DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS			MMIO32(USBHS_BASE + 0x76c)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMANXTDSC			MMIO32(USBHS_BASE + 0x770)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMAADDRESS Host DMA Channel Address Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMAADDRESS			MMIO32(USBHS_BASE + 0x774)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL Host DMA Channel Control Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL			MMIO32(USBHS_BASE + 0x778)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS Host DMA Channel Status Register (n = 1) **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS			MMIO32(USBHS_BASE + 0x77c)
/** USBHS_USBHS_CTRL General Control Register **/
#define USBHS_USBHS_CTRL			MMIO32(USBHS_BASE + 0x800)
/** USBHS_USBHS_SR General Status Register **/
#define USBHS_USBHS_SR			MMIO32(USBHS_BASE + 0x804)
/** USBHS_USBHS_SCR General Status Clear Register **/
#define USBHS_USBHS_SCR			MMIO32(USBHS_BASE + 0x808)
/** USBHS_USBHS_SFR General Status Set Register **/
#define USBHS_USBHS_SFR			MMIO32(USBHS_BASE + 0x80c)
/** USBHS_USBHS_TSTA1 General Test A1 Register **/
#define USBHS_USBHS_TSTA1			MMIO32(USBHS_BASE + 0x810)
/** USBHS_USBHS_TSTA2 General Test A2 Register **/
#define USBHS_USBHS_TSTA2			MMIO32(USBHS_BASE + 0x814)
/** USBHS_USBHS_VERSION General Version Register **/
#define USBHS_USBHS_VERSION			MMIO32(USBHS_BASE + 0x818)
/** USBHS_USBHS_FSM General Finite State Machine Register **/
#define USBHS_USBHS_FSM			MMIO32(USBHS_BASE + 0x82c)

/**@}*/


/** @defgroup usbhs_usbhs_devctrl USBHSDEVCTRL Device General Control Register
@{*/

/** USBHS_USBHS_DEVCTRL_OPMODE2 Specific Operational mode **/
#define USBHS_USBHS_DEVCTRL_OPMODE2		(1 << 16)
/** USBHS_USBHS_DEVCTRL_TSTPCKT Test packet mode **/
#define USBHS_USBHS_DEVCTRL_TSTPCKT		(1 << 15)
/** USBHS_USBHS_DEVCTRL_TSTK Test mode K **/
#define USBHS_USBHS_DEVCTRL_TSTK		(1 << 14)
/** USBHS_USBHS_DEVCTRL_TSTJ Test mode J **/
#define USBHS_USBHS_DEVCTRL_TSTJ		(1 << 13)
/** USBHS_USBHS_DEVCTRL_LS Low-Speed Mode Force **/
#define USBHS_USBHS_DEVCTRL_LS		(1 << 12)

#define USBHS_USBHS_DEVCTRL_SPDCONF_SHIFT		10
#define USBHS_USBHS_DEVCTRL_SPDCONF_MASK		0x03
/** @defgroup usbhs_usbhs_devctrl_spdconf SPDCONF Mode Configuration
@{*/
/**@}*/

/** USBHS_USBHS_DEVCTRL_RMWKUP Remote Wake-Up **/
#define USBHS_USBHS_DEVCTRL_RMWKUP		(1 << 9)
/** USBHS_USBHS_DEVCTRL_DETACH Detach **/
#define USBHS_USBHS_DEVCTRL_DETACH		(1 << 8)
/** USBHS_USBHS_DEVCTRL_ADDEN Address Enable **/
#define USBHS_USBHS_DEVCTRL_ADDEN		(1 << 7)

#define USBHS_USBHS_DEVCTRL_UADD_SHIFT		0
#define USBHS_USBHS_DEVCTRL_UADD_MASK		0x7f
/** @defgroup usbhs_usbhs_devctrl_uadd UADD USB Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devisr USBHSDEVISR Device Global Interrupt Status Register
@{*/

/** USBHS_USBHS_DEVISR_DMA_7 DMA Channel 7 Interrupt **/
#define USBHS_USBHS_DEVISR_DMA_7		(1 << 31)
/** USBHS_USBHS_DEVISR_DMA_6 DMA Channel 6 Interrupt **/
#define USBHS_USBHS_DEVISR_DMA_6		(1 << 30)
/** USBHS_USBHS_DEVISR_DMA_5 DMA Channel 5 Interrupt **/
#define USBHS_USBHS_DEVISR_DMA_5		(1 << 29)
/** USBHS_USBHS_DEVISR_DMA_4 DMA Channel 4 Interrupt **/
#define USBHS_USBHS_DEVISR_DMA_4		(1 << 28)
/** USBHS_USBHS_DEVISR_DMA_3 DMA Channel 3 Interrupt **/
#define USBHS_USBHS_DEVISR_DMA_3		(1 << 27)
/** USBHS_USBHS_DEVISR_DMA_2 DMA Channel 2 Interrupt **/
#define USBHS_USBHS_DEVISR_DMA_2		(1 << 26)
/** USBHS_USBHS_DEVISR_DMA_1 DMA Channel 1 Interrupt **/
#define USBHS_USBHS_DEVISR_DMA_1		(1 << 25)
/** USBHS_USBHS_DEVISR_PEP_9 Endpoint 9 Interrupt **/
#define USBHS_USBHS_DEVISR_PEP_9		(1 << 21)
/** USBHS_USBHS_DEVISR_PEP_8 Endpoint 8 Interrupt **/
#define USBHS_USBHS_DEVISR_PEP_8		(1 << 20)
/** USBHS_USBHS_DEVISR_PEP_7 Endpoint 7 Interrupt **/
#define USBHS_USBHS_DEVISR_PEP_7		(1 << 19)
/** USBHS_USBHS_DEVISR_PEP_6 Endpoint 6 Interrupt **/
#define USBHS_USBHS_DEVISR_PEP_6		(1 << 18)
/** USBHS_USBHS_DEVISR_PEP_5 Endpoint 5 Interrupt **/
#define USBHS_USBHS_DEVISR_PEP_5		(1 << 17)
/** USBHS_USBHS_DEVISR_PEP_4 Endpoint 4 Interrupt **/
#define USBHS_USBHS_DEVISR_PEP_4		(1 << 16)
/** USBHS_USBHS_DEVISR_PEP_3 Endpoint 3 Interrupt **/
#define USBHS_USBHS_DEVISR_PEP_3		(1 << 15)
/** USBHS_USBHS_DEVISR_PEP_2 Endpoint 2 Interrupt **/
#define USBHS_USBHS_DEVISR_PEP_2		(1 << 14)
/** USBHS_USBHS_DEVISR_PEP_1 Endpoint 1 Interrupt **/
#define USBHS_USBHS_DEVISR_PEP_1		(1 << 13)
/** USBHS_USBHS_DEVISR_PEP_0 Endpoint 0 Interrupt **/
#define USBHS_USBHS_DEVISR_PEP_0		(1 << 12)
/** USBHS_USBHS_DEVISR_UPRSM Upstream Resume Interrupt **/
#define USBHS_USBHS_DEVISR_UPRSM		(1 << 6)
/** USBHS_USBHS_DEVISR_EORSM End of Resume Interrupt **/
#define USBHS_USBHS_DEVISR_EORSM		(1 << 5)
/** USBHS_USBHS_DEVISR_WAKEUP Wake-Up Interrupt **/
#define USBHS_USBHS_DEVISR_WAKEUP		(1 << 4)
/** USBHS_USBHS_DEVISR_EORST End of Reset Interrupt **/
#define USBHS_USBHS_DEVISR_EORST		(1 << 3)
/** USBHS_USBHS_DEVISR_SOF Start of Frame Interrupt **/
#define USBHS_USBHS_DEVISR_SOF		(1 << 2)
/** USBHS_USBHS_DEVISR_MSOF Micro Start of Frame Interrupt **/
#define USBHS_USBHS_DEVISR_MSOF		(1 << 1)
/** USBHS_USBHS_DEVISR_SUSP Suspend Interrupt **/
#define USBHS_USBHS_DEVISR_SUSP		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devicr USBHSDEVICR Device Global Interrupt Clear Register
@{*/

/** USBHS_USBHS_DEVICR_UPRSMC Upstream Resume Interrupt Clear **/
#define USBHS_USBHS_DEVICR_UPRSMC		(1 << 6)
/** USBHS_USBHS_DEVICR_EORSMC End of Resume Interrupt Clear **/
#define USBHS_USBHS_DEVICR_EORSMC		(1 << 5)
/** USBHS_USBHS_DEVICR_WAKEUPC Wake-Up Interrupt Clear **/
#define USBHS_USBHS_DEVICR_WAKEUPC		(1 << 4)
/** USBHS_USBHS_DEVICR_EORSTC End of Reset Interrupt Clear **/
#define USBHS_USBHS_DEVICR_EORSTC		(1 << 3)
/** USBHS_USBHS_DEVICR_SOFC Start of Frame Interrupt Clear **/
#define USBHS_USBHS_DEVICR_SOFC		(1 << 2)
/** USBHS_USBHS_DEVICR_MSOFC Micro Start of Frame Interrupt Clear **/
#define USBHS_USBHS_DEVICR_MSOFC		(1 << 1)
/** USBHS_USBHS_DEVICR_SUSPC Suspend Interrupt Clear **/
#define USBHS_USBHS_DEVICR_SUSPC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devifr USBHSDEVIFR Device Global Interrupt Set Register
@{*/

/** USBHS_USBHS_DEVIFR_DMA_7 DMA Channel 7 Interrupt Set **/
#define USBHS_USBHS_DEVIFR_DMA_7		(1 << 31)
/** USBHS_USBHS_DEVIFR_DMA_6 DMA Channel 6 Interrupt Set **/
#define USBHS_USBHS_DEVIFR_DMA_6		(1 << 30)
/** USBHS_USBHS_DEVIFR_DMA_5 DMA Channel 5 Interrupt Set **/
#define USBHS_USBHS_DEVIFR_DMA_5		(1 << 29)
/** USBHS_USBHS_DEVIFR_DMA_4 DMA Channel 4 Interrupt Set **/
#define USBHS_USBHS_DEVIFR_DMA_4		(1 << 28)
/** USBHS_USBHS_DEVIFR_DMA_3 DMA Channel 3 Interrupt Set **/
#define USBHS_USBHS_DEVIFR_DMA_3		(1 << 27)
/** USBHS_USBHS_DEVIFR_DMA_2 DMA Channel 2 Interrupt Set **/
#define USBHS_USBHS_DEVIFR_DMA_2		(1 << 26)
/** USBHS_USBHS_DEVIFR_DMA_1 DMA Channel 1 Interrupt Set **/
#define USBHS_USBHS_DEVIFR_DMA_1		(1 << 25)
/** USBHS_USBHS_DEVIFR_UPRSMS Upstream Resume Interrupt Set **/
#define USBHS_USBHS_DEVIFR_UPRSMS		(1 << 6)
/** USBHS_USBHS_DEVIFR_EORSMS End of Resume Interrupt Set **/
#define USBHS_USBHS_DEVIFR_EORSMS		(1 << 5)
/** USBHS_USBHS_DEVIFR_WAKEUPS Wake-Up Interrupt Set **/
#define USBHS_USBHS_DEVIFR_WAKEUPS		(1 << 4)
/** USBHS_USBHS_DEVIFR_EORSTS End of Reset Interrupt Set **/
#define USBHS_USBHS_DEVIFR_EORSTS		(1 << 3)
/** USBHS_USBHS_DEVIFR_SOFS Start of Frame Interrupt Set **/
#define USBHS_USBHS_DEVIFR_SOFS		(1 << 2)
/** USBHS_USBHS_DEVIFR_MSOFS Micro Start of Frame Interrupt Set **/
#define USBHS_USBHS_DEVIFR_MSOFS		(1 << 1)
/** USBHS_USBHS_DEVIFR_SUSPS Suspend Interrupt Set **/
#define USBHS_USBHS_DEVIFR_SUSPS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devimr USBHSDEVIMR Device Global Interrupt Mask Register
@{*/

/** USBHS_USBHS_DEVIMR_DMA_7 DMA Channel 7 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_DMA_7		(1 << 31)
/** USBHS_USBHS_DEVIMR_DMA_6 DMA Channel 6 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_DMA_6		(1 << 30)
/** USBHS_USBHS_DEVIMR_DMA_5 DMA Channel 5 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_DMA_5		(1 << 29)
/** USBHS_USBHS_DEVIMR_DMA_4 DMA Channel 4 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_DMA_4		(1 << 28)
/** USBHS_USBHS_DEVIMR_DMA_3 DMA Channel 3 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_DMA_3		(1 << 27)
/** USBHS_USBHS_DEVIMR_DMA_2 DMA Channel 2 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_DMA_2		(1 << 26)
/** USBHS_USBHS_DEVIMR_DMA_1 DMA Channel 1 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_DMA_1		(1 << 25)
/** USBHS_USBHS_DEVIMR_PEP_9 Endpoint 9 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_PEP_9		(1 << 21)
/** USBHS_USBHS_DEVIMR_PEP_8 Endpoint 8 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_PEP_8		(1 << 20)
/** USBHS_USBHS_DEVIMR_PEP_7 Endpoint 7 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_PEP_7		(1 << 19)
/** USBHS_USBHS_DEVIMR_PEP_6 Endpoint 6 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_PEP_6		(1 << 18)
/** USBHS_USBHS_DEVIMR_PEP_5 Endpoint 5 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_PEP_5		(1 << 17)
/** USBHS_USBHS_DEVIMR_PEP_4 Endpoint 4 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_PEP_4		(1 << 16)
/** USBHS_USBHS_DEVIMR_PEP_3 Endpoint 3 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_PEP_3		(1 << 15)
/** USBHS_USBHS_DEVIMR_PEP_2 Endpoint 2 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_PEP_2		(1 << 14)
/** USBHS_USBHS_DEVIMR_PEP_1 Endpoint 1 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_PEP_1		(1 << 13)
/** USBHS_USBHS_DEVIMR_PEP_0 Endpoint 0 Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_PEP_0		(1 << 12)
/** USBHS_USBHS_DEVIMR_UPRSME Upstream Resume Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_UPRSME		(1 << 6)
/** USBHS_USBHS_DEVIMR_EORSME End of Resume Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_EORSME		(1 << 5)
/** USBHS_USBHS_DEVIMR_WAKEUPE Wake-Up Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_WAKEUPE		(1 << 4)
/** USBHS_USBHS_DEVIMR_EORSTE End of Reset Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_EORSTE		(1 << 3)
/** USBHS_USBHS_DEVIMR_SOFE Start of Frame Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_SOFE		(1 << 2)
/** USBHS_USBHS_DEVIMR_MSOFE Micro Start of Frame Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_MSOFE		(1 << 1)
/** USBHS_USBHS_DEVIMR_SUSPE Suspend Interrupt Mask **/
#define USBHS_USBHS_DEVIMR_SUSPE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devidr USBHSDEVIDR Device Global Interrupt Disable Register
@{*/

/** USBHS_USBHS_DEVIDR_DMA_7 DMA Channel 7 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_DMA_7		(1 << 31)
/** USBHS_USBHS_DEVIDR_DMA_6 DMA Channel 6 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_DMA_6		(1 << 30)
/** USBHS_USBHS_DEVIDR_DMA_5 DMA Channel 5 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_DMA_5		(1 << 29)
/** USBHS_USBHS_DEVIDR_DMA_4 DMA Channel 4 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_DMA_4		(1 << 28)
/** USBHS_USBHS_DEVIDR_DMA_3 DMA Channel 3 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_DMA_3		(1 << 27)
/** USBHS_USBHS_DEVIDR_DMA_2 DMA Channel 2 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_DMA_2		(1 << 26)
/** USBHS_USBHS_DEVIDR_DMA_1 DMA Channel 1 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_DMA_1		(1 << 25)
/** USBHS_USBHS_DEVIDR_PEP_9 Endpoint 9 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_PEP_9		(1 << 21)
/** USBHS_USBHS_DEVIDR_PEP_8 Endpoint 8 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_PEP_8		(1 << 20)
/** USBHS_USBHS_DEVIDR_PEP_7 Endpoint 7 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_PEP_7		(1 << 19)
/** USBHS_USBHS_DEVIDR_PEP_6 Endpoint 6 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_PEP_6		(1 << 18)
/** USBHS_USBHS_DEVIDR_PEP_5 Endpoint 5 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_PEP_5		(1 << 17)
/** USBHS_USBHS_DEVIDR_PEP_4 Endpoint 4 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_PEP_4		(1 << 16)
/** USBHS_USBHS_DEVIDR_PEP_3 Endpoint 3 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_PEP_3		(1 << 15)
/** USBHS_USBHS_DEVIDR_PEP_2 Endpoint 2 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_PEP_2		(1 << 14)
/** USBHS_USBHS_DEVIDR_PEP_1 Endpoint 1 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_PEP_1		(1 << 13)
/** USBHS_USBHS_DEVIDR_PEP_0 Endpoint 0 Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_PEP_0		(1 << 12)
/** USBHS_USBHS_DEVIDR_UPRSMEC Upstream Resume Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_UPRSMEC		(1 << 6)
/** USBHS_USBHS_DEVIDR_EORSMEC End of Resume Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_EORSMEC		(1 << 5)
/** USBHS_USBHS_DEVIDR_WAKEUPEC Wake-Up Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_WAKEUPEC		(1 << 4)
/** USBHS_USBHS_DEVIDR_EORSTEC End of Reset Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_EORSTEC		(1 << 3)
/** USBHS_USBHS_DEVIDR_SOFEC Start of Frame Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_SOFEC		(1 << 2)
/** USBHS_USBHS_DEVIDR_MSOFEC Micro Start of Frame Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_MSOFEC		(1 << 1)
/** USBHS_USBHS_DEVIDR_SUSPEC Suspend Interrupt Disable **/
#define USBHS_USBHS_DEVIDR_SUSPEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devier USBHSDEVIER Device Global Interrupt Enable Register
@{*/

/** USBHS_USBHS_DEVIER_DMA_7 DMA Channel 7 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_DMA_7		(1 << 31)
/** USBHS_USBHS_DEVIER_DMA_6 DMA Channel 6 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_DMA_6		(1 << 30)
/** USBHS_USBHS_DEVIER_DMA_5 DMA Channel 5 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_DMA_5		(1 << 29)
/** USBHS_USBHS_DEVIER_DMA_4 DMA Channel 4 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_DMA_4		(1 << 28)
/** USBHS_USBHS_DEVIER_DMA_3 DMA Channel 3 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_DMA_3		(1 << 27)
/** USBHS_USBHS_DEVIER_DMA_2 DMA Channel 2 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_DMA_2		(1 << 26)
/** USBHS_USBHS_DEVIER_DMA_1 DMA Channel 1 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_DMA_1		(1 << 25)
/** USBHS_USBHS_DEVIER_PEP_9 Endpoint 9 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_PEP_9		(1 << 21)
/** USBHS_USBHS_DEVIER_PEP_8 Endpoint 8 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_PEP_8		(1 << 20)
/** USBHS_USBHS_DEVIER_PEP_7 Endpoint 7 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_PEP_7		(1 << 19)
/** USBHS_USBHS_DEVIER_PEP_6 Endpoint 6 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_PEP_6		(1 << 18)
/** USBHS_USBHS_DEVIER_PEP_5 Endpoint 5 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_PEP_5		(1 << 17)
/** USBHS_USBHS_DEVIER_PEP_4 Endpoint 4 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_PEP_4		(1 << 16)
/** USBHS_USBHS_DEVIER_PEP_3 Endpoint 3 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_PEP_3		(1 << 15)
/** USBHS_USBHS_DEVIER_PEP_2 Endpoint 2 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_PEP_2		(1 << 14)
/** USBHS_USBHS_DEVIER_PEP_1 Endpoint 1 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_PEP_1		(1 << 13)
/** USBHS_USBHS_DEVIER_PEP_0 Endpoint 0 Interrupt Enable **/
#define USBHS_USBHS_DEVIER_PEP_0		(1 << 12)
/** USBHS_USBHS_DEVIER_UPRSMES Upstream Resume Interrupt Enable **/
#define USBHS_USBHS_DEVIER_UPRSMES		(1 << 6)
/** USBHS_USBHS_DEVIER_EORSMES End of Resume Interrupt Enable **/
#define USBHS_USBHS_DEVIER_EORSMES		(1 << 5)
/** USBHS_USBHS_DEVIER_WAKEUPES Wake-Up Interrupt Enable **/
#define USBHS_USBHS_DEVIER_WAKEUPES		(1 << 4)
/** USBHS_USBHS_DEVIER_EORSTES End of Reset Interrupt Enable **/
#define USBHS_USBHS_DEVIER_EORSTES		(1 << 3)
/** USBHS_USBHS_DEVIER_SOFES Start of Frame Interrupt Enable **/
#define USBHS_USBHS_DEVIER_SOFES		(1 << 2)
/** USBHS_USBHS_DEVIER_MSOFES Micro Start of Frame Interrupt Enable **/
#define USBHS_USBHS_DEVIER_MSOFES		(1 << 1)
/** USBHS_USBHS_DEVIER_SUSPES Suspend Interrupt Enable **/
#define USBHS_USBHS_DEVIER_SUSPES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devept USBHSDEVEPT Device Endpoint Register
@{*/

/** USBHS_USBHS_DEVEPT_EPRST9 Endpoint 9 Reset **/
#define USBHS_USBHS_DEVEPT_EPRST9		(1 << 25)
/** USBHS_USBHS_DEVEPT_EPRST8 Endpoint 8 Reset **/
#define USBHS_USBHS_DEVEPT_EPRST8		(1 << 24)
/** USBHS_USBHS_DEVEPT_EPRST7 Endpoint 7 Reset **/
#define USBHS_USBHS_DEVEPT_EPRST7		(1 << 23)
/** USBHS_USBHS_DEVEPT_EPRST6 Endpoint 6 Reset **/
#define USBHS_USBHS_DEVEPT_EPRST6		(1 << 22)
/** USBHS_USBHS_DEVEPT_EPRST5 Endpoint 5 Reset **/
#define USBHS_USBHS_DEVEPT_EPRST5		(1 << 21)
/** USBHS_USBHS_DEVEPT_EPRST4 Endpoint 4 Reset **/
#define USBHS_USBHS_DEVEPT_EPRST4		(1 << 20)
/** USBHS_USBHS_DEVEPT_EPRST3 Endpoint 3 Reset **/
#define USBHS_USBHS_DEVEPT_EPRST3		(1 << 19)
/** USBHS_USBHS_DEVEPT_EPRST2 Endpoint 2 Reset **/
#define USBHS_USBHS_DEVEPT_EPRST2		(1 << 18)
/** USBHS_USBHS_DEVEPT_EPRST1 Endpoint 1 Reset **/
#define USBHS_USBHS_DEVEPT_EPRST1		(1 << 17)
/** USBHS_USBHS_DEVEPT_EPRST0 Endpoint 0 Reset **/
#define USBHS_USBHS_DEVEPT_EPRST0		(1 << 16)
/** USBHS_USBHS_DEVEPT_EPEN9 Endpoint 9 Enable **/
#define USBHS_USBHS_DEVEPT_EPEN9		(1 << 9)
/** USBHS_USBHS_DEVEPT_EPEN8 Endpoint 8 Enable **/
#define USBHS_USBHS_DEVEPT_EPEN8		(1 << 8)
/** USBHS_USBHS_DEVEPT_EPEN7 Endpoint 7 Enable **/
#define USBHS_USBHS_DEVEPT_EPEN7		(1 << 7)
/** USBHS_USBHS_DEVEPT_EPEN6 Endpoint 6 Enable **/
#define USBHS_USBHS_DEVEPT_EPEN6		(1 << 6)
/** USBHS_USBHS_DEVEPT_EPEN5 Endpoint 5 Enable **/
#define USBHS_USBHS_DEVEPT_EPEN5		(1 << 5)
/** USBHS_USBHS_DEVEPT_EPEN4 Endpoint 4 Enable **/
#define USBHS_USBHS_DEVEPT_EPEN4		(1 << 4)
/** USBHS_USBHS_DEVEPT_EPEN3 Endpoint 3 Enable **/
#define USBHS_USBHS_DEVEPT_EPEN3		(1 << 3)
/** USBHS_USBHS_DEVEPT_EPEN2 Endpoint 2 Enable **/
#define USBHS_USBHS_DEVEPT_EPEN2		(1 << 2)
/** USBHS_USBHS_DEVEPT_EPEN1 Endpoint 1 Enable **/
#define USBHS_USBHS_DEVEPT_EPEN1		(1 << 1)
/** USBHS_USBHS_DEVEPT_EPEN0 Endpoint 0 Enable **/
#define USBHS_USBHS_DEVEPT_EPEN0		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devfnum USBHSDEVFNUM Device Frame Number Register
@{*/

/** USBHS_USBHS_DEVFNUM_FNCERR Frame Number CRC Error **/
#define USBHS_USBHS_DEVFNUM_FNCERR		(1 << 15)

#define USBHS_USBHS_DEVFNUM_FNUM_SHIFT		3
#define USBHS_USBHS_DEVFNUM_FNUM_MASK		0x7ff
/** @defgroup usbhs_usbhs_devfnum_fnum FNUM Frame Number
@{*/
/**@}*/


#define USBHS_USBHS_DEVFNUM_MFNUM_SHIFT		0
#define USBHS_USBHS_DEVFNUM_MFNUM_MASK		0x07
/** @defgroup usbhs_usbhs_devfnum_mfnum MFNUM Micro Frame Number
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_deveptcfg[0] USBHSDEVEPTCFG[0] Device Endpoint Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTCFG[0]_NBTRANS_SHIFT		13
#define USBHS_USBHS_DEVEPTCFG[0]_NBTRANS_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[0]_nbtrans NBTRANS Number of transactions per microframe for isochronous endpoint
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[0]_EPTYPE_SHIFT		11
#define USBHS_USBHS_DEVEPTCFG[0]_EPTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[0]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[0]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_DEVEPTCFG[0]_AUTOSW		(1 << 9)
/** USBHS_USBHS_DEVEPTCFG[0]_EPDIR Endpoint Direction **/
#define USBHS_USBHS_DEVEPTCFG[0]_EPDIR		(1 << 8)

#define USBHS_USBHS_DEVEPTCFG[0]_EPSIZE_SHIFT		4
#define USBHS_USBHS_DEVEPTCFG[0]_EPSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_deveptcfg[0]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[0]_EPBK_SHIFT		2
#define USBHS_USBHS_DEVEPTCFG[0]_EPBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[0]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[0]_ALLOC Endpoint Memory Allocate **/
#define USBHS_USBHS_DEVEPTCFG[0]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_deveptcfg[1] USBHSDEVEPTCFG[1] Device Endpoint Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTCFG[1]_NBTRANS_SHIFT		13
#define USBHS_USBHS_DEVEPTCFG[1]_NBTRANS_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[1]_nbtrans NBTRANS Number of transactions per microframe for isochronous endpoint
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[1]_EPTYPE_SHIFT		11
#define USBHS_USBHS_DEVEPTCFG[1]_EPTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[1]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[1]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_DEVEPTCFG[1]_AUTOSW		(1 << 9)
/** USBHS_USBHS_DEVEPTCFG[1]_EPDIR Endpoint Direction **/
#define USBHS_USBHS_DEVEPTCFG[1]_EPDIR		(1 << 8)

#define USBHS_USBHS_DEVEPTCFG[1]_EPSIZE_SHIFT		4
#define USBHS_USBHS_DEVEPTCFG[1]_EPSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_deveptcfg[1]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[1]_EPBK_SHIFT		2
#define USBHS_USBHS_DEVEPTCFG[1]_EPBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[1]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[1]_ALLOC Endpoint Memory Allocate **/
#define USBHS_USBHS_DEVEPTCFG[1]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_deveptcfg[2] USBHSDEVEPTCFG[2] Device Endpoint Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTCFG[2]_NBTRANS_SHIFT		13
#define USBHS_USBHS_DEVEPTCFG[2]_NBTRANS_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[2]_nbtrans NBTRANS Number of transactions per microframe for isochronous endpoint
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[2]_EPTYPE_SHIFT		11
#define USBHS_USBHS_DEVEPTCFG[2]_EPTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[2]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[2]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_DEVEPTCFG[2]_AUTOSW		(1 << 9)
/** USBHS_USBHS_DEVEPTCFG[2]_EPDIR Endpoint Direction **/
#define USBHS_USBHS_DEVEPTCFG[2]_EPDIR		(1 << 8)

#define USBHS_USBHS_DEVEPTCFG[2]_EPSIZE_SHIFT		4
#define USBHS_USBHS_DEVEPTCFG[2]_EPSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_deveptcfg[2]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[2]_EPBK_SHIFT		2
#define USBHS_USBHS_DEVEPTCFG[2]_EPBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[2]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[2]_ALLOC Endpoint Memory Allocate **/
#define USBHS_USBHS_DEVEPTCFG[2]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_deveptcfg[3] USBHSDEVEPTCFG[3] Device Endpoint Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTCFG[3]_NBTRANS_SHIFT		13
#define USBHS_USBHS_DEVEPTCFG[3]_NBTRANS_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[3]_nbtrans NBTRANS Number of transactions per microframe for isochronous endpoint
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[3]_EPTYPE_SHIFT		11
#define USBHS_USBHS_DEVEPTCFG[3]_EPTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[3]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[3]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_DEVEPTCFG[3]_AUTOSW		(1 << 9)
/** USBHS_USBHS_DEVEPTCFG[3]_EPDIR Endpoint Direction **/
#define USBHS_USBHS_DEVEPTCFG[3]_EPDIR		(1 << 8)

#define USBHS_USBHS_DEVEPTCFG[3]_EPSIZE_SHIFT		4
#define USBHS_USBHS_DEVEPTCFG[3]_EPSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_deveptcfg[3]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[3]_EPBK_SHIFT		2
#define USBHS_USBHS_DEVEPTCFG[3]_EPBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[3]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[3]_ALLOC Endpoint Memory Allocate **/
#define USBHS_USBHS_DEVEPTCFG[3]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_deveptcfg[4] USBHSDEVEPTCFG[4] Device Endpoint Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTCFG[4]_NBTRANS_SHIFT		13
#define USBHS_USBHS_DEVEPTCFG[4]_NBTRANS_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[4]_nbtrans NBTRANS Number of transactions per microframe for isochronous endpoint
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[4]_EPTYPE_SHIFT		11
#define USBHS_USBHS_DEVEPTCFG[4]_EPTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[4]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[4]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_DEVEPTCFG[4]_AUTOSW		(1 << 9)
/** USBHS_USBHS_DEVEPTCFG[4]_EPDIR Endpoint Direction **/
#define USBHS_USBHS_DEVEPTCFG[4]_EPDIR		(1 << 8)

#define USBHS_USBHS_DEVEPTCFG[4]_EPSIZE_SHIFT		4
#define USBHS_USBHS_DEVEPTCFG[4]_EPSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_deveptcfg[4]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[4]_EPBK_SHIFT		2
#define USBHS_USBHS_DEVEPTCFG[4]_EPBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[4]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[4]_ALLOC Endpoint Memory Allocate **/
#define USBHS_USBHS_DEVEPTCFG[4]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_deveptcfg[5] USBHSDEVEPTCFG[5] Device Endpoint Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTCFG[5]_NBTRANS_SHIFT		13
#define USBHS_USBHS_DEVEPTCFG[5]_NBTRANS_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[5]_nbtrans NBTRANS Number of transactions per microframe for isochronous endpoint
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[5]_EPTYPE_SHIFT		11
#define USBHS_USBHS_DEVEPTCFG[5]_EPTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[5]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[5]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_DEVEPTCFG[5]_AUTOSW		(1 << 9)
/** USBHS_USBHS_DEVEPTCFG[5]_EPDIR Endpoint Direction **/
#define USBHS_USBHS_DEVEPTCFG[5]_EPDIR		(1 << 8)

#define USBHS_USBHS_DEVEPTCFG[5]_EPSIZE_SHIFT		4
#define USBHS_USBHS_DEVEPTCFG[5]_EPSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_deveptcfg[5]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[5]_EPBK_SHIFT		2
#define USBHS_USBHS_DEVEPTCFG[5]_EPBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[5]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[5]_ALLOC Endpoint Memory Allocate **/
#define USBHS_USBHS_DEVEPTCFG[5]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_deveptcfg[6] USBHSDEVEPTCFG[6] Device Endpoint Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTCFG[6]_NBTRANS_SHIFT		13
#define USBHS_USBHS_DEVEPTCFG[6]_NBTRANS_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[6]_nbtrans NBTRANS Number of transactions per microframe for isochronous endpoint
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[6]_EPTYPE_SHIFT		11
#define USBHS_USBHS_DEVEPTCFG[6]_EPTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[6]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[6]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_DEVEPTCFG[6]_AUTOSW		(1 << 9)
/** USBHS_USBHS_DEVEPTCFG[6]_EPDIR Endpoint Direction **/
#define USBHS_USBHS_DEVEPTCFG[6]_EPDIR		(1 << 8)

#define USBHS_USBHS_DEVEPTCFG[6]_EPSIZE_SHIFT		4
#define USBHS_USBHS_DEVEPTCFG[6]_EPSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_deveptcfg[6]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[6]_EPBK_SHIFT		2
#define USBHS_USBHS_DEVEPTCFG[6]_EPBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[6]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[6]_ALLOC Endpoint Memory Allocate **/
#define USBHS_USBHS_DEVEPTCFG[6]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_deveptcfg[7] USBHSDEVEPTCFG[7] Device Endpoint Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTCFG[7]_NBTRANS_SHIFT		13
#define USBHS_USBHS_DEVEPTCFG[7]_NBTRANS_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[7]_nbtrans NBTRANS Number of transactions per microframe for isochronous endpoint
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[7]_EPTYPE_SHIFT		11
#define USBHS_USBHS_DEVEPTCFG[7]_EPTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[7]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[7]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_DEVEPTCFG[7]_AUTOSW		(1 << 9)
/** USBHS_USBHS_DEVEPTCFG[7]_EPDIR Endpoint Direction **/
#define USBHS_USBHS_DEVEPTCFG[7]_EPDIR		(1 << 8)

#define USBHS_USBHS_DEVEPTCFG[7]_EPSIZE_SHIFT		4
#define USBHS_USBHS_DEVEPTCFG[7]_EPSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_deveptcfg[7]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[7]_EPBK_SHIFT		2
#define USBHS_USBHS_DEVEPTCFG[7]_EPBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[7]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[7]_ALLOC Endpoint Memory Allocate **/
#define USBHS_USBHS_DEVEPTCFG[7]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_deveptcfg[8] USBHSDEVEPTCFG[8] Device Endpoint Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTCFG[8]_NBTRANS_SHIFT		13
#define USBHS_USBHS_DEVEPTCFG[8]_NBTRANS_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[8]_nbtrans NBTRANS Number of transactions per microframe for isochronous endpoint
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[8]_EPTYPE_SHIFT		11
#define USBHS_USBHS_DEVEPTCFG[8]_EPTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[8]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[8]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_DEVEPTCFG[8]_AUTOSW		(1 << 9)
/** USBHS_USBHS_DEVEPTCFG[8]_EPDIR Endpoint Direction **/
#define USBHS_USBHS_DEVEPTCFG[8]_EPDIR		(1 << 8)

#define USBHS_USBHS_DEVEPTCFG[8]_EPSIZE_SHIFT		4
#define USBHS_USBHS_DEVEPTCFG[8]_EPSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_deveptcfg[8]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[8]_EPBK_SHIFT		2
#define USBHS_USBHS_DEVEPTCFG[8]_EPBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[8]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[8]_ALLOC Endpoint Memory Allocate **/
#define USBHS_USBHS_DEVEPTCFG[8]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_deveptcfg[9] USBHSDEVEPTCFG[9] Device Endpoint Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTCFG[9]_NBTRANS_SHIFT		13
#define USBHS_USBHS_DEVEPTCFG[9]_NBTRANS_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[9]_nbtrans NBTRANS Number of transactions per microframe for isochronous endpoint
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[9]_EPTYPE_SHIFT		11
#define USBHS_USBHS_DEVEPTCFG[9]_EPTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[9]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[9]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_DEVEPTCFG[9]_AUTOSW		(1 << 9)
/** USBHS_USBHS_DEVEPTCFG[9]_EPDIR Endpoint Direction **/
#define USBHS_USBHS_DEVEPTCFG[9]_EPDIR		(1 << 8)

#define USBHS_USBHS_DEVEPTCFG[9]_EPSIZE_SHIFT		4
#define USBHS_USBHS_DEVEPTCFG[9]_EPSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_deveptcfg[9]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTCFG[9]_EPBK_SHIFT		2
#define USBHS_USBHS_DEVEPTCFG[9]_EPBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptcfg[9]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTCFG[9]_ALLOC Endpoint Memory Allocate **/
#define USBHS_USBHS_DEVEPTCFG[9]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_deveptisr[0] USBHSDEVEPTISR[0] Device Endpoint Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTISR[0]_BYCT_SHIFT		20
#define USBHS_USBHS_DEVEPTISR[0]_BYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_deveptisr[0]_byct BYCT Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[0]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_DEVEPTISR[0]_CFGOK		(1 << 18)
/** USBHS_USBHS_DEVEPTISR[0]_CTRLDIR Control Direction **/
#define USBHS_USBHS_DEVEPTISR[0]_CTRLDIR		(1 << 17)
/** USBHS_USBHS_DEVEPTISR[0]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_DEVEPTISR[0]_RWALL		(1 << 16)

#define USBHS_USBHS_DEVEPTISR[0]_CURRBK_SHIFT		14
#define USBHS_USBHS_DEVEPTISR[0]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[0]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[0]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_DEVEPTISR[0]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[0]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[0]_DTSEQ_SHIFT		8
#define USBHS_USBHS_DEVEPTISR[0]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[0]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[0]_SHORTPACKET Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTISR[0]_SHORTPACKET		(1 << 7)
/** USBHS_USBHS_DEVEPTISR[0]_STALLEDI STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTISR[0]_STALLEDI		(1 << 6)
/** USBHS_USBHS_DEVEPTISR[0]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTISR[0]_OVERFI		(1 << 5)
/** USBHS_USBHS_DEVEPTISR[0]_NAKINI NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTISR[0]_NAKINI		(1 << 4)
/** USBHS_USBHS_DEVEPTISR[0]_NAKOUTI NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTISR[0]_NAKOUTI		(1 << 3)
/** USBHS_USBHS_DEVEPTISR[0]_RXSTPI Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTISR[0]_RXSTPI		(1 << 2)
/** USBHS_USBHS_DEVEPTISR[0]_RXOUTI Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[0]_RXOUTI		(1 << 1)
/** USBHS_USBHS_DEVEPTISR[0]_TXINI Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[0]_TXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptisr[1] USBHSDEVEPTISR[1] Device Endpoint Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTISR[1]_BYCT_SHIFT		20
#define USBHS_USBHS_DEVEPTISR[1]_BYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_deveptisr[1]_byct BYCT Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[1]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_DEVEPTISR[1]_CFGOK		(1 << 18)
/** USBHS_USBHS_DEVEPTISR[1]_CTRLDIR Control Direction **/
#define USBHS_USBHS_DEVEPTISR[1]_CTRLDIR		(1 << 17)
/** USBHS_USBHS_DEVEPTISR[1]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_DEVEPTISR[1]_RWALL		(1 << 16)

#define USBHS_USBHS_DEVEPTISR[1]_CURRBK_SHIFT		14
#define USBHS_USBHS_DEVEPTISR[1]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[1]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[1]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_DEVEPTISR[1]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[1]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[1]_DTSEQ_SHIFT		8
#define USBHS_USBHS_DEVEPTISR[1]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[1]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[1]_SHORTPACKET Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTISR[1]_SHORTPACKET		(1 << 7)
/** USBHS_USBHS_DEVEPTISR[1]_STALLEDI STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTISR[1]_STALLEDI		(1 << 6)
/** USBHS_USBHS_DEVEPTISR[1]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTISR[1]_OVERFI		(1 << 5)
/** USBHS_USBHS_DEVEPTISR[1]_NAKINI NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTISR[1]_NAKINI		(1 << 4)
/** USBHS_USBHS_DEVEPTISR[1]_NAKOUTI NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTISR[1]_NAKOUTI		(1 << 3)
/** USBHS_USBHS_DEVEPTISR[1]_RXSTPI Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTISR[1]_RXSTPI		(1 << 2)
/** USBHS_USBHS_DEVEPTISR[1]_RXOUTI Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[1]_RXOUTI		(1 << 1)
/** USBHS_USBHS_DEVEPTISR[1]_TXINI Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[1]_TXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptisr[2] USBHSDEVEPTISR[2] Device Endpoint Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTISR[2]_BYCT_SHIFT		20
#define USBHS_USBHS_DEVEPTISR[2]_BYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_deveptisr[2]_byct BYCT Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[2]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_DEVEPTISR[2]_CFGOK		(1 << 18)
/** USBHS_USBHS_DEVEPTISR[2]_CTRLDIR Control Direction **/
#define USBHS_USBHS_DEVEPTISR[2]_CTRLDIR		(1 << 17)
/** USBHS_USBHS_DEVEPTISR[2]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_DEVEPTISR[2]_RWALL		(1 << 16)

#define USBHS_USBHS_DEVEPTISR[2]_CURRBK_SHIFT		14
#define USBHS_USBHS_DEVEPTISR[2]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[2]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[2]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_DEVEPTISR[2]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[2]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[2]_DTSEQ_SHIFT		8
#define USBHS_USBHS_DEVEPTISR[2]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[2]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[2]_SHORTPACKET Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTISR[2]_SHORTPACKET		(1 << 7)
/** USBHS_USBHS_DEVEPTISR[2]_STALLEDI STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTISR[2]_STALLEDI		(1 << 6)
/** USBHS_USBHS_DEVEPTISR[2]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTISR[2]_OVERFI		(1 << 5)
/** USBHS_USBHS_DEVEPTISR[2]_NAKINI NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTISR[2]_NAKINI		(1 << 4)
/** USBHS_USBHS_DEVEPTISR[2]_NAKOUTI NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTISR[2]_NAKOUTI		(1 << 3)
/** USBHS_USBHS_DEVEPTISR[2]_RXSTPI Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTISR[2]_RXSTPI		(1 << 2)
/** USBHS_USBHS_DEVEPTISR[2]_RXOUTI Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[2]_RXOUTI		(1 << 1)
/** USBHS_USBHS_DEVEPTISR[2]_TXINI Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[2]_TXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptisr[3] USBHSDEVEPTISR[3] Device Endpoint Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTISR[3]_BYCT_SHIFT		20
#define USBHS_USBHS_DEVEPTISR[3]_BYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_deveptisr[3]_byct BYCT Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[3]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_DEVEPTISR[3]_CFGOK		(1 << 18)
/** USBHS_USBHS_DEVEPTISR[3]_CTRLDIR Control Direction **/
#define USBHS_USBHS_DEVEPTISR[3]_CTRLDIR		(1 << 17)
/** USBHS_USBHS_DEVEPTISR[3]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_DEVEPTISR[3]_RWALL		(1 << 16)

#define USBHS_USBHS_DEVEPTISR[3]_CURRBK_SHIFT		14
#define USBHS_USBHS_DEVEPTISR[3]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[3]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[3]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_DEVEPTISR[3]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[3]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[3]_DTSEQ_SHIFT		8
#define USBHS_USBHS_DEVEPTISR[3]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[3]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[3]_SHORTPACKET Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTISR[3]_SHORTPACKET		(1 << 7)
/** USBHS_USBHS_DEVEPTISR[3]_STALLEDI STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTISR[3]_STALLEDI		(1 << 6)
/** USBHS_USBHS_DEVEPTISR[3]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTISR[3]_OVERFI		(1 << 5)
/** USBHS_USBHS_DEVEPTISR[3]_NAKINI NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTISR[3]_NAKINI		(1 << 4)
/** USBHS_USBHS_DEVEPTISR[3]_NAKOUTI NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTISR[3]_NAKOUTI		(1 << 3)
/** USBHS_USBHS_DEVEPTISR[3]_RXSTPI Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTISR[3]_RXSTPI		(1 << 2)
/** USBHS_USBHS_DEVEPTISR[3]_RXOUTI Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[3]_RXOUTI		(1 << 1)
/** USBHS_USBHS_DEVEPTISR[3]_TXINI Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[3]_TXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptisr[4] USBHSDEVEPTISR[4] Device Endpoint Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTISR[4]_BYCT_SHIFT		20
#define USBHS_USBHS_DEVEPTISR[4]_BYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_deveptisr[4]_byct BYCT Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[4]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_DEVEPTISR[4]_CFGOK		(1 << 18)
/** USBHS_USBHS_DEVEPTISR[4]_CTRLDIR Control Direction **/
#define USBHS_USBHS_DEVEPTISR[4]_CTRLDIR		(1 << 17)
/** USBHS_USBHS_DEVEPTISR[4]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_DEVEPTISR[4]_RWALL		(1 << 16)

#define USBHS_USBHS_DEVEPTISR[4]_CURRBK_SHIFT		14
#define USBHS_USBHS_DEVEPTISR[4]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[4]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[4]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_DEVEPTISR[4]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[4]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[4]_DTSEQ_SHIFT		8
#define USBHS_USBHS_DEVEPTISR[4]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[4]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[4]_SHORTPACKET Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTISR[4]_SHORTPACKET		(1 << 7)
/** USBHS_USBHS_DEVEPTISR[4]_STALLEDI STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTISR[4]_STALLEDI		(1 << 6)
/** USBHS_USBHS_DEVEPTISR[4]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTISR[4]_OVERFI		(1 << 5)
/** USBHS_USBHS_DEVEPTISR[4]_NAKINI NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTISR[4]_NAKINI		(1 << 4)
/** USBHS_USBHS_DEVEPTISR[4]_NAKOUTI NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTISR[4]_NAKOUTI		(1 << 3)
/** USBHS_USBHS_DEVEPTISR[4]_RXSTPI Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTISR[4]_RXSTPI		(1 << 2)
/** USBHS_USBHS_DEVEPTISR[4]_RXOUTI Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[4]_RXOUTI		(1 << 1)
/** USBHS_USBHS_DEVEPTISR[4]_TXINI Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[4]_TXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptisr[5] USBHSDEVEPTISR[5] Device Endpoint Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTISR[5]_BYCT_SHIFT		20
#define USBHS_USBHS_DEVEPTISR[5]_BYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_deveptisr[5]_byct BYCT Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[5]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_DEVEPTISR[5]_CFGOK		(1 << 18)
/** USBHS_USBHS_DEVEPTISR[5]_CTRLDIR Control Direction **/
#define USBHS_USBHS_DEVEPTISR[5]_CTRLDIR		(1 << 17)
/** USBHS_USBHS_DEVEPTISR[5]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_DEVEPTISR[5]_RWALL		(1 << 16)

#define USBHS_USBHS_DEVEPTISR[5]_CURRBK_SHIFT		14
#define USBHS_USBHS_DEVEPTISR[5]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[5]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[5]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_DEVEPTISR[5]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[5]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[5]_DTSEQ_SHIFT		8
#define USBHS_USBHS_DEVEPTISR[5]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[5]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[5]_SHORTPACKET Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTISR[5]_SHORTPACKET		(1 << 7)
/** USBHS_USBHS_DEVEPTISR[5]_STALLEDI STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTISR[5]_STALLEDI		(1 << 6)
/** USBHS_USBHS_DEVEPTISR[5]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTISR[5]_OVERFI		(1 << 5)
/** USBHS_USBHS_DEVEPTISR[5]_NAKINI NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTISR[5]_NAKINI		(1 << 4)
/** USBHS_USBHS_DEVEPTISR[5]_NAKOUTI NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTISR[5]_NAKOUTI		(1 << 3)
/** USBHS_USBHS_DEVEPTISR[5]_RXSTPI Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTISR[5]_RXSTPI		(1 << 2)
/** USBHS_USBHS_DEVEPTISR[5]_RXOUTI Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[5]_RXOUTI		(1 << 1)
/** USBHS_USBHS_DEVEPTISR[5]_TXINI Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[5]_TXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptisr[6] USBHSDEVEPTISR[6] Device Endpoint Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTISR[6]_BYCT_SHIFT		20
#define USBHS_USBHS_DEVEPTISR[6]_BYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_deveptisr[6]_byct BYCT Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[6]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_DEVEPTISR[6]_CFGOK		(1 << 18)
/** USBHS_USBHS_DEVEPTISR[6]_CTRLDIR Control Direction **/
#define USBHS_USBHS_DEVEPTISR[6]_CTRLDIR		(1 << 17)
/** USBHS_USBHS_DEVEPTISR[6]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_DEVEPTISR[6]_RWALL		(1 << 16)

#define USBHS_USBHS_DEVEPTISR[6]_CURRBK_SHIFT		14
#define USBHS_USBHS_DEVEPTISR[6]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[6]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[6]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_DEVEPTISR[6]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[6]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[6]_DTSEQ_SHIFT		8
#define USBHS_USBHS_DEVEPTISR[6]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[6]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[6]_SHORTPACKET Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTISR[6]_SHORTPACKET		(1 << 7)
/** USBHS_USBHS_DEVEPTISR[6]_STALLEDI STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTISR[6]_STALLEDI		(1 << 6)
/** USBHS_USBHS_DEVEPTISR[6]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTISR[6]_OVERFI		(1 << 5)
/** USBHS_USBHS_DEVEPTISR[6]_NAKINI NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTISR[6]_NAKINI		(1 << 4)
/** USBHS_USBHS_DEVEPTISR[6]_NAKOUTI NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTISR[6]_NAKOUTI		(1 << 3)
/** USBHS_USBHS_DEVEPTISR[6]_RXSTPI Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTISR[6]_RXSTPI		(1 << 2)
/** USBHS_USBHS_DEVEPTISR[6]_RXOUTI Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[6]_RXOUTI		(1 << 1)
/** USBHS_USBHS_DEVEPTISR[6]_TXINI Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[6]_TXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptisr[7] USBHSDEVEPTISR[7] Device Endpoint Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTISR[7]_BYCT_SHIFT		20
#define USBHS_USBHS_DEVEPTISR[7]_BYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_deveptisr[7]_byct BYCT Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[7]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_DEVEPTISR[7]_CFGOK		(1 << 18)
/** USBHS_USBHS_DEVEPTISR[7]_CTRLDIR Control Direction **/
#define USBHS_USBHS_DEVEPTISR[7]_CTRLDIR		(1 << 17)
/** USBHS_USBHS_DEVEPTISR[7]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_DEVEPTISR[7]_RWALL		(1 << 16)

#define USBHS_USBHS_DEVEPTISR[7]_CURRBK_SHIFT		14
#define USBHS_USBHS_DEVEPTISR[7]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[7]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[7]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_DEVEPTISR[7]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[7]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[7]_DTSEQ_SHIFT		8
#define USBHS_USBHS_DEVEPTISR[7]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[7]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[7]_SHORTPACKET Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTISR[7]_SHORTPACKET		(1 << 7)
/** USBHS_USBHS_DEVEPTISR[7]_STALLEDI STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTISR[7]_STALLEDI		(1 << 6)
/** USBHS_USBHS_DEVEPTISR[7]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTISR[7]_OVERFI		(1 << 5)
/** USBHS_USBHS_DEVEPTISR[7]_NAKINI NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTISR[7]_NAKINI		(1 << 4)
/** USBHS_USBHS_DEVEPTISR[7]_NAKOUTI NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTISR[7]_NAKOUTI		(1 << 3)
/** USBHS_USBHS_DEVEPTISR[7]_RXSTPI Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTISR[7]_RXSTPI		(1 << 2)
/** USBHS_USBHS_DEVEPTISR[7]_RXOUTI Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[7]_RXOUTI		(1 << 1)
/** USBHS_USBHS_DEVEPTISR[7]_TXINI Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[7]_TXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptisr[8] USBHSDEVEPTISR[8] Device Endpoint Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTISR[8]_BYCT_SHIFT		20
#define USBHS_USBHS_DEVEPTISR[8]_BYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_deveptisr[8]_byct BYCT Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[8]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_DEVEPTISR[8]_CFGOK		(1 << 18)
/** USBHS_USBHS_DEVEPTISR[8]_CTRLDIR Control Direction **/
#define USBHS_USBHS_DEVEPTISR[8]_CTRLDIR		(1 << 17)
/** USBHS_USBHS_DEVEPTISR[8]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_DEVEPTISR[8]_RWALL		(1 << 16)

#define USBHS_USBHS_DEVEPTISR[8]_CURRBK_SHIFT		14
#define USBHS_USBHS_DEVEPTISR[8]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[8]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[8]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_DEVEPTISR[8]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[8]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[8]_DTSEQ_SHIFT		8
#define USBHS_USBHS_DEVEPTISR[8]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[8]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[8]_SHORTPACKET Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTISR[8]_SHORTPACKET		(1 << 7)
/** USBHS_USBHS_DEVEPTISR[8]_STALLEDI STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTISR[8]_STALLEDI		(1 << 6)
/** USBHS_USBHS_DEVEPTISR[8]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTISR[8]_OVERFI		(1 << 5)
/** USBHS_USBHS_DEVEPTISR[8]_NAKINI NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTISR[8]_NAKINI		(1 << 4)
/** USBHS_USBHS_DEVEPTISR[8]_NAKOUTI NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTISR[8]_NAKOUTI		(1 << 3)
/** USBHS_USBHS_DEVEPTISR[8]_RXSTPI Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTISR[8]_RXSTPI		(1 << 2)
/** USBHS_USBHS_DEVEPTISR[8]_RXOUTI Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[8]_RXOUTI		(1 << 1)
/** USBHS_USBHS_DEVEPTISR[8]_TXINI Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[8]_TXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptisr[9] USBHSDEVEPTISR[9] Device Endpoint Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_DEVEPTISR[9]_BYCT_SHIFT		20
#define USBHS_USBHS_DEVEPTISR[9]_BYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_deveptisr[9]_byct BYCT Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[9]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_DEVEPTISR[9]_CFGOK		(1 << 18)
/** USBHS_USBHS_DEVEPTISR[9]_CTRLDIR Control Direction **/
#define USBHS_USBHS_DEVEPTISR[9]_CTRLDIR		(1 << 17)
/** USBHS_USBHS_DEVEPTISR[9]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_DEVEPTISR[9]_RWALL		(1 << 16)

#define USBHS_USBHS_DEVEPTISR[9]_CURRBK_SHIFT		14
#define USBHS_USBHS_DEVEPTISR[9]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[9]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[9]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_DEVEPTISR[9]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[9]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_DEVEPTISR[9]_DTSEQ_SHIFT		8
#define USBHS_USBHS_DEVEPTISR[9]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_deveptisr[9]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_DEVEPTISR[9]_SHORTPACKET Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTISR[9]_SHORTPACKET		(1 << 7)
/** USBHS_USBHS_DEVEPTISR[9]_STALLEDI STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTISR[9]_STALLEDI		(1 << 6)
/** USBHS_USBHS_DEVEPTISR[9]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTISR[9]_OVERFI		(1 << 5)
/** USBHS_USBHS_DEVEPTISR[9]_NAKINI NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTISR[9]_NAKINI		(1 << 4)
/** USBHS_USBHS_DEVEPTISR[9]_NAKOUTI NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTISR[9]_NAKOUTI		(1 << 3)
/** USBHS_USBHS_DEVEPTISR[9]_RXSTPI Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTISR[9]_RXSTPI		(1 << 2)
/** USBHS_USBHS_DEVEPTISR[9]_RXOUTI Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[9]_RXOUTI		(1 << 1)
/** USBHS_USBHS_DEVEPTISR[9]_TXINI Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTISR[9]_TXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devepticr[0] USBHSDEVEPTICR[0] Device Endpoint Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTICR[0]_SHORTPACKETC Short Packet Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[0]_SHORTPACKETC		(1 << 7)
/** USBHS_USBHS_DEVEPTICR[0]_STALLEDIC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[0]_STALLEDIC		(1 << 6)
/** USBHS_USBHS_DEVEPTICR[0]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[0]_OVERFIC		(1 << 5)
/** USBHS_USBHS_DEVEPTICR[0]_NAKINIC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[0]_NAKINIC		(1 << 4)
/** USBHS_USBHS_DEVEPTICR[0]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[0]_NAKOUTIC		(1 << 3)
/** USBHS_USBHS_DEVEPTICR[0]_RXSTPIC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[0]_RXSTPIC		(1 << 2)
/** USBHS_USBHS_DEVEPTICR[0]_RXOUTIC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[0]_RXOUTIC		(1 << 1)
/** USBHS_USBHS_DEVEPTICR[0]_TXINIC Transmitted IN Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[0]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devepticr[1] USBHSDEVEPTICR[1] Device Endpoint Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTICR[1]_SHORTPACKETC Short Packet Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[1]_SHORTPACKETC		(1 << 7)
/** USBHS_USBHS_DEVEPTICR[1]_STALLEDIC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[1]_STALLEDIC		(1 << 6)
/** USBHS_USBHS_DEVEPTICR[1]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[1]_OVERFIC		(1 << 5)
/** USBHS_USBHS_DEVEPTICR[1]_NAKINIC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[1]_NAKINIC		(1 << 4)
/** USBHS_USBHS_DEVEPTICR[1]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[1]_NAKOUTIC		(1 << 3)
/** USBHS_USBHS_DEVEPTICR[1]_RXSTPIC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[1]_RXSTPIC		(1 << 2)
/** USBHS_USBHS_DEVEPTICR[1]_RXOUTIC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[1]_RXOUTIC		(1 << 1)
/** USBHS_USBHS_DEVEPTICR[1]_TXINIC Transmitted IN Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[1]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devepticr[2] USBHSDEVEPTICR[2] Device Endpoint Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTICR[2]_SHORTPACKETC Short Packet Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[2]_SHORTPACKETC		(1 << 7)
/** USBHS_USBHS_DEVEPTICR[2]_STALLEDIC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[2]_STALLEDIC		(1 << 6)
/** USBHS_USBHS_DEVEPTICR[2]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[2]_OVERFIC		(1 << 5)
/** USBHS_USBHS_DEVEPTICR[2]_NAKINIC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[2]_NAKINIC		(1 << 4)
/** USBHS_USBHS_DEVEPTICR[2]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[2]_NAKOUTIC		(1 << 3)
/** USBHS_USBHS_DEVEPTICR[2]_RXSTPIC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[2]_RXSTPIC		(1 << 2)
/** USBHS_USBHS_DEVEPTICR[2]_RXOUTIC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[2]_RXOUTIC		(1 << 1)
/** USBHS_USBHS_DEVEPTICR[2]_TXINIC Transmitted IN Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[2]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devepticr[3] USBHSDEVEPTICR[3] Device Endpoint Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTICR[3]_SHORTPACKETC Short Packet Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[3]_SHORTPACKETC		(1 << 7)
/** USBHS_USBHS_DEVEPTICR[3]_STALLEDIC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[3]_STALLEDIC		(1 << 6)
/** USBHS_USBHS_DEVEPTICR[3]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[3]_OVERFIC		(1 << 5)
/** USBHS_USBHS_DEVEPTICR[3]_NAKINIC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[3]_NAKINIC		(1 << 4)
/** USBHS_USBHS_DEVEPTICR[3]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[3]_NAKOUTIC		(1 << 3)
/** USBHS_USBHS_DEVEPTICR[3]_RXSTPIC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[3]_RXSTPIC		(1 << 2)
/** USBHS_USBHS_DEVEPTICR[3]_RXOUTIC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[3]_RXOUTIC		(1 << 1)
/** USBHS_USBHS_DEVEPTICR[3]_TXINIC Transmitted IN Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[3]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devepticr[4] USBHSDEVEPTICR[4] Device Endpoint Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTICR[4]_SHORTPACKETC Short Packet Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[4]_SHORTPACKETC		(1 << 7)
/** USBHS_USBHS_DEVEPTICR[4]_STALLEDIC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[4]_STALLEDIC		(1 << 6)
/** USBHS_USBHS_DEVEPTICR[4]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[4]_OVERFIC		(1 << 5)
/** USBHS_USBHS_DEVEPTICR[4]_NAKINIC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[4]_NAKINIC		(1 << 4)
/** USBHS_USBHS_DEVEPTICR[4]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[4]_NAKOUTIC		(1 << 3)
/** USBHS_USBHS_DEVEPTICR[4]_RXSTPIC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[4]_RXSTPIC		(1 << 2)
/** USBHS_USBHS_DEVEPTICR[4]_RXOUTIC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[4]_RXOUTIC		(1 << 1)
/** USBHS_USBHS_DEVEPTICR[4]_TXINIC Transmitted IN Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[4]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devepticr[5] USBHSDEVEPTICR[5] Device Endpoint Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTICR[5]_SHORTPACKETC Short Packet Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[5]_SHORTPACKETC		(1 << 7)
/** USBHS_USBHS_DEVEPTICR[5]_STALLEDIC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[5]_STALLEDIC		(1 << 6)
/** USBHS_USBHS_DEVEPTICR[5]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[5]_OVERFIC		(1 << 5)
/** USBHS_USBHS_DEVEPTICR[5]_NAKINIC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[5]_NAKINIC		(1 << 4)
/** USBHS_USBHS_DEVEPTICR[5]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[5]_NAKOUTIC		(1 << 3)
/** USBHS_USBHS_DEVEPTICR[5]_RXSTPIC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[5]_RXSTPIC		(1 << 2)
/** USBHS_USBHS_DEVEPTICR[5]_RXOUTIC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[5]_RXOUTIC		(1 << 1)
/** USBHS_USBHS_DEVEPTICR[5]_TXINIC Transmitted IN Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[5]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devepticr[6] USBHSDEVEPTICR[6] Device Endpoint Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTICR[6]_SHORTPACKETC Short Packet Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[6]_SHORTPACKETC		(1 << 7)
/** USBHS_USBHS_DEVEPTICR[6]_STALLEDIC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[6]_STALLEDIC		(1 << 6)
/** USBHS_USBHS_DEVEPTICR[6]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[6]_OVERFIC		(1 << 5)
/** USBHS_USBHS_DEVEPTICR[6]_NAKINIC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[6]_NAKINIC		(1 << 4)
/** USBHS_USBHS_DEVEPTICR[6]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[6]_NAKOUTIC		(1 << 3)
/** USBHS_USBHS_DEVEPTICR[6]_RXSTPIC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[6]_RXSTPIC		(1 << 2)
/** USBHS_USBHS_DEVEPTICR[6]_RXOUTIC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[6]_RXOUTIC		(1 << 1)
/** USBHS_USBHS_DEVEPTICR[6]_TXINIC Transmitted IN Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[6]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devepticr[7] USBHSDEVEPTICR[7] Device Endpoint Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTICR[7]_SHORTPACKETC Short Packet Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[7]_SHORTPACKETC		(1 << 7)
/** USBHS_USBHS_DEVEPTICR[7]_STALLEDIC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[7]_STALLEDIC		(1 << 6)
/** USBHS_USBHS_DEVEPTICR[7]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[7]_OVERFIC		(1 << 5)
/** USBHS_USBHS_DEVEPTICR[7]_NAKINIC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[7]_NAKINIC		(1 << 4)
/** USBHS_USBHS_DEVEPTICR[7]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[7]_NAKOUTIC		(1 << 3)
/** USBHS_USBHS_DEVEPTICR[7]_RXSTPIC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[7]_RXSTPIC		(1 << 2)
/** USBHS_USBHS_DEVEPTICR[7]_RXOUTIC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[7]_RXOUTIC		(1 << 1)
/** USBHS_USBHS_DEVEPTICR[7]_TXINIC Transmitted IN Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[7]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devepticr[8] USBHSDEVEPTICR[8] Device Endpoint Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTICR[8]_SHORTPACKETC Short Packet Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[8]_SHORTPACKETC		(1 << 7)
/** USBHS_USBHS_DEVEPTICR[8]_STALLEDIC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[8]_STALLEDIC		(1 << 6)
/** USBHS_USBHS_DEVEPTICR[8]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[8]_OVERFIC		(1 << 5)
/** USBHS_USBHS_DEVEPTICR[8]_NAKINIC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[8]_NAKINIC		(1 << 4)
/** USBHS_USBHS_DEVEPTICR[8]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[8]_NAKOUTIC		(1 << 3)
/** USBHS_USBHS_DEVEPTICR[8]_RXSTPIC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[8]_RXSTPIC		(1 << 2)
/** USBHS_USBHS_DEVEPTICR[8]_RXOUTIC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[8]_RXOUTIC		(1 << 1)
/** USBHS_USBHS_DEVEPTICR[8]_TXINIC Transmitted IN Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[8]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devepticr[9] USBHSDEVEPTICR[9] Device Endpoint Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTICR[9]_SHORTPACKETC Short Packet Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[9]_SHORTPACKETC		(1 << 7)
/** USBHS_USBHS_DEVEPTICR[9]_STALLEDIC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[9]_STALLEDIC		(1 << 6)
/** USBHS_USBHS_DEVEPTICR[9]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[9]_OVERFIC		(1 << 5)
/** USBHS_USBHS_DEVEPTICR[9]_NAKINIC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[9]_NAKINIC		(1 << 4)
/** USBHS_USBHS_DEVEPTICR[9]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[9]_NAKOUTIC		(1 << 3)
/** USBHS_USBHS_DEVEPTICR[9]_RXSTPIC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[9]_RXSTPIC		(1 << 2)
/** USBHS_USBHS_DEVEPTICR[9]_RXOUTIC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[9]_RXOUTIC		(1 << 1)
/** USBHS_USBHS_DEVEPTICR[9]_TXINIC Transmitted IN Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTICR[9]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptifr[0] USBHSDEVEPTIFR[0] Device Endpoint Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIFR[0]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[0]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_DEVEPTIFR[0]_SHORTPACKETS Short Packet Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[0]_SHORTPACKETS		(1 << 7)
/** USBHS_USBHS_DEVEPTIFR[0]_STALLEDIS STALLed Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[0]_STALLEDIS		(1 << 6)
/** USBHS_USBHS_DEVEPTIFR[0]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[0]_OVERFIS		(1 << 5)
/** USBHS_USBHS_DEVEPTIFR[0]_NAKINIS NAKed IN Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[0]_NAKINIS		(1 << 4)
/** USBHS_USBHS_DEVEPTIFR[0]_NAKOUTIS NAKed OUT Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[0]_NAKOUTIS		(1 << 3)
/** USBHS_USBHS_DEVEPTIFR[0]_RXSTPIS Received SETUP Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[0]_RXSTPIS		(1 << 2)
/** USBHS_USBHS_DEVEPTIFR[0]_RXOUTIS Received OUT Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[0]_RXOUTIS		(1 << 1)
/** USBHS_USBHS_DEVEPTIFR[0]_TXINIS Transmitted IN Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[0]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptifr[1] USBHSDEVEPTIFR[1] Device Endpoint Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIFR[1]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[1]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_DEVEPTIFR[1]_SHORTPACKETS Short Packet Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[1]_SHORTPACKETS		(1 << 7)
/** USBHS_USBHS_DEVEPTIFR[1]_STALLEDIS STALLed Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[1]_STALLEDIS		(1 << 6)
/** USBHS_USBHS_DEVEPTIFR[1]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[1]_OVERFIS		(1 << 5)
/** USBHS_USBHS_DEVEPTIFR[1]_NAKINIS NAKed IN Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[1]_NAKINIS		(1 << 4)
/** USBHS_USBHS_DEVEPTIFR[1]_NAKOUTIS NAKed OUT Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[1]_NAKOUTIS		(1 << 3)
/** USBHS_USBHS_DEVEPTIFR[1]_RXSTPIS Received SETUP Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[1]_RXSTPIS		(1 << 2)
/** USBHS_USBHS_DEVEPTIFR[1]_RXOUTIS Received OUT Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[1]_RXOUTIS		(1 << 1)
/** USBHS_USBHS_DEVEPTIFR[1]_TXINIS Transmitted IN Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[1]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptifr[2] USBHSDEVEPTIFR[2] Device Endpoint Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIFR[2]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[2]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_DEVEPTIFR[2]_SHORTPACKETS Short Packet Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[2]_SHORTPACKETS		(1 << 7)
/** USBHS_USBHS_DEVEPTIFR[2]_STALLEDIS STALLed Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[2]_STALLEDIS		(1 << 6)
/** USBHS_USBHS_DEVEPTIFR[2]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[2]_OVERFIS		(1 << 5)
/** USBHS_USBHS_DEVEPTIFR[2]_NAKINIS NAKed IN Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[2]_NAKINIS		(1 << 4)
/** USBHS_USBHS_DEVEPTIFR[2]_NAKOUTIS NAKed OUT Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[2]_NAKOUTIS		(1 << 3)
/** USBHS_USBHS_DEVEPTIFR[2]_RXSTPIS Received SETUP Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[2]_RXSTPIS		(1 << 2)
/** USBHS_USBHS_DEVEPTIFR[2]_RXOUTIS Received OUT Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[2]_RXOUTIS		(1 << 1)
/** USBHS_USBHS_DEVEPTIFR[2]_TXINIS Transmitted IN Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[2]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptifr[3] USBHSDEVEPTIFR[3] Device Endpoint Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIFR[3]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[3]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_DEVEPTIFR[3]_SHORTPACKETS Short Packet Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[3]_SHORTPACKETS		(1 << 7)
/** USBHS_USBHS_DEVEPTIFR[3]_STALLEDIS STALLed Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[3]_STALLEDIS		(1 << 6)
/** USBHS_USBHS_DEVEPTIFR[3]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[3]_OVERFIS		(1 << 5)
/** USBHS_USBHS_DEVEPTIFR[3]_NAKINIS NAKed IN Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[3]_NAKINIS		(1 << 4)
/** USBHS_USBHS_DEVEPTIFR[3]_NAKOUTIS NAKed OUT Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[3]_NAKOUTIS		(1 << 3)
/** USBHS_USBHS_DEVEPTIFR[3]_RXSTPIS Received SETUP Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[3]_RXSTPIS		(1 << 2)
/** USBHS_USBHS_DEVEPTIFR[3]_RXOUTIS Received OUT Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[3]_RXOUTIS		(1 << 1)
/** USBHS_USBHS_DEVEPTIFR[3]_TXINIS Transmitted IN Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[3]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptifr[4] USBHSDEVEPTIFR[4] Device Endpoint Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIFR[4]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[4]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_DEVEPTIFR[4]_SHORTPACKETS Short Packet Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[4]_SHORTPACKETS		(1 << 7)
/** USBHS_USBHS_DEVEPTIFR[4]_STALLEDIS STALLed Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[4]_STALLEDIS		(1 << 6)
/** USBHS_USBHS_DEVEPTIFR[4]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[4]_OVERFIS		(1 << 5)
/** USBHS_USBHS_DEVEPTIFR[4]_NAKINIS NAKed IN Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[4]_NAKINIS		(1 << 4)
/** USBHS_USBHS_DEVEPTIFR[4]_NAKOUTIS NAKed OUT Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[4]_NAKOUTIS		(1 << 3)
/** USBHS_USBHS_DEVEPTIFR[4]_RXSTPIS Received SETUP Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[4]_RXSTPIS		(1 << 2)
/** USBHS_USBHS_DEVEPTIFR[4]_RXOUTIS Received OUT Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[4]_RXOUTIS		(1 << 1)
/** USBHS_USBHS_DEVEPTIFR[4]_TXINIS Transmitted IN Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[4]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptifr[5] USBHSDEVEPTIFR[5] Device Endpoint Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIFR[5]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[5]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_DEVEPTIFR[5]_SHORTPACKETS Short Packet Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[5]_SHORTPACKETS		(1 << 7)
/** USBHS_USBHS_DEVEPTIFR[5]_STALLEDIS STALLed Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[5]_STALLEDIS		(1 << 6)
/** USBHS_USBHS_DEVEPTIFR[5]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[5]_OVERFIS		(1 << 5)
/** USBHS_USBHS_DEVEPTIFR[5]_NAKINIS NAKed IN Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[5]_NAKINIS		(1 << 4)
/** USBHS_USBHS_DEVEPTIFR[5]_NAKOUTIS NAKed OUT Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[5]_NAKOUTIS		(1 << 3)
/** USBHS_USBHS_DEVEPTIFR[5]_RXSTPIS Received SETUP Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[5]_RXSTPIS		(1 << 2)
/** USBHS_USBHS_DEVEPTIFR[5]_RXOUTIS Received OUT Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[5]_RXOUTIS		(1 << 1)
/** USBHS_USBHS_DEVEPTIFR[5]_TXINIS Transmitted IN Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[5]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptifr[6] USBHSDEVEPTIFR[6] Device Endpoint Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIFR[6]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[6]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_DEVEPTIFR[6]_SHORTPACKETS Short Packet Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[6]_SHORTPACKETS		(1 << 7)
/** USBHS_USBHS_DEVEPTIFR[6]_STALLEDIS STALLed Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[6]_STALLEDIS		(1 << 6)
/** USBHS_USBHS_DEVEPTIFR[6]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[6]_OVERFIS		(1 << 5)
/** USBHS_USBHS_DEVEPTIFR[6]_NAKINIS NAKed IN Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[6]_NAKINIS		(1 << 4)
/** USBHS_USBHS_DEVEPTIFR[6]_NAKOUTIS NAKed OUT Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[6]_NAKOUTIS		(1 << 3)
/** USBHS_USBHS_DEVEPTIFR[6]_RXSTPIS Received SETUP Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[6]_RXSTPIS		(1 << 2)
/** USBHS_USBHS_DEVEPTIFR[6]_RXOUTIS Received OUT Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[6]_RXOUTIS		(1 << 1)
/** USBHS_USBHS_DEVEPTIFR[6]_TXINIS Transmitted IN Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[6]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptifr[7] USBHSDEVEPTIFR[7] Device Endpoint Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIFR[7]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[7]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_DEVEPTIFR[7]_SHORTPACKETS Short Packet Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[7]_SHORTPACKETS		(1 << 7)
/** USBHS_USBHS_DEVEPTIFR[7]_STALLEDIS STALLed Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[7]_STALLEDIS		(1 << 6)
/** USBHS_USBHS_DEVEPTIFR[7]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[7]_OVERFIS		(1 << 5)
/** USBHS_USBHS_DEVEPTIFR[7]_NAKINIS NAKed IN Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[7]_NAKINIS		(1 << 4)
/** USBHS_USBHS_DEVEPTIFR[7]_NAKOUTIS NAKed OUT Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[7]_NAKOUTIS		(1 << 3)
/** USBHS_USBHS_DEVEPTIFR[7]_RXSTPIS Received SETUP Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[7]_RXSTPIS		(1 << 2)
/** USBHS_USBHS_DEVEPTIFR[7]_RXOUTIS Received OUT Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[7]_RXOUTIS		(1 << 1)
/** USBHS_USBHS_DEVEPTIFR[7]_TXINIS Transmitted IN Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[7]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptifr[8] USBHSDEVEPTIFR[8] Device Endpoint Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIFR[8]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[8]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_DEVEPTIFR[8]_SHORTPACKETS Short Packet Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[8]_SHORTPACKETS		(1 << 7)
/** USBHS_USBHS_DEVEPTIFR[8]_STALLEDIS STALLed Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[8]_STALLEDIS		(1 << 6)
/** USBHS_USBHS_DEVEPTIFR[8]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[8]_OVERFIS		(1 << 5)
/** USBHS_USBHS_DEVEPTIFR[8]_NAKINIS NAKed IN Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[8]_NAKINIS		(1 << 4)
/** USBHS_USBHS_DEVEPTIFR[8]_NAKOUTIS NAKed OUT Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[8]_NAKOUTIS		(1 << 3)
/** USBHS_USBHS_DEVEPTIFR[8]_RXSTPIS Received SETUP Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[8]_RXSTPIS		(1 << 2)
/** USBHS_USBHS_DEVEPTIFR[8]_RXOUTIS Received OUT Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[8]_RXOUTIS		(1 << 1)
/** USBHS_USBHS_DEVEPTIFR[8]_TXINIS Transmitted IN Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[8]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptifr[9] USBHSDEVEPTIFR[9] Device Endpoint Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIFR[9]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[9]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_DEVEPTIFR[9]_SHORTPACKETS Short Packet Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[9]_SHORTPACKETS		(1 << 7)
/** USBHS_USBHS_DEVEPTIFR[9]_STALLEDIS STALLed Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[9]_STALLEDIS		(1 << 6)
/** USBHS_USBHS_DEVEPTIFR[9]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[9]_OVERFIS		(1 << 5)
/** USBHS_USBHS_DEVEPTIFR[9]_NAKINIS NAKed IN Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[9]_NAKINIS		(1 << 4)
/** USBHS_USBHS_DEVEPTIFR[9]_NAKOUTIS NAKed OUT Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[9]_NAKOUTIS		(1 << 3)
/** USBHS_USBHS_DEVEPTIFR[9]_RXSTPIS Received SETUP Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[9]_RXSTPIS		(1 << 2)
/** USBHS_USBHS_DEVEPTIFR[9]_RXOUTIS Received OUT Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[9]_RXOUTIS		(1 << 1)
/** USBHS_USBHS_DEVEPTIFR[9]_TXINIS Transmitted IN Data Interrupt Set **/
#define USBHS_USBHS_DEVEPTIFR[9]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptimr[0] USBHSDEVEPTIMR[0] Device Endpoint Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIMR[0]_STALLRQ STALL Request **/
#define USBHS_USBHS_DEVEPTIMR[0]_STALLRQ		(1 << 19)
/** USBHS_USBHS_DEVEPTIMR[0]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_DEVEPTIMR[0]_RSTDT		(1 << 18)
/** USBHS_USBHS_DEVEPTIMR[0]_NYETDIS NYET Token Disable **/
#define USBHS_USBHS_DEVEPTIMR[0]_NYETDIS		(1 << 17)
/** USBHS_USBHS_DEVEPTIMR[0]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define USBHS_USBHS_DEVEPTIMR[0]_EPDISHDMA		(1 << 16)
/** USBHS_USBHS_DEVEPTIMR[0]_FIFOCON FIFO Control **/
#define USBHS_USBHS_DEVEPTIMR[0]_FIFOCON		(1 << 14)
/** USBHS_USBHS_DEVEPTIMR[0]_KILLBK Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIMR[0]_KILLBK		(1 << 13)
/** USBHS_USBHS_DEVEPTIMR[0]_NBUSYBKE Number of Busy Banks Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[0]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_DEVEPTIMR[0]_SHORTPACKETE Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[0]_SHORTPACKETE		(1 << 7)
/** USBHS_USBHS_DEVEPTIMR[0]_STALLEDE STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[0]_STALLEDE		(1 << 6)
/** USBHS_USBHS_DEVEPTIMR[0]_OVERFE Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[0]_OVERFE		(1 << 5)
/** USBHS_USBHS_DEVEPTIMR[0]_NAKINE NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[0]_NAKINE		(1 << 4)
/** USBHS_USBHS_DEVEPTIMR[0]_NAKOUTE NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[0]_NAKOUTE		(1 << 3)
/** USBHS_USBHS_DEVEPTIMR[0]_RXSTPE Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[0]_RXSTPE		(1 << 2)
/** USBHS_USBHS_DEVEPTIMR[0]_RXOUTE Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[0]_RXOUTE		(1 << 1)
/** USBHS_USBHS_DEVEPTIMR[0]_TXINE Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[0]_TXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptimr[1] USBHSDEVEPTIMR[1] Device Endpoint Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIMR[1]_STALLRQ STALL Request **/
#define USBHS_USBHS_DEVEPTIMR[1]_STALLRQ		(1 << 19)
/** USBHS_USBHS_DEVEPTIMR[1]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_DEVEPTIMR[1]_RSTDT		(1 << 18)
/** USBHS_USBHS_DEVEPTIMR[1]_NYETDIS NYET Token Disable **/
#define USBHS_USBHS_DEVEPTIMR[1]_NYETDIS		(1 << 17)
/** USBHS_USBHS_DEVEPTIMR[1]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define USBHS_USBHS_DEVEPTIMR[1]_EPDISHDMA		(1 << 16)
/** USBHS_USBHS_DEVEPTIMR[1]_FIFOCON FIFO Control **/
#define USBHS_USBHS_DEVEPTIMR[1]_FIFOCON		(1 << 14)
/** USBHS_USBHS_DEVEPTIMR[1]_KILLBK Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIMR[1]_KILLBK		(1 << 13)
/** USBHS_USBHS_DEVEPTIMR[1]_NBUSYBKE Number of Busy Banks Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[1]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_DEVEPTIMR[1]_SHORTPACKETE Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[1]_SHORTPACKETE		(1 << 7)
/** USBHS_USBHS_DEVEPTIMR[1]_STALLEDE STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[1]_STALLEDE		(1 << 6)
/** USBHS_USBHS_DEVEPTIMR[1]_OVERFE Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[1]_OVERFE		(1 << 5)
/** USBHS_USBHS_DEVEPTIMR[1]_NAKINE NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[1]_NAKINE		(1 << 4)
/** USBHS_USBHS_DEVEPTIMR[1]_NAKOUTE NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[1]_NAKOUTE		(1 << 3)
/** USBHS_USBHS_DEVEPTIMR[1]_RXSTPE Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[1]_RXSTPE		(1 << 2)
/** USBHS_USBHS_DEVEPTIMR[1]_RXOUTE Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[1]_RXOUTE		(1 << 1)
/** USBHS_USBHS_DEVEPTIMR[1]_TXINE Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[1]_TXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptimr[2] USBHSDEVEPTIMR[2] Device Endpoint Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIMR[2]_STALLRQ STALL Request **/
#define USBHS_USBHS_DEVEPTIMR[2]_STALLRQ		(1 << 19)
/** USBHS_USBHS_DEVEPTIMR[2]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_DEVEPTIMR[2]_RSTDT		(1 << 18)
/** USBHS_USBHS_DEVEPTIMR[2]_NYETDIS NYET Token Disable **/
#define USBHS_USBHS_DEVEPTIMR[2]_NYETDIS		(1 << 17)
/** USBHS_USBHS_DEVEPTIMR[2]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define USBHS_USBHS_DEVEPTIMR[2]_EPDISHDMA		(1 << 16)
/** USBHS_USBHS_DEVEPTIMR[2]_FIFOCON FIFO Control **/
#define USBHS_USBHS_DEVEPTIMR[2]_FIFOCON		(1 << 14)
/** USBHS_USBHS_DEVEPTIMR[2]_KILLBK Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIMR[2]_KILLBK		(1 << 13)
/** USBHS_USBHS_DEVEPTIMR[2]_NBUSYBKE Number of Busy Banks Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[2]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_DEVEPTIMR[2]_SHORTPACKETE Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[2]_SHORTPACKETE		(1 << 7)
/** USBHS_USBHS_DEVEPTIMR[2]_STALLEDE STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[2]_STALLEDE		(1 << 6)
/** USBHS_USBHS_DEVEPTIMR[2]_OVERFE Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[2]_OVERFE		(1 << 5)
/** USBHS_USBHS_DEVEPTIMR[2]_NAKINE NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[2]_NAKINE		(1 << 4)
/** USBHS_USBHS_DEVEPTIMR[2]_NAKOUTE NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[2]_NAKOUTE		(1 << 3)
/** USBHS_USBHS_DEVEPTIMR[2]_RXSTPE Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[2]_RXSTPE		(1 << 2)
/** USBHS_USBHS_DEVEPTIMR[2]_RXOUTE Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[2]_RXOUTE		(1 << 1)
/** USBHS_USBHS_DEVEPTIMR[2]_TXINE Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[2]_TXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptimr[3] USBHSDEVEPTIMR[3] Device Endpoint Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIMR[3]_STALLRQ STALL Request **/
#define USBHS_USBHS_DEVEPTIMR[3]_STALLRQ		(1 << 19)
/** USBHS_USBHS_DEVEPTIMR[3]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_DEVEPTIMR[3]_RSTDT		(1 << 18)
/** USBHS_USBHS_DEVEPTIMR[3]_NYETDIS NYET Token Disable **/
#define USBHS_USBHS_DEVEPTIMR[3]_NYETDIS		(1 << 17)
/** USBHS_USBHS_DEVEPTIMR[3]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define USBHS_USBHS_DEVEPTIMR[3]_EPDISHDMA		(1 << 16)
/** USBHS_USBHS_DEVEPTIMR[3]_FIFOCON FIFO Control **/
#define USBHS_USBHS_DEVEPTIMR[3]_FIFOCON		(1 << 14)
/** USBHS_USBHS_DEVEPTIMR[3]_KILLBK Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIMR[3]_KILLBK		(1 << 13)
/** USBHS_USBHS_DEVEPTIMR[3]_NBUSYBKE Number of Busy Banks Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[3]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_DEVEPTIMR[3]_SHORTPACKETE Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[3]_SHORTPACKETE		(1 << 7)
/** USBHS_USBHS_DEVEPTIMR[3]_STALLEDE STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[3]_STALLEDE		(1 << 6)
/** USBHS_USBHS_DEVEPTIMR[3]_OVERFE Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[3]_OVERFE		(1 << 5)
/** USBHS_USBHS_DEVEPTIMR[3]_NAKINE NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[3]_NAKINE		(1 << 4)
/** USBHS_USBHS_DEVEPTIMR[3]_NAKOUTE NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[3]_NAKOUTE		(1 << 3)
/** USBHS_USBHS_DEVEPTIMR[3]_RXSTPE Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[3]_RXSTPE		(1 << 2)
/** USBHS_USBHS_DEVEPTIMR[3]_RXOUTE Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[3]_RXOUTE		(1 << 1)
/** USBHS_USBHS_DEVEPTIMR[3]_TXINE Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[3]_TXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptimr[4] USBHSDEVEPTIMR[4] Device Endpoint Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIMR[4]_STALLRQ STALL Request **/
#define USBHS_USBHS_DEVEPTIMR[4]_STALLRQ		(1 << 19)
/** USBHS_USBHS_DEVEPTIMR[4]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_DEVEPTIMR[4]_RSTDT		(1 << 18)
/** USBHS_USBHS_DEVEPTIMR[4]_NYETDIS NYET Token Disable **/
#define USBHS_USBHS_DEVEPTIMR[4]_NYETDIS		(1 << 17)
/** USBHS_USBHS_DEVEPTIMR[4]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define USBHS_USBHS_DEVEPTIMR[4]_EPDISHDMA		(1 << 16)
/** USBHS_USBHS_DEVEPTIMR[4]_FIFOCON FIFO Control **/
#define USBHS_USBHS_DEVEPTIMR[4]_FIFOCON		(1 << 14)
/** USBHS_USBHS_DEVEPTIMR[4]_KILLBK Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIMR[4]_KILLBK		(1 << 13)
/** USBHS_USBHS_DEVEPTIMR[4]_NBUSYBKE Number of Busy Banks Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[4]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_DEVEPTIMR[4]_SHORTPACKETE Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[4]_SHORTPACKETE		(1 << 7)
/** USBHS_USBHS_DEVEPTIMR[4]_STALLEDE STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[4]_STALLEDE		(1 << 6)
/** USBHS_USBHS_DEVEPTIMR[4]_OVERFE Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[4]_OVERFE		(1 << 5)
/** USBHS_USBHS_DEVEPTIMR[4]_NAKINE NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[4]_NAKINE		(1 << 4)
/** USBHS_USBHS_DEVEPTIMR[4]_NAKOUTE NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[4]_NAKOUTE		(1 << 3)
/** USBHS_USBHS_DEVEPTIMR[4]_RXSTPE Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[4]_RXSTPE		(1 << 2)
/** USBHS_USBHS_DEVEPTIMR[4]_RXOUTE Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[4]_RXOUTE		(1 << 1)
/** USBHS_USBHS_DEVEPTIMR[4]_TXINE Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[4]_TXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptimr[5] USBHSDEVEPTIMR[5] Device Endpoint Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIMR[5]_STALLRQ STALL Request **/
#define USBHS_USBHS_DEVEPTIMR[5]_STALLRQ		(1 << 19)
/** USBHS_USBHS_DEVEPTIMR[5]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_DEVEPTIMR[5]_RSTDT		(1 << 18)
/** USBHS_USBHS_DEVEPTIMR[5]_NYETDIS NYET Token Disable **/
#define USBHS_USBHS_DEVEPTIMR[5]_NYETDIS		(1 << 17)
/** USBHS_USBHS_DEVEPTIMR[5]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define USBHS_USBHS_DEVEPTIMR[5]_EPDISHDMA		(1 << 16)
/** USBHS_USBHS_DEVEPTIMR[5]_FIFOCON FIFO Control **/
#define USBHS_USBHS_DEVEPTIMR[5]_FIFOCON		(1 << 14)
/** USBHS_USBHS_DEVEPTIMR[5]_KILLBK Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIMR[5]_KILLBK		(1 << 13)
/** USBHS_USBHS_DEVEPTIMR[5]_NBUSYBKE Number of Busy Banks Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[5]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_DEVEPTIMR[5]_SHORTPACKETE Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[5]_SHORTPACKETE		(1 << 7)
/** USBHS_USBHS_DEVEPTIMR[5]_STALLEDE STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[5]_STALLEDE		(1 << 6)
/** USBHS_USBHS_DEVEPTIMR[5]_OVERFE Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[5]_OVERFE		(1 << 5)
/** USBHS_USBHS_DEVEPTIMR[5]_NAKINE NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[5]_NAKINE		(1 << 4)
/** USBHS_USBHS_DEVEPTIMR[5]_NAKOUTE NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[5]_NAKOUTE		(1 << 3)
/** USBHS_USBHS_DEVEPTIMR[5]_RXSTPE Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[5]_RXSTPE		(1 << 2)
/** USBHS_USBHS_DEVEPTIMR[5]_RXOUTE Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[5]_RXOUTE		(1 << 1)
/** USBHS_USBHS_DEVEPTIMR[5]_TXINE Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[5]_TXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptimr[6] USBHSDEVEPTIMR[6] Device Endpoint Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIMR[6]_STALLRQ STALL Request **/
#define USBHS_USBHS_DEVEPTIMR[6]_STALLRQ		(1 << 19)
/** USBHS_USBHS_DEVEPTIMR[6]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_DEVEPTIMR[6]_RSTDT		(1 << 18)
/** USBHS_USBHS_DEVEPTIMR[6]_NYETDIS NYET Token Disable **/
#define USBHS_USBHS_DEVEPTIMR[6]_NYETDIS		(1 << 17)
/** USBHS_USBHS_DEVEPTIMR[6]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define USBHS_USBHS_DEVEPTIMR[6]_EPDISHDMA		(1 << 16)
/** USBHS_USBHS_DEVEPTIMR[6]_FIFOCON FIFO Control **/
#define USBHS_USBHS_DEVEPTIMR[6]_FIFOCON		(1 << 14)
/** USBHS_USBHS_DEVEPTIMR[6]_KILLBK Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIMR[6]_KILLBK		(1 << 13)
/** USBHS_USBHS_DEVEPTIMR[6]_NBUSYBKE Number of Busy Banks Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[6]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_DEVEPTIMR[6]_SHORTPACKETE Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[6]_SHORTPACKETE		(1 << 7)
/** USBHS_USBHS_DEVEPTIMR[6]_STALLEDE STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[6]_STALLEDE		(1 << 6)
/** USBHS_USBHS_DEVEPTIMR[6]_OVERFE Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[6]_OVERFE		(1 << 5)
/** USBHS_USBHS_DEVEPTIMR[6]_NAKINE NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[6]_NAKINE		(1 << 4)
/** USBHS_USBHS_DEVEPTIMR[6]_NAKOUTE NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[6]_NAKOUTE		(1 << 3)
/** USBHS_USBHS_DEVEPTIMR[6]_RXSTPE Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[6]_RXSTPE		(1 << 2)
/** USBHS_USBHS_DEVEPTIMR[6]_RXOUTE Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[6]_RXOUTE		(1 << 1)
/** USBHS_USBHS_DEVEPTIMR[6]_TXINE Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[6]_TXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptimr[7] USBHSDEVEPTIMR[7] Device Endpoint Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIMR[7]_STALLRQ STALL Request **/
#define USBHS_USBHS_DEVEPTIMR[7]_STALLRQ		(1 << 19)
/** USBHS_USBHS_DEVEPTIMR[7]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_DEVEPTIMR[7]_RSTDT		(1 << 18)
/** USBHS_USBHS_DEVEPTIMR[7]_NYETDIS NYET Token Disable **/
#define USBHS_USBHS_DEVEPTIMR[7]_NYETDIS		(1 << 17)
/** USBHS_USBHS_DEVEPTIMR[7]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define USBHS_USBHS_DEVEPTIMR[7]_EPDISHDMA		(1 << 16)
/** USBHS_USBHS_DEVEPTIMR[7]_FIFOCON FIFO Control **/
#define USBHS_USBHS_DEVEPTIMR[7]_FIFOCON		(1 << 14)
/** USBHS_USBHS_DEVEPTIMR[7]_KILLBK Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIMR[7]_KILLBK		(1 << 13)
/** USBHS_USBHS_DEVEPTIMR[7]_NBUSYBKE Number of Busy Banks Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[7]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_DEVEPTIMR[7]_SHORTPACKETE Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[7]_SHORTPACKETE		(1 << 7)
/** USBHS_USBHS_DEVEPTIMR[7]_STALLEDE STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[7]_STALLEDE		(1 << 6)
/** USBHS_USBHS_DEVEPTIMR[7]_OVERFE Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[7]_OVERFE		(1 << 5)
/** USBHS_USBHS_DEVEPTIMR[7]_NAKINE NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[7]_NAKINE		(1 << 4)
/** USBHS_USBHS_DEVEPTIMR[7]_NAKOUTE NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[7]_NAKOUTE		(1 << 3)
/** USBHS_USBHS_DEVEPTIMR[7]_RXSTPE Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[7]_RXSTPE		(1 << 2)
/** USBHS_USBHS_DEVEPTIMR[7]_RXOUTE Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[7]_RXOUTE		(1 << 1)
/** USBHS_USBHS_DEVEPTIMR[7]_TXINE Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[7]_TXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptimr[8] USBHSDEVEPTIMR[8] Device Endpoint Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIMR[8]_STALLRQ STALL Request **/
#define USBHS_USBHS_DEVEPTIMR[8]_STALLRQ		(1 << 19)
/** USBHS_USBHS_DEVEPTIMR[8]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_DEVEPTIMR[8]_RSTDT		(1 << 18)
/** USBHS_USBHS_DEVEPTIMR[8]_NYETDIS NYET Token Disable **/
#define USBHS_USBHS_DEVEPTIMR[8]_NYETDIS		(1 << 17)
/** USBHS_USBHS_DEVEPTIMR[8]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define USBHS_USBHS_DEVEPTIMR[8]_EPDISHDMA		(1 << 16)
/** USBHS_USBHS_DEVEPTIMR[8]_FIFOCON FIFO Control **/
#define USBHS_USBHS_DEVEPTIMR[8]_FIFOCON		(1 << 14)
/** USBHS_USBHS_DEVEPTIMR[8]_KILLBK Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIMR[8]_KILLBK		(1 << 13)
/** USBHS_USBHS_DEVEPTIMR[8]_NBUSYBKE Number of Busy Banks Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[8]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_DEVEPTIMR[8]_SHORTPACKETE Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[8]_SHORTPACKETE		(1 << 7)
/** USBHS_USBHS_DEVEPTIMR[8]_STALLEDE STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[8]_STALLEDE		(1 << 6)
/** USBHS_USBHS_DEVEPTIMR[8]_OVERFE Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[8]_OVERFE		(1 << 5)
/** USBHS_USBHS_DEVEPTIMR[8]_NAKINE NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[8]_NAKINE		(1 << 4)
/** USBHS_USBHS_DEVEPTIMR[8]_NAKOUTE NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[8]_NAKOUTE		(1 << 3)
/** USBHS_USBHS_DEVEPTIMR[8]_RXSTPE Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[8]_RXSTPE		(1 << 2)
/** USBHS_USBHS_DEVEPTIMR[8]_RXOUTE Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[8]_RXOUTE		(1 << 1)
/** USBHS_USBHS_DEVEPTIMR[8]_TXINE Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[8]_TXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptimr[9] USBHSDEVEPTIMR[9] Device Endpoint Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIMR[9]_STALLRQ STALL Request **/
#define USBHS_USBHS_DEVEPTIMR[9]_STALLRQ		(1 << 19)
/** USBHS_USBHS_DEVEPTIMR[9]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_DEVEPTIMR[9]_RSTDT		(1 << 18)
/** USBHS_USBHS_DEVEPTIMR[9]_NYETDIS NYET Token Disable **/
#define USBHS_USBHS_DEVEPTIMR[9]_NYETDIS		(1 << 17)
/** USBHS_USBHS_DEVEPTIMR[9]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define USBHS_USBHS_DEVEPTIMR[9]_EPDISHDMA		(1 << 16)
/** USBHS_USBHS_DEVEPTIMR[9]_FIFOCON FIFO Control **/
#define USBHS_USBHS_DEVEPTIMR[9]_FIFOCON		(1 << 14)
/** USBHS_USBHS_DEVEPTIMR[9]_KILLBK Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIMR[9]_KILLBK		(1 << 13)
/** USBHS_USBHS_DEVEPTIMR[9]_NBUSYBKE Number of Busy Banks Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[9]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_DEVEPTIMR[9]_SHORTPACKETE Short Packet Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[9]_SHORTPACKETE		(1 << 7)
/** USBHS_USBHS_DEVEPTIMR[9]_STALLEDE STALLed Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[9]_STALLEDE		(1 << 6)
/** USBHS_USBHS_DEVEPTIMR[9]_OVERFE Overflow Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[9]_OVERFE		(1 << 5)
/** USBHS_USBHS_DEVEPTIMR[9]_NAKINE NAKed IN Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[9]_NAKINE		(1 << 4)
/** USBHS_USBHS_DEVEPTIMR[9]_NAKOUTE NAKed OUT Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[9]_NAKOUTE		(1 << 3)
/** USBHS_USBHS_DEVEPTIMR[9]_RXSTPE Received SETUP Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[9]_RXSTPE		(1 << 2)
/** USBHS_USBHS_DEVEPTIMR[9]_RXOUTE Received OUT Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[9]_RXOUTE		(1 << 1)
/** USBHS_USBHS_DEVEPTIMR[9]_TXINE Transmitted IN Data Interrupt **/
#define USBHS_USBHS_DEVEPTIMR[9]_TXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptier[0] USBHSDEVEPTIER[0] Device Endpoint Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIER[0]_STALLRQS STALL Request Enable **/
#define USBHS_USBHS_DEVEPTIER[0]_STALLRQS		(1 << 19)
/** USBHS_USBHS_DEVEPTIER[0]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_DEVEPTIER[0]_RSTDTS		(1 << 18)
/** USBHS_USBHS_DEVEPTIER[0]_NYETDISS NYET Token Disable Enable **/
#define USBHS_USBHS_DEVEPTIER[0]_NYETDISS		(1 << 17)
/** USBHS_USBHS_DEVEPTIER[0]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_DEVEPTIER[0]_EPDISHDMAS		(1 << 16)
/** USBHS_USBHS_DEVEPTIER[0]_FIFOCONS FIFO Control **/
#define USBHS_USBHS_DEVEPTIER[0]_FIFOCONS		(1 << 14)
/** USBHS_USBHS_DEVEPTIER[0]_KILLBKS Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIER[0]_KILLBKS		(1 << 13)
/** USBHS_USBHS_DEVEPTIER[0]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[0]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_DEVEPTIER[0]_SHORTPACKETES Short Packet Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[0]_SHORTPACKETES		(1 << 7)
/** USBHS_USBHS_DEVEPTIER[0]_STALLEDES STALLed Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[0]_STALLEDES		(1 << 6)
/** USBHS_USBHS_DEVEPTIER[0]_OVERFES Overflow Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[0]_OVERFES		(1 << 5)
/** USBHS_USBHS_DEVEPTIER[0]_NAKINES NAKed IN Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[0]_NAKINES		(1 << 4)
/** USBHS_USBHS_DEVEPTIER[0]_NAKOUTES NAKed OUT Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[0]_NAKOUTES		(1 << 3)
/** USBHS_USBHS_DEVEPTIER[0]_RXSTPES Received SETUP Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[0]_RXSTPES		(1 << 2)
/** USBHS_USBHS_DEVEPTIER[0]_RXOUTES Received OUT Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[0]_RXOUTES		(1 << 1)
/** USBHS_USBHS_DEVEPTIER[0]_TXINES Transmitted IN Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[0]_TXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptier[1] USBHSDEVEPTIER[1] Device Endpoint Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIER[1]_STALLRQS STALL Request Enable **/
#define USBHS_USBHS_DEVEPTIER[1]_STALLRQS		(1 << 19)
/** USBHS_USBHS_DEVEPTIER[1]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_DEVEPTIER[1]_RSTDTS		(1 << 18)
/** USBHS_USBHS_DEVEPTIER[1]_NYETDISS NYET Token Disable Enable **/
#define USBHS_USBHS_DEVEPTIER[1]_NYETDISS		(1 << 17)
/** USBHS_USBHS_DEVEPTIER[1]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_DEVEPTIER[1]_EPDISHDMAS		(1 << 16)
/** USBHS_USBHS_DEVEPTIER[1]_FIFOCONS FIFO Control **/
#define USBHS_USBHS_DEVEPTIER[1]_FIFOCONS		(1 << 14)
/** USBHS_USBHS_DEVEPTIER[1]_KILLBKS Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIER[1]_KILLBKS		(1 << 13)
/** USBHS_USBHS_DEVEPTIER[1]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[1]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_DEVEPTIER[1]_SHORTPACKETES Short Packet Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[1]_SHORTPACKETES		(1 << 7)
/** USBHS_USBHS_DEVEPTIER[1]_STALLEDES STALLed Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[1]_STALLEDES		(1 << 6)
/** USBHS_USBHS_DEVEPTIER[1]_OVERFES Overflow Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[1]_OVERFES		(1 << 5)
/** USBHS_USBHS_DEVEPTIER[1]_NAKINES NAKed IN Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[1]_NAKINES		(1 << 4)
/** USBHS_USBHS_DEVEPTIER[1]_NAKOUTES NAKed OUT Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[1]_NAKOUTES		(1 << 3)
/** USBHS_USBHS_DEVEPTIER[1]_RXSTPES Received SETUP Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[1]_RXSTPES		(1 << 2)
/** USBHS_USBHS_DEVEPTIER[1]_RXOUTES Received OUT Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[1]_RXOUTES		(1 << 1)
/** USBHS_USBHS_DEVEPTIER[1]_TXINES Transmitted IN Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[1]_TXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptier[2] USBHSDEVEPTIER[2] Device Endpoint Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIER[2]_STALLRQS STALL Request Enable **/
#define USBHS_USBHS_DEVEPTIER[2]_STALLRQS		(1 << 19)
/** USBHS_USBHS_DEVEPTIER[2]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_DEVEPTIER[2]_RSTDTS		(1 << 18)
/** USBHS_USBHS_DEVEPTIER[2]_NYETDISS NYET Token Disable Enable **/
#define USBHS_USBHS_DEVEPTIER[2]_NYETDISS		(1 << 17)
/** USBHS_USBHS_DEVEPTIER[2]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_DEVEPTIER[2]_EPDISHDMAS		(1 << 16)
/** USBHS_USBHS_DEVEPTIER[2]_FIFOCONS FIFO Control **/
#define USBHS_USBHS_DEVEPTIER[2]_FIFOCONS		(1 << 14)
/** USBHS_USBHS_DEVEPTIER[2]_KILLBKS Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIER[2]_KILLBKS		(1 << 13)
/** USBHS_USBHS_DEVEPTIER[2]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[2]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_DEVEPTIER[2]_SHORTPACKETES Short Packet Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[2]_SHORTPACKETES		(1 << 7)
/** USBHS_USBHS_DEVEPTIER[2]_STALLEDES STALLed Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[2]_STALLEDES		(1 << 6)
/** USBHS_USBHS_DEVEPTIER[2]_OVERFES Overflow Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[2]_OVERFES		(1 << 5)
/** USBHS_USBHS_DEVEPTIER[2]_NAKINES NAKed IN Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[2]_NAKINES		(1 << 4)
/** USBHS_USBHS_DEVEPTIER[2]_NAKOUTES NAKed OUT Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[2]_NAKOUTES		(1 << 3)
/** USBHS_USBHS_DEVEPTIER[2]_RXSTPES Received SETUP Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[2]_RXSTPES		(1 << 2)
/** USBHS_USBHS_DEVEPTIER[2]_RXOUTES Received OUT Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[2]_RXOUTES		(1 << 1)
/** USBHS_USBHS_DEVEPTIER[2]_TXINES Transmitted IN Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[2]_TXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptier[3] USBHSDEVEPTIER[3] Device Endpoint Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIER[3]_STALLRQS STALL Request Enable **/
#define USBHS_USBHS_DEVEPTIER[3]_STALLRQS		(1 << 19)
/** USBHS_USBHS_DEVEPTIER[3]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_DEVEPTIER[3]_RSTDTS		(1 << 18)
/** USBHS_USBHS_DEVEPTIER[3]_NYETDISS NYET Token Disable Enable **/
#define USBHS_USBHS_DEVEPTIER[3]_NYETDISS		(1 << 17)
/** USBHS_USBHS_DEVEPTIER[3]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_DEVEPTIER[3]_EPDISHDMAS		(1 << 16)
/** USBHS_USBHS_DEVEPTIER[3]_FIFOCONS FIFO Control **/
#define USBHS_USBHS_DEVEPTIER[3]_FIFOCONS		(1 << 14)
/** USBHS_USBHS_DEVEPTIER[3]_KILLBKS Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIER[3]_KILLBKS		(1 << 13)
/** USBHS_USBHS_DEVEPTIER[3]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[3]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_DEVEPTIER[3]_SHORTPACKETES Short Packet Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[3]_SHORTPACKETES		(1 << 7)
/** USBHS_USBHS_DEVEPTIER[3]_STALLEDES STALLed Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[3]_STALLEDES		(1 << 6)
/** USBHS_USBHS_DEVEPTIER[3]_OVERFES Overflow Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[3]_OVERFES		(1 << 5)
/** USBHS_USBHS_DEVEPTIER[3]_NAKINES NAKed IN Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[3]_NAKINES		(1 << 4)
/** USBHS_USBHS_DEVEPTIER[3]_NAKOUTES NAKed OUT Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[3]_NAKOUTES		(1 << 3)
/** USBHS_USBHS_DEVEPTIER[3]_RXSTPES Received SETUP Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[3]_RXSTPES		(1 << 2)
/** USBHS_USBHS_DEVEPTIER[3]_RXOUTES Received OUT Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[3]_RXOUTES		(1 << 1)
/** USBHS_USBHS_DEVEPTIER[3]_TXINES Transmitted IN Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[3]_TXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptier[4] USBHSDEVEPTIER[4] Device Endpoint Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIER[4]_STALLRQS STALL Request Enable **/
#define USBHS_USBHS_DEVEPTIER[4]_STALLRQS		(1 << 19)
/** USBHS_USBHS_DEVEPTIER[4]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_DEVEPTIER[4]_RSTDTS		(1 << 18)
/** USBHS_USBHS_DEVEPTIER[4]_NYETDISS NYET Token Disable Enable **/
#define USBHS_USBHS_DEVEPTIER[4]_NYETDISS		(1 << 17)
/** USBHS_USBHS_DEVEPTIER[4]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_DEVEPTIER[4]_EPDISHDMAS		(1 << 16)
/** USBHS_USBHS_DEVEPTIER[4]_FIFOCONS FIFO Control **/
#define USBHS_USBHS_DEVEPTIER[4]_FIFOCONS		(1 << 14)
/** USBHS_USBHS_DEVEPTIER[4]_KILLBKS Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIER[4]_KILLBKS		(1 << 13)
/** USBHS_USBHS_DEVEPTIER[4]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[4]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_DEVEPTIER[4]_SHORTPACKETES Short Packet Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[4]_SHORTPACKETES		(1 << 7)
/** USBHS_USBHS_DEVEPTIER[4]_STALLEDES STALLed Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[4]_STALLEDES		(1 << 6)
/** USBHS_USBHS_DEVEPTIER[4]_OVERFES Overflow Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[4]_OVERFES		(1 << 5)
/** USBHS_USBHS_DEVEPTIER[4]_NAKINES NAKed IN Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[4]_NAKINES		(1 << 4)
/** USBHS_USBHS_DEVEPTIER[4]_NAKOUTES NAKed OUT Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[4]_NAKOUTES		(1 << 3)
/** USBHS_USBHS_DEVEPTIER[4]_RXSTPES Received SETUP Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[4]_RXSTPES		(1 << 2)
/** USBHS_USBHS_DEVEPTIER[4]_RXOUTES Received OUT Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[4]_RXOUTES		(1 << 1)
/** USBHS_USBHS_DEVEPTIER[4]_TXINES Transmitted IN Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[4]_TXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptier[5] USBHSDEVEPTIER[5] Device Endpoint Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIER[5]_STALLRQS STALL Request Enable **/
#define USBHS_USBHS_DEVEPTIER[5]_STALLRQS		(1 << 19)
/** USBHS_USBHS_DEVEPTIER[5]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_DEVEPTIER[5]_RSTDTS		(1 << 18)
/** USBHS_USBHS_DEVEPTIER[5]_NYETDISS NYET Token Disable Enable **/
#define USBHS_USBHS_DEVEPTIER[5]_NYETDISS		(1 << 17)
/** USBHS_USBHS_DEVEPTIER[5]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_DEVEPTIER[5]_EPDISHDMAS		(1 << 16)
/** USBHS_USBHS_DEVEPTIER[5]_FIFOCONS FIFO Control **/
#define USBHS_USBHS_DEVEPTIER[5]_FIFOCONS		(1 << 14)
/** USBHS_USBHS_DEVEPTIER[5]_KILLBKS Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIER[5]_KILLBKS		(1 << 13)
/** USBHS_USBHS_DEVEPTIER[5]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[5]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_DEVEPTIER[5]_SHORTPACKETES Short Packet Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[5]_SHORTPACKETES		(1 << 7)
/** USBHS_USBHS_DEVEPTIER[5]_STALLEDES STALLed Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[5]_STALLEDES		(1 << 6)
/** USBHS_USBHS_DEVEPTIER[5]_OVERFES Overflow Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[5]_OVERFES		(1 << 5)
/** USBHS_USBHS_DEVEPTIER[5]_NAKINES NAKed IN Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[5]_NAKINES		(1 << 4)
/** USBHS_USBHS_DEVEPTIER[5]_NAKOUTES NAKed OUT Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[5]_NAKOUTES		(1 << 3)
/** USBHS_USBHS_DEVEPTIER[5]_RXSTPES Received SETUP Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[5]_RXSTPES		(1 << 2)
/** USBHS_USBHS_DEVEPTIER[5]_RXOUTES Received OUT Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[5]_RXOUTES		(1 << 1)
/** USBHS_USBHS_DEVEPTIER[5]_TXINES Transmitted IN Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[5]_TXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptier[6] USBHSDEVEPTIER[6] Device Endpoint Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIER[6]_STALLRQS STALL Request Enable **/
#define USBHS_USBHS_DEVEPTIER[6]_STALLRQS		(1 << 19)
/** USBHS_USBHS_DEVEPTIER[6]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_DEVEPTIER[6]_RSTDTS		(1 << 18)
/** USBHS_USBHS_DEVEPTIER[6]_NYETDISS NYET Token Disable Enable **/
#define USBHS_USBHS_DEVEPTIER[6]_NYETDISS		(1 << 17)
/** USBHS_USBHS_DEVEPTIER[6]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_DEVEPTIER[6]_EPDISHDMAS		(1 << 16)
/** USBHS_USBHS_DEVEPTIER[6]_FIFOCONS FIFO Control **/
#define USBHS_USBHS_DEVEPTIER[6]_FIFOCONS		(1 << 14)
/** USBHS_USBHS_DEVEPTIER[6]_KILLBKS Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIER[6]_KILLBKS		(1 << 13)
/** USBHS_USBHS_DEVEPTIER[6]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[6]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_DEVEPTIER[6]_SHORTPACKETES Short Packet Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[6]_SHORTPACKETES		(1 << 7)
/** USBHS_USBHS_DEVEPTIER[6]_STALLEDES STALLed Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[6]_STALLEDES		(1 << 6)
/** USBHS_USBHS_DEVEPTIER[6]_OVERFES Overflow Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[6]_OVERFES		(1 << 5)
/** USBHS_USBHS_DEVEPTIER[6]_NAKINES NAKed IN Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[6]_NAKINES		(1 << 4)
/** USBHS_USBHS_DEVEPTIER[6]_NAKOUTES NAKed OUT Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[6]_NAKOUTES		(1 << 3)
/** USBHS_USBHS_DEVEPTIER[6]_RXSTPES Received SETUP Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[6]_RXSTPES		(1 << 2)
/** USBHS_USBHS_DEVEPTIER[6]_RXOUTES Received OUT Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[6]_RXOUTES		(1 << 1)
/** USBHS_USBHS_DEVEPTIER[6]_TXINES Transmitted IN Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[6]_TXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptier[7] USBHSDEVEPTIER[7] Device Endpoint Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIER[7]_STALLRQS STALL Request Enable **/
#define USBHS_USBHS_DEVEPTIER[7]_STALLRQS		(1 << 19)
/** USBHS_USBHS_DEVEPTIER[7]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_DEVEPTIER[7]_RSTDTS		(1 << 18)
/** USBHS_USBHS_DEVEPTIER[7]_NYETDISS NYET Token Disable Enable **/
#define USBHS_USBHS_DEVEPTIER[7]_NYETDISS		(1 << 17)
/** USBHS_USBHS_DEVEPTIER[7]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_DEVEPTIER[7]_EPDISHDMAS		(1 << 16)
/** USBHS_USBHS_DEVEPTIER[7]_FIFOCONS FIFO Control **/
#define USBHS_USBHS_DEVEPTIER[7]_FIFOCONS		(1 << 14)
/** USBHS_USBHS_DEVEPTIER[7]_KILLBKS Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIER[7]_KILLBKS		(1 << 13)
/** USBHS_USBHS_DEVEPTIER[7]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[7]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_DEVEPTIER[7]_SHORTPACKETES Short Packet Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[7]_SHORTPACKETES		(1 << 7)
/** USBHS_USBHS_DEVEPTIER[7]_STALLEDES STALLed Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[7]_STALLEDES		(1 << 6)
/** USBHS_USBHS_DEVEPTIER[7]_OVERFES Overflow Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[7]_OVERFES		(1 << 5)
/** USBHS_USBHS_DEVEPTIER[7]_NAKINES NAKed IN Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[7]_NAKINES		(1 << 4)
/** USBHS_USBHS_DEVEPTIER[7]_NAKOUTES NAKed OUT Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[7]_NAKOUTES		(1 << 3)
/** USBHS_USBHS_DEVEPTIER[7]_RXSTPES Received SETUP Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[7]_RXSTPES		(1 << 2)
/** USBHS_USBHS_DEVEPTIER[7]_RXOUTES Received OUT Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[7]_RXOUTES		(1 << 1)
/** USBHS_USBHS_DEVEPTIER[7]_TXINES Transmitted IN Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[7]_TXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptier[8] USBHSDEVEPTIER[8] Device Endpoint Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIER[8]_STALLRQS STALL Request Enable **/
#define USBHS_USBHS_DEVEPTIER[8]_STALLRQS		(1 << 19)
/** USBHS_USBHS_DEVEPTIER[8]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_DEVEPTIER[8]_RSTDTS		(1 << 18)
/** USBHS_USBHS_DEVEPTIER[8]_NYETDISS NYET Token Disable Enable **/
#define USBHS_USBHS_DEVEPTIER[8]_NYETDISS		(1 << 17)
/** USBHS_USBHS_DEVEPTIER[8]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_DEVEPTIER[8]_EPDISHDMAS		(1 << 16)
/** USBHS_USBHS_DEVEPTIER[8]_FIFOCONS FIFO Control **/
#define USBHS_USBHS_DEVEPTIER[8]_FIFOCONS		(1 << 14)
/** USBHS_USBHS_DEVEPTIER[8]_KILLBKS Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIER[8]_KILLBKS		(1 << 13)
/** USBHS_USBHS_DEVEPTIER[8]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[8]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_DEVEPTIER[8]_SHORTPACKETES Short Packet Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[8]_SHORTPACKETES		(1 << 7)
/** USBHS_USBHS_DEVEPTIER[8]_STALLEDES STALLed Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[8]_STALLEDES		(1 << 6)
/** USBHS_USBHS_DEVEPTIER[8]_OVERFES Overflow Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[8]_OVERFES		(1 << 5)
/** USBHS_USBHS_DEVEPTIER[8]_NAKINES NAKed IN Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[8]_NAKINES		(1 << 4)
/** USBHS_USBHS_DEVEPTIER[8]_NAKOUTES NAKed OUT Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[8]_NAKOUTES		(1 << 3)
/** USBHS_USBHS_DEVEPTIER[8]_RXSTPES Received SETUP Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[8]_RXSTPES		(1 << 2)
/** USBHS_USBHS_DEVEPTIER[8]_RXOUTES Received OUT Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[8]_RXOUTES		(1 << 1)
/** USBHS_USBHS_DEVEPTIER[8]_TXINES Transmitted IN Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[8]_TXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptier[9] USBHSDEVEPTIER[9] Device Endpoint Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIER[9]_STALLRQS STALL Request Enable **/
#define USBHS_USBHS_DEVEPTIER[9]_STALLRQS		(1 << 19)
/** USBHS_USBHS_DEVEPTIER[9]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_DEVEPTIER[9]_RSTDTS		(1 << 18)
/** USBHS_USBHS_DEVEPTIER[9]_NYETDISS NYET Token Disable Enable **/
#define USBHS_USBHS_DEVEPTIER[9]_NYETDISS		(1 << 17)
/** USBHS_USBHS_DEVEPTIER[9]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_DEVEPTIER[9]_EPDISHDMAS		(1 << 16)
/** USBHS_USBHS_DEVEPTIER[9]_FIFOCONS FIFO Control **/
#define USBHS_USBHS_DEVEPTIER[9]_FIFOCONS		(1 << 14)
/** USBHS_USBHS_DEVEPTIER[9]_KILLBKS Kill IN Bank **/
#define USBHS_USBHS_DEVEPTIER[9]_KILLBKS		(1 << 13)
/** USBHS_USBHS_DEVEPTIER[9]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[9]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_DEVEPTIER[9]_SHORTPACKETES Short Packet Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[9]_SHORTPACKETES		(1 << 7)
/** USBHS_USBHS_DEVEPTIER[9]_STALLEDES STALLed Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[9]_STALLEDES		(1 << 6)
/** USBHS_USBHS_DEVEPTIER[9]_OVERFES Overflow Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[9]_OVERFES		(1 << 5)
/** USBHS_USBHS_DEVEPTIER[9]_NAKINES NAKed IN Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[9]_NAKINES		(1 << 4)
/** USBHS_USBHS_DEVEPTIER[9]_NAKOUTES NAKed OUT Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[9]_NAKOUTES		(1 << 3)
/** USBHS_USBHS_DEVEPTIER[9]_RXSTPES Received SETUP Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[9]_RXSTPES		(1 << 2)
/** USBHS_USBHS_DEVEPTIER[9]_RXOUTES Received OUT Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[9]_RXOUTES		(1 << 1)
/** USBHS_USBHS_DEVEPTIER[9]_TXINES Transmitted IN Data Interrupt Enable **/
#define USBHS_USBHS_DEVEPTIER[9]_TXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptidr[0] USBHSDEVEPTIDR[0] Device Endpoint Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIDR[0]_STALLRQC STALL Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[0]_STALLRQC		(1 << 19)
/** USBHS_USBHS_DEVEPTIDR[0]_NYETDISC NYET Token Disable Clear **/
#define USBHS_USBHS_DEVEPTIDR[0]_NYETDISC		(1 << 17)
/** USBHS_USBHS_DEVEPTIDR[0]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[0]_EPDISHDMAC		(1 << 16)
/** USBHS_USBHS_DEVEPTIDR[0]_FIFOCONC FIFO Control Clear **/
#define USBHS_USBHS_DEVEPTIDR[0]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_DEVEPTIDR[0]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[0]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_DEVEPTIDR[0]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[0]_SHORTPACKETEC		(1 << 7)
/** USBHS_USBHS_DEVEPTIDR[0]_STALLEDEC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[0]_STALLEDEC		(1 << 6)
/** USBHS_USBHS_DEVEPTIDR[0]_OVERFEC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[0]_OVERFEC		(1 << 5)
/** USBHS_USBHS_DEVEPTIDR[0]_NAKINEC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[0]_NAKINEC		(1 << 4)
/** USBHS_USBHS_DEVEPTIDR[0]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[0]_NAKOUTEC		(1 << 3)
/** USBHS_USBHS_DEVEPTIDR[0]_RXSTPEC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[0]_RXSTPEC		(1 << 2)
/** USBHS_USBHS_DEVEPTIDR[0]_RXOUTEC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[0]_RXOUTEC		(1 << 1)
/** USBHS_USBHS_DEVEPTIDR[0]_TXINEC Transmitted IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[0]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptidr[1] USBHSDEVEPTIDR[1] Device Endpoint Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIDR[1]_STALLRQC STALL Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[1]_STALLRQC		(1 << 19)
/** USBHS_USBHS_DEVEPTIDR[1]_NYETDISC NYET Token Disable Clear **/
#define USBHS_USBHS_DEVEPTIDR[1]_NYETDISC		(1 << 17)
/** USBHS_USBHS_DEVEPTIDR[1]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[1]_EPDISHDMAC		(1 << 16)
/** USBHS_USBHS_DEVEPTIDR[1]_FIFOCONC FIFO Control Clear **/
#define USBHS_USBHS_DEVEPTIDR[1]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_DEVEPTIDR[1]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[1]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_DEVEPTIDR[1]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[1]_SHORTPACKETEC		(1 << 7)
/** USBHS_USBHS_DEVEPTIDR[1]_STALLEDEC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[1]_STALLEDEC		(1 << 6)
/** USBHS_USBHS_DEVEPTIDR[1]_OVERFEC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[1]_OVERFEC		(1 << 5)
/** USBHS_USBHS_DEVEPTIDR[1]_NAKINEC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[1]_NAKINEC		(1 << 4)
/** USBHS_USBHS_DEVEPTIDR[1]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[1]_NAKOUTEC		(1 << 3)
/** USBHS_USBHS_DEVEPTIDR[1]_RXSTPEC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[1]_RXSTPEC		(1 << 2)
/** USBHS_USBHS_DEVEPTIDR[1]_RXOUTEC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[1]_RXOUTEC		(1 << 1)
/** USBHS_USBHS_DEVEPTIDR[1]_TXINEC Transmitted IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[1]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptidr[2] USBHSDEVEPTIDR[2] Device Endpoint Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIDR[2]_STALLRQC STALL Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[2]_STALLRQC		(1 << 19)
/** USBHS_USBHS_DEVEPTIDR[2]_NYETDISC NYET Token Disable Clear **/
#define USBHS_USBHS_DEVEPTIDR[2]_NYETDISC		(1 << 17)
/** USBHS_USBHS_DEVEPTIDR[2]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[2]_EPDISHDMAC		(1 << 16)
/** USBHS_USBHS_DEVEPTIDR[2]_FIFOCONC FIFO Control Clear **/
#define USBHS_USBHS_DEVEPTIDR[2]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_DEVEPTIDR[2]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[2]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_DEVEPTIDR[2]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[2]_SHORTPACKETEC		(1 << 7)
/** USBHS_USBHS_DEVEPTIDR[2]_STALLEDEC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[2]_STALLEDEC		(1 << 6)
/** USBHS_USBHS_DEVEPTIDR[2]_OVERFEC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[2]_OVERFEC		(1 << 5)
/** USBHS_USBHS_DEVEPTIDR[2]_NAKINEC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[2]_NAKINEC		(1 << 4)
/** USBHS_USBHS_DEVEPTIDR[2]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[2]_NAKOUTEC		(1 << 3)
/** USBHS_USBHS_DEVEPTIDR[2]_RXSTPEC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[2]_RXSTPEC		(1 << 2)
/** USBHS_USBHS_DEVEPTIDR[2]_RXOUTEC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[2]_RXOUTEC		(1 << 1)
/** USBHS_USBHS_DEVEPTIDR[2]_TXINEC Transmitted IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[2]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptidr[3] USBHSDEVEPTIDR[3] Device Endpoint Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIDR[3]_STALLRQC STALL Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[3]_STALLRQC		(1 << 19)
/** USBHS_USBHS_DEVEPTIDR[3]_NYETDISC NYET Token Disable Clear **/
#define USBHS_USBHS_DEVEPTIDR[3]_NYETDISC		(1 << 17)
/** USBHS_USBHS_DEVEPTIDR[3]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[3]_EPDISHDMAC		(1 << 16)
/** USBHS_USBHS_DEVEPTIDR[3]_FIFOCONC FIFO Control Clear **/
#define USBHS_USBHS_DEVEPTIDR[3]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_DEVEPTIDR[3]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[3]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_DEVEPTIDR[3]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[3]_SHORTPACKETEC		(1 << 7)
/** USBHS_USBHS_DEVEPTIDR[3]_STALLEDEC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[3]_STALLEDEC		(1 << 6)
/** USBHS_USBHS_DEVEPTIDR[3]_OVERFEC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[3]_OVERFEC		(1 << 5)
/** USBHS_USBHS_DEVEPTIDR[3]_NAKINEC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[3]_NAKINEC		(1 << 4)
/** USBHS_USBHS_DEVEPTIDR[3]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[3]_NAKOUTEC		(1 << 3)
/** USBHS_USBHS_DEVEPTIDR[3]_RXSTPEC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[3]_RXSTPEC		(1 << 2)
/** USBHS_USBHS_DEVEPTIDR[3]_RXOUTEC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[3]_RXOUTEC		(1 << 1)
/** USBHS_USBHS_DEVEPTIDR[3]_TXINEC Transmitted IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[3]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptidr[4] USBHSDEVEPTIDR[4] Device Endpoint Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIDR[4]_STALLRQC STALL Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[4]_STALLRQC		(1 << 19)
/** USBHS_USBHS_DEVEPTIDR[4]_NYETDISC NYET Token Disable Clear **/
#define USBHS_USBHS_DEVEPTIDR[4]_NYETDISC		(1 << 17)
/** USBHS_USBHS_DEVEPTIDR[4]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[4]_EPDISHDMAC		(1 << 16)
/** USBHS_USBHS_DEVEPTIDR[4]_FIFOCONC FIFO Control Clear **/
#define USBHS_USBHS_DEVEPTIDR[4]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_DEVEPTIDR[4]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[4]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_DEVEPTIDR[4]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[4]_SHORTPACKETEC		(1 << 7)
/** USBHS_USBHS_DEVEPTIDR[4]_STALLEDEC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[4]_STALLEDEC		(1 << 6)
/** USBHS_USBHS_DEVEPTIDR[4]_OVERFEC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[4]_OVERFEC		(1 << 5)
/** USBHS_USBHS_DEVEPTIDR[4]_NAKINEC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[4]_NAKINEC		(1 << 4)
/** USBHS_USBHS_DEVEPTIDR[4]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[4]_NAKOUTEC		(1 << 3)
/** USBHS_USBHS_DEVEPTIDR[4]_RXSTPEC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[4]_RXSTPEC		(1 << 2)
/** USBHS_USBHS_DEVEPTIDR[4]_RXOUTEC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[4]_RXOUTEC		(1 << 1)
/** USBHS_USBHS_DEVEPTIDR[4]_TXINEC Transmitted IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[4]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptidr[5] USBHSDEVEPTIDR[5] Device Endpoint Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIDR[5]_STALLRQC STALL Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[5]_STALLRQC		(1 << 19)
/** USBHS_USBHS_DEVEPTIDR[5]_NYETDISC NYET Token Disable Clear **/
#define USBHS_USBHS_DEVEPTIDR[5]_NYETDISC		(1 << 17)
/** USBHS_USBHS_DEVEPTIDR[5]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[5]_EPDISHDMAC		(1 << 16)
/** USBHS_USBHS_DEVEPTIDR[5]_FIFOCONC FIFO Control Clear **/
#define USBHS_USBHS_DEVEPTIDR[5]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_DEVEPTIDR[5]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[5]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_DEVEPTIDR[5]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[5]_SHORTPACKETEC		(1 << 7)
/** USBHS_USBHS_DEVEPTIDR[5]_STALLEDEC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[5]_STALLEDEC		(1 << 6)
/** USBHS_USBHS_DEVEPTIDR[5]_OVERFEC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[5]_OVERFEC		(1 << 5)
/** USBHS_USBHS_DEVEPTIDR[5]_NAKINEC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[5]_NAKINEC		(1 << 4)
/** USBHS_USBHS_DEVEPTIDR[5]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[5]_NAKOUTEC		(1 << 3)
/** USBHS_USBHS_DEVEPTIDR[5]_RXSTPEC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[5]_RXSTPEC		(1 << 2)
/** USBHS_USBHS_DEVEPTIDR[5]_RXOUTEC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[5]_RXOUTEC		(1 << 1)
/** USBHS_USBHS_DEVEPTIDR[5]_TXINEC Transmitted IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[5]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptidr[6] USBHSDEVEPTIDR[6] Device Endpoint Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIDR[6]_STALLRQC STALL Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[6]_STALLRQC		(1 << 19)
/** USBHS_USBHS_DEVEPTIDR[6]_NYETDISC NYET Token Disable Clear **/
#define USBHS_USBHS_DEVEPTIDR[6]_NYETDISC		(1 << 17)
/** USBHS_USBHS_DEVEPTIDR[6]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[6]_EPDISHDMAC		(1 << 16)
/** USBHS_USBHS_DEVEPTIDR[6]_FIFOCONC FIFO Control Clear **/
#define USBHS_USBHS_DEVEPTIDR[6]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_DEVEPTIDR[6]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[6]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_DEVEPTIDR[6]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[6]_SHORTPACKETEC		(1 << 7)
/** USBHS_USBHS_DEVEPTIDR[6]_STALLEDEC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[6]_STALLEDEC		(1 << 6)
/** USBHS_USBHS_DEVEPTIDR[6]_OVERFEC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[6]_OVERFEC		(1 << 5)
/** USBHS_USBHS_DEVEPTIDR[6]_NAKINEC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[6]_NAKINEC		(1 << 4)
/** USBHS_USBHS_DEVEPTIDR[6]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[6]_NAKOUTEC		(1 << 3)
/** USBHS_USBHS_DEVEPTIDR[6]_RXSTPEC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[6]_RXSTPEC		(1 << 2)
/** USBHS_USBHS_DEVEPTIDR[6]_RXOUTEC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[6]_RXOUTEC		(1 << 1)
/** USBHS_USBHS_DEVEPTIDR[6]_TXINEC Transmitted IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[6]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptidr[7] USBHSDEVEPTIDR[7] Device Endpoint Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIDR[7]_STALLRQC STALL Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[7]_STALLRQC		(1 << 19)
/** USBHS_USBHS_DEVEPTIDR[7]_NYETDISC NYET Token Disable Clear **/
#define USBHS_USBHS_DEVEPTIDR[7]_NYETDISC		(1 << 17)
/** USBHS_USBHS_DEVEPTIDR[7]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[7]_EPDISHDMAC		(1 << 16)
/** USBHS_USBHS_DEVEPTIDR[7]_FIFOCONC FIFO Control Clear **/
#define USBHS_USBHS_DEVEPTIDR[7]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_DEVEPTIDR[7]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[7]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_DEVEPTIDR[7]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[7]_SHORTPACKETEC		(1 << 7)
/** USBHS_USBHS_DEVEPTIDR[7]_STALLEDEC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[7]_STALLEDEC		(1 << 6)
/** USBHS_USBHS_DEVEPTIDR[7]_OVERFEC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[7]_OVERFEC		(1 << 5)
/** USBHS_USBHS_DEVEPTIDR[7]_NAKINEC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[7]_NAKINEC		(1 << 4)
/** USBHS_USBHS_DEVEPTIDR[7]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[7]_NAKOUTEC		(1 << 3)
/** USBHS_USBHS_DEVEPTIDR[7]_RXSTPEC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[7]_RXSTPEC		(1 << 2)
/** USBHS_USBHS_DEVEPTIDR[7]_RXOUTEC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[7]_RXOUTEC		(1 << 1)
/** USBHS_USBHS_DEVEPTIDR[7]_TXINEC Transmitted IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[7]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptidr[8] USBHSDEVEPTIDR[8] Device Endpoint Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIDR[8]_STALLRQC STALL Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[8]_STALLRQC		(1 << 19)
/** USBHS_USBHS_DEVEPTIDR[8]_NYETDISC NYET Token Disable Clear **/
#define USBHS_USBHS_DEVEPTIDR[8]_NYETDISC		(1 << 17)
/** USBHS_USBHS_DEVEPTIDR[8]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[8]_EPDISHDMAC		(1 << 16)
/** USBHS_USBHS_DEVEPTIDR[8]_FIFOCONC FIFO Control Clear **/
#define USBHS_USBHS_DEVEPTIDR[8]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_DEVEPTIDR[8]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[8]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_DEVEPTIDR[8]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[8]_SHORTPACKETEC		(1 << 7)
/** USBHS_USBHS_DEVEPTIDR[8]_STALLEDEC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[8]_STALLEDEC		(1 << 6)
/** USBHS_USBHS_DEVEPTIDR[8]_OVERFEC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[8]_OVERFEC		(1 << 5)
/** USBHS_USBHS_DEVEPTIDR[8]_NAKINEC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[8]_NAKINEC		(1 << 4)
/** USBHS_USBHS_DEVEPTIDR[8]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[8]_NAKOUTEC		(1 << 3)
/** USBHS_USBHS_DEVEPTIDR[8]_RXSTPEC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[8]_RXSTPEC		(1 << 2)
/** USBHS_USBHS_DEVEPTIDR[8]_RXOUTEC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[8]_RXOUTEC		(1 << 1)
/** USBHS_USBHS_DEVEPTIDR[8]_TXINEC Transmitted IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[8]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_deveptidr[9] USBHSDEVEPTIDR[9] Device Endpoint Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_DEVEPTIDR[9]_STALLRQC STALL Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[9]_STALLRQC		(1 << 19)
/** USBHS_USBHS_DEVEPTIDR[9]_NYETDISC NYET Token Disable Clear **/
#define USBHS_USBHS_DEVEPTIDR[9]_NYETDISC		(1 << 17)
/** USBHS_USBHS_DEVEPTIDR[9]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define USBHS_USBHS_DEVEPTIDR[9]_EPDISHDMAC		(1 << 16)
/** USBHS_USBHS_DEVEPTIDR[9]_FIFOCONC FIFO Control Clear **/
#define USBHS_USBHS_DEVEPTIDR[9]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_DEVEPTIDR[9]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[9]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_DEVEPTIDR[9]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[9]_SHORTPACKETEC		(1 << 7)
/** USBHS_USBHS_DEVEPTIDR[9]_STALLEDEC STALLed Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[9]_STALLEDEC		(1 << 6)
/** USBHS_USBHS_DEVEPTIDR[9]_OVERFEC Overflow Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[9]_OVERFEC		(1 << 5)
/** USBHS_USBHS_DEVEPTIDR[9]_NAKINEC NAKed IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[9]_NAKINEC		(1 << 4)
/** USBHS_USBHS_DEVEPTIDR[9]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[9]_NAKOUTEC		(1 << 3)
/** USBHS_USBHS_DEVEPTIDR[9]_RXSTPEC Received SETUP Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[9]_RXSTPEC		(1 << 2)
/** USBHS_USBHS_DEVEPTIDR[9]_RXOUTEC Received OUT Data Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[9]_RXOUTEC		(1 << 1)
/** USBHS_USBHS_DEVEPTIDR[9]_TXINEC Transmitted IN Interrupt Clear **/
#define USBHS_USBHS_DEVEPTIDR[9]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[0]_usbhs_devdmanxtdsc USBHSDEVDMA[0]USBHSDEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[0]_usbhs_devdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[0]_usbhs_devdmaaddress USBHSDEVDMA[0]USBHSDEVDMAADDRESS Device DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[0]_usbhs_devdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[0]_usbhs_devdmacontrol USBHSDEVDMA[0]USBHSDEVDMACONTROL Device DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[0]_usbhs_devdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[0]_usbhs_devdmastatus USBHSDEVDMA[0]USBHSDEVDMASTATUS Device DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[0]_usbhs_devdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_DEVDMA[0]_USBHS_DEVDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[1]_usbhs_devdmanxtdsc USBHSDEVDMA[1]USBHSDEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[1]_usbhs_devdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[1]_usbhs_devdmaaddress USBHSDEVDMA[1]USBHSDEVDMAADDRESS Device DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[1]_usbhs_devdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[1]_usbhs_devdmacontrol USBHSDEVDMA[1]USBHSDEVDMACONTROL Device DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[1]_usbhs_devdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[1]_usbhs_devdmastatus USBHSDEVDMA[1]USBHSDEVDMASTATUS Device DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[1]_usbhs_devdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_DEVDMA[1]_USBHS_DEVDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[2]_usbhs_devdmanxtdsc USBHSDEVDMA[2]USBHSDEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[2]_usbhs_devdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[2]_usbhs_devdmaaddress USBHSDEVDMA[2]USBHSDEVDMAADDRESS Device DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[2]_usbhs_devdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[2]_usbhs_devdmacontrol USBHSDEVDMA[2]USBHSDEVDMACONTROL Device DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[2]_usbhs_devdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[2]_usbhs_devdmastatus USBHSDEVDMA[2]USBHSDEVDMASTATUS Device DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[2]_usbhs_devdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_DEVDMA[2]_USBHS_DEVDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[3]_usbhs_devdmanxtdsc USBHSDEVDMA[3]USBHSDEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[3]_usbhs_devdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[3]_usbhs_devdmaaddress USBHSDEVDMA[3]USBHSDEVDMAADDRESS Device DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[3]_usbhs_devdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[3]_usbhs_devdmacontrol USBHSDEVDMA[3]USBHSDEVDMACONTROL Device DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[3]_usbhs_devdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[3]_usbhs_devdmastatus USBHSDEVDMA[3]USBHSDEVDMASTATUS Device DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[3]_usbhs_devdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_DEVDMA[3]_USBHS_DEVDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[4]_usbhs_devdmanxtdsc USBHSDEVDMA[4]USBHSDEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[4]_usbhs_devdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[4]_usbhs_devdmaaddress USBHSDEVDMA[4]USBHSDEVDMAADDRESS Device DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[4]_usbhs_devdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[4]_usbhs_devdmacontrol USBHSDEVDMA[4]USBHSDEVDMACONTROL Device DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[4]_usbhs_devdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[4]_usbhs_devdmastatus USBHSDEVDMA[4]USBHSDEVDMASTATUS Device DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[4]_usbhs_devdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_DEVDMA[4]_USBHS_DEVDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[5]_usbhs_devdmanxtdsc USBHSDEVDMA[5]USBHSDEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[5]_usbhs_devdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[5]_usbhs_devdmaaddress USBHSDEVDMA[5]USBHSDEVDMAADDRESS Device DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[5]_usbhs_devdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[5]_usbhs_devdmacontrol USBHSDEVDMA[5]USBHSDEVDMACONTROL Device DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[5]_usbhs_devdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[5]_usbhs_devdmastatus USBHSDEVDMA[5]USBHSDEVDMASTATUS Device DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[5]_usbhs_devdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_DEVDMA[5]_USBHS_DEVDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[6]_usbhs_devdmanxtdsc USBHSDEVDMA[6]USBHSDEVDMANXTDSC Device DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[6]_usbhs_devdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[6]_usbhs_devdmaaddress USBHSDEVDMA[6]USBHSDEVDMAADDRESS Device DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_devdma[6]_usbhs_devdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_devdma[6]_usbhs_devdmacontrol USBHSDEVDMA[6]USBHSDEVDMACONTROL Device DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[6]_usbhs_devdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_devdma[6]_usbhs_devdmastatus USBHSDEVDMA[6]USBHSDEVDMASTATUS Device DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_devdma[6]_usbhs_devdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_DEVDMA[6]_USBHS_DEVDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstctrl USBHSHSTCTRL Host General Control Register
@{*/


#define USBHS_USBHS_HSTCTRL_SPDCONF_SHIFT		12
#define USBHS_USBHS_HSTCTRL_SPDCONF_MASK		0x03
/** @defgroup usbhs_usbhs_hstctrl_spdconf SPDCONF Mode Configuration
@{*/
/**@}*/

/** USBHS_USBHS_HSTCTRL_RESUME Send USB Resume **/
#define USBHS_USBHS_HSTCTRL_RESUME		(1 << 10)
/** USBHS_USBHS_HSTCTRL_RESET Send USB Reset **/
#define USBHS_USBHS_HSTCTRL_RESET		(1 << 9)
/** USBHS_USBHS_HSTCTRL_SOFE Start of Frame Generation Enable **/
#define USBHS_USBHS_HSTCTRL_SOFE		(1 << 8)

/**@}*/

/** @defgroup usbhs_usbhs_hstisr USBHSHSTISR Host Global Interrupt Status Register
@{*/

/** USBHS_USBHS_HSTISR_DMA_7 DMA Channel 7 Interrupt **/
#define USBHS_USBHS_HSTISR_DMA_7		(1 << 31)
/** USBHS_USBHS_HSTISR_DMA_6 DMA Channel 6 Interrupt **/
#define USBHS_USBHS_HSTISR_DMA_6		(1 << 30)
/** USBHS_USBHS_HSTISR_DMA_5 DMA Channel 5 Interrupt **/
#define USBHS_USBHS_HSTISR_DMA_5		(1 << 29)
/** USBHS_USBHS_HSTISR_DMA_4 DMA Channel 4 Interrupt **/
#define USBHS_USBHS_HSTISR_DMA_4		(1 << 28)
/** USBHS_USBHS_HSTISR_DMA_3 DMA Channel 3 Interrupt **/
#define USBHS_USBHS_HSTISR_DMA_3		(1 << 27)
/** USBHS_USBHS_HSTISR_DMA_2 DMA Channel 2 Interrupt **/
#define USBHS_USBHS_HSTISR_DMA_2		(1 << 26)
/** USBHS_USBHS_HSTISR_DMA_1 DMA Channel 1 Interrupt **/
#define USBHS_USBHS_HSTISR_DMA_1		(1 << 25)
/** USBHS_USBHS_HSTISR_PEP_9 Pipe 9 Interrupt **/
#define USBHS_USBHS_HSTISR_PEP_9		(1 << 17)
/** USBHS_USBHS_HSTISR_PEP_8 Pipe 8 Interrupt **/
#define USBHS_USBHS_HSTISR_PEP_8		(1 << 16)
/** USBHS_USBHS_HSTISR_PEP_7 Pipe 7 Interrupt **/
#define USBHS_USBHS_HSTISR_PEP_7		(1 << 15)
/** USBHS_USBHS_HSTISR_PEP_6 Pipe 6 Interrupt **/
#define USBHS_USBHS_HSTISR_PEP_6		(1 << 14)
/** USBHS_USBHS_HSTISR_PEP_5 Pipe 5 Interrupt **/
#define USBHS_USBHS_HSTISR_PEP_5		(1 << 13)
/** USBHS_USBHS_HSTISR_PEP_4 Pipe 4 Interrupt **/
#define USBHS_USBHS_HSTISR_PEP_4		(1 << 12)
/** USBHS_USBHS_HSTISR_PEP_3 Pipe 3 Interrupt **/
#define USBHS_USBHS_HSTISR_PEP_3		(1 << 11)
/** USBHS_USBHS_HSTISR_PEP_2 Pipe 2 Interrupt **/
#define USBHS_USBHS_HSTISR_PEP_2		(1 << 10)
/** USBHS_USBHS_HSTISR_PEP_1 Pipe 1 Interrupt **/
#define USBHS_USBHS_HSTISR_PEP_1		(1 << 9)
/** USBHS_USBHS_HSTISR_PEP_0 Pipe 0 Interrupt **/
#define USBHS_USBHS_HSTISR_PEP_0		(1 << 8)
/** USBHS_USBHS_HSTISR_HWUPI Host Wake-Up Interrupt **/
#define USBHS_USBHS_HSTISR_HWUPI		(1 << 6)
/** USBHS_USBHS_HSTISR_HSOFI Host Start of Frame Interrupt **/
#define USBHS_USBHS_HSTISR_HSOFI		(1 << 5)
/** USBHS_USBHS_HSTISR_RXRSMI Upstream Resume Received Interrupt **/
#define USBHS_USBHS_HSTISR_RXRSMI		(1 << 4)
/** USBHS_USBHS_HSTISR_RSMEDI Downstream Resume Sent Interrupt **/
#define USBHS_USBHS_HSTISR_RSMEDI		(1 << 3)
/** USBHS_USBHS_HSTISR_RSTI USB Reset Sent Interrupt **/
#define USBHS_USBHS_HSTISR_RSTI		(1 << 2)
/** USBHS_USBHS_HSTISR_DDISCI Device Disconnection Interrupt **/
#define USBHS_USBHS_HSTISR_DDISCI		(1 << 1)
/** USBHS_USBHS_HSTISR_DCONNI Device Connection Interrupt **/
#define USBHS_USBHS_HSTISR_DCONNI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hsticr USBHSHSTICR Host Global Interrupt Clear Register
@{*/

/** USBHS_USBHS_HSTICR_HWUPIC Host Wake-Up Interrupt Clear **/
#define USBHS_USBHS_HSTICR_HWUPIC		(1 << 6)
/** USBHS_USBHS_HSTICR_HSOFIC Host Start of Frame Interrupt Clear **/
#define USBHS_USBHS_HSTICR_HSOFIC		(1 << 5)
/** USBHS_USBHS_HSTICR_RXRSMIC Upstream Resume Received Interrupt Clear **/
#define USBHS_USBHS_HSTICR_RXRSMIC		(1 << 4)
/** USBHS_USBHS_HSTICR_RSMEDIC Downstream Resume Sent Interrupt Clear **/
#define USBHS_USBHS_HSTICR_RSMEDIC		(1 << 3)
/** USBHS_USBHS_HSTICR_RSTIC USB Reset Sent Interrupt Clear **/
#define USBHS_USBHS_HSTICR_RSTIC		(1 << 2)
/** USBHS_USBHS_HSTICR_DDISCIC Device Disconnection Interrupt Clear **/
#define USBHS_USBHS_HSTICR_DDISCIC		(1 << 1)
/** USBHS_USBHS_HSTICR_DCONNIC Device Connection Interrupt Clear **/
#define USBHS_USBHS_HSTICR_DCONNIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstifr USBHSHSTIFR Host Global Interrupt Set Register
@{*/

/** USBHS_USBHS_HSTIFR_DMA_7 DMA Channel 7 Interrupt Set **/
#define USBHS_USBHS_HSTIFR_DMA_7		(1 << 31)
/** USBHS_USBHS_HSTIFR_DMA_6 DMA Channel 6 Interrupt Set **/
#define USBHS_USBHS_HSTIFR_DMA_6		(1 << 30)
/** USBHS_USBHS_HSTIFR_DMA_5 DMA Channel 5 Interrupt Set **/
#define USBHS_USBHS_HSTIFR_DMA_5		(1 << 29)
/** USBHS_USBHS_HSTIFR_DMA_4 DMA Channel 4 Interrupt Set **/
#define USBHS_USBHS_HSTIFR_DMA_4		(1 << 28)
/** USBHS_USBHS_HSTIFR_DMA_3 DMA Channel 3 Interrupt Set **/
#define USBHS_USBHS_HSTIFR_DMA_3		(1 << 27)
/** USBHS_USBHS_HSTIFR_DMA_2 DMA Channel 2 Interrupt Set **/
#define USBHS_USBHS_HSTIFR_DMA_2		(1 << 26)
/** USBHS_USBHS_HSTIFR_DMA_1 DMA Channel 1 Interrupt Set **/
#define USBHS_USBHS_HSTIFR_DMA_1		(1 << 25)
/** USBHS_USBHS_HSTIFR_HWUPIS Host Wake-Up Interrupt Set **/
#define USBHS_USBHS_HSTIFR_HWUPIS		(1 << 6)
/** USBHS_USBHS_HSTIFR_HSOFIS Host Start of Frame Interrupt Set **/
#define USBHS_USBHS_HSTIFR_HSOFIS		(1 << 5)
/** USBHS_USBHS_HSTIFR_RXRSMIS Upstream Resume Received Interrupt Set **/
#define USBHS_USBHS_HSTIFR_RXRSMIS		(1 << 4)
/** USBHS_USBHS_HSTIFR_RSMEDIS Downstream Resume Sent Interrupt Set **/
#define USBHS_USBHS_HSTIFR_RSMEDIS		(1 << 3)
/** USBHS_USBHS_HSTIFR_RSTIS USB Reset Sent Interrupt Set **/
#define USBHS_USBHS_HSTIFR_RSTIS		(1 << 2)
/** USBHS_USBHS_HSTIFR_DDISCIS Device Disconnection Interrupt Set **/
#define USBHS_USBHS_HSTIFR_DDISCIS		(1 << 1)
/** USBHS_USBHS_HSTIFR_DCONNIS Device Connection Interrupt Set **/
#define USBHS_USBHS_HSTIFR_DCONNIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstimr USBHSHSTIMR Host Global Interrupt Mask Register
@{*/

/** USBHS_USBHS_HSTIMR_DMA_7 DMA Channel 7 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_DMA_7		(1 << 31)
/** USBHS_USBHS_HSTIMR_DMA_6 DMA Channel 6 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_DMA_6		(1 << 30)
/** USBHS_USBHS_HSTIMR_DMA_5 DMA Channel 5 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_DMA_5		(1 << 29)
/** USBHS_USBHS_HSTIMR_DMA_4 DMA Channel 4 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_DMA_4		(1 << 28)
/** USBHS_USBHS_HSTIMR_DMA_3 DMA Channel 3 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_DMA_3		(1 << 27)
/** USBHS_USBHS_HSTIMR_DMA_2 DMA Channel 2 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_DMA_2		(1 << 26)
/** USBHS_USBHS_HSTIMR_DMA_1 DMA Channel 1 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_DMA_1		(1 << 25)
/** USBHS_USBHS_HSTIMR_PEP_9 Pipe 9 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_PEP_9		(1 << 17)
/** USBHS_USBHS_HSTIMR_PEP_8 Pipe 8 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_PEP_8		(1 << 16)
/** USBHS_USBHS_HSTIMR_PEP_7 Pipe 7 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_PEP_7		(1 << 15)
/** USBHS_USBHS_HSTIMR_PEP_6 Pipe 6 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_PEP_6		(1 << 14)
/** USBHS_USBHS_HSTIMR_PEP_5 Pipe 5 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_PEP_5		(1 << 13)
/** USBHS_USBHS_HSTIMR_PEP_4 Pipe 4 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_PEP_4		(1 << 12)
/** USBHS_USBHS_HSTIMR_PEP_3 Pipe 3 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_PEP_3		(1 << 11)
/** USBHS_USBHS_HSTIMR_PEP_2 Pipe 2 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_PEP_2		(1 << 10)
/** USBHS_USBHS_HSTIMR_PEP_1 Pipe 1 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_PEP_1		(1 << 9)
/** USBHS_USBHS_HSTIMR_PEP_0 Pipe 0 Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_PEP_0		(1 << 8)
/** USBHS_USBHS_HSTIMR_HWUPIE Host Wake-Up Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_HWUPIE		(1 << 6)
/** USBHS_USBHS_HSTIMR_HSOFIE Host Start of Frame Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_HSOFIE		(1 << 5)
/** USBHS_USBHS_HSTIMR_RXRSMIE Upstream Resume Received Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_RXRSMIE		(1 << 4)
/** USBHS_USBHS_HSTIMR_RSMEDIE Downstream Resume Sent Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_RSMEDIE		(1 << 3)
/** USBHS_USBHS_HSTIMR_RSTIE USB Reset Sent Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_RSTIE		(1 << 2)
/** USBHS_USBHS_HSTIMR_DDISCIE Device Disconnection Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_DDISCIE		(1 << 1)
/** USBHS_USBHS_HSTIMR_DCONNIE Device Connection Interrupt Enable **/
#define USBHS_USBHS_HSTIMR_DCONNIE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstidr USBHSHSTIDR Host Global Interrupt Disable Register
@{*/

/** USBHS_USBHS_HSTIDR_DMA_7 DMA Channel 7 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_DMA_7		(1 << 31)
/** USBHS_USBHS_HSTIDR_DMA_6 DMA Channel 6 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_DMA_6		(1 << 30)
/** USBHS_USBHS_HSTIDR_DMA_5 DMA Channel 5 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_DMA_5		(1 << 29)
/** USBHS_USBHS_HSTIDR_DMA_4 DMA Channel 4 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_DMA_4		(1 << 28)
/** USBHS_USBHS_HSTIDR_DMA_3 DMA Channel 3 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_DMA_3		(1 << 27)
/** USBHS_USBHS_HSTIDR_DMA_2 DMA Channel 2 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_DMA_2		(1 << 26)
/** USBHS_USBHS_HSTIDR_DMA_1 DMA Channel 1 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_DMA_1		(1 << 25)
/** USBHS_USBHS_HSTIDR_PEP_9 Pipe 9 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_PEP_9		(1 << 17)
/** USBHS_USBHS_HSTIDR_PEP_8 Pipe 8 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_PEP_8		(1 << 16)
/** USBHS_USBHS_HSTIDR_PEP_7 Pipe 7 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_PEP_7		(1 << 15)
/** USBHS_USBHS_HSTIDR_PEP_6 Pipe 6 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_PEP_6		(1 << 14)
/** USBHS_USBHS_HSTIDR_PEP_5 Pipe 5 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_PEP_5		(1 << 13)
/** USBHS_USBHS_HSTIDR_PEP_4 Pipe 4 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_PEP_4		(1 << 12)
/** USBHS_USBHS_HSTIDR_PEP_3 Pipe 3 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_PEP_3		(1 << 11)
/** USBHS_USBHS_HSTIDR_PEP_2 Pipe 2 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_PEP_2		(1 << 10)
/** USBHS_USBHS_HSTIDR_PEP_1 Pipe 1 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_PEP_1		(1 << 9)
/** USBHS_USBHS_HSTIDR_PEP_0 Pipe 0 Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_PEP_0		(1 << 8)
/** USBHS_USBHS_HSTIDR_HWUPIEC Host Wake-Up Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_HWUPIEC		(1 << 6)
/** USBHS_USBHS_HSTIDR_HSOFIEC Host Start of Frame Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_HSOFIEC		(1 << 5)
/** USBHS_USBHS_HSTIDR_RXRSMIEC Upstream Resume Received Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_RXRSMIEC		(1 << 4)
/** USBHS_USBHS_HSTIDR_RSMEDIEC Downstream Resume Sent Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_RSMEDIEC		(1 << 3)
/** USBHS_USBHS_HSTIDR_RSTIEC USB Reset Sent Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_RSTIEC		(1 << 2)
/** USBHS_USBHS_HSTIDR_DDISCIEC Device Disconnection Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_DDISCIEC		(1 << 1)
/** USBHS_USBHS_HSTIDR_DCONNIEC Device Connection Interrupt Disable **/
#define USBHS_USBHS_HSTIDR_DCONNIEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstier USBHSHSTIER Host Global Interrupt Enable Register
@{*/

/** USBHS_USBHS_HSTIER_DMA_7 DMA Channel 7 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_DMA_7		(1 << 31)
/** USBHS_USBHS_HSTIER_DMA_6 DMA Channel 6 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_DMA_6		(1 << 30)
/** USBHS_USBHS_HSTIER_DMA_5 DMA Channel 5 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_DMA_5		(1 << 29)
/** USBHS_USBHS_HSTIER_DMA_4 DMA Channel 4 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_DMA_4		(1 << 28)
/** USBHS_USBHS_HSTIER_DMA_3 DMA Channel 3 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_DMA_3		(1 << 27)
/** USBHS_USBHS_HSTIER_DMA_2 DMA Channel 2 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_DMA_2		(1 << 26)
/** USBHS_USBHS_HSTIER_DMA_1 DMA Channel 1 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_DMA_1		(1 << 25)
/** USBHS_USBHS_HSTIER_PEP_9 Pipe 9 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_PEP_9		(1 << 17)
/** USBHS_USBHS_HSTIER_PEP_8 Pipe 8 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_PEP_8		(1 << 16)
/** USBHS_USBHS_HSTIER_PEP_7 Pipe 7 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_PEP_7		(1 << 15)
/** USBHS_USBHS_HSTIER_PEP_6 Pipe 6 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_PEP_6		(1 << 14)
/** USBHS_USBHS_HSTIER_PEP_5 Pipe 5 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_PEP_5		(1 << 13)
/** USBHS_USBHS_HSTIER_PEP_4 Pipe 4 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_PEP_4		(1 << 12)
/** USBHS_USBHS_HSTIER_PEP_3 Pipe 3 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_PEP_3		(1 << 11)
/** USBHS_USBHS_HSTIER_PEP_2 Pipe 2 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_PEP_2		(1 << 10)
/** USBHS_USBHS_HSTIER_PEP_1 Pipe 1 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_PEP_1		(1 << 9)
/** USBHS_USBHS_HSTIER_PEP_0 Pipe 0 Interrupt Enable **/
#define USBHS_USBHS_HSTIER_PEP_0		(1 << 8)
/** USBHS_USBHS_HSTIER_HWUPIES Host Wake-Up Interrupt Enable **/
#define USBHS_USBHS_HSTIER_HWUPIES		(1 << 6)
/** USBHS_USBHS_HSTIER_HSOFIES Host Start of Frame Interrupt Enable **/
#define USBHS_USBHS_HSTIER_HSOFIES		(1 << 5)
/** USBHS_USBHS_HSTIER_RXRSMIES Upstream Resume Received Interrupt Enable **/
#define USBHS_USBHS_HSTIER_RXRSMIES		(1 << 4)
/** USBHS_USBHS_HSTIER_RSMEDIES Downstream Resume Sent Interrupt Enable **/
#define USBHS_USBHS_HSTIER_RSMEDIES		(1 << 3)
/** USBHS_USBHS_HSTIER_RSTIES USB Reset Sent Interrupt Enable **/
#define USBHS_USBHS_HSTIER_RSTIES		(1 << 2)
/** USBHS_USBHS_HSTIER_DDISCIES Device Disconnection Interrupt Enable **/
#define USBHS_USBHS_HSTIER_DDISCIES		(1 << 1)
/** USBHS_USBHS_HSTIER_DCONNIES Device Connection Interrupt Enable **/
#define USBHS_USBHS_HSTIER_DCONNIES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpip USBHSHSTPIP Host Pipe Register
@{*/

/** USBHS_USBHS_HSTPIP_PRST8 Pipe 8 Reset **/
#define USBHS_USBHS_HSTPIP_PRST8		(1 << 24)
/** USBHS_USBHS_HSTPIP_PRST7 Pipe 7 Reset **/
#define USBHS_USBHS_HSTPIP_PRST7		(1 << 23)
/** USBHS_USBHS_HSTPIP_PRST6 Pipe 6 Reset **/
#define USBHS_USBHS_HSTPIP_PRST6		(1 << 22)
/** USBHS_USBHS_HSTPIP_PRST5 Pipe 5 Reset **/
#define USBHS_USBHS_HSTPIP_PRST5		(1 << 21)
/** USBHS_USBHS_HSTPIP_PRST4 Pipe 4 Reset **/
#define USBHS_USBHS_HSTPIP_PRST4		(1 << 20)
/** USBHS_USBHS_HSTPIP_PRST3 Pipe 3 Reset **/
#define USBHS_USBHS_HSTPIP_PRST3		(1 << 19)
/** USBHS_USBHS_HSTPIP_PRST2 Pipe 2 Reset **/
#define USBHS_USBHS_HSTPIP_PRST2		(1 << 18)
/** USBHS_USBHS_HSTPIP_PRST1 Pipe 1 Reset **/
#define USBHS_USBHS_HSTPIP_PRST1		(1 << 17)
/** USBHS_USBHS_HSTPIP_PRST0 Pipe 0 Reset **/
#define USBHS_USBHS_HSTPIP_PRST0		(1 << 16)
/** USBHS_USBHS_HSTPIP_PEN8 Pipe 8 Enable **/
#define USBHS_USBHS_HSTPIP_PEN8		(1 << 8)
/** USBHS_USBHS_HSTPIP_PEN7 Pipe 7 Enable **/
#define USBHS_USBHS_HSTPIP_PEN7		(1 << 7)
/** USBHS_USBHS_HSTPIP_PEN6 Pipe 6 Enable **/
#define USBHS_USBHS_HSTPIP_PEN6		(1 << 6)
/** USBHS_USBHS_HSTPIP_PEN5 Pipe 5 Enable **/
#define USBHS_USBHS_HSTPIP_PEN5		(1 << 5)
/** USBHS_USBHS_HSTPIP_PEN4 Pipe 4 Enable **/
#define USBHS_USBHS_HSTPIP_PEN4		(1 << 4)
/** USBHS_USBHS_HSTPIP_PEN3 Pipe 3 Enable **/
#define USBHS_USBHS_HSTPIP_PEN3		(1 << 3)
/** USBHS_USBHS_HSTPIP_PEN2 Pipe 2 Enable **/
#define USBHS_USBHS_HSTPIP_PEN2		(1 << 2)
/** USBHS_USBHS_HSTPIP_PEN1 Pipe 1 Enable **/
#define USBHS_USBHS_HSTPIP_PEN1		(1 << 1)
/** USBHS_USBHS_HSTPIP_PEN0 Pipe 0 Enable **/
#define USBHS_USBHS_HSTPIP_PEN0		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstfnum USBHSHSTFNUM Host Frame Number Register
@{*/


#define USBHS_USBHS_HSTFNUM_FLENHIGH_SHIFT		16
#define USBHS_USBHS_HSTFNUM_FLENHIGH_MASK		0xff
/** @defgroup usbhs_usbhs_hstfnum_flenhigh FLENHIGH Frame Length
@{*/
/**@}*/


#define USBHS_USBHS_HSTFNUM_FNUM_SHIFT		3
#define USBHS_USBHS_HSTFNUM_FNUM_MASK		0x7ff
/** @defgroup usbhs_usbhs_hstfnum_fnum FNUM Frame Number
@{*/
/**@}*/


#define USBHS_USBHS_HSTFNUM_MFNUM_SHIFT		0
#define USBHS_USBHS_HSTFNUM_MFNUM_MASK		0x07
/** @defgroup usbhs_usbhs_hstfnum_mfnum MFNUM Micro Frame Number
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstaddr1 USBHSHSTADDR1 Host Address 1 Register
@{*/


#define USBHS_USBHS_HSTADDR1_HSTADDRP3_SHIFT		24
#define USBHS_USBHS_HSTADDR1_HSTADDRP3_MASK		0x7f
/** @defgroup usbhs_usbhs_hstaddr1_hstaddrp3 HSTADDRP3 USB Host Address
@{*/
/**@}*/


#define USBHS_USBHS_HSTADDR1_HSTADDRP2_SHIFT		16
#define USBHS_USBHS_HSTADDR1_HSTADDRP2_MASK		0x7f
/** @defgroup usbhs_usbhs_hstaddr1_hstaddrp2 HSTADDRP2 USB Host Address
@{*/
/**@}*/


#define USBHS_USBHS_HSTADDR1_HSTADDRP1_SHIFT		8
#define USBHS_USBHS_HSTADDR1_HSTADDRP1_MASK		0x7f
/** @defgroup usbhs_usbhs_hstaddr1_hstaddrp1 HSTADDRP1 USB Host Address
@{*/
/**@}*/


#define USBHS_USBHS_HSTADDR1_HSTADDRP0_SHIFT		0
#define USBHS_USBHS_HSTADDR1_HSTADDRP0_MASK		0x7f
/** @defgroup usbhs_usbhs_hstaddr1_hstaddrp0 HSTADDRP0 USB Host Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstaddr2 USBHSHSTADDR2 Host Address 2 Register
@{*/


#define USBHS_USBHS_HSTADDR2_HSTADDRP7_SHIFT		24
#define USBHS_USBHS_HSTADDR2_HSTADDRP7_MASK		0x7f
/** @defgroup usbhs_usbhs_hstaddr2_hstaddrp7 HSTADDRP7 USB Host Address
@{*/
/**@}*/


#define USBHS_USBHS_HSTADDR2_HSTADDRP6_SHIFT		16
#define USBHS_USBHS_HSTADDR2_HSTADDRP6_MASK		0x7f
/** @defgroup usbhs_usbhs_hstaddr2_hstaddrp6 HSTADDRP6 USB Host Address
@{*/
/**@}*/


#define USBHS_USBHS_HSTADDR2_HSTADDRP5_SHIFT		8
#define USBHS_USBHS_HSTADDR2_HSTADDRP5_MASK		0x7f
/** @defgroup usbhs_usbhs_hstaddr2_hstaddrp5 HSTADDRP5 USB Host Address
@{*/
/**@}*/


#define USBHS_USBHS_HSTADDR2_HSTADDRP4_SHIFT		0
#define USBHS_USBHS_HSTADDR2_HSTADDRP4_MASK		0x7f
/** @defgroup usbhs_usbhs_hstaddr2_hstaddrp4 HSTADDRP4 USB Host Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstaddr3 USBHSHSTADDR3 Host Address 3 Register
@{*/


#define USBHS_USBHS_HSTADDR3_HSTADDRP9_SHIFT		8
#define USBHS_USBHS_HSTADDR3_HSTADDRP9_MASK		0x7f
/** @defgroup usbhs_usbhs_hstaddr3_hstaddrp9 HSTADDRP9 USB Host Address
@{*/
/**@}*/


#define USBHS_USBHS_HSTADDR3_HSTADDRP8_SHIFT		0
#define USBHS_USBHS_HSTADDR3_HSTADDRP8_MASK		0x7f
/** @defgroup usbhs_usbhs_hstaddr3_hstaddrp8 HSTADDRP8 USB Host Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstpipcfg[0] USBHSHSTPIPCFG[0] Host Pipe Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPCFG[0]_INTFRQ_SHIFT		24
#define USBHS_USBHS_HSTPIPCFG[0]_INTFRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipcfg[0]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[0]_PEPNUM_SHIFT		16
#define USBHS_USBHS_HSTPIPCFG[0]_PEPNUM_MASK		0x0f
/** @defgroup usbhs_usbhs_hstpipcfg[0]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[0]_PTYPE_SHIFT		12
#define USBHS_USBHS_HSTPIPCFG[0]_PTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[0]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[0]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_HSTPIPCFG[0]_AUTOSW		(1 << 10)

#define USBHS_USBHS_HSTPIPCFG[0]_PTOKEN_SHIFT		8
#define USBHS_USBHS_HSTPIPCFG[0]_PTOKEN_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[0]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[0]_PSIZE_SHIFT		4
#define USBHS_USBHS_HSTPIPCFG[0]_PSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_hstpipcfg[0]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[0]_PBK_SHIFT		2
#define USBHS_USBHS_HSTPIPCFG[0]_PBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[0]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[0]_ALLOC Pipe Memory Allocate **/
#define USBHS_USBHS_HSTPIPCFG[0]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipcfg[1] USBHSHSTPIPCFG[1] Host Pipe Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPCFG[1]_INTFRQ_SHIFT		24
#define USBHS_USBHS_HSTPIPCFG[1]_INTFRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipcfg[1]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[1]_PEPNUM_SHIFT		16
#define USBHS_USBHS_HSTPIPCFG[1]_PEPNUM_MASK		0x0f
/** @defgroup usbhs_usbhs_hstpipcfg[1]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[1]_PTYPE_SHIFT		12
#define USBHS_USBHS_HSTPIPCFG[1]_PTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[1]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[1]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_HSTPIPCFG[1]_AUTOSW		(1 << 10)

#define USBHS_USBHS_HSTPIPCFG[1]_PTOKEN_SHIFT		8
#define USBHS_USBHS_HSTPIPCFG[1]_PTOKEN_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[1]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[1]_PSIZE_SHIFT		4
#define USBHS_USBHS_HSTPIPCFG[1]_PSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_hstpipcfg[1]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[1]_PBK_SHIFT		2
#define USBHS_USBHS_HSTPIPCFG[1]_PBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[1]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[1]_ALLOC Pipe Memory Allocate **/
#define USBHS_USBHS_HSTPIPCFG[1]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipcfg[2] USBHSHSTPIPCFG[2] Host Pipe Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPCFG[2]_INTFRQ_SHIFT		24
#define USBHS_USBHS_HSTPIPCFG[2]_INTFRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipcfg[2]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[2]_PEPNUM_SHIFT		16
#define USBHS_USBHS_HSTPIPCFG[2]_PEPNUM_MASK		0x0f
/** @defgroup usbhs_usbhs_hstpipcfg[2]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[2]_PTYPE_SHIFT		12
#define USBHS_USBHS_HSTPIPCFG[2]_PTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[2]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[2]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_HSTPIPCFG[2]_AUTOSW		(1 << 10)

#define USBHS_USBHS_HSTPIPCFG[2]_PTOKEN_SHIFT		8
#define USBHS_USBHS_HSTPIPCFG[2]_PTOKEN_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[2]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[2]_PSIZE_SHIFT		4
#define USBHS_USBHS_HSTPIPCFG[2]_PSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_hstpipcfg[2]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[2]_PBK_SHIFT		2
#define USBHS_USBHS_HSTPIPCFG[2]_PBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[2]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[2]_ALLOC Pipe Memory Allocate **/
#define USBHS_USBHS_HSTPIPCFG[2]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipcfg[3] USBHSHSTPIPCFG[3] Host Pipe Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPCFG[3]_INTFRQ_SHIFT		24
#define USBHS_USBHS_HSTPIPCFG[3]_INTFRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipcfg[3]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[3]_PEPNUM_SHIFT		16
#define USBHS_USBHS_HSTPIPCFG[3]_PEPNUM_MASK		0x0f
/** @defgroup usbhs_usbhs_hstpipcfg[3]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[3]_PTYPE_SHIFT		12
#define USBHS_USBHS_HSTPIPCFG[3]_PTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[3]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[3]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_HSTPIPCFG[3]_AUTOSW		(1 << 10)

#define USBHS_USBHS_HSTPIPCFG[3]_PTOKEN_SHIFT		8
#define USBHS_USBHS_HSTPIPCFG[3]_PTOKEN_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[3]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[3]_PSIZE_SHIFT		4
#define USBHS_USBHS_HSTPIPCFG[3]_PSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_hstpipcfg[3]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[3]_PBK_SHIFT		2
#define USBHS_USBHS_HSTPIPCFG[3]_PBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[3]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[3]_ALLOC Pipe Memory Allocate **/
#define USBHS_USBHS_HSTPIPCFG[3]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipcfg[4] USBHSHSTPIPCFG[4] Host Pipe Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPCFG[4]_INTFRQ_SHIFT		24
#define USBHS_USBHS_HSTPIPCFG[4]_INTFRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipcfg[4]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[4]_PEPNUM_SHIFT		16
#define USBHS_USBHS_HSTPIPCFG[4]_PEPNUM_MASK		0x0f
/** @defgroup usbhs_usbhs_hstpipcfg[4]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[4]_PTYPE_SHIFT		12
#define USBHS_USBHS_HSTPIPCFG[4]_PTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[4]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[4]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_HSTPIPCFG[4]_AUTOSW		(1 << 10)

#define USBHS_USBHS_HSTPIPCFG[4]_PTOKEN_SHIFT		8
#define USBHS_USBHS_HSTPIPCFG[4]_PTOKEN_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[4]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[4]_PSIZE_SHIFT		4
#define USBHS_USBHS_HSTPIPCFG[4]_PSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_hstpipcfg[4]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[4]_PBK_SHIFT		2
#define USBHS_USBHS_HSTPIPCFG[4]_PBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[4]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[4]_ALLOC Pipe Memory Allocate **/
#define USBHS_USBHS_HSTPIPCFG[4]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipcfg[5] USBHSHSTPIPCFG[5] Host Pipe Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPCFG[5]_INTFRQ_SHIFT		24
#define USBHS_USBHS_HSTPIPCFG[5]_INTFRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipcfg[5]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[5]_PEPNUM_SHIFT		16
#define USBHS_USBHS_HSTPIPCFG[5]_PEPNUM_MASK		0x0f
/** @defgroup usbhs_usbhs_hstpipcfg[5]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[5]_PTYPE_SHIFT		12
#define USBHS_USBHS_HSTPIPCFG[5]_PTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[5]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[5]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_HSTPIPCFG[5]_AUTOSW		(1 << 10)

#define USBHS_USBHS_HSTPIPCFG[5]_PTOKEN_SHIFT		8
#define USBHS_USBHS_HSTPIPCFG[5]_PTOKEN_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[5]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[5]_PSIZE_SHIFT		4
#define USBHS_USBHS_HSTPIPCFG[5]_PSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_hstpipcfg[5]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[5]_PBK_SHIFT		2
#define USBHS_USBHS_HSTPIPCFG[5]_PBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[5]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[5]_ALLOC Pipe Memory Allocate **/
#define USBHS_USBHS_HSTPIPCFG[5]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipcfg[6] USBHSHSTPIPCFG[6] Host Pipe Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPCFG[6]_INTFRQ_SHIFT		24
#define USBHS_USBHS_HSTPIPCFG[6]_INTFRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipcfg[6]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[6]_PEPNUM_SHIFT		16
#define USBHS_USBHS_HSTPIPCFG[6]_PEPNUM_MASK		0x0f
/** @defgroup usbhs_usbhs_hstpipcfg[6]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[6]_PTYPE_SHIFT		12
#define USBHS_USBHS_HSTPIPCFG[6]_PTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[6]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[6]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_HSTPIPCFG[6]_AUTOSW		(1 << 10)

#define USBHS_USBHS_HSTPIPCFG[6]_PTOKEN_SHIFT		8
#define USBHS_USBHS_HSTPIPCFG[6]_PTOKEN_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[6]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[6]_PSIZE_SHIFT		4
#define USBHS_USBHS_HSTPIPCFG[6]_PSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_hstpipcfg[6]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[6]_PBK_SHIFT		2
#define USBHS_USBHS_HSTPIPCFG[6]_PBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[6]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[6]_ALLOC Pipe Memory Allocate **/
#define USBHS_USBHS_HSTPIPCFG[6]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipcfg[7] USBHSHSTPIPCFG[7] Host Pipe Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPCFG[7]_INTFRQ_SHIFT		24
#define USBHS_USBHS_HSTPIPCFG[7]_INTFRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipcfg[7]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[7]_PEPNUM_SHIFT		16
#define USBHS_USBHS_HSTPIPCFG[7]_PEPNUM_MASK		0x0f
/** @defgroup usbhs_usbhs_hstpipcfg[7]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[7]_PTYPE_SHIFT		12
#define USBHS_USBHS_HSTPIPCFG[7]_PTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[7]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[7]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_HSTPIPCFG[7]_AUTOSW		(1 << 10)

#define USBHS_USBHS_HSTPIPCFG[7]_PTOKEN_SHIFT		8
#define USBHS_USBHS_HSTPIPCFG[7]_PTOKEN_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[7]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[7]_PSIZE_SHIFT		4
#define USBHS_USBHS_HSTPIPCFG[7]_PSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_hstpipcfg[7]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[7]_PBK_SHIFT		2
#define USBHS_USBHS_HSTPIPCFG[7]_PBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[7]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[7]_ALLOC Pipe Memory Allocate **/
#define USBHS_USBHS_HSTPIPCFG[7]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipcfg[8] USBHSHSTPIPCFG[8] Host Pipe Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPCFG[8]_INTFRQ_SHIFT		24
#define USBHS_USBHS_HSTPIPCFG[8]_INTFRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipcfg[8]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[8]_PEPNUM_SHIFT		16
#define USBHS_USBHS_HSTPIPCFG[8]_PEPNUM_MASK		0x0f
/** @defgroup usbhs_usbhs_hstpipcfg[8]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[8]_PTYPE_SHIFT		12
#define USBHS_USBHS_HSTPIPCFG[8]_PTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[8]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[8]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_HSTPIPCFG[8]_AUTOSW		(1 << 10)

#define USBHS_USBHS_HSTPIPCFG[8]_PTOKEN_SHIFT		8
#define USBHS_USBHS_HSTPIPCFG[8]_PTOKEN_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[8]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[8]_PSIZE_SHIFT		4
#define USBHS_USBHS_HSTPIPCFG[8]_PSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_hstpipcfg[8]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[8]_PBK_SHIFT		2
#define USBHS_USBHS_HSTPIPCFG[8]_PBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[8]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[8]_ALLOC Pipe Memory Allocate **/
#define USBHS_USBHS_HSTPIPCFG[8]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipcfg[9] USBHSHSTPIPCFG[9] Host Pipe Configuration Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPCFG[9]_INTFRQ_SHIFT		24
#define USBHS_USBHS_HSTPIPCFG[9]_INTFRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipcfg[9]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[9]_PEPNUM_SHIFT		16
#define USBHS_USBHS_HSTPIPCFG[9]_PEPNUM_MASK		0x0f
/** @defgroup usbhs_usbhs_hstpipcfg[9]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[9]_PTYPE_SHIFT		12
#define USBHS_USBHS_HSTPIPCFG[9]_PTYPE_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[9]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[9]_AUTOSW Automatic Switch **/
#define USBHS_USBHS_HSTPIPCFG[9]_AUTOSW		(1 << 10)

#define USBHS_USBHS_HSTPIPCFG[9]_PTOKEN_SHIFT		8
#define USBHS_USBHS_HSTPIPCFG[9]_PTOKEN_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[9]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[9]_PSIZE_SHIFT		4
#define USBHS_USBHS_HSTPIPCFG[9]_PSIZE_MASK		0x07
/** @defgroup usbhs_usbhs_hstpipcfg[9]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPCFG[9]_PBK_SHIFT		2
#define USBHS_USBHS_HSTPIPCFG[9]_PBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipcfg[9]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPCFG[9]_ALLOC Pipe Memory Allocate **/
#define USBHS_USBHS_HSTPIPCFG[9]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipisr[0] USBHSHSTPIPISR[0] Host Pipe Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPISR[0]_PBYCT_SHIFT		20
#define USBHS_USBHS_HSTPIPISR[0]_PBYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_hstpipisr[0]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[0]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_HSTPIPISR[0]_CFGOK		(1 << 18)
/** USBHS_USBHS_HSTPIPISR[0]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_HSTPIPISR[0]_RWALL		(1 << 16)

#define USBHS_USBHS_HSTPIPISR[0]_CURRBK_SHIFT		14
#define USBHS_USBHS_HSTPIPISR[0]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[0]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[0]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_HSTPIPISR[0]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[0]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[0]_DTSEQ_SHIFT		8
#define USBHS_USBHS_HSTPIPISR[0]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[0]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[0]_SHORTPACKETI Short Packet Interrupt **/
#define USBHS_USBHS_HSTPIPISR[0]_SHORTPACKETI		(1 << 7)
/** USBHS_USBHS_HSTPIPISR[0]_RXSTALLDI Received STALLed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[0]_RXSTALLDI		(1 << 6)
/** USBHS_USBHS_HSTPIPISR[0]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_HSTPIPISR[0]_OVERFI		(1 << 5)
/** USBHS_USBHS_HSTPIPISR[0]_NAKEDI NAKed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[0]_NAKEDI		(1 << 4)
/** USBHS_USBHS_HSTPIPISR[0]_PERRI Pipe Error Interrupt **/
#define USBHS_USBHS_HSTPIPISR[0]_PERRI		(1 << 3)
/** USBHS_USBHS_HSTPIPISR[0]_TXSTPI Transmitted SETUP Interrupt **/
#define USBHS_USBHS_HSTPIPISR[0]_TXSTPI		(1 << 2)
/** USBHS_USBHS_HSTPIPISR[0]_TXOUTI Transmitted OUT Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[0]_TXOUTI		(1 << 1)
/** USBHS_USBHS_HSTPIPISR[0]_RXINI Received IN Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[0]_RXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipisr[1] USBHSHSTPIPISR[1] Host Pipe Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPISR[1]_PBYCT_SHIFT		20
#define USBHS_USBHS_HSTPIPISR[1]_PBYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_hstpipisr[1]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[1]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_HSTPIPISR[1]_CFGOK		(1 << 18)
/** USBHS_USBHS_HSTPIPISR[1]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_HSTPIPISR[1]_RWALL		(1 << 16)

#define USBHS_USBHS_HSTPIPISR[1]_CURRBK_SHIFT		14
#define USBHS_USBHS_HSTPIPISR[1]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[1]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[1]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_HSTPIPISR[1]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[1]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[1]_DTSEQ_SHIFT		8
#define USBHS_USBHS_HSTPIPISR[1]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[1]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[1]_SHORTPACKETI Short Packet Interrupt **/
#define USBHS_USBHS_HSTPIPISR[1]_SHORTPACKETI		(1 << 7)
/** USBHS_USBHS_HSTPIPISR[1]_RXSTALLDI Received STALLed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[1]_RXSTALLDI		(1 << 6)
/** USBHS_USBHS_HSTPIPISR[1]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_HSTPIPISR[1]_OVERFI		(1 << 5)
/** USBHS_USBHS_HSTPIPISR[1]_NAKEDI NAKed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[1]_NAKEDI		(1 << 4)
/** USBHS_USBHS_HSTPIPISR[1]_PERRI Pipe Error Interrupt **/
#define USBHS_USBHS_HSTPIPISR[1]_PERRI		(1 << 3)
/** USBHS_USBHS_HSTPIPISR[1]_TXSTPI Transmitted SETUP Interrupt **/
#define USBHS_USBHS_HSTPIPISR[1]_TXSTPI		(1 << 2)
/** USBHS_USBHS_HSTPIPISR[1]_TXOUTI Transmitted OUT Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[1]_TXOUTI		(1 << 1)
/** USBHS_USBHS_HSTPIPISR[1]_RXINI Received IN Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[1]_RXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipisr[2] USBHSHSTPIPISR[2] Host Pipe Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPISR[2]_PBYCT_SHIFT		20
#define USBHS_USBHS_HSTPIPISR[2]_PBYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_hstpipisr[2]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[2]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_HSTPIPISR[2]_CFGOK		(1 << 18)
/** USBHS_USBHS_HSTPIPISR[2]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_HSTPIPISR[2]_RWALL		(1 << 16)

#define USBHS_USBHS_HSTPIPISR[2]_CURRBK_SHIFT		14
#define USBHS_USBHS_HSTPIPISR[2]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[2]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[2]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_HSTPIPISR[2]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[2]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[2]_DTSEQ_SHIFT		8
#define USBHS_USBHS_HSTPIPISR[2]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[2]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[2]_SHORTPACKETI Short Packet Interrupt **/
#define USBHS_USBHS_HSTPIPISR[2]_SHORTPACKETI		(1 << 7)
/** USBHS_USBHS_HSTPIPISR[2]_RXSTALLDI Received STALLed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[2]_RXSTALLDI		(1 << 6)
/** USBHS_USBHS_HSTPIPISR[2]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_HSTPIPISR[2]_OVERFI		(1 << 5)
/** USBHS_USBHS_HSTPIPISR[2]_NAKEDI NAKed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[2]_NAKEDI		(1 << 4)
/** USBHS_USBHS_HSTPIPISR[2]_PERRI Pipe Error Interrupt **/
#define USBHS_USBHS_HSTPIPISR[2]_PERRI		(1 << 3)
/** USBHS_USBHS_HSTPIPISR[2]_TXSTPI Transmitted SETUP Interrupt **/
#define USBHS_USBHS_HSTPIPISR[2]_TXSTPI		(1 << 2)
/** USBHS_USBHS_HSTPIPISR[2]_TXOUTI Transmitted OUT Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[2]_TXOUTI		(1 << 1)
/** USBHS_USBHS_HSTPIPISR[2]_RXINI Received IN Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[2]_RXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipisr[3] USBHSHSTPIPISR[3] Host Pipe Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPISR[3]_PBYCT_SHIFT		20
#define USBHS_USBHS_HSTPIPISR[3]_PBYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_hstpipisr[3]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[3]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_HSTPIPISR[3]_CFGOK		(1 << 18)
/** USBHS_USBHS_HSTPIPISR[3]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_HSTPIPISR[3]_RWALL		(1 << 16)

#define USBHS_USBHS_HSTPIPISR[3]_CURRBK_SHIFT		14
#define USBHS_USBHS_HSTPIPISR[3]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[3]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[3]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_HSTPIPISR[3]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[3]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[3]_DTSEQ_SHIFT		8
#define USBHS_USBHS_HSTPIPISR[3]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[3]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[3]_SHORTPACKETI Short Packet Interrupt **/
#define USBHS_USBHS_HSTPIPISR[3]_SHORTPACKETI		(1 << 7)
/** USBHS_USBHS_HSTPIPISR[3]_RXSTALLDI Received STALLed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[3]_RXSTALLDI		(1 << 6)
/** USBHS_USBHS_HSTPIPISR[3]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_HSTPIPISR[3]_OVERFI		(1 << 5)
/** USBHS_USBHS_HSTPIPISR[3]_NAKEDI NAKed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[3]_NAKEDI		(1 << 4)
/** USBHS_USBHS_HSTPIPISR[3]_PERRI Pipe Error Interrupt **/
#define USBHS_USBHS_HSTPIPISR[3]_PERRI		(1 << 3)
/** USBHS_USBHS_HSTPIPISR[3]_TXSTPI Transmitted SETUP Interrupt **/
#define USBHS_USBHS_HSTPIPISR[3]_TXSTPI		(1 << 2)
/** USBHS_USBHS_HSTPIPISR[3]_TXOUTI Transmitted OUT Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[3]_TXOUTI		(1 << 1)
/** USBHS_USBHS_HSTPIPISR[3]_RXINI Received IN Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[3]_RXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipisr[4] USBHSHSTPIPISR[4] Host Pipe Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPISR[4]_PBYCT_SHIFT		20
#define USBHS_USBHS_HSTPIPISR[4]_PBYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_hstpipisr[4]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[4]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_HSTPIPISR[4]_CFGOK		(1 << 18)
/** USBHS_USBHS_HSTPIPISR[4]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_HSTPIPISR[4]_RWALL		(1 << 16)

#define USBHS_USBHS_HSTPIPISR[4]_CURRBK_SHIFT		14
#define USBHS_USBHS_HSTPIPISR[4]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[4]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[4]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_HSTPIPISR[4]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[4]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[4]_DTSEQ_SHIFT		8
#define USBHS_USBHS_HSTPIPISR[4]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[4]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[4]_SHORTPACKETI Short Packet Interrupt **/
#define USBHS_USBHS_HSTPIPISR[4]_SHORTPACKETI		(1 << 7)
/** USBHS_USBHS_HSTPIPISR[4]_RXSTALLDI Received STALLed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[4]_RXSTALLDI		(1 << 6)
/** USBHS_USBHS_HSTPIPISR[4]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_HSTPIPISR[4]_OVERFI		(1 << 5)
/** USBHS_USBHS_HSTPIPISR[4]_NAKEDI NAKed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[4]_NAKEDI		(1 << 4)
/** USBHS_USBHS_HSTPIPISR[4]_PERRI Pipe Error Interrupt **/
#define USBHS_USBHS_HSTPIPISR[4]_PERRI		(1 << 3)
/** USBHS_USBHS_HSTPIPISR[4]_TXSTPI Transmitted SETUP Interrupt **/
#define USBHS_USBHS_HSTPIPISR[4]_TXSTPI		(1 << 2)
/** USBHS_USBHS_HSTPIPISR[4]_TXOUTI Transmitted OUT Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[4]_TXOUTI		(1 << 1)
/** USBHS_USBHS_HSTPIPISR[4]_RXINI Received IN Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[4]_RXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipisr[5] USBHSHSTPIPISR[5] Host Pipe Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPISR[5]_PBYCT_SHIFT		20
#define USBHS_USBHS_HSTPIPISR[5]_PBYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_hstpipisr[5]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[5]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_HSTPIPISR[5]_CFGOK		(1 << 18)
/** USBHS_USBHS_HSTPIPISR[5]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_HSTPIPISR[5]_RWALL		(1 << 16)

#define USBHS_USBHS_HSTPIPISR[5]_CURRBK_SHIFT		14
#define USBHS_USBHS_HSTPIPISR[5]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[5]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[5]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_HSTPIPISR[5]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[5]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[5]_DTSEQ_SHIFT		8
#define USBHS_USBHS_HSTPIPISR[5]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[5]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[5]_SHORTPACKETI Short Packet Interrupt **/
#define USBHS_USBHS_HSTPIPISR[5]_SHORTPACKETI		(1 << 7)
/** USBHS_USBHS_HSTPIPISR[5]_RXSTALLDI Received STALLed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[5]_RXSTALLDI		(1 << 6)
/** USBHS_USBHS_HSTPIPISR[5]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_HSTPIPISR[5]_OVERFI		(1 << 5)
/** USBHS_USBHS_HSTPIPISR[5]_NAKEDI NAKed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[5]_NAKEDI		(1 << 4)
/** USBHS_USBHS_HSTPIPISR[5]_PERRI Pipe Error Interrupt **/
#define USBHS_USBHS_HSTPIPISR[5]_PERRI		(1 << 3)
/** USBHS_USBHS_HSTPIPISR[5]_TXSTPI Transmitted SETUP Interrupt **/
#define USBHS_USBHS_HSTPIPISR[5]_TXSTPI		(1 << 2)
/** USBHS_USBHS_HSTPIPISR[5]_TXOUTI Transmitted OUT Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[5]_TXOUTI		(1 << 1)
/** USBHS_USBHS_HSTPIPISR[5]_RXINI Received IN Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[5]_RXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipisr[6] USBHSHSTPIPISR[6] Host Pipe Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPISR[6]_PBYCT_SHIFT		20
#define USBHS_USBHS_HSTPIPISR[6]_PBYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_hstpipisr[6]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[6]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_HSTPIPISR[6]_CFGOK		(1 << 18)
/** USBHS_USBHS_HSTPIPISR[6]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_HSTPIPISR[6]_RWALL		(1 << 16)

#define USBHS_USBHS_HSTPIPISR[6]_CURRBK_SHIFT		14
#define USBHS_USBHS_HSTPIPISR[6]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[6]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[6]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_HSTPIPISR[6]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[6]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[6]_DTSEQ_SHIFT		8
#define USBHS_USBHS_HSTPIPISR[6]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[6]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[6]_SHORTPACKETI Short Packet Interrupt **/
#define USBHS_USBHS_HSTPIPISR[6]_SHORTPACKETI		(1 << 7)
/** USBHS_USBHS_HSTPIPISR[6]_RXSTALLDI Received STALLed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[6]_RXSTALLDI		(1 << 6)
/** USBHS_USBHS_HSTPIPISR[6]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_HSTPIPISR[6]_OVERFI		(1 << 5)
/** USBHS_USBHS_HSTPIPISR[6]_NAKEDI NAKed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[6]_NAKEDI		(1 << 4)
/** USBHS_USBHS_HSTPIPISR[6]_PERRI Pipe Error Interrupt **/
#define USBHS_USBHS_HSTPIPISR[6]_PERRI		(1 << 3)
/** USBHS_USBHS_HSTPIPISR[6]_TXSTPI Transmitted SETUP Interrupt **/
#define USBHS_USBHS_HSTPIPISR[6]_TXSTPI		(1 << 2)
/** USBHS_USBHS_HSTPIPISR[6]_TXOUTI Transmitted OUT Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[6]_TXOUTI		(1 << 1)
/** USBHS_USBHS_HSTPIPISR[6]_RXINI Received IN Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[6]_RXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipisr[7] USBHSHSTPIPISR[7] Host Pipe Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPISR[7]_PBYCT_SHIFT		20
#define USBHS_USBHS_HSTPIPISR[7]_PBYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_hstpipisr[7]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[7]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_HSTPIPISR[7]_CFGOK		(1 << 18)
/** USBHS_USBHS_HSTPIPISR[7]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_HSTPIPISR[7]_RWALL		(1 << 16)

#define USBHS_USBHS_HSTPIPISR[7]_CURRBK_SHIFT		14
#define USBHS_USBHS_HSTPIPISR[7]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[7]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[7]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_HSTPIPISR[7]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[7]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[7]_DTSEQ_SHIFT		8
#define USBHS_USBHS_HSTPIPISR[7]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[7]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[7]_SHORTPACKETI Short Packet Interrupt **/
#define USBHS_USBHS_HSTPIPISR[7]_SHORTPACKETI		(1 << 7)
/** USBHS_USBHS_HSTPIPISR[7]_RXSTALLDI Received STALLed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[7]_RXSTALLDI		(1 << 6)
/** USBHS_USBHS_HSTPIPISR[7]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_HSTPIPISR[7]_OVERFI		(1 << 5)
/** USBHS_USBHS_HSTPIPISR[7]_NAKEDI NAKed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[7]_NAKEDI		(1 << 4)
/** USBHS_USBHS_HSTPIPISR[7]_PERRI Pipe Error Interrupt **/
#define USBHS_USBHS_HSTPIPISR[7]_PERRI		(1 << 3)
/** USBHS_USBHS_HSTPIPISR[7]_TXSTPI Transmitted SETUP Interrupt **/
#define USBHS_USBHS_HSTPIPISR[7]_TXSTPI		(1 << 2)
/** USBHS_USBHS_HSTPIPISR[7]_TXOUTI Transmitted OUT Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[7]_TXOUTI		(1 << 1)
/** USBHS_USBHS_HSTPIPISR[7]_RXINI Received IN Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[7]_RXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipisr[8] USBHSHSTPIPISR[8] Host Pipe Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPISR[8]_PBYCT_SHIFT		20
#define USBHS_USBHS_HSTPIPISR[8]_PBYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_hstpipisr[8]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[8]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_HSTPIPISR[8]_CFGOK		(1 << 18)
/** USBHS_USBHS_HSTPIPISR[8]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_HSTPIPISR[8]_RWALL		(1 << 16)

#define USBHS_USBHS_HSTPIPISR[8]_CURRBK_SHIFT		14
#define USBHS_USBHS_HSTPIPISR[8]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[8]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[8]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_HSTPIPISR[8]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[8]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[8]_DTSEQ_SHIFT		8
#define USBHS_USBHS_HSTPIPISR[8]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[8]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[8]_SHORTPACKETI Short Packet Interrupt **/
#define USBHS_USBHS_HSTPIPISR[8]_SHORTPACKETI		(1 << 7)
/** USBHS_USBHS_HSTPIPISR[8]_RXSTALLDI Received STALLed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[8]_RXSTALLDI		(1 << 6)
/** USBHS_USBHS_HSTPIPISR[8]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_HSTPIPISR[8]_OVERFI		(1 << 5)
/** USBHS_USBHS_HSTPIPISR[8]_NAKEDI NAKed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[8]_NAKEDI		(1 << 4)
/** USBHS_USBHS_HSTPIPISR[8]_PERRI Pipe Error Interrupt **/
#define USBHS_USBHS_HSTPIPISR[8]_PERRI		(1 << 3)
/** USBHS_USBHS_HSTPIPISR[8]_TXSTPI Transmitted SETUP Interrupt **/
#define USBHS_USBHS_HSTPIPISR[8]_TXSTPI		(1 << 2)
/** USBHS_USBHS_HSTPIPISR[8]_TXOUTI Transmitted OUT Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[8]_TXOUTI		(1 << 1)
/** USBHS_USBHS_HSTPIPISR[8]_RXINI Received IN Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[8]_RXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipisr[9] USBHSHSTPIPISR[9] Host Pipe Status Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPISR[9]_PBYCT_SHIFT		20
#define USBHS_USBHS_HSTPIPISR[9]_PBYCT_MASK		0x7ff
/** @defgroup usbhs_usbhs_hstpipisr[9]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[9]_CFGOK Configuration OK Status **/
#define USBHS_USBHS_HSTPIPISR[9]_CFGOK		(1 << 18)
/** USBHS_USBHS_HSTPIPISR[9]_RWALL Read/Write Allowed **/
#define USBHS_USBHS_HSTPIPISR[9]_RWALL		(1 << 16)

#define USBHS_USBHS_HSTPIPISR[9]_CURRBK_SHIFT		14
#define USBHS_USBHS_HSTPIPISR[9]_CURRBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[9]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[9]_NBUSYBK_SHIFT		12
#define USBHS_USBHS_HSTPIPISR[9]_NBUSYBK_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[9]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define USBHS_USBHS_HSTPIPISR[9]_DTSEQ_SHIFT		8
#define USBHS_USBHS_HSTPIPISR[9]_DTSEQ_MASK		0x03
/** @defgroup usbhs_usbhs_hstpipisr[9]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPISR[9]_SHORTPACKETI Short Packet Interrupt **/
#define USBHS_USBHS_HSTPIPISR[9]_SHORTPACKETI		(1 << 7)
/** USBHS_USBHS_HSTPIPISR[9]_RXSTALLDI Received STALLed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[9]_RXSTALLDI		(1 << 6)
/** USBHS_USBHS_HSTPIPISR[9]_OVERFI Overflow Interrupt **/
#define USBHS_USBHS_HSTPIPISR[9]_OVERFI		(1 << 5)
/** USBHS_USBHS_HSTPIPISR[9]_NAKEDI NAKed Interrupt **/
#define USBHS_USBHS_HSTPIPISR[9]_NAKEDI		(1 << 4)
/** USBHS_USBHS_HSTPIPISR[9]_PERRI Pipe Error Interrupt **/
#define USBHS_USBHS_HSTPIPISR[9]_PERRI		(1 << 3)
/** USBHS_USBHS_HSTPIPISR[9]_TXSTPI Transmitted SETUP Interrupt **/
#define USBHS_USBHS_HSTPIPISR[9]_TXSTPI		(1 << 2)
/** USBHS_USBHS_HSTPIPISR[9]_TXOUTI Transmitted OUT Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[9]_TXOUTI		(1 << 1)
/** USBHS_USBHS_HSTPIPISR[9]_RXINI Received IN Data Interrupt **/
#define USBHS_USBHS_HSTPIPISR[9]_RXINI		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipicr[0] USBHSHSTPIPICR[0] Host Pipe Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPICR[0]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[0]_SHORTPACKETIC		(1 << 7)
/** USBHS_USBHS_HSTPIPICR[0]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[0]_RXSTALLDIC		(1 << 6)
/** USBHS_USBHS_HSTPIPICR[0]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[0]_OVERFIC		(1 << 5)
/** USBHS_USBHS_HSTPIPICR[0]_NAKEDIC NAKed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[0]_NAKEDIC		(1 << 4)
/** USBHS_USBHS_HSTPIPICR[0]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[0]_TXSTPIC		(1 << 2)
/** USBHS_USBHS_HSTPIPICR[0]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[0]_TXOUTIC		(1 << 1)
/** USBHS_USBHS_HSTPIPICR[0]_RXINIC Received IN Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[0]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipicr[1] USBHSHSTPIPICR[1] Host Pipe Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPICR[1]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[1]_SHORTPACKETIC		(1 << 7)
/** USBHS_USBHS_HSTPIPICR[1]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[1]_RXSTALLDIC		(1 << 6)
/** USBHS_USBHS_HSTPIPICR[1]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[1]_OVERFIC		(1 << 5)
/** USBHS_USBHS_HSTPIPICR[1]_NAKEDIC NAKed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[1]_NAKEDIC		(1 << 4)
/** USBHS_USBHS_HSTPIPICR[1]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[1]_TXSTPIC		(1 << 2)
/** USBHS_USBHS_HSTPIPICR[1]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[1]_TXOUTIC		(1 << 1)
/** USBHS_USBHS_HSTPIPICR[1]_RXINIC Received IN Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[1]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipicr[2] USBHSHSTPIPICR[2] Host Pipe Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPICR[2]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[2]_SHORTPACKETIC		(1 << 7)
/** USBHS_USBHS_HSTPIPICR[2]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[2]_RXSTALLDIC		(1 << 6)
/** USBHS_USBHS_HSTPIPICR[2]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[2]_OVERFIC		(1 << 5)
/** USBHS_USBHS_HSTPIPICR[2]_NAKEDIC NAKed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[2]_NAKEDIC		(1 << 4)
/** USBHS_USBHS_HSTPIPICR[2]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[2]_TXSTPIC		(1 << 2)
/** USBHS_USBHS_HSTPIPICR[2]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[2]_TXOUTIC		(1 << 1)
/** USBHS_USBHS_HSTPIPICR[2]_RXINIC Received IN Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[2]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipicr[3] USBHSHSTPIPICR[3] Host Pipe Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPICR[3]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[3]_SHORTPACKETIC		(1 << 7)
/** USBHS_USBHS_HSTPIPICR[3]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[3]_RXSTALLDIC		(1 << 6)
/** USBHS_USBHS_HSTPIPICR[3]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[3]_OVERFIC		(1 << 5)
/** USBHS_USBHS_HSTPIPICR[3]_NAKEDIC NAKed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[3]_NAKEDIC		(1 << 4)
/** USBHS_USBHS_HSTPIPICR[3]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[3]_TXSTPIC		(1 << 2)
/** USBHS_USBHS_HSTPIPICR[3]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[3]_TXOUTIC		(1 << 1)
/** USBHS_USBHS_HSTPIPICR[3]_RXINIC Received IN Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[3]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipicr[4] USBHSHSTPIPICR[4] Host Pipe Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPICR[4]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[4]_SHORTPACKETIC		(1 << 7)
/** USBHS_USBHS_HSTPIPICR[4]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[4]_RXSTALLDIC		(1 << 6)
/** USBHS_USBHS_HSTPIPICR[4]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[4]_OVERFIC		(1 << 5)
/** USBHS_USBHS_HSTPIPICR[4]_NAKEDIC NAKed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[4]_NAKEDIC		(1 << 4)
/** USBHS_USBHS_HSTPIPICR[4]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[4]_TXSTPIC		(1 << 2)
/** USBHS_USBHS_HSTPIPICR[4]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[4]_TXOUTIC		(1 << 1)
/** USBHS_USBHS_HSTPIPICR[4]_RXINIC Received IN Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[4]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipicr[5] USBHSHSTPIPICR[5] Host Pipe Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPICR[5]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[5]_SHORTPACKETIC		(1 << 7)
/** USBHS_USBHS_HSTPIPICR[5]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[5]_RXSTALLDIC		(1 << 6)
/** USBHS_USBHS_HSTPIPICR[5]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[5]_OVERFIC		(1 << 5)
/** USBHS_USBHS_HSTPIPICR[5]_NAKEDIC NAKed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[5]_NAKEDIC		(1 << 4)
/** USBHS_USBHS_HSTPIPICR[5]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[5]_TXSTPIC		(1 << 2)
/** USBHS_USBHS_HSTPIPICR[5]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[5]_TXOUTIC		(1 << 1)
/** USBHS_USBHS_HSTPIPICR[5]_RXINIC Received IN Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[5]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipicr[6] USBHSHSTPIPICR[6] Host Pipe Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPICR[6]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[6]_SHORTPACKETIC		(1 << 7)
/** USBHS_USBHS_HSTPIPICR[6]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[6]_RXSTALLDIC		(1 << 6)
/** USBHS_USBHS_HSTPIPICR[6]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[6]_OVERFIC		(1 << 5)
/** USBHS_USBHS_HSTPIPICR[6]_NAKEDIC NAKed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[6]_NAKEDIC		(1 << 4)
/** USBHS_USBHS_HSTPIPICR[6]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[6]_TXSTPIC		(1 << 2)
/** USBHS_USBHS_HSTPIPICR[6]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[6]_TXOUTIC		(1 << 1)
/** USBHS_USBHS_HSTPIPICR[6]_RXINIC Received IN Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[6]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipicr[7] USBHSHSTPIPICR[7] Host Pipe Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPICR[7]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[7]_SHORTPACKETIC		(1 << 7)
/** USBHS_USBHS_HSTPIPICR[7]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[7]_RXSTALLDIC		(1 << 6)
/** USBHS_USBHS_HSTPIPICR[7]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[7]_OVERFIC		(1 << 5)
/** USBHS_USBHS_HSTPIPICR[7]_NAKEDIC NAKed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[7]_NAKEDIC		(1 << 4)
/** USBHS_USBHS_HSTPIPICR[7]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[7]_TXSTPIC		(1 << 2)
/** USBHS_USBHS_HSTPIPICR[7]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[7]_TXOUTIC		(1 << 1)
/** USBHS_USBHS_HSTPIPICR[7]_RXINIC Received IN Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[7]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipicr[8] USBHSHSTPIPICR[8] Host Pipe Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPICR[8]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[8]_SHORTPACKETIC		(1 << 7)
/** USBHS_USBHS_HSTPIPICR[8]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[8]_RXSTALLDIC		(1 << 6)
/** USBHS_USBHS_HSTPIPICR[8]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[8]_OVERFIC		(1 << 5)
/** USBHS_USBHS_HSTPIPICR[8]_NAKEDIC NAKed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[8]_NAKEDIC		(1 << 4)
/** USBHS_USBHS_HSTPIPICR[8]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[8]_TXSTPIC		(1 << 2)
/** USBHS_USBHS_HSTPIPICR[8]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[8]_TXOUTIC		(1 << 1)
/** USBHS_USBHS_HSTPIPICR[8]_RXINIC Received IN Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[8]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipicr[9] USBHSHSTPIPICR[9] Host Pipe Clear Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPICR[9]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[9]_SHORTPACKETIC		(1 << 7)
/** USBHS_USBHS_HSTPIPICR[9]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[9]_RXSTALLDIC		(1 << 6)
/** USBHS_USBHS_HSTPIPICR[9]_OVERFIC Overflow Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[9]_OVERFIC		(1 << 5)
/** USBHS_USBHS_HSTPIPICR[9]_NAKEDIC NAKed Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[9]_NAKEDIC		(1 << 4)
/** USBHS_USBHS_HSTPIPICR[9]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[9]_TXSTPIC		(1 << 2)
/** USBHS_USBHS_HSTPIPICR[9]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[9]_TXOUTIC		(1 << 1)
/** USBHS_USBHS_HSTPIPICR[9]_RXINIC Received IN Data Interrupt Clear **/
#define USBHS_USBHS_HSTPIPICR[9]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipifr[0] USBHSHSTPIPIFR[0] Host Pipe Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIFR[0]_NBUSYBKS Number of Busy Banks Set **/
#define USBHS_USBHS_HSTPIPIFR[0]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_HSTPIPIFR[0]_SHORTPACKETIS Short Packet Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[0]_SHORTPACKETIS		(1 << 7)
/** USBHS_USBHS_HSTPIPIFR[0]_RXSTALLDIS Received STALLed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[0]_RXSTALLDIS		(1 << 6)
/** USBHS_USBHS_HSTPIPIFR[0]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[0]_OVERFIS		(1 << 5)
/** USBHS_USBHS_HSTPIPIFR[0]_NAKEDIS NAKed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[0]_NAKEDIS		(1 << 4)
/** USBHS_USBHS_HSTPIPIFR[0]_PERRIS Pipe Error Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[0]_PERRIS		(1 << 3)
/** USBHS_USBHS_HSTPIPIFR[0]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[0]_TXSTPIS		(1 << 2)
/** USBHS_USBHS_HSTPIPIFR[0]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[0]_TXOUTIS		(1 << 1)
/** USBHS_USBHS_HSTPIPIFR[0]_RXINIS Received IN Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[0]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipifr[1] USBHSHSTPIPIFR[1] Host Pipe Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIFR[1]_NBUSYBKS Number of Busy Banks Set **/
#define USBHS_USBHS_HSTPIPIFR[1]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_HSTPIPIFR[1]_SHORTPACKETIS Short Packet Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[1]_SHORTPACKETIS		(1 << 7)
/** USBHS_USBHS_HSTPIPIFR[1]_RXSTALLDIS Received STALLed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[1]_RXSTALLDIS		(1 << 6)
/** USBHS_USBHS_HSTPIPIFR[1]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[1]_OVERFIS		(1 << 5)
/** USBHS_USBHS_HSTPIPIFR[1]_NAKEDIS NAKed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[1]_NAKEDIS		(1 << 4)
/** USBHS_USBHS_HSTPIPIFR[1]_PERRIS Pipe Error Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[1]_PERRIS		(1 << 3)
/** USBHS_USBHS_HSTPIPIFR[1]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[1]_TXSTPIS		(1 << 2)
/** USBHS_USBHS_HSTPIPIFR[1]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[1]_TXOUTIS		(1 << 1)
/** USBHS_USBHS_HSTPIPIFR[1]_RXINIS Received IN Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[1]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipifr[2] USBHSHSTPIPIFR[2] Host Pipe Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIFR[2]_NBUSYBKS Number of Busy Banks Set **/
#define USBHS_USBHS_HSTPIPIFR[2]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_HSTPIPIFR[2]_SHORTPACKETIS Short Packet Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[2]_SHORTPACKETIS		(1 << 7)
/** USBHS_USBHS_HSTPIPIFR[2]_RXSTALLDIS Received STALLed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[2]_RXSTALLDIS		(1 << 6)
/** USBHS_USBHS_HSTPIPIFR[2]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[2]_OVERFIS		(1 << 5)
/** USBHS_USBHS_HSTPIPIFR[2]_NAKEDIS NAKed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[2]_NAKEDIS		(1 << 4)
/** USBHS_USBHS_HSTPIPIFR[2]_PERRIS Pipe Error Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[2]_PERRIS		(1 << 3)
/** USBHS_USBHS_HSTPIPIFR[2]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[2]_TXSTPIS		(1 << 2)
/** USBHS_USBHS_HSTPIPIFR[2]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[2]_TXOUTIS		(1 << 1)
/** USBHS_USBHS_HSTPIPIFR[2]_RXINIS Received IN Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[2]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipifr[3] USBHSHSTPIPIFR[3] Host Pipe Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIFR[3]_NBUSYBKS Number of Busy Banks Set **/
#define USBHS_USBHS_HSTPIPIFR[3]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_HSTPIPIFR[3]_SHORTPACKETIS Short Packet Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[3]_SHORTPACKETIS		(1 << 7)
/** USBHS_USBHS_HSTPIPIFR[3]_RXSTALLDIS Received STALLed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[3]_RXSTALLDIS		(1 << 6)
/** USBHS_USBHS_HSTPIPIFR[3]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[3]_OVERFIS		(1 << 5)
/** USBHS_USBHS_HSTPIPIFR[3]_NAKEDIS NAKed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[3]_NAKEDIS		(1 << 4)
/** USBHS_USBHS_HSTPIPIFR[3]_PERRIS Pipe Error Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[3]_PERRIS		(1 << 3)
/** USBHS_USBHS_HSTPIPIFR[3]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[3]_TXSTPIS		(1 << 2)
/** USBHS_USBHS_HSTPIPIFR[3]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[3]_TXOUTIS		(1 << 1)
/** USBHS_USBHS_HSTPIPIFR[3]_RXINIS Received IN Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[3]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipifr[4] USBHSHSTPIPIFR[4] Host Pipe Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIFR[4]_NBUSYBKS Number of Busy Banks Set **/
#define USBHS_USBHS_HSTPIPIFR[4]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_HSTPIPIFR[4]_SHORTPACKETIS Short Packet Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[4]_SHORTPACKETIS		(1 << 7)
/** USBHS_USBHS_HSTPIPIFR[4]_RXSTALLDIS Received STALLed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[4]_RXSTALLDIS		(1 << 6)
/** USBHS_USBHS_HSTPIPIFR[4]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[4]_OVERFIS		(1 << 5)
/** USBHS_USBHS_HSTPIPIFR[4]_NAKEDIS NAKed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[4]_NAKEDIS		(1 << 4)
/** USBHS_USBHS_HSTPIPIFR[4]_PERRIS Pipe Error Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[4]_PERRIS		(1 << 3)
/** USBHS_USBHS_HSTPIPIFR[4]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[4]_TXSTPIS		(1 << 2)
/** USBHS_USBHS_HSTPIPIFR[4]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[4]_TXOUTIS		(1 << 1)
/** USBHS_USBHS_HSTPIPIFR[4]_RXINIS Received IN Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[4]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipifr[5] USBHSHSTPIPIFR[5] Host Pipe Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIFR[5]_NBUSYBKS Number of Busy Banks Set **/
#define USBHS_USBHS_HSTPIPIFR[5]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_HSTPIPIFR[5]_SHORTPACKETIS Short Packet Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[5]_SHORTPACKETIS		(1 << 7)
/** USBHS_USBHS_HSTPIPIFR[5]_RXSTALLDIS Received STALLed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[5]_RXSTALLDIS		(1 << 6)
/** USBHS_USBHS_HSTPIPIFR[5]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[5]_OVERFIS		(1 << 5)
/** USBHS_USBHS_HSTPIPIFR[5]_NAKEDIS NAKed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[5]_NAKEDIS		(1 << 4)
/** USBHS_USBHS_HSTPIPIFR[5]_PERRIS Pipe Error Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[5]_PERRIS		(1 << 3)
/** USBHS_USBHS_HSTPIPIFR[5]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[5]_TXSTPIS		(1 << 2)
/** USBHS_USBHS_HSTPIPIFR[5]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[5]_TXOUTIS		(1 << 1)
/** USBHS_USBHS_HSTPIPIFR[5]_RXINIS Received IN Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[5]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipifr[6] USBHSHSTPIPIFR[6] Host Pipe Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIFR[6]_NBUSYBKS Number of Busy Banks Set **/
#define USBHS_USBHS_HSTPIPIFR[6]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_HSTPIPIFR[6]_SHORTPACKETIS Short Packet Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[6]_SHORTPACKETIS		(1 << 7)
/** USBHS_USBHS_HSTPIPIFR[6]_RXSTALLDIS Received STALLed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[6]_RXSTALLDIS		(1 << 6)
/** USBHS_USBHS_HSTPIPIFR[6]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[6]_OVERFIS		(1 << 5)
/** USBHS_USBHS_HSTPIPIFR[6]_NAKEDIS NAKed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[6]_NAKEDIS		(1 << 4)
/** USBHS_USBHS_HSTPIPIFR[6]_PERRIS Pipe Error Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[6]_PERRIS		(1 << 3)
/** USBHS_USBHS_HSTPIPIFR[6]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[6]_TXSTPIS		(1 << 2)
/** USBHS_USBHS_HSTPIPIFR[6]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[6]_TXOUTIS		(1 << 1)
/** USBHS_USBHS_HSTPIPIFR[6]_RXINIS Received IN Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[6]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipifr[7] USBHSHSTPIPIFR[7] Host Pipe Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIFR[7]_NBUSYBKS Number of Busy Banks Set **/
#define USBHS_USBHS_HSTPIPIFR[7]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_HSTPIPIFR[7]_SHORTPACKETIS Short Packet Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[7]_SHORTPACKETIS		(1 << 7)
/** USBHS_USBHS_HSTPIPIFR[7]_RXSTALLDIS Received STALLed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[7]_RXSTALLDIS		(1 << 6)
/** USBHS_USBHS_HSTPIPIFR[7]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[7]_OVERFIS		(1 << 5)
/** USBHS_USBHS_HSTPIPIFR[7]_NAKEDIS NAKed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[7]_NAKEDIS		(1 << 4)
/** USBHS_USBHS_HSTPIPIFR[7]_PERRIS Pipe Error Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[7]_PERRIS		(1 << 3)
/** USBHS_USBHS_HSTPIPIFR[7]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[7]_TXSTPIS		(1 << 2)
/** USBHS_USBHS_HSTPIPIFR[7]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[7]_TXOUTIS		(1 << 1)
/** USBHS_USBHS_HSTPIPIFR[7]_RXINIS Received IN Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[7]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipifr[8] USBHSHSTPIPIFR[8] Host Pipe Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIFR[8]_NBUSYBKS Number of Busy Banks Set **/
#define USBHS_USBHS_HSTPIPIFR[8]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_HSTPIPIFR[8]_SHORTPACKETIS Short Packet Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[8]_SHORTPACKETIS		(1 << 7)
/** USBHS_USBHS_HSTPIPIFR[8]_RXSTALLDIS Received STALLed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[8]_RXSTALLDIS		(1 << 6)
/** USBHS_USBHS_HSTPIPIFR[8]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[8]_OVERFIS		(1 << 5)
/** USBHS_USBHS_HSTPIPIFR[8]_NAKEDIS NAKed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[8]_NAKEDIS		(1 << 4)
/** USBHS_USBHS_HSTPIPIFR[8]_PERRIS Pipe Error Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[8]_PERRIS		(1 << 3)
/** USBHS_USBHS_HSTPIPIFR[8]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[8]_TXSTPIS		(1 << 2)
/** USBHS_USBHS_HSTPIPIFR[8]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[8]_TXOUTIS		(1 << 1)
/** USBHS_USBHS_HSTPIPIFR[8]_RXINIS Received IN Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[8]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipifr[9] USBHSHSTPIPIFR[9] Host Pipe Set Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIFR[9]_NBUSYBKS Number of Busy Banks Set **/
#define USBHS_USBHS_HSTPIPIFR[9]_NBUSYBKS		(1 << 12)
/** USBHS_USBHS_HSTPIPIFR[9]_SHORTPACKETIS Short Packet Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[9]_SHORTPACKETIS		(1 << 7)
/** USBHS_USBHS_HSTPIPIFR[9]_RXSTALLDIS Received STALLed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[9]_RXSTALLDIS		(1 << 6)
/** USBHS_USBHS_HSTPIPIFR[9]_OVERFIS Overflow Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[9]_OVERFIS		(1 << 5)
/** USBHS_USBHS_HSTPIPIFR[9]_NAKEDIS NAKed Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[9]_NAKEDIS		(1 << 4)
/** USBHS_USBHS_HSTPIPIFR[9]_PERRIS Pipe Error Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[9]_PERRIS		(1 << 3)
/** USBHS_USBHS_HSTPIPIFR[9]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[9]_TXSTPIS		(1 << 2)
/** USBHS_USBHS_HSTPIPIFR[9]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[9]_TXOUTIS		(1 << 1)
/** USBHS_USBHS_HSTPIPIFR[9]_RXINIS Received IN Data Interrupt Set **/
#define USBHS_USBHS_HSTPIPIFR[9]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipimr[0] USBHSHSTPIPIMR[0] Host Pipe Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIMR[0]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_HSTPIPIMR[0]_RSTDT		(1 << 18)
/** USBHS_USBHS_HSTPIPIMR[0]_PFREEZE Pipe Freeze **/
#define USBHS_USBHS_HSTPIPIMR[0]_PFREEZE		(1 << 17)
/** USBHS_USBHS_HSTPIPIMR[0]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIMR[0]_PDISHDMA		(1 << 16)
/** USBHS_USBHS_HSTPIPIMR[0]_FIFOCON FIFO Control **/
#define USBHS_USBHS_HSTPIPIMR[0]_FIFOCON		(1 << 14)
/** USBHS_USBHS_HSTPIPIMR[0]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[0]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_HSTPIPIMR[0]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[0]_SHORTPACKETIE		(1 << 7)
/** USBHS_USBHS_HSTPIPIMR[0]_RXSTALLDE Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[0]_RXSTALLDE		(1 << 6)
/** USBHS_USBHS_HSTPIPIMR[0]_OVERFIE Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[0]_OVERFIE		(1 << 5)
/** USBHS_USBHS_HSTPIPIMR[0]_NAKEDE NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[0]_NAKEDE		(1 << 4)
/** USBHS_USBHS_HSTPIPIMR[0]_PERRE Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[0]_PERRE		(1 << 3)
/** USBHS_USBHS_HSTPIPIMR[0]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[0]_TXSTPE		(1 << 2)
/** USBHS_USBHS_HSTPIPIMR[0]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[0]_TXOUTE		(1 << 1)
/** USBHS_USBHS_HSTPIPIMR[0]_RXINE Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[0]_RXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipimr[1] USBHSHSTPIPIMR[1] Host Pipe Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIMR[1]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_HSTPIPIMR[1]_RSTDT		(1 << 18)
/** USBHS_USBHS_HSTPIPIMR[1]_PFREEZE Pipe Freeze **/
#define USBHS_USBHS_HSTPIPIMR[1]_PFREEZE		(1 << 17)
/** USBHS_USBHS_HSTPIPIMR[1]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIMR[1]_PDISHDMA		(1 << 16)
/** USBHS_USBHS_HSTPIPIMR[1]_FIFOCON FIFO Control **/
#define USBHS_USBHS_HSTPIPIMR[1]_FIFOCON		(1 << 14)
/** USBHS_USBHS_HSTPIPIMR[1]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[1]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_HSTPIPIMR[1]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[1]_SHORTPACKETIE		(1 << 7)
/** USBHS_USBHS_HSTPIPIMR[1]_RXSTALLDE Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[1]_RXSTALLDE		(1 << 6)
/** USBHS_USBHS_HSTPIPIMR[1]_OVERFIE Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[1]_OVERFIE		(1 << 5)
/** USBHS_USBHS_HSTPIPIMR[1]_NAKEDE NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[1]_NAKEDE		(1 << 4)
/** USBHS_USBHS_HSTPIPIMR[1]_PERRE Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[1]_PERRE		(1 << 3)
/** USBHS_USBHS_HSTPIPIMR[1]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[1]_TXSTPE		(1 << 2)
/** USBHS_USBHS_HSTPIPIMR[1]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[1]_TXOUTE		(1 << 1)
/** USBHS_USBHS_HSTPIPIMR[1]_RXINE Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[1]_RXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipimr[2] USBHSHSTPIPIMR[2] Host Pipe Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIMR[2]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_HSTPIPIMR[2]_RSTDT		(1 << 18)
/** USBHS_USBHS_HSTPIPIMR[2]_PFREEZE Pipe Freeze **/
#define USBHS_USBHS_HSTPIPIMR[2]_PFREEZE		(1 << 17)
/** USBHS_USBHS_HSTPIPIMR[2]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIMR[2]_PDISHDMA		(1 << 16)
/** USBHS_USBHS_HSTPIPIMR[2]_FIFOCON FIFO Control **/
#define USBHS_USBHS_HSTPIPIMR[2]_FIFOCON		(1 << 14)
/** USBHS_USBHS_HSTPIPIMR[2]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[2]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_HSTPIPIMR[2]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[2]_SHORTPACKETIE		(1 << 7)
/** USBHS_USBHS_HSTPIPIMR[2]_RXSTALLDE Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[2]_RXSTALLDE		(1 << 6)
/** USBHS_USBHS_HSTPIPIMR[2]_OVERFIE Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[2]_OVERFIE		(1 << 5)
/** USBHS_USBHS_HSTPIPIMR[2]_NAKEDE NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[2]_NAKEDE		(1 << 4)
/** USBHS_USBHS_HSTPIPIMR[2]_PERRE Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[2]_PERRE		(1 << 3)
/** USBHS_USBHS_HSTPIPIMR[2]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[2]_TXSTPE		(1 << 2)
/** USBHS_USBHS_HSTPIPIMR[2]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[2]_TXOUTE		(1 << 1)
/** USBHS_USBHS_HSTPIPIMR[2]_RXINE Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[2]_RXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipimr[3] USBHSHSTPIPIMR[3] Host Pipe Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIMR[3]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_HSTPIPIMR[3]_RSTDT		(1 << 18)
/** USBHS_USBHS_HSTPIPIMR[3]_PFREEZE Pipe Freeze **/
#define USBHS_USBHS_HSTPIPIMR[3]_PFREEZE		(1 << 17)
/** USBHS_USBHS_HSTPIPIMR[3]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIMR[3]_PDISHDMA		(1 << 16)
/** USBHS_USBHS_HSTPIPIMR[3]_FIFOCON FIFO Control **/
#define USBHS_USBHS_HSTPIPIMR[3]_FIFOCON		(1 << 14)
/** USBHS_USBHS_HSTPIPIMR[3]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[3]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_HSTPIPIMR[3]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[3]_SHORTPACKETIE		(1 << 7)
/** USBHS_USBHS_HSTPIPIMR[3]_RXSTALLDE Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[3]_RXSTALLDE		(1 << 6)
/** USBHS_USBHS_HSTPIPIMR[3]_OVERFIE Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[3]_OVERFIE		(1 << 5)
/** USBHS_USBHS_HSTPIPIMR[3]_NAKEDE NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[3]_NAKEDE		(1 << 4)
/** USBHS_USBHS_HSTPIPIMR[3]_PERRE Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[3]_PERRE		(1 << 3)
/** USBHS_USBHS_HSTPIPIMR[3]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[3]_TXSTPE		(1 << 2)
/** USBHS_USBHS_HSTPIPIMR[3]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[3]_TXOUTE		(1 << 1)
/** USBHS_USBHS_HSTPIPIMR[3]_RXINE Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[3]_RXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipimr[4] USBHSHSTPIPIMR[4] Host Pipe Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIMR[4]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_HSTPIPIMR[4]_RSTDT		(1 << 18)
/** USBHS_USBHS_HSTPIPIMR[4]_PFREEZE Pipe Freeze **/
#define USBHS_USBHS_HSTPIPIMR[4]_PFREEZE		(1 << 17)
/** USBHS_USBHS_HSTPIPIMR[4]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIMR[4]_PDISHDMA		(1 << 16)
/** USBHS_USBHS_HSTPIPIMR[4]_FIFOCON FIFO Control **/
#define USBHS_USBHS_HSTPIPIMR[4]_FIFOCON		(1 << 14)
/** USBHS_USBHS_HSTPIPIMR[4]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[4]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_HSTPIPIMR[4]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[4]_SHORTPACKETIE		(1 << 7)
/** USBHS_USBHS_HSTPIPIMR[4]_RXSTALLDE Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[4]_RXSTALLDE		(1 << 6)
/** USBHS_USBHS_HSTPIPIMR[4]_OVERFIE Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[4]_OVERFIE		(1 << 5)
/** USBHS_USBHS_HSTPIPIMR[4]_NAKEDE NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[4]_NAKEDE		(1 << 4)
/** USBHS_USBHS_HSTPIPIMR[4]_PERRE Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[4]_PERRE		(1 << 3)
/** USBHS_USBHS_HSTPIPIMR[4]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[4]_TXSTPE		(1 << 2)
/** USBHS_USBHS_HSTPIPIMR[4]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[4]_TXOUTE		(1 << 1)
/** USBHS_USBHS_HSTPIPIMR[4]_RXINE Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[4]_RXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipimr[5] USBHSHSTPIPIMR[5] Host Pipe Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIMR[5]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_HSTPIPIMR[5]_RSTDT		(1 << 18)
/** USBHS_USBHS_HSTPIPIMR[5]_PFREEZE Pipe Freeze **/
#define USBHS_USBHS_HSTPIPIMR[5]_PFREEZE		(1 << 17)
/** USBHS_USBHS_HSTPIPIMR[5]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIMR[5]_PDISHDMA		(1 << 16)
/** USBHS_USBHS_HSTPIPIMR[5]_FIFOCON FIFO Control **/
#define USBHS_USBHS_HSTPIPIMR[5]_FIFOCON		(1 << 14)
/** USBHS_USBHS_HSTPIPIMR[5]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[5]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_HSTPIPIMR[5]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[5]_SHORTPACKETIE		(1 << 7)
/** USBHS_USBHS_HSTPIPIMR[5]_RXSTALLDE Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[5]_RXSTALLDE		(1 << 6)
/** USBHS_USBHS_HSTPIPIMR[5]_OVERFIE Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[5]_OVERFIE		(1 << 5)
/** USBHS_USBHS_HSTPIPIMR[5]_NAKEDE NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[5]_NAKEDE		(1 << 4)
/** USBHS_USBHS_HSTPIPIMR[5]_PERRE Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[5]_PERRE		(1 << 3)
/** USBHS_USBHS_HSTPIPIMR[5]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[5]_TXSTPE		(1 << 2)
/** USBHS_USBHS_HSTPIPIMR[5]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[5]_TXOUTE		(1 << 1)
/** USBHS_USBHS_HSTPIPIMR[5]_RXINE Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[5]_RXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipimr[6] USBHSHSTPIPIMR[6] Host Pipe Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIMR[6]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_HSTPIPIMR[6]_RSTDT		(1 << 18)
/** USBHS_USBHS_HSTPIPIMR[6]_PFREEZE Pipe Freeze **/
#define USBHS_USBHS_HSTPIPIMR[6]_PFREEZE		(1 << 17)
/** USBHS_USBHS_HSTPIPIMR[6]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIMR[6]_PDISHDMA		(1 << 16)
/** USBHS_USBHS_HSTPIPIMR[6]_FIFOCON FIFO Control **/
#define USBHS_USBHS_HSTPIPIMR[6]_FIFOCON		(1 << 14)
/** USBHS_USBHS_HSTPIPIMR[6]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[6]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_HSTPIPIMR[6]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[6]_SHORTPACKETIE		(1 << 7)
/** USBHS_USBHS_HSTPIPIMR[6]_RXSTALLDE Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[6]_RXSTALLDE		(1 << 6)
/** USBHS_USBHS_HSTPIPIMR[6]_OVERFIE Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[6]_OVERFIE		(1 << 5)
/** USBHS_USBHS_HSTPIPIMR[6]_NAKEDE NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[6]_NAKEDE		(1 << 4)
/** USBHS_USBHS_HSTPIPIMR[6]_PERRE Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[6]_PERRE		(1 << 3)
/** USBHS_USBHS_HSTPIPIMR[6]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[6]_TXSTPE		(1 << 2)
/** USBHS_USBHS_HSTPIPIMR[6]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[6]_TXOUTE		(1 << 1)
/** USBHS_USBHS_HSTPIPIMR[6]_RXINE Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[6]_RXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipimr[7] USBHSHSTPIPIMR[7] Host Pipe Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIMR[7]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_HSTPIPIMR[7]_RSTDT		(1 << 18)
/** USBHS_USBHS_HSTPIPIMR[7]_PFREEZE Pipe Freeze **/
#define USBHS_USBHS_HSTPIPIMR[7]_PFREEZE		(1 << 17)
/** USBHS_USBHS_HSTPIPIMR[7]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIMR[7]_PDISHDMA		(1 << 16)
/** USBHS_USBHS_HSTPIPIMR[7]_FIFOCON FIFO Control **/
#define USBHS_USBHS_HSTPIPIMR[7]_FIFOCON		(1 << 14)
/** USBHS_USBHS_HSTPIPIMR[7]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[7]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_HSTPIPIMR[7]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[7]_SHORTPACKETIE		(1 << 7)
/** USBHS_USBHS_HSTPIPIMR[7]_RXSTALLDE Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[7]_RXSTALLDE		(1 << 6)
/** USBHS_USBHS_HSTPIPIMR[7]_OVERFIE Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[7]_OVERFIE		(1 << 5)
/** USBHS_USBHS_HSTPIPIMR[7]_NAKEDE NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[7]_NAKEDE		(1 << 4)
/** USBHS_USBHS_HSTPIPIMR[7]_PERRE Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[7]_PERRE		(1 << 3)
/** USBHS_USBHS_HSTPIPIMR[7]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[7]_TXSTPE		(1 << 2)
/** USBHS_USBHS_HSTPIPIMR[7]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[7]_TXOUTE		(1 << 1)
/** USBHS_USBHS_HSTPIPIMR[7]_RXINE Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[7]_RXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipimr[8] USBHSHSTPIPIMR[8] Host Pipe Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIMR[8]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_HSTPIPIMR[8]_RSTDT		(1 << 18)
/** USBHS_USBHS_HSTPIPIMR[8]_PFREEZE Pipe Freeze **/
#define USBHS_USBHS_HSTPIPIMR[8]_PFREEZE		(1 << 17)
/** USBHS_USBHS_HSTPIPIMR[8]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIMR[8]_PDISHDMA		(1 << 16)
/** USBHS_USBHS_HSTPIPIMR[8]_FIFOCON FIFO Control **/
#define USBHS_USBHS_HSTPIPIMR[8]_FIFOCON		(1 << 14)
/** USBHS_USBHS_HSTPIPIMR[8]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[8]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_HSTPIPIMR[8]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[8]_SHORTPACKETIE		(1 << 7)
/** USBHS_USBHS_HSTPIPIMR[8]_RXSTALLDE Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[8]_RXSTALLDE		(1 << 6)
/** USBHS_USBHS_HSTPIPIMR[8]_OVERFIE Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[8]_OVERFIE		(1 << 5)
/** USBHS_USBHS_HSTPIPIMR[8]_NAKEDE NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[8]_NAKEDE		(1 << 4)
/** USBHS_USBHS_HSTPIPIMR[8]_PERRE Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[8]_PERRE		(1 << 3)
/** USBHS_USBHS_HSTPIPIMR[8]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[8]_TXSTPE		(1 << 2)
/** USBHS_USBHS_HSTPIPIMR[8]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[8]_TXOUTE		(1 << 1)
/** USBHS_USBHS_HSTPIPIMR[8]_RXINE Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[8]_RXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipimr[9] USBHSHSTPIPIMR[9] Host Pipe Mask Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIMR[9]_RSTDT Reset Data Toggle **/
#define USBHS_USBHS_HSTPIPIMR[9]_RSTDT		(1 << 18)
/** USBHS_USBHS_HSTPIPIMR[9]_PFREEZE Pipe Freeze **/
#define USBHS_USBHS_HSTPIPIMR[9]_PFREEZE		(1 << 17)
/** USBHS_USBHS_HSTPIPIMR[9]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIMR[9]_PDISHDMA		(1 << 16)
/** USBHS_USBHS_HSTPIPIMR[9]_FIFOCON FIFO Control **/
#define USBHS_USBHS_HSTPIPIMR[9]_FIFOCON		(1 << 14)
/** USBHS_USBHS_HSTPIPIMR[9]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[9]_NBUSYBKE		(1 << 12)
/** USBHS_USBHS_HSTPIPIMR[9]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[9]_SHORTPACKETIE		(1 << 7)
/** USBHS_USBHS_HSTPIPIMR[9]_RXSTALLDE Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[9]_RXSTALLDE		(1 << 6)
/** USBHS_USBHS_HSTPIPIMR[9]_OVERFIE Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[9]_OVERFIE		(1 << 5)
/** USBHS_USBHS_HSTPIPIMR[9]_NAKEDE NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[9]_NAKEDE		(1 << 4)
/** USBHS_USBHS_HSTPIPIMR[9]_PERRE Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[9]_PERRE		(1 << 3)
/** USBHS_USBHS_HSTPIPIMR[9]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[9]_TXSTPE		(1 << 2)
/** USBHS_USBHS_HSTPIPIMR[9]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[9]_TXOUTE		(1 << 1)
/** USBHS_USBHS_HSTPIPIMR[9]_RXINE Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIMR[9]_RXINE		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipier[0] USBHSHSTPIPIER[0] Host Pipe Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIER[0]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_HSTPIPIER[0]_RSTDTS		(1 << 18)
/** USBHS_USBHS_HSTPIPIER[0]_PFREEZES Pipe Freeze Enable **/
#define USBHS_USBHS_HSTPIPIER[0]_PFREEZES		(1 << 17)
/** USBHS_USBHS_HSTPIPIER[0]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIER[0]_PDISHDMAS		(1 << 16)
/** USBHS_USBHS_HSTPIPIER[0]_NBUSYBKES Number of Busy Banks Enable **/
#define USBHS_USBHS_HSTPIPIER[0]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_HSTPIPIER[0]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[0]_SHORTPACKETIES		(1 << 7)
/** USBHS_USBHS_HSTPIPIER[0]_RXSTALLDES Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[0]_RXSTALLDES		(1 << 6)
/** USBHS_USBHS_HSTPIPIER[0]_OVERFIES Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[0]_OVERFIES		(1 << 5)
/** USBHS_USBHS_HSTPIPIER[0]_NAKEDES NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[0]_NAKEDES		(1 << 4)
/** USBHS_USBHS_HSTPIPIER[0]_PERRES Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[0]_PERRES		(1 << 3)
/** USBHS_USBHS_HSTPIPIER[0]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[0]_TXSTPES		(1 << 2)
/** USBHS_USBHS_HSTPIPIER[0]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[0]_TXOUTES		(1 << 1)
/** USBHS_USBHS_HSTPIPIER[0]_RXINES Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[0]_RXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipier[1] USBHSHSTPIPIER[1] Host Pipe Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIER[1]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_HSTPIPIER[1]_RSTDTS		(1 << 18)
/** USBHS_USBHS_HSTPIPIER[1]_PFREEZES Pipe Freeze Enable **/
#define USBHS_USBHS_HSTPIPIER[1]_PFREEZES		(1 << 17)
/** USBHS_USBHS_HSTPIPIER[1]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIER[1]_PDISHDMAS		(1 << 16)
/** USBHS_USBHS_HSTPIPIER[1]_NBUSYBKES Number of Busy Banks Enable **/
#define USBHS_USBHS_HSTPIPIER[1]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_HSTPIPIER[1]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[1]_SHORTPACKETIES		(1 << 7)
/** USBHS_USBHS_HSTPIPIER[1]_RXSTALLDES Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[1]_RXSTALLDES		(1 << 6)
/** USBHS_USBHS_HSTPIPIER[1]_OVERFIES Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[1]_OVERFIES		(1 << 5)
/** USBHS_USBHS_HSTPIPIER[1]_NAKEDES NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[1]_NAKEDES		(1 << 4)
/** USBHS_USBHS_HSTPIPIER[1]_PERRES Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[1]_PERRES		(1 << 3)
/** USBHS_USBHS_HSTPIPIER[1]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[1]_TXSTPES		(1 << 2)
/** USBHS_USBHS_HSTPIPIER[1]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[1]_TXOUTES		(1 << 1)
/** USBHS_USBHS_HSTPIPIER[1]_RXINES Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[1]_RXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipier[2] USBHSHSTPIPIER[2] Host Pipe Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIER[2]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_HSTPIPIER[2]_RSTDTS		(1 << 18)
/** USBHS_USBHS_HSTPIPIER[2]_PFREEZES Pipe Freeze Enable **/
#define USBHS_USBHS_HSTPIPIER[2]_PFREEZES		(1 << 17)
/** USBHS_USBHS_HSTPIPIER[2]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIER[2]_PDISHDMAS		(1 << 16)
/** USBHS_USBHS_HSTPIPIER[2]_NBUSYBKES Number of Busy Banks Enable **/
#define USBHS_USBHS_HSTPIPIER[2]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_HSTPIPIER[2]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[2]_SHORTPACKETIES		(1 << 7)
/** USBHS_USBHS_HSTPIPIER[2]_RXSTALLDES Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[2]_RXSTALLDES		(1 << 6)
/** USBHS_USBHS_HSTPIPIER[2]_OVERFIES Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[2]_OVERFIES		(1 << 5)
/** USBHS_USBHS_HSTPIPIER[2]_NAKEDES NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[2]_NAKEDES		(1 << 4)
/** USBHS_USBHS_HSTPIPIER[2]_PERRES Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[2]_PERRES		(1 << 3)
/** USBHS_USBHS_HSTPIPIER[2]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[2]_TXSTPES		(1 << 2)
/** USBHS_USBHS_HSTPIPIER[2]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[2]_TXOUTES		(1 << 1)
/** USBHS_USBHS_HSTPIPIER[2]_RXINES Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[2]_RXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipier[3] USBHSHSTPIPIER[3] Host Pipe Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIER[3]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_HSTPIPIER[3]_RSTDTS		(1 << 18)
/** USBHS_USBHS_HSTPIPIER[3]_PFREEZES Pipe Freeze Enable **/
#define USBHS_USBHS_HSTPIPIER[3]_PFREEZES		(1 << 17)
/** USBHS_USBHS_HSTPIPIER[3]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIER[3]_PDISHDMAS		(1 << 16)
/** USBHS_USBHS_HSTPIPIER[3]_NBUSYBKES Number of Busy Banks Enable **/
#define USBHS_USBHS_HSTPIPIER[3]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_HSTPIPIER[3]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[3]_SHORTPACKETIES		(1 << 7)
/** USBHS_USBHS_HSTPIPIER[3]_RXSTALLDES Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[3]_RXSTALLDES		(1 << 6)
/** USBHS_USBHS_HSTPIPIER[3]_OVERFIES Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[3]_OVERFIES		(1 << 5)
/** USBHS_USBHS_HSTPIPIER[3]_NAKEDES NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[3]_NAKEDES		(1 << 4)
/** USBHS_USBHS_HSTPIPIER[3]_PERRES Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[3]_PERRES		(1 << 3)
/** USBHS_USBHS_HSTPIPIER[3]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[3]_TXSTPES		(1 << 2)
/** USBHS_USBHS_HSTPIPIER[3]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[3]_TXOUTES		(1 << 1)
/** USBHS_USBHS_HSTPIPIER[3]_RXINES Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[3]_RXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipier[4] USBHSHSTPIPIER[4] Host Pipe Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIER[4]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_HSTPIPIER[4]_RSTDTS		(1 << 18)
/** USBHS_USBHS_HSTPIPIER[4]_PFREEZES Pipe Freeze Enable **/
#define USBHS_USBHS_HSTPIPIER[4]_PFREEZES		(1 << 17)
/** USBHS_USBHS_HSTPIPIER[4]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIER[4]_PDISHDMAS		(1 << 16)
/** USBHS_USBHS_HSTPIPIER[4]_NBUSYBKES Number of Busy Banks Enable **/
#define USBHS_USBHS_HSTPIPIER[4]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_HSTPIPIER[4]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[4]_SHORTPACKETIES		(1 << 7)
/** USBHS_USBHS_HSTPIPIER[4]_RXSTALLDES Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[4]_RXSTALLDES		(1 << 6)
/** USBHS_USBHS_HSTPIPIER[4]_OVERFIES Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[4]_OVERFIES		(1 << 5)
/** USBHS_USBHS_HSTPIPIER[4]_NAKEDES NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[4]_NAKEDES		(1 << 4)
/** USBHS_USBHS_HSTPIPIER[4]_PERRES Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[4]_PERRES		(1 << 3)
/** USBHS_USBHS_HSTPIPIER[4]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[4]_TXSTPES		(1 << 2)
/** USBHS_USBHS_HSTPIPIER[4]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[4]_TXOUTES		(1 << 1)
/** USBHS_USBHS_HSTPIPIER[4]_RXINES Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[4]_RXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipier[5] USBHSHSTPIPIER[5] Host Pipe Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIER[5]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_HSTPIPIER[5]_RSTDTS		(1 << 18)
/** USBHS_USBHS_HSTPIPIER[5]_PFREEZES Pipe Freeze Enable **/
#define USBHS_USBHS_HSTPIPIER[5]_PFREEZES		(1 << 17)
/** USBHS_USBHS_HSTPIPIER[5]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIER[5]_PDISHDMAS		(1 << 16)
/** USBHS_USBHS_HSTPIPIER[5]_NBUSYBKES Number of Busy Banks Enable **/
#define USBHS_USBHS_HSTPIPIER[5]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_HSTPIPIER[5]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[5]_SHORTPACKETIES		(1 << 7)
/** USBHS_USBHS_HSTPIPIER[5]_RXSTALLDES Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[5]_RXSTALLDES		(1 << 6)
/** USBHS_USBHS_HSTPIPIER[5]_OVERFIES Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[5]_OVERFIES		(1 << 5)
/** USBHS_USBHS_HSTPIPIER[5]_NAKEDES NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[5]_NAKEDES		(1 << 4)
/** USBHS_USBHS_HSTPIPIER[5]_PERRES Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[5]_PERRES		(1 << 3)
/** USBHS_USBHS_HSTPIPIER[5]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[5]_TXSTPES		(1 << 2)
/** USBHS_USBHS_HSTPIPIER[5]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[5]_TXOUTES		(1 << 1)
/** USBHS_USBHS_HSTPIPIER[5]_RXINES Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[5]_RXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipier[6] USBHSHSTPIPIER[6] Host Pipe Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIER[6]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_HSTPIPIER[6]_RSTDTS		(1 << 18)
/** USBHS_USBHS_HSTPIPIER[6]_PFREEZES Pipe Freeze Enable **/
#define USBHS_USBHS_HSTPIPIER[6]_PFREEZES		(1 << 17)
/** USBHS_USBHS_HSTPIPIER[6]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIER[6]_PDISHDMAS		(1 << 16)
/** USBHS_USBHS_HSTPIPIER[6]_NBUSYBKES Number of Busy Banks Enable **/
#define USBHS_USBHS_HSTPIPIER[6]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_HSTPIPIER[6]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[6]_SHORTPACKETIES		(1 << 7)
/** USBHS_USBHS_HSTPIPIER[6]_RXSTALLDES Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[6]_RXSTALLDES		(1 << 6)
/** USBHS_USBHS_HSTPIPIER[6]_OVERFIES Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[6]_OVERFIES		(1 << 5)
/** USBHS_USBHS_HSTPIPIER[6]_NAKEDES NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[6]_NAKEDES		(1 << 4)
/** USBHS_USBHS_HSTPIPIER[6]_PERRES Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[6]_PERRES		(1 << 3)
/** USBHS_USBHS_HSTPIPIER[6]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[6]_TXSTPES		(1 << 2)
/** USBHS_USBHS_HSTPIPIER[6]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[6]_TXOUTES		(1 << 1)
/** USBHS_USBHS_HSTPIPIER[6]_RXINES Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[6]_RXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipier[7] USBHSHSTPIPIER[7] Host Pipe Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIER[7]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_HSTPIPIER[7]_RSTDTS		(1 << 18)
/** USBHS_USBHS_HSTPIPIER[7]_PFREEZES Pipe Freeze Enable **/
#define USBHS_USBHS_HSTPIPIER[7]_PFREEZES		(1 << 17)
/** USBHS_USBHS_HSTPIPIER[7]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIER[7]_PDISHDMAS		(1 << 16)
/** USBHS_USBHS_HSTPIPIER[7]_NBUSYBKES Number of Busy Banks Enable **/
#define USBHS_USBHS_HSTPIPIER[7]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_HSTPIPIER[7]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[7]_SHORTPACKETIES		(1 << 7)
/** USBHS_USBHS_HSTPIPIER[7]_RXSTALLDES Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[7]_RXSTALLDES		(1 << 6)
/** USBHS_USBHS_HSTPIPIER[7]_OVERFIES Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[7]_OVERFIES		(1 << 5)
/** USBHS_USBHS_HSTPIPIER[7]_NAKEDES NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[7]_NAKEDES		(1 << 4)
/** USBHS_USBHS_HSTPIPIER[7]_PERRES Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[7]_PERRES		(1 << 3)
/** USBHS_USBHS_HSTPIPIER[7]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[7]_TXSTPES		(1 << 2)
/** USBHS_USBHS_HSTPIPIER[7]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[7]_TXOUTES		(1 << 1)
/** USBHS_USBHS_HSTPIPIER[7]_RXINES Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[7]_RXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipier[8] USBHSHSTPIPIER[8] Host Pipe Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIER[8]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_HSTPIPIER[8]_RSTDTS		(1 << 18)
/** USBHS_USBHS_HSTPIPIER[8]_PFREEZES Pipe Freeze Enable **/
#define USBHS_USBHS_HSTPIPIER[8]_PFREEZES		(1 << 17)
/** USBHS_USBHS_HSTPIPIER[8]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIER[8]_PDISHDMAS		(1 << 16)
/** USBHS_USBHS_HSTPIPIER[8]_NBUSYBKES Number of Busy Banks Enable **/
#define USBHS_USBHS_HSTPIPIER[8]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_HSTPIPIER[8]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[8]_SHORTPACKETIES		(1 << 7)
/** USBHS_USBHS_HSTPIPIER[8]_RXSTALLDES Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[8]_RXSTALLDES		(1 << 6)
/** USBHS_USBHS_HSTPIPIER[8]_OVERFIES Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[8]_OVERFIES		(1 << 5)
/** USBHS_USBHS_HSTPIPIER[8]_NAKEDES NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[8]_NAKEDES		(1 << 4)
/** USBHS_USBHS_HSTPIPIER[8]_PERRES Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[8]_PERRES		(1 << 3)
/** USBHS_USBHS_HSTPIPIER[8]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[8]_TXSTPES		(1 << 2)
/** USBHS_USBHS_HSTPIPIER[8]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[8]_TXOUTES		(1 << 1)
/** USBHS_USBHS_HSTPIPIER[8]_RXINES Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[8]_RXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipier[9] USBHSHSTPIPIER[9] Host Pipe Enable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIER[9]_RSTDTS Reset Data Toggle Enable **/
#define USBHS_USBHS_HSTPIPIER[9]_RSTDTS		(1 << 18)
/** USBHS_USBHS_HSTPIPIER[9]_PFREEZES Pipe Freeze Enable **/
#define USBHS_USBHS_HSTPIPIER[9]_PFREEZES		(1 << 17)
/** USBHS_USBHS_HSTPIPIER[9]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define USBHS_USBHS_HSTPIPIER[9]_PDISHDMAS		(1 << 16)
/** USBHS_USBHS_HSTPIPIER[9]_NBUSYBKES Number of Busy Banks Enable **/
#define USBHS_USBHS_HSTPIPIER[9]_NBUSYBKES		(1 << 12)
/** USBHS_USBHS_HSTPIPIER[9]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[9]_SHORTPACKETIES		(1 << 7)
/** USBHS_USBHS_HSTPIPIER[9]_RXSTALLDES Received STALLed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[9]_RXSTALLDES		(1 << 6)
/** USBHS_USBHS_HSTPIPIER[9]_OVERFIES Overflow Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[9]_OVERFIES		(1 << 5)
/** USBHS_USBHS_HSTPIPIER[9]_NAKEDES NAKed Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[9]_NAKEDES		(1 << 4)
/** USBHS_USBHS_HSTPIPIER[9]_PERRES Pipe Error Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[9]_PERRES		(1 << 3)
/** USBHS_USBHS_HSTPIPIER[9]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[9]_TXSTPES		(1 << 2)
/** USBHS_USBHS_HSTPIPIER[9]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[9]_TXOUTES		(1 << 1)
/** USBHS_USBHS_HSTPIPIER[9]_RXINES Received IN Data Interrupt Enable **/
#define USBHS_USBHS_HSTPIPIER[9]_RXINES		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipidr[0] USBHSHSTPIPIDR[0] Host Pipe Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIDR[0]_PFREEZEC Pipe Freeze Disable **/
#define USBHS_USBHS_HSTPIPIDR[0]_PFREEZEC		(1 << 17)
/** USBHS_USBHS_HSTPIPIDR[0]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define USBHS_USBHS_HSTPIPIDR[0]_PDISHDMAC		(1 << 16)
/** USBHS_USBHS_HSTPIPIDR[0]_FIFOCONC FIFO Control Disable **/
#define USBHS_USBHS_HSTPIPIDR[0]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_HSTPIPIDR[0]_NBUSYBKEC Number of Busy Banks Disable **/
#define USBHS_USBHS_HSTPIPIDR[0]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_HSTPIPIDR[0]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[0]_SHORTPACKETIEC		(1 << 7)
/** USBHS_USBHS_HSTPIPIDR[0]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[0]_RXSTALLDEC		(1 << 6)
/** USBHS_USBHS_HSTPIPIDR[0]_OVERFIEC Overflow Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[0]_OVERFIEC		(1 << 5)
/** USBHS_USBHS_HSTPIPIDR[0]_NAKEDEC NAKed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[0]_NAKEDEC		(1 << 4)
/** USBHS_USBHS_HSTPIPIDR[0]_PERREC Pipe Error Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[0]_PERREC		(1 << 3)
/** USBHS_USBHS_HSTPIPIDR[0]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[0]_TXSTPEC		(1 << 2)
/** USBHS_USBHS_HSTPIPIDR[0]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[0]_TXOUTEC		(1 << 1)
/** USBHS_USBHS_HSTPIPIDR[0]_RXINEC Received IN Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[0]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipidr[1] USBHSHSTPIPIDR[1] Host Pipe Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIDR[1]_PFREEZEC Pipe Freeze Disable **/
#define USBHS_USBHS_HSTPIPIDR[1]_PFREEZEC		(1 << 17)
/** USBHS_USBHS_HSTPIPIDR[1]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define USBHS_USBHS_HSTPIPIDR[1]_PDISHDMAC		(1 << 16)
/** USBHS_USBHS_HSTPIPIDR[1]_FIFOCONC FIFO Control Disable **/
#define USBHS_USBHS_HSTPIPIDR[1]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_HSTPIPIDR[1]_NBUSYBKEC Number of Busy Banks Disable **/
#define USBHS_USBHS_HSTPIPIDR[1]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_HSTPIPIDR[1]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[1]_SHORTPACKETIEC		(1 << 7)
/** USBHS_USBHS_HSTPIPIDR[1]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[1]_RXSTALLDEC		(1 << 6)
/** USBHS_USBHS_HSTPIPIDR[1]_OVERFIEC Overflow Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[1]_OVERFIEC		(1 << 5)
/** USBHS_USBHS_HSTPIPIDR[1]_NAKEDEC NAKed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[1]_NAKEDEC		(1 << 4)
/** USBHS_USBHS_HSTPIPIDR[1]_PERREC Pipe Error Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[1]_PERREC		(1 << 3)
/** USBHS_USBHS_HSTPIPIDR[1]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[1]_TXSTPEC		(1 << 2)
/** USBHS_USBHS_HSTPIPIDR[1]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[1]_TXOUTEC		(1 << 1)
/** USBHS_USBHS_HSTPIPIDR[1]_RXINEC Received IN Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[1]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipidr[2] USBHSHSTPIPIDR[2] Host Pipe Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIDR[2]_PFREEZEC Pipe Freeze Disable **/
#define USBHS_USBHS_HSTPIPIDR[2]_PFREEZEC		(1 << 17)
/** USBHS_USBHS_HSTPIPIDR[2]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define USBHS_USBHS_HSTPIPIDR[2]_PDISHDMAC		(1 << 16)
/** USBHS_USBHS_HSTPIPIDR[2]_FIFOCONC FIFO Control Disable **/
#define USBHS_USBHS_HSTPIPIDR[2]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_HSTPIPIDR[2]_NBUSYBKEC Number of Busy Banks Disable **/
#define USBHS_USBHS_HSTPIPIDR[2]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_HSTPIPIDR[2]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[2]_SHORTPACKETIEC		(1 << 7)
/** USBHS_USBHS_HSTPIPIDR[2]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[2]_RXSTALLDEC		(1 << 6)
/** USBHS_USBHS_HSTPIPIDR[2]_OVERFIEC Overflow Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[2]_OVERFIEC		(1 << 5)
/** USBHS_USBHS_HSTPIPIDR[2]_NAKEDEC NAKed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[2]_NAKEDEC		(1 << 4)
/** USBHS_USBHS_HSTPIPIDR[2]_PERREC Pipe Error Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[2]_PERREC		(1 << 3)
/** USBHS_USBHS_HSTPIPIDR[2]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[2]_TXSTPEC		(1 << 2)
/** USBHS_USBHS_HSTPIPIDR[2]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[2]_TXOUTEC		(1 << 1)
/** USBHS_USBHS_HSTPIPIDR[2]_RXINEC Received IN Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[2]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipidr[3] USBHSHSTPIPIDR[3] Host Pipe Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIDR[3]_PFREEZEC Pipe Freeze Disable **/
#define USBHS_USBHS_HSTPIPIDR[3]_PFREEZEC		(1 << 17)
/** USBHS_USBHS_HSTPIPIDR[3]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define USBHS_USBHS_HSTPIPIDR[3]_PDISHDMAC		(1 << 16)
/** USBHS_USBHS_HSTPIPIDR[3]_FIFOCONC FIFO Control Disable **/
#define USBHS_USBHS_HSTPIPIDR[3]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_HSTPIPIDR[3]_NBUSYBKEC Number of Busy Banks Disable **/
#define USBHS_USBHS_HSTPIPIDR[3]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_HSTPIPIDR[3]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[3]_SHORTPACKETIEC		(1 << 7)
/** USBHS_USBHS_HSTPIPIDR[3]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[3]_RXSTALLDEC		(1 << 6)
/** USBHS_USBHS_HSTPIPIDR[3]_OVERFIEC Overflow Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[3]_OVERFIEC		(1 << 5)
/** USBHS_USBHS_HSTPIPIDR[3]_NAKEDEC NAKed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[3]_NAKEDEC		(1 << 4)
/** USBHS_USBHS_HSTPIPIDR[3]_PERREC Pipe Error Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[3]_PERREC		(1 << 3)
/** USBHS_USBHS_HSTPIPIDR[3]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[3]_TXSTPEC		(1 << 2)
/** USBHS_USBHS_HSTPIPIDR[3]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[3]_TXOUTEC		(1 << 1)
/** USBHS_USBHS_HSTPIPIDR[3]_RXINEC Received IN Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[3]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipidr[4] USBHSHSTPIPIDR[4] Host Pipe Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIDR[4]_PFREEZEC Pipe Freeze Disable **/
#define USBHS_USBHS_HSTPIPIDR[4]_PFREEZEC		(1 << 17)
/** USBHS_USBHS_HSTPIPIDR[4]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define USBHS_USBHS_HSTPIPIDR[4]_PDISHDMAC		(1 << 16)
/** USBHS_USBHS_HSTPIPIDR[4]_FIFOCONC FIFO Control Disable **/
#define USBHS_USBHS_HSTPIPIDR[4]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_HSTPIPIDR[4]_NBUSYBKEC Number of Busy Banks Disable **/
#define USBHS_USBHS_HSTPIPIDR[4]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_HSTPIPIDR[4]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[4]_SHORTPACKETIEC		(1 << 7)
/** USBHS_USBHS_HSTPIPIDR[4]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[4]_RXSTALLDEC		(1 << 6)
/** USBHS_USBHS_HSTPIPIDR[4]_OVERFIEC Overflow Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[4]_OVERFIEC		(1 << 5)
/** USBHS_USBHS_HSTPIPIDR[4]_NAKEDEC NAKed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[4]_NAKEDEC		(1 << 4)
/** USBHS_USBHS_HSTPIPIDR[4]_PERREC Pipe Error Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[4]_PERREC		(1 << 3)
/** USBHS_USBHS_HSTPIPIDR[4]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[4]_TXSTPEC		(1 << 2)
/** USBHS_USBHS_HSTPIPIDR[4]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[4]_TXOUTEC		(1 << 1)
/** USBHS_USBHS_HSTPIPIDR[4]_RXINEC Received IN Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[4]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipidr[5] USBHSHSTPIPIDR[5] Host Pipe Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIDR[5]_PFREEZEC Pipe Freeze Disable **/
#define USBHS_USBHS_HSTPIPIDR[5]_PFREEZEC		(1 << 17)
/** USBHS_USBHS_HSTPIPIDR[5]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define USBHS_USBHS_HSTPIPIDR[5]_PDISHDMAC		(1 << 16)
/** USBHS_USBHS_HSTPIPIDR[5]_FIFOCONC FIFO Control Disable **/
#define USBHS_USBHS_HSTPIPIDR[5]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_HSTPIPIDR[5]_NBUSYBKEC Number of Busy Banks Disable **/
#define USBHS_USBHS_HSTPIPIDR[5]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_HSTPIPIDR[5]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[5]_SHORTPACKETIEC		(1 << 7)
/** USBHS_USBHS_HSTPIPIDR[5]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[5]_RXSTALLDEC		(1 << 6)
/** USBHS_USBHS_HSTPIPIDR[5]_OVERFIEC Overflow Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[5]_OVERFIEC		(1 << 5)
/** USBHS_USBHS_HSTPIPIDR[5]_NAKEDEC NAKed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[5]_NAKEDEC		(1 << 4)
/** USBHS_USBHS_HSTPIPIDR[5]_PERREC Pipe Error Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[5]_PERREC		(1 << 3)
/** USBHS_USBHS_HSTPIPIDR[5]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[5]_TXSTPEC		(1 << 2)
/** USBHS_USBHS_HSTPIPIDR[5]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[5]_TXOUTEC		(1 << 1)
/** USBHS_USBHS_HSTPIPIDR[5]_RXINEC Received IN Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[5]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipidr[6] USBHSHSTPIPIDR[6] Host Pipe Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIDR[6]_PFREEZEC Pipe Freeze Disable **/
#define USBHS_USBHS_HSTPIPIDR[6]_PFREEZEC		(1 << 17)
/** USBHS_USBHS_HSTPIPIDR[6]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define USBHS_USBHS_HSTPIPIDR[6]_PDISHDMAC		(1 << 16)
/** USBHS_USBHS_HSTPIPIDR[6]_FIFOCONC FIFO Control Disable **/
#define USBHS_USBHS_HSTPIPIDR[6]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_HSTPIPIDR[6]_NBUSYBKEC Number of Busy Banks Disable **/
#define USBHS_USBHS_HSTPIPIDR[6]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_HSTPIPIDR[6]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[6]_SHORTPACKETIEC		(1 << 7)
/** USBHS_USBHS_HSTPIPIDR[6]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[6]_RXSTALLDEC		(1 << 6)
/** USBHS_USBHS_HSTPIPIDR[6]_OVERFIEC Overflow Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[6]_OVERFIEC		(1 << 5)
/** USBHS_USBHS_HSTPIPIDR[6]_NAKEDEC NAKed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[6]_NAKEDEC		(1 << 4)
/** USBHS_USBHS_HSTPIPIDR[6]_PERREC Pipe Error Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[6]_PERREC		(1 << 3)
/** USBHS_USBHS_HSTPIPIDR[6]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[6]_TXSTPEC		(1 << 2)
/** USBHS_USBHS_HSTPIPIDR[6]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[6]_TXOUTEC		(1 << 1)
/** USBHS_USBHS_HSTPIPIDR[6]_RXINEC Received IN Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[6]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipidr[7] USBHSHSTPIPIDR[7] Host Pipe Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIDR[7]_PFREEZEC Pipe Freeze Disable **/
#define USBHS_USBHS_HSTPIPIDR[7]_PFREEZEC		(1 << 17)
/** USBHS_USBHS_HSTPIPIDR[7]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define USBHS_USBHS_HSTPIPIDR[7]_PDISHDMAC		(1 << 16)
/** USBHS_USBHS_HSTPIPIDR[7]_FIFOCONC FIFO Control Disable **/
#define USBHS_USBHS_HSTPIPIDR[7]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_HSTPIPIDR[7]_NBUSYBKEC Number of Busy Banks Disable **/
#define USBHS_USBHS_HSTPIPIDR[7]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_HSTPIPIDR[7]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[7]_SHORTPACKETIEC		(1 << 7)
/** USBHS_USBHS_HSTPIPIDR[7]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[7]_RXSTALLDEC		(1 << 6)
/** USBHS_USBHS_HSTPIPIDR[7]_OVERFIEC Overflow Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[7]_OVERFIEC		(1 << 5)
/** USBHS_USBHS_HSTPIPIDR[7]_NAKEDEC NAKed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[7]_NAKEDEC		(1 << 4)
/** USBHS_USBHS_HSTPIPIDR[7]_PERREC Pipe Error Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[7]_PERREC		(1 << 3)
/** USBHS_USBHS_HSTPIPIDR[7]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[7]_TXSTPEC		(1 << 2)
/** USBHS_USBHS_HSTPIPIDR[7]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[7]_TXOUTEC		(1 << 1)
/** USBHS_USBHS_HSTPIPIDR[7]_RXINEC Received IN Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[7]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipidr[8] USBHSHSTPIPIDR[8] Host Pipe Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIDR[8]_PFREEZEC Pipe Freeze Disable **/
#define USBHS_USBHS_HSTPIPIDR[8]_PFREEZEC		(1 << 17)
/** USBHS_USBHS_HSTPIPIDR[8]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define USBHS_USBHS_HSTPIPIDR[8]_PDISHDMAC		(1 << 16)
/** USBHS_USBHS_HSTPIPIDR[8]_FIFOCONC FIFO Control Disable **/
#define USBHS_USBHS_HSTPIPIDR[8]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_HSTPIPIDR[8]_NBUSYBKEC Number of Busy Banks Disable **/
#define USBHS_USBHS_HSTPIPIDR[8]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_HSTPIPIDR[8]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[8]_SHORTPACKETIEC		(1 << 7)
/** USBHS_USBHS_HSTPIPIDR[8]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[8]_RXSTALLDEC		(1 << 6)
/** USBHS_USBHS_HSTPIPIDR[8]_OVERFIEC Overflow Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[8]_OVERFIEC		(1 << 5)
/** USBHS_USBHS_HSTPIPIDR[8]_NAKEDEC NAKed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[8]_NAKEDEC		(1 << 4)
/** USBHS_USBHS_HSTPIPIDR[8]_PERREC Pipe Error Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[8]_PERREC		(1 << 3)
/** USBHS_USBHS_HSTPIPIDR[8]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[8]_TXSTPEC		(1 << 2)
/** USBHS_USBHS_HSTPIPIDR[8]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[8]_TXOUTEC		(1 << 1)
/** USBHS_USBHS_HSTPIPIDR[8]_RXINEC Received IN Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[8]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipidr[9] USBHSHSTPIPIDR[9] Host Pipe Disable Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPIDR[9]_PFREEZEC Pipe Freeze Disable **/
#define USBHS_USBHS_HSTPIPIDR[9]_PFREEZEC		(1 << 17)
/** USBHS_USBHS_HSTPIPIDR[9]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define USBHS_USBHS_HSTPIPIDR[9]_PDISHDMAC		(1 << 16)
/** USBHS_USBHS_HSTPIPIDR[9]_FIFOCONC FIFO Control Disable **/
#define USBHS_USBHS_HSTPIPIDR[9]_FIFOCONC		(1 << 14)
/** USBHS_USBHS_HSTPIPIDR[9]_NBUSYBKEC Number of Busy Banks Disable **/
#define USBHS_USBHS_HSTPIPIDR[9]_NBUSYBKEC		(1 << 12)
/** USBHS_USBHS_HSTPIPIDR[9]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[9]_SHORTPACKETIEC		(1 << 7)
/** USBHS_USBHS_HSTPIPIDR[9]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[9]_RXSTALLDEC		(1 << 6)
/** USBHS_USBHS_HSTPIPIDR[9]_OVERFIEC Overflow Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[9]_OVERFIEC		(1 << 5)
/** USBHS_USBHS_HSTPIPIDR[9]_NAKEDEC NAKed Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[9]_NAKEDEC		(1 << 4)
/** USBHS_USBHS_HSTPIPIDR[9]_PERREC Pipe Error Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[9]_PERREC		(1 << 3)
/** USBHS_USBHS_HSTPIPIDR[9]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[9]_TXSTPEC		(1 << 2)
/** USBHS_USBHS_HSTPIPIDR[9]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[9]_TXOUTEC		(1 << 1)
/** USBHS_USBHS_HSTPIPIDR[9]_RXINEC Received IN Data Interrupt Disable **/
#define USBHS_USBHS_HSTPIPIDR[9]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpipinrq[0] USBHSHSTPIPINRQ[0] Host Pipe IN Request Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPINRQ[0]_INMODE IN Request Mode **/
#define USBHS_USBHS_HSTPIPINRQ[0]_INMODE		(1 << 8)

#define USBHS_USBHS_HSTPIPINRQ[0]_INRQ_SHIFT		0
#define USBHS_USBHS_HSTPIPINRQ[0]_INRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipinrq[0]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstpipinrq[1] USBHSHSTPIPINRQ[1] Host Pipe IN Request Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPINRQ[1]_INMODE IN Request Mode **/
#define USBHS_USBHS_HSTPIPINRQ[1]_INMODE		(1 << 8)

#define USBHS_USBHS_HSTPIPINRQ[1]_INRQ_SHIFT		0
#define USBHS_USBHS_HSTPIPINRQ[1]_INRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipinrq[1]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstpipinrq[2] USBHSHSTPIPINRQ[2] Host Pipe IN Request Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPINRQ[2]_INMODE IN Request Mode **/
#define USBHS_USBHS_HSTPIPINRQ[2]_INMODE		(1 << 8)

#define USBHS_USBHS_HSTPIPINRQ[2]_INRQ_SHIFT		0
#define USBHS_USBHS_HSTPIPINRQ[2]_INRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipinrq[2]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstpipinrq[3] USBHSHSTPIPINRQ[3] Host Pipe IN Request Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPINRQ[3]_INMODE IN Request Mode **/
#define USBHS_USBHS_HSTPIPINRQ[3]_INMODE		(1 << 8)

#define USBHS_USBHS_HSTPIPINRQ[3]_INRQ_SHIFT		0
#define USBHS_USBHS_HSTPIPINRQ[3]_INRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipinrq[3]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstpipinrq[4] USBHSHSTPIPINRQ[4] Host Pipe IN Request Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPINRQ[4]_INMODE IN Request Mode **/
#define USBHS_USBHS_HSTPIPINRQ[4]_INMODE		(1 << 8)

#define USBHS_USBHS_HSTPIPINRQ[4]_INRQ_SHIFT		0
#define USBHS_USBHS_HSTPIPINRQ[4]_INRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipinrq[4]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstpipinrq[5] USBHSHSTPIPINRQ[5] Host Pipe IN Request Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPINRQ[5]_INMODE IN Request Mode **/
#define USBHS_USBHS_HSTPIPINRQ[5]_INMODE		(1 << 8)

#define USBHS_USBHS_HSTPIPINRQ[5]_INRQ_SHIFT		0
#define USBHS_USBHS_HSTPIPINRQ[5]_INRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipinrq[5]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstpipinrq[6] USBHSHSTPIPINRQ[6] Host Pipe IN Request Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPINRQ[6]_INMODE IN Request Mode **/
#define USBHS_USBHS_HSTPIPINRQ[6]_INMODE		(1 << 8)

#define USBHS_USBHS_HSTPIPINRQ[6]_INRQ_SHIFT		0
#define USBHS_USBHS_HSTPIPINRQ[6]_INRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipinrq[6]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstpipinrq[7] USBHSHSTPIPINRQ[7] Host Pipe IN Request Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPINRQ[7]_INMODE IN Request Mode **/
#define USBHS_USBHS_HSTPIPINRQ[7]_INMODE		(1 << 8)

#define USBHS_USBHS_HSTPIPINRQ[7]_INRQ_SHIFT		0
#define USBHS_USBHS_HSTPIPINRQ[7]_INRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipinrq[7]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstpipinrq[8] USBHSHSTPIPINRQ[8] Host Pipe IN Request Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPINRQ[8]_INMODE IN Request Mode **/
#define USBHS_USBHS_HSTPIPINRQ[8]_INMODE		(1 << 8)

#define USBHS_USBHS_HSTPIPINRQ[8]_INRQ_SHIFT		0
#define USBHS_USBHS_HSTPIPINRQ[8]_INRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipinrq[8]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstpipinrq[9] USBHSHSTPIPINRQ[9] Host Pipe IN Request Register (n = 0) 0
@{*/

/** USBHS_USBHS_HSTPIPINRQ[9]_INMODE IN Request Mode **/
#define USBHS_USBHS_HSTPIPINRQ[9]_INMODE		(1 << 8)

#define USBHS_USBHS_HSTPIPINRQ[9]_INRQ_SHIFT		0
#define USBHS_USBHS_HSTPIPINRQ[9]_INRQ_MASK		0xff
/** @defgroup usbhs_usbhs_hstpipinrq[9]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstpiperr[0] USBHSHSTPIPERR[0] Host Pipe Error Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPERR[0]_COUNTER_SHIFT		5
#define USBHS_USBHS_HSTPIPERR[0]_COUNTER_MASK		0x03
/** @defgroup usbhs_usbhs_hstpiperr[0]_counter COUNTER Error Counter
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPERR[0]_CRC16 CRC16 Error **/
#define USBHS_USBHS_HSTPIPERR[0]_CRC16		(1 << 4)
/** USBHS_USBHS_HSTPIPERR[0]_TIMEOUT Time-Out Error **/
#define USBHS_USBHS_HSTPIPERR[0]_TIMEOUT		(1 << 3)
/** USBHS_USBHS_HSTPIPERR[0]_PID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[0]_PID		(1 << 2)
/** USBHS_USBHS_HSTPIPERR[0]_DATAPID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[0]_DATAPID		(1 << 1)
/** USBHS_USBHS_HSTPIPERR[0]_DATATGL Data Toggle Error **/
#define USBHS_USBHS_HSTPIPERR[0]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpiperr[1] USBHSHSTPIPERR[1] Host Pipe Error Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPERR[1]_COUNTER_SHIFT		5
#define USBHS_USBHS_HSTPIPERR[1]_COUNTER_MASK		0x03
/** @defgroup usbhs_usbhs_hstpiperr[1]_counter COUNTER Error Counter
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPERR[1]_CRC16 CRC16 Error **/
#define USBHS_USBHS_HSTPIPERR[1]_CRC16		(1 << 4)
/** USBHS_USBHS_HSTPIPERR[1]_TIMEOUT Time-Out Error **/
#define USBHS_USBHS_HSTPIPERR[1]_TIMEOUT		(1 << 3)
/** USBHS_USBHS_HSTPIPERR[1]_PID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[1]_PID		(1 << 2)
/** USBHS_USBHS_HSTPIPERR[1]_DATAPID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[1]_DATAPID		(1 << 1)
/** USBHS_USBHS_HSTPIPERR[1]_DATATGL Data Toggle Error **/
#define USBHS_USBHS_HSTPIPERR[1]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpiperr[2] USBHSHSTPIPERR[2] Host Pipe Error Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPERR[2]_COUNTER_SHIFT		5
#define USBHS_USBHS_HSTPIPERR[2]_COUNTER_MASK		0x03
/** @defgroup usbhs_usbhs_hstpiperr[2]_counter COUNTER Error Counter
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPERR[2]_CRC16 CRC16 Error **/
#define USBHS_USBHS_HSTPIPERR[2]_CRC16		(1 << 4)
/** USBHS_USBHS_HSTPIPERR[2]_TIMEOUT Time-Out Error **/
#define USBHS_USBHS_HSTPIPERR[2]_TIMEOUT		(1 << 3)
/** USBHS_USBHS_HSTPIPERR[2]_PID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[2]_PID		(1 << 2)
/** USBHS_USBHS_HSTPIPERR[2]_DATAPID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[2]_DATAPID		(1 << 1)
/** USBHS_USBHS_HSTPIPERR[2]_DATATGL Data Toggle Error **/
#define USBHS_USBHS_HSTPIPERR[2]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpiperr[3] USBHSHSTPIPERR[3] Host Pipe Error Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPERR[3]_COUNTER_SHIFT		5
#define USBHS_USBHS_HSTPIPERR[3]_COUNTER_MASK		0x03
/** @defgroup usbhs_usbhs_hstpiperr[3]_counter COUNTER Error Counter
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPERR[3]_CRC16 CRC16 Error **/
#define USBHS_USBHS_HSTPIPERR[3]_CRC16		(1 << 4)
/** USBHS_USBHS_HSTPIPERR[3]_TIMEOUT Time-Out Error **/
#define USBHS_USBHS_HSTPIPERR[3]_TIMEOUT		(1 << 3)
/** USBHS_USBHS_HSTPIPERR[3]_PID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[3]_PID		(1 << 2)
/** USBHS_USBHS_HSTPIPERR[3]_DATAPID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[3]_DATAPID		(1 << 1)
/** USBHS_USBHS_HSTPIPERR[3]_DATATGL Data Toggle Error **/
#define USBHS_USBHS_HSTPIPERR[3]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpiperr[4] USBHSHSTPIPERR[4] Host Pipe Error Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPERR[4]_COUNTER_SHIFT		5
#define USBHS_USBHS_HSTPIPERR[4]_COUNTER_MASK		0x03
/** @defgroup usbhs_usbhs_hstpiperr[4]_counter COUNTER Error Counter
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPERR[4]_CRC16 CRC16 Error **/
#define USBHS_USBHS_HSTPIPERR[4]_CRC16		(1 << 4)
/** USBHS_USBHS_HSTPIPERR[4]_TIMEOUT Time-Out Error **/
#define USBHS_USBHS_HSTPIPERR[4]_TIMEOUT		(1 << 3)
/** USBHS_USBHS_HSTPIPERR[4]_PID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[4]_PID		(1 << 2)
/** USBHS_USBHS_HSTPIPERR[4]_DATAPID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[4]_DATAPID		(1 << 1)
/** USBHS_USBHS_HSTPIPERR[4]_DATATGL Data Toggle Error **/
#define USBHS_USBHS_HSTPIPERR[4]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpiperr[5] USBHSHSTPIPERR[5] Host Pipe Error Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPERR[5]_COUNTER_SHIFT		5
#define USBHS_USBHS_HSTPIPERR[5]_COUNTER_MASK		0x03
/** @defgroup usbhs_usbhs_hstpiperr[5]_counter COUNTER Error Counter
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPERR[5]_CRC16 CRC16 Error **/
#define USBHS_USBHS_HSTPIPERR[5]_CRC16		(1 << 4)
/** USBHS_USBHS_HSTPIPERR[5]_TIMEOUT Time-Out Error **/
#define USBHS_USBHS_HSTPIPERR[5]_TIMEOUT		(1 << 3)
/** USBHS_USBHS_HSTPIPERR[5]_PID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[5]_PID		(1 << 2)
/** USBHS_USBHS_HSTPIPERR[5]_DATAPID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[5]_DATAPID		(1 << 1)
/** USBHS_USBHS_HSTPIPERR[5]_DATATGL Data Toggle Error **/
#define USBHS_USBHS_HSTPIPERR[5]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpiperr[6] USBHSHSTPIPERR[6] Host Pipe Error Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPERR[6]_COUNTER_SHIFT		5
#define USBHS_USBHS_HSTPIPERR[6]_COUNTER_MASK		0x03
/** @defgroup usbhs_usbhs_hstpiperr[6]_counter COUNTER Error Counter
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPERR[6]_CRC16 CRC16 Error **/
#define USBHS_USBHS_HSTPIPERR[6]_CRC16		(1 << 4)
/** USBHS_USBHS_HSTPIPERR[6]_TIMEOUT Time-Out Error **/
#define USBHS_USBHS_HSTPIPERR[6]_TIMEOUT		(1 << 3)
/** USBHS_USBHS_HSTPIPERR[6]_PID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[6]_PID		(1 << 2)
/** USBHS_USBHS_HSTPIPERR[6]_DATAPID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[6]_DATAPID		(1 << 1)
/** USBHS_USBHS_HSTPIPERR[6]_DATATGL Data Toggle Error **/
#define USBHS_USBHS_HSTPIPERR[6]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpiperr[7] USBHSHSTPIPERR[7] Host Pipe Error Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPERR[7]_COUNTER_SHIFT		5
#define USBHS_USBHS_HSTPIPERR[7]_COUNTER_MASK		0x03
/** @defgroup usbhs_usbhs_hstpiperr[7]_counter COUNTER Error Counter
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPERR[7]_CRC16 CRC16 Error **/
#define USBHS_USBHS_HSTPIPERR[7]_CRC16		(1 << 4)
/** USBHS_USBHS_HSTPIPERR[7]_TIMEOUT Time-Out Error **/
#define USBHS_USBHS_HSTPIPERR[7]_TIMEOUT		(1 << 3)
/** USBHS_USBHS_HSTPIPERR[7]_PID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[7]_PID		(1 << 2)
/** USBHS_USBHS_HSTPIPERR[7]_DATAPID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[7]_DATAPID		(1 << 1)
/** USBHS_USBHS_HSTPIPERR[7]_DATATGL Data Toggle Error **/
#define USBHS_USBHS_HSTPIPERR[7]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpiperr[8] USBHSHSTPIPERR[8] Host Pipe Error Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPERR[8]_COUNTER_SHIFT		5
#define USBHS_USBHS_HSTPIPERR[8]_COUNTER_MASK		0x03
/** @defgroup usbhs_usbhs_hstpiperr[8]_counter COUNTER Error Counter
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPERR[8]_CRC16 CRC16 Error **/
#define USBHS_USBHS_HSTPIPERR[8]_CRC16		(1 << 4)
/** USBHS_USBHS_HSTPIPERR[8]_TIMEOUT Time-Out Error **/
#define USBHS_USBHS_HSTPIPERR[8]_TIMEOUT		(1 << 3)
/** USBHS_USBHS_HSTPIPERR[8]_PID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[8]_PID		(1 << 2)
/** USBHS_USBHS_HSTPIPERR[8]_DATAPID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[8]_DATAPID		(1 << 1)
/** USBHS_USBHS_HSTPIPERR[8]_DATATGL Data Toggle Error **/
#define USBHS_USBHS_HSTPIPERR[8]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstpiperr[9] USBHSHSTPIPERR[9] Host Pipe Error Register (n = 0) 0
@{*/


#define USBHS_USBHS_HSTPIPERR[9]_COUNTER_SHIFT		5
#define USBHS_USBHS_HSTPIPERR[9]_COUNTER_MASK		0x03
/** @defgroup usbhs_usbhs_hstpiperr[9]_counter COUNTER Error Counter
@{*/
/**@}*/

/** USBHS_USBHS_HSTPIPERR[9]_CRC16 CRC16 Error **/
#define USBHS_USBHS_HSTPIPERR[9]_CRC16		(1 << 4)
/** USBHS_USBHS_HSTPIPERR[9]_TIMEOUT Time-Out Error **/
#define USBHS_USBHS_HSTPIPERR[9]_TIMEOUT		(1 << 3)
/** USBHS_USBHS_HSTPIPERR[9]_PID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[9]_PID		(1 << 2)
/** USBHS_USBHS_HSTPIPERR[9]_DATAPID Data PID Error **/
#define USBHS_USBHS_HSTPIPERR[9]_DATAPID		(1 << 1)
/** USBHS_USBHS_HSTPIPERR[9]_DATATGL Data Toggle Error **/
#define USBHS_USBHS_HSTPIPERR[9]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[0]_usbhs_hstdmanxtdsc USBHSHSTDMA[0]USBHSHSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[0]_usbhs_hstdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[0]_usbhs_hstdmaaddress USBHSHSTDMA[0]USBHSHSTDMAADDRESS Host DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[0]_usbhs_hstdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[0]_usbhs_hstdmacontrol USBHSHSTDMA[0]USBHSHSTDMACONTROL Host DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[0]_usbhs_hstdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[0]_usbhs_hstdmastatus USBHSHSTDMA[0]USBHSHSTDMASTATUS Host DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[0]_usbhs_hstdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_HSTDMA[0]_USBHS_HSTDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[1]_usbhs_hstdmanxtdsc USBHSHSTDMA[1]USBHSHSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[1]_usbhs_hstdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[1]_usbhs_hstdmaaddress USBHSHSTDMA[1]USBHSHSTDMAADDRESS Host DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[1]_usbhs_hstdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[1]_usbhs_hstdmacontrol USBHSHSTDMA[1]USBHSHSTDMACONTROL Host DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[1]_usbhs_hstdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[1]_usbhs_hstdmastatus USBHSHSTDMA[1]USBHSHSTDMASTATUS Host DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[1]_usbhs_hstdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_HSTDMA[1]_USBHS_HSTDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[2]_usbhs_hstdmanxtdsc USBHSHSTDMA[2]USBHSHSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[2]_usbhs_hstdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[2]_usbhs_hstdmaaddress USBHSHSTDMA[2]USBHSHSTDMAADDRESS Host DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[2]_usbhs_hstdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[2]_usbhs_hstdmacontrol USBHSHSTDMA[2]USBHSHSTDMACONTROL Host DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[2]_usbhs_hstdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[2]_usbhs_hstdmastatus USBHSHSTDMA[2]USBHSHSTDMASTATUS Host DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[2]_usbhs_hstdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_HSTDMA[2]_USBHS_HSTDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[3]_usbhs_hstdmanxtdsc USBHSHSTDMA[3]USBHSHSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[3]_usbhs_hstdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[3]_usbhs_hstdmaaddress USBHSHSTDMA[3]USBHSHSTDMAADDRESS Host DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[3]_usbhs_hstdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[3]_usbhs_hstdmacontrol USBHSHSTDMA[3]USBHSHSTDMACONTROL Host DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[3]_usbhs_hstdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[3]_usbhs_hstdmastatus USBHSHSTDMA[3]USBHSHSTDMASTATUS Host DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[3]_usbhs_hstdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_HSTDMA[3]_USBHS_HSTDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[4]_usbhs_hstdmanxtdsc USBHSHSTDMA[4]USBHSHSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[4]_usbhs_hstdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[4]_usbhs_hstdmaaddress USBHSHSTDMA[4]USBHSHSTDMAADDRESS Host DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[4]_usbhs_hstdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[4]_usbhs_hstdmacontrol USBHSHSTDMA[4]USBHSHSTDMACONTROL Host DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[4]_usbhs_hstdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[4]_usbhs_hstdmastatus USBHSHSTDMA[4]USBHSHSTDMASTATUS Host DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[4]_usbhs_hstdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_HSTDMA[4]_USBHS_HSTDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[5]_usbhs_hstdmanxtdsc USBHSHSTDMA[5]USBHSHSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[5]_usbhs_hstdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[5]_usbhs_hstdmaaddress USBHSHSTDMA[5]USBHSHSTDMAADDRESS Host DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[5]_usbhs_hstdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[5]_usbhs_hstdmacontrol USBHSHSTDMA[5]USBHSHSTDMACONTROL Host DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[5]_usbhs_hstdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[5]_usbhs_hstdmastatus USBHSHSTDMA[5]USBHSHSTDMASTATUS Host DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[5]_usbhs_hstdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_HSTDMA[5]_USBHS_HSTDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[6]_usbhs_hstdmanxtdsc USBHSHSTDMA[6]USBHSHSTDMANXTDSC Host DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMANXTDSC_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[6]_usbhs_hstdmanxtdsc_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[6]_usbhs_hstdmaaddress USBHSHSTDMA[6]USBHSHSTDMAADDRESS Host DMA Channel Address Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMAADDRESS_BUFF_ADD_SHIFT		0
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMAADDRESS_BUFF_ADD_MASK		0xffffffff
/** @defgroup usbhs_usbhs_hstdma[6]_usbhs_hstdmaaddress_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_hstdma[6]_usbhs_hstdmacontrol USBHSHSTDMA[6]USBHSHSTDMACONTROL Host DMA Channel Control Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_BUFF_LENGTH_SHIFT		16
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_BUFF_LENGTH_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[6]_usbhs_hstdmacontrol_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_BURST_LCK Burst Lock Enable **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_BURST_LCK		(1 << 7)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_DESC_LD_IT		(1 << 6)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_END_BUFFIT End of Buffer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_END_BUFFIT		(1 << 5)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_END_TR_IT End of Transfer Interrupt Enable **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_END_TR_IT		(1 << 4)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_END_B_EN End of Buffer Enable Control **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_END_B_EN		(1 << 3)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_END_TR_EN End of Transfer Enable Control (OUT transfers only) **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_END_TR_EN		(1 << 2)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_LDNXT_DSC		(1 << 1)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_CHANN_ENB Channel Enable Command **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMACONTROL_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_hstdma[6]_usbhs_hstdmastatus USBHSHSTDMA[6]USBHSHSTDMASTATUS Host DMA Channel Status Register (n = 1)
@{*/


#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS_BUFF_COUNT_SHIFT		16
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS_BUFF_COUNT_MASK		0xffff
/** @defgroup usbhs_usbhs_hstdma[6]_usbhs_hstdmastatus_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS_DESC_LDST Descriptor Loaded Status **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS_DESC_LDST		(1 << 6)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS_END_BF_ST End of Channel Buffer Status **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS_END_BF_ST		(1 << 5)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS_END_TR_ST End of Channel Transfer Status **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS_END_TR_ST		(1 << 4)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS_CHANN_ACT Channel Active Status **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS_CHANN_ACT		(1 << 1)
/** USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS_CHANN_ENB Channel Enable Status **/
#define USBHS_USBHS_HSTDMA[6]_USBHS_HSTDMASTATUS_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_ctrl USBHSCTRL General Control Register
@{*/

/** USBHS_USBHS_CTRL_UIMOD USBHS Mode **/
#define USBHS_USBHS_CTRL_UIMOD		(1 << 25)
/** USBHS_USBHS_CTRL_UID UID Pin Enable **/
#define USBHS_USBHS_CTRL_UID		(1 << 24)
/** USBHS_USBHS_CTRL_USBE USBHS Enable **/
#define USBHS_USBHS_CTRL_USBE		(1 << 15)
/** USBHS_USBHS_CTRL_FRZCLK Freeze USB Clock **/
#define USBHS_USBHS_CTRL_FRZCLK		(1 << 14)
/** USBHS_USBHS_CTRL_VBUSHWC VBUS Hardware Control **/
#define USBHS_USBHS_CTRL_VBUSHWC		(1 << 8)
/** USBHS_USBHS_CTRL_RDERRE Remote Device Connection Error Interrupt Enable **/
#define USBHS_USBHS_CTRL_RDERRE		(1 << 4)

/**@}*/

/** @defgroup usbhs_usbhs_sr USBHSSR General Status Register
@{*/

/** USBHS_USBHS_SR_CLKUSABLE UTMI Clock Usable **/
#define USBHS_USBHS_SR_CLKUSABLE		(1 << 14)

#define USBHS_USBHS_SR_SPEED_SHIFT		12
#define USBHS_USBHS_SR_SPEED_MASK		0x03
/** @defgroup usbhs_usbhs_sr_speed SPEED Speed Status (Device mode only)
@{*/
/**@}*/

/** USBHS_USBHS_SR_RDERRI Remote Device Connection Error Interrupt (Host mode only) **/
#define USBHS_USBHS_SR_RDERRI		(1 << 4)

/**@}*/

/** @defgroup usbhs_usbhs_scr USBHSSCR General Status Clear Register
@{*/

/** USBHS_USBHS_SCR_RDERRIC Remote Device Connection Error Interrupt Clear **/
#define USBHS_USBHS_SCR_RDERRIC		(1 << 4)

/**@}*/

/** @defgroup usbhs_usbhs_sfr USBHSSFR General Status Set Register
@{*/

/** USBHS_USBHS_SFR_VBUSRQS VBUS Request Set **/
#define USBHS_USBHS_SFR_VBUSRQS		(1 << 9)
/** USBHS_USBHS_SFR_RDERRIS Remote Device Connection Error Interrupt Set **/
#define USBHS_USBHS_SFR_RDERRIS		(1 << 4)

/**@}*/

/** @defgroup usbhs_usbhs_tsta1 USBHSTSTA1 General Test A1 Register
@{*/

/** USBHS_USBHS_TSTA1_LoadSOFCnt Load SOF Counter **/
#define USBHS_USBHS_TSTA1_LoadSOFCnt		(1 << 31)

#define USBHS_USBHS_TSTA1_SOFCntMa1_SHIFT		24
#define USBHS_USBHS_TSTA1_SOFCntMa1_MASK		0x7f
/** @defgroup usbhs_usbhs_tsta1_sofcntma1 SOFCntMa1 SOF Counter Max
@{*/
/**@}*/

/** USBHS_USBHS_TSTA1_LoadCntB Load CounterB **/
#define USBHS_USBHS_TSTA1_LoadCntB		(1 << 23)

#define USBHS_USBHS_TSTA1_CounterB_SHIFT		16
#define USBHS_USBHS_TSTA1_CounterB_MASK		0x3f
/** @defgroup usbhs_usbhs_tsta1_counterb CounterB Counter B
@{*/
/**@}*/

/** USBHS_USBHS_TSTA1_LoadCntA Load CounterA **/
#define USBHS_USBHS_TSTA1_LoadCntA		(1 << 15)

#define USBHS_USBHS_TSTA1_CounterA_SHIFT		0
#define USBHS_USBHS_TSTA1_CounterA_MASK		0x7fff
/** @defgroup usbhs_usbhs_tsta1_countera CounterA Counter A
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_tsta2 USBHSTSTA2 General Test A2 Register
@{*/

/** USBHS_USBHS_TSTA2_RemovePUWhenTX Remove Pull-up When TX **/
#define USBHS_USBHS_TSTA2_RemovePUWhenTX		(1 << 9)
/** USBHS_USBHS_TSTA2_ForceHSRst_50ms Force HS Reset to 50 ms **/
#define USBHS_USBHS_TSTA2_ForceHSRst_50ms		(1 << 7)
/** USBHS_USBHS_TSTA2_HostHSDisconnectDisable Host HS Disconnect Disable **/
#define USBHS_USBHS_TSTA2_HostHSDisconnectDisable		(1 << 6)
/** USBHS_USBHS_TSTA2_ByPassDpll Bypass DPLL **/
#define USBHS_USBHS_TSTA2_ByPassDpll		(1 << 5)
/** USBHS_USBHS_TSTA2_ForceSuspendMTo1 Force SuspendM to 1 **/
#define USBHS_USBHS_TSTA2_ForceSuspendMTo1		(1 << 4)
/** USBHS_USBHS_TSTA2_DisableGatedClock Disable Gated Clock **/
#define USBHS_USBHS_TSTA2_DisableGatedClock		(1 << 3)
/** USBHS_USBHS_TSTA2_LoopBackMode Loop-back Mode **/
#define USBHS_USBHS_TSTA2_LoopBackMode		(1 << 2)
/** USBHS_USBHS_TSTA2_HSSerialMode HS Serial Mode **/
#define USBHS_USBHS_TSTA2_HSSerialMode		(1 << 1)
/** USBHS_USBHS_TSTA2_FullDetachEn Full Detach Enable **/
#define USBHS_USBHS_TSTA2_FullDetachEn		(1 << 0)

/**@}*/

/** @defgroup usbhs_usbhs_version USBHSVERSION General Version Register
@{*/


#define USBHS_USBHS_VERSION_MFN_SHIFT		16
#define USBHS_USBHS_VERSION_MFN_MASK		0x0f
/** @defgroup usbhs_usbhs_version_mfn MFN Metal Fix Number
@{*/
/**@}*/


#define USBHS_USBHS_VERSION_VERSION_SHIFT		0
#define USBHS_USBHS_VERSION_VERSION_MASK		0xfff
/** @defgroup usbhs_usbhs_version_version VERSION Version Number
@{*/
/**@}*/


/**@}*/

/** @defgroup usbhs_usbhs_fsm USBHSFSM General Finite State Machine Register
@{*/


#define USBHS_USBHS_FSM_DRDSTATE_SHIFT		0
#define USBHS_USBHS_FSM_DRDSTATE_MASK		0x0f
/** @defgroup usbhs_usbhs_fsm_drdstate DRDSTATE Dual Role Device State
@{*/
/**@}*/


/**@}*/

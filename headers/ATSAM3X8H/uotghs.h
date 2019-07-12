#pragma once 

/* --- UOTGHS: USB On-The-Go Interface ------------------------------ */

/** @defgroup uotghs_registers USB On-The-Go Interface Register
@{*/

/** UOTGHS_DEVCTRL Device General Control Register **/
#define UOTGHS_DEVCTRL			MMIO32(UOTGHS_BASE + 0x00)
/** UOTGHS_DEVISR Device Global Interrupt Status Register **/
#define UOTGHS_DEVISR			MMIO32(UOTGHS_BASE + 0x04)
/** UOTGHS_DEVICR Device Global Interrupt Clear Register **/
#define UOTGHS_DEVICR			MMIO32(UOTGHS_BASE + 0x08)
/** UOTGHS_DEVIFR Device Global Interrupt Set Register **/
#define UOTGHS_DEVIFR			MMIO32(UOTGHS_BASE + 0x0c)
/** UOTGHS_DEVIMR Device Global Interrupt Mask Register **/
#define UOTGHS_DEVIMR			MMIO32(UOTGHS_BASE + 0x10)
/** UOTGHS_DEVIDR Device Global Interrupt Disable Register **/
#define UOTGHS_DEVIDR			MMIO32(UOTGHS_BASE + 0x14)
/** UOTGHS_DEVIER Device Global Interrupt Enable Register **/
#define UOTGHS_DEVIER			MMIO32(UOTGHS_BASE + 0x18)
/** UOTGHS_DEVEPT Device Endpoint Register **/
#define UOTGHS_DEVEPT			MMIO32(UOTGHS_BASE + 0x1c)
/** UOTGHS_DEVFNUM Device Frame Number Register **/
#define UOTGHS_DEVFNUM			MMIO32(UOTGHS_BASE + 0x20)
/** UOTGHS_DEVEPTCFG[0] Device Endpoint Configuration Register (n = 0) **/
#define UOTGHS_DEVEPTCFG[0]			MMIO32(UOTGHS_BASE + 0x100)
/** UOTGHS_DEVEPTCFG[1] Device Endpoint Configuration Register (n = 0) **/
#define UOTGHS_DEVEPTCFG[1]			MMIO32(UOTGHS_BASE + 0x104)
/** UOTGHS_DEVEPTCFG[2] Device Endpoint Configuration Register (n = 0) **/
#define UOTGHS_DEVEPTCFG[2]			MMIO32(UOTGHS_BASE + 0x108)
/** UOTGHS_DEVEPTCFG[3] Device Endpoint Configuration Register (n = 0) **/
#define UOTGHS_DEVEPTCFG[3]			MMIO32(UOTGHS_BASE + 0x10c)
/** UOTGHS_DEVEPTCFG[4] Device Endpoint Configuration Register (n = 0) **/
#define UOTGHS_DEVEPTCFG[4]			MMIO32(UOTGHS_BASE + 0x110)
/** UOTGHS_DEVEPTCFG[5] Device Endpoint Configuration Register (n = 0) **/
#define UOTGHS_DEVEPTCFG[5]			MMIO32(UOTGHS_BASE + 0x114)
/** UOTGHS_DEVEPTCFG[6] Device Endpoint Configuration Register (n = 0) **/
#define UOTGHS_DEVEPTCFG[6]			MMIO32(UOTGHS_BASE + 0x118)
/** UOTGHS_DEVEPTCFG[7] Device Endpoint Configuration Register (n = 0) **/
#define UOTGHS_DEVEPTCFG[7]			MMIO32(UOTGHS_BASE + 0x11c)
/** UOTGHS_DEVEPTCFG[8] Device Endpoint Configuration Register (n = 0) **/
#define UOTGHS_DEVEPTCFG[8]			MMIO32(UOTGHS_BASE + 0x120)
/** UOTGHS_DEVEPTCFG[9] Device Endpoint Configuration Register (n = 0) **/
#define UOTGHS_DEVEPTCFG[9]			MMIO32(UOTGHS_BASE + 0x124)
/** UOTGHS_DEVEPTISR0_ISOENPT Device Endpoint Status Register (n = 0) **/
#define UOTGHS_DEVEPTISR0_ISOENPT			MMIO32(UOTGHS_BASE + 0x130)
/** UOTGHS_DEVEPTISR[0] Device Endpoint Status Register (n = 0) **/
#define UOTGHS_DEVEPTISR[0]			MMIO32(UOTGHS_BASE + 0x130)
/** UOTGHS_DEVEPTISR[1] Device Endpoint Status Register (n = 0) **/
#define UOTGHS_DEVEPTISR[1]			MMIO32(UOTGHS_BASE + 0x134)
/** UOTGHS_DEVEPTISR[2] Device Endpoint Status Register (n = 0) **/
#define UOTGHS_DEVEPTISR[2]			MMIO32(UOTGHS_BASE + 0x138)
/** UOTGHS_DEVEPTISR[3] Device Endpoint Status Register (n = 0) **/
#define UOTGHS_DEVEPTISR[3]			MMIO32(UOTGHS_BASE + 0x13c)
/** UOTGHS_DEVEPTISR[4] Device Endpoint Status Register (n = 0) **/
#define UOTGHS_DEVEPTISR[4]			MMIO32(UOTGHS_BASE + 0x140)
/** UOTGHS_DEVEPTISR[5] Device Endpoint Status Register (n = 0) **/
#define UOTGHS_DEVEPTISR[5]			MMIO32(UOTGHS_BASE + 0x144)
/** UOTGHS_DEVEPTISR[6] Device Endpoint Status Register (n = 0) **/
#define UOTGHS_DEVEPTISR[6]			MMIO32(UOTGHS_BASE + 0x148)
/** UOTGHS_DEVEPTISR[7] Device Endpoint Status Register (n = 0) **/
#define UOTGHS_DEVEPTISR[7]			MMIO32(UOTGHS_BASE + 0x14c)
/** UOTGHS_DEVEPTISR[8] Device Endpoint Status Register (n = 0) **/
#define UOTGHS_DEVEPTISR[8]			MMIO32(UOTGHS_BASE + 0x150)
/** UOTGHS_DEVEPTISR[9] Device Endpoint Status Register (n = 0) **/
#define UOTGHS_DEVEPTISR[9]			MMIO32(UOTGHS_BASE + 0x154)
/** UOTGHS_DEVEPTICR0_ISOENPT Device Endpoint Clear Register (n = 0) **/
#define UOTGHS_DEVEPTICR0_ISOENPT			MMIO32(UOTGHS_BASE + 0x160)
/** UOTGHS_DEVEPTICR[0] Device Endpoint Clear Register (n = 0) **/
#define UOTGHS_DEVEPTICR[0]			MMIO32(UOTGHS_BASE + 0x160)
/** UOTGHS_DEVEPTICR[1] Device Endpoint Clear Register (n = 0) **/
#define UOTGHS_DEVEPTICR[1]			MMIO32(UOTGHS_BASE + 0x164)
/** UOTGHS_DEVEPTICR[2] Device Endpoint Clear Register (n = 0) **/
#define UOTGHS_DEVEPTICR[2]			MMIO32(UOTGHS_BASE + 0x168)
/** UOTGHS_DEVEPTICR[3] Device Endpoint Clear Register (n = 0) **/
#define UOTGHS_DEVEPTICR[3]			MMIO32(UOTGHS_BASE + 0x16c)
/** UOTGHS_DEVEPTICR[4] Device Endpoint Clear Register (n = 0) **/
#define UOTGHS_DEVEPTICR[4]			MMIO32(UOTGHS_BASE + 0x170)
/** UOTGHS_DEVEPTICR[5] Device Endpoint Clear Register (n = 0) **/
#define UOTGHS_DEVEPTICR[5]			MMIO32(UOTGHS_BASE + 0x174)
/** UOTGHS_DEVEPTICR[6] Device Endpoint Clear Register (n = 0) **/
#define UOTGHS_DEVEPTICR[6]			MMIO32(UOTGHS_BASE + 0x178)
/** UOTGHS_DEVEPTICR[7] Device Endpoint Clear Register (n = 0) **/
#define UOTGHS_DEVEPTICR[7]			MMIO32(UOTGHS_BASE + 0x17c)
/** UOTGHS_DEVEPTICR[8] Device Endpoint Clear Register (n = 0) **/
#define UOTGHS_DEVEPTICR[8]			MMIO32(UOTGHS_BASE + 0x180)
/** UOTGHS_DEVEPTICR[9] Device Endpoint Clear Register (n = 0) **/
#define UOTGHS_DEVEPTICR[9]			MMIO32(UOTGHS_BASE + 0x184)
/** UOTGHS_DEVEPTIFR0_ISOENPT Device Endpoint Set Register (n = 0) **/
#define UOTGHS_DEVEPTIFR0_ISOENPT			MMIO32(UOTGHS_BASE + 0x190)
/** UOTGHS_DEVEPTIFR[0] Device Endpoint Set Register (n = 0) **/
#define UOTGHS_DEVEPTIFR[0]			MMIO32(UOTGHS_BASE + 0x190)
/** UOTGHS_DEVEPTIFR[1] Device Endpoint Set Register (n = 0) **/
#define UOTGHS_DEVEPTIFR[1]			MMIO32(UOTGHS_BASE + 0x194)
/** UOTGHS_DEVEPTIFR[2] Device Endpoint Set Register (n = 0) **/
#define UOTGHS_DEVEPTIFR[2]			MMIO32(UOTGHS_BASE + 0x198)
/** UOTGHS_DEVEPTIFR[3] Device Endpoint Set Register (n = 0) **/
#define UOTGHS_DEVEPTIFR[3]			MMIO32(UOTGHS_BASE + 0x19c)
/** UOTGHS_DEVEPTIFR[4] Device Endpoint Set Register (n = 0) **/
#define UOTGHS_DEVEPTIFR[4]			MMIO32(UOTGHS_BASE + 0x1a0)
/** UOTGHS_DEVEPTIFR[5] Device Endpoint Set Register (n = 0) **/
#define UOTGHS_DEVEPTIFR[5]			MMIO32(UOTGHS_BASE + 0x1a4)
/** UOTGHS_DEVEPTIFR[6] Device Endpoint Set Register (n = 0) **/
#define UOTGHS_DEVEPTIFR[6]			MMIO32(UOTGHS_BASE + 0x1a8)
/** UOTGHS_DEVEPTIFR[7] Device Endpoint Set Register (n = 0) **/
#define UOTGHS_DEVEPTIFR[7]			MMIO32(UOTGHS_BASE + 0x1ac)
/** UOTGHS_DEVEPTIFR[8] Device Endpoint Set Register (n = 0) **/
#define UOTGHS_DEVEPTIFR[8]			MMIO32(UOTGHS_BASE + 0x1b0)
/** UOTGHS_DEVEPTIFR[9] Device Endpoint Set Register (n = 0) **/
#define UOTGHS_DEVEPTIFR[9]			MMIO32(UOTGHS_BASE + 0x1b4)
/** UOTGHS_DEVEPTIMR0_ISOENPT Device Endpoint Mask Register (n = 0) **/
#define UOTGHS_DEVEPTIMR0_ISOENPT			MMIO32(UOTGHS_BASE + 0x1c0)
/** UOTGHS_DEVEPTIMR[0] Device Endpoint Mask Register (n = 0) **/
#define UOTGHS_DEVEPTIMR[0]			MMIO32(UOTGHS_BASE + 0x1c0)
/** UOTGHS_DEVEPTIMR[1] Device Endpoint Mask Register (n = 0) **/
#define UOTGHS_DEVEPTIMR[1]			MMIO32(UOTGHS_BASE + 0x1c4)
/** UOTGHS_DEVEPTIMR[2] Device Endpoint Mask Register (n = 0) **/
#define UOTGHS_DEVEPTIMR[2]			MMIO32(UOTGHS_BASE + 0x1c8)
/** UOTGHS_DEVEPTIMR[3] Device Endpoint Mask Register (n = 0) **/
#define UOTGHS_DEVEPTIMR[3]			MMIO32(UOTGHS_BASE + 0x1cc)
/** UOTGHS_DEVEPTIMR[4] Device Endpoint Mask Register (n = 0) **/
#define UOTGHS_DEVEPTIMR[4]			MMIO32(UOTGHS_BASE + 0x1d0)
/** UOTGHS_DEVEPTIMR[5] Device Endpoint Mask Register (n = 0) **/
#define UOTGHS_DEVEPTIMR[5]			MMIO32(UOTGHS_BASE + 0x1d4)
/** UOTGHS_DEVEPTIMR[6] Device Endpoint Mask Register (n = 0) **/
#define UOTGHS_DEVEPTIMR[6]			MMIO32(UOTGHS_BASE + 0x1d8)
/** UOTGHS_DEVEPTIMR[7] Device Endpoint Mask Register (n = 0) **/
#define UOTGHS_DEVEPTIMR[7]			MMIO32(UOTGHS_BASE + 0x1dc)
/** UOTGHS_DEVEPTIMR[8] Device Endpoint Mask Register (n = 0) **/
#define UOTGHS_DEVEPTIMR[8]			MMIO32(UOTGHS_BASE + 0x1e0)
/** UOTGHS_DEVEPTIMR[9] Device Endpoint Mask Register (n = 0) **/
#define UOTGHS_DEVEPTIMR[9]			MMIO32(UOTGHS_BASE + 0x1e4)
/** UOTGHS_DEVEPTIER0_ISOENPT Device Endpoint Enable Register (n = 0) **/
#define UOTGHS_DEVEPTIER0_ISOENPT			MMIO32(UOTGHS_BASE + 0x1f0)
/** UOTGHS_DEVEPTIER[0] Device Endpoint Enable Register (n = 0) **/
#define UOTGHS_DEVEPTIER[0]			MMIO32(UOTGHS_BASE + 0x1f0)
/** UOTGHS_DEVEPTIER[1] Device Endpoint Enable Register (n = 0) **/
#define UOTGHS_DEVEPTIER[1]			MMIO32(UOTGHS_BASE + 0x1f4)
/** UOTGHS_DEVEPTIER[2] Device Endpoint Enable Register (n = 0) **/
#define UOTGHS_DEVEPTIER[2]			MMIO32(UOTGHS_BASE + 0x1f8)
/** UOTGHS_DEVEPTIER[3] Device Endpoint Enable Register (n = 0) **/
#define UOTGHS_DEVEPTIER[3]			MMIO32(UOTGHS_BASE + 0x1fc)
/** UOTGHS_DEVEPTIER[4] Device Endpoint Enable Register (n = 0) **/
#define UOTGHS_DEVEPTIER[4]			MMIO32(UOTGHS_BASE + 0x200)
/** UOTGHS_DEVEPTIER[5] Device Endpoint Enable Register (n = 0) **/
#define UOTGHS_DEVEPTIER[5]			MMIO32(UOTGHS_BASE + 0x204)
/** UOTGHS_DEVEPTIER[6] Device Endpoint Enable Register (n = 0) **/
#define UOTGHS_DEVEPTIER[6]			MMIO32(UOTGHS_BASE + 0x208)
/** UOTGHS_DEVEPTIER[7] Device Endpoint Enable Register (n = 0) **/
#define UOTGHS_DEVEPTIER[7]			MMIO32(UOTGHS_BASE + 0x20c)
/** UOTGHS_DEVEPTIER[8] Device Endpoint Enable Register (n = 0) **/
#define UOTGHS_DEVEPTIER[8]			MMIO32(UOTGHS_BASE + 0x210)
/** UOTGHS_DEVEPTIER[9] Device Endpoint Enable Register (n = 0) **/
#define UOTGHS_DEVEPTIER[9]			MMIO32(UOTGHS_BASE + 0x214)
/** UOTGHS_DEVEPTIDR0_ISOENPT Device Endpoint Disable Register (n = 0) **/
#define UOTGHS_DEVEPTIDR0_ISOENPT			MMIO32(UOTGHS_BASE + 0x220)
/** UOTGHS_DEVEPTIDR[0] Device Endpoint Disable Register (n = 0) **/
#define UOTGHS_DEVEPTIDR[0]			MMIO32(UOTGHS_BASE + 0x220)
/** UOTGHS_DEVEPTIDR[1] Device Endpoint Disable Register (n = 0) **/
#define UOTGHS_DEVEPTIDR[1]			MMIO32(UOTGHS_BASE + 0x224)
/** UOTGHS_DEVEPTIDR[2] Device Endpoint Disable Register (n = 0) **/
#define UOTGHS_DEVEPTIDR[2]			MMIO32(UOTGHS_BASE + 0x228)
/** UOTGHS_DEVEPTIDR[3] Device Endpoint Disable Register (n = 0) **/
#define UOTGHS_DEVEPTIDR[3]			MMIO32(UOTGHS_BASE + 0x22c)
/** UOTGHS_DEVEPTIDR[4] Device Endpoint Disable Register (n = 0) **/
#define UOTGHS_DEVEPTIDR[4]			MMIO32(UOTGHS_BASE + 0x230)
/** UOTGHS_DEVEPTIDR[5] Device Endpoint Disable Register (n = 0) **/
#define UOTGHS_DEVEPTIDR[5]			MMIO32(UOTGHS_BASE + 0x234)
/** UOTGHS_DEVEPTIDR[6] Device Endpoint Disable Register (n = 0) **/
#define UOTGHS_DEVEPTIDR[6]			MMIO32(UOTGHS_BASE + 0x238)
/** UOTGHS_DEVEPTIDR[7] Device Endpoint Disable Register (n = 0) **/
#define UOTGHS_DEVEPTIDR[7]			MMIO32(UOTGHS_BASE + 0x23c)
/** UOTGHS_DEVEPTIDR[8] Device Endpoint Disable Register (n = 0) **/
#define UOTGHS_DEVEPTIDR[8]			MMIO32(UOTGHS_BASE + 0x240)
/** UOTGHS_DEVEPTIDR[9] Device Endpoint Disable Register (n = 0) **/
#define UOTGHS_DEVEPTIDR[9]			MMIO32(UOTGHS_BASE + 0x244)
/** UOTGHS_DEVDMANXTDSC1 Device DMA Channel Next Descriptor Address Register (n = 1) **/
#define UOTGHS_DEVDMANXTDSC1			MMIO32(UOTGHS_BASE + 0x310)
/** UOTGHS_DEVDMAADDRESS1 Device DMA Channel Address Register (n = 1) **/
#define UOTGHS_DEVDMAADDRESS1			MMIO32(UOTGHS_BASE + 0x314)
/** UOTGHS_DEVDMACONTROL1 Device DMA Channel Control Register (n = 1) **/
#define UOTGHS_DEVDMACONTROL1			MMIO32(UOTGHS_BASE + 0x318)
/** UOTGHS_DEVDMASTATUS1 Device DMA Channel Status Register (n = 1) **/
#define UOTGHS_DEVDMASTATUS1			MMIO32(UOTGHS_BASE + 0x31c)
/** UOTGHS_DEVDMANXTDSC2 Device DMA Channel Next Descriptor Address Register (n = 2) **/
#define UOTGHS_DEVDMANXTDSC2			MMIO32(UOTGHS_BASE + 0x320)
/** UOTGHS_DEVDMAADDRESS2 Device DMA Channel Address Register (n = 2) **/
#define UOTGHS_DEVDMAADDRESS2			MMIO32(UOTGHS_BASE + 0x324)
/** UOTGHS_DEVDMACONTROL2 Device DMA Channel Control Register (n = 2) **/
#define UOTGHS_DEVDMACONTROL2			MMIO32(UOTGHS_BASE + 0x328)
/** UOTGHS_DEVDMASTATUS2 Device DMA Channel Status Register (n = 2) **/
#define UOTGHS_DEVDMASTATUS2			MMIO32(UOTGHS_BASE + 0x32c)
/** UOTGHS_DEVDMANXTDSC3 Device DMA Channel Next Descriptor Address Register (n = 3) **/
#define UOTGHS_DEVDMANXTDSC3			MMIO32(UOTGHS_BASE + 0x330)
/** UOTGHS_DEVDMAADDRESS3 Device DMA Channel Address Register (n = 3) **/
#define UOTGHS_DEVDMAADDRESS3			MMIO32(UOTGHS_BASE + 0x334)
/** UOTGHS_DEVDMACONTROL3 Device DMA Channel Control Register (n = 3) **/
#define UOTGHS_DEVDMACONTROL3			MMIO32(UOTGHS_BASE + 0x338)
/** UOTGHS_DEVDMASTATUS3 Device DMA Channel Status Register (n = 3) **/
#define UOTGHS_DEVDMASTATUS3			MMIO32(UOTGHS_BASE + 0x33c)
/** UOTGHS_DEVDMANXTDSC4 Device DMA Channel Next Descriptor Address Register (n = 4) **/
#define UOTGHS_DEVDMANXTDSC4			MMIO32(UOTGHS_BASE + 0x340)
/** UOTGHS_DEVDMAADDRESS4 Device DMA Channel Address Register (n = 4) **/
#define UOTGHS_DEVDMAADDRESS4			MMIO32(UOTGHS_BASE + 0x344)
/** UOTGHS_DEVDMACONTROL4 Device DMA Channel Control Register (n = 4) **/
#define UOTGHS_DEVDMACONTROL4			MMIO32(UOTGHS_BASE + 0x348)
/** UOTGHS_DEVDMASTATUS4 Device DMA Channel Status Register (n = 4) **/
#define UOTGHS_DEVDMASTATUS4			MMIO32(UOTGHS_BASE + 0x34c)
/** UOTGHS_DEVDMANXTDSC5 Device DMA Channel Next Descriptor Address Register (n = 5) **/
#define UOTGHS_DEVDMANXTDSC5			MMIO32(UOTGHS_BASE + 0x350)
/** UOTGHS_DEVDMAADDRESS5 Device DMA Channel Address Register (n = 5) **/
#define UOTGHS_DEVDMAADDRESS5			MMIO32(UOTGHS_BASE + 0x354)
/** UOTGHS_DEVDMACONTROL5 Device DMA Channel Control Register (n = 5) **/
#define UOTGHS_DEVDMACONTROL5			MMIO32(UOTGHS_BASE + 0x358)
/** UOTGHS_DEVDMASTATUS5 Device DMA Channel Status Register (n = 5) **/
#define UOTGHS_DEVDMASTATUS5			MMIO32(UOTGHS_BASE + 0x35c)
/** UOTGHS_DEVDMANXTDSC6 Device DMA Channel Next Descriptor Address Register (n = 6) **/
#define UOTGHS_DEVDMANXTDSC6			MMIO32(UOTGHS_BASE + 0x360)
/** UOTGHS_DEVDMAADDRESS6 Device DMA Channel Address Register (n = 6) **/
#define UOTGHS_DEVDMAADDRESS6			MMIO32(UOTGHS_BASE + 0x364)
/** UOTGHS_DEVDMACONTROL6 Device DMA Channel Control Register (n = 6) **/
#define UOTGHS_DEVDMACONTROL6			MMIO32(UOTGHS_BASE + 0x368)
/** UOTGHS_DEVDMASTATUS6 Device DMA Channel Status Register (n = 6) **/
#define UOTGHS_DEVDMASTATUS6			MMIO32(UOTGHS_BASE + 0x36c)
/** UOTGHS_DEVDMANXTDSC7 Device DMA Channel Next Descriptor Address Register (n = 7) **/
#define UOTGHS_DEVDMANXTDSC7			MMIO32(UOTGHS_BASE + 0x370)
/** UOTGHS_DEVDMAADDRESS7 Device DMA Channel Address Register (n = 7) **/
#define UOTGHS_DEVDMAADDRESS7			MMIO32(UOTGHS_BASE + 0x374)
/** UOTGHS_DEVDMACONTROL7 Device DMA Channel Control Register (n = 7) **/
#define UOTGHS_DEVDMACONTROL7			MMIO32(UOTGHS_BASE + 0x378)
/** UOTGHS_DEVDMASTATUS7 Device DMA Channel Status Register (n = 7) **/
#define UOTGHS_DEVDMASTATUS7			MMIO32(UOTGHS_BASE + 0x37c)
/** UOTGHS_HSTCTRL Host General Control Register **/
#define UOTGHS_HSTCTRL			MMIO32(UOTGHS_BASE + 0x400)
/** UOTGHS_HSTISR Host Global Interrupt Status Register **/
#define UOTGHS_HSTISR			MMIO32(UOTGHS_BASE + 0x404)
/** UOTGHS_HSTICR Host Global Interrupt Clear Register **/
#define UOTGHS_HSTICR			MMIO32(UOTGHS_BASE + 0x408)
/** UOTGHS_HSTIFR Host Global Interrupt Set Register **/
#define UOTGHS_HSTIFR			MMIO32(UOTGHS_BASE + 0x40c)
/** UOTGHS_HSTIMR Host Global Interrupt Mask Register **/
#define UOTGHS_HSTIMR			MMIO32(UOTGHS_BASE + 0x410)
/** UOTGHS_HSTIDR Host Global Interrupt Disable Register **/
#define UOTGHS_HSTIDR			MMIO32(UOTGHS_BASE + 0x414)
/** UOTGHS_HSTIER Host Global Interrupt Enable Register **/
#define UOTGHS_HSTIER			MMIO32(UOTGHS_BASE + 0x418)
/** UOTGHS_HSTPIP Host Pipe Register **/
#define UOTGHS_HSTPIP			MMIO32(UOTGHS_BASE + 0x41c)
/** UOTGHS_HSTFNUM Host Frame Number Register **/
#define UOTGHS_HSTFNUM			MMIO32(UOTGHS_BASE + 0x420)
/** UOTGHS_HSTADDR1 Host Address 1 Register **/
#define UOTGHS_HSTADDR1			MMIO32(UOTGHS_BASE + 0x424)
/** UOTGHS_HSTADDR2 Host Address 2 Register **/
#define UOTGHS_HSTADDR2			MMIO32(UOTGHS_BASE + 0x428)
/** UOTGHS_HSTADDR3 Host Address 3 Register **/
#define UOTGHS_HSTADDR3			MMIO32(UOTGHS_BASE + 0x42c)
/** UOTGHS_HSTPIPCFG0_HSBOHSCP Host Pipe Configuration Register (n = 0) **/
#define UOTGHS_HSTPIPCFG0_HSBOHSCP			MMIO32(UOTGHS_BASE + 0x500)
/** UOTGHS_HSTPIPCFG[0] Host Pipe Configuration Register (n = 0) **/
#define UOTGHS_HSTPIPCFG[0]			MMIO32(UOTGHS_BASE + 0x500)
/** UOTGHS_HSTPIPCFG[1] Host Pipe Configuration Register (n = 0) **/
#define UOTGHS_HSTPIPCFG[1]			MMIO32(UOTGHS_BASE + 0x504)
/** UOTGHS_HSTPIPCFG[2] Host Pipe Configuration Register (n = 0) **/
#define UOTGHS_HSTPIPCFG[2]			MMIO32(UOTGHS_BASE + 0x508)
/** UOTGHS_HSTPIPCFG[3] Host Pipe Configuration Register (n = 0) **/
#define UOTGHS_HSTPIPCFG[3]			MMIO32(UOTGHS_BASE + 0x50c)
/** UOTGHS_HSTPIPCFG[4] Host Pipe Configuration Register (n = 0) **/
#define UOTGHS_HSTPIPCFG[4]			MMIO32(UOTGHS_BASE + 0x510)
/** UOTGHS_HSTPIPCFG[5] Host Pipe Configuration Register (n = 0) **/
#define UOTGHS_HSTPIPCFG[5]			MMIO32(UOTGHS_BASE + 0x514)
/** UOTGHS_HSTPIPCFG[6] Host Pipe Configuration Register (n = 0) **/
#define UOTGHS_HSTPIPCFG[6]			MMIO32(UOTGHS_BASE + 0x518)
/** UOTGHS_HSTPIPCFG[7] Host Pipe Configuration Register (n = 0) **/
#define UOTGHS_HSTPIPCFG[7]			MMIO32(UOTGHS_BASE + 0x51c)
/** UOTGHS_HSTPIPCFG[8] Host Pipe Configuration Register (n = 0) **/
#define UOTGHS_HSTPIPCFG[8]			MMIO32(UOTGHS_BASE + 0x520)
/** UOTGHS_HSTPIPCFG[9] Host Pipe Configuration Register (n = 0) **/
#define UOTGHS_HSTPIPCFG[9]			MMIO32(UOTGHS_BASE + 0x524)
/** UOTGHS_HSTPIPISR0_INTPIPES Host Pipe Status Register (n = 0) **/
#define UOTGHS_HSTPIPISR0_INTPIPES			MMIO32(UOTGHS_BASE + 0x530)
/** UOTGHS_HSTPIPISR0_ISOPIPES Host Pipe Status Register (n = 0) **/
#define UOTGHS_HSTPIPISR0_ISOPIPES			MMIO32(UOTGHS_BASE + 0x530)
/** UOTGHS_HSTPIPISR[0] Host Pipe Status Register (n = 0) **/
#define UOTGHS_HSTPIPISR[0]			MMIO32(UOTGHS_BASE + 0x530)
/** UOTGHS_HSTPIPISR[1] Host Pipe Status Register (n = 0) **/
#define UOTGHS_HSTPIPISR[1]			MMIO32(UOTGHS_BASE + 0x534)
/** UOTGHS_HSTPIPISR[2] Host Pipe Status Register (n = 0) **/
#define UOTGHS_HSTPIPISR[2]			MMIO32(UOTGHS_BASE + 0x538)
/** UOTGHS_HSTPIPISR[3] Host Pipe Status Register (n = 0) **/
#define UOTGHS_HSTPIPISR[3]			MMIO32(UOTGHS_BASE + 0x53c)
/** UOTGHS_HSTPIPISR[4] Host Pipe Status Register (n = 0) **/
#define UOTGHS_HSTPIPISR[4]			MMIO32(UOTGHS_BASE + 0x540)
/** UOTGHS_HSTPIPISR[5] Host Pipe Status Register (n = 0) **/
#define UOTGHS_HSTPIPISR[5]			MMIO32(UOTGHS_BASE + 0x544)
/** UOTGHS_HSTPIPISR[6] Host Pipe Status Register (n = 0) **/
#define UOTGHS_HSTPIPISR[6]			MMIO32(UOTGHS_BASE + 0x548)
/** UOTGHS_HSTPIPISR[7] Host Pipe Status Register (n = 0) **/
#define UOTGHS_HSTPIPISR[7]			MMIO32(UOTGHS_BASE + 0x54c)
/** UOTGHS_HSTPIPISR[8] Host Pipe Status Register (n = 0) **/
#define UOTGHS_HSTPIPISR[8]			MMIO32(UOTGHS_BASE + 0x550)
/** UOTGHS_HSTPIPISR[9] Host Pipe Status Register (n = 0) **/
#define UOTGHS_HSTPIPISR[9]			MMIO32(UOTGHS_BASE + 0x554)
/** UOTGHS_HSTPIPICR0_INTPIPES Host Pipe Clear Register (n = 0) **/
#define UOTGHS_HSTPIPICR0_INTPIPES			MMIO32(UOTGHS_BASE + 0x560)
/** UOTGHS_HSTPIPICR0_ISOPIPES Host Pipe Clear Register (n = 0) **/
#define UOTGHS_HSTPIPICR0_ISOPIPES			MMIO32(UOTGHS_BASE + 0x560)
/** UOTGHS_HSTPIPICR[0] Host Pipe Clear Register (n = 0) **/
#define UOTGHS_HSTPIPICR[0]			MMIO32(UOTGHS_BASE + 0x560)
/** UOTGHS_HSTPIPICR[1] Host Pipe Clear Register (n = 0) **/
#define UOTGHS_HSTPIPICR[1]			MMIO32(UOTGHS_BASE + 0x564)
/** UOTGHS_HSTPIPICR[2] Host Pipe Clear Register (n = 0) **/
#define UOTGHS_HSTPIPICR[2]			MMIO32(UOTGHS_BASE + 0x568)
/** UOTGHS_HSTPIPICR[3] Host Pipe Clear Register (n = 0) **/
#define UOTGHS_HSTPIPICR[3]			MMIO32(UOTGHS_BASE + 0x56c)
/** UOTGHS_HSTPIPICR[4] Host Pipe Clear Register (n = 0) **/
#define UOTGHS_HSTPIPICR[4]			MMIO32(UOTGHS_BASE + 0x570)
/** UOTGHS_HSTPIPICR[5] Host Pipe Clear Register (n = 0) **/
#define UOTGHS_HSTPIPICR[5]			MMIO32(UOTGHS_BASE + 0x574)
/** UOTGHS_HSTPIPICR[6] Host Pipe Clear Register (n = 0) **/
#define UOTGHS_HSTPIPICR[6]			MMIO32(UOTGHS_BASE + 0x578)
/** UOTGHS_HSTPIPICR[7] Host Pipe Clear Register (n = 0) **/
#define UOTGHS_HSTPIPICR[7]			MMIO32(UOTGHS_BASE + 0x57c)
/** UOTGHS_HSTPIPICR[8] Host Pipe Clear Register (n = 0) **/
#define UOTGHS_HSTPIPICR[8]			MMIO32(UOTGHS_BASE + 0x580)
/** UOTGHS_HSTPIPICR[9] Host Pipe Clear Register (n = 0) **/
#define UOTGHS_HSTPIPICR[9]			MMIO32(UOTGHS_BASE + 0x584)
/** UOTGHS_HSTPIPIFR0_INTPIPES Host Pipe Set Register (n = 0) **/
#define UOTGHS_HSTPIPIFR0_INTPIPES			MMIO32(UOTGHS_BASE + 0x590)
/** UOTGHS_HSTPIPIFR0_ISOPIPES Host Pipe Set Register (n = 0) **/
#define UOTGHS_HSTPIPIFR0_ISOPIPES			MMIO32(UOTGHS_BASE + 0x590)
/** UOTGHS_HSTPIPIFR[0] Host Pipe Set Register (n = 0) **/
#define UOTGHS_HSTPIPIFR[0]			MMIO32(UOTGHS_BASE + 0x590)
/** UOTGHS_HSTPIPIFR[1] Host Pipe Set Register (n = 0) **/
#define UOTGHS_HSTPIPIFR[1]			MMIO32(UOTGHS_BASE + 0x594)
/** UOTGHS_HSTPIPIFR[2] Host Pipe Set Register (n = 0) **/
#define UOTGHS_HSTPIPIFR[2]			MMIO32(UOTGHS_BASE + 0x598)
/** UOTGHS_HSTPIPIFR[3] Host Pipe Set Register (n = 0) **/
#define UOTGHS_HSTPIPIFR[3]			MMIO32(UOTGHS_BASE + 0x59c)
/** UOTGHS_HSTPIPIFR[4] Host Pipe Set Register (n = 0) **/
#define UOTGHS_HSTPIPIFR[4]			MMIO32(UOTGHS_BASE + 0x5a0)
/** UOTGHS_HSTPIPIFR[5] Host Pipe Set Register (n = 0) **/
#define UOTGHS_HSTPIPIFR[5]			MMIO32(UOTGHS_BASE + 0x5a4)
/** UOTGHS_HSTPIPIFR[6] Host Pipe Set Register (n = 0) **/
#define UOTGHS_HSTPIPIFR[6]			MMIO32(UOTGHS_BASE + 0x5a8)
/** UOTGHS_HSTPIPIFR[7] Host Pipe Set Register (n = 0) **/
#define UOTGHS_HSTPIPIFR[7]			MMIO32(UOTGHS_BASE + 0x5ac)
/** UOTGHS_HSTPIPIFR[8] Host Pipe Set Register (n = 0) **/
#define UOTGHS_HSTPIPIFR[8]			MMIO32(UOTGHS_BASE + 0x5b0)
/** UOTGHS_HSTPIPIFR[9] Host Pipe Set Register (n = 0) **/
#define UOTGHS_HSTPIPIFR[9]			MMIO32(UOTGHS_BASE + 0x5b4)
/** UOTGHS_HSTPIPIMR0_INTPIPES Host Pipe Mask Register (n = 0) **/
#define UOTGHS_HSTPIPIMR0_INTPIPES			MMIO32(UOTGHS_BASE + 0x5c0)
/** UOTGHS_HSTPIPIMR0_ISOPIPES Host Pipe Mask Register (n = 0) **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES			MMIO32(UOTGHS_BASE + 0x5c0)
/** UOTGHS_HSTPIPIMR[0] Host Pipe Mask Register (n = 0) **/
#define UOTGHS_HSTPIPIMR[0]			MMIO32(UOTGHS_BASE + 0x5c0)
/** UOTGHS_HSTPIPIMR[1] Host Pipe Mask Register (n = 0) **/
#define UOTGHS_HSTPIPIMR[1]			MMIO32(UOTGHS_BASE + 0x5c4)
/** UOTGHS_HSTPIPIMR[2] Host Pipe Mask Register (n = 0) **/
#define UOTGHS_HSTPIPIMR[2]			MMIO32(UOTGHS_BASE + 0x5c8)
/** UOTGHS_HSTPIPIMR[3] Host Pipe Mask Register (n = 0) **/
#define UOTGHS_HSTPIPIMR[3]			MMIO32(UOTGHS_BASE + 0x5cc)
/** UOTGHS_HSTPIPIMR[4] Host Pipe Mask Register (n = 0) **/
#define UOTGHS_HSTPIPIMR[4]			MMIO32(UOTGHS_BASE + 0x5d0)
/** UOTGHS_HSTPIPIMR[5] Host Pipe Mask Register (n = 0) **/
#define UOTGHS_HSTPIPIMR[5]			MMIO32(UOTGHS_BASE + 0x5d4)
/** UOTGHS_HSTPIPIMR[6] Host Pipe Mask Register (n = 0) **/
#define UOTGHS_HSTPIPIMR[6]			MMIO32(UOTGHS_BASE + 0x5d8)
/** UOTGHS_HSTPIPIMR[7] Host Pipe Mask Register (n = 0) **/
#define UOTGHS_HSTPIPIMR[7]			MMIO32(UOTGHS_BASE + 0x5dc)
/** UOTGHS_HSTPIPIMR[8] Host Pipe Mask Register (n = 0) **/
#define UOTGHS_HSTPIPIMR[8]			MMIO32(UOTGHS_BASE + 0x5e0)
/** UOTGHS_HSTPIPIMR[9] Host Pipe Mask Register (n = 0) **/
#define UOTGHS_HSTPIPIMR[9]			MMIO32(UOTGHS_BASE + 0x5e4)
/** UOTGHS_HSTPIPIER0_INTPIPES Host Pipe Enable Register (n = 0) **/
#define UOTGHS_HSTPIPIER0_INTPIPES			MMIO32(UOTGHS_BASE + 0x5f0)
/** UOTGHS_HSTPIPIER0_ISOPIPES Host Pipe Enable Register (n = 0) **/
#define UOTGHS_HSTPIPIER0_ISOPIPES			MMIO32(UOTGHS_BASE + 0x5f0)
/** UOTGHS_HSTPIPIER[0] Host Pipe Enable Register (n = 0) **/
#define UOTGHS_HSTPIPIER[0]			MMIO32(UOTGHS_BASE + 0x5f0)
/** UOTGHS_HSTPIPIER[1] Host Pipe Enable Register (n = 0) **/
#define UOTGHS_HSTPIPIER[1]			MMIO32(UOTGHS_BASE + 0x5f4)
/** UOTGHS_HSTPIPIER[2] Host Pipe Enable Register (n = 0) **/
#define UOTGHS_HSTPIPIER[2]			MMIO32(UOTGHS_BASE + 0x5f8)
/** UOTGHS_HSTPIPIER[3] Host Pipe Enable Register (n = 0) **/
#define UOTGHS_HSTPIPIER[3]			MMIO32(UOTGHS_BASE + 0x5fc)
/** UOTGHS_HSTPIPIER[4] Host Pipe Enable Register (n = 0) **/
#define UOTGHS_HSTPIPIER[4]			MMIO32(UOTGHS_BASE + 0x600)
/** UOTGHS_HSTPIPIER[5] Host Pipe Enable Register (n = 0) **/
#define UOTGHS_HSTPIPIER[5]			MMIO32(UOTGHS_BASE + 0x604)
/** UOTGHS_HSTPIPIER[6] Host Pipe Enable Register (n = 0) **/
#define UOTGHS_HSTPIPIER[6]			MMIO32(UOTGHS_BASE + 0x608)
/** UOTGHS_HSTPIPIER[7] Host Pipe Enable Register (n = 0) **/
#define UOTGHS_HSTPIPIER[7]			MMIO32(UOTGHS_BASE + 0x60c)
/** UOTGHS_HSTPIPIER[8] Host Pipe Enable Register (n = 0) **/
#define UOTGHS_HSTPIPIER[8]			MMIO32(UOTGHS_BASE + 0x610)
/** UOTGHS_HSTPIPIER[9] Host Pipe Enable Register (n = 0) **/
#define UOTGHS_HSTPIPIER[9]			MMIO32(UOTGHS_BASE + 0x614)
/** UOTGHS_HSTPIPIDR0_INTPIPES Host Pipe Disable Register (n = 0) **/
#define UOTGHS_HSTPIPIDR0_INTPIPES			MMIO32(UOTGHS_BASE + 0x620)
/** UOTGHS_HSTPIPIDR0_ISOPIPES Host Pipe Disable Register (n = 0) **/
#define UOTGHS_HSTPIPIDR0_ISOPIPES			MMIO32(UOTGHS_BASE + 0x620)
/** UOTGHS_HSTPIPIDR[0] Host Pipe Disable Register (n = 0) **/
#define UOTGHS_HSTPIPIDR[0]			MMIO32(UOTGHS_BASE + 0x620)
/** UOTGHS_HSTPIPIDR[1] Host Pipe Disable Register (n = 0) **/
#define UOTGHS_HSTPIPIDR[1]			MMIO32(UOTGHS_BASE + 0x624)
/** UOTGHS_HSTPIPIDR[2] Host Pipe Disable Register (n = 0) **/
#define UOTGHS_HSTPIPIDR[2]			MMIO32(UOTGHS_BASE + 0x628)
/** UOTGHS_HSTPIPIDR[3] Host Pipe Disable Register (n = 0) **/
#define UOTGHS_HSTPIPIDR[3]			MMIO32(UOTGHS_BASE + 0x62c)
/** UOTGHS_HSTPIPIDR[4] Host Pipe Disable Register (n = 0) **/
#define UOTGHS_HSTPIPIDR[4]			MMIO32(UOTGHS_BASE + 0x630)
/** UOTGHS_HSTPIPIDR[5] Host Pipe Disable Register (n = 0) **/
#define UOTGHS_HSTPIPIDR[5]			MMIO32(UOTGHS_BASE + 0x634)
/** UOTGHS_HSTPIPIDR[6] Host Pipe Disable Register (n = 0) **/
#define UOTGHS_HSTPIPIDR[6]			MMIO32(UOTGHS_BASE + 0x638)
/** UOTGHS_HSTPIPIDR[7] Host Pipe Disable Register (n = 0) **/
#define UOTGHS_HSTPIPIDR[7]			MMIO32(UOTGHS_BASE + 0x63c)
/** UOTGHS_HSTPIPIDR[8] Host Pipe Disable Register (n = 0) **/
#define UOTGHS_HSTPIPIDR[8]			MMIO32(UOTGHS_BASE + 0x640)
/** UOTGHS_HSTPIPIDR[9] Host Pipe Disable Register (n = 0) **/
#define UOTGHS_HSTPIPIDR[9]			MMIO32(UOTGHS_BASE + 0x644)
/** UOTGHS_HSTPIPINRQ[0] Host Pipe IN Request Register (n = 0) **/
#define UOTGHS_HSTPIPINRQ[0]			MMIO32(UOTGHS_BASE + 0x650)
/** UOTGHS_HSTPIPINRQ[1] Host Pipe IN Request Register (n = 0) **/
#define UOTGHS_HSTPIPINRQ[1]			MMIO32(UOTGHS_BASE + 0x654)
/** UOTGHS_HSTPIPINRQ[2] Host Pipe IN Request Register (n = 0) **/
#define UOTGHS_HSTPIPINRQ[2]			MMIO32(UOTGHS_BASE + 0x658)
/** UOTGHS_HSTPIPINRQ[3] Host Pipe IN Request Register (n = 0) **/
#define UOTGHS_HSTPIPINRQ[3]			MMIO32(UOTGHS_BASE + 0x65c)
/** UOTGHS_HSTPIPINRQ[4] Host Pipe IN Request Register (n = 0) **/
#define UOTGHS_HSTPIPINRQ[4]			MMIO32(UOTGHS_BASE + 0x660)
/** UOTGHS_HSTPIPINRQ[5] Host Pipe IN Request Register (n = 0) **/
#define UOTGHS_HSTPIPINRQ[5]			MMIO32(UOTGHS_BASE + 0x664)
/** UOTGHS_HSTPIPINRQ[6] Host Pipe IN Request Register (n = 0) **/
#define UOTGHS_HSTPIPINRQ[6]			MMIO32(UOTGHS_BASE + 0x668)
/** UOTGHS_HSTPIPINRQ[7] Host Pipe IN Request Register (n = 0) **/
#define UOTGHS_HSTPIPINRQ[7]			MMIO32(UOTGHS_BASE + 0x66c)
/** UOTGHS_HSTPIPINRQ[8] Host Pipe IN Request Register (n = 0) **/
#define UOTGHS_HSTPIPINRQ[8]			MMIO32(UOTGHS_BASE + 0x670)
/** UOTGHS_HSTPIPINRQ[9] Host Pipe IN Request Register (n = 0) **/
#define UOTGHS_HSTPIPINRQ[9]			MMIO32(UOTGHS_BASE + 0x674)
/** UOTGHS_HSTPIPERR[0] Host Pipe Error Register (n = 0) **/
#define UOTGHS_HSTPIPERR[0]			MMIO32(UOTGHS_BASE + 0x680)
/** UOTGHS_HSTPIPERR[1] Host Pipe Error Register (n = 0) **/
#define UOTGHS_HSTPIPERR[1]			MMIO32(UOTGHS_BASE + 0x684)
/** UOTGHS_HSTPIPERR[2] Host Pipe Error Register (n = 0) **/
#define UOTGHS_HSTPIPERR[2]			MMIO32(UOTGHS_BASE + 0x688)
/** UOTGHS_HSTPIPERR[3] Host Pipe Error Register (n = 0) **/
#define UOTGHS_HSTPIPERR[3]			MMIO32(UOTGHS_BASE + 0x68c)
/** UOTGHS_HSTPIPERR[4] Host Pipe Error Register (n = 0) **/
#define UOTGHS_HSTPIPERR[4]			MMIO32(UOTGHS_BASE + 0x690)
/** UOTGHS_HSTPIPERR[5] Host Pipe Error Register (n = 0) **/
#define UOTGHS_HSTPIPERR[5]			MMIO32(UOTGHS_BASE + 0x694)
/** UOTGHS_HSTPIPERR[6] Host Pipe Error Register (n = 0) **/
#define UOTGHS_HSTPIPERR[6]			MMIO32(UOTGHS_BASE + 0x698)
/** UOTGHS_HSTPIPERR[7] Host Pipe Error Register (n = 0) **/
#define UOTGHS_HSTPIPERR[7]			MMIO32(UOTGHS_BASE + 0x69c)
/** UOTGHS_HSTPIPERR[8] Host Pipe Error Register (n = 0) **/
#define UOTGHS_HSTPIPERR[8]			MMIO32(UOTGHS_BASE + 0x6a0)
/** UOTGHS_HSTPIPERR[9] Host Pipe Error Register (n = 0) **/
#define UOTGHS_HSTPIPERR[9]			MMIO32(UOTGHS_BASE + 0x6a4)
/** UOTGHS_HSTDMANXTDSC1 Host DMA Channel Next Descriptor Address Register (n = 1) **/
#define UOTGHS_HSTDMANXTDSC1			MMIO32(UOTGHS_BASE + 0x710)
/** UOTGHS_HSTDMAADDRESS1 Host DMA Channel Address Register (n = 1) **/
#define UOTGHS_HSTDMAADDRESS1			MMIO32(UOTGHS_BASE + 0x714)
/** UOTGHS_HSTDMACONTROL1 Host DMA Channel Control Register (n = 1) **/
#define UOTGHS_HSTDMACONTROL1			MMIO32(UOTGHS_BASE + 0x718)
/** UOTGHS_HSTDMASTATUS1 Host DMA Channel Status Register (n = 1) **/
#define UOTGHS_HSTDMASTATUS1			MMIO32(UOTGHS_BASE + 0x71c)
/** UOTGHS_HSTDMANXTDSC2 Host DMA Channel Next Descriptor Address Register (n = 2) **/
#define UOTGHS_HSTDMANXTDSC2			MMIO32(UOTGHS_BASE + 0x720)
/** UOTGHS_HSTDMAADDRESS2 Host DMA Channel Address Register (n = 2) **/
#define UOTGHS_HSTDMAADDRESS2			MMIO32(UOTGHS_BASE + 0x724)
/** UOTGHS_HSTDMACONTROL2 Host DMA Channel Control Register (n = 2) **/
#define UOTGHS_HSTDMACONTROL2			MMIO32(UOTGHS_BASE + 0x728)
/** UOTGHS_HSTDMASTATUS2 Host DMA Channel Status Register (n = 2) **/
#define UOTGHS_HSTDMASTATUS2			MMIO32(UOTGHS_BASE + 0x72c)
/** UOTGHS_HSTDMANXTDSC3 Host DMA Channel Next Descriptor Address Register (n = 3) **/
#define UOTGHS_HSTDMANXTDSC3			MMIO32(UOTGHS_BASE + 0x730)
/** UOTGHS_HSTDMAADDRESS3 Host DMA Channel Address Register (n = 3) **/
#define UOTGHS_HSTDMAADDRESS3			MMIO32(UOTGHS_BASE + 0x734)
/** UOTGHS_HSTDMACONTROL3 Host DMA Channel Control Register (n = 3) **/
#define UOTGHS_HSTDMACONTROL3			MMIO32(UOTGHS_BASE + 0x738)
/** UOTGHS_HSTDMASTATUS3 Host DMA Channel Status Register (n = 3) **/
#define UOTGHS_HSTDMASTATUS3			MMIO32(UOTGHS_BASE + 0x73c)
/** UOTGHS_HSTDMANXTDSC4 Host DMA Channel Next Descriptor Address Register (n = 4) **/
#define UOTGHS_HSTDMANXTDSC4			MMIO32(UOTGHS_BASE + 0x740)
/** UOTGHS_HSTDMAADDRESS4 Host DMA Channel Address Register (n = 4) **/
#define UOTGHS_HSTDMAADDRESS4			MMIO32(UOTGHS_BASE + 0x744)
/** UOTGHS_HSTDMACONTROL4 Host DMA Channel Control Register (n = 4) **/
#define UOTGHS_HSTDMACONTROL4			MMIO32(UOTGHS_BASE + 0x748)
/** UOTGHS_HSTDMASTATUS4 Host DMA Channel Status Register (n = 4) **/
#define UOTGHS_HSTDMASTATUS4			MMIO32(UOTGHS_BASE + 0x74c)
/** UOTGHS_HSTDMANXTDSC5 Host DMA Channel Next Descriptor Address Register (n = 5) **/
#define UOTGHS_HSTDMANXTDSC5			MMIO32(UOTGHS_BASE + 0x750)
/** UOTGHS_HSTDMAADDRESS5 Host DMA Channel Address Register (n = 5) **/
#define UOTGHS_HSTDMAADDRESS5			MMIO32(UOTGHS_BASE + 0x754)
/** UOTGHS_HSTDMACONTROL5 Host DMA Channel Control Register (n = 5) **/
#define UOTGHS_HSTDMACONTROL5			MMIO32(UOTGHS_BASE + 0x758)
/** UOTGHS_HSTDMASTATUS5 Host DMA Channel Status Register (n = 5) **/
#define UOTGHS_HSTDMASTATUS5			MMIO32(UOTGHS_BASE + 0x75c)
/** UOTGHS_HSTDMANXTDSC6 Host DMA Channel Next Descriptor Address Register (n = 6) **/
#define UOTGHS_HSTDMANXTDSC6			MMIO32(UOTGHS_BASE + 0x760)
/** UOTGHS_HSTDMAADDRESS6 Host DMA Channel Address Register (n = 6) **/
#define UOTGHS_HSTDMAADDRESS6			MMIO32(UOTGHS_BASE + 0x764)
/** UOTGHS_HSTDMACONTROL6 Host DMA Channel Control Register (n = 6) **/
#define UOTGHS_HSTDMACONTROL6			MMIO32(UOTGHS_BASE + 0x768)
/** UOTGHS_HSTDMASTATUS6 Host DMA Channel Status Register (n = 6) **/
#define UOTGHS_HSTDMASTATUS6			MMIO32(UOTGHS_BASE + 0x76c)
/** UOTGHS_HSTDMANXTDSC7 Host DMA Channel Next Descriptor Address Register (n = 7) **/
#define UOTGHS_HSTDMANXTDSC7			MMIO32(UOTGHS_BASE + 0x770)
/** UOTGHS_HSTDMAADDRESS7 Host DMA Channel Address Register (n = 7) **/
#define UOTGHS_HSTDMAADDRESS7			MMIO32(UOTGHS_BASE + 0x774)
/** UOTGHS_HSTDMACONTROL7 Host DMA Channel Control Register (n = 7) **/
#define UOTGHS_HSTDMACONTROL7			MMIO32(UOTGHS_BASE + 0x778)
/** UOTGHS_HSTDMASTATUS7 Host DMA Channel Status Register (n = 7) **/
#define UOTGHS_HSTDMASTATUS7			MMIO32(UOTGHS_BASE + 0x77c)
/** UOTGHS_CTRL General Control Register **/
#define UOTGHS_CTRL			MMIO32(UOTGHS_BASE + 0x800)
/** UOTGHS_SR General Status Register **/
#define UOTGHS_SR			MMIO32(UOTGHS_BASE + 0x804)
/** UOTGHS_SCR General Status Clear Register **/
#define UOTGHS_SCR			MMIO32(UOTGHS_BASE + 0x808)
/** UOTGHS_SFR General Status Set Register **/
#define UOTGHS_SFR			MMIO32(UOTGHS_BASE + 0x80c)
/** UOTGHS_FSM General Finite State Machine Register **/
#define UOTGHS_FSM			MMIO32(UOTGHS_BASE + 0x82c)

/**@}*/


/** @defgroup uotghs_devctrl DEVCTRL Device General Control Register
@{*/

/** UOTGHS_DEVCTRL_OPMODE2 Specific Operational mode **/
#define UOTGHS_DEVCTRL_OPMODE2		(1 << 16)
/** UOTGHS_DEVCTRL_TSTPCKT Test packet mode **/
#define UOTGHS_DEVCTRL_TSTPCKT		(1 << 15)
/** UOTGHS_DEVCTRL_TSTK Test mode K **/
#define UOTGHS_DEVCTRL_TSTK		(1 << 14)
/** UOTGHS_DEVCTRL_TSTJ Test mode J **/
#define UOTGHS_DEVCTRL_TSTJ		(1 << 13)
/** UOTGHS_DEVCTRL_LS Low-Speed Mode Force **/
#define UOTGHS_DEVCTRL_LS		(1 << 12)

#define UOTGHS_DEVCTRL_SPDCONF_SHIFT		10
#define UOTGHS_DEVCTRL_SPDCONF_MASK		0x03
/** @defgroup uotghs_devctrl_spdconf SPDCONF Mode Configuration
@{*/
/**@}*/

/** UOTGHS_DEVCTRL_RMWKUP Remote Wake-Up **/
#define UOTGHS_DEVCTRL_RMWKUP		(1 << 9)
/** UOTGHS_DEVCTRL_DETACH Detach **/
#define UOTGHS_DEVCTRL_DETACH		(1 << 8)
/** UOTGHS_DEVCTRL_ADDEN Address Enable **/
#define UOTGHS_DEVCTRL_ADDEN		(1 << 7)

#define UOTGHS_DEVCTRL_UADD_SHIFT		0
#define UOTGHS_DEVCTRL_UADD_MASK		0x7f
/** @defgroup uotghs_devctrl_uadd UADD USB Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devisr DEVISR Device Global Interrupt Status Register
@{*/

/** UOTGHS_DEVISR_DMA_6 DMA Channel 6 Interrupt **/
#define UOTGHS_DEVISR_DMA_6		(1 << 30)
/** UOTGHS_DEVISR_DMA_5 DMA Channel 5 Interrupt **/
#define UOTGHS_DEVISR_DMA_5		(1 << 29)
/** UOTGHS_DEVISR_DMA_4 DMA Channel 4 Interrupt **/
#define UOTGHS_DEVISR_DMA_4		(1 << 28)
/** UOTGHS_DEVISR_DMA_3 DMA Channel 3 Interrupt **/
#define UOTGHS_DEVISR_DMA_3		(1 << 27)
/** UOTGHS_DEVISR_DMA_2 DMA Channel 2 Interrupt **/
#define UOTGHS_DEVISR_DMA_2		(1 << 26)
/** UOTGHS_DEVISR_DMA_1 DMA Channel 1 Interrupt **/
#define UOTGHS_DEVISR_DMA_1		(1 << 25)
/** UOTGHS_DEVISR_PEP_9 Endpoint 9 Interrupt **/
#define UOTGHS_DEVISR_PEP_9		(1 << 21)
/** UOTGHS_DEVISR_PEP_8 Endpoint 8 Interrupt **/
#define UOTGHS_DEVISR_PEP_8		(1 << 20)
/** UOTGHS_DEVISR_PEP_7 Endpoint 7 Interrupt **/
#define UOTGHS_DEVISR_PEP_7		(1 << 19)
/** UOTGHS_DEVISR_PEP_6 Endpoint 6 Interrupt **/
#define UOTGHS_DEVISR_PEP_6		(1 << 18)
/** UOTGHS_DEVISR_PEP_5 Endpoint 5 Interrupt **/
#define UOTGHS_DEVISR_PEP_5		(1 << 17)
/** UOTGHS_DEVISR_PEP_4 Endpoint 4 Interrupt **/
#define UOTGHS_DEVISR_PEP_4		(1 << 16)
/** UOTGHS_DEVISR_PEP_3 Endpoint 3 Interrupt **/
#define UOTGHS_DEVISR_PEP_3		(1 << 15)
/** UOTGHS_DEVISR_PEP_2 Endpoint 2 Interrupt **/
#define UOTGHS_DEVISR_PEP_2		(1 << 14)
/** UOTGHS_DEVISR_PEP_1 Endpoint 1 Interrupt **/
#define UOTGHS_DEVISR_PEP_1		(1 << 13)
/** UOTGHS_DEVISR_PEP_0 Endpoint 0 Interrupt **/
#define UOTGHS_DEVISR_PEP_0		(1 << 12)
/** UOTGHS_DEVISR_UPRSM Upstream Resume Interrupt **/
#define UOTGHS_DEVISR_UPRSM		(1 << 6)
/** UOTGHS_DEVISR_EORSM End of Resume Interrupt **/
#define UOTGHS_DEVISR_EORSM		(1 << 5)
/** UOTGHS_DEVISR_WAKEUP Wake-Up Interrupt **/
#define UOTGHS_DEVISR_WAKEUP		(1 << 4)
/** UOTGHS_DEVISR_EORST End of Reset Interrupt **/
#define UOTGHS_DEVISR_EORST		(1 << 3)
/** UOTGHS_DEVISR_SOF Start of Frame Interrupt **/
#define UOTGHS_DEVISR_SOF		(1 << 2)
/** UOTGHS_DEVISR_MSOF Micro Start of Frame Interrupt **/
#define UOTGHS_DEVISR_MSOF		(1 << 1)
/** UOTGHS_DEVISR_SUSP Suspend Interrupt **/
#define UOTGHS_DEVISR_SUSP		(1 << 0)

/**@}*/

/** @defgroup uotghs_devicr DEVICR Device Global Interrupt Clear Register
@{*/

/** UOTGHS_DEVICR_UPRSMC Upstream Resume Interrupt Clear **/
#define UOTGHS_DEVICR_UPRSMC		(1 << 6)
/** UOTGHS_DEVICR_EORSMC End of Resume Interrupt Clear **/
#define UOTGHS_DEVICR_EORSMC		(1 << 5)
/** UOTGHS_DEVICR_WAKEUPC Wake-Up Interrupt Clear **/
#define UOTGHS_DEVICR_WAKEUPC		(1 << 4)
/** UOTGHS_DEVICR_EORSTC End of Reset Interrupt Clear **/
#define UOTGHS_DEVICR_EORSTC		(1 << 3)
/** UOTGHS_DEVICR_SOFC Start of Frame Interrupt Clear **/
#define UOTGHS_DEVICR_SOFC		(1 << 2)
/** UOTGHS_DEVICR_MSOFC Micro Start of Frame Interrupt Clear **/
#define UOTGHS_DEVICR_MSOFC		(1 << 1)
/** UOTGHS_DEVICR_SUSPC Suspend Interrupt Clear **/
#define UOTGHS_DEVICR_SUSPC		(1 << 0)

/**@}*/

/** @defgroup uotghs_devifr DEVIFR Device Global Interrupt Set Register
@{*/

/** UOTGHS_DEVIFR_DMA_6 DMA Channel 6 Interrupt Set **/
#define UOTGHS_DEVIFR_DMA_6		(1 << 30)
/** UOTGHS_DEVIFR_DMA_5 DMA Channel 5 Interrupt Set **/
#define UOTGHS_DEVIFR_DMA_5		(1 << 29)
/** UOTGHS_DEVIFR_DMA_4 DMA Channel 4 Interrupt Set **/
#define UOTGHS_DEVIFR_DMA_4		(1 << 28)
/** UOTGHS_DEVIFR_DMA_3 DMA Channel 3 Interrupt Set **/
#define UOTGHS_DEVIFR_DMA_3		(1 << 27)
/** UOTGHS_DEVIFR_DMA_2 DMA Channel 2 Interrupt Set **/
#define UOTGHS_DEVIFR_DMA_2		(1 << 26)
/** UOTGHS_DEVIFR_DMA_1 DMA Channel 1 Interrupt Set **/
#define UOTGHS_DEVIFR_DMA_1		(1 << 25)
/** UOTGHS_DEVIFR_UPRSMS Upstream Resume Interrupt Set **/
#define UOTGHS_DEVIFR_UPRSMS		(1 << 6)
/** UOTGHS_DEVIFR_EORSMS End of Resume Interrupt Set **/
#define UOTGHS_DEVIFR_EORSMS		(1 << 5)
/** UOTGHS_DEVIFR_WAKEUPS Wake-Up Interrupt Set **/
#define UOTGHS_DEVIFR_WAKEUPS		(1 << 4)
/** UOTGHS_DEVIFR_EORSTS End of Reset Interrupt Set **/
#define UOTGHS_DEVIFR_EORSTS		(1 << 3)
/** UOTGHS_DEVIFR_SOFS Start of Frame Interrupt Set **/
#define UOTGHS_DEVIFR_SOFS		(1 << 2)
/** UOTGHS_DEVIFR_MSOFS Micro Start of Frame Interrupt Set **/
#define UOTGHS_DEVIFR_MSOFS		(1 << 1)
/** UOTGHS_DEVIFR_SUSPS Suspend Interrupt Set **/
#define UOTGHS_DEVIFR_SUSPS		(1 << 0)

/**@}*/

/** @defgroup uotghs_devimr DEVIMR Device Global Interrupt Mask Register
@{*/

/** UOTGHS_DEVIMR_DMA_6 DMA Channel 6 Interrupt Mask **/
#define UOTGHS_DEVIMR_DMA_6		(1 << 30)
/** UOTGHS_DEVIMR_DMA_5 DMA Channel 5 Interrupt Mask **/
#define UOTGHS_DEVIMR_DMA_5		(1 << 29)
/** UOTGHS_DEVIMR_DMA_4 DMA Channel 4 Interrupt Mask **/
#define UOTGHS_DEVIMR_DMA_4		(1 << 28)
/** UOTGHS_DEVIMR_DMA_3 DMA Channel 3 Interrupt Mask **/
#define UOTGHS_DEVIMR_DMA_3		(1 << 27)
/** UOTGHS_DEVIMR_DMA_2 DMA Channel 2 Interrupt Mask **/
#define UOTGHS_DEVIMR_DMA_2		(1 << 26)
/** UOTGHS_DEVIMR_DMA_1 DMA Channel 1 Interrupt Mask **/
#define UOTGHS_DEVIMR_DMA_1		(1 << 25)
/** UOTGHS_DEVIMR_PEP_9 Endpoint 9 Interrupt Mask **/
#define UOTGHS_DEVIMR_PEP_9		(1 << 21)
/** UOTGHS_DEVIMR_PEP_8 Endpoint 8 Interrupt Mask **/
#define UOTGHS_DEVIMR_PEP_8		(1 << 20)
/** UOTGHS_DEVIMR_PEP_7 Endpoint 7 Interrupt Mask **/
#define UOTGHS_DEVIMR_PEP_7		(1 << 19)
/** UOTGHS_DEVIMR_PEP_6 Endpoint 6 Interrupt Mask **/
#define UOTGHS_DEVIMR_PEP_6		(1 << 18)
/** UOTGHS_DEVIMR_PEP_5 Endpoint 5 Interrupt Mask **/
#define UOTGHS_DEVIMR_PEP_5		(1 << 17)
/** UOTGHS_DEVIMR_PEP_4 Endpoint 4 Interrupt Mask **/
#define UOTGHS_DEVIMR_PEP_4		(1 << 16)
/** UOTGHS_DEVIMR_PEP_3 Endpoint 3 Interrupt Mask **/
#define UOTGHS_DEVIMR_PEP_3		(1 << 15)
/** UOTGHS_DEVIMR_PEP_2 Endpoint 2 Interrupt Mask **/
#define UOTGHS_DEVIMR_PEP_2		(1 << 14)
/** UOTGHS_DEVIMR_PEP_1 Endpoint 1 Interrupt Mask **/
#define UOTGHS_DEVIMR_PEP_1		(1 << 13)
/** UOTGHS_DEVIMR_PEP_0 Endpoint 0 Interrupt Mask **/
#define UOTGHS_DEVIMR_PEP_0		(1 << 12)
/** UOTGHS_DEVIMR_UPRSME Upstream Resume Interrupt Mask **/
#define UOTGHS_DEVIMR_UPRSME		(1 << 6)
/** UOTGHS_DEVIMR_EORSME End of Resume Interrupt Mask **/
#define UOTGHS_DEVIMR_EORSME		(1 << 5)
/** UOTGHS_DEVIMR_WAKEUPE Wake-Up Interrupt Mask **/
#define UOTGHS_DEVIMR_WAKEUPE		(1 << 4)
/** UOTGHS_DEVIMR_EORSTE End of Reset Interrupt Mask **/
#define UOTGHS_DEVIMR_EORSTE		(1 << 3)
/** UOTGHS_DEVIMR_SOFE Start of Frame Interrupt Mask **/
#define UOTGHS_DEVIMR_SOFE		(1 << 2)
/** UOTGHS_DEVIMR_MSOFE Micro Start of Frame Interrupt Mask **/
#define UOTGHS_DEVIMR_MSOFE		(1 << 1)
/** UOTGHS_DEVIMR_SUSPE Suspend Interrupt Mask **/
#define UOTGHS_DEVIMR_SUSPE		(1 << 0)

/**@}*/

/** @defgroup uotghs_devidr DEVIDR Device Global Interrupt Disable Register
@{*/

/** UOTGHS_DEVIDR_DMA_6 DMA Channel 6 Interrupt Disable **/
#define UOTGHS_DEVIDR_DMA_6		(1 << 30)
/** UOTGHS_DEVIDR_DMA_5 DMA Channel 5 Interrupt Disable **/
#define UOTGHS_DEVIDR_DMA_5		(1 << 29)
/** UOTGHS_DEVIDR_DMA_4 DMA Channel 4 Interrupt Disable **/
#define UOTGHS_DEVIDR_DMA_4		(1 << 28)
/** UOTGHS_DEVIDR_DMA_3 DMA Channel 3 Interrupt Disable **/
#define UOTGHS_DEVIDR_DMA_3		(1 << 27)
/** UOTGHS_DEVIDR_DMA_2 DMA Channel 2 Interrupt Disable **/
#define UOTGHS_DEVIDR_DMA_2		(1 << 26)
/** UOTGHS_DEVIDR_DMA_1 DMA Channel 1 Interrupt Disable **/
#define UOTGHS_DEVIDR_DMA_1		(1 << 25)
/** UOTGHS_DEVIDR_PEP_9 Endpoint 9 Interrupt Disable **/
#define UOTGHS_DEVIDR_PEP_9		(1 << 21)
/** UOTGHS_DEVIDR_PEP_8 Endpoint 8 Interrupt Disable **/
#define UOTGHS_DEVIDR_PEP_8		(1 << 20)
/** UOTGHS_DEVIDR_PEP_7 Endpoint 7 Interrupt Disable **/
#define UOTGHS_DEVIDR_PEP_7		(1 << 19)
/** UOTGHS_DEVIDR_PEP_6 Endpoint 6 Interrupt Disable **/
#define UOTGHS_DEVIDR_PEP_6		(1 << 18)
/** UOTGHS_DEVIDR_PEP_5 Endpoint 5 Interrupt Disable **/
#define UOTGHS_DEVIDR_PEP_5		(1 << 17)
/** UOTGHS_DEVIDR_PEP_4 Endpoint 4 Interrupt Disable **/
#define UOTGHS_DEVIDR_PEP_4		(1 << 16)
/** UOTGHS_DEVIDR_PEP_3 Endpoint 3 Interrupt Disable **/
#define UOTGHS_DEVIDR_PEP_3		(1 << 15)
/** UOTGHS_DEVIDR_PEP_2 Endpoint 2 Interrupt Disable **/
#define UOTGHS_DEVIDR_PEP_2		(1 << 14)
/** UOTGHS_DEVIDR_PEP_1 Endpoint 1 Interrupt Disable **/
#define UOTGHS_DEVIDR_PEP_1		(1 << 13)
/** UOTGHS_DEVIDR_PEP_0 Endpoint 0 Interrupt Disable **/
#define UOTGHS_DEVIDR_PEP_0		(1 << 12)
/** UOTGHS_DEVIDR_UPRSMEC Upstream Resume Interrupt Disable **/
#define UOTGHS_DEVIDR_UPRSMEC		(1 << 6)
/** UOTGHS_DEVIDR_EORSMEC End of Resume Interrupt Disable **/
#define UOTGHS_DEVIDR_EORSMEC		(1 << 5)
/** UOTGHS_DEVIDR_WAKEUPEC Wake-Up Interrupt Disable **/
#define UOTGHS_DEVIDR_WAKEUPEC		(1 << 4)
/** UOTGHS_DEVIDR_EORSTEC End of Reset Interrupt Disable **/
#define UOTGHS_DEVIDR_EORSTEC		(1 << 3)
/** UOTGHS_DEVIDR_SOFEC Start of Frame Interrupt Disable **/
#define UOTGHS_DEVIDR_SOFEC		(1 << 2)
/** UOTGHS_DEVIDR_MSOFEC Micro Start of Frame Interrupt Disable **/
#define UOTGHS_DEVIDR_MSOFEC		(1 << 1)
/** UOTGHS_DEVIDR_SUSPEC Suspend Interrupt Disable **/
#define UOTGHS_DEVIDR_SUSPEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_devier DEVIER Device Global Interrupt Enable Register
@{*/

/** UOTGHS_DEVIER_DMA_6 DMA Channel 6 Interrupt Enable **/
#define UOTGHS_DEVIER_DMA_6		(1 << 30)
/** UOTGHS_DEVIER_DMA_5 DMA Channel 5 Interrupt Enable **/
#define UOTGHS_DEVIER_DMA_5		(1 << 29)
/** UOTGHS_DEVIER_DMA_4 DMA Channel 4 Interrupt Enable **/
#define UOTGHS_DEVIER_DMA_4		(1 << 28)
/** UOTGHS_DEVIER_DMA_3 DMA Channel 3 Interrupt Enable **/
#define UOTGHS_DEVIER_DMA_3		(1 << 27)
/** UOTGHS_DEVIER_DMA_2 DMA Channel 2 Interrupt Enable **/
#define UOTGHS_DEVIER_DMA_2		(1 << 26)
/** UOTGHS_DEVIER_DMA_1 DMA Channel 1 Interrupt Enable **/
#define UOTGHS_DEVIER_DMA_1		(1 << 25)
/** UOTGHS_DEVIER_PEP_9 Endpoint 9 Interrupt Enable **/
#define UOTGHS_DEVIER_PEP_9		(1 << 21)
/** UOTGHS_DEVIER_PEP_8 Endpoint 8 Interrupt Enable **/
#define UOTGHS_DEVIER_PEP_8		(1 << 20)
/** UOTGHS_DEVIER_PEP_7 Endpoint 7 Interrupt Enable **/
#define UOTGHS_DEVIER_PEP_7		(1 << 19)
/** UOTGHS_DEVIER_PEP_6 Endpoint 6 Interrupt Enable **/
#define UOTGHS_DEVIER_PEP_6		(1 << 18)
/** UOTGHS_DEVIER_PEP_5 Endpoint 5 Interrupt Enable **/
#define UOTGHS_DEVIER_PEP_5		(1 << 17)
/** UOTGHS_DEVIER_PEP_4 Endpoint 4 Interrupt Enable **/
#define UOTGHS_DEVIER_PEP_4		(1 << 16)
/** UOTGHS_DEVIER_PEP_3 Endpoint 3 Interrupt Enable **/
#define UOTGHS_DEVIER_PEP_3		(1 << 15)
/** UOTGHS_DEVIER_PEP_2 Endpoint 2 Interrupt Enable **/
#define UOTGHS_DEVIER_PEP_2		(1 << 14)
/** UOTGHS_DEVIER_PEP_1 Endpoint 1 Interrupt Enable **/
#define UOTGHS_DEVIER_PEP_1		(1 << 13)
/** UOTGHS_DEVIER_PEP_0 Endpoint 0 Interrupt Enable **/
#define UOTGHS_DEVIER_PEP_0		(1 << 12)
/** UOTGHS_DEVIER_UPRSMES Upstream Resume Interrupt Enable **/
#define UOTGHS_DEVIER_UPRSMES		(1 << 6)
/** UOTGHS_DEVIER_EORSMES End of Resume Interrupt Enable **/
#define UOTGHS_DEVIER_EORSMES		(1 << 5)
/** UOTGHS_DEVIER_WAKEUPES Wake-Up Interrupt Enable **/
#define UOTGHS_DEVIER_WAKEUPES		(1 << 4)
/** UOTGHS_DEVIER_EORSTES End of Reset Interrupt Enable **/
#define UOTGHS_DEVIER_EORSTES		(1 << 3)
/** UOTGHS_DEVIER_SOFES Start of Frame Interrupt Enable **/
#define UOTGHS_DEVIER_SOFES		(1 << 2)
/** UOTGHS_DEVIER_MSOFES Micro Start of Frame Interrupt Enable **/
#define UOTGHS_DEVIER_MSOFES		(1 << 1)
/** UOTGHS_DEVIER_SUSPES Suspend Interrupt Enable **/
#define UOTGHS_DEVIER_SUSPES		(1 << 0)

/**@}*/

/** @defgroup uotghs_devept DEVEPT Device Endpoint Register
@{*/

/** UOTGHS_DEVEPT_EPRST8 Endpoint 8 Reset **/
#define UOTGHS_DEVEPT_EPRST8		(1 << 24)
/** UOTGHS_DEVEPT_EPRST7 Endpoint 7 Reset **/
#define UOTGHS_DEVEPT_EPRST7		(1 << 23)
/** UOTGHS_DEVEPT_EPRST6 Endpoint 6 Reset **/
#define UOTGHS_DEVEPT_EPRST6		(1 << 22)
/** UOTGHS_DEVEPT_EPRST5 Endpoint 5 Reset **/
#define UOTGHS_DEVEPT_EPRST5		(1 << 21)
/** UOTGHS_DEVEPT_EPRST4 Endpoint 4 Reset **/
#define UOTGHS_DEVEPT_EPRST4		(1 << 20)
/** UOTGHS_DEVEPT_EPRST3 Endpoint 3 Reset **/
#define UOTGHS_DEVEPT_EPRST3		(1 << 19)
/** UOTGHS_DEVEPT_EPRST2 Endpoint 2 Reset **/
#define UOTGHS_DEVEPT_EPRST2		(1 << 18)
/** UOTGHS_DEVEPT_EPRST1 Endpoint 1 Reset **/
#define UOTGHS_DEVEPT_EPRST1		(1 << 17)
/** UOTGHS_DEVEPT_EPRST0 Endpoint 0 Reset **/
#define UOTGHS_DEVEPT_EPRST0		(1 << 16)
/** UOTGHS_DEVEPT_EPEN8 Endpoint 8 Enable **/
#define UOTGHS_DEVEPT_EPEN8		(1 << 8)
/** UOTGHS_DEVEPT_EPEN7 Endpoint 7 Enable **/
#define UOTGHS_DEVEPT_EPEN7		(1 << 7)
/** UOTGHS_DEVEPT_EPEN6 Endpoint 6 Enable **/
#define UOTGHS_DEVEPT_EPEN6		(1 << 6)
/** UOTGHS_DEVEPT_EPEN5 Endpoint 5 Enable **/
#define UOTGHS_DEVEPT_EPEN5		(1 << 5)
/** UOTGHS_DEVEPT_EPEN4 Endpoint 4 Enable **/
#define UOTGHS_DEVEPT_EPEN4		(1 << 4)
/** UOTGHS_DEVEPT_EPEN3 Endpoint 3 Enable **/
#define UOTGHS_DEVEPT_EPEN3		(1 << 3)
/** UOTGHS_DEVEPT_EPEN2 Endpoint 2 Enable **/
#define UOTGHS_DEVEPT_EPEN2		(1 << 2)
/** UOTGHS_DEVEPT_EPEN1 Endpoint 1 Enable **/
#define UOTGHS_DEVEPT_EPEN1		(1 << 1)
/** UOTGHS_DEVEPT_EPEN0 Endpoint 0 Enable **/
#define UOTGHS_DEVEPT_EPEN0		(1 << 0)

/**@}*/

/** @defgroup uotghs_devfnum DEVFNUM Device Frame Number Register
@{*/

/** UOTGHS_DEVFNUM_FNCERR Frame Number CRC Error **/
#define UOTGHS_DEVFNUM_FNCERR		(1 << 15)

#define UOTGHS_DEVFNUM_FNUM_SHIFT		3
#define UOTGHS_DEVFNUM_FNUM_MASK		0x7ff
/** @defgroup uotghs_devfnum_fnum FNUM Frame Number
@{*/
/**@}*/


#define UOTGHS_DEVFNUM_MFNUM_SHIFT		0
#define UOTGHS_DEVFNUM_MFNUM_MASK		0x07
/** @defgroup uotghs_devfnum_mfnum MFNUM Micro Frame Number
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_deveptcfg[0] DEVEPTCFG[0] Device Endpoint Configuration Register (n = 0)
@{*/


#define UOTGHS_DEVEPTCFG[0]_NBTRANS_SHIFT		13
#define UOTGHS_DEVEPTCFG[0]_NBTRANS_MASK		0x03
/** @defgroup uotghs_deveptcfg[0]_nbtrans NBTRANS Number of transaction per microframe for isochronous endpoint
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[0]_EPTYPE_SHIFT		11
#define UOTGHS_DEVEPTCFG[0]_EPTYPE_MASK		0x03
/** @defgroup uotghs_deveptcfg[0]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[0]_AUTOSW Automatic Switch **/
#define UOTGHS_DEVEPTCFG[0]_AUTOSW		(1 << 9)
/** UOTGHS_DEVEPTCFG[0]_EPDIR Endpoint Direction **/
#define UOTGHS_DEVEPTCFG[0]_EPDIR		(1 << 8)

#define UOTGHS_DEVEPTCFG[0]_EPSIZE_SHIFT		4
#define UOTGHS_DEVEPTCFG[0]_EPSIZE_MASK		0x07
/** @defgroup uotghs_deveptcfg[0]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[0]_EPBK_SHIFT		2
#define UOTGHS_DEVEPTCFG[0]_EPBK_MASK		0x03
/** @defgroup uotghs_deveptcfg[0]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[0]_ALLOC Endpoint Memory Allocate **/
#define UOTGHS_DEVEPTCFG[0]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_deveptcfg[1] DEVEPTCFG[1] Device Endpoint Configuration Register (n = 0)
@{*/


#define UOTGHS_DEVEPTCFG[1]_NBTRANS_SHIFT		13
#define UOTGHS_DEVEPTCFG[1]_NBTRANS_MASK		0x03
/** @defgroup uotghs_deveptcfg[1]_nbtrans NBTRANS Number of transaction per microframe for isochronous endpoint
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[1]_EPTYPE_SHIFT		11
#define UOTGHS_DEVEPTCFG[1]_EPTYPE_MASK		0x03
/** @defgroup uotghs_deveptcfg[1]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[1]_AUTOSW Automatic Switch **/
#define UOTGHS_DEVEPTCFG[1]_AUTOSW		(1 << 9)
/** UOTGHS_DEVEPTCFG[1]_EPDIR Endpoint Direction **/
#define UOTGHS_DEVEPTCFG[1]_EPDIR		(1 << 8)

#define UOTGHS_DEVEPTCFG[1]_EPSIZE_SHIFT		4
#define UOTGHS_DEVEPTCFG[1]_EPSIZE_MASK		0x07
/** @defgroup uotghs_deveptcfg[1]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[1]_EPBK_SHIFT		2
#define UOTGHS_DEVEPTCFG[1]_EPBK_MASK		0x03
/** @defgroup uotghs_deveptcfg[1]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[1]_ALLOC Endpoint Memory Allocate **/
#define UOTGHS_DEVEPTCFG[1]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_deveptcfg[2] DEVEPTCFG[2] Device Endpoint Configuration Register (n = 0)
@{*/


#define UOTGHS_DEVEPTCFG[2]_NBTRANS_SHIFT		13
#define UOTGHS_DEVEPTCFG[2]_NBTRANS_MASK		0x03
/** @defgroup uotghs_deveptcfg[2]_nbtrans NBTRANS Number of transaction per microframe for isochronous endpoint
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[2]_EPTYPE_SHIFT		11
#define UOTGHS_DEVEPTCFG[2]_EPTYPE_MASK		0x03
/** @defgroup uotghs_deveptcfg[2]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[2]_AUTOSW Automatic Switch **/
#define UOTGHS_DEVEPTCFG[2]_AUTOSW		(1 << 9)
/** UOTGHS_DEVEPTCFG[2]_EPDIR Endpoint Direction **/
#define UOTGHS_DEVEPTCFG[2]_EPDIR		(1 << 8)

#define UOTGHS_DEVEPTCFG[2]_EPSIZE_SHIFT		4
#define UOTGHS_DEVEPTCFG[2]_EPSIZE_MASK		0x07
/** @defgroup uotghs_deveptcfg[2]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[2]_EPBK_SHIFT		2
#define UOTGHS_DEVEPTCFG[2]_EPBK_MASK		0x03
/** @defgroup uotghs_deveptcfg[2]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[2]_ALLOC Endpoint Memory Allocate **/
#define UOTGHS_DEVEPTCFG[2]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_deveptcfg[3] DEVEPTCFG[3] Device Endpoint Configuration Register (n = 0)
@{*/


#define UOTGHS_DEVEPTCFG[3]_NBTRANS_SHIFT		13
#define UOTGHS_DEVEPTCFG[3]_NBTRANS_MASK		0x03
/** @defgroup uotghs_deveptcfg[3]_nbtrans NBTRANS Number of transaction per microframe for isochronous endpoint
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[3]_EPTYPE_SHIFT		11
#define UOTGHS_DEVEPTCFG[3]_EPTYPE_MASK		0x03
/** @defgroup uotghs_deveptcfg[3]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[3]_AUTOSW Automatic Switch **/
#define UOTGHS_DEVEPTCFG[3]_AUTOSW		(1 << 9)
/** UOTGHS_DEVEPTCFG[3]_EPDIR Endpoint Direction **/
#define UOTGHS_DEVEPTCFG[3]_EPDIR		(1 << 8)

#define UOTGHS_DEVEPTCFG[3]_EPSIZE_SHIFT		4
#define UOTGHS_DEVEPTCFG[3]_EPSIZE_MASK		0x07
/** @defgroup uotghs_deveptcfg[3]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[3]_EPBK_SHIFT		2
#define UOTGHS_DEVEPTCFG[3]_EPBK_MASK		0x03
/** @defgroup uotghs_deveptcfg[3]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[3]_ALLOC Endpoint Memory Allocate **/
#define UOTGHS_DEVEPTCFG[3]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_deveptcfg[4] DEVEPTCFG[4] Device Endpoint Configuration Register (n = 0)
@{*/


#define UOTGHS_DEVEPTCFG[4]_NBTRANS_SHIFT		13
#define UOTGHS_DEVEPTCFG[4]_NBTRANS_MASK		0x03
/** @defgroup uotghs_deveptcfg[4]_nbtrans NBTRANS Number of transaction per microframe for isochronous endpoint
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[4]_EPTYPE_SHIFT		11
#define UOTGHS_DEVEPTCFG[4]_EPTYPE_MASK		0x03
/** @defgroup uotghs_deveptcfg[4]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[4]_AUTOSW Automatic Switch **/
#define UOTGHS_DEVEPTCFG[4]_AUTOSW		(1 << 9)
/** UOTGHS_DEVEPTCFG[4]_EPDIR Endpoint Direction **/
#define UOTGHS_DEVEPTCFG[4]_EPDIR		(1 << 8)

#define UOTGHS_DEVEPTCFG[4]_EPSIZE_SHIFT		4
#define UOTGHS_DEVEPTCFG[4]_EPSIZE_MASK		0x07
/** @defgroup uotghs_deveptcfg[4]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[4]_EPBK_SHIFT		2
#define UOTGHS_DEVEPTCFG[4]_EPBK_MASK		0x03
/** @defgroup uotghs_deveptcfg[4]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[4]_ALLOC Endpoint Memory Allocate **/
#define UOTGHS_DEVEPTCFG[4]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_deveptcfg[5] DEVEPTCFG[5] Device Endpoint Configuration Register (n = 0)
@{*/


#define UOTGHS_DEVEPTCFG[5]_NBTRANS_SHIFT		13
#define UOTGHS_DEVEPTCFG[5]_NBTRANS_MASK		0x03
/** @defgroup uotghs_deveptcfg[5]_nbtrans NBTRANS Number of transaction per microframe for isochronous endpoint
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[5]_EPTYPE_SHIFT		11
#define UOTGHS_DEVEPTCFG[5]_EPTYPE_MASK		0x03
/** @defgroup uotghs_deveptcfg[5]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[5]_AUTOSW Automatic Switch **/
#define UOTGHS_DEVEPTCFG[5]_AUTOSW		(1 << 9)
/** UOTGHS_DEVEPTCFG[5]_EPDIR Endpoint Direction **/
#define UOTGHS_DEVEPTCFG[5]_EPDIR		(1 << 8)

#define UOTGHS_DEVEPTCFG[5]_EPSIZE_SHIFT		4
#define UOTGHS_DEVEPTCFG[5]_EPSIZE_MASK		0x07
/** @defgroup uotghs_deveptcfg[5]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[5]_EPBK_SHIFT		2
#define UOTGHS_DEVEPTCFG[5]_EPBK_MASK		0x03
/** @defgroup uotghs_deveptcfg[5]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[5]_ALLOC Endpoint Memory Allocate **/
#define UOTGHS_DEVEPTCFG[5]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_deveptcfg[6] DEVEPTCFG[6] Device Endpoint Configuration Register (n = 0)
@{*/


#define UOTGHS_DEVEPTCFG[6]_NBTRANS_SHIFT		13
#define UOTGHS_DEVEPTCFG[6]_NBTRANS_MASK		0x03
/** @defgroup uotghs_deveptcfg[6]_nbtrans NBTRANS Number of transaction per microframe for isochronous endpoint
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[6]_EPTYPE_SHIFT		11
#define UOTGHS_DEVEPTCFG[6]_EPTYPE_MASK		0x03
/** @defgroup uotghs_deveptcfg[6]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[6]_AUTOSW Automatic Switch **/
#define UOTGHS_DEVEPTCFG[6]_AUTOSW		(1 << 9)
/** UOTGHS_DEVEPTCFG[6]_EPDIR Endpoint Direction **/
#define UOTGHS_DEVEPTCFG[6]_EPDIR		(1 << 8)

#define UOTGHS_DEVEPTCFG[6]_EPSIZE_SHIFT		4
#define UOTGHS_DEVEPTCFG[6]_EPSIZE_MASK		0x07
/** @defgroup uotghs_deveptcfg[6]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[6]_EPBK_SHIFT		2
#define UOTGHS_DEVEPTCFG[6]_EPBK_MASK		0x03
/** @defgroup uotghs_deveptcfg[6]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[6]_ALLOC Endpoint Memory Allocate **/
#define UOTGHS_DEVEPTCFG[6]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_deveptcfg[7] DEVEPTCFG[7] Device Endpoint Configuration Register (n = 0)
@{*/


#define UOTGHS_DEVEPTCFG[7]_NBTRANS_SHIFT		13
#define UOTGHS_DEVEPTCFG[7]_NBTRANS_MASK		0x03
/** @defgroup uotghs_deveptcfg[7]_nbtrans NBTRANS Number of transaction per microframe for isochronous endpoint
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[7]_EPTYPE_SHIFT		11
#define UOTGHS_DEVEPTCFG[7]_EPTYPE_MASK		0x03
/** @defgroup uotghs_deveptcfg[7]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[7]_AUTOSW Automatic Switch **/
#define UOTGHS_DEVEPTCFG[7]_AUTOSW		(1 << 9)
/** UOTGHS_DEVEPTCFG[7]_EPDIR Endpoint Direction **/
#define UOTGHS_DEVEPTCFG[7]_EPDIR		(1 << 8)

#define UOTGHS_DEVEPTCFG[7]_EPSIZE_SHIFT		4
#define UOTGHS_DEVEPTCFG[7]_EPSIZE_MASK		0x07
/** @defgroup uotghs_deveptcfg[7]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[7]_EPBK_SHIFT		2
#define UOTGHS_DEVEPTCFG[7]_EPBK_MASK		0x03
/** @defgroup uotghs_deveptcfg[7]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[7]_ALLOC Endpoint Memory Allocate **/
#define UOTGHS_DEVEPTCFG[7]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_deveptcfg[8] DEVEPTCFG[8] Device Endpoint Configuration Register (n = 0)
@{*/


#define UOTGHS_DEVEPTCFG[8]_NBTRANS_SHIFT		13
#define UOTGHS_DEVEPTCFG[8]_NBTRANS_MASK		0x03
/** @defgroup uotghs_deveptcfg[8]_nbtrans NBTRANS Number of transaction per microframe for isochronous endpoint
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[8]_EPTYPE_SHIFT		11
#define UOTGHS_DEVEPTCFG[8]_EPTYPE_MASK		0x03
/** @defgroup uotghs_deveptcfg[8]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[8]_AUTOSW Automatic Switch **/
#define UOTGHS_DEVEPTCFG[8]_AUTOSW		(1 << 9)
/** UOTGHS_DEVEPTCFG[8]_EPDIR Endpoint Direction **/
#define UOTGHS_DEVEPTCFG[8]_EPDIR		(1 << 8)

#define UOTGHS_DEVEPTCFG[8]_EPSIZE_SHIFT		4
#define UOTGHS_DEVEPTCFG[8]_EPSIZE_MASK		0x07
/** @defgroup uotghs_deveptcfg[8]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[8]_EPBK_SHIFT		2
#define UOTGHS_DEVEPTCFG[8]_EPBK_MASK		0x03
/** @defgroup uotghs_deveptcfg[8]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[8]_ALLOC Endpoint Memory Allocate **/
#define UOTGHS_DEVEPTCFG[8]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_deveptcfg[9] DEVEPTCFG[9] Device Endpoint Configuration Register (n = 0)
@{*/


#define UOTGHS_DEVEPTCFG[9]_NBTRANS_SHIFT		13
#define UOTGHS_DEVEPTCFG[9]_NBTRANS_MASK		0x03
/** @defgroup uotghs_deveptcfg[9]_nbtrans NBTRANS Number of transaction per microframe for isochronous endpoint
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[9]_EPTYPE_SHIFT		11
#define UOTGHS_DEVEPTCFG[9]_EPTYPE_MASK		0x03
/** @defgroup uotghs_deveptcfg[9]_eptype EPTYPE Endpoint Type
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[9]_AUTOSW Automatic Switch **/
#define UOTGHS_DEVEPTCFG[9]_AUTOSW		(1 << 9)
/** UOTGHS_DEVEPTCFG[9]_EPDIR Endpoint Direction **/
#define UOTGHS_DEVEPTCFG[9]_EPDIR		(1 << 8)

#define UOTGHS_DEVEPTCFG[9]_EPSIZE_SHIFT		4
#define UOTGHS_DEVEPTCFG[9]_EPSIZE_MASK		0x07
/** @defgroup uotghs_deveptcfg[9]_epsize EPSIZE Endpoint Size
@{*/
/**@}*/


#define UOTGHS_DEVEPTCFG[9]_EPBK_SHIFT		2
#define UOTGHS_DEVEPTCFG[9]_EPBK_MASK		0x03
/** @defgroup uotghs_deveptcfg[9]_epbk EPBK Endpoint Banks
@{*/
/**@}*/

/** UOTGHS_DEVEPTCFG[9]_ALLOC Endpoint Memory Allocate **/
#define UOTGHS_DEVEPTCFG[9]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_deveptisr0_isoenpt DEVEPTISR0ISOENPT Device Endpoint Status Register (n = 0)
@{*/


#define UOTGHS_DEVEPTISR0_ISOENPT_BYCT_SHIFT		20
#define UOTGHS_DEVEPTISR0_ISOENPT_BYCT_MASK		0x7ff
/** @defgroup uotghs_deveptisr0_isoenpt_byct BYCT Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR0_ISOENPT_CFGOK Configuration OK Status **/
#define UOTGHS_DEVEPTISR0_ISOENPT_CFGOK		(1 << 18)
/** UOTGHS_DEVEPTISR0_ISOENPT_RWALL Read-write Allowed **/
#define UOTGHS_DEVEPTISR0_ISOENPT_RWALL		(1 << 16)

#define UOTGHS_DEVEPTISR0_ISOENPT_CURRBK_SHIFT		14
#define UOTGHS_DEVEPTISR0_ISOENPT_CURRBK_MASK		0x03
/** @defgroup uotghs_deveptisr0_isoenpt_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR0_ISOENPT_NBUSYBK_SHIFT		12
#define UOTGHS_DEVEPTISR0_ISOENPT_NBUSYBK_MASK		0x03
/** @defgroup uotghs_deveptisr0_isoenpt_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR0_ISOENPT_ERRORTRANS High-bandwidth Isochronous OUT Endpoint Transaction Error Interrupt **/
#define UOTGHS_DEVEPTISR0_ISOENPT_ERRORTRANS		(1 << 10)

#define UOTGHS_DEVEPTISR0_ISOENPT_DTSEQ_SHIFT		8
#define UOTGHS_DEVEPTISR0_ISOENPT_DTSEQ_MASK		0x03
/** @defgroup uotghs_deveptisr0_isoenpt_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR0_ISOENPT_SHORTPACKET Short Packet Interrupt **/
#define UOTGHS_DEVEPTISR0_ISOENPT_SHORTPACKET		(1 << 7)
/** UOTGHS_DEVEPTISR0_ISOENPT_CRCERRI CRC Error Interrupt **/
#define UOTGHS_DEVEPTISR0_ISOENPT_CRCERRI		(1 << 6)
/** UOTGHS_DEVEPTISR0_ISOENPT_OVERFI Overflow Interrupt **/
#define UOTGHS_DEVEPTISR0_ISOENPT_OVERFI		(1 << 5)
/** UOTGHS_DEVEPTISR0_ISOENPT_HBISOFLUSHI High Bandwidth Isochronous IN Flush Interrupt **/
#define UOTGHS_DEVEPTISR0_ISOENPT_HBISOFLUSHI		(1 << 4)
/** UOTGHS_DEVEPTISR0_ISOENPT_HBISOINERRI High Bandwidth Isochronous IN Underflow Error Interrupt **/
#define UOTGHS_DEVEPTISR0_ISOENPT_HBISOINERRI		(1 << 3)
/** UOTGHS_DEVEPTISR0_ISOENPT_UNDERFI Underflow Interrupt **/
#define UOTGHS_DEVEPTISR0_ISOENPT_UNDERFI		(1 << 2)
/** UOTGHS_DEVEPTISR0_ISOENPT_RXOUTI Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTISR0_ISOENPT_RXOUTI		(1 << 1)
/** UOTGHS_DEVEPTISR0_ISOENPT_TXINI Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTISR0_ISOENPT_TXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptisr[0] DEVEPTISR[0] Device Endpoint Status Register (n = 0)
@{*/


#define UOTGHS_DEVEPTISR[0]_BYCT_SHIFT		20
#define UOTGHS_DEVEPTISR[0]_BYCT_MASK		0x7ff
/** @defgroup uotghs_deveptisr[0]_byct BYCT Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[0]_CFGOK Configuration OK Status **/
#define UOTGHS_DEVEPTISR[0]_CFGOK		(1 << 18)
/** UOTGHS_DEVEPTISR[0]_CTRLDIR Control Direction **/
#define UOTGHS_DEVEPTISR[0]_CTRLDIR		(1 << 17)
/** UOTGHS_DEVEPTISR[0]_RWALL Read-write Allowed **/
#define UOTGHS_DEVEPTISR[0]_RWALL		(1 << 16)

#define UOTGHS_DEVEPTISR[0]_CURRBK_SHIFT		14
#define UOTGHS_DEVEPTISR[0]_CURRBK_MASK		0x03
/** @defgroup uotghs_deveptisr[0]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[0]_NBUSYBK_SHIFT		12
#define UOTGHS_DEVEPTISR[0]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_deveptisr[0]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[0]_DTSEQ_SHIFT		8
#define UOTGHS_DEVEPTISR[0]_DTSEQ_MASK		0x03
/** @defgroup uotghs_deveptisr[0]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[0]_SHORTPACKET Short Packet Interrupt **/
#define UOTGHS_DEVEPTISR[0]_SHORTPACKET		(1 << 7)
/** UOTGHS_DEVEPTISR[0]_STALLEDI STALLed Interrupt **/
#define UOTGHS_DEVEPTISR[0]_STALLEDI		(1 << 6)
/** UOTGHS_DEVEPTISR[0]_OVERFI Overflow Interrupt **/
#define UOTGHS_DEVEPTISR[0]_OVERFI		(1 << 5)
/** UOTGHS_DEVEPTISR[0]_NAKINI NAKed IN Interrupt **/
#define UOTGHS_DEVEPTISR[0]_NAKINI		(1 << 4)
/** UOTGHS_DEVEPTISR[0]_NAKOUTI NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTISR[0]_NAKOUTI		(1 << 3)
/** UOTGHS_DEVEPTISR[0]_RXSTPI Received SETUP Interrupt **/
#define UOTGHS_DEVEPTISR[0]_RXSTPI		(1 << 2)
/** UOTGHS_DEVEPTISR[0]_RXOUTI Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTISR[0]_RXOUTI		(1 << 1)
/** UOTGHS_DEVEPTISR[0]_TXINI Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTISR[0]_TXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptisr[1] DEVEPTISR[1] Device Endpoint Status Register (n = 0)
@{*/


#define UOTGHS_DEVEPTISR[1]_BYCT_SHIFT		20
#define UOTGHS_DEVEPTISR[1]_BYCT_MASK		0x7ff
/** @defgroup uotghs_deveptisr[1]_byct BYCT Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[1]_CFGOK Configuration OK Status **/
#define UOTGHS_DEVEPTISR[1]_CFGOK		(1 << 18)
/** UOTGHS_DEVEPTISR[1]_CTRLDIR Control Direction **/
#define UOTGHS_DEVEPTISR[1]_CTRLDIR		(1 << 17)
/** UOTGHS_DEVEPTISR[1]_RWALL Read-write Allowed **/
#define UOTGHS_DEVEPTISR[1]_RWALL		(1 << 16)

#define UOTGHS_DEVEPTISR[1]_CURRBK_SHIFT		14
#define UOTGHS_DEVEPTISR[1]_CURRBK_MASK		0x03
/** @defgroup uotghs_deveptisr[1]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[1]_NBUSYBK_SHIFT		12
#define UOTGHS_DEVEPTISR[1]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_deveptisr[1]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[1]_DTSEQ_SHIFT		8
#define UOTGHS_DEVEPTISR[1]_DTSEQ_MASK		0x03
/** @defgroup uotghs_deveptisr[1]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[1]_SHORTPACKET Short Packet Interrupt **/
#define UOTGHS_DEVEPTISR[1]_SHORTPACKET		(1 << 7)
/** UOTGHS_DEVEPTISR[1]_STALLEDI STALLed Interrupt **/
#define UOTGHS_DEVEPTISR[1]_STALLEDI		(1 << 6)
/** UOTGHS_DEVEPTISR[1]_OVERFI Overflow Interrupt **/
#define UOTGHS_DEVEPTISR[1]_OVERFI		(1 << 5)
/** UOTGHS_DEVEPTISR[1]_NAKINI NAKed IN Interrupt **/
#define UOTGHS_DEVEPTISR[1]_NAKINI		(1 << 4)
/** UOTGHS_DEVEPTISR[1]_NAKOUTI NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTISR[1]_NAKOUTI		(1 << 3)
/** UOTGHS_DEVEPTISR[1]_RXSTPI Received SETUP Interrupt **/
#define UOTGHS_DEVEPTISR[1]_RXSTPI		(1 << 2)
/** UOTGHS_DEVEPTISR[1]_RXOUTI Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTISR[1]_RXOUTI		(1 << 1)
/** UOTGHS_DEVEPTISR[1]_TXINI Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTISR[1]_TXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptisr[2] DEVEPTISR[2] Device Endpoint Status Register (n = 0)
@{*/


#define UOTGHS_DEVEPTISR[2]_BYCT_SHIFT		20
#define UOTGHS_DEVEPTISR[2]_BYCT_MASK		0x7ff
/** @defgroup uotghs_deveptisr[2]_byct BYCT Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[2]_CFGOK Configuration OK Status **/
#define UOTGHS_DEVEPTISR[2]_CFGOK		(1 << 18)
/** UOTGHS_DEVEPTISR[2]_CTRLDIR Control Direction **/
#define UOTGHS_DEVEPTISR[2]_CTRLDIR		(1 << 17)
/** UOTGHS_DEVEPTISR[2]_RWALL Read-write Allowed **/
#define UOTGHS_DEVEPTISR[2]_RWALL		(1 << 16)

#define UOTGHS_DEVEPTISR[2]_CURRBK_SHIFT		14
#define UOTGHS_DEVEPTISR[2]_CURRBK_MASK		0x03
/** @defgroup uotghs_deveptisr[2]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[2]_NBUSYBK_SHIFT		12
#define UOTGHS_DEVEPTISR[2]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_deveptisr[2]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[2]_DTSEQ_SHIFT		8
#define UOTGHS_DEVEPTISR[2]_DTSEQ_MASK		0x03
/** @defgroup uotghs_deveptisr[2]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[2]_SHORTPACKET Short Packet Interrupt **/
#define UOTGHS_DEVEPTISR[2]_SHORTPACKET		(1 << 7)
/** UOTGHS_DEVEPTISR[2]_STALLEDI STALLed Interrupt **/
#define UOTGHS_DEVEPTISR[2]_STALLEDI		(1 << 6)
/** UOTGHS_DEVEPTISR[2]_OVERFI Overflow Interrupt **/
#define UOTGHS_DEVEPTISR[2]_OVERFI		(1 << 5)
/** UOTGHS_DEVEPTISR[2]_NAKINI NAKed IN Interrupt **/
#define UOTGHS_DEVEPTISR[2]_NAKINI		(1 << 4)
/** UOTGHS_DEVEPTISR[2]_NAKOUTI NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTISR[2]_NAKOUTI		(1 << 3)
/** UOTGHS_DEVEPTISR[2]_RXSTPI Received SETUP Interrupt **/
#define UOTGHS_DEVEPTISR[2]_RXSTPI		(1 << 2)
/** UOTGHS_DEVEPTISR[2]_RXOUTI Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTISR[2]_RXOUTI		(1 << 1)
/** UOTGHS_DEVEPTISR[2]_TXINI Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTISR[2]_TXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptisr[3] DEVEPTISR[3] Device Endpoint Status Register (n = 0)
@{*/


#define UOTGHS_DEVEPTISR[3]_BYCT_SHIFT		20
#define UOTGHS_DEVEPTISR[3]_BYCT_MASK		0x7ff
/** @defgroup uotghs_deveptisr[3]_byct BYCT Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[3]_CFGOK Configuration OK Status **/
#define UOTGHS_DEVEPTISR[3]_CFGOK		(1 << 18)
/** UOTGHS_DEVEPTISR[3]_CTRLDIR Control Direction **/
#define UOTGHS_DEVEPTISR[3]_CTRLDIR		(1 << 17)
/** UOTGHS_DEVEPTISR[3]_RWALL Read-write Allowed **/
#define UOTGHS_DEVEPTISR[3]_RWALL		(1 << 16)

#define UOTGHS_DEVEPTISR[3]_CURRBK_SHIFT		14
#define UOTGHS_DEVEPTISR[3]_CURRBK_MASK		0x03
/** @defgroup uotghs_deveptisr[3]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[3]_NBUSYBK_SHIFT		12
#define UOTGHS_DEVEPTISR[3]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_deveptisr[3]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[3]_DTSEQ_SHIFT		8
#define UOTGHS_DEVEPTISR[3]_DTSEQ_MASK		0x03
/** @defgroup uotghs_deveptisr[3]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[3]_SHORTPACKET Short Packet Interrupt **/
#define UOTGHS_DEVEPTISR[3]_SHORTPACKET		(1 << 7)
/** UOTGHS_DEVEPTISR[3]_STALLEDI STALLed Interrupt **/
#define UOTGHS_DEVEPTISR[3]_STALLEDI		(1 << 6)
/** UOTGHS_DEVEPTISR[3]_OVERFI Overflow Interrupt **/
#define UOTGHS_DEVEPTISR[3]_OVERFI		(1 << 5)
/** UOTGHS_DEVEPTISR[3]_NAKINI NAKed IN Interrupt **/
#define UOTGHS_DEVEPTISR[3]_NAKINI		(1 << 4)
/** UOTGHS_DEVEPTISR[3]_NAKOUTI NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTISR[3]_NAKOUTI		(1 << 3)
/** UOTGHS_DEVEPTISR[3]_RXSTPI Received SETUP Interrupt **/
#define UOTGHS_DEVEPTISR[3]_RXSTPI		(1 << 2)
/** UOTGHS_DEVEPTISR[3]_RXOUTI Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTISR[3]_RXOUTI		(1 << 1)
/** UOTGHS_DEVEPTISR[3]_TXINI Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTISR[3]_TXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptisr[4] DEVEPTISR[4] Device Endpoint Status Register (n = 0)
@{*/


#define UOTGHS_DEVEPTISR[4]_BYCT_SHIFT		20
#define UOTGHS_DEVEPTISR[4]_BYCT_MASK		0x7ff
/** @defgroup uotghs_deveptisr[4]_byct BYCT Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[4]_CFGOK Configuration OK Status **/
#define UOTGHS_DEVEPTISR[4]_CFGOK		(1 << 18)
/** UOTGHS_DEVEPTISR[4]_CTRLDIR Control Direction **/
#define UOTGHS_DEVEPTISR[4]_CTRLDIR		(1 << 17)
/** UOTGHS_DEVEPTISR[4]_RWALL Read-write Allowed **/
#define UOTGHS_DEVEPTISR[4]_RWALL		(1 << 16)

#define UOTGHS_DEVEPTISR[4]_CURRBK_SHIFT		14
#define UOTGHS_DEVEPTISR[4]_CURRBK_MASK		0x03
/** @defgroup uotghs_deveptisr[4]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[4]_NBUSYBK_SHIFT		12
#define UOTGHS_DEVEPTISR[4]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_deveptisr[4]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[4]_DTSEQ_SHIFT		8
#define UOTGHS_DEVEPTISR[4]_DTSEQ_MASK		0x03
/** @defgroup uotghs_deveptisr[4]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[4]_SHORTPACKET Short Packet Interrupt **/
#define UOTGHS_DEVEPTISR[4]_SHORTPACKET		(1 << 7)
/** UOTGHS_DEVEPTISR[4]_STALLEDI STALLed Interrupt **/
#define UOTGHS_DEVEPTISR[4]_STALLEDI		(1 << 6)
/** UOTGHS_DEVEPTISR[4]_OVERFI Overflow Interrupt **/
#define UOTGHS_DEVEPTISR[4]_OVERFI		(1 << 5)
/** UOTGHS_DEVEPTISR[4]_NAKINI NAKed IN Interrupt **/
#define UOTGHS_DEVEPTISR[4]_NAKINI		(1 << 4)
/** UOTGHS_DEVEPTISR[4]_NAKOUTI NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTISR[4]_NAKOUTI		(1 << 3)
/** UOTGHS_DEVEPTISR[4]_RXSTPI Received SETUP Interrupt **/
#define UOTGHS_DEVEPTISR[4]_RXSTPI		(1 << 2)
/** UOTGHS_DEVEPTISR[4]_RXOUTI Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTISR[4]_RXOUTI		(1 << 1)
/** UOTGHS_DEVEPTISR[4]_TXINI Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTISR[4]_TXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptisr[5] DEVEPTISR[5] Device Endpoint Status Register (n = 0)
@{*/


#define UOTGHS_DEVEPTISR[5]_BYCT_SHIFT		20
#define UOTGHS_DEVEPTISR[5]_BYCT_MASK		0x7ff
/** @defgroup uotghs_deveptisr[5]_byct BYCT Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[5]_CFGOK Configuration OK Status **/
#define UOTGHS_DEVEPTISR[5]_CFGOK		(1 << 18)
/** UOTGHS_DEVEPTISR[5]_CTRLDIR Control Direction **/
#define UOTGHS_DEVEPTISR[5]_CTRLDIR		(1 << 17)
/** UOTGHS_DEVEPTISR[5]_RWALL Read-write Allowed **/
#define UOTGHS_DEVEPTISR[5]_RWALL		(1 << 16)

#define UOTGHS_DEVEPTISR[5]_CURRBK_SHIFT		14
#define UOTGHS_DEVEPTISR[5]_CURRBK_MASK		0x03
/** @defgroup uotghs_deveptisr[5]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[5]_NBUSYBK_SHIFT		12
#define UOTGHS_DEVEPTISR[5]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_deveptisr[5]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[5]_DTSEQ_SHIFT		8
#define UOTGHS_DEVEPTISR[5]_DTSEQ_MASK		0x03
/** @defgroup uotghs_deveptisr[5]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[5]_SHORTPACKET Short Packet Interrupt **/
#define UOTGHS_DEVEPTISR[5]_SHORTPACKET		(1 << 7)
/** UOTGHS_DEVEPTISR[5]_STALLEDI STALLed Interrupt **/
#define UOTGHS_DEVEPTISR[5]_STALLEDI		(1 << 6)
/** UOTGHS_DEVEPTISR[5]_OVERFI Overflow Interrupt **/
#define UOTGHS_DEVEPTISR[5]_OVERFI		(1 << 5)
/** UOTGHS_DEVEPTISR[5]_NAKINI NAKed IN Interrupt **/
#define UOTGHS_DEVEPTISR[5]_NAKINI		(1 << 4)
/** UOTGHS_DEVEPTISR[5]_NAKOUTI NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTISR[5]_NAKOUTI		(1 << 3)
/** UOTGHS_DEVEPTISR[5]_RXSTPI Received SETUP Interrupt **/
#define UOTGHS_DEVEPTISR[5]_RXSTPI		(1 << 2)
/** UOTGHS_DEVEPTISR[5]_RXOUTI Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTISR[5]_RXOUTI		(1 << 1)
/** UOTGHS_DEVEPTISR[5]_TXINI Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTISR[5]_TXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptisr[6] DEVEPTISR[6] Device Endpoint Status Register (n = 0)
@{*/


#define UOTGHS_DEVEPTISR[6]_BYCT_SHIFT		20
#define UOTGHS_DEVEPTISR[6]_BYCT_MASK		0x7ff
/** @defgroup uotghs_deveptisr[6]_byct BYCT Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[6]_CFGOK Configuration OK Status **/
#define UOTGHS_DEVEPTISR[6]_CFGOK		(1 << 18)
/** UOTGHS_DEVEPTISR[6]_CTRLDIR Control Direction **/
#define UOTGHS_DEVEPTISR[6]_CTRLDIR		(1 << 17)
/** UOTGHS_DEVEPTISR[6]_RWALL Read-write Allowed **/
#define UOTGHS_DEVEPTISR[6]_RWALL		(1 << 16)

#define UOTGHS_DEVEPTISR[6]_CURRBK_SHIFT		14
#define UOTGHS_DEVEPTISR[6]_CURRBK_MASK		0x03
/** @defgroup uotghs_deveptisr[6]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[6]_NBUSYBK_SHIFT		12
#define UOTGHS_DEVEPTISR[6]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_deveptisr[6]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[6]_DTSEQ_SHIFT		8
#define UOTGHS_DEVEPTISR[6]_DTSEQ_MASK		0x03
/** @defgroup uotghs_deveptisr[6]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[6]_SHORTPACKET Short Packet Interrupt **/
#define UOTGHS_DEVEPTISR[6]_SHORTPACKET		(1 << 7)
/** UOTGHS_DEVEPTISR[6]_STALLEDI STALLed Interrupt **/
#define UOTGHS_DEVEPTISR[6]_STALLEDI		(1 << 6)
/** UOTGHS_DEVEPTISR[6]_OVERFI Overflow Interrupt **/
#define UOTGHS_DEVEPTISR[6]_OVERFI		(1 << 5)
/** UOTGHS_DEVEPTISR[6]_NAKINI NAKed IN Interrupt **/
#define UOTGHS_DEVEPTISR[6]_NAKINI		(1 << 4)
/** UOTGHS_DEVEPTISR[6]_NAKOUTI NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTISR[6]_NAKOUTI		(1 << 3)
/** UOTGHS_DEVEPTISR[6]_RXSTPI Received SETUP Interrupt **/
#define UOTGHS_DEVEPTISR[6]_RXSTPI		(1 << 2)
/** UOTGHS_DEVEPTISR[6]_RXOUTI Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTISR[6]_RXOUTI		(1 << 1)
/** UOTGHS_DEVEPTISR[6]_TXINI Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTISR[6]_TXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptisr[7] DEVEPTISR[7] Device Endpoint Status Register (n = 0)
@{*/


#define UOTGHS_DEVEPTISR[7]_BYCT_SHIFT		20
#define UOTGHS_DEVEPTISR[7]_BYCT_MASK		0x7ff
/** @defgroup uotghs_deveptisr[7]_byct BYCT Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[7]_CFGOK Configuration OK Status **/
#define UOTGHS_DEVEPTISR[7]_CFGOK		(1 << 18)
/** UOTGHS_DEVEPTISR[7]_CTRLDIR Control Direction **/
#define UOTGHS_DEVEPTISR[7]_CTRLDIR		(1 << 17)
/** UOTGHS_DEVEPTISR[7]_RWALL Read-write Allowed **/
#define UOTGHS_DEVEPTISR[7]_RWALL		(1 << 16)

#define UOTGHS_DEVEPTISR[7]_CURRBK_SHIFT		14
#define UOTGHS_DEVEPTISR[7]_CURRBK_MASK		0x03
/** @defgroup uotghs_deveptisr[7]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[7]_NBUSYBK_SHIFT		12
#define UOTGHS_DEVEPTISR[7]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_deveptisr[7]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[7]_DTSEQ_SHIFT		8
#define UOTGHS_DEVEPTISR[7]_DTSEQ_MASK		0x03
/** @defgroup uotghs_deveptisr[7]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[7]_SHORTPACKET Short Packet Interrupt **/
#define UOTGHS_DEVEPTISR[7]_SHORTPACKET		(1 << 7)
/** UOTGHS_DEVEPTISR[7]_STALLEDI STALLed Interrupt **/
#define UOTGHS_DEVEPTISR[7]_STALLEDI		(1 << 6)
/** UOTGHS_DEVEPTISR[7]_OVERFI Overflow Interrupt **/
#define UOTGHS_DEVEPTISR[7]_OVERFI		(1 << 5)
/** UOTGHS_DEVEPTISR[7]_NAKINI NAKed IN Interrupt **/
#define UOTGHS_DEVEPTISR[7]_NAKINI		(1 << 4)
/** UOTGHS_DEVEPTISR[7]_NAKOUTI NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTISR[7]_NAKOUTI		(1 << 3)
/** UOTGHS_DEVEPTISR[7]_RXSTPI Received SETUP Interrupt **/
#define UOTGHS_DEVEPTISR[7]_RXSTPI		(1 << 2)
/** UOTGHS_DEVEPTISR[7]_RXOUTI Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTISR[7]_RXOUTI		(1 << 1)
/** UOTGHS_DEVEPTISR[7]_TXINI Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTISR[7]_TXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptisr[8] DEVEPTISR[8] Device Endpoint Status Register (n = 0)
@{*/


#define UOTGHS_DEVEPTISR[8]_BYCT_SHIFT		20
#define UOTGHS_DEVEPTISR[8]_BYCT_MASK		0x7ff
/** @defgroup uotghs_deveptisr[8]_byct BYCT Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[8]_CFGOK Configuration OK Status **/
#define UOTGHS_DEVEPTISR[8]_CFGOK		(1 << 18)
/** UOTGHS_DEVEPTISR[8]_CTRLDIR Control Direction **/
#define UOTGHS_DEVEPTISR[8]_CTRLDIR		(1 << 17)
/** UOTGHS_DEVEPTISR[8]_RWALL Read-write Allowed **/
#define UOTGHS_DEVEPTISR[8]_RWALL		(1 << 16)

#define UOTGHS_DEVEPTISR[8]_CURRBK_SHIFT		14
#define UOTGHS_DEVEPTISR[8]_CURRBK_MASK		0x03
/** @defgroup uotghs_deveptisr[8]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[8]_NBUSYBK_SHIFT		12
#define UOTGHS_DEVEPTISR[8]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_deveptisr[8]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[8]_DTSEQ_SHIFT		8
#define UOTGHS_DEVEPTISR[8]_DTSEQ_MASK		0x03
/** @defgroup uotghs_deveptisr[8]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[8]_SHORTPACKET Short Packet Interrupt **/
#define UOTGHS_DEVEPTISR[8]_SHORTPACKET		(1 << 7)
/** UOTGHS_DEVEPTISR[8]_STALLEDI STALLed Interrupt **/
#define UOTGHS_DEVEPTISR[8]_STALLEDI		(1 << 6)
/** UOTGHS_DEVEPTISR[8]_OVERFI Overflow Interrupt **/
#define UOTGHS_DEVEPTISR[8]_OVERFI		(1 << 5)
/** UOTGHS_DEVEPTISR[8]_NAKINI NAKed IN Interrupt **/
#define UOTGHS_DEVEPTISR[8]_NAKINI		(1 << 4)
/** UOTGHS_DEVEPTISR[8]_NAKOUTI NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTISR[8]_NAKOUTI		(1 << 3)
/** UOTGHS_DEVEPTISR[8]_RXSTPI Received SETUP Interrupt **/
#define UOTGHS_DEVEPTISR[8]_RXSTPI		(1 << 2)
/** UOTGHS_DEVEPTISR[8]_RXOUTI Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTISR[8]_RXOUTI		(1 << 1)
/** UOTGHS_DEVEPTISR[8]_TXINI Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTISR[8]_TXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptisr[9] DEVEPTISR[9] Device Endpoint Status Register (n = 0)
@{*/


#define UOTGHS_DEVEPTISR[9]_BYCT_SHIFT		20
#define UOTGHS_DEVEPTISR[9]_BYCT_MASK		0x7ff
/** @defgroup uotghs_deveptisr[9]_byct BYCT Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[9]_CFGOK Configuration OK Status **/
#define UOTGHS_DEVEPTISR[9]_CFGOK		(1 << 18)
/** UOTGHS_DEVEPTISR[9]_CTRLDIR Control Direction **/
#define UOTGHS_DEVEPTISR[9]_CTRLDIR		(1 << 17)
/** UOTGHS_DEVEPTISR[9]_RWALL Read-write Allowed **/
#define UOTGHS_DEVEPTISR[9]_RWALL		(1 << 16)

#define UOTGHS_DEVEPTISR[9]_CURRBK_SHIFT		14
#define UOTGHS_DEVEPTISR[9]_CURRBK_MASK		0x03
/** @defgroup uotghs_deveptisr[9]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[9]_NBUSYBK_SHIFT		12
#define UOTGHS_DEVEPTISR[9]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_deveptisr[9]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_DEVEPTISR[9]_DTSEQ_SHIFT		8
#define UOTGHS_DEVEPTISR[9]_DTSEQ_MASK		0x03
/** @defgroup uotghs_deveptisr[9]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_DEVEPTISR[9]_SHORTPACKET Short Packet Interrupt **/
#define UOTGHS_DEVEPTISR[9]_SHORTPACKET		(1 << 7)
/** UOTGHS_DEVEPTISR[9]_STALLEDI STALLed Interrupt **/
#define UOTGHS_DEVEPTISR[9]_STALLEDI		(1 << 6)
/** UOTGHS_DEVEPTISR[9]_OVERFI Overflow Interrupt **/
#define UOTGHS_DEVEPTISR[9]_OVERFI		(1 << 5)
/** UOTGHS_DEVEPTISR[9]_NAKINI NAKed IN Interrupt **/
#define UOTGHS_DEVEPTISR[9]_NAKINI		(1 << 4)
/** UOTGHS_DEVEPTISR[9]_NAKOUTI NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTISR[9]_NAKOUTI		(1 << 3)
/** UOTGHS_DEVEPTISR[9]_RXSTPI Received SETUP Interrupt **/
#define UOTGHS_DEVEPTISR[9]_RXSTPI		(1 << 2)
/** UOTGHS_DEVEPTISR[9]_RXOUTI Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTISR[9]_RXOUTI		(1 << 1)
/** UOTGHS_DEVEPTISR[9]_TXINI Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTISR[9]_TXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_devepticr0_isoenpt DEVEPTICR0ISOENPT Device Endpoint Clear Register (n = 0)
@{*/

/** UOTGHS_DEVEPTICR0_ISOENPT_SHORTPACKETC Short Packet Interrupt Clear **/
#define UOTGHS_DEVEPTICR0_ISOENPT_SHORTPACKETC		(1 << 7)
/** UOTGHS_DEVEPTICR0_ISOENPT_CRCERRIC CRC Error Interrupt Clear **/
#define UOTGHS_DEVEPTICR0_ISOENPT_CRCERRIC		(1 << 6)
/** UOTGHS_DEVEPTICR0_ISOENPT_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTICR0_ISOENPT_OVERFIC		(1 << 5)
/** UOTGHS_DEVEPTICR0_ISOENPT_HBISOFLUSHIC High Bandwidth Isochronous IN Flush Interrupt Clear **/
#define UOTGHS_DEVEPTICR0_ISOENPT_HBISOFLUSHIC		(1 << 4)
/** UOTGHS_DEVEPTICR0_ISOENPT_HBISOINERRIC High bandwidth isochronous IN Underflow Error Interrupt Clear **/
#define UOTGHS_DEVEPTICR0_ISOENPT_HBISOINERRIC		(1 << 3)
/** UOTGHS_DEVEPTICR0_ISOENPT_UNDERFIC Underflow Interrupt Clear **/
#define UOTGHS_DEVEPTICR0_ISOENPT_UNDERFIC		(1 << 2)
/** UOTGHS_DEVEPTICR0_ISOENPT_RXOUTIC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR0_ISOENPT_RXOUTIC		(1 << 1)
/** UOTGHS_DEVEPTICR0_ISOENPT_TXINIC Transmitted IN Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR0_ISOENPT_TXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_devepticr[0] DEVEPTICR[0] Device Endpoint Clear Register (n = 0)
@{*/

/** UOTGHS_DEVEPTICR[0]_SHORTPACKETC Short Packet Interrupt Clear **/
#define UOTGHS_DEVEPTICR[0]_SHORTPACKETC		(1 << 7)
/** UOTGHS_DEVEPTICR[0]_STALLEDIC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTICR[0]_STALLEDIC		(1 << 6)
/** UOTGHS_DEVEPTICR[0]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTICR[0]_OVERFIC		(1 << 5)
/** UOTGHS_DEVEPTICR[0]_NAKINIC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTICR[0]_NAKINIC		(1 << 4)
/** UOTGHS_DEVEPTICR[0]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTICR[0]_NAKOUTIC		(1 << 3)
/** UOTGHS_DEVEPTICR[0]_RXSTPIC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTICR[0]_RXSTPIC		(1 << 2)
/** UOTGHS_DEVEPTICR[0]_RXOUTIC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[0]_RXOUTIC		(1 << 1)
/** UOTGHS_DEVEPTICR[0]_TXINIC Transmitted IN Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[0]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_devepticr[1] DEVEPTICR[1] Device Endpoint Clear Register (n = 0)
@{*/

/** UOTGHS_DEVEPTICR[1]_SHORTPACKETC Short Packet Interrupt Clear **/
#define UOTGHS_DEVEPTICR[1]_SHORTPACKETC		(1 << 7)
/** UOTGHS_DEVEPTICR[1]_STALLEDIC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTICR[1]_STALLEDIC		(1 << 6)
/** UOTGHS_DEVEPTICR[1]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTICR[1]_OVERFIC		(1 << 5)
/** UOTGHS_DEVEPTICR[1]_NAKINIC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTICR[1]_NAKINIC		(1 << 4)
/** UOTGHS_DEVEPTICR[1]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTICR[1]_NAKOUTIC		(1 << 3)
/** UOTGHS_DEVEPTICR[1]_RXSTPIC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTICR[1]_RXSTPIC		(1 << 2)
/** UOTGHS_DEVEPTICR[1]_RXOUTIC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[1]_RXOUTIC		(1 << 1)
/** UOTGHS_DEVEPTICR[1]_TXINIC Transmitted IN Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[1]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_devepticr[2] DEVEPTICR[2] Device Endpoint Clear Register (n = 0)
@{*/

/** UOTGHS_DEVEPTICR[2]_SHORTPACKETC Short Packet Interrupt Clear **/
#define UOTGHS_DEVEPTICR[2]_SHORTPACKETC		(1 << 7)
/** UOTGHS_DEVEPTICR[2]_STALLEDIC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTICR[2]_STALLEDIC		(1 << 6)
/** UOTGHS_DEVEPTICR[2]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTICR[2]_OVERFIC		(1 << 5)
/** UOTGHS_DEVEPTICR[2]_NAKINIC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTICR[2]_NAKINIC		(1 << 4)
/** UOTGHS_DEVEPTICR[2]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTICR[2]_NAKOUTIC		(1 << 3)
/** UOTGHS_DEVEPTICR[2]_RXSTPIC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTICR[2]_RXSTPIC		(1 << 2)
/** UOTGHS_DEVEPTICR[2]_RXOUTIC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[2]_RXOUTIC		(1 << 1)
/** UOTGHS_DEVEPTICR[2]_TXINIC Transmitted IN Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[2]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_devepticr[3] DEVEPTICR[3] Device Endpoint Clear Register (n = 0)
@{*/

/** UOTGHS_DEVEPTICR[3]_SHORTPACKETC Short Packet Interrupt Clear **/
#define UOTGHS_DEVEPTICR[3]_SHORTPACKETC		(1 << 7)
/** UOTGHS_DEVEPTICR[3]_STALLEDIC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTICR[3]_STALLEDIC		(1 << 6)
/** UOTGHS_DEVEPTICR[3]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTICR[3]_OVERFIC		(1 << 5)
/** UOTGHS_DEVEPTICR[3]_NAKINIC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTICR[3]_NAKINIC		(1 << 4)
/** UOTGHS_DEVEPTICR[3]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTICR[3]_NAKOUTIC		(1 << 3)
/** UOTGHS_DEVEPTICR[3]_RXSTPIC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTICR[3]_RXSTPIC		(1 << 2)
/** UOTGHS_DEVEPTICR[3]_RXOUTIC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[3]_RXOUTIC		(1 << 1)
/** UOTGHS_DEVEPTICR[3]_TXINIC Transmitted IN Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[3]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_devepticr[4] DEVEPTICR[4] Device Endpoint Clear Register (n = 0)
@{*/

/** UOTGHS_DEVEPTICR[4]_SHORTPACKETC Short Packet Interrupt Clear **/
#define UOTGHS_DEVEPTICR[4]_SHORTPACKETC		(1 << 7)
/** UOTGHS_DEVEPTICR[4]_STALLEDIC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTICR[4]_STALLEDIC		(1 << 6)
/** UOTGHS_DEVEPTICR[4]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTICR[4]_OVERFIC		(1 << 5)
/** UOTGHS_DEVEPTICR[4]_NAKINIC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTICR[4]_NAKINIC		(1 << 4)
/** UOTGHS_DEVEPTICR[4]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTICR[4]_NAKOUTIC		(1 << 3)
/** UOTGHS_DEVEPTICR[4]_RXSTPIC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTICR[4]_RXSTPIC		(1 << 2)
/** UOTGHS_DEVEPTICR[4]_RXOUTIC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[4]_RXOUTIC		(1 << 1)
/** UOTGHS_DEVEPTICR[4]_TXINIC Transmitted IN Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[4]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_devepticr[5] DEVEPTICR[5] Device Endpoint Clear Register (n = 0)
@{*/

/** UOTGHS_DEVEPTICR[5]_SHORTPACKETC Short Packet Interrupt Clear **/
#define UOTGHS_DEVEPTICR[5]_SHORTPACKETC		(1 << 7)
/** UOTGHS_DEVEPTICR[5]_STALLEDIC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTICR[5]_STALLEDIC		(1 << 6)
/** UOTGHS_DEVEPTICR[5]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTICR[5]_OVERFIC		(1 << 5)
/** UOTGHS_DEVEPTICR[5]_NAKINIC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTICR[5]_NAKINIC		(1 << 4)
/** UOTGHS_DEVEPTICR[5]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTICR[5]_NAKOUTIC		(1 << 3)
/** UOTGHS_DEVEPTICR[5]_RXSTPIC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTICR[5]_RXSTPIC		(1 << 2)
/** UOTGHS_DEVEPTICR[5]_RXOUTIC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[5]_RXOUTIC		(1 << 1)
/** UOTGHS_DEVEPTICR[5]_TXINIC Transmitted IN Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[5]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_devepticr[6] DEVEPTICR[6] Device Endpoint Clear Register (n = 0)
@{*/

/** UOTGHS_DEVEPTICR[6]_SHORTPACKETC Short Packet Interrupt Clear **/
#define UOTGHS_DEVEPTICR[6]_SHORTPACKETC		(1 << 7)
/** UOTGHS_DEVEPTICR[6]_STALLEDIC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTICR[6]_STALLEDIC		(1 << 6)
/** UOTGHS_DEVEPTICR[6]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTICR[6]_OVERFIC		(1 << 5)
/** UOTGHS_DEVEPTICR[6]_NAKINIC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTICR[6]_NAKINIC		(1 << 4)
/** UOTGHS_DEVEPTICR[6]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTICR[6]_NAKOUTIC		(1 << 3)
/** UOTGHS_DEVEPTICR[6]_RXSTPIC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTICR[6]_RXSTPIC		(1 << 2)
/** UOTGHS_DEVEPTICR[6]_RXOUTIC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[6]_RXOUTIC		(1 << 1)
/** UOTGHS_DEVEPTICR[6]_TXINIC Transmitted IN Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[6]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_devepticr[7] DEVEPTICR[7] Device Endpoint Clear Register (n = 0)
@{*/

/** UOTGHS_DEVEPTICR[7]_SHORTPACKETC Short Packet Interrupt Clear **/
#define UOTGHS_DEVEPTICR[7]_SHORTPACKETC		(1 << 7)
/** UOTGHS_DEVEPTICR[7]_STALLEDIC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTICR[7]_STALLEDIC		(1 << 6)
/** UOTGHS_DEVEPTICR[7]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTICR[7]_OVERFIC		(1 << 5)
/** UOTGHS_DEVEPTICR[7]_NAKINIC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTICR[7]_NAKINIC		(1 << 4)
/** UOTGHS_DEVEPTICR[7]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTICR[7]_NAKOUTIC		(1 << 3)
/** UOTGHS_DEVEPTICR[7]_RXSTPIC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTICR[7]_RXSTPIC		(1 << 2)
/** UOTGHS_DEVEPTICR[7]_RXOUTIC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[7]_RXOUTIC		(1 << 1)
/** UOTGHS_DEVEPTICR[7]_TXINIC Transmitted IN Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[7]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_devepticr[8] DEVEPTICR[8] Device Endpoint Clear Register (n = 0)
@{*/

/** UOTGHS_DEVEPTICR[8]_SHORTPACKETC Short Packet Interrupt Clear **/
#define UOTGHS_DEVEPTICR[8]_SHORTPACKETC		(1 << 7)
/** UOTGHS_DEVEPTICR[8]_STALLEDIC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTICR[8]_STALLEDIC		(1 << 6)
/** UOTGHS_DEVEPTICR[8]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTICR[8]_OVERFIC		(1 << 5)
/** UOTGHS_DEVEPTICR[8]_NAKINIC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTICR[8]_NAKINIC		(1 << 4)
/** UOTGHS_DEVEPTICR[8]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTICR[8]_NAKOUTIC		(1 << 3)
/** UOTGHS_DEVEPTICR[8]_RXSTPIC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTICR[8]_RXSTPIC		(1 << 2)
/** UOTGHS_DEVEPTICR[8]_RXOUTIC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[8]_RXOUTIC		(1 << 1)
/** UOTGHS_DEVEPTICR[8]_TXINIC Transmitted IN Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[8]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_devepticr[9] DEVEPTICR[9] Device Endpoint Clear Register (n = 0)
@{*/

/** UOTGHS_DEVEPTICR[9]_SHORTPACKETC Short Packet Interrupt Clear **/
#define UOTGHS_DEVEPTICR[9]_SHORTPACKETC		(1 << 7)
/** UOTGHS_DEVEPTICR[9]_STALLEDIC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTICR[9]_STALLEDIC		(1 << 6)
/** UOTGHS_DEVEPTICR[9]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTICR[9]_OVERFIC		(1 << 5)
/** UOTGHS_DEVEPTICR[9]_NAKINIC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTICR[9]_NAKINIC		(1 << 4)
/** UOTGHS_DEVEPTICR[9]_NAKOUTIC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTICR[9]_NAKOUTIC		(1 << 3)
/** UOTGHS_DEVEPTICR[9]_RXSTPIC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTICR[9]_RXSTPIC		(1 << 2)
/** UOTGHS_DEVEPTICR[9]_RXOUTIC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[9]_RXOUTIC		(1 << 1)
/** UOTGHS_DEVEPTICR[9]_TXINIC Transmitted IN Data Interrupt Clear **/
#define UOTGHS_DEVEPTICR[9]_TXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptifr0_isoenpt DEVEPTIFR0ISOENPT Device Endpoint Set Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIFR0_ISOENPT_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define UOTGHS_DEVEPTIFR0_ISOENPT_NBUSYBKS		(1 << 12)
/** UOTGHS_DEVEPTIFR0_ISOENPT_SHORTPACKETS Short Packet Interrupt Set **/
#define UOTGHS_DEVEPTIFR0_ISOENPT_SHORTPACKETS		(1 << 7)
/** UOTGHS_DEVEPTIFR0_ISOENPT_CRCERRIS CRC Error Interrupt Set **/
#define UOTGHS_DEVEPTIFR0_ISOENPT_CRCERRIS		(1 << 6)
/** UOTGHS_DEVEPTIFR0_ISOENPT_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_DEVEPTIFR0_ISOENPT_OVERFIS		(1 << 5)
/** UOTGHS_DEVEPTIFR0_ISOENPT_HBISOFLUSHIS High Bandwidth Isochronous IN Flush Interrupt Set **/
#define UOTGHS_DEVEPTIFR0_ISOENPT_HBISOFLUSHIS		(1 << 4)
/** UOTGHS_DEVEPTIFR0_ISOENPT_HBISOINERRIS High bandwidth isochronous IN Underflow Error Interrupt Set **/
#define UOTGHS_DEVEPTIFR0_ISOENPT_HBISOINERRIS		(1 << 3)
/** UOTGHS_DEVEPTIFR0_ISOENPT_UNDERFIS Underflow Interrupt Set **/
#define UOTGHS_DEVEPTIFR0_ISOENPT_UNDERFIS		(1 << 2)
/** UOTGHS_DEVEPTIFR0_ISOENPT_RXOUTIS Received OUT Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR0_ISOENPT_RXOUTIS		(1 << 1)
/** UOTGHS_DEVEPTIFR0_ISOENPT_TXINIS Transmitted IN Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR0_ISOENPT_TXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptifr[0] DEVEPTIFR[0] Device Endpoint Set Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIFR[0]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define UOTGHS_DEVEPTIFR[0]_NBUSYBKS		(1 << 12)
/** UOTGHS_DEVEPTIFR[0]_SHORTPACKETS Short Packet Interrupt Set **/
#define UOTGHS_DEVEPTIFR[0]_SHORTPACKETS		(1 << 7)
/** UOTGHS_DEVEPTIFR[0]_STALLEDIS STALLed Interrupt Set **/
#define UOTGHS_DEVEPTIFR[0]_STALLEDIS		(1 << 6)
/** UOTGHS_DEVEPTIFR[0]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_DEVEPTIFR[0]_OVERFIS		(1 << 5)
/** UOTGHS_DEVEPTIFR[0]_NAKINIS NAKed IN Interrupt Set **/
#define UOTGHS_DEVEPTIFR[0]_NAKINIS		(1 << 4)
/** UOTGHS_DEVEPTIFR[0]_NAKOUTIS NAKed OUT Interrupt Set **/
#define UOTGHS_DEVEPTIFR[0]_NAKOUTIS		(1 << 3)
/** UOTGHS_DEVEPTIFR[0]_RXSTPIS Received SETUP Interrupt Set **/
#define UOTGHS_DEVEPTIFR[0]_RXSTPIS		(1 << 2)
/** UOTGHS_DEVEPTIFR[0]_RXOUTIS Received OUT Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[0]_RXOUTIS		(1 << 1)
/** UOTGHS_DEVEPTIFR[0]_TXINIS Transmitted IN Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[0]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptifr[1] DEVEPTIFR[1] Device Endpoint Set Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIFR[1]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define UOTGHS_DEVEPTIFR[1]_NBUSYBKS		(1 << 12)
/** UOTGHS_DEVEPTIFR[1]_SHORTPACKETS Short Packet Interrupt Set **/
#define UOTGHS_DEVEPTIFR[1]_SHORTPACKETS		(1 << 7)
/** UOTGHS_DEVEPTIFR[1]_STALLEDIS STALLed Interrupt Set **/
#define UOTGHS_DEVEPTIFR[1]_STALLEDIS		(1 << 6)
/** UOTGHS_DEVEPTIFR[1]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_DEVEPTIFR[1]_OVERFIS		(1 << 5)
/** UOTGHS_DEVEPTIFR[1]_NAKINIS NAKed IN Interrupt Set **/
#define UOTGHS_DEVEPTIFR[1]_NAKINIS		(1 << 4)
/** UOTGHS_DEVEPTIFR[1]_NAKOUTIS NAKed OUT Interrupt Set **/
#define UOTGHS_DEVEPTIFR[1]_NAKOUTIS		(1 << 3)
/** UOTGHS_DEVEPTIFR[1]_RXSTPIS Received SETUP Interrupt Set **/
#define UOTGHS_DEVEPTIFR[1]_RXSTPIS		(1 << 2)
/** UOTGHS_DEVEPTIFR[1]_RXOUTIS Received OUT Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[1]_RXOUTIS		(1 << 1)
/** UOTGHS_DEVEPTIFR[1]_TXINIS Transmitted IN Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[1]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptifr[2] DEVEPTIFR[2] Device Endpoint Set Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIFR[2]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define UOTGHS_DEVEPTIFR[2]_NBUSYBKS		(1 << 12)
/** UOTGHS_DEVEPTIFR[2]_SHORTPACKETS Short Packet Interrupt Set **/
#define UOTGHS_DEVEPTIFR[2]_SHORTPACKETS		(1 << 7)
/** UOTGHS_DEVEPTIFR[2]_STALLEDIS STALLed Interrupt Set **/
#define UOTGHS_DEVEPTIFR[2]_STALLEDIS		(1 << 6)
/** UOTGHS_DEVEPTIFR[2]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_DEVEPTIFR[2]_OVERFIS		(1 << 5)
/** UOTGHS_DEVEPTIFR[2]_NAKINIS NAKed IN Interrupt Set **/
#define UOTGHS_DEVEPTIFR[2]_NAKINIS		(1 << 4)
/** UOTGHS_DEVEPTIFR[2]_NAKOUTIS NAKed OUT Interrupt Set **/
#define UOTGHS_DEVEPTIFR[2]_NAKOUTIS		(1 << 3)
/** UOTGHS_DEVEPTIFR[2]_RXSTPIS Received SETUP Interrupt Set **/
#define UOTGHS_DEVEPTIFR[2]_RXSTPIS		(1 << 2)
/** UOTGHS_DEVEPTIFR[2]_RXOUTIS Received OUT Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[2]_RXOUTIS		(1 << 1)
/** UOTGHS_DEVEPTIFR[2]_TXINIS Transmitted IN Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[2]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptifr[3] DEVEPTIFR[3] Device Endpoint Set Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIFR[3]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define UOTGHS_DEVEPTIFR[3]_NBUSYBKS		(1 << 12)
/** UOTGHS_DEVEPTIFR[3]_SHORTPACKETS Short Packet Interrupt Set **/
#define UOTGHS_DEVEPTIFR[3]_SHORTPACKETS		(1 << 7)
/** UOTGHS_DEVEPTIFR[3]_STALLEDIS STALLed Interrupt Set **/
#define UOTGHS_DEVEPTIFR[3]_STALLEDIS		(1 << 6)
/** UOTGHS_DEVEPTIFR[3]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_DEVEPTIFR[3]_OVERFIS		(1 << 5)
/** UOTGHS_DEVEPTIFR[3]_NAKINIS NAKed IN Interrupt Set **/
#define UOTGHS_DEVEPTIFR[3]_NAKINIS		(1 << 4)
/** UOTGHS_DEVEPTIFR[3]_NAKOUTIS NAKed OUT Interrupt Set **/
#define UOTGHS_DEVEPTIFR[3]_NAKOUTIS		(1 << 3)
/** UOTGHS_DEVEPTIFR[3]_RXSTPIS Received SETUP Interrupt Set **/
#define UOTGHS_DEVEPTIFR[3]_RXSTPIS		(1 << 2)
/** UOTGHS_DEVEPTIFR[3]_RXOUTIS Received OUT Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[3]_RXOUTIS		(1 << 1)
/** UOTGHS_DEVEPTIFR[3]_TXINIS Transmitted IN Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[3]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptifr[4] DEVEPTIFR[4] Device Endpoint Set Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIFR[4]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define UOTGHS_DEVEPTIFR[4]_NBUSYBKS		(1 << 12)
/** UOTGHS_DEVEPTIFR[4]_SHORTPACKETS Short Packet Interrupt Set **/
#define UOTGHS_DEVEPTIFR[4]_SHORTPACKETS		(1 << 7)
/** UOTGHS_DEVEPTIFR[4]_STALLEDIS STALLed Interrupt Set **/
#define UOTGHS_DEVEPTIFR[4]_STALLEDIS		(1 << 6)
/** UOTGHS_DEVEPTIFR[4]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_DEVEPTIFR[4]_OVERFIS		(1 << 5)
/** UOTGHS_DEVEPTIFR[4]_NAKINIS NAKed IN Interrupt Set **/
#define UOTGHS_DEVEPTIFR[4]_NAKINIS		(1 << 4)
/** UOTGHS_DEVEPTIFR[4]_NAKOUTIS NAKed OUT Interrupt Set **/
#define UOTGHS_DEVEPTIFR[4]_NAKOUTIS		(1 << 3)
/** UOTGHS_DEVEPTIFR[4]_RXSTPIS Received SETUP Interrupt Set **/
#define UOTGHS_DEVEPTIFR[4]_RXSTPIS		(1 << 2)
/** UOTGHS_DEVEPTIFR[4]_RXOUTIS Received OUT Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[4]_RXOUTIS		(1 << 1)
/** UOTGHS_DEVEPTIFR[4]_TXINIS Transmitted IN Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[4]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptifr[5] DEVEPTIFR[5] Device Endpoint Set Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIFR[5]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define UOTGHS_DEVEPTIFR[5]_NBUSYBKS		(1 << 12)
/** UOTGHS_DEVEPTIFR[5]_SHORTPACKETS Short Packet Interrupt Set **/
#define UOTGHS_DEVEPTIFR[5]_SHORTPACKETS		(1 << 7)
/** UOTGHS_DEVEPTIFR[5]_STALLEDIS STALLed Interrupt Set **/
#define UOTGHS_DEVEPTIFR[5]_STALLEDIS		(1 << 6)
/** UOTGHS_DEVEPTIFR[5]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_DEVEPTIFR[5]_OVERFIS		(1 << 5)
/** UOTGHS_DEVEPTIFR[5]_NAKINIS NAKed IN Interrupt Set **/
#define UOTGHS_DEVEPTIFR[5]_NAKINIS		(1 << 4)
/** UOTGHS_DEVEPTIFR[5]_NAKOUTIS NAKed OUT Interrupt Set **/
#define UOTGHS_DEVEPTIFR[5]_NAKOUTIS		(1 << 3)
/** UOTGHS_DEVEPTIFR[5]_RXSTPIS Received SETUP Interrupt Set **/
#define UOTGHS_DEVEPTIFR[5]_RXSTPIS		(1 << 2)
/** UOTGHS_DEVEPTIFR[5]_RXOUTIS Received OUT Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[5]_RXOUTIS		(1 << 1)
/** UOTGHS_DEVEPTIFR[5]_TXINIS Transmitted IN Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[5]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptifr[6] DEVEPTIFR[6] Device Endpoint Set Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIFR[6]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define UOTGHS_DEVEPTIFR[6]_NBUSYBKS		(1 << 12)
/** UOTGHS_DEVEPTIFR[6]_SHORTPACKETS Short Packet Interrupt Set **/
#define UOTGHS_DEVEPTIFR[6]_SHORTPACKETS		(1 << 7)
/** UOTGHS_DEVEPTIFR[6]_STALLEDIS STALLed Interrupt Set **/
#define UOTGHS_DEVEPTIFR[6]_STALLEDIS		(1 << 6)
/** UOTGHS_DEVEPTIFR[6]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_DEVEPTIFR[6]_OVERFIS		(1 << 5)
/** UOTGHS_DEVEPTIFR[6]_NAKINIS NAKed IN Interrupt Set **/
#define UOTGHS_DEVEPTIFR[6]_NAKINIS		(1 << 4)
/** UOTGHS_DEVEPTIFR[6]_NAKOUTIS NAKed OUT Interrupt Set **/
#define UOTGHS_DEVEPTIFR[6]_NAKOUTIS		(1 << 3)
/** UOTGHS_DEVEPTIFR[6]_RXSTPIS Received SETUP Interrupt Set **/
#define UOTGHS_DEVEPTIFR[6]_RXSTPIS		(1 << 2)
/** UOTGHS_DEVEPTIFR[6]_RXOUTIS Received OUT Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[6]_RXOUTIS		(1 << 1)
/** UOTGHS_DEVEPTIFR[6]_TXINIS Transmitted IN Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[6]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptifr[7] DEVEPTIFR[7] Device Endpoint Set Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIFR[7]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define UOTGHS_DEVEPTIFR[7]_NBUSYBKS		(1 << 12)
/** UOTGHS_DEVEPTIFR[7]_SHORTPACKETS Short Packet Interrupt Set **/
#define UOTGHS_DEVEPTIFR[7]_SHORTPACKETS		(1 << 7)
/** UOTGHS_DEVEPTIFR[7]_STALLEDIS STALLed Interrupt Set **/
#define UOTGHS_DEVEPTIFR[7]_STALLEDIS		(1 << 6)
/** UOTGHS_DEVEPTIFR[7]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_DEVEPTIFR[7]_OVERFIS		(1 << 5)
/** UOTGHS_DEVEPTIFR[7]_NAKINIS NAKed IN Interrupt Set **/
#define UOTGHS_DEVEPTIFR[7]_NAKINIS		(1 << 4)
/** UOTGHS_DEVEPTIFR[7]_NAKOUTIS NAKed OUT Interrupt Set **/
#define UOTGHS_DEVEPTIFR[7]_NAKOUTIS		(1 << 3)
/** UOTGHS_DEVEPTIFR[7]_RXSTPIS Received SETUP Interrupt Set **/
#define UOTGHS_DEVEPTIFR[7]_RXSTPIS		(1 << 2)
/** UOTGHS_DEVEPTIFR[7]_RXOUTIS Received OUT Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[7]_RXOUTIS		(1 << 1)
/** UOTGHS_DEVEPTIFR[7]_TXINIS Transmitted IN Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[7]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptifr[8] DEVEPTIFR[8] Device Endpoint Set Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIFR[8]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define UOTGHS_DEVEPTIFR[8]_NBUSYBKS		(1 << 12)
/** UOTGHS_DEVEPTIFR[8]_SHORTPACKETS Short Packet Interrupt Set **/
#define UOTGHS_DEVEPTIFR[8]_SHORTPACKETS		(1 << 7)
/** UOTGHS_DEVEPTIFR[8]_STALLEDIS STALLed Interrupt Set **/
#define UOTGHS_DEVEPTIFR[8]_STALLEDIS		(1 << 6)
/** UOTGHS_DEVEPTIFR[8]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_DEVEPTIFR[8]_OVERFIS		(1 << 5)
/** UOTGHS_DEVEPTIFR[8]_NAKINIS NAKed IN Interrupt Set **/
#define UOTGHS_DEVEPTIFR[8]_NAKINIS		(1 << 4)
/** UOTGHS_DEVEPTIFR[8]_NAKOUTIS NAKed OUT Interrupt Set **/
#define UOTGHS_DEVEPTIFR[8]_NAKOUTIS		(1 << 3)
/** UOTGHS_DEVEPTIFR[8]_RXSTPIS Received SETUP Interrupt Set **/
#define UOTGHS_DEVEPTIFR[8]_RXSTPIS		(1 << 2)
/** UOTGHS_DEVEPTIFR[8]_RXOUTIS Received OUT Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[8]_RXOUTIS		(1 << 1)
/** UOTGHS_DEVEPTIFR[8]_TXINIS Transmitted IN Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[8]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptifr[9] DEVEPTIFR[9] Device Endpoint Set Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIFR[9]_NBUSYBKS Number of Busy Banks Interrupt Set **/
#define UOTGHS_DEVEPTIFR[9]_NBUSYBKS		(1 << 12)
/** UOTGHS_DEVEPTIFR[9]_SHORTPACKETS Short Packet Interrupt Set **/
#define UOTGHS_DEVEPTIFR[9]_SHORTPACKETS		(1 << 7)
/** UOTGHS_DEVEPTIFR[9]_STALLEDIS STALLed Interrupt Set **/
#define UOTGHS_DEVEPTIFR[9]_STALLEDIS		(1 << 6)
/** UOTGHS_DEVEPTIFR[9]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_DEVEPTIFR[9]_OVERFIS		(1 << 5)
/** UOTGHS_DEVEPTIFR[9]_NAKINIS NAKed IN Interrupt Set **/
#define UOTGHS_DEVEPTIFR[9]_NAKINIS		(1 << 4)
/** UOTGHS_DEVEPTIFR[9]_NAKOUTIS NAKed OUT Interrupt Set **/
#define UOTGHS_DEVEPTIFR[9]_NAKOUTIS		(1 << 3)
/** UOTGHS_DEVEPTIFR[9]_RXSTPIS Received SETUP Interrupt Set **/
#define UOTGHS_DEVEPTIFR[9]_RXSTPIS		(1 << 2)
/** UOTGHS_DEVEPTIFR[9]_RXOUTIS Received OUT Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[9]_RXOUTIS		(1 << 1)
/** UOTGHS_DEVEPTIFR[9]_TXINIS Transmitted IN Data Interrupt Set **/
#define UOTGHS_DEVEPTIFR[9]_TXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptimr0_isoenpt DEVEPTIMR0ISOENPT Device Endpoint Mask Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIMR0_ISOENPT_RSTDT Reset Data Toggle **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_RSTDT		(1 << 18)
/** UOTGHS_DEVEPTIMR0_ISOENPT_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_EPDISHDMA		(1 << 16)
/** UOTGHS_DEVEPTIMR0_ISOENPT_FIFOCON FIFO Control **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_FIFOCON		(1 << 14)
/** UOTGHS_DEVEPTIMR0_ISOENPT_KILLBK Kill IN Bank **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_KILLBK		(1 << 13)
/** UOTGHS_DEVEPTIMR0_ISOENPT_NBUSYBKE Number of Busy Banks Interrupt **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_NBUSYBKE		(1 << 12)
/** UOTGHS_DEVEPTIMR0_ISOENPT_ERRORTRANSE Transaction Error Interrupt **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_ERRORTRANSE		(1 << 10)
/** UOTGHS_DEVEPTIMR0_ISOENPT_DATAXE DataX Interrupt **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_DATAXE		(1 << 9)
/** UOTGHS_DEVEPTIMR0_ISOENPT_MDATAE MData Interrupt **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_MDATAE		(1 << 8)
/** UOTGHS_DEVEPTIMR0_ISOENPT_SHORTPACKETE Short Packet Interrupt **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_SHORTPACKETE		(1 << 7)
/** UOTGHS_DEVEPTIMR0_ISOENPT_CRCERRE CRC Error Interrupt **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_CRCERRE		(1 << 6)
/** UOTGHS_DEVEPTIMR0_ISOENPT_OVERFE Overflow Interrupt **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_OVERFE		(1 << 5)
/** UOTGHS_DEVEPTIMR0_ISOENPT_HBISOFLUSHE High Bandwidth Isochronous IN Flush Interrupt **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_HBISOFLUSHE		(1 << 4)
/** UOTGHS_DEVEPTIMR0_ISOENPT_HBISOINERRE High Bandwidth Isochronous IN Error Interrupt **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_HBISOINERRE		(1 << 3)
/** UOTGHS_DEVEPTIMR0_ISOENPT_UNDERFE Underflow Interrupt **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_UNDERFE		(1 << 2)
/** UOTGHS_DEVEPTIMR0_ISOENPT_RXOUTE Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_RXOUTE		(1 << 1)
/** UOTGHS_DEVEPTIMR0_ISOENPT_TXINE Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTIMR0_ISOENPT_TXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptimr[0] DEVEPTIMR[0] Device Endpoint Mask Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIMR[0]_STALLRQ STALL Request **/
#define UOTGHS_DEVEPTIMR[0]_STALLRQ		(1 << 19)
/** UOTGHS_DEVEPTIMR[0]_RSTDT Reset Data Toggle **/
#define UOTGHS_DEVEPTIMR[0]_RSTDT		(1 << 18)
/** UOTGHS_DEVEPTIMR[0]_NYETDIS NYET Token Disable **/
#define UOTGHS_DEVEPTIMR[0]_NYETDIS		(1 << 17)
/** UOTGHS_DEVEPTIMR[0]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define UOTGHS_DEVEPTIMR[0]_EPDISHDMA		(1 << 16)
/** UOTGHS_DEVEPTIMR[0]_FIFOCON FIFO Control **/
#define UOTGHS_DEVEPTIMR[0]_FIFOCON		(1 << 14)
/** UOTGHS_DEVEPTIMR[0]_KILLBK Kill IN Bank **/
#define UOTGHS_DEVEPTIMR[0]_KILLBK		(1 << 13)
/** UOTGHS_DEVEPTIMR[0]_NBUSYBKE Number of Busy Banks Interrupt **/
#define UOTGHS_DEVEPTIMR[0]_NBUSYBKE		(1 << 12)
/** UOTGHS_DEVEPTIMR[0]_SHORTPACKETE Short Packet Interrupt **/
#define UOTGHS_DEVEPTIMR[0]_SHORTPACKETE		(1 << 7)
/** UOTGHS_DEVEPTIMR[0]_STALLEDE STALLed Interrupt **/
#define UOTGHS_DEVEPTIMR[0]_STALLEDE		(1 << 6)
/** UOTGHS_DEVEPTIMR[0]_OVERFE Overflow Interrupt **/
#define UOTGHS_DEVEPTIMR[0]_OVERFE		(1 << 5)
/** UOTGHS_DEVEPTIMR[0]_NAKINE NAKed IN Interrupt **/
#define UOTGHS_DEVEPTIMR[0]_NAKINE		(1 << 4)
/** UOTGHS_DEVEPTIMR[0]_NAKOUTE NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTIMR[0]_NAKOUTE		(1 << 3)
/** UOTGHS_DEVEPTIMR[0]_RXSTPE Received SETUP Interrupt **/
#define UOTGHS_DEVEPTIMR[0]_RXSTPE		(1 << 2)
/** UOTGHS_DEVEPTIMR[0]_RXOUTE Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTIMR[0]_RXOUTE		(1 << 1)
/** UOTGHS_DEVEPTIMR[0]_TXINE Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTIMR[0]_TXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptimr[1] DEVEPTIMR[1] Device Endpoint Mask Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIMR[1]_STALLRQ STALL Request **/
#define UOTGHS_DEVEPTIMR[1]_STALLRQ		(1 << 19)
/** UOTGHS_DEVEPTIMR[1]_RSTDT Reset Data Toggle **/
#define UOTGHS_DEVEPTIMR[1]_RSTDT		(1 << 18)
/** UOTGHS_DEVEPTIMR[1]_NYETDIS NYET Token Disable **/
#define UOTGHS_DEVEPTIMR[1]_NYETDIS		(1 << 17)
/** UOTGHS_DEVEPTIMR[1]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define UOTGHS_DEVEPTIMR[1]_EPDISHDMA		(1 << 16)
/** UOTGHS_DEVEPTIMR[1]_FIFOCON FIFO Control **/
#define UOTGHS_DEVEPTIMR[1]_FIFOCON		(1 << 14)
/** UOTGHS_DEVEPTIMR[1]_KILLBK Kill IN Bank **/
#define UOTGHS_DEVEPTIMR[1]_KILLBK		(1 << 13)
/** UOTGHS_DEVEPTIMR[1]_NBUSYBKE Number of Busy Banks Interrupt **/
#define UOTGHS_DEVEPTIMR[1]_NBUSYBKE		(1 << 12)
/** UOTGHS_DEVEPTIMR[1]_SHORTPACKETE Short Packet Interrupt **/
#define UOTGHS_DEVEPTIMR[1]_SHORTPACKETE		(1 << 7)
/** UOTGHS_DEVEPTIMR[1]_STALLEDE STALLed Interrupt **/
#define UOTGHS_DEVEPTIMR[1]_STALLEDE		(1 << 6)
/** UOTGHS_DEVEPTIMR[1]_OVERFE Overflow Interrupt **/
#define UOTGHS_DEVEPTIMR[1]_OVERFE		(1 << 5)
/** UOTGHS_DEVEPTIMR[1]_NAKINE NAKed IN Interrupt **/
#define UOTGHS_DEVEPTIMR[1]_NAKINE		(1 << 4)
/** UOTGHS_DEVEPTIMR[1]_NAKOUTE NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTIMR[1]_NAKOUTE		(1 << 3)
/** UOTGHS_DEVEPTIMR[1]_RXSTPE Received SETUP Interrupt **/
#define UOTGHS_DEVEPTIMR[1]_RXSTPE		(1 << 2)
/** UOTGHS_DEVEPTIMR[1]_RXOUTE Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTIMR[1]_RXOUTE		(1 << 1)
/** UOTGHS_DEVEPTIMR[1]_TXINE Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTIMR[1]_TXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptimr[2] DEVEPTIMR[2] Device Endpoint Mask Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIMR[2]_STALLRQ STALL Request **/
#define UOTGHS_DEVEPTIMR[2]_STALLRQ		(1 << 19)
/** UOTGHS_DEVEPTIMR[2]_RSTDT Reset Data Toggle **/
#define UOTGHS_DEVEPTIMR[2]_RSTDT		(1 << 18)
/** UOTGHS_DEVEPTIMR[2]_NYETDIS NYET Token Disable **/
#define UOTGHS_DEVEPTIMR[2]_NYETDIS		(1 << 17)
/** UOTGHS_DEVEPTIMR[2]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define UOTGHS_DEVEPTIMR[2]_EPDISHDMA		(1 << 16)
/** UOTGHS_DEVEPTIMR[2]_FIFOCON FIFO Control **/
#define UOTGHS_DEVEPTIMR[2]_FIFOCON		(1 << 14)
/** UOTGHS_DEVEPTIMR[2]_KILLBK Kill IN Bank **/
#define UOTGHS_DEVEPTIMR[2]_KILLBK		(1 << 13)
/** UOTGHS_DEVEPTIMR[2]_NBUSYBKE Number of Busy Banks Interrupt **/
#define UOTGHS_DEVEPTIMR[2]_NBUSYBKE		(1 << 12)
/** UOTGHS_DEVEPTIMR[2]_SHORTPACKETE Short Packet Interrupt **/
#define UOTGHS_DEVEPTIMR[2]_SHORTPACKETE		(1 << 7)
/** UOTGHS_DEVEPTIMR[2]_STALLEDE STALLed Interrupt **/
#define UOTGHS_DEVEPTIMR[2]_STALLEDE		(1 << 6)
/** UOTGHS_DEVEPTIMR[2]_OVERFE Overflow Interrupt **/
#define UOTGHS_DEVEPTIMR[2]_OVERFE		(1 << 5)
/** UOTGHS_DEVEPTIMR[2]_NAKINE NAKed IN Interrupt **/
#define UOTGHS_DEVEPTIMR[2]_NAKINE		(1 << 4)
/** UOTGHS_DEVEPTIMR[2]_NAKOUTE NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTIMR[2]_NAKOUTE		(1 << 3)
/** UOTGHS_DEVEPTIMR[2]_RXSTPE Received SETUP Interrupt **/
#define UOTGHS_DEVEPTIMR[2]_RXSTPE		(1 << 2)
/** UOTGHS_DEVEPTIMR[2]_RXOUTE Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTIMR[2]_RXOUTE		(1 << 1)
/** UOTGHS_DEVEPTIMR[2]_TXINE Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTIMR[2]_TXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptimr[3] DEVEPTIMR[3] Device Endpoint Mask Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIMR[3]_STALLRQ STALL Request **/
#define UOTGHS_DEVEPTIMR[3]_STALLRQ		(1 << 19)
/** UOTGHS_DEVEPTIMR[3]_RSTDT Reset Data Toggle **/
#define UOTGHS_DEVEPTIMR[3]_RSTDT		(1 << 18)
/** UOTGHS_DEVEPTIMR[3]_NYETDIS NYET Token Disable **/
#define UOTGHS_DEVEPTIMR[3]_NYETDIS		(1 << 17)
/** UOTGHS_DEVEPTIMR[3]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define UOTGHS_DEVEPTIMR[3]_EPDISHDMA		(1 << 16)
/** UOTGHS_DEVEPTIMR[3]_FIFOCON FIFO Control **/
#define UOTGHS_DEVEPTIMR[3]_FIFOCON		(1 << 14)
/** UOTGHS_DEVEPTIMR[3]_KILLBK Kill IN Bank **/
#define UOTGHS_DEVEPTIMR[3]_KILLBK		(1 << 13)
/** UOTGHS_DEVEPTIMR[3]_NBUSYBKE Number of Busy Banks Interrupt **/
#define UOTGHS_DEVEPTIMR[3]_NBUSYBKE		(1 << 12)
/** UOTGHS_DEVEPTIMR[3]_SHORTPACKETE Short Packet Interrupt **/
#define UOTGHS_DEVEPTIMR[3]_SHORTPACKETE		(1 << 7)
/** UOTGHS_DEVEPTIMR[3]_STALLEDE STALLed Interrupt **/
#define UOTGHS_DEVEPTIMR[3]_STALLEDE		(1 << 6)
/** UOTGHS_DEVEPTIMR[3]_OVERFE Overflow Interrupt **/
#define UOTGHS_DEVEPTIMR[3]_OVERFE		(1 << 5)
/** UOTGHS_DEVEPTIMR[3]_NAKINE NAKed IN Interrupt **/
#define UOTGHS_DEVEPTIMR[3]_NAKINE		(1 << 4)
/** UOTGHS_DEVEPTIMR[3]_NAKOUTE NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTIMR[3]_NAKOUTE		(1 << 3)
/** UOTGHS_DEVEPTIMR[3]_RXSTPE Received SETUP Interrupt **/
#define UOTGHS_DEVEPTIMR[3]_RXSTPE		(1 << 2)
/** UOTGHS_DEVEPTIMR[3]_RXOUTE Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTIMR[3]_RXOUTE		(1 << 1)
/** UOTGHS_DEVEPTIMR[3]_TXINE Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTIMR[3]_TXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptimr[4] DEVEPTIMR[4] Device Endpoint Mask Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIMR[4]_STALLRQ STALL Request **/
#define UOTGHS_DEVEPTIMR[4]_STALLRQ		(1 << 19)
/** UOTGHS_DEVEPTIMR[4]_RSTDT Reset Data Toggle **/
#define UOTGHS_DEVEPTIMR[4]_RSTDT		(1 << 18)
/** UOTGHS_DEVEPTIMR[4]_NYETDIS NYET Token Disable **/
#define UOTGHS_DEVEPTIMR[4]_NYETDIS		(1 << 17)
/** UOTGHS_DEVEPTIMR[4]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define UOTGHS_DEVEPTIMR[4]_EPDISHDMA		(1 << 16)
/** UOTGHS_DEVEPTIMR[4]_FIFOCON FIFO Control **/
#define UOTGHS_DEVEPTIMR[4]_FIFOCON		(1 << 14)
/** UOTGHS_DEVEPTIMR[4]_KILLBK Kill IN Bank **/
#define UOTGHS_DEVEPTIMR[4]_KILLBK		(1 << 13)
/** UOTGHS_DEVEPTIMR[4]_NBUSYBKE Number of Busy Banks Interrupt **/
#define UOTGHS_DEVEPTIMR[4]_NBUSYBKE		(1 << 12)
/** UOTGHS_DEVEPTIMR[4]_SHORTPACKETE Short Packet Interrupt **/
#define UOTGHS_DEVEPTIMR[4]_SHORTPACKETE		(1 << 7)
/** UOTGHS_DEVEPTIMR[4]_STALLEDE STALLed Interrupt **/
#define UOTGHS_DEVEPTIMR[4]_STALLEDE		(1 << 6)
/** UOTGHS_DEVEPTIMR[4]_OVERFE Overflow Interrupt **/
#define UOTGHS_DEVEPTIMR[4]_OVERFE		(1 << 5)
/** UOTGHS_DEVEPTIMR[4]_NAKINE NAKed IN Interrupt **/
#define UOTGHS_DEVEPTIMR[4]_NAKINE		(1 << 4)
/** UOTGHS_DEVEPTIMR[4]_NAKOUTE NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTIMR[4]_NAKOUTE		(1 << 3)
/** UOTGHS_DEVEPTIMR[4]_RXSTPE Received SETUP Interrupt **/
#define UOTGHS_DEVEPTIMR[4]_RXSTPE		(1 << 2)
/** UOTGHS_DEVEPTIMR[4]_RXOUTE Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTIMR[4]_RXOUTE		(1 << 1)
/** UOTGHS_DEVEPTIMR[4]_TXINE Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTIMR[4]_TXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptimr[5] DEVEPTIMR[5] Device Endpoint Mask Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIMR[5]_STALLRQ STALL Request **/
#define UOTGHS_DEVEPTIMR[5]_STALLRQ		(1 << 19)
/** UOTGHS_DEVEPTIMR[5]_RSTDT Reset Data Toggle **/
#define UOTGHS_DEVEPTIMR[5]_RSTDT		(1 << 18)
/** UOTGHS_DEVEPTIMR[5]_NYETDIS NYET Token Disable **/
#define UOTGHS_DEVEPTIMR[5]_NYETDIS		(1 << 17)
/** UOTGHS_DEVEPTIMR[5]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define UOTGHS_DEVEPTIMR[5]_EPDISHDMA		(1 << 16)
/** UOTGHS_DEVEPTIMR[5]_FIFOCON FIFO Control **/
#define UOTGHS_DEVEPTIMR[5]_FIFOCON		(1 << 14)
/** UOTGHS_DEVEPTIMR[5]_KILLBK Kill IN Bank **/
#define UOTGHS_DEVEPTIMR[5]_KILLBK		(1 << 13)
/** UOTGHS_DEVEPTIMR[5]_NBUSYBKE Number of Busy Banks Interrupt **/
#define UOTGHS_DEVEPTIMR[5]_NBUSYBKE		(1 << 12)
/** UOTGHS_DEVEPTIMR[5]_SHORTPACKETE Short Packet Interrupt **/
#define UOTGHS_DEVEPTIMR[5]_SHORTPACKETE		(1 << 7)
/** UOTGHS_DEVEPTIMR[5]_STALLEDE STALLed Interrupt **/
#define UOTGHS_DEVEPTIMR[5]_STALLEDE		(1 << 6)
/** UOTGHS_DEVEPTIMR[5]_OVERFE Overflow Interrupt **/
#define UOTGHS_DEVEPTIMR[5]_OVERFE		(1 << 5)
/** UOTGHS_DEVEPTIMR[5]_NAKINE NAKed IN Interrupt **/
#define UOTGHS_DEVEPTIMR[5]_NAKINE		(1 << 4)
/** UOTGHS_DEVEPTIMR[5]_NAKOUTE NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTIMR[5]_NAKOUTE		(1 << 3)
/** UOTGHS_DEVEPTIMR[5]_RXSTPE Received SETUP Interrupt **/
#define UOTGHS_DEVEPTIMR[5]_RXSTPE		(1 << 2)
/** UOTGHS_DEVEPTIMR[5]_RXOUTE Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTIMR[5]_RXOUTE		(1 << 1)
/** UOTGHS_DEVEPTIMR[5]_TXINE Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTIMR[5]_TXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptimr[6] DEVEPTIMR[6] Device Endpoint Mask Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIMR[6]_STALLRQ STALL Request **/
#define UOTGHS_DEVEPTIMR[6]_STALLRQ		(1 << 19)
/** UOTGHS_DEVEPTIMR[6]_RSTDT Reset Data Toggle **/
#define UOTGHS_DEVEPTIMR[6]_RSTDT		(1 << 18)
/** UOTGHS_DEVEPTIMR[6]_NYETDIS NYET Token Disable **/
#define UOTGHS_DEVEPTIMR[6]_NYETDIS		(1 << 17)
/** UOTGHS_DEVEPTIMR[6]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define UOTGHS_DEVEPTIMR[6]_EPDISHDMA		(1 << 16)
/** UOTGHS_DEVEPTIMR[6]_FIFOCON FIFO Control **/
#define UOTGHS_DEVEPTIMR[6]_FIFOCON		(1 << 14)
/** UOTGHS_DEVEPTIMR[6]_KILLBK Kill IN Bank **/
#define UOTGHS_DEVEPTIMR[6]_KILLBK		(1 << 13)
/** UOTGHS_DEVEPTIMR[6]_NBUSYBKE Number of Busy Banks Interrupt **/
#define UOTGHS_DEVEPTIMR[6]_NBUSYBKE		(1 << 12)
/** UOTGHS_DEVEPTIMR[6]_SHORTPACKETE Short Packet Interrupt **/
#define UOTGHS_DEVEPTIMR[6]_SHORTPACKETE		(1 << 7)
/** UOTGHS_DEVEPTIMR[6]_STALLEDE STALLed Interrupt **/
#define UOTGHS_DEVEPTIMR[6]_STALLEDE		(1 << 6)
/** UOTGHS_DEVEPTIMR[6]_OVERFE Overflow Interrupt **/
#define UOTGHS_DEVEPTIMR[6]_OVERFE		(1 << 5)
/** UOTGHS_DEVEPTIMR[6]_NAKINE NAKed IN Interrupt **/
#define UOTGHS_DEVEPTIMR[6]_NAKINE		(1 << 4)
/** UOTGHS_DEVEPTIMR[6]_NAKOUTE NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTIMR[6]_NAKOUTE		(1 << 3)
/** UOTGHS_DEVEPTIMR[6]_RXSTPE Received SETUP Interrupt **/
#define UOTGHS_DEVEPTIMR[6]_RXSTPE		(1 << 2)
/** UOTGHS_DEVEPTIMR[6]_RXOUTE Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTIMR[6]_RXOUTE		(1 << 1)
/** UOTGHS_DEVEPTIMR[6]_TXINE Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTIMR[6]_TXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptimr[7] DEVEPTIMR[7] Device Endpoint Mask Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIMR[7]_STALLRQ STALL Request **/
#define UOTGHS_DEVEPTIMR[7]_STALLRQ		(1 << 19)
/** UOTGHS_DEVEPTIMR[7]_RSTDT Reset Data Toggle **/
#define UOTGHS_DEVEPTIMR[7]_RSTDT		(1 << 18)
/** UOTGHS_DEVEPTIMR[7]_NYETDIS NYET Token Disable **/
#define UOTGHS_DEVEPTIMR[7]_NYETDIS		(1 << 17)
/** UOTGHS_DEVEPTIMR[7]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define UOTGHS_DEVEPTIMR[7]_EPDISHDMA		(1 << 16)
/** UOTGHS_DEVEPTIMR[7]_FIFOCON FIFO Control **/
#define UOTGHS_DEVEPTIMR[7]_FIFOCON		(1 << 14)
/** UOTGHS_DEVEPTIMR[7]_KILLBK Kill IN Bank **/
#define UOTGHS_DEVEPTIMR[7]_KILLBK		(1 << 13)
/** UOTGHS_DEVEPTIMR[7]_NBUSYBKE Number of Busy Banks Interrupt **/
#define UOTGHS_DEVEPTIMR[7]_NBUSYBKE		(1 << 12)
/** UOTGHS_DEVEPTIMR[7]_SHORTPACKETE Short Packet Interrupt **/
#define UOTGHS_DEVEPTIMR[7]_SHORTPACKETE		(1 << 7)
/** UOTGHS_DEVEPTIMR[7]_STALLEDE STALLed Interrupt **/
#define UOTGHS_DEVEPTIMR[7]_STALLEDE		(1 << 6)
/** UOTGHS_DEVEPTIMR[7]_OVERFE Overflow Interrupt **/
#define UOTGHS_DEVEPTIMR[7]_OVERFE		(1 << 5)
/** UOTGHS_DEVEPTIMR[7]_NAKINE NAKed IN Interrupt **/
#define UOTGHS_DEVEPTIMR[7]_NAKINE		(1 << 4)
/** UOTGHS_DEVEPTIMR[7]_NAKOUTE NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTIMR[7]_NAKOUTE		(1 << 3)
/** UOTGHS_DEVEPTIMR[7]_RXSTPE Received SETUP Interrupt **/
#define UOTGHS_DEVEPTIMR[7]_RXSTPE		(1 << 2)
/** UOTGHS_DEVEPTIMR[7]_RXOUTE Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTIMR[7]_RXOUTE		(1 << 1)
/** UOTGHS_DEVEPTIMR[7]_TXINE Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTIMR[7]_TXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptimr[8] DEVEPTIMR[8] Device Endpoint Mask Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIMR[8]_STALLRQ STALL Request **/
#define UOTGHS_DEVEPTIMR[8]_STALLRQ		(1 << 19)
/** UOTGHS_DEVEPTIMR[8]_RSTDT Reset Data Toggle **/
#define UOTGHS_DEVEPTIMR[8]_RSTDT		(1 << 18)
/** UOTGHS_DEVEPTIMR[8]_NYETDIS NYET Token Disable **/
#define UOTGHS_DEVEPTIMR[8]_NYETDIS		(1 << 17)
/** UOTGHS_DEVEPTIMR[8]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define UOTGHS_DEVEPTIMR[8]_EPDISHDMA		(1 << 16)
/** UOTGHS_DEVEPTIMR[8]_FIFOCON FIFO Control **/
#define UOTGHS_DEVEPTIMR[8]_FIFOCON		(1 << 14)
/** UOTGHS_DEVEPTIMR[8]_KILLBK Kill IN Bank **/
#define UOTGHS_DEVEPTIMR[8]_KILLBK		(1 << 13)
/** UOTGHS_DEVEPTIMR[8]_NBUSYBKE Number of Busy Banks Interrupt **/
#define UOTGHS_DEVEPTIMR[8]_NBUSYBKE		(1 << 12)
/** UOTGHS_DEVEPTIMR[8]_SHORTPACKETE Short Packet Interrupt **/
#define UOTGHS_DEVEPTIMR[8]_SHORTPACKETE		(1 << 7)
/** UOTGHS_DEVEPTIMR[8]_STALLEDE STALLed Interrupt **/
#define UOTGHS_DEVEPTIMR[8]_STALLEDE		(1 << 6)
/** UOTGHS_DEVEPTIMR[8]_OVERFE Overflow Interrupt **/
#define UOTGHS_DEVEPTIMR[8]_OVERFE		(1 << 5)
/** UOTGHS_DEVEPTIMR[8]_NAKINE NAKed IN Interrupt **/
#define UOTGHS_DEVEPTIMR[8]_NAKINE		(1 << 4)
/** UOTGHS_DEVEPTIMR[8]_NAKOUTE NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTIMR[8]_NAKOUTE		(1 << 3)
/** UOTGHS_DEVEPTIMR[8]_RXSTPE Received SETUP Interrupt **/
#define UOTGHS_DEVEPTIMR[8]_RXSTPE		(1 << 2)
/** UOTGHS_DEVEPTIMR[8]_RXOUTE Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTIMR[8]_RXOUTE		(1 << 1)
/** UOTGHS_DEVEPTIMR[8]_TXINE Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTIMR[8]_TXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptimr[9] DEVEPTIMR[9] Device Endpoint Mask Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIMR[9]_STALLRQ STALL Request **/
#define UOTGHS_DEVEPTIMR[9]_STALLRQ		(1 << 19)
/** UOTGHS_DEVEPTIMR[9]_RSTDT Reset Data Toggle **/
#define UOTGHS_DEVEPTIMR[9]_RSTDT		(1 << 18)
/** UOTGHS_DEVEPTIMR[9]_NYETDIS NYET Token Disable **/
#define UOTGHS_DEVEPTIMR[9]_NYETDIS		(1 << 17)
/** UOTGHS_DEVEPTIMR[9]_EPDISHDMA Endpoint Interrupts Disable HDMA Request **/
#define UOTGHS_DEVEPTIMR[9]_EPDISHDMA		(1 << 16)
/** UOTGHS_DEVEPTIMR[9]_FIFOCON FIFO Control **/
#define UOTGHS_DEVEPTIMR[9]_FIFOCON		(1 << 14)
/** UOTGHS_DEVEPTIMR[9]_KILLBK Kill IN Bank **/
#define UOTGHS_DEVEPTIMR[9]_KILLBK		(1 << 13)
/** UOTGHS_DEVEPTIMR[9]_NBUSYBKE Number of Busy Banks Interrupt **/
#define UOTGHS_DEVEPTIMR[9]_NBUSYBKE		(1 << 12)
/** UOTGHS_DEVEPTIMR[9]_SHORTPACKETE Short Packet Interrupt **/
#define UOTGHS_DEVEPTIMR[9]_SHORTPACKETE		(1 << 7)
/** UOTGHS_DEVEPTIMR[9]_STALLEDE STALLed Interrupt **/
#define UOTGHS_DEVEPTIMR[9]_STALLEDE		(1 << 6)
/** UOTGHS_DEVEPTIMR[9]_OVERFE Overflow Interrupt **/
#define UOTGHS_DEVEPTIMR[9]_OVERFE		(1 << 5)
/** UOTGHS_DEVEPTIMR[9]_NAKINE NAKed IN Interrupt **/
#define UOTGHS_DEVEPTIMR[9]_NAKINE		(1 << 4)
/** UOTGHS_DEVEPTIMR[9]_NAKOUTE NAKed OUT Interrupt **/
#define UOTGHS_DEVEPTIMR[9]_NAKOUTE		(1 << 3)
/** UOTGHS_DEVEPTIMR[9]_RXSTPE Received SETUP Interrupt **/
#define UOTGHS_DEVEPTIMR[9]_RXSTPE		(1 << 2)
/** UOTGHS_DEVEPTIMR[9]_RXOUTE Received OUT Data Interrupt **/
#define UOTGHS_DEVEPTIMR[9]_RXOUTE		(1 << 1)
/** UOTGHS_DEVEPTIMR[9]_TXINE Transmitted IN Data Interrupt **/
#define UOTGHS_DEVEPTIMR[9]_TXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptier0_isoenpt DEVEPTIER0ISOENPT Device Endpoint Enable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIER0_ISOENPT_STALLRQS STALL Request Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_STALLRQS		(1 << 19)
/** UOTGHS_DEVEPTIER0_ISOENPT_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_RSTDTS		(1 << 18)
/** UOTGHS_DEVEPTIER0_ISOENPT_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_EPDISHDMAS		(1 << 16)
/** UOTGHS_DEVEPTIER0_ISOENPT_FIFOCONS FIFO Control **/
#define UOTGHS_DEVEPTIER0_ISOENPT_FIFOCONS		(1 << 14)
/** UOTGHS_DEVEPTIER0_ISOENPT_KILLBKS Kill IN Bank **/
#define UOTGHS_DEVEPTIER0_ISOENPT_KILLBKS		(1 << 13)
/** UOTGHS_DEVEPTIER0_ISOENPT_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_NBUSYBKES		(1 << 12)
/** UOTGHS_DEVEPTIER0_ISOENPT_ERRORTRANSES Transaction Error Interrupt Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_ERRORTRANSES		(1 << 10)
/** UOTGHS_DEVEPTIER0_ISOENPT_DATAXES DataX Interrupt Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_DATAXES		(1 << 9)
/** UOTGHS_DEVEPTIER0_ISOENPT_MDATAES MData Interrupt Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_MDATAES		(1 << 8)
/** UOTGHS_DEVEPTIER0_ISOENPT_SHORTPACKETES Short Packet Interrupt Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_SHORTPACKETES		(1 << 7)
/** UOTGHS_DEVEPTIER0_ISOENPT_CRCERRES CRC Error Interrupt Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_CRCERRES		(1 << 6)
/** UOTGHS_DEVEPTIER0_ISOENPT_OVERFES Overflow Interrupt Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_OVERFES		(1 << 5)
/** UOTGHS_DEVEPTIER0_ISOENPT_HBISOFLUSHES High Bandwidth Isochronous IN Flush Interrupt Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_HBISOFLUSHES		(1 << 4)
/** UOTGHS_DEVEPTIER0_ISOENPT_HBISOINERRES High Bandwidth Isochronous IN Error Interrupt Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_HBISOINERRES		(1 << 3)
/** UOTGHS_DEVEPTIER0_ISOENPT_UNDERFES Underflow Interrupt Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_UNDERFES		(1 << 2)
/** UOTGHS_DEVEPTIER0_ISOENPT_RXOUTES Received OUT Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_RXOUTES		(1 << 1)
/** UOTGHS_DEVEPTIER0_ISOENPT_TXINES Transmitted IN Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER0_ISOENPT_TXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptier[0] DEVEPTIER[0] Device Endpoint Enable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIER[0]_STALLRQS STALL Request Enable **/
#define UOTGHS_DEVEPTIER[0]_STALLRQS		(1 << 19)
/** UOTGHS_DEVEPTIER[0]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_DEVEPTIER[0]_RSTDTS		(1 << 18)
/** UOTGHS_DEVEPTIER[0]_NYETDISS NYET Token Disable Enable **/
#define UOTGHS_DEVEPTIER[0]_NYETDISS		(1 << 17)
/** UOTGHS_DEVEPTIER[0]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define UOTGHS_DEVEPTIER[0]_EPDISHDMAS		(1 << 16)
/** UOTGHS_DEVEPTIER[0]_FIFOCONS FIFO Control **/
#define UOTGHS_DEVEPTIER[0]_FIFOCONS		(1 << 14)
/** UOTGHS_DEVEPTIER[0]_KILLBKS Kill IN Bank **/
#define UOTGHS_DEVEPTIER[0]_KILLBKS		(1 << 13)
/** UOTGHS_DEVEPTIER[0]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define UOTGHS_DEVEPTIER[0]_NBUSYBKES		(1 << 12)
/** UOTGHS_DEVEPTIER[0]_SHORTPACKETES Short Packet Interrupt Enable **/
#define UOTGHS_DEVEPTIER[0]_SHORTPACKETES		(1 << 7)
/** UOTGHS_DEVEPTIER[0]_STALLEDES STALLed Interrupt Enable **/
#define UOTGHS_DEVEPTIER[0]_STALLEDES		(1 << 6)
/** UOTGHS_DEVEPTIER[0]_OVERFES Overflow Interrupt Enable **/
#define UOTGHS_DEVEPTIER[0]_OVERFES		(1 << 5)
/** UOTGHS_DEVEPTIER[0]_NAKINES NAKed IN Interrupt Enable **/
#define UOTGHS_DEVEPTIER[0]_NAKINES		(1 << 4)
/** UOTGHS_DEVEPTIER[0]_NAKOUTES NAKed OUT Interrupt Enable **/
#define UOTGHS_DEVEPTIER[0]_NAKOUTES		(1 << 3)
/** UOTGHS_DEVEPTIER[0]_RXSTPES Received SETUP Interrupt Enable **/
#define UOTGHS_DEVEPTIER[0]_RXSTPES		(1 << 2)
/** UOTGHS_DEVEPTIER[0]_RXOUTES Received OUT Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[0]_RXOUTES		(1 << 1)
/** UOTGHS_DEVEPTIER[0]_TXINES Transmitted IN Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[0]_TXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptier[1] DEVEPTIER[1] Device Endpoint Enable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIER[1]_STALLRQS STALL Request Enable **/
#define UOTGHS_DEVEPTIER[1]_STALLRQS		(1 << 19)
/** UOTGHS_DEVEPTIER[1]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_DEVEPTIER[1]_RSTDTS		(1 << 18)
/** UOTGHS_DEVEPTIER[1]_NYETDISS NYET Token Disable Enable **/
#define UOTGHS_DEVEPTIER[1]_NYETDISS		(1 << 17)
/** UOTGHS_DEVEPTIER[1]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define UOTGHS_DEVEPTIER[1]_EPDISHDMAS		(1 << 16)
/** UOTGHS_DEVEPTIER[1]_FIFOCONS FIFO Control **/
#define UOTGHS_DEVEPTIER[1]_FIFOCONS		(1 << 14)
/** UOTGHS_DEVEPTIER[1]_KILLBKS Kill IN Bank **/
#define UOTGHS_DEVEPTIER[1]_KILLBKS		(1 << 13)
/** UOTGHS_DEVEPTIER[1]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define UOTGHS_DEVEPTIER[1]_NBUSYBKES		(1 << 12)
/** UOTGHS_DEVEPTIER[1]_SHORTPACKETES Short Packet Interrupt Enable **/
#define UOTGHS_DEVEPTIER[1]_SHORTPACKETES		(1 << 7)
/** UOTGHS_DEVEPTIER[1]_STALLEDES STALLed Interrupt Enable **/
#define UOTGHS_DEVEPTIER[1]_STALLEDES		(1 << 6)
/** UOTGHS_DEVEPTIER[1]_OVERFES Overflow Interrupt Enable **/
#define UOTGHS_DEVEPTIER[1]_OVERFES		(1 << 5)
/** UOTGHS_DEVEPTIER[1]_NAKINES NAKed IN Interrupt Enable **/
#define UOTGHS_DEVEPTIER[1]_NAKINES		(1 << 4)
/** UOTGHS_DEVEPTIER[1]_NAKOUTES NAKed OUT Interrupt Enable **/
#define UOTGHS_DEVEPTIER[1]_NAKOUTES		(1 << 3)
/** UOTGHS_DEVEPTIER[1]_RXSTPES Received SETUP Interrupt Enable **/
#define UOTGHS_DEVEPTIER[1]_RXSTPES		(1 << 2)
/** UOTGHS_DEVEPTIER[1]_RXOUTES Received OUT Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[1]_RXOUTES		(1 << 1)
/** UOTGHS_DEVEPTIER[1]_TXINES Transmitted IN Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[1]_TXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptier[2] DEVEPTIER[2] Device Endpoint Enable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIER[2]_STALLRQS STALL Request Enable **/
#define UOTGHS_DEVEPTIER[2]_STALLRQS		(1 << 19)
/** UOTGHS_DEVEPTIER[2]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_DEVEPTIER[2]_RSTDTS		(1 << 18)
/** UOTGHS_DEVEPTIER[2]_NYETDISS NYET Token Disable Enable **/
#define UOTGHS_DEVEPTIER[2]_NYETDISS		(1 << 17)
/** UOTGHS_DEVEPTIER[2]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define UOTGHS_DEVEPTIER[2]_EPDISHDMAS		(1 << 16)
/** UOTGHS_DEVEPTIER[2]_FIFOCONS FIFO Control **/
#define UOTGHS_DEVEPTIER[2]_FIFOCONS		(1 << 14)
/** UOTGHS_DEVEPTIER[2]_KILLBKS Kill IN Bank **/
#define UOTGHS_DEVEPTIER[2]_KILLBKS		(1 << 13)
/** UOTGHS_DEVEPTIER[2]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define UOTGHS_DEVEPTIER[2]_NBUSYBKES		(1 << 12)
/** UOTGHS_DEVEPTIER[2]_SHORTPACKETES Short Packet Interrupt Enable **/
#define UOTGHS_DEVEPTIER[2]_SHORTPACKETES		(1 << 7)
/** UOTGHS_DEVEPTIER[2]_STALLEDES STALLed Interrupt Enable **/
#define UOTGHS_DEVEPTIER[2]_STALLEDES		(1 << 6)
/** UOTGHS_DEVEPTIER[2]_OVERFES Overflow Interrupt Enable **/
#define UOTGHS_DEVEPTIER[2]_OVERFES		(1 << 5)
/** UOTGHS_DEVEPTIER[2]_NAKINES NAKed IN Interrupt Enable **/
#define UOTGHS_DEVEPTIER[2]_NAKINES		(1 << 4)
/** UOTGHS_DEVEPTIER[2]_NAKOUTES NAKed OUT Interrupt Enable **/
#define UOTGHS_DEVEPTIER[2]_NAKOUTES		(1 << 3)
/** UOTGHS_DEVEPTIER[2]_RXSTPES Received SETUP Interrupt Enable **/
#define UOTGHS_DEVEPTIER[2]_RXSTPES		(1 << 2)
/** UOTGHS_DEVEPTIER[2]_RXOUTES Received OUT Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[2]_RXOUTES		(1 << 1)
/** UOTGHS_DEVEPTIER[2]_TXINES Transmitted IN Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[2]_TXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptier[3] DEVEPTIER[3] Device Endpoint Enable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIER[3]_STALLRQS STALL Request Enable **/
#define UOTGHS_DEVEPTIER[3]_STALLRQS		(1 << 19)
/** UOTGHS_DEVEPTIER[3]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_DEVEPTIER[3]_RSTDTS		(1 << 18)
/** UOTGHS_DEVEPTIER[3]_NYETDISS NYET Token Disable Enable **/
#define UOTGHS_DEVEPTIER[3]_NYETDISS		(1 << 17)
/** UOTGHS_DEVEPTIER[3]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define UOTGHS_DEVEPTIER[3]_EPDISHDMAS		(1 << 16)
/** UOTGHS_DEVEPTIER[3]_FIFOCONS FIFO Control **/
#define UOTGHS_DEVEPTIER[3]_FIFOCONS		(1 << 14)
/** UOTGHS_DEVEPTIER[3]_KILLBKS Kill IN Bank **/
#define UOTGHS_DEVEPTIER[3]_KILLBKS		(1 << 13)
/** UOTGHS_DEVEPTIER[3]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define UOTGHS_DEVEPTIER[3]_NBUSYBKES		(1 << 12)
/** UOTGHS_DEVEPTIER[3]_SHORTPACKETES Short Packet Interrupt Enable **/
#define UOTGHS_DEVEPTIER[3]_SHORTPACKETES		(1 << 7)
/** UOTGHS_DEVEPTIER[3]_STALLEDES STALLed Interrupt Enable **/
#define UOTGHS_DEVEPTIER[3]_STALLEDES		(1 << 6)
/** UOTGHS_DEVEPTIER[3]_OVERFES Overflow Interrupt Enable **/
#define UOTGHS_DEVEPTIER[3]_OVERFES		(1 << 5)
/** UOTGHS_DEVEPTIER[3]_NAKINES NAKed IN Interrupt Enable **/
#define UOTGHS_DEVEPTIER[3]_NAKINES		(1 << 4)
/** UOTGHS_DEVEPTIER[3]_NAKOUTES NAKed OUT Interrupt Enable **/
#define UOTGHS_DEVEPTIER[3]_NAKOUTES		(1 << 3)
/** UOTGHS_DEVEPTIER[3]_RXSTPES Received SETUP Interrupt Enable **/
#define UOTGHS_DEVEPTIER[3]_RXSTPES		(1 << 2)
/** UOTGHS_DEVEPTIER[3]_RXOUTES Received OUT Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[3]_RXOUTES		(1 << 1)
/** UOTGHS_DEVEPTIER[3]_TXINES Transmitted IN Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[3]_TXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptier[4] DEVEPTIER[4] Device Endpoint Enable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIER[4]_STALLRQS STALL Request Enable **/
#define UOTGHS_DEVEPTIER[4]_STALLRQS		(1 << 19)
/** UOTGHS_DEVEPTIER[4]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_DEVEPTIER[4]_RSTDTS		(1 << 18)
/** UOTGHS_DEVEPTIER[4]_NYETDISS NYET Token Disable Enable **/
#define UOTGHS_DEVEPTIER[4]_NYETDISS		(1 << 17)
/** UOTGHS_DEVEPTIER[4]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define UOTGHS_DEVEPTIER[4]_EPDISHDMAS		(1 << 16)
/** UOTGHS_DEVEPTIER[4]_FIFOCONS FIFO Control **/
#define UOTGHS_DEVEPTIER[4]_FIFOCONS		(1 << 14)
/** UOTGHS_DEVEPTIER[4]_KILLBKS Kill IN Bank **/
#define UOTGHS_DEVEPTIER[4]_KILLBKS		(1 << 13)
/** UOTGHS_DEVEPTIER[4]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define UOTGHS_DEVEPTIER[4]_NBUSYBKES		(1 << 12)
/** UOTGHS_DEVEPTIER[4]_SHORTPACKETES Short Packet Interrupt Enable **/
#define UOTGHS_DEVEPTIER[4]_SHORTPACKETES		(1 << 7)
/** UOTGHS_DEVEPTIER[4]_STALLEDES STALLed Interrupt Enable **/
#define UOTGHS_DEVEPTIER[4]_STALLEDES		(1 << 6)
/** UOTGHS_DEVEPTIER[4]_OVERFES Overflow Interrupt Enable **/
#define UOTGHS_DEVEPTIER[4]_OVERFES		(1 << 5)
/** UOTGHS_DEVEPTIER[4]_NAKINES NAKed IN Interrupt Enable **/
#define UOTGHS_DEVEPTIER[4]_NAKINES		(1 << 4)
/** UOTGHS_DEVEPTIER[4]_NAKOUTES NAKed OUT Interrupt Enable **/
#define UOTGHS_DEVEPTIER[4]_NAKOUTES		(1 << 3)
/** UOTGHS_DEVEPTIER[4]_RXSTPES Received SETUP Interrupt Enable **/
#define UOTGHS_DEVEPTIER[4]_RXSTPES		(1 << 2)
/** UOTGHS_DEVEPTIER[4]_RXOUTES Received OUT Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[4]_RXOUTES		(1 << 1)
/** UOTGHS_DEVEPTIER[4]_TXINES Transmitted IN Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[4]_TXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptier[5] DEVEPTIER[5] Device Endpoint Enable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIER[5]_STALLRQS STALL Request Enable **/
#define UOTGHS_DEVEPTIER[5]_STALLRQS		(1 << 19)
/** UOTGHS_DEVEPTIER[5]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_DEVEPTIER[5]_RSTDTS		(1 << 18)
/** UOTGHS_DEVEPTIER[5]_NYETDISS NYET Token Disable Enable **/
#define UOTGHS_DEVEPTIER[5]_NYETDISS		(1 << 17)
/** UOTGHS_DEVEPTIER[5]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define UOTGHS_DEVEPTIER[5]_EPDISHDMAS		(1 << 16)
/** UOTGHS_DEVEPTIER[5]_FIFOCONS FIFO Control **/
#define UOTGHS_DEVEPTIER[5]_FIFOCONS		(1 << 14)
/** UOTGHS_DEVEPTIER[5]_KILLBKS Kill IN Bank **/
#define UOTGHS_DEVEPTIER[5]_KILLBKS		(1 << 13)
/** UOTGHS_DEVEPTIER[5]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define UOTGHS_DEVEPTIER[5]_NBUSYBKES		(1 << 12)
/** UOTGHS_DEVEPTIER[5]_SHORTPACKETES Short Packet Interrupt Enable **/
#define UOTGHS_DEVEPTIER[5]_SHORTPACKETES		(1 << 7)
/** UOTGHS_DEVEPTIER[5]_STALLEDES STALLed Interrupt Enable **/
#define UOTGHS_DEVEPTIER[5]_STALLEDES		(1 << 6)
/** UOTGHS_DEVEPTIER[5]_OVERFES Overflow Interrupt Enable **/
#define UOTGHS_DEVEPTIER[5]_OVERFES		(1 << 5)
/** UOTGHS_DEVEPTIER[5]_NAKINES NAKed IN Interrupt Enable **/
#define UOTGHS_DEVEPTIER[5]_NAKINES		(1 << 4)
/** UOTGHS_DEVEPTIER[5]_NAKOUTES NAKed OUT Interrupt Enable **/
#define UOTGHS_DEVEPTIER[5]_NAKOUTES		(1 << 3)
/** UOTGHS_DEVEPTIER[5]_RXSTPES Received SETUP Interrupt Enable **/
#define UOTGHS_DEVEPTIER[5]_RXSTPES		(1 << 2)
/** UOTGHS_DEVEPTIER[5]_RXOUTES Received OUT Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[5]_RXOUTES		(1 << 1)
/** UOTGHS_DEVEPTIER[5]_TXINES Transmitted IN Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[5]_TXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptier[6] DEVEPTIER[6] Device Endpoint Enable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIER[6]_STALLRQS STALL Request Enable **/
#define UOTGHS_DEVEPTIER[6]_STALLRQS		(1 << 19)
/** UOTGHS_DEVEPTIER[6]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_DEVEPTIER[6]_RSTDTS		(1 << 18)
/** UOTGHS_DEVEPTIER[6]_NYETDISS NYET Token Disable Enable **/
#define UOTGHS_DEVEPTIER[6]_NYETDISS		(1 << 17)
/** UOTGHS_DEVEPTIER[6]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define UOTGHS_DEVEPTIER[6]_EPDISHDMAS		(1 << 16)
/** UOTGHS_DEVEPTIER[6]_FIFOCONS FIFO Control **/
#define UOTGHS_DEVEPTIER[6]_FIFOCONS		(1 << 14)
/** UOTGHS_DEVEPTIER[6]_KILLBKS Kill IN Bank **/
#define UOTGHS_DEVEPTIER[6]_KILLBKS		(1 << 13)
/** UOTGHS_DEVEPTIER[6]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define UOTGHS_DEVEPTIER[6]_NBUSYBKES		(1 << 12)
/** UOTGHS_DEVEPTIER[6]_SHORTPACKETES Short Packet Interrupt Enable **/
#define UOTGHS_DEVEPTIER[6]_SHORTPACKETES		(1 << 7)
/** UOTGHS_DEVEPTIER[6]_STALLEDES STALLed Interrupt Enable **/
#define UOTGHS_DEVEPTIER[6]_STALLEDES		(1 << 6)
/** UOTGHS_DEVEPTIER[6]_OVERFES Overflow Interrupt Enable **/
#define UOTGHS_DEVEPTIER[6]_OVERFES		(1 << 5)
/** UOTGHS_DEVEPTIER[6]_NAKINES NAKed IN Interrupt Enable **/
#define UOTGHS_DEVEPTIER[6]_NAKINES		(1 << 4)
/** UOTGHS_DEVEPTIER[6]_NAKOUTES NAKed OUT Interrupt Enable **/
#define UOTGHS_DEVEPTIER[6]_NAKOUTES		(1 << 3)
/** UOTGHS_DEVEPTIER[6]_RXSTPES Received SETUP Interrupt Enable **/
#define UOTGHS_DEVEPTIER[6]_RXSTPES		(1 << 2)
/** UOTGHS_DEVEPTIER[6]_RXOUTES Received OUT Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[6]_RXOUTES		(1 << 1)
/** UOTGHS_DEVEPTIER[6]_TXINES Transmitted IN Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[6]_TXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptier[7] DEVEPTIER[7] Device Endpoint Enable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIER[7]_STALLRQS STALL Request Enable **/
#define UOTGHS_DEVEPTIER[7]_STALLRQS		(1 << 19)
/** UOTGHS_DEVEPTIER[7]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_DEVEPTIER[7]_RSTDTS		(1 << 18)
/** UOTGHS_DEVEPTIER[7]_NYETDISS NYET Token Disable Enable **/
#define UOTGHS_DEVEPTIER[7]_NYETDISS		(1 << 17)
/** UOTGHS_DEVEPTIER[7]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define UOTGHS_DEVEPTIER[7]_EPDISHDMAS		(1 << 16)
/** UOTGHS_DEVEPTIER[7]_FIFOCONS FIFO Control **/
#define UOTGHS_DEVEPTIER[7]_FIFOCONS		(1 << 14)
/** UOTGHS_DEVEPTIER[7]_KILLBKS Kill IN Bank **/
#define UOTGHS_DEVEPTIER[7]_KILLBKS		(1 << 13)
/** UOTGHS_DEVEPTIER[7]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define UOTGHS_DEVEPTIER[7]_NBUSYBKES		(1 << 12)
/** UOTGHS_DEVEPTIER[7]_SHORTPACKETES Short Packet Interrupt Enable **/
#define UOTGHS_DEVEPTIER[7]_SHORTPACKETES		(1 << 7)
/** UOTGHS_DEVEPTIER[7]_STALLEDES STALLed Interrupt Enable **/
#define UOTGHS_DEVEPTIER[7]_STALLEDES		(1 << 6)
/** UOTGHS_DEVEPTIER[7]_OVERFES Overflow Interrupt Enable **/
#define UOTGHS_DEVEPTIER[7]_OVERFES		(1 << 5)
/** UOTGHS_DEVEPTIER[7]_NAKINES NAKed IN Interrupt Enable **/
#define UOTGHS_DEVEPTIER[7]_NAKINES		(1 << 4)
/** UOTGHS_DEVEPTIER[7]_NAKOUTES NAKed OUT Interrupt Enable **/
#define UOTGHS_DEVEPTIER[7]_NAKOUTES		(1 << 3)
/** UOTGHS_DEVEPTIER[7]_RXSTPES Received SETUP Interrupt Enable **/
#define UOTGHS_DEVEPTIER[7]_RXSTPES		(1 << 2)
/** UOTGHS_DEVEPTIER[7]_RXOUTES Received OUT Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[7]_RXOUTES		(1 << 1)
/** UOTGHS_DEVEPTIER[7]_TXINES Transmitted IN Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[7]_TXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptier[8] DEVEPTIER[8] Device Endpoint Enable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIER[8]_STALLRQS STALL Request Enable **/
#define UOTGHS_DEVEPTIER[8]_STALLRQS		(1 << 19)
/** UOTGHS_DEVEPTIER[8]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_DEVEPTIER[8]_RSTDTS		(1 << 18)
/** UOTGHS_DEVEPTIER[8]_NYETDISS NYET Token Disable Enable **/
#define UOTGHS_DEVEPTIER[8]_NYETDISS		(1 << 17)
/** UOTGHS_DEVEPTIER[8]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define UOTGHS_DEVEPTIER[8]_EPDISHDMAS		(1 << 16)
/** UOTGHS_DEVEPTIER[8]_FIFOCONS FIFO Control **/
#define UOTGHS_DEVEPTIER[8]_FIFOCONS		(1 << 14)
/** UOTGHS_DEVEPTIER[8]_KILLBKS Kill IN Bank **/
#define UOTGHS_DEVEPTIER[8]_KILLBKS		(1 << 13)
/** UOTGHS_DEVEPTIER[8]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define UOTGHS_DEVEPTIER[8]_NBUSYBKES		(1 << 12)
/** UOTGHS_DEVEPTIER[8]_SHORTPACKETES Short Packet Interrupt Enable **/
#define UOTGHS_DEVEPTIER[8]_SHORTPACKETES		(1 << 7)
/** UOTGHS_DEVEPTIER[8]_STALLEDES STALLed Interrupt Enable **/
#define UOTGHS_DEVEPTIER[8]_STALLEDES		(1 << 6)
/** UOTGHS_DEVEPTIER[8]_OVERFES Overflow Interrupt Enable **/
#define UOTGHS_DEVEPTIER[8]_OVERFES		(1 << 5)
/** UOTGHS_DEVEPTIER[8]_NAKINES NAKed IN Interrupt Enable **/
#define UOTGHS_DEVEPTIER[8]_NAKINES		(1 << 4)
/** UOTGHS_DEVEPTIER[8]_NAKOUTES NAKed OUT Interrupt Enable **/
#define UOTGHS_DEVEPTIER[8]_NAKOUTES		(1 << 3)
/** UOTGHS_DEVEPTIER[8]_RXSTPES Received SETUP Interrupt Enable **/
#define UOTGHS_DEVEPTIER[8]_RXSTPES		(1 << 2)
/** UOTGHS_DEVEPTIER[8]_RXOUTES Received OUT Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[8]_RXOUTES		(1 << 1)
/** UOTGHS_DEVEPTIER[8]_TXINES Transmitted IN Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[8]_TXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptier[9] DEVEPTIER[9] Device Endpoint Enable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIER[9]_STALLRQS STALL Request Enable **/
#define UOTGHS_DEVEPTIER[9]_STALLRQS		(1 << 19)
/** UOTGHS_DEVEPTIER[9]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_DEVEPTIER[9]_RSTDTS		(1 << 18)
/** UOTGHS_DEVEPTIER[9]_NYETDISS NYET Token Disable Enable **/
#define UOTGHS_DEVEPTIER[9]_NYETDISS		(1 << 17)
/** UOTGHS_DEVEPTIER[9]_EPDISHDMAS Endpoint Interrupts Disable HDMA Request Enable **/
#define UOTGHS_DEVEPTIER[9]_EPDISHDMAS		(1 << 16)
/** UOTGHS_DEVEPTIER[9]_FIFOCONS FIFO Control **/
#define UOTGHS_DEVEPTIER[9]_FIFOCONS		(1 << 14)
/** UOTGHS_DEVEPTIER[9]_KILLBKS Kill IN Bank **/
#define UOTGHS_DEVEPTIER[9]_KILLBKS		(1 << 13)
/** UOTGHS_DEVEPTIER[9]_NBUSYBKES Number of Busy Banks Interrupt Enable **/
#define UOTGHS_DEVEPTIER[9]_NBUSYBKES		(1 << 12)
/** UOTGHS_DEVEPTIER[9]_SHORTPACKETES Short Packet Interrupt Enable **/
#define UOTGHS_DEVEPTIER[9]_SHORTPACKETES		(1 << 7)
/** UOTGHS_DEVEPTIER[9]_STALLEDES STALLed Interrupt Enable **/
#define UOTGHS_DEVEPTIER[9]_STALLEDES		(1 << 6)
/** UOTGHS_DEVEPTIER[9]_OVERFES Overflow Interrupt Enable **/
#define UOTGHS_DEVEPTIER[9]_OVERFES		(1 << 5)
/** UOTGHS_DEVEPTIER[9]_NAKINES NAKed IN Interrupt Enable **/
#define UOTGHS_DEVEPTIER[9]_NAKINES		(1 << 4)
/** UOTGHS_DEVEPTIER[9]_NAKOUTES NAKed OUT Interrupt Enable **/
#define UOTGHS_DEVEPTIER[9]_NAKOUTES		(1 << 3)
/** UOTGHS_DEVEPTIER[9]_RXSTPES Received SETUP Interrupt Enable **/
#define UOTGHS_DEVEPTIER[9]_RXSTPES		(1 << 2)
/** UOTGHS_DEVEPTIER[9]_RXOUTES Received OUT Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[9]_RXOUTES		(1 << 1)
/** UOTGHS_DEVEPTIER[9]_TXINES Transmitted IN Data Interrupt Enable **/
#define UOTGHS_DEVEPTIER[9]_TXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptidr0_isoenpt DEVEPTIDR0ISOENPT Device Endpoint Disable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIDR0_ISOENPT_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_EPDISHDMAC		(1 << 16)
/** UOTGHS_DEVEPTIDR0_ISOENPT_FIFOCONC FIFO Control Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_FIFOCONC		(1 << 14)
/** UOTGHS_DEVEPTIDR0_ISOENPT_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_NBUSYBKEC		(1 << 12)
/** UOTGHS_DEVEPTIDR0_ISOENPT_ERRORTRANSEC Transaction Error Interrupt Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_ERRORTRANSEC		(1 << 10)
/** UOTGHS_DEVEPTIDR0_ISOENPT_DATAXEC DataX Interrupt Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_DATAXEC		(1 << 9)
/** UOTGHS_DEVEPTIDR0_ISOENPT_MDATEC MData Interrupt Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_MDATEC		(1 << 8)
/** UOTGHS_DEVEPTIDR0_ISOENPT_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_SHORTPACKETEC		(1 << 7)
/** UOTGHS_DEVEPTIDR0_ISOENPT_CRCERREC CRC Error Interrupt Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_CRCERREC		(1 << 6)
/** UOTGHS_DEVEPTIDR0_ISOENPT_OVERFEC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_OVERFEC		(1 << 5)
/** UOTGHS_DEVEPTIDR0_ISOENPT_HBISOFLUSHEC High Bandwidth Isochronous IN Flush Interrupt Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_HBISOFLUSHEC		(1 << 4)
/** UOTGHS_DEVEPTIDR0_ISOENPT_HBISOINERREC High Bandwidth Isochronous IN Error Interrupt Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_HBISOINERREC		(1 << 3)
/** UOTGHS_DEVEPTIDR0_ISOENPT_UNDERFEC Underflow Interrupt Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_UNDERFEC		(1 << 2)
/** UOTGHS_DEVEPTIDR0_ISOENPT_RXOUTEC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_RXOUTEC		(1 << 1)
/** UOTGHS_DEVEPTIDR0_ISOENPT_TXINEC Transmitted IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR0_ISOENPT_TXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptidr[0] DEVEPTIDR[0] Device Endpoint Disable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIDR[0]_STALLRQC STALL Request Clear **/
#define UOTGHS_DEVEPTIDR[0]_STALLRQC		(1 << 19)
/** UOTGHS_DEVEPTIDR[0]_NYETDISC NYET Token Disable Clear **/
#define UOTGHS_DEVEPTIDR[0]_NYETDISC		(1 << 17)
/** UOTGHS_DEVEPTIDR[0]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define UOTGHS_DEVEPTIDR[0]_EPDISHDMAC		(1 << 16)
/** UOTGHS_DEVEPTIDR[0]_FIFOCONC FIFO Control Clear **/
#define UOTGHS_DEVEPTIDR[0]_FIFOCONC		(1 << 14)
/** UOTGHS_DEVEPTIDR[0]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[0]_NBUSYBKEC		(1 << 12)
/** UOTGHS_DEVEPTIDR[0]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[0]_SHORTPACKETEC		(1 << 7)
/** UOTGHS_DEVEPTIDR[0]_STALLEDEC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[0]_STALLEDEC		(1 << 6)
/** UOTGHS_DEVEPTIDR[0]_OVERFEC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[0]_OVERFEC		(1 << 5)
/** UOTGHS_DEVEPTIDR[0]_NAKINEC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[0]_NAKINEC		(1 << 4)
/** UOTGHS_DEVEPTIDR[0]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[0]_NAKOUTEC		(1 << 3)
/** UOTGHS_DEVEPTIDR[0]_RXSTPEC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[0]_RXSTPEC		(1 << 2)
/** UOTGHS_DEVEPTIDR[0]_RXOUTEC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[0]_RXOUTEC		(1 << 1)
/** UOTGHS_DEVEPTIDR[0]_TXINEC Transmitted IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[0]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptidr[1] DEVEPTIDR[1] Device Endpoint Disable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIDR[1]_STALLRQC STALL Request Clear **/
#define UOTGHS_DEVEPTIDR[1]_STALLRQC		(1 << 19)
/** UOTGHS_DEVEPTIDR[1]_NYETDISC NYET Token Disable Clear **/
#define UOTGHS_DEVEPTIDR[1]_NYETDISC		(1 << 17)
/** UOTGHS_DEVEPTIDR[1]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define UOTGHS_DEVEPTIDR[1]_EPDISHDMAC		(1 << 16)
/** UOTGHS_DEVEPTIDR[1]_FIFOCONC FIFO Control Clear **/
#define UOTGHS_DEVEPTIDR[1]_FIFOCONC		(1 << 14)
/** UOTGHS_DEVEPTIDR[1]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[1]_NBUSYBKEC		(1 << 12)
/** UOTGHS_DEVEPTIDR[1]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[1]_SHORTPACKETEC		(1 << 7)
/** UOTGHS_DEVEPTIDR[1]_STALLEDEC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[1]_STALLEDEC		(1 << 6)
/** UOTGHS_DEVEPTIDR[1]_OVERFEC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[1]_OVERFEC		(1 << 5)
/** UOTGHS_DEVEPTIDR[1]_NAKINEC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[1]_NAKINEC		(1 << 4)
/** UOTGHS_DEVEPTIDR[1]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[1]_NAKOUTEC		(1 << 3)
/** UOTGHS_DEVEPTIDR[1]_RXSTPEC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[1]_RXSTPEC		(1 << 2)
/** UOTGHS_DEVEPTIDR[1]_RXOUTEC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[1]_RXOUTEC		(1 << 1)
/** UOTGHS_DEVEPTIDR[1]_TXINEC Transmitted IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[1]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptidr[2] DEVEPTIDR[2] Device Endpoint Disable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIDR[2]_STALLRQC STALL Request Clear **/
#define UOTGHS_DEVEPTIDR[2]_STALLRQC		(1 << 19)
/** UOTGHS_DEVEPTIDR[2]_NYETDISC NYET Token Disable Clear **/
#define UOTGHS_DEVEPTIDR[2]_NYETDISC		(1 << 17)
/** UOTGHS_DEVEPTIDR[2]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define UOTGHS_DEVEPTIDR[2]_EPDISHDMAC		(1 << 16)
/** UOTGHS_DEVEPTIDR[2]_FIFOCONC FIFO Control Clear **/
#define UOTGHS_DEVEPTIDR[2]_FIFOCONC		(1 << 14)
/** UOTGHS_DEVEPTIDR[2]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[2]_NBUSYBKEC		(1 << 12)
/** UOTGHS_DEVEPTIDR[2]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[2]_SHORTPACKETEC		(1 << 7)
/** UOTGHS_DEVEPTIDR[2]_STALLEDEC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[2]_STALLEDEC		(1 << 6)
/** UOTGHS_DEVEPTIDR[2]_OVERFEC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[2]_OVERFEC		(1 << 5)
/** UOTGHS_DEVEPTIDR[2]_NAKINEC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[2]_NAKINEC		(1 << 4)
/** UOTGHS_DEVEPTIDR[2]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[2]_NAKOUTEC		(1 << 3)
/** UOTGHS_DEVEPTIDR[2]_RXSTPEC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[2]_RXSTPEC		(1 << 2)
/** UOTGHS_DEVEPTIDR[2]_RXOUTEC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[2]_RXOUTEC		(1 << 1)
/** UOTGHS_DEVEPTIDR[2]_TXINEC Transmitted IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[2]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptidr[3] DEVEPTIDR[3] Device Endpoint Disable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIDR[3]_STALLRQC STALL Request Clear **/
#define UOTGHS_DEVEPTIDR[3]_STALLRQC		(1 << 19)
/** UOTGHS_DEVEPTIDR[3]_NYETDISC NYET Token Disable Clear **/
#define UOTGHS_DEVEPTIDR[3]_NYETDISC		(1 << 17)
/** UOTGHS_DEVEPTIDR[3]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define UOTGHS_DEVEPTIDR[3]_EPDISHDMAC		(1 << 16)
/** UOTGHS_DEVEPTIDR[3]_FIFOCONC FIFO Control Clear **/
#define UOTGHS_DEVEPTIDR[3]_FIFOCONC		(1 << 14)
/** UOTGHS_DEVEPTIDR[3]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[3]_NBUSYBKEC		(1 << 12)
/** UOTGHS_DEVEPTIDR[3]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[3]_SHORTPACKETEC		(1 << 7)
/** UOTGHS_DEVEPTIDR[3]_STALLEDEC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[3]_STALLEDEC		(1 << 6)
/** UOTGHS_DEVEPTIDR[3]_OVERFEC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[3]_OVERFEC		(1 << 5)
/** UOTGHS_DEVEPTIDR[3]_NAKINEC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[3]_NAKINEC		(1 << 4)
/** UOTGHS_DEVEPTIDR[3]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[3]_NAKOUTEC		(1 << 3)
/** UOTGHS_DEVEPTIDR[3]_RXSTPEC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[3]_RXSTPEC		(1 << 2)
/** UOTGHS_DEVEPTIDR[3]_RXOUTEC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[3]_RXOUTEC		(1 << 1)
/** UOTGHS_DEVEPTIDR[3]_TXINEC Transmitted IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[3]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptidr[4] DEVEPTIDR[4] Device Endpoint Disable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIDR[4]_STALLRQC STALL Request Clear **/
#define UOTGHS_DEVEPTIDR[4]_STALLRQC		(1 << 19)
/** UOTGHS_DEVEPTIDR[4]_NYETDISC NYET Token Disable Clear **/
#define UOTGHS_DEVEPTIDR[4]_NYETDISC		(1 << 17)
/** UOTGHS_DEVEPTIDR[4]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define UOTGHS_DEVEPTIDR[4]_EPDISHDMAC		(1 << 16)
/** UOTGHS_DEVEPTIDR[4]_FIFOCONC FIFO Control Clear **/
#define UOTGHS_DEVEPTIDR[4]_FIFOCONC		(1 << 14)
/** UOTGHS_DEVEPTIDR[4]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[4]_NBUSYBKEC		(1 << 12)
/** UOTGHS_DEVEPTIDR[4]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[4]_SHORTPACKETEC		(1 << 7)
/** UOTGHS_DEVEPTIDR[4]_STALLEDEC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[4]_STALLEDEC		(1 << 6)
/** UOTGHS_DEVEPTIDR[4]_OVERFEC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[4]_OVERFEC		(1 << 5)
/** UOTGHS_DEVEPTIDR[4]_NAKINEC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[4]_NAKINEC		(1 << 4)
/** UOTGHS_DEVEPTIDR[4]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[4]_NAKOUTEC		(1 << 3)
/** UOTGHS_DEVEPTIDR[4]_RXSTPEC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[4]_RXSTPEC		(1 << 2)
/** UOTGHS_DEVEPTIDR[4]_RXOUTEC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[4]_RXOUTEC		(1 << 1)
/** UOTGHS_DEVEPTIDR[4]_TXINEC Transmitted IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[4]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptidr[5] DEVEPTIDR[5] Device Endpoint Disable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIDR[5]_STALLRQC STALL Request Clear **/
#define UOTGHS_DEVEPTIDR[5]_STALLRQC		(1 << 19)
/** UOTGHS_DEVEPTIDR[5]_NYETDISC NYET Token Disable Clear **/
#define UOTGHS_DEVEPTIDR[5]_NYETDISC		(1 << 17)
/** UOTGHS_DEVEPTIDR[5]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define UOTGHS_DEVEPTIDR[5]_EPDISHDMAC		(1 << 16)
/** UOTGHS_DEVEPTIDR[5]_FIFOCONC FIFO Control Clear **/
#define UOTGHS_DEVEPTIDR[5]_FIFOCONC		(1 << 14)
/** UOTGHS_DEVEPTIDR[5]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[5]_NBUSYBKEC		(1 << 12)
/** UOTGHS_DEVEPTIDR[5]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[5]_SHORTPACKETEC		(1 << 7)
/** UOTGHS_DEVEPTIDR[5]_STALLEDEC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[5]_STALLEDEC		(1 << 6)
/** UOTGHS_DEVEPTIDR[5]_OVERFEC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[5]_OVERFEC		(1 << 5)
/** UOTGHS_DEVEPTIDR[5]_NAKINEC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[5]_NAKINEC		(1 << 4)
/** UOTGHS_DEVEPTIDR[5]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[5]_NAKOUTEC		(1 << 3)
/** UOTGHS_DEVEPTIDR[5]_RXSTPEC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[5]_RXSTPEC		(1 << 2)
/** UOTGHS_DEVEPTIDR[5]_RXOUTEC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[5]_RXOUTEC		(1 << 1)
/** UOTGHS_DEVEPTIDR[5]_TXINEC Transmitted IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[5]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptidr[6] DEVEPTIDR[6] Device Endpoint Disable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIDR[6]_STALLRQC STALL Request Clear **/
#define UOTGHS_DEVEPTIDR[6]_STALLRQC		(1 << 19)
/** UOTGHS_DEVEPTIDR[6]_NYETDISC NYET Token Disable Clear **/
#define UOTGHS_DEVEPTIDR[6]_NYETDISC		(1 << 17)
/** UOTGHS_DEVEPTIDR[6]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define UOTGHS_DEVEPTIDR[6]_EPDISHDMAC		(1 << 16)
/** UOTGHS_DEVEPTIDR[6]_FIFOCONC FIFO Control Clear **/
#define UOTGHS_DEVEPTIDR[6]_FIFOCONC		(1 << 14)
/** UOTGHS_DEVEPTIDR[6]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[6]_NBUSYBKEC		(1 << 12)
/** UOTGHS_DEVEPTIDR[6]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[6]_SHORTPACKETEC		(1 << 7)
/** UOTGHS_DEVEPTIDR[6]_STALLEDEC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[6]_STALLEDEC		(1 << 6)
/** UOTGHS_DEVEPTIDR[6]_OVERFEC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[6]_OVERFEC		(1 << 5)
/** UOTGHS_DEVEPTIDR[6]_NAKINEC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[6]_NAKINEC		(1 << 4)
/** UOTGHS_DEVEPTIDR[6]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[6]_NAKOUTEC		(1 << 3)
/** UOTGHS_DEVEPTIDR[6]_RXSTPEC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[6]_RXSTPEC		(1 << 2)
/** UOTGHS_DEVEPTIDR[6]_RXOUTEC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[6]_RXOUTEC		(1 << 1)
/** UOTGHS_DEVEPTIDR[6]_TXINEC Transmitted IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[6]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptidr[7] DEVEPTIDR[7] Device Endpoint Disable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIDR[7]_STALLRQC STALL Request Clear **/
#define UOTGHS_DEVEPTIDR[7]_STALLRQC		(1 << 19)
/** UOTGHS_DEVEPTIDR[7]_NYETDISC NYET Token Disable Clear **/
#define UOTGHS_DEVEPTIDR[7]_NYETDISC		(1 << 17)
/** UOTGHS_DEVEPTIDR[7]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define UOTGHS_DEVEPTIDR[7]_EPDISHDMAC		(1 << 16)
/** UOTGHS_DEVEPTIDR[7]_FIFOCONC FIFO Control Clear **/
#define UOTGHS_DEVEPTIDR[7]_FIFOCONC		(1 << 14)
/** UOTGHS_DEVEPTIDR[7]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[7]_NBUSYBKEC		(1 << 12)
/** UOTGHS_DEVEPTIDR[7]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[7]_SHORTPACKETEC		(1 << 7)
/** UOTGHS_DEVEPTIDR[7]_STALLEDEC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[7]_STALLEDEC		(1 << 6)
/** UOTGHS_DEVEPTIDR[7]_OVERFEC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[7]_OVERFEC		(1 << 5)
/** UOTGHS_DEVEPTIDR[7]_NAKINEC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[7]_NAKINEC		(1 << 4)
/** UOTGHS_DEVEPTIDR[7]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[7]_NAKOUTEC		(1 << 3)
/** UOTGHS_DEVEPTIDR[7]_RXSTPEC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[7]_RXSTPEC		(1 << 2)
/** UOTGHS_DEVEPTIDR[7]_RXOUTEC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[7]_RXOUTEC		(1 << 1)
/** UOTGHS_DEVEPTIDR[7]_TXINEC Transmitted IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[7]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptidr[8] DEVEPTIDR[8] Device Endpoint Disable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIDR[8]_STALLRQC STALL Request Clear **/
#define UOTGHS_DEVEPTIDR[8]_STALLRQC		(1 << 19)
/** UOTGHS_DEVEPTIDR[8]_NYETDISC NYET Token Disable Clear **/
#define UOTGHS_DEVEPTIDR[8]_NYETDISC		(1 << 17)
/** UOTGHS_DEVEPTIDR[8]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define UOTGHS_DEVEPTIDR[8]_EPDISHDMAC		(1 << 16)
/** UOTGHS_DEVEPTIDR[8]_FIFOCONC FIFO Control Clear **/
#define UOTGHS_DEVEPTIDR[8]_FIFOCONC		(1 << 14)
/** UOTGHS_DEVEPTIDR[8]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[8]_NBUSYBKEC		(1 << 12)
/** UOTGHS_DEVEPTIDR[8]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[8]_SHORTPACKETEC		(1 << 7)
/** UOTGHS_DEVEPTIDR[8]_STALLEDEC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[8]_STALLEDEC		(1 << 6)
/** UOTGHS_DEVEPTIDR[8]_OVERFEC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[8]_OVERFEC		(1 << 5)
/** UOTGHS_DEVEPTIDR[8]_NAKINEC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[8]_NAKINEC		(1 << 4)
/** UOTGHS_DEVEPTIDR[8]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[8]_NAKOUTEC		(1 << 3)
/** UOTGHS_DEVEPTIDR[8]_RXSTPEC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[8]_RXSTPEC		(1 << 2)
/** UOTGHS_DEVEPTIDR[8]_RXOUTEC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[8]_RXOUTEC		(1 << 1)
/** UOTGHS_DEVEPTIDR[8]_TXINEC Transmitted IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[8]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_deveptidr[9] DEVEPTIDR[9] Device Endpoint Disable Register (n = 0)
@{*/

/** UOTGHS_DEVEPTIDR[9]_STALLRQC STALL Request Clear **/
#define UOTGHS_DEVEPTIDR[9]_STALLRQC		(1 << 19)
/** UOTGHS_DEVEPTIDR[9]_NYETDISC NYET Token Disable Clear **/
#define UOTGHS_DEVEPTIDR[9]_NYETDISC		(1 << 17)
/** UOTGHS_DEVEPTIDR[9]_EPDISHDMAC Endpoint Interrupts Disable HDMA Request Clear **/
#define UOTGHS_DEVEPTIDR[9]_EPDISHDMAC		(1 << 16)
/** UOTGHS_DEVEPTIDR[9]_FIFOCONC FIFO Control Clear **/
#define UOTGHS_DEVEPTIDR[9]_FIFOCONC		(1 << 14)
/** UOTGHS_DEVEPTIDR[9]_NBUSYBKEC Number of Busy Banks Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[9]_NBUSYBKEC		(1 << 12)
/** UOTGHS_DEVEPTIDR[9]_SHORTPACKETEC Shortpacket Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[9]_SHORTPACKETEC		(1 << 7)
/** UOTGHS_DEVEPTIDR[9]_STALLEDEC STALLed Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[9]_STALLEDEC		(1 << 6)
/** UOTGHS_DEVEPTIDR[9]_OVERFEC Overflow Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[9]_OVERFEC		(1 << 5)
/** UOTGHS_DEVEPTIDR[9]_NAKINEC NAKed IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[9]_NAKINEC		(1 << 4)
/** UOTGHS_DEVEPTIDR[9]_NAKOUTEC NAKed OUT Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[9]_NAKOUTEC		(1 << 3)
/** UOTGHS_DEVEPTIDR[9]_RXSTPEC Received SETUP Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[9]_RXSTPEC		(1 << 2)
/** UOTGHS_DEVEPTIDR[9]_RXOUTEC Received OUT Data Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[9]_RXOUTEC		(1 << 1)
/** UOTGHS_DEVEPTIDR[9]_TXINEC Transmitted IN Interrupt Clear **/
#define UOTGHS_DEVEPTIDR[9]_TXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmanxtdsc1 DEVDMANXTDSC1 Device DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define UOTGHS_DEVDMANXTDSC1_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_DEVDMANXTDSC1_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmanxtdsc1_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmaaddress1 DEVDMAADDRESS1 Device DMA Channel Address Register (n = 1)
@{*/


#define UOTGHS_DEVDMAADDRESS1_BUFF_ADD_SHIFT		0
#define UOTGHS_DEVDMAADDRESS1_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmaaddress1_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmacontrol1 DEVDMACONTROL1 Device DMA Channel Control Register (n = 1)
@{*/


#define UOTGHS_DEVDMACONTROL1_BUFF_LENGTH_SHIFT		16
#define UOTGHS_DEVDMACONTROL1_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_devdmacontrol1_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_DEVDMACONTROL1_BURST_LCK Burst Lock Enable **/
#define UOTGHS_DEVDMACONTROL1_BURST_LCK		(1 << 7)
/** UOTGHS_DEVDMACONTROL1_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL1_DESC_LD_IT		(1 << 6)
/** UOTGHS_DEVDMACONTROL1_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL1_END_BUFFIT		(1 << 5)
/** UOTGHS_DEVDMACONTROL1_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL1_END_TR_IT		(1 << 4)
/** UOTGHS_DEVDMACONTROL1_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_DEVDMACONTROL1_END_B_EN		(1 << 3)
/** UOTGHS_DEVDMACONTROL1_END_TR_EN End of Transfer Enable Control **/
#define UOTGHS_DEVDMACONTROL1_END_TR_EN		(1 << 2)
/** UOTGHS_DEVDMACONTROL1_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_DEVDMACONTROL1_LDNXT_DSC		(1 << 1)
/** UOTGHS_DEVDMACONTROL1_CHANN_ENB Channel Enable Command **/
#define UOTGHS_DEVDMACONTROL1_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmastatus1 DEVDMASTATUS1 Device DMA Channel Status Register (n = 1)
@{*/


#define UOTGHS_DEVDMASTATUS1_BUFF_COUNT_SHIFT		16
#define UOTGHS_DEVDMASTATUS1_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_devdmastatus1_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVDMASTATUS1_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_DEVDMASTATUS1_DESC_LDST		(1 << 6)
/** UOTGHS_DEVDMASTATUS1_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_DEVDMASTATUS1_END_BF_ST		(1 << 5)
/** UOTGHS_DEVDMASTATUS1_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_DEVDMASTATUS1_END_TR_ST		(1 << 4)
/** UOTGHS_DEVDMASTATUS1_CHANN_ACT Channel Active Status **/
#define UOTGHS_DEVDMASTATUS1_CHANN_ACT		(1 << 1)
/** UOTGHS_DEVDMASTATUS1_CHANN_ENB Channel Enable Status **/
#define UOTGHS_DEVDMASTATUS1_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmanxtdsc2 DEVDMANXTDSC2 Device DMA Channel Next Descriptor Address Register (n = 2)
@{*/


#define UOTGHS_DEVDMANXTDSC2_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_DEVDMANXTDSC2_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmanxtdsc2_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmaaddress2 DEVDMAADDRESS2 Device DMA Channel Address Register (n = 2)
@{*/


#define UOTGHS_DEVDMAADDRESS2_BUFF_ADD_SHIFT		0
#define UOTGHS_DEVDMAADDRESS2_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmaaddress2_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmacontrol2 DEVDMACONTROL2 Device DMA Channel Control Register (n = 2)
@{*/


#define UOTGHS_DEVDMACONTROL2_BUFF_LENGTH_SHIFT		16
#define UOTGHS_DEVDMACONTROL2_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_devdmacontrol2_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_DEVDMACONTROL2_BURST_LCK Burst Lock Enable **/
#define UOTGHS_DEVDMACONTROL2_BURST_LCK		(1 << 7)
/** UOTGHS_DEVDMACONTROL2_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL2_DESC_LD_IT		(1 << 6)
/** UOTGHS_DEVDMACONTROL2_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL2_END_BUFFIT		(1 << 5)
/** UOTGHS_DEVDMACONTROL2_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL2_END_TR_IT		(1 << 4)
/** UOTGHS_DEVDMACONTROL2_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_DEVDMACONTROL2_END_B_EN		(1 << 3)
/** UOTGHS_DEVDMACONTROL2_END_TR_EN End of Transfer Enable Control **/
#define UOTGHS_DEVDMACONTROL2_END_TR_EN		(1 << 2)
/** UOTGHS_DEVDMACONTROL2_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_DEVDMACONTROL2_LDNXT_DSC		(1 << 1)
/** UOTGHS_DEVDMACONTROL2_CHANN_ENB Channel Enable Command **/
#define UOTGHS_DEVDMACONTROL2_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmastatus2 DEVDMASTATUS2 Device DMA Channel Status Register (n = 2)
@{*/


#define UOTGHS_DEVDMASTATUS2_BUFF_COUNT_SHIFT		16
#define UOTGHS_DEVDMASTATUS2_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_devdmastatus2_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVDMASTATUS2_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_DEVDMASTATUS2_DESC_LDST		(1 << 6)
/** UOTGHS_DEVDMASTATUS2_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_DEVDMASTATUS2_END_BF_ST		(1 << 5)
/** UOTGHS_DEVDMASTATUS2_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_DEVDMASTATUS2_END_TR_ST		(1 << 4)
/** UOTGHS_DEVDMASTATUS2_CHANN_ACT Channel Active Status **/
#define UOTGHS_DEVDMASTATUS2_CHANN_ACT		(1 << 1)
/** UOTGHS_DEVDMASTATUS2_CHANN_ENB Channel Enable Status **/
#define UOTGHS_DEVDMASTATUS2_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmanxtdsc3 DEVDMANXTDSC3 Device DMA Channel Next Descriptor Address Register (n = 3)
@{*/


#define UOTGHS_DEVDMANXTDSC3_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_DEVDMANXTDSC3_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmanxtdsc3_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmaaddress3 DEVDMAADDRESS3 Device DMA Channel Address Register (n = 3)
@{*/


#define UOTGHS_DEVDMAADDRESS3_BUFF_ADD_SHIFT		0
#define UOTGHS_DEVDMAADDRESS3_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmaaddress3_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmacontrol3 DEVDMACONTROL3 Device DMA Channel Control Register (n = 3)
@{*/


#define UOTGHS_DEVDMACONTROL3_BUFF_LENGTH_SHIFT		16
#define UOTGHS_DEVDMACONTROL3_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_devdmacontrol3_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_DEVDMACONTROL3_BURST_LCK Burst Lock Enable **/
#define UOTGHS_DEVDMACONTROL3_BURST_LCK		(1 << 7)
/** UOTGHS_DEVDMACONTROL3_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL3_DESC_LD_IT		(1 << 6)
/** UOTGHS_DEVDMACONTROL3_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL3_END_BUFFIT		(1 << 5)
/** UOTGHS_DEVDMACONTROL3_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL3_END_TR_IT		(1 << 4)
/** UOTGHS_DEVDMACONTROL3_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_DEVDMACONTROL3_END_B_EN		(1 << 3)
/** UOTGHS_DEVDMACONTROL3_END_TR_EN End of Transfer Enable Control **/
#define UOTGHS_DEVDMACONTROL3_END_TR_EN		(1 << 2)
/** UOTGHS_DEVDMACONTROL3_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_DEVDMACONTROL3_LDNXT_DSC		(1 << 1)
/** UOTGHS_DEVDMACONTROL3_CHANN_ENB Channel Enable Command **/
#define UOTGHS_DEVDMACONTROL3_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmastatus3 DEVDMASTATUS3 Device DMA Channel Status Register (n = 3)
@{*/


#define UOTGHS_DEVDMASTATUS3_BUFF_COUNT_SHIFT		16
#define UOTGHS_DEVDMASTATUS3_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_devdmastatus3_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVDMASTATUS3_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_DEVDMASTATUS3_DESC_LDST		(1 << 6)
/** UOTGHS_DEVDMASTATUS3_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_DEVDMASTATUS3_END_BF_ST		(1 << 5)
/** UOTGHS_DEVDMASTATUS3_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_DEVDMASTATUS3_END_TR_ST		(1 << 4)
/** UOTGHS_DEVDMASTATUS3_CHANN_ACT Channel Active Status **/
#define UOTGHS_DEVDMASTATUS3_CHANN_ACT		(1 << 1)
/** UOTGHS_DEVDMASTATUS3_CHANN_ENB Channel Enable Status **/
#define UOTGHS_DEVDMASTATUS3_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmanxtdsc4 DEVDMANXTDSC4 Device DMA Channel Next Descriptor Address Register (n = 4)
@{*/


#define UOTGHS_DEVDMANXTDSC4_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_DEVDMANXTDSC4_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmanxtdsc4_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmaaddress4 DEVDMAADDRESS4 Device DMA Channel Address Register (n = 4)
@{*/


#define UOTGHS_DEVDMAADDRESS4_BUFF_ADD_SHIFT		0
#define UOTGHS_DEVDMAADDRESS4_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmaaddress4_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmacontrol4 DEVDMACONTROL4 Device DMA Channel Control Register (n = 4)
@{*/


#define UOTGHS_DEVDMACONTROL4_BUFF_LENGTH_SHIFT		16
#define UOTGHS_DEVDMACONTROL4_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_devdmacontrol4_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_DEVDMACONTROL4_BURST_LCK Burst Lock Enable **/
#define UOTGHS_DEVDMACONTROL4_BURST_LCK		(1 << 7)
/** UOTGHS_DEVDMACONTROL4_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL4_DESC_LD_IT		(1 << 6)
/** UOTGHS_DEVDMACONTROL4_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL4_END_BUFFIT		(1 << 5)
/** UOTGHS_DEVDMACONTROL4_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL4_END_TR_IT		(1 << 4)
/** UOTGHS_DEVDMACONTROL4_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_DEVDMACONTROL4_END_B_EN		(1 << 3)
/** UOTGHS_DEVDMACONTROL4_END_TR_EN End of Transfer Enable Control **/
#define UOTGHS_DEVDMACONTROL4_END_TR_EN		(1 << 2)
/** UOTGHS_DEVDMACONTROL4_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_DEVDMACONTROL4_LDNXT_DSC		(1 << 1)
/** UOTGHS_DEVDMACONTROL4_CHANN_ENB Channel Enable Command **/
#define UOTGHS_DEVDMACONTROL4_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmastatus4 DEVDMASTATUS4 Device DMA Channel Status Register (n = 4)
@{*/


#define UOTGHS_DEVDMASTATUS4_BUFF_COUNT_SHIFT		16
#define UOTGHS_DEVDMASTATUS4_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_devdmastatus4_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVDMASTATUS4_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_DEVDMASTATUS4_DESC_LDST		(1 << 6)
/** UOTGHS_DEVDMASTATUS4_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_DEVDMASTATUS4_END_BF_ST		(1 << 5)
/** UOTGHS_DEVDMASTATUS4_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_DEVDMASTATUS4_END_TR_ST		(1 << 4)
/** UOTGHS_DEVDMASTATUS4_CHANN_ACT Channel Active Status **/
#define UOTGHS_DEVDMASTATUS4_CHANN_ACT		(1 << 1)
/** UOTGHS_DEVDMASTATUS4_CHANN_ENB Channel Enable Status **/
#define UOTGHS_DEVDMASTATUS4_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmanxtdsc5 DEVDMANXTDSC5 Device DMA Channel Next Descriptor Address Register (n = 5)
@{*/


#define UOTGHS_DEVDMANXTDSC5_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_DEVDMANXTDSC5_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmanxtdsc5_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmaaddress5 DEVDMAADDRESS5 Device DMA Channel Address Register (n = 5)
@{*/


#define UOTGHS_DEVDMAADDRESS5_BUFF_ADD_SHIFT		0
#define UOTGHS_DEVDMAADDRESS5_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmaaddress5_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmacontrol5 DEVDMACONTROL5 Device DMA Channel Control Register (n = 5)
@{*/


#define UOTGHS_DEVDMACONTROL5_BUFF_LENGTH_SHIFT		16
#define UOTGHS_DEVDMACONTROL5_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_devdmacontrol5_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_DEVDMACONTROL5_BURST_LCK Burst Lock Enable **/
#define UOTGHS_DEVDMACONTROL5_BURST_LCK		(1 << 7)
/** UOTGHS_DEVDMACONTROL5_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL5_DESC_LD_IT		(1 << 6)
/** UOTGHS_DEVDMACONTROL5_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL5_END_BUFFIT		(1 << 5)
/** UOTGHS_DEVDMACONTROL5_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL5_END_TR_IT		(1 << 4)
/** UOTGHS_DEVDMACONTROL5_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_DEVDMACONTROL5_END_B_EN		(1 << 3)
/** UOTGHS_DEVDMACONTROL5_END_TR_EN End of Transfer Enable Control **/
#define UOTGHS_DEVDMACONTROL5_END_TR_EN		(1 << 2)
/** UOTGHS_DEVDMACONTROL5_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_DEVDMACONTROL5_LDNXT_DSC		(1 << 1)
/** UOTGHS_DEVDMACONTROL5_CHANN_ENB Channel Enable Command **/
#define UOTGHS_DEVDMACONTROL5_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmastatus5 DEVDMASTATUS5 Device DMA Channel Status Register (n = 5)
@{*/


#define UOTGHS_DEVDMASTATUS5_BUFF_COUNT_SHIFT		16
#define UOTGHS_DEVDMASTATUS5_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_devdmastatus5_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVDMASTATUS5_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_DEVDMASTATUS5_DESC_LDST		(1 << 6)
/** UOTGHS_DEVDMASTATUS5_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_DEVDMASTATUS5_END_BF_ST		(1 << 5)
/** UOTGHS_DEVDMASTATUS5_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_DEVDMASTATUS5_END_TR_ST		(1 << 4)
/** UOTGHS_DEVDMASTATUS5_CHANN_ACT Channel Active Status **/
#define UOTGHS_DEVDMASTATUS5_CHANN_ACT		(1 << 1)
/** UOTGHS_DEVDMASTATUS5_CHANN_ENB Channel Enable Status **/
#define UOTGHS_DEVDMASTATUS5_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmanxtdsc6 DEVDMANXTDSC6 Device DMA Channel Next Descriptor Address Register (n = 6)
@{*/


#define UOTGHS_DEVDMANXTDSC6_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_DEVDMANXTDSC6_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmanxtdsc6_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmaaddress6 DEVDMAADDRESS6 Device DMA Channel Address Register (n = 6)
@{*/


#define UOTGHS_DEVDMAADDRESS6_BUFF_ADD_SHIFT		0
#define UOTGHS_DEVDMAADDRESS6_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmaaddress6_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmacontrol6 DEVDMACONTROL6 Device DMA Channel Control Register (n = 6)
@{*/


#define UOTGHS_DEVDMACONTROL6_BUFF_LENGTH_SHIFT		16
#define UOTGHS_DEVDMACONTROL6_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_devdmacontrol6_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_DEVDMACONTROL6_BURST_LCK Burst Lock Enable **/
#define UOTGHS_DEVDMACONTROL6_BURST_LCK		(1 << 7)
/** UOTGHS_DEVDMACONTROL6_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL6_DESC_LD_IT		(1 << 6)
/** UOTGHS_DEVDMACONTROL6_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL6_END_BUFFIT		(1 << 5)
/** UOTGHS_DEVDMACONTROL6_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL6_END_TR_IT		(1 << 4)
/** UOTGHS_DEVDMACONTROL6_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_DEVDMACONTROL6_END_B_EN		(1 << 3)
/** UOTGHS_DEVDMACONTROL6_END_TR_EN End of Transfer Enable Control **/
#define UOTGHS_DEVDMACONTROL6_END_TR_EN		(1 << 2)
/** UOTGHS_DEVDMACONTROL6_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_DEVDMACONTROL6_LDNXT_DSC		(1 << 1)
/** UOTGHS_DEVDMACONTROL6_CHANN_ENB Channel Enable Command **/
#define UOTGHS_DEVDMACONTROL6_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmastatus6 DEVDMASTATUS6 Device DMA Channel Status Register (n = 6)
@{*/


#define UOTGHS_DEVDMASTATUS6_BUFF_COUNT_SHIFT		16
#define UOTGHS_DEVDMASTATUS6_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_devdmastatus6_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVDMASTATUS6_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_DEVDMASTATUS6_DESC_LDST		(1 << 6)
/** UOTGHS_DEVDMASTATUS6_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_DEVDMASTATUS6_END_BF_ST		(1 << 5)
/** UOTGHS_DEVDMASTATUS6_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_DEVDMASTATUS6_END_TR_ST		(1 << 4)
/** UOTGHS_DEVDMASTATUS6_CHANN_ACT Channel Active Status **/
#define UOTGHS_DEVDMASTATUS6_CHANN_ACT		(1 << 1)
/** UOTGHS_DEVDMASTATUS6_CHANN_ENB Channel Enable Status **/
#define UOTGHS_DEVDMASTATUS6_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmanxtdsc7 DEVDMANXTDSC7 Device DMA Channel Next Descriptor Address Register (n = 7)
@{*/


#define UOTGHS_DEVDMANXTDSC7_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_DEVDMANXTDSC7_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmanxtdsc7_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmaaddress7 DEVDMAADDRESS7 Device DMA Channel Address Register (n = 7)
@{*/


#define UOTGHS_DEVDMAADDRESS7_BUFF_ADD_SHIFT		0
#define UOTGHS_DEVDMAADDRESS7_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_devdmaaddress7_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_devdmacontrol7 DEVDMACONTROL7 Device DMA Channel Control Register (n = 7)
@{*/


#define UOTGHS_DEVDMACONTROL7_BUFF_LENGTH_SHIFT		16
#define UOTGHS_DEVDMACONTROL7_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_devdmacontrol7_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_DEVDMACONTROL7_BURST_LCK Burst Lock Enable **/
#define UOTGHS_DEVDMACONTROL7_BURST_LCK		(1 << 7)
/** UOTGHS_DEVDMACONTROL7_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL7_DESC_LD_IT		(1 << 6)
/** UOTGHS_DEVDMACONTROL7_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL7_END_BUFFIT		(1 << 5)
/** UOTGHS_DEVDMACONTROL7_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_DEVDMACONTROL7_END_TR_IT		(1 << 4)
/** UOTGHS_DEVDMACONTROL7_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_DEVDMACONTROL7_END_B_EN		(1 << 3)
/** UOTGHS_DEVDMACONTROL7_END_TR_EN End of Transfer Enable Control **/
#define UOTGHS_DEVDMACONTROL7_END_TR_EN		(1 << 2)
/** UOTGHS_DEVDMACONTROL7_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_DEVDMACONTROL7_LDNXT_DSC		(1 << 1)
/** UOTGHS_DEVDMACONTROL7_CHANN_ENB Channel Enable Command **/
#define UOTGHS_DEVDMACONTROL7_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_devdmastatus7 DEVDMASTATUS7 Device DMA Channel Status Register (n = 7)
@{*/


#define UOTGHS_DEVDMASTATUS7_BUFF_COUNT_SHIFT		16
#define UOTGHS_DEVDMASTATUS7_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_devdmastatus7_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_DEVDMASTATUS7_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_DEVDMASTATUS7_DESC_LDST		(1 << 6)
/** UOTGHS_DEVDMASTATUS7_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_DEVDMASTATUS7_END_BF_ST		(1 << 5)
/** UOTGHS_DEVDMASTATUS7_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_DEVDMASTATUS7_END_TR_ST		(1 << 4)
/** UOTGHS_DEVDMASTATUS7_CHANN_ACT Channel Active Status **/
#define UOTGHS_DEVDMASTATUS7_CHANN_ACT		(1 << 1)
/** UOTGHS_DEVDMASTATUS7_CHANN_ENB Channel Enable Status **/
#define UOTGHS_DEVDMASTATUS7_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstctrl HSTCTRL Host General Control Register
@{*/


#define UOTGHS_HSTCTRL_SPDCONF_SHIFT		12
#define UOTGHS_HSTCTRL_SPDCONF_MASK		0x03
/** @defgroup uotghs_hstctrl_spdconf SPDCONF Mode Configuration
@{*/
/**@}*/

/** UOTGHS_HSTCTRL_RESUME Send USB Resume **/
#define UOTGHS_HSTCTRL_RESUME		(1 << 10)
/** UOTGHS_HSTCTRL_RESET Send USB Reset **/
#define UOTGHS_HSTCTRL_RESET		(1 << 9)
/** UOTGHS_HSTCTRL_SOFE Start of Frame Generation Enable **/
#define UOTGHS_HSTCTRL_SOFE		(1 << 8)

/**@}*/

/** @defgroup uotghs_hstisr HSTISR Host Global Interrupt Status Register
@{*/

/** UOTGHS_HSTISR_DMA_6 DMA Channel 6 Interrupt **/
#define UOTGHS_HSTISR_DMA_6		(1 << 30)
/** UOTGHS_HSTISR_DMA_5 DMA Channel 5 Interrupt **/
#define UOTGHS_HSTISR_DMA_5		(1 << 29)
/** UOTGHS_HSTISR_DMA_4 DMA Channel 4 Interrupt **/
#define UOTGHS_HSTISR_DMA_4		(1 << 28)
/** UOTGHS_HSTISR_DMA_3 DMA Channel 3 Interrupt **/
#define UOTGHS_HSTISR_DMA_3		(1 << 27)
/** UOTGHS_HSTISR_DMA_2 DMA Channel 2 Interrupt **/
#define UOTGHS_HSTISR_DMA_2		(1 << 26)
/** UOTGHS_HSTISR_DMA_1 DMA Channel 1 Interrupt **/
#define UOTGHS_HSTISR_DMA_1		(1 << 25)
/** UOTGHS_HSTISR_PEP_9 Pipe 9 Interrupt **/
#define UOTGHS_HSTISR_PEP_9		(1 << 17)
/** UOTGHS_HSTISR_PEP_8 Pipe 8 Interrupt **/
#define UOTGHS_HSTISR_PEP_8		(1 << 16)
/** UOTGHS_HSTISR_PEP_7 Pipe 7 Interrupt **/
#define UOTGHS_HSTISR_PEP_7		(1 << 15)
/** UOTGHS_HSTISR_PEP_6 Pipe 6 Interrupt **/
#define UOTGHS_HSTISR_PEP_6		(1 << 14)
/** UOTGHS_HSTISR_PEP_5 Pipe 5 Interrupt **/
#define UOTGHS_HSTISR_PEP_5		(1 << 13)
/** UOTGHS_HSTISR_PEP_4 Pipe 4 Interrupt **/
#define UOTGHS_HSTISR_PEP_4		(1 << 12)
/** UOTGHS_HSTISR_PEP_3 Pipe 3 Interrupt **/
#define UOTGHS_HSTISR_PEP_3		(1 << 11)
/** UOTGHS_HSTISR_PEP_2 Pipe 2 Interrupt **/
#define UOTGHS_HSTISR_PEP_2		(1 << 10)
/** UOTGHS_HSTISR_PEP_1 Pipe 1 Interrupt **/
#define UOTGHS_HSTISR_PEP_1		(1 << 9)
/** UOTGHS_HSTISR_PEP_0 Pipe 0 Interrupt **/
#define UOTGHS_HSTISR_PEP_0		(1 << 8)
/** UOTGHS_HSTISR_HWUPI Host Wake-Up Interrupt **/
#define UOTGHS_HSTISR_HWUPI		(1 << 6)
/** UOTGHS_HSTISR_HSOFI Host Start of Frame Interrupt **/
#define UOTGHS_HSTISR_HSOFI		(1 << 5)
/** UOTGHS_HSTISR_RXRSMI Upstream Resume Received Interrupt **/
#define UOTGHS_HSTISR_RXRSMI		(1 << 4)
/** UOTGHS_HSTISR_RSMEDI Downstream Resume Sent Interrupt **/
#define UOTGHS_HSTISR_RSMEDI		(1 << 3)
/** UOTGHS_HSTISR_RSTI USB Reset Sent Interrupt **/
#define UOTGHS_HSTISR_RSTI		(1 << 2)
/** UOTGHS_HSTISR_DDISCI Device Disconnection Interrupt **/
#define UOTGHS_HSTISR_DDISCI		(1 << 1)
/** UOTGHS_HSTISR_DCONNI Device Connection Interrupt **/
#define UOTGHS_HSTISR_DCONNI		(1 << 0)

/**@}*/

/** @defgroup uotghs_hsticr HSTICR Host Global Interrupt Clear Register
@{*/

/** UOTGHS_HSTICR_HWUPIC Host Wake-Up Interrupt Clear **/
#define UOTGHS_HSTICR_HWUPIC		(1 << 6)
/** UOTGHS_HSTICR_HSOFIC Host Start of Frame Interrupt Clear **/
#define UOTGHS_HSTICR_HSOFIC		(1 << 5)
/** UOTGHS_HSTICR_RXRSMIC Upstream Resume Received Interrupt Clear **/
#define UOTGHS_HSTICR_RXRSMIC		(1 << 4)
/** UOTGHS_HSTICR_RSMEDIC Downstream Resume Sent Interrupt Clear **/
#define UOTGHS_HSTICR_RSMEDIC		(1 << 3)
/** UOTGHS_HSTICR_RSTIC USB Reset Sent Interrupt Clear **/
#define UOTGHS_HSTICR_RSTIC		(1 << 2)
/** UOTGHS_HSTICR_DDISCIC Device Disconnection Interrupt Clear **/
#define UOTGHS_HSTICR_DDISCIC		(1 << 1)
/** UOTGHS_HSTICR_DCONNIC Device Connection Interrupt Clear **/
#define UOTGHS_HSTICR_DCONNIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstifr HSTIFR Host Global Interrupt Set Register
@{*/

/** UOTGHS_HSTIFR_DMA_6 DMA Channel 6 Interrupt Set **/
#define UOTGHS_HSTIFR_DMA_6		(1 << 30)
/** UOTGHS_HSTIFR_DMA_5 DMA Channel 5 Interrupt Set **/
#define UOTGHS_HSTIFR_DMA_5		(1 << 29)
/** UOTGHS_HSTIFR_DMA_4 DMA Channel 4 Interrupt Set **/
#define UOTGHS_HSTIFR_DMA_4		(1 << 28)
/** UOTGHS_HSTIFR_DMA_3 DMA Channel 3 Interrupt Set **/
#define UOTGHS_HSTIFR_DMA_3		(1 << 27)
/** UOTGHS_HSTIFR_DMA_2 DMA Channel 2 Interrupt Set **/
#define UOTGHS_HSTIFR_DMA_2		(1 << 26)
/** UOTGHS_HSTIFR_DMA_1 DMA Channel 1 Interrupt Set **/
#define UOTGHS_HSTIFR_DMA_1		(1 << 25)
/** UOTGHS_HSTIFR_HWUPIS Host Wake-Up Interrupt Set **/
#define UOTGHS_HSTIFR_HWUPIS		(1 << 6)
/** UOTGHS_HSTIFR_HSOFIS Host Start of Frame Interrupt Set **/
#define UOTGHS_HSTIFR_HSOFIS		(1 << 5)
/** UOTGHS_HSTIFR_RXRSMIS Upstream Resume Received Interrupt Set **/
#define UOTGHS_HSTIFR_RXRSMIS		(1 << 4)
/** UOTGHS_HSTIFR_RSMEDIS Downstream Resume Sent Interrupt Set **/
#define UOTGHS_HSTIFR_RSMEDIS		(1 << 3)
/** UOTGHS_HSTIFR_RSTIS USB Reset Sent Interrupt Set **/
#define UOTGHS_HSTIFR_RSTIS		(1 << 2)
/** UOTGHS_HSTIFR_DDISCIS Device Disconnection Interrupt Set **/
#define UOTGHS_HSTIFR_DDISCIS		(1 << 1)
/** UOTGHS_HSTIFR_DCONNIS Device Connection Interrupt Set **/
#define UOTGHS_HSTIFR_DCONNIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstimr HSTIMR Host Global Interrupt Mask Register
@{*/

/** UOTGHS_HSTIMR_DMA_6 DMA Channel 6 Interrupt Enable **/
#define UOTGHS_HSTIMR_DMA_6		(1 << 30)
/** UOTGHS_HSTIMR_DMA_5 DMA Channel 5 Interrupt Enable **/
#define UOTGHS_HSTIMR_DMA_5		(1 << 29)
/** UOTGHS_HSTIMR_DMA_4 DMA Channel 4 Interrupt Enable **/
#define UOTGHS_HSTIMR_DMA_4		(1 << 28)
/** UOTGHS_HSTIMR_DMA_3 DMA Channel 3 Interrupt Enable **/
#define UOTGHS_HSTIMR_DMA_3		(1 << 27)
/** UOTGHS_HSTIMR_DMA_2 DMA Channel 2 Interrupt Enable **/
#define UOTGHS_HSTIMR_DMA_2		(1 << 26)
/** UOTGHS_HSTIMR_DMA_1 DMA Channel 1 Interrupt Enable **/
#define UOTGHS_HSTIMR_DMA_1		(1 << 25)
/** UOTGHS_HSTIMR_PEP_9 Pipe 9 Interrupt Enable **/
#define UOTGHS_HSTIMR_PEP_9		(1 << 17)
/** UOTGHS_HSTIMR_PEP_8 Pipe 8 Interrupt Enable **/
#define UOTGHS_HSTIMR_PEP_8		(1 << 16)
/** UOTGHS_HSTIMR_PEP_7 Pipe 7 Interrupt Enable **/
#define UOTGHS_HSTIMR_PEP_7		(1 << 15)
/** UOTGHS_HSTIMR_PEP_6 Pipe 6 Interrupt Enable **/
#define UOTGHS_HSTIMR_PEP_6		(1 << 14)
/** UOTGHS_HSTIMR_PEP_5 Pipe 5 Interrupt Enable **/
#define UOTGHS_HSTIMR_PEP_5		(1 << 13)
/** UOTGHS_HSTIMR_PEP_4 Pipe 4 Interrupt Enable **/
#define UOTGHS_HSTIMR_PEP_4		(1 << 12)
/** UOTGHS_HSTIMR_PEP_3 Pipe 3 Interrupt Enable **/
#define UOTGHS_HSTIMR_PEP_3		(1 << 11)
/** UOTGHS_HSTIMR_PEP_2 Pipe 2 Interrupt Enable **/
#define UOTGHS_HSTIMR_PEP_2		(1 << 10)
/** UOTGHS_HSTIMR_PEP_1 Pipe 1 Interrupt Enable **/
#define UOTGHS_HSTIMR_PEP_1		(1 << 9)
/** UOTGHS_HSTIMR_PEP_0 Pipe 0 Interrupt Enable **/
#define UOTGHS_HSTIMR_PEP_0		(1 << 8)
/** UOTGHS_HSTIMR_HWUPIE Host Wake-Up Interrupt Enable **/
#define UOTGHS_HSTIMR_HWUPIE		(1 << 6)
/** UOTGHS_HSTIMR_HSOFIE Host Start of Frame Interrupt Enable **/
#define UOTGHS_HSTIMR_HSOFIE		(1 << 5)
/** UOTGHS_HSTIMR_RXRSMIE Upstream Resume Received Interrupt Enable **/
#define UOTGHS_HSTIMR_RXRSMIE		(1 << 4)
/** UOTGHS_HSTIMR_RSMEDIE Downstream Resume Sent Interrupt Enable **/
#define UOTGHS_HSTIMR_RSMEDIE		(1 << 3)
/** UOTGHS_HSTIMR_RSTIE USB Reset Sent Interrupt Enable **/
#define UOTGHS_HSTIMR_RSTIE		(1 << 2)
/** UOTGHS_HSTIMR_DDISCIE Device Disconnection Interrupt Enable **/
#define UOTGHS_HSTIMR_DDISCIE		(1 << 1)
/** UOTGHS_HSTIMR_DCONNIE Device Connection Interrupt Enable **/
#define UOTGHS_HSTIMR_DCONNIE		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstidr HSTIDR Host Global Interrupt Disable Register
@{*/

/** UOTGHS_HSTIDR_DMA_6 DMA Channel 6 Interrupt Disable **/
#define UOTGHS_HSTIDR_DMA_6		(1 << 30)
/** UOTGHS_HSTIDR_DMA_5 DMA Channel 5 Interrupt Disable **/
#define UOTGHS_HSTIDR_DMA_5		(1 << 29)
/** UOTGHS_HSTIDR_DMA_4 DMA Channel 4 Interrupt Disable **/
#define UOTGHS_HSTIDR_DMA_4		(1 << 28)
/** UOTGHS_HSTIDR_DMA_3 DMA Channel 3 Interrupt Disable **/
#define UOTGHS_HSTIDR_DMA_3		(1 << 27)
/** UOTGHS_HSTIDR_DMA_2 DMA Channel 2 Interrupt Disable **/
#define UOTGHS_HSTIDR_DMA_2		(1 << 26)
/** UOTGHS_HSTIDR_DMA_1 DMA Channel 1 Interrupt Disable **/
#define UOTGHS_HSTIDR_DMA_1		(1 << 25)
/** UOTGHS_HSTIDR_PEP_9 Pipe 9 Interrupt Disable **/
#define UOTGHS_HSTIDR_PEP_9		(1 << 17)
/** UOTGHS_HSTIDR_PEP_8 Pipe 8 Interrupt Disable **/
#define UOTGHS_HSTIDR_PEP_8		(1 << 16)
/** UOTGHS_HSTIDR_PEP_7 Pipe 7 Interrupt Disable **/
#define UOTGHS_HSTIDR_PEP_7		(1 << 15)
/** UOTGHS_HSTIDR_PEP_6 Pipe 6 Interrupt Disable **/
#define UOTGHS_HSTIDR_PEP_6		(1 << 14)
/** UOTGHS_HSTIDR_PEP_5 Pipe 5 Interrupt Disable **/
#define UOTGHS_HSTIDR_PEP_5		(1 << 13)
/** UOTGHS_HSTIDR_PEP_4 Pipe 4 Interrupt Disable **/
#define UOTGHS_HSTIDR_PEP_4		(1 << 12)
/** UOTGHS_HSTIDR_PEP_3 Pipe 3 Interrupt Disable **/
#define UOTGHS_HSTIDR_PEP_3		(1 << 11)
/** UOTGHS_HSTIDR_PEP_2 Pipe 2 Interrupt Disable **/
#define UOTGHS_HSTIDR_PEP_2		(1 << 10)
/** UOTGHS_HSTIDR_PEP_1 Pipe 1 Interrupt Disable **/
#define UOTGHS_HSTIDR_PEP_1		(1 << 9)
/** UOTGHS_HSTIDR_PEP_0 Pipe 0 Interrupt Disable **/
#define UOTGHS_HSTIDR_PEP_0		(1 << 8)
/** UOTGHS_HSTIDR_HWUPIEC Host Wake-Up Interrupt Disable **/
#define UOTGHS_HSTIDR_HWUPIEC		(1 << 6)
/** UOTGHS_HSTIDR_HSOFIEC Host Start of Frame Interrupt Disable **/
#define UOTGHS_HSTIDR_HSOFIEC		(1 << 5)
/** UOTGHS_HSTIDR_RXRSMIEC Upstream Resume Received Interrupt Disable **/
#define UOTGHS_HSTIDR_RXRSMIEC		(1 << 4)
/** UOTGHS_HSTIDR_RSMEDIEC Downstream Resume Sent Interrupt Disable **/
#define UOTGHS_HSTIDR_RSMEDIEC		(1 << 3)
/** UOTGHS_HSTIDR_RSTIEC USB Reset Sent Interrupt Disable **/
#define UOTGHS_HSTIDR_RSTIEC		(1 << 2)
/** UOTGHS_HSTIDR_DDISCIEC Device Disconnection Interrupt Disable **/
#define UOTGHS_HSTIDR_DDISCIEC		(1 << 1)
/** UOTGHS_HSTIDR_DCONNIEC Device Connection Interrupt Disable **/
#define UOTGHS_HSTIDR_DCONNIEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstier HSTIER Host Global Interrupt Enable Register
@{*/

/** UOTGHS_HSTIER_DMA_6 DMA Channel 6 Interrupt Enable **/
#define UOTGHS_HSTIER_DMA_6		(1 << 30)
/** UOTGHS_HSTIER_DMA_5 DMA Channel 5 Interrupt Enable **/
#define UOTGHS_HSTIER_DMA_5		(1 << 29)
/** UOTGHS_HSTIER_DMA_4 DMA Channel 4 Interrupt Enable **/
#define UOTGHS_HSTIER_DMA_4		(1 << 28)
/** UOTGHS_HSTIER_DMA_3 DMA Channel 3 Interrupt Enable **/
#define UOTGHS_HSTIER_DMA_3		(1 << 27)
/** UOTGHS_HSTIER_DMA_2 DMA Channel 2 Interrupt Enable **/
#define UOTGHS_HSTIER_DMA_2		(1 << 26)
/** UOTGHS_HSTIER_DMA_1 DMA Channel 1 Interrupt Enable **/
#define UOTGHS_HSTIER_DMA_1		(1 << 25)
/** UOTGHS_HSTIER_PEP_9 Pipe 9 Interrupt Enable **/
#define UOTGHS_HSTIER_PEP_9		(1 << 17)
/** UOTGHS_HSTIER_PEP_8 Pipe 8 Interrupt Enable **/
#define UOTGHS_HSTIER_PEP_8		(1 << 16)
/** UOTGHS_HSTIER_PEP_7 Pipe 7 Interrupt Enable **/
#define UOTGHS_HSTIER_PEP_7		(1 << 15)
/** UOTGHS_HSTIER_PEP_6 Pipe 6 Interrupt Enable **/
#define UOTGHS_HSTIER_PEP_6		(1 << 14)
/** UOTGHS_HSTIER_PEP_5 Pipe 5 Interrupt Enable **/
#define UOTGHS_HSTIER_PEP_5		(1 << 13)
/** UOTGHS_HSTIER_PEP_4 Pipe 4 Interrupt Enable **/
#define UOTGHS_HSTIER_PEP_4		(1 << 12)
/** UOTGHS_HSTIER_PEP_3 Pipe 3 Interrupt Enable **/
#define UOTGHS_HSTIER_PEP_3		(1 << 11)
/** UOTGHS_HSTIER_PEP_2 Pipe 2 Interrupt Enable **/
#define UOTGHS_HSTIER_PEP_2		(1 << 10)
/** UOTGHS_HSTIER_PEP_1 Pipe 1 Interrupt Enable **/
#define UOTGHS_HSTIER_PEP_1		(1 << 9)
/** UOTGHS_HSTIER_PEP_0 Pipe 0 Interrupt Enable **/
#define UOTGHS_HSTIER_PEP_0		(1 << 8)
/** UOTGHS_HSTIER_HWUPIES Host Wake-Up Interrupt Enable **/
#define UOTGHS_HSTIER_HWUPIES		(1 << 6)
/** UOTGHS_HSTIER_HSOFIES Host Start of Frame Interrupt Enable **/
#define UOTGHS_HSTIER_HSOFIES		(1 << 5)
/** UOTGHS_HSTIER_RXRSMIES Upstream Resume Received Interrupt Enable **/
#define UOTGHS_HSTIER_RXRSMIES		(1 << 4)
/** UOTGHS_HSTIER_RSMEDIES Downstream Resume Sent Interrupt Enable **/
#define UOTGHS_HSTIER_RSMEDIES		(1 << 3)
/** UOTGHS_HSTIER_RSTIES USB Reset Sent Interrupt Enable **/
#define UOTGHS_HSTIER_RSTIES		(1 << 2)
/** UOTGHS_HSTIER_DDISCIES Device Disconnection Interrupt Enable **/
#define UOTGHS_HSTIER_DDISCIES		(1 << 1)
/** UOTGHS_HSTIER_DCONNIES Device Connection Interrupt Enable **/
#define UOTGHS_HSTIER_DCONNIES		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpip HSTPIP Host Pipe Register
@{*/

/** UOTGHS_HSTPIP_PRST8 Pipe 8 Reset **/
#define UOTGHS_HSTPIP_PRST8		(1 << 24)
/** UOTGHS_HSTPIP_PRST7 Pipe 7 Reset **/
#define UOTGHS_HSTPIP_PRST7		(1 << 23)
/** UOTGHS_HSTPIP_PRST6 Pipe 6 Reset **/
#define UOTGHS_HSTPIP_PRST6		(1 << 22)
/** UOTGHS_HSTPIP_PRST5 Pipe 5 Reset **/
#define UOTGHS_HSTPIP_PRST5		(1 << 21)
/** UOTGHS_HSTPIP_PRST4 Pipe 4 Reset **/
#define UOTGHS_HSTPIP_PRST4		(1 << 20)
/** UOTGHS_HSTPIP_PRST3 Pipe 3 Reset **/
#define UOTGHS_HSTPIP_PRST3		(1 << 19)
/** UOTGHS_HSTPIP_PRST2 Pipe 2 Reset **/
#define UOTGHS_HSTPIP_PRST2		(1 << 18)
/** UOTGHS_HSTPIP_PRST1 Pipe 1 Reset **/
#define UOTGHS_HSTPIP_PRST1		(1 << 17)
/** UOTGHS_HSTPIP_PRST0 Pipe 0 Reset **/
#define UOTGHS_HSTPIP_PRST0		(1 << 16)
/** UOTGHS_HSTPIP_PEN8 Pipe 8 Enable **/
#define UOTGHS_HSTPIP_PEN8		(1 << 8)
/** UOTGHS_HSTPIP_PEN7 Pipe 7 Enable **/
#define UOTGHS_HSTPIP_PEN7		(1 << 7)
/** UOTGHS_HSTPIP_PEN6 Pipe 6 Enable **/
#define UOTGHS_HSTPIP_PEN6		(1 << 6)
/** UOTGHS_HSTPIP_PEN5 Pipe 5 Enable **/
#define UOTGHS_HSTPIP_PEN5		(1 << 5)
/** UOTGHS_HSTPIP_PEN4 Pipe 4 Enable **/
#define UOTGHS_HSTPIP_PEN4		(1 << 4)
/** UOTGHS_HSTPIP_PEN3 Pipe 3 Enable **/
#define UOTGHS_HSTPIP_PEN3		(1 << 3)
/** UOTGHS_HSTPIP_PEN2 Pipe 2 Enable **/
#define UOTGHS_HSTPIP_PEN2		(1 << 2)
/** UOTGHS_HSTPIP_PEN1 Pipe 1 Enable **/
#define UOTGHS_HSTPIP_PEN1		(1 << 1)
/** UOTGHS_HSTPIP_PEN0 Pipe 0 Enable **/
#define UOTGHS_HSTPIP_PEN0		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstfnum HSTFNUM Host Frame Number Register
@{*/


#define UOTGHS_HSTFNUM_FLENHIGH_SHIFT		16
#define UOTGHS_HSTFNUM_FLENHIGH_MASK		0xff
/** @defgroup uotghs_hstfnum_flenhigh FLENHIGH Frame Length
@{*/
/**@}*/


#define UOTGHS_HSTFNUM_FNUM_SHIFT		3
#define UOTGHS_HSTFNUM_FNUM_MASK		0x7ff
/** @defgroup uotghs_hstfnum_fnum FNUM Frame Number
@{*/
/**@}*/


#define UOTGHS_HSTFNUM_MFNUM_SHIFT		0
#define UOTGHS_HSTFNUM_MFNUM_MASK		0x07
/** @defgroup uotghs_hstfnum_mfnum MFNUM Micro Frame Number
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstaddr1 HSTADDR1 Host Address 1 Register
@{*/


#define UOTGHS_HSTADDR1_HSTADDRP3_SHIFT		24
#define UOTGHS_HSTADDR1_HSTADDRP3_MASK		0x7f
/** @defgroup uotghs_hstaddr1_hstaddrp3 HSTADDRP3 USB Host Address
@{*/
/**@}*/


#define UOTGHS_HSTADDR1_HSTADDRP2_SHIFT		16
#define UOTGHS_HSTADDR1_HSTADDRP2_MASK		0x7f
/** @defgroup uotghs_hstaddr1_hstaddrp2 HSTADDRP2 USB Host Address
@{*/
/**@}*/


#define UOTGHS_HSTADDR1_HSTADDRP1_SHIFT		8
#define UOTGHS_HSTADDR1_HSTADDRP1_MASK		0x7f
/** @defgroup uotghs_hstaddr1_hstaddrp1 HSTADDRP1 USB Host Address
@{*/
/**@}*/


#define UOTGHS_HSTADDR1_HSTADDRP0_SHIFT		0
#define UOTGHS_HSTADDR1_HSTADDRP0_MASK		0x7f
/** @defgroup uotghs_hstaddr1_hstaddrp0 HSTADDRP0 USB Host Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstaddr2 HSTADDR2 Host Address 2 Register
@{*/


#define UOTGHS_HSTADDR2_HSTADDRP7_SHIFT		24
#define UOTGHS_HSTADDR2_HSTADDRP7_MASK		0x7f
/** @defgroup uotghs_hstaddr2_hstaddrp7 HSTADDRP7 USB Host Address
@{*/
/**@}*/


#define UOTGHS_HSTADDR2_HSTADDRP6_SHIFT		16
#define UOTGHS_HSTADDR2_HSTADDRP6_MASK		0x7f
/** @defgroup uotghs_hstaddr2_hstaddrp6 HSTADDRP6 USB Host Address
@{*/
/**@}*/


#define UOTGHS_HSTADDR2_HSTADDRP5_SHIFT		8
#define UOTGHS_HSTADDR2_HSTADDRP5_MASK		0x7f
/** @defgroup uotghs_hstaddr2_hstaddrp5 HSTADDRP5 USB Host Address
@{*/
/**@}*/


#define UOTGHS_HSTADDR2_HSTADDRP4_SHIFT		0
#define UOTGHS_HSTADDR2_HSTADDRP4_MASK		0x7f
/** @defgroup uotghs_hstaddr2_hstaddrp4 HSTADDRP4 USB Host Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstaddr3 HSTADDR3 Host Address 3 Register
@{*/


#define UOTGHS_HSTADDR3_HSTADDRP9_SHIFT		8
#define UOTGHS_HSTADDR3_HSTADDRP9_MASK		0x7f
/** @defgroup uotghs_hstaddr3_hstaddrp9 HSTADDRP9 USB Host Address
@{*/
/**@}*/


#define UOTGHS_HSTADDR3_HSTADDRP8_SHIFT		0
#define UOTGHS_HSTADDR3_HSTADDRP8_MASK		0x7f
/** @defgroup uotghs_hstaddr3_hstaddrp8 HSTADDRP8 USB Host Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstpipcfg0_hsbohscp HSTPIPCFG0HSBOHSCP Host Pipe Configuration Register (n = 0)
@{*/


#define UOTGHS_HSTPIPCFG0_HSBOHSCP_BINTERVAL_SHIFT		24
#define UOTGHS_HSTPIPCFG0_HSBOHSCP_BINTERVAL_MASK		0xff
/** @defgroup uotghs_hstpipcfg0_hsbohscp_binterval BINTERVAL Binterval Parameter for the Bulk-Out/Ping Transaction
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG0_HSBOHSCP_PINGEN Ping Enable **/
#define UOTGHS_HSTPIPCFG0_HSBOHSCP_PINGEN		(1 << 20)

#define UOTGHS_HSTPIPCFG0_HSBOHSCP_PEPNUM_SHIFT		16
#define UOTGHS_HSTPIPCFG0_HSBOHSCP_PEPNUM_MASK		0x0f
/** @defgroup uotghs_hstpipcfg0_hsbohscp_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG0_HSBOHSCP_PTYPE_SHIFT		12
#define UOTGHS_HSTPIPCFG0_HSBOHSCP_PTYPE_MASK		0x03
/** @defgroup uotghs_hstpipcfg0_hsbohscp_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG0_HSBOHSCP_AUTOSW Automatic Switch **/
#define UOTGHS_HSTPIPCFG0_HSBOHSCP_AUTOSW		(1 << 10)

#define UOTGHS_HSTPIPCFG0_HSBOHSCP_PTOKEN_SHIFT		8
#define UOTGHS_HSTPIPCFG0_HSBOHSCP_PTOKEN_MASK		0x03
/** @defgroup uotghs_hstpipcfg0_hsbohscp_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG0_HSBOHSCP_PSIZE_SHIFT		4
#define UOTGHS_HSTPIPCFG0_HSBOHSCP_PSIZE_MASK		0x07
/** @defgroup uotghs_hstpipcfg0_hsbohscp_psize PSIZE Pipe Size
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG0_HSBOHSCP_PBK_SHIFT		2
#define UOTGHS_HSTPIPCFG0_HSBOHSCP_PBK_MASK		0x03
/** @defgroup uotghs_hstpipcfg0_hsbohscp_pbk PBK Pipe Banks
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG0_HSBOHSCP_ALLOC Pipe Memory Allocate **/
#define UOTGHS_HSTPIPCFG0_HSBOHSCP_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_hstpipcfg[0] HSTPIPCFG[0] Host Pipe Configuration Register (n = 0)
@{*/


#define UOTGHS_HSTPIPCFG[0]_INTFRQ_SHIFT		24
#define UOTGHS_HSTPIPCFG[0]_INTFRQ_MASK		0xff
/** @defgroup uotghs_hstpipcfg[0]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[0]_PEPNUM_SHIFT		16
#define UOTGHS_HSTPIPCFG[0]_PEPNUM_MASK		0x0f
/** @defgroup uotghs_hstpipcfg[0]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[0]_PTYPE_SHIFT		12
#define UOTGHS_HSTPIPCFG[0]_PTYPE_MASK		0x03
/** @defgroup uotghs_hstpipcfg[0]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[0]_AUTOSW Automatic Switch **/
#define UOTGHS_HSTPIPCFG[0]_AUTOSW		(1 << 10)

#define UOTGHS_HSTPIPCFG[0]_PTOKEN_SHIFT		8
#define UOTGHS_HSTPIPCFG[0]_PTOKEN_MASK		0x03
/** @defgroup uotghs_hstpipcfg[0]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[0]_PSIZE_SHIFT		4
#define UOTGHS_HSTPIPCFG[0]_PSIZE_MASK		0x07
/** @defgroup uotghs_hstpipcfg[0]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[0]_PBK_SHIFT		2
#define UOTGHS_HSTPIPCFG[0]_PBK_MASK		0x03
/** @defgroup uotghs_hstpipcfg[0]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[0]_ALLOC Pipe Memory Allocate **/
#define UOTGHS_HSTPIPCFG[0]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_hstpipcfg[1] HSTPIPCFG[1] Host Pipe Configuration Register (n = 0)
@{*/


#define UOTGHS_HSTPIPCFG[1]_INTFRQ_SHIFT		24
#define UOTGHS_HSTPIPCFG[1]_INTFRQ_MASK		0xff
/** @defgroup uotghs_hstpipcfg[1]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[1]_PEPNUM_SHIFT		16
#define UOTGHS_HSTPIPCFG[1]_PEPNUM_MASK		0x0f
/** @defgroup uotghs_hstpipcfg[1]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[1]_PTYPE_SHIFT		12
#define UOTGHS_HSTPIPCFG[1]_PTYPE_MASK		0x03
/** @defgroup uotghs_hstpipcfg[1]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[1]_AUTOSW Automatic Switch **/
#define UOTGHS_HSTPIPCFG[1]_AUTOSW		(1 << 10)

#define UOTGHS_HSTPIPCFG[1]_PTOKEN_SHIFT		8
#define UOTGHS_HSTPIPCFG[1]_PTOKEN_MASK		0x03
/** @defgroup uotghs_hstpipcfg[1]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[1]_PSIZE_SHIFT		4
#define UOTGHS_HSTPIPCFG[1]_PSIZE_MASK		0x07
/** @defgroup uotghs_hstpipcfg[1]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[1]_PBK_SHIFT		2
#define UOTGHS_HSTPIPCFG[1]_PBK_MASK		0x03
/** @defgroup uotghs_hstpipcfg[1]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[1]_ALLOC Pipe Memory Allocate **/
#define UOTGHS_HSTPIPCFG[1]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_hstpipcfg[2] HSTPIPCFG[2] Host Pipe Configuration Register (n = 0)
@{*/


#define UOTGHS_HSTPIPCFG[2]_INTFRQ_SHIFT		24
#define UOTGHS_HSTPIPCFG[2]_INTFRQ_MASK		0xff
/** @defgroup uotghs_hstpipcfg[2]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[2]_PEPNUM_SHIFT		16
#define UOTGHS_HSTPIPCFG[2]_PEPNUM_MASK		0x0f
/** @defgroup uotghs_hstpipcfg[2]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[2]_PTYPE_SHIFT		12
#define UOTGHS_HSTPIPCFG[2]_PTYPE_MASK		0x03
/** @defgroup uotghs_hstpipcfg[2]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[2]_AUTOSW Automatic Switch **/
#define UOTGHS_HSTPIPCFG[2]_AUTOSW		(1 << 10)

#define UOTGHS_HSTPIPCFG[2]_PTOKEN_SHIFT		8
#define UOTGHS_HSTPIPCFG[2]_PTOKEN_MASK		0x03
/** @defgroup uotghs_hstpipcfg[2]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[2]_PSIZE_SHIFT		4
#define UOTGHS_HSTPIPCFG[2]_PSIZE_MASK		0x07
/** @defgroup uotghs_hstpipcfg[2]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[2]_PBK_SHIFT		2
#define UOTGHS_HSTPIPCFG[2]_PBK_MASK		0x03
/** @defgroup uotghs_hstpipcfg[2]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[2]_ALLOC Pipe Memory Allocate **/
#define UOTGHS_HSTPIPCFG[2]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_hstpipcfg[3] HSTPIPCFG[3] Host Pipe Configuration Register (n = 0)
@{*/


#define UOTGHS_HSTPIPCFG[3]_INTFRQ_SHIFT		24
#define UOTGHS_HSTPIPCFG[3]_INTFRQ_MASK		0xff
/** @defgroup uotghs_hstpipcfg[3]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[3]_PEPNUM_SHIFT		16
#define UOTGHS_HSTPIPCFG[3]_PEPNUM_MASK		0x0f
/** @defgroup uotghs_hstpipcfg[3]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[3]_PTYPE_SHIFT		12
#define UOTGHS_HSTPIPCFG[3]_PTYPE_MASK		0x03
/** @defgroup uotghs_hstpipcfg[3]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[3]_AUTOSW Automatic Switch **/
#define UOTGHS_HSTPIPCFG[3]_AUTOSW		(1 << 10)

#define UOTGHS_HSTPIPCFG[3]_PTOKEN_SHIFT		8
#define UOTGHS_HSTPIPCFG[3]_PTOKEN_MASK		0x03
/** @defgroup uotghs_hstpipcfg[3]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[3]_PSIZE_SHIFT		4
#define UOTGHS_HSTPIPCFG[3]_PSIZE_MASK		0x07
/** @defgroup uotghs_hstpipcfg[3]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[3]_PBK_SHIFT		2
#define UOTGHS_HSTPIPCFG[3]_PBK_MASK		0x03
/** @defgroup uotghs_hstpipcfg[3]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[3]_ALLOC Pipe Memory Allocate **/
#define UOTGHS_HSTPIPCFG[3]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_hstpipcfg[4] HSTPIPCFG[4] Host Pipe Configuration Register (n = 0)
@{*/


#define UOTGHS_HSTPIPCFG[4]_INTFRQ_SHIFT		24
#define UOTGHS_HSTPIPCFG[4]_INTFRQ_MASK		0xff
/** @defgroup uotghs_hstpipcfg[4]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[4]_PEPNUM_SHIFT		16
#define UOTGHS_HSTPIPCFG[4]_PEPNUM_MASK		0x0f
/** @defgroup uotghs_hstpipcfg[4]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[4]_PTYPE_SHIFT		12
#define UOTGHS_HSTPIPCFG[4]_PTYPE_MASK		0x03
/** @defgroup uotghs_hstpipcfg[4]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[4]_AUTOSW Automatic Switch **/
#define UOTGHS_HSTPIPCFG[4]_AUTOSW		(1 << 10)

#define UOTGHS_HSTPIPCFG[4]_PTOKEN_SHIFT		8
#define UOTGHS_HSTPIPCFG[4]_PTOKEN_MASK		0x03
/** @defgroup uotghs_hstpipcfg[4]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[4]_PSIZE_SHIFT		4
#define UOTGHS_HSTPIPCFG[4]_PSIZE_MASK		0x07
/** @defgroup uotghs_hstpipcfg[4]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[4]_PBK_SHIFT		2
#define UOTGHS_HSTPIPCFG[4]_PBK_MASK		0x03
/** @defgroup uotghs_hstpipcfg[4]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[4]_ALLOC Pipe Memory Allocate **/
#define UOTGHS_HSTPIPCFG[4]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_hstpipcfg[5] HSTPIPCFG[5] Host Pipe Configuration Register (n = 0)
@{*/


#define UOTGHS_HSTPIPCFG[5]_INTFRQ_SHIFT		24
#define UOTGHS_HSTPIPCFG[5]_INTFRQ_MASK		0xff
/** @defgroup uotghs_hstpipcfg[5]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[5]_PEPNUM_SHIFT		16
#define UOTGHS_HSTPIPCFG[5]_PEPNUM_MASK		0x0f
/** @defgroup uotghs_hstpipcfg[5]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[5]_PTYPE_SHIFT		12
#define UOTGHS_HSTPIPCFG[5]_PTYPE_MASK		0x03
/** @defgroup uotghs_hstpipcfg[5]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[5]_AUTOSW Automatic Switch **/
#define UOTGHS_HSTPIPCFG[5]_AUTOSW		(1 << 10)

#define UOTGHS_HSTPIPCFG[5]_PTOKEN_SHIFT		8
#define UOTGHS_HSTPIPCFG[5]_PTOKEN_MASK		0x03
/** @defgroup uotghs_hstpipcfg[5]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[5]_PSIZE_SHIFT		4
#define UOTGHS_HSTPIPCFG[5]_PSIZE_MASK		0x07
/** @defgroup uotghs_hstpipcfg[5]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[5]_PBK_SHIFT		2
#define UOTGHS_HSTPIPCFG[5]_PBK_MASK		0x03
/** @defgroup uotghs_hstpipcfg[5]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[5]_ALLOC Pipe Memory Allocate **/
#define UOTGHS_HSTPIPCFG[5]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_hstpipcfg[6] HSTPIPCFG[6] Host Pipe Configuration Register (n = 0)
@{*/


#define UOTGHS_HSTPIPCFG[6]_INTFRQ_SHIFT		24
#define UOTGHS_HSTPIPCFG[6]_INTFRQ_MASK		0xff
/** @defgroup uotghs_hstpipcfg[6]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[6]_PEPNUM_SHIFT		16
#define UOTGHS_HSTPIPCFG[6]_PEPNUM_MASK		0x0f
/** @defgroup uotghs_hstpipcfg[6]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[6]_PTYPE_SHIFT		12
#define UOTGHS_HSTPIPCFG[6]_PTYPE_MASK		0x03
/** @defgroup uotghs_hstpipcfg[6]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[6]_AUTOSW Automatic Switch **/
#define UOTGHS_HSTPIPCFG[6]_AUTOSW		(1 << 10)

#define UOTGHS_HSTPIPCFG[6]_PTOKEN_SHIFT		8
#define UOTGHS_HSTPIPCFG[6]_PTOKEN_MASK		0x03
/** @defgroup uotghs_hstpipcfg[6]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[6]_PSIZE_SHIFT		4
#define UOTGHS_HSTPIPCFG[6]_PSIZE_MASK		0x07
/** @defgroup uotghs_hstpipcfg[6]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[6]_PBK_SHIFT		2
#define UOTGHS_HSTPIPCFG[6]_PBK_MASK		0x03
/** @defgroup uotghs_hstpipcfg[6]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[6]_ALLOC Pipe Memory Allocate **/
#define UOTGHS_HSTPIPCFG[6]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_hstpipcfg[7] HSTPIPCFG[7] Host Pipe Configuration Register (n = 0)
@{*/


#define UOTGHS_HSTPIPCFG[7]_INTFRQ_SHIFT		24
#define UOTGHS_HSTPIPCFG[7]_INTFRQ_MASK		0xff
/** @defgroup uotghs_hstpipcfg[7]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[7]_PEPNUM_SHIFT		16
#define UOTGHS_HSTPIPCFG[7]_PEPNUM_MASK		0x0f
/** @defgroup uotghs_hstpipcfg[7]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[7]_PTYPE_SHIFT		12
#define UOTGHS_HSTPIPCFG[7]_PTYPE_MASK		0x03
/** @defgroup uotghs_hstpipcfg[7]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[7]_AUTOSW Automatic Switch **/
#define UOTGHS_HSTPIPCFG[7]_AUTOSW		(1 << 10)

#define UOTGHS_HSTPIPCFG[7]_PTOKEN_SHIFT		8
#define UOTGHS_HSTPIPCFG[7]_PTOKEN_MASK		0x03
/** @defgroup uotghs_hstpipcfg[7]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[7]_PSIZE_SHIFT		4
#define UOTGHS_HSTPIPCFG[7]_PSIZE_MASK		0x07
/** @defgroup uotghs_hstpipcfg[7]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[7]_PBK_SHIFT		2
#define UOTGHS_HSTPIPCFG[7]_PBK_MASK		0x03
/** @defgroup uotghs_hstpipcfg[7]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[7]_ALLOC Pipe Memory Allocate **/
#define UOTGHS_HSTPIPCFG[7]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_hstpipcfg[8] HSTPIPCFG[8] Host Pipe Configuration Register (n = 0)
@{*/


#define UOTGHS_HSTPIPCFG[8]_INTFRQ_SHIFT		24
#define UOTGHS_HSTPIPCFG[8]_INTFRQ_MASK		0xff
/** @defgroup uotghs_hstpipcfg[8]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[8]_PEPNUM_SHIFT		16
#define UOTGHS_HSTPIPCFG[8]_PEPNUM_MASK		0x0f
/** @defgroup uotghs_hstpipcfg[8]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[8]_PTYPE_SHIFT		12
#define UOTGHS_HSTPIPCFG[8]_PTYPE_MASK		0x03
/** @defgroup uotghs_hstpipcfg[8]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[8]_AUTOSW Automatic Switch **/
#define UOTGHS_HSTPIPCFG[8]_AUTOSW		(1 << 10)

#define UOTGHS_HSTPIPCFG[8]_PTOKEN_SHIFT		8
#define UOTGHS_HSTPIPCFG[8]_PTOKEN_MASK		0x03
/** @defgroup uotghs_hstpipcfg[8]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[8]_PSIZE_SHIFT		4
#define UOTGHS_HSTPIPCFG[8]_PSIZE_MASK		0x07
/** @defgroup uotghs_hstpipcfg[8]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[8]_PBK_SHIFT		2
#define UOTGHS_HSTPIPCFG[8]_PBK_MASK		0x03
/** @defgroup uotghs_hstpipcfg[8]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[8]_ALLOC Pipe Memory Allocate **/
#define UOTGHS_HSTPIPCFG[8]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_hstpipcfg[9] HSTPIPCFG[9] Host Pipe Configuration Register (n = 0)
@{*/


#define UOTGHS_HSTPIPCFG[9]_INTFRQ_SHIFT		24
#define UOTGHS_HSTPIPCFG[9]_INTFRQ_MASK		0xff
/** @defgroup uotghs_hstpipcfg[9]_intfrq INTFRQ Pipe Interrupt Request Frequency
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[9]_PEPNUM_SHIFT		16
#define UOTGHS_HSTPIPCFG[9]_PEPNUM_MASK		0x0f
/** @defgroup uotghs_hstpipcfg[9]_pepnum PEPNUM Pipe Endpoint Number
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[9]_PTYPE_SHIFT		12
#define UOTGHS_HSTPIPCFG[9]_PTYPE_MASK		0x03
/** @defgroup uotghs_hstpipcfg[9]_ptype PTYPE Pipe Type
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[9]_AUTOSW Automatic Switch **/
#define UOTGHS_HSTPIPCFG[9]_AUTOSW		(1 << 10)

#define UOTGHS_HSTPIPCFG[9]_PTOKEN_SHIFT		8
#define UOTGHS_HSTPIPCFG[9]_PTOKEN_MASK		0x03
/** @defgroup uotghs_hstpipcfg[9]_ptoken PTOKEN Pipe Token
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[9]_PSIZE_SHIFT		4
#define UOTGHS_HSTPIPCFG[9]_PSIZE_MASK		0x07
/** @defgroup uotghs_hstpipcfg[9]_psize PSIZE Pipe Size
@{*/
/**@}*/


#define UOTGHS_HSTPIPCFG[9]_PBK_SHIFT		2
#define UOTGHS_HSTPIPCFG[9]_PBK_MASK		0x03
/** @defgroup uotghs_hstpipcfg[9]_pbk PBK Pipe Banks
@{*/
/**@}*/

/** UOTGHS_HSTPIPCFG[9]_ALLOC Pipe Memory Allocate **/
#define UOTGHS_HSTPIPCFG[9]_ALLOC		(1 << 1)

/**@}*/

/** @defgroup uotghs_hstpipisr0_intpipes HSTPIPISR0INTPIPES Host Pipe Status Register (n = 0)
@{*/


#define UOTGHS_HSTPIPISR0_INTPIPES_PBYCT_SHIFT		20
#define UOTGHS_HSTPIPISR0_INTPIPES_PBYCT_MASK		0x7ff
/** @defgroup uotghs_hstpipisr0_intpipes_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR0_INTPIPES_CFGOK Configuration OK Status **/
#define UOTGHS_HSTPIPISR0_INTPIPES_CFGOK		(1 << 18)
/** UOTGHS_HSTPIPISR0_INTPIPES_RWALL Read-write Allowed **/
#define UOTGHS_HSTPIPISR0_INTPIPES_RWALL		(1 << 16)

#define UOTGHS_HSTPIPISR0_INTPIPES_CURRBK_SHIFT		14
#define UOTGHS_HSTPIPISR0_INTPIPES_CURRBK_MASK		0x03
/** @defgroup uotghs_hstpipisr0_intpipes_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR0_INTPIPES_NBUSYBK_SHIFT		12
#define UOTGHS_HSTPIPISR0_INTPIPES_NBUSYBK_MASK		0x03
/** @defgroup uotghs_hstpipisr0_intpipes_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR0_INTPIPES_DTSEQ_SHIFT		8
#define UOTGHS_HSTPIPISR0_INTPIPES_DTSEQ_MASK		0x03
/** @defgroup uotghs_hstpipisr0_intpipes_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR0_INTPIPES_SHORTPACKETI Short Packet Interrupt **/
#define UOTGHS_HSTPIPISR0_INTPIPES_SHORTPACKETI		(1 << 7)
/** UOTGHS_HSTPIPISR0_INTPIPES_RXSTALLDI Received STALLed Interrupt **/
#define UOTGHS_HSTPIPISR0_INTPIPES_RXSTALLDI		(1 << 6)
/** UOTGHS_HSTPIPISR0_INTPIPES_OVERFI Overflow Interrupt **/
#define UOTGHS_HSTPIPISR0_INTPIPES_OVERFI		(1 << 5)
/** UOTGHS_HSTPIPISR0_INTPIPES_NAKEDI NAKed Interrupt **/
#define UOTGHS_HSTPIPISR0_INTPIPES_NAKEDI		(1 << 4)
/** UOTGHS_HSTPIPISR0_INTPIPES_PERRI Pipe Error Interrupt **/
#define UOTGHS_HSTPIPISR0_INTPIPES_PERRI		(1 << 3)
/** UOTGHS_HSTPIPISR0_INTPIPES_UNDERFI Underflow Interrupt **/
#define UOTGHS_HSTPIPISR0_INTPIPES_UNDERFI		(1 << 2)
/** UOTGHS_HSTPIPISR0_INTPIPES_TXOUTI Transmitted OUT Data Interrupt **/
#define UOTGHS_HSTPIPISR0_INTPIPES_TXOUTI		(1 << 1)
/** UOTGHS_HSTPIPISR0_INTPIPES_RXINI Received IN Data Interrupt **/
#define UOTGHS_HSTPIPISR0_INTPIPES_RXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipisr0_isopipes HSTPIPISR0ISOPIPES Host Pipe Status Register (n = 0)
@{*/


#define UOTGHS_HSTPIPISR0_ISOPIPES_PBYCT_SHIFT		20
#define UOTGHS_HSTPIPISR0_ISOPIPES_PBYCT_MASK		0x7ff
/** @defgroup uotghs_hstpipisr0_isopipes_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR0_ISOPIPES_CFGOK Configuration OK Status **/
#define UOTGHS_HSTPIPISR0_ISOPIPES_CFGOK		(1 << 18)
/** UOTGHS_HSTPIPISR0_ISOPIPES_RWALL Read-write Allowed **/
#define UOTGHS_HSTPIPISR0_ISOPIPES_RWALL		(1 << 16)

#define UOTGHS_HSTPIPISR0_ISOPIPES_CURRBK_SHIFT		14
#define UOTGHS_HSTPIPISR0_ISOPIPES_CURRBK_MASK		0x03
/** @defgroup uotghs_hstpipisr0_isopipes_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR0_ISOPIPES_NBUSYBK_SHIFT		12
#define UOTGHS_HSTPIPISR0_ISOPIPES_NBUSYBK_MASK		0x03
/** @defgroup uotghs_hstpipisr0_isopipes_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR0_ISOPIPES_DTSEQ_SHIFT		8
#define UOTGHS_HSTPIPISR0_ISOPIPES_DTSEQ_MASK		0x03
/** @defgroup uotghs_hstpipisr0_isopipes_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR0_ISOPIPES_SHORTPACKETI Short Packet Interrupt **/
#define UOTGHS_HSTPIPISR0_ISOPIPES_SHORTPACKETI		(1 << 7)
/** UOTGHS_HSTPIPISR0_ISOPIPES_CRCERRI CRC Error Interrupt **/
#define UOTGHS_HSTPIPISR0_ISOPIPES_CRCERRI		(1 << 6)
/** UOTGHS_HSTPIPISR0_ISOPIPES_OVERFI Overflow Interrupt **/
#define UOTGHS_HSTPIPISR0_ISOPIPES_OVERFI		(1 << 5)
/** UOTGHS_HSTPIPISR0_ISOPIPES_NAKEDI NAKed Interrupt **/
#define UOTGHS_HSTPIPISR0_ISOPIPES_NAKEDI		(1 << 4)
/** UOTGHS_HSTPIPISR0_ISOPIPES_PERRI Pipe Error Interrupt **/
#define UOTGHS_HSTPIPISR0_ISOPIPES_PERRI		(1 << 3)
/** UOTGHS_HSTPIPISR0_ISOPIPES_UNDERFI Underflow Interrupt **/
#define UOTGHS_HSTPIPISR0_ISOPIPES_UNDERFI		(1 << 2)
/** UOTGHS_HSTPIPISR0_ISOPIPES_TXOUTI Transmitted OUT Data Interrupt **/
#define UOTGHS_HSTPIPISR0_ISOPIPES_TXOUTI		(1 << 1)
/** UOTGHS_HSTPIPISR0_ISOPIPES_RXINI Received IN Data Interrupt **/
#define UOTGHS_HSTPIPISR0_ISOPIPES_RXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipisr[0] HSTPIPISR[0] Host Pipe Status Register (n = 0)
@{*/


#define UOTGHS_HSTPIPISR[0]_PBYCT_SHIFT		20
#define UOTGHS_HSTPIPISR[0]_PBYCT_MASK		0x7ff
/** @defgroup uotghs_hstpipisr[0]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[0]_CFGOK Configuration OK Status **/
#define UOTGHS_HSTPIPISR[0]_CFGOK		(1 << 18)
/** UOTGHS_HSTPIPISR[0]_RWALL Read-write Allowed **/
#define UOTGHS_HSTPIPISR[0]_RWALL		(1 << 16)

#define UOTGHS_HSTPIPISR[0]_CURRBK_SHIFT		14
#define UOTGHS_HSTPIPISR[0]_CURRBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[0]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[0]_NBUSYBK_SHIFT		12
#define UOTGHS_HSTPIPISR[0]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[0]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[0]_DTSEQ_SHIFT		8
#define UOTGHS_HSTPIPISR[0]_DTSEQ_MASK		0x03
/** @defgroup uotghs_hstpipisr[0]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[0]_SHORTPACKETI Short Packet Interrupt **/
#define UOTGHS_HSTPIPISR[0]_SHORTPACKETI		(1 << 7)
/** UOTGHS_HSTPIPISR[0]_RXSTALLDI Received STALLed Interrupt **/
#define UOTGHS_HSTPIPISR[0]_RXSTALLDI		(1 << 6)
/** UOTGHS_HSTPIPISR[0]_OVERFI Overflow Interrupt **/
#define UOTGHS_HSTPIPISR[0]_OVERFI		(1 << 5)
/** UOTGHS_HSTPIPISR[0]_NAKEDI NAKed Interrupt **/
#define UOTGHS_HSTPIPISR[0]_NAKEDI		(1 << 4)
/** UOTGHS_HSTPIPISR[0]_PERRI Pipe Error Interrupt **/
#define UOTGHS_HSTPIPISR[0]_PERRI		(1 << 3)
/** UOTGHS_HSTPIPISR[0]_TXSTPI Transmitted SETUP Interrupt **/
#define UOTGHS_HSTPIPISR[0]_TXSTPI		(1 << 2)
/** UOTGHS_HSTPIPISR[0]_TXOUTI Transmitted OUT Data Interrupt **/
#define UOTGHS_HSTPIPISR[0]_TXOUTI		(1 << 1)
/** UOTGHS_HSTPIPISR[0]_RXINI Received IN Data Interrupt **/
#define UOTGHS_HSTPIPISR[0]_RXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipisr[1] HSTPIPISR[1] Host Pipe Status Register (n = 0)
@{*/


#define UOTGHS_HSTPIPISR[1]_PBYCT_SHIFT		20
#define UOTGHS_HSTPIPISR[1]_PBYCT_MASK		0x7ff
/** @defgroup uotghs_hstpipisr[1]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[1]_CFGOK Configuration OK Status **/
#define UOTGHS_HSTPIPISR[1]_CFGOK		(1 << 18)
/** UOTGHS_HSTPIPISR[1]_RWALL Read-write Allowed **/
#define UOTGHS_HSTPIPISR[1]_RWALL		(1 << 16)

#define UOTGHS_HSTPIPISR[1]_CURRBK_SHIFT		14
#define UOTGHS_HSTPIPISR[1]_CURRBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[1]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[1]_NBUSYBK_SHIFT		12
#define UOTGHS_HSTPIPISR[1]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[1]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[1]_DTSEQ_SHIFT		8
#define UOTGHS_HSTPIPISR[1]_DTSEQ_MASK		0x03
/** @defgroup uotghs_hstpipisr[1]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[1]_SHORTPACKETI Short Packet Interrupt **/
#define UOTGHS_HSTPIPISR[1]_SHORTPACKETI		(1 << 7)
/** UOTGHS_HSTPIPISR[1]_RXSTALLDI Received STALLed Interrupt **/
#define UOTGHS_HSTPIPISR[1]_RXSTALLDI		(1 << 6)
/** UOTGHS_HSTPIPISR[1]_OVERFI Overflow Interrupt **/
#define UOTGHS_HSTPIPISR[1]_OVERFI		(1 << 5)
/** UOTGHS_HSTPIPISR[1]_NAKEDI NAKed Interrupt **/
#define UOTGHS_HSTPIPISR[1]_NAKEDI		(1 << 4)
/** UOTGHS_HSTPIPISR[1]_PERRI Pipe Error Interrupt **/
#define UOTGHS_HSTPIPISR[1]_PERRI		(1 << 3)
/** UOTGHS_HSTPIPISR[1]_TXSTPI Transmitted SETUP Interrupt **/
#define UOTGHS_HSTPIPISR[1]_TXSTPI		(1 << 2)
/** UOTGHS_HSTPIPISR[1]_TXOUTI Transmitted OUT Data Interrupt **/
#define UOTGHS_HSTPIPISR[1]_TXOUTI		(1 << 1)
/** UOTGHS_HSTPIPISR[1]_RXINI Received IN Data Interrupt **/
#define UOTGHS_HSTPIPISR[1]_RXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipisr[2] HSTPIPISR[2] Host Pipe Status Register (n = 0)
@{*/


#define UOTGHS_HSTPIPISR[2]_PBYCT_SHIFT		20
#define UOTGHS_HSTPIPISR[2]_PBYCT_MASK		0x7ff
/** @defgroup uotghs_hstpipisr[2]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[2]_CFGOK Configuration OK Status **/
#define UOTGHS_HSTPIPISR[2]_CFGOK		(1 << 18)
/** UOTGHS_HSTPIPISR[2]_RWALL Read-write Allowed **/
#define UOTGHS_HSTPIPISR[2]_RWALL		(1 << 16)

#define UOTGHS_HSTPIPISR[2]_CURRBK_SHIFT		14
#define UOTGHS_HSTPIPISR[2]_CURRBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[2]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[2]_NBUSYBK_SHIFT		12
#define UOTGHS_HSTPIPISR[2]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[2]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[2]_DTSEQ_SHIFT		8
#define UOTGHS_HSTPIPISR[2]_DTSEQ_MASK		0x03
/** @defgroup uotghs_hstpipisr[2]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[2]_SHORTPACKETI Short Packet Interrupt **/
#define UOTGHS_HSTPIPISR[2]_SHORTPACKETI		(1 << 7)
/** UOTGHS_HSTPIPISR[2]_RXSTALLDI Received STALLed Interrupt **/
#define UOTGHS_HSTPIPISR[2]_RXSTALLDI		(1 << 6)
/** UOTGHS_HSTPIPISR[2]_OVERFI Overflow Interrupt **/
#define UOTGHS_HSTPIPISR[2]_OVERFI		(1 << 5)
/** UOTGHS_HSTPIPISR[2]_NAKEDI NAKed Interrupt **/
#define UOTGHS_HSTPIPISR[2]_NAKEDI		(1 << 4)
/** UOTGHS_HSTPIPISR[2]_PERRI Pipe Error Interrupt **/
#define UOTGHS_HSTPIPISR[2]_PERRI		(1 << 3)
/** UOTGHS_HSTPIPISR[2]_TXSTPI Transmitted SETUP Interrupt **/
#define UOTGHS_HSTPIPISR[2]_TXSTPI		(1 << 2)
/** UOTGHS_HSTPIPISR[2]_TXOUTI Transmitted OUT Data Interrupt **/
#define UOTGHS_HSTPIPISR[2]_TXOUTI		(1 << 1)
/** UOTGHS_HSTPIPISR[2]_RXINI Received IN Data Interrupt **/
#define UOTGHS_HSTPIPISR[2]_RXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipisr[3] HSTPIPISR[3] Host Pipe Status Register (n = 0)
@{*/


#define UOTGHS_HSTPIPISR[3]_PBYCT_SHIFT		20
#define UOTGHS_HSTPIPISR[3]_PBYCT_MASK		0x7ff
/** @defgroup uotghs_hstpipisr[3]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[3]_CFGOK Configuration OK Status **/
#define UOTGHS_HSTPIPISR[3]_CFGOK		(1 << 18)
/** UOTGHS_HSTPIPISR[3]_RWALL Read-write Allowed **/
#define UOTGHS_HSTPIPISR[3]_RWALL		(1 << 16)

#define UOTGHS_HSTPIPISR[3]_CURRBK_SHIFT		14
#define UOTGHS_HSTPIPISR[3]_CURRBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[3]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[3]_NBUSYBK_SHIFT		12
#define UOTGHS_HSTPIPISR[3]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[3]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[3]_DTSEQ_SHIFT		8
#define UOTGHS_HSTPIPISR[3]_DTSEQ_MASK		0x03
/** @defgroup uotghs_hstpipisr[3]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[3]_SHORTPACKETI Short Packet Interrupt **/
#define UOTGHS_HSTPIPISR[3]_SHORTPACKETI		(1 << 7)
/** UOTGHS_HSTPIPISR[3]_RXSTALLDI Received STALLed Interrupt **/
#define UOTGHS_HSTPIPISR[3]_RXSTALLDI		(1 << 6)
/** UOTGHS_HSTPIPISR[3]_OVERFI Overflow Interrupt **/
#define UOTGHS_HSTPIPISR[3]_OVERFI		(1 << 5)
/** UOTGHS_HSTPIPISR[3]_NAKEDI NAKed Interrupt **/
#define UOTGHS_HSTPIPISR[3]_NAKEDI		(1 << 4)
/** UOTGHS_HSTPIPISR[3]_PERRI Pipe Error Interrupt **/
#define UOTGHS_HSTPIPISR[3]_PERRI		(1 << 3)
/** UOTGHS_HSTPIPISR[3]_TXSTPI Transmitted SETUP Interrupt **/
#define UOTGHS_HSTPIPISR[3]_TXSTPI		(1 << 2)
/** UOTGHS_HSTPIPISR[3]_TXOUTI Transmitted OUT Data Interrupt **/
#define UOTGHS_HSTPIPISR[3]_TXOUTI		(1 << 1)
/** UOTGHS_HSTPIPISR[3]_RXINI Received IN Data Interrupt **/
#define UOTGHS_HSTPIPISR[3]_RXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipisr[4] HSTPIPISR[4] Host Pipe Status Register (n = 0)
@{*/


#define UOTGHS_HSTPIPISR[4]_PBYCT_SHIFT		20
#define UOTGHS_HSTPIPISR[4]_PBYCT_MASK		0x7ff
/** @defgroup uotghs_hstpipisr[4]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[4]_CFGOK Configuration OK Status **/
#define UOTGHS_HSTPIPISR[4]_CFGOK		(1 << 18)
/** UOTGHS_HSTPIPISR[4]_RWALL Read-write Allowed **/
#define UOTGHS_HSTPIPISR[4]_RWALL		(1 << 16)

#define UOTGHS_HSTPIPISR[4]_CURRBK_SHIFT		14
#define UOTGHS_HSTPIPISR[4]_CURRBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[4]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[4]_NBUSYBK_SHIFT		12
#define UOTGHS_HSTPIPISR[4]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[4]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[4]_DTSEQ_SHIFT		8
#define UOTGHS_HSTPIPISR[4]_DTSEQ_MASK		0x03
/** @defgroup uotghs_hstpipisr[4]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[4]_SHORTPACKETI Short Packet Interrupt **/
#define UOTGHS_HSTPIPISR[4]_SHORTPACKETI		(1 << 7)
/** UOTGHS_HSTPIPISR[4]_RXSTALLDI Received STALLed Interrupt **/
#define UOTGHS_HSTPIPISR[4]_RXSTALLDI		(1 << 6)
/** UOTGHS_HSTPIPISR[4]_OVERFI Overflow Interrupt **/
#define UOTGHS_HSTPIPISR[4]_OVERFI		(1 << 5)
/** UOTGHS_HSTPIPISR[4]_NAKEDI NAKed Interrupt **/
#define UOTGHS_HSTPIPISR[4]_NAKEDI		(1 << 4)
/** UOTGHS_HSTPIPISR[4]_PERRI Pipe Error Interrupt **/
#define UOTGHS_HSTPIPISR[4]_PERRI		(1 << 3)
/** UOTGHS_HSTPIPISR[4]_TXSTPI Transmitted SETUP Interrupt **/
#define UOTGHS_HSTPIPISR[4]_TXSTPI		(1 << 2)
/** UOTGHS_HSTPIPISR[4]_TXOUTI Transmitted OUT Data Interrupt **/
#define UOTGHS_HSTPIPISR[4]_TXOUTI		(1 << 1)
/** UOTGHS_HSTPIPISR[4]_RXINI Received IN Data Interrupt **/
#define UOTGHS_HSTPIPISR[4]_RXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipisr[5] HSTPIPISR[5] Host Pipe Status Register (n = 0)
@{*/


#define UOTGHS_HSTPIPISR[5]_PBYCT_SHIFT		20
#define UOTGHS_HSTPIPISR[5]_PBYCT_MASK		0x7ff
/** @defgroup uotghs_hstpipisr[5]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[5]_CFGOK Configuration OK Status **/
#define UOTGHS_HSTPIPISR[5]_CFGOK		(1 << 18)
/** UOTGHS_HSTPIPISR[5]_RWALL Read-write Allowed **/
#define UOTGHS_HSTPIPISR[5]_RWALL		(1 << 16)

#define UOTGHS_HSTPIPISR[5]_CURRBK_SHIFT		14
#define UOTGHS_HSTPIPISR[5]_CURRBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[5]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[5]_NBUSYBK_SHIFT		12
#define UOTGHS_HSTPIPISR[5]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[5]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[5]_DTSEQ_SHIFT		8
#define UOTGHS_HSTPIPISR[5]_DTSEQ_MASK		0x03
/** @defgroup uotghs_hstpipisr[5]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[5]_SHORTPACKETI Short Packet Interrupt **/
#define UOTGHS_HSTPIPISR[5]_SHORTPACKETI		(1 << 7)
/** UOTGHS_HSTPIPISR[5]_RXSTALLDI Received STALLed Interrupt **/
#define UOTGHS_HSTPIPISR[5]_RXSTALLDI		(1 << 6)
/** UOTGHS_HSTPIPISR[5]_OVERFI Overflow Interrupt **/
#define UOTGHS_HSTPIPISR[5]_OVERFI		(1 << 5)
/** UOTGHS_HSTPIPISR[5]_NAKEDI NAKed Interrupt **/
#define UOTGHS_HSTPIPISR[5]_NAKEDI		(1 << 4)
/** UOTGHS_HSTPIPISR[5]_PERRI Pipe Error Interrupt **/
#define UOTGHS_HSTPIPISR[5]_PERRI		(1 << 3)
/** UOTGHS_HSTPIPISR[5]_TXSTPI Transmitted SETUP Interrupt **/
#define UOTGHS_HSTPIPISR[5]_TXSTPI		(1 << 2)
/** UOTGHS_HSTPIPISR[5]_TXOUTI Transmitted OUT Data Interrupt **/
#define UOTGHS_HSTPIPISR[5]_TXOUTI		(1 << 1)
/** UOTGHS_HSTPIPISR[5]_RXINI Received IN Data Interrupt **/
#define UOTGHS_HSTPIPISR[5]_RXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipisr[6] HSTPIPISR[6] Host Pipe Status Register (n = 0)
@{*/


#define UOTGHS_HSTPIPISR[6]_PBYCT_SHIFT		20
#define UOTGHS_HSTPIPISR[6]_PBYCT_MASK		0x7ff
/** @defgroup uotghs_hstpipisr[6]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[6]_CFGOK Configuration OK Status **/
#define UOTGHS_HSTPIPISR[6]_CFGOK		(1 << 18)
/** UOTGHS_HSTPIPISR[6]_RWALL Read-write Allowed **/
#define UOTGHS_HSTPIPISR[6]_RWALL		(1 << 16)

#define UOTGHS_HSTPIPISR[6]_CURRBK_SHIFT		14
#define UOTGHS_HSTPIPISR[6]_CURRBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[6]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[6]_NBUSYBK_SHIFT		12
#define UOTGHS_HSTPIPISR[6]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[6]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[6]_DTSEQ_SHIFT		8
#define UOTGHS_HSTPIPISR[6]_DTSEQ_MASK		0x03
/** @defgroup uotghs_hstpipisr[6]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[6]_SHORTPACKETI Short Packet Interrupt **/
#define UOTGHS_HSTPIPISR[6]_SHORTPACKETI		(1 << 7)
/** UOTGHS_HSTPIPISR[6]_RXSTALLDI Received STALLed Interrupt **/
#define UOTGHS_HSTPIPISR[6]_RXSTALLDI		(1 << 6)
/** UOTGHS_HSTPIPISR[6]_OVERFI Overflow Interrupt **/
#define UOTGHS_HSTPIPISR[6]_OVERFI		(1 << 5)
/** UOTGHS_HSTPIPISR[6]_NAKEDI NAKed Interrupt **/
#define UOTGHS_HSTPIPISR[6]_NAKEDI		(1 << 4)
/** UOTGHS_HSTPIPISR[6]_PERRI Pipe Error Interrupt **/
#define UOTGHS_HSTPIPISR[6]_PERRI		(1 << 3)
/** UOTGHS_HSTPIPISR[6]_TXSTPI Transmitted SETUP Interrupt **/
#define UOTGHS_HSTPIPISR[6]_TXSTPI		(1 << 2)
/** UOTGHS_HSTPIPISR[6]_TXOUTI Transmitted OUT Data Interrupt **/
#define UOTGHS_HSTPIPISR[6]_TXOUTI		(1 << 1)
/** UOTGHS_HSTPIPISR[6]_RXINI Received IN Data Interrupt **/
#define UOTGHS_HSTPIPISR[6]_RXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipisr[7] HSTPIPISR[7] Host Pipe Status Register (n = 0)
@{*/


#define UOTGHS_HSTPIPISR[7]_PBYCT_SHIFT		20
#define UOTGHS_HSTPIPISR[7]_PBYCT_MASK		0x7ff
/** @defgroup uotghs_hstpipisr[7]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[7]_CFGOK Configuration OK Status **/
#define UOTGHS_HSTPIPISR[7]_CFGOK		(1 << 18)
/** UOTGHS_HSTPIPISR[7]_RWALL Read-write Allowed **/
#define UOTGHS_HSTPIPISR[7]_RWALL		(1 << 16)

#define UOTGHS_HSTPIPISR[7]_CURRBK_SHIFT		14
#define UOTGHS_HSTPIPISR[7]_CURRBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[7]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[7]_NBUSYBK_SHIFT		12
#define UOTGHS_HSTPIPISR[7]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[7]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[7]_DTSEQ_SHIFT		8
#define UOTGHS_HSTPIPISR[7]_DTSEQ_MASK		0x03
/** @defgroup uotghs_hstpipisr[7]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[7]_SHORTPACKETI Short Packet Interrupt **/
#define UOTGHS_HSTPIPISR[7]_SHORTPACKETI		(1 << 7)
/** UOTGHS_HSTPIPISR[7]_RXSTALLDI Received STALLed Interrupt **/
#define UOTGHS_HSTPIPISR[7]_RXSTALLDI		(1 << 6)
/** UOTGHS_HSTPIPISR[7]_OVERFI Overflow Interrupt **/
#define UOTGHS_HSTPIPISR[7]_OVERFI		(1 << 5)
/** UOTGHS_HSTPIPISR[7]_NAKEDI NAKed Interrupt **/
#define UOTGHS_HSTPIPISR[7]_NAKEDI		(1 << 4)
/** UOTGHS_HSTPIPISR[7]_PERRI Pipe Error Interrupt **/
#define UOTGHS_HSTPIPISR[7]_PERRI		(1 << 3)
/** UOTGHS_HSTPIPISR[7]_TXSTPI Transmitted SETUP Interrupt **/
#define UOTGHS_HSTPIPISR[7]_TXSTPI		(1 << 2)
/** UOTGHS_HSTPIPISR[7]_TXOUTI Transmitted OUT Data Interrupt **/
#define UOTGHS_HSTPIPISR[7]_TXOUTI		(1 << 1)
/** UOTGHS_HSTPIPISR[7]_RXINI Received IN Data Interrupt **/
#define UOTGHS_HSTPIPISR[7]_RXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipisr[8] HSTPIPISR[8] Host Pipe Status Register (n = 0)
@{*/


#define UOTGHS_HSTPIPISR[8]_PBYCT_SHIFT		20
#define UOTGHS_HSTPIPISR[8]_PBYCT_MASK		0x7ff
/** @defgroup uotghs_hstpipisr[8]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[8]_CFGOK Configuration OK Status **/
#define UOTGHS_HSTPIPISR[8]_CFGOK		(1 << 18)
/** UOTGHS_HSTPIPISR[8]_RWALL Read-write Allowed **/
#define UOTGHS_HSTPIPISR[8]_RWALL		(1 << 16)

#define UOTGHS_HSTPIPISR[8]_CURRBK_SHIFT		14
#define UOTGHS_HSTPIPISR[8]_CURRBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[8]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[8]_NBUSYBK_SHIFT		12
#define UOTGHS_HSTPIPISR[8]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[8]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[8]_DTSEQ_SHIFT		8
#define UOTGHS_HSTPIPISR[8]_DTSEQ_MASK		0x03
/** @defgroup uotghs_hstpipisr[8]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[8]_SHORTPACKETI Short Packet Interrupt **/
#define UOTGHS_HSTPIPISR[8]_SHORTPACKETI		(1 << 7)
/** UOTGHS_HSTPIPISR[8]_RXSTALLDI Received STALLed Interrupt **/
#define UOTGHS_HSTPIPISR[8]_RXSTALLDI		(1 << 6)
/** UOTGHS_HSTPIPISR[8]_OVERFI Overflow Interrupt **/
#define UOTGHS_HSTPIPISR[8]_OVERFI		(1 << 5)
/** UOTGHS_HSTPIPISR[8]_NAKEDI NAKed Interrupt **/
#define UOTGHS_HSTPIPISR[8]_NAKEDI		(1 << 4)
/** UOTGHS_HSTPIPISR[8]_PERRI Pipe Error Interrupt **/
#define UOTGHS_HSTPIPISR[8]_PERRI		(1 << 3)
/** UOTGHS_HSTPIPISR[8]_TXSTPI Transmitted SETUP Interrupt **/
#define UOTGHS_HSTPIPISR[8]_TXSTPI		(1 << 2)
/** UOTGHS_HSTPIPISR[8]_TXOUTI Transmitted OUT Data Interrupt **/
#define UOTGHS_HSTPIPISR[8]_TXOUTI		(1 << 1)
/** UOTGHS_HSTPIPISR[8]_RXINI Received IN Data Interrupt **/
#define UOTGHS_HSTPIPISR[8]_RXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipisr[9] HSTPIPISR[9] Host Pipe Status Register (n = 0)
@{*/


#define UOTGHS_HSTPIPISR[9]_PBYCT_SHIFT		20
#define UOTGHS_HSTPIPISR[9]_PBYCT_MASK		0x7ff
/** @defgroup uotghs_hstpipisr[9]_pbyct PBYCT Pipe Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[9]_CFGOK Configuration OK Status **/
#define UOTGHS_HSTPIPISR[9]_CFGOK		(1 << 18)
/** UOTGHS_HSTPIPISR[9]_RWALL Read-write Allowed **/
#define UOTGHS_HSTPIPISR[9]_RWALL		(1 << 16)

#define UOTGHS_HSTPIPISR[9]_CURRBK_SHIFT		14
#define UOTGHS_HSTPIPISR[9]_CURRBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[9]_currbk CURRBK Current Bank
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[9]_NBUSYBK_SHIFT		12
#define UOTGHS_HSTPIPISR[9]_NBUSYBK_MASK		0x03
/** @defgroup uotghs_hstpipisr[9]_nbusybk NBUSYBK Number of Busy Banks
@{*/
/**@}*/


#define UOTGHS_HSTPIPISR[9]_DTSEQ_SHIFT		8
#define UOTGHS_HSTPIPISR[9]_DTSEQ_MASK		0x03
/** @defgroup uotghs_hstpipisr[9]_dtseq DTSEQ Data Toggle Sequence
@{*/
/**@}*/

/** UOTGHS_HSTPIPISR[9]_SHORTPACKETI Short Packet Interrupt **/
#define UOTGHS_HSTPIPISR[9]_SHORTPACKETI		(1 << 7)
/** UOTGHS_HSTPIPISR[9]_RXSTALLDI Received STALLed Interrupt **/
#define UOTGHS_HSTPIPISR[9]_RXSTALLDI		(1 << 6)
/** UOTGHS_HSTPIPISR[9]_OVERFI Overflow Interrupt **/
#define UOTGHS_HSTPIPISR[9]_OVERFI		(1 << 5)
/** UOTGHS_HSTPIPISR[9]_NAKEDI NAKed Interrupt **/
#define UOTGHS_HSTPIPISR[9]_NAKEDI		(1 << 4)
/** UOTGHS_HSTPIPISR[9]_PERRI Pipe Error Interrupt **/
#define UOTGHS_HSTPIPISR[9]_PERRI		(1 << 3)
/** UOTGHS_HSTPIPISR[9]_TXSTPI Transmitted SETUP Interrupt **/
#define UOTGHS_HSTPIPISR[9]_TXSTPI		(1 << 2)
/** UOTGHS_HSTPIPISR[9]_TXOUTI Transmitted OUT Data Interrupt **/
#define UOTGHS_HSTPIPISR[9]_TXOUTI		(1 << 1)
/** UOTGHS_HSTPIPISR[9]_RXINI Received IN Data Interrupt **/
#define UOTGHS_HSTPIPISR[9]_RXINI		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipicr0_intpipes HSTPIPICR0INTPIPES Host Pipe Clear Register (n = 0)
@{*/

/** UOTGHS_HSTPIPICR0_INTPIPES_SHORTPACKETIC Short Packet Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_INTPIPES_SHORTPACKETIC		(1 << 7)
/** UOTGHS_HSTPIPICR0_INTPIPES_RXSTALLDIC Received STALLed Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_INTPIPES_RXSTALLDIC		(1 << 6)
/** UOTGHS_HSTPIPICR0_INTPIPES_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_INTPIPES_OVERFIC		(1 << 5)
/** UOTGHS_HSTPIPICR0_INTPIPES_NAKEDIC NAKed Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_INTPIPES_NAKEDIC		(1 << 4)
/** UOTGHS_HSTPIPICR0_INTPIPES_UNDERFIC Underflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_INTPIPES_UNDERFIC		(1 << 2)
/** UOTGHS_HSTPIPICR0_INTPIPES_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_INTPIPES_TXOUTIC		(1 << 1)
/** UOTGHS_HSTPIPICR0_INTPIPES_RXINIC Received IN Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_INTPIPES_RXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipicr0_isopipes HSTPIPICR0ISOPIPES Host Pipe Clear Register (n = 0)
@{*/

/** UOTGHS_HSTPIPICR0_ISOPIPES_SHORTPACKETIC Short Packet Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_ISOPIPES_SHORTPACKETIC		(1 << 7)
/** UOTGHS_HSTPIPICR0_ISOPIPES_CRCERRIC CRC Error Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_ISOPIPES_CRCERRIC		(1 << 6)
/** UOTGHS_HSTPIPICR0_ISOPIPES_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_ISOPIPES_OVERFIC		(1 << 5)
/** UOTGHS_HSTPIPICR0_ISOPIPES_NAKEDIC NAKed Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_ISOPIPES_NAKEDIC		(1 << 4)
/** UOTGHS_HSTPIPICR0_ISOPIPES_UNDERFIC Underflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_ISOPIPES_UNDERFIC		(1 << 2)
/** UOTGHS_HSTPIPICR0_ISOPIPES_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_ISOPIPES_TXOUTIC		(1 << 1)
/** UOTGHS_HSTPIPICR0_ISOPIPES_RXINIC Received IN Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR0_ISOPIPES_RXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipicr[0] HSTPIPICR[0] Host Pipe Clear Register (n = 0)
@{*/

/** UOTGHS_HSTPIPICR[0]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define UOTGHS_HSTPIPICR[0]_SHORTPACKETIC		(1 << 7)
/** UOTGHS_HSTPIPICR[0]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[0]_RXSTALLDIC		(1 << 6)
/** UOTGHS_HSTPIPICR[0]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR[0]_OVERFIC		(1 << 5)
/** UOTGHS_HSTPIPICR[0]_NAKEDIC NAKed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[0]_NAKEDIC		(1 << 4)
/** UOTGHS_HSTPIPICR[0]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define UOTGHS_HSTPIPICR[0]_TXSTPIC		(1 << 2)
/** UOTGHS_HSTPIPICR[0]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[0]_TXOUTIC		(1 << 1)
/** UOTGHS_HSTPIPICR[0]_RXINIC Received IN Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[0]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipicr[1] HSTPIPICR[1] Host Pipe Clear Register (n = 0)
@{*/

/** UOTGHS_HSTPIPICR[1]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define UOTGHS_HSTPIPICR[1]_SHORTPACKETIC		(1 << 7)
/** UOTGHS_HSTPIPICR[1]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[1]_RXSTALLDIC		(1 << 6)
/** UOTGHS_HSTPIPICR[1]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR[1]_OVERFIC		(1 << 5)
/** UOTGHS_HSTPIPICR[1]_NAKEDIC NAKed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[1]_NAKEDIC		(1 << 4)
/** UOTGHS_HSTPIPICR[1]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define UOTGHS_HSTPIPICR[1]_TXSTPIC		(1 << 2)
/** UOTGHS_HSTPIPICR[1]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[1]_TXOUTIC		(1 << 1)
/** UOTGHS_HSTPIPICR[1]_RXINIC Received IN Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[1]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipicr[2] HSTPIPICR[2] Host Pipe Clear Register (n = 0)
@{*/

/** UOTGHS_HSTPIPICR[2]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define UOTGHS_HSTPIPICR[2]_SHORTPACKETIC		(1 << 7)
/** UOTGHS_HSTPIPICR[2]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[2]_RXSTALLDIC		(1 << 6)
/** UOTGHS_HSTPIPICR[2]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR[2]_OVERFIC		(1 << 5)
/** UOTGHS_HSTPIPICR[2]_NAKEDIC NAKed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[2]_NAKEDIC		(1 << 4)
/** UOTGHS_HSTPIPICR[2]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define UOTGHS_HSTPIPICR[2]_TXSTPIC		(1 << 2)
/** UOTGHS_HSTPIPICR[2]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[2]_TXOUTIC		(1 << 1)
/** UOTGHS_HSTPIPICR[2]_RXINIC Received IN Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[2]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipicr[3] HSTPIPICR[3] Host Pipe Clear Register (n = 0)
@{*/

/** UOTGHS_HSTPIPICR[3]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define UOTGHS_HSTPIPICR[3]_SHORTPACKETIC		(1 << 7)
/** UOTGHS_HSTPIPICR[3]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[3]_RXSTALLDIC		(1 << 6)
/** UOTGHS_HSTPIPICR[3]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR[3]_OVERFIC		(1 << 5)
/** UOTGHS_HSTPIPICR[3]_NAKEDIC NAKed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[3]_NAKEDIC		(1 << 4)
/** UOTGHS_HSTPIPICR[3]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define UOTGHS_HSTPIPICR[3]_TXSTPIC		(1 << 2)
/** UOTGHS_HSTPIPICR[3]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[3]_TXOUTIC		(1 << 1)
/** UOTGHS_HSTPIPICR[3]_RXINIC Received IN Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[3]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipicr[4] HSTPIPICR[4] Host Pipe Clear Register (n = 0)
@{*/

/** UOTGHS_HSTPIPICR[4]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define UOTGHS_HSTPIPICR[4]_SHORTPACKETIC		(1 << 7)
/** UOTGHS_HSTPIPICR[4]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[4]_RXSTALLDIC		(1 << 6)
/** UOTGHS_HSTPIPICR[4]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR[4]_OVERFIC		(1 << 5)
/** UOTGHS_HSTPIPICR[4]_NAKEDIC NAKed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[4]_NAKEDIC		(1 << 4)
/** UOTGHS_HSTPIPICR[4]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define UOTGHS_HSTPIPICR[4]_TXSTPIC		(1 << 2)
/** UOTGHS_HSTPIPICR[4]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[4]_TXOUTIC		(1 << 1)
/** UOTGHS_HSTPIPICR[4]_RXINIC Received IN Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[4]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipicr[5] HSTPIPICR[5] Host Pipe Clear Register (n = 0)
@{*/

/** UOTGHS_HSTPIPICR[5]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define UOTGHS_HSTPIPICR[5]_SHORTPACKETIC		(1 << 7)
/** UOTGHS_HSTPIPICR[5]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[5]_RXSTALLDIC		(1 << 6)
/** UOTGHS_HSTPIPICR[5]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR[5]_OVERFIC		(1 << 5)
/** UOTGHS_HSTPIPICR[5]_NAKEDIC NAKed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[5]_NAKEDIC		(1 << 4)
/** UOTGHS_HSTPIPICR[5]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define UOTGHS_HSTPIPICR[5]_TXSTPIC		(1 << 2)
/** UOTGHS_HSTPIPICR[5]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[5]_TXOUTIC		(1 << 1)
/** UOTGHS_HSTPIPICR[5]_RXINIC Received IN Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[5]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipicr[6] HSTPIPICR[6] Host Pipe Clear Register (n = 0)
@{*/

/** UOTGHS_HSTPIPICR[6]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define UOTGHS_HSTPIPICR[6]_SHORTPACKETIC		(1 << 7)
/** UOTGHS_HSTPIPICR[6]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[6]_RXSTALLDIC		(1 << 6)
/** UOTGHS_HSTPIPICR[6]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR[6]_OVERFIC		(1 << 5)
/** UOTGHS_HSTPIPICR[6]_NAKEDIC NAKed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[6]_NAKEDIC		(1 << 4)
/** UOTGHS_HSTPIPICR[6]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define UOTGHS_HSTPIPICR[6]_TXSTPIC		(1 << 2)
/** UOTGHS_HSTPIPICR[6]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[6]_TXOUTIC		(1 << 1)
/** UOTGHS_HSTPIPICR[6]_RXINIC Received IN Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[6]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipicr[7] HSTPIPICR[7] Host Pipe Clear Register (n = 0)
@{*/

/** UOTGHS_HSTPIPICR[7]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define UOTGHS_HSTPIPICR[7]_SHORTPACKETIC		(1 << 7)
/** UOTGHS_HSTPIPICR[7]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[7]_RXSTALLDIC		(1 << 6)
/** UOTGHS_HSTPIPICR[7]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR[7]_OVERFIC		(1 << 5)
/** UOTGHS_HSTPIPICR[7]_NAKEDIC NAKed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[7]_NAKEDIC		(1 << 4)
/** UOTGHS_HSTPIPICR[7]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define UOTGHS_HSTPIPICR[7]_TXSTPIC		(1 << 2)
/** UOTGHS_HSTPIPICR[7]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[7]_TXOUTIC		(1 << 1)
/** UOTGHS_HSTPIPICR[7]_RXINIC Received IN Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[7]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipicr[8] HSTPIPICR[8] Host Pipe Clear Register (n = 0)
@{*/

/** UOTGHS_HSTPIPICR[8]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define UOTGHS_HSTPIPICR[8]_SHORTPACKETIC		(1 << 7)
/** UOTGHS_HSTPIPICR[8]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[8]_RXSTALLDIC		(1 << 6)
/** UOTGHS_HSTPIPICR[8]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR[8]_OVERFIC		(1 << 5)
/** UOTGHS_HSTPIPICR[8]_NAKEDIC NAKed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[8]_NAKEDIC		(1 << 4)
/** UOTGHS_HSTPIPICR[8]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define UOTGHS_HSTPIPICR[8]_TXSTPIC		(1 << 2)
/** UOTGHS_HSTPIPICR[8]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[8]_TXOUTIC		(1 << 1)
/** UOTGHS_HSTPIPICR[8]_RXINIC Received IN Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[8]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipicr[9] HSTPIPICR[9] Host Pipe Clear Register (n = 0)
@{*/

/** UOTGHS_HSTPIPICR[9]_SHORTPACKETIC Short Packet Interrupt Clear **/
#define UOTGHS_HSTPIPICR[9]_SHORTPACKETIC		(1 << 7)
/** UOTGHS_HSTPIPICR[9]_RXSTALLDIC Received STALLed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[9]_RXSTALLDIC		(1 << 6)
/** UOTGHS_HSTPIPICR[9]_OVERFIC Overflow Interrupt Clear **/
#define UOTGHS_HSTPIPICR[9]_OVERFIC		(1 << 5)
/** UOTGHS_HSTPIPICR[9]_NAKEDIC NAKed Interrupt Clear **/
#define UOTGHS_HSTPIPICR[9]_NAKEDIC		(1 << 4)
/** UOTGHS_HSTPIPICR[9]_TXSTPIC Transmitted SETUP Interrupt Clear **/
#define UOTGHS_HSTPIPICR[9]_TXSTPIC		(1 << 2)
/** UOTGHS_HSTPIPICR[9]_TXOUTIC Transmitted OUT Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[9]_TXOUTIC		(1 << 1)
/** UOTGHS_HSTPIPICR[9]_RXINIC Received IN Data Interrupt Clear **/
#define UOTGHS_HSTPIPICR[9]_RXINIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipifr0_intpipes HSTPIPIFR0INTPIPES Host Pipe Set Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIFR0_INTPIPES_NBUSYBKS Number of Busy Banks Set **/
#define UOTGHS_HSTPIPIFR0_INTPIPES_NBUSYBKS		(1 << 12)
/** UOTGHS_HSTPIPIFR0_INTPIPES_SHORTPACKETIS Short Packet Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_INTPIPES_SHORTPACKETIS		(1 << 7)
/** UOTGHS_HSTPIPIFR0_INTPIPES_RXSTALLDIS Received STALLed Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_INTPIPES_RXSTALLDIS		(1 << 6)
/** UOTGHS_HSTPIPIFR0_INTPIPES_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_INTPIPES_OVERFIS		(1 << 5)
/** UOTGHS_HSTPIPIFR0_INTPIPES_NAKEDIS NAKed Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_INTPIPES_NAKEDIS		(1 << 4)
/** UOTGHS_HSTPIPIFR0_INTPIPES_PERRIS Pipe Error Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_INTPIPES_PERRIS		(1 << 3)
/** UOTGHS_HSTPIPIFR0_INTPIPES_UNDERFIS Underflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_INTPIPES_UNDERFIS		(1 << 2)
/** UOTGHS_HSTPIPIFR0_INTPIPES_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_INTPIPES_TXOUTIS		(1 << 1)
/** UOTGHS_HSTPIPIFR0_INTPIPES_RXINIS Received IN Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_INTPIPES_RXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipifr0_isopipes HSTPIPIFR0ISOPIPES Host Pipe Set Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIFR0_ISOPIPES_NBUSYBKS Number of Busy Banks Set **/
#define UOTGHS_HSTPIPIFR0_ISOPIPES_NBUSYBKS		(1 << 12)
/** UOTGHS_HSTPIPIFR0_ISOPIPES_SHORTPACKETIS Short Packet Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_ISOPIPES_SHORTPACKETIS		(1 << 7)
/** UOTGHS_HSTPIPIFR0_ISOPIPES_CRCERRIS CRC Error Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_ISOPIPES_CRCERRIS		(1 << 6)
/** UOTGHS_HSTPIPIFR0_ISOPIPES_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_ISOPIPES_OVERFIS		(1 << 5)
/** UOTGHS_HSTPIPIFR0_ISOPIPES_NAKEDIS NAKed Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_ISOPIPES_NAKEDIS		(1 << 4)
/** UOTGHS_HSTPIPIFR0_ISOPIPES_PERRIS Pipe Error Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_ISOPIPES_PERRIS		(1 << 3)
/** UOTGHS_HSTPIPIFR0_ISOPIPES_UNDERFIS Underflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_ISOPIPES_UNDERFIS		(1 << 2)
/** UOTGHS_HSTPIPIFR0_ISOPIPES_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_ISOPIPES_TXOUTIS		(1 << 1)
/** UOTGHS_HSTPIPIFR0_ISOPIPES_RXINIS Received IN Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR0_ISOPIPES_RXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipifr[0] HSTPIPIFR[0] Host Pipe Set Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIFR[0]_NBUSYBKS Number of Busy Banks Set **/
#define UOTGHS_HSTPIPIFR[0]_NBUSYBKS		(1 << 12)
/** UOTGHS_HSTPIPIFR[0]_SHORTPACKETIS Short Packet Interrupt Set **/
#define UOTGHS_HSTPIPIFR[0]_SHORTPACKETIS		(1 << 7)
/** UOTGHS_HSTPIPIFR[0]_RXSTALLDIS Received STALLed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[0]_RXSTALLDIS		(1 << 6)
/** UOTGHS_HSTPIPIFR[0]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR[0]_OVERFIS		(1 << 5)
/** UOTGHS_HSTPIPIFR[0]_NAKEDIS NAKed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[0]_NAKEDIS		(1 << 4)
/** UOTGHS_HSTPIPIFR[0]_PERRIS Pipe Error Interrupt Set **/
#define UOTGHS_HSTPIPIFR[0]_PERRIS		(1 << 3)
/** UOTGHS_HSTPIPIFR[0]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define UOTGHS_HSTPIPIFR[0]_TXSTPIS		(1 << 2)
/** UOTGHS_HSTPIPIFR[0]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[0]_TXOUTIS		(1 << 1)
/** UOTGHS_HSTPIPIFR[0]_RXINIS Received IN Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[0]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipifr[1] HSTPIPIFR[1] Host Pipe Set Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIFR[1]_NBUSYBKS Number of Busy Banks Set **/
#define UOTGHS_HSTPIPIFR[1]_NBUSYBKS		(1 << 12)
/** UOTGHS_HSTPIPIFR[1]_SHORTPACKETIS Short Packet Interrupt Set **/
#define UOTGHS_HSTPIPIFR[1]_SHORTPACKETIS		(1 << 7)
/** UOTGHS_HSTPIPIFR[1]_RXSTALLDIS Received STALLed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[1]_RXSTALLDIS		(1 << 6)
/** UOTGHS_HSTPIPIFR[1]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR[1]_OVERFIS		(1 << 5)
/** UOTGHS_HSTPIPIFR[1]_NAKEDIS NAKed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[1]_NAKEDIS		(1 << 4)
/** UOTGHS_HSTPIPIFR[1]_PERRIS Pipe Error Interrupt Set **/
#define UOTGHS_HSTPIPIFR[1]_PERRIS		(1 << 3)
/** UOTGHS_HSTPIPIFR[1]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define UOTGHS_HSTPIPIFR[1]_TXSTPIS		(1 << 2)
/** UOTGHS_HSTPIPIFR[1]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[1]_TXOUTIS		(1 << 1)
/** UOTGHS_HSTPIPIFR[1]_RXINIS Received IN Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[1]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipifr[2] HSTPIPIFR[2] Host Pipe Set Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIFR[2]_NBUSYBKS Number of Busy Banks Set **/
#define UOTGHS_HSTPIPIFR[2]_NBUSYBKS		(1 << 12)
/** UOTGHS_HSTPIPIFR[2]_SHORTPACKETIS Short Packet Interrupt Set **/
#define UOTGHS_HSTPIPIFR[2]_SHORTPACKETIS		(1 << 7)
/** UOTGHS_HSTPIPIFR[2]_RXSTALLDIS Received STALLed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[2]_RXSTALLDIS		(1 << 6)
/** UOTGHS_HSTPIPIFR[2]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR[2]_OVERFIS		(1 << 5)
/** UOTGHS_HSTPIPIFR[2]_NAKEDIS NAKed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[2]_NAKEDIS		(1 << 4)
/** UOTGHS_HSTPIPIFR[2]_PERRIS Pipe Error Interrupt Set **/
#define UOTGHS_HSTPIPIFR[2]_PERRIS		(1 << 3)
/** UOTGHS_HSTPIPIFR[2]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define UOTGHS_HSTPIPIFR[2]_TXSTPIS		(1 << 2)
/** UOTGHS_HSTPIPIFR[2]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[2]_TXOUTIS		(1 << 1)
/** UOTGHS_HSTPIPIFR[2]_RXINIS Received IN Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[2]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipifr[3] HSTPIPIFR[3] Host Pipe Set Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIFR[3]_NBUSYBKS Number of Busy Banks Set **/
#define UOTGHS_HSTPIPIFR[3]_NBUSYBKS		(1 << 12)
/** UOTGHS_HSTPIPIFR[3]_SHORTPACKETIS Short Packet Interrupt Set **/
#define UOTGHS_HSTPIPIFR[3]_SHORTPACKETIS		(1 << 7)
/** UOTGHS_HSTPIPIFR[3]_RXSTALLDIS Received STALLed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[3]_RXSTALLDIS		(1 << 6)
/** UOTGHS_HSTPIPIFR[3]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR[3]_OVERFIS		(1 << 5)
/** UOTGHS_HSTPIPIFR[3]_NAKEDIS NAKed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[3]_NAKEDIS		(1 << 4)
/** UOTGHS_HSTPIPIFR[3]_PERRIS Pipe Error Interrupt Set **/
#define UOTGHS_HSTPIPIFR[3]_PERRIS		(1 << 3)
/** UOTGHS_HSTPIPIFR[3]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define UOTGHS_HSTPIPIFR[3]_TXSTPIS		(1 << 2)
/** UOTGHS_HSTPIPIFR[3]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[3]_TXOUTIS		(1 << 1)
/** UOTGHS_HSTPIPIFR[3]_RXINIS Received IN Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[3]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipifr[4] HSTPIPIFR[4] Host Pipe Set Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIFR[4]_NBUSYBKS Number of Busy Banks Set **/
#define UOTGHS_HSTPIPIFR[4]_NBUSYBKS		(1 << 12)
/** UOTGHS_HSTPIPIFR[4]_SHORTPACKETIS Short Packet Interrupt Set **/
#define UOTGHS_HSTPIPIFR[4]_SHORTPACKETIS		(1 << 7)
/** UOTGHS_HSTPIPIFR[4]_RXSTALLDIS Received STALLed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[4]_RXSTALLDIS		(1 << 6)
/** UOTGHS_HSTPIPIFR[4]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR[4]_OVERFIS		(1 << 5)
/** UOTGHS_HSTPIPIFR[4]_NAKEDIS NAKed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[4]_NAKEDIS		(1 << 4)
/** UOTGHS_HSTPIPIFR[4]_PERRIS Pipe Error Interrupt Set **/
#define UOTGHS_HSTPIPIFR[4]_PERRIS		(1 << 3)
/** UOTGHS_HSTPIPIFR[4]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define UOTGHS_HSTPIPIFR[4]_TXSTPIS		(1 << 2)
/** UOTGHS_HSTPIPIFR[4]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[4]_TXOUTIS		(1 << 1)
/** UOTGHS_HSTPIPIFR[4]_RXINIS Received IN Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[4]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipifr[5] HSTPIPIFR[5] Host Pipe Set Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIFR[5]_NBUSYBKS Number of Busy Banks Set **/
#define UOTGHS_HSTPIPIFR[5]_NBUSYBKS		(1 << 12)
/** UOTGHS_HSTPIPIFR[5]_SHORTPACKETIS Short Packet Interrupt Set **/
#define UOTGHS_HSTPIPIFR[5]_SHORTPACKETIS		(1 << 7)
/** UOTGHS_HSTPIPIFR[5]_RXSTALLDIS Received STALLed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[5]_RXSTALLDIS		(1 << 6)
/** UOTGHS_HSTPIPIFR[5]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR[5]_OVERFIS		(1 << 5)
/** UOTGHS_HSTPIPIFR[5]_NAKEDIS NAKed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[5]_NAKEDIS		(1 << 4)
/** UOTGHS_HSTPIPIFR[5]_PERRIS Pipe Error Interrupt Set **/
#define UOTGHS_HSTPIPIFR[5]_PERRIS		(1 << 3)
/** UOTGHS_HSTPIPIFR[5]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define UOTGHS_HSTPIPIFR[5]_TXSTPIS		(1 << 2)
/** UOTGHS_HSTPIPIFR[5]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[5]_TXOUTIS		(1 << 1)
/** UOTGHS_HSTPIPIFR[5]_RXINIS Received IN Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[5]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipifr[6] HSTPIPIFR[6] Host Pipe Set Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIFR[6]_NBUSYBKS Number of Busy Banks Set **/
#define UOTGHS_HSTPIPIFR[6]_NBUSYBKS		(1 << 12)
/** UOTGHS_HSTPIPIFR[6]_SHORTPACKETIS Short Packet Interrupt Set **/
#define UOTGHS_HSTPIPIFR[6]_SHORTPACKETIS		(1 << 7)
/** UOTGHS_HSTPIPIFR[6]_RXSTALLDIS Received STALLed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[6]_RXSTALLDIS		(1 << 6)
/** UOTGHS_HSTPIPIFR[6]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR[6]_OVERFIS		(1 << 5)
/** UOTGHS_HSTPIPIFR[6]_NAKEDIS NAKed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[6]_NAKEDIS		(1 << 4)
/** UOTGHS_HSTPIPIFR[6]_PERRIS Pipe Error Interrupt Set **/
#define UOTGHS_HSTPIPIFR[6]_PERRIS		(1 << 3)
/** UOTGHS_HSTPIPIFR[6]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define UOTGHS_HSTPIPIFR[6]_TXSTPIS		(1 << 2)
/** UOTGHS_HSTPIPIFR[6]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[6]_TXOUTIS		(1 << 1)
/** UOTGHS_HSTPIPIFR[6]_RXINIS Received IN Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[6]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipifr[7] HSTPIPIFR[7] Host Pipe Set Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIFR[7]_NBUSYBKS Number of Busy Banks Set **/
#define UOTGHS_HSTPIPIFR[7]_NBUSYBKS		(1 << 12)
/** UOTGHS_HSTPIPIFR[7]_SHORTPACKETIS Short Packet Interrupt Set **/
#define UOTGHS_HSTPIPIFR[7]_SHORTPACKETIS		(1 << 7)
/** UOTGHS_HSTPIPIFR[7]_RXSTALLDIS Received STALLed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[7]_RXSTALLDIS		(1 << 6)
/** UOTGHS_HSTPIPIFR[7]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR[7]_OVERFIS		(1 << 5)
/** UOTGHS_HSTPIPIFR[7]_NAKEDIS NAKed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[7]_NAKEDIS		(1 << 4)
/** UOTGHS_HSTPIPIFR[7]_PERRIS Pipe Error Interrupt Set **/
#define UOTGHS_HSTPIPIFR[7]_PERRIS		(1 << 3)
/** UOTGHS_HSTPIPIFR[7]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define UOTGHS_HSTPIPIFR[7]_TXSTPIS		(1 << 2)
/** UOTGHS_HSTPIPIFR[7]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[7]_TXOUTIS		(1 << 1)
/** UOTGHS_HSTPIPIFR[7]_RXINIS Received IN Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[7]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipifr[8] HSTPIPIFR[8] Host Pipe Set Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIFR[8]_NBUSYBKS Number of Busy Banks Set **/
#define UOTGHS_HSTPIPIFR[8]_NBUSYBKS		(1 << 12)
/** UOTGHS_HSTPIPIFR[8]_SHORTPACKETIS Short Packet Interrupt Set **/
#define UOTGHS_HSTPIPIFR[8]_SHORTPACKETIS		(1 << 7)
/** UOTGHS_HSTPIPIFR[8]_RXSTALLDIS Received STALLed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[8]_RXSTALLDIS		(1 << 6)
/** UOTGHS_HSTPIPIFR[8]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR[8]_OVERFIS		(1 << 5)
/** UOTGHS_HSTPIPIFR[8]_NAKEDIS NAKed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[8]_NAKEDIS		(1 << 4)
/** UOTGHS_HSTPIPIFR[8]_PERRIS Pipe Error Interrupt Set **/
#define UOTGHS_HSTPIPIFR[8]_PERRIS		(1 << 3)
/** UOTGHS_HSTPIPIFR[8]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define UOTGHS_HSTPIPIFR[8]_TXSTPIS		(1 << 2)
/** UOTGHS_HSTPIPIFR[8]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[8]_TXOUTIS		(1 << 1)
/** UOTGHS_HSTPIPIFR[8]_RXINIS Received IN Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[8]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipifr[9] HSTPIPIFR[9] Host Pipe Set Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIFR[9]_NBUSYBKS Number of Busy Banks Set **/
#define UOTGHS_HSTPIPIFR[9]_NBUSYBKS		(1 << 12)
/** UOTGHS_HSTPIPIFR[9]_SHORTPACKETIS Short Packet Interrupt Set **/
#define UOTGHS_HSTPIPIFR[9]_SHORTPACKETIS		(1 << 7)
/** UOTGHS_HSTPIPIFR[9]_RXSTALLDIS Received STALLed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[9]_RXSTALLDIS		(1 << 6)
/** UOTGHS_HSTPIPIFR[9]_OVERFIS Overflow Interrupt Set **/
#define UOTGHS_HSTPIPIFR[9]_OVERFIS		(1 << 5)
/** UOTGHS_HSTPIPIFR[9]_NAKEDIS NAKed Interrupt Set **/
#define UOTGHS_HSTPIPIFR[9]_NAKEDIS		(1 << 4)
/** UOTGHS_HSTPIPIFR[9]_PERRIS Pipe Error Interrupt Set **/
#define UOTGHS_HSTPIPIFR[9]_PERRIS		(1 << 3)
/** UOTGHS_HSTPIPIFR[9]_TXSTPIS Transmitted SETUP Interrupt Set **/
#define UOTGHS_HSTPIPIFR[9]_TXSTPIS		(1 << 2)
/** UOTGHS_HSTPIPIFR[9]_TXOUTIS Transmitted OUT Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[9]_TXOUTIS		(1 << 1)
/** UOTGHS_HSTPIPIFR[9]_RXINIS Received IN Data Interrupt Set **/
#define UOTGHS_HSTPIPIFR[9]_RXINIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipimr0_intpipes HSTPIPIMR0INTPIPES Host Pipe Mask Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIMR0_INTPIPES_RSTDT Reset Data Toggle **/
#define UOTGHS_HSTPIPIMR0_INTPIPES_RSTDT		(1 << 18)
/** UOTGHS_HSTPIPIMR0_INTPIPES_PFREEZE Pipe Freeze **/
#define UOTGHS_HSTPIPIMR0_INTPIPES_PFREEZE		(1 << 17)
/** UOTGHS_HSTPIPIMR0_INTPIPES_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIMR0_INTPIPES_PDISHDMA		(1 << 16)
/** UOTGHS_HSTPIPIMR0_INTPIPES_FIFOCON FIFO Control **/
#define UOTGHS_HSTPIPIMR0_INTPIPES_FIFOCON		(1 << 14)
/** UOTGHS_HSTPIPIMR0_INTPIPES_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_INTPIPES_NBUSYBKE		(1 << 12)
/** UOTGHS_HSTPIPIMR0_INTPIPES_SHORTPACKETIE Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_INTPIPES_SHORTPACKETIE		(1 << 7)
/** UOTGHS_HSTPIPIMR0_INTPIPES_RXSTALLDE Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_INTPIPES_RXSTALLDE		(1 << 6)
/** UOTGHS_HSTPIPIMR0_INTPIPES_OVERFIE Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_INTPIPES_OVERFIE		(1 << 5)
/** UOTGHS_HSTPIPIMR0_INTPIPES_NAKEDE NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_INTPIPES_NAKEDE		(1 << 4)
/** UOTGHS_HSTPIPIMR0_INTPIPES_PERRE Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_INTPIPES_PERRE		(1 << 3)
/** UOTGHS_HSTPIPIMR0_INTPIPES_UNDERFIE Underflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_INTPIPES_UNDERFIE		(1 << 2)
/** UOTGHS_HSTPIPIMR0_INTPIPES_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_INTPIPES_TXOUTE		(1 << 1)
/** UOTGHS_HSTPIPIMR0_INTPIPES_RXINE Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_INTPIPES_RXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipimr0_isopipes HSTPIPIMR0ISOPIPES Host Pipe Mask Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIMR0_ISOPIPES_RSTDT Reset Data Toggle **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES_RSTDT		(1 << 18)
/** UOTGHS_HSTPIPIMR0_ISOPIPES_PFREEZE Pipe Freeze **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES_PFREEZE		(1 << 17)
/** UOTGHS_HSTPIPIMR0_ISOPIPES_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES_PDISHDMA		(1 << 16)
/** UOTGHS_HSTPIPIMR0_ISOPIPES_FIFOCON FIFO Control **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES_FIFOCON		(1 << 14)
/** UOTGHS_HSTPIPIMR0_ISOPIPES_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES_NBUSYBKE		(1 << 12)
/** UOTGHS_HSTPIPIMR0_ISOPIPES_SHORTPACKETIE Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES_SHORTPACKETIE		(1 << 7)
/** UOTGHS_HSTPIPIMR0_ISOPIPES_CRCERRE CRC Error Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES_CRCERRE		(1 << 6)
/** UOTGHS_HSTPIPIMR0_ISOPIPES_OVERFIE Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES_OVERFIE		(1 << 5)
/** UOTGHS_HSTPIPIMR0_ISOPIPES_NAKEDE NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES_NAKEDE		(1 << 4)
/** UOTGHS_HSTPIPIMR0_ISOPIPES_PERRE Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES_PERRE		(1 << 3)
/** UOTGHS_HSTPIPIMR0_ISOPIPES_UNDERFIE Underflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES_UNDERFIE		(1 << 2)
/** UOTGHS_HSTPIPIMR0_ISOPIPES_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES_TXOUTE		(1 << 1)
/** UOTGHS_HSTPIPIMR0_ISOPIPES_RXINE Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR0_ISOPIPES_RXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipimr[0] HSTPIPIMR[0] Host Pipe Mask Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIMR[0]_RSTDT Reset Data Toggle **/
#define UOTGHS_HSTPIPIMR[0]_RSTDT		(1 << 18)
/** UOTGHS_HSTPIPIMR[0]_PFREEZE Pipe Freeze **/
#define UOTGHS_HSTPIPIMR[0]_PFREEZE		(1 << 17)
/** UOTGHS_HSTPIPIMR[0]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIMR[0]_PDISHDMA		(1 << 16)
/** UOTGHS_HSTPIPIMR[0]_FIFOCON FIFO Control **/
#define UOTGHS_HSTPIPIMR[0]_FIFOCON		(1 << 14)
/** UOTGHS_HSTPIPIMR[0]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[0]_NBUSYBKE		(1 << 12)
/** UOTGHS_HSTPIPIMR[0]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[0]_SHORTPACKETIE		(1 << 7)
/** UOTGHS_HSTPIPIMR[0]_RXSTALLDE Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[0]_RXSTALLDE		(1 << 6)
/** UOTGHS_HSTPIPIMR[0]_OVERFIE Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[0]_OVERFIE		(1 << 5)
/** UOTGHS_HSTPIPIMR[0]_NAKEDE NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[0]_NAKEDE		(1 << 4)
/** UOTGHS_HSTPIPIMR[0]_PERRE Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[0]_PERRE		(1 << 3)
/** UOTGHS_HSTPIPIMR[0]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[0]_TXSTPE		(1 << 2)
/** UOTGHS_HSTPIPIMR[0]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[0]_TXOUTE		(1 << 1)
/** UOTGHS_HSTPIPIMR[0]_RXINE Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[0]_RXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipimr[1] HSTPIPIMR[1] Host Pipe Mask Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIMR[1]_RSTDT Reset Data Toggle **/
#define UOTGHS_HSTPIPIMR[1]_RSTDT		(1 << 18)
/** UOTGHS_HSTPIPIMR[1]_PFREEZE Pipe Freeze **/
#define UOTGHS_HSTPIPIMR[1]_PFREEZE		(1 << 17)
/** UOTGHS_HSTPIPIMR[1]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIMR[1]_PDISHDMA		(1 << 16)
/** UOTGHS_HSTPIPIMR[1]_FIFOCON FIFO Control **/
#define UOTGHS_HSTPIPIMR[1]_FIFOCON		(1 << 14)
/** UOTGHS_HSTPIPIMR[1]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[1]_NBUSYBKE		(1 << 12)
/** UOTGHS_HSTPIPIMR[1]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[1]_SHORTPACKETIE		(1 << 7)
/** UOTGHS_HSTPIPIMR[1]_RXSTALLDE Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[1]_RXSTALLDE		(1 << 6)
/** UOTGHS_HSTPIPIMR[1]_OVERFIE Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[1]_OVERFIE		(1 << 5)
/** UOTGHS_HSTPIPIMR[1]_NAKEDE NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[1]_NAKEDE		(1 << 4)
/** UOTGHS_HSTPIPIMR[1]_PERRE Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[1]_PERRE		(1 << 3)
/** UOTGHS_HSTPIPIMR[1]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[1]_TXSTPE		(1 << 2)
/** UOTGHS_HSTPIPIMR[1]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[1]_TXOUTE		(1 << 1)
/** UOTGHS_HSTPIPIMR[1]_RXINE Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[1]_RXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipimr[2] HSTPIPIMR[2] Host Pipe Mask Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIMR[2]_RSTDT Reset Data Toggle **/
#define UOTGHS_HSTPIPIMR[2]_RSTDT		(1 << 18)
/** UOTGHS_HSTPIPIMR[2]_PFREEZE Pipe Freeze **/
#define UOTGHS_HSTPIPIMR[2]_PFREEZE		(1 << 17)
/** UOTGHS_HSTPIPIMR[2]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIMR[2]_PDISHDMA		(1 << 16)
/** UOTGHS_HSTPIPIMR[2]_FIFOCON FIFO Control **/
#define UOTGHS_HSTPIPIMR[2]_FIFOCON		(1 << 14)
/** UOTGHS_HSTPIPIMR[2]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[2]_NBUSYBKE		(1 << 12)
/** UOTGHS_HSTPIPIMR[2]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[2]_SHORTPACKETIE		(1 << 7)
/** UOTGHS_HSTPIPIMR[2]_RXSTALLDE Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[2]_RXSTALLDE		(1 << 6)
/** UOTGHS_HSTPIPIMR[2]_OVERFIE Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[2]_OVERFIE		(1 << 5)
/** UOTGHS_HSTPIPIMR[2]_NAKEDE NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[2]_NAKEDE		(1 << 4)
/** UOTGHS_HSTPIPIMR[2]_PERRE Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[2]_PERRE		(1 << 3)
/** UOTGHS_HSTPIPIMR[2]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[2]_TXSTPE		(1 << 2)
/** UOTGHS_HSTPIPIMR[2]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[2]_TXOUTE		(1 << 1)
/** UOTGHS_HSTPIPIMR[2]_RXINE Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[2]_RXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipimr[3] HSTPIPIMR[3] Host Pipe Mask Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIMR[3]_RSTDT Reset Data Toggle **/
#define UOTGHS_HSTPIPIMR[3]_RSTDT		(1 << 18)
/** UOTGHS_HSTPIPIMR[3]_PFREEZE Pipe Freeze **/
#define UOTGHS_HSTPIPIMR[3]_PFREEZE		(1 << 17)
/** UOTGHS_HSTPIPIMR[3]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIMR[3]_PDISHDMA		(1 << 16)
/** UOTGHS_HSTPIPIMR[3]_FIFOCON FIFO Control **/
#define UOTGHS_HSTPIPIMR[3]_FIFOCON		(1 << 14)
/** UOTGHS_HSTPIPIMR[3]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[3]_NBUSYBKE		(1 << 12)
/** UOTGHS_HSTPIPIMR[3]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[3]_SHORTPACKETIE		(1 << 7)
/** UOTGHS_HSTPIPIMR[3]_RXSTALLDE Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[3]_RXSTALLDE		(1 << 6)
/** UOTGHS_HSTPIPIMR[3]_OVERFIE Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[3]_OVERFIE		(1 << 5)
/** UOTGHS_HSTPIPIMR[3]_NAKEDE NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[3]_NAKEDE		(1 << 4)
/** UOTGHS_HSTPIPIMR[3]_PERRE Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[3]_PERRE		(1 << 3)
/** UOTGHS_HSTPIPIMR[3]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[3]_TXSTPE		(1 << 2)
/** UOTGHS_HSTPIPIMR[3]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[3]_TXOUTE		(1 << 1)
/** UOTGHS_HSTPIPIMR[3]_RXINE Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[3]_RXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipimr[4] HSTPIPIMR[4] Host Pipe Mask Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIMR[4]_RSTDT Reset Data Toggle **/
#define UOTGHS_HSTPIPIMR[4]_RSTDT		(1 << 18)
/** UOTGHS_HSTPIPIMR[4]_PFREEZE Pipe Freeze **/
#define UOTGHS_HSTPIPIMR[4]_PFREEZE		(1 << 17)
/** UOTGHS_HSTPIPIMR[4]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIMR[4]_PDISHDMA		(1 << 16)
/** UOTGHS_HSTPIPIMR[4]_FIFOCON FIFO Control **/
#define UOTGHS_HSTPIPIMR[4]_FIFOCON		(1 << 14)
/** UOTGHS_HSTPIPIMR[4]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[4]_NBUSYBKE		(1 << 12)
/** UOTGHS_HSTPIPIMR[4]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[4]_SHORTPACKETIE		(1 << 7)
/** UOTGHS_HSTPIPIMR[4]_RXSTALLDE Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[4]_RXSTALLDE		(1 << 6)
/** UOTGHS_HSTPIPIMR[4]_OVERFIE Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[4]_OVERFIE		(1 << 5)
/** UOTGHS_HSTPIPIMR[4]_NAKEDE NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[4]_NAKEDE		(1 << 4)
/** UOTGHS_HSTPIPIMR[4]_PERRE Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[4]_PERRE		(1 << 3)
/** UOTGHS_HSTPIPIMR[4]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[4]_TXSTPE		(1 << 2)
/** UOTGHS_HSTPIPIMR[4]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[4]_TXOUTE		(1 << 1)
/** UOTGHS_HSTPIPIMR[4]_RXINE Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[4]_RXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipimr[5] HSTPIPIMR[5] Host Pipe Mask Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIMR[5]_RSTDT Reset Data Toggle **/
#define UOTGHS_HSTPIPIMR[5]_RSTDT		(1 << 18)
/** UOTGHS_HSTPIPIMR[5]_PFREEZE Pipe Freeze **/
#define UOTGHS_HSTPIPIMR[5]_PFREEZE		(1 << 17)
/** UOTGHS_HSTPIPIMR[5]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIMR[5]_PDISHDMA		(1 << 16)
/** UOTGHS_HSTPIPIMR[5]_FIFOCON FIFO Control **/
#define UOTGHS_HSTPIPIMR[5]_FIFOCON		(1 << 14)
/** UOTGHS_HSTPIPIMR[5]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[5]_NBUSYBKE		(1 << 12)
/** UOTGHS_HSTPIPIMR[5]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[5]_SHORTPACKETIE		(1 << 7)
/** UOTGHS_HSTPIPIMR[5]_RXSTALLDE Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[5]_RXSTALLDE		(1 << 6)
/** UOTGHS_HSTPIPIMR[5]_OVERFIE Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[5]_OVERFIE		(1 << 5)
/** UOTGHS_HSTPIPIMR[5]_NAKEDE NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[5]_NAKEDE		(1 << 4)
/** UOTGHS_HSTPIPIMR[5]_PERRE Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[5]_PERRE		(1 << 3)
/** UOTGHS_HSTPIPIMR[5]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[5]_TXSTPE		(1 << 2)
/** UOTGHS_HSTPIPIMR[5]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[5]_TXOUTE		(1 << 1)
/** UOTGHS_HSTPIPIMR[5]_RXINE Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[5]_RXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipimr[6] HSTPIPIMR[6] Host Pipe Mask Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIMR[6]_RSTDT Reset Data Toggle **/
#define UOTGHS_HSTPIPIMR[6]_RSTDT		(1 << 18)
/** UOTGHS_HSTPIPIMR[6]_PFREEZE Pipe Freeze **/
#define UOTGHS_HSTPIPIMR[6]_PFREEZE		(1 << 17)
/** UOTGHS_HSTPIPIMR[6]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIMR[6]_PDISHDMA		(1 << 16)
/** UOTGHS_HSTPIPIMR[6]_FIFOCON FIFO Control **/
#define UOTGHS_HSTPIPIMR[6]_FIFOCON		(1 << 14)
/** UOTGHS_HSTPIPIMR[6]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[6]_NBUSYBKE		(1 << 12)
/** UOTGHS_HSTPIPIMR[6]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[6]_SHORTPACKETIE		(1 << 7)
/** UOTGHS_HSTPIPIMR[6]_RXSTALLDE Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[6]_RXSTALLDE		(1 << 6)
/** UOTGHS_HSTPIPIMR[6]_OVERFIE Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[6]_OVERFIE		(1 << 5)
/** UOTGHS_HSTPIPIMR[6]_NAKEDE NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[6]_NAKEDE		(1 << 4)
/** UOTGHS_HSTPIPIMR[6]_PERRE Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[6]_PERRE		(1 << 3)
/** UOTGHS_HSTPIPIMR[6]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[6]_TXSTPE		(1 << 2)
/** UOTGHS_HSTPIPIMR[6]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[6]_TXOUTE		(1 << 1)
/** UOTGHS_HSTPIPIMR[6]_RXINE Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[6]_RXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipimr[7] HSTPIPIMR[7] Host Pipe Mask Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIMR[7]_RSTDT Reset Data Toggle **/
#define UOTGHS_HSTPIPIMR[7]_RSTDT		(1 << 18)
/** UOTGHS_HSTPIPIMR[7]_PFREEZE Pipe Freeze **/
#define UOTGHS_HSTPIPIMR[7]_PFREEZE		(1 << 17)
/** UOTGHS_HSTPIPIMR[7]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIMR[7]_PDISHDMA		(1 << 16)
/** UOTGHS_HSTPIPIMR[7]_FIFOCON FIFO Control **/
#define UOTGHS_HSTPIPIMR[7]_FIFOCON		(1 << 14)
/** UOTGHS_HSTPIPIMR[7]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[7]_NBUSYBKE		(1 << 12)
/** UOTGHS_HSTPIPIMR[7]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[7]_SHORTPACKETIE		(1 << 7)
/** UOTGHS_HSTPIPIMR[7]_RXSTALLDE Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[7]_RXSTALLDE		(1 << 6)
/** UOTGHS_HSTPIPIMR[7]_OVERFIE Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[7]_OVERFIE		(1 << 5)
/** UOTGHS_HSTPIPIMR[7]_NAKEDE NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[7]_NAKEDE		(1 << 4)
/** UOTGHS_HSTPIPIMR[7]_PERRE Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[7]_PERRE		(1 << 3)
/** UOTGHS_HSTPIPIMR[7]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[7]_TXSTPE		(1 << 2)
/** UOTGHS_HSTPIPIMR[7]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[7]_TXOUTE		(1 << 1)
/** UOTGHS_HSTPIPIMR[7]_RXINE Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[7]_RXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipimr[8] HSTPIPIMR[8] Host Pipe Mask Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIMR[8]_RSTDT Reset Data Toggle **/
#define UOTGHS_HSTPIPIMR[8]_RSTDT		(1 << 18)
/** UOTGHS_HSTPIPIMR[8]_PFREEZE Pipe Freeze **/
#define UOTGHS_HSTPIPIMR[8]_PFREEZE		(1 << 17)
/** UOTGHS_HSTPIPIMR[8]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIMR[8]_PDISHDMA		(1 << 16)
/** UOTGHS_HSTPIPIMR[8]_FIFOCON FIFO Control **/
#define UOTGHS_HSTPIPIMR[8]_FIFOCON		(1 << 14)
/** UOTGHS_HSTPIPIMR[8]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[8]_NBUSYBKE		(1 << 12)
/** UOTGHS_HSTPIPIMR[8]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[8]_SHORTPACKETIE		(1 << 7)
/** UOTGHS_HSTPIPIMR[8]_RXSTALLDE Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[8]_RXSTALLDE		(1 << 6)
/** UOTGHS_HSTPIPIMR[8]_OVERFIE Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[8]_OVERFIE		(1 << 5)
/** UOTGHS_HSTPIPIMR[8]_NAKEDE NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[8]_NAKEDE		(1 << 4)
/** UOTGHS_HSTPIPIMR[8]_PERRE Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[8]_PERRE		(1 << 3)
/** UOTGHS_HSTPIPIMR[8]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[8]_TXSTPE		(1 << 2)
/** UOTGHS_HSTPIPIMR[8]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[8]_TXOUTE		(1 << 1)
/** UOTGHS_HSTPIPIMR[8]_RXINE Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[8]_RXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipimr[9] HSTPIPIMR[9] Host Pipe Mask Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIMR[9]_RSTDT Reset Data Toggle **/
#define UOTGHS_HSTPIPIMR[9]_RSTDT		(1 << 18)
/** UOTGHS_HSTPIPIMR[9]_PFREEZE Pipe Freeze **/
#define UOTGHS_HSTPIPIMR[9]_PFREEZE		(1 << 17)
/** UOTGHS_HSTPIPIMR[9]_PDISHDMA Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIMR[9]_PDISHDMA		(1 << 16)
/** UOTGHS_HSTPIPIMR[9]_FIFOCON FIFO Control **/
#define UOTGHS_HSTPIPIMR[9]_FIFOCON		(1 << 14)
/** UOTGHS_HSTPIPIMR[9]_NBUSYBKE Number of Busy Banks Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[9]_NBUSYBKE		(1 << 12)
/** UOTGHS_HSTPIPIMR[9]_SHORTPACKETIE Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[9]_SHORTPACKETIE		(1 << 7)
/** UOTGHS_HSTPIPIMR[9]_RXSTALLDE Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[9]_RXSTALLDE		(1 << 6)
/** UOTGHS_HSTPIPIMR[9]_OVERFIE Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[9]_OVERFIE		(1 << 5)
/** UOTGHS_HSTPIPIMR[9]_NAKEDE NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[9]_NAKEDE		(1 << 4)
/** UOTGHS_HSTPIPIMR[9]_PERRE Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[9]_PERRE		(1 << 3)
/** UOTGHS_HSTPIPIMR[9]_TXSTPE Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[9]_TXSTPE		(1 << 2)
/** UOTGHS_HSTPIPIMR[9]_TXOUTE Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[9]_TXOUTE		(1 << 1)
/** UOTGHS_HSTPIPIMR[9]_RXINE Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIMR[9]_RXINE		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipier0_intpipes HSTPIPIER0INTPIPES Host Pipe Enable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIER0_INTPIPES_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_HSTPIPIER0_INTPIPES_RSTDTS		(1 << 18)
/** UOTGHS_HSTPIPIER0_INTPIPES_PFREEZES Pipe Freeze Enable **/
#define UOTGHS_HSTPIPIER0_INTPIPES_PFREEZES		(1 << 17)
/** UOTGHS_HSTPIPIER0_INTPIPES_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIER0_INTPIPES_PDISHDMAS		(1 << 16)
/** UOTGHS_HSTPIPIER0_INTPIPES_NBUSYBKES Number of Busy Banks Enable **/
#define UOTGHS_HSTPIPIER0_INTPIPES_NBUSYBKES		(1 << 12)
/** UOTGHS_HSTPIPIER0_INTPIPES_SHORTPACKETIES Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_INTPIPES_SHORTPACKETIES		(1 << 7)
/** UOTGHS_HSTPIPIER0_INTPIPES_RXSTALLDES Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_INTPIPES_RXSTALLDES		(1 << 6)
/** UOTGHS_HSTPIPIER0_INTPIPES_OVERFIES Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_INTPIPES_OVERFIES		(1 << 5)
/** UOTGHS_HSTPIPIER0_INTPIPES_NAKEDES NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_INTPIPES_NAKEDES		(1 << 4)
/** UOTGHS_HSTPIPIER0_INTPIPES_PERRES Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_INTPIPES_PERRES		(1 << 3)
/** UOTGHS_HSTPIPIER0_INTPIPES_UNDERFIES Underflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_INTPIPES_UNDERFIES		(1 << 2)
/** UOTGHS_HSTPIPIER0_INTPIPES_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_INTPIPES_TXOUTES		(1 << 1)
/** UOTGHS_HSTPIPIER0_INTPIPES_RXINES Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_INTPIPES_RXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipier0_isopipes HSTPIPIER0ISOPIPES Host Pipe Enable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIER0_ISOPIPES_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_HSTPIPIER0_ISOPIPES_RSTDTS		(1 << 18)
/** UOTGHS_HSTPIPIER0_ISOPIPES_PFREEZES Pipe Freeze Enable **/
#define UOTGHS_HSTPIPIER0_ISOPIPES_PFREEZES		(1 << 17)
/** UOTGHS_HSTPIPIER0_ISOPIPES_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIER0_ISOPIPES_PDISHDMAS		(1 << 16)
/** UOTGHS_HSTPIPIER0_ISOPIPES_NBUSYBKES Number of Busy Banks Enable **/
#define UOTGHS_HSTPIPIER0_ISOPIPES_NBUSYBKES		(1 << 12)
/** UOTGHS_HSTPIPIER0_ISOPIPES_SHORTPACKETIES Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_ISOPIPES_SHORTPACKETIES		(1 << 7)
/** UOTGHS_HSTPIPIER0_ISOPIPES_CRCERRES CRC Error Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_ISOPIPES_CRCERRES		(1 << 6)
/** UOTGHS_HSTPIPIER0_ISOPIPES_OVERFIES Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_ISOPIPES_OVERFIES		(1 << 5)
/** UOTGHS_HSTPIPIER0_ISOPIPES_NAKEDES NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_ISOPIPES_NAKEDES		(1 << 4)
/** UOTGHS_HSTPIPIER0_ISOPIPES_PERRES Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_ISOPIPES_PERRES		(1 << 3)
/** UOTGHS_HSTPIPIER0_ISOPIPES_UNDERFIES Underflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_ISOPIPES_UNDERFIES		(1 << 2)
/** UOTGHS_HSTPIPIER0_ISOPIPES_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_ISOPIPES_TXOUTES		(1 << 1)
/** UOTGHS_HSTPIPIER0_ISOPIPES_RXINES Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER0_ISOPIPES_RXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipier[0] HSTPIPIER[0] Host Pipe Enable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIER[0]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_HSTPIPIER[0]_RSTDTS		(1 << 18)
/** UOTGHS_HSTPIPIER[0]_PFREEZES Pipe Freeze Enable **/
#define UOTGHS_HSTPIPIER[0]_PFREEZES		(1 << 17)
/** UOTGHS_HSTPIPIER[0]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIER[0]_PDISHDMAS		(1 << 16)
/** UOTGHS_HSTPIPIER[0]_NBUSYBKES Number of Busy Banks Enable **/
#define UOTGHS_HSTPIPIER[0]_NBUSYBKES		(1 << 12)
/** UOTGHS_HSTPIPIER[0]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIER[0]_SHORTPACKETIES		(1 << 7)
/** UOTGHS_HSTPIPIER[0]_RXSTALLDES Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[0]_RXSTALLDES		(1 << 6)
/** UOTGHS_HSTPIPIER[0]_OVERFIES Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER[0]_OVERFIES		(1 << 5)
/** UOTGHS_HSTPIPIER[0]_NAKEDES NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[0]_NAKEDES		(1 << 4)
/** UOTGHS_HSTPIPIER[0]_PERRES Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIER[0]_PERRES		(1 << 3)
/** UOTGHS_HSTPIPIER[0]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIER[0]_TXSTPES		(1 << 2)
/** UOTGHS_HSTPIPIER[0]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[0]_TXOUTES		(1 << 1)
/** UOTGHS_HSTPIPIER[0]_RXINES Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[0]_RXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipier[1] HSTPIPIER[1] Host Pipe Enable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIER[1]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_HSTPIPIER[1]_RSTDTS		(1 << 18)
/** UOTGHS_HSTPIPIER[1]_PFREEZES Pipe Freeze Enable **/
#define UOTGHS_HSTPIPIER[1]_PFREEZES		(1 << 17)
/** UOTGHS_HSTPIPIER[1]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIER[1]_PDISHDMAS		(1 << 16)
/** UOTGHS_HSTPIPIER[1]_NBUSYBKES Number of Busy Banks Enable **/
#define UOTGHS_HSTPIPIER[1]_NBUSYBKES		(1 << 12)
/** UOTGHS_HSTPIPIER[1]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIER[1]_SHORTPACKETIES		(1 << 7)
/** UOTGHS_HSTPIPIER[1]_RXSTALLDES Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[1]_RXSTALLDES		(1 << 6)
/** UOTGHS_HSTPIPIER[1]_OVERFIES Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER[1]_OVERFIES		(1 << 5)
/** UOTGHS_HSTPIPIER[1]_NAKEDES NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[1]_NAKEDES		(1 << 4)
/** UOTGHS_HSTPIPIER[1]_PERRES Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIER[1]_PERRES		(1 << 3)
/** UOTGHS_HSTPIPIER[1]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIER[1]_TXSTPES		(1 << 2)
/** UOTGHS_HSTPIPIER[1]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[1]_TXOUTES		(1 << 1)
/** UOTGHS_HSTPIPIER[1]_RXINES Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[1]_RXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipier[2] HSTPIPIER[2] Host Pipe Enable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIER[2]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_HSTPIPIER[2]_RSTDTS		(1 << 18)
/** UOTGHS_HSTPIPIER[2]_PFREEZES Pipe Freeze Enable **/
#define UOTGHS_HSTPIPIER[2]_PFREEZES		(1 << 17)
/** UOTGHS_HSTPIPIER[2]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIER[2]_PDISHDMAS		(1 << 16)
/** UOTGHS_HSTPIPIER[2]_NBUSYBKES Number of Busy Banks Enable **/
#define UOTGHS_HSTPIPIER[2]_NBUSYBKES		(1 << 12)
/** UOTGHS_HSTPIPIER[2]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIER[2]_SHORTPACKETIES		(1 << 7)
/** UOTGHS_HSTPIPIER[2]_RXSTALLDES Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[2]_RXSTALLDES		(1 << 6)
/** UOTGHS_HSTPIPIER[2]_OVERFIES Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER[2]_OVERFIES		(1 << 5)
/** UOTGHS_HSTPIPIER[2]_NAKEDES NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[2]_NAKEDES		(1 << 4)
/** UOTGHS_HSTPIPIER[2]_PERRES Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIER[2]_PERRES		(1 << 3)
/** UOTGHS_HSTPIPIER[2]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIER[2]_TXSTPES		(1 << 2)
/** UOTGHS_HSTPIPIER[2]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[2]_TXOUTES		(1 << 1)
/** UOTGHS_HSTPIPIER[2]_RXINES Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[2]_RXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipier[3] HSTPIPIER[3] Host Pipe Enable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIER[3]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_HSTPIPIER[3]_RSTDTS		(1 << 18)
/** UOTGHS_HSTPIPIER[3]_PFREEZES Pipe Freeze Enable **/
#define UOTGHS_HSTPIPIER[3]_PFREEZES		(1 << 17)
/** UOTGHS_HSTPIPIER[3]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIER[3]_PDISHDMAS		(1 << 16)
/** UOTGHS_HSTPIPIER[3]_NBUSYBKES Number of Busy Banks Enable **/
#define UOTGHS_HSTPIPIER[3]_NBUSYBKES		(1 << 12)
/** UOTGHS_HSTPIPIER[3]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIER[3]_SHORTPACKETIES		(1 << 7)
/** UOTGHS_HSTPIPIER[3]_RXSTALLDES Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[3]_RXSTALLDES		(1 << 6)
/** UOTGHS_HSTPIPIER[3]_OVERFIES Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER[3]_OVERFIES		(1 << 5)
/** UOTGHS_HSTPIPIER[3]_NAKEDES NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[3]_NAKEDES		(1 << 4)
/** UOTGHS_HSTPIPIER[3]_PERRES Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIER[3]_PERRES		(1 << 3)
/** UOTGHS_HSTPIPIER[3]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIER[3]_TXSTPES		(1 << 2)
/** UOTGHS_HSTPIPIER[3]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[3]_TXOUTES		(1 << 1)
/** UOTGHS_HSTPIPIER[3]_RXINES Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[3]_RXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipier[4] HSTPIPIER[4] Host Pipe Enable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIER[4]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_HSTPIPIER[4]_RSTDTS		(1 << 18)
/** UOTGHS_HSTPIPIER[4]_PFREEZES Pipe Freeze Enable **/
#define UOTGHS_HSTPIPIER[4]_PFREEZES		(1 << 17)
/** UOTGHS_HSTPIPIER[4]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIER[4]_PDISHDMAS		(1 << 16)
/** UOTGHS_HSTPIPIER[4]_NBUSYBKES Number of Busy Banks Enable **/
#define UOTGHS_HSTPIPIER[4]_NBUSYBKES		(1 << 12)
/** UOTGHS_HSTPIPIER[4]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIER[4]_SHORTPACKETIES		(1 << 7)
/** UOTGHS_HSTPIPIER[4]_RXSTALLDES Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[4]_RXSTALLDES		(1 << 6)
/** UOTGHS_HSTPIPIER[4]_OVERFIES Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER[4]_OVERFIES		(1 << 5)
/** UOTGHS_HSTPIPIER[4]_NAKEDES NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[4]_NAKEDES		(1 << 4)
/** UOTGHS_HSTPIPIER[4]_PERRES Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIER[4]_PERRES		(1 << 3)
/** UOTGHS_HSTPIPIER[4]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIER[4]_TXSTPES		(1 << 2)
/** UOTGHS_HSTPIPIER[4]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[4]_TXOUTES		(1 << 1)
/** UOTGHS_HSTPIPIER[4]_RXINES Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[4]_RXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipier[5] HSTPIPIER[5] Host Pipe Enable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIER[5]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_HSTPIPIER[5]_RSTDTS		(1 << 18)
/** UOTGHS_HSTPIPIER[5]_PFREEZES Pipe Freeze Enable **/
#define UOTGHS_HSTPIPIER[5]_PFREEZES		(1 << 17)
/** UOTGHS_HSTPIPIER[5]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIER[5]_PDISHDMAS		(1 << 16)
/** UOTGHS_HSTPIPIER[5]_NBUSYBKES Number of Busy Banks Enable **/
#define UOTGHS_HSTPIPIER[5]_NBUSYBKES		(1 << 12)
/** UOTGHS_HSTPIPIER[5]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIER[5]_SHORTPACKETIES		(1 << 7)
/** UOTGHS_HSTPIPIER[5]_RXSTALLDES Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[5]_RXSTALLDES		(1 << 6)
/** UOTGHS_HSTPIPIER[5]_OVERFIES Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER[5]_OVERFIES		(1 << 5)
/** UOTGHS_HSTPIPIER[5]_NAKEDES NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[5]_NAKEDES		(1 << 4)
/** UOTGHS_HSTPIPIER[5]_PERRES Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIER[5]_PERRES		(1 << 3)
/** UOTGHS_HSTPIPIER[5]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIER[5]_TXSTPES		(1 << 2)
/** UOTGHS_HSTPIPIER[5]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[5]_TXOUTES		(1 << 1)
/** UOTGHS_HSTPIPIER[5]_RXINES Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[5]_RXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipier[6] HSTPIPIER[6] Host Pipe Enable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIER[6]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_HSTPIPIER[6]_RSTDTS		(1 << 18)
/** UOTGHS_HSTPIPIER[6]_PFREEZES Pipe Freeze Enable **/
#define UOTGHS_HSTPIPIER[6]_PFREEZES		(1 << 17)
/** UOTGHS_HSTPIPIER[6]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIER[6]_PDISHDMAS		(1 << 16)
/** UOTGHS_HSTPIPIER[6]_NBUSYBKES Number of Busy Banks Enable **/
#define UOTGHS_HSTPIPIER[6]_NBUSYBKES		(1 << 12)
/** UOTGHS_HSTPIPIER[6]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIER[6]_SHORTPACKETIES		(1 << 7)
/** UOTGHS_HSTPIPIER[6]_RXSTALLDES Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[6]_RXSTALLDES		(1 << 6)
/** UOTGHS_HSTPIPIER[6]_OVERFIES Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER[6]_OVERFIES		(1 << 5)
/** UOTGHS_HSTPIPIER[6]_NAKEDES NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[6]_NAKEDES		(1 << 4)
/** UOTGHS_HSTPIPIER[6]_PERRES Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIER[6]_PERRES		(1 << 3)
/** UOTGHS_HSTPIPIER[6]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIER[6]_TXSTPES		(1 << 2)
/** UOTGHS_HSTPIPIER[6]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[6]_TXOUTES		(1 << 1)
/** UOTGHS_HSTPIPIER[6]_RXINES Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[6]_RXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipier[7] HSTPIPIER[7] Host Pipe Enable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIER[7]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_HSTPIPIER[7]_RSTDTS		(1 << 18)
/** UOTGHS_HSTPIPIER[7]_PFREEZES Pipe Freeze Enable **/
#define UOTGHS_HSTPIPIER[7]_PFREEZES		(1 << 17)
/** UOTGHS_HSTPIPIER[7]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIER[7]_PDISHDMAS		(1 << 16)
/** UOTGHS_HSTPIPIER[7]_NBUSYBKES Number of Busy Banks Enable **/
#define UOTGHS_HSTPIPIER[7]_NBUSYBKES		(1 << 12)
/** UOTGHS_HSTPIPIER[7]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIER[7]_SHORTPACKETIES		(1 << 7)
/** UOTGHS_HSTPIPIER[7]_RXSTALLDES Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[7]_RXSTALLDES		(1 << 6)
/** UOTGHS_HSTPIPIER[7]_OVERFIES Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER[7]_OVERFIES		(1 << 5)
/** UOTGHS_HSTPIPIER[7]_NAKEDES NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[7]_NAKEDES		(1 << 4)
/** UOTGHS_HSTPIPIER[7]_PERRES Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIER[7]_PERRES		(1 << 3)
/** UOTGHS_HSTPIPIER[7]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIER[7]_TXSTPES		(1 << 2)
/** UOTGHS_HSTPIPIER[7]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[7]_TXOUTES		(1 << 1)
/** UOTGHS_HSTPIPIER[7]_RXINES Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[7]_RXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipier[8] HSTPIPIER[8] Host Pipe Enable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIER[8]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_HSTPIPIER[8]_RSTDTS		(1 << 18)
/** UOTGHS_HSTPIPIER[8]_PFREEZES Pipe Freeze Enable **/
#define UOTGHS_HSTPIPIER[8]_PFREEZES		(1 << 17)
/** UOTGHS_HSTPIPIER[8]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIER[8]_PDISHDMAS		(1 << 16)
/** UOTGHS_HSTPIPIER[8]_NBUSYBKES Number of Busy Banks Enable **/
#define UOTGHS_HSTPIPIER[8]_NBUSYBKES		(1 << 12)
/** UOTGHS_HSTPIPIER[8]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIER[8]_SHORTPACKETIES		(1 << 7)
/** UOTGHS_HSTPIPIER[8]_RXSTALLDES Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[8]_RXSTALLDES		(1 << 6)
/** UOTGHS_HSTPIPIER[8]_OVERFIES Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER[8]_OVERFIES		(1 << 5)
/** UOTGHS_HSTPIPIER[8]_NAKEDES NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[8]_NAKEDES		(1 << 4)
/** UOTGHS_HSTPIPIER[8]_PERRES Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIER[8]_PERRES		(1 << 3)
/** UOTGHS_HSTPIPIER[8]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIER[8]_TXSTPES		(1 << 2)
/** UOTGHS_HSTPIPIER[8]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[8]_TXOUTES		(1 << 1)
/** UOTGHS_HSTPIPIER[8]_RXINES Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[8]_RXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipier[9] HSTPIPIER[9] Host Pipe Enable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIER[9]_RSTDTS Reset Data Toggle Enable **/
#define UOTGHS_HSTPIPIER[9]_RSTDTS		(1 << 18)
/** UOTGHS_HSTPIPIER[9]_PFREEZES Pipe Freeze Enable **/
#define UOTGHS_HSTPIPIER[9]_PFREEZES		(1 << 17)
/** UOTGHS_HSTPIPIER[9]_PDISHDMAS Pipe Interrupts Disable HDMA Request Enable **/
#define UOTGHS_HSTPIPIER[9]_PDISHDMAS		(1 << 16)
/** UOTGHS_HSTPIPIER[9]_NBUSYBKES Number of Busy Banks Enable **/
#define UOTGHS_HSTPIPIER[9]_NBUSYBKES		(1 << 12)
/** UOTGHS_HSTPIPIER[9]_SHORTPACKETIES Short Packet Interrupt Enable **/
#define UOTGHS_HSTPIPIER[9]_SHORTPACKETIES		(1 << 7)
/** UOTGHS_HSTPIPIER[9]_RXSTALLDES Received STALLed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[9]_RXSTALLDES		(1 << 6)
/** UOTGHS_HSTPIPIER[9]_OVERFIES Overflow Interrupt Enable **/
#define UOTGHS_HSTPIPIER[9]_OVERFIES		(1 << 5)
/** UOTGHS_HSTPIPIER[9]_NAKEDES NAKed Interrupt Enable **/
#define UOTGHS_HSTPIPIER[9]_NAKEDES		(1 << 4)
/** UOTGHS_HSTPIPIER[9]_PERRES Pipe Error Interrupt Enable **/
#define UOTGHS_HSTPIPIER[9]_PERRES		(1 << 3)
/** UOTGHS_HSTPIPIER[9]_TXSTPES Transmitted SETUP Interrupt Enable **/
#define UOTGHS_HSTPIPIER[9]_TXSTPES		(1 << 2)
/** UOTGHS_HSTPIPIER[9]_TXOUTES Transmitted OUT Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[9]_TXOUTES		(1 << 1)
/** UOTGHS_HSTPIPIER[9]_RXINES Received IN Data Interrupt Enable **/
#define UOTGHS_HSTPIPIER[9]_RXINES		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipidr0_intpipes HSTPIPIDR0INTPIPES Host Pipe Disable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIDR0_INTPIPES_PFREEZEC Pipe Freeze Disable **/
#define UOTGHS_HSTPIPIDR0_INTPIPES_PFREEZEC		(1 << 17)
/** UOTGHS_HSTPIPIDR0_INTPIPES_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define UOTGHS_HSTPIPIDR0_INTPIPES_PDISHDMAC		(1 << 16)
/** UOTGHS_HSTPIPIDR0_INTPIPES_FIFOCONC FIFO Control Disable **/
#define UOTGHS_HSTPIPIDR0_INTPIPES_FIFOCONC		(1 << 14)
/** UOTGHS_HSTPIPIDR0_INTPIPES_NBUSYBKEC Number of Busy Banks Disable **/
#define UOTGHS_HSTPIPIDR0_INTPIPES_NBUSYBKEC		(1 << 12)
/** UOTGHS_HSTPIPIDR0_INTPIPES_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_INTPIPES_SHORTPACKETIEC		(1 << 7)
/** UOTGHS_HSTPIPIDR0_INTPIPES_RXSTALLDEC Received STALLed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_INTPIPES_RXSTALLDEC		(1 << 6)
/** UOTGHS_HSTPIPIDR0_INTPIPES_OVERFIEC Overflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_INTPIPES_OVERFIEC		(1 << 5)
/** UOTGHS_HSTPIPIDR0_INTPIPES_NAKEDEC NAKed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_INTPIPES_NAKEDEC		(1 << 4)
/** UOTGHS_HSTPIPIDR0_INTPIPES_PERREC Pipe Error Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_INTPIPES_PERREC		(1 << 3)
/** UOTGHS_HSTPIPIDR0_INTPIPES_UNDERFIEC Underflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_INTPIPES_UNDERFIEC		(1 << 2)
/** UOTGHS_HSTPIPIDR0_INTPIPES_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_INTPIPES_TXOUTEC		(1 << 1)
/** UOTGHS_HSTPIPIDR0_INTPIPES_RXINEC Received IN Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_INTPIPES_RXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipidr0_isopipes HSTPIPIDR0ISOPIPES Host Pipe Disable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIDR0_ISOPIPES_PFREEZEC Pipe Freeze Disable **/
#define UOTGHS_HSTPIPIDR0_ISOPIPES_PFREEZEC		(1 << 17)
/** UOTGHS_HSTPIPIDR0_ISOPIPES_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define UOTGHS_HSTPIPIDR0_ISOPIPES_PDISHDMAC		(1 << 16)
/** UOTGHS_HSTPIPIDR0_ISOPIPES_FIFOCONC FIFO Control Disable **/
#define UOTGHS_HSTPIPIDR0_ISOPIPES_FIFOCONC		(1 << 14)
/** UOTGHS_HSTPIPIDR0_ISOPIPES_NBUSYBKEC Number of Busy Banks Disable **/
#define UOTGHS_HSTPIPIDR0_ISOPIPES_NBUSYBKEC		(1 << 12)
/** UOTGHS_HSTPIPIDR0_ISOPIPES_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_ISOPIPES_SHORTPACKETIEC		(1 << 7)
/** UOTGHS_HSTPIPIDR0_ISOPIPES_CRCERREC CRC Error Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_ISOPIPES_CRCERREC		(1 << 6)
/** UOTGHS_HSTPIPIDR0_ISOPIPES_OVERFIEC Overflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_ISOPIPES_OVERFIEC		(1 << 5)
/** UOTGHS_HSTPIPIDR0_ISOPIPES_NAKEDEC NAKed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_ISOPIPES_NAKEDEC		(1 << 4)
/** UOTGHS_HSTPIPIDR0_ISOPIPES_PERREC Pipe Error Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_ISOPIPES_PERREC		(1 << 3)
/** UOTGHS_HSTPIPIDR0_ISOPIPES_UNDERFIEC Underflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_ISOPIPES_UNDERFIEC		(1 << 2)
/** UOTGHS_HSTPIPIDR0_ISOPIPES_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_ISOPIPES_TXOUTEC		(1 << 1)
/** UOTGHS_HSTPIPIDR0_ISOPIPES_RXINEC Received IN Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR0_ISOPIPES_RXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipidr[0] HSTPIPIDR[0] Host Pipe Disable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIDR[0]_PFREEZEC Pipe Freeze Disable **/
#define UOTGHS_HSTPIPIDR[0]_PFREEZEC		(1 << 17)
/** UOTGHS_HSTPIPIDR[0]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define UOTGHS_HSTPIPIDR[0]_PDISHDMAC		(1 << 16)
/** UOTGHS_HSTPIPIDR[0]_FIFOCONC FIFO Control Disable **/
#define UOTGHS_HSTPIPIDR[0]_FIFOCONC		(1 << 14)
/** UOTGHS_HSTPIPIDR[0]_NBUSYBKEC Number of Busy Banks Disable **/
#define UOTGHS_HSTPIPIDR[0]_NBUSYBKEC		(1 << 12)
/** UOTGHS_HSTPIPIDR[0]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[0]_SHORTPACKETIEC		(1 << 7)
/** UOTGHS_HSTPIPIDR[0]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[0]_RXSTALLDEC		(1 << 6)
/** UOTGHS_HSTPIPIDR[0]_OVERFIEC Overflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[0]_OVERFIEC		(1 << 5)
/** UOTGHS_HSTPIPIDR[0]_NAKEDEC NAKed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[0]_NAKEDEC		(1 << 4)
/** UOTGHS_HSTPIPIDR[0]_PERREC Pipe Error Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[0]_PERREC		(1 << 3)
/** UOTGHS_HSTPIPIDR[0]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[0]_TXSTPEC		(1 << 2)
/** UOTGHS_HSTPIPIDR[0]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[0]_TXOUTEC		(1 << 1)
/** UOTGHS_HSTPIPIDR[0]_RXINEC Received IN Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[0]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipidr[1] HSTPIPIDR[1] Host Pipe Disable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIDR[1]_PFREEZEC Pipe Freeze Disable **/
#define UOTGHS_HSTPIPIDR[1]_PFREEZEC		(1 << 17)
/** UOTGHS_HSTPIPIDR[1]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define UOTGHS_HSTPIPIDR[1]_PDISHDMAC		(1 << 16)
/** UOTGHS_HSTPIPIDR[1]_FIFOCONC FIFO Control Disable **/
#define UOTGHS_HSTPIPIDR[1]_FIFOCONC		(1 << 14)
/** UOTGHS_HSTPIPIDR[1]_NBUSYBKEC Number of Busy Banks Disable **/
#define UOTGHS_HSTPIPIDR[1]_NBUSYBKEC		(1 << 12)
/** UOTGHS_HSTPIPIDR[1]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[1]_SHORTPACKETIEC		(1 << 7)
/** UOTGHS_HSTPIPIDR[1]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[1]_RXSTALLDEC		(1 << 6)
/** UOTGHS_HSTPIPIDR[1]_OVERFIEC Overflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[1]_OVERFIEC		(1 << 5)
/** UOTGHS_HSTPIPIDR[1]_NAKEDEC NAKed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[1]_NAKEDEC		(1 << 4)
/** UOTGHS_HSTPIPIDR[1]_PERREC Pipe Error Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[1]_PERREC		(1 << 3)
/** UOTGHS_HSTPIPIDR[1]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[1]_TXSTPEC		(1 << 2)
/** UOTGHS_HSTPIPIDR[1]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[1]_TXOUTEC		(1 << 1)
/** UOTGHS_HSTPIPIDR[1]_RXINEC Received IN Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[1]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipidr[2] HSTPIPIDR[2] Host Pipe Disable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIDR[2]_PFREEZEC Pipe Freeze Disable **/
#define UOTGHS_HSTPIPIDR[2]_PFREEZEC		(1 << 17)
/** UOTGHS_HSTPIPIDR[2]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define UOTGHS_HSTPIPIDR[2]_PDISHDMAC		(1 << 16)
/** UOTGHS_HSTPIPIDR[2]_FIFOCONC FIFO Control Disable **/
#define UOTGHS_HSTPIPIDR[2]_FIFOCONC		(1 << 14)
/** UOTGHS_HSTPIPIDR[2]_NBUSYBKEC Number of Busy Banks Disable **/
#define UOTGHS_HSTPIPIDR[2]_NBUSYBKEC		(1 << 12)
/** UOTGHS_HSTPIPIDR[2]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[2]_SHORTPACKETIEC		(1 << 7)
/** UOTGHS_HSTPIPIDR[2]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[2]_RXSTALLDEC		(1 << 6)
/** UOTGHS_HSTPIPIDR[2]_OVERFIEC Overflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[2]_OVERFIEC		(1 << 5)
/** UOTGHS_HSTPIPIDR[2]_NAKEDEC NAKed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[2]_NAKEDEC		(1 << 4)
/** UOTGHS_HSTPIPIDR[2]_PERREC Pipe Error Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[2]_PERREC		(1 << 3)
/** UOTGHS_HSTPIPIDR[2]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[2]_TXSTPEC		(1 << 2)
/** UOTGHS_HSTPIPIDR[2]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[2]_TXOUTEC		(1 << 1)
/** UOTGHS_HSTPIPIDR[2]_RXINEC Received IN Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[2]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipidr[3] HSTPIPIDR[3] Host Pipe Disable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIDR[3]_PFREEZEC Pipe Freeze Disable **/
#define UOTGHS_HSTPIPIDR[3]_PFREEZEC		(1 << 17)
/** UOTGHS_HSTPIPIDR[3]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define UOTGHS_HSTPIPIDR[3]_PDISHDMAC		(1 << 16)
/** UOTGHS_HSTPIPIDR[3]_FIFOCONC FIFO Control Disable **/
#define UOTGHS_HSTPIPIDR[3]_FIFOCONC		(1 << 14)
/** UOTGHS_HSTPIPIDR[3]_NBUSYBKEC Number of Busy Banks Disable **/
#define UOTGHS_HSTPIPIDR[3]_NBUSYBKEC		(1 << 12)
/** UOTGHS_HSTPIPIDR[3]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[3]_SHORTPACKETIEC		(1 << 7)
/** UOTGHS_HSTPIPIDR[3]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[3]_RXSTALLDEC		(1 << 6)
/** UOTGHS_HSTPIPIDR[3]_OVERFIEC Overflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[3]_OVERFIEC		(1 << 5)
/** UOTGHS_HSTPIPIDR[3]_NAKEDEC NAKed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[3]_NAKEDEC		(1 << 4)
/** UOTGHS_HSTPIPIDR[3]_PERREC Pipe Error Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[3]_PERREC		(1 << 3)
/** UOTGHS_HSTPIPIDR[3]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[3]_TXSTPEC		(1 << 2)
/** UOTGHS_HSTPIPIDR[3]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[3]_TXOUTEC		(1 << 1)
/** UOTGHS_HSTPIPIDR[3]_RXINEC Received IN Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[3]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipidr[4] HSTPIPIDR[4] Host Pipe Disable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIDR[4]_PFREEZEC Pipe Freeze Disable **/
#define UOTGHS_HSTPIPIDR[4]_PFREEZEC		(1 << 17)
/** UOTGHS_HSTPIPIDR[4]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define UOTGHS_HSTPIPIDR[4]_PDISHDMAC		(1 << 16)
/** UOTGHS_HSTPIPIDR[4]_FIFOCONC FIFO Control Disable **/
#define UOTGHS_HSTPIPIDR[4]_FIFOCONC		(1 << 14)
/** UOTGHS_HSTPIPIDR[4]_NBUSYBKEC Number of Busy Banks Disable **/
#define UOTGHS_HSTPIPIDR[4]_NBUSYBKEC		(1 << 12)
/** UOTGHS_HSTPIPIDR[4]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[4]_SHORTPACKETIEC		(1 << 7)
/** UOTGHS_HSTPIPIDR[4]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[4]_RXSTALLDEC		(1 << 6)
/** UOTGHS_HSTPIPIDR[4]_OVERFIEC Overflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[4]_OVERFIEC		(1 << 5)
/** UOTGHS_HSTPIPIDR[4]_NAKEDEC NAKed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[4]_NAKEDEC		(1 << 4)
/** UOTGHS_HSTPIPIDR[4]_PERREC Pipe Error Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[4]_PERREC		(1 << 3)
/** UOTGHS_HSTPIPIDR[4]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[4]_TXSTPEC		(1 << 2)
/** UOTGHS_HSTPIPIDR[4]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[4]_TXOUTEC		(1 << 1)
/** UOTGHS_HSTPIPIDR[4]_RXINEC Received IN Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[4]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipidr[5] HSTPIPIDR[5] Host Pipe Disable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIDR[5]_PFREEZEC Pipe Freeze Disable **/
#define UOTGHS_HSTPIPIDR[5]_PFREEZEC		(1 << 17)
/** UOTGHS_HSTPIPIDR[5]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define UOTGHS_HSTPIPIDR[5]_PDISHDMAC		(1 << 16)
/** UOTGHS_HSTPIPIDR[5]_FIFOCONC FIFO Control Disable **/
#define UOTGHS_HSTPIPIDR[5]_FIFOCONC		(1 << 14)
/** UOTGHS_HSTPIPIDR[5]_NBUSYBKEC Number of Busy Banks Disable **/
#define UOTGHS_HSTPIPIDR[5]_NBUSYBKEC		(1 << 12)
/** UOTGHS_HSTPIPIDR[5]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[5]_SHORTPACKETIEC		(1 << 7)
/** UOTGHS_HSTPIPIDR[5]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[5]_RXSTALLDEC		(1 << 6)
/** UOTGHS_HSTPIPIDR[5]_OVERFIEC Overflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[5]_OVERFIEC		(1 << 5)
/** UOTGHS_HSTPIPIDR[5]_NAKEDEC NAKed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[5]_NAKEDEC		(1 << 4)
/** UOTGHS_HSTPIPIDR[5]_PERREC Pipe Error Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[5]_PERREC		(1 << 3)
/** UOTGHS_HSTPIPIDR[5]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[5]_TXSTPEC		(1 << 2)
/** UOTGHS_HSTPIPIDR[5]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[5]_TXOUTEC		(1 << 1)
/** UOTGHS_HSTPIPIDR[5]_RXINEC Received IN Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[5]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipidr[6] HSTPIPIDR[6] Host Pipe Disable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIDR[6]_PFREEZEC Pipe Freeze Disable **/
#define UOTGHS_HSTPIPIDR[6]_PFREEZEC		(1 << 17)
/** UOTGHS_HSTPIPIDR[6]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define UOTGHS_HSTPIPIDR[6]_PDISHDMAC		(1 << 16)
/** UOTGHS_HSTPIPIDR[6]_FIFOCONC FIFO Control Disable **/
#define UOTGHS_HSTPIPIDR[6]_FIFOCONC		(1 << 14)
/** UOTGHS_HSTPIPIDR[6]_NBUSYBKEC Number of Busy Banks Disable **/
#define UOTGHS_HSTPIPIDR[6]_NBUSYBKEC		(1 << 12)
/** UOTGHS_HSTPIPIDR[6]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[6]_SHORTPACKETIEC		(1 << 7)
/** UOTGHS_HSTPIPIDR[6]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[6]_RXSTALLDEC		(1 << 6)
/** UOTGHS_HSTPIPIDR[6]_OVERFIEC Overflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[6]_OVERFIEC		(1 << 5)
/** UOTGHS_HSTPIPIDR[6]_NAKEDEC NAKed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[6]_NAKEDEC		(1 << 4)
/** UOTGHS_HSTPIPIDR[6]_PERREC Pipe Error Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[6]_PERREC		(1 << 3)
/** UOTGHS_HSTPIPIDR[6]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[6]_TXSTPEC		(1 << 2)
/** UOTGHS_HSTPIPIDR[6]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[6]_TXOUTEC		(1 << 1)
/** UOTGHS_HSTPIPIDR[6]_RXINEC Received IN Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[6]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipidr[7] HSTPIPIDR[7] Host Pipe Disable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIDR[7]_PFREEZEC Pipe Freeze Disable **/
#define UOTGHS_HSTPIPIDR[7]_PFREEZEC		(1 << 17)
/** UOTGHS_HSTPIPIDR[7]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define UOTGHS_HSTPIPIDR[7]_PDISHDMAC		(1 << 16)
/** UOTGHS_HSTPIPIDR[7]_FIFOCONC FIFO Control Disable **/
#define UOTGHS_HSTPIPIDR[7]_FIFOCONC		(1 << 14)
/** UOTGHS_HSTPIPIDR[7]_NBUSYBKEC Number of Busy Banks Disable **/
#define UOTGHS_HSTPIPIDR[7]_NBUSYBKEC		(1 << 12)
/** UOTGHS_HSTPIPIDR[7]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[7]_SHORTPACKETIEC		(1 << 7)
/** UOTGHS_HSTPIPIDR[7]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[7]_RXSTALLDEC		(1 << 6)
/** UOTGHS_HSTPIPIDR[7]_OVERFIEC Overflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[7]_OVERFIEC		(1 << 5)
/** UOTGHS_HSTPIPIDR[7]_NAKEDEC NAKed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[7]_NAKEDEC		(1 << 4)
/** UOTGHS_HSTPIPIDR[7]_PERREC Pipe Error Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[7]_PERREC		(1 << 3)
/** UOTGHS_HSTPIPIDR[7]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[7]_TXSTPEC		(1 << 2)
/** UOTGHS_HSTPIPIDR[7]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[7]_TXOUTEC		(1 << 1)
/** UOTGHS_HSTPIPIDR[7]_RXINEC Received IN Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[7]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipidr[8] HSTPIPIDR[8] Host Pipe Disable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIDR[8]_PFREEZEC Pipe Freeze Disable **/
#define UOTGHS_HSTPIPIDR[8]_PFREEZEC		(1 << 17)
/** UOTGHS_HSTPIPIDR[8]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define UOTGHS_HSTPIPIDR[8]_PDISHDMAC		(1 << 16)
/** UOTGHS_HSTPIPIDR[8]_FIFOCONC FIFO Control Disable **/
#define UOTGHS_HSTPIPIDR[8]_FIFOCONC		(1 << 14)
/** UOTGHS_HSTPIPIDR[8]_NBUSYBKEC Number of Busy Banks Disable **/
#define UOTGHS_HSTPIPIDR[8]_NBUSYBKEC		(1 << 12)
/** UOTGHS_HSTPIPIDR[8]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[8]_SHORTPACKETIEC		(1 << 7)
/** UOTGHS_HSTPIPIDR[8]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[8]_RXSTALLDEC		(1 << 6)
/** UOTGHS_HSTPIPIDR[8]_OVERFIEC Overflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[8]_OVERFIEC		(1 << 5)
/** UOTGHS_HSTPIPIDR[8]_NAKEDEC NAKed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[8]_NAKEDEC		(1 << 4)
/** UOTGHS_HSTPIPIDR[8]_PERREC Pipe Error Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[8]_PERREC		(1 << 3)
/** UOTGHS_HSTPIPIDR[8]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[8]_TXSTPEC		(1 << 2)
/** UOTGHS_HSTPIPIDR[8]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[8]_TXOUTEC		(1 << 1)
/** UOTGHS_HSTPIPIDR[8]_RXINEC Received IN Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[8]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipidr[9] HSTPIPIDR[9] Host Pipe Disable Register (n = 0)
@{*/

/** UOTGHS_HSTPIPIDR[9]_PFREEZEC Pipe Freeze Disable **/
#define UOTGHS_HSTPIPIDR[9]_PFREEZEC		(1 << 17)
/** UOTGHS_HSTPIPIDR[9]_PDISHDMAC Pipe Interrupts Disable HDMA Request Disable **/
#define UOTGHS_HSTPIPIDR[9]_PDISHDMAC		(1 << 16)
/** UOTGHS_HSTPIPIDR[9]_FIFOCONC FIFO Control Disable **/
#define UOTGHS_HSTPIPIDR[9]_FIFOCONC		(1 << 14)
/** UOTGHS_HSTPIPIDR[9]_NBUSYBKEC Number of Busy Banks Disable **/
#define UOTGHS_HSTPIPIDR[9]_NBUSYBKEC		(1 << 12)
/** UOTGHS_HSTPIPIDR[9]_SHORTPACKETIEC Short Packet Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[9]_SHORTPACKETIEC		(1 << 7)
/** UOTGHS_HSTPIPIDR[9]_RXSTALLDEC Received STALLed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[9]_RXSTALLDEC		(1 << 6)
/** UOTGHS_HSTPIPIDR[9]_OVERFIEC Overflow Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[9]_OVERFIEC		(1 << 5)
/** UOTGHS_HSTPIPIDR[9]_NAKEDEC NAKed Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[9]_NAKEDEC		(1 << 4)
/** UOTGHS_HSTPIPIDR[9]_PERREC Pipe Error Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[9]_PERREC		(1 << 3)
/** UOTGHS_HSTPIPIDR[9]_TXSTPEC Transmitted SETUP Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[9]_TXSTPEC		(1 << 2)
/** UOTGHS_HSTPIPIDR[9]_TXOUTEC Transmitted OUT Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[9]_TXOUTEC		(1 << 1)
/** UOTGHS_HSTPIPIDR[9]_RXINEC Received IN Data Interrupt Disable **/
#define UOTGHS_HSTPIPIDR[9]_RXINEC		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpipinrq[0] HSTPIPINRQ[0] Host Pipe IN Request Register (n = 0)
@{*/

/** UOTGHS_HSTPIPINRQ[0]_INMODE IN Request Mode **/
#define UOTGHS_HSTPIPINRQ[0]_INMODE		(1 << 8)

#define UOTGHS_HSTPIPINRQ[0]_INRQ_SHIFT		0
#define UOTGHS_HSTPIPINRQ[0]_INRQ_MASK		0xff
/** @defgroup uotghs_hstpipinrq[0]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstpipinrq[1] HSTPIPINRQ[1] Host Pipe IN Request Register (n = 0)
@{*/

/** UOTGHS_HSTPIPINRQ[1]_INMODE IN Request Mode **/
#define UOTGHS_HSTPIPINRQ[1]_INMODE		(1 << 8)

#define UOTGHS_HSTPIPINRQ[1]_INRQ_SHIFT		0
#define UOTGHS_HSTPIPINRQ[1]_INRQ_MASK		0xff
/** @defgroup uotghs_hstpipinrq[1]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstpipinrq[2] HSTPIPINRQ[2] Host Pipe IN Request Register (n = 0)
@{*/

/** UOTGHS_HSTPIPINRQ[2]_INMODE IN Request Mode **/
#define UOTGHS_HSTPIPINRQ[2]_INMODE		(1 << 8)

#define UOTGHS_HSTPIPINRQ[2]_INRQ_SHIFT		0
#define UOTGHS_HSTPIPINRQ[2]_INRQ_MASK		0xff
/** @defgroup uotghs_hstpipinrq[2]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstpipinrq[3] HSTPIPINRQ[3] Host Pipe IN Request Register (n = 0)
@{*/

/** UOTGHS_HSTPIPINRQ[3]_INMODE IN Request Mode **/
#define UOTGHS_HSTPIPINRQ[3]_INMODE		(1 << 8)

#define UOTGHS_HSTPIPINRQ[3]_INRQ_SHIFT		0
#define UOTGHS_HSTPIPINRQ[3]_INRQ_MASK		0xff
/** @defgroup uotghs_hstpipinrq[3]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstpipinrq[4] HSTPIPINRQ[4] Host Pipe IN Request Register (n = 0)
@{*/

/** UOTGHS_HSTPIPINRQ[4]_INMODE IN Request Mode **/
#define UOTGHS_HSTPIPINRQ[4]_INMODE		(1 << 8)

#define UOTGHS_HSTPIPINRQ[4]_INRQ_SHIFT		0
#define UOTGHS_HSTPIPINRQ[4]_INRQ_MASK		0xff
/** @defgroup uotghs_hstpipinrq[4]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstpipinrq[5] HSTPIPINRQ[5] Host Pipe IN Request Register (n = 0)
@{*/

/** UOTGHS_HSTPIPINRQ[5]_INMODE IN Request Mode **/
#define UOTGHS_HSTPIPINRQ[5]_INMODE		(1 << 8)

#define UOTGHS_HSTPIPINRQ[5]_INRQ_SHIFT		0
#define UOTGHS_HSTPIPINRQ[5]_INRQ_MASK		0xff
/** @defgroup uotghs_hstpipinrq[5]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstpipinrq[6] HSTPIPINRQ[6] Host Pipe IN Request Register (n = 0)
@{*/

/** UOTGHS_HSTPIPINRQ[6]_INMODE IN Request Mode **/
#define UOTGHS_HSTPIPINRQ[6]_INMODE		(1 << 8)

#define UOTGHS_HSTPIPINRQ[6]_INRQ_SHIFT		0
#define UOTGHS_HSTPIPINRQ[6]_INRQ_MASK		0xff
/** @defgroup uotghs_hstpipinrq[6]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstpipinrq[7] HSTPIPINRQ[7] Host Pipe IN Request Register (n = 0)
@{*/

/** UOTGHS_HSTPIPINRQ[7]_INMODE IN Request Mode **/
#define UOTGHS_HSTPIPINRQ[7]_INMODE		(1 << 8)

#define UOTGHS_HSTPIPINRQ[7]_INRQ_SHIFT		0
#define UOTGHS_HSTPIPINRQ[7]_INRQ_MASK		0xff
/** @defgroup uotghs_hstpipinrq[7]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstpipinrq[8] HSTPIPINRQ[8] Host Pipe IN Request Register (n = 0)
@{*/

/** UOTGHS_HSTPIPINRQ[8]_INMODE IN Request Mode **/
#define UOTGHS_HSTPIPINRQ[8]_INMODE		(1 << 8)

#define UOTGHS_HSTPIPINRQ[8]_INRQ_SHIFT		0
#define UOTGHS_HSTPIPINRQ[8]_INRQ_MASK		0xff
/** @defgroup uotghs_hstpipinrq[8]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstpipinrq[9] HSTPIPINRQ[9] Host Pipe IN Request Register (n = 0)
@{*/

/** UOTGHS_HSTPIPINRQ[9]_INMODE IN Request Mode **/
#define UOTGHS_HSTPIPINRQ[9]_INMODE		(1 << 8)

#define UOTGHS_HSTPIPINRQ[9]_INRQ_SHIFT		0
#define UOTGHS_HSTPIPINRQ[9]_INRQ_MASK		0xff
/** @defgroup uotghs_hstpipinrq[9]_inrq INRQ IN Request Number before Freeze
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstpiperr[0] HSTPIPERR[0] Host Pipe Error Register (n = 0)
@{*/


#define UOTGHS_HSTPIPERR[0]_COUNTER_SHIFT		5
#define UOTGHS_HSTPIPERR[0]_COUNTER_MASK		0x03
/** @defgroup uotghs_hstpiperr[0]_counter COUNTER Error Counter
@{*/
/**@}*/

/** UOTGHS_HSTPIPERR[0]_CRC16 CRC16 Error **/
#define UOTGHS_HSTPIPERR[0]_CRC16		(1 << 4)
/** UOTGHS_HSTPIPERR[0]_TIMEOUT Time-Out Error **/
#define UOTGHS_HSTPIPERR[0]_TIMEOUT		(1 << 3)
/** UOTGHS_HSTPIPERR[0]_PID PID Error **/
#define UOTGHS_HSTPIPERR[0]_PID		(1 << 2)
/** UOTGHS_HSTPIPERR[0]_DATAPID Data PID Error **/
#define UOTGHS_HSTPIPERR[0]_DATAPID		(1 << 1)
/** UOTGHS_HSTPIPERR[0]_DATATGL Data Toggle Error **/
#define UOTGHS_HSTPIPERR[0]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpiperr[1] HSTPIPERR[1] Host Pipe Error Register (n = 0)
@{*/


#define UOTGHS_HSTPIPERR[1]_COUNTER_SHIFT		5
#define UOTGHS_HSTPIPERR[1]_COUNTER_MASK		0x03
/** @defgroup uotghs_hstpiperr[1]_counter COUNTER Error Counter
@{*/
/**@}*/

/** UOTGHS_HSTPIPERR[1]_CRC16 CRC16 Error **/
#define UOTGHS_HSTPIPERR[1]_CRC16		(1 << 4)
/** UOTGHS_HSTPIPERR[1]_TIMEOUT Time-Out Error **/
#define UOTGHS_HSTPIPERR[1]_TIMEOUT		(1 << 3)
/** UOTGHS_HSTPIPERR[1]_PID PID Error **/
#define UOTGHS_HSTPIPERR[1]_PID		(1 << 2)
/** UOTGHS_HSTPIPERR[1]_DATAPID Data PID Error **/
#define UOTGHS_HSTPIPERR[1]_DATAPID		(1 << 1)
/** UOTGHS_HSTPIPERR[1]_DATATGL Data Toggle Error **/
#define UOTGHS_HSTPIPERR[1]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpiperr[2] HSTPIPERR[2] Host Pipe Error Register (n = 0)
@{*/


#define UOTGHS_HSTPIPERR[2]_COUNTER_SHIFT		5
#define UOTGHS_HSTPIPERR[2]_COUNTER_MASK		0x03
/** @defgroup uotghs_hstpiperr[2]_counter COUNTER Error Counter
@{*/
/**@}*/

/** UOTGHS_HSTPIPERR[2]_CRC16 CRC16 Error **/
#define UOTGHS_HSTPIPERR[2]_CRC16		(1 << 4)
/** UOTGHS_HSTPIPERR[2]_TIMEOUT Time-Out Error **/
#define UOTGHS_HSTPIPERR[2]_TIMEOUT		(1 << 3)
/** UOTGHS_HSTPIPERR[2]_PID PID Error **/
#define UOTGHS_HSTPIPERR[2]_PID		(1 << 2)
/** UOTGHS_HSTPIPERR[2]_DATAPID Data PID Error **/
#define UOTGHS_HSTPIPERR[2]_DATAPID		(1 << 1)
/** UOTGHS_HSTPIPERR[2]_DATATGL Data Toggle Error **/
#define UOTGHS_HSTPIPERR[2]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpiperr[3] HSTPIPERR[3] Host Pipe Error Register (n = 0)
@{*/


#define UOTGHS_HSTPIPERR[3]_COUNTER_SHIFT		5
#define UOTGHS_HSTPIPERR[3]_COUNTER_MASK		0x03
/** @defgroup uotghs_hstpiperr[3]_counter COUNTER Error Counter
@{*/
/**@}*/

/** UOTGHS_HSTPIPERR[3]_CRC16 CRC16 Error **/
#define UOTGHS_HSTPIPERR[3]_CRC16		(1 << 4)
/** UOTGHS_HSTPIPERR[3]_TIMEOUT Time-Out Error **/
#define UOTGHS_HSTPIPERR[3]_TIMEOUT		(1 << 3)
/** UOTGHS_HSTPIPERR[3]_PID PID Error **/
#define UOTGHS_HSTPIPERR[3]_PID		(1 << 2)
/** UOTGHS_HSTPIPERR[3]_DATAPID Data PID Error **/
#define UOTGHS_HSTPIPERR[3]_DATAPID		(1 << 1)
/** UOTGHS_HSTPIPERR[3]_DATATGL Data Toggle Error **/
#define UOTGHS_HSTPIPERR[3]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpiperr[4] HSTPIPERR[4] Host Pipe Error Register (n = 0)
@{*/


#define UOTGHS_HSTPIPERR[4]_COUNTER_SHIFT		5
#define UOTGHS_HSTPIPERR[4]_COUNTER_MASK		0x03
/** @defgroup uotghs_hstpiperr[4]_counter COUNTER Error Counter
@{*/
/**@}*/

/** UOTGHS_HSTPIPERR[4]_CRC16 CRC16 Error **/
#define UOTGHS_HSTPIPERR[4]_CRC16		(1 << 4)
/** UOTGHS_HSTPIPERR[4]_TIMEOUT Time-Out Error **/
#define UOTGHS_HSTPIPERR[4]_TIMEOUT		(1 << 3)
/** UOTGHS_HSTPIPERR[4]_PID PID Error **/
#define UOTGHS_HSTPIPERR[4]_PID		(1 << 2)
/** UOTGHS_HSTPIPERR[4]_DATAPID Data PID Error **/
#define UOTGHS_HSTPIPERR[4]_DATAPID		(1 << 1)
/** UOTGHS_HSTPIPERR[4]_DATATGL Data Toggle Error **/
#define UOTGHS_HSTPIPERR[4]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpiperr[5] HSTPIPERR[5] Host Pipe Error Register (n = 0)
@{*/


#define UOTGHS_HSTPIPERR[5]_COUNTER_SHIFT		5
#define UOTGHS_HSTPIPERR[5]_COUNTER_MASK		0x03
/** @defgroup uotghs_hstpiperr[5]_counter COUNTER Error Counter
@{*/
/**@}*/

/** UOTGHS_HSTPIPERR[5]_CRC16 CRC16 Error **/
#define UOTGHS_HSTPIPERR[5]_CRC16		(1 << 4)
/** UOTGHS_HSTPIPERR[5]_TIMEOUT Time-Out Error **/
#define UOTGHS_HSTPIPERR[5]_TIMEOUT		(1 << 3)
/** UOTGHS_HSTPIPERR[5]_PID PID Error **/
#define UOTGHS_HSTPIPERR[5]_PID		(1 << 2)
/** UOTGHS_HSTPIPERR[5]_DATAPID Data PID Error **/
#define UOTGHS_HSTPIPERR[5]_DATAPID		(1 << 1)
/** UOTGHS_HSTPIPERR[5]_DATATGL Data Toggle Error **/
#define UOTGHS_HSTPIPERR[5]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpiperr[6] HSTPIPERR[6] Host Pipe Error Register (n = 0)
@{*/


#define UOTGHS_HSTPIPERR[6]_COUNTER_SHIFT		5
#define UOTGHS_HSTPIPERR[6]_COUNTER_MASK		0x03
/** @defgroup uotghs_hstpiperr[6]_counter COUNTER Error Counter
@{*/
/**@}*/

/** UOTGHS_HSTPIPERR[6]_CRC16 CRC16 Error **/
#define UOTGHS_HSTPIPERR[6]_CRC16		(1 << 4)
/** UOTGHS_HSTPIPERR[6]_TIMEOUT Time-Out Error **/
#define UOTGHS_HSTPIPERR[6]_TIMEOUT		(1 << 3)
/** UOTGHS_HSTPIPERR[6]_PID PID Error **/
#define UOTGHS_HSTPIPERR[6]_PID		(1 << 2)
/** UOTGHS_HSTPIPERR[6]_DATAPID Data PID Error **/
#define UOTGHS_HSTPIPERR[6]_DATAPID		(1 << 1)
/** UOTGHS_HSTPIPERR[6]_DATATGL Data Toggle Error **/
#define UOTGHS_HSTPIPERR[6]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpiperr[7] HSTPIPERR[7] Host Pipe Error Register (n = 0)
@{*/


#define UOTGHS_HSTPIPERR[7]_COUNTER_SHIFT		5
#define UOTGHS_HSTPIPERR[7]_COUNTER_MASK		0x03
/** @defgroup uotghs_hstpiperr[7]_counter COUNTER Error Counter
@{*/
/**@}*/

/** UOTGHS_HSTPIPERR[7]_CRC16 CRC16 Error **/
#define UOTGHS_HSTPIPERR[7]_CRC16		(1 << 4)
/** UOTGHS_HSTPIPERR[7]_TIMEOUT Time-Out Error **/
#define UOTGHS_HSTPIPERR[7]_TIMEOUT		(1 << 3)
/** UOTGHS_HSTPIPERR[7]_PID PID Error **/
#define UOTGHS_HSTPIPERR[7]_PID		(1 << 2)
/** UOTGHS_HSTPIPERR[7]_DATAPID Data PID Error **/
#define UOTGHS_HSTPIPERR[7]_DATAPID		(1 << 1)
/** UOTGHS_HSTPIPERR[7]_DATATGL Data Toggle Error **/
#define UOTGHS_HSTPIPERR[7]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpiperr[8] HSTPIPERR[8] Host Pipe Error Register (n = 0)
@{*/


#define UOTGHS_HSTPIPERR[8]_COUNTER_SHIFT		5
#define UOTGHS_HSTPIPERR[8]_COUNTER_MASK		0x03
/** @defgroup uotghs_hstpiperr[8]_counter COUNTER Error Counter
@{*/
/**@}*/

/** UOTGHS_HSTPIPERR[8]_CRC16 CRC16 Error **/
#define UOTGHS_HSTPIPERR[8]_CRC16		(1 << 4)
/** UOTGHS_HSTPIPERR[8]_TIMEOUT Time-Out Error **/
#define UOTGHS_HSTPIPERR[8]_TIMEOUT		(1 << 3)
/** UOTGHS_HSTPIPERR[8]_PID PID Error **/
#define UOTGHS_HSTPIPERR[8]_PID		(1 << 2)
/** UOTGHS_HSTPIPERR[8]_DATAPID Data PID Error **/
#define UOTGHS_HSTPIPERR[8]_DATAPID		(1 << 1)
/** UOTGHS_HSTPIPERR[8]_DATATGL Data Toggle Error **/
#define UOTGHS_HSTPIPERR[8]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstpiperr[9] HSTPIPERR[9] Host Pipe Error Register (n = 0)
@{*/


#define UOTGHS_HSTPIPERR[9]_COUNTER_SHIFT		5
#define UOTGHS_HSTPIPERR[9]_COUNTER_MASK		0x03
/** @defgroup uotghs_hstpiperr[9]_counter COUNTER Error Counter
@{*/
/**@}*/

/** UOTGHS_HSTPIPERR[9]_CRC16 CRC16 Error **/
#define UOTGHS_HSTPIPERR[9]_CRC16		(1 << 4)
/** UOTGHS_HSTPIPERR[9]_TIMEOUT Time-Out Error **/
#define UOTGHS_HSTPIPERR[9]_TIMEOUT		(1 << 3)
/** UOTGHS_HSTPIPERR[9]_PID PID Error **/
#define UOTGHS_HSTPIPERR[9]_PID		(1 << 2)
/** UOTGHS_HSTPIPERR[9]_DATAPID Data PID Error **/
#define UOTGHS_HSTPIPERR[9]_DATAPID		(1 << 1)
/** UOTGHS_HSTPIPERR[9]_DATATGL Data Toggle Error **/
#define UOTGHS_HSTPIPERR[9]_DATATGL		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmanxtdsc1 HSTDMANXTDSC1 Host DMA Channel Next Descriptor Address Register (n = 1)
@{*/


#define UOTGHS_HSTDMANXTDSC1_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_HSTDMANXTDSC1_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmanxtdsc1_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmaaddress1 HSTDMAADDRESS1 Host DMA Channel Address Register (n = 1)
@{*/


#define UOTGHS_HSTDMAADDRESS1_BUFF_ADD_SHIFT		0
#define UOTGHS_HSTDMAADDRESS1_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmaaddress1_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmacontrol1 HSTDMACONTROL1 Host DMA Channel Control Register (n = 1)
@{*/


#define UOTGHS_HSTDMACONTROL1_BUFF_LENGTH_SHIFT		16
#define UOTGHS_HSTDMACONTROL1_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_hstdmacontrol1_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_HSTDMACONTROL1_BURST_LCK Burst Lock Enable **/
#define UOTGHS_HSTDMACONTROL1_BURST_LCK		(1 << 7)
/** UOTGHS_HSTDMACONTROL1_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL1_DESC_LD_IT		(1 << 6)
/** UOTGHS_HSTDMACONTROL1_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL1_END_BUFFIT		(1 << 5)
/** UOTGHS_HSTDMACONTROL1_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL1_END_TR_IT		(1 << 4)
/** UOTGHS_HSTDMACONTROL1_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_HSTDMACONTROL1_END_B_EN		(1 << 3)
/** UOTGHS_HSTDMACONTROL1_END_TR_EN End of Transfer Enable (Control) **/
#define UOTGHS_HSTDMACONTROL1_END_TR_EN		(1 << 2)
/** UOTGHS_HSTDMACONTROL1_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_HSTDMACONTROL1_LDNXT_DSC		(1 << 1)
/** UOTGHS_HSTDMACONTROL1_CHANN_ENB Channel Enable Command **/
#define UOTGHS_HSTDMACONTROL1_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmastatus1 HSTDMASTATUS1 Host DMA Channel Status Register (n = 1)
@{*/


#define UOTGHS_HSTDMASTATUS1_BUFF_COUNT_SHIFT		16
#define UOTGHS_HSTDMASTATUS1_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_hstdmastatus1_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTDMASTATUS1_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_HSTDMASTATUS1_DESC_LDST		(1 << 6)
/** UOTGHS_HSTDMASTATUS1_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_HSTDMASTATUS1_END_BF_ST		(1 << 5)
/** UOTGHS_HSTDMASTATUS1_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_HSTDMASTATUS1_END_TR_ST		(1 << 4)
/** UOTGHS_HSTDMASTATUS1_CHANN_ACT Channel Active Status **/
#define UOTGHS_HSTDMASTATUS1_CHANN_ACT		(1 << 1)
/** UOTGHS_HSTDMASTATUS1_CHANN_ENB Channel Enable Status **/
#define UOTGHS_HSTDMASTATUS1_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmanxtdsc2 HSTDMANXTDSC2 Host DMA Channel Next Descriptor Address Register (n = 2)
@{*/


#define UOTGHS_HSTDMANXTDSC2_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_HSTDMANXTDSC2_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmanxtdsc2_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmaaddress2 HSTDMAADDRESS2 Host DMA Channel Address Register (n = 2)
@{*/


#define UOTGHS_HSTDMAADDRESS2_BUFF_ADD_SHIFT		0
#define UOTGHS_HSTDMAADDRESS2_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmaaddress2_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmacontrol2 HSTDMACONTROL2 Host DMA Channel Control Register (n = 2)
@{*/


#define UOTGHS_HSTDMACONTROL2_BUFF_LENGTH_SHIFT		16
#define UOTGHS_HSTDMACONTROL2_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_hstdmacontrol2_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_HSTDMACONTROL2_BURST_LCK Burst Lock Enable **/
#define UOTGHS_HSTDMACONTROL2_BURST_LCK		(1 << 7)
/** UOTGHS_HSTDMACONTROL2_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL2_DESC_LD_IT		(1 << 6)
/** UOTGHS_HSTDMACONTROL2_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL2_END_BUFFIT		(1 << 5)
/** UOTGHS_HSTDMACONTROL2_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL2_END_TR_IT		(1 << 4)
/** UOTGHS_HSTDMACONTROL2_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_HSTDMACONTROL2_END_B_EN		(1 << 3)
/** UOTGHS_HSTDMACONTROL2_END_TR_EN End of Transfer Enable (Control) **/
#define UOTGHS_HSTDMACONTROL2_END_TR_EN		(1 << 2)
/** UOTGHS_HSTDMACONTROL2_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_HSTDMACONTROL2_LDNXT_DSC		(1 << 1)
/** UOTGHS_HSTDMACONTROL2_CHANN_ENB Channel Enable Command **/
#define UOTGHS_HSTDMACONTROL2_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmastatus2 HSTDMASTATUS2 Host DMA Channel Status Register (n = 2)
@{*/


#define UOTGHS_HSTDMASTATUS2_BUFF_COUNT_SHIFT		16
#define UOTGHS_HSTDMASTATUS2_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_hstdmastatus2_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTDMASTATUS2_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_HSTDMASTATUS2_DESC_LDST		(1 << 6)
/** UOTGHS_HSTDMASTATUS2_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_HSTDMASTATUS2_END_BF_ST		(1 << 5)
/** UOTGHS_HSTDMASTATUS2_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_HSTDMASTATUS2_END_TR_ST		(1 << 4)
/** UOTGHS_HSTDMASTATUS2_CHANN_ACT Channel Active Status **/
#define UOTGHS_HSTDMASTATUS2_CHANN_ACT		(1 << 1)
/** UOTGHS_HSTDMASTATUS2_CHANN_ENB Channel Enable Status **/
#define UOTGHS_HSTDMASTATUS2_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmanxtdsc3 HSTDMANXTDSC3 Host DMA Channel Next Descriptor Address Register (n = 3)
@{*/


#define UOTGHS_HSTDMANXTDSC3_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_HSTDMANXTDSC3_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmanxtdsc3_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmaaddress3 HSTDMAADDRESS3 Host DMA Channel Address Register (n = 3)
@{*/


#define UOTGHS_HSTDMAADDRESS3_BUFF_ADD_SHIFT		0
#define UOTGHS_HSTDMAADDRESS3_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmaaddress3_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmacontrol3 HSTDMACONTROL3 Host DMA Channel Control Register (n = 3)
@{*/


#define UOTGHS_HSTDMACONTROL3_BUFF_LENGTH_SHIFT		16
#define UOTGHS_HSTDMACONTROL3_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_hstdmacontrol3_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_HSTDMACONTROL3_BURST_LCK Burst Lock Enable **/
#define UOTGHS_HSTDMACONTROL3_BURST_LCK		(1 << 7)
/** UOTGHS_HSTDMACONTROL3_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL3_DESC_LD_IT		(1 << 6)
/** UOTGHS_HSTDMACONTROL3_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL3_END_BUFFIT		(1 << 5)
/** UOTGHS_HSTDMACONTROL3_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL3_END_TR_IT		(1 << 4)
/** UOTGHS_HSTDMACONTROL3_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_HSTDMACONTROL3_END_B_EN		(1 << 3)
/** UOTGHS_HSTDMACONTROL3_END_TR_EN End of Transfer Enable (Control) **/
#define UOTGHS_HSTDMACONTROL3_END_TR_EN		(1 << 2)
/** UOTGHS_HSTDMACONTROL3_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_HSTDMACONTROL3_LDNXT_DSC		(1 << 1)
/** UOTGHS_HSTDMACONTROL3_CHANN_ENB Channel Enable Command **/
#define UOTGHS_HSTDMACONTROL3_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmastatus3 HSTDMASTATUS3 Host DMA Channel Status Register (n = 3)
@{*/


#define UOTGHS_HSTDMASTATUS3_BUFF_COUNT_SHIFT		16
#define UOTGHS_HSTDMASTATUS3_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_hstdmastatus3_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTDMASTATUS3_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_HSTDMASTATUS3_DESC_LDST		(1 << 6)
/** UOTGHS_HSTDMASTATUS3_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_HSTDMASTATUS3_END_BF_ST		(1 << 5)
/** UOTGHS_HSTDMASTATUS3_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_HSTDMASTATUS3_END_TR_ST		(1 << 4)
/** UOTGHS_HSTDMASTATUS3_CHANN_ACT Channel Active Status **/
#define UOTGHS_HSTDMASTATUS3_CHANN_ACT		(1 << 1)
/** UOTGHS_HSTDMASTATUS3_CHANN_ENB Channel Enable Status **/
#define UOTGHS_HSTDMASTATUS3_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmanxtdsc4 HSTDMANXTDSC4 Host DMA Channel Next Descriptor Address Register (n = 4)
@{*/


#define UOTGHS_HSTDMANXTDSC4_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_HSTDMANXTDSC4_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmanxtdsc4_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmaaddress4 HSTDMAADDRESS4 Host DMA Channel Address Register (n = 4)
@{*/


#define UOTGHS_HSTDMAADDRESS4_BUFF_ADD_SHIFT		0
#define UOTGHS_HSTDMAADDRESS4_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmaaddress4_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmacontrol4 HSTDMACONTROL4 Host DMA Channel Control Register (n = 4)
@{*/


#define UOTGHS_HSTDMACONTROL4_BUFF_LENGTH_SHIFT		16
#define UOTGHS_HSTDMACONTROL4_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_hstdmacontrol4_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_HSTDMACONTROL4_BURST_LCK Burst Lock Enable **/
#define UOTGHS_HSTDMACONTROL4_BURST_LCK		(1 << 7)
/** UOTGHS_HSTDMACONTROL4_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL4_DESC_LD_IT		(1 << 6)
/** UOTGHS_HSTDMACONTROL4_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL4_END_BUFFIT		(1 << 5)
/** UOTGHS_HSTDMACONTROL4_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL4_END_TR_IT		(1 << 4)
/** UOTGHS_HSTDMACONTROL4_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_HSTDMACONTROL4_END_B_EN		(1 << 3)
/** UOTGHS_HSTDMACONTROL4_END_TR_EN End of Transfer Enable (Control) **/
#define UOTGHS_HSTDMACONTROL4_END_TR_EN		(1 << 2)
/** UOTGHS_HSTDMACONTROL4_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_HSTDMACONTROL4_LDNXT_DSC		(1 << 1)
/** UOTGHS_HSTDMACONTROL4_CHANN_ENB Channel Enable Command **/
#define UOTGHS_HSTDMACONTROL4_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmastatus4 HSTDMASTATUS4 Host DMA Channel Status Register (n = 4)
@{*/


#define UOTGHS_HSTDMASTATUS4_BUFF_COUNT_SHIFT		16
#define UOTGHS_HSTDMASTATUS4_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_hstdmastatus4_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTDMASTATUS4_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_HSTDMASTATUS4_DESC_LDST		(1 << 6)
/** UOTGHS_HSTDMASTATUS4_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_HSTDMASTATUS4_END_BF_ST		(1 << 5)
/** UOTGHS_HSTDMASTATUS4_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_HSTDMASTATUS4_END_TR_ST		(1 << 4)
/** UOTGHS_HSTDMASTATUS4_CHANN_ACT Channel Active Status **/
#define UOTGHS_HSTDMASTATUS4_CHANN_ACT		(1 << 1)
/** UOTGHS_HSTDMASTATUS4_CHANN_ENB Channel Enable Status **/
#define UOTGHS_HSTDMASTATUS4_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmanxtdsc5 HSTDMANXTDSC5 Host DMA Channel Next Descriptor Address Register (n = 5)
@{*/


#define UOTGHS_HSTDMANXTDSC5_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_HSTDMANXTDSC5_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmanxtdsc5_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmaaddress5 HSTDMAADDRESS5 Host DMA Channel Address Register (n = 5)
@{*/


#define UOTGHS_HSTDMAADDRESS5_BUFF_ADD_SHIFT		0
#define UOTGHS_HSTDMAADDRESS5_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmaaddress5_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmacontrol5 HSTDMACONTROL5 Host DMA Channel Control Register (n = 5)
@{*/


#define UOTGHS_HSTDMACONTROL5_BUFF_LENGTH_SHIFT		16
#define UOTGHS_HSTDMACONTROL5_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_hstdmacontrol5_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_HSTDMACONTROL5_BURST_LCK Burst Lock Enable **/
#define UOTGHS_HSTDMACONTROL5_BURST_LCK		(1 << 7)
/** UOTGHS_HSTDMACONTROL5_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL5_DESC_LD_IT		(1 << 6)
/** UOTGHS_HSTDMACONTROL5_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL5_END_BUFFIT		(1 << 5)
/** UOTGHS_HSTDMACONTROL5_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL5_END_TR_IT		(1 << 4)
/** UOTGHS_HSTDMACONTROL5_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_HSTDMACONTROL5_END_B_EN		(1 << 3)
/** UOTGHS_HSTDMACONTROL5_END_TR_EN End of Transfer Enable (Control) **/
#define UOTGHS_HSTDMACONTROL5_END_TR_EN		(1 << 2)
/** UOTGHS_HSTDMACONTROL5_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_HSTDMACONTROL5_LDNXT_DSC		(1 << 1)
/** UOTGHS_HSTDMACONTROL5_CHANN_ENB Channel Enable Command **/
#define UOTGHS_HSTDMACONTROL5_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmastatus5 HSTDMASTATUS5 Host DMA Channel Status Register (n = 5)
@{*/


#define UOTGHS_HSTDMASTATUS5_BUFF_COUNT_SHIFT		16
#define UOTGHS_HSTDMASTATUS5_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_hstdmastatus5_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTDMASTATUS5_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_HSTDMASTATUS5_DESC_LDST		(1 << 6)
/** UOTGHS_HSTDMASTATUS5_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_HSTDMASTATUS5_END_BF_ST		(1 << 5)
/** UOTGHS_HSTDMASTATUS5_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_HSTDMASTATUS5_END_TR_ST		(1 << 4)
/** UOTGHS_HSTDMASTATUS5_CHANN_ACT Channel Active Status **/
#define UOTGHS_HSTDMASTATUS5_CHANN_ACT		(1 << 1)
/** UOTGHS_HSTDMASTATUS5_CHANN_ENB Channel Enable Status **/
#define UOTGHS_HSTDMASTATUS5_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmanxtdsc6 HSTDMANXTDSC6 Host DMA Channel Next Descriptor Address Register (n = 6)
@{*/


#define UOTGHS_HSTDMANXTDSC6_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_HSTDMANXTDSC6_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmanxtdsc6_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmaaddress6 HSTDMAADDRESS6 Host DMA Channel Address Register (n = 6)
@{*/


#define UOTGHS_HSTDMAADDRESS6_BUFF_ADD_SHIFT		0
#define UOTGHS_HSTDMAADDRESS6_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmaaddress6_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmacontrol6 HSTDMACONTROL6 Host DMA Channel Control Register (n = 6)
@{*/


#define UOTGHS_HSTDMACONTROL6_BUFF_LENGTH_SHIFT		16
#define UOTGHS_HSTDMACONTROL6_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_hstdmacontrol6_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_HSTDMACONTROL6_BURST_LCK Burst Lock Enable **/
#define UOTGHS_HSTDMACONTROL6_BURST_LCK		(1 << 7)
/** UOTGHS_HSTDMACONTROL6_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL6_DESC_LD_IT		(1 << 6)
/** UOTGHS_HSTDMACONTROL6_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL6_END_BUFFIT		(1 << 5)
/** UOTGHS_HSTDMACONTROL6_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL6_END_TR_IT		(1 << 4)
/** UOTGHS_HSTDMACONTROL6_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_HSTDMACONTROL6_END_B_EN		(1 << 3)
/** UOTGHS_HSTDMACONTROL6_END_TR_EN End of Transfer Enable (Control) **/
#define UOTGHS_HSTDMACONTROL6_END_TR_EN		(1 << 2)
/** UOTGHS_HSTDMACONTROL6_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_HSTDMACONTROL6_LDNXT_DSC		(1 << 1)
/** UOTGHS_HSTDMACONTROL6_CHANN_ENB Channel Enable Command **/
#define UOTGHS_HSTDMACONTROL6_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmastatus6 HSTDMASTATUS6 Host DMA Channel Status Register (n = 6)
@{*/


#define UOTGHS_HSTDMASTATUS6_BUFF_COUNT_SHIFT		16
#define UOTGHS_HSTDMASTATUS6_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_hstdmastatus6_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTDMASTATUS6_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_HSTDMASTATUS6_DESC_LDST		(1 << 6)
/** UOTGHS_HSTDMASTATUS6_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_HSTDMASTATUS6_END_BF_ST		(1 << 5)
/** UOTGHS_HSTDMASTATUS6_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_HSTDMASTATUS6_END_TR_ST		(1 << 4)
/** UOTGHS_HSTDMASTATUS6_CHANN_ACT Channel Active Status **/
#define UOTGHS_HSTDMASTATUS6_CHANN_ACT		(1 << 1)
/** UOTGHS_HSTDMASTATUS6_CHANN_ENB Channel Enable Status **/
#define UOTGHS_HSTDMASTATUS6_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmanxtdsc7 HSTDMANXTDSC7 Host DMA Channel Next Descriptor Address Register (n = 7)
@{*/


#define UOTGHS_HSTDMANXTDSC7_NXT_DSC_ADD_SHIFT		0
#define UOTGHS_HSTDMANXTDSC7_NXT_DSC_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmanxtdsc7_nxt_dsc_add NXTDSCADD Next Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmaaddress7 HSTDMAADDRESS7 Host DMA Channel Address Register (n = 7)
@{*/


#define UOTGHS_HSTDMAADDRESS7_BUFF_ADD_SHIFT		0
#define UOTGHS_HSTDMAADDRESS7_BUFF_ADD_MASK		0xffffffff
/** @defgroup uotghs_hstdmaaddress7_buff_add BUFFADD Buffer Address
@{*/
/**@}*/


/**@}*/

/** @defgroup uotghs_hstdmacontrol7 HSTDMACONTROL7 Host DMA Channel Control Register (n = 7)
@{*/


#define UOTGHS_HSTDMACONTROL7_BUFF_LENGTH_SHIFT		16
#define UOTGHS_HSTDMACONTROL7_BUFF_LENGTH_MASK		0xffff
/** @defgroup uotghs_hstdmacontrol7_buff_length BUFFLENGTH Buffer Byte Length (Write-only)
@{*/
/**@}*/

/** UOTGHS_HSTDMACONTROL7_BURST_LCK Burst Lock Enable **/
#define UOTGHS_HSTDMACONTROL7_BURST_LCK		(1 << 7)
/** UOTGHS_HSTDMACONTROL7_DESC_LD_IT Descriptor Loaded Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL7_DESC_LD_IT		(1 << 6)
/** UOTGHS_HSTDMACONTROL7_END_BUFFIT End of Buffer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL7_END_BUFFIT		(1 << 5)
/** UOTGHS_HSTDMACONTROL7_END_TR_IT End of Transfer Interrupt Enable **/
#define UOTGHS_HSTDMACONTROL7_END_TR_IT		(1 << 4)
/** UOTGHS_HSTDMACONTROL7_END_B_EN End of Buffer Enable Control **/
#define UOTGHS_HSTDMACONTROL7_END_B_EN		(1 << 3)
/** UOTGHS_HSTDMACONTROL7_END_TR_EN End of Transfer Enable (Control) **/
#define UOTGHS_HSTDMACONTROL7_END_TR_EN		(1 << 2)
/** UOTGHS_HSTDMACONTROL7_LDNXT_DSC Load Next Channel Transfer Descriptor Enable Command **/
#define UOTGHS_HSTDMACONTROL7_LDNXT_DSC		(1 << 1)
/** UOTGHS_HSTDMACONTROL7_CHANN_ENB Channel Enable Command **/
#define UOTGHS_HSTDMACONTROL7_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_hstdmastatus7 HSTDMASTATUS7 Host DMA Channel Status Register (n = 7)
@{*/


#define UOTGHS_HSTDMASTATUS7_BUFF_COUNT_SHIFT		16
#define UOTGHS_HSTDMASTATUS7_BUFF_COUNT_MASK		0xffff
/** @defgroup uotghs_hstdmastatus7_buff_count BUFFCOUNT Buffer Byte Count
@{*/
/**@}*/

/** UOTGHS_HSTDMASTATUS7_DESC_LDST Descriptor Loaded Status **/
#define UOTGHS_HSTDMASTATUS7_DESC_LDST		(1 << 6)
/** UOTGHS_HSTDMASTATUS7_END_BF_ST End of Channel Buffer Status **/
#define UOTGHS_HSTDMASTATUS7_END_BF_ST		(1 << 5)
/** UOTGHS_HSTDMASTATUS7_END_TR_ST End of Channel Transfer Status **/
#define UOTGHS_HSTDMASTATUS7_END_TR_ST		(1 << 4)
/** UOTGHS_HSTDMASTATUS7_CHANN_ACT Channel Active Status **/
#define UOTGHS_HSTDMASTATUS7_CHANN_ACT		(1 << 1)
/** UOTGHS_HSTDMASTATUS7_CHANN_ENB Channel Enable Status **/
#define UOTGHS_HSTDMASTATUS7_CHANN_ENB		(1 << 0)

/**@}*/

/** @defgroup uotghs_ctrl CTRL General Control Register
@{*/

/** UOTGHS_CTRL_UIMOD UOTGHS Mode **/
#define UOTGHS_CTRL_UIMOD		(1 << 25)
/** UOTGHS_CTRL_UIDE UOTGID Pin Enable **/
#define UOTGHS_CTRL_UIDE		(1 << 24)
/** UOTGHS_CTRL_UNLOCK Timer Access Unlock **/
#define UOTGHS_CTRL_UNLOCK		(1 << 22)

#define UOTGHS_CTRL_TIMPAGE_SHIFT		20
#define UOTGHS_CTRL_TIMPAGE_MASK		0x03
/** @defgroup uotghs_ctrl_timpage TIMPAGE Timer Page
@{*/
/**@}*/


#define UOTGHS_CTRL_TIMVALUE_SHIFT		16
#define UOTGHS_CTRL_TIMVALUE_MASK		0x03
/** @defgroup uotghs_ctrl_timvalue TIMVALUE Timer Value
@{*/
/**@}*/

/** UOTGHS_CTRL_USBE UOTGHS Enable **/
#define UOTGHS_CTRL_USBE		(1 << 15)
/** UOTGHS_CTRL_FRZCLK Freeze USB Clock **/
#define UOTGHS_CTRL_FRZCLK		(1 << 14)
/** UOTGHS_CTRL_VBUSPO VBus Polarity Off **/
#define UOTGHS_CTRL_VBUSPO		(1 << 13)
/** UOTGHS_CTRL_OTGPADE OTG Pad Enable **/
#define UOTGHS_CTRL_OTGPADE		(1 << 12)
/** UOTGHS_CTRL_HNPREQ HNP Request **/
#define UOTGHS_CTRL_HNPREQ		(1 << 11)
/** UOTGHS_CTRL_SRPREQ SRP Request **/
#define UOTGHS_CTRL_SRPREQ		(1 << 10)
/** UOTGHS_CTRL_SRPSEL SRP Selection **/
#define UOTGHS_CTRL_SRPSEL		(1 << 9)
/** UOTGHS_CTRL_VBUSHWC VBus Hardware Control **/
#define UOTGHS_CTRL_VBUSHWC		(1 << 8)
/** UOTGHS_CTRL_STOE Suspend Time-Out Interrupt Enable **/
#define UOTGHS_CTRL_STOE		(1 << 7)
/** UOTGHS_CTRL_HNPERRE HNP Error Interrupt Enable **/
#define UOTGHS_CTRL_HNPERRE		(1 << 6)
/** UOTGHS_CTRL_ROLEEXE Role Exchange Interrupt Enable **/
#define UOTGHS_CTRL_ROLEEXE		(1 << 5)
/** UOTGHS_CTRL_BCERRE B-Connection Error Interrupt Enable **/
#define UOTGHS_CTRL_BCERRE		(1 << 4)
/** UOTGHS_CTRL_VBERRE VBus Error Interrupt Enable **/
#define UOTGHS_CTRL_VBERRE		(1 << 3)
/** UOTGHS_CTRL_SRPE SRP Interrupt Enable **/
#define UOTGHS_CTRL_SRPE		(1 << 2)
/** UOTGHS_CTRL_VBUSTE VBus Transition Interrupt Enable **/
#define UOTGHS_CTRL_VBUSTE		(1 << 1)
/** UOTGHS_CTRL_IDTE ID Transition Interrupt Enable **/
#define UOTGHS_CTRL_IDTE		(1 << 0)

/**@}*/

/** @defgroup uotghs_sr SR General Status Register
@{*/

/** UOTGHS_SR_CLKUSABLE UTMI Clock Usable **/
#define UOTGHS_SR_CLKUSABLE		(1 << 14)

#define UOTGHS_SR_SPEED_SHIFT		12
#define UOTGHS_SR_SPEED_MASK		0x03
/** @defgroup uotghs_sr_speed SPEED Speed Status
@{*/
/**@}*/

/** UOTGHS_SR_VBUS VBus Level **/
#define UOTGHS_SR_VBUS		(1 << 11)
/** UOTGHS_SR_ID UOTGID Pin State **/
#define UOTGHS_SR_ID		(1 << 10)
/** UOTGHS_SR_VBUSRQ VBus Request **/
#define UOTGHS_SR_VBUSRQ		(1 << 9)
/** UOTGHS_SR_STOI Suspend Time-Out Interrupt **/
#define UOTGHS_SR_STOI		(1 << 7)
/** UOTGHS_SR_HNPERRI HNP Error Interrupt **/
#define UOTGHS_SR_HNPERRI		(1 << 6)
/** UOTGHS_SR_ROLEEXI Role Exchange Interrupt **/
#define UOTGHS_SR_ROLEEXI		(1 << 5)
/** UOTGHS_SR_BCERRI B-Connection Error Interrupt **/
#define UOTGHS_SR_BCERRI		(1 << 4)
/** UOTGHS_SR_VBERRI VBus Error Interrupt **/
#define UOTGHS_SR_VBERRI		(1 << 3)
/** UOTGHS_SR_SRPI SRP Interrupt **/
#define UOTGHS_SR_SRPI		(1 << 2)
/** UOTGHS_SR_VBUSTI VBus Transition Interrupt **/
#define UOTGHS_SR_VBUSTI		(1 << 1)
/** UOTGHS_SR_IDTI ID Transition Interrupt **/
#define UOTGHS_SR_IDTI		(1 << 0)

/**@}*/

/** @defgroup uotghs_scr SCR General Status Clear Register
@{*/

/** UOTGHS_SCR_VBUSRQC VBus Request Clear **/
#define UOTGHS_SCR_VBUSRQC		(1 << 9)
/** UOTGHS_SCR_STOIC Suspend Time-Out Interrupt Clear **/
#define UOTGHS_SCR_STOIC		(1 << 7)
/** UOTGHS_SCR_HNPERRIC HNP Error Interrupt Clear **/
#define UOTGHS_SCR_HNPERRIC		(1 << 6)
/** UOTGHS_SCR_ROLEEXIC Role Exchange Interrupt Clear **/
#define UOTGHS_SCR_ROLEEXIC		(1 << 5)
/** UOTGHS_SCR_BCERRIC B-Connection Error Interrupt Clear **/
#define UOTGHS_SCR_BCERRIC		(1 << 4)
/** UOTGHS_SCR_VBERRIC VBus Error Interrupt Clear **/
#define UOTGHS_SCR_VBERRIC		(1 << 3)
/** UOTGHS_SCR_SRPIC SRP Interrupt Clear **/
#define UOTGHS_SCR_SRPIC		(1 << 2)
/** UOTGHS_SCR_VBUSTIC VBus Transition Interrupt Clear **/
#define UOTGHS_SCR_VBUSTIC		(1 << 1)
/** UOTGHS_SCR_IDTIC ID Transition Interrupt Clear **/
#define UOTGHS_SCR_IDTIC		(1 << 0)

/**@}*/

/** @defgroup uotghs_sfr SFR General Status Set Register
@{*/

/** UOTGHS_SFR_VBUSRQS VBus Request Set **/
#define UOTGHS_SFR_VBUSRQS		(1 << 9)
/** UOTGHS_SFR_STOIS Suspend Time-Out Interrupt Set **/
#define UOTGHS_SFR_STOIS		(1 << 7)
/** UOTGHS_SFR_HNPERRIS HNP Error Interrupt Set **/
#define UOTGHS_SFR_HNPERRIS		(1 << 6)
/** UOTGHS_SFR_ROLEEXIS Role Exchange Interrupt Set **/
#define UOTGHS_SFR_ROLEEXIS		(1 << 5)
/** UOTGHS_SFR_BCERRIS B-Connection Error Interrupt Set **/
#define UOTGHS_SFR_BCERRIS		(1 << 4)
/** UOTGHS_SFR_VBERRIS VBus Error Interrupt Set **/
#define UOTGHS_SFR_VBERRIS		(1 << 3)
/** UOTGHS_SFR_SRPIS SRP Interrupt Set **/
#define UOTGHS_SFR_SRPIS		(1 << 2)
/** UOTGHS_SFR_VBUSTIS VBus Transition Interrupt Set **/
#define UOTGHS_SFR_VBUSTIS		(1 << 1)
/** UOTGHS_SFR_IDTIS ID Transition Interrupt Set **/
#define UOTGHS_SFR_IDTIS		(1 << 0)

/**@}*/

/** @defgroup uotghs_fsm FSM General Finite State Machine Register
@{*/


#define UOTGHS_FSM_DRDSTATE_SHIFT		0
#define UOTGHS_FSM_DRDSTATE_MASK		0x0f
/** @defgroup uotghs_fsm_drdstate DRDSTATE Dual Role Device State
@{*/
/**@}*/


/**@}*/

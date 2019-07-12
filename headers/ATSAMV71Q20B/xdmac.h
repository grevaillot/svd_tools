#pragma once 

/* --- XDMAC: Extensible DMA Controller ----------------------------- */

/** @defgroup xdmac_registers Extensible DMA Controller Register
@{*/

/** XDMAC_XDMAC_GTYPE Global Type Register **/
#define XDMAC_XDMAC_GTYPE			MMIO32(XDMAC_BASE + 0x00)
/** XDMAC_XDMAC_GCFG Global Configuration Register **/
#define XDMAC_XDMAC_GCFG			MMIO32(XDMAC_BASE + 0x04)
/** XDMAC_XDMAC_GWAC Global Weighted Arbiter Configuration Register **/
#define XDMAC_XDMAC_GWAC			MMIO32(XDMAC_BASE + 0x08)
/** XDMAC_XDMAC_GIE Global Interrupt Enable Register **/
#define XDMAC_XDMAC_GIE			MMIO32(XDMAC_BASE + 0x0c)
/** XDMAC_XDMAC_GID Global Interrupt Disable Register **/
#define XDMAC_XDMAC_GID			MMIO32(XDMAC_BASE + 0x10)
/** XDMAC_XDMAC_GIM Global Interrupt Mask Register **/
#define XDMAC_XDMAC_GIM			MMIO32(XDMAC_BASE + 0x14)
/** XDMAC_XDMAC_GIS Global Interrupt Status Register **/
#define XDMAC_XDMAC_GIS			MMIO32(XDMAC_BASE + 0x18)
/** XDMAC_XDMAC_GE Global Channel Enable Register **/
#define XDMAC_XDMAC_GE			MMIO32(XDMAC_BASE + 0x1c)
/** XDMAC_XDMAC_GD Global Channel Disable Register **/
#define XDMAC_XDMAC_GD			MMIO32(XDMAC_BASE + 0x20)
/** XDMAC_XDMAC_GS Global Channel Status Register **/
#define XDMAC_XDMAC_GS			MMIO32(XDMAC_BASE + 0x24)
/** XDMAC_XDMAC_GRS Global Channel Read Suspend Register **/
#define XDMAC_XDMAC_GRS			MMIO32(XDMAC_BASE + 0x28)
/** XDMAC_XDMAC_GWS Global Channel Write Suspend Register **/
#define XDMAC_XDMAC_GWS			MMIO32(XDMAC_BASE + 0x2c)
/** XDMAC_XDMAC_GRWS Global Channel Read Write Suspend Register **/
#define XDMAC_XDMAC_GRWS			MMIO32(XDMAC_BASE + 0x30)
/** XDMAC_XDMAC_GRWR Global Channel Read Write Resume Register **/
#define XDMAC_XDMAC_GRWR			MMIO32(XDMAC_BASE + 0x34)
/** XDMAC_XDMAC_GSWR Global Channel Software Request Register **/
#define XDMAC_XDMAC_GSWR			MMIO32(XDMAC_BASE + 0x38)
/** XDMAC_XDMAC_GSWS Global Channel Software Request Status Register **/
#define XDMAC_XDMAC_GSWS			MMIO32(XDMAC_BASE + 0x3c)
/** XDMAC_XDMAC_GSWF Global Channel Software Flush Request Register **/
#define XDMAC_XDMAC_GSWF			MMIO32(XDMAC_BASE + 0x40)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x50)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x54)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x58)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x5c)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x60)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x64)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x68)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x6c)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x70)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x74)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x78)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x7c)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x80)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x84)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x90)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x94)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x98)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x9c)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0xa0)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0xa4)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0xa8)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0xac)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0xb0)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0xb4)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC			MMIO32(XDMAC_BASE + 0xb8)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0xbc)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0xc0)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0xc4)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0xd0)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CID			MMIO32(XDMAC_BASE + 0xd4)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0xd8)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0xdc)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0xe0)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0xe4)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0xe8)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0xec)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0xf0)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0xf4)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC			MMIO32(XDMAC_BASE + 0xf8)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0xfc)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x100)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x104)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x110)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x114)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x118)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x11c)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x120)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x124)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x128)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x12c)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x130)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x134)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x138)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x13c)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x140)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x144)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x150)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x154)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x158)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x15c)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x160)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x164)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x168)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x16c)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x170)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x174)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x178)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x17c)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x180)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x184)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x190)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x194)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x198)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x19c)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x1a0)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x1a4)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x1a8)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x1ac)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x1b0)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x1b4)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x1b8)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x1bc)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x1c0)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x1c4)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x1d0)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x1d4)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x1d8)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x1dc)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x1e0)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x1e4)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x1e8)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x1ec)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x1f0)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x1f4)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x1f8)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x1fc)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x200)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x204)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x210)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x214)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x218)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x21c)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x220)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x224)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x228)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x22c)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x230)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x234)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x238)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x23c)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x240)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x244)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x250)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x254)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x258)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x25c)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x260)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x264)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x268)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x26c)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x270)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x274)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x278)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x27c)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x280)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x284)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x290)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x294)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x298)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x29c)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x2a0)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x2a4)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x2a8)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x2ac)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x2b0)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x2b4)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x2b8)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x2bc)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x2c0)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x2c4)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x2d0)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x2d4)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x2d8)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x2dc)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x2e0)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x2e4)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x2e8)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x2ec)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x2f0)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x2f4)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x2f8)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x2fc)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x300)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x304)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x310)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x314)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x318)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x31c)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x320)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x324)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x328)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x32c)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x330)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x334)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x338)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x33c)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x340)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x344)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x350)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x354)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x358)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x35c)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x360)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x364)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x368)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x36c)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x370)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x374)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x378)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x37c)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x380)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x384)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x390)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x394)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x398)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x39c)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x3a0)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x3a4)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x3a8)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x3ac)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x3b0)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x3b4)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x3b8)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x3bc)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x3c0)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x3c4)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x3d0)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x3d4)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x3d8)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x3dc)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x3e0)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x3e4)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x3e8)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x3ec)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x3f0)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x3f4)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x3f8)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x3fc)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x400)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x404)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x410)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x414)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x418)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x41c)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x420)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x424)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x428)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x42c)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x430)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x434)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x438)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x43c)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x440)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x444)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x450)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x454)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x458)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x45c)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x460)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x464)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x468)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x46c)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x470)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x474)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x478)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x47c)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x480)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x484)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x490)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x494)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x498)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x49c)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x4a0)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x4a4)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x4a8)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x4ac)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x4b0)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x4b4)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x4b8)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x4bc)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x4c0)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x4c4)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x4d0)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x4d4)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x4d8)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x4dc)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x4e0)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x4e4)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x4e8)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x4ec)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x4f0)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x4f4)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x4f8)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x4fc)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x500)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x504)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x510)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x514)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x518)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x51c)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x520)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x524)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x528)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x52c)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x530)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x534)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x538)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x53c)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x540)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x544)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x550)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x554)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x558)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x55c)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x560)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x564)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x568)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x56c)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x570)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x574)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x578)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x57c)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x580)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x584)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x590)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x594)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x598)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x59c)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x5a0)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x5a4)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x5a8)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x5ac)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x5b0)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x5b4)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x5b8)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x5bc)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x5c0)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x5c4)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x5d0)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x5d4)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x5d8)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x5dc)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x5e0)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x5e4)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x5e8)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x5ec)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x5f0)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x5f4)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x5f8)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x5fc)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x600)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x604)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIE Channel Interrupt Enable Register **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIE			MMIO32(XDMAC_BASE + 0x610)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CID Channel Interrupt Disable Register **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CID			MMIO32(XDMAC_BASE + 0x614)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIM Channel Interrupt Mask Register **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIM			MMIO32(XDMAC_BASE + 0x618)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIS Channel Interrupt Status Register **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIS			MMIO32(XDMAC_BASE + 0x61c)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CSA Channel Source Address Register **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CSA			MMIO32(XDMAC_BASE + 0x620)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CDA Channel Destination Address Register **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CDA			MMIO32(XDMAC_BASE + 0x624)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CNDA Channel Next Descriptor Address Register **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CNDA			MMIO32(XDMAC_BASE + 0x628)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CNDC Channel Next Descriptor Control Register **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CNDC			MMIO32(XDMAC_BASE + 0x62c)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CUBC Channel Microblock Control Register **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CUBC			MMIO32(XDMAC_BASE + 0x630)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CBC Channel Block Control Register **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CBC			MMIO32(XDMAC_BASE + 0x634)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CC Channel Configuration Register **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC			MMIO32(XDMAC_BASE + 0x638)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CDS_MSP Channel Data Stride Memory Set Pattern **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CDS_MSP			MMIO32(XDMAC_BASE + 0x63c)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CSUS Channel Source Microblock Stride **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CSUS			MMIO32(XDMAC_BASE + 0x640)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CDUS Channel Destination Microblock Stride **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CDUS			MMIO32(XDMAC_BASE + 0x644)

/**@}*/


/** @defgroup xdmac_xdmac_gtype XDMACGTYPE Global Type Register
@{*/


#define XDMAC_XDMAC_GTYPE_NB_REQ_SHIFT		16
#define XDMAC_XDMAC_GTYPE_NB_REQ_MASK		0x7f
/** @defgroup xdmac_xdmac_gtype_nb_req NBREQ Number of Peripheral Requests Minus One
@{*/
/**@}*/


#define XDMAC_XDMAC_GTYPE_FIFO_SZ_SHIFT		5
#define XDMAC_XDMAC_GTYPE_FIFO_SZ_MASK		0x7ff
/** @defgroup xdmac_xdmac_gtype_fifo_sz FIFOSZ Number of Bytes
@{*/
/**@}*/


#define XDMAC_XDMAC_GTYPE_NB_CH_SHIFT		0
#define XDMAC_XDMAC_GTYPE_NB_CH_MASK		0x1f
/** @defgroup xdmac_xdmac_gtype_nb_ch NBCH Number of Channels Minus One
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_gcfg XDMACGCFG Global Configuration Register
@{*/

/** XDMAC_XDMAC_GCFG_BXKBEN Boundary X Kilobyte Enable **/
#define XDMAC_XDMAC_GCFG_BXKBEN		(1 << 8)
/** XDMAC_XDMAC_GCFG_CGDISIF Bus Interface Clock Gating Disable **/
#define XDMAC_XDMAC_GCFG_CGDISIF		(1 << 3)
/** XDMAC_XDMAC_GCFG_CGDISFIFO FIFO Clock Gating Disable **/
#define XDMAC_XDMAC_GCFG_CGDISFIFO		(1 << 2)
/** XDMAC_XDMAC_GCFG_CGDISPIPE Pipeline Clock Gating Disable **/
#define XDMAC_XDMAC_GCFG_CGDISPIPE		(1 << 1)
/** XDMAC_XDMAC_GCFG_CGDISREG Configuration Registers Clock Gating Disable **/
#define XDMAC_XDMAC_GCFG_CGDISREG		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_gwac XDMACGWAC Global Weighted Arbiter Configuration Register
@{*/


#define XDMAC_XDMAC_GWAC_PW3_SHIFT		12
#define XDMAC_XDMAC_GWAC_PW3_MASK		0x0f
/** @defgroup xdmac_xdmac_gwac_pw3 PW3 Pool Weight 3
@{*/
/**@}*/


#define XDMAC_XDMAC_GWAC_PW2_SHIFT		8
#define XDMAC_XDMAC_GWAC_PW2_MASK		0x0f
/** @defgroup xdmac_xdmac_gwac_pw2 PW2 Pool Weight 2
@{*/
/**@}*/


#define XDMAC_XDMAC_GWAC_PW1_SHIFT		4
#define XDMAC_XDMAC_GWAC_PW1_MASK		0x0f
/** @defgroup xdmac_xdmac_gwac_pw1 PW1 Pool Weight 1
@{*/
/**@}*/


#define XDMAC_XDMAC_GWAC_PW0_SHIFT		0
#define XDMAC_XDMAC_GWAC_PW0_MASK		0x0f
/** @defgroup xdmac_xdmac_gwac_pw0 PW0 Pool Weight 0
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_gie XDMACGIE Global Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_GIE_IE23 XDMAC Channel 23 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE23		(1 << 23)
/** XDMAC_XDMAC_GIE_IE22 XDMAC Channel 22 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE22		(1 << 22)
/** XDMAC_XDMAC_GIE_IE21 XDMAC Channel 21 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE21		(1 << 21)
/** XDMAC_XDMAC_GIE_IE20 XDMAC Channel 20 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE20		(1 << 20)
/** XDMAC_XDMAC_GIE_IE19 XDMAC Channel 19 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE19		(1 << 19)
/** XDMAC_XDMAC_GIE_IE18 XDMAC Channel 18 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE18		(1 << 18)
/** XDMAC_XDMAC_GIE_IE17 XDMAC Channel 17 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE17		(1 << 17)
/** XDMAC_XDMAC_GIE_IE16 XDMAC Channel 16 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE16		(1 << 16)
/** XDMAC_XDMAC_GIE_IE15 XDMAC Channel 15 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE15		(1 << 15)
/** XDMAC_XDMAC_GIE_IE14 XDMAC Channel 14 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE14		(1 << 14)
/** XDMAC_XDMAC_GIE_IE13 XDMAC Channel 13 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE13		(1 << 13)
/** XDMAC_XDMAC_GIE_IE12 XDMAC Channel 12 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE12		(1 << 12)
/** XDMAC_XDMAC_GIE_IE11 XDMAC Channel 11 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE11		(1 << 11)
/** XDMAC_XDMAC_GIE_IE10 XDMAC Channel 10 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE10		(1 << 10)
/** XDMAC_XDMAC_GIE_IE9 XDMAC Channel 9 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE9		(1 << 9)
/** XDMAC_XDMAC_GIE_IE8 XDMAC Channel 8 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE8		(1 << 8)
/** XDMAC_XDMAC_GIE_IE7 XDMAC Channel 7 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE7		(1 << 7)
/** XDMAC_XDMAC_GIE_IE6 XDMAC Channel 6 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE6		(1 << 6)
/** XDMAC_XDMAC_GIE_IE5 XDMAC Channel 5 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE5		(1 << 5)
/** XDMAC_XDMAC_GIE_IE4 XDMAC Channel 4 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE4		(1 << 4)
/** XDMAC_XDMAC_GIE_IE3 XDMAC Channel 3 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE3		(1 << 3)
/** XDMAC_XDMAC_GIE_IE2 XDMAC Channel 2 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE2		(1 << 2)
/** XDMAC_XDMAC_GIE_IE1 XDMAC Channel 1 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE1		(1 << 1)
/** XDMAC_XDMAC_GIE_IE0 XDMAC Channel 0 Interrupt Enable Bit **/
#define XDMAC_XDMAC_GIE_IE0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_gid XDMACGID Global Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_GID_ID23 XDMAC Channel 23 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID23		(1 << 23)
/** XDMAC_XDMAC_GID_ID22 XDMAC Channel 22 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID22		(1 << 22)
/** XDMAC_XDMAC_GID_ID21 XDMAC Channel 21 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID21		(1 << 21)
/** XDMAC_XDMAC_GID_ID20 XDMAC Channel 20 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID20		(1 << 20)
/** XDMAC_XDMAC_GID_ID19 XDMAC Channel 19 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID19		(1 << 19)
/** XDMAC_XDMAC_GID_ID18 XDMAC Channel 18 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID18		(1 << 18)
/** XDMAC_XDMAC_GID_ID17 XDMAC Channel 17 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID17		(1 << 17)
/** XDMAC_XDMAC_GID_ID16 XDMAC Channel 16 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID16		(1 << 16)
/** XDMAC_XDMAC_GID_ID15 XDMAC Channel 15 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID15		(1 << 15)
/** XDMAC_XDMAC_GID_ID14 XDMAC Channel 14 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID14		(1 << 14)
/** XDMAC_XDMAC_GID_ID13 XDMAC Channel 13 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID13		(1 << 13)
/** XDMAC_XDMAC_GID_ID12 XDMAC Channel 12 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID12		(1 << 12)
/** XDMAC_XDMAC_GID_ID11 XDMAC Channel 11 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID11		(1 << 11)
/** XDMAC_XDMAC_GID_ID10 XDMAC Channel 10 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID10		(1 << 10)
/** XDMAC_XDMAC_GID_ID9 XDMAC Channel 9 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID9		(1 << 9)
/** XDMAC_XDMAC_GID_ID8 XDMAC Channel 8 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID8		(1 << 8)
/** XDMAC_XDMAC_GID_ID7 XDMAC Channel 7 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID7		(1 << 7)
/** XDMAC_XDMAC_GID_ID6 XDMAC Channel 6 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID6		(1 << 6)
/** XDMAC_XDMAC_GID_ID5 XDMAC Channel 5 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID5		(1 << 5)
/** XDMAC_XDMAC_GID_ID4 XDMAC Channel 4 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID4		(1 << 4)
/** XDMAC_XDMAC_GID_ID3 XDMAC Channel 3 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID3		(1 << 3)
/** XDMAC_XDMAC_GID_ID2 XDMAC Channel 2 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID2		(1 << 2)
/** XDMAC_XDMAC_GID_ID1 XDMAC Channel 1 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID1		(1 << 1)
/** XDMAC_XDMAC_GID_ID0 XDMAC Channel 0 Interrupt Disable Bit **/
#define XDMAC_XDMAC_GID_ID0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_gim XDMACGIM Global Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_GIM_IM23 XDMAC Channel 23 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM23		(1 << 23)
/** XDMAC_XDMAC_GIM_IM22 XDMAC Channel 22 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM22		(1 << 22)
/** XDMAC_XDMAC_GIM_IM21 XDMAC Channel 21 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM21		(1 << 21)
/** XDMAC_XDMAC_GIM_IM20 XDMAC Channel 20 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM20		(1 << 20)
/** XDMAC_XDMAC_GIM_IM19 XDMAC Channel 19 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM19		(1 << 19)
/** XDMAC_XDMAC_GIM_IM18 XDMAC Channel 18 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM18		(1 << 18)
/** XDMAC_XDMAC_GIM_IM17 XDMAC Channel 17 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM17		(1 << 17)
/** XDMAC_XDMAC_GIM_IM16 XDMAC Channel 16 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM16		(1 << 16)
/** XDMAC_XDMAC_GIM_IM15 XDMAC Channel 15 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM15		(1 << 15)
/** XDMAC_XDMAC_GIM_IM14 XDMAC Channel 14 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM14		(1 << 14)
/** XDMAC_XDMAC_GIM_IM13 XDMAC Channel 13 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM13		(1 << 13)
/** XDMAC_XDMAC_GIM_IM12 XDMAC Channel 12 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM12		(1 << 12)
/** XDMAC_XDMAC_GIM_IM11 XDMAC Channel 11 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM11		(1 << 11)
/** XDMAC_XDMAC_GIM_IM10 XDMAC Channel 10 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM10		(1 << 10)
/** XDMAC_XDMAC_GIM_IM9 XDMAC Channel 9 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM9		(1 << 9)
/** XDMAC_XDMAC_GIM_IM8 XDMAC Channel 8 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM8		(1 << 8)
/** XDMAC_XDMAC_GIM_IM7 XDMAC Channel 7 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM7		(1 << 7)
/** XDMAC_XDMAC_GIM_IM6 XDMAC Channel 6 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM6		(1 << 6)
/** XDMAC_XDMAC_GIM_IM5 XDMAC Channel 5 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM5		(1 << 5)
/** XDMAC_XDMAC_GIM_IM4 XDMAC Channel 4 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM4		(1 << 4)
/** XDMAC_XDMAC_GIM_IM3 XDMAC Channel 3 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM3		(1 << 3)
/** XDMAC_XDMAC_GIM_IM2 XDMAC Channel 2 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM2		(1 << 2)
/** XDMAC_XDMAC_GIM_IM1 XDMAC Channel 1 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM1		(1 << 1)
/** XDMAC_XDMAC_GIM_IM0 XDMAC Channel 0 Interrupt Mask Bit **/
#define XDMAC_XDMAC_GIM_IM0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_gis XDMACGIS Global Interrupt Status Register
@{*/

/** XDMAC_XDMAC_GIS_IS23 XDMAC Channel 23 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS23		(1 << 23)
/** XDMAC_XDMAC_GIS_IS22 XDMAC Channel 22 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS22		(1 << 22)
/** XDMAC_XDMAC_GIS_IS21 XDMAC Channel 21 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS21		(1 << 21)
/** XDMAC_XDMAC_GIS_IS20 XDMAC Channel 20 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS20		(1 << 20)
/** XDMAC_XDMAC_GIS_IS19 XDMAC Channel 19 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS19		(1 << 19)
/** XDMAC_XDMAC_GIS_IS18 XDMAC Channel 18 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS18		(1 << 18)
/** XDMAC_XDMAC_GIS_IS17 XDMAC Channel 17 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS17		(1 << 17)
/** XDMAC_XDMAC_GIS_IS16 XDMAC Channel 16 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS16		(1 << 16)
/** XDMAC_XDMAC_GIS_IS15 XDMAC Channel 15 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS15		(1 << 15)
/** XDMAC_XDMAC_GIS_IS14 XDMAC Channel 14 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS14		(1 << 14)
/** XDMAC_XDMAC_GIS_IS13 XDMAC Channel 13 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS13		(1 << 13)
/** XDMAC_XDMAC_GIS_IS12 XDMAC Channel 12 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS12		(1 << 12)
/** XDMAC_XDMAC_GIS_IS11 XDMAC Channel 11 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS11		(1 << 11)
/** XDMAC_XDMAC_GIS_IS10 XDMAC Channel 10 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS10		(1 << 10)
/** XDMAC_XDMAC_GIS_IS9 XDMAC Channel 9 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS9		(1 << 9)
/** XDMAC_XDMAC_GIS_IS8 XDMAC Channel 8 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS8		(1 << 8)
/** XDMAC_XDMAC_GIS_IS7 XDMAC Channel 7 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS7		(1 << 7)
/** XDMAC_XDMAC_GIS_IS6 XDMAC Channel 6 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS6		(1 << 6)
/** XDMAC_XDMAC_GIS_IS5 XDMAC Channel 5 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS5		(1 << 5)
/** XDMAC_XDMAC_GIS_IS4 XDMAC Channel 4 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS4		(1 << 4)
/** XDMAC_XDMAC_GIS_IS3 XDMAC Channel 3 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS3		(1 << 3)
/** XDMAC_XDMAC_GIS_IS2 XDMAC Channel 2 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS2		(1 << 2)
/** XDMAC_XDMAC_GIS_IS1 XDMAC Channel 1 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS1		(1 << 1)
/** XDMAC_XDMAC_GIS_IS0 XDMAC Channel 0 Interrupt Status Bit **/
#define XDMAC_XDMAC_GIS_IS0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_ge XDMACGE Global Channel Enable Register
@{*/

/** XDMAC_XDMAC_GE_EN23 XDMAC Channel 23 Enable Bit **/
#define XDMAC_XDMAC_GE_EN23		(1 << 23)
/** XDMAC_XDMAC_GE_EN22 XDMAC Channel 22 Enable Bit **/
#define XDMAC_XDMAC_GE_EN22		(1 << 22)
/** XDMAC_XDMAC_GE_EN21 XDMAC Channel 21 Enable Bit **/
#define XDMAC_XDMAC_GE_EN21		(1 << 21)
/** XDMAC_XDMAC_GE_EN20 XDMAC Channel 20 Enable Bit **/
#define XDMAC_XDMAC_GE_EN20		(1 << 20)
/** XDMAC_XDMAC_GE_EN19 XDMAC Channel 19 Enable Bit **/
#define XDMAC_XDMAC_GE_EN19		(1 << 19)
/** XDMAC_XDMAC_GE_EN18 XDMAC Channel 18 Enable Bit **/
#define XDMAC_XDMAC_GE_EN18		(1 << 18)
/** XDMAC_XDMAC_GE_EN17 XDMAC Channel 17 Enable Bit **/
#define XDMAC_XDMAC_GE_EN17		(1 << 17)
/** XDMAC_XDMAC_GE_EN16 XDMAC Channel 16 Enable Bit **/
#define XDMAC_XDMAC_GE_EN16		(1 << 16)
/** XDMAC_XDMAC_GE_EN15 XDMAC Channel 15 Enable Bit **/
#define XDMAC_XDMAC_GE_EN15		(1 << 15)
/** XDMAC_XDMAC_GE_EN14 XDMAC Channel 14 Enable Bit **/
#define XDMAC_XDMAC_GE_EN14		(1 << 14)
/** XDMAC_XDMAC_GE_EN13 XDMAC Channel 13 Enable Bit **/
#define XDMAC_XDMAC_GE_EN13		(1 << 13)
/** XDMAC_XDMAC_GE_EN12 XDMAC Channel 12 Enable Bit **/
#define XDMAC_XDMAC_GE_EN12		(1 << 12)
/** XDMAC_XDMAC_GE_EN11 XDMAC Channel 11 Enable Bit **/
#define XDMAC_XDMAC_GE_EN11		(1 << 11)
/** XDMAC_XDMAC_GE_EN10 XDMAC Channel 10 Enable Bit **/
#define XDMAC_XDMAC_GE_EN10		(1 << 10)
/** XDMAC_XDMAC_GE_EN9 XDMAC Channel 9 Enable Bit **/
#define XDMAC_XDMAC_GE_EN9		(1 << 9)
/** XDMAC_XDMAC_GE_EN8 XDMAC Channel 8 Enable Bit **/
#define XDMAC_XDMAC_GE_EN8		(1 << 8)
/** XDMAC_XDMAC_GE_EN7 XDMAC Channel 7 Enable Bit **/
#define XDMAC_XDMAC_GE_EN7		(1 << 7)
/** XDMAC_XDMAC_GE_EN6 XDMAC Channel 6 Enable Bit **/
#define XDMAC_XDMAC_GE_EN6		(1 << 6)
/** XDMAC_XDMAC_GE_EN5 XDMAC Channel 5 Enable Bit **/
#define XDMAC_XDMAC_GE_EN5		(1 << 5)
/** XDMAC_XDMAC_GE_EN4 XDMAC Channel 4 Enable Bit **/
#define XDMAC_XDMAC_GE_EN4		(1 << 4)
/** XDMAC_XDMAC_GE_EN3 XDMAC Channel 3 Enable Bit **/
#define XDMAC_XDMAC_GE_EN3		(1 << 3)
/** XDMAC_XDMAC_GE_EN2 XDMAC Channel 2 Enable Bit **/
#define XDMAC_XDMAC_GE_EN2		(1 << 2)
/** XDMAC_XDMAC_GE_EN1 XDMAC Channel 1 Enable Bit **/
#define XDMAC_XDMAC_GE_EN1		(1 << 1)
/** XDMAC_XDMAC_GE_EN0 XDMAC Channel 0 Enable Bit **/
#define XDMAC_XDMAC_GE_EN0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_gd XDMACGD Global Channel Disable Register
@{*/

/** XDMAC_XDMAC_GD_DI23 XDMAC Channel 23 Disable Bit **/
#define XDMAC_XDMAC_GD_DI23		(1 << 23)
/** XDMAC_XDMAC_GD_DI22 XDMAC Channel 22 Disable Bit **/
#define XDMAC_XDMAC_GD_DI22		(1 << 22)
/** XDMAC_XDMAC_GD_DI21 XDMAC Channel 21 Disable Bit **/
#define XDMAC_XDMAC_GD_DI21		(1 << 21)
/** XDMAC_XDMAC_GD_DI20 XDMAC Channel 20 Disable Bit **/
#define XDMAC_XDMAC_GD_DI20		(1 << 20)
/** XDMAC_XDMAC_GD_DI19 XDMAC Channel 19 Disable Bit **/
#define XDMAC_XDMAC_GD_DI19		(1 << 19)
/** XDMAC_XDMAC_GD_DI18 XDMAC Channel 18 Disable Bit **/
#define XDMAC_XDMAC_GD_DI18		(1 << 18)
/** XDMAC_XDMAC_GD_DI17 XDMAC Channel 17 Disable Bit **/
#define XDMAC_XDMAC_GD_DI17		(1 << 17)
/** XDMAC_XDMAC_GD_DI16 XDMAC Channel 16 Disable Bit **/
#define XDMAC_XDMAC_GD_DI16		(1 << 16)
/** XDMAC_XDMAC_GD_DI15 XDMAC Channel 15 Disable Bit **/
#define XDMAC_XDMAC_GD_DI15		(1 << 15)
/** XDMAC_XDMAC_GD_DI14 XDMAC Channel 14 Disable Bit **/
#define XDMAC_XDMAC_GD_DI14		(1 << 14)
/** XDMAC_XDMAC_GD_DI13 XDMAC Channel 13 Disable Bit **/
#define XDMAC_XDMAC_GD_DI13		(1 << 13)
/** XDMAC_XDMAC_GD_DI12 XDMAC Channel 12 Disable Bit **/
#define XDMAC_XDMAC_GD_DI12		(1 << 12)
/** XDMAC_XDMAC_GD_DI11 XDMAC Channel 11 Disable Bit **/
#define XDMAC_XDMAC_GD_DI11		(1 << 11)
/** XDMAC_XDMAC_GD_DI10 XDMAC Channel 10 Disable Bit **/
#define XDMAC_XDMAC_GD_DI10		(1 << 10)
/** XDMAC_XDMAC_GD_DI9 XDMAC Channel 9 Disable Bit **/
#define XDMAC_XDMAC_GD_DI9		(1 << 9)
/** XDMAC_XDMAC_GD_DI8 XDMAC Channel 8 Disable Bit **/
#define XDMAC_XDMAC_GD_DI8		(1 << 8)
/** XDMAC_XDMAC_GD_DI7 XDMAC Channel 7 Disable Bit **/
#define XDMAC_XDMAC_GD_DI7		(1 << 7)
/** XDMAC_XDMAC_GD_DI6 XDMAC Channel 6 Disable Bit **/
#define XDMAC_XDMAC_GD_DI6		(1 << 6)
/** XDMAC_XDMAC_GD_DI5 XDMAC Channel 5 Disable Bit **/
#define XDMAC_XDMAC_GD_DI5		(1 << 5)
/** XDMAC_XDMAC_GD_DI4 XDMAC Channel 4 Disable Bit **/
#define XDMAC_XDMAC_GD_DI4		(1 << 4)
/** XDMAC_XDMAC_GD_DI3 XDMAC Channel 3 Disable Bit **/
#define XDMAC_XDMAC_GD_DI3		(1 << 3)
/** XDMAC_XDMAC_GD_DI2 XDMAC Channel 2 Disable Bit **/
#define XDMAC_XDMAC_GD_DI2		(1 << 2)
/** XDMAC_XDMAC_GD_DI1 XDMAC Channel 1 Disable Bit **/
#define XDMAC_XDMAC_GD_DI1		(1 << 1)
/** XDMAC_XDMAC_GD_DI0 XDMAC Channel 0 Disable Bit **/
#define XDMAC_XDMAC_GD_DI0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_gs XDMACGS Global Channel Status Register
@{*/

/** XDMAC_XDMAC_GS_ST23 XDMAC Channel 23 Status Bit **/
#define XDMAC_XDMAC_GS_ST23		(1 << 23)
/** XDMAC_XDMAC_GS_ST22 XDMAC Channel 22 Status Bit **/
#define XDMAC_XDMAC_GS_ST22		(1 << 22)
/** XDMAC_XDMAC_GS_ST21 XDMAC Channel 21 Status Bit **/
#define XDMAC_XDMAC_GS_ST21		(1 << 21)
/** XDMAC_XDMAC_GS_ST20 XDMAC Channel 20 Status Bit **/
#define XDMAC_XDMAC_GS_ST20		(1 << 20)
/** XDMAC_XDMAC_GS_ST19 XDMAC Channel 19 Status Bit **/
#define XDMAC_XDMAC_GS_ST19		(1 << 19)
/** XDMAC_XDMAC_GS_ST18 XDMAC Channel 18 Status Bit **/
#define XDMAC_XDMAC_GS_ST18		(1 << 18)
/** XDMAC_XDMAC_GS_ST17 XDMAC Channel 17 Status Bit **/
#define XDMAC_XDMAC_GS_ST17		(1 << 17)
/** XDMAC_XDMAC_GS_ST16 XDMAC Channel 16 Status Bit **/
#define XDMAC_XDMAC_GS_ST16		(1 << 16)
/** XDMAC_XDMAC_GS_ST15 XDMAC Channel 15 Status Bit **/
#define XDMAC_XDMAC_GS_ST15		(1 << 15)
/** XDMAC_XDMAC_GS_ST14 XDMAC Channel 14 Status Bit **/
#define XDMAC_XDMAC_GS_ST14		(1 << 14)
/** XDMAC_XDMAC_GS_ST13 XDMAC Channel 13 Status Bit **/
#define XDMAC_XDMAC_GS_ST13		(1 << 13)
/** XDMAC_XDMAC_GS_ST12 XDMAC Channel 12 Status Bit **/
#define XDMAC_XDMAC_GS_ST12		(1 << 12)
/** XDMAC_XDMAC_GS_ST11 XDMAC Channel 11 Status Bit **/
#define XDMAC_XDMAC_GS_ST11		(1 << 11)
/** XDMAC_XDMAC_GS_ST10 XDMAC Channel 10 Status Bit **/
#define XDMAC_XDMAC_GS_ST10		(1 << 10)
/** XDMAC_XDMAC_GS_ST9 XDMAC Channel 9 Status Bit **/
#define XDMAC_XDMAC_GS_ST9		(1 << 9)
/** XDMAC_XDMAC_GS_ST8 XDMAC Channel 8 Status Bit **/
#define XDMAC_XDMAC_GS_ST8		(1 << 8)
/** XDMAC_XDMAC_GS_ST7 XDMAC Channel 7 Status Bit **/
#define XDMAC_XDMAC_GS_ST7		(1 << 7)
/** XDMAC_XDMAC_GS_ST6 XDMAC Channel 6 Status Bit **/
#define XDMAC_XDMAC_GS_ST6		(1 << 6)
/** XDMAC_XDMAC_GS_ST5 XDMAC Channel 5 Status Bit **/
#define XDMAC_XDMAC_GS_ST5		(1 << 5)
/** XDMAC_XDMAC_GS_ST4 XDMAC Channel 4 Status Bit **/
#define XDMAC_XDMAC_GS_ST4		(1 << 4)
/** XDMAC_XDMAC_GS_ST3 XDMAC Channel 3 Status Bit **/
#define XDMAC_XDMAC_GS_ST3		(1 << 3)
/** XDMAC_XDMAC_GS_ST2 XDMAC Channel 2 Status Bit **/
#define XDMAC_XDMAC_GS_ST2		(1 << 2)
/** XDMAC_XDMAC_GS_ST1 XDMAC Channel 1 Status Bit **/
#define XDMAC_XDMAC_GS_ST1		(1 << 1)
/** XDMAC_XDMAC_GS_ST0 XDMAC Channel 0 Status Bit **/
#define XDMAC_XDMAC_GS_ST0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_grs XDMACGRS Global Channel Read Suspend Register
@{*/

/** XDMAC_XDMAC_GRS_RS23 XDMAC Channel 23 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS23		(1 << 23)
/** XDMAC_XDMAC_GRS_RS22 XDMAC Channel 22 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS22		(1 << 22)
/** XDMAC_XDMAC_GRS_RS21 XDMAC Channel 21 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS21		(1 << 21)
/** XDMAC_XDMAC_GRS_RS20 XDMAC Channel 20 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS20		(1 << 20)
/** XDMAC_XDMAC_GRS_RS19 XDMAC Channel 19 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS19		(1 << 19)
/** XDMAC_XDMAC_GRS_RS18 XDMAC Channel 18 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS18		(1 << 18)
/** XDMAC_XDMAC_GRS_RS17 XDMAC Channel 17 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS17		(1 << 17)
/** XDMAC_XDMAC_GRS_RS16 XDMAC Channel 16 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS16		(1 << 16)
/** XDMAC_XDMAC_GRS_RS15 XDMAC Channel 15 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS15		(1 << 15)
/** XDMAC_XDMAC_GRS_RS14 XDMAC Channel 14 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS14		(1 << 14)
/** XDMAC_XDMAC_GRS_RS13 XDMAC Channel 13 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS13		(1 << 13)
/** XDMAC_XDMAC_GRS_RS12 XDMAC Channel 12 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS12		(1 << 12)
/** XDMAC_XDMAC_GRS_RS11 XDMAC Channel 11 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS11		(1 << 11)
/** XDMAC_XDMAC_GRS_RS10 XDMAC Channel 10 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS10		(1 << 10)
/** XDMAC_XDMAC_GRS_RS9 XDMAC Channel 9 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS9		(1 << 9)
/** XDMAC_XDMAC_GRS_RS8 XDMAC Channel 8 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS8		(1 << 8)
/** XDMAC_XDMAC_GRS_RS7 XDMAC Channel 7 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS7		(1 << 7)
/** XDMAC_XDMAC_GRS_RS6 XDMAC Channel 6 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS6		(1 << 6)
/** XDMAC_XDMAC_GRS_RS5 XDMAC Channel 5 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS5		(1 << 5)
/** XDMAC_XDMAC_GRS_RS4 XDMAC Channel 4 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS4		(1 << 4)
/** XDMAC_XDMAC_GRS_RS3 XDMAC Channel 3 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS3		(1 << 3)
/** XDMAC_XDMAC_GRS_RS2 XDMAC Channel 2 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS2		(1 << 2)
/** XDMAC_XDMAC_GRS_RS1 XDMAC Channel 1 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS1		(1 << 1)
/** XDMAC_XDMAC_GRS_RS0 XDMAC Channel 0 Read Suspend Bit **/
#define XDMAC_XDMAC_GRS_RS0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_gws XDMACGWS Global Channel Write Suspend Register
@{*/

/** XDMAC_XDMAC_GWS_WS23 XDMAC Channel 23 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS23		(1 << 23)
/** XDMAC_XDMAC_GWS_WS22 XDMAC Channel 22 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS22		(1 << 22)
/** XDMAC_XDMAC_GWS_WS21 XDMAC Channel 21 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS21		(1 << 21)
/** XDMAC_XDMAC_GWS_WS20 XDMAC Channel 20 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS20		(1 << 20)
/** XDMAC_XDMAC_GWS_WS19 XDMAC Channel 19 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS19		(1 << 19)
/** XDMAC_XDMAC_GWS_WS18 XDMAC Channel 18 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS18		(1 << 18)
/** XDMAC_XDMAC_GWS_WS17 XDMAC Channel 17 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS17		(1 << 17)
/** XDMAC_XDMAC_GWS_WS16 XDMAC Channel 16 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS16		(1 << 16)
/** XDMAC_XDMAC_GWS_WS15 XDMAC Channel 15 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS15		(1 << 15)
/** XDMAC_XDMAC_GWS_WS14 XDMAC Channel 14 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS14		(1 << 14)
/** XDMAC_XDMAC_GWS_WS13 XDMAC Channel 13 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS13		(1 << 13)
/** XDMAC_XDMAC_GWS_WS12 XDMAC Channel 12 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS12		(1 << 12)
/** XDMAC_XDMAC_GWS_WS11 XDMAC Channel 11 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS11		(1 << 11)
/** XDMAC_XDMAC_GWS_WS10 XDMAC Channel 10 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS10		(1 << 10)
/** XDMAC_XDMAC_GWS_WS9 XDMAC Channel 9 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS9		(1 << 9)
/** XDMAC_XDMAC_GWS_WS8 XDMAC Channel 8 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS8		(1 << 8)
/** XDMAC_XDMAC_GWS_WS7 XDMAC Channel 7 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS7		(1 << 7)
/** XDMAC_XDMAC_GWS_WS6 XDMAC Channel 6 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS6		(1 << 6)
/** XDMAC_XDMAC_GWS_WS5 XDMAC Channel 5 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS5		(1 << 5)
/** XDMAC_XDMAC_GWS_WS4 XDMAC Channel 4 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS4		(1 << 4)
/** XDMAC_XDMAC_GWS_WS3 XDMAC Channel 3 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS3		(1 << 3)
/** XDMAC_XDMAC_GWS_WS2 XDMAC Channel 2 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS2		(1 << 2)
/** XDMAC_XDMAC_GWS_WS1 XDMAC Channel 1 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS1		(1 << 1)
/** XDMAC_XDMAC_GWS_WS0 XDMAC Channel 0 Write Suspend Bit **/
#define XDMAC_XDMAC_GWS_WS0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_grws XDMACGRWS Global Channel Read Write Suspend Register
@{*/

/** XDMAC_XDMAC_GRWS_RWS23 XDMAC Channel 23 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS23		(1 << 23)
/** XDMAC_XDMAC_GRWS_RWS22 XDMAC Channel 22 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS22		(1 << 22)
/** XDMAC_XDMAC_GRWS_RWS21 XDMAC Channel 21 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS21		(1 << 21)
/** XDMAC_XDMAC_GRWS_RWS20 XDMAC Channel 20 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS20		(1 << 20)
/** XDMAC_XDMAC_GRWS_RWS19 XDMAC Channel 19 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS19		(1 << 19)
/** XDMAC_XDMAC_GRWS_RWS18 XDMAC Channel 18 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS18		(1 << 18)
/** XDMAC_XDMAC_GRWS_RWS17 XDMAC Channel 17 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS17		(1 << 17)
/** XDMAC_XDMAC_GRWS_RWS16 XDMAC Channel 16 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS16		(1 << 16)
/** XDMAC_XDMAC_GRWS_RWS15 XDMAC Channel 15 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS15		(1 << 15)
/** XDMAC_XDMAC_GRWS_RWS14 XDMAC Channel 14 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS14		(1 << 14)
/** XDMAC_XDMAC_GRWS_RWS13 XDMAC Channel 13 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS13		(1 << 13)
/** XDMAC_XDMAC_GRWS_RWS12 XDMAC Channel 12 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS12		(1 << 12)
/** XDMAC_XDMAC_GRWS_RWS11 XDMAC Channel 11 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS11		(1 << 11)
/** XDMAC_XDMAC_GRWS_RWS10 XDMAC Channel 10 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS10		(1 << 10)
/** XDMAC_XDMAC_GRWS_RWS9 XDMAC Channel 9 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS9		(1 << 9)
/** XDMAC_XDMAC_GRWS_RWS8 XDMAC Channel 8 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS8		(1 << 8)
/** XDMAC_XDMAC_GRWS_RWS7 XDMAC Channel 7 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS7		(1 << 7)
/** XDMAC_XDMAC_GRWS_RWS6 XDMAC Channel 6 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS6		(1 << 6)
/** XDMAC_XDMAC_GRWS_RWS5 XDMAC Channel 5 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS5		(1 << 5)
/** XDMAC_XDMAC_GRWS_RWS4 XDMAC Channel 4 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS4		(1 << 4)
/** XDMAC_XDMAC_GRWS_RWS3 XDMAC Channel 3 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS3		(1 << 3)
/** XDMAC_XDMAC_GRWS_RWS2 XDMAC Channel 2 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS2		(1 << 2)
/** XDMAC_XDMAC_GRWS_RWS1 XDMAC Channel 1 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS1		(1 << 1)
/** XDMAC_XDMAC_GRWS_RWS0 XDMAC Channel 0 Read Write Suspend Bit **/
#define XDMAC_XDMAC_GRWS_RWS0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_grwr XDMACGRWR Global Channel Read Write Resume Register
@{*/

/** XDMAC_XDMAC_GRWR_RWR23 XDMAC Channel 23 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR23		(1 << 23)
/** XDMAC_XDMAC_GRWR_RWR22 XDMAC Channel 22 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR22		(1 << 22)
/** XDMAC_XDMAC_GRWR_RWR21 XDMAC Channel 21 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR21		(1 << 21)
/** XDMAC_XDMAC_GRWR_RWR20 XDMAC Channel 20 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR20		(1 << 20)
/** XDMAC_XDMAC_GRWR_RWR19 XDMAC Channel 19 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR19		(1 << 19)
/** XDMAC_XDMAC_GRWR_RWR18 XDMAC Channel 18 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR18		(1 << 18)
/** XDMAC_XDMAC_GRWR_RWR17 XDMAC Channel 17 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR17		(1 << 17)
/** XDMAC_XDMAC_GRWR_RWR16 XDMAC Channel 16 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR16		(1 << 16)
/** XDMAC_XDMAC_GRWR_RWR15 XDMAC Channel 15 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR15		(1 << 15)
/** XDMAC_XDMAC_GRWR_RWR14 XDMAC Channel 14 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR14		(1 << 14)
/** XDMAC_XDMAC_GRWR_RWR13 XDMAC Channel 13 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR13		(1 << 13)
/** XDMAC_XDMAC_GRWR_RWR12 XDMAC Channel 12 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR12		(1 << 12)
/** XDMAC_XDMAC_GRWR_RWR11 XDMAC Channel 11 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR11		(1 << 11)
/** XDMAC_XDMAC_GRWR_RWR10 XDMAC Channel 10 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR10		(1 << 10)
/** XDMAC_XDMAC_GRWR_RWR9 XDMAC Channel 9 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR9		(1 << 9)
/** XDMAC_XDMAC_GRWR_RWR8 XDMAC Channel 8 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR8		(1 << 8)
/** XDMAC_XDMAC_GRWR_RWR7 XDMAC Channel 7 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR7		(1 << 7)
/** XDMAC_XDMAC_GRWR_RWR6 XDMAC Channel 6 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR6		(1 << 6)
/** XDMAC_XDMAC_GRWR_RWR5 XDMAC Channel 5 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR5		(1 << 5)
/** XDMAC_XDMAC_GRWR_RWR4 XDMAC Channel 4 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR4		(1 << 4)
/** XDMAC_XDMAC_GRWR_RWR3 XDMAC Channel 3 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR3		(1 << 3)
/** XDMAC_XDMAC_GRWR_RWR2 XDMAC Channel 2 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR2		(1 << 2)
/** XDMAC_XDMAC_GRWR_RWR1 XDMAC Channel 1 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR1		(1 << 1)
/** XDMAC_XDMAC_GRWR_RWR0 XDMAC Channel 0 Read Write Resume Bit **/
#define XDMAC_XDMAC_GRWR_RWR0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_gswr XDMACGSWR Global Channel Software Request Register
@{*/

/** XDMAC_XDMAC_GSWR_SWREQ23 XDMAC Channel 23 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ23		(1 << 23)
/** XDMAC_XDMAC_GSWR_SWREQ22 XDMAC Channel 22 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ22		(1 << 22)
/** XDMAC_XDMAC_GSWR_SWREQ21 XDMAC Channel 21 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ21		(1 << 21)
/** XDMAC_XDMAC_GSWR_SWREQ20 XDMAC Channel 20 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ20		(1 << 20)
/** XDMAC_XDMAC_GSWR_SWREQ19 XDMAC Channel 19 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ19		(1 << 19)
/** XDMAC_XDMAC_GSWR_SWREQ18 XDMAC Channel 18 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ18		(1 << 18)
/** XDMAC_XDMAC_GSWR_SWREQ17 XDMAC Channel 17 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ17		(1 << 17)
/** XDMAC_XDMAC_GSWR_SWREQ16 XDMAC Channel 16 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ16		(1 << 16)
/** XDMAC_XDMAC_GSWR_SWREQ15 XDMAC Channel 15 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ15		(1 << 15)
/** XDMAC_XDMAC_GSWR_SWREQ14 XDMAC Channel 14 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ14		(1 << 14)
/** XDMAC_XDMAC_GSWR_SWREQ13 XDMAC Channel 13 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ13		(1 << 13)
/** XDMAC_XDMAC_GSWR_SWREQ12 XDMAC Channel 12 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ12		(1 << 12)
/** XDMAC_XDMAC_GSWR_SWREQ11 XDMAC Channel 11 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ11		(1 << 11)
/** XDMAC_XDMAC_GSWR_SWREQ10 XDMAC Channel 10 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ10		(1 << 10)
/** XDMAC_XDMAC_GSWR_SWREQ9 XDMAC Channel 9 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ9		(1 << 9)
/** XDMAC_XDMAC_GSWR_SWREQ8 XDMAC Channel 8 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ8		(1 << 8)
/** XDMAC_XDMAC_GSWR_SWREQ7 XDMAC Channel 7 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ7		(1 << 7)
/** XDMAC_XDMAC_GSWR_SWREQ6 XDMAC Channel 6 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ6		(1 << 6)
/** XDMAC_XDMAC_GSWR_SWREQ5 XDMAC Channel 5 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ5		(1 << 5)
/** XDMAC_XDMAC_GSWR_SWREQ4 XDMAC Channel 4 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ4		(1 << 4)
/** XDMAC_XDMAC_GSWR_SWREQ3 XDMAC Channel 3 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ3		(1 << 3)
/** XDMAC_XDMAC_GSWR_SWREQ2 XDMAC Channel 2 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ2		(1 << 2)
/** XDMAC_XDMAC_GSWR_SWREQ1 XDMAC Channel 1 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ1		(1 << 1)
/** XDMAC_XDMAC_GSWR_SWREQ0 XDMAC Channel 0 Software Request Bit **/
#define XDMAC_XDMAC_GSWR_SWREQ0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_gsws XDMACGSWS Global Channel Software Request Status Register
@{*/

/** XDMAC_XDMAC_GSWS_SWRS23 XDMAC Channel 23 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS23		(1 << 23)
/** XDMAC_XDMAC_GSWS_SWRS22 XDMAC Channel 22 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS22		(1 << 22)
/** XDMAC_XDMAC_GSWS_SWRS21 XDMAC Channel 21 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS21		(1 << 21)
/** XDMAC_XDMAC_GSWS_SWRS20 XDMAC Channel 20 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS20		(1 << 20)
/** XDMAC_XDMAC_GSWS_SWRS19 XDMAC Channel 19 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS19		(1 << 19)
/** XDMAC_XDMAC_GSWS_SWRS18 XDMAC Channel 18 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS18		(1 << 18)
/** XDMAC_XDMAC_GSWS_SWRS17 XDMAC Channel 17 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS17		(1 << 17)
/** XDMAC_XDMAC_GSWS_SWRS16 XDMAC Channel 16 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS16		(1 << 16)
/** XDMAC_XDMAC_GSWS_SWRS15 XDMAC Channel 15 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS15		(1 << 15)
/** XDMAC_XDMAC_GSWS_SWRS14 XDMAC Channel 14 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS14		(1 << 14)
/** XDMAC_XDMAC_GSWS_SWRS13 XDMAC Channel 13 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS13		(1 << 13)
/** XDMAC_XDMAC_GSWS_SWRS12 XDMAC Channel 12 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS12		(1 << 12)
/** XDMAC_XDMAC_GSWS_SWRS11 XDMAC Channel 11 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS11		(1 << 11)
/** XDMAC_XDMAC_GSWS_SWRS10 XDMAC Channel 10 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS10		(1 << 10)
/** XDMAC_XDMAC_GSWS_SWRS9 XDMAC Channel 9 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS9		(1 << 9)
/** XDMAC_XDMAC_GSWS_SWRS8 XDMAC Channel 8 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS8		(1 << 8)
/** XDMAC_XDMAC_GSWS_SWRS7 XDMAC Channel 7 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS7		(1 << 7)
/** XDMAC_XDMAC_GSWS_SWRS6 XDMAC Channel 6 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS6		(1 << 6)
/** XDMAC_XDMAC_GSWS_SWRS5 XDMAC Channel 5 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS5		(1 << 5)
/** XDMAC_XDMAC_GSWS_SWRS4 XDMAC Channel 4 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS4		(1 << 4)
/** XDMAC_XDMAC_GSWS_SWRS3 XDMAC Channel 3 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS3		(1 << 3)
/** XDMAC_XDMAC_GSWS_SWRS2 XDMAC Channel 2 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS2		(1 << 2)
/** XDMAC_XDMAC_GSWS_SWRS1 XDMAC Channel 1 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS1		(1 << 1)
/** XDMAC_XDMAC_GSWS_SWRS0 XDMAC Channel 0 Software Request Status Bit **/
#define XDMAC_XDMAC_GSWS_SWRS0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_gswf XDMACGSWF Global Channel Software Flush Request Register
@{*/

/** XDMAC_XDMAC_GSWF_SWF23 XDMAC Channel 23 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF23		(1 << 23)
/** XDMAC_XDMAC_GSWF_SWF22 XDMAC Channel 22 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF22		(1 << 22)
/** XDMAC_XDMAC_GSWF_SWF21 XDMAC Channel 21 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF21		(1 << 21)
/** XDMAC_XDMAC_GSWF_SWF20 XDMAC Channel 20 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF20		(1 << 20)
/** XDMAC_XDMAC_GSWF_SWF19 XDMAC Channel 19 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF19		(1 << 19)
/** XDMAC_XDMAC_GSWF_SWF18 XDMAC Channel 18 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF18		(1 << 18)
/** XDMAC_XDMAC_GSWF_SWF17 XDMAC Channel 17 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF17		(1 << 17)
/** XDMAC_XDMAC_GSWF_SWF16 XDMAC Channel 16 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF16		(1 << 16)
/** XDMAC_XDMAC_GSWF_SWF15 XDMAC Channel 15 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF15		(1 << 15)
/** XDMAC_XDMAC_GSWF_SWF14 XDMAC Channel 14 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF14		(1 << 14)
/** XDMAC_XDMAC_GSWF_SWF13 XDMAC Channel 13 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF13		(1 << 13)
/** XDMAC_XDMAC_GSWF_SWF12 XDMAC Channel 12 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF12		(1 << 12)
/** XDMAC_XDMAC_GSWF_SWF11 XDMAC Channel 11 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF11		(1 << 11)
/** XDMAC_XDMAC_GSWF_SWF10 XDMAC Channel 10 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF10		(1 << 10)
/** XDMAC_XDMAC_GSWF_SWF9 XDMAC Channel 9 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF9		(1 << 9)
/** XDMAC_XDMAC_GSWF_SWF8 XDMAC Channel 8 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF8		(1 << 8)
/** XDMAC_XDMAC_GSWF_SWF7 XDMAC Channel 7 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF7		(1 << 7)
/** XDMAC_XDMAC_GSWF_SWF6 XDMAC Channel 6 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF6		(1 << 6)
/** XDMAC_XDMAC_GSWF_SWF5 XDMAC Channel 5 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF5		(1 << 5)
/** XDMAC_XDMAC_GSWF_SWF4 XDMAC Channel 4 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF4		(1 << 4)
/** XDMAC_XDMAC_GSWF_SWF3 XDMAC Channel 3 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF3		(1 << 3)
/** XDMAC_XDMAC_GSWF_SWF2 XDMAC Channel 2 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF2		(1 << 2)
/** XDMAC_XDMAC_GSWF_SWF1 XDMAC Channel 1 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF1		(1 << 1)
/** XDMAC_XDMAC_GSWF_SWF0 XDMAC Channel 0 Software Flush Request Bit **/
#define XDMAC_XDMAC_GSWF_SWF0		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_cie XDMACCHID[0]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[0]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_cid XDMACCHID[0]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[0]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_cim XDMACCHID[0]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[0]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_cis XDMACCHID[0]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[0]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_csa XDMACCHID[0]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[0]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[0]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[0]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_cda XDMACCHID[0]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[0]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[0]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_cnda XDMACCHID[0]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[0]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[0]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[0]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_cndc XDMACCHID[0]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[0]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[0]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[0]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_cubc XDMACCHID[0]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[0]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[0]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_cbc XDMACCHID[0]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[0]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[0]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_cc XDMACCHID[0]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[0]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[0]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[0]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[0]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[0]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[0]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_cds_msp XDMACCHID[0]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[0]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[0]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[0]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[0]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_csus XDMACCHID[0]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[0]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[0]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[0]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[0]_xdmac_cdus XDMACCHID[0]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[0]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[0]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[0]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_cie XDMACCHID[1]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[1]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_cid XDMACCHID[1]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[1]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_cim XDMACCHID[1]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[1]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_cis XDMACCHID[1]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[1]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_csa XDMACCHID[1]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[1]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[1]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[1]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_cda XDMACCHID[1]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[1]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[1]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_cnda XDMACCHID[1]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[1]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[1]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[1]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_cndc XDMACCHID[1]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[1]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[1]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[1]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_cubc XDMACCHID[1]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[1]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[1]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_cbc XDMACCHID[1]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[1]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[1]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_cc XDMACCHID[1]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[1]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[1]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[1]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[1]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[1]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[1]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_cds_msp XDMACCHID[1]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[1]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[1]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[1]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[1]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_csus XDMACCHID[1]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[1]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[1]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[1]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[1]_xdmac_cdus XDMACCHID[1]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[1]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[1]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[1]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_cie XDMACCHID[2]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[2]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_cid XDMACCHID[2]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[2]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_cim XDMACCHID[2]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[2]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_cis XDMACCHID[2]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[2]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_csa XDMACCHID[2]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[2]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[2]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[2]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_cda XDMACCHID[2]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[2]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[2]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_cnda XDMACCHID[2]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[2]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[2]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[2]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_cndc XDMACCHID[2]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[2]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[2]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[2]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_cubc XDMACCHID[2]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[2]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[2]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_cbc XDMACCHID[2]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[2]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[2]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_cc XDMACCHID[2]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[2]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[2]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[2]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[2]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[2]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[2]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_cds_msp XDMACCHID[2]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[2]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[2]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[2]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[2]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_csus XDMACCHID[2]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[2]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[2]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[2]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[2]_xdmac_cdus XDMACCHID[2]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[2]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[2]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[2]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_cie XDMACCHID[3]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[3]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_cid XDMACCHID[3]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[3]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_cim XDMACCHID[3]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[3]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_cis XDMACCHID[3]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[3]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_csa XDMACCHID[3]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[3]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[3]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[3]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_cda XDMACCHID[3]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[3]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[3]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_cnda XDMACCHID[3]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[3]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[3]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[3]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_cndc XDMACCHID[3]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[3]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[3]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[3]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_cubc XDMACCHID[3]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[3]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[3]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_cbc XDMACCHID[3]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[3]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[3]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_cc XDMACCHID[3]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[3]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[3]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[3]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[3]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[3]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[3]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_cds_msp XDMACCHID[3]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[3]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[3]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[3]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[3]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_csus XDMACCHID[3]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[3]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[3]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[3]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[3]_xdmac_cdus XDMACCHID[3]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[3]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[3]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[3]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_cie XDMACCHID[4]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[4]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_cid XDMACCHID[4]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[4]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_cim XDMACCHID[4]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[4]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_cis XDMACCHID[4]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[4]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_csa XDMACCHID[4]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[4]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[4]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[4]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_cda XDMACCHID[4]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[4]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[4]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_cnda XDMACCHID[4]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[4]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[4]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[4]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_cndc XDMACCHID[4]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[4]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[4]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[4]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_cubc XDMACCHID[4]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[4]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[4]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_cbc XDMACCHID[4]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[4]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[4]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_cc XDMACCHID[4]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[4]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[4]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[4]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[4]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[4]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[4]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_cds_msp XDMACCHID[4]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[4]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[4]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[4]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[4]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_csus XDMACCHID[4]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[4]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[4]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[4]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[4]_xdmac_cdus XDMACCHID[4]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[4]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[4]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[4]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_cie XDMACCHID[5]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[5]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_cid XDMACCHID[5]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[5]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_cim XDMACCHID[5]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[5]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_cis XDMACCHID[5]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[5]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_csa XDMACCHID[5]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[5]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[5]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[5]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_cda XDMACCHID[5]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[5]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[5]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_cnda XDMACCHID[5]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[5]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[5]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[5]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_cndc XDMACCHID[5]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[5]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[5]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[5]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_cubc XDMACCHID[5]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[5]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[5]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_cbc XDMACCHID[5]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[5]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[5]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_cc XDMACCHID[5]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[5]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[5]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[5]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[5]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[5]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[5]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_cds_msp XDMACCHID[5]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[5]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[5]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[5]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[5]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_csus XDMACCHID[5]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[5]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[5]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[5]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[5]_xdmac_cdus XDMACCHID[5]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[5]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[5]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[5]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_cie XDMACCHID[6]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[6]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_cid XDMACCHID[6]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[6]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_cim XDMACCHID[6]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[6]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_cis XDMACCHID[6]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[6]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_csa XDMACCHID[6]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[6]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[6]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[6]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_cda XDMACCHID[6]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[6]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[6]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_cnda XDMACCHID[6]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[6]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[6]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[6]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_cndc XDMACCHID[6]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[6]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[6]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[6]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_cubc XDMACCHID[6]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[6]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[6]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_cbc XDMACCHID[6]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[6]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[6]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_cc XDMACCHID[6]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[6]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[6]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[6]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[6]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[6]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[6]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_cds_msp XDMACCHID[6]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[6]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[6]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[6]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[6]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_csus XDMACCHID[6]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[6]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[6]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[6]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[6]_xdmac_cdus XDMACCHID[6]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[6]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[6]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[6]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_cie XDMACCHID[7]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[7]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_cid XDMACCHID[7]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[7]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_cim XDMACCHID[7]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[7]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_cis XDMACCHID[7]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[7]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_csa XDMACCHID[7]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[7]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[7]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[7]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_cda XDMACCHID[7]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[7]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[7]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_cnda XDMACCHID[7]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[7]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[7]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[7]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_cndc XDMACCHID[7]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[7]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[7]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[7]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_cubc XDMACCHID[7]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[7]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[7]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_cbc XDMACCHID[7]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[7]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[7]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_cc XDMACCHID[7]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[7]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[7]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[7]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[7]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[7]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[7]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_cds_msp XDMACCHID[7]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[7]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[7]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[7]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[7]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_csus XDMACCHID[7]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[7]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[7]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[7]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[7]_xdmac_cdus XDMACCHID[7]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[7]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[7]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[7]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_cie XDMACCHID[8]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[8]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_cid XDMACCHID[8]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[8]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_cim XDMACCHID[8]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[8]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_cis XDMACCHID[8]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[8]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_csa XDMACCHID[8]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[8]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[8]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[8]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_cda XDMACCHID[8]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[8]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[8]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_cnda XDMACCHID[8]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[8]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[8]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[8]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_cndc XDMACCHID[8]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[8]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[8]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[8]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_cubc XDMACCHID[8]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[8]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[8]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_cbc XDMACCHID[8]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[8]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[8]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_cc XDMACCHID[8]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[8]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[8]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[8]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[8]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[8]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[8]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_cds_msp XDMACCHID[8]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[8]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[8]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[8]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[8]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_csus XDMACCHID[8]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[8]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[8]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[8]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[8]_xdmac_cdus XDMACCHID[8]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[8]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[8]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[8]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_cie XDMACCHID[9]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[9]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_cid XDMACCHID[9]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[9]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_cim XDMACCHID[9]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[9]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_cis XDMACCHID[9]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[9]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_csa XDMACCHID[9]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[9]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[9]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[9]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_cda XDMACCHID[9]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[9]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[9]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_cnda XDMACCHID[9]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[9]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[9]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[9]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_cndc XDMACCHID[9]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[9]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[9]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[9]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_cubc XDMACCHID[9]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[9]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[9]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_cbc XDMACCHID[9]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[9]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[9]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_cc XDMACCHID[9]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[9]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[9]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[9]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[9]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[9]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[9]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_cds_msp XDMACCHID[9]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[9]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[9]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[9]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[9]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_csus XDMACCHID[9]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[9]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[9]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[9]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[9]_xdmac_cdus XDMACCHID[9]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[9]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[9]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[9]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_cie XDMACCHID[10]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[10]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_cid XDMACCHID[10]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[10]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_cim XDMACCHID[10]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[10]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_cis XDMACCHID[10]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[10]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_csa XDMACCHID[10]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[10]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[10]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[10]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_cda XDMACCHID[10]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[10]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[10]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_cnda XDMACCHID[10]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[10]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[10]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[10]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_cndc XDMACCHID[10]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[10]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[10]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[10]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_cubc XDMACCHID[10]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[10]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[10]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_cbc XDMACCHID[10]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[10]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[10]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_cc XDMACCHID[10]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[10]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[10]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[10]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[10]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[10]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[10]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_cds_msp XDMACCHID[10]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[10]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[10]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[10]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[10]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_csus XDMACCHID[10]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[10]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[10]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[10]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[10]_xdmac_cdus XDMACCHID[10]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[10]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[10]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[10]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_cie XDMACCHID[11]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[11]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_cid XDMACCHID[11]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[11]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_cim XDMACCHID[11]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[11]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_cis XDMACCHID[11]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[11]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_csa XDMACCHID[11]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[11]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[11]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[11]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_cda XDMACCHID[11]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[11]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[11]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_cnda XDMACCHID[11]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[11]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[11]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[11]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_cndc XDMACCHID[11]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[11]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[11]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[11]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_cubc XDMACCHID[11]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[11]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[11]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_cbc XDMACCHID[11]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[11]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[11]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_cc XDMACCHID[11]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[11]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[11]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[11]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[11]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[11]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[11]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_cds_msp XDMACCHID[11]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[11]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[11]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[11]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[11]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_csus XDMACCHID[11]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[11]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[11]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[11]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[11]_xdmac_cdus XDMACCHID[11]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[11]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[11]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[11]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_cie XDMACCHID[12]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[12]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_cid XDMACCHID[12]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[12]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_cim XDMACCHID[12]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[12]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_cis XDMACCHID[12]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[12]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_csa XDMACCHID[12]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[12]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[12]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[12]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_cda XDMACCHID[12]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[12]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[12]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_cnda XDMACCHID[12]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[12]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[12]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[12]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_cndc XDMACCHID[12]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[12]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[12]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[12]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_cubc XDMACCHID[12]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[12]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[12]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_cbc XDMACCHID[12]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[12]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[12]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_cc XDMACCHID[12]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[12]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[12]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[12]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[12]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[12]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[12]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_cds_msp XDMACCHID[12]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[12]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[12]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[12]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[12]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_csus XDMACCHID[12]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[12]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[12]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[12]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[12]_xdmac_cdus XDMACCHID[12]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[12]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[12]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[12]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_cie XDMACCHID[13]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[13]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_cid XDMACCHID[13]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[13]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_cim XDMACCHID[13]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[13]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_cis XDMACCHID[13]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[13]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_csa XDMACCHID[13]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[13]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[13]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[13]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_cda XDMACCHID[13]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[13]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[13]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_cnda XDMACCHID[13]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[13]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[13]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[13]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_cndc XDMACCHID[13]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[13]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[13]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[13]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_cubc XDMACCHID[13]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[13]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[13]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_cbc XDMACCHID[13]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[13]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[13]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_cc XDMACCHID[13]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[13]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[13]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[13]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[13]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[13]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[13]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_cds_msp XDMACCHID[13]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[13]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[13]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[13]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[13]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_csus XDMACCHID[13]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[13]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[13]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[13]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[13]_xdmac_cdus XDMACCHID[13]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[13]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[13]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[13]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_cie XDMACCHID[14]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[14]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_cid XDMACCHID[14]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[14]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_cim XDMACCHID[14]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[14]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_cis XDMACCHID[14]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[14]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_csa XDMACCHID[14]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[14]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[14]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[14]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_cda XDMACCHID[14]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[14]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[14]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_cnda XDMACCHID[14]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[14]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[14]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[14]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_cndc XDMACCHID[14]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[14]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[14]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[14]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_cubc XDMACCHID[14]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[14]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[14]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_cbc XDMACCHID[14]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[14]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[14]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_cc XDMACCHID[14]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[14]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[14]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[14]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[14]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[14]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[14]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_cds_msp XDMACCHID[14]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[14]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[14]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[14]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[14]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_csus XDMACCHID[14]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[14]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[14]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[14]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[14]_xdmac_cdus XDMACCHID[14]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[14]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[14]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[14]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_cie XDMACCHID[15]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[15]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_cid XDMACCHID[15]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[15]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_cim XDMACCHID[15]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[15]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_cis XDMACCHID[15]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[15]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_csa XDMACCHID[15]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[15]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[15]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[15]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_cda XDMACCHID[15]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[15]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[15]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_cnda XDMACCHID[15]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[15]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[15]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[15]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_cndc XDMACCHID[15]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[15]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[15]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[15]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_cubc XDMACCHID[15]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[15]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[15]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_cbc XDMACCHID[15]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[15]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[15]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_cc XDMACCHID[15]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[15]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[15]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[15]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[15]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[15]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[15]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_cds_msp XDMACCHID[15]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[15]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[15]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[15]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[15]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_csus XDMACCHID[15]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[15]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[15]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[15]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[15]_xdmac_cdus XDMACCHID[15]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[15]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[15]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[15]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_cie XDMACCHID[16]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[16]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_cid XDMACCHID[16]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[16]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_cim XDMACCHID[16]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[16]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_cis XDMACCHID[16]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[16]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_csa XDMACCHID[16]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[16]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[16]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[16]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_cda XDMACCHID[16]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[16]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[16]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_cnda XDMACCHID[16]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[16]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[16]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[16]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_cndc XDMACCHID[16]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[16]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[16]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[16]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_cubc XDMACCHID[16]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[16]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[16]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_cbc XDMACCHID[16]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[16]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[16]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_cc XDMACCHID[16]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[16]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[16]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[16]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[16]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[16]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[16]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_cds_msp XDMACCHID[16]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[16]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[16]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[16]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[16]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_csus XDMACCHID[16]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[16]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[16]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[16]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[16]_xdmac_cdus XDMACCHID[16]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[16]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[16]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[16]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_cie XDMACCHID[17]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[17]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_cid XDMACCHID[17]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[17]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_cim XDMACCHID[17]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[17]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_cis XDMACCHID[17]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[17]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_csa XDMACCHID[17]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[17]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[17]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[17]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_cda XDMACCHID[17]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[17]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[17]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_cnda XDMACCHID[17]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[17]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[17]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[17]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_cndc XDMACCHID[17]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[17]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[17]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[17]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_cubc XDMACCHID[17]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[17]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[17]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_cbc XDMACCHID[17]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[17]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[17]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_cc XDMACCHID[17]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[17]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[17]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[17]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[17]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[17]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[17]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_cds_msp XDMACCHID[17]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[17]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[17]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[17]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[17]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_csus XDMACCHID[17]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[17]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[17]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[17]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[17]_xdmac_cdus XDMACCHID[17]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[17]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[17]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[17]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_cie XDMACCHID[18]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[18]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_cid XDMACCHID[18]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[18]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_cim XDMACCHID[18]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[18]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_cis XDMACCHID[18]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[18]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_csa XDMACCHID[18]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[18]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[18]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[18]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_cda XDMACCHID[18]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[18]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[18]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_cnda XDMACCHID[18]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[18]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[18]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[18]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_cndc XDMACCHID[18]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[18]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[18]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[18]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_cubc XDMACCHID[18]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[18]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[18]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_cbc XDMACCHID[18]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[18]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[18]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_cc XDMACCHID[18]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[18]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[18]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[18]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[18]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[18]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[18]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_cds_msp XDMACCHID[18]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[18]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[18]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[18]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[18]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_csus XDMACCHID[18]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[18]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[18]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[18]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[18]_xdmac_cdus XDMACCHID[18]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[18]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[18]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[18]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_cie XDMACCHID[19]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[19]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_cid XDMACCHID[19]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[19]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_cim XDMACCHID[19]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[19]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_cis XDMACCHID[19]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[19]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_csa XDMACCHID[19]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[19]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[19]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[19]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_cda XDMACCHID[19]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[19]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[19]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_cnda XDMACCHID[19]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[19]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[19]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[19]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_cndc XDMACCHID[19]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[19]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[19]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[19]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_cubc XDMACCHID[19]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[19]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[19]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_cbc XDMACCHID[19]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[19]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[19]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_cc XDMACCHID[19]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[19]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[19]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[19]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[19]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[19]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[19]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_cds_msp XDMACCHID[19]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[19]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[19]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[19]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[19]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_csus XDMACCHID[19]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[19]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[19]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[19]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[19]_xdmac_cdus XDMACCHID[19]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[19]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[19]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[19]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_cie XDMACCHID[20]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[20]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_cid XDMACCHID[20]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[20]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_cim XDMACCHID[20]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[20]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_cis XDMACCHID[20]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[20]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_csa XDMACCHID[20]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[20]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[20]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[20]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_cda XDMACCHID[20]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[20]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[20]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_cnda XDMACCHID[20]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[20]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[20]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[20]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_cndc XDMACCHID[20]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[20]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[20]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[20]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_cubc XDMACCHID[20]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[20]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[20]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_cbc XDMACCHID[20]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[20]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[20]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_cc XDMACCHID[20]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[20]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[20]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[20]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[20]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[20]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[20]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_cds_msp XDMACCHID[20]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[20]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[20]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[20]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[20]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_csus XDMACCHID[20]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[20]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[20]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[20]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[20]_xdmac_cdus XDMACCHID[20]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[20]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[20]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[20]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_cie XDMACCHID[21]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[21]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_cid XDMACCHID[21]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[21]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_cim XDMACCHID[21]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[21]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_cis XDMACCHID[21]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[21]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_csa XDMACCHID[21]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[21]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[21]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[21]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_cda XDMACCHID[21]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[21]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[21]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_cnda XDMACCHID[21]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[21]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[21]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[21]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_cndc XDMACCHID[21]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[21]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[21]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[21]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_cubc XDMACCHID[21]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[21]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[21]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_cbc XDMACCHID[21]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[21]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[21]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_cc XDMACCHID[21]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[21]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[21]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[21]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[21]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[21]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[21]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_cds_msp XDMACCHID[21]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[21]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[21]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[21]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[21]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_csus XDMACCHID[21]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[21]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[21]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[21]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[21]_xdmac_cdus XDMACCHID[21]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[21]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[21]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[21]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_cie XDMACCHID[22]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[22]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_cid XDMACCHID[22]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[22]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_cim XDMACCHID[22]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[22]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_cis XDMACCHID[22]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[22]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_csa XDMACCHID[22]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[22]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[22]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[22]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_cda XDMACCHID[22]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[22]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[22]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_cnda XDMACCHID[22]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[22]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[22]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[22]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_cndc XDMACCHID[22]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[22]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[22]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[22]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_cubc XDMACCHID[22]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[22]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[22]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_cbc XDMACCHID[22]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[22]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[22]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_cc XDMACCHID[22]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[22]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[22]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[22]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[22]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[22]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[22]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_cds_msp XDMACCHID[22]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[22]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[22]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[22]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[22]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_csus XDMACCHID[22]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[22]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[22]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[22]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[22]_xdmac_cdus XDMACCHID[22]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[22]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[22]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[22]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_cie XDMACCHID[23]XDMACCIE Channel Interrupt Enable Register
@{*/

/** XDMAC_XDMAC_CHID[23]_XDMAC_CIE_ROIE Request Overflow Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIE_ROIE		(1 << 6)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIE_WBIE Write Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIE_WBIE		(1 << 5)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIE_RBIE Read Bus Error Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIE_RBIE		(1 << 4)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIE_FIE End of Flush Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIE_FIE		(1 << 3)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIE_DIE End of Disable Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIE_DIE		(1 << 2)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIE_LIE End of Linked List Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIE_LIE		(1 << 1)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIE_BIE End of Block Interrupt Enable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIE_BIE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_cid XDMACCHID[23]XDMACCID Channel Interrupt Disable Register
@{*/

/** XDMAC_XDMAC_CHID[23]_XDMAC_CID_ROID Request Overflow Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CID_ROID		(1 << 6)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CID_WBEID Write Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CID_WBEID		(1 << 5)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CID_RBEID Read Bus Error Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CID_RBEID		(1 << 4)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CID_FID End of Flush Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CID_FID		(1 << 3)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CID_DID End of Disable Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CID_DID		(1 << 2)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CID_LID End of Linked List Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CID_LID		(1 << 1)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CID_BID End of Block Interrupt Disable Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CID_BID		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_cim XDMACCHID[23]XDMACCIM Channel Interrupt Mask Register
@{*/

/** XDMAC_XDMAC_CHID[23]_XDMAC_CIM_ROIM Request Overflow Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIM_ROIM		(1 << 6)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIM_WBEIM Write Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIM_WBEIM		(1 << 5)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIM_RBEIM Read Bus Error Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIM_RBEIM		(1 << 4)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIM_FIM End of Flush Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIM_FIM		(1 << 3)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIM_DIM End of Disable Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIM_DIM		(1 << 2)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIM_LIM End of Linked List Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIM_LIM		(1 << 1)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIM_BIM End of Block Interrupt Mask Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIM_BIM		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_cis XDMACCHID[23]XDMACCIS Channel Interrupt Status Register
@{*/

/** XDMAC_XDMAC_CHID[23]_XDMAC_CIS_ROIS Request Overflow Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIS_ROIS		(1 << 6)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIS_WBEIS Write Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIS_WBEIS		(1 << 5)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIS_RBEIS Read Bus Error Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIS_RBEIS		(1 << 4)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIS_FIS End of Flush Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIS_FIS		(1 << 3)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIS_DIS End of Disable Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIS_DIS		(1 << 2)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIS_LIS End of Linked List Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIS_LIS		(1 << 1)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CIS_BIS End of Block Interrupt Status Bit **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CIS_BIS		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_csa XDMACCHID[23]XDMACCSA Channel Source Address Register
@{*/


#define XDMAC_XDMAC_CHID[23]_XDMAC_CSA_SA_SHIFT		0
#define XDMAC_XDMAC_CHID[23]_XDMAC_CSA_SA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[23]_xdmac_csa_sa SA Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_cda XDMACCHID[23]XDMACCDA Channel Destination Address Register
@{*/


#define XDMAC_XDMAC_CHID[23]_XDMAC_CDA_DA_SHIFT		0
#define XDMAC_XDMAC_CHID[23]_XDMAC_CDA_DA_MASK		0xffffffff
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cda_da DA Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_cnda XDMACCHID[23]XDMACCNDA Channel Next Descriptor Address Register
@{*/


#define XDMAC_XDMAC_CHID[23]_XDMAC_CNDA_NDA_SHIFT		2
#define XDMAC_XDMAC_CHID[23]_XDMAC_CNDA_NDA_MASK		0x3fffffff
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cnda_nda NDA Channel x Next Descriptor Address
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[23]_XDMAC_CNDA_NDAIF Channel x Next Descriptor Interface **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CNDA_NDAIF		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_cndc XDMACCHID[23]XDMACCNDC Channel Next Descriptor Control Register
@{*/


#define XDMAC_XDMAC_CHID[23]_XDMAC_CNDC_NDVIEW_SHIFT		3
#define XDMAC_XDMAC_CHID[23]_XDMAC_CNDC_NDVIEW_MASK		0x03
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cndc_ndview NDVIEW Channel x Next Descriptor View
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[23]_XDMAC_CNDC_NDDUP Channel x Next Descriptor Destination Update **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CNDC_NDDUP		(1 << 2)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CNDC_NDSUP Channel x Next Descriptor Source Update **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CNDC_NDSUP		(1 << 1)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CNDC_NDE Channel x Next Descriptor Enable **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CNDC_NDE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_cubc XDMACCHID[23]XDMACCUBC Channel Microblock Control Register
@{*/


#define XDMAC_XDMAC_CHID[23]_XDMAC_CUBC_UBLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[23]_XDMAC_CUBC_UBLEN_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cubc_ublen UBLEN Channel x Microblock Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_cbc XDMACCHID[23]XDMACCBC Channel Block Control Register
@{*/


#define XDMAC_XDMAC_CHID[23]_XDMAC_CBC_BLEN_SHIFT		0
#define XDMAC_XDMAC_CHID[23]_XDMAC_CBC_BLEN_MASK		0xfff
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cbc_blen BLEN Channel x Block Length
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_cc XDMACCHID[23]XDMACCC Channel Configuration Register
@{*/


#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_PERID_SHIFT		24
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_PERID_MASK		0x7f
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cc_perid PERID Channel x Peripheral Hardware Request Line Identifier
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[23]_XDMAC_CC_WRIP Write in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_WRIP		(1 << 23)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CC_RDIP Read in Progress (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_RDIP		(1 << 22)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CC_INITD Channel Initialization Terminated (this bit is read-only) **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_INITD		(1 << 21)

#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_DAM_SHIFT		18
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_DAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cc_dam DAM Channel x Destination Addressing Mode
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_SAM_SHIFT		16
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_SAM_MASK		0x03
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cc_sam SAM Channel x Source Addressing Mode
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[23]_XDMAC_CC_DIF Channel x Destination Interface Identifier **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_DIF		(1 << 14)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CC_SIF Channel x Source Interface Identifier **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_SIF		(1 << 13)

#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_DWIDTH_SHIFT		11
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_DWIDTH_MASK		0x03
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cc_dwidth DWIDTH Channel x Data Width
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_CSIZE_SHIFT		8
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_CSIZE_MASK		0x07
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cc_csize CSIZE Channel x Chunk Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[23]_XDMAC_CC_MEMSET Channel x Fill Block of memory **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_MEMSET		(1 << 7)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CC_SWREQ Channel x Software Request Trigger **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_SWREQ		(1 << 6)
/** XDMAC_XDMAC_CHID[23]_XDMAC_CC_DSYNC Channel x Synchronization **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_DSYNC		(1 << 4)

#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_MBSIZE_SHIFT		1
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_MBSIZE_MASK		0x03
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cc_mbsize MBSIZE Channel x Memory Burst Size
@{*/
/**@}*/

/** XDMAC_XDMAC_CHID[23]_XDMAC_CC_TYPE Channel x Transfer Type **/
#define XDMAC_XDMAC_CHID[23]_XDMAC_CC_TYPE		(1 << 0)

/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_cds_msp XDMACCHID[23]XDMACCDSMSP Channel Data Stride Memory Set Pattern
@{*/


#define XDMAC_XDMAC_CHID[23]_XDMAC_CDS_MSP_DDS_MSP_SHIFT		16
#define XDMAC_XDMAC_CHID[23]_XDMAC_CDS_MSP_DDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cds_msp_dds_msp DDSMSP Channel x Destination Data Stride or Memory Set Pattern
@{*/
/**@}*/


#define XDMAC_XDMAC_CHID[23]_XDMAC_CDS_MSP_SDS_MSP_SHIFT		0
#define XDMAC_XDMAC_CHID[23]_XDMAC_CDS_MSP_SDS_MSP_MASK		0xffff
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cds_msp_sds_msp SDSMSP Channel x Source Data stride or Memory Set Pattern
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_csus XDMACCHID[23]XDMACCSUS Channel Source Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[23]_XDMAC_CSUS_SUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[23]_XDMAC_CSUS_SUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[23]_xdmac_csus_subs SUBS Channel x Source Microblock Stride
@{*/
/**@}*/


/**@}*/

/** @defgroup xdmac_xdmac_chid[23]_xdmac_cdus XDMACCHID[23]XDMACCDUS Channel Destination Microblock Stride
@{*/


#define XDMAC_XDMAC_CHID[23]_XDMAC_CDUS_DUBS_SHIFT		0
#define XDMAC_XDMAC_CHID[23]_XDMAC_CDUS_DUBS_MASK		0xffffff
/** @defgroup xdmac_xdmac_chid[23]_xdmac_cdus_dubs DUBS Channel x Destination Microblock Stride
@{*/
/**@}*/


/**@}*/

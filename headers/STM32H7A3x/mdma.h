#pragma once 

/* --- MDMA: MDMA --------------------------------------------------- */

/** @defgroup mdma_registers MDMA Register
@{*/

/** MDMA_GISR0 MDMA Global Interrupt/Status Register **/
#define MDMA_GISR0			MMIO32(MDMA_BASE + 0x00)
/** MDMA_C0ISR MDMA channel x interrupt/status register **/
#define MDMA_C0ISR			MMIO32(MDMA_BASE + 0x40)
/** MDMA_C0IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C0IFCR			MMIO32(MDMA_BASE + 0x44)
/** MDMA_C0ESR MDMA Channel x error status register **/
#define MDMA_C0ESR			MMIO32(MDMA_BASE + 0x48)
/** MDMA_C0CR This register is used to control the concerned channel. **/
#define MDMA_C0CR			MMIO32(MDMA_BASE + 0x4c)
/** MDMA_C0TCR This register is used to configure the concerned channel. **/
#define MDMA_C0TCR			MMIO32(MDMA_BASE + 0x50)
/** MDMA_C0BNDTR MDMA Channel x block number of data register **/
#define MDMA_C0BNDTR			MMIO32(MDMA_BASE + 0x54)
/** MDMA_C0SAR MDMA channel x source address register **/
#define MDMA_C0SAR			MMIO32(MDMA_BASE + 0x58)
/** MDMA_C0DAR MDMA channel x destination address register **/
#define MDMA_C0DAR			MMIO32(MDMA_BASE + 0x5c)
/** MDMA_C0BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C0BRUR			MMIO32(MDMA_BASE + 0x60)
/** MDMA_C0LAR MDMA channel x Link Address register **/
#define MDMA_C0LAR			MMIO32(MDMA_BASE + 0x64)
/** MDMA_C0TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C0TBR			MMIO32(MDMA_BASE + 0x68)
/** MDMA_C0MAR MDMA channel x Mask address register **/
#define MDMA_C0MAR			MMIO32(MDMA_BASE + 0x70)
/** MDMA_C0MDR MDMA channel x Mask Data register **/
#define MDMA_C0MDR			MMIO32(MDMA_BASE + 0x74)
/** MDMA_C1ISR MDMA channel x interrupt/status register **/
#define MDMA_C1ISR			MMIO32(MDMA_BASE + 0x80)
/** MDMA_C1IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C1IFCR			MMIO32(MDMA_BASE + 0x84)
/** MDMA_C1ESR MDMA Channel x error status register **/
#define MDMA_C1ESR			MMIO32(MDMA_BASE + 0x88)
/** MDMA_C1CR This register is used to control the concerned channel. **/
#define MDMA_C1CR			MMIO32(MDMA_BASE + 0x8c)
/** MDMA_C1TCR This register is used to configure the concerned channel. **/
#define MDMA_C1TCR			MMIO32(MDMA_BASE + 0x90)
/** MDMA_C1BNDTR MDMA Channel x block number of data register **/
#define MDMA_C1BNDTR			MMIO32(MDMA_BASE + 0x94)
/** MDMA_C1SAR MDMA channel x source address register **/
#define MDMA_C1SAR			MMIO32(MDMA_BASE + 0x98)
/** MDMA_C1DAR MDMA channel x destination address register **/
#define MDMA_C1DAR			MMIO32(MDMA_BASE + 0x9c)
/** MDMA_C1BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C1BRUR			MMIO32(MDMA_BASE + 0xa0)
/** MDMA_C1LAR MDMA channel x Link Address register **/
#define MDMA_C1LAR			MMIO32(MDMA_BASE + 0xa4)
/** MDMA_C1TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C1TBR			MMIO32(MDMA_BASE + 0xa8)
/** MDMA_C1MAR MDMA channel x Mask address register **/
#define MDMA_C1MAR			MMIO32(MDMA_BASE + 0xb0)
/** MDMA_C1MDR MDMA channel x Mask Data register **/
#define MDMA_C1MDR			MMIO32(MDMA_BASE + 0xb4)
/** MDMA_C2ISR MDMA channel x interrupt/status register **/
#define MDMA_C2ISR			MMIO32(MDMA_BASE + 0xc0)
/** MDMA_C2IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C2IFCR			MMIO32(MDMA_BASE + 0xc4)
/** MDMA_C2ESR MDMA Channel x error status register **/
#define MDMA_C2ESR			MMIO32(MDMA_BASE + 0xc8)
/** MDMA_C2CR This register is used to control the concerned channel. **/
#define MDMA_C2CR			MMIO32(MDMA_BASE + 0xcc)
/** MDMA_C2TCR This register is used to configure the concerned channel. **/
#define MDMA_C2TCR			MMIO32(MDMA_BASE + 0xd0)
/** MDMA_C2BNDTR MDMA Channel x block number of data register **/
#define MDMA_C2BNDTR			MMIO32(MDMA_BASE + 0xd4)
/** MDMA_C2SAR MDMA channel x source address register **/
#define MDMA_C2SAR			MMIO32(MDMA_BASE + 0xd8)
/** MDMA_C2DAR MDMA channel x destination address register **/
#define MDMA_C2DAR			MMIO32(MDMA_BASE + 0xdc)
/** MDMA_C2BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C2BRUR			MMIO32(MDMA_BASE + 0xe0)
/** MDMA_C2LAR MDMA channel x Link Address register **/
#define MDMA_C2LAR			MMIO32(MDMA_BASE + 0xe4)
/** MDMA_C2TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C2TBR			MMIO32(MDMA_BASE + 0xe8)
/** MDMA_C2MAR MDMA channel x Mask address register **/
#define MDMA_C2MAR			MMIO32(MDMA_BASE + 0xf0)
/** MDMA_C2MDR MDMA channel x Mask Data register **/
#define MDMA_C2MDR			MMIO32(MDMA_BASE + 0xf4)
/** MDMA_C3ISR MDMA channel x interrupt/status register **/
#define MDMA_C3ISR			MMIO32(MDMA_BASE + 0x100)
/** MDMA_C3IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C3IFCR			MMIO32(MDMA_BASE + 0x104)
/** MDMA_C3ESR MDMA Channel x error status register **/
#define MDMA_C3ESR			MMIO32(MDMA_BASE + 0x108)
/** MDMA_C3CR This register is used to control the concerned channel. **/
#define MDMA_C3CR			MMIO32(MDMA_BASE + 0x10c)
/** MDMA_C3TCR This register is used to configure the concerned channel. **/
#define MDMA_C3TCR			MMIO32(MDMA_BASE + 0x110)
/** MDMA_C3BNDTR MDMA Channel x block number of data register **/
#define MDMA_C3BNDTR			MMIO32(MDMA_BASE + 0x114)
/** MDMA_C3SAR MDMA channel x source address register **/
#define MDMA_C3SAR			MMIO32(MDMA_BASE + 0x118)
/** MDMA_C3DAR MDMA channel x destination address register **/
#define MDMA_C3DAR			MMIO32(MDMA_BASE + 0x11c)
/** MDMA_C3BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C3BRUR			MMIO32(MDMA_BASE + 0x120)
/** MDMA_C3LAR MDMA channel x Link Address register **/
#define MDMA_C3LAR			MMIO32(MDMA_BASE + 0x124)
/** MDMA_C3TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C3TBR			MMIO32(MDMA_BASE + 0x128)
/** MDMA_C3MAR MDMA channel x Mask address register **/
#define MDMA_C3MAR			MMIO32(MDMA_BASE + 0x130)
/** MDMA_C3MDR MDMA channel x Mask Data register **/
#define MDMA_C3MDR			MMIO32(MDMA_BASE + 0x134)
/** MDMA_C4ISR MDMA channel x interrupt/status register **/
#define MDMA_C4ISR			MMIO32(MDMA_BASE + 0x140)
/** MDMA_C4IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C4IFCR			MMIO32(MDMA_BASE + 0x144)
/** MDMA_C4ESR MDMA Channel x error status register **/
#define MDMA_C4ESR			MMIO32(MDMA_BASE + 0x148)
/** MDMA_C4CR This register is used to control the concerned channel. **/
#define MDMA_C4CR			MMIO32(MDMA_BASE + 0x14c)
/** MDMA_C4TCR This register is used to configure the concerned channel. **/
#define MDMA_C4TCR			MMIO32(MDMA_BASE + 0x150)
/** MDMA_C4BNDTR MDMA Channel x block number of data register **/
#define MDMA_C4BNDTR			MMIO32(MDMA_BASE + 0x154)
/** MDMA_C4SAR MDMA channel x source address register **/
#define MDMA_C4SAR			MMIO32(MDMA_BASE + 0x158)
/** MDMA_C4DAR MDMA channel x destination address register **/
#define MDMA_C4DAR			MMIO32(MDMA_BASE + 0x15c)
/** MDMA_C4BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C4BRUR			MMIO32(MDMA_BASE + 0x160)
/** MDMA_C4LAR MDMA channel x Link Address register **/
#define MDMA_C4LAR			MMIO32(MDMA_BASE + 0x164)
/** MDMA_C4TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C4TBR			MMIO32(MDMA_BASE + 0x168)
/** MDMA_C4MAR MDMA channel x Mask address register **/
#define MDMA_C4MAR			MMIO32(MDMA_BASE + 0x170)
/** MDMA_C4MDR MDMA channel x Mask Data register **/
#define MDMA_C4MDR			MMIO32(MDMA_BASE + 0x174)
/** MDMA_C5ISR MDMA channel x interrupt/status register **/
#define MDMA_C5ISR			MMIO32(MDMA_BASE + 0x180)
/** MDMA_C5IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C5IFCR			MMIO32(MDMA_BASE + 0x184)
/** MDMA_C5ESR MDMA Channel x error status register **/
#define MDMA_C5ESR			MMIO32(MDMA_BASE + 0x188)
/** MDMA_C5CR This register is used to control the concerned channel. **/
#define MDMA_C5CR			MMIO32(MDMA_BASE + 0x18c)
/** MDMA_C5TCR This register is used to configure the concerned channel. **/
#define MDMA_C5TCR			MMIO32(MDMA_BASE + 0x190)
/** MDMA_C5BNDTR MDMA Channel x block number of data register **/
#define MDMA_C5BNDTR			MMIO32(MDMA_BASE + 0x194)
/** MDMA_C5SAR MDMA channel x source address register **/
#define MDMA_C5SAR			MMIO32(MDMA_BASE + 0x198)
/** MDMA_C5DAR MDMA channel x destination address register **/
#define MDMA_C5DAR			MMIO32(MDMA_BASE + 0x19c)
/** MDMA_C5BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C5BRUR			MMIO32(MDMA_BASE + 0x1a0)
/** MDMA_C5LAR MDMA channel x Link Address register **/
#define MDMA_C5LAR			MMIO32(MDMA_BASE + 0x1a4)
/** MDMA_C5TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C5TBR			MMIO32(MDMA_BASE + 0x1a8)
/** MDMA_C5MAR MDMA channel x Mask address register **/
#define MDMA_C5MAR			MMIO32(MDMA_BASE + 0x1b0)
/** MDMA_C5MDR MDMA channel x Mask Data register **/
#define MDMA_C5MDR			MMIO32(MDMA_BASE + 0x1b4)
/** MDMA_C6ISR MDMA channel x interrupt/status register **/
#define MDMA_C6ISR			MMIO32(MDMA_BASE + 0x1c0)
/** MDMA_C6IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C6IFCR			MMIO32(MDMA_BASE + 0x1c4)
/** MDMA_C6ESR MDMA Channel x error status register **/
#define MDMA_C6ESR			MMIO32(MDMA_BASE + 0x1c8)
/** MDMA_C6CR This register is used to control the concerned channel. **/
#define MDMA_C6CR			MMIO32(MDMA_BASE + 0x1cc)
/** MDMA_C6TCR This register is used to configure the concerned channel. **/
#define MDMA_C6TCR			MMIO32(MDMA_BASE + 0x1d0)
/** MDMA_C6BNDTR MDMA Channel x block number of data register **/
#define MDMA_C6BNDTR			MMIO32(MDMA_BASE + 0x1d4)
/** MDMA_C6SAR MDMA channel x source address register **/
#define MDMA_C6SAR			MMIO32(MDMA_BASE + 0x1d8)
/** MDMA_C6DAR MDMA channel x destination address register **/
#define MDMA_C6DAR			MMIO32(MDMA_BASE + 0x1dc)
/** MDMA_C6BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C6BRUR			MMIO32(MDMA_BASE + 0x1e0)
/** MDMA_C6LAR MDMA channel x Link Address register **/
#define MDMA_C6LAR			MMIO32(MDMA_BASE + 0x1e4)
/** MDMA_C6TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C6TBR			MMIO32(MDMA_BASE + 0x1e8)
/** MDMA_C6MAR MDMA channel x Mask address register **/
#define MDMA_C6MAR			MMIO32(MDMA_BASE + 0x1f0)
/** MDMA_C6MDR MDMA channel x Mask Data register **/
#define MDMA_C6MDR			MMIO32(MDMA_BASE + 0x1f4)
/** MDMA_C7ISR MDMA channel x interrupt/status register **/
#define MDMA_C7ISR			MMIO32(MDMA_BASE + 0x200)
/** MDMA_C7IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C7IFCR			MMIO32(MDMA_BASE + 0x204)
/** MDMA_C7ESR MDMA Channel x error status register **/
#define MDMA_C7ESR			MMIO32(MDMA_BASE + 0x208)
/** MDMA_C7CR This register is used to control the concerned channel. **/
#define MDMA_C7CR			MMIO32(MDMA_BASE + 0x20c)
/** MDMA_C7TCR This register is used to configure the concerned channel. **/
#define MDMA_C7TCR			MMIO32(MDMA_BASE + 0x210)
/** MDMA_C7BNDTR MDMA Channel x block number of data register **/
#define MDMA_C7BNDTR			MMIO32(MDMA_BASE + 0x214)
/** MDMA_C7SAR MDMA channel x source address register **/
#define MDMA_C7SAR			MMIO32(MDMA_BASE + 0x218)
/** MDMA_C7DAR MDMA channel x destination address register **/
#define MDMA_C7DAR			MMIO32(MDMA_BASE + 0x21c)
/** MDMA_C7BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C7BRUR			MMIO32(MDMA_BASE + 0x220)
/** MDMA_C7LAR MDMA channel x Link Address register **/
#define MDMA_C7LAR			MMIO32(MDMA_BASE + 0x224)
/** MDMA_C7TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C7TBR			MMIO32(MDMA_BASE + 0x228)
/** MDMA_C7MAR MDMA channel x Mask address register **/
#define MDMA_C7MAR			MMIO32(MDMA_BASE + 0x230)
/** MDMA_C7MDR MDMA channel x Mask Data register **/
#define MDMA_C7MDR			MMIO32(MDMA_BASE + 0x234)
/** MDMA_C8ISR MDMA channel x interrupt/status register **/
#define MDMA_C8ISR			MMIO32(MDMA_BASE + 0x240)
/** MDMA_C8IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C8IFCR			MMIO32(MDMA_BASE + 0x244)
/** MDMA_C8ESR MDMA Channel x error status register **/
#define MDMA_C8ESR			MMIO32(MDMA_BASE + 0x248)
/** MDMA_C8CR This register is used to control the concerned channel. **/
#define MDMA_C8CR			MMIO32(MDMA_BASE + 0x24c)
/** MDMA_C8TCR This register is used to configure the concerned channel. **/
#define MDMA_C8TCR			MMIO32(MDMA_BASE + 0x250)
/** MDMA_C8BNDTR MDMA Channel x block number of data register **/
#define MDMA_C8BNDTR			MMIO32(MDMA_BASE + 0x254)
/** MDMA_C8SAR MDMA channel x source address register **/
#define MDMA_C8SAR			MMIO32(MDMA_BASE + 0x258)
/** MDMA_C8DAR MDMA channel x destination address register **/
#define MDMA_C8DAR			MMIO32(MDMA_BASE + 0x25c)
/** MDMA_C8BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C8BRUR			MMIO32(MDMA_BASE + 0x260)
/** MDMA_C8LAR MDMA channel x Link Address register **/
#define MDMA_C8LAR			MMIO32(MDMA_BASE + 0x264)
/** MDMA_C8TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C8TBR			MMIO32(MDMA_BASE + 0x268)
/** MDMA_C8MAR MDMA channel x Mask address register **/
#define MDMA_C8MAR			MMIO32(MDMA_BASE + 0x270)
/** MDMA_C8MDR MDMA channel x Mask Data register **/
#define MDMA_C8MDR			MMIO32(MDMA_BASE + 0x274)
/** MDMA_C9ISR MDMA channel x interrupt/status register **/
#define MDMA_C9ISR			MMIO32(MDMA_BASE + 0x280)
/** MDMA_C9IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C9IFCR			MMIO32(MDMA_BASE + 0x284)
/** MDMA_C9ESR MDMA Channel x error status register **/
#define MDMA_C9ESR			MMIO32(MDMA_BASE + 0x288)
/** MDMA_C9CR This register is used to control the concerned channel. **/
#define MDMA_C9CR			MMIO32(MDMA_BASE + 0x28c)
/** MDMA_C9TCR This register is used to configure the concerned channel. **/
#define MDMA_C9TCR			MMIO32(MDMA_BASE + 0x290)
/** MDMA_C9BNDTR MDMA Channel x block number of data register **/
#define MDMA_C9BNDTR			MMIO32(MDMA_BASE + 0x294)
/** MDMA_C9SAR MDMA channel x source address register **/
#define MDMA_C9SAR			MMIO32(MDMA_BASE + 0x298)
/** MDMA_C9DAR MDMA channel x destination address register **/
#define MDMA_C9DAR			MMIO32(MDMA_BASE + 0x29c)
/** MDMA_C9BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C9BRUR			MMIO32(MDMA_BASE + 0x2a0)
/** MDMA_C9LAR MDMA channel x Link Address register **/
#define MDMA_C9LAR			MMIO32(MDMA_BASE + 0x2a4)
/** MDMA_C9TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C9TBR			MMIO32(MDMA_BASE + 0x2a8)
/** MDMA_C9MAR MDMA channel x Mask address register **/
#define MDMA_C9MAR			MMIO32(MDMA_BASE + 0x2b0)
/** MDMA_C9MDR MDMA channel x Mask Data register **/
#define MDMA_C9MDR			MMIO32(MDMA_BASE + 0x2b4)
/** MDMA_C10ISR MDMA channel x interrupt/status register **/
#define MDMA_C10ISR			MMIO32(MDMA_BASE + 0x2c0)
/** MDMA_C10IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C10IFCR			MMIO32(MDMA_BASE + 0x2c4)
/** MDMA_C10ESR MDMA Channel x error status register **/
#define MDMA_C10ESR			MMIO32(MDMA_BASE + 0x2c8)
/** MDMA_C10CR This register is used to control the concerned channel. **/
#define MDMA_C10CR			MMIO32(MDMA_BASE + 0x2cc)
/** MDMA_C10TCR This register is used to configure the concerned channel. **/
#define MDMA_C10TCR			MMIO32(MDMA_BASE + 0x2d0)
/** MDMA_C10BNDTR MDMA Channel x block number of data register **/
#define MDMA_C10BNDTR			MMIO32(MDMA_BASE + 0x2d4)
/** MDMA_C10SAR MDMA channel x source address register **/
#define MDMA_C10SAR			MMIO32(MDMA_BASE + 0x2d8)
/** MDMA_C10DAR MDMA channel x destination address register **/
#define MDMA_C10DAR			MMIO32(MDMA_BASE + 0x2dc)
/** MDMA_C10BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C10BRUR			MMIO32(MDMA_BASE + 0x2e0)
/** MDMA_C10LAR MDMA channel x Link Address register **/
#define MDMA_C10LAR			MMIO32(MDMA_BASE + 0x2e4)
/** MDMA_C10TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C10TBR			MMIO32(MDMA_BASE + 0x2e8)
/** MDMA_C10MAR MDMA channel x Mask address register **/
#define MDMA_C10MAR			MMIO32(MDMA_BASE + 0x2f0)
/** MDMA_C10MDR MDMA channel x Mask Data register **/
#define MDMA_C10MDR			MMIO32(MDMA_BASE + 0x2f4)
/** MDMA_C11ISR MDMA channel x interrupt/status register **/
#define MDMA_C11ISR			MMIO32(MDMA_BASE + 0x300)
/** MDMA_C11IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C11IFCR			MMIO32(MDMA_BASE + 0x304)
/** MDMA_C11ESR MDMA Channel x error status register **/
#define MDMA_C11ESR			MMIO32(MDMA_BASE + 0x308)
/** MDMA_C11CR This register is used to control the concerned channel. **/
#define MDMA_C11CR			MMIO32(MDMA_BASE + 0x30c)
/** MDMA_C11TCR This register is used to configure the concerned channel. **/
#define MDMA_C11TCR			MMIO32(MDMA_BASE + 0x310)
/** MDMA_C11BNDTR MDMA Channel x block number of data register **/
#define MDMA_C11BNDTR			MMIO32(MDMA_BASE + 0x314)
/** MDMA_C11SAR MDMA channel x source address register **/
#define MDMA_C11SAR			MMIO32(MDMA_BASE + 0x318)
/** MDMA_C11DAR MDMA channel x destination address register **/
#define MDMA_C11DAR			MMIO32(MDMA_BASE + 0x31c)
/** MDMA_C11BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C11BRUR			MMIO32(MDMA_BASE + 0x320)
/** MDMA_C11LAR MDMA channel x Link Address register **/
#define MDMA_C11LAR			MMIO32(MDMA_BASE + 0x324)
/** MDMA_C11TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C11TBR			MMIO32(MDMA_BASE + 0x328)
/** MDMA_C11MAR MDMA channel x Mask address register **/
#define MDMA_C11MAR			MMIO32(MDMA_BASE + 0x330)
/** MDMA_C11MDR MDMA channel x Mask Data register **/
#define MDMA_C11MDR			MMIO32(MDMA_BASE + 0x334)
/** MDMA_C12ISR MDMA channel x interrupt/status register **/
#define MDMA_C12ISR			MMIO32(MDMA_BASE + 0x340)
/** MDMA_C12IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C12IFCR			MMIO32(MDMA_BASE + 0x344)
/** MDMA_C12ESR MDMA Channel x error status register **/
#define MDMA_C12ESR			MMIO32(MDMA_BASE + 0x348)
/** MDMA_C12CR This register is used to control the concerned channel. **/
#define MDMA_C12CR			MMIO32(MDMA_BASE + 0x34c)
/** MDMA_C12TCR This register is used to configure the concerned channel. **/
#define MDMA_C12TCR			MMIO32(MDMA_BASE + 0x350)
/** MDMA_C12BNDTR MDMA Channel x block number of data register **/
#define MDMA_C12BNDTR			MMIO32(MDMA_BASE + 0x354)
/** MDMA_C12SAR MDMA channel x source address register **/
#define MDMA_C12SAR			MMIO32(MDMA_BASE + 0x358)
/** MDMA_C12DAR MDMA channel x destination address register **/
#define MDMA_C12DAR			MMIO32(MDMA_BASE + 0x35c)
/** MDMA_C12BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C12BRUR			MMIO32(MDMA_BASE + 0x360)
/** MDMA_C12LAR MDMA channel x Link Address register **/
#define MDMA_C12LAR			MMIO32(MDMA_BASE + 0x364)
/** MDMA_C12TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C12TBR			MMIO32(MDMA_BASE + 0x368)
/** MDMA_C12MAR MDMA channel x Mask address register **/
#define MDMA_C12MAR			MMIO32(MDMA_BASE + 0x370)
/** MDMA_C12MDR MDMA channel x Mask Data register **/
#define MDMA_C12MDR			MMIO32(MDMA_BASE + 0x374)
/** MDMA_C13ISR MDMA channel x interrupt/status register **/
#define MDMA_C13ISR			MMIO32(MDMA_BASE + 0x380)
/** MDMA_C13IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C13IFCR			MMIO32(MDMA_BASE + 0x384)
/** MDMA_C13ESR MDMA Channel x error status register **/
#define MDMA_C13ESR			MMIO32(MDMA_BASE + 0x388)
/** MDMA_C13CR This register is used to control the concerned channel. **/
#define MDMA_C13CR			MMIO32(MDMA_BASE + 0x38c)
/** MDMA_C13TCR This register is used to configure the concerned channel. **/
#define MDMA_C13TCR			MMIO32(MDMA_BASE + 0x390)
/** MDMA_C13BNDTR MDMA Channel x block number of data register **/
#define MDMA_C13BNDTR			MMIO32(MDMA_BASE + 0x394)
/** MDMA_C13SAR MDMA channel x source address register **/
#define MDMA_C13SAR			MMIO32(MDMA_BASE + 0x398)
/** MDMA_C13DAR MDMA channel x destination address register **/
#define MDMA_C13DAR			MMIO32(MDMA_BASE + 0x39c)
/** MDMA_C13BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C13BRUR			MMIO32(MDMA_BASE + 0x3a0)
/** MDMA_C13LAR MDMA channel x Link Address register **/
#define MDMA_C13LAR			MMIO32(MDMA_BASE + 0x3a4)
/** MDMA_C13TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C13TBR			MMIO32(MDMA_BASE + 0x3a8)
/** MDMA_C13MAR MDMA channel x Mask address register **/
#define MDMA_C13MAR			MMIO32(MDMA_BASE + 0x3b0)
/** MDMA_C13MDR MDMA channel x Mask Data register **/
#define MDMA_C13MDR			MMIO32(MDMA_BASE + 0x3b4)
/** MDMA_C14ISR MDMA channel x interrupt/status register **/
#define MDMA_C14ISR			MMIO32(MDMA_BASE + 0x3c0)
/** MDMA_C14IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C14IFCR			MMIO32(MDMA_BASE + 0x3c4)
/** MDMA_C14ESR MDMA Channel x error status register **/
#define MDMA_C14ESR			MMIO32(MDMA_BASE + 0x3c8)
/** MDMA_C14CR This register is used to control the concerned channel. **/
#define MDMA_C14CR			MMIO32(MDMA_BASE + 0x3cc)
/** MDMA_C14TCR This register is used to configure the concerned channel. **/
#define MDMA_C14TCR			MMIO32(MDMA_BASE + 0x3d0)
/** MDMA_C14BNDTR MDMA Channel x block number of data register **/
#define MDMA_C14BNDTR			MMIO32(MDMA_BASE + 0x3d4)
/** MDMA_C14SAR MDMA channel x source address register **/
#define MDMA_C14SAR			MMIO32(MDMA_BASE + 0x3d8)
/** MDMA_C14DAR MDMA channel x destination address register **/
#define MDMA_C14DAR			MMIO32(MDMA_BASE + 0x3dc)
/** MDMA_C14BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C14BRUR			MMIO32(MDMA_BASE + 0x3e0)
/** MDMA_C14LAR MDMA channel x Link Address register **/
#define MDMA_C14LAR			MMIO32(MDMA_BASE + 0x3e4)
/** MDMA_C14TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C14TBR			MMIO32(MDMA_BASE + 0x3e8)
/** MDMA_C14MAR MDMA channel x Mask address register **/
#define MDMA_C14MAR			MMIO32(MDMA_BASE + 0x3f0)
/** MDMA_C14MDR MDMA channel x Mask Data register **/
#define MDMA_C14MDR			MMIO32(MDMA_BASE + 0x3f4)
/** MDMA_C15ISR MDMA channel x interrupt/status register **/
#define MDMA_C15ISR			MMIO32(MDMA_BASE + 0x400)
/** MDMA_C15IFCR MDMA channel x interrupt flag clear register **/
#define MDMA_C15IFCR			MMIO32(MDMA_BASE + 0x404)
/** MDMA_C15ESR MDMA Channel x error status register **/
#define MDMA_C15ESR			MMIO32(MDMA_BASE + 0x408)
/** MDMA_C15CR This register is used to control the concerned channel. **/
#define MDMA_C15CR			MMIO32(MDMA_BASE + 0x40c)
/** MDMA_C15TCR This register is used to configure the concerned channel. **/
#define MDMA_C15TCR			MMIO32(MDMA_BASE + 0x410)
/** MDMA_C15BNDTR MDMA Channel x block number of data register **/
#define MDMA_C15BNDTR			MMIO32(MDMA_BASE + 0x414)
/** MDMA_C15SAR MDMA channel x source address register **/
#define MDMA_C15SAR			MMIO32(MDMA_BASE + 0x418)
/** MDMA_C15DAR MDMA channel x destination address register **/
#define MDMA_C15DAR			MMIO32(MDMA_BASE + 0x41c)
/** MDMA_C15BRUR MDMA channel x Block Repeat address Update register **/
#define MDMA_C15BRUR			MMIO32(MDMA_BASE + 0x420)
/** MDMA_C15LAR MDMA channel x Link Address register **/
#define MDMA_C15LAR			MMIO32(MDMA_BASE + 0x424)
/** MDMA_C15TBR MDMA channel x Trigger and Bus selection Register **/
#define MDMA_C15TBR			MMIO32(MDMA_BASE + 0x428)
/** MDMA_C15MAR MDMA channel x Mask address register **/
#define MDMA_C15MAR			MMIO32(MDMA_BASE + 0x430)
/** MDMA_C15MDR MDMA channel x Mask Data register **/
#define MDMA_C15MDR			MMIO32(MDMA_BASE + 0x434)

/**@}*/


/** @defgroup mdma_gisr0 GISR0 MDMA Global Interrupt/Status Register
@{*/

/** MDMA_GISR0_GIF15 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF15		(1 << 15)
/** MDMA_GISR0_GIF14 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF14		(1 << 14)
/** MDMA_GISR0_GIF13 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF13		(1 << 13)
/** MDMA_GISR0_GIF12 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF12		(1 << 12)
/** MDMA_GISR0_GIF11 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF11		(1 << 11)
/** MDMA_GISR0_GIF10 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF10		(1 << 10)
/** MDMA_GISR0_GIF9 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF9		(1 << 9)
/** MDMA_GISR0_GIF8 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF8		(1 << 8)
/** MDMA_GISR0_GIF7 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF7		(1 << 7)
/** MDMA_GISR0_GIF6 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF6		(1 << 6)
/** MDMA_GISR0_GIF5 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF5		(1 << 5)
/** MDMA_GISR0_GIF4 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF4		(1 << 4)
/** MDMA_GISR0_GIF3 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF3		(1 << 3)
/** MDMA_GISR0_GIF2 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF2		(1 << 2)
/** MDMA_GISR0_GIF1 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF1		(1 << 1)
/** MDMA_GISR0_GIF0 Channel x global interrupt flag (x=...) This bit is set and reset by hardware. It is a logical OR of all the Channel x interrupt flags (CTCIFx, BTIFx, BRTIFx, TEIFx) which are enabled in the interrupt mask register (CTCIEx, BTIEx, BRTIEx, TEIEx) **/
#define MDMA_GISR0_GIF0		(1 << 0)

/**@}*/

/** @defgroup mdma_c0isr C0ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C0ISR_CRQA0 channel x request active flag **/
#define MDMA_C0ISR_CRQA0		(1 << 16)
/** MDMA_C0ISR_TCIF0 channel x buffer transfer complete **/
#define MDMA_C0ISR_TCIF0		(1 << 4)
/** MDMA_C0ISR_BTIF0 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C0ISR_BTIF0		(1 << 3)
/** MDMA_C0ISR_BRTIF0 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C0ISR_BRTIF0		(1 << 2)
/** MDMA_C0ISR_CTCIF0 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C0ISR_CTCIF0		(1 << 1)
/** MDMA_C0ISR_TEIF0 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C0ISR_TEIF0		(1 << 0)

/**@}*/

/** @defgroup mdma_c0ifcr C0IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C0IFCR_CLTCIF0 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C0IFCR_CLTCIF0		(1 << 4)
/** MDMA_C0IFCR_CBTIF0 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C0IFCR_CBTIF0		(1 << 3)
/** MDMA_C0IFCR_CBRTIF0 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C0IFCR_CBRTIF0		(1 << 2)
/** MDMA_C0IFCR_CCTCIF0 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C0IFCR_CCTCIF0		(1 << 1)
/** MDMA_C0IFCR_CTEIF0 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C0IFCR_CTEIF0		(1 << 0)

/**@}*/

/** @defgroup mdma_c0esr C0ESR MDMA Channel x error status register
@{*/

/** MDMA_C0ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C0ESR_BSE		(1 << 11)
/** MDMA_C0ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C0ESR_ASE		(1 << 10)
/** MDMA_C0ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C0ESR_TEMD		(1 << 9)
/** MDMA_C0ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C0ESR_TELD		(1 << 8)
/** MDMA_C0ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C0ESR_TED		(1 << 7)

#define MDMA_C0ESR_TEA_SHIFT		0
#define MDMA_C0ESR_TEA_MASK		0x7f
/** @defgroup mdma_c0esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c0cr C0CR This register is used to control the concerned channel.
@{*/

/** MDMA_C0CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C0CR_SWRQ		(1 << 16)
/** MDMA_C0CR_WEX Word Endianness exchange **/
#define MDMA_C0CR_WEX		(1 << 14)
/** MDMA_C0CR_HEX Half word Endianes exchange **/
#define MDMA_C0CR_HEX		(1 << 13)
/** MDMA_C0CR_BEX byte Endianness exchange **/
#define MDMA_C0CR_BEX		(1 << 12)

#define MDMA_C0CR_PL_SHIFT		6
#define MDMA_C0CR_PL_MASK		0x03
/** @defgroup mdma_c0cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C0CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C0CR_TCIE		(1 << 5)
/** MDMA_C0CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C0CR_BTIE		(1 << 4)
/** MDMA_C0CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C0CR_BRTIE		(1 << 3)
/** MDMA_C0CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C0CR_CTCIE		(1 << 2)
/** MDMA_C0CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C0CR_TEIE		(1 << 1)
/** MDMA_C0CR_EN channel enable **/
#define MDMA_C0CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c0tcr C0TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C0TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C0TCR_BWM		(1 << 31)
/** MDMA_C0TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C0TCR_SWRM		(1 << 30)

#define MDMA_C0TCR_TRGM_SHIFT		28
#define MDMA_C0TCR_TRGM_MASK		0x03
/** @defgroup mdma_c0tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C0TCR_PAM_SHIFT		26
#define MDMA_C0TCR_PAM_MASK		0x03
/** @defgroup mdma_c0tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C0TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C0TCR_PKE		(1 << 25)

#define MDMA_C0TCR_TLEN_SHIFT		18
#define MDMA_C0TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c0tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C0TCR_DBURST_SHIFT		15
#define MDMA_C0TCR_DBURST_MASK		0x07
/** @defgroup mdma_c0tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C0TCR_SBURST_SHIFT		12
#define MDMA_C0TCR_SBURST_MASK		0x07
/** @defgroup mdma_c0tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C0TCR_DINCOS_SHIFT		10
#define MDMA_C0TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c0tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C0TCR_SINCOS_SHIFT		8
#define MDMA_C0TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c0tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C0TCR_DSIZE_SHIFT		6
#define MDMA_C0TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c0tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C0TCR_SSIZE_SHIFT		4
#define MDMA_C0TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c0tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C0TCR_DINC_SHIFT		2
#define MDMA_C0TCR_DINC_MASK		0x03
/** @defgroup mdma_c0tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C0TCR_SINC_SHIFT		0
#define MDMA_C0TCR_SINC_MASK		0x03
/** @defgroup mdma_c0tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c0bndtr C0BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C0BNDTR_BRC_SHIFT		20
#define MDMA_C0BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c0bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C0BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C0BNDTR_BRDUM		(1 << 19)
/** MDMA_C0BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C0BNDTR_BRSUM		(1 << 18)

#define MDMA_C0BNDTR_BNDT_SHIFT		0
#define MDMA_C0BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c0bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c0sar C0SAR MDMA channel x source address register
@{*/


#define MDMA_C0SAR_SAR_SHIFT		0
#define MDMA_C0SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c0sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c0dar C0DAR MDMA channel x destination address register
@{*/


#define MDMA_C0DAR_DAR_SHIFT		0
#define MDMA_C0DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c0dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c0brur C0BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C0BRUR_DUV_SHIFT		16
#define MDMA_C0BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c0brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C0BRUR_SUV_SHIFT		0
#define MDMA_C0BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c0brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c0lar C0LAR MDMA channel x Link Address register
@{*/


#define MDMA_C0LAR_LAR_SHIFT		0
#define MDMA_C0LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c0lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c0tbr C0TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C0TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C0TBR_DBUS		(1 << 17)
/** MDMA_C0TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C0TBR_SBUS		(1 << 16)

#define MDMA_C0TBR_TSEL_SHIFT		0
#define MDMA_C0TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c0tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c0mar C0MAR MDMA channel x Mask address register
@{*/


#define MDMA_C0MAR_MAR_SHIFT		0
#define MDMA_C0MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c0mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c0mdr C0MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C0MDR_MDR_SHIFT		0
#define MDMA_C0MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c0mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c1isr C1ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C1ISR_CRQA1 channel x request active flag **/
#define MDMA_C1ISR_CRQA1		(1 << 16)
/** MDMA_C1ISR_TCIF1 channel x buffer transfer complete **/
#define MDMA_C1ISR_TCIF1		(1 << 4)
/** MDMA_C1ISR_BTIF1 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C1ISR_BTIF1		(1 << 3)
/** MDMA_C1ISR_BRTIF1 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C1ISR_BRTIF1		(1 << 2)
/** MDMA_C1ISR_CTCIF1 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C1ISR_CTCIF1		(1 << 1)
/** MDMA_C1ISR_TEIF1 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C1ISR_TEIF1		(1 << 0)

/**@}*/

/** @defgroup mdma_c1ifcr C1IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C1IFCR_CLTCIF1 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C1IFCR_CLTCIF1		(1 << 4)
/** MDMA_C1IFCR_CBTIF1 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C1IFCR_CBTIF1		(1 << 3)
/** MDMA_C1IFCR_CBRTIF1 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C1IFCR_CBRTIF1		(1 << 2)
/** MDMA_C1IFCR_CCTCIF1 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C1IFCR_CCTCIF1		(1 << 1)
/** MDMA_C1IFCR_CTEIF1 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C1IFCR_CTEIF1		(1 << 0)

/**@}*/

/** @defgroup mdma_c1esr C1ESR MDMA Channel x error status register
@{*/

/** MDMA_C1ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C1ESR_BSE		(1 << 11)
/** MDMA_C1ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C1ESR_ASE		(1 << 10)
/** MDMA_C1ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C1ESR_TEMD		(1 << 9)
/** MDMA_C1ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C1ESR_TELD		(1 << 8)
/** MDMA_C1ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C1ESR_TED		(1 << 7)

#define MDMA_C1ESR_TEA_SHIFT		0
#define MDMA_C1ESR_TEA_MASK		0x7f
/** @defgroup mdma_c1esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c1cr C1CR This register is used to control the concerned channel.
@{*/

/** MDMA_C1CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C1CR_SWRQ		(1 << 16)
/** MDMA_C1CR_WEX Word Endianness exchange **/
#define MDMA_C1CR_WEX		(1 << 14)
/** MDMA_C1CR_HEX Half word Endianes exchange **/
#define MDMA_C1CR_HEX		(1 << 13)
/** MDMA_C1CR_BEX byte Endianness exchange **/
#define MDMA_C1CR_BEX		(1 << 12)

#define MDMA_C1CR_PL_SHIFT		6
#define MDMA_C1CR_PL_MASK		0x03
/** @defgroup mdma_c1cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C1CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C1CR_TCIE		(1 << 5)
/** MDMA_C1CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C1CR_BTIE		(1 << 4)
/** MDMA_C1CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C1CR_BRTIE		(1 << 3)
/** MDMA_C1CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C1CR_CTCIE		(1 << 2)
/** MDMA_C1CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C1CR_TEIE		(1 << 1)
/** MDMA_C1CR_EN channel enable **/
#define MDMA_C1CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c1tcr C1TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C1TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C1TCR_BWM		(1 << 31)
/** MDMA_C1TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C1TCR_SWRM		(1 << 30)

#define MDMA_C1TCR_TRGM_SHIFT		28
#define MDMA_C1TCR_TRGM_MASK		0x03
/** @defgroup mdma_c1tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C1TCR_PAM_SHIFT		26
#define MDMA_C1TCR_PAM_MASK		0x03
/** @defgroup mdma_c1tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C1TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C1TCR_PKE		(1 << 25)

#define MDMA_C1TCR_TLEN_SHIFT		18
#define MDMA_C1TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c1tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C1TCR_DBURST_SHIFT		15
#define MDMA_C1TCR_DBURST_MASK		0x07
/** @defgroup mdma_c1tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C1TCR_SBURST_SHIFT		12
#define MDMA_C1TCR_SBURST_MASK		0x07
/** @defgroup mdma_c1tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C1TCR_DINCOS_SHIFT		10
#define MDMA_C1TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c1tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C1TCR_SINCOS_SHIFT		8
#define MDMA_C1TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c1tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C1TCR_DSIZE_SHIFT		6
#define MDMA_C1TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c1tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C1TCR_SSIZE_SHIFT		4
#define MDMA_C1TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c1tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C1TCR_DINC_SHIFT		2
#define MDMA_C1TCR_DINC_MASK		0x03
/** @defgroup mdma_c1tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C1TCR_SINC_SHIFT		0
#define MDMA_C1TCR_SINC_MASK		0x03
/** @defgroup mdma_c1tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c1bndtr C1BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C1BNDTR_BRC_SHIFT		20
#define MDMA_C1BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c1bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C1BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C1BNDTR_BRDUM		(1 << 19)
/** MDMA_C1BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C1BNDTR_BRSUM		(1 << 18)

#define MDMA_C1BNDTR_BNDT_SHIFT		0
#define MDMA_C1BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c1bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c1sar C1SAR MDMA channel x source address register
@{*/


#define MDMA_C1SAR_SAR_SHIFT		0
#define MDMA_C1SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c1sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c1dar C1DAR MDMA channel x destination address register
@{*/


#define MDMA_C1DAR_DAR_SHIFT		0
#define MDMA_C1DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c1dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c1brur C1BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C1BRUR_DUV_SHIFT		16
#define MDMA_C1BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c1brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C1BRUR_SUV_SHIFT		0
#define MDMA_C1BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c1brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c1lar C1LAR MDMA channel x Link Address register
@{*/


#define MDMA_C1LAR_LAR_SHIFT		0
#define MDMA_C1LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c1lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c1tbr C1TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C1TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C1TBR_DBUS		(1 << 17)
/** MDMA_C1TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C1TBR_SBUS		(1 << 16)

#define MDMA_C1TBR_TSEL_SHIFT		0
#define MDMA_C1TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c1tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c1mar C1MAR MDMA channel x Mask address register
@{*/


#define MDMA_C1MAR_MAR_SHIFT		0
#define MDMA_C1MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c1mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c1mdr C1MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C1MDR_MDR_SHIFT		0
#define MDMA_C1MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c1mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c2isr C2ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C2ISR_CRQA2 channel x request active flag **/
#define MDMA_C2ISR_CRQA2		(1 << 16)
/** MDMA_C2ISR_TCIF2 channel x buffer transfer complete **/
#define MDMA_C2ISR_TCIF2		(1 << 4)
/** MDMA_C2ISR_BTIF2 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C2ISR_BTIF2		(1 << 3)
/** MDMA_C2ISR_BRTIF2 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C2ISR_BRTIF2		(1 << 2)
/** MDMA_C2ISR_CTCIF2 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C2ISR_CTCIF2		(1 << 1)
/** MDMA_C2ISR_TEIF2 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C2ISR_TEIF2		(1 << 0)

/**@}*/

/** @defgroup mdma_c2ifcr C2IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C2IFCR_CLTCIF2 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C2IFCR_CLTCIF2		(1 << 4)
/** MDMA_C2IFCR_CBTIF2 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C2IFCR_CBTIF2		(1 << 3)
/** MDMA_C2IFCR_CBRTIF2 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C2IFCR_CBRTIF2		(1 << 2)
/** MDMA_C2IFCR_CCTCIF2 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C2IFCR_CCTCIF2		(1 << 1)
/** MDMA_C2IFCR_CTEIF2 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C2IFCR_CTEIF2		(1 << 0)

/**@}*/

/** @defgroup mdma_c2esr C2ESR MDMA Channel x error status register
@{*/

/** MDMA_C2ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C2ESR_BSE		(1 << 11)
/** MDMA_C2ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C2ESR_ASE		(1 << 10)
/** MDMA_C2ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C2ESR_TEMD		(1 << 9)
/** MDMA_C2ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C2ESR_TELD		(1 << 8)
/** MDMA_C2ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C2ESR_TED		(1 << 7)

#define MDMA_C2ESR_TEA_SHIFT		0
#define MDMA_C2ESR_TEA_MASK		0x7f
/** @defgroup mdma_c2esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c2cr C2CR This register is used to control the concerned channel.
@{*/

/** MDMA_C2CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C2CR_SWRQ		(1 << 16)
/** MDMA_C2CR_WEX Word Endianness exchange **/
#define MDMA_C2CR_WEX		(1 << 14)
/** MDMA_C2CR_HEX Half word Endianes exchange **/
#define MDMA_C2CR_HEX		(1 << 13)
/** MDMA_C2CR_BEX byte Endianness exchange **/
#define MDMA_C2CR_BEX		(1 << 12)

#define MDMA_C2CR_PL_SHIFT		6
#define MDMA_C2CR_PL_MASK		0x03
/** @defgroup mdma_c2cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C2CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C2CR_TCIE		(1 << 5)
/** MDMA_C2CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C2CR_BTIE		(1 << 4)
/** MDMA_C2CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C2CR_BRTIE		(1 << 3)
/** MDMA_C2CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C2CR_CTCIE		(1 << 2)
/** MDMA_C2CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C2CR_TEIE		(1 << 1)
/** MDMA_C2CR_EN channel enable **/
#define MDMA_C2CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c2tcr C2TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C2TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C2TCR_BWM		(1 << 31)
/** MDMA_C2TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C2TCR_SWRM		(1 << 30)

#define MDMA_C2TCR_TRGM_SHIFT		28
#define MDMA_C2TCR_TRGM_MASK		0x03
/** @defgroup mdma_c2tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C2TCR_PAM_SHIFT		26
#define MDMA_C2TCR_PAM_MASK		0x03
/** @defgroup mdma_c2tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C2TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C2TCR_PKE		(1 << 25)

#define MDMA_C2TCR_TLEN_SHIFT		18
#define MDMA_C2TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c2tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C2TCR_DBURST_SHIFT		15
#define MDMA_C2TCR_DBURST_MASK		0x07
/** @defgroup mdma_c2tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C2TCR_SBURST_SHIFT		12
#define MDMA_C2TCR_SBURST_MASK		0x07
/** @defgroup mdma_c2tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C2TCR_DINCOS_SHIFT		10
#define MDMA_C2TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c2tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C2TCR_SINCOS_SHIFT		8
#define MDMA_C2TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c2tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C2TCR_DSIZE_SHIFT		6
#define MDMA_C2TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c2tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C2TCR_SSIZE_SHIFT		4
#define MDMA_C2TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c2tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C2TCR_DINC_SHIFT		2
#define MDMA_C2TCR_DINC_MASK		0x03
/** @defgroup mdma_c2tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C2TCR_SINC_SHIFT		0
#define MDMA_C2TCR_SINC_MASK		0x03
/** @defgroup mdma_c2tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c2bndtr C2BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C2BNDTR_BRC_SHIFT		20
#define MDMA_C2BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c2bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C2BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C2BNDTR_BRDUM		(1 << 19)
/** MDMA_C2BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C2BNDTR_BRSUM		(1 << 18)

#define MDMA_C2BNDTR_BNDT_SHIFT		0
#define MDMA_C2BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c2bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c2sar C2SAR MDMA channel x source address register
@{*/


#define MDMA_C2SAR_SAR_SHIFT		0
#define MDMA_C2SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c2sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c2dar C2DAR MDMA channel x destination address register
@{*/


#define MDMA_C2DAR_DAR_SHIFT		0
#define MDMA_C2DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c2dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c2brur C2BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C2BRUR_DUV_SHIFT		16
#define MDMA_C2BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c2brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C2BRUR_SUV_SHIFT		0
#define MDMA_C2BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c2brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c2lar C2LAR MDMA channel x Link Address register
@{*/


#define MDMA_C2LAR_LAR_SHIFT		0
#define MDMA_C2LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c2lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c2tbr C2TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C2TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C2TBR_DBUS		(1 << 17)
/** MDMA_C2TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C2TBR_SBUS		(1 << 16)

#define MDMA_C2TBR_TSEL_SHIFT		0
#define MDMA_C2TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c2tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c2mar C2MAR MDMA channel x Mask address register
@{*/


#define MDMA_C2MAR_MAR_SHIFT		0
#define MDMA_C2MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c2mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c2mdr C2MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C2MDR_MDR_SHIFT		0
#define MDMA_C2MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c2mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c3isr C3ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C3ISR_CRQA3 channel x request active flag **/
#define MDMA_C3ISR_CRQA3		(1 << 16)
/** MDMA_C3ISR_TCIF3 channel x buffer transfer complete **/
#define MDMA_C3ISR_TCIF3		(1 << 4)
/** MDMA_C3ISR_BTIF3 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C3ISR_BTIF3		(1 << 3)
/** MDMA_C3ISR_BRTIF3 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C3ISR_BRTIF3		(1 << 2)
/** MDMA_C3ISR_CTCIF3 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C3ISR_CTCIF3		(1 << 1)
/** MDMA_C3ISR_TEIF3 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C3ISR_TEIF3		(1 << 0)

/**@}*/

/** @defgroup mdma_c3ifcr C3IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C3IFCR_CLTCIF3 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C3IFCR_CLTCIF3		(1 << 4)
/** MDMA_C3IFCR_CBTIF3 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C3IFCR_CBTIF3		(1 << 3)
/** MDMA_C3IFCR_CBRTIF3 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C3IFCR_CBRTIF3		(1 << 2)
/** MDMA_C3IFCR_CCTCIF3 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C3IFCR_CCTCIF3		(1 << 1)
/** MDMA_C3IFCR_CTEIF3 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C3IFCR_CTEIF3		(1 << 0)

/**@}*/

/** @defgroup mdma_c3esr C3ESR MDMA Channel x error status register
@{*/

/** MDMA_C3ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C3ESR_BSE		(1 << 11)
/** MDMA_C3ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C3ESR_ASE		(1 << 10)
/** MDMA_C3ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C3ESR_TEMD		(1 << 9)
/** MDMA_C3ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C3ESR_TELD		(1 << 8)
/** MDMA_C3ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C3ESR_TED		(1 << 7)

#define MDMA_C3ESR_TEA_SHIFT		0
#define MDMA_C3ESR_TEA_MASK		0x7f
/** @defgroup mdma_c3esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c3cr C3CR This register is used to control the concerned channel.
@{*/

/** MDMA_C3CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C3CR_SWRQ		(1 << 16)
/** MDMA_C3CR_WEX Word Endianness exchange **/
#define MDMA_C3CR_WEX		(1 << 14)
/** MDMA_C3CR_HEX Half word Endianes exchange **/
#define MDMA_C3CR_HEX		(1 << 13)
/** MDMA_C3CR_BEX byte Endianness exchange **/
#define MDMA_C3CR_BEX		(1 << 12)

#define MDMA_C3CR_PL_SHIFT		6
#define MDMA_C3CR_PL_MASK		0x03
/** @defgroup mdma_c3cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C3CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C3CR_TCIE		(1 << 5)
/** MDMA_C3CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C3CR_BTIE		(1 << 4)
/** MDMA_C3CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C3CR_BRTIE		(1 << 3)
/** MDMA_C3CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C3CR_CTCIE		(1 << 2)
/** MDMA_C3CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C3CR_TEIE		(1 << 1)
/** MDMA_C3CR_EN channel enable **/
#define MDMA_C3CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c3tcr C3TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C3TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C3TCR_BWM		(1 << 31)
/** MDMA_C3TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C3TCR_SWRM		(1 << 30)

#define MDMA_C3TCR_TRGM_SHIFT		28
#define MDMA_C3TCR_TRGM_MASK		0x03
/** @defgroup mdma_c3tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C3TCR_PAM_SHIFT		26
#define MDMA_C3TCR_PAM_MASK		0x03
/** @defgroup mdma_c3tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C3TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C3TCR_PKE		(1 << 25)

#define MDMA_C3TCR_TLEN_SHIFT		18
#define MDMA_C3TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c3tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C3TCR_DBURST_SHIFT		15
#define MDMA_C3TCR_DBURST_MASK		0x07
/** @defgroup mdma_c3tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C3TCR_SBURST_SHIFT		12
#define MDMA_C3TCR_SBURST_MASK		0x07
/** @defgroup mdma_c3tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C3TCR_DINCOS_SHIFT		10
#define MDMA_C3TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c3tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C3TCR_SINCOS_SHIFT		8
#define MDMA_C3TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c3tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C3TCR_DSIZE_SHIFT		6
#define MDMA_C3TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c3tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C3TCR_SSIZE_SHIFT		4
#define MDMA_C3TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c3tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C3TCR_DINC_SHIFT		2
#define MDMA_C3TCR_DINC_MASK		0x03
/** @defgroup mdma_c3tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C3TCR_SINC_SHIFT		0
#define MDMA_C3TCR_SINC_MASK		0x03
/** @defgroup mdma_c3tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c3bndtr C3BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C3BNDTR_BRC_SHIFT		20
#define MDMA_C3BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c3bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C3BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C3BNDTR_BRDUM		(1 << 19)
/** MDMA_C3BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C3BNDTR_BRSUM		(1 << 18)

#define MDMA_C3BNDTR_BNDT_SHIFT		0
#define MDMA_C3BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c3bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c3sar C3SAR MDMA channel x source address register
@{*/


#define MDMA_C3SAR_SAR_SHIFT		0
#define MDMA_C3SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c3sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c3dar C3DAR MDMA channel x destination address register
@{*/


#define MDMA_C3DAR_DAR_SHIFT		0
#define MDMA_C3DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c3dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c3brur C3BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C3BRUR_DUV_SHIFT		16
#define MDMA_C3BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c3brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C3BRUR_SUV_SHIFT		0
#define MDMA_C3BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c3brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c3lar C3LAR MDMA channel x Link Address register
@{*/


#define MDMA_C3LAR_LAR_SHIFT		0
#define MDMA_C3LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c3lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c3tbr C3TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C3TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C3TBR_DBUS		(1 << 17)
/** MDMA_C3TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C3TBR_SBUS		(1 << 16)

#define MDMA_C3TBR_TSEL_SHIFT		0
#define MDMA_C3TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c3tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c3mar C3MAR MDMA channel x Mask address register
@{*/


#define MDMA_C3MAR_MAR_SHIFT		0
#define MDMA_C3MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c3mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c3mdr C3MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C3MDR_MDR_SHIFT		0
#define MDMA_C3MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c3mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c4isr C4ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C4ISR_CRQA4 channel x request active flag **/
#define MDMA_C4ISR_CRQA4		(1 << 16)
/** MDMA_C4ISR_TCIF4 channel x buffer transfer complete **/
#define MDMA_C4ISR_TCIF4		(1 << 4)
/** MDMA_C4ISR_BTIF4 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C4ISR_BTIF4		(1 << 3)
/** MDMA_C4ISR_BRTIF4 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C4ISR_BRTIF4		(1 << 2)
/** MDMA_C4ISR_CTCIF4 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C4ISR_CTCIF4		(1 << 1)
/** MDMA_C4ISR_TEIF4 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C4ISR_TEIF4		(1 << 0)

/**@}*/

/** @defgroup mdma_c4ifcr C4IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C4IFCR_CLTCIF4 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C4IFCR_CLTCIF4		(1 << 4)
/** MDMA_C4IFCR_CBTIF4 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C4IFCR_CBTIF4		(1 << 3)
/** MDMA_C4IFCR_CBRTIF4 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C4IFCR_CBRTIF4		(1 << 2)
/** MDMA_C4IFCR_CCTCIF4 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C4IFCR_CCTCIF4		(1 << 1)
/** MDMA_C4IFCR_CTEIF4 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C4IFCR_CTEIF4		(1 << 0)

/**@}*/

/** @defgroup mdma_c4esr C4ESR MDMA Channel x error status register
@{*/

/** MDMA_C4ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C4ESR_BSE		(1 << 11)
/** MDMA_C4ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C4ESR_ASE		(1 << 10)
/** MDMA_C4ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C4ESR_TEMD		(1 << 9)
/** MDMA_C4ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C4ESR_TELD		(1 << 8)
/** MDMA_C4ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C4ESR_TED		(1 << 7)

#define MDMA_C4ESR_TEA_SHIFT		0
#define MDMA_C4ESR_TEA_MASK		0x7f
/** @defgroup mdma_c4esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c4cr C4CR This register is used to control the concerned channel.
@{*/

/** MDMA_C4CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C4CR_SWRQ		(1 << 16)
/** MDMA_C4CR_WEX Word Endianness exchange **/
#define MDMA_C4CR_WEX		(1 << 14)
/** MDMA_C4CR_HEX Half word Endianes exchange **/
#define MDMA_C4CR_HEX		(1 << 13)
/** MDMA_C4CR_BEX byte Endianness exchange **/
#define MDMA_C4CR_BEX		(1 << 12)

#define MDMA_C4CR_PL_SHIFT		6
#define MDMA_C4CR_PL_MASK		0x03
/** @defgroup mdma_c4cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C4CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C4CR_TCIE		(1 << 5)
/** MDMA_C4CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C4CR_BTIE		(1 << 4)
/** MDMA_C4CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C4CR_BRTIE		(1 << 3)
/** MDMA_C4CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C4CR_CTCIE		(1 << 2)
/** MDMA_C4CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C4CR_TEIE		(1 << 1)
/** MDMA_C4CR_EN channel enable **/
#define MDMA_C4CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c4tcr C4TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C4TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C4TCR_BWM		(1 << 31)
/** MDMA_C4TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C4TCR_SWRM		(1 << 30)

#define MDMA_C4TCR_TRGM_SHIFT		28
#define MDMA_C4TCR_TRGM_MASK		0x03
/** @defgroup mdma_c4tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C4TCR_PAM_SHIFT		26
#define MDMA_C4TCR_PAM_MASK		0x03
/** @defgroup mdma_c4tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C4TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C4TCR_PKE		(1 << 25)

#define MDMA_C4TCR_TLEN_SHIFT		18
#define MDMA_C4TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c4tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C4TCR_DBURST_SHIFT		15
#define MDMA_C4TCR_DBURST_MASK		0x07
/** @defgroup mdma_c4tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C4TCR_SBURST_SHIFT		12
#define MDMA_C4TCR_SBURST_MASK		0x07
/** @defgroup mdma_c4tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C4TCR_DINCOS_SHIFT		10
#define MDMA_C4TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c4tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C4TCR_SINCOS_SHIFT		8
#define MDMA_C4TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c4tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C4TCR_DSIZE_SHIFT		6
#define MDMA_C4TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c4tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C4TCR_SSIZE_SHIFT		4
#define MDMA_C4TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c4tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C4TCR_DINC_SHIFT		2
#define MDMA_C4TCR_DINC_MASK		0x03
/** @defgroup mdma_c4tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C4TCR_SINC_SHIFT		0
#define MDMA_C4TCR_SINC_MASK		0x03
/** @defgroup mdma_c4tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c4bndtr C4BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C4BNDTR_BRC_SHIFT		20
#define MDMA_C4BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c4bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C4BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C4BNDTR_BRDUM		(1 << 19)
/** MDMA_C4BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C4BNDTR_BRSUM		(1 << 18)

#define MDMA_C4BNDTR_BNDT_SHIFT		0
#define MDMA_C4BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c4bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c4sar C4SAR MDMA channel x source address register
@{*/


#define MDMA_C4SAR_SAR_SHIFT		0
#define MDMA_C4SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c4sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c4dar C4DAR MDMA channel x destination address register
@{*/


#define MDMA_C4DAR_DAR_SHIFT		0
#define MDMA_C4DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c4dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c4brur C4BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C4BRUR_DUV_SHIFT		16
#define MDMA_C4BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c4brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C4BRUR_SUV_SHIFT		0
#define MDMA_C4BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c4brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c4lar C4LAR MDMA channel x Link Address register
@{*/


#define MDMA_C4LAR_LAR_SHIFT		0
#define MDMA_C4LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c4lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c4tbr C4TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C4TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C4TBR_DBUS		(1 << 17)
/** MDMA_C4TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C4TBR_SBUS		(1 << 16)

#define MDMA_C4TBR_TSEL_SHIFT		0
#define MDMA_C4TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c4tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c4mar C4MAR MDMA channel x Mask address register
@{*/


#define MDMA_C4MAR_MAR_SHIFT		0
#define MDMA_C4MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c4mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c4mdr C4MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C4MDR_MDR_SHIFT		0
#define MDMA_C4MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c4mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c5isr C5ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C5ISR_CRQA5 channel x request active flag **/
#define MDMA_C5ISR_CRQA5		(1 << 16)
/** MDMA_C5ISR_TCIF5 channel x buffer transfer complete **/
#define MDMA_C5ISR_TCIF5		(1 << 4)
/** MDMA_C5ISR_BTIF5 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C5ISR_BTIF5		(1 << 3)
/** MDMA_C5ISR_BRTIF5 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C5ISR_BRTIF5		(1 << 2)
/** MDMA_C5ISR_CTCIF5 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C5ISR_CTCIF5		(1 << 1)
/** MDMA_C5ISR_TEIF5 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C5ISR_TEIF5		(1 << 0)

/**@}*/

/** @defgroup mdma_c5ifcr C5IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C5IFCR_CLTCIF5 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C5IFCR_CLTCIF5		(1 << 4)
/** MDMA_C5IFCR_CBTIF5 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C5IFCR_CBTIF5		(1 << 3)
/** MDMA_C5IFCR_CBRTIF5 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C5IFCR_CBRTIF5		(1 << 2)
/** MDMA_C5IFCR_CCTCIF5 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C5IFCR_CCTCIF5		(1 << 1)
/** MDMA_C5IFCR_CTEIF5 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C5IFCR_CTEIF5		(1 << 0)

/**@}*/

/** @defgroup mdma_c5esr C5ESR MDMA Channel x error status register
@{*/

/** MDMA_C5ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C5ESR_BSE		(1 << 11)
/** MDMA_C5ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C5ESR_ASE		(1 << 10)
/** MDMA_C5ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C5ESR_TEMD		(1 << 9)
/** MDMA_C5ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C5ESR_TELD		(1 << 8)
/** MDMA_C5ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C5ESR_TED		(1 << 7)

#define MDMA_C5ESR_TEA_SHIFT		0
#define MDMA_C5ESR_TEA_MASK		0x7f
/** @defgroup mdma_c5esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c5cr C5CR This register is used to control the concerned channel.
@{*/

/** MDMA_C5CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C5CR_SWRQ		(1 << 16)
/** MDMA_C5CR_WEX Word Endianness exchange **/
#define MDMA_C5CR_WEX		(1 << 14)
/** MDMA_C5CR_HEX Half word Endianes exchange **/
#define MDMA_C5CR_HEX		(1 << 13)
/** MDMA_C5CR_BEX byte Endianness exchange **/
#define MDMA_C5CR_BEX		(1 << 12)

#define MDMA_C5CR_PL_SHIFT		6
#define MDMA_C5CR_PL_MASK		0x03
/** @defgroup mdma_c5cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C5CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C5CR_TCIE		(1 << 5)
/** MDMA_C5CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C5CR_BTIE		(1 << 4)
/** MDMA_C5CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C5CR_BRTIE		(1 << 3)
/** MDMA_C5CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C5CR_CTCIE		(1 << 2)
/** MDMA_C5CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C5CR_TEIE		(1 << 1)
/** MDMA_C5CR_EN channel enable **/
#define MDMA_C5CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c5tcr C5TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C5TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C5TCR_BWM		(1 << 31)
/** MDMA_C5TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C5TCR_SWRM		(1 << 30)

#define MDMA_C5TCR_TRGM_SHIFT		28
#define MDMA_C5TCR_TRGM_MASK		0x03
/** @defgroup mdma_c5tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C5TCR_PAM_SHIFT		26
#define MDMA_C5TCR_PAM_MASK		0x03
/** @defgroup mdma_c5tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C5TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C5TCR_PKE		(1 << 25)

#define MDMA_C5TCR_TLEN_SHIFT		18
#define MDMA_C5TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c5tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C5TCR_DBURST_SHIFT		15
#define MDMA_C5TCR_DBURST_MASK		0x07
/** @defgroup mdma_c5tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C5TCR_SBURST_SHIFT		12
#define MDMA_C5TCR_SBURST_MASK		0x07
/** @defgroup mdma_c5tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C5TCR_DINCOS_SHIFT		10
#define MDMA_C5TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c5tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C5TCR_SINCOS_SHIFT		8
#define MDMA_C5TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c5tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C5TCR_DSIZE_SHIFT		6
#define MDMA_C5TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c5tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C5TCR_SSIZE_SHIFT		4
#define MDMA_C5TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c5tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C5TCR_DINC_SHIFT		2
#define MDMA_C5TCR_DINC_MASK		0x03
/** @defgroup mdma_c5tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C5TCR_SINC_SHIFT		0
#define MDMA_C5TCR_SINC_MASK		0x03
/** @defgroup mdma_c5tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c5bndtr C5BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C5BNDTR_BRC_SHIFT		20
#define MDMA_C5BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c5bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C5BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C5BNDTR_BRDUM		(1 << 19)
/** MDMA_C5BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C5BNDTR_BRSUM		(1 << 18)

#define MDMA_C5BNDTR_BNDT_SHIFT		0
#define MDMA_C5BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c5bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c5sar C5SAR MDMA channel x source address register
@{*/


#define MDMA_C5SAR_SAR_SHIFT		0
#define MDMA_C5SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c5sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c5dar C5DAR MDMA channel x destination address register
@{*/


#define MDMA_C5DAR_DAR_SHIFT		0
#define MDMA_C5DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c5dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c5brur C5BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C5BRUR_DUV_SHIFT		16
#define MDMA_C5BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c5brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C5BRUR_SUV_SHIFT		0
#define MDMA_C5BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c5brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c5lar C5LAR MDMA channel x Link Address register
@{*/


#define MDMA_C5LAR_LAR_SHIFT		0
#define MDMA_C5LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c5lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c5tbr C5TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C5TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C5TBR_DBUS		(1 << 17)
/** MDMA_C5TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C5TBR_SBUS		(1 << 16)

#define MDMA_C5TBR_TSEL_SHIFT		0
#define MDMA_C5TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c5tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c5mar C5MAR MDMA channel x Mask address register
@{*/


#define MDMA_C5MAR_MAR_SHIFT		0
#define MDMA_C5MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c5mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c5mdr C5MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C5MDR_MDR_SHIFT		0
#define MDMA_C5MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c5mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c6isr C6ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C6ISR_CRQA6 channel x request active flag **/
#define MDMA_C6ISR_CRQA6		(1 << 16)
/** MDMA_C6ISR_TCIF6 channel x buffer transfer complete **/
#define MDMA_C6ISR_TCIF6		(1 << 4)
/** MDMA_C6ISR_BTIF6 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C6ISR_BTIF6		(1 << 3)
/** MDMA_C6ISR_BRTIF6 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C6ISR_BRTIF6		(1 << 2)
/** MDMA_C6ISR_CTCIF6 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C6ISR_CTCIF6		(1 << 1)
/** MDMA_C6ISR_TEIF6 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C6ISR_TEIF6		(1 << 0)

/**@}*/

/** @defgroup mdma_c6ifcr C6IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C6IFCR_CLTCIF6 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C6IFCR_CLTCIF6		(1 << 4)
/** MDMA_C6IFCR_CBTIF6 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C6IFCR_CBTIF6		(1 << 3)
/** MDMA_C6IFCR_CBRTIF6 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C6IFCR_CBRTIF6		(1 << 2)
/** MDMA_C6IFCR_CCTCIF6 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C6IFCR_CCTCIF6		(1 << 1)
/** MDMA_C6IFCR_CTEIF6 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C6IFCR_CTEIF6		(1 << 0)

/**@}*/

/** @defgroup mdma_c6esr C6ESR MDMA Channel x error status register
@{*/

/** MDMA_C6ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C6ESR_BSE		(1 << 11)
/** MDMA_C6ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C6ESR_ASE		(1 << 10)
/** MDMA_C6ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C6ESR_TEMD		(1 << 9)
/** MDMA_C6ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C6ESR_TELD		(1 << 8)
/** MDMA_C6ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C6ESR_TED		(1 << 7)

#define MDMA_C6ESR_TEA_SHIFT		0
#define MDMA_C6ESR_TEA_MASK		0x7f
/** @defgroup mdma_c6esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c6cr C6CR This register is used to control the concerned channel.
@{*/

/** MDMA_C6CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C6CR_SWRQ		(1 << 16)
/** MDMA_C6CR_WEX Word Endianness exchange **/
#define MDMA_C6CR_WEX		(1 << 14)
/** MDMA_C6CR_HEX Half word Endianes exchange **/
#define MDMA_C6CR_HEX		(1 << 13)
/** MDMA_C6CR_BEX byte Endianness exchange **/
#define MDMA_C6CR_BEX		(1 << 12)

#define MDMA_C6CR_PL_SHIFT		6
#define MDMA_C6CR_PL_MASK		0x03
/** @defgroup mdma_c6cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C6CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C6CR_TCIE		(1 << 5)
/** MDMA_C6CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C6CR_BTIE		(1 << 4)
/** MDMA_C6CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C6CR_BRTIE		(1 << 3)
/** MDMA_C6CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C6CR_CTCIE		(1 << 2)
/** MDMA_C6CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C6CR_TEIE		(1 << 1)
/** MDMA_C6CR_EN channel enable **/
#define MDMA_C6CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c6tcr C6TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C6TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C6TCR_BWM		(1 << 31)
/** MDMA_C6TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C6TCR_SWRM		(1 << 30)

#define MDMA_C6TCR_TRGM_SHIFT		28
#define MDMA_C6TCR_TRGM_MASK		0x03
/** @defgroup mdma_c6tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C6TCR_PAM_SHIFT		26
#define MDMA_C6TCR_PAM_MASK		0x03
/** @defgroup mdma_c6tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C6TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C6TCR_PKE		(1 << 25)

#define MDMA_C6TCR_TLEN_SHIFT		18
#define MDMA_C6TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c6tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C6TCR_DBURST_SHIFT		15
#define MDMA_C6TCR_DBURST_MASK		0x07
/** @defgroup mdma_c6tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C6TCR_SBURST_SHIFT		12
#define MDMA_C6TCR_SBURST_MASK		0x07
/** @defgroup mdma_c6tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C6TCR_DINCOS_SHIFT		10
#define MDMA_C6TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c6tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C6TCR_SINCOS_SHIFT		8
#define MDMA_C6TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c6tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C6TCR_DSIZE_SHIFT		6
#define MDMA_C6TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c6tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C6TCR_SSIZE_SHIFT		4
#define MDMA_C6TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c6tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C6TCR_DINC_SHIFT		2
#define MDMA_C6TCR_DINC_MASK		0x03
/** @defgroup mdma_c6tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C6TCR_SINC_SHIFT		0
#define MDMA_C6TCR_SINC_MASK		0x03
/** @defgroup mdma_c6tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c6bndtr C6BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C6BNDTR_BRC_SHIFT		20
#define MDMA_C6BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c6bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C6BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C6BNDTR_BRDUM		(1 << 19)
/** MDMA_C6BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C6BNDTR_BRSUM		(1 << 18)

#define MDMA_C6BNDTR_BNDT_SHIFT		0
#define MDMA_C6BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c6bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c6sar C6SAR MDMA channel x source address register
@{*/


#define MDMA_C6SAR_SAR_SHIFT		0
#define MDMA_C6SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c6sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c6dar C6DAR MDMA channel x destination address register
@{*/


#define MDMA_C6DAR_DAR_SHIFT		0
#define MDMA_C6DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c6dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c6brur C6BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C6BRUR_DUV_SHIFT		16
#define MDMA_C6BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c6brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C6BRUR_SUV_SHIFT		0
#define MDMA_C6BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c6brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c6lar C6LAR MDMA channel x Link Address register
@{*/


#define MDMA_C6LAR_LAR_SHIFT		0
#define MDMA_C6LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c6lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c6tbr C6TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C6TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C6TBR_DBUS		(1 << 17)
/** MDMA_C6TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C6TBR_SBUS		(1 << 16)

#define MDMA_C6TBR_TSEL_SHIFT		0
#define MDMA_C6TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c6tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c6mar C6MAR MDMA channel x Mask address register
@{*/


#define MDMA_C6MAR_MAR_SHIFT		0
#define MDMA_C6MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c6mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c6mdr C6MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C6MDR_MDR_SHIFT		0
#define MDMA_C6MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c6mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c7isr C7ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C7ISR_CRQA7 channel x request active flag **/
#define MDMA_C7ISR_CRQA7		(1 << 16)
/** MDMA_C7ISR_TCIF7 channel x buffer transfer complete **/
#define MDMA_C7ISR_TCIF7		(1 << 4)
/** MDMA_C7ISR_BTIF7 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C7ISR_BTIF7		(1 << 3)
/** MDMA_C7ISR_BRTIF7 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C7ISR_BRTIF7		(1 << 2)
/** MDMA_C7ISR_CTCIF7 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C7ISR_CTCIF7		(1 << 1)
/** MDMA_C7ISR_TEIF7 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C7ISR_TEIF7		(1 << 0)

/**@}*/

/** @defgroup mdma_c7ifcr C7IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C7IFCR_CLTCIF7 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C7IFCR_CLTCIF7		(1 << 4)
/** MDMA_C7IFCR_CBTIF7 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C7IFCR_CBTIF7		(1 << 3)
/** MDMA_C7IFCR_CBRTIF7 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C7IFCR_CBRTIF7		(1 << 2)
/** MDMA_C7IFCR_CCTCIF7 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C7IFCR_CCTCIF7		(1 << 1)
/** MDMA_C7IFCR_CTEIF7 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C7IFCR_CTEIF7		(1 << 0)

/**@}*/

/** @defgroup mdma_c7esr C7ESR MDMA Channel x error status register
@{*/

/** MDMA_C7ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C7ESR_BSE		(1 << 11)
/** MDMA_C7ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C7ESR_ASE		(1 << 10)
/** MDMA_C7ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C7ESR_TEMD		(1 << 9)
/** MDMA_C7ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C7ESR_TELD		(1 << 8)
/** MDMA_C7ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C7ESR_TED		(1 << 7)

#define MDMA_C7ESR_TEA_SHIFT		0
#define MDMA_C7ESR_TEA_MASK		0x7f
/** @defgroup mdma_c7esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c7cr C7CR This register is used to control the concerned channel.
@{*/

/** MDMA_C7CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C7CR_SWRQ		(1 << 16)
/** MDMA_C7CR_WEX Word Endianness exchange **/
#define MDMA_C7CR_WEX		(1 << 14)
/** MDMA_C7CR_HEX Half word Endianes exchange **/
#define MDMA_C7CR_HEX		(1 << 13)
/** MDMA_C7CR_BEX byte Endianness exchange **/
#define MDMA_C7CR_BEX		(1 << 12)

#define MDMA_C7CR_PL_SHIFT		6
#define MDMA_C7CR_PL_MASK		0x03
/** @defgroup mdma_c7cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C7CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C7CR_TCIE		(1 << 5)
/** MDMA_C7CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C7CR_BTIE		(1 << 4)
/** MDMA_C7CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C7CR_BRTIE		(1 << 3)
/** MDMA_C7CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C7CR_CTCIE		(1 << 2)
/** MDMA_C7CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C7CR_TEIE		(1 << 1)
/** MDMA_C7CR_EN channel enable **/
#define MDMA_C7CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c7tcr C7TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C7TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C7TCR_BWM		(1 << 31)
/** MDMA_C7TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C7TCR_SWRM		(1 << 30)

#define MDMA_C7TCR_TRGM_SHIFT		28
#define MDMA_C7TCR_TRGM_MASK		0x03
/** @defgroup mdma_c7tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C7TCR_PAM_SHIFT		26
#define MDMA_C7TCR_PAM_MASK		0x03
/** @defgroup mdma_c7tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C7TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C7TCR_PKE		(1 << 25)

#define MDMA_C7TCR_TLEN_SHIFT		18
#define MDMA_C7TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c7tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C7TCR_DBURST_SHIFT		15
#define MDMA_C7TCR_DBURST_MASK		0x07
/** @defgroup mdma_c7tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C7TCR_SBURST_SHIFT		12
#define MDMA_C7TCR_SBURST_MASK		0x07
/** @defgroup mdma_c7tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C7TCR_DINCOS_SHIFT		10
#define MDMA_C7TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c7tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C7TCR_SINCOS_SHIFT		8
#define MDMA_C7TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c7tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C7TCR_DSIZE_SHIFT		6
#define MDMA_C7TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c7tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C7TCR_SSIZE_SHIFT		4
#define MDMA_C7TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c7tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C7TCR_DINC_SHIFT		2
#define MDMA_C7TCR_DINC_MASK		0x03
/** @defgroup mdma_c7tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C7TCR_SINC_SHIFT		0
#define MDMA_C7TCR_SINC_MASK		0x03
/** @defgroup mdma_c7tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c7bndtr C7BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C7BNDTR_BRC_SHIFT		20
#define MDMA_C7BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c7bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C7BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C7BNDTR_BRDUM		(1 << 19)
/** MDMA_C7BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C7BNDTR_BRSUM		(1 << 18)

#define MDMA_C7BNDTR_BNDT_SHIFT		0
#define MDMA_C7BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c7bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c7sar C7SAR MDMA channel x source address register
@{*/


#define MDMA_C7SAR_SAR_SHIFT		0
#define MDMA_C7SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c7sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c7dar C7DAR MDMA channel x destination address register
@{*/


#define MDMA_C7DAR_DAR_SHIFT		0
#define MDMA_C7DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c7dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c7brur C7BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C7BRUR_DUV_SHIFT		16
#define MDMA_C7BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c7brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C7BRUR_SUV_SHIFT		0
#define MDMA_C7BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c7brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c7lar C7LAR MDMA channel x Link Address register
@{*/


#define MDMA_C7LAR_LAR_SHIFT		0
#define MDMA_C7LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c7lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c7tbr C7TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C7TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C7TBR_DBUS		(1 << 17)
/** MDMA_C7TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C7TBR_SBUS		(1 << 16)

#define MDMA_C7TBR_TSEL_SHIFT		0
#define MDMA_C7TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c7tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c7mar C7MAR MDMA channel x Mask address register
@{*/


#define MDMA_C7MAR_MAR_SHIFT		0
#define MDMA_C7MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c7mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c7mdr C7MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C7MDR_MDR_SHIFT		0
#define MDMA_C7MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c7mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c8isr C8ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C8ISR_CRQA8 channel x request active flag **/
#define MDMA_C8ISR_CRQA8		(1 << 16)
/** MDMA_C8ISR_TCIF8 channel x buffer transfer complete **/
#define MDMA_C8ISR_TCIF8		(1 << 4)
/** MDMA_C8ISR_BTIF8 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C8ISR_BTIF8		(1 << 3)
/** MDMA_C8ISR_BRTIF8 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C8ISR_BRTIF8		(1 << 2)
/** MDMA_C8ISR_CTCIF8 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C8ISR_CTCIF8		(1 << 1)
/** MDMA_C8ISR_TEIF8 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C8ISR_TEIF8		(1 << 0)

/**@}*/

/** @defgroup mdma_c8ifcr C8IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C8IFCR_CLTCIF8 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C8IFCR_CLTCIF8		(1 << 4)
/** MDMA_C8IFCR_CBTIF8 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C8IFCR_CBTIF8		(1 << 3)
/** MDMA_C8IFCR_CBRTIF8 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C8IFCR_CBRTIF8		(1 << 2)
/** MDMA_C8IFCR_CCTCIF8 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C8IFCR_CCTCIF8		(1 << 1)
/** MDMA_C8IFCR_CTEIF8 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C8IFCR_CTEIF8		(1 << 0)

/**@}*/

/** @defgroup mdma_c8esr C8ESR MDMA Channel x error status register
@{*/

/** MDMA_C8ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C8ESR_BSE		(1 << 11)
/** MDMA_C8ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C8ESR_ASE		(1 << 10)
/** MDMA_C8ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C8ESR_TEMD		(1 << 9)
/** MDMA_C8ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C8ESR_TELD		(1 << 8)
/** MDMA_C8ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C8ESR_TED		(1 << 7)

#define MDMA_C8ESR_TEA_SHIFT		0
#define MDMA_C8ESR_TEA_MASK		0x7f
/** @defgroup mdma_c8esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c8cr C8CR This register is used to control the concerned channel.
@{*/

/** MDMA_C8CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C8CR_SWRQ		(1 << 16)
/** MDMA_C8CR_WEX Word Endianness exchange **/
#define MDMA_C8CR_WEX		(1 << 14)
/** MDMA_C8CR_HEX Half word Endianes exchange **/
#define MDMA_C8CR_HEX		(1 << 13)
/** MDMA_C8CR_BEX byte Endianness exchange **/
#define MDMA_C8CR_BEX		(1 << 12)

#define MDMA_C8CR_PL_SHIFT		6
#define MDMA_C8CR_PL_MASK		0x03
/** @defgroup mdma_c8cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C8CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C8CR_TCIE		(1 << 5)
/** MDMA_C8CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C8CR_BTIE		(1 << 4)
/** MDMA_C8CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C8CR_BRTIE		(1 << 3)
/** MDMA_C8CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C8CR_CTCIE		(1 << 2)
/** MDMA_C8CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C8CR_TEIE		(1 << 1)
/** MDMA_C8CR_EN channel enable **/
#define MDMA_C8CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c8tcr C8TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C8TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C8TCR_BWM		(1 << 31)
/** MDMA_C8TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C8TCR_SWRM		(1 << 30)

#define MDMA_C8TCR_TRGM_SHIFT		28
#define MDMA_C8TCR_TRGM_MASK		0x03
/** @defgroup mdma_c8tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C8TCR_PAM_SHIFT		26
#define MDMA_C8TCR_PAM_MASK		0x03
/** @defgroup mdma_c8tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C8TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C8TCR_PKE		(1 << 25)

#define MDMA_C8TCR_TLEN_SHIFT		18
#define MDMA_C8TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c8tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C8TCR_DBURST_SHIFT		15
#define MDMA_C8TCR_DBURST_MASK		0x07
/** @defgroup mdma_c8tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C8TCR_SBURST_SHIFT		12
#define MDMA_C8TCR_SBURST_MASK		0x07
/** @defgroup mdma_c8tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C8TCR_DINCOS_SHIFT		10
#define MDMA_C8TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c8tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C8TCR_SINCOS_SHIFT		8
#define MDMA_C8TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c8tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C8TCR_DSIZE_SHIFT		6
#define MDMA_C8TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c8tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C8TCR_SSIZE_SHIFT		4
#define MDMA_C8TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c8tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C8TCR_DINC_SHIFT		2
#define MDMA_C8TCR_DINC_MASK		0x03
/** @defgroup mdma_c8tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C8TCR_SINC_SHIFT		0
#define MDMA_C8TCR_SINC_MASK		0x03
/** @defgroup mdma_c8tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c8bndtr C8BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C8BNDTR_BRC_SHIFT		20
#define MDMA_C8BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c8bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C8BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C8BNDTR_BRDUM		(1 << 19)
/** MDMA_C8BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C8BNDTR_BRSUM		(1 << 18)

#define MDMA_C8BNDTR_BNDT_SHIFT		0
#define MDMA_C8BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c8bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c8sar C8SAR MDMA channel x source address register
@{*/


#define MDMA_C8SAR_SAR_SHIFT		0
#define MDMA_C8SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c8sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c8dar C8DAR MDMA channel x destination address register
@{*/


#define MDMA_C8DAR_DAR_SHIFT		0
#define MDMA_C8DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c8dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c8brur C8BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C8BRUR_DUV_SHIFT		16
#define MDMA_C8BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c8brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C8BRUR_SUV_SHIFT		0
#define MDMA_C8BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c8brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c8lar C8LAR MDMA channel x Link Address register
@{*/


#define MDMA_C8LAR_LAR_SHIFT		0
#define MDMA_C8LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c8lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c8tbr C8TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C8TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C8TBR_DBUS		(1 << 17)
/** MDMA_C8TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C8TBR_SBUS		(1 << 16)

#define MDMA_C8TBR_TSEL_SHIFT		0
#define MDMA_C8TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c8tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c8mar C8MAR MDMA channel x Mask address register
@{*/


#define MDMA_C8MAR_MAR_SHIFT		0
#define MDMA_C8MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c8mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c8mdr C8MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C8MDR_MDR_SHIFT		0
#define MDMA_C8MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c8mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c9isr C9ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C9ISR_CRQA9 channel x request active flag **/
#define MDMA_C9ISR_CRQA9		(1 << 16)
/** MDMA_C9ISR_TCIF9 channel x buffer transfer complete **/
#define MDMA_C9ISR_TCIF9		(1 << 4)
/** MDMA_C9ISR_BTIF9 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C9ISR_BTIF9		(1 << 3)
/** MDMA_C9ISR_BRTIF9 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C9ISR_BRTIF9		(1 << 2)
/** MDMA_C9ISR_CTCIF9 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C9ISR_CTCIF9		(1 << 1)
/** MDMA_C9ISR_TEIF9 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C9ISR_TEIF9		(1 << 0)

/**@}*/

/** @defgroup mdma_c9ifcr C9IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C9IFCR_CLTCIF9 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C9IFCR_CLTCIF9		(1 << 4)
/** MDMA_C9IFCR_CBTIF9 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C9IFCR_CBTIF9		(1 << 3)
/** MDMA_C9IFCR_CBRTIF9 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C9IFCR_CBRTIF9		(1 << 2)
/** MDMA_C9IFCR_CCTCIF9 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C9IFCR_CCTCIF9		(1 << 1)
/** MDMA_C9IFCR_CTEIF9 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C9IFCR_CTEIF9		(1 << 0)

/**@}*/

/** @defgroup mdma_c9esr C9ESR MDMA Channel x error status register
@{*/

/** MDMA_C9ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C9ESR_BSE		(1 << 11)
/** MDMA_C9ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C9ESR_ASE		(1 << 10)
/** MDMA_C9ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C9ESR_TEMD		(1 << 9)
/** MDMA_C9ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C9ESR_TELD		(1 << 8)
/** MDMA_C9ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C9ESR_TED		(1 << 7)

#define MDMA_C9ESR_TEA_SHIFT		0
#define MDMA_C9ESR_TEA_MASK		0x7f
/** @defgroup mdma_c9esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c9cr C9CR This register is used to control the concerned channel.
@{*/

/** MDMA_C9CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C9CR_SWRQ		(1 << 16)
/** MDMA_C9CR_WEX Word Endianness exchange **/
#define MDMA_C9CR_WEX		(1 << 14)
/** MDMA_C9CR_HEX Half word Endianes exchange **/
#define MDMA_C9CR_HEX		(1 << 13)
/** MDMA_C9CR_BEX byte Endianness exchange **/
#define MDMA_C9CR_BEX		(1 << 12)

#define MDMA_C9CR_PL_SHIFT		6
#define MDMA_C9CR_PL_MASK		0x03
/** @defgroup mdma_c9cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C9CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C9CR_TCIE		(1 << 5)
/** MDMA_C9CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C9CR_BTIE		(1 << 4)
/** MDMA_C9CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C9CR_BRTIE		(1 << 3)
/** MDMA_C9CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C9CR_CTCIE		(1 << 2)
/** MDMA_C9CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C9CR_TEIE		(1 << 1)
/** MDMA_C9CR_EN channel enable **/
#define MDMA_C9CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c9tcr C9TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C9TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C9TCR_BWM		(1 << 31)
/** MDMA_C9TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C9TCR_SWRM		(1 << 30)

#define MDMA_C9TCR_TRGM_SHIFT		28
#define MDMA_C9TCR_TRGM_MASK		0x03
/** @defgroup mdma_c9tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C9TCR_PAM_SHIFT		26
#define MDMA_C9TCR_PAM_MASK		0x03
/** @defgroup mdma_c9tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C9TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C9TCR_PKE		(1 << 25)

#define MDMA_C9TCR_TLEN_SHIFT		18
#define MDMA_C9TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c9tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C9TCR_DBURST_SHIFT		15
#define MDMA_C9TCR_DBURST_MASK		0x07
/** @defgroup mdma_c9tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C9TCR_SBURST_SHIFT		12
#define MDMA_C9TCR_SBURST_MASK		0x07
/** @defgroup mdma_c9tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C9TCR_DINCOS_SHIFT		10
#define MDMA_C9TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c9tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C9TCR_SINCOS_SHIFT		8
#define MDMA_C9TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c9tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C9TCR_DSIZE_SHIFT		6
#define MDMA_C9TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c9tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C9TCR_SSIZE_SHIFT		4
#define MDMA_C9TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c9tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C9TCR_DINC_SHIFT		2
#define MDMA_C9TCR_DINC_MASK		0x03
/** @defgroup mdma_c9tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C9TCR_SINC_SHIFT		0
#define MDMA_C9TCR_SINC_MASK		0x03
/** @defgroup mdma_c9tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c9bndtr C9BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C9BNDTR_BRC_SHIFT		20
#define MDMA_C9BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c9bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C9BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C9BNDTR_BRDUM		(1 << 19)
/** MDMA_C9BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C9BNDTR_BRSUM		(1 << 18)

#define MDMA_C9BNDTR_BNDT_SHIFT		0
#define MDMA_C9BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c9bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c9sar C9SAR MDMA channel x source address register
@{*/


#define MDMA_C9SAR_SAR_SHIFT		0
#define MDMA_C9SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c9sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c9dar C9DAR MDMA channel x destination address register
@{*/


#define MDMA_C9DAR_DAR_SHIFT		0
#define MDMA_C9DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c9dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c9brur C9BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C9BRUR_DUV_SHIFT		16
#define MDMA_C9BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c9brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C9BRUR_SUV_SHIFT		0
#define MDMA_C9BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c9brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c9lar C9LAR MDMA channel x Link Address register
@{*/


#define MDMA_C9LAR_LAR_SHIFT		0
#define MDMA_C9LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c9lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c9tbr C9TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C9TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C9TBR_DBUS		(1 << 17)
/** MDMA_C9TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C9TBR_SBUS		(1 << 16)

#define MDMA_C9TBR_TSEL_SHIFT		0
#define MDMA_C9TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c9tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c9mar C9MAR MDMA channel x Mask address register
@{*/


#define MDMA_C9MAR_MAR_SHIFT		0
#define MDMA_C9MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c9mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c9mdr C9MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C9MDR_MDR_SHIFT		0
#define MDMA_C9MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c9mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c10isr C10ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C10ISR_CRQA10 channel x request active flag **/
#define MDMA_C10ISR_CRQA10		(1 << 16)
/** MDMA_C10ISR_TCIF10 channel x buffer transfer complete **/
#define MDMA_C10ISR_TCIF10		(1 << 4)
/** MDMA_C10ISR_BTIF10 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C10ISR_BTIF10		(1 << 3)
/** MDMA_C10ISR_BRTIF10 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C10ISR_BRTIF10		(1 << 2)
/** MDMA_C10ISR_CTCIF10 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C10ISR_CTCIF10		(1 << 1)
/** MDMA_C10ISR_TEIF10 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C10ISR_TEIF10		(1 << 0)

/**@}*/

/** @defgroup mdma_c10ifcr C10IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C10IFCR_CLTCIF10 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C10IFCR_CLTCIF10		(1 << 4)
/** MDMA_C10IFCR_CBTIF10 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C10IFCR_CBTIF10		(1 << 3)
/** MDMA_C10IFCR_CBRTIF10 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C10IFCR_CBRTIF10		(1 << 2)
/** MDMA_C10IFCR_CCTCIF10 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C10IFCR_CCTCIF10		(1 << 1)
/** MDMA_C10IFCR_CTEIF10 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C10IFCR_CTEIF10		(1 << 0)

/**@}*/

/** @defgroup mdma_c10esr C10ESR MDMA Channel x error status register
@{*/

/** MDMA_C10ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C10ESR_BSE		(1 << 11)
/** MDMA_C10ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C10ESR_ASE		(1 << 10)
/** MDMA_C10ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C10ESR_TEMD		(1 << 9)
/** MDMA_C10ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C10ESR_TELD		(1 << 8)
/** MDMA_C10ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C10ESR_TED		(1 << 7)

#define MDMA_C10ESR_TEA_SHIFT		0
#define MDMA_C10ESR_TEA_MASK		0x7f
/** @defgroup mdma_c10esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c10cr C10CR This register is used to control the concerned channel.
@{*/

/** MDMA_C10CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C10CR_SWRQ		(1 << 16)
/** MDMA_C10CR_WEX Word Endianness exchange **/
#define MDMA_C10CR_WEX		(1 << 14)
/** MDMA_C10CR_HEX Half word Endianes exchange **/
#define MDMA_C10CR_HEX		(1 << 13)
/** MDMA_C10CR_BEX byte Endianness exchange **/
#define MDMA_C10CR_BEX		(1 << 12)

#define MDMA_C10CR_PL_SHIFT		6
#define MDMA_C10CR_PL_MASK		0x03
/** @defgroup mdma_c10cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C10CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C10CR_TCIE		(1 << 5)
/** MDMA_C10CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C10CR_BTIE		(1 << 4)
/** MDMA_C10CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C10CR_BRTIE		(1 << 3)
/** MDMA_C10CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C10CR_CTCIE		(1 << 2)
/** MDMA_C10CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C10CR_TEIE		(1 << 1)
/** MDMA_C10CR_EN channel enable **/
#define MDMA_C10CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c10tcr C10TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C10TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C10TCR_BWM		(1 << 31)
/** MDMA_C10TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C10TCR_SWRM		(1 << 30)

#define MDMA_C10TCR_TRGM_SHIFT		28
#define MDMA_C10TCR_TRGM_MASK		0x03
/** @defgroup mdma_c10tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C10TCR_PAM_SHIFT		26
#define MDMA_C10TCR_PAM_MASK		0x03
/** @defgroup mdma_c10tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C10TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C10TCR_PKE		(1 << 25)

#define MDMA_C10TCR_TLEN_SHIFT		18
#define MDMA_C10TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c10tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C10TCR_DBURST_SHIFT		15
#define MDMA_C10TCR_DBURST_MASK		0x07
/** @defgroup mdma_c10tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C10TCR_SBURST_SHIFT		12
#define MDMA_C10TCR_SBURST_MASK		0x07
/** @defgroup mdma_c10tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C10TCR_DINCOS_SHIFT		10
#define MDMA_C10TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c10tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C10TCR_SINCOS_SHIFT		8
#define MDMA_C10TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c10tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C10TCR_DSIZE_SHIFT		6
#define MDMA_C10TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c10tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C10TCR_SSIZE_SHIFT		4
#define MDMA_C10TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c10tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C10TCR_DINC_SHIFT		2
#define MDMA_C10TCR_DINC_MASK		0x03
/** @defgroup mdma_c10tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C10TCR_SINC_SHIFT		0
#define MDMA_C10TCR_SINC_MASK		0x03
/** @defgroup mdma_c10tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c10bndtr C10BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C10BNDTR_BRC_SHIFT		20
#define MDMA_C10BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c10bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C10BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C10BNDTR_BRDUM		(1 << 19)
/** MDMA_C10BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C10BNDTR_BRSUM		(1 << 18)

#define MDMA_C10BNDTR_BNDT_SHIFT		0
#define MDMA_C10BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c10bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c10sar C10SAR MDMA channel x source address register
@{*/


#define MDMA_C10SAR_SAR_SHIFT		0
#define MDMA_C10SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c10sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c10dar C10DAR MDMA channel x destination address register
@{*/


#define MDMA_C10DAR_DAR_SHIFT		0
#define MDMA_C10DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c10dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c10brur C10BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C10BRUR_DUV_SHIFT		16
#define MDMA_C10BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c10brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C10BRUR_SUV_SHIFT		0
#define MDMA_C10BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c10brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c10lar C10LAR MDMA channel x Link Address register
@{*/


#define MDMA_C10LAR_LAR_SHIFT		0
#define MDMA_C10LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c10lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c10tbr C10TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C10TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C10TBR_DBUS		(1 << 17)
/** MDMA_C10TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C10TBR_SBUS		(1 << 16)

#define MDMA_C10TBR_TSEL_SHIFT		0
#define MDMA_C10TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c10tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c10mar C10MAR MDMA channel x Mask address register
@{*/


#define MDMA_C10MAR_MAR_SHIFT		0
#define MDMA_C10MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c10mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c10mdr C10MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C10MDR_MDR_SHIFT		0
#define MDMA_C10MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c10mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c11isr C11ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C11ISR_CRQA11 channel x request active flag **/
#define MDMA_C11ISR_CRQA11		(1 << 16)
/** MDMA_C11ISR_TCIF11 channel x buffer transfer complete **/
#define MDMA_C11ISR_TCIF11		(1 << 4)
/** MDMA_C11ISR_BTIF11 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C11ISR_BTIF11		(1 << 3)
/** MDMA_C11ISR_BRTIF11 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C11ISR_BRTIF11		(1 << 2)
/** MDMA_C11ISR_CTCIF11 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C11ISR_CTCIF11		(1 << 1)
/** MDMA_C11ISR_TEIF11 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C11ISR_TEIF11		(1 << 0)

/**@}*/

/** @defgroup mdma_c11ifcr C11IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C11IFCR_CLTCIF11 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C11IFCR_CLTCIF11		(1 << 4)
/** MDMA_C11IFCR_CBTIF11 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C11IFCR_CBTIF11		(1 << 3)
/** MDMA_C11IFCR_CBRTIF11 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C11IFCR_CBRTIF11		(1 << 2)
/** MDMA_C11IFCR_CCTCIF11 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C11IFCR_CCTCIF11		(1 << 1)
/** MDMA_C11IFCR_CTEIF11 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C11IFCR_CTEIF11		(1 << 0)

/**@}*/

/** @defgroup mdma_c11esr C11ESR MDMA Channel x error status register
@{*/

/** MDMA_C11ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C11ESR_BSE		(1 << 11)
/** MDMA_C11ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C11ESR_ASE		(1 << 10)
/** MDMA_C11ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C11ESR_TEMD		(1 << 9)
/** MDMA_C11ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C11ESR_TELD		(1 << 8)
/** MDMA_C11ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C11ESR_TED		(1 << 7)

#define MDMA_C11ESR_TEA_SHIFT		0
#define MDMA_C11ESR_TEA_MASK		0x7f
/** @defgroup mdma_c11esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c11cr C11CR This register is used to control the concerned channel.
@{*/

/** MDMA_C11CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C11CR_SWRQ		(1 << 16)
/** MDMA_C11CR_WEX Word Endianness exchange **/
#define MDMA_C11CR_WEX		(1 << 14)
/** MDMA_C11CR_HEX Half word Endianes exchange **/
#define MDMA_C11CR_HEX		(1 << 13)
/** MDMA_C11CR_BEX byte Endianness exchange **/
#define MDMA_C11CR_BEX		(1 << 12)

#define MDMA_C11CR_PL_SHIFT		6
#define MDMA_C11CR_PL_MASK		0x03
/** @defgroup mdma_c11cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C11CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C11CR_TCIE		(1 << 5)
/** MDMA_C11CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C11CR_BTIE		(1 << 4)
/** MDMA_C11CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C11CR_BRTIE		(1 << 3)
/** MDMA_C11CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C11CR_CTCIE		(1 << 2)
/** MDMA_C11CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C11CR_TEIE		(1 << 1)
/** MDMA_C11CR_EN channel enable **/
#define MDMA_C11CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c11tcr C11TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C11TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C11TCR_BWM		(1 << 31)
/** MDMA_C11TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C11TCR_SWRM		(1 << 30)

#define MDMA_C11TCR_TRGM_SHIFT		28
#define MDMA_C11TCR_TRGM_MASK		0x03
/** @defgroup mdma_c11tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C11TCR_PAM_SHIFT		26
#define MDMA_C11TCR_PAM_MASK		0x03
/** @defgroup mdma_c11tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C11TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C11TCR_PKE		(1 << 25)

#define MDMA_C11TCR_TLEN_SHIFT		18
#define MDMA_C11TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c11tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C11TCR_DBURST_SHIFT		15
#define MDMA_C11TCR_DBURST_MASK		0x07
/** @defgroup mdma_c11tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C11TCR_SBURST_SHIFT		12
#define MDMA_C11TCR_SBURST_MASK		0x07
/** @defgroup mdma_c11tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C11TCR_DINCOS_SHIFT		10
#define MDMA_C11TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c11tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C11TCR_SINCOS_SHIFT		8
#define MDMA_C11TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c11tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C11TCR_DSIZE_SHIFT		6
#define MDMA_C11TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c11tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C11TCR_SSIZE_SHIFT		4
#define MDMA_C11TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c11tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C11TCR_DINC_SHIFT		2
#define MDMA_C11TCR_DINC_MASK		0x03
/** @defgroup mdma_c11tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C11TCR_SINC_SHIFT		0
#define MDMA_C11TCR_SINC_MASK		0x03
/** @defgroup mdma_c11tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c11bndtr C11BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C11BNDTR_BRC_SHIFT		20
#define MDMA_C11BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c11bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C11BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C11BNDTR_BRDUM		(1 << 19)
/** MDMA_C11BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C11BNDTR_BRSUM		(1 << 18)

#define MDMA_C11BNDTR_BNDT_SHIFT		0
#define MDMA_C11BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c11bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c11sar C11SAR MDMA channel x source address register
@{*/


#define MDMA_C11SAR_SAR_SHIFT		0
#define MDMA_C11SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c11sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c11dar C11DAR MDMA channel x destination address register
@{*/


#define MDMA_C11DAR_DAR_SHIFT		0
#define MDMA_C11DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c11dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c11brur C11BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C11BRUR_DUV_SHIFT		16
#define MDMA_C11BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c11brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C11BRUR_SUV_SHIFT		0
#define MDMA_C11BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c11brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c11lar C11LAR MDMA channel x Link Address register
@{*/


#define MDMA_C11LAR_LAR_SHIFT		0
#define MDMA_C11LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c11lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c11tbr C11TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C11TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C11TBR_DBUS		(1 << 17)
/** MDMA_C11TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C11TBR_SBUS		(1 << 16)

#define MDMA_C11TBR_TSEL_SHIFT		0
#define MDMA_C11TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c11tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c11mar C11MAR MDMA channel x Mask address register
@{*/


#define MDMA_C11MAR_MAR_SHIFT		0
#define MDMA_C11MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c11mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c11mdr C11MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C11MDR_MDR_SHIFT		0
#define MDMA_C11MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c11mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c12isr C12ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C12ISR_CRQA12 channel x request active flag **/
#define MDMA_C12ISR_CRQA12		(1 << 16)
/** MDMA_C12ISR_TCIF12 channel x buffer transfer complete **/
#define MDMA_C12ISR_TCIF12		(1 << 4)
/** MDMA_C12ISR_BTIF12 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C12ISR_BTIF12		(1 << 3)
/** MDMA_C12ISR_BRTIF12 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C12ISR_BRTIF12		(1 << 2)
/** MDMA_C12ISR_CTCIF12 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C12ISR_CTCIF12		(1 << 1)
/** MDMA_C12ISR_TEIF12 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C12ISR_TEIF12		(1 << 0)

/**@}*/

/** @defgroup mdma_c12ifcr C12IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C12IFCR_CLTCIF12 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C12IFCR_CLTCIF12		(1 << 4)
/** MDMA_C12IFCR_CBTIF12 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C12IFCR_CBTIF12		(1 << 3)
/** MDMA_C12IFCR_CBRTIF12 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C12IFCR_CBRTIF12		(1 << 2)
/** MDMA_C12IFCR_CCTCIF12 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C12IFCR_CCTCIF12		(1 << 1)
/** MDMA_C12IFCR_CTEIF12 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C12IFCR_CTEIF12		(1 << 0)

/**@}*/

/** @defgroup mdma_c12esr C12ESR MDMA Channel x error status register
@{*/

/** MDMA_C12ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C12ESR_BSE		(1 << 11)
/** MDMA_C12ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C12ESR_ASE		(1 << 10)
/** MDMA_C12ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C12ESR_TEMD		(1 << 9)
/** MDMA_C12ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C12ESR_TELD		(1 << 8)
/** MDMA_C12ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C12ESR_TED		(1 << 7)

#define MDMA_C12ESR_TEA_SHIFT		0
#define MDMA_C12ESR_TEA_MASK		0x7f
/** @defgroup mdma_c12esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c12cr C12CR This register is used to control the concerned channel.
@{*/

/** MDMA_C12CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C12CR_SWRQ		(1 << 16)
/** MDMA_C12CR_WEX Word Endianness exchange **/
#define MDMA_C12CR_WEX		(1 << 14)
/** MDMA_C12CR_HEX Half word Endianes exchange **/
#define MDMA_C12CR_HEX		(1 << 13)
/** MDMA_C12CR_BEX byte Endianness exchange **/
#define MDMA_C12CR_BEX		(1 << 12)

#define MDMA_C12CR_PL_SHIFT		6
#define MDMA_C12CR_PL_MASK		0x03
/** @defgroup mdma_c12cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C12CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C12CR_TCIE		(1 << 5)
/** MDMA_C12CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C12CR_BTIE		(1 << 4)
/** MDMA_C12CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C12CR_BRTIE		(1 << 3)
/** MDMA_C12CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C12CR_CTCIE		(1 << 2)
/** MDMA_C12CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C12CR_TEIE		(1 << 1)
/** MDMA_C12CR_EN channel enable **/
#define MDMA_C12CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c12tcr C12TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C12TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C12TCR_BWM		(1 << 31)
/** MDMA_C12TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C12TCR_SWRM		(1 << 30)

#define MDMA_C12TCR_TRGM_SHIFT		28
#define MDMA_C12TCR_TRGM_MASK		0x03
/** @defgroup mdma_c12tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C12TCR_PAM_SHIFT		26
#define MDMA_C12TCR_PAM_MASK		0x03
/** @defgroup mdma_c12tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C12TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C12TCR_PKE		(1 << 25)

#define MDMA_C12TCR_TLEN_SHIFT		18
#define MDMA_C12TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c12tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C12TCR_DBURST_SHIFT		15
#define MDMA_C12TCR_DBURST_MASK		0x07
/** @defgroup mdma_c12tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C12TCR_SBURST_SHIFT		12
#define MDMA_C12TCR_SBURST_MASK		0x07
/** @defgroup mdma_c12tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C12TCR_DINCOS_SHIFT		10
#define MDMA_C12TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c12tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C12TCR_SINCOS_SHIFT		8
#define MDMA_C12TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c12tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C12TCR_DSIZE_SHIFT		6
#define MDMA_C12TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c12tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C12TCR_SSIZE_SHIFT		4
#define MDMA_C12TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c12tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C12TCR_DINC_SHIFT		2
#define MDMA_C12TCR_DINC_MASK		0x03
/** @defgroup mdma_c12tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C12TCR_SINC_SHIFT		0
#define MDMA_C12TCR_SINC_MASK		0x03
/** @defgroup mdma_c12tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c12bndtr C12BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C12BNDTR_BRC_SHIFT		20
#define MDMA_C12BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c12bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C12BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C12BNDTR_BRDUM		(1 << 19)
/** MDMA_C12BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C12BNDTR_BRSUM		(1 << 18)

#define MDMA_C12BNDTR_BNDT_SHIFT		0
#define MDMA_C12BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c12bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c12sar C12SAR MDMA channel x source address register
@{*/


#define MDMA_C12SAR_SAR_SHIFT		0
#define MDMA_C12SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c12sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c12dar C12DAR MDMA channel x destination address register
@{*/


#define MDMA_C12DAR_DAR_SHIFT		0
#define MDMA_C12DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c12dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c12brur C12BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C12BRUR_DUV_SHIFT		16
#define MDMA_C12BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c12brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C12BRUR_SUV_SHIFT		0
#define MDMA_C12BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c12brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c12lar C12LAR MDMA channel x Link Address register
@{*/


#define MDMA_C12LAR_LAR_SHIFT		0
#define MDMA_C12LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c12lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c12tbr C12TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C12TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C12TBR_DBUS		(1 << 17)
/** MDMA_C12TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C12TBR_SBUS		(1 << 16)

#define MDMA_C12TBR_TSEL_SHIFT		0
#define MDMA_C12TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c12tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c12mar C12MAR MDMA channel x Mask address register
@{*/


#define MDMA_C12MAR_MAR_SHIFT		0
#define MDMA_C12MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c12mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c12mdr C12MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C12MDR_MDR_SHIFT		0
#define MDMA_C12MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c12mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c13isr C13ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C13ISR_CRQA13 channel x request active flag **/
#define MDMA_C13ISR_CRQA13		(1 << 16)
/** MDMA_C13ISR_TCIF13 channel x buffer transfer complete **/
#define MDMA_C13ISR_TCIF13		(1 << 4)
/** MDMA_C13ISR_BTIF13 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C13ISR_BTIF13		(1 << 3)
/** MDMA_C13ISR_BRTIF13 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C13ISR_BRTIF13		(1 << 2)
/** MDMA_C13ISR_CTCIF13 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C13ISR_CTCIF13		(1 << 1)
/** MDMA_C13ISR_TEIF13 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C13ISR_TEIF13		(1 << 0)

/**@}*/

/** @defgroup mdma_c13ifcr C13IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C13IFCR_CLTCIF13 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C13IFCR_CLTCIF13		(1 << 4)
/** MDMA_C13IFCR_CBTIF13 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C13IFCR_CBTIF13		(1 << 3)
/** MDMA_C13IFCR_CBRTIF13 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C13IFCR_CBRTIF13		(1 << 2)
/** MDMA_C13IFCR_CCTCIF13 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C13IFCR_CCTCIF13		(1 << 1)
/** MDMA_C13IFCR_CTEIF13 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C13IFCR_CTEIF13		(1 << 0)

/**@}*/

/** @defgroup mdma_c13esr C13ESR MDMA Channel x error status register
@{*/

/** MDMA_C13ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C13ESR_BSE		(1 << 11)
/** MDMA_C13ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C13ESR_ASE		(1 << 10)
/** MDMA_C13ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C13ESR_TEMD		(1 << 9)
/** MDMA_C13ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C13ESR_TELD		(1 << 8)
/** MDMA_C13ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C13ESR_TED		(1 << 7)

#define MDMA_C13ESR_TEA_SHIFT		0
#define MDMA_C13ESR_TEA_MASK		0x7f
/** @defgroup mdma_c13esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c13cr C13CR This register is used to control the concerned channel.
@{*/

/** MDMA_C13CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C13CR_SWRQ		(1 << 16)
/** MDMA_C13CR_WEX Word Endianness exchange **/
#define MDMA_C13CR_WEX		(1 << 14)
/** MDMA_C13CR_HEX Half word Endianes exchange **/
#define MDMA_C13CR_HEX		(1 << 13)
/** MDMA_C13CR_BEX byte Endianness exchange **/
#define MDMA_C13CR_BEX		(1 << 12)

#define MDMA_C13CR_PL_SHIFT		6
#define MDMA_C13CR_PL_MASK		0x03
/** @defgroup mdma_c13cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C13CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C13CR_TCIE		(1 << 5)
/** MDMA_C13CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C13CR_BTIE		(1 << 4)
/** MDMA_C13CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C13CR_BRTIE		(1 << 3)
/** MDMA_C13CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C13CR_CTCIE		(1 << 2)
/** MDMA_C13CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C13CR_TEIE		(1 << 1)
/** MDMA_C13CR_EN channel enable **/
#define MDMA_C13CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c13tcr C13TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C13TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C13TCR_BWM		(1 << 31)
/** MDMA_C13TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C13TCR_SWRM		(1 << 30)

#define MDMA_C13TCR_TRGM_SHIFT		28
#define MDMA_C13TCR_TRGM_MASK		0x03
/** @defgroup mdma_c13tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C13TCR_PAM_SHIFT		26
#define MDMA_C13TCR_PAM_MASK		0x03
/** @defgroup mdma_c13tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C13TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C13TCR_PKE		(1 << 25)

#define MDMA_C13TCR_TLEN_SHIFT		18
#define MDMA_C13TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c13tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C13TCR_DBURST_SHIFT		15
#define MDMA_C13TCR_DBURST_MASK		0x07
/** @defgroup mdma_c13tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C13TCR_SBURST_SHIFT		12
#define MDMA_C13TCR_SBURST_MASK		0x07
/** @defgroup mdma_c13tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C13TCR_DINCOS_SHIFT		10
#define MDMA_C13TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c13tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C13TCR_SINCOS_SHIFT		8
#define MDMA_C13TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c13tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C13TCR_DSIZE_SHIFT		6
#define MDMA_C13TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c13tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C13TCR_SSIZE_SHIFT		4
#define MDMA_C13TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c13tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C13TCR_DINC_SHIFT		2
#define MDMA_C13TCR_DINC_MASK		0x03
/** @defgroup mdma_c13tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C13TCR_SINC_SHIFT		0
#define MDMA_C13TCR_SINC_MASK		0x03
/** @defgroup mdma_c13tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c13bndtr C13BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C13BNDTR_BRC_SHIFT		20
#define MDMA_C13BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c13bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C13BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C13BNDTR_BRDUM		(1 << 19)
/** MDMA_C13BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C13BNDTR_BRSUM		(1 << 18)

#define MDMA_C13BNDTR_BNDT_SHIFT		0
#define MDMA_C13BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c13bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c13sar C13SAR MDMA channel x source address register
@{*/


#define MDMA_C13SAR_SAR_SHIFT		0
#define MDMA_C13SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c13sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c13dar C13DAR MDMA channel x destination address register
@{*/


#define MDMA_C13DAR_DAR_SHIFT		0
#define MDMA_C13DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c13dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c13brur C13BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C13BRUR_DUV_SHIFT		16
#define MDMA_C13BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c13brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C13BRUR_SUV_SHIFT		0
#define MDMA_C13BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c13brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c13lar C13LAR MDMA channel x Link Address register
@{*/


#define MDMA_C13LAR_LAR_SHIFT		0
#define MDMA_C13LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c13lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c13tbr C13TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C13TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C13TBR_DBUS		(1 << 17)
/** MDMA_C13TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C13TBR_SBUS		(1 << 16)

#define MDMA_C13TBR_TSEL_SHIFT		0
#define MDMA_C13TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c13tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c13mar C13MAR MDMA channel x Mask address register
@{*/


#define MDMA_C13MAR_MAR_SHIFT		0
#define MDMA_C13MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c13mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c13mdr C13MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C13MDR_MDR_SHIFT		0
#define MDMA_C13MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c13mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c14isr C14ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C14ISR_CRQA14 channel x request active flag **/
#define MDMA_C14ISR_CRQA14		(1 << 16)
/** MDMA_C14ISR_TCIF14 channel x buffer transfer complete **/
#define MDMA_C14ISR_TCIF14		(1 << 4)
/** MDMA_C14ISR_BTIF14 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C14ISR_BTIF14		(1 << 3)
/** MDMA_C14ISR_BRTIF14 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C14ISR_BRTIF14		(1 << 2)
/** MDMA_C14ISR_CTCIF14 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C14ISR_CTCIF14		(1 << 1)
/** MDMA_C14ISR_TEIF14 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C14ISR_TEIF14		(1 << 0)

/**@}*/

/** @defgroup mdma_c14ifcr C14IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C14IFCR_CLTCIF14 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C14IFCR_CLTCIF14		(1 << 4)
/** MDMA_C14IFCR_CBTIF14 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C14IFCR_CBTIF14		(1 << 3)
/** MDMA_C14IFCR_CBRTIF14 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C14IFCR_CBRTIF14		(1 << 2)
/** MDMA_C14IFCR_CCTCIF14 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C14IFCR_CCTCIF14		(1 << 1)
/** MDMA_C14IFCR_CTEIF14 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C14IFCR_CTEIF14		(1 << 0)

/**@}*/

/** @defgroup mdma_c14esr C14ESR MDMA Channel x error status register
@{*/

/** MDMA_C14ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C14ESR_BSE		(1 << 11)
/** MDMA_C14ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C14ESR_ASE		(1 << 10)
/** MDMA_C14ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C14ESR_TEMD		(1 << 9)
/** MDMA_C14ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C14ESR_TELD		(1 << 8)
/** MDMA_C14ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C14ESR_TED		(1 << 7)

#define MDMA_C14ESR_TEA_SHIFT		0
#define MDMA_C14ESR_TEA_MASK		0x7f
/** @defgroup mdma_c14esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c14cr C14CR This register is used to control the concerned channel.
@{*/

/** MDMA_C14CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C14CR_SWRQ		(1 << 16)
/** MDMA_C14CR_WEX Word Endianness exchange **/
#define MDMA_C14CR_WEX		(1 << 14)
/** MDMA_C14CR_HEX Half word Endianes exchange **/
#define MDMA_C14CR_HEX		(1 << 13)
/** MDMA_C14CR_BEX byte Endianness exchange **/
#define MDMA_C14CR_BEX		(1 << 12)

#define MDMA_C14CR_PL_SHIFT		6
#define MDMA_C14CR_PL_MASK		0x03
/** @defgroup mdma_c14cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C14CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C14CR_TCIE		(1 << 5)
/** MDMA_C14CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C14CR_BTIE		(1 << 4)
/** MDMA_C14CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C14CR_BRTIE		(1 << 3)
/** MDMA_C14CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C14CR_CTCIE		(1 << 2)
/** MDMA_C14CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C14CR_TEIE		(1 << 1)
/** MDMA_C14CR_EN channel enable **/
#define MDMA_C14CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c14tcr C14TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C14TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C14TCR_BWM		(1 << 31)
/** MDMA_C14TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C14TCR_SWRM		(1 << 30)

#define MDMA_C14TCR_TRGM_SHIFT		28
#define MDMA_C14TCR_TRGM_MASK		0x03
/** @defgroup mdma_c14tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C14TCR_PAM_SHIFT		26
#define MDMA_C14TCR_PAM_MASK		0x03
/** @defgroup mdma_c14tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C14TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C14TCR_PKE		(1 << 25)

#define MDMA_C14TCR_TLEN_SHIFT		18
#define MDMA_C14TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c14tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C14TCR_DBURST_SHIFT		15
#define MDMA_C14TCR_DBURST_MASK		0x07
/** @defgroup mdma_c14tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C14TCR_SBURST_SHIFT		12
#define MDMA_C14TCR_SBURST_MASK		0x07
/** @defgroup mdma_c14tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C14TCR_DINCOS_SHIFT		10
#define MDMA_C14TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c14tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C14TCR_SINCOS_SHIFT		8
#define MDMA_C14TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c14tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C14TCR_DSIZE_SHIFT		6
#define MDMA_C14TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c14tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C14TCR_SSIZE_SHIFT		4
#define MDMA_C14TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c14tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C14TCR_DINC_SHIFT		2
#define MDMA_C14TCR_DINC_MASK		0x03
/** @defgroup mdma_c14tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C14TCR_SINC_SHIFT		0
#define MDMA_C14TCR_SINC_MASK		0x03
/** @defgroup mdma_c14tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c14bndtr C14BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C14BNDTR_BRC_SHIFT		20
#define MDMA_C14BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c14bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C14BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C14BNDTR_BRDUM		(1 << 19)
/** MDMA_C14BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C14BNDTR_BRSUM		(1 << 18)

#define MDMA_C14BNDTR_BNDT_SHIFT		0
#define MDMA_C14BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c14bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c14sar C14SAR MDMA channel x source address register
@{*/


#define MDMA_C14SAR_SAR_SHIFT		0
#define MDMA_C14SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c14sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c14dar C14DAR MDMA channel x destination address register
@{*/


#define MDMA_C14DAR_DAR_SHIFT		0
#define MDMA_C14DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c14dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c14brur C14BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C14BRUR_DUV_SHIFT		16
#define MDMA_C14BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c14brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C14BRUR_SUV_SHIFT		0
#define MDMA_C14BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c14brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c14lar C14LAR MDMA channel x Link Address register
@{*/


#define MDMA_C14LAR_LAR_SHIFT		0
#define MDMA_C14LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c14lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c14tbr C14TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C14TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C14TBR_DBUS		(1 << 17)
/** MDMA_C14TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C14TBR_SBUS		(1 << 16)

#define MDMA_C14TBR_TSEL_SHIFT		0
#define MDMA_C14TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c14tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c14mar C14MAR MDMA channel x Mask address register
@{*/


#define MDMA_C14MAR_MAR_SHIFT		0
#define MDMA_C14MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c14mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c14mdr C14MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C14MDR_MDR_SHIFT		0
#define MDMA_C14MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c14mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c15isr C15ISR MDMA channel x interrupt/status register
@{*/

/** MDMA_C15ISR_CRQA15 channel x request active flag **/
#define MDMA_C15ISR_CRQA15		(1 << 16)
/** MDMA_C15ISR_TCIF15 channel x buffer transfer complete **/
#define MDMA_C15ISR_TCIF15		(1 << 4)
/** MDMA_C15ISR_BTIF15 Channel x block transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C15ISR_BTIF15		(1 << 3)
/** MDMA_C15ISR_BRTIF15 Channel x block repeat transfer complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C15ISR_BRTIF15		(1 << 2)
/** MDMA_C15ISR_CTCIF15 Channel x Channel Transfer Complete interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. CTC is set when the last block was transferred and the channel has been automatically disabled. CTC is also set when the channel is suspended, as a result of writing EN bit to 0. **/
#define MDMA_C15ISR_CTCIF15		(1 << 1)
/** MDMA_C15ISR_TEIF15 Channel x transfer error interrupt flag This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCRy register. **/
#define MDMA_C15ISR_TEIF15		(1 << 0)

/**@}*/

/** @defgroup mdma_c15ifcr C15IFCR MDMA channel x interrupt flag clear register
@{*/

/** MDMA_C15IFCR_CLTCIF15 CLear buffer Transfer Complete Interrupt Flag for channel x Writing a 1 into this bit clears TCIFx in the MDMA_ISRy register **/
#define MDMA_C15IFCR_CLTCIF15		(1 << 4)
/** MDMA_C15IFCR_CBTIF15 Channel x Clear block transfer complete interrupt flag Writing a 1 into this bit clears BTIFx in the MDMA_ISRy register **/
#define MDMA_C15IFCR_CBTIF15		(1 << 3)
/** MDMA_C15IFCR_CBRTIF15 Channel x clear block repeat transfer complete interrupt flag Writing a 1 into this bit clears BRTIFx in the MDMA_ISRy register **/
#define MDMA_C15IFCR_CBRTIF15		(1 << 2)
/** MDMA_C15IFCR_CCTCIF15 Clear Channel transfer complete interrupt flag for channel x Writing a 1 into this bit clears CTCIFx in the MDMA_ISRy register **/
#define MDMA_C15IFCR_CCTCIF15		(1 << 1)
/** MDMA_C15IFCR_CTEIF15 Channel x clear transfer error interrupt flag Writing a 1 into this bit clears TEIFx in the MDMA_ISRy register **/
#define MDMA_C15IFCR_CTEIF15		(1 << 0)

/**@}*/

/** @defgroup mdma_c15esr C15ESR MDMA Channel x error status register
@{*/

/** MDMA_C15ESR_BSE Block Size Error These bit is set by HW, when the block size is not an integer multiple of the data size either for source or destination. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C15ESR_BSE		(1 << 11)
/** MDMA_C15ESR_ASE Address/Size Error These bit is set by HW, when the programmed address is not aligned with the data size. TED will indicate whether the problem is on the source or destination. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C15ESR_ASE		(1 << 10)
/** MDMA_C15ESR_TEMD Transfer Error Mask Data These bit is set by HW, in case of a transfer error while writing the Mask Data. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C15ESR_TEMD		(1 << 9)
/** MDMA_C15ESR_TELD Transfer Error Link Data These bit is set by HW, in case of a transfer error while reading the block link data structure. It is cleared by software writing 1 to the CTEIFx bit in the DMA_IFCRy register. **/
#define MDMA_C15ESR_TELD		(1 << 8)
/** MDMA_C15ESR_TED Transfer Error Direction These bit is set and cleared by HW, in case of an MDMA data transfer error. **/
#define MDMA_C15ESR_TED		(1 << 7)

#define MDMA_C15ESR_TEA_SHIFT		0
#define MDMA_C15ESR_TEA_MASK		0x7f
/** @defgroup mdma_c15esr_tea TEA Transfer Error Address These bits are set and cleared by HW, in case of an MDMA data transfer error. It is used in conjunction with TED. This field indicates the 7 LSBits of the address which generated a transfer/access error. It may be used by SW to retrieve the failing address, by adding this value (truncated to the buffer transfer length size) to the current SAR/DAR value. Note: The SAR/DAR current value doesnt reflect this last address due to the FIFO management system. The SAR/DAR are only updated at the end of a (buffer) transfer (of TLEN+1 bytes). Note: It is not set in case of a link data error.
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c15cr C15CR This register is used to control the concerned channel.
@{*/

/** MDMA_C15CR_SWRQ SW ReQuest Writing a 1 into this bit sets the CRQAx in MDMA_ISRy register, activating the request on Channel x Note: Either the whole CxCR register or the 8-bit/16-bit register @ Address offset: 0x4E + 0x40 chn may be used for SWRQ activation. In case of a SW request, acknowledge is not generated (neither HW signal, nor CxMAR write access). **/
#define MDMA_C15CR_SWRQ		(1 << 16)
/** MDMA_C15CR_WEX Word Endianness exchange **/
#define MDMA_C15CR_WEX		(1 << 14)
/** MDMA_C15CR_HEX Half word Endianes exchange **/
#define MDMA_C15CR_HEX		(1 << 13)
/** MDMA_C15CR_BEX byte Endianness exchange **/
#define MDMA_C15CR_BEX		(1 << 12)

#define MDMA_C15CR_PL_SHIFT		6
#define MDMA_C15CR_PL_MASK		0x03
/** @defgroup mdma_c15cr_pl PL Priority level These bits are set and cleared by software. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C15CR_TCIE buffer Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C15CR_TCIE		(1 << 5)
/** MDMA_C15CR_BTIE Block Transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C15CR_BTIE		(1 << 4)
/** MDMA_C15CR_BRTIE Block Repeat transfer interrupt enable This bit is set and cleared by software. **/
#define MDMA_C15CR_BRTIE		(1 << 3)
/** MDMA_C15CR_CTCIE Channel Transfer Complete interrupt enable This bit is set and cleared by software. **/
#define MDMA_C15CR_CTCIE		(1 << 2)
/** MDMA_C15CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define MDMA_C15CR_TEIE		(1 << 1)
/** MDMA_C15CR_EN channel enable **/
#define MDMA_C15CR_EN		(1 << 0)

/**@}*/

/** @defgroup mdma_c15tcr C15TCR This register is used to configure the concerned channel.
@{*/

/** MDMA_C15TCR_BWM Bufferable Write Mode This bit is set and cleared by software. This bit is protected and can be written only if EN is 0. Note: All MDMA destination accesses are non-cacheable. **/
#define MDMA_C15TCR_BWM		(1 << 31)
/** MDMA_C15TCR_SWRM SW Request Mode This bit is set and cleared by software. If a HW or SW request is currently active, the bit change will be delayed until the current transfer is completed. If the CxMAR contains a valid address, the CxMDR value will also be written @ CxMAR address. This bit is protected and can be written only if EN is 0. **/
#define MDMA_C15TCR_SWRM		(1 << 30)

#define MDMA_C15TCR_TRGM_SHIFT		28
#define MDMA_C15TCR_TRGM_MASK		0x03
/** @defgroup mdma_c15tcr_trgm TRGM Trigger Mode These bits are set and cleared by software. Note: If TRGM is 11 for the current block, all the values loaded at the end of the current block through the linked list mechanism must keep the same value (TRGM=11) and the same SWRM value, otherwise the result is undefined. These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/


#define MDMA_C15TCR_PAM_SHIFT		26
#define MDMA_C15TCR_PAM_MASK		0x03
/** @defgroup mdma_c15tcr_pam PAM Padding/Alignement Mode These bits are set and cleared by software. Case 1: Source data size smaller than destination data size - 3 options are valid. Case 2: Source data size larger than destination data size. The remainder part is discarded. When PKE = 1 or DSIZE=SSIZE, these bits are ignored. These bits are protected and can be written only if EN is 0
@{*/
/**@}*/

/** MDMA_C15TCR_PKE PacK Enable These bit is set and cleared by software. If the Source Size is smaller than the destination, it will be padded according to the PAM value. If the Source data size is larger than the destination one, it will be truncated. The alignment will be done according to the PAM[0] value. This bit is protected and can be written only if EN is 0 **/
#define MDMA_C15TCR_PKE		(1 << 25)

#define MDMA_C15TCR_TLEN_SHIFT		18
#define MDMA_C15TCR_TLEN_MASK		0x7f
/** @defgroup mdma_c15tcr_tlen TLEN buffer transfer lengh
@{*/
/**@}*/


#define MDMA_C15TCR_DBURST_SHIFT		15
#define MDMA_C15TCR_DBURST_MASK		0x07
/** @defgroup mdma_c15tcr_dburst DBURST Destination burst transfer configuration
@{*/
/**@}*/


#define MDMA_C15TCR_SBURST_SHIFT		12
#define MDMA_C15TCR_SBURST_MASK		0x07
/** @defgroup mdma_c15tcr_sburst SBURST source burst transfer configuration
@{*/
/**@}*/


#define MDMA_C15TCR_DINCOS_SHIFT		10
#define MDMA_C15TCR_DINCOS_MASK		0x03
/** @defgroup mdma_c15tcr_dincos DINCOS Destination increment offset
@{*/
/**@}*/


#define MDMA_C15TCR_SINCOS_SHIFT		8
#define MDMA_C15TCR_SINCOS_MASK		0x03
/** @defgroup mdma_c15tcr_sincos SINCOS source increment offset size
@{*/
/**@}*/


#define MDMA_C15TCR_DSIZE_SHIFT		6
#define MDMA_C15TCR_DSIZE_MASK		0x03
/** @defgroup mdma_c15tcr_dsize DSIZE Destination data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0. Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If DINCOS &lt; DSIZE and DINC &#8800; 00, the result will be unpredictable. Note: DSIZE = 11 (double-word) is forbidden when destination is TCM/AHB bus (DBUS=1).
@{*/
/**@}*/


#define MDMA_C15TCR_SSIZE_SHIFT		4
#define MDMA_C15TCR_SSIZE_MASK		0x03
/** @defgroup mdma_c15tcr_ssize SSIZE Source data size These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: If a value of 11 is programmed for the TCM access/AHB port, a transfer error will occur (TEIF bit set) If SINCOS &lt; SSIZE and SINC &#8800; 00, the result will be unpredictable. Note: SSIZE = 11 (double-word) is forbidden when source is TCM/AHB bus (SBUS=1).
@{*/
/**@}*/


#define MDMA_C15TCR_DINC_SHIFT		2
#define MDMA_C15TCR_DINC_MASK		0x03
/** @defgroup mdma_c15tcr_dinc DINC Destination increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When destination is AHB (DBUS=1), DINC = 00 is forbidden.
@{*/
/**@}*/


#define MDMA_C15TCR_SINC_SHIFT		0
#define MDMA_C15TCR_SINC_MASK		0x03
/** @defgroup mdma_c15tcr_sinc SINC Source increment mode These bits are set and cleared by software. These bits are protected and can be written only if EN is 0 Note: When source is AHB (SBUS=1), SINC = 00 is forbidden. In Linked List Mode, at the end of a block (single or last block in repeated block transfer mode), this register will be loaded from memory (from address given by current LAR[31:0] + 0x00).
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c15bndtr C15BNDTR MDMA Channel x block number of data register
@{*/


#define MDMA_C15BNDTR_BRC_SHIFT		20
#define MDMA_C15BNDTR_BRC_MASK		0xfff
/** @defgroup mdma_c15bndtr_brc BRC Block Repeat Count This field contains the number of repetitions of the current block (0 to 4095). When the channel is enabled, this register is read-only, indicating the remaining number of blocks, excluding the current one. This register decrements after each complete block transfer. Once the last block transfer has completed, this register can either stay at zero or be reloaded automatically from memory (in Linked List mode - i.e. Link Address valid). These bits are protected and can be written only if EN is 0.
@{*/
/**@}*/

/** MDMA_C15BNDTR_BRDUM Block Repeat Destination address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C15BNDTR_BRDUM		(1 << 19)
/** MDMA_C15BNDTR_BRSUM Block Repeat Source address Update Mode These bits are protected and can be written only if EN is 0. **/
#define MDMA_C15BNDTR_BRSUM		(1 << 18)

#define MDMA_C15BNDTR_BNDT_SHIFT		0
#define MDMA_C15BNDTR_BNDT_MASK		0x1ffff
/** @defgroup mdma_c15bndtr_bndt BNDT block number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c15sar C15SAR MDMA channel x source address register
@{*/


#define MDMA_C15SAR_SAR_SHIFT		0
#define MDMA_C15SAR_SAR_MASK		0xffffffff
/** @defgroup mdma_c15sar_sar SAR source adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c15dar C15DAR MDMA channel x destination address register
@{*/


#define MDMA_C15DAR_DAR_SHIFT		0
#define MDMA_C15DAR_DAR_MASK		0xffffffff
/** @defgroup mdma_c15dar_dar DAR Destination adr base
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c15brur C15BRUR MDMA channel x Block Repeat address Update register
@{*/


#define MDMA_C15BRUR_DUV_SHIFT		16
#define MDMA_C15BRUR_DUV_MASK		0xffff
/** @defgroup mdma_c15brur_duv DUV destination address update
@{*/
/**@}*/


#define MDMA_C15BRUR_SUV_SHIFT		0
#define MDMA_C15BRUR_SUV_MASK		0xffff
/** @defgroup mdma_c15brur_suv SUV source adresse update value
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c15lar C15LAR MDMA channel x Link Address register
@{*/


#define MDMA_C15LAR_LAR_SHIFT		0
#define MDMA_C15LAR_LAR_MASK		0xffffffff
/** @defgroup mdma_c15lar_lar LAR Link address register
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c15tbr C15TBR MDMA channel x Trigger and Bus selection Register
@{*/

/** MDMA_C15TBR_DBUS Destination BUS slect This bit is protected and can be written only if EN is 0. **/
#define MDMA_C15TBR_DBUS		(1 << 17)
/** MDMA_C15TBR_SBUS Source BUS select This bit is protected and can be written only if EN is 0. **/
#define MDMA_C15TBR_SBUS		(1 << 16)

#define MDMA_C15TBR_TSEL_SHIFT		0
#define MDMA_C15TBR_TSEL_MASK		0x3f
/** @defgroup mdma_c15tbr_tsel TSEL Trigger selection
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c15mar C15MAR MDMA channel x Mask address register
@{*/


#define MDMA_C15MAR_MAR_SHIFT		0
#define MDMA_C15MAR_MAR_MASK		0xffffffff
/** @defgroup mdma_c15mar_mar MAR Mask address
@{*/
/**@}*/


/**@}*/

/** @defgroup mdma_c15mdr C15MDR MDMA channel x Mask Data register
@{*/


#define MDMA_C15MDR_MDR_SHIFT		0
#define MDMA_C15MDR_MDR_MASK		0xffffffff
/** @defgroup mdma_c15mdr_mdr MDR Mask data
@{*/
/**@}*/


/**@}*/

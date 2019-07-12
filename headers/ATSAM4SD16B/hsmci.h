#pragma once 

/* --- HSMCI: High Speed MultiMedia Card Interface ------------------ */

/** @defgroup hsmci_registers High Speed MultiMedia Card Interface Register
@{*/

/** HSMCI_CR Control Register **/
#define HSMCI_CR			MMIO32(HSMCI_BASE + 0x00)
/** HSMCI_MR Mode Register **/
#define HSMCI_MR			MMIO32(HSMCI_BASE + 0x04)
/** HSMCI_DTOR Data Timeout Register **/
#define HSMCI_DTOR			MMIO32(HSMCI_BASE + 0x08)
/** HSMCI_SDCR SD/SDIO Card Register **/
#define HSMCI_SDCR			MMIO32(HSMCI_BASE + 0x0c)
/** HSMCI_ARGR Argument Register **/
#define HSMCI_ARGR			MMIO32(HSMCI_BASE + 0x10)
/** HSMCI_CMDR Command Register **/
#define HSMCI_CMDR			MMIO32(HSMCI_BASE + 0x14)
/** HSMCI_BLKR Block Register **/
#define HSMCI_BLKR			MMIO32(HSMCI_BASE + 0x18)
/** HSMCI_CSTOR Completion Signal Timeout Register **/
#define HSMCI_CSTOR			MMIO32(HSMCI_BASE + 0x1c)
/** HSMCI_RSPR[0] Response Register **/
#define HSMCI_RSPR[0]			MMIO32(HSMCI_BASE + 0x20)
/** HSMCI_RSPR[1] Response Register **/
#define HSMCI_RSPR[1]			MMIO32(HSMCI_BASE + 0x24)
/** HSMCI_RSPR[2] Response Register **/
#define HSMCI_RSPR[2]			MMIO32(HSMCI_BASE + 0x28)
/** HSMCI_RSPR[3] Response Register **/
#define HSMCI_RSPR[3]			MMIO32(HSMCI_BASE + 0x2c)
/** HSMCI_RDR Receive Data Register **/
#define HSMCI_RDR			MMIO32(HSMCI_BASE + 0x30)
/** HSMCI_TDR Transmit Data Register **/
#define HSMCI_TDR			MMIO32(HSMCI_BASE + 0x34)
/** HSMCI_SR Status Register **/
#define HSMCI_SR			MMIO32(HSMCI_BASE + 0x40)
/** HSMCI_IER Interrupt Enable Register **/
#define HSMCI_IER			MMIO32(HSMCI_BASE + 0x44)
/** HSMCI_IDR Interrupt Disable Register **/
#define HSMCI_IDR			MMIO32(HSMCI_BASE + 0x48)
/** HSMCI_IMR Interrupt Mask Register **/
#define HSMCI_IMR			MMIO32(HSMCI_BASE + 0x4c)
/** HSMCI_CFG Configuration Register **/
#define HSMCI_CFG			MMIO32(HSMCI_BASE + 0x54)
/** HSMCI_WPMR Write Protection Mode Register **/
#define HSMCI_WPMR			MMIO32(HSMCI_BASE + 0xe4)
/** HSMCI_WPSR Write Protection Status Register **/
#define HSMCI_WPSR			MMIO32(HSMCI_BASE + 0xe8)
/** HSMCI_RPR Receive Pointer Register **/
#define HSMCI_RPR			MMIO32(HSMCI_BASE + 0x100)
/** HSMCI_RCR Receive Counter Register **/
#define HSMCI_RCR			MMIO32(HSMCI_BASE + 0x104)
/** HSMCI_TPR Transmit Pointer Register **/
#define HSMCI_TPR			MMIO32(HSMCI_BASE + 0x108)
/** HSMCI_TCR Transmit Counter Register **/
#define HSMCI_TCR			MMIO32(HSMCI_BASE + 0x10c)
/** HSMCI_RNPR Receive Next Pointer Register **/
#define HSMCI_RNPR			MMIO32(HSMCI_BASE + 0x110)
/** HSMCI_RNCR Receive Next Counter Register **/
#define HSMCI_RNCR			MMIO32(HSMCI_BASE + 0x114)
/** HSMCI_TNPR Transmit Next Pointer Register **/
#define HSMCI_TNPR			MMIO32(HSMCI_BASE + 0x118)
/** HSMCI_TNCR Transmit Next Counter Register **/
#define HSMCI_TNCR			MMIO32(HSMCI_BASE + 0x11c)
/** HSMCI_PTCR Transfer Control Register **/
#define HSMCI_PTCR			MMIO32(HSMCI_BASE + 0x120)
/** HSMCI_PTSR Transfer Status Register **/
#define HSMCI_PTSR			MMIO32(HSMCI_BASE + 0x124)
/** HSMCI_FIFO[0] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[0]			MMIO32(HSMCI_BASE + 0x200)
/** HSMCI_FIFO[1] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[1]			MMIO32(HSMCI_BASE + 0x204)
/** HSMCI_FIFO[2] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[2]			MMIO32(HSMCI_BASE + 0x208)
/** HSMCI_FIFO[3] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[3]			MMIO32(HSMCI_BASE + 0x20c)
/** HSMCI_FIFO[4] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[4]			MMIO32(HSMCI_BASE + 0x210)
/** HSMCI_FIFO[5] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[5]			MMIO32(HSMCI_BASE + 0x214)
/** HSMCI_FIFO[6] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[6]			MMIO32(HSMCI_BASE + 0x218)
/** HSMCI_FIFO[7] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[7]			MMIO32(HSMCI_BASE + 0x21c)
/** HSMCI_FIFO[8] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[8]			MMIO32(HSMCI_BASE + 0x220)
/** HSMCI_FIFO[9] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[9]			MMIO32(HSMCI_BASE + 0x224)
/** HSMCI_FIFO[10] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[10]			MMIO32(HSMCI_BASE + 0x228)
/** HSMCI_FIFO[11] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[11]			MMIO32(HSMCI_BASE + 0x22c)
/** HSMCI_FIFO[12] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[12]			MMIO32(HSMCI_BASE + 0x230)
/** HSMCI_FIFO[13] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[13]			MMIO32(HSMCI_BASE + 0x234)
/** HSMCI_FIFO[14] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[14]			MMIO32(HSMCI_BASE + 0x238)
/** HSMCI_FIFO[15] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[15]			MMIO32(HSMCI_BASE + 0x23c)
/** HSMCI_FIFO[16] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[16]			MMIO32(HSMCI_BASE + 0x240)
/** HSMCI_FIFO[17] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[17]			MMIO32(HSMCI_BASE + 0x244)
/** HSMCI_FIFO[18] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[18]			MMIO32(HSMCI_BASE + 0x248)
/** HSMCI_FIFO[19] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[19]			MMIO32(HSMCI_BASE + 0x24c)
/** HSMCI_FIFO[20] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[20]			MMIO32(HSMCI_BASE + 0x250)
/** HSMCI_FIFO[21] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[21]			MMIO32(HSMCI_BASE + 0x254)
/** HSMCI_FIFO[22] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[22]			MMIO32(HSMCI_BASE + 0x258)
/** HSMCI_FIFO[23] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[23]			MMIO32(HSMCI_BASE + 0x25c)
/** HSMCI_FIFO[24] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[24]			MMIO32(HSMCI_BASE + 0x260)
/** HSMCI_FIFO[25] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[25]			MMIO32(HSMCI_BASE + 0x264)
/** HSMCI_FIFO[26] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[26]			MMIO32(HSMCI_BASE + 0x268)
/** HSMCI_FIFO[27] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[27]			MMIO32(HSMCI_BASE + 0x26c)
/** HSMCI_FIFO[28] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[28]			MMIO32(HSMCI_BASE + 0x270)
/** HSMCI_FIFO[29] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[29]			MMIO32(HSMCI_BASE + 0x274)
/** HSMCI_FIFO[30] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[30]			MMIO32(HSMCI_BASE + 0x278)
/** HSMCI_FIFO[31] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[31]			MMIO32(HSMCI_BASE + 0x27c)
/** HSMCI_FIFO[32] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[32]			MMIO32(HSMCI_BASE + 0x280)
/** HSMCI_FIFO[33] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[33]			MMIO32(HSMCI_BASE + 0x284)
/** HSMCI_FIFO[34] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[34]			MMIO32(HSMCI_BASE + 0x288)
/** HSMCI_FIFO[35] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[35]			MMIO32(HSMCI_BASE + 0x28c)
/** HSMCI_FIFO[36] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[36]			MMIO32(HSMCI_BASE + 0x290)
/** HSMCI_FIFO[37] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[37]			MMIO32(HSMCI_BASE + 0x294)
/** HSMCI_FIFO[38] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[38]			MMIO32(HSMCI_BASE + 0x298)
/** HSMCI_FIFO[39] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[39]			MMIO32(HSMCI_BASE + 0x29c)
/** HSMCI_FIFO[40] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[40]			MMIO32(HSMCI_BASE + 0x2a0)
/** HSMCI_FIFO[41] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[41]			MMIO32(HSMCI_BASE + 0x2a4)
/** HSMCI_FIFO[42] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[42]			MMIO32(HSMCI_BASE + 0x2a8)
/** HSMCI_FIFO[43] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[43]			MMIO32(HSMCI_BASE + 0x2ac)
/** HSMCI_FIFO[44] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[44]			MMIO32(HSMCI_BASE + 0x2b0)
/** HSMCI_FIFO[45] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[45]			MMIO32(HSMCI_BASE + 0x2b4)
/** HSMCI_FIFO[46] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[46]			MMIO32(HSMCI_BASE + 0x2b8)
/** HSMCI_FIFO[47] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[47]			MMIO32(HSMCI_BASE + 0x2bc)
/** HSMCI_FIFO[48] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[48]			MMIO32(HSMCI_BASE + 0x2c0)
/** HSMCI_FIFO[49] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[49]			MMIO32(HSMCI_BASE + 0x2c4)
/** HSMCI_FIFO[50] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[50]			MMIO32(HSMCI_BASE + 0x2c8)
/** HSMCI_FIFO[51] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[51]			MMIO32(HSMCI_BASE + 0x2cc)
/** HSMCI_FIFO[52] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[52]			MMIO32(HSMCI_BASE + 0x2d0)
/** HSMCI_FIFO[53] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[53]			MMIO32(HSMCI_BASE + 0x2d4)
/** HSMCI_FIFO[54] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[54]			MMIO32(HSMCI_BASE + 0x2d8)
/** HSMCI_FIFO[55] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[55]			MMIO32(HSMCI_BASE + 0x2dc)
/** HSMCI_FIFO[56] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[56]			MMIO32(HSMCI_BASE + 0x2e0)
/** HSMCI_FIFO[57] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[57]			MMIO32(HSMCI_BASE + 0x2e4)
/** HSMCI_FIFO[58] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[58]			MMIO32(HSMCI_BASE + 0x2e8)
/** HSMCI_FIFO[59] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[59]			MMIO32(HSMCI_BASE + 0x2ec)
/** HSMCI_FIFO[60] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[60]			MMIO32(HSMCI_BASE + 0x2f0)
/** HSMCI_FIFO[61] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[61]			MMIO32(HSMCI_BASE + 0x2f4)
/** HSMCI_FIFO[62] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[62]			MMIO32(HSMCI_BASE + 0x2f8)
/** HSMCI_FIFO[63] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[63]			MMIO32(HSMCI_BASE + 0x2fc)
/** HSMCI_FIFO[64] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[64]			MMIO32(HSMCI_BASE + 0x300)
/** HSMCI_FIFO[65] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[65]			MMIO32(HSMCI_BASE + 0x304)
/** HSMCI_FIFO[66] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[66]			MMIO32(HSMCI_BASE + 0x308)
/** HSMCI_FIFO[67] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[67]			MMIO32(HSMCI_BASE + 0x30c)
/** HSMCI_FIFO[68] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[68]			MMIO32(HSMCI_BASE + 0x310)
/** HSMCI_FIFO[69] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[69]			MMIO32(HSMCI_BASE + 0x314)
/** HSMCI_FIFO[70] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[70]			MMIO32(HSMCI_BASE + 0x318)
/** HSMCI_FIFO[71] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[71]			MMIO32(HSMCI_BASE + 0x31c)
/** HSMCI_FIFO[72] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[72]			MMIO32(HSMCI_BASE + 0x320)
/** HSMCI_FIFO[73] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[73]			MMIO32(HSMCI_BASE + 0x324)
/** HSMCI_FIFO[74] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[74]			MMIO32(HSMCI_BASE + 0x328)
/** HSMCI_FIFO[75] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[75]			MMIO32(HSMCI_BASE + 0x32c)
/** HSMCI_FIFO[76] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[76]			MMIO32(HSMCI_BASE + 0x330)
/** HSMCI_FIFO[77] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[77]			MMIO32(HSMCI_BASE + 0x334)
/** HSMCI_FIFO[78] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[78]			MMIO32(HSMCI_BASE + 0x338)
/** HSMCI_FIFO[79] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[79]			MMIO32(HSMCI_BASE + 0x33c)
/** HSMCI_FIFO[80] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[80]			MMIO32(HSMCI_BASE + 0x340)
/** HSMCI_FIFO[81] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[81]			MMIO32(HSMCI_BASE + 0x344)
/** HSMCI_FIFO[82] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[82]			MMIO32(HSMCI_BASE + 0x348)
/** HSMCI_FIFO[83] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[83]			MMIO32(HSMCI_BASE + 0x34c)
/** HSMCI_FIFO[84] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[84]			MMIO32(HSMCI_BASE + 0x350)
/** HSMCI_FIFO[85] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[85]			MMIO32(HSMCI_BASE + 0x354)
/** HSMCI_FIFO[86] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[86]			MMIO32(HSMCI_BASE + 0x358)
/** HSMCI_FIFO[87] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[87]			MMIO32(HSMCI_BASE + 0x35c)
/** HSMCI_FIFO[88] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[88]			MMIO32(HSMCI_BASE + 0x360)
/** HSMCI_FIFO[89] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[89]			MMIO32(HSMCI_BASE + 0x364)
/** HSMCI_FIFO[90] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[90]			MMIO32(HSMCI_BASE + 0x368)
/** HSMCI_FIFO[91] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[91]			MMIO32(HSMCI_BASE + 0x36c)
/** HSMCI_FIFO[92] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[92]			MMIO32(HSMCI_BASE + 0x370)
/** HSMCI_FIFO[93] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[93]			MMIO32(HSMCI_BASE + 0x374)
/** HSMCI_FIFO[94] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[94]			MMIO32(HSMCI_BASE + 0x378)
/** HSMCI_FIFO[95] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[95]			MMIO32(HSMCI_BASE + 0x37c)
/** HSMCI_FIFO[96] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[96]			MMIO32(HSMCI_BASE + 0x380)
/** HSMCI_FIFO[97] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[97]			MMIO32(HSMCI_BASE + 0x384)
/** HSMCI_FIFO[98] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[98]			MMIO32(HSMCI_BASE + 0x388)
/** HSMCI_FIFO[99] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[99]			MMIO32(HSMCI_BASE + 0x38c)
/** HSMCI_FIFO[100] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[100]			MMIO32(HSMCI_BASE + 0x390)
/** HSMCI_FIFO[101] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[101]			MMIO32(HSMCI_BASE + 0x394)
/** HSMCI_FIFO[102] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[102]			MMIO32(HSMCI_BASE + 0x398)
/** HSMCI_FIFO[103] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[103]			MMIO32(HSMCI_BASE + 0x39c)
/** HSMCI_FIFO[104] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[104]			MMIO32(HSMCI_BASE + 0x3a0)
/** HSMCI_FIFO[105] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[105]			MMIO32(HSMCI_BASE + 0x3a4)
/** HSMCI_FIFO[106] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[106]			MMIO32(HSMCI_BASE + 0x3a8)
/** HSMCI_FIFO[107] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[107]			MMIO32(HSMCI_BASE + 0x3ac)
/** HSMCI_FIFO[108] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[108]			MMIO32(HSMCI_BASE + 0x3b0)
/** HSMCI_FIFO[109] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[109]			MMIO32(HSMCI_BASE + 0x3b4)
/** HSMCI_FIFO[110] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[110]			MMIO32(HSMCI_BASE + 0x3b8)
/** HSMCI_FIFO[111] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[111]			MMIO32(HSMCI_BASE + 0x3bc)
/** HSMCI_FIFO[112] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[112]			MMIO32(HSMCI_BASE + 0x3c0)
/** HSMCI_FIFO[113] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[113]			MMIO32(HSMCI_BASE + 0x3c4)
/** HSMCI_FIFO[114] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[114]			MMIO32(HSMCI_BASE + 0x3c8)
/** HSMCI_FIFO[115] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[115]			MMIO32(HSMCI_BASE + 0x3cc)
/** HSMCI_FIFO[116] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[116]			MMIO32(HSMCI_BASE + 0x3d0)
/** HSMCI_FIFO[117] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[117]			MMIO32(HSMCI_BASE + 0x3d4)
/** HSMCI_FIFO[118] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[118]			MMIO32(HSMCI_BASE + 0x3d8)
/** HSMCI_FIFO[119] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[119]			MMIO32(HSMCI_BASE + 0x3dc)
/** HSMCI_FIFO[120] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[120]			MMIO32(HSMCI_BASE + 0x3e0)
/** HSMCI_FIFO[121] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[121]			MMIO32(HSMCI_BASE + 0x3e4)
/** HSMCI_FIFO[122] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[122]			MMIO32(HSMCI_BASE + 0x3e8)
/** HSMCI_FIFO[123] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[123]			MMIO32(HSMCI_BASE + 0x3ec)
/** HSMCI_FIFO[124] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[124]			MMIO32(HSMCI_BASE + 0x3f0)
/** HSMCI_FIFO[125] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[125]			MMIO32(HSMCI_BASE + 0x3f4)
/** HSMCI_FIFO[126] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[126]			MMIO32(HSMCI_BASE + 0x3f8)
/** HSMCI_FIFO[127] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[127]			MMIO32(HSMCI_BASE + 0x3fc)
/** HSMCI_FIFO[128] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[128]			MMIO32(HSMCI_BASE + 0x400)
/** HSMCI_FIFO[129] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[129]			MMIO32(HSMCI_BASE + 0x404)
/** HSMCI_FIFO[130] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[130]			MMIO32(HSMCI_BASE + 0x408)
/** HSMCI_FIFO[131] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[131]			MMIO32(HSMCI_BASE + 0x40c)
/** HSMCI_FIFO[132] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[132]			MMIO32(HSMCI_BASE + 0x410)
/** HSMCI_FIFO[133] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[133]			MMIO32(HSMCI_BASE + 0x414)
/** HSMCI_FIFO[134] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[134]			MMIO32(HSMCI_BASE + 0x418)
/** HSMCI_FIFO[135] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[135]			MMIO32(HSMCI_BASE + 0x41c)
/** HSMCI_FIFO[136] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[136]			MMIO32(HSMCI_BASE + 0x420)
/** HSMCI_FIFO[137] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[137]			MMIO32(HSMCI_BASE + 0x424)
/** HSMCI_FIFO[138] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[138]			MMIO32(HSMCI_BASE + 0x428)
/** HSMCI_FIFO[139] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[139]			MMIO32(HSMCI_BASE + 0x42c)
/** HSMCI_FIFO[140] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[140]			MMIO32(HSMCI_BASE + 0x430)
/** HSMCI_FIFO[141] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[141]			MMIO32(HSMCI_BASE + 0x434)
/** HSMCI_FIFO[142] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[142]			MMIO32(HSMCI_BASE + 0x438)
/** HSMCI_FIFO[143] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[143]			MMIO32(HSMCI_BASE + 0x43c)
/** HSMCI_FIFO[144] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[144]			MMIO32(HSMCI_BASE + 0x440)
/** HSMCI_FIFO[145] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[145]			MMIO32(HSMCI_BASE + 0x444)
/** HSMCI_FIFO[146] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[146]			MMIO32(HSMCI_BASE + 0x448)
/** HSMCI_FIFO[147] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[147]			MMIO32(HSMCI_BASE + 0x44c)
/** HSMCI_FIFO[148] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[148]			MMIO32(HSMCI_BASE + 0x450)
/** HSMCI_FIFO[149] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[149]			MMIO32(HSMCI_BASE + 0x454)
/** HSMCI_FIFO[150] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[150]			MMIO32(HSMCI_BASE + 0x458)
/** HSMCI_FIFO[151] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[151]			MMIO32(HSMCI_BASE + 0x45c)
/** HSMCI_FIFO[152] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[152]			MMIO32(HSMCI_BASE + 0x460)
/** HSMCI_FIFO[153] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[153]			MMIO32(HSMCI_BASE + 0x464)
/** HSMCI_FIFO[154] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[154]			MMIO32(HSMCI_BASE + 0x468)
/** HSMCI_FIFO[155] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[155]			MMIO32(HSMCI_BASE + 0x46c)
/** HSMCI_FIFO[156] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[156]			MMIO32(HSMCI_BASE + 0x470)
/** HSMCI_FIFO[157] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[157]			MMIO32(HSMCI_BASE + 0x474)
/** HSMCI_FIFO[158] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[158]			MMIO32(HSMCI_BASE + 0x478)
/** HSMCI_FIFO[159] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[159]			MMIO32(HSMCI_BASE + 0x47c)
/** HSMCI_FIFO[160] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[160]			MMIO32(HSMCI_BASE + 0x480)
/** HSMCI_FIFO[161] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[161]			MMIO32(HSMCI_BASE + 0x484)
/** HSMCI_FIFO[162] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[162]			MMIO32(HSMCI_BASE + 0x488)
/** HSMCI_FIFO[163] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[163]			MMIO32(HSMCI_BASE + 0x48c)
/** HSMCI_FIFO[164] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[164]			MMIO32(HSMCI_BASE + 0x490)
/** HSMCI_FIFO[165] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[165]			MMIO32(HSMCI_BASE + 0x494)
/** HSMCI_FIFO[166] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[166]			MMIO32(HSMCI_BASE + 0x498)
/** HSMCI_FIFO[167] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[167]			MMIO32(HSMCI_BASE + 0x49c)
/** HSMCI_FIFO[168] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[168]			MMIO32(HSMCI_BASE + 0x4a0)
/** HSMCI_FIFO[169] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[169]			MMIO32(HSMCI_BASE + 0x4a4)
/** HSMCI_FIFO[170] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[170]			MMIO32(HSMCI_BASE + 0x4a8)
/** HSMCI_FIFO[171] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[171]			MMIO32(HSMCI_BASE + 0x4ac)
/** HSMCI_FIFO[172] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[172]			MMIO32(HSMCI_BASE + 0x4b0)
/** HSMCI_FIFO[173] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[173]			MMIO32(HSMCI_BASE + 0x4b4)
/** HSMCI_FIFO[174] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[174]			MMIO32(HSMCI_BASE + 0x4b8)
/** HSMCI_FIFO[175] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[175]			MMIO32(HSMCI_BASE + 0x4bc)
/** HSMCI_FIFO[176] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[176]			MMIO32(HSMCI_BASE + 0x4c0)
/** HSMCI_FIFO[177] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[177]			MMIO32(HSMCI_BASE + 0x4c4)
/** HSMCI_FIFO[178] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[178]			MMIO32(HSMCI_BASE + 0x4c8)
/** HSMCI_FIFO[179] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[179]			MMIO32(HSMCI_BASE + 0x4cc)
/** HSMCI_FIFO[180] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[180]			MMIO32(HSMCI_BASE + 0x4d0)
/** HSMCI_FIFO[181] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[181]			MMIO32(HSMCI_BASE + 0x4d4)
/** HSMCI_FIFO[182] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[182]			MMIO32(HSMCI_BASE + 0x4d8)
/** HSMCI_FIFO[183] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[183]			MMIO32(HSMCI_BASE + 0x4dc)
/** HSMCI_FIFO[184] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[184]			MMIO32(HSMCI_BASE + 0x4e0)
/** HSMCI_FIFO[185] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[185]			MMIO32(HSMCI_BASE + 0x4e4)
/** HSMCI_FIFO[186] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[186]			MMIO32(HSMCI_BASE + 0x4e8)
/** HSMCI_FIFO[187] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[187]			MMIO32(HSMCI_BASE + 0x4ec)
/** HSMCI_FIFO[188] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[188]			MMIO32(HSMCI_BASE + 0x4f0)
/** HSMCI_FIFO[189] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[189]			MMIO32(HSMCI_BASE + 0x4f4)
/** HSMCI_FIFO[190] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[190]			MMIO32(HSMCI_BASE + 0x4f8)
/** HSMCI_FIFO[191] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[191]			MMIO32(HSMCI_BASE + 0x4fc)
/** HSMCI_FIFO[192] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[192]			MMIO32(HSMCI_BASE + 0x500)
/** HSMCI_FIFO[193] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[193]			MMIO32(HSMCI_BASE + 0x504)
/** HSMCI_FIFO[194] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[194]			MMIO32(HSMCI_BASE + 0x508)
/** HSMCI_FIFO[195] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[195]			MMIO32(HSMCI_BASE + 0x50c)
/** HSMCI_FIFO[196] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[196]			MMIO32(HSMCI_BASE + 0x510)
/** HSMCI_FIFO[197] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[197]			MMIO32(HSMCI_BASE + 0x514)
/** HSMCI_FIFO[198] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[198]			MMIO32(HSMCI_BASE + 0x518)
/** HSMCI_FIFO[199] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[199]			MMIO32(HSMCI_BASE + 0x51c)
/** HSMCI_FIFO[200] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[200]			MMIO32(HSMCI_BASE + 0x520)
/** HSMCI_FIFO[201] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[201]			MMIO32(HSMCI_BASE + 0x524)
/** HSMCI_FIFO[202] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[202]			MMIO32(HSMCI_BASE + 0x528)
/** HSMCI_FIFO[203] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[203]			MMIO32(HSMCI_BASE + 0x52c)
/** HSMCI_FIFO[204] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[204]			MMIO32(HSMCI_BASE + 0x530)
/** HSMCI_FIFO[205] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[205]			MMIO32(HSMCI_BASE + 0x534)
/** HSMCI_FIFO[206] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[206]			MMIO32(HSMCI_BASE + 0x538)
/** HSMCI_FIFO[207] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[207]			MMIO32(HSMCI_BASE + 0x53c)
/** HSMCI_FIFO[208] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[208]			MMIO32(HSMCI_BASE + 0x540)
/** HSMCI_FIFO[209] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[209]			MMIO32(HSMCI_BASE + 0x544)
/** HSMCI_FIFO[210] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[210]			MMIO32(HSMCI_BASE + 0x548)
/** HSMCI_FIFO[211] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[211]			MMIO32(HSMCI_BASE + 0x54c)
/** HSMCI_FIFO[212] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[212]			MMIO32(HSMCI_BASE + 0x550)
/** HSMCI_FIFO[213] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[213]			MMIO32(HSMCI_BASE + 0x554)
/** HSMCI_FIFO[214] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[214]			MMIO32(HSMCI_BASE + 0x558)
/** HSMCI_FIFO[215] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[215]			MMIO32(HSMCI_BASE + 0x55c)
/** HSMCI_FIFO[216] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[216]			MMIO32(HSMCI_BASE + 0x560)
/** HSMCI_FIFO[217] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[217]			MMIO32(HSMCI_BASE + 0x564)
/** HSMCI_FIFO[218] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[218]			MMIO32(HSMCI_BASE + 0x568)
/** HSMCI_FIFO[219] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[219]			MMIO32(HSMCI_BASE + 0x56c)
/** HSMCI_FIFO[220] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[220]			MMIO32(HSMCI_BASE + 0x570)
/** HSMCI_FIFO[221] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[221]			MMIO32(HSMCI_BASE + 0x574)
/** HSMCI_FIFO[222] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[222]			MMIO32(HSMCI_BASE + 0x578)
/** HSMCI_FIFO[223] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[223]			MMIO32(HSMCI_BASE + 0x57c)
/** HSMCI_FIFO[224] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[224]			MMIO32(HSMCI_BASE + 0x580)
/** HSMCI_FIFO[225] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[225]			MMIO32(HSMCI_BASE + 0x584)
/** HSMCI_FIFO[226] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[226]			MMIO32(HSMCI_BASE + 0x588)
/** HSMCI_FIFO[227] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[227]			MMIO32(HSMCI_BASE + 0x58c)
/** HSMCI_FIFO[228] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[228]			MMIO32(HSMCI_BASE + 0x590)
/** HSMCI_FIFO[229] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[229]			MMIO32(HSMCI_BASE + 0x594)
/** HSMCI_FIFO[230] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[230]			MMIO32(HSMCI_BASE + 0x598)
/** HSMCI_FIFO[231] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[231]			MMIO32(HSMCI_BASE + 0x59c)
/** HSMCI_FIFO[232] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[232]			MMIO32(HSMCI_BASE + 0x5a0)
/** HSMCI_FIFO[233] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[233]			MMIO32(HSMCI_BASE + 0x5a4)
/** HSMCI_FIFO[234] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[234]			MMIO32(HSMCI_BASE + 0x5a8)
/** HSMCI_FIFO[235] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[235]			MMIO32(HSMCI_BASE + 0x5ac)
/** HSMCI_FIFO[236] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[236]			MMIO32(HSMCI_BASE + 0x5b0)
/** HSMCI_FIFO[237] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[237]			MMIO32(HSMCI_BASE + 0x5b4)
/** HSMCI_FIFO[238] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[238]			MMIO32(HSMCI_BASE + 0x5b8)
/** HSMCI_FIFO[239] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[239]			MMIO32(HSMCI_BASE + 0x5bc)
/** HSMCI_FIFO[240] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[240]			MMIO32(HSMCI_BASE + 0x5c0)
/** HSMCI_FIFO[241] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[241]			MMIO32(HSMCI_BASE + 0x5c4)
/** HSMCI_FIFO[242] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[242]			MMIO32(HSMCI_BASE + 0x5c8)
/** HSMCI_FIFO[243] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[243]			MMIO32(HSMCI_BASE + 0x5cc)
/** HSMCI_FIFO[244] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[244]			MMIO32(HSMCI_BASE + 0x5d0)
/** HSMCI_FIFO[245] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[245]			MMIO32(HSMCI_BASE + 0x5d4)
/** HSMCI_FIFO[246] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[246]			MMIO32(HSMCI_BASE + 0x5d8)
/** HSMCI_FIFO[247] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[247]			MMIO32(HSMCI_BASE + 0x5dc)
/** HSMCI_FIFO[248] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[248]			MMIO32(HSMCI_BASE + 0x5e0)
/** HSMCI_FIFO[249] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[249]			MMIO32(HSMCI_BASE + 0x5e4)
/** HSMCI_FIFO[250] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[250]			MMIO32(HSMCI_BASE + 0x5e8)
/** HSMCI_FIFO[251] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[251]			MMIO32(HSMCI_BASE + 0x5ec)
/** HSMCI_FIFO[252] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[252]			MMIO32(HSMCI_BASE + 0x5f0)
/** HSMCI_FIFO[253] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[253]			MMIO32(HSMCI_BASE + 0x5f4)
/** HSMCI_FIFO[254] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[254]			MMIO32(HSMCI_BASE + 0x5f8)
/** HSMCI_FIFO[255] FIFO Memory Aperture0 **/
#define HSMCI_FIFO[255]			MMIO32(HSMCI_BASE + 0x5fc)

/**@}*/


/** @defgroup hsmci_cr CR Control Register
@{*/

/** HSMCI_CR_SWRST Software Reset **/
#define HSMCI_CR_SWRST		(1 << 7)
/** HSMCI_CR_PWSDIS Power Save Mode Disable **/
#define HSMCI_CR_PWSDIS		(1 << 3)
/** HSMCI_CR_PWSEN Power Save Mode Enable **/
#define HSMCI_CR_PWSEN		(1 << 2)
/** HSMCI_CR_MCIDIS Multi-Media Interface Disable **/
#define HSMCI_CR_MCIDIS		(1 << 1)
/** HSMCI_CR_MCIEN Multi-Media Interface Enable **/
#define HSMCI_CR_MCIEN		(1 << 0)

/**@}*/

/** @defgroup hsmci_mr MR Mode Register
@{*/

/** HSMCI_MR_PDCMODE PDC-oriented Mode **/
#define HSMCI_MR_PDCMODE		(1 << 15)
/** HSMCI_MR_PADV Padding Value **/
#define HSMCI_MR_PADV		(1 << 14)
/** HSMCI_MR_FBYTE Force Byte Transfer **/
#define HSMCI_MR_FBYTE		(1 << 13)
/** HSMCI_MR_WRPROOF Write Proof Enable **/
#define HSMCI_MR_WRPROOF		(1 << 12)
/** HSMCI_MR_RDPROOF Read Proof Enable **/
#define HSMCI_MR_RDPROOF		(1 << 11)

#define HSMCI_MR_PWSDIV_SHIFT		8
#define HSMCI_MR_PWSDIV_MASK		0x07
/** @defgroup hsmci_mr_pwsdiv PWSDIV Power Saving Divider
@{*/
/**@}*/


#define HSMCI_MR_CLKDIV_SHIFT		0
#define HSMCI_MR_CLKDIV_MASK		0xff
/** @defgroup hsmci_mr_clkdiv CLKDIV Clock Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_dtor DTOR Data Timeout Register
@{*/


#define HSMCI_DTOR_DTOMUL_SHIFT		4
#define HSMCI_DTOR_DTOMUL_MASK		0x07
/** @defgroup hsmci_dtor_dtomul DTOMUL Data Timeout Multiplier
@{*/
/**@}*/


#define HSMCI_DTOR_DTOCYC_SHIFT		0
#define HSMCI_DTOR_DTOCYC_MASK		0x0f
/** @defgroup hsmci_dtor_dtocyc DTOCYC Data Timeout Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_sdcr SDCR SD/SDIO Card Register
@{*/


#define HSMCI_SDCR_SDCBUS_SHIFT		6
#define HSMCI_SDCR_SDCBUS_MASK		0x03
/** @defgroup hsmci_sdcr_sdcbus SDCBUS SDCard/SDIO Bus Width
@{*/
/**@}*/


#define HSMCI_SDCR_SDCSEL_SHIFT		0
#define HSMCI_SDCR_SDCSEL_MASK		0x03
/** @defgroup hsmci_sdcr_sdcsel SDCSEL SDCard/SDIO Slot
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_argr ARGR Argument Register
@{*/


#define HSMCI_ARGR_ARG_SHIFT		0
#define HSMCI_ARGR_ARG_MASK		0xffffffff
/** @defgroup hsmci_argr_arg ARG Command Argument
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_cmdr CMDR Command Register
@{*/

/** HSMCI_CMDR_BOOT_ACK Boot Operation Acknowledge **/
#define HSMCI_CMDR_BOOT_ACK		(1 << 27)
/** HSMCI_CMDR_ATACS ATA with Command Completion Signal **/
#define HSMCI_CMDR_ATACS		(1 << 26)

#define HSMCI_CMDR_IOSPCMD_SHIFT		24
#define HSMCI_CMDR_IOSPCMD_MASK		0x03
/** @defgroup hsmci_cmdr_iospcmd IOSPCMD SDIO Special Command
@{*/
/**@}*/


#define HSMCI_CMDR_TRTYP_SHIFT		19
#define HSMCI_CMDR_TRTYP_MASK		0x07
/** @defgroup hsmci_cmdr_trtyp TRTYP Transfer Type
@{*/
/**@}*/

/** HSMCI_CMDR_TRDIR Transfer Direction **/
#define HSMCI_CMDR_TRDIR		(1 << 18)

#define HSMCI_CMDR_TRCMD_SHIFT		16
#define HSMCI_CMDR_TRCMD_MASK		0x03
/** @defgroup hsmci_cmdr_trcmd TRCMD Transfer Command
@{*/
/**@}*/

/** HSMCI_CMDR_MAXLAT Max Latency for Command to Response **/
#define HSMCI_CMDR_MAXLAT		(1 << 12)
/** HSMCI_CMDR_OPDCMD Open Drain Command **/
#define HSMCI_CMDR_OPDCMD		(1 << 11)

#define HSMCI_CMDR_SPCMD_SHIFT		8
#define HSMCI_CMDR_SPCMD_MASK		0x07
/** @defgroup hsmci_cmdr_spcmd SPCMD Special Command
@{*/
/**@}*/


#define HSMCI_CMDR_RSPTYP_SHIFT		6
#define HSMCI_CMDR_RSPTYP_MASK		0x03
/** @defgroup hsmci_cmdr_rsptyp RSPTYP Response Type
@{*/
/**@}*/


#define HSMCI_CMDR_CMDNB_SHIFT		0
#define HSMCI_CMDR_CMDNB_MASK		0x3f
/** @defgroup hsmci_cmdr_cmdnb CMDNB Command Number
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_blkr BLKR Block Register
@{*/


#define HSMCI_BLKR_BLKLEN_SHIFT		16
#define HSMCI_BLKR_BLKLEN_MASK		0xffff
/** @defgroup hsmci_blkr_blklen BLKLEN Data Block Length
@{*/
/**@}*/


#define HSMCI_BLKR_BCNT_SHIFT		0
#define HSMCI_BLKR_BCNT_MASK		0xffff
/** @defgroup hsmci_blkr_bcnt BCNT MMC/SDIO Block Count - SDIO Byte Count
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_cstor CSTOR Completion Signal Timeout Register
@{*/


#define HSMCI_CSTOR_CSTOMUL_SHIFT		4
#define HSMCI_CSTOR_CSTOMUL_MASK		0x07
/** @defgroup hsmci_cstor_cstomul CSTOMUL Completion Signal Timeout Multiplier
@{*/
/**@}*/


#define HSMCI_CSTOR_CSTOCYC_SHIFT		0
#define HSMCI_CSTOR_CSTOCYC_MASK		0x0f
/** @defgroup hsmci_cstor_cstocyc CSTOCYC Completion Signal Timeout Cycle Number
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_rspr[0] RSPR[0] Response Register
@{*/


#define HSMCI_RSPR[0]_RSP_SHIFT		0
#define HSMCI_RSPR[0]_RSP_MASK		0xffffffff
/** @defgroup hsmci_rspr[0]_rsp RSP Response
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_rspr[1] RSPR[1] Response Register
@{*/


#define HSMCI_RSPR[1]_RSP_SHIFT		0
#define HSMCI_RSPR[1]_RSP_MASK		0xffffffff
/** @defgroup hsmci_rspr[1]_rsp RSP Response
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_rspr[2] RSPR[2] Response Register
@{*/


#define HSMCI_RSPR[2]_RSP_SHIFT		0
#define HSMCI_RSPR[2]_RSP_MASK		0xffffffff
/** @defgroup hsmci_rspr[2]_rsp RSP Response
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_rspr[3] RSPR[3] Response Register
@{*/


#define HSMCI_RSPR[3]_RSP_SHIFT		0
#define HSMCI_RSPR[3]_RSP_MASK		0xffffffff
/** @defgroup hsmci_rspr[3]_rsp RSP Response
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_rdr RDR Receive Data Register
@{*/


#define HSMCI_RDR_DATA_SHIFT		0
#define HSMCI_RDR_DATA_MASK		0xffffffff
/** @defgroup hsmci_rdr_data DATA Data to Read
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_tdr TDR Transmit Data Register
@{*/


#define HSMCI_TDR_DATA_SHIFT		0
#define HSMCI_TDR_DATA_MASK		0xffffffff
/** @defgroup hsmci_tdr_data DATA Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_sr SR Status Register
@{*/

/** HSMCI_SR_UNRE Underrun (if FERRCTRL = 1, cleared by writing in HSMCI_CMDR or cleared on read if FERRCTRL = 0) **/
#define HSMCI_SR_UNRE		(1 << 31)
/** HSMCI_SR_OVRE Overrun (if FERRCTRL = 1, cleared by writing in HSMCI_CMDR or cleared on read if FERRCTRL = 0) **/
#define HSMCI_SR_OVRE		(1 << 30)
/** HSMCI_SR_ACKRCVE Boot Operation Acknowledge Error (cleared on read) **/
#define HSMCI_SR_ACKRCVE		(1 << 29)
/** HSMCI_SR_ACKRCV Boot Operation Acknowledge Received (cleared on read) **/
#define HSMCI_SR_ACKRCV		(1 << 28)
/** HSMCI_SR_XFRDONE Transfer Done flag **/
#define HSMCI_SR_XFRDONE		(1 << 27)
/** HSMCI_SR_FIFOEMPTY FIFO empty flag **/
#define HSMCI_SR_FIFOEMPTY		(1 << 26)
/** HSMCI_SR_CSTOE Completion Signal Time-out Error (cleared on read) **/
#define HSMCI_SR_CSTOE		(1 << 23)
/** HSMCI_SR_DTOE Data Time-out Error (cleared on read) **/
#define HSMCI_SR_DTOE		(1 << 22)
/** HSMCI_SR_DCRCE Data CRC Error (cleared on read) **/
#define HSMCI_SR_DCRCE		(1 << 21)
/** HSMCI_SR_RTOE Response Time-out Error (cleared by writing in HSMCI_CMDR) **/
#define HSMCI_SR_RTOE		(1 << 20)
/** HSMCI_SR_RENDE Response End Bit Error (cleared by writing in HSMCI_CMDR) **/
#define HSMCI_SR_RENDE		(1 << 19)
/** HSMCI_SR_RCRCE Response CRC Error (cleared by writing in HSMCI_CMDR) **/
#define HSMCI_SR_RCRCE		(1 << 18)
/** HSMCI_SR_RDIRE Response Direction Error (cleared by writing in HSMCI_CMDR) **/
#define HSMCI_SR_RDIRE		(1 << 17)
/** HSMCI_SR_RINDE Response Index Error (cleared by writing in HSMCI_CMDR) **/
#define HSMCI_SR_RINDE		(1 << 16)
/** HSMCI_SR_TXBUFE TX Buffer Empty (cleared by writing HSMCI_TCR or HSMCI_TNCR(1)) **/
#define HSMCI_SR_TXBUFE		(1 << 15)
/** HSMCI_SR_RXBUFF RX Buffer Full (cleared by writing HSMCI_RCR or HSMCI_RNCR(1)) **/
#define HSMCI_SR_RXBUFF		(1 << 14)
/** HSMCI_SR_CSRCV CE-ATA Completion Signal Received (cleared on read) **/
#define HSMCI_SR_CSRCV		(1 << 13)
/** HSMCI_SR_SDIOWAIT SDIO Read Wait Operation Status **/
#define HSMCI_SR_SDIOWAIT		(1 << 12)
/** HSMCI_SR_SDIOIRQA SDIO Interrupt for Slot A (cleared on read) **/
#define HSMCI_SR_SDIOIRQA		(1 << 8)
/** HSMCI_SR_ENDTX End of TX Buffer (cleared by writing HSMCI_TCR or HSMCI_TNCR(1)) **/
#define HSMCI_SR_ENDTX		(1 << 7)
/** HSMCI_SR_ENDRX End of RX Buffer (cleared by writing HSMCI_RCR or HSMCI_RNCR(1)) **/
#define HSMCI_SR_ENDRX		(1 << 6)
/** HSMCI_SR_NOTBUSY HSMCI Not Busy **/
#define HSMCI_SR_NOTBUSY		(1 << 5)
/** HSMCI_SR_DTIP Data Transfer in Progress (cleared at the end of CRC16 calculation) **/
#define HSMCI_SR_DTIP		(1 << 4)
/** HSMCI_SR_BLKE Data Block Ended (cleared on read) **/
#define HSMCI_SR_BLKE		(1 << 3)
/** HSMCI_SR_TXRDY Transmit Ready (cleared by writing in HSMCI_TDR) **/
#define HSMCI_SR_TXRDY		(1 << 2)
/** HSMCI_SR_RXRDY Receiver Ready (cleared by reading HSMCI_RDR) **/
#define HSMCI_SR_RXRDY		(1 << 1)
/** HSMCI_SR_CMDRDY Command Ready (cleared by writing in HSMCI_CMDR) **/
#define HSMCI_SR_CMDRDY		(1 << 0)

/**@}*/

/** @defgroup hsmci_ier IER Interrupt Enable Register
@{*/

/** HSMCI_IER_UNRE Underrun Interrupt Enable **/
#define HSMCI_IER_UNRE		(1 << 31)
/** HSMCI_IER_OVRE Overrun Interrupt Enable **/
#define HSMCI_IER_OVRE		(1 << 30)
/** HSMCI_IER_ACKRCVE Boot Acknowledge Error Interrupt Enable **/
#define HSMCI_IER_ACKRCVE		(1 << 29)
/** HSMCI_IER_ACKRCV Boot Acknowledge Interrupt Enable **/
#define HSMCI_IER_ACKRCV		(1 << 28)
/** HSMCI_IER_XFRDONE Transfer Done Interrupt enable **/
#define HSMCI_IER_XFRDONE		(1 << 27)
/** HSMCI_IER_FIFOEMPTY FIFO empty Interrupt enable **/
#define HSMCI_IER_FIFOEMPTY		(1 << 26)
/** HSMCI_IER_CSTOE Completion Signal Timeout Error Interrupt Enable **/
#define HSMCI_IER_CSTOE		(1 << 23)
/** HSMCI_IER_DTOE Data Time-out Error Interrupt Enable **/
#define HSMCI_IER_DTOE		(1 << 22)
/** HSMCI_IER_DCRCE Data CRC Error Interrupt Enable **/
#define HSMCI_IER_DCRCE		(1 << 21)
/** HSMCI_IER_RTOE Response Time-out Error Interrupt Enable **/
#define HSMCI_IER_RTOE		(1 << 20)
/** HSMCI_IER_RENDE Response End Bit Error Interrupt Enable **/
#define HSMCI_IER_RENDE		(1 << 19)
/** HSMCI_IER_RCRCE Response CRC Error Interrupt Enable **/
#define HSMCI_IER_RCRCE		(1 << 18)
/** HSMCI_IER_RDIRE Response Direction Error Interrupt Enable **/
#define HSMCI_IER_RDIRE		(1 << 17)
/** HSMCI_IER_RINDE Response Index Error Interrupt Enable **/
#define HSMCI_IER_RINDE		(1 << 16)
/** HSMCI_IER_TXBUFE Transmit Buffer Empty Interrupt Enable **/
#define HSMCI_IER_TXBUFE		(1 << 15)
/** HSMCI_IER_RXBUFF Receive Buffer Full Interrupt Enable **/
#define HSMCI_IER_RXBUFF		(1 << 14)
/** HSMCI_IER_CSRCV Completion Signal Received Interrupt Enable **/
#define HSMCI_IER_CSRCV		(1 << 13)
/** HSMCI_IER_SDIOWAIT SDIO Read Wait Operation Status Interrupt Enable **/
#define HSMCI_IER_SDIOWAIT		(1 << 12)
/** HSMCI_IER_SDIOIRQA SDIO Interrupt for Slot A Interrupt Enable **/
#define HSMCI_IER_SDIOIRQA		(1 << 8)
/** HSMCI_IER_ENDTX End of Transmit Buffer Interrupt Enable **/
#define HSMCI_IER_ENDTX		(1 << 7)
/** HSMCI_IER_ENDRX End of Receive Buffer Interrupt Enable **/
#define HSMCI_IER_ENDRX		(1 << 6)
/** HSMCI_IER_NOTBUSY Data Not Busy Interrupt Enable **/
#define HSMCI_IER_NOTBUSY		(1 << 5)
/** HSMCI_IER_DTIP Data Transfer in Progress Interrupt Enable **/
#define HSMCI_IER_DTIP		(1 << 4)
/** HSMCI_IER_BLKE Data Block Ended Interrupt Enable **/
#define HSMCI_IER_BLKE		(1 << 3)
/** HSMCI_IER_TXRDY Transmit Ready Interrupt Enable **/
#define HSMCI_IER_TXRDY		(1 << 2)
/** HSMCI_IER_RXRDY Receiver Ready Interrupt Enable **/
#define HSMCI_IER_RXRDY		(1 << 1)
/** HSMCI_IER_CMDRDY Command Ready Interrupt Enable **/
#define HSMCI_IER_CMDRDY		(1 << 0)

/**@}*/

/** @defgroup hsmci_idr IDR Interrupt Disable Register
@{*/

/** HSMCI_IDR_UNRE Underrun Interrupt Disable **/
#define HSMCI_IDR_UNRE		(1 << 31)
/** HSMCI_IDR_OVRE Overrun Interrupt Disable **/
#define HSMCI_IDR_OVRE		(1 << 30)
/** HSMCI_IDR_ACKRCVE Boot Acknowledge Error Interrupt Disable **/
#define HSMCI_IDR_ACKRCVE		(1 << 29)
/** HSMCI_IDR_ACKRCV Boot Acknowledge Interrupt Disable **/
#define HSMCI_IDR_ACKRCV		(1 << 28)
/** HSMCI_IDR_XFRDONE Transfer Done Interrupt Disable **/
#define HSMCI_IDR_XFRDONE		(1 << 27)
/** HSMCI_IDR_FIFOEMPTY FIFO empty Interrupt Disable **/
#define HSMCI_IDR_FIFOEMPTY		(1 << 26)
/** HSMCI_IDR_CSTOE Completion Signal Time out Error Interrupt Disable **/
#define HSMCI_IDR_CSTOE		(1 << 23)
/** HSMCI_IDR_DTOE Data Time-out Error Interrupt Disable **/
#define HSMCI_IDR_DTOE		(1 << 22)
/** HSMCI_IDR_DCRCE Data CRC Error Interrupt Disable **/
#define HSMCI_IDR_DCRCE		(1 << 21)
/** HSMCI_IDR_RTOE Response Time-out Error Interrupt Disable **/
#define HSMCI_IDR_RTOE		(1 << 20)
/** HSMCI_IDR_RENDE Response End Bit Error Interrupt Disable **/
#define HSMCI_IDR_RENDE		(1 << 19)
/** HSMCI_IDR_RCRCE Response CRC Error Interrupt Disable **/
#define HSMCI_IDR_RCRCE		(1 << 18)
/** HSMCI_IDR_RDIRE Response Direction Error Interrupt Disable **/
#define HSMCI_IDR_RDIRE		(1 << 17)
/** HSMCI_IDR_RINDE Response Index Error Interrupt Disable **/
#define HSMCI_IDR_RINDE		(1 << 16)
/** HSMCI_IDR_TXBUFE Transmit Buffer Empty Interrupt Disable **/
#define HSMCI_IDR_TXBUFE		(1 << 15)
/** HSMCI_IDR_RXBUFF Receive Buffer Full Interrupt Disable **/
#define HSMCI_IDR_RXBUFF		(1 << 14)
/** HSMCI_IDR_CSRCV Completion Signal received interrupt Disable **/
#define HSMCI_IDR_CSRCV		(1 << 13)
/** HSMCI_IDR_SDIOWAIT SDIO Read Wait Operation Status Interrupt Disable **/
#define HSMCI_IDR_SDIOWAIT		(1 << 12)
/** HSMCI_IDR_SDIOIRQA SDIO Interrupt for Slot A Interrupt Disable **/
#define HSMCI_IDR_SDIOIRQA		(1 << 8)
/** HSMCI_IDR_ENDTX End of Transmit Buffer Interrupt Disable **/
#define HSMCI_IDR_ENDTX		(1 << 7)
/** HSMCI_IDR_ENDRX End of Receive Buffer Interrupt Disable **/
#define HSMCI_IDR_ENDRX		(1 << 6)
/** HSMCI_IDR_NOTBUSY Data Not Busy Interrupt Disable **/
#define HSMCI_IDR_NOTBUSY		(1 << 5)
/** HSMCI_IDR_DTIP Data Transfer in Progress Interrupt Disable **/
#define HSMCI_IDR_DTIP		(1 << 4)
/** HSMCI_IDR_BLKE Data Block Ended Interrupt Disable **/
#define HSMCI_IDR_BLKE		(1 << 3)
/** HSMCI_IDR_TXRDY Transmit Ready Interrupt Disable **/
#define HSMCI_IDR_TXRDY		(1 << 2)
/** HSMCI_IDR_RXRDY Receiver Ready Interrupt Disable **/
#define HSMCI_IDR_RXRDY		(1 << 1)
/** HSMCI_IDR_CMDRDY Command Ready Interrupt Disable **/
#define HSMCI_IDR_CMDRDY		(1 << 0)

/**@}*/

/** @defgroup hsmci_imr IMR Interrupt Mask Register
@{*/

/** HSMCI_IMR_UNRE Underrun Interrupt Mask **/
#define HSMCI_IMR_UNRE		(1 << 31)
/** HSMCI_IMR_OVRE Overrun Interrupt Mask **/
#define HSMCI_IMR_OVRE		(1 << 30)
/** HSMCI_IMR_ACKRCVE Boot Operation Acknowledge Error Interrupt Mask **/
#define HSMCI_IMR_ACKRCVE		(1 << 29)
/** HSMCI_IMR_ACKRCV Boot Operation Acknowledge Received Interrupt Mask **/
#define HSMCI_IMR_ACKRCV		(1 << 28)
/** HSMCI_IMR_XFRDONE Transfer Done Interrupt Mask **/
#define HSMCI_IMR_XFRDONE		(1 << 27)
/** HSMCI_IMR_FIFOEMPTY FIFO Empty Interrupt Mask **/
#define HSMCI_IMR_FIFOEMPTY		(1 << 26)
/** HSMCI_IMR_CSTOE Completion Signal Time-out Error Interrupt Mask **/
#define HSMCI_IMR_CSTOE		(1 << 23)
/** HSMCI_IMR_DTOE Data Time-out Error Interrupt Mask **/
#define HSMCI_IMR_DTOE		(1 << 22)
/** HSMCI_IMR_DCRCE Data CRC Error Interrupt Mask **/
#define HSMCI_IMR_DCRCE		(1 << 21)
/** HSMCI_IMR_RTOE Response Time-out Error Interrupt Mask **/
#define HSMCI_IMR_RTOE		(1 << 20)
/** HSMCI_IMR_RENDE Response End Bit Error Interrupt Mask **/
#define HSMCI_IMR_RENDE		(1 << 19)
/** HSMCI_IMR_RCRCE Response CRC Error Interrupt Mask **/
#define HSMCI_IMR_RCRCE		(1 << 18)
/** HSMCI_IMR_RDIRE Response Direction Error Interrupt Mask **/
#define HSMCI_IMR_RDIRE		(1 << 17)
/** HSMCI_IMR_RINDE Response Index Error Interrupt Mask **/
#define HSMCI_IMR_RINDE		(1 << 16)
/** HSMCI_IMR_TXBUFE Transmit Buffer Empty Interrupt Mask **/
#define HSMCI_IMR_TXBUFE		(1 << 15)
/** HSMCI_IMR_RXBUFF Receive Buffer Full Interrupt Mask **/
#define HSMCI_IMR_RXBUFF		(1 << 14)
/** HSMCI_IMR_CSRCV Completion Signal Received Interrupt Mask **/
#define HSMCI_IMR_CSRCV		(1 << 13)
/** HSMCI_IMR_SDIOWAIT SDIO Read Wait Operation Status Interrupt Mask **/
#define HSMCI_IMR_SDIOWAIT		(1 << 12)
/** HSMCI_IMR_SDIOIRQA SDIO Interrupt for Slot A Interrupt Mask **/
#define HSMCI_IMR_SDIOIRQA		(1 << 8)
/** HSMCI_IMR_ENDTX End of Transmit Buffer Interrupt Mask **/
#define HSMCI_IMR_ENDTX		(1 << 7)
/** HSMCI_IMR_ENDRX End of Receive Buffer Interrupt Mask **/
#define HSMCI_IMR_ENDRX		(1 << 6)
/** HSMCI_IMR_NOTBUSY Data Not Busy Interrupt Mask **/
#define HSMCI_IMR_NOTBUSY		(1 << 5)
/** HSMCI_IMR_DTIP Data Transfer in Progress Interrupt Mask **/
#define HSMCI_IMR_DTIP		(1 << 4)
/** HSMCI_IMR_BLKE Data Block Ended Interrupt Mask **/
#define HSMCI_IMR_BLKE		(1 << 3)
/** HSMCI_IMR_TXRDY Transmit Ready Interrupt Mask **/
#define HSMCI_IMR_TXRDY		(1 << 2)
/** HSMCI_IMR_RXRDY Receiver Ready Interrupt Mask **/
#define HSMCI_IMR_RXRDY		(1 << 1)
/** HSMCI_IMR_CMDRDY Command Ready Interrupt Mask **/
#define HSMCI_IMR_CMDRDY		(1 << 0)

/**@}*/

/** @defgroup hsmci_cfg CFG Configuration Register
@{*/

/** HSMCI_CFG_LSYNC Synchronize on the last block **/
#define HSMCI_CFG_LSYNC		(1 << 12)
/** HSMCI_CFG_HSMODE High Speed Mode **/
#define HSMCI_CFG_HSMODE		(1 << 8)
/** HSMCI_CFG_FERRCTRL Flow Error flag reset control mode **/
#define HSMCI_CFG_FERRCTRL		(1 << 4)
/** HSMCI_CFG_FIFOMODE HSMCI Internal FIFO control mode **/
#define HSMCI_CFG_FIFOMODE		(1 << 0)

/**@}*/

/** @defgroup hsmci_wpmr WPMR Write Protection Mode Register
@{*/


#define HSMCI_WPMR_WPKEY_SHIFT		8
#define HSMCI_WPMR_WPKEY_MASK		0xffffff
/** @defgroup hsmci_wpmr_wpkey WPKEY Write Protect Key
@{*/
/**@}*/

/** HSMCI_WPMR_WPEN Write Protect Enable **/
#define HSMCI_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup hsmci_wpsr WPSR Write Protection Status Register
@{*/


#define HSMCI_WPSR_WPVSRC_SHIFT		8
#define HSMCI_WPSR_WPVSRC_MASK		0xffff
/** @defgroup hsmci_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** HSMCI_WPSR_WPVS Write Protection Violation Status **/
#define HSMCI_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup hsmci_rpr RPR Receive Pointer Register
@{*/


#define HSMCI_RPR_RXPTR_SHIFT		0
#define HSMCI_RPR_RXPTR_MASK		0xffffffff
/** @defgroup hsmci_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_rcr RCR Receive Counter Register
@{*/


#define HSMCI_RCR_RXCTR_SHIFT		0
#define HSMCI_RCR_RXCTR_MASK		0xffff
/** @defgroup hsmci_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_tpr TPR Transmit Pointer Register
@{*/


#define HSMCI_TPR_TXPTR_SHIFT		0
#define HSMCI_TPR_TXPTR_MASK		0xffffffff
/** @defgroup hsmci_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_tcr TCR Transmit Counter Register
@{*/


#define HSMCI_TCR_TXCTR_SHIFT		0
#define HSMCI_TCR_TXCTR_MASK		0xffff
/** @defgroup hsmci_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_rnpr RNPR Receive Next Pointer Register
@{*/


#define HSMCI_RNPR_RXNPTR_SHIFT		0
#define HSMCI_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup hsmci_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_rncr RNCR Receive Next Counter Register
@{*/


#define HSMCI_RNCR_RXNCTR_SHIFT		0
#define HSMCI_RNCR_RXNCTR_MASK		0xffff
/** @defgroup hsmci_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_tnpr TNPR Transmit Next Pointer Register
@{*/


#define HSMCI_TNPR_TXNPTR_SHIFT		0
#define HSMCI_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup hsmci_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_tncr TNCR Transmit Next Counter Register
@{*/


#define HSMCI_TNCR_TXNCTR_SHIFT		0
#define HSMCI_TNCR_TXNCTR_MASK		0xffff
/** @defgroup hsmci_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_ptcr PTCR Transfer Control Register
@{*/

/** HSMCI_PTCR_TXTDIS Transmitter Transfer Disable **/
#define HSMCI_PTCR_TXTDIS		(1 << 9)
/** HSMCI_PTCR_TXTEN Transmitter Transfer Enable **/
#define HSMCI_PTCR_TXTEN		(1 << 8)
/** HSMCI_PTCR_RXTDIS Receiver Transfer Disable **/
#define HSMCI_PTCR_RXTDIS		(1 << 1)
/** HSMCI_PTCR_RXTEN Receiver Transfer Enable **/
#define HSMCI_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup hsmci_ptsr PTSR Transfer Status Register
@{*/

/** HSMCI_PTSR_TXTEN Transmitter Transfer Enable **/
#define HSMCI_PTSR_TXTEN		(1 << 8)
/** HSMCI_PTSR_RXTEN Receiver Transfer Enable **/
#define HSMCI_PTSR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup hsmci_fifo[0] FIFO[0] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[0]_DATA_SHIFT		0
#define HSMCI_FIFO[0]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[0]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[1] FIFO[1] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[1]_DATA_SHIFT		0
#define HSMCI_FIFO[1]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[1]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[2] FIFO[2] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[2]_DATA_SHIFT		0
#define HSMCI_FIFO[2]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[2]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[3] FIFO[3] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[3]_DATA_SHIFT		0
#define HSMCI_FIFO[3]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[3]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[4] FIFO[4] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[4]_DATA_SHIFT		0
#define HSMCI_FIFO[4]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[4]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[5] FIFO[5] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[5]_DATA_SHIFT		0
#define HSMCI_FIFO[5]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[5]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[6] FIFO[6] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[6]_DATA_SHIFT		0
#define HSMCI_FIFO[6]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[6]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[7] FIFO[7] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[7]_DATA_SHIFT		0
#define HSMCI_FIFO[7]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[7]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[8] FIFO[8] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[8]_DATA_SHIFT		0
#define HSMCI_FIFO[8]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[8]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[9] FIFO[9] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[9]_DATA_SHIFT		0
#define HSMCI_FIFO[9]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[9]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[10] FIFO[10] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[10]_DATA_SHIFT		0
#define HSMCI_FIFO[10]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[10]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[11] FIFO[11] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[11]_DATA_SHIFT		0
#define HSMCI_FIFO[11]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[11]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[12] FIFO[12] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[12]_DATA_SHIFT		0
#define HSMCI_FIFO[12]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[12]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[13] FIFO[13] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[13]_DATA_SHIFT		0
#define HSMCI_FIFO[13]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[13]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[14] FIFO[14] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[14]_DATA_SHIFT		0
#define HSMCI_FIFO[14]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[14]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[15] FIFO[15] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[15]_DATA_SHIFT		0
#define HSMCI_FIFO[15]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[15]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[16] FIFO[16] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[16]_DATA_SHIFT		0
#define HSMCI_FIFO[16]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[16]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[17] FIFO[17] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[17]_DATA_SHIFT		0
#define HSMCI_FIFO[17]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[17]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[18] FIFO[18] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[18]_DATA_SHIFT		0
#define HSMCI_FIFO[18]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[18]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[19] FIFO[19] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[19]_DATA_SHIFT		0
#define HSMCI_FIFO[19]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[19]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[20] FIFO[20] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[20]_DATA_SHIFT		0
#define HSMCI_FIFO[20]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[20]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[21] FIFO[21] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[21]_DATA_SHIFT		0
#define HSMCI_FIFO[21]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[21]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[22] FIFO[22] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[22]_DATA_SHIFT		0
#define HSMCI_FIFO[22]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[22]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[23] FIFO[23] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[23]_DATA_SHIFT		0
#define HSMCI_FIFO[23]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[23]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[24] FIFO[24] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[24]_DATA_SHIFT		0
#define HSMCI_FIFO[24]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[24]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[25] FIFO[25] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[25]_DATA_SHIFT		0
#define HSMCI_FIFO[25]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[25]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[26] FIFO[26] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[26]_DATA_SHIFT		0
#define HSMCI_FIFO[26]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[26]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[27] FIFO[27] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[27]_DATA_SHIFT		0
#define HSMCI_FIFO[27]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[27]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[28] FIFO[28] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[28]_DATA_SHIFT		0
#define HSMCI_FIFO[28]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[28]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[29] FIFO[29] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[29]_DATA_SHIFT		0
#define HSMCI_FIFO[29]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[29]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[30] FIFO[30] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[30]_DATA_SHIFT		0
#define HSMCI_FIFO[30]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[30]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[31] FIFO[31] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[31]_DATA_SHIFT		0
#define HSMCI_FIFO[31]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[31]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[32] FIFO[32] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[32]_DATA_SHIFT		0
#define HSMCI_FIFO[32]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[32]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[33] FIFO[33] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[33]_DATA_SHIFT		0
#define HSMCI_FIFO[33]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[33]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[34] FIFO[34] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[34]_DATA_SHIFT		0
#define HSMCI_FIFO[34]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[34]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[35] FIFO[35] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[35]_DATA_SHIFT		0
#define HSMCI_FIFO[35]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[35]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[36] FIFO[36] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[36]_DATA_SHIFT		0
#define HSMCI_FIFO[36]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[36]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[37] FIFO[37] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[37]_DATA_SHIFT		0
#define HSMCI_FIFO[37]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[37]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[38] FIFO[38] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[38]_DATA_SHIFT		0
#define HSMCI_FIFO[38]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[38]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[39] FIFO[39] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[39]_DATA_SHIFT		0
#define HSMCI_FIFO[39]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[39]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[40] FIFO[40] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[40]_DATA_SHIFT		0
#define HSMCI_FIFO[40]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[40]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[41] FIFO[41] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[41]_DATA_SHIFT		0
#define HSMCI_FIFO[41]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[41]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[42] FIFO[42] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[42]_DATA_SHIFT		0
#define HSMCI_FIFO[42]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[42]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[43] FIFO[43] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[43]_DATA_SHIFT		0
#define HSMCI_FIFO[43]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[43]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[44] FIFO[44] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[44]_DATA_SHIFT		0
#define HSMCI_FIFO[44]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[44]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[45] FIFO[45] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[45]_DATA_SHIFT		0
#define HSMCI_FIFO[45]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[45]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[46] FIFO[46] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[46]_DATA_SHIFT		0
#define HSMCI_FIFO[46]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[46]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[47] FIFO[47] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[47]_DATA_SHIFT		0
#define HSMCI_FIFO[47]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[47]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[48] FIFO[48] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[48]_DATA_SHIFT		0
#define HSMCI_FIFO[48]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[48]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[49] FIFO[49] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[49]_DATA_SHIFT		0
#define HSMCI_FIFO[49]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[49]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[50] FIFO[50] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[50]_DATA_SHIFT		0
#define HSMCI_FIFO[50]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[50]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[51] FIFO[51] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[51]_DATA_SHIFT		0
#define HSMCI_FIFO[51]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[51]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[52] FIFO[52] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[52]_DATA_SHIFT		0
#define HSMCI_FIFO[52]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[52]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[53] FIFO[53] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[53]_DATA_SHIFT		0
#define HSMCI_FIFO[53]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[53]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[54] FIFO[54] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[54]_DATA_SHIFT		0
#define HSMCI_FIFO[54]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[54]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[55] FIFO[55] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[55]_DATA_SHIFT		0
#define HSMCI_FIFO[55]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[55]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[56] FIFO[56] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[56]_DATA_SHIFT		0
#define HSMCI_FIFO[56]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[56]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[57] FIFO[57] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[57]_DATA_SHIFT		0
#define HSMCI_FIFO[57]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[57]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[58] FIFO[58] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[58]_DATA_SHIFT		0
#define HSMCI_FIFO[58]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[58]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[59] FIFO[59] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[59]_DATA_SHIFT		0
#define HSMCI_FIFO[59]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[59]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[60] FIFO[60] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[60]_DATA_SHIFT		0
#define HSMCI_FIFO[60]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[60]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[61] FIFO[61] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[61]_DATA_SHIFT		0
#define HSMCI_FIFO[61]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[61]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[62] FIFO[62] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[62]_DATA_SHIFT		0
#define HSMCI_FIFO[62]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[62]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[63] FIFO[63] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[63]_DATA_SHIFT		0
#define HSMCI_FIFO[63]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[63]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[64] FIFO[64] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[64]_DATA_SHIFT		0
#define HSMCI_FIFO[64]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[64]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[65] FIFO[65] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[65]_DATA_SHIFT		0
#define HSMCI_FIFO[65]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[65]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[66] FIFO[66] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[66]_DATA_SHIFT		0
#define HSMCI_FIFO[66]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[66]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[67] FIFO[67] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[67]_DATA_SHIFT		0
#define HSMCI_FIFO[67]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[67]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[68] FIFO[68] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[68]_DATA_SHIFT		0
#define HSMCI_FIFO[68]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[68]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[69] FIFO[69] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[69]_DATA_SHIFT		0
#define HSMCI_FIFO[69]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[69]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[70] FIFO[70] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[70]_DATA_SHIFT		0
#define HSMCI_FIFO[70]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[70]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[71] FIFO[71] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[71]_DATA_SHIFT		0
#define HSMCI_FIFO[71]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[71]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[72] FIFO[72] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[72]_DATA_SHIFT		0
#define HSMCI_FIFO[72]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[72]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[73] FIFO[73] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[73]_DATA_SHIFT		0
#define HSMCI_FIFO[73]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[73]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[74] FIFO[74] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[74]_DATA_SHIFT		0
#define HSMCI_FIFO[74]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[74]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[75] FIFO[75] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[75]_DATA_SHIFT		0
#define HSMCI_FIFO[75]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[75]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[76] FIFO[76] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[76]_DATA_SHIFT		0
#define HSMCI_FIFO[76]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[76]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[77] FIFO[77] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[77]_DATA_SHIFT		0
#define HSMCI_FIFO[77]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[77]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[78] FIFO[78] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[78]_DATA_SHIFT		0
#define HSMCI_FIFO[78]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[78]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[79] FIFO[79] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[79]_DATA_SHIFT		0
#define HSMCI_FIFO[79]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[79]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[80] FIFO[80] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[80]_DATA_SHIFT		0
#define HSMCI_FIFO[80]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[80]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[81] FIFO[81] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[81]_DATA_SHIFT		0
#define HSMCI_FIFO[81]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[81]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[82] FIFO[82] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[82]_DATA_SHIFT		0
#define HSMCI_FIFO[82]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[82]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[83] FIFO[83] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[83]_DATA_SHIFT		0
#define HSMCI_FIFO[83]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[83]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[84] FIFO[84] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[84]_DATA_SHIFT		0
#define HSMCI_FIFO[84]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[84]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[85] FIFO[85] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[85]_DATA_SHIFT		0
#define HSMCI_FIFO[85]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[85]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[86] FIFO[86] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[86]_DATA_SHIFT		0
#define HSMCI_FIFO[86]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[86]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[87] FIFO[87] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[87]_DATA_SHIFT		0
#define HSMCI_FIFO[87]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[87]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[88] FIFO[88] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[88]_DATA_SHIFT		0
#define HSMCI_FIFO[88]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[88]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[89] FIFO[89] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[89]_DATA_SHIFT		0
#define HSMCI_FIFO[89]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[89]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[90] FIFO[90] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[90]_DATA_SHIFT		0
#define HSMCI_FIFO[90]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[90]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[91] FIFO[91] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[91]_DATA_SHIFT		0
#define HSMCI_FIFO[91]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[91]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[92] FIFO[92] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[92]_DATA_SHIFT		0
#define HSMCI_FIFO[92]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[92]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[93] FIFO[93] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[93]_DATA_SHIFT		0
#define HSMCI_FIFO[93]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[93]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[94] FIFO[94] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[94]_DATA_SHIFT		0
#define HSMCI_FIFO[94]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[94]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[95] FIFO[95] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[95]_DATA_SHIFT		0
#define HSMCI_FIFO[95]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[95]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[96] FIFO[96] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[96]_DATA_SHIFT		0
#define HSMCI_FIFO[96]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[96]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[97] FIFO[97] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[97]_DATA_SHIFT		0
#define HSMCI_FIFO[97]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[97]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[98] FIFO[98] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[98]_DATA_SHIFT		0
#define HSMCI_FIFO[98]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[98]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[99] FIFO[99] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[99]_DATA_SHIFT		0
#define HSMCI_FIFO[99]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[99]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[100] FIFO[100] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[100]_DATA_SHIFT		0
#define HSMCI_FIFO[100]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[100]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[101] FIFO[101] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[101]_DATA_SHIFT		0
#define HSMCI_FIFO[101]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[101]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[102] FIFO[102] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[102]_DATA_SHIFT		0
#define HSMCI_FIFO[102]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[102]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[103] FIFO[103] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[103]_DATA_SHIFT		0
#define HSMCI_FIFO[103]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[103]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[104] FIFO[104] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[104]_DATA_SHIFT		0
#define HSMCI_FIFO[104]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[104]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[105] FIFO[105] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[105]_DATA_SHIFT		0
#define HSMCI_FIFO[105]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[105]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[106] FIFO[106] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[106]_DATA_SHIFT		0
#define HSMCI_FIFO[106]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[106]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[107] FIFO[107] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[107]_DATA_SHIFT		0
#define HSMCI_FIFO[107]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[107]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[108] FIFO[108] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[108]_DATA_SHIFT		0
#define HSMCI_FIFO[108]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[108]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[109] FIFO[109] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[109]_DATA_SHIFT		0
#define HSMCI_FIFO[109]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[109]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[110] FIFO[110] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[110]_DATA_SHIFT		0
#define HSMCI_FIFO[110]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[110]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[111] FIFO[111] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[111]_DATA_SHIFT		0
#define HSMCI_FIFO[111]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[111]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[112] FIFO[112] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[112]_DATA_SHIFT		0
#define HSMCI_FIFO[112]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[112]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[113] FIFO[113] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[113]_DATA_SHIFT		0
#define HSMCI_FIFO[113]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[113]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[114] FIFO[114] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[114]_DATA_SHIFT		0
#define HSMCI_FIFO[114]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[114]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[115] FIFO[115] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[115]_DATA_SHIFT		0
#define HSMCI_FIFO[115]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[115]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[116] FIFO[116] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[116]_DATA_SHIFT		0
#define HSMCI_FIFO[116]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[116]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[117] FIFO[117] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[117]_DATA_SHIFT		0
#define HSMCI_FIFO[117]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[117]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[118] FIFO[118] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[118]_DATA_SHIFT		0
#define HSMCI_FIFO[118]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[118]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[119] FIFO[119] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[119]_DATA_SHIFT		0
#define HSMCI_FIFO[119]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[119]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[120] FIFO[120] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[120]_DATA_SHIFT		0
#define HSMCI_FIFO[120]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[120]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[121] FIFO[121] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[121]_DATA_SHIFT		0
#define HSMCI_FIFO[121]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[121]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[122] FIFO[122] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[122]_DATA_SHIFT		0
#define HSMCI_FIFO[122]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[122]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[123] FIFO[123] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[123]_DATA_SHIFT		0
#define HSMCI_FIFO[123]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[123]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[124] FIFO[124] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[124]_DATA_SHIFT		0
#define HSMCI_FIFO[124]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[124]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[125] FIFO[125] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[125]_DATA_SHIFT		0
#define HSMCI_FIFO[125]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[125]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[126] FIFO[126] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[126]_DATA_SHIFT		0
#define HSMCI_FIFO[126]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[126]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[127] FIFO[127] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[127]_DATA_SHIFT		0
#define HSMCI_FIFO[127]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[127]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[128] FIFO[128] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[128]_DATA_SHIFT		0
#define HSMCI_FIFO[128]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[128]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[129] FIFO[129] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[129]_DATA_SHIFT		0
#define HSMCI_FIFO[129]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[129]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[130] FIFO[130] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[130]_DATA_SHIFT		0
#define HSMCI_FIFO[130]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[130]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[131] FIFO[131] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[131]_DATA_SHIFT		0
#define HSMCI_FIFO[131]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[131]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[132] FIFO[132] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[132]_DATA_SHIFT		0
#define HSMCI_FIFO[132]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[132]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[133] FIFO[133] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[133]_DATA_SHIFT		0
#define HSMCI_FIFO[133]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[133]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[134] FIFO[134] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[134]_DATA_SHIFT		0
#define HSMCI_FIFO[134]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[134]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[135] FIFO[135] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[135]_DATA_SHIFT		0
#define HSMCI_FIFO[135]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[135]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[136] FIFO[136] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[136]_DATA_SHIFT		0
#define HSMCI_FIFO[136]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[136]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[137] FIFO[137] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[137]_DATA_SHIFT		0
#define HSMCI_FIFO[137]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[137]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[138] FIFO[138] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[138]_DATA_SHIFT		0
#define HSMCI_FIFO[138]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[138]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[139] FIFO[139] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[139]_DATA_SHIFT		0
#define HSMCI_FIFO[139]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[139]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[140] FIFO[140] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[140]_DATA_SHIFT		0
#define HSMCI_FIFO[140]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[140]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[141] FIFO[141] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[141]_DATA_SHIFT		0
#define HSMCI_FIFO[141]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[141]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[142] FIFO[142] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[142]_DATA_SHIFT		0
#define HSMCI_FIFO[142]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[142]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[143] FIFO[143] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[143]_DATA_SHIFT		0
#define HSMCI_FIFO[143]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[143]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[144] FIFO[144] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[144]_DATA_SHIFT		0
#define HSMCI_FIFO[144]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[144]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[145] FIFO[145] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[145]_DATA_SHIFT		0
#define HSMCI_FIFO[145]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[145]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[146] FIFO[146] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[146]_DATA_SHIFT		0
#define HSMCI_FIFO[146]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[146]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[147] FIFO[147] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[147]_DATA_SHIFT		0
#define HSMCI_FIFO[147]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[147]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[148] FIFO[148] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[148]_DATA_SHIFT		0
#define HSMCI_FIFO[148]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[148]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[149] FIFO[149] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[149]_DATA_SHIFT		0
#define HSMCI_FIFO[149]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[149]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[150] FIFO[150] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[150]_DATA_SHIFT		0
#define HSMCI_FIFO[150]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[150]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[151] FIFO[151] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[151]_DATA_SHIFT		0
#define HSMCI_FIFO[151]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[151]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[152] FIFO[152] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[152]_DATA_SHIFT		0
#define HSMCI_FIFO[152]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[152]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[153] FIFO[153] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[153]_DATA_SHIFT		0
#define HSMCI_FIFO[153]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[153]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[154] FIFO[154] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[154]_DATA_SHIFT		0
#define HSMCI_FIFO[154]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[154]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[155] FIFO[155] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[155]_DATA_SHIFT		0
#define HSMCI_FIFO[155]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[155]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[156] FIFO[156] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[156]_DATA_SHIFT		0
#define HSMCI_FIFO[156]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[156]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[157] FIFO[157] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[157]_DATA_SHIFT		0
#define HSMCI_FIFO[157]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[157]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[158] FIFO[158] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[158]_DATA_SHIFT		0
#define HSMCI_FIFO[158]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[158]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[159] FIFO[159] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[159]_DATA_SHIFT		0
#define HSMCI_FIFO[159]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[159]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[160] FIFO[160] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[160]_DATA_SHIFT		0
#define HSMCI_FIFO[160]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[160]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[161] FIFO[161] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[161]_DATA_SHIFT		0
#define HSMCI_FIFO[161]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[161]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[162] FIFO[162] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[162]_DATA_SHIFT		0
#define HSMCI_FIFO[162]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[162]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[163] FIFO[163] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[163]_DATA_SHIFT		0
#define HSMCI_FIFO[163]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[163]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[164] FIFO[164] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[164]_DATA_SHIFT		0
#define HSMCI_FIFO[164]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[164]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[165] FIFO[165] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[165]_DATA_SHIFT		0
#define HSMCI_FIFO[165]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[165]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[166] FIFO[166] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[166]_DATA_SHIFT		0
#define HSMCI_FIFO[166]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[166]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[167] FIFO[167] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[167]_DATA_SHIFT		0
#define HSMCI_FIFO[167]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[167]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[168] FIFO[168] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[168]_DATA_SHIFT		0
#define HSMCI_FIFO[168]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[168]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[169] FIFO[169] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[169]_DATA_SHIFT		0
#define HSMCI_FIFO[169]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[169]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[170] FIFO[170] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[170]_DATA_SHIFT		0
#define HSMCI_FIFO[170]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[170]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[171] FIFO[171] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[171]_DATA_SHIFT		0
#define HSMCI_FIFO[171]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[171]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[172] FIFO[172] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[172]_DATA_SHIFT		0
#define HSMCI_FIFO[172]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[172]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[173] FIFO[173] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[173]_DATA_SHIFT		0
#define HSMCI_FIFO[173]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[173]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[174] FIFO[174] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[174]_DATA_SHIFT		0
#define HSMCI_FIFO[174]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[174]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[175] FIFO[175] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[175]_DATA_SHIFT		0
#define HSMCI_FIFO[175]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[175]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[176] FIFO[176] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[176]_DATA_SHIFT		0
#define HSMCI_FIFO[176]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[176]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[177] FIFO[177] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[177]_DATA_SHIFT		0
#define HSMCI_FIFO[177]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[177]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[178] FIFO[178] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[178]_DATA_SHIFT		0
#define HSMCI_FIFO[178]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[178]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[179] FIFO[179] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[179]_DATA_SHIFT		0
#define HSMCI_FIFO[179]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[179]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[180] FIFO[180] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[180]_DATA_SHIFT		0
#define HSMCI_FIFO[180]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[180]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[181] FIFO[181] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[181]_DATA_SHIFT		0
#define HSMCI_FIFO[181]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[181]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[182] FIFO[182] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[182]_DATA_SHIFT		0
#define HSMCI_FIFO[182]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[182]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[183] FIFO[183] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[183]_DATA_SHIFT		0
#define HSMCI_FIFO[183]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[183]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[184] FIFO[184] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[184]_DATA_SHIFT		0
#define HSMCI_FIFO[184]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[184]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[185] FIFO[185] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[185]_DATA_SHIFT		0
#define HSMCI_FIFO[185]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[185]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[186] FIFO[186] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[186]_DATA_SHIFT		0
#define HSMCI_FIFO[186]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[186]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[187] FIFO[187] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[187]_DATA_SHIFT		0
#define HSMCI_FIFO[187]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[187]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[188] FIFO[188] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[188]_DATA_SHIFT		0
#define HSMCI_FIFO[188]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[188]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[189] FIFO[189] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[189]_DATA_SHIFT		0
#define HSMCI_FIFO[189]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[189]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[190] FIFO[190] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[190]_DATA_SHIFT		0
#define HSMCI_FIFO[190]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[190]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[191] FIFO[191] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[191]_DATA_SHIFT		0
#define HSMCI_FIFO[191]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[191]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[192] FIFO[192] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[192]_DATA_SHIFT		0
#define HSMCI_FIFO[192]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[192]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[193] FIFO[193] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[193]_DATA_SHIFT		0
#define HSMCI_FIFO[193]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[193]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[194] FIFO[194] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[194]_DATA_SHIFT		0
#define HSMCI_FIFO[194]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[194]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[195] FIFO[195] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[195]_DATA_SHIFT		0
#define HSMCI_FIFO[195]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[195]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[196] FIFO[196] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[196]_DATA_SHIFT		0
#define HSMCI_FIFO[196]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[196]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[197] FIFO[197] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[197]_DATA_SHIFT		0
#define HSMCI_FIFO[197]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[197]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[198] FIFO[198] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[198]_DATA_SHIFT		0
#define HSMCI_FIFO[198]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[198]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[199] FIFO[199] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[199]_DATA_SHIFT		0
#define HSMCI_FIFO[199]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[199]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[200] FIFO[200] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[200]_DATA_SHIFT		0
#define HSMCI_FIFO[200]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[200]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[201] FIFO[201] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[201]_DATA_SHIFT		0
#define HSMCI_FIFO[201]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[201]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[202] FIFO[202] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[202]_DATA_SHIFT		0
#define HSMCI_FIFO[202]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[202]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[203] FIFO[203] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[203]_DATA_SHIFT		0
#define HSMCI_FIFO[203]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[203]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[204] FIFO[204] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[204]_DATA_SHIFT		0
#define HSMCI_FIFO[204]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[204]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[205] FIFO[205] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[205]_DATA_SHIFT		0
#define HSMCI_FIFO[205]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[205]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[206] FIFO[206] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[206]_DATA_SHIFT		0
#define HSMCI_FIFO[206]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[206]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[207] FIFO[207] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[207]_DATA_SHIFT		0
#define HSMCI_FIFO[207]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[207]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[208] FIFO[208] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[208]_DATA_SHIFT		0
#define HSMCI_FIFO[208]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[208]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[209] FIFO[209] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[209]_DATA_SHIFT		0
#define HSMCI_FIFO[209]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[209]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[210] FIFO[210] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[210]_DATA_SHIFT		0
#define HSMCI_FIFO[210]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[210]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[211] FIFO[211] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[211]_DATA_SHIFT		0
#define HSMCI_FIFO[211]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[211]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[212] FIFO[212] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[212]_DATA_SHIFT		0
#define HSMCI_FIFO[212]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[212]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[213] FIFO[213] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[213]_DATA_SHIFT		0
#define HSMCI_FIFO[213]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[213]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[214] FIFO[214] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[214]_DATA_SHIFT		0
#define HSMCI_FIFO[214]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[214]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[215] FIFO[215] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[215]_DATA_SHIFT		0
#define HSMCI_FIFO[215]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[215]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[216] FIFO[216] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[216]_DATA_SHIFT		0
#define HSMCI_FIFO[216]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[216]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[217] FIFO[217] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[217]_DATA_SHIFT		0
#define HSMCI_FIFO[217]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[217]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[218] FIFO[218] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[218]_DATA_SHIFT		0
#define HSMCI_FIFO[218]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[218]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[219] FIFO[219] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[219]_DATA_SHIFT		0
#define HSMCI_FIFO[219]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[219]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[220] FIFO[220] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[220]_DATA_SHIFT		0
#define HSMCI_FIFO[220]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[220]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[221] FIFO[221] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[221]_DATA_SHIFT		0
#define HSMCI_FIFO[221]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[221]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[222] FIFO[222] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[222]_DATA_SHIFT		0
#define HSMCI_FIFO[222]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[222]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[223] FIFO[223] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[223]_DATA_SHIFT		0
#define HSMCI_FIFO[223]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[223]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[224] FIFO[224] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[224]_DATA_SHIFT		0
#define HSMCI_FIFO[224]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[224]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[225] FIFO[225] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[225]_DATA_SHIFT		0
#define HSMCI_FIFO[225]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[225]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[226] FIFO[226] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[226]_DATA_SHIFT		0
#define HSMCI_FIFO[226]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[226]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[227] FIFO[227] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[227]_DATA_SHIFT		0
#define HSMCI_FIFO[227]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[227]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[228] FIFO[228] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[228]_DATA_SHIFT		0
#define HSMCI_FIFO[228]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[228]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[229] FIFO[229] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[229]_DATA_SHIFT		0
#define HSMCI_FIFO[229]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[229]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[230] FIFO[230] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[230]_DATA_SHIFT		0
#define HSMCI_FIFO[230]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[230]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[231] FIFO[231] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[231]_DATA_SHIFT		0
#define HSMCI_FIFO[231]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[231]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[232] FIFO[232] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[232]_DATA_SHIFT		0
#define HSMCI_FIFO[232]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[232]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[233] FIFO[233] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[233]_DATA_SHIFT		0
#define HSMCI_FIFO[233]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[233]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[234] FIFO[234] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[234]_DATA_SHIFT		0
#define HSMCI_FIFO[234]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[234]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[235] FIFO[235] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[235]_DATA_SHIFT		0
#define HSMCI_FIFO[235]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[235]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[236] FIFO[236] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[236]_DATA_SHIFT		0
#define HSMCI_FIFO[236]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[236]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[237] FIFO[237] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[237]_DATA_SHIFT		0
#define HSMCI_FIFO[237]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[237]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[238] FIFO[238] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[238]_DATA_SHIFT		0
#define HSMCI_FIFO[238]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[238]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[239] FIFO[239] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[239]_DATA_SHIFT		0
#define HSMCI_FIFO[239]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[239]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[240] FIFO[240] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[240]_DATA_SHIFT		0
#define HSMCI_FIFO[240]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[240]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[241] FIFO[241] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[241]_DATA_SHIFT		0
#define HSMCI_FIFO[241]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[241]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[242] FIFO[242] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[242]_DATA_SHIFT		0
#define HSMCI_FIFO[242]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[242]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[243] FIFO[243] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[243]_DATA_SHIFT		0
#define HSMCI_FIFO[243]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[243]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[244] FIFO[244] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[244]_DATA_SHIFT		0
#define HSMCI_FIFO[244]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[244]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[245] FIFO[245] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[245]_DATA_SHIFT		0
#define HSMCI_FIFO[245]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[245]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[246] FIFO[246] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[246]_DATA_SHIFT		0
#define HSMCI_FIFO[246]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[246]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[247] FIFO[247] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[247]_DATA_SHIFT		0
#define HSMCI_FIFO[247]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[247]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[248] FIFO[248] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[248]_DATA_SHIFT		0
#define HSMCI_FIFO[248]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[248]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[249] FIFO[249] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[249]_DATA_SHIFT		0
#define HSMCI_FIFO[249]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[249]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[250] FIFO[250] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[250]_DATA_SHIFT		0
#define HSMCI_FIFO[250]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[250]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[251] FIFO[251] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[251]_DATA_SHIFT		0
#define HSMCI_FIFO[251]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[251]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[252] FIFO[252] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[252]_DATA_SHIFT		0
#define HSMCI_FIFO[252]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[252]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[253] FIFO[253] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[253]_DATA_SHIFT		0
#define HSMCI_FIFO[253]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[253]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[254] FIFO[254] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[254]_DATA_SHIFT		0
#define HSMCI_FIFO[254]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[254]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

/** @defgroup hsmci_fifo[255] FIFO[255] FIFO Memory Aperture0
@{*/


#define HSMCI_FIFO[255]_DATA_SHIFT		0
#define HSMCI_FIFO[255]_DATA_MASK		0xffffffff
/** @defgroup hsmci_fifo[255]_data DATA Data to Read or Data to Write
@{*/
/**@}*/


/**@}*/

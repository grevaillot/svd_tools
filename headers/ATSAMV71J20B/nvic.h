#pragma once 

/* --- NVIC: Nested Vectored Interrupt Controller ------------------- */

/** @defgroup nvic_registers Nested Vectored Interrupt Controller Register
@{*/

/** NVIC_ISER[0] Interrupt Set Enable Register n **/
#define NVIC_ISER[0]			MMIO32(NVIC_BASE + 0x00)
/** NVIC_ISER[1] Interrupt Set Enable Register n **/
#define NVIC_ISER[1]			MMIO32(NVIC_BASE + 0x04)
/** NVIC_ISER[2] Interrupt Set Enable Register n **/
#define NVIC_ISER[2]			MMIO32(NVIC_BASE + 0x08)
/** NVIC_ISER[3] Interrupt Set Enable Register n **/
#define NVIC_ISER[3]			MMIO32(NVIC_BASE + 0x0c)
/** NVIC_ISER[4] Interrupt Set Enable Register n **/
#define NVIC_ISER[4]			MMIO32(NVIC_BASE + 0x10)
/** NVIC_ISER[5] Interrupt Set Enable Register n **/
#define NVIC_ISER[5]			MMIO32(NVIC_BASE + 0x14)
/** NVIC_ISER[6] Interrupt Set Enable Register n **/
#define NVIC_ISER[6]			MMIO32(NVIC_BASE + 0x18)
/** NVIC_ISER[7] Interrupt Set Enable Register n **/
#define NVIC_ISER[7]			MMIO32(NVIC_BASE + 0x1c)
/** NVIC_ICER[0] Interrupt Clear Enable Register n **/
#define NVIC_ICER[0]			MMIO32(NVIC_BASE + 0x80)
/** NVIC_ICER[1] Interrupt Clear Enable Register n **/
#define NVIC_ICER[1]			MMIO32(NVIC_BASE + 0x84)
/** NVIC_ICER[2] Interrupt Clear Enable Register n **/
#define NVIC_ICER[2]			MMIO32(NVIC_BASE + 0x88)
/** NVIC_ICER[3] Interrupt Clear Enable Register n **/
#define NVIC_ICER[3]			MMIO32(NVIC_BASE + 0x8c)
/** NVIC_ICER[4] Interrupt Clear Enable Register n **/
#define NVIC_ICER[4]			MMIO32(NVIC_BASE + 0x90)
/** NVIC_ICER[5] Interrupt Clear Enable Register n **/
#define NVIC_ICER[5]			MMIO32(NVIC_BASE + 0x94)
/** NVIC_ICER[6] Interrupt Clear Enable Register n **/
#define NVIC_ICER[6]			MMIO32(NVIC_BASE + 0x98)
/** NVIC_ICER[7] Interrupt Clear Enable Register n **/
#define NVIC_ICER[7]			MMIO32(NVIC_BASE + 0x9c)
/** NVIC_ISPR[0] Interrupt Set Pending Register n **/
#define NVIC_ISPR[0]			MMIO32(NVIC_BASE + 0x100)
/** NVIC_ISPR[1] Interrupt Set Pending Register n **/
#define NVIC_ISPR[1]			MMIO32(NVIC_BASE + 0x104)
/** NVIC_ISPR[2] Interrupt Set Pending Register n **/
#define NVIC_ISPR[2]			MMIO32(NVIC_BASE + 0x108)
/** NVIC_ISPR[3] Interrupt Set Pending Register n **/
#define NVIC_ISPR[3]			MMIO32(NVIC_BASE + 0x10c)
/** NVIC_ISPR[4] Interrupt Set Pending Register n **/
#define NVIC_ISPR[4]			MMIO32(NVIC_BASE + 0x110)
/** NVIC_ISPR[5] Interrupt Set Pending Register n **/
#define NVIC_ISPR[5]			MMIO32(NVIC_BASE + 0x114)
/** NVIC_ISPR[6] Interrupt Set Pending Register n **/
#define NVIC_ISPR[6]			MMIO32(NVIC_BASE + 0x118)
/** NVIC_ISPR[7] Interrupt Set Pending Register n **/
#define NVIC_ISPR[7]			MMIO32(NVIC_BASE + 0x11c)
/** NVIC_ICPR[0] Interrupt Clear Pending Register n **/
#define NVIC_ICPR[0]			MMIO32(NVIC_BASE + 0x180)
/** NVIC_ICPR[1] Interrupt Clear Pending Register n **/
#define NVIC_ICPR[1]			MMIO32(NVIC_BASE + 0x184)
/** NVIC_ICPR[2] Interrupt Clear Pending Register n **/
#define NVIC_ICPR[2]			MMIO32(NVIC_BASE + 0x188)
/** NVIC_ICPR[3] Interrupt Clear Pending Register n **/
#define NVIC_ICPR[3]			MMIO32(NVIC_BASE + 0x18c)
/** NVIC_ICPR[4] Interrupt Clear Pending Register n **/
#define NVIC_ICPR[4]			MMIO32(NVIC_BASE + 0x190)
/** NVIC_ICPR[5] Interrupt Clear Pending Register n **/
#define NVIC_ICPR[5]			MMIO32(NVIC_BASE + 0x194)
/** NVIC_ICPR[6] Interrupt Clear Pending Register n **/
#define NVIC_ICPR[6]			MMIO32(NVIC_BASE + 0x198)
/** NVIC_ICPR[7] Interrupt Clear Pending Register n **/
#define NVIC_ICPR[7]			MMIO32(NVIC_BASE + 0x19c)
/** NVIC_IABR[0] Interrupt Active bit Register n **/
#define NVIC_IABR[0]			MMIO32(NVIC_BASE + 0x200)
/** NVIC_IABR[1] Interrupt Active bit Register n **/
#define NVIC_IABR[1]			MMIO32(NVIC_BASE + 0x204)
/** NVIC_IABR[2] Interrupt Active bit Register n **/
#define NVIC_IABR[2]			MMIO32(NVIC_BASE + 0x208)
/** NVIC_IABR[3] Interrupt Active bit Register n **/
#define NVIC_IABR[3]			MMIO32(NVIC_BASE + 0x20c)
/** NVIC_IABR[4] Interrupt Active bit Register n **/
#define NVIC_IABR[4]			MMIO32(NVIC_BASE + 0x210)
/** NVIC_IABR[5] Interrupt Active bit Register n **/
#define NVIC_IABR[5]			MMIO32(NVIC_BASE + 0x214)
/** NVIC_IABR[6] Interrupt Active bit Register n **/
#define NVIC_IABR[6]			MMIO32(NVIC_BASE + 0x218)
/** NVIC_IABR[7] Interrupt Active bit Register n **/
#define NVIC_IABR[7]			MMIO32(NVIC_BASE + 0x21c)
/** NVIC_IP[0] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[0]			MMIO32(NVIC_BASE + 0x300)
/** NVIC_IP[1] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[1]			MMIO32(NVIC_BASE + 0x301)
/** NVIC_IP[2] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[2]			MMIO32(NVIC_BASE + 0x302)
/** NVIC_IP[3] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[3]			MMIO32(NVIC_BASE + 0x303)
/** NVIC_IP[4] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[4]			MMIO32(NVIC_BASE + 0x304)
/** NVIC_IP[5] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[5]			MMIO32(NVIC_BASE + 0x305)
/** NVIC_IP[6] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[6]			MMIO32(NVIC_BASE + 0x306)
/** NVIC_IP[7] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[7]			MMIO32(NVIC_BASE + 0x307)
/** NVIC_IP[8] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[8]			MMIO32(NVIC_BASE + 0x308)
/** NVIC_IP[9] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[9]			MMIO32(NVIC_BASE + 0x309)
/** NVIC_IP[10] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[10]			MMIO32(NVIC_BASE + 0x30a)
/** NVIC_IP[11] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[11]			MMIO32(NVIC_BASE + 0x30b)
/** NVIC_IP[12] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[12]			MMIO32(NVIC_BASE + 0x30c)
/** NVIC_IP[13] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[13]			MMIO32(NVIC_BASE + 0x30d)
/** NVIC_IP[14] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[14]			MMIO32(NVIC_BASE + 0x30e)
/** NVIC_IP[15] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[15]			MMIO32(NVIC_BASE + 0x30f)
/** NVIC_IP[16] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[16]			MMIO32(NVIC_BASE + 0x310)
/** NVIC_IP[17] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[17]			MMIO32(NVIC_BASE + 0x311)
/** NVIC_IP[18] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[18]			MMIO32(NVIC_BASE + 0x312)
/** NVIC_IP[19] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[19]			MMIO32(NVIC_BASE + 0x313)
/** NVIC_IP[20] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[20]			MMIO32(NVIC_BASE + 0x314)
/** NVIC_IP[21] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[21]			MMIO32(NVIC_BASE + 0x315)
/** NVIC_IP[22] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[22]			MMIO32(NVIC_BASE + 0x316)
/** NVIC_IP[23] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[23]			MMIO32(NVIC_BASE + 0x317)
/** NVIC_IP[24] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[24]			MMIO32(NVIC_BASE + 0x318)
/** NVIC_IP[25] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[25]			MMIO32(NVIC_BASE + 0x319)
/** NVIC_IP[26] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[26]			MMIO32(NVIC_BASE + 0x31a)
/** NVIC_IP[27] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[27]			MMIO32(NVIC_BASE + 0x31b)
/** NVIC_IP[28] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[28]			MMIO32(NVIC_BASE + 0x31c)
/** NVIC_IP[29] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[29]			MMIO32(NVIC_BASE + 0x31d)
/** NVIC_IP[30] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[30]			MMIO32(NVIC_BASE + 0x31e)
/** NVIC_IP[31] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[31]			MMIO32(NVIC_BASE + 0x31f)
/** NVIC_IP[32] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[32]			MMIO32(NVIC_BASE + 0x320)
/** NVIC_IP[33] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[33]			MMIO32(NVIC_BASE + 0x321)
/** NVIC_IP[34] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[34]			MMIO32(NVIC_BASE + 0x322)
/** NVIC_IP[35] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[35]			MMIO32(NVIC_BASE + 0x323)
/** NVIC_IP[36] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[36]			MMIO32(NVIC_BASE + 0x324)
/** NVIC_IP[37] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[37]			MMIO32(NVIC_BASE + 0x325)
/** NVIC_IP[38] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[38]			MMIO32(NVIC_BASE + 0x326)
/** NVIC_IP[39] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[39]			MMIO32(NVIC_BASE + 0x327)
/** NVIC_IP[40] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[40]			MMIO32(NVIC_BASE + 0x328)
/** NVIC_IP[41] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[41]			MMIO32(NVIC_BASE + 0x329)
/** NVIC_IP[42] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[42]			MMIO32(NVIC_BASE + 0x32a)
/** NVIC_IP[43] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[43]			MMIO32(NVIC_BASE + 0x32b)
/** NVIC_IP[44] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[44]			MMIO32(NVIC_BASE + 0x32c)
/** NVIC_IP[45] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[45]			MMIO32(NVIC_BASE + 0x32d)
/** NVIC_IP[46] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[46]			MMIO32(NVIC_BASE + 0x32e)
/** NVIC_IP[47] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[47]			MMIO32(NVIC_BASE + 0x32f)
/** NVIC_IP[48] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[48]			MMIO32(NVIC_BASE + 0x330)
/** NVIC_IP[49] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[49]			MMIO32(NVIC_BASE + 0x331)
/** NVIC_IP[50] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[50]			MMIO32(NVIC_BASE + 0x332)
/** NVIC_IP[51] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[51]			MMIO32(NVIC_BASE + 0x333)
/** NVIC_IP[52] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[52]			MMIO32(NVIC_BASE + 0x334)
/** NVIC_IP[53] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[53]			MMIO32(NVIC_BASE + 0x335)
/** NVIC_IP[54] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[54]			MMIO32(NVIC_BASE + 0x336)
/** NVIC_IP[55] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[55]			MMIO32(NVIC_BASE + 0x337)
/** NVIC_IP[56] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[56]			MMIO32(NVIC_BASE + 0x338)
/** NVIC_IP[57] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[57]			MMIO32(NVIC_BASE + 0x339)
/** NVIC_IP[58] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[58]			MMIO32(NVIC_BASE + 0x33a)
/** NVIC_IP[59] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[59]			MMIO32(NVIC_BASE + 0x33b)
/** NVIC_IP[60] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[60]			MMIO32(NVIC_BASE + 0x33c)
/** NVIC_IP[61] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[61]			MMIO32(NVIC_BASE + 0x33d)
/** NVIC_IP[62] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[62]			MMIO32(NVIC_BASE + 0x33e)
/** NVIC_IP[63] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[63]			MMIO32(NVIC_BASE + 0x33f)
/** NVIC_IP[64] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[64]			MMIO32(NVIC_BASE + 0x340)
/** NVIC_IP[65] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[65]			MMIO32(NVIC_BASE + 0x341)
/** NVIC_IP[66] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[66]			MMIO32(NVIC_BASE + 0x342)
/** NVIC_IP[67] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[67]			MMIO32(NVIC_BASE + 0x343)
/** NVIC_IP[68] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[68]			MMIO32(NVIC_BASE + 0x344)
/** NVIC_IP[69] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[69]			MMIO32(NVIC_BASE + 0x345)
/** NVIC_IP[70] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[70]			MMIO32(NVIC_BASE + 0x346)
/** NVIC_IP[71] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[71]			MMIO32(NVIC_BASE + 0x347)
/** NVIC_IP[72] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[72]			MMIO32(NVIC_BASE + 0x348)
/** NVIC_IP[73] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[73]			MMIO32(NVIC_BASE + 0x349)
/** NVIC_IP[74] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[74]			MMIO32(NVIC_BASE + 0x34a)
/** NVIC_IP[75] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[75]			MMIO32(NVIC_BASE + 0x34b)
/** NVIC_IP[76] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[76]			MMIO32(NVIC_BASE + 0x34c)
/** NVIC_IP[77] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[77]			MMIO32(NVIC_BASE + 0x34d)
/** NVIC_IP[78] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[78]			MMIO32(NVIC_BASE + 0x34e)
/** NVIC_IP[79] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[79]			MMIO32(NVIC_BASE + 0x34f)
/** NVIC_IP[80] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[80]			MMIO32(NVIC_BASE + 0x350)
/** NVIC_IP[81] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[81]			MMIO32(NVIC_BASE + 0x351)
/** NVIC_IP[82] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[82]			MMIO32(NVIC_BASE + 0x352)
/** NVIC_IP[83] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[83]			MMIO32(NVIC_BASE + 0x353)
/** NVIC_IP[84] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[84]			MMIO32(NVIC_BASE + 0x354)
/** NVIC_IP[85] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[85]			MMIO32(NVIC_BASE + 0x355)
/** NVIC_IP[86] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[86]			MMIO32(NVIC_BASE + 0x356)
/** NVIC_IP[87] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[87]			MMIO32(NVIC_BASE + 0x357)
/** NVIC_IP[88] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[88]			MMIO32(NVIC_BASE + 0x358)
/** NVIC_IP[89] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[89]			MMIO32(NVIC_BASE + 0x359)
/** NVIC_IP[90] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[90]			MMIO32(NVIC_BASE + 0x35a)
/** NVIC_IP[91] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[91]			MMIO32(NVIC_BASE + 0x35b)
/** NVIC_IP[92] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[92]			MMIO32(NVIC_BASE + 0x35c)
/** NVIC_IP[93] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[93]			MMIO32(NVIC_BASE + 0x35d)
/** NVIC_IP[94] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[94]			MMIO32(NVIC_BASE + 0x35e)
/** NVIC_IP[95] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[95]			MMIO32(NVIC_BASE + 0x35f)
/** NVIC_IP[96] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[96]			MMIO32(NVIC_BASE + 0x360)
/** NVIC_IP[97] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[97]			MMIO32(NVIC_BASE + 0x361)
/** NVIC_IP[98] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[98]			MMIO32(NVIC_BASE + 0x362)
/** NVIC_IP[99] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[99]			MMIO32(NVIC_BASE + 0x363)
/** NVIC_IP[100] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[100]			MMIO32(NVIC_BASE + 0x364)
/** NVIC_IP[101] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[101]			MMIO32(NVIC_BASE + 0x365)
/** NVIC_IP[102] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[102]			MMIO32(NVIC_BASE + 0x366)
/** NVIC_IP[103] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[103]			MMIO32(NVIC_BASE + 0x367)
/** NVIC_IP[104] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[104]			MMIO32(NVIC_BASE + 0x368)
/** NVIC_IP[105] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[105]			MMIO32(NVIC_BASE + 0x369)
/** NVIC_IP[106] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[106]			MMIO32(NVIC_BASE + 0x36a)
/** NVIC_IP[107] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[107]			MMIO32(NVIC_BASE + 0x36b)
/** NVIC_IP[108] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[108]			MMIO32(NVIC_BASE + 0x36c)
/** NVIC_IP[109] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[109]			MMIO32(NVIC_BASE + 0x36d)
/** NVIC_IP[110] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[110]			MMIO32(NVIC_BASE + 0x36e)
/** NVIC_IP[111] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[111]			MMIO32(NVIC_BASE + 0x36f)
/** NVIC_IP[112] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[112]			MMIO32(NVIC_BASE + 0x370)
/** NVIC_IP[113] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[113]			MMIO32(NVIC_BASE + 0x371)
/** NVIC_IP[114] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[114]			MMIO32(NVIC_BASE + 0x372)
/** NVIC_IP[115] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[115]			MMIO32(NVIC_BASE + 0x373)
/** NVIC_IP[116] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[116]			MMIO32(NVIC_BASE + 0x374)
/** NVIC_IP[117] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[117]			MMIO32(NVIC_BASE + 0x375)
/** NVIC_IP[118] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[118]			MMIO32(NVIC_BASE + 0x376)
/** NVIC_IP[119] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[119]			MMIO32(NVIC_BASE + 0x377)
/** NVIC_IP[120] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[120]			MMIO32(NVIC_BASE + 0x378)
/** NVIC_IP[121] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[121]			MMIO32(NVIC_BASE + 0x379)
/** NVIC_IP[122] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[122]			MMIO32(NVIC_BASE + 0x37a)
/** NVIC_IP[123] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[123]			MMIO32(NVIC_BASE + 0x37b)
/** NVIC_IP[124] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[124]			MMIO32(NVIC_BASE + 0x37c)
/** NVIC_IP[125] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[125]			MMIO32(NVIC_BASE + 0x37d)
/** NVIC_IP[126] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[126]			MMIO32(NVIC_BASE + 0x37e)
/** NVIC_IP[127] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[127]			MMIO32(NVIC_BASE + 0x37f)
/** NVIC_IP[128] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[128]			MMIO32(NVIC_BASE + 0x380)
/** NVIC_IP[129] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[129]			MMIO32(NVIC_BASE + 0x381)
/** NVIC_IP[130] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[130]			MMIO32(NVIC_BASE + 0x382)
/** NVIC_IP[131] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[131]			MMIO32(NVIC_BASE + 0x383)
/** NVIC_IP[132] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[132]			MMIO32(NVIC_BASE + 0x384)
/** NVIC_IP[133] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[133]			MMIO32(NVIC_BASE + 0x385)
/** NVIC_IP[134] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[134]			MMIO32(NVIC_BASE + 0x386)
/** NVIC_IP[135] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[135]			MMIO32(NVIC_BASE + 0x387)
/** NVIC_IP[136] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[136]			MMIO32(NVIC_BASE + 0x388)
/** NVIC_IP[137] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[137]			MMIO32(NVIC_BASE + 0x389)
/** NVIC_IP[138] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[138]			MMIO32(NVIC_BASE + 0x38a)
/** NVIC_IP[139] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[139]			MMIO32(NVIC_BASE + 0x38b)
/** NVIC_IP[140] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[140]			MMIO32(NVIC_BASE + 0x38c)
/** NVIC_IP[141] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[141]			MMIO32(NVIC_BASE + 0x38d)
/** NVIC_IP[142] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[142]			MMIO32(NVIC_BASE + 0x38e)
/** NVIC_IP[143] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[143]			MMIO32(NVIC_BASE + 0x38f)
/** NVIC_IP[144] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[144]			MMIO32(NVIC_BASE + 0x390)
/** NVIC_IP[145] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[145]			MMIO32(NVIC_BASE + 0x391)
/** NVIC_IP[146] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[146]			MMIO32(NVIC_BASE + 0x392)
/** NVIC_IP[147] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[147]			MMIO32(NVIC_BASE + 0x393)
/** NVIC_IP[148] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[148]			MMIO32(NVIC_BASE + 0x394)
/** NVIC_IP[149] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[149]			MMIO32(NVIC_BASE + 0x395)
/** NVIC_IP[150] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[150]			MMIO32(NVIC_BASE + 0x396)
/** NVIC_IP[151] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[151]			MMIO32(NVIC_BASE + 0x397)
/** NVIC_IP[152] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[152]			MMIO32(NVIC_BASE + 0x398)
/** NVIC_IP[153] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[153]			MMIO32(NVIC_BASE + 0x399)
/** NVIC_IP[154] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[154]			MMIO32(NVIC_BASE + 0x39a)
/** NVIC_IP[155] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[155]			MMIO32(NVIC_BASE + 0x39b)
/** NVIC_IP[156] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[156]			MMIO32(NVIC_BASE + 0x39c)
/** NVIC_IP[157] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[157]			MMIO32(NVIC_BASE + 0x39d)
/** NVIC_IP[158] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[158]			MMIO32(NVIC_BASE + 0x39e)
/** NVIC_IP[159] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[159]			MMIO32(NVIC_BASE + 0x39f)
/** NVIC_IP[160] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[160]			MMIO32(NVIC_BASE + 0x3a0)
/** NVIC_IP[161] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[161]			MMIO32(NVIC_BASE + 0x3a1)
/** NVIC_IP[162] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[162]			MMIO32(NVIC_BASE + 0x3a2)
/** NVIC_IP[163] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[163]			MMIO32(NVIC_BASE + 0x3a3)
/** NVIC_IP[164] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[164]			MMIO32(NVIC_BASE + 0x3a4)
/** NVIC_IP[165] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[165]			MMIO32(NVIC_BASE + 0x3a5)
/** NVIC_IP[166] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[166]			MMIO32(NVIC_BASE + 0x3a6)
/** NVIC_IP[167] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[167]			MMIO32(NVIC_BASE + 0x3a7)
/** NVIC_IP[168] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[168]			MMIO32(NVIC_BASE + 0x3a8)
/** NVIC_IP[169] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[169]			MMIO32(NVIC_BASE + 0x3a9)
/** NVIC_IP[170] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[170]			MMIO32(NVIC_BASE + 0x3aa)
/** NVIC_IP[171] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[171]			MMIO32(NVIC_BASE + 0x3ab)
/** NVIC_IP[172] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[172]			MMIO32(NVIC_BASE + 0x3ac)
/** NVIC_IP[173] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[173]			MMIO32(NVIC_BASE + 0x3ad)
/** NVIC_IP[174] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[174]			MMIO32(NVIC_BASE + 0x3ae)
/** NVIC_IP[175] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[175]			MMIO32(NVIC_BASE + 0x3af)
/** NVIC_IP[176] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[176]			MMIO32(NVIC_BASE + 0x3b0)
/** NVIC_IP[177] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[177]			MMIO32(NVIC_BASE + 0x3b1)
/** NVIC_IP[178] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[178]			MMIO32(NVIC_BASE + 0x3b2)
/** NVIC_IP[179] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[179]			MMIO32(NVIC_BASE + 0x3b3)
/** NVIC_IP[180] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[180]			MMIO32(NVIC_BASE + 0x3b4)
/** NVIC_IP[181] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[181]			MMIO32(NVIC_BASE + 0x3b5)
/** NVIC_IP[182] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[182]			MMIO32(NVIC_BASE + 0x3b6)
/** NVIC_IP[183] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[183]			MMIO32(NVIC_BASE + 0x3b7)
/** NVIC_IP[184] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[184]			MMIO32(NVIC_BASE + 0x3b8)
/** NVIC_IP[185] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[185]			MMIO32(NVIC_BASE + 0x3b9)
/** NVIC_IP[186] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[186]			MMIO32(NVIC_BASE + 0x3ba)
/** NVIC_IP[187] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[187]			MMIO32(NVIC_BASE + 0x3bb)
/** NVIC_IP[188] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[188]			MMIO32(NVIC_BASE + 0x3bc)
/** NVIC_IP[189] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[189]			MMIO32(NVIC_BASE + 0x3bd)
/** NVIC_IP[190] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[190]			MMIO32(NVIC_BASE + 0x3be)
/** NVIC_IP[191] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[191]			MMIO32(NVIC_BASE + 0x3bf)
/** NVIC_IP[192] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[192]			MMIO32(NVIC_BASE + 0x3c0)
/** NVIC_IP[193] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[193]			MMIO32(NVIC_BASE + 0x3c1)
/** NVIC_IP[194] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[194]			MMIO32(NVIC_BASE + 0x3c2)
/** NVIC_IP[195] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[195]			MMIO32(NVIC_BASE + 0x3c3)
/** NVIC_IP[196] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[196]			MMIO32(NVIC_BASE + 0x3c4)
/** NVIC_IP[197] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[197]			MMIO32(NVIC_BASE + 0x3c5)
/** NVIC_IP[198] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[198]			MMIO32(NVIC_BASE + 0x3c6)
/** NVIC_IP[199] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[199]			MMIO32(NVIC_BASE + 0x3c7)
/** NVIC_IP[200] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[200]			MMIO32(NVIC_BASE + 0x3c8)
/** NVIC_IP[201] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[201]			MMIO32(NVIC_BASE + 0x3c9)
/** NVIC_IP[202] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[202]			MMIO32(NVIC_BASE + 0x3ca)
/** NVIC_IP[203] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[203]			MMIO32(NVIC_BASE + 0x3cb)
/** NVIC_IP[204] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[204]			MMIO32(NVIC_BASE + 0x3cc)
/** NVIC_IP[205] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[205]			MMIO32(NVIC_BASE + 0x3cd)
/** NVIC_IP[206] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[206]			MMIO32(NVIC_BASE + 0x3ce)
/** NVIC_IP[207] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[207]			MMIO32(NVIC_BASE + 0x3cf)
/** NVIC_IP[208] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[208]			MMIO32(NVIC_BASE + 0x3d0)
/** NVIC_IP[209] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[209]			MMIO32(NVIC_BASE + 0x3d1)
/** NVIC_IP[210] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[210]			MMIO32(NVIC_BASE + 0x3d2)
/** NVIC_IP[211] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[211]			MMIO32(NVIC_BASE + 0x3d3)
/** NVIC_IP[212] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[212]			MMIO32(NVIC_BASE + 0x3d4)
/** NVIC_IP[213] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[213]			MMIO32(NVIC_BASE + 0x3d5)
/** NVIC_IP[214] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[214]			MMIO32(NVIC_BASE + 0x3d6)
/** NVIC_IP[215] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[215]			MMIO32(NVIC_BASE + 0x3d7)
/** NVIC_IP[216] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[216]			MMIO32(NVIC_BASE + 0x3d8)
/** NVIC_IP[217] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[217]			MMIO32(NVIC_BASE + 0x3d9)
/** NVIC_IP[218] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[218]			MMIO32(NVIC_BASE + 0x3da)
/** NVIC_IP[219] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[219]			MMIO32(NVIC_BASE + 0x3db)
/** NVIC_IP[220] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[220]			MMIO32(NVIC_BASE + 0x3dc)
/** NVIC_IP[221] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[221]			MMIO32(NVIC_BASE + 0x3dd)
/** NVIC_IP[222] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[222]			MMIO32(NVIC_BASE + 0x3de)
/** NVIC_IP[223] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[223]			MMIO32(NVIC_BASE + 0x3df)
/** NVIC_IP[224] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[224]			MMIO32(NVIC_BASE + 0x3e0)
/** NVIC_IP[225] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[225]			MMIO32(NVIC_BASE + 0x3e1)
/** NVIC_IP[226] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[226]			MMIO32(NVIC_BASE + 0x3e2)
/** NVIC_IP[227] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[227]			MMIO32(NVIC_BASE + 0x3e3)
/** NVIC_IP[228] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[228]			MMIO32(NVIC_BASE + 0x3e4)
/** NVIC_IP[229] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[229]			MMIO32(NVIC_BASE + 0x3e5)
/** NVIC_IP[230] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[230]			MMIO32(NVIC_BASE + 0x3e6)
/** NVIC_IP[231] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[231]			MMIO32(NVIC_BASE + 0x3e7)
/** NVIC_IP[232] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[232]			MMIO32(NVIC_BASE + 0x3e8)
/** NVIC_IP[233] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[233]			MMIO32(NVIC_BASE + 0x3e9)
/** NVIC_IP[234] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[234]			MMIO32(NVIC_BASE + 0x3ea)
/** NVIC_IP[235] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[235]			MMIO32(NVIC_BASE + 0x3eb)
/** NVIC_IP[236] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[236]			MMIO32(NVIC_BASE + 0x3ec)
/** NVIC_IP[237] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[237]			MMIO32(NVIC_BASE + 0x3ed)
/** NVIC_IP[238] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[238]			MMIO32(NVIC_BASE + 0x3ee)
/** NVIC_IP[239] Interrupt Priority Register (8Bit wide) n **/
#define NVIC_IP[239]			MMIO32(NVIC_BASE + 0x3ef)
/** NVIC_STIR Software Trigger Interrupt Register **/
#define NVIC_STIR			MMIO32(NVIC_BASE + 0xe00)

/**@}*/


/** @defgroup nvic_iser[0] ISER[0] Interrupt Set Enable Register n
@{*/


#define NVIC_ISER[0]_SETENA_SHIFT		0
#define NVIC_ISER[0]_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser[0]_setena SETENA Interrupt set enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser[1] ISER[1] Interrupt Set Enable Register n
@{*/


#define NVIC_ISER[1]_SETENA_SHIFT		0
#define NVIC_ISER[1]_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser[1]_setena SETENA Interrupt set enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser[2] ISER[2] Interrupt Set Enable Register n
@{*/


#define NVIC_ISER[2]_SETENA_SHIFT		0
#define NVIC_ISER[2]_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser[2]_setena SETENA Interrupt set enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser[3] ISER[3] Interrupt Set Enable Register n
@{*/


#define NVIC_ISER[3]_SETENA_SHIFT		0
#define NVIC_ISER[3]_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser[3]_setena SETENA Interrupt set enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser[4] ISER[4] Interrupt Set Enable Register n
@{*/


#define NVIC_ISER[4]_SETENA_SHIFT		0
#define NVIC_ISER[4]_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser[4]_setena SETENA Interrupt set enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser[5] ISER[5] Interrupt Set Enable Register n
@{*/


#define NVIC_ISER[5]_SETENA_SHIFT		0
#define NVIC_ISER[5]_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser[5]_setena SETENA Interrupt set enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser[6] ISER[6] Interrupt Set Enable Register n
@{*/


#define NVIC_ISER[6]_SETENA_SHIFT		0
#define NVIC_ISER[6]_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser[6]_setena SETENA Interrupt set enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iser[7] ISER[7] Interrupt Set Enable Register n
@{*/


#define NVIC_ISER[7]_SETENA_SHIFT		0
#define NVIC_ISER[7]_SETENA_MASK		0xffffffff
/** @defgroup nvic_iser[7]_setena SETENA Interrupt set enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer[0] ICER[0] Interrupt Clear Enable Register n
@{*/


#define NVIC_ICER[0]_CLRENA_SHIFT		0
#define NVIC_ICER[0]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer[0]_clrena CLRENA Interrupt clear-enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer[1] ICER[1] Interrupt Clear Enable Register n
@{*/


#define NVIC_ICER[1]_CLRENA_SHIFT		0
#define NVIC_ICER[1]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer[1]_clrena CLRENA Interrupt clear-enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer[2] ICER[2] Interrupt Clear Enable Register n
@{*/


#define NVIC_ICER[2]_CLRENA_SHIFT		0
#define NVIC_ICER[2]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer[2]_clrena CLRENA Interrupt clear-enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer[3] ICER[3] Interrupt Clear Enable Register n
@{*/


#define NVIC_ICER[3]_CLRENA_SHIFT		0
#define NVIC_ICER[3]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer[3]_clrena CLRENA Interrupt clear-enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer[4] ICER[4] Interrupt Clear Enable Register n
@{*/


#define NVIC_ICER[4]_CLRENA_SHIFT		0
#define NVIC_ICER[4]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer[4]_clrena CLRENA Interrupt clear-enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer[5] ICER[5] Interrupt Clear Enable Register n
@{*/


#define NVIC_ICER[5]_CLRENA_SHIFT		0
#define NVIC_ICER[5]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer[5]_clrena CLRENA Interrupt clear-enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer[6] ICER[6] Interrupt Clear Enable Register n
@{*/


#define NVIC_ICER[6]_CLRENA_SHIFT		0
#define NVIC_ICER[6]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer[6]_clrena CLRENA Interrupt clear-enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icer[7] ICER[7] Interrupt Clear Enable Register n
@{*/


#define NVIC_ICER[7]_CLRENA_SHIFT		0
#define NVIC_ICER[7]_CLRENA_MASK		0xffffffff
/** @defgroup nvic_icer[7]_clrena CLRENA Interrupt clear-enable bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr[0] ISPR[0] Interrupt Set Pending Register n
@{*/


#define NVIC_ISPR[0]_SETPEND_SHIFT		0
#define NVIC_ISPR[0]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr[0]_setpend SETPEND Interrupt set-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr[1] ISPR[1] Interrupt Set Pending Register n
@{*/


#define NVIC_ISPR[1]_SETPEND_SHIFT		0
#define NVIC_ISPR[1]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr[1]_setpend SETPEND Interrupt set-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr[2] ISPR[2] Interrupt Set Pending Register n
@{*/


#define NVIC_ISPR[2]_SETPEND_SHIFT		0
#define NVIC_ISPR[2]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr[2]_setpend SETPEND Interrupt set-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr[3] ISPR[3] Interrupt Set Pending Register n
@{*/


#define NVIC_ISPR[3]_SETPEND_SHIFT		0
#define NVIC_ISPR[3]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr[3]_setpend SETPEND Interrupt set-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr[4] ISPR[4] Interrupt Set Pending Register n
@{*/


#define NVIC_ISPR[4]_SETPEND_SHIFT		0
#define NVIC_ISPR[4]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr[4]_setpend SETPEND Interrupt set-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr[5] ISPR[5] Interrupt Set Pending Register n
@{*/


#define NVIC_ISPR[5]_SETPEND_SHIFT		0
#define NVIC_ISPR[5]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr[5]_setpend SETPEND Interrupt set-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr[6] ISPR[6] Interrupt Set Pending Register n
@{*/


#define NVIC_ISPR[6]_SETPEND_SHIFT		0
#define NVIC_ISPR[6]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr[6]_setpend SETPEND Interrupt set-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ispr[7] ISPR[7] Interrupt Set Pending Register n
@{*/


#define NVIC_ISPR[7]_SETPEND_SHIFT		0
#define NVIC_ISPR[7]_SETPEND_MASK		0xffffffff
/** @defgroup nvic_ispr[7]_setpend SETPEND Interrupt set-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr[0] ICPR[0] Interrupt Clear Pending Register n
@{*/


#define NVIC_ICPR[0]_CLRPEND_SHIFT		0
#define NVIC_ICPR[0]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr[0]_clrpend CLRPEND Interrupt clear-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr[1] ICPR[1] Interrupt Clear Pending Register n
@{*/


#define NVIC_ICPR[1]_CLRPEND_SHIFT		0
#define NVIC_ICPR[1]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr[1]_clrpend CLRPEND Interrupt clear-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr[2] ICPR[2] Interrupt Clear Pending Register n
@{*/


#define NVIC_ICPR[2]_CLRPEND_SHIFT		0
#define NVIC_ICPR[2]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr[2]_clrpend CLRPEND Interrupt clear-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr[3] ICPR[3] Interrupt Clear Pending Register n
@{*/


#define NVIC_ICPR[3]_CLRPEND_SHIFT		0
#define NVIC_ICPR[3]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr[3]_clrpend CLRPEND Interrupt clear-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr[4] ICPR[4] Interrupt Clear Pending Register n
@{*/


#define NVIC_ICPR[4]_CLRPEND_SHIFT		0
#define NVIC_ICPR[4]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr[4]_clrpend CLRPEND Interrupt clear-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr[5] ICPR[5] Interrupt Clear Pending Register n
@{*/


#define NVIC_ICPR[5]_CLRPEND_SHIFT		0
#define NVIC_ICPR[5]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr[5]_clrpend CLRPEND Interrupt clear-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr[6] ICPR[6] Interrupt Clear Pending Register n
@{*/


#define NVIC_ICPR[6]_CLRPEND_SHIFT		0
#define NVIC_ICPR[6]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr[6]_clrpend CLRPEND Interrupt clear-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_icpr[7] ICPR[7] Interrupt Clear Pending Register n
@{*/


#define NVIC_ICPR[7]_CLRPEND_SHIFT		0
#define NVIC_ICPR[7]_CLRPEND_MASK		0xffffffff
/** @defgroup nvic_icpr[7]_clrpend CLRPEND Interrupt clear-pending bits
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr[0] IABR[0] Interrupt Active bit Register n
@{*/


#define NVIC_IABR[0]_ACTIVE_SHIFT		0
#define NVIC_IABR[0]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr[0]_active ACTIVE Interrupt active flags
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr[1] IABR[1] Interrupt Active bit Register n
@{*/


#define NVIC_IABR[1]_ACTIVE_SHIFT		0
#define NVIC_IABR[1]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr[1]_active ACTIVE Interrupt active flags
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr[2] IABR[2] Interrupt Active bit Register n
@{*/


#define NVIC_IABR[2]_ACTIVE_SHIFT		0
#define NVIC_IABR[2]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr[2]_active ACTIVE Interrupt active flags
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr[3] IABR[3] Interrupt Active bit Register n
@{*/


#define NVIC_IABR[3]_ACTIVE_SHIFT		0
#define NVIC_IABR[3]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr[3]_active ACTIVE Interrupt active flags
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr[4] IABR[4] Interrupt Active bit Register n
@{*/


#define NVIC_IABR[4]_ACTIVE_SHIFT		0
#define NVIC_IABR[4]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr[4]_active ACTIVE Interrupt active flags
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr[5] IABR[5] Interrupt Active bit Register n
@{*/


#define NVIC_IABR[5]_ACTIVE_SHIFT		0
#define NVIC_IABR[5]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr[5]_active ACTIVE Interrupt active flags
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr[6] IABR[6] Interrupt Active bit Register n
@{*/


#define NVIC_IABR[6]_ACTIVE_SHIFT		0
#define NVIC_IABR[6]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr[6]_active ACTIVE Interrupt active flags
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_iabr[7] IABR[7] Interrupt Active bit Register n
@{*/


#define NVIC_IABR[7]_ACTIVE_SHIFT		0
#define NVIC_IABR[7]_ACTIVE_MASK		0xffffffff
/** @defgroup nvic_iabr[7]_active ACTIVE Interrupt active flags
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[0] IP[0] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[0]_PRI0_SHIFT		0
#define NVIC_IP[0]_PRI0_MASK		0xff
/** @defgroup nvic_ip[0]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[1] IP[1] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[1]_PRI0_SHIFT		0
#define NVIC_IP[1]_PRI0_MASK		0xff
/** @defgroup nvic_ip[1]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[2] IP[2] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[2]_PRI0_SHIFT		0
#define NVIC_IP[2]_PRI0_MASK		0xff
/** @defgroup nvic_ip[2]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[3] IP[3] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[3]_PRI0_SHIFT		0
#define NVIC_IP[3]_PRI0_MASK		0xff
/** @defgroup nvic_ip[3]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[4] IP[4] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[4]_PRI0_SHIFT		0
#define NVIC_IP[4]_PRI0_MASK		0xff
/** @defgroup nvic_ip[4]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[5] IP[5] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[5]_PRI0_SHIFT		0
#define NVIC_IP[5]_PRI0_MASK		0xff
/** @defgroup nvic_ip[5]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[6] IP[6] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[6]_PRI0_SHIFT		0
#define NVIC_IP[6]_PRI0_MASK		0xff
/** @defgroup nvic_ip[6]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[7] IP[7] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[7]_PRI0_SHIFT		0
#define NVIC_IP[7]_PRI0_MASK		0xff
/** @defgroup nvic_ip[7]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[8] IP[8] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[8]_PRI0_SHIFT		0
#define NVIC_IP[8]_PRI0_MASK		0xff
/** @defgroup nvic_ip[8]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[9] IP[9] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[9]_PRI0_SHIFT		0
#define NVIC_IP[9]_PRI0_MASK		0xff
/** @defgroup nvic_ip[9]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[10] IP[10] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[10]_PRI0_SHIFT		0
#define NVIC_IP[10]_PRI0_MASK		0xff
/** @defgroup nvic_ip[10]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[11] IP[11] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[11]_PRI0_SHIFT		0
#define NVIC_IP[11]_PRI0_MASK		0xff
/** @defgroup nvic_ip[11]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[12] IP[12] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[12]_PRI0_SHIFT		0
#define NVIC_IP[12]_PRI0_MASK		0xff
/** @defgroup nvic_ip[12]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[13] IP[13] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[13]_PRI0_SHIFT		0
#define NVIC_IP[13]_PRI0_MASK		0xff
/** @defgroup nvic_ip[13]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[14] IP[14] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[14]_PRI0_SHIFT		0
#define NVIC_IP[14]_PRI0_MASK		0xff
/** @defgroup nvic_ip[14]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[15] IP[15] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[15]_PRI0_SHIFT		0
#define NVIC_IP[15]_PRI0_MASK		0xff
/** @defgroup nvic_ip[15]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[16] IP[16] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[16]_PRI0_SHIFT		0
#define NVIC_IP[16]_PRI0_MASK		0xff
/** @defgroup nvic_ip[16]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[17] IP[17] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[17]_PRI0_SHIFT		0
#define NVIC_IP[17]_PRI0_MASK		0xff
/** @defgroup nvic_ip[17]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[18] IP[18] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[18]_PRI0_SHIFT		0
#define NVIC_IP[18]_PRI0_MASK		0xff
/** @defgroup nvic_ip[18]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[19] IP[19] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[19]_PRI0_SHIFT		0
#define NVIC_IP[19]_PRI0_MASK		0xff
/** @defgroup nvic_ip[19]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[20] IP[20] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[20]_PRI0_SHIFT		0
#define NVIC_IP[20]_PRI0_MASK		0xff
/** @defgroup nvic_ip[20]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[21] IP[21] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[21]_PRI0_SHIFT		0
#define NVIC_IP[21]_PRI0_MASK		0xff
/** @defgroup nvic_ip[21]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[22] IP[22] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[22]_PRI0_SHIFT		0
#define NVIC_IP[22]_PRI0_MASK		0xff
/** @defgroup nvic_ip[22]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[23] IP[23] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[23]_PRI0_SHIFT		0
#define NVIC_IP[23]_PRI0_MASK		0xff
/** @defgroup nvic_ip[23]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[24] IP[24] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[24]_PRI0_SHIFT		0
#define NVIC_IP[24]_PRI0_MASK		0xff
/** @defgroup nvic_ip[24]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[25] IP[25] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[25]_PRI0_SHIFT		0
#define NVIC_IP[25]_PRI0_MASK		0xff
/** @defgroup nvic_ip[25]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[26] IP[26] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[26]_PRI0_SHIFT		0
#define NVIC_IP[26]_PRI0_MASK		0xff
/** @defgroup nvic_ip[26]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[27] IP[27] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[27]_PRI0_SHIFT		0
#define NVIC_IP[27]_PRI0_MASK		0xff
/** @defgroup nvic_ip[27]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[28] IP[28] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[28]_PRI0_SHIFT		0
#define NVIC_IP[28]_PRI0_MASK		0xff
/** @defgroup nvic_ip[28]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[29] IP[29] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[29]_PRI0_SHIFT		0
#define NVIC_IP[29]_PRI0_MASK		0xff
/** @defgroup nvic_ip[29]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[30] IP[30] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[30]_PRI0_SHIFT		0
#define NVIC_IP[30]_PRI0_MASK		0xff
/** @defgroup nvic_ip[30]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[31] IP[31] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[31]_PRI0_SHIFT		0
#define NVIC_IP[31]_PRI0_MASK		0xff
/** @defgroup nvic_ip[31]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[32] IP[32] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[32]_PRI0_SHIFT		0
#define NVIC_IP[32]_PRI0_MASK		0xff
/** @defgroup nvic_ip[32]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[33] IP[33] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[33]_PRI0_SHIFT		0
#define NVIC_IP[33]_PRI0_MASK		0xff
/** @defgroup nvic_ip[33]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[34] IP[34] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[34]_PRI0_SHIFT		0
#define NVIC_IP[34]_PRI0_MASK		0xff
/** @defgroup nvic_ip[34]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[35] IP[35] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[35]_PRI0_SHIFT		0
#define NVIC_IP[35]_PRI0_MASK		0xff
/** @defgroup nvic_ip[35]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[36] IP[36] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[36]_PRI0_SHIFT		0
#define NVIC_IP[36]_PRI0_MASK		0xff
/** @defgroup nvic_ip[36]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[37] IP[37] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[37]_PRI0_SHIFT		0
#define NVIC_IP[37]_PRI0_MASK		0xff
/** @defgroup nvic_ip[37]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[38] IP[38] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[38]_PRI0_SHIFT		0
#define NVIC_IP[38]_PRI0_MASK		0xff
/** @defgroup nvic_ip[38]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[39] IP[39] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[39]_PRI0_SHIFT		0
#define NVIC_IP[39]_PRI0_MASK		0xff
/** @defgroup nvic_ip[39]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[40] IP[40] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[40]_PRI0_SHIFT		0
#define NVIC_IP[40]_PRI0_MASK		0xff
/** @defgroup nvic_ip[40]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[41] IP[41] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[41]_PRI0_SHIFT		0
#define NVIC_IP[41]_PRI0_MASK		0xff
/** @defgroup nvic_ip[41]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[42] IP[42] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[42]_PRI0_SHIFT		0
#define NVIC_IP[42]_PRI0_MASK		0xff
/** @defgroup nvic_ip[42]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[43] IP[43] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[43]_PRI0_SHIFT		0
#define NVIC_IP[43]_PRI0_MASK		0xff
/** @defgroup nvic_ip[43]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[44] IP[44] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[44]_PRI0_SHIFT		0
#define NVIC_IP[44]_PRI0_MASK		0xff
/** @defgroup nvic_ip[44]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[45] IP[45] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[45]_PRI0_SHIFT		0
#define NVIC_IP[45]_PRI0_MASK		0xff
/** @defgroup nvic_ip[45]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[46] IP[46] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[46]_PRI0_SHIFT		0
#define NVIC_IP[46]_PRI0_MASK		0xff
/** @defgroup nvic_ip[46]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[47] IP[47] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[47]_PRI0_SHIFT		0
#define NVIC_IP[47]_PRI0_MASK		0xff
/** @defgroup nvic_ip[47]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[48] IP[48] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[48]_PRI0_SHIFT		0
#define NVIC_IP[48]_PRI0_MASK		0xff
/** @defgroup nvic_ip[48]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[49] IP[49] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[49]_PRI0_SHIFT		0
#define NVIC_IP[49]_PRI0_MASK		0xff
/** @defgroup nvic_ip[49]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[50] IP[50] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[50]_PRI0_SHIFT		0
#define NVIC_IP[50]_PRI0_MASK		0xff
/** @defgroup nvic_ip[50]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[51] IP[51] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[51]_PRI0_SHIFT		0
#define NVIC_IP[51]_PRI0_MASK		0xff
/** @defgroup nvic_ip[51]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[52] IP[52] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[52]_PRI0_SHIFT		0
#define NVIC_IP[52]_PRI0_MASK		0xff
/** @defgroup nvic_ip[52]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[53] IP[53] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[53]_PRI0_SHIFT		0
#define NVIC_IP[53]_PRI0_MASK		0xff
/** @defgroup nvic_ip[53]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[54] IP[54] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[54]_PRI0_SHIFT		0
#define NVIC_IP[54]_PRI0_MASK		0xff
/** @defgroup nvic_ip[54]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[55] IP[55] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[55]_PRI0_SHIFT		0
#define NVIC_IP[55]_PRI0_MASK		0xff
/** @defgroup nvic_ip[55]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[56] IP[56] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[56]_PRI0_SHIFT		0
#define NVIC_IP[56]_PRI0_MASK		0xff
/** @defgroup nvic_ip[56]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[57] IP[57] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[57]_PRI0_SHIFT		0
#define NVIC_IP[57]_PRI0_MASK		0xff
/** @defgroup nvic_ip[57]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[58] IP[58] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[58]_PRI0_SHIFT		0
#define NVIC_IP[58]_PRI0_MASK		0xff
/** @defgroup nvic_ip[58]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[59] IP[59] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[59]_PRI0_SHIFT		0
#define NVIC_IP[59]_PRI0_MASK		0xff
/** @defgroup nvic_ip[59]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[60] IP[60] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[60]_PRI0_SHIFT		0
#define NVIC_IP[60]_PRI0_MASK		0xff
/** @defgroup nvic_ip[60]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[61] IP[61] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[61]_PRI0_SHIFT		0
#define NVIC_IP[61]_PRI0_MASK		0xff
/** @defgroup nvic_ip[61]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[62] IP[62] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[62]_PRI0_SHIFT		0
#define NVIC_IP[62]_PRI0_MASK		0xff
/** @defgroup nvic_ip[62]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[63] IP[63] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[63]_PRI0_SHIFT		0
#define NVIC_IP[63]_PRI0_MASK		0xff
/** @defgroup nvic_ip[63]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[64] IP[64] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[64]_PRI0_SHIFT		0
#define NVIC_IP[64]_PRI0_MASK		0xff
/** @defgroup nvic_ip[64]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[65] IP[65] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[65]_PRI0_SHIFT		0
#define NVIC_IP[65]_PRI0_MASK		0xff
/** @defgroup nvic_ip[65]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[66] IP[66] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[66]_PRI0_SHIFT		0
#define NVIC_IP[66]_PRI0_MASK		0xff
/** @defgroup nvic_ip[66]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[67] IP[67] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[67]_PRI0_SHIFT		0
#define NVIC_IP[67]_PRI0_MASK		0xff
/** @defgroup nvic_ip[67]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[68] IP[68] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[68]_PRI0_SHIFT		0
#define NVIC_IP[68]_PRI0_MASK		0xff
/** @defgroup nvic_ip[68]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[69] IP[69] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[69]_PRI0_SHIFT		0
#define NVIC_IP[69]_PRI0_MASK		0xff
/** @defgroup nvic_ip[69]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[70] IP[70] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[70]_PRI0_SHIFT		0
#define NVIC_IP[70]_PRI0_MASK		0xff
/** @defgroup nvic_ip[70]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[71] IP[71] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[71]_PRI0_SHIFT		0
#define NVIC_IP[71]_PRI0_MASK		0xff
/** @defgroup nvic_ip[71]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[72] IP[72] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[72]_PRI0_SHIFT		0
#define NVIC_IP[72]_PRI0_MASK		0xff
/** @defgroup nvic_ip[72]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[73] IP[73] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[73]_PRI0_SHIFT		0
#define NVIC_IP[73]_PRI0_MASK		0xff
/** @defgroup nvic_ip[73]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[74] IP[74] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[74]_PRI0_SHIFT		0
#define NVIC_IP[74]_PRI0_MASK		0xff
/** @defgroup nvic_ip[74]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[75] IP[75] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[75]_PRI0_SHIFT		0
#define NVIC_IP[75]_PRI0_MASK		0xff
/** @defgroup nvic_ip[75]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[76] IP[76] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[76]_PRI0_SHIFT		0
#define NVIC_IP[76]_PRI0_MASK		0xff
/** @defgroup nvic_ip[76]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[77] IP[77] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[77]_PRI0_SHIFT		0
#define NVIC_IP[77]_PRI0_MASK		0xff
/** @defgroup nvic_ip[77]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[78] IP[78] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[78]_PRI0_SHIFT		0
#define NVIC_IP[78]_PRI0_MASK		0xff
/** @defgroup nvic_ip[78]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[79] IP[79] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[79]_PRI0_SHIFT		0
#define NVIC_IP[79]_PRI0_MASK		0xff
/** @defgroup nvic_ip[79]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[80] IP[80] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[80]_PRI0_SHIFT		0
#define NVIC_IP[80]_PRI0_MASK		0xff
/** @defgroup nvic_ip[80]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[81] IP[81] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[81]_PRI0_SHIFT		0
#define NVIC_IP[81]_PRI0_MASK		0xff
/** @defgroup nvic_ip[81]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[82] IP[82] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[82]_PRI0_SHIFT		0
#define NVIC_IP[82]_PRI0_MASK		0xff
/** @defgroup nvic_ip[82]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[83] IP[83] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[83]_PRI0_SHIFT		0
#define NVIC_IP[83]_PRI0_MASK		0xff
/** @defgroup nvic_ip[83]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[84] IP[84] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[84]_PRI0_SHIFT		0
#define NVIC_IP[84]_PRI0_MASK		0xff
/** @defgroup nvic_ip[84]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[85] IP[85] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[85]_PRI0_SHIFT		0
#define NVIC_IP[85]_PRI0_MASK		0xff
/** @defgroup nvic_ip[85]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[86] IP[86] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[86]_PRI0_SHIFT		0
#define NVIC_IP[86]_PRI0_MASK		0xff
/** @defgroup nvic_ip[86]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[87] IP[87] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[87]_PRI0_SHIFT		0
#define NVIC_IP[87]_PRI0_MASK		0xff
/** @defgroup nvic_ip[87]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[88] IP[88] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[88]_PRI0_SHIFT		0
#define NVIC_IP[88]_PRI0_MASK		0xff
/** @defgroup nvic_ip[88]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[89] IP[89] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[89]_PRI0_SHIFT		0
#define NVIC_IP[89]_PRI0_MASK		0xff
/** @defgroup nvic_ip[89]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[90] IP[90] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[90]_PRI0_SHIFT		0
#define NVIC_IP[90]_PRI0_MASK		0xff
/** @defgroup nvic_ip[90]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[91] IP[91] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[91]_PRI0_SHIFT		0
#define NVIC_IP[91]_PRI0_MASK		0xff
/** @defgroup nvic_ip[91]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[92] IP[92] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[92]_PRI0_SHIFT		0
#define NVIC_IP[92]_PRI0_MASK		0xff
/** @defgroup nvic_ip[92]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[93] IP[93] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[93]_PRI0_SHIFT		0
#define NVIC_IP[93]_PRI0_MASK		0xff
/** @defgroup nvic_ip[93]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[94] IP[94] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[94]_PRI0_SHIFT		0
#define NVIC_IP[94]_PRI0_MASK		0xff
/** @defgroup nvic_ip[94]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[95] IP[95] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[95]_PRI0_SHIFT		0
#define NVIC_IP[95]_PRI0_MASK		0xff
/** @defgroup nvic_ip[95]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[96] IP[96] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[96]_PRI0_SHIFT		0
#define NVIC_IP[96]_PRI0_MASK		0xff
/** @defgroup nvic_ip[96]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[97] IP[97] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[97]_PRI0_SHIFT		0
#define NVIC_IP[97]_PRI0_MASK		0xff
/** @defgroup nvic_ip[97]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[98] IP[98] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[98]_PRI0_SHIFT		0
#define NVIC_IP[98]_PRI0_MASK		0xff
/** @defgroup nvic_ip[98]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[99] IP[99] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[99]_PRI0_SHIFT		0
#define NVIC_IP[99]_PRI0_MASK		0xff
/** @defgroup nvic_ip[99]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[100] IP[100] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[100]_PRI0_SHIFT		0
#define NVIC_IP[100]_PRI0_MASK		0xff
/** @defgroup nvic_ip[100]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[101] IP[101] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[101]_PRI0_SHIFT		0
#define NVIC_IP[101]_PRI0_MASK		0xff
/** @defgroup nvic_ip[101]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[102] IP[102] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[102]_PRI0_SHIFT		0
#define NVIC_IP[102]_PRI0_MASK		0xff
/** @defgroup nvic_ip[102]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[103] IP[103] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[103]_PRI0_SHIFT		0
#define NVIC_IP[103]_PRI0_MASK		0xff
/** @defgroup nvic_ip[103]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[104] IP[104] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[104]_PRI0_SHIFT		0
#define NVIC_IP[104]_PRI0_MASK		0xff
/** @defgroup nvic_ip[104]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[105] IP[105] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[105]_PRI0_SHIFT		0
#define NVIC_IP[105]_PRI0_MASK		0xff
/** @defgroup nvic_ip[105]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[106] IP[106] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[106]_PRI0_SHIFT		0
#define NVIC_IP[106]_PRI0_MASK		0xff
/** @defgroup nvic_ip[106]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[107] IP[107] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[107]_PRI0_SHIFT		0
#define NVIC_IP[107]_PRI0_MASK		0xff
/** @defgroup nvic_ip[107]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[108] IP[108] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[108]_PRI0_SHIFT		0
#define NVIC_IP[108]_PRI0_MASK		0xff
/** @defgroup nvic_ip[108]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[109] IP[109] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[109]_PRI0_SHIFT		0
#define NVIC_IP[109]_PRI0_MASK		0xff
/** @defgroup nvic_ip[109]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[110] IP[110] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[110]_PRI0_SHIFT		0
#define NVIC_IP[110]_PRI0_MASK		0xff
/** @defgroup nvic_ip[110]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[111] IP[111] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[111]_PRI0_SHIFT		0
#define NVIC_IP[111]_PRI0_MASK		0xff
/** @defgroup nvic_ip[111]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[112] IP[112] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[112]_PRI0_SHIFT		0
#define NVIC_IP[112]_PRI0_MASK		0xff
/** @defgroup nvic_ip[112]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[113] IP[113] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[113]_PRI0_SHIFT		0
#define NVIC_IP[113]_PRI0_MASK		0xff
/** @defgroup nvic_ip[113]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[114] IP[114] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[114]_PRI0_SHIFT		0
#define NVIC_IP[114]_PRI0_MASK		0xff
/** @defgroup nvic_ip[114]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[115] IP[115] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[115]_PRI0_SHIFT		0
#define NVIC_IP[115]_PRI0_MASK		0xff
/** @defgroup nvic_ip[115]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[116] IP[116] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[116]_PRI0_SHIFT		0
#define NVIC_IP[116]_PRI0_MASK		0xff
/** @defgroup nvic_ip[116]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[117] IP[117] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[117]_PRI0_SHIFT		0
#define NVIC_IP[117]_PRI0_MASK		0xff
/** @defgroup nvic_ip[117]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[118] IP[118] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[118]_PRI0_SHIFT		0
#define NVIC_IP[118]_PRI0_MASK		0xff
/** @defgroup nvic_ip[118]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[119] IP[119] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[119]_PRI0_SHIFT		0
#define NVIC_IP[119]_PRI0_MASK		0xff
/** @defgroup nvic_ip[119]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[120] IP[120] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[120]_PRI0_SHIFT		0
#define NVIC_IP[120]_PRI0_MASK		0xff
/** @defgroup nvic_ip[120]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[121] IP[121] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[121]_PRI0_SHIFT		0
#define NVIC_IP[121]_PRI0_MASK		0xff
/** @defgroup nvic_ip[121]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[122] IP[122] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[122]_PRI0_SHIFT		0
#define NVIC_IP[122]_PRI0_MASK		0xff
/** @defgroup nvic_ip[122]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[123] IP[123] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[123]_PRI0_SHIFT		0
#define NVIC_IP[123]_PRI0_MASK		0xff
/** @defgroup nvic_ip[123]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[124] IP[124] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[124]_PRI0_SHIFT		0
#define NVIC_IP[124]_PRI0_MASK		0xff
/** @defgroup nvic_ip[124]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[125] IP[125] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[125]_PRI0_SHIFT		0
#define NVIC_IP[125]_PRI0_MASK		0xff
/** @defgroup nvic_ip[125]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[126] IP[126] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[126]_PRI0_SHIFT		0
#define NVIC_IP[126]_PRI0_MASK		0xff
/** @defgroup nvic_ip[126]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[127] IP[127] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[127]_PRI0_SHIFT		0
#define NVIC_IP[127]_PRI0_MASK		0xff
/** @defgroup nvic_ip[127]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[128] IP[128] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[128]_PRI0_SHIFT		0
#define NVIC_IP[128]_PRI0_MASK		0xff
/** @defgroup nvic_ip[128]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[129] IP[129] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[129]_PRI0_SHIFT		0
#define NVIC_IP[129]_PRI0_MASK		0xff
/** @defgroup nvic_ip[129]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[130] IP[130] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[130]_PRI0_SHIFT		0
#define NVIC_IP[130]_PRI0_MASK		0xff
/** @defgroup nvic_ip[130]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[131] IP[131] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[131]_PRI0_SHIFT		0
#define NVIC_IP[131]_PRI0_MASK		0xff
/** @defgroup nvic_ip[131]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[132] IP[132] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[132]_PRI0_SHIFT		0
#define NVIC_IP[132]_PRI0_MASK		0xff
/** @defgroup nvic_ip[132]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[133] IP[133] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[133]_PRI0_SHIFT		0
#define NVIC_IP[133]_PRI0_MASK		0xff
/** @defgroup nvic_ip[133]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[134] IP[134] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[134]_PRI0_SHIFT		0
#define NVIC_IP[134]_PRI0_MASK		0xff
/** @defgroup nvic_ip[134]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[135] IP[135] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[135]_PRI0_SHIFT		0
#define NVIC_IP[135]_PRI0_MASK		0xff
/** @defgroup nvic_ip[135]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[136] IP[136] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[136]_PRI0_SHIFT		0
#define NVIC_IP[136]_PRI0_MASK		0xff
/** @defgroup nvic_ip[136]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[137] IP[137] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[137]_PRI0_SHIFT		0
#define NVIC_IP[137]_PRI0_MASK		0xff
/** @defgroup nvic_ip[137]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[138] IP[138] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[138]_PRI0_SHIFT		0
#define NVIC_IP[138]_PRI0_MASK		0xff
/** @defgroup nvic_ip[138]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[139] IP[139] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[139]_PRI0_SHIFT		0
#define NVIC_IP[139]_PRI0_MASK		0xff
/** @defgroup nvic_ip[139]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[140] IP[140] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[140]_PRI0_SHIFT		0
#define NVIC_IP[140]_PRI0_MASK		0xff
/** @defgroup nvic_ip[140]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[141] IP[141] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[141]_PRI0_SHIFT		0
#define NVIC_IP[141]_PRI0_MASK		0xff
/** @defgroup nvic_ip[141]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[142] IP[142] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[142]_PRI0_SHIFT		0
#define NVIC_IP[142]_PRI0_MASK		0xff
/** @defgroup nvic_ip[142]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[143] IP[143] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[143]_PRI0_SHIFT		0
#define NVIC_IP[143]_PRI0_MASK		0xff
/** @defgroup nvic_ip[143]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[144] IP[144] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[144]_PRI0_SHIFT		0
#define NVIC_IP[144]_PRI0_MASK		0xff
/** @defgroup nvic_ip[144]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[145] IP[145] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[145]_PRI0_SHIFT		0
#define NVIC_IP[145]_PRI0_MASK		0xff
/** @defgroup nvic_ip[145]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[146] IP[146] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[146]_PRI0_SHIFT		0
#define NVIC_IP[146]_PRI0_MASK		0xff
/** @defgroup nvic_ip[146]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[147] IP[147] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[147]_PRI0_SHIFT		0
#define NVIC_IP[147]_PRI0_MASK		0xff
/** @defgroup nvic_ip[147]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[148] IP[148] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[148]_PRI0_SHIFT		0
#define NVIC_IP[148]_PRI0_MASK		0xff
/** @defgroup nvic_ip[148]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[149] IP[149] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[149]_PRI0_SHIFT		0
#define NVIC_IP[149]_PRI0_MASK		0xff
/** @defgroup nvic_ip[149]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[150] IP[150] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[150]_PRI0_SHIFT		0
#define NVIC_IP[150]_PRI0_MASK		0xff
/** @defgroup nvic_ip[150]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[151] IP[151] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[151]_PRI0_SHIFT		0
#define NVIC_IP[151]_PRI0_MASK		0xff
/** @defgroup nvic_ip[151]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[152] IP[152] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[152]_PRI0_SHIFT		0
#define NVIC_IP[152]_PRI0_MASK		0xff
/** @defgroup nvic_ip[152]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[153] IP[153] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[153]_PRI0_SHIFT		0
#define NVIC_IP[153]_PRI0_MASK		0xff
/** @defgroup nvic_ip[153]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[154] IP[154] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[154]_PRI0_SHIFT		0
#define NVIC_IP[154]_PRI0_MASK		0xff
/** @defgroup nvic_ip[154]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[155] IP[155] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[155]_PRI0_SHIFT		0
#define NVIC_IP[155]_PRI0_MASK		0xff
/** @defgroup nvic_ip[155]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[156] IP[156] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[156]_PRI0_SHIFT		0
#define NVIC_IP[156]_PRI0_MASK		0xff
/** @defgroup nvic_ip[156]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[157] IP[157] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[157]_PRI0_SHIFT		0
#define NVIC_IP[157]_PRI0_MASK		0xff
/** @defgroup nvic_ip[157]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[158] IP[158] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[158]_PRI0_SHIFT		0
#define NVIC_IP[158]_PRI0_MASK		0xff
/** @defgroup nvic_ip[158]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[159] IP[159] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[159]_PRI0_SHIFT		0
#define NVIC_IP[159]_PRI0_MASK		0xff
/** @defgroup nvic_ip[159]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[160] IP[160] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[160]_PRI0_SHIFT		0
#define NVIC_IP[160]_PRI0_MASK		0xff
/** @defgroup nvic_ip[160]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[161] IP[161] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[161]_PRI0_SHIFT		0
#define NVIC_IP[161]_PRI0_MASK		0xff
/** @defgroup nvic_ip[161]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[162] IP[162] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[162]_PRI0_SHIFT		0
#define NVIC_IP[162]_PRI0_MASK		0xff
/** @defgroup nvic_ip[162]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[163] IP[163] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[163]_PRI0_SHIFT		0
#define NVIC_IP[163]_PRI0_MASK		0xff
/** @defgroup nvic_ip[163]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[164] IP[164] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[164]_PRI0_SHIFT		0
#define NVIC_IP[164]_PRI0_MASK		0xff
/** @defgroup nvic_ip[164]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[165] IP[165] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[165]_PRI0_SHIFT		0
#define NVIC_IP[165]_PRI0_MASK		0xff
/** @defgroup nvic_ip[165]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[166] IP[166] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[166]_PRI0_SHIFT		0
#define NVIC_IP[166]_PRI0_MASK		0xff
/** @defgroup nvic_ip[166]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[167] IP[167] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[167]_PRI0_SHIFT		0
#define NVIC_IP[167]_PRI0_MASK		0xff
/** @defgroup nvic_ip[167]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[168] IP[168] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[168]_PRI0_SHIFT		0
#define NVIC_IP[168]_PRI0_MASK		0xff
/** @defgroup nvic_ip[168]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[169] IP[169] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[169]_PRI0_SHIFT		0
#define NVIC_IP[169]_PRI0_MASK		0xff
/** @defgroup nvic_ip[169]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[170] IP[170] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[170]_PRI0_SHIFT		0
#define NVIC_IP[170]_PRI0_MASK		0xff
/** @defgroup nvic_ip[170]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[171] IP[171] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[171]_PRI0_SHIFT		0
#define NVIC_IP[171]_PRI0_MASK		0xff
/** @defgroup nvic_ip[171]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[172] IP[172] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[172]_PRI0_SHIFT		0
#define NVIC_IP[172]_PRI0_MASK		0xff
/** @defgroup nvic_ip[172]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[173] IP[173] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[173]_PRI0_SHIFT		0
#define NVIC_IP[173]_PRI0_MASK		0xff
/** @defgroup nvic_ip[173]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[174] IP[174] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[174]_PRI0_SHIFT		0
#define NVIC_IP[174]_PRI0_MASK		0xff
/** @defgroup nvic_ip[174]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[175] IP[175] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[175]_PRI0_SHIFT		0
#define NVIC_IP[175]_PRI0_MASK		0xff
/** @defgroup nvic_ip[175]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[176] IP[176] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[176]_PRI0_SHIFT		0
#define NVIC_IP[176]_PRI0_MASK		0xff
/** @defgroup nvic_ip[176]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[177] IP[177] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[177]_PRI0_SHIFT		0
#define NVIC_IP[177]_PRI0_MASK		0xff
/** @defgroup nvic_ip[177]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[178] IP[178] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[178]_PRI0_SHIFT		0
#define NVIC_IP[178]_PRI0_MASK		0xff
/** @defgroup nvic_ip[178]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[179] IP[179] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[179]_PRI0_SHIFT		0
#define NVIC_IP[179]_PRI0_MASK		0xff
/** @defgroup nvic_ip[179]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[180] IP[180] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[180]_PRI0_SHIFT		0
#define NVIC_IP[180]_PRI0_MASK		0xff
/** @defgroup nvic_ip[180]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[181] IP[181] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[181]_PRI0_SHIFT		0
#define NVIC_IP[181]_PRI0_MASK		0xff
/** @defgroup nvic_ip[181]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[182] IP[182] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[182]_PRI0_SHIFT		0
#define NVIC_IP[182]_PRI0_MASK		0xff
/** @defgroup nvic_ip[182]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[183] IP[183] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[183]_PRI0_SHIFT		0
#define NVIC_IP[183]_PRI0_MASK		0xff
/** @defgroup nvic_ip[183]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[184] IP[184] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[184]_PRI0_SHIFT		0
#define NVIC_IP[184]_PRI0_MASK		0xff
/** @defgroup nvic_ip[184]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[185] IP[185] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[185]_PRI0_SHIFT		0
#define NVIC_IP[185]_PRI0_MASK		0xff
/** @defgroup nvic_ip[185]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[186] IP[186] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[186]_PRI0_SHIFT		0
#define NVIC_IP[186]_PRI0_MASK		0xff
/** @defgroup nvic_ip[186]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[187] IP[187] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[187]_PRI0_SHIFT		0
#define NVIC_IP[187]_PRI0_MASK		0xff
/** @defgroup nvic_ip[187]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[188] IP[188] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[188]_PRI0_SHIFT		0
#define NVIC_IP[188]_PRI0_MASK		0xff
/** @defgroup nvic_ip[188]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[189] IP[189] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[189]_PRI0_SHIFT		0
#define NVIC_IP[189]_PRI0_MASK		0xff
/** @defgroup nvic_ip[189]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[190] IP[190] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[190]_PRI0_SHIFT		0
#define NVIC_IP[190]_PRI0_MASK		0xff
/** @defgroup nvic_ip[190]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[191] IP[191] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[191]_PRI0_SHIFT		0
#define NVIC_IP[191]_PRI0_MASK		0xff
/** @defgroup nvic_ip[191]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[192] IP[192] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[192]_PRI0_SHIFT		0
#define NVIC_IP[192]_PRI0_MASK		0xff
/** @defgroup nvic_ip[192]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[193] IP[193] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[193]_PRI0_SHIFT		0
#define NVIC_IP[193]_PRI0_MASK		0xff
/** @defgroup nvic_ip[193]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[194] IP[194] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[194]_PRI0_SHIFT		0
#define NVIC_IP[194]_PRI0_MASK		0xff
/** @defgroup nvic_ip[194]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[195] IP[195] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[195]_PRI0_SHIFT		0
#define NVIC_IP[195]_PRI0_MASK		0xff
/** @defgroup nvic_ip[195]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[196] IP[196] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[196]_PRI0_SHIFT		0
#define NVIC_IP[196]_PRI0_MASK		0xff
/** @defgroup nvic_ip[196]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[197] IP[197] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[197]_PRI0_SHIFT		0
#define NVIC_IP[197]_PRI0_MASK		0xff
/** @defgroup nvic_ip[197]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[198] IP[198] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[198]_PRI0_SHIFT		0
#define NVIC_IP[198]_PRI0_MASK		0xff
/** @defgroup nvic_ip[198]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[199] IP[199] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[199]_PRI0_SHIFT		0
#define NVIC_IP[199]_PRI0_MASK		0xff
/** @defgroup nvic_ip[199]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[200] IP[200] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[200]_PRI0_SHIFT		0
#define NVIC_IP[200]_PRI0_MASK		0xff
/** @defgroup nvic_ip[200]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[201] IP[201] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[201]_PRI0_SHIFT		0
#define NVIC_IP[201]_PRI0_MASK		0xff
/** @defgroup nvic_ip[201]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[202] IP[202] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[202]_PRI0_SHIFT		0
#define NVIC_IP[202]_PRI0_MASK		0xff
/** @defgroup nvic_ip[202]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[203] IP[203] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[203]_PRI0_SHIFT		0
#define NVIC_IP[203]_PRI0_MASK		0xff
/** @defgroup nvic_ip[203]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[204] IP[204] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[204]_PRI0_SHIFT		0
#define NVIC_IP[204]_PRI0_MASK		0xff
/** @defgroup nvic_ip[204]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[205] IP[205] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[205]_PRI0_SHIFT		0
#define NVIC_IP[205]_PRI0_MASK		0xff
/** @defgroup nvic_ip[205]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[206] IP[206] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[206]_PRI0_SHIFT		0
#define NVIC_IP[206]_PRI0_MASK		0xff
/** @defgroup nvic_ip[206]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[207] IP[207] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[207]_PRI0_SHIFT		0
#define NVIC_IP[207]_PRI0_MASK		0xff
/** @defgroup nvic_ip[207]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[208] IP[208] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[208]_PRI0_SHIFT		0
#define NVIC_IP[208]_PRI0_MASK		0xff
/** @defgroup nvic_ip[208]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[209] IP[209] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[209]_PRI0_SHIFT		0
#define NVIC_IP[209]_PRI0_MASK		0xff
/** @defgroup nvic_ip[209]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[210] IP[210] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[210]_PRI0_SHIFT		0
#define NVIC_IP[210]_PRI0_MASK		0xff
/** @defgroup nvic_ip[210]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[211] IP[211] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[211]_PRI0_SHIFT		0
#define NVIC_IP[211]_PRI0_MASK		0xff
/** @defgroup nvic_ip[211]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[212] IP[212] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[212]_PRI0_SHIFT		0
#define NVIC_IP[212]_PRI0_MASK		0xff
/** @defgroup nvic_ip[212]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[213] IP[213] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[213]_PRI0_SHIFT		0
#define NVIC_IP[213]_PRI0_MASK		0xff
/** @defgroup nvic_ip[213]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[214] IP[214] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[214]_PRI0_SHIFT		0
#define NVIC_IP[214]_PRI0_MASK		0xff
/** @defgroup nvic_ip[214]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[215] IP[215] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[215]_PRI0_SHIFT		0
#define NVIC_IP[215]_PRI0_MASK		0xff
/** @defgroup nvic_ip[215]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[216] IP[216] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[216]_PRI0_SHIFT		0
#define NVIC_IP[216]_PRI0_MASK		0xff
/** @defgroup nvic_ip[216]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[217] IP[217] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[217]_PRI0_SHIFT		0
#define NVIC_IP[217]_PRI0_MASK		0xff
/** @defgroup nvic_ip[217]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[218] IP[218] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[218]_PRI0_SHIFT		0
#define NVIC_IP[218]_PRI0_MASK		0xff
/** @defgroup nvic_ip[218]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[219] IP[219] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[219]_PRI0_SHIFT		0
#define NVIC_IP[219]_PRI0_MASK		0xff
/** @defgroup nvic_ip[219]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[220] IP[220] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[220]_PRI0_SHIFT		0
#define NVIC_IP[220]_PRI0_MASK		0xff
/** @defgroup nvic_ip[220]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[221] IP[221] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[221]_PRI0_SHIFT		0
#define NVIC_IP[221]_PRI0_MASK		0xff
/** @defgroup nvic_ip[221]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[222] IP[222] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[222]_PRI0_SHIFT		0
#define NVIC_IP[222]_PRI0_MASK		0xff
/** @defgroup nvic_ip[222]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[223] IP[223] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[223]_PRI0_SHIFT		0
#define NVIC_IP[223]_PRI0_MASK		0xff
/** @defgroup nvic_ip[223]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[224] IP[224] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[224]_PRI0_SHIFT		0
#define NVIC_IP[224]_PRI0_MASK		0xff
/** @defgroup nvic_ip[224]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[225] IP[225] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[225]_PRI0_SHIFT		0
#define NVIC_IP[225]_PRI0_MASK		0xff
/** @defgroup nvic_ip[225]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[226] IP[226] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[226]_PRI0_SHIFT		0
#define NVIC_IP[226]_PRI0_MASK		0xff
/** @defgroup nvic_ip[226]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[227] IP[227] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[227]_PRI0_SHIFT		0
#define NVIC_IP[227]_PRI0_MASK		0xff
/** @defgroup nvic_ip[227]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[228] IP[228] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[228]_PRI0_SHIFT		0
#define NVIC_IP[228]_PRI0_MASK		0xff
/** @defgroup nvic_ip[228]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[229] IP[229] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[229]_PRI0_SHIFT		0
#define NVIC_IP[229]_PRI0_MASK		0xff
/** @defgroup nvic_ip[229]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[230] IP[230] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[230]_PRI0_SHIFT		0
#define NVIC_IP[230]_PRI0_MASK		0xff
/** @defgroup nvic_ip[230]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[231] IP[231] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[231]_PRI0_SHIFT		0
#define NVIC_IP[231]_PRI0_MASK		0xff
/** @defgroup nvic_ip[231]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[232] IP[232] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[232]_PRI0_SHIFT		0
#define NVIC_IP[232]_PRI0_MASK		0xff
/** @defgroup nvic_ip[232]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[233] IP[233] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[233]_PRI0_SHIFT		0
#define NVIC_IP[233]_PRI0_MASK		0xff
/** @defgroup nvic_ip[233]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[234] IP[234] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[234]_PRI0_SHIFT		0
#define NVIC_IP[234]_PRI0_MASK		0xff
/** @defgroup nvic_ip[234]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[235] IP[235] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[235]_PRI0_SHIFT		0
#define NVIC_IP[235]_PRI0_MASK		0xff
/** @defgroup nvic_ip[235]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[236] IP[236] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[236]_PRI0_SHIFT		0
#define NVIC_IP[236]_PRI0_MASK		0xff
/** @defgroup nvic_ip[236]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[237] IP[237] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[237]_PRI0_SHIFT		0
#define NVIC_IP[237]_PRI0_MASK		0xff
/** @defgroup nvic_ip[237]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[238] IP[238] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[238]_PRI0_SHIFT		0
#define NVIC_IP[238]_PRI0_MASK		0xff
/** @defgroup nvic_ip[238]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_ip[239] IP[239] Interrupt Priority Register (8Bit wide) n
@{*/


#define NVIC_IP[239]_PRI0_SHIFT		0
#define NVIC_IP[239]_PRI0_MASK		0xff
/** @defgroup nvic_ip[239]_pri0 PRI0 Priority of interrupt 0
@{*/
/**@}*/


/**@}*/

/** @defgroup nvic_stir STIR Software Trigger Interrupt Register
@{*/


#define NVIC_STIR_INTID_SHIFT		0
#define NVIC_STIR_INTID_MASK		0x1ff
/** @defgroup nvic_stir_intid INTID Interrupt ID of the interrupt to trigger, in the range 0-239. For example, a value of 0x03 specifies interrupt IRQ3.
@{*/
/**@}*/


/**@}*/

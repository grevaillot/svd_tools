#pragma once 

/* --- ITM: Instrumentation Trace Macrocell ------------------------- */

/** @defgroup itm_registers Instrumentation Trace Macrocell Register
@{*/

/** ITM_PORT_WORD_MODE[0] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[0]			MMIO32(ITM_BASE + 0x00)
/** ITM_PORT_BYTE_MODE[0] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[0]			MMIO32(ITM_BASE + 0x00)
/** ITM_PORT_HWORD_MODE[0] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[0]			MMIO32(ITM_BASE + 0x00)
/** ITM_PORT_WORD_MODE[1] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[1]			MMIO32(ITM_BASE + 0x04)
/** ITM_PORT_BYTE_MODE[1] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[1]			MMIO32(ITM_BASE + 0x04)
/** ITM_PORT_HWORD_MODE[1] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[1]			MMIO32(ITM_BASE + 0x04)
/** ITM_PORT_WORD_MODE[2] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[2]			MMIO32(ITM_BASE + 0x08)
/** ITM_PORT_BYTE_MODE[2] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[2]			MMIO32(ITM_BASE + 0x08)
/** ITM_PORT_HWORD_MODE[2] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[2]			MMIO32(ITM_BASE + 0x08)
/** ITM_PORT_WORD_MODE[3] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[3]			MMIO32(ITM_BASE + 0x0c)
/** ITM_PORT_BYTE_MODE[3] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[3]			MMIO32(ITM_BASE + 0x0c)
/** ITM_PORT_HWORD_MODE[3] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[3]			MMIO32(ITM_BASE + 0x0c)
/** ITM_PORT_WORD_MODE[4] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[4]			MMIO32(ITM_BASE + 0x10)
/** ITM_PORT_BYTE_MODE[4] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[4]			MMIO32(ITM_BASE + 0x10)
/** ITM_PORT_HWORD_MODE[4] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[4]			MMIO32(ITM_BASE + 0x10)
/** ITM_PORT_WORD_MODE[5] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[5]			MMIO32(ITM_BASE + 0x14)
/** ITM_PORT_BYTE_MODE[5] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[5]			MMIO32(ITM_BASE + 0x14)
/** ITM_PORT_HWORD_MODE[5] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[5]			MMIO32(ITM_BASE + 0x14)
/** ITM_PORT_WORD_MODE[6] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[6]			MMIO32(ITM_BASE + 0x18)
/** ITM_PORT_BYTE_MODE[6] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[6]			MMIO32(ITM_BASE + 0x18)
/** ITM_PORT_HWORD_MODE[6] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[6]			MMIO32(ITM_BASE + 0x18)
/** ITM_PORT_WORD_MODE[7] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[7]			MMIO32(ITM_BASE + 0x1c)
/** ITM_PORT_BYTE_MODE[7] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[7]			MMIO32(ITM_BASE + 0x1c)
/** ITM_PORT_HWORD_MODE[7] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[7]			MMIO32(ITM_BASE + 0x1c)
/** ITM_PORT_WORD_MODE[8] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[8]			MMIO32(ITM_BASE + 0x20)
/** ITM_PORT_BYTE_MODE[8] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[8]			MMIO32(ITM_BASE + 0x20)
/** ITM_PORT_HWORD_MODE[8] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[8]			MMIO32(ITM_BASE + 0x20)
/** ITM_PORT_WORD_MODE[9] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[9]			MMIO32(ITM_BASE + 0x24)
/** ITM_PORT_BYTE_MODE[9] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[9]			MMIO32(ITM_BASE + 0x24)
/** ITM_PORT_HWORD_MODE[9] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[9]			MMIO32(ITM_BASE + 0x24)
/** ITM_PORT_WORD_MODE[10] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[10]			MMIO32(ITM_BASE + 0x28)
/** ITM_PORT_BYTE_MODE[10] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[10]			MMIO32(ITM_BASE + 0x28)
/** ITM_PORT_HWORD_MODE[10] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[10]			MMIO32(ITM_BASE + 0x28)
/** ITM_PORT_WORD_MODE[11] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[11]			MMIO32(ITM_BASE + 0x2c)
/** ITM_PORT_BYTE_MODE[11] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[11]			MMIO32(ITM_BASE + 0x2c)
/** ITM_PORT_HWORD_MODE[11] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[11]			MMIO32(ITM_BASE + 0x2c)
/** ITM_PORT_WORD_MODE[12] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[12]			MMIO32(ITM_BASE + 0x30)
/** ITM_PORT_BYTE_MODE[12] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[12]			MMIO32(ITM_BASE + 0x30)
/** ITM_PORT_HWORD_MODE[12] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[12]			MMIO32(ITM_BASE + 0x30)
/** ITM_PORT_WORD_MODE[13] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[13]			MMIO32(ITM_BASE + 0x34)
/** ITM_PORT_BYTE_MODE[13] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[13]			MMIO32(ITM_BASE + 0x34)
/** ITM_PORT_HWORD_MODE[13] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[13]			MMIO32(ITM_BASE + 0x34)
/** ITM_PORT_WORD_MODE[14] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[14]			MMIO32(ITM_BASE + 0x38)
/** ITM_PORT_BYTE_MODE[14] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[14]			MMIO32(ITM_BASE + 0x38)
/** ITM_PORT_HWORD_MODE[14] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[14]			MMIO32(ITM_BASE + 0x38)
/** ITM_PORT_WORD_MODE[15] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[15]			MMIO32(ITM_BASE + 0x3c)
/** ITM_PORT_BYTE_MODE[15] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[15]			MMIO32(ITM_BASE + 0x3c)
/** ITM_PORT_HWORD_MODE[15] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[15]			MMIO32(ITM_BASE + 0x3c)
/** ITM_PORT_WORD_MODE[16] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[16]			MMIO32(ITM_BASE + 0x40)
/** ITM_PORT_BYTE_MODE[16] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[16]			MMIO32(ITM_BASE + 0x40)
/** ITM_PORT_HWORD_MODE[16] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[16]			MMIO32(ITM_BASE + 0x40)
/** ITM_PORT_WORD_MODE[17] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[17]			MMIO32(ITM_BASE + 0x44)
/** ITM_PORT_BYTE_MODE[17] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[17]			MMIO32(ITM_BASE + 0x44)
/** ITM_PORT_HWORD_MODE[17] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[17]			MMIO32(ITM_BASE + 0x44)
/** ITM_PORT_WORD_MODE[18] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[18]			MMIO32(ITM_BASE + 0x48)
/** ITM_PORT_BYTE_MODE[18] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[18]			MMIO32(ITM_BASE + 0x48)
/** ITM_PORT_HWORD_MODE[18] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[18]			MMIO32(ITM_BASE + 0x48)
/** ITM_PORT_WORD_MODE[19] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[19]			MMIO32(ITM_BASE + 0x4c)
/** ITM_PORT_BYTE_MODE[19] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[19]			MMIO32(ITM_BASE + 0x4c)
/** ITM_PORT_HWORD_MODE[19] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[19]			MMIO32(ITM_BASE + 0x4c)
/** ITM_PORT_WORD_MODE[20] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[20]			MMIO32(ITM_BASE + 0x50)
/** ITM_PORT_BYTE_MODE[20] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[20]			MMIO32(ITM_BASE + 0x50)
/** ITM_PORT_HWORD_MODE[20] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[20]			MMIO32(ITM_BASE + 0x50)
/** ITM_PORT_WORD_MODE[21] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[21]			MMIO32(ITM_BASE + 0x54)
/** ITM_PORT_BYTE_MODE[21] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[21]			MMIO32(ITM_BASE + 0x54)
/** ITM_PORT_HWORD_MODE[21] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[21]			MMIO32(ITM_BASE + 0x54)
/** ITM_PORT_WORD_MODE[22] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[22]			MMIO32(ITM_BASE + 0x58)
/** ITM_PORT_BYTE_MODE[22] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[22]			MMIO32(ITM_BASE + 0x58)
/** ITM_PORT_HWORD_MODE[22] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[22]			MMIO32(ITM_BASE + 0x58)
/** ITM_PORT_WORD_MODE[23] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[23]			MMIO32(ITM_BASE + 0x5c)
/** ITM_PORT_BYTE_MODE[23] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[23]			MMIO32(ITM_BASE + 0x5c)
/** ITM_PORT_HWORD_MODE[23] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[23]			MMIO32(ITM_BASE + 0x5c)
/** ITM_PORT_WORD_MODE[24] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[24]			MMIO32(ITM_BASE + 0x60)
/** ITM_PORT_BYTE_MODE[24] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[24]			MMIO32(ITM_BASE + 0x60)
/** ITM_PORT_HWORD_MODE[24] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[24]			MMIO32(ITM_BASE + 0x60)
/** ITM_PORT_WORD_MODE[25] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[25]			MMIO32(ITM_BASE + 0x64)
/** ITM_PORT_BYTE_MODE[25] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[25]			MMIO32(ITM_BASE + 0x64)
/** ITM_PORT_HWORD_MODE[25] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[25]			MMIO32(ITM_BASE + 0x64)
/** ITM_PORT_WORD_MODE[26] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[26]			MMIO32(ITM_BASE + 0x68)
/** ITM_PORT_BYTE_MODE[26] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[26]			MMIO32(ITM_BASE + 0x68)
/** ITM_PORT_HWORD_MODE[26] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[26]			MMIO32(ITM_BASE + 0x68)
/** ITM_PORT_WORD_MODE[27] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[27]			MMIO32(ITM_BASE + 0x6c)
/** ITM_PORT_BYTE_MODE[27] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[27]			MMIO32(ITM_BASE + 0x6c)
/** ITM_PORT_HWORD_MODE[27] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[27]			MMIO32(ITM_BASE + 0x6c)
/** ITM_PORT_WORD_MODE[28] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[28]			MMIO32(ITM_BASE + 0x70)
/** ITM_PORT_BYTE_MODE[28] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[28]			MMIO32(ITM_BASE + 0x70)
/** ITM_PORT_HWORD_MODE[28] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[28]			MMIO32(ITM_BASE + 0x70)
/** ITM_PORT_WORD_MODE[29] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[29]			MMIO32(ITM_BASE + 0x74)
/** ITM_PORT_BYTE_MODE[29] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[29]			MMIO32(ITM_BASE + 0x74)
/** ITM_PORT_HWORD_MODE[29] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[29]			MMIO32(ITM_BASE + 0x74)
/** ITM_PORT_WORD_MODE[30] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[30]			MMIO32(ITM_BASE + 0x78)
/** ITM_PORT_BYTE_MODE[30] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[30]			MMIO32(ITM_BASE + 0x78)
/** ITM_PORT_HWORD_MODE[30] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[30]			MMIO32(ITM_BASE + 0x78)
/** ITM_PORT_WORD_MODE[31] ITM Stimulus Port Registers **/
#define ITM_PORT_WORD_MODE[31]			MMIO32(ITM_BASE + 0x7c)
/** ITM_PORT_BYTE_MODE[31] ITM Stimulus Port Registers **/
#define ITM_PORT_BYTE_MODE[31]			MMIO32(ITM_BASE + 0x7c)
/** ITM_PORT_HWORD_MODE[31] ITM Stimulus Port Registers **/
#define ITM_PORT_HWORD_MODE[31]			MMIO32(ITM_BASE + 0x7c)
/** ITM_TER ITM Trace Enable Register **/
#define ITM_TER			MMIO32(ITM_BASE + 0xe00)
/** ITM_TPR ITM Trace Privilege Register **/
#define ITM_TPR			MMIO32(ITM_BASE + 0xe40)
/** ITM_TCR ITM Trace Control Register **/
#define ITM_TCR			MMIO32(ITM_BASE + 0xe80)
/** ITM_IWR ITM Integration Write Register **/
#define ITM_IWR			MMIO32(ITM_BASE + 0xef8)
/** ITM_IRR ITM Integration Read Register **/
#define ITM_IRR			MMIO32(ITM_BASE + 0xefc)

/**@}*/


/** @defgroup itm_port_word_mode[0] PORTWORDMODE[0] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[0]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[0]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[0]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[0] PORTBYTEMODE[0] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[0]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[0]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[0]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[0] PORTHWORDMODE[0] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[0]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[0]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[0]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[1] PORTWORDMODE[1] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[1]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[1]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[1]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[1] PORTBYTEMODE[1] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[1]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[1]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[1]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[1] PORTHWORDMODE[1] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[1]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[1]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[1]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[2] PORTWORDMODE[2] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[2]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[2]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[2]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[2] PORTBYTEMODE[2] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[2]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[2]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[2]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[2] PORTHWORDMODE[2] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[2]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[2]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[2]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[3] PORTWORDMODE[3] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[3]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[3]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[3]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[3] PORTBYTEMODE[3] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[3]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[3]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[3]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[3] PORTHWORDMODE[3] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[3]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[3]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[3]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[4] PORTWORDMODE[4] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[4]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[4]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[4]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[4] PORTBYTEMODE[4] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[4]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[4]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[4]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[4] PORTHWORDMODE[4] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[4]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[4]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[4]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[5] PORTWORDMODE[5] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[5]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[5]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[5]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[5] PORTBYTEMODE[5] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[5]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[5]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[5]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[5] PORTHWORDMODE[5] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[5]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[5]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[5]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[6] PORTWORDMODE[6] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[6]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[6]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[6]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[6] PORTBYTEMODE[6] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[6]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[6]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[6]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[6] PORTHWORDMODE[6] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[6]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[6]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[6]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[7] PORTWORDMODE[7] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[7]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[7]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[7]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[7] PORTBYTEMODE[7] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[7]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[7]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[7]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[7] PORTHWORDMODE[7] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[7]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[7]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[7]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[8] PORTWORDMODE[8] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[8]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[8]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[8]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[8] PORTBYTEMODE[8] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[8]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[8]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[8]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[8] PORTHWORDMODE[8] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[8]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[8]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[8]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[9] PORTWORDMODE[9] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[9]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[9]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[9]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[9] PORTBYTEMODE[9] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[9]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[9]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[9]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[9] PORTHWORDMODE[9] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[9]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[9]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[9]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[10] PORTWORDMODE[10] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[10]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[10]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[10]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[10] PORTBYTEMODE[10] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[10]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[10]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[10]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[10] PORTHWORDMODE[10] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[10]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[10]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[10]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[11] PORTWORDMODE[11] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[11]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[11]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[11]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[11] PORTBYTEMODE[11] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[11]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[11]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[11]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[11] PORTHWORDMODE[11] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[11]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[11]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[11]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[12] PORTWORDMODE[12] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[12]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[12]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[12]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[12] PORTBYTEMODE[12] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[12]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[12]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[12]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[12] PORTHWORDMODE[12] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[12]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[12]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[12]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[13] PORTWORDMODE[13] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[13]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[13]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[13]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[13] PORTBYTEMODE[13] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[13]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[13]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[13]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[13] PORTHWORDMODE[13] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[13]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[13]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[13]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[14] PORTWORDMODE[14] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[14]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[14]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[14]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[14] PORTBYTEMODE[14] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[14]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[14]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[14]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[14] PORTHWORDMODE[14] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[14]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[14]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[14]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[15] PORTWORDMODE[15] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[15]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[15]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[15]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[15] PORTBYTEMODE[15] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[15]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[15]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[15]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[15] PORTHWORDMODE[15] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[15]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[15]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[15]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[16] PORTWORDMODE[16] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[16]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[16]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[16]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[16] PORTBYTEMODE[16] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[16]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[16]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[16]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[16] PORTHWORDMODE[16] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[16]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[16]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[16]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[17] PORTWORDMODE[17] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[17]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[17]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[17]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[17] PORTBYTEMODE[17] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[17]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[17]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[17]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[17] PORTHWORDMODE[17] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[17]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[17]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[17]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[18] PORTWORDMODE[18] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[18]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[18]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[18]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[18] PORTBYTEMODE[18] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[18]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[18]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[18]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[18] PORTHWORDMODE[18] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[18]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[18]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[18]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[19] PORTWORDMODE[19] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[19]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[19]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[19]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[19] PORTBYTEMODE[19] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[19]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[19]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[19]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[19] PORTHWORDMODE[19] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[19]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[19]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[19]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[20] PORTWORDMODE[20] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[20]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[20]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[20]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[20] PORTBYTEMODE[20] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[20]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[20]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[20]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[20] PORTHWORDMODE[20] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[20]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[20]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[20]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[21] PORTWORDMODE[21] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[21]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[21]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[21]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[21] PORTBYTEMODE[21] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[21]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[21]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[21]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[21] PORTHWORDMODE[21] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[21]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[21]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[21]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[22] PORTWORDMODE[22] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[22]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[22]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[22]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[22] PORTBYTEMODE[22] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[22]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[22]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[22]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[22] PORTHWORDMODE[22] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[22]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[22]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[22]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[23] PORTWORDMODE[23] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[23]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[23]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[23]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[23] PORTBYTEMODE[23] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[23]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[23]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[23]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[23] PORTHWORDMODE[23] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[23]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[23]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[23]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[24] PORTWORDMODE[24] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[24]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[24]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[24]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[24] PORTBYTEMODE[24] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[24]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[24]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[24]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[24] PORTHWORDMODE[24] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[24]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[24]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[24]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[25] PORTWORDMODE[25] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[25]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[25]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[25]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[25] PORTBYTEMODE[25] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[25]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[25]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[25]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[25] PORTHWORDMODE[25] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[25]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[25]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[25]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[26] PORTWORDMODE[26] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[26]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[26]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[26]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[26] PORTBYTEMODE[26] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[26]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[26]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[26]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[26] PORTHWORDMODE[26] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[26]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[26]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[26]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[27] PORTWORDMODE[27] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[27]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[27]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[27]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[27] PORTBYTEMODE[27] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[27]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[27]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[27]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[27] PORTHWORDMODE[27] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[27]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[27]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[27]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[28] PORTWORDMODE[28] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[28]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[28]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[28]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[28] PORTBYTEMODE[28] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[28]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[28]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[28]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[28] PORTHWORDMODE[28] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[28]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[28]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[28]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[29] PORTWORDMODE[29] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[29]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[29]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[29]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[29] PORTBYTEMODE[29] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[29]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[29]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[29]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[29] PORTHWORDMODE[29] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[29]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[29]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[29]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[30] PORTWORDMODE[30] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[30]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[30]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[30]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[30] PORTBYTEMODE[30] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[30]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[30]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[30]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[30] PORTHWORDMODE[30] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[30]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[30]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[30]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_word_mode[31] PORTWORDMODE[31] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_WORD_MODE[31]_PORT_SHIFT		0
#define ITM_PORT_WORD_MODE[31]_PORT_MASK		0xffffffff
/** @defgroup itm_port_word_mode[31]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_byte_mode[31] PORTBYTEMODE[31] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_BYTE_MODE[31]_PORT_SHIFT		0
#define ITM_PORT_BYTE_MODE[31]_PORT_MASK		0xff
/** @defgroup itm_port_byte_mode[31]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_port_hword_mode[31] PORTHWORDMODE[31] ITM Stimulus Port Registers
@{*/


#define ITM_PORT_HWORD_MODE[31]_PORT_SHIFT		0
#define ITM_PORT_HWORD_MODE[31]_PORT_MASK		0xffff
/** @defgroup itm_port_hword_mode[31]_port PORT 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_ter TER ITM Trace Enable Register
@{*/


/**@}*/

/** @defgroup itm_tpr TPR ITM Trace Privilege Register
@{*/


#define ITM_TPR_PRIVMASK_SHIFT		0
#define ITM_TPR_PRIVMASK_MASK		0x0f
/** @defgroup itm_tpr_privmask PRIVMASK 
@{*/
/**@}*/


/**@}*/

/** @defgroup itm_tcr TCR ITM Trace Control Register
@{*/

/** ITM_TCR_BUSY  **/
#define ITM_TCR_BUSY		(1 << 23)

#define ITM_TCR_TraceBusID_SHIFT		16
#define ITM_TCR_TraceBusID_MASK		0x7f
/** @defgroup itm_tcr_tracebusid TraceBusID 
@{*/
/**@}*/


#define ITM_TCR_GTSFREQ_SHIFT		10
#define ITM_TCR_GTSFREQ_MASK		0x03
/** @defgroup itm_tcr_gtsfreq GTSFREQ 
@{*/
/**@}*/


#define ITM_TCR_TSPrescale_SHIFT		8
#define ITM_TCR_TSPrescale_MASK		0x03
/** @defgroup itm_tcr_tsprescale TSPrescale 
@{*/
/**@}*/

/** ITM_TCR_STALLENA  **/
#define ITM_TCR_STALLENA		(1 << 5)
/** ITM_TCR_SWOENA  **/
#define ITM_TCR_SWOENA		(1 << 4)
/** ITM_TCR_DWTENA  **/
#define ITM_TCR_DWTENA		(1 << 3)
/** ITM_TCR_SYNCENA  **/
#define ITM_TCR_SYNCENA		(1 << 2)
/** ITM_TCR_TSENA  **/
#define ITM_TCR_TSENA		(1 << 1)
/** ITM_TCR_ITMENA  **/
#define ITM_TCR_ITMENA		(1 << 0)

/**@}*/

/** @defgroup itm_iwr IWR ITM Integration Write Register
@{*/

/** ITM_IWR_ATVALIDM  **/
#define ITM_IWR_ATVALIDM		(1 << 0)

/**@}*/

/** @defgroup itm_irr IRR ITM Integration Read Register
@{*/

/** ITM_IRR_ATREADYM  **/
#define ITM_IRR_ATREADYM		(1 << 0)

/**@}*/

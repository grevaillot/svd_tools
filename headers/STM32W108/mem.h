#pragma once 

/* --- MEM: Memory Control registers -------------------------------- */

/** @defgroup mem_registers Memory Control registers Register
@{*/

/** MEM_RAMPROTR1 Memory protection register1 **/
#define MEM_RAMPROTR1			MMIO32(MEM_BASE + 0x00)
/** MEM_RAMPROTR2 Memory protection register2 **/
#define MEM_RAMPROTR2			MMIO32(MEM_BASE + 0x04)
/** MEM_RAMPROTR3 Memory protection register3 **/
#define MEM_RAMPROTR3			MMIO32(MEM_BASE + 0x08)
/** MEM_RAMPROTR4 Memory protection register4 **/
#define MEM_RAMPROTR4			MMIO32(MEM_BASE + 0x0c)
/** MEM_RAMPROTR5 Memory protection register5 **/
#define MEM_RAMPROTR5			MMIO32(MEM_BASE + 0x10)
/** MEM_RAMPROTR6 Memory protection register6 **/
#define MEM_RAMPROTR6			MMIO32(MEM_BASE + 0x14)
/** MEM_RAMPROTR7 Memory protection register7 **/
#define MEM_RAMPROTR7			MMIO32(MEM_BASE + 0x18)
/** MEM_RAMPROTR8 Memory protection register8 **/
#define MEM_RAMPROTR8			MMIO32(MEM_BASE + 0x1c)
/** MEM_DMAPROTR1 DMA protection register1 **/
#define MEM_DMAPROTR1			MMIO32(MEM_BASE + 0x20)
/** MEM_DMAPROTR2 DMA protection register2 **/
#define MEM_DMAPROTR2			MMIO32(MEM_BASE + 0x24)
/** MEM_RAMCR Memory configuration register **/
#define MEM_RAMCR			MMIO32(MEM_BASE + 0x28)

/**@}*/


/** @defgroup mem_ramprotr1 RAMPROTR1 Memory protection register1
@{*/


#define MEM_RAMPROTR1_RAMPROT1_SHIFT		0
#define MEM_RAMPROTR1_RAMPROT1_MASK		0xffffffff
/** @defgroup mem_ramprotr1_ramprot1 RAMPROT1 RAMPROT1
@{*/
/**@}*/


/**@}*/

/** @defgroup mem_ramprotr2 RAMPROTR2 Memory protection register2
@{*/


#define MEM_RAMPROTR2_RAMPROT2_SHIFT		0
#define MEM_RAMPROTR2_RAMPROT2_MASK		0xffffffff
/** @defgroup mem_ramprotr2_ramprot2 RAMPROT2 RAMPROT2
@{*/
/**@}*/


/**@}*/

/** @defgroup mem_ramprotr3 RAMPROTR3 Memory protection register3
@{*/


#define MEM_RAMPROTR3_RAMPROT3_SHIFT		0
#define MEM_RAMPROTR3_RAMPROT3_MASK		0xffffffff
/** @defgroup mem_ramprotr3_ramprot3 RAMPROT3 RAMPROT1
@{*/
/**@}*/


/**@}*/

/** @defgroup mem_ramprotr4 RAMPROTR4 Memory protection register4
@{*/


#define MEM_RAMPROTR4_RAMPROT4_SHIFT		0
#define MEM_RAMPROTR4_RAMPROT4_MASK		0xffffffff
/** @defgroup mem_ramprotr4_ramprot4 RAMPROT4 RAMPROT4
@{*/
/**@}*/


/**@}*/

/** @defgroup mem_ramprotr5 RAMPROTR5 Memory protection register5
@{*/


#define MEM_RAMPROTR5_RAMPROT5_SHIFT		0
#define MEM_RAMPROTR5_RAMPROT5_MASK		0xffffffff
/** @defgroup mem_ramprotr5_ramprot5 RAMPROT5 RAMPROT5
@{*/
/**@}*/


/**@}*/

/** @defgroup mem_ramprotr6 RAMPROTR6 Memory protection register6
@{*/


#define MEM_RAMPROTR6_RAMPROT6_SHIFT		0
#define MEM_RAMPROTR6_RAMPROT6_MASK		0xffffffff
/** @defgroup mem_ramprotr6_ramprot6 RAMPROT6 RAMPROT6
@{*/
/**@}*/


/**@}*/

/** @defgroup mem_ramprotr7 RAMPROTR7 Memory protection register7
@{*/


#define MEM_RAMPROTR7_RAMPROT7_SHIFT		0
#define MEM_RAMPROTR7_RAMPROT7_MASK		0xffffffff
/** @defgroup mem_ramprotr7_ramprot7 RAMPROT7 RAMPROT7
@{*/
/**@}*/


/**@}*/

/** @defgroup mem_ramprotr8 RAMPROTR8 Memory protection register8
@{*/


#define MEM_RAMPROTR8_RAMPROT8_SHIFT		0
#define MEM_RAMPROTR8_RAMPROT8_MASK		0xffffffff
/** @defgroup mem_ramprotr8_ramprot8 RAMPROT8 RAMPROT8
@{*/
/**@}*/


/**@}*/

/** @defgroup mem_dmaprotr1 DMAPROTR1 DMA protection register1
@{*/


#define MEM_DMAPROTR1_OFFSET_SHIFT		14
#define MEM_DMAPROTR1_OFFSET_MASK		0x3ffff
/** @defgroup mem_dmaprotr1_offset OFFSET offset in RAM
@{*/
/**@}*/


#define MEM_DMAPROTR1_ADDRESS_SHIFT		0
#define MEM_DMAPROTR1_ADDRESS_MASK		0x3fff
/** @defgroup mem_dmaprotr1_address ADDRESS DMA protection fault, faulting address
@{*/
/**@}*/


/**@}*/

/** @defgroup mem_dmaprotr2 DMAPROTR2 DMA protection register2
@{*/


#define MEM_DMAPROTR2_CHANNEL_SHIFT		0
#define MEM_DMAPROTR2_CHANNEL_MASK		0x07
/** @defgroup mem_dmaprotr2_channel CHANNEL DMA protection fault, faulting channel
@{*/
/**@}*/


/**@}*/

/** @defgroup mem_ramcr RAMCR Memory configuration register
@{*/

/** MEM_RAMCR_WEN Makes all RAM write access **/
#define MEM_RAMCR_WEN		(1 << 2)

/**@}*/

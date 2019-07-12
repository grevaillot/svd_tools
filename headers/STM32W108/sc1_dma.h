#pragma once 

/* --- SC1_DMA: Serial controller 1 (Direct memory access) ---------- */

/** @defgroup sc1_dma_registers Serial controller 1 (Direct memory
      access) Register
@{*/

/** SC1_DMA_SC1_DMARXBEGADDAR Serial controller receive DMA begin address channel A register **/
#define SC1_DMA_SC1_DMARXBEGADDAR			MMIO32(SC1_DMA_BASE + 0x00)
/** SC1_DMA_SC1_DMARXENDADDAR Serial controller receive DMA end address channel A register **/
#define SC1_DMA_SC1_DMARXENDADDAR			MMIO32(SC1_DMA_BASE + 0x04)
/** SC1_DMA_SC1_DMARXBEGADDBR Serial controller receive DMA begin address channel B register **/
#define SC1_DMA_SC1_DMARXBEGADDBR			MMIO32(SC1_DMA_BASE + 0x08)
/** SC1_DMA_SC1_DMARXENDADDBR Serial controller receive DMA end address channel B register **/
#define SC1_DMA_SC1_DMARXENDADDBR			MMIO32(SC1_DMA_BASE + 0x0c)
/** SC1_DMA_SC1_DMATXBEGADDAR Serial controller transmit DMA begin address channel A register **/
#define SC1_DMA_SC1_DMATXBEGADDAR			MMIO32(SC1_DMA_BASE + 0x10)
/** SC1_DMA_SC1_DMATXENDADDAR Serial controller transmit DMA end address channel A register **/
#define SC1_DMA_SC1_DMATXENDADDAR			MMIO32(SC1_DMA_BASE + 0x14)
/** SC1_DMA_SC1_DMATXBEGADDBR Serial controller transmit DMA begin address channel B register **/
#define SC1_DMA_SC1_DMATXBEGADDBR			MMIO32(SC1_DMA_BASE + 0x18)
/** SC1_DMA_SC1_DMATXENDADDBR Serial controller transmit DMA end address channel B **/
#define SC1_DMA_SC1_DMATXENDADDBR			MMIO32(SC1_DMA_BASE + 0x1c)
/** SC1_DMA_SC1_DMARXCNTAR Serial controller receive DMA counter channel A register **/
#define SC1_DMA_SC1_DMARXCNTAR			MMIO32(SC1_DMA_BASE + 0x20)
/** SC1_DMA_SC1_DMARXCNTBR Serial controller receive DMA count channel B register **/
#define SC1_DMA_SC1_DMARXCNTBR			MMIO32(SC1_DMA_BASE + 0x24)
/** SC1_DMA_SC1_DMATXCNTR Serial controller transmit DMA counter register **/
#define SC1_DMA_SC1_DMATXCNTR			MMIO32(SC1_DMA_BASE + 0x28)
/** SC1_DMA_SC1_DMASR Serial controller DMA status register **/
#define SC1_DMA_SC1_DMASR			MMIO32(SC1_DMA_BASE + 0x2c)
/** SC1_DMA_SC1_DMACR Serial controller DMA control register **/
#define SC1_DMA_SC1_DMACR			MMIO32(SC1_DMA_BASE + 0x30)
/** SC1_DMA_SC1_DMARXERRAR Serial controller receive DMA channel A first error register **/
#define SC1_DMA_SC1_DMARXERRAR			MMIO32(SC1_DMA_BASE + 0x34)
/** SC1_DMA_SC1_DMARXERRBR Serial controller receive DMA channel B first error register **/
#define SC1_DMA_SC1_DMARXERRBR			MMIO32(SC1_DMA_BASE + 0x38)
/** SC1_DMA_SC1_DMARXCNTSAVEDR Serial controller receive DMA saved counter channel B register **/
#define SC1_DMA_SC1_DMARXCNTSAVEDR			MMIO32(SC1_DMA_BASE + 0x70)

/**@}*/


/** @defgroup sc1_dma_sc1_dmarxbegaddar SC1DMARXBEGADDAR Serial controller receive DMA begin address channel A register
@{*/


#define SC1_DMA_SC1_DMARXBEGADDAR_ADD_SHIFT		0
#define SC1_DMA_SC1_DMARXBEGADDAR_ADD_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmarxbegaddar_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_dma_sc1_dmarxendaddar SC1DMARXENDADDAR Serial controller receive DMA end address channel A register
@{*/


#define SC1_DMA_SC1_DMARXENDADDAR_ADD_SHIFT		0
#define SC1_DMA_SC1_DMARXENDADDAR_ADD_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmarxendaddar_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_dma_sc1_dmarxbegaddbr SC1DMARXBEGADDBR Serial controller receive DMA begin address channel B register
@{*/


#define SC1_DMA_SC1_DMARXBEGADDBR_ADD_SHIFT		0
#define SC1_DMA_SC1_DMARXBEGADDBR_ADD_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmarxbegaddbr_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_dma_sc1_dmarxendaddbr SC1DMARXENDADDBR Serial controller receive DMA end address channel B register
@{*/


#define SC1_DMA_SC1_DMARXENDADDBR_ADD_SHIFT		0
#define SC1_DMA_SC1_DMARXENDADDBR_ADD_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmarxendaddbr_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_dma_sc1_dmatxbegaddar SC1DMATXBEGADDAR Serial controller transmit DMA begin address channel A register
@{*/


#define SC1_DMA_SC1_DMATXBEGADDAR_ADD_SHIFT		0
#define SC1_DMA_SC1_DMATXBEGADDAR_ADD_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmatxbegaddar_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_dma_sc1_dmatxendaddar SC1DMATXENDADDAR Serial controller transmit DMA end address channel A register
@{*/


#define SC1_DMA_SC1_DMATXENDADDAR_ADD_SHIFT		0
#define SC1_DMA_SC1_DMATXENDADDAR_ADD_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmatxendaddar_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_dma_sc1_dmatxbegaddbr SC1DMATXBEGADDBR Serial controller transmit DMA begin address channel B register
@{*/


#define SC1_DMA_SC1_DMATXBEGADDBR_ADD_SHIFT		0
#define SC1_DMA_SC1_DMATXBEGADDBR_ADD_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmatxbegaddbr_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_dma_sc1_dmatxendaddbr SC1DMATXENDADDBR Serial controller transmit DMA end address channel B
@{*/


#define SC1_DMA_SC1_DMATXENDADDBR_ADD_SHIFT		0
#define SC1_DMA_SC1_DMATXENDADDBR_ADD_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmatxendaddbr_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_dma_sc1_dmarxcntar SC1DMARXCNTAR Serial controller receive DMA counter channel A register
@{*/


#define SC1_DMA_SC1_DMARXCNTAR_CNT_SHIFT		0
#define SC1_DMA_SC1_DMARXCNTAR_CNT_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmarxcntar_cnt CNT CNT
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_dma_sc1_dmarxcntbr SC1DMARXCNTBR Serial controller receive DMA count channel B register
@{*/


#define SC1_DMA_SC1_DMARXCNTBR_CNT_SHIFT		0
#define SC1_DMA_SC1_DMARXCNTBR_CNT_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmarxcntbr_cnt CNT CNT
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_dma_sc1_dmatxcntr SC1DMATXCNTR Serial controller transmit DMA counter register
@{*/


#define SC1_DMA_SC1_DMATXCNTR_CNT_SHIFT		0
#define SC1_DMA_SC1_DMATXCNTR_CNT_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmatxcntr_cnt CNT CNT
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_dma_sc1_dmasr SC1DMASR Serial controller DMA status register
@{*/


#define SC1_DMA_SC1_DMASR_NSSS_SHIFT		10
#define SC1_DMA_SC1_DMASR_NSSS_MASK		0x07
/** @defgroup sc1_dma_sc1_dmasr_nsss NSSS NSSS
@{*/
/**@}*/

/** SC1_DMA_SC1_DMASR_FEB FEB **/
#define SC1_DMA_SC1_DMASR_FEB		(1 << 9)
/** SC1_DMA_SC1_DMASR_FEA FEA **/
#define SC1_DMA_SC1_DMASR_FEA		(1 << 8)
/** SC1_DMA_SC1_DMASR_PEB PEB **/
#define SC1_DMA_SC1_DMASR_PEB		(1 << 7)
/** SC1_DMA_SC1_DMASR_PEA PEA **/
#define SC1_DMA_SC1_DMASR_PEA		(1 << 6)
/** SC1_DMA_SC1_DMASR_OVRB OVRB **/
#define SC1_DMA_SC1_DMASR_OVRB		(1 << 5)
/** SC1_DMA_SC1_DMASR_OVRA OVRA **/
#define SC1_DMA_SC1_DMASR_OVRA		(1 << 4)
/** SC1_DMA_SC1_DMASR_TXBACK TXBACK **/
#define SC1_DMA_SC1_DMASR_TXBACK		(1 << 3)
/** SC1_DMA_SC1_DMASR_TXAACK TXAACK **/
#define SC1_DMA_SC1_DMASR_TXAACK		(1 << 2)
/** SC1_DMA_SC1_DMASR_RXBACK RXBACK **/
#define SC1_DMA_SC1_DMASR_RXBACK		(1 << 1)
/** SC1_DMA_SC1_DMASR_RXAACK RXAACK **/
#define SC1_DMA_SC1_DMASR_RXAACK		(1 << 0)

/**@}*/

/** @defgroup sc1_dma_sc1_dmacr SC1DMACR Serial controller DMA control register
@{*/

/** SC1_DMA_SC1_DMACR_TXRST TXRST **/
#define SC1_DMA_SC1_DMACR_TXRST		(1 << 5)
/** SC1_DMA_SC1_DMACR_RXRST RXRST **/
#define SC1_DMA_SC1_DMACR_RXRST		(1 << 4)
/** SC1_DMA_SC1_DMACR_TXLODB TXLODB **/
#define SC1_DMA_SC1_DMACR_TXLODB		(1 << 3)
/** SC1_DMA_SC1_DMACR_TXLODA TXLODA **/
#define SC1_DMA_SC1_DMACR_TXLODA		(1 << 2)
/** SC1_DMA_SC1_DMACR_RXLODB RXLODB **/
#define SC1_DMA_SC1_DMACR_RXLODB		(1 << 1)
/** SC1_DMA_SC1_DMACR_RXLODA RXLODA **/
#define SC1_DMA_SC1_DMACR_RXLODA		(1 << 0)

/**@}*/

/** @defgroup sc1_dma_sc1_dmarxerrar SC1DMARXERRAR Serial controller receive DMA channel A first error register
@{*/


#define SC1_DMA_SC1_DMARXERRAR_ADD_SHIFT		0
#define SC1_DMA_SC1_DMARXERRAR_ADD_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmarxerrar_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_dma_sc1_dmarxerrbr SC1DMARXERRBR Serial controller receive DMA channel B first error register
@{*/


#define SC1_DMA_SC1_DMARXERRBR_ADD_SHIFT		0
#define SC1_DMA_SC1_DMARXERRBR_ADD_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmarxerrbr_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_dma_sc1_dmarxcntsavedr SC1DMARXCNTSAVEDR Serial controller receive DMA saved counter channel B register
@{*/


#define SC1_DMA_SC1_DMARXCNTSAVEDR_CNT_SHIFT		0
#define SC1_DMA_SC1_DMARXCNTSAVEDR_CNT_MASK		0x1fff
/** @defgroup sc1_dma_sc1_dmarxcntsavedr_cnt CNT CNT
@{*/
/**@}*/


/**@}*/

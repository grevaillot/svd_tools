#pragma once 

/* --- SC2_DMA: Serial controller 2 (Direct memory access) ---------- */

/** @defgroup sc2_dma_registers Serial controller 2 (Direct memory
      access) Register
@{*/

/** SC2_DMA_SC2_DMARXBEGADDAR Serial controller receive DMA begin address channel A register **/
#define SC2_DMA_SC2_DMARXBEGADDAR			MMIO32(SC2_DMA_BASE + 0x00)
/** SC2_DMA_SC2_DMARXENDADDAR Serial controller receive DMA end address channel A register **/
#define SC2_DMA_SC2_DMARXENDADDAR			MMIO32(SC2_DMA_BASE + 0x04)
/** SC2_DMA_SC2_DMARXBEGADDBR Serial controller receive DMA begin address channel B register **/
#define SC2_DMA_SC2_DMARXBEGADDBR			MMIO32(SC2_DMA_BASE + 0x08)
/** SC2_DMA_SC2_DMARXENDADDBR Serial controller receive DMA end address channel B register **/
#define SC2_DMA_SC2_DMARXENDADDBR			MMIO32(SC2_DMA_BASE + 0x0c)
/** SC2_DMA_SC2_DMATXBEGADDAR Serial controller transmit DMA begin address channel A register **/
#define SC2_DMA_SC2_DMATXBEGADDAR			MMIO32(SC2_DMA_BASE + 0x10)
/** SC2_DMA_SC2_DMATXENDADDAR Serial controller transmit DMA end address channel A register **/
#define SC2_DMA_SC2_DMATXENDADDAR			MMIO32(SC2_DMA_BASE + 0x14)
/** SC2_DMA_SC2_DMATXBEGADDBR Serial controller transmit DMA begin address channel B register **/
#define SC2_DMA_SC2_DMATXBEGADDBR			MMIO32(SC2_DMA_BASE + 0x18)
/** SC2_DMA_SC2_DMATXENDADDBR Serial controller transmit DMA end address channel B register **/
#define SC2_DMA_SC2_DMATXENDADDBR			MMIO32(SC2_DMA_BASE + 0x1c)
/** SC2_DMA_SC2_DMARXCNTAR Serial controller receive DMA counter channel A register **/
#define SC2_DMA_SC2_DMARXCNTAR			MMIO32(SC2_DMA_BASE + 0x20)
/** SC2_DMA_SC2_DMARXCNTBR Serial controller receive DMA count channel B register **/
#define SC2_DMA_SC2_DMARXCNTBR			MMIO32(SC2_DMA_BASE + 0x24)
/** SC2_DMA_SC2_DMATXCNTR Serial controller transmit DMA counter register **/
#define SC2_DMA_SC2_DMATXCNTR			MMIO32(SC2_DMA_BASE + 0x28)
/** SC2_DMA_SC2_DMASR Serial controller DMA status register **/
#define SC2_DMA_SC2_DMASR			MMIO32(SC2_DMA_BASE + 0x2c)
/** SC2_DMA_SC2_DMACR Serial controller DMA control register **/
#define SC2_DMA_SC2_DMACR			MMIO32(SC2_DMA_BASE + 0x30)
/** SC2_DMA_SC2_DMARXERRAR Serial controller receive DMA channel A first error register **/
#define SC2_DMA_SC2_DMARXERRAR			MMIO32(SC2_DMA_BASE + 0x34)
/** SC2_DMA_SC2_DMARXERRBR Serial controller receive DMA channel B first error register **/
#define SC2_DMA_SC2_DMARXERRBR			MMIO32(SC2_DMA_BASE + 0x38)
/** SC2_DMA_SC2_DMARXCNTSAVEDR Serial controller receive DMA saved counter channel B register **/
#define SC2_DMA_SC2_DMARXCNTSAVEDR			MMIO32(SC2_DMA_BASE + 0x70)

/**@}*/


/** @defgroup sc2_dma_sc2_dmarxbegaddar SC2DMARXBEGADDAR Serial controller receive DMA begin address channel A register
@{*/


#define SC2_DMA_SC2_DMARXBEGADDAR_ADD_SHIFT		0
#define SC2_DMA_SC2_DMARXBEGADDAR_ADD_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmarxbegaddar_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_dma_sc2_dmarxendaddar SC2DMARXENDADDAR Serial controller receive DMA end address channel A register
@{*/


#define SC2_DMA_SC2_DMARXENDADDAR_ADD_SHIFT		0
#define SC2_DMA_SC2_DMARXENDADDAR_ADD_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmarxendaddar_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_dma_sc2_dmarxbegaddbr SC2DMARXBEGADDBR Serial controller receive DMA begin address channel B register
@{*/


#define SC2_DMA_SC2_DMARXBEGADDBR_ADD_SHIFT		0
#define SC2_DMA_SC2_DMARXBEGADDBR_ADD_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmarxbegaddbr_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_dma_sc2_dmarxendaddbr SC2DMARXENDADDBR Serial controller receive DMA end address channel B register
@{*/


#define SC2_DMA_SC2_DMARXENDADDBR_ADD_SHIFT		0
#define SC2_DMA_SC2_DMARXENDADDBR_ADD_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmarxendaddbr_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_dma_sc2_dmatxbegaddar SC2DMATXBEGADDAR Serial controller transmit DMA begin address channel A register
@{*/


#define SC2_DMA_SC2_DMATXBEGADDAR_ADD_SHIFT		0
#define SC2_DMA_SC2_DMATXBEGADDAR_ADD_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmatxbegaddar_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_dma_sc2_dmatxendaddar SC2DMATXENDADDAR Serial controller transmit DMA end address channel A register
@{*/


#define SC2_DMA_SC2_DMATXENDADDAR_ADD_SHIFT		0
#define SC2_DMA_SC2_DMATXENDADDAR_ADD_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmatxendaddar_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_dma_sc2_dmatxbegaddbr SC2DMATXBEGADDBR Serial controller transmit DMA begin address channel B register
@{*/


#define SC2_DMA_SC2_DMATXBEGADDBR_ADD_SHIFT		0
#define SC2_DMA_SC2_DMATXBEGADDBR_ADD_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmatxbegaddbr_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_dma_sc2_dmatxendaddbr SC2DMATXENDADDBR Serial controller transmit DMA end address channel B register
@{*/


#define SC2_DMA_SC2_DMATXENDADDBR_ADD_SHIFT		0
#define SC2_DMA_SC2_DMATXENDADDBR_ADD_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmatxendaddbr_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_dma_sc2_dmarxcntar SC2DMARXCNTAR Serial controller receive DMA counter channel A register
@{*/


#define SC2_DMA_SC2_DMARXCNTAR_CNT_SHIFT		0
#define SC2_DMA_SC2_DMARXCNTAR_CNT_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmarxcntar_cnt CNT CNT
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_dma_sc2_dmarxcntbr SC2DMARXCNTBR Serial controller receive DMA count channel B register
@{*/


#define SC2_DMA_SC2_DMARXCNTBR_CNT_SHIFT		0
#define SC2_DMA_SC2_DMARXCNTBR_CNT_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmarxcntbr_cnt CNT CNT
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_dma_sc2_dmatxcntr SC2DMATXCNTR Serial controller transmit DMA counter register
@{*/


#define SC2_DMA_SC2_DMATXCNTR_CNT_SHIFT		0
#define SC2_DMA_SC2_DMATXCNTR_CNT_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmatxcntr_cnt CNT CNT
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_dma_sc2_dmasr SC2DMASR Serial controller DMA status register
@{*/


#define SC2_DMA_SC2_DMASR_NSSS_SHIFT		10
#define SC2_DMA_SC2_DMASR_NSSS_MASK		0x07
/** @defgroup sc2_dma_sc2_dmasr_nsss NSSS NSSS
@{*/
/**@}*/

/** SC2_DMA_SC2_DMASR_FEB FEB **/
#define SC2_DMA_SC2_DMASR_FEB		(1 << 9)
/** SC2_DMA_SC2_DMASR_FEA FEA **/
#define SC2_DMA_SC2_DMASR_FEA		(1 << 8)
/** SC2_DMA_SC2_DMASR_PEB PEB **/
#define SC2_DMA_SC2_DMASR_PEB		(1 << 7)
/** SC2_DMA_SC2_DMASR_PEA PEA **/
#define SC2_DMA_SC2_DMASR_PEA		(1 << 6)
/** SC2_DMA_SC2_DMASR_OVRB OVRB **/
#define SC2_DMA_SC2_DMASR_OVRB		(1 << 5)
/** SC2_DMA_SC2_DMASR_OVRA OVRA **/
#define SC2_DMA_SC2_DMASR_OVRA		(1 << 4)
/** SC2_DMA_SC2_DMASR_TXBACK TXBACK **/
#define SC2_DMA_SC2_DMASR_TXBACK		(1 << 3)
/** SC2_DMA_SC2_DMASR_TXAACK TXAACK **/
#define SC2_DMA_SC2_DMASR_TXAACK		(1 << 2)
/** SC2_DMA_SC2_DMASR_RXBACK RXBACK **/
#define SC2_DMA_SC2_DMASR_RXBACK		(1 << 1)
/** SC2_DMA_SC2_DMASR_RXAACK RXAACK **/
#define SC2_DMA_SC2_DMASR_RXAACK		(1 << 0)

/**@}*/

/** @defgroup sc2_dma_sc2_dmacr SC2DMACR Serial controller DMA control register
@{*/

/** SC2_DMA_SC2_DMACR_TXRST TXRST **/
#define SC2_DMA_SC2_DMACR_TXRST		(1 << 5)
/** SC2_DMA_SC2_DMACR_RXRST RXRST **/
#define SC2_DMA_SC2_DMACR_RXRST		(1 << 4)
/** SC2_DMA_SC2_DMACR_TXLODB TXLODB **/
#define SC2_DMA_SC2_DMACR_TXLODB		(1 << 3)
/** SC2_DMA_SC2_DMACR_TXLODA TXLODA **/
#define SC2_DMA_SC2_DMACR_TXLODA		(1 << 2)
/** SC2_DMA_SC2_DMACR_RXLODB RXLODB **/
#define SC2_DMA_SC2_DMACR_RXLODB		(1 << 1)
/** SC2_DMA_SC2_DMACR_RXLODA RXLODA **/
#define SC2_DMA_SC2_DMACR_RXLODA		(1 << 0)

/**@}*/

/** @defgroup sc2_dma_sc2_dmarxerrar SC2DMARXERRAR Serial controller receive DMA channel A first error register
@{*/


#define SC2_DMA_SC2_DMARXERRAR_ADD_SHIFT		0
#define SC2_DMA_SC2_DMARXERRAR_ADD_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmarxerrar_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_dma_sc2_dmarxerrbr SC2DMARXERRBR Serial controller receive DMA channel B first error register
@{*/


#define SC2_DMA_SC2_DMARXERRBR_ADD_SHIFT		0
#define SC2_DMA_SC2_DMARXERRBR_ADD_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmarxerrbr_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_dma_sc2_dmarxcntsavedr SC2DMARXCNTSAVEDR Serial controller receive DMA saved counter channel B register
@{*/


#define SC2_DMA_SC2_DMARXCNTSAVEDR_CNT_SHIFT		0
#define SC2_DMA_SC2_DMARXCNTSAVEDR_CNT_MASK		0x1fff
/** @defgroup sc2_dma_sc2_dmarxcntsavedr_cnt CNT CNT
@{*/
/**@}*/


/**@}*/

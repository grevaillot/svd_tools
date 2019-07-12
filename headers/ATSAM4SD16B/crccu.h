#pragma once 

/* --- CRCCU: Cyclic Redundancy Check Calculation Unit -------------- */

/** @defgroup crccu_registers Cyclic Redundancy Check Calculation Unit Register
@{*/

/** CRCCU_DSCR CRCCU Descriptor Base Register **/
#define CRCCU_DSCR			MMIO32(CRCCU_BASE + 0x00)
/** CRCCU_DMA_EN CRCCU DMA Enable Register **/
#define CRCCU_DMA_EN			MMIO32(CRCCU_BASE + 0x08)
/** CRCCU_DMA_DIS CRCCU DMA Disable Register **/
#define CRCCU_DMA_DIS			MMIO32(CRCCU_BASE + 0x0c)
/** CRCCU_DMA_SR CRCCU DMA Status Register **/
#define CRCCU_DMA_SR			MMIO32(CRCCU_BASE + 0x10)
/** CRCCU_DMA_IER CRCCU DMA Interrupt Enable Register **/
#define CRCCU_DMA_IER			MMIO32(CRCCU_BASE + 0x14)
/** CRCCU_DMA_IDR CRCCU DMA Interrupt Disable Register **/
#define CRCCU_DMA_IDR			MMIO32(CRCCU_BASE + 0x18)
/** CRCCU_DMA_IMR CRCCU DMA Interrupt Mask Register **/
#define CRCCU_DMA_IMR			MMIO32(CRCCU_BASE + 0x1c)
/** CRCCU_DMA_ISR CRCCU DMA Interrupt Status Register **/
#define CRCCU_DMA_ISR			MMIO32(CRCCU_BASE + 0x20)
/** CRCCU_CR CRCCU Control Register **/
#define CRCCU_CR			MMIO32(CRCCU_BASE + 0x34)
/** CRCCU_MR CRCCU Mode Register **/
#define CRCCU_MR			MMIO32(CRCCU_BASE + 0x38)
/** CRCCU_SR CRCCU Status Register **/
#define CRCCU_SR			MMIO32(CRCCU_BASE + 0x3c)
/** CRCCU_IER CRCCU Interrupt Enable Register **/
#define CRCCU_IER			MMIO32(CRCCU_BASE + 0x40)
/** CRCCU_IDR CRCCU Interrupt Disable Register **/
#define CRCCU_IDR			MMIO32(CRCCU_BASE + 0x44)
/** CRCCU_IMR CRCCU Interrupt Mask Register **/
#define CRCCU_IMR			MMIO32(CRCCU_BASE + 0x48)
/** CRCCU_ISR CRCCU Interrupt Status Register **/
#define CRCCU_ISR			MMIO32(CRCCU_BASE + 0x4c)

/**@}*/


/** @defgroup crccu_dscr DSCR CRCCU Descriptor Base Register
@{*/


#define CRCCU_DSCR_DSCR_SHIFT		9
#define CRCCU_DSCR_DSCR_MASK		0x7fffff
/** @defgroup crccu_dscr_dscr DSCR Descriptor Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup crccu_dma_en DMAEN CRCCU DMA Enable Register
@{*/

/** CRCCU_DMA_EN_DMAEN DMA Enable **/
#define CRCCU_DMA_EN_DMAEN		(1 << 0)

/**@}*/

/** @defgroup crccu_dma_dis DMADIS CRCCU DMA Disable Register
@{*/

/** CRCCU_DMA_DIS_DMADIS DMA Disable **/
#define CRCCU_DMA_DIS_DMADIS		(1 << 0)

/**@}*/

/** @defgroup crccu_dma_sr DMASR CRCCU DMA Status Register
@{*/

/** CRCCU_DMA_SR_DMASR DMA Status **/
#define CRCCU_DMA_SR_DMASR		(1 << 0)

/**@}*/

/** @defgroup crccu_dma_ier DMAIER CRCCU DMA Interrupt Enable Register
@{*/

/** CRCCU_DMA_IER_DMAIER Interrupt Enable **/
#define CRCCU_DMA_IER_DMAIER		(1 << 0)

/**@}*/

/** @defgroup crccu_dma_idr DMAIDR CRCCU DMA Interrupt Disable Register
@{*/

/** CRCCU_DMA_IDR_DMAIDR Interrupt Disable **/
#define CRCCU_DMA_IDR_DMAIDR		(1 << 0)

/**@}*/

/** @defgroup crccu_dma_imr DMAIMR CRCCU DMA Interrupt Mask Register
@{*/

/** CRCCU_DMA_IMR_DMAIMR Interrupt Mask **/
#define CRCCU_DMA_IMR_DMAIMR		(1 << 0)

/**@}*/

/** @defgroup crccu_dma_isr DMAISR CRCCU DMA Interrupt Status Register
@{*/

/** CRCCU_DMA_ISR_DMAISR Interrupt Status **/
#define CRCCU_DMA_ISR_DMAISR		(1 << 0)

/**@}*/

/** @defgroup crccu_cr CR CRCCU Control Register
@{*/

/** CRCCU_CR_RESET CRC Computation Reset **/
#define CRCCU_CR_RESET		(1 << 0)

/**@}*/

/** @defgroup crccu_mr MR CRCCU Mode Register
@{*/


#define CRCCU_MR_DIVIDER_SHIFT		4
#define CRCCU_MR_DIVIDER_MASK		0x0f
/** @defgroup crccu_mr_divider DIVIDER Request Divider
@{*/
/**@}*/


#define CRCCU_MR_PTYPE_SHIFT		2
#define CRCCU_MR_PTYPE_MASK		0x03
/** @defgroup crccu_mr_ptype PTYPE Primitive Polynomial
@{*/
/**@}*/

/** CRCCU_MR_COMPARE CRC Compare **/
#define CRCCU_MR_COMPARE		(1 << 1)
/** CRCCU_MR_ENABLE CRC Enable **/
#define CRCCU_MR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup crccu_sr SR CRCCU Status Register
@{*/


#define CRCCU_SR_CRC_SHIFT		0
#define CRCCU_SR_CRC_MASK		0xffffffff
/** @defgroup crccu_sr_crc CRC Cyclic Redundancy Check Value
@{*/
/**@}*/


/**@}*/

/** @defgroup crccu_ier IER CRCCU Interrupt Enable Register
@{*/

/** CRCCU_IER_ERRIER CRC Error Interrupt Enable **/
#define CRCCU_IER_ERRIER		(1 << 0)

/**@}*/

/** @defgroup crccu_idr IDR CRCCU Interrupt Disable Register
@{*/

/** CRCCU_IDR_ERRIDR CRC Error Interrupt Disable **/
#define CRCCU_IDR_ERRIDR		(1 << 0)

/**@}*/

/** @defgroup crccu_imr IMR CRCCU Interrupt Mask Register
@{*/

/** CRCCU_IMR_ERRIMR CRC Error Interrupt Mask **/
#define CRCCU_IMR_ERRIMR		(1 << 0)

/**@}*/

/** @defgroup crccu_isr ISR CRCCU Interrupt Status Register
@{*/

/** CRCCU_ISR_ERRISR CRC Error Interrupt Status **/
#define CRCCU_ISR_ERRISR		(1 << 0)

/**@}*/

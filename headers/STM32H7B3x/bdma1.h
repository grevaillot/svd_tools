#pragma once 

/* --- BDMA1: BDMA -------------------------------------------------- */

/** @defgroup bdma1_registers BDMA Register
@{*/

/** BDMA1_BDMA_ISR DMA interrupt status register **/
#define BDMA1_BDMA_ISR			MMIO32(BDMA1_BASE + 0x00)
/** BDMA1_BDMA_IFCR DMA interrupt flag clear register **/
#define BDMA1_BDMA_IFCR			MMIO32(BDMA1_BASE + 0x04)
/** BDMA1_BDMA_CCR0 DMA channel x configuration register **/
#define BDMA1_BDMA_CCR0			MMIO32(BDMA1_BASE + 0x08)
/** BDMA1_BDMA_CNDTR0 DMA channel x number of data register **/
#define BDMA1_BDMA_CNDTR0			MMIO32(BDMA1_BASE + 0x0c)
/** BDMA1_BDMA_CPAR0 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CPAR0			MMIO32(BDMA1_BASE + 0x10)
/** BDMA1_BDMA_CM0AR0 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CM0AR0			MMIO32(BDMA1_BASE + 0x14)
/** BDMA1_BDMA_CM1AR0 This register must not be written when the channel is enabled **/
#define BDMA1_BDMA_CM1AR0			MMIO32(BDMA1_BASE + 0x18)
/** BDMA1_BDMA_CCR1 DMA channel x configuration register **/
#define BDMA1_BDMA_CCR1			MMIO32(BDMA1_BASE + 0x1c)
/** BDMA1_BDMA_CNDTR1 DMA channel x number of data register **/
#define BDMA1_BDMA_CNDTR1			MMIO32(BDMA1_BASE + 0x20)
/** BDMA1_BDMA_CPAR1 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CPAR1			MMIO32(BDMA1_BASE + 0x24)
/** BDMA1_BDMA_CM0AR1 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CM0AR1			MMIO32(BDMA1_BASE + 0x28)
/** BDMA1_BDMA_CM1AR1 BDMA_CMAR1 **/
#define BDMA1_BDMA_CM1AR1			MMIO32(BDMA1_BASE + 0x2c)
/** BDMA1_BDMA_CCR2 DMA channel x configuration register **/
#define BDMA1_BDMA_CCR2			MMIO32(BDMA1_BASE + 0x30)
/** BDMA1_BDMA_CNDTR2 DMA channel x number of data register **/
#define BDMA1_BDMA_CNDTR2			MMIO32(BDMA1_BASE + 0x34)
/** BDMA1_BDMA_CPAR2 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CPAR2			MMIO32(BDMA1_BASE + 0x38)
/** BDMA1_BDMA_CM0AR2 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CM0AR2			MMIO32(BDMA1_BASE + 0x3c)
/** BDMA1_BDMA_CM1AR2 BDMA_CM1AR2 **/
#define BDMA1_BDMA_CM1AR2			MMIO32(BDMA1_BASE + 0x40)
/** BDMA1_BDMA_CCR3 DMA channel x configuration register **/
#define BDMA1_BDMA_CCR3			MMIO32(BDMA1_BASE + 0x44)
/** BDMA1_BDMA_CNDTR3 DMA channel x number of data register **/
#define BDMA1_BDMA_CNDTR3			MMIO32(BDMA1_BASE + 0x48)
/** BDMA1_BDMA_CPAR3 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CPAR3			MMIO32(BDMA1_BASE + 0x4c)
/** BDMA1_BDMA_CM0AR3 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CM0AR3			MMIO32(BDMA1_BASE + 0x50)
/** BDMA1_BDMA_CM1AR3 BDMA_CMAR3 **/
#define BDMA1_BDMA_CM1AR3			MMIO32(BDMA1_BASE + 0x54)
/** BDMA1_BDMA_CCR4 DMA channel x configuration register **/
#define BDMA1_BDMA_CCR4			MMIO32(BDMA1_BASE + 0x58)
/** BDMA1_BDMA_CNDTR4 DMA channel x number of data register **/
#define BDMA1_BDMA_CNDTR4			MMIO32(BDMA1_BASE + 0x5c)
/** BDMA1_BDMA_CPAR4 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CPAR4			MMIO32(BDMA1_BASE + 0x60)
/** BDMA1_BDMA_CM0AR4 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CM0AR4			MMIO32(BDMA1_BASE + 0x64)
/** BDMA1_BDMA_CM1AR4 BDMA_CM1AR4 **/
#define BDMA1_BDMA_CM1AR4			MMIO32(BDMA1_BASE + 0x68)
/** BDMA1_BDMA_CCR5 DMA channel x configuration register **/
#define BDMA1_BDMA_CCR5			MMIO32(BDMA1_BASE + 0x6c)
/** BDMA1_BDMA_CNDTR5 DMA channel x number of data register **/
#define BDMA1_BDMA_CNDTR5			MMIO32(BDMA1_BASE + 0x70)
/** BDMA1_BDMA_CPAR5 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CPAR5			MMIO32(BDMA1_BASE + 0x74)
/** BDMA1_BDMA_CM0AR5 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CM0AR5			MMIO32(BDMA1_BASE + 0x78)
/** BDMA1_BDMA_CM1AR5 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CM1AR5			MMIO32(BDMA1_BASE + 0x7c)
/** BDMA1_BDMA_CCR6 DMA channel x configuration register **/
#define BDMA1_BDMA_CCR6			MMIO32(BDMA1_BASE + 0x80)
/** BDMA1_BDMA_CNDTR6 DMA channel x number of data register **/
#define BDMA1_BDMA_CNDTR6			MMIO32(BDMA1_BASE + 0x84)
/** BDMA1_BDMA_CPAR6 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CPAR6			MMIO32(BDMA1_BASE + 0x88)
/** BDMA1_BDMA_CM0AR6 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CM0AR6			MMIO32(BDMA1_BASE + 0x8c)
/** BDMA1_BDMA_CM1AR6 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CM1AR6			MMIO32(BDMA1_BASE + 0x90)
/** BDMA1_BDMA_CCR7 DMA channel x configuration register **/
#define BDMA1_BDMA_CCR7			MMIO32(BDMA1_BASE + 0x94)
/** BDMA1_BDMA_CNDTR7 DMA channel x number of data register **/
#define BDMA1_BDMA_CNDTR7			MMIO32(BDMA1_BASE + 0x98)
/** BDMA1_BDMA_CPAR7 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CPAR7			MMIO32(BDMA1_BASE + 0x9c)
/** BDMA1_BDMA_CM0AR7 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CM0AR7			MMIO32(BDMA1_BASE + 0xa0)
/** BDMA1_BDMA_CM1AR7 This register must not be written when the channel is enabled. **/
#define BDMA1_BDMA_CM1AR7			MMIO32(BDMA1_BASE + 0xa4)

/**@}*/


/** @defgroup bdma1_bdma_isr BDMAISR DMA interrupt status register
@{*/

/** BDMA1_BDMA_ISR_TEIF8 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TEIF8		(1 << 31)
/** BDMA1_BDMA_ISR_HTIF8 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_HTIF8		(1 << 30)
/** BDMA1_BDMA_ISR_TCIF8 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TCIF8		(1 << 29)
/** BDMA1_BDMA_ISR_GIF8 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_GIF8		(1 << 28)
/** BDMA1_BDMA_ISR_TEIF7 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TEIF7		(1 << 27)
/** BDMA1_BDMA_ISR_HTIF7 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_HTIF7		(1 << 26)
/** BDMA1_BDMA_ISR_TCIF7 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TCIF7		(1 << 25)
/** BDMA1_BDMA_ISR_GIF7 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_GIF7		(1 << 24)
/** BDMA1_BDMA_ISR_TEIF6 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TEIF6		(1 << 23)
/** BDMA1_BDMA_ISR_HTIF6 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_HTIF6		(1 << 22)
/** BDMA1_BDMA_ISR_TCIF6 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TCIF6		(1 << 21)
/** BDMA1_BDMA_ISR_GIF6 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_GIF6		(1 << 20)
/** BDMA1_BDMA_ISR_TEIF5 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TEIF5		(1 << 19)
/** BDMA1_BDMA_ISR_HTIF5 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_HTIF5		(1 << 18)
/** BDMA1_BDMA_ISR_TCIF5 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TCIF5		(1 << 17)
/** BDMA1_BDMA_ISR_GIF5 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_GIF5		(1 << 16)
/** BDMA1_BDMA_ISR_TEIF4 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TEIF4		(1 << 15)
/** BDMA1_BDMA_ISR_HTIF4 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_HTIF4		(1 << 14)
/** BDMA1_BDMA_ISR_TCIF4 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TCIF4		(1 << 13)
/** BDMA1_BDMA_ISR_GIF4 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_GIF4		(1 << 12)
/** BDMA1_BDMA_ISR_TEIF3 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TEIF3		(1 << 11)
/** BDMA1_BDMA_ISR_HTIF3 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_HTIF3		(1 << 10)
/** BDMA1_BDMA_ISR_TCIF3 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TCIF3		(1 << 9)
/** BDMA1_BDMA_ISR_GIF3 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_GIF3		(1 << 8)
/** BDMA1_BDMA_ISR_TEIF2 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TEIF2		(1 << 7)
/** BDMA1_BDMA_ISR_HTIF2 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_HTIF2		(1 << 6)
/** BDMA1_BDMA_ISR_TCIF2 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TCIF2		(1 << 5)
/** BDMA1_BDMA_ISR_GIF2 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_GIF2		(1 << 4)
/** BDMA1_BDMA_ISR_TEIF1 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TEIF1		(1 << 3)
/** BDMA1_BDMA_ISR_HTIF1 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_HTIF1		(1 << 2)
/** BDMA1_BDMA_ISR_TCIF1 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_TCIF1		(1 << 1)
/** BDMA1_BDMA_ISR_GIF1 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA1_BDMA_ISR_GIF1		(1 << 0)

/**@}*/

/** @defgroup bdma1_bdma_ifcr BDMAIFCR DMA interrupt flag clear register
@{*/

/** BDMA1_BDMA_IFCR_CTEIF8 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTEIF8		(1 << 31)
/** BDMA1_BDMA_IFCR_CHTIF8 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CHTIF8		(1 << 30)
/** BDMA1_BDMA_IFCR_CTCIF8 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTCIF8		(1 << 29)
/** BDMA1_BDMA_IFCR_CGIF8 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CGIF8		(1 << 28)
/** BDMA1_BDMA_IFCR_CTEIF7 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTEIF7		(1 << 27)
/** BDMA1_BDMA_IFCR_CHTIF7 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CHTIF7		(1 << 26)
/** BDMA1_BDMA_IFCR_CTCIF7 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTCIF7		(1 << 25)
/** BDMA1_BDMA_IFCR_CGIF7 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CGIF7		(1 << 24)
/** BDMA1_BDMA_IFCR_CTEIF6 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTEIF6		(1 << 23)
/** BDMA1_BDMA_IFCR_CHTIF6 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CHTIF6		(1 << 22)
/** BDMA1_BDMA_IFCR_CTCIF6 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTCIF6		(1 << 21)
/** BDMA1_BDMA_IFCR_CGIF6 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CGIF6		(1 << 20)
/** BDMA1_BDMA_IFCR_CTEIF5 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTEIF5		(1 << 19)
/** BDMA1_BDMA_IFCR_CHTIF5 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CHTIF5		(1 << 18)
/** BDMA1_BDMA_IFCR_CTCIF5 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTCIF5		(1 << 17)
/** BDMA1_BDMA_IFCR_CGIF5 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CGIF5		(1 << 16)
/** BDMA1_BDMA_IFCR_CTEIF4 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTEIF4		(1 << 15)
/** BDMA1_BDMA_IFCR_CHTIF4 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CHTIF4		(1 << 14)
/** BDMA1_BDMA_IFCR_CTCIF4 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTCIF4		(1 << 13)
/** BDMA1_BDMA_IFCR_CGIF4 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CGIF4		(1 << 12)
/** BDMA1_BDMA_IFCR_CTEIF3 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTEIF3		(1 << 11)
/** BDMA1_BDMA_IFCR_CHTIF3 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CHTIF3		(1 << 10)
/** BDMA1_BDMA_IFCR_CTCIF3 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTCIF3		(1 << 9)
/** BDMA1_BDMA_IFCR_CGIF3 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CGIF3		(1 << 8)
/** BDMA1_BDMA_IFCR_CTEIF2 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTEIF2		(1 << 7)
/** BDMA1_BDMA_IFCR_CHTIF2 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CHTIF2		(1 << 6)
/** BDMA1_BDMA_IFCR_CTCIF2 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTCIF2		(1 << 5)
/** BDMA1_BDMA_IFCR_CGIF2 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CGIF2		(1 << 4)
/** BDMA1_BDMA_IFCR_CTEIF1 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTEIF1		(1 << 3)
/** BDMA1_BDMA_IFCR_CHTIF1 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CHTIF1		(1 << 2)
/** BDMA1_BDMA_IFCR_CTCIF1 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CTCIF1		(1 << 1)
/** BDMA1_BDMA_IFCR_CGIF1 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA1_BDMA_IFCR_CGIF1		(1 << 0)

/**@}*/

/** @defgroup bdma1_bdma_ccr0 BDMACCR0 DMA channel x configuration register
@{*/

/** BDMA1_BDMA_CCR0_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR0_MEM2MEM		(1 << 14)

#define BDMA1_BDMA_CCR0_PL_SHIFT		12
#define BDMA1_BDMA_CCR0_PL_MASK		0x03
/** @defgroup bdma1_bdma_ccr0_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR0_MSIZE_SHIFT		10
#define BDMA1_BDMA_CCR0_MSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr0_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR0_PSIZE_SHIFT		8
#define BDMA1_BDMA_CCR0_PSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr0_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA1_BDMA_CCR0_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR0_MINC		(1 << 7)
/** BDMA1_BDMA_CCR0_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR0_PINC		(1 << 6)
/** BDMA1_BDMA_CCR0_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR0_CIRC		(1 << 5)
/** BDMA1_BDMA_CCR0_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR0_DIR		(1 << 4)
/** BDMA1_BDMA_CCR0_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR0_TEIE		(1 << 3)
/** BDMA1_BDMA_CCR0_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR0_HTIE		(1 << 2)
/** BDMA1_BDMA_CCR0_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR0_TCIE		(1 << 1)
/** BDMA1_BDMA_CCR0_EN Channel enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR0_EN		(1 << 0)

/**@}*/

/** @defgroup bdma1_bdma_cndtr0 BDMACNDTR0 DMA channel x number of data register
@{*/


#define BDMA1_BDMA_CNDTR0_NDT_SHIFT		0
#define BDMA1_BDMA_CNDTR0_NDT_MASK		0xffff
/** @defgroup bdma1_bdma_cndtr0_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cpar0 BDMACPAR0 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CPAR0_PA_SHIFT		0
#define BDMA1_BDMA_CPAR0_PA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cpar0_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm0ar0 BDMACM0AR0 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CM0AR0_MA_SHIFT		0
#define BDMA1_BDMA_CM0AR0_MA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cm0ar0_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm1ar0 BDMACM1AR0 This register must not be written when the channel is enabled
@{*/


/**@}*/

/** @defgroup bdma1_bdma_ccr1 BDMACCR1 DMA channel x configuration register
@{*/

/** BDMA1_BDMA_CCR1_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR1_MEM2MEM		(1 << 14)

#define BDMA1_BDMA_CCR1_PL_SHIFT		12
#define BDMA1_BDMA_CCR1_PL_MASK		0x03
/** @defgroup bdma1_bdma_ccr1_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR1_MSIZE_SHIFT		10
#define BDMA1_BDMA_CCR1_MSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr1_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR1_PSIZE_SHIFT		8
#define BDMA1_BDMA_CCR1_PSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr1_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA1_BDMA_CCR1_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR1_MINC		(1 << 7)
/** BDMA1_BDMA_CCR1_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR1_PINC		(1 << 6)
/** BDMA1_BDMA_CCR1_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR1_CIRC		(1 << 5)
/** BDMA1_BDMA_CCR1_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR1_DIR		(1 << 4)
/** BDMA1_BDMA_CCR1_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR1_TEIE		(1 << 3)
/** BDMA1_BDMA_CCR1_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR1_HTIE		(1 << 2)
/** BDMA1_BDMA_CCR1_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR1_TCIE		(1 << 1)
/** BDMA1_BDMA_CCR1_EN Channel enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR1_EN		(1 << 0)

/**@}*/

/** @defgroup bdma1_bdma_cndtr1 BDMACNDTR1 DMA channel x number of data register
@{*/


#define BDMA1_BDMA_CNDTR1_NDT_SHIFT		0
#define BDMA1_BDMA_CNDTR1_NDT_MASK		0xffff
/** @defgroup bdma1_bdma_cndtr1_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cpar1 BDMACPAR1 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CPAR1_PA_SHIFT		0
#define BDMA1_BDMA_CPAR1_PA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cpar1_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm0ar1 BDMACM0AR1 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CM0AR1_MA_SHIFT		0
#define BDMA1_BDMA_CM0AR1_MA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cm0ar1_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm1ar1 BDMACM1AR1 BDMA_CMAR1
@{*/


/**@}*/

/** @defgroup bdma1_bdma_ccr2 BDMACCR2 DMA channel x configuration register
@{*/

/** BDMA1_BDMA_CCR2_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR2_MEM2MEM		(1 << 14)

#define BDMA1_BDMA_CCR2_PL_SHIFT		12
#define BDMA1_BDMA_CCR2_PL_MASK		0x03
/** @defgroup bdma1_bdma_ccr2_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR2_MSIZE_SHIFT		10
#define BDMA1_BDMA_CCR2_MSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr2_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR2_PSIZE_SHIFT		8
#define BDMA1_BDMA_CCR2_PSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr2_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA1_BDMA_CCR2_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR2_MINC		(1 << 7)
/** BDMA1_BDMA_CCR2_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR2_PINC		(1 << 6)
/** BDMA1_BDMA_CCR2_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR2_CIRC		(1 << 5)
/** BDMA1_BDMA_CCR2_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR2_DIR		(1 << 4)
/** BDMA1_BDMA_CCR2_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR2_TEIE		(1 << 3)
/** BDMA1_BDMA_CCR2_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR2_HTIE		(1 << 2)
/** BDMA1_BDMA_CCR2_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR2_TCIE		(1 << 1)
/** BDMA1_BDMA_CCR2_EN Channel enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR2_EN		(1 << 0)

/**@}*/

/** @defgroup bdma1_bdma_cndtr2 BDMACNDTR2 DMA channel x number of data register
@{*/


#define BDMA1_BDMA_CNDTR2_NDT_SHIFT		0
#define BDMA1_BDMA_CNDTR2_NDT_MASK		0xffff
/** @defgroup bdma1_bdma_cndtr2_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cpar2 BDMACPAR2 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CPAR2_PA_SHIFT		0
#define BDMA1_BDMA_CPAR2_PA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cpar2_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm0ar2 BDMACM0AR2 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CM0AR2_MA_SHIFT		0
#define BDMA1_BDMA_CM0AR2_MA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cm0ar2_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm1ar2 BDMACM1AR2 BDMA_CM1AR2
@{*/


/**@}*/

/** @defgroup bdma1_bdma_ccr3 BDMACCR3 DMA channel x configuration register
@{*/

/** BDMA1_BDMA_CCR3_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR3_MEM2MEM		(1 << 14)

#define BDMA1_BDMA_CCR3_PL_SHIFT		12
#define BDMA1_BDMA_CCR3_PL_MASK		0x03
/** @defgroup bdma1_bdma_ccr3_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR3_MSIZE_SHIFT		10
#define BDMA1_BDMA_CCR3_MSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr3_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR3_PSIZE_SHIFT		8
#define BDMA1_BDMA_CCR3_PSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr3_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA1_BDMA_CCR3_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR3_MINC		(1 << 7)
/** BDMA1_BDMA_CCR3_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR3_PINC		(1 << 6)
/** BDMA1_BDMA_CCR3_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR3_CIRC		(1 << 5)
/** BDMA1_BDMA_CCR3_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR3_DIR		(1 << 4)
/** BDMA1_BDMA_CCR3_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR3_TEIE		(1 << 3)
/** BDMA1_BDMA_CCR3_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR3_HTIE		(1 << 2)
/** BDMA1_BDMA_CCR3_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR3_TCIE		(1 << 1)
/** BDMA1_BDMA_CCR3_EN Channel enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR3_EN		(1 << 0)

/**@}*/

/** @defgroup bdma1_bdma_cndtr3 BDMACNDTR3 DMA channel x number of data register
@{*/


#define BDMA1_BDMA_CNDTR3_NDT_SHIFT		0
#define BDMA1_BDMA_CNDTR3_NDT_MASK		0xffff
/** @defgroup bdma1_bdma_cndtr3_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cpar3 BDMACPAR3 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CPAR3_PA_SHIFT		0
#define BDMA1_BDMA_CPAR3_PA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cpar3_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm0ar3 BDMACM0AR3 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CM0AR3_MA_SHIFT		0
#define BDMA1_BDMA_CM0AR3_MA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cm0ar3_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm1ar3 BDMACM1AR3 BDMA_CMAR3
@{*/


/**@}*/

/** @defgroup bdma1_bdma_ccr4 BDMACCR4 DMA channel x configuration register
@{*/

/** BDMA1_BDMA_CCR4_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR4_MEM2MEM		(1 << 14)

#define BDMA1_BDMA_CCR4_PL_SHIFT		12
#define BDMA1_BDMA_CCR4_PL_MASK		0x03
/** @defgroup bdma1_bdma_ccr4_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR4_MSIZE_SHIFT		10
#define BDMA1_BDMA_CCR4_MSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr4_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR4_PSIZE_SHIFT		8
#define BDMA1_BDMA_CCR4_PSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr4_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA1_BDMA_CCR4_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR4_MINC		(1 << 7)
/** BDMA1_BDMA_CCR4_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR4_PINC		(1 << 6)
/** BDMA1_BDMA_CCR4_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR4_CIRC		(1 << 5)
/** BDMA1_BDMA_CCR4_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR4_DIR		(1 << 4)
/** BDMA1_BDMA_CCR4_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR4_TEIE		(1 << 3)
/** BDMA1_BDMA_CCR4_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR4_HTIE		(1 << 2)
/** BDMA1_BDMA_CCR4_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR4_TCIE		(1 << 1)
/** BDMA1_BDMA_CCR4_EN Channel enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR4_EN		(1 << 0)

/**@}*/

/** @defgroup bdma1_bdma_cndtr4 BDMACNDTR4 DMA channel x number of data register
@{*/


#define BDMA1_BDMA_CNDTR4_NDT_SHIFT		0
#define BDMA1_BDMA_CNDTR4_NDT_MASK		0xffff
/** @defgroup bdma1_bdma_cndtr4_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cpar4 BDMACPAR4 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CPAR4_PA_SHIFT		0
#define BDMA1_BDMA_CPAR4_PA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cpar4_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm0ar4 BDMACM0AR4 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CM0AR4_MA_SHIFT		0
#define BDMA1_BDMA_CM0AR4_MA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cm0ar4_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm1ar4 BDMACM1AR4 BDMA_CM1AR4
@{*/


/**@}*/

/** @defgroup bdma1_bdma_ccr5 BDMACCR5 DMA channel x configuration register
@{*/

/** BDMA1_BDMA_CCR5_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR5_MEM2MEM		(1 << 14)

#define BDMA1_BDMA_CCR5_PL_SHIFT		12
#define BDMA1_BDMA_CCR5_PL_MASK		0x03
/** @defgroup bdma1_bdma_ccr5_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR5_MSIZE_SHIFT		10
#define BDMA1_BDMA_CCR5_MSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr5_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR5_PSIZE_SHIFT		8
#define BDMA1_BDMA_CCR5_PSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr5_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA1_BDMA_CCR5_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR5_MINC		(1 << 7)
/** BDMA1_BDMA_CCR5_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR5_PINC		(1 << 6)
/** BDMA1_BDMA_CCR5_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR5_CIRC		(1 << 5)
/** BDMA1_BDMA_CCR5_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR5_DIR		(1 << 4)
/** BDMA1_BDMA_CCR5_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR5_TEIE		(1 << 3)
/** BDMA1_BDMA_CCR5_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR5_HTIE		(1 << 2)
/** BDMA1_BDMA_CCR5_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR5_TCIE		(1 << 1)
/** BDMA1_BDMA_CCR5_EN Channel enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR5_EN		(1 << 0)

/**@}*/

/** @defgroup bdma1_bdma_cndtr5 BDMACNDTR5 DMA channel x number of data register
@{*/


#define BDMA1_BDMA_CNDTR5_NDT_SHIFT		0
#define BDMA1_BDMA_CNDTR5_NDT_MASK		0xffff
/** @defgroup bdma1_bdma_cndtr5_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cpar5 BDMACPAR5 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CPAR5_PA_SHIFT		0
#define BDMA1_BDMA_CPAR5_PA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cpar5_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm0ar5 BDMACM0AR5 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CM0AR5_MA_SHIFT		0
#define BDMA1_BDMA_CM0AR5_MA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cm0ar5_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm1ar5 BDMACM1AR5 This register must not be written when the channel is enabled.
@{*/


/**@}*/

/** @defgroup bdma1_bdma_ccr6 BDMACCR6 DMA channel x configuration register
@{*/

/** BDMA1_BDMA_CCR6_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR6_MEM2MEM		(1 << 14)

#define BDMA1_BDMA_CCR6_PL_SHIFT		12
#define BDMA1_BDMA_CCR6_PL_MASK		0x03
/** @defgroup bdma1_bdma_ccr6_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR6_MSIZE_SHIFT		10
#define BDMA1_BDMA_CCR6_MSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr6_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR6_PSIZE_SHIFT		8
#define BDMA1_BDMA_CCR6_PSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr6_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA1_BDMA_CCR6_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR6_MINC		(1 << 7)
/** BDMA1_BDMA_CCR6_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR6_PINC		(1 << 6)
/** BDMA1_BDMA_CCR6_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR6_CIRC		(1 << 5)
/** BDMA1_BDMA_CCR6_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR6_DIR		(1 << 4)
/** BDMA1_BDMA_CCR6_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR6_TEIE		(1 << 3)
/** BDMA1_BDMA_CCR6_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR6_HTIE		(1 << 2)
/** BDMA1_BDMA_CCR6_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR6_TCIE		(1 << 1)
/** BDMA1_BDMA_CCR6_EN Channel enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR6_EN		(1 << 0)

/**@}*/

/** @defgroup bdma1_bdma_cndtr6 BDMACNDTR6 DMA channel x number of data register
@{*/


#define BDMA1_BDMA_CNDTR6_NDT_SHIFT		0
#define BDMA1_BDMA_CNDTR6_NDT_MASK		0xffff
/** @defgroup bdma1_bdma_cndtr6_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cpar6 BDMACPAR6 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CPAR6_PA_SHIFT		0
#define BDMA1_BDMA_CPAR6_PA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cpar6_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm0ar6 BDMACM0AR6 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CM0AR6_MA_SHIFT		0
#define BDMA1_BDMA_CM0AR6_MA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cm0ar6_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm1ar6 BDMACM1AR6 This register must not be written when the channel is enabled.
@{*/


/**@}*/

/** @defgroup bdma1_bdma_ccr7 BDMACCR7 DMA channel x configuration register
@{*/

/** BDMA1_BDMA_CCR7_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR7_MEM2MEM		(1 << 14)

#define BDMA1_BDMA_CCR7_PL_SHIFT		12
#define BDMA1_BDMA_CCR7_PL_MASK		0x03
/** @defgroup bdma1_bdma_ccr7_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR7_MSIZE_SHIFT		10
#define BDMA1_BDMA_CCR7_MSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr7_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA1_BDMA_CCR7_PSIZE_SHIFT		8
#define BDMA1_BDMA_CCR7_PSIZE_MASK		0x03
/** @defgroup bdma1_bdma_ccr7_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA1_BDMA_CCR7_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR7_MINC		(1 << 7)
/** BDMA1_BDMA_CCR7_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR7_PINC		(1 << 6)
/** BDMA1_BDMA_CCR7_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR7_CIRC		(1 << 5)
/** BDMA1_BDMA_CCR7_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR7_DIR		(1 << 4)
/** BDMA1_BDMA_CCR7_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR7_TEIE		(1 << 3)
/** BDMA1_BDMA_CCR7_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR7_HTIE		(1 << 2)
/** BDMA1_BDMA_CCR7_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR7_TCIE		(1 << 1)
/** BDMA1_BDMA_CCR7_EN Channel enable This bit is set and cleared by software. **/
#define BDMA1_BDMA_CCR7_EN		(1 << 0)

/**@}*/

/** @defgroup bdma1_bdma_cndtr7 BDMACNDTR7 DMA channel x number of data register
@{*/


#define BDMA1_BDMA_CNDTR7_NDT_SHIFT		0
#define BDMA1_BDMA_CNDTR7_NDT_MASK		0xffff
/** @defgroup bdma1_bdma_cndtr7_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cpar7 BDMACPAR7 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CPAR7_PA_SHIFT		0
#define BDMA1_BDMA_CPAR7_PA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cpar7_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm0ar7 BDMACM0AR7 This register must not be written when the channel is enabled.
@{*/


#define BDMA1_BDMA_CM0AR7_MA_SHIFT		0
#define BDMA1_BDMA_CM0AR7_MA_MASK		0xffffffff
/** @defgroup bdma1_bdma_cm0ar7_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma1_bdma_cm1ar7 BDMACM1AR7 This register must not be written when the channel is enabled.
@{*/


/**@}*/
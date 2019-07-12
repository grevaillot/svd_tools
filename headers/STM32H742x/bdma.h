#pragma once 

/* --- BDMA: BDMA --------------------------------------------------- */

/** @defgroup bdma_registers BDMA Register
@{*/

/** BDMA_ISR DMA interrupt status register **/
#define BDMA_ISR			MMIO32(BDMA_BASE + 0x00)
/** BDMA_IFCR DMA interrupt flag clear register **/
#define BDMA_IFCR			MMIO32(BDMA_BASE + 0x04)
/** BDMA_CCR1 DMA channel x configuration register **/
#define BDMA_CCR1			MMIO32(BDMA_BASE + 0x08)
/** BDMA_CNDTR1 DMA channel x number of data register **/
#define BDMA_CNDTR1			MMIO32(BDMA_BASE + 0x0c)
/** BDMA_CPAR1 This register must not be written when the channel is enabled. **/
#define BDMA_CPAR1			MMIO32(BDMA_BASE + 0x10)
/** BDMA_CMAR1 This register must not be written when the channel is enabled. **/
#define BDMA_CMAR1			MMIO32(BDMA_BASE + 0x14)
/** BDMA_CCR2 DMA channel x configuration register **/
#define BDMA_CCR2			MMIO32(BDMA_BASE + 0x1c)
/** BDMA_CNDTR2 DMA channel x number of data register **/
#define BDMA_CNDTR2			MMIO32(BDMA_BASE + 0x20)
/** BDMA_CPAR2 This register must not be written when the channel is enabled. **/
#define BDMA_CPAR2			MMIO32(BDMA_BASE + 0x24)
/** BDMA_CMAR2 This register must not be written when the channel is enabled. **/
#define BDMA_CMAR2			MMIO32(BDMA_BASE + 0x28)
/** BDMA_CCR3 DMA channel x configuration register **/
#define BDMA_CCR3			MMIO32(BDMA_BASE + 0x30)
/** BDMA_CNDTR3 DMA channel x number of data register **/
#define BDMA_CNDTR3			MMIO32(BDMA_BASE + 0x34)
/** BDMA_CPAR3 This register must not be written when the channel is enabled. **/
#define BDMA_CPAR3			MMIO32(BDMA_BASE + 0x38)
/** BDMA_CMAR3 This register must not be written when the channel is enabled. **/
#define BDMA_CMAR3			MMIO32(BDMA_BASE + 0x3c)
/** BDMA_CCR4 DMA channel x configuration register **/
#define BDMA_CCR4			MMIO32(BDMA_BASE + 0x44)
/** BDMA_CNDTR4 DMA channel x number of data register **/
#define BDMA_CNDTR4			MMIO32(BDMA_BASE + 0x48)
/** BDMA_CPAR4 This register must not be written when the channel is enabled. **/
#define BDMA_CPAR4			MMIO32(BDMA_BASE + 0x4c)
/** BDMA_CMAR4 This register must not be written when the channel is enabled. **/
#define BDMA_CMAR4			MMIO32(BDMA_BASE + 0x50)
/** BDMA_CCR5 DMA channel x configuration register **/
#define BDMA_CCR5			MMIO32(BDMA_BASE + 0x58)
/** BDMA_CNDTR5 DMA channel x number of data register **/
#define BDMA_CNDTR5			MMIO32(BDMA_BASE + 0x5c)
/** BDMA_CPAR5 This register must not be written when the channel is enabled. **/
#define BDMA_CPAR5			MMIO32(BDMA_BASE + 0x60)
/** BDMA_CMAR5 This register must not be written when the channel is enabled. **/
#define BDMA_CMAR5			MMIO32(BDMA_BASE + 0x64)
/** BDMA_CCR6 DMA channel x configuration register **/
#define BDMA_CCR6			MMIO32(BDMA_BASE + 0x6c)
/** BDMA_CNDTR6 DMA channel x number of data register **/
#define BDMA_CNDTR6			MMIO32(BDMA_BASE + 0x70)
/** BDMA_CPAR6 This register must not be written when the channel is enabled. **/
#define BDMA_CPAR6			MMIO32(BDMA_BASE + 0x74)
/** BDMA_CMAR6 This register must not be written when the channel is enabled. **/
#define BDMA_CMAR6			MMIO32(BDMA_BASE + 0x78)
/** BDMA_CCR7 DMA channel x configuration register **/
#define BDMA_CCR7			MMIO32(BDMA_BASE + 0x80)
/** BDMA_CNDTR7 DMA channel x number of data register **/
#define BDMA_CNDTR7			MMIO32(BDMA_BASE + 0x84)
/** BDMA_CPAR7 This register must not be written when the channel is enabled. **/
#define BDMA_CPAR7			MMIO32(BDMA_BASE + 0x88)
/** BDMA_CMAR7 This register must not be written when the channel is enabled. **/
#define BDMA_CMAR7			MMIO32(BDMA_BASE + 0x8c)
/** BDMA_CCR8 DMA channel x configuration register **/
#define BDMA_CCR8			MMIO32(BDMA_BASE + 0x94)
/** BDMA_CNDTR8 DMA channel x number of data register **/
#define BDMA_CNDTR8			MMIO32(BDMA_BASE + 0x98)
/** BDMA_CPAR8 This register must not be written when the channel is enabled. **/
#define BDMA_CPAR8			MMIO32(BDMA_BASE + 0x9c)
/** BDMA_CMAR8 This register must not be written when the channel is enabled. **/
#define BDMA_CMAR8			MMIO32(BDMA_BASE + 0xa0)

/**@}*/


/** @defgroup bdma_isr ISR DMA interrupt status register
@{*/

/** BDMA_ISR_TEIF8 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TEIF8		(1 << 31)
/** BDMA_ISR_HTIF8 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_HTIF8		(1 << 30)
/** BDMA_ISR_TCIF8 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TCIF8		(1 << 29)
/** BDMA_ISR_GIF8 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_GIF8		(1 << 28)
/** BDMA_ISR_TEIF7 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TEIF7		(1 << 27)
/** BDMA_ISR_HTIF7 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_HTIF7		(1 << 26)
/** BDMA_ISR_TCIF7 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TCIF7		(1 << 25)
/** BDMA_ISR_GIF7 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_GIF7		(1 << 24)
/** BDMA_ISR_TEIF6 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TEIF6		(1 << 23)
/** BDMA_ISR_HTIF6 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_HTIF6		(1 << 22)
/** BDMA_ISR_TCIF6 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TCIF6		(1 << 21)
/** BDMA_ISR_GIF6 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_GIF6		(1 << 20)
/** BDMA_ISR_TEIF5 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TEIF5		(1 << 19)
/** BDMA_ISR_HTIF5 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_HTIF5		(1 << 18)
/** BDMA_ISR_TCIF5 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TCIF5		(1 << 17)
/** BDMA_ISR_GIF5 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_GIF5		(1 << 16)
/** BDMA_ISR_TEIF4 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TEIF4		(1 << 15)
/** BDMA_ISR_HTIF4 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_HTIF4		(1 << 14)
/** BDMA_ISR_TCIF4 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TCIF4		(1 << 13)
/** BDMA_ISR_GIF4 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_GIF4		(1 << 12)
/** BDMA_ISR_TEIF3 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TEIF3		(1 << 11)
/** BDMA_ISR_HTIF3 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_HTIF3		(1 << 10)
/** BDMA_ISR_TCIF3 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TCIF3		(1 << 9)
/** BDMA_ISR_GIF3 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_GIF3		(1 << 8)
/** BDMA_ISR_TEIF2 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TEIF2		(1 << 7)
/** BDMA_ISR_HTIF2 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_HTIF2		(1 << 6)
/** BDMA_ISR_TCIF2 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TCIF2		(1 << 5)
/** BDMA_ISR_GIF2 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_GIF2		(1 << 4)
/** BDMA_ISR_TEIF1 Channel x transfer error flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TEIF1		(1 << 3)
/** BDMA_ISR_HTIF1 Channel x half transfer flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_HTIF1		(1 << 2)
/** BDMA_ISR_TCIF1 Channel x transfer complete flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_TCIF1		(1 << 1)
/** BDMA_ISR_GIF1 Channel x global interrupt flag (x = 1..8) This bit is set by hardware. It is cleared by software writing 1 to the corresponding bit in the DMA_IFCR register. **/
#define BDMA_ISR_GIF1		(1 << 0)

/**@}*/

/** @defgroup bdma_ifcr IFCR DMA interrupt flag clear register
@{*/

/** BDMA_IFCR_CTEIF8 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTEIF8		(1 << 31)
/** BDMA_IFCR_CHTIF8 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CHTIF8		(1 << 30)
/** BDMA_IFCR_CTCIF8 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTCIF8		(1 << 29)
/** BDMA_IFCR_CGIF8 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CGIF8		(1 << 28)
/** BDMA_IFCR_CTEIF7 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTEIF7		(1 << 27)
/** BDMA_IFCR_CHTIF7 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CHTIF7		(1 << 26)
/** BDMA_IFCR_CTCIF7 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTCIF7		(1 << 25)
/** BDMA_IFCR_CGIF7 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CGIF7		(1 << 24)
/** BDMA_IFCR_CTEIF6 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTEIF6		(1 << 23)
/** BDMA_IFCR_CHTIF6 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CHTIF6		(1 << 22)
/** BDMA_IFCR_CTCIF6 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTCIF6		(1 << 21)
/** BDMA_IFCR_CGIF6 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CGIF6		(1 << 20)
/** BDMA_IFCR_CTEIF5 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTEIF5		(1 << 19)
/** BDMA_IFCR_CHTIF5 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CHTIF5		(1 << 18)
/** BDMA_IFCR_CTCIF5 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTCIF5		(1 << 17)
/** BDMA_IFCR_CGIF5 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CGIF5		(1 << 16)
/** BDMA_IFCR_CTEIF4 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTEIF4		(1 << 15)
/** BDMA_IFCR_CHTIF4 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CHTIF4		(1 << 14)
/** BDMA_IFCR_CTCIF4 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTCIF4		(1 << 13)
/** BDMA_IFCR_CGIF4 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CGIF4		(1 << 12)
/** BDMA_IFCR_CTEIF3 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTEIF3		(1 << 11)
/** BDMA_IFCR_CHTIF3 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CHTIF3		(1 << 10)
/** BDMA_IFCR_CTCIF3 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTCIF3		(1 << 9)
/** BDMA_IFCR_CGIF3 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CGIF3		(1 << 8)
/** BDMA_IFCR_CTEIF2 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTEIF2		(1 << 7)
/** BDMA_IFCR_CHTIF2 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CHTIF2		(1 << 6)
/** BDMA_IFCR_CTCIF2 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTCIF2		(1 << 5)
/** BDMA_IFCR_CGIF2 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CGIF2		(1 << 4)
/** BDMA_IFCR_CTEIF1 Channel x transfer error clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTEIF1		(1 << 3)
/** BDMA_IFCR_CHTIF1 Channel x half transfer clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CHTIF1		(1 << 2)
/** BDMA_IFCR_CTCIF1 Channel x transfer complete clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CTCIF1		(1 << 1)
/** BDMA_IFCR_CGIF1 Channel x global interrupt clear This bit is set and cleared by software. **/
#define BDMA_IFCR_CGIF1		(1 << 0)

/**@}*/

/** @defgroup bdma_ccr1 CCR1 DMA channel x configuration register
@{*/

/** BDMA_CCR1_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA_CCR1_MEM2MEM		(1 << 14)

#define BDMA_CCR1_PL_SHIFT		12
#define BDMA_CCR1_PL_MASK		0x03
/** @defgroup bdma_ccr1_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR1_MSIZE_SHIFT		10
#define BDMA_CCR1_MSIZE_MASK		0x03
/** @defgroup bdma_ccr1_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR1_PSIZE_SHIFT		8
#define BDMA_CCR1_PSIZE_MASK		0x03
/** @defgroup bdma_ccr1_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA_CCR1_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA_CCR1_MINC		(1 << 7)
/** BDMA_CCR1_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA_CCR1_PINC		(1 << 6)
/** BDMA_CCR1_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA_CCR1_CIRC		(1 << 5)
/** BDMA_CCR1_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA_CCR1_DIR		(1 << 4)
/** BDMA_CCR1_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR1_TEIE		(1 << 3)
/** BDMA_CCR1_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR1_HTIE		(1 << 2)
/** BDMA_CCR1_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR1_TCIE		(1 << 1)
/** BDMA_CCR1_EN Channel enable This bit is set and cleared by software. **/
#define BDMA_CCR1_EN		(1 << 0)

/**@}*/

/** @defgroup bdma_cndtr1 CNDTR1 DMA channel x number of data register
@{*/


#define BDMA_CNDTR1_NDT_SHIFT		0
#define BDMA_CNDTR1_NDT_MASK		0xffff
/** @defgroup bdma_cndtr1_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cpar1 CPAR1 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CPAR1_PA_SHIFT		0
#define BDMA_CPAR1_PA_MASK		0xffffffff
/** @defgroup bdma_cpar1_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cmar1 CMAR1 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CMAR1_MA_SHIFT		0
#define BDMA_CMAR1_MA_MASK		0xffffffff
/** @defgroup bdma_cmar1_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_ccr2 CCR2 DMA channel x configuration register
@{*/

/** BDMA_CCR2_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA_CCR2_MEM2MEM		(1 << 14)

#define BDMA_CCR2_PL_SHIFT		12
#define BDMA_CCR2_PL_MASK		0x03
/** @defgroup bdma_ccr2_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR2_MSIZE_SHIFT		10
#define BDMA_CCR2_MSIZE_MASK		0x03
/** @defgroup bdma_ccr2_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR2_PSIZE_SHIFT		8
#define BDMA_CCR2_PSIZE_MASK		0x03
/** @defgroup bdma_ccr2_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA_CCR2_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA_CCR2_MINC		(1 << 7)
/** BDMA_CCR2_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA_CCR2_PINC		(1 << 6)
/** BDMA_CCR2_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA_CCR2_CIRC		(1 << 5)
/** BDMA_CCR2_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA_CCR2_DIR		(1 << 4)
/** BDMA_CCR2_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR2_TEIE		(1 << 3)
/** BDMA_CCR2_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR2_HTIE		(1 << 2)
/** BDMA_CCR2_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR2_TCIE		(1 << 1)
/** BDMA_CCR2_EN Channel enable This bit is set and cleared by software. **/
#define BDMA_CCR2_EN		(1 << 0)

/**@}*/

/** @defgroup bdma_cndtr2 CNDTR2 DMA channel x number of data register
@{*/


#define BDMA_CNDTR2_NDT_SHIFT		0
#define BDMA_CNDTR2_NDT_MASK		0xffff
/** @defgroup bdma_cndtr2_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cpar2 CPAR2 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CPAR2_PA_SHIFT		0
#define BDMA_CPAR2_PA_MASK		0xffffffff
/** @defgroup bdma_cpar2_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cmar2 CMAR2 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CMAR2_MA_SHIFT		0
#define BDMA_CMAR2_MA_MASK		0xffffffff
/** @defgroup bdma_cmar2_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_ccr3 CCR3 DMA channel x configuration register
@{*/

/** BDMA_CCR3_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA_CCR3_MEM2MEM		(1 << 14)

#define BDMA_CCR3_PL_SHIFT		12
#define BDMA_CCR3_PL_MASK		0x03
/** @defgroup bdma_ccr3_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR3_MSIZE_SHIFT		10
#define BDMA_CCR3_MSIZE_MASK		0x03
/** @defgroup bdma_ccr3_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR3_PSIZE_SHIFT		8
#define BDMA_CCR3_PSIZE_MASK		0x03
/** @defgroup bdma_ccr3_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA_CCR3_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA_CCR3_MINC		(1 << 7)
/** BDMA_CCR3_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA_CCR3_PINC		(1 << 6)
/** BDMA_CCR3_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA_CCR3_CIRC		(1 << 5)
/** BDMA_CCR3_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA_CCR3_DIR		(1 << 4)
/** BDMA_CCR3_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR3_TEIE		(1 << 3)
/** BDMA_CCR3_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR3_HTIE		(1 << 2)
/** BDMA_CCR3_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR3_TCIE		(1 << 1)
/** BDMA_CCR3_EN Channel enable This bit is set and cleared by software. **/
#define BDMA_CCR3_EN		(1 << 0)

/**@}*/

/** @defgroup bdma_cndtr3 CNDTR3 DMA channel x number of data register
@{*/


#define BDMA_CNDTR3_NDT_SHIFT		0
#define BDMA_CNDTR3_NDT_MASK		0xffff
/** @defgroup bdma_cndtr3_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cpar3 CPAR3 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CPAR3_PA_SHIFT		0
#define BDMA_CPAR3_PA_MASK		0xffffffff
/** @defgroup bdma_cpar3_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cmar3 CMAR3 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CMAR3_MA_SHIFT		0
#define BDMA_CMAR3_MA_MASK		0xffffffff
/** @defgroup bdma_cmar3_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_ccr4 CCR4 DMA channel x configuration register
@{*/

/** BDMA_CCR4_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA_CCR4_MEM2MEM		(1 << 14)

#define BDMA_CCR4_PL_SHIFT		12
#define BDMA_CCR4_PL_MASK		0x03
/** @defgroup bdma_ccr4_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR4_MSIZE_SHIFT		10
#define BDMA_CCR4_MSIZE_MASK		0x03
/** @defgroup bdma_ccr4_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR4_PSIZE_SHIFT		8
#define BDMA_CCR4_PSIZE_MASK		0x03
/** @defgroup bdma_ccr4_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA_CCR4_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA_CCR4_MINC		(1 << 7)
/** BDMA_CCR4_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA_CCR4_PINC		(1 << 6)
/** BDMA_CCR4_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA_CCR4_CIRC		(1 << 5)
/** BDMA_CCR4_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA_CCR4_DIR		(1 << 4)
/** BDMA_CCR4_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR4_TEIE		(1 << 3)
/** BDMA_CCR4_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR4_HTIE		(1 << 2)
/** BDMA_CCR4_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR4_TCIE		(1 << 1)
/** BDMA_CCR4_EN Channel enable This bit is set and cleared by software. **/
#define BDMA_CCR4_EN		(1 << 0)

/**@}*/

/** @defgroup bdma_cndtr4 CNDTR4 DMA channel x number of data register
@{*/


#define BDMA_CNDTR4_NDT_SHIFT		0
#define BDMA_CNDTR4_NDT_MASK		0xffff
/** @defgroup bdma_cndtr4_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cpar4 CPAR4 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CPAR4_PA_SHIFT		0
#define BDMA_CPAR4_PA_MASK		0xffffffff
/** @defgroup bdma_cpar4_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cmar4 CMAR4 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CMAR4_MA_SHIFT		0
#define BDMA_CMAR4_MA_MASK		0xffffffff
/** @defgroup bdma_cmar4_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_ccr5 CCR5 DMA channel x configuration register
@{*/

/** BDMA_CCR5_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA_CCR5_MEM2MEM		(1 << 14)

#define BDMA_CCR5_PL_SHIFT		12
#define BDMA_CCR5_PL_MASK		0x03
/** @defgroup bdma_ccr5_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR5_MSIZE_SHIFT		10
#define BDMA_CCR5_MSIZE_MASK		0x03
/** @defgroup bdma_ccr5_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR5_PSIZE_SHIFT		8
#define BDMA_CCR5_PSIZE_MASK		0x03
/** @defgroup bdma_ccr5_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA_CCR5_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA_CCR5_MINC		(1 << 7)
/** BDMA_CCR5_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA_CCR5_PINC		(1 << 6)
/** BDMA_CCR5_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA_CCR5_CIRC		(1 << 5)
/** BDMA_CCR5_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA_CCR5_DIR		(1 << 4)
/** BDMA_CCR5_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR5_TEIE		(1 << 3)
/** BDMA_CCR5_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR5_HTIE		(1 << 2)
/** BDMA_CCR5_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR5_TCIE		(1 << 1)
/** BDMA_CCR5_EN Channel enable This bit is set and cleared by software. **/
#define BDMA_CCR5_EN		(1 << 0)

/**@}*/

/** @defgroup bdma_cndtr5 CNDTR5 DMA channel x number of data register
@{*/


#define BDMA_CNDTR5_NDT_SHIFT		0
#define BDMA_CNDTR5_NDT_MASK		0xffff
/** @defgroup bdma_cndtr5_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cpar5 CPAR5 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CPAR5_PA_SHIFT		0
#define BDMA_CPAR5_PA_MASK		0xffffffff
/** @defgroup bdma_cpar5_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cmar5 CMAR5 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CMAR5_MA_SHIFT		0
#define BDMA_CMAR5_MA_MASK		0xffffffff
/** @defgroup bdma_cmar5_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_ccr6 CCR6 DMA channel x configuration register
@{*/

/** BDMA_CCR6_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA_CCR6_MEM2MEM		(1 << 14)

#define BDMA_CCR6_PL_SHIFT		12
#define BDMA_CCR6_PL_MASK		0x03
/** @defgroup bdma_ccr6_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR6_MSIZE_SHIFT		10
#define BDMA_CCR6_MSIZE_MASK		0x03
/** @defgroup bdma_ccr6_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR6_PSIZE_SHIFT		8
#define BDMA_CCR6_PSIZE_MASK		0x03
/** @defgroup bdma_ccr6_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA_CCR6_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA_CCR6_MINC		(1 << 7)
/** BDMA_CCR6_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA_CCR6_PINC		(1 << 6)
/** BDMA_CCR6_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA_CCR6_CIRC		(1 << 5)
/** BDMA_CCR6_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA_CCR6_DIR		(1 << 4)
/** BDMA_CCR6_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR6_TEIE		(1 << 3)
/** BDMA_CCR6_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR6_HTIE		(1 << 2)
/** BDMA_CCR6_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR6_TCIE		(1 << 1)
/** BDMA_CCR6_EN Channel enable This bit is set and cleared by software. **/
#define BDMA_CCR6_EN		(1 << 0)

/**@}*/

/** @defgroup bdma_cndtr6 CNDTR6 DMA channel x number of data register
@{*/


#define BDMA_CNDTR6_NDT_SHIFT		0
#define BDMA_CNDTR6_NDT_MASK		0xffff
/** @defgroup bdma_cndtr6_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cpar6 CPAR6 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CPAR6_PA_SHIFT		0
#define BDMA_CPAR6_PA_MASK		0xffffffff
/** @defgroup bdma_cpar6_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cmar6 CMAR6 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CMAR6_MA_SHIFT		0
#define BDMA_CMAR6_MA_MASK		0xffffffff
/** @defgroup bdma_cmar6_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_ccr7 CCR7 DMA channel x configuration register
@{*/

/** BDMA_CCR7_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA_CCR7_MEM2MEM		(1 << 14)

#define BDMA_CCR7_PL_SHIFT		12
#define BDMA_CCR7_PL_MASK		0x03
/** @defgroup bdma_ccr7_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR7_MSIZE_SHIFT		10
#define BDMA_CCR7_MSIZE_MASK		0x03
/** @defgroup bdma_ccr7_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR7_PSIZE_SHIFT		8
#define BDMA_CCR7_PSIZE_MASK		0x03
/** @defgroup bdma_ccr7_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA_CCR7_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA_CCR7_MINC		(1 << 7)
/** BDMA_CCR7_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA_CCR7_PINC		(1 << 6)
/** BDMA_CCR7_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA_CCR7_CIRC		(1 << 5)
/** BDMA_CCR7_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA_CCR7_DIR		(1 << 4)
/** BDMA_CCR7_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR7_TEIE		(1 << 3)
/** BDMA_CCR7_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR7_HTIE		(1 << 2)
/** BDMA_CCR7_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR7_TCIE		(1 << 1)
/** BDMA_CCR7_EN Channel enable This bit is set and cleared by software. **/
#define BDMA_CCR7_EN		(1 << 0)

/**@}*/

/** @defgroup bdma_cndtr7 CNDTR7 DMA channel x number of data register
@{*/


#define BDMA_CNDTR7_NDT_SHIFT		0
#define BDMA_CNDTR7_NDT_MASK		0xffff
/** @defgroup bdma_cndtr7_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cpar7 CPAR7 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CPAR7_PA_SHIFT		0
#define BDMA_CPAR7_PA_MASK		0xffffffff
/** @defgroup bdma_cpar7_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cmar7 CMAR7 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CMAR7_MA_SHIFT		0
#define BDMA_CMAR7_MA_MASK		0xffffffff
/** @defgroup bdma_cmar7_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_ccr8 CCR8 DMA channel x configuration register
@{*/

/** BDMA_CCR8_MEM2MEM Memory to memory mode This bit is set and cleared by software. **/
#define BDMA_CCR8_MEM2MEM		(1 << 14)

#define BDMA_CCR8_PL_SHIFT		12
#define BDMA_CCR8_PL_MASK		0x03
/** @defgroup bdma_ccr8_pl PL Channel priority level These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR8_MSIZE_SHIFT		10
#define BDMA_CCR8_MSIZE_MASK		0x03
/** @defgroup bdma_ccr8_msize MSIZE Memory size These bits are set and cleared by software.
@{*/
/**@}*/


#define BDMA_CCR8_PSIZE_SHIFT		8
#define BDMA_CCR8_PSIZE_MASK		0x03
/** @defgroup bdma_ccr8_psize PSIZE Peripheral size These bits are set and cleared by software.
@{*/
/**@}*/

/** BDMA_CCR8_MINC Memory increment mode This bit is set and cleared by software. **/
#define BDMA_CCR8_MINC		(1 << 7)
/** BDMA_CCR8_PINC Peripheral increment mode This bit is set and cleared by software. **/
#define BDMA_CCR8_PINC		(1 << 6)
/** BDMA_CCR8_CIRC Circular mode This bit is set and cleared by software. **/
#define BDMA_CCR8_CIRC		(1 << 5)
/** BDMA_CCR8_DIR Data transfer direction This bit is set and cleared by software. **/
#define BDMA_CCR8_DIR		(1 << 4)
/** BDMA_CCR8_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR8_TEIE		(1 << 3)
/** BDMA_CCR8_HTIE Half transfer interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR8_HTIE		(1 << 2)
/** BDMA_CCR8_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define BDMA_CCR8_TCIE		(1 << 1)
/** BDMA_CCR8_EN Channel enable This bit is set and cleared by software. **/
#define BDMA_CCR8_EN		(1 << 0)

/**@}*/

/** @defgroup bdma_cndtr8 CNDTR8 DMA channel x number of data register
@{*/


#define BDMA_CNDTR8_NDT_SHIFT		0
#define BDMA_CNDTR8_NDT_MASK		0xffff
/** @defgroup bdma_cndtr8_ndt NDT Number of data to transfer Number of data to be transferred (0 up to 65535). This register can only be written when the channel is disabled. Once the channel is enabled, this register is read-only, indicating the remaining bytes to be transmitted. This register decrements after each DMA transfer. Once the transfer is completed, this register can either stay at zero or be reloaded automatically by the value previously programmed if the channel is configured in auto-reload mode. If this register is zero, no transaction can be served whether the channel is enabled or not.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cpar8 CPAR8 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CPAR8_PA_SHIFT		0
#define BDMA_CPAR8_PA_MASK		0xffffffff
/** @defgroup bdma_cpar8_pa PA Peripheral address Base address of the peripheral data register from/to which the data will be read/written. When PSIZE is 01 (16-bit), the PA[0] bit is ignored. Access is automatically aligned to a half-word address. When PSIZE is 10 (32-bit), PA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

/** @defgroup bdma_cmar8 CMAR8 This register must not be written when the channel is enabled.
@{*/


#define BDMA_CMAR8_MA_SHIFT		0
#define BDMA_CMAR8_MA_MASK		0xffffffff
/** @defgroup bdma_cmar8_ma MA Memory address Base address of the memory area from/to which the data will be read/written. When MSIZE is 01 (16-bit), the MA[0] bit is ignored. Access is automatically aligned to a half-word address. When MSIZE is 10 (32-bit), MA[1:0] are ignored. Access is automatically aligned to a word address.
@{*/
/**@}*/


/**@}*/

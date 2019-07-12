#pragma once 

/* --- DMA: DMA controller ------------------------------------------ */

/** @defgroup dma_registers DMA controller Register
@{*/

/** DMA_ISR low interrupt status register **/
#define DMA_ISR			MMIO32(DMA_BASE + 0x00)
/** DMA_IFCR high interrupt status register **/
#define DMA_IFCR			MMIO32(DMA_BASE + 0x04)
/** DMA_CCR1 DMA channel x configuration register **/
#define DMA_CCR1			MMIO32(DMA_BASE + 0x08)
/** DMA_CNDTR1 DMA channel x number of data register **/
#define DMA_CNDTR1			MMIO32(DMA_BASE + 0x0c)
/** DMA_CPAR1 DMA channel x peripheral address register **/
#define DMA_CPAR1			MMIO32(DMA_BASE + 0x10)
/** DMA_CMAR1 DMA channel x memory address register **/
#define DMA_CMAR1			MMIO32(DMA_BASE + 0x14)
/** DMA_CCR2 DMA channel x configuration register **/
#define DMA_CCR2			MMIO32(DMA_BASE + 0x1c)
/** DMA_CNDTR2 DMA channel x number of data register **/
#define DMA_CNDTR2			MMIO32(DMA_BASE + 0x20)
/** DMA_CPAR2 DMA channel x peripheral address register **/
#define DMA_CPAR2			MMIO32(DMA_BASE + 0x24)
/** DMA_CMAR2 DMA channel x memory address register **/
#define DMA_CMAR2			MMIO32(DMA_BASE + 0x28)
/** DMA_CCR3 DMA channel x configuration register **/
#define DMA_CCR3			MMIO32(DMA_BASE + 0x30)
/** DMA_CNDTR3 DMA channel x configuration register **/
#define DMA_CNDTR3			MMIO32(DMA_BASE + 0x34)
/** DMA_CPAR3 DMA channel x peripheral address register **/
#define DMA_CPAR3			MMIO32(DMA_BASE + 0x38)
/** DMA_CMAR3 DMA channel x memory address register **/
#define DMA_CMAR3			MMIO32(DMA_BASE + 0x3c)
/** DMA_CCR4 DMA channel x configuration register **/
#define DMA_CCR4			MMIO32(DMA_BASE + 0x44)
/** DMA_CNDTR4 DMA channel x configuration register **/
#define DMA_CNDTR4			MMIO32(DMA_BASE + 0x48)
/** DMA_CPAR4 DMA channel x peripheral address register **/
#define DMA_CPAR4			MMIO32(DMA_BASE + 0x4c)
/** DMA_CMAR4 DMA channel x memory address register **/
#define DMA_CMAR4			MMIO32(DMA_BASE + 0x50)
/** DMA_CCR5 DMA channel x configuration register **/
#define DMA_CCR5			MMIO32(DMA_BASE + 0x58)
/** DMA_CNDTR5 DMA channel x configuration register **/
#define DMA_CNDTR5			MMIO32(DMA_BASE + 0x5c)
/** DMA_CPAR5 DMA channel x peripheral address register **/
#define DMA_CPAR5			MMIO32(DMA_BASE + 0x60)
/** DMA_CMAR5 DMA channel x memory address register **/
#define DMA_CMAR5			MMIO32(DMA_BASE + 0x64)
/** DMA_CCR6 DMA channel x configuration register **/
#define DMA_CCR6			MMIO32(DMA_BASE + 0x6c)
/** DMA_CNDTR6 DMA channel x configuration register **/
#define DMA_CNDTR6			MMIO32(DMA_BASE + 0x70)
/** DMA_CPAR6 DMA channel x peripheral address register **/
#define DMA_CPAR6			MMIO32(DMA_BASE + 0x74)
/** DMA_CMAR6 DMA channel x memory address register **/
#define DMA_CMAR6			MMIO32(DMA_BASE + 0x78)
/** DMA_CCR7 DMA channel x configuration register **/
#define DMA_CCR7			MMIO32(DMA_BASE + 0x80)
/** DMA_CNDTR7 DMA channel x configuration register **/
#define DMA_CNDTR7			MMIO32(DMA_BASE + 0x84)
/** DMA_CPAR7 DMA channel x peripheral address register **/
#define DMA_CPAR7			MMIO32(DMA_BASE + 0x88)
/** DMA_CMAR7 DMA channel x memory address register **/
#define DMA_CMAR7			MMIO32(DMA_BASE + 0x8c)

/**@}*/


/** @defgroup dma_isr ISR low interrupt status register
@{*/

/** DMA_ISR_TEIF27 Channel transfer error flag **/
#define DMA_ISR_TEIF27		(1 << 27)
/** DMA_ISR_HTIF26 Channel half transfer flag **/
#define DMA_ISR_HTIF26		(1 << 26)
/** DMA_ISR_TCIF25 Channel transfer complete flag **/
#define DMA_ISR_TCIF25		(1 << 25)
/** DMA_ISR_GIF24 Channel global interrupt flag **/
#define DMA_ISR_GIF24		(1 << 24)
/** DMA_ISR_TEIF23 Channel transfer error flag **/
#define DMA_ISR_TEIF23		(1 << 23)
/** DMA_ISR_HTIF22 Channel half transfer flag **/
#define DMA_ISR_HTIF22		(1 << 22)
/** DMA_ISR_TCIF21 Channel transfer complete flag **/
#define DMA_ISR_TCIF21		(1 << 21)
/** DMA_ISR_GIF20 Channel global interrupt flag **/
#define DMA_ISR_GIF20		(1 << 20)
/** DMA_ISR_TEIF19 Channel transfer error flag **/
#define DMA_ISR_TEIF19		(1 << 19)
/** DMA_ISR_HTIF18 Channel half transfer flag **/
#define DMA_ISR_HTIF18		(1 << 18)
/** DMA_ISR_TCIF17 Channel transfer complete flag **/
#define DMA_ISR_TCIF17		(1 << 17)
/** DMA_ISR_GIF16 Channel global interrupt flag **/
#define DMA_ISR_GIF16		(1 << 16)
/** DMA_ISR_TEIF15 Channel transfer error flag **/
#define DMA_ISR_TEIF15		(1 << 15)
/** DMA_ISR_HTIF14 Channel half transfer flag **/
#define DMA_ISR_HTIF14		(1 << 14)
/** DMA_ISR_TCIF13 Channel transfer complete flag **/
#define DMA_ISR_TCIF13		(1 << 13)
/** DMA_ISR_GIF12 Channel global interrupt flag **/
#define DMA_ISR_GIF12		(1 << 12)
/** DMA_ISR_TEIF11 Channel transfer error flag **/
#define DMA_ISR_TEIF11		(1 << 11)
/** DMA_ISR_HTIF10 Channel half transfer flag **/
#define DMA_ISR_HTIF10		(1 << 10)
/** DMA_ISR_TCIF9 Channel transfer complete flag **/
#define DMA_ISR_TCIF9		(1 << 9)
/** DMA_ISR_GIF8 Channel global interrupt flag **/
#define DMA_ISR_GIF8		(1 << 8)
/** DMA_ISR_TEIF7 Channel transfer error flag **/
#define DMA_ISR_TEIF7		(1 << 7)
/** DMA_ISR_HTIF6 Channel half transfer flag **/
#define DMA_ISR_HTIF6		(1 << 6)
/** DMA_ISR_TCIF5 Channel transfer complete flag **/
#define DMA_ISR_TCIF5		(1 << 5)
/** DMA_ISR_GIF4 Channel global interrupt flag **/
#define DMA_ISR_GIF4		(1 << 4)
/** DMA_ISR_TEIF3 Channel transfer error flag **/
#define DMA_ISR_TEIF3		(1 << 3)
/** DMA_ISR_HTIF2 Channel half transfer flag **/
#define DMA_ISR_HTIF2		(1 << 2)
/** DMA_ISR_TCIF1 Channel transfer complete flag **/
#define DMA_ISR_TCIF1		(1 << 1)
/** DMA_ISR_GIF0 Channel global interrupt flag **/
#define DMA_ISR_GIF0		(1 << 0)

/**@}*/

/** @defgroup dma_ifcr IFCR high interrupt status register
@{*/

/** DMA_IFCR_CTEIF27 Channel transfer error flag **/
#define DMA_IFCR_CTEIF27		(1 << 27)
/** DMA_IFCR_CHTIF26 Channel half transfer flag **/
#define DMA_IFCR_CHTIF26		(1 << 26)
/** DMA_IFCR_CTCIF25 Channel transfer complete flag **/
#define DMA_IFCR_CTCIF25		(1 << 25)
/** DMA_IFCR_CGIF24 Channel global interrupt flag **/
#define DMA_IFCR_CGIF24		(1 << 24)
/** DMA_IFCR_CTEIF23 Channel transfer error flag **/
#define DMA_IFCR_CTEIF23		(1 << 23)
/** DMA_IFCR_CHTIF22 Channel half transfer flag **/
#define DMA_IFCR_CHTIF22		(1 << 22)
/** DMA_IFCR_CTCIF21 Channel transfer complete flag **/
#define DMA_IFCR_CTCIF21		(1 << 21)
/** DMA_IFCR_CGIF20 Channel global interrupt flag **/
#define DMA_IFCR_CGIF20		(1 << 20)
/** DMA_IFCR_CTEIF19 Channel transfer error flag **/
#define DMA_IFCR_CTEIF19		(1 << 19)
/** DMA_IFCR_CHTIF18 Channel half transfer flag **/
#define DMA_IFCR_CHTIF18		(1 << 18)
/** DMA_IFCR_CTCIF17 Channel transfer complete flag **/
#define DMA_IFCR_CTCIF17		(1 << 17)
/** DMA_IFCR_CGIF16 Channel global interrupt flag **/
#define DMA_IFCR_CGIF16		(1 << 16)
/** DMA_IFCR_CTEIF15 Channel transfer error flag **/
#define DMA_IFCR_CTEIF15		(1 << 15)
/** DMA_IFCR_CHTIF14 Channel half transfer flag **/
#define DMA_IFCR_CHTIF14		(1 << 14)
/** DMA_IFCR_CTCIF13 Channel transfer complete flag **/
#define DMA_IFCR_CTCIF13		(1 << 13)
/** DMA_IFCR_CGIF12 Channel global interrupt flag **/
#define DMA_IFCR_CGIF12		(1 << 12)
/** DMA_IFCR_CTEIF11 Channel transfer error flag **/
#define DMA_IFCR_CTEIF11		(1 << 11)
/** DMA_IFCR_CHTIF10 Channel half transfer flag **/
#define DMA_IFCR_CHTIF10		(1 << 10)
/** DMA_IFCR_CTCIF9 Channel transfer complete flag **/
#define DMA_IFCR_CTCIF9		(1 << 9)
/** DMA_IFCR_CGIF8 Channel global interrupt flag **/
#define DMA_IFCR_CGIF8		(1 << 8)
/** DMA_IFCR_CTEIF7 Channel transfer error flag **/
#define DMA_IFCR_CTEIF7		(1 << 7)
/** DMA_IFCR_CHTIF6 Channel half transfer flag **/
#define DMA_IFCR_CHTIF6		(1 << 6)
/** DMA_IFCR_CTCIF5 Channel transfer complete flag **/
#define DMA_IFCR_CTCIF5		(1 << 5)
/** DMA_IFCR_CGIF4 Channel global interrupt flag **/
#define DMA_IFCR_CGIF4		(1 << 4)
/** DMA_IFCR_CTEIF3 Channel transfer error flag **/
#define DMA_IFCR_CTEIF3		(1 << 3)
/** DMA_IFCR_CHTIF2 Channel half transfer flag **/
#define DMA_IFCR_CHTIF2		(1 << 2)
/** DMA_IFCR_CTCIF1 Channel transfer complete flag **/
#define DMA_IFCR_CTCIF1		(1 << 1)
/** DMA_IFCR_CGIF0 Channel global interrupt flag **/
#define DMA_IFCR_CGIF0		(1 << 0)

/**@}*/

/** @defgroup dma_ccr1 CCR1 DMA channel x configuration register
@{*/

/** DMA_CCR1_MEM2MEM Memory to memory mode **/
#define DMA_CCR1_MEM2MEM		(1 << 14)

#define DMA_CCR1_PL_SHIFT		12
#define DMA_CCR1_PL_MASK		0x03
/** @defgroup dma_ccr1_pl PL Channel priority level
@{*/
/**@}*/


#define DMA_CCR1_MSIZE_SHIFT		10
#define DMA_CCR1_MSIZE_MASK		0x03
/** @defgroup dma_ccr1_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA_CCR1_PSIZE_SHIFT		8
#define DMA_CCR1_PSIZE_MASK		0x03
/** @defgroup dma_ccr1_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA_CCR1_MINC Memory increment mode **/
#define DMA_CCR1_MINC		(1 << 7)
/** DMA_CCR1_PINC Peripheral increment mode **/
#define DMA_CCR1_PINC		(1 << 6)
/** DMA_CCR1_CIRC Circular mode **/
#define DMA_CCR1_CIRC		(1 << 5)
/** DMA_CCR1_DIR Data transfer direction **/
#define DMA_CCR1_DIR		(1 << 4)
/** DMA_CCR1_TEIE Transfer error interrupt enable **/
#define DMA_CCR1_TEIE		(1 << 3)
/** DMA_CCR1_HTIE Half transfer interrupt enable **/
#define DMA_CCR1_HTIE		(1 << 2)
/** DMA_CCR1_TCIE Transfer complete interrupt enable **/
#define DMA_CCR1_TCIE		(1 << 1)
/** DMA_CCR1_EN Channel enable **/
#define DMA_CCR1_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr1 CNDTR1 DMA channel x number of data register
@{*/


#define DMA_CNDTR1_NDT_SHIFT		0
#define DMA_CNDTR1_NDT_MASK		0xffff
/** @defgroup dma_cndtr1_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar1 CPAR1 DMA channel x peripheral address register
@{*/


#define DMA_CPAR1_PA_SHIFT		0
#define DMA_CPAR1_PA_MASK		0xffffffff
/** @defgroup dma_cpar1_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar1 CMAR1 DMA channel x memory address register
@{*/


#define DMA_CMAR1_MA_SHIFT		0
#define DMA_CMAR1_MA_MASK		0xffffffff
/** @defgroup dma_cmar1_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_ccr2 CCR2 DMA channel x configuration register
@{*/

/** DMA_CCR2_MEM2MEM Memory to memory mode **/
#define DMA_CCR2_MEM2MEM		(1 << 14)

#define DMA_CCR2_PL_SHIFT		12
#define DMA_CCR2_PL_MASK		0x03
/** @defgroup dma_ccr2_pl PL Channel priority level
@{*/
/**@}*/


#define DMA_CCR2_MSIZE_SHIFT		10
#define DMA_CCR2_MSIZE_MASK		0x03
/** @defgroup dma_ccr2_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA_CCR2_PSIZE_SHIFT		8
#define DMA_CCR2_PSIZE_MASK		0x03
/** @defgroup dma_ccr2_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA_CCR2_MINC Memory increment mode **/
#define DMA_CCR2_MINC		(1 << 7)
/** DMA_CCR2_PINC Peripheral increment mode **/
#define DMA_CCR2_PINC		(1 << 6)
/** DMA_CCR2_CIRC Circular mode **/
#define DMA_CCR2_CIRC		(1 << 5)
/** DMA_CCR2_DIR Data transfer direction **/
#define DMA_CCR2_DIR		(1 << 4)
/** DMA_CCR2_TEIE Transfer error interrupt enable **/
#define DMA_CCR2_TEIE		(1 << 3)
/** DMA_CCR2_HTIE Half transfer interrupt enable **/
#define DMA_CCR2_HTIE		(1 << 2)
/** DMA_CCR2_TCIE Transfer complete interrupt enable **/
#define DMA_CCR2_TCIE		(1 << 1)
/** DMA_CCR2_EN Channel enable **/
#define DMA_CCR2_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr2 CNDTR2 DMA channel x number of data register
@{*/


#define DMA_CNDTR2_NDT_SHIFT		0
#define DMA_CNDTR2_NDT_MASK		0xffff
/** @defgroup dma_cndtr2_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar2 CPAR2 DMA channel x peripheral address register
@{*/


#define DMA_CPAR2_PA_SHIFT		0
#define DMA_CPAR2_PA_MASK		0xffffffff
/** @defgroup dma_cpar2_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar2 CMAR2 DMA channel x memory address register
@{*/


#define DMA_CMAR2_MA_SHIFT		0
#define DMA_CMAR2_MA_MASK		0xffffffff
/** @defgroup dma_cmar2_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_ccr3 CCR3 DMA channel x configuration register
@{*/

/** DMA_CCR3_MEM2MEM Memory to memory mode **/
#define DMA_CCR3_MEM2MEM		(1 << 14)

#define DMA_CCR3_PL_SHIFT		12
#define DMA_CCR3_PL_MASK		0x03
/** @defgroup dma_ccr3_pl PL Channel priority level
@{*/
/**@}*/


#define DMA_CCR3_MSIZE_SHIFT		10
#define DMA_CCR3_MSIZE_MASK		0x03
/** @defgroup dma_ccr3_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA_CCR3_PSIZE_SHIFT		8
#define DMA_CCR3_PSIZE_MASK		0x03
/** @defgroup dma_ccr3_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA_CCR3_MINC Memory increment mode **/
#define DMA_CCR3_MINC		(1 << 7)
/** DMA_CCR3_PINC Peripheral increment mode **/
#define DMA_CCR3_PINC		(1 << 6)
/** DMA_CCR3_CIRC Circular mode **/
#define DMA_CCR3_CIRC		(1 << 5)
/** DMA_CCR3_DIR Data transfer direction **/
#define DMA_CCR3_DIR		(1 << 4)
/** DMA_CCR3_TEIE Transfer error interrupt enable **/
#define DMA_CCR3_TEIE		(1 << 3)
/** DMA_CCR3_HTIE Half transfer interrupt enable **/
#define DMA_CCR3_HTIE		(1 << 2)
/** DMA_CCR3_TCIE Transfer complete interrupt enable **/
#define DMA_CCR3_TCIE		(1 << 1)
/** DMA_CCR3_EN Channel enable **/
#define DMA_CCR3_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr3 CNDTR3 DMA channel x configuration register
@{*/


#define DMA_CNDTR3_NDT_SHIFT		0
#define DMA_CNDTR3_NDT_MASK		0xffff
/** @defgroup dma_cndtr3_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar3 CPAR3 DMA channel x peripheral address register
@{*/


#define DMA_CPAR3_PA_SHIFT		0
#define DMA_CPAR3_PA_MASK		0xffffffff
/** @defgroup dma_cpar3_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar3 CMAR3 DMA channel x memory address register
@{*/


#define DMA_CMAR3_MA_SHIFT		0
#define DMA_CMAR3_MA_MASK		0xffffffff
/** @defgroup dma_cmar3_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_ccr4 CCR4 DMA channel x configuration register
@{*/

/** DMA_CCR4_MEM2MEM Memory to memory mode **/
#define DMA_CCR4_MEM2MEM		(1 << 14)

#define DMA_CCR4_PL_SHIFT		12
#define DMA_CCR4_PL_MASK		0x03
/** @defgroup dma_ccr4_pl PL Channel priority level
@{*/
/**@}*/


#define DMA_CCR4_MSIZE_SHIFT		10
#define DMA_CCR4_MSIZE_MASK		0x03
/** @defgroup dma_ccr4_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA_CCR4_PSIZE_SHIFT		8
#define DMA_CCR4_PSIZE_MASK		0x03
/** @defgroup dma_ccr4_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA_CCR4_MINC Memory increment mode **/
#define DMA_CCR4_MINC		(1 << 7)
/** DMA_CCR4_PINC Peripheral increment mode **/
#define DMA_CCR4_PINC		(1 << 6)
/** DMA_CCR4_CIRC Circular mode **/
#define DMA_CCR4_CIRC		(1 << 5)
/** DMA_CCR4_DIR Data transfer direction **/
#define DMA_CCR4_DIR		(1 << 4)
/** DMA_CCR4_TEIE Transfer error interrupt enable **/
#define DMA_CCR4_TEIE		(1 << 3)
/** DMA_CCR4_HTIE Half transfer interrupt enable **/
#define DMA_CCR4_HTIE		(1 << 2)
/** DMA_CCR4_TCIE Transfer complete interrupt enable **/
#define DMA_CCR4_TCIE		(1 << 1)
/** DMA_CCR4_EN Channel enable **/
#define DMA_CCR4_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr4 CNDTR4 DMA channel x configuration register
@{*/


#define DMA_CNDTR4_NDT_SHIFT		0
#define DMA_CNDTR4_NDT_MASK		0xffff
/** @defgroup dma_cndtr4_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar4 CPAR4 DMA channel x peripheral address register
@{*/


#define DMA_CPAR4_PA_SHIFT		0
#define DMA_CPAR4_PA_MASK		0xffffffff
/** @defgroup dma_cpar4_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar4 CMAR4 DMA channel x memory address register
@{*/


#define DMA_CMAR4_MA_SHIFT		0
#define DMA_CMAR4_MA_MASK		0xffffffff
/** @defgroup dma_cmar4_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_ccr5 CCR5 DMA channel x configuration register
@{*/

/** DMA_CCR5_MEM2MEM Memory to memory mode **/
#define DMA_CCR5_MEM2MEM		(1 << 14)

#define DMA_CCR5_PL_SHIFT		12
#define DMA_CCR5_PL_MASK		0x03
/** @defgroup dma_ccr5_pl PL Channel priority level
@{*/
/**@}*/


#define DMA_CCR5_MSIZE_SHIFT		10
#define DMA_CCR5_MSIZE_MASK		0x03
/** @defgroup dma_ccr5_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA_CCR5_PSIZE_SHIFT		8
#define DMA_CCR5_PSIZE_MASK		0x03
/** @defgroup dma_ccr5_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA_CCR5_MINC Memory increment mode **/
#define DMA_CCR5_MINC		(1 << 7)
/** DMA_CCR5_PINC Peripheral increment mode **/
#define DMA_CCR5_PINC		(1 << 6)
/** DMA_CCR5_CIRC Circular mode **/
#define DMA_CCR5_CIRC		(1 << 5)
/** DMA_CCR5_DIR Data transfer direction **/
#define DMA_CCR5_DIR		(1 << 4)
/** DMA_CCR5_TEIE Transfer error interrupt enable **/
#define DMA_CCR5_TEIE		(1 << 3)
/** DMA_CCR5_HTIE Half transfer interrupt enable **/
#define DMA_CCR5_HTIE		(1 << 2)
/** DMA_CCR5_TCIE Transfer complete interrupt enable **/
#define DMA_CCR5_TCIE		(1 << 1)
/** DMA_CCR5_EN Channel enable **/
#define DMA_CCR5_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr5 CNDTR5 DMA channel x configuration register
@{*/


#define DMA_CNDTR5_NDT_SHIFT		0
#define DMA_CNDTR5_NDT_MASK		0xffff
/** @defgroup dma_cndtr5_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar5 CPAR5 DMA channel x peripheral address register
@{*/


#define DMA_CPAR5_PA_SHIFT		0
#define DMA_CPAR5_PA_MASK		0xffffffff
/** @defgroup dma_cpar5_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar5 CMAR5 DMA channel x memory address register
@{*/


#define DMA_CMAR5_MA_SHIFT		0
#define DMA_CMAR5_MA_MASK		0xffffffff
/** @defgroup dma_cmar5_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_ccr6 CCR6 DMA channel x configuration register
@{*/

/** DMA_CCR6_MEM2MEM Memory to memory mode **/
#define DMA_CCR6_MEM2MEM		(1 << 14)

#define DMA_CCR6_PL_SHIFT		12
#define DMA_CCR6_PL_MASK		0x03
/** @defgroup dma_ccr6_pl PL Channel priority level
@{*/
/**@}*/


#define DMA_CCR6_MSIZE_SHIFT		10
#define DMA_CCR6_MSIZE_MASK		0x03
/** @defgroup dma_ccr6_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA_CCR6_PSIZE_SHIFT		8
#define DMA_CCR6_PSIZE_MASK		0x03
/** @defgroup dma_ccr6_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA_CCR6_MINC Memory increment mode **/
#define DMA_CCR6_MINC		(1 << 7)
/** DMA_CCR6_PINC Peripheral increment mode **/
#define DMA_CCR6_PINC		(1 << 6)
/** DMA_CCR6_CIRC Circular mode **/
#define DMA_CCR6_CIRC		(1 << 5)
/** DMA_CCR6_DIR Data transfer direction **/
#define DMA_CCR6_DIR		(1 << 4)
/** DMA_CCR6_TEIE Transfer error interrupt enable **/
#define DMA_CCR6_TEIE		(1 << 3)
/** DMA_CCR6_HTIE Half transfer interrupt enable **/
#define DMA_CCR6_HTIE		(1 << 2)
/** DMA_CCR6_TCIE Transfer complete interrupt enable **/
#define DMA_CCR6_TCIE		(1 << 1)
/** DMA_CCR6_EN Channel enable **/
#define DMA_CCR6_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr6 CNDTR6 DMA channel x configuration register
@{*/


#define DMA_CNDTR6_NDT_SHIFT		0
#define DMA_CNDTR6_NDT_MASK		0xffff
/** @defgroup dma_cndtr6_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar6 CPAR6 DMA channel x peripheral address register
@{*/


#define DMA_CPAR6_PA_SHIFT		0
#define DMA_CPAR6_PA_MASK		0xffffffff
/** @defgroup dma_cpar6_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar6 CMAR6 DMA channel x memory address register
@{*/


#define DMA_CMAR6_MA_SHIFT		0
#define DMA_CMAR6_MA_MASK		0xffffffff
/** @defgroup dma_cmar6_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_ccr7 CCR7 DMA channel x configuration register
@{*/

/** DMA_CCR7_MEM2MEM Memory to memory mode **/
#define DMA_CCR7_MEM2MEM		(1 << 14)

#define DMA_CCR7_PL_SHIFT		12
#define DMA_CCR7_PL_MASK		0x03
/** @defgroup dma_ccr7_pl PL Channel priority level
@{*/
/**@}*/


#define DMA_CCR7_MSIZE_SHIFT		10
#define DMA_CCR7_MSIZE_MASK		0x03
/** @defgroup dma_ccr7_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA_CCR7_PSIZE_SHIFT		8
#define DMA_CCR7_PSIZE_MASK		0x03
/** @defgroup dma_ccr7_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA_CCR7_MINC Memory increment mode **/
#define DMA_CCR7_MINC		(1 << 7)
/** DMA_CCR7_PINC Peripheral increment mode **/
#define DMA_CCR7_PINC		(1 << 6)
/** DMA_CCR7_CIRC Circular mode **/
#define DMA_CCR7_CIRC		(1 << 5)
/** DMA_CCR7_DIR Data transfer direction **/
#define DMA_CCR7_DIR		(1 << 4)
/** DMA_CCR7_TEIE Transfer error interrupt enable **/
#define DMA_CCR7_TEIE		(1 << 3)
/** DMA_CCR7_HTIE Half transfer interrupt enable **/
#define DMA_CCR7_HTIE		(1 << 2)
/** DMA_CCR7_TCIE Transfer complete interrupt enable **/
#define DMA_CCR7_TCIE		(1 << 1)
/** DMA_CCR7_EN Channel enable **/
#define DMA_CCR7_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr7 CNDTR7 DMA channel x configuration register
@{*/


#define DMA_CNDTR7_NDT_SHIFT		0
#define DMA_CNDTR7_NDT_MASK		0xffff
/** @defgroup dma_cndtr7_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar7 CPAR7 DMA channel x peripheral address register
@{*/


#define DMA_CPAR7_PA_SHIFT		0
#define DMA_CPAR7_PA_MASK		0xffffffff
/** @defgroup dma_cpar7_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar7 CMAR7 DMA channel x memory address register
@{*/


#define DMA_CMAR7_MA_SHIFT		0
#define DMA_CMAR7_MA_MASK		0xffffffff
/** @defgroup dma_cmar7_ma MA Memory address
@{*/
/**@}*/


/**@}*/

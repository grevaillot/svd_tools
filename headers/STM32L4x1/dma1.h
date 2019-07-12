#pragma once 

/* --- DMA1: Direct memory access controller ------------------------ */

/** @defgroup dma1_registers Direct memory access controller Register
@{*/

/** DMA1_ISR interrupt status register **/
#define DMA1_ISR			MMIO32(DMA1_BASE + 0x00)
/** DMA1_IFCR interrupt flag clear register **/
#define DMA1_IFCR			MMIO32(DMA1_BASE + 0x04)
/** DMA1_CCR1 channel x configuration register **/
#define DMA1_CCR1			MMIO32(DMA1_BASE + 0x08)
/** DMA1_CNDTR1 channel x number of data register **/
#define DMA1_CNDTR1			MMIO32(DMA1_BASE + 0x0c)
/** DMA1_CPAR1 channel x peripheral address register **/
#define DMA1_CPAR1			MMIO32(DMA1_BASE + 0x10)
/** DMA1_CMAR1 channel x memory address register **/
#define DMA1_CMAR1			MMIO32(DMA1_BASE + 0x14)
/** DMA1_CCR2 channel x configuration register **/
#define DMA1_CCR2			MMIO32(DMA1_BASE + 0x1c)
/** DMA1_CNDTR2 channel x number of data register **/
#define DMA1_CNDTR2			MMIO32(DMA1_BASE + 0x20)
/** DMA1_CPAR2 channel x peripheral address register **/
#define DMA1_CPAR2			MMIO32(DMA1_BASE + 0x24)
/** DMA1_CMAR2 channel x memory address register **/
#define DMA1_CMAR2			MMIO32(DMA1_BASE + 0x28)
/** DMA1_CCR3 channel x configuration register **/
#define DMA1_CCR3			MMIO32(DMA1_BASE + 0x30)
/** DMA1_CNDTR3 channel x number of data register **/
#define DMA1_CNDTR3			MMIO32(DMA1_BASE + 0x34)
/** DMA1_CPAR3 channel x peripheral address register **/
#define DMA1_CPAR3			MMIO32(DMA1_BASE + 0x38)
/** DMA1_CMAR3 channel x memory address register **/
#define DMA1_CMAR3			MMIO32(DMA1_BASE + 0x3c)
/** DMA1_CCR4 channel x configuration register **/
#define DMA1_CCR4			MMIO32(DMA1_BASE + 0x44)
/** DMA1_CNDTR4 channel x number of data register **/
#define DMA1_CNDTR4			MMIO32(DMA1_BASE + 0x48)
/** DMA1_CPAR4 channel x peripheral address register **/
#define DMA1_CPAR4			MMIO32(DMA1_BASE + 0x4c)
/** DMA1_CMAR4 channel x memory address register **/
#define DMA1_CMAR4			MMIO32(DMA1_BASE + 0x50)
/** DMA1_CCR5 channel x configuration register **/
#define DMA1_CCR5			MMIO32(DMA1_BASE + 0x58)
/** DMA1_CNDTR5 channel x number of data register **/
#define DMA1_CNDTR5			MMIO32(DMA1_BASE + 0x5c)
/** DMA1_CPAR5 channel x peripheral address register **/
#define DMA1_CPAR5			MMIO32(DMA1_BASE + 0x60)
/** DMA1_CMAR5 channel x memory address register **/
#define DMA1_CMAR5			MMIO32(DMA1_BASE + 0x64)
/** DMA1_CCR6 channel x configuration register **/
#define DMA1_CCR6			MMIO32(DMA1_BASE + 0x6c)
/** DMA1_CNDTR6 channel x number of data register **/
#define DMA1_CNDTR6			MMIO32(DMA1_BASE + 0x70)
/** DMA1_CPAR6 channel x peripheral address register **/
#define DMA1_CPAR6			MMIO32(DMA1_BASE + 0x74)
/** DMA1_CMAR6 channel x memory address register **/
#define DMA1_CMAR6			MMIO32(DMA1_BASE + 0x78)
/** DMA1_CCR7 channel x configuration register **/
#define DMA1_CCR7			MMIO32(DMA1_BASE + 0x80)
/** DMA1_CNDTR7 channel x number of data register **/
#define DMA1_CNDTR7			MMIO32(DMA1_BASE + 0x84)
/** DMA1_CPAR7 channel x peripheral address register **/
#define DMA1_CPAR7			MMIO32(DMA1_BASE + 0x88)
/** DMA1_CMAR7 channel x memory address register **/
#define DMA1_CMAR7			MMIO32(DMA1_BASE + 0x8c)
/** DMA1_CSELR channel selection register **/
#define DMA1_CSELR			MMIO32(DMA1_BASE + 0xa8)

/**@}*/


/** @defgroup dma1_isr ISR interrupt status register
@{*/

/** DMA1_ISR_TEIF7 Channel x transfer error flag (x = 1 ..7) **/
#define DMA1_ISR_TEIF7		(1 << 27)
/** DMA1_ISR_HTIF7 Channel x half transfer flag (x = 1 ..7) **/
#define DMA1_ISR_HTIF7		(1 << 26)
/** DMA1_ISR_TCIF7 Channel x transfer complete flag (x = 1 ..7) **/
#define DMA1_ISR_TCIF7		(1 << 25)
/** DMA1_ISR_GIF7 Channel x global interrupt flag (x = 1 ..7) **/
#define DMA1_ISR_GIF7		(1 << 24)
/** DMA1_ISR_TEIF6 Channel x transfer error flag (x = 1 ..7) **/
#define DMA1_ISR_TEIF6		(1 << 23)
/** DMA1_ISR_HTIF6 Channel x half transfer flag (x = 1 ..7) **/
#define DMA1_ISR_HTIF6		(1 << 22)
/** DMA1_ISR_TCIF6 Channel x transfer complete flag (x = 1 ..7) **/
#define DMA1_ISR_TCIF6		(1 << 21)
/** DMA1_ISR_GIF6 Channel x global interrupt flag (x = 1 ..7) **/
#define DMA1_ISR_GIF6		(1 << 20)
/** DMA1_ISR_TEIF5 Channel x transfer error flag (x = 1 ..7) **/
#define DMA1_ISR_TEIF5		(1 << 19)
/** DMA1_ISR_HTIF5 Channel x half transfer flag (x = 1 ..7) **/
#define DMA1_ISR_HTIF5		(1 << 18)
/** DMA1_ISR_TCIF5 Channel x transfer complete flag (x = 1 ..7) **/
#define DMA1_ISR_TCIF5		(1 << 17)
/** DMA1_ISR_GIF5 Channel x global interrupt flag (x = 1 ..7) **/
#define DMA1_ISR_GIF5		(1 << 16)
/** DMA1_ISR_TEIF4 Channel x transfer error flag (x = 1 ..7) **/
#define DMA1_ISR_TEIF4		(1 << 15)
/** DMA1_ISR_HTIF4 Channel x half transfer flag (x = 1 ..7) **/
#define DMA1_ISR_HTIF4		(1 << 14)
/** DMA1_ISR_TCIF4 Channel x transfer complete flag (x = 1 ..7) **/
#define DMA1_ISR_TCIF4		(1 << 13)
/** DMA1_ISR_GIF4 Channel x global interrupt flag (x = 1 ..7) **/
#define DMA1_ISR_GIF4		(1 << 12)
/** DMA1_ISR_TEIF3 Channel x transfer error flag (x = 1 ..7) **/
#define DMA1_ISR_TEIF3		(1 << 11)
/** DMA1_ISR_HTIF3 Channel x half transfer flag (x = 1 ..7) **/
#define DMA1_ISR_HTIF3		(1 << 10)
/** DMA1_ISR_TCIF3 Channel x transfer complete flag (x = 1 ..7) **/
#define DMA1_ISR_TCIF3		(1 << 9)
/** DMA1_ISR_GIF3 Channel x global interrupt flag (x = 1 ..7) **/
#define DMA1_ISR_GIF3		(1 << 8)
/** DMA1_ISR_TEIF2 Channel x transfer error flag (x = 1 ..7) **/
#define DMA1_ISR_TEIF2		(1 << 7)
/** DMA1_ISR_HTIF2 Channel x half transfer flag (x = 1 ..7) **/
#define DMA1_ISR_HTIF2		(1 << 6)
/** DMA1_ISR_TCIF2 Channel x transfer complete flag (x = 1 ..7) **/
#define DMA1_ISR_TCIF2		(1 << 5)
/** DMA1_ISR_GIF2 Channel x global interrupt flag (x = 1 ..7) **/
#define DMA1_ISR_GIF2		(1 << 4)
/** DMA1_ISR_TEIF1 Channel x transfer error flag (x = 1 ..7) **/
#define DMA1_ISR_TEIF1		(1 << 3)
/** DMA1_ISR_HTIF1 Channel x half transfer flag (x = 1 ..7) **/
#define DMA1_ISR_HTIF1		(1 << 2)
/** DMA1_ISR_TCIF1 Channel x transfer complete flag (x = 1 ..7) **/
#define DMA1_ISR_TCIF1		(1 << 1)
/** DMA1_ISR_GIF1 Channel x global interrupt flag (x = 1 ..7) **/
#define DMA1_ISR_GIF1		(1 << 0)

/**@}*/

/** @defgroup dma1_ifcr IFCR interrupt flag clear register
@{*/

/** DMA1_IFCR_CTEIF7 Channel x transfer error clear (x = 1 ..7) **/
#define DMA1_IFCR_CTEIF7		(1 << 27)
/** DMA1_IFCR_CHTIF7 Channel x half transfer clear (x = 1 ..7) **/
#define DMA1_IFCR_CHTIF7		(1 << 26)
/** DMA1_IFCR_CTCIF7 Channel x transfer complete clear (x = 1 ..7) **/
#define DMA1_IFCR_CTCIF7		(1 << 25)
/** DMA1_IFCR_CGIF7 Channel x global interrupt clear (x = 1 ..7) **/
#define DMA1_IFCR_CGIF7		(1 << 24)
/** DMA1_IFCR_CTEIF6 Channel x transfer error clear (x = 1 ..7) **/
#define DMA1_IFCR_CTEIF6		(1 << 23)
/** DMA1_IFCR_CHTIF6 Channel x half transfer clear (x = 1 ..7) **/
#define DMA1_IFCR_CHTIF6		(1 << 22)
/** DMA1_IFCR_CTCIF6 Channel x transfer complete clear (x = 1 ..7) **/
#define DMA1_IFCR_CTCIF6		(1 << 21)
/** DMA1_IFCR_CGIF6 Channel x global interrupt clear (x = 1 ..7) **/
#define DMA1_IFCR_CGIF6		(1 << 20)
/** DMA1_IFCR_CTEIF5 Channel x transfer error clear (x = 1 ..7) **/
#define DMA1_IFCR_CTEIF5		(1 << 19)
/** DMA1_IFCR_CHTIF5 Channel x half transfer clear (x = 1 ..7) **/
#define DMA1_IFCR_CHTIF5		(1 << 18)
/** DMA1_IFCR_CTCIF5 Channel x transfer complete clear (x = 1 ..7) **/
#define DMA1_IFCR_CTCIF5		(1 << 17)
/** DMA1_IFCR_CGIF5 Channel x global interrupt clear (x = 1 ..7) **/
#define DMA1_IFCR_CGIF5		(1 << 16)
/** DMA1_IFCR_CTEIF4 Channel x transfer error clear (x = 1 ..7) **/
#define DMA1_IFCR_CTEIF4		(1 << 15)
/** DMA1_IFCR_CHTIF4 Channel x half transfer clear (x = 1 ..7) **/
#define DMA1_IFCR_CHTIF4		(1 << 14)
/** DMA1_IFCR_CTCIF4 Channel x transfer complete clear (x = 1 ..7) **/
#define DMA1_IFCR_CTCIF4		(1 << 13)
/** DMA1_IFCR_CGIF4 Channel x global interrupt clear (x = 1 ..7) **/
#define DMA1_IFCR_CGIF4		(1 << 12)
/** DMA1_IFCR_CTEIF3 Channel x transfer error clear (x = 1 ..7) **/
#define DMA1_IFCR_CTEIF3		(1 << 11)
/** DMA1_IFCR_CHTIF3 Channel x half transfer clear (x = 1 ..7) **/
#define DMA1_IFCR_CHTIF3		(1 << 10)
/** DMA1_IFCR_CTCIF3 Channel x transfer complete clear (x = 1 ..7) **/
#define DMA1_IFCR_CTCIF3		(1 << 9)
/** DMA1_IFCR_CGIF3 Channel x global interrupt clear (x = 1 ..7) **/
#define DMA1_IFCR_CGIF3		(1 << 8)
/** DMA1_IFCR_CTEIF2 Channel x transfer error clear (x = 1 ..7) **/
#define DMA1_IFCR_CTEIF2		(1 << 7)
/** DMA1_IFCR_CHTIF2 Channel x half transfer clear (x = 1 ..7) **/
#define DMA1_IFCR_CHTIF2		(1 << 6)
/** DMA1_IFCR_CTCIF2 Channel x transfer complete clear (x = 1 ..7) **/
#define DMA1_IFCR_CTCIF2		(1 << 5)
/** DMA1_IFCR_CGIF2 Channel x global interrupt clear (x = 1 ..7) **/
#define DMA1_IFCR_CGIF2		(1 << 4)
/** DMA1_IFCR_CTEIF1 Channel x transfer error clear (x = 1 ..7) **/
#define DMA1_IFCR_CTEIF1		(1 << 3)
/** DMA1_IFCR_CHTIF1 Channel x half transfer clear (x = 1 ..7) **/
#define DMA1_IFCR_CHTIF1		(1 << 2)
/** DMA1_IFCR_CTCIF1 Channel x transfer complete clear (x = 1 ..7) **/
#define DMA1_IFCR_CTCIF1		(1 << 1)
/** DMA1_IFCR_CGIF1 Channel x global interrupt clear (x = 1 ..7) **/
#define DMA1_IFCR_CGIF1		(1 << 0)

/**@}*/

/** @defgroup dma1_ccr1 CCR1 channel x configuration register
@{*/

/** DMA1_CCR1_MEM2MEM Memory to memory mode **/
#define DMA1_CCR1_MEM2MEM		(1 << 14)

#define DMA1_CCR1_PL_SHIFT		12
#define DMA1_CCR1_PL_MASK		0x03
/** @defgroup dma1_ccr1_pl PL Channel priority level
@{*/
/**@}*/


#define DMA1_CCR1_MSIZE_SHIFT		10
#define DMA1_CCR1_MSIZE_MASK		0x03
/** @defgroup dma1_ccr1_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA1_CCR1_PSIZE_SHIFT		8
#define DMA1_CCR1_PSIZE_MASK		0x03
/** @defgroup dma1_ccr1_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA1_CCR1_MINC Memory increment mode **/
#define DMA1_CCR1_MINC		(1 << 7)
/** DMA1_CCR1_PINC Peripheral increment mode **/
#define DMA1_CCR1_PINC		(1 << 6)
/** DMA1_CCR1_CIRC Circular mode **/
#define DMA1_CCR1_CIRC		(1 << 5)
/** DMA1_CCR1_DIR Data transfer direction **/
#define DMA1_CCR1_DIR		(1 << 4)
/** DMA1_CCR1_TEIE Transfer error interrupt enable **/
#define DMA1_CCR1_TEIE		(1 << 3)
/** DMA1_CCR1_HTIE Half transfer interrupt enable **/
#define DMA1_CCR1_HTIE		(1 << 2)
/** DMA1_CCR1_TCIE Transfer complete interrupt enable **/
#define DMA1_CCR1_TCIE		(1 << 1)
/** DMA1_CCR1_EN Channel enable **/
#define DMA1_CCR1_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr1 CNDTR1 channel x number of data register
@{*/


#define DMA1_CNDTR1_NDT_SHIFT		0
#define DMA1_CNDTR1_NDT_MASK		0xffff
/** @defgroup dma1_cndtr1_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar1 CPAR1 channel x peripheral address register
@{*/


#define DMA1_CPAR1_PA_SHIFT		0
#define DMA1_CPAR1_PA_MASK		0xffffffff
/** @defgroup dma1_cpar1_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar1 CMAR1 channel x memory address register
@{*/


#define DMA1_CMAR1_MA_SHIFT		0
#define DMA1_CMAR1_MA_MASK		0xffffffff
/** @defgroup dma1_cmar1_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_ccr2 CCR2 channel x configuration register
@{*/

/** DMA1_CCR2_MEM2MEM Memory to memory mode **/
#define DMA1_CCR2_MEM2MEM		(1 << 14)

#define DMA1_CCR2_PL_SHIFT		12
#define DMA1_CCR2_PL_MASK		0x03
/** @defgroup dma1_ccr2_pl PL Channel priority level
@{*/
/**@}*/


#define DMA1_CCR2_MSIZE_SHIFT		10
#define DMA1_CCR2_MSIZE_MASK		0x03
/** @defgroup dma1_ccr2_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA1_CCR2_PSIZE_SHIFT		8
#define DMA1_CCR2_PSIZE_MASK		0x03
/** @defgroup dma1_ccr2_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA1_CCR2_MINC Memory increment mode **/
#define DMA1_CCR2_MINC		(1 << 7)
/** DMA1_CCR2_PINC Peripheral increment mode **/
#define DMA1_CCR2_PINC		(1 << 6)
/** DMA1_CCR2_CIRC Circular mode **/
#define DMA1_CCR2_CIRC		(1 << 5)
/** DMA1_CCR2_DIR Data transfer direction **/
#define DMA1_CCR2_DIR		(1 << 4)
/** DMA1_CCR2_TEIE Transfer error interrupt enable **/
#define DMA1_CCR2_TEIE		(1 << 3)
/** DMA1_CCR2_HTIE Half transfer interrupt enable **/
#define DMA1_CCR2_HTIE		(1 << 2)
/** DMA1_CCR2_TCIE Transfer complete interrupt enable **/
#define DMA1_CCR2_TCIE		(1 << 1)
/** DMA1_CCR2_EN Channel enable **/
#define DMA1_CCR2_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr2 CNDTR2 channel x number of data register
@{*/


#define DMA1_CNDTR2_NDT_SHIFT		0
#define DMA1_CNDTR2_NDT_MASK		0xffff
/** @defgroup dma1_cndtr2_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar2 CPAR2 channel x peripheral address register
@{*/


#define DMA1_CPAR2_PA_SHIFT		0
#define DMA1_CPAR2_PA_MASK		0xffffffff
/** @defgroup dma1_cpar2_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar2 CMAR2 channel x memory address register
@{*/


#define DMA1_CMAR2_MA_SHIFT		0
#define DMA1_CMAR2_MA_MASK		0xffffffff
/** @defgroup dma1_cmar2_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_ccr3 CCR3 channel x configuration register
@{*/

/** DMA1_CCR3_MEM2MEM Memory to memory mode **/
#define DMA1_CCR3_MEM2MEM		(1 << 14)

#define DMA1_CCR3_PL_SHIFT		12
#define DMA1_CCR3_PL_MASK		0x03
/** @defgroup dma1_ccr3_pl PL Channel priority level
@{*/
/**@}*/


#define DMA1_CCR3_MSIZE_SHIFT		10
#define DMA1_CCR3_MSIZE_MASK		0x03
/** @defgroup dma1_ccr3_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA1_CCR3_PSIZE_SHIFT		8
#define DMA1_CCR3_PSIZE_MASK		0x03
/** @defgroup dma1_ccr3_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA1_CCR3_MINC Memory increment mode **/
#define DMA1_CCR3_MINC		(1 << 7)
/** DMA1_CCR3_PINC Peripheral increment mode **/
#define DMA1_CCR3_PINC		(1 << 6)
/** DMA1_CCR3_CIRC Circular mode **/
#define DMA1_CCR3_CIRC		(1 << 5)
/** DMA1_CCR3_DIR Data transfer direction **/
#define DMA1_CCR3_DIR		(1 << 4)
/** DMA1_CCR3_TEIE Transfer error interrupt enable **/
#define DMA1_CCR3_TEIE		(1 << 3)
/** DMA1_CCR3_HTIE Half transfer interrupt enable **/
#define DMA1_CCR3_HTIE		(1 << 2)
/** DMA1_CCR3_TCIE Transfer complete interrupt enable **/
#define DMA1_CCR3_TCIE		(1 << 1)
/** DMA1_CCR3_EN Channel enable **/
#define DMA1_CCR3_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr3 CNDTR3 channel x number of data register
@{*/


#define DMA1_CNDTR3_NDT_SHIFT		0
#define DMA1_CNDTR3_NDT_MASK		0xffff
/** @defgroup dma1_cndtr3_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar3 CPAR3 channel x peripheral address register
@{*/


#define DMA1_CPAR3_PA_SHIFT		0
#define DMA1_CPAR3_PA_MASK		0xffffffff
/** @defgroup dma1_cpar3_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar3 CMAR3 channel x memory address register
@{*/


#define DMA1_CMAR3_MA_SHIFT		0
#define DMA1_CMAR3_MA_MASK		0xffffffff
/** @defgroup dma1_cmar3_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_ccr4 CCR4 channel x configuration register
@{*/

/** DMA1_CCR4_MEM2MEM Memory to memory mode **/
#define DMA1_CCR4_MEM2MEM		(1 << 14)

#define DMA1_CCR4_PL_SHIFT		12
#define DMA1_CCR4_PL_MASK		0x03
/** @defgroup dma1_ccr4_pl PL Channel priority level
@{*/
/**@}*/


#define DMA1_CCR4_MSIZE_SHIFT		10
#define DMA1_CCR4_MSIZE_MASK		0x03
/** @defgroup dma1_ccr4_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA1_CCR4_PSIZE_SHIFT		8
#define DMA1_CCR4_PSIZE_MASK		0x03
/** @defgroup dma1_ccr4_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA1_CCR4_MINC Memory increment mode **/
#define DMA1_CCR4_MINC		(1 << 7)
/** DMA1_CCR4_PINC Peripheral increment mode **/
#define DMA1_CCR4_PINC		(1 << 6)
/** DMA1_CCR4_CIRC Circular mode **/
#define DMA1_CCR4_CIRC		(1 << 5)
/** DMA1_CCR4_DIR Data transfer direction **/
#define DMA1_CCR4_DIR		(1 << 4)
/** DMA1_CCR4_TEIE Transfer error interrupt enable **/
#define DMA1_CCR4_TEIE		(1 << 3)
/** DMA1_CCR4_HTIE Half transfer interrupt enable **/
#define DMA1_CCR4_HTIE		(1 << 2)
/** DMA1_CCR4_TCIE Transfer complete interrupt enable **/
#define DMA1_CCR4_TCIE		(1 << 1)
/** DMA1_CCR4_EN Channel enable **/
#define DMA1_CCR4_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr4 CNDTR4 channel x number of data register
@{*/


#define DMA1_CNDTR4_NDT_SHIFT		0
#define DMA1_CNDTR4_NDT_MASK		0xffff
/** @defgroup dma1_cndtr4_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar4 CPAR4 channel x peripheral address register
@{*/


#define DMA1_CPAR4_PA_SHIFT		0
#define DMA1_CPAR4_PA_MASK		0xffffffff
/** @defgroup dma1_cpar4_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar4 CMAR4 channel x memory address register
@{*/


#define DMA1_CMAR4_MA_SHIFT		0
#define DMA1_CMAR4_MA_MASK		0xffffffff
/** @defgroup dma1_cmar4_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_ccr5 CCR5 channel x configuration register
@{*/

/** DMA1_CCR5_MEM2MEM Memory to memory mode **/
#define DMA1_CCR5_MEM2MEM		(1 << 14)

#define DMA1_CCR5_PL_SHIFT		12
#define DMA1_CCR5_PL_MASK		0x03
/** @defgroup dma1_ccr5_pl PL Channel priority level
@{*/
/**@}*/


#define DMA1_CCR5_MSIZE_SHIFT		10
#define DMA1_CCR5_MSIZE_MASK		0x03
/** @defgroup dma1_ccr5_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA1_CCR5_PSIZE_SHIFT		8
#define DMA1_CCR5_PSIZE_MASK		0x03
/** @defgroup dma1_ccr5_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA1_CCR5_MINC Memory increment mode **/
#define DMA1_CCR5_MINC		(1 << 7)
/** DMA1_CCR5_PINC Peripheral increment mode **/
#define DMA1_CCR5_PINC		(1 << 6)
/** DMA1_CCR5_CIRC Circular mode **/
#define DMA1_CCR5_CIRC		(1 << 5)
/** DMA1_CCR5_DIR Data transfer direction **/
#define DMA1_CCR5_DIR		(1 << 4)
/** DMA1_CCR5_TEIE Transfer error interrupt enable **/
#define DMA1_CCR5_TEIE		(1 << 3)
/** DMA1_CCR5_HTIE Half transfer interrupt enable **/
#define DMA1_CCR5_HTIE		(1 << 2)
/** DMA1_CCR5_TCIE Transfer complete interrupt enable **/
#define DMA1_CCR5_TCIE		(1 << 1)
/** DMA1_CCR5_EN Channel enable **/
#define DMA1_CCR5_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr5 CNDTR5 channel x number of data register
@{*/


#define DMA1_CNDTR5_NDT_SHIFT		0
#define DMA1_CNDTR5_NDT_MASK		0xffff
/** @defgroup dma1_cndtr5_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar5 CPAR5 channel x peripheral address register
@{*/


#define DMA1_CPAR5_PA_SHIFT		0
#define DMA1_CPAR5_PA_MASK		0xffffffff
/** @defgroup dma1_cpar5_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar5 CMAR5 channel x memory address register
@{*/


#define DMA1_CMAR5_MA_SHIFT		0
#define DMA1_CMAR5_MA_MASK		0xffffffff
/** @defgroup dma1_cmar5_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_ccr6 CCR6 channel x configuration register
@{*/

/** DMA1_CCR6_MEM2MEM Memory to memory mode **/
#define DMA1_CCR6_MEM2MEM		(1 << 14)

#define DMA1_CCR6_PL_SHIFT		12
#define DMA1_CCR6_PL_MASK		0x03
/** @defgroup dma1_ccr6_pl PL Channel priority level
@{*/
/**@}*/


#define DMA1_CCR6_MSIZE_SHIFT		10
#define DMA1_CCR6_MSIZE_MASK		0x03
/** @defgroup dma1_ccr6_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA1_CCR6_PSIZE_SHIFT		8
#define DMA1_CCR6_PSIZE_MASK		0x03
/** @defgroup dma1_ccr6_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA1_CCR6_MINC Memory increment mode **/
#define DMA1_CCR6_MINC		(1 << 7)
/** DMA1_CCR6_PINC Peripheral increment mode **/
#define DMA1_CCR6_PINC		(1 << 6)
/** DMA1_CCR6_CIRC Circular mode **/
#define DMA1_CCR6_CIRC		(1 << 5)
/** DMA1_CCR6_DIR Data transfer direction **/
#define DMA1_CCR6_DIR		(1 << 4)
/** DMA1_CCR6_TEIE Transfer error interrupt enable **/
#define DMA1_CCR6_TEIE		(1 << 3)
/** DMA1_CCR6_HTIE Half transfer interrupt enable **/
#define DMA1_CCR6_HTIE		(1 << 2)
/** DMA1_CCR6_TCIE Transfer complete interrupt enable **/
#define DMA1_CCR6_TCIE		(1 << 1)
/** DMA1_CCR6_EN Channel enable **/
#define DMA1_CCR6_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr6 CNDTR6 channel x number of data register
@{*/


#define DMA1_CNDTR6_NDT_SHIFT		0
#define DMA1_CNDTR6_NDT_MASK		0xffff
/** @defgroup dma1_cndtr6_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar6 CPAR6 channel x peripheral address register
@{*/


#define DMA1_CPAR6_PA_SHIFT		0
#define DMA1_CPAR6_PA_MASK		0xffffffff
/** @defgroup dma1_cpar6_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar6 CMAR6 channel x memory address register
@{*/


#define DMA1_CMAR6_MA_SHIFT		0
#define DMA1_CMAR6_MA_MASK		0xffffffff
/** @defgroup dma1_cmar6_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_ccr7 CCR7 channel x configuration register
@{*/

/** DMA1_CCR7_MEM2MEM Memory to memory mode **/
#define DMA1_CCR7_MEM2MEM		(1 << 14)

#define DMA1_CCR7_PL_SHIFT		12
#define DMA1_CCR7_PL_MASK		0x03
/** @defgroup dma1_ccr7_pl PL Channel priority level
@{*/
/**@}*/


#define DMA1_CCR7_MSIZE_SHIFT		10
#define DMA1_CCR7_MSIZE_MASK		0x03
/** @defgroup dma1_ccr7_msize MSIZE Memory size
@{*/
/**@}*/


#define DMA1_CCR7_PSIZE_SHIFT		8
#define DMA1_CCR7_PSIZE_MASK		0x03
/** @defgroup dma1_ccr7_psize PSIZE Peripheral size
@{*/
/**@}*/

/** DMA1_CCR7_MINC Memory increment mode **/
#define DMA1_CCR7_MINC		(1 << 7)
/** DMA1_CCR7_PINC Peripheral increment mode **/
#define DMA1_CCR7_PINC		(1 << 6)
/** DMA1_CCR7_CIRC Circular mode **/
#define DMA1_CCR7_CIRC		(1 << 5)
/** DMA1_CCR7_DIR Data transfer direction **/
#define DMA1_CCR7_DIR		(1 << 4)
/** DMA1_CCR7_TEIE Transfer error interrupt enable **/
#define DMA1_CCR7_TEIE		(1 << 3)
/** DMA1_CCR7_HTIE Half transfer interrupt enable **/
#define DMA1_CCR7_HTIE		(1 << 2)
/** DMA1_CCR7_TCIE Transfer complete interrupt enable **/
#define DMA1_CCR7_TCIE		(1 << 1)
/** DMA1_CCR7_EN Channel enable **/
#define DMA1_CCR7_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr7 CNDTR7 channel x number of data register
@{*/


#define DMA1_CNDTR7_NDT_SHIFT		0
#define DMA1_CNDTR7_NDT_MASK		0xffff
/** @defgroup dma1_cndtr7_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar7 CPAR7 channel x peripheral address register
@{*/


#define DMA1_CPAR7_PA_SHIFT		0
#define DMA1_CPAR7_PA_MASK		0xffffffff
/** @defgroup dma1_cpar7_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar7 CMAR7 channel x memory address register
@{*/


#define DMA1_CMAR7_MA_SHIFT		0
#define DMA1_CMAR7_MA_MASK		0xffffffff
/** @defgroup dma1_cmar7_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cselr CSELR channel selection register
@{*/


#define DMA1_CSELR_C7S_SHIFT		24
#define DMA1_CSELR_C7S_MASK		0x0f
/** @defgroup dma1_cselr_c7s C7S DMA channel 7 selection
@{*/
/**@}*/


#define DMA1_CSELR_C6S_SHIFT		20
#define DMA1_CSELR_C6S_MASK		0x0f
/** @defgroup dma1_cselr_c6s C6S DMA channel 6 selection
@{*/
/**@}*/


#define DMA1_CSELR_C5S_SHIFT		16
#define DMA1_CSELR_C5S_MASK		0x0f
/** @defgroup dma1_cselr_c5s C5S DMA channel 5 selection
@{*/
/**@}*/


#define DMA1_CSELR_C4S_SHIFT		12
#define DMA1_CSELR_C4S_MASK		0x0f
/** @defgroup dma1_cselr_c4s C4S DMA channel 4 selection
@{*/
/**@}*/


#define DMA1_CSELR_C3S_SHIFT		8
#define DMA1_CSELR_C3S_MASK		0x0f
/** @defgroup dma1_cselr_c3s C3S DMA channel 3 selection
@{*/
/**@}*/


#define DMA1_CSELR_C2S_SHIFT		4
#define DMA1_CSELR_C2S_MASK		0x0f
/** @defgroup dma1_cselr_c2s C2S DMA channel 2 selection
@{*/
/**@}*/


#define DMA1_CSELR_C1S_SHIFT		0
#define DMA1_CSELR_C1S_MASK		0x0f
/** @defgroup dma1_cselr_c1s C1S DMA channel 1 selection
@{*/
/**@}*/


/**@}*/
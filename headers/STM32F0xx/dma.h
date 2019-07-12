#pragma once 

/* --- DMA: DMA controller ------------------------------------------ */

/** @defgroup dma_registers DMA controller Register
@{*/

/** DMA_ISR DMA interrupt status register (DMA_ISR) **/
#define DMA_ISR			MMIO32(DMA_BASE + 0x00)
/** DMA_IFCR DMA interrupt flag clear register (DMA_IFCR) **/
#define DMA_IFCR			MMIO32(DMA_BASE + 0x04)
/** DMA_CCR1 DMA channel configuration register (DMA_CCR) **/
#define DMA_CCR1			MMIO32(DMA_BASE + 0x08)
/** DMA_CNDTR1 DMA channel 1 number of data register **/
#define DMA_CNDTR1			MMIO32(DMA_BASE + 0x0c)
/** DMA_CPAR1 DMA channel 1 peripheral address register **/
#define DMA_CPAR1			MMIO32(DMA_BASE + 0x10)
/** DMA_CMAR1 DMA channel 1 memory address register **/
#define DMA_CMAR1			MMIO32(DMA_BASE + 0x14)
/** DMA_CCR2 DMA channel configuration register (DMA_CCR) **/
#define DMA_CCR2			MMIO32(DMA_BASE + 0x1c)
/** DMA_CNDTR2 DMA channel 2 number of data register **/
#define DMA_CNDTR2			MMIO32(DMA_BASE + 0x20)
/** DMA_CPAR2 DMA channel 2 peripheral address register **/
#define DMA_CPAR2			MMIO32(DMA_BASE + 0x24)
/** DMA_CMAR2 DMA channel 2 memory address register **/
#define DMA_CMAR2			MMIO32(DMA_BASE + 0x28)
/** DMA_CCR3 DMA channel configuration register (DMA_CCR) **/
#define DMA_CCR3			MMIO32(DMA_BASE + 0x30)
/** DMA_CNDTR3 DMA channel 3 number of data register **/
#define DMA_CNDTR3			MMIO32(DMA_BASE + 0x34)
/** DMA_CPAR3 DMA channel 3 peripheral address register **/
#define DMA_CPAR3			MMIO32(DMA_BASE + 0x38)
/** DMA_CMAR3 DMA channel 3 memory address register **/
#define DMA_CMAR3			MMIO32(DMA_BASE + 0x3c)
/** DMA_CCR4 DMA channel configuration register (DMA_CCR) **/
#define DMA_CCR4			MMIO32(DMA_BASE + 0x44)
/** DMA_CNDTR4 DMA channel 4 number of data register **/
#define DMA_CNDTR4			MMIO32(DMA_BASE + 0x48)
/** DMA_CPAR4 DMA channel 4 peripheral address register **/
#define DMA_CPAR4			MMIO32(DMA_BASE + 0x4c)
/** DMA_CMAR4 DMA channel 4 memory address register **/
#define DMA_CMAR4			MMIO32(DMA_BASE + 0x50)
/** DMA_CCR5 DMA channel configuration register (DMA_CCR) **/
#define DMA_CCR5			MMIO32(DMA_BASE + 0x58)
/** DMA_CNDTR5 DMA channel 5 number of data register **/
#define DMA_CNDTR5			MMIO32(DMA_BASE + 0x5c)
/** DMA_CPAR5 DMA channel 5 peripheral address register **/
#define DMA_CPAR5			MMIO32(DMA_BASE + 0x60)
/** DMA_CMAR5 DMA channel 5 memory address register **/
#define DMA_CMAR5			MMIO32(DMA_BASE + 0x64)
/** DMA_CCR6 DMA channel configuration register (DMA_CCR) **/
#define DMA_CCR6			MMIO32(DMA_BASE + 0x6c)
/** DMA_CNDTR6 DMA channel 6 number of data register **/
#define DMA_CNDTR6			MMIO32(DMA_BASE + 0x70)
/** DMA_CPAR6 DMA channel 6 peripheral address register **/
#define DMA_CPAR6			MMIO32(DMA_BASE + 0x74)
/** DMA_CMAR6 DMA channel 6 memory address register **/
#define DMA_CMAR6			MMIO32(DMA_BASE + 0x78)
/** DMA_CCR7 DMA channel configuration register (DMA_CCR) **/
#define DMA_CCR7			MMIO32(DMA_BASE + 0x80)
/** DMA_CNDTR7 DMA channel 7 number of data register **/
#define DMA_CNDTR7			MMIO32(DMA_BASE + 0x84)
/** DMA_CPAR7 DMA channel 7 peripheral address register **/
#define DMA_CPAR7			MMIO32(DMA_BASE + 0x88)
/** DMA_CMAR7 DMA channel 7 memory address register **/
#define DMA_CMAR7			MMIO32(DMA_BASE + 0x8c)

/**@}*/


/** @defgroup dma_isr ISR DMA interrupt status register (DMA_ISR)
@{*/

/** DMA_ISR_TEIF7 Channel 7 Transfer Error flag **/
#define DMA_ISR_TEIF7		(1 << 27)
/** DMA_ISR_HTIF7 Channel 7 Half Transfer Complete flag **/
#define DMA_ISR_HTIF7		(1 << 26)
/** DMA_ISR_TCIF7 Channel 7 Transfer Complete flag **/
#define DMA_ISR_TCIF7		(1 << 25)
/** DMA_ISR_GIF7 Channel 7 Global interrupt flag **/
#define DMA_ISR_GIF7		(1 << 24)
/** DMA_ISR_TEIF6 Channel 6 Transfer Error flag **/
#define DMA_ISR_TEIF6		(1 << 23)
/** DMA_ISR_HTIF6 Channel 6 Half Transfer Complete flag **/
#define DMA_ISR_HTIF6		(1 << 22)
/** DMA_ISR_TCIF6 Channel 6 Transfer Complete flag **/
#define DMA_ISR_TCIF6		(1 << 21)
/** DMA_ISR_GIF6 Channel 6 Global interrupt flag **/
#define DMA_ISR_GIF6		(1 << 20)
/** DMA_ISR_TEIF5 Channel 5 Transfer Error flag **/
#define DMA_ISR_TEIF5		(1 << 19)
/** DMA_ISR_HTIF5 Channel 5 Half Transfer Complete flag **/
#define DMA_ISR_HTIF5		(1 << 18)
/** DMA_ISR_TCIF5 Channel 5 Transfer Complete flag **/
#define DMA_ISR_TCIF5		(1 << 17)
/** DMA_ISR_GIF5 Channel 5 Global interrupt flag **/
#define DMA_ISR_GIF5		(1 << 16)
/** DMA_ISR_TEIF4 Channel 4 Transfer Error flag **/
#define DMA_ISR_TEIF4		(1 << 15)
/** DMA_ISR_HTIF4 Channel 4 Half Transfer Complete flag **/
#define DMA_ISR_HTIF4		(1 << 14)
/** DMA_ISR_TCIF4 Channel 4 Transfer Complete flag **/
#define DMA_ISR_TCIF4		(1 << 13)
/** DMA_ISR_GIF4 Channel 4 Global interrupt flag **/
#define DMA_ISR_GIF4		(1 << 12)
/** DMA_ISR_TEIF3 Channel 3 Transfer Error flag **/
#define DMA_ISR_TEIF3		(1 << 11)
/** DMA_ISR_HTIF3 Channel 3 Half Transfer Complete flag **/
#define DMA_ISR_HTIF3		(1 << 10)
/** DMA_ISR_TCIF3 Channel 3 Transfer Complete flag **/
#define DMA_ISR_TCIF3		(1 << 9)
/** DMA_ISR_GIF3 Channel 3 Global interrupt flag **/
#define DMA_ISR_GIF3		(1 << 8)
/** DMA_ISR_TEIF2 Channel 2 Transfer Error flag **/
#define DMA_ISR_TEIF2		(1 << 7)
/** DMA_ISR_HTIF2 Channel 2 Half Transfer Complete flag **/
#define DMA_ISR_HTIF2		(1 << 6)
/** DMA_ISR_TCIF2 Channel 2 Transfer Complete flag **/
#define DMA_ISR_TCIF2		(1 << 5)
/** DMA_ISR_GIF2 Channel 2 Global interrupt flag **/
#define DMA_ISR_GIF2		(1 << 4)
/** DMA_ISR_TEIF1 Channel 1 Transfer Error flag **/
#define DMA_ISR_TEIF1		(1 << 3)
/** DMA_ISR_HTIF1 Channel 1 Half Transfer Complete flag **/
#define DMA_ISR_HTIF1		(1 << 2)
/** DMA_ISR_TCIF1 Channel 1 Transfer Complete flag **/
#define DMA_ISR_TCIF1		(1 << 1)
/** DMA_ISR_GIF1 Channel 1 Global interrupt flag **/
#define DMA_ISR_GIF1		(1 << 0)

/**@}*/

/** @defgroup dma_ifcr IFCR DMA interrupt flag clear register (DMA_IFCR)
@{*/

/** DMA_IFCR_CTEIF7 Channel 7 Transfer Error clear **/
#define DMA_IFCR_CTEIF7		(1 << 27)
/** DMA_IFCR_CHTIF7 Channel 7 Half Transfer clear **/
#define DMA_IFCR_CHTIF7		(1 << 26)
/** DMA_IFCR_CTCIF7 Channel 7 Transfer Complete clear **/
#define DMA_IFCR_CTCIF7		(1 << 25)
/** DMA_IFCR_CGIF7 Channel 7 Global interrupt clear **/
#define DMA_IFCR_CGIF7		(1 << 24)
/** DMA_IFCR_CTEIF6 Channel 6 Transfer Error clear **/
#define DMA_IFCR_CTEIF6		(1 << 23)
/** DMA_IFCR_CHTIF6 Channel 6 Half Transfer clear **/
#define DMA_IFCR_CHTIF6		(1 << 22)
/** DMA_IFCR_CTCIF6 Channel 6 Transfer Complete clear **/
#define DMA_IFCR_CTCIF6		(1 << 21)
/** DMA_IFCR_CGIF6 Channel 6 Global interrupt clear **/
#define DMA_IFCR_CGIF6		(1 << 20)
/** DMA_IFCR_CTEIF5 Channel 5 Transfer Error clear **/
#define DMA_IFCR_CTEIF5		(1 << 19)
/** DMA_IFCR_CHTIF5 Channel 5 Half Transfer clear **/
#define DMA_IFCR_CHTIF5		(1 << 18)
/** DMA_IFCR_CTCIF5 Channel 5 Transfer Complete clear **/
#define DMA_IFCR_CTCIF5		(1 << 17)
/** DMA_IFCR_CGIF5 Channel 5 Global interrupt clear **/
#define DMA_IFCR_CGIF5		(1 << 16)
/** DMA_IFCR_CTEIF4 Channel 4 Transfer Error clear **/
#define DMA_IFCR_CTEIF4		(1 << 15)
/** DMA_IFCR_CHTIF4 Channel 4 Half Transfer clear **/
#define DMA_IFCR_CHTIF4		(1 << 14)
/** DMA_IFCR_CTCIF4 Channel 4 Transfer Complete clear **/
#define DMA_IFCR_CTCIF4		(1 << 13)
/** DMA_IFCR_CGIF4 Channel 4 Global interrupt clear **/
#define DMA_IFCR_CGIF4		(1 << 12)
/** DMA_IFCR_CTEIF3 Channel 3 Transfer Error clear **/
#define DMA_IFCR_CTEIF3		(1 << 11)
/** DMA_IFCR_CHTIF3 Channel 3 Half Transfer clear **/
#define DMA_IFCR_CHTIF3		(1 << 10)
/** DMA_IFCR_CTCIF3 Channel 3 Transfer Complete clear **/
#define DMA_IFCR_CTCIF3		(1 << 9)
/** DMA_IFCR_CGIF3 Channel 3 Global interrupt clear **/
#define DMA_IFCR_CGIF3		(1 << 8)
/** DMA_IFCR_CTEIF2 Channel 2 Transfer Error clear **/
#define DMA_IFCR_CTEIF2		(1 << 7)
/** DMA_IFCR_CHTIF2 Channel 2 Half Transfer clear **/
#define DMA_IFCR_CHTIF2		(1 << 6)
/** DMA_IFCR_CTCIF2 Channel 2 Transfer Complete clear **/
#define DMA_IFCR_CTCIF2		(1 << 5)
/** DMA_IFCR_CGIF2 Channel 2 Global interrupt clear **/
#define DMA_IFCR_CGIF2		(1 << 4)
/** DMA_IFCR_CTEIF1 Channel 1 Transfer Error clear **/
#define DMA_IFCR_CTEIF1		(1 << 3)
/** DMA_IFCR_CHTIF1 Channel 1 Half Transfer clear **/
#define DMA_IFCR_CHTIF1		(1 << 2)
/** DMA_IFCR_CTCIF1 Channel 1 Transfer Complete clear **/
#define DMA_IFCR_CTCIF1		(1 << 1)
/** DMA_IFCR_CGIF1 Channel 1 Global interrupt clear **/
#define DMA_IFCR_CGIF1		(1 << 0)

/**@}*/

/** @defgroup dma_ccr1 CCR1 DMA channel configuration register (DMA_CCR)
@{*/

/** DMA_CCR1_MEM2MEM Memory to memory mode **/
#define DMA_CCR1_MEM2MEM		(1 << 14)

#define DMA_CCR1_PL_SHIFT		12
#define DMA_CCR1_PL_MASK		0x03
/** @defgroup dma_ccr1_pl PL Channel Priority level
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
/** DMA_CCR1_HTIE Half Transfer interrupt enable **/
#define DMA_CCR1_HTIE		(1 << 2)
/** DMA_CCR1_TCIE Transfer complete interrupt enable **/
#define DMA_CCR1_TCIE		(1 << 1)
/** DMA_CCR1_EN Channel enable **/
#define DMA_CCR1_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr1 CNDTR1 DMA channel 1 number of data register
@{*/


#define DMA_CNDTR1_NDT_SHIFT		0
#define DMA_CNDTR1_NDT_MASK		0xffff
/** @defgroup dma_cndtr1_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar1 CPAR1 DMA channel 1 peripheral address register
@{*/


#define DMA_CPAR1_PA_SHIFT		0
#define DMA_CPAR1_PA_MASK		0xffffffff
/** @defgroup dma_cpar1_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar1 CMAR1 DMA channel 1 memory address register
@{*/


#define DMA_CMAR1_MA_SHIFT		0
#define DMA_CMAR1_MA_MASK		0xffffffff
/** @defgroup dma_cmar1_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_ccr2 CCR2 DMA channel configuration register (DMA_CCR)
@{*/

/** DMA_CCR2_MEM2MEM Memory to memory mode **/
#define DMA_CCR2_MEM2MEM		(1 << 14)

#define DMA_CCR2_PL_SHIFT		12
#define DMA_CCR2_PL_MASK		0x03
/** @defgroup dma_ccr2_pl PL Channel Priority level
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
/** DMA_CCR2_HTIE Half Transfer interrupt enable **/
#define DMA_CCR2_HTIE		(1 << 2)
/** DMA_CCR2_TCIE Transfer complete interrupt enable **/
#define DMA_CCR2_TCIE		(1 << 1)
/** DMA_CCR2_EN Channel enable **/
#define DMA_CCR2_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr2 CNDTR2 DMA channel 2 number of data register
@{*/


#define DMA_CNDTR2_NDT_SHIFT		0
#define DMA_CNDTR2_NDT_MASK		0xffff
/** @defgroup dma_cndtr2_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar2 CPAR2 DMA channel 2 peripheral address register
@{*/


#define DMA_CPAR2_PA_SHIFT		0
#define DMA_CPAR2_PA_MASK		0xffffffff
/** @defgroup dma_cpar2_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar2 CMAR2 DMA channel 2 memory address register
@{*/


#define DMA_CMAR2_MA_SHIFT		0
#define DMA_CMAR2_MA_MASK		0xffffffff
/** @defgroup dma_cmar2_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_ccr3 CCR3 DMA channel configuration register (DMA_CCR)
@{*/

/** DMA_CCR3_MEM2MEM Memory to memory mode **/
#define DMA_CCR3_MEM2MEM		(1 << 14)

#define DMA_CCR3_PL_SHIFT		12
#define DMA_CCR3_PL_MASK		0x03
/** @defgroup dma_ccr3_pl PL Channel Priority level
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
/** DMA_CCR3_HTIE Half Transfer interrupt enable **/
#define DMA_CCR3_HTIE		(1 << 2)
/** DMA_CCR3_TCIE Transfer complete interrupt enable **/
#define DMA_CCR3_TCIE		(1 << 1)
/** DMA_CCR3_EN Channel enable **/
#define DMA_CCR3_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr3 CNDTR3 DMA channel 3 number of data register
@{*/


#define DMA_CNDTR3_NDT_SHIFT		0
#define DMA_CNDTR3_NDT_MASK		0xffff
/** @defgroup dma_cndtr3_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar3 CPAR3 DMA channel 3 peripheral address register
@{*/


#define DMA_CPAR3_PA_SHIFT		0
#define DMA_CPAR3_PA_MASK		0xffffffff
/** @defgroup dma_cpar3_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar3 CMAR3 DMA channel 3 memory address register
@{*/


#define DMA_CMAR3_MA_SHIFT		0
#define DMA_CMAR3_MA_MASK		0xffffffff
/** @defgroup dma_cmar3_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_ccr4 CCR4 DMA channel configuration register (DMA_CCR)
@{*/

/** DMA_CCR4_MEM2MEM Memory to memory mode **/
#define DMA_CCR4_MEM2MEM		(1 << 14)

#define DMA_CCR4_PL_SHIFT		12
#define DMA_CCR4_PL_MASK		0x03
/** @defgroup dma_ccr4_pl PL Channel Priority level
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
/** DMA_CCR4_HTIE Half Transfer interrupt enable **/
#define DMA_CCR4_HTIE		(1 << 2)
/** DMA_CCR4_TCIE Transfer complete interrupt enable **/
#define DMA_CCR4_TCIE		(1 << 1)
/** DMA_CCR4_EN Channel enable **/
#define DMA_CCR4_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr4 CNDTR4 DMA channel 4 number of data register
@{*/


#define DMA_CNDTR4_NDT_SHIFT		0
#define DMA_CNDTR4_NDT_MASK		0xffff
/** @defgroup dma_cndtr4_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar4 CPAR4 DMA channel 4 peripheral address register
@{*/


#define DMA_CPAR4_PA_SHIFT		0
#define DMA_CPAR4_PA_MASK		0xffffffff
/** @defgroup dma_cpar4_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar4 CMAR4 DMA channel 4 memory address register
@{*/


#define DMA_CMAR4_MA_SHIFT		0
#define DMA_CMAR4_MA_MASK		0xffffffff
/** @defgroup dma_cmar4_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_ccr5 CCR5 DMA channel configuration register (DMA_CCR)
@{*/

/** DMA_CCR5_MEM2MEM Memory to memory mode **/
#define DMA_CCR5_MEM2MEM		(1 << 14)

#define DMA_CCR5_PL_SHIFT		12
#define DMA_CCR5_PL_MASK		0x03
/** @defgroup dma_ccr5_pl PL Channel Priority level
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
/** DMA_CCR5_HTIE Half Transfer interrupt enable **/
#define DMA_CCR5_HTIE		(1 << 2)
/** DMA_CCR5_TCIE Transfer complete interrupt enable **/
#define DMA_CCR5_TCIE		(1 << 1)
/** DMA_CCR5_EN Channel enable **/
#define DMA_CCR5_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr5 CNDTR5 DMA channel 5 number of data register
@{*/


#define DMA_CNDTR5_NDT_SHIFT		0
#define DMA_CNDTR5_NDT_MASK		0xffff
/** @defgroup dma_cndtr5_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar5 CPAR5 DMA channel 5 peripheral address register
@{*/


#define DMA_CPAR5_PA_SHIFT		0
#define DMA_CPAR5_PA_MASK		0xffffffff
/** @defgroup dma_cpar5_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar5 CMAR5 DMA channel 5 memory address register
@{*/


#define DMA_CMAR5_MA_SHIFT		0
#define DMA_CMAR5_MA_MASK		0xffffffff
/** @defgroup dma_cmar5_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_ccr6 CCR6 DMA channel configuration register (DMA_CCR)
@{*/

/** DMA_CCR6_MEM2MEM Memory to memory mode **/
#define DMA_CCR6_MEM2MEM		(1 << 14)

#define DMA_CCR6_PL_SHIFT		12
#define DMA_CCR6_PL_MASK		0x03
/** @defgroup dma_ccr6_pl PL Channel Priority level
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
/** DMA_CCR6_HTIE Half Transfer interrupt enable **/
#define DMA_CCR6_HTIE		(1 << 2)
/** DMA_CCR6_TCIE Transfer complete interrupt enable **/
#define DMA_CCR6_TCIE		(1 << 1)
/** DMA_CCR6_EN Channel enable **/
#define DMA_CCR6_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr6 CNDTR6 DMA channel 6 number of data register
@{*/


#define DMA_CNDTR6_NDT_SHIFT		0
#define DMA_CNDTR6_NDT_MASK		0xffff
/** @defgroup dma_cndtr6_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar6 CPAR6 DMA channel 6 peripheral address register
@{*/


#define DMA_CPAR6_PA_SHIFT		0
#define DMA_CPAR6_PA_MASK		0xffffffff
/** @defgroup dma_cpar6_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar6 CMAR6 DMA channel 6 memory address register
@{*/


#define DMA_CMAR6_MA_SHIFT		0
#define DMA_CMAR6_MA_MASK		0xffffffff
/** @defgroup dma_cmar6_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_ccr7 CCR7 DMA channel configuration register (DMA_CCR)
@{*/

/** DMA_CCR7_MEM2MEM Memory to memory mode **/
#define DMA_CCR7_MEM2MEM		(1 << 14)

#define DMA_CCR7_PL_SHIFT		12
#define DMA_CCR7_PL_MASK		0x03
/** @defgroup dma_ccr7_pl PL Channel Priority level
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
/** DMA_CCR7_HTIE Half Transfer interrupt enable **/
#define DMA_CCR7_HTIE		(1 << 2)
/** DMA_CCR7_TCIE Transfer complete interrupt enable **/
#define DMA_CCR7_TCIE		(1 << 1)
/** DMA_CCR7_EN Channel enable **/
#define DMA_CCR7_EN		(1 << 0)

/**@}*/

/** @defgroup dma_cndtr7 CNDTR7 DMA channel 7 number of data register
@{*/


#define DMA_CNDTR7_NDT_SHIFT		0
#define DMA_CNDTR7_NDT_MASK		0xffff
/** @defgroup dma_cndtr7_ndt NDT Number of data to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cpar7 CPAR7 DMA channel 7 peripheral address register
@{*/


#define DMA_CPAR7_PA_SHIFT		0
#define DMA_CPAR7_PA_MASK		0xffffffff
/** @defgroup dma_cpar7_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma_cmar7 CMAR7 DMA channel 7 memory address register
@{*/


#define DMA_CMAR7_MA_SHIFT		0
#define DMA_CMAR7_MA_MASK		0xffffffff
/** @defgroup dma_cmar7_ma MA Memory address
@{*/
/**@}*/


/**@}*/

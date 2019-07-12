#pragma once 

/* --- DMA1: DMA controller ----------------------------------------- */

/** @defgroup dma1_registers DMA controller Register
@{*/

/** DMA1_ISR interrupt status register **/
#define DMA1_ISR			MMIO32(DMA1_BASE + 0x00)
/** DMA1_IFCR DMA interrupt flag clear register **/
#define DMA1_IFCR			MMIO32(DMA1_BASE + 0x04)
/** DMA1_CCR1 DMA channel 1 configuration register **/
#define DMA1_CCR1			MMIO32(DMA1_BASE + 0x08)
/** DMA1_CNDTR1 channel x number of data to transfer register **/
#define DMA1_CNDTR1			MMIO32(DMA1_BASE + 0x0c)
/** DMA1_CPAR1 DMA channel x peripheral address register **/
#define DMA1_CPAR1			MMIO32(DMA1_BASE + 0x10)
/** DMA1_CMAR1 DMA channel x memory address register **/
#define DMA1_CMAR1			MMIO32(DMA1_BASE + 0x14)
/** DMA1_CCR2 DMA channel 2 configuration register **/
#define DMA1_CCR2			MMIO32(DMA1_BASE + 0x1c)
/** DMA1_CNDTR2 channel x number of data to transfer register **/
#define DMA1_CNDTR2			MMIO32(DMA1_BASE + 0x20)
/** DMA1_CPAR2 DMA channel x peripheral address register **/
#define DMA1_CPAR2			MMIO32(DMA1_BASE + 0x24)
/** DMA1_CMAR2 DMA channel x memory address register **/
#define DMA1_CMAR2			MMIO32(DMA1_BASE + 0x28)
/** DMA1_CCR3 DMA channel 3 configuration register **/
#define DMA1_CCR3			MMIO32(DMA1_BASE + 0x30)
/** DMA1_CNDTR3 channel x number of data to transfer register **/
#define DMA1_CNDTR3			MMIO32(DMA1_BASE + 0x34)
/** DMA1_CPAR3 DMA channel x peripheral address register **/
#define DMA1_CPAR3			MMIO32(DMA1_BASE + 0x38)
/** DMA1_CMAR3 DMA channel x memory address register **/
#define DMA1_CMAR3			MMIO32(DMA1_BASE + 0x3c)
/** DMA1_CCR4 DMA channel 3 configuration register **/
#define DMA1_CCR4			MMIO32(DMA1_BASE + 0x44)
/** DMA1_CNDTR4 channel x number of data to transfer register **/
#define DMA1_CNDTR4			MMIO32(DMA1_BASE + 0x48)
/** DMA1_CPAR4 DMA channel x peripheral address register **/
#define DMA1_CPAR4			MMIO32(DMA1_BASE + 0x4c)
/** DMA1_CMAR4 DMA channel x memory address register **/
#define DMA1_CMAR4			MMIO32(DMA1_BASE + 0x50)
/** DMA1_CCR5 DMA channel 4 configuration register **/
#define DMA1_CCR5			MMIO32(DMA1_BASE + 0x58)
/** DMA1_CNDTR5 channel x number of data to transfer register **/
#define DMA1_CNDTR5			MMIO32(DMA1_BASE + 0x5c)
/** DMA1_CPAR5 DMA channel x peripheral address register **/
#define DMA1_CPAR5			MMIO32(DMA1_BASE + 0x60)
/** DMA1_CMAR5 DMA channel x memory address register **/
#define DMA1_CMAR5			MMIO32(DMA1_BASE + 0x64)
/** DMA1_CCR6 DMA channel 5 configuration register **/
#define DMA1_CCR6			MMIO32(DMA1_BASE + 0x6c)
/** DMA1_CNDTR6 channel x number of data to transfer register **/
#define DMA1_CNDTR6			MMIO32(DMA1_BASE + 0x70)
/** DMA1_CPAR6 DMA channel x peripheral address register **/
#define DMA1_CPAR6			MMIO32(DMA1_BASE + 0x74)
/** DMA1_CMAR6 DMA channel x memory address register **/
#define DMA1_CMAR6			MMIO32(DMA1_BASE + 0x78)
/** DMA1_CCR7 DMA channel 6 configuration register **/
#define DMA1_CCR7			MMIO32(DMA1_BASE + 0x80)
/** DMA1_CNDTR7 channel x number of data to transfer register **/
#define DMA1_CNDTR7			MMIO32(DMA1_BASE + 0x84)
/** DMA1_CPAR7 DMA channel x peripheral address register **/
#define DMA1_CPAR7			MMIO32(DMA1_BASE + 0x88)
/** DMA1_CMAR7 DMA channel x memory address register **/
#define DMA1_CMAR7			MMIO32(DMA1_BASE + 0x8c)
/** DMA1_CCR8 DMA channel 7 configuration register **/
#define DMA1_CCR8			MMIO32(DMA1_BASE + 0x94)
/** DMA1_CNDTR8 channel x number of data to transfer register **/
#define DMA1_CNDTR8			MMIO32(DMA1_BASE + 0x98)
/** DMA1_CPAR8 DMA channel x peripheral address register **/
#define DMA1_CPAR8			MMIO32(DMA1_BASE + 0x9c)
/** DMA1_CMAR8 DMA channel x memory address register **/
#define DMA1_CMAR8			MMIO32(DMA1_BASE + 0xa0)

/**@}*/


/** @defgroup dma1_isr ISR interrupt status register
@{*/

/** DMA1_ISR_TEIF8 TEIF8 **/
#define DMA1_ISR_TEIF8		(1 << 31)
/** DMA1_ISR_HTIF8 HTIF8 **/
#define DMA1_ISR_HTIF8		(1 << 30)
/** DMA1_ISR_TCIF8 TCIF8 **/
#define DMA1_ISR_TCIF8		(1 << 29)
/** DMA1_ISR_GIF8 GIF8 **/
#define DMA1_ISR_GIF8		(1 << 28)
/** DMA1_ISR_TEIF7 TEIF7 **/
#define DMA1_ISR_TEIF7		(1 << 27)
/** DMA1_ISR_HTIF7 HTIF7 **/
#define DMA1_ISR_HTIF7		(1 << 26)
/** DMA1_ISR_TCIF7 TCIF7 **/
#define DMA1_ISR_TCIF7		(1 << 25)
/** DMA1_ISR_GIF7 GIF7 **/
#define DMA1_ISR_GIF7		(1 << 24)
/** DMA1_ISR_TEIF6 TEIF6 **/
#define DMA1_ISR_TEIF6		(1 << 23)
/** DMA1_ISR_HTIF6 HTIF6 **/
#define DMA1_ISR_HTIF6		(1 << 22)
/** DMA1_ISR_TCIF6 TCIF6 **/
#define DMA1_ISR_TCIF6		(1 << 21)
/** DMA1_ISR_GIF6 GIF6 **/
#define DMA1_ISR_GIF6		(1 << 20)
/** DMA1_ISR_TEIF5 TEIF5 **/
#define DMA1_ISR_TEIF5		(1 << 19)
/** DMA1_ISR_HTIF5 HTIF5 **/
#define DMA1_ISR_HTIF5		(1 << 18)
/** DMA1_ISR_TCIF5 TCIF5 **/
#define DMA1_ISR_TCIF5		(1 << 17)
/** DMA1_ISR_GIF5 GIF5 **/
#define DMA1_ISR_GIF5		(1 << 16)
/** DMA1_ISR_TEIF4 TEIF4 **/
#define DMA1_ISR_TEIF4		(1 << 15)
/** DMA1_ISR_HTIF4 HTIF4 **/
#define DMA1_ISR_HTIF4		(1 << 14)
/** DMA1_ISR_TCIF4 TCIF4 **/
#define DMA1_ISR_TCIF4		(1 << 13)
/** DMA1_ISR_GIF4 GIF4 **/
#define DMA1_ISR_GIF4		(1 << 12)
/** DMA1_ISR_TEIF3 TEIF3 **/
#define DMA1_ISR_TEIF3		(1 << 11)
/** DMA1_ISR_HTIF3 HTIF3 **/
#define DMA1_ISR_HTIF3		(1 << 10)
/** DMA1_ISR_TCIF3 TCIF3 **/
#define DMA1_ISR_TCIF3		(1 << 9)
/** DMA1_ISR_GIF3 GIF3 **/
#define DMA1_ISR_GIF3		(1 << 8)
/** DMA1_ISR_TEIF2 TEIF2 **/
#define DMA1_ISR_TEIF2		(1 << 7)
/** DMA1_ISR_HTIF2 HTIF2 **/
#define DMA1_ISR_HTIF2		(1 << 6)
/** DMA1_ISR_TCIF2 TCIF2 **/
#define DMA1_ISR_TCIF2		(1 << 5)
/** DMA1_ISR_GIF2 GIF2 **/
#define DMA1_ISR_GIF2		(1 << 4)
/** DMA1_ISR_TEIF1 TEIF1 **/
#define DMA1_ISR_TEIF1		(1 << 3)
/** DMA1_ISR_HTIF1 HTIF1 **/
#define DMA1_ISR_HTIF1		(1 << 2)
/** DMA1_ISR_TCIF1 TCIF1 **/
#define DMA1_ISR_TCIF1		(1 << 1)
/** DMA1_ISR_GIF1 GIF1 **/
#define DMA1_ISR_GIF1		(1 << 0)

/**@}*/

/** @defgroup dma1_ifcr IFCR DMA interrupt flag clear register
@{*/

/** DMA1_IFCR_TEIF8 TEIF8 **/
#define DMA1_IFCR_TEIF8		(1 << 31)
/** DMA1_IFCR_HTIF8 HTIF8 **/
#define DMA1_IFCR_HTIF8		(1 << 30)
/** DMA1_IFCR_TCIF8 TCIF8 **/
#define DMA1_IFCR_TCIF8		(1 << 29)
/** DMA1_IFCR_GIF8 GIF8 **/
#define DMA1_IFCR_GIF8		(1 << 28)
/** DMA1_IFCR_TEIF7 TEIF7 **/
#define DMA1_IFCR_TEIF7		(1 << 27)
/** DMA1_IFCR_HTIF7 HTIF7 **/
#define DMA1_IFCR_HTIF7		(1 << 26)
/** DMA1_IFCR_TCIF7 TCIF7 **/
#define DMA1_IFCR_TCIF7		(1 << 25)
/** DMA1_IFCR_GIF7 GIF7 **/
#define DMA1_IFCR_GIF7		(1 << 24)
/** DMA1_IFCR_TEIF6 TEIF6 **/
#define DMA1_IFCR_TEIF6		(1 << 23)
/** DMA1_IFCR_HTIF6 HTIF6 **/
#define DMA1_IFCR_HTIF6		(1 << 22)
/** DMA1_IFCR_TCIF6 TCIF6 **/
#define DMA1_IFCR_TCIF6		(1 << 21)
/** DMA1_IFCR_GIF6 GIF6 **/
#define DMA1_IFCR_GIF6		(1 << 20)
/** DMA1_IFCR_TEIF5 TEIF5 **/
#define DMA1_IFCR_TEIF5		(1 << 19)
/** DMA1_IFCR_HTIF5 HTIF5 **/
#define DMA1_IFCR_HTIF5		(1 << 18)
/** DMA1_IFCR_TCIF5 TCIF5 **/
#define DMA1_IFCR_TCIF5		(1 << 17)
/** DMA1_IFCR_GIF5 GIF5 **/
#define DMA1_IFCR_GIF5		(1 << 16)
/** DMA1_IFCR_TEIF4 TEIF4 **/
#define DMA1_IFCR_TEIF4		(1 << 15)
/** DMA1_IFCR_HTIF4 HTIF4 **/
#define DMA1_IFCR_HTIF4		(1 << 14)
/** DMA1_IFCR_TCIF4 TCIF4 **/
#define DMA1_IFCR_TCIF4		(1 << 13)
/** DMA1_IFCR_GIF4 GIF4 **/
#define DMA1_IFCR_GIF4		(1 << 12)
/** DMA1_IFCR_TEIF3 TEIF3 **/
#define DMA1_IFCR_TEIF3		(1 << 11)
/** DMA1_IFCR_HTIF3 HTIF3 **/
#define DMA1_IFCR_HTIF3		(1 << 10)
/** DMA1_IFCR_TCIF3 TCIF3 **/
#define DMA1_IFCR_TCIF3		(1 << 9)
/** DMA1_IFCR_GIF3 GIF3 **/
#define DMA1_IFCR_GIF3		(1 << 8)
/** DMA1_IFCR_TEIF2 TEIF2 **/
#define DMA1_IFCR_TEIF2		(1 << 7)
/** DMA1_IFCR_HTIF2 HTIF2 **/
#define DMA1_IFCR_HTIF2		(1 << 6)
/** DMA1_IFCR_TCIF2 TCIF2 **/
#define DMA1_IFCR_TCIF2		(1 << 5)
/** DMA1_IFCR_GIF2 GIF2 **/
#define DMA1_IFCR_GIF2		(1 << 4)
/** DMA1_IFCR_TEIF1 TEIF1 **/
#define DMA1_IFCR_TEIF1		(1 << 3)
/** DMA1_IFCR_HTIF1 HTIF1 **/
#define DMA1_IFCR_HTIF1		(1 << 2)
/** DMA1_IFCR_TCIF1 TCIF1 **/
#define DMA1_IFCR_TCIF1		(1 << 1)
/** DMA1_IFCR_GIF1 GIF1 **/
#define DMA1_IFCR_GIF1		(1 << 0)

/**@}*/

/** @defgroup dma1_ccr1 CCR1 DMA channel 1 configuration register
@{*/

/** DMA1_CCR1_MEM2MEM MEM2MEM **/
#define DMA1_CCR1_MEM2MEM		(1 << 14)

#define DMA1_CCR1_PL_SHIFT		12
#define DMA1_CCR1_PL_MASK		0x03
/** @defgroup dma1_ccr1_pl PL PL
@{*/
/**@}*/


#define DMA1_CCR1_MSIZE_SHIFT		10
#define DMA1_CCR1_MSIZE_MASK		0x03
/** @defgroup dma1_ccr1_msize MSIZE MSIZE
@{*/
/**@}*/


#define DMA1_CCR1_PSIZE_SHIFT		8
#define DMA1_CCR1_PSIZE_MASK		0x03
/** @defgroup dma1_ccr1_psize PSIZE PSIZE
@{*/
/**@}*/

/** DMA1_CCR1_MINC MINC **/
#define DMA1_CCR1_MINC		(1 << 7)
/** DMA1_CCR1_PINC PINC **/
#define DMA1_CCR1_PINC		(1 << 6)
/** DMA1_CCR1_CIRC CIRC **/
#define DMA1_CCR1_CIRC		(1 << 5)
/** DMA1_CCR1_DIR DIR **/
#define DMA1_CCR1_DIR		(1 << 4)
/** DMA1_CCR1_TEIE TEIE **/
#define DMA1_CCR1_TEIE		(1 << 3)
/** DMA1_CCR1_HTIE HTIE **/
#define DMA1_CCR1_HTIE		(1 << 2)
/** DMA1_CCR1_TCIE TCIE **/
#define DMA1_CCR1_TCIE		(1 << 1)
/** DMA1_CCR1_EN channel enable **/
#define DMA1_CCR1_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr1 CNDTR1 channel x number of data to transfer register
@{*/


#define DMA1_CNDTR1_NDT_SHIFT		0
#define DMA1_CNDTR1_NDT_MASK		0xffff
/** @defgroup dma1_cndtr1_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar1 CPAR1 DMA channel x peripheral address register
@{*/


#define DMA1_CPAR1_PA_SHIFT		0
#define DMA1_CPAR1_PA_MASK		0xffffffff
/** @defgroup dma1_cpar1_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar1 CMAR1 DMA channel x memory address register
@{*/


#define DMA1_CMAR1_MA_SHIFT		0
#define DMA1_CMAR1_MA_MASK		0xffffffff
/** @defgroup dma1_cmar1_ma MA Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_ccr2 CCR2 DMA channel 2 configuration register
@{*/

/** DMA1_CCR2_MEM2MEM MEM2MEM **/
#define DMA1_CCR2_MEM2MEM		(1 << 14)

#define DMA1_CCR2_PL_SHIFT		12
#define DMA1_CCR2_PL_MASK		0x03
/** @defgroup dma1_ccr2_pl PL PL
@{*/
/**@}*/


#define DMA1_CCR2_MSIZE_SHIFT		10
#define DMA1_CCR2_MSIZE_MASK		0x03
/** @defgroup dma1_ccr2_msize MSIZE MSIZE
@{*/
/**@}*/


#define DMA1_CCR2_PSIZE_SHIFT		8
#define DMA1_CCR2_PSIZE_MASK		0x03
/** @defgroup dma1_ccr2_psize PSIZE PSIZE
@{*/
/**@}*/

/** DMA1_CCR2_MINC MINC **/
#define DMA1_CCR2_MINC		(1 << 7)
/** DMA1_CCR2_PINC PINC **/
#define DMA1_CCR2_PINC		(1 << 6)
/** DMA1_CCR2_CIRC CIRC **/
#define DMA1_CCR2_CIRC		(1 << 5)
/** DMA1_CCR2_DIR DIR **/
#define DMA1_CCR2_DIR		(1 << 4)
/** DMA1_CCR2_TEIE TEIE **/
#define DMA1_CCR2_TEIE		(1 << 3)
/** DMA1_CCR2_HTIE HTIE **/
#define DMA1_CCR2_HTIE		(1 << 2)
/** DMA1_CCR2_TCIE TCIE **/
#define DMA1_CCR2_TCIE		(1 << 1)
/** DMA1_CCR2_EN channel enable **/
#define DMA1_CCR2_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr2 CNDTR2 channel x number of data to transfer register
@{*/


#define DMA1_CNDTR2_NDT_SHIFT		0
#define DMA1_CNDTR2_NDT_MASK		0xffff
/** @defgroup dma1_cndtr2_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar2 CPAR2 DMA channel x peripheral address register
@{*/


#define DMA1_CPAR2_PA_SHIFT		0
#define DMA1_CPAR2_PA_MASK		0xffffffff
/** @defgroup dma1_cpar2_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar2 CMAR2 DMA channel x memory address register
@{*/


#define DMA1_CMAR2_MA_SHIFT		0
#define DMA1_CMAR2_MA_MASK		0xffffffff
/** @defgroup dma1_cmar2_ma MA Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_ccr3 CCR3 DMA channel 3 configuration register
@{*/

/** DMA1_CCR3_MEM2MEM MEM2MEM **/
#define DMA1_CCR3_MEM2MEM		(1 << 14)

#define DMA1_CCR3_PL_SHIFT		12
#define DMA1_CCR3_PL_MASK		0x03
/** @defgroup dma1_ccr3_pl PL PL
@{*/
/**@}*/


#define DMA1_CCR3_MSIZE_SHIFT		10
#define DMA1_CCR3_MSIZE_MASK		0x03
/** @defgroup dma1_ccr3_msize MSIZE MSIZE
@{*/
/**@}*/


#define DMA1_CCR3_PSIZE_SHIFT		8
#define DMA1_CCR3_PSIZE_MASK		0x03
/** @defgroup dma1_ccr3_psize PSIZE PSIZE
@{*/
/**@}*/

/** DMA1_CCR3_MINC MINC **/
#define DMA1_CCR3_MINC		(1 << 7)
/** DMA1_CCR3_PINC PINC **/
#define DMA1_CCR3_PINC		(1 << 6)
/** DMA1_CCR3_CIRC CIRC **/
#define DMA1_CCR3_CIRC		(1 << 5)
/** DMA1_CCR3_DIR DIR **/
#define DMA1_CCR3_DIR		(1 << 4)
/** DMA1_CCR3_TEIE TEIE **/
#define DMA1_CCR3_TEIE		(1 << 3)
/** DMA1_CCR3_HTIE HTIE **/
#define DMA1_CCR3_HTIE		(1 << 2)
/** DMA1_CCR3_TCIE TCIE **/
#define DMA1_CCR3_TCIE		(1 << 1)
/** DMA1_CCR3_EN channel enable **/
#define DMA1_CCR3_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr3 CNDTR3 channel x number of data to transfer register
@{*/


#define DMA1_CNDTR3_NDT_SHIFT		0
#define DMA1_CNDTR3_NDT_MASK		0xffff
/** @defgroup dma1_cndtr3_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar3 CPAR3 DMA channel x peripheral address register
@{*/


#define DMA1_CPAR3_PA_SHIFT		0
#define DMA1_CPAR3_PA_MASK		0xffffffff
/** @defgroup dma1_cpar3_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar3 CMAR3 DMA channel x memory address register
@{*/


#define DMA1_CMAR3_MA_SHIFT		0
#define DMA1_CMAR3_MA_MASK		0xffffffff
/** @defgroup dma1_cmar3_ma MA Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_ccr4 CCR4 DMA channel 3 configuration register
@{*/

/** DMA1_CCR4_MEM2MEM MEM2MEM **/
#define DMA1_CCR4_MEM2MEM		(1 << 14)

#define DMA1_CCR4_PL_SHIFT		12
#define DMA1_CCR4_PL_MASK		0x03
/** @defgroup dma1_ccr4_pl PL PL
@{*/
/**@}*/


#define DMA1_CCR4_MSIZE_SHIFT		10
#define DMA1_CCR4_MSIZE_MASK		0x03
/** @defgroup dma1_ccr4_msize MSIZE MSIZE
@{*/
/**@}*/


#define DMA1_CCR4_PSIZE_SHIFT		8
#define DMA1_CCR4_PSIZE_MASK		0x03
/** @defgroup dma1_ccr4_psize PSIZE PSIZE
@{*/
/**@}*/

/** DMA1_CCR4_MINC MINC **/
#define DMA1_CCR4_MINC		(1 << 7)
/** DMA1_CCR4_PINC PINC **/
#define DMA1_CCR4_PINC		(1 << 6)
/** DMA1_CCR4_CIRC CIRC **/
#define DMA1_CCR4_CIRC		(1 << 5)
/** DMA1_CCR4_DIR DIR **/
#define DMA1_CCR4_DIR		(1 << 4)
/** DMA1_CCR4_TEIE TEIE **/
#define DMA1_CCR4_TEIE		(1 << 3)
/** DMA1_CCR4_HTIE HTIE **/
#define DMA1_CCR4_HTIE		(1 << 2)
/** DMA1_CCR4_TCIE TCIE **/
#define DMA1_CCR4_TCIE		(1 << 1)
/** DMA1_CCR4_EN channel enable **/
#define DMA1_CCR4_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr4 CNDTR4 channel x number of data to transfer register
@{*/


#define DMA1_CNDTR4_NDT_SHIFT		0
#define DMA1_CNDTR4_NDT_MASK		0xffff
/** @defgroup dma1_cndtr4_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar4 CPAR4 DMA channel x peripheral address register
@{*/


#define DMA1_CPAR4_PA_SHIFT		0
#define DMA1_CPAR4_PA_MASK		0xffffffff
/** @defgroup dma1_cpar4_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar4 CMAR4 DMA channel x memory address register
@{*/


#define DMA1_CMAR4_MA_SHIFT		0
#define DMA1_CMAR4_MA_MASK		0xffffffff
/** @defgroup dma1_cmar4_ma MA Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_ccr5 CCR5 DMA channel 4 configuration register
@{*/

/** DMA1_CCR5_MEM2MEM MEM2MEM **/
#define DMA1_CCR5_MEM2MEM		(1 << 14)

#define DMA1_CCR5_PL_SHIFT		12
#define DMA1_CCR5_PL_MASK		0x03
/** @defgroup dma1_ccr5_pl PL PL
@{*/
/**@}*/


#define DMA1_CCR5_MSIZE_SHIFT		10
#define DMA1_CCR5_MSIZE_MASK		0x03
/** @defgroup dma1_ccr5_msize MSIZE MSIZE
@{*/
/**@}*/


#define DMA1_CCR5_PSIZE_SHIFT		8
#define DMA1_CCR5_PSIZE_MASK		0x03
/** @defgroup dma1_ccr5_psize PSIZE PSIZE
@{*/
/**@}*/

/** DMA1_CCR5_MINC MINC **/
#define DMA1_CCR5_MINC		(1 << 7)
/** DMA1_CCR5_PINC PINC **/
#define DMA1_CCR5_PINC		(1 << 6)
/** DMA1_CCR5_CIRC CIRC **/
#define DMA1_CCR5_CIRC		(1 << 5)
/** DMA1_CCR5_DIR DIR **/
#define DMA1_CCR5_DIR		(1 << 4)
/** DMA1_CCR5_TEIE TEIE **/
#define DMA1_CCR5_TEIE		(1 << 3)
/** DMA1_CCR5_HTIE HTIE **/
#define DMA1_CCR5_HTIE		(1 << 2)
/** DMA1_CCR5_TCIE TCIE **/
#define DMA1_CCR5_TCIE		(1 << 1)
/** DMA1_CCR5_EN channel enable **/
#define DMA1_CCR5_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr5 CNDTR5 channel x number of data to transfer register
@{*/


#define DMA1_CNDTR5_NDT_SHIFT		0
#define DMA1_CNDTR5_NDT_MASK		0xffff
/** @defgroup dma1_cndtr5_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar5 CPAR5 DMA channel x peripheral address register
@{*/


#define DMA1_CPAR5_PA_SHIFT		0
#define DMA1_CPAR5_PA_MASK		0xffffffff
/** @defgroup dma1_cpar5_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar5 CMAR5 DMA channel x memory address register
@{*/


#define DMA1_CMAR5_MA_SHIFT		0
#define DMA1_CMAR5_MA_MASK		0xffffffff
/** @defgroup dma1_cmar5_ma MA Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_ccr6 CCR6 DMA channel 5 configuration register
@{*/

/** DMA1_CCR6_MEM2MEM MEM2MEM **/
#define DMA1_CCR6_MEM2MEM		(1 << 14)

#define DMA1_CCR6_PL_SHIFT		12
#define DMA1_CCR6_PL_MASK		0x03
/** @defgroup dma1_ccr6_pl PL PL
@{*/
/**@}*/


#define DMA1_CCR6_MSIZE_SHIFT		10
#define DMA1_CCR6_MSIZE_MASK		0x03
/** @defgroup dma1_ccr6_msize MSIZE MSIZE
@{*/
/**@}*/


#define DMA1_CCR6_PSIZE_SHIFT		8
#define DMA1_CCR6_PSIZE_MASK		0x03
/** @defgroup dma1_ccr6_psize PSIZE PSIZE
@{*/
/**@}*/

/** DMA1_CCR6_MINC MINC **/
#define DMA1_CCR6_MINC		(1 << 7)
/** DMA1_CCR6_PINC PINC **/
#define DMA1_CCR6_PINC		(1 << 6)
/** DMA1_CCR6_CIRC CIRC **/
#define DMA1_CCR6_CIRC		(1 << 5)
/** DMA1_CCR6_DIR DIR **/
#define DMA1_CCR6_DIR		(1 << 4)
/** DMA1_CCR6_TEIE TEIE **/
#define DMA1_CCR6_TEIE		(1 << 3)
/** DMA1_CCR6_HTIE HTIE **/
#define DMA1_CCR6_HTIE		(1 << 2)
/** DMA1_CCR6_TCIE TCIE **/
#define DMA1_CCR6_TCIE		(1 << 1)
/** DMA1_CCR6_EN channel enable **/
#define DMA1_CCR6_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr6 CNDTR6 channel x number of data to transfer register
@{*/


#define DMA1_CNDTR6_NDT_SHIFT		0
#define DMA1_CNDTR6_NDT_MASK		0xffff
/** @defgroup dma1_cndtr6_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar6 CPAR6 DMA channel x peripheral address register
@{*/


#define DMA1_CPAR6_PA_SHIFT		0
#define DMA1_CPAR6_PA_MASK		0xffffffff
/** @defgroup dma1_cpar6_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar6 CMAR6 DMA channel x memory address register
@{*/


#define DMA1_CMAR6_MA_SHIFT		0
#define DMA1_CMAR6_MA_MASK		0xffffffff
/** @defgroup dma1_cmar6_ma MA Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_ccr7 CCR7 DMA channel 6 configuration register
@{*/

/** DMA1_CCR7_MEM2MEM MEM2MEM **/
#define DMA1_CCR7_MEM2MEM		(1 << 14)

#define DMA1_CCR7_PL_SHIFT		12
#define DMA1_CCR7_PL_MASK		0x03
/** @defgroup dma1_ccr7_pl PL PL
@{*/
/**@}*/


#define DMA1_CCR7_MSIZE_SHIFT		10
#define DMA1_CCR7_MSIZE_MASK		0x03
/** @defgroup dma1_ccr7_msize MSIZE MSIZE
@{*/
/**@}*/


#define DMA1_CCR7_PSIZE_SHIFT		8
#define DMA1_CCR7_PSIZE_MASK		0x03
/** @defgroup dma1_ccr7_psize PSIZE PSIZE
@{*/
/**@}*/

/** DMA1_CCR7_MINC MINC **/
#define DMA1_CCR7_MINC		(1 << 7)
/** DMA1_CCR7_PINC PINC **/
#define DMA1_CCR7_PINC		(1 << 6)
/** DMA1_CCR7_CIRC CIRC **/
#define DMA1_CCR7_CIRC		(1 << 5)
/** DMA1_CCR7_DIR DIR **/
#define DMA1_CCR7_DIR		(1 << 4)
/** DMA1_CCR7_TEIE TEIE **/
#define DMA1_CCR7_TEIE		(1 << 3)
/** DMA1_CCR7_HTIE HTIE **/
#define DMA1_CCR7_HTIE		(1 << 2)
/** DMA1_CCR7_TCIE TCIE **/
#define DMA1_CCR7_TCIE		(1 << 1)
/** DMA1_CCR7_EN channel enable **/
#define DMA1_CCR7_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr7 CNDTR7 channel x number of data to transfer register
@{*/


#define DMA1_CNDTR7_NDT_SHIFT		0
#define DMA1_CNDTR7_NDT_MASK		0xffff
/** @defgroup dma1_cndtr7_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar7 CPAR7 DMA channel x peripheral address register
@{*/


#define DMA1_CPAR7_PA_SHIFT		0
#define DMA1_CPAR7_PA_MASK		0xffffffff
/** @defgroup dma1_cpar7_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar7 CMAR7 DMA channel x memory address register
@{*/


#define DMA1_CMAR7_MA_SHIFT		0
#define DMA1_CMAR7_MA_MASK		0xffffffff
/** @defgroup dma1_cmar7_ma MA Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_ccr8 CCR8 DMA channel 7 configuration register
@{*/

/** DMA1_CCR8_MEM2MEM MEM2MEM **/
#define DMA1_CCR8_MEM2MEM		(1 << 14)

#define DMA1_CCR8_PL_SHIFT		12
#define DMA1_CCR8_PL_MASK		0x03
/** @defgroup dma1_ccr8_pl PL PL
@{*/
/**@}*/


#define DMA1_CCR8_MSIZE_SHIFT		10
#define DMA1_CCR8_MSIZE_MASK		0x03
/** @defgroup dma1_ccr8_msize MSIZE MSIZE
@{*/
/**@}*/


#define DMA1_CCR8_PSIZE_SHIFT		8
#define DMA1_CCR8_PSIZE_MASK		0x03
/** @defgroup dma1_ccr8_psize PSIZE PSIZE
@{*/
/**@}*/

/** DMA1_CCR8_MINC MINC **/
#define DMA1_CCR8_MINC		(1 << 7)
/** DMA1_CCR8_PINC PINC **/
#define DMA1_CCR8_PINC		(1 << 6)
/** DMA1_CCR8_CIRC CIRC **/
#define DMA1_CCR8_CIRC		(1 << 5)
/** DMA1_CCR8_DIR DIR **/
#define DMA1_CCR8_DIR		(1 << 4)
/** DMA1_CCR8_TEIE TEIE **/
#define DMA1_CCR8_TEIE		(1 << 3)
/** DMA1_CCR8_HTIE HTIE **/
#define DMA1_CCR8_HTIE		(1 << 2)
/** DMA1_CCR8_TCIE TCIE **/
#define DMA1_CCR8_TCIE		(1 << 1)
/** DMA1_CCR8_EN channel enable **/
#define DMA1_CCR8_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_cndtr8 CNDTR8 channel x number of data to transfer register
@{*/


#define DMA1_CNDTR8_NDT_SHIFT		0
#define DMA1_CNDTR8_NDT_MASK		0xffff
/** @defgroup dma1_cndtr8_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cpar8 CPAR8 DMA channel x peripheral address register
@{*/


#define DMA1_CPAR8_PA_SHIFT		0
#define DMA1_CPAR8_PA_MASK		0xffffffff
/** @defgroup dma1_cpar8_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_cmar8 CMAR8 DMA channel x memory address register
@{*/


#define DMA1_CMAR8_MA_SHIFT		0
#define DMA1_CMAR8_MA_MASK		0xffffffff
/** @defgroup dma1_cmar8_ma MA Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

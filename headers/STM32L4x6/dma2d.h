#pragma once 

/* --- DMA2D: DMA2D controller -------------------------------------- */

/** @defgroup dma2d_registers DMA2D controller Register
@{*/

/** DMA2D_CR control register **/
#define DMA2D_CR			MMIO32(DMA2D_BASE + 0x00)
/** DMA2D_ISR Interrupt Status Register **/
#define DMA2D_ISR			MMIO32(DMA2D_BASE + 0x04)
/** DMA2D_IFCR interrupt flag clear register **/
#define DMA2D_IFCR			MMIO32(DMA2D_BASE + 0x08)
/** DMA2D_FGMAR foreground memory address register **/
#define DMA2D_FGMAR			MMIO32(DMA2D_BASE + 0x0c)
/** DMA2D_FGOR foreground offset register **/
#define DMA2D_FGOR			MMIO32(DMA2D_BASE + 0x10)
/** DMA2D_BGMAR background memory address register **/
#define DMA2D_BGMAR			MMIO32(DMA2D_BASE + 0x14)
/** DMA2D_BGOR background offset register **/
#define DMA2D_BGOR			MMIO32(DMA2D_BASE + 0x18)
/** DMA2D_FGPFCCR foreground PFC control register **/
#define DMA2D_FGPFCCR			MMIO32(DMA2D_BASE + 0x1c)
/** DMA2D_FGCOLR foreground color register **/
#define DMA2D_FGCOLR			MMIO32(DMA2D_BASE + 0x20)
/** DMA2D_BGPFCCR background PFC control register **/
#define DMA2D_BGPFCCR			MMIO32(DMA2D_BASE + 0x24)
/** DMA2D_BGCOLR background color register **/
#define DMA2D_BGCOLR			MMIO32(DMA2D_BASE + 0x28)
/** DMA2D_FGCMAR foreground CLUT memory address register **/
#define DMA2D_FGCMAR			MMIO32(DMA2D_BASE + 0x2c)
/** DMA2D_BGCMAR background CLUT memory address register **/
#define DMA2D_BGCMAR			MMIO32(DMA2D_BASE + 0x30)
/** DMA2D_OPFCCR output PFC control register **/
#define DMA2D_OPFCCR			MMIO32(DMA2D_BASE + 0x34)
/** DMA2D_OCOLR output color register **/
#define DMA2D_OCOLR			MMIO32(DMA2D_BASE + 0x38)
/** DMA2D_OMAR output memory address register **/
#define DMA2D_OMAR			MMIO32(DMA2D_BASE + 0x3c)
/** DMA2D_OOR output offset register **/
#define DMA2D_OOR			MMIO32(DMA2D_BASE + 0x40)
/** DMA2D_NLR number of line register **/
#define DMA2D_NLR			MMIO32(DMA2D_BASE + 0x44)
/** DMA2D_LWR line watermark register **/
#define DMA2D_LWR			MMIO32(DMA2D_BASE + 0x48)
/** DMA2D_AMTCR AHB master timer configuration register **/
#define DMA2D_AMTCR			MMIO32(DMA2D_BASE + 0x4c)
/** DMA2D_FGCLUT FGCLUT **/
#define DMA2D_FGCLUT			MMIO32(DMA2D_BASE + 0x400)
/** DMA2D_BGCLUT BGCLUT **/
#define DMA2D_BGCLUT			MMIO32(DMA2D_BASE + 0x800)

/**@}*/


/** @defgroup dma2d_cr CR control register
@{*/


#define DMA2D_CR_MODE_SHIFT		16
#define DMA2D_CR_MODE_MASK		0x03
/** @defgroup dma2d_cr_mode MODE DMA2D mode
@{*/
/**@}*/

/** DMA2D_CR_CEIE Configuration Error Interrupt Enable **/
#define DMA2D_CR_CEIE		(1 << 13)
/** DMA2D_CR_CTCIE CLUT transfer complete interrupt enable **/
#define DMA2D_CR_CTCIE		(1 << 12)
/** DMA2D_CR_CAEIE CLUT access error interrupt enable **/
#define DMA2D_CR_CAEIE		(1 << 11)
/** DMA2D_CR_TWIE Transfer watermark interrupt enable **/
#define DMA2D_CR_TWIE		(1 << 10)
/** DMA2D_CR_TCIE Transfer complete interrupt enable **/
#define DMA2D_CR_TCIE		(1 << 9)
/** DMA2D_CR_TEIE Transfer error interrupt enable **/
#define DMA2D_CR_TEIE		(1 << 8)
/** DMA2D_CR_ABORT Abort **/
#define DMA2D_CR_ABORT		(1 << 2)
/** DMA2D_CR_SUSP Suspend **/
#define DMA2D_CR_SUSP		(1 << 1)
/** DMA2D_CR_START Start **/
#define DMA2D_CR_START		(1 << 0)

/**@}*/

/** @defgroup dma2d_isr ISR Interrupt Status Register
@{*/

/** DMA2D_ISR_CEIF Configuration error interrupt flag **/
#define DMA2D_ISR_CEIF		(1 << 5)
/** DMA2D_ISR_CTCIF CLUT transfer complete interrupt flag **/
#define DMA2D_ISR_CTCIF		(1 << 4)
/** DMA2D_ISR_CAEIF CLUT access error interrupt flag **/
#define DMA2D_ISR_CAEIF		(1 << 3)
/** DMA2D_ISR_TWIF Transfer watermark interrupt flag **/
#define DMA2D_ISR_TWIF		(1 << 2)
/** DMA2D_ISR_TCIF Transfer complete interrupt flag **/
#define DMA2D_ISR_TCIF		(1 << 1)
/** DMA2D_ISR_TEIF Transfer error interrupt flag **/
#define DMA2D_ISR_TEIF		(1 << 0)

/**@}*/

/** @defgroup dma2d_ifcr IFCR interrupt flag clear register
@{*/

/** DMA2D_IFCR_CCEIF Clear configuration error interrupt flag **/
#define DMA2D_IFCR_CCEIF		(1 << 5)
/** DMA2D_IFCR_CCTCIF Clear CLUT transfer complete interrupt flag **/
#define DMA2D_IFCR_CCTCIF		(1 << 4)
/** DMA2D_IFCR_CAECIF Clear CLUT access error interrupt flag **/
#define DMA2D_IFCR_CAECIF		(1 << 3)
/** DMA2D_IFCR_CTWIF Clear transfer watermark interrupt flag **/
#define DMA2D_IFCR_CTWIF		(1 << 2)
/** DMA2D_IFCR_CTCIF Clear transfer complete interrupt flag **/
#define DMA2D_IFCR_CTCIF		(1 << 1)
/** DMA2D_IFCR_CTEIF Clear Transfer error interrupt flag **/
#define DMA2D_IFCR_CTEIF		(1 << 0)

/**@}*/

/** @defgroup dma2d_fgmar FGMAR foreground memory address register
@{*/


#define DMA2D_FGMAR_MA_SHIFT		0
#define DMA2D_FGMAR_MA_MASK		0xffffffff
/** @defgroup dma2d_fgmar_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_fgor FGOR foreground offset register
@{*/


#define DMA2D_FGOR_LO_SHIFT		0
#define DMA2D_FGOR_LO_MASK		0x3fff
/** @defgroup dma2d_fgor_lo LO Line offset
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_bgmar BGMAR background memory address register
@{*/


#define DMA2D_BGMAR_MA_SHIFT		0
#define DMA2D_BGMAR_MA_MASK		0xffffffff
/** @defgroup dma2d_bgmar_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_bgor BGOR background offset register
@{*/


#define DMA2D_BGOR_LO_SHIFT		0
#define DMA2D_BGOR_LO_MASK		0x3fff
/** @defgroup dma2d_bgor_lo LO Line offset
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_fgpfccr FGPFCCR foreground PFC control register
@{*/


#define DMA2D_FGPFCCR_ALPHA_SHIFT		24
#define DMA2D_FGPFCCR_ALPHA_MASK		0xff
/** @defgroup dma2d_fgpfccr_alpha ALPHA Alpha value
@{*/
/**@}*/

/** DMA2D_FGPFCCR_RBS Red Blue Swap **/
#define DMA2D_FGPFCCR_RBS		(1 << 21)
/** DMA2D_FGPFCCR_AI Alpha Inverted **/
#define DMA2D_FGPFCCR_AI		(1 << 20)

#define DMA2D_FGPFCCR_AM_SHIFT		16
#define DMA2D_FGPFCCR_AM_MASK		0x03
/** @defgroup dma2d_fgpfccr_am AM Alpha mode
@{*/
/**@}*/


#define DMA2D_FGPFCCR_CS_SHIFT		8
#define DMA2D_FGPFCCR_CS_MASK		0xff
/** @defgroup dma2d_fgpfccr_cs CS CLUT size
@{*/
/**@}*/

/** DMA2D_FGPFCCR_START Start **/
#define DMA2D_FGPFCCR_START		(1 << 5)
/** DMA2D_FGPFCCR_CCM CLUT color mode **/
#define DMA2D_FGPFCCR_CCM		(1 << 4)

#define DMA2D_FGPFCCR_CM_SHIFT		0
#define DMA2D_FGPFCCR_CM_MASK		0x0f
/** @defgroup dma2d_fgpfccr_cm CM Color mode
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_fgcolr FGCOLR foreground color register
@{*/


#define DMA2D_FGCOLR_RED_SHIFT		16
#define DMA2D_FGCOLR_RED_MASK		0xff
/** @defgroup dma2d_fgcolr_red RED Red Value
@{*/
/**@}*/


#define DMA2D_FGCOLR_GREEN_SHIFT		8
#define DMA2D_FGCOLR_GREEN_MASK		0xff
/** @defgroup dma2d_fgcolr_green GREEN Green Value
@{*/
/**@}*/


#define DMA2D_FGCOLR_BLUE_SHIFT		0
#define DMA2D_FGCOLR_BLUE_MASK		0xff
/** @defgroup dma2d_fgcolr_blue BLUE Blue Value
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_bgpfccr BGPFCCR background PFC control register
@{*/


#define DMA2D_BGPFCCR_ALPHA_SHIFT		24
#define DMA2D_BGPFCCR_ALPHA_MASK		0xff
/** @defgroup dma2d_bgpfccr_alpha ALPHA Alpha value
@{*/
/**@}*/

/** DMA2D_BGPFCCR_RBS Red Blue Swap **/
#define DMA2D_BGPFCCR_RBS		(1 << 21)
/** DMA2D_BGPFCCR_AI Alpha Inverted **/
#define DMA2D_BGPFCCR_AI		(1 << 20)

#define DMA2D_BGPFCCR_AM_SHIFT		16
#define DMA2D_BGPFCCR_AM_MASK		0x03
/** @defgroup dma2d_bgpfccr_am AM Alpha mode
@{*/
/**@}*/


#define DMA2D_BGPFCCR_CS_SHIFT		8
#define DMA2D_BGPFCCR_CS_MASK		0xff
/** @defgroup dma2d_bgpfccr_cs CS CLUT size
@{*/
/**@}*/

/** DMA2D_BGPFCCR_START Start **/
#define DMA2D_BGPFCCR_START		(1 << 5)
/** DMA2D_BGPFCCR_CCM CLUT Color mode **/
#define DMA2D_BGPFCCR_CCM		(1 << 4)

#define DMA2D_BGPFCCR_CM_SHIFT		0
#define DMA2D_BGPFCCR_CM_MASK		0x0f
/** @defgroup dma2d_bgpfccr_cm CM Color mode
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_bgcolr BGCOLR background color register
@{*/


#define DMA2D_BGCOLR_RED_SHIFT		16
#define DMA2D_BGCOLR_RED_MASK		0xff
/** @defgroup dma2d_bgcolr_red RED Red Value
@{*/
/**@}*/


#define DMA2D_BGCOLR_GREEN_SHIFT		8
#define DMA2D_BGCOLR_GREEN_MASK		0xff
/** @defgroup dma2d_bgcolr_green GREEN Green Value
@{*/
/**@}*/


#define DMA2D_BGCOLR_BLUE_SHIFT		0
#define DMA2D_BGCOLR_BLUE_MASK		0xff
/** @defgroup dma2d_bgcolr_blue BLUE Blue Value
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_fgcmar FGCMAR foreground CLUT memory address register
@{*/


#define DMA2D_FGCMAR_MA_SHIFT		0
#define DMA2D_FGCMAR_MA_MASK		0xffffffff
/** @defgroup dma2d_fgcmar_ma MA Memory Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_bgcmar BGCMAR background CLUT memory address register
@{*/


#define DMA2D_BGCMAR_MA_SHIFT		0
#define DMA2D_BGCMAR_MA_MASK		0xffffffff
/** @defgroup dma2d_bgcmar_ma MA Memory address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_opfccr OPFCCR output PFC control register
@{*/

/** DMA2D_OPFCCR_RBS Red Blue Swap **/
#define DMA2D_OPFCCR_RBS		(1 << 21)
/** DMA2D_OPFCCR_AI Alpha Inverted **/
#define DMA2D_OPFCCR_AI		(1 << 20)

#define DMA2D_OPFCCR_CM_SHIFT		0
#define DMA2D_OPFCCR_CM_MASK		0x07
/** @defgroup dma2d_opfccr_cm CM Color mode
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_ocolr OCOLR output color register
@{*/


#define DMA2D_OCOLR_APLHA_SHIFT		24
#define DMA2D_OCOLR_APLHA_MASK		0xff
/** @defgroup dma2d_ocolr_aplha APLHA Alpha Channel Value
@{*/
/**@}*/


#define DMA2D_OCOLR_RED_SHIFT		16
#define DMA2D_OCOLR_RED_MASK		0xff
/** @defgroup dma2d_ocolr_red RED Red Value
@{*/
/**@}*/


#define DMA2D_OCOLR_GREEN_SHIFT		8
#define DMA2D_OCOLR_GREEN_MASK		0xff
/** @defgroup dma2d_ocolr_green GREEN Green Value
@{*/
/**@}*/


#define DMA2D_OCOLR_BLUE_SHIFT		0
#define DMA2D_OCOLR_BLUE_MASK		0xff
/** @defgroup dma2d_ocolr_blue BLUE Blue Value
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_omar OMAR output memory address register
@{*/


#define DMA2D_OMAR_MA_SHIFT		0
#define DMA2D_OMAR_MA_MASK		0xffffffff
/** @defgroup dma2d_omar_ma MA Memory Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_oor OOR output offset register
@{*/


#define DMA2D_OOR_LO_SHIFT		0
#define DMA2D_OOR_LO_MASK		0x3fff
/** @defgroup dma2d_oor_lo LO Line Offset
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_nlr NLR number of line register
@{*/


#define DMA2D_NLR_PL_SHIFT		16
#define DMA2D_NLR_PL_MASK		0x3fff
/** @defgroup dma2d_nlr_pl PL Pixel per lines
@{*/
/**@}*/


#define DMA2D_NLR_NL_SHIFT		0
#define DMA2D_NLR_NL_MASK		0xffff
/** @defgroup dma2d_nlr_nl NL Number of lines
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_lwr LWR line watermark register
@{*/


#define DMA2D_LWR_LW_SHIFT		0
#define DMA2D_LWR_LW_MASK		0xffff
/** @defgroup dma2d_lwr_lw LW Line watermark
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_amtcr AMTCR AHB master timer configuration register
@{*/


#define DMA2D_AMTCR_DT_SHIFT		8
#define DMA2D_AMTCR_DT_MASK		0xff
/** @defgroup dma2d_amtcr_dt DT Dead Time
@{*/
/**@}*/

/** DMA2D_AMTCR_EN Enable **/
#define DMA2D_AMTCR_EN		(1 << 0)

/**@}*/

/** @defgroup dma2d_fgclut FGCLUT FGCLUT
@{*/


#define DMA2D_FGCLUT_APLHA_SHIFT		24
#define DMA2D_FGCLUT_APLHA_MASK		0xff
/** @defgroup dma2d_fgclut_aplha APLHA APLHA
@{*/
/**@}*/


#define DMA2D_FGCLUT_RED_SHIFT		16
#define DMA2D_FGCLUT_RED_MASK		0xff
/** @defgroup dma2d_fgclut_red RED RED
@{*/
/**@}*/


#define DMA2D_FGCLUT_GREEN_SHIFT		8
#define DMA2D_FGCLUT_GREEN_MASK		0xff
/** @defgroup dma2d_fgclut_green GREEN GREEN
@{*/
/**@}*/


#define DMA2D_FGCLUT_BLUE_SHIFT		0
#define DMA2D_FGCLUT_BLUE_MASK		0xff
/** @defgroup dma2d_fgclut_blue BLUE BLUE
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_bgclut BGCLUT BGCLUT
@{*/


#define DMA2D_BGCLUT_APLHA_SHIFT		24
#define DMA2D_BGCLUT_APLHA_MASK		0xff
/** @defgroup dma2d_bgclut_aplha APLHA APLHA
@{*/
/**@}*/


#define DMA2D_BGCLUT_RED_SHIFT		16
#define DMA2D_BGCLUT_RED_MASK		0xff
/** @defgroup dma2d_bgclut_red RED RED
@{*/
/**@}*/


#define DMA2D_BGCLUT_GREEN_SHIFT		8
#define DMA2D_BGCLUT_GREEN_MASK		0xff
/** @defgroup dma2d_bgclut_green GREEN GREEN
@{*/
/**@}*/


#define DMA2D_BGCLUT_BLUE_SHIFT		0
#define DMA2D_BGCLUT_BLUE_MASK		0xff
/** @defgroup dma2d_bgclut_blue BLUE BLUE
@{*/
/**@}*/


/**@}*/

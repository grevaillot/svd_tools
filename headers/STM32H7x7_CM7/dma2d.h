#pragma once 

/* --- DMA2D: DMA2D ------------------------------------------------- */

/** @defgroup dma2d_registers DMA2D Register
@{*/

/** DMA2D_DMA2D_CR DMA2D control register **/
#define DMA2D_DMA2D_CR			MMIO32(DMA2D_BASE + 0x00)
/** DMA2D_DMA2D_ISR DMA2D Interrupt Status Register **/
#define DMA2D_DMA2D_ISR			MMIO32(DMA2D_BASE + 0x04)
/** DMA2D_DMA2D_IFCR DMA2D interrupt flag clear register **/
#define DMA2D_DMA2D_IFCR			MMIO32(DMA2D_BASE + 0x08)
/** DMA2D_DMA2D_FGMAR DMA2D foreground memory address register **/
#define DMA2D_DMA2D_FGMAR			MMIO32(DMA2D_BASE + 0x0c)
/** DMA2D_DMA2D_FGOR DMA2D foreground offset register **/
#define DMA2D_DMA2D_FGOR			MMIO32(DMA2D_BASE + 0x10)
/** DMA2D_DMA2D_BGMAR DMA2D background memory address register **/
#define DMA2D_DMA2D_BGMAR			MMIO32(DMA2D_BASE + 0x14)
/** DMA2D_DMA2D_BGOR DMA2D background offset register **/
#define DMA2D_DMA2D_BGOR			MMIO32(DMA2D_BASE + 0x18)
/** DMA2D_DMA2D_FGPFCCR DMA2D foreground PFC control register **/
#define DMA2D_DMA2D_FGPFCCR			MMIO32(DMA2D_BASE + 0x1c)
/** DMA2D_DMA2D_FGCOLR DMA2D foreground color register **/
#define DMA2D_DMA2D_FGCOLR			MMIO32(DMA2D_BASE + 0x20)
/** DMA2D_DMA2D_BGPFCCR DMA2D background PFC control register **/
#define DMA2D_DMA2D_BGPFCCR			MMIO32(DMA2D_BASE + 0x24)
/** DMA2D_DMA2D_BGCOLR DMA2D background color register **/
#define DMA2D_DMA2D_BGCOLR			MMIO32(DMA2D_BASE + 0x28)
/** DMA2D_DMA2D_FGCMAR DMA2D foreground CLUT memory address register **/
#define DMA2D_DMA2D_FGCMAR			MMIO32(DMA2D_BASE + 0x2c)
/** DMA2D_DMA2D_BGCMAR DMA2D background CLUT memory address register **/
#define DMA2D_DMA2D_BGCMAR			MMIO32(DMA2D_BASE + 0x30)
/** DMA2D_DMA2D_OPFCCR DMA2D output PFC control register **/
#define DMA2D_DMA2D_OPFCCR			MMIO32(DMA2D_BASE + 0x34)
/** DMA2D_DMA2D_OCOLR DMA2D output color register **/
#define DMA2D_DMA2D_OCOLR			MMIO32(DMA2D_BASE + 0x38)
/** DMA2D_DMA2D_OMAR DMA2D output memory address register **/
#define DMA2D_DMA2D_OMAR			MMIO32(DMA2D_BASE + 0x3c)
/** DMA2D_DMA2D_OOR DMA2D output offset register **/
#define DMA2D_DMA2D_OOR			MMIO32(DMA2D_BASE + 0x40)
/** DMA2D_DMA2D_NLR DMA2D number of line register **/
#define DMA2D_DMA2D_NLR			MMIO32(DMA2D_BASE + 0x44)
/** DMA2D_DMA2D_LWR DMA2D line watermark register **/
#define DMA2D_DMA2D_LWR			MMIO32(DMA2D_BASE + 0x48)
/** DMA2D_DMA2D_AMTCR DMA2D AXI master timer configuration register **/
#define DMA2D_DMA2D_AMTCR			MMIO32(DMA2D_BASE + 0x4c)

/**@}*/


/** @defgroup dma2d_dma2d_cr DMA2DCR DMA2D control register
@{*/


#define DMA2D_DMA2D_CR_MODE_SHIFT		16
#define DMA2D_DMA2D_CR_MODE_MASK		0x03
/** @defgroup dma2d_dma2d_cr_mode MODE DMA2D mode This bit is set and cleared by software. It cannot be modified while a transfer is ongoing.
@{*/
/**@}*/

/** DMA2D_DMA2D_CR_CEIE Configuration Error Interrupt Enable This bit is set and cleared by software. **/
#define DMA2D_DMA2D_CR_CEIE		(1 << 13)
/** DMA2D_DMA2D_CR_CTCIE CLUT transfer complete interrupt enable This bit is set and cleared by software. **/
#define DMA2D_DMA2D_CR_CTCIE		(1 << 12)
/** DMA2D_DMA2D_CR_CAEIE CLUT access error interrupt enable This bit is set and cleared by software. **/
#define DMA2D_DMA2D_CR_CAEIE		(1 << 11)
/** DMA2D_DMA2D_CR_TWIE Transfer watermark interrupt enable This bit is set and cleared by software. **/
#define DMA2D_DMA2D_CR_TWIE		(1 << 10)
/** DMA2D_DMA2D_CR_TCIE Transfer complete interrupt enable This bit is set and cleared by software. **/
#define DMA2D_DMA2D_CR_TCIE		(1 << 9)
/** DMA2D_DMA2D_CR_TEIE Transfer error interrupt enable This bit is set and cleared by software. **/
#define DMA2D_DMA2D_CR_TEIE		(1 << 8)
/** DMA2D_DMA2D_CR_ABORT Abort This bit can be used to abort the current transfer. This bit is set by software and is automatically reset by hardware when the START bit is reset. **/
#define DMA2D_DMA2D_CR_ABORT		(1 << 2)
/** DMA2D_DMA2D_CR_SUSP Suspend This bit can be used to suspend the current transfer. This bit is set and reset by software. It is automatically reset by hardware when the START bit is reset. **/
#define DMA2D_DMA2D_CR_SUSP		(1 << 1)
/** DMA2D_DMA2D_CR_START Start This bit can be used to launch the DMA2D according to the parameters loaded in the various configuration registers **/
#define DMA2D_DMA2D_CR_START		(1 << 0)

/**@}*/

/** @defgroup dma2d_dma2d_isr DMA2DISR DMA2D Interrupt Status Register
@{*/

/** DMA2D_DMA2D_ISR_CEIF Configuration error interrupt flag This bit is set when the START bit of DMA2D_CR, DMA2DFGPFCCR or DMA2D_BGPFCCR is set and a wrong configuration has been programmed. **/
#define DMA2D_DMA2D_ISR_CEIF		(1 << 5)
/** DMA2D_DMA2D_ISR_CTCIF CLUT transfer complete interrupt flag This bit is set when the CLUT copy from a system memory area to the internal DMA2D memory is complete. **/
#define DMA2D_DMA2D_ISR_CTCIF		(1 << 4)
/** DMA2D_DMA2D_ISR_CAEIF CLUT access error interrupt flag This bit is set when the CPU accesses the CLUT while the CLUT is being automatically copied from a system memory to the internal DMA2D. **/
#define DMA2D_DMA2D_ISR_CAEIF		(1 << 3)
/** DMA2D_DMA2D_ISR_TWIF Transfer watermark interrupt flag This bit is set when the last pixel of the watermarked line has been transferred. **/
#define DMA2D_DMA2D_ISR_TWIF		(1 << 2)
/** DMA2D_DMA2D_ISR_TCIF Transfer complete interrupt flag This bit is set when a DMA2D transfer operation is complete (data transfer only). **/
#define DMA2D_DMA2D_ISR_TCIF		(1 << 1)
/** DMA2D_DMA2D_ISR_TEIF Transfer error interrupt flag This bit is set when an error occurs during a DMA transfer (data transfer or automatic CLUT loading). **/
#define DMA2D_DMA2D_ISR_TEIF		(1 << 0)

/**@}*/

/** @defgroup dma2d_dma2d_ifcr DMA2DIFCR DMA2D interrupt flag clear register
@{*/

/** DMA2D_DMA2D_IFCR_CCEIF Clear configuration error interrupt flag Programming this bit to 1 clears the CEIF flag in the DMA2D_ISR register **/
#define DMA2D_DMA2D_IFCR_CCEIF		(1 << 5)
/** DMA2D_DMA2D_IFCR_CCTCIF Clear CLUT transfer complete interrupt flag Programming this bit to 1 clears the CTCIF flag in the DMA2D_ISR register **/
#define DMA2D_DMA2D_IFCR_CCTCIF		(1 << 4)
/** DMA2D_DMA2D_IFCR_CAECIF Clear CLUT access error interrupt flag Programming this bit to 1 clears the CAEIF flag in the DMA2D_ISR register **/
#define DMA2D_DMA2D_IFCR_CAECIF		(1 << 3)
/** DMA2D_DMA2D_IFCR_CTWIF Clear transfer watermark interrupt flag Programming this bit to 1 clears the TWIF flag in the DMA2D_ISR register **/
#define DMA2D_DMA2D_IFCR_CTWIF		(1 << 2)
/** DMA2D_DMA2D_IFCR_CTCIF Clear transfer complete interrupt flag Programming this bit to 1 clears the TCIF flag in the DMA2D_ISR register **/
#define DMA2D_DMA2D_IFCR_CTCIF		(1 << 1)
/** DMA2D_DMA2D_IFCR_CTEIF Clear Transfer error interrupt flag Programming this bit to 1 clears the TEIF flag in the DMA2D_ISR register **/
#define DMA2D_DMA2D_IFCR_CTEIF		(1 << 0)

/**@}*/

/** @defgroup dma2d_dma2d_fgmar DMA2DFGMAR DMA2D foreground memory address register
@{*/


#define DMA2D_DMA2D_FGMAR_MA_SHIFT		0
#define DMA2D_DMA2D_FGMAR_MA_MASK		0xffffffff
/** @defgroup dma2d_dma2d_fgmar_ma MA Memory address Address of the data used for the foreground image. This register can only be written when data transfers are disabled. Once the data transfer has started, this register is read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned, a 16-bit per pixel format must be 16-bit aligned and a 4-bit per pixel format must be 8-bit aligned.
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_fgor DMA2DFGOR DMA2D foreground offset register
@{*/


#define DMA2D_DMA2D_FGOR_LO_SHIFT		0
#define DMA2D_DMA2D_FGOR_LO_MASK		0x3fff
/** @defgroup dma2d_dma2d_fgor_lo LO Line offset Line offset used for the foreground expressed in pixel. This value is used to generate the address. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once a data transfer has started, they become read-only. If the image format is 4-bit per pixel, the line offset must be even.
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_bgmar DMA2DBGMAR DMA2D background memory address register
@{*/


#define DMA2D_DMA2D_BGMAR_MA_SHIFT		0
#define DMA2D_DMA2D_BGMAR_MA_MASK		0xffffffff
/** @defgroup dma2d_dma2d_bgmar_ma MA Memory address Address of the data used for the background image. This register can only be written when data transfers are disabled. Once a data transfer has started, this register is read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned, a 16-bit per pixel format must be 16-bit aligned and a 4-bit per pixel format must be 8-bit aligned.
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_bgor DMA2DBGOR DMA2D background offset register
@{*/


#define DMA2D_DMA2D_BGOR_LO_SHIFT		0
#define DMA2D_DMA2D_BGOR_LO_MASK		0x3fff
/** @defgroup dma2d_dma2d_bgor_lo LO Line offset Line offset used for the background image (expressed in pixel). This value is used for the address generation. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once data transfer has started, they become read-only. If the image format is 4-bit per pixel, the line offset must be even.
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_fgpfccr DMA2DFGPFCCR DMA2D foreground PFC control register
@{*/


#define DMA2D_DMA2D_FGPFCCR_ALPHA_SHIFT		24
#define DMA2D_DMA2D_FGPFCCR_ALPHA_MASK		0xff
/** @defgroup dma2d_dma2d_fgpfccr_alpha ALPHA Alpha value These bits define a fixed alpha channel value which can replace the original alpha value or be multiplied by the original alpha value according to the alpha mode selected through the AM[1:0] bits. These bits can only be written when data transfers are disabled. Once a transfer has started, they become read-only.
@{*/
/**@}*/

/** DMA2D_DMA2D_FGPFCCR_RBS Red Blue Swap This bit allows to swap the R &amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only. **/
#define DMA2D_DMA2D_FGPFCCR_RBS		(1 << 21)
/** DMA2D_DMA2D_FGPFCCR_AI Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only. **/
#define DMA2D_DMA2D_FGPFCCR_AI		(1 << 20)

#define DMA2D_DMA2D_FGPFCCR_CSS_SHIFT		18
#define DMA2D_DMA2D_FGPFCCR_CSS_MASK		0x03
/** @defgroup dma2d_dma2d_fgpfccr_css CSS Chroma Sub-Sampling These bits define the chroma sub-sampling mode for YCbCr color mode. Once the transfer has started, these bits are read-only. others: meaningless
@{*/
/**@}*/


#define DMA2D_DMA2D_FGPFCCR_AM_SHIFT		16
#define DMA2D_DMA2D_FGPFCCR_AM_MASK		0x03
/** @defgroup dma2d_dma2d_fgpfccr_am AM Alpha mode These bits select the alpha channel value to be used for the foreground image. They can only be written data the transfer are disabled. Once the transfer has started, they become read-only. other configurations are meaningless
@{*/
/**@}*/


#define DMA2D_DMA2D_FGPFCCR_CS_SHIFT		8
#define DMA2D_DMA2D_FGPFCCR_CS_MASK		0xff
/** @defgroup dma2d_dma2d_fgpfccr_cs CS CLUT size These bits define the size of the CLUT used for the foreground image. Once the CLUT transfer has started, this field is read-only. The number of CLUT entries is equal to CS[7:0] + 1.
@{*/
/**@}*/

/** DMA2D_DMA2D_FGPFCCR_START Start This bit can be set to start the automatic loading of the CLUT. It is automatically reset: ** at the end of the transfer ** when the transfer is aborted by the user application by setting the ABORT bit in DMA2D_CR ** when a transfer error occurs ** when the transfer has not started due to a configuration error or another transfer operation already ongoing (data transfer or automatic background CLUT transfer). **/
#define DMA2D_DMA2D_FGPFCCR_START		(1 << 5)
/** DMA2D_DMA2D_FGPFCCR_CCM CLUT color mode This bit defines the color format of the CLUT. It can only be written when the transfer is disabled. Once the CLUT transfer has started, this bit is read-only. **/
#define DMA2D_DMA2D_FGPFCCR_CCM		(1 << 4)

#define DMA2D_DMA2D_FGPFCCR_CM_SHIFT		0
#define DMA2D_DMA2D_FGPFCCR_CM_MASK		0x0f
/** @defgroup dma2d_dma2d_fgpfccr_cm CM Color mode These bits defines the color format of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_fgcolr DMA2DFGCOLR DMA2D foreground color register
@{*/


#define DMA2D_DMA2D_FGCOLR_RED_SHIFT		16
#define DMA2D_DMA2D_FGCOLR_RED_MASK		0xff
/** @defgroup dma2d_dma2d_fgcolr_red RED Red Value These bits defines the red value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
@{*/
/**@}*/


#define DMA2D_DMA2D_FGCOLR_GREEN_SHIFT		8
#define DMA2D_DMA2D_FGCOLR_GREEN_MASK		0xff
/** @defgroup dma2d_dma2d_fgcolr_green GREEN Green Value These bits defines the green value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, They are read-only.
@{*/
/**@}*/


#define DMA2D_DMA2D_FGCOLR_BLUE_SHIFT		0
#define DMA2D_DMA2D_FGCOLR_BLUE_MASK		0xff
/** @defgroup dma2d_dma2d_fgcolr_blue BLUE Blue Value These bits defines the blue value for the A4 or A8 mode of the foreground image. They can only be written when data transfers are disabled. Once the transfer has started, They are read-only.
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_bgpfccr DMA2DBGPFCCR DMA2D background PFC control register
@{*/


#define DMA2D_DMA2D_BGPFCCR_ALPHA_SHIFT		24
#define DMA2D_DMA2D_BGPFCCR_ALPHA_MASK		0xff
/** @defgroup dma2d_dma2d_bgpfccr_alpha ALPHA Alpha value These bits define a fixed alpha channel value which can replace the original alpha value or be multiplied with the original alpha value according to the alpha mode selected with bits AM[1: 0]. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
@{*/
/**@}*/

/** DMA2D_DMA2D_BGPFCCR_RBS Red Blue Swap This bit allows to swap the R &amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only. **/
#define DMA2D_DMA2D_BGPFCCR_RBS		(1 << 21)
/** DMA2D_DMA2D_BGPFCCR_AI Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only. **/
#define DMA2D_DMA2D_BGPFCCR_AI		(1 << 20)

#define DMA2D_DMA2D_BGPFCCR_AM_SHIFT		16
#define DMA2D_DMA2D_BGPFCCR_AM_MASK		0x03
/** @defgroup dma2d_dma2d_bgpfccr_am AM Alpha mode These bits define which alpha channel value to be used for the background image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
@{*/
/**@}*/


#define DMA2D_DMA2D_BGPFCCR_CS_SHIFT		8
#define DMA2D_DMA2D_BGPFCCR_CS_MASK		0xff
/** @defgroup dma2d_dma2d_bgpfccr_cs CS CLUT size These bits define the size of the CLUT used for the BG. Once the CLUT transfer has started, this field is read-only. The number of CLUT entries is equal to CS[7:0] + 1.
@{*/
/**@}*/

/** DMA2D_DMA2D_BGPFCCR_START Start This bit is set to start the automatic loading of the CLUT. This bit is automatically reset: ** at the end of the transfer ** when the transfer is aborted by the user application by setting the ABORT bit in the DMA2D_CR ** when a transfer error occurs ** when the transfer has not started due to a configuration error or another transfer operation already on going (data transfer or automatic BackGround CLUT transfer). **/
#define DMA2D_DMA2D_BGPFCCR_START		(1 << 5)
/** DMA2D_DMA2D_BGPFCCR_CCM CLUT Color mode These bits define the color format of the CLUT. This register can only be written when the transfer is disabled. Once the CLUT transfer has started, this bit is read-only. **/
#define DMA2D_DMA2D_BGPFCCR_CCM		(1 << 4)

#define DMA2D_DMA2D_BGPFCCR_CM_SHIFT		0
#define DMA2D_DMA2D_BGPFCCR_CM_MASK		0x0f
/** @defgroup dma2d_dma2d_bgpfccr_cm CM Color mode These bits define the color format of the foreground image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_bgcolr DMA2DBGCOLR DMA2D background color register
@{*/


#define DMA2D_DMA2D_BGCOLR_RED_SHIFT		16
#define DMA2D_DMA2D_BGCOLR_RED_MASK		0xff
/** @defgroup dma2d_dma2d_bgcolr_red RED Red Value These bits define the red value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
@{*/
/**@}*/


#define DMA2D_DMA2D_BGCOLR_GREEN_SHIFT		8
#define DMA2D_DMA2D_BGCOLR_GREEN_MASK		0xff
/** @defgroup dma2d_dma2d_bgcolr_green GREEN Green Value These bits define the green value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
@{*/
/**@}*/


#define DMA2D_DMA2D_BGCOLR_BLUE_SHIFT		0
#define DMA2D_DMA2D_BGCOLR_BLUE_MASK		0xff
/** @defgroup dma2d_dma2d_bgcolr_blue BLUE Blue Value These bits define the blue value for the A4 or A8 mode of the background. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_fgcmar DMA2DFGCMAR DMA2D foreground CLUT memory address register
@{*/


#define DMA2D_DMA2D_FGCMAR_MA_SHIFT		0
#define DMA2D_DMA2D_FGCMAR_MA_MASK		0xffffffff
/** @defgroup dma2d_dma2d_fgcmar_ma MA Memory Address Address of the data used for the CLUT address dedicated to the foreground image. This register can only be written when no transfer is ongoing. Once the CLUT transfer has started, this register is read-only. If the foreground CLUT format is 32-bit, the address must be 32-bit aligned.
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_bgcmar DMA2DBGCMAR DMA2D background CLUT memory address register
@{*/


#define DMA2D_DMA2D_BGCMAR_MA_SHIFT		0
#define DMA2D_DMA2D_BGCMAR_MA_MASK		0xffffffff
/** @defgroup dma2d_dma2d_bgcmar_ma MA Memory address Address of the data used for the CLUT address dedicated to the background image. This register can only be written when no transfer is on going. Once the CLUT transfer has started, this register is read-only. If the background CLUT format is 32-bit, the address must be 32-bit aligned.
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_opfccr DMA2DOPFCCR DMA2D output PFC control register
@{*/

/** DMA2D_DMA2D_OPFCCR_RBS Red Blue Swap This bit allows to swap the R &amp; B to support BGR or ABGR color formats. Once the transfer has started, this bit is read-only. **/
#define DMA2D_DMA2D_OPFCCR_RBS		(1 << 21)
/** DMA2D_DMA2D_OPFCCR_AI Alpha Inverted This bit inverts the alpha value. Once the transfer has started, this bit is read-only. **/
#define DMA2D_DMA2D_OPFCCR_AI		(1 << 20)

#define DMA2D_DMA2D_OPFCCR_CM_SHIFT		0
#define DMA2D_DMA2D_OPFCCR_CM_MASK		0x07
/** @defgroup dma2d_dma2d_opfccr_cm CM Color mode These bits define the color format of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. others: meaningless
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_ocolr DMA2DOCOLR DMA2D output color register
@{*/


#define DMA2D_DMA2D_OCOLR_ALPHA_SHIFT		24
#define DMA2D_DMA2D_OCOLR_ALPHA_MASK		0xff
/** @defgroup dma2d_dma2d_ocolr_alpha ALPHA Alpha Channel Value These bits define the alpha channel of the output color. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
@{*/
/**@}*/


#define DMA2D_DMA2D_OCOLR_RED_SHIFT		16
#define DMA2D_DMA2D_OCOLR_RED_MASK		0xff
/** @defgroup dma2d_dma2d_ocolr_red RED Red Value These bits define the red value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
@{*/
/**@}*/


#define DMA2D_DMA2D_OCOLR_GREEN_SHIFT		8
#define DMA2D_DMA2D_OCOLR_GREEN_MASK		0xff
/** @defgroup dma2d_dma2d_ocolr_green GREEN Green Value These bits define the green value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
@{*/
/**@}*/


#define DMA2D_DMA2D_OCOLR_BLUE_SHIFT		0
#define DMA2D_DMA2D_OCOLR_BLUE_MASK		0xff
/** @defgroup dma2d_dma2d_ocolr_blue BLUE Blue Value These bits define the blue value of the output image. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_omar DMA2DOMAR DMA2D output memory address register
@{*/


#define DMA2D_DMA2D_OMAR_MA_SHIFT		0
#define DMA2D_DMA2D_OMAR_MA_MASK		0xffffffff
/** @defgroup dma2d_dma2d_omar_ma MA Memory Address Address of the data used for the output FIFO. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. The address alignment must match the image format selected e.g. a 32-bit per pixel format must be 32-bit aligned and a 16-bit per pixel format must be 16-bit aligned.
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_oor DMA2DOOR DMA2D output offset register
@{*/


#define DMA2D_DMA2D_OOR_LO_SHIFT		0
#define DMA2D_DMA2D_OOR_LO_MASK		0x3fff
/** @defgroup dma2d_dma2d_oor_lo LO Line Offset Line offset used for the output (expressed in pixels). This value is used for the address generation. It is added at the end of each line to determine the starting address of the next line. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_nlr DMA2DNLR DMA2D number of line register
@{*/


#define DMA2D_DMA2D_NLR_PL_SHIFT		16
#define DMA2D_DMA2D_NLR_PL_MASK		0x3fff
/** @defgroup dma2d_dma2d_nlr_pl PL Pixel per lines Number of pixels per lines of the area to be transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only. If any of the input image format is 4-bit per pixel, pixel per lines must be even.
@{*/
/**@}*/


#define DMA2D_DMA2D_NLR_NL_SHIFT		0
#define DMA2D_DMA2D_NLR_NL_MASK		0xffff
/** @defgroup dma2d_dma2d_nlr_nl NL Number of lines Number of lines of the area to be transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_lwr DMA2DLWR DMA2D line watermark register
@{*/


#define DMA2D_DMA2D_LWR_LW_SHIFT		0
#define DMA2D_DMA2D_LWR_LW_MASK		0xffff
/** @defgroup dma2d_dma2d_lwr_lw LW Line watermark These bits allow to configure the line watermark for interrupt generation. An interrupt is raised when the last pixel of the watermarked line has been transferred. These bits can only be written when data transfers are disabled. Once the transfer has started, they are read-only.
@{*/
/**@}*/


/**@}*/

/** @defgroup dma2d_dma2d_amtcr DMA2DAMTCR DMA2D AXI master timer configuration register
@{*/


#define DMA2D_DMA2D_AMTCR_DT_SHIFT		8
#define DMA2D_DMA2D_AMTCR_DT_MASK		0xff
/** @defgroup dma2d_dma2d_amtcr_dt DT Dead Time Dead time value in the AXI clock cycle inserted between two consecutive accesses on the AXI master port. These bits represent the minimum guaranteed number of cycles between two consecutive AXI accesses.
@{*/
/**@}*/

/** DMA2D_DMA2D_AMTCR_EN Enable Enables the dead time functionality. **/
#define DMA2D_DMA2D_AMTCR_EN		(1 << 0)

/**@}*/

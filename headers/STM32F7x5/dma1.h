#pragma once 

/* --- DMA1: DMA controller ----------------------------------------- */

/** @defgroup dma1_registers DMA controller Register
@{*/

/** DMA1_LISR low interrupt status register **/
#define DMA1_LISR			MMIO32(DMA1_BASE + 0x00)
/** DMA1_HISR high interrupt status register **/
#define DMA1_HISR			MMIO32(DMA1_BASE + 0x04)
/** DMA1_LIFCR low interrupt flag clear register **/
#define DMA1_LIFCR			MMIO32(DMA1_BASE + 0x08)
/** DMA1_HIFCR high interrupt flag clear register **/
#define DMA1_HIFCR			MMIO32(DMA1_BASE + 0x0c)
/** DMA1_S0CR stream x configuration register **/
#define DMA1_S0CR			MMIO32(DMA1_BASE + 0x10)
/** DMA1_S0NDTR stream x number of data register **/
#define DMA1_S0NDTR			MMIO32(DMA1_BASE + 0x14)
/** DMA1_S0PAR stream x peripheral address register **/
#define DMA1_S0PAR			MMIO32(DMA1_BASE + 0x18)
/** DMA1_S0M0AR stream x memory 0 address register **/
#define DMA1_S0M0AR			MMIO32(DMA1_BASE + 0x1c)
/** DMA1_S0M1AR stream x memory 1 address register **/
#define DMA1_S0M1AR			MMIO32(DMA1_BASE + 0x20)
/** DMA1_S0FCR stream x FIFO control register **/
#define DMA1_S0FCR			MMIO32(DMA1_BASE + 0x24)
/** DMA1_S1CR stream x configuration register **/
#define DMA1_S1CR			MMIO32(DMA1_BASE + 0x28)
/** DMA1_S1NDTR stream x number of data register **/
#define DMA1_S1NDTR			MMIO32(DMA1_BASE + 0x2c)
/** DMA1_S1PAR stream x peripheral address register **/
#define DMA1_S1PAR			MMIO32(DMA1_BASE + 0x30)
/** DMA1_S1M0AR stream x memory 0 address register **/
#define DMA1_S1M0AR			MMIO32(DMA1_BASE + 0x34)
/** DMA1_S1M1AR stream x memory 1 address register **/
#define DMA1_S1M1AR			MMIO32(DMA1_BASE + 0x38)
/** DMA1_S1FCR stream x FIFO control register **/
#define DMA1_S1FCR			MMIO32(DMA1_BASE + 0x3c)
/** DMA1_S2CR stream x configuration register **/
#define DMA1_S2CR			MMIO32(DMA1_BASE + 0x40)
/** DMA1_S2NDTR stream x number of data register **/
#define DMA1_S2NDTR			MMIO32(DMA1_BASE + 0x44)
/** DMA1_S2PAR stream x peripheral address register **/
#define DMA1_S2PAR			MMIO32(DMA1_BASE + 0x48)
/** DMA1_S2M0AR stream x memory 0 address register **/
#define DMA1_S2M0AR			MMIO32(DMA1_BASE + 0x4c)
/** DMA1_S2M1AR stream x memory 1 address register **/
#define DMA1_S2M1AR			MMIO32(DMA1_BASE + 0x50)
/** DMA1_S2FCR stream x FIFO control register **/
#define DMA1_S2FCR			MMIO32(DMA1_BASE + 0x54)
/** DMA1_S3CR stream x configuration register **/
#define DMA1_S3CR			MMIO32(DMA1_BASE + 0x58)
/** DMA1_S3NDTR stream x number of data register **/
#define DMA1_S3NDTR			MMIO32(DMA1_BASE + 0x5c)
/** DMA1_S3PAR stream x peripheral address register **/
#define DMA1_S3PAR			MMIO32(DMA1_BASE + 0x60)
/** DMA1_S3M0AR stream x memory 0 address register **/
#define DMA1_S3M0AR			MMIO32(DMA1_BASE + 0x64)
/** DMA1_S3M1AR stream x memory 1 address register **/
#define DMA1_S3M1AR			MMIO32(DMA1_BASE + 0x68)
/** DMA1_S3FCR stream x FIFO control register **/
#define DMA1_S3FCR			MMIO32(DMA1_BASE + 0x6c)
/** DMA1_S4CR stream x configuration register **/
#define DMA1_S4CR			MMIO32(DMA1_BASE + 0x70)
/** DMA1_S4NDTR stream x number of data register **/
#define DMA1_S4NDTR			MMIO32(DMA1_BASE + 0x74)
/** DMA1_S4PAR stream x peripheral address register **/
#define DMA1_S4PAR			MMIO32(DMA1_BASE + 0x78)
/** DMA1_S4M0AR stream x memory 0 address register **/
#define DMA1_S4M0AR			MMIO32(DMA1_BASE + 0x7c)
/** DMA1_S4M1AR stream x memory 1 address register **/
#define DMA1_S4M1AR			MMIO32(DMA1_BASE + 0x80)
/** DMA1_S4FCR stream x FIFO control register **/
#define DMA1_S4FCR			MMIO32(DMA1_BASE + 0x84)
/** DMA1_S5CR stream x configuration register **/
#define DMA1_S5CR			MMIO32(DMA1_BASE + 0x88)
/** DMA1_S5NDTR stream x number of data register **/
#define DMA1_S5NDTR			MMIO32(DMA1_BASE + 0x8c)
/** DMA1_S5PAR stream x peripheral address register **/
#define DMA1_S5PAR			MMIO32(DMA1_BASE + 0x90)
/** DMA1_S5M0AR stream x memory 0 address register **/
#define DMA1_S5M0AR			MMIO32(DMA1_BASE + 0x94)
/** DMA1_S5M1AR stream x memory 1 address register **/
#define DMA1_S5M1AR			MMIO32(DMA1_BASE + 0x98)
/** DMA1_S5FCR stream x FIFO control register **/
#define DMA1_S5FCR			MMIO32(DMA1_BASE + 0x9c)
/** DMA1_S6CR stream x configuration register **/
#define DMA1_S6CR			MMIO32(DMA1_BASE + 0xa0)
/** DMA1_S6NDTR stream x number of data register **/
#define DMA1_S6NDTR			MMIO32(DMA1_BASE + 0xa4)
/** DMA1_S6PAR stream x peripheral address register **/
#define DMA1_S6PAR			MMIO32(DMA1_BASE + 0xa8)
/** DMA1_S6M0AR stream x memory 0 address register **/
#define DMA1_S6M0AR			MMIO32(DMA1_BASE + 0xac)
/** DMA1_S6M1AR stream x memory 1 address register **/
#define DMA1_S6M1AR			MMIO32(DMA1_BASE + 0xb0)
/** DMA1_S6FCR stream x FIFO control register **/
#define DMA1_S6FCR			MMIO32(DMA1_BASE + 0xb4)
/** DMA1_S7CR stream x configuration register **/
#define DMA1_S7CR			MMIO32(DMA1_BASE + 0xb8)
/** DMA1_S7NDTR stream x number of data register **/
#define DMA1_S7NDTR			MMIO32(DMA1_BASE + 0xbc)
/** DMA1_S7PAR stream x peripheral address register **/
#define DMA1_S7PAR			MMIO32(DMA1_BASE + 0xc0)
/** DMA1_S7M0AR stream x memory 0 address register **/
#define DMA1_S7M0AR			MMIO32(DMA1_BASE + 0xc4)
/** DMA1_S7M1AR stream x memory 1 address register **/
#define DMA1_S7M1AR			MMIO32(DMA1_BASE + 0xc8)
/** DMA1_S7FCR stream x FIFO control register **/
#define DMA1_S7FCR			MMIO32(DMA1_BASE + 0xcc)

/**@}*/


/** @defgroup dma1_lisr LISR low interrupt status register
@{*/

/** DMA1_LISR_TCIF3 Stream x transfer complete interrupt flag (x = 3..0) **/
#define DMA1_LISR_TCIF3		(1 << 27)
/** DMA1_LISR_HTIF3 Stream x half transfer interrupt flag (x=3..0) **/
#define DMA1_LISR_HTIF3		(1 << 26)
/** DMA1_LISR_TEIF3 Stream x transfer error interrupt flag (x=3..0) **/
#define DMA1_LISR_TEIF3		(1 << 25)
/** DMA1_LISR_DMEIF3 Stream x direct mode error interrupt flag (x=3..0) **/
#define DMA1_LISR_DMEIF3		(1 << 24)
/** DMA1_LISR_FEIF3 Stream x FIFO error interrupt flag (x=3..0) **/
#define DMA1_LISR_FEIF3		(1 << 22)
/** DMA1_LISR_TCIF2 Stream x transfer complete interrupt flag (x = 3..0) **/
#define DMA1_LISR_TCIF2		(1 << 21)
/** DMA1_LISR_HTIF2 Stream x half transfer interrupt flag (x=3..0) **/
#define DMA1_LISR_HTIF2		(1 << 20)
/** DMA1_LISR_TEIF2 Stream x transfer error interrupt flag (x=3..0) **/
#define DMA1_LISR_TEIF2		(1 << 19)
/** DMA1_LISR_DMEIF2 Stream x direct mode error interrupt flag (x=3..0) **/
#define DMA1_LISR_DMEIF2		(1 << 18)
/** DMA1_LISR_FEIF2 Stream x FIFO error interrupt flag (x=3..0) **/
#define DMA1_LISR_FEIF2		(1 << 16)
/** DMA1_LISR_TCIF1 Stream x transfer complete interrupt flag (x = 3..0) **/
#define DMA1_LISR_TCIF1		(1 << 11)
/** DMA1_LISR_HTIF1 Stream x half transfer interrupt flag (x=3..0) **/
#define DMA1_LISR_HTIF1		(1 << 10)
/** DMA1_LISR_TEIF1 Stream x transfer error interrupt flag (x=3..0) **/
#define DMA1_LISR_TEIF1		(1 << 9)
/** DMA1_LISR_DMEIF1 Stream x direct mode error interrupt flag (x=3..0) **/
#define DMA1_LISR_DMEIF1		(1 << 8)
/** DMA1_LISR_FEIF1 Stream x FIFO error interrupt flag (x=3..0) **/
#define DMA1_LISR_FEIF1		(1 << 6)
/** DMA1_LISR_TCIF0 Stream x transfer complete interrupt flag (x = 3..0) **/
#define DMA1_LISR_TCIF0		(1 << 5)
/** DMA1_LISR_HTIF0 Stream x half transfer interrupt flag (x=3..0) **/
#define DMA1_LISR_HTIF0		(1 << 4)
/** DMA1_LISR_TEIF0 Stream x transfer error interrupt flag (x=3..0) **/
#define DMA1_LISR_TEIF0		(1 << 3)
/** DMA1_LISR_DMEIF0 Stream x direct mode error interrupt flag (x=3..0) **/
#define DMA1_LISR_DMEIF0		(1 << 2)
/** DMA1_LISR_FEIF0 Stream x FIFO error interrupt flag (x=3..0) **/
#define DMA1_LISR_FEIF0		(1 << 0)

/**@}*/

/** @defgroup dma1_hisr HISR high interrupt status register
@{*/

/** DMA1_HISR_TCIF7 Stream x transfer complete interrupt flag (x=7..4) **/
#define DMA1_HISR_TCIF7		(1 << 27)
/** DMA1_HISR_HTIF7 Stream x half transfer interrupt flag (x=7..4) **/
#define DMA1_HISR_HTIF7		(1 << 26)
/** DMA1_HISR_TEIF7 Stream x transfer error interrupt flag (x=7..4) **/
#define DMA1_HISR_TEIF7		(1 << 25)
/** DMA1_HISR_DMEIF7 Stream x direct mode error interrupt flag (x=7..4) **/
#define DMA1_HISR_DMEIF7		(1 << 24)
/** DMA1_HISR_FEIF7 Stream x FIFO error interrupt flag (x=7..4) **/
#define DMA1_HISR_FEIF7		(1 << 22)
/** DMA1_HISR_TCIF6 Stream x transfer complete interrupt flag (x=7..4) **/
#define DMA1_HISR_TCIF6		(1 << 21)
/** DMA1_HISR_HTIF6 Stream x half transfer interrupt flag (x=7..4) **/
#define DMA1_HISR_HTIF6		(1 << 20)
/** DMA1_HISR_TEIF6 Stream x transfer error interrupt flag (x=7..4) **/
#define DMA1_HISR_TEIF6		(1 << 19)
/** DMA1_HISR_DMEIF6 Stream x direct mode error interrupt flag (x=7..4) **/
#define DMA1_HISR_DMEIF6		(1 << 18)
/** DMA1_HISR_FEIF6 Stream x FIFO error interrupt flag (x=7..4) **/
#define DMA1_HISR_FEIF6		(1 << 16)
/** DMA1_HISR_TCIF5 Stream x transfer complete interrupt flag (x=7..4) **/
#define DMA1_HISR_TCIF5		(1 << 11)
/** DMA1_HISR_HTIF5 Stream x half transfer interrupt flag (x=7..4) **/
#define DMA1_HISR_HTIF5		(1 << 10)
/** DMA1_HISR_TEIF5 Stream x transfer error interrupt flag (x=7..4) **/
#define DMA1_HISR_TEIF5		(1 << 9)
/** DMA1_HISR_DMEIF5 Stream x direct mode error interrupt flag (x=7..4) **/
#define DMA1_HISR_DMEIF5		(1 << 8)
/** DMA1_HISR_FEIF5 Stream x FIFO error interrupt flag (x=7..4) **/
#define DMA1_HISR_FEIF5		(1 << 6)
/** DMA1_HISR_TCIF4 Stream x transfer complete interrupt flag (x=7..4) **/
#define DMA1_HISR_TCIF4		(1 << 5)
/** DMA1_HISR_HTIF4 Stream x half transfer interrupt flag (x=7..4) **/
#define DMA1_HISR_HTIF4		(1 << 4)
/** DMA1_HISR_TEIF4 Stream x transfer error interrupt flag (x=7..4) **/
#define DMA1_HISR_TEIF4		(1 << 3)
/** DMA1_HISR_DMEIF4 Stream x direct mode error interrupt flag (x=7..4) **/
#define DMA1_HISR_DMEIF4		(1 << 2)
/** DMA1_HISR_FEIF4 Stream x FIFO error interrupt flag (x=7..4) **/
#define DMA1_HISR_FEIF4		(1 << 0)

/**@}*/

/** @defgroup dma1_lifcr LIFCR low interrupt flag clear register
@{*/

/** DMA1_LIFCR_CTCIF3 Stream x clear transfer complete interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CTCIF3		(1 << 27)
/** DMA1_LIFCR_CHTIF3 Stream x clear half transfer interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CHTIF3		(1 << 26)
/** DMA1_LIFCR_CTEIF3 Stream x clear transfer error interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CTEIF3		(1 << 25)
/** DMA1_LIFCR_CDMEIF3 Stream x clear direct mode error interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CDMEIF3		(1 << 24)
/** DMA1_LIFCR_CFEIF3 Stream x clear FIFO error interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CFEIF3		(1 << 22)
/** DMA1_LIFCR_CTCIF2 Stream x clear transfer complete interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CTCIF2		(1 << 21)
/** DMA1_LIFCR_CHTIF2 Stream x clear half transfer interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CHTIF2		(1 << 20)
/** DMA1_LIFCR_CTEIF2 Stream x clear transfer error interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CTEIF2		(1 << 19)
/** DMA1_LIFCR_CDMEIF2 Stream x clear direct mode error interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CDMEIF2		(1 << 18)
/** DMA1_LIFCR_CFEIF2 Stream x clear FIFO error interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CFEIF2		(1 << 16)
/** DMA1_LIFCR_CTCIF1 Stream x clear transfer complete interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CTCIF1		(1 << 11)
/** DMA1_LIFCR_CHTIF1 Stream x clear half transfer interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CHTIF1		(1 << 10)
/** DMA1_LIFCR_CTEIF1 Stream x clear transfer error interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CTEIF1		(1 << 9)
/** DMA1_LIFCR_CDMEIF1 Stream x clear direct mode error interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CDMEIF1		(1 << 8)
/** DMA1_LIFCR_CFEIF1 Stream x clear FIFO error interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CFEIF1		(1 << 6)
/** DMA1_LIFCR_CTCIF0 Stream x clear transfer complete interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CTCIF0		(1 << 5)
/** DMA1_LIFCR_CHTIF0 Stream x clear half transfer interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CHTIF0		(1 << 4)
/** DMA1_LIFCR_CTEIF0 Stream x clear transfer error interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CTEIF0		(1 << 3)
/** DMA1_LIFCR_CDMEIF0 Stream x clear direct mode error interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CDMEIF0		(1 << 2)
/** DMA1_LIFCR_CFEIF0 Stream x clear FIFO error interrupt flag (x = 3..0) **/
#define DMA1_LIFCR_CFEIF0		(1 << 0)

/**@}*/

/** @defgroup dma1_hifcr HIFCR high interrupt flag clear register
@{*/

/** DMA1_HIFCR_CTCIF7 Stream x clear transfer complete interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CTCIF7		(1 << 27)
/** DMA1_HIFCR_CHTIF7 Stream x clear half transfer interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CHTIF7		(1 << 26)
/** DMA1_HIFCR_CTEIF7 Stream x clear transfer error interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CTEIF7		(1 << 25)
/** DMA1_HIFCR_CDMEIF7 Stream x clear direct mode error interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CDMEIF7		(1 << 24)
/** DMA1_HIFCR_CFEIF7 Stream x clear FIFO error interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CFEIF7		(1 << 22)
/** DMA1_HIFCR_CTCIF6 Stream x clear transfer complete interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CTCIF6		(1 << 21)
/** DMA1_HIFCR_CHTIF6 Stream x clear half transfer interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CHTIF6		(1 << 20)
/** DMA1_HIFCR_CTEIF6 Stream x clear transfer error interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CTEIF6		(1 << 19)
/** DMA1_HIFCR_CDMEIF6 Stream x clear direct mode error interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CDMEIF6		(1 << 18)
/** DMA1_HIFCR_CFEIF6 Stream x clear FIFO error interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CFEIF6		(1 << 16)
/** DMA1_HIFCR_CTCIF5 Stream x clear transfer complete interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CTCIF5		(1 << 11)
/** DMA1_HIFCR_CHTIF5 Stream x clear half transfer interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CHTIF5		(1 << 10)
/** DMA1_HIFCR_CTEIF5 Stream x clear transfer error interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CTEIF5		(1 << 9)
/** DMA1_HIFCR_CDMEIF5 Stream x clear direct mode error interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CDMEIF5		(1 << 8)
/** DMA1_HIFCR_CFEIF5 Stream x clear FIFO error interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CFEIF5		(1 << 6)
/** DMA1_HIFCR_CTCIF4 Stream x clear transfer complete interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CTCIF4		(1 << 5)
/** DMA1_HIFCR_CHTIF4 Stream x clear half transfer interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CHTIF4		(1 << 4)
/** DMA1_HIFCR_CTEIF4 Stream x clear transfer error interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CTEIF4		(1 << 3)
/** DMA1_HIFCR_CDMEIF4 Stream x clear direct mode error interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CDMEIF4		(1 << 2)
/** DMA1_HIFCR_CFEIF4 Stream x clear FIFO error interrupt flag (x = 7..4) **/
#define DMA1_HIFCR_CFEIF4		(1 << 0)

/**@}*/

/** @defgroup dma1_s0cr S0CR stream x configuration register
@{*/


#define DMA1_S0CR_CHSEL_SHIFT		25
#define DMA1_S0CR_CHSEL_MASK		0x0f
/** @defgroup dma1_s0cr_chsel CHSEL Channel selection
@{*/
/**@}*/


#define DMA1_S0CR_MBURST_SHIFT		23
#define DMA1_S0CR_MBURST_MASK		0x03
/** @defgroup dma1_s0cr_mburst MBURST Memory burst transfer configuration
@{*/
/**@}*/


#define DMA1_S0CR_PBURST_SHIFT		21
#define DMA1_S0CR_PBURST_MASK		0x03
/** @defgroup dma1_s0cr_pburst PBURST Peripheral burst transfer configuration
@{*/
/**@}*/

/** DMA1_S0CR_CT Current target (only in double buffer mode) **/
#define DMA1_S0CR_CT		(1 << 19)
/** DMA1_S0CR_DBM Double buffer mode **/
#define DMA1_S0CR_DBM		(1 << 18)

#define DMA1_S0CR_PL_SHIFT		16
#define DMA1_S0CR_PL_MASK		0x03
/** @defgroup dma1_s0cr_pl PL Priority level
@{*/
/**@}*/

/** DMA1_S0CR_PINCOS Peripheral increment offset size **/
#define DMA1_S0CR_PINCOS		(1 << 15)

#define DMA1_S0CR_MSIZE_SHIFT		13
#define DMA1_S0CR_MSIZE_MASK		0x03
/** @defgroup dma1_s0cr_msize MSIZE Memory data size
@{*/
/**@}*/


#define DMA1_S0CR_PSIZE_SHIFT		11
#define DMA1_S0CR_PSIZE_MASK		0x03
/** @defgroup dma1_s0cr_psize PSIZE Peripheral data size
@{*/
/**@}*/

/** DMA1_S0CR_MINC Memory increment mode **/
#define DMA1_S0CR_MINC		(1 << 10)
/** DMA1_S0CR_PINC Peripheral increment mode **/
#define DMA1_S0CR_PINC		(1 << 9)
/** DMA1_S0CR_CIRC Circular mode **/
#define DMA1_S0CR_CIRC		(1 << 8)

#define DMA1_S0CR_DIR_SHIFT		6
#define DMA1_S0CR_DIR_MASK		0x03
/** @defgroup dma1_s0cr_dir DIR Data transfer direction
@{*/
/**@}*/

/** DMA1_S0CR_PFCTRL Peripheral flow controller **/
#define DMA1_S0CR_PFCTRL		(1 << 5)
/** DMA1_S0CR_TCIE Transfer complete interrupt enable **/
#define DMA1_S0CR_TCIE		(1 << 4)
/** DMA1_S0CR_HTIE Half transfer interrupt enable **/
#define DMA1_S0CR_HTIE		(1 << 3)
/** DMA1_S0CR_TEIE Transfer error interrupt enable **/
#define DMA1_S0CR_TEIE		(1 << 2)
/** DMA1_S0CR_DMEIE Direct mode error interrupt enable **/
#define DMA1_S0CR_DMEIE		(1 << 1)
/** DMA1_S0CR_EN Stream enable / flag stream ready when read low **/
#define DMA1_S0CR_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_s0ndtr S0NDTR stream x number of data register
@{*/


#define DMA1_S0NDTR_NDT_SHIFT		0
#define DMA1_S0NDTR_NDT_MASK		0xffff
/** @defgroup dma1_s0ndtr_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s0par S0PAR stream x peripheral address register
@{*/


#define DMA1_S0PAR_PA_SHIFT		0
#define DMA1_S0PAR_PA_MASK		0xffffffff
/** @defgroup dma1_s0par_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s0m0ar S0M0AR stream x memory 0 address register
@{*/


#define DMA1_S0M0AR_M0A_SHIFT		0
#define DMA1_S0M0AR_M0A_MASK		0xffffffff
/** @defgroup dma1_s0m0ar_m0a M0A Memory 0 address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s0m1ar S0M1AR stream x memory 1 address register
@{*/


#define DMA1_S0M1AR_M1A_SHIFT		0
#define DMA1_S0M1AR_M1A_MASK		0xffffffff
/** @defgroup dma1_s0m1ar_m1a M1A Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s0fcr S0FCR stream x FIFO control register
@{*/

/** DMA1_S0FCR_FEIE FIFO error interrupt enable **/
#define DMA1_S0FCR_FEIE		(1 << 7)

#define DMA1_S0FCR_FS_SHIFT		3
#define DMA1_S0FCR_FS_MASK		0x07
/** @defgroup dma1_s0fcr_fs FS FIFO status
@{*/
/**@}*/

/** DMA1_S0FCR_DMDIS Direct mode disable **/
#define DMA1_S0FCR_DMDIS		(1 << 2)

#define DMA1_S0FCR_FTH_SHIFT		0
#define DMA1_S0FCR_FTH_MASK		0x03
/** @defgroup dma1_s0fcr_fth FTH FIFO threshold selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s1cr S1CR stream x configuration register
@{*/


#define DMA1_S1CR_CHSEL_SHIFT		25
#define DMA1_S1CR_CHSEL_MASK		0x0f
/** @defgroup dma1_s1cr_chsel CHSEL Channel selection
@{*/
/**@}*/


#define DMA1_S1CR_MBURST_SHIFT		23
#define DMA1_S1CR_MBURST_MASK		0x03
/** @defgroup dma1_s1cr_mburst MBURST Memory burst transfer configuration
@{*/
/**@}*/


#define DMA1_S1CR_PBURST_SHIFT		21
#define DMA1_S1CR_PBURST_MASK		0x03
/** @defgroup dma1_s1cr_pburst PBURST Peripheral burst transfer configuration
@{*/
/**@}*/

/** DMA1_S1CR_ACK ACK **/
#define DMA1_S1CR_ACK		(1 << 20)
/** DMA1_S1CR_CT Current target (only in double buffer mode) **/
#define DMA1_S1CR_CT		(1 << 19)
/** DMA1_S1CR_DBM Double buffer mode **/
#define DMA1_S1CR_DBM		(1 << 18)

#define DMA1_S1CR_PL_SHIFT		16
#define DMA1_S1CR_PL_MASK		0x03
/** @defgroup dma1_s1cr_pl PL Priority level
@{*/
/**@}*/

/** DMA1_S1CR_PINCOS Peripheral increment offset size **/
#define DMA1_S1CR_PINCOS		(1 << 15)

#define DMA1_S1CR_MSIZE_SHIFT		13
#define DMA1_S1CR_MSIZE_MASK		0x03
/** @defgroup dma1_s1cr_msize MSIZE Memory data size
@{*/
/**@}*/


#define DMA1_S1CR_PSIZE_SHIFT		11
#define DMA1_S1CR_PSIZE_MASK		0x03
/** @defgroup dma1_s1cr_psize PSIZE Peripheral data size
@{*/
/**@}*/

/** DMA1_S1CR_MINC Memory increment mode **/
#define DMA1_S1CR_MINC		(1 << 10)
/** DMA1_S1CR_PINC Peripheral increment mode **/
#define DMA1_S1CR_PINC		(1 << 9)
/** DMA1_S1CR_CIRC Circular mode **/
#define DMA1_S1CR_CIRC		(1 << 8)

#define DMA1_S1CR_DIR_SHIFT		6
#define DMA1_S1CR_DIR_MASK		0x03
/** @defgroup dma1_s1cr_dir DIR Data transfer direction
@{*/
/**@}*/

/** DMA1_S1CR_PFCTRL Peripheral flow controller **/
#define DMA1_S1CR_PFCTRL		(1 << 5)
/** DMA1_S1CR_TCIE Transfer complete interrupt enable **/
#define DMA1_S1CR_TCIE		(1 << 4)
/** DMA1_S1CR_HTIE Half transfer interrupt enable **/
#define DMA1_S1CR_HTIE		(1 << 3)
/** DMA1_S1CR_TEIE Transfer error interrupt enable **/
#define DMA1_S1CR_TEIE		(1 << 2)
/** DMA1_S1CR_DMEIE Direct mode error interrupt enable **/
#define DMA1_S1CR_DMEIE		(1 << 1)
/** DMA1_S1CR_EN Stream enable / flag stream ready when read low **/
#define DMA1_S1CR_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_s1ndtr S1NDTR stream x number of data register
@{*/


#define DMA1_S1NDTR_NDT_SHIFT		0
#define DMA1_S1NDTR_NDT_MASK		0xffff
/** @defgroup dma1_s1ndtr_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s1par S1PAR stream x peripheral address register
@{*/


#define DMA1_S1PAR_PA_SHIFT		0
#define DMA1_S1PAR_PA_MASK		0xffffffff
/** @defgroup dma1_s1par_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s1m0ar S1M0AR stream x memory 0 address register
@{*/


#define DMA1_S1M0AR_M0A_SHIFT		0
#define DMA1_S1M0AR_M0A_MASK		0xffffffff
/** @defgroup dma1_s1m0ar_m0a M0A Memory 0 address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s1m1ar S1M1AR stream x memory 1 address register
@{*/


#define DMA1_S1M1AR_M1A_SHIFT		0
#define DMA1_S1M1AR_M1A_MASK		0xffffffff
/** @defgroup dma1_s1m1ar_m1a M1A Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s1fcr S1FCR stream x FIFO control register
@{*/

/** DMA1_S1FCR_FEIE FIFO error interrupt enable **/
#define DMA1_S1FCR_FEIE		(1 << 7)

#define DMA1_S1FCR_FS_SHIFT		3
#define DMA1_S1FCR_FS_MASK		0x07
/** @defgroup dma1_s1fcr_fs FS FIFO status
@{*/
/**@}*/

/** DMA1_S1FCR_DMDIS Direct mode disable **/
#define DMA1_S1FCR_DMDIS		(1 << 2)

#define DMA1_S1FCR_FTH_SHIFT		0
#define DMA1_S1FCR_FTH_MASK		0x03
/** @defgroup dma1_s1fcr_fth FTH FIFO threshold selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s2cr S2CR stream x configuration register
@{*/


#define DMA1_S2CR_CHSEL_SHIFT		25
#define DMA1_S2CR_CHSEL_MASK		0x0f
/** @defgroup dma1_s2cr_chsel CHSEL Channel selection
@{*/
/**@}*/


#define DMA1_S2CR_MBURST_SHIFT		23
#define DMA1_S2CR_MBURST_MASK		0x03
/** @defgroup dma1_s2cr_mburst MBURST Memory burst transfer configuration
@{*/
/**@}*/


#define DMA1_S2CR_PBURST_SHIFT		21
#define DMA1_S2CR_PBURST_MASK		0x03
/** @defgroup dma1_s2cr_pburst PBURST Peripheral burst transfer configuration
@{*/
/**@}*/

/** DMA1_S2CR_ACK ACK **/
#define DMA1_S2CR_ACK		(1 << 20)
/** DMA1_S2CR_CT Current target (only in double buffer mode) **/
#define DMA1_S2CR_CT		(1 << 19)
/** DMA1_S2CR_DBM Double buffer mode **/
#define DMA1_S2CR_DBM		(1 << 18)

#define DMA1_S2CR_PL_SHIFT		16
#define DMA1_S2CR_PL_MASK		0x03
/** @defgroup dma1_s2cr_pl PL Priority level
@{*/
/**@}*/

/** DMA1_S2CR_PINCOS Peripheral increment offset size **/
#define DMA1_S2CR_PINCOS		(1 << 15)

#define DMA1_S2CR_MSIZE_SHIFT		13
#define DMA1_S2CR_MSIZE_MASK		0x03
/** @defgroup dma1_s2cr_msize MSIZE Memory data size
@{*/
/**@}*/


#define DMA1_S2CR_PSIZE_SHIFT		11
#define DMA1_S2CR_PSIZE_MASK		0x03
/** @defgroup dma1_s2cr_psize PSIZE Peripheral data size
@{*/
/**@}*/

/** DMA1_S2CR_MINC Memory increment mode **/
#define DMA1_S2CR_MINC		(1 << 10)
/** DMA1_S2CR_PINC Peripheral increment mode **/
#define DMA1_S2CR_PINC		(1 << 9)
/** DMA1_S2CR_CIRC Circular mode **/
#define DMA1_S2CR_CIRC		(1 << 8)

#define DMA1_S2CR_DIR_SHIFT		6
#define DMA1_S2CR_DIR_MASK		0x03
/** @defgroup dma1_s2cr_dir DIR Data transfer direction
@{*/
/**@}*/

/** DMA1_S2CR_PFCTRL Peripheral flow controller **/
#define DMA1_S2CR_PFCTRL		(1 << 5)
/** DMA1_S2CR_TCIE Transfer complete interrupt enable **/
#define DMA1_S2CR_TCIE		(1 << 4)
/** DMA1_S2CR_HTIE Half transfer interrupt enable **/
#define DMA1_S2CR_HTIE		(1 << 3)
/** DMA1_S2CR_TEIE Transfer error interrupt enable **/
#define DMA1_S2CR_TEIE		(1 << 2)
/** DMA1_S2CR_DMEIE Direct mode error interrupt enable **/
#define DMA1_S2CR_DMEIE		(1 << 1)
/** DMA1_S2CR_EN Stream enable / flag stream ready when read low **/
#define DMA1_S2CR_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_s2ndtr S2NDTR stream x number of data register
@{*/


#define DMA1_S2NDTR_NDT_SHIFT		0
#define DMA1_S2NDTR_NDT_MASK		0xffff
/** @defgroup dma1_s2ndtr_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s2par S2PAR stream x peripheral address register
@{*/


#define DMA1_S2PAR_PA_SHIFT		0
#define DMA1_S2PAR_PA_MASK		0xffffffff
/** @defgroup dma1_s2par_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s2m0ar S2M0AR stream x memory 0 address register
@{*/


#define DMA1_S2M0AR_M0A_SHIFT		0
#define DMA1_S2M0AR_M0A_MASK		0xffffffff
/** @defgroup dma1_s2m0ar_m0a M0A Memory 0 address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s2m1ar S2M1AR stream x memory 1 address register
@{*/


#define DMA1_S2M1AR_M1A_SHIFT		0
#define DMA1_S2M1AR_M1A_MASK		0xffffffff
/** @defgroup dma1_s2m1ar_m1a M1A Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s2fcr S2FCR stream x FIFO control register
@{*/

/** DMA1_S2FCR_FEIE FIFO error interrupt enable **/
#define DMA1_S2FCR_FEIE		(1 << 7)

#define DMA1_S2FCR_FS_SHIFT		3
#define DMA1_S2FCR_FS_MASK		0x07
/** @defgroup dma1_s2fcr_fs FS FIFO status
@{*/
/**@}*/

/** DMA1_S2FCR_DMDIS Direct mode disable **/
#define DMA1_S2FCR_DMDIS		(1 << 2)

#define DMA1_S2FCR_FTH_SHIFT		0
#define DMA1_S2FCR_FTH_MASK		0x03
/** @defgroup dma1_s2fcr_fth FTH FIFO threshold selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s3cr S3CR stream x configuration register
@{*/


#define DMA1_S3CR_CHSEL_SHIFT		25
#define DMA1_S3CR_CHSEL_MASK		0x0f
/** @defgroup dma1_s3cr_chsel CHSEL Channel selection
@{*/
/**@}*/


#define DMA1_S3CR_MBURST_SHIFT		23
#define DMA1_S3CR_MBURST_MASK		0x03
/** @defgroup dma1_s3cr_mburst MBURST Memory burst transfer configuration
@{*/
/**@}*/


#define DMA1_S3CR_PBURST_SHIFT		21
#define DMA1_S3CR_PBURST_MASK		0x03
/** @defgroup dma1_s3cr_pburst PBURST Peripheral burst transfer configuration
@{*/
/**@}*/

/** DMA1_S3CR_ACK ACK **/
#define DMA1_S3CR_ACK		(1 << 20)
/** DMA1_S3CR_CT Current target (only in double buffer mode) **/
#define DMA1_S3CR_CT		(1 << 19)
/** DMA1_S3CR_DBM Double buffer mode **/
#define DMA1_S3CR_DBM		(1 << 18)

#define DMA1_S3CR_PL_SHIFT		16
#define DMA1_S3CR_PL_MASK		0x03
/** @defgroup dma1_s3cr_pl PL Priority level
@{*/
/**@}*/

/** DMA1_S3CR_PINCOS Peripheral increment offset size **/
#define DMA1_S3CR_PINCOS		(1 << 15)

#define DMA1_S3CR_MSIZE_SHIFT		13
#define DMA1_S3CR_MSIZE_MASK		0x03
/** @defgroup dma1_s3cr_msize MSIZE Memory data size
@{*/
/**@}*/


#define DMA1_S3CR_PSIZE_SHIFT		11
#define DMA1_S3CR_PSIZE_MASK		0x03
/** @defgroup dma1_s3cr_psize PSIZE Peripheral data size
@{*/
/**@}*/

/** DMA1_S3CR_MINC Memory increment mode **/
#define DMA1_S3CR_MINC		(1 << 10)
/** DMA1_S3CR_PINC Peripheral increment mode **/
#define DMA1_S3CR_PINC		(1 << 9)
/** DMA1_S3CR_CIRC Circular mode **/
#define DMA1_S3CR_CIRC		(1 << 8)

#define DMA1_S3CR_DIR_SHIFT		6
#define DMA1_S3CR_DIR_MASK		0x03
/** @defgroup dma1_s3cr_dir DIR Data transfer direction
@{*/
/**@}*/

/** DMA1_S3CR_PFCTRL Peripheral flow controller **/
#define DMA1_S3CR_PFCTRL		(1 << 5)
/** DMA1_S3CR_TCIE Transfer complete interrupt enable **/
#define DMA1_S3CR_TCIE		(1 << 4)
/** DMA1_S3CR_HTIE Half transfer interrupt enable **/
#define DMA1_S3CR_HTIE		(1 << 3)
/** DMA1_S3CR_TEIE Transfer error interrupt enable **/
#define DMA1_S3CR_TEIE		(1 << 2)
/** DMA1_S3CR_DMEIE Direct mode error interrupt enable **/
#define DMA1_S3CR_DMEIE		(1 << 1)
/** DMA1_S3CR_EN Stream enable / flag stream ready when read low **/
#define DMA1_S3CR_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_s3ndtr S3NDTR stream x number of data register
@{*/


#define DMA1_S3NDTR_NDT_SHIFT		0
#define DMA1_S3NDTR_NDT_MASK		0xffff
/** @defgroup dma1_s3ndtr_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s3par S3PAR stream x peripheral address register
@{*/


#define DMA1_S3PAR_PA_SHIFT		0
#define DMA1_S3PAR_PA_MASK		0xffffffff
/** @defgroup dma1_s3par_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s3m0ar S3M0AR stream x memory 0 address register
@{*/


#define DMA1_S3M0AR_M0A_SHIFT		0
#define DMA1_S3M0AR_M0A_MASK		0xffffffff
/** @defgroup dma1_s3m0ar_m0a M0A Memory 0 address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s3m1ar S3M1AR stream x memory 1 address register
@{*/


#define DMA1_S3M1AR_M1A_SHIFT		0
#define DMA1_S3M1AR_M1A_MASK		0xffffffff
/** @defgroup dma1_s3m1ar_m1a M1A Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s3fcr S3FCR stream x FIFO control register
@{*/

/** DMA1_S3FCR_FEIE FIFO error interrupt enable **/
#define DMA1_S3FCR_FEIE		(1 << 7)

#define DMA1_S3FCR_FS_SHIFT		3
#define DMA1_S3FCR_FS_MASK		0x07
/** @defgroup dma1_s3fcr_fs FS FIFO status
@{*/
/**@}*/

/** DMA1_S3FCR_DMDIS Direct mode disable **/
#define DMA1_S3FCR_DMDIS		(1 << 2)

#define DMA1_S3FCR_FTH_SHIFT		0
#define DMA1_S3FCR_FTH_MASK		0x03
/** @defgroup dma1_s3fcr_fth FTH FIFO threshold selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s4cr S4CR stream x configuration register
@{*/


#define DMA1_S4CR_CHSEL_SHIFT		25
#define DMA1_S4CR_CHSEL_MASK		0x0f
/** @defgroup dma1_s4cr_chsel CHSEL Channel selection
@{*/
/**@}*/


#define DMA1_S4CR_MBURST_SHIFT		23
#define DMA1_S4CR_MBURST_MASK		0x03
/** @defgroup dma1_s4cr_mburst MBURST Memory burst transfer configuration
@{*/
/**@}*/


#define DMA1_S4CR_PBURST_SHIFT		21
#define DMA1_S4CR_PBURST_MASK		0x03
/** @defgroup dma1_s4cr_pburst PBURST Peripheral burst transfer configuration
@{*/
/**@}*/

/** DMA1_S4CR_ACK ACK **/
#define DMA1_S4CR_ACK		(1 << 20)
/** DMA1_S4CR_CT Current target (only in double buffer mode) **/
#define DMA1_S4CR_CT		(1 << 19)
/** DMA1_S4CR_DBM Double buffer mode **/
#define DMA1_S4CR_DBM		(1 << 18)

#define DMA1_S4CR_PL_SHIFT		16
#define DMA1_S4CR_PL_MASK		0x03
/** @defgroup dma1_s4cr_pl PL Priority level
@{*/
/**@}*/

/** DMA1_S4CR_PINCOS Peripheral increment offset size **/
#define DMA1_S4CR_PINCOS		(1 << 15)

#define DMA1_S4CR_MSIZE_SHIFT		13
#define DMA1_S4CR_MSIZE_MASK		0x03
/** @defgroup dma1_s4cr_msize MSIZE Memory data size
@{*/
/**@}*/


#define DMA1_S4CR_PSIZE_SHIFT		11
#define DMA1_S4CR_PSIZE_MASK		0x03
/** @defgroup dma1_s4cr_psize PSIZE Peripheral data size
@{*/
/**@}*/

/** DMA1_S4CR_MINC Memory increment mode **/
#define DMA1_S4CR_MINC		(1 << 10)
/** DMA1_S4CR_PINC Peripheral increment mode **/
#define DMA1_S4CR_PINC		(1 << 9)
/** DMA1_S4CR_CIRC Circular mode **/
#define DMA1_S4CR_CIRC		(1 << 8)

#define DMA1_S4CR_DIR_SHIFT		6
#define DMA1_S4CR_DIR_MASK		0x03
/** @defgroup dma1_s4cr_dir DIR Data transfer direction
@{*/
/**@}*/

/** DMA1_S4CR_PFCTRL Peripheral flow controller **/
#define DMA1_S4CR_PFCTRL		(1 << 5)
/** DMA1_S4CR_TCIE Transfer complete interrupt enable **/
#define DMA1_S4CR_TCIE		(1 << 4)
/** DMA1_S4CR_HTIE Half transfer interrupt enable **/
#define DMA1_S4CR_HTIE		(1 << 3)
/** DMA1_S4CR_TEIE Transfer error interrupt enable **/
#define DMA1_S4CR_TEIE		(1 << 2)
/** DMA1_S4CR_DMEIE Direct mode error interrupt enable **/
#define DMA1_S4CR_DMEIE		(1 << 1)
/** DMA1_S4CR_EN Stream enable / flag stream ready when read low **/
#define DMA1_S4CR_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_s4ndtr S4NDTR stream x number of data register
@{*/


#define DMA1_S4NDTR_NDT_SHIFT		0
#define DMA1_S4NDTR_NDT_MASK		0xffff
/** @defgroup dma1_s4ndtr_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s4par S4PAR stream x peripheral address register
@{*/


#define DMA1_S4PAR_PA_SHIFT		0
#define DMA1_S4PAR_PA_MASK		0xffffffff
/** @defgroup dma1_s4par_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s4m0ar S4M0AR stream x memory 0 address register
@{*/


#define DMA1_S4M0AR_M0A_SHIFT		0
#define DMA1_S4M0AR_M0A_MASK		0xffffffff
/** @defgroup dma1_s4m0ar_m0a M0A Memory 0 address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s4m1ar S4M1AR stream x memory 1 address register
@{*/


#define DMA1_S4M1AR_M1A_SHIFT		0
#define DMA1_S4M1AR_M1A_MASK		0xffffffff
/** @defgroup dma1_s4m1ar_m1a M1A Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s4fcr S4FCR stream x FIFO control register
@{*/

/** DMA1_S4FCR_FEIE FIFO error interrupt enable **/
#define DMA1_S4FCR_FEIE		(1 << 7)

#define DMA1_S4FCR_FS_SHIFT		3
#define DMA1_S4FCR_FS_MASK		0x07
/** @defgroup dma1_s4fcr_fs FS FIFO status
@{*/
/**@}*/

/** DMA1_S4FCR_DMDIS Direct mode disable **/
#define DMA1_S4FCR_DMDIS		(1 << 2)

#define DMA1_S4FCR_FTH_SHIFT		0
#define DMA1_S4FCR_FTH_MASK		0x03
/** @defgroup dma1_s4fcr_fth FTH FIFO threshold selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s5cr S5CR stream x configuration register
@{*/


#define DMA1_S5CR_CHSEL_SHIFT		25
#define DMA1_S5CR_CHSEL_MASK		0x0f
/** @defgroup dma1_s5cr_chsel CHSEL Channel selection
@{*/
/**@}*/


#define DMA1_S5CR_MBURST_SHIFT		23
#define DMA1_S5CR_MBURST_MASK		0x03
/** @defgroup dma1_s5cr_mburst MBURST Memory burst transfer configuration
@{*/
/**@}*/


#define DMA1_S5CR_PBURST_SHIFT		21
#define DMA1_S5CR_PBURST_MASK		0x03
/** @defgroup dma1_s5cr_pburst PBURST Peripheral burst transfer configuration
@{*/
/**@}*/

/** DMA1_S5CR_ACK ACK **/
#define DMA1_S5CR_ACK		(1 << 20)
/** DMA1_S5CR_CT Current target (only in double buffer mode) **/
#define DMA1_S5CR_CT		(1 << 19)
/** DMA1_S5CR_DBM Double buffer mode **/
#define DMA1_S5CR_DBM		(1 << 18)

#define DMA1_S5CR_PL_SHIFT		16
#define DMA1_S5CR_PL_MASK		0x03
/** @defgroup dma1_s5cr_pl PL Priority level
@{*/
/**@}*/

/** DMA1_S5CR_PINCOS Peripheral increment offset size **/
#define DMA1_S5CR_PINCOS		(1 << 15)

#define DMA1_S5CR_MSIZE_SHIFT		13
#define DMA1_S5CR_MSIZE_MASK		0x03
/** @defgroup dma1_s5cr_msize MSIZE Memory data size
@{*/
/**@}*/


#define DMA1_S5CR_PSIZE_SHIFT		11
#define DMA1_S5CR_PSIZE_MASK		0x03
/** @defgroup dma1_s5cr_psize PSIZE Peripheral data size
@{*/
/**@}*/

/** DMA1_S5CR_MINC Memory increment mode **/
#define DMA1_S5CR_MINC		(1 << 10)
/** DMA1_S5CR_PINC Peripheral increment mode **/
#define DMA1_S5CR_PINC		(1 << 9)
/** DMA1_S5CR_CIRC Circular mode **/
#define DMA1_S5CR_CIRC		(1 << 8)

#define DMA1_S5CR_DIR_SHIFT		6
#define DMA1_S5CR_DIR_MASK		0x03
/** @defgroup dma1_s5cr_dir DIR Data transfer direction
@{*/
/**@}*/

/** DMA1_S5CR_PFCTRL Peripheral flow controller **/
#define DMA1_S5CR_PFCTRL		(1 << 5)
/** DMA1_S5CR_TCIE Transfer complete interrupt enable **/
#define DMA1_S5CR_TCIE		(1 << 4)
/** DMA1_S5CR_HTIE Half transfer interrupt enable **/
#define DMA1_S5CR_HTIE		(1 << 3)
/** DMA1_S5CR_TEIE Transfer error interrupt enable **/
#define DMA1_S5CR_TEIE		(1 << 2)
/** DMA1_S5CR_DMEIE Direct mode error interrupt enable **/
#define DMA1_S5CR_DMEIE		(1 << 1)
/** DMA1_S5CR_EN Stream enable / flag stream ready when read low **/
#define DMA1_S5CR_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_s5ndtr S5NDTR stream x number of data register
@{*/


#define DMA1_S5NDTR_NDT_SHIFT		0
#define DMA1_S5NDTR_NDT_MASK		0xffff
/** @defgroup dma1_s5ndtr_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s5par S5PAR stream x peripheral address register
@{*/


#define DMA1_S5PAR_PA_SHIFT		0
#define DMA1_S5PAR_PA_MASK		0xffffffff
/** @defgroup dma1_s5par_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s5m0ar S5M0AR stream x memory 0 address register
@{*/


#define DMA1_S5M0AR_M0A_SHIFT		0
#define DMA1_S5M0AR_M0A_MASK		0xffffffff
/** @defgroup dma1_s5m0ar_m0a M0A Memory 0 address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s5m1ar S5M1AR stream x memory 1 address register
@{*/


#define DMA1_S5M1AR_M1A_SHIFT		0
#define DMA1_S5M1AR_M1A_MASK		0xffffffff
/** @defgroup dma1_s5m1ar_m1a M1A Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s5fcr S5FCR stream x FIFO control register
@{*/

/** DMA1_S5FCR_FEIE FIFO error interrupt enable **/
#define DMA1_S5FCR_FEIE		(1 << 7)

#define DMA1_S5FCR_FS_SHIFT		3
#define DMA1_S5FCR_FS_MASK		0x07
/** @defgroup dma1_s5fcr_fs FS FIFO status
@{*/
/**@}*/

/** DMA1_S5FCR_DMDIS Direct mode disable **/
#define DMA1_S5FCR_DMDIS		(1 << 2)

#define DMA1_S5FCR_FTH_SHIFT		0
#define DMA1_S5FCR_FTH_MASK		0x03
/** @defgroup dma1_s5fcr_fth FTH FIFO threshold selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s6cr S6CR stream x configuration register
@{*/


#define DMA1_S6CR_CHSEL_SHIFT		25
#define DMA1_S6CR_CHSEL_MASK		0x0f
/** @defgroup dma1_s6cr_chsel CHSEL Channel selection
@{*/
/**@}*/


#define DMA1_S6CR_MBURST_SHIFT		23
#define DMA1_S6CR_MBURST_MASK		0x03
/** @defgroup dma1_s6cr_mburst MBURST Memory burst transfer configuration
@{*/
/**@}*/


#define DMA1_S6CR_PBURST_SHIFT		21
#define DMA1_S6CR_PBURST_MASK		0x03
/** @defgroup dma1_s6cr_pburst PBURST Peripheral burst transfer configuration
@{*/
/**@}*/

/** DMA1_S6CR_ACK ACK **/
#define DMA1_S6CR_ACK		(1 << 20)
/** DMA1_S6CR_CT Current target (only in double buffer mode) **/
#define DMA1_S6CR_CT		(1 << 19)
/** DMA1_S6CR_DBM Double buffer mode **/
#define DMA1_S6CR_DBM		(1 << 18)

#define DMA1_S6CR_PL_SHIFT		16
#define DMA1_S6CR_PL_MASK		0x03
/** @defgroup dma1_s6cr_pl PL Priority level
@{*/
/**@}*/

/** DMA1_S6CR_PINCOS Peripheral increment offset size **/
#define DMA1_S6CR_PINCOS		(1 << 15)

#define DMA1_S6CR_MSIZE_SHIFT		13
#define DMA1_S6CR_MSIZE_MASK		0x03
/** @defgroup dma1_s6cr_msize MSIZE Memory data size
@{*/
/**@}*/


#define DMA1_S6CR_PSIZE_SHIFT		11
#define DMA1_S6CR_PSIZE_MASK		0x03
/** @defgroup dma1_s6cr_psize PSIZE Peripheral data size
@{*/
/**@}*/

/** DMA1_S6CR_MINC Memory increment mode **/
#define DMA1_S6CR_MINC		(1 << 10)
/** DMA1_S6CR_PINC Peripheral increment mode **/
#define DMA1_S6CR_PINC		(1 << 9)
/** DMA1_S6CR_CIRC Circular mode **/
#define DMA1_S6CR_CIRC		(1 << 8)

#define DMA1_S6CR_DIR_SHIFT		6
#define DMA1_S6CR_DIR_MASK		0x03
/** @defgroup dma1_s6cr_dir DIR Data transfer direction
@{*/
/**@}*/

/** DMA1_S6CR_PFCTRL Peripheral flow controller **/
#define DMA1_S6CR_PFCTRL		(1 << 5)
/** DMA1_S6CR_TCIE Transfer complete interrupt enable **/
#define DMA1_S6CR_TCIE		(1 << 4)
/** DMA1_S6CR_HTIE Half transfer interrupt enable **/
#define DMA1_S6CR_HTIE		(1 << 3)
/** DMA1_S6CR_TEIE Transfer error interrupt enable **/
#define DMA1_S6CR_TEIE		(1 << 2)
/** DMA1_S6CR_DMEIE Direct mode error interrupt enable **/
#define DMA1_S6CR_DMEIE		(1 << 1)
/** DMA1_S6CR_EN Stream enable / flag stream ready when read low **/
#define DMA1_S6CR_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_s6ndtr S6NDTR stream x number of data register
@{*/


#define DMA1_S6NDTR_NDT_SHIFT		0
#define DMA1_S6NDTR_NDT_MASK		0xffff
/** @defgroup dma1_s6ndtr_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s6par S6PAR stream x peripheral address register
@{*/


#define DMA1_S6PAR_PA_SHIFT		0
#define DMA1_S6PAR_PA_MASK		0xffffffff
/** @defgroup dma1_s6par_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s6m0ar S6M0AR stream x memory 0 address register
@{*/


#define DMA1_S6M0AR_M0A_SHIFT		0
#define DMA1_S6M0AR_M0A_MASK		0xffffffff
/** @defgroup dma1_s6m0ar_m0a M0A Memory 0 address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s6m1ar S6M1AR stream x memory 1 address register
@{*/


#define DMA1_S6M1AR_M1A_SHIFT		0
#define DMA1_S6M1AR_M1A_MASK		0xffffffff
/** @defgroup dma1_s6m1ar_m1a M1A Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s6fcr S6FCR stream x FIFO control register
@{*/

/** DMA1_S6FCR_FEIE FIFO error interrupt enable **/
#define DMA1_S6FCR_FEIE		(1 << 7)

#define DMA1_S6FCR_FS_SHIFT		3
#define DMA1_S6FCR_FS_MASK		0x07
/** @defgroup dma1_s6fcr_fs FS FIFO status
@{*/
/**@}*/

/** DMA1_S6FCR_DMDIS Direct mode disable **/
#define DMA1_S6FCR_DMDIS		(1 << 2)

#define DMA1_S6FCR_FTH_SHIFT		0
#define DMA1_S6FCR_FTH_MASK		0x03
/** @defgroup dma1_s6fcr_fth FTH FIFO threshold selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s7cr S7CR stream x configuration register
@{*/


#define DMA1_S7CR_CHSEL_SHIFT		25
#define DMA1_S7CR_CHSEL_MASK		0x0f
/** @defgroup dma1_s7cr_chsel CHSEL Channel selection
@{*/
/**@}*/


#define DMA1_S7CR_MBURST_SHIFT		23
#define DMA1_S7CR_MBURST_MASK		0x03
/** @defgroup dma1_s7cr_mburst MBURST Memory burst transfer configuration
@{*/
/**@}*/


#define DMA1_S7CR_PBURST_SHIFT		21
#define DMA1_S7CR_PBURST_MASK		0x03
/** @defgroup dma1_s7cr_pburst PBURST Peripheral burst transfer configuration
@{*/
/**@}*/

/** DMA1_S7CR_ACK ACK **/
#define DMA1_S7CR_ACK		(1 << 20)
/** DMA1_S7CR_CT Current target (only in double buffer mode) **/
#define DMA1_S7CR_CT		(1 << 19)
/** DMA1_S7CR_DBM Double buffer mode **/
#define DMA1_S7CR_DBM		(1 << 18)

#define DMA1_S7CR_PL_SHIFT		16
#define DMA1_S7CR_PL_MASK		0x03
/** @defgroup dma1_s7cr_pl PL Priority level
@{*/
/**@}*/

/** DMA1_S7CR_PINCOS Peripheral increment offset size **/
#define DMA1_S7CR_PINCOS		(1 << 15)

#define DMA1_S7CR_MSIZE_SHIFT		13
#define DMA1_S7CR_MSIZE_MASK		0x03
/** @defgroup dma1_s7cr_msize MSIZE Memory data size
@{*/
/**@}*/


#define DMA1_S7CR_PSIZE_SHIFT		11
#define DMA1_S7CR_PSIZE_MASK		0x03
/** @defgroup dma1_s7cr_psize PSIZE Peripheral data size
@{*/
/**@}*/

/** DMA1_S7CR_MINC Memory increment mode **/
#define DMA1_S7CR_MINC		(1 << 10)
/** DMA1_S7CR_PINC Peripheral increment mode **/
#define DMA1_S7CR_PINC		(1 << 9)
/** DMA1_S7CR_CIRC Circular mode **/
#define DMA1_S7CR_CIRC		(1 << 8)

#define DMA1_S7CR_DIR_SHIFT		6
#define DMA1_S7CR_DIR_MASK		0x03
/** @defgroup dma1_s7cr_dir DIR Data transfer direction
@{*/
/**@}*/

/** DMA1_S7CR_PFCTRL Peripheral flow controller **/
#define DMA1_S7CR_PFCTRL		(1 << 5)
/** DMA1_S7CR_TCIE Transfer complete interrupt enable **/
#define DMA1_S7CR_TCIE		(1 << 4)
/** DMA1_S7CR_HTIE Half transfer interrupt enable **/
#define DMA1_S7CR_HTIE		(1 << 3)
/** DMA1_S7CR_TEIE Transfer error interrupt enable **/
#define DMA1_S7CR_TEIE		(1 << 2)
/** DMA1_S7CR_DMEIE Direct mode error interrupt enable **/
#define DMA1_S7CR_DMEIE		(1 << 1)
/** DMA1_S7CR_EN Stream enable / flag stream ready when read low **/
#define DMA1_S7CR_EN		(1 << 0)

/**@}*/

/** @defgroup dma1_s7ndtr S7NDTR stream x number of data register
@{*/


#define DMA1_S7NDTR_NDT_SHIFT		0
#define DMA1_S7NDTR_NDT_MASK		0xffff
/** @defgroup dma1_s7ndtr_ndt NDT Number of data items to transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s7par S7PAR stream x peripheral address register
@{*/


#define DMA1_S7PAR_PA_SHIFT		0
#define DMA1_S7PAR_PA_MASK		0xffffffff
/** @defgroup dma1_s7par_pa PA Peripheral address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s7m0ar S7M0AR stream x memory 0 address register
@{*/


#define DMA1_S7M0AR_M0A_SHIFT		0
#define DMA1_S7M0AR_M0A_MASK		0xffffffff
/** @defgroup dma1_s7m0ar_m0a M0A Memory 0 address
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s7m1ar S7M1AR stream x memory 1 address register
@{*/


#define DMA1_S7M1AR_M1A_SHIFT		0
#define DMA1_S7M1AR_M1A_MASK		0xffffffff
/** @defgroup dma1_s7m1ar_m1a M1A Memory 1 address (used in case of Double buffer mode)
@{*/
/**@}*/


/**@}*/

/** @defgroup dma1_s7fcr S7FCR stream x FIFO control register
@{*/

/** DMA1_S7FCR_FEIE FIFO error interrupt enable **/
#define DMA1_S7FCR_FEIE		(1 << 7)

#define DMA1_S7FCR_FS_SHIFT		3
#define DMA1_S7FCR_FS_MASK		0x07
/** @defgroup dma1_s7fcr_fs FS FIFO status
@{*/
/**@}*/

/** DMA1_S7FCR_DMDIS Direct mode disable **/
#define DMA1_S7FCR_DMDIS		(1 << 2)

#define DMA1_S7FCR_FTH_SHIFT		0
#define DMA1_S7FCR_FTH_MASK		0x03
/** @defgroup dma1_s7fcr_fth FTH FIFO threshold selection
@{*/
/**@}*/


/**@}*/

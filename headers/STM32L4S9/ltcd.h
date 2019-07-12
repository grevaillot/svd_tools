#pragma once 

/* --- LTCD: Liquid crystal display controller ---------------------- */

/** @defgroup ltcd_registers Liquid crystal display controller Register
@{*/

/** LTCD_SSCR LTDC Synchronization Size Configuration Register **/
#define LTCD_SSCR			MMIO32(LTCD_BASE + 0x08)
/** LTCD_BPCR LTDC Back Porch Configuration Register **/
#define LTCD_BPCR			MMIO32(LTCD_BASE + 0x0c)
/** LTCD_AWCR LTDC Active Width Configuration Register **/
#define LTCD_AWCR			MMIO32(LTCD_BASE + 0x10)
/** LTCD_TWCR LTDC Total Width Configuration Register **/
#define LTCD_TWCR			MMIO32(LTCD_BASE + 0x14)
/** LTCD_GCR LTDC Global Control Register **/
#define LTCD_GCR			MMIO32(LTCD_BASE + 0x18)
/** LTCD_SRCR LTDC Shadow Reload Configuration Register **/
#define LTCD_SRCR			MMIO32(LTCD_BASE + 0x24)
/** LTCD_BCCR LTDC Background Color Configuration Register **/
#define LTCD_BCCR			MMIO32(LTCD_BASE + 0x2c)
/** LTCD_IER LTDC Interrupt Enable Register **/
#define LTCD_IER			MMIO32(LTCD_BASE + 0x34)
/** LTCD_ISR LTDC Interrupt Status Register **/
#define LTCD_ISR			MMIO32(LTCD_BASE + 0x38)
/** LTCD_ICR LTDC Interrupt Clear Register **/
#define LTCD_ICR			MMIO32(LTCD_BASE + 0x3c)
/** LTCD_LIPCR LTDC Line Interrupt Position Configuration Register **/
#define LTCD_LIPCR			MMIO32(LTCD_BASE + 0x40)
/** LTCD_CPSR LTDC Current Position Status Register **/
#define LTCD_CPSR			MMIO32(LTCD_BASE + 0x44)
/** LTCD_CDSR LTDC Current Display Status Register **/
#define LTCD_CDSR			MMIO32(LTCD_BASE + 0x48)
/** LTCD_L1CR LTDC Layer Control Register **/
#define LTCD_L1CR			MMIO32(LTCD_BASE + 0x84)
/** LTCD_L1WHPCR LTDC Layer Window Horizontal Position Configuration Register **/
#define LTCD_L1WHPCR			MMIO32(LTCD_BASE + 0x88)
/** LTCD_L1WVPCR LTDC Layer Window Vertical Position Configuration Register **/
#define LTCD_L1WVPCR			MMIO32(LTCD_BASE + 0x8c)
/** LTCD_L1CKCR LTDC Layer Color Keying Configuration Register **/
#define LTCD_L1CKCR			MMIO32(LTCD_BASE + 0x90)
/** LTCD_L1PFCR LTDC Layer Pixel Format Configuration Register **/
#define LTCD_L1PFCR			MMIO32(LTCD_BASE + 0x94)
/** LTCD_L1CACR LTDC Layer Constant Alpha Configuration Register **/
#define LTCD_L1CACR			MMIO32(LTCD_BASE + 0x98)
/** LTCD_L1DCCR LTDC Layer Default Color Configuration Register **/
#define LTCD_L1DCCR			MMIO32(LTCD_BASE + 0x9c)
/** LTCD_L1BFCR LTDC Layer Blending Factors Configuration Register **/
#define LTCD_L1BFCR			MMIO32(LTCD_BASE + 0xa0)
/** LTCD_L1CFBAR LTDC Layer Color Frame Buffer Address Register **/
#define LTCD_L1CFBAR			MMIO32(LTCD_BASE + 0xac)
/** LTCD_L1CFBLR LTDC Layer Color Frame Buffer Length Register **/
#define LTCD_L1CFBLR			MMIO32(LTCD_BASE + 0xb0)
/** LTCD_L1CFBLNR LTDC Layer ColorFrame Buffer Line Number Register **/
#define LTCD_L1CFBLNR			MMIO32(LTCD_BASE + 0xb4)
/** LTCD_L1CLUTWR LTDC Layerx CLUT Write Register **/
#define LTCD_L1CLUTWR			MMIO32(LTCD_BASE + 0xc4)
/** LTCD_L2CR LTDC Layer Control Register **/
#define LTCD_L2CR			MMIO32(LTCD_BASE + 0x104)
/** LTCD_L2WHPCR LTDC Layerx Window Horizontal Position Configuration Register **/
#define LTCD_L2WHPCR			MMIO32(LTCD_BASE + 0x108)
/** LTCD_L2WVPCR LTDC Layer Window Vertical Position Configuration Register **/
#define LTCD_L2WVPCR			MMIO32(LTCD_BASE + 0x10c)
/** LTCD_L2CKCR LTDC Layer Color Keying Configuration Register **/
#define LTCD_L2CKCR			MMIO32(LTCD_BASE + 0x110)
/** LTCD_L2PFCR LTDC Layer Pixel Format Configuration Register **/
#define LTCD_L2PFCR			MMIO32(LTCD_BASE + 0x114)
/** LTCD_L2CACR LTDC Layer Constant Alpha Configuration Register **/
#define LTCD_L2CACR			MMIO32(LTCD_BASE + 0x118)
/** LTCD_L2DCCR LTDC Layer Default Color Configuration Register **/
#define LTCD_L2DCCR			MMIO32(LTCD_BASE + 0x11c)
/** LTCD_L2BFCR LTDC Layer Blending Factors Configuration Register **/
#define LTCD_L2BFCR			MMIO32(LTCD_BASE + 0x124)
/** LTCD_L2CFBAR LTDC Layer Color Frame Buffer Address Register **/
#define LTCD_L2CFBAR			MMIO32(LTCD_BASE + 0x12c)
/** LTCD_L2CFBLR LTDC Layer Color Frame Buffer Length Register **/
#define LTCD_L2CFBLR			MMIO32(LTCD_BASE + 0x130)
/** LTCD_L2CFBLNR LTDC Layer ColorFrame Buffer Line Number Register **/
#define LTCD_L2CFBLNR			MMIO32(LTCD_BASE + 0x134)
/** LTCD_L2CLUTWR LTDC Layerx CLUT Write Register **/
#define LTCD_L2CLUTWR			MMIO32(LTCD_BASE + 0x144)

/**@}*/


/** @defgroup ltcd_sscr SSCR LTDC Synchronization Size Configuration Register
@{*/


#define LTCD_SSCR_HSW_SHIFT		16
#define LTCD_SSCR_HSW_MASK		0xfff
/** @defgroup ltcd_sscr_hsw HSW Horizontal Synchronization Width (in units of pixel clock period)
@{*/
/**@}*/


#define LTCD_SSCR_VSH_SHIFT		0
#define LTCD_SSCR_VSH_MASK		0x7ff
/** @defgroup ltcd_sscr_vsh VSH Vertical Synchronization Height (in units of horizontal scan line)
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_bpcr BPCR LTDC Back Porch Configuration Register
@{*/


#define LTCD_BPCR_AHBP_SHIFT		16
#define LTCD_BPCR_AHBP_MASK		0xfff
/** @defgroup ltcd_bpcr_ahbp AHBP Accumulated Horizontal back porch (in units of pixel clock period)
@{*/
/**@}*/


#define LTCD_BPCR_AVBP_SHIFT		0
#define LTCD_BPCR_AVBP_MASK		0x7ff
/** @defgroup ltcd_bpcr_avbp AVBP Accumulated Vertical back porch (in units of horizontal scan line)
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_awcr AWCR LTDC Active Width Configuration Register
@{*/


#define LTCD_AWCR_AAW_SHIFT		16
#define LTCD_AWCR_AAW_MASK		0xfff
/** @defgroup ltcd_awcr_aaw AAW Accumulated Active Width (in units of pixel clock period)
@{*/
/**@}*/


#define LTCD_AWCR_AAH_SHIFT		0
#define LTCD_AWCR_AAH_MASK		0x7ff
/** @defgroup ltcd_awcr_aah AAH Accumulated Active Height (in units of horizontal scan line)
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_twcr TWCR LTDC Total Width Configuration Register
@{*/


#define LTCD_TWCR_TOTALW_SHIFT		16
#define LTCD_TWCR_TOTALW_MASK		0xfff
/** @defgroup ltcd_twcr_totalw TOTALW Total Width (in units of pixel clock period)
@{*/
/**@}*/


#define LTCD_TWCR_TOTALH_SHIFT		0
#define LTCD_TWCR_TOTALH_MASK		0x7ff
/** @defgroup ltcd_twcr_totalh TOTALH Total Height (in units of horizontal scan line)
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_gcr GCR LTDC Global Control Register
@{*/

/** LTCD_GCR_HSPOL Horizontal Synchronization Polarity **/
#define LTCD_GCR_HSPOL		(1 << 31)
/** LTCD_GCR_VSPOL Vertical Synchronization Polarity **/
#define LTCD_GCR_VSPOL		(1 << 30)
/** LTCD_GCR_DEPOL Not Data Enable Polarity **/
#define LTCD_GCR_DEPOL		(1 << 29)
/** LTCD_GCR_PCPOL Pixel Clock Polarity **/
#define LTCD_GCR_PCPOL		(1 << 28)
/** LTCD_GCR_DEN Dither Enable **/
#define LTCD_GCR_DEN		(1 << 16)

#define LTCD_GCR_DRW_SHIFT		12
#define LTCD_GCR_DRW_MASK		0x07
/** @defgroup ltcd_gcr_drw DRW Dither Red Width
@{*/
/**@}*/


#define LTCD_GCR_DGW_SHIFT		8
#define LTCD_GCR_DGW_MASK		0x07
/** @defgroup ltcd_gcr_dgw DGW Dither Green Width
@{*/
/**@}*/


#define LTCD_GCR_DBW_SHIFT		4
#define LTCD_GCR_DBW_MASK		0x07
/** @defgroup ltcd_gcr_dbw DBW Dither Blue Width
@{*/
/**@}*/

/** LTCD_GCR_LTDCEN LCD-TFT controller enable bit **/
#define LTCD_GCR_LTDCEN		(1 << 0)

/**@}*/

/** @defgroup ltcd_srcr SRCR LTDC Shadow Reload Configuration Register
@{*/

/** LTCD_SRCR_VBR Vertical Blanking Reload **/
#define LTCD_SRCR_VBR		(1 << 1)
/** LTCD_SRCR_IMR Immediate Reload **/
#define LTCD_SRCR_IMR		(1 << 0)

/**@}*/

/** @defgroup ltcd_bccr BCCR LTDC Background Color Configuration Register
@{*/


#define LTCD_BCCR_BCRED_SHIFT		16
#define LTCD_BCCR_BCRED_MASK		0xff
/** @defgroup ltcd_bccr_bcred BCRED Background Color Red value
@{*/
/**@}*/


#define LTCD_BCCR_BCGREEN_SHIFT		8
#define LTCD_BCCR_BCGREEN_MASK		0xff
/** @defgroup ltcd_bccr_bcgreen BCGREEN Background Color Green value
@{*/
/**@}*/


#define LTCD_BCCR_BCBLUE_SHIFT		0
#define LTCD_BCCR_BCBLUE_MASK		0xff
/** @defgroup ltcd_bccr_bcblue BCBLUE Background Color Blue value
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_ier IER LTDC Interrupt Enable Register
@{*/

/** LTCD_IER_RRIE Register Reload interrupt enable **/
#define LTCD_IER_RRIE		(1 << 3)
/** LTCD_IER_TERRIE Transfer Error Interrupt Enable **/
#define LTCD_IER_TERRIE		(1 << 2)
/** LTCD_IER_FUIE FIFO Underrun Interrupt Enable **/
#define LTCD_IER_FUIE		(1 << 1)
/** LTCD_IER_LIE Line Interrupt Enable **/
#define LTCD_IER_LIE		(1 << 0)

/**@}*/

/** @defgroup ltcd_isr ISR LTDC Interrupt Status Register
@{*/

/** LTCD_ISR_RRIF Register Reload Interrupt Flag **/
#define LTCD_ISR_RRIF		(1 << 3)
/** LTCD_ISR_TERRIF Transfer Error interrupt flag **/
#define LTCD_ISR_TERRIF		(1 << 2)
/** LTCD_ISR_FUIF FIFO Underrun Interrupt flag **/
#define LTCD_ISR_FUIF		(1 << 1)
/** LTCD_ISR_LIF Line Interrupt flag **/
#define LTCD_ISR_LIF		(1 << 0)

/**@}*/

/** @defgroup ltcd_icr ICR LTDC Interrupt Clear Register
@{*/

/** LTCD_ICR_CRRIF Clears Register Reload Interrupt Flag **/
#define LTCD_ICR_CRRIF		(1 << 3)
/** LTCD_ICR_CTERRIF Clears the Transfer Error Interrupt Flag **/
#define LTCD_ICR_CTERRIF		(1 << 2)
/** LTCD_ICR_CFUIF Clears the FIFO Underrun Interrupt flag **/
#define LTCD_ICR_CFUIF		(1 << 1)
/** LTCD_ICR_CLIF Clears the Line Interrupt Flag **/
#define LTCD_ICR_CLIF		(1 << 0)

/**@}*/

/** @defgroup ltcd_lipcr LIPCR LTDC Line Interrupt Position Configuration Register
@{*/


#define LTCD_LIPCR_LIPOS_SHIFT		0
#define LTCD_LIPCR_LIPOS_MASK		0x7ff
/** @defgroup ltcd_lipcr_lipos LIPOS Line Interrupt Position
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_cpsr CPSR LTDC Current Position Status Register
@{*/


#define LTCD_CPSR_CXPOS_SHIFT		16
#define LTCD_CPSR_CXPOS_MASK		0xffff
/** @defgroup ltcd_cpsr_cxpos CXPOS Current X Position
@{*/
/**@}*/


#define LTCD_CPSR_CYPOS_SHIFT		0
#define LTCD_CPSR_CYPOS_MASK		0xffff
/** @defgroup ltcd_cpsr_cypos CYPOS Current Y Position
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_cdsr CDSR LTDC Current Display Status Register
@{*/

/** LTCD_CDSR_HSYNCS Horizontal Synchronization display Status **/
#define LTCD_CDSR_HSYNCS		(1 << 3)
/** LTCD_CDSR_VSYNCS Vertical Synchronization display Status **/
#define LTCD_CDSR_VSYNCS		(1 << 2)
/** LTCD_CDSR_HDES Horizontal Data Enable display Status **/
#define LTCD_CDSR_HDES		(1 << 1)
/** LTCD_CDSR_VDES Vertical Data Enable display Status **/
#define LTCD_CDSR_VDES		(1 << 0)

/**@}*/

/** @defgroup ltcd_l1cr L1CR LTDC Layer Control Register
@{*/

/** LTCD_L1CR_CLUTEN Color Look-Up Table Enable **/
#define LTCD_L1CR_CLUTEN		(1 << 4)
/** LTCD_L1CR_COLKEN Color Keying Enable **/
#define LTCD_L1CR_COLKEN		(1 << 1)
/** LTCD_L1CR_LEN Layer Enable **/
#define LTCD_L1CR_LEN		(1 << 0)

/**@}*/

/** @defgroup ltcd_l1whpcr L1WHPCR LTDC Layer Window Horizontal Position Configuration Register
@{*/


#define LTCD_L1WHPCR_WHSPPOS_SHIFT		16
#define LTCD_L1WHPCR_WHSPPOS_MASK		0xfff
/** @defgroup ltcd_l1whpcr_whsppos WHSPPOS Window Horizontal Stop Position
@{*/
/**@}*/


#define LTCD_L1WHPCR_WHSTPOS_SHIFT		0
#define LTCD_L1WHPCR_WHSTPOS_MASK		0xfff
/** @defgroup ltcd_l1whpcr_whstpos WHSTPOS Window Horizontal Start Position
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1wvpcr L1WVPCR LTDC Layer Window Vertical Position Configuration Register
@{*/


#define LTCD_L1WVPCR_WVSPPOS_SHIFT		16
#define LTCD_L1WVPCR_WVSPPOS_MASK		0x7ff
/** @defgroup ltcd_l1wvpcr_wvsppos WVSPPOS Window Vertical Stop Position
@{*/
/**@}*/


#define LTCD_L1WVPCR_WVSTPOS_SHIFT		0
#define LTCD_L1WVPCR_WVSTPOS_MASK		0x7ff
/** @defgroup ltcd_l1wvpcr_wvstpos WVSTPOS Window Vertical Start Position
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1ckcr L1CKCR LTDC Layer Color Keying Configuration Register
@{*/


#define LTCD_L1CKCR_CKRED_SHIFT		16
#define LTCD_L1CKCR_CKRED_MASK		0xff
/** @defgroup ltcd_l1ckcr_ckred CKRED Color Key Red value
@{*/
/**@}*/


#define LTCD_L1CKCR_CKGREEN_SHIFT		8
#define LTCD_L1CKCR_CKGREEN_MASK		0xff
/** @defgroup ltcd_l1ckcr_ckgreen CKGREEN Color Key Green value
@{*/
/**@}*/


#define LTCD_L1CKCR_CKBLUE_SHIFT		0
#define LTCD_L1CKCR_CKBLUE_MASK		0xff
/** @defgroup ltcd_l1ckcr_ckblue CKBLUE Color Key Blue value
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1pfcr L1PFCR LTDC Layer Pixel Format Configuration Register
@{*/


#define LTCD_L1PFCR_PF_SHIFT		0
#define LTCD_L1PFCR_PF_MASK		0x07
/** @defgroup ltcd_l1pfcr_pf PF Pixel Format
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1cacr L1CACR LTDC Layer Constant Alpha Configuration Register
@{*/


#define LTCD_L1CACR_CONSTA_SHIFT		0
#define LTCD_L1CACR_CONSTA_MASK		0xff
/** @defgroup ltcd_l1cacr_consta CONSTA Constant Alpha
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1dccr L1DCCR LTDC Layer Default Color Configuration Register
@{*/


#define LTCD_L1DCCR_DCALPHA_SHIFT		24
#define LTCD_L1DCCR_DCALPHA_MASK		0xff
/** @defgroup ltcd_l1dccr_dcalpha DCALPHA Default Color Alpha
@{*/
/**@}*/


#define LTCD_L1DCCR_DCRED_SHIFT		16
#define LTCD_L1DCCR_DCRED_MASK		0xff
/** @defgroup ltcd_l1dccr_dcred DCRED Default Color Red
@{*/
/**@}*/


#define LTCD_L1DCCR_DCGREEN_SHIFT		8
#define LTCD_L1DCCR_DCGREEN_MASK		0xff
/** @defgroup ltcd_l1dccr_dcgreen DCGREEN Default Color Green
@{*/
/**@}*/


#define LTCD_L1DCCR_DCBLUE_SHIFT		0
#define LTCD_L1DCCR_DCBLUE_MASK		0xff
/** @defgroup ltcd_l1dccr_dcblue DCBLUE Default Color Blue
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1bfcr L1BFCR LTDC Layer Blending Factors Configuration Register
@{*/


#define LTCD_L1BFCR_BF1_SHIFT		8
#define LTCD_L1BFCR_BF1_MASK		0x07
/** @defgroup ltcd_l1bfcr_bf1 BF1 Blending Factor 1
@{*/
/**@}*/


#define LTCD_L1BFCR_BF2_SHIFT		0
#define LTCD_L1BFCR_BF2_MASK		0x07
/** @defgroup ltcd_l1bfcr_bf2 BF2 Blending Factor 2
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1cfbar L1CFBAR LTDC Layer Color Frame Buffer Address Register
@{*/


#define LTCD_L1CFBAR_CFBADD_SHIFT		0
#define LTCD_L1CFBAR_CFBADD_MASK		0xffffffff
/** @defgroup ltcd_l1cfbar_cfbadd CFBADD Color Frame Buffer Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1cfblr L1CFBLR LTDC Layer Color Frame Buffer Length Register
@{*/


#define LTCD_L1CFBLR_CFBP_SHIFT		16
#define LTCD_L1CFBLR_CFBP_MASK		0x1fff
/** @defgroup ltcd_l1cfblr_cfbp CFBP Color Frame Buffer Pitch in bytes
@{*/
/**@}*/


#define LTCD_L1CFBLR_CFBLL_SHIFT		0
#define LTCD_L1CFBLR_CFBLL_MASK		0x1fff
/** @defgroup ltcd_l1cfblr_cfbll CFBLL Color Frame Buffer Line Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1cfblnr L1CFBLNR LTDC Layer ColorFrame Buffer Line Number Register
@{*/


#define LTCD_L1CFBLNR_CFBLNBR_SHIFT		0
#define LTCD_L1CFBLNR_CFBLNBR_MASK		0x7ff
/** @defgroup ltcd_l1cfblnr_cfblnbr CFBLNBR Frame Buffer Line Number
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1clutwr L1CLUTWR LTDC Layerx CLUT Write Register
@{*/


#define LTCD_L1CLUTWR_CLUTADD_SHIFT		24
#define LTCD_L1CLUTWR_CLUTADD_MASK		0xff
/** @defgroup ltcd_l1clutwr_clutadd CLUTADD CLUT Address
@{*/
/**@}*/


#define LTCD_L1CLUTWR_RED_SHIFT		16
#define LTCD_L1CLUTWR_RED_MASK		0xff
/** @defgroup ltcd_l1clutwr_red RED Red value
@{*/
/**@}*/


#define LTCD_L1CLUTWR_GREEN_SHIFT		8
#define LTCD_L1CLUTWR_GREEN_MASK		0xff
/** @defgroup ltcd_l1clutwr_green GREEN Green value
@{*/
/**@}*/


#define LTCD_L1CLUTWR_BLUE_SHIFT		0
#define LTCD_L1CLUTWR_BLUE_MASK		0xff
/** @defgroup ltcd_l1clutwr_blue BLUE Blue value
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2cr L2CR LTDC Layer Control Register
@{*/

/** LTCD_L2CR_CLUTEN Color Look-Up Table Enable **/
#define LTCD_L2CR_CLUTEN		(1 << 4)
/** LTCD_L2CR_COLKEN Color Keying Enable **/
#define LTCD_L2CR_COLKEN		(1 << 1)
/** LTCD_L2CR_LEN Layer Enable **/
#define LTCD_L2CR_LEN		(1 << 0)

/**@}*/

/** @defgroup ltcd_l2whpcr L2WHPCR LTDC Layerx Window Horizontal Position Configuration Register
@{*/


#define LTCD_L2WHPCR_WHSPPOS_SHIFT		16
#define LTCD_L2WHPCR_WHSPPOS_MASK		0xfff
/** @defgroup ltcd_l2whpcr_whsppos WHSPPOS Window Horizontal Stop Position
@{*/
/**@}*/


#define LTCD_L2WHPCR_WHSTPOS_SHIFT		0
#define LTCD_L2WHPCR_WHSTPOS_MASK		0xfff
/** @defgroup ltcd_l2whpcr_whstpos WHSTPOS Window Horizontal Start Position
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2wvpcr L2WVPCR LTDC Layer Window Vertical Position Configuration Register
@{*/


#define LTCD_L2WVPCR_WVSPPOS_SHIFT		16
#define LTCD_L2WVPCR_WVSPPOS_MASK		0x7ff
/** @defgroup ltcd_l2wvpcr_wvsppos WVSPPOS Window Vertical Stop Position
@{*/
/**@}*/


#define LTCD_L2WVPCR_WVSTPOS_SHIFT		0
#define LTCD_L2WVPCR_WVSTPOS_MASK		0x7ff
/** @defgroup ltcd_l2wvpcr_wvstpos WVSTPOS Window Vertical Start Position
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2ckcr L2CKCR LTDC Layer Color Keying Configuration Register
@{*/


#define LTCD_L2CKCR_CKRED_SHIFT		16
#define LTCD_L2CKCR_CKRED_MASK		0xff
/** @defgroup ltcd_l2ckcr_ckred CKRED Color Key Red value
@{*/
/**@}*/


#define LTCD_L2CKCR_CKGREEN_SHIFT		8
#define LTCD_L2CKCR_CKGREEN_MASK		0xff
/** @defgroup ltcd_l2ckcr_ckgreen CKGREEN Color Key Green value
@{*/
/**@}*/


#define LTCD_L2CKCR_CKBLUE_SHIFT		0
#define LTCD_L2CKCR_CKBLUE_MASK		0xff
/** @defgroup ltcd_l2ckcr_ckblue CKBLUE Color Key Blue value
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2pfcr L2PFCR LTDC Layer Pixel Format Configuration Register
@{*/


#define LTCD_L2PFCR_PF_SHIFT		0
#define LTCD_L2PFCR_PF_MASK		0x07
/** @defgroup ltcd_l2pfcr_pf PF Pixel Format
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2cacr L2CACR LTDC Layer Constant Alpha Configuration Register
@{*/


#define LTCD_L2CACR_CONSTA_SHIFT		0
#define LTCD_L2CACR_CONSTA_MASK		0xff
/** @defgroup ltcd_l2cacr_consta CONSTA Constant Alpha
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2dccr L2DCCR LTDC Layer Default Color Configuration Register
@{*/


#define LTCD_L2DCCR_DCALPHA_SHIFT		24
#define LTCD_L2DCCR_DCALPHA_MASK		0xff
/** @defgroup ltcd_l2dccr_dcalpha DCALPHA Default Color Alpha
@{*/
/**@}*/


#define LTCD_L2DCCR_DCRED_SHIFT		16
#define LTCD_L2DCCR_DCRED_MASK		0xff
/** @defgroup ltcd_l2dccr_dcred DCRED Default Color Red
@{*/
/**@}*/


#define LTCD_L2DCCR_DCGREEN_SHIFT		8
#define LTCD_L2DCCR_DCGREEN_MASK		0xff
/** @defgroup ltcd_l2dccr_dcgreen DCGREEN Default Color Green
@{*/
/**@}*/


#define LTCD_L2DCCR_DCBLUE_SHIFT		0
#define LTCD_L2DCCR_DCBLUE_MASK		0xff
/** @defgroup ltcd_l2dccr_dcblue DCBLUE Default Color Blue
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2bfcr L2BFCR LTDC Layer Blending Factors Configuration Register
@{*/


#define LTCD_L2BFCR_BF1_SHIFT		8
#define LTCD_L2BFCR_BF1_MASK		0x07
/** @defgroup ltcd_l2bfcr_bf1 BF1 Blending Factor 1
@{*/
/**@}*/


#define LTCD_L2BFCR_BF2_SHIFT		0
#define LTCD_L2BFCR_BF2_MASK		0x07
/** @defgroup ltcd_l2bfcr_bf2 BF2 Blending Factor 2
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2cfbar L2CFBAR LTDC Layer Color Frame Buffer Address Register
@{*/


#define LTCD_L2CFBAR_CFBADD_SHIFT		0
#define LTCD_L2CFBAR_CFBADD_MASK		0xffffffff
/** @defgroup ltcd_l2cfbar_cfbadd CFBADD Color Frame Buffer Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2cfblr L2CFBLR LTDC Layer Color Frame Buffer Length Register
@{*/


#define LTCD_L2CFBLR_CFBP_SHIFT		16
#define LTCD_L2CFBLR_CFBP_MASK		0x1fff
/** @defgroup ltcd_l2cfblr_cfbp CFBP Color Frame Buffer Pitch in bytes
@{*/
/**@}*/


#define LTCD_L2CFBLR_CFBLL_SHIFT		0
#define LTCD_L2CFBLR_CFBLL_MASK		0x1fff
/** @defgroup ltcd_l2cfblr_cfbll CFBLL Color Frame Buffer Line Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2cfblnr L2CFBLNR LTDC Layer ColorFrame Buffer Line Number Register
@{*/


#define LTCD_L2CFBLNR_CFBLNBR_SHIFT		0
#define LTCD_L2CFBLNR_CFBLNBR_MASK		0x7ff
/** @defgroup ltcd_l2cfblnr_cfblnbr CFBLNBR Frame Buffer Line Number
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2clutwr L2CLUTWR LTDC Layerx CLUT Write Register
@{*/


#define LTCD_L2CLUTWR_CLUTADD_SHIFT		24
#define LTCD_L2CLUTWR_CLUTADD_MASK		0xff
/** @defgroup ltcd_l2clutwr_clutadd CLUTADD CLUT Address
@{*/
/**@}*/


#define LTCD_L2CLUTWR_RED_SHIFT		16
#define LTCD_L2CLUTWR_RED_MASK		0xff
/** @defgroup ltcd_l2clutwr_red RED Red value
@{*/
/**@}*/


#define LTCD_L2CLUTWR_GREEN_SHIFT		8
#define LTCD_L2CLUTWR_GREEN_MASK		0xff
/** @defgroup ltcd_l2clutwr_green GREEN Green value
@{*/
/**@}*/


#define LTCD_L2CLUTWR_BLUE_SHIFT		0
#define LTCD_L2CLUTWR_BLUE_MASK		0xff
/** @defgroup ltcd_l2clutwr_blue BLUE Blue value
@{*/
/**@}*/


/**@}*/

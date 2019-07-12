#pragma once 

/* --- LTDC: LCD-TFT Controller ------------------------------------- */

/** @defgroup ltdc_registers LCD-TFT Controller Register
@{*/

/** LTDC_SSCR Synchronization Size Configuration Register **/
#define LTDC_SSCR			MMIO32(LTDC_BASE + 0x08)
/** LTDC_BPCR Back Porch Configuration Register **/
#define LTDC_BPCR			MMIO32(LTDC_BASE + 0x0c)
/** LTDC_AWCR Active Width Configuration Register **/
#define LTDC_AWCR			MMIO32(LTDC_BASE + 0x10)
/** LTDC_TWCR Total Width Configuration Register **/
#define LTDC_TWCR			MMIO32(LTDC_BASE + 0x14)
/** LTDC_GCR Global Control Register **/
#define LTDC_GCR			MMIO32(LTDC_BASE + 0x18)
/** LTDC_SRCR Shadow Reload Configuration Register **/
#define LTDC_SRCR			MMIO32(LTDC_BASE + 0x24)
/** LTDC_BCCR Background Color Configuration Register **/
#define LTDC_BCCR			MMIO32(LTDC_BASE + 0x2c)
/** LTDC_IER Interrupt Enable Register **/
#define LTDC_IER			MMIO32(LTDC_BASE + 0x34)
/** LTDC_ISR Interrupt Status Register **/
#define LTDC_ISR			MMIO32(LTDC_BASE + 0x38)
/** LTDC_ICR Interrupt Clear Register **/
#define LTDC_ICR			MMIO32(LTDC_BASE + 0x3c)
/** LTDC_LIPCR Line Interrupt Position Configuration Register **/
#define LTDC_LIPCR			MMIO32(LTDC_BASE + 0x40)
/** LTDC_CPSR Current Position Status Register **/
#define LTDC_CPSR			MMIO32(LTDC_BASE + 0x44)
/** LTDC_CDSR Current Display Status Register **/
#define LTDC_CDSR			MMIO32(LTDC_BASE + 0x48)
/** LTDC_L1CR Layerx Control Register **/
#define LTDC_L1CR			MMIO32(LTDC_BASE + 0x84)
/** LTDC_L1WHPCR Layerx Window Horizontal Position Configuration Register **/
#define LTDC_L1WHPCR			MMIO32(LTDC_BASE + 0x88)
/** LTDC_L1WVPCR Layerx Window Vertical Position Configuration Register **/
#define LTDC_L1WVPCR			MMIO32(LTDC_BASE + 0x8c)
/** LTDC_L1CKCR Layerx Color Keying Configuration Register **/
#define LTDC_L1CKCR			MMIO32(LTDC_BASE + 0x90)
/** LTDC_L1PFCR Layerx Pixel Format Configuration Register **/
#define LTDC_L1PFCR			MMIO32(LTDC_BASE + 0x94)
/** LTDC_L1CACR Layerx Constant Alpha Configuration Register **/
#define LTDC_L1CACR			MMIO32(LTDC_BASE + 0x98)
/** LTDC_L1DCCR Layerx Default Color Configuration Register **/
#define LTDC_L1DCCR			MMIO32(LTDC_BASE + 0x9c)
/** LTDC_L1BFCR Layerx Blending Factors Configuration Register **/
#define LTDC_L1BFCR			MMIO32(LTDC_BASE + 0xa0)
/** LTDC_L1CFBAR Layerx Color Frame Buffer Address Register **/
#define LTDC_L1CFBAR			MMIO32(LTDC_BASE + 0xac)
/** LTDC_L1CFBLR Layerx Color Frame Buffer Length Register **/
#define LTDC_L1CFBLR			MMIO32(LTDC_BASE + 0xb0)
/** LTDC_L1CFBLNR Layerx ColorFrame Buffer Line Number Register **/
#define LTDC_L1CFBLNR			MMIO32(LTDC_BASE + 0xb4)
/** LTDC_L1CLUTWR Layerx CLUT Write Register **/
#define LTDC_L1CLUTWR			MMIO32(LTDC_BASE + 0xc4)
/** LTDC_L2CR Layerx Control Register **/
#define LTDC_L2CR			MMIO32(LTDC_BASE + 0x104)
/** LTDC_L2WHPCR Layerx Window Horizontal Position Configuration Register **/
#define LTDC_L2WHPCR			MMIO32(LTDC_BASE + 0x108)
/** LTDC_L2WVPCR Layerx Window Vertical Position Configuration Register **/
#define LTDC_L2WVPCR			MMIO32(LTDC_BASE + 0x10c)
/** LTDC_L2CKCR Layerx Color Keying Configuration Register **/
#define LTDC_L2CKCR			MMIO32(LTDC_BASE + 0x110)
/** LTDC_L2PFCR Layerx Pixel Format Configuration Register **/
#define LTDC_L2PFCR			MMIO32(LTDC_BASE + 0x114)
/** LTDC_L2CACR Layerx Constant Alpha Configuration Register **/
#define LTDC_L2CACR			MMIO32(LTDC_BASE + 0x118)
/** LTDC_L2DCCR Layerx Default Color Configuration Register **/
#define LTDC_L2DCCR			MMIO32(LTDC_BASE + 0x11c)
/** LTDC_L2BFCR Layerx Blending Factors Configuration Register **/
#define LTDC_L2BFCR			MMIO32(LTDC_BASE + 0x120)
/** LTDC_L2CFBAR Layerx Color Frame Buffer Address Register **/
#define LTDC_L2CFBAR			MMIO32(LTDC_BASE + 0x12c)
/** LTDC_L2CFBLR Layerx Color Frame Buffer Length Register **/
#define LTDC_L2CFBLR			MMIO32(LTDC_BASE + 0x130)
/** LTDC_L2CFBLNR Layerx ColorFrame Buffer Line Number Register **/
#define LTDC_L2CFBLNR			MMIO32(LTDC_BASE + 0x134)
/** LTDC_L2CLUTWR Layerx CLUT Write Register **/
#define LTDC_L2CLUTWR			MMIO32(LTDC_BASE + 0x144)

/**@}*/


/** @defgroup ltdc_sscr SSCR Synchronization Size Configuration Register
@{*/


#define LTDC_SSCR_HSW_SHIFT		16
#define LTDC_SSCR_HSW_MASK		0x3ff
/** @defgroup ltdc_sscr_hsw HSW Horizontal Synchronization Width (in units of pixel clock period)
@{*/
/**@}*/


#define LTDC_SSCR_VSH_SHIFT		0
#define LTDC_SSCR_VSH_MASK		0x7ff
/** @defgroup ltdc_sscr_vsh VSH Vertical Synchronization Height (in units of horizontal scan line)
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_bpcr BPCR Back Porch Configuration Register
@{*/


#define LTDC_BPCR_AHBP_SHIFT		16
#define LTDC_BPCR_AHBP_MASK		0x3ff
/** @defgroup ltdc_bpcr_ahbp AHBP Accumulated Horizontal back porch (in units of pixel clock period)
@{*/
/**@}*/


#define LTDC_BPCR_AVBP_SHIFT		0
#define LTDC_BPCR_AVBP_MASK		0x7ff
/** @defgroup ltdc_bpcr_avbp AVBP Accumulated Vertical back porch (in units of horizontal scan line)
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_awcr AWCR Active Width Configuration Register
@{*/


#define LTDC_AWCR_AAV_SHIFT		16
#define LTDC_AWCR_AAV_MASK		0x3ff
/** @defgroup ltdc_awcr_aav AAV AAV
@{*/
/**@}*/


#define LTDC_AWCR_AAH_SHIFT		0
#define LTDC_AWCR_AAH_MASK		0x7ff
/** @defgroup ltdc_awcr_aah AAH Accumulated Active Height (in units of horizontal scan line)
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_twcr TWCR Total Width Configuration Register
@{*/


#define LTDC_TWCR_TOTALW_SHIFT		16
#define LTDC_TWCR_TOTALW_MASK		0x3ff
/** @defgroup ltdc_twcr_totalw TOTALW Total Width (in units of pixel clock period)
@{*/
/**@}*/


#define LTDC_TWCR_TOTALH_SHIFT		0
#define LTDC_TWCR_TOTALH_MASK		0x7ff
/** @defgroup ltdc_twcr_totalh TOTALH Total Height (in units of horizontal scan line)
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_gcr GCR Global Control Register
@{*/

/** LTDC_GCR_HSPOL Horizontal Synchronization Polarity **/
#define LTDC_GCR_HSPOL		(1 << 31)
/** LTDC_GCR_VSPOL Vertical Synchronization Polarity **/
#define LTDC_GCR_VSPOL		(1 << 30)
/** LTDC_GCR_DEPOL Data Enable Polarity **/
#define LTDC_GCR_DEPOL		(1 << 29)
/** LTDC_GCR_PCPOL Pixel Clock Polarity **/
#define LTDC_GCR_PCPOL		(1 << 28)
/** LTDC_GCR_DEN Dither Enable **/
#define LTDC_GCR_DEN		(1 << 16)

#define LTDC_GCR_DRW_SHIFT		12
#define LTDC_GCR_DRW_MASK		0x07
/** @defgroup ltdc_gcr_drw DRW Dither Red Width
@{*/
/**@}*/


#define LTDC_GCR_DGW_SHIFT		8
#define LTDC_GCR_DGW_MASK		0x07
/** @defgroup ltdc_gcr_dgw DGW Dither Green Width
@{*/
/**@}*/


#define LTDC_GCR_DBW_SHIFT		4
#define LTDC_GCR_DBW_MASK		0x07
/** @defgroup ltdc_gcr_dbw DBW Dither Blue Width
@{*/
/**@}*/

/** LTDC_GCR_LTDCEN LCD-TFT controller enable bit **/
#define LTDC_GCR_LTDCEN		(1 << 0)

/**@}*/

/** @defgroup ltdc_srcr SRCR Shadow Reload Configuration Register
@{*/

/** LTDC_SRCR_VBR Vertical Blanking Reload **/
#define LTDC_SRCR_VBR		(1 << 1)
/** LTDC_SRCR_IMR Immediate Reload **/
#define LTDC_SRCR_IMR		(1 << 0)

/**@}*/

/** @defgroup ltdc_bccr BCCR Background Color Configuration Register
@{*/


#define LTDC_BCCR_BC_SHIFT		0
#define LTDC_BCCR_BC_MASK		0xffffff
/** @defgroup ltdc_bccr_bc BC Background Color Red value
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_ier IER Interrupt Enable Register
@{*/

/** LTDC_IER_RRIE Register Reload interrupt enable **/
#define LTDC_IER_RRIE		(1 << 3)
/** LTDC_IER_TERRIE Transfer Error Interrupt Enable **/
#define LTDC_IER_TERRIE		(1 << 2)
/** LTDC_IER_FUIE FIFO Underrun Interrupt Enable **/
#define LTDC_IER_FUIE		(1 << 1)
/** LTDC_IER_LIE Line Interrupt Enable **/
#define LTDC_IER_LIE		(1 << 0)

/**@}*/

/** @defgroup ltdc_isr ISR Interrupt Status Register
@{*/

/** LTDC_ISR_RRIF Register Reload Interrupt Flag **/
#define LTDC_ISR_RRIF		(1 << 3)
/** LTDC_ISR_TERRIF Transfer Error interrupt flag **/
#define LTDC_ISR_TERRIF		(1 << 2)
/** LTDC_ISR_FUIF FIFO Underrun Interrupt flag **/
#define LTDC_ISR_FUIF		(1 << 1)
/** LTDC_ISR_LIF Line Interrupt flag **/
#define LTDC_ISR_LIF		(1 << 0)

/**@}*/

/** @defgroup ltdc_icr ICR Interrupt Clear Register
@{*/

/** LTDC_ICR_CRRIF Clears Register Reload Interrupt Flag **/
#define LTDC_ICR_CRRIF		(1 << 3)
/** LTDC_ICR_CTERRIF Clears the Transfer Error Interrupt Flag **/
#define LTDC_ICR_CTERRIF		(1 << 2)
/** LTDC_ICR_CFUIF Clears the FIFO Underrun Interrupt flag **/
#define LTDC_ICR_CFUIF		(1 << 1)
/** LTDC_ICR_CLIF Clears the Line Interrupt Flag **/
#define LTDC_ICR_CLIF		(1 << 0)

/**@}*/

/** @defgroup ltdc_lipcr LIPCR Line Interrupt Position Configuration Register
@{*/


#define LTDC_LIPCR_LIPOS_SHIFT		0
#define LTDC_LIPCR_LIPOS_MASK		0x7ff
/** @defgroup ltdc_lipcr_lipos LIPOS Line Interrupt Position
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_cpsr CPSR Current Position Status Register
@{*/


#define LTDC_CPSR_CXPOS_SHIFT		16
#define LTDC_CPSR_CXPOS_MASK		0xffff
/** @defgroup ltdc_cpsr_cxpos CXPOS Current X Position
@{*/
/**@}*/


#define LTDC_CPSR_CYPOS_SHIFT		0
#define LTDC_CPSR_CYPOS_MASK		0xffff
/** @defgroup ltdc_cpsr_cypos CYPOS Current Y Position
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_cdsr CDSR Current Display Status Register
@{*/

/** LTDC_CDSR_HSYNCS Horizontal Synchronization display Status **/
#define LTDC_CDSR_HSYNCS		(1 << 3)
/** LTDC_CDSR_VSYNCS Vertical Synchronization display Status **/
#define LTDC_CDSR_VSYNCS		(1 << 2)
/** LTDC_CDSR_HDES Horizontal Data Enable display Status **/
#define LTDC_CDSR_HDES		(1 << 1)
/** LTDC_CDSR_VDES Vertical Data Enable display Status **/
#define LTDC_CDSR_VDES		(1 << 0)

/**@}*/

/** @defgroup ltdc_l1cr L1CR Layerx Control Register
@{*/

/** LTDC_L1CR_CLUTEN Color Look-Up Table Enable **/
#define LTDC_L1CR_CLUTEN		(1 << 4)
/** LTDC_L1CR_COLKEN Color Keying Enable **/
#define LTDC_L1CR_COLKEN		(1 << 1)
/** LTDC_L1CR_LEN Layer Enable **/
#define LTDC_L1CR_LEN		(1 << 0)

/**@}*/

/** @defgroup ltdc_l1whpcr L1WHPCR Layerx Window Horizontal Position Configuration Register
@{*/


#define LTDC_L1WHPCR_WHSPPOS_SHIFT		16
#define LTDC_L1WHPCR_WHSPPOS_MASK		0xfff
/** @defgroup ltdc_l1whpcr_whsppos WHSPPOS Window Horizontal Stop Position
@{*/
/**@}*/


#define LTDC_L1WHPCR_WHSTPOS_SHIFT		0
#define LTDC_L1WHPCR_WHSTPOS_MASK		0xfff
/** @defgroup ltdc_l1whpcr_whstpos WHSTPOS Window Horizontal Start Position
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l1wvpcr L1WVPCR Layerx Window Vertical Position Configuration Register
@{*/


#define LTDC_L1WVPCR_WVSPPOS_SHIFT		16
#define LTDC_L1WVPCR_WVSPPOS_MASK		0x7ff
/** @defgroup ltdc_l1wvpcr_wvsppos WVSPPOS Window Vertical Stop Position
@{*/
/**@}*/


#define LTDC_L1WVPCR_WVSTPOS_SHIFT		0
#define LTDC_L1WVPCR_WVSTPOS_MASK		0x7ff
/** @defgroup ltdc_l1wvpcr_wvstpos WVSTPOS Window Vertical Start Position
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l1ckcr L1CKCR Layerx Color Keying Configuration Register
@{*/


#define LTDC_L1CKCR_CKRED_SHIFT		16
#define LTDC_L1CKCR_CKRED_MASK		0xff
/** @defgroup ltdc_l1ckcr_ckred CKRED Color Key Red value
@{*/
/**@}*/


#define LTDC_L1CKCR_CKGREEN_SHIFT		8
#define LTDC_L1CKCR_CKGREEN_MASK		0xff
/** @defgroup ltdc_l1ckcr_ckgreen CKGREEN Color Key Green value
@{*/
/**@}*/


#define LTDC_L1CKCR_CKBLUE_SHIFT		0
#define LTDC_L1CKCR_CKBLUE_MASK		0xff
/** @defgroup ltdc_l1ckcr_ckblue CKBLUE Color Key Blue value
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l1pfcr L1PFCR Layerx Pixel Format Configuration Register
@{*/


#define LTDC_L1PFCR_PF_SHIFT		0
#define LTDC_L1PFCR_PF_MASK		0x07
/** @defgroup ltdc_l1pfcr_pf PF Pixel Format
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l1cacr L1CACR Layerx Constant Alpha Configuration Register
@{*/


#define LTDC_L1CACR_CONSTA_SHIFT		0
#define LTDC_L1CACR_CONSTA_MASK		0xff
/** @defgroup ltdc_l1cacr_consta CONSTA Constant Alpha
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l1dccr L1DCCR Layerx Default Color Configuration Register
@{*/


#define LTDC_L1DCCR_DCALPHA_SHIFT		24
#define LTDC_L1DCCR_DCALPHA_MASK		0xff
/** @defgroup ltdc_l1dccr_dcalpha DCALPHA Default Color Alpha
@{*/
/**@}*/


#define LTDC_L1DCCR_DCRED_SHIFT		16
#define LTDC_L1DCCR_DCRED_MASK		0xff
/** @defgroup ltdc_l1dccr_dcred DCRED Default Color Red
@{*/
/**@}*/


#define LTDC_L1DCCR_DCGREEN_SHIFT		8
#define LTDC_L1DCCR_DCGREEN_MASK		0xff
/** @defgroup ltdc_l1dccr_dcgreen DCGREEN Default Color Green
@{*/
/**@}*/


#define LTDC_L1DCCR_DCBLUE_SHIFT		0
#define LTDC_L1DCCR_DCBLUE_MASK		0xff
/** @defgroup ltdc_l1dccr_dcblue DCBLUE Default Color Blue
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l1bfcr L1BFCR Layerx Blending Factors Configuration Register
@{*/


#define LTDC_L1BFCR_BF1_SHIFT		8
#define LTDC_L1BFCR_BF1_MASK		0x07
/** @defgroup ltdc_l1bfcr_bf1 BF1 Blending Factor 1
@{*/
/**@}*/


#define LTDC_L1BFCR_BF2_SHIFT		0
#define LTDC_L1BFCR_BF2_MASK		0x07
/** @defgroup ltdc_l1bfcr_bf2 BF2 Blending Factor 2
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l1cfbar L1CFBAR Layerx Color Frame Buffer Address Register
@{*/


#define LTDC_L1CFBAR_CFBADD_SHIFT		0
#define LTDC_L1CFBAR_CFBADD_MASK		0xffffffff
/** @defgroup ltdc_l1cfbar_cfbadd CFBADD Color Frame Buffer Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l1cfblr L1CFBLR Layerx Color Frame Buffer Length Register
@{*/


#define LTDC_L1CFBLR_CFBP_SHIFT		16
#define LTDC_L1CFBLR_CFBP_MASK		0x1fff
/** @defgroup ltdc_l1cfblr_cfbp CFBP Color Frame Buffer Pitch in bytes
@{*/
/**@}*/


#define LTDC_L1CFBLR_CFBLL_SHIFT		0
#define LTDC_L1CFBLR_CFBLL_MASK		0x1fff
/** @defgroup ltdc_l1cfblr_cfbll CFBLL Color Frame Buffer Line Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l1cfblnr L1CFBLNR Layerx ColorFrame Buffer Line Number Register
@{*/


#define LTDC_L1CFBLNR_CFBLNBR_SHIFT		0
#define LTDC_L1CFBLNR_CFBLNBR_MASK		0x7ff
/** @defgroup ltdc_l1cfblnr_cfblnbr CFBLNBR Frame Buffer Line Number
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l1clutwr L1CLUTWR Layerx CLUT Write Register
@{*/


#define LTDC_L1CLUTWR_CLUTADD_SHIFT		24
#define LTDC_L1CLUTWR_CLUTADD_MASK		0xff
/** @defgroup ltdc_l1clutwr_clutadd CLUTADD CLUT Address
@{*/
/**@}*/


#define LTDC_L1CLUTWR_RED_SHIFT		16
#define LTDC_L1CLUTWR_RED_MASK		0xff
/** @defgroup ltdc_l1clutwr_red RED Red value
@{*/
/**@}*/


#define LTDC_L1CLUTWR_GREEN_SHIFT		8
#define LTDC_L1CLUTWR_GREEN_MASK		0xff
/** @defgroup ltdc_l1clutwr_green GREEN Green value
@{*/
/**@}*/


#define LTDC_L1CLUTWR_BLUE_SHIFT		0
#define LTDC_L1CLUTWR_BLUE_MASK		0xff
/** @defgroup ltdc_l1clutwr_blue BLUE Blue value
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l2cr L2CR Layerx Control Register
@{*/

/** LTDC_L2CR_CLUTEN Color Look-Up Table Enable **/
#define LTDC_L2CR_CLUTEN		(1 << 4)
/** LTDC_L2CR_COLKEN Color Keying Enable **/
#define LTDC_L2CR_COLKEN		(1 << 1)
/** LTDC_L2CR_LEN Layer Enable **/
#define LTDC_L2CR_LEN		(1 << 0)

/**@}*/

/** @defgroup ltdc_l2whpcr L2WHPCR Layerx Window Horizontal Position Configuration Register
@{*/


#define LTDC_L2WHPCR_WHSPPOS_SHIFT		16
#define LTDC_L2WHPCR_WHSPPOS_MASK		0xfff
/** @defgroup ltdc_l2whpcr_whsppos WHSPPOS Window Horizontal Stop Position
@{*/
/**@}*/


#define LTDC_L2WHPCR_WHSTPOS_SHIFT		0
#define LTDC_L2WHPCR_WHSTPOS_MASK		0xfff
/** @defgroup ltdc_l2whpcr_whstpos WHSTPOS Window Horizontal Start Position
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l2wvpcr L2WVPCR Layerx Window Vertical Position Configuration Register
@{*/


#define LTDC_L2WVPCR_WVSPPOS_SHIFT		16
#define LTDC_L2WVPCR_WVSPPOS_MASK		0x7ff
/** @defgroup ltdc_l2wvpcr_wvsppos WVSPPOS Window Vertical Stop Position
@{*/
/**@}*/


#define LTDC_L2WVPCR_WVSTPOS_SHIFT		0
#define LTDC_L2WVPCR_WVSTPOS_MASK		0x7ff
/** @defgroup ltdc_l2wvpcr_wvstpos WVSTPOS Window Vertical Start Position
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l2ckcr L2CKCR Layerx Color Keying Configuration Register
@{*/


#define LTDC_L2CKCR_CKRED_SHIFT		15
#define LTDC_L2CKCR_CKRED_MASK		0x1ff
/** @defgroup ltdc_l2ckcr_ckred CKRED Color Key Red value
@{*/
/**@}*/


#define LTDC_L2CKCR_CKGREEN_SHIFT		8
#define LTDC_L2CKCR_CKGREEN_MASK		0x7f
/** @defgroup ltdc_l2ckcr_ckgreen CKGREEN Color Key Green value
@{*/
/**@}*/


#define LTDC_L2CKCR_CKBLUE_SHIFT		0
#define LTDC_L2CKCR_CKBLUE_MASK		0xff
/** @defgroup ltdc_l2ckcr_ckblue CKBLUE Color Key Blue value
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l2pfcr L2PFCR Layerx Pixel Format Configuration Register
@{*/


#define LTDC_L2PFCR_PF_SHIFT		0
#define LTDC_L2PFCR_PF_MASK		0x07
/** @defgroup ltdc_l2pfcr_pf PF Pixel Format
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l2cacr L2CACR Layerx Constant Alpha Configuration Register
@{*/


#define LTDC_L2CACR_CONSTA_SHIFT		0
#define LTDC_L2CACR_CONSTA_MASK		0xff
/** @defgroup ltdc_l2cacr_consta CONSTA Constant Alpha
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l2dccr L2DCCR Layerx Default Color Configuration Register
@{*/


#define LTDC_L2DCCR_DCALPHA_SHIFT		24
#define LTDC_L2DCCR_DCALPHA_MASK		0xff
/** @defgroup ltdc_l2dccr_dcalpha DCALPHA Default Color Alpha
@{*/
/**@}*/


#define LTDC_L2DCCR_DCRED_SHIFT		16
#define LTDC_L2DCCR_DCRED_MASK		0xff
/** @defgroup ltdc_l2dccr_dcred DCRED Default Color Red
@{*/
/**@}*/


#define LTDC_L2DCCR_DCGREEN_SHIFT		8
#define LTDC_L2DCCR_DCGREEN_MASK		0xff
/** @defgroup ltdc_l2dccr_dcgreen DCGREEN Default Color Green
@{*/
/**@}*/


#define LTDC_L2DCCR_DCBLUE_SHIFT		0
#define LTDC_L2DCCR_DCBLUE_MASK		0xff
/** @defgroup ltdc_l2dccr_dcblue DCBLUE Default Color Blue
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l2bfcr L2BFCR Layerx Blending Factors Configuration Register
@{*/


#define LTDC_L2BFCR_BF1_SHIFT		8
#define LTDC_L2BFCR_BF1_MASK		0x07
/** @defgroup ltdc_l2bfcr_bf1 BF1 Blending Factor 1
@{*/
/**@}*/


#define LTDC_L2BFCR_BF2_SHIFT		0
#define LTDC_L2BFCR_BF2_MASK		0x07
/** @defgroup ltdc_l2bfcr_bf2 BF2 Blending Factor 2
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l2cfbar L2CFBAR Layerx Color Frame Buffer Address Register
@{*/


#define LTDC_L2CFBAR_CFBADD_SHIFT		0
#define LTDC_L2CFBAR_CFBADD_MASK		0xffffffff
/** @defgroup ltdc_l2cfbar_cfbadd CFBADD Color Frame Buffer Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l2cfblr L2CFBLR Layerx Color Frame Buffer Length Register
@{*/


#define LTDC_L2CFBLR_CFBP_SHIFT		16
#define LTDC_L2CFBLR_CFBP_MASK		0x1fff
/** @defgroup ltdc_l2cfblr_cfbp CFBP Color Frame Buffer Pitch in bytes
@{*/
/**@}*/


#define LTDC_L2CFBLR_CFBLL_SHIFT		0
#define LTDC_L2CFBLR_CFBLL_MASK		0x1fff
/** @defgroup ltdc_l2cfblr_cfbll CFBLL Color Frame Buffer Line Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l2cfblnr L2CFBLNR Layerx ColorFrame Buffer Line Number Register
@{*/


#define LTDC_L2CFBLNR_CFBLNBR_SHIFT		0
#define LTDC_L2CFBLNR_CFBLNBR_MASK		0x7ff
/** @defgroup ltdc_l2cfblnr_cfblnbr CFBLNBR Frame Buffer Line Number
@{*/
/**@}*/


/**@}*/

/** @defgroup ltdc_l2clutwr L2CLUTWR Layerx CLUT Write Register
@{*/


#define LTDC_L2CLUTWR_CLUTADD_SHIFT		24
#define LTDC_L2CLUTWR_CLUTADD_MASK		0xff
/** @defgroup ltdc_l2clutwr_clutadd CLUTADD CLUT Address
@{*/
/**@}*/


#define LTDC_L2CLUTWR_RED_SHIFT		16
#define LTDC_L2CLUTWR_RED_MASK		0xff
/** @defgroup ltdc_l2clutwr_red RED Red value
@{*/
/**@}*/


#define LTDC_L2CLUTWR_GREEN_SHIFT		8
#define LTDC_L2CLUTWR_GREEN_MASK		0xff
/** @defgroup ltdc_l2clutwr_green GREEN Green value
@{*/
/**@}*/


#define LTDC_L2CLUTWR_BLUE_SHIFT		0
#define LTDC_L2CLUTWR_BLUE_MASK		0xff
/** @defgroup ltdc_l2clutwr_blue BLUE Blue value
@{*/
/**@}*/


/**@}*/

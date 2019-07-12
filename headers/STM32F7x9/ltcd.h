#pragma once 

/* --- LTCD: LCD-TFT Controller ------------------------------------- */

/** @defgroup ltcd_registers LCD-TFT Controller Register
@{*/

/** LTCD_SSCR Synchronization Size Configuration Register **/
#define LTCD_SSCR			MMIO32(LTCD_BASE + 0x08)
/** LTCD_BPCR Back Porch Configuration Register **/
#define LTCD_BPCR			MMIO32(LTCD_BASE + 0x0c)
/** LTCD_AWCR Active Width Configuration Register **/
#define LTCD_AWCR			MMIO32(LTCD_BASE + 0x10)
/** LTCD_TWCR Total Width Configuration Register **/
#define LTCD_TWCR			MMIO32(LTCD_BASE + 0x14)
/** LTCD_GCR Global Control Register **/
#define LTCD_GCR			MMIO32(LTCD_BASE + 0x18)
/** LTCD_SRCR Shadow Reload Configuration Register **/
#define LTCD_SRCR			MMIO32(LTCD_BASE + 0x24)
/** LTCD_BCCR Background Color Configuration Register **/
#define LTCD_BCCR			MMIO32(LTCD_BASE + 0x2c)
/** LTCD_IER Interrupt Enable Register **/
#define LTCD_IER			MMIO32(LTCD_BASE + 0x34)
/** LTCD_ISR Interrupt Status Register **/
#define LTCD_ISR			MMIO32(LTCD_BASE + 0x38)
/** LTCD_ICR Interrupt Clear Register **/
#define LTCD_ICR			MMIO32(LTCD_BASE + 0x3c)
/** LTCD_LIPCR Line Interrupt Position Configuration Register **/
#define LTCD_LIPCR			MMIO32(LTCD_BASE + 0x40)
/** LTCD_CPSR Current Position Status Register **/
#define LTCD_CPSR			MMIO32(LTCD_BASE + 0x44)
/** LTCD_CDSR Current Display Status Register **/
#define LTCD_CDSR			MMIO32(LTCD_BASE + 0x48)
/** LTCD_L1CR Layerx Control Register **/
#define LTCD_L1CR			MMIO32(LTCD_BASE + 0x84)
/** LTCD_L1WHPCR Layerx Window Horizontal Position Configuration Register **/
#define LTCD_L1WHPCR			MMIO32(LTCD_BASE + 0x88)
/** LTCD_L1WVPCR Layerx Window Vertical Position Configuration Register **/
#define LTCD_L1WVPCR			MMIO32(LTCD_BASE + 0x8c)
/** LTCD_L1CKCR Layerx Color Keying Configuration Register **/
#define LTCD_L1CKCR			MMIO32(LTCD_BASE + 0x90)
/** LTCD_L1PFCR Layerx Pixel Format Configuration Register **/
#define LTCD_L1PFCR			MMIO32(LTCD_BASE + 0x94)
/** LTCD_L1CACR Layerx Constant Alpha Configuration Register **/
#define LTCD_L1CACR			MMIO32(LTCD_BASE + 0x98)
/** LTCD_L1DCCR Layerx Default Color Configuration Register **/
#define LTCD_L1DCCR			MMIO32(LTCD_BASE + 0x9c)
/** LTCD_L1BFCR Layerx Blending Factors Configuration Register **/
#define LTCD_L1BFCR			MMIO32(LTCD_BASE + 0xa0)
/** LTCD_L1CFBAR Layerx Color Frame Buffer Address Register **/
#define LTCD_L1CFBAR			MMIO32(LTCD_BASE + 0xac)
/** LTCD_L1CFBLR Layerx Color Frame Buffer Length Register **/
#define LTCD_L1CFBLR			MMIO32(LTCD_BASE + 0xb0)
/** LTCD_L1CFBLNR Layerx ColorFrame Buffer Line Number Register **/
#define LTCD_L1CFBLNR			MMIO32(LTCD_BASE + 0xb4)
/** LTCD_L1CLUTWR Layerx CLUT Write Register **/
#define LTCD_L1CLUTWR			MMIO32(LTCD_BASE + 0xc4)
/** LTCD_L2CR Layerx Control Register **/
#define LTCD_L2CR			MMIO32(LTCD_BASE + 0x104)
/** LTCD_L2WHPCR Layerx Window Horizontal Position Configuration Register **/
#define LTCD_L2WHPCR			MMIO32(LTCD_BASE + 0x108)
/** LTCD_L2WVPCR Layerx Window Vertical Position Configuration Register **/
#define LTCD_L2WVPCR			MMIO32(LTCD_BASE + 0x10c)
/** LTCD_L2CKCR Layerx Color Keying Configuration Register **/
#define LTCD_L2CKCR			MMIO32(LTCD_BASE + 0x110)
/** LTCD_L2PFCR Layerx Pixel Format Configuration Register **/
#define LTCD_L2PFCR			MMIO32(LTCD_BASE + 0x114)
/** LTCD_L2CACR Layerx Constant Alpha Configuration Register **/
#define LTCD_L2CACR			MMIO32(LTCD_BASE + 0x118)
/** LTCD_L2DCCR Layerx Default Color Configuration Register **/
#define LTCD_L2DCCR			MMIO32(LTCD_BASE + 0x11c)
/** LTCD_L2BFCR Layerx Blending Factors Configuration Register **/
#define LTCD_L2BFCR			MMIO32(LTCD_BASE + 0x120)
/** LTCD_L2CFBAR Layerx Color Frame Buffer Address Register **/
#define LTCD_L2CFBAR			MMIO32(LTCD_BASE + 0x12c)
/** LTCD_L2CFBLR Layerx Color Frame Buffer Length Register **/
#define LTCD_L2CFBLR			MMIO32(LTCD_BASE + 0x130)
/** LTCD_L2CFBLNR Layerx ColorFrame Buffer Line Number Register **/
#define LTCD_L2CFBLNR			MMIO32(LTCD_BASE + 0x134)
/** LTCD_L2CLUTWR Layerx CLUT Write Register **/
#define LTCD_L2CLUTWR			MMIO32(LTCD_BASE + 0x144)

/**@}*/


/** @defgroup ltcd_sscr SSCR Synchronization Size Configuration Register
@{*/


#define LTCD_SSCR_HSW_SHIFT		16
#define LTCD_SSCR_HSW_MASK		0x3ff
/** @defgroup ltcd_sscr_hsw HSW Horizontal Synchronization Width (in units of pixel clock period)
@{*/
/**@}*/


#define LTCD_SSCR_VSH_SHIFT		0
#define LTCD_SSCR_VSH_MASK		0x7ff
/** @defgroup ltcd_sscr_vsh VSH Vertical Synchronization Height (in units of horizontal scan line)
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_bpcr BPCR Back Porch Configuration Register
@{*/


#define LTCD_BPCR_AHBP_SHIFT		16
#define LTCD_BPCR_AHBP_MASK		0x3ff
/** @defgroup ltcd_bpcr_ahbp AHBP Accumulated Horizontal back porch (in units of pixel clock period)
@{*/
/**@}*/


#define LTCD_BPCR_AVBP_SHIFT		0
#define LTCD_BPCR_AVBP_MASK		0x7ff
/** @defgroup ltcd_bpcr_avbp AVBP Accumulated Vertical back porch (in units of horizontal scan line)
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_awcr AWCR Active Width Configuration Register
@{*/


#define LTCD_AWCR_AAV_SHIFT		16
#define LTCD_AWCR_AAV_MASK		0x3ff
/** @defgroup ltcd_awcr_aav AAV AAV
@{*/
/**@}*/


#define LTCD_AWCR_AAH_SHIFT		0
#define LTCD_AWCR_AAH_MASK		0x7ff
/** @defgroup ltcd_awcr_aah AAH Accumulated Active Height (in units of horizontal scan line)
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_twcr TWCR Total Width Configuration Register
@{*/


#define LTCD_TWCR_TOTALW_SHIFT		16
#define LTCD_TWCR_TOTALW_MASK		0x3ff
/** @defgroup ltcd_twcr_totalw TOTALW Total Width (in units of pixel clock period)
@{*/
/**@}*/


#define LTCD_TWCR_TOTALH_SHIFT		0
#define LTCD_TWCR_TOTALH_MASK		0x7ff
/** @defgroup ltcd_twcr_totalh TOTALH Total Height (in units of horizontal scan line)
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_gcr GCR Global Control Register
@{*/

/** LTCD_GCR_HSPOL Horizontal Synchronization Polarity **/
#define LTCD_GCR_HSPOL		(1 << 31)
/** LTCD_GCR_VSPOL Vertical Synchronization Polarity **/
#define LTCD_GCR_VSPOL		(1 << 30)
/** LTCD_GCR_DEPOL Data Enable Polarity **/
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

/** @defgroup ltcd_srcr SRCR Shadow Reload Configuration Register
@{*/

/** LTCD_SRCR_VBR Vertical Blanking Reload **/
#define LTCD_SRCR_VBR		(1 << 1)
/** LTCD_SRCR_IMR Immediate Reload **/
#define LTCD_SRCR_IMR		(1 << 0)

/**@}*/

/** @defgroup ltcd_bccr BCCR Background Color Configuration Register
@{*/


#define LTCD_BCCR_BC_SHIFT		0
#define LTCD_BCCR_BC_MASK		0xffffff
/** @defgroup ltcd_bccr_bc BC Background Color Red value
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_ier IER Interrupt Enable Register
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

/** @defgroup ltcd_isr ISR Interrupt Status Register
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

/** @defgroup ltcd_icr ICR Interrupt Clear Register
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

/** @defgroup ltcd_lipcr LIPCR Line Interrupt Position Configuration Register
@{*/


#define LTCD_LIPCR_LIPOS_SHIFT		0
#define LTCD_LIPCR_LIPOS_MASK		0x7ff
/** @defgroup ltcd_lipcr_lipos LIPOS Line Interrupt Position
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_cpsr CPSR Current Position Status Register
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

/** @defgroup ltcd_cdsr CDSR Current Display Status Register
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

/** @defgroup ltcd_l1cr L1CR Layerx Control Register
@{*/

/** LTCD_L1CR_CLUTEN Color Look-Up Table Enable **/
#define LTCD_L1CR_CLUTEN		(1 << 4)
/** LTCD_L1CR_COLKEN Color Keying Enable **/
#define LTCD_L1CR_COLKEN		(1 << 1)
/** LTCD_L1CR_LEN Layer Enable **/
#define LTCD_L1CR_LEN		(1 << 0)

/**@}*/

/** @defgroup ltcd_l1whpcr L1WHPCR Layerx Window Horizontal Position Configuration Register
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

/** @defgroup ltcd_l1wvpcr L1WVPCR Layerx Window Vertical Position Configuration Register
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

/** @defgroup ltcd_l1ckcr L1CKCR Layerx Color Keying Configuration Register
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

/** @defgroup ltcd_l1pfcr L1PFCR Layerx Pixel Format Configuration Register
@{*/


#define LTCD_L1PFCR_PF_SHIFT		0
#define LTCD_L1PFCR_PF_MASK		0x07
/** @defgroup ltcd_l1pfcr_pf PF Pixel Format
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1cacr L1CACR Layerx Constant Alpha Configuration Register
@{*/


#define LTCD_L1CACR_CONSTA_SHIFT		0
#define LTCD_L1CACR_CONSTA_MASK		0xff
/** @defgroup ltcd_l1cacr_consta CONSTA Constant Alpha
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1dccr L1DCCR Layerx Default Color Configuration Register
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

/** @defgroup ltcd_l1bfcr L1BFCR Layerx Blending Factors Configuration Register
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

/** @defgroup ltcd_l1cfbar L1CFBAR Layerx Color Frame Buffer Address Register
@{*/


#define LTCD_L1CFBAR_CFBADD_SHIFT		0
#define LTCD_L1CFBAR_CFBADD_MASK		0xffffffff
/** @defgroup ltcd_l1cfbar_cfbadd CFBADD Color Frame Buffer Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1cfblr L1CFBLR Layerx Color Frame Buffer Length Register
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

/** @defgroup ltcd_l1cfblnr L1CFBLNR Layerx ColorFrame Buffer Line Number Register
@{*/


#define LTCD_L1CFBLNR_CFBLNBR_SHIFT		0
#define LTCD_L1CFBLNR_CFBLNBR_MASK		0x7ff
/** @defgroup ltcd_l1cfblnr_cfblnbr CFBLNBR Frame Buffer Line Number
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l1clutwr L1CLUTWR Layerx CLUT Write Register
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

/** @defgroup ltcd_l2cr L2CR Layerx Control Register
@{*/

/** LTCD_L2CR_CLUTEN Color Look-Up Table Enable **/
#define LTCD_L2CR_CLUTEN		(1 << 4)
/** LTCD_L2CR_COLKEN Color Keying Enable **/
#define LTCD_L2CR_COLKEN		(1 << 1)
/** LTCD_L2CR_LEN Layer Enable **/
#define LTCD_L2CR_LEN		(1 << 0)

/**@}*/

/** @defgroup ltcd_l2whpcr L2WHPCR Layerx Window Horizontal Position Configuration Register
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

/** @defgroup ltcd_l2wvpcr L2WVPCR Layerx Window Vertical Position Configuration Register
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

/** @defgroup ltcd_l2ckcr L2CKCR Layerx Color Keying Configuration Register
@{*/


#define LTCD_L2CKCR_CKRED_SHIFT		15
#define LTCD_L2CKCR_CKRED_MASK		0x1ff
/** @defgroup ltcd_l2ckcr_ckred CKRED Color Key Red value
@{*/
/**@}*/


#define LTCD_L2CKCR_CKGREEN_SHIFT		8
#define LTCD_L2CKCR_CKGREEN_MASK		0x7f
/** @defgroup ltcd_l2ckcr_ckgreen CKGREEN Color Key Green value
@{*/
/**@}*/


#define LTCD_L2CKCR_CKBLUE_SHIFT		0
#define LTCD_L2CKCR_CKBLUE_MASK		0xff
/** @defgroup ltcd_l2ckcr_ckblue CKBLUE Color Key Blue value
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2pfcr L2PFCR Layerx Pixel Format Configuration Register
@{*/


#define LTCD_L2PFCR_PF_SHIFT		0
#define LTCD_L2PFCR_PF_MASK		0x07
/** @defgroup ltcd_l2pfcr_pf PF Pixel Format
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2cacr L2CACR Layerx Constant Alpha Configuration Register
@{*/


#define LTCD_L2CACR_CONSTA_SHIFT		0
#define LTCD_L2CACR_CONSTA_MASK		0xff
/** @defgroup ltcd_l2cacr_consta CONSTA Constant Alpha
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2dccr L2DCCR Layerx Default Color Configuration Register
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

/** @defgroup ltcd_l2bfcr L2BFCR Layerx Blending Factors Configuration Register
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

/** @defgroup ltcd_l2cfbar L2CFBAR Layerx Color Frame Buffer Address Register
@{*/


#define LTCD_L2CFBAR_CFBADD_SHIFT		0
#define LTCD_L2CFBAR_CFBADD_MASK		0xffffffff
/** @defgroup ltcd_l2cfbar_cfbadd CFBADD Color Frame Buffer Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2cfblr L2CFBLR Layerx Color Frame Buffer Length Register
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

/** @defgroup ltcd_l2cfblnr L2CFBLNR Layerx ColorFrame Buffer Line Number Register
@{*/


#define LTCD_L2CFBLNR_CFBLNBR_SHIFT		0
#define LTCD_L2CFBLNR_CFBLNBR_MASK		0x7ff
/** @defgroup ltcd_l2cfblnr_cfblnbr CFBLNBR Frame Buffer Line Number
@{*/
/**@}*/


/**@}*/

/** @defgroup ltcd_l2clutwr L2CLUTWR Layerx CLUT Write Register
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

#pragma once 

/* --- JPEG: JPEG codec --------------------------------------------- */

/** @defgroup jpeg_registers JPEG codec Register
@{*/

/** JPEG_JPEG_CONFR0 JPEG codec configuration register 0 **/
#define JPEG_JPEG_CONFR0			MMIO32(JPEG_BASE + 0x00)
/** JPEG_JPEG_CONFR1 JPEG codec configuration register 1 **/
#define JPEG_JPEG_CONFR1			MMIO32(JPEG_BASE + 0x04)
/** JPEG_JPEG_CONFR2 JPEG codec configuration register 2 **/
#define JPEG_JPEG_CONFR2			MMIO32(JPEG_BASE + 0x08)
/** JPEG_JPEG_CONFR3 JPEG codec configuration register 3 **/
#define JPEG_JPEG_CONFR3			MMIO32(JPEG_BASE + 0x0c)
/** JPEG_JPEG_CONFR4 JPEG codec configuration register 4 **/
#define JPEG_JPEG_CONFR4			MMIO32(JPEG_BASE + 0x10)
/** JPEG_JPEG_CONFR5 JPEG codec configuration register 5 **/
#define JPEG_JPEG_CONFR5			MMIO32(JPEG_BASE + 0x14)
/** JPEG_JPEG_CONFR6 JPEG codec configuration register 6 **/
#define JPEG_JPEG_CONFR6			MMIO32(JPEG_BASE + 0x18)
/** JPEG_JPEG_CONFR7 JPEG codec configuration register 7 **/
#define JPEG_JPEG_CONFR7			MMIO32(JPEG_BASE + 0x1c)
/** JPEG_JPEG_CR JPEG control register **/
#define JPEG_JPEG_CR			MMIO32(JPEG_BASE + 0x20)
/** JPEG_JPEG_SR JPEG status register **/
#define JPEG_JPEG_SR			MMIO32(JPEG_BASE + 0x24)
/** JPEG_JPEG_CFR JPEG clear flag register **/
#define JPEG_JPEG_CFR			MMIO32(JPEG_BASE + 0x28)
/** JPEG_JPEG_DIR JPEG data input register **/
#define JPEG_JPEG_DIR			MMIO32(JPEG_BASE + 0x2c)
/** JPEG_JPEG_DOR JPEG data output register **/
#define JPEG_JPEG_DOR			MMIO32(JPEG_BASE + 0x30)

/**@}*/


/** @defgroup jpeg_jpeg_confr0 JPEGCONFR0 JPEG codec configuration register 0
@{*/

/** JPEG_JPEG_CONFR0_START Start **/
#define JPEG_JPEG_CONFR0_START		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_confr1 JPEGCONFR1 JPEG codec configuration register 1
@{*/


#define JPEG_JPEG_CONFR1_YSIZE_SHIFT		16
#define JPEG_JPEG_CONFR1_YSIZE_MASK		0xffff
/** @defgroup jpeg_jpeg_confr1_ysize YSIZE Y Size
@{*/
/**@}*/

/** JPEG_JPEG_CONFR1_HDR Header Processing **/
#define JPEG_JPEG_CONFR1_HDR		(1 << 8)

#define JPEG_JPEG_CONFR1_NS_SHIFT		6
#define JPEG_JPEG_CONFR1_NS_MASK		0x03
/** @defgroup jpeg_jpeg_confr1_ns NS Number of components for Scan
@{*/
/**@}*/


#define JPEG_JPEG_CONFR1_COLORSPACE_SHIFT		4
#define JPEG_JPEG_CONFR1_COLORSPACE_MASK		0x03
/** @defgroup jpeg_jpeg_confr1_colorspace COLORSPACE Color Space
@{*/
/**@}*/

/** JPEG_JPEG_CONFR1_DE Decoding Enable **/
#define JPEG_JPEG_CONFR1_DE		(1 << 3)

#define JPEG_JPEG_CONFR1_NF_SHIFT		0
#define JPEG_JPEG_CONFR1_NF_MASK		0x03
/** @defgroup jpeg_jpeg_confr1_nf NF Number of color components
@{*/
/**@}*/


/**@}*/

/** @defgroup jpeg_jpeg_confr2 JPEGCONFR2 JPEG codec configuration register 2
@{*/


#define JPEG_JPEG_CONFR2_NMCU_SHIFT		0
#define JPEG_JPEG_CONFR2_NMCU_MASK		0x3ffffff
/** @defgroup jpeg_jpeg_confr2_nmcu NMCU Number of MCU
@{*/
/**@}*/


/**@}*/

/** @defgroup jpeg_jpeg_confr3 JPEGCONFR3 JPEG codec configuration register 3
@{*/


#define JPEG_JPEG_CONFR3_XSIZE_SHIFT		16
#define JPEG_JPEG_CONFR3_XSIZE_MASK		0xffff
/** @defgroup jpeg_jpeg_confr3_xsize XSIZE X size
@{*/
/**@}*/


/**@}*/

/** @defgroup jpeg_jpeg_confr4 JPEGCONFR4 JPEG codec configuration register 4
@{*/


#define JPEG_JPEG_CONFR4_HSF_SHIFT		12
#define JPEG_JPEG_CONFR4_HSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confr4_hsf HSF Horizontal Sampling Factor
@{*/
/**@}*/


#define JPEG_JPEG_CONFR4_VSF_SHIFT		8
#define JPEG_JPEG_CONFR4_VSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confr4_vsf VSF Vertical Sampling Factor
@{*/
/**@}*/


#define JPEG_JPEG_CONFR4_NB_SHIFT		4
#define JPEG_JPEG_CONFR4_NB_MASK		0x0f
/** @defgroup jpeg_jpeg_confr4_nb NB Number of Block
@{*/
/**@}*/


#define JPEG_JPEG_CONFR4_QT_SHIFT		2
#define JPEG_JPEG_CONFR4_QT_MASK		0x03
/** @defgroup jpeg_jpeg_confr4_qt QT Quantization Table
@{*/
/**@}*/

/** JPEG_JPEG_CONFR4_HA Huffman AC **/
#define JPEG_JPEG_CONFR4_HA		(1 << 1)
/** JPEG_JPEG_CONFR4_HD Huffman DC **/
#define JPEG_JPEG_CONFR4_HD		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_confr5 JPEGCONFR5 JPEG codec configuration register 5
@{*/


#define JPEG_JPEG_CONFR5_HSF_SHIFT		12
#define JPEG_JPEG_CONFR5_HSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confr5_hsf HSF Horizontal Sampling Factor
@{*/
/**@}*/


#define JPEG_JPEG_CONFR5_VSF_SHIFT		8
#define JPEG_JPEG_CONFR5_VSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confr5_vsf VSF Vertical Sampling Factor
@{*/
/**@}*/


#define JPEG_JPEG_CONFR5_NB_SHIFT		4
#define JPEG_JPEG_CONFR5_NB_MASK		0x0f
/** @defgroup jpeg_jpeg_confr5_nb NB Number of Block
@{*/
/**@}*/


#define JPEG_JPEG_CONFR5_QT_SHIFT		2
#define JPEG_JPEG_CONFR5_QT_MASK		0x03
/** @defgroup jpeg_jpeg_confr5_qt QT Quantization Table
@{*/
/**@}*/

/** JPEG_JPEG_CONFR5_HA Huffman AC **/
#define JPEG_JPEG_CONFR5_HA		(1 << 1)
/** JPEG_JPEG_CONFR5_HD Huffman DC **/
#define JPEG_JPEG_CONFR5_HD		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_confr6 JPEGCONFR6 JPEG codec configuration register 6
@{*/


#define JPEG_JPEG_CONFR6_HSF_SHIFT		12
#define JPEG_JPEG_CONFR6_HSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confr6_hsf HSF Horizontal Sampling Factor
@{*/
/**@}*/


#define JPEG_JPEG_CONFR6_VSF_SHIFT		8
#define JPEG_JPEG_CONFR6_VSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confr6_vsf VSF Vertical Sampling Factor
@{*/
/**@}*/


#define JPEG_JPEG_CONFR6_NB_SHIFT		4
#define JPEG_JPEG_CONFR6_NB_MASK		0x0f
/** @defgroup jpeg_jpeg_confr6_nb NB Number of Block
@{*/
/**@}*/


#define JPEG_JPEG_CONFR6_QT_SHIFT		2
#define JPEG_JPEG_CONFR6_QT_MASK		0x03
/** @defgroup jpeg_jpeg_confr6_qt QT Quantization Table
@{*/
/**@}*/

/** JPEG_JPEG_CONFR6_HA Huffman AC **/
#define JPEG_JPEG_CONFR6_HA		(1 << 1)
/** JPEG_JPEG_CONFR6_HD Huffman DC **/
#define JPEG_JPEG_CONFR6_HD		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_confr7 JPEGCONFR7 JPEG codec configuration register 7
@{*/


#define JPEG_JPEG_CONFR7_HSF_SHIFT		12
#define JPEG_JPEG_CONFR7_HSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confr7_hsf HSF Horizontal Sampling Factor
@{*/
/**@}*/


#define JPEG_JPEG_CONFR7_VSF_SHIFT		8
#define JPEG_JPEG_CONFR7_VSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confr7_vsf VSF Vertical Sampling Factor
@{*/
/**@}*/


#define JPEG_JPEG_CONFR7_NB_SHIFT		4
#define JPEG_JPEG_CONFR7_NB_MASK		0x0f
/** @defgroup jpeg_jpeg_confr7_nb NB Number of Block
@{*/
/**@}*/


#define JPEG_JPEG_CONFR7_QT_SHIFT		2
#define JPEG_JPEG_CONFR7_QT_MASK		0x03
/** @defgroup jpeg_jpeg_confr7_qt QT Quantization Table
@{*/
/**@}*/

/** JPEG_JPEG_CONFR7_HA Huffman AC **/
#define JPEG_JPEG_CONFR7_HA		(1 << 1)
/** JPEG_JPEG_CONFR7_HD Huffman DC **/
#define JPEG_JPEG_CONFR7_HD		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_cr JPEGCR JPEG control register
@{*/

/** JPEG_JPEG_CR_OFF Output FIFO Flush **/
#define JPEG_JPEG_CR_OFF		(1 << 14)
/** JPEG_JPEG_CR_IFF Input FIFO Flush **/
#define JPEG_JPEG_CR_IFF		(1 << 13)
/** JPEG_JPEG_CR_ODMAEN Output DMA Enable **/
#define JPEG_JPEG_CR_ODMAEN		(1 << 12)
/** JPEG_JPEG_CR_IDMAEN Input DMA Enable **/
#define JPEG_JPEG_CR_IDMAEN		(1 << 11)
/** JPEG_JPEG_CR_HPDIE Header Parsing Done Interrupt Enable **/
#define JPEG_JPEG_CR_HPDIE		(1 << 6)
/** JPEG_JPEG_CR_EOCIE End of Conversion Interrupt Enable **/
#define JPEG_JPEG_CR_EOCIE		(1 << 5)
/** JPEG_JPEG_CR_OFNEIE Output FIFO Not Empty Interrupt Enable **/
#define JPEG_JPEG_CR_OFNEIE		(1 << 4)
/** JPEG_JPEG_CR_OFTIE Output FIFO Threshold Interrupt Enable **/
#define JPEG_JPEG_CR_OFTIE		(1 << 3)
/** JPEG_JPEG_CR_IFNFIE Input FIFO Not Full Interrupt Enable **/
#define JPEG_JPEG_CR_IFNFIE		(1 << 2)
/** JPEG_JPEG_CR_IFTIE Input FIFO Threshold Interrupt Enable **/
#define JPEG_JPEG_CR_IFTIE		(1 << 1)
/** JPEG_JPEG_CR_JCEN JPEG Core Enable **/
#define JPEG_JPEG_CR_JCEN		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_sr JPEGSR JPEG status register
@{*/

/** JPEG_JPEG_SR_COF Codec Operation Flag **/
#define JPEG_JPEG_SR_COF		(1 << 7)
/** JPEG_JPEG_SR_HPDF Header Parsing Done Flag **/
#define JPEG_JPEG_SR_HPDF		(1 << 6)
/** JPEG_JPEG_SR_EOCF End of Conversion Flag **/
#define JPEG_JPEG_SR_EOCF		(1 << 5)
/** JPEG_JPEG_SR_OFNEF Output FIFO Not Empty Flag **/
#define JPEG_JPEG_SR_OFNEF		(1 << 4)
/** JPEG_JPEG_SR_OFTF Output FIFO Threshold Flag **/
#define JPEG_JPEG_SR_OFTF		(1 << 3)
/** JPEG_JPEG_SR_IFNFF Input FIFO Not Full Flag **/
#define JPEG_JPEG_SR_IFNFF		(1 << 2)
/** JPEG_JPEG_SR_IFTF Input FIFO Threshold Flag **/
#define JPEG_JPEG_SR_IFTF		(1 << 1)

/**@}*/

/** @defgroup jpeg_jpeg_cfr JPEGCFR JPEG clear flag register
@{*/

/** JPEG_JPEG_CFR_CHPDF Clear Header Parsing Done Flag **/
#define JPEG_JPEG_CFR_CHPDF		(1 << 6)
/** JPEG_JPEG_CFR_CEOCF Clear End of Conversion Flag **/
#define JPEG_JPEG_CFR_CEOCF		(1 << 5)

/**@}*/

/** @defgroup jpeg_jpeg_dir JPEGDIR JPEG data input register
@{*/


#define JPEG_JPEG_DIR_DATAIN_SHIFT		0
#define JPEG_JPEG_DIR_DATAIN_MASK		0xffffffff
/** @defgroup jpeg_jpeg_dir_datain DATAIN Data Input FIFO
@{*/
/**@}*/


/**@}*/

/** @defgroup jpeg_jpeg_dor JPEGDOR JPEG data output register
@{*/


#define JPEG_JPEG_DOR_DATAOUT_SHIFT		0
#define JPEG_JPEG_DOR_DATAOUT_MASK		0xffffffff
/** @defgroup jpeg_jpeg_dor_dataout DATAOUT Data Output FIFO
@{*/
/**@}*/


/**@}*/

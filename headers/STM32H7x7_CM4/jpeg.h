#pragma once 

/* --- JPEG: JPEG --------------------------------------------------- */

/** @defgroup jpeg_registers JPEG Register
@{*/

/** JPEG_JPEG_CONFRN0 JPEG codec configuration register 4-7 **/
#define JPEG_JPEG_CONFRN0			MMIO32(JPEG_BASE + 0x00)
/** JPEG_JPEG_CONFRN1 JPEG codec configuration register 4-7 **/
#define JPEG_JPEG_CONFRN1			MMIO32(JPEG_BASE + 0x04)
/** JPEG_JPEG_CONFRN2 JPEG codec configuration register 4-7 **/
#define JPEG_JPEG_CONFRN2			MMIO32(JPEG_BASE + 0x08)
/** JPEG_JPEG_CONFRN3 JPEG codec configuration register 4-7 **/
#define JPEG_JPEG_CONFRN3			MMIO32(JPEG_BASE + 0x0c)
/** JPEG_JPEG_CONFRN4 JPEG codec configuration register 4-7 **/
#define JPEG_JPEG_CONFRN4			MMIO32(JPEG_BASE + 0x10)
/** JPEG_JPEG_CONFRN5 JPEG codec configuration register 4-7 **/
#define JPEG_JPEG_CONFRN5			MMIO32(JPEG_BASE + 0x14)
/** JPEG_JPEG_CONFRN6 JPEG codec configuration register 4-7 **/
#define JPEG_JPEG_CONFRN6			MMIO32(JPEG_BASE + 0x18)
/** JPEG_JPEG_CONFRN7 JPEG codec configuration register 4-7 **/
#define JPEG_JPEG_CONFRN7			MMIO32(JPEG_BASE + 0x1c)
/** JPEG_JPEG_CR JPEG control register **/
#define JPEG_JPEG_CR			MMIO32(JPEG_BASE + 0x30)
/** JPEG_JPEG_SR JPEG status register **/
#define JPEG_JPEG_SR			MMIO32(JPEG_BASE + 0x34)
/** JPEG_JPEG_CFR JPEG clear flag register **/
#define JPEG_JPEG_CFR			MMIO32(JPEG_BASE + 0x38)
/** JPEG_JPEG_DIR JPEG data input register **/
#define JPEG_JPEG_DIR			MMIO32(JPEG_BASE + 0x40)
/** JPEG_JPEG_DOR JPEG data output register **/
#define JPEG_JPEG_DOR			MMIO32(JPEG_BASE + 0x44)

/**@}*/


/** @defgroup jpeg_jpeg_confrn0 JPEGCONFRN0 JPEG codec configuration register 4-7
@{*/


#define JPEG_JPEG_CONFRN0_HSF_SHIFT		12
#define JPEG_JPEG_CONFRN0_HSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn0_hsf HSF Horizontal Sampling Factor Horizontal sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN0_VSF_SHIFT		8
#define JPEG_JPEG_CONFRN0_VSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn0_vsf VSF Vertical Sampling Factor Vertical sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN0_NB_SHIFT		4
#define JPEG_JPEG_CONFRN0_NB_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn0_nb NB Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN0_QT_SHIFT		2
#define JPEG_JPEG_CONFRN0_QT_MASK		0x03
/** @defgroup jpeg_jpeg_confrn0_qt QT Quantization Table Selects quantization table associated with a color component.
@{*/
/**@}*/

/** JPEG_JPEG_CONFRN0_HA Huffman AC Selects the Huffman table for encoding the AC coefficients. **/
#define JPEG_JPEG_CONFRN0_HA		(1 << 1)
/** JPEG_JPEG_CONFRN0_HD Huffman DC Selects the Huffman table for encoding the DC coefficients. **/
#define JPEG_JPEG_CONFRN0_HD		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_confrn1 JPEGCONFRN1 JPEG codec configuration register 4-7
@{*/


#define JPEG_JPEG_CONFRN1_HSF_SHIFT		12
#define JPEG_JPEG_CONFRN1_HSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn1_hsf HSF Horizontal Sampling Factor Horizontal sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN1_VSF_SHIFT		8
#define JPEG_JPEG_CONFRN1_VSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn1_vsf VSF Vertical Sampling Factor Vertical sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN1_NB_SHIFT		4
#define JPEG_JPEG_CONFRN1_NB_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn1_nb NB Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN1_QT_SHIFT		2
#define JPEG_JPEG_CONFRN1_QT_MASK		0x03
/** @defgroup jpeg_jpeg_confrn1_qt QT Quantization Table Selects quantization table associated with a color component.
@{*/
/**@}*/

/** JPEG_JPEG_CONFRN1_HA Huffman AC Selects the Huffman table for encoding the AC coefficients. **/
#define JPEG_JPEG_CONFRN1_HA		(1 << 1)
/** JPEG_JPEG_CONFRN1_HD Huffman DC Selects the Huffman table for encoding the DC coefficients. **/
#define JPEG_JPEG_CONFRN1_HD		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_confrn2 JPEGCONFRN2 JPEG codec configuration register 4-7
@{*/


#define JPEG_JPEG_CONFRN2_HSF_SHIFT		12
#define JPEG_JPEG_CONFRN2_HSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn2_hsf HSF Horizontal Sampling Factor Horizontal sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN2_VSF_SHIFT		8
#define JPEG_JPEG_CONFRN2_VSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn2_vsf VSF Vertical Sampling Factor Vertical sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN2_NB_SHIFT		4
#define JPEG_JPEG_CONFRN2_NB_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn2_nb NB Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN2_QT_SHIFT		2
#define JPEG_JPEG_CONFRN2_QT_MASK		0x03
/** @defgroup jpeg_jpeg_confrn2_qt QT Quantization Table Selects quantization table associated with a color component.
@{*/
/**@}*/

/** JPEG_JPEG_CONFRN2_HA Huffman AC Selects the Huffman table for encoding the AC coefficients. **/
#define JPEG_JPEG_CONFRN2_HA		(1 << 1)
/** JPEG_JPEG_CONFRN2_HD Huffman DC Selects the Huffman table for encoding the DC coefficients. **/
#define JPEG_JPEG_CONFRN2_HD		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_confrn3 JPEGCONFRN3 JPEG codec configuration register 4-7
@{*/


#define JPEG_JPEG_CONFRN3_HSF_SHIFT		12
#define JPEG_JPEG_CONFRN3_HSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn3_hsf HSF Horizontal Sampling Factor Horizontal sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN3_VSF_SHIFT		8
#define JPEG_JPEG_CONFRN3_VSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn3_vsf VSF Vertical Sampling Factor Vertical sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN3_NB_SHIFT		4
#define JPEG_JPEG_CONFRN3_NB_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn3_nb NB Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN3_QT_SHIFT		2
#define JPEG_JPEG_CONFRN3_QT_MASK		0x03
/** @defgroup jpeg_jpeg_confrn3_qt QT Quantization Table Selects quantization table associated with a color component.
@{*/
/**@}*/

/** JPEG_JPEG_CONFRN3_HA Huffman AC Selects the Huffman table for encoding the AC coefficients. **/
#define JPEG_JPEG_CONFRN3_HA		(1 << 1)
/** JPEG_JPEG_CONFRN3_HD Huffman DC Selects the Huffman table for encoding the DC coefficients. **/
#define JPEG_JPEG_CONFRN3_HD		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_confrn4 JPEGCONFRN4 JPEG codec configuration register 4-7
@{*/


#define JPEG_JPEG_CONFRN4_HSF_SHIFT		12
#define JPEG_JPEG_CONFRN4_HSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn4_hsf HSF Horizontal Sampling Factor Horizontal sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN4_VSF_SHIFT		8
#define JPEG_JPEG_CONFRN4_VSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn4_vsf VSF Vertical Sampling Factor Vertical sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN4_NB_SHIFT		4
#define JPEG_JPEG_CONFRN4_NB_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn4_nb NB Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN4_QT_SHIFT		2
#define JPEG_JPEG_CONFRN4_QT_MASK		0x03
/** @defgroup jpeg_jpeg_confrn4_qt QT Quantization Table Selects quantization table associated with a color component.
@{*/
/**@}*/

/** JPEG_JPEG_CONFRN4_HA Huffman AC Selects the Huffman table for encoding the AC coefficients. **/
#define JPEG_JPEG_CONFRN4_HA		(1 << 1)
/** JPEG_JPEG_CONFRN4_HD Huffman DC Selects the Huffman table for encoding the DC coefficients. **/
#define JPEG_JPEG_CONFRN4_HD		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_confrn5 JPEGCONFRN5 JPEG codec configuration register 4-7
@{*/


#define JPEG_JPEG_CONFRN5_HSF_SHIFT		12
#define JPEG_JPEG_CONFRN5_HSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn5_hsf HSF Horizontal Sampling Factor Horizontal sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN5_VSF_SHIFT		8
#define JPEG_JPEG_CONFRN5_VSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn5_vsf VSF Vertical Sampling Factor Vertical sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN5_NB_SHIFT		4
#define JPEG_JPEG_CONFRN5_NB_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn5_nb NB Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN5_QT_SHIFT		2
#define JPEG_JPEG_CONFRN5_QT_MASK		0x03
/** @defgroup jpeg_jpeg_confrn5_qt QT Quantization Table Selects quantization table associated with a color component.
@{*/
/**@}*/

/** JPEG_JPEG_CONFRN5_HA Huffman AC Selects the Huffman table for encoding the AC coefficients. **/
#define JPEG_JPEG_CONFRN5_HA		(1 << 1)
/** JPEG_JPEG_CONFRN5_HD Huffman DC Selects the Huffman table for encoding the DC coefficients. **/
#define JPEG_JPEG_CONFRN5_HD		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_confrn6 JPEGCONFRN6 JPEG codec configuration register 4-7
@{*/


#define JPEG_JPEG_CONFRN6_HSF_SHIFT		12
#define JPEG_JPEG_CONFRN6_HSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn6_hsf HSF Horizontal Sampling Factor Horizontal sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN6_VSF_SHIFT		8
#define JPEG_JPEG_CONFRN6_VSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn6_vsf VSF Vertical Sampling Factor Vertical sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN6_NB_SHIFT		4
#define JPEG_JPEG_CONFRN6_NB_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn6_nb NB Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN6_QT_SHIFT		2
#define JPEG_JPEG_CONFRN6_QT_MASK		0x03
/** @defgroup jpeg_jpeg_confrn6_qt QT Quantization Table Selects quantization table associated with a color component.
@{*/
/**@}*/

/** JPEG_JPEG_CONFRN6_HA Huffman AC Selects the Huffman table for encoding the AC coefficients. **/
#define JPEG_JPEG_CONFRN6_HA		(1 << 1)
/** JPEG_JPEG_CONFRN6_HD Huffman DC Selects the Huffman table for encoding the DC coefficients. **/
#define JPEG_JPEG_CONFRN6_HD		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_confrn7 JPEGCONFRN7 JPEG codec configuration register 4-7
@{*/


#define JPEG_JPEG_CONFRN7_HSF_SHIFT		12
#define JPEG_JPEG_CONFRN7_HSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn7_hsf HSF Horizontal Sampling Factor Horizontal sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN7_VSF_SHIFT		8
#define JPEG_JPEG_CONFRN7_VSF_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn7_vsf VSF Vertical Sampling Factor Vertical sampling factor for component i.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN7_NB_SHIFT		4
#define JPEG_JPEG_CONFRN7_NB_MASK		0x0f
/** @defgroup jpeg_jpeg_confrn7_nb NB Number of Block Number of data units minus 1 that belong to a particular color in the MCU.
@{*/
/**@}*/


#define JPEG_JPEG_CONFRN7_QT_SHIFT		2
#define JPEG_JPEG_CONFRN7_QT_MASK		0x03
/** @defgroup jpeg_jpeg_confrn7_qt QT Quantization Table Selects quantization table associated with a color component.
@{*/
/**@}*/

/** JPEG_JPEG_CONFRN7_HA Huffman AC Selects the Huffman table for encoding the AC coefficients. **/
#define JPEG_JPEG_CONFRN7_HA		(1 << 1)
/** JPEG_JPEG_CONFRN7_HD Huffman DC Selects the Huffman table for encoding the DC coefficients. **/
#define JPEG_JPEG_CONFRN7_HD		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_cr JPEGCR JPEG control register
@{*/

/** JPEG_JPEG_CR_OFF Output FIFO Flush This bit flush the output FIFO. This bit is always read as 0. **/
#define JPEG_JPEG_CR_OFF		(1 << 14)
/** JPEG_JPEG_CR_IFF Input FIFO Flush This bit flush the input FIFO. This bit is always read as 0. **/
#define JPEG_JPEG_CR_IFF		(1 << 13)
/** JPEG_JPEG_CR_HPDIE Header Parsing Done Interrupt Enable This bit enables the interrupt generation on the Header Parsing Operation. **/
#define JPEG_JPEG_CR_HPDIE		(1 << 6)
/** JPEG_JPEG_CR_EOCIE End of Conversion Interrupt Enable This bit enables the interrupt generation on the end of conversion. **/
#define JPEG_JPEG_CR_EOCIE		(1 << 5)
/** JPEG_JPEG_CR_OFNEIE Output FIFO Not Empty Interrupt Enable This bit enables the interrupt generation when output FIFO is not empty. **/
#define JPEG_JPEG_CR_OFNEIE		(1 << 4)
/** JPEG_JPEG_CR_OFTIE Output FIFO Threshold Interrupt Enable This bit enables the interrupt generation when output FIFO reach the threshold. **/
#define JPEG_JPEG_CR_OFTIE		(1 << 3)
/** JPEG_JPEG_CR_IFNFIE Input FIFO Not Full Interrupt Enable This bit enables the interrupt generation when input FIFO is not empty. **/
#define JPEG_JPEG_CR_IFNFIE		(1 << 2)
/** JPEG_JPEG_CR_IFTIE Input FIFO Threshold Interrupt Enable This bit enables the interrupt generation when input FIFO reach the threshold. **/
#define JPEG_JPEG_CR_IFTIE		(1 << 1)
/** JPEG_JPEG_CR_JCEN JPEG Core Enable Enable the JPEG codec Core. **/
#define JPEG_JPEG_CR_JCEN		(1 << 0)

/**@}*/

/** @defgroup jpeg_jpeg_sr JPEGSR JPEG status register
@{*/

/** JPEG_JPEG_SR_COF Codec Operation Flag This bit is set when when a JPEG codec operation is on going (encoding or decoding). **/
#define JPEG_JPEG_SR_COF		(1 << 7)
/** JPEG_JPEG_SR_HPDF Header Parsing Done Flag This bit is set in decode mode when the JPEG codec has finished the parsing of the headers and the internal registers have been updated. **/
#define JPEG_JPEG_SR_HPDF		(1 << 6)
/** JPEG_JPEG_SR_EOCF End of Conversion Flag This bit is set when the JPEG codec core has finished the encoding or the decoding process and than last data has been sent to the output FIFO. **/
#define JPEG_JPEG_SR_EOCF		(1 << 5)
/** JPEG_JPEG_SR_OFNEF Output FIFO Not Empty Flag This bit is set when the output FIFO is not empty (a data is available). **/
#define JPEG_JPEG_SR_OFNEF		(1 << 4)
/** JPEG_JPEG_SR_OFTF Output FIFO Threshold Flag This bit is set when the output FIFO is not empty and has reach its threshold. **/
#define JPEG_JPEG_SR_OFTF		(1 << 3)
/** JPEG_JPEG_SR_IFNFF Input FIFO Not Full Flag This bit is set when the input FIFO is not full (a data can be written). **/
#define JPEG_JPEG_SR_IFNFF		(1 << 2)
/** JPEG_JPEG_SR_IFTF Input FIFO Threshold Flag This bit is set when the input FIFO is not full and is bellow its threshold. **/
#define JPEG_JPEG_SR_IFTF		(1 << 1)

/**@}*/

/** @defgroup jpeg_jpeg_cfr JPEGCFR JPEG clear flag register
@{*/

/** JPEG_JPEG_CFR_CHPDF Clear Header Parsing Done Flag Writing 1 clears the Header Parsing Done Flag of the JPEG Status Register. **/
#define JPEG_JPEG_CFR_CHPDF		(1 << 6)
/** JPEG_JPEG_CFR_CEOCF Clear End of Conversion Flag Writing 1 clears the End of Conversion Flag of the JPEG Status Register. **/
#define JPEG_JPEG_CFR_CEOCF		(1 << 5)

/**@}*/

/** @defgroup jpeg_jpeg_dir JPEGDIR JPEG data input register
@{*/


#define JPEG_JPEG_DIR_DATAIN_SHIFT		0
#define JPEG_JPEG_DIR_DATAIN_MASK		0xffffffff
/** @defgroup jpeg_jpeg_dir_datain DATAIN Data Input FIFO Input FIFO data register.
@{*/
/**@}*/


/**@}*/

/** @defgroup jpeg_jpeg_dor JPEGDOR JPEG data output register
@{*/


#define JPEG_JPEG_DOR_DATAOUT_SHIFT		0
#define JPEG_JPEG_DOR_DATAOUT_MASK		0xffffffff
/** @defgroup jpeg_jpeg_dor_dataout DATAOUT Data Output FIFO Output FIFO data register.
@{*/
/**@}*/


/**@}*/

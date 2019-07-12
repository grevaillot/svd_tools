#pragma once 

/* --- FMAC: Filter Math Accelerator -------------------------------- */

/** @defgroup fmac_registers Filter Math Accelerator Register
@{*/

/** FMAC_X1BUFCFG FMAC X1 Buffer Configuration register **/
#define FMAC_X1BUFCFG			MMIO32(FMAC_BASE + 0x00)
/** FMAC_X2BUFCFG FMAC X2 Buffer Configuration register **/
#define FMAC_X2BUFCFG			MMIO32(FMAC_BASE + 0x04)
/** FMAC_YBUFCFG FMAC Y Buffer Configuration register **/
#define FMAC_YBUFCFG			MMIO32(FMAC_BASE + 0x08)
/** FMAC_PARAM FMAC Parameter register **/
#define FMAC_PARAM			MMIO32(FMAC_BASE + 0x0c)
/** FMAC_CR FMAC Control register **/
#define FMAC_CR			MMIO32(FMAC_BASE + 0x10)
/** FMAC_SR FMAC Status register **/
#define FMAC_SR			MMIO32(FMAC_BASE + 0x14)
/** FMAC_WDATA FMAC Write Data register **/
#define FMAC_WDATA			MMIO32(FMAC_BASE + 0x18)
/** FMAC_RDATA FMAC Read Data register **/
#define FMAC_RDATA			MMIO32(FMAC_BASE + 0x1c)

/**@}*/


/** @defgroup fmac_x1bufcfg X1BUFCFG FMAC X1 Buffer Configuration register
@{*/


#define FMAC_X1BUFCFG_FULL_WM_SHIFT		24
#define FMAC_X1BUFCFG_FULL_WM_MASK		0x03
/** @defgroup fmac_x1bufcfg_full_wm FULLWM FULL_WM
@{*/
/**@}*/


#define FMAC_X1BUFCFG_X1_BUF_SIZE_SHIFT		8
#define FMAC_X1BUFCFG_X1_BUF_SIZE_MASK		0xff
/** @defgroup fmac_x1bufcfg_x1_buf_size X1BUFSIZE X1_BUF_SIZE
@{*/
/**@}*/


#define FMAC_X1BUFCFG_X1_BASE_SHIFT		0
#define FMAC_X1BUFCFG_X1_BASE_MASK		0xff
/** @defgroup fmac_x1bufcfg_x1_base X1BASE X1_BASE
@{*/
/**@}*/


/**@}*/

/** @defgroup fmac_x2bufcfg X2BUFCFG FMAC X2 Buffer Configuration register
@{*/


#define FMAC_X2BUFCFG_X2_BUF_SIZE_SHIFT		8
#define FMAC_X2BUFCFG_X2_BUF_SIZE_MASK		0xff
/** @defgroup fmac_x2bufcfg_x2_buf_size X2BUFSIZE X1_BUF_SIZE
@{*/
/**@}*/


#define FMAC_X2BUFCFG_X2_BASE_SHIFT		0
#define FMAC_X2BUFCFG_X2_BASE_MASK		0xff
/** @defgroup fmac_x2bufcfg_x2_base X2BASE X1_BASE
@{*/
/**@}*/


/**@}*/

/** @defgroup fmac_ybufcfg YBUFCFG FMAC Y Buffer Configuration register
@{*/


#define FMAC_YBUFCFG_EMPTY_WM_SHIFT		24
#define FMAC_YBUFCFG_EMPTY_WM_MASK		0x03
/** @defgroup fmac_ybufcfg_empty_wm EMPTYWM EMPTY_WM
@{*/
/**@}*/


#define FMAC_YBUFCFG_Y_BUF_SIZE_SHIFT		8
#define FMAC_YBUFCFG_Y_BUF_SIZE_MASK		0xff
/** @defgroup fmac_ybufcfg_y_buf_size YBUFSIZE X1_BUF_SIZE
@{*/
/**@}*/


#define FMAC_YBUFCFG_Y_BASE_SHIFT		0
#define FMAC_YBUFCFG_Y_BASE_MASK		0xff
/** @defgroup fmac_ybufcfg_y_base YBASE X1_BASE
@{*/
/**@}*/


/**@}*/

/** @defgroup fmac_param PARAM FMAC Parameter register
@{*/

/** FMAC_PARAM_START START **/
#define FMAC_PARAM_START		(1 << 31)

#define FMAC_PARAM_FUNC_SHIFT		24
#define FMAC_PARAM_FUNC_MASK		0x7f
/** @defgroup fmac_param_func FUNC FUNC
@{*/
/**@}*/


#define FMAC_PARAM_R_SHIFT		16
#define FMAC_PARAM_R_MASK		0xff
/** @defgroup fmac_param_r R R
@{*/
/**@}*/


#define FMAC_PARAM_Q_SHIFT		8
#define FMAC_PARAM_Q_MASK		0xff
/** @defgroup fmac_param_q Q Q
@{*/
/**@}*/


#define FMAC_PARAM_P_SHIFT		0
#define FMAC_PARAM_P_MASK		0xff
/** @defgroup fmac_param_p P P
@{*/
/**@}*/


/**@}*/

/** @defgroup fmac_cr CR FMAC Control register
@{*/

/** FMAC_CR_RESET RESET **/
#define FMAC_CR_RESET		(1 << 16)
/** FMAC_CR_CLIPEN CLIPEN **/
#define FMAC_CR_CLIPEN		(1 << 15)
/** FMAC_CR_DMAWEN DMAWEN **/
#define FMAC_CR_DMAWEN		(1 << 9)
/** FMAC_CR_DMAREN DMAREN **/
#define FMAC_CR_DMAREN		(1 << 8)
/** FMAC_CR_SATIEN SATIEN **/
#define FMAC_CR_SATIEN		(1 << 4)
/** FMAC_CR_UNFLIEN UNFLIEN **/
#define FMAC_CR_UNFLIEN		(1 << 3)
/** FMAC_CR_OVFLIEN OVFLIEN **/
#define FMAC_CR_OVFLIEN		(1 << 2)
/** FMAC_CR_WIEN WIEN **/
#define FMAC_CR_WIEN		(1 << 1)
/** FMAC_CR_RIEN RIEN **/
#define FMAC_CR_RIEN		(1 << 0)

/**@}*/

/** @defgroup fmac_sr SR FMAC Status register
@{*/

/** FMAC_SR_SAT SAT **/
#define FMAC_SR_SAT		(1 << 10)
/** FMAC_SR_UNFL UNFL **/
#define FMAC_SR_UNFL		(1 << 9)
/** FMAC_SR_OVFL OVFL **/
#define FMAC_SR_OVFL		(1 << 8)
/** FMAC_SR_X1FULL X1FULL **/
#define FMAC_SR_X1FULL		(1 << 1)
/** FMAC_SR_YEMPTY YEMPTY **/
#define FMAC_SR_YEMPTY		(1 << 0)

/**@}*/

/** @defgroup fmac_wdata WDATA FMAC Write Data register
@{*/


#define FMAC_WDATA_WDATA_SHIFT		0
#define FMAC_WDATA_WDATA_MASK		0xffff
/** @defgroup fmac_wdata_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup fmac_rdata RDATA FMAC Read Data register
@{*/


#define FMAC_RDATA_RDATA_SHIFT		0
#define FMAC_RDATA_RDATA_MASK		0xffff
/** @defgroup fmac_rdata_rdata RDATA RDATA
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- VREFBUF: Voltage reference buffer ---------------------------- */

/** @defgroup vrefbuf_registers Voltage reference buffer Register
@{*/

/** VREFBUF_VREFBUF_CSR VREF_BUF Control and Status Register **/
#define VREFBUF_VREFBUF_CSR			MMIO32(VREFBUF_BASE + 0x00)
/** VREFBUF_VREFBUF_CCR VREF_BUF Calibration Control Register **/
#define VREFBUF_VREFBUF_CCR			MMIO32(VREFBUF_BASE + 0x04)

/**@}*/


/** @defgroup vrefbuf_vrefbuf_csr VREFBUFCSR VREF_BUF Control and Status Register
@{*/


#define VREFBUF_VREFBUF_CSR_VRS_SHIFT		4
#define VREFBUF_VREFBUF_CSR_VRS_MASK		0x03
/** @defgroup vrefbuf_vrefbuf_csr_vrs VRS Voltage reference scale
@{*/
/**@}*/

/** VREFBUF_VREFBUF_CSR_VRR Voltage reference buffer ready **/
#define VREFBUF_VREFBUF_CSR_VRR		(1 << 3)
/** VREFBUF_VREFBUF_CSR_HIZ High impedence mode for the VREF_BUF **/
#define VREFBUF_VREFBUF_CSR_HIZ		(1 << 1)
/** VREFBUF_VREFBUF_CSR_ENVR Enable Voltage Reference **/
#define VREFBUF_VREFBUF_CSR_ENVR		(1 << 0)

/**@}*/

/** @defgroup vrefbuf_vrefbuf_ccr VREFBUFCCR VREF_BUF Calibration Control Register
@{*/


#define VREFBUF_VREFBUF_CCR_TRIM_SHIFT		0
#define VREFBUF_VREFBUF_CCR_TRIM_MASK		0x3f
/** @defgroup vrefbuf_vrefbuf_ccr_trim TRIM Trimming code
@{*/
/**@}*/


/**@}*/

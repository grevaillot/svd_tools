#pragma once 

/* --- VREFBUF: Voltage reference buffer ---------------------------- */

/** @defgroup vrefbuf_registers Voltage reference buffer Register
@{*/

/** VREFBUF_CSR VREF control and status register **/
#define VREFBUF_CSR			MMIO32(VREFBUF_BASE + 0x00)
/** VREFBUF_CCR calibration control register **/
#define VREFBUF_CCR			MMIO32(VREFBUF_BASE + 0x04)

/**@}*/


/** @defgroup vrefbuf_csr CSR VREF control and status register
@{*/

/** VREFBUF_CSR_VRR Voltage reference buffer ready **/
#define VREFBUF_CSR_VRR		(1 << 3)
/** VREFBUF_CSR_VRS Voltage reference scale **/
#define VREFBUF_CSR_VRS		(1 << 2)
/** VREFBUF_CSR_HIZ High impedance mode **/
#define VREFBUF_CSR_HIZ		(1 << 1)
/** VREFBUF_CSR_ENVR Voltage reference buffer enable **/
#define VREFBUF_CSR_ENVR		(1 << 0)

/**@}*/

/** @defgroup vrefbuf_ccr CCR calibration control register
@{*/


#define VREFBUF_CCR_TRIM_SHIFT		0
#define VREFBUF_CCR_TRIM_MASK		0x3f
/** @defgroup vrefbuf_ccr_trim TRIM Trimming code
@{*/
/**@}*/


/**@}*/

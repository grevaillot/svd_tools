#pragma once 

/* --- CORDIC: CORDIC Co-processor ---------------------------------- */

/** @defgroup cordic_registers CORDIC Co-processor Register
@{*/

/** CORDIC_CSR CORDIC Control Status register **/
#define CORDIC_CSR			MMIO32(CORDIC_BASE + 0x00)
/** CORDIC_WDATA FMAC Write Data register **/
#define CORDIC_WDATA			MMIO32(CORDIC_BASE + 0x04)
/** CORDIC_RDATA FMAC Read Data register **/
#define CORDIC_RDATA			MMIO32(CORDIC_BASE + 0x08)

/**@}*/


/** @defgroup cordic_csr CSR CORDIC Control Status register
@{*/

/** CORDIC_CSR_RRDY RRDY **/
#define CORDIC_CSR_RRDY		(1 << 31)
/** CORDIC_CSR_ARGSIZE ARGSIZE **/
#define CORDIC_CSR_ARGSIZE		(1 << 22)
/** CORDIC_CSR_RESSIZE RESSIZE **/
#define CORDIC_CSR_RESSIZE		(1 << 21)
/** CORDIC_CSR_NARGS NARGS **/
#define CORDIC_CSR_NARGS		(1 << 20)
/** CORDIC_CSR_NRES NRES **/
#define CORDIC_CSR_NRES		(1 << 19)
/** CORDIC_CSR_DMAWEN DMAWEN **/
#define CORDIC_CSR_DMAWEN		(1 << 18)
/** CORDIC_CSR_DMAREN DMAREN **/
#define CORDIC_CSR_DMAREN		(1 << 17)
/** CORDIC_CSR_IEN IEN **/
#define CORDIC_CSR_IEN		(1 << 16)

#define CORDIC_CSR_SCALE_SHIFT		8
#define CORDIC_CSR_SCALE_MASK		0x07
/** @defgroup cordic_csr_scale SCALE SCALE
@{*/
/**@}*/


#define CORDIC_CSR_PRECISION_SHIFT		4
#define CORDIC_CSR_PRECISION_MASK		0x0f
/** @defgroup cordic_csr_precision PRECISION PRECISION
@{*/
/**@}*/


#define CORDIC_CSR_FUNC_SHIFT		0
#define CORDIC_CSR_FUNC_MASK		0x0f
/** @defgroup cordic_csr_func FUNC FUNC
@{*/
/**@}*/


/**@}*/

/** @defgroup cordic_wdata WDATA FMAC Write Data register
@{*/


#define CORDIC_WDATA_ARG_SHIFT		0
#define CORDIC_WDATA_ARG_MASK		0xffffffff
/** @defgroup cordic_wdata_arg ARG ARG
@{*/
/**@}*/


/**@}*/

/** @defgroup cordic_rdata RDATA FMAC Read Data register
@{*/


#define CORDIC_RDATA_RES_SHIFT		0
#define CORDIC_RDATA_RES_MASK		0xffffffff
/** @defgroup cordic_rdata_res RES RES
@{*/
/**@}*/


/**@}*/

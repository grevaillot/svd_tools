#pragma once 

/* --- RAMECC3: ECC controller is associated to each RAM area ------- */

/** @defgroup ramecc3_registers ECC controller is associated to each RAM
      area Register
@{*/

/** RAMECC3_IER RAMECC interrupt enable register **/
#define RAMECC3_IER			MMIO32(RAMECC3_BASE + 0x00)
/** RAMECC3_M1CR RAMECC monitor x configuration register **/
#define RAMECC3_M1CR			MMIO32(RAMECC3_BASE + 0x20)
/** RAMECC3_M1SR RAMECC monitor x status register **/
#define RAMECC3_M1SR			MMIO32(RAMECC3_BASE + 0x24)
/** RAMECC3_M1FAR RAMECC monitor x failing address register **/
#define RAMECC3_M1FAR			MMIO32(RAMECC3_BASE + 0x28)
/** RAMECC3_M1FDRL RAMECC monitor x failing data low register **/
#define RAMECC3_M1FDRL			MMIO32(RAMECC3_BASE + 0x2c)
/** RAMECC3_M1FDRH RAMECC monitor x failing data high register **/
#define RAMECC3_M1FDRH			MMIO32(RAMECC3_BASE + 0x30)
/** RAMECC3_M1FECR RAMECC monitor x failing ECC error code register **/
#define RAMECC3_M1FECR			MMIO32(RAMECC3_BASE + 0x34)
/** RAMECC3_M2CR RAMECC monitor x configuration register **/
#define RAMECC3_M2CR			MMIO32(RAMECC3_BASE + 0x40)
/** RAMECC3_M2SR RAMECC monitor x status register **/
#define RAMECC3_M2SR			MMIO32(RAMECC3_BASE + 0x44)
/** RAMECC3_M2FAR RAMECC monitor x failing address register **/
#define RAMECC3_M2FAR			MMIO32(RAMECC3_BASE + 0x48)
/** RAMECC3_M2FDRL RAMECC monitor x failing data low register **/
#define RAMECC3_M2FDRL			MMIO32(RAMECC3_BASE + 0x4c)
/** RAMECC3_M2FDRH RAMECC monitor x failing data high register **/
#define RAMECC3_M2FDRH			MMIO32(RAMECC3_BASE + 0x50)
/** RAMECC3_M2FECR RAMECC monitor x failing ECC error code register **/
#define RAMECC3_M2FECR			MMIO32(RAMECC3_BASE + 0x58)

/**@}*/


/** @defgroup ramecc3_ier IER RAMECC interrupt enable register
@{*/

/** RAMECC3_IER_GECCDEBWIE Global ECC double error on byte write (BW) interrupt enable **/
#define RAMECC3_IER_GECCDEBWIE		(1 << 3)
/** RAMECC3_IER_GECCDEIE Global ECC double error interrupt enable **/
#define RAMECC3_IER_GECCDEIE		(1 << 2)
/** RAMECC3_IER_GECCSEIE_ Global ECC single error interrupt enable **/
#define RAMECC3_IER_GECCSEIE_		(1 << 1)
/** RAMECC3_IER_GIE Global interrupt enable **/
#define RAMECC3_IER_GIE		(1 << 0)

/**@}*/

/** @defgroup ramecc3_m1cr M1CR RAMECC monitor x configuration register
@{*/

/** RAMECC3_M1CR_ECCELEN ECC error latching enable **/
#define RAMECC3_M1CR_ECCELEN		(1 << 5)
/** RAMECC3_M1CR_ECCDEBWIE ECC double error on byte write (BW) interrupt enable **/
#define RAMECC3_M1CR_ECCDEBWIE		(1 << 4)
/** RAMECC3_M1CR_ECCDEIE ECC double error interrupt enable **/
#define RAMECC3_M1CR_ECCDEIE		(1 << 3)
/** RAMECC3_M1CR_ECCSEIE ECC single error interrupt enable **/
#define RAMECC3_M1CR_ECCSEIE		(1 << 2)

/**@}*/

/** @defgroup ramecc3_m1sr M1SR RAMECC monitor x status register
@{*/

/** RAMECC3_M1SR_DEBWDF ECC double error on byte write (BW) detected flag **/
#define RAMECC3_M1SR_DEBWDF		(1 << 2)
/** RAMECC3_M1SR_DEDF ECC double error detected flag **/
#define RAMECC3_M1SR_DEDF		(1 << 1)
/** RAMECC3_M1SR_SEDCF ECC single error detected and corrected flag **/
#define RAMECC3_M1SR_SEDCF		(1 << 0)

/**@}*/

/** @defgroup ramecc3_m1far M1FAR RAMECC monitor x failing address register
@{*/


#define RAMECC3_M1FAR_FADD_SHIFT		0
#define RAMECC3_M1FAR_FADD_MASK		0xffffffff
/** @defgroup ramecc3_m1far_fadd FADD ECC error failing address
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc3_m1fdrl M1FDRL RAMECC monitor x failing data low register
@{*/


#define RAMECC3_M1FDRL_FDATAL_SHIFT		0
#define RAMECC3_M1FDRL_FDATAL_MASK		0xffffffff
/** @defgroup ramecc3_m1fdrl_fdatal FDATAL Failing data low
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc3_m1fdrh M1FDRH RAMECC monitor x failing data high register
@{*/


#define RAMECC3_M1FDRH_FDATAH_SHIFT		0
#define RAMECC3_M1FDRH_FDATAH_MASK		0xffffffff
/** @defgroup ramecc3_m1fdrh_fdatah FDATAH Failing data high (64-bit memory)
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc3_m1fecr M1FECR RAMECC monitor x failing ECC error code register
@{*/


#define RAMECC3_M1FECR_FEC_SHIFT		0
#define RAMECC3_M1FECR_FEC_MASK		0xffffffff
/** @defgroup ramecc3_m1fecr_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc3_m2cr M2CR RAMECC monitor x configuration register
@{*/

/** RAMECC3_M2CR_ECCELEN ECC error latching enable **/
#define RAMECC3_M2CR_ECCELEN		(1 << 5)
/** RAMECC3_M2CR_ECCDEBWIE ECC double error on byte write (BW) interrupt enable **/
#define RAMECC3_M2CR_ECCDEBWIE		(1 << 4)
/** RAMECC3_M2CR_ECCDEIE ECC double error interrupt enable **/
#define RAMECC3_M2CR_ECCDEIE		(1 << 3)
/** RAMECC3_M2CR_ECCSEIE ECC single error interrupt enable **/
#define RAMECC3_M2CR_ECCSEIE		(1 << 2)

/**@}*/

/** @defgroup ramecc3_m2sr M2SR RAMECC monitor x status register
@{*/

/** RAMECC3_M2SR_DEBWDF ECC double error on byte write (BW) detected flag **/
#define RAMECC3_M2SR_DEBWDF		(1 << 2)
/** RAMECC3_M2SR_DEDF ECC double error detected flag **/
#define RAMECC3_M2SR_DEDF		(1 << 1)
/** RAMECC3_M2SR_SEDCF ECC single error detected and corrected flag **/
#define RAMECC3_M2SR_SEDCF		(1 << 0)

/**@}*/

/** @defgroup ramecc3_m2far M2FAR RAMECC monitor x failing address register
@{*/


#define RAMECC3_M2FAR_FADD_SHIFT		0
#define RAMECC3_M2FAR_FADD_MASK		0xffffffff
/** @defgroup ramecc3_m2far_fadd FADD ECC error failing address
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc3_m2fdrl M2FDRL RAMECC monitor x failing data low register
@{*/


#define RAMECC3_M2FDRL_FDATAL_SHIFT		0
#define RAMECC3_M2FDRL_FDATAL_MASK		0xffffffff
/** @defgroup ramecc3_m2fdrl_fdatal FDATAL Failing data low
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc3_m2fdrh M2FDRH RAMECC monitor x failing data high register
@{*/


#define RAMECC3_M2FDRH_FDATAH_SHIFT		0
#define RAMECC3_M2FDRH_FDATAH_MASK		0xffffffff
/** @defgroup ramecc3_m2fdrh_fdatah FDATAH Failing data high (64-bit memory)
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc3_m2fecr M2FECR RAMECC monitor x failing ECC error code register
@{*/


#define RAMECC3_M2FECR_FEC_SHIFT		0
#define RAMECC3_M2FECR_FEC_MASK		0xffffffff
/** @defgroup ramecc3_m2fecr_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

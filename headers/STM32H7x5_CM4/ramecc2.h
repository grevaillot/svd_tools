#pragma once 

/* --- RAMECC2: ECC controller is associated to each RAM area ------- */

/** @defgroup ramecc2_registers ECC controller is associated to each RAM
      area Register
@{*/

/** RAMECC2_IER RAMECC interrupt enable register **/
#define RAMECC2_IER			MMIO32(RAMECC2_BASE + 0x00)
/** RAMECC2_M1CR RAMECC monitor x configuration register **/
#define RAMECC2_M1CR			MMIO32(RAMECC2_BASE + 0x20)
/** RAMECC2_M1SR RAMECC monitor x status register **/
#define RAMECC2_M1SR			MMIO32(RAMECC2_BASE + 0x24)
/** RAMECC2_M1FAR RAMECC monitor x failing address register **/
#define RAMECC2_M1FAR			MMIO32(RAMECC2_BASE + 0x28)
/** RAMECC2_M1FDRL RAMECC monitor x failing data low register **/
#define RAMECC2_M1FDRL			MMIO32(RAMECC2_BASE + 0x2c)
/** RAMECC2_M1FDRH RAMECC monitor x failing data high register **/
#define RAMECC2_M1FDRH			MMIO32(RAMECC2_BASE + 0x30)
/** RAMECC2_M1FECR RAMECC monitor x failing ECC error code register **/
#define RAMECC2_M1FECR			MMIO32(RAMECC2_BASE + 0x34)
/** RAMECC2_M2CR RAMECC monitor x configuration register **/
#define RAMECC2_M2CR			MMIO32(RAMECC2_BASE + 0x40)
/** RAMECC2_M2SR RAMECC monitor x status register **/
#define RAMECC2_M2SR			MMIO32(RAMECC2_BASE + 0x44)
/** RAMECC2_M2FAR RAMECC monitor x failing address register **/
#define RAMECC2_M2FAR			MMIO32(RAMECC2_BASE + 0x48)
/** RAMECC2_M2FDRL RAMECC monitor x failing data low register **/
#define RAMECC2_M2FDRL			MMIO32(RAMECC2_BASE + 0x4c)
/** RAMECC2_M2FDRH RAMECC monitor x failing data high register **/
#define RAMECC2_M2FDRH			MMIO32(RAMECC2_BASE + 0x50)
/** RAMECC2_M2FECR RAMECC monitor x failing ECC error code register **/
#define RAMECC2_M2FECR			MMIO32(RAMECC2_BASE + 0x58)
/** RAMECC2_M3CR RAMECC monitor x configuration register **/
#define RAMECC2_M3CR			MMIO32(RAMECC2_BASE + 0x60)
/** RAMECC2_M3SR RAMECC monitor x status register **/
#define RAMECC2_M3SR			MMIO32(RAMECC2_BASE + 0x64)
/** RAMECC2_M3FAR RAMECC monitor x failing address register **/
#define RAMECC2_M3FAR			MMIO32(RAMECC2_BASE + 0x68)
/** RAMECC2_M3FDRL RAMECC monitor x failing data low register **/
#define RAMECC2_M3FDRL			MMIO32(RAMECC2_BASE + 0x6c)
/** RAMECC2_M3FDRH RAMECC monitor x failing data high register **/
#define RAMECC2_M3FDRH			MMIO32(RAMECC2_BASE + 0x70)
/** RAMECC2_M3FECR RAMECC monitor x failing ECC error code register **/
#define RAMECC2_M3FECR			MMIO32(RAMECC2_BASE + 0x7c)
/** RAMECC2_M4CR RAMECC monitor x configuration register **/
#define RAMECC2_M4CR			MMIO32(RAMECC2_BASE + 0x80)
/** RAMECC2_M4SR RAMECC monitor x status register **/
#define RAMECC2_M4SR			MMIO32(RAMECC2_BASE + 0x84)
/** RAMECC2_M4FAR RAMECC monitor x failing address register **/
#define RAMECC2_M4FAR			MMIO32(RAMECC2_BASE + 0x88)
/** RAMECC2_M4FDRL RAMECC monitor x failing data low register **/
#define RAMECC2_M4FDRL			MMIO32(RAMECC2_BASE + 0x8c)
/** RAMECC2_M4FDRH RAMECC monitor x failing data high register **/
#define RAMECC2_M4FDRH			MMIO32(RAMECC2_BASE + 0x90)
/** RAMECC2_M4FECR RAMECC monitor x failing ECC error code register **/
#define RAMECC2_M4FECR			MMIO32(RAMECC2_BASE + 0x90)
/** RAMECC2_M5CR RAMECC monitor x configuration register **/
#define RAMECC2_M5CR			MMIO32(RAMECC2_BASE + 0xa0)
/** RAMECC2_M5SR RAMECC monitor x status register **/
#define RAMECC2_M5SR			MMIO32(RAMECC2_BASE + 0xa4)
/** RAMECC2_M5FAR RAMECC monitor x failing address register **/
#define RAMECC2_M5FAR			MMIO32(RAMECC2_BASE + 0xa8)
/** RAMECC2_M5FDRL RAMECC monitor x failing data low register **/
#define RAMECC2_M5FDRL			MMIO32(RAMECC2_BASE + 0xac)
/** RAMECC2_M5FDRH RAMECC monitor x failing data high register **/
#define RAMECC2_M5FDRH			MMIO32(RAMECC2_BASE + 0xb0)
/** RAMECC2_M5FECR RAMECC monitor x failing ECC error code register **/
#define RAMECC2_M5FECR			MMIO32(RAMECC2_BASE + 0xb4)

/**@}*/


/** @defgroup ramecc2_ier IER RAMECC interrupt enable register
@{*/

/** RAMECC2_IER_GECCDEBWIE Global ECC double error on byte write (BW) interrupt enable **/
#define RAMECC2_IER_GECCDEBWIE		(1 << 3)
/** RAMECC2_IER_GECCDEIE Global ECC double error interrupt enable **/
#define RAMECC2_IER_GECCDEIE		(1 << 2)
/** RAMECC2_IER_GECCSEIE_ Global ECC single error interrupt enable **/
#define RAMECC2_IER_GECCSEIE_		(1 << 1)
/** RAMECC2_IER_GIE Global interrupt enable **/
#define RAMECC2_IER_GIE		(1 << 0)

/**@}*/

/** @defgroup ramecc2_m1cr M1CR RAMECC monitor x configuration register
@{*/

/** RAMECC2_M1CR_ECCELEN ECC error latching enable **/
#define RAMECC2_M1CR_ECCELEN		(1 << 5)
/** RAMECC2_M1CR_ECCDEBWIE ECC double error on byte write (BW) interrupt enable **/
#define RAMECC2_M1CR_ECCDEBWIE		(1 << 4)
/** RAMECC2_M1CR_ECCDEIE ECC double error interrupt enable **/
#define RAMECC2_M1CR_ECCDEIE		(1 << 3)
/** RAMECC2_M1CR_ECCSEIE ECC single error interrupt enable **/
#define RAMECC2_M1CR_ECCSEIE		(1 << 2)

/**@}*/

/** @defgroup ramecc2_m1sr M1SR RAMECC monitor x status register
@{*/

/** RAMECC2_M1SR_DEBWDF ECC double error on byte write (BW) detected flag **/
#define RAMECC2_M1SR_DEBWDF		(1 << 2)
/** RAMECC2_M1SR_DEDF ECC double error detected flag **/
#define RAMECC2_M1SR_DEDF		(1 << 1)
/** RAMECC2_M1SR_SEDCF ECC single error detected and corrected flag **/
#define RAMECC2_M1SR_SEDCF		(1 << 0)

/**@}*/

/** @defgroup ramecc2_m1far M1FAR RAMECC monitor x failing address register
@{*/


#define RAMECC2_M1FAR_FADD_SHIFT		0
#define RAMECC2_M1FAR_FADD_MASK		0xffffffff
/** @defgroup ramecc2_m1far_fadd FADD ECC error failing address
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m1fdrl M1FDRL RAMECC monitor x failing data low register
@{*/


#define RAMECC2_M1FDRL_FDATAL_SHIFT		0
#define RAMECC2_M1FDRL_FDATAL_MASK		0xffffffff
/** @defgroup ramecc2_m1fdrl_fdatal FDATAL Failing data low
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m1fdrh M1FDRH RAMECC monitor x failing data high register
@{*/


#define RAMECC2_M1FDRH_FDATAH_SHIFT		0
#define RAMECC2_M1FDRH_FDATAH_MASK		0xffffffff
/** @defgroup ramecc2_m1fdrh_fdatah FDATAH Failing data high (64-bit memory)
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m1fecr M1FECR RAMECC monitor x failing ECC error code register
@{*/


#define RAMECC2_M1FECR_FEC_SHIFT		0
#define RAMECC2_M1FECR_FEC_MASK		0xffffffff
/** @defgroup ramecc2_m1fecr_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m2cr M2CR RAMECC monitor x configuration register
@{*/

/** RAMECC2_M2CR_ECCELEN ECC error latching enable **/
#define RAMECC2_M2CR_ECCELEN		(1 << 5)
/** RAMECC2_M2CR_ECCDEBWIE ECC double error on byte write (BW) interrupt enable **/
#define RAMECC2_M2CR_ECCDEBWIE		(1 << 4)
/** RAMECC2_M2CR_ECCDEIE ECC double error interrupt enable **/
#define RAMECC2_M2CR_ECCDEIE		(1 << 3)
/** RAMECC2_M2CR_ECCSEIE ECC single error interrupt enable **/
#define RAMECC2_M2CR_ECCSEIE		(1 << 2)

/**@}*/

/** @defgroup ramecc2_m2sr M2SR RAMECC monitor x status register
@{*/

/** RAMECC2_M2SR_DEBWDF ECC double error on byte write (BW) detected flag **/
#define RAMECC2_M2SR_DEBWDF		(1 << 2)
/** RAMECC2_M2SR_DEDF ECC double error detected flag **/
#define RAMECC2_M2SR_DEDF		(1 << 1)
/** RAMECC2_M2SR_SEDCF ECC single error detected and corrected flag **/
#define RAMECC2_M2SR_SEDCF		(1 << 0)

/**@}*/

/** @defgroup ramecc2_m2far M2FAR RAMECC monitor x failing address register
@{*/


#define RAMECC2_M2FAR_FADD_SHIFT		0
#define RAMECC2_M2FAR_FADD_MASK		0xffffffff
/** @defgroup ramecc2_m2far_fadd FADD ECC error failing address
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m2fdrl M2FDRL RAMECC monitor x failing data low register
@{*/


#define RAMECC2_M2FDRL_FDATAL_SHIFT		0
#define RAMECC2_M2FDRL_FDATAL_MASK		0xffffffff
/** @defgroup ramecc2_m2fdrl_fdatal FDATAL Failing data low
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m2fdrh M2FDRH RAMECC monitor x failing data high register
@{*/


#define RAMECC2_M2FDRH_FDATAH_SHIFT		0
#define RAMECC2_M2FDRH_FDATAH_MASK		0xffffffff
/** @defgroup ramecc2_m2fdrh_fdatah FDATAH Failing data high (64-bit memory)
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m2fecr M2FECR RAMECC monitor x failing ECC error code register
@{*/


#define RAMECC2_M2FECR_FEC_SHIFT		0
#define RAMECC2_M2FECR_FEC_MASK		0xffffffff
/** @defgroup ramecc2_m2fecr_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m3cr M3CR RAMECC monitor x configuration register
@{*/

/** RAMECC2_M3CR_ECCELEN ECC error latching enable **/
#define RAMECC2_M3CR_ECCELEN		(1 << 5)
/** RAMECC2_M3CR_ECCDEBWIE ECC double error on byte write (BW) interrupt enable **/
#define RAMECC2_M3CR_ECCDEBWIE		(1 << 4)
/** RAMECC2_M3CR_ECCDEIE ECC double error interrupt enable **/
#define RAMECC2_M3CR_ECCDEIE		(1 << 3)
/** RAMECC2_M3CR_ECCSEIE ECC single error interrupt enable **/
#define RAMECC2_M3CR_ECCSEIE		(1 << 2)

/**@}*/

/** @defgroup ramecc2_m3sr M3SR RAMECC monitor x status register
@{*/

/** RAMECC2_M3SR_DEBWDF ECC double error on byte write (BW) detected flag **/
#define RAMECC2_M3SR_DEBWDF		(1 << 2)
/** RAMECC2_M3SR_DEDF ECC double error detected flag **/
#define RAMECC2_M3SR_DEDF		(1 << 1)
/** RAMECC2_M3SR_SEDCF ECC single error detected and corrected flag **/
#define RAMECC2_M3SR_SEDCF		(1 << 0)

/**@}*/

/** @defgroup ramecc2_m3far M3FAR RAMECC monitor x failing address register
@{*/


#define RAMECC2_M3FAR_FADD_SHIFT		0
#define RAMECC2_M3FAR_FADD_MASK		0xffffffff
/** @defgroup ramecc2_m3far_fadd FADD ECC error failing address
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m3fdrl M3FDRL RAMECC monitor x failing data low register
@{*/


#define RAMECC2_M3FDRL_FDATAL_SHIFT		0
#define RAMECC2_M3FDRL_FDATAL_MASK		0xffffffff
/** @defgroup ramecc2_m3fdrl_fdatal FDATAL Failing data low
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m3fdrh M3FDRH RAMECC monitor x failing data high register
@{*/


#define RAMECC2_M3FDRH_FDATAH_SHIFT		0
#define RAMECC2_M3FDRH_FDATAH_MASK		0xffffffff
/** @defgroup ramecc2_m3fdrh_fdatah FDATAH Failing data high (64-bit memory)
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m3fecr M3FECR RAMECC monitor x failing ECC error code register
@{*/


#define RAMECC2_M3FECR_FEC_SHIFT		0
#define RAMECC2_M3FECR_FEC_MASK		0xffffffff
/** @defgroup ramecc2_m3fecr_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m4cr M4CR RAMECC monitor x configuration register
@{*/

/** RAMECC2_M4CR_ECCELEN ECC error latching enable **/
#define RAMECC2_M4CR_ECCELEN		(1 << 5)
/** RAMECC2_M4CR_ECCDEBWIE ECC double error on byte write (BW) interrupt enable **/
#define RAMECC2_M4CR_ECCDEBWIE		(1 << 4)
/** RAMECC2_M4CR_ECCDEIE ECC double error interrupt enable **/
#define RAMECC2_M4CR_ECCDEIE		(1 << 3)
/** RAMECC2_M4CR_ECCSEIE ECC single error interrupt enable **/
#define RAMECC2_M4CR_ECCSEIE		(1 << 2)

/**@}*/

/** @defgroup ramecc2_m4sr M4SR RAMECC monitor x status register
@{*/

/** RAMECC2_M4SR_DEBWDF ECC double error on byte write (BW) detected flag **/
#define RAMECC2_M4SR_DEBWDF		(1 << 2)
/** RAMECC2_M4SR_DEDF ECC double error detected flag **/
#define RAMECC2_M4SR_DEDF		(1 << 1)
/** RAMECC2_M4SR_SEDCF ECC single error detected and corrected flag **/
#define RAMECC2_M4SR_SEDCF		(1 << 0)

/**@}*/

/** @defgroup ramecc2_m4far M4FAR RAMECC monitor x failing address register
@{*/


#define RAMECC2_M4FAR_FADD_SHIFT		0
#define RAMECC2_M4FAR_FADD_MASK		0xffffffff
/** @defgroup ramecc2_m4far_fadd FADD ECC error failing address
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m4fdrl M4FDRL RAMECC monitor x failing data low register
@{*/


#define RAMECC2_M4FDRL_FDATAL_SHIFT		0
#define RAMECC2_M4FDRL_FDATAL_MASK		0xffffffff
/** @defgroup ramecc2_m4fdrl_fdatal FDATAL Failing data low
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m4fdrh M4FDRH RAMECC monitor x failing data high register
@{*/


#define RAMECC2_M4FDRH_FDATAH_SHIFT		0
#define RAMECC2_M4FDRH_FDATAH_MASK		0xffffffff
/** @defgroup ramecc2_m4fdrh_fdatah FDATAH Failing data high (64-bit memory)
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m4fecr M4FECR RAMECC monitor x failing ECC error code register
@{*/


#define RAMECC2_M4FECR_FEC_SHIFT		0
#define RAMECC2_M4FECR_FEC_MASK		0xffffffff
/** @defgroup ramecc2_m4fecr_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m5cr M5CR RAMECC monitor x configuration register
@{*/

/** RAMECC2_M5CR_ECCELEN ECC error latching enable **/
#define RAMECC2_M5CR_ECCELEN		(1 << 5)
/** RAMECC2_M5CR_ECCDEBWIE ECC double error on byte write (BW) interrupt enable **/
#define RAMECC2_M5CR_ECCDEBWIE		(1 << 4)
/** RAMECC2_M5CR_ECCDEIE ECC double error interrupt enable **/
#define RAMECC2_M5CR_ECCDEIE		(1 << 3)
/** RAMECC2_M5CR_ECCSEIE ECC single error interrupt enable **/
#define RAMECC2_M5CR_ECCSEIE		(1 << 2)

/**@}*/

/** @defgroup ramecc2_m5sr M5SR RAMECC monitor x status register
@{*/

/** RAMECC2_M5SR_DEBWDF ECC double error on byte write (BW) detected flag **/
#define RAMECC2_M5SR_DEBWDF		(1 << 2)
/** RAMECC2_M5SR_DEDF ECC double error detected flag **/
#define RAMECC2_M5SR_DEDF		(1 << 1)
/** RAMECC2_M5SR_SEDCF ECC single error detected and corrected flag **/
#define RAMECC2_M5SR_SEDCF		(1 << 0)

/**@}*/

/** @defgroup ramecc2_m5far M5FAR RAMECC monitor x failing address register
@{*/


#define RAMECC2_M5FAR_FADD_SHIFT		0
#define RAMECC2_M5FAR_FADD_MASK		0xffffffff
/** @defgroup ramecc2_m5far_fadd FADD ECC error failing address
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m5fdrl M5FDRL RAMECC monitor x failing data low register
@{*/


#define RAMECC2_M5FDRL_FDATAL_SHIFT		0
#define RAMECC2_M5FDRL_FDATAL_MASK		0xffffffff
/** @defgroup ramecc2_m5fdrl_fdatal FDATAL Failing data low
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m5fdrh M5FDRH RAMECC monitor x failing data high register
@{*/


#define RAMECC2_M5FDRH_FEC_SHIFT		0
#define RAMECC2_M5FDRH_FEC_MASK		0xffffffff
/** @defgroup ramecc2_m5fdrh_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc2_m5fecr M5FECR RAMECC monitor x failing ECC error code register
@{*/


#define RAMECC2_M5FECR_FEC_SHIFT		0
#define RAMECC2_M5FECR_FEC_MASK		0xffffffff
/** @defgroup ramecc2_m5fecr_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

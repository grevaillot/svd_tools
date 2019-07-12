#pragma once 

/* --- RAMECC: ECC controller is associated to each RAM area -------- */

/** @defgroup ramecc_registers ECC controller is associated to each RAM
      area Register
@{*/

/** RAMECC_IER RAMECC interrupt enable register **/
#define RAMECC_IER			MMIO32(RAMECC_BASE + 0x00)
/** RAMECC_M1CR RAMECC monitor x configuration register **/
#define RAMECC_M1CR			MMIO32(RAMECC_BASE + 0x20)
/** RAMECC_M1SR RAMECC monitor x status register **/
#define RAMECC_M1SR			MMIO32(RAMECC_BASE + 0x24)
/** RAMECC_M1FAR RAMECC monitor x failing address register **/
#define RAMECC_M1FAR			MMIO32(RAMECC_BASE + 0x28)
/** RAMECC_M1FDRL RAMECC monitor x failing data low register **/
#define RAMECC_M1FDRL			MMIO32(RAMECC_BASE + 0x2c)
/** RAMECC_M1FDRH RAMECC monitor x failing data high register **/
#define RAMECC_M1FDRH			MMIO32(RAMECC_BASE + 0x30)
/** RAMECC_M1FECR RAMECC monitor x failing ECC error code register **/
#define RAMECC_M1FECR			MMIO32(RAMECC_BASE + 0x34)
/** RAMECC_M2CR RAMECC monitor x configuration register **/
#define RAMECC_M2CR			MMIO32(RAMECC_BASE + 0x40)
/** RAMECC_M2SR RAMECC monitor x status register **/
#define RAMECC_M2SR			MMIO32(RAMECC_BASE + 0x44)
/** RAMECC_M2FAR RAMECC monitor x failing address register **/
#define RAMECC_M2FAR			MMIO32(RAMECC_BASE + 0x48)
/** RAMECC_M2FDRL RAMECC monitor x failing data low register **/
#define RAMECC_M2FDRL			MMIO32(RAMECC_BASE + 0x4c)
/** RAMECC_M2FDRH RAMECC monitor x failing data high register **/
#define RAMECC_M2FDRH			MMIO32(RAMECC_BASE + 0x50)
/** RAMECC_M2FECR RAMECC monitor x failing ECC error code register **/
#define RAMECC_M2FECR			MMIO32(RAMECC_BASE + 0x58)
/** RAMECC_M3CR RAMECC monitor x configuration register **/
#define RAMECC_M3CR			MMIO32(RAMECC_BASE + 0x60)
/** RAMECC_M3SR RAMECC monitor x status register **/
#define RAMECC_M3SR			MMIO32(RAMECC_BASE + 0x64)
/** RAMECC_M3FAR RAMECC monitor x failing address register **/
#define RAMECC_M3FAR			MMIO32(RAMECC_BASE + 0x68)
/** RAMECC_M3FDRL RAMECC monitor x failing data low register **/
#define RAMECC_M3FDRL			MMIO32(RAMECC_BASE + 0x6c)
/** RAMECC_M3FDRH RAMECC monitor x failing data high register **/
#define RAMECC_M3FDRH			MMIO32(RAMECC_BASE + 0x70)
/** RAMECC_M3FECR RAMECC monitor x failing ECC error code register **/
#define RAMECC_M3FECR			MMIO32(RAMECC_BASE + 0x7c)
/** RAMECC_M4CR RAMECC monitor x configuration register **/
#define RAMECC_M4CR			MMIO32(RAMECC_BASE + 0x80)
/** RAMECC_M4SR RAMECC monitor x status register **/
#define RAMECC_M4SR			MMIO32(RAMECC_BASE + 0x84)
/** RAMECC_M4FAR RAMECC monitor x failing address register **/
#define RAMECC_M4FAR			MMIO32(RAMECC_BASE + 0x88)
/** RAMECC_M4FDRL RAMECC monitor x failing data low register **/
#define RAMECC_M4FDRL			MMIO32(RAMECC_BASE + 0x8c)
/** RAMECC_M4FDRH RAMECC monitor x failing data high register **/
#define RAMECC_M4FDRH			MMIO32(RAMECC_BASE + 0x90)
/** RAMECC_M4FECR RAMECC monitor x failing ECC error code register **/
#define RAMECC_M4FECR			MMIO32(RAMECC_BASE + 0x90)
/** RAMECC_M5CR RAMECC monitor x configuration register **/
#define RAMECC_M5CR			MMIO32(RAMECC_BASE + 0xa0)
/** RAMECC_M5SR RAMECC monitor x status register **/
#define RAMECC_M5SR			MMIO32(RAMECC_BASE + 0xa4)
/** RAMECC_M5FAR RAMECC monitor x failing address register **/
#define RAMECC_M5FAR			MMIO32(RAMECC_BASE + 0xa8)
/** RAMECC_M5FDRL RAMECC monitor x failing data low register **/
#define RAMECC_M5FDRL			MMIO32(RAMECC_BASE + 0xac)
/** RAMECC_M5FDRH RAMECC monitor x failing data high register **/
#define RAMECC_M5FDRH			MMIO32(RAMECC_BASE + 0xb0)
/** RAMECC_M5FECR RAMECC monitor x failing ECC error code register **/
#define RAMECC_M5FECR			MMIO32(RAMECC_BASE + 0xb4)

/**@}*/


/** @defgroup ramecc_ier IER RAMECC interrupt enable register
@{*/

/** RAMECC_IER_GECCDEBWIE Global ECC double error on byte write (BW) interrupt enable **/
#define RAMECC_IER_GECCDEBWIE		(1 << 3)
/** RAMECC_IER_GECCDEIE Global ECC double error interrupt enable **/
#define RAMECC_IER_GECCDEIE		(1 << 2)
/** RAMECC_IER_GECCSEIE_ Global ECC single error interrupt enable **/
#define RAMECC_IER_GECCSEIE_		(1 << 1)
/** RAMECC_IER_GIE Global interrupt enable **/
#define RAMECC_IER_GIE		(1 << 0)

/**@}*/

/** @defgroup ramecc_m1cr M1CR RAMECC monitor x configuration register
@{*/

/** RAMECC_M1CR_ECCELEN ECC error latching enable **/
#define RAMECC_M1CR_ECCELEN		(1 << 5)
/** RAMECC_M1CR_ECCDEBWIE ECC double error on byte write (BW) interrupt enable **/
#define RAMECC_M1CR_ECCDEBWIE		(1 << 4)
/** RAMECC_M1CR_ECCDEIE ECC double error interrupt enable **/
#define RAMECC_M1CR_ECCDEIE		(1 << 3)
/** RAMECC_M1CR_ECCSEIE ECC single error interrupt enable **/
#define RAMECC_M1CR_ECCSEIE		(1 << 2)

/**@}*/

/** @defgroup ramecc_m1sr M1SR RAMECC monitor x status register
@{*/

/** RAMECC_M1SR_ECCELEN ECC error latching enable **/
#define RAMECC_M1SR_ECCELEN		(1 << 5)
/** RAMECC_M1SR_ECCDEBWIE ECC double error on byte write (BW) interrupt enable **/
#define RAMECC_M1SR_ECCDEBWIE		(1 << 4)
/** RAMECC_M1SR_ECCDEIE ECC double error interrupt enable **/
#define RAMECC_M1SR_ECCDEIE		(1 << 3)
/** RAMECC_M1SR_ECCSEIE ECC single error interrupt enable **/
#define RAMECC_M1SR_ECCSEIE		(1 << 2)

/**@}*/

/** @defgroup ramecc_m1far M1FAR RAMECC monitor x failing address register
@{*/

/** RAMECC_M1FAR_ECCELEN ECC error latching enable **/
#define RAMECC_M1FAR_ECCELEN		(1 << 5)
/** RAMECC_M1FAR_ECCDEBWIE ECC double error on byte write (BW) interrupt enable **/
#define RAMECC_M1FAR_ECCDEBWIE		(1 << 4)
/** RAMECC_M1FAR_ECCDEIE ECC double error interrupt enable **/
#define RAMECC_M1FAR_ECCDEIE		(1 << 3)
/** RAMECC_M1FAR_ECCSEIE ECC single error interrupt enable **/
#define RAMECC_M1FAR_ECCSEIE		(1 << 2)

/**@}*/

/** @defgroup ramecc_m1fdrl M1FDRL RAMECC monitor x failing data low register
@{*/

/** RAMECC_M1FDRL_ECCELEN ECC error latching enable **/
#define RAMECC_M1FDRL_ECCELEN		(1 << 5)
/** RAMECC_M1FDRL_ECCDEBWIE ECC double error on byte write (BW) interrupt enable **/
#define RAMECC_M1FDRL_ECCDEBWIE		(1 << 4)
/** RAMECC_M1FDRL_ECCDEIE ECC double error interrupt enable **/
#define RAMECC_M1FDRL_ECCDEIE		(1 << 3)
/** RAMECC_M1FDRL_ECCSEIE ECC single error interrupt enable **/
#define RAMECC_M1FDRL_ECCSEIE		(1 << 2)

/**@}*/

/** @defgroup ramecc_m1fdrh M1FDRH RAMECC monitor x failing data high register
@{*/

/** RAMECC_M1FDRH_ECCELEN ECC error latching enable **/
#define RAMECC_M1FDRH_ECCELEN		(1 << 5)
/** RAMECC_M1FDRH_ECCDEBWIE ECC double error on byte write (BW) interrupt enable **/
#define RAMECC_M1FDRH_ECCDEBWIE		(1 << 4)
/** RAMECC_M1FDRH_ECCDEIE ECC double error interrupt enable **/
#define RAMECC_M1FDRH_ECCDEIE		(1 << 3)
/** RAMECC_M1FDRH_ECCSEIE ECC single error interrupt enable **/
#define RAMECC_M1FDRH_ECCSEIE		(1 << 2)

/**@}*/

/** @defgroup ramecc_m1fecr M1FECR RAMECC monitor x failing ECC error code register
@{*/

/** RAMECC_M1FECR_DEBWDF ECC double error on byte write (BW) detected flag **/
#define RAMECC_M1FECR_DEBWDF		(1 << 2)
/** RAMECC_M1FECR_DEDF ECC double error detected flag **/
#define RAMECC_M1FECR_DEDF		(1 << 1)
/** RAMECC_M1FECR_SEDCF ECC single error detected and corrected flag **/
#define RAMECC_M1FECR_SEDCF		(1 << 0)

/**@}*/

/** @defgroup ramecc_m2cr M2CR RAMECC monitor x configuration register
@{*/

/** RAMECC_M2CR_DEBWDF ECC double error on byte write (BW) detected flag **/
#define RAMECC_M2CR_DEBWDF		(1 << 2)
/** RAMECC_M2CR_DEDF ECC double error detected flag **/
#define RAMECC_M2CR_DEDF		(1 << 1)
/** RAMECC_M2CR_SEDCF ECC single error detected and corrected flag **/
#define RAMECC_M2CR_SEDCF		(1 << 0)

/**@}*/

/** @defgroup ramecc_m2sr M2SR RAMECC monitor x status register
@{*/

/** RAMECC_M2SR_DEBWDF ECC double error on byte write (BW) detected flag **/
#define RAMECC_M2SR_DEBWDF		(1 << 2)
/** RAMECC_M2SR_DEDF ECC double error detected flag **/
#define RAMECC_M2SR_DEDF		(1 << 1)
/** RAMECC_M2SR_SEDCF ECC single error detected and corrected flag **/
#define RAMECC_M2SR_SEDCF		(1 << 0)

/**@}*/

/** @defgroup ramecc_m2far M2FAR RAMECC monitor x failing address register
@{*/

/** RAMECC_M2FAR_DEBWDF ECC double error on byte write (BW) detected flag **/
#define RAMECC_M2FAR_DEBWDF		(1 << 2)
/** RAMECC_M2FAR_DEDF ECC double error detected flag **/
#define RAMECC_M2FAR_DEDF		(1 << 1)
/** RAMECC_M2FAR_SEDCF ECC single error detected and corrected flag **/
#define RAMECC_M2FAR_SEDCF		(1 << 0)

/**@}*/

/** @defgroup ramecc_m2fdrl M2FDRL RAMECC monitor x failing data low register
@{*/

/** RAMECC_M2FDRL_DEBWDF ECC double error on byte write (BW) detected flag **/
#define RAMECC_M2FDRL_DEBWDF		(1 << 2)
/** RAMECC_M2FDRL_DEDF ECC double error detected flag **/
#define RAMECC_M2FDRL_DEDF		(1 << 1)
/** RAMECC_M2FDRL_SEDCF ECC single error detected and corrected flag **/
#define RAMECC_M2FDRL_SEDCF		(1 << 0)

/**@}*/

/** @defgroup ramecc_m2fdrh M2FDRH RAMECC monitor x failing data high register
@{*/


#define RAMECC_M2FDRH_FADD_SHIFT		0
#define RAMECC_M2FDRH_FADD_MASK		0xffffffff
/** @defgroup ramecc_m2fdrh_fadd FADD ECC error failing address
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m2fecr M2FECR RAMECC monitor x failing ECC error code register
@{*/


#define RAMECC_M2FECR_FADD_SHIFT		0
#define RAMECC_M2FECR_FADD_MASK		0xffffffff
/** @defgroup ramecc_m2fecr_fadd FADD ECC error failing address
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m3cr M3CR RAMECC monitor x configuration register
@{*/


#define RAMECC_M3CR_FADD_SHIFT		0
#define RAMECC_M3CR_FADD_MASK		0xffffffff
/** @defgroup ramecc_m3cr_fadd FADD ECC error failing address
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m3sr M3SR RAMECC monitor x status register
@{*/


#define RAMECC_M3SR_FADD_SHIFT		0
#define RAMECC_M3SR_FADD_MASK		0xffffffff
/** @defgroup ramecc_m3sr_fadd FADD ECC error failing address
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m3far M3FAR RAMECC monitor x failing address register
@{*/


#define RAMECC_M3FAR_FADD_SHIFT		0
#define RAMECC_M3FAR_FADD_MASK		0xffffffff
/** @defgroup ramecc_m3far_fadd FADD ECC error failing address
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m3fdrl M3FDRL RAMECC monitor x failing data low register
@{*/


#define RAMECC_M3FDRL_FDATAL_SHIFT		0
#define RAMECC_M3FDRL_FDATAL_MASK		0xffffffff
/** @defgroup ramecc_m3fdrl_fdatal FDATAL Failing data low
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m3fdrh M3FDRH RAMECC monitor x failing data high register
@{*/


#define RAMECC_M3FDRH_FDATAL_SHIFT		0
#define RAMECC_M3FDRH_FDATAL_MASK		0xffffffff
/** @defgroup ramecc_m3fdrh_fdatal FDATAL Failing data low
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m3fecr M3FECR RAMECC monitor x failing ECC error code register
@{*/


#define RAMECC_M3FECR_FDATAL_SHIFT		0
#define RAMECC_M3FECR_FDATAL_MASK		0xffffffff
/** @defgroup ramecc_m3fecr_fdatal FDATAL Failing data low
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m4cr M4CR RAMECC monitor x configuration register
@{*/


#define RAMECC_M4CR_FDATAL_SHIFT		0
#define RAMECC_M4CR_FDATAL_MASK		0xffffffff
/** @defgroup ramecc_m4cr_fdatal FDATAL Failing data low
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m4sr M4SR RAMECC monitor x status register
@{*/


#define RAMECC_M4SR_FDATAL_SHIFT		0
#define RAMECC_M4SR_FDATAL_MASK		0xffffffff
/** @defgroup ramecc_m4sr_fdatal FDATAL Failing data low
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m4far M4FAR RAMECC monitor x failing address register
@{*/


#define RAMECC_M4FAR_FDATAH_SHIFT		0
#define RAMECC_M4FAR_FDATAH_MASK		0xffffffff
/** @defgroup ramecc_m4far_fdatah FDATAH Failing data high (64-bit memory)
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m4fdrl M4FDRL RAMECC monitor x failing data low register
@{*/


#define RAMECC_M4FDRL_FDATAH_SHIFT		0
#define RAMECC_M4FDRL_FDATAH_MASK		0xffffffff
/** @defgroup ramecc_m4fdrl_fdatah FDATAH Failing data high (64-bit memory)
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m4fdrh M4FDRH RAMECC monitor x failing data high register
@{*/


#define RAMECC_M4FDRH_FDATAH_SHIFT		0
#define RAMECC_M4FDRH_FDATAH_MASK		0xffffffff
/** @defgroup ramecc_m4fdrh_fdatah FDATAH Failing data high (64-bit memory)
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m4fecr M4FECR RAMECC monitor x failing ECC error code register
@{*/


#define RAMECC_M4FECR_FDATAH_SHIFT		0
#define RAMECC_M4FECR_FDATAH_MASK		0xffffffff
/** @defgroup ramecc_m4fecr_fdatah FDATAH Failing data high (64-bit memory)
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m5cr M5CR RAMECC monitor x configuration register
@{*/


#define RAMECC_M5CR_FEC_SHIFT		0
#define RAMECC_M5CR_FEC_MASK		0xffffffff
/** @defgroup ramecc_m5cr_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m5sr M5SR RAMECC monitor x status register
@{*/


#define RAMECC_M5SR_FEC_SHIFT		0
#define RAMECC_M5SR_FEC_MASK		0xffffffff
/** @defgroup ramecc_m5sr_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m5far M5FAR RAMECC monitor x failing address register
@{*/


#define RAMECC_M5FAR_FEC_SHIFT		0
#define RAMECC_M5FAR_FEC_MASK		0xffffffff
/** @defgroup ramecc_m5far_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m5fdrl M5FDRL RAMECC monitor x failing data low register
@{*/


#define RAMECC_M5FDRL_FEC_SHIFT		0
#define RAMECC_M5FDRL_FEC_MASK		0xffffffff
/** @defgroup ramecc_m5fdrl_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m5fdrh M5FDRH RAMECC monitor x failing data high register
@{*/


#define RAMECC_M5FDRH_FEC_SHIFT		0
#define RAMECC_M5FDRH_FEC_MASK		0xffffffff
/** @defgroup ramecc_m5fdrh_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

/** @defgroup ramecc_m5fecr M5FECR RAMECC monitor x failing ECC error code register
@{*/


#define RAMECC_M5FECR_FEC_SHIFT		0
#define RAMECC_M5FECR_FEC_MASK		0xffffffff
/** @defgroup ramecc_m5fecr_fec FEC Failing error code
@{*/
/**@}*/


/**@}*/

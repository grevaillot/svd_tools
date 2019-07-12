#pragma once 

/* --- DFSDM: Digital filter for sigma delta modulators ------------- */

/** @defgroup dfsdm_registers Digital filter for sigma delta
      modulators Register
@{*/

/** DFSDM_CHCFG0R1 channel configuration y register **/
#define DFSDM_CHCFG0R1			MMIO32(DFSDM_BASE + 0x00)
/** DFSDM_CHCFG0R2 channel configuration y register **/
#define DFSDM_CHCFG0R2			MMIO32(DFSDM_BASE + 0x04)
/** DFSDM_AWSCD0R analog watchdog and short-circuit detector register **/
#define DFSDM_AWSCD0R			MMIO32(DFSDM_BASE + 0x08)
/** DFSDM_CHWDAT0R channel watchdog filter data register **/
#define DFSDM_CHWDAT0R			MMIO32(DFSDM_BASE + 0x0c)
/** DFSDM_CHDATIN0R channel data input register **/
#define DFSDM_CHDATIN0R			MMIO32(DFSDM_BASE + 0x10)
/** DFSDM_CHCFG1R1 CHCFG1R1 **/
#define DFSDM_CHCFG1R1			MMIO32(DFSDM_BASE + 0x20)
/** DFSDM_CHCFG1R2 CHCFG1R2 **/
#define DFSDM_CHCFG1R2			MMIO32(DFSDM_BASE + 0x24)
/** DFSDM_AWSCD1R AWSCD1R **/
#define DFSDM_AWSCD1R			MMIO32(DFSDM_BASE + 0x28)
/** DFSDM_CHWDAT1R CHWDAT1R **/
#define DFSDM_CHWDAT1R			MMIO32(DFSDM_BASE + 0x2c)
/** DFSDM_CHDATIN1R CHDATIN1R **/
#define DFSDM_CHDATIN1R			MMIO32(DFSDM_BASE + 0x30)
/** DFSDM_CHCFG2R1 CHCFG2R1 **/
#define DFSDM_CHCFG2R1			MMIO32(DFSDM_BASE + 0x40)
/** DFSDM_CHCFG2R2 CHCFG2R2 **/
#define DFSDM_CHCFG2R2			MMIO32(DFSDM_BASE + 0x44)
/** DFSDM_AWSCD2R AWSCD2R **/
#define DFSDM_AWSCD2R			MMIO32(DFSDM_BASE + 0x48)
/** DFSDM_CHWDAT2R CHWDAT2R **/
#define DFSDM_CHWDAT2R			MMIO32(DFSDM_BASE + 0x4c)
/** DFSDM_CHDATIN2R CHDATIN2R **/
#define DFSDM_CHDATIN2R			MMIO32(DFSDM_BASE + 0x50)
/** DFSDM_CHCFG3R1 CHCFG3R1 **/
#define DFSDM_CHCFG3R1			MMIO32(DFSDM_BASE + 0x60)
/** DFSDM_CHCFG3R2 CHCFG3R2 **/
#define DFSDM_CHCFG3R2			MMIO32(DFSDM_BASE + 0x64)
/** DFSDM_AWSCD3R AWSCD3R **/
#define DFSDM_AWSCD3R			MMIO32(DFSDM_BASE + 0x68)
/** DFSDM_CHWDAT3R CHWDAT3R **/
#define DFSDM_CHWDAT3R			MMIO32(DFSDM_BASE + 0x6c)
/** DFSDM_CHDATIN3R CHDATIN3R **/
#define DFSDM_CHDATIN3R			MMIO32(DFSDM_BASE + 0x70)
/** DFSDM_CHCFG4R1 CHCFG4R1 **/
#define DFSDM_CHCFG4R1			MMIO32(DFSDM_BASE + 0x80)
/** DFSDM_CHCFG4R2 CHCFG4R2 **/
#define DFSDM_CHCFG4R2			MMIO32(DFSDM_BASE + 0x84)
/** DFSDM_AWSCD4R AWSCD4R **/
#define DFSDM_AWSCD4R			MMIO32(DFSDM_BASE + 0x88)
/** DFSDM_CHWDAT4R CHWDAT4R **/
#define DFSDM_CHWDAT4R			MMIO32(DFSDM_BASE + 0x8c)
/** DFSDM_CHDATIN4R CHDATIN4R **/
#define DFSDM_CHDATIN4R			MMIO32(DFSDM_BASE + 0x90)
/** DFSDM_CHCFG5R1 CHCFG5R1 **/
#define DFSDM_CHCFG5R1			MMIO32(DFSDM_BASE + 0xa0)
/** DFSDM_CHCFG5R2 CHCFG5R2 **/
#define DFSDM_CHCFG5R2			MMIO32(DFSDM_BASE + 0xa4)
/** DFSDM_AWSCD5R AWSCD5R **/
#define DFSDM_AWSCD5R			MMIO32(DFSDM_BASE + 0xa8)
/** DFSDM_CHWDAT5R CHWDAT5R **/
#define DFSDM_CHWDAT5R			MMIO32(DFSDM_BASE + 0xac)
/** DFSDM_CHDATIN5R CHDATIN5R **/
#define DFSDM_CHDATIN5R			MMIO32(DFSDM_BASE + 0xb0)
/** DFSDM_CHCFG6R1 CHCFG6R1 **/
#define DFSDM_CHCFG6R1			MMIO32(DFSDM_BASE + 0xc0)
/** DFSDM_CHCFG6R2 CHCFG6R2 **/
#define DFSDM_CHCFG6R2			MMIO32(DFSDM_BASE + 0xc4)
/** DFSDM_AWSCD6R AWSCD6R **/
#define DFSDM_AWSCD6R			MMIO32(DFSDM_BASE + 0xc8)
/** DFSDM_CHWDAT6R CHWDAT6R **/
#define DFSDM_CHWDAT6R			MMIO32(DFSDM_BASE + 0xcc)
/** DFSDM_CHDATIN6R CHDATIN6R **/
#define DFSDM_CHDATIN6R			MMIO32(DFSDM_BASE + 0xd0)
/** DFSDM_CHCFG7R1 CHCFG7R1 **/
#define DFSDM_CHCFG7R1			MMIO32(DFSDM_BASE + 0xe0)
/** DFSDM_CHCFG7R2 CHCFG7R2 **/
#define DFSDM_CHCFG7R2			MMIO32(DFSDM_BASE + 0xe4)
/** DFSDM_AWSCD7R AWSCD7R **/
#define DFSDM_AWSCD7R			MMIO32(DFSDM_BASE + 0xe8)
/** DFSDM_CHWDAT7R CHWDAT7R **/
#define DFSDM_CHWDAT7R			MMIO32(DFSDM_BASE + 0xec)
/** DFSDM_CHDATIN7R CHDATIN7R **/
#define DFSDM_CHDATIN7R			MMIO32(DFSDM_BASE + 0xf0)
/** DFSDM_DFSDM0_CR1 control register 1 **/
#define DFSDM_DFSDM0_CR1			MMIO32(DFSDM_BASE + 0x100)
/** DFSDM_DFSDM0_CR2 control register 2 **/
#define DFSDM_DFSDM0_CR2			MMIO32(DFSDM_BASE + 0x104)
/** DFSDM_DFSDM0_ISR interrupt and status register **/
#define DFSDM_DFSDM0_ISR			MMIO32(DFSDM_BASE + 0x108)
/** DFSDM_DFSDM0_ICR interrupt flag clear register **/
#define DFSDM_DFSDM0_ICR			MMIO32(DFSDM_BASE + 0x10c)
/** DFSDM_DFSDM0_JCHGR injected channel group selection register **/
#define DFSDM_DFSDM0_JCHGR			MMIO32(DFSDM_BASE + 0x110)
/** DFSDM_DFSDM0_FCR filter control register **/
#define DFSDM_DFSDM0_FCR			MMIO32(DFSDM_BASE + 0x114)
/** DFSDM_DFSDM0_JDATAR data register for injected group **/
#define DFSDM_DFSDM0_JDATAR			MMIO32(DFSDM_BASE + 0x118)
/** DFSDM_DFSDM0_RDATAR data register for the regular channel **/
#define DFSDM_DFSDM0_RDATAR			MMIO32(DFSDM_BASE + 0x11c)
/** DFSDM_DFSDM0_AWHTR analog watchdog high threshold register **/
#define DFSDM_DFSDM0_AWHTR			MMIO32(DFSDM_BASE + 0x120)
/** DFSDM_DFSDM0_AWLTR analog watchdog low threshold register **/
#define DFSDM_DFSDM0_AWLTR			MMIO32(DFSDM_BASE + 0x124)
/** DFSDM_DFSDM0_AWSR analog watchdog status register **/
#define DFSDM_DFSDM0_AWSR			MMIO32(DFSDM_BASE + 0x128)
/** DFSDM_DFSDM0_AWCFR analog watchdog clear flag register **/
#define DFSDM_DFSDM0_AWCFR			MMIO32(DFSDM_BASE + 0x12c)
/** DFSDM_DFSDM0_EXMAX Extremes detector maximum register **/
#define DFSDM_DFSDM0_EXMAX			MMIO32(DFSDM_BASE + 0x130)
/** DFSDM_DFSDM0_EXMIN Extremes detector minimum register **/
#define DFSDM_DFSDM0_EXMIN			MMIO32(DFSDM_BASE + 0x134)
/** DFSDM_DFSDM0_CNVTIMR conversion timer register **/
#define DFSDM_DFSDM0_CNVTIMR			MMIO32(DFSDM_BASE + 0x138)
/** DFSDM_DFSDM1_CR1 control register 1 **/
#define DFSDM_DFSDM1_CR1			MMIO32(DFSDM_BASE + 0x200)
/** DFSDM_DFSDM1_CR2 control register 2 **/
#define DFSDM_DFSDM1_CR2			MMIO32(DFSDM_BASE + 0x204)
/** DFSDM_DFSDM1_ISR interrupt and status register **/
#define DFSDM_DFSDM1_ISR			MMIO32(DFSDM_BASE + 0x208)
/** DFSDM_DFSDM1_ICR interrupt flag clear register **/
#define DFSDM_DFSDM1_ICR			MMIO32(DFSDM_BASE + 0x20c)
/** DFSDM_DFSDM1_JCHGR injected channel group selection register **/
#define DFSDM_DFSDM1_JCHGR			MMIO32(DFSDM_BASE + 0x210)
/** DFSDM_DFSDM1_FCR filter control register **/
#define DFSDM_DFSDM1_FCR			MMIO32(DFSDM_BASE + 0x214)
/** DFSDM_DFSDM1_JDATAR data register for injected group **/
#define DFSDM_DFSDM1_JDATAR			MMIO32(DFSDM_BASE + 0x218)
/** DFSDM_DFSDM1_RDATAR data register for the regular channel **/
#define DFSDM_DFSDM1_RDATAR			MMIO32(DFSDM_BASE + 0x21c)
/** DFSDM_DFSDM1_AWHTR analog watchdog high threshold register **/
#define DFSDM_DFSDM1_AWHTR			MMIO32(DFSDM_BASE + 0x220)
/** DFSDM_DFSDM1_AWLTR analog watchdog low threshold register **/
#define DFSDM_DFSDM1_AWLTR			MMIO32(DFSDM_BASE + 0x224)
/** DFSDM_DFSDM1_AWSR analog watchdog status register **/
#define DFSDM_DFSDM1_AWSR			MMIO32(DFSDM_BASE + 0x228)
/** DFSDM_DFSDM1_AWCFR analog watchdog clear flag register **/
#define DFSDM_DFSDM1_AWCFR			MMIO32(DFSDM_BASE + 0x22c)
/** DFSDM_DFSDM1_EXMAX Extremes detector maximum register **/
#define DFSDM_DFSDM1_EXMAX			MMIO32(DFSDM_BASE + 0x230)
/** DFSDM_DFSDM1_EXMIN Extremes detector minimum register **/
#define DFSDM_DFSDM1_EXMIN			MMIO32(DFSDM_BASE + 0x234)
/** DFSDM_DFSDM1_CNVTIMR conversion timer register **/
#define DFSDM_DFSDM1_CNVTIMR			MMIO32(DFSDM_BASE + 0x238)
/** DFSDM_DFSDM2_CR1 control register 1 **/
#define DFSDM_DFSDM2_CR1			MMIO32(DFSDM_BASE + 0x300)
/** DFSDM_DFSDM2_CR2 control register 2 **/
#define DFSDM_DFSDM2_CR2			MMIO32(DFSDM_BASE + 0x304)
/** DFSDM_DFSDM2_ISR interrupt and status register **/
#define DFSDM_DFSDM2_ISR			MMIO32(DFSDM_BASE + 0x308)
/** DFSDM_DFSDM2_ICR interrupt flag clear register **/
#define DFSDM_DFSDM2_ICR			MMIO32(DFSDM_BASE + 0x30c)
/** DFSDM_DFSDM2_JCHGR injected channel group selection register **/
#define DFSDM_DFSDM2_JCHGR			MMIO32(DFSDM_BASE + 0x310)
/** DFSDM_DFSDM2_FCR filter control register **/
#define DFSDM_DFSDM2_FCR			MMIO32(DFSDM_BASE + 0x314)
/** DFSDM_DFSDM2_JDATAR data register for injected group **/
#define DFSDM_DFSDM2_JDATAR			MMIO32(DFSDM_BASE + 0x318)
/** DFSDM_DFSDM2_RDATAR data register for the regular channel **/
#define DFSDM_DFSDM2_RDATAR			MMIO32(DFSDM_BASE + 0x31c)
/** DFSDM_DFSDM2_AWHTR analog watchdog high threshold register **/
#define DFSDM_DFSDM2_AWHTR			MMIO32(DFSDM_BASE + 0x320)
/** DFSDM_DFSDM2_AWLTR analog watchdog low threshold register **/
#define DFSDM_DFSDM2_AWLTR			MMIO32(DFSDM_BASE + 0x324)
/** DFSDM_DFSDM2_AWSR analog watchdog status register **/
#define DFSDM_DFSDM2_AWSR			MMIO32(DFSDM_BASE + 0x328)
/** DFSDM_DFSDM2_AWCFR analog watchdog clear flag register **/
#define DFSDM_DFSDM2_AWCFR			MMIO32(DFSDM_BASE + 0x32c)
/** DFSDM_DFSDM2_EXMAX Extremes detector maximum register **/
#define DFSDM_DFSDM2_EXMAX			MMIO32(DFSDM_BASE + 0x330)
/** DFSDM_DFSDM2_EXMIN Extremes detector minimum register **/
#define DFSDM_DFSDM2_EXMIN			MMIO32(DFSDM_BASE + 0x334)
/** DFSDM_DFSDM2_CNVTIMR conversion timer register **/
#define DFSDM_DFSDM2_CNVTIMR			MMIO32(DFSDM_BASE + 0x338)
/** DFSDM_DFSDM3_CR1 control register 1 **/
#define DFSDM_DFSDM3_CR1			MMIO32(DFSDM_BASE + 0x400)
/** DFSDM_DFSDM3_CR2 control register 2 **/
#define DFSDM_DFSDM3_CR2			MMIO32(DFSDM_BASE + 0x404)
/** DFSDM_DFSDM3_ISR interrupt and status register **/
#define DFSDM_DFSDM3_ISR			MMIO32(DFSDM_BASE + 0x408)
/** DFSDM_DFSDM3_ICR interrupt flag clear register **/
#define DFSDM_DFSDM3_ICR			MMIO32(DFSDM_BASE + 0x40c)
/** DFSDM_DFSDM3_JCHGR injected channel group selection register **/
#define DFSDM_DFSDM3_JCHGR			MMIO32(DFSDM_BASE + 0x410)
/** DFSDM_DFSDM3_FCR filter control register **/
#define DFSDM_DFSDM3_FCR			MMIO32(DFSDM_BASE + 0x414)
/** DFSDM_DFSDM3_JDATAR data register for injected group **/
#define DFSDM_DFSDM3_JDATAR			MMIO32(DFSDM_BASE + 0x418)
/** DFSDM_DFSDM3_RDATAR data register for the regular channel **/
#define DFSDM_DFSDM3_RDATAR			MMIO32(DFSDM_BASE + 0x41c)
/** DFSDM_DFSDM3_AWHTR analog watchdog high threshold register **/
#define DFSDM_DFSDM3_AWHTR			MMIO32(DFSDM_BASE + 0x420)
/** DFSDM_DFSDM3_AWLTR analog watchdog low threshold register **/
#define DFSDM_DFSDM3_AWLTR			MMIO32(DFSDM_BASE + 0x424)
/** DFSDM_DFSDM3_AWSR analog watchdog status register **/
#define DFSDM_DFSDM3_AWSR			MMIO32(DFSDM_BASE + 0x428)
/** DFSDM_DFSDM3_AWCFR analog watchdog clear flag register **/
#define DFSDM_DFSDM3_AWCFR			MMIO32(DFSDM_BASE + 0x42c)
/** DFSDM_DFSDM3_EXMAX Extremes detector maximum register **/
#define DFSDM_DFSDM3_EXMAX			MMIO32(DFSDM_BASE + 0x430)
/** DFSDM_DFSDM3_EXMIN Extremes detector minimum register **/
#define DFSDM_DFSDM3_EXMIN			MMIO32(DFSDM_BASE + 0x434)
/** DFSDM_DFSDM3_CNVTIMR conversion timer register **/
#define DFSDM_DFSDM3_CNVTIMR			MMIO32(DFSDM_BASE + 0x438)

/**@}*/


/** @defgroup dfsdm_chcfg0r1 CHCFG0R1 channel configuration y register
@{*/

/** DFSDM_CHCFG0R1_DFSDMEN DFSDMEN **/
#define DFSDM_CHCFG0R1_DFSDMEN		(1 << 31)
/** DFSDM_CHCFG0R1_CKOUTSRC CKOUTSRC **/
#define DFSDM_CHCFG0R1_CKOUTSRC		(1 << 30)

#define DFSDM_CHCFG0R1_CKOUTDIV_SHIFT		16
#define DFSDM_CHCFG0R1_CKOUTDIV_MASK		0xff
/** @defgroup dfsdm_chcfg0r1_ckoutdiv CKOUTDIV CKOUTDIV
@{*/
/**@}*/


#define DFSDM_CHCFG0R1_DATPACK_SHIFT		14
#define DFSDM_CHCFG0R1_DATPACK_MASK		0x03
/** @defgroup dfsdm_chcfg0r1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM_CHCFG0R1_DATMPX_SHIFT		12
#define DFSDM_CHCFG0R1_DATMPX_MASK		0x03
/** @defgroup dfsdm_chcfg0r1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM_CHCFG0R1_CHINSEL CHINSEL **/
#define DFSDM_CHCFG0R1_CHINSEL		(1 << 8)
/** DFSDM_CHCFG0R1_CHEN CHEN **/
#define DFSDM_CHCFG0R1_CHEN		(1 << 7)
/** DFSDM_CHCFG0R1_CKABEN CKABEN **/
#define DFSDM_CHCFG0R1_CKABEN		(1 << 6)
/** DFSDM_CHCFG0R1_SCDEN SCDEN **/
#define DFSDM_CHCFG0R1_SCDEN		(1 << 5)

#define DFSDM_CHCFG0R1_SPICKSEL_SHIFT		2
#define DFSDM_CHCFG0R1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm_chcfg0r1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM_CHCFG0R1_SITP_SHIFT		0
#define DFSDM_CHCFG0R1_SITP_MASK		0x03
/** @defgroup dfsdm_chcfg0r1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg0r2 CHCFG0R2 channel configuration y register
@{*/


#define DFSDM_CHCFG0R2_OFFSET_SHIFT		8
#define DFSDM_CHCFG0R2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm_chcfg0r2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM_CHCFG0R2_DTRBS_SHIFT		3
#define DFSDM_CHCFG0R2_DTRBS_MASK		0x1f
/** @defgroup dfsdm_chcfg0r2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_awscd0r AWSCD0R analog watchdog and short-circuit detector register
@{*/


#define DFSDM_AWSCD0R_AWFORD_SHIFT		22
#define DFSDM_AWSCD0R_AWFORD_MASK		0x03
/** @defgroup dfsdm_awscd0r_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM_AWSCD0R_AWFOSR_SHIFT		16
#define DFSDM_AWSCD0R_AWFOSR_MASK		0x1f
/** @defgroup dfsdm_awscd0r_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM_AWSCD0R_BKSCD_SHIFT		12
#define DFSDM_AWSCD0R_BKSCD_MASK		0x0f
/** @defgroup dfsdm_awscd0r_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM_AWSCD0R_SCDT_SHIFT		0
#define DFSDM_AWSCD0R_SCDT_MASK		0xff
/** @defgroup dfsdm_awscd0r_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chwdat0r CHWDAT0R channel watchdog filter data register
@{*/


#define DFSDM_CHWDAT0R_WDATA_SHIFT		0
#define DFSDM_CHWDAT0R_WDATA_MASK		0xffff
/** @defgroup dfsdm_chwdat0r_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chdatin0r CHDATIN0R channel data input register
@{*/


#define DFSDM_CHDATIN0R_INDAT1_SHIFT		16
#define DFSDM_CHDATIN0R_INDAT1_MASK		0xffff
/** @defgroup dfsdm_chdatin0r_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM_CHDATIN0R_INDAT0_SHIFT		0
#define DFSDM_CHDATIN0R_INDAT0_MASK		0xffff
/** @defgroup dfsdm_chdatin0r_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg1r1 CHCFG1R1 CHCFG1R1
@{*/


#define DFSDM_CHCFG1R1_DATPACK_SHIFT		14
#define DFSDM_CHCFG1R1_DATPACK_MASK		0x03
/** @defgroup dfsdm_chcfg1r1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM_CHCFG1R1_DATMPX_SHIFT		12
#define DFSDM_CHCFG1R1_DATMPX_MASK		0x03
/** @defgroup dfsdm_chcfg1r1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM_CHCFG1R1_CHINSEL CHINSEL **/
#define DFSDM_CHCFG1R1_CHINSEL		(1 << 8)
/** DFSDM_CHCFG1R1_CHEN CHEN **/
#define DFSDM_CHCFG1R1_CHEN		(1 << 7)
/** DFSDM_CHCFG1R1_CKABEN CKABEN **/
#define DFSDM_CHCFG1R1_CKABEN		(1 << 6)
/** DFSDM_CHCFG1R1_SCDEN SCDEN **/
#define DFSDM_CHCFG1R1_SCDEN		(1 << 5)

#define DFSDM_CHCFG1R1_SPICKSEL_SHIFT		2
#define DFSDM_CHCFG1R1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm_chcfg1r1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM_CHCFG1R1_SITP_SHIFT		0
#define DFSDM_CHCFG1R1_SITP_MASK		0x03
/** @defgroup dfsdm_chcfg1r1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg1r2 CHCFG1R2 CHCFG1R2
@{*/


#define DFSDM_CHCFG1R2_OFFSET_SHIFT		8
#define DFSDM_CHCFG1R2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm_chcfg1r2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM_CHCFG1R2_DTRBS_SHIFT		3
#define DFSDM_CHCFG1R2_DTRBS_MASK		0x1f
/** @defgroup dfsdm_chcfg1r2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_awscd1r AWSCD1R AWSCD1R
@{*/


#define DFSDM_AWSCD1R_AWFORD_SHIFT		22
#define DFSDM_AWSCD1R_AWFORD_MASK		0x03
/** @defgroup dfsdm_awscd1r_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM_AWSCD1R_AWFOSR_SHIFT		16
#define DFSDM_AWSCD1R_AWFOSR_MASK		0x1f
/** @defgroup dfsdm_awscd1r_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM_AWSCD1R_BKSCD_SHIFT		12
#define DFSDM_AWSCD1R_BKSCD_MASK		0x0f
/** @defgroup dfsdm_awscd1r_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM_AWSCD1R_SCDT_SHIFT		0
#define DFSDM_AWSCD1R_SCDT_MASK		0xff
/** @defgroup dfsdm_awscd1r_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chwdat1r CHWDAT1R CHWDAT1R
@{*/


#define DFSDM_CHWDAT1R_WDATA_SHIFT		0
#define DFSDM_CHWDAT1R_WDATA_MASK		0xffff
/** @defgroup dfsdm_chwdat1r_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chdatin1r CHDATIN1R CHDATIN1R
@{*/


#define DFSDM_CHDATIN1R_INDAT1_SHIFT		16
#define DFSDM_CHDATIN1R_INDAT1_MASK		0xffff
/** @defgroup dfsdm_chdatin1r_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM_CHDATIN1R_INDAT0_SHIFT		0
#define DFSDM_CHDATIN1R_INDAT0_MASK		0xffff
/** @defgroup dfsdm_chdatin1r_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg2r1 CHCFG2R1 CHCFG2R1
@{*/


#define DFSDM_CHCFG2R1_DATPACK_SHIFT		14
#define DFSDM_CHCFG2R1_DATPACK_MASK		0x03
/** @defgroup dfsdm_chcfg2r1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM_CHCFG2R1_DATMPX_SHIFT		12
#define DFSDM_CHCFG2R1_DATMPX_MASK		0x03
/** @defgroup dfsdm_chcfg2r1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM_CHCFG2R1_CHINSEL CHINSEL **/
#define DFSDM_CHCFG2R1_CHINSEL		(1 << 8)
/** DFSDM_CHCFG2R1_CHEN CHEN **/
#define DFSDM_CHCFG2R1_CHEN		(1 << 7)
/** DFSDM_CHCFG2R1_CKABEN CKABEN **/
#define DFSDM_CHCFG2R1_CKABEN		(1 << 6)
/** DFSDM_CHCFG2R1_SCDEN SCDEN **/
#define DFSDM_CHCFG2R1_SCDEN		(1 << 5)

#define DFSDM_CHCFG2R1_SPICKSEL_SHIFT		2
#define DFSDM_CHCFG2R1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm_chcfg2r1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM_CHCFG2R1_SITP_SHIFT		0
#define DFSDM_CHCFG2R1_SITP_MASK		0x03
/** @defgroup dfsdm_chcfg2r1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg2r2 CHCFG2R2 CHCFG2R2
@{*/


#define DFSDM_CHCFG2R2_OFFSET_SHIFT		8
#define DFSDM_CHCFG2R2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm_chcfg2r2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM_CHCFG2R2_DTRBS_SHIFT		3
#define DFSDM_CHCFG2R2_DTRBS_MASK		0x1f
/** @defgroup dfsdm_chcfg2r2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_awscd2r AWSCD2R AWSCD2R
@{*/


#define DFSDM_AWSCD2R_AWFORD_SHIFT		22
#define DFSDM_AWSCD2R_AWFORD_MASK		0x03
/** @defgroup dfsdm_awscd2r_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM_AWSCD2R_AWFOSR_SHIFT		16
#define DFSDM_AWSCD2R_AWFOSR_MASK		0x1f
/** @defgroup dfsdm_awscd2r_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM_AWSCD2R_BKSCD_SHIFT		12
#define DFSDM_AWSCD2R_BKSCD_MASK		0x0f
/** @defgroup dfsdm_awscd2r_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM_AWSCD2R_SCDT_SHIFT		0
#define DFSDM_AWSCD2R_SCDT_MASK		0xff
/** @defgroup dfsdm_awscd2r_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chwdat2r CHWDAT2R CHWDAT2R
@{*/


#define DFSDM_CHWDAT2R_WDATA_SHIFT		0
#define DFSDM_CHWDAT2R_WDATA_MASK		0xffff
/** @defgroup dfsdm_chwdat2r_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chdatin2r CHDATIN2R CHDATIN2R
@{*/


#define DFSDM_CHDATIN2R_INDAT1_SHIFT		16
#define DFSDM_CHDATIN2R_INDAT1_MASK		0xffff
/** @defgroup dfsdm_chdatin2r_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM_CHDATIN2R_INDAT0_SHIFT		0
#define DFSDM_CHDATIN2R_INDAT0_MASK		0xffff
/** @defgroup dfsdm_chdatin2r_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg3r1 CHCFG3R1 CHCFG3R1
@{*/


#define DFSDM_CHCFG3R1_DATPACK_SHIFT		14
#define DFSDM_CHCFG3R1_DATPACK_MASK		0x03
/** @defgroup dfsdm_chcfg3r1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM_CHCFG3R1_DATMPX_SHIFT		12
#define DFSDM_CHCFG3R1_DATMPX_MASK		0x03
/** @defgroup dfsdm_chcfg3r1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM_CHCFG3R1_CHINSEL CHINSEL **/
#define DFSDM_CHCFG3R1_CHINSEL		(1 << 8)
/** DFSDM_CHCFG3R1_CHEN CHEN **/
#define DFSDM_CHCFG3R1_CHEN		(1 << 7)
/** DFSDM_CHCFG3R1_CKABEN CKABEN **/
#define DFSDM_CHCFG3R1_CKABEN		(1 << 6)
/** DFSDM_CHCFG3R1_SCDEN SCDEN **/
#define DFSDM_CHCFG3R1_SCDEN		(1 << 5)

#define DFSDM_CHCFG3R1_SPICKSEL_SHIFT		2
#define DFSDM_CHCFG3R1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm_chcfg3r1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM_CHCFG3R1_SITP_SHIFT		0
#define DFSDM_CHCFG3R1_SITP_MASK		0x03
/** @defgroup dfsdm_chcfg3r1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg3r2 CHCFG3R2 CHCFG3R2
@{*/


#define DFSDM_CHCFG3R2_OFFSET_SHIFT		8
#define DFSDM_CHCFG3R2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm_chcfg3r2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM_CHCFG3R2_DTRBS_SHIFT		3
#define DFSDM_CHCFG3R2_DTRBS_MASK		0x1f
/** @defgroup dfsdm_chcfg3r2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_awscd3r AWSCD3R AWSCD3R
@{*/


#define DFSDM_AWSCD3R_AWFORD_SHIFT		22
#define DFSDM_AWSCD3R_AWFORD_MASK		0x03
/** @defgroup dfsdm_awscd3r_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM_AWSCD3R_AWFOSR_SHIFT		16
#define DFSDM_AWSCD3R_AWFOSR_MASK		0x1f
/** @defgroup dfsdm_awscd3r_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM_AWSCD3R_BKSCD_SHIFT		12
#define DFSDM_AWSCD3R_BKSCD_MASK		0x0f
/** @defgroup dfsdm_awscd3r_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM_AWSCD3R_SCDT_SHIFT		0
#define DFSDM_AWSCD3R_SCDT_MASK		0xff
/** @defgroup dfsdm_awscd3r_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chwdat3r CHWDAT3R CHWDAT3R
@{*/


#define DFSDM_CHWDAT3R_WDATA_SHIFT		0
#define DFSDM_CHWDAT3R_WDATA_MASK		0xffff
/** @defgroup dfsdm_chwdat3r_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chdatin3r CHDATIN3R CHDATIN3R
@{*/


#define DFSDM_CHDATIN3R_INDAT1_SHIFT		16
#define DFSDM_CHDATIN3R_INDAT1_MASK		0xffff
/** @defgroup dfsdm_chdatin3r_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM_CHDATIN3R_INDAT0_SHIFT		0
#define DFSDM_CHDATIN3R_INDAT0_MASK		0xffff
/** @defgroup dfsdm_chdatin3r_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg4r1 CHCFG4R1 CHCFG4R1
@{*/


#define DFSDM_CHCFG4R1_DATPACK_SHIFT		14
#define DFSDM_CHCFG4R1_DATPACK_MASK		0x03
/** @defgroup dfsdm_chcfg4r1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM_CHCFG4R1_DATMPX_SHIFT		12
#define DFSDM_CHCFG4R1_DATMPX_MASK		0x03
/** @defgroup dfsdm_chcfg4r1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM_CHCFG4R1_CHINSEL CHINSEL **/
#define DFSDM_CHCFG4R1_CHINSEL		(1 << 8)
/** DFSDM_CHCFG4R1_CHEN CHEN **/
#define DFSDM_CHCFG4R1_CHEN		(1 << 7)
/** DFSDM_CHCFG4R1_CKABEN CKABEN **/
#define DFSDM_CHCFG4R1_CKABEN		(1 << 6)
/** DFSDM_CHCFG4R1_SCDEN SCDEN **/
#define DFSDM_CHCFG4R1_SCDEN		(1 << 5)

#define DFSDM_CHCFG4R1_SPICKSEL_SHIFT		2
#define DFSDM_CHCFG4R1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm_chcfg4r1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM_CHCFG4R1_SITP_SHIFT		0
#define DFSDM_CHCFG4R1_SITP_MASK		0x03
/** @defgroup dfsdm_chcfg4r1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg4r2 CHCFG4R2 CHCFG4R2
@{*/


#define DFSDM_CHCFG4R2_OFFSET_SHIFT		8
#define DFSDM_CHCFG4R2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm_chcfg4r2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM_CHCFG4R2_DTRBS_SHIFT		3
#define DFSDM_CHCFG4R2_DTRBS_MASK		0x1f
/** @defgroup dfsdm_chcfg4r2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_awscd4r AWSCD4R AWSCD4R
@{*/


#define DFSDM_AWSCD4R_AWFORD_SHIFT		22
#define DFSDM_AWSCD4R_AWFORD_MASK		0x03
/** @defgroup dfsdm_awscd4r_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM_AWSCD4R_AWFOSR_SHIFT		16
#define DFSDM_AWSCD4R_AWFOSR_MASK		0x1f
/** @defgroup dfsdm_awscd4r_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM_AWSCD4R_BKSCD_SHIFT		12
#define DFSDM_AWSCD4R_BKSCD_MASK		0x0f
/** @defgroup dfsdm_awscd4r_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM_AWSCD4R_SCDT_SHIFT		0
#define DFSDM_AWSCD4R_SCDT_MASK		0xff
/** @defgroup dfsdm_awscd4r_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chwdat4r CHWDAT4R CHWDAT4R
@{*/


#define DFSDM_CHWDAT4R_WDATA_SHIFT		0
#define DFSDM_CHWDAT4R_WDATA_MASK		0xffff
/** @defgroup dfsdm_chwdat4r_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chdatin4r CHDATIN4R CHDATIN4R
@{*/


#define DFSDM_CHDATIN4R_INDAT1_SHIFT		16
#define DFSDM_CHDATIN4R_INDAT1_MASK		0xffff
/** @defgroup dfsdm_chdatin4r_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM_CHDATIN4R_INDAT0_SHIFT		0
#define DFSDM_CHDATIN4R_INDAT0_MASK		0xffff
/** @defgroup dfsdm_chdatin4r_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg5r1 CHCFG5R1 CHCFG5R1
@{*/


#define DFSDM_CHCFG5R1_DATPACK_SHIFT		14
#define DFSDM_CHCFG5R1_DATPACK_MASK		0x03
/** @defgroup dfsdm_chcfg5r1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM_CHCFG5R1_DATMPX_SHIFT		12
#define DFSDM_CHCFG5R1_DATMPX_MASK		0x03
/** @defgroup dfsdm_chcfg5r1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM_CHCFG5R1_CHINSEL CHINSEL **/
#define DFSDM_CHCFG5R1_CHINSEL		(1 << 8)
/** DFSDM_CHCFG5R1_CHEN CHEN **/
#define DFSDM_CHCFG5R1_CHEN		(1 << 7)
/** DFSDM_CHCFG5R1_CKABEN CKABEN **/
#define DFSDM_CHCFG5R1_CKABEN		(1 << 6)
/** DFSDM_CHCFG5R1_SCDEN SCDEN **/
#define DFSDM_CHCFG5R1_SCDEN		(1 << 5)

#define DFSDM_CHCFG5R1_SPICKSEL_SHIFT		2
#define DFSDM_CHCFG5R1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm_chcfg5r1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM_CHCFG5R1_SITP_SHIFT		0
#define DFSDM_CHCFG5R1_SITP_MASK		0x03
/** @defgroup dfsdm_chcfg5r1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg5r2 CHCFG5R2 CHCFG5R2
@{*/


#define DFSDM_CHCFG5R2_OFFSET_SHIFT		8
#define DFSDM_CHCFG5R2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm_chcfg5r2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM_CHCFG5R2_DTRBS_SHIFT		3
#define DFSDM_CHCFG5R2_DTRBS_MASK		0x1f
/** @defgroup dfsdm_chcfg5r2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_awscd5r AWSCD5R AWSCD5R
@{*/


#define DFSDM_AWSCD5R_AWFORD_SHIFT		22
#define DFSDM_AWSCD5R_AWFORD_MASK		0x03
/** @defgroup dfsdm_awscd5r_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM_AWSCD5R_AWFOSR_SHIFT		16
#define DFSDM_AWSCD5R_AWFOSR_MASK		0x1f
/** @defgroup dfsdm_awscd5r_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM_AWSCD5R_BKSCD_SHIFT		12
#define DFSDM_AWSCD5R_BKSCD_MASK		0x0f
/** @defgroup dfsdm_awscd5r_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM_AWSCD5R_SCDT_SHIFT		0
#define DFSDM_AWSCD5R_SCDT_MASK		0xff
/** @defgroup dfsdm_awscd5r_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chwdat5r CHWDAT5R CHWDAT5R
@{*/


#define DFSDM_CHWDAT5R_WDATA_SHIFT		0
#define DFSDM_CHWDAT5R_WDATA_MASK		0xffff
/** @defgroup dfsdm_chwdat5r_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chdatin5r CHDATIN5R CHDATIN5R
@{*/


#define DFSDM_CHDATIN5R_INDAT1_SHIFT		16
#define DFSDM_CHDATIN5R_INDAT1_MASK		0xffff
/** @defgroup dfsdm_chdatin5r_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM_CHDATIN5R_INDAT0_SHIFT		0
#define DFSDM_CHDATIN5R_INDAT0_MASK		0xffff
/** @defgroup dfsdm_chdatin5r_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg6r1 CHCFG6R1 CHCFG6R1
@{*/


#define DFSDM_CHCFG6R1_DATPACK_SHIFT		14
#define DFSDM_CHCFG6R1_DATPACK_MASK		0x03
/** @defgroup dfsdm_chcfg6r1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM_CHCFG6R1_DATMPX_SHIFT		12
#define DFSDM_CHCFG6R1_DATMPX_MASK		0x03
/** @defgroup dfsdm_chcfg6r1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM_CHCFG6R1_CHINSEL CHINSEL **/
#define DFSDM_CHCFG6R1_CHINSEL		(1 << 8)
/** DFSDM_CHCFG6R1_CHEN CHEN **/
#define DFSDM_CHCFG6R1_CHEN		(1 << 7)
/** DFSDM_CHCFG6R1_CKABEN CKABEN **/
#define DFSDM_CHCFG6R1_CKABEN		(1 << 6)
/** DFSDM_CHCFG6R1_SCDEN SCDEN **/
#define DFSDM_CHCFG6R1_SCDEN		(1 << 5)

#define DFSDM_CHCFG6R1_SPICKSEL_SHIFT		2
#define DFSDM_CHCFG6R1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm_chcfg6r1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM_CHCFG6R1_SITP_SHIFT		0
#define DFSDM_CHCFG6R1_SITP_MASK		0x03
/** @defgroup dfsdm_chcfg6r1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg6r2 CHCFG6R2 CHCFG6R2
@{*/


#define DFSDM_CHCFG6R2_OFFSET_SHIFT		8
#define DFSDM_CHCFG6R2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm_chcfg6r2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM_CHCFG6R2_DTRBS_SHIFT		3
#define DFSDM_CHCFG6R2_DTRBS_MASK		0x1f
/** @defgroup dfsdm_chcfg6r2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_awscd6r AWSCD6R AWSCD6R
@{*/


#define DFSDM_AWSCD6R_AWFORD_SHIFT		22
#define DFSDM_AWSCD6R_AWFORD_MASK		0x03
/** @defgroup dfsdm_awscd6r_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM_AWSCD6R_AWFOSR_SHIFT		16
#define DFSDM_AWSCD6R_AWFOSR_MASK		0x1f
/** @defgroup dfsdm_awscd6r_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM_AWSCD6R_BKSCD_SHIFT		12
#define DFSDM_AWSCD6R_BKSCD_MASK		0x0f
/** @defgroup dfsdm_awscd6r_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM_AWSCD6R_SCDT_SHIFT		0
#define DFSDM_AWSCD6R_SCDT_MASK		0xff
/** @defgroup dfsdm_awscd6r_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chwdat6r CHWDAT6R CHWDAT6R
@{*/


#define DFSDM_CHWDAT6R_WDATA_SHIFT		0
#define DFSDM_CHWDAT6R_WDATA_MASK		0xffff
/** @defgroup dfsdm_chwdat6r_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chdatin6r CHDATIN6R CHDATIN6R
@{*/


#define DFSDM_CHDATIN6R_INDAT1_SHIFT		16
#define DFSDM_CHDATIN6R_INDAT1_MASK		0xffff
/** @defgroup dfsdm_chdatin6r_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM_CHDATIN6R_INDAT0_SHIFT		0
#define DFSDM_CHDATIN6R_INDAT0_MASK		0xffff
/** @defgroup dfsdm_chdatin6r_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg7r1 CHCFG7R1 CHCFG7R1
@{*/


#define DFSDM_CHCFG7R1_DATPACK_SHIFT		14
#define DFSDM_CHCFG7R1_DATPACK_MASK		0x03
/** @defgroup dfsdm_chcfg7r1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM_CHCFG7R1_DATMPX_SHIFT		12
#define DFSDM_CHCFG7R1_DATMPX_MASK		0x03
/** @defgroup dfsdm_chcfg7r1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM_CHCFG7R1_CHINSEL CHINSEL **/
#define DFSDM_CHCFG7R1_CHINSEL		(1 << 8)
/** DFSDM_CHCFG7R1_CHEN CHEN **/
#define DFSDM_CHCFG7R1_CHEN		(1 << 7)
/** DFSDM_CHCFG7R1_CKABEN CKABEN **/
#define DFSDM_CHCFG7R1_CKABEN		(1 << 6)
/** DFSDM_CHCFG7R1_SCDEN SCDEN **/
#define DFSDM_CHCFG7R1_SCDEN		(1 << 5)

#define DFSDM_CHCFG7R1_SPICKSEL_SHIFT		2
#define DFSDM_CHCFG7R1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm_chcfg7r1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM_CHCFG7R1_SITP_SHIFT		0
#define DFSDM_CHCFG7R1_SITP_MASK		0x03
/** @defgroup dfsdm_chcfg7r1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chcfg7r2 CHCFG7R2 CHCFG7R2
@{*/


#define DFSDM_CHCFG7R2_OFFSET_SHIFT		8
#define DFSDM_CHCFG7R2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm_chcfg7r2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM_CHCFG7R2_DTRBS_SHIFT		3
#define DFSDM_CHCFG7R2_DTRBS_MASK		0x1f
/** @defgroup dfsdm_chcfg7r2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_awscd7r AWSCD7R AWSCD7R
@{*/


#define DFSDM_AWSCD7R_AWFORD_SHIFT		22
#define DFSDM_AWSCD7R_AWFORD_MASK		0x03
/** @defgroup dfsdm_awscd7r_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM_AWSCD7R_AWFOSR_SHIFT		16
#define DFSDM_AWSCD7R_AWFOSR_MASK		0x1f
/** @defgroup dfsdm_awscd7r_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM_AWSCD7R_BKSCD_SHIFT		12
#define DFSDM_AWSCD7R_BKSCD_MASK		0x0f
/** @defgroup dfsdm_awscd7r_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM_AWSCD7R_SCDT_SHIFT		0
#define DFSDM_AWSCD7R_SCDT_MASK		0xff
/** @defgroup dfsdm_awscd7r_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chwdat7r CHWDAT7R CHWDAT7R
@{*/


#define DFSDM_CHWDAT7R_WDATA_SHIFT		0
#define DFSDM_CHWDAT7R_WDATA_MASK		0xffff
/** @defgroup dfsdm_chwdat7r_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_chdatin7r CHDATIN7R CHDATIN7R
@{*/


#define DFSDM_CHDATIN7R_INDAT1_SHIFT		16
#define DFSDM_CHDATIN7R_INDAT1_MASK		0xffff
/** @defgroup dfsdm_chdatin7r_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM_CHDATIN7R_INDAT0_SHIFT		0
#define DFSDM_CHDATIN7R_INDAT0_MASK		0xffff
/** @defgroup dfsdm_chdatin7r_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm0_cr1 DFSDM0CR1 control register 1
@{*/

/** DFSDM_DFSDM0_CR1_AWFSEL Analog watchdog fast mode select **/
#define DFSDM_DFSDM0_CR1_AWFSEL		(1 << 30)
/** DFSDM_DFSDM0_CR1_FAST Fast conversion mode selection for regular conversions **/
#define DFSDM_DFSDM0_CR1_FAST		(1 << 29)

#define DFSDM_DFSDM0_CR1_RCH_SHIFT		24
#define DFSDM_DFSDM0_CR1_RCH_MASK		0x07
/** @defgroup dfsdm_dfsdm0_cr1_rch RCH Regular channel selection
@{*/
/**@}*/

/** DFSDM_DFSDM0_CR1_RDMAEN DMA channel enabled to read data for the regular conversion **/
#define DFSDM_DFSDM0_CR1_RDMAEN		(1 << 21)
/** DFSDM_DFSDM0_CR1_RSYNC Launch regular conversion synchronously with DFSDM0 **/
#define DFSDM_DFSDM0_CR1_RSYNC		(1 << 19)
/** DFSDM_DFSDM0_CR1_RCONT Continuous mode selection for regular conversions **/
#define DFSDM_DFSDM0_CR1_RCONT		(1 << 18)
/** DFSDM_DFSDM0_CR1_RSWSTART Software start of a conversion on the regular channel **/
#define DFSDM_DFSDM0_CR1_RSWSTART		(1 << 17)

#define DFSDM_DFSDM0_CR1_JEXTEN_SHIFT		13
#define DFSDM_DFSDM0_CR1_JEXTEN_MASK		0x03
/** @defgroup dfsdm_dfsdm0_cr1_jexten JEXTEN Trigger enable and trigger edge selection for injected conversions
@{*/
/**@}*/


#define DFSDM_DFSDM0_CR1_JEXTSEL_SHIFT		8
#define DFSDM_DFSDM0_CR1_JEXTSEL_MASK		0x07
/** @defgroup dfsdm_dfsdm0_cr1_jextsel JEXTSEL Trigger signal selection for launching injected conversions
@{*/
/**@}*/

/** DFSDM_DFSDM0_CR1_JDMAEN DMA channel enabled to read data for the injected channel group **/
#define DFSDM_DFSDM0_CR1_JDMAEN		(1 << 5)
/** DFSDM_DFSDM0_CR1_JSCAN Scanning conversion mode for injected conversions **/
#define DFSDM_DFSDM0_CR1_JSCAN		(1 << 4)
/** DFSDM_DFSDM0_CR1_JSYNC Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger **/
#define DFSDM_DFSDM0_CR1_JSYNC		(1 << 3)
/** DFSDM_DFSDM0_CR1_JSWSTART Start a conversion of the injected group of channels **/
#define DFSDM_DFSDM0_CR1_JSWSTART		(1 << 1)
/** DFSDM_DFSDM0_CR1_DFEN DFSDM enable **/
#define DFSDM_DFSDM0_CR1_DFEN		(1 << 0)

/**@}*/

/** @defgroup dfsdm_dfsdm0_cr2 DFSDM0CR2 control register 2
@{*/


#define DFSDM_DFSDM0_CR2_AWDCH_SHIFT		16
#define DFSDM_DFSDM0_CR2_AWDCH_MASK		0xff
/** @defgroup dfsdm_dfsdm0_cr2_awdch AWDCH Analog watchdog channel selection
@{*/
/**@}*/


#define DFSDM_DFSDM0_CR2_EXCH_SHIFT		8
#define DFSDM_DFSDM0_CR2_EXCH_MASK		0xff
/** @defgroup dfsdm_dfsdm0_cr2_exch EXCH Extremes detector channel selection
@{*/
/**@}*/

/** DFSDM_DFSDM0_CR2_CKABIE Clock absence interrupt enable **/
#define DFSDM_DFSDM0_CR2_CKABIE		(1 << 6)
/** DFSDM_DFSDM0_CR2_SCDIE Short-circuit detector interrupt enable **/
#define DFSDM_DFSDM0_CR2_SCDIE		(1 << 5)
/** DFSDM_DFSDM0_CR2_AWDIE Analog watchdog interrupt enable **/
#define DFSDM_DFSDM0_CR2_AWDIE		(1 << 4)
/** DFSDM_DFSDM0_CR2_ROVRIE Regular data overrun interrupt enable **/
#define DFSDM_DFSDM0_CR2_ROVRIE		(1 << 3)
/** DFSDM_DFSDM0_CR2_JOVRIE Injected data overrun interrupt enable **/
#define DFSDM_DFSDM0_CR2_JOVRIE		(1 << 2)
/** DFSDM_DFSDM0_CR2_REOCIE Regular end of conversion interrupt enable **/
#define DFSDM_DFSDM0_CR2_REOCIE		(1 << 1)
/** DFSDM_DFSDM0_CR2_JEOCIE Injected end of conversion interrupt enable **/
#define DFSDM_DFSDM0_CR2_JEOCIE		(1 << 0)

/**@}*/

/** @defgroup dfsdm_dfsdm0_isr DFSDM0ISR interrupt and status register
@{*/


#define DFSDM_DFSDM0_ISR_SCDF_SHIFT		24
#define DFSDM_DFSDM0_ISR_SCDF_MASK		0xff
/** @defgroup dfsdm_dfsdm0_isr_scdf SCDF short-circuit detector flag
@{*/
/**@}*/


#define DFSDM_DFSDM0_ISR_CKABF_SHIFT		16
#define DFSDM_DFSDM0_ISR_CKABF_MASK		0xff
/** @defgroup dfsdm_dfsdm0_isr_ckabf CKABF Clock absence flag
@{*/
/**@}*/

/** DFSDM_DFSDM0_ISR_RCIP Regular conversion in progress status **/
#define DFSDM_DFSDM0_ISR_RCIP		(1 << 14)
/** DFSDM_DFSDM0_ISR_JCIP Injected conversion in progress status **/
#define DFSDM_DFSDM0_ISR_JCIP		(1 << 13)
/** DFSDM_DFSDM0_ISR_AWDF Analog watchdog **/
#define DFSDM_DFSDM0_ISR_AWDF		(1 << 4)
/** DFSDM_DFSDM0_ISR_ROVRF Regular conversion overrun flag **/
#define DFSDM_DFSDM0_ISR_ROVRF		(1 << 3)
/** DFSDM_DFSDM0_ISR_JOVRF Injected conversion overrun flag **/
#define DFSDM_DFSDM0_ISR_JOVRF		(1 << 2)
/** DFSDM_DFSDM0_ISR_REOCF End of regular conversion flag **/
#define DFSDM_DFSDM0_ISR_REOCF		(1 << 1)
/** DFSDM_DFSDM0_ISR_JEOCF End of injected conversion flag **/
#define DFSDM_DFSDM0_ISR_JEOCF		(1 << 0)

/**@}*/

/** @defgroup dfsdm_dfsdm0_icr DFSDM0ICR interrupt flag clear register
@{*/


#define DFSDM_DFSDM0_ICR_CLRSCDF_SHIFT		24
#define DFSDM_DFSDM0_ICR_CLRSCDF_MASK		0xff
/** @defgroup dfsdm_dfsdm0_icr_clrscdf CLRSCDF Clear the short-circuit detector flag
@{*/
/**@}*/


#define DFSDM_DFSDM0_ICR_CLRCKABF_SHIFT		16
#define DFSDM_DFSDM0_ICR_CLRCKABF_MASK		0xff
/** @defgroup dfsdm_dfsdm0_icr_clrckabf CLRCKABF Clear the clock absence flag
@{*/
/**@}*/

/** DFSDM_DFSDM0_ICR_CLRROVRF Clear the regular conversion overrun flag **/
#define DFSDM_DFSDM0_ICR_CLRROVRF		(1 << 3)
/** DFSDM_DFSDM0_ICR_CLRJOVRF Clear the injected conversion overrun flag **/
#define DFSDM_DFSDM0_ICR_CLRJOVRF		(1 << 2)

/**@}*/

/** @defgroup dfsdm_dfsdm0_jchgr DFSDM0JCHGR injected channel group selection register
@{*/


#define DFSDM_DFSDM0_JCHGR_JCHG_SHIFT		0
#define DFSDM_DFSDM0_JCHGR_JCHG_MASK		0xff
/** @defgroup dfsdm_dfsdm0_jchgr_jchg JCHG Injected channel group selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm0_fcr DFSDM0FCR filter control register
@{*/


#define DFSDM_DFSDM0_FCR_FORD_SHIFT		29
#define DFSDM_DFSDM0_FCR_FORD_MASK		0x07
/** @defgroup dfsdm_dfsdm0_fcr_ford FORD Sinc filter order
@{*/
/**@}*/


#define DFSDM_DFSDM0_FCR_FOSR_SHIFT		16
#define DFSDM_DFSDM0_FCR_FOSR_MASK		0x3ff
/** @defgroup dfsdm_dfsdm0_fcr_fosr FOSR Sinc filter oversampling ratio (decimation rate)
@{*/
/**@}*/


#define DFSDM_DFSDM0_FCR_IOSR_SHIFT		0
#define DFSDM_DFSDM0_FCR_IOSR_MASK		0xff
/** @defgroup dfsdm_dfsdm0_fcr_iosr IOSR Integrator oversampling ratio (averaging length)
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm0_jdatar DFSDM0JDATAR data register for injected group
@{*/


#define DFSDM_DFSDM0_JDATAR_JDATA_SHIFT		8
#define DFSDM_DFSDM0_JDATAR_JDATA_MASK		0xffffff
/** @defgroup dfsdm_dfsdm0_jdatar_jdata JDATA Injected group conversion data
@{*/
/**@}*/


#define DFSDM_DFSDM0_JDATAR_JDATACH_SHIFT		0
#define DFSDM_DFSDM0_JDATAR_JDATACH_MASK		0x07
/** @defgroup dfsdm_dfsdm0_jdatar_jdatach JDATACH Injected channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm0_rdatar DFSDM0RDATAR data register for the regular channel
@{*/


#define DFSDM_DFSDM0_RDATAR_RDATA_SHIFT		8
#define DFSDM_DFSDM0_RDATAR_RDATA_MASK		0xffffff
/** @defgroup dfsdm_dfsdm0_rdatar_rdata RDATA Regular channel conversion data
@{*/
/**@}*/

/** DFSDM_DFSDM0_RDATAR_RPEND Regular channel pending data **/
#define DFSDM_DFSDM0_RDATAR_RPEND		(1 << 4)

#define DFSDM_DFSDM0_RDATAR_RDATACH_SHIFT		0
#define DFSDM_DFSDM0_RDATAR_RDATACH_MASK		0x07
/** @defgroup dfsdm_dfsdm0_rdatar_rdatach RDATACH Regular channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm0_awhtr DFSDM0AWHTR analog watchdog high threshold register
@{*/


#define DFSDM_DFSDM0_AWHTR_AWHT_SHIFT		8
#define DFSDM_DFSDM0_AWHTR_AWHT_MASK		0xffffff
/** @defgroup dfsdm_dfsdm0_awhtr_awht AWHT Analog watchdog high threshold
@{*/
/**@}*/


#define DFSDM_DFSDM0_AWHTR_BKAWH_SHIFT		0
#define DFSDM_DFSDM0_AWHTR_BKAWH_MASK		0x0f
/** @defgroup dfsdm_dfsdm0_awhtr_bkawh BKAWH Break signal assignment to analog watchdog high threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm0_awltr DFSDM0AWLTR analog watchdog low threshold register
@{*/


#define DFSDM_DFSDM0_AWLTR_AWLT_SHIFT		8
#define DFSDM_DFSDM0_AWLTR_AWLT_MASK		0xffffff
/** @defgroup dfsdm_dfsdm0_awltr_awlt AWLT Analog watchdog low threshold
@{*/
/**@}*/


#define DFSDM_DFSDM0_AWLTR_BKAWL_SHIFT		0
#define DFSDM_DFSDM0_AWLTR_BKAWL_MASK		0x0f
/** @defgroup dfsdm_dfsdm0_awltr_bkawl BKAWL Break signal assignment to analog watchdog low threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm0_awsr DFSDM0AWSR analog watchdog status register
@{*/


#define DFSDM_DFSDM0_AWSR_AWHTF_SHIFT		8
#define DFSDM_DFSDM0_AWSR_AWHTF_MASK		0xff
/** @defgroup dfsdm_dfsdm0_awsr_awhtf AWHTF Analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM_DFSDM0_AWSR_AWLTF_SHIFT		0
#define DFSDM_DFSDM0_AWSR_AWLTF_MASK		0xff
/** @defgroup dfsdm_dfsdm0_awsr_awltf AWLTF Analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm0_awcfr DFSDM0AWCFR analog watchdog clear flag register
@{*/


#define DFSDM_DFSDM0_AWCFR_CLRAWHTF_SHIFT		8
#define DFSDM_DFSDM0_AWCFR_CLRAWHTF_MASK		0xff
/** @defgroup dfsdm_dfsdm0_awcfr_clrawhtf CLRAWHTF Clear the analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM_DFSDM0_AWCFR_CLRAWLTF_SHIFT		0
#define DFSDM_DFSDM0_AWCFR_CLRAWLTF_MASK		0xff
/** @defgroup dfsdm_dfsdm0_awcfr_clrawltf CLRAWLTF Clear the analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm0_exmax DFSDM0EXMAX Extremes detector maximum register
@{*/


#define DFSDM_DFSDM0_EXMAX_EXMAX_SHIFT		8
#define DFSDM_DFSDM0_EXMAX_EXMAX_MASK		0xffffff
/** @defgroup dfsdm_dfsdm0_exmax_exmax EXMAX Extremes detector maximum value
@{*/
/**@}*/


#define DFSDM_DFSDM0_EXMAX_EXMAXCH_SHIFT		0
#define DFSDM_DFSDM0_EXMAX_EXMAXCH_MASK		0x07
/** @defgroup dfsdm_dfsdm0_exmax_exmaxch EXMAXCH Extremes detector maximum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm0_exmin DFSDM0EXMIN Extremes detector minimum register
@{*/


#define DFSDM_DFSDM0_EXMIN_EXMIN_SHIFT		8
#define DFSDM_DFSDM0_EXMIN_EXMIN_MASK		0xffffff
/** @defgroup dfsdm_dfsdm0_exmin_exmin EXMIN EXMIN
@{*/
/**@}*/


#define DFSDM_DFSDM0_EXMIN_EXMINCH_SHIFT		0
#define DFSDM_DFSDM0_EXMIN_EXMINCH_MASK		0x07
/** @defgroup dfsdm_dfsdm0_exmin_exminch EXMINCH Extremes detector minimum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm0_cnvtimr DFSDM0CNVTIMR conversion timer register
@{*/


#define DFSDM_DFSDM0_CNVTIMR_CNVCNT_SHIFT		4
#define DFSDM_DFSDM0_CNVTIMR_CNVCNT_MASK		0xfffffff
/** @defgroup dfsdm_dfsdm0_cnvtimr_cnvcnt CNVCNT 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm1_cr1 DFSDM1CR1 control register 1
@{*/

/** DFSDM_DFSDM1_CR1_AWFSEL Analog watchdog fast mode select **/
#define DFSDM_DFSDM1_CR1_AWFSEL		(1 << 30)
/** DFSDM_DFSDM1_CR1_FAST Fast conversion mode selection for regular conversions **/
#define DFSDM_DFSDM1_CR1_FAST		(1 << 29)

#define DFSDM_DFSDM1_CR1_RCH_SHIFT		24
#define DFSDM_DFSDM1_CR1_RCH_MASK		0x07
/** @defgroup dfsdm_dfsdm1_cr1_rch RCH Regular channel selection
@{*/
/**@}*/

/** DFSDM_DFSDM1_CR1_RDMAEN DMA channel enabled to read data for the regular conversion **/
#define DFSDM_DFSDM1_CR1_RDMAEN		(1 << 21)
/** DFSDM_DFSDM1_CR1_RSYNC Launch regular conversion synchronously with DFSDM0 **/
#define DFSDM_DFSDM1_CR1_RSYNC		(1 << 19)
/** DFSDM_DFSDM1_CR1_RCONT Continuous mode selection for regular conversions **/
#define DFSDM_DFSDM1_CR1_RCONT		(1 << 18)
/** DFSDM_DFSDM1_CR1_RSWSTART Software start of a conversion on the regular channel **/
#define DFSDM_DFSDM1_CR1_RSWSTART		(1 << 17)

#define DFSDM_DFSDM1_CR1_JEXTEN_SHIFT		13
#define DFSDM_DFSDM1_CR1_JEXTEN_MASK		0x03
/** @defgroup dfsdm_dfsdm1_cr1_jexten JEXTEN Trigger enable and trigger edge selection for injected conversions
@{*/
/**@}*/


#define DFSDM_DFSDM1_CR1_JEXTSEL_SHIFT		8
#define DFSDM_DFSDM1_CR1_JEXTSEL_MASK		0x07
/** @defgroup dfsdm_dfsdm1_cr1_jextsel JEXTSEL Trigger signal selection for launching injected conversions
@{*/
/**@}*/

/** DFSDM_DFSDM1_CR1_JDMAEN DMA channel enabled to read data for the injected channel group **/
#define DFSDM_DFSDM1_CR1_JDMAEN		(1 << 5)
/** DFSDM_DFSDM1_CR1_JSCAN Scanning conversion mode for injected conversions **/
#define DFSDM_DFSDM1_CR1_JSCAN		(1 << 4)
/** DFSDM_DFSDM1_CR1_JSYNC Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger **/
#define DFSDM_DFSDM1_CR1_JSYNC		(1 << 3)
/** DFSDM_DFSDM1_CR1_JSWSTART Start a conversion of the injected group of channels **/
#define DFSDM_DFSDM1_CR1_JSWSTART		(1 << 1)
/** DFSDM_DFSDM1_CR1_DFEN DFSDM enable **/
#define DFSDM_DFSDM1_CR1_DFEN		(1 << 0)

/**@}*/

/** @defgroup dfsdm_dfsdm1_cr2 DFSDM1CR2 control register 2
@{*/


#define DFSDM_DFSDM1_CR2_AWDCH_SHIFT		16
#define DFSDM_DFSDM1_CR2_AWDCH_MASK		0xff
/** @defgroup dfsdm_dfsdm1_cr2_awdch AWDCH Analog watchdog channel selection
@{*/
/**@}*/


#define DFSDM_DFSDM1_CR2_EXCH_SHIFT		8
#define DFSDM_DFSDM1_CR2_EXCH_MASK		0xff
/** @defgroup dfsdm_dfsdm1_cr2_exch EXCH Extremes detector channel selection
@{*/
/**@}*/

/** DFSDM_DFSDM1_CR2_CKABIE Clock absence interrupt enable **/
#define DFSDM_DFSDM1_CR2_CKABIE		(1 << 6)
/** DFSDM_DFSDM1_CR2_SCDIE Short-circuit detector interrupt enable **/
#define DFSDM_DFSDM1_CR2_SCDIE		(1 << 5)
/** DFSDM_DFSDM1_CR2_AWDIE Analog watchdog interrupt enable **/
#define DFSDM_DFSDM1_CR2_AWDIE		(1 << 4)
/** DFSDM_DFSDM1_CR2_ROVRIE Regular data overrun interrupt enable **/
#define DFSDM_DFSDM1_CR2_ROVRIE		(1 << 3)
/** DFSDM_DFSDM1_CR2_JOVRIE Injected data overrun interrupt enable **/
#define DFSDM_DFSDM1_CR2_JOVRIE		(1 << 2)
/** DFSDM_DFSDM1_CR2_REOCIE Regular end of conversion interrupt enable **/
#define DFSDM_DFSDM1_CR2_REOCIE		(1 << 1)
/** DFSDM_DFSDM1_CR2_JEOCIE Injected end of conversion interrupt enable **/
#define DFSDM_DFSDM1_CR2_JEOCIE		(1 << 0)

/**@}*/

/** @defgroup dfsdm_dfsdm1_isr DFSDM1ISR interrupt and status register
@{*/


#define DFSDM_DFSDM1_ISR_SCDF_SHIFT		24
#define DFSDM_DFSDM1_ISR_SCDF_MASK		0xff
/** @defgroup dfsdm_dfsdm1_isr_scdf SCDF short-circuit detector flag
@{*/
/**@}*/


#define DFSDM_DFSDM1_ISR_CKABF_SHIFT		16
#define DFSDM_DFSDM1_ISR_CKABF_MASK		0xff
/** @defgroup dfsdm_dfsdm1_isr_ckabf CKABF Clock absence flag
@{*/
/**@}*/

/** DFSDM_DFSDM1_ISR_RCIP Regular conversion in progress status **/
#define DFSDM_DFSDM1_ISR_RCIP		(1 << 14)
/** DFSDM_DFSDM1_ISR_JCIP Injected conversion in progress status **/
#define DFSDM_DFSDM1_ISR_JCIP		(1 << 13)
/** DFSDM_DFSDM1_ISR_AWDF Analog watchdog **/
#define DFSDM_DFSDM1_ISR_AWDF		(1 << 4)
/** DFSDM_DFSDM1_ISR_ROVRF Regular conversion overrun flag **/
#define DFSDM_DFSDM1_ISR_ROVRF		(1 << 3)
/** DFSDM_DFSDM1_ISR_JOVRF Injected conversion overrun flag **/
#define DFSDM_DFSDM1_ISR_JOVRF		(1 << 2)
/** DFSDM_DFSDM1_ISR_REOCF End of regular conversion flag **/
#define DFSDM_DFSDM1_ISR_REOCF		(1 << 1)
/** DFSDM_DFSDM1_ISR_JEOCF End of injected conversion flag **/
#define DFSDM_DFSDM1_ISR_JEOCF		(1 << 0)

/**@}*/

/** @defgroup dfsdm_dfsdm1_icr DFSDM1ICR interrupt flag clear register
@{*/


#define DFSDM_DFSDM1_ICR_CLRSCDF_SHIFT		24
#define DFSDM_DFSDM1_ICR_CLRSCDF_MASK		0xff
/** @defgroup dfsdm_dfsdm1_icr_clrscdf CLRSCDF Clear the short-circuit detector flag
@{*/
/**@}*/


#define DFSDM_DFSDM1_ICR_CLRCKABF_SHIFT		16
#define DFSDM_DFSDM1_ICR_CLRCKABF_MASK		0xff
/** @defgroup dfsdm_dfsdm1_icr_clrckabf CLRCKABF Clear the clock absence flag
@{*/
/**@}*/

/** DFSDM_DFSDM1_ICR_CLRROVRF Clear the regular conversion overrun flag **/
#define DFSDM_DFSDM1_ICR_CLRROVRF		(1 << 3)
/** DFSDM_DFSDM1_ICR_CLRJOVRF Clear the injected conversion overrun flag **/
#define DFSDM_DFSDM1_ICR_CLRJOVRF		(1 << 2)

/**@}*/

/** @defgroup dfsdm_dfsdm1_jchgr DFSDM1JCHGR injected channel group selection register
@{*/


#define DFSDM_DFSDM1_JCHGR_JCHG_SHIFT		0
#define DFSDM_DFSDM1_JCHGR_JCHG_MASK		0xff
/** @defgroup dfsdm_dfsdm1_jchgr_jchg JCHG Injected channel group selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm1_fcr DFSDM1FCR filter control register
@{*/


#define DFSDM_DFSDM1_FCR_FORD_SHIFT		29
#define DFSDM_DFSDM1_FCR_FORD_MASK		0x07
/** @defgroup dfsdm_dfsdm1_fcr_ford FORD Sinc filter order
@{*/
/**@}*/


#define DFSDM_DFSDM1_FCR_FOSR_SHIFT		16
#define DFSDM_DFSDM1_FCR_FOSR_MASK		0x3ff
/** @defgroup dfsdm_dfsdm1_fcr_fosr FOSR Sinc filter oversampling ratio (decimation rate)
@{*/
/**@}*/


#define DFSDM_DFSDM1_FCR_IOSR_SHIFT		0
#define DFSDM_DFSDM1_FCR_IOSR_MASK		0xff
/** @defgroup dfsdm_dfsdm1_fcr_iosr IOSR Integrator oversampling ratio (averaging length)
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm1_jdatar DFSDM1JDATAR data register for injected group
@{*/


#define DFSDM_DFSDM1_JDATAR_JDATA_SHIFT		8
#define DFSDM_DFSDM1_JDATAR_JDATA_MASK		0xffffff
/** @defgroup dfsdm_dfsdm1_jdatar_jdata JDATA Injected group conversion data
@{*/
/**@}*/


#define DFSDM_DFSDM1_JDATAR_JDATACH_SHIFT		0
#define DFSDM_DFSDM1_JDATAR_JDATACH_MASK		0x07
/** @defgroup dfsdm_dfsdm1_jdatar_jdatach JDATACH Injected channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm1_rdatar DFSDM1RDATAR data register for the regular channel
@{*/


#define DFSDM_DFSDM1_RDATAR_RDATA_SHIFT		8
#define DFSDM_DFSDM1_RDATAR_RDATA_MASK		0xffffff
/** @defgroup dfsdm_dfsdm1_rdatar_rdata RDATA Regular channel conversion data
@{*/
/**@}*/

/** DFSDM_DFSDM1_RDATAR_RPEND Regular channel pending data **/
#define DFSDM_DFSDM1_RDATAR_RPEND		(1 << 4)

#define DFSDM_DFSDM1_RDATAR_RDATACH_SHIFT		0
#define DFSDM_DFSDM1_RDATAR_RDATACH_MASK		0x07
/** @defgroup dfsdm_dfsdm1_rdatar_rdatach RDATACH Regular channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm1_awhtr DFSDM1AWHTR analog watchdog high threshold register
@{*/


#define DFSDM_DFSDM1_AWHTR_AWHT_SHIFT		8
#define DFSDM_DFSDM1_AWHTR_AWHT_MASK		0xffffff
/** @defgroup dfsdm_dfsdm1_awhtr_awht AWHT Analog watchdog high threshold
@{*/
/**@}*/


#define DFSDM_DFSDM1_AWHTR_BKAWH_SHIFT		0
#define DFSDM_DFSDM1_AWHTR_BKAWH_MASK		0x0f
/** @defgroup dfsdm_dfsdm1_awhtr_bkawh BKAWH Break signal assignment to analog watchdog high threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm1_awltr DFSDM1AWLTR analog watchdog low threshold register
@{*/


#define DFSDM_DFSDM1_AWLTR_AWLT_SHIFT		8
#define DFSDM_DFSDM1_AWLTR_AWLT_MASK		0xffffff
/** @defgroup dfsdm_dfsdm1_awltr_awlt AWLT Analog watchdog low threshold
@{*/
/**@}*/


#define DFSDM_DFSDM1_AWLTR_BKAWL_SHIFT		0
#define DFSDM_DFSDM1_AWLTR_BKAWL_MASK		0x0f
/** @defgroup dfsdm_dfsdm1_awltr_bkawl BKAWL Break signal assignment to analog watchdog low threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm1_awsr DFSDM1AWSR analog watchdog status register
@{*/


#define DFSDM_DFSDM1_AWSR_AWHTF_SHIFT		8
#define DFSDM_DFSDM1_AWSR_AWHTF_MASK		0xff
/** @defgroup dfsdm_dfsdm1_awsr_awhtf AWHTF Analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM_DFSDM1_AWSR_AWLTF_SHIFT		0
#define DFSDM_DFSDM1_AWSR_AWLTF_MASK		0xff
/** @defgroup dfsdm_dfsdm1_awsr_awltf AWLTF Analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm1_awcfr DFSDM1AWCFR analog watchdog clear flag register
@{*/


#define DFSDM_DFSDM1_AWCFR_CLRAWHTF_SHIFT		8
#define DFSDM_DFSDM1_AWCFR_CLRAWHTF_MASK		0xff
/** @defgroup dfsdm_dfsdm1_awcfr_clrawhtf CLRAWHTF Clear the analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM_DFSDM1_AWCFR_CLRAWLTF_SHIFT		0
#define DFSDM_DFSDM1_AWCFR_CLRAWLTF_MASK		0xff
/** @defgroup dfsdm_dfsdm1_awcfr_clrawltf CLRAWLTF Clear the analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm1_exmax DFSDM1EXMAX Extremes detector maximum register
@{*/


#define DFSDM_DFSDM1_EXMAX_EXMAX_SHIFT		8
#define DFSDM_DFSDM1_EXMAX_EXMAX_MASK		0xffffff
/** @defgroup dfsdm_dfsdm1_exmax_exmax EXMAX Extremes detector maximum value
@{*/
/**@}*/


#define DFSDM_DFSDM1_EXMAX_EXMAXCH_SHIFT		0
#define DFSDM_DFSDM1_EXMAX_EXMAXCH_MASK		0x07
/** @defgroup dfsdm_dfsdm1_exmax_exmaxch EXMAXCH Extremes detector maximum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm1_exmin DFSDM1EXMIN Extremes detector minimum register
@{*/


#define DFSDM_DFSDM1_EXMIN_EXMIN_SHIFT		8
#define DFSDM_DFSDM1_EXMIN_EXMIN_MASK		0xffffff
/** @defgroup dfsdm_dfsdm1_exmin_exmin EXMIN EXMIN
@{*/
/**@}*/


#define DFSDM_DFSDM1_EXMIN_EXMINCH_SHIFT		0
#define DFSDM_DFSDM1_EXMIN_EXMINCH_MASK		0x07
/** @defgroup dfsdm_dfsdm1_exmin_exminch EXMINCH Extremes detector minimum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm1_cnvtimr DFSDM1CNVTIMR conversion timer register
@{*/


#define DFSDM_DFSDM1_CNVTIMR_CNVCNT_SHIFT		4
#define DFSDM_DFSDM1_CNVTIMR_CNVCNT_MASK		0xfffffff
/** @defgroup dfsdm_dfsdm1_cnvtimr_cnvcnt CNVCNT 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm2_cr1 DFSDM2CR1 control register 1
@{*/

/** DFSDM_DFSDM2_CR1_AWFSEL Analog watchdog fast mode select **/
#define DFSDM_DFSDM2_CR1_AWFSEL		(1 << 30)
/** DFSDM_DFSDM2_CR1_FAST Fast conversion mode selection for regular conversions **/
#define DFSDM_DFSDM2_CR1_FAST		(1 << 29)

#define DFSDM_DFSDM2_CR1_RCH_SHIFT		24
#define DFSDM_DFSDM2_CR1_RCH_MASK		0x07
/** @defgroup dfsdm_dfsdm2_cr1_rch RCH Regular channel selection
@{*/
/**@}*/

/** DFSDM_DFSDM2_CR1_RDMAEN DMA channel enabled to read data for the regular conversion **/
#define DFSDM_DFSDM2_CR1_RDMAEN		(1 << 21)
/** DFSDM_DFSDM2_CR1_RSYNC Launch regular conversion synchronously with DFSDM0 **/
#define DFSDM_DFSDM2_CR1_RSYNC		(1 << 19)
/** DFSDM_DFSDM2_CR1_RCONT Continuous mode selection for regular conversions **/
#define DFSDM_DFSDM2_CR1_RCONT		(1 << 18)
/** DFSDM_DFSDM2_CR1_RSWSTART Software start of a conversion on the regular channel **/
#define DFSDM_DFSDM2_CR1_RSWSTART		(1 << 17)

#define DFSDM_DFSDM2_CR1_JEXTEN_SHIFT		13
#define DFSDM_DFSDM2_CR1_JEXTEN_MASK		0x03
/** @defgroup dfsdm_dfsdm2_cr1_jexten JEXTEN Trigger enable and trigger edge selection for injected conversions
@{*/
/**@}*/


#define DFSDM_DFSDM2_CR1_JEXTSEL_SHIFT		8
#define DFSDM_DFSDM2_CR1_JEXTSEL_MASK		0x07
/** @defgroup dfsdm_dfsdm2_cr1_jextsel JEXTSEL Trigger signal selection for launching injected conversions
@{*/
/**@}*/

/** DFSDM_DFSDM2_CR1_JDMAEN DMA channel enabled to read data for the injected channel group **/
#define DFSDM_DFSDM2_CR1_JDMAEN		(1 << 5)
/** DFSDM_DFSDM2_CR1_JSCAN Scanning conversion mode for injected conversions **/
#define DFSDM_DFSDM2_CR1_JSCAN		(1 << 4)
/** DFSDM_DFSDM2_CR1_JSYNC Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger **/
#define DFSDM_DFSDM2_CR1_JSYNC		(1 << 3)
/** DFSDM_DFSDM2_CR1_JSWSTART Start a conversion of the injected group of channels **/
#define DFSDM_DFSDM2_CR1_JSWSTART		(1 << 1)
/** DFSDM_DFSDM2_CR1_DFEN DFSDM enable **/
#define DFSDM_DFSDM2_CR1_DFEN		(1 << 0)

/**@}*/

/** @defgroup dfsdm_dfsdm2_cr2 DFSDM2CR2 control register 2
@{*/


#define DFSDM_DFSDM2_CR2_AWDCH_SHIFT		16
#define DFSDM_DFSDM2_CR2_AWDCH_MASK		0xff
/** @defgroup dfsdm_dfsdm2_cr2_awdch AWDCH Analog watchdog channel selection
@{*/
/**@}*/


#define DFSDM_DFSDM2_CR2_EXCH_SHIFT		8
#define DFSDM_DFSDM2_CR2_EXCH_MASK		0xff
/** @defgroup dfsdm_dfsdm2_cr2_exch EXCH Extremes detector channel selection
@{*/
/**@}*/

/** DFSDM_DFSDM2_CR2_CKABIE Clock absence interrupt enable **/
#define DFSDM_DFSDM2_CR2_CKABIE		(1 << 6)
/** DFSDM_DFSDM2_CR2_SCDIE Short-circuit detector interrupt enable **/
#define DFSDM_DFSDM2_CR2_SCDIE		(1 << 5)
/** DFSDM_DFSDM2_CR2_AWDIE Analog watchdog interrupt enable **/
#define DFSDM_DFSDM2_CR2_AWDIE		(1 << 4)
/** DFSDM_DFSDM2_CR2_ROVRIE Regular data overrun interrupt enable **/
#define DFSDM_DFSDM2_CR2_ROVRIE		(1 << 3)
/** DFSDM_DFSDM2_CR2_JOVRIE Injected data overrun interrupt enable **/
#define DFSDM_DFSDM2_CR2_JOVRIE		(1 << 2)
/** DFSDM_DFSDM2_CR2_REOCIE Regular end of conversion interrupt enable **/
#define DFSDM_DFSDM2_CR2_REOCIE		(1 << 1)
/** DFSDM_DFSDM2_CR2_JEOCIE Injected end of conversion interrupt enable **/
#define DFSDM_DFSDM2_CR2_JEOCIE		(1 << 0)

/**@}*/

/** @defgroup dfsdm_dfsdm2_isr DFSDM2ISR interrupt and status register
@{*/


#define DFSDM_DFSDM2_ISR_SCDF_SHIFT		24
#define DFSDM_DFSDM2_ISR_SCDF_MASK		0xff
/** @defgroup dfsdm_dfsdm2_isr_scdf SCDF short-circuit detector flag
@{*/
/**@}*/


#define DFSDM_DFSDM2_ISR_CKABF_SHIFT		16
#define DFSDM_DFSDM2_ISR_CKABF_MASK		0xff
/** @defgroup dfsdm_dfsdm2_isr_ckabf CKABF Clock absence flag
@{*/
/**@}*/

/** DFSDM_DFSDM2_ISR_RCIP Regular conversion in progress status **/
#define DFSDM_DFSDM2_ISR_RCIP		(1 << 14)
/** DFSDM_DFSDM2_ISR_JCIP Injected conversion in progress status **/
#define DFSDM_DFSDM2_ISR_JCIP		(1 << 13)
/** DFSDM_DFSDM2_ISR_AWDF Analog watchdog **/
#define DFSDM_DFSDM2_ISR_AWDF		(1 << 4)
/** DFSDM_DFSDM2_ISR_ROVRF Regular conversion overrun flag **/
#define DFSDM_DFSDM2_ISR_ROVRF		(1 << 3)
/** DFSDM_DFSDM2_ISR_JOVRF Injected conversion overrun flag **/
#define DFSDM_DFSDM2_ISR_JOVRF		(1 << 2)
/** DFSDM_DFSDM2_ISR_REOCF End of regular conversion flag **/
#define DFSDM_DFSDM2_ISR_REOCF		(1 << 1)
/** DFSDM_DFSDM2_ISR_JEOCF End of injected conversion flag **/
#define DFSDM_DFSDM2_ISR_JEOCF		(1 << 0)

/**@}*/

/** @defgroup dfsdm_dfsdm2_icr DFSDM2ICR interrupt flag clear register
@{*/


#define DFSDM_DFSDM2_ICR_CLRSCDF_SHIFT		24
#define DFSDM_DFSDM2_ICR_CLRSCDF_MASK		0xff
/** @defgroup dfsdm_dfsdm2_icr_clrscdf CLRSCDF Clear the short-circuit detector flag
@{*/
/**@}*/


#define DFSDM_DFSDM2_ICR_CLRCKABF_SHIFT		16
#define DFSDM_DFSDM2_ICR_CLRCKABF_MASK		0xff
/** @defgroup dfsdm_dfsdm2_icr_clrckabf CLRCKABF Clear the clock absence flag
@{*/
/**@}*/

/** DFSDM_DFSDM2_ICR_CLRROVRF Clear the regular conversion overrun flag **/
#define DFSDM_DFSDM2_ICR_CLRROVRF		(1 << 3)
/** DFSDM_DFSDM2_ICR_CLRJOVRF Clear the injected conversion overrun flag **/
#define DFSDM_DFSDM2_ICR_CLRJOVRF		(1 << 2)

/**@}*/

/** @defgroup dfsdm_dfsdm2_jchgr DFSDM2JCHGR injected channel group selection register
@{*/


#define DFSDM_DFSDM2_JCHGR_JCHG_SHIFT		0
#define DFSDM_DFSDM2_JCHGR_JCHG_MASK		0xff
/** @defgroup dfsdm_dfsdm2_jchgr_jchg JCHG Injected channel group selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm2_fcr DFSDM2FCR filter control register
@{*/


#define DFSDM_DFSDM2_FCR_FORD_SHIFT		29
#define DFSDM_DFSDM2_FCR_FORD_MASK		0x07
/** @defgroup dfsdm_dfsdm2_fcr_ford FORD Sinc filter order
@{*/
/**@}*/


#define DFSDM_DFSDM2_FCR_FOSR_SHIFT		16
#define DFSDM_DFSDM2_FCR_FOSR_MASK		0x3ff
/** @defgroup dfsdm_dfsdm2_fcr_fosr FOSR Sinc filter oversampling ratio (decimation rate)
@{*/
/**@}*/


#define DFSDM_DFSDM2_FCR_IOSR_SHIFT		0
#define DFSDM_DFSDM2_FCR_IOSR_MASK		0xff
/** @defgroup dfsdm_dfsdm2_fcr_iosr IOSR Integrator oversampling ratio (averaging length)
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm2_jdatar DFSDM2JDATAR data register for injected group
@{*/


#define DFSDM_DFSDM2_JDATAR_JDATA_SHIFT		8
#define DFSDM_DFSDM2_JDATAR_JDATA_MASK		0xffffff
/** @defgroup dfsdm_dfsdm2_jdatar_jdata JDATA Injected group conversion data
@{*/
/**@}*/


#define DFSDM_DFSDM2_JDATAR_JDATACH_SHIFT		0
#define DFSDM_DFSDM2_JDATAR_JDATACH_MASK		0x07
/** @defgroup dfsdm_dfsdm2_jdatar_jdatach JDATACH Injected channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm2_rdatar DFSDM2RDATAR data register for the regular channel
@{*/


#define DFSDM_DFSDM2_RDATAR_RDATA_SHIFT		8
#define DFSDM_DFSDM2_RDATAR_RDATA_MASK		0xffffff
/** @defgroup dfsdm_dfsdm2_rdatar_rdata RDATA Regular channel conversion data
@{*/
/**@}*/

/** DFSDM_DFSDM2_RDATAR_RPEND Regular channel pending data **/
#define DFSDM_DFSDM2_RDATAR_RPEND		(1 << 4)

#define DFSDM_DFSDM2_RDATAR_RDATACH_SHIFT		0
#define DFSDM_DFSDM2_RDATAR_RDATACH_MASK		0x07
/** @defgroup dfsdm_dfsdm2_rdatar_rdatach RDATACH Regular channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm2_awhtr DFSDM2AWHTR analog watchdog high threshold register
@{*/


#define DFSDM_DFSDM2_AWHTR_AWHT_SHIFT		8
#define DFSDM_DFSDM2_AWHTR_AWHT_MASK		0xffffff
/** @defgroup dfsdm_dfsdm2_awhtr_awht AWHT Analog watchdog high threshold
@{*/
/**@}*/


#define DFSDM_DFSDM2_AWHTR_BKAWH_SHIFT		0
#define DFSDM_DFSDM2_AWHTR_BKAWH_MASK		0x0f
/** @defgroup dfsdm_dfsdm2_awhtr_bkawh BKAWH Break signal assignment to analog watchdog high threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm2_awltr DFSDM2AWLTR analog watchdog low threshold register
@{*/


#define DFSDM_DFSDM2_AWLTR_AWLT_SHIFT		8
#define DFSDM_DFSDM2_AWLTR_AWLT_MASK		0xffffff
/** @defgroup dfsdm_dfsdm2_awltr_awlt AWLT Analog watchdog low threshold
@{*/
/**@}*/


#define DFSDM_DFSDM2_AWLTR_BKAWL_SHIFT		0
#define DFSDM_DFSDM2_AWLTR_BKAWL_MASK		0x0f
/** @defgroup dfsdm_dfsdm2_awltr_bkawl BKAWL Break signal assignment to analog watchdog low threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm2_awsr DFSDM2AWSR analog watchdog status register
@{*/


#define DFSDM_DFSDM2_AWSR_AWHTF_SHIFT		8
#define DFSDM_DFSDM2_AWSR_AWHTF_MASK		0xff
/** @defgroup dfsdm_dfsdm2_awsr_awhtf AWHTF Analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM_DFSDM2_AWSR_AWLTF_SHIFT		0
#define DFSDM_DFSDM2_AWSR_AWLTF_MASK		0xff
/** @defgroup dfsdm_dfsdm2_awsr_awltf AWLTF Analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm2_awcfr DFSDM2AWCFR analog watchdog clear flag register
@{*/


#define DFSDM_DFSDM2_AWCFR_CLRAWHTF_SHIFT		8
#define DFSDM_DFSDM2_AWCFR_CLRAWHTF_MASK		0xff
/** @defgroup dfsdm_dfsdm2_awcfr_clrawhtf CLRAWHTF Clear the analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM_DFSDM2_AWCFR_CLRAWLTF_SHIFT		0
#define DFSDM_DFSDM2_AWCFR_CLRAWLTF_MASK		0xff
/** @defgroup dfsdm_dfsdm2_awcfr_clrawltf CLRAWLTF Clear the analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm2_exmax DFSDM2EXMAX Extremes detector maximum register
@{*/


#define DFSDM_DFSDM2_EXMAX_EXMAX_SHIFT		8
#define DFSDM_DFSDM2_EXMAX_EXMAX_MASK		0xffffff
/** @defgroup dfsdm_dfsdm2_exmax_exmax EXMAX Extremes detector maximum value
@{*/
/**@}*/


#define DFSDM_DFSDM2_EXMAX_EXMAXCH_SHIFT		0
#define DFSDM_DFSDM2_EXMAX_EXMAXCH_MASK		0x07
/** @defgroup dfsdm_dfsdm2_exmax_exmaxch EXMAXCH Extremes detector maximum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm2_exmin DFSDM2EXMIN Extremes detector minimum register
@{*/


#define DFSDM_DFSDM2_EXMIN_EXMIN_SHIFT		8
#define DFSDM_DFSDM2_EXMIN_EXMIN_MASK		0xffffff
/** @defgroup dfsdm_dfsdm2_exmin_exmin EXMIN EXMIN
@{*/
/**@}*/


#define DFSDM_DFSDM2_EXMIN_EXMINCH_SHIFT		0
#define DFSDM_DFSDM2_EXMIN_EXMINCH_MASK		0x07
/** @defgroup dfsdm_dfsdm2_exmin_exminch EXMINCH Extremes detector minimum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm2_cnvtimr DFSDM2CNVTIMR conversion timer register
@{*/


#define DFSDM_DFSDM2_CNVTIMR_CNVCNT_SHIFT		4
#define DFSDM_DFSDM2_CNVTIMR_CNVCNT_MASK		0xfffffff
/** @defgroup dfsdm_dfsdm2_cnvtimr_cnvcnt CNVCNT 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm3_cr1 DFSDM3CR1 control register 1
@{*/

/** DFSDM_DFSDM3_CR1_AWFSEL Analog watchdog fast mode select **/
#define DFSDM_DFSDM3_CR1_AWFSEL		(1 << 30)
/** DFSDM_DFSDM3_CR1_FAST Fast conversion mode selection for regular conversions **/
#define DFSDM_DFSDM3_CR1_FAST		(1 << 29)

#define DFSDM_DFSDM3_CR1_RCH_SHIFT		24
#define DFSDM_DFSDM3_CR1_RCH_MASK		0x07
/** @defgroup dfsdm_dfsdm3_cr1_rch RCH Regular channel selection
@{*/
/**@}*/

/** DFSDM_DFSDM3_CR1_RDMAEN DMA channel enabled to read data for the regular conversion **/
#define DFSDM_DFSDM3_CR1_RDMAEN		(1 << 21)
/** DFSDM_DFSDM3_CR1_RSYNC Launch regular conversion synchronously with DFSDM0 **/
#define DFSDM_DFSDM3_CR1_RSYNC		(1 << 19)
/** DFSDM_DFSDM3_CR1_RCONT Continuous mode selection for regular conversions **/
#define DFSDM_DFSDM3_CR1_RCONT		(1 << 18)
/** DFSDM_DFSDM3_CR1_RSWSTART Software start of a conversion on the regular channel **/
#define DFSDM_DFSDM3_CR1_RSWSTART		(1 << 17)

#define DFSDM_DFSDM3_CR1_JEXTEN_SHIFT		13
#define DFSDM_DFSDM3_CR1_JEXTEN_MASK		0x03
/** @defgroup dfsdm_dfsdm3_cr1_jexten JEXTEN Trigger enable and trigger edge selection for injected conversions
@{*/
/**@}*/


#define DFSDM_DFSDM3_CR1_JEXTSEL_SHIFT		8
#define DFSDM_DFSDM3_CR1_JEXTSEL_MASK		0x07
/** @defgroup dfsdm_dfsdm3_cr1_jextsel JEXTSEL Trigger signal selection for launching injected conversions
@{*/
/**@}*/

/** DFSDM_DFSDM3_CR1_JDMAEN DMA channel enabled to read data for the injected channel group **/
#define DFSDM_DFSDM3_CR1_JDMAEN		(1 << 5)
/** DFSDM_DFSDM3_CR1_JSCAN Scanning conversion mode for injected conversions **/
#define DFSDM_DFSDM3_CR1_JSCAN		(1 << 4)
/** DFSDM_DFSDM3_CR1_JSYNC Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger **/
#define DFSDM_DFSDM3_CR1_JSYNC		(1 << 3)
/** DFSDM_DFSDM3_CR1_JSWSTART Start a conversion of the injected group of channels **/
#define DFSDM_DFSDM3_CR1_JSWSTART		(1 << 1)
/** DFSDM_DFSDM3_CR1_DFEN DFSDM enable **/
#define DFSDM_DFSDM3_CR1_DFEN		(1 << 0)

/**@}*/

/** @defgroup dfsdm_dfsdm3_cr2 DFSDM3CR2 control register 2
@{*/


#define DFSDM_DFSDM3_CR2_AWDCH_SHIFT		16
#define DFSDM_DFSDM3_CR2_AWDCH_MASK		0xff
/** @defgroup dfsdm_dfsdm3_cr2_awdch AWDCH Analog watchdog channel selection
@{*/
/**@}*/


#define DFSDM_DFSDM3_CR2_EXCH_SHIFT		8
#define DFSDM_DFSDM3_CR2_EXCH_MASK		0xff
/** @defgroup dfsdm_dfsdm3_cr2_exch EXCH Extremes detector channel selection
@{*/
/**@}*/

/** DFSDM_DFSDM3_CR2_CKABIE Clock absence interrupt enable **/
#define DFSDM_DFSDM3_CR2_CKABIE		(1 << 6)
/** DFSDM_DFSDM3_CR2_SCDIE Short-circuit detector interrupt enable **/
#define DFSDM_DFSDM3_CR2_SCDIE		(1 << 5)
/** DFSDM_DFSDM3_CR2_AWDIE Analog watchdog interrupt enable **/
#define DFSDM_DFSDM3_CR2_AWDIE		(1 << 4)
/** DFSDM_DFSDM3_CR2_ROVRIE Regular data overrun interrupt enable **/
#define DFSDM_DFSDM3_CR2_ROVRIE		(1 << 3)
/** DFSDM_DFSDM3_CR2_JOVRIE Injected data overrun interrupt enable **/
#define DFSDM_DFSDM3_CR2_JOVRIE		(1 << 2)
/** DFSDM_DFSDM3_CR2_REOCIE Regular end of conversion interrupt enable **/
#define DFSDM_DFSDM3_CR2_REOCIE		(1 << 1)
/** DFSDM_DFSDM3_CR2_JEOCIE Injected end of conversion interrupt enable **/
#define DFSDM_DFSDM3_CR2_JEOCIE		(1 << 0)

/**@}*/

/** @defgroup dfsdm_dfsdm3_isr DFSDM3ISR interrupt and status register
@{*/


#define DFSDM_DFSDM3_ISR_SCDF_SHIFT		24
#define DFSDM_DFSDM3_ISR_SCDF_MASK		0xff
/** @defgroup dfsdm_dfsdm3_isr_scdf SCDF short-circuit detector flag
@{*/
/**@}*/


#define DFSDM_DFSDM3_ISR_CKABF_SHIFT		16
#define DFSDM_DFSDM3_ISR_CKABF_MASK		0xff
/** @defgroup dfsdm_dfsdm3_isr_ckabf CKABF Clock absence flag
@{*/
/**@}*/

/** DFSDM_DFSDM3_ISR_RCIP Regular conversion in progress status **/
#define DFSDM_DFSDM3_ISR_RCIP		(1 << 14)
/** DFSDM_DFSDM3_ISR_JCIP Injected conversion in progress status **/
#define DFSDM_DFSDM3_ISR_JCIP		(1 << 13)
/** DFSDM_DFSDM3_ISR_AWDF Analog watchdog **/
#define DFSDM_DFSDM3_ISR_AWDF		(1 << 4)
/** DFSDM_DFSDM3_ISR_ROVRF Regular conversion overrun flag **/
#define DFSDM_DFSDM3_ISR_ROVRF		(1 << 3)
/** DFSDM_DFSDM3_ISR_JOVRF Injected conversion overrun flag **/
#define DFSDM_DFSDM3_ISR_JOVRF		(1 << 2)
/** DFSDM_DFSDM3_ISR_REOCF End of regular conversion flag **/
#define DFSDM_DFSDM3_ISR_REOCF		(1 << 1)
/** DFSDM_DFSDM3_ISR_JEOCF End of injected conversion flag **/
#define DFSDM_DFSDM3_ISR_JEOCF		(1 << 0)

/**@}*/

/** @defgroup dfsdm_dfsdm3_icr DFSDM3ICR interrupt flag clear register
@{*/


#define DFSDM_DFSDM3_ICR_CLRSCDF_SHIFT		24
#define DFSDM_DFSDM3_ICR_CLRSCDF_MASK		0xff
/** @defgroup dfsdm_dfsdm3_icr_clrscdf CLRSCDF Clear the short-circuit detector flag
@{*/
/**@}*/


#define DFSDM_DFSDM3_ICR_CLRCKABF_SHIFT		16
#define DFSDM_DFSDM3_ICR_CLRCKABF_MASK		0xff
/** @defgroup dfsdm_dfsdm3_icr_clrckabf CLRCKABF Clear the clock absence flag
@{*/
/**@}*/

/** DFSDM_DFSDM3_ICR_CLRROVRF Clear the regular conversion overrun flag **/
#define DFSDM_DFSDM3_ICR_CLRROVRF		(1 << 3)
/** DFSDM_DFSDM3_ICR_CLRJOVRF Clear the injected conversion overrun flag **/
#define DFSDM_DFSDM3_ICR_CLRJOVRF		(1 << 2)

/**@}*/

/** @defgroup dfsdm_dfsdm3_jchgr DFSDM3JCHGR injected channel group selection register
@{*/


#define DFSDM_DFSDM3_JCHGR_JCHG_SHIFT		0
#define DFSDM_DFSDM3_JCHGR_JCHG_MASK		0xff
/** @defgroup dfsdm_dfsdm3_jchgr_jchg JCHG Injected channel group selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm3_fcr DFSDM3FCR filter control register
@{*/


#define DFSDM_DFSDM3_FCR_FORD_SHIFT		29
#define DFSDM_DFSDM3_FCR_FORD_MASK		0x07
/** @defgroup dfsdm_dfsdm3_fcr_ford FORD Sinc filter order
@{*/
/**@}*/


#define DFSDM_DFSDM3_FCR_FOSR_SHIFT		16
#define DFSDM_DFSDM3_FCR_FOSR_MASK		0x3ff
/** @defgroup dfsdm_dfsdm3_fcr_fosr FOSR Sinc filter oversampling ratio (decimation rate)
@{*/
/**@}*/


#define DFSDM_DFSDM3_FCR_IOSR_SHIFT		0
#define DFSDM_DFSDM3_FCR_IOSR_MASK		0xff
/** @defgroup dfsdm_dfsdm3_fcr_iosr IOSR Integrator oversampling ratio (averaging length)
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm3_jdatar DFSDM3JDATAR data register for injected group
@{*/


#define DFSDM_DFSDM3_JDATAR_JDATA_SHIFT		8
#define DFSDM_DFSDM3_JDATAR_JDATA_MASK		0xffffff
/** @defgroup dfsdm_dfsdm3_jdatar_jdata JDATA Injected group conversion data
@{*/
/**@}*/


#define DFSDM_DFSDM3_JDATAR_JDATACH_SHIFT		0
#define DFSDM_DFSDM3_JDATAR_JDATACH_MASK		0x07
/** @defgroup dfsdm_dfsdm3_jdatar_jdatach JDATACH Injected channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm3_rdatar DFSDM3RDATAR data register for the regular channel
@{*/


#define DFSDM_DFSDM3_RDATAR_RDATA_SHIFT		8
#define DFSDM_DFSDM3_RDATAR_RDATA_MASK		0xffffff
/** @defgroup dfsdm_dfsdm3_rdatar_rdata RDATA Regular channel conversion data
@{*/
/**@}*/

/** DFSDM_DFSDM3_RDATAR_RPEND Regular channel pending data **/
#define DFSDM_DFSDM3_RDATAR_RPEND		(1 << 4)

#define DFSDM_DFSDM3_RDATAR_RDATACH_SHIFT		0
#define DFSDM_DFSDM3_RDATAR_RDATACH_MASK		0x07
/** @defgroup dfsdm_dfsdm3_rdatar_rdatach RDATACH Regular channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm3_awhtr DFSDM3AWHTR analog watchdog high threshold register
@{*/


#define DFSDM_DFSDM3_AWHTR_AWHT_SHIFT		8
#define DFSDM_DFSDM3_AWHTR_AWHT_MASK		0xffffff
/** @defgroup dfsdm_dfsdm3_awhtr_awht AWHT Analog watchdog high threshold
@{*/
/**@}*/


#define DFSDM_DFSDM3_AWHTR_BKAWH_SHIFT		0
#define DFSDM_DFSDM3_AWHTR_BKAWH_MASK		0x0f
/** @defgroup dfsdm_dfsdm3_awhtr_bkawh BKAWH Break signal assignment to analog watchdog high threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm3_awltr DFSDM3AWLTR analog watchdog low threshold register
@{*/


#define DFSDM_DFSDM3_AWLTR_AWLT_SHIFT		8
#define DFSDM_DFSDM3_AWLTR_AWLT_MASK		0xffffff
/** @defgroup dfsdm_dfsdm3_awltr_awlt AWLT Analog watchdog low threshold
@{*/
/**@}*/


#define DFSDM_DFSDM3_AWLTR_BKAWL_SHIFT		0
#define DFSDM_DFSDM3_AWLTR_BKAWL_MASK		0x0f
/** @defgroup dfsdm_dfsdm3_awltr_bkawl BKAWL Break signal assignment to analog watchdog low threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm3_awsr DFSDM3AWSR analog watchdog status register
@{*/


#define DFSDM_DFSDM3_AWSR_AWHTF_SHIFT		8
#define DFSDM_DFSDM3_AWSR_AWHTF_MASK		0xff
/** @defgroup dfsdm_dfsdm3_awsr_awhtf AWHTF Analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM_DFSDM3_AWSR_AWLTF_SHIFT		0
#define DFSDM_DFSDM3_AWSR_AWLTF_MASK		0xff
/** @defgroup dfsdm_dfsdm3_awsr_awltf AWLTF Analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm3_awcfr DFSDM3AWCFR analog watchdog clear flag register
@{*/


#define DFSDM_DFSDM3_AWCFR_CLRAWHTF_SHIFT		8
#define DFSDM_DFSDM3_AWCFR_CLRAWHTF_MASK		0xff
/** @defgroup dfsdm_dfsdm3_awcfr_clrawhtf CLRAWHTF Clear the analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM_DFSDM3_AWCFR_CLRAWLTF_SHIFT		0
#define DFSDM_DFSDM3_AWCFR_CLRAWLTF_MASK		0xff
/** @defgroup dfsdm_dfsdm3_awcfr_clrawltf CLRAWLTF Clear the analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm3_exmax DFSDM3EXMAX Extremes detector maximum register
@{*/


#define DFSDM_DFSDM3_EXMAX_EXMAX_SHIFT		8
#define DFSDM_DFSDM3_EXMAX_EXMAX_MASK		0xffffff
/** @defgroup dfsdm_dfsdm3_exmax_exmax EXMAX Extremes detector maximum value
@{*/
/**@}*/


#define DFSDM_DFSDM3_EXMAX_EXMAXCH_SHIFT		0
#define DFSDM_DFSDM3_EXMAX_EXMAXCH_MASK		0x07
/** @defgroup dfsdm_dfsdm3_exmax_exmaxch EXMAXCH Extremes detector maximum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm3_exmin DFSDM3EXMIN Extremes detector minimum register
@{*/


#define DFSDM_DFSDM3_EXMIN_EXMIN_SHIFT		8
#define DFSDM_DFSDM3_EXMIN_EXMIN_MASK		0xffffff
/** @defgroup dfsdm_dfsdm3_exmin_exmin EXMIN EXMIN
@{*/
/**@}*/


#define DFSDM_DFSDM3_EXMIN_EXMINCH_SHIFT		0
#define DFSDM_DFSDM3_EXMIN_EXMINCH_MASK		0x07
/** @defgroup dfsdm_dfsdm3_exmin_exminch EXMINCH Extremes detector minimum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm_dfsdm3_cnvtimr DFSDM3CNVTIMR conversion timer register
@{*/


#define DFSDM_DFSDM3_CNVTIMR_CNVCNT_SHIFT		4
#define DFSDM_DFSDM3_CNVTIMR_CNVCNT_MASK		0xfffffff
/** @defgroup dfsdm_dfsdm3_cnvtimr_cnvcnt CNVCNT 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
@{*/
/**@}*/


/**@}*/

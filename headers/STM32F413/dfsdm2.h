#pragma once 

/* --- DFSDM2: Digital filter for sigma delta modulators ------------ */

/** @defgroup dfsdm2_registers Digital filter for sigma delta
      modulators Register
@{*/

/** DFSDM2_CH0CFGR1 channel configuration y register **/
#define DFSDM2_CH0CFGR1			MMIO32(DFSDM2_BASE + 0x00)
/** DFSDM2_CH0CFGR2 channel configuration y register **/
#define DFSDM2_CH0CFGR2			MMIO32(DFSDM2_BASE + 0x04)
/** DFSDM2_CH0AWSCDR analog watchdog and short-circuit detector register **/
#define DFSDM2_CH0AWSCDR			MMIO32(DFSDM2_BASE + 0x08)
/** DFSDM2_CH0WDATR channel watchdog filter data register **/
#define DFSDM2_CH0WDATR			MMIO32(DFSDM2_BASE + 0x0c)
/** DFSDM2_CH0DATINR channel data input register **/
#define DFSDM2_CH0DATINR			MMIO32(DFSDM2_BASE + 0x10)
/** DFSDM2_CH1CFGR1 CHCFG1R1 **/
#define DFSDM2_CH1CFGR1			MMIO32(DFSDM2_BASE + 0x20)
/** DFSDM2_CH1CFGR2 CHCFG1R2 **/
#define DFSDM2_CH1CFGR2			MMIO32(DFSDM2_BASE + 0x24)
/** DFSDM2_CH1AWSCDR AWSCD1R **/
#define DFSDM2_CH1AWSCDR			MMIO32(DFSDM2_BASE + 0x28)
/** DFSDM2_CH1WDATR CHWDAT1R **/
#define DFSDM2_CH1WDATR			MMIO32(DFSDM2_BASE + 0x2c)
/** DFSDM2_CH1DATINR CHDATIN1R **/
#define DFSDM2_CH1DATINR			MMIO32(DFSDM2_BASE + 0x30)
/** DFSDM2_CH2CFGR1 CHCFG2R1 **/
#define DFSDM2_CH2CFGR1			MMIO32(DFSDM2_BASE + 0x40)
/** DFSDM2_CH2CFGR2 CHCFG2R2 **/
#define DFSDM2_CH2CFGR2			MMIO32(DFSDM2_BASE + 0x44)
/** DFSDM2_CH2AWSCDR AWSCD2R **/
#define DFSDM2_CH2AWSCDR			MMIO32(DFSDM2_BASE + 0x48)
/** DFSDM2_CH2WDATR CHWDAT2R **/
#define DFSDM2_CH2WDATR			MMIO32(DFSDM2_BASE + 0x4c)
/** DFSDM2_CH2DATINR CHDATIN2R **/
#define DFSDM2_CH2DATINR			MMIO32(DFSDM2_BASE + 0x50)
/** DFSDM2_CH3CFGR1 CHCFG3R1 **/
#define DFSDM2_CH3CFGR1			MMIO32(DFSDM2_BASE + 0x60)
/** DFSDM2_CH3CFGR2 CHCFG3R2 **/
#define DFSDM2_CH3CFGR2			MMIO32(DFSDM2_BASE + 0x64)
/** DFSDM2_CH3AWSCDR AWSCD3R **/
#define DFSDM2_CH3AWSCDR			MMIO32(DFSDM2_BASE + 0x68)
/** DFSDM2_CH3WDATR CHWDAT3R **/
#define DFSDM2_CH3WDATR			MMIO32(DFSDM2_BASE + 0x6c)
/** DFSDM2_CH3DATINR CHDATIN3R **/
#define DFSDM2_CH3DATINR			MMIO32(DFSDM2_BASE + 0x70)
/** DFSDM2_CH4CFGR1 CHCFG4R1 **/
#define DFSDM2_CH4CFGR1			MMIO32(DFSDM2_BASE + 0x80)
/** DFSDM2_CH4CFGR2 CHCFG4R2 **/
#define DFSDM2_CH4CFGR2			MMIO32(DFSDM2_BASE + 0x84)
/** DFSDM2_CH4AWSCDR AWSCD4R **/
#define DFSDM2_CH4AWSCDR			MMIO32(DFSDM2_BASE + 0x88)
/** DFSDM2_CH4WDATR CHWDAT4R **/
#define DFSDM2_CH4WDATR			MMIO32(DFSDM2_BASE + 0x8c)
/** DFSDM2_CH4DATINR CHDATIN4R **/
#define DFSDM2_CH4DATINR			MMIO32(DFSDM2_BASE + 0x90)
/** DFSDM2_CH5CFGR1 CHCFG5R1 **/
#define DFSDM2_CH5CFGR1			MMIO32(DFSDM2_BASE + 0xa0)
/** DFSDM2_CH5CFGR2 CHCFG5R2 **/
#define DFSDM2_CH5CFGR2			MMIO32(DFSDM2_BASE + 0xa4)
/** DFSDM2_CH5AWSCDR AWSCD5R **/
#define DFSDM2_CH5AWSCDR			MMIO32(DFSDM2_BASE + 0xa8)
/** DFSDM2_CH5WDATR CHWDAT5R **/
#define DFSDM2_CH5WDATR			MMIO32(DFSDM2_BASE + 0xac)
/** DFSDM2_CH5DATINR CHDATIN5R **/
#define DFSDM2_CH5DATINR			MMIO32(DFSDM2_BASE + 0xb0)
/** DFSDM2_CH6CFGR1 CHCFG6R1 **/
#define DFSDM2_CH6CFGR1			MMIO32(DFSDM2_BASE + 0xc0)
/** DFSDM2_CH6CFGR2 CHCFG6R2 **/
#define DFSDM2_CH6CFGR2			MMIO32(DFSDM2_BASE + 0xc4)
/** DFSDM2_CH6AWSCDR AWSCD6R **/
#define DFSDM2_CH6AWSCDR			MMIO32(DFSDM2_BASE + 0xc8)
/** DFSDM2_CH6WDATR CHWDAT6R **/
#define DFSDM2_CH6WDATR			MMIO32(DFSDM2_BASE + 0xcc)
/** DFSDM2_CH6DATINR CHDATIN6R **/
#define DFSDM2_CH6DATINR			MMIO32(DFSDM2_BASE + 0xd0)
/** DFSDM2_CH7CFGR1 CHCFG7R1 **/
#define DFSDM2_CH7CFGR1			MMIO32(DFSDM2_BASE + 0xe0)
/** DFSDM2_CH7CFGR2 CHCFG7R2 **/
#define DFSDM2_CH7CFGR2			MMIO32(DFSDM2_BASE + 0xe4)
/** DFSDM2_CH7AWSCDR AWSCD7R **/
#define DFSDM2_CH7AWSCDR			MMIO32(DFSDM2_BASE + 0xe8)
/** DFSDM2_CH7WDATR CHWDAT7R **/
#define DFSDM2_CH7WDATR			MMIO32(DFSDM2_BASE + 0xec)
/** DFSDM2_CH7DATINR CHDATIN7R **/
#define DFSDM2_CH7DATINR			MMIO32(DFSDM2_BASE + 0xf0)
/** DFSDM2_FLT0CR1 control register 1 **/
#define DFSDM2_FLT0CR1			MMIO32(DFSDM2_BASE + 0x100)
/** DFSDM2_FLT0CR2 control register 2 **/
#define DFSDM2_FLT0CR2			MMIO32(DFSDM2_BASE + 0x104)
/** DFSDM2_FLT0ISR interrupt and status register **/
#define DFSDM2_FLT0ISR			MMIO32(DFSDM2_BASE + 0x108)
/** DFSDM2_FLT0ICR interrupt flag clear register **/
#define DFSDM2_FLT0ICR			MMIO32(DFSDM2_BASE + 0x10c)
/** DFSDM2_FLT0JCHGR injected channel group selection register **/
#define DFSDM2_FLT0JCHGR			MMIO32(DFSDM2_BASE + 0x110)
/** DFSDM2_FLT0FCR filter control register **/
#define DFSDM2_FLT0FCR			MMIO32(DFSDM2_BASE + 0x114)
/** DFSDM2_FLT0JDATAR data register for injected group **/
#define DFSDM2_FLT0JDATAR			MMIO32(DFSDM2_BASE + 0x118)
/** DFSDM2_FLT0RDATAR data register for the regular channel **/
#define DFSDM2_FLT0RDATAR			MMIO32(DFSDM2_BASE + 0x11c)
/** DFSDM2_FLT0AWHTR analog watchdog high threshold register **/
#define DFSDM2_FLT0AWHTR			MMIO32(DFSDM2_BASE + 0x120)
/** DFSDM2_FLT0AWLTR analog watchdog low threshold register **/
#define DFSDM2_FLT0AWLTR			MMIO32(DFSDM2_BASE + 0x124)
/** DFSDM2_FLT0AWSR analog watchdog status register **/
#define DFSDM2_FLT0AWSR			MMIO32(DFSDM2_BASE + 0x128)
/** DFSDM2_FLT0AWCFR analog watchdog clear flag register **/
#define DFSDM2_FLT0AWCFR			MMIO32(DFSDM2_BASE + 0x12c)
/** DFSDM2_FLT0EXMAX Extremes detector maximum register **/
#define DFSDM2_FLT0EXMAX			MMIO32(DFSDM2_BASE + 0x130)
/** DFSDM2_FLT0EXMIN Extremes detector minimum register **/
#define DFSDM2_FLT0EXMIN			MMIO32(DFSDM2_BASE + 0x134)
/** DFSDM2_FLT0CNVTIMR conversion timer register **/
#define DFSDM2_FLT0CNVTIMR			MMIO32(DFSDM2_BASE + 0x138)
/** DFSDM2_FLT1CR1 control register 1 **/
#define DFSDM2_FLT1CR1			MMIO32(DFSDM2_BASE + 0x180)
/** DFSDM2_FLT1CR2 control register 2 **/
#define DFSDM2_FLT1CR2			MMIO32(DFSDM2_BASE + 0x184)
/** DFSDM2_FLT1ISR interrupt and status register **/
#define DFSDM2_FLT1ISR			MMIO32(DFSDM2_BASE + 0x188)
/** DFSDM2_FLT1ICR interrupt flag clear register **/
#define DFSDM2_FLT1ICR			MMIO32(DFSDM2_BASE + 0x18c)
/** DFSDM2_FLT1JCHGR injected channel group selection register **/
#define DFSDM2_FLT1JCHGR			MMIO32(DFSDM2_BASE + 0x190)
/** DFSDM2_FLT1FCR filter control register **/
#define DFSDM2_FLT1FCR			MMIO32(DFSDM2_BASE + 0x194)
/** DFSDM2_FLT1JDATAR data register for injected group **/
#define DFSDM2_FLT1JDATAR			MMIO32(DFSDM2_BASE + 0x198)
/** DFSDM2_FLT1RDATAR data register for the regular channel **/
#define DFSDM2_FLT1RDATAR			MMIO32(DFSDM2_BASE + 0x19c)
/** DFSDM2_FLT1AWHTR analog watchdog high threshold register **/
#define DFSDM2_FLT1AWHTR			MMIO32(DFSDM2_BASE + 0x1a0)
/** DFSDM2_FLT1AWLTR analog watchdog low threshold register **/
#define DFSDM2_FLT1AWLTR			MMIO32(DFSDM2_BASE + 0x1a4)
/** DFSDM2_FLT1AWSR analog watchdog status register **/
#define DFSDM2_FLT1AWSR			MMIO32(DFSDM2_BASE + 0x1a8)
/** DFSDM2_FLT1AWCFR analog watchdog clear flag register **/
#define DFSDM2_FLT1AWCFR			MMIO32(DFSDM2_BASE + 0x1ac)
/** DFSDM2_FLT1EXMAX Extremes detector maximum register **/
#define DFSDM2_FLT1EXMAX			MMIO32(DFSDM2_BASE + 0x1b0)
/** DFSDM2_FLT1EXMIN Extremes detector minimum register **/
#define DFSDM2_FLT1EXMIN			MMIO32(DFSDM2_BASE + 0x1b4)
/** DFSDM2_FLT1CNVTIMR conversion timer register **/
#define DFSDM2_FLT1CNVTIMR			MMIO32(DFSDM2_BASE + 0x1b8)
/** DFSDM2_FLT2CR1 control register 1 **/
#define DFSDM2_FLT2CR1			MMIO32(DFSDM2_BASE + 0x200)
/** DFSDM2_FLT2CR2 control register 2 **/
#define DFSDM2_FLT2CR2			MMIO32(DFSDM2_BASE + 0x204)
/** DFSDM2_FLT2ISR interrupt and status register **/
#define DFSDM2_FLT2ISR			MMIO32(DFSDM2_BASE + 0x208)
/** DFSDM2_FLT2ICR interrupt flag clear register **/
#define DFSDM2_FLT2ICR			MMIO32(DFSDM2_BASE + 0x20c)
/** DFSDM2_FLT2JCHGR injected channel group selection register **/
#define DFSDM2_FLT2JCHGR			MMIO32(DFSDM2_BASE + 0x210)
/** DFSDM2_FLT2FCR filter control register **/
#define DFSDM2_FLT2FCR			MMIO32(DFSDM2_BASE + 0x214)
/** DFSDM2_FLT2JDATAR data register for injected group **/
#define DFSDM2_FLT2JDATAR			MMIO32(DFSDM2_BASE + 0x218)
/** DFSDM2_FLT2RDATAR data register for the regular channel **/
#define DFSDM2_FLT2RDATAR			MMIO32(DFSDM2_BASE + 0x21c)
/** DFSDM2_FLT2AWHTR analog watchdog high threshold register **/
#define DFSDM2_FLT2AWHTR			MMIO32(DFSDM2_BASE + 0x220)
/** DFSDM2_FLT2AWLTR analog watchdog low threshold register **/
#define DFSDM2_FLT2AWLTR			MMIO32(DFSDM2_BASE + 0x224)
/** DFSDM2_FLT2AWSR analog watchdog status register **/
#define DFSDM2_FLT2AWSR			MMIO32(DFSDM2_BASE + 0x228)
/** DFSDM2_FLT2AWCFR analog watchdog clear flag register **/
#define DFSDM2_FLT2AWCFR			MMIO32(DFSDM2_BASE + 0x22c)
/** DFSDM2_FLT2EXMAX Extremes detector maximum register **/
#define DFSDM2_FLT2EXMAX			MMIO32(DFSDM2_BASE + 0x230)
/** DFSDM2_FLT2EXMIN Extremes detector minimum register **/
#define DFSDM2_FLT2EXMIN			MMIO32(DFSDM2_BASE + 0x234)
/** DFSDM2_FLT2CNVTIMR conversion timer register **/
#define DFSDM2_FLT2CNVTIMR			MMIO32(DFSDM2_BASE + 0x238)
/** DFSDM2_FLT3CR1 control register 1 **/
#define DFSDM2_FLT3CR1			MMIO32(DFSDM2_BASE + 0x280)
/** DFSDM2_FLT3CR2 control register 2 **/
#define DFSDM2_FLT3CR2			MMIO32(DFSDM2_BASE + 0x284)
/** DFSDM2_FLT3ISR interrupt and status register **/
#define DFSDM2_FLT3ISR			MMIO32(DFSDM2_BASE + 0x288)
/** DFSDM2_FLT3ICR interrupt flag clear register **/
#define DFSDM2_FLT3ICR			MMIO32(DFSDM2_BASE + 0x28c)
/** DFSDM2_FLT3JCHGR injected channel group selection register **/
#define DFSDM2_FLT3JCHGR			MMIO32(DFSDM2_BASE + 0x290)
/** DFSDM2_FLT3FCR filter control register **/
#define DFSDM2_FLT3FCR			MMIO32(DFSDM2_BASE + 0x294)
/** DFSDM2_FLT3JDATAR data register for injected group **/
#define DFSDM2_FLT3JDATAR			MMIO32(DFSDM2_BASE + 0x298)
/** DFSDM2_FLT3RDATAR data register for the regular channel **/
#define DFSDM2_FLT3RDATAR			MMIO32(DFSDM2_BASE + 0x29c)
/** DFSDM2_FLT3AWHTR analog watchdog high threshold register **/
#define DFSDM2_FLT3AWHTR			MMIO32(DFSDM2_BASE + 0x2a0)
/** DFSDM2_FLT3AWLTR analog watchdog low threshold register **/
#define DFSDM2_FLT3AWLTR			MMIO32(DFSDM2_BASE + 0x2a4)
/** DFSDM2_FLT3AWSR analog watchdog status register **/
#define DFSDM2_FLT3AWSR			MMIO32(DFSDM2_BASE + 0x2a8)
/** DFSDM2_FLT3AWCFR analog watchdog clear flag register **/
#define DFSDM2_FLT3AWCFR			MMIO32(DFSDM2_BASE + 0x2ac)
/** DFSDM2_FLT3EXMAX Extremes detector maximum register **/
#define DFSDM2_FLT3EXMAX			MMIO32(DFSDM2_BASE + 0x2b0)
/** DFSDM2_FLT3EXMIN Extremes detector minimum register **/
#define DFSDM2_FLT3EXMIN			MMIO32(DFSDM2_BASE + 0x2b4)
/** DFSDM2_FLT3CNVTIMR conversion timer register **/
#define DFSDM2_FLT3CNVTIMR			MMIO32(DFSDM2_BASE + 0x2b8)

/**@}*/


/** @defgroup dfsdm2_ch0cfgr1 CH0CFGR1 channel configuration y register
@{*/

/** DFSDM2_CH0CFGR1_DFSDMEN DFSDMEN **/
#define DFSDM2_CH0CFGR1_DFSDMEN		(1 << 31)
/** DFSDM2_CH0CFGR1_CKOUTSRC CKOUTSRC **/
#define DFSDM2_CH0CFGR1_CKOUTSRC		(1 << 30)

#define DFSDM2_CH0CFGR1_CKOUTDIV_SHIFT		16
#define DFSDM2_CH0CFGR1_CKOUTDIV_MASK		0xff
/** @defgroup dfsdm2_ch0cfgr1_ckoutdiv CKOUTDIV CKOUTDIV
@{*/
/**@}*/


#define DFSDM2_CH0CFGR1_DATPACK_SHIFT		14
#define DFSDM2_CH0CFGR1_DATPACK_MASK		0x03
/** @defgroup dfsdm2_ch0cfgr1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM2_CH0CFGR1_DATMPX_SHIFT		12
#define DFSDM2_CH0CFGR1_DATMPX_MASK		0x03
/** @defgroup dfsdm2_ch0cfgr1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM2_CH0CFGR1_CHINSEL CHINSEL **/
#define DFSDM2_CH0CFGR1_CHINSEL		(1 << 8)
/** DFSDM2_CH0CFGR1_CHEN CHEN **/
#define DFSDM2_CH0CFGR1_CHEN		(1 << 7)
/** DFSDM2_CH0CFGR1_CKABEN CKABEN **/
#define DFSDM2_CH0CFGR1_CKABEN		(1 << 6)
/** DFSDM2_CH0CFGR1_SCDEN SCDEN **/
#define DFSDM2_CH0CFGR1_SCDEN		(1 << 5)

#define DFSDM2_CH0CFGR1_SPICKSEL_SHIFT		2
#define DFSDM2_CH0CFGR1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm2_ch0cfgr1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM2_CH0CFGR1_SITP_SHIFT		0
#define DFSDM2_CH0CFGR1_SITP_MASK		0x03
/** @defgroup dfsdm2_ch0cfgr1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch0cfgr2 CH0CFGR2 channel configuration y register
@{*/


#define DFSDM2_CH0CFGR2_OFFSET_SHIFT		8
#define DFSDM2_CH0CFGR2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm2_ch0cfgr2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM2_CH0CFGR2_DTRBS_SHIFT		3
#define DFSDM2_CH0CFGR2_DTRBS_MASK		0x1f
/** @defgroup dfsdm2_ch0cfgr2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch0awscdr CH0AWSCDR analog watchdog and short-circuit detector register
@{*/


#define DFSDM2_CH0AWSCDR_AWFORD_SHIFT		22
#define DFSDM2_CH0AWSCDR_AWFORD_MASK		0x03
/** @defgroup dfsdm2_ch0awscdr_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM2_CH0AWSCDR_AWFOSR_SHIFT		16
#define DFSDM2_CH0AWSCDR_AWFOSR_MASK		0x1f
/** @defgroup dfsdm2_ch0awscdr_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM2_CH0AWSCDR_BKSCD_SHIFT		12
#define DFSDM2_CH0AWSCDR_BKSCD_MASK		0x0f
/** @defgroup dfsdm2_ch0awscdr_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM2_CH0AWSCDR_SCDT_SHIFT		0
#define DFSDM2_CH0AWSCDR_SCDT_MASK		0xff
/** @defgroup dfsdm2_ch0awscdr_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch0wdatr CH0WDATR channel watchdog filter data register
@{*/


#define DFSDM2_CH0WDATR_WDATA_SHIFT		0
#define DFSDM2_CH0WDATR_WDATA_MASK		0xffff
/** @defgroup dfsdm2_ch0wdatr_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch0datinr CH0DATINR channel data input register
@{*/


#define DFSDM2_CH0DATINR_INDAT1_SHIFT		16
#define DFSDM2_CH0DATINR_INDAT1_MASK		0xffff
/** @defgroup dfsdm2_ch0datinr_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM2_CH0DATINR_INDAT0_SHIFT		0
#define DFSDM2_CH0DATINR_INDAT0_MASK		0xffff
/** @defgroup dfsdm2_ch0datinr_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch1cfgr1 CH1CFGR1 CHCFG1R1
@{*/


#define DFSDM2_CH1CFGR1_DATPACK_SHIFT		14
#define DFSDM2_CH1CFGR1_DATPACK_MASK		0x03
/** @defgroup dfsdm2_ch1cfgr1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM2_CH1CFGR1_DATMPX_SHIFT		12
#define DFSDM2_CH1CFGR1_DATMPX_MASK		0x03
/** @defgroup dfsdm2_ch1cfgr1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM2_CH1CFGR1_CHINSEL CHINSEL **/
#define DFSDM2_CH1CFGR1_CHINSEL		(1 << 8)
/** DFSDM2_CH1CFGR1_CHEN CHEN **/
#define DFSDM2_CH1CFGR1_CHEN		(1 << 7)
/** DFSDM2_CH1CFGR1_CKABEN CKABEN **/
#define DFSDM2_CH1CFGR1_CKABEN		(1 << 6)
/** DFSDM2_CH1CFGR1_SCDEN SCDEN **/
#define DFSDM2_CH1CFGR1_SCDEN		(1 << 5)

#define DFSDM2_CH1CFGR1_SPICKSEL_SHIFT		2
#define DFSDM2_CH1CFGR1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm2_ch1cfgr1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM2_CH1CFGR1_SITP_SHIFT		0
#define DFSDM2_CH1CFGR1_SITP_MASK		0x03
/** @defgroup dfsdm2_ch1cfgr1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch1cfgr2 CH1CFGR2 CHCFG1R2
@{*/


#define DFSDM2_CH1CFGR2_OFFSET_SHIFT		8
#define DFSDM2_CH1CFGR2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm2_ch1cfgr2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM2_CH1CFGR2_DTRBS_SHIFT		3
#define DFSDM2_CH1CFGR2_DTRBS_MASK		0x1f
/** @defgroup dfsdm2_ch1cfgr2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch1awscdr CH1AWSCDR AWSCD1R
@{*/


#define DFSDM2_CH1AWSCDR_AWFORD_SHIFT		22
#define DFSDM2_CH1AWSCDR_AWFORD_MASK		0x03
/** @defgroup dfsdm2_ch1awscdr_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM2_CH1AWSCDR_AWFOSR_SHIFT		16
#define DFSDM2_CH1AWSCDR_AWFOSR_MASK		0x1f
/** @defgroup dfsdm2_ch1awscdr_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM2_CH1AWSCDR_BKSCD_SHIFT		12
#define DFSDM2_CH1AWSCDR_BKSCD_MASK		0x0f
/** @defgroup dfsdm2_ch1awscdr_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM2_CH1AWSCDR_SCDT_SHIFT		0
#define DFSDM2_CH1AWSCDR_SCDT_MASK		0xff
/** @defgroup dfsdm2_ch1awscdr_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch1wdatr CH1WDATR CHWDAT1R
@{*/


#define DFSDM2_CH1WDATR_WDATA_SHIFT		0
#define DFSDM2_CH1WDATR_WDATA_MASK		0xffff
/** @defgroup dfsdm2_ch1wdatr_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch1datinr CH1DATINR CHDATIN1R
@{*/


#define DFSDM2_CH1DATINR_INDAT1_SHIFT		16
#define DFSDM2_CH1DATINR_INDAT1_MASK		0xffff
/** @defgroup dfsdm2_ch1datinr_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM2_CH1DATINR_INDAT0_SHIFT		0
#define DFSDM2_CH1DATINR_INDAT0_MASK		0xffff
/** @defgroup dfsdm2_ch1datinr_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch2cfgr1 CH2CFGR1 CHCFG2R1
@{*/


#define DFSDM2_CH2CFGR1_DATPACK_SHIFT		14
#define DFSDM2_CH2CFGR1_DATPACK_MASK		0x03
/** @defgroup dfsdm2_ch2cfgr1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM2_CH2CFGR1_DATMPX_SHIFT		12
#define DFSDM2_CH2CFGR1_DATMPX_MASK		0x03
/** @defgroup dfsdm2_ch2cfgr1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM2_CH2CFGR1_CHINSEL CHINSEL **/
#define DFSDM2_CH2CFGR1_CHINSEL		(1 << 8)
/** DFSDM2_CH2CFGR1_CHEN CHEN **/
#define DFSDM2_CH2CFGR1_CHEN		(1 << 7)
/** DFSDM2_CH2CFGR1_CKABEN CKABEN **/
#define DFSDM2_CH2CFGR1_CKABEN		(1 << 6)
/** DFSDM2_CH2CFGR1_SCDEN SCDEN **/
#define DFSDM2_CH2CFGR1_SCDEN		(1 << 5)

#define DFSDM2_CH2CFGR1_SPICKSEL_SHIFT		2
#define DFSDM2_CH2CFGR1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm2_ch2cfgr1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM2_CH2CFGR1_SITP_SHIFT		0
#define DFSDM2_CH2CFGR1_SITP_MASK		0x03
/** @defgroup dfsdm2_ch2cfgr1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch2cfgr2 CH2CFGR2 CHCFG2R2
@{*/


#define DFSDM2_CH2CFGR2_OFFSET_SHIFT		8
#define DFSDM2_CH2CFGR2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm2_ch2cfgr2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM2_CH2CFGR2_DTRBS_SHIFT		3
#define DFSDM2_CH2CFGR2_DTRBS_MASK		0x1f
/** @defgroup dfsdm2_ch2cfgr2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch2awscdr CH2AWSCDR AWSCD2R
@{*/


#define DFSDM2_CH2AWSCDR_AWFORD_SHIFT		22
#define DFSDM2_CH2AWSCDR_AWFORD_MASK		0x03
/** @defgroup dfsdm2_ch2awscdr_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM2_CH2AWSCDR_AWFOSR_SHIFT		16
#define DFSDM2_CH2AWSCDR_AWFOSR_MASK		0x1f
/** @defgroup dfsdm2_ch2awscdr_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM2_CH2AWSCDR_BKSCD_SHIFT		12
#define DFSDM2_CH2AWSCDR_BKSCD_MASK		0x0f
/** @defgroup dfsdm2_ch2awscdr_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM2_CH2AWSCDR_SCDT_SHIFT		0
#define DFSDM2_CH2AWSCDR_SCDT_MASK		0xff
/** @defgroup dfsdm2_ch2awscdr_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch2wdatr CH2WDATR CHWDAT2R
@{*/


#define DFSDM2_CH2WDATR_WDATA_SHIFT		0
#define DFSDM2_CH2WDATR_WDATA_MASK		0xffff
/** @defgroup dfsdm2_ch2wdatr_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch2datinr CH2DATINR CHDATIN2R
@{*/


#define DFSDM2_CH2DATINR_INDAT1_SHIFT		16
#define DFSDM2_CH2DATINR_INDAT1_MASK		0xffff
/** @defgroup dfsdm2_ch2datinr_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM2_CH2DATINR_INDAT0_SHIFT		0
#define DFSDM2_CH2DATINR_INDAT0_MASK		0xffff
/** @defgroup dfsdm2_ch2datinr_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch3cfgr1 CH3CFGR1 CHCFG3R1
@{*/


#define DFSDM2_CH3CFGR1_DATPACK_SHIFT		14
#define DFSDM2_CH3CFGR1_DATPACK_MASK		0x03
/** @defgroup dfsdm2_ch3cfgr1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM2_CH3CFGR1_DATMPX_SHIFT		12
#define DFSDM2_CH3CFGR1_DATMPX_MASK		0x03
/** @defgroup dfsdm2_ch3cfgr1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM2_CH3CFGR1_CHINSEL CHINSEL **/
#define DFSDM2_CH3CFGR1_CHINSEL		(1 << 8)
/** DFSDM2_CH3CFGR1_CHEN CHEN **/
#define DFSDM2_CH3CFGR1_CHEN		(1 << 7)
/** DFSDM2_CH3CFGR1_CKABEN CKABEN **/
#define DFSDM2_CH3CFGR1_CKABEN		(1 << 6)
/** DFSDM2_CH3CFGR1_SCDEN SCDEN **/
#define DFSDM2_CH3CFGR1_SCDEN		(1 << 5)

#define DFSDM2_CH3CFGR1_SPICKSEL_SHIFT		2
#define DFSDM2_CH3CFGR1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm2_ch3cfgr1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM2_CH3CFGR1_SITP_SHIFT		0
#define DFSDM2_CH3CFGR1_SITP_MASK		0x03
/** @defgroup dfsdm2_ch3cfgr1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch3cfgr2 CH3CFGR2 CHCFG3R2
@{*/


#define DFSDM2_CH3CFGR2_OFFSET_SHIFT		8
#define DFSDM2_CH3CFGR2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm2_ch3cfgr2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM2_CH3CFGR2_DTRBS_SHIFT		3
#define DFSDM2_CH3CFGR2_DTRBS_MASK		0x1f
/** @defgroup dfsdm2_ch3cfgr2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch3awscdr CH3AWSCDR AWSCD3R
@{*/


#define DFSDM2_CH3AWSCDR_AWFORD_SHIFT		22
#define DFSDM2_CH3AWSCDR_AWFORD_MASK		0x03
/** @defgroup dfsdm2_ch3awscdr_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM2_CH3AWSCDR_AWFOSR_SHIFT		16
#define DFSDM2_CH3AWSCDR_AWFOSR_MASK		0x1f
/** @defgroup dfsdm2_ch3awscdr_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM2_CH3AWSCDR_BKSCD_SHIFT		12
#define DFSDM2_CH3AWSCDR_BKSCD_MASK		0x0f
/** @defgroup dfsdm2_ch3awscdr_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM2_CH3AWSCDR_SCDT_SHIFT		0
#define DFSDM2_CH3AWSCDR_SCDT_MASK		0xff
/** @defgroup dfsdm2_ch3awscdr_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch3wdatr CH3WDATR CHWDAT3R
@{*/


#define DFSDM2_CH3WDATR_WDATA_SHIFT		0
#define DFSDM2_CH3WDATR_WDATA_MASK		0xffff
/** @defgroup dfsdm2_ch3wdatr_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch3datinr CH3DATINR CHDATIN3R
@{*/


#define DFSDM2_CH3DATINR_INDAT1_SHIFT		16
#define DFSDM2_CH3DATINR_INDAT1_MASK		0xffff
/** @defgroup dfsdm2_ch3datinr_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM2_CH3DATINR_INDAT0_SHIFT		0
#define DFSDM2_CH3DATINR_INDAT0_MASK		0xffff
/** @defgroup dfsdm2_ch3datinr_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch4cfgr1 CH4CFGR1 CHCFG4R1
@{*/


#define DFSDM2_CH4CFGR1_DATPACK_SHIFT		14
#define DFSDM2_CH4CFGR1_DATPACK_MASK		0x03
/** @defgroup dfsdm2_ch4cfgr1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM2_CH4CFGR1_DATMPX_SHIFT		12
#define DFSDM2_CH4CFGR1_DATMPX_MASK		0x03
/** @defgroup dfsdm2_ch4cfgr1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM2_CH4CFGR1_CHINSEL CHINSEL **/
#define DFSDM2_CH4CFGR1_CHINSEL		(1 << 8)
/** DFSDM2_CH4CFGR1_CHEN CHEN **/
#define DFSDM2_CH4CFGR1_CHEN		(1 << 7)
/** DFSDM2_CH4CFGR1_CKABEN CKABEN **/
#define DFSDM2_CH4CFGR1_CKABEN		(1 << 6)
/** DFSDM2_CH4CFGR1_SCDEN SCDEN **/
#define DFSDM2_CH4CFGR1_SCDEN		(1 << 5)

#define DFSDM2_CH4CFGR1_SPICKSEL_SHIFT		2
#define DFSDM2_CH4CFGR1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm2_ch4cfgr1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM2_CH4CFGR1_SITP_SHIFT		0
#define DFSDM2_CH4CFGR1_SITP_MASK		0x03
/** @defgroup dfsdm2_ch4cfgr1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch4cfgr2 CH4CFGR2 CHCFG4R2
@{*/


#define DFSDM2_CH4CFGR2_OFFSET_SHIFT		8
#define DFSDM2_CH4CFGR2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm2_ch4cfgr2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM2_CH4CFGR2_DTRBS_SHIFT		3
#define DFSDM2_CH4CFGR2_DTRBS_MASK		0x1f
/** @defgroup dfsdm2_ch4cfgr2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch4awscdr CH4AWSCDR AWSCD4R
@{*/


#define DFSDM2_CH4AWSCDR_AWFORD_SHIFT		22
#define DFSDM2_CH4AWSCDR_AWFORD_MASK		0x03
/** @defgroup dfsdm2_ch4awscdr_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM2_CH4AWSCDR_AWFOSR_SHIFT		16
#define DFSDM2_CH4AWSCDR_AWFOSR_MASK		0x1f
/** @defgroup dfsdm2_ch4awscdr_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM2_CH4AWSCDR_BKSCD_SHIFT		12
#define DFSDM2_CH4AWSCDR_BKSCD_MASK		0x0f
/** @defgroup dfsdm2_ch4awscdr_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM2_CH4AWSCDR_SCDT_SHIFT		0
#define DFSDM2_CH4AWSCDR_SCDT_MASK		0xff
/** @defgroup dfsdm2_ch4awscdr_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch4wdatr CH4WDATR CHWDAT4R
@{*/


#define DFSDM2_CH4WDATR_WDATA_SHIFT		0
#define DFSDM2_CH4WDATR_WDATA_MASK		0xffff
/** @defgroup dfsdm2_ch4wdatr_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch4datinr CH4DATINR CHDATIN4R
@{*/


#define DFSDM2_CH4DATINR_INDAT1_SHIFT		16
#define DFSDM2_CH4DATINR_INDAT1_MASK		0xffff
/** @defgroup dfsdm2_ch4datinr_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM2_CH4DATINR_INDAT0_SHIFT		0
#define DFSDM2_CH4DATINR_INDAT0_MASK		0xffff
/** @defgroup dfsdm2_ch4datinr_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch5cfgr1 CH5CFGR1 CHCFG5R1
@{*/


#define DFSDM2_CH5CFGR1_DATPACK_SHIFT		14
#define DFSDM2_CH5CFGR1_DATPACK_MASK		0x03
/** @defgroup dfsdm2_ch5cfgr1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM2_CH5CFGR1_DATMPX_SHIFT		12
#define DFSDM2_CH5CFGR1_DATMPX_MASK		0x03
/** @defgroup dfsdm2_ch5cfgr1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM2_CH5CFGR1_CHINSEL CHINSEL **/
#define DFSDM2_CH5CFGR1_CHINSEL		(1 << 8)
/** DFSDM2_CH5CFGR1_CHEN CHEN **/
#define DFSDM2_CH5CFGR1_CHEN		(1 << 7)
/** DFSDM2_CH5CFGR1_CKABEN CKABEN **/
#define DFSDM2_CH5CFGR1_CKABEN		(1 << 6)
/** DFSDM2_CH5CFGR1_SCDEN SCDEN **/
#define DFSDM2_CH5CFGR1_SCDEN		(1 << 5)

#define DFSDM2_CH5CFGR1_SPICKSEL_SHIFT		2
#define DFSDM2_CH5CFGR1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm2_ch5cfgr1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM2_CH5CFGR1_SITP_SHIFT		0
#define DFSDM2_CH5CFGR1_SITP_MASK		0x03
/** @defgroup dfsdm2_ch5cfgr1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch5cfgr2 CH5CFGR2 CHCFG5R2
@{*/


#define DFSDM2_CH5CFGR2_OFFSET_SHIFT		8
#define DFSDM2_CH5CFGR2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm2_ch5cfgr2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM2_CH5CFGR2_DTRBS_SHIFT		3
#define DFSDM2_CH5CFGR2_DTRBS_MASK		0x1f
/** @defgroup dfsdm2_ch5cfgr2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch5awscdr CH5AWSCDR AWSCD5R
@{*/


#define DFSDM2_CH5AWSCDR_AWFORD_SHIFT		22
#define DFSDM2_CH5AWSCDR_AWFORD_MASK		0x03
/** @defgroup dfsdm2_ch5awscdr_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM2_CH5AWSCDR_AWFOSR_SHIFT		16
#define DFSDM2_CH5AWSCDR_AWFOSR_MASK		0x1f
/** @defgroup dfsdm2_ch5awscdr_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM2_CH5AWSCDR_BKSCD_SHIFT		12
#define DFSDM2_CH5AWSCDR_BKSCD_MASK		0x0f
/** @defgroup dfsdm2_ch5awscdr_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM2_CH5AWSCDR_SCDT_SHIFT		0
#define DFSDM2_CH5AWSCDR_SCDT_MASK		0xff
/** @defgroup dfsdm2_ch5awscdr_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch5wdatr CH5WDATR CHWDAT5R
@{*/


#define DFSDM2_CH5WDATR_WDATA_SHIFT		0
#define DFSDM2_CH5WDATR_WDATA_MASK		0xffff
/** @defgroup dfsdm2_ch5wdatr_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch5datinr CH5DATINR CHDATIN5R
@{*/


#define DFSDM2_CH5DATINR_INDAT1_SHIFT		16
#define DFSDM2_CH5DATINR_INDAT1_MASK		0xffff
/** @defgroup dfsdm2_ch5datinr_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM2_CH5DATINR_INDAT0_SHIFT		0
#define DFSDM2_CH5DATINR_INDAT0_MASK		0xffff
/** @defgroup dfsdm2_ch5datinr_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch6cfgr1 CH6CFGR1 CHCFG6R1
@{*/


#define DFSDM2_CH6CFGR1_DATPACK_SHIFT		14
#define DFSDM2_CH6CFGR1_DATPACK_MASK		0x03
/** @defgroup dfsdm2_ch6cfgr1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM2_CH6CFGR1_DATMPX_SHIFT		12
#define DFSDM2_CH6CFGR1_DATMPX_MASK		0x03
/** @defgroup dfsdm2_ch6cfgr1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM2_CH6CFGR1_CHINSEL CHINSEL **/
#define DFSDM2_CH6CFGR1_CHINSEL		(1 << 8)
/** DFSDM2_CH6CFGR1_CHEN CHEN **/
#define DFSDM2_CH6CFGR1_CHEN		(1 << 7)
/** DFSDM2_CH6CFGR1_CKABEN CKABEN **/
#define DFSDM2_CH6CFGR1_CKABEN		(1 << 6)
/** DFSDM2_CH6CFGR1_SCDEN SCDEN **/
#define DFSDM2_CH6CFGR1_SCDEN		(1 << 5)

#define DFSDM2_CH6CFGR1_SPICKSEL_SHIFT		2
#define DFSDM2_CH6CFGR1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm2_ch6cfgr1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM2_CH6CFGR1_SITP_SHIFT		0
#define DFSDM2_CH6CFGR1_SITP_MASK		0x03
/** @defgroup dfsdm2_ch6cfgr1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch6cfgr2 CH6CFGR2 CHCFG6R2
@{*/


#define DFSDM2_CH6CFGR2_OFFSET_SHIFT		8
#define DFSDM2_CH6CFGR2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm2_ch6cfgr2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM2_CH6CFGR2_DTRBS_SHIFT		3
#define DFSDM2_CH6CFGR2_DTRBS_MASK		0x1f
/** @defgroup dfsdm2_ch6cfgr2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch6awscdr CH6AWSCDR AWSCD6R
@{*/


#define DFSDM2_CH6AWSCDR_AWFORD_SHIFT		22
#define DFSDM2_CH6AWSCDR_AWFORD_MASK		0x03
/** @defgroup dfsdm2_ch6awscdr_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM2_CH6AWSCDR_AWFOSR_SHIFT		16
#define DFSDM2_CH6AWSCDR_AWFOSR_MASK		0x1f
/** @defgroup dfsdm2_ch6awscdr_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM2_CH6AWSCDR_BKSCD_SHIFT		12
#define DFSDM2_CH6AWSCDR_BKSCD_MASK		0x0f
/** @defgroup dfsdm2_ch6awscdr_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM2_CH6AWSCDR_SCDT_SHIFT		0
#define DFSDM2_CH6AWSCDR_SCDT_MASK		0xff
/** @defgroup dfsdm2_ch6awscdr_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch6wdatr CH6WDATR CHWDAT6R
@{*/


#define DFSDM2_CH6WDATR_WDATA_SHIFT		0
#define DFSDM2_CH6WDATR_WDATA_MASK		0xffff
/** @defgroup dfsdm2_ch6wdatr_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch6datinr CH6DATINR CHDATIN6R
@{*/


#define DFSDM2_CH6DATINR_INDAT1_SHIFT		16
#define DFSDM2_CH6DATINR_INDAT1_MASK		0xffff
/** @defgroup dfsdm2_ch6datinr_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM2_CH6DATINR_INDAT0_SHIFT		0
#define DFSDM2_CH6DATINR_INDAT0_MASK		0xffff
/** @defgroup dfsdm2_ch6datinr_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch7cfgr1 CH7CFGR1 CHCFG7R1
@{*/


#define DFSDM2_CH7CFGR1_DATPACK_SHIFT		14
#define DFSDM2_CH7CFGR1_DATPACK_MASK		0x03
/** @defgroup dfsdm2_ch7cfgr1_datpack DATPACK DATPACK
@{*/
/**@}*/


#define DFSDM2_CH7CFGR1_DATMPX_SHIFT		12
#define DFSDM2_CH7CFGR1_DATMPX_MASK		0x03
/** @defgroup dfsdm2_ch7cfgr1_datmpx DATMPX DATMPX
@{*/
/**@}*/

/** DFSDM2_CH7CFGR1_CHINSEL CHINSEL **/
#define DFSDM2_CH7CFGR1_CHINSEL		(1 << 8)
/** DFSDM2_CH7CFGR1_CHEN CHEN **/
#define DFSDM2_CH7CFGR1_CHEN		(1 << 7)
/** DFSDM2_CH7CFGR1_CKABEN CKABEN **/
#define DFSDM2_CH7CFGR1_CKABEN		(1 << 6)
/** DFSDM2_CH7CFGR1_SCDEN SCDEN **/
#define DFSDM2_CH7CFGR1_SCDEN		(1 << 5)

#define DFSDM2_CH7CFGR1_SPICKSEL_SHIFT		2
#define DFSDM2_CH7CFGR1_SPICKSEL_MASK		0x03
/** @defgroup dfsdm2_ch7cfgr1_spicksel SPICKSEL SPICKSEL
@{*/
/**@}*/


#define DFSDM2_CH7CFGR1_SITP_SHIFT		0
#define DFSDM2_CH7CFGR1_SITP_MASK		0x03
/** @defgroup dfsdm2_ch7cfgr1_sitp SITP SITP
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch7cfgr2 CH7CFGR2 CHCFG7R2
@{*/


#define DFSDM2_CH7CFGR2_OFFSET_SHIFT		8
#define DFSDM2_CH7CFGR2_OFFSET_MASK		0xffffff
/** @defgroup dfsdm2_ch7cfgr2_offset OFFSET OFFSET
@{*/
/**@}*/


#define DFSDM2_CH7CFGR2_DTRBS_SHIFT		3
#define DFSDM2_CH7CFGR2_DTRBS_MASK		0x1f
/** @defgroup dfsdm2_ch7cfgr2_dtrbs DTRBS DTRBS
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch7awscdr CH7AWSCDR AWSCD7R
@{*/


#define DFSDM2_CH7AWSCDR_AWFORD_SHIFT		22
#define DFSDM2_CH7AWSCDR_AWFORD_MASK		0x03
/** @defgroup dfsdm2_ch7awscdr_awford AWFORD AWFORD
@{*/
/**@}*/


#define DFSDM2_CH7AWSCDR_AWFOSR_SHIFT		16
#define DFSDM2_CH7AWSCDR_AWFOSR_MASK		0x1f
/** @defgroup dfsdm2_ch7awscdr_awfosr AWFOSR AWFOSR
@{*/
/**@}*/


#define DFSDM2_CH7AWSCDR_BKSCD_SHIFT		12
#define DFSDM2_CH7AWSCDR_BKSCD_MASK		0x0f
/** @defgroup dfsdm2_ch7awscdr_bkscd BKSCD BKSCD
@{*/
/**@}*/


#define DFSDM2_CH7AWSCDR_SCDT_SHIFT		0
#define DFSDM2_CH7AWSCDR_SCDT_MASK		0xff
/** @defgroup dfsdm2_ch7awscdr_scdt SCDT SCDT
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch7wdatr CH7WDATR CHWDAT7R
@{*/


#define DFSDM2_CH7WDATR_WDATA_SHIFT		0
#define DFSDM2_CH7WDATR_WDATA_MASK		0xffff
/** @defgroup dfsdm2_ch7wdatr_wdata WDATA WDATA
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_ch7datinr CH7DATINR CHDATIN7R
@{*/


#define DFSDM2_CH7DATINR_INDAT1_SHIFT		16
#define DFSDM2_CH7DATINR_INDAT1_MASK		0xffff
/** @defgroup dfsdm2_ch7datinr_indat1 INDAT1 INDAT1
@{*/
/**@}*/


#define DFSDM2_CH7DATINR_INDAT0_SHIFT		0
#define DFSDM2_CH7DATINR_INDAT0_MASK		0xffff
/** @defgroup dfsdm2_ch7datinr_indat0 INDAT0 INDAT0
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt0cr1 FLT0CR1 control register 1
@{*/

/** DFSDM2_FLT0CR1_AWFSEL Analog watchdog fast mode select **/
#define DFSDM2_FLT0CR1_AWFSEL		(1 << 30)
/** DFSDM2_FLT0CR1_FAST Fast conversion mode selection for regular conversions **/
#define DFSDM2_FLT0CR1_FAST		(1 << 29)

#define DFSDM2_FLT0CR1_RCH_SHIFT		24
#define DFSDM2_FLT0CR1_RCH_MASK		0x07
/** @defgroup dfsdm2_flt0cr1_rch RCH Regular channel selection
@{*/
/**@}*/

/** DFSDM2_FLT0CR1_RDMAEN DMA channel enabled to read data for the regular conversion **/
#define DFSDM2_FLT0CR1_RDMAEN		(1 << 21)
/** DFSDM2_FLT0CR1_RSYNC Launch regular conversion synchronously with DFSDM0 **/
#define DFSDM2_FLT0CR1_RSYNC		(1 << 19)
/** DFSDM2_FLT0CR1_RCONT Continuous mode selection for regular conversions **/
#define DFSDM2_FLT0CR1_RCONT		(1 << 18)
/** DFSDM2_FLT0CR1_RSWSTART Software start of a conversion on the regular channel **/
#define DFSDM2_FLT0CR1_RSWSTART		(1 << 17)

#define DFSDM2_FLT0CR1_JEXTEN_SHIFT		13
#define DFSDM2_FLT0CR1_JEXTEN_MASK		0x03
/** @defgroup dfsdm2_flt0cr1_jexten JEXTEN Trigger enable and trigger edge selection for injected conversions
@{*/
/**@}*/


#define DFSDM2_FLT0CR1_JEXTSEL_SHIFT		8
#define DFSDM2_FLT0CR1_JEXTSEL_MASK		0x07
/** @defgroup dfsdm2_flt0cr1_jextsel JEXTSEL Trigger signal selection for launching injected conversions
@{*/
/**@}*/

/** DFSDM2_FLT0CR1_JDMAEN DMA channel enabled to read data for the injected channel group **/
#define DFSDM2_FLT0CR1_JDMAEN		(1 << 5)
/** DFSDM2_FLT0CR1_JSCAN Scanning conversion mode for injected conversions **/
#define DFSDM2_FLT0CR1_JSCAN		(1 << 4)
/** DFSDM2_FLT0CR1_JSYNC Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger **/
#define DFSDM2_FLT0CR1_JSYNC		(1 << 3)
/** DFSDM2_FLT0CR1_JSWSTART Start a conversion of the injected group of channels **/
#define DFSDM2_FLT0CR1_JSWSTART		(1 << 1)
/** DFSDM2_FLT0CR1_DFEN DFSDM enable **/
#define DFSDM2_FLT0CR1_DFEN		(1 << 0)

/**@}*/

/** @defgroup dfsdm2_flt0cr2 FLT0CR2 control register 2
@{*/


#define DFSDM2_FLT0CR2_AWDCH_SHIFT		16
#define DFSDM2_FLT0CR2_AWDCH_MASK		0xff
/** @defgroup dfsdm2_flt0cr2_awdch AWDCH Analog watchdog channel selection
@{*/
/**@}*/


#define DFSDM2_FLT0CR2_EXCH_SHIFT		8
#define DFSDM2_FLT0CR2_EXCH_MASK		0xff
/** @defgroup dfsdm2_flt0cr2_exch EXCH Extremes detector channel selection
@{*/
/**@}*/

/** DFSDM2_FLT0CR2_CKABIE Clock absence interrupt enable **/
#define DFSDM2_FLT0CR2_CKABIE		(1 << 6)
/** DFSDM2_FLT0CR2_SCDIE Short-circuit detector interrupt enable **/
#define DFSDM2_FLT0CR2_SCDIE		(1 << 5)
/** DFSDM2_FLT0CR2_AWDIE Analog watchdog interrupt enable **/
#define DFSDM2_FLT0CR2_AWDIE		(1 << 4)
/** DFSDM2_FLT0CR2_ROVRIE Regular data overrun interrupt enable **/
#define DFSDM2_FLT0CR2_ROVRIE		(1 << 3)
/** DFSDM2_FLT0CR2_JOVRIE Injected data overrun interrupt enable **/
#define DFSDM2_FLT0CR2_JOVRIE		(1 << 2)
/** DFSDM2_FLT0CR2_REOCIE Regular end of conversion interrupt enable **/
#define DFSDM2_FLT0CR2_REOCIE		(1 << 1)
/** DFSDM2_FLT0CR2_JEOCIE Injected end of conversion interrupt enable **/
#define DFSDM2_FLT0CR2_JEOCIE		(1 << 0)

/**@}*/

/** @defgroup dfsdm2_flt0isr FLT0ISR interrupt and status register
@{*/


#define DFSDM2_FLT0ISR_SCDF_SHIFT		24
#define DFSDM2_FLT0ISR_SCDF_MASK		0xff
/** @defgroup dfsdm2_flt0isr_scdf SCDF short-circuit detector flag
@{*/
/**@}*/


#define DFSDM2_FLT0ISR_CKABF_SHIFT		16
#define DFSDM2_FLT0ISR_CKABF_MASK		0xff
/** @defgroup dfsdm2_flt0isr_ckabf CKABF Clock absence flag
@{*/
/**@}*/

/** DFSDM2_FLT0ISR_RCIP Regular conversion in progress status **/
#define DFSDM2_FLT0ISR_RCIP		(1 << 14)
/** DFSDM2_FLT0ISR_JCIP Injected conversion in progress status **/
#define DFSDM2_FLT0ISR_JCIP		(1 << 13)
/** DFSDM2_FLT0ISR_AWDF Analog watchdog **/
#define DFSDM2_FLT0ISR_AWDF		(1 << 4)
/** DFSDM2_FLT0ISR_ROVRF Regular conversion overrun flag **/
#define DFSDM2_FLT0ISR_ROVRF		(1 << 3)
/** DFSDM2_FLT0ISR_JOVRF Injected conversion overrun flag **/
#define DFSDM2_FLT0ISR_JOVRF		(1 << 2)
/** DFSDM2_FLT0ISR_REOCF End of regular conversion flag **/
#define DFSDM2_FLT0ISR_REOCF		(1 << 1)
/** DFSDM2_FLT0ISR_JEOCF End of injected conversion flag **/
#define DFSDM2_FLT0ISR_JEOCF		(1 << 0)

/**@}*/

/** @defgroup dfsdm2_flt0icr FLT0ICR interrupt flag clear register
@{*/


#define DFSDM2_FLT0ICR_CLRSCDF_SHIFT		24
#define DFSDM2_FLT0ICR_CLRSCDF_MASK		0xff
/** @defgroup dfsdm2_flt0icr_clrscdf CLRSCDF Clear the short-circuit detector flag
@{*/
/**@}*/


#define DFSDM2_FLT0ICR_CLRCKABF_SHIFT		16
#define DFSDM2_FLT0ICR_CLRCKABF_MASK		0xff
/** @defgroup dfsdm2_flt0icr_clrckabf CLRCKABF Clear the clock absence flag
@{*/
/**@}*/

/** DFSDM2_FLT0ICR_CLRROVRF Clear the regular conversion overrun flag **/
#define DFSDM2_FLT0ICR_CLRROVRF		(1 << 3)
/** DFSDM2_FLT0ICR_CLRJOVRF Clear the injected conversion overrun flag **/
#define DFSDM2_FLT0ICR_CLRJOVRF		(1 << 2)

/**@}*/

/** @defgroup dfsdm2_flt0jchgr FLT0JCHGR injected channel group selection register
@{*/


#define DFSDM2_FLT0JCHGR_JCHG_SHIFT		0
#define DFSDM2_FLT0JCHGR_JCHG_MASK		0xff
/** @defgroup dfsdm2_flt0jchgr_jchg JCHG Injected channel group selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt0fcr FLT0FCR filter control register
@{*/


#define DFSDM2_FLT0FCR_FORD_SHIFT		29
#define DFSDM2_FLT0FCR_FORD_MASK		0x07
/** @defgroup dfsdm2_flt0fcr_ford FORD Sinc filter order
@{*/
/**@}*/


#define DFSDM2_FLT0FCR_FOSR_SHIFT		16
#define DFSDM2_FLT0FCR_FOSR_MASK		0x3ff
/** @defgroup dfsdm2_flt0fcr_fosr FOSR Sinc filter oversampling ratio (decimation rate)
@{*/
/**@}*/


#define DFSDM2_FLT0FCR_IOSR_SHIFT		0
#define DFSDM2_FLT0FCR_IOSR_MASK		0xff
/** @defgroup dfsdm2_flt0fcr_iosr IOSR Integrator oversampling ratio (averaging length)
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt0jdatar FLT0JDATAR data register for injected group
@{*/


#define DFSDM2_FLT0JDATAR_JDATA_SHIFT		8
#define DFSDM2_FLT0JDATAR_JDATA_MASK		0xffffff
/** @defgroup dfsdm2_flt0jdatar_jdata JDATA Injected group conversion data
@{*/
/**@}*/


#define DFSDM2_FLT0JDATAR_JDATACH_SHIFT		0
#define DFSDM2_FLT0JDATAR_JDATACH_MASK		0x07
/** @defgroup dfsdm2_flt0jdatar_jdatach JDATACH Injected channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt0rdatar FLT0RDATAR data register for the regular channel
@{*/


#define DFSDM2_FLT0RDATAR_RDATA_SHIFT		8
#define DFSDM2_FLT0RDATAR_RDATA_MASK		0xffffff
/** @defgroup dfsdm2_flt0rdatar_rdata RDATA Regular channel conversion data
@{*/
/**@}*/

/** DFSDM2_FLT0RDATAR_RPEND Regular channel pending data **/
#define DFSDM2_FLT0RDATAR_RPEND		(1 << 4)

#define DFSDM2_FLT0RDATAR_RDATACH_SHIFT		0
#define DFSDM2_FLT0RDATAR_RDATACH_MASK		0x07
/** @defgroup dfsdm2_flt0rdatar_rdatach RDATACH Regular channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt0awhtr FLT0AWHTR analog watchdog high threshold register
@{*/


#define DFSDM2_FLT0AWHTR_AWHT_SHIFT		8
#define DFSDM2_FLT0AWHTR_AWHT_MASK		0xffffff
/** @defgroup dfsdm2_flt0awhtr_awht AWHT Analog watchdog high threshold
@{*/
/**@}*/


#define DFSDM2_FLT0AWHTR_BKAWH_SHIFT		0
#define DFSDM2_FLT0AWHTR_BKAWH_MASK		0x0f
/** @defgroup dfsdm2_flt0awhtr_bkawh BKAWH Break signal assignment to analog watchdog high threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt0awltr FLT0AWLTR analog watchdog low threshold register
@{*/


#define DFSDM2_FLT0AWLTR_AWLT_SHIFT		8
#define DFSDM2_FLT0AWLTR_AWLT_MASK		0xffffff
/** @defgroup dfsdm2_flt0awltr_awlt AWLT Analog watchdog low threshold
@{*/
/**@}*/


#define DFSDM2_FLT0AWLTR_BKAWL_SHIFT		0
#define DFSDM2_FLT0AWLTR_BKAWL_MASK		0x0f
/** @defgroup dfsdm2_flt0awltr_bkawl BKAWL Break signal assignment to analog watchdog low threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt0awsr FLT0AWSR analog watchdog status register
@{*/


#define DFSDM2_FLT0AWSR_AWHTF_SHIFT		8
#define DFSDM2_FLT0AWSR_AWHTF_MASK		0xff
/** @defgroup dfsdm2_flt0awsr_awhtf AWHTF Analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM2_FLT0AWSR_AWLTF_SHIFT		0
#define DFSDM2_FLT0AWSR_AWLTF_MASK		0xff
/** @defgroup dfsdm2_flt0awsr_awltf AWLTF Analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt0awcfr FLT0AWCFR analog watchdog clear flag register
@{*/


#define DFSDM2_FLT0AWCFR_CLRAWHTF_SHIFT		8
#define DFSDM2_FLT0AWCFR_CLRAWHTF_MASK		0xff
/** @defgroup dfsdm2_flt0awcfr_clrawhtf CLRAWHTF Clear the analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM2_FLT0AWCFR_CLRAWLTF_SHIFT		0
#define DFSDM2_FLT0AWCFR_CLRAWLTF_MASK		0xff
/** @defgroup dfsdm2_flt0awcfr_clrawltf CLRAWLTF Clear the analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt0exmax FLT0EXMAX Extremes detector maximum register
@{*/


#define DFSDM2_FLT0EXMAX_EXMAX_SHIFT		8
#define DFSDM2_FLT0EXMAX_EXMAX_MASK		0xffffff
/** @defgroup dfsdm2_flt0exmax_exmax EXMAX Extremes detector maximum value
@{*/
/**@}*/


#define DFSDM2_FLT0EXMAX_EXMAXCH_SHIFT		0
#define DFSDM2_FLT0EXMAX_EXMAXCH_MASK		0x07
/** @defgroup dfsdm2_flt0exmax_exmaxch EXMAXCH Extremes detector maximum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt0exmin FLT0EXMIN Extremes detector minimum register
@{*/


#define DFSDM2_FLT0EXMIN_EXMIN_SHIFT		8
#define DFSDM2_FLT0EXMIN_EXMIN_MASK		0xffffff
/** @defgroup dfsdm2_flt0exmin_exmin EXMIN EXMIN
@{*/
/**@}*/


#define DFSDM2_FLT0EXMIN_EXMINCH_SHIFT		0
#define DFSDM2_FLT0EXMIN_EXMINCH_MASK		0x07
/** @defgroup dfsdm2_flt0exmin_exminch EXMINCH Extremes detector minimum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt0cnvtimr FLT0CNVTIMR conversion timer register
@{*/


#define DFSDM2_FLT0CNVTIMR_CNVCNT_SHIFT		4
#define DFSDM2_FLT0CNVTIMR_CNVCNT_MASK		0xfffffff
/** @defgroup dfsdm2_flt0cnvtimr_cnvcnt CNVCNT 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt1cr1 FLT1CR1 control register 1
@{*/

/** DFSDM2_FLT1CR1_AWFSEL Analog watchdog fast mode select **/
#define DFSDM2_FLT1CR1_AWFSEL		(1 << 30)
/** DFSDM2_FLT1CR1_FAST Fast conversion mode selection for regular conversions **/
#define DFSDM2_FLT1CR1_FAST		(1 << 29)

#define DFSDM2_FLT1CR1_RCH_SHIFT		24
#define DFSDM2_FLT1CR1_RCH_MASK		0x07
/** @defgroup dfsdm2_flt1cr1_rch RCH Regular channel selection
@{*/
/**@}*/

/** DFSDM2_FLT1CR1_RDMAEN DMA channel enabled to read data for the regular conversion **/
#define DFSDM2_FLT1CR1_RDMAEN		(1 << 21)
/** DFSDM2_FLT1CR1_RSYNC Launch regular conversion synchronously with DFSDM0 **/
#define DFSDM2_FLT1CR1_RSYNC		(1 << 19)
/** DFSDM2_FLT1CR1_RCONT Continuous mode selection for regular conversions **/
#define DFSDM2_FLT1CR1_RCONT		(1 << 18)
/** DFSDM2_FLT1CR1_RSWSTART Software start of a conversion on the regular channel **/
#define DFSDM2_FLT1CR1_RSWSTART		(1 << 17)

#define DFSDM2_FLT1CR1_JEXTEN_SHIFT		13
#define DFSDM2_FLT1CR1_JEXTEN_MASK		0x03
/** @defgroup dfsdm2_flt1cr1_jexten JEXTEN Trigger enable and trigger edge selection for injected conversions
@{*/
/**@}*/


#define DFSDM2_FLT1CR1_JEXTSEL_SHIFT		8
#define DFSDM2_FLT1CR1_JEXTSEL_MASK		0x07
/** @defgroup dfsdm2_flt1cr1_jextsel JEXTSEL Trigger signal selection for launching injected conversions
@{*/
/**@}*/

/** DFSDM2_FLT1CR1_JDMAEN DMA channel enabled to read data for the injected channel group **/
#define DFSDM2_FLT1CR1_JDMAEN		(1 << 5)
/** DFSDM2_FLT1CR1_JSCAN Scanning conversion mode for injected conversions **/
#define DFSDM2_FLT1CR1_JSCAN		(1 << 4)
/** DFSDM2_FLT1CR1_JSYNC Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger **/
#define DFSDM2_FLT1CR1_JSYNC		(1 << 3)
/** DFSDM2_FLT1CR1_JSWSTART Start a conversion of the injected group of channels **/
#define DFSDM2_FLT1CR1_JSWSTART		(1 << 1)
/** DFSDM2_FLT1CR1_DFEN DFSDM enable **/
#define DFSDM2_FLT1CR1_DFEN		(1 << 0)

/**@}*/

/** @defgroup dfsdm2_flt1cr2 FLT1CR2 control register 2
@{*/


#define DFSDM2_FLT1CR2_AWDCH_SHIFT		16
#define DFSDM2_FLT1CR2_AWDCH_MASK		0xff
/** @defgroup dfsdm2_flt1cr2_awdch AWDCH Analog watchdog channel selection
@{*/
/**@}*/


#define DFSDM2_FLT1CR2_EXCH_SHIFT		8
#define DFSDM2_FLT1CR2_EXCH_MASK		0xff
/** @defgroup dfsdm2_flt1cr2_exch EXCH Extremes detector channel selection
@{*/
/**@}*/

/** DFSDM2_FLT1CR2_CKABIE Clock absence interrupt enable **/
#define DFSDM2_FLT1CR2_CKABIE		(1 << 6)
/** DFSDM2_FLT1CR2_SCDIE Short-circuit detector interrupt enable **/
#define DFSDM2_FLT1CR2_SCDIE		(1 << 5)
/** DFSDM2_FLT1CR2_AWDIE Analog watchdog interrupt enable **/
#define DFSDM2_FLT1CR2_AWDIE		(1 << 4)
/** DFSDM2_FLT1CR2_ROVRIE Regular data overrun interrupt enable **/
#define DFSDM2_FLT1CR2_ROVRIE		(1 << 3)
/** DFSDM2_FLT1CR2_JOVRIE Injected data overrun interrupt enable **/
#define DFSDM2_FLT1CR2_JOVRIE		(1 << 2)
/** DFSDM2_FLT1CR2_REOCIE Regular end of conversion interrupt enable **/
#define DFSDM2_FLT1CR2_REOCIE		(1 << 1)
/** DFSDM2_FLT1CR2_JEOCIE Injected end of conversion interrupt enable **/
#define DFSDM2_FLT1CR2_JEOCIE		(1 << 0)

/**@}*/

/** @defgroup dfsdm2_flt1isr FLT1ISR interrupt and status register
@{*/


#define DFSDM2_FLT1ISR_SCDF_SHIFT		24
#define DFSDM2_FLT1ISR_SCDF_MASK		0xff
/** @defgroup dfsdm2_flt1isr_scdf SCDF short-circuit detector flag
@{*/
/**@}*/


#define DFSDM2_FLT1ISR_CKABF_SHIFT		16
#define DFSDM2_FLT1ISR_CKABF_MASK		0xff
/** @defgroup dfsdm2_flt1isr_ckabf CKABF Clock absence flag
@{*/
/**@}*/

/** DFSDM2_FLT1ISR_RCIP Regular conversion in progress status **/
#define DFSDM2_FLT1ISR_RCIP		(1 << 14)
/** DFSDM2_FLT1ISR_JCIP Injected conversion in progress status **/
#define DFSDM2_FLT1ISR_JCIP		(1 << 13)
/** DFSDM2_FLT1ISR_AWDF Analog watchdog **/
#define DFSDM2_FLT1ISR_AWDF		(1 << 4)
/** DFSDM2_FLT1ISR_ROVRF Regular conversion overrun flag **/
#define DFSDM2_FLT1ISR_ROVRF		(1 << 3)
/** DFSDM2_FLT1ISR_JOVRF Injected conversion overrun flag **/
#define DFSDM2_FLT1ISR_JOVRF		(1 << 2)
/** DFSDM2_FLT1ISR_REOCF End of regular conversion flag **/
#define DFSDM2_FLT1ISR_REOCF		(1 << 1)
/** DFSDM2_FLT1ISR_JEOCF End of injected conversion flag **/
#define DFSDM2_FLT1ISR_JEOCF		(1 << 0)

/**@}*/

/** @defgroup dfsdm2_flt1icr FLT1ICR interrupt flag clear register
@{*/


#define DFSDM2_FLT1ICR_CLRSCDF_SHIFT		24
#define DFSDM2_FLT1ICR_CLRSCDF_MASK		0xff
/** @defgroup dfsdm2_flt1icr_clrscdf CLRSCDF Clear the short-circuit detector flag
@{*/
/**@}*/


#define DFSDM2_FLT1ICR_CLRCKABF_SHIFT		16
#define DFSDM2_FLT1ICR_CLRCKABF_MASK		0xff
/** @defgroup dfsdm2_flt1icr_clrckabf CLRCKABF Clear the clock absence flag
@{*/
/**@}*/

/** DFSDM2_FLT1ICR_CLRROVRF Clear the regular conversion overrun flag **/
#define DFSDM2_FLT1ICR_CLRROVRF		(1 << 3)
/** DFSDM2_FLT1ICR_CLRJOVRF Clear the injected conversion overrun flag **/
#define DFSDM2_FLT1ICR_CLRJOVRF		(1 << 2)

/**@}*/

/** @defgroup dfsdm2_flt1jchgr FLT1JCHGR injected channel group selection register
@{*/


#define DFSDM2_FLT1JCHGR_JCHG_SHIFT		0
#define DFSDM2_FLT1JCHGR_JCHG_MASK		0xff
/** @defgroup dfsdm2_flt1jchgr_jchg JCHG Injected channel group selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt1fcr FLT1FCR filter control register
@{*/


#define DFSDM2_FLT1FCR_FORD_SHIFT		29
#define DFSDM2_FLT1FCR_FORD_MASK		0x07
/** @defgroup dfsdm2_flt1fcr_ford FORD Sinc filter order
@{*/
/**@}*/


#define DFSDM2_FLT1FCR_FOSR_SHIFT		16
#define DFSDM2_FLT1FCR_FOSR_MASK		0x3ff
/** @defgroup dfsdm2_flt1fcr_fosr FOSR Sinc filter oversampling ratio (decimation rate)
@{*/
/**@}*/


#define DFSDM2_FLT1FCR_IOSR_SHIFT		0
#define DFSDM2_FLT1FCR_IOSR_MASK		0xff
/** @defgroup dfsdm2_flt1fcr_iosr IOSR Integrator oversampling ratio (averaging length)
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt1jdatar FLT1JDATAR data register for injected group
@{*/


#define DFSDM2_FLT1JDATAR_JDATA_SHIFT		8
#define DFSDM2_FLT1JDATAR_JDATA_MASK		0xffffff
/** @defgroup dfsdm2_flt1jdatar_jdata JDATA Injected group conversion data
@{*/
/**@}*/


#define DFSDM2_FLT1JDATAR_JDATACH_SHIFT		0
#define DFSDM2_FLT1JDATAR_JDATACH_MASK		0x07
/** @defgroup dfsdm2_flt1jdatar_jdatach JDATACH Injected channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt1rdatar FLT1RDATAR data register for the regular channel
@{*/


#define DFSDM2_FLT1RDATAR_RDATA_SHIFT		8
#define DFSDM2_FLT1RDATAR_RDATA_MASK		0xffffff
/** @defgroup dfsdm2_flt1rdatar_rdata RDATA Regular channel conversion data
@{*/
/**@}*/

/** DFSDM2_FLT1RDATAR_RPEND Regular channel pending data **/
#define DFSDM2_FLT1RDATAR_RPEND		(1 << 4)

#define DFSDM2_FLT1RDATAR_RDATACH_SHIFT		0
#define DFSDM2_FLT1RDATAR_RDATACH_MASK		0x07
/** @defgroup dfsdm2_flt1rdatar_rdatach RDATACH Regular channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt1awhtr FLT1AWHTR analog watchdog high threshold register
@{*/


#define DFSDM2_FLT1AWHTR_AWHT_SHIFT		8
#define DFSDM2_FLT1AWHTR_AWHT_MASK		0xffffff
/** @defgroup dfsdm2_flt1awhtr_awht AWHT Analog watchdog high threshold
@{*/
/**@}*/


#define DFSDM2_FLT1AWHTR_BKAWH_SHIFT		0
#define DFSDM2_FLT1AWHTR_BKAWH_MASK		0x0f
/** @defgroup dfsdm2_flt1awhtr_bkawh BKAWH Break signal assignment to analog watchdog high threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt1awltr FLT1AWLTR analog watchdog low threshold register
@{*/


#define DFSDM2_FLT1AWLTR_AWLT_SHIFT		8
#define DFSDM2_FLT1AWLTR_AWLT_MASK		0xffffff
/** @defgroup dfsdm2_flt1awltr_awlt AWLT Analog watchdog low threshold
@{*/
/**@}*/


#define DFSDM2_FLT1AWLTR_BKAWL_SHIFT		0
#define DFSDM2_FLT1AWLTR_BKAWL_MASK		0x0f
/** @defgroup dfsdm2_flt1awltr_bkawl BKAWL Break signal assignment to analog watchdog low threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt1awsr FLT1AWSR analog watchdog status register
@{*/


#define DFSDM2_FLT1AWSR_AWHTF_SHIFT		8
#define DFSDM2_FLT1AWSR_AWHTF_MASK		0xff
/** @defgroup dfsdm2_flt1awsr_awhtf AWHTF Analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM2_FLT1AWSR_AWLTF_SHIFT		0
#define DFSDM2_FLT1AWSR_AWLTF_MASK		0xff
/** @defgroup dfsdm2_flt1awsr_awltf AWLTF Analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt1awcfr FLT1AWCFR analog watchdog clear flag register
@{*/


#define DFSDM2_FLT1AWCFR_CLRAWHTF_SHIFT		8
#define DFSDM2_FLT1AWCFR_CLRAWHTF_MASK		0xff
/** @defgroup dfsdm2_flt1awcfr_clrawhtf CLRAWHTF Clear the analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM2_FLT1AWCFR_CLRAWLTF_SHIFT		0
#define DFSDM2_FLT1AWCFR_CLRAWLTF_MASK		0xff
/** @defgroup dfsdm2_flt1awcfr_clrawltf CLRAWLTF Clear the analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt1exmax FLT1EXMAX Extremes detector maximum register
@{*/


#define DFSDM2_FLT1EXMAX_EXMAX_SHIFT		8
#define DFSDM2_FLT1EXMAX_EXMAX_MASK		0xffffff
/** @defgroup dfsdm2_flt1exmax_exmax EXMAX Extremes detector maximum value
@{*/
/**@}*/


#define DFSDM2_FLT1EXMAX_EXMAXCH_SHIFT		0
#define DFSDM2_FLT1EXMAX_EXMAXCH_MASK		0x07
/** @defgroup dfsdm2_flt1exmax_exmaxch EXMAXCH Extremes detector maximum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt1exmin FLT1EXMIN Extremes detector minimum register
@{*/


#define DFSDM2_FLT1EXMIN_EXMIN_SHIFT		8
#define DFSDM2_FLT1EXMIN_EXMIN_MASK		0xffffff
/** @defgroup dfsdm2_flt1exmin_exmin EXMIN EXMIN
@{*/
/**@}*/


#define DFSDM2_FLT1EXMIN_EXMINCH_SHIFT		0
#define DFSDM2_FLT1EXMIN_EXMINCH_MASK		0x07
/** @defgroup dfsdm2_flt1exmin_exminch EXMINCH Extremes detector minimum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt1cnvtimr FLT1CNVTIMR conversion timer register
@{*/


#define DFSDM2_FLT1CNVTIMR_CNVCNT_SHIFT		4
#define DFSDM2_FLT1CNVTIMR_CNVCNT_MASK		0xfffffff
/** @defgroup dfsdm2_flt1cnvtimr_cnvcnt CNVCNT 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt2cr1 FLT2CR1 control register 1
@{*/

/** DFSDM2_FLT2CR1_AWFSEL Analog watchdog fast mode select **/
#define DFSDM2_FLT2CR1_AWFSEL		(1 << 30)
/** DFSDM2_FLT2CR1_FAST Fast conversion mode selection for regular conversions **/
#define DFSDM2_FLT2CR1_FAST		(1 << 29)

#define DFSDM2_FLT2CR1_RCH_SHIFT		24
#define DFSDM2_FLT2CR1_RCH_MASK		0x07
/** @defgroup dfsdm2_flt2cr1_rch RCH Regular channel selection
@{*/
/**@}*/

/** DFSDM2_FLT2CR1_RDMAEN DMA channel enabled to read data for the regular conversion **/
#define DFSDM2_FLT2CR1_RDMAEN		(1 << 21)
/** DFSDM2_FLT2CR1_RSYNC Launch regular conversion synchronously with DFSDM0 **/
#define DFSDM2_FLT2CR1_RSYNC		(1 << 19)
/** DFSDM2_FLT2CR1_RCONT Continuous mode selection for regular conversions **/
#define DFSDM2_FLT2CR1_RCONT		(1 << 18)
/** DFSDM2_FLT2CR1_RSWSTART Software start of a conversion on the regular channel **/
#define DFSDM2_FLT2CR1_RSWSTART		(1 << 17)

#define DFSDM2_FLT2CR1_JEXTEN_SHIFT		13
#define DFSDM2_FLT2CR1_JEXTEN_MASK		0x03
/** @defgroup dfsdm2_flt2cr1_jexten JEXTEN Trigger enable and trigger edge selection for injected conversions
@{*/
/**@}*/


#define DFSDM2_FLT2CR1_JEXTSEL_SHIFT		8
#define DFSDM2_FLT2CR1_JEXTSEL_MASK		0x07
/** @defgroup dfsdm2_flt2cr1_jextsel JEXTSEL Trigger signal selection for launching injected conversions
@{*/
/**@}*/

/** DFSDM2_FLT2CR1_JDMAEN DMA channel enabled to read data for the injected channel group **/
#define DFSDM2_FLT2CR1_JDMAEN		(1 << 5)
/** DFSDM2_FLT2CR1_JSCAN Scanning conversion mode for injected conversions **/
#define DFSDM2_FLT2CR1_JSCAN		(1 << 4)
/** DFSDM2_FLT2CR1_JSYNC Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger **/
#define DFSDM2_FLT2CR1_JSYNC		(1 << 3)
/** DFSDM2_FLT2CR1_JSWSTART Start a conversion of the injected group of channels **/
#define DFSDM2_FLT2CR1_JSWSTART		(1 << 1)
/** DFSDM2_FLT2CR1_DFEN DFSDM enable **/
#define DFSDM2_FLT2CR1_DFEN		(1 << 0)

/**@}*/

/** @defgroup dfsdm2_flt2cr2 FLT2CR2 control register 2
@{*/


#define DFSDM2_FLT2CR2_AWDCH_SHIFT		16
#define DFSDM2_FLT2CR2_AWDCH_MASK		0xff
/** @defgroup dfsdm2_flt2cr2_awdch AWDCH Analog watchdog channel selection
@{*/
/**@}*/


#define DFSDM2_FLT2CR2_EXCH_SHIFT		8
#define DFSDM2_FLT2CR2_EXCH_MASK		0xff
/** @defgroup dfsdm2_flt2cr2_exch EXCH Extremes detector channel selection
@{*/
/**@}*/

/** DFSDM2_FLT2CR2_CKABIE Clock absence interrupt enable **/
#define DFSDM2_FLT2CR2_CKABIE		(1 << 6)
/** DFSDM2_FLT2CR2_SCDIE Short-circuit detector interrupt enable **/
#define DFSDM2_FLT2CR2_SCDIE		(1 << 5)
/** DFSDM2_FLT2CR2_AWDIE Analog watchdog interrupt enable **/
#define DFSDM2_FLT2CR2_AWDIE		(1 << 4)
/** DFSDM2_FLT2CR2_ROVRIE Regular data overrun interrupt enable **/
#define DFSDM2_FLT2CR2_ROVRIE		(1 << 3)
/** DFSDM2_FLT2CR2_JOVRIE Injected data overrun interrupt enable **/
#define DFSDM2_FLT2CR2_JOVRIE		(1 << 2)
/** DFSDM2_FLT2CR2_REOCIE Regular end of conversion interrupt enable **/
#define DFSDM2_FLT2CR2_REOCIE		(1 << 1)
/** DFSDM2_FLT2CR2_JEOCIE Injected end of conversion interrupt enable **/
#define DFSDM2_FLT2CR2_JEOCIE		(1 << 0)

/**@}*/

/** @defgroup dfsdm2_flt2isr FLT2ISR interrupt and status register
@{*/


#define DFSDM2_FLT2ISR_SCDF_SHIFT		24
#define DFSDM2_FLT2ISR_SCDF_MASK		0xff
/** @defgroup dfsdm2_flt2isr_scdf SCDF short-circuit detector flag
@{*/
/**@}*/


#define DFSDM2_FLT2ISR_CKABF_SHIFT		16
#define DFSDM2_FLT2ISR_CKABF_MASK		0xff
/** @defgroup dfsdm2_flt2isr_ckabf CKABF Clock absence flag
@{*/
/**@}*/

/** DFSDM2_FLT2ISR_RCIP Regular conversion in progress status **/
#define DFSDM2_FLT2ISR_RCIP		(1 << 14)
/** DFSDM2_FLT2ISR_JCIP Injected conversion in progress status **/
#define DFSDM2_FLT2ISR_JCIP		(1 << 13)
/** DFSDM2_FLT2ISR_AWDF Analog watchdog **/
#define DFSDM2_FLT2ISR_AWDF		(1 << 4)
/** DFSDM2_FLT2ISR_ROVRF Regular conversion overrun flag **/
#define DFSDM2_FLT2ISR_ROVRF		(1 << 3)
/** DFSDM2_FLT2ISR_JOVRF Injected conversion overrun flag **/
#define DFSDM2_FLT2ISR_JOVRF		(1 << 2)
/** DFSDM2_FLT2ISR_REOCF End of regular conversion flag **/
#define DFSDM2_FLT2ISR_REOCF		(1 << 1)
/** DFSDM2_FLT2ISR_JEOCF End of injected conversion flag **/
#define DFSDM2_FLT2ISR_JEOCF		(1 << 0)

/**@}*/

/** @defgroup dfsdm2_flt2icr FLT2ICR interrupt flag clear register
@{*/


#define DFSDM2_FLT2ICR_CLRSCDF_SHIFT		24
#define DFSDM2_FLT2ICR_CLRSCDF_MASK		0xff
/** @defgroup dfsdm2_flt2icr_clrscdf CLRSCDF Clear the short-circuit detector flag
@{*/
/**@}*/


#define DFSDM2_FLT2ICR_CLRCKABF_SHIFT		16
#define DFSDM2_FLT2ICR_CLRCKABF_MASK		0xff
/** @defgroup dfsdm2_flt2icr_clrckabf CLRCKABF Clear the clock absence flag
@{*/
/**@}*/

/** DFSDM2_FLT2ICR_CLRROVRF Clear the regular conversion overrun flag **/
#define DFSDM2_FLT2ICR_CLRROVRF		(1 << 3)
/** DFSDM2_FLT2ICR_CLRJOVRF Clear the injected conversion overrun flag **/
#define DFSDM2_FLT2ICR_CLRJOVRF		(1 << 2)

/**@}*/

/** @defgroup dfsdm2_flt2jchgr FLT2JCHGR injected channel group selection register
@{*/


#define DFSDM2_FLT2JCHGR_JCHG_SHIFT		0
#define DFSDM2_FLT2JCHGR_JCHG_MASK		0xff
/** @defgroup dfsdm2_flt2jchgr_jchg JCHG Injected channel group selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt2fcr FLT2FCR filter control register
@{*/


#define DFSDM2_FLT2FCR_FORD_SHIFT		29
#define DFSDM2_FLT2FCR_FORD_MASK		0x07
/** @defgroup dfsdm2_flt2fcr_ford FORD Sinc filter order
@{*/
/**@}*/


#define DFSDM2_FLT2FCR_FOSR_SHIFT		16
#define DFSDM2_FLT2FCR_FOSR_MASK		0x3ff
/** @defgroup dfsdm2_flt2fcr_fosr FOSR Sinc filter oversampling ratio (decimation rate)
@{*/
/**@}*/


#define DFSDM2_FLT2FCR_IOSR_SHIFT		0
#define DFSDM2_FLT2FCR_IOSR_MASK		0xff
/** @defgroup dfsdm2_flt2fcr_iosr IOSR Integrator oversampling ratio (averaging length)
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt2jdatar FLT2JDATAR data register for injected group
@{*/


#define DFSDM2_FLT2JDATAR_JDATA_SHIFT		8
#define DFSDM2_FLT2JDATAR_JDATA_MASK		0xffffff
/** @defgroup dfsdm2_flt2jdatar_jdata JDATA Injected group conversion data
@{*/
/**@}*/


#define DFSDM2_FLT2JDATAR_JDATACH_SHIFT		0
#define DFSDM2_FLT2JDATAR_JDATACH_MASK		0x07
/** @defgroup dfsdm2_flt2jdatar_jdatach JDATACH Injected channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt2rdatar FLT2RDATAR data register for the regular channel
@{*/


#define DFSDM2_FLT2RDATAR_RDATA_SHIFT		8
#define DFSDM2_FLT2RDATAR_RDATA_MASK		0xffffff
/** @defgroup dfsdm2_flt2rdatar_rdata RDATA Regular channel conversion data
@{*/
/**@}*/

/** DFSDM2_FLT2RDATAR_RPEND Regular channel pending data **/
#define DFSDM2_FLT2RDATAR_RPEND		(1 << 4)

#define DFSDM2_FLT2RDATAR_RDATACH_SHIFT		0
#define DFSDM2_FLT2RDATAR_RDATACH_MASK		0x07
/** @defgroup dfsdm2_flt2rdatar_rdatach RDATACH Regular channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt2awhtr FLT2AWHTR analog watchdog high threshold register
@{*/


#define DFSDM2_FLT2AWHTR_AWHT_SHIFT		8
#define DFSDM2_FLT2AWHTR_AWHT_MASK		0xffffff
/** @defgroup dfsdm2_flt2awhtr_awht AWHT Analog watchdog high threshold
@{*/
/**@}*/


#define DFSDM2_FLT2AWHTR_BKAWH_SHIFT		0
#define DFSDM2_FLT2AWHTR_BKAWH_MASK		0x0f
/** @defgroup dfsdm2_flt2awhtr_bkawh BKAWH Break signal assignment to analog watchdog high threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt2awltr FLT2AWLTR analog watchdog low threshold register
@{*/


#define DFSDM2_FLT2AWLTR_AWLT_SHIFT		8
#define DFSDM2_FLT2AWLTR_AWLT_MASK		0xffffff
/** @defgroup dfsdm2_flt2awltr_awlt AWLT Analog watchdog low threshold
@{*/
/**@}*/


#define DFSDM2_FLT2AWLTR_BKAWL_SHIFT		0
#define DFSDM2_FLT2AWLTR_BKAWL_MASK		0x0f
/** @defgroup dfsdm2_flt2awltr_bkawl BKAWL Break signal assignment to analog watchdog low threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt2awsr FLT2AWSR analog watchdog status register
@{*/


#define DFSDM2_FLT2AWSR_AWHTF_SHIFT		8
#define DFSDM2_FLT2AWSR_AWHTF_MASK		0xff
/** @defgroup dfsdm2_flt2awsr_awhtf AWHTF Analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM2_FLT2AWSR_AWLTF_SHIFT		0
#define DFSDM2_FLT2AWSR_AWLTF_MASK		0xff
/** @defgroup dfsdm2_flt2awsr_awltf AWLTF Analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt2awcfr FLT2AWCFR analog watchdog clear flag register
@{*/


#define DFSDM2_FLT2AWCFR_CLRAWHTF_SHIFT		8
#define DFSDM2_FLT2AWCFR_CLRAWHTF_MASK		0xff
/** @defgroup dfsdm2_flt2awcfr_clrawhtf CLRAWHTF Clear the analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM2_FLT2AWCFR_CLRAWLTF_SHIFT		0
#define DFSDM2_FLT2AWCFR_CLRAWLTF_MASK		0xff
/** @defgroup dfsdm2_flt2awcfr_clrawltf CLRAWLTF Clear the analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt2exmax FLT2EXMAX Extremes detector maximum register
@{*/


#define DFSDM2_FLT2EXMAX_EXMAX_SHIFT		8
#define DFSDM2_FLT2EXMAX_EXMAX_MASK		0xffffff
/** @defgroup dfsdm2_flt2exmax_exmax EXMAX Extremes detector maximum value
@{*/
/**@}*/


#define DFSDM2_FLT2EXMAX_EXMAXCH_SHIFT		0
#define DFSDM2_FLT2EXMAX_EXMAXCH_MASK		0x07
/** @defgroup dfsdm2_flt2exmax_exmaxch EXMAXCH Extremes detector maximum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt2exmin FLT2EXMIN Extremes detector minimum register
@{*/


#define DFSDM2_FLT2EXMIN_EXMIN_SHIFT		8
#define DFSDM2_FLT2EXMIN_EXMIN_MASK		0xffffff
/** @defgroup dfsdm2_flt2exmin_exmin EXMIN EXMIN
@{*/
/**@}*/


#define DFSDM2_FLT2EXMIN_EXMINCH_SHIFT		0
#define DFSDM2_FLT2EXMIN_EXMINCH_MASK		0x07
/** @defgroup dfsdm2_flt2exmin_exminch EXMINCH Extremes detector minimum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt2cnvtimr FLT2CNVTIMR conversion timer register
@{*/


#define DFSDM2_FLT2CNVTIMR_CNVCNT_SHIFT		4
#define DFSDM2_FLT2CNVTIMR_CNVCNT_MASK		0xfffffff
/** @defgroup dfsdm2_flt2cnvtimr_cnvcnt CNVCNT 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt3cr1 FLT3CR1 control register 1
@{*/

/** DFSDM2_FLT3CR1_AWFSEL Analog watchdog fast mode select **/
#define DFSDM2_FLT3CR1_AWFSEL		(1 << 30)
/** DFSDM2_FLT3CR1_FAST Fast conversion mode selection for regular conversions **/
#define DFSDM2_FLT3CR1_FAST		(1 << 29)

#define DFSDM2_FLT3CR1_RCH_SHIFT		24
#define DFSDM2_FLT3CR1_RCH_MASK		0x07
/** @defgroup dfsdm2_flt3cr1_rch RCH Regular channel selection
@{*/
/**@}*/

/** DFSDM2_FLT3CR1_RDMAEN DMA channel enabled to read data for the regular conversion **/
#define DFSDM2_FLT3CR1_RDMAEN		(1 << 21)
/** DFSDM2_FLT3CR1_RSYNC Launch regular conversion synchronously with DFSDM0 **/
#define DFSDM2_FLT3CR1_RSYNC		(1 << 19)
/** DFSDM2_FLT3CR1_RCONT Continuous mode selection for regular conversions **/
#define DFSDM2_FLT3CR1_RCONT		(1 << 18)
/** DFSDM2_FLT3CR1_RSWSTART Software start of a conversion on the regular channel **/
#define DFSDM2_FLT3CR1_RSWSTART		(1 << 17)

#define DFSDM2_FLT3CR1_JEXTEN_SHIFT		13
#define DFSDM2_FLT3CR1_JEXTEN_MASK		0x03
/** @defgroup dfsdm2_flt3cr1_jexten JEXTEN Trigger enable and trigger edge selection for injected conversions
@{*/
/**@}*/


#define DFSDM2_FLT3CR1_JEXTSEL_SHIFT		8
#define DFSDM2_FLT3CR1_JEXTSEL_MASK		0x07
/** @defgroup dfsdm2_flt3cr1_jextsel JEXTSEL Trigger signal selection for launching injected conversions
@{*/
/**@}*/

/** DFSDM2_FLT3CR1_JDMAEN DMA channel enabled to read data for the injected channel group **/
#define DFSDM2_FLT3CR1_JDMAEN		(1 << 5)
/** DFSDM2_FLT3CR1_JSCAN Scanning conversion mode for injected conversions **/
#define DFSDM2_FLT3CR1_JSCAN		(1 << 4)
/** DFSDM2_FLT3CR1_JSYNC Launch an injected conversion synchronously with the DFSDM0 JSWSTART trigger **/
#define DFSDM2_FLT3CR1_JSYNC		(1 << 3)
/** DFSDM2_FLT3CR1_JSWSTART Start a conversion of the injected group of channels **/
#define DFSDM2_FLT3CR1_JSWSTART		(1 << 1)
/** DFSDM2_FLT3CR1_DFEN DFSDM enable **/
#define DFSDM2_FLT3CR1_DFEN		(1 << 0)

/**@}*/

/** @defgroup dfsdm2_flt3cr2 FLT3CR2 control register 2
@{*/


#define DFSDM2_FLT3CR2_AWDCH_SHIFT		16
#define DFSDM2_FLT3CR2_AWDCH_MASK		0xff
/** @defgroup dfsdm2_flt3cr2_awdch AWDCH Analog watchdog channel selection
@{*/
/**@}*/


#define DFSDM2_FLT3CR2_EXCH_SHIFT		8
#define DFSDM2_FLT3CR2_EXCH_MASK		0xff
/** @defgroup dfsdm2_flt3cr2_exch EXCH Extremes detector channel selection
@{*/
/**@}*/

/** DFSDM2_FLT3CR2_CKABIE Clock absence interrupt enable **/
#define DFSDM2_FLT3CR2_CKABIE		(1 << 6)
/** DFSDM2_FLT3CR2_SCDIE Short-circuit detector interrupt enable **/
#define DFSDM2_FLT3CR2_SCDIE		(1 << 5)
/** DFSDM2_FLT3CR2_AWDIE Analog watchdog interrupt enable **/
#define DFSDM2_FLT3CR2_AWDIE		(1 << 4)
/** DFSDM2_FLT3CR2_ROVRIE Regular data overrun interrupt enable **/
#define DFSDM2_FLT3CR2_ROVRIE		(1 << 3)
/** DFSDM2_FLT3CR2_JOVRIE Injected data overrun interrupt enable **/
#define DFSDM2_FLT3CR2_JOVRIE		(1 << 2)
/** DFSDM2_FLT3CR2_REOCIE Regular end of conversion interrupt enable **/
#define DFSDM2_FLT3CR2_REOCIE		(1 << 1)
/** DFSDM2_FLT3CR2_JEOCIE Injected end of conversion interrupt enable **/
#define DFSDM2_FLT3CR2_JEOCIE		(1 << 0)

/**@}*/

/** @defgroup dfsdm2_flt3isr FLT3ISR interrupt and status register
@{*/


#define DFSDM2_FLT3ISR_SCDF_SHIFT		24
#define DFSDM2_FLT3ISR_SCDF_MASK		0xff
/** @defgroup dfsdm2_flt3isr_scdf SCDF short-circuit detector flag
@{*/
/**@}*/


#define DFSDM2_FLT3ISR_CKABF_SHIFT		16
#define DFSDM2_FLT3ISR_CKABF_MASK		0xff
/** @defgroup dfsdm2_flt3isr_ckabf CKABF Clock absence flag
@{*/
/**@}*/

/** DFSDM2_FLT3ISR_RCIP Regular conversion in progress status **/
#define DFSDM2_FLT3ISR_RCIP		(1 << 14)
/** DFSDM2_FLT3ISR_JCIP Injected conversion in progress status **/
#define DFSDM2_FLT3ISR_JCIP		(1 << 13)
/** DFSDM2_FLT3ISR_AWDF Analog watchdog **/
#define DFSDM2_FLT3ISR_AWDF		(1 << 4)
/** DFSDM2_FLT3ISR_ROVRF Regular conversion overrun flag **/
#define DFSDM2_FLT3ISR_ROVRF		(1 << 3)
/** DFSDM2_FLT3ISR_JOVRF Injected conversion overrun flag **/
#define DFSDM2_FLT3ISR_JOVRF		(1 << 2)
/** DFSDM2_FLT3ISR_REOCF End of regular conversion flag **/
#define DFSDM2_FLT3ISR_REOCF		(1 << 1)
/** DFSDM2_FLT3ISR_JEOCF End of injected conversion flag **/
#define DFSDM2_FLT3ISR_JEOCF		(1 << 0)

/**@}*/

/** @defgroup dfsdm2_flt3icr FLT3ICR interrupt flag clear register
@{*/


#define DFSDM2_FLT3ICR_CLRSCDF_SHIFT		24
#define DFSDM2_FLT3ICR_CLRSCDF_MASK		0xff
/** @defgroup dfsdm2_flt3icr_clrscdf CLRSCDF Clear the short-circuit detector flag
@{*/
/**@}*/


#define DFSDM2_FLT3ICR_CLRCKABF_SHIFT		16
#define DFSDM2_FLT3ICR_CLRCKABF_MASK		0xff
/** @defgroup dfsdm2_flt3icr_clrckabf CLRCKABF Clear the clock absence flag
@{*/
/**@}*/

/** DFSDM2_FLT3ICR_CLRROVRF Clear the regular conversion overrun flag **/
#define DFSDM2_FLT3ICR_CLRROVRF		(1 << 3)
/** DFSDM2_FLT3ICR_CLRJOVRF Clear the injected conversion overrun flag **/
#define DFSDM2_FLT3ICR_CLRJOVRF		(1 << 2)

/**@}*/

/** @defgroup dfsdm2_flt3jchgr FLT3JCHGR injected channel group selection register
@{*/


#define DFSDM2_FLT3JCHGR_JCHG_SHIFT		0
#define DFSDM2_FLT3JCHGR_JCHG_MASK		0xff
/** @defgroup dfsdm2_flt3jchgr_jchg JCHG Injected channel group selection
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt3fcr FLT3FCR filter control register
@{*/


#define DFSDM2_FLT3FCR_FORD_SHIFT		29
#define DFSDM2_FLT3FCR_FORD_MASK		0x07
/** @defgroup dfsdm2_flt3fcr_ford FORD Sinc filter order
@{*/
/**@}*/


#define DFSDM2_FLT3FCR_FOSR_SHIFT		16
#define DFSDM2_FLT3FCR_FOSR_MASK		0x3ff
/** @defgroup dfsdm2_flt3fcr_fosr FOSR Sinc filter oversampling ratio (decimation rate)
@{*/
/**@}*/


#define DFSDM2_FLT3FCR_IOSR_SHIFT		0
#define DFSDM2_FLT3FCR_IOSR_MASK		0xff
/** @defgroup dfsdm2_flt3fcr_iosr IOSR Integrator oversampling ratio (averaging length)
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt3jdatar FLT3JDATAR data register for injected group
@{*/


#define DFSDM2_FLT3JDATAR_JDATA_SHIFT		8
#define DFSDM2_FLT3JDATAR_JDATA_MASK		0xffffff
/** @defgroup dfsdm2_flt3jdatar_jdata JDATA Injected group conversion data
@{*/
/**@}*/


#define DFSDM2_FLT3JDATAR_JDATACH_SHIFT		0
#define DFSDM2_FLT3JDATAR_JDATACH_MASK		0x07
/** @defgroup dfsdm2_flt3jdatar_jdatach JDATACH Injected channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt3rdatar FLT3RDATAR data register for the regular channel
@{*/


#define DFSDM2_FLT3RDATAR_RDATA_SHIFT		8
#define DFSDM2_FLT3RDATAR_RDATA_MASK		0xffffff
/** @defgroup dfsdm2_flt3rdatar_rdata RDATA Regular channel conversion data
@{*/
/**@}*/

/** DFSDM2_FLT3RDATAR_RPEND Regular channel pending data **/
#define DFSDM2_FLT3RDATAR_RPEND		(1 << 4)

#define DFSDM2_FLT3RDATAR_RDATACH_SHIFT		0
#define DFSDM2_FLT3RDATAR_RDATACH_MASK		0x07
/** @defgroup dfsdm2_flt3rdatar_rdatach RDATACH Regular channel most recently converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt3awhtr FLT3AWHTR analog watchdog high threshold register
@{*/


#define DFSDM2_FLT3AWHTR_AWHT_SHIFT		8
#define DFSDM2_FLT3AWHTR_AWHT_MASK		0xffffff
/** @defgroup dfsdm2_flt3awhtr_awht AWHT Analog watchdog high threshold
@{*/
/**@}*/


#define DFSDM2_FLT3AWHTR_BKAWH_SHIFT		0
#define DFSDM2_FLT3AWHTR_BKAWH_MASK		0x0f
/** @defgroup dfsdm2_flt3awhtr_bkawh BKAWH Break signal assignment to analog watchdog high threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt3awltr FLT3AWLTR analog watchdog low threshold register
@{*/


#define DFSDM2_FLT3AWLTR_AWLT_SHIFT		8
#define DFSDM2_FLT3AWLTR_AWLT_MASK		0xffffff
/** @defgroup dfsdm2_flt3awltr_awlt AWLT Analog watchdog low threshold
@{*/
/**@}*/


#define DFSDM2_FLT3AWLTR_BKAWL_SHIFT		0
#define DFSDM2_FLT3AWLTR_BKAWL_MASK		0x0f
/** @defgroup dfsdm2_flt3awltr_bkawl BKAWL Break signal assignment to analog watchdog low threshold event
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt3awsr FLT3AWSR analog watchdog status register
@{*/


#define DFSDM2_FLT3AWSR_AWHTF_SHIFT		8
#define DFSDM2_FLT3AWSR_AWHTF_MASK		0xff
/** @defgroup dfsdm2_flt3awsr_awhtf AWHTF Analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM2_FLT3AWSR_AWLTF_SHIFT		0
#define DFSDM2_FLT3AWSR_AWLTF_MASK		0xff
/** @defgroup dfsdm2_flt3awsr_awltf AWLTF Analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt3awcfr FLT3AWCFR analog watchdog clear flag register
@{*/


#define DFSDM2_FLT3AWCFR_CLRAWHTF_SHIFT		8
#define DFSDM2_FLT3AWCFR_CLRAWHTF_MASK		0xff
/** @defgroup dfsdm2_flt3awcfr_clrawhtf CLRAWHTF Clear the analog watchdog high threshold flag
@{*/
/**@}*/


#define DFSDM2_FLT3AWCFR_CLRAWLTF_SHIFT		0
#define DFSDM2_FLT3AWCFR_CLRAWLTF_MASK		0xff
/** @defgroup dfsdm2_flt3awcfr_clrawltf CLRAWLTF Clear the analog watchdog low threshold flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt3exmax FLT3EXMAX Extremes detector maximum register
@{*/


#define DFSDM2_FLT3EXMAX_EXMAX_SHIFT		8
#define DFSDM2_FLT3EXMAX_EXMAX_MASK		0xffffff
/** @defgroup dfsdm2_flt3exmax_exmax EXMAX Extremes detector maximum value
@{*/
/**@}*/


#define DFSDM2_FLT3EXMAX_EXMAXCH_SHIFT		0
#define DFSDM2_FLT3EXMAX_EXMAXCH_MASK		0x07
/** @defgroup dfsdm2_flt3exmax_exmaxch EXMAXCH Extremes detector maximum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt3exmin FLT3EXMIN Extremes detector minimum register
@{*/


#define DFSDM2_FLT3EXMIN_EXMIN_SHIFT		8
#define DFSDM2_FLT3EXMIN_EXMIN_MASK		0xffffff
/** @defgroup dfsdm2_flt3exmin_exmin EXMIN EXMIN
@{*/
/**@}*/


#define DFSDM2_FLT3EXMIN_EXMINCH_SHIFT		0
#define DFSDM2_FLT3EXMIN_EXMINCH_MASK		0x07
/** @defgroup dfsdm2_flt3exmin_exminch EXMINCH Extremes detector minimum data channel
@{*/
/**@}*/


/**@}*/

/** @defgroup dfsdm2_flt3cnvtimr FLT3CNVTIMR conversion timer register
@{*/


#define DFSDM2_FLT3CNVTIMR_CNVCNT_SHIFT		4
#define DFSDM2_FLT3CNVTIMR_CNVCNT_MASK		0xfffffff
/** @defgroup dfsdm2_flt3cnvtimr_cnvcnt CNVCNT 28-bit timer counting conversion time t = CNVCNT[27:0] / fDFSDM_CKIN
@{*/
/**@}*/


/**@}*/

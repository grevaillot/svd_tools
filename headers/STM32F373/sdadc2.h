#pragma once 

/* --- SDADC2: Sigma-delta analog-to-digital converter -------------- */

/** @defgroup sdadc2_registers Sigma-delta analog-to-digital
      converter Register
@{*/

/** SDADC2_CR1 control register 1 **/
#define SDADC2_CR1			MMIO32(SDADC2_BASE + 0x00)
/** SDADC2_CR2 control register 2 **/
#define SDADC2_CR2			MMIO32(SDADC2_BASE + 0x04)
/** SDADC2_ISR interrupt and status register **/
#define SDADC2_ISR			MMIO32(SDADC2_BASE + 0x08)
/** SDADC2_CLRISR interrupt and status clear register **/
#define SDADC2_CLRISR			MMIO32(SDADC2_BASE + 0x0c)
/** SDADC2_JCHGR injected channel group selection register **/
#define SDADC2_JCHGR			MMIO32(SDADC2_BASE + 0x14)
/** SDADC2_CONF0R configuration 0 register **/
#define SDADC2_CONF0R			MMIO32(SDADC2_BASE + 0x20)
/** SDADC2_CONF1R configuration 1 register **/
#define SDADC2_CONF1R			MMIO32(SDADC2_BASE + 0x24)
/** SDADC2_CONF2R configuration 2 register **/
#define SDADC2_CONF2R			MMIO32(SDADC2_BASE + 0x28)
/** SDADC2_CONFCHR1 channel configuration register 1 **/
#define SDADC2_CONFCHR1			MMIO32(SDADC2_BASE + 0x40)
/** SDADC2_CONFCHR2 channel configuration register 2 **/
#define SDADC2_CONFCHR2			MMIO32(SDADC2_BASE + 0x44)
/** SDADC2_JDATAR data register for injected group **/
#define SDADC2_JDATAR			MMIO32(SDADC2_BASE + 0x60)
/** SDADC2_RDATAR data register for the regular channel **/
#define SDADC2_RDATAR			MMIO32(SDADC2_BASE + 0x64)
/** SDADC2_JDATA12R SDADC1 and SDADC2 injected data register **/
#define SDADC2_JDATA12R			MMIO32(SDADC2_BASE + 0x70)
/** SDADC2_RDATA12R SDADC1 and SDADC2 regular data register **/
#define SDADC2_RDATA12R			MMIO32(SDADC2_BASE + 0x74)
/** SDADC2_JDATA13R SDADC1 and SDADC3 injected data register **/
#define SDADC2_JDATA13R			MMIO32(SDADC2_BASE + 0x78)
/** SDADC2_RDATA13R SDADC1 and SDADC3 regular data register **/
#define SDADC2_RDATA13R			MMIO32(SDADC2_BASE + 0x7c)

/**@}*/


/** @defgroup sdadc2_cr1 CR1 control register 1
@{*/

/** SDADC2_CR1_INIT Initialization mode request **/
#define SDADC2_CR1_INIT		(1 << 31)
/** SDADC2_CR1_RDMAEN DMA channel enabled to read data for the regular channel **/
#define SDADC2_CR1_RDMAEN		(1 << 17)
/** SDADC2_CR1_JDMAEN DMA channel enabled to read data for the injected channel group **/
#define SDADC2_CR1_JDMAEN		(1 << 16)
/** SDADC2_CR1_RSYNC Launch regular conversion synchronously with SDADC1 **/
#define SDADC2_CR1_RSYNC		(1 << 15)
/** SDADC2_CR1_JSYNC Launch a injected conversion synchronously with SDADC1 **/
#define SDADC2_CR1_JSYNC		(1 << 14)
/** SDADC2_CR1_PDI Enter power down mode when idle **/
#define SDADC2_CR1_PDI		(1 << 12)
/** SDADC2_CR1_SBI Enter Standby mode when idle **/
#define SDADC2_CR1_SBI		(1 << 11)
/** SDADC2_CR1_SLOWCK Slow clock mode enable **/
#define SDADC2_CR1_SLOWCK		(1 << 10)

#define SDADC2_CR1_REFV_SHIFT		8
#define SDADC2_CR1_REFV_MASK		0x03
/** @defgroup sdadc2_cr1_refv REFV Reference voltage selection
@{*/
/**@}*/

/** SDADC2_CR1_ROVRIE Regular data overrun interrupt enable **/
#define SDADC2_CR1_ROVRIE		(1 << 4)
/** SDADC2_CR1_REOCIE Regular end of conversion interrupt enable **/
#define SDADC2_CR1_REOCIE		(1 << 3)
/** SDADC2_CR1_JOVRIE Injected data overrun interrupt enable **/
#define SDADC2_CR1_JOVRIE		(1 << 2)
/** SDADC2_CR1_JEOCIE Injected end of conversion interrupt enable **/
#define SDADC2_CR1_JEOCIE		(1 << 1)
/** SDADC2_CR1_EOCALIE End of calibration interrupt enable **/
#define SDADC2_CR1_EOCALIE		(1 << 0)

/**@}*/

/** @defgroup sdadc2_cr2 CR2 control register 2
@{*/

/** SDADC2_CR2_FAST Fast conversion mode selection **/
#define SDADC2_CR2_FAST		(1 << 24)
/** SDADC2_CR2_RSWSTART Software start of a conversion on the regular channel **/
#define SDADC2_CR2_RSWSTART		(1 << 23)
/** SDADC2_CR2_RCONT Continuous mode selection for regular conversions **/
#define SDADC2_CR2_RCONT		(1 << 22)

#define SDADC2_CR2_RCH_SHIFT		16
#define SDADC2_CR2_RCH_MASK		0x0f
/** @defgroup sdadc2_cr2_rch RCH Regular channel selection
@{*/
/**@}*/

/** SDADC2_CR2_JSWSTART Start a conversion of the injected group of channels **/
#define SDADC2_CR2_JSWSTART		(1 << 15)

#define SDADC2_CR2_JEXTEN_SHIFT		13
#define SDADC2_CR2_JEXTEN_MASK		0x03
/** @defgroup sdadc2_cr2_jexten JEXTEN Trigger enable and trigger edge selection for injected conversions
@{*/
/**@}*/


#define SDADC2_CR2_JEXTSEL_SHIFT		8
#define SDADC2_CR2_JEXTSEL_MASK		0x0f
/** @defgroup sdadc2_cr2_jextsel JEXTSEL Trigger signal selection for launching injected conversions
@{*/
/**@}*/

/** SDADC2_CR2_JDS Delay start of injected conversions. **/
#define SDADC2_CR2_JDS		(1 << 6)
/** SDADC2_CR2_JCONT Continuous mode selection for injected conversions **/
#define SDADC2_CR2_JCONT		(1 << 5)
/** SDADC2_CR2_STARTCALIB Start calibration **/
#define SDADC2_CR2_STARTCALIB		(1 << 4)

#define SDADC2_CR2_CALIBCNT_SHIFT		1
#define SDADC2_CR2_CALIBCNT_MASK		0x03
/** @defgroup sdadc2_cr2_calibcnt CALIBCNT Number of calibration sequences to be performed (number of valid configurations)
@{*/
/**@}*/

/** SDADC2_CR2_ADON SDADC enable **/
#define SDADC2_CR2_ADON		(1 << 0)

/**@}*/

/** @defgroup sdadc2_isr ISR interrupt and status register
@{*/

/** SDADC2_ISR_INITRDY Initialization mode is ready **/
#define SDADC2_ISR_INITRDY		(1 << 31)
/** SDADC2_ISR_STABIP Stabilization in progress status **/
#define SDADC2_ISR_STABIP		(1 << 15)
/** SDADC2_ISR_RCIP Regular conversion in progress status **/
#define SDADC2_ISR_RCIP		(1 << 14)
/** SDADC2_ISR_JCIP Injected conversion in progress status **/
#define SDADC2_ISR_JCIP		(1 << 13)
/** SDADC2_ISR_CALIBIP Calibration in progress status **/
#define SDADC2_ISR_CALIBIP		(1 << 12)
/** SDADC2_ISR_ROVRF Regular conversion overrun flag **/
#define SDADC2_ISR_ROVRF		(1 << 4)
/** SDADC2_ISR_REOCF End of regular conversion flag **/
#define SDADC2_ISR_REOCF		(1 << 3)
/** SDADC2_ISR_JOVRF Injected conversion overrun flag **/
#define SDADC2_ISR_JOVRF		(1 << 2)
/** SDADC2_ISR_JEOCF End of injected conversion flag **/
#define SDADC2_ISR_JEOCF		(1 << 1)
/** SDADC2_ISR_EOCALF End of calibration flag **/
#define SDADC2_ISR_EOCALF		(1 << 0)

/**@}*/

/** @defgroup sdadc2_clrisr CLRISR interrupt and status clear register
@{*/

/** SDADC2_CLRISR_CLRROVRF Clear the regular conversion overrun flag **/
#define SDADC2_CLRISR_CLRROVRF		(1 << 4)
/** SDADC2_CLRISR_CLRJOVRF Clear the injected conversion overrun flag **/
#define SDADC2_CLRISR_CLRJOVRF		(1 << 2)
/** SDADC2_CLRISR_CLREOCALF Clear the end of calibration flag **/
#define SDADC2_CLRISR_CLREOCALF		(1 << 0)

/**@}*/

/** @defgroup sdadc2_jchgr JCHGR injected channel group selection register
@{*/


#define SDADC2_JCHGR_JCHG_SHIFT		0
#define SDADC2_JCHGR_JCHG_MASK		0x1ff
/** @defgroup sdadc2_jchgr_jchg JCHG Injected channel group selection
@{*/
/**@}*/


/**@}*/

/** @defgroup sdadc2_conf0r CONF0R configuration 0 register
@{*/


#define SDADC2_CONF0R_COMMON0_SHIFT		30
#define SDADC2_CONF0R_COMMON0_MASK		0x03
/** @defgroup sdadc2_conf0r_common0 COMMON0 Common mode for configuration 0
@{*/
/**@}*/


#define SDADC2_CONF0R_SE0_SHIFT		26
#define SDADC2_CONF0R_SE0_MASK		0x03
/** @defgroup sdadc2_conf0r_se0 SE0 Single-ended mode for configuration 0
@{*/
/**@}*/


#define SDADC2_CONF0R_GAIN0_SHIFT		20
#define SDADC2_CONF0R_GAIN0_MASK		0x07
/** @defgroup sdadc2_conf0r_gain0 GAIN0 Gain setting for configuration 0
@{*/
/**@}*/


#define SDADC2_CONF0R_OFFSET0_SHIFT		0
#define SDADC2_CONF0R_OFFSET0_MASK		0xfff
/** @defgroup sdadc2_conf0r_offset0 OFFSET0 Twelve-bit calibration offset for configuration 0
@{*/
/**@}*/


/**@}*/

/** @defgroup sdadc2_conf1r CONF1R configuration 1 register
@{*/


#define SDADC2_CONF1R_COMMON1_SHIFT		30
#define SDADC2_CONF1R_COMMON1_MASK		0x03
/** @defgroup sdadc2_conf1r_common1 COMMON1 Common mode for configuration 1
@{*/
/**@}*/


#define SDADC2_CONF1R_SE1_SHIFT		26
#define SDADC2_CONF1R_SE1_MASK		0x03
/** @defgroup sdadc2_conf1r_se1 SE1 Single-ended mode for configuration 1
@{*/
/**@}*/


#define SDADC2_CONF1R_GAIN1_SHIFT		20
#define SDADC2_CONF1R_GAIN1_MASK		0x07
/** @defgroup sdadc2_conf1r_gain1 GAIN1 Gain setting for configuration 1
@{*/
/**@}*/


#define SDADC2_CONF1R_OFFSET1_SHIFT		0
#define SDADC2_CONF1R_OFFSET1_MASK		0xfff
/** @defgroup sdadc2_conf1r_offset1 OFFSET1 Twelve-bit calibration offset for configuration 1
@{*/
/**@}*/


/**@}*/

/** @defgroup sdadc2_conf2r CONF2R configuration 2 register
@{*/


#define SDADC2_CONF2R_COMMON2_SHIFT		30
#define SDADC2_CONF2R_COMMON2_MASK		0x03
/** @defgroup sdadc2_conf2r_common2 COMMON2 Common mode for configuration 2
@{*/
/**@}*/


#define SDADC2_CONF2R_SE2_SHIFT		26
#define SDADC2_CONF2R_SE2_MASK		0x03
/** @defgroup sdadc2_conf2r_se2 SE2 Single-ended mode for configuration 2
@{*/
/**@}*/


#define SDADC2_CONF2R_GAIN2_SHIFT		20
#define SDADC2_CONF2R_GAIN2_MASK		0x07
/** @defgroup sdadc2_conf2r_gain2 GAIN2 Gain setting for configuration 2
@{*/
/**@}*/


#define SDADC2_CONF2R_OFFSET2_SHIFT		0
#define SDADC2_CONF2R_OFFSET2_MASK		0xfff
/** @defgroup sdadc2_conf2r_offset2 OFFSET2 Twelve-bit calibration offset for configuration 2
@{*/
/**@}*/


/**@}*/

/** @defgroup sdadc2_confchr1 CONFCHR1 channel configuration register 1
@{*/


#define SDADC2_CONFCHR1_CONFCH7_SHIFT		28
#define SDADC2_CONFCHR1_CONFCH7_MASK		0x03
/** @defgroup sdadc2_confchr1_confch7 CONFCH7 CONFCH7
@{*/
/**@}*/


#define SDADC2_CONFCHR1_CONFCH6_SHIFT		24
#define SDADC2_CONFCHR1_CONFCH6_MASK		0x03
/** @defgroup sdadc2_confchr1_confch6 CONFCH6 CONFCH6
@{*/
/**@}*/


#define SDADC2_CONFCHR1_CONFCH5_SHIFT		20
#define SDADC2_CONFCHR1_CONFCH5_MASK		0x03
/** @defgroup sdadc2_confchr1_confch5 CONFCH5 CONFCH5
@{*/
/**@}*/


#define SDADC2_CONFCHR1_CONFCH4_SHIFT		16
#define SDADC2_CONFCHR1_CONFCH4_MASK		0x03
/** @defgroup sdadc2_confchr1_confch4 CONFCH4 CONFCH4
@{*/
/**@}*/


#define SDADC2_CONFCHR1_CONFCH3_SHIFT		12
#define SDADC2_CONFCHR1_CONFCH3_MASK		0x03
/** @defgroup sdadc2_confchr1_confch3 CONFCH3 CONFCH3
@{*/
/**@}*/


#define SDADC2_CONFCHR1_CONFCH2_SHIFT		8
#define SDADC2_CONFCHR1_CONFCH2_MASK		0x03
/** @defgroup sdadc2_confchr1_confch2 CONFCH2 CONFCH2
@{*/
/**@}*/


#define SDADC2_CONFCHR1_CONFCH1_SHIFT		4
#define SDADC2_CONFCHR1_CONFCH1_MASK		0x03
/** @defgroup sdadc2_confchr1_confch1 CONFCH1 CONFCH1
@{*/
/**@}*/


#define SDADC2_CONFCHR1_CONFCH0_SHIFT		0
#define SDADC2_CONFCHR1_CONFCH0_MASK		0x03
/** @defgroup sdadc2_confchr1_confch0 CONFCH0 CONFCH0
@{*/
/**@}*/


/**@}*/

/** @defgroup sdadc2_confchr2 CONFCHR2 channel configuration register 2
@{*/


#define SDADC2_CONFCHR2_CONFCH8_SHIFT		0
#define SDADC2_CONFCHR2_CONFCH8_MASK		0x03
/** @defgroup sdadc2_confchr2_confch8 CONFCH8 Channel 8 configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup sdadc2_jdatar JDATAR data register for injected group
@{*/


#define SDADC2_JDATAR_JDATACH_SHIFT		25
#define SDADC2_JDATAR_JDATACH_MASK		0x0f
/** @defgroup sdadc2_jdatar_jdatach JDATACH Injected channel most recently converted
@{*/
/**@}*/


#define SDADC2_JDATAR_JDATA_SHIFT		0
#define SDADC2_JDATAR_JDATA_MASK		0xffff
/** @defgroup sdadc2_jdatar_jdata JDATA Injected group conversion data
@{*/
/**@}*/


/**@}*/

/** @defgroup sdadc2_rdatar RDATAR data register for the regular channel
@{*/


#define SDADC2_RDATAR_RDATA_SHIFT		0
#define SDADC2_RDATAR_RDATA_MASK		0xffff
/** @defgroup sdadc2_rdatar_rdata RDATA Regular channel conversion data
@{*/
/**@}*/


/**@}*/

/** @defgroup sdadc2_jdata12r JDATA12R SDADC1 and SDADC2 injected data register
@{*/


#define SDADC2_JDATA12R_JDATA2_SHIFT		16
#define SDADC2_JDATA12R_JDATA2_MASK		0xffff
/** @defgroup sdadc2_jdata12r_jdata2 JDATA2 Injected group conversion data for SDADC2
@{*/
/**@}*/


#define SDADC2_JDATA12R_JDATA1_SHIFT		0
#define SDADC2_JDATA12R_JDATA1_MASK		0xffff
/** @defgroup sdadc2_jdata12r_jdata1 JDATA1 Injected group conversion data for SDADC1
@{*/
/**@}*/


/**@}*/

/** @defgroup sdadc2_rdata12r RDATA12R SDADC1 and SDADC2 regular data register
@{*/


#define SDADC2_RDATA12R_RDATA2_SHIFT		16
#define SDADC2_RDATA12R_RDATA2_MASK		0xffff
/** @defgroup sdadc2_rdata12r_rdata2 RDATA2 Regular conversion data for SDADC2
@{*/
/**@}*/


#define SDADC2_RDATA12R_RDATA1_SHIFT		0
#define SDADC2_RDATA12R_RDATA1_MASK		0xffff
/** @defgroup sdadc2_rdata12r_rdata1 RDATA1 Regular conversion data for SDADC1
@{*/
/**@}*/


/**@}*/

/** @defgroup sdadc2_jdata13r JDATA13R SDADC1 and SDADC3 injected data register
@{*/


#define SDADC2_JDATA13R_JDATA3_SHIFT		16
#define SDADC2_JDATA13R_JDATA3_MASK		0xffff
/** @defgroup sdadc2_jdata13r_jdata3 JDATA3 Injected group conversion data for SDADC3
@{*/
/**@}*/


#define SDADC2_JDATA13R_JDATA1_SHIFT		0
#define SDADC2_JDATA13R_JDATA1_MASK		0xffff
/** @defgroup sdadc2_jdata13r_jdata1 JDATA1 Injected group conversion data for SDADC1
@{*/
/**@}*/


/**@}*/

/** @defgroup sdadc2_rdata13r RDATA13R SDADC1 and SDADC3 regular data register
@{*/


#define SDADC2_RDATA13R_RDATA3_SHIFT		16
#define SDADC2_RDATA13R_RDATA3_MASK		0xffff
/** @defgroup sdadc2_rdata13r_rdata3 RDATA3 Regular conversion data for SDADC3
@{*/
/**@}*/


#define SDADC2_RDATA13R_RDATA1_SHIFT		0
#define SDADC2_RDATA13R_RDATA1_MASK		0xffff
/** @defgroup sdadc2_rdata13r_rdata1 RDATA1 Regular conversion data for SDADC1
@{*/
/**@}*/


/**@}*/

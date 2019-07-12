#pragma once 

/* --- CRS: Clock recovery system ----------------------------------- */

/** @defgroup crs_registers Clock recovery system Register
@{*/

/** CRS_CR control register **/
#define CRS_CR			MMIO32(CRS_BASE + 0x00)
/** CRS_CFGR configuration register **/
#define CRS_CFGR			MMIO32(CRS_BASE + 0x04)
/** CRS_ISR interrupt and status register **/
#define CRS_ISR			MMIO32(CRS_BASE + 0x08)
/** CRS_ICR interrupt flag clear register **/
#define CRS_ICR			MMIO32(CRS_BASE + 0x0c)

/**@}*/


/** @defgroup crs_cr CR control register
@{*/


#define CRS_CR_TRIM_SHIFT		8
#define CRS_CR_TRIM_MASK		0x3f
/** @defgroup crs_cr_trim TRIM HSI48 oscillator smooth trimming
@{*/
/**@}*/

/** CRS_CR_SWSYNC Generate software SYNC event **/
#define CRS_CR_SWSYNC		(1 << 7)
/** CRS_CR_AUTOTRIMEN Automatic trimming enable **/
#define CRS_CR_AUTOTRIMEN		(1 << 6)
/** CRS_CR_CEN Frequency error counter enable **/
#define CRS_CR_CEN		(1 << 5)
/** CRS_CR_ESYNCIE Expected SYNC interrupt enable **/
#define CRS_CR_ESYNCIE		(1 << 3)
/** CRS_CR_ERRIE Synchronization or trimming error interrupt enable **/
#define CRS_CR_ERRIE		(1 << 2)
/** CRS_CR_SYNCWARNIE SYNC warning interrupt enable **/
#define CRS_CR_SYNCWARNIE		(1 << 1)
/** CRS_CR_SYNCOKIE SYNC event OK interrupt enable **/
#define CRS_CR_SYNCOKIE		(1 << 0)

/**@}*/

/** @defgroup crs_cfgr CFGR configuration register
@{*/

/** CRS_CFGR_SYNCPOL SYNC polarity selection **/
#define CRS_CFGR_SYNCPOL		(1 << 31)

#define CRS_CFGR_SYNCSRC_SHIFT		28
#define CRS_CFGR_SYNCSRC_MASK		0x03
/** @defgroup crs_cfgr_syncsrc SYNCSRC SYNC signal source selection
@{*/
/**@}*/


#define CRS_CFGR_SYNCDIV_SHIFT		24
#define CRS_CFGR_SYNCDIV_MASK		0x07
/** @defgroup crs_cfgr_syncdiv SYNCDIV SYNC divider
@{*/
/**@}*/


#define CRS_CFGR_FELIM_SHIFT		16
#define CRS_CFGR_FELIM_MASK		0xff
/** @defgroup crs_cfgr_felim FELIM Frequency error limit
@{*/
/**@}*/


#define CRS_CFGR_RELOAD_SHIFT		0
#define CRS_CFGR_RELOAD_MASK		0xffff
/** @defgroup crs_cfgr_reload RELOAD Counter reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup crs_isr ISR interrupt and status register
@{*/


#define CRS_ISR_FECAP_SHIFT		16
#define CRS_ISR_FECAP_MASK		0xffff
/** @defgroup crs_isr_fecap FECAP Frequency error capture
@{*/
/**@}*/

/** CRS_ISR_FEDIR Frequency error direction **/
#define CRS_ISR_FEDIR		(1 << 15)
/** CRS_ISR_TRIMOVF Trimming overflow or underflow **/
#define CRS_ISR_TRIMOVF		(1 << 10)
/** CRS_ISR_SYNCMISS SYNC missed **/
#define CRS_ISR_SYNCMISS		(1 << 9)
/** CRS_ISR_SYNCERR SYNC error **/
#define CRS_ISR_SYNCERR		(1 << 8)
/** CRS_ISR_ESYNCF Expected SYNC flag **/
#define CRS_ISR_ESYNCF		(1 << 3)
/** CRS_ISR_ERRF Error flag **/
#define CRS_ISR_ERRF		(1 << 2)
/** CRS_ISR_SYNCWARNF SYNC warning flag **/
#define CRS_ISR_SYNCWARNF		(1 << 1)
/** CRS_ISR_SYNCOKF SYNC event OK flag **/
#define CRS_ISR_SYNCOKF		(1 << 0)

/**@}*/

/** @defgroup crs_icr ICR interrupt flag clear register
@{*/

/** CRS_ICR_ESYNCC Expected SYNC clear flag **/
#define CRS_ICR_ESYNCC		(1 << 3)
/** CRS_ICR_ERRC Error clear flag **/
#define CRS_ICR_ERRC		(1 << 2)
/** CRS_ICR_SYNCWARNC SYNC warning clear flag **/
#define CRS_ICR_SYNCWARNC		(1 << 1)
/** CRS_ICR_SYNCOKC SYNC event OK clear flag **/
#define CRS_ICR_SYNCOKC		(1 << 0)

/**@}*/

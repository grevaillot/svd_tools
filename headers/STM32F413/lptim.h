#pragma once 

/* --- LPTIM: Low power timer --------------------------------------- */

/** @defgroup lptim_registers Low power timer Register
@{*/

/** LPTIM_ISR Interrupt and Status Register **/
#define LPTIM_ISR			MMIO32(LPTIM_BASE + 0x00)
/** LPTIM_ICR Interrupt Clear Register **/
#define LPTIM_ICR			MMIO32(LPTIM_BASE + 0x04)
/** LPTIM_IER Interrupt Enable Register **/
#define LPTIM_IER			MMIO32(LPTIM_BASE + 0x08)
/** LPTIM_CFGR Configuration Register **/
#define LPTIM_CFGR			MMIO32(LPTIM_BASE + 0x0c)
/** LPTIM_CR Control Register **/
#define LPTIM_CR			MMIO32(LPTIM_BASE + 0x10)
/** LPTIM_CMP Compare Register **/
#define LPTIM_CMP			MMIO32(LPTIM_BASE + 0x14)
/** LPTIM_ARR Autoreload Register **/
#define LPTIM_ARR			MMIO32(LPTIM_BASE + 0x18)
/** LPTIM_CNT Counter Register **/
#define LPTIM_CNT			MMIO32(LPTIM_BASE + 0x1c)

/**@}*/


/** @defgroup lptim_isr ISR Interrupt and Status Register
@{*/

/** LPTIM_ISR_DOWN Counter direction change up to down **/
#define LPTIM_ISR_DOWN		(1 << 6)
/** LPTIM_ISR_UP Counter direction change down to up **/
#define LPTIM_ISR_UP		(1 << 5)
/** LPTIM_ISR_ARROK Autoreload register update OK **/
#define LPTIM_ISR_ARROK		(1 << 4)
/** LPTIM_ISR_CMPOK Compare register update OK **/
#define LPTIM_ISR_CMPOK		(1 << 3)
/** LPTIM_ISR_EXTTRIG External trigger edge event **/
#define LPTIM_ISR_EXTTRIG		(1 << 2)
/** LPTIM_ISR_ARRM Autoreload match **/
#define LPTIM_ISR_ARRM		(1 << 1)
/** LPTIM_ISR_CMPM Compare match **/
#define LPTIM_ISR_CMPM		(1 << 0)

/**@}*/

/** @defgroup lptim_icr ICR Interrupt Clear Register
@{*/

/** LPTIM_ICR_DOWNCF Direction change to down Clear Flag **/
#define LPTIM_ICR_DOWNCF		(1 << 6)
/** LPTIM_ICR_UPCF Direction change to UP Clear Flag **/
#define LPTIM_ICR_UPCF		(1 << 5)
/** LPTIM_ICR_ARROKCF Autoreload register update OK Clear Flag **/
#define LPTIM_ICR_ARROKCF		(1 << 4)
/** LPTIM_ICR_CMPOKCF Compare register update OK Clear Flag **/
#define LPTIM_ICR_CMPOKCF		(1 << 3)
/** LPTIM_ICR_EXTTRIGCF External trigger valid edge Clear Flag **/
#define LPTIM_ICR_EXTTRIGCF		(1 << 2)
/** LPTIM_ICR_ARRMCF Autoreload match Clear Flag **/
#define LPTIM_ICR_ARRMCF		(1 << 1)
/** LPTIM_ICR_CMPMCF compare match Clear Flag **/
#define LPTIM_ICR_CMPMCF		(1 << 0)

/**@}*/

/** @defgroup lptim_ier IER Interrupt Enable Register
@{*/

/** LPTIM_IER_DOWNIE Direction change to down Interrupt Enable **/
#define LPTIM_IER_DOWNIE		(1 << 6)
/** LPTIM_IER_UPIE Direction change to UP Interrupt Enable **/
#define LPTIM_IER_UPIE		(1 << 5)
/** LPTIM_IER_ARROKIE Autoreload register update OK Interrupt Enable **/
#define LPTIM_IER_ARROKIE		(1 << 4)
/** LPTIM_IER_CMPOKIE Compare register update OK Interrupt Enable **/
#define LPTIM_IER_CMPOKIE		(1 << 3)
/** LPTIM_IER_EXTTRIGIE External trigger valid edge Interrupt Enable **/
#define LPTIM_IER_EXTTRIGIE		(1 << 2)
/** LPTIM_IER_ARRMIE Autoreload match Interrupt Enable **/
#define LPTIM_IER_ARRMIE		(1 << 1)
/** LPTIM_IER_CMPMIE Compare match Interrupt Enable **/
#define LPTIM_IER_CMPMIE		(1 << 0)

/**@}*/

/** @defgroup lptim_cfgr CFGR Configuration Register
@{*/

/** LPTIM_CFGR_ENC Encoder mode enable **/
#define LPTIM_CFGR_ENC		(1 << 24)
/** LPTIM_CFGR_COUNTMODE counter mode enabled **/
#define LPTIM_CFGR_COUNTMODE		(1 << 23)
/** LPTIM_CFGR_PRELOAD Registers update mode **/
#define LPTIM_CFGR_PRELOAD		(1 << 22)
/** LPTIM_CFGR_WAVPOL Waveform shape polarity **/
#define LPTIM_CFGR_WAVPOL		(1 << 21)
/** LPTIM_CFGR_WAVE Waveform shape **/
#define LPTIM_CFGR_WAVE		(1 << 20)
/** LPTIM_CFGR_TIMOUT Timeout enable **/
#define LPTIM_CFGR_TIMOUT		(1 << 19)

#define LPTIM_CFGR_TRIGEN_SHIFT		17
#define LPTIM_CFGR_TRIGEN_MASK		0x03
/** @defgroup lptim_cfgr_trigen TRIGEN Trigger enable and polarity
@{*/
/**@}*/


#define LPTIM_CFGR_TRIGSEL_SHIFT		13
#define LPTIM_CFGR_TRIGSEL_MASK		0x07
/** @defgroup lptim_cfgr_trigsel TRIGSEL Trigger selector
@{*/
/**@}*/


#define LPTIM_CFGR_PRESC_SHIFT		9
#define LPTIM_CFGR_PRESC_MASK		0x07
/** @defgroup lptim_cfgr_presc PRESC Clock prescaler
@{*/
/**@}*/


#define LPTIM_CFGR_TRGFLT_SHIFT		6
#define LPTIM_CFGR_TRGFLT_MASK		0x03
/** @defgroup lptim_cfgr_trgflt TRGFLT Configurable digital filter for trigger
@{*/
/**@}*/


#define LPTIM_CFGR_CKFLT_SHIFT		3
#define LPTIM_CFGR_CKFLT_MASK		0x03
/** @defgroup lptim_cfgr_ckflt CKFLT Configurable digital filter for external clock
@{*/
/**@}*/


#define LPTIM_CFGR_CKPOL_SHIFT		1
#define LPTIM_CFGR_CKPOL_MASK		0x03
/** @defgroup lptim_cfgr_ckpol CKPOL Clock Polarity
@{*/
/**@}*/

/** LPTIM_CFGR_CKSEL Clock selector **/
#define LPTIM_CFGR_CKSEL		(1 << 0)

/**@}*/

/** @defgroup lptim_cr CR Control Register
@{*/

/** LPTIM_CR_CNTSTRT Timer start in continuous mode **/
#define LPTIM_CR_CNTSTRT		(1 << 2)
/** LPTIM_CR_SNGSTRT LPTIM start in single mode **/
#define LPTIM_CR_SNGSTRT		(1 << 1)
/** LPTIM_CR_ENABLE LPTIM Enable **/
#define LPTIM_CR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup lptim_cmp CMP Compare Register
@{*/


#define LPTIM_CMP_CMP_SHIFT		0
#define LPTIM_CMP_CMP_MASK		0xffff
/** @defgroup lptim_cmp_cmp CMP Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim_arr ARR Autoreload Register
@{*/


#define LPTIM_ARR_ARR_SHIFT		0
#define LPTIM_ARR_ARR_MASK		0xffff
/** @defgroup lptim_arr_arr ARR Auto reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim_cnt CNT Counter Register
@{*/


#define LPTIM_CNT_CNT_SHIFT		0
#define LPTIM_CNT_CNT_MASK		0xffff
/** @defgroup lptim_cnt_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

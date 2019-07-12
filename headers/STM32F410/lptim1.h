#pragma once 

/* --- LPTIM1: Low power timer -------------------------------------- */

/** @defgroup lptim1_registers Low power timer Register
@{*/

/** LPTIM1_ISR Interrupt and Status Register **/
#define LPTIM1_ISR			MMIO32(LPTIM1_BASE + 0x00)
/** LPTIM1_ICR Interrupt Clear Register **/
#define LPTIM1_ICR			MMIO32(LPTIM1_BASE + 0x04)
/** LPTIM1_IER Interrupt Enable Register **/
#define LPTIM1_IER			MMIO32(LPTIM1_BASE + 0x08)
/** LPTIM1_CFGR Configuration Register **/
#define LPTIM1_CFGR			MMIO32(LPTIM1_BASE + 0x0c)
/** LPTIM1_CR Control Register **/
#define LPTIM1_CR			MMIO32(LPTIM1_BASE + 0x10)
/** LPTIM1_CMP Compare Register **/
#define LPTIM1_CMP			MMIO32(LPTIM1_BASE + 0x14)
/** LPTIM1_ARR Autoreload Register **/
#define LPTIM1_ARR			MMIO32(LPTIM1_BASE + 0x18)
/** LPTIM1_CNT Counter Register **/
#define LPTIM1_CNT			MMIO32(LPTIM1_BASE + 0x1c)
/** LPTIM1_OPTR Option Register **/
#define LPTIM1_OPTR			MMIO32(LPTIM1_BASE + 0x20)

/**@}*/


/** @defgroup lptim1_isr ISR Interrupt and Status Register
@{*/

/** LPTIM1_ISR_DOWN Counter direction change up to down **/
#define LPTIM1_ISR_DOWN		(1 << 6)
/** LPTIM1_ISR_UP Counter direction change down to up **/
#define LPTIM1_ISR_UP		(1 << 5)
/** LPTIM1_ISR_ARROK Autoreload register update OK **/
#define LPTIM1_ISR_ARROK		(1 << 4)
/** LPTIM1_ISR_CMPOK Compare register update OK **/
#define LPTIM1_ISR_CMPOK		(1 << 3)
/** LPTIM1_ISR_EXTTRIG External trigger edge event **/
#define LPTIM1_ISR_EXTTRIG		(1 << 2)
/** LPTIM1_ISR_ARRM Autoreload match **/
#define LPTIM1_ISR_ARRM		(1 << 1)
/** LPTIM1_ISR_CMPM Compare match **/
#define LPTIM1_ISR_CMPM		(1 << 0)

/**@}*/

/** @defgroup lptim1_icr ICR Interrupt Clear Register
@{*/

/** LPTIM1_ICR_DOWNCF Direction change to down Clear Flag **/
#define LPTIM1_ICR_DOWNCF		(1 << 6)
/** LPTIM1_ICR_UPCF Direction change to UP Clear Flag **/
#define LPTIM1_ICR_UPCF		(1 << 5)
/** LPTIM1_ICR_ARROKCF Autoreload register update OK Clear Flag **/
#define LPTIM1_ICR_ARROKCF		(1 << 4)
/** LPTIM1_ICR_CMPOKCF Compare register update OK Clear Flag **/
#define LPTIM1_ICR_CMPOKCF		(1 << 3)
/** LPTIM1_ICR_EXTTRIGCF External trigger valid edge Clear Flag **/
#define LPTIM1_ICR_EXTTRIGCF		(1 << 2)
/** LPTIM1_ICR_ARRMCF Autoreload match Clear Flag **/
#define LPTIM1_ICR_ARRMCF		(1 << 1)
/** LPTIM1_ICR_CMPMCF compare match Clear Flag **/
#define LPTIM1_ICR_CMPMCF		(1 << 0)

/**@}*/

/** @defgroup lptim1_ier IER Interrupt Enable Register
@{*/

/** LPTIM1_IER_DOWNIE Direction change to down Interrupt Enable **/
#define LPTIM1_IER_DOWNIE		(1 << 6)
/** LPTIM1_IER_UPIE Direction change to UP Interrupt Enable **/
#define LPTIM1_IER_UPIE		(1 << 5)
/** LPTIM1_IER_ARROKIE Autoreload register update OK Interrupt Enable **/
#define LPTIM1_IER_ARROKIE		(1 << 4)
/** LPTIM1_IER_CMPOKIE Compare register update OK Interrupt Enable **/
#define LPTIM1_IER_CMPOKIE		(1 << 3)
/** LPTIM1_IER_EXTTRIGIE External trigger valid edge Interrupt Enable **/
#define LPTIM1_IER_EXTTRIGIE		(1 << 2)
/** LPTIM1_IER_ARRMIE Autoreload match Interrupt Enable **/
#define LPTIM1_IER_ARRMIE		(1 << 1)
/** LPTIM1_IER_CMPMIE Compare match Interrupt Enable **/
#define LPTIM1_IER_CMPMIE		(1 << 0)

/**@}*/

/** @defgroup lptim1_cfgr CFGR Configuration Register
@{*/

/** LPTIM1_CFGR_ENC Encoder mode enable **/
#define LPTIM1_CFGR_ENC		(1 << 24)
/** LPTIM1_CFGR_COUNTMODE counter mode enabled **/
#define LPTIM1_CFGR_COUNTMODE		(1 << 23)
/** LPTIM1_CFGR_PRELOAD Registers update mode **/
#define LPTIM1_CFGR_PRELOAD		(1 << 22)
/** LPTIM1_CFGR_WAVPOL Waveform shape polarity **/
#define LPTIM1_CFGR_WAVPOL		(1 << 21)
/** LPTIM1_CFGR_WAVE Waveform shape **/
#define LPTIM1_CFGR_WAVE		(1 << 20)
/** LPTIM1_CFGR_TIMOUT Timeout enable **/
#define LPTIM1_CFGR_TIMOUT		(1 << 19)

#define LPTIM1_CFGR_TRIGEN_SHIFT		17
#define LPTIM1_CFGR_TRIGEN_MASK		0x03
/** @defgroup lptim1_cfgr_trigen TRIGEN Trigger enable and polarity
@{*/
/**@}*/


#define LPTIM1_CFGR_TRIGSEL_SHIFT		13
#define LPTIM1_CFGR_TRIGSEL_MASK		0x07
/** @defgroup lptim1_cfgr_trigsel TRIGSEL Trigger selector
@{*/
/**@}*/


#define LPTIM1_CFGR_PRESC_SHIFT		9
#define LPTIM1_CFGR_PRESC_MASK		0x07
/** @defgroup lptim1_cfgr_presc PRESC Clock prescaler
@{*/
/**@}*/


#define LPTIM1_CFGR_TRGFLT_SHIFT		6
#define LPTIM1_CFGR_TRGFLT_MASK		0x03
/** @defgroup lptim1_cfgr_trgflt TRGFLT Configurable digital filter for trigger
@{*/
/**@}*/


#define LPTIM1_CFGR_CKFLT_SHIFT		3
#define LPTIM1_CFGR_CKFLT_MASK		0x03
/** @defgroup lptim1_cfgr_ckflt CKFLT Configurable digital filter for external clock
@{*/
/**@}*/


#define LPTIM1_CFGR_CKPOL_SHIFT		1
#define LPTIM1_CFGR_CKPOL_MASK		0x03
/** @defgroup lptim1_cfgr_ckpol CKPOL Clock Polarity
@{*/
/**@}*/

/** LPTIM1_CFGR_CKSEL Clock selector **/
#define LPTIM1_CFGR_CKSEL		(1 << 0)

/**@}*/

/** @defgroup lptim1_cr CR Control Register
@{*/

/** LPTIM1_CR_CNTSTRT Timer start in continuous mode **/
#define LPTIM1_CR_CNTSTRT		(1 << 2)
/** LPTIM1_CR_SNGSTRT LPTIM start in single mode **/
#define LPTIM1_CR_SNGSTRT		(1 << 1)
/** LPTIM1_CR_ENABLE LPTIM Enable **/
#define LPTIM1_CR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup lptim1_cmp CMP Compare Register
@{*/


#define LPTIM1_CMP_CMP_SHIFT		0
#define LPTIM1_CMP_CMP_MASK		0xffff
/** @defgroup lptim1_cmp_cmp CMP Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim1_arr ARR Autoreload Register
@{*/


#define LPTIM1_ARR_ARR_SHIFT		0
#define LPTIM1_ARR_ARR_MASK		0xffff
/** @defgroup lptim1_arr_arr ARR Auto reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim1_cnt CNT Counter Register
@{*/


#define LPTIM1_CNT_CNT_SHIFT		0
#define LPTIM1_CNT_CNT_MASK		0xffff
/** @defgroup lptim1_cnt_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim1_optr OPTR Option Register
@{*/


#define LPTIM1_OPTR_OR_SHIFT		0
#define LPTIM1_OPTR_OR_MASK		0x03
/** @defgroup lptim1_optr_or OR OR
@{*/
/**@}*/


/**@}*/

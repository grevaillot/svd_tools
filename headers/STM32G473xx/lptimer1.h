#pragma once 

/* --- LPTIMER1: Low power timer ------------------------------------ */

/** @defgroup lptimer1_registers Low power timer Register
@{*/

/** LPTIMER1_ISR Interrupt and Status Register **/
#define LPTIMER1_ISR			MMIO32(LPTIMER1_BASE + 0x00)
/** LPTIMER1_ICR Interrupt Clear Register **/
#define LPTIMER1_ICR			MMIO32(LPTIMER1_BASE + 0x04)
/** LPTIMER1_IER Interrupt Enable Register **/
#define LPTIMER1_IER			MMIO32(LPTIMER1_BASE + 0x08)
/** LPTIMER1_CFGR Configuration Register **/
#define LPTIMER1_CFGR			MMIO32(LPTIMER1_BASE + 0x0c)
/** LPTIMER1_CR Control Register **/
#define LPTIMER1_CR			MMIO32(LPTIMER1_BASE + 0x10)
/** LPTIMER1_CMP Compare Register **/
#define LPTIMER1_CMP			MMIO32(LPTIMER1_BASE + 0x14)
/** LPTIMER1_ARR Autoreload Register **/
#define LPTIMER1_ARR			MMIO32(LPTIMER1_BASE + 0x18)
/** LPTIMER1_CNT Counter Register **/
#define LPTIMER1_CNT			MMIO32(LPTIMER1_BASE + 0x1c)
/** LPTIMER1_OR option register **/
#define LPTIMER1_OR			MMIO32(LPTIMER1_BASE + 0x20)

/**@}*/


/** @defgroup lptimer1_isr ISR Interrupt and Status Register
@{*/

/** LPTIMER1_ISR_DOWN Counter direction change up to down **/
#define LPTIMER1_ISR_DOWN		(1 << 6)
/** LPTIMER1_ISR_UP Counter direction change down to up **/
#define LPTIMER1_ISR_UP		(1 << 5)
/** LPTIMER1_ISR_ARROK Autoreload register update OK **/
#define LPTIMER1_ISR_ARROK		(1 << 4)
/** LPTIMER1_ISR_CMPOK Compare register update OK **/
#define LPTIMER1_ISR_CMPOK		(1 << 3)
/** LPTIMER1_ISR_EXTTRIG External trigger edge event **/
#define LPTIMER1_ISR_EXTTRIG		(1 << 2)
/** LPTIMER1_ISR_ARRM Autoreload match **/
#define LPTIMER1_ISR_ARRM		(1 << 1)
/** LPTIMER1_ISR_CMPM Compare match **/
#define LPTIMER1_ISR_CMPM		(1 << 0)

/**@}*/

/** @defgroup lptimer1_icr ICR Interrupt Clear Register
@{*/

/** LPTIMER1_ICR_DOWNCF Direction change to down Clear Flag **/
#define LPTIMER1_ICR_DOWNCF		(1 << 6)
/** LPTIMER1_ICR_UPCF Direction change to UP Clear Flag **/
#define LPTIMER1_ICR_UPCF		(1 << 5)
/** LPTIMER1_ICR_ARROKCF Autoreload register update OK Clear Flag **/
#define LPTIMER1_ICR_ARROKCF		(1 << 4)
/** LPTIMER1_ICR_CMPOKCF Compare register update OK Clear Flag **/
#define LPTIMER1_ICR_CMPOKCF		(1 << 3)
/** LPTIMER1_ICR_EXTTRIGCF External trigger valid edge Clear Flag **/
#define LPTIMER1_ICR_EXTTRIGCF		(1 << 2)
/** LPTIMER1_ICR_ARRMCF Autoreload match Clear Flag **/
#define LPTIMER1_ICR_ARRMCF		(1 << 1)
/** LPTIMER1_ICR_CMPMCF compare match Clear Flag **/
#define LPTIMER1_ICR_CMPMCF		(1 << 0)

/**@}*/

/** @defgroup lptimer1_ier IER Interrupt Enable Register
@{*/

/** LPTIMER1_IER_DOWNIE Direction change to down Interrupt Enable **/
#define LPTIMER1_IER_DOWNIE		(1 << 6)
/** LPTIMER1_IER_UPIE Direction change to UP Interrupt Enable **/
#define LPTIMER1_IER_UPIE		(1 << 5)
/** LPTIMER1_IER_ARROKIE Autoreload register update OK Interrupt Enable **/
#define LPTIMER1_IER_ARROKIE		(1 << 4)
/** LPTIMER1_IER_CMPOKIE Compare register update OK Interrupt Enable **/
#define LPTIMER1_IER_CMPOKIE		(1 << 3)
/** LPTIMER1_IER_EXTTRIGIE External trigger valid edge Interrupt Enable **/
#define LPTIMER1_IER_EXTTRIGIE		(1 << 2)
/** LPTIMER1_IER_ARRMIE Autoreload match Interrupt Enable **/
#define LPTIMER1_IER_ARRMIE		(1 << 1)
/** LPTIMER1_IER_CMPMIE Compare match Interrupt Enable **/
#define LPTIMER1_IER_CMPMIE		(1 << 0)

/**@}*/

/** @defgroup lptimer1_cfgr CFGR Configuration Register
@{*/

/** LPTIMER1_CFGR_ENC Encoder mode enable **/
#define LPTIMER1_CFGR_ENC		(1 << 24)
/** LPTIMER1_CFGR_COUNTMODE counter mode enabled **/
#define LPTIMER1_CFGR_COUNTMODE		(1 << 23)
/** LPTIMER1_CFGR_PRELOAD Registers update mode **/
#define LPTIMER1_CFGR_PRELOAD		(1 << 22)
/** LPTIMER1_CFGR_WAVPOL Waveform shape polarity **/
#define LPTIMER1_CFGR_WAVPOL		(1 << 21)
/** LPTIMER1_CFGR_WAVE Waveform shape **/
#define LPTIMER1_CFGR_WAVE		(1 << 20)
/** LPTIMER1_CFGR_TIMOUT Timeout enable **/
#define LPTIMER1_CFGR_TIMOUT		(1 << 19)

#define LPTIMER1_CFGR_TRIGEN_SHIFT		17
#define LPTIMER1_CFGR_TRIGEN_MASK		0x03
/** @defgroup lptimer1_cfgr_trigen TRIGEN Trigger enable and polarity
@{*/
/**@}*/


#define LPTIMER1_CFGR_TRIGSEL_SHIFT		13
#define LPTIMER1_CFGR_TRIGSEL_MASK		0x0f
/** @defgroup lptimer1_cfgr_trigsel TRIGSEL Trigger selector
@{*/
/**@}*/


#define LPTIMER1_CFGR_PRESC_SHIFT		9
#define LPTIMER1_CFGR_PRESC_MASK		0x07
/** @defgroup lptimer1_cfgr_presc PRESC Clock prescaler
@{*/
/**@}*/


#define LPTIMER1_CFGR_TRGFLT_SHIFT		6
#define LPTIMER1_CFGR_TRGFLT_MASK		0x03
/** @defgroup lptimer1_cfgr_trgflt TRGFLT Configurable digital filter for trigger
@{*/
/**@}*/


#define LPTIMER1_CFGR_CKFLT_SHIFT		3
#define LPTIMER1_CFGR_CKFLT_MASK		0x03
/** @defgroup lptimer1_cfgr_ckflt CKFLT Configurable digital filter for external clock
@{*/
/**@}*/


#define LPTIMER1_CFGR_CKPOL_SHIFT		1
#define LPTIMER1_CFGR_CKPOL_MASK		0x03
/** @defgroup lptimer1_cfgr_ckpol CKPOL Clock Polarity
@{*/
/**@}*/

/** LPTIMER1_CFGR_CKSEL Clock selector **/
#define LPTIMER1_CFGR_CKSEL		(1 << 0)

/**@}*/

/** @defgroup lptimer1_cr CR Control Register
@{*/

/** LPTIMER1_CR_RSTARE RSTARE **/
#define LPTIMER1_CR_RSTARE		(1 << 4)
/** LPTIMER1_CR_COUNTRST COUNTRST **/
#define LPTIMER1_CR_COUNTRST		(1 << 3)
/** LPTIMER1_CR_CNTSTRT Timer start in continuous mode **/
#define LPTIMER1_CR_CNTSTRT		(1 << 2)
/** LPTIMER1_CR_SNGSTRT LPTIM start in single mode **/
#define LPTIMER1_CR_SNGSTRT		(1 << 1)
/** LPTIMER1_CR_ENABLE LPTIM Enable **/
#define LPTIMER1_CR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup lptimer1_cmp CMP Compare Register
@{*/


#define LPTIMER1_CMP_CMP_SHIFT		0
#define LPTIMER1_CMP_CMP_MASK		0xffff
/** @defgroup lptimer1_cmp_cmp CMP Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptimer1_arr ARR Autoreload Register
@{*/


#define LPTIMER1_ARR_ARR_SHIFT		0
#define LPTIMER1_ARR_ARR_MASK		0xffff
/** @defgroup lptimer1_arr_arr ARR Auto reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptimer1_cnt CNT Counter Register
@{*/


#define LPTIMER1_CNT_CNT_SHIFT		0
#define LPTIMER1_CNT_CNT_MASK		0xffff
/** @defgroup lptimer1_cnt_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptimer1_or OR option register
@{*/


#define LPTIMER1_OR_IN2_2_1_SHIFT		4
#define LPTIMER1_OR_IN2_2_1_MASK		0x03
/** @defgroup lptimer1_or_in2_2_1 IN221 IN2_2_1
@{*/
/**@}*/


#define LPTIMER1_OR_IN1_2_1_SHIFT		2
#define LPTIMER1_OR_IN1_2_1_MASK		0x03
/** @defgroup lptimer1_or_in1_2_1 IN121 IN1_2_1
@{*/
/**@}*/

/** LPTIMER1_OR_IN2 IN2 **/
#define LPTIMER1_OR_IN2		(1 << 1)
/** LPTIMER1_OR_IN1 IN1 **/
#define LPTIMER1_OR_IN1		(1 << 0)

/**@}*/

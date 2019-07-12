#pragma once 

/* --- LPTIM4: Low power timer -------------------------------------- */

/** @defgroup lptim4_registers Low power timer Register
@{*/

/** LPTIM4_ISR Interrupt and Status Register **/
#define LPTIM4_ISR			MMIO32(LPTIM4_BASE + 0x00)
/** LPTIM4_ICR Interrupt Clear Register **/
#define LPTIM4_ICR			MMIO32(LPTIM4_BASE + 0x04)
/** LPTIM4_IER Interrupt Enable Register **/
#define LPTIM4_IER			MMIO32(LPTIM4_BASE + 0x08)
/** LPTIM4_CFGR Configuration Register **/
#define LPTIM4_CFGR			MMIO32(LPTIM4_BASE + 0x0c)
/** LPTIM4_CR Control Register **/
#define LPTIM4_CR			MMIO32(LPTIM4_BASE + 0x10)
/** LPTIM4_CMP Compare Register **/
#define LPTIM4_CMP			MMIO32(LPTIM4_BASE + 0x14)
/** LPTIM4_ARR Autoreload Register **/
#define LPTIM4_ARR			MMIO32(LPTIM4_BASE + 0x18)
/** LPTIM4_CNT Counter Register **/
#define LPTIM4_CNT			MMIO32(LPTIM4_BASE + 0x1c)
/** LPTIM4_CFGR2 LPTIM configuration register 2 **/
#define LPTIM4_CFGR2			MMIO32(LPTIM4_BASE + 0x24)

/**@}*/


/** @defgroup lptim4_isr ISR Interrupt and Status Register
@{*/

/** LPTIM4_ISR_DOWN Counter direction change up to down **/
#define LPTIM4_ISR_DOWN		(1 << 6)
/** LPTIM4_ISR_UP Counter direction change down to up **/
#define LPTIM4_ISR_UP		(1 << 5)
/** LPTIM4_ISR_ARROK Autoreload register update OK **/
#define LPTIM4_ISR_ARROK		(1 << 4)
/** LPTIM4_ISR_CMPOK Compare register update OK **/
#define LPTIM4_ISR_CMPOK		(1 << 3)
/** LPTIM4_ISR_EXTTRIG External trigger edge event **/
#define LPTIM4_ISR_EXTTRIG		(1 << 2)
/** LPTIM4_ISR_ARRM Autoreload match **/
#define LPTIM4_ISR_ARRM		(1 << 1)
/** LPTIM4_ISR_CMPM Compare match **/
#define LPTIM4_ISR_CMPM		(1 << 0)

/**@}*/

/** @defgroup lptim4_icr ICR Interrupt Clear Register
@{*/

/** LPTIM4_ICR_DOWNCF Direction change to down Clear Flag **/
#define LPTIM4_ICR_DOWNCF		(1 << 6)
/** LPTIM4_ICR_UPCF Direction change to UP Clear Flag **/
#define LPTIM4_ICR_UPCF		(1 << 5)
/** LPTIM4_ICR_ARROKCF Autoreload register update OK Clear Flag **/
#define LPTIM4_ICR_ARROKCF		(1 << 4)
/** LPTIM4_ICR_CMPOKCF Compare register update OK Clear Flag **/
#define LPTIM4_ICR_CMPOKCF		(1 << 3)
/** LPTIM4_ICR_EXTTRIGCF External trigger valid edge Clear Flag **/
#define LPTIM4_ICR_EXTTRIGCF		(1 << 2)
/** LPTIM4_ICR_ARRMCF Autoreload match Clear Flag **/
#define LPTIM4_ICR_ARRMCF		(1 << 1)
/** LPTIM4_ICR_CMPMCF compare match Clear Flag **/
#define LPTIM4_ICR_CMPMCF		(1 << 0)

/**@}*/

/** @defgroup lptim4_ier IER Interrupt Enable Register
@{*/

/** LPTIM4_IER_DOWNIE Direction change to down Interrupt Enable **/
#define LPTIM4_IER_DOWNIE		(1 << 6)
/** LPTIM4_IER_UPIE Direction change to UP Interrupt Enable **/
#define LPTIM4_IER_UPIE		(1 << 5)
/** LPTIM4_IER_ARROKIE Autoreload register update OK Interrupt Enable **/
#define LPTIM4_IER_ARROKIE		(1 << 4)
/** LPTIM4_IER_CMPOKIE Compare register update OK Interrupt Enable **/
#define LPTIM4_IER_CMPOKIE		(1 << 3)
/** LPTIM4_IER_EXTTRIGIE External trigger valid edge Interrupt Enable **/
#define LPTIM4_IER_EXTTRIGIE		(1 << 2)
/** LPTIM4_IER_ARRMIE Autoreload match Interrupt Enable **/
#define LPTIM4_IER_ARRMIE		(1 << 1)
/** LPTIM4_IER_CMPMIE Compare match Interrupt Enable **/
#define LPTIM4_IER_CMPMIE		(1 << 0)

/**@}*/

/** @defgroup lptim4_cfgr CFGR Configuration Register
@{*/

/** LPTIM4_CFGR_ENC Encoder mode enable **/
#define LPTIM4_CFGR_ENC		(1 << 24)
/** LPTIM4_CFGR_COUNTMODE counter mode enabled **/
#define LPTIM4_CFGR_COUNTMODE		(1 << 23)
/** LPTIM4_CFGR_PRELOAD Registers update mode **/
#define LPTIM4_CFGR_PRELOAD		(1 << 22)
/** LPTIM4_CFGR_WAVPOL Waveform shape polarity **/
#define LPTIM4_CFGR_WAVPOL		(1 << 21)
/** LPTIM4_CFGR_WAVE Waveform shape **/
#define LPTIM4_CFGR_WAVE		(1 << 20)
/** LPTIM4_CFGR_TIMOUT Timeout enable **/
#define LPTIM4_CFGR_TIMOUT		(1 << 19)

#define LPTIM4_CFGR_TRIGEN_SHIFT		17
#define LPTIM4_CFGR_TRIGEN_MASK		0x03
/** @defgroup lptim4_cfgr_trigen TRIGEN Trigger enable and polarity
@{*/
/**@}*/


#define LPTIM4_CFGR_TRIGSEL_SHIFT		13
#define LPTIM4_CFGR_TRIGSEL_MASK		0x07
/** @defgroup lptim4_cfgr_trigsel TRIGSEL Trigger selector
@{*/
/**@}*/


#define LPTIM4_CFGR_PRESC_SHIFT		9
#define LPTIM4_CFGR_PRESC_MASK		0x07
/** @defgroup lptim4_cfgr_presc PRESC Clock prescaler
@{*/
/**@}*/


#define LPTIM4_CFGR_TRGFLT_SHIFT		6
#define LPTIM4_CFGR_TRGFLT_MASK		0x03
/** @defgroup lptim4_cfgr_trgflt TRGFLT Configurable digital filter for trigger
@{*/
/**@}*/


#define LPTIM4_CFGR_CKFLT_SHIFT		3
#define LPTIM4_CFGR_CKFLT_MASK		0x03
/** @defgroup lptim4_cfgr_ckflt CKFLT Configurable digital filter for external clock
@{*/
/**@}*/


#define LPTIM4_CFGR_CKPOL_SHIFT		1
#define LPTIM4_CFGR_CKPOL_MASK		0x03
/** @defgroup lptim4_cfgr_ckpol CKPOL Clock Polarity
@{*/
/**@}*/

/** LPTIM4_CFGR_CKSEL Clock selector **/
#define LPTIM4_CFGR_CKSEL		(1 << 0)

/**@}*/

/** @defgroup lptim4_cr CR Control Register
@{*/

/** LPTIM4_CR_RSTARE Reset after read enable **/
#define LPTIM4_CR_RSTARE		(1 << 4)
/** LPTIM4_CR_COUNTRST Counter reset **/
#define LPTIM4_CR_COUNTRST		(1 << 3)
/** LPTIM4_CR_CNTSTRT Timer start in continuous mode **/
#define LPTIM4_CR_CNTSTRT		(1 << 2)
/** LPTIM4_CR_SNGSTRT LPTIM start in single mode **/
#define LPTIM4_CR_SNGSTRT		(1 << 1)
/** LPTIM4_CR_ENABLE LPTIM Enable **/
#define LPTIM4_CR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup lptim4_cmp CMP Compare Register
@{*/


#define LPTIM4_CMP_CMP_SHIFT		0
#define LPTIM4_CMP_CMP_MASK		0xffff
/** @defgroup lptim4_cmp_cmp CMP Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim4_arr ARR Autoreload Register
@{*/


#define LPTIM4_ARR_ARR_SHIFT		0
#define LPTIM4_ARR_ARR_MASK		0xffff
/** @defgroup lptim4_arr_arr ARR Auto reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim4_cnt CNT Counter Register
@{*/


#define LPTIM4_CNT_CNT_SHIFT		0
#define LPTIM4_CNT_CNT_MASK		0xffff
/** @defgroup lptim4_cnt_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim4_cfgr2 CFGR2 LPTIM configuration register 2
@{*/


#define LPTIM4_CFGR2_IN1SEL_SHIFT		0
#define LPTIM4_CFGR2_IN1SEL_MASK		0x03
/** @defgroup lptim4_cfgr2_in1sel IN1SEL LPTIM Input 1 selection
@{*/
/**@}*/


/**@}*/

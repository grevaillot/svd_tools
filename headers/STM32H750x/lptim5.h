#pragma once 

/* --- LPTIM5: Low power timer -------------------------------------- */

/** @defgroup lptim5_registers Low power timer Register
@{*/

/** LPTIM5_ISR Interrupt and Status Register **/
#define LPTIM5_ISR			MMIO32(LPTIM5_BASE + 0x00)
/** LPTIM5_ICR Interrupt Clear Register **/
#define LPTIM5_ICR			MMIO32(LPTIM5_BASE + 0x04)
/** LPTIM5_IER Interrupt Enable Register **/
#define LPTIM5_IER			MMIO32(LPTIM5_BASE + 0x08)
/** LPTIM5_CFGR Configuration Register **/
#define LPTIM5_CFGR			MMIO32(LPTIM5_BASE + 0x0c)
/** LPTIM5_CR Control Register **/
#define LPTIM5_CR			MMIO32(LPTIM5_BASE + 0x10)
/** LPTIM5_CMP Compare Register **/
#define LPTIM5_CMP			MMIO32(LPTIM5_BASE + 0x14)
/** LPTIM5_ARR Autoreload Register **/
#define LPTIM5_ARR			MMIO32(LPTIM5_BASE + 0x18)
/** LPTIM5_CNT Counter Register **/
#define LPTIM5_CNT			MMIO32(LPTIM5_BASE + 0x1c)
/** LPTIM5_LPTIM_CFGR2 LPTIM configuration register 2 **/
#define LPTIM5_LPTIM_CFGR2			MMIO32(LPTIM5_BASE + 0x24)

/**@}*/


/** @defgroup lptim5_isr ISR Interrupt and Status Register
@{*/

/** LPTIM5_ISR_DOWN Counter direction change up to down **/
#define LPTIM5_ISR_DOWN		(1 << 6)
/** LPTIM5_ISR_UP Counter direction change down to up **/
#define LPTIM5_ISR_UP		(1 << 5)
/** LPTIM5_ISR_ARROK Autoreload register update OK **/
#define LPTIM5_ISR_ARROK		(1 << 4)
/** LPTIM5_ISR_CMPOK Compare register update OK **/
#define LPTIM5_ISR_CMPOK		(1 << 3)
/** LPTIM5_ISR_EXTTRIG External trigger edge event **/
#define LPTIM5_ISR_EXTTRIG		(1 << 2)
/** LPTIM5_ISR_ARRM Autoreload match **/
#define LPTIM5_ISR_ARRM		(1 << 1)
/** LPTIM5_ISR_CMPM Compare match **/
#define LPTIM5_ISR_CMPM		(1 << 0)

/**@}*/

/** @defgroup lptim5_icr ICR Interrupt Clear Register
@{*/

/** LPTIM5_ICR_DOWNCF Direction change to down Clear Flag **/
#define LPTIM5_ICR_DOWNCF		(1 << 6)
/** LPTIM5_ICR_UPCF Direction change to UP Clear Flag **/
#define LPTIM5_ICR_UPCF		(1 << 5)
/** LPTIM5_ICR_ARROKCF Autoreload register update OK Clear Flag **/
#define LPTIM5_ICR_ARROKCF		(1 << 4)
/** LPTIM5_ICR_CMPOKCF Compare register update OK Clear Flag **/
#define LPTIM5_ICR_CMPOKCF		(1 << 3)
/** LPTIM5_ICR_EXTTRIGCF External trigger valid edge Clear Flag **/
#define LPTIM5_ICR_EXTTRIGCF		(1 << 2)
/** LPTIM5_ICR_ARRMCF Autoreload match Clear Flag **/
#define LPTIM5_ICR_ARRMCF		(1 << 1)
/** LPTIM5_ICR_CMPMCF compare match Clear Flag **/
#define LPTIM5_ICR_CMPMCF		(1 << 0)

/**@}*/

/** @defgroup lptim5_ier IER Interrupt Enable Register
@{*/

/** LPTIM5_IER_DOWNIE Direction change to down Interrupt Enable **/
#define LPTIM5_IER_DOWNIE		(1 << 6)
/** LPTIM5_IER_UPIE Direction change to UP Interrupt Enable **/
#define LPTIM5_IER_UPIE		(1 << 5)
/** LPTIM5_IER_ARROKIE Autoreload register update OK Interrupt Enable **/
#define LPTIM5_IER_ARROKIE		(1 << 4)
/** LPTIM5_IER_CMPOKIE Compare register update OK Interrupt Enable **/
#define LPTIM5_IER_CMPOKIE		(1 << 3)
/** LPTIM5_IER_EXTTRIGIE External trigger valid edge Interrupt Enable **/
#define LPTIM5_IER_EXTTRIGIE		(1 << 2)
/** LPTIM5_IER_ARRMIE Autoreload match Interrupt Enable **/
#define LPTIM5_IER_ARRMIE		(1 << 1)
/** LPTIM5_IER_CMPMIE Compare match Interrupt Enable **/
#define LPTIM5_IER_CMPMIE		(1 << 0)

/**@}*/

/** @defgroup lptim5_cfgr CFGR Configuration Register
@{*/

/** LPTIM5_CFGR_ENC Encoder mode enable **/
#define LPTIM5_CFGR_ENC		(1 << 24)
/** LPTIM5_CFGR_COUNTMODE counter mode enabled **/
#define LPTIM5_CFGR_COUNTMODE		(1 << 23)
/** LPTIM5_CFGR_PRELOAD Registers update mode **/
#define LPTIM5_CFGR_PRELOAD		(1 << 22)
/** LPTIM5_CFGR_WAVPOL Waveform shape polarity **/
#define LPTIM5_CFGR_WAVPOL		(1 << 21)
/** LPTIM5_CFGR_WAVE Waveform shape **/
#define LPTIM5_CFGR_WAVE		(1 << 20)
/** LPTIM5_CFGR_TIMOUT Timeout enable **/
#define LPTIM5_CFGR_TIMOUT		(1 << 19)

#define LPTIM5_CFGR_TRIGEN_SHIFT		17
#define LPTIM5_CFGR_TRIGEN_MASK		0x03
/** @defgroup lptim5_cfgr_trigen TRIGEN Trigger enable and polarity
@{*/
/**@}*/


#define LPTIM5_CFGR_TRIGSEL_SHIFT		13
#define LPTIM5_CFGR_TRIGSEL_MASK		0x07
/** @defgroup lptim5_cfgr_trigsel TRIGSEL Trigger selector
@{*/
/**@}*/


#define LPTIM5_CFGR_PRESC_SHIFT		9
#define LPTIM5_CFGR_PRESC_MASK		0x07
/** @defgroup lptim5_cfgr_presc PRESC Clock prescaler
@{*/
/**@}*/


#define LPTIM5_CFGR_TRGFLT_SHIFT		6
#define LPTIM5_CFGR_TRGFLT_MASK		0x03
/** @defgroup lptim5_cfgr_trgflt TRGFLT Configurable digital filter for trigger
@{*/
/**@}*/


#define LPTIM5_CFGR_CKFLT_SHIFT		3
#define LPTIM5_CFGR_CKFLT_MASK		0x03
/** @defgroup lptim5_cfgr_ckflt CKFLT Configurable digital filter for external clock
@{*/
/**@}*/


#define LPTIM5_CFGR_CKPOL_SHIFT		1
#define LPTIM5_CFGR_CKPOL_MASK		0x03
/** @defgroup lptim5_cfgr_ckpol CKPOL Clock Polarity
@{*/
/**@}*/

/** LPTIM5_CFGR_CKSEL Clock selector **/
#define LPTIM5_CFGR_CKSEL		(1 << 0)

/**@}*/

/** @defgroup lptim5_cr CR Control Register
@{*/

/** LPTIM5_CR_RSTARE Reset after read enable **/
#define LPTIM5_CR_RSTARE		(1 << 4)
/** LPTIM5_CR_COUNTRST Counter reset **/
#define LPTIM5_CR_COUNTRST		(1 << 3)
/** LPTIM5_CR_CNTSTRT Timer start in continuous mode **/
#define LPTIM5_CR_CNTSTRT		(1 << 2)
/** LPTIM5_CR_SNGSTRT LPTIM start in single mode **/
#define LPTIM5_CR_SNGSTRT		(1 << 1)
/** LPTIM5_CR_ENABLE LPTIM Enable **/
#define LPTIM5_CR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup lptim5_cmp CMP Compare Register
@{*/


#define LPTIM5_CMP_CMP_SHIFT		0
#define LPTIM5_CMP_CMP_MASK		0xffff
/** @defgroup lptim5_cmp_cmp CMP Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim5_arr ARR Autoreload Register
@{*/


#define LPTIM5_ARR_ARR_SHIFT		0
#define LPTIM5_ARR_ARR_MASK		0xffff
/** @defgroup lptim5_arr_arr ARR Auto reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim5_cnt CNT Counter Register
@{*/


#define LPTIM5_CNT_CNT_SHIFT		0
#define LPTIM5_CNT_CNT_MASK		0xffff
/** @defgroup lptim5_cnt_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim5_lptim_cfgr2 LPTIMCFGR2 LPTIM configuration register 2
@{*/


#define LPTIM5_LPTIM_CFGR2_IN1SEL_SHIFT		0
#define LPTIM5_LPTIM_CFGR2_IN1SEL_MASK		0x03
/** @defgroup lptim5_lptim_cfgr2_in1sel IN1SEL LPTIM Input 1 selection
@{*/
/**@}*/


/**@}*/

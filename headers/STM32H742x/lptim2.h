#pragma once 

/* --- LPTIM2: Low power timer -------------------------------------- */

/** @defgroup lptim2_registers Low power timer Register
@{*/

/** LPTIM2_ISR Interrupt and Status Register **/
#define LPTIM2_ISR			MMIO32(LPTIM2_BASE + 0x00)
/** LPTIM2_ICR Interrupt Clear Register **/
#define LPTIM2_ICR			MMIO32(LPTIM2_BASE + 0x04)
/** LPTIM2_IER Interrupt Enable Register **/
#define LPTIM2_IER			MMIO32(LPTIM2_BASE + 0x08)
/** LPTIM2_CFGR Configuration Register **/
#define LPTIM2_CFGR			MMIO32(LPTIM2_BASE + 0x0c)
/** LPTIM2_CR Control Register **/
#define LPTIM2_CR			MMIO32(LPTIM2_BASE + 0x10)
/** LPTIM2_CMP Compare Register **/
#define LPTIM2_CMP			MMIO32(LPTIM2_BASE + 0x14)
/** LPTIM2_ARR Autoreload Register **/
#define LPTIM2_ARR			MMIO32(LPTIM2_BASE + 0x18)
/** LPTIM2_CNT Counter Register **/
#define LPTIM2_CNT			MMIO32(LPTIM2_BASE + 0x1c)
/** LPTIM2_CFGR2 LPTIM configuration register 2 **/
#define LPTIM2_CFGR2			MMIO32(LPTIM2_BASE + 0x24)

/**@}*/


/** @defgroup lptim2_isr ISR Interrupt and Status Register
@{*/

/** LPTIM2_ISR_DOWN Counter direction change up to down **/
#define LPTIM2_ISR_DOWN		(1 << 6)
/** LPTIM2_ISR_UP Counter direction change down to up **/
#define LPTIM2_ISR_UP		(1 << 5)
/** LPTIM2_ISR_ARROK Autoreload register update OK **/
#define LPTIM2_ISR_ARROK		(1 << 4)
/** LPTIM2_ISR_CMPOK Compare register update OK **/
#define LPTIM2_ISR_CMPOK		(1 << 3)
/** LPTIM2_ISR_EXTTRIG External trigger edge event **/
#define LPTIM2_ISR_EXTTRIG		(1 << 2)
/** LPTIM2_ISR_ARRM Autoreload match **/
#define LPTIM2_ISR_ARRM		(1 << 1)
/** LPTIM2_ISR_CMPM Compare match **/
#define LPTIM2_ISR_CMPM		(1 << 0)

/**@}*/

/** @defgroup lptim2_icr ICR Interrupt Clear Register
@{*/

/** LPTIM2_ICR_DOWNCF Direction change to down Clear Flag **/
#define LPTIM2_ICR_DOWNCF		(1 << 6)
/** LPTIM2_ICR_UPCF Direction change to UP Clear Flag **/
#define LPTIM2_ICR_UPCF		(1 << 5)
/** LPTIM2_ICR_ARROKCF Autoreload register update OK Clear Flag **/
#define LPTIM2_ICR_ARROKCF		(1 << 4)
/** LPTIM2_ICR_CMPOKCF Compare register update OK Clear Flag **/
#define LPTIM2_ICR_CMPOKCF		(1 << 3)
/** LPTIM2_ICR_EXTTRIGCF External trigger valid edge Clear Flag **/
#define LPTIM2_ICR_EXTTRIGCF		(1 << 2)
/** LPTIM2_ICR_ARRMCF Autoreload match Clear Flag **/
#define LPTIM2_ICR_ARRMCF		(1 << 1)
/** LPTIM2_ICR_CMPMCF compare match Clear Flag **/
#define LPTIM2_ICR_CMPMCF		(1 << 0)

/**@}*/

/** @defgroup lptim2_ier IER Interrupt Enable Register
@{*/

/** LPTIM2_IER_DOWNIE Direction change to down Interrupt Enable **/
#define LPTIM2_IER_DOWNIE		(1 << 6)
/** LPTIM2_IER_UPIE Direction change to UP Interrupt Enable **/
#define LPTIM2_IER_UPIE		(1 << 5)
/** LPTIM2_IER_ARROKIE Autoreload register update OK Interrupt Enable **/
#define LPTIM2_IER_ARROKIE		(1 << 4)
/** LPTIM2_IER_CMPOKIE Compare register update OK Interrupt Enable **/
#define LPTIM2_IER_CMPOKIE		(1 << 3)
/** LPTIM2_IER_EXTTRIGIE External trigger valid edge Interrupt Enable **/
#define LPTIM2_IER_EXTTRIGIE		(1 << 2)
/** LPTIM2_IER_ARRMIE Autoreload match Interrupt Enable **/
#define LPTIM2_IER_ARRMIE		(1 << 1)
/** LPTIM2_IER_CMPMIE Compare match Interrupt Enable **/
#define LPTIM2_IER_CMPMIE		(1 << 0)

/**@}*/

/** @defgroup lptim2_cfgr CFGR Configuration Register
@{*/

/** LPTIM2_CFGR_ENC Encoder mode enable **/
#define LPTIM2_CFGR_ENC		(1 << 24)
/** LPTIM2_CFGR_COUNTMODE counter mode enabled **/
#define LPTIM2_CFGR_COUNTMODE		(1 << 23)
/** LPTIM2_CFGR_PRELOAD Registers update mode **/
#define LPTIM2_CFGR_PRELOAD		(1 << 22)
/** LPTIM2_CFGR_WAVPOL Waveform shape polarity **/
#define LPTIM2_CFGR_WAVPOL		(1 << 21)
/** LPTIM2_CFGR_WAVE Waveform shape **/
#define LPTIM2_CFGR_WAVE		(1 << 20)
/** LPTIM2_CFGR_TIMOUT Timeout enable **/
#define LPTIM2_CFGR_TIMOUT		(1 << 19)

#define LPTIM2_CFGR_TRIGEN_SHIFT		17
#define LPTIM2_CFGR_TRIGEN_MASK		0x03
/** @defgroup lptim2_cfgr_trigen TRIGEN Trigger enable and polarity
@{*/
/**@}*/


#define LPTIM2_CFGR_TRIGSEL_SHIFT		13
#define LPTIM2_CFGR_TRIGSEL_MASK		0x07
/** @defgroup lptim2_cfgr_trigsel TRIGSEL Trigger selector
@{*/
/**@}*/


#define LPTIM2_CFGR_PRESC_SHIFT		9
#define LPTIM2_CFGR_PRESC_MASK		0x07
/** @defgroup lptim2_cfgr_presc PRESC Clock prescaler
@{*/
/**@}*/


#define LPTIM2_CFGR_TRGFLT_SHIFT		6
#define LPTIM2_CFGR_TRGFLT_MASK		0x03
/** @defgroup lptim2_cfgr_trgflt TRGFLT Configurable digital filter for trigger
@{*/
/**@}*/


#define LPTIM2_CFGR_CKFLT_SHIFT		3
#define LPTIM2_CFGR_CKFLT_MASK		0x03
/** @defgroup lptim2_cfgr_ckflt CKFLT Configurable digital filter for external clock
@{*/
/**@}*/


#define LPTIM2_CFGR_CKPOL_SHIFT		1
#define LPTIM2_CFGR_CKPOL_MASK		0x03
/** @defgroup lptim2_cfgr_ckpol CKPOL Clock Polarity
@{*/
/**@}*/

/** LPTIM2_CFGR_CKSEL Clock selector **/
#define LPTIM2_CFGR_CKSEL		(1 << 0)

/**@}*/

/** @defgroup lptim2_cr CR Control Register
@{*/

/** LPTIM2_CR_RSTARE Reset after read enable **/
#define LPTIM2_CR_RSTARE		(1 << 4)
/** LPTIM2_CR_COUNTRST Counter reset **/
#define LPTIM2_CR_COUNTRST		(1 << 3)
/** LPTIM2_CR_CNTSTRT Timer start in continuous mode **/
#define LPTIM2_CR_CNTSTRT		(1 << 2)
/** LPTIM2_CR_SNGSTRT LPTIM start in single mode **/
#define LPTIM2_CR_SNGSTRT		(1 << 1)
/** LPTIM2_CR_ENABLE LPTIM Enable **/
#define LPTIM2_CR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup lptim2_cmp CMP Compare Register
@{*/


#define LPTIM2_CMP_CMP_SHIFT		0
#define LPTIM2_CMP_CMP_MASK		0xffff
/** @defgroup lptim2_cmp_cmp CMP Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim2_arr ARR Autoreload Register
@{*/


#define LPTIM2_ARR_ARR_SHIFT		0
#define LPTIM2_ARR_ARR_MASK		0xffff
/** @defgroup lptim2_arr_arr ARR Auto reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim2_cnt CNT Counter Register
@{*/


#define LPTIM2_CNT_CNT_SHIFT		0
#define LPTIM2_CNT_CNT_MASK		0xffff
/** @defgroup lptim2_cnt_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup lptim2_cfgr2 CFGR2 LPTIM configuration register 2
@{*/


#define LPTIM2_CFGR2_IN2SEL_SHIFT		4
#define LPTIM2_CFGR2_IN2SEL_MASK		0x03
/** @defgroup lptim2_cfgr2_in2sel IN2SEL LPTIM Input 2 selection
@{*/
/**@}*/


#define LPTIM2_CFGR2_IN1SEL_SHIFT		0
#define LPTIM2_CFGR2_IN1SEL_MASK		0x03
/** @defgroup lptim2_cfgr2_in1sel IN1SEL LPTIM Input 1 selection
@{*/
/**@}*/


/**@}*/

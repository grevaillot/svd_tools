#pragma once 

/* --- TIM10: General-purpose-timers -------------------------------- */

/** @defgroup tim10_registers General-purpose-timers Register
@{*/

/** TIM10_CR1 control register 1 **/
#define TIM10_CR1			MMIO32(TIM10_BASE + 0x00)
/** TIM10_SMCR slave mode control register **/
#define TIM10_SMCR			MMIO32(TIM10_BASE + 0x08)
/** TIM10_DIER DMA/Interrupt enable register **/
#define TIM10_DIER			MMIO32(TIM10_BASE + 0x0c)
/** TIM10_SR status register **/
#define TIM10_SR			MMIO32(TIM10_BASE + 0x10)
/** TIM10_EGR event generation register **/
#define TIM10_EGR			MMIO32(TIM10_BASE + 0x14)
/** TIM10_CCMR1_Output capture/compare mode register 1 (output mode) **/
#define TIM10_CCMR1_Output			MMIO32(TIM10_BASE + 0x18)
/** TIM10_CCMR1_Input capture/compare mode register 1 (input mode) **/
#define TIM10_CCMR1_Input			MMIO32(TIM10_BASE + 0x18)
/** TIM10_CCER capture/compare enable register **/
#define TIM10_CCER			MMIO32(TIM10_BASE + 0x20)
/** TIM10_CNT counter **/
#define TIM10_CNT			MMIO32(TIM10_BASE + 0x24)
/** TIM10_PSC prescaler **/
#define TIM10_PSC			MMIO32(TIM10_BASE + 0x28)
/** TIM10_ARR auto-reload register **/
#define TIM10_ARR			MMIO32(TIM10_BASE + 0x2c)
/** TIM10_CCR1 capture/compare register 1 **/
#define TIM10_CCR1			MMIO32(TIM10_BASE + 0x34)
/** TIM10_OR option register **/
#define TIM10_OR			MMIO32(TIM10_BASE + 0x50)

/**@}*/


/** @defgroup tim10_cr1 CR1 control register 1
@{*/


#define TIM10_CR1_CKD_SHIFT		8
#define TIM10_CR1_CKD_MASK		0x03
/** @defgroup tim10_cr1_ckd CKD Clock division
@{*/
/**@}*/

/** TIM10_CR1_ARPE Auto-reload preload enable **/
#define TIM10_CR1_ARPE		(1 << 7)
/** TIM10_CR1_URS Update request source **/
#define TIM10_CR1_URS		(1 << 2)
/** TIM10_CR1_UDIS Update disable **/
#define TIM10_CR1_UDIS		(1 << 1)
/** TIM10_CR1_CEN Counter enable **/
#define TIM10_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim10_smcr SMCR slave mode control register
@{*/

/** TIM10_SMCR_SMS3 Slave mode selection **/
#define TIM10_SMCR_SMS3		(1 << 16)
/** TIM10_SMCR_ETP External trigger polarity **/
#define TIM10_SMCR_ETP		(1 << 15)
/** TIM10_SMCR_ECE External clock enable **/
#define TIM10_SMCR_ECE		(1 << 14)

#define TIM10_SMCR_ETPS_SHIFT		12
#define TIM10_SMCR_ETPS_MASK		0x03
/** @defgroup tim10_smcr_etps ETPS External trigger prescaler
@{*/
/**@}*/


#define TIM10_SMCR_ETF_SHIFT		8
#define TIM10_SMCR_ETF_MASK		0x0f
/** @defgroup tim10_smcr_etf ETF External trigger filter
@{*/
/**@}*/

/** TIM10_SMCR_MSM Master/slave mode **/
#define TIM10_SMCR_MSM		(1 << 7)

#define TIM10_SMCR_TS_SHIFT		4
#define TIM10_SMCR_TS_MASK		0x07
/** @defgroup tim10_smcr_ts TS Trigger selection
@{*/
/**@}*/


#define TIM10_SMCR_SMS_SHIFT		0
#define TIM10_SMCR_SMS_MASK		0x07
/** @defgroup tim10_smcr_sms SMS Slave mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim10_dier DIER DMA/Interrupt enable register
@{*/

/** TIM10_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM10_DIER_CC1IE		(1 << 1)
/** TIM10_DIER_UIE Update interrupt enable **/
#define TIM10_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim10_sr SR status register
@{*/

/** TIM10_SR_CC1OF Capture/Compare 1 overcapture flag **/
#define TIM10_SR_CC1OF		(1 << 9)
/** TIM10_SR_CC1IF Capture/compare 1 interrupt flag **/
#define TIM10_SR_CC1IF		(1 << 1)
/** TIM10_SR_UIF Update interrupt flag **/
#define TIM10_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim10_egr EGR event generation register
@{*/

/** TIM10_EGR_CC1G Capture/compare 1 generation **/
#define TIM10_EGR_CC1G		(1 << 1)
/** TIM10_EGR_UG Update generation **/
#define TIM10_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim10_ccmr1_output CCMR1Output capture/compare mode register 1 (output mode)
@{*/


#define TIM10_CCMR1_Output_OC1M_SHIFT		4
#define TIM10_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim10_ccmr1_output_oc1m OC1M Output Compare 1 mode
@{*/
/**@}*/

/** TIM10_CCMR1_Output_OC1PE Output Compare 1 preload enable **/
#define TIM10_CCMR1_Output_OC1PE		(1 << 3)
/** TIM10_CCMR1_Output_OC1FE Output Compare 1 fast enable **/
#define TIM10_CCMR1_Output_OC1FE		(1 << 2)

#define TIM10_CCMR1_Output_CC1S_SHIFT		0
#define TIM10_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim10_ccmr1_output_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim10_ccmr1_input CCMR1Input capture/compare mode register 1 (input mode)
@{*/


#define TIM10_CCMR1_Input_IC1F_SHIFT		4
#define TIM10_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim10_ccmr1_input_ic1f IC1F Input capture 1 filter
@{*/
/**@}*/


#define TIM10_CCMR1_Input_ICPCS_SHIFT		2
#define TIM10_CCMR1_Input_ICPCS_MASK		0x03
/** @defgroup tim10_ccmr1_input_icpcs ICPCS Input capture 1 prescaler
@{*/
/**@}*/


#define TIM10_CCMR1_Input_CC1S_SHIFT		0
#define TIM10_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim10_ccmr1_input_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim10_ccer CCER capture/compare enable register
@{*/

/** TIM10_CCER_CC1NP Capture/Compare 1 output Polarity **/
#define TIM10_CCER_CC1NP		(1 << 3)
/** TIM10_CCER_CC1P Capture/Compare 1 output Polarity **/
#define TIM10_CCER_CC1P		(1 << 1)
/** TIM10_CCER_CC1E Capture/Compare 1 output enable **/
#define TIM10_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim10_cnt CNT counter
@{*/


#define TIM10_CNT_CNT_SHIFT		0
#define TIM10_CNT_CNT_MASK		0xffff
/** @defgroup tim10_cnt_cnt CNT counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim10_psc PSC prescaler
@{*/


#define TIM10_PSC_PSC_SHIFT		0
#define TIM10_PSC_PSC_MASK		0xffff
/** @defgroup tim10_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim10_arr ARR auto-reload register
@{*/


#define TIM10_ARR_ARR_SHIFT		0
#define TIM10_ARR_ARR_MASK		0xffff
/** @defgroup tim10_arr_arr ARR Auto-reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim10_ccr1 CCR1 capture/compare register 1
@{*/


#define TIM10_CCR1_CCR1_SHIFT		0
#define TIM10_CCR1_CCR1_MASK		0xffff
/** @defgroup tim10_ccr1_ccr1 CCR1 Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim10_or OR option register
@{*/


#define TIM10_OR_TI1_RMP_SHIFT		0
#define TIM10_OR_TI1_RMP_MASK		0x03
/** @defgroup tim10_or_ti1_rmp TI1RMP TIM11 Input 1 remapping capability
@{*/
/**@}*/


/**@}*/

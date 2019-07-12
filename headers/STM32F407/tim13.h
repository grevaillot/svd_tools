#pragma once 

/* --- TIM13: General-purpose-timers -------------------------------- */

/** @defgroup tim13_registers General-purpose-timers Register
@{*/

/** TIM13_CR1 control register 1 **/
#define TIM13_CR1			MMIO32(TIM13_BASE + 0x00)
/** TIM13_DIER DMA/Interrupt enable register **/
#define TIM13_DIER			MMIO32(TIM13_BASE + 0x0c)
/** TIM13_SR status register **/
#define TIM13_SR			MMIO32(TIM13_BASE + 0x10)
/** TIM13_EGR event generation register **/
#define TIM13_EGR			MMIO32(TIM13_BASE + 0x14)
/** TIM13_CCMR1_Output capture/compare mode register 1 (output mode) **/
#define TIM13_CCMR1_Output			MMIO32(TIM13_BASE + 0x18)
/** TIM13_CCMR1_Input capture/compare mode register 1 (input mode) **/
#define TIM13_CCMR1_Input			MMIO32(TIM13_BASE + 0x18)
/** TIM13_CCER capture/compare enable register **/
#define TIM13_CCER			MMIO32(TIM13_BASE + 0x20)
/** TIM13_CNT counter **/
#define TIM13_CNT			MMIO32(TIM13_BASE + 0x24)
/** TIM13_PSC prescaler **/
#define TIM13_PSC			MMIO32(TIM13_BASE + 0x28)
/** TIM13_ARR auto-reload register **/
#define TIM13_ARR			MMIO32(TIM13_BASE + 0x2c)
/** TIM13_CCR1 capture/compare register 1 **/
#define TIM13_CCR1			MMIO32(TIM13_BASE + 0x34)

/**@}*/


/** @defgroup tim13_cr1 CR1 control register 1
@{*/


#define TIM13_CR1_CKD_SHIFT		8
#define TIM13_CR1_CKD_MASK		0x03
/** @defgroup tim13_cr1_ckd CKD Clock division
@{*/
/**@}*/

/** TIM13_CR1_ARPE Auto-reload preload enable **/
#define TIM13_CR1_ARPE		(1 << 7)
/** TIM13_CR1_URS Update request source **/
#define TIM13_CR1_URS		(1 << 2)
/** TIM13_CR1_UDIS Update disable **/
#define TIM13_CR1_UDIS		(1 << 1)
/** TIM13_CR1_CEN Counter enable **/
#define TIM13_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim13_dier DIER DMA/Interrupt enable register
@{*/

/** TIM13_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM13_DIER_CC1IE		(1 << 1)
/** TIM13_DIER_UIE Update interrupt enable **/
#define TIM13_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim13_sr SR status register
@{*/

/** TIM13_SR_CC1OF Capture/Compare 1 overcapture flag **/
#define TIM13_SR_CC1OF		(1 << 9)
/** TIM13_SR_CC1IF Capture/compare 1 interrupt flag **/
#define TIM13_SR_CC1IF		(1 << 1)
/** TIM13_SR_UIF Update interrupt flag **/
#define TIM13_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim13_egr EGR event generation register
@{*/

/** TIM13_EGR_CC1G Capture/compare 1 generation **/
#define TIM13_EGR_CC1G		(1 << 1)
/** TIM13_EGR_UG Update generation **/
#define TIM13_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim13_ccmr1_output CCMR1Output capture/compare mode register 1 (output mode)
@{*/


#define TIM13_CCMR1_Output_OC1M_SHIFT		4
#define TIM13_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim13_ccmr1_output_oc1m OC1M Output Compare 1 mode
@{*/
/**@}*/

/** TIM13_CCMR1_Output_OC1PE Output Compare 1 preload enable **/
#define TIM13_CCMR1_Output_OC1PE		(1 << 3)
/** TIM13_CCMR1_Output_OC1FE Output Compare 1 fast enable **/
#define TIM13_CCMR1_Output_OC1FE		(1 << 2)

#define TIM13_CCMR1_Output_CC1S_SHIFT		0
#define TIM13_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim13_ccmr1_output_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim13_ccmr1_input CCMR1Input capture/compare mode register 1 (input mode)
@{*/


#define TIM13_CCMR1_Input_IC1F_SHIFT		4
#define TIM13_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim13_ccmr1_input_ic1f IC1F Input capture 1 filter
@{*/
/**@}*/


#define TIM13_CCMR1_Input_ICPCS_SHIFT		2
#define TIM13_CCMR1_Input_ICPCS_MASK		0x03
/** @defgroup tim13_ccmr1_input_icpcs ICPCS Input capture 1 prescaler
@{*/
/**@}*/


#define TIM13_CCMR1_Input_CC1S_SHIFT		0
#define TIM13_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim13_ccmr1_input_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim13_ccer CCER capture/compare enable register
@{*/

/** TIM13_CCER_CC1NP Capture/Compare 1 output Polarity **/
#define TIM13_CCER_CC1NP		(1 << 3)
/** TIM13_CCER_CC1P Capture/Compare 1 output Polarity **/
#define TIM13_CCER_CC1P		(1 << 1)
/** TIM13_CCER_CC1E Capture/Compare 1 output enable **/
#define TIM13_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim13_cnt CNT counter
@{*/


#define TIM13_CNT_CNT_SHIFT		0
#define TIM13_CNT_CNT_MASK		0xffff
/** @defgroup tim13_cnt_cnt CNT counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim13_psc PSC prescaler
@{*/


#define TIM13_PSC_PSC_SHIFT		0
#define TIM13_PSC_PSC_MASK		0xffff
/** @defgroup tim13_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim13_arr ARR auto-reload register
@{*/


#define TIM13_ARR_ARR_SHIFT		0
#define TIM13_ARR_ARR_MASK		0xffff
/** @defgroup tim13_arr_arr ARR Auto-reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim13_ccr1 CCR1 capture/compare register 1
@{*/


#define TIM13_CCR1_CCR1_SHIFT		0
#define TIM13_CCR1_CCR1_MASK		0xffff
/** @defgroup tim13_ccr1_ccr1 CCR1 Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

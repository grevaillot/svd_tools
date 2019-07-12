#pragma once 

/* --- TIM11: General-purpose-timers -------------------------------- */

/** @defgroup tim11_registers General-purpose-timers Register
@{*/

/** TIM11_CR1 control register 1 **/
#define TIM11_CR1			MMIO32(TIM11_BASE + 0x00)
/** TIM11_DIER DMA/Interrupt enable register **/
#define TIM11_DIER			MMIO32(TIM11_BASE + 0x0c)
/** TIM11_SR status register **/
#define TIM11_SR			MMIO32(TIM11_BASE + 0x10)
/** TIM11_EGR event generation register **/
#define TIM11_EGR			MMIO32(TIM11_BASE + 0x14)
/** TIM11_CCMR1_Output capture/compare mode register (output mode) **/
#define TIM11_CCMR1_Output			MMIO32(TIM11_BASE + 0x18)
/** TIM11_CCMR1_Input capture/compare mode register (input mode) **/
#define TIM11_CCMR1_Input			MMIO32(TIM11_BASE + 0x18)
/** TIM11_CCER capture/compare enable register **/
#define TIM11_CCER			MMIO32(TIM11_BASE + 0x20)
/** TIM11_CNT counter **/
#define TIM11_CNT			MMIO32(TIM11_BASE + 0x24)
/** TIM11_PSC prescaler **/
#define TIM11_PSC			MMIO32(TIM11_BASE + 0x28)
/** TIM11_ARR auto-reload register **/
#define TIM11_ARR			MMIO32(TIM11_BASE + 0x2c)
/** TIM11_CCR1 capture/compare register 1 **/
#define TIM11_CCR1			MMIO32(TIM11_BASE + 0x34)
/** TIM11_OR option register **/
#define TIM11_OR			MMIO32(TIM11_BASE + 0x50)

/**@}*/


/** @defgroup tim11_cr1 CR1 control register 1
@{*/


#define TIM11_CR1_CKD_SHIFT		8
#define TIM11_CR1_CKD_MASK		0x03
/** @defgroup tim11_cr1_ckd CKD Clock division
@{*/
/**@}*/

/** TIM11_CR1_ARPE Auto-reload preload enable **/
#define TIM11_CR1_ARPE		(1 << 7)
/** TIM11_CR1_URS Update request source **/
#define TIM11_CR1_URS		(1 << 2)
/** TIM11_CR1_UDIS Update disable **/
#define TIM11_CR1_UDIS		(1 << 1)
/** TIM11_CR1_CEN Counter enable **/
#define TIM11_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim11_dier DIER DMA/Interrupt enable register
@{*/

/** TIM11_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM11_DIER_CC1IE		(1 << 1)
/** TIM11_DIER_UIE Update interrupt enable **/
#define TIM11_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim11_sr SR status register
@{*/

/** TIM11_SR_CC1OF Capture/Compare 1 overcapture flag **/
#define TIM11_SR_CC1OF		(1 << 9)
/** TIM11_SR_CC1IF Capture/compare 1 interrupt flag **/
#define TIM11_SR_CC1IF		(1 << 1)
/** TIM11_SR_UIF Update interrupt flag **/
#define TIM11_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim11_egr EGR event generation register
@{*/

/** TIM11_EGR_CC1G Capture/compare 1 generation **/
#define TIM11_EGR_CC1G		(1 << 1)
/** TIM11_EGR_UG Update generation **/
#define TIM11_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim11_ccmr1_output CCMR1Output capture/compare mode register (output mode)
@{*/


#define TIM11_CCMR1_Output_OC1M_SHIFT		4
#define TIM11_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim11_ccmr1_output_oc1m OC1M Output Compare 1 mode
@{*/
/**@}*/

/** TIM11_CCMR1_Output_OC1PE Output Compare 1 preload enable **/
#define TIM11_CCMR1_Output_OC1PE		(1 << 3)
/** TIM11_CCMR1_Output_OC1FE Output compare 1 fast enable **/
#define TIM11_CCMR1_Output_OC1FE		(1 << 2)

#define TIM11_CCMR1_Output_CC1S_SHIFT		0
#define TIM11_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim11_ccmr1_output_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim11_ccmr1_input CCMR1Input capture/compare mode register (input mode)
@{*/


#define TIM11_CCMR1_Input_IC1F_SHIFT		4
#define TIM11_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim11_ccmr1_input_ic1f IC1F Input capture 1 filter
@{*/
/**@}*/


#define TIM11_CCMR1_Input_IC1PSC_SHIFT		2
#define TIM11_CCMR1_Input_IC1PSC_MASK		0x03
/** @defgroup tim11_ccmr1_input_ic1psc IC1PSC Input capture 1 prescaler
@{*/
/**@}*/


#define TIM11_CCMR1_Input_CC1S_SHIFT		0
#define TIM11_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim11_ccmr1_input_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim11_ccer CCER capture/compare enable register
@{*/

/** TIM11_CCER_CC1NP Capture/Compare 1 output Polarity **/
#define TIM11_CCER_CC1NP		(1 << 3)
/** TIM11_CCER_CC1P Capture/Compare 1 output Polarity **/
#define TIM11_CCER_CC1P		(1 << 1)
/** TIM11_CCER_CC1E Capture/Compare 1 output enable **/
#define TIM11_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim11_cnt CNT counter
@{*/


#define TIM11_CNT_CNT_SHIFT		0
#define TIM11_CNT_CNT_MASK		0xffff
/** @defgroup tim11_cnt_cnt CNT counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim11_psc PSC prescaler
@{*/


#define TIM11_PSC_PSC_SHIFT		0
#define TIM11_PSC_PSC_MASK		0xffff
/** @defgroup tim11_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim11_arr ARR auto-reload register
@{*/


#define TIM11_ARR_ARR_SHIFT		0
#define TIM11_ARR_ARR_MASK		0xffff
/** @defgroup tim11_arr_arr ARR Auto-reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim11_ccr1 CCR1 capture/compare register 1
@{*/


#define TIM11_CCR1_CCR1_SHIFT		0
#define TIM11_CCR1_CCR1_MASK		0xffff
/** @defgroup tim11_ccr1_ccr1 CCR1 Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim11_or OR option register
@{*/


#define TIM11_OR_RMP_SHIFT		0
#define TIM11_OR_RMP_MASK		0x03
/** @defgroup tim11_or_rmp RMP Input 1 remapping capability
@{*/
/**@}*/


/**@}*/

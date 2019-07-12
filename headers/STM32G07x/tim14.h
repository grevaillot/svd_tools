#pragma once 

/* --- TIM14: General purpose timers -------------------------------- */

/** @defgroup tim14_registers General purpose timers Register
@{*/

/** TIM14_CR1 control register 1 **/
#define TIM14_CR1			MMIO32(TIM14_BASE + 0x00)
/** TIM14_DIER DMA/Interrupt enable register **/
#define TIM14_DIER			MMIO32(TIM14_BASE + 0x0c)
/** TIM14_SR status register **/
#define TIM14_SR			MMIO32(TIM14_BASE + 0x10)
/** TIM14_EGR event generation register **/
#define TIM14_EGR			MMIO32(TIM14_BASE + 0x14)
/** TIM14_CCMR1_Output capture/compare mode register 1 (output mode) **/
#define TIM14_CCMR1_Output			MMIO32(TIM14_BASE + 0x18)
/** TIM14_CCMR1_Input capture/compare mode register 1 (input mode) **/
#define TIM14_CCMR1_Input			MMIO32(TIM14_BASE + 0x18)
/** TIM14_CCER capture/compare enable register **/
#define TIM14_CCER			MMIO32(TIM14_BASE + 0x20)
/** TIM14_CNT counter **/
#define TIM14_CNT			MMIO32(TIM14_BASE + 0x24)
/** TIM14_PSC prescaler **/
#define TIM14_PSC			MMIO32(TIM14_BASE + 0x28)
/** TIM14_ARR auto-reload register **/
#define TIM14_ARR			MMIO32(TIM14_BASE + 0x2c)
/** TIM14_CCR1 capture/compare register 1 **/
#define TIM14_CCR1			MMIO32(TIM14_BASE + 0x34)
/** TIM14_TISEL TIM timer input selection register **/
#define TIM14_TISEL			MMIO32(TIM14_BASE + 0x68)

/**@}*/


/** @defgroup tim14_cr1 CR1 control register 1
@{*/

/** TIM14_CR1_UIFREMAP UIF status bit remapping **/
#define TIM14_CR1_UIFREMAP		(1 << 11)

#define TIM14_CR1_CKD_SHIFT		8
#define TIM14_CR1_CKD_MASK		0x03
/** @defgroup tim14_cr1_ckd CKD Clock division
@{*/
/**@}*/

/** TIM14_CR1_ARPE Auto-reload preload enable **/
#define TIM14_CR1_ARPE		(1 << 7)
/** TIM14_CR1_OPM One-pulse mode **/
#define TIM14_CR1_OPM		(1 << 3)
/** TIM14_CR1_URS Update request source **/
#define TIM14_CR1_URS		(1 << 2)
/** TIM14_CR1_UDIS Update disable **/
#define TIM14_CR1_UDIS		(1 << 1)
/** TIM14_CR1_CEN Counter enable **/
#define TIM14_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim14_dier DIER DMA/Interrupt enable register
@{*/

/** TIM14_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM14_DIER_CC1IE		(1 << 1)
/** TIM14_DIER_UIE Update interrupt enable **/
#define TIM14_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim14_sr SR status register
@{*/

/** TIM14_SR_CC1OF Capture/Compare 1 overcapture flag **/
#define TIM14_SR_CC1OF		(1 << 9)
/** TIM14_SR_CC1IF Capture/compare 1 interrupt flag **/
#define TIM14_SR_CC1IF		(1 << 1)
/** TIM14_SR_UIF Update interrupt flag **/
#define TIM14_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim14_egr EGR event generation register
@{*/

/** TIM14_EGR_CC1G Capture/compare 1 generation **/
#define TIM14_EGR_CC1G		(1 << 1)
/** TIM14_EGR_UG Update generation **/
#define TIM14_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim14_ccmr1_output CCMR1Output capture/compare mode register 1 (output mode)
@{*/

/** TIM14_CCMR1_Output_OC1M_3 Output Compare 1 mode - bit 3 **/
#define TIM14_CCMR1_Output_OC1M_3		(1 << 16)
/** TIM14_CCMR1_Output_OC1CE OC1CE **/
#define TIM14_CCMR1_Output_OC1CE		(1 << 7)

#define TIM14_CCMR1_Output_OC1M_SHIFT		4
#define TIM14_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim14_ccmr1_output_oc1m OC1M OC1M
@{*/
/**@}*/

/** TIM14_CCMR1_Output_OC1PE OC1PE **/
#define TIM14_CCMR1_Output_OC1PE		(1 << 3)
/** TIM14_CCMR1_Output_OC1FE OC1FE **/
#define TIM14_CCMR1_Output_OC1FE		(1 << 2)

#define TIM14_CCMR1_Output_CC1S_SHIFT		0
#define TIM14_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim14_ccmr1_output_cc1s CC1S CC1S
@{*/
/**@}*/


/**@}*/

/** @defgroup tim14_ccmr1_input CCMR1Input capture/compare mode register 1 (input mode)
@{*/


#define TIM14_CCMR1_Input_IC1F_SHIFT		4
#define TIM14_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim14_ccmr1_input_ic1f IC1F Input capture 1 filter
@{*/
/**@}*/


#define TIM14_CCMR1_Input_ICPCS_SHIFT		2
#define TIM14_CCMR1_Input_ICPCS_MASK		0x03
/** @defgroup tim14_ccmr1_input_icpcs ICPCS Input capture 1 prescaler
@{*/
/**@}*/


#define TIM14_CCMR1_Input_CC1S_SHIFT		0
#define TIM14_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim14_ccmr1_input_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim14_ccer CCER capture/compare enable register
@{*/

/** TIM14_CCER_CC1NP Capture/Compare 1 output Polarity **/
#define TIM14_CCER_CC1NP		(1 << 3)
/** TIM14_CCER_CC1P Capture/Compare 1 output Polarity **/
#define TIM14_CCER_CC1P		(1 << 1)
/** TIM14_CCER_CC1E Capture/Compare 1 output enable **/
#define TIM14_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim14_cnt CNT counter
@{*/

/** TIM14_CNT_UIFCPY UIF Copy **/
#define TIM14_CNT_UIFCPY		(1 << 31)

#define TIM14_CNT_CNT_SHIFT		0
#define TIM14_CNT_CNT_MASK		0xffff
/** @defgroup tim14_cnt_cnt CNT low counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim14_psc PSC prescaler
@{*/


#define TIM14_PSC_PSC_SHIFT		0
#define TIM14_PSC_PSC_MASK		0xffff
/** @defgroup tim14_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim14_arr ARR auto-reload register
@{*/


#define TIM14_ARR_ARR_SHIFT		0
#define TIM14_ARR_ARR_MASK		0xffff
/** @defgroup tim14_arr_arr ARR Low Auto-reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim14_ccr1 CCR1 capture/compare register 1
@{*/


#define TIM14_CCR1_CCR1_SHIFT		0
#define TIM14_CCR1_CCR1_MASK		0xffff
/** @defgroup tim14_ccr1_ccr1 CCR1 Low Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim14_tisel TISEL TIM timer input selection register
@{*/


#define TIM14_TISEL_TISEL_SHIFT		0
#define TIM14_TISEL_TISEL_MASK		0x0f
/** @defgroup tim14_tisel_tisel TISEL TI1[0] to TI1[15] input selection
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- TIM12: General-purpose-timers -------------------------------- */

/** @defgroup tim12_registers General-purpose-timers Register
@{*/

/** TIM12_CR1 control register 1 **/
#define TIM12_CR1			MMIO32(TIM12_BASE + 0x00)
/** TIM12_CR2 control register 2 **/
#define TIM12_CR2			MMIO32(TIM12_BASE + 0x04)
/** TIM12_SMCR slave mode control register **/
#define TIM12_SMCR			MMIO32(TIM12_BASE + 0x08)
/** TIM12_DIER DMA/Interrupt enable register **/
#define TIM12_DIER			MMIO32(TIM12_BASE + 0x0c)
/** TIM12_SR status register **/
#define TIM12_SR			MMIO32(TIM12_BASE + 0x10)
/** TIM12_EGR event generation register **/
#define TIM12_EGR			MMIO32(TIM12_BASE + 0x14)
/** TIM12_CCMR1_Output capture/compare mode register 1 (output mode) **/
#define TIM12_CCMR1_Output			MMIO32(TIM12_BASE + 0x18)
/** TIM12_CCMR1_Input capture/compare mode register 1 (input mode) **/
#define TIM12_CCMR1_Input			MMIO32(TIM12_BASE + 0x18)
/** TIM12_CCER capture/compare enable register **/
#define TIM12_CCER			MMIO32(TIM12_BASE + 0x20)
/** TIM12_CNT counter **/
#define TIM12_CNT			MMIO32(TIM12_BASE + 0x24)
/** TIM12_PSC prescaler **/
#define TIM12_PSC			MMIO32(TIM12_BASE + 0x28)
/** TIM12_ARR auto-reload register **/
#define TIM12_ARR			MMIO32(TIM12_BASE + 0x2c)
/** TIM12_CCR1 capture/compare register 1 **/
#define TIM12_CCR1			MMIO32(TIM12_BASE + 0x34)
/** TIM12_CCR2 capture/compare register 2 **/
#define TIM12_CCR2			MMIO32(TIM12_BASE + 0x38)

/**@}*/


/** @defgroup tim12_cr1 CR1 control register 1
@{*/


#define TIM12_CR1_CKD_SHIFT		8
#define TIM12_CR1_CKD_MASK		0x03
/** @defgroup tim12_cr1_ckd CKD Clock division
@{*/
/**@}*/

/** TIM12_CR1_ARPE Auto-reload preload enable **/
#define TIM12_CR1_ARPE		(1 << 7)
/** TIM12_CR1_OPM One-pulse mode **/
#define TIM12_CR1_OPM		(1 << 3)
/** TIM12_CR1_URS Update request source **/
#define TIM12_CR1_URS		(1 << 2)
/** TIM12_CR1_UDIS Update disable **/
#define TIM12_CR1_UDIS		(1 << 1)
/** TIM12_CR1_CEN Counter enable **/
#define TIM12_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim12_cr2 CR2 control register 2
@{*/


#define TIM12_CR2_MMS_SHIFT		4
#define TIM12_CR2_MMS_MASK		0x07
/** @defgroup tim12_cr2_mms MMS Master mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim12_smcr SMCR slave mode control register
@{*/

/** TIM12_SMCR_MSM Master/Slave mode **/
#define TIM12_SMCR_MSM		(1 << 7)

#define TIM12_SMCR_TS_SHIFT		4
#define TIM12_SMCR_TS_MASK		0x07
/** @defgroup tim12_smcr_ts TS Trigger selection
@{*/
/**@}*/


#define TIM12_SMCR_SMS_SHIFT		0
#define TIM12_SMCR_SMS_MASK		0x07
/** @defgroup tim12_smcr_sms SMS Slave mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim12_dier DIER DMA/Interrupt enable register
@{*/

/** TIM12_DIER_TIE Trigger interrupt enable **/
#define TIM12_DIER_TIE		(1 << 6)
/** TIM12_DIER_CC2IE Capture/Compare 2 interrupt enable **/
#define TIM12_DIER_CC2IE		(1 << 2)
/** TIM12_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM12_DIER_CC1IE		(1 << 1)
/** TIM12_DIER_UIE Update interrupt enable **/
#define TIM12_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim12_sr SR status register
@{*/

/** TIM12_SR_CC2OF Capture/compare 2 overcapture flag **/
#define TIM12_SR_CC2OF		(1 << 10)
/** TIM12_SR_CC1OF Capture/Compare 1 overcapture flag **/
#define TIM12_SR_CC1OF		(1 << 9)
/** TIM12_SR_TIF Trigger interrupt flag **/
#define TIM12_SR_TIF		(1 << 6)
/** TIM12_SR_CC2IF Capture/Compare 2 interrupt flag **/
#define TIM12_SR_CC2IF		(1 << 2)
/** TIM12_SR_CC1IF Capture/compare 1 interrupt flag **/
#define TIM12_SR_CC1IF		(1 << 1)
/** TIM12_SR_UIF Update interrupt flag **/
#define TIM12_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim12_egr EGR event generation register
@{*/

/** TIM12_EGR_TG Trigger generation **/
#define TIM12_EGR_TG		(1 << 6)
/** TIM12_EGR_CC2G Capture/compare 2 generation **/
#define TIM12_EGR_CC2G		(1 << 2)
/** TIM12_EGR_CC1G Capture/compare 1 generation **/
#define TIM12_EGR_CC1G		(1 << 1)
/** TIM12_EGR_UG Update generation **/
#define TIM12_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim12_ccmr1_output CCMR1Output capture/compare mode register 1 (output mode)
@{*/


#define TIM12_CCMR1_Output_OC2M_SHIFT		12
#define TIM12_CCMR1_Output_OC2M_MASK		0x07
/** @defgroup tim12_ccmr1_output_oc2m OC2M Output Compare 2 mode
@{*/
/**@}*/

/** TIM12_CCMR1_Output_OC2PE Output Compare 2 preload enable **/
#define TIM12_CCMR1_Output_OC2PE		(1 << 11)
/** TIM12_CCMR1_Output_OC2FE Output Compare 2 fast enable **/
#define TIM12_CCMR1_Output_OC2FE		(1 << 10)

#define TIM12_CCMR1_Output_CC2S_SHIFT		8
#define TIM12_CCMR1_Output_CC2S_MASK		0x03
/** @defgroup tim12_ccmr1_output_cc2s CC2S Capture/Compare 2 selection
@{*/
/**@}*/


#define TIM12_CCMR1_Output_OC1M_SHIFT		4
#define TIM12_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim12_ccmr1_output_oc1m OC1M Output Compare 1 mode
@{*/
/**@}*/

/** TIM12_CCMR1_Output_OC1PE Output Compare 1 preload enable **/
#define TIM12_CCMR1_Output_OC1PE		(1 << 3)
/** TIM12_CCMR1_Output_OC1FE Output Compare 1 fast enable **/
#define TIM12_CCMR1_Output_OC1FE		(1 << 2)

#define TIM12_CCMR1_Output_CC1S_SHIFT		0
#define TIM12_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim12_ccmr1_output_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim12_ccmr1_input CCMR1Input capture/compare mode register 1 (input mode)
@{*/


#define TIM12_CCMR1_Input_IC2F_SHIFT		12
#define TIM12_CCMR1_Input_IC2F_MASK		0x07
/** @defgroup tim12_ccmr1_input_ic2f IC2F Input capture 2 filter
@{*/
/**@}*/


#define TIM12_CCMR1_Input_IC2PSC_SHIFT		10
#define TIM12_CCMR1_Input_IC2PSC_MASK		0x03
/** @defgroup tim12_ccmr1_input_ic2psc IC2PSC Input capture 2 prescaler
@{*/
/**@}*/


#define TIM12_CCMR1_Input_CC2S_SHIFT		8
#define TIM12_CCMR1_Input_CC2S_MASK		0x03
/** @defgroup tim12_ccmr1_input_cc2s CC2S Capture/Compare 2 selection
@{*/
/**@}*/


#define TIM12_CCMR1_Input_IC1F_SHIFT		4
#define TIM12_CCMR1_Input_IC1F_MASK		0x07
/** @defgroup tim12_ccmr1_input_ic1f IC1F Input capture 1 filter
@{*/
/**@}*/


#define TIM12_CCMR1_Input_IC1PSC_SHIFT		2
#define TIM12_CCMR1_Input_IC1PSC_MASK		0x03
/** @defgroup tim12_ccmr1_input_ic1psc IC1PSC Input capture 1 prescaler
@{*/
/**@}*/


#define TIM12_CCMR1_Input_CC1S_SHIFT		0
#define TIM12_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim12_ccmr1_input_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim12_ccer CCER capture/compare enable register
@{*/

/** TIM12_CCER_CC2NP Capture/Compare 2 output Polarity **/
#define TIM12_CCER_CC2NP		(1 << 7)
/** TIM12_CCER_CC2P Capture/Compare 2 output Polarity **/
#define TIM12_CCER_CC2P		(1 << 5)
/** TIM12_CCER_CC2E Capture/Compare 2 output enable **/
#define TIM12_CCER_CC2E		(1 << 4)
/** TIM12_CCER_CC1NP Capture/Compare 1 output Polarity **/
#define TIM12_CCER_CC1NP		(1 << 3)
/** TIM12_CCER_CC1P Capture/Compare 1 output Polarity **/
#define TIM12_CCER_CC1P		(1 << 1)
/** TIM12_CCER_CC1E Capture/Compare 1 output enable **/
#define TIM12_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim12_cnt CNT counter
@{*/


#define TIM12_CNT_CNT_SHIFT		0
#define TIM12_CNT_CNT_MASK		0xffff
/** @defgroup tim12_cnt_cnt CNT counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim12_psc PSC prescaler
@{*/


#define TIM12_PSC_PSC_SHIFT		0
#define TIM12_PSC_PSC_MASK		0xffff
/** @defgroup tim12_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim12_arr ARR auto-reload register
@{*/


#define TIM12_ARR_ARR_SHIFT		0
#define TIM12_ARR_ARR_MASK		0xffff
/** @defgroup tim12_arr_arr ARR Auto-reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim12_ccr1 CCR1 capture/compare register 1
@{*/


#define TIM12_CCR1_CCR1_SHIFT		0
#define TIM12_CCR1_CCR1_MASK		0xffff
/** @defgroup tim12_ccr1_ccr1 CCR1 Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim12_ccr2 CCR2 capture/compare register 2
@{*/


#define TIM12_CCR2_CCR2_SHIFT		0
#define TIM12_CCR2_CCR2_MASK		0xffff
/** @defgroup tim12_ccr2_ccr2 CCR2 Capture/Compare 2 value
@{*/
/**@}*/


/**@}*/

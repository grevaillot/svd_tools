#pragma once 

/* --- TIM9: General-purpose timers --------------------------------- */

/** @defgroup tim9_registers General-purpose timers Register
@{*/

/** TIM9_CR1 control register 1 **/
#define TIM9_CR1			MMIO32(TIM9_BASE + 0x00)
/** TIM9_CR2 control register 2 **/
#define TIM9_CR2			MMIO32(TIM9_BASE + 0x04)
/** TIM9_SMCR slave mode control register **/
#define TIM9_SMCR			MMIO32(TIM9_BASE + 0x08)
/** TIM9_DIER Interrupt enable register **/
#define TIM9_DIER			MMIO32(TIM9_BASE + 0x0c)
/** TIM9_SR status register **/
#define TIM9_SR			MMIO32(TIM9_BASE + 0x10)
/** TIM9_EGR event generation register **/
#define TIM9_EGR			MMIO32(TIM9_BASE + 0x14)
/** TIM9_CCMR1_Output capture/compare mode register 1 **/
#define TIM9_CCMR1_Output			MMIO32(TIM9_BASE + 0x18)
/** TIM9_CCMR1_Input capture/compare mode register 1 (input mode) **/
#define TIM9_CCMR1_Input			MMIO32(TIM9_BASE + 0x18)
/** TIM9_CNT counter **/
#define TIM9_CNT			MMIO32(TIM9_BASE + 0x24)
/** TIM9_PSC prescaler **/
#define TIM9_PSC			MMIO32(TIM9_BASE + 0x28)
/** TIM9_ARR auto-reload register **/
#define TIM9_ARR			MMIO32(TIM9_BASE + 0x2c)
/** TIM9_CCR1 capture/compare register 1 **/
#define TIM9_CCR1			MMIO32(TIM9_BASE + 0x34)
/** TIM9_CCR2 capture/compare register 2 **/
#define TIM9_CCR2			MMIO32(TIM9_BASE + 0x38)
/** TIM9_OR option register **/
#define TIM9_OR			MMIO32(TIM9_BASE + 0x50)

/**@}*/


/** @defgroup tim9_cr1 CR1 control register 1
@{*/


#define TIM9_CR1_CKD_SHIFT		8
#define TIM9_CR1_CKD_MASK		0x03
/** @defgroup tim9_cr1_ckd CKD Clock division
@{*/
/**@}*/

/** TIM9_CR1_ARPE Auto-reload preload enable **/
#define TIM9_CR1_ARPE		(1 << 7)
/** TIM9_CR1_OMP One-pulse mode **/
#define TIM9_CR1_OMP		(1 << 3)
/** TIM9_CR1_URS Update request source **/
#define TIM9_CR1_URS		(1 << 2)
/** TIM9_CR1_UDIS Update disable **/
#define TIM9_CR1_UDIS		(1 << 1)
/** TIM9_CR1_CEN Counter enable **/
#define TIM9_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim9_cr2 CR2 control register 2
@{*/


#define TIM9_CR2_MMS_SHIFT		4
#define TIM9_CR2_MMS_MASK		0x07
/** @defgroup tim9_cr2_mms MMS Master mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim9_smcr SMCR slave mode control register
@{*/

/** TIM9_SMCR_MSM Master/Slave mode **/
#define TIM9_SMCR_MSM		(1 << 7)

#define TIM9_SMCR_TS_SHIFT		4
#define TIM9_SMCR_TS_MASK		0x07
/** @defgroup tim9_smcr_ts TS Trigger selection
@{*/
/**@}*/


#define TIM9_SMCR_SMS_SHIFT		0
#define TIM9_SMCR_SMS_MASK		0x07
/** @defgroup tim9_smcr_sms SMS Slave mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim9_dier DIER Interrupt enable register
@{*/

/** TIM9_DIER_TIE Trigger interrupt enable **/
#define TIM9_DIER_TIE		(1 << 6)
/** TIM9_DIER_CC2IE Capture/Compare 2 interrupt enable **/
#define TIM9_DIER_CC2IE		(1 << 2)
/** TIM9_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM9_DIER_CC1IE		(1 << 1)
/** TIM9_DIER_UIE Update interrupt enable **/
#define TIM9_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim9_sr SR status register
@{*/

/** TIM9_SR_CC2OF Capture/compare 2 overcapture flag **/
#define TIM9_SR_CC2OF		(1 << 10)
/** TIM9_SR_CC1OF Capture/compare 1 overcapture flag **/
#define TIM9_SR_CC1OF		(1 << 9)
/** TIM9_SR_TIF Trigger interrupt flag **/
#define TIM9_SR_TIF		(1 << 6)
/** TIM9_SR_CC2IF Capture/Compare 2 interrupt flag **/
#define TIM9_SR_CC2IF		(1 << 2)
/** TIM9_SR_CC1IF Capture/Compare 1 interrupt flag **/
#define TIM9_SR_CC1IF		(1 << 1)
/** TIM9_SR_UIF Update interrupt flag **/
#define TIM9_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim9_egr EGR event generation register
@{*/

/** TIM9_EGR_TG Trigger generation **/
#define TIM9_EGR_TG		(1 << 6)
/** TIM9_EGR_CC2G Capture/Compare 2 generation **/
#define TIM9_EGR_CC2G		(1 << 2)
/** TIM9_EGR_CC1G Capture/Compare 1 generation **/
#define TIM9_EGR_CC1G		(1 << 1)
/** TIM9_EGR_UG Update generation **/
#define TIM9_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim9_ccmr1_output CCMR1Output capture/compare mode register 1
@{*/

/** TIM9_CCMR1_Output_OC2CE Output compare 2 clear enable **/
#define TIM9_CCMR1_Output_OC2CE		(1 << 15)

#define TIM9_CCMR1_Output_OC2M_SHIFT		12
#define TIM9_CCMR1_Output_OC2M_MASK		0x07
/** @defgroup tim9_ccmr1_output_oc2m OC2M Output compare 2 mode
@{*/
/**@}*/

/** TIM9_CCMR1_Output_OC2PE Output compare 2 preload enable **/
#define TIM9_CCMR1_Output_OC2PE		(1 << 11)
/** TIM9_CCMR1_Output_OC2FE Output compare 2 fast enable **/
#define TIM9_CCMR1_Output_OC2FE		(1 << 10)
/** TIM9_CCMR1_Output_CC2S Capture/Compare 2 selection **/
#define TIM9_CCMR1_Output_CC2S		(1 << 8)
/** TIM9_CCMR1_Output_OC1CE Output compare 1 clear enable **/
#define TIM9_CCMR1_Output_OC1CE		(1 << 7)

#define TIM9_CCMR1_Output_OC1M_SHIFT		4
#define TIM9_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim9_ccmr1_output_oc1m OC1M Output compare 1 mode
@{*/
/**@}*/

/** TIM9_CCMR1_Output_OC1PE Output compare 1 preload enable **/
#define TIM9_CCMR1_Output_OC1PE		(1 << 3)
/** TIM9_CCMR1_Output_OC1FE Output compare 1 fast enable **/
#define TIM9_CCMR1_Output_OC1FE		(1 << 2)

#define TIM9_CCMR1_Output_CC1S_SHIFT		0
#define TIM9_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim9_ccmr1_output_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim9_ccmr1_input CCMR1Input capture/compare mode register 1 (input mode)
@{*/


#define TIM9_CCMR1_Input_IC2F_SHIFT		12
#define TIM9_CCMR1_Input_IC2F_MASK		0x0f
/** @defgroup tim9_ccmr1_input_ic2f IC2F Input capture 2 filter
@{*/
/**@}*/


#define TIM9_CCMR1_Input_IC2PCS_SHIFT		10
#define TIM9_CCMR1_Input_IC2PCS_MASK		0x03
/** @defgroup tim9_ccmr1_input_ic2pcs IC2PCS Input capture 2 prescaler
@{*/
/**@}*/


#define TIM9_CCMR1_Input_CC2S_SHIFT		8
#define TIM9_CCMR1_Input_CC2S_MASK		0x03
/** @defgroup tim9_ccmr1_input_cc2s CC2S Capture/Compare 2 selection
@{*/
/**@}*/


#define TIM9_CCMR1_Input_IC1F_SHIFT		4
#define TIM9_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim9_ccmr1_input_ic1f IC1F Input capture 1 filter
@{*/
/**@}*/


#define TIM9_CCMR1_Input_ICPCS_SHIFT		2
#define TIM9_CCMR1_Input_ICPCS_MASK		0x03
/** @defgroup tim9_ccmr1_input_icpcs ICPCS Input capture 1 prescaler
@{*/
/**@}*/


#define TIM9_CCMR1_Input_CC1S_SHIFT		0
#define TIM9_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim9_ccmr1_input_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim9_cnt CNT counter
@{*/


#define TIM9_CNT_CNT_SHIFT		0
#define TIM9_CNT_CNT_MASK		0xffff
/** @defgroup tim9_cnt_cnt CNT TIM9 counter
@{*/
/**@}*/


/**@}*/

/** @defgroup tim9_psc PSC prescaler
@{*/


#define TIM9_PSC_PSC_SHIFT		0
#define TIM9_PSC_PSC_MASK		0xffff
/** @defgroup tim9_psc_psc PSC TIM9 prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup tim9_arr ARR auto-reload register
@{*/


#define TIM9_ARR_ARR_SHIFT		0
#define TIM9_ARR_ARR_MASK		0xffff
/** @defgroup tim9_arr_arr ARR Auto-reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim9_ccr1 CCR1 capture/compare register 1
@{*/


#define TIM9_CCR1_CCR1_SHIFT		0
#define TIM9_CCR1_CCR1_MASK		0xffff
/** @defgroup tim9_ccr1_ccr1 CCR1 Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim9_ccr2 CCR2 capture/compare register 2
@{*/


#define TIM9_CCR2_CCR2_SHIFT		0
#define TIM9_CCR2_CCR2_MASK		0xffff
/** @defgroup tim9_ccr2_ccr2 CCR2 Capture/Compare 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim9_or OR option register
@{*/


#define TIM9_OR_TI1_RMP_SHIFT		0
#define TIM9_OR_TI1_RMP_MASK		0x03
/** @defgroup tim9_or_ti1_rmp TI1RMP TIM9 Input 1 remapping capability
@{*/
/**@}*/


/**@}*/

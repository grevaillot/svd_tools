#pragma once 

/* --- TIM8: Advanced-timers ---------------------------------------- */

/** @defgroup tim8_registers Advanced-timers Register
@{*/

/** TIM8_CR1 control register 1 **/
#define TIM8_CR1			MMIO32(TIM8_BASE + 0x00)
/** TIM8_CR2 control register 2 **/
#define TIM8_CR2			MMIO32(TIM8_BASE + 0x04)
/** TIM8_SMCR slave mode control register **/
#define TIM8_SMCR			MMIO32(TIM8_BASE + 0x08)
/** TIM8_DIER DMA/Interrupt enable register **/
#define TIM8_DIER			MMIO32(TIM8_BASE + 0x0c)
/** TIM8_SR status register **/
#define TIM8_SR			MMIO32(TIM8_BASE + 0x10)
/** TIM8_EGR event generation register **/
#define TIM8_EGR			MMIO32(TIM8_BASE + 0x14)
/** TIM8_CCMR1_Output capture/compare mode register (output mode) **/
#define TIM8_CCMR1_Output			MMIO32(TIM8_BASE + 0x18)
/** TIM8_CCMR1_Input capture/compare mode register 1 (input mode) **/
#define TIM8_CCMR1_Input			MMIO32(TIM8_BASE + 0x18)
/** TIM8_CCMR2_Output capture/compare mode register (output mode) **/
#define TIM8_CCMR2_Output			MMIO32(TIM8_BASE + 0x1c)
/** TIM8_CCMR2_Input capture/compare mode register 2 (input mode) **/
#define TIM8_CCMR2_Input			MMIO32(TIM8_BASE + 0x1c)
/** TIM8_CCER capture/compare enable register **/
#define TIM8_CCER			MMIO32(TIM8_BASE + 0x20)
/** TIM8_CNT counter **/
#define TIM8_CNT			MMIO32(TIM8_BASE + 0x24)
/** TIM8_PSC prescaler **/
#define TIM8_PSC			MMIO32(TIM8_BASE + 0x28)
/** TIM8_ARR auto-reload register **/
#define TIM8_ARR			MMIO32(TIM8_BASE + 0x2c)
/** TIM8_RCR repetition counter register **/
#define TIM8_RCR			MMIO32(TIM8_BASE + 0x30)
/** TIM8_CCR1 capture/compare register 1 **/
#define TIM8_CCR1			MMIO32(TIM8_BASE + 0x34)
/** TIM8_CCR2 capture/compare register 2 **/
#define TIM8_CCR2			MMIO32(TIM8_BASE + 0x38)
/** TIM8_CCR3 capture/compare register 3 **/
#define TIM8_CCR3			MMIO32(TIM8_BASE + 0x3c)
/** TIM8_CCR4 capture/compare register 4 **/
#define TIM8_CCR4			MMIO32(TIM8_BASE + 0x40)
/** TIM8_BDTR break and dead-time register **/
#define TIM8_BDTR			MMIO32(TIM8_BASE + 0x44)
/** TIM8_DCR DMA control register **/
#define TIM8_DCR			MMIO32(TIM8_BASE + 0x48)
/** TIM8_DMAR DMA address for full transfer **/
#define TIM8_DMAR			MMIO32(TIM8_BASE + 0x4c)

/**@}*/


/** @defgroup tim8_cr1 CR1 control register 1
@{*/


#define TIM8_CR1_CKD_SHIFT		8
#define TIM8_CR1_CKD_MASK		0x03
/** @defgroup tim8_cr1_ckd CKD Clock division
@{*/
/**@}*/

/** TIM8_CR1_ARPE Auto-reload preload enable **/
#define TIM8_CR1_ARPE		(1 << 7)

#define TIM8_CR1_CMS_SHIFT		5
#define TIM8_CR1_CMS_MASK		0x03
/** @defgroup tim8_cr1_cms CMS Center-aligned mode selection
@{*/
/**@}*/

/** TIM8_CR1_DIR Direction **/
#define TIM8_CR1_DIR		(1 << 4)
/** TIM8_CR1_OPM One-pulse mode **/
#define TIM8_CR1_OPM		(1 << 3)
/** TIM8_CR1_URS Update request source **/
#define TIM8_CR1_URS		(1 << 2)
/** TIM8_CR1_UDIS Update disable **/
#define TIM8_CR1_UDIS		(1 << 1)
/** TIM8_CR1_CEN Counter enable **/
#define TIM8_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim8_cr2 CR2 control register 2
@{*/

/** TIM8_CR2_OIS4 Output Idle state 4 **/
#define TIM8_CR2_OIS4		(1 << 14)
/** TIM8_CR2_OIS3N Output Idle state 3 **/
#define TIM8_CR2_OIS3N		(1 << 13)
/** TIM8_CR2_OIS3 Output Idle state 3 **/
#define TIM8_CR2_OIS3		(1 << 12)
/** TIM8_CR2_OIS2N Output Idle state 2 **/
#define TIM8_CR2_OIS2N		(1 << 11)
/** TIM8_CR2_OIS2 Output Idle state 2 **/
#define TIM8_CR2_OIS2		(1 << 10)
/** TIM8_CR2_OIS1N Output Idle state 1 **/
#define TIM8_CR2_OIS1N		(1 << 9)
/** TIM8_CR2_OIS1 Output Idle state 1 **/
#define TIM8_CR2_OIS1		(1 << 8)
/** TIM8_CR2_TI1S TI1 selection **/
#define TIM8_CR2_TI1S		(1 << 7)

#define TIM8_CR2_MMS_SHIFT		4
#define TIM8_CR2_MMS_MASK		0x07
/** @defgroup tim8_cr2_mms MMS Master mode selection
@{*/
/**@}*/

/** TIM8_CR2_CCDS Capture/compare DMA selection **/
#define TIM8_CR2_CCDS		(1 << 3)
/** TIM8_CR2_CCUS Capture/compare control update selection **/
#define TIM8_CR2_CCUS		(1 << 2)
/** TIM8_CR2_CCPC Capture/compare preloaded control **/
#define TIM8_CR2_CCPC		(1 << 0)

/**@}*/

/** @defgroup tim8_smcr SMCR slave mode control register
@{*/

/** TIM8_SMCR_ETP External trigger polarity **/
#define TIM8_SMCR_ETP		(1 << 15)
/** TIM8_SMCR_ECE External clock enable **/
#define TIM8_SMCR_ECE		(1 << 14)

#define TIM8_SMCR_ETPS_SHIFT		12
#define TIM8_SMCR_ETPS_MASK		0x03
/** @defgroup tim8_smcr_etps ETPS External trigger prescaler
@{*/
/**@}*/


#define TIM8_SMCR_ETF_SHIFT		8
#define TIM8_SMCR_ETF_MASK		0x0f
/** @defgroup tim8_smcr_etf ETF External trigger filter
@{*/
/**@}*/

/** TIM8_SMCR_MSM Master/Slave mode **/
#define TIM8_SMCR_MSM		(1 << 7)

#define TIM8_SMCR_TS_SHIFT		4
#define TIM8_SMCR_TS_MASK		0x07
/** @defgroup tim8_smcr_ts TS Trigger selection
@{*/
/**@}*/


#define TIM8_SMCR_SMS_SHIFT		0
#define TIM8_SMCR_SMS_MASK		0x07
/** @defgroup tim8_smcr_sms SMS Slave mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_dier DIER DMA/Interrupt enable register
@{*/

/** TIM8_DIER_TDE Trigger DMA request enable **/
#define TIM8_DIER_TDE		(1 << 14)
/** TIM8_DIER_COMDE COM DMA request enable **/
#define TIM8_DIER_COMDE		(1 << 13)
/** TIM8_DIER_CC4DE Capture/Compare 4 DMA request enable **/
#define TIM8_DIER_CC4DE		(1 << 12)
/** TIM8_DIER_CC3DE Capture/Compare 3 DMA request enable **/
#define TIM8_DIER_CC3DE		(1 << 11)
/** TIM8_DIER_CC2DE Capture/Compare 2 DMA request enable **/
#define TIM8_DIER_CC2DE		(1 << 10)
/** TIM8_DIER_CC1DE Capture/Compare 1 DMA request enable **/
#define TIM8_DIER_CC1DE		(1 << 9)
/** TIM8_DIER_UDE Update DMA request enable **/
#define TIM8_DIER_UDE		(1 << 8)
/** TIM8_DIER_BIE Break interrupt enable **/
#define TIM8_DIER_BIE		(1 << 7)
/** TIM8_DIER_TIE Trigger interrupt enable **/
#define TIM8_DIER_TIE		(1 << 6)
/** TIM8_DIER_COMIE COM interrupt enable **/
#define TIM8_DIER_COMIE		(1 << 5)
/** TIM8_DIER_CC4IE Capture/Compare 4 interrupt enable **/
#define TIM8_DIER_CC4IE		(1 << 4)
/** TIM8_DIER_CC3IE Capture/Compare 3 interrupt enable **/
#define TIM8_DIER_CC3IE		(1 << 3)
/** TIM8_DIER_CC2IE Capture/Compare 2 interrupt enable **/
#define TIM8_DIER_CC2IE		(1 << 2)
/** TIM8_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM8_DIER_CC1IE		(1 << 1)
/** TIM8_DIER_UIE Update interrupt enable **/
#define TIM8_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim8_sr SR status register
@{*/

/** TIM8_SR_CC4OF Capture/Compare 4 overcapture flag **/
#define TIM8_SR_CC4OF		(1 << 12)
/** TIM8_SR_CC3OF Capture/Compare 3 overcapture flag **/
#define TIM8_SR_CC3OF		(1 << 11)
/** TIM8_SR_CC2OF Capture/compare 2 overcapture flag **/
#define TIM8_SR_CC2OF		(1 << 10)
/** TIM8_SR_CC1OF Capture/Compare 1 overcapture flag **/
#define TIM8_SR_CC1OF		(1 << 9)
/** TIM8_SR_BIF Break interrupt flag **/
#define TIM8_SR_BIF		(1 << 7)
/** TIM8_SR_TIF Trigger interrupt flag **/
#define TIM8_SR_TIF		(1 << 6)
/** TIM8_SR_COMIF COM interrupt flag **/
#define TIM8_SR_COMIF		(1 << 5)
/** TIM8_SR_CC4IF Capture/Compare 4 interrupt flag **/
#define TIM8_SR_CC4IF		(1 << 4)
/** TIM8_SR_CC3IF Capture/Compare 3 interrupt flag **/
#define TIM8_SR_CC3IF		(1 << 3)
/** TIM8_SR_CC2IF Capture/Compare 2 interrupt flag **/
#define TIM8_SR_CC2IF		(1 << 2)
/** TIM8_SR_CC1IF Capture/compare 1 interrupt flag **/
#define TIM8_SR_CC1IF		(1 << 1)
/** TIM8_SR_UIF Update interrupt flag **/
#define TIM8_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim8_egr EGR event generation register
@{*/

/** TIM8_EGR_BG Break generation **/
#define TIM8_EGR_BG		(1 << 7)
/** TIM8_EGR_TG Trigger generation **/
#define TIM8_EGR_TG		(1 << 6)
/** TIM8_EGR_COMG Capture/Compare control update generation **/
#define TIM8_EGR_COMG		(1 << 5)
/** TIM8_EGR_CC4G Capture/compare 4 generation **/
#define TIM8_EGR_CC4G		(1 << 4)
/** TIM8_EGR_CC3G Capture/compare 3 generation **/
#define TIM8_EGR_CC3G		(1 << 3)
/** TIM8_EGR_CC2G Capture/compare 2 generation **/
#define TIM8_EGR_CC2G		(1 << 2)
/** TIM8_EGR_CC1G Capture/compare 1 generation **/
#define TIM8_EGR_CC1G		(1 << 1)
/** TIM8_EGR_UG Update generation **/
#define TIM8_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim8_ccmr1_output CCMR1Output capture/compare mode register (output mode)
@{*/

/** TIM8_CCMR1_Output_OC2CE Output Compare 2 clear enable **/
#define TIM8_CCMR1_Output_OC2CE		(1 << 15)

#define TIM8_CCMR1_Output_OC2M_SHIFT		12
#define TIM8_CCMR1_Output_OC2M_MASK		0x07
/** @defgroup tim8_ccmr1_output_oc2m OC2M Output Compare 2 mode
@{*/
/**@}*/

/** TIM8_CCMR1_Output_OC2PE Output Compare 2 preload enable **/
#define TIM8_CCMR1_Output_OC2PE		(1 << 11)
/** TIM8_CCMR1_Output_OC2FE Output Compare 2 fast enable **/
#define TIM8_CCMR1_Output_OC2FE		(1 << 10)

#define TIM8_CCMR1_Output_CC2S_SHIFT		8
#define TIM8_CCMR1_Output_CC2S_MASK		0x03
/** @defgroup tim8_ccmr1_output_cc2s CC2S Capture/Compare 2 selection
@{*/
/**@}*/

/** TIM8_CCMR1_Output_OC1CE Output Compare 1 clear enable **/
#define TIM8_CCMR1_Output_OC1CE		(1 << 7)

#define TIM8_CCMR1_Output_OC1M_SHIFT		4
#define TIM8_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim8_ccmr1_output_oc1m OC1M Output Compare 1 mode
@{*/
/**@}*/

/** TIM8_CCMR1_Output_OC1PE Output Compare 1 preload enable **/
#define TIM8_CCMR1_Output_OC1PE		(1 << 3)
/** TIM8_CCMR1_Output_OC1FE Output Compare 1 fast enable **/
#define TIM8_CCMR1_Output_OC1FE		(1 << 2)

#define TIM8_CCMR1_Output_CC1S_SHIFT		0
#define TIM8_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim8_ccmr1_output_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_ccmr1_input CCMR1Input capture/compare mode register 1 (input mode)
@{*/


#define TIM8_CCMR1_Input_IC2F_SHIFT		12
#define TIM8_CCMR1_Input_IC2F_MASK		0x0f
/** @defgroup tim8_ccmr1_input_ic2f IC2F Input capture 2 filter
@{*/
/**@}*/


#define TIM8_CCMR1_Input_IC2PCS_SHIFT		10
#define TIM8_CCMR1_Input_IC2PCS_MASK		0x03
/** @defgroup tim8_ccmr1_input_ic2pcs IC2PCS Input capture 2 prescaler
@{*/
/**@}*/


#define TIM8_CCMR1_Input_CC2S_SHIFT		8
#define TIM8_CCMR1_Input_CC2S_MASK		0x03
/** @defgroup tim8_ccmr1_input_cc2s CC2S Capture/Compare 2 selection
@{*/
/**@}*/


#define TIM8_CCMR1_Input_IC1F_SHIFT		4
#define TIM8_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim8_ccmr1_input_ic1f IC1F Input capture 1 filter
@{*/
/**@}*/


#define TIM8_CCMR1_Input_ICPCS_SHIFT		2
#define TIM8_CCMR1_Input_ICPCS_MASK		0x03
/** @defgroup tim8_ccmr1_input_icpcs ICPCS Input capture 1 prescaler
@{*/
/**@}*/


#define TIM8_CCMR1_Input_CC1S_SHIFT		0
#define TIM8_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim8_ccmr1_input_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_ccmr2_output CCMR2Output capture/compare mode register (output mode)
@{*/

/** TIM8_CCMR2_Output_OC4CE Output compare 4 clear enable **/
#define TIM8_CCMR2_Output_OC4CE		(1 << 15)

#define TIM8_CCMR2_Output_OC4M_SHIFT		12
#define TIM8_CCMR2_Output_OC4M_MASK		0x07
/** @defgroup tim8_ccmr2_output_oc4m OC4M Output compare 4 mode
@{*/
/**@}*/

/** TIM8_CCMR2_Output_OC4PE Output compare 4 preload enable **/
#define TIM8_CCMR2_Output_OC4PE		(1 << 11)
/** TIM8_CCMR2_Output_OC4FE Output compare 4 fast enable **/
#define TIM8_CCMR2_Output_OC4FE		(1 << 10)

#define TIM8_CCMR2_Output_CC4S_SHIFT		8
#define TIM8_CCMR2_Output_CC4S_MASK		0x03
/** @defgroup tim8_ccmr2_output_cc4s CC4S Capture/Compare 4 selection
@{*/
/**@}*/

/** TIM8_CCMR2_Output_OC3CE Output compare 3 clear enable **/
#define TIM8_CCMR2_Output_OC3CE		(1 << 7)

#define TIM8_CCMR2_Output_OC3M_SHIFT		4
#define TIM8_CCMR2_Output_OC3M_MASK		0x07
/** @defgroup tim8_ccmr2_output_oc3m OC3M Output compare 3 mode
@{*/
/**@}*/

/** TIM8_CCMR2_Output_OC3PE Output compare 3 preload enable **/
#define TIM8_CCMR2_Output_OC3PE		(1 << 3)
/** TIM8_CCMR2_Output_OC3FE Output compare 3 fast enable **/
#define TIM8_CCMR2_Output_OC3FE		(1 << 2)

#define TIM8_CCMR2_Output_CC3S_SHIFT		0
#define TIM8_CCMR2_Output_CC3S_MASK		0x03
/** @defgroup tim8_ccmr2_output_cc3s CC3S Capture/Compare 3 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_ccmr2_input CCMR2Input capture/compare mode register 2 (input mode)
@{*/


#define TIM8_CCMR2_Input_IC4F_SHIFT		12
#define TIM8_CCMR2_Input_IC4F_MASK		0x0f
/** @defgroup tim8_ccmr2_input_ic4f IC4F Input capture 4 filter
@{*/
/**@}*/


#define TIM8_CCMR2_Input_IC4PSC_SHIFT		10
#define TIM8_CCMR2_Input_IC4PSC_MASK		0x03
/** @defgroup tim8_ccmr2_input_ic4psc IC4PSC Input capture 4 prescaler
@{*/
/**@}*/


#define TIM8_CCMR2_Input_CC4S_SHIFT		8
#define TIM8_CCMR2_Input_CC4S_MASK		0x03
/** @defgroup tim8_ccmr2_input_cc4s CC4S Capture/Compare 4 selection
@{*/
/**@}*/


#define TIM8_CCMR2_Input_IC3F_SHIFT		4
#define TIM8_CCMR2_Input_IC3F_MASK		0x0f
/** @defgroup tim8_ccmr2_input_ic3f IC3F Input capture 3 filter
@{*/
/**@}*/


#define TIM8_CCMR2_Input_IC3PSC_SHIFT		2
#define TIM8_CCMR2_Input_IC3PSC_MASK		0x03
/** @defgroup tim8_ccmr2_input_ic3psc IC3PSC Input capture 3 prescaler
@{*/
/**@}*/


#define TIM8_CCMR2_Input_CC3S_SHIFT		0
#define TIM8_CCMR2_Input_CC3S_MASK		0x03
/** @defgroup tim8_ccmr2_input_cc3s CC3S Capture/compare 3 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_ccer CCER capture/compare enable register
@{*/

/** TIM8_CCER_CC4P Capture/Compare 3 output Polarity **/
#define TIM8_CCER_CC4P		(1 << 13)
/** TIM8_CCER_CC4E Capture/Compare 4 output enable **/
#define TIM8_CCER_CC4E		(1 << 12)
/** TIM8_CCER_CC3NP Capture/Compare 3 output Polarity **/
#define TIM8_CCER_CC3NP		(1 << 11)
/** TIM8_CCER_CC3NE Capture/Compare 3 complementary output enable **/
#define TIM8_CCER_CC3NE		(1 << 10)
/** TIM8_CCER_CC3P Capture/Compare 3 output Polarity **/
#define TIM8_CCER_CC3P		(1 << 9)
/** TIM8_CCER_CC3E Capture/Compare 3 output enable **/
#define TIM8_CCER_CC3E		(1 << 8)
/** TIM8_CCER_CC2NP Capture/Compare 2 output Polarity **/
#define TIM8_CCER_CC2NP		(1 << 7)
/** TIM8_CCER_CC2NE Capture/Compare 2 complementary output enable **/
#define TIM8_CCER_CC2NE		(1 << 6)
/** TIM8_CCER_CC2P Capture/Compare 2 output Polarity **/
#define TIM8_CCER_CC2P		(1 << 5)
/** TIM8_CCER_CC2E Capture/Compare 2 output enable **/
#define TIM8_CCER_CC2E		(1 << 4)
/** TIM8_CCER_CC1NP Capture/Compare 1 output Polarity **/
#define TIM8_CCER_CC1NP		(1 << 3)
/** TIM8_CCER_CC1NE Capture/Compare 1 complementary output enable **/
#define TIM8_CCER_CC1NE		(1 << 2)
/** TIM8_CCER_CC1P Capture/Compare 1 output Polarity **/
#define TIM8_CCER_CC1P		(1 << 1)
/** TIM8_CCER_CC1E Capture/Compare 1 output enable **/
#define TIM8_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim8_cnt CNT counter
@{*/


#define TIM8_CNT_CNT_SHIFT		0
#define TIM8_CNT_CNT_MASK		0xffff
/** @defgroup tim8_cnt_cnt CNT counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_psc PSC prescaler
@{*/


#define TIM8_PSC_PSC_SHIFT		0
#define TIM8_PSC_PSC_MASK		0xffff
/** @defgroup tim8_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_arr ARR auto-reload register
@{*/


#define TIM8_ARR_ARR_SHIFT		0
#define TIM8_ARR_ARR_MASK		0xffff
/** @defgroup tim8_arr_arr ARR Auto-reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_rcr RCR repetition counter register
@{*/


#define TIM8_RCR_REP_SHIFT		0
#define TIM8_RCR_REP_MASK		0xff
/** @defgroup tim8_rcr_rep REP Repetition counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_ccr1 CCR1 capture/compare register 1
@{*/


#define TIM8_CCR1_CCR1_SHIFT		0
#define TIM8_CCR1_CCR1_MASK		0xffff
/** @defgroup tim8_ccr1_ccr1 CCR1 Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_ccr2 CCR2 capture/compare register 2
@{*/


#define TIM8_CCR2_CCR2_SHIFT		0
#define TIM8_CCR2_CCR2_MASK		0xffff
/** @defgroup tim8_ccr2_ccr2 CCR2 Capture/Compare 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_ccr3 CCR3 capture/compare register 3
@{*/


#define TIM8_CCR3_CCR3_SHIFT		0
#define TIM8_CCR3_CCR3_MASK		0xffff
/** @defgroup tim8_ccr3_ccr3 CCR3 Capture/Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_ccr4 CCR4 capture/compare register 4
@{*/


#define TIM8_CCR4_CCR4_SHIFT		0
#define TIM8_CCR4_CCR4_MASK		0xffff
/** @defgroup tim8_ccr4_ccr4 CCR4 Capture/Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_bdtr BDTR break and dead-time register
@{*/

/** TIM8_BDTR_MOE Main output enable **/
#define TIM8_BDTR_MOE		(1 << 15)
/** TIM8_BDTR_AOE Automatic output enable **/
#define TIM8_BDTR_AOE		(1 << 14)
/** TIM8_BDTR_BKP Break polarity **/
#define TIM8_BDTR_BKP		(1 << 13)
/** TIM8_BDTR_BKE Break enable **/
#define TIM8_BDTR_BKE		(1 << 12)
/** TIM8_BDTR_OSSR Off-state selection for Run mode **/
#define TIM8_BDTR_OSSR		(1 << 11)
/** TIM8_BDTR_OSSI Off-state selection for Idle mode **/
#define TIM8_BDTR_OSSI		(1 << 10)

#define TIM8_BDTR_LOCK_SHIFT		8
#define TIM8_BDTR_LOCK_MASK		0x03
/** @defgroup tim8_bdtr_lock LOCK Lock configuration
@{*/
/**@}*/


#define TIM8_BDTR_DTG_SHIFT		0
#define TIM8_BDTR_DTG_MASK		0xff
/** @defgroup tim8_bdtr_dtg DTG Dead-time generator setup
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_dcr DCR DMA control register
@{*/


#define TIM8_DCR_DBL_SHIFT		8
#define TIM8_DCR_DBL_MASK		0x1f
/** @defgroup tim8_dcr_dbl DBL DMA burst length
@{*/
/**@}*/


#define TIM8_DCR_DBA_SHIFT		0
#define TIM8_DCR_DBA_MASK		0x1f
/** @defgroup tim8_dcr_dba DBA DMA base address
@{*/
/**@}*/


/**@}*/

/** @defgroup tim8_dmar DMAR DMA address for full transfer
@{*/


#define TIM8_DMAR_DMAB_SHIFT		0
#define TIM8_DMAR_DMAB_MASK		0xffff
/** @defgroup tim8_dmar_dmab DMAB DMA register for burst accesses
@{*/
/**@}*/


/**@}*/

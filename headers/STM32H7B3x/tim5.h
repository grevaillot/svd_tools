#pragma once 

/* --- TIM5: General purpose timers --------------------------------- */

/** @defgroup tim5_registers General purpose timers Register
@{*/

/** TIM5_CR1 control register 1 **/
#define TIM5_CR1			MMIO32(TIM5_BASE + 0x00)
/** TIM5_CR2 control register 2 **/
#define TIM5_CR2			MMIO32(TIM5_BASE + 0x04)
/** TIM5_SMCR slave mode control register **/
#define TIM5_SMCR			MMIO32(TIM5_BASE + 0x08)
/** TIM5_DIER DMA/Interrupt enable register **/
#define TIM5_DIER			MMIO32(TIM5_BASE + 0x0c)
/** TIM5_SR status register **/
#define TIM5_SR			MMIO32(TIM5_BASE + 0x10)
/** TIM5_EGR event generation register **/
#define TIM5_EGR			MMIO32(TIM5_BASE + 0x14)
/** TIM5_CCMR1_Output capture/compare mode register 1 (output mode) **/
#define TIM5_CCMR1_Output			MMIO32(TIM5_BASE + 0x18)
/** TIM5_CCMR1_Input capture/compare mode register 1 (input mode) **/
#define TIM5_CCMR1_Input			MMIO32(TIM5_BASE + 0x18)
/** TIM5_CCMR2_Output capture/compare mode register 2 (output mode) **/
#define TIM5_CCMR2_Output			MMIO32(TIM5_BASE + 0x1c)
/** TIM5_CCMR2_Input capture/compare mode register 2 (input mode) **/
#define TIM5_CCMR2_Input			MMIO32(TIM5_BASE + 0x1c)
/** TIM5_CCER capture/compare enable register **/
#define TIM5_CCER			MMIO32(TIM5_BASE + 0x20)
/** TIM5_CNT counter **/
#define TIM5_CNT			MMIO32(TIM5_BASE + 0x24)
/** TIM5_PSC prescaler **/
#define TIM5_PSC			MMIO32(TIM5_BASE + 0x28)
/** TIM5_ARR auto-reload register **/
#define TIM5_ARR			MMIO32(TIM5_BASE + 0x2c)
/** TIM5_CCR1 capture/compare register 1 **/
#define TIM5_CCR1			MMIO32(TIM5_BASE + 0x34)
/** TIM5_CCR2 capture/compare register 2 **/
#define TIM5_CCR2			MMIO32(TIM5_BASE + 0x38)
/** TIM5_CCR3 capture/compare register 3 **/
#define TIM5_CCR3			MMIO32(TIM5_BASE + 0x3c)
/** TIM5_CCR4 capture/compare register 4 **/
#define TIM5_CCR4			MMIO32(TIM5_BASE + 0x40)
/** TIM5_DCR DMA control register **/
#define TIM5_DCR			MMIO32(TIM5_BASE + 0x48)
/** TIM5_DMAR DMA address for full transfer **/
#define TIM5_DMAR			MMIO32(TIM5_BASE + 0x4c)
/** TIM5_AF1 TIM alternate function option register 1 **/
#define TIM5_AF1			MMIO32(TIM5_BASE + 0x60)
/** TIM5_TISEL TIM timer input selection register **/
#define TIM5_TISEL			MMIO32(TIM5_BASE + 0x68)

/**@}*/


/** @defgroup tim5_cr1 CR1 control register 1
@{*/

/** TIM5_CR1_UIFREMAP UIF status bit remapping **/
#define TIM5_CR1_UIFREMAP		(1 << 11)

#define TIM5_CR1_CKD_SHIFT		8
#define TIM5_CR1_CKD_MASK		0x03
/** @defgroup tim5_cr1_ckd CKD Clock division
@{*/
/**@}*/

/** TIM5_CR1_ARPE Auto-reload preload enable **/
#define TIM5_CR1_ARPE		(1 << 7)

#define TIM5_CR1_CMS_SHIFT		5
#define TIM5_CR1_CMS_MASK		0x03
/** @defgroup tim5_cr1_cms CMS Center-aligned mode selection
@{*/
/**@}*/

/** TIM5_CR1_DIR Direction **/
#define TIM5_CR1_DIR		(1 << 4)
/** TIM5_CR1_OPM One-pulse mode **/
#define TIM5_CR1_OPM		(1 << 3)
/** TIM5_CR1_URS Update request source **/
#define TIM5_CR1_URS		(1 << 2)
/** TIM5_CR1_UDIS Update disable **/
#define TIM5_CR1_UDIS		(1 << 1)
/** TIM5_CR1_CEN Counter enable **/
#define TIM5_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim5_cr2 CR2 control register 2
@{*/

/** TIM5_CR2_TI1S TI1 selection **/
#define TIM5_CR2_TI1S		(1 << 7)

#define TIM5_CR2_MMS_SHIFT		4
#define TIM5_CR2_MMS_MASK		0x07
/** @defgroup tim5_cr2_mms MMS Master mode selection
@{*/
/**@}*/

/** TIM5_CR2_CCDS Capture/compare DMA selection **/
#define TIM5_CR2_CCDS		(1 << 3)

/**@}*/

/** @defgroup tim5_smcr SMCR slave mode control register
@{*/


#define TIM5_SMCR_TS_4_3_SHIFT		20
#define TIM5_SMCR_TS_4_3_MASK		0x03
/** @defgroup tim5_smcr_ts_4_3 TS43 Trigger selection
@{*/
/**@}*/

/** TIM5_SMCR_SMS_3 Slave mode selection - bit 3 **/
#define TIM5_SMCR_SMS_3		(1 << 16)
/** TIM5_SMCR_ETP External trigger polarity **/
#define TIM5_SMCR_ETP		(1 << 15)
/** TIM5_SMCR_ECE External clock enable **/
#define TIM5_SMCR_ECE		(1 << 14)

#define TIM5_SMCR_ETPS_SHIFT		12
#define TIM5_SMCR_ETPS_MASK		0x03
/** @defgroup tim5_smcr_etps ETPS External trigger prescaler
@{*/
/**@}*/


#define TIM5_SMCR_ETF_SHIFT		8
#define TIM5_SMCR_ETF_MASK		0x0f
/** @defgroup tim5_smcr_etf ETF External trigger filter
@{*/
/**@}*/

/** TIM5_SMCR_MSM Master/Slave mode **/
#define TIM5_SMCR_MSM		(1 << 7)

#define TIM5_SMCR_TS_SHIFT		4
#define TIM5_SMCR_TS_MASK		0x07
/** @defgroup tim5_smcr_ts TS Trigger selection
@{*/
/**@}*/


#define TIM5_SMCR_SMS_SHIFT		0
#define TIM5_SMCR_SMS_MASK		0x07
/** @defgroup tim5_smcr_sms SMS Slave mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_dier DIER DMA/Interrupt enable register
@{*/

/** TIM5_DIER_TDE Trigger DMA request enable **/
#define TIM5_DIER_TDE		(1 << 14)
/** TIM5_DIER_CC4DE Capture/Compare 4 DMA request enable **/
#define TIM5_DIER_CC4DE		(1 << 12)
/** TIM5_DIER_CC3DE Capture/Compare 3 DMA request enable **/
#define TIM5_DIER_CC3DE		(1 << 11)
/** TIM5_DIER_CC2DE Capture/Compare 2 DMA request enable **/
#define TIM5_DIER_CC2DE		(1 << 10)
/** TIM5_DIER_CC1DE Capture/Compare 1 DMA request enable **/
#define TIM5_DIER_CC1DE		(1 << 9)
/** TIM5_DIER_UDE Update DMA request enable **/
#define TIM5_DIER_UDE		(1 << 8)
/** TIM5_DIER_TIE Trigger interrupt enable **/
#define TIM5_DIER_TIE		(1 << 6)
/** TIM5_DIER_CC4IE Capture/Compare 4 interrupt enable **/
#define TIM5_DIER_CC4IE		(1 << 4)
/** TIM5_DIER_CC3IE Capture/Compare 3 interrupt enable **/
#define TIM5_DIER_CC3IE		(1 << 3)
/** TIM5_DIER_CC2IE Capture/Compare 2 interrupt enable **/
#define TIM5_DIER_CC2IE		(1 << 2)
/** TIM5_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM5_DIER_CC1IE		(1 << 1)
/** TIM5_DIER_UIE Update interrupt enable **/
#define TIM5_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim5_sr SR status register
@{*/

/** TIM5_SR_CC4OF Capture/Compare 4 overcapture flag **/
#define TIM5_SR_CC4OF		(1 << 12)
/** TIM5_SR_CC3OF Capture/Compare 3 overcapture flag **/
#define TIM5_SR_CC3OF		(1 << 11)
/** TIM5_SR_CC2OF Capture/compare 2 overcapture flag **/
#define TIM5_SR_CC2OF		(1 << 10)
/** TIM5_SR_CC1OF Capture/Compare 1 overcapture flag **/
#define TIM5_SR_CC1OF		(1 << 9)
/** TIM5_SR_TIF Trigger interrupt flag **/
#define TIM5_SR_TIF		(1 << 6)
/** TIM5_SR_CC4IF Capture/Compare 4 interrupt flag **/
#define TIM5_SR_CC4IF		(1 << 4)
/** TIM5_SR_CC3IF Capture/Compare 3 interrupt flag **/
#define TIM5_SR_CC3IF		(1 << 3)
/** TIM5_SR_CC2IF Capture/Compare 2 interrupt flag **/
#define TIM5_SR_CC2IF		(1 << 2)
/** TIM5_SR_CC1IF Capture/compare 1 interrupt flag **/
#define TIM5_SR_CC1IF		(1 << 1)
/** TIM5_SR_UIF Update interrupt flag **/
#define TIM5_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim5_egr EGR event generation register
@{*/

/** TIM5_EGR_TG Trigger generation **/
#define TIM5_EGR_TG		(1 << 6)
/** TIM5_EGR_CC4G Capture/compare 4 generation **/
#define TIM5_EGR_CC4G		(1 << 4)
/** TIM5_EGR_CC3G Capture/compare 3 generation **/
#define TIM5_EGR_CC3G		(1 << 3)
/** TIM5_EGR_CC2G Capture/compare 2 generation **/
#define TIM5_EGR_CC2G		(1 << 2)
/** TIM5_EGR_CC1G Capture/compare 1 generation **/
#define TIM5_EGR_CC1G		(1 << 1)
/** TIM5_EGR_UG Update generation **/
#define TIM5_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim5_ccmr1_output CCMR1Output capture/compare mode register 1 (output mode)
@{*/

/** TIM5_CCMR1_Output_OC2M_3 Output Compare 2 mode - bit 3 **/
#define TIM5_CCMR1_Output_OC2M_3		(1 << 24)
/** TIM5_CCMR1_Output_OC1M_3 Output Compare 1 mode - bit 3 **/
#define TIM5_CCMR1_Output_OC1M_3		(1 << 16)
/** TIM5_CCMR1_Output_OC2CE OC2CE **/
#define TIM5_CCMR1_Output_OC2CE		(1 << 15)

#define TIM5_CCMR1_Output_OC2M_SHIFT		12
#define TIM5_CCMR1_Output_OC2M_MASK		0x07
/** @defgroup tim5_ccmr1_output_oc2m OC2M OC2M
@{*/
/**@}*/

/** TIM5_CCMR1_Output_OC2PE OC2PE **/
#define TIM5_CCMR1_Output_OC2PE		(1 << 11)
/** TIM5_CCMR1_Output_OC2FE OC2FE **/
#define TIM5_CCMR1_Output_OC2FE		(1 << 10)

#define TIM5_CCMR1_Output_CC2S_SHIFT		8
#define TIM5_CCMR1_Output_CC2S_MASK		0x03
/** @defgroup tim5_ccmr1_output_cc2s CC2S CC2S
@{*/
/**@}*/

/** TIM5_CCMR1_Output_OC1CE OC1CE **/
#define TIM5_CCMR1_Output_OC1CE		(1 << 7)

#define TIM5_CCMR1_Output_OC1M_SHIFT		4
#define TIM5_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim5_ccmr1_output_oc1m OC1M OC1M
@{*/
/**@}*/

/** TIM5_CCMR1_Output_OC1PE OC1PE **/
#define TIM5_CCMR1_Output_OC1PE		(1 << 3)
/** TIM5_CCMR1_Output_OC1FE OC1FE **/
#define TIM5_CCMR1_Output_OC1FE		(1 << 2)

#define TIM5_CCMR1_Output_CC1S_SHIFT		0
#define TIM5_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim5_ccmr1_output_cc1s CC1S CC1S
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_ccmr1_input CCMR1Input capture/compare mode register 1 (input mode)
@{*/


#define TIM5_CCMR1_Input_IC2F_SHIFT		12
#define TIM5_CCMR1_Input_IC2F_MASK		0x0f
/** @defgroup tim5_ccmr1_input_ic2f IC2F Input capture 2 filter
@{*/
/**@}*/


#define TIM5_CCMR1_Input_IC2PCS_SHIFT		10
#define TIM5_CCMR1_Input_IC2PCS_MASK		0x03
/** @defgroup tim5_ccmr1_input_ic2pcs IC2PCS Input capture 2 prescaler
@{*/
/**@}*/


#define TIM5_CCMR1_Input_CC2S_SHIFT		8
#define TIM5_CCMR1_Input_CC2S_MASK		0x03
/** @defgroup tim5_ccmr1_input_cc2s CC2S Capture/Compare 2 selection
@{*/
/**@}*/


#define TIM5_CCMR1_Input_IC1F_SHIFT		4
#define TIM5_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim5_ccmr1_input_ic1f IC1F Input capture 1 filter
@{*/
/**@}*/


#define TIM5_CCMR1_Input_ICPCS_SHIFT		2
#define TIM5_CCMR1_Input_ICPCS_MASK		0x03
/** @defgroup tim5_ccmr1_input_icpcs ICPCS Input capture 1 prescaler
@{*/
/**@}*/


#define TIM5_CCMR1_Input_CC1S_SHIFT		0
#define TIM5_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim5_ccmr1_input_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_ccmr2_output CCMR2Output capture/compare mode register 2 (output mode)
@{*/

/** TIM5_CCMR2_Output_OC4M_3 Output Compare 2 mode - bit 3 **/
#define TIM5_CCMR2_Output_OC4M_3		(1 << 24)
/** TIM5_CCMR2_Output_OC3M_3 Output Compare 1 mode - bit 3 **/
#define TIM5_CCMR2_Output_OC3M_3		(1 << 16)
/** TIM5_CCMR2_Output_O24CE O24CE **/
#define TIM5_CCMR2_Output_O24CE		(1 << 15)

#define TIM5_CCMR2_Output_OC4M_SHIFT		12
#define TIM5_CCMR2_Output_OC4M_MASK		0x07
/** @defgroup tim5_ccmr2_output_oc4m OC4M OC4M
@{*/
/**@}*/

/** TIM5_CCMR2_Output_OC4PE OC4PE **/
#define TIM5_CCMR2_Output_OC4PE		(1 << 11)
/** TIM5_CCMR2_Output_OC4FE OC4FE **/
#define TIM5_CCMR2_Output_OC4FE		(1 << 10)

#define TIM5_CCMR2_Output_CC4S_SHIFT		8
#define TIM5_CCMR2_Output_CC4S_MASK		0x03
/** @defgroup tim5_ccmr2_output_cc4s CC4S CC4S
@{*/
/**@}*/

/** TIM5_CCMR2_Output_OC3CE OC3CE **/
#define TIM5_CCMR2_Output_OC3CE		(1 << 7)

#define TIM5_CCMR2_Output_OC3M_SHIFT		4
#define TIM5_CCMR2_Output_OC3M_MASK		0x07
/** @defgroup tim5_ccmr2_output_oc3m OC3M OC3M
@{*/
/**@}*/

/** TIM5_CCMR2_Output_OC3PE OC3PE **/
#define TIM5_CCMR2_Output_OC3PE		(1 << 3)
/** TIM5_CCMR2_Output_OC3FE OC3FE **/
#define TIM5_CCMR2_Output_OC3FE		(1 << 2)

#define TIM5_CCMR2_Output_CC3S_SHIFT		0
#define TIM5_CCMR2_Output_CC3S_MASK		0x03
/** @defgroup tim5_ccmr2_output_cc3s CC3S CC3S
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_ccmr2_input CCMR2Input capture/compare mode register 2 (input mode)
@{*/


#define TIM5_CCMR2_Input_IC4F_SHIFT		12
#define TIM5_CCMR2_Input_IC4F_MASK		0x0f
/** @defgroup tim5_ccmr2_input_ic4f IC4F Input capture 4 filter
@{*/
/**@}*/


#define TIM5_CCMR2_Input_IC4PSC_SHIFT		10
#define TIM5_CCMR2_Input_IC4PSC_MASK		0x03
/** @defgroup tim5_ccmr2_input_ic4psc IC4PSC Input capture 4 prescaler
@{*/
/**@}*/


#define TIM5_CCMR2_Input_CC4S_SHIFT		8
#define TIM5_CCMR2_Input_CC4S_MASK		0x03
/** @defgroup tim5_ccmr2_input_cc4s CC4S Capture/Compare 4 selection
@{*/
/**@}*/


#define TIM5_CCMR2_Input_IC3F_SHIFT		4
#define TIM5_CCMR2_Input_IC3F_MASK		0x0f
/** @defgroup tim5_ccmr2_input_ic3f IC3F Input capture 3 filter
@{*/
/**@}*/


#define TIM5_CCMR2_Input_IC3PSC_SHIFT		2
#define TIM5_CCMR2_Input_IC3PSC_MASK		0x03
/** @defgroup tim5_ccmr2_input_ic3psc IC3PSC Input capture 3 prescaler
@{*/
/**@}*/


#define TIM5_CCMR2_Input_CC3S_SHIFT		0
#define TIM5_CCMR2_Input_CC3S_MASK		0x03
/** @defgroup tim5_ccmr2_input_cc3s CC3S Capture/compare 3 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_ccer CCER capture/compare enable register
@{*/

/** TIM5_CCER_CC4NP Capture/Compare 4 output Polarity **/
#define TIM5_CCER_CC4NP		(1 << 15)
/** TIM5_CCER_CC4P Capture/Compare 3 output Polarity **/
#define TIM5_CCER_CC4P		(1 << 13)
/** TIM5_CCER_CC4E Capture/Compare 4 output enable **/
#define TIM5_CCER_CC4E		(1 << 12)
/** TIM5_CCER_CC3NP Capture/Compare 3 output Polarity **/
#define TIM5_CCER_CC3NP		(1 << 11)
/** TIM5_CCER_CC3P Capture/Compare 3 output Polarity **/
#define TIM5_CCER_CC3P		(1 << 9)
/** TIM5_CCER_CC3E Capture/Compare 3 output enable **/
#define TIM5_CCER_CC3E		(1 << 8)
/** TIM5_CCER_CC2NP Capture/Compare 2 output Polarity **/
#define TIM5_CCER_CC2NP		(1 << 7)
/** TIM5_CCER_CC2P Capture/Compare 2 output Polarity **/
#define TIM5_CCER_CC2P		(1 << 5)
/** TIM5_CCER_CC2E Capture/Compare 2 output enable **/
#define TIM5_CCER_CC2E		(1 << 4)
/** TIM5_CCER_CC1NP Capture/Compare 1 output Polarity **/
#define TIM5_CCER_CC1NP		(1 << 3)
/** TIM5_CCER_CC1P Capture/Compare 1 output Polarity **/
#define TIM5_CCER_CC1P		(1 << 1)
/** TIM5_CCER_CC1E Capture/Compare 1 output enable **/
#define TIM5_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim5_cnt CNT counter
@{*/


#define TIM5_CNT_CNT_H_SHIFT		16
#define TIM5_CNT_CNT_H_MASK		0xffff
/** @defgroup tim5_cnt_cnt_h CNTH High counter value
@{*/
/**@}*/


#define TIM5_CNT_CNT_L_SHIFT		0
#define TIM5_CNT_CNT_L_MASK		0xffff
/** @defgroup tim5_cnt_cnt_l CNTL low counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_psc PSC prescaler
@{*/


#define TIM5_PSC_PSC_SHIFT		0
#define TIM5_PSC_PSC_MASK		0xffff
/** @defgroup tim5_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_arr ARR auto-reload register
@{*/


#define TIM5_ARR_ARR_H_SHIFT		16
#define TIM5_ARR_ARR_H_MASK		0xffff
/** @defgroup tim5_arr_arr_h ARRH High Auto-reload value
@{*/
/**@}*/


#define TIM5_ARR_ARR_L_SHIFT		0
#define TIM5_ARR_ARR_L_MASK		0xffff
/** @defgroup tim5_arr_arr_l ARRL Low Auto-reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_ccr1 CCR1 capture/compare register 1
@{*/


#define TIM5_CCR1_CCR1_H_SHIFT		16
#define TIM5_CCR1_CCR1_H_MASK		0xffff
/** @defgroup tim5_ccr1_ccr1_h CCR1H High Capture/Compare 1 value
@{*/
/**@}*/


#define TIM5_CCR1_CCR1_L_SHIFT		0
#define TIM5_CCR1_CCR1_L_MASK		0xffff
/** @defgroup tim5_ccr1_ccr1_l CCR1L Low Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_ccr2 CCR2 capture/compare register 2
@{*/


#define TIM5_CCR2_CCR2_H_SHIFT		16
#define TIM5_CCR2_CCR2_H_MASK		0xffff
/** @defgroup tim5_ccr2_ccr2_h CCR2H High Capture/Compare 2 value
@{*/
/**@}*/


#define TIM5_CCR2_CCR2_L_SHIFT		0
#define TIM5_CCR2_CCR2_L_MASK		0xffff
/** @defgroup tim5_ccr2_ccr2_l CCR2L Low Capture/Compare 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_ccr3 CCR3 capture/compare register 3
@{*/


#define TIM5_CCR3_CCR3_H_SHIFT		16
#define TIM5_CCR3_CCR3_H_MASK		0xffff
/** @defgroup tim5_ccr3_ccr3_h CCR3H High Capture/Compare value
@{*/
/**@}*/


#define TIM5_CCR3_CCR3_L_SHIFT		0
#define TIM5_CCR3_CCR3_L_MASK		0xffff
/** @defgroup tim5_ccr3_ccr3_l CCR3L Low Capture/Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_ccr4 CCR4 capture/compare register 4
@{*/


#define TIM5_CCR4_CCR4_H_SHIFT		16
#define TIM5_CCR4_CCR4_H_MASK		0xffff
/** @defgroup tim5_ccr4_ccr4_h CCR4H High Capture/Compare value
@{*/
/**@}*/


#define TIM5_CCR4_CCR4_L_SHIFT		0
#define TIM5_CCR4_CCR4_L_MASK		0xffff
/** @defgroup tim5_ccr4_ccr4_l CCR4L Low Capture/Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_dcr DCR DMA control register
@{*/


#define TIM5_DCR_DBL_SHIFT		8
#define TIM5_DCR_DBL_MASK		0x1f
/** @defgroup tim5_dcr_dbl DBL DMA burst length
@{*/
/**@}*/


#define TIM5_DCR_DBA_SHIFT		0
#define TIM5_DCR_DBA_MASK		0x1f
/** @defgroup tim5_dcr_dba DBA DMA base address
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_dmar DMAR DMA address for full transfer
@{*/


#define TIM5_DMAR_DMAB_SHIFT		0
#define TIM5_DMAR_DMAB_MASK		0xffff
/** @defgroup tim5_dmar_dmab DMAB DMA register for burst accesses
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_af1 AF1 TIM alternate function option register 1
@{*/


#define TIM5_AF1_ETRSEL_SHIFT		14
#define TIM5_AF1_ETRSEL_MASK		0x0f
/** @defgroup tim5_af1_etrsel ETRSEL ETR source selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim5_tisel TISEL TIM timer input selection register
@{*/


#define TIM5_TISEL_TI4SEL_SHIFT		24
#define TIM5_TISEL_TI4SEL_MASK		0x0f
/** @defgroup tim5_tisel_ti4sel TI4SEL TI4[0] to TI4[15] input selection
@{*/
/**@}*/


#define TIM5_TISEL_TI3SEL_SHIFT		16
#define TIM5_TISEL_TI3SEL_MASK		0x0f
/** @defgroup tim5_tisel_ti3sel TI3SEL TI3[0] to TI3[15] input selection
@{*/
/**@}*/


#define TIM5_TISEL_TI2SEL_SHIFT		8
#define TIM5_TISEL_TI2SEL_MASK		0x0f
/** @defgroup tim5_tisel_ti2sel TI2SEL TI2[0] to TI2[15] input selection
@{*/
/**@}*/


#define TIM5_TISEL_TI1SEL_SHIFT		0
#define TIM5_TISEL_TI1SEL_MASK		0x0f
/** @defgroup tim5_tisel_ti1sel TI1SEL TI1[0] to TI1[15] input selection
@{*/
/**@}*/


/**@}*/

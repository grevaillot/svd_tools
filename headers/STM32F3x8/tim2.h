#pragma once 

/* --- TIM2: General purpose timer ---------------------------------- */

/** @defgroup tim2_registers General purpose timer Register
@{*/

/** TIM2_CR1 control register 1 **/
#define TIM2_CR1			MMIO32(TIM2_BASE + 0x00)
/** TIM2_CR2 control register 2 **/
#define TIM2_CR2			MMIO32(TIM2_BASE + 0x04)
/** TIM2_SMCR slave mode control register **/
#define TIM2_SMCR			MMIO32(TIM2_BASE + 0x08)
/** TIM2_DIER DMA/Interrupt enable register **/
#define TIM2_DIER			MMIO32(TIM2_BASE + 0x0c)
/** TIM2_SR status register **/
#define TIM2_SR			MMIO32(TIM2_BASE + 0x10)
/** TIM2_EGR event generation register **/
#define TIM2_EGR			MMIO32(TIM2_BASE + 0x14)
/** TIM2_CCMR1_Output capture/compare mode register 1 (output mode) **/
#define TIM2_CCMR1_Output			MMIO32(TIM2_BASE + 0x18)
/** TIM2_CCMR1_Input capture/compare mode register 1 (input mode) **/
#define TIM2_CCMR1_Input			MMIO32(TIM2_BASE + 0x18)
/** TIM2_CCMR2_Output capture/compare mode register 2 (output mode) **/
#define TIM2_CCMR2_Output			MMIO32(TIM2_BASE + 0x1c)
/** TIM2_CCMR2_Input capture/compare mode register 2 (input mode) **/
#define TIM2_CCMR2_Input			MMIO32(TIM2_BASE + 0x1c)
/** TIM2_CCER capture/compare enable register **/
#define TIM2_CCER			MMIO32(TIM2_BASE + 0x20)
/** TIM2_CNT counter **/
#define TIM2_CNT			MMIO32(TIM2_BASE + 0x24)
/** TIM2_PSC prescaler **/
#define TIM2_PSC			MMIO32(TIM2_BASE + 0x28)
/** TIM2_ARR auto-reload register **/
#define TIM2_ARR			MMIO32(TIM2_BASE + 0x2c)
/** TIM2_CCR1 capture/compare register 1 **/
#define TIM2_CCR1			MMIO32(TIM2_BASE + 0x34)
/** TIM2_CCR2 capture/compare register 2 **/
#define TIM2_CCR2			MMIO32(TIM2_BASE + 0x38)
/** TIM2_CCR3 capture/compare register 3 **/
#define TIM2_CCR3			MMIO32(TIM2_BASE + 0x3c)
/** TIM2_CCR4 capture/compare register 4 **/
#define TIM2_CCR4			MMIO32(TIM2_BASE + 0x40)
/** TIM2_DCR DMA control register **/
#define TIM2_DCR			MMIO32(TIM2_BASE + 0x48)
/** TIM2_DMAR DMA address for full transfer **/
#define TIM2_DMAR			MMIO32(TIM2_BASE + 0x4c)
/** TIM2_OR option register **/
#define TIM2_OR			MMIO32(TIM2_BASE + 0x50)

/**@}*/


/** @defgroup tim2_cr1 CR1 control register 1
@{*/


#define TIM2_CR1_CKD_SHIFT		8
#define TIM2_CR1_CKD_MASK		0x03
/** @defgroup tim2_cr1_ckd CKD Clock division
@{*/
/**@}*/

/** TIM2_CR1_ARPE Auto-reload preload enable **/
#define TIM2_CR1_ARPE		(1 << 7)

#define TIM2_CR1_CMS_SHIFT		5
#define TIM2_CR1_CMS_MASK		0x03
/** @defgroup tim2_cr1_cms CMS Center-aligned mode selection
@{*/
/**@}*/

/** TIM2_CR1_DIR Direction **/
#define TIM2_CR1_DIR		(1 << 4)
/** TIM2_CR1_OPM One-pulse mode **/
#define TIM2_CR1_OPM		(1 << 3)
/** TIM2_CR1_URS Update request source **/
#define TIM2_CR1_URS		(1 << 2)
/** TIM2_CR1_UDIS Update disable **/
#define TIM2_CR1_UDIS		(1 << 1)
/** TIM2_CR1_CEN Counter enable **/
#define TIM2_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim2_cr2 CR2 control register 2
@{*/

/** TIM2_CR2_TI1S TI1 selection **/
#define TIM2_CR2_TI1S		(1 << 7)

#define TIM2_CR2_MMS_SHIFT		4
#define TIM2_CR2_MMS_MASK		0x07
/** @defgroup tim2_cr2_mms MMS Master mode selection
@{*/
/**@}*/

/** TIM2_CR2_CCDS Capture/compare DMA selection **/
#define TIM2_CR2_CCDS		(1 << 3)

/**@}*/

/** @defgroup tim2_smcr SMCR slave mode control register
@{*/

/** TIM2_SMCR_ETP External trigger polarity **/
#define TIM2_SMCR_ETP		(1 << 15)
/** TIM2_SMCR_ECE External clock enable **/
#define TIM2_SMCR_ECE		(1 << 14)

#define TIM2_SMCR_ETPS_SHIFT		12
#define TIM2_SMCR_ETPS_MASK		0x03
/** @defgroup tim2_smcr_etps ETPS External trigger prescaler
@{*/
/**@}*/


#define TIM2_SMCR_ETF_SHIFT		8
#define TIM2_SMCR_ETF_MASK		0x0f
/** @defgroup tim2_smcr_etf ETF External trigger filter
@{*/
/**@}*/

/** TIM2_SMCR_MSM Master/Slave mode **/
#define TIM2_SMCR_MSM		(1 << 7)

#define TIM2_SMCR_TS_SHIFT		4
#define TIM2_SMCR_TS_MASK		0x07
/** @defgroup tim2_smcr_ts TS Trigger selection
@{*/
/**@}*/


#define TIM2_SMCR_SMS_SHIFT		0
#define TIM2_SMCR_SMS_MASK		0x07
/** @defgroup tim2_smcr_sms SMS Slave mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_dier DIER DMA/Interrupt enable register
@{*/

/** TIM2_DIER_TDE Trigger DMA request enable **/
#define TIM2_DIER_TDE		(1 << 14)
/** TIM2_DIER_CC4DE Capture/Compare 4 DMA request enable **/
#define TIM2_DIER_CC4DE		(1 << 12)
/** TIM2_DIER_CC3DE Capture/Compare 3 DMA request enable **/
#define TIM2_DIER_CC3DE		(1 << 11)
/** TIM2_DIER_CC2DE Capture/Compare 2 DMA request enable **/
#define TIM2_DIER_CC2DE		(1 << 10)
/** TIM2_DIER_CC1DE Capture/Compare 1 DMA request enable **/
#define TIM2_DIER_CC1DE		(1 << 9)
/** TIM2_DIER_UDE Update DMA request enable **/
#define TIM2_DIER_UDE		(1 << 8)
/** TIM2_DIER_TIE Trigger interrupt enable **/
#define TIM2_DIER_TIE		(1 << 6)
/** TIM2_DIER_CC4IE Capture/Compare 4 interrupt enable **/
#define TIM2_DIER_CC4IE		(1 << 4)
/** TIM2_DIER_CC3IE Capture/Compare 3 interrupt enable **/
#define TIM2_DIER_CC3IE		(1 << 3)
/** TIM2_DIER_CC2IE Capture/Compare 2 interrupt enable **/
#define TIM2_DIER_CC2IE		(1 << 2)
/** TIM2_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM2_DIER_CC1IE		(1 << 1)
/** TIM2_DIER_UIE Update interrupt enable **/
#define TIM2_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim2_sr SR status register
@{*/

/** TIM2_SR_CC4OF Capture/Compare 4 overcapture flag **/
#define TIM2_SR_CC4OF		(1 << 12)
/** TIM2_SR_CC3OF Capture/Compare 3 overcapture flag **/
#define TIM2_SR_CC3OF		(1 << 11)
/** TIM2_SR_CC2OF Capture/compare 2 overcapture flag **/
#define TIM2_SR_CC2OF		(1 << 10)
/** TIM2_SR_CC1OF Capture/Compare 1 overcapture flag **/
#define TIM2_SR_CC1OF		(1 << 9)
/** TIM2_SR_TIF Trigger interrupt flag **/
#define TIM2_SR_TIF		(1 << 6)
/** TIM2_SR_CC4IF Capture/Compare 4 interrupt flag **/
#define TIM2_SR_CC4IF		(1 << 4)
/** TIM2_SR_CC3IF Capture/Compare 3 interrupt flag **/
#define TIM2_SR_CC3IF		(1 << 3)
/** TIM2_SR_CC2IF Capture/Compare 2 interrupt flag **/
#define TIM2_SR_CC2IF		(1 << 2)
/** TIM2_SR_CC1IF Capture/compare 1 interrupt flag **/
#define TIM2_SR_CC1IF		(1 << 1)
/** TIM2_SR_UIF Update interrupt flag **/
#define TIM2_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim2_egr EGR event generation register
@{*/

/** TIM2_EGR_TG Trigger generation **/
#define TIM2_EGR_TG		(1 << 6)
/** TIM2_EGR_CC4G Capture/compare 4 generation **/
#define TIM2_EGR_CC4G		(1 << 4)
/** TIM2_EGR_CC3G Capture/compare 3 generation **/
#define TIM2_EGR_CC3G		(1 << 3)
/** TIM2_EGR_CC2G Capture/compare 2 generation **/
#define TIM2_EGR_CC2G		(1 << 2)
/** TIM2_EGR_CC1G Capture/compare 1 generation **/
#define TIM2_EGR_CC1G		(1 << 1)
/** TIM2_EGR_UG Update generation **/
#define TIM2_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim2_ccmr1_output CCMR1Output capture/compare mode register 1 (output mode)
@{*/

/** TIM2_CCMR1_Output_OC2CE Output compare 2 clear enable **/
#define TIM2_CCMR1_Output_OC2CE		(1 << 15)

#define TIM2_CCMR1_Output_OC2M_SHIFT		12
#define TIM2_CCMR1_Output_OC2M_MASK		0x07
/** @defgroup tim2_ccmr1_output_oc2m OC2M Output compare 2 mode
@{*/
/**@}*/

/** TIM2_CCMR1_Output_OC2PE Output compare 2 preload enable **/
#define TIM2_CCMR1_Output_OC2PE		(1 << 11)
/** TIM2_CCMR1_Output_OC2FE Output compare 2 fast enable **/
#define TIM2_CCMR1_Output_OC2FE		(1 << 10)

#define TIM2_CCMR1_Output_CC2S_SHIFT		8
#define TIM2_CCMR1_Output_CC2S_MASK		0x03
/** @defgroup tim2_ccmr1_output_cc2s CC2S Capture/Compare 2 selection
@{*/
/**@}*/

/** TIM2_CCMR1_Output_OC1CE Output compare 1 clear enable **/
#define TIM2_CCMR1_Output_OC1CE		(1 << 7)

#define TIM2_CCMR1_Output_OC1M_SHIFT		4
#define TIM2_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim2_ccmr1_output_oc1m OC1M Output compare 1 mode
@{*/
/**@}*/

/** TIM2_CCMR1_Output_OC1PE Output compare 1 preload enable **/
#define TIM2_CCMR1_Output_OC1PE		(1 << 3)
/** TIM2_CCMR1_Output_OC1FE Output compare 1 fast enable **/
#define TIM2_CCMR1_Output_OC1FE		(1 << 2)

#define TIM2_CCMR1_Output_CC1S_SHIFT		0
#define TIM2_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim2_ccmr1_output_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_ccmr1_input CCMR1Input capture/compare mode register 1 (input mode)
@{*/


#define TIM2_CCMR1_Input_IC2F_SHIFT		12
#define TIM2_CCMR1_Input_IC2F_MASK		0x0f
/** @defgroup tim2_ccmr1_input_ic2f IC2F Input capture 2 filter
@{*/
/**@}*/


#define TIM2_CCMR1_Input_IC2PSC_SHIFT		10
#define TIM2_CCMR1_Input_IC2PSC_MASK		0x03
/** @defgroup tim2_ccmr1_input_ic2psc IC2PSC Input capture 2 prescaler
@{*/
/**@}*/


#define TIM2_CCMR1_Input_CC2S_SHIFT		8
#define TIM2_CCMR1_Input_CC2S_MASK		0x03
/** @defgroup tim2_ccmr1_input_cc2s CC2S Capture/compare 2 selection
@{*/
/**@}*/


#define TIM2_CCMR1_Input_IC1F_SHIFT		4
#define TIM2_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim2_ccmr1_input_ic1f IC1F Input capture 1 filter
@{*/
/**@}*/


#define TIM2_CCMR1_Input_IC1PSC_SHIFT		2
#define TIM2_CCMR1_Input_IC1PSC_MASK		0x03
/** @defgroup tim2_ccmr1_input_ic1psc IC1PSC Input capture 1 prescaler
@{*/
/**@}*/


#define TIM2_CCMR1_Input_CC1S_SHIFT		0
#define TIM2_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim2_ccmr1_input_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_ccmr2_output CCMR2Output capture/compare mode register 2 (output mode)
@{*/

/** TIM2_CCMR2_Output_O24CE Output compare 4 clear enable **/
#define TIM2_CCMR2_Output_O24CE		(1 << 15)

#define TIM2_CCMR2_Output_OC4M_SHIFT		12
#define TIM2_CCMR2_Output_OC4M_MASK		0x07
/** @defgroup tim2_ccmr2_output_oc4m OC4M Output compare 4 mode
@{*/
/**@}*/

/** TIM2_CCMR2_Output_OC4PE Output compare 4 preload enable **/
#define TIM2_CCMR2_Output_OC4PE		(1 << 11)
/** TIM2_CCMR2_Output_OC4FE Output compare 4 fast enable **/
#define TIM2_CCMR2_Output_OC4FE		(1 << 10)

#define TIM2_CCMR2_Output_CC4S_SHIFT		8
#define TIM2_CCMR2_Output_CC4S_MASK		0x03
/** @defgroup tim2_ccmr2_output_cc4s CC4S Capture/Compare 4 selection
@{*/
/**@}*/

/** TIM2_CCMR2_Output_OC3CE Output compare 3 clear enable **/
#define TIM2_CCMR2_Output_OC3CE		(1 << 7)

#define TIM2_CCMR2_Output_OC3M_SHIFT		4
#define TIM2_CCMR2_Output_OC3M_MASK		0x07
/** @defgroup tim2_ccmr2_output_oc3m OC3M Output compare 3 mode
@{*/
/**@}*/

/** TIM2_CCMR2_Output_OC3PE Output compare 3 preload enable **/
#define TIM2_CCMR2_Output_OC3PE		(1 << 3)
/** TIM2_CCMR2_Output_OC3FE Output compare 3 fast enable **/
#define TIM2_CCMR2_Output_OC3FE		(1 << 2)

#define TIM2_CCMR2_Output_CC3S_SHIFT		0
#define TIM2_CCMR2_Output_CC3S_MASK		0x03
/** @defgroup tim2_ccmr2_output_cc3s CC3S Capture/Compare 3 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_ccmr2_input CCMR2Input capture/compare mode register 2 (input mode)
@{*/


#define TIM2_CCMR2_Input_IC4F_SHIFT		12
#define TIM2_CCMR2_Input_IC4F_MASK		0x0f
/** @defgroup tim2_ccmr2_input_ic4f IC4F Input capture 4 filter
@{*/
/**@}*/


#define TIM2_CCMR2_Input_IC4PSC_SHIFT		10
#define TIM2_CCMR2_Input_IC4PSC_MASK		0x03
/** @defgroup tim2_ccmr2_input_ic4psc IC4PSC Input capture 4 prescaler
@{*/
/**@}*/


#define TIM2_CCMR2_Input_CC4S_SHIFT		8
#define TIM2_CCMR2_Input_CC4S_MASK		0x03
/** @defgroup tim2_ccmr2_input_cc4s CC4S Capture/Compare 4 selection
@{*/
/**@}*/


#define TIM2_CCMR2_Input_IC3F_SHIFT		4
#define TIM2_CCMR2_Input_IC3F_MASK		0x0f
/** @defgroup tim2_ccmr2_input_ic3f IC3F Input capture 3 filter
@{*/
/**@}*/


#define TIM2_CCMR2_Input_IC3PSC_SHIFT		2
#define TIM2_CCMR2_Input_IC3PSC_MASK		0x03
/** @defgroup tim2_ccmr2_input_ic3psc IC3PSC Input capture 3 prescaler
@{*/
/**@}*/


#define TIM2_CCMR2_Input_CC3S_SHIFT		0
#define TIM2_CCMR2_Input_CC3S_MASK		0x03
/** @defgroup tim2_ccmr2_input_cc3s CC3S Capture/Compare 3 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_ccer CCER capture/compare enable register
@{*/

/** TIM2_CCER_CC4NP Capture/Compare 3 output Polarity **/
#define TIM2_CCER_CC4NP		(1 << 15)
/** TIM2_CCER_CC4P Capture/Compare 3 output Polarity **/
#define TIM2_CCER_CC4P		(1 << 13)
/** TIM2_CCER_CC4E Capture/Compare 4 output enable **/
#define TIM2_CCER_CC4E		(1 << 12)
/** TIM2_CCER_CC3NP Capture/Compare 3 output Polarity **/
#define TIM2_CCER_CC3NP		(1 << 11)
/** TIM2_CCER_CC3P Capture/Compare 3 output Polarity **/
#define TIM2_CCER_CC3P		(1 << 9)
/** TIM2_CCER_CC3E Capture/Compare 3 output enable **/
#define TIM2_CCER_CC3E		(1 << 8)
/** TIM2_CCER_CC2NP Capture/Compare 2 output Polarity **/
#define TIM2_CCER_CC2NP		(1 << 7)
/** TIM2_CCER_CC2P Capture/Compare 2 output Polarity **/
#define TIM2_CCER_CC2P		(1 << 5)
/** TIM2_CCER_CC2E Capture/Compare 2 output enable **/
#define TIM2_CCER_CC2E		(1 << 4)
/** TIM2_CCER_CC1NP Capture/Compare 1 output Polarity **/
#define TIM2_CCER_CC1NP		(1 << 3)
/** TIM2_CCER_CC1P Capture/Compare 1 output Polarity **/
#define TIM2_CCER_CC1P		(1 << 1)
/** TIM2_CCER_CC1E Capture/Compare 1 output enable **/
#define TIM2_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim2_cnt CNT counter
@{*/


#define TIM2_CNT_CNTH_SHIFT		16
#define TIM2_CNT_CNTH_MASK		0xffff
/** @defgroup tim2_cnt_cnth CNTH High counter value
@{*/
/**@}*/


#define TIM2_CNT_CNTL_SHIFT		0
#define TIM2_CNT_CNTL_MASK		0xffff
/** @defgroup tim2_cnt_cntl CNTL Low counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_psc PSC prescaler
@{*/


#define TIM2_PSC_PSC_SHIFT		0
#define TIM2_PSC_PSC_MASK		0xffff
/** @defgroup tim2_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_arr ARR auto-reload register
@{*/


#define TIM2_ARR_ARRH_SHIFT		16
#define TIM2_ARR_ARRH_MASK		0xffff
/** @defgroup tim2_arr_arrh ARRH High Auto-reload value
@{*/
/**@}*/


#define TIM2_ARR_ARRL_SHIFT		0
#define TIM2_ARR_ARRL_MASK		0xffff
/** @defgroup tim2_arr_arrl ARRL Low Auto-reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_ccr1 CCR1 capture/compare register 1
@{*/


#define TIM2_CCR1_CCR1H_SHIFT		16
#define TIM2_CCR1_CCR1H_MASK		0xffff
/** @defgroup tim2_ccr1_ccr1h CCR1H High Capture/Compare 1 value
@{*/
/**@}*/


#define TIM2_CCR1_CCR1L_SHIFT		0
#define TIM2_CCR1_CCR1L_MASK		0xffff
/** @defgroup tim2_ccr1_ccr1l CCR1L Low Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_ccr2 CCR2 capture/compare register 2
@{*/


#define TIM2_CCR2_CCR2H_SHIFT		16
#define TIM2_CCR2_CCR2H_MASK		0xffff
/** @defgroup tim2_ccr2_ccr2h CCR2H High Capture/Compare 2 value
@{*/
/**@}*/


#define TIM2_CCR2_CCR2L_SHIFT		0
#define TIM2_CCR2_CCR2L_MASK		0xffff
/** @defgroup tim2_ccr2_ccr2l CCR2L Low Capture/Compare 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_ccr3 CCR3 capture/compare register 3
@{*/


#define TIM2_CCR3_CCR3H_SHIFT		16
#define TIM2_CCR3_CCR3H_MASK		0xffff
/** @defgroup tim2_ccr3_ccr3h CCR3H High Capture/Compare value
@{*/
/**@}*/


#define TIM2_CCR3_CCR3L_SHIFT		0
#define TIM2_CCR3_CCR3L_MASK		0xffff
/** @defgroup tim2_ccr3_ccr3l CCR3L Low Capture/Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_ccr4 CCR4 capture/compare register 4
@{*/


#define TIM2_CCR4_CCR4H_SHIFT		16
#define TIM2_CCR4_CCR4H_MASK		0xffff
/** @defgroup tim2_ccr4_ccr4h CCR4H High Capture/Compare value
@{*/
/**@}*/


#define TIM2_CCR4_CCR4L_SHIFT		0
#define TIM2_CCR4_CCR4L_MASK		0xffff
/** @defgroup tim2_ccr4_ccr4l CCR4L Low Capture/Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_dcr DCR DMA control register
@{*/


#define TIM2_DCR_DBL_SHIFT		8
#define TIM2_DCR_DBL_MASK		0x1f
/** @defgroup tim2_dcr_dbl DBL DMA burst length
@{*/
/**@}*/


#define TIM2_DCR_DBA_SHIFT		0
#define TIM2_DCR_DBA_MASK		0x1f
/** @defgroup tim2_dcr_dba DBA DMA base address
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_dmar DMAR DMA address for full transfer
@{*/


#define TIM2_DMAR_DMAB_SHIFT		0
#define TIM2_DMAR_DMAB_MASK		0xffff
/** @defgroup tim2_dmar_dmab DMAB DMA register for burst accesses
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_or OR option register
@{*/


#define TIM2_OR_ITR1_RMP_SHIFT		10
#define TIM2_OR_ITR1_RMP_MASK		0x03
/** @defgroup tim2_or_itr1_rmp ITR1RMP Internal trigger 1 remap
@{*/
/**@}*/


/**@}*/

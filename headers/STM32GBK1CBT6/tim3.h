#pragma once 

/* --- TIM3: Advanced-timers ---------------------------------------- */

/** @defgroup tim3_registers Advanced-timers Register
@{*/

/** TIM3_CR1 control register 1 **/
#define TIM3_CR1			MMIO32(TIM3_BASE + 0x00)
/** TIM3_CR2 control register 2 **/
#define TIM3_CR2			MMIO32(TIM3_BASE + 0x04)
/** TIM3_SMCR slave mode control register **/
#define TIM3_SMCR			MMIO32(TIM3_BASE + 0x08)
/** TIM3_DIER DMA/Interrupt enable register **/
#define TIM3_DIER			MMIO32(TIM3_BASE + 0x0c)
/** TIM3_SR status register **/
#define TIM3_SR			MMIO32(TIM3_BASE + 0x10)
/** TIM3_EGR event generation register **/
#define TIM3_EGR			MMIO32(TIM3_BASE + 0x14)
/** TIM3_CCMR1_Output capture/compare mode register 1 (output mode) **/
#define TIM3_CCMR1_Output			MMIO32(TIM3_BASE + 0x18)
/** TIM3_CCMR1_Input capture/compare mode register 1 (input mode) **/
#define TIM3_CCMR1_Input			MMIO32(TIM3_BASE + 0x18)
/** TIM3_CCMR2_Output capture/compare mode register 2 (output mode) **/
#define TIM3_CCMR2_Output			MMIO32(TIM3_BASE + 0x1c)
/** TIM3_CCMR2_Input capture/compare mode register 2 (input mode) **/
#define TIM3_CCMR2_Input			MMIO32(TIM3_BASE + 0x1c)
/** TIM3_CCER capture/compare enable register **/
#define TIM3_CCER			MMIO32(TIM3_BASE + 0x20)
/** TIM3_CNT counter **/
#define TIM3_CNT			MMIO32(TIM3_BASE + 0x24)
/** TIM3_PSC prescaler **/
#define TIM3_PSC			MMIO32(TIM3_BASE + 0x28)
/** TIM3_ARR auto-reload register **/
#define TIM3_ARR			MMIO32(TIM3_BASE + 0x2c)
/** TIM3_RCR repetition counter register **/
#define TIM3_RCR			MMIO32(TIM3_BASE + 0x30)
/** TIM3_CCR1 capture/compare register 1 **/
#define TIM3_CCR1			MMIO32(TIM3_BASE + 0x34)
/** TIM3_CCR2 capture/compare register 2 **/
#define TIM3_CCR2			MMIO32(TIM3_BASE + 0x38)
/** TIM3_CCR3 capture/compare register 3 **/
#define TIM3_CCR3			MMIO32(TIM3_BASE + 0x3c)
/** TIM3_CCR4 capture/compare register 4 **/
#define TIM3_CCR4			MMIO32(TIM3_BASE + 0x40)
/** TIM3_BDTR break and dead-time register **/
#define TIM3_BDTR			MMIO32(TIM3_BASE + 0x44)
/** TIM3_CCR5 capture/compare register 4 **/
#define TIM3_CCR5			MMIO32(TIM3_BASE + 0x48)
/** TIM3_CCR6 capture/compare register 4 **/
#define TIM3_CCR6			MMIO32(TIM3_BASE + 0x4c)
/** TIM3_CCMR3_Output capture/compare mode register 2 (output mode) **/
#define TIM3_CCMR3_Output			MMIO32(TIM3_BASE + 0x50)
/** TIM3_DTR2 timer Deadtime Register 2 **/
#define TIM3_DTR2			MMIO32(TIM3_BASE + 0x54)
/** TIM3_ECR DMA control register **/
#define TIM3_ECR			MMIO32(TIM3_BASE + 0x58)
/** TIM3_TISEL TIM timer input selection register **/
#define TIM3_TISEL			MMIO32(TIM3_BASE + 0x5c)
/** TIM3_AF1 TIM alternate function option register 1 **/
#define TIM3_AF1			MMIO32(TIM3_BASE + 0x60)
/** TIM3_AF2 TIM alternate function option register 2 **/
#define TIM3_AF2			MMIO32(TIM3_BASE + 0x64)
/** TIM3_DCR control register **/
#define TIM3_DCR			MMIO32(TIM3_BASE + 0x3dc)
/** TIM3_DMAR DMA address for full transfer **/
#define TIM3_DMAR			MMIO32(TIM3_BASE + 0x3e0)

/**@}*/


/** @defgroup tim3_cr1 CR1 control register 1
@{*/

/** TIM3_CR1_DITHEN Dithering Enable **/
#define TIM3_CR1_DITHEN		(1 << 12)
/** TIM3_CR1_UIFREMAP UIF status bit remapping **/
#define TIM3_CR1_UIFREMAP		(1 << 11)

#define TIM3_CR1_CKD_SHIFT		8
#define TIM3_CR1_CKD_MASK		0x03
/** @defgroup tim3_cr1_ckd CKD Clock division
@{*/
/**@}*/

/** TIM3_CR1_ARPE Auto-reload preload enable **/
#define TIM3_CR1_ARPE		(1 << 7)

#define TIM3_CR1_CMS_SHIFT		5
#define TIM3_CR1_CMS_MASK		0x03
/** @defgroup tim3_cr1_cms CMS Center-aligned mode selection
@{*/
/**@}*/

/** TIM3_CR1_DIR Direction **/
#define TIM3_CR1_DIR		(1 << 4)
/** TIM3_CR1_OPM One-pulse mode **/
#define TIM3_CR1_OPM		(1 << 3)
/** TIM3_CR1_URS Update request source **/
#define TIM3_CR1_URS		(1 << 2)
/** TIM3_CR1_UDIS Update disable **/
#define TIM3_CR1_UDIS		(1 << 1)
/** TIM3_CR1_CEN Counter enable **/
#define TIM3_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim3_cr2 CR2 control register 2
@{*/

/** TIM3_CR2_MMS_3 Master mode selection - bit 3 **/
#define TIM3_CR2_MMS_3		(1 << 25)

#define TIM3_CR2_MMS2_SHIFT		20
#define TIM3_CR2_MMS2_MASK		0x0f
/** @defgroup tim3_cr2_mms2 MMS2 Master mode selection 2
@{*/
/**@}*/

/** TIM3_CR2_OIS6 Output Idle state 6 (OC6 output) **/
#define TIM3_CR2_OIS6		(1 << 18)
/** TIM3_CR2_OIS5 Output Idle state 5 (OC5 output) **/
#define TIM3_CR2_OIS5		(1 << 16)
/** TIM3_CR2_OIS4N Output Idle state 4 (OC4N output) **/
#define TIM3_CR2_OIS4N		(1 << 15)
/** TIM3_CR2_OIS4 Output Idle state 4 **/
#define TIM3_CR2_OIS4		(1 << 14)
/** TIM3_CR2_OIS3N Output Idle state 3 **/
#define TIM3_CR2_OIS3N		(1 << 13)
/** TIM3_CR2_OIS3 Output Idle state 3 **/
#define TIM3_CR2_OIS3		(1 << 12)
/** TIM3_CR2_OIS2N Output Idle state 2 **/
#define TIM3_CR2_OIS2N		(1 << 11)
/** TIM3_CR2_OIS2 Output Idle state 2 **/
#define TIM3_CR2_OIS2		(1 << 10)
/** TIM3_CR2_OIS1N Output Idle state 1 **/
#define TIM3_CR2_OIS1N		(1 << 9)
/** TIM3_CR2_OIS1 Output Idle state 1 **/
#define TIM3_CR2_OIS1		(1 << 8)
/** TIM3_CR2_TI1S TI1 selection **/
#define TIM3_CR2_TI1S		(1 << 7)

#define TIM3_CR2_MMS_SHIFT		4
#define TIM3_CR2_MMS_MASK		0x07
/** @defgroup tim3_cr2_mms MMS Master mode selection
@{*/
/**@}*/

/** TIM3_CR2_CCDS Capture/compare DMA selection **/
#define TIM3_CR2_CCDS		(1 << 3)
/** TIM3_CR2_CCUS Capture/compare control update selection **/
#define TIM3_CR2_CCUS		(1 << 2)
/** TIM3_CR2_CCPC Capture/compare preloaded control **/
#define TIM3_CR2_CCPC		(1 << 0)

/**@}*/

/** @defgroup tim3_smcr SMCR slave mode control register
@{*/

/** TIM3_SMCR_SMSPS SMS Preload Source **/
#define TIM3_SMCR_SMSPS		(1 << 25)
/** TIM3_SMCR_SMSPE SMS Preload Enable **/
#define TIM3_SMCR_SMSPE		(1 << 24)

#define TIM3_SMCR_TS_4_3_SHIFT		20
#define TIM3_SMCR_TS_4_3_MASK		0x03
/** @defgroup tim3_smcr_ts_4_3 TS43 Trigger selection - bit 4:3
@{*/
/**@}*/

/** TIM3_SMCR_SMS_3 Slave mode selection - bit 3 **/
#define TIM3_SMCR_SMS_3		(1 << 16)
/** TIM3_SMCR_ETP External trigger polarity **/
#define TIM3_SMCR_ETP		(1 << 15)
/** TIM3_SMCR_ECE External clock enable **/
#define TIM3_SMCR_ECE		(1 << 14)

#define TIM3_SMCR_ETPS_SHIFT		12
#define TIM3_SMCR_ETPS_MASK		0x03
/** @defgroup tim3_smcr_etps ETPS External trigger prescaler
@{*/
/**@}*/


#define TIM3_SMCR_ETF_SHIFT		8
#define TIM3_SMCR_ETF_MASK		0x0f
/** @defgroup tim3_smcr_etf ETF External trigger filter
@{*/
/**@}*/

/** TIM3_SMCR_MSM Master/Slave mode **/
#define TIM3_SMCR_MSM		(1 << 7)

#define TIM3_SMCR_TS_SHIFT		4
#define TIM3_SMCR_TS_MASK		0x07
/** @defgroup tim3_smcr_ts TS Trigger selection
@{*/
/**@}*/

/** TIM3_SMCR_OCCS OCREF clear selection **/
#define TIM3_SMCR_OCCS		(1 << 3)

#define TIM3_SMCR_SMS_SHIFT		0
#define TIM3_SMCR_SMS_MASK		0x07
/** @defgroup tim3_smcr_sms SMS Slave mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_dier DIER DMA/Interrupt enable register
@{*/

/** TIM3_DIER_TERRIE Transition Error interrupt enable **/
#define TIM3_DIER_TERRIE		(1 << 23)
/** TIM3_DIER_IERRIE Index Error interrupt enable **/
#define TIM3_DIER_IERRIE		(1 << 22)
/** TIM3_DIER_DIRIE Direction Change interrupt enable **/
#define TIM3_DIER_DIRIE		(1 << 21)
/** TIM3_DIER_IDXIE Index interrupt enable **/
#define TIM3_DIER_IDXIE		(1 << 20)
/** TIM3_DIER_TDE Trigger DMA request enable **/
#define TIM3_DIER_TDE		(1 << 14)
/** TIM3_DIER_COMDE COM DMA request enable **/
#define TIM3_DIER_COMDE		(1 << 13)
/** TIM3_DIER_CC4DE Capture/Compare 4 DMA request enable **/
#define TIM3_DIER_CC4DE		(1 << 12)
/** TIM3_DIER_CC3DE Capture/Compare 3 DMA request enable **/
#define TIM3_DIER_CC3DE		(1 << 11)
/** TIM3_DIER_CC2DE Capture/Compare 2 DMA request enable **/
#define TIM3_DIER_CC2DE		(1 << 10)
/** TIM3_DIER_CC1DE Capture/Compare 1 DMA request enable **/
#define TIM3_DIER_CC1DE		(1 << 9)
/** TIM3_DIER_UDE Update DMA request enable **/
#define TIM3_DIER_UDE		(1 << 8)
/** TIM3_DIER_BIE Break interrupt enable **/
#define TIM3_DIER_BIE		(1 << 7)
/** TIM3_DIER_TIE Trigger interrupt enable **/
#define TIM3_DIER_TIE		(1 << 6)
/** TIM3_DIER_COMIE COM interrupt enable **/
#define TIM3_DIER_COMIE		(1 << 5)
/** TIM3_DIER_CC4IE Capture/Compare 4 interrupt enable **/
#define TIM3_DIER_CC4IE		(1 << 4)
/** TIM3_DIER_CC3IE Capture/Compare 3 interrupt enable **/
#define TIM3_DIER_CC3IE		(1 << 3)
/** TIM3_DIER_CC2IE Capture/Compare 2 interrupt enable **/
#define TIM3_DIER_CC2IE		(1 << 2)
/** TIM3_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM3_DIER_CC1IE		(1 << 1)
/** TIM3_DIER_UIE Update interrupt enable **/
#define TIM3_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim3_sr SR status register
@{*/

/** TIM3_SR_TERRF Transition Error interrupt flag **/
#define TIM3_SR_TERRF		(1 << 23)
/** TIM3_SR_IERRF Index Error interrupt flag **/
#define TIM3_SR_IERRF		(1 << 22)
/** TIM3_SR_DIRF Direction Change interrupt flag **/
#define TIM3_SR_DIRF		(1 << 21)
/** TIM3_SR_IDXF Index interrupt flag **/
#define TIM3_SR_IDXF		(1 << 20)
/** TIM3_SR_CC6IF Compare 6 interrupt flag **/
#define TIM3_SR_CC6IF		(1 << 17)
/** TIM3_SR_CC5IF Compare 5 interrupt flag **/
#define TIM3_SR_CC5IF		(1 << 16)
/** TIM3_SR_SBIF System Break interrupt flag **/
#define TIM3_SR_SBIF		(1 << 13)
/** TIM3_SR_CC4OF Capture/Compare 4 overcapture flag **/
#define TIM3_SR_CC4OF		(1 << 12)
/** TIM3_SR_CC3OF Capture/Compare 3 overcapture flag **/
#define TIM3_SR_CC3OF		(1 << 11)
/** TIM3_SR_CC2OF Capture/compare 2 overcapture flag **/
#define TIM3_SR_CC2OF		(1 << 10)
/** TIM3_SR_CC1OF Capture/Compare 1 overcapture flag **/
#define TIM3_SR_CC1OF		(1 << 9)
/** TIM3_SR_B2IF Break 2 interrupt flag **/
#define TIM3_SR_B2IF		(1 << 8)
/** TIM3_SR_BIF Break interrupt flag **/
#define TIM3_SR_BIF		(1 << 7)
/** TIM3_SR_TIF Trigger interrupt flag **/
#define TIM3_SR_TIF		(1 << 6)
/** TIM3_SR_COMIF COM interrupt flag **/
#define TIM3_SR_COMIF		(1 << 5)
/** TIM3_SR_CC4IF Capture/Compare 4 interrupt flag **/
#define TIM3_SR_CC4IF		(1 << 4)
/** TIM3_SR_CC3IF Capture/Compare 3 interrupt flag **/
#define TIM3_SR_CC3IF		(1 << 3)
/** TIM3_SR_CC2IF Capture/Compare 2 interrupt flag **/
#define TIM3_SR_CC2IF		(1 << 2)
/** TIM3_SR_CC1IF Capture/compare 1 interrupt flag **/
#define TIM3_SR_CC1IF		(1 << 1)
/** TIM3_SR_UIF Update interrupt flag **/
#define TIM3_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim3_egr EGR event generation register
@{*/

/** TIM3_EGR_B2G Break 2 generation **/
#define TIM3_EGR_B2G		(1 << 8)
/** TIM3_EGR_BG Break generation **/
#define TIM3_EGR_BG		(1 << 7)
/** TIM3_EGR_TG Trigger generation **/
#define TIM3_EGR_TG		(1 << 6)
/** TIM3_EGR_COMG Capture/Compare control update generation **/
#define TIM3_EGR_COMG		(1 << 5)
/** TIM3_EGR_CC4G Capture/compare 4 generation **/
#define TIM3_EGR_CC4G		(1 << 4)
/** TIM3_EGR_CC3G Capture/compare 3 generation **/
#define TIM3_EGR_CC3G		(1 << 3)
/** TIM3_EGR_CC2G Capture/compare 2 generation **/
#define TIM3_EGR_CC2G		(1 << 2)
/** TIM3_EGR_CC1G Capture/compare 1 generation **/
#define TIM3_EGR_CC1G		(1 << 1)
/** TIM3_EGR_UG Update generation **/
#define TIM3_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim3_ccmr1_output CCMR1Output capture/compare mode register 1 (output mode)
@{*/

/** TIM3_CCMR1_Output_OC2M_3 Output Compare 2 mode - bit 3 **/
#define TIM3_CCMR1_Output_OC2M_3		(1 << 24)
/** TIM3_CCMR1_Output_OC1M_3 Output Compare 1 mode - bit 3 **/
#define TIM3_CCMR1_Output_OC1M_3		(1 << 16)
/** TIM3_CCMR1_Output_OC2CE Output Compare 2 clear enable **/
#define TIM3_CCMR1_Output_OC2CE		(1 << 15)

#define TIM3_CCMR1_Output_OC2M_SHIFT		12
#define TIM3_CCMR1_Output_OC2M_MASK		0x07
/** @defgroup tim3_ccmr1_output_oc2m OC2M Output Compare 2 mode
@{*/
/**@}*/

/** TIM3_CCMR1_Output_OC2PE Output Compare 2 preload enable **/
#define TIM3_CCMR1_Output_OC2PE		(1 << 11)
/** TIM3_CCMR1_Output_OC2FE Output Compare 2 fast enable **/
#define TIM3_CCMR1_Output_OC2FE		(1 << 10)

#define TIM3_CCMR1_Output_CC2S_SHIFT		8
#define TIM3_CCMR1_Output_CC2S_MASK		0x03
/** @defgroup tim3_ccmr1_output_cc2s CC2S Capture/Compare 2 selection
@{*/
/**@}*/

/** TIM3_CCMR1_Output_OC1CE Output Compare 1 clear enable **/
#define TIM3_CCMR1_Output_OC1CE		(1 << 7)

#define TIM3_CCMR1_Output_OC1M_SHIFT		4
#define TIM3_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim3_ccmr1_output_oc1m OC1M Output Compare 1 mode
@{*/
/**@}*/

/** TIM3_CCMR1_Output_OC1PE Output Compare 1 preload enable **/
#define TIM3_CCMR1_Output_OC1PE		(1 << 3)
/** TIM3_CCMR1_Output_OC1FE Output Compare 1 fast enable **/
#define TIM3_CCMR1_Output_OC1FE		(1 << 2)

#define TIM3_CCMR1_Output_CC1S_SHIFT		0
#define TIM3_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim3_ccmr1_output_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_ccmr1_input CCMR1Input capture/compare mode register 1 (input mode)
@{*/


#define TIM3_CCMR1_Input_IC2F_SHIFT		12
#define TIM3_CCMR1_Input_IC2F_MASK		0x0f
/** @defgroup tim3_ccmr1_input_ic2f IC2F Input capture 2 filter
@{*/
/**@}*/


#define TIM3_CCMR1_Input_IC2PSC_SHIFT		10
#define TIM3_CCMR1_Input_IC2PSC_MASK		0x03
/** @defgroup tim3_ccmr1_input_ic2psc IC2PSC Input capture 2 prescaler
@{*/
/**@}*/


#define TIM3_CCMR1_Input_CC2S_SHIFT		8
#define TIM3_CCMR1_Input_CC2S_MASK		0x03
/** @defgroup tim3_ccmr1_input_cc2s CC2S Capture/Compare 2 selection
@{*/
/**@}*/


#define TIM3_CCMR1_Input_IC1F_SHIFT		4
#define TIM3_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim3_ccmr1_input_ic1f IC1F Input capture 1 filter
@{*/
/**@}*/


#define TIM3_CCMR1_Input_ICPCS_SHIFT		2
#define TIM3_CCMR1_Input_ICPCS_MASK		0x03
/** @defgroup tim3_ccmr1_input_icpcs ICPCS Input capture 1 prescaler
@{*/
/**@}*/


#define TIM3_CCMR1_Input_CC1S_SHIFT		0
#define TIM3_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim3_ccmr1_input_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_ccmr2_output CCMR2Output capture/compare mode register 2 (output mode)
@{*/

/** TIM3_CCMR2_Output_OC4M_3 Output Compare 4 mode - bit 3 **/
#define TIM3_CCMR2_Output_OC4M_3		(1 << 24)
/** TIM3_CCMR2_Output_OC3M_3 Output Compare 3 mode - bit 3 **/
#define TIM3_CCMR2_Output_OC3M_3		(1 << 16)
/** TIM3_CCMR2_Output_OC4CE Output compare 4 clear enable **/
#define TIM3_CCMR2_Output_OC4CE		(1 << 15)

#define TIM3_CCMR2_Output_OC4M_SHIFT		12
#define TIM3_CCMR2_Output_OC4M_MASK		0x07
/** @defgroup tim3_ccmr2_output_oc4m OC4M Output compare 4 mode
@{*/
/**@}*/

/** TIM3_CCMR2_Output_OC4PE Output compare 4 preload enable **/
#define TIM3_CCMR2_Output_OC4PE		(1 << 11)
/** TIM3_CCMR2_Output_OC4FE Output compare 4 fast enable **/
#define TIM3_CCMR2_Output_OC4FE		(1 << 10)

#define TIM3_CCMR2_Output_CC4S_SHIFT		8
#define TIM3_CCMR2_Output_CC4S_MASK		0x03
/** @defgroup tim3_ccmr2_output_cc4s CC4S Capture/Compare 4 selection
@{*/
/**@}*/

/** TIM3_CCMR2_Output_OC3CE Output compare 3 clear enable **/
#define TIM3_CCMR2_Output_OC3CE		(1 << 7)

#define TIM3_CCMR2_Output_OC3M_SHIFT		4
#define TIM3_CCMR2_Output_OC3M_MASK		0x07
/** @defgroup tim3_ccmr2_output_oc3m OC3M Output compare 3 mode
@{*/
/**@}*/

/** TIM3_CCMR2_Output_OC3PE Output compare 3 preload enable **/
#define TIM3_CCMR2_Output_OC3PE		(1 << 3)
/** TIM3_CCMR2_Output_OC3FE Output compare 3 fast enable **/
#define TIM3_CCMR2_Output_OC3FE		(1 << 2)

#define TIM3_CCMR2_Output_CC3S_SHIFT		0
#define TIM3_CCMR2_Output_CC3S_MASK		0x03
/** @defgroup tim3_ccmr2_output_cc3s CC3S Capture/Compare 3 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_ccmr2_input CCMR2Input capture/compare mode register 2 (input mode)
@{*/


#define TIM3_CCMR2_Input_IC4F_SHIFT		12
#define TIM3_CCMR2_Input_IC4F_MASK		0x0f
/** @defgroup tim3_ccmr2_input_ic4f IC4F Input capture 4 filter
@{*/
/**@}*/


#define TIM3_CCMR2_Input_IC4PSC_SHIFT		10
#define TIM3_CCMR2_Input_IC4PSC_MASK		0x03
/** @defgroup tim3_ccmr2_input_ic4psc IC4PSC Input capture 4 prescaler
@{*/
/**@}*/


#define TIM3_CCMR2_Input_CC4S_SHIFT		8
#define TIM3_CCMR2_Input_CC4S_MASK		0x03
/** @defgroup tim3_ccmr2_input_cc4s CC4S Capture/Compare 4 selection
@{*/
/**@}*/


#define TIM3_CCMR2_Input_IC3F_SHIFT		4
#define TIM3_CCMR2_Input_IC3F_MASK		0x0f
/** @defgroup tim3_ccmr2_input_ic3f IC3F Input capture 3 filter
@{*/
/**@}*/


#define TIM3_CCMR2_Input_IC3PSC_SHIFT		2
#define TIM3_CCMR2_Input_IC3PSC_MASK		0x03
/** @defgroup tim3_ccmr2_input_ic3psc IC3PSC Input capture 3 prescaler
@{*/
/**@}*/


#define TIM3_CCMR2_Input_CC3S_SHIFT		0
#define TIM3_CCMR2_Input_CC3S_MASK		0x03
/** @defgroup tim3_ccmr2_input_cc3s CC3S Capture/compare 3 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_ccer CCER capture/compare enable register
@{*/

/** TIM3_CCER_CC6P Capture/Compare 6 output polarity **/
#define TIM3_CCER_CC6P		(1 << 21)
/** TIM3_CCER_CC6E Capture/Compare 6 output enable **/
#define TIM3_CCER_CC6E		(1 << 20)
/** TIM3_CCER_CC5P Capture/Compare 5 output polarity **/
#define TIM3_CCER_CC5P		(1 << 17)
/** TIM3_CCER_CC5E Capture/Compare 5 output enable **/
#define TIM3_CCER_CC5E		(1 << 16)
/** TIM3_CCER_CC4NP Capture/Compare 4 complementary output polarity **/
#define TIM3_CCER_CC4NP		(1 << 15)
/** TIM3_CCER_CC4NE Capture/Compare 4 complementary output enable **/
#define TIM3_CCER_CC4NE		(1 << 14)
/** TIM3_CCER_CC4P Capture/Compare 3 output Polarity **/
#define TIM3_CCER_CC4P		(1 << 13)
/** TIM3_CCER_CC4E Capture/Compare 4 output enable **/
#define TIM3_CCER_CC4E		(1 << 12)
/** TIM3_CCER_CC3NP Capture/Compare 3 output Polarity **/
#define TIM3_CCER_CC3NP		(1 << 11)
/** TIM3_CCER_CC3NE Capture/Compare 3 complementary output enable **/
#define TIM3_CCER_CC3NE		(1 << 10)
/** TIM3_CCER_CC3P Capture/Compare 3 output Polarity **/
#define TIM3_CCER_CC3P		(1 << 9)
/** TIM3_CCER_CC3E Capture/Compare 3 output enable **/
#define TIM3_CCER_CC3E		(1 << 8)
/** TIM3_CCER_CC2NP Capture/Compare 2 output Polarity **/
#define TIM3_CCER_CC2NP		(1 << 7)
/** TIM3_CCER_CC2NE Capture/Compare 2 complementary output enable **/
#define TIM3_CCER_CC2NE		(1 << 6)
/** TIM3_CCER_CC2P Capture/Compare 2 output Polarity **/
#define TIM3_CCER_CC2P		(1 << 5)
/** TIM3_CCER_CC2E Capture/Compare 2 output enable **/
#define TIM3_CCER_CC2E		(1 << 4)
/** TIM3_CCER_CC1NP Capture/Compare 1 output Polarity **/
#define TIM3_CCER_CC1NP		(1 << 3)
/** TIM3_CCER_CC1NE Capture/Compare 1 complementary output enable **/
#define TIM3_CCER_CC1NE		(1 << 2)
/** TIM3_CCER_CC1P Capture/Compare 1 output Polarity **/
#define TIM3_CCER_CC1P		(1 << 1)
/** TIM3_CCER_CC1E Capture/Compare 1 output enable **/
#define TIM3_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim3_cnt CNT counter
@{*/

/** TIM3_CNT_UIFCPY UIFCPY **/
#define TIM3_CNT_UIFCPY		(1 << 31)

#define TIM3_CNT_CNT_SHIFT		0
#define TIM3_CNT_CNT_MASK		0xffff
/** @defgroup tim3_cnt_cnt CNT counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_psc PSC prescaler
@{*/


#define TIM3_PSC_PSC_SHIFT		0
#define TIM3_PSC_PSC_MASK		0xffff
/** @defgroup tim3_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_arr ARR auto-reload register
@{*/


#define TIM3_ARR_ARR_SHIFT		0
#define TIM3_ARR_ARR_MASK		0xffff
/** @defgroup tim3_arr_arr ARR Auto-reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_rcr RCR repetition counter register
@{*/


#define TIM3_RCR_REP_SHIFT		0
#define TIM3_RCR_REP_MASK		0xffff
/** @defgroup tim3_rcr_rep REP Repetition counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_ccr1 CCR1 capture/compare register 1
@{*/


#define TIM3_CCR1_CCR1_SHIFT		0
#define TIM3_CCR1_CCR1_MASK		0xffff
/** @defgroup tim3_ccr1_ccr1 CCR1 Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_ccr2 CCR2 capture/compare register 2
@{*/


#define TIM3_CCR2_CCR2_SHIFT		0
#define TIM3_CCR2_CCR2_MASK		0xffff
/** @defgroup tim3_ccr2_ccr2 CCR2 Capture/Compare 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_ccr3 CCR3 capture/compare register 3
@{*/


#define TIM3_CCR3_CCR3_SHIFT		0
#define TIM3_CCR3_CCR3_MASK		0xffff
/** @defgroup tim3_ccr3_ccr3 CCR3 Capture/Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_ccr4 CCR4 capture/compare register 4
@{*/


#define TIM3_CCR4_CCR4_SHIFT		0
#define TIM3_CCR4_CCR4_MASK		0xffff
/** @defgroup tim3_ccr4_ccr4 CCR4 Capture/Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_bdtr BDTR break and dead-time register
@{*/

/** TIM3_BDTR_BK2ID BK2ID **/
#define TIM3_BDTR_BK2ID		(1 << 29)
/** TIM3_BDTR_BKBID BKBID **/
#define TIM3_BDTR_BKBID		(1 << 28)
/** TIM3_BDTR_BK2DSRM BK2DSRM **/
#define TIM3_BDTR_BK2DSRM		(1 << 27)
/** TIM3_BDTR_BKDSRM BKDSRM **/
#define TIM3_BDTR_BKDSRM		(1 << 26)
/** TIM3_BDTR_BK2P Break 2 polarity **/
#define TIM3_BDTR_BK2P		(1 << 25)
/** TIM3_BDTR_BK2E Break 2 Enable **/
#define TIM3_BDTR_BK2E		(1 << 24)

#define TIM3_BDTR_BK2F_SHIFT		20
#define TIM3_BDTR_BK2F_MASK		0x0f
/** @defgroup tim3_bdtr_bk2f BK2F Break 2 filter
@{*/
/**@}*/


#define TIM3_BDTR_BKF_SHIFT		16
#define TIM3_BDTR_BKF_MASK		0x0f
/** @defgroup tim3_bdtr_bkf BKF Break filter
@{*/
/**@}*/

/** TIM3_BDTR_MOE Main output enable **/
#define TIM3_BDTR_MOE		(1 << 15)
/** TIM3_BDTR_AOE Automatic output enable **/
#define TIM3_BDTR_AOE		(1 << 14)
/** TIM3_BDTR_BKP Break polarity **/
#define TIM3_BDTR_BKP		(1 << 13)
/** TIM3_BDTR_BKE Break enable **/
#define TIM3_BDTR_BKE		(1 << 12)
/** TIM3_BDTR_OSSR Off-state selection for Run mode **/
#define TIM3_BDTR_OSSR		(1 << 11)
/** TIM3_BDTR_OSSI Off-state selection for Idle mode **/
#define TIM3_BDTR_OSSI		(1 << 10)

#define TIM3_BDTR_LOCK_SHIFT		8
#define TIM3_BDTR_LOCK_MASK		0x03
/** @defgroup tim3_bdtr_lock LOCK Lock configuration
@{*/
/**@}*/


#define TIM3_BDTR_DTG_SHIFT		0
#define TIM3_BDTR_DTG_MASK		0xff
/** @defgroup tim3_bdtr_dtg DTG Dead-time generator setup
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_ccr5 CCR5 capture/compare register 4
@{*/

/** TIM3_CCR5_GC5C3 Group Channel 5 and Channel 3 **/
#define TIM3_CCR5_GC5C3		(1 << 31)
/** TIM3_CCR5_GC5C2 Group Channel 5 and Channel 2 **/
#define TIM3_CCR5_GC5C2		(1 << 30)
/** TIM3_CCR5_GC5C1 Group Channel 5 and Channel 1 **/
#define TIM3_CCR5_GC5C1		(1 << 29)

#define TIM3_CCR5_CCR5_SHIFT		0
#define TIM3_CCR5_CCR5_MASK		0xffff
/** @defgroup tim3_ccr5_ccr5 CCR5 Capture/Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_ccr6 CCR6 capture/compare register 4
@{*/


#define TIM3_CCR6_CCR6_SHIFT		0
#define TIM3_CCR6_CCR6_MASK		0xffff
/** @defgroup tim3_ccr6_ccr6 CCR6 Capture/Compare value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_ccmr3_output CCMR3Output capture/compare mode register 2 (output mode)
@{*/

/** TIM3_CCMR3_Output_OC6M_bit3 Output Compare 6 mode bit 3 **/
#define TIM3_CCMR3_Output_OC6M_bit3		(1 << 24)

#define TIM3_CCMR3_Output_OC5M_bit3_SHIFT		16
#define TIM3_CCMR3_Output_OC5M_bit3_MASK		0x07
/** @defgroup tim3_ccmr3_output_oc5m_bit3 OC5Mbit3 Output Compare 5 mode bit 3
@{*/
/**@}*/

/** TIM3_CCMR3_Output_OC6CE Output compare 6 clear enable **/
#define TIM3_CCMR3_Output_OC6CE		(1 << 15)

#define TIM3_CCMR3_Output_OC6M_SHIFT		12
#define TIM3_CCMR3_Output_OC6M_MASK		0x07
/** @defgroup tim3_ccmr3_output_oc6m OC6M Output compare 6 mode
@{*/
/**@}*/

/** TIM3_CCMR3_Output_OC6PE Output compare 6 preload enable **/
#define TIM3_CCMR3_Output_OC6PE		(1 << 11)
/** TIM3_CCMR3_Output_OC6FE Output compare 6 fast enable **/
#define TIM3_CCMR3_Output_OC6FE		(1 << 10)
/** TIM3_CCMR3_Output_OC5CE Output compare 5 clear enable **/
#define TIM3_CCMR3_Output_OC5CE		(1 << 7)

#define TIM3_CCMR3_Output_OC5M_SHIFT		4
#define TIM3_CCMR3_Output_OC5M_MASK		0x07
/** @defgroup tim3_ccmr3_output_oc5m OC5M Output compare 5 mode
@{*/
/**@}*/

/** TIM3_CCMR3_Output_OC5PE Output compare 5 preload enable **/
#define TIM3_CCMR3_Output_OC5PE		(1 << 3)
/** TIM3_CCMR3_Output_OC5FE Output compare 5 fast enable **/
#define TIM3_CCMR3_Output_OC5FE		(1 << 2)

/**@}*/

/** @defgroup tim3_dtr2 DTR2 timer Deadtime Register 2
@{*/

/** TIM3_DTR2_DTPE Deadtime Preload Enable **/
#define TIM3_DTR2_DTPE		(1 << 17)
/** TIM3_DTR2_DTAE Deadtime Asymmetric Enable **/
#define TIM3_DTR2_DTAE		(1 << 16)

#define TIM3_DTR2_DTGF_SHIFT		0
#define TIM3_DTR2_DTGF_MASK		0xff
/** @defgroup tim3_dtr2_dtgf DTGF Dead-time falling edge generator setup
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_ecr ECR DMA control register
@{*/


#define TIM3_ECR_PWPRSC_SHIFT		24
#define TIM3_ECR_PWPRSC_MASK		0x07
/** @defgroup tim3_ecr_pwprsc PWPRSC Pulse Width prescaler
@{*/
/**@}*/


#define TIM3_ECR_PW_SHIFT		16
#define TIM3_ECR_PW_MASK		0xff
/** @defgroup tim3_ecr_pw PW Pulse width
@{*/
/**@}*/


#define TIM3_ECR_IPOS_SHIFT		6
#define TIM3_ECR_IPOS_MASK		0x03
/** @defgroup tim3_ecr_ipos IPOS Index Positioning
@{*/
/**@}*/

/** TIM3_ECR_FIDX First Index **/
#define TIM3_ECR_FIDX		(1 << 5)

#define TIM3_ECR_IBLK_SHIFT		3
#define TIM3_ECR_IBLK_MASK		0x03
/** @defgroup tim3_ecr_iblk IBLK Index Blanking
@{*/
/**@}*/


#define TIM3_ECR_IDIR_SHIFT		1
#define TIM3_ECR_IDIR_MASK		0x03
/** @defgroup tim3_ecr_idir IDIR Index Direction
@{*/
/**@}*/

/** TIM3_ECR_IE Index Enable **/
#define TIM3_ECR_IE		(1 << 0)

/**@}*/

/** @defgroup tim3_tisel TISEL TIM timer input selection register
@{*/


#define TIM3_TISEL_TI4SEL_SHIFT		24
#define TIM3_TISEL_TI4SEL_MASK		0x0f
/** @defgroup tim3_tisel_ti4sel TI4SEL TI4[0] to TI4[15] input selection
@{*/
/**@}*/


#define TIM3_TISEL_TI3SEL_SHIFT		16
#define TIM3_TISEL_TI3SEL_MASK		0x0f
/** @defgroup tim3_tisel_ti3sel TI3SEL TI3[0] to TI3[15] input selection
@{*/
/**@}*/


#define TIM3_TISEL_TI2SEL_SHIFT		8
#define TIM3_TISEL_TI2SEL_MASK		0x0f
/** @defgroup tim3_tisel_ti2sel TI2SEL TI2[0] to TI2[15] input selection
@{*/
/**@}*/


#define TIM3_TISEL_TI1SEL_SHIFT		0
#define TIM3_TISEL_TI1SEL_MASK		0x0f
/** @defgroup tim3_tisel_ti1sel TI1SEL TI1[0] to TI1[15] input selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_af1 AF1 TIM alternate function option register 1
@{*/


#define TIM3_AF1_ETRSEL_SHIFT		14
#define TIM3_AF1_ETRSEL_MASK		0x0f
/** @defgroup tim3_af1_etrsel ETRSEL ETR source selection
@{*/
/**@}*/

/** TIM3_AF1_BKCMP4P BRK COMP4 input polarity **/
#define TIM3_AF1_BKCMP4P		(1 << 13)
/** TIM3_AF1_BKCMP3P BRK COMP3 input polarity **/
#define TIM3_AF1_BKCMP3P		(1 << 12)
/** TIM3_AF1_BKCMP2P BRK COMP2 input polarity **/
#define TIM3_AF1_BKCMP2P		(1 << 11)
/** TIM3_AF1_BKCMP1P BRK COMP1 input polarity **/
#define TIM3_AF1_BKCMP1P		(1 << 10)
/** TIM3_AF1_BKINP BRK BKIN input polarity **/
#define TIM3_AF1_BKINP		(1 << 9)
/** TIM3_AF1_BKCMP7E BRK COMP7 enable **/
#define TIM3_AF1_BKCMP7E		(1 << 7)
/** TIM3_AF1_BKCMP6E BRK COMP6 enable **/
#define TIM3_AF1_BKCMP6E		(1 << 6)
/** TIM3_AF1_BKCMP5E BRK COMP5 enable **/
#define TIM3_AF1_BKCMP5E		(1 << 5)
/** TIM3_AF1_BKCMP4E BRK COMP4 enable **/
#define TIM3_AF1_BKCMP4E		(1 << 4)
/** TIM3_AF1_BKCMP3E BRK COMP3 enable **/
#define TIM3_AF1_BKCMP3E		(1 << 3)
/** TIM3_AF1_BKCMP2E BRK COMP2 enable **/
#define TIM3_AF1_BKCMP2E		(1 << 2)
/** TIM3_AF1_BKCMP1E BRK COMP1 enable **/
#define TIM3_AF1_BKCMP1E		(1 << 1)
/** TIM3_AF1_BKINE BRK BKIN input enable **/
#define TIM3_AF1_BKINE		(1 << 0)

/**@}*/

/** @defgroup tim3_af2 AF2 TIM alternate function option register 2
@{*/


#define TIM3_AF2_OCRSEL_SHIFT		16
#define TIM3_AF2_OCRSEL_MASK		0x07
/** @defgroup tim3_af2_ocrsel OCRSEL OCREF_CLR source selection
@{*/
/**@}*/

/** TIM3_AF2_BK2CMP4P BRK2 COMP4 input polarity **/
#define TIM3_AF2_BK2CMP4P		(1 << 13)
/** TIM3_AF2_BK2CMP3P BRK2 COMP3 input polarity **/
#define TIM3_AF2_BK2CMP3P		(1 << 12)
/** TIM3_AF2_BK2CMP2P BRK2 COMP2 input polarity **/
#define TIM3_AF2_BK2CMP2P		(1 << 11)
/** TIM3_AF2_BK2CMP1P BRK2 COMP1 input polarity **/
#define TIM3_AF2_BK2CMP1P		(1 << 10)
/** TIM3_AF2_BK2INP BRK2 BKIN input polarity **/
#define TIM3_AF2_BK2INP		(1 << 9)
/** TIM3_AF2_BK2CMP7E BRK2 COMP7 enable **/
#define TIM3_AF2_BK2CMP7E		(1 << 7)
/** TIM3_AF2_BK2CMP6E BRK2 COMP6 enable **/
#define TIM3_AF2_BK2CMP6E		(1 << 6)
/** TIM3_AF2_BK2CMP5E BRK2 COMP5 enable **/
#define TIM3_AF2_BK2CMP5E		(1 << 5)
/** TIM3_AF2_BK2CMP4E BRK2 COMP4 enable **/
#define TIM3_AF2_BK2CMP4E		(1 << 4)
/** TIM3_AF2_BK2CMP3E BRK2 COMP3 enable **/
#define TIM3_AF2_BK2CMP3E		(1 << 3)
/** TIM3_AF2_BK2CMP2E BRK2 COMP2 enable **/
#define TIM3_AF2_BK2CMP2E		(1 << 2)
/** TIM3_AF2_BK2CMP1E BRK2 COMP1 enable **/
#define TIM3_AF2_BK2CMP1E		(1 << 1)
/** TIM3_AF2_BKINE BRK BKIN input enable **/
#define TIM3_AF2_BKINE		(1 << 0)

/**@}*/

/** @defgroup tim3_dcr DCR control register
@{*/


#define TIM3_DCR_DBL_SHIFT		8
#define TIM3_DCR_DBL_MASK		0x1f
/** @defgroup tim3_dcr_dbl DBL DMA burst length
@{*/
/**@}*/


#define TIM3_DCR_DBA_SHIFT		0
#define TIM3_DCR_DBA_MASK		0x1f
/** @defgroup tim3_dcr_dba DBA DMA base address
@{*/
/**@}*/


/**@}*/

/** @defgroup tim3_dmar DMAR DMA address for full transfer
@{*/


#define TIM3_DMAR_DMAB_SHIFT		0
#define TIM3_DMAR_DMAB_MASK		0xffffffff
/** @defgroup tim3_dmar_dmab DMAB DMA register for burst accesses
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- TIM20: General-purpose-timers -------------------------------- */

/** @defgroup tim20_registers General-purpose-timers Register
@{*/

/** TIM20_CR1 control register 1 **/
#define TIM20_CR1			MMIO32(TIM20_BASE + 0x00)
/** TIM20_CR2 control register 2 **/
#define TIM20_CR2			MMIO32(TIM20_BASE + 0x04)
/** TIM20_DIER DMA/Interrupt enable register **/
#define TIM20_DIER			MMIO32(TIM20_BASE + 0x0c)
/** TIM20_SR status register **/
#define TIM20_SR			MMIO32(TIM20_BASE + 0x10)
/** TIM20_EGR event generation register **/
#define TIM20_EGR			MMIO32(TIM20_BASE + 0x14)
/** TIM20_CCMR1_Output capture/compare mode register (output mode) **/
#define TIM20_CCMR1_Output			MMIO32(TIM20_BASE + 0x18)
/** TIM20_CCMR1_Input capture/compare mode register 1 (input mode) **/
#define TIM20_CCMR1_Input			MMIO32(TIM20_BASE + 0x18)
/** TIM20_CCER capture/compare enable register **/
#define TIM20_CCER			MMIO32(TIM20_BASE + 0x20)
/** TIM20_CNT counter **/
#define TIM20_CNT			MMIO32(TIM20_BASE + 0x24)
/** TIM20_PSC prescaler **/
#define TIM20_PSC			MMIO32(TIM20_BASE + 0x28)
/** TIM20_ARR auto-reload register **/
#define TIM20_ARR			MMIO32(TIM20_BASE + 0x2c)
/** TIM20_RCR repetition counter register **/
#define TIM20_RCR			MMIO32(TIM20_BASE + 0x30)
/** TIM20_CCR1 capture/compare register 1 **/
#define TIM20_CCR1			MMIO32(TIM20_BASE + 0x34)
/** TIM20_BDTR break and dead-time register **/
#define TIM20_BDTR			MMIO32(TIM20_BASE + 0x44)
/** TIM20_DCR DMA control register **/
#define TIM20_DCR			MMIO32(TIM20_BASE + 0x48)
/** TIM20_DMAR DMA address for full transfer **/
#define TIM20_DMAR			MMIO32(TIM20_BASE + 0x4c)

/**@}*/


/** @defgroup tim20_cr1 CR1 control register 1
@{*/


#define TIM20_CR1_CKD_SHIFT		8
#define TIM20_CR1_CKD_MASK		0x03
/** @defgroup tim20_cr1_ckd CKD Clock division
@{*/
/**@}*/

/** TIM20_CR1_ARPE Auto-reload preload enable **/
#define TIM20_CR1_ARPE		(1 << 7)
/** TIM20_CR1_OPM One-pulse mode **/
#define TIM20_CR1_OPM		(1 << 3)
/** TIM20_CR1_URS Update request source **/
#define TIM20_CR1_URS		(1 << 2)
/** TIM20_CR1_UDIS Update disable **/
#define TIM20_CR1_UDIS		(1 << 1)
/** TIM20_CR1_CEN Counter enable **/
#define TIM20_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim20_cr2 CR2 control register 2
@{*/

/** TIM20_CR2_OIS1N Output Idle state 1 **/
#define TIM20_CR2_OIS1N		(1 << 9)
/** TIM20_CR2_OIS1 Output Idle state 1 **/
#define TIM20_CR2_OIS1		(1 << 8)
/** TIM20_CR2_CCDS Capture/compare DMA selection **/
#define TIM20_CR2_CCDS		(1 << 3)
/** TIM20_CR2_CCUS Capture/compare control update selection **/
#define TIM20_CR2_CCUS		(1 << 2)
/** TIM20_CR2_CCPC Capture/compare preloaded control **/
#define TIM20_CR2_CCPC		(1 << 0)

/**@}*/

/** @defgroup tim20_dier DIER DMA/Interrupt enable register
@{*/

/** TIM20_DIER_TDE Trigger DMA request enable **/
#define TIM20_DIER_TDE		(1 << 14)
/** TIM20_DIER_CC1DE Capture/Compare 1 DMA request enable **/
#define TIM20_DIER_CC1DE		(1 << 9)
/** TIM20_DIER_UDE Update DMA request enable **/
#define TIM20_DIER_UDE		(1 << 8)
/** TIM20_DIER_BIE Break interrupt enable **/
#define TIM20_DIER_BIE		(1 << 7)
/** TIM20_DIER_TIE Trigger interrupt enable **/
#define TIM20_DIER_TIE		(1 << 6)
/** TIM20_DIER_COMIE COM interrupt enable **/
#define TIM20_DIER_COMIE		(1 << 5)
/** TIM20_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM20_DIER_CC1IE		(1 << 1)
/** TIM20_DIER_UIE Update interrupt enable **/
#define TIM20_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim20_sr SR status register
@{*/

/** TIM20_SR_CC1OF Capture/Compare 1 overcapture flag **/
#define TIM20_SR_CC1OF		(1 << 9)
/** TIM20_SR_BIF Break interrupt flag **/
#define TIM20_SR_BIF		(1 << 7)
/** TIM20_SR_TIF Trigger interrupt flag **/
#define TIM20_SR_TIF		(1 << 6)
/** TIM20_SR_COMIF COM interrupt flag **/
#define TIM20_SR_COMIF		(1 << 5)
/** TIM20_SR_CC1IF Capture/compare 1 interrupt flag **/
#define TIM20_SR_CC1IF		(1 << 1)
/** TIM20_SR_UIF Update interrupt flag **/
#define TIM20_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim20_egr EGR event generation register
@{*/

/** TIM20_EGR_BG Break generation **/
#define TIM20_EGR_BG		(1 << 7)
/** TIM20_EGR_TG Trigger generation **/
#define TIM20_EGR_TG		(1 << 6)
/** TIM20_EGR_COMG Capture/Compare control update generation **/
#define TIM20_EGR_COMG		(1 << 5)
/** TIM20_EGR_CC1G Capture/compare 1 generation **/
#define TIM20_EGR_CC1G		(1 << 1)
/** TIM20_EGR_UG Update generation **/
#define TIM20_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim20_ccmr1_output CCMR1Output capture/compare mode register (output mode)
@{*/


#define TIM20_CCMR1_Output_OC1M_SHIFT		4
#define TIM20_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim20_ccmr1_output_oc1m OC1M Output Compare 1 mode
@{*/
/**@}*/

/** TIM20_CCMR1_Output_OC1PE Output Compare 1 preload enable **/
#define TIM20_CCMR1_Output_OC1PE		(1 << 3)
/** TIM20_CCMR1_Output_OC1FE Output Compare 1 fast enable **/
#define TIM20_CCMR1_Output_OC1FE		(1 << 2)

#define TIM20_CCMR1_Output_CC1S_SHIFT		0
#define TIM20_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim20_ccmr1_output_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim20_ccmr1_input CCMR1Input capture/compare mode register 1 (input mode)
@{*/


#define TIM20_CCMR1_Input_IC1F_SHIFT		4
#define TIM20_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim20_ccmr1_input_ic1f IC1F Input capture 1 filter
@{*/
/**@}*/


#define TIM20_CCMR1_Input_IC1PSC_SHIFT		2
#define TIM20_CCMR1_Input_IC1PSC_MASK		0x03
/** @defgroup tim20_ccmr1_input_ic1psc IC1PSC Input capture 1 prescaler
@{*/
/**@}*/


#define TIM20_CCMR1_Input_CC1S_SHIFT		0
#define TIM20_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim20_ccmr1_input_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim20_ccer CCER capture/compare enable register
@{*/

/** TIM20_CCER_CC1NP Capture/Compare 1 output Polarity **/
#define TIM20_CCER_CC1NP		(1 << 3)
/** TIM20_CCER_CC1NE Capture/Compare 1 complementary output enable **/
#define TIM20_CCER_CC1NE		(1 << 2)
/** TIM20_CCER_CC1P Capture/Compare 1 output Polarity **/
#define TIM20_CCER_CC1P		(1 << 1)
/** TIM20_CCER_CC1E Capture/Compare 1 output enable **/
#define TIM20_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim20_cnt CNT counter
@{*/


#define TIM20_CNT_CNT_SHIFT		0
#define TIM20_CNT_CNT_MASK		0xffff
/** @defgroup tim20_cnt_cnt CNT counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim20_psc PSC prescaler
@{*/


#define TIM20_PSC_PSC_SHIFT		0
#define TIM20_PSC_PSC_MASK		0xffff
/** @defgroup tim20_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim20_arr ARR auto-reload register
@{*/


#define TIM20_ARR_ARR_SHIFT		0
#define TIM20_ARR_ARR_MASK		0xffff
/** @defgroup tim20_arr_arr ARR Auto-reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim20_rcr RCR repetition counter register
@{*/


#define TIM20_RCR_REP_SHIFT		0
#define TIM20_RCR_REP_MASK		0xff
/** @defgroup tim20_rcr_rep REP Repetition counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim20_ccr1 CCR1 capture/compare register 1
@{*/


#define TIM20_CCR1_CCR1_SHIFT		0
#define TIM20_CCR1_CCR1_MASK		0xffff
/** @defgroup tim20_ccr1_ccr1 CCR1 Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim20_bdtr BDTR break and dead-time register
@{*/

/** TIM20_BDTR_MOE Main output enable **/
#define TIM20_BDTR_MOE		(1 << 15)
/** TIM20_BDTR_AOE Automatic output enable **/
#define TIM20_BDTR_AOE		(1 << 14)
/** TIM20_BDTR_BKP Break polarity **/
#define TIM20_BDTR_BKP		(1 << 13)
/** TIM20_BDTR_BKE Break enable **/
#define TIM20_BDTR_BKE		(1 << 12)
/** TIM20_BDTR_OSSR Off-state selection for Run mode **/
#define TIM20_BDTR_OSSR		(1 << 11)
/** TIM20_BDTR_OSSI Off-state selection for Idle mode **/
#define TIM20_BDTR_OSSI		(1 << 10)

#define TIM20_BDTR_LOCK_SHIFT		8
#define TIM20_BDTR_LOCK_MASK		0x03
/** @defgroup tim20_bdtr_lock LOCK Lock configuration
@{*/
/**@}*/


#define TIM20_BDTR_DTG_SHIFT		0
#define TIM20_BDTR_DTG_MASK		0xff
/** @defgroup tim20_bdtr_dtg DTG Dead-time generator setup
@{*/
/**@}*/


/**@}*/

/** @defgroup tim20_dcr DCR DMA control register
@{*/


#define TIM20_DCR_DBL_SHIFT		8
#define TIM20_DCR_DBL_MASK		0x1f
/** @defgroup tim20_dcr_dbl DBL DMA burst length
@{*/
/**@}*/


#define TIM20_DCR_DBA_SHIFT		0
#define TIM20_DCR_DBA_MASK		0x1f
/** @defgroup tim20_dcr_dba DBA DMA base address
@{*/
/**@}*/


/**@}*/

/** @defgroup tim20_dmar DMAR DMA address for full transfer
@{*/


#define TIM20_DMAR_DMAB_SHIFT		0
#define TIM20_DMAR_DMAB_MASK		0xffff
/** @defgroup tim20_dmar_dmab DMAB DMA register for burst accesses
@{*/
/**@}*/


/**@}*/

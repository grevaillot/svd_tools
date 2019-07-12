#pragma once 

/* --- TIM15: General purpose timers -------------------------------- */

/** @defgroup tim15_registers General purpose timers Register
@{*/

/** TIM15_CR1 control register 1 **/
#define TIM15_CR1			MMIO32(TIM15_BASE + 0x00)
/** TIM15_CR2 control register 2 **/
#define TIM15_CR2			MMIO32(TIM15_BASE + 0x04)
/** TIM15_DIER DMA/Interrupt enable register **/
#define TIM15_DIER			MMIO32(TIM15_BASE + 0x0c)
/** TIM15_SR status register **/
#define TIM15_SR			MMIO32(TIM15_BASE + 0x10)
/** TIM15_EGR event generation register **/
#define TIM15_EGR			MMIO32(TIM15_BASE + 0x14)
/** TIM15_CCMR1_Output capture/compare mode register (output mode) **/
#define TIM15_CCMR1_Output			MMIO32(TIM15_BASE + 0x18)
/** TIM15_CCMR1_Input capture/compare mode register 1 (input mode) **/
#define TIM15_CCMR1_Input			MMIO32(TIM15_BASE + 0x18)
/** TIM15_CCER capture/compare enable register **/
#define TIM15_CCER			MMIO32(TIM15_BASE + 0x20)
/** TIM15_CNT counter **/
#define TIM15_CNT			MMIO32(TIM15_BASE + 0x24)
/** TIM15_PSC prescaler **/
#define TIM15_PSC			MMIO32(TIM15_BASE + 0x28)
/** TIM15_ARR auto-reload register **/
#define TIM15_ARR			MMIO32(TIM15_BASE + 0x2c)
/** TIM15_RCR repetition counter register **/
#define TIM15_RCR			MMIO32(TIM15_BASE + 0x30)
/** TIM15_CCR1 capture/compare register 1 **/
#define TIM15_CCR1			MMIO32(TIM15_BASE + 0x34)
/** TIM15_BDTR break and dead-time register **/
#define TIM15_BDTR			MMIO32(TIM15_BASE + 0x44)
/** TIM15_DCR DMA control register **/
#define TIM15_DCR			MMIO32(TIM15_BASE + 0x48)
/** TIM15_DMAR DMA address for full transfer **/
#define TIM15_DMAR			MMIO32(TIM15_BASE + 0x4c)

/**@}*/


/** @defgroup tim15_cr1 CR1 control register 1
@{*/

/** TIM15_CR1_UIFREMAP UIF status bit remapping **/
#define TIM15_CR1_UIFREMAP		(1 << 11)

#define TIM15_CR1_CKD_SHIFT		8
#define TIM15_CR1_CKD_MASK		0x03
/** @defgroup tim15_cr1_ckd CKD Clock division
@{*/
/**@}*/

/** TIM15_CR1_ARPE Auto-reload preload enable **/
#define TIM15_CR1_ARPE		(1 << 7)
/** TIM15_CR1_OPM One-pulse mode **/
#define TIM15_CR1_OPM		(1 << 3)
/** TIM15_CR1_URS Update request source **/
#define TIM15_CR1_URS		(1 << 2)
/** TIM15_CR1_UDIS Update disable **/
#define TIM15_CR1_UDIS		(1 << 1)
/** TIM15_CR1_CEN Counter enable **/
#define TIM15_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim15_cr2 CR2 control register 2
@{*/

/** TIM15_CR2_OIS1N Output Idle state 1 **/
#define TIM15_CR2_OIS1N		(1 << 9)
/** TIM15_CR2_OIS1 Output Idle state 1 **/
#define TIM15_CR2_OIS1		(1 << 8)
/** TIM15_CR2_CCDS Capture/compare DMA selection **/
#define TIM15_CR2_CCDS		(1 << 3)
/** TIM15_CR2_CCUS Capture/compare control update selection **/
#define TIM15_CR2_CCUS		(1 << 2)
/** TIM15_CR2_CCPC Capture/compare preloaded control **/
#define TIM15_CR2_CCPC		(1 << 0)

/**@}*/

/** @defgroup tim15_dier DIER DMA/Interrupt enable register
@{*/

/** TIM15_DIER_TDE Trigger DMA request enable **/
#define TIM15_DIER_TDE		(1 << 14)
/** TIM15_DIER_COMDE COM DMA request enable **/
#define TIM15_DIER_COMDE		(1 << 13)
/** TIM15_DIER_CC1DE Capture/Compare 1 DMA request enable **/
#define TIM15_DIER_CC1DE		(1 << 9)
/** TIM15_DIER_UDE Update DMA request enable **/
#define TIM15_DIER_UDE		(1 << 8)
/** TIM15_DIER_BIE Break interrupt enable **/
#define TIM15_DIER_BIE		(1 << 7)
/** TIM15_DIER_TIE Trigger interrupt enable **/
#define TIM15_DIER_TIE		(1 << 6)
/** TIM15_DIER_COMIE COM interrupt enable **/
#define TIM15_DIER_COMIE		(1 << 5)
/** TIM15_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM15_DIER_CC1IE		(1 << 1)
/** TIM15_DIER_UIE Update interrupt enable **/
#define TIM15_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim15_sr SR status register
@{*/

/** TIM15_SR_CC1OF Capture/Compare 1 overcapture flag **/
#define TIM15_SR_CC1OF		(1 << 9)
/** TIM15_SR_BIF Break interrupt flag **/
#define TIM15_SR_BIF		(1 << 7)
/** TIM15_SR_TIF Trigger interrupt flag **/
#define TIM15_SR_TIF		(1 << 6)
/** TIM15_SR_COMIF COM interrupt flag **/
#define TIM15_SR_COMIF		(1 << 5)
/** TIM15_SR_CC1IF Capture/compare 1 interrupt flag **/
#define TIM15_SR_CC1IF		(1 << 1)
/** TIM15_SR_UIF Update interrupt flag **/
#define TIM15_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim15_egr EGR event generation register
@{*/

/** TIM15_EGR_BG Break generation **/
#define TIM15_EGR_BG		(1 << 7)
/** TIM15_EGR_TG Trigger generation **/
#define TIM15_EGR_TG		(1 << 6)
/** TIM15_EGR_COMG Capture/Compare control update generation **/
#define TIM15_EGR_COMG		(1 << 5)
/** TIM15_EGR_CC1G Capture/compare 1 generation **/
#define TIM15_EGR_CC1G		(1 << 1)
/** TIM15_EGR_UG Update generation **/
#define TIM15_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim15_ccmr1_output CCMR1Output capture/compare mode register (output mode)
@{*/

/** TIM15_CCMR1_Output_OC1M_2 Output Compare 1 mode **/
#define TIM15_CCMR1_Output_OC1M_2		(1 << 16)

#define TIM15_CCMR1_Output_OC1M_SHIFT		4
#define TIM15_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim15_ccmr1_output_oc1m OC1M Output Compare 1 mode
@{*/
/**@}*/

/** TIM15_CCMR1_Output_OC1PE Output Compare 1 preload enable **/
#define TIM15_CCMR1_Output_OC1PE		(1 << 3)
/** TIM15_CCMR1_Output_OC1FE Output Compare 1 fast enable **/
#define TIM15_CCMR1_Output_OC1FE		(1 << 2)

#define TIM15_CCMR1_Output_CC1S_SHIFT		0
#define TIM15_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim15_ccmr1_output_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim15_ccmr1_input CCMR1Input capture/compare mode register 1 (input mode)
@{*/


#define TIM15_CCMR1_Input_IC1F_SHIFT		4
#define TIM15_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim15_ccmr1_input_ic1f IC1F Input capture 1 filter
@{*/
/**@}*/


#define TIM15_CCMR1_Input_IC1PSC_SHIFT		2
#define TIM15_CCMR1_Input_IC1PSC_MASK		0x03
/** @defgroup tim15_ccmr1_input_ic1psc IC1PSC Input capture 1 prescaler
@{*/
/**@}*/


#define TIM15_CCMR1_Input_CC1S_SHIFT		0
#define TIM15_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim15_ccmr1_input_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim15_ccer CCER capture/compare enable register
@{*/

/** TIM15_CCER_CC1NP Capture/Compare 1 output Polarity **/
#define TIM15_CCER_CC1NP		(1 << 3)
/** TIM15_CCER_CC1NE Capture/Compare 1 complementary output enable **/
#define TIM15_CCER_CC1NE		(1 << 2)
/** TIM15_CCER_CC1P Capture/Compare 1 output Polarity **/
#define TIM15_CCER_CC1P		(1 << 1)
/** TIM15_CCER_CC1E Capture/Compare 1 output enable **/
#define TIM15_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim15_cnt CNT counter
@{*/

/** TIM15_CNT_UIFCPY UIF Copy **/
#define TIM15_CNT_UIFCPY		(1 << 31)

#define TIM15_CNT_CNT_SHIFT		0
#define TIM15_CNT_CNT_MASK		0xffff
/** @defgroup tim15_cnt_cnt CNT counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim15_psc PSC prescaler
@{*/


#define TIM15_PSC_PSC_SHIFT		0
#define TIM15_PSC_PSC_MASK		0xffff
/** @defgroup tim15_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim15_arr ARR auto-reload register
@{*/


#define TIM15_ARR_ARR_SHIFT		0
#define TIM15_ARR_ARR_MASK		0xffff
/** @defgroup tim15_arr_arr ARR Auto-reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim15_rcr RCR repetition counter register
@{*/


#define TIM15_RCR_REP_SHIFT		0
#define TIM15_RCR_REP_MASK		0xff
/** @defgroup tim15_rcr_rep REP Repetition counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim15_ccr1 CCR1 capture/compare register 1
@{*/


#define TIM15_CCR1_CCR1_SHIFT		0
#define TIM15_CCR1_CCR1_MASK		0xffff
/** @defgroup tim15_ccr1_ccr1 CCR1 Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim15_bdtr BDTR break and dead-time register
@{*/


#define TIM15_BDTR_BKF_SHIFT		16
#define TIM15_BDTR_BKF_MASK		0x0f
/** @defgroup tim15_bdtr_bkf BKF Break filter
@{*/
/**@}*/

/** TIM15_BDTR_MOE Main output enable **/
#define TIM15_BDTR_MOE		(1 << 15)
/** TIM15_BDTR_AOE Automatic output enable **/
#define TIM15_BDTR_AOE		(1 << 14)
/** TIM15_BDTR_BKP Break polarity **/
#define TIM15_BDTR_BKP		(1 << 13)
/** TIM15_BDTR_BKE Break enable **/
#define TIM15_BDTR_BKE		(1 << 12)
/** TIM15_BDTR_OSSR Off-state selection for Run mode **/
#define TIM15_BDTR_OSSR		(1 << 11)
/** TIM15_BDTR_OSSI Off-state selection for Idle mode **/
#define TIM15_BDTR_OSSI		(1 << 10)

#define TIM15_BDTR_LOCK_SHIFT		8
#define TIM15_BDTR_LOCK_MASK		0x03
/** @defgroup tim15_bdtr_lock LOCK Lock configuration
@{*/
/**@}*/


#define TIM15_BDTR_DTG_SHIFT		0
#define TIM15_BDTR_DTG_MASK		0xff
/** @defgroup tim15_bdtr_dtg DTG Dead-time generator setup
@{*/
/**@}*/


/**@}*/

/** @defgroup tim15_dcr DCR DMA control register
@{*/


#define TIM15_DCR_DBL_SHIFT		8
#define TIM15_DCR_DBL_MASK		0x1f
/** @defgroup tim15_dcr_dbl DBL DMA burst length
@{*/
/**@}*/


#define TIM15_DCR_DBA_SHIFT		0
#define TIM15_DCR_DBA_MASK		0x1f
/** @defgroup tim15_dcr_dba DBA DMA base address
@{*/
/**@}*/


/**@}*/

/** @defgroup tim15_dmar DMAR DMA address for full transfer
@{*/


#define TIM15_DMAR_DMAB_SHIFT		0
#define TIM15_DMAR_DMAB_MASK		0xffff
/** @defgroup tim15_dmar_dmab DMAB DMA register for burst accesses
@{*/
/**@}*/


/**@}*/

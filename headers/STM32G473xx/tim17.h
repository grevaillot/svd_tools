#pragma once 

/* --- TIM17: General purpose timers -------------------------------- */

/** @defgroup tim17_registers General purpose timers Register
@{*/

/** TIM17_CR1 control register 1 **/
#define TIM17_CR1			MMIO32(TIM17_BASE + 0x00)
/** TIM17_CR2 control register 2 **/
#define TIM17_CR2			MMIO32(TIM17_BASE + 0x04)
/** TIM17_DIER DMA/Interrupt enable register **/
#define TIM17_DIER			MMIO32(TIM17_BASE + 0x0c)
/** TIM17_SR status register **/
#define TIM17_SR			MMIO32(TIM17_BASE + 0x10)
/** TIM17_EGR event generation register **/
#define TIM17_EGR			MMIO32(TIM17_BASE + 0x14)
/** TIM17_CCMR1_Output capture/compare mode register (output mode) **/
#define TIM17_CCMR1_Output			MMIO32(TIM17_BASE + 0x18)
/** TIM17_CCMR1_Input capture/compare mode register 1 (input mode) **/
#define TIM17_CCMR1_Input			MMIO32(TIM17_BASE + 0x18)
/** TIM17_CCER capture/compare enable register **/
#define TIM17_CCER			MMIO32(TIM17_BASE + 0x20)
/** TIM17_CNT counter **/
#define TIM17_CNT			MMIO32(TIM17_BASE + 0x24)
/** TIM17_PSC prescaler **/
#define TIM17_PSC			MMIO32(TIM17_BASE + 0x28)
/** TIM17_ARR auto-reload register **/
#define TIM17_ARR			MMIO32(TIM17_BASE + 0x2c)
/** TIM17_RCR repetition counter register **/
#define TIM17_RCR			MMIO32(TIM17_BASE + 0x30)
/** TIM17_CCR1 capture/compare register 1 **/
#define TIM17_CCR1			MMIO32(TIM17_BASE + 0x34)
/** TIM17_BDTR break and dead-time register **/
#define TIM17_BDTR			MMIO32(TIM17_BASE + 0x44)
/** TIM17_DTR2 timer Deadtime Register 2 **/
#define TIM17_DTR2			MMIO32(TIM17_BASE + 0x54)
/** TIM17_TISEL TIM timer input selection register **/
#define TIM17_TISEL			MMIO32(TIM17_BASE + 0x5c)
/** TIM17_AF1 TIM alternate function option register 1 **/
#define TIM17_AF1			MMIO32(TIM17_BASE + 0x60)
/** TIM17_AF2 TIM alternate function option register 2 **/
#define TIM17_AF2			MMIO32(TIM17_BASE + 0x64)
/** TIM17_DCR DMA control register **/
#define TIM17_DCR			MMIO32(TIM17_BASE + 0x3dc)
/** TIM17_DMAR DMA address for full transfer **/
#define TIM17_DMAR			MMIO32(TIM17_BASE + 0x3e0)

/**@}*/


/** @defgroup tim17_cr1 CR1 control register 1
@{*/

/** TIM17_CR1_DITHEN Dithering Enable **/
#define TIM17_CR1_DITHEN		(1 << 12)
/** TIM17_CR1_UIFREMAP UIF status bit remapping **/
#define TIM17_CR1_UIFREMAP		(1 << 11)

#define TIM17_CR1_CKD_SHIFT		8
#define TIM17_CR1_CKD_MASK		0x03
/** @defgroup tim17_cr1_ckd CKD Clock division
@{*/
/**@}*/

/** TIM17_CR1_ARPE Auto-reload preload enable **/
#define TIM17_CR1_ARPE		(1 << 7)
/** TIM17_CR1_OPM One-pulse mode **/
#define TIM17_CR1_OPM		(1 << 3)
/** TIM17_CR1_URS Update request source **/
#define TIM17_CR1_URS		(1 << 2)
/** TIM17_CR1_UDIS Update disable **/
#define TIM17_CR1_UDIS		(1 << 1)
/** TIM17_CR1_CEN Counter enable **/
#define TIM17_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim17_cr2 CR2 control register 2
@{*/

/** TIM17_CR2_OIS1N Output Idle state 1 **/
#define TIM17_CR2_OIS1N		(1 << 9)
/** TIM17_CR2_OIS1 Output Idle state 1 **/
#define TIM17_CR2_OIS1		(1 << 8)
/** TIM17_CR2_CCDS Capture/compare DMA selection **/
#define TIM17_CR2_CCDS		(1 << 3)
/** TIM17_CR2_CCUS Capture/compare control update selection **/
#define TIM17_CR2_CCUS		(1 << 2)
/** TIM17_CR2_CCPC Capture/compare preloaded control **/
#define TIM17_CR2_CCPC		(1 << 0)

/**@}*/

/** @defgroup tim17_dier DIER DMA/Interrupt enable register
@{*/

/** TIM17_DIER_COMDE COM DMA request enable **/
#define TIM17_DIER_COMDE		(1 << 13)
/** TIM17_DIER_CC1DE Capture/Compare 1 DMA request enable **/
#define TIM17_DIER_CC1DE		(1 << 9)
/** TIM17_DIER_UDE Update DMA request enable **/
#define TIM17_DIER_UDE		(1 << 8)
/** TIM17_DIER_BIE Break interrupt enable **/
#define TIM17_DIER_BIE		(1 << 7)
/** TIM17_DIER_COMIE COM interrupt enable **/
#define TIM17_DIER_COMIE		(1 << 5)
/** TIM17_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM17_DIER_CC1IE		(1 << 1)
/** TIM17_DIER_UIE Update interrupt enable **/
#define TIM17_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim17_sr SR status register
@{*/

/** TIM17_SR_CC1OF Capture/Compare 1 overcapture flag **/
#define TIM17_SR_CC1OF		(1 << 9)
/** TIM17_SR_BIF Break interrupt flag **/
#define TIM17_SR_BIF		(1 << 7)
/** TIM17_SR_COMIF COM interrupt flag **/
#define TIM17_SR_COMIF		(1 << 5)
/** TIM17_SR_CC1IF Capture/compare 1 interrupt flag **/
#define TIM17_SR_CC1IF		(1 << 1)
/** TIM17_SR_UIF Update interrupt flag **/
#define TIM17_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim17_egr EGR event generation register
@{*/

/** TIM17_EGR_BG Break generation **/
#define TIM17_EGR_BG		(1 << 7)
/** TIM17_EGR_COMG Capture/Compare control update generation **/
#define TIM17_EGR_COMG		(1 << 5)
/** TIM17_EGR_CC1G Capture/compare 1 generation **/
#define TIM17_EGR_CC1G		(1 << 1)
/** TIM17_EGR_UG Update generation **/
#define TIM17_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim17_ccmr1_output CCMR1Output capture/compare mode register (output mode)
@{*/

/** TIM17_CCMR1_Output_OC1M_3 Output Compare 1 mode **/
#define TIM17_CCMR1_Output_OC1M_3		(1 << 16)

#define TIM17_CCMR1_Output_OC1M_SHIFT		4
#define TIM17_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim17_ccmr1_output_oc1m OC1M Output Compare 1 mode
@{*/
/**@}*/

/** TIM17_CCMR1_Output_OC1PE Output Compare 1 preload enable **/
#define TIM17_CCMR1_Output_OC1PE		(1 << 3)
/** TIM17_CCMR1_Output_OC1FE Output Compare 1 fast enable **/
#define TIM17_CCMR1_Output_OC1FE		(1 << 2)

#define TIM17_CCMR1_Output_CC1S_SHIFT		0
#define TIM17_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim17_ccmr1_output_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim17_ccmr1_input CCMR1Input capture/compare mode register 1 (input mode)
@{*/


#define TIM17_CCMR1_Input_IC1F_SHIFT		4
#define TIM17_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim17_ccmr1_input_ic1f IC1F Input capture 1 filter
@{*/
/**@}*/


#define TIM17_CCMR1_Input_IC1PSC_SHIFT		2
#define TIM17_CCMR1_Input_IC1PSC_MASK		0x03
/** @defgroup tim17_ccmr1_input_ic1psc IC1PSC Input capture 1 prescaler
@{*/
/**@}*/


#define TIM17_CCMR1_Input_CC1S_SHIFT		0
#define TIM17_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim17_ccmr1_input_cc1s CC1S Capture/Compare 1 selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim17_ccer CCER capture/compare enable register
@{*/

/** TIM17_CCER_CC1NP Capture/Compare 1 output Polarity **/
#define TIM17_CCER_CC1NP		(1 << 3)
/** TIM17_CCER_CC1NE Capture/Compare 1 complementary output enable **/
#define TIM17_CCER_CC1NE		(1 << 2)
/** TIM17_CCER_CC1P Capture/Compare 1 output Polarity **/
#define TIM17_CCER_CC1P		(1 << 1)
/** TIM17_CCER_CC1E Capture/Compare 1 output enable **/
#define TIM17_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim17_cnt CNT counter
@{*/

/** TIM17_CNT_UIFCPY UIF Copy **/
#define TIM17_CNT_UIFCPY		(1 << 31)

#define TIM17_CNT_CNT_SHIFT		0
#define TIM17_CNT_CNT_MASK		0xffff
/** @defgroup tim17_cnt_cnt CNT counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim17_psc PSC prescaler
@{*/


#define TIM17_PSC_PSC_SHIFT		0
#define TIM17_PSC_PSC_MASK		0xffff
/** @defgroup tim17_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim17_arr ARR auto-reload register
@{*/


#define TIM17_ARR_ARR_SHIFT		0
#define TIM17_ARR_ARR_MASK		0xffff
/** @defgroup tim17_arr_arr ARR Auto-reload value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim17_rcr RCR repetition counter register
@{*/


#define TIM17_RCR_REP_SHIFT		0
#define TIM17_RCR_REP_MASK		0xff
/** @defgroup tim17_rcr_rep REP Repetition counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim17_ccr1 CCR1 capture/compare register 1
@{*/


#define TIM17_CCR1_CCR1_SHIFT		0
#define TIM17_CCR1_CCR1_MASK		0xffff
/** @defgroup tim17_ccr1_ccr1 CCR1 Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim17_bdtr BDTR break and dead-time register
@{*/

/** TIM17_BDTR_BKBID BKBID **/
#define TIM17_BDTR_BKBID		(1 << 28)
/** TIM17_BDTR_BKDSRM BKDSRM **/
#define TIM17_BDTR_BKDSRM		(1 << 26)

#define TIM17_BDTR_BKF_SHIFT		16
#define TIM17_BDTR_BKF_MASK		0x0f
/** @defgroup tim17_bdtr_bkf BKF Break filter
@{*/
/**@}*/

/** TIM17_BDTR_MOE Main output enable **/
#define TIM17_BDTR_MOE		(1 << 15)
/** TIM17_BDTR_AOE Automatic output enable **/
#define TIM17_BDTR_AOE		(1 << 14)
/** TIM17_BDTR_BKP Break polarity **/
#define TIM17_BDTR_BKP		(1 << 13)
/** TIM17_BDTR_BKE Break enable **/
#define TIM17_BDTR_BKE		(1 << 12)
/** TIM17_BDTR_OSSR Off-state selection for Run mode **/
#define TIM17_BDTR_OSSR		(1 << 11)
/** TIM17_BDTR_OSSI Off-state selection for Idle mode **/
#define TIM17_BDTR_OSSI		(1 << 10)

#define TIM17_BDTR_LOCK_SHIFT		8
#define TIM17_BDTR_LOCK_MASK		0x03
/** @defgroup tim17_bdtr_lock LOCK Lock configuration
@{*/
/**@}*/


#define TIM17_BDTR_DTG_SHIFT		0
#define TIM17_BDTR_DTG_MASK		0xff
/** @defgroup tim17_bdtr_dtg DTG Dead-time generator setup
@{*/
/**@}*/


/**@}*/

/** @defgroup tim17_dtr2 DTR2 timer Deadtime Register 2
@{*/

/** TIM17_DTR2_DTPE Deadtime Preload Enable **/
#define TIM17_DTR2_DTPE		(1 << 17)
/** TIM17_DTR2_DTAE Deadtime Asymmetric Enable **/
#define TIM17_DTR2_DTAE		(1 << 16)

#define TIM17_DTR2_DTGF_SHIFT		0
#define TIM17_DTR2_DTGF_MASK		0xff
/** @defgroup tim17_dtr2_dtgf DTGF Dead-time generator setup
@{*/
/**@}*/


/**@}*/

/** @defgroup tim17_tisel TISEL TIM timer input selection register
@{*/


#define TIM17_TISEL_TI1SEL_SHIFT		0
#define TIM17_TISEL_TI1SEL_MASK		0x0f
/** @defgroup tim17_tisel_ti1sel TI1SEL TI1[0] to TI1[15] input selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim17_af1 AF1 TIM alternate function option register 1
@{*/

/** TIM17_AF1_BKCMP4P BRK COMP4 input polarity **/
#define TIM17_AF1_BKCMP4P		(1 << 13)
/** TIM17_AF1_BKCMP3P BRK COMP3 input polarity **/
#define TIM17_AF1_BKCMP3P		(1 << 12)
/** TIM17_AF1_BKCMP2P BRK COMP2 input polarity **/
#define TIM17_AF1_BKCMP2P		(1 << 11)
/** TIM17_AF1_BKCMP1P BRK COMP1 input polarity **/
#define TIM17_AF1_BKCMP1P		(1 << 10)
/** TIM17_AF1_BKINP BRK BKIN input polarity **/
#define TIM17_AF1_BKINP		(1 << 9)
/** TIM17_AF1_BKCMP7E BRK COMP7 enable **/
#define TIM17_AF1_BKCMP7E		(1 << 7)
/** TIM17_AF1_BKCMP6E BRK COMP6 enable **/
#define TIM17_AF1_BKCMP6E		(1 << 6)
/** TIM17_AF1_BKCMP5E BRK COMP5 enable **/
#define TIM17_AF1_BKCMP5E		(1 << 5)
/** TIM17_AF1_BKCMP4E BRK COMP4 enable **/
#define TIM17_AF1_BKCMP4E		(1 << 4)
/** TIM17_AF1_BKCMP3E BRK COMP3 enable **/
#define TIM17_AF1_BKCMP3E		(1 << 3)
/** TIM17_AF1_BKCMP2E BRK COMP2 enable **/
#define TIM17_AF1_BKCMP2E		(1 << 2)
/** TIM17_AF1_BKCMP1E BRK COMP1 enable **/
#define TIM17_AF1_BKCMP1E		(1 << 1)
/** TIM17_AF1_BKINE BRK BKIN input enable **/
#define TIM17_AF1_BKINE		(1 << 0)

/**@}*/

/** @defgroup tim17_af2 AF2 TIM alternate function option register 2
@{*/


#define TIM17_AF2_OCRSEL_SHIFT		16
#define TIM17_AF2_OCRSEL_MASK		0x07
/** @defgroup tim17_af2_ocrsel OCRSEL OCREF_CLR source selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim17_dcr DCR DMA control register
@{*/


#define TIM17_DCR_DBL_SHIFT		8
#define TIM17_DCR_DBL_MASK		0x1f
/** @defgroup tim17_dcr_dbl DBL DMA burst length
@{*/
/**@}*/


#define TIM17_DCR_DBA_SHIFT		0
#define TIM17_DCR_DBA_MASK		0x1f
/** @defgroup tim17_dcr_dba DBA DMA base address
@{*/
/**@}*/


/**@}*/

/** @defgroup tim17_dmar DMAR DMA address for full transfer
@{*/


#define TIM17_DMAR_DMAB_SHIFT		0
#define TIM17_DMAR_DMAB_MASK		0xffffffff
/** @defgroup tim17_dmar_dmab DMAB DMA register for burst accesses
@{*/
/**@}*/


/**@}*/

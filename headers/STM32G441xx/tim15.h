#pragma once 

/* --- TIM15: General purpose timers -------------------------------- */

/** @defgroup tim15_registers General purpose timers Register
@{*/

/** TIM15_CR1 control register 1 **/
#define TIM15_CR1			MMIO32(TIM15_BASE + 0x00)
/** TIM15_CR2 control register 2 **/
#define TIM15_CR2			MMIO32(TIM15_BASE + 0x04)
/** TIM15_SMCR slave mode control register **/
#define TIM15_SMCR			MMIO32(TIM15_BASE + 0x08)
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
/** TIM15_CCR2 capture/compare register 2 **/
#define TIM15_CCR2			MMIO32(TIM15_BASE + 0x38)
/** TIM15_BDTR break and dead-time register **/
#define TIM15_BDTR			MMIO32(TIM15_BASE + 0x44)
/** TIM15_DTR2 timer Deadtime Register 2 **/
#define TIM15_DTR2			MMIO32(TIM15_BASE + 0x54)
/** TIM15_TISEL TIM timer input selection register **/
#define TIM15_TISEL			MMIO32(TIM15_BASE + 0x5c)
/** TIM15_AF1 TIM alternate function option register 1 **/
#define TIM15_AF1			MMIO32(TIM15_BASE + 0x60)
/** TIM15_AF2 TIM alternate function option register 2 **/
#define TIM15_AF2			MMIO32(TIM15_BASE + 0x64)
/** TIM15_DCR DMA control register **/
#define TIM15_DCR			MMIO32(TIM15_BASE + 0x3dc)
/** TIM15_DMAR DMA address for full transfer **/
#define TIM15_DMAR			MMIO32(TIM15_BASE + 0x3e0)

/**@}*/


/** @defgroup tim15_cr1 CR1 control register 1
@{*/

/** TIM15_CR1_DITHEN Dithering Enable **/
#define TIM15_CR1_DITHEN		(1 << 12)
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

/** TIM15_CR2_OIS2 Output idle state 2 (OC2 output) **/
#define TIM15_CR2_OIS2		(1 << 10)
/** TIM15_CR2_OIS1N Output Idle state 1 **/
#define TIM15_CR2_OIS1N		(1 << 9)
/** TIM15_CR2_OIS1 Output Idle state 1 **/
#define TIM15_CR2_OIS1		(1 << 8)
/** TIM15_CR2_TI1S TI1 selection **/
#define TIM15_CR2_TI1S		(1 << 7)

#define TIM15_CR2_MMS_SHIFT		4
#define TIM15_CR2_MMS_MASK		0x07
/** @defgroup tim15_cr2_mms MMS Master mode selection
@{*/
/**@}*/

/** TIM15_CR2_CCDS Capture/compare DMA selection **/
#define TIM15_CR2_CCDS		(1 << 3)
/** TIM15_CR2_CCUS Capture/compare control update selection **/
#define TIM15_CR2_CCUS		(1 << 2)
/** TIM15_CR2_CCPC Capture/compare preloaded control **/
#define TIM15_CR2_CCPC		(1 << 0)

/**@}*/

/** @defgroup tim15_smcr SMCR slave mode control register
@{*/


#define TIM15_SMCR_TS_4_3_SHIFT		20
#define TIM15_SMCR_TS_4_3_MASK		0x03
/** @defgroup tim15_smcr_ts_4_3 TS43 Trigger selection - bit 4:3
@{*/
/**@}*/

/** TIM15_SMCR_SMS_3 Slave mode selection - bit 3 **/
#define TIM15_SMCR_SMS_3		(1 << 16)
/** TIM15_SMCR_MSM Master/Slave mode **/
#define TIM15_SMCR_MSM		(1 << 7)

#define TIM15_SMCR_TS_SHIFT		4
#define TIM15_SMCR_TS_MASK		0x07
/** @defgroup tim15_smcr_ts TS Trigger selection
@{*/
/**@}*/


#define TIM15_SMCR_SMS_SHIFT		0
#define TIM15_SMCR_SMS_MASK		0x07
/** @defgroup tim15_smcr_sms SMS Slave mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim15_dier DIER DMA/Interrupt enable register
@{*/

/** TIM15_DIER_TDE Trigger DMA request enable **/
#define TIM15_DIER_TDE		(1 << 14)
/** TIM15_DIER_COMDE COM DMA request enable **/
#define TIM15_DIER_COMDE		(1 << 13)
/** TIM15_DIER_CC2DE Capture/Compare 2 DMA request enable **/
#define TIM15_DIER_CC2DE		(1 << 10)
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
/** TIM15_DIER_CC2IE Capture/Compare 2 interrupt enable **/
#define TIM15_DIER_CC2IE		(1 << 2)
/** TIM15_DIER_CC1IE Capture/Compare 1 interrupt enable **/
#define TIM15_DIER_CC1IE		(1 << 1)
/** TIM15_DIER_UIE Update interrupt enable **/
#define TIM15_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim15_sr SR status register
@{*/

/** TIM15_SR_CC2OF Capture/Compare 2 overcapture flag **/
#define TIM15_SR_CC2OF		(1 << 10)
/** TIM15_SR_CC1OF Capture/Compare 1 overcapture flag **/
#define TIM15_SR_CC1OF		(1 << 9)
/** TIM15_SR_BIF Break interrupt flag **/
#define TIM15_SR_BIF		(1 << 7)
/** TIM15_SR_TIF Trigger interrupt flag **/
#define TIM15_SR_TIF		(1 << 6)
/** TIM15_SR_COMIF COM interrupt flag **/
#define TIM15_SR_COMIF		(1 << 5)
/** TIM15_SR_CC2IF Capture/compare 2 interrupt flag **/
#define TIM15_SR_CC2IF		(1 << 2)
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
/** TIM15_EGR_CC2G Capture/compare 2 generation **/
#define TIM15_EGR_CC2G		(1 << 2)
/** TIM15_EGR_CC1G Capture/compare 1 generation **/
#define TIM15_EGR_CC1G		(1 << 1)
/** TIM15_EGR_UG Update generation **/
#define TIM15_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim15_ccmr1_output CCMR1Output capture/compare mode register (output mode)
@{*/

/** TIM15_CCMR1_Output_OC2M_3 Output Compare 2 mode - bit 3 **/
#define TIM15_CCMR1_Output_OC2M_3		(1 << 24)
/** TIM15_CCMR1_Output_OC1M_3 Output Compare 1 mode **/
#define TIM15_CCMR1_Output_OC1M_3		(1 << 16)

#define TIM15_CCMR1_Output_OC2M_SHIFT		12
#define TIM15_CCMR1_Output_OC2M_MASK		0x07
/** @defgroup tim15_ccmr1_output_oc2m OC2M OC2M
@{*/
/**@}*/

/** TIM15_CCMR1_Output_OC2PE OC2PE **/
#define TIM15_CCMR1_Output_OC2PE		(1 << 11)
/** TIM15_CCMR1_Output_OC2FE OC2FE **/
#define TIM15_CCMR1_Output_OC2FE		(1 << 10)

#define TIM15_CCMR1_Output_CC2S_SHIFT		8
#define TIM15_CCMR1_Output_CC2S_MASK		0x03
/** @defgroup tim15_ccmr1_output_cc2s CC2S CC2S
@{*/
/**@}*/

/** TIM15_CCMR1_Output_OC1CE OC1CE **/
#define TIM15_CCMR1_Output_OC1CE		(1 << 7)

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


#define TIM15_CCMR1_Input_IC2F_SHIFT		12
#define TIM15_CCMR1_Input_IC2F_MASK		0x0f
/** @defgroup tim15_ccmr1_input_ic2f IC2F IC2F
@{*/
/**@}*/


#define TIM15_CCMR1_Input_IC2PSC_SHIFT		10
#define TIM15_CCMR1_Input_IC2PSC_MASK		0x03
/** @defgroup tim15_ccmr1_input_ic2psc IC2PSC IC2PSC
@{*/
/**@}*/


#define TIM15_CCMR1_Input_CC2S_SHIFT		8
#define TIM15_CCMR1_Input_CC2S_MASK		0x03
/** @defgroup tim15_ccmr1_input_cc2s CC2S CC2S
@{*/
/**@}*/


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

/** TIM15_CCER_CC2NP Capture/Compare 2 complementary output polarity **/
#define TIM15_CCER_CC2NP		(1 << 7)
/** TIM15_CCER_CC2P Capture/Compare 2 output polarity **/
#define TIM15_CCER_CC2P		(1 << 5)
/** TIM15_CCER_CC2E Capture/Compare 2 output enable **/
#define TIM15_CCER_CC2E		(1 << 4)
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

/** @defgroup tim15_ccr2 CCR2 capture/compare register 2
@{*/


#define TIM15_CCR2_CCR2_SHIFT		0
#define TIM15_CCR2_CCR2_MASK		0xffff
/** @defgroup tim15_ccr2_ccr2 CCR2 Capture/Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim15_bdtr BDTR break and dead-time register
@{*/

/** TIM15_BDTR_BKBID BKBID **/
#define TIM15_BDTR_BKBID		(1 << 28)
/** TIM15_BDTR_BKDSRM BKDSRM **/
#define TIM15_BDTR_BKDSRM		(1 << 26)

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

/** @defgroup tim15_dtr2 DTR2 timer Deadtime Register 2
@{*/

/** TIM15_DTR2_DTPE Deadtime Preload Enable **/
#define TIM15_DTR2_DTPE		(1 << 17)
/** TIM15_DTR2_DTAE Deadtime Asymmetric Enable **/
#define TIM15_DTR2_DTAE		(1 << 16)

#define TIM15_DTR2_DTGF_SHIFT		0
#define TIM15_DTR2_DTGF_MASK		0xff
/** @defgroup tim15_dtr2_dtgf DTGF Dead-time generator setup
@{*/
/**@}*/


/**@}*/

/** @defgroup tim15_tisel TISEL TIM timer input selection register
@{*/


#define TIM15_TISEL_TI2SEL_SHIFT		8
#define TIM15_TISEL_TI2SEL_MASK		0x0f
/** @defgroup tim15_tisel_ti2sel TI2SEL TI2[0] to TI2[15] input selection
@{*/
/**@}*/


#define TIM15_TISEL_TI1SEL_SHIFT		0
#define TIM15_TISEL_TI1SEL_MASK		0x0f
/** @defgroup tim15_tisel_ti1sel TI1SEL TI1[0] to TI1[15] input selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim15_af1 AF1 TIM alternate function option register 1
@{*/

/** TIM15_AF1_BKCMP4P BRK COMP4 input polarity **/
#define TIM15_AF1_BKCMP4P		(1 << 13)
/** TIM15_AF1_BKCMP3P BRK COMP3 input polarity **/
#define TIM15_AF1_BKCMP3P		(1 << 12)
/** TIM15_AF1_BKCMP2P BRK COMP2 input polarity **/
#define TIM15_AF1_BKCMP2P		(1 << 11)
/** TIM15_AF1_BKCMP1P BRK COMP1 input polarity **/
#define TIM15_AF1_BKCMP1P		(1 << 10)
/** TIM15_AF1_BKINP BRK BKIN input polarity **/
#define TIM15_AF1_BKINP		(1 << 9)
/** TIM15_AF1_BKCMP7E BRK COMP7 enable **/
#define TIM15_AF1_BKCMP7E		(1 << 7)
/** TIM15_AF1_BKCMP6E BRK COMP6 enable **/
#define TIM15_AF1_BKCMP6E		(1 << 6)
/** TIM15_AF1_BKCMP5E BRK COMP5 enable **/
#define TIM15_AF1_BKCMP5E		(1 << 5)
/** TIM15_AF1_BKCMP4E BRK COMP4 enable **/
#define TIM15_AF1_BKCMP4E		(1 << 4)
/** TIM15_AF1_BKCMP3E BRK COMP3 enable **/
#define TIM15_AF1_BKCMP3E		(1 << 3)
/** TIM15_AF1_BKCMP2E BRK COMP2 enable **/
#define TIM15_AF1_BKCMP2E		(1 << 2)
/** TIM15_AF1_BKCMP1E BRK COMP1 enable **/
#define TIM15_AF1_BKCMP1E		(1 << 1)
/** TIM15_AF1_BKINE BRK BKIN input enable **/
#define TIM15_AF1_BKINE		(1 << 0)

/**@}*/

/** @defgroup tim15_af2 AF2 TIM alternate function option register 2
@{*/


#define TIM15_AF2_OCRSEL_SHIFT		16
#define TIM15_AF2_OCRSEL_MASK		0x07
/** @defgroup tim15_af2_ocrsel OCRSEL OCREF_CLR source selection
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
#define TIM15_DMAR_DMAB_MASK		0xffffffff
/** @defgroup tim15_dmar_dmab DMAB DMA register for burst accesses
@{*/
/**@}*/


/**@}*/

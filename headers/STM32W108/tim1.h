#pragma once 

/* --- TIM1: General purpose timer 1 -------------------------------- */

/** @defgroup tim1_registers General purpose timer 1 Register
@{*/

/** TIM1_TIM1_ISR TIM Interrupt Status Register **/
#define TIM1_TIM1_ISR			MMIO32(TIM1_BASE + 0x00)
/** TIM1_TIM1_MISSR TIM interrupt missed register **/
#define TIM1_TIM1_MISSR			MMIO32(TIM1_BASE + 0x18)
/** TIM1_TIM1_IER TIM Interrupt Enable Register **/
#define TIM1_TIM1_IER			MMIO32(TIM1_BASE + 0x40)
/** TIM1_TIM1_CR1 control register 1 **/
#define TIM1_TIM1_CR1			MMIO32(TIM1_BASE + 0x3800)
/** TIM1_TIM1_CR2 control register 2 **/
#define TIM1_TIM1_CR2			MMIO32(TIM1_BASE + 0x3804)
/** TIM1_TIM1_SMCR slave Mode Control register **/
#define TIM1_TIM1_SMCR			MMIO32(TIM1_BASE + 0x3808)
/** TIM1_TIM1_EGR TIM event generation register **/
#define TIM1_TIM1_EGR			MMIO32(TIM1_BASE + 0x3814)
/** TIM1_TIM1_CCMR1_Input capture/compare mode register 1 (Input mode) **/
#define TIM1_TIM1_CCMR1_Input			MMIO32(TIM1_BASE + 0x3818)
/** TIM1_TIM1_CCMR1_Output capture/compare mode register 1 (output mode) **/
#define TIM1_TIM1_CCMR1_Output			MMIO32(TIM1_BASE + 0x3818)
/** TIM1_TIM1_CCMR2_Input capture/compare mode register 2 (input mode) **/
#define TIM1_TIM1_CCMR2_Input			MMIO32(TIM1_BASE + 0x381c)
/** TIM1_TIM1_CCMR2_Output capture/compare mode register 2 (output mode) **/
#define TIM1_TIM1_CCMR2_Output			MMIO32(TIM1_BASE + 0x381c)
/** TIM1_TIM1_CCER TIM capture/compare enable register **/
#define TIM1_TIM1_CCER			MMIO32(TIM1_BASE + 0x3820)
/** TIM1_TIM1_CNT TIM counter register **/
#define TIM1_TIM1_CNT			MMIO32(TIM1_BASE + 0x3824)
/** TIM1_TIM1_PSC TIM prescaler register **/
#define TIM1_TIM1_PSC			MMIO32(TIM1_BASE + 0x3828)
/** TIM1_TIM1_ARR TIM auto-reload register **/
#define TIM1_TIM1_ARR			MMIO32(TIM1_BASE + 0x382c)
/** TIM1_TIM1_CCR1 IM capture/compare register 1 **/
#define TIM1_TIM1_CCR1			MMIO32(TIM1_BASE + 0x3834)
/** TIM1_TIM1_CCR2 TIM capture/compare register 2 **/
#define TIM1_TIM1_CCR2			MMIO32(TIM1_BASE + 0x3838)
/** TIM1_TIM1_CCR3 TIM capture/compare register 3 **/
#define TIM1_TIM1_CCR3			MMIO32(TIM1_BASE + 0x383c)
/** TIM1_TIM1_CCR4 TIM capture/compare register 4 **/
#define TIM1_TIM1_CCR4			MMIO32(TIM1_BASE + 0x3840)
/** TIM1_TIM1_OR TIM option register **/
#define TIM1_TIM1_OR			MMIO32(TIM1_BASE + 0x3850)

/**@}*/


/** @defgroup tim1_tim1_isr TIM1ISR TIM Interrupt Status Register
@{*/


#define TIM1_TIM1_ISR_RSVD_SHIFT		8
#define TIM1_TIM1_ISR_RSVD_MASK		0x1f
/** @defgroup tim1_tim1_isr_rsvd RSVD RSVD
@{*/
/**@}*/

/** TIM1_TIM1_ISR_TIF TIF **/
#define TIM1_TIM1_ISR_TIF		(1 << 6)
/** TIM1_TIM1_ISR_CC4IF CC4IF **/
#define TIM1_TIM1_ISR_CC4IF		(1 << 4)
/** TIM1_TIM1_ISR_CC3IF CC3IF **/
#define TIM1_TIM1_ISR_CC3IF		(1 << 3)
/** TIM1_TIM1_ISR_CC2IF CC2IF **/
#define TIM1_TIM1_ISR_CC2IF		(1 << 2)
/** TIM1_TIM1_ISR_CC1IF CC1IF **/
#define TIM1_TIM1_ISR_CC1IF		(1 << 1)
/** TIM1_TIM1_ISR_UIF UIF **/
#define TIM1_TIM1_ISR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim1_tim1_missr TIM1MISSR TIM interrupt missed register
@{*/

/** TIM1_TIM1_MISSR_CC4IM CC4IM **/
#define TIM1_TIM1_MISSR_CC4IM		(1 << 12)
/** TIM1_TIM1_MISSR_CC3IM CC3IM **/
#define TIM1_TIM1_MISSR_CC3IM		(1 << 11)
/** TIM1_TIM1_MISSR_CC2IM CC2IM **/
#define TIM1_TIM1_MISSR_CC2IM		(1 << 10)
/** TIM1_TIM1_MISSR_CC1IM CC1IM **/
#define TIM1_TIM1_MISSR_CC1IM		(1 << 9)

#define TIM1_TIM1_MISSR_RSVD_SHIFT		0
#define TIM1_TIM1_MISSR_RSVD_MASK		0x7f
/** @defgroup tim1_tim1_missr_rsvd RSVD RSVD
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_ier TIM1IER TIM Interrupt Enable Register
@{*/

/** TIM1_TIM1_IER_TIE TIE **/
#define TIM1_TIM1_IER_TIE		(1 << 6)
/** TIM1_TIM1_IER_CC4IE CC4IE **/
#define TIM1_TIM1_IER_CC4IE		(1 << 4)
/** TIM1_TIM1_IER_CC3IE CC3IE **/
#define TIM1_TIM1_IER_CC3IE		(1 << 3)
/** TIM1_TIM1_IER_CC2IE CC2IE **/
#define TIM1_TIM1_IER_CC2IE		(1 << 2)
/** TIM1_TIM1_IER_CC1IE CC1IE **/
#define TIM1_TIM1_IER_CC1IE		(1 << 1)
/** TIM1_TIM1_IER_UIE UIE **/
#define TIM1_TIM1_IER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim1_tim1_cr1 TIM1CR1 control register 1
@{*/

/** TIM1_TIM1_CR1_ARBE ARBE **/
#define TIM1_TIM1_CR1_ARBE		(1 << 7)

#define TIM1_TIM1_CR1_CMS_SHIFT		5
#define TIM1_TIM1_CR1_CMS_MASK		0x03
/** @defgroup tim1_tim1_cr1_cms CMS CMS
@{*/
/**@}*/

/** TIM1_TIM1_CR1_DIR DIR **/
#define TIM1_TIM1_CR1_DIR		(1 << 4)
/** TIM1_TIM1_CR1_OPM OPM **/
#define TIM1_TIM1_CR1_OPM		(1 << 3)
/** TIM1_TIM1_CR1_URS URS **/
#define TIM1_TIM1_CR1_URS		(1 << 2)
/** TIM1_TIM1_CR1_UDIS UDIS **/
#define TIM1_TIM1_CR1_UDIS		(1 << 1)
/** TIM1_TIM1_CR1_CEN CEN **/
#define TIM1_TIM1_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim1_tim1_cr2 TIM1CR2 control register 2
@{*/

/** TIM1_TIM1_CR2_TI1S TI1S **/
#define TIM1_TIM1_CR2_TI1S		(1 << 7)

#define TIM1_TIM1_CR2_MMS_SHIFT		4
#define TIM1_TIM1_CR2_MMS_MASK		0x07
/** @defgroup tim1_tim1_cr2_mms MMS MMS
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_smcr TIM1SMCR slave Mode Control register
@{*/

/** TIM1_TIM1_SMCR_ETP ETP **/
#define TIM1_TIM1_SMCR_ETP		(1 << 15)
/** TIM1_TIM1_SMCR_ECE ECE **/
#define TIM1_TIM1_SMCR_ECE		(1 << 14)

#define TIM1_TIM1_SMCR_ETPS_SHIFT		12
#define TIM1_TIM1_SMCR_ETPS_MASK		0x03
/** @defgroup tim1_tim1_smcr_etps ETPS ETPS
@{*/
/**@}*/


#define TIM1_TIM1_SMCR_ETF_SHIFT		8
#define TIM1_TIM1_SMCR_ETF_MASK		0x0f
/** @defgroup tim1_tim1_smcr_etf ETF ETF
@{*/
/**@}*/

/** TIM1_TIM1_SMCR_MSM MSM **/
#define TIM1_TIM1_SMCR_MSM		(1 << 7)

#define TIM1_TIM1_SMCR_TS_SHIFT		4
#define TIM1_TIM1_SMCR_TS_MASK		0x07
/** @defgroup tim1_tim1_smcr_ts TS TS
@{*/
/**@}*/


#define TIM1_TIM1_SMCR_SMS_SHIFT		0
#define TIM1_TIM1_SMCR_SMS_MASK		0x07
/** @defgroup tim1_tim1_smcr_sms SMS SMS
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_egr TIM1EGR TIM event generation register
@{*/

/** TIM1_TIM1_EGR_TG TG **/
#define TIM1_TIM1_EGR_TG		(1 << 6)
/** TIM1_TIM1_EGR_CC4G CC4G **/
#define TIM1_TIM1_EGR_CC4G		(1 << 4)
/** TIM1_TIM1_EGR_CC3G CC3G **/
#define TIM1_TIM1_EGR_CC3G		(1 << 3)
/** TIM1_TIM1_EGR_CC2G CC2G **/
#define TIM1_TIM1_EGR_CC2G		(1 << 2)
/** TIM1_TIM1_EGR_CC1G CC1G **/
#define TIM1_TIM1_EGR_CC1G		(1 << 1)
/** TIM1_TIM1_EGR_UG UG **/
#define TIM1_TIM1_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim1_tim1_ccmr1_input TIM1CCMR1Input capture/compare mode register 1 (Input mode)
@{*/


#define TIM1_TIM1_CCMR1_Input_IC2F_SHIFT		12
#define TIM1_TIM1_CCMR1_Input_IC2F_MASK		0x0f
/** @defgroup tim1_tim1_ccmr1_input_ic2f IC2F IC2F
@{*/
/**@}*/


#define TIM1_TIM1_CCMR1_Input_IC2PSC_SHIFT		10
#define TIM1_TIM1_CCMR1_Input_IC2PSC_MASK		0x03
/** @defgroup tim1_tim1_ccmr1_input_ic2psc IC2PSC IC2PSC
@{*/
/**@}*/


#define TIM1_TIM1_CCMR1_Input_CC2S_SHIFT		8
#define TIM1_TIM1_CCMR1_Input_CC2S_MASK		0x03
/** @defgroup tim1_tim1_ccmr1_input_cc2s CC2S CC2S
@{*/
/**@}*/


#define TIM1_TIM1_CCMR1_Input_IC1F_SHIFT		4
#define TIM1_TIM1_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim1_tim1_ccmr1_input_ic1f IC1F IC1F
@{*/
/**@}*/


#define TIM1_TIM1_CCMR1_Input_IC1PSC_SHIFT		2
#define TIM1_TIM1_CCMR1_Input_IC1PSC_MASK		0x03
/** @defgroup tim1_tim1_ccmr1_input_ic1psc IC1PSC IC1PSC
@{*/
/**@}*/


#define TIM1_TIM1_CCMR1_Input_CC1S_SHIFT		0
#define TIM1_TIM1_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim1_tim1_ccmr1_input_cc1s CC1S CC1S
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_ccmr1_output TIM1CCMR1Output capture/compare mode register 1 (output mode)
@{*/


#define TIM1_TIM1_CCMR1_Output_OC2M_SHIFT		12
#define TIM1_TIM1_CCMR1_Output_OC2M_MASK		0x07
/** @defgroup tim1_tim1_ccmr1_output_oc2m OC2M OC2M
@{*/
/**@}*/

/** TIM1_TIM1_CCMR1_Output_OC2PE OC2PE **/
#define TIM1_TIM1_CCMR1_Output_OC2PE		(1 << 11)
/** TIM1_TIM1_CCMR1_Output_OC2FE OC2FE **/
#define TIM1_TIM1_CCMR1_Output_OC2FE		(1 << 10)

#define TIM1_TIM1_CCMR1_Output_CC2S_SHIFT		8
#define TIM1_TIM1_CCMR1_Output_CC2S_MASK		0x03
/** @defgroup tim1_tim1_ccmr1_output_cc2s CC2S CC2S
@{*/
/**@}*/


#define TIM1_TIM1_CCMR1_Output_OC1M_SHIFT		4
#define TIM1_TIM1_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim1_tim1_ccmr1_output_oc1m OC1M OC1M
@{*/
/**@}*/

/** TIM1_TIM1_CCMR1_Output_OC1PE OC1PE **/
#define TIM1_TIM1_CCMR1_Output_OC1PE		(1 << 3)
/** TIM1_TIM1_CCMR1_Output_OC1FE OC1FE **/
#define TIM1_TIM1_CCMR1_Output_OC1FE		(1 << 2)

#define TIM1_TIM1_CCMR1_Output_CC1S_SHIFT		0
#define TIM1_TIM1_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim1_tim1_ccmr1_output_cc1s CC1S CC1S
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_ccmr2_input TIM1CCMR2Input capture/compare mode register 2 (input mode)
@{*/


#define TIM1_TIM1_CCMR2_Input_IC4F_SHIFT		12
#define TIM1_TIM1_CCMR2_Input_IC4F_MASK		0x0f
/** @defgroup tim1_tim1_ccmr2_input_ic4f IC4F IC4F
@{*/
/**@}*/


#define TIM1_TIM1_CCMR2_Input_IC4PSC_SHIFT		10
#define TIM1_TIM1_CCMR2_Input_IC4PSC_MASK		0x03
/** @defgroup tim1_tim1_ccmr2_input_ic4psc IC4PSC IC4PSC
@{*/
/**@}*/


#define TIM1_TIM1_CCMR2_Input_CC4S_SHIFT		8
#define TIM1_TIM1_CCMR2_Input_CC4S_MASK		0x03
/** @defgroup tim1_tim1_ccmr2_input_cc4s CC4S CC4S
@{*/
/**@}*/


#define TIM1_TIM1_CCMR2_Input_IC3F_SHIFT		4
#define TIM1_TIM1_CCMR2_Input_IC3F_MASK		0x0f
/** @defgroup tim1_tim1_ccmr2_input_ic3f IC3F IC3F
@{*/
/**@}*/


#define TIM1_TIM1_CCMR2_Input_IC3PSC_SHIFT		2
#define TIM1_TIM1_CCMR2_Input_IC3PSC_MASK		0x03
/** @defgroup tim1_tim1_ccmr2_input_ic3psc IC3PSC IC3PSC
@{*/
/**@}*/


#define TIM1_TIM1_CCMR2_Input_CC3S_SHIFT		0
#define TIM1_TIM1_CCMR2_Input_CC3S_MASK		0x03
/** @defgroup tim1_tim1_ccmr2_input_cc3s CC3S CC3S
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_ccmr2_output TIM1CCMR2Output capture/compare mode register 2 (output mode)
@{*/


#define TIM1_TIM1_CCMR2_Output_OC4M_SHIFT		12
#define TIM1_TIM1_CCMR2_Output_OC4M_MASK		0x07
/** @defgroup tim1_tim1_ccmr2_output_oc4m OC4M OC4M
@{*/
/**@}*/

/** TIM1_TIM1_CCMR2_Output_OC4PE OC4PE **/
#define TIM1_TIM1_CCMR2_Output_OC4PE		(1 << 11)
/** TIM1_TIM1_CCMR2_Output_OC4FE OC4FE **/
#define TIM1_TIM1_CCMR2_Output_OC4FE		(1 << 10)

#define TIM1_TIM1_CCMR2_Output_CC4S_SHIFT		8
#define TIM1_TIM1_CCMR2_Output_CC4S_MASK		0x03
/** @defgroup tim1_tim1_ccmr2_output_cc4s CC4S CC4S
@{*/
/**@}*/


#define TIM1_TIM1_CCMR2_Output_OC3M_SHIFT		4
#define TIM1_TIM1_CCMR2_Output_OC3M_MASK		0x07
/** @defgroup tim1_tim1_ccmr2_output_oc3m OC3M OC3M
@{*/
/**@}*/

/** TIM1_TIM1_CCMR2_Output_OC3PE OC3PE **/
#define TIM1_TIM1_CCMR2_Output_OC3PE		(1 << 3)
/** TIM1_TIM1_CCMR2_Output_OC3FE OC3FE **/
#define TIM1_TIM1_CCMR2_Output_OC3FE		(1 << 2)

#define TIM1_TIM1_CCMR2_Output_CC3S_SHIFT		0
#define TIM1_TIM1_CCMR2_Output_CC3S_MASK		0x03
/** @defgroup tim1_tim1_ccmr2_output_cc3s CC3S CC3S
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_ccer TIM1CCER TIM capture/compare enable register
@{*/

/** TIM1_TIM1_CCER_CC4P CC4P **/
#define TIM1_TIM1_CCER_CC4P		(1 << 13)
/** TIM1_TIM1_CCER_CC4E CC4E **/
#define TIM1_TIM1_CCER_CC4E		(1 << 12)
/** TIM1_TIM1_CCER_CC3P CC3P **/
#define TIM1_TIM1_CCER_CC3P		(1 << 9)
/** TIM1_TIM1_CCER_CC3E CC3E **/
#define TIM1_TIM1_CCER_CC3E		(1 << 8)
/** TIM1_TIM1_CCER_CC2P CC2P **/
#define TIM1_TIM1_CCER_CC2P		(1 << 5)
/** TIM1_TIM1_CCER_CC2E CC2E **/
#define TIM1_TIM1_CCER_CC2E		(1 << 4)
/** TIM1_TIM1_CCER_CC1P CC1P **/
#define TIM1_TIM1_CCER_CC1P		(1 << 1)
/** TIM1_TIM1_CCER_CC1E CC1E **/
#define TIM1_TIM1_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim1_tim1_cnt TIM1CNT TIM counter register
@{*/


#define TIM1_TIM1_CNT_CNT_SHIFT		0
#define TIM1_TIM1_CNT_CNT_MASK		0xffff
/** @defgroup tim1_tim1_cnt_cnt CNT CNT
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_psc TIM1PSC TIM prescaler register
@{*/


#define TIM1_TIM1_PSC_PSC_SHIFT		0
#define TIM1_TIM1_PSC_PSC_MASK		0xffff
/** @defgroup tim1_tim1_psc_psc PSC PSC
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_arr TIM1ARR TIM auto-reload register
@{*/


#define TIM1_TIM1_ARR_ARR_SHIFT		0
#define TIM1_TIM1_ARR_ARR_MASK		0xffff
/** @defgroup tim1_tim1_arr_arr ARR ARR
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_ccr1 TIM1CCR1 IM capture/compare register 1
@{*/


#define TIM1_TIM1_CCR1_CCR_SHIFT		0
#define TIM1_TIM1_CCR1_CCR_MASK		0xffff
/** @defgroup tim1_tim1_ccr1_ccr CCR CCR
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_ccr2 TIM1CCR2 TIM capture/compare register 2
@{*/


#define TIM1_TIM1_CCR2_CCR_SHIFT		0
#define TIM1_TIM1_CCR2_CCR_MASK		0xffff
/** @defgroup tim1_tim1_ccr2_ccr CCR CCR
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_ccr3 TIM1CCR3 TIM capture/compare register 3
@{*/


#define TIM1_TIM1_CCR3_CCR_SHIFT		0
#define TIM1_TIM1_CCR3_CCR_MASK		0xffff
/** @defgroup tim1_tim1_ccr3_ccr CCR CCR
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_ccr4 TIM1CCR4 TIM capture/compare register 4
@{*/


#define TIM1_TIM1_CCR4_CCR_SHIFT		0
#define TIM1_TIM1_CCR4_CCR_MASK		0xffff
/** @defgroup tim1_tim1_ccr4_ccr CCR CCR
@{*/
/**@}*/


/**@}*/

/** @defgroup tim1_tim1_or TIM1OR TIM option register
@{*/

/** TIM1_TIM1_OR_ORRSVD ORRSVD **/
#define TIM1_TIM1_OR_ORRSVD		(1 << 3)
/** TIM1_TIM1_OR_CLKMSKEN CLKMSKEN **/
#define TIM1_TIM1_OR_CLKMSKEN		(1 << 2)

#define TIM1_TIM1_OR_EXTRIGSEL_SHIFT		0
#define TIM1_TIM1_OR_EXTRIGSEL_MASK		0x03
/** @defgroup tim1_tim1_or_extrigsel EXTRIGSEL EXTRIGSEL
@{*/
/**@}*/


/**@}*/

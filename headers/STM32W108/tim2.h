#pragma once 

/* --- TIM2: General purpose timer 2 -------------------------------- */

/** @defgroup tim2_registers General purpose timer 2 Register
@{*/

/** TIM2_TIM2_ISR TIM Interrupt Status Register **/
#define TIM2_TIM2_ISR			MMIO32(TIM2_BASE + 0x00)
/** TIM2_TIM2_MISSR TIM interrupt missed register **/
#define TIM2_TIM2_MISSR			MMIO32(TIM2_BASE + 0x18)
/** TIM2_TIM2_IER TIM Interrupt Enable Register **/
#define TIM2_TIM2_IER			MMIO32(TIM2_BASE + 0x40)
/** TIM2_TIM2_CR1 control register 1 **/
#define TIM2_TIM2_CR1			MMIO32(TIM2_BASE + 0x47fc)
/** TIM2_TIM2_CR2 control register 1 **/
#define TIM2_TIM2_CR2			MMIO32(TIM2_BASE + 0x4800)
/** TIM2_TIM2_SMCR TIM slave Mode Control register **/
#define TIM2_TIM2_SMCR			MMIO32(TIM2_BASE + 0x4804)
/** TIM2_TIM2_EGR TIM event generation register **/
#define TIM2_TIM2_EGR			MMIO32(TIM2_BASE + 0x4810)
/** TIM2_TIM2_CCMR1_Input capture/compare mode register 1 (Input mode) **/
#define TIM2_TIM2_CCMR1_Input			MMIO32(TIM2_BASE + 0x4814)
/** TIM2_TIM2_CCMR1_Output capture/compare mode register 1 (output mode) **/
#define TIM2_TIM2_CCMR1_Output			MMIO32(TIM2_BASE + 0x4814)
/** TIM2_TIM2_CCMR2_Input capture/compare mode register 2 (input mode) **/
#define TIM2_TIM2_CCMR2_Input			MMIO32(TIM2_BASE + 0x4818)
/** TIM2_TIM2_CCMR2_Output capture/compare mode register 2 (output mode) **/
#define TIM2_TIM2_CCMR2_Output			MMIO32(TIM2_BASE + 0x4818)
/** TIM2_TIM2_CCER TIM capture/compare enable register **/
#define TIM2_TIM2_CCER			MMIO32(TIM2_BASE + 0x481c)
/** TIM2_TIM2_CNT TIM counter register **/
#define TIM2_TIM2_CNT			MMIO32(TIM2_BASE + 0x4820)
/** TIM2_TIM2_PSC TIM prescaler register **/
#define TIM2_TIM2_PSC			MMIO32(TIM2_BASE + 0x4824)
/** TIM2_TIM2_ARR TIM auto-reload register **/
#define TIM2_TIM2_ARR			MMIO32(TIM2_BASE + 0x4828)
/** TIM2_TIM2_CCR1 TIM capture/compare register 1 **/
#define TIM2_TIM2_CCR1			MMIO32(TIM2_BASE + 0x4830)
/** TIM2_TIM2_CCR2 TIM capture/compare register 2 **/
#define TIM2_TIM2_CCR2			MMIO32(TIM2_BASE + 0x4834)
/** TIM2_TIM2_CCR3 TIM capture/compare register 3 **/
#define TIM2_TIM2_CCR3			MMIO32(TIM2_BASE + 0x4838)
/** TIM2_TIM2_CCR4 TIM capture/compare register 4 **/
#define TIM2_TIM2_CCR4			MMIO32(TIM2_BASE + 0x483c)
/** TIM2_TIM2_OR TIM option register **/
#define TIM2_TIM2_OR			MMIO32(TIM2_BASE + 0x484c)

/**@}*/


/** @defgroup tim2_tim2_isr TIM2ISR TIM Interrupt Status Register
@{*/


#define TIM2_TIM2_ISR_RSVD_SHIFT		8
#define TIM2_TIM2_ISR_RSVD_MASK		0x1f
/** @defgroup tim2_tim2_isr_rsvd RSVD RSVD
@{*/
/**@}*/

/** TIM2_TIM2_ISR_TIF TIF **/
#define TIM2_TIM2_ISR_TIF		(1 << 6)
/** TIM2_TIM2_ISR_CC4IF CC4IF **/
#define TIM2_TIM2_ISR_CC4IF		(1 << 4)
/** TIM2_TIM2_ISR_CC3IF CC3IF **/
#define TIM2_TIM2_ISR_CC3IF		(1 << 3)
/** TIM2_TIM2_ISR_CC2IF CC2IF **/
#define TIM2_TIM2_ISR_CC2IF		(1 << 2)
/** TIM2_TIM2_ISR_CC1IF CC1IF **/
#define TIM2_TIM2_ISR_CC1IF		(1 << 1)
/** TIM2_TIM2_ISR_UIF UIF **/
#define TIM2_TIM2_ISR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim2_tim2_missr TIM2MISSR TIM interrupt missed register
@{*/

/** TIM2_TIM2_MISSR_CC4IM CC4IM **/
#define TIM2_TIM2_MISSR_CC4IM		(1 << 12)
/** TIM2_TIM2_MISSR_CC3IM CC3IM **/
#define TIM2_TIM2_MISSR_CC3IM		(1 << 11)
/** TIM2_TIM2_MISSR_CC2IM CC2IM **/
#define TIM2_TIM2_MISSR_CC2IM		(1 << 10)
/** TIM2_TIM2_MISSR_CC1IM CC1IM **/
#define TIM2_TIM2_MISSR_CC1IM		(1 << 9)

#define TIM2_TIM2_MISSR_RSVD_SHIFT		0
#define TIM2_TIM2_MISSR_RSVD_MASK		0x7f
/** @defgroup tim2_tim2_missr_rsvd RSVD RSVD
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_ier TIM2IER TIM Interrupt Enable Register
@{*/

/** TIM2_TIM2_IER_TIE TIE **/
#define TIM2_TIM2_IER_TIE		(1 << 6)
/** TIM2_TIM2_IER_CC4IE CC4IE **/
#define TIM2_TIM2_IER_CC4IE		(1 << 4)
/** TIM2_TIM2_IER_CC3IE CC3IE **/
#define TIM2_TIM2_IER_CC3IE		(1 << 3)
/** TIM2_TIM2_IER_CC2IE CC2IE **/
#define TIM2_TIM2_IER_CC2IE		(1 << 2)
/** TIM2_TIM2_IER_CC1IE CC1IE **/
#define TIM2_TIM2_IER_CC1IE		(1 << 1)
/** TIM2_TIM2_IER_UIE UIE **/
#define TIM2_TIM2_IER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim2_tim2_cr1 TIM2CR1 control register 1
@{*/

/** TIM2_TIM2_CR1_ARBE ARBE **/
#define TIM2_TIM2_CR1_ARBE		(1 << 7)

#define TIM2_TIM2_CR1_CMS_SHIFT		5
#define TIM2_TIM2_CR1_CMS_MASK		0x03
/** @defgroup tim2_tim2_cr1_cms CMS CMS
@{*/
/**@}*/

/** TIM2_TIM2_CR1_DIR DIR **/
#define TIM2_TIM2_CR1_DIR		(1 << 4)
/** TIM2_TIM2_CR1_OPM OPM **/
#define TIM2_TIM2_CR1_OPM		(1 << 3)
/** TIM2_TIM2_CR1_URS URS **/
#define TIM2_TIM2_CR1_URS		(1 << 2)
/** TIM2_TIM2_CR1_UDIS UDIS **/
#define TIM2_TIM2_CR1_UDIS		(1 << 1)
/** TIM2_TIM2_CR1_CEN CEN **/
#define TIM2_TIM2_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim2_tim2_cr2 TIM2CR2 control register 1
@{*/

/** TIM2_TIM2_CR2_TI1S TI1S **/
#define TIM2_TIM2_CR2_TI1S		(1 << 7)

#define TIM2_TIM2_CR2_MMS_SHIFT		4
#define TIM2_TIM2_CR2_MMS_MASK		0x07
/** @defgroup tim2_tim2_cr2_mms MMS MMS
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_smcr TIM2SMCR TIM slave Mode Control register
@{*/

/** TIM2_TIM2_SMCR_ETP ETP **/
#define TIM2_TIM2_SMCR_ETP		(1 << 15)
/** TIM2_TIM2_SMCR_ECE ECE **/
#define TIM2_TIM2_SMCR_ECE		(1 << 14)

#define TIM2_TIM2_SMCR_ETPS_SHIFT		12
#define TIM2_TIM2_SMCR_ETPS_MASK		0x03
/** @defgroup tim2_tim2_smcr_etps ETPS ETPS
@{*/
/**@}*/


#define TIM2_TIM2_SMCR_ETF_SHIFT		8
#define TIM2_TIM2_SMCR_ETF_MASK		0x0f
/** @defgroup tim2_tim2_smcr_etf ETF ETF
@{*/
/**@}*/

/** TIM2_TIM2_SMCR_MSM MSM **/
#define TIM2_TIM2_SMCR_MSM		(1 << 7)

#define TIM2_TIM2_SMCR_TS_SHIFT		4
#define TIM2_TIM2_SMCR_TS_MASK		0x07
/** @defgroup tim2_tim2_smcr_ts TS TS
@{*/
/**@}*/


#define TIM2_TIM2_SMCR_SMS_SHIFT		0
#define TIM2_TIM2_SMCR_SMS_MASK		0x07
/** @defgroup tim2_tim2_smcr_sms SMS SMS
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_egr TIM2EGR TIM event generation register
@{*/

/** TIM2_TIM2_EGR_TG TG **/
#define TIM2_TIM2_EGR_TG		(1 << 6)
/** TIM2_TIM2_EGR_CC4G CC4G **/
#define TIM2_TIM2_EGR_CC4G		(1 << 4)
/** TIM2_TIM2_EGR_CC3G CC3G **/
#define TIM2_TIM2_EGR_CC3G		(1 << 3)
/** TIM2_TIM2_EGR_CC2G CC2G **/
#define TIM2_TIM2_EGR_CC2G		(1 << 2)
/** TIM2_TIM2_EGR_CC1G CC1G **/
#define TIM2_TIM2_EGR_CC1G		(1 << 1)
/** TIM2_TIM2_EGR_UG UG **/
#define TIM2_TIM2_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim2_tim2_ccmr1_input TIM2CCMR1Input capture/compare mode register 1 (Input mode)
@{*/


#define TIM2_TIM2_CCMR1_Input_IC2F_SHIFT		12
#define TIM2_TIM2_CCMR1_Input_IC2F_MASK		0x0f
/** @defgroup tim2_tim2_ccmr1_input_ic2f IC2F IC2F
@{*/
/**@}*/


#define TIM2_TIM2_CCMR1_Input_IC2PSC_SHIFT		10
#define TIM2_TIM2_CCMR1_Input_IC2PSC_MASK		0x03
/** @defgroup tim2_tim2_ccmr1_input_ic2psc IC2PSC IC2PSC
@{*/
/**@}*/


#define TIM2_TIM2_CCMR1_Input_CC2S_SHIFT		8
#define TIM2_TIM2_CCMR1_Input_CC2S_MASK		0x03
/** @defgroup tim2_tim2_ccmr1_input_cc2s CC2S CC2S
@{*/
/**@}*/


#define TIM2_TIM2_CCMR1_Input_IC1F_SHIFT		4
#define TIM2_TIM2_CCMR1_Input_IC1F_MASK		0x0f
/** @defgroup tim2_tim2_ccmr1_input_ic1f IC1F IC1F
@{*/
/**@}*/


#define TIM2_TIM2_CCMR1_Input_IC1PSC_SHIFT		2
#define TIM2_TIM2_CCMR1_Input_IC1PSC_MASK		0x03
/** @defgroup tim2_tim2_ccmr1_input_ic1psc IC1PSC IC1PSC
@{*/
/**@}*/


#define TIM2_TIM2_CCMR1_Input_CC1S_SHIFT		0
#define TIM2_TIM2_CCMR1_Input_CC1S_MASK		0x03
/** @defgroup tim2_tim2_ccmr1_input_cc1s CC1S CC1S
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_ccmr1_output TIM2CCMR1Output capture/compare mode register 1 (output mode)
@{*/


#define TIM2_TIM2_CCMR1_Output_OC2M_SHIFT		12
#define TIM2_TIM2_CCMR1_Output_OC2M_MASK		0x07
/** @defgroup tim2_tim2_ccmr1_output_oc2m OC2M OC2M
@{*/
/**@}*/

/** TIM2_TIM2_CCMR1_Output_OC2PE OC2PE **/
#define TIM2_TIM2_CCMR1_Output_OC2PE		(1 << 11)
/** TIM2_TIM2_CCMR1_Output_OC2FE OC2FE **/
#define TIM2_TIM2_CCMR1_Output_OC2FE		(1 << 10)

#define TIM2_TIM2_CCMR1_Output_CC2S_SHIFT		8
#define TIM2_TIM2_CCMR1_Output_CC2S_MASK		0x03
/** @defgroup tim2_tim2_ccmr1_output_cc2s CC2S CC2S
@{*/
/**@}*/


#define TIM2_TIM2_CCMR1_Output_OC1M_SHIFT		4
#define TIM2_TIM2_CCMR1_Output_OC1M_MASK		0x07
/** @defgroup tim2_tim2_ccmr1_output_oc1m OC1M OC1M
@{*/
/**@}*/

/** TIM2_TIM2_CCMR1_Output_OC1PE OC1PE **/
#define TIM2_TIM2_CCMR1_Output_OC1PE		(1 << 3)
/** TIM2_TIM2_CCMR1_Output_OC1FE OC1FE **/
#define TIM2_TIM2_CCMR1_Output_OC1FE		(1 << 2)

#define TIM2_TIM2_CCMR1_Output_CC1S_SHIFT		0
#define TIM2_TIM2_CCMR1_Output_CC1S_MASK		0x03
/** @defgroup tim2_tim2_ccmr1_output_cc1s CC1S CC1S
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_ccmr2_input TIM2CCMR2Input capture/compare mode register 2 (input mode)
@{*/


#define TIM2_TIM2_CCMR2_Input_IC4F_SHIFT		12
#define TIM2_TIM2_CCMR2_Input_IC4F_MASK		0x0f
/** @defgroup tim2_tim2_ccmr2_input_ic4f IC4F IC4F
@{*/
/**@}*/


#define TIM2_TIM2_CCMR2_Input_IC4PSC_SHIFT		10
#define TIM2_TIM2_CCMR2_Input_IC4PSC_MASK		0x03
/** @defgroup tim2_tim2_ccmr2_input_ic4psc IC4PSC IC4PSC
@{*/
/**@}*/


#define TIM2_TIM2_CCMR2_Input_CC4S_SHIFT		8
#define TIM2_TIM2_CCMR2_Input_CC4S_MASK		0x03
/** @defgroup tim2_tim2_ccmr2_input_cc4s CC4S CC4S
@{*/
/**@}*/


#define TIM2_TIM2_CCMR2_Input_IC3F_SHIFT		4
#define TIM2_TIM2_CCMR2_Input_IC3F_MASK		0x0f
/** @defgroup tim2_tim2_ccmr2_input_ic3f IC3F IC3F
@{*/
/**@}*/


#define TIM2_TIM2_CCMR2_Input_IC3PSC_SHIFT		2
#define TIM2_TIM2_CCMR2_Input_IC3PSC_MASK		0x03
/** @defgroup tim2_tim2_ccmr2_input_ic3psc IC3PSC IC3PSC
@{*/
/**@}*/


#define TIM2_TIM2_CCMR2_Input_CC3S_SHIFT		0
#define TIM2_TIM2_CCMR2_Input_CC3S_MASK		0x03
/** @defgroup tim2_tim2_ccmr2_input_cc3s CC3S CC3S
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_ccmr2_output TIM2CCMR2Output capture/compare mode register 2 (output mode)
@{*/


#define TIM2_TIM2_CCMR2_Output_OC4M_SHIFT		12
#define TIM2_TIM2_CCMR2_Output_OC4M_MASK		0x07
/** @defgroup tim2_tim2_ccmr2_output_oc4m OC4M OC4M
@{*/
/**@}*/

/** TIM2_TIM2_CCMR2_Output_OC4PE OC4PE **/
#define TIM2_TIM2_CCMR2_Output_OC4PE		(1 << 11)
/** TIM2_TIM2_CCMR2_Output_OC4FE OC4FE **/
#define TIM2_TIM2_CCMR2_Output_OC4FE		(1 << 10)

#define TIM2_TIM2_CCMR2_Output_CC4S_SHIFT		8
#define TIM2_TIM2_CCMR2_Output_CC4S_MASK		0x03
/** @defgroup tim2_tim2_ccmr2_output_cc4s CC4S CC4S
@{*/
/**@}*/


#define TIM2_TIM2_CCMR2_Output_OC3M_SHIFT		4
#define TIM2_TIM2_CCMR2_Output_OC3M_MASK		0x07
/** @defgroup tim2_tim2_ccmr2_output_oc3m OC3M OC3M
@{*/
/**@}*/

/** TIM2_TIM2_CCMR2_Output_OC3PE OC3PE **/
#define TIM2_TIM2_CCMR2_Output_OC3PE		(1 << 3)
/** TIM2_TIM2_CCMR2_Output_OC3FE OC3FE **/
#define TIM2_TIM2_CCMR2_Output_OC3FE		(1 << 2)

#define TIM2_TIM2_CCMR2_Output_CC3S_SHIFT		0
#define TIM2_TIM2_CCMR2_Output_CC3S_MASK		0x03
/** @defgroup tim2_tim2_ccmr2_output_cc3s CC3S CC3S
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_ccer TIM2CCER TIM capture/compare enable register
@{*/

/** TIM2_TIM2_CCER_CC4P CC4P **/
#define TIM2_TIM2_CCER_CC4P		(1 << 13)
/** TIM2_TIM2_CCER_CC4E CC4E **/
#define TIM2_TIM2_CCER_CC4E		(1 << 12)
/** TIM2_TIM2_CCER_CC3P CC3P **/
#define TIM2_TIM2_CCER_CC3P		(1 << 9)
/** TIM2_TIM2_CCER_CC3E CC3E **/
#define TIM2_TIM2_CCER_CC3E		(1 << 8)
/** TIM2_TIM2_CCER_CC2P CC2P **/
#define TIM2_TIM2_CCER_CC2P		(1 << 5)
/** TIM2_TIM2_CCER_CC2E CC2E **/
#define TIM2_TIM2_CCER_CC2E		(1 << 4)
/** TIM2_TIM2_CCER_CC1P CC1P **/
#define TIM2_TIM2_CCER_CC1P		(1 << 1)
/** TIM2_TIM2_CCER_CC1E CC1E **/
#define TIM2_TIM2_CCER_CC1E		(1 << 0)

/**@}*/

/** @defgroup tim2_tim2_cnt TIM2CNT TIM counter register
@{*/


#define TIM2_TIM2_CNT_CNT_SHIFT		0
#define TIM2_TIM2_CNT_CNT_MASK		0xffff
/** @defgroup tim2_tim2_cnt_cnt CNT CNT
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_psc TIM2PSC TIM prescaler register
@{*/


#define TIM2_TIM2_PSC_PSC_SHIFT		0
#define TIM2_TIM2_PSC_PSC_MASK		0xffff
/** @defgroup tim2_tim2_psc_psc PSC PSC
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_arr TIM2ARR TIM auto-reload register
@{*/


#define TIM2_TIM2_ARR_ARR_SHIFT		0
#define TIM2_TIM2_ARR_ARR_MASK		0xffff
/** @defgroup tim2_tim2_arr_arr ARR ARR
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_ccr1 TIM2CCR1 TIM capture/compare register 1
@{*/


#define TIM2_TIM2_CCR1_CCR_SHIFT		0
#define TIM2_TIM2_CCR1_CCR_MASK		0xffff
/** @defgroup tim2_tim2_ccr1_ccr CCR CCR
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_ccr2 TIM2CCR2 TIM capture/compare register 2
@{*/


#define TIM2_TIM2_CCR2_CCR_SHIFT		0
#define TIM2_TIM2_CCR2_CCR_MASK		0xffff
/** @defgroup tim2_tim2_ccr2_ccr CCR CCR
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_ccr3 TIM2CCR3 TIM capture/compare register 3
@{*/


#define TIM2_TIM2_CCR3_CCR_SHIFT		0
#define TIM2_TIM2_CCR3_CCR_MASK		0xffff
/** @defgroup tim2_tim2_ccr3_ccr CCR CCR
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_ccr4 TIM2CCR4 TIM capture/compare register 4
@{*/


#define TIM2_TIM2_CCR4_CCR_SHIFT		0
#define TIM2_TIM2_CCR4_CCR_MASK		0xffff
/** @defgroup tim2_tim2_ccr4_ccr CCR CCR
@{*/
/**@}*/


/**@}*/

/** @defgroup tim2_tim2_or TIM2OR TIM option register
@{*/

/** TIM2_TIM2_OR_REMAPC4 REMAPC4 **/
#define TIM2_TIM2_OR_REMAPC4		(1 << 7)
/** TIM2_TIM2_OR_REMAPC3 REMAPC3 **/
#define TIM2_TIM2_OR_REMAPC3		(1 << 6)
/** TIM2_TIM2_OR_REMAPC2 REMAPC2 **/
#define TIM2_TIM2_OR_REMAPC2		(1 << 5)
/** TIM2_TIM2_OR_REMAPC1 REMAPC1 **/
#define TIM2_TIM2_OR_REMAPC1		(1 << 4)
/** TIM2_TIM2_OR_ORRSVD ORRSVD **/
#define TIM2_TIM2_OR_ORRSVD		(1 << 3)
/** TIM2_TIM2_OR_CLKMSKEN CLKMSKEN **/
#define TIM2_TIM2_OR_CLKMSKEN		(1 << 2)

#define TIM2_TIM2_OR_EXTRIGSEL_SHIFT		0
#define TIM2_TIM2_OR_EXTRIGSEL_MASK		0x03
/** @defgroup tim2_tim2_or_extrigsel EXTRIGSEL EXTRIGSEL
@{*/
/**@}*/


/**@}*/

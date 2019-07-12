#pragma once 

/* --- AFEC0: Analog Front-End Controller --------------------------- */

/** @defgroup afec0_registers Analog Front-End Controller Register
@{*/

/** AFEC0_AFEC_CR AFEC Control Register **/
#define AFEC0_AFEC_CR			MMIO32(AFEC0_BASE + 0x00)
/** AFEC0_AFEC_MR AFEC Mode Register **/
#define AFEC0_AFEC_MR			MMIO32(AFEC0_BASE + 0x04)
/** AFEC0_AFEC_EMR AFEC Extended Mode Register **/
#define AFEC0_AFEC_EMR			MMIO32(AFEC0_BASE + 0x08)
/** AFEC0_AFEC_SEQ1R AFEC Channel Sequence 1 Register **/
#define AFEC0_AFEC_SEQ1R			MMIO32(AFEC0_BASE + 0x0c)
/** AFEC0_AFEC_SEQ2R AFEC Channel Sequence 2 Register **/
#define AFEC0_AFEC_SEQ2R			MMIO32(AFEC0_BASE + 0x10)
/** AFEC0_AFEC_CHER AFEC Channel Enable Register **/
#define AFEC0_AFEC_CHER			MMIO32(AFEC0_BASE + 0x14)
/** AFEC0_AFEC_CHDR AFEC Channel Disable Register **/
#define AFEC0_AFEC_CHDR			MMIO32(AFEC0_BASE + 0x18)
/** AFEC0_AFEC_CHSR AFEC Channel Status Register **/
#define AFEC0_AFEC_CHSR			MMIO32(AFEC0_BASE + 0x1c)
/** AFEC0_AFEC_LCDR AFEC Last Converted Data Register **/
#define AFEC0_AFEC_LCDR			MMIO32(AFEC0_BASE + 0x20)
/** AFEC0_AFEC_IER AFEC Interrupt Enable Register **/
#define AFEC0_AFEC_IER			MMIO32(AFEC0_BASE + 0x24)
/** AFEC0_AFEC_IDR AFEC Interrupt Disable Register **/
#define AFEC0_AFEC_IDR			MMIO32(AFEC0_BASE + 0x28)
/** AFEC0_AFEC_IMR AFEC Interrupt Mask Register **/
#define AFEC0_AFEC_IMR			MMIO32(AFEC0_BASE + 0x2c)
/** AFEC0_AFEC_ISR AFEC Interrupt Status Register **/
#define AFEC0_AFEC_ISR			MMIO32(AFEC0_BASE + 0x30)
/** AFEC0_AFEC_OVER AFEC Overrun Status Register **/
#define AFEC0_AFEC_OVER			MMIO32(AFEC0_BASE + 0x4c)
/** AFEC0_AFEC_CWR AFEC Compare Window Register **/
#define AFEC0_AFEC_CWR			MMIO32(AFEC0_BASE + 0x50)
/** AFEC0_AFEC_CGR AFEC Channel Gain Register **/
#define AFEC0_AFEC_CGR			MMIO32(AFEC0_BASE + 0x54)
/** AFEC0_AFEC_DIFFR AFEC Channel Differential Register **/
#define AFEC0_AFEC_DIFFR			MMIO32(AFEC0_BASE + 0x60)
/** AFEC0_AFEC_CSELR AFEC Channel Selection Register **/
#define AFEC0_AFEC_CSELR			MMIO32(AFEC0_BASE + 0x64)
/** AFEC0_AFEC_CDR AFEC Channel Data Register **/
#define AFEC0_AFEC_CDR			MMIO32(AFEC0_BASE + 0x68)
/** AFEC0_AFEC_COCR AFEC Channel Offset Compensation Register **/
#define AFEC0_AFEC_COCR			MMIO32(AFEC0_BASE + 0x6c)
/** AFEC0_AFEC_TEMPMR AFEC Temperature Sensor Mode Register **/
#define AFEC0_AFEC_TEMPMR			MMIO32(AFEC0_BASE + 0x70)
/** AFEC0_AFEC_TEMPCWR AFEC Temperature Compare Window Register **/
#define AFEC0_AFEC_TEMPCWR			MMIO32(AFEC0_BASE + 0x74)
/** AFEC0_AFEC_ACR AFEC Analog Control Register **/
#define AFEC0_AFEC_ACR			MMIO32(AFEC0_BASE + 0x94)
/** AFEC0_AFEC_SHMR AFEC Sample & Hold Mode Register **/
#define AFEC0_AFEC_SHMR			MMIO32(AFEC0_BASE + 0xa0)
/** AFEC0_AFEC_COSR AFEC Correction Select Register **/
#define AFEC0_AFEC_COSR			MMIO32(AFEC0_BASE + 0xd0)
/** AFEC0_AFEC_CVR AFEC Correction Values Register **/
#define AFEC0_AFEC_CVR			MMIO32(AFEC0_BASE + 0xd4)
/** AFEC0_AFEC_CECR AFEC Channel Error Correction Register **/
#define AFEC0_AFEC_CECR			MMIO32(AFEC0_BASE + 0xd8)
/** AFEC0_AFEC_WPMR AFEC Write Protection Mode Register **/
#define AFEC0_AFEC_WPMR			MMIO32(AFEC0_BASE + 0xe4)
/** AFEC0_AFEC_WPSR AFEC Write Protection Status Register **/
#define AFEC0_AFEC_WPSR			MMIO32(AFEC0_BASE + 0xe8)

/**@}*/


/** @defgroup afec0_afec_cr AFECCR AFEC Control Register
@{*/

/** AFEC0_AFEC_CR_START Start Conversion **/
#define AFEC0_AFEC_CR_START		(1 << 1)
/** AFEC0_AFEC_CR_SWRST Software Reset **/
#define AFEC0_AFEC_CR_SWRST		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_mr AFECMR AFEC Mode Register
@{*/

/** AFEC0_AFEC_MR_USEQ User Sequence Enable **/
#define AFEC0_AFEC_MR_USEQ		(1 << 31)

#define AFEC0_AFEC_MR_TRANSFER_SHIFT		28
#define AFEC0_AFEC_MR_TRANSFER_MASK		0x03
/** @defgroup afec0_afec_mr_transfer TRANSFER Transfer Period
@{*/
/**@}*/


#define AFEC0_AFEC_MR_TRACKTIM_SHIFT		24
#define AFEC0_AFEC_MR_TRACKTIM_MASK		0x0f
/** @defgroup afec0_afec_mr_tracktim TRACKTIM Tracking Time
@{*/
/**@}*/

/** AFEC0_AFEC_MR_ONE One **/
#define AFEC0_AFEC_MR_ONE		(1 << 23)

#define AFEC0_AFEC_MR_STARTUP_SHIFT		16
#define AFEC0_AFEC_MR_STARTUP_MASK		0x0f
/** @defgroup afec0_afec_mr_startup STARTUP Start-up Time
@{*/
/**@}*/


#define AFEC0_AFEC_MR_PRESCAL_SHIFT		8
#define AFEC0_AFEC_MR_PRESCAL_MASK		0xff
/** @defgroup afec0_afec_mr_prescal PRESCAL Prescaler Rate Selection
@{*/
/**@}*/

/** AFEC0_AFEC_MR_FREERUN Free Run Mode **/
#define AFEC0_AFEC_MR_FREERUN		(1 << 7)
/** AFEC0_AFEC_MR_FWUP Fast Wake-up **/
#define AFEC0_AFEC_MR_FWUP		(1 << 6)
/** AFEC0_AFEC_MR_SLEEP Sleep Mode **/
#define AFEC0_AFEC_MR_SLEEP		(1 << 5)

#define AFEC0_AFEC_MR_TRGSEL_SHIFT		1
#define AFEC0_AFEC_MR_TRGSEL_MASK		0x07
/** @defgroup afec0_afec_mr_trgsel TRGSEL Trigger Selection
@{*/
/**@}*/

/** AFEC0_AFEC_MR_TRGEN Trigger Enable **/
#define AFEC0_AFEC_MR_TRGEN		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_emr AFECEMR AFEC Extended Mode Register
@{*/


#define AFEC0_AFEC_EMR_SIGNMODE_SHIFT		28
#define AFEC0_AFEC_EMR_SIGNMODE_MASK		0x03
/** @defgroup afec0_afec_emr_signmode SIGNMODE Sign Mode
@{*/
/**@}*/

/** AFEC0_AFEC_EMR_STM Single Trigger Mode **/
#define AFEC0_AFEC_EMR_STM		(1 << 25)
/** AFEC0_AFEC_EMR_TAG TAG of the AFEC_LDCR **/
#define AFEC0_AFEC_EMR_TAG		(1 << 24)

#define AFEC0_AFEC_EMR_RES_SHIFT		16
#define AFEC0_AFEC_EMR_RES_MASK		0x07
/** @defgroup afec0_afec_emr_res RES Resolution
@{*/
/**@}*/


#define AFEC0_AFEC_EMR_CMPFILTER_SHIFT		12
#define AFEC0_AFEC_EMR_CMPFILTER_MASK		0x03
/** @defgroup afec0_afec_emr_cmpfilter CMPFILTER Compare Event Filtering
@{*/
/**@}*/

/** AFEC0_AFEC_EMR_CMPALL Compare All Channels **/
#define AFEC0_AFEC_EMR_CMPALL		(1 << 9)

#define AFEC0_AFEC_EMR_CMPSEL_SHIFT		3
#define AFEC0_AFEC_EMR_CMPSEL_MASK		0x1f
/** @defgroup afec0_afec_emr_cmpsel CMPSEL Comparison Selected Channel
@{*/
/**@}*/


#define AFEC0_AFEC_EMR_CMPMODE_SHIFT		0
#define AFEC0_AFEC_EMR_CMPMODE_MASK		0x03
/** @defgroup afec0_afec_emr_cmpmode CMPMODE Comparison Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup afec0_afec_seq1r AFECSEQ1R AFEC Channel Sequence 1 Register
@{*/


#define AFEC0_AFEC_SEQ1R_USCH7_SHIFT		28
#define AFEC0_AFEC_SEQ1R_USCH7_MASK		0x0f
/** @defgroup afec0_afec_seq1r_usch7 USCH7 User Sequence Number 7
@{*/
/**@}*/


#define AFEC0_AFEC_SEQ1R_USCH6_SHIFT		24
#define AFEC0_AFEC_SEQ1R_USCH6_MASK		0x0f
/** @defgroup afec0_afec_seq1r_usch6 USCH6 User Sequence Number 6
@{*/
/**@}*/


#define AFEC0_AFEC_SEQ1R_USCH5_SHIFT		20
#define AFEC0_AFEC_SEQ1R_USCH5_MASK		0x0f
/** @defgroup afec0_afec_seq1r_usch5 USCH5 User Sequence Number 5
@{*/
/**@}*/


#define AFEC0_AFEC_SEQ1R_USCH4_SHIFT		16
#define AFEC0_AFEC_SEQ1R_USCH4_MASK		0x0f
/** @defgroup afec0_afec_seq1r_usch4 USCH4 User Sequence Number 4
@{*/
/**@}*/


#define AFEC0_AFEC_SEQ1R_USCH3_SHIFT		12
#define AFEC0_AFEC_SEQ1R_USCH3_MASK		0x0f
/** @defgroup afec0_afec_seq1r_usch3 USCH3 User Sequence Number 3
@{*/
/**@}*/


#define AFEC0_AFEC_SEQ1R_USCH2_SHIFT		8
#define AFEC0_AFEC_SEQ1R_USCH2_MASK		0x0f
/** @defgroup afec0_afec_seq1r_usch2 USCH2 User Sequence Number 2
@{*/
/**@}*/


#define AFEC0_AFEC_SEQ1R_USCH1_SHIFT		4
#define AFEC0_AFEC_SEQ1R_USCH1_MASK		0x0f
/** @defgroup afec0_afec_seq1r_usch1 USCH1 User Sequence Number 1
@{*/
/**@}*/


#define AFEC0_AFEC_SEQ1R_USCH0_SHIFT		0
#define AFEC0_AFEC_SEQ1R_USCH0_MASK		0x0f
/** @defgroup afec0_afec_seq1r_usch0 USCH0 User Sequence Number 0
@{*/
/**@}*/


/**@}*/

/** @defgroup afec0_afec_seq2r AFECSEQ2R AFEC Channel Sequence 2 Register
@{*/


#define AFEC0_AFEC_SEQ2R_USCH11_SHIFT		12
#define AFEC0_AFEC_SEQ2R_USCH11_MASK		0x0f
/** @defgroup afec0_afec_seq2r_usch11 USCH11 User Sequence Number 11
@{*/
/**@}*/


#define AFEC0_AFEC_SEQ2R_USCH10_SHIFT		8
#define AFEC0_AFEC_SEQ2R_USCH10_MASK		0x0f
/** @defgroup afec0_afec_seq2r_usch10 USCH10 User Sequence Number 10
@{*/
/**@}*/


#define AFEC0_AFEC_SEQ2R_USCH9_SHIFT		4
#define AFEC0_AFEC_SEQ2R_USCH9_MASK		0x0f
/** @defgroup afec0_afec_seq2r_usch9 USCH9 User Sequence Number 9
@{*/
/**@}*/


#define AFEC0_AFEC_SEQ2R_USCH8_SHIFT		0
#define AFEC0_AFEC_SEQ2R_USCH8_MASK		0x0f
/** @defgroup afec0_afec_seq2r_usch8 USCH8 User Sequence Number 8
@{*/
/**@}*/


/**@}*/

/** @defgroup afec0_afec_cher AFECCHER AFEC Channel Enable Register
@{*/

/** AFEC0_AFEC_CHER_CH11 Channel 11 Enable **/
#define AFEC0_AFEC_CHER_CH11		(1 << 11)
/** AFEC0_AFEC_CHER_CH10 Channel 10 Enable **/
#define AFEC0_AFEC_CHER_CH10		(1 << 10)
/** AFEC0_AFEC_CHER_CH9 Channel 9 Enable **/
#define AFEC0_AFEC_CHER_CH9		(1 << 9)
/** AFEC0_AFEC_CHER_CH8 Channel 8 Enable **/
#define AFEC0_AFEC_CHER_CH8		(1 << 8)
/** AFEC0_AFEC_CHER_CH7 Channel 7 Enable **/
#define AFEC0_AFEC_CHER_CH7		(1 << 7)
/** AFEC0_AFEC_CHER_CH6 Channel 6 Enable **/
#define AFEC0_AFEC_CHER_CH6		(1 << 6)
/** AFEC0_AFEC_CHER_CH5 Channel 5 Enable **/
#define AFEC0_AFEC_CHER_CH5		(1 << 5)
/** AFEC0_AFEC_CHER_CH4 Channel 4 Enable **/
#define AFEC0_AFEC_CHER_CH4		(1 << 4)
/** AFEC0_AFEC_CHER_CH3 Channel 3 Enable **/
#define AFEC0_AFEC_CHER_CH3		(1 << 3)
/** AFEC0_AFEC_CHER_CH2 Channel 2 Enable **/
#define AFEC0_AFEC_CHER_CH2		(1 << 2)
/** AFEC0_AFEC_CHER_CH1 Channel 1 Enable **/
#define AFEC0_AFEC_CHER_CH1		(1 << 1)
/** AFEC0_AFEC_CHER_CH0 Channel 0 Enable **/
#define AFEC0_AFEC_CHER_CH0		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_chdr AFECCHDR AFEC Channel Disable Register
@{*/

/** AFEC0_AFEC_CHDR_CH11 Channel 11 Disable **/
#define AFEC0_AFEC_CHDR_CH11		(1 << 11)
/** AFEC0_AFEC_CHDR_CH10 Channel 10 Disable **/
#define AFEC0_AFEC_CHDR_CH10		(1 << 10)
/** AFEC0_AFEC_CHDR_CH9 Channel 9 Disable **/
#define AFEC0_AFEC_CHDR_CH9		(1 << 9)
/** AFEC0_AFEC_CHDR_CH8 Channel 8 Disable **/
#define AFEC0_AFEC_CHDR_CH8		(1 << 8)
/** AFEC0_AFEC_CHDR_CH7 Channel 7 Disable **/
#define AFEC0_AFEC_CHDR_CH7		(1 << 7)
/** AFEC0_AFEC_CHDR_CH6 Channel 6 Disable **/
#define AFEC0_AFEC_CHDR_CH6		(1 << 6)
/** AFEC0_AFEC_CHDR_CH5 Channel 5 Disable **/
#define AFEC0_AFEC_CHDR_CH5		(1 << 5)
/** AFEC0_AFEC_CHDR_CH4 Channel 4 Disable **/
#define AFEC0_AFEC_CHDR_CH4		(1 << 4)
/** AFEC0_AFEC_CHDR_CH3 Channel 3 Disable **/
#define AFEC0_AFEC_CHDR_CH3		(1 << 3)
/** AFEC0_AFEC_CHDR_CH2 Channel 2 Disable **/
#define AFEC0_AFEC_CHDR_CH2		(1 << 2)
/** AFEC0_AFEC_CHDR_CH1 Channel 1 Disable **/
#define AFEC0_AFEC_CHDR_CH1		(1 << 1)
/** AFEC0_AFEC_CHDR_CH0 Channel 0 Disable **/
#define AFEC0_AFEC_CHDR_CH0		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_chsr AFECCHSR AFEC Channel Status Register
@{*/

/** AFEC0_AFEC_CHSR_CH11 Channel 11 Status **/
#define AFEC0_AFEC_CHSR_CH11		(1 << 11)
/** AFEC0_AFEC_CHSR_CH10 Channel 10 Status **/
#define AFEC0_AFEC_CHSR_CH10		(1 << 10)
/** AFEC0_AFEC_CHSR_CH9 Channel 9 Status **/
#define AFEC0_AFEC_CHSR_CH9		(1 << 9)
/** AFEC0_AFEC_CHSR_CH8 Channel 8 Status **/
#define AFEC0_AFEC_CHSR_CH8		(1 << 8)
/** AFEC0_AFEC_CHSR_CH7 Channel 7 Status **/
#define AFEC0_AFEC_CHSR_CH7		(1 << 7)
/** AFEC0_AFEC_CHSR_CH6 Channel 6 Status **/
#define AFEC0_AFEC_CHSR_CH6		(1 << 6)
/** AFEC0_AFEC_CHSR_CH5 Channel 5 Status **/
#define AFEC0_AFEC_CHSR_CH5		(1 << 5)
/** AFEC0_AFEC_CHSR_CH4 Channel 4 Status **/
#define AFEC0_AFEC_CHSR_CH4		(1 << 4)
/** AFEC0_AFEC_CHSR_CH3 Channel 3 Status **/
#define AFEC0_AFEC_CHSR_CH3		(1 << 3)
/** AFEC0_AFEC_CHSR_CH2 Channel 2 Status **/
#define AFEC0_AFEC_CHSR_CH2		(1 << 2)
/** AFEC0_AFEC_CHSR_CH1 Channel 1 Status **/
#define AFEC0_AFEC_CHSR_CH1		(1 << 1)
/** AFEC0_AFEC_CHSR_CH0 Channel 0 Status **/
#define AFEC0_AFEC_CHSR_CH0		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_lcdr AFECLCDR AFEC Last Converted Data Register
@{*/


#define AFEC0_AFEC_LCDR_CHNB_SHIFT		24
#define AFEC0_AFEC_LCDR_CHNB_MASK		0x0f
/** @defgroup afec0_afec_lcdr_chnb CHNB Channel Number
@{*/
/**@}*/


#define AFEC0_AFEC_LCDR_LDATA_SHIFT		0
#define AFEC0_AFEC_LCDR_LDATA_MASK		0xffff
/** @defgroup afec0_afec_lcdr_ldata LDATA Last Data Converted
@{*/
/**@}*/


/**@}*/

/** @defgroup afec0_afec_ier AFECIER AFEC Interrupt Enable Register
@{*/

/** AFEC0_AFEC_IER_TEMPCHG Temperature Change Interrupt Enable **/
#define AFEC0_AFEC_IER_TEMPCHG		(1 << 30)
/** AFEC0_AFEC_IER_COMPE Comparison Event Interrupt Enable **/
#define AFEC0_AFEC_IER_COMPE		(1 << 26)
/** AFEC0_AFEC_IER_GOVRE General Overrun Error Interrupt Enable **/
#define AFEC0_AFEC_IER_GOVRE		(1 << 25)
/** AFEC0_AFEC_IER_DRDY Data Ready Interrupt Enable **/
#define AFEC0_AFEC_IER_DRDY		(1 << 24)
/** AFEC0_AFEC_IER_EOC11 End of Conversion Interrupt Enable 11 **/
#define AFEC0_AFEC_IER_EOC11		(1 << 11)
/** AFEC0_AFEC_IER_EOC10 End of Conversion Interrupt Enable 10 **/
#define AFEC0_AFEC_IER_EOC10		(1 << 10)
/** AFEC0_AFEC_IER_EOC9 End of Conversion Interrupt Enable 9 **/
#define AFEC0_AFEC_IER_EOC9		(1 << 9)
/** AFEC0_AFEC_IER_EOC8 End of Conversion Interrupt Enable 8 **/
#define AFEC0_AFEC_IER_EOC8		(1 << 8)
/** AFEC0_AFEC_IER_EOC7 End of Conversion Interrupt Enable 7 **/
#define AFEC0_AFEC_IER_EOC7		(1 << 7)
/** AFEC0_AFEC_IER_EOC6 End of Conversion Interrupt Enable 6 **/
#define AFEC0_AFEC_IER_EOC6		(1 << 6)
/** AFEC0_AFEC_IER_EOC5 End of Conversion Interrupt Enable 5 **/
#define AFEC0_AFEC_IER_EOC5		(1 << 5)
/** AFEC0_AFEC_IER_EOC4 End of Conversion Interrupt Enable 4 **/
#define AFEC0_AFEC_IER_EOC4		(1 << 4)
/** AFEC0_AFEC_IER_EOC3 End of Conversion Interrupt Enable 3 **/
#define AFEC0_AFEC_IER_EOC3		(1 << 3)
/** AFEC0_AFEC_IER_EOC2 End of Conversion Interrupt Enable 2 **/
#define AFEC0_AFEC_IER_EOC2		(1 << 2)
/** AFEC0_AFEC_IER_EOC1 End of Conversion Interrupt Enable 1 **/
#define AFEC0_AFEC_IER_EOC1		(1 << 1)
/** AFEC0_AFEC_IER_EOC0 End of Conversion Interrupt Enable 0 **/
#define AFEC0_AFEC_IER_EOC0		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_idr AFECIDR AFEC Interrupt Disable Register
@{*/

/** AFEC0_AFEC_IDR_TEMPCHG Temperature Change Interrupt Disable **/
#define AFEC0_AFEC_IDR_TEMPCHG		(1 << 30)
/** AFEC0_AFEC_IDR_COMPE Comparison Event Interrupt Disable **/
#define AFEC0_AFEC_IDR_COMPE		(1 << 26)
/** AFEC0_AFEC_IDR_GOVRE General Overrun Error Interrupt Disable **/
#define AFEC0_AFEC_IDR_GOVRE		(1 << 25)
/** AFEC0_AFEC_IDR_DRDY Data Ready Interrupt Disable **/
#define AFEC0_AFEC_IDR_DRDY		(1 << 24)
/** AFEC0_AFEC_IDR_EOC11 End of Conversion Interrupt Disable 11 **/
#define AFEC0_AFEC_IDR_EOC11		(1 << 11)
/** AFEC0_AFEC_IDR_EOC10 End of Conversion Interrupt Disable 10 **/
#define AFEC0_AFEC_IDR_EOC10		(1 << 10)
/** AFEC0_AFEC_IDR_EOC9 End of Conversion Interrupt Disable 9 **/
#define AFEC0_AFEC_IDR_EOC9		(1 << 9)
/** AFEC0_AFEC_IDR_EOC8 End of Conversion Interrupt Disable 8 **/
#define AFEC0_AFEC_IDR_EOC8		(1 << 8)
/** AFEC0_AFEC_IDR_EOC7 End of Conversion Interrupt Disable 7 **/
#define AFEC0_AFEC_IDR_EOC7		(1 << 7)
/** AFEC0_AFEC_IDR_EOC6 End of Conversion Interrupt Disable 6 **/
#define AFEC0_AFEC_IDR_EOC6		(1 << 6)
/** AFEC0_AFEC_IDR_EOC5 End of Conversion Interrupt Disable 5 **/
#define AFEC0_AFEC_IDR_EOC5		(1 << 5)
/** AFEC0_AFEC_IDR_EOC4 End of Conversion Interrupt Disable 4 **/
#define AFEC0_AFEC_IDR_EOC4		(1 << 4)
/** AFEC0_AFEC_IDR_EOC3 End of Conversion Interrupt Disable 3 **/
#define AFEC0_AFEC_IDR_EOC3		(1 << 3)
/** AFEC0_AFEC_IDR_EOC2 End of Conversion Interrupt Disable 2 **/
#define AFEC0_AFEC_IDR_EOC2		(1 << 2)
/** AFEC0_AFEC_IDR_EOC1 End of Conversion Interrupt Disable 1 **/
#define AFEC0_AFEC_IDR_EOC1		(1 << 1)
/** AFEC0_AFEC_IDR_EOC0 End of Conversion Interrupt Disable 0 **/
#define AFEC0_AFEC_IDR_EOC0		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_imr AFECIMR AFEC Interrupt Mask Register
@{*/

/** AFEC0_AFEC_IMR_TEMPCHG Temperature Change Interrupt Mask **/
#define AFEC0_AFEC_IMR_TEMPCHG		(1 << 30)
/** AFEC0_AFEC_IMR_COMPE Comparison Event Interrupt Mask **/
#define AFEC0_AFEC_IMR_COMPE		(1 << 26)
/** AFEC0_AFEC_IMR_GOVRE General Overrun Error Interrupt Mask **/
#define AFEC0_AFEC_IMR_GOVRE		(1 << 25)
/** AFEC0_AFEC_IMR_DRDY Data Ready Interrupt Mask **/
#define AFEC0_AFEC_IMR_DRDY		(1 << 24)
/** AFEC0_AFEC_IMR_EOC11 End of Conversion Interrupt Mask 11 **/
#define AFEC0_AFEC_IMR_EOC11		(1 << 11)
/** AFEC0_AFEC_IMR_EOC10 End of Conversion Interrupt Mask 10 **/
#define AFEC0_AFEC_IMR_EOC10		(1 << 10)
/** AFEC0_AFEC_IMR_EOC9 End of Conversion Interrupt Mask 9 **/
#define AFEC0_AFEC_IMR_EOC9		(1 << 9)
/** AFEC0_AFEC_IMR_EOC8 End of Conversion Interrupt Mask 8 **/
#define AFEC0_AFEC_IMR_EOC8		(1 << 8)
/** AFEC0_AFEC_IMR_EOC7 End of Conversion Interrupt Mask 7 **/
#define AFEC0_AFEC_IMR_EOC7		(1 << 7)
/** AFEC0_AFEC_IMR_EOC6 End of Conversion Interrupt Mask 6 **/
#define AFEC0_AFEC_IMR_EOC6		(1 << 6)
/** AFEC0_AFEC_IMR_EOC5 End of Conversion Interrupt Mask 5 **/
#define AFEC0_AFEC_IMR_EOC5		(1 << 5)
/** AFEC0_AFEC_IMR_EOC4 End of Conversion Interrupt Mask 4 **/
#define AFEC0_AFEC_IMR_EOC4		(1 << 4)
/** AFEC0_AFEC_IMR_EOC3 End of Conversion Interrupt Mask 3 **/
#define AFEC0_AFEC_IMR_EOC3		(1 << 3)
/** AFEC0_AFEC_IMR_EOC2 End of Conversion Interrupt Mask 2 **/
#define AFEC0_AFEC_IMR_EOC2		(1 << 2)
/** AFEC0_AFEC_IMR_EOC1 End of Conversion Interrupt Mask 1 **/
#define AFEC0_AFEC_IMR_EOC1		(1 << 1)
/** AFEC0_AFEC_IMR_EOC0 End of Conversion Interrupt Mask 0 **/
#define AFEC0_AFEC_IMR_EOC0		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_isr AFECISR AFEC Interrupt Status Register
@{*/

/** AFEC0_AFEC_ISR_TEMPCHG Temperature Change (cleared on read) **/
#define AFEC0_AFEC_ISR_TEMPCHG		(1 << 30)
/** AFEC0_AFEC_ISR_COMPE Comparison Error (cleared by reading AFEC_ISR) **/
#define AFEC0_AFEC_ISR_COMPE		(1 << 26)
/** AFEC0_AFEC_ISR_GOVRE General Overrun Error (cleared by reading AFEC_ISR) **/
#define AFEC0_AFEC_ISR_GOVRE		(1 << 25)
/** AFEC0_AFEC_ISR_DRDY Data Ready (cleared by reading AFEC_LCDR) **/
#define AFEC0_AFEC_ISR_DRDY		(1 << 24)
/** AFEC0_AFEC_ISR_EOC11 End of Conversion 11 (cleared by reading AFEC_CDRx) **/
#define AFEC0_AFEC_ISR_EOC11		(1 << 11)
/** AFEC0_AFEC_ISR_EOC10 End of Conversion 10 (cleared by reading AFEC_CDRx) **/
#define AFEC0_AFEC_ISR_EOC10		(1 << 10)
/** AFEC0_AFEC_ISR_EOC9 End of Conversion 9 (cleared by reading AFEC_CDRx) **/
#define AFEC0_AFEC_ISR_EOC9		(1 << 9)
/** AFEC0_AFEC_ISR_EOC8 End of Conversion 8 (cleared by reading AFEC_CDRx) **/
#define AFEC0_AFEC_ISR_EOC8		(1 << 8)
/** AFEC0_AFEC_ISR_EOC7 End of Conversion 7 (cleared by reading AFEC_CDRx) **/
#define AFEC0_AFEC_ISR_EOC7		(1 << 7)
/** AFEC0_AFEC_ISR_EOC6 End of Conversion 6 (cleared by reading AFEC_CDRx) **/
#define AFEC0_AFEC_ISR_EOC6		(1 << 6)
/** AFEC0_AFEC_ISR_EOC5 End of Conversion 5 (cleared by reading AFEC_CDRx) **/
#define AFEC0_AFEC_ISR_EOC5		(1 << 5)
/** AFEC0_AFEC_ISR_EOC4 End of Conversion 4 (cleared by reading AFEC_CDRx) **/
#define AFEC0_AFEC_ISR_EOC4		(1 << 4)
/** AFEC0_AFEC_ISR_EOC3 End of Conversion 3 (cleared by reading AFEC_CDRx) **/
#define AFEC0_AFEC_ISR_EOC3		(1 << 3)
/** AFEC0_AFEC_ISR_EOC2 End of Conversion 2 (cleared by reading AFEC_CDRx) **/
#define AFEC0_AFEC_ISR_EOC2		(1 << 2)
/** AFEC0_AFEC_ISR_EOC1 End of Conversion 1 (cleared by reading AFEC_CDRx) **/
#define AFEC0_AFEC_ISR_EOC1		(1 << 1)
/** AFEC0_AFEC_ISR_EOC0 End of Conversion 0 (cleared by reading AFEC_CDRx) **/
#define AFEC0_AFEC_ISR_EOC0		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_over AFECOVER AFEC Overrun Status Register
@{*/

/** AFEC0_AFEC_OVER_OVRE11 Overrun Error 11 **/
#define AFEC0_AFEC_OVER_OVRE11		(1 << 11)
/** AFEC0_AFEC_OVER_OVRE10 Overrun Error 10 **/
#define AFEC0_AFEC_OVER_OVRE10		(1 << 10)
/** AFEC0_AFEC_OVER_OVRE9 Overrun Error 9 **/
#define AFEC0_AFEC_OVER_OVRE9		(1 << 9)
/** AFEC0_AFEC_OVER_OVRE8 Overrun Error 8 **/
#define AFEC0_AFEC_OVER_OVRE8		(1 << 8)
/** AFEC0_AFEC_OVER_OVRE7 Overrun Error 7 **/
#define AFEC0_AFEC_OVER_OVRE7		(1 << 7)
/** AFEC0_AFEC_OVER_OVRE6 Overrun Error 6 **/
#define AFEC0_AFEC_OVER_OVRE6		(1 << 6)
/** AFEC0_AFEC_OVER_OVRE5 Overrun Error 5 **/
#define AFEC0_AFEC_OVER_OVRE5		(1 << 5)
/** AFEC0_AFEC_OVER_OVRE4 Overrun Error 4 **/
#define AFEC0_AFEC_OVER_OVRE4		(1 << 4)
/** AFEC0_AFEC_OVER_OVRE3 Overrun Error 3 **/
#define AFEC0_AFEC_OVER_OVRE3		(1 << 3)
/** AFEC0_AFEC_OVER_OVRE2 Overrun Error 2 **/
#define AFEC0_AFEC_OVER_OVRE2		(1 << 2)
/** AFEC0_AFEC_OVER_OVRE1 Overrun Error 1 **/
#define AFEC0_AFEC_OVER_OVRE1		(1 << 1)
/** AFEC0_AFEC_OVER_OVRE0 Overrun Error 0 **/
#define AFEC0_AFEC_OVER_OVRE0		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_cwr AFECCWR AFEC Compare Window Register
@{*/


#define AFEC0_AFEC_CWR_HIGHTHRES_SHIFT		16
#define AFEC0_AFEC_CWR_HIGHTHRES_MASK		0xffff
/** @defgroup afec0_afec_cwr_highthres HIGHTHRES High Threshold
@{*/
/**@}*/


#define AFEC0_AFEC_CWR_LOWTHRES_SHIFT		0
#define AFEC0_AFEC_CWR_LOWTHRES_MASK		0xffff
/** @defgroup afec0_afec_cwr_lowthres LOWTHRES Low Threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup afec0_afec_cgr AFECCGR AFEC Channel Gain Register
@{*/


#define AFEC0_AFEC_CGR_GAIN11_SHIFT		22
#define AFEC0_AFEC_CGR_GAIN11_MASK		0x03
/** @defgroup afec0_afec_cgr_gain11 GAIN11 Gain for Channel 11
@{*/
/**@}*/


#define AFEC0_AFEC_CGR_GAIN10_SHIFT		20
#define AFEC0_AFEC_CGR_GAIN10_MASK		0x03
/** @defgroup afec0_afec_cgr_gain10 GAIN10 Gain for Channel 10
@{*/
/**@}*/


#define AFEC0_AFEC_CGR_GAIN9_SHIFT		18
#define AFEC0_AFEC_CGR_GAIN9_MASK		0x03
/** @defgroup afec0_afec_cgr_gain9 GAIN9 Gain for Channel 9
@{*/
/**@}*/


#define AFEC0_AFEC_CGR_GAIN8_SHIFT		16
#define AFEC0_AFEC_CGR_GAIN8_MASK		0x03
/** @defgroup afec0_afec_cgr_gain8 GAIN8 Gain for Channel 8
@{*/
/**@}*/


#define AFEC0_AFEC_CGR_GAIN7_SHIFT		14
#define AFEC0_AFEC_CGR_GAIN7_MASK		0x03
/** @defgroup afec0_afec_cgr_gain7 GAIN7 Gain for Channel 7
@{*/
/**@}*/


#define AFEC0_AFEC_CGR_GAIN6_SHIFT		12
#define AFEC0_AFEC_CGR_GAIN6_MASK		0x03
/** @defgroup afec0_afec_cgr_gain6 GAIN6 Gain for Channel 6
@{*/
/**@}*/


#define AFEC0_AFEC_CGR_GAIN5_SHIFT		10
#define AFEC0_AFEC_CGR_GAIN5_MASK		0x03
/** @defgroup afec0_afec_cgr_gain5 GAIN5 Gain for Channel 5
@{*/
/**@}*/


#define AFEC0_AFEC_CGR_GAIN4_SHIFT		8
#define AFEC0_AFEC_CGR_GAIN4_MASK		0x03
/** @defgroup afec0_afec_cgr_gain4 GAIN4 Gain for Channel 4
@{*/
/**@}*/


#define AFEC0_AFEC_CGR_GAIN3_SHIFT		6
#define AFEC0_AFEC_CGR_GAIN3_MASK		0x03
/** @defgroup afec0_afec_cgr_gain3 GAIN3 Gain for Channel 3
@{*/
/**@}*/


#define AFEC0_AFEC_CGR_GAIN2_SHIFT		4
#define AFEC0_AFEC_CGR_GAIN2_MASK		0x03
/** @defgroup afec0_afec_cgr_gain2 GAIN2 Gain for Channel 2
@{*/
/**@}*/


#define AFEC0_AFEC_CGR_GAIN1_SHIFT		2
#define AFEC0_AFEC_CGR_GAIN1_MASK		0x03
/** @defgroup afec0_afec_cgr_gain1 GAIN1 Gain for Channel 1
@{*/
/**@}*/


#define AFEC0_AFEC_CGR_GAIN0_SHIFT		0
#define AFEC0_AFEC_CGR_GAIN0_MASK		0x03
/** @defgroup afec0_afec_cgr_gain0 GAIN0 Gain for Channel 0
@{*/
/**@}*/


/**@}*/

/** @defgroup afec0_afec_diffr AFECDIFFR AFEC Channel Differential Register
@{*/

/** AFEC0_AFEC_DIFFR_DIFF11 Differential inputs for channel 11 **/
#define AFEC0_AFEC_DIFFR_DIFF11		(1 << 11)
/** AFEC0_AFEC_DIFFR_DIFF10 Differential inputs for channel 10 **/
#define AFEC0_AFEC_DIFFR_DIFF10		(1 << 10)
/** AFEC0_AFEC_DIFFR_DIFF9 Differential inputs for channel 9 **/
#define AFEC0_AFEC_DIFFR_DIFF9		(1 << 9)
/** AFEC0_AFEC_DIFFR_DIFF8 Differential inputs for channel 8 **/
#define AFEC0_AFEC_DIFFR_DIFF8		(1 << 8)
/** AFEC0_AFEC_DIFFR_DIFF7 Differential inputs for channel 7 **/
#define AFEC0_AFEC_DIFFR_DIFF7		(1 << 7)
/** AFEC0_AFEC_DIFFR_DIFF6 Differential inputs for channel 6 **/
#define AFEC0_AFEC_DIFFR_DIFF6		(1 << 6)
/** AFEC0_AFEC_DIFFR_DIFF5 Differential inputs for channel 5 **/
#define AFEC0_AFEC_DIFFR_DIFF5		(1 << 5)
/** AFEC0_AFEC_DIFFR_DIFF4 Differential inputs for channel 4 **/
#define AFEC0_AFEC_DIFFR_DIFF4		(1 << 4)
/** AFEC0_AFEC_DIFFR_DIFF3 Differential inputs for channel 3 **/
#define AFEC0_AFEC_DIFFR_DIFF3		(1 << 3)
/** AFEC0_AFEC_DIFFR_DIFF2 Differential inputs for channel 2 **/
#define AFEC0_AFEC_DIFFR_DIFF2		(1 << 2)
/** AFEC0_AFEC_DIFFR_DIFF1 Differential inputs for channel 1 **/
#define AFEC0_AFEC_DIFFR_DIFF1		(1 << 1)
/** AFEC0_AFEC_DIFFR_DIFF0 Differential inputs for channel 0 **/
#define AFEC0_AFEC_DIFFR_DIFF0		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_cselr AFECCSELR AFEC Channel Selection Register
@{*/


#define AFEC0_AFEC_CSELR_CSEL_SHIFT		0
#define AFEC0_AFEC_CSELR_CSEL_MASK		0x0f
/** @defgroup afec0_afec_cselr_csel CSEL Channel Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup afec0_afec_cdr AFECCDR AFEC Channel Data Register
@{*/


#define AFEC0_AFEC_CDR_DATA_SHIFT		0
#define AFEC0_AFEC_CDR_DATA_MASK		0xffff
/** @defgroup afec0_afec_cdr_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup afec0_afec_cocr AFECCOCR AFEC Channel Offset Compensation Register
@{*/


#define AFEC0_AFEC_COCR_AOFF_SHIFT		0
#define AFEC0_AFEC_COCR_AOFF_MASK		0x3ff
/** @defgroup afec0_afec_cocr_aoff AOFF Analog Offset
@{*/
/**@}*/


/**@}*/

/** @defgroup afec0_afec_tempmr AFECTEMPMR AFEC Temperature Sensor Mode Register
@{*/


#define AFEC0_AFEC_TEMPMR_TEMPCMPMOD_SHIFT		4
#define AFEC0_AFEC_TEMPMR_TEMPCMPMOD_MASK		0x03
/** @defgroup afec0_afec_tempmr_tempcmpmod TEMPCMPMOD Temperature Comparison Mode
@{*/
/**@}*/

/** AFEC0_AFEC_TEMPMR_RTCT Temperature Sensor RTC Trigger Mode **/
#define AFEC0_AFEC_TEMPMR_RTCT		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_tempcwr AFECTEMPCWR AFEC Temperature Compare Window Register
@{*/


#define AFEC0_AFEC_TEMPCWR_THIGHTHRES_SHIFT		16
#define AFEC0_AFEC_TEMPCWR_THIGHTHRES_MASK		0xffff
/** @defgroup afec0_afec_tempcwr_thighthres THIGHTHRES Temperature High Threshold
@{*/
/**@}*/


#define AFEC0_AFEC_TEMPCWR_TLOWTHRES_SHIFT		0
#define AFEC0_AFEC_TEMPCWR_TLOWTHRES_MASK		0xffff
/** @defgroup afec0_afec_tempcwr_tlowthres TLOWTHRES Temperature Low Threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup afec0_afec_acr AFECACR AFEC Analog Control Register
@{*/


#define AFEC0_AFEC_ACR_IBCTL_SHIFT		8
#define AFEC0_AFEC_ACR_IBCTL_MASK		0x03
/** @defgroup afec0_afec_acr_ibctl IBCTL AFE Bias Current Control
@{*/
/**@}*/

/** AFEC0_AFEC_ACR_PGA1EN PGA1 Enable **/
#define AFEC0_AFEC_ACR_PGA1EN		(1 << 3)
/** AFEC0_AFEC_ACR_PGA0EN PGA0 Enable **/
#define AFEC0_AFEC_ACR_PGA0EN		(1 << 2)

/**@}*/

/** @defgroup afec0_afec_shmr AFECSHMR AFEC Sample & Hold Mode Register
@{*/

/** AFEC0_AFEC_SHMR_DUAL11 Dual Sample & Hold for channel 11 **/
#define AFEC0_AFEC_SHMR_DUAL11		(1 << 11)
/** AFEC0_AFEC_SHMR_DUAL10 Dual Sample & Hold for channel 10 **/
#define AFEC0_AFEC_SHMR_DUAL10		(1 << 10)
/** AFEC0_AFEC_SHMR_DUAL9 Dual Sample & Hold for channel 9 **/
#define AFEC0_AFEC_SHMR_DUAL9		(1 << 9)
/** AFEC0_AFEC_SHMR_DUAL8 Dual Sample & Hold for channel 8 **/
#define AFEC0_AFEC_SHMR_DUAL8		(1 << 8)
/** AFEC0_AFEC_SHMR_DUAL7 Dual Sample & Hold for channel 7 **/
#define AFEC0_AFEC_SHMR_DUAL7		(1 << 7)
/** AFEC0_AFEC_SHMR_DUAL6 Dual Sample & Hold for channel 6 **/
#define AFEC0_AFEC_SHMR_DUAL6		(1 << 6)
/** AFEC0_AFEC_SHMR_DUAL5 Dual Sample & Hold for channel 5 **/
#define AFEC0_AFEC_SHMR_DUAL5		(1 << 5)
/** AFEC0_AFEC_SHMR_DUAL4 Dual Sample & Hold for channel 4 **/
#define AFEC0_AFEC_SHMR_DUAL4		(1 << 4)
/** AFEC0_AFEC_SHMR_DUAL3 Dual Sample & Hold for channel 3 **/
#define AFEC0_AFEC_SHMR_DUAL3		(1 << 3)
/** AFEC0_AFEC_SHMR_DUAL2 Dual Sample & Hold for channel 2 **/
#define AFEC0_AFEC_SHMR_DUAL2		(1 << 2)
/** AFEC0_AFEC_SHMR_DUAL1 Dual Sample & Hold for channel 1 **/
#define AFEC0_AFEC_SHMR_DUAL1		(1 << 1)
/** AFEC0_AFEC_SHMR_DUAL0 Dual Sample & Hold for channel 0 **/
#define AFEC0_AFEC_SHMR_DUAL0		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_cosr AFECCOSR AFEC Correction Select Register
@{*/

/** AFEC0_AFEC_COSR_CSEL Sample & Hold unit Correction Select **/
#define AFEC0_AFEC_COSR_CSEL		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_cvr AFECCVR AFEC Correction Values Register
@{*/


#define AFEC0_AFEC_CVR_GAINCORR_SHIFT		16
#define AFEC0_AFEC_CVR_GAINCORR_MASK		0xffff
/** @defgroup afec0_afec_cvr_gaincorr GAINCORR Gain Correction
@{*/
/**@}*/


#define AFEC0_AFEC_CVR_OFFSETCORR_SHIFT		0
#define AFEC0_AFEC_CVR_OFFSETCORR_MASK		0xffff
/** @defgroup afec0_afec_cvr_offsetcorr OFFSETCORR Offset Correction
@{*/
/**@}*/


/**@}*/

/** @defgroup afec0_afec_cecr AFECCECR AFEC Channel Error Correction Register
@{*/

/** AFEC0_AFEC_CECR_ECORR11 Error Correction Enable for channel 11 **/
#define AFEC0_AFEC_CECR_ECORR11		(1 << 11)
/** AFEC0_AFEC_CECR_ECORR10 Error Correction Enable for channel 10 **/
#define AFEC0_AFEC_CECR_ECORR10		(1 << 10)
/** AFEC0_AFEC_CECR_ECORR9 Error Correction Enable for channel 9 **/
#define AFEC0_AFEC_CECR_ECORR9		(1 << 9)
/** AFEC0_AFEC_CECR_ECORR8 Error Correction Enable for channel 8 **/
#define AFEC0_AFEC_CECR_ECORR8		(1 << 8)
/** AFEC0_AFEC_CECR_ECORR7 Error Correction Enable for channel 7 **/
#define AFEC0_AFEC_CECR_ECORR7		(1 << 7)
/** AFEC0_AFEC_CECR_ECORR6 Error Correction Enable for channel 6 **/
#define AFEC0_AFEC_CECR_ECORR6		(1 << 6)
/** AFEC0_AFEC_CECR_ECORR5 Error Correction Enable for channel 5 **/
#define AFEC0_AFEC_CECR_ECORR5		(1 << 5)
/** AFEC0_AFEC_CECR_ECORR4 Error Correction Enable for channel 4 **/
#define AFEC0_AFEC_CECR_ECORR4		(1 << 4)
/** AFEC0_AFEC_CECR_ECORR3 Error Correction Enable for channel 3 **/
#define AFEC0_AFEC_CECR_ECORR3		(1 << 3)
/** AFEC0_AFEC_CECR_ECORR2 Error Correction Enable for channel 2 **/
#define AFEC0_AFEC_CECR_ECORR2		(1 << 2)
/** AFEC0_AFEC_CECR_ECORR1 Error Correction Enable for channel 1 **/
#define AFEC0_AFEC_CECR_ECORR1		(1 << 1)
/** AFEC0_AFEC_CECR_ECORR0 Error Correction Enable for channel 0 **/
#define AFEC0_AFEC_CECR_ECORR0		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_wpmr AFECWPMR AFEC Write Protection Mode Register
@{*/


#define AFEC0_AFEC_WPMR_WPKEY_SHIFT		8
#define AFEC0_AFEC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup afec0_afec_wpmr_wpkey WPKEY Write Protect KEY
@{*/
/**@}*/

/** AFEC0_AFEC_WPMR_WPEN Write Protection Enable **/
#define AFEC0_AFEC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup afec0_afec_wpsr AFECWPSR AFEC Write Protection Status Register
@{*/


#define AFEC0_AFEC_WPSR_WPVSRC_SHIFT		8
#define AFEC0_AFEC_WPSR_WPVSRC_MASK		0xffff
/** @defgroup afec0_afec_wpsr_wpvsrc WPVSRC Write Protect Violation Source
@{*/
/**@}*/

/** AFEC0_AFEC_WPSR_WPVS Write Protect Violation Status **/
#define AFEC0_AFEC_WPSR_WPVS		(1 << 0)

/**@}*/

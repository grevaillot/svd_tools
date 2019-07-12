#pragma once 

/* --- ADC: Analog-to-Digital Converter ----------------------------- */

/** @defgroup adc_registers Analog-to-Digital Converter Register
@{*/

/** ADC_CR Control Register **/
#define ADC_CR			MMIO32(ADC_BASE + 0x00)
/** ADC_MR Mode Register **/
#define ADC_MR			MMIO32(ADC_BASE + 0x04)
/** ADC_SEQR1 Channel Sequence Register 1 **/
#define ADC_SEQR1			MMIO32(ADC_BASE + 0x08)
/** ADC_SEQR2 Channel Sequence Register 2 **/
#define ADC_SEQR2			MMIO32(ADC_BASE + 0x0c)
/** ADC_CHER Channel Enable Register **/
#define ADC_CHER			MMIO32(ADC_BASE + 0x10)
/** ADC_CHDR Channel Disable Register **/
#define ADC_CHDR			MMIO32(ADC_BASE + 0x14)
/** ADC_CHSR Channel Status Register **/
#define ADC_CHSR			MMIO32(ADC_BASE + 0x18)
/** ADC_LCDR Last Converted Data Register **/
#define ADC_LCDR			MMIO32(ADC_BASE + 0x20)
/** ADC_IER Interrupt Enable Register **/
#define ADC_IER			MMIO32(ADC_BASE + 0x24)
/** ADC_IDR Interrupt Disable Register **/
#define ADC_IDR			MMIO32(ADC_BASE + 0x28)
/** ADC_IMR Interrupt Mask Register **/
#define ADC_IMR			MMIO32(ADC_BASE + 0x2c)
/** ADC_ISR Interrupt Status Register **/
#define ADC_ISR			MMIO32(ADC_BASE + 0x30)
/** ADC_OVER Overrun Status Register **/
#define ADC_OVER			MMIO32(ADC_BASE + 0x3c)
/** ADC_EMR Extended Mode Register **/
#define ADC_EMR			MMIO32(ADC_BASE + 0x40)
/** ADC_CWR Compare Window Register **/
#define ADC_CWR			MMIO32(ADC_BASE + 0x44)
/** ADC_CGR Channel Gain Register **/
#define ADC_CGR			MMIO32(ADC_BASE + 0x48)
/** ADC_COR Channel Offset Register **/
#define ADC_COR			MMIO32(ADC_BASE + 0x4c)
/** ADC_CDR[0] Channel Data Register **/
#define ADC_CDR[0]			MMIO32(ADC_BASE + 0x50)
/** ADC_CDR[1] Channel Data Register **/
#define ADC_CDR[1]			MMIO32(ADC_BASE + 0x54)
/** ADC_CDR[2] Channel Data Register **/
#define ADC_CDR[2]			MMIO32(ADC_BASE + 0x58)
/** ADC_CDR[3] Channel Data Register **/
#define ADC_CDR[3]			MMIO32(ADC_BASE + 0x5c)
/** ADC_CDR[4] Channel Data Register **/
#define ADC_CDR[4]			MMIO32(ADC_BASE + 0x60)
/** ADC_CDR[5] Channel Data Register **/
#define ADC_CDR[5]			MMIO32(ADC_BASE + 0x64)
/** ADC_CDR[6] Channel Data Register **/
#define ADC_CDR[6]			MMIO32(ADC_BASE + 0x68)
/** ADC_CDR[7] Channel Data Register **/
#define ADC_CDR[7]			MMIO32(ADC_BASE + 0x6c)
/** ADC_CDR[8] Channel Data Register **/
#define ADC_CDR[8]			MMIO32(ADC_BASE + 0x70)
/** ADC_CDR[9] Channel Data Register **/
#define ADC_CDR[9]			MMIO32(ADC_BASE + 0x74)
/** ADC_CDR[10] Channel Data Register **/
#define ADC_CDR[10]			MMIO32(ADC_BASE + 0x78)
/** ADC_CDR[11] Channel Data Register **/
#define ADC_CDR[11]			MMIO32(ADC_BASE + 0x7c)
/** ADC_CDR[12] Channel Data Register **/
#define ADC_CDR[12]			MMIO32(ADC_BASE + 0x80)
/** ADC_CDR[13] Channel Data Register **/
#define ADC_CDR[13]			MMIO32(ADC_BASE + 0x84)
/** ADC_CDR[14] Channel Data Register **/
#define ADC_CDR[14]			MMIO32(ADC_BASE + 0x88)
/** ADC_CDR[15] Channel Data Register **/
#define ADC_CDR[15]			MMIO32(ADC_BASE + 0x8c)
/** ADC_ACR Analog Control Register **/
#define ADC_ACR			MMIO32(ADC_BASE + 0x94)
/** ADC_WPMR Write Protect Mode Register **/
#define ADC_WPMR			MMIO32(ADC_BASE + 0xe4)
/** ADC_WPSR Write Protect Status Register **/
#define ADC_WPSR			MMIO32(ADC_BASE + 0xe8)
/** ADC_RPR Receive Pointer Register **/
#define ADC_RPR			MMIO32(ADC_BASE + 0x100)
/** ADC_RCR Receive Counter Register **/
#define ADC_RCR			MMIO32(ADC_BASE + 0x104)
/** ADC_RNPR Receive Next Pointer Register **/
#define ADC_RNPR			MMIO32(ADC_BASE + 0x110)
/** ADC_RNCR Receive Next Counter Register **/
#define ADC_RNCR			MMIO32(ADC_BASE + 0x114)
/** ADC_PTCR Transfer Control Register **/
#define ADC_PTCR			MMIO32(ADC_BASE + 0x120)
/** ADC_PTSR Transfer Status Register **/
#define ADC_PTSR			MMIO32(ADC_BASE + 0x124)

/**@}*/


/** @defgroup adc_cr CR Control Register
@{*/

/** ADC_CR_START Start Conversion **/
#define ADC_CR_START		(1 << 1)
/** ADC_CR_SWRST Software Reset **/
#define ADC_CR_SWRST		(1 << 0)

/**@}*/

/** @defgroup adc_mr MR Mode Register
@{*/

/** ADC_MR_USEQ Use Sequence Enable **/
#define ADC_MR_USEQ		(1 << 31)

#define ADC_MR_TRANSFER_SHIFT		28
#define ADC_MR_TRANSFER_MASK		0x03
/** @defgroup adc_mr_transfer TRANSFER Transfer Period
@{*/
/**@}*/


#define ADC_MR_TRACKTIM_SHIFT		24
#define ADC_MR_TRACKTIM_MASK		0x0f
/** @defgroup adc_mr_tracktim TRACKTIM Tracking Time
@{*/
/**@}*/

/** ADC_MR_ANACH Analog Change **/
#define ADC_MR_ANACH		(1 << 23)

#define ADC_MR_SETTLING_SHIFT		20
#define ADC_MR_SETTLING_MASK		0x03
/** @defgroup adc_mr_settling SETTLING Analog Settling Time
@{*/
/**@}*/


#define ADC_MR_STARTUP_SHIFT		16
#define ADC_MR_STARTUP_MASK		0x0f
/** @defgroup adc_mr_startup STARTUP Start Up Time
@{*/
/**@}*/


#define ADC_MR_PRESCAL_SHIFT		8
#define ADC_MR_PRESCAL_MASK		0xff
/** @defgroup adc_mr_prescal PRESCAL Prescaler Rate Selection
@{*/
/**@}*/

/** ADC_MR_FREERUN Free Run Mode **/
#define ADC_MR_FREERUN		(1 << 7)
/** ADC_MR_FWUP Fast Wake Up **/
#define ADC_MR_FWUP		(1 << 6)
/** ADC_MR_SLEEP Sleep Mode **/
#define ADC_MR_SLEEP		(1 << 5)

#define ADC_MR_TRGSEL_SHIFT		1
#define ADC_MR_TRGSEL_MASK		0x07
/** @defgroup adc_mr_trgsel TRGSEL Trigger Selection
@{*/
/**@}*/

/** ADC_MR_TRGEN Trigger Enable **/
#define ADC_MR_TRGEN		(1 << 0)

/**@}*/

/** @defgroup adc_seqr1 SEQR1 Channel Sequence Register 1
@{*/


#define ADC_SEQR1_USCH8_SHIFT		28
#define ADC_SEQR1_USCH8_MASK		0x0f
/** @defgroup adc_seqr1_usch8 USCH8 User Sequence Number 8
@{*/
/**@}*/


#define ADC_SEQR1_USCH7_SHIFT		24
#define ADC_SEQR1_USCH7_MASK		0x0f
/** @defgroup adc_seqr1_usch7 USCH7 User Sequence Number 7
@{*/
/**@}*/


#define ADC_SEQR1_USCH6_SHIFT		20
#define ADC_SEQR1_USCH6_MASK		0x0f
/** @defgroup adc_seqr1_usch6 USCH6 User Sequence Number 6
@{*/
/**@}*/


#define ADC_SEQR1_USCH5_SHIFT		16
#define ADC_SEQR1_USCH5_MASK		0x0f
/** @defgroup adc_seqr1_usch5 USCH5 User Sequence Number 5
@{*/
/**@}*/


#define ADC_SEQR1_USCH4_SHIFT		12
#define ADC_SEQR1_USCH4_MASK		0x0f
/** @defgroup adc_seqr1_usch4 USCH4 User Sequence Number 4
@{*/
/**@}*/


#define ADC_SEQR1_USCH3_SHIFT		8
#define ADC_SEQR1_USCH3_MASK		0x0f
/** @defgroup adc_seqr1_usch3 USCH3 User Sequence Number 3
@{*/
/**@}*/


#define ADC_SEQR1_USCH2_SHIFT		4
#define ADC_SEQR1_USCH2_MASK		0x0f
/** @defgroup adc_seqr1_usch2 USCH2 User Sequence Number 2
@{*/
/**@}*/


#define ADC_SEQR1_USCH1_SHIFT		0
#define ADC_SEQR1_USCH1_MASK		0x0f
/** @defgroup adc_seqr1_usch1 USCH1 User Sequence Number 1
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_seqr2 SEQR2 Channel Sequence Register 2
@{*/


#define ADC_SEQR2_USCH15_SHIFT		24
#define ADC_SEQR2_USCH15_MASK		0x0f
/** @defgroup adc_seqr2_usch15 USCH15 User Sequence Number 15
@{*/
/**@}*/


#define ADC_SEQR2_USCH14_SHIFT		20
#define ADC_SEQR2_USCH14_MASK		0x0f
/** @defgroup adc_seqr2_usch14 USCH14 User Sequence Number 14
@{*/
/**@}*/


#define ADC_SEQR2_USCH13_SHIFT		16
#define ADC_SEQR2_USCH13_MASK		0x0f
/** @defgroup adc_seqr2_usch13 USCH13 User Sequence Number 13
@{*/
/**@}*/


#define ADC_SEQR2_USCH12_SHIFT		12
#define ADC_SEQR2_USCH12_MASK		0x0f
/** @defgroup adc_seqr2_usch12 USCH12 User Sequence Number 12
@{*/
/**@}*/


#define ADC_SEQR2_USCH11_SHIFT		8
#define ADC_SEQR2_USCH11_MASK		0x0f
/** @defgroup adc_seqr2_usch11 USCH11 User Sequence Number 11
@{*/
/**@}*/


#define ADC_SEQR2_USCH10_SHIFT		4
#define ADC_SEQR2_USCH10_MASK		0x0f
/** @defgroup adc_seqr2_usch10 USCH10 User Sequence Number 10
@{*/
/**@}*/


#define ADC_SEQR2_USCH9_SHIFT		0
#define ADC_SEQR2_USCH9_MASK		0x0f
/** @defgroup adc_seqr2_usch9 USCH9 User Sequence Number 9
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cher CHER Channel Enable Register
@{*/

/** ADC_CHER_CH15 Channel 15 Enable **/
#define ADC_CHER_CH15		(1 << 15)
/** ADC_CHER_CH14 Channel 14 Enable **/
#define ADC_CHER_CH14		(1 << 14)
/** ADC_CHER_CH13 Channel 13 Enable **/
#define ADC_CHER_CH13		(1 << 13)
/** ADC_CHER_CH12 Channel 12 Enable **/
#define ADC_CHER_CH12		(1 << 12)
/** ADC_CHER_CH11 Channel 11 Enable **/
#define ADC_CHER_CH11		(1 << 11)
/** ADC_CHER_CH10 Channel 10 Enable **/
#define ADC_CHER_CH10		(1 << 10)
/** ADC_CHER_CH9 Channel 9 Enable **/
#define ADC_CHER_CH9		(1 << 9)
/** ADC_CHER_CH8 Channel 8 Enable **/
#define ADC_CHER_CH8		(1 << 8)
/** ADC_CHER_CH7 Channel 7 Enable **/
#define ADC_CHER_CH7		(1 << 7)
/** ADC_CHER_CH6 Channel 6 Enable **/
#define ADC_CHER_CH6		(1 << 6)
/** ADC_CHER_CH5 Channel 5 Enable **/
#define ADC_CHER_CH5		(1 << 5)
/** ADC_CHER_CH4 Channel 4 Enable **/
#define ADC_CHER_CH4		(1 << 4)
/** ADC_CHER_CH3 Channel 3 Enable **/
#define ADC_CHER_CH3		(1 << 3)
/** ADC_CHER_CH2 Channel 2 Enable **/
#define ADC_CHER_CH2		(1 << 2)
/** ADC_CHER_CH1 Channel 1 Enable **/
#define ADC_CHER_CH1		(1 << 1)
/** ADC_CHER_CH0 Channel 0 Enable **/
#define ADC_CHER_CH0		(1 << 0)

/**@}*/

/** @defgroup adc_chdr CHDR Channel Disable Register
@{*/

/** ADC_CHDR_CH15 Channel 15 Disable **/
#define ADC_CHDR_CH15		(1 << 15)
/** ADC_CHDR_CH14 Channel 14 Disable **/
#define ADC_CHDR_CH14		(1 << 14)
/** ADC_CHDR_CH13 Channel 13 Disable **/
#define ADC_CHDR_CH13		(1 << 13)
/** ADC_CHDR_CH12 Channel 12 Disable **/
#define ADC_CHDR_CH12		(1 << 12)
/** ADC_CHDR_CH11 Channel 11 Disable **/
#define ADC_CHDR_CH11		(1 << 11)
/** ADC_CHDR_CH10 Channel 10 Disable **/
#define ADC_CHDR_CH10		(1 << 10)
/** ADC_CHDR_CH9 Channel 9 Disable **/
#define ADC_CHDR_CH9		(1 << 9)
/** ADC_CHDR_CH8 Channel 8 Disable **/
#define ADC_CHDR_CH8		(1 << 8)
/** ADC_CHDR_CH7 Channel 7 Disable **/
#define ADC_CHDR_CH7		(1 << 7)
/** ADC_CHDR_CH6 Channel 6 Disable **/
#define ADC_CHDR_CH6		(1 << 6)
/** ADC_CHDR_CH5 Channel 5 Disable **/
#define ADC_CHDR_CH5		(1 << 5)
/** ADC_CHDR_CH4 Channel 4 Disable **/
#define ADC_CHDR_CH4		(1 << 4)
/** ADC_CHDR_CH3 Channel 3 Disable **/
#define ADC_CHDR_CH3		(1 << 3)
/** ADC_CHDR_CH2 Channel 2 Disable **/
#define ADC_CHDR_CH2		(1 << 2)
/** ADC_CHDR_CH1 Channel 1 Disable **/
#define ADC_CHDR_CH1		(1 << 1)
/** ADC_CHDR_CH0 Channel 0 Disable **/
#define ADC_CHDR_CH0		(1 << 0)

/**@}*/

/** @defgroup adc_chsr CHSR Channel Status Register
@{*/

/** ADC_CHSR_CH15 Channel 15 Status **/
#define ADC_CHSR_CH15		(1 << 15)
/** ADC_CHSR_CH14 Channel 14 Status **/
#define ADC_CHSR_CH14		(1 << 14)
/** ADC_CHSR_CH13 Channel 13 Status **/
#define ADC_CHSR_CH13		(1 << 13)
/** ADC_CHSR_CH12 Channel 12 Status **/
#define ADC_CHSR_CH12		(1 << 12)
/** ADC_CHSR_CH11 Channel 11 Status **/
#define ADC_CHSR_CH11		(1 << 11)
/** ADC_CHSR_CH10 Channel 10 Status **/
#define ADC_CHSR_CH10		(1 << 10)
/** ADC_CHSR_CH9 Channel 9 Status **/
#define ADC_CHSR_CH9		(1 << 9)
/** ADC_CHSR_CH8 Channel 8 Status **/
#define ADC_CHSR_CH8		(1 << 8)
/** ADC_CHSR_CH7 Channel 7 Status **/
#define ADC_CHSR_CH7		(1 << 7)
/** ADC_CHSR_CH6 Channel 6 Status **/
#define ADC_CHSR_CH6		(1 << 6)
/** ADC_CHSR_CH5 Channel 5 Status **/
#define ADC_CHSR_CH5		(1 << 5)
/** ADC_CHSR_CH4 Channel 4 Status **/
#define ADC_CHSR_CH4		(1 << 4)
/** ADC_CHSR_CH3 Channel 3 Status **/
#define ADC_CHSR_CH3		(1 << 3)
/** ADC_CHSR_CH2 Channel 2 Status **/
#define ADC_CHSR_CH2		(1 << 2)
/** ADC_CHSR_CH1 Channel 1 Status **/
#define ADC_CHSR_CH1		(1 << 1)
/** ADC_CHSR_CH0 Channel 0 Status **/
#define ADC_CHSR_CH0		(1 << 0)

/**@}*/

/** @defgroup adc_lcdr LCDR Last Converted Data Register
@{*/


#define ADC_LCDR_CHNB_SHIFT		12
#define ADC_LCDR_CHNB_MASK		0x0f
/** @defgroup adc_lcdr_chnb CHNB Channel Number
@{*/
/**@}*/


#define ADC_LCDR_LDATA_SHIFT		0
#define ADC_LCDR_LDATA_MASK		0xfff
/** @defgroup adc_lcdr_ldata LDATA Last Data Converted
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_ier IER Interrupt Enable Register
@{*/

/** ADC_IER_RXBUFF Receive Buffer Full Interrupt Enable **/
#define ADC_IER_RXBUFF		(1 << 28)
/** ADC_IER_ENDRX End of Receive Buffer Interrupt Enable **/
#define ADC_IER_ENDRX		(1 << 27)
/** ADC_IER_COMPE Comparison Event Interrupt Enable **/
#define ADC_IER_COMPE		(1 << 26)
/** ADC_IER_GOVRE General Overrun Error Interrupt Enable **/
#define ADC_IER_GOVRE		(1 << 25)
/** ADC_IER_DRDY Data Ready Interrupt Enable **/
#define ADC_IER_DRDY		(1 << 24)
/** ADC_IER_EOC15 End of Conversion Interrupt Enable 15 **/
#define ADC_IER_EOC15		(1 << 15)
/** ADC_IER_EOC14 End of Conversion Interrupt Enable 14 **/
#define ADC_IER_EOC14		(1 << 14)
/** ADC_IER_EOC13 End of Conversion Interrupt Enable 13 **/
#define ADC_IER_EOC13		(1 << 13)
/** ADC_IER_EOC12 End of Conversion Interrupt Enable 12 **/
#define ADC_IER_EOC12		(1 << 12)
/** ADC_IER_EOC11 End of Conversion Interrupt Enable 11 **/
#define ADC_IER_EOC11		(1 << 11)
/** ADC_IER_EOC10 End of Conversion Interrupt Enable 10 **/
#define ADC_IER_EOC10		(1 << 10)
/** ADC_IER_EOC9 End of Conversion Interrupt Enable 9 **/
#define ADC_IER_EOC9		(1 << 9)
/** ADC_IER_EOC8 End of Conversion Interrupt Enable 8 **/
#define ADC_IER_EOC8		(1 << 8)
/** ADC_IER_EOC7 End of Conversion Interrupt Enable 7 **/
#define ADC_IER_EOC7		(1 << 7)
/** ADC_IER_EOC6 End of Conversion Interrupt Enable 6 **/
#define ADC_IER_EOC6		(1 << 6)
/** ADC_IER_EOC5 End of Conversion Interrupt Enable 5 **/
#define ADC_IER_EOC5		(1 << 5)
/** ADC_IER_EOC4 End of Conversion Interrupt Enable 4 **/
#define ADC_IER_EOC4		(1 << 4)
/** ADC_IER_EOC3 End of Conversion Interrupt Enable 3 **/
#define ADC_IER_EOC3		(1 << 3)
/** ADC_IER_EOC2 End of Conversion Interrupt Enable 2 **/
#define ADC_IER_EOC2		(1 << 2)
/** ADC_IER_EOC1 End of Conversion Interrupt Enable 1 **/
#define ADC_IER_EOC1		(1 << 1)
/** ADC_IER_EOC0 End of Conversion Interrupt Enable 0 **/
#define ADC_IER_EOC0		(1 << 0)

/**@}*/

/** @defgroup adc_idr IDR Interrupt Disable Register
@{*/

/** ADC_IDR_RXBUFF Receive Buffer Full Interrupt Disable **/
#define ADC_IDR_RXBUFF		(1 << 28)
/** ADC_IDR_ENDRX End of Receive Buffer Interrupt Disable **/
#define ADC_IDR_ENDRX		(1 << 27)
/** ADC_IDR_COMPE Comparison Event Interrupt Disable **/
#define ADC_IDR_COMPE		(1 << 26)
/** ADC_IDR_GOVRE General Overrun Error Interrupt Disable **/
#define ADC_IDR_GOVRE		(1 << 25)
/** ADC_IDR_DRDY Data Ready Interrupt Disable **/
#define ADC_IDR_DRDY		(1 << 24)
/** ADC_IDR_EOC15 End of Conversion Interrupt Disable 15 **/
#define ADC_IDR_EOC15		(1 << 15)
/** ADC_IDR_EOC14 End of Conversion Interrupt Disable 14 **/
#define ADC_IDR_EOC14		(1 << 14)
/** ADC_IDR_EOC13 End of Conversion Interrupt Disable 13 **/
#define ADC_IDR_EOC13		(1 << 13)
/** ADC_IDR_EOC12 End of Conversion Interrupt Disable 12 **/
#define ADC_IDR_EOC12		(1 << 12)
/** ADC_IDR_EOC11 End of Conversion Interrupt Disable 11 **/
#define ADC_IDR_EOC11		(1 << 11)
/** ADC_IDR_EOC10 End of Conversion Interrupt Disable 10 **/
#define ADC_IDR_EOC10		(1 << 10)
/** ADC_IDR_EOC9 End of Conversion Interrupt Disable 9 **/
#define ADC_IDR_EOC9		(1 << 9)
/** ADC_IDR_EOC8 End of Conversion Interrupt Disable 8 **/
#define ADC_IDR_EOC8		(1 << 8)
/** ADC_IDR_EOC7 End of Conversion Interrupt Disable 7 **/
#define ADC_IDR_EOC7		(1 << 7)
/** ADC_IDR_EOC6 End of Conversion Interrupt Disable 6 **/
#define ADC_IDR_EOC6		(1 << 6)
/** ADC_IDR_EOC5 End of Conversion Interrupt Disable 5 **/
#define ADC_IDR_EOC5		(1 << 5)
/** ADC_IDR_EOC4 End of Conversion Interrupt Disable 4 **/
#define ADC_IDR_EOC4		(1 << 4)
/** ADC_IDR_EOC3 End of Conversion Interrupt Disable 3 **/
#define ADC_IDR_EOC3		(1 << 3)
/** ADC_IDR_EOC2 End of Conversion Interrupt Disable 2 **/
#define ADC_IDR_EOC2		(1 << 2)
/** ADC_IDR_EOC1 End of Conversion Interrupt Disable 1 **/
#define ADC_IDR_EOC1		(1 << 1)
/** ADC_IDR_EOC0 End of Conversion Interrupt Disable 0 **/
#define ADC_IDR_EOC0		(1 << 0)

/**@}*/

/** @defgroup adc_imr IMR Interrupt Mask Register
@{*/

/** ADC_IMR_RXBUFF Receive Buffer Full Interrupt Mask **/
#define ADC_IMR_RXBUFF		(1 << 28)
/** ADC_IMR_ENDRX End of Receive Buffer Interrupt Mask **/
#define ADC_IMR_ENDRX		(1 << 27)
/** ADC_IMR_COMPE Comparison Event Interrupt Mask **/
#define ADC_IMR_COMPE		(1 << 26)
/** ADC_IMR_GOVRE General Overrun Error Interrupt Mask **/
#define ADC_IMR_GOVRE		(1 << 25)
/** ADC_IMR_DRDY Data Ready Interrupt Mask **/
#define ADC_IMR_DRDY		(1 << 24)
/** ADC_IMR_EOC15 End of Conversion Interrupt Mask 15 **/
#define ADC_IMR_EOC15		(1 << 15)
/** ADC_IMR_EOC14 End of Conversion Interrupt Mask 14 **/
#define ADC_IMR_EOC14		(1 << 14)
/** ADC_IMR_EOC13 End of Conversion Interrupt Mask 13 **/
#define ADC_IMR_EOC13		(1 << 13)
/** ADC_IMR_EOC12 End of Conversion Interrupt Mask 12 **/
#define ADC_IMR_EOC12		(1 << 12)
/** ADC_IMR_EOC11 End of Conversion Interrupt Mask 11 **/
#define ADC_IMR_EOC11		(1 << 11)
/** ADC_IMR_EOC10 End of Conversion Interrupt Mask 10 **/
#define ADC_IMR_EOC10		(1 << 10)
/** ADC_IMR_EOC9 End of Conversion Interrupt Mask 9 **/
#define ADC_IMR_EOC9		(1 << 9)
/** ADC_IMR_EOC8 End of Conversion Interrupt Mask 8 **/
#define ADC_IMR_EOC8		(1 << 8)
/** ADC_IMR_EOC7 End of Conversion Interrupt Mask 7 **/
#define ADC_IMR_EOC7		(1 << 7)
/** ADC_IMR_EOC6 End of Conversion Interrupt Mask 6 **/
#define ADC_IMR_EOC6		(1 << 6)
/** ADC_IMR_EOC5 End of Conversion Interrupt Mask 5 **/
#define ADC_IMR_EOC5		(1 << 5)
/** ADC_IMR_EOC4 End of Conversion Interrupt Mask 4 **/
#define ADC_IMR_EOC4		(1 << 4)
/** ADC_IMR_EOC3 End of Conversion Interrupt Mask 3 **/
#define ADC_IMR_EOC3		(1 << 3)
/** ADC_IMR_EOC2 End of Conversion Interrupt Mask 2 **/
#define ADC_IMR_EOC2		(1 << 2)
/** ADC_IMR_EOC1 End of Conversion Interrupt Mask 1 **/
#define ADC_IMR_EOC1		(1 << 1)
/** ADC_IMR_EOC0 End of Conversion Interrupt Mask 0 **/
#define ADC_IMR_EOC0		(1 << 0)

/**@}*/

/** @defgroup adc_isr ISR Interrupt Status Register
@{*/

/** ADC_ISR_RXBUFF RX Buffer Full **/
#define ADC_ISR_RXBUFF		(1 << 28)
/** ADC_ISR_ENDRX End of RX Buffer **/
#define ADC_ISR_ENDRX		(1 << 27)
/** ADC_ISR_COMPE Comparison Error **/
#define ADC_ISR_COMPE		(1 << 26)
/** ADC_ISR_GOVRE General Overrun Error **/
#define ADC_ISR_GOVRE		(1 << 25)
/** ADC_ISR_DRDY Data Ready **/
#define ADC_ISR_DRDY		(1 << 24)
/** ADC_ISR_EOC15 End of Conversion 15 **/
#define ADC_ISR_EOC15		(1 << 15)
/** ADC_ISR_EOC14 End of Conversion 14 **/
#define ADC_ISR_EOC14		(1 << 14)
/** ADC_ISR_EOC13 End of Conversion 13 **/
#define ADC_ISR_EOC13		(1 << 13)
/** ADC_ISR_EOC12 End of Conversion 12 **/
#define ADC_ISR_EOC12		(1 << 12)
/** ADC_ISR_EOC11 End of Conversion 11 **/
#define ADC_ISR_EOC11		(1 << 11)
/** ADC_ISR_EOC10 End of Conversion 10 **/
#define ADC_ISR_EOC10		(1 << 10)
/** ADC_ISR_EOC9 End of Conversion 9 **/
#define ADC_ISR_EOC9		(1 << 9)
/** ADC_ISR_EOC8 End of Conversion 8 **/
#define ADC_ISR_EOC8		(1 << 8)
/** ADC_ISR_EOC7 End of Conversion 7 **/
#define ADC_ISR_EOC7		(1 << 7)
/** ADC_ISR_EOC6 End of Conversion 6 **/
#define ADC_ISR_EOC6		(1 << 6)
/** ADC_ISR_EOC5 End of Conversion 5 **/
#define ADC_ISR_EOC5		(1 << 5)
/** ADC_ISR_EOC4 End of Conversion 4 **/
#define ADC_ISR_EOC4		(1 << 4)
/** ADC_ISR_EOC3 End of Conversion 3 **/
#define ADC_ISR_EOC3		(1 << 3)
/** ADC_ISR_EOC2 End of Conversion 2 **/
#define ADC_ISR_EOC2		(1 << 2)
/** ADC_ISR_EOC1 End of Conversion 1 **/
#define ADC_ISR_EOC1		(1 << 1)
/** ADC_ISR_EOC0 End of Conversion 0 **/
#define ADC_ISR_EOC0		(1 << 0)

/**@}*/

/** @defgroup adc_over OVER Overrun Status Register
@{*/

/** ADC_OVER_OVRE15 Overrun Error 15 **/
#define ADC_OVER_OVRE15		(1 << 15)
/** ADC_OVER_OVRE14 Overrun Error 14 **/
#define ADC_OVER_OVRE14		(1 << 14)
/** ADC_OVER_OVRE13 Overrun Error 13 **/
#define ADC_OVER_OVRE13		(1 << 13)
/** ADC_OVER_OVRE12 Overrun Error 12 **/
#define ADC_OVER_OVRE12		(1 << 12)
/** ADC_OVER_OVRE11 Overrun Error 11 **/
#define ADC_OVER_OVRE11		(1 << 11)
/** ADC_OVER_OVRE10 Overrun Error 10 **/
#define ADC_OVER_OVRE10		(1 << 10)
/** ADC_OVER_OVRE9 Overrun Error 9 **/
#define ADC_OVER_OVRE9		(1 << 9)
/** ADC_OVER_OVRE8 Overrun Error 8 **/
#define ADC_OVER_OVRE8		(1 << 8)
/** ADC_OVER_OVRE7 Overrun Error 7 **/
#define ADC_OVER_OVRE7		(1 << 7)
/** ADC_OVER_OVRE6 Overrun Error 6 **/
#define ADC_OVER_OVRE6		(1 << 6)
/** ADC_OVER_OVRE5 Overrun Error 5 **/
#define ADC_OVER_OVRE5		(1 << 5)
/** ADC_OVER_OVRE4 Overrun Error 4 **/
#define ADC_OVER_OVRE4		(1 << 4)
/** ADC_OVER_OVRE3 Overrun Error 3 **/
#define ADC_OVER_OVRE3		(1 << 3)
/** ADC_OVER_OVRE2 Overrun Error 2 **/
#define ADC_OVER_OVRE2		(1 << 2)
/** ADC_OVER_OVRE1 Overrun Error 1 **/
#define ADC_OVER_OVRE1		(1 << 1)
/** ADC_OVER_OVRE0 Overrun Error 0 **/
#define ADC_OVER_OVRE0		(1 << 0)

/**@}*/

/** @defgroup adc_emr EMR Extended Mode Register
@{*/

/** ADC_EMR_TAG TAG of the ADC_LDCR register **/
#define ADC_EMR_TAG		(1 << 24)

#define ADC_EMR_CMPFILTER_SHIFT		12
#define ADC_EMR_CMPFILTER_MASK		0x03
/** @defgroup adc_emr_cmpfilter CMPFILTER Compare Event Filtering
@{*/
/**@}*/

/** ADC_EMR_CMPALL Compare All Channels **/
#define ADC_EMR_CMPALL		(1 << 9)

#define ADC_EMR_CMPSEL_SHIFT		4
#define ADC_EMR_CMPSEL_MASK		0x0f
/** @defgroup adc_emr_cmpsel CMPSEL Comparison Selected Channel
@{*/
/**@}*/


#define ADC_EMR_CMPMODE_SHIFT		0
#define ADC_EMR_CMPMODE_MASK		0x03
/** @defgroup adc_emr_cmpmode CMPMODE Comparison Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cwr CWR Compare Window Register
@{*/


#define ADC_CWR_HIGHTHRES_SHIFT		16
#define ADC_CWR_HIGHTHRES_MASK		0xfff
/** @defgroup adc_cwr_highthres HIGHTHRES High Threshold
@{*/
/**@}*/


#define ADC_CWR_LOWTHRES_SHIFT		0
#define ADC_CWR_LOWTHRES_MASK		0xfff
/** @defgroup adc_cwr_lowthres LOWTHRES Low Threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cgr CGR Channel Gain Register
@{*/


#define ADC_CGR_GAIN15_SHIFT		30
#define ADC_CGR_GAIN15_MASK		0x03
/** @defgroup adc_cgr_gain15 GAIN15 Gain for Channel 15
@{*/
/**@}*/


#define ADC_CGR_GAIN14_SHIFT		28
#define ADC_CGR_GAIN14_MASK		0x03
/** @defgroup adc_cgr_gain14 GAIN14 Gain for Channel 14
@{*/
/**@}*/


#define ADC_CGR_GAIN13_SHIFT		26
#define ADC_CGR_GAIN13_MASK		0x03
/** @defgroup adc_cgr_gain13 GAIN13 Gain for Channel 13
@{*/
/**@}*/


#define ADC_CGR_GAIN12_SHIFT		24
#define ADC_CGR_GAIN12_MASK		0x03
/** @defgroup adc_cgr_gain12 GAIN12 Gain for Channel 12
@{*/
/**@}*/


#define ADC_CGR_GAIN11_SHIFT		22
#define ADC_CGR_GAIN11_MASK		0x03
/** @defgroup adc_cgr_gain11 GAIN11 Gain for Channel 11
@{*/
/**@}*/


#define ADC_CGR_GAIN10_SHIFT		20
#define ADC_CGR_GAIN10_MASK		0x03
/** @defgroup adc_cgr_gain10 GAIN10 Gain for Channel 10
@{*/
/**@}*/


#define ADC_CGR_GAIN9_SHIFT		18
#define ADC_CGR_GAIN9_MASK		0x03
/** @defgroup adc_cgr_gain9 GAIN9 Gain for Channel 9
@{*/
/**@}*/


#define ADC_CGR_GAIN8_SHIFT		16
#define ADC_CGR_GAIN8_MASK		0x03
/** @defgroup adc_cgr_gain8 GAIN8 Gain for Channel 8
@{*/
/**@}*/


#define ADC_CGR_GAIN7_SHIFT		14
#define ADC_CGR_GAIN7_MASK		0x03
/** @defgroup adc_cgr_gain7 GAIN7 Gain for Channel 7
@{*/
/**@}*/


#define ADC_CGR_GAIN6_SHIFT		12
#define ADC_CGR_GAIN6_MASK		0x03
/** @defgroup adc_cgr_gain6 GAIN6 Gain for Channel 6
@{*/
/**@}*/


#define ADC_CGR_GAIN5_SHIFT		10
#define ADC_CGR_GAIN5_MASK		0x03
/** @defgroup adc_cgr_gain5 GAIN5 Gain for Channel 5
@{*/
/**@}*/


#define ADC_CGR_GAIN4_SHIFT		8
#define ADC_CGR_GAIN4_MASK		0x03
/** @defgroup adc_cgr_gain4 GAIN4 Gain for Channel 4
@{*/
/**@}*/


#define ADC_CGR_GAIN3_SHIFT		6
#define ADC_CGR_GAIN3_MASK		0x03
/** @defgroup adc_cgr_gain3 GAIN3 Gain for Channel 3
@{*/
/**@}*/


#define ADC_CGR_GAIN2_SHIFT		4
#define ADC_CGR_GAIN2_MASK		0x03
/** @defgroup adc_cgr_gain2 GAIN2 Gain for Channel 2
@{*/
/**@}*/


#define ADC_CGR_GAIN1_SHIFT		2
#define ADC_CGR_GAIN1_MASK		0x03
/** @defgroup adc_cgr_gain1 GAIN1 Gain for Channel 1
@{*/
/**@}*/


#define ADC_CGR_GAIN0_SHIFT		0
#define ADC_CGR_GAIN0_MASK		0x03
/** @defgroup adc_cgr_gain0 GAIN0 Gain for Channel 0
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cor COR Channel Offset Register
@{*/

/** ADC_COR_DIFF15 Differential inputs for channel 15 **/
#define ADC_COR_DIFF15		(1 << 31)
/** ADC_COR_DIFF14 Differential inputs for channel 14 **/
#define ADC_COR_DIFF14		(1 << 30)
/** ADC_COR_DIFF13 Differential inputs for channel 13 **/
#define ADC_COR_DIFF13		(1 << 29)
/** ADC_COR_DIFF12 Differential inputs for channel 12 **/
#define ADC_COR_DIFF12		(1 << 28)
/** ADC_COR_DIFF11 Differential inputs for channel 11 **/
#define ADC_COR_DIFF11		(1 << 27)
/** ADC_COR_DIFF10 Differential inputs for channel 10 **/
#define ADC_COR_DIFF10		(1 << 26)
/** ADC_COR_DIFF9 Differential inputs for channel 9 **/
#define ADC_COR_DIFF9		(1 << 25)
/** ADC_COR_DIFF8 Differential inputs for channel 8 **/
#define ADC_COR_DIFF8		(1 << 24)
/** ADC_COR_DIFF7 Differential inputs for channel 7 **/
#define ADC_COR_DIFF7		(1 << 23)
/** ADC_COR_DIFF6 Differential inputs for channel 6 **/
#define ADC_COR_DIFF6		(1 << 22)
/** ADC_COR_DIFF5 Differential inputs for channel 5 **/
#define ADC_COR_DIFF5		(1 << 21)
/** ADC_COR_DIFF4 Differential inputs for channel 4 **/
#define ADC_COR_DIFF4		(1 << 20)
/** ADC_COR_DIFF3 Differential inputs for channel 3 **/
#define ADC_COR_DIFF3		(1 << 19)
/** ADC_COR_DIFF2 Differential inputs for channel 2 **/
#define ADC_COR_DIFF2		(1 << 18)
/** ADC_COR_DIFF1 Differential inputs for channel 1 **/
#define ADC_COR_DIFF1		(1 << 17)
/** ADC_COR_DIFF0 Differential inputs for channel 0 **/
#define ADC_COR_DIFF0		(1 << 16)
/** ADC_COR_OFF15 Offset for channel 15 **/
#define ADC_COR_OFF15		(1 << 15)
/** ADC_COR_OFF14 Offset for channel 14 **/
#define ADC_COR_OFF14		(1 << 14)
/** ADC_COR_OFF13 Offset for channel 13 **/
#define ADC_COR_OFF13		(1 << 13)
/** ADC_COR_OFF12 Offset for channel 12 **/
#define ADC_COR_OFF12		(1 << 12)
/** ADC_COR_OFF11 Offset for channel 11 **/
#define ADC_COR_OFF11		(1 << 11)
/** ADC_COR_OFF10 Offset for channel 10 **/
#define ADC_COR_OFF10		(1 << 10)
/** ADC_COR_OFF9 Offset for channel 9 **/
#define ADC_COR_OFF9		(1 << 9)
/** ADC_COR_OFF8 Offset for channel 8 **/
#define ADC_COR_OFF8		(1 << 8)
/** ADC_COR_OFF7 Offset for channel 7 **/
#define ADC_COR_OFF7		(1 << 7)
/** ADC_COR_OFF6 Offset for channel 6 **/
#define ADC_COR_OFF6		(1 << 6)
/** ADC_COR_OFF5 Offset for channel 5 **/
#define ADC_COR_OFF5		(1 << 5)
/** ADC_COR_OFF4 Offset for channel 4 **/
#define ADC_COR_OFF4		(1 << 4)
/** ADC_COR_OFF3 Offset for channel 3 **/
#define ADC_COR_OFF3		(1 << 3)
/** ADC_COR_OFF2 Offset for channel 2 **/
#define ADC_COR_OFF2		(1 << 2)
/** ADC_COR_OFF1 Offset for channel 1 **/
#define ADC_COR_OFF1		(1 << 1)
/** ADC_COR_OFF0 Offset for channel 0 **/
#define ADC_COR_OFF0		(1 << 0)

/**@}*/

/** @defgroup adc_cdr[0] CDR[0] Channel Data Register
@{*/


#define ADC_CDR[0]_DATA_SHIFT		0
#define ADC_CDR[0]_DATA_MASK		0xfff
/** @defgroup adc_cdr[0]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[1] CDR[1] Channel Data Register
@{*/


#define ADC_CDR[1]_DATA_SHIFT		0
#define ADC_CDR[1]_DATA_MASK		0xfff
/** @defgroup adc_cdr[1]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[2] CDR[2] Channel Data Register
@{*/


#define ADC_CDR[2]_DATA_SHIFT		0
#define ADC_CDR[2]_DATA_MASK		0xfff
/** @defgroup adc_cdr[2]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[3] CDR[3] Channel Data Register
@{*/


#define ADC_CDR[3]_DATA_SHIFT		0
#define ADC_CDR[3]_DATA_MASK		0xfff
/** @defgroup adc_cdr[3]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[4] CDR[4] Channel Data Register
@{*/


#define ADC_CDR[4]_DATA_SHIFT		0
#define ADC_CDR[4]_DATA_MASK		0xfff
/** @defgroup adc_cdr[4]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[5] CDR[5] Channel Data Register
@{*/


#define ADC_CDR[5]_DATA_SHIFT		0
#define ADC_CDR[5]_DATA_MASK		0xfff
/** @defgroup adc_cdr[5]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[6] CDR[6] Channel Data Register
@{*/


#define ADC_CDR[6]_DATA_SHIFT		0
#define ADC_CDR[6]_DATA_MASK		0xfff
/** @defgroup adc_cdr[6]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[7] CDR[7] Channel Data Register
@{*/


#define ADC_CDR[7]_DATA_SHIFT		0
#define ADC_CDR[7]_DATA_MASK		0xfff
/** @defgroup adc_cdr[7]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[8] CDR[8] Channel Data Register
@{*/


#define ADC_CDR[8]_DATA_SHIFT		0
#define ADC_CDR[8]_DATA_MASK		0xfff
/** @defgroup adc_cdr[8]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[9] CDR[9] Channel Data Register
@{*/


#define ADC_CDR[9]_DATA_SHIFT		0
#define ADC_CDR[9]_DATA_MASK		0xfff
/** @defgroup adc_cdr[9]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[10] CDR[10] Channel Data Register
@{*/


#define ADC_CDR[10]_DATA_SHIFT		0
#define ADC_CDR[10]_DATA_MASK		0xfff
/** @defgroup adc_cdr[10]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[11] CDR[11] Channel Data Register
@{*/


#define ADC_CDR[11]_DATA_SHIFT		0
#define ADC_CDR[11]_DATA_MASK		0xfff
/** @defgroup adc_cdr[11]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[12] CDR[12] Channel Data Register
@{*/


#define ADC_CDR[12]_DATA_SHIFT		0
#define ADC_CDR[12]_DATA_MASK		0xfff
/** @defgroup adc_cdr[12]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[13] CDR[13] Channel Data Register
@{*/


#define ADC_CDR[13]_DATA_SHIFT		0
#define ADC_CDR[13]_DATA_MASK		0xfff
/** @defgroup adc_cdr[13]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[14] CDR[14] Channel Data Register
@{*/


#define ADC_CDR[14]_DATA_SHIFT		0
#define ADC_CDR[14]_DATA_MASK		0xfff
/** @defgroup adc_cdr[14]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_cdr[15] CDR[15] Channel Data Register
@{*/


#define ADC_CDR[15]_DATA_SHIFT		0
#define ADC_CDR[15]_DATA_MASK		0xfff
/** @defgroup adc_cdr[15]_data DATA Converted Data
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_acr ACR Analog Control Register
@{*/


#define ADC_ACR_IBCTL_SHIFT		8
#define ADC_ACR_IBCTL_MASK		0x03
/** @defgroup adc_acr_ibctl IBCTL ADC Bias Current Control
@{*/
/**@}*/

/** ADC_ACR_TSON Temperature Sensor On **/
#define ADC_ACR_TSON		(1 << 4)

/**@}*/

/** @defgroup adc_wpmr WPMR Write Protect Mode Register
@{*/


#define ADC_WPMR_WPKEY_SHIFT		8
#define ADC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup adc_wpmr_wpkey WPKEY Write Protect KEY
@{*/
/**@}*/

/** ADC_WPMR_WPEN Write Protect Enable **/
#define ADC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup adc_wpsr WPSR Write Protect Status Register
@{*/


#define ADC_WPSR_WPVSRC_SHIFT		8
#define ADC_WPSR_WPVSRC_MASK		0xffff
/** @defgroup adc_wpsr_wpvsrc WPVSRC Write Protect Violation Source
@{*/
/**@}*/

/** ADC_WPSR_WPVS Write Protect Violation Status **/
#define ADC_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup adc_rpr RPR Receive Pointer Register
@{*/


#define ADC_RPR_RXPTR_SHIFT		0
#define ADC_RPR_RXPTR_MASK		0xffffffff
/** @defgroup adc_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_rcr RCR Receive Counter Register
@{*/


#define ADC_RCR_RXCTR_SHIFT		0
#define ADC_RCR_RXCTR_MASK		0xffff
/** @defgroup adc_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_rnpr RNPR Receive Next Pointer Register
@{*/


#define ADC_RNPR_RXNPTR_SHIFT		0
#define ADC_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup adc_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_rncr RNCR Receive Next Counter Register
@{*/


#define ADC_RNCR_RXNCTR_SHIFT		0
#define ADC_RNCR_RXNCTR_MASK		0xffff
/** @defgroup adc_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup adc_ptcr PTCR Transfer Control Register
@{*/

/** ADC_PTCR_TXTDIS Transmitter Transfer Disable **/
#define ADC_PTCR_TXTDIS		(1 << 9)
/** ADC_PTCR_TXTEN Transmitter Transfer Enable **/
#define ADC_PTCR_TXTEN		(1 << 8)
/** ADC_PTCR_RXTDIS Receiver Transfer Disable **/
#define ADC_PTCR_RXTDIS		(1 << 1)
/** ADC_PTCR_RXTEN Receiver Transfer Enable **/
#define ADC_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup adc_ptsr PTSR Transfer Status Register
@{*/

/** ADC_PTSR_TXTEN Transmitter Transfer Enable **/
#define ADC_PTSR_TXTEN		(1 << 8)
/** ADC_PTSR_RXTEN Receiver Transfer Enable **/
#define ADC_PTSR_RXTEN		(1 << 0)

/**@}*/

#pragma once 

/* --- DACC: Digital-to-Analog Converter Controller ----------------- */

/** @defgroup dacc_registers Digital-to-Analog Converter Controller Register
@{*/

/** DACC_DACC_CR Control Register **/
#define DACC_DACC_CR			MMIO32(DACC_BASE + 0x00)
/** DACC_DACC_MR Mode Register **/
#define DACC_DACC_MR			MMIO32(DACC_BASE + 0x04)
/** DACC_DACC_TRIGR Trigger Register **/
#define DACC_DACC_TRIGR			MMIO32(DACC_BASE + 0x08)
/** DACC_DACC_CHER Channel Enable Register **/
#define DACC_DACC_CHER			MMIO32(DACC_BASE + 0x10)
/** DACC_DACC_CHDR Channel Disable Register **/
#define DACC_DACC_CHDR			MMIO32(DACC_BASE + 0x14)
/** DACC_DACC_CHSR Channel Status Register **/
#define DACC_DACC_CHSR			MMIO32(DACC_BASE + 0x18)
/** DACC_DACC_CDR[0] Conversion Data Register 0 **/
#define DACC_DACC_CDR[0]			MMIO32(DACC_BASE + 0x1c)
/** DACC_DACC_CDR[1] Conversion Data Register 0 **/
#define DACC_DACC_CDR[1]			MMIO32(DACC_BASE + 0x20)
/** DACC_DACC_IER Interrupt Enable Register **/
#define DACC_DACC_IER			MMIO32(DACC_BASE + 0x24)
/** DACC_DACC_IDR Interrupt Disable Register **/
#define DACC_DACC_IDR			MMIO32(DACC_BASE + 0x28)
/** DACC_DACC_IMR Interrupt Mask Register **/
#define DACC_DACC_IMR			MMIO32(DACC_BASE + 0x2c)
/** DACC_DACC_ISR Interrupt Status Register **/
#define DACC_DACC_ISR			MMIO32(DACC_BASE + 0x30)
/** DACC_DACC_ACR Analog Current Register **/
#define DACC_DACC_ACR			MMIO32(DACC_BASE + 0x94)
/** DACC_DACC_WPMR Write Protection Mode Register **/
#define DACC_DACC_WPMR			MMIO32(DACC_BASE + 0xe4)
/** DACC_DACC_WPSR Write Protection Status Register **/
#define DACC_DACC_WPSR			MMIO32(DACC_BASE + 0xe8)

/**@}*/


/** @defgroup dacc_dacc_cr DACCCR Control Register
@{*/

/** DACC_DACC_CR_SWRST Software Reset **/
#define DACC_DACC_CR_SWRST		(1 << 0)

/**@}*/

/** @defgroup dacc_dacc_mr DACCMR Mode Register
@{*/


#define DACC_DACC_MR_PRESCALER_SHIFT		24
#define DACC_DACC_MR_PRESCALER_MASK		0x0f
/** @defgroup dacc_dacc_mr_prescaler PRESCALER Peripheral Clock to DAC Clock Ratio
@{*/
/**@}*/

/** DACC_DACC_MR_DIFF Differential Mode **/
#define DACC_DACC_MR_DIFF		(1 << 23)
/** DACC_DACC_MR_ZERO Must always be written to 0. **/
#define DACC_DACC_MR_ZERO		(1 << 5)
/** DACC_DACC_MR_WORD Word Transfer Mode **/
#define DACC_DACC_MR_WORD		(1 << 4)
/** DACC_DACC_MR_MAXS1 Max Speed Mode for Channel 1 **/
#define DACC_DACC_MR_MAXS1		(1 << 1)
/** DACC_DACC_MR_MAXS0 Max Speed Mode for Channel 0 **/
#define DACC_DACC_MR_MAXS0		(1 << 0)

/**@}*/

/** @defgroup dacc_dacc_trigr DACCTRIGR Trigger Register
@{*/


#define DACC_DACC_TRIGR_OSR1_SHIFT		20
#define DACC_DACC_TRIGR_OSR1_MASK		0x07
/** @defgroup dacc_dacc_trigr_osr1 OSR1 Over Sampling Ratio of Channel 1
@{*/
/**@}*/


#define DACC_DACC_TRIGR_OSR0_SHIFT		16
#define DACC_DACC_TRIGR_OSR0_MASK		0x07
/** @defgroup dacc_dacc_trigr_osr0 OSR0 Over Sampling Ratio of Channel 0
@{*/
/**@}*/


#define DACC_DACC_TRIGR_TRGSEL1_SHIFT		8
#define DACC_DACC_TRIGR_TRGSEL1_MASK		0x07
/** @defgroup dacc_dacc_trigr_trgsel1 TRGSEL1 Trigger Selection of Channel 1
@{*/
/**@}*/


#define DACC_DACC_TRIGR_TRGSEL0_SHIFT		4
#define DACC_DACC_TRIGR_TRGSEL0_MASK		0x07
/** @defgroup dacc_dacc_trigr_trgsel0 TRGSEL0 Trigger Selection of Channel 0
@{*/
/**@}*/

/** DACC_DACC_TRIGR_TRGEN1 Trigger Enable of Channel 1 **/
#define DACC_DACC_TRIGR_TRGEN1		(1 << 1)
/** DACC_DACC_TRIGR_TRGEN0 Trigger Enable of Channel 0 **/
#define DACC_DACC_TRIGR_TRGEN0		(1 << 0)

/**@}*/

/** @defgroup dacc_dacc_cher DACCCHER Channel Enable Register
@{*/

/** DACC_DACC_CHER_CH1 Channel 1 Enable **/
#define DACC_DACC_CHER_CH1		(1 << 1)
/** DACC_DACC_CHER_CH0 Channel 0 Enable **/
#define DACC_DACC_CHER_CH0		(1 << 0)

/**@}*/

/** @defgroup dacc_dacc_chdr DACCCHDR Channel Disable Register
@{*/

/** DACC_DACC_CHDR_CH1 Channel 1 Disable **/
#define DACC_DACC_CHDR_CH1		(1 << 1)
/** DACC_DACC_CHDR_CH0 Channel 0 Disable **/
#define DACC_DACC_CHDR_CH0		(1 << 0)

/**@}*/

/** @defgroup dacc_dacc_chsr DACCCHSR Channel Status Register
@{*/

/** DACC_DACC_CHSR_DACRDY1 DAC Ready Flag **/
#define DACC_DACC_CHSR_DACRDY1		(1 << 9)
/** DACC_DACC_CHSR_DACRDY0 DAC Ready Flag **/
#define DACC_DACC_CHSR_DACRDY0		(1 << 8)
/** DACC_DACC_CHSR_CH1 Channel 1 Status **/
#define DACC_DACC_CHSR_CH1		(1 << 1)
/** DACC_DACC_CHSR_CH0 Channel 0 Status **/
#define DACC_DACC_CHSR_CH0		(1 << 0)

/**@}*/

/** @defgroup dacc_dacc_cdr[0] DACCCDR[0] Conversion Data Register 0
@{*/


#define DACC_DACC_CDR[0]_DATA1_SHIFT		16
#define DACC_DACC_CDR[0]_DATA1_MASK		0xffff
/** @defgroup dacc_dacc_cdr[0]_data1 DATA1 Data to Convert for channel 1
@{*/
/**@}*/


#define DACC_DACC_CDR[0]_DATA0_SHIFT		0
#define DACC_DACC_CDR[0]_DATA0_MASK		0xffff
/** @defgroup dacc_dacc_cdr[0]_data0 DATA0 Data to Convert for channel 0
@{*/
/**@}*/


/**@}*/

/** @defgroup dacc_dacc_cdr[1] DACCCDR[1] Conversion Data Register 0
@{*/


#define DACC_DACC_CDR[1]_DATA1_SHIFT		16
#define DACC_DACC_CDR[1]_DATA1_MASK		0xffff
/** @defgroup dacc_dacc_cdr[1]_data1 DATA1 Data to Convert for channel 1
@{*/
/**@}*/


#define DACC_DACC_CDR[1]_DATA0_SHIFT		0
#define DACC_DACC_CDR[1]_DATA0_MASK		0xffff
/** @defgroup dacc_dacc_cdr[1]_data0 DATA0 Data to Convert for channel 0
@{*/
/**@}*/


/**@}*/

/** @defgroup dacc_dacc_ier DACCIER Interrupt Enable Register
@{*/

/** DACC_DACC_IER_EOC1 End of Conversion Interrupt Enable of channel 1 **/
#define DACC_DACC_IER_EOC1		(1 << 5)
/** DACC_DACC_IER_EOC0 End of Conversion Interrupt Enable of channel 0 **/
#define DACC_DACC_IER_EOC0		(1 << 4)
/** DACC_DACC_IER_TXRDY1 Transmit Ready Interrupt Enable of channel 1 **/
#define DACC_DACC_IER_TXRDY1		(1 << 1)
/** DACC_DACC_IER_TXRDY0 Transmit Ready Interrupt Enable of channel 0 **/
#define DACC_DACC_IER_TXRDY0		(1 << 0)

/**@}*/

/** @defgroup dacc_dacc_idr DACCIDR Interrupt Disable Register
@{*/

/** DACC_DACC_IDR_EOC1 End of Conversion Interrupt Disable of channel 1 **/
#define DACC_DACC_IDR_EOC1		(1 << 5)
/** DACC_DACC_IDR_EOC0 End of Conversion Interrupt Disable of channel 0 **/
#define DACC_DACC_IDR_EOC0		(1 << 4)
/** DACC_DACC_IDR_TXRDY1 Transmit Ready Interrupt Disable of channel 1 **/
#define DACC_DACC_IDR_TXRDY1		(1 << 1)
/** DACC_DACC_IDR_TXRDY0 Transmit Ready Interrupt Disable of channel 0 **/
#define DACC_DACC_IDR_TXRDY0		(1 << 0)

/**@}*/

/** @defgroup dacc_dacc_imr DACCIMR Interrupt Mask Register
@{*/

/** DACC_DACC_IMR_EOC1 End of Conversion Interrupt Mask of channel 1 **/
#define DACC_DACC_IMR_EOC1		(1 << 5)
/** DACC_DACC_IMR_EOC0 End of Conversion Interrupt Mask of channel 0 **/
#define DACC_DACC_IMR_EOC0		(1 << 4)
/** DACC_DACC_IMR_TXRDY1 Transmit Ready Interrupt Mask of channel 1 **/
#define DACC_DACC_IMR_TXRDY1		(1 << 1)
/** DACC_DACC_IMR_TXRDY0 Transmit Ready Interrupt Mask of channel 0 **/
#define DACC_DACC_IMR_TXRDY0		(1 << 0)

/**@}*/

/** @defgroup dacc_dacc_isr DACCISR Interrupt Status Register
@{*/

/** DACC_DACC_ISR_EOC1 End of Conversion Interrupt Flag of channel 1 **/
#define DACC_DACC_ISR_EOC1		(1 << 5)
/** DACC_DACC_ISR_EOC0 End of Conversion Interrupt Flag of channel 0 **/
#define DACC_DACC_ISR_EOC0		(1 << 4)
/** DACC_DACC_ISR_TXRDY1 Transmit Ready Interrupt Flag of channel 1 **/
#define DACC_DACC_ISR_TXRDY1		(1 << 1)
/** DACC_DACC_ISR_TXRDY0 Transmit Ready Interrupt Flag of channel 0 **/
#define DACC_DACC_ISR_TXRDY0		(1 << 0)

/**@}*/

/** @defgroup dacc_dacc_acr DACCACR Analog Current Register
@{*/


#define DACC_DACC_ACR_IBCTLCH1_SHIFT		2
#define DACC_DACC_ACR_IBCTLCH1_MASK		0x03
/** @defgroup dacc_dacc_acr_ibctlch1 IBCTLCH1 Analog Output Current Control
@{*/
/**@}*/


#define DACC_DACC_ACR_IBCTLCH0_SHIFT		0
#define DACC_DACC_ACR_IBCTLCH0_MASK		0x03
/** @defgroup dacc_dacc_acr_ibctlch0 IBCTLCH0 Analog Output Current Control
@{*/
/**@}*/


/**@}*/

/** @defgroup dacc_dacc_wpmr DACCWPMR Write Protection Mode Register
@{*/


#define DACC_DACC_WPMR_WPKEY_SHIFT		8
#define DACC_DACC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup dacc_dacc_wpmr_wpkey WPKEY Write Protect Key
@{*/
/**@}*/

/** DACC_DACC_WPMR_WPEN Write Protection Enable **/
#define DACC_DACC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup dacc_dacc_wpsr DACCWPSR Write Protection Status Register
@{*/


#define DACC_DACC_WPSR_WPVSRC_SHIFT		8
#define DACC_DACC_WPSR_WPVSRC_MASK		0xff
/** @defgroup dacc_dacc_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** DACC_DACC_WPSR_WPVS Write Protection Violation Status **/
#define DACC_DACC_WPSR_WPVS		(1 << 0)

/**@}*/

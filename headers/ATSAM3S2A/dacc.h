#pragma once 

/* --- DACC: Digital-to-Analog Converter Controller ----------------- */

/** @defgroup dacc_registers Digital-to-Analog Converter Controller Register
@{*/

/** DACC_CR Control Register **/
#define DACC_CR			MMIO32(DACC_BASE + 0x00)
/** DACC_MR Mode Register **/
#define DACC_MR			MMIO32(DACC_BASE + 0x04)
/** DACC_CHER Channel Enable Register **/
#define DACC_CHER			MMIO32(DACC_BASE + 0x10)
/** DACC_CHDR Channel Disable Register **/
#define DACC_CHDR			MMIO32(DACC_BASE + 0x14)
/** DACC_CHSR Channel Status Register **/
#define DACC_CHSR			MMIO32(DACC_BASE + 0x18)
/** DACC_CDR Conversion Data Register **/
#define DACC_CDR			MMIO32(DACC_BASE + 0x20)
/** DACC_IER Interrupt Enable Register **/
#define DACC_IER			MMIO32(DACC_BASE + 0x24)
/** DACC_IDR Interrupt Disable Register **/
#define DACC_IDR			MMIO32(DACC_BASE + 0x28)
/** DACC_IMR Interrupt Mask Register **/
#define DACC_IMR			MMIO32(DACC_BASE + 0x2c)
/** DACC_ISR Interrupt Status Register **/
#define DACC_ISR			MMIO32(DACC_BASE + 0x30)
/** DACC_ACR Analog Current Register **/
#define DACC_ACR			MMIO32(DACC_BASE + 0x94)
/** DACC_WPMR Write Protect Mode register **/
#define DACC_WPMR			MMIO32(DACC_BASE + 0xe4)
/** DACC_WPSR Write Protect Status register **/
#define DACC_WPSR			MMIO32(DACC_BASE + 0xe8)
/** DACC_TPR Transmit Pointer Register **/
#define DACC_TPR			MMIO32(DACC_BASE + 0x108)
/** DACC_TCR Transmit Counter Register **/
#define DACC_TCR			MMIO32(DACC_BASE + 0x10c)
/** DACC_TNPR Transmit Next Pointer Register **/
#define DACC_TNPR			MMIO32(DACC_BASE + 0x118)
/** DACC_TNCR Transmit Next Counter Register **/
#define DACC_TNCR			MMIO32(DACC_BASE + 0x11c)
/** DACC_PTCR Transfer Control Register **/
#define DACC_PTCR			MMIO32(DACC_BASE + 0x120)
/** DACC_PTSR Transfer Status Register **/
#define DACC_PTSR			MMIO32(DACC_BASE + 0x124)

/**@}*/


/** @defgroup dacc_cr CR Control Register
@{*/

/** DACC_CR_SWRST Software Reset **/
#define DACC_CR_SWRST		(1 << 0)

/**@}*/

/** @defgroup dacc_mr MR Mode Register
@{*/


#define DACC_MR_STARTUP_SHIFT		24
#define DACC_MR_STARTUP_MASK		0x3f
/** @defgroup dacc_mr_startup STARTUP Startup Time Selection
@{*/
/**@}*/

/** DACC_MR_MAXS Max Speed Mode **/
#define DACC_MR_MAXS		(1 << 21)
/** DACC_MR_TAG Tag Selection Mode **/
#define DACC_MR_TAG		(1 << 20)

#define DACC_MR_USER_SEL_SHIFT		16
#define DACC_MR_USER_SEL_MASK		0x03
/** @defgroup dacc_mr_user_sel USERSEL User Channel Selection
@{*/
/**@}*/


#define DACC_MR_REFRESH_SHIFT		8
#define DACC_MR_REFRESH_MASK		0xff
/** @defgroup dacc_mr_refresh REFRESH Refresh Period
@{*/
/**@}*/

/** DACC_MR_FASTWKUP Fast Wake up Mode **/
#define DACC_MR_FASTWKUP		(1 << 6)
/** DACC_MR_SLEEP Sleep Mode **/
#define DACC_MR_SLEEP		(1 << 5)
/** DACC_MR_WORD Word Transfer **/
#define DACC_MR_WORD		(1 << 4)

#define DACC_MR_TRGSEL_SHIFT		1
#define DACC_MR_TRGSEL_MASK		0x07
/** @defgroup dacc_mr_trgsel TRGSEL Trigger Selection
@{*/
/**@}*/

/** DACC_MR_TRGEN Trigger Enable **/
#define DACC_MR_TRGEN		(1 << 0)

/**@}*/

/** @defgroup dacc_cher CHER Channel Enable Register
@{*/

/** DACC_CHER_CH1 Channel 1 Enable **/
#define DACC_CHER_CH1		(1 << 1)
/** DACC_CHER_CH0 Channel 0 Enable **/
#define DACC_CHER_CH0		(1 << 0)

/**@}*/

/** @defgroup dacc_chdr CHDR Channel Disable Register
@{*/

/** DACC_CHDR_CH1 Channel 1 Disable **/
#define DACC_CHDR_CH1		(1 << 1)
/** DACC_CHDR_CH0 Channel 0 Disable **/
#define DACC_CHDR_CH0		(1 << 0)

/**@}*/

/** @defgroup dacc_chsr CHSR Channel Status Register
@{*/

/** DACC_CHSR_CH1 Channel 1 Status **/
#define DACC_CHSR_CH1		(1 << 1)
/** DACC_CHSR_CH0 Channel 0 Status **/
#define DACC_CHSR_CH0		(1 << 0)

/**@}*/

/** @defgroup dacc_cdr CDR Conversion Data Register
@{*/


#define DACC_CDR_DATA_SHIFT		0
#define DACC_CDR_DATA_MASK		0xffffffff
/** @defgroup dacc_cdr_data DATA Data to Convert
@{*/
/**@}*/


/**@}*/

/** @defgroup dacc_ier IER Interrupt Enable Register
@{*/

/** DACC_IER_TXBUFE Transmit Buffer Empty Interrupt Enable **/
#define DACC_IER_TXBUFE		(1 << 3)
/** DACC_IER_ENDTX End of Transmit Buffer Interrupt Enable **/
#define DACC_IER_ENDTX		(1 << 2)
/** DACC_IER_EOC End of Conversion Interrupt Enable **/
#define DACC_IER_EOC		(1 << 1)
/** DACC_IER_TXRDY Transmit Ready Interrupt Enable **/
#define DACC_IER_TXRDY		(1 << 0)

/**@}*/

/** @defgroup dacc_idr IDR Interrupt Disable Register
@{*/

/** DACC_IDR_TXBUFE Transmit Buffer Empty Interrupt Disable **/
#define DACC_IDR_TXBUFE		(1 << 3)
/** DACC_IDR_ENDTX End of Transmit Buffer Interrupt Disable **/
#define DACC_IDR_ENDTX		(1 << 2)
/** DACC_IDR_EOC End of Conversion Interrupt Disable **/
#define DACC_IDR_EOC		(1 << 1)
/** DACC_IDR_TXRDY Transmit Ready Interrupt Disable. **/
#define DACC_IDR_TXRDY		(1 << 0)

/**@}*/

/** @defgroup dacc_imr IMR Interrupt Mask Register
@{*/

/** DACC_IMR_TXBUFE Transmit Buffer Empty Interrupt Mask **/
#define DACC_IMR_TXBUFE		(1 << 3)
/** DACC_IMR_ENDTX End of Transmit Buffer Interrupt Mask **/
#define DACC_IMR_ENDTX		(1 << 2)
/** DACC_IMR_EOC End of Conversion Interrupt Mask **/
#define DACC_IMR_EOC		(1 << 1)
/** DACC_IMR_TXRDY Transmit Ready Interrupt Mask **/
#define DACC_IMR_TXRDY		(1 << 0)

/**@}*/

/** @defgroup dacc_isr ISR Interrupt Status Register
@{*/

/** DACC_ISR_TXBUFE Transmit Buffer Empty **/
#define DACC_ISR_TXBUFE		(1 << 3)
/** DACC_ISR_ENDTX End of DMA Interrupt Flag **/
#define DACC_ISR_ENDTX		(1 << 2)
/** DACC_ISR_EOC End of Conversion Interrupt Flag **/
#define DACC_ISR_EOC		(1 << 1)
/** DACC_ISR_TXRDY Transmit Ready Interrupt Flag **/
#define DACC_ISR_TXRDY		(1 << 0)

/**@}*/

/** @defgroup dacc_acr ACR Analog Current Register
@{*/


#define DACC_ACR_IBCTLDACCORE_SHIFT		8
#define DACC_ACR_IBCTLDACCORE_MASK		0x03
/** @defgroup dacc_acr_ibctldaccore IBCTLDACCORE Bias Current Control for DAC Core
@{*/
/**@}*/


#define DACC_ACR_IBCTLCH1_SHIFT		2
#define DACC_ACR_IBCTLCH1_MASK		0x03
/** @defgroup dacc_acr_ibctlch1 IBCTLCH1 Analog Output Current Control
@{*/
/**@}*/


#define DACC_ACR_IBCTLCH0_SHIFT		0
#define DACC_ACR_IBCTLCH0_MASK		0x03
/** @defgroup dacc_acr_ibctlch0 IBCTLCH0 Analog Output Current Control
@{*/
/**@}*/


/**@}*/

/** @defgroup dacc_wpmr WPMR Write Protect Mode register
@{*/


#define DACC_WPMR_WPKEY_SHIFT		8
#define DACC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup dacc_wpmr_wpkey WPKEY Write Protect KEY
@{*/
/**@}*/

/** DACC_WPMR_WPEN Write Protect Enable **/
#define DACC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup dacc_wpsr WPSR Write Protect Status register
@{*/


#define DACC_WPSR_WPROTADDR_SHIFT		8
#define DACC_WPSR_WPROTADDR_MASK		0xff
/** @defgroup dacc_wpsr_wprotaddr WPROTADDR Write protection error address
@{*/
/**@}*/

/** DACC_WPSR_WPROTERR Write protection error **/
#define DACC_WPSR_WPROTERR		(1 << 0)

/**@}*/

/** @defgroup dacc_tpr TPR Transmit Pointer Register
@{*/


#define DACC_TPR_TXPTR_SHIFT		0
#define DACC_TPR_TXPTR_MASK		0xffffffff
/** @defgroup dacc_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup dacc_tcr TCR Transmit Counter Register
@{*/


#define DACC_TCR_TXCTR_SHIFT		0
#define DACC_TCR_TXCTR_MASK		0xffff
/** @defgroup dacc_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup dacc_tnpr TNPR Transmit Next Pointer Register
@{*/


#define DACC_TNPR_TXNPTR_SHIFT		0
#define DACC_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup dacc_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup dacc_tncr TNCR Transmit Next Counter Register
@{*/


#define DACC_TNCR_TXNCTR_SHIFT		0
#define DACC_TNCR_TXNCTR_MASK		0xffff
/** @defgroup dacc_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup dacc_ptcr PTCR Transfer Control Register
@{*/

/** DACC_PTCR_TXTDIS Transmitter Transfer Disable **/
#define DACC_PTCR_TXTDIS		(1 << 9)
/** DACC_PTCR_TXTEN Transmitter Transfer Enable **/
#define DACC_PTCR_TXTEN		(1 << 8)
/** DACC_PTCR_RXTDIS Receiver Transfer Disable **/
#define DACC_PTCR_RXTDIS		(1 << 1)
/** DACC_PTCR_RXTEN Receiver Transfer Enable **/
#define DACC_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup dacc_ptsr PTSR Transfer Status Register
@{*/

/** DACC_PTSR_TXTEN Transmitter Transfer Enable **/
#define DACC_PTSR_TXTEN		(1 << 8)
/** DACC_PTSR_RXTEN Receiver Transfer Enable **/
#define DACC_PTSR_RXTEN		(1 << 0)

/**@}*/

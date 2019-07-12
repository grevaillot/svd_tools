#pragma once 

/* --- USART7: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup usart7_registers Universal synchronous asynchronous receiver
      transmitter Register
@{*/

/** USART7_CR1 Control register 1 **/
#define USART7_CR1			MMIO32(USART7_BASE + 0x00)
/** USART7_CR2 Control register 2 **/
#define USART7_CR2			MMIO32(USART7_BASE + 0x04)
/** USART7_CR3 Control register 3 **/
#define USART7_CR3			MMIO32(USART7_BASE + 0x08)
/** USART7_BRR Baud rate register **/
#define USART7_BRR			MMIO32(USART7_BASE + 0x0c)
/** USART7_GTPR Guard time and prescaler register **/
#define USART7_GTPR			MMIO32(USART7_BASE + 0x10)
/** USART7_RTOR Receiver timeout register **/
#define USART7_RTOR			MMIO32(USART7_BASE + 0x14)
/** USART7_RQR Request register **/
#define USART7_RQR			MMIO32(USART7_BASE + 0x18)
/** USART7_ISR Interrupt & status register **/
#define USART7_ISR			MMIO32(USART7_BASE + 0x1c)
/** USART7_ICR Interrupt flag clear register **/
#define USART7_ICR			MMIO32(USART7_BASE + 0x20)
/** USART7_RDR Receive data register **/
#define USART7_RDR			MMIO32(USART7_BASE + 0x24)
/** USART7_TDR Transmit data register **/
#define USART7_TDR			MMIO32(USART7_BASE + 0x28)

/**@}*/


/** @defgroup usart7_cr1 CR1 Control register 1
@{*/

/** USART7_CR1_M1 Word length **/
#define USART7_CR1_M1		(1 << 28)
/** USART7_CR1_EOBIE End of Block interrupt enable **/
#define USART7_CR1_EOBIE		(1 << 27)
/** USART7_CR1_RTOIE Receiver timeout interrupt enable **/
#define USART7_CR1_RTOIE		(1 << 26)

#define USART7_CR1_DEAT_SHIFT		21
#define USART7_CR1_DEAT_MASK		0x1f
/** @defgroup usart7_cr1_deat DEAT Driver Enable assertion time
@{*/
/**@}*/


#define USART7_CR1_DEDT_SHIFT		16
#define USART7_CR1_DEDT_MASK		0x1f
/** @defgroup usart7_cr1_dedt DEDT Driver Enable deassertion time
@{*/
/**@}*/

/** USART7_CR1_OVER8 Oversampling mode **/
#define USART7_CR1_OVER8		(1 << 15)
/** USART7_CR1_CMIE Character match interrupt enable **/
#define USART7_CR1_CMIE		(1 << 14)
/** USART7_CR1_MME Mute mode enable **/
#define USART7_CR1_MME		(1 << 13)
/** USART7_CR1_M Word length **/
#define USART7_CR1_M		(1 << 12)
/** USART7_CR1_WAKE Receiver wakeup method **/
#define USART7_CR1_WAKE		(1 << 11)
/** USART7_CR1_PCE Parity control enable **/
#define USART7_CR1_PCE		(1 << 10)
/** USART7_CR1_PS Parity selection **/
#define USART7_CR1_PS		(1 << 9)
/** USART7_CR1_PEIE PE interrupt enable **/
#define USART7_CR1_PEIE		(1 << 8)
/** USART7_CR1_TXEIE interrupt enable **/
#define USART7_CR1_TXEIE		(1 << 7)
/** USART7_CR1_TCIE Transmission complete interrupt enable **/
#define USART7_CR1_TCIE		(1 << 6)
/** USART7_CR1_RXNEIE RXNE interrupt enable **/
#define USART7_CR1_RXNEIE		(1 << 5)
/** USART7_CR1_IDLEIE IDLE interrupt enable **/
#define USART7_CR1_IDLEIE		(1 << 4)
/** USART7_CR1_TE Transmitter enable **/
#define USART7_CR1_TE		(1 << 3)
/** USART7_CR1_RE Receiver enable **/
#define USART7_CR1_RE		(1 << 2)
/** USART7_CR1_UESM USART enable in Stop mode **/
#define USART7_CR1_UESM		(1 << 1)
/** USART7_CR1_UE USART enable **/
#define USART7_CR1_UE		(1 << 0)

/**@}*/

/** @defgroup usart7_cr2 CR2 Control register 2
@{*/


#define USART7_CR2_ADD4_SHIFT		28
#define USART7_CR2_ADD4_MASK		0x0f
/** @defgroup usart7_cr2_add4 ADD4 Address of the USART node
@{*/
/**@}*/


#define USART7_CR2_ADD0_SHIFT		24
#define USART7_CR2_ADD0_MASK		0x0f
/** @defgroup usart7_cr2_add0 ADD0 Address of the USART node
@{*/
/**@}*/

/** USART7_CR2_RTOEN Receiver timeout enable **/
#define USART7_CR2_RTOEN		(1 << 23)

#define USART7_CR2_ABRMOD_SHIFT		21
#define USART7_CR2_ABRMOD_MASK		0x03
/** @defgroup usart7_cr2_abrmod ABRMOD Auto baud rate mode
@{*/
/**@}*/

/** USART7_CR2_ABREN Auto baud rate enable **/
#define USART7_CR2_ABREN		(1 << 20)
/** USART7_CR2_MSBFIRST Most significant bit first **/
#define USART7_CR2_MSBFIRST		(1 << 19)
/** USART7_CR2_DATAINV Binary data inversion **/
#define USART7_CR2_DATAINV		(1 << 18)
/** USART7_CR2_TXINV TX pin active level inversion **/
#define USART7_CR2_TXINV		(1 << 17)
/** USART7_CR2_RXINV RX pin active level inversion **/
#define USART7_CR2_RXINV		(1 << 16)
/** USART7_CR2_SWAP Swap TX/RX pins **/
#define USART7_CR2_SWAP		(1 << 15)
/** USART7_CR2_LINEN LIN mode enable **/
#define USART7_CR2_LINEN		(1 << 14)

#define USART7_CR2_STOP_SHIFT		12
#define USART7_CR2_STOP_MASK		0x03
/** @defgroup usart7_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** USART7_CR2_CLKEN Clock enable **/
#define USART7_CR2_CLKEN		(1 << 11)
/** USART7_CR2_CPOL Clock polarity **/
#define USART7_CR2_CPOL		(1 << 10)
/** USART7_CR2_CPHA Clock phase **/
#define USART7_CR2_CPHA		(1 << 9)
/** USART7_CR2_LBCL Last bit clock pulse **/
#define USART7_CR2_LBCL		(1 << 8)
/** USART7_CR2_LBDIE LIN break detection interrupt enable **/
#define USART7_CR2_LBDIE		(1 << 6)
/** USART7_CR2_LBDL LIN break detection length **/
#define USART7_CR2_LBDL		(1 << 5)
/** USART7_CR2_ADDM7 7-bit Address Detection/4-bit Address Detection **/
#define USART7_CR2_ADDM7		(1 << 4)

/**@}*/

/** @defgroup usart7_cr3 CR3 Control register 3
@{*/

/** USART7_CR3_WUFIE Wakeup from Stop mode interrupt enable **/
#define USART7_CR3_WUFIE		(1 << 22)

#define USART7_CR3_WUS_SHIFT		20
#define USART7_CR3_WUS_MASK		0x03
/** @defgroup usart7_cr3_wus WUS Wakeup from Stop mode interrupt flag selection
@{*/
/**@}*/


#define USART7_CR3_SCARCNT_SHIFT		17
#define USART7_CR3_SCARCNT_MASK		0x07
/** @defgroup usart7_cr3_scarcnt SCARCNT Smartcard auto-retry count
@{*/
/**@}*/

/** USART7_CR3_DEP Driver enable polarity selection **/
#define USART7_CR3_DEP		(1 << 15)
/** USART7_CR3_DEM Driver enable mode **/
#define USART7_CR3_DEM		(1 << 14)
/** USART7_CR3_DDRE DMA Disable on Reception Error **/
#define USART7_CR3_DDRE		(1 << 13)
/** USART7_CR3_OVRDIS Overrun Disable **/
#define USART7_CR3_OVRDIS		(1 << 12)
/** USART7_CR3_ONEBIT One sample bit method enable **/
#define USART7_CR3_ONEBIT		(1 << 11)
/** USART7_CR3_CTSIE CTS interrupt enable **/
#define USART7_CR3_CTSIE		(1 << 10)
/** USART7_CR3_CTSE CTS enable **/
#define USART7_CR3_CTSE		(1 << 9)
/** USART7_CR3_RTSE RTS enable **/
#define USART7_CR3_RTSE		(1 << 8)
/** USART7_CR3_DMAT DMA enable transmitter **/
#define USART7_CR3_DMAT		(1 << 7)
/** USART7_CR3_DMAR DMA enable receiver **/
#define USART7_CR3_DMAR		(1 << 6)
/** USART7_CR3_SCEN Smartcard mode enable **/
#define USART7_CR3_SCEN		(1 << 5)
/** USART7_CR3_NACK Smartcard NACK enable **/
#define USART7_CR3_NACK		(1 << 4)
/** USART7_CR3_HDSEL Half-duplex selection **/
#define USART7_CR3_HDSEL		(1 << 3)
/** USART7_CR3_IRLP IrDA low-power **/
#define USART7_CR3_IRLP		(1 << 2)
/** USART7_CR3_IREN IrDA mode enable **/
#define USART7_CR3_IREN		(1 << 1)
/** USART7_CR3_EIE Error interrupt enable **/
#define USART7_CR3_EIE		(1 << 0)

/**@}*/

/** @defgroup usart7_brr BRR Baud rate register
@{*/


#define USART7_BRR_DIV_Mantissa_SHIFT		4
#define USART7_BRR_DIV_Mantissa_MASK		0xfff
/** @defgroup usart7_brr_div_mantissa DIVMantissa mantissa of USARTDIV
@{*/
/**@}*/


#define USART7_BRR_DIV_Fraction_SHIFT		0
#define USART7_BRR_DIV_Fraction_MASK		0x0f
/** @defgroup usart7_brr_div_fraction DIVFraction fraction of USARTDIV
@{*/
/**@}*/


/**@}*/

/** @defgroup usart7_gtpr GTPR Guard time and prescaler register
@{*/


#define USART7_GTPR_GT_SHIFT		8
#define USART7_GTPR_GT_MASK		0xff
/** @defgroup usart7_gtpr_gt GT Guard time value
@{*/
/**@}*/


#define USART7_GTPR_PSC_SHIFT		0
#define USART7_GTPR_PSC_MASK		0xff
/** @defgroup usart7_gtpr_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart7_rtor RTOR Receiver timeout register
@{*/


#define USART7_RTOR_BLEN_SHIFT		24
#define USART7_RTOR_BLEN_MASK		0xff
/** @defgroup usart7_rtor_blen BLEN Block Length
@{*/
/**@}*/


#define USART7_RTOR_RTO_SHIFT		0
#define USART7_RTOR_RTO_MASK		0xffffff
/** @defgroup usart7_rtor_rto RTO Receiver timeout value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart7_rqr RQR Request register
@{*/

/** USART7_RQR_TXFRQ Transmit data flush request **/
#define USART7_RQR_TXFRQ		(1 << 4)
/** USART7_RQR_RXFRQ Receive data flush request **/
#define USART7_RQR_RXFRQ		(1 << 3)
/** USART7_RQR_MMRQ Mute mode request **/
#define USART7_RQR_MMRQ		(1 << 2)
/** USART7_RQR_SBKRQ Send break request **/
#define USART7_RQR_SBKRQ		(1 << 1)
/** USART7_RQR_ABRRQ Auto baud rate request **/
#define USART7_RQR_ABRRQ		(1 << 0)

/**@}*/

/** @defgroup usart7_isr ISR Interrupt & status register
@{*/

/** USART7_ISR_REACK Receive enable acknowledge flag **/
#define USART7_ISR_REACK		(1 << 22)
/** USART7_ISR_TEACK Transmit enable acknowledge flag **/
#define USART7_ISR_TEACK		(1 << 21)
/** USART7_ISR_WUF Wakeup from Stop mode flag **/
#define USART7_ISR_WUF		(1 << 20)
/** USART7_ISR_RWU Receiver wakeup from Mute mode **/
#define USART7_ISR_RWU		(1 << 19)
/** USART7_ISR_SBKF Send break flag **/
#define USART7_ISR_SBKF		(1 << 18)
/** USART7_ISR_CMF character match flag **/
#define USART7_ISR_CMF		(1 << 17)
/** USART7_ISR_BUSY Busy flag **/
#define USART7_ISR_BUSY		(1 << 16)
/** USART7_ISR_ABRF Auto baud rate flag **/
#define USART7_ISR_ABRF		(1 << 15)
/** USART7_ISR_ABRE Auto baud rate error **/
#define USART7_ISR_ABRE		(1 << 14)
/** USART7_ISR_EOBF End of block flag **/
#define USART7_ISR_EOBF		(1 << 12)
/** USART7_ISR_RTOF Receiver timeout **/
#define USART7_ISR_RTOF		(1 << 11)
/** USART7_ISR_CTS CTS flag **/
#define USART7_ISR_CTS		(1 << 10)
/** USART7_ISR_CTSIF CTS interrupt flag **/
#define USART7_ISR_CTSIF		(1 << 9)
/** USART7_ISR_LBDF LIN break detection flag **/
#define USART7_ISR_LBDF		(1 << 8)
/** USART7_ISR_TXE Transmit data register empty **/
#define USART7_ISR_TXE		(1 << 7)
/** USART7_ISR_TC Transmission complete **/
#define USART7_ISR_TC		(1 << 6)
/** USART7_ISR_RXNE Read data register not empty **/
#define USART7_ISR_RXNE		(1 << 5)
/** USART7_ISR_IDLE Idle line detected **/
#define USART7_ISR_IDLE		(1 << 4)
/** USART7_ISR_ORE Overrun error **/
#define USART7_ISR_ORE		(1 << 3)
/** USART7_ISR_NF Noise detected flag **/
#define USART7_ISR_NF		(1 << 2)
/** USART7_ISR_FE Framing error **/
#define USART7_ISR_FE		(1 << 1)
/** USART7_ISR_PE Parity error **/
#define USART7_ISR_PE		(1 << 0)

/**@}*/

/** @defgroup usart7_icr ICR Interrupt flag clear register
@{*/

/** USART7_ICR_WUCF Wakeup from Stop mode clear flag **/
#define USART7_ICR_WUCF		(1 << 20)
/** USART7_ICR_CMCF Character match clear flag **/
#define USART7_ICR_CMCF		(1 << 17)
/** USART7_ICR_EOBCF End of timeout clear flag **/
#define USART7_ICR_EOBCF		(1 << 12)
/** USART7_ICR_RTOCF Receiver timeout clear flag **/
#define USART7_ICR_RTOCF		(1 << 11)
/** USART7_ICR_CTSCF CTS clear flag **/
#define USART7_ICR_CTSCF		(1 << 9)
/** USART7_ICR_LBDCF LIN break detection clear flag **/
#define USART7_ICR_LBDCF		(1 << 8)
/** USART7_ICR_TCCF Transmission complete clear flag **/
#define USART7_ICR_TCCF		(1 << 6)
/** USART7_ICR_IDLECF Idle line detected clear flag **/
#define USART7_ICR_IDLECF		(1 << 4)
/** USART7_ICR_ORECF Overrun error clear flag **/
#define USART7_ICR_ORECF		(1 << 3)
/** USART7_ICR_NCF Noise detected clear flag **/
#define USART7_ICR_NCF		(1 << 2)
/** USART7_ICR_FECF Framing error clear flag **/
#define USART7_ICR_FECF		(1 << 1)
/** USART7_ICR_PECF Parity error clear flag **/
#define USART7_ICR_PECF		(1 << 0)

/**@}*/

/** @defgroup usart7_rdr RDR Receive data register
@{*/


#define USART7_RDR_RDR_SHIFT		0
#define USART7_RDR_RDR_MASK		0x1ff
/** @defgroup usart7_rdr_rdr RDR Receive data value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart7_tdr TDR Transmit data register
@{*/


#define USART7_TDR_TDR_SHIFT		0
#define USART7_TDR_TDR_MASK		0x1ff
/** @defgroup usart7_tdr_tdr TDR Transmit data value
@{*/
/**@}*/


/**@}*/

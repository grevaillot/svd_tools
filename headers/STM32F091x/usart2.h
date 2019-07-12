#pragma once 

/* --- USART2: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup usart2_registers Universal synchronous asynchronous receiver
      transmitter Register
@{*/

/** USART2_CR1 Control register 1 **/
#define USART2_CR1			MMIO32(USART2_BASE + 0x00)
/** USART2_CR2 Control register 2 **/
#define USART2_CR2			MMIO32(USART2_BASE + 0x04)
/** USART2_CR3 Control register 3 **/
#define USART2_CR3			MMIO32(USART2_BASE + 0x08)
/** USART2_BRR Baud rate register **/
#define USART2_BRR			MMIO32(USART2_BASE + 0x0c)
/** USART2_GTPR Guard time and prescaler register **/
#define USART2_GTPR			MMIO32(USART2_BASE + 0x10)
/** USART2_RTOR Receiver timeout register **/
#define USART2_RTOR			MMIO32(USART2_BASE + 0x14)
/** USART2_RQR Request register **/
#define USART2_RQR			MMIO32(USART2_BASE + 0x18)
/** USART2_ISR Interrupt & status register **/
#define USART2_ISR			MMIO32(USART2_BASE + 0x1c)
/** USART2_ICR Interrupt flag clear register **/
#define USART2_ICR			MMIO32(USART2_BASE + 0x20)
/** USART2_RDR Receive data register **/
#define USART2_RDR			MMIO32(USART2_BASE + 0x24)
/** USART2_TDR Transmit data register **/
#define USART2_TDR			MMIO32(USART2_BASE + 0x28)

/**@}*/


/** @defgroup usart2_cr1 CR1 Control register 1
@{*/

/** USART2_CR1_M1 Word length **/
#define USART2_CR1_M1		(1 << 28)
/** USART2_CR1_EOBIE End of Block interrupt enable **/
#define USART2_CR1_EOBIE		(1 << 27)
/** USART2_CR1_RTOIE Receiver timeout interrupt enable **/
#define USART2_CR1_RTOIE		(1 << 26)

#define USART2_CR1_DEAT_SHIFT		21
#define USART2_CR1_DEAT_MASK		0x1f
/** @defgroup usart2_cr1_deat DEAT Driver Enable assertion time
@{*/
/**@}*/


#define USART2_CR1_DEDT_SHIFT		16
#define USART2_CR1_DEDT_MASK		0x1f
/** @defgroup usart2_cr1_dedt DEDT Driver Enable deassertion time
@{*/
/**@}*/

/** USART2_CR1_OVER8 Oversampling mode **/
#define USART2_CR1_OVER8		(1 << 15)
/** USART2_CR1_CMIE Character match interrupt enable **/
#define USART2_CR1_CMIE		(1 << 14)
/** USART2_CR1_MME Mute mode enable **/
#define USART2_CR1_MME		(1 << 13)
/** USART2_CR1_M Word length **/
#define USART2_CR1_M		(1 << 12)
/** USART2_CR1_WAKE Receiver wakeup method **/
#define USART2_CR1_WAKE		(1 << 11)
/** USART2_CR1_PCE Parity control enable **/
#define USART2_CR1_PCE		(1 << 10)
/** USART2_CR1_PS Parity selection **/
#define USART2_CR1_PS		(1 << 9)
/** USART2_CR1_PEIE PE interrupt enable **/
#define USART2_CR1_PEIE		(1 << 8)
/** USART2_CR1_TXEIE interrupt enable **/
#define USART2_CR1_TXEIE		(1 << 7)
/** USART2_CR1_TCIE Transmission complete interrupt enable **/
#define USART2_CR1_TCIE		(1 << 6)
/** USART2_CR1_RXNEIE RXNE interrupt enable **/
#define USART2_CR1_RXNEIE		(1 << 5)
/** USART2_CR1_IDLEIE IDLE interrupt enable **/
#define USART2_CR1_IDLEIE		(1 << 4)
/** USART2_CR1_TE Transmitter enable **/
#define USART2_CR1_TE		(1 << 3)
/** USART2_CR1_RE Receiver enable **/
#define USART2_CR1_RE		(1 << 2)
/** USART2_CR1_UESM USART enable in Stop mode **/
#define USART2_CR1_UESM		(1 << 1)
/** USART2_CR1_UE USART enable **/
#define USART2_CR1_UE		(1 << 0)

/**@}*/

/** @defgroup usart2_cr2 CR2 Control register 2
@{*/


#define USART2_CR2_ADD4_SHIFT		28
#define USART2_CR2_ADD4_MASK		0x0f
/** @defgroup usart2_cr2_add4 ADD4 Address of the USART node
@{*/
/**@}*/


#define USART2_CR2_ADD0_SHIFT		24
#define USART2_CR2_ADD0_MASK		0x0f
/** @defgroup usart2_cr2_add0 ADD0 Address of the USART node
@{*/
/**@}*/

/** USART2_CR2_RTOEN Receiver timeout enable **/
#define USART2_CR2_RTOEN		(1 << 23)

#define USART2_CR2_ABRMOD_SHIFT		21
#define USART2_CR2_ABRMOD_MASK		0x03
/** @defgroup usart2_cr2_abrmod ABRMOD Auto baud rate mode
@{*/
/**@}*/

/** USART2_CR2_ABREN Auto baud rate enable **/
#define USART2_CR2_ABREN		(1 << 20)
/** USART2_CR2_MSBFIRST Most significant bit first **/
#define USART2_CR2_MSBFIRST		(1 << 19)
/** USART2_CR2_DATAINV Binary data inversion **/
#define USART2_CR2_DATAINV		(1 << 18)
/** USART2_CR2_TXINV TX pin active level inversion **/
#define USART2_CR2_TXINV		(1 << 17)
/** USART2_CR2_RXINV RX pin active level inversion **/
#define USART2_CR2_RXINV		(1 << 16)
/** USART2_CR2_SWAP Swap TX/RX pins **/
#define USART2_CR2_SWAP		(1 << 15)
/** USART2_CR2_LINEN LIN mode enable **/
#define USART2_CR2_LINEN		(1 << 14)

#define USART2_CR2_STOP_SHIFT		12
#define USART2_CR2_STOP_MASK		0x03
/** @defgroup usart2_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** USART2_CR2_CLKEN Clock enable **/
#define USART2_CR2_CLKEN		(1 << 11)
/** USART2_CR2_CPOL Clock polarity **/
#define USART2_CR2_CPOL		(1 << 10)
/** USART2_CR2_CPHA Clock phase **/
#define USART2_CR2_CPHA		(1 << 9)
/** USART2_CR2_LBCL Last bit clock pulse **/
#define USART2_CR2_LBCL		(1 << 8)
/** USART2_CR2_LBDIE LIN break detection interrupt enable **/
#define USART2_CR2_LBDIE		(1 << 6)
/** USART2_CR2_LBDL LIN break detection length **/
#define USART2_CR2_LBDL		(1 << 5)
/** USART2_CR2_ADDM7 7-bit Address Detection/4-bit Address Detection **/
#define USART2_CR2_ADDM7		(1 << 4)

/**@}*/

/** @defgroup usart2_cr3 CR3 Control register 3
@{*/

/** USART2_CR3_WUFIE Wakeup from Stop mode interrupt enable **/
#define USART2_CR3_WUFIE		(1 << 22)

#define USART2_CR3_WUS_SHIFT		20
#define USART2_CR3_WUS_MASK		0x03
/** @defgroup usart2_cr3_wus WUS Wakeup from Stop mode interrupt flag selection
@{*/
/**@}*/


#define USART2_CR3_SCARCNT_SHIFT		17
#define USART2_CR3_SCARCNT_MASK		0x07
/** @defgroup usart2_cr3_scarcnt SCARCNT Smartcard auto-retry count
@{*/
/**@}*/

/** USART2_CR3_DEP Driver enable polarity selection **/
#define USART2_CR3_DEP		(1 << 15)
/** USART2_CR3_DEM Driver enable mode **/
#define USART2_CR3_DEM		(1 << 14)
/** USART2_CR3_DDRE DMA Disable on Reception Error **/
#define USART2_CR3_DDRE		(1 << 13)
/** USART2_CR3_OVRDIS Overrun Disable **/
#define USART2_CR3_OVRDIS		(1 << 12)
/** USART2_CR3_ONEBIT One sample bit method enable **/
#define USART2_CR3_ONEBIT		(1 << 11)
/** USART2_CR3_CTSIE CTS interrupt enable **/
#define USART2_CR3_CTSIE		(1 << 10)
/** USART2_CR3_CTSE CTS enable **/
#define USART2_CR3_CTSE		(1 << 9)
/** USART2_CR3_RTSE RTS enable **/
#define USART2_CR3_RTSE		(1 << 8)
/** USART2_CR3_DMAT DMA enable transmitter **/
#define USART2_CR3_DMAT		(1 << 7)
/** USART2_CR3_DMAR DMA enable receiver **/
#define USART2_CR3_DMAR		(1 << 6)
/** USART2_CR3_SCEN Smartcard mode enable **/
#define USART2_CR3_SCEN		(1 << 5)
/** USART2_CR3_NACK Smartcard NACK enable **/
#define USART2_CR3_NACK		(1 << 4)
/** USART2_CR3_HDSEL Half-duplex selection **/
#define USART2_CR3_HDSEL		(1 << 3)
/** USART2_CR3_IRLP IrDA low-power **/
#define USART2_CR3_IRLP		(1 << 2)
/** USART2_CR3_IREN IrDA mode enable **/
#define USART2_CR3_IREN		(1 << 1)
/** USART2_CR3_EIE Error interrupt enable **/
#define USART2_CR3_EIE		(1 << 0)

/**@}*/

/** @defgroup usart2_brr BRR Baud rate register
@{*/


#define USART2_BRR_DIV_Mantissa_SHIFT		4
#define USART2_BRR_DIV_Mantissa_MASK		0xfff
/** @defgroup usart2_brr_div_mantissa DIVMantissa mantissa of USARTDIV
@{*/
/**@}*/


#define USART2_BRR_DIV_Fraction_SHIFT		0
#define USART2_BRR_DIV_Fraction_MASK		0x0f
/** @defgroup usart2_brr_div_fraction DIVFraction fraction of USARTDIV
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_gtpr GTPR Guard time and prescaler register
@{*/


#define USART2_GTPR_GT_SHIFT		8
#define USART2_GTPR_GT_MASK		0xff
/** @defgroup usart2_gtpr_gt GT Guard time value
@{*/
/**@}*/


#define USART2_GTPR_PSC_SHIFT		0
#define USART2_GTPR_PSC_MASK		0xff
/** @defgroup usart2_gtpr_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_rtor RTOR Receiver timeout register
@{*/


#define USART2_RTOR_BLEN_SHIFT		24
#define USART2_RTOR_BLEN_MASK		0xff
/** @defgroup usart2_rtor_blen BLEN Block Length
@{*/
/**@}*/


#define USART2_RTOR_RTO_SHIFT		0
#define USART2_RTOR_RTO_MASK		0xffffff
/** @defgroup usart2_rtor_rto RTO Receiver timeout value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_rqr RQR Request register
@{*/

/** USART2_RQR_TXFRQ Transmit data flush request **/
#define USART2_RQR_TXFRQ		(1 << 4)
/** USART2_RQR_RXFRQ Receive data flush request **/
#define USART2_RQR_RXFRQ		(1 << 3)
/** USART2_RQR_MMRQ Mute mode request **/
#define USART2_RQR_MMRQ		(1 << 2)
/** USART2_RQR_SBKRQ Send break request **/
#define USART2_RQR_SBKRQ		(1 << 1)
/** USART2_RQR_ABRRQ Auto baud rate request **/
#define USART2_RQR_ABRRQ		(1 << 0)

/**@}*/

/** @defgroup usart2_isr ISR Interrupt & status register
@{*/

/** USART2_ISR_REACK Receive enable acknowledge flag **/
#define USART2_ISR_REACK		(1 << 22)
/** USART2_ISR_TEACK Transmit enable acknowledge flag **/
#define USART2_ISR_TEACK		(1 << 21)
/** USART2_ISR_WUF Wakeup from Stop mode flag **/
#define USART2_ISR_WUF		(1 << 20)
/** USART2_ISR_RWU Receiver wakeup from Mute mode **/
#define USART2_ISR_RWU		(1 << 19)
/** USART2_ISR_SBKF Send break flag **/
#define USART2_ISR_SBKF		(1 << 18)
/** USART2_ISR_CMF character match flag **/
#define USART2_ISR_CMF		(1 << 17)
/** USART2_ISR_BUSY Busy flag **/
#define USART2_ISR_BUSY		(1 << 16)
/** USART2_ISR_ABRF Auto baud rate flag **/
#define USART2_ISR_ABRF		(1 << 15)
/** USART2_ISR_ABRE Auto baud rate error **/
#define USART2_ISR_ABRE		(1 << 14)
/** USART2_ISR_EOBF End of block flag **/
#define USART2_ISR_EOBF		(1 << 12)
/** USART2_ISR_RTOF Receiver timeout **/
#define USART2_ISR_RTOF		(1 << 11)
/** USART2_ISR_CTS CTS flag **/
#define USART2_ISR_CTS		(1 << 10)
/** USART2_ISR_CTSIF CTS interrupt flag **/
#define USART2_ISR_CTSIF		(1 << 9)
/** USART2_ISR_LBDF LIN break detection flag **/
#define USART2_ISR_LBDF		(1 << 8)
/** USART2_ISR_TXE Transmit data register empty **/
#define USART2_ISR_TXE		(1 << 7)
/** USART2_ISR_TC Transmission complete **/
#define USART2_ISR_TC		(1 << 6)
/** USART2_ISR_RXNE Read data register not empty **/
#define USART2_ISR_RXNE		(1 << 5)
/** USART2_ISR_IDLE Idle line detected **/
#define USART2_ISR_IDLE		(1 << 4)
/** USART2_ISR_ORE Overrun error **/
#define USART2_ISR_ORE		(1 << 3)
/** USART2_ISR_NF Noise detected flag **/
#define USART2_ISR_NF		(1 << 2)
/** USART2_ISR_FE Framing error **/
#define USART2_ISR_FE		(1 << 1)
/** USART2_ISR_PE Parity error **/
#define USART2_ISR_PE		(1 << 0)

/**@}*/

/** @defgroup usart2_icr ICR Interrupt flag clear register
@{*/

/** USART2_ICR_WUCF Wakeup from Stop mode clear flag **/
#define USART2_ICR_WUCF		(1 << 20)
/** USART2_ICR_CMCF Character match clear flag **/
#define USART2_ICR_CMCF		(1 << 17)
/** USART2_ICR_EOBCF End of timeout clear flag **/
#define USART2_ICR_EOBCF		(1 << 12)
/** USART2_ICR_RTOCF Receiver timeout clear flag **/
#define USART2_ICR_RTOCF		(1 << 11)
/** USART2_ICR_CTSCF CTS clear flag **/
#define USART2_ICR_CTSCF		(1 << 9)
/** USART2_ICR_LBDCF LIN break detection clear flag **/
#define USART2_ICR_LBDCF		(1 << 8)
/** USART2_ICR_TCCF Transmission complete clear flag **/
#define USART2_ICR_TCCF		(1 << 6)
/** USART2_ICR_IDLECF Idle line detected clear flag **/
#define USART2_ICR_IDLECF		(1 << 4)
/** USART2_ICR_ORECF Overrun error clear flag **/
#define USART2_ICR_ORECF		(1 << 3)
/** USART2_ICR_NCF Noise detected clear flag **/
#define USART2_ICR_NCF		(1 << 2)
/** USART2_ICR_FECF Framing error clear flag **/
#define USART2_ICR_FECF		(1 << 1)
/** USART2_ICR_PECF Parity error clear flag **/
#define USART2_ICR_PECF		(1 << 0)

/**@}*/

/** @defgroup usart2_rdr RDR Receive data register
@{*/


#define USART2_RDR_RDR_SHIFT		0
#define USART2_RDR_RDR_MASK		0x1ff
/** @defgroup usart2_rdr_rdr RDR Receive data value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_tdr TDR Transmit data register
@{*/


#define USART2_TDR_TDR_SHIFT		0
#define USART2_TDR_TDR_MASK		0x1ff
/** @defgroup usart2_tdr_tdr TDR Transmit data value
@{*/
/**@}*/


/**@}*/

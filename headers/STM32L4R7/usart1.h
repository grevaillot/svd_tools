#pragma once 

/* --- USART1: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup usart1_registers Universal synchronous asynchronous receiver
      transmitter Register
@{*/

/** USART1_CR1 Control register 1 **/
#define USART1_CR1			MMIO32(USART1_BASE + 0x00)
/** USART1_CR2 Control register 2 **/
#define USART1_CR2			MMIO32(USART1_BASE + 0x04)
/** USART1_CR3 Control register 3 **/
#define USART1_CR3			MMIO32(USART1_BASE + 0x08)
/** USART1_BRR Baud rate register **/
#define USART1_BRR			MMIO32(USART1_BASE + 0x0c)
/** USART1_GTPR Guard time and prescaler register **/
#define USART1_GTPR			MMIO32(USART1_BASE + 0x10)
/** USART1_RTOR Receiver timeout register **/
#define USART1_RTOR			MMIO32(USART1_BASE + 0x14)
/** USART1_RQR Request register **/
#define USART1_RQR			MMIO32(USART1_BASE + 0x18)
/** USART1_ISR Interrupt & status register **/
#define USART1_ISR			MMIO32(USART1_BASE + 0x1c)
/** USART1_ICR Interrupt flag clear register **/
#define USART1_ICR			MMIO32(USART1_BASE + 0x20)
/** USART1_RDR Receive data register **/
#define USART1_RDR			MMIO32(USART1_BASE + 0x24)
/** USART1_TDR Transmit data register **/
#define USART1_TDR			MMIO32(USART1_BASE + 0x28)

/**@}*/


/** @defgroup usart1_cr1 CR1 Control register 1
@{*/

/** USART1_CR1_M1 Word length **/
#define USART1_CR1_M1		(1 << 28)
/** USART1_CR1_EOBIE End of Block interrupt enable **/
#define USART1_CR1_EOBIE		(1 << 27)
/** USART1_CR1_RTOIE Receiver timeout interrupt enable **/
#define USART1_CR1_RTOIE		(1 << 26)
/** USART1_CR1_DEAT4 Driver Enable assertion time **/
#define USART1_CR1_DEAT4		(1 << 25)
/** USART1_CR1_DEAT3 DEAT3 **/
#define USART1_CR1_DEAT3		(1 << 24)
/** USART1_CR1_DEAT2 DEAT2 **/
#define USART1_CR1_DEAT2		(1 << 23)
/** USART1_CR1_DEAT1 DEAT1 **/
#define USART1_CR1_DEAT1		(1 << 22)
/** USART1_CR1_DEAT0 DEAT0 **/
#define USART1_CR1_DEAT0		(1 << 21)
/** USART1_CR1_DEDT4 Driver Enable de-assertion time **/
#define USART1_CR1_DEDT4		(1 << 20)
/** USART1_CR1_DEDT3 DEDT3 **/
#define USART1_CR1_DEDT3		(1 << 19)
/** USART1_CR1_DEDT2 DEDT2 **/
#define USART1_CR1_DEDT2		(1 << 18)
/** USART1_CR1_DEDT1 DEDT1 **/
#define USART1_CR1_DEDT1		(1 << 17)
/** USART1_CR1_DEDT0 DEDT0 **/
#define USART1_CR1_DEDT0		(1 << 16)
/** USART1_CR1_OVER8 Oversampling mode **/
#define USART1_CR1_OVER8		(1 << 15)
/** USART1_CR1_CMIE Character match interrupt enable **/
#define USART1_CR1_CMIE		(1 << 14)
/** USART1_CR1_MME Mute mode enable **/
#define USART1_CR1_MME		(1 << 13)
/** USART1_CR1_M0 Word length **/
#define USART1_CR1_M0		(1 << 12)
/** USART1_CR1_WAKE Receiver wakeup method **/
#define USART1_CR1_WAKE		(1 << 11)
/** USART1_CR1_PCE Parity control enable **/
#define USART1_CR1_PCE		(1 << 10)
/** USART1_CR1_PS Parity selection **/
#define USART1_CR1_PS		(1 << 9)
/** USART1_CR1_PEIE PE interrupt enable **/
#define USART1_CR1_PEIE		(1 << 8)
/** USART1_CR1_TXEIE interrupt enable **/
#define USART1_CR1_TXEIE		(1 << 7)
/** USART1_CR1_TCIE Transmission complete interrupt enable **/
#define USART1_CR1_TCIE		(1 << 6)
/** USART1_CR1_RXNEIE RXNE interrupt enable **/
#define USART1_CR1_RXNEIE		(1 << 5)
/** USART1_CR1_IDLEIE IDLE interrupt enable **/
#define USART1_CR1_IDLEIE		(1 << 4)
/** USART1_CR1_TE Transmitter enable **/
#define USART1_CR1_TE		(1 << 3)
/** USART1_CR1_RE Receiver enable **/
#define USART1_CR1_RE		(1 << 2)
/** USART1_CR1_UESM USART enable in Stop mode **/
#define USART1_CR1_UESM		(1 << 1)
/** USART1_CR1_UE USART enable **/
#define USART1_CR1_UE		(1 << 0)

/**@}*/

/** @defgroup usart1_cr2 CR2 Control register 2
@{*/


#define USART1_CR2_ADD4_7_SHIFT		28
#define USART1_CR2_ADD4_7_MASK		0x0f
/** @defgroup usart1_cr2_add4_7 ADD47 Address of the USART node
@{*/
/**@}*/


#define USART1_CR2_ADD0_3_SHIFT		24
#define USART1_CR2_ADD0_3_MASK		0x0f
/** @defgroup usart1_cr2_add0_3 ADD03 Address of the USART node
@{*/
/**@}*/

/** USART1_CR2_RTOEN Receiver timeout enable **/
#define USART1_CR2_RTOEN		(1 << 23)
/** USART1_CR2_ABRMOD1 Auto baud rate mode **/
#define USART1_CR2_ABRMOD1		(1 << 22)
/** USART1_CR2_ABRMOD0 ABRMOD0 **/
#define USART1_CR2_ABRMOD0		(1 << 21)
/** USART1_CR2_ABREN Auto baud rate enable **/
#define USART1_CR2_ABREN		(1 << 20)
/** USART1_CR2_MSBFIRST Most significant bit first **/
#define USART1_CR2_MSBFIRST		(1 << 19)
/** USART1_CR2_TAINV Binary data inversion **/
#define USART1_CR2_TAINV		(1 << 18)
/** USART1_CR2_TXINV TX pin active level inversion **/
#define USART1_CR2_TXINV		(1 << 17)
/** USART1_CR2_RXINV RX pin active level inversion **/
#define USART1_CR2_RXINV		(1 << 16)
/** USART1_CR2_SWAP Swap TX/RX pins **/
#define USART1_CR2_SWAP		(1 << 15)
/** USART1_CR2_LINEN LIN mode enable **/
#define USART1_CR2_LINEN		(1 << 14)

#define USART1_CR2_STOP_SHIFT		12
#define USART1_CR2_STOP_MASK		0x03
/** @defgroup usart1_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** USART1_CR2_CLKEN Clock enable **/
#define USART1_CR2_CLKEN		(1 << 11)
/** USART1_CR2_CPOL Clock polarity **/
#define USART1_CR2_CPOL		(1 << 10)
/** USART1_CR2_CPHA Clock phase **/
#define USART1_CR2_CPHA		(1 << 9)
/** USART1_CR2_LBCL Last bit clock pulse **/
#define USART1_CR2_LBCL		(1 << 8)
/** USART1_CR2_LBDIE LIN break detection interrupt enable **/
#define USART1_CR2_LBDIE		(1 << 6)
/** USART1_CR2_LBDL LIN break detection length **/
#define USART1_CR2_LBDL		(1 << 5)
/** USART1_CR2_ADDM7 7-bit Address Detection/4-bit Address Detection **/
#define USART1_CR2_ADDM7		(1 << 4)

/**@}*/

/** @defgroup usart1_cr3 CR3 Control register 3
@{*/

/** USART1_CR3_WUFIE Wakeup from Stop mode interrupt enable **/
#define USART1_CR3_WUFIE		(1 << 22)

#define USART1_CR3_WUS_SHIFT		20
#define USART1_CR3_WUS_MASK		0x03
/** @defgroup usart1_cr3_wus WUS Wakeup from Stop mode interrupt flag selection
@{*/
/**@}*/


#define USART1_CR3_SCARCNT_SHIFT		17
#define USART1_CR3_SCARCNT_MASK		0x07
/** @defgroup usart1_cr3_scarcnt SCARCNT Smartcard auto-retry count
@{*/
/**@}*/

/** USART1_CR3_DEP Driver enable polarity selection **/
#define USART1_CR3_DEP		(1 << 15)
/** USART1_CR3_DEM Driver enable mode **/
#define USART1_CR3_DEM		(1 << 14)
/** USART1_CR3_DDRE DMA Disable on Reception Error **/
#define USART1_CR3_DDRE		(1 << 13)
/** USART1_CR3_OVRDIS Overrun Disable **/
#define USART1_CR3_OVRDIS		(1 << 12)
/** USART1_CR3_ONEBIT One sample bit method enable **/
#define USART1_CR3_ONEBIT		(1 << 11)
/** USART1_CR3_CTSIE CTS interrupt enable **/
#define USART1_CR3_CTSIE		(1 << 10)
/** USART1_CR3_CTSE CTS enable **/
#define USART1_CR3_CTSE		(1 << 9)
/** USART1_CR3_RTSE RTS enable **/
#define USART1_CR3_RTSE		(1 << 8)
/** USART1_CR3_DMAT DMA enable transmitter **/
#define USART1_CR3_DMAT		(1 << 7)
/** USART1_CR3_DMAR DMA enable receiver **/
#define USART1_CR3_DMAR		(1 << 6)
/** USART1_CR3_SCEN Smartcard mode enable **/
#define USART1_CR3_SCEN		(1 << 5)
/** USART1_CR3_NACK Smartcard NACK enable **/
#define USART1_CR3_NACK		(1 << 4)
/** USART1_CR3_HDSEL Half-duplex selection **/
#define USART1_CR3_HDSEL		(1 << 3)
/** USART1_CR3_IRLP Ir low-power **/
#define USART1_CR3_IRLP		(1 << 2)
/** USART1_CR3_IREN Ir mode enable **/
#define USART1_CR3_IREN		(1 << 1)
/** USART1_CR3_EIE Error interrupt enable **/
#define USART1_CR3_EIE		(1 << 0)

/**@}*/

/** @defgroup usart1_brr BRR Baud rate register
@{*/


#define USART1_BRR_DIV_Mantissa_SHIFT		4
#define USART1_BRR_DIV_Mantissa_MASK		0xfff
/** @defgroup usart1_brr_div_mantissa DIVMantissa DIV_Mantissa
@{*/
/**@}*/


#define USART1_BRR_DIV_Fraction_SHIFT		0
#define USART1_BRR_DIV_Fraction_MASK		0x0f
/** @defgroup usart1_brr_div_fraction DIVFraction DIV_Fraction
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_gtpr GTPR Guard time and prescaler register
@{*/


#define USART1_GTPR_GT_SHIFT		8
#define USART1_GTPR_GT_MASK		0xff
/** @defgroup usart1_gtpr_gt GT Guard time value
@{*/
/**@}*/


#define USART1_GTPR_PSC_SHIFT		0
#define USART1_GTPR_PSC_MASK		0xff
/** @defgroup usart1_gtpr_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_rtor RTOR Receiver timeout register
@{*/


#define USART1_RTOR_BLEN_SHIFT		24
#define USART1_RTOR_BLEN_MASK		0xff
/** @defgroup usart1_rtor_blen BLEN Block Length
@{*/
/**@}*/


#define USART1_RTOR_RTO_SHIFT		0
#define USART1_RTOR_RTO_MASK		0xffffff
/** @defgroup usart1_rtor_rto RTO Receiver timeout value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_rqr RQR Request register
@{*/

/** USART1_RQR_TXFRQ Transmit data flush request **/
#define USART1_RQR_TXFRQ		(1 << 4)
/** USART1_RQR_RXFRQ Receive data flush request **/
#define USART1_RQR_RXFRQ		(1 << 3)
/** USART1_RQR_MMRQ Mute mode request **/
#define USART1_RQR_MMRQ		(1 << 2)
/** USART1_RQR_SBKRQ Send break request **/
#define USART1_RQR_SBKRQ		(1 << 1)
/** USART1_RQR_ABRRQ Auto baud rate request **/
#define USART1_RQR_ABRRQ		(1 << 0)

/**@}*/

/** @defgroup usart1_isr ISR Interrupt & status register
@{*/

/** USART1_ISR_REACK REACK **/
#define USART1_ISR_REACK		(1 << 22)
/** USART1_ISR_TEACK TEACK **/
#define USART1_ISR_TEACK		(1 << 21)
/** USART1_ISR_WUF WUF **/
#define USART1_ISR_WUF		(1 << 20)
/** USART1_ISR_RWU RWU **/
#define USART1_ISR_RWU		(1 << 19)
/** USART1_ISR_SBKF SBKF **/
#define USART1_ISR_SBKF		(1 << 18)
/** USART1_ISR_CMF CMF **/
#define USART1_ISR_CMF		(1 << 17)
/** USART1_ISR_BUSY BUSY **/
#define USART1_ISR_BUSY		(1 << 16)
/** USART1_ISR_ABRF ABRF **/
#define USART1_ISR_ABRF		(1 << 15)
/** USART1_ISR_ABRE ABRE **/
#define USART1_ISR_ABRE		(1 << 14)
/** USART1_ISR_EOBF EOBF **/
#define USART1_ISR_EOBF		(1 << 12)
/** USART1_ISR_RTOF RTOF **/
#define USART1_ISR_RTOF		(1 << 11)
/** USART1_ISR_CTS CTS **/
#define USART1_ISR_CTS		(1 << 10)
/** USART1_ISR_CTSIF CTSIF **/
#define USART1_ISR_CTSIF		(1 << 9)
/** USART1_ISR_LBDF LBDF **/
#define USART1_ISR_LBDF		(1 << 8)
/** USART1_ISR_TXE TXE **/
#define USART1_ISR_TXE		(1 << 7)
/** USART1_ISR_TC TC **/
#define USART1_ISR_TC		(1 << 6)
/** USART1_ISR_RXNE RXNE **/
#define USART1_ISR_RXNE		(1 << 5)
/** USART1_ISR_IDLE IDLE **/
#define USART1_ISR_IDLE		(1 << 4)
/** USART1_ISR_ORE ORE **/
#define USART1_ISR_ORE		(1 << 3)
/** USART1_ISR_NF NF **/
#define USART1_ISR_NF		(1 << 2)
/** USART1_ISR_FE FE **/
#define USART1_ISR_FE		(1 << 1)
/** USART1_ISR_PE PE **/
#define USART1_ISR_PE		(1 << 0)

/**@}*/

/** @defgroup usart1_icr ICR Interrupt flag clear register
@{*/

/** USART1_ICR_WUCF Wakeup from Stop mode clear flag **/
#define USART1_ICR_WUCF		(1 << 20)
/** USART1_ICR_CMCF Character match clear flag **/
#define USART1_ICR_CMCF		(1 << 17)
/** USART1_ICR_EOBCF End of block clear flag **/
#define USART1_ICR_EOBCF		(1 << 12)
/** USART1_ICR_RTOCF Receiver timeout clear flag **/
#define USART1_ICR_RTOCF		(1 << 11)
/** USART1_ICR_CTSCF CTS clear flag **/
#define USART1_ICR_CTSCF		(1 << 9)
/** USART1_ICR_LBDCF LIN break detection clear flag **/
#define USART1_ICR_LBDCF		(1 << 8)
/** USART1_ICR_TCCF Transmission complete clear flag **/
#define USART1_ICR_TCCF		(1 << 6)
/** USART1_ICR_IDLECF Idle line detected clear flag **/
#define USART1_ICR_IDLECF		(1 << 4)
/** USART1_ICR_ORECF Overrun error clear flag **/
#define USART1_ICR_ORECF		(1 << 3)
/** USART1_ICR_NCF Noise detected clear flag **/
#define USART1_ICR_NCF		(1 << 2)
/** USART1_ICR_FECF Framing error clear flag **/
#define USART1_ICR_FECF		(1 << 1)
/** USART1_ICR_PECF Parity error clear flag **/
#define USART1_ICR_PECF		(1 << 0)

/**@}*/

/** @defgroup usart1_rdr RDR Receive data register
@{*/


#define USART1_RDR_RDR_SHIFT		0
#define USART1_RDR_RDR_MASK		0x1ff
/** @defgroup usart1_rdr_rdr RDR Receive data value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_tdr TDR Transmit data register
@{*/


#define USART1_TDR_TDR_SHIFT		0
#define USART1_TDR_TDR_MASK		0x1ff
/** @defgroup usart1_tdr_tdr TDR Transmit data value
@{*/
/**@}*/


/**@}*/

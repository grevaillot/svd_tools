#pragma once 

/* --- UART8: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup uart8_registers Universal synchronous asynchronous receiver
      transmitter Register
@{*/

/** UART8_CR1 Control register 1 **/
#define UART8_CR1			MMIO32(UART8_BASE + 0x00)
/** UART8_CR2 Control register 2 **/
#define UART8_CR2			MMIO32(UART8_BASE + 0x04)
/** UART8_CR3 Control register 3 **/
#define UART8_CR3			MMIO32(UART8_BASE + 0x08)
/** UART8_BRR Baud rate register **/
#define UART8_BRR			MMIO32(UART8_BASE + 0x0c)
/** UART8_GTPR Guard time and prescaler register **/
#define UART8_GTPR			MMIO32(UART8_BASE + 0x10)
/** UART8_RTOR Receiver timeout register **/
#define UART8_RTOR			MMIO32(UART8_BASE + 0x14)
/** UART8_RQR Request register **/
#define UART8_RQR			MMIO32(UART8_BASE + 0x18)
/** UART8_ISR Interrupt & status register **/
#define UART8_ISR			MMIO32(UART8_BASE + 0x1c)
/** UART8_ICR Interrupt flag clear register **/
#define UART8_ICR			MMIO32(UART8_BASE + 0x20)
/** UART8_RDR Receive data register **/
#define UART8_RDR			MMIO32(UART8_BASE + 0x24)
/** UART8_TDR Transmit data register **/
#define UART8_TDR			MMIO32(UART8_BASE + 0x28)

/**@}*/


/** @defgroup uart8_cr1 CR1 Control register 1
@{*/

/** UART8_CR1_M1 Word length **/
#define UART8_CR1_M1		(1 << 28)
/** UART8_CR1_EOBIE End of Block interrupt enable **/
#define UART8_CR1_EOBIE		(1 << 27)
/** UART8_CR1_RTOIE Receiver timeout interrupt enable **/
#define UART8_CR1_RTOIE		(1 << 26)
/** UART8_CR1_DEAT4 Driver Enable assertion time **/
#define UART8_CR1_DEAT4		(1 << 25)
/** UART8_CR1_DEAT3 DEAT3 **/
#define UART8_CR1_DEAT3		(1 << 24)
/** UART8_CR1_DEAT2 DEAT2 **/
#define UART8_CR1_DEAT2		(1 << 23)
/** UART8_CR1_DEAT1 DEAT1 **/
#define UART8_CR1_DEAT1		(1 << 22)
/** UART8_CR1_DEAT0 DEAT0 **/
#define UART8_CR1_DEAT0		(1 << 21)
/** UART8_CR1_DEDT4 Driver Enable de-assertion time **/
#define UART8_CR1_DEDT4		(1 << 20)
/** UART8_CR1_DEDT3 DEDT3 **/
#define UART8_CR1_DEDT3		(1 << 19)
/** UART8_CR1_DEDT2 DEDT2 **/
#define UART8_CR1_DEDT2		(1 << 18)
/** UART8_CR1_DEDT1 DEDT1 **/
#define UART8_CR1_DEDT1		(1 << 17)
/** UART8_CR1_DEDT0 DEDT0 **/
#define UART8_CR1_DEDT0		(1 << 16)
/** UART8_CR1_OVER8 Oversampling mode **/
#define UART8_CR1_OVER8		(1 << 15)
/** UART8_CR1_CMIE Character match interrupt enable **/
#define UART8_CR1_CMIE		(1 << 14)
/** UART8_CR1_MME Mute mode enable **/
#define UART8_CR1_MME		(1 << 13)
/** UART8_CR1_M0 Word length **/
#define UART8_CR1_M0		(1 << 12)
/** UART8_CR1_WAKE Receiver wakeup method **/
#define UART8_CR1_WAKE		(1 << 11)
/** UART8_CR1_PCE Parity control enable **/
#define UART8_CR1_PCE		(1 << 10)
/** UART8_CR1_PS Parity selection **/
#define UART8_CR1_PS		(1 << 9)
/** UART8_CR1_PEIE PE interrupt enable **/
#define UART8_CR1_PEIE		(1 << 8)
/** UART8_CR1_TXEIE interrupt enable **/
#define UART8_CR1_TXEIE		(1 << 7)
/** UART8_CR1_TCIE Transmission complete interrupt enable **/
#define UART8_CR1_TCIE		(1 << 6)
/** UART8_CR1_RXNEIE RXNE interrupt enable **/
#define UART8_CR1_RXNEIE		(1 << 5)
/** UART8_CR1_IDLEIE IDLE interrupt enable **/
#define UART8_CR1_IDLEIE		(1 << 4)
/** UART8_CR1_TE Transmitter enable **/
#define UART8_CR1_TE		(1 << 3)
/** UART8_CR1_RE Receiver enable **/
#define UART8_CR1_RE		(1 << 2)
/** UART8_CR1_UE USART enable **/
#define UART8_CR1_UE		(1 << 0)

/**@}*/

/** @defgroup uart8_cr2 CR2 Control register 2
@{*/


#define UART8_CR2_ADD4_7_SHIFT		28
#define UART8_CR2_ADD4_7_MASK		0x0f
/** @defgroup uart8_cr2_add4_7 ADD47 Address of the USART node
@{*/
/**@}*/


#define UART8_CR2_ADD0_3_SHIFT		24
#define UART8_CR2_ADD0_3_MASK		0x0f
/** @defgroup uart8_cr2_add0_3 ADD03 Address of the USART node
@{*/
/**@}*/

/** UART8_CR2_RTOEN Receiver timeout enable **/
#define UART8_CR2_RTOEN		(1 << 23)
/** UART8_CR2_ABRMOD1 Auto baud rate mode **/
#define UART8_CR2_ABRMOD1		(1 << 22)
/** UART8_CR2_ABRMOD0 ABRMOD0 **/
#define UART8_CR2_ABRMOD0		(1 << 21)
/** UART8_CR2_ABREN Auto baud rate enable **/
#define UART8_CR2_ABREN		(1 << 20)
/** UART8_CR2_MSBFIRST Most significant bit first **/
#define UART8_CR2_MSBFIRST		(1 << 19)
/** UART8_CR2_TAINV Binary data inversion **/
#define UART8_CR2_TAINV		(1 << 18)
/** UART8_CR2_TXINV TX pin active level inversion **/
#define UART8_CR2_TXINV		(1 << 17)
/** UART8_CR2_RXINV RX pin active level inversion **/
#define UART8_CR2_RXINV		(1 << 16)
/** UART8_CR2_SWAP Swap TX/RX pins **/
#define UART8_CR2_SWAP		(1 << 15)
/** UART8_CR2_LINEN LIN mode enable **/
#define UART8_CR2_LINEN		(1 << 14)

#define UART8_CR2_STOP_SHIFT		12
#define UART8_CR2_STOP_MASK		0x03
/** @defgroup uart8_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** UART8_CR2_CLKEN Clock enable **/
#define UART8_CR2_CLKEN		(1 << 11)
/** UART8_CR2_CPOL Clock polarity **/
#define UART8_CR2_CPOL		(1 << 10)
/** UART8_CR2_CPHA Clock phase **/
#define UART8_CR2_CPHA		(1 << 9)
/** UART8_CR2_LBCL Last bit clock pulse **/
#define UART8_CR2_LBCL		(1 << 8)
/** UART8_CR2_LBDIE LIN break detection interrupt enable **/
#define UART8_CR2_LBDIE		(1 << 6)
/** UART8_CR2_LBDL LIN break detection length **/
#define UART8_CR2_LBDL		(1 << 5)
/** UART8_CR2_ADDM7 7-bit Address Detection/4-bit Address Detection **/
#define UART8_CR2_ADDM7		(1 << 4)

/**@}*/

/** @defgroup uart8_cr3 CR3 Control register 3
@{*/

/** UART8_CR3_TCBGTIE Transmission complete before guard time interrupt enable **/
#define UART8_CR3_TCBGTIE		(1 << 24)

#define UART8_CR3_SCARCNT_SHIFT		17
#define UART8_CR3_SCARCNT_MASK		0x07
/** @defgroup uart8_cr3_scarcnt SCARCNT Smartcard auto-retry count
@{*/
/**@}*/

/** UART8_CR3_DEP Driver enable polarity selection **/
#define UART8_CR3_DEP		(1 << 15)
/** UART8_CR3_DEM Driver enable mode **/
#define UART8_CR3_DEM		(1 << 14)
/** UART8_CR3_DDRE DMA Disable on Reception Error **/
#define UART8_CR3_DDRE		(1 << 13)
/** UART8_CR3_OVRDIS Overrun Disable **/
#define UART8_CR3_OVRDIS		(1 << 12)
/** UART8_CR3_ONEBIT One sample bit method enable **/
#define UART8_CR3_ONEBIT		(1 << 11)
/** UART8_CR3_CTSIE CTS interrupt enable **/
#define UART8_CR3_CTSIE		(1 << 10)
/** UART8_CR3_CTSE CTS enable **/
#define UART8_CR3_CTSE		(1 << 9)
/** UART8_CR3_RTSE RTS enable **/
#define UART8_CR3_RTSE		(1 << 8)
/** UART8_CR3_DMAT DMA enable transmitter **/
#define UART8_CR3_DMAT		(1 << 7)
/** UART8_CR3_DMAR DMA enable receiver **/
#define UART8_CR3_DMAR		(1 << 6)
/** UART8_CR3_SCEN Smartcard mode enable **/
#define UART8_CR3_SCEN		(1 << 5)
/** UART8_CR3_NACK Smartcard NACK enable **/
#define UART8_CR3_NACK		(1 << 4)
/** UART8_CR3_HDSEL Half-duplex selection **/
#define UART8_CR3_HDSEL		(1 << 3)
/** UART8_CR3_IRLP Ir low-power **/
#define UART8_CR3_IRLP		(1 << 2)
/** UART8_CR3_IREN Ir mode enable **/
#define UART8_CR3_IREN		(1 << 1)
/** UART8_CR3_EIE Error interrupt enable **/
#define UART8_CR3_EIE		(1 << 0)

/**@}*/

/** @defgroup uart8_brr BRR Baud rate register
@{*/


#define UART8_BRR_BRR_SHIFT		0
#define UART8_BRR_BRR_MASK		0xffff
/** @defgroup uart8_brr_brr BRR USARTDIV
@{*/
/**@}*/


/**@}*/

/** @defgroup uart8_gtpr GTPR Guard time and prescaler register
@{*/


#define UART8_GTPR_GT_SHIFT		8
#define UART8_GTPR_GT_MASK		0xff
/** @defgroup uart8_gtpr_gt GT Guard time value
@{*/
/**@}*/


#define UART8_GTPR_PSC_SHIFT		0
#define UART8_GTPR_PSC_MASK		0xff
/** @defgroup uart8_gtpr_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart8_rtor RTOR Receiver timeout register
@{*/


#define UART8_RTOR_BLEN_SHIFT		24
#define UART8_RTOR_BLEN_MASK		0xff
/** @defgroup uart8_rtor_blen BLEN Block Length
@{*/
/**@}*/


#define UART8_RTOR_RTO_SHIFT		0
#define UART8_RTOR_RTO_MASK		0xffffff
/** @defgroup uart8_rtor_rto RTO Receiver timeout value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart8_rqr RQR Request register
@{*/

/** UART8_RQR_TXFRQ Transmit data flush request **/
#define UART8_RQR_TXFRQ		(1 << 4)
/** UART8_RQR_RXFRQ Receive data flush request **/
#define UART8_RQR_RXFRQ		(1 << 3)
/** UART8_RQR_MMRQ Mute mode request **/
#define UART8_RQR_MMRQ		(1 << 2)
/** UART8_RQR_SBKRQ Send break request **/
#define UART8_RQR_SBKRQ		(1 << 1)
/** UART8_RQR_ABRRQ Auto baud rate request **/
#define UART8_RQR_ABRRQ		(1 << 0)

/**@}*/

/** @defgroup uart8_isr ISR Interrupt & status register
@{*/

/** UART8_ISR_TCBGT Transmission complete before guard time completion **/
#define UART8_ISR_TCBGT		(1 << 25)
/** UART8_ISR_TEACK TEACK **/
#define UART8_ISR_TEACK		(1 << 21)
/** UART8_ISR_SBKF SBKF **/
#define UART8_ISR_SBKF		(1 << 18)
/** UART8_ISR_CMF CMF **/
#define UART8_ISR_CMF		(1 << 17)
/** UART8_ISR_BUSY BUSY **/
#define UART8_ISR_BUSY		(1 << 16)
/** UART8_ISR_ABRF ABRF **/
#define UART8_ISR_ABRF		(1 << 15)
/** UART8_ISR_ABRE ABRE **/
#define UART8_ISR_ABRE		(1 << 14)
/** UART8_ISR_EOBF EOBF **/
#define UART8_ISR_EOBF		(1 << 12)
/** UART8_ISR_RTOF RTOF **/
#define UART8_ISR_RTOF		(1 << 11)
/** UART8_ISR_CTS CTS **/
#define UART8_ISR_CTS		(1 << 10)
/** UART8_ISR_CTSIF CTSIF **/
#define UART8_ISR_CTSIF		(1 << 9)
/** UART8_ISR_LBDF LBDF **/
#define UART8_ISR_LBDF		(1 << 8)
/** UART8_ISR_TXE TXE **/
#define UART8_ISR_TXE		(1 << 7)
/** UART8_ISR_TC TC **/
#define UART8_ISR_TC		(1 << 6)
/** UART8_ISR_RXNE RXNE **/
#define UART8_ISR_RXNE		(1 << 5)
/** UART8_ISR_IDLE IDLE **/
#define UART8_ISR_IDLE		(1 << 4)
/** UART8_ISR_ORE ORE **/
#define UART8_ISR_ORE		(1 << 3)
/** UART8_ISR_NF NF **/
#define UART8_ISR_NF		(1 << 2)
/** UART8_ISR_FE FE **/
#define UART8_ISR_FE		(1 << 1)
/** UART8_ISR_PE PE **/
#define UART8_ISR_PE		(1 << 0)

/**@}*/

/** @defgroup uart8_icr ICR Interrupt flag clear register
@{*/

/** UART8_ICR_CMCF Character match clear flag **/
#define UART8_ICR_CMCF		(1 << 17)
/** UART8_ICR_EOBCF End of block clear flag **/
#define UART8_ICR_EOBCF		(1 << 12)
/** UART8_ICR_RTOCF Receiver timeout clear flag **/
#define UART8_ICR_RTOCF		(1 << 11)
/** UART8_ICR_CTSCF CTS clear flag **/
#define UART8_ICR_CTSCF		(1 << 9)
/** UART8_ICR_LBDCF LIN break detection clear flag **/
#define UART8_ICR_LBDCF		(1 << 8)
/** UART8_ICR_TCBGTCF Transmission completed before guard time clear flag **/
#define UART8_ICR_TCBGTCF		(1 << 7)
/** UART8_ICR_TCCF Transmission complete clear flag **/
#define UART8_ICR_TCCF		(1 << 6)
/** UART8_ICR_IDLECF Idle line detected clear flag **/
#define UART8_ICR_IDLECF		(1 << 4)
/** UART8_ICR_ORECF Overrun error clear flag **/
#define UART8_ICR_ORECF		(1 << 3)
/** UART8_ICR_NCF Noise detected clear flag **/
#define UART8_ICR_NCF		(1 << 2)
/** UART8_ICR_FECF Framing error clear flag **/
#define UART8_ICR_FECF		(1 << 1)
/** UART8_ICR_PECF Parity error clear flag **/
#define UART8_ICR_PECF		(1 << 0)

/**@}*/

/** @defgroup uart8_rdr RDR Receive data register
@{*/


#define UART8_RDR_RDR_SHIFT		0
#define UART8_RDR_RDR_MASK		0x1ff
/** @defgroup uart8_rdr_rdr RDR Receive data value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart8_tdr TDR Transmit data register
@{*/


#define UART8_TDR_TDR_SHIFT		0
#define UART8_TDR_TDR_MASK		0x1ff
/** @defgroup uart8_tdr_tdr TDR Transmit data value
@{*/
/**@}*/


/**@}*/

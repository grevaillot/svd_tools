#pragma once 

/* --- UART5: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup uart5_registers Universal synchronous asynchronous receiver       transmitter Register
@{*/

/** UART5_CR1 Control register 1 **/
#define UART5_CR1			MMIO32(UART5_BASE + 0x00)
/** UART5_CR2 Control register 2 **/
#define UART5_CR2			MMIO32(UART5_BASE + 0x04)
/** UART5_CR3 Control register 3 **/
#define UART5_CR3			MMIO32(UART5_BASE + 0x08)
/** UART5_BRR Baud rate register **/
#define UART5_BRR			MMIO32(UART5_BASE + 0x0c)
/** UART5_GTPR Guard time and prescaler register **/
#define UART5_GTPR			MMIO32(UART5_BASE + 0x10)
/** UART5_RTOR Receiver timeout register **/
#define UART5_RTOR			MMIO32(UART5_BASE + 0x14)
/** UART5_RQR Request register **/
#define UART5_RQR			MMIO32(UART5_BASE + 0x18)
/** UART5_ISR Interrupt & status register **/
#define UART5_ISR			MMIO32(UART5_BASE + 0x1c)
/** UART5_ICR Interrupt flag clear register **/
#define UART5_ICR			MMIO32(UART5_BASE + 0x20)
/** UART5_RDR Receive data register **/
#define UART5_RDR			MMIO32(UART5_BASE + 0x24)
/** UART5_TDR Transmit data register **/
#define UART5_TDR			MMIO32(UART5_BASE + 0x28)
/** UART5_PRESC USART prescaler register **/
#define UART5_PRESC			MMIO32(UART5_BASE + 0x2c)

/**@}*/


/** @defgroup uart5_cr1 CR1 Control register 1
@{*/

/** UART5_CR1_RXFFIE RXFFIE **/
#define UART5_CR1_RXFFIE		(1 << 31)
/** UART5_CR1_TXFEIE TXFEIE **/
#define UART5_CR1_TXFEIE		(1 << 30)
/** UART5_CR1_FIFOEN FIFOEN **/
#define UART5_CR1_FIFOEN		(1 << 29)
/** UART5_CR1_M1 M1 **/
#define UART5_CR1_M1		(1 << 28)
/** UART5_CR1_EOBIE End of Block interrupt enable **/
#define UART5_CR1_EOBIE		(1 << 27)
/** UART5_CR1_RTOIE Receiver timeout interrupt enable **/
#define UART5_CR1_RTOIE		(1 << 26)
/** UART5_CR1_DEAT4 Driver Enable assertion time **/
#define UART5_CR1_DEAT4		(1 << 25)
/** UART5_CR1_DEAT3 DEAT3 **/
#define UART5_CR1_DEAT3		(1 << 24)
/** UART5_CR1_DEAT2 DEAT2 **/
#define UART5_CR1_DEAT2		(1 << 23)
/** UART5_CR1_DEAT1 DEAT1 **/
#define UART5_CR1_DEAT1		(1 << 22)
/** UART5_CR1_DEAT0 DEAT0 **/
#define UART5_CR1_DEAT0		(1 << 21)
/** UART5_CR1_DEDT4 Driver Enable de-assertion time **/
#define UART5_CR1_DEDT4		(1 << 20)
/** UART5_CR1_DEDT3 DEDT3 **/
#define UART5_CR1_DEDT3		(1 << 19)
/** UART5_CR1_DEDT2 DEDT2 **/
#define UART5_CR1_DEDT2		(1 << 18)
/** UART5_CR1_DEDT1 DEDT1 **/
#define UART5_CR1_DEDT1		(1 << 17)
/** UART5_CR1_DEDT0 DEDT0 **/
#define UART5_CR1_DEDT0		(1 << 16)
/** UART5_CR1_OVER8 Oversampling mode **/
#define UART5_CR1_OVER8		(1 << 15)
/** UART5_CR1_CMIE Character match interrupt enable **/
#define UART5_CR1_CMIE		(1 << 14)
/** UART5_CR1_MME Mute mode enable **/
#define UART5_CR1_MME		(1 << 13)
/** UART5_CR1_M0 Word length **/
#define UART5_CR1_M0		(1 << 12)
/** UART5_CR1_WAKE Receiver wakeup method **/
#define UART5_CR1_WAKE		(1 << 11)
/** UART5_CR1_PCE Parity control enable **/
#define UART5_CR1_PCE		(1 << 10)
/** UART5_CR1_PS Parity selection **/
#define UART5_CR1_PS		(1 << 9)
/** UART5_CR1_PEIE PE interrupt enable **/
#define UART5_CR1_PEIE		(1 << 8)
/** UART5_CR1_TXEIE interrupt enable **/
#define UART5_CR1_TXEIE		(1 << 7)
/** UART5_CR1_TCIE Transmission complete interrupt enable **/
#define UART5_CR1_TCIE		(1 << 6)
/** UART5_CR1_RXNEIE RXNE interrupt enable **/
#define UART5_CR1_RXNEIE		(1 << 5)
/** UART5_CR1_IDLEIE IDLE interrupt enable **/
#define UART5_CR1_IDLEIE		(1 << 4)
/** UART5_CR1_TE Transmitter enable **/
#define UART5_CR1_TE		(1 << 3)
/** UART5_CR1_RE Receiver enable **/
#define UART5_CR1_RE		(1 << 2)
/** UART5_CR1_UESM USART enable in Stop mode **/
#define UART5_CR1_UESM		(1 << 1)
/** UART5_CR1_UE USART enable **/
#define UART5_CR1_UE		(1 << 0)

/**@}*/

/** @defgroup uart5_cr2 CR2 Control register 2
@{*/


#define UART5_CR2_ADD4_7_SHIFT		28
#define UART5_CR2_ADD4_7_MASK		0x0f
/** @defgroup uart5_cr2_add4_7 ADD47 Address of the USART node
@{*/
/**@}*/


#define UART5_CR2_ADD0_3_SHIFT		24
#define UART5_CR2_ADD0_3_MASK		0x0f
/** @defgroup uart5_cr2_add0_3 ADD03 Address of the USART node
@{*/
/**@}*/

/** UART5_CR2_RTOEN Receiver timeout enable **/
#define UART5_CR2_RTOEN		(1 << 23)
/** UART5_CR2_ABRMOD1 Auto baud rate mode **/
#define UART5_CR2_ABRMOD1		(1 << 22)
/** UART5_CR2_ABRMOD0 ABRMOD0 **/
#define UART5_CR2_ABRMOD0		(1 << 21)
/** UART5_CR2_ABREN Auto baud rate enable **/
#define UART5_CR2_ABREN		(1 << 20)
/** UART5_CR2_MSBFIRST Most significant bit first **/
#define UART5_CR2_MSBFIRST		(1 << 19)
/** UART5_CR2_TAINV Binary data inversion **/
#define UART5_CR2_TAINV		(1 << 18)
/** UART5_CR2_TXINV TX pin active level inversion **/
#define UART5_CR2_TXINV		(1 << 17)
/** UART5_CR2_RXINV RX pin active level inversion **/
#define UART5_CR2_RXINV		(1 << 16)
/** UART5_CR2_SWAP Swap TX/RX pins **/
#define UART5_CR2_SWAP		(1 << 15)
/** UART5_CR2_LINEN LIN mode enable **/
#define UART5_CR2_LINEN		(1 << 14)

#define UART5_CR2_STOP_SHIFT		12
#define UART5_CR2_STOP_MASK		0x03
/** @defgroup uart5_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** UART5_CR2_CLKEN Clock enable **/
#define UART5_CR2_CLKEN		(1 << 11)
/** UART5_CR2_CPOL Clock polarity **/
#define UART5_CR2_CPOL		(1 << 10)
/** UART5_CR2_CPHA Clock phase **/
#define UART5_CR2_CPHA		(1 << 9)
/** UART5_CR2_LBCL Last bit clock pulse **/
#define UART5_CR2_LBCL		(1 << 8)
/** UART5_CR2_LBDIE LIN break detection interrupt enable **/
#define UART5_CR2_LBDIE		(1 << 6)
/** UART5_CR2_LBDL LIN break detection length **/
#define UART5_CR2_LBDL		(1 << 5)
/** UART5_CR2_ADDM7 7-bit Address Detection/4-bit Address Detection **/
#define UART5_CR2_ADDM7		(1 << 4)
/** UART5_CR2_DIS_NSS DIS_NSS **/
#define UART5_CR2_DIS_NSS		(1 << 3)
/** UART5_CR2_SLVEN SLVEN **/
#define UART5_CR2_SLVEN		(1 << 0)

/**@}*/

/** @defgroup uart5_cr3 CR3 Control register 3
@{*/


#define UART5_CR3_TXFTCFG_SHIFT		29
#define UART5_CR3_TXFTCFG_MASK		0x07
/** @defgroup uart5_cr3_txftcfg TXFTCFG TXFTCFG
@{*/
/**@}*/

/** UART5_CR3_RXFTIE RXFTIE **/
#define UART5_CR3_RXFTIE		(1 << 28)

#define UART5_CR3_RXFTCFG_SHIFT		25
#define UART5_CR3_RXFTCFG_MASK		0x07
/** @defgroup uart5_cr3_rxftcfg RXFTCFG RXFTCFG
@{*/
/**@}*/

/** UART5_CR3_TCBGTIE TCBGTIE **/
#define UART5_CR3_TCBGTIE		(1 << 24)
/** UART5_CR3_TXFTIE TXFTIE **/
#define UART5_CR3_TXFTIE		(1 << 23)
/** UART5_CR3_WUFIE Wakeup from Stop mode interrupt enable **/
#define UART5_CR3_WUFIE		(1 << 22)

#define UART5_CR3_WUS_SHIFT		20
#define UART5_CR3_WUS_MASK		0x03
/** @defgroup uart5_cr3_wus WUS Wakeup from Stop mode interrupt flag selection
@{*/
/**@}*/


#define UART5_CR3_SCARCNT_SHIFT		17
#define UART5_CR3_SCARCNT_MASK		0x07
/** @defgroup uart5_cr3_scarcnt SCARCNT Smartcard auto-retry count
@{*/
/**@}*/

/** UART5_CR3_DEP Driver enable polarity selection **/
#define UART5_CR3_DEP		(1 << 15)
/** UART5_CR3_DEM Driver enable mode **/
#define UART5_CR3_DEM		(1 << 14)
/** UART5_CR3_DDRE DMA Disable on Reception Error **/
#define UART5_CR3_DDRE		(1 << 13)
/** UART5_CR3_OVRDIS Overrun Disable **/
#define UART5_CR3_OVRDIS		(1 << 12)
/** UART5_CR3_ONEBIT One sample bit method enable **/
#define UART5_CR3_ONEBIT		(1 << 11)
/** UART5_CR3_CTSIE CTS interrupt enable **/
#define UART5_CR3_CTSIE		(1 << 10)
/** UART5_CR3_CTSE CTS enable **/
#define UART5_CR3_CTSE		(1 << 9)
/** UART5_CR3_RTSE RTS enable **/
#define UART5_CR3_RTSE		(1 << 8)
/** UART5_CR3_DMAT DMA enable transmitter **/
#define UART5_CR3_DMAT		(1 << 7)
/** UART5_CR3_DMAR DMA enable receiver **/
#define UART5_CR3_DMAR		(1 << 6)
/** UART5_CR3_SCEN Smartcard mode enable **/
#define UART5_CR3_SCEN		(1 << 5)
/** UART5_CR3_NACK Smartcard NACK enable **/
#define UART5_CR3_NACK		(1 << 4)
/** UART5_CR3_HDSEL Half-duplex selection **/
#define UART5_CR3_HDSEL		(1 << 3)
/** UART5_CR3_IRLP Ir low-power **/
#define UART5_CR3_IRLP		(1 << 2)
/** UART5_CR3_IREN Ir mode enable **/
#define UART5_CR3_IREN		(1 << 1)
/** UART5_CR3_EIE Error interrupt enable **/
#define UART5_CR3_EIE		(1 << 0)

/**@}*/

/** @defgroup uart5_brr BRR Baud rate register
@{*/


#define UART5_BRR_DIV_Mantissa_SHIFT		4
#define UART5_BRR_DIV_Mantissa_MASK		0xfff
/** @defgroup uart5_brr_div_mantissa DIVMantissa DIV_Mantissa
@{*/
/**@}*/


#define UART5_BRR_DIV_Fraction_SHIFT		0
#define UART5_BRR_DIV_Fraction_MASK		0x0f
/** @defgroup uart5_brr_div_fraction DIVFraction DIV_Fraction
@{*/
/**@}*/


/**@}*/

/** @defgroup uart5_gtpr GTPR Guard time and prescaler register
@{*/


#define UART5_GTPR_GT_SHIFT		8
#define UART5_GTPR_GT_MASK		0xff
/** @defgroup uart5_gtpr_gt GT Guard time value
@{*/
/**@}*/


#define UART5_GTPR_PSC_SHIFT		0
#define UART5_GTPR_PSC_MASK		0xff
/** @defgroup uart5_gtpr_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart5_rtor RTOR Receiver timeout register
@{*/


#define UART5_RTOR_BLEN_SHIFT		24
#define UART5_RTOR_BLEN_MASK		0xff
/** @defgroup uart5_rtor_blen BLEN Block Length
@{*/
/**@}*/


#define UART5_RTOR_RTO_SHIFT		0
#define UART5_RTOR_RTO_MASK		0xffffff
/** @defgroup uart5_rtor_rto RTO Receiver timeout value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart5_rqr RQR Request register
@{*/

/** UART5_RQR_TXFRQ Transmit data flush request **/
#define UART5_RQR_TXFRQ		(1 << 4)
/** UART5_RQR_RXFRQ Receive data flush request **/
#define UART5_RQR_RXFRQ		(1 << 3)
/** UART5_RQR_MMRQ Mute mode request **/
#define UART5_RQR_MMRQ		(1 << 2)
/** UART5_RQR_SBKRQ Send break request **/
#define UART5_RQR_SBKRQ		(1 << 1)
/** UART5_RQR_ABRRQ Auto baud rate request **/
#define UART5_RQR_ABRRQ		(1 << 0)

/**@}*/

/** @defgroup uart5_isr ISR Interrupt & status register
@{*/

/** UART5_ISR_TXFT TXFT **/
#define UART5_ISR_TXFT		(1 << 27)
/** UART5_ISR_RXFT RXFT **/
#define UART5_ISR_RXFT		(1 << 26)
/** UART5_ISR_TCBGT TCBGT **/
#define UART5_ISR_TCBGT		(1 << 25)
/** UART5_ISR_RXFF RXFF **/
#define UART5_ISR_RXFF		(1 << 24)
/** UART5_ISR_TXFE TXFE **/
#define UART5_ISR_TXFE		(1 << 23)
/** UART5_ISR_REACK REACK **/
#define UART5_ISR_REACK		(1 << 22)
/** UART5_ISR_TEACK TEACK **/
#define UART5_ISR_TEACK		(1 << 21)
/** UART5_ISR_WUF WUF **/
#define UART5_ISR_WUF		(1 << 20)
/** UART5_ISR_RWU RWU **/
#define UART5_ISR_RWU		(1 << 19)
/** UART5_ISR_SBKF SBKF **/
#define UART5_ISR_SBKF		(1 << 18)
/** UART5_ISR_CMF CMF **/
#define UART5_ISR_CMF		(1 << 17)
/** UART5_ISR_BUSY BUSY **/
#define UART5_ISR_BUSY		(1 << 16)
/** UART5_ISR_ABRF ABRF **/
#define UART5_ISR_ABRF		(1 << 15)
/** UART5_ISR_ABRE ABRE **/
#define UART5_ISR_ABRE		(1 << 14)
/** UART5_ISR_UDR UDR **/
#define UART5_ISR_UDR		(1 << 13)
/** UART5_ISR_EOBF EOBF **/
#define UART5_ISR_EOBF		(1 << 12)
/** UART5_ISR_RTOF RTOF **/
#define UART5_ISR_RTOF		(1 << 11)
/** UART5_ISR_CTS CTS **/
#define UART5_ISR_CTS		(1 << 10)
/** UART5_ISR_CTSIF CTSIF **/
#define UART5_ISR_CTSIF		(1 << 9)
/** UART5_ISR_LBDF LBDF **/
#define UART5_ISR_LBDF		(1 << 8)
/** UART5_ISR_TXE TXE **/
#define UART5_ISR_TXE		(1 << 7)
/** UART5_ISR_TC TC **/
#define UART5_ISR_TC		(1 << 6)
/** UART5_ISR_RXNE RXNE **/
#define UART5_ISR_RXNE		(1 << 5)
/** UART5_ISR_IDLE IDLE **/
#define UART5_ISR_IDLE		(1 << 4)
/** UART5_ISR_ORE ORE **/
#define UART5_ISR_ORE		(1 << 3)
/** UART5_ISR_NF NF **/
#define UART5_ISR_NF		(1 << 2)
/** UART5_ISR_FE FE **/
#define UART5_ISR_FE		(1 << 1)
/** UART5_ISR_PE PE **/
#define UART5_ISR_PE		(1 << 0)

/**@}*/

/** @defgroup uart5_icr ICR Interrupt flag clear register
@{*/

/** UART5_ICR_WUCF Wakeup from Stop mode clear flag **/
#define UART5_ICR_WUCF		(1 << 20)
/** UART5_ICR_CMCF Character match clear flag **/
#define UART5_ICR_CMCF		(1 << 17)
/** UART5_ICR_UDRCF UDRCF **/
#define UART5_ICR_UDRCF		(1 << 13)
/** UART5_ICR_EOBCF End of block clear flag **/
#define UART5_ICR_EOBCF		(1 << 12)
/** UART5_ICR_RTOCF Receiver timeout clear flag **/
#define UART5_ICR_RTOCF		(1 << 11)
/** UART5_ICR_CTSCF CTS clear flag **/
#define UART5_ICR_CTSCF		(1 << 9)
/** UART5_ICR_LBDCF LIN break detection clear flag **/
#define UART5_ICR_LBDCF		(1 << 8)
/** UART5_ICR_TCBGTCF TCBGTCF **/
#define UART5_ICR_TCBGTCF		(1 << 7)
/** UART5_ICR_TCCF Transmission complete clear flag **/
#define UART5_ICR_TCCF		(1 << 6)
/** UART5_ICR_TXFECF TXFECF **/
#define UART5_ICR_TXFECF		(1 << 5)
/** UART5_ICR_IDLECF Idle line detected clear flag **/
#define UART5_ICR_IDLECF		(1 << 4)
/** UART5_ICR_ORECF Overrun error clear flag **/
#define UART5_ICR_ORECF		(1 << 3)
/** UART5_ICR_NCF Noise detected clear flag **/
#define UART5_ICR_NCF		(1 << 2)
/** UART5_ICR_FECF Framing error clear flag **/
#define UART5_ICR_FECF		(1 << 1)
/** UART5_ICR_PECF Parity error clear flag **/
#define UART5_ICR_PECF		(1 << 0)

/**@}*/

/** @defgroup uart5_rdr RDR Receive data register
@{*/


#define UART5_RDR_RDR_SHIFT		0
#define UART5_RDR_RDR_MASK		0x1ff
/** @defgroup uart5_rdr_rdr RDR Receive data value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart5_tdr TDR Transmit data register
@{*/


#define UART5_TDR_TDR_SHIFT		0
#define UART5_TDR_TDR_MASK		0x1ff
/** @defgroup uart5_tdr_tdr TDR Transmit data value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart5_presc PRESC USART prescaler register
@{*/


#define UART5_PRESC_PRESCALER_SHIFT		0
#define UART5_PRESC_PRESCALER_MASK		0x0f
/** @defgroup uart5_presc_prescaler PRESCALER PRESCALER
@{*/
/**@}*/


/**@}*/

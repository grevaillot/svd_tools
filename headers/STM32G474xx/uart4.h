#pragma once 

/* --- UART4: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup uart4_registers Universal synchronous asynchronous receiver       transmitter Register
@{*/

/** UART4_CR1 Control register 1 **/
#define UART4_CR1			MMIO32(UART4_BASE + 0x00)
/** UART4_CR2 Control register 2 **/
#define UART4_CR2			MMIO32(UART4_BASE + 0x04)
/** UART4_CR3 Control register 3 **/
#define UART4_CR3			MMIO32(UART4_BASE + 0x08)
/** UART4_BRR Baud rate register **/
#define UART4_BRR			MMIO32(UART4_BASE + 0x0c)
/** UART4_GTPR Guard time and prescaler register **/
#define UART4_GTPR			MMIO32(UART4_BASE + 0x10)
/** UART4_RTOR Receiver timeout register **/
#define UART4_RTOR			MMIO32(UART4_BASE + 0x14)
/** UART4_RQR Request register **/
#define UART4_RQR			MMIO32(UART4_BASE + 0x18)
/** UART4_ISR Interrupt & status register **/
#define UART4_ISR			MMIO32(UART4_BASE + 0x1c)
/** UART4_ICR Interrupt flag clear register **/
#define UART4_ICR			MMIO32(UART4_BASE + 0x20)
/** UART4_RDR Receive data register **/
#define UART4_RDR			MMIO32(UART4_BASE + 0x24)
/** UART4_TDR Transmit data register **/
#define UART4_TDR			MMIO32(UART4_BASE + 0x28)
/** UART4_PRESC USART prescaler register **/
#define UART4_PRESC			MMIO32(UART4_BASE + 0x2c)

/**@}*/


/** @defgroup uart4_cr1 CR1 Control register 1
@{*/

/** UART4_CR1_RXFFIE RXFFIE **/
#define UART4_CR1_RXFFIE		(1 << 31)
/** UART4_CR1_TXFEIE TXFEIE **/
#define UART4_CR1_TXFEIE		(1 << 30)
/** UART4_CR1_FIFOEN FIFOEN **/
#define UART4_CR1_FIFOEN		(1 << 29)
/** UART4_CR1_M1 M1 **/
#define UART4_CR1_M1		(1 << 28)
/** UART4_CR1_EOBIE End of Block interrupt enable **/
#define UART4_CR1_EOBIE		(1 << 27)
/** UART4_CR1_RTOIE Receiver timeout interrupt enable **/
#define UART4_CR1_RTOIE		(1 << 26)
/** UART4_CR1_DEAT4 Driver Enable assertion time **/
#define UART4_CR1_DEAT4		(1 << 25)
/** UART4_CR1_DEAT3 DEAT3 **/
#define UART4_CR1_DEAT3		(1 << 24)
/** UART4_CR1_DEAT2 DEAT2 **/
#define UART4_CR1_DEAT2		(1 << 23)
/** UART4_CR1_DEAT1 DEAT1 **/
#define UART4_CR1_DEAT1		(1 << 22)
/** UART4_CR1_DEAT0 DEAT0 **/
#define UART4_CR1_DEAT0		(1 << 21)
/** UART4_CR1_DEDT4 Driver Enable de-assertion time **/
#define UART4_CR1_DEDT4		(1 << 20)
/** UART4_CR1_DEDT3 DEDT3 **/
#define UART4_CR1_DEDT3		(1 << 19)
/** UART4_CR1_DEDT2 DEDT2 **/
#define UART4_CR1_DEDT2		(1 << 18)
/** UART4_CR1_DEDT1 DEDT1 **/
#define UART4_CR1_DEDT1		(1 << 17)
/** UART4_CR1_DEDT0 DEDT0 **/
#define UART4_CR1_DEDT0		(1 << 16)
/** UART4_CR1_OVER8 Oversampling mode **/
#define UART4_CR1_OVER8		(1 << 15)
/** UART4_CR1_CMIE Character match interrupt enable **/
#define UART4_CR1_CMIE		(1 << 14)
/** UART4_CR1_MME Mute mode enable **/
#define UART4_CR1_MME		(1 << 13)
/** UART4_CR1_M0 Word length **/
#define UART4_CR1_M0		(1 << 12)
/** UART4_CR1_WAKE Receiver wakeup method **/
#define UART4_CR1_WAKE		(1 << 11)
/** UART4_CR1_PCE Parity control enable **/
#define UART4_CR1_PCE		(1 << 10)
/** UART4_CR1_PS Parity selection **/
#define UART4_CR1_PS		(1 << 9)
/** UART4_CR1_PEIE PE interrupt enable **/
#define UART4_CR1_PEIE		(1 << 8)
/** UART4_CR1_TXEIE interrupt enable **/
#define UART4_CR1_TXEIE		(1 << 7)
/** UART4_CR1_TCIE Transmission complete interrupt enable **/
#define UART4_CR1_TCIE		(1 << 6)
/** UART4_CR1_RXNEIE RXNE interrupt enable **/
#define UART4_CR1_RXNEIE		(1 << 5)
/** UART4_CR1_IDLEIE IDLE interrupt enable **/
#define UART4_CR1_IDLEIE		(1 << 4)
/** UART4_CR1_TE Transmitter enable **/
#define UART4_CR1_TE		(1 << 3)
/** UART4_CR1_RE Receiver enable **/
#define UART4_CR1_RE		(1 << 2)
/** UART4_CR1_UESM USART enable in Stop mode **/
#define UART4_CR1_UESM		(1 << 1)
/** UART4_CR1_UE USART enable **/
#define UART4_CR1_UE		(1 << 0)

/**@}*/

/** @defgroup uart4_cr2 CR2 Control register 2
@{*/


#define UART4_CR2_ADD4_7_SHIFT		28
#define UART4_CR2_ADD4_7_MASK		0x0f
/** @defgroup uart4_cr2_add4_7 ADD47 Address of the USART node
@{*/
/**@}*/


#define UART4_CR2_ADD0_3_SHIFT		24
#define UART4_CR2_ADD0_3_MASK		0x0f
/** @defgroup uart4_cr2_add0_3 ADD03 Address of the USART node
@{*/
/**@}*/

/** UART4_CR2_RTOEN Receiver timeout enable **/
#define UART4_CR2_RTOEN		(1 << 23)
/** UART4_CR2_ABRMOD1 Auto baud rate mode **/
#define UART4_CR2_ABRMOD1		(1 << 22)
/** UART4_CR2_ABRMOD0 ABRMOD0 **/
#define UART4_CR2_ABRMOD0		(1 << 21)
/** UART4_CR2_ABREN Auto baud rate enable **/
#define UART4_CR2_ABREN		(1 << 20)
/** UART4_CR2_MSBFIRST Most significant bit first **/
#define UART4_CR2_MSBFIRST		(1 << 19)
/** UART4_CR2_TAINV Binary data inversion **/
#define UART4_CR2_TAINV		(1 << 18)
/** UART4_CR2_TXINV TX pin active level inversion **/
#define UART4_CR2_TXINV		(1 << 17)
/** UART4_CR2_RXINV RX pin active level inversion **/
#define UART4_CR2_RXINV		(1 << 16)
/** UART4_CR2_SWAP Swap TX/RX pins **/
#define UART4_CR2_SWAP		(1 << 15)
/** UART4_CR2_LINEN LIN mode enable **/
#define UART4_CR2_LINEN		(1 << 14)

#define UART4_CR2_STOP_SHIFT		12
#define UART4_CR2_STOP_MASK		0x03
/** @defgroup uart4_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** UART4_CR2_CLKEN Clock enable **/
#define UART4_CR2_CLKEN		(1 << 11)
/** UART4_CR2_CPOL Clock polarity **/
#define UART4_CR2_CPOL		(1 << 10)
/** UART4_CR2_CPHA Clock phase **/
#define UART4_CR2_CPHA		(1 << 9)
/** UART4_CR2_LBCL Last bit clock pulse **/
#define UART4_CR2_LBCL		(1 << 8)
/** UART4_CR2_LBDIE LIN break detection interrupt enable **/
#define UART4_CR2_LBDIE		(1 << 6)
/** UART4_CR2_LBDL LIN break detection length **/
#define UART4_CR2_LBDL		(1 << 5)
/** UART4_CR2_ADDM7 7-bit Address Detection/4-bit Address Detection **/
#define UART4_CR2_ADDM7		(1 << 4)
/** UART4_CR2_DIS_NSS DIS_NSS **/
#define UART4_CR2_DIS_NSS		(1 << 3)
/** UART4_CR2_SLVEN SLVEN **/
#define UART4_CR2_SLVEN		(1 << 0)

/**@}*/

/** @defgroup uart4_cr3 CR3 Control register 3
@{*/


#define UART4_CR3_TXFTCFG_SHIFT		29
#define UART4_CR3_TXFTCFG_MASK		0x07
/** @defgroup uart4_cr3_txftcfg TXFTCFG TXFTCFG
@{*/
/**@}*/

/** UART4_CR3_RXFTIE RXFTIE **/
#define UART4_CR3_RXFTIE		(1 << 28)

#define UART4_CR3_RXFTCFG_SHIFT		25
#define UART4_CR3_RXFTCFG_MASK		0x07
/** @defgroup uart4_cr3_rxftcfg RXFTCFG RXFTCFG
@{*/
/**@}*/

/** UART4_CR3_TCBGTIE TCBGTIE **/
#define UART4_CR3_TCBGTIE		(1 << 24)
/** UART4_CR3_TXFTIE TXFTIE **/
#define UART4_CR3_TXFTIE		(1 << 23)
/** UART4_CR3_WUFIE Wakeup from Stop mode interrupt enable **/
#define UART4_CR3_WUFIE		(1 << 22)

#define UART4_CR3_WUS_SHIFT		20
#define UART4_CR3_WUS_MASK		0x03
/** @defgroup uart4_cr3_wus WUS Wakeup from Stop mode interrupt flag selection
@{*/
/**@}*/


#define UART4_CR3_SCARCNT_SHIFT		17
#define UART4_CR3_SCARCNT_MASK		0x07
/** @defgroup uart4_cr3_scarcnt SCARCNT Smartcard auto-retry count
@{*/
/**@}*/

/** UART4_CR3_DEP Driver enable polarity selection **/
#define UART4_CR3_DEP		(1 << 15)
/** UART4_CR3_DEM Driver enable mode **/
#define UART4_CR3_DEM		(1 << 14)
/** UART4_CR3_DDRE DMA Disable on Reception Error **/
#define UART4_CR3_DDRE		(1 << 13)
/** UART4_CR3_OVRDIS Overrun Disable **/
#define UART4_CR3_OVRDIS		(1 << 12)
/** UART4_CR3_ONEBIT One sample bit method enable **/
#define UART4_CR3_ONEBIT		(1 << 11)
/** UART4_CR3_CTSIE CTS interrupt enable **/
#define UART4_CR3_CTSIE		(1 << 10)
/** UART4_CR3_CTSE CTS enable **/
#define UART4_CR3_CTSE		(1 << 9)
/** UART4_CR3_RTSE RTS enable **/
#define UART4_CR3_RTSE		(1 << 8)
/** UART4_CR3_DMAT DMA enable transmitter **/
#define UART4_CR3_DMAT		(1 << 7)
/** UART4_CR3_DMAR DMA enable receiver **/
#define UART4_CR3_DMAR		(1 << 6)
/** UART4_CR3_SCEN Smartcard mode enable **/
#define UART4_CR3_SCEN		(1 << 5)
/** UART4_CR3_NACK Smartcard NACK enable **/
#define UART4_CR3_NACK		(1 << 4)
/** UART4_CR3_HDSEL Half-duplex selection **/
#define UART4_CR3_HDSEL		(1 << 3)
/** UART4_CR3_IRLP Ir low-power **/
#define UART4_CR3_IRLP		(1 << 2)
/** UART4_CR3_IREN Ir mode enable **/
#define UART4_CR3_IREN		(1 << 1)
/** UART4_CR3_EIE Error interrupt enable **/
#define UART4_CR3_EIE		(1 << 0)

/**@}*/

/** @defgroup uart4_brr BRR Baud rate register
@{*/


#define UART4_BRR_DIV_Mantissa_SHIFT		4
#define UART4_BRR_DIV_Mantissa_MASK		0xfff
/** @defgroup uart4_brr_div_mantissa DIVMantissa DIV_Mantissa
@{*/
/**@}*/


#define UART4_BRR_DIV_Fraction_SHIFT		0
#define UART4_BRR_DIV_Fraction_MASK		0x0f
/** @defgroup uart4_brr_div_fraction DIVFraction DIV_Fraction
@{*/
/**@}*/


/**@}*/

/** @defgroup uart4_gtpr GTPR Guard time and prescaler register
@{*/


#define UART4_GTPR_GT_SHIFT		8
#define UART4_GTPR_GT_MASK		0xff
/** @defgroup uart4_gtpr_gt GT Guard time value
@{*/
/**@}*/


#define UART4_GTPR_PSC_SHIFT		0
#define UART4_GTPR_PSC_MASK		0xff
/** @defgroup uart4_gtpr_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart4_rtor RTOR Receiver timeout register
@{*/


#define UART4_RTOR_BLEN_SHIFT		24
#define UART4_RTOR_BLEN_MASK		0xff
/** @defgroup uart4_rtor_blen BLEN Block Length
@{*/
/**@}*/


#define UART4_RTOR_RTO_SHIFT		0
#define UART4_RTOR_RTO_MASK		0xffffff
/** @defgroup uart4_rtor_rto RTO Receiver timeout value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart4_rqr RQR Request register
@{*/

/** UART4_RQR_TXFRQ Transmit data flush request **/
#define UART4_RQR_TXFRQ		(1 << 4)
/** UART4_RQR_RXFRQ Receive data flush request **/
#define UART4_RQR_RXFRQ		(1 << 3)
/** UART4_RQR_MMRQ Mute mode request **/
#define UART4_RQR_MMRQ		(1 << 2)
/** UART4_RQR_SBKRQ Send break request **/
#define UART4_RQR_SBKRQ		(1 << 1)
/** UART4_RQR_ABRRQ Auto baud rate request **/
#define UART4_RQR_ABRRQ		(1 << 0)

/**@}*/

/** @defgroup uart4_isr ISR Interrupt & status register
@{*/

/** UART4_ISR_TXFT TXFT **/
#define UART4_ISR_TXFT		(1 << 27)
/** UART4_ISR_RXFT RXFT **/
#define UART4_ISR_RXFT		(1 << 26)
/** UART4_ISR_TCBGT TCBGT **/
#define UART4_ISR_TCBGT		(1 << 25)
/** UART4_ISR_RXFF RXFF **/
#define UART4_ISR_RXFF		(1 << 24)
/** UART4_ISR_TXFE TXFE **/
#define UART4_ISR_TXFE		(1 << 23)
/** UART4_ISR_REACK REACK **/
#define UART4_ISR_REACK		(1 << 22)
/** UART4_ISR_TEACK TEACK **/
#define UART4_ISR_TEACK		(1 << 21)
/** UART4_ISR_WUF WUF **/
#define UART4_ISR_WUF		(1 << 20)
/** UART4_ISR_RWU RWU **/
#define UART4_ISR_RWU		(1 << 19)
/** UART4_ISR_SBKF SBKF **/
#define UART4_ISR_SBKF		(1 << 18)
/** UART4_ISR_CMF CMF **/
#define UART4_ISR_CMF		(1 << 17)
/** UART4_ISR_BUSY BUSY **/
#define UART4_ISR_BUSY		(1 << 16)
/** UART4_ISR_ABRF ABRF **/
#define UART4_ISR_ABRF		(1 << 15)
/** UART4_ISR_ABRE ABRE **/
#define UART4_ISR_ABRE		(1 << 14)
/** UART4_ISR_UDR UDR **/
#define UART4_ISR_UDR		(1 << 13)
/** UART4_ISR_EOBF EOBF **/
#define UART4_ISR_EOBF		(1 << 12)
/** UART4_ISR_RTOF RTOF **/
#define UART4_ISR_RTOF		(1 << 11)
/** UART4_ISR_CTS CTS **/
#define UART4_ISR_CTS		(1 << 10)
/** UART4_ISR_CTSIF CTSIF **/
#define UART4_ISR_CTSIF		(1 << 9)
/** UART4_ISR_LBDF LBDF **/
#define UART4_ISR_LBDF		(1 << 8)
/** UART4_ISR_TXE TXE **/
#define UART4_ISR_TXE		(1 << 7)
/** UART4_ISR_TC TC **/
#define UART4_ISR_TC		(1 << 6)
/** UART4_ISR_RXNE RXNE **/
#define UART4_ISR_RXNE		(1 << 5)
/** UART4_ISR_IDLE IDLE **/
#define UART4_ISR_IDLE		(1 << 4)
/** UART4_ISR_ORE ORE **/
#define UART4_ISR_ORE		(1 << 3)
/** UART4_ISR_NF NF **/
#define UART4_ISR_NF		(1 << 2)
/** UART4_ISR_FE FE **/
#define UART4_ISR_FE		(1 << 1)
/** UART4_ISR_PE PE **/
#define UART4_ISR_PE		(1 << 0)

/**@}*/

/** @defgroup uart4_icr ICR Interrupt flag clear register
@{*/

/** UART4_ICR_WUCF Wakeup from Stop mode clear flag **/
#define UART4_ICR_WUCF		(1 << 20)
/** UART4_ICR_CMCF Character match clear flag **/
#define UART4_ICR_CMCF		(1 << 17)
/** UART4_ICR_UDRCF UDRCF **/
#define UART4_ICR_UDRCF		(1 << 13)
/** UART4_ICR_EOBCF End of block clear flag **/
#define UART4_ICR_EOBCF		(1 << 12)
/** UART4_ICR_RTOCF Receiver timeout clear flag **/
#define UART4_ICR_RTOCF		(1 << 11)
/** UART4_ICR_CTSCF CTS clear flag **/
#define UART4_ICR_CTSCF		(1 << 9)
/** UART4_ICR_LBDCF LIN break detection clear flag **/
#define UART4_ICR_LBDCF		(1 << 8)
/** UART4_ICR_TCBGTCF TCBGTCF **/
#define UART4_ICR_TCBGTCF		(1 << 7)
/** UART4_ICR_TCCF Transmission complete clear flag **/
#define UART4_ICR_TCCF		(1 << 6)
/** UART4_ICR_TXFECF TXFECF **/
#define UART4_ICR_TXFECF		(1 << 5)
/** UART4_ICR_IDLECF Idle line detected clear flag **/
#define UART4_ICR_IDLECF		(1 << 4)
/** UART4_ICR_ORECF Overrun error clear flag **/
#define UART4_ICR_ORECF		(1 << 3)
/** UART4_ICR_NCF Noise detected clear flag **/
#define UART4_ICR_NCF		(1 << 2)
/** UART4_ICR_FECF Framing error clear flag **/
#define UART4_ICR_FECF		(1 << 1)
/** UART4_ICR_PECF Parity error clear flag **/
#define UART4_ICR_PECF		(1 << 0)

/**@}*/

/** @defgroup uart4_rdr RDR Receive data register
@{*/


#define UART4_RDR_RDR_SHIFT		0
#define UART4_RDR_RDR_MASK		0x1ff
/** @defgroup uart4_rdr_rdr RDR Receive data value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart4_tdr TDR Transmit data register
@{*/


#define UART4_TDR_TDR_SHIFT		0
#define UART4_TDR_TDR_MASK		0x1ff
/** @defgroup uart4_tdr_tdr TDR Transmit data value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart4_presc PRESC USART prescaler register
@{*/


#define UART4_PRESC_PRESCALER_SHIFT		0
#define UART4_PRESC_PRESCALER_MASK		0x0f
/** @defgroup uart4_presc_prescaler PRESCALER PRESCALER
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- USART3: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup usart3_registers Universal synchronous asynchronous receiver
      transmitter Register
@{*/

/** USART3_CR1 Control register 1 **/
#define USART3_CR1			MMIO32(USART3_BASE + 0x00)
/** USART3_CR2 Control register 2 **/
#define USART3_CR2			MMIO32(USART3_BASE + 0x04)
/** USART3_CR3 Control register 3 **/
#define USART3_CR3			MMIO32(USART3_BASE + 0x08)
/** USART3_BRR Baud rate register **/
#define USART3_BRR			MMIO32(USART3_BASE + 0x0c)
/** USART3_GTPR Guard time and prescaler register **/
#define USART3_GTPR			MMIO32(USART3_BASE + 0x10)
/** USART3_RTOR Receiver timeout register **/
#define USART3_RTOR			MMIO32(USART3_BASE + 0x14)
/** USART3_RQR Request register **/
#define USART3_RQR			MMIO32(USART3_BASE + 0x18)
/** USART3_ISR Interrupt & status register **/
#define USART3_ISR			MMIO32(USART3_BASE + 0x1c)
/** USART3_ICR Interrupt flag clear register **/
#define USART3_ICR			MMIO32(USART3_BASE + 0x20)
/** USART3_RDR Receive data register **/
#define USART3_RDR			MMIO32(USART3_BASE + 0x24)
/** USART3_TDR Transmit data register **/
#define USART3_TDR			MMIO32(USART3_BASE + 0x28)
/** USART3_PRESC USART prescaler register **/
#define USART3_PRESC			MMIO32(USART3_BASE + 0x2c)

/**@}*/


/** @defgroup usart3_cr1 CR1 Control register 1
@{*/

/** USART3_CR1_RXFFIE RXFIFO Full interrupt enable **/
#define USART3_CR1_RXFFIE		(1 << 31)
/** USART3_CR1_TXFEIE TXFIFO empty interrupt enable **/
#define USART3_CR1_TXFEIE		(1 << 30)
/** USART3_CR1_FIFOEN FIFO mode enable **/
#define USART3_CR1_FIFOEN		(1 << 29)
/** USART3_CR1_M1 Word length **/
#define USART3_CR1_M1		(1 << 28)
/** USART3_CR1_EOBIE End of Block interrupt enable **/
#define USART3_CR1_EOBIE		(1 << 27)
/** USART3_CR1_RTOIE Receiver timeout interrupt enable **/
#define USART3_CR1_RTOIE		(1 << 26)
/** USART3_CR1_DEAT4 Driver Enable assertion time **/
#define USART3_CR1_DEAT4		(1 << 25)
/** USART3_CR1_DEAT3 DEAT3 **/
#define USART3_CR1_DEAT3		(1 << 24)
/** USART3_CR1_DEAT2 DEAT2 **/
#define USART3_CR1_DEAT2		(1 << 23)
/** USART3_CR1_DEAT1 DEAT1 **/
#define USART3_CR1_DEAT1		(1 << 22)
/** USART3_CR1_DEAT0 DEAT0 **/
#define USART3_CR1_DEAT0		(1 << 21)
/** USART3_CR1_DEDT4 Driver Enable de-assertion time **/
#define USART3_CR1_DEDT4		(1 << 20)
/** USART3_CR1_DEDT3 DEDT3 **/
#define USART3_CR1_DEDT3		(1 << 19)
/** USART3_CR1_DEDT2 DEDT2 **/
#define USART3_CR1_DEDT2		(1 << 18)
/** USART3_CR1_DEDT1 DEDT1 **/
#define USART3_CR1_DEDT1		(1 << 17)
/** USART3_CR1_DEDT0 DEDT0 **/
#define USART3_CR1_DEDT0		(1 << 16)
/** USART3_CR1_OVER8 Oversampling mode **/
#define USART3_CR1_OVER8		(1 << 15)
/** USART3_CR1_CMIE Character match interrupt enable **/
#define USART3_CR1_CMIE		(1 << 14)
/** USART3_CR1_MME Mute mode enable **/
#define USART3_CR1_MME		(1 << 13)
/** USART3_CR1_M0 Word length **/
#define USART3_CR1_M0		(1 << 12)
/** USART3_CR1_WAKE Receiver wakeup method **/
#define USART3_CR1_WAKE		(1 << 11)
/** USART3_CR1_PCE Parity control enable **/
#define USART3_CR1_PCE		(1 << 10)
/** USART3_CR1_PS Parity selection **/
#define USART3_CR1_PS		(1 << 9)
/** USART3_CR1_PEIE PE interrupt enable **/
#define USART3_CR1_PEIE		(1 << 8)
/** USART3_CR1_TXEIE interrupt enable **/
#define USART3_CR1_TXEIE		(1 << 7)
/** USART3_CR1_TCIE Transmission complete interrupt enable **/
#define USART3_CR1_TCIE		(1 << 6)
/** USART3_CR1_RXNEIE RXNE interrupt enable **/
#define USART3_CR1_RXNEIE		(1 << 5)
/** USART3_CR1_IDLEIE IDLE interrupt enable **/
#define USART3_CR1_IDLEIE		(1 << 4)
/** USART3_CR1_TE Transmitter enable **/
#define USART3_CR1_TE		(1 << 3)
/** USART3_CR1_RE Receiver enable **/
#define USART3_CR1_RE		(1 << 2)
/** USART3_CR1_UESM USART enable in Stop mode **/
#define USART3_CR1_UESM		(1 << 1)
/** USART3_CR1_UE USART enable **/
#define USART3_CR1_UE		(1 << 0)

/**@}*/

/** @defgroup usart3_cr2 CR2 Control register 2
@{*/


#define USART3_CR2_ADD4_7_SHIFT		28
#define USART3_CR2_ADD4_7_MASK		0x0f
/** @defgroup usart3_cr2_add4_7 ADD47 Address of the USART node
@{*/
/**@}*/


#define USART3_CR2_ADD0_3_SHIFT		24
#define USART3_CR2_ADD0_3_MASK		0x0f
/** @defgroup usart3_cr2_add0_3 ADD03 Address of the USART node
@{*/
/**@}*/

/** USART3_CR2_RTOEN Receiver timeout enable **/
#define USART3_CR2_RTOEN		(1 << 23)
/** USART3_CR2_ABRMOD1 Auto baud rate mode **/
#define USART3_CR2_ABRMOD1		(1 << 22)
/** USART3_CR2_ABRMOD0 ABRMOD0 **/
#define USART3_CR2_ABRMOD0		(1 << 21)
/** USART3_CR2_ABREN Auto baud rate enable **/
#define USART3_CR2_ABREN		(1 << 20)
/** USART3_CR2_MSBFIRST Most significant bit first **/
#define USART3_CR2_MSBFIRST		(1 << 19)
/** USART3_CR2_TAINV Binary data inversion **/
#define USART3_CR2_TAINV		(1 << 18)
/** USART3_CR2_TXINV TX pin active level inversion **/
#define USART3_CR2_TXINV		(1 << 17)
/** USART3_CR2_RXINV RX pin active level inversion **/
#define USART3_CR2_RXINV		(1 << 16)
/** USART3_CR2_SWAP Swap TX/RX pins **/
#define USART3_CR2_SWAP		(1 << 15)
/** USART3_CR2_LINEN LIN mode enable **/
#define USART3_CR2_LINEN		(1 << 14)

#define USART3_CR2_STOP_SHIFT		12
#define USART3_CR2_STOP_MASK		0x03
/** @defgroup usart3_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** USART3_CR2_CLKEN Clock enable **/
#define USART3_CR2_CLKEN		(1 << 11)
/** USART3_CR2_CPOL Clock polarity **/
#define USART3_CR2_CPOL		(1 << 10)
/** USART3_CR2_CPHA Clock phase **/
#define USART3_CR2_CPHA		(1 << 9)
/** USART3_CR2_LBCL Last bit clock pulse **/
#define USART3_CR2_LBCL		(1 << 8)
/** USART3_CR2_LBDIE LIN break detection interrupt enable **/
#define USART3_CR2_LBDIE		(1 << 6)
/** USART3_CR2_LBDL LIN break detection length **/
#define USART3_CR2_LBDL		(1 << 5)
/** USART3_CR2_ADDM7 7-bit Address Detection/4-bit Address Detection **/
#define USART3_CR2_ADDM7		(1 << 4)
/** USART3_CR2_DIS_NSS When the DSI_NSS bit is set, the NSS pin input is ignored **/
#define USART3_CR2_DIS_NSS		(1 << 3)
/** USART3_CR2_SLVEN Synchronous Slave mode enable **/
#define USART3_CR2_SLVEN		(1 << 0)

/**@}*/

/** @defgroup usart3_cr3 CR3 Control register 3
@{*/


#define USART3_CR3_TXFTCFG_SHIFT		29
#define USART3_CR3_TXFTCFG_MASK		0x07
/** @defgroup usart3_cr3_txftcfg TXFTCFG TXFIFO threshold configuration
@{*/
/**@}*/

/** USART3_CR3_RXFTIE RXFIFO threshold interrupt enable **/
#define USART3_CR3_RXFTIE		(1 << 28)

#define USART3_CR3_RXFTCFG_SHIFT		25
#define USART3_CR3_RXFTCFG_MASK		0x07
/** @defgroup usart3_cr3_rxftcfg RXFTCFG Receive FIFO threshold configuration
@{*/
/**@}*/

/** USART3_CR3_TCBGTIE Transmission Complete before guard time, interrupt enable **/
#define USART3_CR3_TCBGTIE		(1 << 24)
/** USART3_CR3_TXFTIE TXFIFO threshold interrupt enable **/
#define USART3_CR3_TXFTIE		(1 << 23)
/** USART3_CR3_WUFIE Wakeup from Stop mode interrupt enable **/
#define USART3_CR3_WUFIE		(1 << 22)

#define USART3_CR3_WUS_SHIFT		20
#define USART3_CR3_WUS_MASK		0x03
/** @defgroup usart3_cr3_wus WUS Wakeup from Stop mode interrupt flag selection
@{*/
/**@}*/


#define USART3_CR3_SCARCNT_SHIFT		17
#define USART3_CR3_SCARCNT_MASK		0x07
/** @defgroup usart3_cr3_scarcnt SCARCNT Smartcard auto-retry count
@{*/
/**@}*/

/** USART3_CR3_DEP Driver enable polarity selection **/
#define USART3_CR3_DEP		(1 << 15)
/** USART3_CR3_DEM Driver enable mode **/
#define USART3_CR3_DEM		(1 << 14)
/** USART3_CR3_DDRE DMA Disable on Reception Error **/
#define USART3_CR3_DDRE		(1 << 13)
/** USART3_CR3_OVRDIS Overrun Disable **/
#define USART3_CR3_OVRDIS		(1 << 12)
/** USART3_CR3_ONEBIT One sample bit method enable **/
#define USART3_CR3_ONEBIT		(1 << 11)
/** USART3_CR3_CTSIE CTS interrupt enable **/
#define USART3_CR3_CTSIE		(1 << 10)
/** USART3_CR3_CTSE CTS enable **/
#define USART3_CR3_CTSE		(1 << 9)
/** USART3_CR3_RTSE RTS enable **/
#define USART3_CR3_RTSE		(1 << 8)
/** USART3_CR3_DMAT DMA enable transmitter **/
#define USART3_CR3_DMAT		(1 << 7)
/** USART3_CR3_DMAR DMA enable receiver **/
#define USART3_CR3_DMAR		(1 << 6)
/** USART3_CR3_SCEN Smartcard mode enable **/
#define USART3_CR3_SCEN		(1 << 5)
/** USART3_CR3_NACK Smartcard NACK enable **/
#define USART3_CR3_NACK		(1 << 4)
/** USART3_CR3_HDSEL Half-duplex selection **/
#define USART3_CR3_HDSEL		(1 << 3)
/** USART3_CR3_IRLP Ir low-power **/
#define USART3_CR3_IRLP		(1 << 2)
/** USART3_CR3_IREN Ir mode enable **/
#define USART3_CR3_IREN		(1 << 1)
/** USART3_CR3_EIE Error interrupt enable **/
#define USART3_CR3_EIE		(1 << 0)

/**@}*/

/** @defgroup usart3_brr BRR Baud rate register
@{*/


#define USART3_BRR_BRR_4_15_SHIFT		4
#define USART3_BRR_BRR_4_15_MASK		0xfff
/** @defgroup usart3_brr_brr_4_15 BRR415 DIV_Mantissa
@{*/
/**@}*/


#define USART3_BRR_BRR_0_3_SHIFT		0
#define USART3_BRR_BRR_0_3_MASK		0x0f
/** @defgroup usart3_brr_brr_0_3 BRR03 DIV_Fraction
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_gtpr GTPR Guard time and prescaler register
@{*/


#define USART3_GTPR_GT_SHIFT		8
#define USART3_GTPR_GT_MASK		0xff
/** @defgroup usart3_gtpr_gt GT Guard time value
@{*/
/**@}*/


#define USART3_GTPR_PSC_SHIFT		0
#define USART3_GTPR_PSC_MASK		0xff
/** @defgroup usart3_gtpr_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_rtor RTOR Receiver timeout register
@{*/


#define USART3_RTOR_BLEN_SHIFT		24
#define USART3_RTOR_BLEN_MASK		0xff
/** @defgroup usart3_rtor_blen BLEN Block Length
@{*/
/**@}*/


#define USART3_RTOR_RTO_SHIFT		0
#define USART3_RTOR_RTO_MASK		0xffffff
/** @defgroup usart3_rtor_rto RTO Receiver timeout value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_rqr RQR Request register
@{*/

/** USART3_RQR_TXFRQ Transmit data flush request **/
#define USART3_RQR_TXFRQ		(1 << 4)
/** USART3_RQR_RXFRQ Receive data flush request **/
#define USART3_RQR_RXFRQ		(1 << 3)
/** USART3_RQR_MMRQ Mute mode request **/
#define USART3_RQR_MMRQ		(1 << 2)
/** USART3_RQR_SBKRQ Send break request **/
#define USART3_RQR_SBKRQ		(1 << 1)
/** USART3_RQR_ABRRQ Auto baud rate request **/
#define USART3_RQR_ABRRQ		(1 << 0)

/**@}*/

/** @defgroup usart3_isr ISR Interrupt & status register
@{*/

/** USART3_ISR_TXFT TXFIFO threshold flag **/
#define USART3_ISR_TXFT		(1 << 27)
/** USART3_ISR_RXFT RXFIFO threshold flag **/
#define USART3_ISR_RXFT		(1 << 26)
/** USART3_ISR_TCBGT Transmission complete before guard time flag **/
#define USART3_ISR_TCBGT		(1 << 25)
/** USART3_ISR_RXFF RXFIFO Full **/
#define USART3_ISR_RXFF		(1 << 24)
/** USART3_ISR_TXFE TXFIFO Empty **/
#define USART3_ISR_TXFE		(1 << 23)
/** USART3_ISR_REACK REACK **/
#define USART3_ISR_REACK		(1 << 22)
/** USART3_ISR_TEACK TEACK **/
#define USART3_ISR_TEACK		(1 << 21)
/** USART3_ISR_WUF WUF **/
#define USART3_ISR_WUF		(1 << 20)
/** USART3_ISR_RWU RWU **/
#define USART3_ISR_RWU		(1 << 19)
/** USART3_ISR_SBKF SBKF **/
#define USART3_ISR_SBKF		(1 << 18)
/** USART3_ISR_CMF CMF **/
#define USART3_ISR_CMF		(1 << 17)
/** USART3_ISR_BUSY BUSY **/
#define USART3_ISR_BUSY		(1 << 16)
/** USART3_ISR_ABRF ABRF **/
#define USART3_ISR_ABRF		(1 << 15)
/** USART3_ISR_ABRE ABRE **/
#define USART3_ISR_ABRE		(1 << 14)
/** USART3_ISR_UDR SPI slave underrun error flag **/
#define USART3_ISR_UDR		(1 << 13)
/** USART3_ISR_EOBF EOBF **/
#define USART3_ISR_EOBF		(1 << 12)
/** USART3_ISR_RTOF RTOF **/
#define USART3_ISR_RTOF		(1 << 11)
/** USART3_ISR_CTS CTS **/
#define USART3_ISR_CTS		(1 << 10)
/** USART3_ISR_CTSIF CTSIF **/
#define USART3_ISR_CTSIF		(1 << 9)
/** USART3_ISR_LBDF LBDF **/
#define USART3_ISR_LBDF		(1 << 8)
/** USART3_ISR_TXE TXE **/
#define USART3_ISR_TXE		(1 << 7)
/** USART3_ISR_TC TC **/
#define USART3_ISR_TC		(1 << 6)
/** USART3_ISR_RXNE RXNE **/
#define USART3_ISR_RXNE		(1 << 5)
/** USART3_ISR_IDLE IDLE **/
#define USART3_ISR_IDLE		(1 << 4)
/** USART3_ISR_ORE ORE **/
#define USART3_ISR_ORE		(1 << 3)
/** USART3_ISR_NF NF **/
#define USART3_ISR_NF		(1 << 2)
/** USART3_ISR_FE FE **/
#define USART3_ISR_FE		(1 << 1)
/** USART3_ISR_PE PE **/
#define USART3_ISR_PE		(1 << 0)

/**@}*/

/** @defgroup usart3_icr ICR Interrupt flag clear register
@{*/

/** USART3_ICR_WUCF Wakeup from Stop mode clear flag **/
#define USART3_ICR_WUCF		(1 << 20)
/** USART3_ICR_CMCF Character match clear flag **/
#define USART3_ICR_CMCF		(1 << 17)
/** USART3_ICR_UDRCF SPI slave underrun clear flag **/
#define USART3_ICR_UDRCF		(1 << 13)
/** USART3_ICR_EOBCF End of block clear flag **/
#define USART3_ICR_EOBCF		(1 << 12)
/** USART3_ICR_RTOCF Receiver timeout clear flag **/
#define USART3_ICR_RTOCF		(1 << 11)
/** USART3_ICR_CTSCF CTS clear flag **/
#define USART3_ICR_CTSCF		(1 << 9)
/** USART3_ICR_LBDCF LIN break detection clear flag **/
#define USART3_ICR_LBDCF		(1 << 8)
/** USART3_ICR_TCBGTC Transmission complete before Guard time clear flag **/
#define USART3_ICR_TCBGTC		(1 << 7)
/** USART3_ICR_TCCF Transmission complete clear flag **/
#define USART3_ICR_TCCF		(1 << 6)
/** USART3_ICR_TXFECF TXFIFO empty clear flag **/
#define USART3_ICR_TXFECF		(1 << 5)
/** USART3_ICR_IDLECF Idle line detected clear flag **/
#define USART3_ICR_IDLECF		(1 << 4)
/** USART3_ICR_ORECF Overrun error clear flag **/
#define USART3_ICR_ORECF		(1 << 3)
/** USART3_ICR_NCF Noise detected clear flag **/
#define USART3_ICR_NCF		(1 << 2)
/** USART3_ICR_FECF Framing error clear flag **/
#define USART3_ICR_FECF		(1 << 1)
/** USART3_ICR_PECF Parity error clear flag **/
#define USART3_ICR_PECF		(1 << 0)

/**@}*/

/** @defgroup usart3_rdr RDR Receive data register
@{*/


#define USART3_RDR_RDR_SHIFT		0
#define USART3_RDR_RDR_MASK		0x1ff
/** @defgroup usart3_rdr_rdr RDR Receive data value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_tdr TDR Transmit data register
@{*/


#define USART3_TDR_TDR_SHIFT		0
#define USART3_TDR_TDR_MASK		0x1ff
/** @defgroup usart3_tdr_tdr TDR Transmit data value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_presc PRESC USART prescaler register
@{*/


#define USART3_PRESC_PRESCALER_SHIFT		0
#define USART3_PRESC_PRESCALER_MASK		0x0f
/** @defgroup usart3_presc_prescaler PRESCALER Clock prescaler
@{*/
/**@}*/


/**@}*/

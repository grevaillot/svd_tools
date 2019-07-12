#pragma once 

/* --- LPUSART1: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup lpusart1_registers Universal synchronous asynchronous receiver
      transmitter Register
@{*/

/** LPUSART1_CR1 Control register 1 **/
#define LPUSART1_CR1			MMIO32(LPUSART1_BASE + 0x00)
/** LPUSART1_CR2 Control register 2 **/
#define LPUSART1_CR2			MMIO32(LPUSART1_BASE + 0x04)
/** LPUSART1_CR3 Control register 3 **/
#define LPUSART1_CR3			MMIO32(LPUSART1_BASE + 0x08)
/** LPUSART1_BRR Baud rate register **/
#define LPUSART1_BRR			MMIO32(LPUSART1_BASE + 0x0c)
/** LPUSART1_RQR Request register **/
#define LPUSART1_RQR			MMIO32(LPUSART1_BASE + 0x18)
/** LPUSART1_ISR Interrupt & status register **/
#define LPUSART1_ISR			MMIO32(LPUSART1_BASE + 0x1c)
/** LPUSART1_ICR Interrupt flag clear register **/
#define LPUSART1_ICR			MMIO32(LPUSART1_BASE + 0x20)
/** LPUSART1_RDR Receive data register **/
#define LPUSART1_RDR			MMIO32(LPUSART1_BASE + 0x24)
/** LPUSART1_TDR Transmit data register **/
#define LPUSART1_TDR			MMIO32(LPUSART1_BASE + 0x28)

/**@}*/


/** @defgroup lpusart1_cr1 CR1 Control register 1
@{*/

/** LPUSART1_CR1_M1 Word length **/
#define LPUSART1_CR1_M1		(1 << 28)
/** LPUSART1_CR1_DEAT4 Driver Enable assertion time **/
#define LPUSART1_CR1_DEAT4		(1 << 25)
/** LPUSART1_CR1_DEAT3 DEAT3 **/
#define LPUSART1_CR1_DEAT3		(1 << 24)
/** LPUSART1_CR1_DEAT2 DEAT2 **/
#define LPUSART1_CR1_DEAT2		(1 << 23)
/** LPUSART1_CR1_DEAT1 DEAT1 **/
#define LPUSART1_CR1_DEAT1		(1 << 22)
/** LPUSART1_CR1_DEAT0 DEAT0 **/
#define LPUSART1_CR1_DEAT0		(1 << 21)
/** LPUSART1_CR1_DEDT4 Driver Enable de-assertion time **/
#define LPUSART1_CR1_DEDT4		(1 << 20)
/** LPUSART1_CR1_DEDT3 DEDT3 **/
#define LPUSART1_CR1_DEDT3		(1 << 19)
/** LPUSART1_CR1_DEDT2 DEDT2 **/
#define LPUSART1_CR1_DEDT2		(1 << 18)
/** LPUSART1_CR1_DEDT1 DEDT1 **/
#define LPUSART1_CR1_DEDT1		(1 << 17)
/** LPUSART1_CR1_DEDT0 DEDT0 **/
#define LPUSART1_CR1_DEDT0		(1 << 16)
/** LPUSART1_CR1_CMIE Character match interrupt enable **/
#define LPUSART1_CR1_CMIE		(1 << 14)
/** LPUSART1_CR1_MME Mute mode enable **/
#define LPUSART1_CR1_MME		(1 << 13)
/** LPUSART1_CR1_M0 Word length **/
#define LPUSART1_CR1_M0		(1 << 12)
/** LPUSART1_CR1_WAKE Receiver wakeup method **/
#define LPUSART1_CR1_WAKE		(1 << 11)
/** LPUSART1_CR1_PCE Parity control enable **/
#define LPUSART1_CR1_PCE		(1 << 10)
/** LPUSART1_CR1_PS Parity selection **/
#define LPUSART1_CR1_PS		(1 << 9)
/** LPUSART1_CR1_PEIE PE interrupt enable **/
#define LPUSART1_CR1_PEIE		(1 << 8)
/** LPUSART1_CR1_TXEIE interrupt enable **/
#define LPUSART1_CR1_TXEIE		(1 << 7)
/** LPUSART1_CR1_TCIE Transmission complete interrupt enable **/
#define LPUSART1_CR1_TCIE		(1 << 6)
/** LPUSART1_CR1_RXNEIE RXNE interrupt enable **/
#define LPUSART1_CR1_RXNEIE		(1 << 5)
/** LPUSART1_CR1_IDLEIE IDLE interrupt enable **/
#define LPUSART1_CR1_IDLEIE		(1 << 4)
/** LPUSART1_CR1_TE Transmitter enable **/
#define LPUSART1_CR1_TE		(1 << 3)
/** LPUSART1_CR1_RE Receiver enable **/
#define LPUSART1_CR1_RE		(1 << 2)
/** LPUSART1_CR1_UESM USART enable in Stop mode **/
#define LPUSART1_CR1_UESM		(1 << 1)
/** LPUSART1_CR1_UE USART enable **/
#define LPUSART1_CR1_UE		(1 << 0)

/**@}*/

/** @defgroup lpusart1_cr2 CR2 Control register 2
@{*/


#define LPUSART1_CR2_ADD4_7_SHIFT		28
#define LPUSART1_CR2_ADD4_7_MASK		0x0f
/** @defgroup lpusart1_cr2_add4_7 ADD47 Address of the USART node
@{*/
/**@}*/


#define LPUSART1_CR2_ADD0_3_SHIFT		24
#define LPUSART1_CR2_ADD0_3_MASK		0x0f
/** @defgroup lpusart1_cr2_add0_3 ADD03 Address of the USART node
@{*/
/**@}*/

/** LPUSART1_CR2_MSBFIRST Most significant bit first **/
#define LPUSART1_CR2_MSBFIRST		(1 << 19)
/** LPUSART1_CR2_TAINV Binary data inversion **/
#define LPUSART1_CR2_TAINV		(1 << 18)
/** LPUSART1_CR2_TXINV TX pin active level inversion **/
#define LPUSART1_CR2_TXINV		(1 << 17)
/** LPUSART1_CR2_RXINV RX pin active level inversion **/
#define LPUSART1_CR2_RXINV		(1 << 16)
/** LPUSART1_CR2_SWAP Swap TX/RX pins **/
#define LPUSART1_CR2_SWAP		(1 << 15)

#define LPUSART1_CR2_STOP_SHIFT		12
#define LPUSART1_CR2_STOP_MASK		0x03
/** @defgroup lpusart1_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** LPUSART1_CR2_CLKEN Clock enable **/
#define LPUSART1_CR2_CLKEN		(1 << 11)
/** LPUSART1_CR2_ADDM7 7-bit Address Detection/4-bit Address Detection **/
#define LPUSART1_CR2_ADDM7		(1 << 4)

/**@}*/

/** @defgroup lpusart1_cr3 CR3 Control register 3
@{*/

/** LPUSART1_CR3_WUFIE Wakeup from Stop mode interrupt enable **/
#define LPUSART1_CR3_WUFIE		(1 << 22)

#define LPUSART1_CR3_WUS_SHIFT		20
#define LPUSART1_CR3_WUS_MASK		0x03
/** @defgroup lpusart1_cr3_wus WUS Wakeup from Stop mode interrupt flag selection
@{*/
/**@}*/

/** LPUSART1_CR3_DEP Driver enable polarity selection **/
#define LPUSART1_CR3_DEP		(1 << 15)
/** LPUSART1_CR3_DEM Driver enable mode **/
#define LPUSART1_CR3_DEM		(1 << 14)
/** LPUSART1_CR3_DDRE DMA Disable on Reception Error **/
#define LPUSART1_CR3_DDRE		(1 << 13)
/** LPUSART1_CR3_OVRDIS Overrun Disable **/
#define LPUSART1_CR3_OVRDIS		(1 << 12)
/** LPUSART1_CR3_CTSIE CTS interrupt enable **/
#define LPUSART1_CR3_CTSIE		(1 << 10)
/** LPUSART1_CR3_CTSE CTS enable **/
#define LPUSART1_CR3_CTSE		(1 << 9)
/** LPUSART1_CR3_RTSE RTS enable **/
#define LPUSART1_CR3_RTSE		(1 << 8)
/** LPUSART1_CR3_DMAT DMA enable transmitter **/
#define LPUSART1_CR3_DMAT		(1 << 7)
/** LPUSART1_CR3_DMAR DMA enable receiver **/
#define LPUSART1_CR3_DMAR		(1 << 6)
/** LPUSART1_CR3_HDSEL Half-duplex selection **/
#define LPUSART1_CR3_HDSEL		(1 << 3)
/** LPUSART1_CR3_EIE Error interrupt enable **/
#define LPUSART1_CR3_EIE		(1 << 0)

/**@}*/

/** @defgroup lpusart1_brr BRR Baud rate register
@{*/


#define LPUSART1_BRR_BRR_SHIFT		0
#define LPUSART1_BRR_BRR_MASK		0xfffff
/** @defgroup lpusart1_brr_brr BRR BRR
@{*/
/**@}*/


/**@}*/

/** @defgroup lpusart1_rqr RQR Request register
@{*/

/** LPUSART1_RQR_RXFRQ Receive data flush request **/
#define LPUSART1_RQR_RXFRQ		(1 << 3)
/** LPUSART1_RQR_MMRQ Mute mode request **/
#define LPUSART1_RQR_MMRQ		(1 << 2)
/** LPUSART1_RQR_SBKRQ Send break request **/
#define LPUSART1_RQR_SBKRQ		(1 << 1)

/**@}*/

/** @defgroup lpusart1_isr ISR Interrupt & status register
@{*/

/** LPUSART1_ISR_REACK REACK **/
#define LPUSART1_ISR_REACK		(1 << 22)
/** LPUSART1_ISR_TEACK TEACK **/
#define LPUSART1_ISR_TEACK		(1 << 21)
/** LPUSART1_ISR_WUF WUF **/
#define LPUSART1_ISR_WUF		(1 << 20)
/** LPUSART1_ISR_RWU RWU **/
#define LPUSART1_ISR_RWU		(1 << 19)
/** LPUSART1_ISR_SBKF SBKF **/
#define LPUSART1_ISR_SBKF		(1 << 18)
/** LPUSART1_ISR_CMF CMF **/
#define LPUSART1_ISR_CMF		(1 << 17)
/** LPUSART1_ISR_BUSY BUSY **/
#define LPUSART1_ISR_BUSY		(1 << 16)
/** LPUSART1_ISR_CTS CTS **/
#define LPUSART1_ISR_CTS		(1 << 10)
/** LPUSART1_ISR_CTSIF CTSIF **/
#define LPUSART1_ISR_CTSIF		(1 << 9)
/** LPUSART1_ISR_TXE TXE **/
#define LPUSART1_ISR_TXE		(1 << 7)
/** LPUSART1_ISR_TC TC **/
#define LPUSART1_ISR_TC		(1 << 6)
/** LPUSART1_ISR_RXNE RXNE **/
#define LPUSART1_ISR_RXNE		(1 << 5)
/** LPUSART1_ISR_IDLE IDLE **/
#define LPUSART1_ISR_IDLE		(1 << 4)
/** LPUSART1_ISR_ORE ORE **/
#define LPUSART1_ISR_ORE		(1 << 3)
/** LPUSART1_ISR_NF NF **/
#define LPUSART1_ISR_NF		(1 << 2)
/** LPUSART1_ISR_FE FE **/
#define LPUSART1_ISR_FE		(1 << 1)
/** LPUSART1_ISR_PE PE **/
#define LPUSART1_ISR_PE		(1 << 0)

/**@}*/

/** @defgroup lpusart1_icr ICR Interrupt flag clear register
@{*/

/** LPUSART1_ICR_WUCF Wakeup from Stop mode clear flag **/
#define LPUSART1_ICR_WUCF		(1 << 20)
/** LPUSART1_ICR_CMCF Character match clear flag **/
#define LPUSART1_ICR_CMCF		(1 << 17)
/** LPUSART1_ICR_CTSCF CTS clear flag **/
#define LPUSART1_ICR_CTSCF		(1 << 9)
/** LPUSART1_ICR_TCCF Transmission complete clear flag **/
#define LPUSART1_ICR_TCCF		(1 << 6)
/** LPUSART1_ICR_IDLECF Idle line detected clear flag **/
#define LPUSART1_ICR_IDLECF		(1 << 4)
/** LPUSART1_ICR_ORECF Overrun error clear flag **/
#define LPUSART1_ICR_ORECF		(1 << 3)
/** LPUSART1_ICR_NCF Noise detected clear flag **/
#define LPUSART1_ICR_NCF		(1 << 2)
/** LPUSART1_ICR_FECF Framing error clear flag **/
#define LPUSART1_ICR_FECF		(1 << 1)
/** LPUSART1_ICR_PECF Parity error clear flag **/
#define LPUSART1_ICR_PECF		(1 << 0)

/**@}*/

/** @defgroup lpusart1_rdr RDR Receive data register
@{*/


#define LPUSART1_RDR_RDR_SHIFT		0
#define LPUSART1_RDR_RDR_MASK		0x1ff
/** @defgroup lpusart1_rdr_rdr RDR Receive data value
@{*/
/**@}*/


/**@}*/

/** @defgroup lpusart1_tdr TDR Transmit data register
@{*/


#define LPUSART1_TDR_TDR_SHIFT		0
#define LPUSART1_TDR_TDR_MASK		0x1ff
/** @defgroup lpusart1_tdr_tdr TDR Transmit data value
@{*/
/**@}*/


/**@}*/

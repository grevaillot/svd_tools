#pragma once 

/* --- LPUART1: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup lpuart1_registers Universal synchronous asynchronous receiver
      transmitter Register
@{*/

/** LPUART1_CR1 Control register 1 **/
#define LPUART1_CR1			MMIO32(LPUART1_BASE + 0x00)
/** LPUART1_CR2 Control register 2 **/
#define LPUART1_CR2			MMIO32(LPUART1_BASE + 0x04)
/** LPUART1_CR3 Control register 3 **/
#define LPUART1_CR3			MMIO32(LPUART1_BASE + 0x08)
/** LPUART1_BRR Baud rate register **/
#define LPUART1_BRR			MMIO32(LPUART1_BASE + 0x0c)
/** LPUART1_RQR Request register **/
#define LPUART1_RQR			MMIO32(LPUART1_BASE + 0x18)
/** LPUART1_ISR Interrupt & status register **/
#define LPUART1_ISR			MMIO32(LPUART1_BASE + 0x1c)
/** LPUART1_ICR Interrupt flag clear register **/
#define LPUART1_ICR			MMIO32(LPUART1_BASE + 0x20)
/** LPUART1_RDR Receive data register **/
#define LPUART1_RDR			MMIO32(LPUART1_BASE + 0x24)
/** LPUART1_TDR Transmit data register **/
#define LPUART1_TDR			MMIO32(LPUART1_BASE + 0x28)

/**@}*/


/** @defgroup lpuart1_cr1 CR1 Control register 1
@{*/

/** LPUART1_CR1_M1 Word length **/
#define LPUART1_CR1_M1		(1 << 28)
/** LPUART1_CR1_DEAT4 Driver Enable assertion time **/
#define LPUART1_CR1_DEAT4		(1 << 25)
/** LPUART1_CR1_DEAT3 DEAT3 **/
#define LPUART1_CR1_DEAT3		(1 << 24)
/** LPUART1_CR1_DEAT2 DEAT2 **/
#define LPUART1_CR1_DEAT2		(1 << 23)
/** LPUART1_CR1_DEAT1 DEAT1 **/
#define LPUART1_CR1_DEAT1		(1 << 22)
/** LPUART1_CR1_DEAT0 DEAT0 **/
#define LPUART1_CR1_DEAT0		(1 << 21)
/** LPUART1_CR1_DEDT4 Driver Enable de-assertion time **/
#define LPUART1_CR1_DEDT4		(1 << 20)
/** LPUART1_CR1_DEDT3 DEDT3 **/
#define LPUART1_CR1_DEDT3		(1 << 19)
/** LPUART1_CR1_DEDT2 DEDT2 **/
#define LPUART1_CR1_DEDT2		(1 << 18)
/** LPUART1_CR1_DEDT1 DEDT1 **/
#define LPUART1_CR1_DEDT1		(1 << 17)
/** LPUART1_CR1_DEDT0 DEDT0 **/
#define LPUART1_CR1_DEDT0		(1 << 16)
/** LPUART1_CR1_CMIE Character match interrupt enable **/
#define LPUART1_CR1_CMIE		(1 << 14)
/** LPUART1_CR1_MME Mute mode enable **/
#define LPUART1_CR1_MME		(1 << 13)
/** LPUART1_CR1_M0 Word length **/
#define LPUART1_CR1_M0		(1 << 12)
/** LPUART1_CR1_WAKE Receiver wakeup method **/
#define LPUART1_CR1_WAKE		(1 << 11)
/** LPUART1_CR1_PCE Parity control enable **/
#define LPUART1_CR1_PCE		(1 << 10)
/** LPUART1_CR1_PS Parity selection **/
#define LPUART1_CR1_PS		(1 << 9)
/** LPUART1_CR1_PEIE PE interrupt enable **/
#define LPUART1_CR1_PEIE		(1 << 8)
/** LPUART1_CR1_TXEIE interrupt enable **/
#define LPUART1_CR1_TXEIE		(1 << 7)
/** LPUART1_CR1_TCIE Transmission complete interrupt enable **/
#define LPUART1_CR1_TCIE		(1 << 6)
/** LPUART1_CR1_RXNEIE RXNE interrupt enable **/
#define LPUART1_CR1_RXNEIE		(1 << 5)
/** LPUART1_CR1_IDLEIE IDLE interrupt enable **/
#define LPUART1_CR1_IDLEIE		(1 << 4)
/** LPUART1_CR1_TE Transmitter enable **/
#define LPUART1_CR1_TE		(1 << 3)
/** LPUART1_CR1_RE Receiver enable **/
#define LPUART1_CR1_RE		(1 << 2)
/** LPUART1_CR1_UESM USART enable in Stop mode **/
#define LPUART1_CR1_UESM		(1 << 1)
/** LPUART1_CR1_UE USART enable **/
#define LPUART1_CR1_UE		(1 << 0)

/**@}*/

/** @defgroup lpuart1_cr2 CR2 Control register 2
@{*/


#define LPUART1_CR2_ADD4_7_SHIFT		28
#define LPUART1_CR2_ADD4_7_MASK		0x0f
/** @defgroup lpuart1_cr2_add4_7 ADD47 Address of the USART node
@{*/
/**@}*/


#define LPUART1_CR2_ADD0_3_SHIFT		24
#define LPUART1_CR2_ADD0_3_MASK		0x0f
/** @defgroup lpuart1_cr2_add0_3 ADD03 Address of the USART node
@{*/
/**@}*/

/** LPUART1_CR2_MSBFIRST Most significant bit first **/
#define LPUART1_CR2_MSBFIRST		(1 << 19)
/** LPUART1_CR2_TAINV Binary data inversion **/
#define LPUART1_CR2_TAINV		(1 << 18)
/** LPUART1_CR2_TXINV TX pin active level inversion **/
#define LPUART1_CR2_TXINV		(1 << 17)
/** LPUART1_CR2_RXINV RX pin active level inversion **/
#define LPUART1_CR2_RXINV		(1 << 16)
/** LPUART1_CR2_SWAP Swap TX/RX pins **/
#define LPUART1_CR2_SWAP		(1 << 15)

#define LPUART1_CR2_STOP_SHIFT		12
#define LPUART1_CR2_STOP_MASK		0x03
/** @defgroup lpuart1_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** LPUART1_CR2_CLKEN Clock enable **/
#define LPUART1_CR2_CLKEN		(1 << 11)
/** LPUART1_CR2_ADDM7 7-bit Address Detection/4-bit Address Detection **/
#define LPUART1_CR2_ADDM7		(1 << 4)

/**@}*/

/** @defgroup lpuart1_cr3 CR3 Control register 3
@{*/

/** LPUART1_CR3_WUFIE Wakeup from Stop mode interrupt enable **/
#define LPUART1_CR3_WUFIE		(1 << 22)

#define LPUART1_CR3_WUS_SHIFT		20
#define LPUART1_CR3_WUS_MASK		0x03
/** @defgroup lpuart1_cr3_wus WUS Wakeup from Stop mode interrupt flag selection
@{*/
/**@}*/

/** LPUART1_CR3_DEP Driver enable polarity selection **/
#define LPUART1_CR3_DEP		(1 << 15)
/** LPUART1_CR3_DEM Driver enable mode **/
#define LPUART1_CR3_DEM		(1 << 14)
/** LPUART1_CR3_DDRE DMA Disable on Reception Error **/
#define LPUART1_CR3_DDRE		(1 << 13)
/** LPUART1_CR3_OVRDIS Overrun Disable **/
#define LPUART1_CR3_OVRDIS		(1 << 12)
/** LPUART1_CR3_CTSIE CTS interrupt enable **/
#define LPUART1_CR3_CTSIE		(1 << 10)
/** LPUART1_CR3_CTSE CTS enable **/
#define LPUART1_CR3_CTSE		(1 << 9)
/** LPUART1_CR3_RTSE RTS enable **/
#define LPUART1_CR3_RTSE		(1 << 8)
/** LPUART1_CR3_DMAT DMA enable transmitter **/
#define LPUART1_CR3_DMAT		(1 << 7)
/** LPUART1_CR3_DMAR DMA enable receiver **/
#define LPUART1_CR3_DMAR		(1 << 6)
/** LPUART1_CR3_HDSEL Half-duplex selection **/
#define LPUART1_CR3_HDSEL		(1 << 3)
/** LPUART1_CR3_EIE Error interrupt enable **/
#define LPUART1_CR3_EIE		(1 << 0)

/**@}*/

/** @defgroup lpuart1_brr BRR Baud rate register
@{*/


#define LPUART1_BRR_BRR_SHIFT		0
#define LPUART1_BRR_BRR_MASK		0xfffff
/** @defgroup lpuart1_brr_brr BRR BRR
@{*/
/**@}*/


/**@}*/

/** @defgroup lpuart1_rqr RQR Request register
@{*/

/** LPUART1_RQR_RXFRQ Receive data flush request **/
#define LPUART1_RQR_RXFRQ		(1 << 3)
/** LPUART1_RQR_MMRQ Mute mode request **/
#define LPUART1_RQR_MMRQ		(1 << 2)
/** LPUART1_RQR_SBKRQ Send break request **/
#define LPUART1_RQR_SBKRQ		(1 << 1)

/**@}*/

/** @defgroup lpuart1_isr ISR Interrupt & status register
@{*/

/** LPUART1_ISR_REACK REACK **/
#define LPUART1_ISR_REACK		(1 << 22)
/** LPUART1_ISR_TEACK TEACK **/
#define LPUART1_ISR_TEACK		(1 << 21)
/** LPUART1_ISR_WUF WUF **/
#define LPUART1_ISR_WUF		(1 << 20)
/** LPUART1_ISR_RWU RWU **/
#define LPUART1_ISR_RWU		(1 << 19)
/** LPUART1_ISR_SBKF SBKF **/
#define LPUART1_ISR_SBKF		(1 << 18)
/** LPUART1_ISR_CMF CMF **/
#define LPUART1_ISR_CMF		(1 << 17)
/** LPUART1_ISR_BUSY BUSY **/
#define LPUART1_ISR_BUSY		(1 << 16)
/** LPUART1_ISR_CTS CTS **/
#define LPUART1_ISR_CTS		(1 << 10)
/** LPUART1_ISR_CTSIF CTSIF **/
#define LPUART1_ISR_CTSIF		(1 << 9)
/** LPUART1_ISR_TXE TXE **/
#define LPUART1_ISR_TXE		(1 << 7)
/** LPUART1_ISR_TC TC **/
#define LPUART1_ISR_TC		(1 << 6)
/** LPUART1_ISR_RXNE RXNE **/
#define LPUART1_ISR_RXNE		(1 << 5)
/** LPUART1_ISR_IDLE IDLE **/
#define LPUART1_ISR_IDLE		(1 << 4)
/** LPUART1_ISR_ORE ORE **/
#define LPUART1_ISR_ORE		(1 << 3)
/** LPUART1_ISR_NF NF **/
#define LPUART1_ISR_NF		(1 << 2)
/** LPUART1_ISR_FE FE **/
#define LPUART1_ISR_FE		(1 << 1)
/** LPUART1_ISR_PE PE **/
#define LPUART1_ISR_PE		(1 << 0)

/**@}*/

/** @defgroup lpuart1_icr ICR Interrupt flag clear register
@{*/

/** LPUART1_ICR_WUCF Wakeup from Stop mode clear flag **/
#define LPUART1_ICR_WUCF		(1 << 20)
/** LPUART1_ICR_CMCF Character match clear flag **/
#define LPUART1_ICR_CMCF		(1 << 17)
/** LPUART1_ICR_CTSCF CTS clear flag **/
#define LPUART1_ICR_CTSCF		(1 << 9)
/** LPUART1_ICR_TCCF Transmission complete clear flag **/
#define LPUART1_ICR_TCCF		(1 << 6)
/** LPUART1_ICR_IDLECF Idle line detected clear flag **/
#define LPUART1_ICR_IDLECF		(1 << 4)
/** LPUART1_ICR_ORECF Overrun error clear flag **/
#define LPUART1_ICR_ORECF		(1 << 3)
/** LPUART1_ICR_NCF Noise detected clear flag **/
#define LPUART1_ICR_NCF		(1 << 2)
/** LPUART1_ICR_FECF Framing error clear flag **/
#define LPUART1_ICR_FECF		(1 << 1)
/** LPUART1_ICR_PECF Parity error clear flag **/
#define LPUART1_ICR_PECF		(1 << 0)

/**@}*/

/** @defgroup lpuart1_rdr RDR Receive data register
@{*/


#define LPUART1_RDR_RDR_SHIFT		0
#define LPUART1_RDR_RDR_MASK		0x1ff
/** @defgroup lpuart1_rdr_rdr RDR Receive data value
@{*/
/**@}*/


/**@}*/

/** @defgroup lpuart1_tdr TDR Transmit data register
@{*/


#define LPUART1_TDR_TDR_SHIFT		0
#define LPUART1_TDR_TDR_MASK		0x1ff
/** @defgroup lpuart1_tdr_tdr TDR Transmit data value
@{*/
/**@}*/


/**@}*/

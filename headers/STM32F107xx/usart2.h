#pragma once 

/* --- USART2: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup usart2_registers Universal synchronous asynchronous receiver
      transmitter Register
@{*/

/** USART2_SR Status register **/
#define USART2_SR			MMIO32(USART2_BASE + 0x00)
/** USART2_DR Data register **/
#define USART2_DR			MMIO32(USART2_BASE + 0x04)
/** USART2_BRR Baud rate register **/
#define USART2_BRR			MMIO32(USART2_BASE + 0x08)
/** USART2_CR1 Control register 1 **/
#define USART2_CR1			MMIO32(USART2_BASE + 0x0c)
/** USART2_CR2 Control register 2 **/
#define USART2_CR2			MMIO32(USART2_BASE + 0x10)
/** USART2_CR3 Control register 3 **/
#define USART2_CR3			MMIO32(USART2_BASE + 0x14)
/** USART2_GTPR Guard time and prescaler register **/
#define USART2_GTPR			MMIO32(USART2_BASE + 0x18)

/**@}*/


/** @defgroup usart2_sr SR Status register
@{*/

/** USART2_SR_CTS CTS flag **/
#define USART2_SR_CTS		(1 << 9)
/** USART2_SR_LBD LIN break detection flag **/
#define USART2_SR_LBD		(1 << 8)
/** USART2_SR_TXE Transmit data register empty **/
#define USART2_SR_TXE		(1 << 7)
/** USART2_SR_TC Transmission complete **/
#define USART2_SR_TC		(1 << 6)
/** USART2_SR_RXNE Read data register not empty **/
#define USART2_SR_RXNE		(1 << 5)
/** USART2_SR_IDLE IDLE line detected **/
#define USART2_SR_IDLE		(1 << 4)
/** USART2_SR_ORE Overrun error **/
#define USART2_SR_ORE		(1 << 3)
/** USART2_SR_NE Noise error flag **/
#define USART2_SR_NE		(1 << 2)
/** USART2_SR_FE Framing error **/
#define USART2_SR_FE		(1 << 1)
/** USART2_SR_PE Parity error **/
#define USART2_SR_PE		(1 << 0)

/**@}*/

/** @defgroup usart2_dr DR Data register
@{*/


#define USART2_DR_DR_SHIFT		0
#define USART2_DR_DR_MASK		0x1ff
/** @defgroup usart2_dr_dr DR Data value
@{*/
/**@}*/


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

/** @defgroup usart2_cr1 CR1 Control register 1
@{*/

/** USART2_CR1_UE USART enable **/
#define USART2_CR1_UE		(1 << 13)
/** USART2_CR1_M Word length **/
#define USART2_CR1_M		(1 << 12)
/** USART2_CR1_WAKE Wakeup method **/
#define USART2_CR1_WAKE		(1 << 11)
/** USART2_CR1_PCE Parity control enable **/
#define USART2_CR1_PCE		(1 << 10)
/** USART2_CR1_PS Parity selection **/
#define USART2_CR1_PS		(1 << 9)
/** USART2_CR1_PEIE PE interrupt enable **/
#define USART2_CR1_PEIE		(1 << 8)
/** USART2_CR1_TXEIE TXE interrupt enable **/
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
/** USART2_CR1_RWU Receiver wakeup **/
#define USART2_CR1_RWU		(1 << 1)
/** USART2_CR1_SBK Send break **/
#define USART2_CR1_SBK		(1 << 0)

/**@}*/

/** @defgroup usart2_cr2 CR2 Control register 2
@{*/

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
/** USART2_CR2_LBDL lin break detection length **/
#define USART2_CR2_LBDL		(1 << 5)

#define USART2_CR2_ADD_SHIFT		0
#define USART2_CR2_ADD_MASK		0x0f
/** @defgroup usart2_cr2_add ADD Address of the USART node
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_cr3 CR3 Control register 3
@{*/

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

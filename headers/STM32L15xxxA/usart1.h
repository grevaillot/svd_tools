#pragma once 

/* --- USART1: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup usart1_registers Universal synchronous asynchronous receiver       transmitter Register
@{*/

/** USART1_SR Status register **/
#define USART1_SR			MMIO32(USART1_BASE + 0x00)
/** USART1_DR Data register **/
#define USART1_DR			MMIO32(USART1_BASE + 0x04)
/** USART1_BRR Baud rate register **/
#define USART1_BRR			MMIO32(USART1_BASE + 0x08)
/** USART1_CR1 Control register 1 **/
#define USART1_CR1			MMIO32(USART1_BASE + 0x0c)
/** USART1_CR2 Control register 2 **/
#define USART1_CR2			MMIO32(USART1_BASE + 0x10)
/** USART1_CR3 Control register 3 **/
#define USART1_CR3			MMIO32(USART1_BASE + 0x14)
/** USART1_GTPR Guard time and prescaler register **/
#define USART1_GTPR			MMIO32(USART1_BASE + 0x18)

/**@}*/


/** @defgroup usart1_sr SR Status register
@{*/

/** USART1_SR_CTS CTS flag **/
#define USART1_SR_CTS		(1 << 9)
/** USART1_SR_LBD LIN break detection flag **/
#define USART1_SR_LBD		(1 << 8)
/** USART1_SR_TXE Transmit data register empty **/
#define USART1_SR_TXE		(1 << 7)
/** USART1_SR_TC Transmission complete **/
#define USART1_SR_TC		(1 << 6)
/** USART1_SR_RXNE Read data register not empty **/
#define USART1_SR_RXNE		(1 << 5)
/** USART1_SR_IDLE IDLE line detected **/
#define USART1_SR_IDLE		(1 << 4)
/** USART1_SR_ORE Overrun error **/
#define USART1_SR_ORE		(1 << 3)
/** USART1_SR_NF Noise detected flag **/
#define USART1_SR_NF		(1 << 2)
/** USART1_SR_FE Framing error **/
#define USART1_SR_FE		(1 << 1)
/** USART1_SR_PE Parity error **/
#define USART1_SR_PE		(1 << 0)

/**@}*/

/** @defgroup usart1_dr DR Data register
@{*/


#define USART1_DR_DR_SHIFT		0
#define USART1_DR_DR_MASK		0x1ff
/** @defgroup usart1_dr_dr DR Data value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_brr BRR Baud rate register
@{*/


#define USART1_BRR_DIV_Mantissa_SHIFT		4
#define USART1_BRR_DIV_Mantissa_MASK		0xfff
/** @defgroup usart1_brr_div_mantissa DIVMantissa mantissa of USARTDIV
@{*/
/**@}*/


#define USART1_BRR_DIV_Fraction_SHIFT		0
#define USART1_BRR_DIV_Fraction_MASK		0x0f
/** @defgroup usart1_brr_div_fraction DIVFraction fraction of USARTDIV
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_cr1 CR1 Control register 1
@{*/

/** USART1_CR1_OVER8 Oversampling mode **/
#define USART1_CR1_OVER8		(1 << 15)
/** USART1_CR1_UE USART enable **/
#define USART1_CR1_UE		(1 << 13)
/** USART1_CR1_M Word length **/
#define USART1_CR1_M		(1 << 12)
/** USART1_CR1_WAKE Wakeup method **/
#define USART1_CR1_WAKE		(1 << 11)
/** USART1_CR1_PCE Parity control enable **/
#define USART1_CR1_PCE		(1 << 10)
/** USART1_CR1_PS Parity selection **/
#define USART1_CR1_PS		(1 << 9)
/** USART1_CR1_PEIE PE interrupt enable **/
#define USART1_CR1_PEIE		(1 << 8)
/** USART1_CR1_TXEIE TXE interrupt enable **/
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
/** USART1_CR1_RWU Receiver wakeup **/
#define USART1_CR1_RWU		(1 << 1)
/** USART1_CR1_SBK Send break **/
#define USART1_CR1_SBK		(1 << 0)

/**@}*/

/** @defgroup usart1_cr2 CR2 Control register 2
@{*/

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
/** USART1_CR2_LBDL lin break detection length **/
#define USART1_CR2_LBDL		(1 << 5)

#define USART1_CR2_ADD_SHIFT		0
#define USART1_CR2_ADD_MASK		0x0f
/** @defgroup usart1_cr2_add ADD Address of the USART node
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_cr3 CR3 Control register 3
@{*/

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
/** USART1_CR3_IRLP IrDA low-power **/
#define USART1_CR3_IRLP		(1 << 2)
/** USART1_CR3_IREN IrDA mode enable **/
#define USART1_CR3_IREN		(1 << 1)
/** USART1_CR3_EIE Error interrupt enable **/
#define USART1_CR3_EIE		(1 << 0)

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

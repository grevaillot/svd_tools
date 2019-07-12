#pragma once 

/* --- UART10: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup uart10_registers Universal synchronous asynchronous receiver
      transmitter Register
@{*/

/** UART10_SR Status register **/
#define UART10_SR			MMIO32(UART10_BASE + 0x00)
/** UART10_DR Data register **/
#define UART10_DR			MMIO32(UART10_BASE + 0x04)
/** UART10_BRR Baud rate register **/
#define UART10_BRR			MMIO32(UART10_BASE + 0x08)
/** UART10_CR1 Control register 1 **/
#define UART10_CR1			MMIO32(UART10_BASE + 0x0c)
/** UART10_CR2 Control register 2 **/
#define UART10_CR2			MMIO32(UART10_BASE + 0x10)
/** UART10_CR3 Control register 3 **/
#define UART10_CR3			MMIO32(UART10_BASE + 0x14)
/** UART10_GTPR Guard time and prescaler register **/
#define UART10_GTPR			MMIO32(UART10_BASE + 0x18)

/**@}*/


/** @defgroup uart10_sr SR Status register
@{*/

/** UART10_SR_CTS CTS flag **/
#define UART10_SR_CTS		(1 << 9)
/** UART10_SR_LBD LIN break detection flag **/
#define UART10_SR_LBD		(1 << 8)
/** UART10_SR_TXE Transmit data register empty **/
#define UART10_SR_TXE		(1 << 7)
/** UART10_SR_TC Transmission complete **/
#define UART10_SR_TC		(1 << 6)
/** UART10_SR_RXNE Read data register not empty **/
#define UART10_SR_RXNE		(1 << 5)
/** UART10_SR_IDLE IDLE line detected **/
#define UART10_SR_IDLE		(1 << 4)
/** UART10_SR_ORE Overrun error **/
#define UART10_SR_ORE		(1 << 3)
/** UART10_SR_NF Noise detected flag **/
#define UART10_SR_NF		(1 << 2)
/** UART10_SR_FE Framing error **/
#define UART10_SR_FE		(1 << 1)
/** UART10_SR_PE Parity error **/
#define UART10_SR_PE		(1 << 0)

/**@}*/

/** @defgroup uart10_dr DR Data register
@{*/


#define UART10_DR_DR_SHIFT		0
#define UART10_DR_DR_MASK		0x1ff
/** @defgroup uart10_dr_dr DR Data value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart10_brr BRR Baud rate register
@{*/


#define UART10_BRR_DIV_Mantissa_SHIFT		4
#define UART10_BRR_DIV_Mantissa_MASK		0xfff
/** @defgroup uart10_brr_div_mantissa DIVMantissa mantissa of USARTDIV
@{*/
/**@}*/


#define UART10_BRR_DIV_Fraction_SHIFT		0
#define UART10_BRR_DIV_Fraction_MASK		0x0f
/** @defgroup uart10_brr_div_fraction DIVFraction fraction of USARTDIV
@{*/
/**@}*/


/**@}*/

/** @defgroup uart10_cr1 CR1 Control register 1
@{*/

/** UART10_CR1_OVER8 Oversampling mode **/
#define UART10_CR1_OVER8		(1 << 15)
/** UART10_CR1_UE USART enable **/
#define UART10_CR1_UE		(1 << 13)
/** UART10_CR1_M Word length **/
#define UART10_CR1_M		(1 << 12)
/** UART10_CR1_WAKE Wakeup method **/
#define UART10_CR1_WAKE		(1 << 11)
/** UART10_CR1_PCE Parity control enable **/
#define UART10_CR1_PCE		(1 << 10)
/** UART10_CR1_PS Parity selection **/
#define UART10_CR1_PS		(1 << 9)
/** UART10_CR1_PEIE PE interrupt enable **/
#define UART10_CR1_PEIE		(1 << 8)
/** UART10_CR1_TXEIE TXE interrupt enable **/
#define UART10_CR1_TXEIE		(1 << 7)
/** UART10_CR1_TCIE Transmission complete interrupt enable **/
#define UART10_CR1_TCIE		(1 << 6)
/** UART10_CR1_RXNEIE RXNE interrupt enable **/
#define UART10_CR1_RXNEIE		(1 << 5)
/** UART10_CR1_IDLEIE IDLE interrupt enable **/
#define UART10_CR1_IDLEIE		(1 << 4)
/** UART10_CR1_TE Transmitter enable **/
#define UART10_CR1_TE		(1 << 3)
/** UART10_CR1_RE Receiver enable **/
#define UART10_CR1_RE		(1 << 2)
/** UART10_CR1_RWU Receiver wakeup **/
#define UART10_CR1_RWU		(1 << 1)
/** UART10_CR1_SBK Send break **/
#define UART10_CR1_SBK		(1 << 0)

/**@}*/

/** @defgroup uart10_cr2 CR2 Control register 2
@{*/

/** UART10_CR2_LINEN LIN mode enable **/
#define UART10_CR2_LINEN		(1 << 14)

#define UART10_CR2_STOP_SHIFT		12
#define UART10_CR2_STOP_MASK		0x03
/** @defgroup uart10_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** UART10_CR2_CLKEN Clock enable **/
#define UART10_CR2_CLKEN		(1 << 11)
/** UART10_CR2_CPOL Clock polarity **/
#define UART10_CR2_CPOL		(1 << 10)
/** UART10_CR2_CPHA Clock phase **/
#define UART10_CR2_CPHA		(1 << 9)
/** UART10_CR2_LBCL Last bit clock pulse **/
#define UART10_CR2_LBCL		(1 << 8)
/** UART10_CR2_LBDIE LIN break detection interrupt enable **/
#define UART10_CR2_LBDIE		(1 << 6)
/** UART10_CR2_LBDL lin break detection length **/
#define UART10_CR2_LBDL		(1 << 5)

#define UART10_CR2_ADD_SHIFT		0
#define UART10_CR2_ADD_MASK		0x0f
/** @defgroup uart10_cr2_add ADD Address of the USART node
@{*/
/**@}*/


/**@}*/

/** @defgroup uart10_cr3 CR3 Control register 3
@{*/

/** UART10_CR3_ONEBIT One sample bit method enable **/
#define UART10_CR3_ONEBIT		(1 << 11)
/** UART10_CR3_CTSIE CTS interrupt enable **/
#define UART10_CR3_CTSIE		(1 << 10)
/** UART10_CR3_CTSE CTS enable **/
#define UART10_CR3_CTSE		(1 << 9)
/** UART10_CR3_RTSE RTS enable **/
#define UART10_CR3_RTSE		(1 << 8)
/** UART10_CR3_DMAT DMA enable transmitter **/
#define UART10_CR3_DMAT		(1 << 7)
/** UART10_CR3_DMAR DMA enable receiver **/
#define UART10_CR3_DMAR		(1 << 6)
/** UART10_CR3_SCEN Smartcard mode enable **/
#define UART10_CR3_SCEN		(1 << 5)
/** UART10_CR3_NACK Smartcard NACK enable **/
#define UART10_CR3_NACK		(1 << 4)
/** UART10_CR3_HDSEL Half-duplex selection **/
#define UART10_CR3_HDSEL		(1 << 3)
/** UART10_CR3_IRLP IrDA low-power **/
#define UART10_CR3_IRLP		(1 << 2)
/** UART10_CR3_IREN IrDA mode enable **/
#define UART10_CR3_IREN		(1 << 1)
/** UART10_CR3_EIE Error interrupt enable **/
#define UART10_CR3_EIE		(1 << 0)

/**@}*/

/** @defgroup uart10_gtpr GTPR Guard time and prescaler register
@{*/


#define UART10_GTPR_GT_SHIFT		8
#define UART10_GTPR_GT_MASK		0xff
/** @defgroup uart10_gtpr_gt GT Guard time value
@{*/
/**@}*/


#define UART10_GTPR_PSC_SHIFT		0
#define UART10_GTPR_PSC_MASK		0xff
/** @defgroup uart10_gtpr_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

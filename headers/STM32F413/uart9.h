#pragma once 

/* --- UART9: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup uart9_registers Universal synchronous asynchronous receiver
      transmitter Register
@{*/

/** UART9_SR Status register **/
#define UART9_SR			MMIO32(UART9_BASE + 0x00)
/** UART9_DR Data register **/
#define UART9_DR			MMIO32(UART9_BASE + 0x04)
/** UART9_BRR Baud rate register **/
#define UART9_BRR			MMIO32(UART9_BASE + 0x08)
/** UART9_CR1 Control register 1 **/
#define UART9_CR1			MMIO32(UART9_BASE + 0x0c)
/** UART9_CR2 Control register 2 **/
#define UART9_CR2			MMIO32(UART9_BASE + 0x10)
/** UART9_CR3 Control register 3 **/
#define UART9_CR3			MMIO32(UART9_BASE + 0x14)
/** UART9_GTPR Guard time and prescaler register **/
#define UART9_GTPR			MMIO32(UART9_BASE + 0x18)

/**@}*/


/** @defgroup uart9_sr SR Status register
@{*/

/** UART9_SR_CTS CTS flag **/
#define UART9_SR_CTS		(1 << 9)
/** UART9_SR_LBD LIN break detection flag **/
#define UART9_SR_LBD		(1 << 8)
/** UART9_SR_TXE Transmit data register empty **/
#define UART9_SR_TXE		(1 << 7)
/** UART9_SR_TC Transmission complete **/
#define UART9_SR_TC		(1 << 6)
/** UART9_SR_RXNE Read data register not empty **/
#define UART9_SR_RXNE		(1 << 5)
/** UART9_SR_IDLE IDLE line detected **/
#define UART9_SR_IDLE		(1 << 4)
/** UART9_SR_ORE Overrun error **/
#define UART9_SR_ORE		(1 << 3)
/** UART9_SR_NF Noise detected flag **/
#define UART9_SR_NF		(1 << 2)
/** UART9_SR_FE Framing error **/
#define UART9_SR_FE		(1 << 1)
/** UART9_SR_PE Parity error **/
#define UART9_SR_PE		(1 << 0)

/**@}*/

/** @defgroup uart9_dr DR Data register
@{*/


#define UART9_DR_DR_SHIFT		0
#define UART9_DR_DR_MASK		0x1ff
/** @defgroup uart9_dr_dr DR Data value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart9_brr BRR Baud rate register
@{*/


#define UART9_BRR_DIV_Mantissa_SHIFT		4
#define UART9_BRR_DIV_Mantissa_MASK		0xfff
/** @defgroup uart9_brr_div_mantissa DIVMantissa mantissa of USARTDIV
@{*/
/**@}*/


#define UART9_BRR_DIV_Fraction_SHIFT		0
#define UART9_BRR_DIV_Fraction_MASK		0x0f
/** @defgroup uart9_brr_div_fraction DIVFraction fraction of USARTDIV
@{*/
/**@}*/


/**@}*/

/** @defgroup uart9_cr1 CR1 Control register 1
@{*/

/** UART9_CR1_OVER8 Oversampling mode **/
#define UART9_CR1_OVER8		(1 << 15)
/** UART9_CR1_UE USART enable **/
#define UART9_CR1_UE		(1 << 13)
/** UART9_CR1_M Word length **/
#define UART9_CR1_M		(1 << 12)
/** UART9_CR1_WAKE Wakeup method **/
#define UART9_CR1_WAKE		(1 << 11)
/** UART9_CR1_PCE Parity control enable **/
#define UART9_CR1_PCE		(1 << 10)
/** UART9_CR1_PS Parity selection **/
#define UART9_CR1_PS		(1 << 9)
/** UART9_CR1_PEIE PE interrupt enable **/
#define UART9_CR1_PEIE		(1 << 8)
/** UART9_CR1_TXEIE TXE interrupt enable **/
#define UART9_CR1_TXEIE		(1 << 7)
/** UART9_CR1_TCIE Transmission complete interrupt enable **/
#define UART9_CR1_TCIE		(1 << 6)
/** UART9_CR1_RXNEIE RXNE interrupt enable **/
#define UART9_CR1_RXNEIE		(1 << 5)
/** UART9_CR1_IDLEIE IDLE interrupt enable **/
#define UART9_CR1_IDLEIE		(1 << 4)
/** UART9_CR1_TE Transmitter enable **/
#define UART9_CR1_TE		(1 << 3)
/** UART9_CR1_RE Receiver enable **/
#define UART9_CR1_RE		(1 << 2)
/** UART9_CR1_RWU Receiver wakeup **/
#define UART9_CR1_RWU		(1 << 1)
/** UART9_CR1_SBK Send break **/
#define UART9_CR1_SBK		(1 << 0)

/**@}*/

/** @defgroup uart9_cr2 CR2 Control register 2
@{*/

/** UART9_CR2_LINEN LIN mode enable **/
#define UART9_CR2_LINEN		(1 << 14)

#define UART9_CR2_STOP_SHIFT		12
#define UART9_CR2_STOP_MASK		0x03
/** @defgroup uart9_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** UART9_CR2_CLKEN Clock enable **/
#define UART9_CR2_CLKEN		(1 << 11)
/** UART9_CR2_CPOL Clock polarity **/
#define UART9_CR2_CPOL		(1 << 10)
/** UART9_CR2_CPHA Clock phase **/
#define UART9_CR2_CPHA		(1 << 9)
/** UART9_CR2_LBCL Last bit clock pulse **/
#define UART9_CR2_LBCL		(1 << 8)
/** UART9_CR2_LBDIE LIN break detection interrupt enable **/
#define UART9_CR2_LBDIE		(1 << 6)
/** UART9_CR2_LBDL lin break detection length **/
#define UART9_CR2_LBDL		(1 << 5)

#define UART9_CR2_ADD_SHIFT		0
#define UART9_CR2_ADD_MASK		0x0f
/** @defgroup uart9_cr2_add ADD Address of the USART node
@{*/
/**@}*/


/**@}*/

/** @defgroup uart9_cr3 CR3 Control register 3
@{*/

/** UART9_CR3_ONEBIT One sample bit method enable **/
#define UART9_CR3_ONEBIT		(1 << 11)
/** UART9_CR3_CTSIE CTS interrupt enable **/
#define UART9_CR3_CTSIE		(1 << 10)
/** UART9_CR3_CTSE CTS enable **/
#define UART9_CR3_CTSE		(1 << 9)
/** UART9_CR3_RTSE RTS enable **/
#define UART9_CR3_RTSE		(1 << 8)
/** UART9_CR3_DMAT DMA enable transmitter **/
#define UART9_CR3_DMAT		(1 << 7)
/** UART9_CR3_DMAR DMA enable receiver **/
#define UART9_CR3_DMAR		(1 << 6)
/** UART9_CR3_SCEN Smartcard mode enable **/
#define UART9_CR3_SCEN		(1 << 5)
/** UART9_CR3_NACK Smartcard NACK enable **/
#define UART9_CR3_NACK		(1 << 4)
/** UART9_CR3_HDSEL Half-duplex selection **/
#define UART9_CR3_HDSEL		(1 << 3)
/** UART9_CR3_IRLP IrDA low-power **/
#define UART9_CR3_IRLP		(1 << 2)
/** UART9_CR3_IREN IrDA mode enable **/
#define UART9_CR3_IREN		(1 << 1)
/** UART9_CR3_EIE Error interrupt enable **/
#define UART9_CR3_EIE		(1 << 0)

/**@}*/

/** @defgroup uart9_gtpr GTPR Guard time and prescaler register
@{*/


#define UART9_GTPR_GT_SHIFT		8
#define UART9_GTPR_GT_MASK		0xff
/** @defgroup uart9_gtpr_gt GT Guard time value
@{*/
/**@}*/


#define UART9_GTPR_PSC_SHIFT		0
#define UART9_GTPR_PSC_MASK		0xff
/** @defgroup uart9_gtpr_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

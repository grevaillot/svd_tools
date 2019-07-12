#pragma once 

/* --- UART5: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup uart5_registers Universal synchronous asynchronous receiver
      transmitter Register
@{*/

/** UART5_SR Status register **/
#define UART5_SR			MMIO32(UART5_BASE + 0x00)
/** UART5_DR Data register **/
#define UART5_DR			MMIO32(UART5_BASE + 0x04)
/** UART5_BRR Baud rate register **/
#define UART5_BRR			MMIO32(UART5_BASE + 0x08)
/** UART5_CR1 Control register 1 **/
#define UART5_CR1			MMIO32(UART5_BASE + 0x0c)
/** UART5_CR2 Control register 2 **/
#define UART5_CR2			MMIO32(UART5_BASE + 0x10)
/** UART5_CR3 Control register 3 **/
#define UART5_CR3			MMIO32(UART5_BASE + 0x14)

/**@}*/


/** @defgroup uart5_sr SR Status register
@{*/

/** UART5_SR_LBD LIN break detection flag **/
#define UART5_SR_LBD		(1 << 8)
/** UART5_SR_TXE Transmit data register empty **/
#define UART5_SR_TXE		(1 << 7)
/** UART5_SR_TC Transmission complete **/
#define UART5_SR_TC		(1 << 6)
/** UART5_SR_RXNE Read data register not empty **/
#define UART5_SR_RXNE		(1 << 5)
/** UART5_SR_IDLE IDLE line detected **/
#define UART5_SR_IDLE		(1 << 4)
/** UART5_SR_ORE Overrun error **/
#define UART5_SR_ORE		(1 << 3)
/** UART5_SR_NF Noise detected flag **/
#define UART5_SR_NF		(1 << 2)
/** UART5_SR_FE Framing error **/
#define UART5_SR_FE		(1 << 1)
/** UART5_SR_PE Parity error **/
#define UART5_SR_PE		(1 << 0)

/**@}*/

/** @defgroup uart5_dr DR Data register
@{*/


#define UART5_DR_DR_SHIFT		0
#define UART5_DR_DR_MASK		0x1ff
/** @defgroup uart5_dr_dr DR Data value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart5_brr BRR Baud rate register
@{*/


#define UART5_BRR_DIV_Mantissa_SHIFT		4
#define UART5_BRR_DIV_Mantissa_MASK		0xfff
/** @defgroup uart5_brr_div_mantissa DIVMantissa mantissa of USARTDIV
@{*/
/**@}*/


#define UART5_BRR_DIV_Fraction_SHIFT		0
#define UART5_BRR_DIV_Fraction_MASK		0x0f
/** @defgroup uart5_brr_div_fraction DIVFraction fraction of USARTDIV
@{*/
/**@}*/


/**@}*/

/** @defgroup uart5_cr1 CR1 Control register 1
@{*/

/** UART5_CR1_OVER8 Oversampling mode **/
#define UART5_CR1_OVER8		(1 << 15)
/** UART5_CR1_UE USART enable **/
#define UART5_CR1_UE		(1 << 13)
/** UART5_CR1_M Word length **/
#define UART5_CR1_M		(1 << 12)
/** UART5_CR1_WAKE Wakeup method **/
#define UART5_CR1_WAKE		(1 << 11)
/** UART5_CR1_PCE Parity control enable **/
#define UART5_CR1_PCE		(1 << 10)
/** UART5_CR1_PS Parity selection **/
#define UART5_CR1_PS		(1 << 9)
/** UART5_CR1_PEIE PE interrupt enable **/
#define UART5_CR1_PEIE		(1 << 8)
/** UART5_CR1_TXEIE TXE interrupt enable **/
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
/** UART5_CR1_RWU Receiver wakeup **/
#define UART5_CR1_RWU		(1 << 1)
/** UART5_CR1_SBK Send break **/
#define UART5_CR1_SBK		(1 << 0)

/**@}*/

/** @defgroup uart5_cr2 CR2 Control register 2
@{*/

/** UART5_CR2_LINEN LIN mode enable **/
#define UART5_CR2_LINEN		(1 << 14)

#define UART5_CR2_STOP_SHIFT		12
#define UART5_CR2_STOP_MASK		0x03
/** @defgroup uart5_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** UART5_CR2_LBDIE LIN break detection interrupt enable **/
#define UART5_CR2_LBDIE		(1 << 6)
/** UART5_CR2_LBDL lin break detection length **/
#define UART5_CR2_LBDL		(1 << 5)

#define UART5_CR2_ADD_SHIFT		0
#define UART5_CR2_ADD_MASK		0x0f
/** @defgroup uart5_cr2_add ADD Address of the USART node
@{*/
/**@}*/


/**@}*/

/** @defgroup uart5_cr3 CR3 Control register 3
@{*/

/** UART5_CR3_ONEBIT One sample bit method enable **/
#define UART5_CR3_ONEBIT		(1 << 11)
/** UART5_CR3_DMAT DMA enable transmitter **/
#define UART5_CR3_DMAT		(1 << 7)
/** UART5_CR3_DMAR DMA enable receiver **/
#define UART5_CR3_DMAR		(1 << 6)
/** UART5_CR3_HDSEL Half-duplex selection **/
#define UART5_CR3_HDSEL		(1 << 3)
/** UART5_CR3_IRLP IrDA low-power **/
#define UART5_CR3_IRLP		(1 << 2)
/** UART5_CR3_IREN IrDA mode enable **/
#define UART5_CR3_IREN		(1 << 1)
/** UART5_CR3_EIE Error interrupt enable **/
#define UART5_CR3_EIE		(1 << 0)

/**@}*/

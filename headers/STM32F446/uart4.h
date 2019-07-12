#pragma once 

/* --- UART4: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup uart4_registers Universal synchronous asynchronous receiver
      transmitter Register
@{*/

/** UART4_SR Status register **/
#define UART4_SR			MMIO32(UART4_BASE + 0x00)
/** UART4_DR Data register **/
#define UART4_DR			MMIO32(UART4_BASE + 0x04)
/** UART4_BRR Baud rate register **/
#define UART4_BRR			MMIO32(UART4_BASE + 0x08)
/** UART4_CR1 Control register 1 **/
#define UART4_CR1			MMIO32(UART4_BASE + 0x0c)
/** UART4_CR2 Control register 2 **/
#define UART4_CR2			MMIO32(UART4_BASE + 0x10)
/** UART4_CR3 Control register 3 **/
#define UART4_CR3			MMIO32(UART4_BASE + 0x14)

/**@}*/


/** @defgroup uart4_sr SR Status register
@{*/

/** UART4_SR_LBD LIN break detection flag **/
#define UART4_SR_LBD		(1 << 8)
/** UART4_SR_TXE Transmit data register empty **/
#define UART4_SR_TXE		(1 << 7)
/** UART4_SR_TC Transmission complete **/
#define UART4_SR_TC		(1 << 6)
/** UART4_SR_RXNE Read data register not empty **/
#define UART4_SR_RXNE		(1 << 5)
/** UART4_SR_IDLE IDLE line detected **/
#define UART4_SR_IDLE		(1 << 4)
/** UART4_SR_ORE Overrun error **/
#define UART4_SR_ORE		(1 << 3)
/** UART4_SR_NF Noise detected flag **/
#define UART4_SR_NF		(1 << 2)
/** UART4_SR_FE Framing error **/
#define UART4_SR_FE		(1 << 1)
/** UART4_SR_PE Parity error **/
#define UART4_SR_PE		(1 << 0)

/**@}*/

/** @defgroup uart4_dr DR Data register
@{*/


#define UART4_DR_DR_SHIFT		0
#define UART4_DR_DR_MASK		0x1ff
/** @defgroup uart4_dr_dr DR Data value
@{*/
/**@}*/


/**@}*/

/** @defgroup uart4_brr BRR Baud rate register
@{*/


#define UART4_BRR_DIV_Mantissa_SHIFT		4
#define UART4_BRR_DIV_Mantissa_MASK		0xfff
/** @defgroup uart4_brr_div_mantissa DIVMantissa mantissa of USARTDIV
@{*/
/**@}*/


#define UART4_BRR_DIV_Fraction_SHIFT		0
#define UART4_BRR_DIV_Fraction_MASK		0x0f
/** @defgroup uart4_brr_div_fraction DIVFraction fraction of USARTDIV
@{*/
/**@}*/


/**@}*/

/** @defgroup uart4_cr1 CR1 Control register 1
@{*/

/** UART4_CR1_OVER8 Oversampling mode **/
#define UART4_CR1_OVER8		(1 << 15)
/** UART4_CR1_UE USART enable **/
#define UART4_CR1_UE		(1 << 13)
/** UART4_CR1_M Word length **/
#define UART4_CR1_M		(1 << 12)
/** UART4_CR1_WAKE Wakeup method **/
#define UART4_CR1_WAKE		(1 << 11)
/** UART4_CR1_PCE Parity control enable **/
#define UART4_CR1_PCE		(1 << 10)
/** UART4_CR1_PS Parity selection **/
#define UART4_CR1_PS		(1 << 9)
/** UART4_CR1_PEIE PE interrupt enable **/
#define UART4_CR1_PEIE		(1 << 8)
/** UART4_CR1_TXEIE TXE interrupt enable **/
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
/** UART4_CR1_RWU Receiver wakeup **/
#define UART4_CR1_RWU		(1 << 1)
/** UART4_CR1_SBK Send break **/
#define UART4_CR1_SBK		(1 << 0)

/**@}*/

/** @defgroup uart4_cr2 CR2 Control register 2
@{*/

/** UART4_CR2_LINEN LIN mode enable **/
#define UART4_CR2_LINEN		(1 << 14)

#define UART4_CR2_STOP_SHIFT		12
#define UART4_CR2_STOP_MASK		0x03
/** @defgroup uart4_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** UART4_CR2_LBDIE LIN break detection interrupt enable **/
#define UART4_CR2_LBDIE		(1 << 6)
/** UART4_CR2_LBDL lin break detection length **/
#define UART4_CR2_LBDL		(1 << 5)

#define UART4_CR2_ADD_SHIFT		0
#define UART4_CR2_ADD_MASK		0x0f
/** @defgroup uart4_cr2_add ADD Address of the USART node
@{*/
/**@}*/


/**@}*/

/** @defgroup uart4_cr3 CR3 Control register 3
@{*/

/** UART4_CR3_ONEBIT One sample bit method enable **/
#define UART4_CR3_ONEBIT		(1 << 11)
/** UART4_CR3_DMAT DMA enable transmitter **/
#define UART4_CR3_DMAT		(1 << 7)
/** UART4_CR3_DMAR DMA enable receiver **/
#define UART4_CR3_DMAR		(1 << 6)
/** UART4_CR3_HDSEL Half-duplex selection **/
#define UART4_CR3_HDSEL		(1 << 3)
/** UART4_CR3_IRLP IrDA low-power **/
#define UART4_CR3_IRLP		(1 << 2)
/** UART4_CR3_IREN IrDA mode enable **/
#define UART4_CR3_IREN		(1 << 1)
/** UART4_CR3_EIE Error interrupt enable **/
#define UART4_CR3_EIE		(1 << 0)

/**@}*/

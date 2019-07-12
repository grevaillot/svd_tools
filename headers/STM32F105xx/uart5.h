#pragma once 

/* --- UART5: Universal asynchronous receiver transmitter ----------- */

/** @defgroup uart5_registers Universal asynchronous receiver
      transmitter Register
@{*/

/** UART5_SR UART5 SR **/
#define UART5_SR			MMIO32(UART5_BASE + 0x00)
/** UART5_DR UART5 DR **/
#define UART5_DR			MMIO32(UART5_BASE + 0x04)
/** UART5_BRR UART5 BRR **/
#define UART5_BRR			MMIO32(UART5_BASE + 0x08)
/** UART5_CR1 UART5 CR1 **/
#define UART5_CR1			MMIO32(UART5_BASE + 0x0c)
/** UART5_CR2 UART5 CR2 **/
#define UART5_CR2			MMIO32(UART5_BASE + 0x10)
/** UART5_CR3 UART5 CR3 **/
#define UART5_CR3			MMIO32(UART5_BASE + 0x14)

/**@}*/


/** @defgroup uart5_sr SR UART5 SR
@{*/

/** UART5_SR_LBD LBD **/
#define UART5_SR_LBD		(1 << 8)
/** UART5_SR_TXE TXE **/
#define UART5_SR_TXE		(1 << 7)
/** UART5_SR_TC TC **/
#define UART5_SR_TC		(1 << 6)
/** UART5_SR_RXNE RXNE **/
#define UART5_SR_RXNE		(1 << 5)
/** UART5_SR_IDLE IDLE **/
#define UART5_SR_IDLE		(1 << 4)
/** UART5_SR_ORE ORE **/
#define UART5_SR_ORE		(1 << 3)
/** UART5_SR_NE NE **/
#define UART5_SR_NE		(1 << 2)
/** UART5_SR_FE FE **/
#define UART5_SR_FE		(1 << 1)
/** UART5_SR_PE PE **/
#define UART5_SR_PE		(1 << 0)

/**@}*/

/** @defgroup uart5_dr DR UART5 DR
@{*/


#define UART5_DR_DR_SHIFT		0
#define UART5_DR_DR_MASK		0x1ff
/** @defgroup uart5_dr_dr DR DR
@{*/
/**@}*/


/**@}*/

/** @defgroup uart5_brr BRR UART5 BRR
@{*/


#define UART5_BRR_DIV_Mantissa_SHIFT		4
#define UART5_BRR_DIV_Mantissa_MASK		0xfff
/** @defgroup uart5_brr_div_mantissa DIVMantissa DIV_Mantissa
@{*/
/**@}*/


#define UART5_BRR_DIV_Fraction_SHIFT		0
#define UART5_BRR_DIV_Fraction_MASK		0x0f
/** @defgroup uart5_brr_div_fraction DIVFraction DIV_Fraction
@{*/
/**@}*/


/**@}*/

/** @defgroup uart5_cr1 CR1 UART5 CR1
@{*/

/** UART5_CR1_UE UE **/
#define UART5_CR1_UE		(1 << 13)
/** UART5_CR1_M M **/
#define UART5_CR1_M		(1 << 12)
/** UART5_CR1_WAKE WAKE **/
#define UART5_CR1_WAKE		(1 << 11)
/** UART5_CR1_PCE PCE **/
#define UART5_CR1_PCE		(1 << 10)
/** UART5_CR1_PS PS **/
#define UART5_CR1_PS		(1 << 9)
/** UART5_CR1_PEIE PEIE **/
#define UART5_CR1_PEIE		(1 << 8)
/** UART5_CR1_TXEIE TXEIE **/
#define UART5_CR1_TXEIE		(1 << 7)
/** UART5_CR1_TCIE TCIE **/
#define UART5_CR1_TCIE		(1 << 6)
/** UART5_CR1_RXNEIE RXNEIE **/
#define UART5_CR1_RXNEIE		(1 << 5)
/** UART5_CR1_IDLEIE IDLEIE **/
#define UART5_CR1_IDLEIE		(1 << 4)
/** UART5_CR1_TE TE **/
#define UART5_CR1_TE		(1 << 3)
/** UART5_CR1_RE RE **/
#define UART5_CR1_RE		(1 << 2)
/** UART5_CR1_RWU RWU **/
#define UART5_CR1_RWU		(1 << 1)
/** UART5_CR1_SBK SBK **/
#define UART5_CR1_SBK		(1 << 0)

/**@}*/

/** @defgroup uart5_cr2 CR2 UART5 CR2
@{*/

/** UART5_CR2_LINEN LINEN **/
#define UART5_CR2_LINEN		(1 << 14)

#define UART5_CR2_STOP_SHIFT		12
#define UART5_CR2_STOP_MASK		0x03
/** @defgroup uart5_cr2_stop STOP STOP
@{*/
/**@}*/

/** UART5_CR2_LBDIE LBDIE **/
#define UART5_CR2_LBDIE		(1 << 6)
/** UART5_CR2_LBDL LBDL **/
#define UART5_CR2_LBDL		(1 << 5)

#define UART5_CR2_ADD_SHIFT		0
#define UART5_CR2_ADD_MASK		0x0f
/** @defgroup uart5_cr2_add ADD ADD
@{*/
/**@}*/


/**@}*/

/** @defgroup uart5_cr3 CR3 UART5 CR3
@{*/

/** UART5_CR3_DMAT DMA enable transmitter **/
#define UART5_CR3_DMAT		(1 << 7)
/** UART5_CR3_HDSEL Half-duplex selection **/
#define UART5_CR3_HDSEL		(1 << 3)
/** UART5_CR3_IRLP IrDA low-power **/
#define UART5_CR3_IRLP		(1 << 2)
/** UART5_CR3_IREN IrDA mode enable **/
#define UART5_CR3_IREN		(1 << 1)
/** UART5_CR3_EIE Error interrupt enable **/
#define UART5_CR3_EIE		(1 << 0)

/**@}*/

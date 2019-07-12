#pragma once 

/* --- SC1: Serial controller 1 ------------------------------------- */

/** @defgroup sc1_registers Serial controller 1 Register
@{*/

/** SC1_SC1_ISR Serial controller interrupt status register **/
#define SC1_SC1_ISR			MMIO32(SC1_BASE + 0x00)
/** SC1_SC1_IER Serial controller interrupt enable register **/
#define SC1_SC1_IER			MMIO32(SC1_BASE + 0x40)
/** SC1_SC1_ICR Serial controller interrupt control register **/
#define SC1_SC1_ICR			MMIO32(SC1_BASE + 0x4c)
/** SC1_SC1_DR Serial control Data register **/
#define SC1_SC1_DR			MMIO32(SC1_BASE + 0x2034)
/** SC1_SC1_CR Serial controller control register **/
#define SC1_SC1_CR			MMIO32(SC1_BASE + 0x204c)
/** SC1_SC1_CRR1 Serial controller clock rate register **/
#define SC1_SC1_CRR1			MMIO32(SC1_BASE + 0x2058)
/** SC1_SC1_CRR2 Serial controller clock rate register 2 **/
#define SC1_SC1_CRR2			MMIO32(SC1_BASE + 0x205c)

/**@}*/


/** @defgroup sc1_sc1_isr SC1ISR Serial controller interrupt status register
@{*/

/** SC1_SC1_ISR_PE PE **/
#define SC1_SC1_ISR_PE		(1 << 14)
/** SC1_SC1_ISR_FE FE **/
#define SC1_SC1_ISR_FE		(1 << 13)
/** SC1_SC1_ISR_TXULODB TXULODB **/
#define SC1_SC1_ISR_TXULODB		(1 << 12)
/** SC1_SC1_ISR_TXULODA TXULODA **/
#define SC1_SC1_ISR_TXULODA		(1 << 11)
/** SC1_SC1_ISR_RXULODB RXULODB **/
#define SC1_SC1_ISR_RXULODB		(1 << 10)
/** SC1_SC1_ISR_RXULODA RXULODA **/
#define SC1_SC1_ISR_RXULODA		(1 << 9)
/** SC1_SC1_ISR_NACK NACK **/
#define SC1_SC1_ISR_NACK		(1 << 8)
/** SC1_SC1_ISR_CMDFIN CMDFIN **/
#define SC1_SC1_ISR_CMDFIN		(1 << 7)
/** SC1_SC1_ISR_BTF BTF **/
#define SC1_SC1_ISR_BTF		(1 << 6)
/** SC1_SC1_ISR_BRF BRF **/
#define SC1_SC1_ISR_BRF		(1 << 5)
/** SC1_SC1_ISR_UDR UDR **/
#define SC1_SC1_ISR_UDR		(1 << 4)
/** SC1_SC1_ISR_OVR OVR **/
#define SC1_SC1_ISR_OVR		(1 << 3)
/** SC1_SC1_ISR_IDLE IDLE **/
#define SC1_SC1_ISR_IDLE		(1 << 2)
/** SC1_SC1_ISR_TXE TXE **/
#define SC1_SC1_ISR_TXE		(1 << 1)
/** SC1_SC1_ISR_RXNE RXNE **/
#define SC1_SC1_ISR_RXNE		(1 << 0)

/**@}*/

/** @defgroup sc1_sc1_ier SC1IER Serial controller interrupt enable register
@{*/

/** SC1_SC1_IER_PEIE PEIE **/
#define SC1_SC1_IER_PEIE		(1 << 14)
/** SC1_SC1_IER_FEIE FEIE **/
#define SC1_SC1_IER_FEIE		(1 << 13)
/** SC1_SC1_IER_TXULODBIE TXULODBIE **/
#define SC1_SC1_IER_TXULODBIE		(1 << 12)
/** SC1_SC1_IER_TXULODAIE TXULODAIE **/
#define SC1_SC1_IER_TXULODAIE		(1 << 11)
/** SC1_SC1_IER_RXULODBIE RXULODBIE **/
#define SC1_SC1_IER_RXULODBIE		(1 << 10)
/** SC1_SC1_IER_RXULODAIE RXULODAIE **/
#define SC1_SC1_IER_RXULODAIE		(1 << 9)
/** SC1_SC1_IER_NACKIE NACKIE **/
#define SC1_SC1_IER_NACKIE		(1 << 8)
/** SC1_SC1_IER_CMDFINIE CMDFINIE **/
#define SC1_SC1_IER_CMDFINIE		(1 << 7)
/** SC1_SC1_IER_BTFIE BTFIE **/
#define SC1_SC1_IER_BTFIE		(1 << 6)
/** SC1_SC1_IER_BRFIE BRFIE **/
#define SC1_SC1_IER_BRFIE		(1 << 5)
/** SC1_SC1_IER_UDRIE UDRIE **/
#define SC1_SC1_IER_UDRIE		(1 << 4)
/** SC1_SC1_IER_OVRIE OVRIE **/
#define SC1_SC1_IER_OVRIE		(1 << 3)
/** SC1_SC1_IER_IDLEIE IDLEIE **/
#define SC1_SC1_IER_IDLEIE		(1 << 2)
/** SC1_SC1_IER_TXEIE TXEIE **/
#define SC1_SC1_IER_TXEIE		(1 << 1)
/** SC1_SC1_IER_RXNEIE RXNEIE **/
#define SC1_SC1_IER_RXNEIE		(1 << 0)

/**@}*/

/** @defgroup sc1_sc1_icr SC1ICR Serial controller interrupt control register
@{*/

/** SC1_SC1_ICR_IDLELEVEL IDLELEVEL **/
#define SC1_SC1_ICR_IDLELEVEL		(1 << 2)
/** SC1_SC1_ICR_TXELEVEL TXELEVEL **/
#define SC1_SC1_ICR_TXELEVEL		(1 << 1)
/** SC1_SC1_ICR_RXNELEVEL RXNELEVEL **/
#define SC1_SC1_ICR_RXNELEVEL		(1 << 0)

/**@}*/

/** @defgroup sc1_sc1_dr SC1DR Serial control Data register
@{*/


#define SC1_SC1_DR_DR_SHIFT		0
#define SC1_SC1_DR_DR_MASK		0xff
/** @defgroup sc1_sc1_dr_dr DR DR
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_sc1_cr SC1CR Serial controller control register
@{*/


#define SC1_SC1_CR_MODE_SHIFT		0
#define SC1_SC1_CR_MODE_MASK		0x03
/** @defgroup sc1_sc1_cr_mode MODE MODE
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_sc1_crr1 SC1CRR1 Serial controller clock rate register
@{*/


#define SC1_SC1_CRR1_LIN_SHIFT		0
#define SC1_SC1_CRR1_LIN_MASK		0x0f
/** @defgroup sc1_sc1_crr1_lin LIN LIN
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_sc1_crr2 SC1CRR2 Serial controller clock rate register 2
@{*/


#define SC1_SC1_CRR2_EXP_SHIFT		0
#define SC1_SC1_CRR2_EXP_MASK		0x0f
/** @defgroup sc1_sc1_crr2_exp EXP EXP
@{*/
/**@}*/


/**@}*/

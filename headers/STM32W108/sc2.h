#pragma once 

/* --- SC2: Serial controller 2 ------------------------------------- */

/** @defgroup sc2_registers Serial controller 2 Register
@{*/

/** SC2_SC2_ISR Serial controller interrupt status register **/
#define SC2_SC2_ISR			MMIO32(SC2_BASE + 0x00)
/** SC2_SC2_IER Serial controller interrupt enable register **/
#define SC2_SC2_IER			MMIO32(SC2_BASE + 0x40)
/** SC2_SC2_ICR Serial controller interrupt control register **/
#define SC2_SC2_ICR			MMIO32(SC2_BASE + 0x4c)
/** SC2_SC2_DR Serial controller data register **/
#define SC2_SC2_DR			MMIO32(SC2_BASE + 0x1830)
/** SC2_SC2_CR Serial controller control register **/
#define SC2_SC2_CR			MMIO32(SC2_BASE + 0x1848)
/** SC2_SC2_CRR1 Serial controller clock rate register 1 **/
#define SC2_SC2_CRR1			MMIO32(SC2_BASE + 0x1854)
/** SC2_SC2_CRR2 Serial controller clock rate register 2 **/
#define SC2_SC2_CRR2			MMIO32(SC2_BASE + 0x1858)

/**@}*/


/** @defgroup sc2_sc2_isr SC2ISR Serial controller interrupt status register
@{*/

/** SC2_SC2_ISR_PE PE **/
#define SC2_SC2_ISR_PE		(1 << 14)
/** SC2_SC2_ISR_FE FE **/
#define SC2_SC2_ISR_FE		(1 << 13)
/** SC2_SC2_ISR_TXULODB TXULODB **/
#define SC2_SC2_ISR_TXULODB		(1 << 12)
/** SC2_SC2_ISR_TXULODA TXULODA **/
#define SC2_SC2_ISR_TXULODA		(1 << 11)
/** SC2_SC2_ISR_RXULODB RXULODB **/
#define SC2_SC2_ISR_RXULODB		(1 << 10)
/** SC2_SC2_ISR_RXULODA RXULODA **/
#define SC2_SC2_ISR_RXULODA		(1 << 9)
/** SC2_SC2_ISR_NACK NACK **/
#define SC2_SC2_ISR_NACK		(1 << 8)
/** SC2_SC2_ISR_CMDFIN CMDFIN **/
#define SC2_SC2_ISR_CMDFIN		(1 << 7)
/** SC2_SC2_ISR_BTF BTF **/
#define SC2_SC2_ISR_BTF		(1 << 6)
/** SC2_SC2_ISR_BRF BRF **/
#define SC2_SC2_ISR_BRF		(1 << 5)
/** SC2_SC2_ISR_UDR UDR **/
#define SC2_SC2_ISR_UDR		(1 << 4)
/** SC2_SC2_ISR_OVR OVR **/
#define SC2_SC2_ISR_OVR		(1 << 3)
/** SC2_SC2_ISR_IDLE IDLE **/
#define SC2_SC2_ISR_IDLE		(1 << 2)
/** SC2_SC2_ISR_TXE TXE **/
#define SC2_SC2_ISR_TXE		(1 << 1)
/** SC2_SC2_ISR_RXNE RXNE **/
#define SC2_SC2_ISR_RXNE		(1 << 0)

/**@}*/

/** @defgroup sc2_sc2_ier SC2IER Serial controller interrupt enable register
@{*/

/** SC2_SC2_IER_PEIE PEIE **/
#define SC2_SC2_IER_PEIE		(1 << 14)
/** SC2_SC2_IER_FEIE FEIE **/
#define SC2_SC2_IER_FEIE		(1 << 13)
/** SC2_SC2_IER_TXULODBIE TXULODBIE **/
#define SC2_SC2_IER_TXULODBIE		(1 << 12)
/** SC2_SC2_IER_TXULODAIE TXULODAIE **/
#define SC2_SC2_IER_TXULODAIE		(1 << 11)
/** SC2_SC2_IER_RXULODBIE RXULODBIE **/
#define SC2_SC2_IER_RXULODBIE		(1 << 10)
/** SC2_SC2_IER_RXULODAIE RXULODAIE **/
#define SC2_SC2_IER_RXULODAIE		(1 << 9)
/** SC2_SC2_IER_NACKIE NACKIE **/
#define SC2_SC2_IER_NACKIE		(1 << 8)
/** SC2_SC2_IER_CMDFINIE CMDFINIE **/
#define SC2_SC2_IER_CMDFINIE		(1 << 7)
/** SC2_SC2_IER_BTFIE BTFIE **/
#define SC2_SC2_IER_BTFIE		(1 << 6)
/** SC2_SC2_IER_BRFIE BRFIE **/
#define SC2_SC2_IER_BRFIE		(1 << 5)
/** SC2_SC2_IER_UDRIE UDRIE **/
#define SC2_SC2_IER_UDRIE		(1 << 4)
/** SC2_SC2_IER_OVRIE OVRIE **/
#define SC2_SC2_IER_OVRIE		(1 << 3)
/** SC2_SC2_IER_IDLEIE IDLEIE **/
#define SC2_SC2_IER_IDLEIE		(1 << 2)
/** SC2_SC2_IER_TXEIE TXEIE **/
#define SC2_SC2_IER_TXEIE		(1 << 1)
/** SC2_SC2_IER_RXNEIE RXNEIE **/
#define SC2_SC2_IER_RXNEIE		(1 << 0)

/**@}*/

/** @defgroup sc2_sc2_icr SC2ICR Serial controller interrupt control register
@{*/

/** SC2_SC2_ICR_IDLELEVEL IDLELEVEL **/
#define SC2_SC2_ICR_IDLELEVEL		(1 << 2)
/** SC2_SC2_ICR_TXELEVEL TXELEVEL **/
#define SC2_SC2_ICR_TXELEVEL		(1 << 1)
/** SC2_SC2_ICR_RXNELEVEL RXNELEVEL **/
#define SC2_SC2_ICR_RXNELEVEL		(1 << 0)

/**@}*/

/** @defgroup sc2_sc2_dr SC2DR Serial controller data register
@{*/


#define SC2_SC2_DR_DR_SHIFT		0
#define SC2_SC2_DR_DR_MASK		0xff
/** @defgroup sc2_sc2_dr_dr DR DR
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_sc2_cr SC2CR Serial controller control register
@{*/


#define SC2_SC2_CR_MODE_SHIFT		0
#define SC2_SC2_CR_MODE_MASK		0x03
/** @defgroup sc2_sc2_cr_mode MODE MODE
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_sc2_crr1 SC2CRR1 Serial controller clock rate register 1
@{*/


#define SC2_SC2_CRR1_LIN_SHIFT		0
#define SC2_SC2_CRR1_LIN_MASK		0x0f
/** @defgroup sc2_sc2_crr1_lin LIN LIN
@{*/
/**@}*/


/**@}*/

/** @defgroup sc2_sc2_crr2 SC2CRR2 Serial controller clock rate register 2
@{*/


#define SC2_SC2_CRR2_EXP_SHIFT		0
#define SC2_SC2_CRR2_EXP_MASK		0x0f
/** @defgroup sc2_sc2_crr2_exp EXP EXP
@{*/
/**@}*/


/**@}*/

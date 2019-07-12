#pragma once 

/* --- TSC: Touch sensing controller -------------------------------- */

/** @defgroup tsc_registers Touch sensing controller Register
@{*/

/** TSC_CR control register **/
#define TSC_CR			MMIO32(TSC_BASE + 0x00)
/** TSC_IER interrupt enable register **/
#define TSC_IER			MMIO32(TSC_BASE + 0x04)
/** TSC_ICR interrupt clear register **/
#define TSC_ICR			MMIO32(TSC_BASE + 0x08)
/** TSC_ISR interrupt status register **/
#define TSC_ISR			MMIO32(TSC_BASE + 0x0c)
/** TSC_IOHCR I/O hysteresis control register **/
#define TSC_IOHCR			MMIO32(TSC_BASE + 0x10)
/** TSC_IOASCR I/O analog switch control register **/
#define TSC_IOASCR			MMIO32(TSC_BASE + 0x18)
/** TSC_IOSCR I/O sampling control register **/
#define TSC_IOSCR			MMIO32(TSC_BASE + 0x20)
/** TSC_IOCCR I/O channel control register **/
#define TSC_IOCCR			MMIO32(TSC_BASE + 0x28)
/** TSC_IOGCSR I/O group control status register **/
#define TSC_IOGCSR			MMIO32(TSC_BASE + 0x30)
/** TSC_IOG1CR I/O group x counter register **/
#define TSC_IOG1CR			MMIO32(TSC_BASE + 0x34)
/** TSC_IOG2CR I/O group x counter register **/
#define TSC_IOG2CR			MMIO32(TSC_BASE + 0x38)
/** TSC_IOG3CR I/O group x counter register **/
#define TSC_IOG3CR			MMIO32(TSC_BASE + 0x3c)
/** TSC_IOG4CR I/O group x counter register **/
#define TSC_IOG4CR			MMIO32(TSC_BASE + 0x40)
/** TSC_IOG5CR I/O group x counter register **/
#define TSC_IOG5CR			MMIO32(TSC_BASE + 0x44)
/** TSC_IOG6CR I/O group x counter register **/
#define TSC_IOG6CR			MMIO32(TSC_BASE + 0x48)
/** TSC_IOG7CR I/O group x counter register **/
#define TSC_IOG7CR			MMIO32(TSC_BASE + 0x4c)
/** TSC_IOG8CR I/O group x counter register **/
#define TSC_IOG8CR			MMIO32(TSC_BASE + 0x50)

/**@}*/


/** @defgroup tsc_cr CR control register
@{*/


#define TSC_CR_CTPH_SHIFT		28
#define TSC_CR_CTPH_MASK		0x0f
/** @defgroup tsc_cr_ctph CTPH Charge transfer pulse high
@{*/
/**@}*/


#define TSC_CR_CTPL_SHIFT		24
#define TSC_CR_CTPL_MASK		0x0f
/** @defgroup tsc_cr_ctpl CTPL Charge transfer pulse low
@{*/
/**@}*/


#define TSC_CR_SSD_SHIFT		17
#define TSC_CR_SSD_MASK		0x7f
/** @defgroup tsc_cr_ssd SSD Spread spectrum deviation
@{*/
/**@}*/

/** TSC_CR_SSE Spread spectrum enable **/
#define TSC_CR_SSE		(1 << 16)
/** TSC_CR_SSPSC Spread spectrum prescaler **/
#define TSC_CR_SSPSC		(1 << 15)

#define TSC_CR_PGPSC_SHIFT		12
#define TSC_CR_PGPSC_MASK		0x07
/** @defgroup tsc_cr_pgpsc PGPSC pulse generator prescaler
@{*/
/**@}*/


#define TSC_CR_MCV_SHIFT		5
#define TSC_CR_MCV_MASK		0x07
/** @defgroup tsc_cr_mcv MCV Max count value
@{*/
/**@}*/

/** TSC_CR_IODEF I/O Default mode **/
#define TSC_CR_IODEF		(1 << 4)
/** TSC_CR_SYNCPOL Synchronization pin polarity **/
#define TSC_CR_SYNCPOL		(1 << 3)
/** TSC_CR_AM Acquisition mode **/
#define TSC_CR_AM		(1 << 2)
/** TSC_CR_START Start a new acquisition **/
#define TSC_CR_START		(1 << 1)
/** TSC_CR_TSCE Touch sensing controller enable **/
#define TSC_CR_TSCE		(1 << 0)

/**@}*/

/** @defgroup tsc_ier IER interrupt enable register
@{*/

/** TSC_IER_MCEIE Max count error interrupt enable **/
#define TSC_IER_MCEIE		(1 << 1)
/** TSC_IER_EOAIE End of acquisition interrupt enable **/
#define TSC_IER_EOAIE		(1 << 0)

/**@}*/

/** @defgroup tsc_icr ICR interrupt clear register
@{*/

/** TSC_ICR_MCEIC Max count error interrupt clear **/
#define TSC_ICR_MCEIC		(1 << 1)
/** TSC_ICR_EOAIC End of acquisition interrupt clear **/
#define TSC_ICR_EOAIC		(1 << 0)

/**@}*/

/** @defgroup tsc_isr ISR interrupt status register
@{*/

/** TSC_ISR_MCEF Max count error flag **/
#define TSC_ISR_MCEF		(1 << 1)
/** TSC_ISR_EOAF End of acquisition flag **/
#define TSC_ISR_EOAF		(1 << 0)

/**@}*/

/** @defgroup tsc_iohcr IOHCR I/O hysteresis control register
@{*/

/** TSC_IOHCR_G8_IO4 G8_IO4 **/
#define TSC_IOHCR_G8_IO4		(1 << 31)
/** TSC_IOHCR_G8_IO3 G8_IO3 **/
#define TSC_IOHCR_G8_IO3		(1 << 30)
/** TSC_IOHCR_G8_IO2 G8_IO2 **/
#define TSC_IOHCR_G8_IO2		(1 << 29)
/** TSC_IOHCR_G8_IO1 G8_IO1 **/
#define TSC_IOHCR_G8_IO1		(1 << 28)
/** TSC_IOHCR_G7_IO4 G7_IO4 **/
#define TSC_IOHCR_G7_IO4		(1 << 27)
/** TSC_IOHCR_G7_IO3 G7_IO3 **/
#define TSC_IOHCR_G7_IO3		(1 << 26)
/** TSC_IOHCR_G7_IO2 G7_IO2 **/
#define TSC_IOHCR_G7_IO2		(1 << 25)
/** TSC_IOHCR_G7_IO1 G7_IO1 **/
#define TSC_IOHCR_G7_IO1		(1 << 24)
/** TSC_IOHCR_G6_IO4 G6_IO4 **/
#define TSC_IOHCR_G6_IO4		(1 << 23)
/** TSC_IOHCR_G6_IO3 G6_IO3 **/
#define TSC_IOHCR_G6_IO3		(1 << 22)
/** TSC_IOHCR_G6_IO2 G6_IO2 **/
#define TSC_IOHCR_G6_IO2		(1 << 21)
/** TSC_IOHCR_G6_IO1 G6_IO1 **/
#define TSC_IOHCR_G6_IO1		(1 << 20)
/** TSC_IOHCR_G5_IO4 G5_IO4 **/
#define TSC_IOHCR_G5_IO4		(1 << 19)
/** TSC_IOHCR_G5_IO3 G5_IO3 **/
#define TSC_IOHCR_G5_IO3		(1 << 18)
/** TSC_IOHCR_G5_IO2 G5_IO2 **/
#define TSC_IOHCR_G5_IO2		(1 << 17)
/** TSC_IOHCR_G5_IO1 G5_IO1 **/
#define TSC_IOHCR_G5_IO1		(1 << 16)
/** TSC_IOHCR_G4_IO4 G4_IO4 **/
#define TSC_IOHCR_G4_IO4		(1 << 15)
/** TSC_IOHCR_G4_IO3 G4_IO3 **/
#define TSC_IOHCR_G4_IO3		(1 << 14)
/** TSC_IOHCR_G4_IO2 G4_IO2 **/
#define TSC_IOHCR_G4_IO2		(1 << 13)
/** TSC_IOHCR_G4_IO1 G4_IO1 **/
#define TSC_IOHCR_G4_IO1		(1 << 12)
/** TSC_IOHCR_G3_IO4 G3_IO4 **/
#define TSC_IOHCR_G3_IO4		(1 << 11)
/** TSC_IOHCR_G3_IO3 G3_IO3 **/
#define TSC_IOHCR_G3_IO3		(1 << 10)
/** TSC_IOHCR_G3_IO2 G3_IO2 **/
#define TSC_IOHCR_G3_IO2		(1 << 9)
/** TSC_IOHCR_G3_IO1 G3_IO1 **/
#define TSC_IOHCR_G3_IO1		(1 << 8)
/** TSC_IOHCR_G2_IO4 G2_IO4 **/
#define TSC_IOHCR_G2_IO4		(1 << 7)
/** TSC_IOHCR_G2_IO3 G2_IO3 **/
#define TSC_IOHCR_G2_IO3		(1 << 6)
/** TSC_IOHCR_G2_IO2 G2_IO2 **/
#define TSC_IOHCR_G2_IO2		(1 << 5)
/** TSC_IOHCR_G2_IO1 G2_IO1 **/
#define TSC_IOHCR_G2_IO1		(1 << 4)
/** TSC_IOHCR_G1_IO4 G1_IO4 **/
#define TSC_IOHCR_G1_IO4		(1 << 3)
/** TSC_IOHCR_G1_IO3 G1_IO3 **/
#define TSC_IOHCR_G1_IO3		(1 << 2)
/** TSC_IOHCR_G1_IO2 G1_IO2 **/
#define TSC_IOHCR_G1_IO2		(1 << 1)
/** TSC_IOHCR_G1_IO1 G1_IO1 **/
#define TSC_IOHCR_G1_IO1		(1 << 0)

/**@}*/

/** @defgroup tsc_ioascr IOASCR I/O analog switch control register
@{*/

/** TSC_IOASCR_G8_IO4 G8_IO4 **/
#define TSC_IOASCR_G8_IO4		(1 << 31)
/** TSC_IOASCR_G8_IO3 G8_IO3 **/
#define TSC_IOASCR_G8_IO3		(1 << 30)
/** TSC_IOASCR_G8_IO2 G8_IO2 **/
#define TSC_IOASCR_G8_IO2		(1 << 29)
/** TSC_IOASCR_G8_IO1 G8_IO1 **/
#define TSC_IOASCR_G8_IO1		(1 << 28)
/** TSC_IOASCR_G7_IO4 G7_IO4 **/
#define TSC_IOASCR_G7_IO4		(1 << 27)
/** TSC_IOASCR_G7_IO3 G7_IO3 **/
#define TSC_IOASCR_G7_IO3		(1 << 26)
/** TSC_IOASCR_G7_IO2 G7_IO2 **/
#define TSC_IOASCR_G7_IO2		(1 << 25)
/** TSC_IOASCR_G7_IO1 G7_IO1 **/
#define TSC_IOASCR_G7_IO1		(1 << 24)
/** TSC_IOASCR_G6_IO4 G6_IO4 **/
#define TSC_IOASCR_G6_IO4		(1 << 23)
/** TSC_IOASCR_G6_IO3 G6_IO3 **/
#define TSC_IOASCR_G6_IO3		(1 << 22)
/** TSC_IOASCR_G6_IO2 G6_IO2 **/
#define TSC_IOASCR_G6_IO2		(1 << 21)
/** TSC_IOASCR_G6_IO1 G6_IO1 **/
#define TSC_IOASCR_G6_IO1		(1 << 20)
/** TSC_IOASCR_G5_IO4 G5_IO4 **/
#define TSC_IOASCR_G5_IO4		(1 << 19)
/** TSC_IOASCR_G5_IO3 G5_IO3 **/
#define TSC_IOASCR_G5_IO3		(1 << 18)
/** TSC_IOASCR_G5_IO2 G5_IO2 **/
#define TSC_IOASCR_G5_IO2		(1 << 17)
/** TSC_IOASCR_G5_IO1 G5_IO1 **/
#define TSC_IOASCR_G5_IO1		(1 << 16)
/** TSC_IOASCR_G4_IO4 G4_IO4 **/
#define TSC_IOASCR_G4_IO4		(1 << 15)
/** TSC_IOASCR_G4_IO3 G4_IO3 **/
#define TSC_IOASCR_G4_IO3		(1 << 14)
/** TSC_IOASCR_G4_IO2 G4_IO2 **/
#define TSC_IOASCR_G4_IO2		(1 << 13)
/** TSC_IOASCR_G4_IO1 G4_IO1 **/
#define TSC_IOASCR_G4_IO1		(1 << 12)
/** TSC_IOASCR_G3_IO4 G3_IO4 **/
#define TSC_IOASCR_G3_IO4		(1 << 11)
/** TSC_IOASCR_G3_IO3 G3_IO3 **/
#define TSC_IOASCR_G3_IO3		(1 << 10)
/** TSC_IOASCR_G3_IO2 G3_IO2 **/
#define TSC_IOASCR_G3_IO2		(1 << 9)
/** TSC_IOASCR_G3_IO1 G3_IO1 **/
#define TSC_IOASCR_G3_IO1		(1 << 8)
/** TSC_IOASCR_G2_IO4 G2_IO4 **/
#define TSC_IOASCR_G2_IO4		(1 << 7)
/** TSC_IOASCR_G2_IO3 G2_IO3 **/
#define TSC_IOASCR_G2_IO3		(1 << 6)
/** TSC_IOASCR_G2_IO2 G2_IO2 **/
#define TSC_IOASCR_G2_IO2		(1 << 5)
/** TSC_IOASCR_G2_IO1 G2_IO1 **/
#define TSC_IOASCR_G2_IO1		(1 << 4)
/** TSC_IOASCR_G1_IO4 G1_IO4 **/
#define TSC_IOASCR_G1_IO4		(1 << 3)
/** TSC_IOASCR_G1_IO3 G1_IO3 **/
#define TSC_IOASCR_G1_IO3		(1 << 2)
/** TSC_IOASCR_G1_IO2 G1_IO2 **/
#define TSC_IOASCR_G1_IO2		(1 << 1)
/** TSC_IOASCR_G1_IO1 G1_IO1 **/
#define TSC_IOASCR_G1_IO1		(1 << 0)

/**@}*/

/** @defgroup tsc_ioscr IOSCR I/O sampling control register
@{*/

/** TSC_IOSCR_G8_IO4 G8_IO4 **/
#define TSC_IOSCR_G8_IO4		(1 << 31)
/** TSC_IOSCR_G8_IO3 G8_IO3 **/
#define TSC_IOSCR_G8_IO3		(1 << 30)
/** TSC_IOSCR_G8_IO2 G8_IO2 **/
#define TSC_IOSCR_G8_IO2		(1 << 29)
/** TSC_IOSCR_G8_IO1 G8_IO1 **/
#define TSC_IOSCR_G8_IO1		(1 << 28)
/** TSC_IOSCR_G7_IO4 G7_IO4 **/
#define TSC_IOSCR_G7_IO4		(1 << 27)
/** TSC_IOSCR_G7_IO3 G7_IO3 **/
#define TSC_IOSCR_G7_IO3		(1 << 26)
/** TSC_IOSCR_G7_IO2 G7_IO2 **/
#define TSC_IOSCR_G7_IO2		(1 << 25)
/** TSC_IOSCR_G7_IO1 G7_IO1 **/
#define TSC_IOSCR_G7_IO1		(1 << 24)
/** TSC_IOSCR_G6_IO4 G6_IO4 **/
#define TSC_IOSCR_G6_IO4		(1 << 23)
/** TSC_IOSCR_G6_IO3 G6_IO3 **/
#define TSC_IOSCR_G6_IO3		(1 << 22)
/** TSC_IOSCR_G6_IO2 G6_IO2 **/
#define TSC_IOSCR_G6_IO2		(1 << 21)
/** TSC_IOSCR_G6_IO1 G6_IO1 **/
#define TSC_IOSCR_G6_IO1		(1 << 20)
/** TSC_IOSCR_G5_IO4 G5_IO4 **/
#define TSC_IOSCR_G5_IO4		(1 << 19)
/** TSC_IOSCR_G5_IO3 G5_IO3 **/
#define TSC_IOSCR_G5_IO3		(1 << 18)
/** TSC_IOSCR_G5_IO2 G5_IO2 **/
#define TSC_IOSCR_G5_IO2		(1 << 17)
/** TSC_IOSCR_G5_IO1 G5_IO1 **/
#define TSC_IOSCR_G5_IO1		(1 << 16)
/** TSC_IOSCR_G4_IO4 G4_IO4 **/
#define TSC_IOSCR_G4_IO4		(1 << 15)
/** TSC_IOSCR_G4_IO3 G4_IO3 **/
#define TSC_IOSCR_G4_IO3		(1 << 14)
/** TSC_IOSCR_G4_IO2 G4_IO2 **/
#define TSC_IOSCR_G4_IO2		(1 << 13)
/** TSC_IOSCR_G4_IO1 G4_IO1 **/
#define TSC_IOSCR_G4_IO1		(1 << 12)
/** TSC_IOSCR_G3_IO4 G3_IO4 **/
#define TSC_IOSCR_G3_IO4		(1 << 11)
/** TSC_IOSCR_G3_IO3 G3_IO3 **/
#define TSC_IOSCR_G3_IO3		(1 << 10)
/** TSC_IOSCR_G3_IO2 G3_IO2 **/
#define TSC_IOSCR_G3_IO2		(1 << 9)
/** TSC_IOSCR_G3_IO1 G3_IO1 **/
#define TSC_IOSCR_G3_IO1		(1 << 8)
/** TSC_IOSCR_G2_IO4 G2_IO4 **/
#define TSC_IOSCR_G2_IO4		(1 << 7)
/** TSC_IOSCR_G2_IO3 G2_IO3 **/
#define TSC_IOSCR_G2_IO3		(1 << 6)
/** TSC_IOSCR_G2_IO2 G2_IO2 **/
#define TSC_IOSCR_G2_IO2		(1 << 5)
/** TSC_IOSCR_G2_IO1 G2_IO1 **/
#define TSC_IOSCR_G2_IO1		(1 << 4)
/** TSC_IOSCR_G1_IO4 G1_IO4 **/
#define TSC_IOSCR_G1_IO4		(1 << 3)
/** TSC_IOSCR_G1_IO3 G1_IO3 **/
#define TSC_IOSCR_G1_IO3		(1 << 2)
/** TSC_IOSCR_G1_IO2 G1_IO2 **/
#define TSC_IOSCR_G1_IO2		(1 << 1)
/** TSC_IOSCR_G1_IO1 G1_IO1 **/
#define TSC_IOSCR_G1_IO1		(1 << 0)

/**@}*/

/** @defgroup tsc_ioccr IOCCR I/O channel control register
@{*/

/** TSC_IOCCR_G8_IO4 G8_IO4 **/
#define TSC_IOCCR_G8_IO4		(1 << 31)
/** TSC_IOCCR_G8_IO3 G8_IO3 **/
#define TSC_IOCCR_G8_IO3		(1 << 30)
/** TSC_IOCCR_G8_IO2 G8_IO2 **/
#define TSC_IOCCR_G8_IO2		(1 << 29)
/** TSC_IOCCR_G8_IO1 G8_IO1 **/
#define TSC_IOCCR_G8_IO1		(1 << 28)
/** TSC_IOCCR_G7_IO4 G7_IO4 **/
#define TSC_IOCCR_G7_IO4		(1 << 27)
/** TSC_IOCCR_G7_IO3 G7_IO3 **/
#define TSC_IOCCR_G7_IO3		(1 << 26)
/** TSC_IOCCR_G7_IO2 G7_IO2 **/
#define TSC_IOCCR_G7_IO2		(1 << 25)
/** TSC_IOCCR_G7_IO1 G7_IO1 **/
#define TSC_IOCCR_G7_IO1		(1 << 24)
/** TSC_IOCCR_G6_IO4 G6_IO4 **/
#define TSC_IOCCR_G6_IO4		(1 << 23)
/** TSC_IOCCR_G6_IO3 G6_IO3 **/
#define TSC_IOCCR_G6_IO3		(1 << 22)
/** TSC_IOCCR_G6_IO2 G6_IO2 **/
#define TSC_IOCCR_G6_IO2		(1 << 21)
/** TSC_IOCCR_G6_IO1 G6_IO1 **/
#define TSC_IOCCR_G6_IO1		(1 << 20)
/** TSC_IOCCR_G5_IO4 G5_IO4 **/
#define TSC_IOCCR_G5_IO4		(1 << 19)
/** TSC_IOCCR_G5_IO3 G5_IO3 **/
#define TSC_IOCCR_G5_IO3		(1 << 18)
/** TSC_IOCCR_G5_IO2 G5_IO2 **/
#define TSC_IOCCR_G5_IO2		(1 << 17)
/** TSC_IOCCR_G5_IO1 G5_IO1 **/
#define TSC_IOCCR_G5_IO1		(1 << 16)
/** TSC_IOCCR_G4_IO4 G4_IO4 **/
#define TSC_IOCCR_G4_IO4		(1 << 15)
/** TSC_IOCCR_G4_IO3 G4_IO3 **/
#define TSC_IOCCR_G4_IO3		(1 << 14)
/** TSC_IOCCR_G4_IO2 G4_IO2 **/
#define TSC_IOCCR_G4_IO2		(1 << 13)
/** TSC_IOCCR_G4_IO1 G4_IO1 **/
#define TSC_IOCCR_G4_IO1		(1 << 12)
/** TSC_IOCCR_G3_IO4 G3_IO4 **/
#define TSC_IOCCR_G3_IO4		(1 << 11)
/** TSC_IOCCR_G3_IO3 G3_IO3 **/
#define TSC_IOCCR_G3_IO3		(1 << 10)
/** TSC_IOCCR_G3_IO2 G3_IO2 **/
#define TSC_IOCCR_G3_IO2		(1 << 9)
/** TSC_IOCCR_G3_IO1 G3_IO1 **/
#define TSC_IOCCR_G3_IO1		(1 << 8)
/** TSC_IOCCR_G2_IO4 G2_IO4 **/
#define TSC_IOCCR_G2_IO4		(1 << 7)
/** TSC_IOCCR_G2_IO3 G2_IO3 **/
#define TSC_IOCCR_G2_IO3		(1 << 6)
/** TSC_IOCCR_G2_IO2 G2_IO2 **/
#define TSC_IOCCR_G2_IO2		(1 << 5)
/** TSC_IOCCR_G2_IO1 G2_IO1 **/
#define TSC_IOCCR_G2_IO1		(1 << 4)
/** TSC_IOCCR_G1_IO4 G1_IO4 **/
#define TSC_IOCCR_G1_IO4		(1 << 3)
/** TSC_IOCCR_G1_IO3 G1_IO3 **/
#define TSC_IOCCR_G1_IO3		(1 << 2)
/** TSC_IOCCR_G1_IO2 G1_IO2 **/
#define TSC_IOCCR_G1_IO2		(1 << 1)
/** TSC_IOCCR_G1_IO1 G1_IO1 **/
#define TSC_IOCCR_G1_IO1		(1 << 0)

/**@}*/

/** @defgroup tsc_iogcsr IOGCSR I/O group control status register
@{*/

/** TSC_IOGCSR_G8S Analog I/O group x status **/
#define TSC_IOGCSR_G8S		(1 << 23)
/** TSC_IOGCSR_G7S Analog I/O group x status **/
#define TSC_IOGCSR_G7S		(1 << 22)
/** TSC_IOGCSR_G6S Analog I/O group x status **/
#define TSC_IOGCSR_G6S		(1 << 21)
/** TSC_IOGCSR_G5S Analog I/O group x status **/
#define TSC_IOGCSR_G5S		(1 << 20)
/** TSC_IOGCSR_G4S Analog I/O group x status **/
#define TSC_IOGCSR_G4S		(1 << 19)
/** TSC_IOGCSR_G3S Analog I/O group x status **/
#define TSC_IOGCSR_G3S		(1 << 18)
/** TSC_IOGCSR_G2S Analog I/O group x status **/
#define TSC_IOGCSR_G2S		(1 << 17)
/** TSC_IOGCSR_G1S Analog I/O group x status **/
#define TSC_IOGCSR_G1S		(1 << 16)
/** TSC_IOGCSR_G8E Analog I/O group x enable **/
#define TSC_IOGCSR_G8E		(1 << 7)
/** TSC_IOGCSR_G7E Analog I/O group x enable **/
#define TSC_IOGCSR_G7E		(1 << 6)
/** TSC_IOGCSR_G6E Analog I/O group x enable **/
#define TSC_IOGCSR_G6E		(1 << 5)
/** TSC_IOGCSR_G5E Analog I/O group x enable **/
#define TSC_IOGCSR_G5E		(1 << 4)
/** TSC_IOGCSR_G4E Analog I/O group x enable **/
#define TSC_IOGCSR_G4E		(1 << 3)
/** TSC_IOGCSR_G3E Analog I/O group x enable **/
#define TSC_IOGCSR_G3E		(1 << 2)
/** TSC_IOGCSR_G2E Analog I/O group x enable **/
#define TSC_IOGCSR_G2E		(1 << 1)
/** TSC_IOGCSR_G1E Analog I/O group x enable **/
#define TSC_IOGCSR_G1E		(1 << 0)

/**@}*/

/** @defgroup tsc_iog1cr IOG1CR I/O group x counter register
@{*/


#define TSC_IOG1CR_CNT_SHIFT		0
#define TSC_IOG1CR_CNT_MASK		0x3fff
/** @defgroup tsc_iog1cr_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tsc_iog2cr IOG2CR I/O group x counter register
@{*/


#define TSC_IOG2CR_CNT_SHIFT		0
#define TSC_IOG2CR_CNT_MASK		0x3fff
/** @defgroup tsc_iog2cr_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tsc_iog3cr IOG3CR I/O group x counter register
@{*/


#define TSC_IOG3CR_CNT_SHIFT		0
#define TSC_IOG3CR_CNT_MASK		0x3fff
/** @defgroup tsc_iog3cr_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tsc_iog4cr IOG4CR I/O group x counter register
@{*/


#define TSC_IOG4CR_CNT_SHIFT		0
#define TSC_IOG4CR_CNT_MASK		0x3fff
/** @defgroup tsc_iog4cr_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tsc_iog5cr IOG5CR I/O group x counter register
@{*/


#define TSC_IOG5CR_CNT_SHIFT		0
#define TSC_IOG5CR_CNT_MASK		0x3fff
/** @defgroup tsc_iog5cr_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tsc_iog6cr IOG6CR I/O group x counter register
@{*/


#define TSC_IOG6CR_CNT_SHIFT		0
#define TSC_IOG6CR_CNT_MASK		0x3fff
/** @defgroup tsc_iog6cr_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tsc_iog7cr IOG7CR I/O group x counter register
@{*/


#define TSC_IOG7CR_CNT_SHIFT		0
#define TSC_IOG7CR_CNT_MASK		0x3fff
/** @defgroup tsc_iog7cr_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tsc_iog8cr IOG8CR I/O group x counter register
@{*/


#define TSC_IOG8CR_CNT_SHIFT		0
#define TSC_IOG8CR_CNT_MASK		0x3fff
/** @defgroup tsc_iog8cr_cnt CNT Counter value
@{*/
/**@}*/


/**@}*/

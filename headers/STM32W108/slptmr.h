#pragma once 

/* --- SLPTMR: Sleep timer ------------------------------------------ */

/** @defgroup slptmr_registers Sleep timer Register
@{*/

/** SLPTMR_SLPTMR_CR SLPTMR configuration register **/
#define SLPTMR_SLPTMR_CR			MMIO32(SLPTMR_BASE + 0x00)
/** SLPTMR_SLPTMR_CNTH SLPTMR counter high register **/
#define SLPTMR_SLPTMR_CNTH			MMIO32(SLPTMR_BASE + 0x04)
/** SLPTMR_SLPTMR_CNTL SLPTMR counter high register **/
#define SLPTMR_SLPTMR_CNTL			MMIO32(SLPTMR_BASE + 0x08)
/** SLPTMR_SLPTMR_CMPAH SLPTMR compare A high register **/
#define SLPTMR_SLPTMR_CMPAH			MMIO32(SLPTMR_BASE + 0x0c)
/** SLPTMR_SLPTMR_CMPAL SLPTMR compare A low register **/
#define SLPTMR_SLPTMR_CMPAL			MMIO32(SLPTMR_BASE + 0x10)
/** SLPTMR_SLPTMR_CMPBH SLPTMR compare B high register **/
#define SLPTMR_SLPTMR_CMPBH			MMIO32(SLPTMR_BASE + 0x14)
/** SLPTMR_SLPTMR_CMPBL SLPTMR compare B low register **/
#define SLPTMR_SLPTMR_CMPBL			MMIO32(SLPTMR_BASE + 0x18)
/** SLPTMR_SLPTMR_ISR SLPTMR interrupt status register **/
#define SLPTMR_SLPTMR_ISR			MMIO32(SLPTMR_BASE + 0x4008)
/** SLPTMR_SLPTMR_IFR SLPTMR force interrupts register **/
#define SLPTMR_SLPTMR_IFR			MMIO32(SLPTMR_BASE + 0x4014)
/** SLPTMR_SLPTMR_IER SLPTMR interrupt enable register **/
#define SLPTMR_SLPTMR_IER			MMIO32(SLPTMR_BASE + 0x4048)

/**@}*/


/** @defgroup slptmr_slptmr_cr SLPTMRCR SLPTMR configuration register
@{*/

/** SLPTMR_SLPTMR_CR_REVERSE REVERSE **/
#define SLPTMR_SLPTMR_CR_REVERSE		(1 << 12)
/** SLPTMR_SLPTMR_CR_EN EN **/
#define SLPTMR_SLPTMR_CR_EN		(1 << 11)
/** SLPTMR_SLPTMR_CR_DBGP DBGP **/
#define SLPTMR_SLPTMR_CR_DBGP		(1 << 10)

#define SLPTMR_SLPTMR_CR_PSC_SHIFT		4
#define SLPTMR_SLPTMR_CR_PSC_MASK		0x0f
/** @defgroup slptmr_slptmr_cr_psc PSC PSC
@{*/
/**@}*/

/** SLPTMR_SLPTMR_CR_CLKSEL CLKSEL **/
#define SLPTMR_SLPTMR_CR_CLKSEL		(1 << 0)

/**@}*/

/** @defgroup slptmr_slptmr_cnth SLPTMRCNTH SLPTMR counter high register
@{*/


#define SLPTMR_SLPTMR_CNTH_CNTH_SHIFT		0
#define SLPTMR_SLPTMR_CNTH_CNTH_MASK		0xffff
/** @defgroup slptmr_slptmr_cnth_cnth CNTH CNTH
@{*/
/**@}*/


/**@}*/

/** @defgroup slptmr_slptmr_cntl SLPTMRCNTL SLPTMR counter high register
@{*/


#define SLPTMR_SLPTMR_CNTL_CNTL_SHIFT		0
#define SLPTMR_SLPTMR_CNTL_CNTL_MASK		0xffff
/** @defgroup slptmr_slptmr_cntl_cntl CNTL CNTL
@{*/
/**@}*/


/**@}*/

/** @defgroup slptmr_slptmr_cmpah SLPTMRCMPAH SLPTMR compare A high register
@{*/


#define SLPTMR_SLPTMR_CMPAH_CMPAH_SHIFT		0
#define SLPTMR_SLPTMR_CMPAH_CMPAH_MASK		0xffff
/** @defgroup slptmr_slptmr_cmpah_cmpah CMPAH CMPAH
@{*/
/**@}*/


/**@}*/

/** @defgroup slptmr_slptmr_cmpal SLPTMRCMPAL SLPTMR compare A low register
@{*/


#define SLPTMR_SLPTMR_CMPAL_CMPAL_SHIFT		0
#define SLPTMR_SLPTMR_CMPAL_CMPAL_MASK		0xffff
/** @defgroup slptmr_slptmr_cmpal_cmpal CMPAL CMPAL
@{*/
/**@}*/


/**@}*/

/** @defgroup slptmr_slptmr_cmpbh SLPTMRCMPBH SLPTMR compare B high register
@{*/


#define SLPTMR_SLPTMR_CMPBH_CMPBH_SHIFT		0
#define SLPTMR_SLPTMR_CMPBH_CMPBH_MASK		0xffff
/** @defgroup slptmr_slptmr_cmpbh_cmpbh CMPBH CMPBH
@{*/
/**@}*/


/**@}*/

/** @defgroup slptmr_slptmr_cmpbl SLPTMRCMPBL SLPTMR compare B low register
@{*/


#define SLPTMR_SLPTMR_CMPBL_CMPBL_SHIFT		0
#define SLPTMR_SLPTMR_CMPBL_CMPBL_MASK		0xffff
/** @defgroup slptmr_slptmr_cmpbl_cmpbl CMPBL CMPBL
@{*/
/**@}*/


/**@}*/

/** @defgroup slptmr_slptmr_isr SLPTMRISR SLPTMR interrupt status register
@{*/

/** SLPTMR_SLPTMR_ISR_CMPB CMPB **/
#define SLPTMR_SLPTMR_ISR_CMPB		(1 << 2)
/** SLPTMR_SLPTMR_ISR_CMPA CMPA **/
#define SLPTMR_SLPTMR_ISR_CMPA		(1 << 1)
/** SLPTMR_SLPTMR_ISR_OW OW **/
#define SLPTMR_SLPTMR_ISR_OW		(1 << 0)

/**@}*/

/** @defgroup slptmr_slptmr_ifr SLPTMRIFR SLPTMR force interrupts register
@{*/

/** SLPTMR_SLPTMR_IFR_CMPB CMPB **/
#define SLPTMR_SLPTMR_IFR_CMPB		(1 << 2)
/** SLPTMR_SLPTMR_IFR_CMPA CMPA **/
#define SLPTMR_SLPTMR_IFR_CMPA		(1 << 1)
/** SLPTMR_SLPTMR_IFR_OW OW **/
#define SLPTMR_SLPTMR_IFR_OW		(1 << 0)

/**@}*/

/** @defgroup slptmr_slptmr_ier SLPTMRIER SLPTMR interrupt enable register
@{*/

/** SLPTMR_SLPTMR_IER_CMPB CMPB **/
#define SLPTMR_SLPTMR_IER_CMPB		(1 << 2)
/** SLPTMR_SLPTMR_IER_CMPA CMPA **/
#define SLPTMR_SLPTMR_IER_CMPA		(1 << 1)
/** SLPTMR_SLPTMR_IER_WRAP WRAP **/
#define SLPTMR_SLPTMR_IER_WRAP		(1 << 0)

/**@}*/

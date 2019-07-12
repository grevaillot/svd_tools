#pragma once 

/* --- GPIOA: General purpose I/Os ---------------------------------- */

/** @defgroup gpioa_registers General purpose I/Os Register
@{*/

/** GPIOA_GPIOA_CRL Port A configuration register (Low) **/
#define GPIOA_GPIOA_CRL			MMIO32(GPIOA_BASE + 0x00)
/** GPIOA_GPIOA_CRH Port A configuration register (High) **/
#define GPIOA_GPIOA_CRH			MMIO32(GPIOA_BASE + 0x04)
/** GPIOA_GPIOA_IDR Port A input data register **/
#define GPIOA_GPIOA_IDR			MMIO32(GPIOA_BASE + 0x08)
/** GPIOA_GPIOA_ODR Port A output data register **/
#define GPIOA_GPIOA_ODR			MMIO32(GPIOA_BASE + 0x0c)
/** GPIOA_GPIOA_BSR Port A bit set register **/
#define GPIOA_GPIOA_BSR			MMIO32(GPIOA_BASE + 0x10)
/** GPIOA_GPIOA_BRR Port A output clear register **/
#define GPIOA_GPIOA_BRR			MMIO32(GPIOA_BASE + 0x14)

/**@}*/


/** @defgroup gpioa_gpioa_crl GPIOACRL Port A configuration register (Low)
@{*/


#define GPIOA_GPIOA_CRL_CNFMODE3_SHIFT		12
#define GPIOA_GPIOA_CRL_CNFMODE3_MASK		0x0f
/** @defgroup gpioa_gpioa_crl_cnfmode3 CNFMODE3 CNFMODE3
@{*/
/**@}*/


#define GPIOA_GPIOA_CRL_CNFMODE2_SHIFT		8
#define GPIOA_GPIOA_CRL_CNFMODE2_MASK		0x0f
/** @defgroup gpioa_gpioa_crl_cnfmode2 CNFMODE2 CNFMODE2
@{*/
/**@}*/


#define GPIOA_GPIOA_CRL_CNFMODE1_SHIFT		4
#define GPIOA_GPIOA_CRL_CNFMODE1_MASK		0x0f
/** @defgroup gpioa_gpioa_crl_cnfmode1 CNFMODE1 CNFMODE1
@{*/
/**@}*/


#define GPIOA_GPIOA_CRL_CNFMODE0_SHIFT		0
#define GPIOA_GPIOA_CRL_CNFMODE0_MASK		0x0f
/** @defgroup gpioa_gpioa_crl_cnfmode0 CNFMODE0 CNFMODE0
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioa_gpioa_crh GPIOACRH Port A configuration register (High)
@{*/


#define GPIOA_GPIOA_CRH_CNFMODE7_SHIFT		12
#define GPIOA_GPIOA_CRH_CNFMODE7_MASK		0x0f
/** @defgroup gpioa_gpioa_crh_cnfmode7 CNFMODE7 CNFMODE7
@{*/
/**@}*/


#define GPIOA_GPIOA_CRH_CNFMODE6_SHIFT		8
#define GPIOA_GPIOA_CRH_CNFMODE6_MASK		0x0f
/** @defgroup gpioa_gpioa_crh_cnfmode6 CNFMODE6 CNFMODE6
@{*/
/**@}*/


#define GPIOA_GPIOA_CRH_CNFMODE5_SHIFT		4
#define GPIOA_GPIOA_CRH_CNFMODE5_MASK		0x0f
/** @defgroup gpioa_gpioa_crh_cnfmode5 CNFMODE5 CNFMODE5
@{*/
/**@}*/


#define GPIOA_GPIOA_CRH_CNFMODE4_SHIFT		0
#define GPIOA_GPIOA_CRH_CNFMODE4_MASK		0x0f
/** @defgroup gpioa_gpioa_crh_cnfmode4 CNFMODE4 CNFMODE4
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioa_gpioa_idr GPIOAIDR Port A input data register
@{*/

/** GPIOA_GPIOA_IDR_IDR7 IDR7 **/
#define GPIOA_GPIOA_IDR_IDR7		(1 << 7)
/** GPIOA_GPIOA_IDR_IDR6 IDR6 **/
#define GPIOA_GPIOA_IDR_IDR6		(1 << 6)
/** GPIOA_GPIOA_IDR_IDR5 IDR5 **/
#define GPIOA_GPIOA_IDR_IDR5		(1 << 5)
/** GPIOA_GPIOA_IDR_IDR4 IDR4 **/
#define GPIOA_GPIOA_IDR_IDR4		(1 << 4)
/** GPIOA_GPIOA_IDR_IDR3 IDR3 **/
#define GPIOA_GPIOA_IDR_IDR3		(1 << 3)
/** GPIOA_GPIOA_IDR_IDR2 IDR2 **/
#define GPIOA_GPIOA_IDR_IDR2		(1 << 2)
/** GPIOA_GPIOA_IDR_IDR1 IDR1 **/
#define GPIOA_GPIOA_IDR_IDR1		(1 << 1)
/** GPIOA_GPIOA_IDR_IDR0 IDR0 **/
#define GPIOA_GPIOA_IDR_IDR0		(1 << 0)

/**@}*/

/** @defgroup gpioa_gpioa_odr GPIOAODR Port A output data register
@{*/

/** GPIOA_GPIOA_ODR_ODR7 ODR7 **/
#define GPIOA_GPIOA_ODR_ODR7		(1 << 7)
/** GPIOA_GPIOA_ODR_ODR6 ODR6 **/
#define GPIOA_GPIOA_ODR_ODR6		(1 << 6)
/** GPIOA_GPIOA_ODR_ODR5 ODR5 **/
#define GPIOA_GPIOA_ODR_ODR5		(1 << 5)
/** GPIOA_GPIOA_ODR_ODR4 ODR4 **/
#define GPIOA_GPIOA_ODR_ODR4		(1 << 4)
/** GPIOA_GPIOA_ODR_ODR3 ODR3 **/
#define GPIOA_GPIOA_ODR_ODR3		(1 << 3)
/** GPIOA_GPIOA_ODR_ODR2 ODR2 **/
#define GPIOA_GPIOA_ODR_ODR2		(1 << 2)
/** GPIOA_GPIOA_ODR_ODR1 ODR1 **/
#define GPIOA_GPIOA_ODR_ODR1		(1 << 1)
/** GPIOA_GPIOA_ODR_ODR0 ODR0 **/
#define GPIOA_GPIOA_ODR_ODR0		(1 << 0)

/**@}*/

/** @defgroup gpioa_gpioa_bsr GPIOABSR Port A bit set register
@{*/

/** GPIOA_GPIOA_BSR_BS7 BS7 **/
#define GPIOA_GPIOA_BSR_BS7		(1 << 7)
/** GPIOA_GPIOA_BSR_BS6 BS6 **/
#define GPIOA_GPIOA_BSR_BS6		(1 << 6)
/** GPIOA_GPIOA_BSR_BS5 BS5 **/
#define GPIOA_GPIOA_BSR_BS5		(1 << 5)
/** GPIOA_GPIOA_BSR_BS4 BS4 **/
#define GPIOA_GPIOA_BSR_BS4		(1 << 4)
/** GPIOA_GPIOA_BSR_BS3 BS3 **/
#define GPIOA_GPIOA_BSR_BS3		(1 << 3)
/** GPIOA_GPIOA_BSR_BS2 BS2 **/
#define GPIOA_GPIOA_BSR_BS2		(1 << 2)
/** GPIOA_GPIOA_BSR_BS1 BS1 **/
#define GPIOA_GPIOA_BSR_BS1		(1 << 1)
/** GPIOA_GPIOA_BSR_BS0 BS0 **/
#define GPIOA_GPIOA_BSR_BS0		(1 << 0)

/**@}*/

/** @defgroup gpioa_gpioa_brr GPIOABRR Port A output clear register
@{*/

/** GPIOA_GPIOA_BRR_BR7 BR7 **/
#define GPIOA_GPIOA_BRR_BR7		(1 << 7)
/** GPIOA_GPIOA_BRR_BR6 BR6 **/
#define GPIOA_GPIOA_BRR_BR6		(1 << 6)
/** GPIOA_GPIOA_BRR_BR5 BR5 **/
#define GPIOA_GPIOA_BRR_BR5		(1 << 5)
/** GPIOA_GPIOA_BRR_BR4 BR4 **/
#define GPIOA_GPIOA_BRR_BR4		(1 << 4)
/** GPIOA_GPIOA_BRR_BR3 BR3 **/
#define GPIOA_GPIOA_BRR_BR3		(1 << 3)
/** GPIOA_GPIOA_BRR_BR2 BR2 **/
#define GPIOA_GPIOA_BRR_BR2		(1 << 2)
/** GPIOA_GPIOA_BRR_BR1 BR1 **/
#define GPIOA_GPIOA_BRR_BR1		(1 << 1)
/** GPIOA_GPIOA_BRR_BR0 BR0 **/
#define GPIOA_GPIOA_BRR_BR0		(1 << 0)

/**@}*/

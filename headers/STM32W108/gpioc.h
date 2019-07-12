#pragma once 

/* --- GPIOC: General purpose I/Os ---------------------------------- */

/** @defgroup gpioc_registers General purpose I/Os Register
@{*/

/** GPIOC_GPIOC_CRL Port C configuration register (Low) **/
#define GPIOC_GPIOC_CRL			MMIO32(GPIOC_BASE + 0x00)
/** GPIOC_GPIOC_CRH Port C configuration register (High) **/
#define GPIOC_GPIOC_CRH			MMIO32(GPIOC_BASE + 0x04)
/** GPIOC_GPIOC_IDR Port C input data register **/
#define GPIOC_GPIOC_IDR			MMIO32(GPIOC_BASE + 0x08)
/** GPIOC_GPIOC_ODR Port C output data register **/
#define GPIOC_GPIOC_ODR			MMIO32(GPIOC_BASE + 0x0c)
/** GPIOC_GPIOC_BSR Port B bit set register **/
#define GPIOC_GPIOC_BSR			MMIO32(GPIOC_BASE + 0x10)
/** GPIOC_GPIOC_BRR Port C output clear register **/
#define GPIOC_GPIOC_BRR			MMIO32(GPIOC_BASE + 0x14)

/**@}*/


/** @defgroup gpioc_gpioc_crl GPIOCCRL Port C configuration register (Low)
@{*/


#define GPIOC_GPIOC_CRL_CNFMODE3_SHIFT		12
#define GPIOC_GPIOC_CRL_CNFMODE3_MASK		0x0f
/** @defgroup gpioc_gpioc_crl_cnfmode3 CNFMODE3 CNFMODE3
@{*/
/**@}*/


#define GPIOC_GPIOC_CRL_CNFMODE2_SHIFT		8
#define GPIOC_GPIOC_CRL_CNFMODE2_MASK		0x0f
/** @defgroup gpioc_gpioc_crl_cnfmode2 CNFMODE2 CNFMODE2
@{*/
/**@}*/


#define GPIOC_GPIOC_CRL_CNFMODE1_SHIFT		4
#define GPIOC_GPIOC_CRL_CNFMODE1_MASK		0x0f
/** @defgroup gpioc_gpioc_crl_cnfmode1 CNFMODE1 CNFMODE1
@{*/
/**@}*/


#define GPIOC_GPIOC_CRL_CNFMODE0_SHIFT		0
#define GPIOC_GPIOC_CRL_CNFMODE0_MASK		0x0f
/** @defgroup gpioc_gpioc_crl_cnfmode0 CNFMODE0 CNFMODE0
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioc_gpioc_crh GPIOCCRH Port C configuration register (High)
@{*/


#define GPIOC_GPIOC_CRH_CNFMODE7_SHIFT		12
#define GPIOC_GPIOC_CRH_CNFMODE7_MASK		0x0f
/** @defgroup gpioc_gpioc_crh_cnfmode7 CNFMODE7 CNFMODE7
@{*/
/**@}*/


#define GPIOC_GPIOC_CRH_CNFMODE6_SHIFT		8
#define GPIOC_GPIOC_CRH_CNFMODE6_MASK		0x0f
/** @defgroup gpioc_gpioc_crh_cnfmode6 CNFMODE6 CNFMODE6
@{*/
/**@}*/


#define GPIOC_GPIOC_CRH_CNFMODE5_SHIFT		4
#define GPIOC_GPIOC_CRH_CNFMODE5_MASK		0x0f
/** @defgroup gpioc_gpioc_crh_cnfmode5 CNFMODE5 CNFMODE5
@{*/
/**@}*/


#define GPIOC_GPIOC_CRH_CNFMODE4_SHIFT		0
#define GPIOC_GPIOC_CRH_CNFMODE4_MASK		0x0f
/** @defgroup gpioc_gpioc_crh_cnfmode4 CNFMODE4 CNFMODE4
@{*/
/**@}*/


/**@}*/

/** @defgroup gpioc_gpioc_idr GPIOCIDR Port C input data register
@{*/

/** GPIOC_GPIOC_IDR_ID7 ID7 **/
#define GPIOC_GPIOC_IDR_ID7		(1 << 7)
/** GPIOC_GPIOC_IDR_ID6 ID6 **/
#define GPIOC_GPIOC_IDR_ID6		(1 << 6)
/** GPIOC_GPIOC_IDR_ID5 ID5 **/
#define GPIOC_GPIOC_IDR_ID5		(1 << 5)
/** GPIOC_GPIOC_IDR_ID4 ID4 **/
#define GPIOC_GPIOC_IDR_ID4		(1 << 4)
/** GPIOC_GPIOC_IDR_ID3 ID3 **/
#define GPIOC_GPIOC_IDR_ID3		(1 << 3)
/** GPIOC_GPIOC_IDR_ID2 ID2 **/
#define GPIOC_GPIOC_IDR_ID2		(1 << 2)
/** GPIOC_GPIOC_IDR_ID1 ID1 **/
#define GPIOC_GPIOC_IDR_ID1		(1 << 1)
/** GPIOC_GPIOC_IDR_ID0 ID0 **/
#define GPIOC_GPIOC_IDR_ID0		(1 << 0)

/**@}*/

/** @defgroup gpioc_gpioc_odr GPIOCODR Port C output data register
@{*/

/** GPIOC_GPIOC_ODR_OD7 OD7 **/
#define GPIOC_GPIOC_ODR_OD7		(1 << 7)
/** GPIOC_GPIOC_ODR_OD6 OD6 **/
#define GPIOC_GPIOC_ODR_OD6		(1 << 6)
/** GPIOC_GPIOC_ODR_OD5 OD5 **/
#define GPIOC_GPIOC_ODR_OD5		(1 << 5)
/** GPIOC_GPIOC_ODR_OD4 OD4 **/
#define GPIOC_GPIOC_ODR_OD4		(1 << 4)
/** GPIOC_GPIOC_ODR_OD3 OD3 **/
#define GPIOC_GPIOC_ODR_OD3		(1 << 3)
/** GPIOC_GPIOC_ODR_OD2 OD2 **/
#define GPIOC_GPIOC_ODR_OD2		(1 << 2)
/** GPIOC_GPIOC_ODR_OD1 OD1 **/
#define GPIOC_GPIOC_ODR_OD1		(1 << 1)
/** GPIOC_GPIOC_ODR_OD0 OD0 **/
#define GPIOC_GPIOC_ODR_OD0		(1 << 0)

/**@}*/

/** @defgroup gpioc_gpioc_bsr GPIOCBSR Port B bit set register
@{*/

/** GPIOC_GPIOC_BSR_BS7 BS7 **/
#define GPIOC_GPIOC_BSR_BS7		(1 << 7)
/** GPIOC_GPIOC_BSR_BS6 BS6 **/
#define GPIOC_GPIOC_BSR_BS6		(1 << 6)
/** GPIOC_GPIOC_BSR_BS5 BS5 **/
#define GPIOC_GPIOC_BSR_BS5		(1 << 5)
/** GPIOC_GPIOC_BSR_BS4 BS4 **/
#define GPIOC_GPIOC_BSR_BS4		(1 << 4)
/** GPIOC_GPIOC_BSR_BS3 BS3 **/
#define GPIOC_GPIOC_BSR_BS3		(1 << 3)
/** GPIOC_GPIOC_BSR_BS2 BS2 **/
#define GPIOC_GPIOC_BSR_BS2		(1 << 2)
/** GPIOC_GPIOC_BSR_BS1 BS1 **/
#define GPIOC_GPIOC_BSR_BS1		(1 << 1)
/** GPIOC_GPIOC_BSR_BS0 BS0 **/
#define GPIOC_GPIOC_BSR_BS0		(1 << 0)

/**@}*/

/** @defgroup gpioc_gpioc_brr GPIOCBRR Port C output clear register
@{*/

/** GPIOC_GPIOC_BRR_BR7 BR7 **/
#define GPIOC_GPIOC_BRR_BR7		(1 << 7)
/** GPIOC_GPIOC_BRR_BR6 BR6 **/
#define GPIOC_GPIOC_BRR_BR6		(1 << 6)
/** GPIOC_GPIOC_BRR_BR5 BR5 **/
#define GPIOC_GPIOC_BRR_BR5		(1 << 5)
/** GPIOC_GPIOC_BRR_BR4 BR4 **/
#define GPIOC_GPIOC_BRR_BR4		(1 << 4)
/** GPIOC_GPIOC_BRR_BR3 BR3 **/
#define GPIOC_GPIOC_BRR_BR3		(1 << 3)
/** GPIOC_GPIOC_BRR_BR2 BR2 **/
#define GPIOC_GPIOC_BRR_BR2		(1 << 2)
/** GPIOC_GPIOC_BRR_BR1 BR1 **/
#define GPIOC_GPIOC_BRR_BR1		(1 << 1)
/** GPIOC_GPIOC_BRR_BR0 BR0 **/
#define GPIOC_GPIOC_BRR_BR0		(1 << 0)

/**@}*/

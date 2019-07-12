#pragma once 

/* --- GPIOB: General purpose I/Os ---------------------------------- */

/** @defgroup gpiob_registers General purpose I/Os Register
@{*/

/** GPIOB_GPIOB_CRL Port B configuration register (Low) **/
#define GPIOB_GPIOB_CRL			MMIO32(GPIOB_BASE + 0x00)
/** GPIOB_GPIOB_CRH Port B configuration register (High) **/
#define GPIOB_GPIOB_CRH			MMIO32(GPIOB_BASE + 0x04)
/** GPIOB_GPIOB_IDR Port B input data register **/
#define GPIOB_GPIOB_IDR			MMIO32(GPIOB_BASE + 0x08)
/** GPIOB_GPIOB_ODR Port B output data register **/
#define GPIOB_GPIOB_ODR			MMIO32(GPIOB_BASE + 0x0c)
/** GPIOB_GPIOB_BSR Port B bit set register **/
#define GPIOB_GPIOB_BSR			MMIO32(GPIOB_BASE + 0x10)
/** GPIOB_GPIOB_BRR Port B output clear register **/
#define GPIOB_GPIOB_BRR			MMIO32(GPIOB_BASE + 0x14)

/**@}*/


/** @defgroup gpiob_gpiob_crl GPIOBCRL Port B configuration register (Low)
@{*/


#define GPIOB_GPIOB_CRL_CNFMODE3_SHIFT		12
#define GPIOB_GPIOB_CRL_CNFMODE3_MASK		0x0f
/** @defgroup gpiob_gpiob_crl_cnfmode3 CNFMODE3 CNFMODE3
@{*/
/**@}*/


#define GPIOB_GPIOB_CRL_CNFMODE2_SHIFT		8
#define GPIOB_GPIOB_CRL_CNFMODE2_MASK		0x0f
/** @defgroup gpiob_gpiob_crl_cnfmode2 CNFMODE2 CNFMODE2
@{*/
/**@}*/


#define GPIOB_GPIOB_CRL_CNFMODE1_SHIFT		4
#define GPIOB_GPIOB_CRL_CNFMODE1_MASK		0x0f
/** @defgroup gpiob_gpiob_crl_cnfmode1 CNFMODE1 CNFMODE1
@{*/
/**@}*/


#define GPIOB_GPIOB_CRL_CNFMODE0_SHIFT		0
#define GPIOB_GPIOB_CRL_CNFMODE0_MASK		0x0f
/** @defgroup gpiob_gpiob_crl_cnfmode0 CNFMODE0 CNFMODE0
@{*/
/**@}*/


/**@}*/

/** @defgroup gpiob_gpiob_crh GPIOBCRH Port B configuration register (High)
@{*/


#define GPIOB_GPIOB_CRH_CNFMODE7_SHIFT		12
#define GPIOB_GPIOB_CRH_CNFMODE7_MASK		0x0f
/** @defgroup gpiob_gpiob_crh_cnfmode7 CNFMODE7 CNFMODE7
@{*/
/**@}*/


#define GPIOB_GPIOB_CRH_CNFMODE6_SHIFT		8
#define GPIOB_GPIOB_CRH_CNFMODE6_MASK		0x0f
/** @defgroup gpiob_gpiob_crh_cnfmode6 CNFMODE6 CNFMODE6
@{*/
/**@}*/


#define GPIOB_GPIOB_CRH_CNFMODE5_SHIFT		4
#define GPIOB_GPIOB_CRH_CNFMODE5_MASK		0x0f
/** @defgroup gpiob_gpiob_crh_cnfmode5 CNFMODE5 CNFMODE5
@{*/
/**@}*/


#define GPIOB_GPIOB_CRH_CNFMODE4_SHIFT		0
#define GPIOB_GPIOB_CRH_CNFMODE4_MASK		0x0f
/** @defgroup gpiob_gpiob_crh_cnfmode4 CNFMODE4 CNFMODE4
@{*/
/**@}*/


/**@}*/

/** @defgroup gpiob_gpiob_idr GPIOBIDR Port B input data register
@{*/

/** GPIOB_GPIOB_IDR_ID7 ID7 **/
#define GPIOB_GPIOB_IDR_ID7		(1 << 7)
/** GPIOB_GPIOB_IDR_ID6 ID6 **/
#define GPIOB_GPIOB_IDR_ID6		(1 << 6)
/** GPIOB_GPIOB_IDR_ID5 ID5 **/
#define GPIOB_GPIOB_IDR_ID5		(1 << 5)
/** GPIOB_GPIOB_IDR_ID4 ID4 **/
#define GPIOB_GPIOB_IDR_ID4		(1 << 4)
/** GPIOB_GPIOB_IDR_ID3 ID3 **/
#define GPIOB_GPIOB_IDR_ID3		(1 << 3)
/** GPIOB_GPIOB_IDR_ID2 ID2 **/
#define GPIOB_GPIOB_IDR_ID2		(1 << 2)
/** GPIOB_GPIOB_IDR_ID1 ID1 **/
#define GPIOB_GPIOB_IDR_ID1		(1 << 1)
/** GPIOB_GPIOB_IDR_ID0 ID0 **/
#define GPIOB_GPIOB_IDR_ID0		(1 << 0)

/**@}*/

/** @defgroup gpiob_gpiob_odr GPIOBODR Port B output data register
@{*/

/** GPIOB_GPIOB_ODR_OD7 OD7 **/
#define GPIOB_GPIOB_ODR_OD7		(1 << 7)
/** GPIOB_GPIOB_ODR_OD6 OD6 **/
#define GPIOB_GPIOB_ODR_OD6		(1 << 6)
/** GPIOB_GPIOB_ODR_OD5 OD5 **/
#define GPIOB_GPIOB_ODR_OD5		(1 << 5)
/** GPIOB_GPIOB_ODR_OD4 OD4 **/
#define GPIOB_GPIOB_ODR_OD4		(1 << 4)
/** GPIOB_GPIOB_ODR_OD3 OD3 **/
#define GPIOB_GPIOB_ODR_OD3		(1 << 3)
/** GPIOB_GPIOB_ODR_OD2 OD2 **/
#define GPIOB_GPIOB_ODR_OD2		(1 << 2)
/** GPIOB_GPIOB_ODR_OD1 OD1 **/
#define GPIOB_GPIOB_ODR_OD1		(1 << 1)
/** GPIOB_GPIOB_ODR_OD0 OD0 **/
#define GPIOB_GPIOB_ODR_OD0		(1 << 0)

/**@}*/

/** @defgroup gpiob_gpiob_bsr GPIOBBSR Port B bit set register
@{*/

/** GPIOB_GPIOB_BSR_BS7 BS7 **/
#define GPIOB_GPIOB_BSR_BS7		(1 << 7)
/** GPIOB_GPIOB_BSR_BS6 BS6 **/
#define GPIOB_GPIOB_BSR_BS6		(1 << 6)
/** GPIOB_GPIOB_BSR_BS5 BS5 **/
#define GPIOB_GPIOB_BSR_BS5		(1 << 5)
/** GPIOB_GPIOB_BSR_BS4 BS4 **/
#define GPIOB_GPIOB_BSR_BS4		(1 << 4)
/** GPIOB_GPIOB_BSR_BS3 BS3 **/
#define GPIOB_GPIOB_BSR_BS3		(1 << 3)
/** GPIOB_GPIOB_BSR_BS2 BS2 **/
#define GPIOB_GPIOB_BSR_BS2		(1 << 2)
/** GPIOB_GPIOB_BSR_BS1 BS1 **/
#define GPIOB_GPIOB_BSR_BS1		(1 << 1)
/** GPIOB_GPIOB_BSR_BS0 BS0 **/
#define GPIOB_GPIOB_BSR_BS0		(1 << 0)

/**@}*/

/** @defgroup gpiob_gpiob_brr GPIOBBRR Port B output clear register
@{*/

/** GPIOB_GPIOB_BRR_BR7 BR7 **/
#define GPIOB_GPIOB_BRR_BR7		(1 << 7)
/** GPIOB_GPIOB_BRR_BR6 BR6 **/
#define GPIOB_GPIOB_BRR_BR6		(1 << 6)
/** GPIOB_GPIOB_BRR_BR5 BR5 **/
#define GPIOB_GPIOB_BRR_BR5		(1 << 5)
/** GPIOB_GPIOB_BRR_BR4 BR4 **/
#define GPIOB_GPIOB_BRR_BR4		(1 << 4)
/** GPIOB_GPIOB_BRR_BR3 BR3 **/
#define GPIOB_GPIOB_BRR_BR3		(1 << 3)
/** GPIOB_GPIOB_BRR_BR2 BR2 **/
#define GPIOB_GPIOB_BRR_BR2		(1 << 2)
/** GPIOB_GPIOB_BRR_BR1 BR1 **/
#define GPIOB_GPIOB_BRR_BR1		(1 << 1)
/** GPIOB_GPIOB_BRR_BR0 BR0 **/
#define GPIOB_GPIOB_BRR_BR0		(1 << 0)

/**@}*/

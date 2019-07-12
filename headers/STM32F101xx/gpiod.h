#pragma once 

/* --- GPIOD: General purpose I/O ----------------------------------- */

/** @defgroup gpiod_registers General purpose I/O Register
@{*/

/** GPIOD_CRL Port configuration register low (GPIOn_CRL) **/
#define GPIOD_CRL			MMIO32(GPIOD_BASE + 0x00)
/** GPIOD_CRH Port configuration register high (GPIOn_CRL) **/
#define GPIOD_CRH			MMIO32(GPIOD_BASE + 0x04)
/** GPIOD_IDR Port input data register (GPIOn_IDR) **/
#define GPIOD_IDR			MMIO32(GPIOD_BASE + 0x08)
/** GPIOD_ODR Port output data register (GPIOn_ODR) **/
#define GPIOD_ODR			MMIO32(GPIOD_BASE + 0x0c)
/** GPIOD_BSRR Port bit set/reset register (GPIOn_BSRR) **/
#define GPIOD_BSRR			MMIO32(GPIOD_BASE + 0x10)
/** GPIOD_BRR Port bit reset register (GPIOn_BRR) **/
#define GPIOD_BRR			MMIO32(GPIOD_BASE + 0x14)
/** GPIOD_LCKR Port configuration lock register **/
#define GPIOD_LCKR			MMIO32(GPIOD_BASE + 0x18)

/**@}*/


/** @defgroup gpiod_crl CRL Port configuration register low (GPIOn_CRL)
@{*/


#define GPIOD_CRL_CNF7_SHIFT		30
#define GPIOD_CRL_CNF7_MASK		0x03
/** @defgroup gpiod_crl_cnf7 CNF7 Port n.7 configuration bits
@{*/
/**@}*/


#define GPIOD_CRL_MODE7_SHIFT		28
#define GPIOD_CRL_MODE7_MASK		0x03
/** @defgroup gpiod_crl_mode7 MODE7 Port n.7 mode bits
@{*/
/**@}*/


#define GPIOD_CRL_CNF6_SHIFT		26
#define GPIOD_CRL_CNF6_MASK		0x03
/** @defgroup gpiod_crl_cnf6 CNF6 Port n.6 configuration bits
@{*/
/**@}*/


#define GPIOD_CRL_MODE6_SHIFT		24
#define GPIOD_CRL_MODE6_MASK		0x03
/** @defgroup gpiod_crl_mode6 MODE6 Port n.6 mode bits
@{*/
/**@}*/


#define GPIOD_CRL_CNF5_SHIFT		22
#define GPIOD_CRL_CNF5_MASK		0x03
/** @defgroup gpiod_crl_cnf5 CNF5 Port n.5 configuration bits
@{*/
/**@}*/


#define GPIOD_CRL_MODE5_SHIFT		20
#define GPIOD_CRL_MODE5_MASK		0x03
/** @defgroup gpiod_crl_mode5 MODE5 Port n.5 mode bits
@{*/
/**@}*/


#define GPIOD_CRL_CNF4_SHIFT		18
#define GPIOD_CRL_CNF4_MASK		0x03
/** @defgroup gpiod_crl_cnf4 CNF4 Port n.4 configuration bits
@{*/
/**@}*/


#define GPIOD_CRL_MODE4_SHIFT		16
#define GPIOD_CRL_MODE4_MASK		0x03
/** @defgroup gpiod_crl_mode4 MODE4 Port n.4 mode bits
@{*/
/**@}*/


#define GPIOD_CRL_CNF3_SHIFT		14
#define GPIOD_CRL_CNF3_MASK		0x03
/** @defgroup gpiod_crl_cnf3 CNF3 Port n.3 configuration bits
@{*/
/**@}*/


#define GPIOD_CRL_MODE3_SHIFT		12
#define GPIOD_CRL_MODE3_MASK		0x03
/** @defgroup gpiod_crl_mode3 MODE3 Port n.3 mode bits
@{*/
/**@}*/


#define GPIOD_CRL_CNF2_SHIFT		10
#define GPIOD_CRL_CNF2_MASK		0x03
/** @defgroup gpiod_crl_cnf2 CNF2 Port n.2 configuration bits
@{*/
/**@}*/


#define GPIOD_CRL_MODE2_SHIFT		8
#define GPIOD_CRL_MODE2_MASK		0x03
/** @defgroup gpiod_crl_mode2 MODE2 Port n.2 mode bits
@{*/
/**@}*/


#define GPIOD_CRL_CNF1_SHIFT		6
#define GPIOD_CRL_CNF1_MASK		0x03
/** @defgroup gpiod_crl_cnf1 CNF1 Port n.1 configuration bits
@{*/
/**@}*/


#define GPIOD_CRL_MODE1_SHIFT		4
#define GPIOD_CRL_MODE1_MASK		0x03
/** @defgroup gpiod_crl_mode1 MODE1 Port n.1 mode bits
@{*/
/**@}*/


#define GPIOD_CRL_CNF0_SHIFT		2
#define GPIOD_CRL_CNF0_MASK		0x03
/** @defgroup gpiod_crl_cnf0 CNF0 Port n.0 configuration bits
@{*/
/**@}*/


#define GPIOD_CRL_MODE0_SHIFT		0
#define GPIOD_CRL_MODE0_MASK		0x03
/** @defgroup gpiod_crl_mode0 MODE0 Port n.0 mode bits
@{*/
/**@}*/


/**@}*/

/** @defgroup gpiod_crh CRH Port configuration register high (GPIOn_CRL)
@{*/


#define GPIOD_CRH_CNF15_SHIFT		30
#define GPIOD_CRH_CNF15_MASK		0x03
/** @defgroup gpiod_crh_cnf15 CNF15 Port n.15 configuration bits
@{*/
/**@}*/


#define GPIOD_CRH_MODE15_SHIFT		28
#define GPIOD_CRH_MODE15_MASK		0x03
/** @defgroup gpiod_crh_mode15 MODE15 Port n.15 mode bits
@{*/
/**@}*/


#define GPIOD_CRH_CNF14_SHIFT		26
#define GPIOD_CRH_CNF14_MASK		0x03
/** @defgroup gpiod_crh_cnf14 CNF14 Port n.14 configuration bits
@{*/
/**@}*/


#define GPIOD_CRH_MODE14_SHIFT		24
#define GPIOD_CRH_MODE14_MASK		0x03
/** @defgroup gpiod_crh_mode14 MODE14 Port n.14 mode bits
@{*/
/**@}*/


#define GPIOD_CRH_CNF13_SHIFT		22
#define GPIOD_CRH_CNF13_MASK		0x03
/** @defgroup gpiod_crh_cnf13 CNF13 Port n.13 configuration bits
@{*/
/**@}*/


#define GPIOD_CRH_MODE13_SHIFT		20
#define GPIOD_CRH_MODE13_MASK		0x03
/** @defgroup gpiod_crh_mode13 MODE13 Port n.13 mode bits
@{*/
/**@}*/


#define GPIOD_CRH_CNF12_SHIFT		18
#define GPIOD_CRH_CNF12_MASK		0x03
/** @defgroup gpiod_crh_cnf12 CNF12 Port n.12 configuration bits
@{*/
/**@}*/


#define GPIOD_CRH_MODE12_SHIFT		16
#define GPIOD_CRH_MODE12_MASK		0x03
/** @defgroup gpiod_crh_mode12 MODE12 Port n.12 mode bits
@{*/
/**@}*/


#define GPIOD_CRH_CNF11_SHIFT		14
#define GPIOD_CRH_CNF11_MASK		0x03
/** @defgroup gpiod_crh_cnf11 CNF11 Port n.11 configuration bits
@{*/
/**@}*/


#define GPIOD_CRH_MODE11_SHIFT		12
#define GPIOD_CRH_MODE11_MASK		0x03
/** @defgroup gpiod_crh_mode11 MODE11 Port n.11 mode bits
@{*/
/**@}*/


#define GPIOD_CRH_CNF10_SHIFT		10
#define GPIOD_CRH_CNF10_MASK		0x03
/** @defgroup gpiod_crh_cnf10 CNF10 Port n.10 configuration bits
@{*/
/**@}*/


#define GPIOD_CRH_MODE10_SHIFT		8
#define GPIOD_CRH_MODE10_MASK		0x03
/** @defgroup gpiod_crh_mode10 MODE10 Port n.10 mode bits
@{*/
/**@}*/


#define GPIOD_CRH_CNF9_SHIFT		6
#define GPIOD_CRH_CNF9_MASK		0x03
/** @defgroup gpiod_crh_cnf9 CNF9 Port n.9 configuration bits
@{*/
/**@}*/


#define GPIOD_CRH_MODE9_SHIFT		4
#define GPIOD_CRH_MODE9_MASK		0x03
/** @defgroup gpiod_crh_mode9 MODE9 Port n.9 mode bits
@{*/
/**@}*/


#define GPIOD_CRH_CNF8_SHIFT		2
#define GPIOD_CRH_CNF8_MASK		0x03
/** @defgroup gpiod_crh_cnf8 CNF8 Port n.8 configuration bits
@{*/
/**@}*/


#define GPIOD_CRH_MODE8_SHIFT		0
#define GPIOD_CRH_MODE8_MASK		0x03
/** @defgroup gpiod_crh_mode8 MODE8 Port n.8 mode bits
@{*/
/**@}*/


/**@}*/

/** @defgroup gpiod_idr IDR Port input data register (GPIOn_IDR)
@{*/

/** GPIOD_IDR_IDR15 Port input data **/
#define GPIOD_IDR_IDR15		(1 << 15)
/** GPIOD_IDR_IDR14 Port input data **/
#define GPIOD_IDR_IDR14		(1 << 14)
/** GPIOD_IDR_IDR13 Port input data **/
#define GPIOD_IDR_IDR13		(1 << 13)
/** GPIOD_IDR_IDR12 Port input data **/
#define GPIOD_IDR_IDR12		(1 << 12)
/** GPIOD_IDR_IDR11 Port input data **/
#define GPIOD_IDR_IDR11		(1 << 11)
/** GPIOD_IDR_IDR10 Port input data **/
#define GPIOD_IDR_IDR10		(1 << 10)
/** GPIOD_IDR_IDR9 Port input data **/
#define GPIOD_IDR_IDR9		(1 << 9)
/** GPIOD_IDR_IDR8 Port input data **/
#define GPIOD_IDR_IDR8		(1 << 8)
/** GPIOD_IDR_IDR7 Port input data **/
#define GPIOD_IDR_IDR7		(1 << 7)
/** GPIOD_IDR_IDR6 Port input data **/
#define GPIOD_IDR_IDR6		(1 << 6)
/** GPIOD_IDR_IDR5 Port input data **/
#define GPIOD_IDR_IDR5		(1 << 5)
/** GPIOD_IDR_IDR4 Port input data **/
#define GPIOD_IDR_IDR4		(1 << 4)
/** GPIOD_IDR_IDR3 Port input data **/
#define GPIOD_IDR_IDR3		(1 << 3)
/** GPIOD_IDR_IDR2 Port input data **/
#define GPIOD_IDR_IDR2		(1 << 2)
/** GPIOD_IDR_IDR1 Port input data **/
#define GPIOD_IDR_IDR1		(1 << 1)
/** GPIOD_IDR_IDR0 Port input data **/
#define GPIOD_IDR_IDR0		(1 << 0)

/**@}*/

/** @defgroup gpiod_odr ODR Port output data register (GPIOn_ODR)
@{*/

/** GPIOD_ODR_ODR15 Port output data **/
#define GPIOD_ODR_ODR15		(1 << 15)
/** GPIOD_ODR_ODR14 Port output data **/
#define GPIOD_ODR_ODR14		(1 << 14)
/** GPIOD_ODR_ODR13 Port output data **/
#define GPIOD_ODR_ODR13		(1 << 13)
/** GPIOD_ODR_ODR12 Port output data **/
#define GPIOD_ODR_ODR12		(1 << 12)
/** GPIOD_ODR_ODR11 Port output data **/
#define GPIOD_ODR_ODR11		(1 << 11)
/** GPIOD_ODR_ODR10 Port output data **/
#define GPIOD_ODR_ODR10		(1 << 10)
/** GPIOD_ODR_ODR9 Port output data **/
#define GPIOD_ODR_ODR9		(1 << 9)
/** GPIOD_ODR_ODR8 Port output data **/
#define GPIOD_ODR_ODR8		(1 << 8)
/** GPIOD_ODR_ODR7 Port output data **/
#define GPIOD_ODR_ODR7		(1 << 7)
/** GPIOD_ODR_ODR6 Port output data **/
#define GPIOD_ODR_ODR6		(1 << 6)
/** GPIOD_ODR_ODR5 Port output data **/
#define GPIOD_ODR_ODR5		(1 << 5)
/** GPIOD_ODR_ODR4 Port output data **/
#define GPIOD_ODR_ODR4		(1 << 4)
/** GPIOD_ODR_ODR3 Port output data **/
#define GPIOD_ODR_ODR3		(1 << 3)
/** GPIOD_ODR_ODR2 Port output data **/
#define GPIOD_ODR_ODR2		(1 << 2)
/** GPIOD_ODR_ODR1 Port output data **/
#define GPIOD_ODR_ODR1		(1 << 1)
/** GPIOD_ODR_ODR0 Port output data **/
#define GPIOD_ODR_ODR0		(1 << 0)

/**@}*/

/** @defgroup gpiod_bsrr BSRR Port bit set/reset register (GPIOn_BSRR)
@{*/

/** GPIOD_BSRR_BR15 Reset bit 15 **/
#define GPIOD_BSRR_BR15		(1 << 31)
/** GPIOD_BSRR_BR14 Reset bit 14 **/
#define GPIOD_BSRR_BR14		(1 << 30)
/** GPIOD_BSRR_BR13 Reset bit 13 **/
#define GPIOD_BSRR_BR13		(1 << 29)
/** GPIOD_BSRR_BR12 Reset bit 12 **/
#define GPIOD_BSRR_BR12		(1 << 28)
/** GPIOD_BSRR_BR11 Reset bit 11 **/
#define GPIOD_BSRR_BR11		(1 << 27)
/** GPIOD_BSRR_BR10 Reset bit 10 **/
#define GPIOD_BSRR_BR10		(1 << 26)
/** GPIOD_BSRR_BR9 Reset bit 9 **/
#define GPIOD_BSRR_BR9		(1 << 25)
/** GPIOD_BSRR_BR8 Reset bit 8 **/
#define GPIOD_BSRR_BR8		(1 << 24)
/** GPIOD_BSRR_BR7 Reset bit 7 **/
#define GPIOD_BSRR_BR7		(1 << 23)
/** GPIOD_BSRR_BR6 Reset bit 6 **/
#define GPIOD_BSRR_BR6		(1 << 22)
/** GPIOD_BSRR_BR5 Reset bit 5 **/
#define GPIOD_BSRR_BR5		(1 << 21)
/** GPIOD_BSRR_BR4 Reset bit 4 **/
#define GPIOD_BSRR_BR4		(1 << 20)
/** GPIOD_BSRR_BR3 Reset bit 3 **/
#define GPIOD_BSRR_BR3		(1 << 19)
/** GPIOD_BSRR_BR2 Reset bit 2 **/
#define GPIOD_BSRR_BR2		(1 << 18)
/** GPIOD_BSRR_BR1 Reset bit 1 **/
#define GPIOD_BSRR_BR1		(1 << 17)
/** GPIOD_BSRR_BR0 Reset bit 0 **/
#define GPIOD_BSRR_BR0		(1 << 16)
/** GPIOD_BSRR_BS15 Set bit 15 **/
#define GPIOD_BSRR_BS15		(1 << 15)
/** GPIOD_BSRR_BS14 Set bit 14 **/
#define GPIOD_BSRR_BS14		(1 << 14)
/** GPIOD_BSRR_BS13 Set bit 13 **/
#define GPIOD_BSRR_BS13		(1 << 13)
/** GPIOD_BSRR_BS12 Set bit 12 **/
#define GPIOD_BSRR_BS12		(1 << 12)
/** GPIOD_BSRR_BS11 Set bit 11 **/
#define GPIOD_BSRR_BS11		(1 << 11)
/** GPIOD_BSRR_BS10 Set bit 10 **/
#define GPIOD_BSRR_BS10		(1 << 10)
/** GPIOD_BSRR_BS9 Set bit 9 **/
#define GPIOD_BSRR_BS9		(1 << 9)
/** GPIOD_BSRR_BS8 Set bit 8 **/
#define GPIOD_BSRR_BS8		(1 << 8)
/** GPIOD_BSRR_BS7 Set bit 7 **/
#define GPIOD_BSRR_BS7		(1 << 7)
/** GPIOD_BSRR_BS6 Set bit 6 **/
#define GPIOD_BSRR_BS6		(1 << 6)
/** GPIOD_BSRR_BS5 Set bit 5 **/
#define GPIOD_BSRR_BS5		(1 << 5)
/** GPIOD_BSRR_BS4 Set bit 4 **/
#define GPIOD_BSRR_BS4		(1 << 4)
/** GPIOD_BSRR_BS3 Set bit 3 **/
#define GPIOD_BSRR_BS3		(1 << 3)
/** GPIOD_BSRR_BS2 Set bit 1 **/
#define GPIOD_BSRR_BS2		(1 << 2)
/** GPIOD_BSRR_BS1 Set bit 1 **/
#define GPIOD_BSRR_BS1		(1 << 1)
/** GPIOD_BSRR_BS0 Set bit 0 **/
#define GPIOD_BSRR_BS0		(1 << 0)

/**@}*/

/** @defgroup gpiod_brr BRR Port bit reset register (GPIOn_BRR)
@{*/

/** GPIOD_BRR_BR15 Reset bit 15 **/
#define GPIOD_BRR_BR15		(1 << 15)
/** GPIOD_BRR_BR14 Reset bit 14 **/
#define GPIOD_BRR_BR14		(1 << 14)
/** GPIOD_BRR_BR13 Reset bit 13 **/
#define GPIOD_BRR_BR13		(1 << 13)
/** GPIOD_BRR_BR12 Reset bit 12 **/
#define GPIOD_BRR_BR12		(1 << 12)
/** GPIOD_BRR_BR11 Reset bit 11 **/
#define GPIOD_BRR_BR11		(1 << 11)
/** GPIOD_BRR_BR10 Reset bit 10 **/
#define GPIOD_BRR_BR10		(1 << 10)
/** GPIOD_BRR_BR9 Reset bit 9 **/
#define GPIOD_BRR_BR9		(1 << 9)
/** GPIOD_BRR_BR8 Reset bit 8 **/
#define GPIOD_BRR_BR8		(1 << 8)
/** GPIOD_BRR_BR7 Reset bit 7 **/
#define GPIOD_BRR_BR7		(1 << 7)
/** GPIOD_BRR_BR6 Reset bit 6 **/
#define GPIOD_BRR_BR6		(1 << 6)
/** GPIOD_BRR_BR5 Reset bit 5 **/
#define GPIOD_BRR_BR5		(1 << 5)
/** GPIOD_BRR_BR4 Reset bit 4 **/
#define GPIOD_BRR_BR4		(1 << 4)
/** GPIOD_BRR_BR3 Reset bit 3 **/
#define GPIOD_BRR_BR3		(1 << 3)
/** GPIOD_BRR_BR2 Reset bit 1 **/
#define GPIOD_BRR_BR2		(1 << 2)
/** GPIOD_BRR_BR1 Reset bit 1 **/
#define GPIOD_BRR_BR1		(1 << 1)
/** GPIOD_BRR_BR0 Reset bit 0 **/
#define GPIOD_BRR_BR0		(1 << 0)

/**@}*/

/** @defgroup gpiod_lckr LCKR Port configuration lock register
@{*/

/** GPIOD_LCKR_LCKK Lock key **/
#define GPIOD_LCKR_LCKK		(1 << 16)
/** GPIOD_LCKR_LCK15 Port A Lock bit 15 **/
#define GPIOD_LCKR_LCK15		(1 << 15)
/** GPIOD_LCKR_LCK14 Port A Lock bit 14 **/
#define GPIOD_LCKR_LCK14		(1 << 14)
/** GPIOD_LCKR_LCK13 Port A Lock bit 13 **/
#define GPIOD_LCKR_LCK13		(1 << 13)
/** GPIOD_LCKR_LCK12 Port A Lock bit 12 **/
#define GPIOD_LCKR_LCK12		(1 << 12)
/** GPIOD_LCKR_LCK11 Port A Lock bit 11 **/
#define GPIOD_LCKR_LCK11		(1 << 11)
/** GPIOD_LCKR_LCK10 Port A Lock bit 10 **/
#define GPIOD_LCKR_LCK10		(1 << 10)
/** GPIOD_LCKR_LCK9 Port A Lock bit 9 **/
#define GPIOD_LCKR_LCK9		(1 << 9)
/** GPIOD_LCKR_LCK8 Port A Lock bit 8 **/
#define GPIOD_LCKR_LCK8		(1 << 8)
/** GPIOD_LCKR_LCK7 Port A Lock bit 7 **/
#define GPIOD_LCKR_LCK7		(1 << 7)
/** GPIOD_LCKR_LCK6 Port A Lock bit 6 **/
#define GPIOD_LCKR_LCK6		(1 << 6)
/** GPIOD_LCKR_LCK5 Port A Lock bit 5 **/
#define GPIOD_LCKR_LCK5		(1 << 5)
/** GPIOD_LCKR_LCK4 Port A Lock bit 4 **/
#define GPIOD_LCKR_LCK4		(1 << 4)
/** GPIOD_LCKR_LCK3 Port A Lock bit 3 **/
#define GPIOD_LCKR_LCK3		(1 << 3)
/** GPIOD_LCKR_LCK2 Port A Lock bit 2 **/
#define GPIOD_LCKR_LCK2		(1 << 2)
/** GPIOD_LCKR_LCK1 Port A Lock bit 1 **/
#define GPIOD_LCKR_LCK1		(1 << 1)
/** GPIOD_LCKR_LCK0 Port A Lock bit 0 **/
#define GPIOD_LCKR_LCK0		(1 << 0)

/**@}*/
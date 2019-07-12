#pragma once 

/* --- SMC: Static Memory Controller -------------------------------- */

/** @defgroup smc_registers Static Memory Controller Register
@{*/

/** SMC_CFG SMC NFC Configuration Register **/
#define SMC_CFG			MMIO32(SMC_BASE + 0x00)
/** SMC_CTRL SMC NFC Control Register **/
#define SMC_CTRL			MMIO32(SMC_BASE + 0x04)
/** SMC_SR SMC NFC Status Register **/
#define SMC_SR			MMIO32(SMC_BASE + 0x08)
/** SMC_IER SMC NFC Interrupt Enable Register **/
#define SMC_IER			MMIO32(SMC_BASE + 0x0c)
/** SMC_IDR SMC NFC Interrupt Disable Register **/
#define SMC_IDR			MMIO32(SMC_BASE + 0x10)
/** SMC_IMR SMC NFC Interrupt Mask Register **/
#define SMC_IMR			MMIO32(SMC_BASE + 0x14)
/** SMC_ADDR SMC NFC Address Cycle Zero Register **/
#define SMC_ADDR			MMIO32(SMC_BASE + 0x18)
/** SMC_BANK SMC Bank Address Register **/
#define SMC_BANK			MMIO32(SMC_BASE + 0x1c)
/** SMC_ECC_CTRL SMC ECC Control Register **/
#define SMC_ECC_CTRL			MMIO32(SMC_BASE + 0x20)
/** SMC_ECC_MD SMC ECC Mode Register **/
#define SMC_ECC_MD			MMIO32(SMC_BASE + 0x24)
/** SMC_ECC_SR1 SMC ECC Status 1 Register **/
#define SMC_ECC_SR1			MMIO32(SMC_BASE + 0x28)
/** SMC_ECC_PR0 SMC ECC Parity 0 Register **/
#define SMC_ECC_PR0			MMIO32(SMC_BASE + 0x2c)
/** SMC_ECC_PR0_W9BIT SMC ECC Parity 0 Register **/
#define SMC_ECC_PR0_W9BIT			MMIO32(SMC_BASE + 0x2c)
/** SMC_ECC_PR0_W8BIT SMC ECC Parity 0 Register **/
#define SMC_ECC_PR0_W8BIT			MMIO32(SMC_BASE + 0x2c)
/** SMC_ECC_PR1 SMC ECC parity 1 Register **/
#define SMC_ECC_PR1			MMIO32(SMC_BASE + 0x30)
/** SMC_ECC_PR1_W9BIT SMC ECC parity 1 Register **/
#define SMC_ECC_PR1_W9BIT			MMIO32(SMC_BASE + 0x30)
/** SMC_ECC_PR1_W8BIT SMC ECC parity 1 Register **/
#define SMC_ECC_PR1_W8BIT			MMIO32(SMC_BASE + 0x30)
/** SMC_ECC_SR2 SMC ECC status 2 Register **/
#define SMC_ECC_SR2			MMIO32(SMC_BASE + 0x34)
/** SMC_ECC_PR2 SMC ECC parity 2 Register **/
#define SMC_ECC_PR2			MMIO32(SMC_BASE + 0x38)
/** SMC_ECC_PR2_W8BIT SMC ECC parity 2 Register **/
#define SMC_ECC_PR2_W8BIT			MMIO32(SMC_BASE + 0x38)
/** SMC_ECC_PR3 SMC ECC parity 3 Register **/
#define SMC_ECC_PR3			MMIO32(SMC_BASE + 0x3c)
/** SMC_ECC_PR3_W8BIT SMC ECC parity 3 Register **/
#define SMC_ECC_PR3_W8BIT			MMIO32(SMC_BASE + 0x3c)
/** SMC_ECC_PR4 SMC ECC parity 4 Register **/
#define SMC_ECC_PR4			MMIO32(SMC_BASE + 0x40)
/** SMC_ECC_PR4_W8BIT SMC ECC parity 4 Register **/
#define SMC_ECC_PR4_W8BIT			MMIO32(SMC_BASE + 0x40)
/** SMC_ECC_PR5 SMC ECC parity 5 Register **/
#define SMC_ECC_PR5			MMIO32(SMC_BASE + 0x44)
/** SMC_ECC_PR5_W8BIT SMC ECC parity 5 Register **/
#define SMC_ECC_PR5_W8BIT			MMIO32(SMC_BASE + 0x44)
/** SMC_ECC_PR6 SMC ECC parity 6 Register **/
#define SMC_ECC_PR6			MMIO32(SMC_BASE + 0x48)
/** SMC_ECC_PR6_W8BIT SMC ECC parity 6 Register **/
#define SMC_ECC_PR6_W8BIT			MMIO32(SMC_BASE + 0x48)
/** SMC_ECC_PR7 SMC ECC parity 7 Register **/
#define SMC_ECC_PR7			MMIO32(SMC_BASE + 0x4c)
/** SMC_ECC_PR7_W8BIT SMC ECC parity 7 Register **/
#define SMC_ECC_PR7_W8BIT			MMIO32(SMC_BASE + 0x4c)
/** SMC_ECC_PR8 SMC ECC parity 8 Register **/
#define SMC_ECC_PR8			MMIO32(SMC_BASE + 0x50)
/** SMC_ECC_PR9 SMC ECC parity 9 Register **/
#define SMC_ECC_PR9			MMIO32(SMC_BASE + 0x54)
/** SMC_ECC_PR10 SMC ECC parity 10 Register **/
#define SMC_ECC_PR10			MMIO32(SMC_BASE + 0x58)
/** SMC_ECC_PR11 SMC ECC parity 11 Register **/
#define SMC_ECC_PR11			MMIO32(SMC_BASE + 0x5c)
/** SMC_ECC_PR12 SMC ECC parity 12 Register **/
#define SMC_ECC_PR12			MMIO32(SMC_BASE + 0x60)
/** SMC_ECC_PR13 SMC ECC parity 13 Register **/
#define SMC_ECC_PR13			MMIO32(SMC_BASE + 0x64)
/** SMC_ECC_PR14 SMC ECC parity 14 Register **/
#define SMC_ECC_PR14			MMIO32(SMC_BASE + 0x68)
/** SMC_ECC_PR15 SMC ECC parity 15 Register **/
#define SMC_ECC_PR15			MMIO32(SMC_BASE + 0x6c)
/** SMC_SETUP0 SMC Setup Register (CS_number = 0) **/
#define SMC_SETUP0			MMIO32(SMC_BASE + 0x70)
/** SMC_PULSE0 SMC Pulse Register (CS_number = 0) **/
#define SMC_PULSE0			MMIO32(SMC_BASE + 0x74)
/** SMC_CYCLE0 SMC Cycle Register (CS_number = 0) **/
#define SMC_CYCLE0			MMIO32(SMC_BASE + 0x78)
/** SMC_TIMINGS0 SMC Timings Register (CS_number = 0) **/
#define SMC_TIMINGS0			MMIO32(SMC_BASE + 0x7c)
/** SMC_MODE0 SMC Mode Register (CS_number = 0) **/
#define SMC_MODE0			MMIO32(SMC_BASE + 0x80)
/** SMC_SETUP1 SMC Setup Register (CS_number = 1) **/
#define SMC_SETUP1			MMIO32(SMC_BASE + 0x84)
/** SMC_PULSE1 SMC Pulse Register (CS_number = 1) **/
#define SMC_PULSE1			MMIO32(SMC_BASE + 0x88)
/** SMC_CYCLE1 SMC Cycle Register (CS_number = 1) **/
#define SMC_CYCLE1			MMIO32(SMC_BASE + 0x8c)
/** SMC_TIMINGS1 SMC Timings Register (CS_number = 1) **/
#define SMC_TIMINGS1			MMIO32(SMC_BASE + 0x90)
/** SMC_MODE1 SMC Mode Register (CS_number = 1) **/
#define SMC_MODE1			MMIO32(SMC_BASE + 0x94)
/** SMC_SETUP2 SMC Setup Register (CS_number = 2) **/
#define SMC_SETUP2			MMIO32(SMC_BASE + 0x98)
/** SMC_PULSE2 SMC Pulse Register (CS_number = 2) **/
#define SMC_PULSE2			MMIO32(SMC_BASE + 0x9c)
/** SMC_CYCLE2 SMC Cycle Register (CS_number = 2) **/
#define SMC_CYCLE2			MMIO32(SMC_BASE + 0xa0)
/** SMC_TIMINGS2 SMC Timings Register (CS_number = 2) **/
#define SMC_TIMINGS2			MMIO32(SMC_BASE + 0xa4)
/** SMC_MODE2 SMC Mode Register (CS_number = 2) **/
#define SMC_MODE2			MMIO32(SMC_BASE + 0xa8)
/** SMC_SETUP3 SMC Setup Register (CS_number = 3) **/
#define SMC_SETUP3			MMIO32(SMC_BASE + 0xac)
/** SMC_PULSE3 SMC Pulse Register (CS_number = 3) **/
#define SMC_PULSE3			MMIO32(SMC_BASE + 0xb0)
/** SMC_CYCLE3 SMC Cycle Register (CS_number = 3) **/
#define SMC_CYCLE3			MMIO32(SMC_BASE + 0xb4)
/** SMC_TIMINGS3 SMC Timings Register (CS_number = 3) **/
#define SMC_TIMINGS3			MMIO32(SMC_BASE + 0xb8)
/** SMC_MODE3 SMC Mode Register (CS_number = 3) **/
#define SMC_MODE3			MMIO32(SMC_BASE + 0xbc)
/** SMC_SETUP4 SMC Setup Register (CS_number = 4) **/
#define SMC_SETUP4			MMIO32(SMC_BASE + 0xc0)
/** SMC_PULSE4 SMC Pulse Register (CS_number = 4) **/
#define SMC_PULSE4			MMIO32(SMC_BASE + 0xc4)
/** SMC_CYCLE4 SMC Cycle Register (CS_number = 4) **/
#define SMC_CYCLE4			MMIO32(SMC_BASE + 0xc8)
/** SMC_TIMINGS4 SMC Timings Register (CS_number = 4) **/
#define SMC_TIMINGS4			MMIO32(SMC_BASE + 0xcc)
/** SMC_MODE4 SMC Mode Register (CS_number = 4) **/
#define SMC_MODE4			MMIO32(SMC_BASE + 0xd0)
/** SMC_SETUP5 SMC Setup Register (CS_number = 5) **/
#define SMC_SETUP5			MMIO32(SMC_BASE + 0xd4)
/** SMC_PULSE5 SMC Pulse Register (CS_number = 5) **/
#define SMC_PULSE5			MMIO32(SMC_BASE + 0xd8)
/** SMC_CYCLE5 SMC Cycle Register (CS_number = 5) **/
#define SMC_CYCLE5			MMIO32(SMC_BASE + 0xdc)
/** SMC_TIMINGS5 SMC Timings Register (CS_number = 5) **/
#define SMC_TIMINGS5			MMIO32(SMC_BASE + 0xe0)
/** SMC_MODE5 SMC Mode Register (CS_number = 5) **/
#define SMC_MODE5			MMIO32(SMC_BASE + 0xe4)
/** SMC_SETUP6 SMC Setup Register (CS_number = 6) **/
#define SMC_SETUP6			MMIO32(SMC_BASE + 0xe8)
/** SMC_PULSE6 SMC Pulse Register (CS_number = 6) **/
#define SMC_PULSE6			MMIO32(SMC_BASE + 0xec)
/** SMC_CYCLE6 SMC Cycle Register (CS_number = 6) **/
#define SMC_CYCLE6			MMIO32(SMC_BASE + 0xf0)
/** SMC_TIMINGS6 SMC Timings Register (CS_number = 6) **/
#define SMC_TIMINGS6			MMIO32(SMC_BASE + 0xf4)
/** SMC_MODE6 SMC Mode Register (CS_number = 6) **/
#define SMC_MODE6			MMIO32(SMC_BASE + 0xf8)
/** SMC_SETUP7 SMC Setup Register (CS_number = 7) **/
#define SMC_SETUP7			MMIO32(SMC_BASE + 0xfc)
/** SMC_PULSE7 SMC Pulse Register (CS_number = 7) **/
#define SMC_PULSE7			MMIO32(SMC_BASE + 0x100)
/** SMC_CYCLE7 SMC Cycle Register (CS_number = 7) **/
#define SMC_CYCLE7			MMIO32(SMC_BASE + 0x104)
/** SMC_TIMINGS7 SMC Timings Register (CS_number = 7) **/
#define SMC_TIMINGS7			MMIO32(SMC_BASE + 0x108)
/** SMC_MODE7 SMC Mode Register (CS_number = 7) **/
#define SMC_MODE7			MMIO32(SMC_BASE + 0x10c)
/** SMC_OCMS SMC OCMS Register **/
#define SMC_OCMS			MMIO32(SMC_BASE + 0x110)
/** SMC_KEY1 SMC OCMS KEY1 Register **/
#define SMC_KEY1			MMIO32(SMC_BASE + 0x114)
/** SMC_KEY2 SMC OCMS KEY2 Register **/
#define SMC_KEY2			MMIO32(SMC_BASE + 0x118)
/** SMC_WPCR Write Protection Control Register **/
#define SMC_WPCR			MMIO32(SMC_BASE + 0x1e4)
/** SMC_WPSR Write Protection Status Register **/
#define SMC_WPSR			MMIO32(SMC_BASE + 0x1e8)

/**@}*/


/** @defgroup smc_cfg CFG SMC NFC Configuration Register
@{*/


#define SMC_CFG_DTOMUL_SHIFT		20
#define SMC_CFG_DTOMUL_MASK		0x07
/** @defgroup smc_cfg_dtomul DTOMUL Data Timeout Multiplier
@{*/
/**@}*/


#define SMC_CFG_DTOCYC_SHIFT		16
#define SMC_CFG_DTOCYC_MASK		0x0f
/** @defgroup smc_cfg_dtocyc DTOCYC Data Timeout Cycle Number
@{*/
/**@}*/

/** SMC_CFG_RBEDGE Ready/Busy Signal Edge Detection **/
#define SMC_CFG_RBEDGE		(1 << 13)
/** SMC_CFG_EDGECTRL Rising/Falling Edge Detection Control **/
#define SMC_CFG_EDGECTRL		(1 << 12)
/** SMC_CFG_RSPARE Read Spare Area **/
#define SMC_CFG_RSPARE		(1 << 9)
/** SMC_CFG_WSPARE Write Spare Area **/
#define SMC_CFG_WSPARE		(1 << 8)

#define SMC_CFG_PAGESIZE_SHIFT		0
#define SMC_CFG_PAGESIZE_MASK		0x03
/** @defgroup smc_cfg_pagesize PAGESIZE Page Size of the NAND Flash Device
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ctrl CTRL SMC NFC Control Register
@{*/

/** SMC_CTRL_NFCDIS NAND Flash Controller Disable **/
#define SMC_CTRL_NFCDIS		(1 << 1)
/** SMC_CTRL_NFCEN NAND Flash Controller Enable **/
#define SMC_CTRL_NFCEN		(1 << 0)

/**@}*/

/** @defgroup smc_sr SR SMC NFC Status Register
@{*/

/** SMC_SR_RB_EDGE0 Ready/Busy Line 0 Edge Detected **/
#define SMC_SR_RB_EDGE0		(1 << 24)
/** SMC_SR_NFCASE NFC Access Size Error **/
#define SMC_SR_NFCASE		(1 << 23)
/** SMC_SR_AWB Accessing While Busy **/
#define SMC_SR_AWB		(1 << 22)
/** SMC_SR_UNDEF Undefined Area Error **/
#define SMC_SR_UNDEF		(1 << 21)
/** SMC_SR_DTOE Data Timeout Error **/
#define SMC_SR_DTOE		(1 << 20)
/** SMC_SR_CMDDONE Command Done **/
#define SMC_SR_CMDDONE		(1 << 17)
/** SMC_SR_XFRDONE NFC Data Transfer Terminated **/
#define SMC_SR_XFRDONE		(1 << 16)

#define SMC_SR_NFCSID_SHIFT		12
#define SMC_SR_NFCSID_MASK		0x07
/** @defgroup smc_sr_nfcsid NFCSID NFC Chip Select ID (this field cannot be reset)
@{*/
/**@}*/

/** SMC_SR_NFCWR NFC Write/Read Operation (this field cannot be reset) **/
#define SMC_SR_NFCWR		(1 << 11)
/** SMC_SR_NFCBUSY NFC Busy (this field cannot be reset) **/
#define SMC_SR_NFCBUSY		(1 << 8)
/** SMC_SR_RB_FALL Selected Ready Busy Falling Edge Detected **/
#define SMC_SR_RB_FALL		(1 << 5)
/** SMC_SR_RB_RISE Selected Ready Busy Rising Edge Detected **/
#define SMC_SR_RB_RISE		(1 << 4)
/** SMC_SR_SMCSTS NAND Flash Controller status (this field cannot be reset) **/
#define SMC_SR_SMCSTS		(1 << 0)

/**@}*/

/** @defgroup smc_ier IER SMC NFC Interrupt Enable Register
@{*/

/** SMC_IER_RB_EDGE0 Ready/Busy Line 0 Interrupt Enable **/
#define SMC_IER_RB_EDGE0		(1 << 24)
/** SMC_IER_NFCASE NFC Access Size Error Interrupt Enable **/
#define SMC_IER_NFCASE		(1 << 23)
/** SMC_IER_AWB Accessing While Busy Interrupt Enable **/
#define SMC_IER_AWB		(1 << 22)
/** SMC_IER_UNDEF Undefined Area Access Interrupt Enable **/
#define SMC_IER_UNDEF		(1 << 21)
/** SMC_IER_DTOE Data Timeout Error Interrupt Enable **/
#define SMC_IER_DTOE		(1 << 20)
/** SMC_IER_CMDDONE Command Done Interrupt Enable **/
#define SMC_IER_CMDDONE		(1 << 17)
/** SMC_IER_XFRDONE Transfer Done Interrupt Enable **/
#define SMC_IER_XFRDONE		(1 << 16)
/** SMC_IER_RB_FALL Ready Busy Falling Edge Detection Interrupt Enable **/
#define SMC_IER_RB_FALL		(1 << 5)
/** SMC_IER_RB_RISE Ready Busy Rising Edge Detection Interrupt Enable **/
#define SMC_IER_RB_RISE		(1 << 4)

/**@}*/

/** @defgroup smc_idr IDR SMC NFC Interrupt Disable Register
@{*/

/** SMC_IDR_RB_EDGE0 Ready/Busy Line 0 Interrupt Disable **/
#define SMC_IDR_RB_EDGE0		(1 << 24)
/** SMC_IDR_NFCASE NFC Access Size Error Interrupt Disable **/
#define SMC_IDR_NFCASE		(1 << 23)
/** SMC_IDR_AWB Accessing While Busy Interrupt Disable **/
#define SMC_IDR_AWB		(1 << 22)
/** SMC_IDR_UNDEF Undefined Area Access Interrupt Disable **/
#define SMC_IDR_UNDEF		(1 << 21)
/** SMC_IDR_DTOE Data Timeout Error Interrupt Disable **/
#define SMC_IDR_DTOE		(1 << 20)
/** SMC_IDR_CMDDONE Command Done Interrupt Disable **/
#define SMC_IDR_CMDDONE		(1 << 17)
/** SMC_IDR_XFRDONE Transfer Done Interrupt Disable **/
#define SMC_IDR_XFRDONE		(1 << 16)
/** SMC_IDR_RB_FALL Ready Busy Falling Edge Detection Interrupt Disable **/
#define SMC_IDR_RB_FALL		(1 << 5)
/** SMC_IDR_RB_RISE Ready Busy Rising Edge Detection Interrupt Disable **/
#define SMC_IDR_RB_RISE		(1 << 4)

/**@}*/

/** @defgroup smc_imr IMR SMC NFC Interrupt Mask Register
@{*/

/** SMC_IMR_RB_EDGE0 Ready/Busy Line 0 Interrupt Mask **/
#define SMC_IMR_RB_EDGE0		(1 << 24)
/** SMC_IMR_NFCASE NFC Access Size Error Interrupt Mask **/
#define SMC_IMR_NFCASE		(1 << 23)
/** SMC_IMR_AWB Accessing While Busy Interrupt Mask **/
#define SMC_IMR_AWB		(1 << 22)
/** SMC_IMR_UNDEF Undefined Area Access Interrupt Mask5 **/
#define SMC_IMR_UNDEF		(1 << 21)
/** SMC_IMR_DTOE Data Timeout Error Interrupt Mask **/
#define SMC_IMR_DTOE		(1 << 20)
/** SMC_IMR_CMDDONE Command Done Interrupt Mask **/
#define SMC_IMR_CMDDONE		(1 << 17)
/** SMC_IMR_XFRDONE Transfer Done Interrupt Mask **/
#define SMC_IMR_XFRDONE		(1 << 16)
/** SMC_IMR_RB_FALL Ready Busy Falling Edge Detection Interrupt Mask **/
#define SMC_IMR_RB_FALL		(1 << 5)
/** SMC_IMR_RB_RISE Ready Busy Rising Edge Detection Interrupt Mask **/
#define SMC_IMR_RB_RISE		(1 << 4)

/**@}*/

/** @defgroup smc_addr ADDR SMC NFC Address Cycle Zero Register
@{*/


#define SMC_ADDR_ADDR_CYCLE0_SHIFT		0
#define SMC_ADDR_ADDR_CYCLE0_MASK		0xff
/** @defgroup smc_addr_addr_cycle0 ADDRCYCLE0 NAND Flash Array Address cycle 0
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_bank BANK SMC Bank Address Register
@{*/


#define SMC_BANK_BANK_SHIFT		0
#define SMC_BANK_BANK_MASK		0x07
/** @defgroup smc_bank_bank BANK Bank Identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_ctrl ECCCTRL SMC ECC Control Register
@{*/

/** SMC_ECC_CTRL_SWRST Software Reset **/
#define SMC_ECC_CTRL_SWRST		(1 << 1)
/** SMC_ECC_CTRL_RST Reset ECC **/
#define SMC_ECC_CTRL_RST		(1 << 0)

/**@}*/

/** @defgroup smc_ecc_md ECCMD SMC ECC Mode Register
@{*/


#define SMC_ECC_MD_TYPCORREC_SHIFT		4
#define SMC_ECC_MD_TYPCORREC_MASK		0x03
/** @defgroup smc_ecc_md_typcorrec TYPCORREC Type of Correction
@{*/
/**@}*/


#define SMC_ECC_MD_ECC_PAGESIZE_SHIFT		0
#define SMC_ECC_MD_ECC_PAGESIZE_MASK		0x03
/** @defgroup smc_ecc_md_ecc_pagesize ECCPAGESIZE ECC Page Size
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_sr1 ECCSR1 SMC ECC Status 1 Register
@{*/

/** SMC_ECC_SR1_MULERR7 Multiple Error in the page between the 1792nd and the 2047th bytes or between the 3584th and the 4095th bytes **/
#define SMC_ECC_SR1_MULERR7		(1 << 30)
/** SMC_ECC_SR1_ECCERR7 ECC Error in the page between the 1792nd and the 2047th bytes or between the 3584th and the 4095th bytes **/
#define SMC_ECC_SR1_ECCERR7		(1 << 29)
/** SMC_ECC_SR1_RECERR7 Recoverable Error in the page between the 1792nd and the 2047th bytes or between the 3584th and the 4095th bytes **/
#define SMC_ECC_SR1_RECERR7		(1 << 28)
/** SMC_ECC_SR1_MULERR6 Multiple Error in the page between the 1536th and the 1791st bytes or between the 3072nd and the 3583rd bytes **/
#define SMC_ECC_SR1_MULERR6		(1 << 26)
/** SMC_ECC_SR1_ECCERR6 ECC Error in the page between the 1536th and the 1791st bytes or between the 3072nd and the 3583rd bytes **/
#define SMC_ECC_SR1_ECCERR6		(1 << 25)
/** SMC_ECC_SR1_RECERR6 Recoverable Error in the page between the 1536th and the 1791st bytes or between the 3072nd and the 3583rd bytes **/
#define SMC_ECC_SR1_RECERR6		(1 << 24)
/** SMC_ECC_SR1_MULERR5 Multiple Error in the page between the 1280th and the 1535th bytes or between the 2560th and the 3071st bytes **/
#define SMC_ECC_SR1_MULERR5		(1 << 22)
/** SMC_ECC_SR1_ECCERR5 ECC Error in the page between the 1280th and the 1535th bytes or between the 2560th and the 3071st bytes **/
#define SMC_ECC_SR1_ECCERR5		(1 << 21)
/** SMC_ECC_SR1_RECERR5 Recoverable Error in the page between the 1280th and the 1535th bytes or between the 2560th and the 3071st bytes **/
#define SMC_ECC_SR1_RECERR5		(1 << 20)
/** SMC_ECC_SR1_MULERR4 Multiple Error in the page between the 1024th and the 1279th bytes or between the 2048th and the 2559th bytes **/
#define SMC_ECC_SR1_MULERR4		(1 << 18)
/** SMC_ECC_SR1_ECCERR4 ECC Error in the page between the 1024th and the 1279th bytes or between the 2048th and the 2559th bytes **/
#define SMC_ECC_SR1_ECCERR4		(1 << 17)
/** SMC_ECC_SR1_RECERR4 Recoverable Error in the page between the 1024th and the 1279th bytes or between the 2048th and the 2559th bytes **/
#define SMC_ECC_SR1_RECERR4		(1 << 16)
/** SMC_ECC_SR1_MULERR3 Multiple Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes **/
#define SMC_ECC_SR1_MULERR3		(1 << 14)
/** SMC_ECC_SR1_ECCERR3 ECC Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes **/
#define SMC_ECC_SR1_ECCERR3		(1 << 13)
/** SMC_ECC_SR1_RECERR3 Recoverable Error in the page between the 768th and the 1023rd bytes or between the 1536th and the 2047th bytes **/
#define SMC_ECC_SR1_RECERR3		(1 << 12)
/** SMC_ECC_SR1_MULERR2 Multiple Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes **/
#define SMC_ECC_SR1_MULERR2		(1 << 10)
/** SMC_ECC_SR1_ECCERR2 ECC Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes **/
#define SMC_ECC_SR1_ECCERR2		(1 << 9)
/** SMC_ECC_SR1_RECERR2 Recoverable Error in the page between the 512nd and the 767th bytes or between the 1024th and the 1535th bytes **/
#define SMC_ECC_SR1_RECERR2		(1 << 8)
/** SMC_ECC_SR1_MULERR1 Multiple Error in the page between the 256th and the 511th bytes or between the 512nd and the 1023rd bytes **/
#define SMC_ECC_SR1_MULERR1		(1 << 6)
/** SMC_ECC_SR1_ECCERR1 ECC Error in the page between the 256th and the 511th bytes or between the 512nd and the 1023rd bytes **/
#define SMC_ECC_SR1_ECCERR1		(1 << 5)
/** SMC_ECC_SR1_RECERR1 Recoverable Error in the page between the 256th and the 511th bytes or the 512nd and the 1023rd bytes **/
#define SMC_ECC_SR1_RECERR1		(1 << 4)
/** SMC_ECC_SR1_MULERR0 Multiple Error **/
#define SMC_ECC_SR1_MULERR0		(1 << 2)
/** SMC_ECC_SR1_ECCERR0 ECC Error **/
#define SMC_ECC_SR1_ECCERR0		(1 << 1)
/** SMC_ECC_SR1_RECERR0 Recoverable Error **/
#define SMC_ECC_SR1_RECERR0		(1 << 0)

/**@}*/

/** @defgroup smc_ecc_pr0 ECCPR0 SMC ECC Parity 0 Register
@{*/


#define SMC_ECC_PR0_WORDADDR_SHIFT		4
#define SMC_ECC_PR0_WORDADDR_MASK		0xfff
/** @defgroup smc_ecc_pr0_wordaddr WORDADDR Word Address
@{*/
/**@}*/


#define SMC_ECC_PR0_BITADDR_SHIFT		0
#define SMC_ECC_PR0_BITADDR_MASK		0x0f
/** @defgroup smc_ecc_pr0_bitaddr BITADDR Bit Address
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr0_w9bit ECCPR0W9BIT SMC ECC Parity 0 Register
@{*/


#define SMC_ECC_PR0_W9BIT_NPARITY_SHIFT		12
#define SMC_ECC_PR0_W9BIT_NPARITY_MASK		0xfff
/** @defgroup smc_ecc_pr0_w9bit_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR0_W9BIT_WORDADDR_SHIFT		3
#define SMC_ECC_PR0_W9BIT_WORDADDR_MASK		0x1ff
/** @defgroup smc_ecc_pr0_w9bit_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR0_W9BIT_BITADDR_SHIFT		0
#define SMC_ECC_PR0_W9BIT_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr0_w9bit_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr0_w8bit ECCPR0W8BIT SMC ECC Parity 0 Register
@{*/


#define SMC_ECC_PR0_W8BIT_NPARITY_SHIFT		12
#define SMC_ECC_PR0_W8BIT_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr0_w8bit_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR0_W8BIT_WORDADDR_SHIFT		3
#define SMC_ECC_PR0_W8BIT_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr0_w8bit_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR0_W8BIT_BITADDR_SHIFT		0
#define SMC_ECC_PR0_W8BIT_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr0_w8bit_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr1 ECCPR1 SMC ECC parity 1 Register
@{*/


#define SMC_ECC_PR1_NPARITY_SHIFT		0
#define SMC_ECC_PR1_NPARITY_MASK		0xffff
/** @defgroup smc_ecc_pr1_nparity NPARITY Parity N
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr1_w9bit ECCPR1W9BIT SMC ECC parity 1 Register
@{*/


#define SMC_ECC_PR1_W9BIT_NPARITY_SHIFT		12
#define SMC_ECC_PR1_W9BIT_NPARITY_MASK		0xfff
/** @defgroup smc_ecc_pr1_w9bit_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR1_W9BIT_WORDADDR_SHIFT		3
#define SMC_ECC_PR1_W9BIT_WORDADDR_MASK		0x1ff
/** @defgroup smc_ecc_pr1_w9bit_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR1_W9BIT_BITADDR_SHIFT		0
#define SMC_ECC_PR1_W9BIT_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr1_w9bit_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr1_w8bit ECCPR1W8BIT SMC ECC parity 1 Register
@{*/


#define SMC_ECC_PR1_W8BIT_NPARITY_SHIFT		12
#define SMC_ECC_PR1_W8BIT_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr1_w8bit_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR1_W8BIT_WORDADDR_SHIFT		3
#define SMC_ECC_PR1_W8BIT_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr1_w8bit_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR1_W8BIT_BITADDR_SHIFT		0
#define SMC_ECC_PR1_W8BIT_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr1_w8bit_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_sr2 ECCSR2 SMC ECC status 2 Register
@{*/

/** SMC_ECC_SR2_MULERR15 Multiple Error in the page between the 3840th and the 4095th bytes **/
#define SMC_ECC_SR2_MULERR15		(1 << 30)
/** SMC_ECC_SR2_ECCERR15 ECC Error in the page between the 3840th and the 4095th bytes **/
#define SMC_ECC_SR2_ECCERR15		(1 << 29)
/** SMC_ECC_SR2_RECERR15 Recoverable Error in the page between the 3840th and the 4095th bytes **/
#define SMC_ECC_SR2_RECERR15		(1 << 28)
/** SMC_ECC_SR2_MULERR14 Multiple Error in the page between the 3584th and the 3839th bytes **/
#define SMC_ECC_SR2_MULERR14		(1 << 26)
/** SMC_ECC_SR2_ECCERR14 ECC Error in the page between the 3584th and the 3839th bytes **/
#define SMC_ECC_SR2_ECCERR14		(1 << 25)
/** SMC_ECC_SR2_RECERR14 Recoverable Error in the page between the 3584th and the 3839th bytes **/
#define SMC_ECC_SR2_RECERR14		(1 << 24)
/** SMC_ECC_SR2_MULERR13 Multiple Error in the page between the 3328th and the 3583rd bytes **/
#define SMC_ECC_SR2_MULERR13		(1 << 22)
/** SMC_ECC_SR2_ECCERR13 ECC Error in the page between the 3328th and the 3583rd bytes **/
#define SMC_ECC_SR2_ECCERR13		(1 << 21)
/** SMC_ECC_SR2_RECERR13 Recoverable Error in the page between the 3328th and the 3583rd bytes **/
#define SMC_ECC_SR2_RECERR13		(1 << 20)
/** SMC_ECC_SR2_MULERR12 Multiple Error in the page between the 3072nd and the 3327th bytes **/
#define SMC_ECC_SR2_MULERR12		(1 << 18)
/** SMC_ECC_SR2_ECCERR12 ECC Error in the page between the 3072nd and the 3327th bytes **/
#define SMC_ECC_SR2_ECCERR12		(1 << 17)
/** SMC_ECC_SR2_RECERR12 Recoverable Error in the page between the 3072nd and the 3327th bytes **/
#define SMC_ECC_SR2_RECERR12		(1 << 16)
/** SMC_ECC_SR2_MULERR11 Multiple Error in the page between the 2816th and the 3071st bytes **/
#define SMC_ECC_SR2_MULERR11		(1 << 14)
/** SMC_ECC_SR2_ECCERR11 ECC Error in the page between the 2816th and the 3071st bytes **/
#define SMC_ECC_SR2_ECCERR11		(1 << 13)
/** SMC_ECC_SR2_RECERR11 Recoverable Error in the page between the 2816th and the 3071st bytes **/
#define SMC_ECC_SR2_RECERR11		(1 << 12)
/** SMC_ECC_SR2_MULERR10 Multiple Error in the page between the 2560th and the 2815th bytes **/
#define SMC_ECC_SR2_MULERR10		(1 << 10)
/** SMC_ECC_SR2_ECCERR10 ECC Error in the page between the 2560th and the 2815th bytes **/
#define SMC_ECC_SR2_ECCERR10		(1 << 9)
/** SMC_ECC_SR2_RECERR10 Recoverable Error in the page between the 2560th and the 2815th bytes **/
#define SMC_ECC_SR2_RECERR10		(1 << 8)
/** SMC_ECC_SR2_MULERR9 Multiple Error in the page between the 2304th and the 2559th bytes **/
#define SMC_ECC_SR2_MULERR9		(1 << 6)
/** SMC_ECC_SR2_ECCERR9 ECC Error in the page between the 2304th and the 2559th bytes **/
#define SMC_ECC_SR2_ECCERR9		(1 << 5)
/** SMC_ECC_SR2_RECERR9 Recoverable Error in the page between the 2304th and the 2559th bytes **/
#define SMC_ECC_SR2_RECERR9		(1 << 4)
/** SMC_ECC_SR2_MULERR8 Multiple Error in the page between the 2048th and the 2303rd bytes **/
#define SMC_ECC_SR2_MULERR8		(1 << 2)
/** SMC_ECC_SR2_ECCERR8 ECC Error in the page between the 2048th and the 2303rd bytes **/
#define SMC_ECC_SR2_ECCERR8		(1 << 1)
/** SMC_ECC_SR2_RECERR8 Recoverable Error in the page between the 2048th and the 2303rd bytes **/
#define SMC_ECC_SR2_RECERR8		(1 << 0)

/**@}*/

/** @defgroup smc_ecc_pr2 ECCPR2 SMC ECC parity 2 Register
@{*/


#define SMC_ECC_PR2_NPARITY_SHIFT		12
#define SMC_ECC_PR2_NPARITY_MASK		0xfff
/** @defgroup smc_ecc_pr2_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR2_WORDADDR_SHIFT		3
#define SMC_ECC_PR2_WORDADDR_MASK		0x1ff
/** @defgroup smc_ecc_pr2_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR2_BITADDR_SHIFT		0
#define SMC_ECC_PR2_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr2_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr2_w8bit ECCPR2W8BIT SMC ECC parity 2 Register
@{*/


#define SMC_ECC_PR2_W8BIT_NPARITY_SHIFT		12
#define SMC_ECC_PR2_W8BIT_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr2_w8bit_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR2_W8BIT_WORDADDR_SHIFT		3
#define SMC_ECC_PR2_W8BIT_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr2_w8bit_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR2_W8BIT_BITADDR_SHIFT		0
#define SMC_ECC_PR2_W8BIT_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr2_w8bit_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr3 ECCPR3 SMC ECC parity 3 Register
@{*/


#define SMC_ECC_PR3_NPARITY_SHIFT		12
#define SMC_ECC_PR3_NPARITY_MASK		0xfff
/** @defgroup smc_ecc_pr3_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR3_WORDADDR_SHIFT		3
#define SMC_ECC_PR3_WORDADDR_MASK		0x1ff
/** @defgroup smc_ecc_pr3_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR3_BITADDR_SHIFT		0
#define SMC_ECC_PR3_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr3_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr3_w8bit ECCPR3W8BIT SMC ECC parity 3 Register
@{*/


#define SMC_ECC_PR3_W8BIT_NPARITY_SHIFT		12
#define SMC_ECC_PR3_W8BIT_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr3_w8bit_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR3_W8BIT_WORDADDR_SHIFT		3
#define SMC_ECC_PR3_W8BIT_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr3_w8bit_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR3_W8BIT_BITADDR_SHIFT		0
#define SMC_ECC_PR3_W8BIT_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr3_w8bit_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr4 ECCPR4 SMC ECC parity 4 Register
@{*/


#define SMC_ECC_PR4_NPARITY_SHIFT		12
#define SMC_ECC_PR4_NPARITY_MASK		0xfff
/** @defgroup smc_ecc_pr4_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR4_WORDADDR_SHIFT		3
#define SMC_ECC_PR4_WORDADDR_MASK		0x1ff
/** @defgroup smc_ecc_pr4_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR4_BITADDR_SHIFT		0
#define SMC_ECC_PR4_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr4_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr4_w8bit ECCPR4W8BIT SMC ECC parity 4 Register
@{*/


#define SMC_ECC_PR4_W8BIT_NPARITY_SHIFT		12
#define SMC_ECC_PR4_W8BIT_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr4_w8bit_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR4_W8BIT_WORDADDR_SHIFT		3
#define SMC_ECC_PR4_W8BIT_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr4_w8bit_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR4_W8BIT_BITADDR_SHIFT		0
#define SMC_ECC_PR4_W8BIT_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr4_w8bit_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr5 ECCPR5 SMC ECC parity 5 Register
@{*/


#define SMC_ECC_PR5_NPARITY_SHIFT		12
#define SMC_ECC_PR5_NPARITY_MASK		0xfff
/** @defgroup smc_ecc_pr5_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR5_WORDADDR_SHIFT		3
#define SMC_ECC_PR5_WORDADDR_MASK		0x1ff
/** @defgroup smc_ecc_pr5_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR5_BITADDR_SHIFT		0
#define SMC_ECC_PR5_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr5_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr5_w8bit ECCPR5W8BIT SMC ECC parity 5 Register
@{*/


#define SMC_ECC_PR5_W8BIT_NPARITY_SHIFT		12
#define SMC_ECC_PR5_W8BIT_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr5_w8bit_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR5_W8BIT_WORDADDR_SHIFT		3
#define SMC_ECC_PR5_W8BIT_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr5_w8bit_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR5_W8BIT_BITADDR_SHIFT		0
#define SMC_ECC_PR5_W8BIT_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr5_w8bit_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr6 ECCPR6 SMC ECC parity 6 Register
@{*/


#define SMC_ECC_PR6_NPARITY_SHIFT		12
#define SMC_ECC_PR6_NPARITY_MASK		0xfff
/** @defgroup smc_ecc_pr6_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR6_WORDADDR_SHIFT		3
#define SMC_ECC_PR6_WORDADDR_MASK		0x1ff
/** @defgroup smc_ecc_pr6_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR6_BITADDR_SHIFT		0
#define SMC_ECC_PR6_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr6_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr6_w8bit ECCPR6W8BIT SMC ECC parity 6 Register
@{*/


#define SMC_ECC_PR6_W8BIT_NPARITY_SHIFT		12
#define SMC_ECC_PR6_W8BIT_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr6_w8bit_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR6_W8BIT_WORDADDR_SHIFT		3
#define SMC_ECC_PR6_W8BIT_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr6_w8bit_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR6_W8BIT_BITADDR_SHIFT		0
#define SMC_ECC_PR6_W8BIT_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr6_w8bit_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr7 ECCPR7 SMC ECC parity 7 Register
@{*/


#define SMC_ECC_PR7_NPARITY_SHIFT		12
#define SMC_ECC_PR7_NPARITY_MASK		0xfff
/** @defgroup smc_ecc_pr7_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR7_WORDADDR_SHIFT		3
#define SMC_ECC_PR7_WORDADDR_MASK		0x1ff
/** @defgroup smc_ecc_pr7_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR7_BITADDR_SHIFT		0
#define SMC_ECC_PR7_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr7_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 512) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr7_w8bit ECCPR7W8BIT SMC ECC parity 7 Register
@{*/


#define SMC_ECC_PR7_W8BIT_NPARITY_SHIFT		12
#define SMC_ECC_PR7_W8BIT_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr7_w8bit_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR7_W8BIT_WORDADDR_SHIFT		3
#define SMC_ECC_PR7_W8BIT_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr7_w8bit_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR7_W8BIT_BITADDR_SHIFT		0
#define SMC_ECC_PR7_W8BIT_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr7_w8bit_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr8 ECCPR8 SMC ECC parity 8 Register
@{*/


#define SMC_ECC_PR8_NPARITY_SHIFT		12
#define SMC_ECC_PR8_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr8_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR8_WORDADDR_SHIFT		3
#define SMC_ECC_PR8_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr8_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR8_BITADDR_SHIFT		0
#define SMC_ECC_PR8_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr8_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr9 ECCPR9 SMC ECC parity 9 Register
@{*/


#define SMC_ECC_PR9_NPARITY_SHIFT		12
#define SMC_ECC_PR9_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr9_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR9_WORDADDR_SHIFT		3
#define SMC_ECC_PR9_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr9_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR9_BITADDR_SHIFT		0
#define SMC_ECC_PR9_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr9_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr10 ECCPR10 SMC ECC parity 10 Register
@{*/


#define SMC_ECC_PR10_NPARITY_SHIFT		12
#define SMC_ECC_PR10_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr10_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR10_WORDADDR_SHIFT		3
#define SMC_ECC_PR10_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr10_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR10_BITADDR_SHIFT		0
#define SMC_ECC_PR10_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr10_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr11 ECCPR11 SMC ECC parity 11 Register
@{*/


#define SMC_ECC_PR11_NPARITY_SHIFT		12
#define SMC_ECC_PR11_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr11_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR11_WORDADDR_SHIFT		3
#define SMC_ECC_PR11_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr11_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR11_BITADDR_SHIFT		0
#define SMC_ECC_PR11_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr11_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr12 ECCPR12 SMC ECC parity 12 Register
@{*/


#define SMC_ECC_PR12_NPARITY_SHIFT		12
#define SMC_ECC_PR12_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr12_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR12_WORDADDR_SHIFT		3
#define SMC_ECC_PR12_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr12_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR12_BITADDR_SHIFT		0
#define SMC_ECC_PR12_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr12_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr13 ECCPR13 SMC ECC parity 13 Register
@{*/


#define SMC_ECC_PR13_NPARITY_SHIFT		12
#define SMC_ECC_PR13_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr13_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR13_WORDADDR_SHIFT		3
#define SMC_ECC_PR13_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr13_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR13_BITADDR_SHIFT		0
#define SMC_ECC_PR13_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr13_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr14 ECCPR14 SMC ECC parity 14 Register
@{*/


#define SMC_ECC_PR14_NPARITY_SHIFT		12
#define SMC_ECC_PR14_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr14_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR14_WORDADDR_SHIFT		3
#define SMC_ECC_PR14_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr14_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR14_BITADDR_SHIFT		0
#define SMC_ECC_PR14_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr14_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_ecc_pr15 ECCPR15 SMC ECC parity 15 Register
@{*/


#define SMC_ECC_PR15_NPARITY_SHIFT		12
#define SMC_ECC_PR15_NPARITY_MASK		0x7ff
/** @defgroup smc_ecc_pr15_nparity NPARITY Parity N
@{*/
/**@}*/


#define SMC_ECC_PR15_WORDADDR_SHIFT		3
#define SMC_ECC_PR15_WORDADDR_MASK		0xff
/** @defgroup smc_ecc_pr15_wordaddr WORDADDR Corrupted Word Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


#define SMC_ECC_PR15_BITADDR_SHIFT		0
#define SMC_ECC_PR15_BITADDR_MASK		0x07
/** @defgroup smc_ecc_pr15_bitaddr BITADDR Corrupted Bit Address in the Page between (i x 256) and ((i + 1) x 512) - 1) Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_setup0 SETUP0 SMC Setup Register (CS_number = 0)
@{*/


#define SMC_SETUP0_NCS_RD_SETUP_SHIFT		24
#define SMC_SETUP0_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_setup0_ncs_rd_setup NCSRDSETUP NCS Setup Length in Read Access
@{*/
/**@}*/


#define SMC_SETUP0_NRD_SETUP_SHIFT		16
#define SMC_SETUP0_NRD_SETUP_MASK		0x3f
/** @defgroup smc_setup0_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SETUP0_NCS_WR_SETUP_SHIFT		8
#define SMC_SETUP0_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_setup0_ncs_wr_setup NCSWRSETUP NCS Setup Length in Write Access
@{*/
/**@}*/


#define SMC_SETUP0_NWE_SETUP_SHIFT		0
#define SMC_SETUP0_NWE_SETUP_MASK		0x3f
/** @defgroup smc_setup0_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_pulse0 PULSE0 SMC Pulse Register (CS_number = 0)
@{*/


#define SMC_PULSE0_NCS_RD_PULSE_SHIFT		24
#define SMC_PULSE0_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_pulse0_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_PULSE0_NRD_PULSE_SHIFT		16
#define SMC_PULSE0_NRD_PULSE_MASK		0x7f
/** @defgroup smc_pulse0_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_PULSE0_NCS_WR_PULSE_SHIFT		8
#define SMC_PULSE0_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_pulse0_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_PULSE0_NWE_PULSE_SHIFT		0
#define SMC_PULSE0_NWE_PULSE_MASK		0x7f
/** @defgroup smc_pulse0_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_cycle0 CYCLE0 SMC Cycle Register (CS_number = 0)
@{*/


#define SMC_CYCLE0_NRD_CYCLE_SHIFT		16
#define SMC_CYCLE0_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle0_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_CYCLE0_NWE_CYCLE_SHIFT		0
#define SMC_CYCLE0_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle0_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_timings0 TIMINGS0 SMC Timings Register (CS_number = 0)
@{*/

/** SMC_TIMINGS0_NFSEL NAND Flash Selection **/
#define SMC_TIMINGS0_NFSEL		(1 << 31)

#define SMC_TIMINGS0_RBNSEL_SHIFT		28
#define SMC_TIMINGS0_RBNSEL_MASK		0x07
/** @defgroup smc_timings0_rbnsel RBNSEL Ready/Busy Line Selection
@{*/
/**@}*/


#define SMC_TIMINGS0_TWB_SHIFT		24
#define SMC_TIMINGS0_TWB_MASK		0x0f
/** @defgroup smc_timings0_twb TWB WEN High to REN to Busy
@{*/
/**@}*/


#define SMC_TIMINGS0_TRR_SHIFT		16
#define SMC_TIMINGS0_TRR_MASK		0x0f
/** @defgroup smc_timings0_trr TRR Ready to REN Low Delay
@{*/
/**@}*/

/** SMC_TIMINGS0_OCMS Off Chip Memory Scrambling Enable **/
#define SMC_TIMINGS0_OCMS		(1 << 12)

#define SMC_TIMINGS0_TAR_SHIFT		8
#define SMC_TIMINGS0_TAR_MASK		0x0f
/** @defgroup smc_timings0_tar TAR ALE to REN Low Delay
@{*/
/**@}*/


#define SMC_TIMINGS0_TADL_SHIFT		4
#define SMC_TIMINGS0_TADL_MASK		0x0f
/** @defgroup smc_timings0_tadl TADL ALE to Data Start
@{*/
/**@}*/


#define SMC_TIMINGS0_TCLR_SHIFT		0
#define SMC_TIMINGS0_TCLR_MASK		0x0f
/** @defgroup smc_timings0_tclr TCLR CLE to REN Low Delay
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_mode0 MODE0 SMC Mode Register (CS_number = 0)
@{*/

/** SMC_MODE0_TDF_MODE TDF Optimization **/
#define SMC_MODE0_TDF_MODE		(1 << 20)

#define SMC_MODE0_TDF_CYCLES_SHIFT		16
#define SMC_MODE0_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_mode0_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/

/** SMC_MODE0_DBW Data Bus Width **/
#define SMC_MODE0_DBW		(1 << 12)
/** SMC_MODE0_BAT Byte Access Type **/
#define SMC_MODE0_BAT		(1 << 8)

#define SMC_MODE0_EXNW_MODE_SHIFT		4
#define SMC_MODE0_EXNW_MODE_MASK		0x03
/** @defgroup smc_mode0_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_MODE0_WRITE_MODE Selection of the Control Signal for Write Operation **/
#define SMC_MODE0_WRITE_MODE		(1 << 1)
/** SMC_MODE0_READ_MODE Selection of the Control Signal for Read Operation **/
#define SMC_MODE0_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_setup1 SETUP1 SMC Setup Register (CS_number = 1)
@{*/


#define SMC_SETUP1_NCS_RD_SETUP_SHIFT		24
#define SMC_SETUP1_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_setup1_ncs_rd_setup NCSRDSETUP NCS Setup Length in Read Access
@{*/
/**@}*/


#define SMC_SETUP1_NRD_SETUP_SHIFT		16
#define SMC_SETUP1_NRD_SETUP_MASK		0x3f
/** @defgroup smc_setup1_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SETUP1_NCS_WR_SETUP_SHIFT		8
#define SMC_SETUP1_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_setup1_ncs_wr_setup NCSWRSETUP NCS Setup Length in Write Access
@{*/
/**@}*/


#define SMC_SETUP1_NWE_SETUP_SHIFT		0
#define SMC_SETUP1_NWE_SETUP_MASK		0x3f
/** @defgroup smc_setup1_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_pulse1 PULSE1 SMC Pulse Register (CS_number = 1)
@{*/


#define SMC_PULSE1_NCS_RD_PULSE_SHIFT		24
#define SMC_PULSE1_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_pulse1_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_PULSE1_NRD_PULSE_SHIFT		16
#define SMC_PULSE1_NRD_PULSE_MASK		0x7f
/** @defgroup smc_pulse1_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_PULSE1_NCS_WR_PULSE_SHIFT		8
#define SMC_PULSE1_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_pulse1_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_PULSE1_NWE_PULSE_SHIFT		0
#define SMC_PULSE1_NWE_PULSE_MASK		0x7f
/** @defgroup smc_pulse1_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_cycle1 CYCLE1 SMC Cycle Register (CS_number = 1)
@{*/


#define SMC_CYCLE1_NRD_CYCLE_SHIFT		16
#define SMC_CYCLE1_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle1_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_CYCLE1_NWE_CYCLE_SHIFT		0
#define SMC_CYCLE1_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle1_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_timings1 TIMINGS1 SMC Timings Register (CS_number = 1)
@{*/

/** SMC_TIMINGS1_NFSEL NAND Flash Selection **/
#define SMC_TIMINGS1_NFSEL		(1 << 31)

#define SMC_TIMINGS1_RBNSEL_SHIFT		28
#define SMC_TIMINGS1_RBNSEL_MASK		0x07
/** @defgroup smc_timings1_rbnsel RBNSEL Ready/Busy Line Selection
@{*/
/**@}*/


#define SMC_TIMINGS1_TWB_SHIFT		24
#define SMC_TIMINGS1_TWB_MASK		0x0f
/** @defgroup smc_timings1_twb TWB WEN High to REN to Busy
@{*/
/**@}*/


#define SMC_TIMINGS1_TRR_SHIFT		16
#define SMC_TIMINGS1_TRR_MASK		0x0f
/** @defgroup smc_timings1_trr TRR Ready to REN Low Delay
@{*/
/**@}*/

/** SMC_TIMINGS1_OCMS Off Chip Memory Scrambling Enable **/
#define SMC_TIMINGS1_OCMS		(1 << 12)

#define SMC_TIMINGS1_TAR_SHIFT		8
#define SMC_TIMINGS1_TAR_MASK		0x0f
/** @defgroup smc_timings1_tar TAR ALE to REN Low Delay
@{*/
/**@}*/


#define SMC_TIMINGS1_TADL_SHIFT		4
#define SMC_TIMINGS1_TADL_MASK		0x0f
/** @defgroup smc_timings1_tadl TADL ALE to Data Start
@{*/
/**@}*/


#define SMC_TIMINGS1_TCLR_SHIFT		0
#define SMC_TIMINGS1_TCLR_MASK		0x0f
/** @defgroup smc_timings1_tclr TCLR CLE to REN Low Delay
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_mode1 MODE1 SMC Mode Register (CS_number = 1)
@{*/

/** SMC_MODE1_TDF_MODE TDF Optimization **/
#define SMC_MODE1_TDF_MODE		(1 << 20)

#define SMC_MODE1_TDF_CYCLES_SHIFT		16
#define SMC_MODE1_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_mode1_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/

/** SMC_MODE1_DBW Data Bus Width **/
#define SMC_MODE1_DBW		(1 << 12)
/** SMC_MODE1_BAT Byte Access Type **/
#define SMC_MODE1_BAT		(1 << 8)

#define SMC_MODE1_EXNW_MODE_SHIFT		4
#define SMC_MODE1_EXNW_MODE_MASK		0x03
/** @defgroup smc_mode1_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_MODE1_WRITE_MODE Selection of the Control Signal for Write Operation **/
#define SMC_MODE1_WRITE_MODE		(1 << 1)
/** SMC_MODE1_READ_MODE Selection of the Control Signal for Read Operation **/
#define SMC_MODE1_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_setup2 SETUP2 SMC Setup Register (CS_number = 2)
@{*/


#define SMC_SETUP2_NCS_RD_SETUP_SHIFT		24
#define SMC_SETUP2_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_setup2_ncs_rd_setup NCSRDSETUP NCS Setup Length in Read Access
@{*/
/**@}*/


#define SMC_SETUP2_NRD_SETUP_SHIFT		16
#define SMC_SETUP2_NRD_SETUP_MASK		0x3f
/** @defgroup smc_setup2_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SETUP2_NCS_WR_SETUP_SHIFT		8
#define SMC_SETUP2_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_setup2_ncs_wr_setup NCSWRSETUP NCS Setup Length in Write Access
@{*/
/**@}*/


#define SMC_SETUP2_NWE_SETUP_SHIFT		0
#define SMC_SETUP2_NWE_SETUP_MASK		0x3f
/** @defgroup smc_setup2_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_pulse2 PULSE2 SMC Pulse Register (CS_number = 2)
@{*/


#define SMC_PULSE2_NCS_RD_PULSE_SHIFT		24
#define SMC_PULSE2_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_pulse2_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_PULSE2_NRD_PULSE_SHIFT		16
#define SMC_PULSE2_NRD_PULSE_MASK		0x7f
/** @defgroup smc_pulse2_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_PULSE2_NCS_WR_PULSE_SHIFT		8
#define SMC_PULSE2_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_pulse2_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_PULSE2_NWE_PULSE_SHIFT		0
#define SMC_PULSE2_NWE_PULSE_MASK		0x7f
/** @defgroup smc_pulse2_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_cycle2 CYCLE2 SMC Cycle Register (CS_number = 2)
@{*/


#define SMC_CYCLE2_NRD_CYCLE_SHIFT		16
#define SMC_CYCLE2_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle2_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_CYCLE2_NWE_CYCLE_SHIFT		0
#define SMC_CYCLE2_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle2_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_timings2 TIMINGS2 SMC Timings Register (CS_number = 2)
@{*/

/** SMC_TIMINGS2_NFSEL NAND Flash Selection **/
#define SMC_TIMINGS2_NFSEL		(1 << 31)

#define SMC_TIMINGS2_RBNSEL_SHIFT		28
#define SMC_TIMINGS2_RBNSEL_MASK		0x07
/** @defgroup smc_timings2_rbnsel RBNSEL Ready/Busy Line Selection
@{*/
/**@}*/


#define SMC_TIMINGS2_TWB_SHIFT		24
#define SMC_TIMINGS2_TWB_MASK		0x0f
/** @defgroup smc_timings2_twb TWB WEN High to REN to Busy
@{*/
/**@}*/


#define SMC_TIMINGS2_TRR_SHIFT		16
#define SMC_TIMINGS2_TRR_MASK		0x0f
/** @defgroup smc_timings2_trr TRR Ready to REN Low Delay
@{*/
/**@}*/

/** SMC_TIMINGS2_OCMS Off Chip Memory Scrambling Enable **/
#define SMC_TIMINGS2_OCMS		(1 << 12)

#define SMC_TIMINGS2_TAR_SHIFT		8
#define SMC_TIMINGS2_TAR_MASK		0x0f
/** @defgroup smc_timings2_tar TAR ALE to REN Low Delay
@{*/
/**@}*/


#define SMC_TIMINGS2_TADL_SHIFT		4
#define SMC_TIMINGS2_TADL_MASK		0x0f
/** @defgroup smc_timings2_tadl TADL ALE to Data Start
@{*/
/**@}*/


#define SMC_TIMINGS2_TCLR_SHIFT		0
#define SMC_TIMINGS2_TCLR_MASK		0x0f
/** @defgroup smc_timings2_tclr TCLR CLE to REN Low Delay
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_mode2 MODE2 SMC Mode Register (CS_number = 2)
@{*/

/** SMC_MODE2_TDF_MODE TDF Optimization **/
#define SMC_MODE2_TDF_MODE		(1 << 20)

#define SMC_MODE2_TDF_CYCLES_SHIFT		16
#define SMC_MODE2_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_mode2_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/

/** SMC_MODE2_DBW Data Bus Width **/
#define SMC_MODE2_DBW		(1 << 12)
/** SMC_MODE2_BAT Byte Access Type **/
#define SMC_MODE2_BAT		(1 << 8)

#define SMC_MODE2_EXNW_MODE_SHIFT		4
#define SMC_MODE2_EXNW_MODE_MASK		0x03
/** @defgroup smc_mode2_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_MODE2_WRITE_MODE Selection of the Control Signal for Write Operation **/
#define SMC_MODE2_WRITE_MODE		(1 << 1)
/** SMC_MODE2_READ_MODE Selection of the Control Signal for Read Operation **/
#define SMC_MODE2_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_setup3 SETUP3 SMC Setup Register (CS_number = 3)
@{*/


#define SMC_SETUP3_NCS_RD_SETUP_SHIFT		24
#define SMC_SETUP3_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_setup3_ncs_rd_setup NCSRDSETUP NCS Setup Length in Read Access
@{*/
/**@}*/


#define SMC_SETUP3_NRD_SETUP_SHIFT		16
#define SMC_SETUP3_NRD_SETUP_MASK		0x3f
/** @defgroup smc_setup3_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SETUP3_NCS_WR_SETUP_SHIFT		8
#define SMC_SETUP3_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_setup3_ncs_wr_setup NCSWRSETUP NCS Setup Length in Write Access
@{*/
/**@}*/


#define SMC_SETUP3_NWE_SETUP_SHIFT		0
#define SMC_SETUP3_NWE_SETUP_MASK		0x3f
/** @defgroup smc_setup3_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_pulse3 PULSE3 SMC Pulse Register (CS_number = 3)
@{*/


#define SMC_PULSE3_NCS_RD_PULSE_SHIFT		24
#define SMC_PULSE3_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_pulse3_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_PULSE3_NRD_PULSE_SHIFT		16
#define SMC_PULSE3_NRD_PULSE_MASK		0x7f
/** @defgroup smc_pulse3_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_PULSE3_NCS_WR_PULSE_SHIFT		8
#define SMC_PULSE3_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_pulse3_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_PULSE3_NWE_PULSE_SHIFT		0
#define SMC_PULSE3_NWE_PULSE_MASK		0x7f
/** @defgroup smc_pulse3_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_cycle3 CYCLE3 SMC Cycle Register (CS_number = 3)
@{*/


#define SMC_CYCLE3_NRD_CYCLE_SHIFT		16
#define SMC_CYCLE3_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle3_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_CYCLE3_NWE_CYCLE_SHIFT		0
#define SMC_CYCLE3_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle3_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_timings3 TIMINGS3 SMC Timings Register (CS_number = 3)
@{*/

/** SMC_TIMINGS3_NFSEL NAND Flash Selection **/
#define SMC_TIMINGS3_NFSEL		(1 << 31)

#define SMC_TIMINGS3_RBNSEL_SHIFT		28
#define SMC_TIMINGS3_RBNSEL_MASK		0x07
/** @defgroup smc_timings3_rbnsel RBNSEL Ready/Busy Line Selection
@{*/
/**@}*/


#define SMC_TIMINGS3_TWB_SHIFT		24
#define SMC_TIMINGS3_TWB_MASK		0x0f
/** @defgroup smc_timings3_twb TWB WEN High to REN to Busy
@{*/
/**@}*/


#define SMC_TIMINGS3_TRR_SHIFT		16
#define SMC_TIMINGS3_TRR_MASK		0x0f
/** @defgroup smc_timings3_trr TRR Ready to REN Low Delay
@{*/
/**@}*/

/** SMC_TIMINGS3_OCMS Off Chip Memory Scrambling Enable **/
#define SMC_TIMINGS3_OCMS		(1 << 12)

#define SMC_TIMINGS3_TAR_SHIFT		8
#define SMC_TIMINGS3_TAR_MASK		0x0f
/** @defgroup smc_timings3_tar TAR ALE to REN Low Delay
@{*/
/**@}*/


#define SMC_TIMINGS3_TADL_SHIFT		4
#define SMC_TIMINGS3_TADL_MASK		0x0f
/** @defgroup smc_timings3_tadl TADL ALE to Data Start
@{*/
/**@}*/


#define SMC_TIMINGS3_TCLR_SHIFT		0
#define SMC_TIMINGS3_TCLR_MASK		0x0f
/** @defgroup smc_timings3_tclr TCLR CLE to REN Low Delay
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_mode3 MODE3 SMC Mode Register (CS_number = 3)
@{*/

/** SMC_MODE3_TDF_MODE TDF Optimization **/
#define SMC_MODE3_TDF_MODE		(1 << 20)

#define SMC_MODE3_TDF_CYCLES_SHIFT		16
#define SMC_MODE3_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_mode3_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/

/** SMC_MODE3_DBW Data Bus Width **/
#define SMC_MODE3_DBW		(1 << 12)
/** SMC_MODE3_BAT Byte Access Type **/
#define SMC_MODE3_BAT		(1 << 8)

#define SMC_MODE3_EXNW_MODE_SHIFT		4
#define SMC_MODE3_EXNW_MODE_MASK		0x03
/** @defgroup smc_mode3_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_MODE3_WRITE_MODE Selection of the Control Signal for Write Operation **/
#define SMC_MODE3_WRITE_MODE		(1 << 1)
/** SMC_MODE3_READ_MODE Selection of the Control Signal for Read Operation **/
#define SMC_MODE3_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_setup4 SETUP4 SMC Setup Register (CS_number = 4)
@{*/


#define SMC_SETUP4_NCS_RD_SETUP_SHIFT		24
#define SMC_SETUP4_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_setup4_ncs_rd_setup NCSRDSETUP NCS Setup Length in Read Access
@{*/
/**@}*/


#define SMC_SETUP4_NRD_SETUP_SHIFT		16
#define SMC_SETUP4_NRD_SETUP_MASK		0x3f
/** @defgroup smc_setup4_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SETUP4_NCS_WR_SETUP_SHIFT		8
#define SMC_SETUP4_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_setup4_ncs_wr_setup NCSWRSETUP NCS Setup Length in Write Access
@{*/
/**@}*/


#define SMC_SETUP4_NWE_SETUP_SHIFT		0
#define SMC_SETUP4_NWE_SETUP_MASK		0x3f
/** @defgroup smc_setup4_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_pulse4 PULSE4 SMC Pulse Register (CS_number = 4)
@{*/


#define SMC_PULSE4_NCS_RD_PULSE_SHIFT		24
#define SMC_PULSE4_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_pulse4_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_PULSE4_NRD_PULSE_SHIFT		16
#define SMC_PULSE4_NRD_PULSE_MASK		0x7f
/** @defgroup smc_pulse4_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_PULSE4_NCS_WR_PULSE_SHIFT		8
#define SMC_PULSE4_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_pulse4_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_PULSE4_NWE_PULSE_SHIFT		0
#define SMC_PULSE4_NWE_PULSE_MASK		0x7f
/** @defgroup smc_pulse4_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_cycle4 CYCLE4 SMC Cycle Register (CS_number = 4)
@{*/


#define SMC_CYCLE4_NRD_CYCLE_SHIFT		16
#define SMC_CYCLE4_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle4_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_CYCLE4_NWE_CYCLE_SHIFT		0
#define SMC_CYCLE4_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle4_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_timings4 TIMINGS4 SMC Timings Register (CS_number = 4)
@{*/

/** SMC_TIMINGS4_NFSEL NAND Flash Selection **/
#define SMC_TIMINGS4_NFSEL		(1 << 31)

#define SMC_TIMINGS4_RBNSEL_SHIFT		28
#define SMC_TIMINGS4_RBNSEL_MASK		0x07
/** @defgroup smc_timings4_rbnsel RBNSEL Ready/Busy Line Selection
@{*/
/**@}*/


#define SMC_TIMINGS4_TWB_SHIFT		24
#define SMC_TIMINGS4_TWB_MASK		0x0f
/** @defgroup smc_timings4_twb TWB WEN High to REN to Busy
@{*/
/**@}*/


#define SMC_TIMINGS4_TRR_SHIFT		16
#define SMC_TIMINGS4_TRR_MASK		0x0f
/** @defgroup smc_timings4_trr TRR Ready to REN Low Delay
@{*/
/**@}*/

/** SMC_TIMINGS4_OCMS Off Chip Memory Scrambling Enable **/
#define SMC_TIMINGS4_OCMS		(1 << 12)

#define SMC_TIMINGS4_TAR_SHIFT		8
#define SMC_TIMINGS4_TAR_MASK		0x0f
/** @defgroup smc_timings4_tar TAR ALE to REN Low Delay
@{*/
/**@}*/


#define SMC_TIMINGS4_TADL_SHIFT		4
#define SMC_TIMINGS4_TADL_MASK		0x0f
/** @defgroup smc_timings4_tadl TADL ALE to Data Start
@{*/
/**@}*/


#define SMC_TIMINGS4_TCLR_SHIFT		0
#define SMC_TIMINGS4_TCLR_MASK		0x0f
/** @defgroup smc_timings4_tclr TCLR CLE to REN Low Delay
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_mode4 MODE4 SMC Mode Register (CS_number = 4)
@{*/

/** SMC_MODE4_TDF_MODE TDF Optimization **/
#define SMC_MODE4_TDF_MODE		(1 << 20)

#define SMC_MODE4_TDF_CYCLES_SHIFT		16
#define SMC_MODE4_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_mode4_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/

/** SMC_MODE4_DBW Data Bus Width **/
#define SMC_MODE4_DBW		(1 << 12)
/** SMC_MODE4_BAT Byte Access Type **/
#define SMC_MODE4_BAT		(1 << 8)

#define SMC_MODE4_EXNW_MODE_SHIFT		4
#define SMC_MODE4_EXNW_MODE_MASK		0x03
/** @defgroup smc_mode4_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_MODE4_WRITE_MODE Selection of the Control Signal for Write Operation **/
#define SMC_MODE4_WRITE_MODE		(1 << 1)
/** SMC_MODE4_READ_MODE Selection of the Control Signal for Read Operation **/
#define SMC_MODE4_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_setup5 SETUP5 SMC Setup Register (CS_number = 5)
@{*/


#define SMC_SETUP5_NCS_RD_SETUP_SHIFT		24
#define SMC_SETUP5_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_setup5_ncs_rd_setup NCSRDSETUP NCS Setup Length in Read Access
@{*/
/**@}*/


#define SMC_SETUP5_NRD_SETUP_SHIFT		16
#define SMC_SETUP5_NRD_SETUP_MASK		0x3f
/** @defgroup smc_setup5_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SETUP5_NCS_WR_SETUP_SHIFT		8
#define SMC_SETUP5_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_setup5_ncs_wr_setup NCSWRSETUP NCS Setup Length in Write Access
@{*/
/**@}*/


#define SMC_SETUP5_NWE_SETUP_SHIFT		0
#define SMC_SETUP5_NWE_SETUP_MASK		0x3f
/** @defgroup smc_setup5_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_pulse5 PULSE5 SMC Pulse Register (CS_number = 5)
@{*/


#define SMC_PULSE5_NCS_RD_PULSE_SHIFT		24
#define SMC_PULSE5_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_pulse5_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_PULSE5_NRD_PULSE_SHIFT		16
#define SMC_PULSE5_NRD_PULSE_MASK		0x7f
/** @defgroup smc_pulse5_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_PULSE5_NCS_WR_PULSE_SHIFT		8
#define SMC_PULSE5_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_pulse5_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_PULSE5_NWE_PULSE_SHIFT		0
#define SMC_PULSE5_NWE_PULSE_MASK		0x7f
/** @defgroup smc_pulse5_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_cycle5 CYCLE5 SMC Cycle Register (CS_number = 5)
@{*/


#define SMC_CYCLE5_NRD_CYCLE_SHIFT		16
#define SMC_CYCLE5_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle5_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_CYCLE5_NWE_CYCLE_SHIFT		0
#define SMC_CYCLE5_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle5_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_timings5 TIMINGS5 SMC Timings Register (CS_number = 5)
@{*/

/** SMC_TIMINGS5_NFSEL NAND Flash Selection **/
#define SMC_TIMINGS5_NFSEL		(1 << 31)

#define SMC_TIMINGS5_RBNSEL_SHIFT		28
#define SMC_TIMINGS5_RBNSEL_MASK		0x07
/** @defgroup smc_timings5_rbnsel RBNSEL Ready/Busy Line Selection
@{*/
/**@}*/


#define SMC_TIMINGS5_TWB_SHIFT		24
#define SMC_TIMINGS5_TWB_MASK		0x0f
/** @defgroup smc_timings5_twb TWB WEN High to REN to Busy
@{*/
/**@}*/


#define SMC_TIMINGS5_TRR_SHIFT		16
#define SMC_TIMINGS5_TRR_MASK		0x0f
/** @defgroup smc_timings5_trr TRR Ready to REN Low Delay
@{*/
/**@}*/

/** SMC_TIMINGS5_OCMS Off Chip Memory Scrambling Enable **/
#define SMC_TIMINGS5_OCMS		(1 << 12)

#define SMC_TIMINGS5_TAR_SHIFT		8
#define SMC_TIMINGS5_TAR_MASK		0x0f
/** @defgroup smc_timings5_tar TAR ALE to REN Low Delay
@{*/
/**@}*/


#define SMC_TIMINGS5_TADL_SHIFT		4
#define SMC_TIMINGS5_TADL_MASK		0x0f
/** @defgroup smc_timings5_tadl TADL ALE to Data Start
@{*/
/**@}*/


#define SMC_TIMINGS5_TCLR_SHIFT		0
#define SMC_TIMINGS5_TCLR_MASK		0x0f
/** @defgroup smc_timings5_tclr TCLR CLE to REN Low Delay
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_mode5 MODE5 SMC Mode Register (CS_number = 5)
@{*/

/** SMC_MODE5_TDF_MODE TDF Optimization **/
#define SMC_MODE5_TDF_MODE		(1 << 20)

#define SMC_MODE5_TDF_CYCLES_SHIFT		16
#define SMC_MODE5_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_mode5_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/

/** SMC_MODE5_DBW Data Bus Width **/
#define SMC_MODE5_DBW		(1 << 12)
/** SMC_MODE5_BAT Byte Access Type **/
#define SMC_MODE5_BAT		(1 << 8)

#define SMC_MODE5_EXNW_MODE_SHIFT		4
#define SMC_MODE5_EXNW_MODE_MASK		0x03
/** @defgroup smc_mode5_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_MODE5_WRITE_MODE Selection of the Control Signal for Write Operation **/
#define SMC_MODE5_WRITE_MODE		(1 << 1)
/** SMC_MODE5_READ_MODE Selection of the Control Signal for Read Operation **/
#define SMC_MODE5_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_setup6 SETUP6 SMC Setup Register (CS_number = 6)
@{*/


#define SMC_SETUP6_NCS_RD_SETUP_SHIFT		24
#define SMC_SETUP6_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_setup6_ncs_rd_setup NCSRDSETUP NCS Setup Length in Read Access
@{*/
/**@}*/


#define SMC_SETUP6_NRD_SETUP_SHIFT		16
#define SMC_SETUP6_NRD_SETUP_MASK		0x3f
/** @defgroup smc_setup6_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SETUP6_NCS_WR_SETUP_SHIFT		8
#define SMC_SETUP6_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_setup6_ncs_wr_setup NCSWRSETUP NCS Setup Length in Write Access
@{*/
/**@}*/


#define SMC_SETUP6_NWE_SETUP_SHIFT		0
#define SMC_SETUP6_NWE_SETUP_MASK		0x3f
/** @defgroup smc_setup6_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_pulse6 PULSE6 SMC Pulse Register (CS_number = 6)
@{*/


#define SMC_PULSE6_NCS_RD_PULSE_SHIFT		24
#define SMC_PULSE6_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_pulse6_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_PULSE6_NRD_PULSE_SHIFT		16
#define SMC_PULSE6_NRD_PULSE_MASK		0x7f
/** @defgroup smc_pulse6_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_PULSE6_NCS_WR_PULSE_SHIFT		8
#define SMC_PULSE6_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_pulse6_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_PULSE6_NWE_PULSE_SHIFT		0
#define SMC_PULSE6_NWE_PULSE_MASK		0x7f
/** @defgroup smc_pulse6_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_cycle6 CYCLE6 SMC Cycle Register (CS_number = 6)
@{*/


#define SMC_CYCLE6_NRD_CYCLE_SHIFT		16
#define SMC_CYCLE6_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle6_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_CYCLE6_NWE_CYCLE_SHIFT		0
#define SMC_CYCLE6_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle6_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_timings6 TIMINGS6 SMC Timings Register (CS_number = 6)
@{*/

/** SMC_TIMINGS6_NFSEL NAND Flash Selection **/
#define SMC_TIMINGS6_NFSEL		(1 << 31)

#define SMC_TIMINGS6_RBNSEL_SHIFT		28
#define SMC_TIMINGS6_RBNSEL_MASK		0x07
/** @defgroup smc_timings6_rbnsel RBNSEL Ready/Busy Line Selection
@{*/
/**@}*/


#define SMC_TIMINGS6_TWB_SHIFT		24
#define SMC_TIMINGS6_TWB_MASK		0x0f
/** @defgroup smc_timings6_twb TWB WEN High to REN to Busy
@{*/
/**@}*/


#define SMC_TIMINGS6_TRR_SHIFT		16
#define SMC_TIMINGS6_TRR_MASK		0x0f
/** @defgroup smc_timings6_trr TRR Ready to REN Low Delay
@{*/
/**@}*/

/** SMC_TIMINGS6_OCMS Off Chip Memory Scrambling Enable **/
#define SMC_TIMINGS6_OCMS		(1 << 12)

#define SMC_TIMINGS6_TAR_SHIFT		8
#define SMC_TIMINGS6_TAR_MASK		0x0f
/** @defgroup smc_timings6_tar TAR ALE to REN Low Delay
@{*/
/**@}*/


#define SMC_TIMINGS6_TADL_SHIFT		4
#define SMC_TIMINGS6_TADL_MASK		0x0f
/** @defgroup smc_timings6_tadl TADL ALE to Data Start
@{*/
/**@}*/


#define SMC_TIMINGS6_TCLR_SHIFT		0
#define SMC_TIMINGS6_TCLR_MASK		0x0f
/** @defgroup smc_timings6_tclr TCLR CLE to REN Low Delay
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_mode6 MODE6 SMC Mode Register (CS_number = 6)
@{*/

/** SMC_MODE6_TDF_MODE TDF Optimization **/
#define SMC_MODE6_TDF_MODE		(1 << 20)

#define SMC_MODE6_TDF_CYCLES_SHIFT		16
#define SMC_MODE6_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_mode6_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/

/** SMC_MODE6_DBW Data Bus Width **/
#define SMC_MODE6_DBW		(1 << 12)
/** SMC_MODE6_BAT Byte Access Type **/
#define SMC_MODE6_BAT		(1 << 8)

#define SMC_MODE6_EXNW_MODE_SHIFT		4
#define SMC_MODE6_EXNW_MODE_MASK		0x03
/** @defgroup smc_mode6_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_MODE6_WRITE_MODE Selection of the Control Signal for Write Operation **/
#define SMC_MODE6_WRITE_MODE		(1 << 1)
/** SMC_MODE6_READ_MODE Selection of the Control Signal for Read Operation **/
#define SMC_MODE6_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_setup7 SETUP7 SMC Setup Register (CS_number = 7)
@{*/


#define SMC_SETUP7_NCS_RD_SETUP_SHIFT		24
#define SMC_SETUP7_NCS_RD_SETUP_MASK		0x3f
/** @defgroup smc_setup7_ncs_rd_setup NCSRDSETUP NCS Setup Length in Read Access
@{*/
/**@}*/


#define SMC_SETUP7_NRD_SETUP_SHIFT		16
#define SMC_SETUP7_NRD_SETUP_MASK		0x3f
/** @defgroup smc_setup7_nrd_setup NRDSETUP NRD Setup Length
@{*/
/**@}*/


#define SMC_SETUP7_NCS_WR_SETUP_SHIFT		8
#define SMC_SETUP7_NCS_WR_SETUP_MASK		0x3f
/** @defgroup smc_setup7_ncs_wr_setup NCSWRSETUP NCS Setup Length in Write Access
@{*/
/**@}*/


#define SMC_SETUP7_NWE_SETUP_SHIFT		0
#define SMC_SETUP7_NWE_SETUP_MASK		0x3f
/** @defgroup smc_setup7_nwe_setup NWESETUP NWE Setup Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_pulse7 PULSE7 SMC Pulse Register (CS_number = 7)
@{*/


#define SMC_PULSE7_NCS_RD_PULSE_SHIFT		24
#define SMC_PULSE7_NCS_RD_PULSE_MASK		0x7f
/** @defgroup smc_pulse7_ncs_rd_pulse NCSRDPULSE NCS Pulse Length in READ Access
@{*/
/**@}*/


#define SMC_PULSE7_NRD_PULSE_SHIFT		16
#define SMC_PULSE7_NRD_PULSE_MASK		0x7f
/** @defgroup smc_pulse7_nrd_pulse NRDPULSE NRD Pulse Length
@{*/
/**@}*/


#define SMC_PULSE7_NCS_WR_PULSE_SHIFT		8
#define SMC_PULSE7_NCS_WR_PULSE_MASK		0x7f
/** @defgroup smc_pulse7_ncs_wr_pulse NCSWRPULSE NCS Pulse Length in WRITE Access
@{*/
/**@}*/


#define SMC_PULSE7_NWE_PULSE_SHIFT		0
#define SMC_PULSE7_NWE_PULSE_MASK		0x7f
/** @defgroup smc_pulse7_nwe_pulse NWEPULSE NWE Pulse Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_cycle7 CYCLE7 SMC Cycle Register (CS_number = 7)
@{*/


#define SMC_CYCLE7_NRD_CYCLE_SHIFT		16
#define SMC_CYCLE7_NRD_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle7_nrd_cycle NRDCYCLE Total Read Cycle Length
@{*/
/**@}*/


#define SMC_CYCLE7_NWE_CYCLE_SHIFT		0
#define SMC_CYCLE7_NWE_CYCLE_MASK		0x1ff
/** @defgroup smc_cycle7_nwe_cycle NWECYCLE Total Write Cycle Length
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_timings7 TIMINGS7 SMC Timings Register (CS_number = 7)
@{*/

/** SMC_TIMINGS7_NFSEL NAND Flash Selection **/
#define SMC_TIMINGS7_NFSEL		(1 << 31)

#define SMC_TIMINGS7_RBNSEL_SHIFT		28
#define SMC_TIMINGS7_RBNSEL_MASK		0x07
/** @defgroup smc_timings7_rbnsel RBNSEL Ready/Busy Line Selection
@{*/
/**@}*/


#define SMC_TIMINGS7_TWB_SHIFT		24
#define SMC_TIMINGS7_TWB_MASK		0x0f
/** @defgroup smc_timings7_twb TWB WEN High to REN to Busy
@{*/
/**@}*/


#define SMC_TIMINGS7_TRR_SHIFT		16
#define SMC_TIMINGS7_TRR_MASK		0x0f
/** @defgroup smc_timings7_trr TRR Ready to REN Low Delay
@{*/
/**@}*/

/** SMC_TIMINGS7_OCMS Off Chip Memory Scrambling Enable **/
#define SMC_TIMINGS7_OCMS		(1 << 12)

#define SMC_TIMINGS7_TAR_SHIFT		8
#define SMC_TIMINGS7_TAR_MASK		0x0f
/** @defgroup smc_timings7_tar TAR ALE to REN Low Delay
@{*/
/**@}*/


#define SMC_TIMINGS7_TADL_SHIFT		4
#define SMC_TIMINGS7_TADL_MASK		0x0f
/** @defgroup smc_timings7_tadl TADL ALE to Data Start
@{*/
/**@}*/


#define SMC_TIMINGS7_TCLR_SHIFT		0
#define SMC_TIMINGS7_TCLR_MASK		0x0f
/** @defgroup smc_timings7_tclr TCLR CLE to REN Low Delay
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_mode7 MODE7 SMC Mode Register (CS_number = 7)
@{*/

/** SMC_MODE7_TDF_MODE TDF Optimization **/
#define SMC_MODE7_TDF_MODE		(1 << 20)

#define SMC_MODE7_TDF_CYCLES_SHIFT		16
#define SMC_MODE7_TDF_CYCLES_MASK		0x0f
/** @defgroup smc_mode7_tdf_cycles TDFCYCLES Data Float Time
@{*/
/**@}*/

/** SMC_MODE7_DBW Data Bus Width **/
#define SMC_MODE7_DBW		(1 << 12)
/** SMC_MODE7_BAT Byte Access Type **/
#define SMC_MODE7_BAT		(1 << 8)

#define SMC_MODE7_EXNW_MODE_SHIFT		4
#define SMC_MODE7_EXNW_MODE_MASK		0x03
/** @defgroup smc_mode7_exnw_mode EXNWMODE NWAIT Mode
@{*/
/**@}*/

/** SMC_MODE7_WRITE_MODE Selection of the Control Signal for Write Operation **/
#define SMC_MODE7_WRITE_MODE		(1 << 1)
/** SMC_MODE7_READ_MODE Selection of the Control Signal for Read Operation **/
#define SMC_MODE7_READ_MODE		(1 << 0)

/**@}*/

/** @defgroup smc_ocms OCMS SMC OCMS Register
@{*/

/** SMC_OCMS_SRSE SRAM Scrambling Enable **/
#define SMC_OCMS_SRSE		(1 << 1)
/** SMC_OCMS_SMSE Static Memory Controller Scrambling Enable **/
#define SMC_OCMS_SMSE		(1 << 0)

/**@}*/

/** @defgroup smc_key1 KEY1 SMC OCMS KEY1 Register
@{*/


#define SMC_KEY1_KEY1_SHIFT		0
#define SMC_KEY1_KEY1_MASK		0xffffffff
/** @defgroup smc_key1_key1 KEY1 Off Chip Memory Scrambling (OCMS) Key Part 1
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_key2 KEY2 SMC OCMS KEY2 Register
@{*/


#define SMC_KEY2_KEY2_SHIFT		0
#define SMC_KEY2_KEY2_MASK		0xffffffff
/** @defgroup smc_key2_key2 KEY2 Off Chip Memory Scrambling (OCMS) Key Part 2
@{*/
/**@}*/


/**@}*/

/** @defgroup smc_wpcr WPCR Write Protection Control Register
@{*/


#define SMC_WPCR_WP_KEY_SHIFT		8
#define SMC_WPCR_WP_KEY_MASK		0xffffff
/** @defgroup smc_wpcr_wp_key WPKEY Write Protection KEY Password
@{*/
/**@}*/

/** SMC_WPCR_WP_EN Write Protection Enable **/
#define SMC_WPCR_WP_EN		(1 << 0)

/**@}*/

/** @defgroup smc_wpsr WPSR Write Protection Status Register
@{*/


#define SMC_WPSR_WP_VSRC_SHIFT		8
#define SMC_WPSR_WP_VSRC_MASK		0xffff
/** @defgroup smc_wpsr_wp_vsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/


#define SMC_WPSR_WP_VS_SHIFT		0
#define SMC_WPSR_WP_VS_MASK		0x0f
/** @defgroup smc_wpsr_wp_vs WPVS Write Protection Violation Status
@{*/
/**@}*/


/**@}*/

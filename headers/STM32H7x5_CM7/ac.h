#pragma once 

/* --- AC: Access control ------------------------------------------- */

/** @defgroup ac_registers Access control Register
@{*/

/** AC_ITCMCR Instruction and Data Tightly-Coupled Memory Control Registers **/
#define AC_ITCMCR			MMIO32(AC_BASE + 0x00)
/** AC_DTCMCR Instruction and Data Tightly-Coupled Memory Control Registers **/
#define AC_DTCMCR			MMIO32(AC_BASE + 0x04)
/** AC_AHBPCR AHBP Control register **/
#define AC_AHBPCR			MMIO32(AC_BASE + 0x08)
/** AC_CACR Auxiliary Cache Control register **/
#define AC_CACR			MMIO32(AC_BASE + 0x0c)
/** AC_AHBSCR AHB Slave Control register **/
#define AC_AHBSCR			MMIO32(AC_BASE + 0x10)
/** AC_ABFSR Auxiliary Bus Fault Status register **/
#define AC_ABFSR			MMIO32(AC_BASE + 0x18)

/**@}*/


/** @defgroup ac_itcmcr ITCMCR Instruction and Data Tightly-Coupled Memory Control Registers
@{*/


#define AC_ITCMCR_SZ_SHIFT		3
#define AC_ITCMCR_SZ_MASK		0x0f
/** @defgroup ac_itcmcr_sz SZ SZ
@{*/
/**@}*/

/** AC_ITCMCR_RETEN RETEN **/
#define AC_ITCMCR_RETEN		(1 << 2)
/** AC_ITCMCR_RMW RMW **/
#define AC_ITCMCR_RMW		(1 << 1)
/** AC_ITCMCR_EN EN **/
#define AC_ITCMCR_EN		(1 << 0)

/**@}*/

/** @defgroup ac_dtcmcr DTCMCR Instruction and Data Tightly-Coupled Memory Control Registers
@{*/


#define AC_DTCMCR_SZ_SHIFT		3
#define AC_DTCMCR_SZ_MASK		0x0f
/** @defgroup ac_dtcmcr_sz SZ SZ
@{*/
/**@}*/

/** AC_DTCMCR_RETEN RETEN **/
#define AC_DTCMCR_RETEN		(1 << 2)
/** AC_DTCMCR_RMW RMW **/
#define AC_DTCMCR_RMW		(1 << 1)
/** AC_DTCMCR_EN EN **/
#define AC_DTCMCR_EN		(1 << 0)

/**@}*/

/** @defgroup ac_ahbpcr AHBPCR AHBP Control register
@{*/


#define AC_AHBPCR_SZ_SHIFT		1
#define AC_AHBPCR_SZ_MASK		0x07
/** @defgroup ac_ahbpcr_sz SZ SZ
@{*/
/**@}*/

/** AC_AHBPCR_EN EN **/
#define AC_AHBPCR_EN		(1 << 0)

/**@}*/

/** @defgroup ac_cacr CACR Auxiliary Cache Control register
@{*/

/** AC_CACR_FORCEWT FORCEWT **/
#define AC_CACR_FORCEWT		(1 << 2)
/** AC_CACR_ECCEN ECCEN **/
#define AC_CACR_ECCEN		(1 << 1)
/** AC_CACR_SIWT SIWT **/
#define AC_CACR_SIWT		(1 << 0)

/**@}*/

/** @defgroup ac_ahbscr AHBSCR AHB Slave Control register
@{*/


#define AC_AHBSCR_INITCOUNT_SHIFT		11
#define AC_AHBSCR_INITCOUNT_MASK		0x1f
/** @defgroup ac_ahbscr_initcount INITCOUNT INITCOUNT
@{*/
/**@}*/


#define AC_AHBSCR_TPRI_SHIFT		2
#define AC_AHBSCR_TPRI_MASK		0x1ff
/** @defgroup ac_ahbscr_tpri TPRI TPRI
@{*/
/**@}*/


#define AC_AHBSCR_CTL_SHIFT		0
#define AC_AHBSCR_CTL_MASK		0x03
/** @defgroup ac_ahbscr_ctl CTL CTL
@{*/
/**@}*/


/**@}*/

/** @defgroup ac_abfsr ABFSR Auxiliary Bus Fault Status register
@{*/


#define AC_ABFSR_AXIMTYPE_SHIFT		8
#define AC_ABFSR_AXIMTYPE_MASK		0x03
/** @defgroup ac_abfsr_aximtype AXIMTYPE AXIMTYPE
@{*/
/**@}*/

/** AC_ABFSR_EPPB EPPB **/
#define AC_ABFSR_EPPB		(1 << 4)
/** AC_ABFSR_AXIM AXIM **/
#define AC_ABFSR_AXIM		(1 << 3)
/** AC_ABFSR_AHBP AHBP **/
#define AC_ABFSR_AHBP		(1 << 2)
/** AC_ABFSR_DTCM DTCM **/
#define AC_ABFSR_DTCM		(1 << 1)
/** AC_ABFSR_ITCM ITCM **/
#define AC_ABFSR_ITCM		(1 << 0)

/**@}*/

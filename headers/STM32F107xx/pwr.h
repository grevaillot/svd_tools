#pragma once 

/* --- PWR: Power control ------------------------------------------- */

/** @defgroup pwr_registers Power control Register
@{*/

/** PWR_CR Power control register (PWR_CR) **/
#define PWR_CR			MMIO32(PWR_BASE + 0x00)
/** PWR_CSR Power control register (PWR_CR) **/
#define PWR_CSR			MMIO32(PWR_BASE + 0x04)

/**@}*/


/** @defgroup pwr_cr CR Power control register (PWR_CR)
@{*/

/** PWR_CR_DBP Disable Backup Domain write protection **/
#define PWR_CR_DBP		(1 << 8)

#define PWR_CR_PLS_SHIFT		5
#define PWR_CR_PLS_MASK		0x07
/** @defgroup pwr_cr_pls PLS PVD Level Selection
@{*/
/**@}*/

/** PWR_CR_PVDE Power Voltage Detector Enable **/
#define PWR_CR_PVDE		(1 << 4)
/** PWR_CR_CSBF Clear STANDBY Flag **/
#define PWR_CR_CSBF		(1 << 3)
/** PWR_CR_CWUF Clear Wake-up Flag **/
#define PWR_CR_CWUF		(1 << 2)
/** PWR_CR_PDDS Power Down Deep Sleep **/
#define PWR_CR_PDDS		(1 << 1)
/** PWR_CR_LPDS Low Power Deep Sleep **/
#define PWR_CR_LPDS		(1 << 0)

/**@}*/

/** @defgroup pwr_csr CSR Power control register (PWR_CR)
@{*/

/** PWR_CSR_EWUP Enable WKUP pin **/
#define PWR_CSR_EWUP		(1 << 8)
/** PWR_CSR_PVDO PVD Output **/
#define PWR_CSR_PVDO		(1 << 2)
/** PWR_CSR_SBF STANDBY Flag **/
#define PWR_CSR_SBF		(1 << 1)
/** PWR_CSR_WUF Wake-Up Flag **/
#define PWR_CSR_WUF		(1 << 0)

/**@}*/

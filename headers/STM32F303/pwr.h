#pragma once 

/* --- PWR: Power control ------------------------------------------- */

/** @defgroup pwr_registers Power control Register
@{*/

/** PWR_CR power control register **/
#define PWR_CR			MMIO32(PWR_BASE + 0x00)
/** PWR_CSR power control/status register **/
#define PWR_CSR			MMIO32(PWR_BASE + 0x04)

/**@}*/


/** @defgroup pwr_cr CR power control register
@{*/

/** PWR_CR_DBP Disable backup domain write protection **/
#define PWR_CR_DBP		(1 << 8)

#define PWR_CR_PLS_SHIFT		5
#define PWR_CR_PLS_MASK		0x07
/** @defgroup pwr_cr_pls PLS PVD level selection
@{*/
/**@}*/

/** PWR_CR_PVDE Power voltage detector enable **/
#define PWR_CR_PVDE		(1 << 4)
/** PWR_CR_CSBF Clear standby flag **/
#define PWR_CR_CSBF		(1 << 3)
/** PWR_CR_CWUF Clear wakeup flag **/
#define PWR_CR_CWUF		(1 << 2)
/** PWR_CR_PDDS Power down deepsleep **/
#define PWR_CR_PDDS		(1 << 1)
/** PWR_CR_LPDS Low-power deep sleep **/
#define PWR_CR_LPDS		(1 << 0)

/**@}*/

/** @defgroup pwr_csr CSR power control/status register
@{*/

/** PWR_CSR_EWUP2 Enable WKUP2 pin **/
#define PWR_CSR_EWUP2		(1 << 9)
/** PWR_CSR_EWUP1 Enable WKUP1 pin **/
#define PWR_CSR_EWUP1		(1 << 8)
/** PWR_CSR_PVDO PVD output **/
#define PWR_CSR_PVDO		(1 << 2)
/** PWR_CSR_SBF Standby flag **/
#define PWR_CSR_SBF		(1 << 1)
/** PWR_CSR_WUF Wakeup flag **/
#define PWR_CSR_WUF		(1 << 0)

/**@}*/

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


#define PWR_CR_UDEN_SHIFT		18
#define PWR_CR_UDEN_MASK		0x03
/** @defgroup pwr_cr_uden UDEN Under-drive enable in stop mode
@{*/
/**@}*/

/** PWR_CR_ODSWEN Over-drive switching enabled **/
#define PWR_CR_ODSWEN		(1 << 17)
/** PWR_CR_ODEN Over-drive enable **/
#define PWR_CR_ODEN		(1 << 16)

#define PWR_CR_VOS_SHIFT		14
#define PWR_CR_VOS_MASK		0x03
/** @defgroup pwr_cr_vos VOS Regulator voltage scaling output selection
@{*/
/**@}*/

/** PWR_CR_MRLVDS Main regulator low voltage in deepsleep mode **/
#define PWR_CR_MRLVDS		(1 << 11)
/** PWR_CR_LPLVDS Low-Power Regulator Low Voltage in deepsleep **/
#define PWR_CR_LPLVDS		(1 << 10)
/** PWR_CR_FPDS Flash power down in Stop mode **/
#define PWR_CR_FPDS		(1 << 9)
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


#define PWR_CSR_UDRDY_SHIFT		18
#define PWR_CSR_UDRDY_MASK		0x03
/** @defgroup pwr_csr_udrdy UDRDY Under-drive ready flag
@{*/
/**@}*/

/** PWR_CSR_ODSWRDY Over-drive mode switching ready **/
#define PWR_CSR_ODSWRDY		(1 << 17)
/** PWR_CSR_ODRDY Over-drive mode ready **/
#define PWR_CSR_ODRDY		(1 << 16)
/** PWR_CSR_VOSRDY Regulator voltage scaling output selection ready bit **/
#define PWR_CSR_VOSRDY		(1 << 14)
/** PWR_CSR_BRE Backup regulator enable **/
#define PWR_CSR_BRE		(1 << 9)
/** PWR_CSR_EWUP Enable WKUP pin **/
#define PWR_CSR_EWUP		(1 << 8)
/** PWR_CSR_BRR Backup regulator ready **/
#define PWR_CSR_BRR		(1 << 3)
/** PWR_CSR_PVDO PVD output **/
#define PWR_CSR_PVDO		(1 << 2)
/** PWR_CSR_SBF Standby flag **/
#define PWR_CSR_SBF		(1 << 1)
/** PWR_CSR_WUF Wakeup flag **/
#define PWR_CSR_WUF		(1 << 0)

/**@}*/

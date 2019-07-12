#pragma once 

/* --- PWR: Power control ------------------------------------------- */

/** @defgroup pwr_registers Power control Register
@{*/

/** PWR_CR1 power control register **/
#define PWR_CR1			MMIO32(PWR_BASE + 0x00)
/** PWR_CSR1 power control/status register **/
#define PWR_CSR1			MMIO32(PWR_BASE + 0x04)
/** PWR_CR2 power control register **/
#define PWR_CR2			MMIO32(PWR_BASE + 0x08)
/** PWR_CSR2 power control/status register **/
#define PWR_CSR2			MMIO32(PWR_BASE + 0x0c)

/**@}*/


/** @defgroup pwr_cr1 CR1 power control register
@{*/


#define PWR_CR1_UDEN_SHIFT		18
#define PWR_CR1_UDEN_MASK		0x03
/** @defgroup pwr_cr1_uden UDEN Under-drive enable in stop mode
@{*/
/**@}*/

/** PWR_CR1_ODSWEN Over-drive switching enabled **/
#define PWR_CR1_ODSWEN		(1 << 17)
/** PWR_CR1_ODEN Over-drive enable **/
#define PWR_CR1_ODEN		(1 << 16)

#define PWR_CR1_VOS_SHIFT		14
#define PWR_CR1_VOS_MASK		0x03
/** @defgroup pwr_cr1_vos VOS Regulator voltage scaling output selection
@{*/
/**@}*/

/** PWR_CR1_ADCDC1 ADCDC1 **/
#define PWR_CR1_ADCDC1		(1 << 13)
/** PWR_CR1_MRUDS Main regulator in deepsleep under-drive mode **/
#define PWR_CR1_MRUDS		(1 << 11)
/** PWR_CR1_LPUDS Low-power regulator in deepsleep under-drive mode **/
#define PWR_CR1_LPUDS		(1 << 10)
/** PWR_CR1_FPDS Flash power down in Stop mode **/
#define PWR_CR1_FPDS		(1 << 9)
/** PWR_CR1_DBP Disable backup domain write protection **/
#define PWR_CR1_DBP		(1 << 8)

#define PWR_CR1_PLS_SHIFT		5
#define PWR_CR1_PLS_MASK		0x07
/** @defgroup pwr_cr1_pls PLS PVD level selection
@{*/
/**@}*/

/** PWR_CR1_PVDE Power voltage detector enable **/
#define PWR_CR1_PVDE		(1 << 4)
/** PWR_CR1_CSBF Clear standby flag **/
#define PWR_CR1_CSBF		(1 << 3)
/** PWR_CR1_PDDS Power down deepsleep **/
#define PWR_CR1_PDDS		(1 << 1)
/** PWR_CR1_LPDS Low-power deep sleep **/
#define PWR_CR1_LPDS		(1 << 0)

/**@}*/

/** @defgroup pwr_csr1 CSR1 power control/status register
@{*/


#define PWR_CSR1_UDRDY_SHIFT		18
#define PWR_CSR1_UDRDY_MASK		0x03
/** @defgroup pwr_csr1_udrdy UDRDY Under-drive ready flag
@{*/
/**@}*/

/** PWR_CSR1_ODSWRDY Over-drive mode switching ready **/
#define PWR_CSR1_ODSWRDY		(1 << 17)
/** PWR_CSR1_ODRDY Over-drive mode ready **/
#define PWR_CSR1_ODRDY		(1 << 16)
/** PWR_CSR1_VOSRDY Regulator voltage scaling output selection ready bit **/
#define PWR_CSR1_VOSRDY		(1 << 14)
/** PWR_CSR1_BRE Backup regulator enable **/
#define PWR_CSR1_BRE		(1 << 9)
/** PWR_CSR1_BRR Backup regulator ready **/
#define PWR_CSR1_BRR		(1 << 3)
/** PWR_CSR1_PVDO PVD output **/
#define PWR_CSR1_PVDO		(1 << 2)
/** PWR_CSR1_SBF Standby flag **/
#define PWR_CSR1_SBF		(1 << 1)
/** PWR_CSR1_WUIF Wakeup internal flag **/
#define PWR_CSR1_WUIF		(1 << 0)

/**@}*/

/** @defgroup pwr_cr2 CR2 power control register
@{*/

/** PWR_CR2_WUPP6 Wakeup pin polarity bit for PI11 **/
#define PWR_CR2_WUPP6		(1 << 13)
/** PWR_CR2_WUPP5 Wakeup pin polarity bit for PI8 **/
#define PWR_CR2_WUPP5		(1 << 12)
/** PWR_CR2_WUPP4 Wakeup pin polarity bit for PC13 **/
#define PWR_CR2_WUPP4		(1 << 11)
/** PWR_CR2_WUPP3 Wakeup pin polarity bit for PC1 **/
#define PWR_CR2_WUPP3		(1 << 10)
/** PWR_CR2_WUPP2 Wakeup pin polarity bit for PA2 **/
#define PWR_CR2_WUPP2		(1 << 9)
/** PWR_CR2_WUPP1 Wakeup pin polarity bit for PA0 **/
#define PWR_CR2_WUPP1		(1 << 8)
/** PWR_CR2_CWUPF6 Clear Wakeup Pin flag for PI11 **/
#define PWR_CR2_CWUPF6		(1 << 5)
/** PWR_CR2_CWUPF5 Clear Wakeup Pin flag for PI8 **/
#define PWR_CR2_CWUPF5		(1 << 4)
/** PWR_CR2_CWUPF4 Clear Wakeup Pin flag for PC13 **/
#define PWR_CR2_CWUPF4		(1 << 3)
/** PWR_CR2_CWUPF3 Clear Wakeup Pin flag for PC1 **/
#define PWR_CR2_CWUPF3		(1 << 2)
/** PWR_CR2_CWUPF2 Clear Wakeup Pin flag for PA2 **/
#define PWR_CR2_CWUPF2		(1 << 1)
/** PWR_CR2_CWUPF1 Clear Wakeup Pin flag for PA0 **/
#define PWR_CR2_CWUPF1		(1 << 0)

/**@}*/

/** @defgroup pwr_csr2 CSR2 power control/status register
@{*/

/** PWR_CSR2_EWUP6 Enable Wakeup pin for PI11 **/
#define PWR_CSR2_EWUP6		(1 << 13)
/** PWR_CSR2_EWUP5 Enable Wakeup pin for PI8 **/
#define PWR_CSR2_EWUP5		(1 << 12)
/** PWR_CSR2_EWUP4 Enable Wakeup pin for PC13 **/
#define PWR_CSR2_EWUP4		(1 << 11)
/** PWR_CSR2_EWUP3 Enable Wakeup pin for PC1 **/
#define PWR_CSR2_EWUP3		(1 << 10)
/** PWR_CSR2_EWUP2 Enable Wakeup pin for PA2 **/
#define PWR_CSR2_EWUP2		(1 << 9)
/** PWR_CSR2_EWUP1 Enable Wakeup pin for PA0 **/
#define PWR_CSR2_EWUP1		(1 << 8)
/** PWR_CSR2_WUPF6 Wakeup Pin flag for PI11 **/
#define PWR_CSR2_WUPF6		(1 << 5)
/** PWR_CSR2_WUPF5 Wakeup Pin flag for PI8 **/
#define PWR_CSR2_WUPF5		(1 << 4)
/** PWR_CSR2_WUPF4 Wakeup Pin flag for PC13 **/
#define PWR_CSR2_WUPF4		(1 << 3)
/** PWR_CSR2_WUPF3 Wakeup Pin flag for PC1 **/
#define PWR_CSR2_WUPF3		(1 << 2)
/** PWR_CSR2_WUPF2 Wakeup Pin flag for PA2 **/
#define PWR_CSR2_WUPF2		(1 << 1)
/** PWR_CSR2_WUPF1 Wakeup Pin flag for PA0 **/
#define PWR_CSR2_WUPF1		(1 << 0)

/**@}*/

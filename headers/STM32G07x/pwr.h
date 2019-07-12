#pragma once 

/* --- PWR: Power control ------------------------------------------- */

/** @defgroup pwr_registers Power control Register
@{*/

/** PWR_CR1 Power control register 1 **/
#define PWR_CR1			MMIO32(PWR_BASE + 0x00)
/** PWR_CR2 Power control register 2 **/
#define PWR_CR2			MMIO32(PWR_BASE + 0x04)
/** PWR_CR3 Power control register 3 **/
#define PWR_CR3			MMIO32(PWR_BASE + 0x08)
/** PWR_CR4 Power control register 4 **/
#define PWR_CR4			MMIO32(PWR_BASE + 0x0c)
/** PWR_SR1 Power status register 1 **/
#define PWR_SR1			MMIO32(PWR_BASE + 0x10)
/** PWR_SR2 Power status register 2 **/
#define PWR_SR2			MMIO32(PWR_BASE + 0x14)
/** PWR_SCR Power status clear register **/
#define PWR_SCR			MMIO32(PWR_BASE + 0x18)
/** PWR_PUCRA Power Port A pull-up control register **/
#define PWR_PUCRA			MMIO32(PWR_BASE + 0x20)
/** PWR_PDCRA Power Port A pull-down control register **/
#define PWR_PDCRA			MMIO32(PWR_BASE + 0x24)
/** PWR_PUCRB Power Port B pull-up control register **/
#define PWR_PUCRB			MMIO32(PWR_BASE + 0x28)
/** PWR_PDCRB Power Port B pull-down control register **/
#define PWR_PDCRB			MMIO32(PWR_BASE + 0x2c)
/** PWR_PUCRC Power Port C pull-up control register **/
#define PWR_PUCRC			MMIO32(PWR_BASE + 0x30)
/** PWR_PDCRC Power Port C pull-down control register **/
#define PWR_PDCRC			MMIO32(PWR_BASE + 0x34)
/** PWR_PUCRD Power Port D pull-up control register **/
#define PWR_PUCRD			MMIO32(PWR_BASE + 0x38)
/** PWR_PDCRD Power Port D pull-down control register **/
#define PWR_PDCRD			MMIO32(PWR_BASE + 0x3c)
/** PWR_PUCRF Power Port F pull-up control register **/
#define PWR_PUCRF			MMIO32(PWR_BASE + 0x48)
/** PWR_PDCRF Power Port F pull-down control register **/
#define PWR_PDCRF			MMIO32(PWR_BASE + 0x4c)

/**@}*/


/** @defgroup pwr_cr1 CR1 Power control register 1
@{*/

/** PWR_CR1_LPR Low-power run **/
#define PWR_CR1_LPR		(1 << 14)

#define PWR_CR1_VOS_SHIFT		9
#define PWR_CR1_VOS_MASK		0x03
/** @defgroup pwr_cr1_vos VOS Voltage scaling range selection
@{*/
/**@}*/

/** PWR_CR1_DBP Disable backup domain write protection **/
#define PWR_CR1_DBP		(1 << 8)
/** PWR_CR1_FPD_LPSLP Flash memory powered down during Low-power sleep mode **/
#define PWR_CR1_FPD_LPSLP		(1 << 5)
/** PWR_CR1_FPD_LPRUN Flash memory powered down during Low-power run mode **/
#define PWR_CR1_FPD_LPRUN		(1 << 4)
/** PWR_CR1_FPD_STOP Flash memory powered down during Stop mode **/
#define PWR_CR1_FPD_STOP		(1 << 3)

#define PWR_CR1_LPMS_SHIFT		0
#define PWR_CR1_LPMS_MASK		0x07
/** @defgroup pwr_cr1_lpms LPMS Low-power mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pwr_cr2 CR2 Power control register 2
@{*/


#define PWR_CR2_PVDRT_SHIFT		4
#define PWR_CR2_PVDRT_MASK		0x07
/** @defgroup pwr_cr2_pvdrt PVDRT Power voltage detector rising threshold selection
@{*/
/**@}*/


#define PWR_CR2_PVDFT_SHIFT		1
#define PWR_CR2_PVDFT_MASK		0x07
/** @defgroup pwr_cr2_pvdft PVDFT Power voltage detector falling threshold selection
@{*/
/**@}*/

/** PWR_CR2_PVDE Power voltage detector enable **/
#define PWR_CR2_PVDE		(1 << 0)

/**@}*/

/** @defgroup pwr_cr3 CR3 Power control register 3
@{*/

/** PWR_CR3_EIWUL Enable internal wakeup line **/
#define PWR_CR3_EIWUL		(1 << 15)
/** PWR_CR3_APC Apply pull-up and pull-down configuration **/
#define PWR_CR3_APC		(1 << 10)
/** PWR_CR3_ULPEN Enable the periodical sampling mode for PDR detection **/
#define PWR_CR3_ULPEN		(1 << 9)
/** PWR_CR3_RRS SRAM retention in Standby mode **/
#define PWR_CR3_RRS		(1 << 8)
/** PWR_CR3_EWUP6 Enable WKUP6 wakeup pin **/
#define PWR_CR3_EWUP6		(1 << 5)
/** PWR_CR3_EWUP5 Enable WKUP5 wakeup pin **/
#define PWR_CR3_EWUP5		(1 << 4)
/** PWR_CR3_EWUP4 Enable Wakeup pin WKUP4 **/
#define PWR_CR3_EWUP4		(1 << 3)
/** PWR_CR3_EWUP2 Enable Wakeup pin WKUP2 **/
#define PWR_CR3_EWUP2		(1 << 1)
/** PWR_CR3_EWUP1 Enable Wakeup pin WKUP1 **/
#define PWR_CR3_EWUP1		(1 << 0)

/**@}*/

/** @defgroup pwr_cr4 CR4 Power control register 4
@{*/

/** PWR_CR4_VBRS VBAT battery charging resistor selection **/
#define PWR_CR4_VBRS		(1 << 9)
/** PWR_CR4_VBE VBAT battery charging enable **/
#define PWR_CR4_VBE		(1 << 8)
/** PWR_CR4_WP6 WKUP6 wakeup pin polarity **/
#define PWR_CR4_WP6		(1 << 5)
/** PWR_CR4_WP5 Wakeup pin WKUP5 polarity **/
#define PWR_CR4_WP5		(1 << 4)
/** PWR_CR4_WP4 Wakeup pin WKUP4 polarity **/
#define PWR_CR4_WP4		(1 << 3)
/** PWR_CR4_WP2 Wakeup pin WKUP2 polarity **/
#define PWR_CR4_WP2		(1 << 1)
/** PWR_CR4_WP1 Wakeup pin WKUP1 polarity **/
#define PWR_CR4_WP1		(1 << 0)

/**@}*/

/** @defgroup pwr_sr1 SR1 Power status register 1
@{*/

/** PWR_SR1_WUFI Wakeup flag internal **/
#define PWR_SR1_WUFI		(1 << 15)
/** PWR_SR1_SBF Standby flag **/
#define PWR_SR1_SBF		(1 << 8)
/** PWR_SR1_WUF6 Wakeup flag 6 **/
#define PWR_SR1_WUF6		(1 << 5)
/** PWR_SR1_WUF5 Wakeup flag 5 **/
#define PWR_SR1_WUF5		(1 << 4)
/** PWR_SR1_WUF4 Wakeup flag 4 **/
#define PWR_SR1_WUF4		(1 << 3)
/** PWR_SR1_WUF2 Wakeup flag 2 **/
#define PWR_SR1_WUF2		(1 << 1)
/** PWR_SR1_WUF1 Wakeup flag 1 **/
#define PWR_SR1_WUF1		(1 << 0)

/**@}*/

/** @defgroup pwr_sr2 SR2 Power status register 2
@{*/

/** PWR_SR2_PVDO Power voltage detector output **/
#define PWR_SR2_PVDO		(1 << 11)
/** PWR_SR2_VOSF Voltage scaling flag **/
#define PWR_SR2_VOSF		(1 << 10)
/** PWR_SR2_REGLPF Low-power regulator flag **/
#define PWR_SR2_REGLPF		(1 << 9)
/** PWR_SR2_REGLPS Low-power regulator started **/
#define PWR_SR2_REGLPS		(1 << 8)
/** PWR_SR2_FLASH_RDY Flash ready flag **/
#define PWR_SR2_FLASH_RDY		(1 << 7)

/**@}*/

/** @defgroup pwr_scr SCR Power status clear register
@{*/

/** PWR_SCR_CSBF Clear standby flag **/
#define PWR_SCR_CSBF		(1 << 8)
/** PWR_SCR_CWUF6 Clear wakeup flag 6 **/
#define PWR_SCR_CWUF6		(1 << 5)
/** PWR_SCR_CWUF5 Clear wakeup flag 5 **/
#define PWR_SCR_CWUF5		(1 << 4)
/** PWR_SCR_CWUF4 Clear wakeup flag 4 **/
#define PWR_SCR_CWUF4		(1 << 3)
/** PWR_SCR_CWUF2 Clear wakeup flag 2 **/
#define PWR_SCR_CWUF2		(1 << 1)
/** PWR_SCR_CWUF1 Clear wakeup flag 1 **/
#define PWR_SCR_CWUF1		(1 << 0)

/**@}*/

/** @defgroup pwr_pucra PUCRA Power Port A pull-up control register
@{*/

/** PWR_PUCRA_PU15 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU15		(1 << 15)
/** PWR_PUCRA_PU14 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU14		(1 << 14)
/** PWR_PUCRA_PU13 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU13		(1 << 13)
/** PWR_PUCRA_PU12 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU12		(1 << 12)
/** PWR_PUCRA_PU11 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU11		(1 << 11)
/** PWR_PUCRA_PU10 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU10		(1 << 10)
/** PWR_PUCRA_PU9 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU9		(1 << 9)
/** PWR_PUCRA_PU8 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU8		(1 << 8)
/** PWR_PUCRA_PU7 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU7		(1 << 7)
/** PWR_PUCRA_PU6 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU6		(1 << 6)
/** PWR_PUCRA_PU5 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU5		(1 << 5)
/** PWR_PUCRA_PU4 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU4		(1 << 4)
/** PWR_PUCRA_PU3 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU3		(1 << 3)
/** PWR_PUCRA_PU2 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU2		(1 << 2)
/** PWR_PUCRA_PU1 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU1		(1 << 1)
/** PWR_PUCRA_PU0 Port A pull-up bit y (y=0..15) **/
#define PWR_PUCRA_PU0		(1 << 0)

/**@}*/

/** @defgroup pwr_pdcra PDCRA Power Port A pull-down control register
@{*/

/** PWR_PDCRA_PD15 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD15		(1 << 15)
/** PWR_PDCRA_PD14 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD14		(1 << 14)
/** PWR_PDCRA_PD13 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD13		(1 << 13)
/** PWR_PDCRA_PD12 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD12		(1 << 12)
/** PWR_PDCRA_PD11 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD11		(1 << 11)
/** PWR_PDCRA_PD10 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD10		(1 << 10)
/** PWR_PDCRA_PD9 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD9		(1 << 9)
/** PWR_PDCRA_PD8 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD8		(1 << 8)
/** PWR_PDCRA_PD7 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD7		(1 << 7)
/** PWR_PDCRA_PD6 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD6		(1 << 6)
/** PWR_PDCRA_PD5 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD5		(1 << 5)
/** PWR_PDCRA_PD4 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD4		(1 << 4)
/** PWR_PDCRA_PD3 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD3		(1 << 3)
/** PWR_PDCRA_PD2 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD2		(1 << 2)
/** PWR_PDCRA_PD1 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD1		(1 << 1)
/** PWR_PDCRA_PD0 Port A pull-down bit y (y=0..15) **/
#define PWR_PDCRA_PD0		(1 << 0)

/**@}*/

/** @defgroup pwr_pucrb PUCRB Power Port B pull-up control register
@{*/

/** PWR_PUCRB_PU15 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU15		(1 << 15)
/** PWR_PUCRB_PU14 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU14		(1 << 14)
/** PWR_PUCRB_PU13 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU13		(1 << 13)
/** PWR_PUCRB_PU12 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU12		(1 << 12)
/** PWR_PUCRB_PU11 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU11		(1 << 11)
/** PWR_PUCRB_PU10 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU10		(1 << 10)
/** PWR_PUCRB_PU9 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU9		(1 << 9)
/** PWR_PUCRB_PU8 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU8		(1 << 8)
/** PWR_PUCRB_PU7 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU7		(1 << 7)
/** PWR_PUCRB_PU6 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU6		(1 << 6)
/** PWR_PUCRB_PU5 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU5		(1 << 5)
/** PWR_PUCRB_PU4 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU4		(1 << 4)
/** PWR_PUCRB_PU3 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU3		(1 << 3)
/** PWR_PUCRB_PU2 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU2		(1 << 2)
/** PWR_PUCRB_PU1 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU1		(1 << 1)
/** PWR_PUCRB_PU0 Port B pull-up bit y (y=0..15) **/
#define PWR_PUCRB_PU0		(1 << 0)

/**@}*/

/** @defgroup pwr_pdcrb PDCRB Power Port B pull-down control register
@{*/

/** PWR_PDCRB_PD15 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD15		(1 << 15)
/** PWR_PDCRB_PD14 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD14		(1 << 14)
/** PWR_PDCRB_PD13 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD13		(1 << 13)
/** PWR_PDCRB_PD12 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD12		(1 << 12)
/** PWR_PDCRB_PD11 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD11		(1 << 11)
/** PWR_PDCRB_PD10 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD10		(1 << 10)
/** PWR_PDCRB_PD9 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD9		(1 << 9)
/** PWR_PDCRB_PD8 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD8		(1 << 8)
/** PWR_PDCRB_PD7 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD7		(1 << 7)
/** PWR_PDCRB_PD6 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD6		(1 << 6)
/** PWR_PDCRB_PD5 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD5		(1 << 5)
/** PWR_PDCRB_PD4 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD4		(1 << 4)
/** PWR_PDCRB_PD3 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD3		(1 << 3)
/** PWR_PDCRB_PD2 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD2		(1 << 2)
/** PWR_PDCRB_PD1 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD1		(1 << 1)
/** PWR_PDCRB_PD0 Port B pull-down bit y (y=0..15) **/
#define PWR_PDCRB_PD0		(1 << 0)

/**@}*/

/** @defgroup pwr_pucrc PUCRC Power Port C pull-up control register
@{*/

/** PWR_PUCRC_PU15 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU15		(1 << 15)
/** PWR_PUCRC_PU14 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU14		(1 << 14)
/** PWR_PUCRC_PU13 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU13		(1 << 13)
/** PWR_PUCRC_PU12 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU12		(1 << 12)
/** PWR_PUCRC_PU11 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU11		(1 << 11)
/** PWR_PUCRC_PU10 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU10		(1 << 10)
/** PWR_PUCRC_PU9 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU9		(1 << 9)
/** PWR_PUCRC_PU8 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU8		(1 << 8)
/** PWR_PUCRC_PU7 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU7		(1 << 7)
/** PWR_PUCRC_PU6 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU6		(1 << 6)
/** PWR_PUCRC_PU5 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU5		(1 << 5)
/** PWR_PUCRC_PU4 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU4		(1 << 4)
/** PWR_PUCRC_PU3 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU3		(1 << 3)
/** PWR_PUCRC_PU2 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU2		(1 << 2)
/** PWR_PUCRC_PU1 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU1		(1 << 1)
/** PWR_PUCRC_PU0 Port C pull-up bit y (y=0..15) **/
#define PWR_PUCRC_PU0		(1 << 0)

/**@}*/

/** @defgroup pwr_pdcrc PDCRC Power Port C pull-down control register
@{*/

/** PWR_PDCRC_PD15 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD15		(1 << 15)
/** PWR_PDCRC_PD14 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD14		(1 << 14)
/** PWR_PDCRC_PD13 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD13		(1 << 13)
/** PWR_PDCRC_PD12 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD12		(1 << 12)
/** PWR_PDCRC_PD11 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD11		(1 << 11)
/** PWR_PDCRC_PD10 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD10		(1 << 10)
/** PWR_PDCRC_PD9 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD9		(1 << 9)
/** PWR_PDCRC_PD8 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD8		(1 << 8)
/** PWR_PDCRC_PD7 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD7		(1 << 7)
/** PWR_PDCRC_PD6 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD6		(1 << 6)
/** PWR_PDCRC_PD5 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD5		(1 << 5)
/** PWR_PDCRC_PD4 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD4		(1 << 4)
/** PWR_PDCRC_PD3 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD3		(1 << 3)
/** PWR_PDCRC_PD2 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD2		(1 << 2)
/** PWR_PDCRC_PD1 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD1		(1 << 1)
/** PWR_PDCRC_PD0 Port C pull-down bit y (y=0..15) **/
#define PWR_PDCRC_PD0		(1 << 0)

/**@}*/

/** @defgroup pwr_pucrd PUCRD Power Port D pull-up control register
@{*/

/** PWR_PUCRD_PU9 Port D pull-up bit y (y=0..15) **/
#define PWR_PUCRD_PU9		(1 << 9)
/** PWR_PUCRD_PU8 Port D pull-up bit y (y=0..15) **/
#define PWR_PUCRD_PU8		(1 << 8)
/** PWR_PUCRD_PU6 Port D pull-up bit y (y=0..15) **/
#define PWR_PUCRD_PU6		(1 << 6)
/** PWR_PUCRD_PU5 Port D pull-up bit y (y=0..15) **/
#define PWR_PUCRD_PU5		(1 << 5)
/** PWR_PUCRD_PU4 Port D pull-up bit y (y=0..15) **/
#define PWR_PUCRD_PU4		(1 << 4)
/** PWR_PUCRD_PU3 Port D pull-up bit y (y=0..15) **/
#define PWR_PUCRD_PU3		(1 << 3)
/** PWR_PUCRD_PU2 Port D pull-up bit y (y=0..15) **/
#define PWR_PUCRD_PU2		(1 << 2)
/** PWR_PUCRD_PU1 Port D pull-up bit y (y=0..15) **/
#define PWR_PUCRD_PU1		(1 << 1)
/** PWR_PUCRD_PU0 Port D pull-up bit y (y=0..15) **/
#define PWR_PUCRD_PU0		(1 << 0)

/**@}*/

/** @defgroup pwr_pdcrd PDCRD Power Port D pull-down control register
@{*/

/** PWR_PDCRD_PD9 Port D pull-down bit y (y=0..15) **/
#define PWR_PDCRD_PD9		(1 << 9)
/** PWR_PDCRD_PD8 Port D pull-down bit y (y=0..15) **/
#define PWR_PDCRD_PD8		(1 << 8)
/** PWR_PDCRD_PD6 Port D pull-down bit y (y=0..15) **/
#define PWR_PDCRD_PD6		(1 << 6)
/** PWR_PDCRD_PD5 Port D pull-down bit y (y=0..15) **/
#define PWR_PDCRD_PD5		(1 << 5)
/** PWR_PDCRD_PD4 Port D pull-down bit y (y=0..15) **/
#define PWR_PDCRD_PD4		(1 << 4)
/** PWR_PDCRD_PD3 Port D pull-down bit y (y=0..15) **/
#define PWR_PDCRD_PD3		(1 << 3)
/** PWR_PDCRD_PD2 Port D pull-down bit y (y=0..15) **/
#define PWR_PDCRD_PD2		(1 << 2)
/** PWR_PDCRD_PD1 Port D pull-down bit y (y=0..15) **/
#define PWR_PDCRD_PD1		(1 << 1)
/** PWR_PDCRD_PD0 Port D pull-down bit y (y=0..15) **/
#define PWR_PDCRD_PD0		(1 << 0)

/**@}*/

/** @defgroup pwr_pucrf PUCRF Power Port F pull-up control register
@{*/

/** PWR_PUCRF_PU2 Port F pull-up bit y (y=0..15) **/
#define PWR_PUCRF_PU2		(1 << 2)
/** PWR_PUCRF_PU1 Port F pull-up bit y (y=0..15) **/
#define PWR_PUCRF_PU1		(1 << 1)
/** PWR_PUCRF_PU0 Port F pull-up bit y (y=0..15) **/
#define PWR_PUCRF_PU0		(1 << 0)

/**@}*/

/** @defgroup pwr_pdcrf PDCRF Power Port F pull-down control register
@{*/

/** PWR_PDCRF_PD2 Port F pull-down bit y (y=0..15) **/
#define PWR_PDCRF_PD2		(1 << 2)
/** PWR_PDCRF_PD1 Port F pull-down bit y (y=0..15) **/
#define PWR_PDCRF_PD1		(1 << 1)
/** PWR_PDCRF_PD0 Port F pull-down bit y (y=0..15) **/
#define PWR_PDCRF_PD0		(1 << 0)

/**@}*/

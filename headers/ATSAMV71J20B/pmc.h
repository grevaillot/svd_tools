#pragma once 

/* --- PMC: Power Management Controller ----------------------------- */

/** @defgroup pmc_registers Power Management Controller Register
@{*/

/** PMC_PMC_SCER System Clock Enable Register **/
#define PMC_PMC_SCER			MMIO32(PMC_BASE + 0x00)
/** PMC_PMC_SCDR System Clock Disable Register **/
#define PMC_PMC_SCDR			MMIO32(PMC_BASE + 0x04)
/** PMC_PMC_SCSR System Clock Status Register **/
#define PMC_PMC_SCSR			MMIO32(PMC_BASE + 0x08)
/** PMC_PMC_PCER0 Peripheral Clock Enable Register 0 **/
#define PMC_PMC_PCER0			MMIO32(PMC_BASE + 0x10)
/** PMC_PMC_PCDR0 Peripheral Clock Disable Register 0 **/
#define PMC_PMC_PCDR0			MMIO32(PMC_BASE + 0x14)
/** PMC_PMC_PCSR0 Peripheral Clock Status Register 0 **/
#define PMC_PMC_PCSR0			MMIO32(PMC_BASE + 0x18)
/** PMC_CKGR_UCKR UTMI Clock Register **/
#define PMC_CKGR_UCKR			MMIO32(PMC_BASE + 0x1c)
/** PMC_CKGR_MOR Main Oscillator Register **/
#define PMC_CKGR_MOR			MMIO32(PMC_BASE + 0x20)
/** PMC_CKGR_MCFR Main Clock Frequency Register **/
#define PMC_CKGR_MCFR			MMIO32(PMC_BASE + 0x24)
/** PMC_CKGR_PLLAR PLLA Register **/
#define PMC_CKGR_PLLAR			MMIO32(PMC_BASE + 0x28)
/** PMC_PMC_MCKR Master Clock Register **/
#define PMC_PMC_MCKR			MMIO32(PMC_BASE + 0x30)
/** PMC_PMC_USB USB Clock Register **/
#define PMC_PMC_USB			MMIO32(PMC_BASE + 0x38)
/** PMC_PMC_PCK[0] Programmable Clock Register **/
#define PMC_PMC_PCK[0]			MMIO32(PMC_BASE + 0x40)
/** PMC_PMC_PCK[1] Programmable Clock Register **/
#define PMC_PMC_PCK[1]			MMIO32(PMC_BASE + 0x44)
/** PMC_PMC_PCK[2] Programmable Clock Register **/
#define PMC_PMC_PCK[2]			MMIO32(PMC_BASE + 0x48)
/** PMC_PMC_PCK[3] Programmable Clock Register **/
#define PMC_PMC_PCK[3]			MMIO32(PMC_BASE + 0x4c)
/** PMC_PMC_PCK[4] Programmable Clock Register **/
#define PMC_PMC_PCK[4]			MMIO32(PMC_BASE + 0x50)
/** PMC_PMC_PCK[5] Programmable Clock Register **/
#define PMC_PMC_PCK[5]			MMIO32(PMC_BASE + 0x54)
/** PMC_PMC_PCK[6] Programmable Clock Register **/
#define PMC_PMC_PCK[6]			MMIO32(PMC_BASE + 0x58)
/** PMC_PMC_PCK[7] Programmable Clock Register **/
#define PMC_PMC_PCK[7]			MMIO32(PMC_BASE + 0x5c)
/** PMC_PMC_IER Interrupt Enable Register **/
#define PMC_PMC_IER			MMIO32(PMC_BASE + 0x60)
/** PMC_PMC_IDR Interrupt Disable Register **/
#define PMC_PMC_IDR			MMIO32(PMC_BASE + 0x64)
/** PMC_PMC_SR Status Register **/
#define PMC_PMC_SR			MMIO32(PMC_BASE + 0x68)
/** PMC_PMC_IMR Interrupt Mask Register **/
#define PMC_PMC_IMR			MMIO32(PMC_BASE + 0x6c)
/** PMC_PMC_FSMR Fast Startup Mode Register **/
#define PMC_PMC_FSMR			MMIO32(PMC_BASE + 0x70)
/** PMC_PMC_FSPR Fast Startup Polarity Register **/
#define PMC_PMC_FSPR			MMIO32(PMC_BASE + 0x74)
/** PMC_PMC_FOCR Fault Output Clear Register **/
#define PMC_PMC_FOCR			MMIO32(PMC_BASE + 0x78)
/** PMC_PMC_WPMR Write Protection Mode Register **/
#define PMC_PMC_WPMR			MMIO32(PMC_BASE + 0xe4)
/** PMC_PMC_WPSR Write Protection Status Register **/
#define PMC_PMC_WPSR			MMIO32(PMC_BASE + 0xe8)
/** PMC_PMC_PCER1 Peripheral Clock Enable Register 1 **/
#define PMC_PMC_PCER1			MMIO32(PMC_BASE + 0x100)
/** PMC_PMC_PCDR1 Peripheral Clock Disable Register 1 **/
#define PMC_PMC_PCDR1			MMIO32(PMC_BASE + 0x104)
/** PMC_PMC_PCSR1 Peripheral Clock Status Register 1 **/
#define PMC_PMC_PCSR1			MMIO32(PMC_BASE + 0x108)
/** PMC_PMC_PCR Peripheral Control Register **/
#define PMC_PMC_PCR			MMIO32(PMC_BASE + 0x10c)
/** PMC_PMC_OCR Oscillator Calibration Register **/
#define PMC_PMC_OCR			MMIO32(PMC_BASE + 0x110)
/** PMC_PMC_SLPWK_ER0 SleepWalking Enable Register 0 **/
#define PMC_PMC_SLPWK_ER0			MMIO32(PMC_BASE + 0x114)
/** PMC_PMC_SLPWK_DR0 SleepWalking Disable Register 0 **/
#define PMC_PMC_SLPWK_DR0			MMIO32(PMC_BASE + 0x118)
/** PMC_PMC_SLPWK_SR0 SleepWalking Status Register 0 **/
#define PMC_PMC_SLPWK_SR0			MMIO32(PMC_BASE + 0x11c)
/** PMC_PMC_SLPWK_ASR0 SleepWalking Activity Status Register 0 **/
#define PMC_PMC_SLPWK_ASR0			MMIO32(PMC_BASE + 0x120)
/** PMC_PMC_PMMR PLL Maximum Multiplier Value Register **/
#define PMC_PMC_PMMR			MMIO32(PMC_BASE + 0x130)
/** PMC_PMC_SLPWK_ER1 SleepWalking Enable Register 1 **/
#define PMC_PMC_SLPWK_ER1			MMIO32(PMC_BASE + 0x134)
/** PMC_PMC_SLPWK_DR1 SleepWalking Disable Register 1 **/
#define PMC_PMC_SLPWK_DR1			MMIO32(PMC_BASE + 0x138)
/** PMC_PMC_SLPWK_SR1 SleepWalking Status Register 1 **/
#define PMC_PMC_SLPWK_SR1			MMIO32(PMC_BASE + 0x13c)
/** PMC_PMC_SLPWK_ASR1 SleepWalking Activity Status Register 1 **/
#define PMC_PMC_SLPWK_ASR1			MMIO32(PMC_BASE + 0x140)
/** PMC_PMC_SLPWK_AIPR SleepWalking Activity In Progress Register **/
#define PMC_PMC_SLPWK_AIPR			MMIO32(PMC_BASE + 0x144)

/**@}*/


/** @defgroup pmc_pmc_scer PMCSCER System Clock Enable Register
@{*/

/** PMC_PMC_SCER_PCK7 Programmable Clock 7 Output Enable **/
#define PMC_PMC_SCER_PCK7		(1 << 15)
/** PMC_PMC_SCER_PCK6 Programmable Clock 6 Output Enable **/
#define PMC_PMC_SCER_PCK6		(1 << 14)
/** PMC_PMC_SCER_PCK5 Programmable Clock 5 Output Enable **/
#define PMC_PMC_SCER_PCK5		(1 << 13)
/** PMC_PMC_SCER_PCK4 Programmable Clock 4 Output Enable **/
#define PMC_PMC_SCER_PCK4		(1 << 12)
/** PMC_PMC_SCER_PCK3 Programmable Clock 3 Output Enable **/
#define PMC_PMC_SCER_PCK3		(1 << 11)
/** PMC_PMC_SCER_PCK2 Programmable Clock 2 Output Enable **/
#define PMC_PMC_SCER_PCK2		(1 << 10)
/** PMC_PMC_SCER_PCK1 Programmable Clock 1 Output Enable **/
#define PMC_PMC_SCER_PCK1		(1 << 9)
/** PMC_PMC_SCER_PCK0 Programmable Clock 0 Output Enable **/
#define PMC_PMC_SCER_PCK0		(1 << 8)
/** PMC_PMC_SCER_USBCLK Enable USB FS Clock **/
#define PMC_PMC_SCER_USBCLK		(1 << 5)

/**@}*/

/** @defgroup pmc_pmc_scdr PMCSCDR System Clock Disable Register
@{*/

/** PMC_PMC_SCDR_PCK7 Programmable Clock 7 Output Disable **/
#define PMC_PMC_SCDR_PCK7		(1 << 15)
/** PMC_PMC_SCDR_PCK6 Programmable Clock 6 Output Disable **/
#define PMC_PMC_SCDR_PCK6		(1 << 14)
/** PMC_PMC_SCDR_PCK5 Programmable Clock 5 Output Disable **/
#define PMC_PMC_SCDR_PCK5		(1 << 13)
/** PMC_PMC_SCDR_PCK4 Programmable Clock 4 Output Disable **/
#define PMC_PMC_SCDR_PCK4		(1 << 12)
/** PMC_PMC_SCDR_PCK3 Programmable Clock 3 Output Disable **/
#define PMC_PMC_SCDR_PCK3		(1 << 11)
/** PMC_PMC_SCDR_PCK2 Programmable Clock 2 Output Disable **/
#define PMC_PMC_SCDR_PCK2		(1 << 10)
/** PMC_PMC_SCDR_PCK1 Programmable Clock 1 Output Disable **/
#define PMC_PMC_SCDR_PCK1		(1 << 9)
/** PMC_PMC_SCDR_PCK0 Programmable Clock 0 Output Disable **/
#define PMC_PMC_SCDR_PCK0		(1 << 8)
/** PMC_PMC_SCDR_USBCLK Disable USB FS Clock **/
#define PMC_PMC_SCDR_USBCLK		(1 << 5)

/**@}*/

/** @defgroup pmc_pmc_scsr PMCSCSR System Clock Status Register
@{*/

/** PMC_PMC_SCSR_PCK7 Programmable Clock 7 Output Status **/
#define PMC_PMC_SCSR_PCK7		(1 << 15)
/** PMC_PMC_SCSR_PCK6 Programmable Clock 6 Output Status **/
#define PMC_PMC_SCSR_PCK6		(1 << 14)
/** PMC_PMC_SCSR_PCK5 Programmable Clock 5 Output Status **/
#define PMC_PMC_SCSR_PCK5		(1 << 13)
/** PMC_PMC_SCSR_PCK4 Programmable Clock 4 Output Status **/
#define PMC_PMC_SCSR_PCK4		(1 << 12)
/** PMC_PMC_SCSR_PCK3 Programmable Clock 3 Output Status **/
#define PMC_PMC_SCSR_PCK3		(1 << 11)
/** PMC_PMC_SCSR_PCK2 Programmable Clock 2 Output Status **/
#define PMC_PMC_SCSR_PCK2		(1 << 10)
/** PMC_PMC_SCSR_PCK1 Programmable Clock 1 Output Status **/
#define PMC_PMC_SCSR_PCK1		(1 << 9)
/** PMC_PMC_SCSR_PCK0 Programmable Clock 0 Output Status **/
#define PMC_PMC_SCSR_PCK0		(1 << 8)
/** PMC_PMC_SCSR_USBCLK USB FS Clock Status **/
#define PMC_PMC_SCSR_USBCLK		(1 << 5)
/** PMC_PMC_SCSR_HCLKS HCLK Status **/
#define PMC_PMC_SCSR_HCLKS		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_pcer0 PMCPCER0 Peripheral Clock Enable Register 0
@{*/

/** PMC_PMC_PCER0_PID31 Peripheral Clock 31 Enable **/
#define PMC_PMC_PCER0_PID31		(1 << 31)
/** PMC_PMC_PCER0_PID30 Peripheral Clock 30 Enable **/
#define PMC_PMC_PCER0_PID30		(1 << 30)
/** PMC_PMC_PCER0_PID29 Peripheral Clock 29 Enable **/
#define PMC_PMC_PCER0_PID29		(1 << 29)
/** PMC_PMC_PCER0_PID28 Peripheral Clock 28 Enable **/
#define PMC_PMC_PCER0_PID28		(1 << 28)
/** PMC_PMC_PCER0_PID27 Peripheral Clock 27 Enable **/
#define PMC_PMC_PCER0_PID27		(1 << 27)
/** PMC_PMC_PCER0_PID26 Peripheral Clock 26 Enable **/
#define PMC_PMC_PCER0_PID26		(1 << 26)
/** PMC_PMC_PCER0_PID25 Peripheral Clock 25 Enable **/
#define PMC_PMC_PCER0_PID25		(1 << 25)
/** PMC_PMC_PCER0_PID24 Peripheral Clock 24 Enable **/
#define PMC_PMC_PCER0_PID24		(1 << 24)
/** PMC_PMC_PCER0_PID23 Peripheral Clock 23 Enable **/
#define PMC_PMC_PCER0_PID23		(1 << 23)
/** PMC_PMC_PCER0_PID22 Peripheral Clock 22 Enable **/
#define PMC_PMC_PCER0_PID22		(1 << 22)
/** PMC_PMC_PCER0_PID20 Peripheral Clock 20 Enable **/
#define PMC_PMC_PCER0_PID20		(1 << 20)
/** PMC_PMC_PCER0_PID19 Peripheral Clock 19 Enable **/
#define PMC_PMC_PCER0_PID19		(1 << 19)
/** PMC_PMC_PCER0_PID16 Peripheral Clock 16 Enable **/
#define PMC_PMC_PCER0_PID16		(1 << 16)
/** PMC_PMC_PCER0_PID14 Peripheral Clock 14 Enable **/
#define PMC_PMC_PCER0_PID14		(1 << 14)
/** PMC_PMC_PCER0_PID13 Peripheral Clock 13 Enable **/
#define PMC_PMC_PCER0_PID13		(1 << 13)
/** PMC_PMC_PCER0_PID11 Peripheral Clock 11 Enable **/
#define PMC_PMC_PCER0_PID11		(1 << 11)
/** PMC_PMC_PCER0_PID10 Peripheral Clock 10 Enable **/
#define PMC_PMC_PCER0_PID10		(1 << 10)
/** PMC_PMC_PCER0_PID8 Peripheral Clock 8 Enable **/
#define PMC_PMC_PCER0_PID8		(1 << 8)
/** PMC_PMC_PCER0_PID7 Peripheral Clock 7 Enable **/
#define PMC_PMC_PCER0_PID7		(1 << 7)

/**@}*/

/** @defgroup pmc_pmc_pcdr0 PMCPCDR0 Peripheral Clock Disable Register 0
@{*/

/** PMC_PMC_PCDR0_PID31 Peripheral Clock 31 Disable **/
#define PMC_PMC_PCDR0_PID31		(1 << 31)
/** PMC_PMC_PCDR0_PID30 Peripheral Clock 30 Disable **/
#define PMC_PMC_PCDR0_PID30		(1 << 30)
/** PMC_PMC_PCDR0_PID29 Peripheral Clock 29 Disable **/
#define PMC_PMC_PCDR0_PID29		(1 << 29)
/** PMC_PMC_PCDR0_PID28 Peripheral Clock 28 Disable **/
#define PMC_PMC_PCDR0_PID28		(1 << 28)
/** PMC_PMC_PCDR0_PID27 Peripheral Clock 27 Disable **/
#define PMC_PMC_PCDR0_PID27		(1 << 27)
/** PMC_PMC_PCDR0_PID26 Peripheral Clock 26 Disable **/
#define PMC_PMC_PCDR0_PID26		(1 << 26)
/** PMC_PMC_PCDR0_PID25 Peripheral Clock 25 Disable **/
#define PMC_PMC_PCDR0_PID25		(1 << 25)
/** PMC_PMC_PCDR0_PID24 Peripheral Clock 24 Disable **/
#define PMC_PMC_PCDR0_PID24		(1 << 24)
/** PMC_PMC_PCDR0_PID23 Peripheral Clock 23 Disable **/
#define PMC_PMC_PCDR0_PID23		(1 << 23)
/** PMC_PMC_PCDR0_PID22 Peripheral Clock 22 Disable **/
#define PMC_PMC_PCDR0_PID22		(1 << 22)
/** PMC_PMC_PCDR0_PID20 Peripheral Clock 20 Disable **/
#define PMC_PMC_PCDR0_PID20		(1 << 20)
/** PMC_PMC_PCDR0_PID19 Peripheral Clock 19 Disable **/
#define PMC_PMC_PCDR0_PID19		(1 << 19)
/** PMC_PMC_PCDR0_PID16 Peripheral Clock 16 Disable **/
#define PMC_PMC_PCDR0_PID16		(1 << 16)
/** PMC_PMC_PCDR0_PID14 Peripheral Clock 14 Disable **/
#define PMC_PMC_PCDR0_PID14		(1 << 14)
/** PMC_PMC_PCDR0_PID13 Peripheral Clock 13 Disable **/
#define PMC_PMC_PCDR0_PID13		(1 << 13)
/** PMC_PMC_PCDR0_PID11 Peripheral Clock 11 Disable **/
#define PMC_PMC_PCDR0_PID11		(1 << 11)
/** PMC_PMC_PCDR0_PID10 Peripheral Clock 10 Disable **/
#define PMC_PMC_PCDR0_PID10		(1 << 10)
/** PMC_PMC_PCDR0_PID8 Peripheral Clock 8 Disable **/
#define PMC_PMC_PCDR0_PID8		(1 << 8)
/** PMC_PMC_PCDR0_PID7 Peripheral Clock 7 Disable **/
#define PMC_PMC_PCDR0_PID7		(1 << 7)

/**@}*/

/** @defgroup pmc_pmc_pcsr0 PMCPCSR0 Peripheral Clock Status Register 0
@{*/

/** PMC_PMC_PCSR0_PID31 Peripheral Clock 31 Status **/
#define PMC_PMC_PCSR0_PID31		(1 << 31)
/** PMC_PMC_PCSR0_PID30 Peripheral Clock 30 Status **/
#define PMC_PMC_PCSR0_PID30		(1 << 30)
/** PMC_PMC_PCSR0_PID29 Peripheral Clock 29 Status **/
#define PMC_PMC_PCSR0_PID29		(1 << 29)
/** PMC_PMC_PCSR0_PID28 Peripheral Clock 28 Status **/
#define PMC_PMC_PCSR0_PID28		(1 << 28)
/** PMC_PMC_PCSR0_PID27 Peripheral Clock 27 Status **/
#define PMC_PMC_PCSR0_PID27		(1 << 27)
/** PMC_PMC_PCSR0_PID26 Peripheral Clock 26 Status **/
#define PMC_PMC_PCSR0_PID26		(1 << 26)
/** PMC_PMC_PCSR0_PID25 Peripheral Clock 25 Status **/
#define PMC_PMC_PCSR0_PID25		(1 << 25)
/** PMC_PMC_PCSR0_PID24 Peripheral Clock 24 Status **/
#define PMC_PMC_PCSR0_PID24		(1 << 24)
/** PMC_PMC_PCSR0_PID23 Peripheral Clock 23 Status **/
#define PMC_PMC_PCSR0_PID23		(1 << 23)
/** PMC_PMC_PCSR0_PID22 Peripheral Clock 22 Status **/
#define PMC_PMC_PCSR0_PID22		(1 << 22)
/** PMC_PMC_PCSR0_PID20 Peripheral Clock 20 Status **/
#define PMC_PMC_PCSR0_PID20		(1 << 20)
/** PMC_PMC_PCSR0_PID19 Peripheral Clock 19 Status **/
#define PMC_PMC_PCSR0_PID19		(1 << 19)
/** PMC_PMC_PCSR0_PID16 Peripheral Clock 16 Status **/
#define PMC_PMC_PCSR0_PID16		(1 << 16)
/** PMC_PMC_PCSR0_PID14 Peripheral Clock 14 Status **/
#define PMC_PMC_PCSR0_PID14		(1 << 14)
/** PMC_PMC_PCSR0_PID13 Peripheral Clock 13 Status **/
#define PMC_PMC_PCSR0_PID13		(1 << 13)
/** PMC_PMC_PCSR0_PID11 Peripheral Clock 11 Status **/
#define PMC_PMC_PCSR0_PID11		(1 << 11)
/** PMC_PMC_PCSR0_PID10 Peripheral Clock 10 Status **/
#define PMC_PMC_PCSR0_PID10		(1 << 10)
/** PMC_PMC_PCSR0_PID8 Peripheral Clock 8 Status **/
#define PMC_PMC_PCSR0_PID8		(1 << 8)
/** PMC_PMC_PCSR0_PID7 Peripheral Clock 7 Status **/
#define PMC_PMC_PCSR0_PID7		(1 << 7)

/**@}*/

/** @defgroup pmc_ckgr_uckr CKGRUCKR UTMI Clock Register
@{*/


#define PMC_CKGR_UCKR_UPLLCOUNT_SHIFT		20
#define PMC_CKGR_UCKR_UPLLCOUNT_MASK		0x0f
/** @defgroup pmc_ckgr_uckr_upllcount UPLLCOUNT UTMI PLL Start-up Time
@{*/
/**@}*/

/** PMC_CKGR_UCKR_UPLLEN UTMI PLL Enable **/
#define PMC_CKGR_UCKR_UPLLEN		(1 << 16)

/**@}*/

/** @defgroup pmc_ckgr_mor CKGRMOR Main Oscillator Register
@{*/

/** PMC_CKGR_MOR_XT32KFME 32.768 kHz Crystal Oscillator Frequency Monitoring Enable **/
#define PMC_CKGR_MOR_XT32KFME		(1 << 26)
/** PMC_CKGR_MOR_CFDEN Clock Failure Detector Enable **/
#define PMC_CKGR_MOR_CFDEN		(1 << 25)
/** PMC_CKGR_MOR_MOSCSEL Main Clock Oscillator Selection **/
#define PMC_CKGR_MOR_MOSCSEL		(1 << 24)

#define PMC_CKGR_MOR_KEY_SHIFT		16
#define PMC_CKGR_MOR_KEY_MASK		0xff
/** @defgroup pmc_ckgr_mor_key KEY Write Access Password
@{*/
/**@}*/


#define PMC_CKGR_MOR_MOSCXTST_SHIFT		8
#define PMC_CKGR_MOR_MOSCXTST_MASK		0xff
/** @defgroup pmc_ckgr_mor_moscxtst MOSCXTST Main Crystal Oscillator Startup Time
@{*/
/**@}*/


#define PMC_CKGR_MOR_MOSCRCF_SHIFT		4
#define PMC_CKGR_MOR_MOSCRCF_MASK		0x07
/** @defgroup pmc_ckgr_mor_moscrcf MOSCRCF Main RC Oscillator Frequency Selection
@{*/
/**@}*/

/** PMC_CKGR_MOR_MOSCRCEN Main RC Oscillator Enable **/
#define PMC_CKGR_MOR_MOSCRCEN		(1 << 3)
/** PMC_CKGR_MOR_WAITMODE Wait Mode Command (Write-only) **/
#define PMC_CKGR_MOR_WAITMODE		(1 << 2)
/** PMC_CKGR_MOR_MOSCXTBY Main Crystal Oscillator Bypass **/
#define PMC_CKGR_MOR_MOSCXTBY		(1 << 1)
/** PMC_CKGR_MOR_MOSCXTEN Main Crystal Oscillator Enable **/
#define PMC_CKGR_MOR_MOSCXTEN		(1 << 0)

/**@}*/

/** @defgroup pmc_ckgr_mcfr CKGRMCFR Main Clock Frequency Register
@{*/

/** PMC_CKGR_MCFR_CCSS Counter Clock Source Selection **/
#define PMC_CKGR_MCFR_CCSS		(1 << 24)
/** PMC_CKGR_MCFR_RCMEAS RC Oscillator Frequency Measure (write-only) **/
#define PMC_CKGR_MCFR_RCMEAS		(1 << 20)
/** PMC_CKGR_MCFR_MAINFRDY Main Clock Frequency Measure Ready **/
#define PMC_CKGR_MCFR_MAINFRDY		(1 << 16)

#define PMC_CKGR_MCFR_MAINF_SHIFT		0
#define PMC_CKGR_MCFR_MAINF_MASK		0xffff
/** @defgroup pmc_ckgr_mcfr_mainf MAINF Main Clock Frequency
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_ckgr_pllar CKGRPLLAR PLLA Register
@{*/

/** PMC_CKGR_PLLAR_ONE Must Be Set to 1 **/
#define PMC_CKGR_PLLAR_ONE		(1 << 29)

#define PMC_CKGR_PLLAR_MULA_SHIFT		16
#define PMC_CKGR_PLLAR_MULA_MASK		0x7ff
/** @defgroup pmc_ckgr_pllar_mula MULA PLLA Multiplier
@{*/
/**@}*/


#define PMC_CKGR_PLLAR_PLLACOUNT_SHIFT		8
#define PMC_CKGR_PLLAR_PLLACOUNT_MASK		0x3f
/** @defgroup pmc_ckgr_pllar_pllacount PLLACOUNT PLLA Counter
@{*/
/**@}*/


#define PMC_CKGR_PLLAR_DIVA_SHIFT		0
#define PMC_CKGR_PLLAR_DIVA_MASK		0xff
/** @defgroup pmc_ckgr_pllar_diva DIVA PLLA Front End Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_mckr PMCMCKR Master Clock Register
@{*/

/** PMC_PMC_MCKR_UPLLDIV2 UPLL Divider by 2 **/
#define PMC_PMC_MCKR_UPLLDIV2		(1 << 13)

#define PMC_PMC_MCKR_MDIV_SHIFT		8
#define PMC_PMC_MCKR_MDIV_MASK		0x03
/** @defgroup pmc_pmc_mckr_mdiv MDIV Master Clock Division
@{*/
/**@}*/


#define PMC_PMC_MCKR_PRES_SHIFT		4
#define PMC_PMC_MCKR_PRES_MASK		0x07
/** @defgroup pmc_pmc_mckr_pres PRES Processor Clock Prescaler
@{*/
/**@}*/


#define PMC_PMC_MCKR_CSS_SHIFT		0
#define PMC_PMC_MCKR_CSS_MASK		0x03
/** @defgroup pmc_pmc_mckr_css CSS Master Clock Source Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_usb PMCUSB USB Clock Register
@{*/


#define PMC_PMC_USB_USBDIV_SHIFT		8
#define PMC_PMC_USB_USBDIV_MASK		0x0f
/** @defgroup pmc_pmc_usb_usbdiv USBDIV Divider for USB_48M
@{*/
/**@}*/

/** PMC_PMC_USB_USBS USB Input Clock Selection **/
#define PMC_PMC_USB_USBS		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_pck[0] PMCPCK[0] Programmable Clock Register
@{*/


#define PMC_PMC_PCK[0]_PRES_SHIFT		4
#define PMC_PMC_PCK[0]_PRES_MASK		0xff
/** @defgroup pmc_pmc_pck[0]_pres PRES Programmable Clock Prescaler
@{*/
/**@}*/


#define PMC_PMC_PCK[0]_CSS_SHIFT		0
#define PMC_PMC_PCK[0]_CSS_MASK		0x07
/** @defgroup pmc_pmc_pck[0]_css CSS Programmable Clock Source Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_pck[1] PMCPCK[1] Programmable Clock Register
@{*/


#define PMC_PMC_PCK[1]_PRES_SHIFT		4
#define PMC_PMC_PCK[1]_PRES_MASK		0xff
/** @defgroup pmc_pmc_pck[1]_pres PRES Programmable Clock Prescaler
@{*/
/**@}*/


#define PMC_PMC_PCK[1]_CSS_SHIFT		0
#define PMC_PMC_PCK[1]_CSS_MASK		0x07
/** @defgroup pmc_pmc_pck[1]_css CSS Programmable Clock Source Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_pck[2] PMCPCK[2] Programmable Clock Register
@{*/


#define PMC_PMC_PCK[2]_PRES_SHIFT		4
#define PMC_PMC_PCK[2]_PRES_MASK		0xff
/** @defgroup pmc_pmc_pck[2]_pres PRES Programmable Clock Prescaler
@{*/
/**@}*/


#define PMC_PMC_PCK[2]_CSS_SHIFT		0
#define PMC_PMC_PCK[2]_CSS_MASK		0x07
/** @defgroup pmc_pmc_pck[2]_css CSS Programmable Clock Source Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_pck[3] PMCPCK[3] Programmable Clock Register
@{*/


#define PMC_PMC_PCK[3]_PRES_SHIFT		4
#define PMC_PMC_PCK[3]_PRES_MASK		0xff
/** @defgroup pmc_pmc_pck[3]_pres PRES Programmable Clock Prescaler
@{*/
/**@}*/


#define PMC_PMC_PCK[3]_CSS_SHIFT		0
#define PMC_PMC_PCK[3]_CSS_MASK		0x07
/** @defgroup pmc_pmc_pck[3]_css CSS Programmable Clock Source Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_pck[4] PMCPCK[4] Programmable Clock Register
@{*/


#define PMC_PMC_PCK[4]_PRES_SHIFT		4
#define PMC_PMC_PCK[4]_PRES_MASK		0xff
/** @defgroup pmc_pmc_pck[4]_pres PRES Programmable Clock Prescaler
@{*/
/**@}*/


#define PMC_PMC_PCK[4]_CSS_SHIFT		0
#define PMC_PMC_PCK[4]_CSS_MASK		0x07
/** @defgroup pmc_pmc_pck[4]_css CSS Programmable Clock Source Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_pck[5] PMCPCK[5] Programmable Clock Register
@{*/


#define PMC_PMC_PCK[5]_PRES_SHIFT		4
#define PMC_PMC_PCK[5]_PRES_MASK		0xff
/** @defgroup pmc_pmc_pck[5]_pres PRES Programmable Clock Prescaler
@{*/
/**@}*/


#define PMC_PMC_PCK[5]_CSS_SHIFT		0
#define PMC_PMC_PCK[5]_CSS_MASK		0x07
/** @defgroup pmc_pmc_pck[5]_css CSS Programmable Clock Source Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_pck[6] PMCPCK[6] Programmable Clock Register
@{*/


#define PMC_PMC_PCK[6]_PRES_SHIFT		4
#define PMC_PMC_PCK[6]_PRES_MASK		0xff
/** @defgroup pmc_pmc_pck[6]_pres PRES Programmable Clock Prescaler
@{*/
/**@}*/


#define PMC_PMC_PCK[6]_CSS_SHIFT		0
#define PMC_PMC_PCK[6]_CSS_MASK		0x07
/** @defgroup pmc_pmc_pck[6]_css CSS Programmable Clock Source Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_pck[7] PMCPCK[7] Programmable Clock Register
@{*/


#define PMC_PMC_PCK[7]_PRES_SHIFT		4
#define PMC_PMC_PCK[7]_PRES_MASK		0xff
/** @defgroup pmc_pmc_pck[7]_pres PRES Programmable Clock Prescaler
@{*/
/**@}*/


#define PMC_PMC_PCK[7]_CSS_SHIFT		0
#define PMC_PMC_PCK[7]_CSS_MASK		0x07
/** @defgroup pmc_pmc_pck[7]_css CSS Programmable Clock Source Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_ier PMCIER Interrupt Enable Register
@{*/

/** PMC_PMC_IER_XT32KERR 32.768 kHz Crystal Oscillator Error Interrupt Enable **/
#define PMC_PMC_IER_XT32KERR		(1 << 21)
/** PMC_PMC_IER_CFDEV Clock Failure Detector Event Interrupt Enable **/
#define PMC_PMC_IER_CFDEV		(1 << 18)
/** PMC_PMC_IER_MOSCRCS Main RC Oscillator Status Interrupt Enable **/
#define PMC_PMC_IER_MOSCRCS		(1 << 17)
/** PMC_PMC_IER_MOSCSELS Main Clock Source Oscillator Selection Status Interrupt Enable **/
#define PMC_PMC_IER_MOSCSELS		(1 << 16)
/** PMC_PMC_IER_PCKRDY7 Programmable Clock Ready 7 Interrupt Enable **/
#define PMC_PMC_IER_PCKRDY7		(1 << 15)
/** PMC_PMC_IER_PCKRDY6 Programmable Clock Ready 6 Interrupt Enable **/
#define PMC_PMC_IER_PCKRDY6		(1 << 14)
/** PMC_PMC_IER_PCKRDY5 Programmable Clock Ready 5 Interrupt Enable **/
#define PMC_PMC_IER_PCKRDY5		(1 << 13)
/** PMC_PMC_IER_PCKRDY4 Programmable Clock Ready 4 Interrupt Enable **/
#define PMC_PMC_IER_PCKRDY4		(1 << 12)
/** PMC_PMC_IER_PCKRDY3 Programmable Clock Ready 3 Interrupt Enable **/
#define PMC_PMC_IER_PCKRDY3		(1 << 11)
/** PMC_PMC_IER_PCKRDY2 Programmable Clock Ready 2 Interrupt Enable **/
#define PMC_PMC_IER_PCKRDY2		(1 << 10)
/** PMC_PMC_IER_PCKRDY1 Programmable Clock Ready 1 Interrupt Enable **/
#define PMC_PMC_IER_PCKRDY1		(1 << 9)
/** PMC_PMC_IER_PCKRDY0 Programmable Clock Ready 0 Interrupt Enable **/
#define PMC_PMC_IER_PCKRDY0		(1 << 8)
/** PMC_PMC_IER_LOCKU UTMI PLL Lock Interrupt Enable **/
#define PMC_PMC_IER_LOCKU		(1 << 6)
/** PMC_PMC_IER_MCKRDY Master Clock Ready Interrupt Enable **/
#define PMC_PMC_IER_MCKRDY		(1 << 3)
/** PMC_PMC_IER_LOCKA PLLA Lock Interrupt Enable **/
#define PMC_PMC_IER_LOCKA		(1 << 1)
/** PMC_PMC_IER_MOSCXTS Main Crystal Oscillator Status Interrupt Enable **/
#define PMC_PMC_IER_MOSCXTS		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_idr PMCIDR Interrupt Disable Register
@{*/

/** PMC_PMC_IDR_XT32KERR 32.768 kHz Crystal Oscillator Error Interrupt Disable **/
#define PMC_PMC_IDR_XT32KERR		(1 << 21)
/** PMC_PMC_IDR_CFDEV Clock Failure Detector Event Interrupt Disable **/
#define PMC_PMC_IDR_CFDEV		(1 << 18)
/** PMC_PMC_IDR_MOSCRCS Main RC Status Interrupt Disable **/
#define PMC_PMC_IDR_MOSCRCS		(1 << 17)
/** PMC_PMC_IDR_MOSCSELS Main Clock Source Oscillator Selection Status Interrupt Disable **/
#define PMC_PMC_IDR_MOSCSELS		(1 << 16)
/** PMC_PMC_IDR_PCKRDY7 Programmable Clock Ready 7 Interrupt Disable **/
#define PMC_PMC_IDR_PCKRDY7		(1 << 15)
/** PMC_PMC_IDR_PCKRDY6 Programmable Clock Ready 6 Interrupt Disable **/
#define PMC_PMC_IDR_PCKRDY6		(1 << 14)
/** PMC_PMC_IDR_PCKRDY5 Programmable Clock Ready 5 Interrupt Disable **/
#define PMC_PMC_IDR_PCKRDY5		(1 << 13)
/** PMC_PMC_IDR_PCKRDY4 Programmable Clock Ready 4 Interrupt Disable **/
#define PMC_PMC_IDR_PCKRDY4		(1 << 12)
/** PMC_PMC_IDR_PCKRDY3 Programmable Clock Ready 3 Interrupt Disable **/
#define PMC_PMC_IDR_PCKRDY3		(1 << 11)
/** PMC_PMC_IDR_PCKRDY2 Programmable Clock Ready 2 Interrupt Disable **/
#define PMC_PMC_IDR_PCKRDY2		(1 << 10)
/** PMC_PMC_IDR_PCKRDY1 Programmable Clock Ready 1 Interrupt Disable **/
#define PMC_PMC_IDR_PCKRDY1		(1 << 9)
/** PMC_PMC_IDR_PCKRDY0 Programmable Clock Ready 0 Interrupt Disable **/
#define PMC_PMC_IDR_PCKRDY0		(1 << 8)
/** PMC_PMC_IDR_LOCKU UTMI PLL Lock Interrupt Disable **/
#define PMC_PMC_IDR_LOCKU		(1 << 6)
/** PMC_PMC_IDR_MCKRDY Master Clock Ready Interrupt Disable **/
#define PMC_PMC_IDR_MCKRDY		(1 << 3)
/** PMC_PMC_IDR_LOCKA PLLA Lock Interrupt Disable **/
#define PMC_PMC_IDR_LOCKA		(1 << 1)
/** PMC_PMC_IDR_MOSCXTS Main Crystal Oscillator Status Interrupt Disable **/
#define PMC_PMC_IDR_MOSCXTS		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_sr PMCSR Status Register
@{*/

/** PMC_PMC_SR_XT32KERR Slow Crystal Oscillator Error **/
#define PMC_PMC_SR_XT32KERR		(1 << 21)
/** PMC_PMC_SR_FOS Clock Failure Detector Fault Output Status **/
#define PMC_PMC_SR_FOS		(1 << 20)
/** PMC_PMC_SR_CFDS Clock Failure Detector Status **/
#define PMC_PMC_SR_CFDS		(1 << 19)
/** PMC_PMC_SR_CFDEV Clock Failure Detector Event **/
#define PMC_PMC_SR_CFDEV		(1 << 18)
/** PMC_PMC_SR_MOSCRCS Main RC Oscillator Status **/
#define PMC_PMC_SR_MOSCRCS		(1 << 17)
/** PMC_PMC_SR_MOSCSELS Main Clock Source Oscillator Selection Status **/
#define PMC_PMC_SR_MOSCSELS		(1 << 16)
/** PMC_PMC_SR_PCKRDY7 Programmable Clock Ready 7 Status **/
#define PMC_PMC_SR_PCKRDY7		(1 << 15)
/** PMC_PMC_SR_PCKRDY6 Programmable Clock Ready 6 Status **/
#define PMC_PMC_SR_PCKRDY6		(1 << 14)
/** PMC_PMC_SR_PCKRDY5 Programmable Clock Ready 5 Status **/
#define PMC_PMC_SR_PCKRDY5		(1 << 13)
/** PMC_PMC_SR_PCKRDY4 Programmable Clock Ready 4 Status **/
#define PMC_PMC_SR_PCKRDY4		(1 << 12)
/** PMC_PMC_SR_PCKRDY3 Programmable Clock Ready 3 Status **/
#define PMC_PMC_SR_PCKRDY3		(1 << 11)
/** PMC_PMC_SR_PCKRDY2 Programmable Clock Ready 2 Status **/
#define PMC_PMC_SR_PCKRDY2		(1 << 10)
/** PMC_PMC_SR_PCKRDY1 Programmable Clock Ready 1 Status **/
#define PMC_PMC_SR_PCKRDY1		(1 << 9)
/** PMC_PMC_SR_PCKRDY0 Programmable Clock Ready 0 Status **/
#define PMC_PMC_SR_PCKRDY0		(1 << 8)
/** PMC_PMC_SR_OSCSELS Slow Clock Source Oscillator Selection **/
#define PMC_PMC_SR_OSCSELS		(1 << 7)
/** PMC_PMC_SR_LOCKU UTMI PLL Lock Status **/
#define PMC_PMC_SR_LOCKU		(1 << 6)
/** PMC_PMC_SR_MCKRDY Master Clock Status **/
#define PMC_PMC_SR_MCKRDY		(1 << 3)
/** PMC_PMC_SR_LOCKA PLLA Lock Status **/
#define PMC_PMC_SR_LOCKA		(1 << 1)
/** PMC_PMC_SR_MOSCXTS Main Crystal Oscillator Status **/
#define PMC_PMC_SR_MOSCXTS		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_imr PMCIMR Interrupt Mask Register
@{*/

/** PMC_PMC_IMR_XT32KERR 32.768 kHz Crystal Oscillator Error Interrupt Mask **/
#define PMC_PMC_IMR_XT32KERR		(1 << 21)
/** PMC_PMC_IMR_CFDEV Clock Failure Detector Event Interrupt Mask **/
#define PMC_PMC_IMR_CFDEV		(1 << 18)
/** PMC_PMC_IMR_MOSCRCS Main RC Status Interrupt Mask **/
#define PMC_PMC_IMR_MOSCRCS		(1 << 17)
/** PMC_PMC_IMR_MOSCSELS Main Clock Source Oscillator Selection Status Interrupt Mask **/
#define PMC_PMC_IMR_MOSCSELS		(1 << 16)
/** PMC_PMC_IMR_PCKRDY7 Programmable Clock Ready 7 Interrupt Mask **/
#define PMC_PMC_IMR_PCKRDY7		(1 << 15)
/** PMC_PMC_IMR_PCKRDY6 Programmable Clock Ready 6 Interrupt Mask **/
#define PMC_PMC_IMR_PCKRDY6		(1 << 14)
/** PMC_PMC_IMR_PCKRDY5 Programmable Clock Ready 5 Interrupt Mask **/
#define PMC_PMC_IMR_PCKRDY5		(1 << 13)
/** PMC_PMC_IMR_PCKRDY4 Programmable Clock Ready 4 Interrupt Mask **/
#define PMC_PMC_IMR_PCKRDY4		(1 << 12)
/** PMC_PMC_IMR_PCKRDY3 Programmable Clock Ready 3 Interrupt Mask **/
#define PMC_PMC_IMR_PCKRDY3		(1 << 11)
/** PMC_PMC_IMR_PCKRDY2 Programmable Clock Ready 2 Interrupt Mask **/
#define PMC_PMC_IMR_PCKRDY2		(1 << 10)
/** PMC_PMC_IMR_PCKRDY1 Programmable Clock Ready 1 Interrupt Mask **/
#define PMC_PMC_IMR_PCKRDY1		(1 << 9)
/** PMC_PMC_IMR_PCKRDY0 Programmable Clock Ready 0 Interrupt Mask **/
#define PMC_PMC_IMR_PCKRDY0		(1 << 8)
/** PMC_PMC_IMR_LOCKU UTMI PLL Lock Interrupt Mask **/
#define PMC_PMC_IMR_LOCKU		(1 << 6)
/** PMC_PMC_IMR_MCKRDY Master Clock Ready Interrupt Mask **/
#define PMC_PMC_IMR_MCKRDY		(1 << 3)
/** PMC_PMC_IMR_LOCKA PLLA Lock Interrupt Mask **/
#define PMC_PMC_IMR_LOCKA		(1 << 1)
/** PMC_PMC_IMR_MOSCXTS Main Crystal Oscillator Status Interrupt Mask **/
#define PMC_PMC_IMR_MOSCXTS		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_fsmr PMCFSMR Fast Startup Mode Register
@{*/

/** PMC_PMC_FSMR_FFLPM Force Flash Low-power Mode **/
#define PMC_PMC_FSMR_FFLPM		(1 << 23)

#define PMC_PMC_FSMR_FLPM_SHIFT		21
#define PMC_PMC_FSMR_FLPM_MASK		0x03
/** @defgroup pmc_pmc_fsmr_flpm FLPM Flash Low-power Mode
@{*/
/**@}*/

/** PMC_PMC_FSMR_LPM Low-power Mode **/
#define PMC_PMC_FSMR_LPM		(1 << 20)
/** PMC_PMC_FSMR_USBAL USB Alarm Enable **/
#define PMC_PMC_FSMR_USBAL		(1 << 18)
/** PMC_PMC_FSMR_RTCAL RTC Alarm Enable **/
#define PMC_PMC_FSMR_RTCAL		(1 << 17)
/** PMC_PMC_FSMR_RTTAL RTT Alarm Enable **/
#define PMC_PMC_FSMR_RTTAL		(1 << 16)
/** PMC_PMC_FSMR_FSTT15 Fast Startup Input Enable 15 **/
#define PMC_PMC_FSMR_FSTT15		(1 << 15)
/** PMC_PMC_FSMR_FSTT14 Fast Startup Input Enable 14 **/
#define PMC_PMC_FSMR_FSTT14		(1 << 14)
/** PMC_PMC_FSMR_FSTT13 Fast Startup Input Enable 13 **/
#define PMC_PMC_FSMR_FSTT13		(1 << 13)
/** PMC_PMC_FSMR_FSTT12 Fast Startup Input Enable 12 **/
#define PMC_PMC_FSMR_FSTT12		(1 << 12)
/** PMC_PMC_FSMR_FSTT11 Fast Startup Input Enable 11 **/
#define PMC_PMC_FSMR_FSTT11		(1 << 11)
/** PMC_PMC_FSMR_FSTT10 Fast Startup Input Enable 10 **/
#define PMC_PMC_FSMR_FSTT10		(1 << 10)
/** PMC_PMC_FSMR_FSTT9 Fast Startup Input Enable 9 **/
#define PMC_PMC_FSMR_FSTT9		(1 << 9)
/** PMC_PMC_FSMR_FSTT8 Fast Startup Input Enable 8 **/
#define PMC_PMC_FSMR_FSTT8		(1 << 8)
/** PMC_PMC_FSMR_FSTT7 Fast Startup Input Enable 7 **/
#define PMC_PMC_FSMR_FSTT7		(1 << 7)
/** PMC_PMC_FSMR_FSTT6 Fast Startup Input Enable 6 **/
#define PMC_PMC_FSMR_FSTT6		(1 << 6)
/** PMC_PMC_FSMR_FSTT5 Fast Startup Input Enable 5 **/
#define PMC_PMC_FSMR_FSTT5		(1 << 5)
/** PMC_PMC_FSMR_FSTT4 Fast Startup Input Enable 4 **/
#define PMC_PMC_FSMR_FSTT4		(1 << 4)
/** PMC_PMC_FSMR_FSTT3 Fast Startup Input Enable 3 **/
#define PMC_PMC_FSMR_FSTT3		(1 << 3)
/** PMC_PMC_FSMR_FSTT2 Fast Startup Input Enable 2 **/
#define PMC_PMC_FSMR_FSTT2		(1 << 2)
/** PMC_PMC_FSMR_FSTT1 Fast Startup Input Enable 1 **/
#define PMC_PMC_FSMR_FSTT1		(1 << 1)
/** PMC_PMC_FSMR_FSTT0 Fast Startup Input Enable 0 **/
#define PMC_PMC_FSMR_FSTT0		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_fspr PMCFSPR Fast Startup Polarity Register
@{*/

/** PMC_PMC_FSPR_FSTP15 Fast Startup Input Polarity 15 **/
#define PMC_PMC_FSPR_FSTP15		(1 << 15)
/** PMC_PMC_FSPR_FSTP14 Fast Startup Input Polarity 14 **/
#define PMC_PMC_FSPR_FSTP14		(1 << 14)
/** PMC_PMC_FSPR_FSTP13 Fast Startup Input Polarity 13 **/
#define PMC_PMC_FSPR_FSTP13		(1 << 13)
/** PMC_PMC_FSPR_FSTP12 Fast Startup Input Polarity 12 **/
#define PMC_PMC_FSPR_FSTP12		(1 << 12)
/** PMC_PMC_FSPR_FSTP11 Fast Startup Input Polarity 11 **/
#define PMC_PMC_FSPR_FSTP11		(1 << 11)
/** PMC_PMC_FSPR_FSTP10 Fast Startup Input Polarity 10 **/
#define PMC_PMC_FSPR_FSTP10		(1 << 10)
/** PMC_PMC_FSPR_FSTP9 Fast Startup Input Polarity 9 **/
#define PMC_PMC_FSPR_FSTP9		(1 << 9)
/** PMC_PMC_FSPR_FSTP8 Fast Startup Input Polarity 8 **/
#define PMC_PMC_FSPR_FSTP8		(1 << 8)
/** PMC_PMC_FSPR_FSTP7 Fast Startup Input Polarity 7 **/
#define PMC_PMC_FSPR_FSTP7		(1 << 7)
/** PMC_PMC_FSPR_FSTP6 Fast Startup Input Polarity 6 **/
#define PMC_PMC_FSPR_FSTP6		(1 << 6)
/** PMC_PMC_FSPR_FSTP5 Fast Startup Input Polarity 5 **/
#define PMC_PMC_FSPR_FSTP5		(1 << 5)
/** PMC_PMC_FSPR_FSTP4 Fast Startup Input Polarity 4 **/
#define PMC_PMC_FSPR_FSTP4		(1 << 4)
/** PMC_PMC_FSPR_FSTP3 Fast Startup Input Polarity 3 **/
#define PMC_PMC_FSPR_FSTP3		(1 << 3)
/** PMC_PMC_FSPR_FSTP2 Fast Startup Input Polarity 2 **/
#define PMC_PMC_FSPR_FSTP2		(1 << 2)
/** PMC_PMC_FSPR_FSTP1 Fast Startup Input Polarity 1 **/
#define PMC_PMC_FSPR_FSTP1		(1 << 1)
/** PMC_PMC_FSPR_FSTP0 Fast Startup Input Polarity 0 **/
#define PMC_PMC_FSPR_FSTP0		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_focr PMCFOCR Fault Output Clear Register
@{*/

/** PMC_PMC_FOCR_FOCLR Fault Output Clear **/
#define PMC_PMC_FOCR_FOCLR		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_wpmr PMCWPMR Write Protection Mode Register
@{*/


#define PMC_PMC_WPMR_WPKEY_SHIFT		8
#define PMC_PMC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup pmc_pmc_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** PMC_PMC_WPMR_WPEN Write Protection Enable **/
#define PMC_PMC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_wpsr PMCWPSR Write Protection Status Register
@{*/


#define PMC_PMC_WPSR_WPVSRC_SHIFT		8
#define PMC_PMC_WPSR_WPVSRC_MASK		0xffff
/** @defgroup pmc_pmc_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** PMC_PMC_WPSR_WPVS Write Protection Violation Status **/
#define PMC_PMC_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_pcer1 PMCPCER1 Peripheral Clock Enable Register 1
@{*/

/** PMC_PMC_PCER1_PID60 Peripheral Clock 60 Enable **/
#define PMC_PMC_PCER1_PID60		(1 << 28)
/** PMC_PMC_PCER1_PID59 Peripheral Clock 59 Enable **/
#define PMC_PMC_PCER1_PID59		(1 << 27)
/** PMC_PMC_PCER1_PID58 Peripheral Clock 58 Enable **/
#define PMC_PMC_PCER1_PID58		(1 << 26)
/** PMC_PMC_PCER1_PID57 Peripheral Clock 57 Enable **/
#define PMC_PMC_PCER1_PID57		(1 << 25)
/** PMC_PMC_PCER1_PID56 Peripheral Clock 56 Enable **/
#define PMC_PMC_PCER1_PID56		(1 << 24)
/** PMC_PMC_PCER1_PID53 Peripheral Clock 53 Enable **/
#define PMC_PMC_PCER1_PID53		(1 << 21)
/** PMC_PMC_PCER1_PID52 Peripheral Clock 52 Enable **/
#define PMC_PMC_PCER1_PID52		(1 << 20)
/** PMC_PMC_PCER1_PID51 Peripheral Clock 51 Enable **/
#define PMC_PMC_PCER1_PID51		(1 << 19)
/** PMC_PMC_PCER1_PID50 Peripheral Clock 50 Enable **/
#define PMC_PMC_PCER1_PID50		(1 << 18)
/** PMC_PMC_PCER1_PID49 Peripheral Clock 49 Enable **/
#define PMC_PMC_PCER1_PID49		(1 << 17)
/** PMC_PMC_PCER1_PID48 Peripheral Clock 48 Enable **/
#define PMC_PMC_PCER1_PID48		(1 << 16)
/** PMC_PMC_PCER1_PID47 Peripheral Clock 47 Enable **/
#define PMC_PMC_PCER1_PID47		(1 << 15)
/** PMC_PMC_PCER1_PID46 Peripheral Clock 46 Enable **/
#define PMC_PMC_PCER1_PID46		(1 << 14)
/** PMC_PMC_PCER1_PID45 Peripheral Clock 45 Enable **/
#define PMC_PMC_PCER1_PID45		(1 << 13)
/** PMC_PMC_PCER1_PID44 Peripheral Clock 44 Enable **/
#define PMC_PMC_PCER1_PID44		(1 << 12)
/** PMC_PMC_PCER1_PID43 Peripheral Clock 43 Enable **/
#define PMC_PMC_PCER1_PID43		(1 << 11)
/** PMC_PMC_PCER1_PID40 Peripheral Clock 40 Enable **/
#define PMC_PMC_PCER1_PID40		(1 << 8)
/** PMC_PMC_PCER1_PID39 Peripheral Clock 39 Enable **/
#define PMC_PMC_PCER1_PID39		(1 << 7)
/** PMC_PMC_PCER1_PID35 Peripheral Clock 35 Enable **/
#define PMC_PMC_PCER1_PID35		(1 << 3)
/** PMC_PMC_PCER1_PID34 Peripheral Clock 34 Enable **/
#define PMC_PMC_PCER1_PID34		(1 << 2)
/** PMC_PMC_PCER1_PID33 Peripheral Clock 33 Enable **/
#define PMC_PMC_PCER1_PID33		(1 << 1)
/** PMC_PMC_PCER1_PID32 Peripheral Clock 32 Enable **/
#define PMC_PMC_PCER1_PID32		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_pcdr1 PMCPCDR1 Peripheral Clock Disable Register 1
@{*/

/** PMC_PMC_PCDR1_PID60 Peripheral Clock 60 Disable **/
#define PMC_PMC_PCDR1_PID60		(1 << 28)
/** PMC_PMC_PCDR1_PID59 Peripheral Clock 59 Disable **/
#define PMC_PMC_PCDR1_PID59		(1 << 27)
/** PMC_PMC_PCDR1_PID58 Peripheral Clock 58 Disable **/
#define PMC_PMC_PCDR1_PID58		(1 << 26)
/** PMC_PMC_PCDR1_PID57 Peripheral Clock 57 Disable **/
#define PMC_PMC_PCDR1_PID57		(1 << 25)
/** PMC_PMC_PCDR1_PID56 Peripheral Clock 56 Disable **/
#define PMC_PMC_PCDR1_PID56		(1 << 24)
/** PMC_PMC_PCDR1_PID53 Peripheral Clock 53 Disable **/
#define PMC_PMC_PCDR1_PID53		(1 << 21)
/** PMC_PMC_PCDR1_PID52 Peripheral Clock 52 Disable **/
#define PMC_PMC_PCDR1_PID52		(1 << 20)
/** PMC_PMC_PCDR1_PID51 Peripheral Clock 51 Disable **/
#define PMC_PMC_PCDR1_PID51		(1 << 19)
/** PMC_PMC_PCDR1_PID50 Peripheral Clock 50 Disable **/
#define PMC_PMC_PCDR1_PID50		(1 << 18)
/** PMC_PMC_PCDR1_PID49 Peripheral Clock 49 Disable **/
#define PMC_PMC_PCDR1_PID49		(1 << 17)
/** PMC_PMC_PCDR1_PID48 Peripheral Clock 48 Disable **/
#define PMC_PMC_PCDR1_PID48		(1 << 16)
/** PMC_PMC_PCDR1_PID47 Peripheral Clock 47 Disable **/
#define PMC_PMC_PCDR1_PID47		(1 << 15)
/** PMC_PMC_PCDR1_PID46 Peripheral Clock 46 Disable **/
#define PMC_PMC_PCDR1_PID46		(1 << 14)
/** PMC_PMC_PCDR1_PID45 Peripheral Clock 45 Disable **/
#define PMC_PMC_PCDR1_PID45		(1 << 13)
/** PMC_PMC_PCDR1_PID44 Peripheral Clock 44 Disable **/
#define PMC_PMC_PCDR1_PID44		(1 << 12)
/** PMC_PMC_PCDR1_PID43 Peripheral Clock 43 Disable **/
#define PMC_PMC_PCDR1_PID43		(1 << 11)
/** PMC_PMC_PCDR1_PID40 Peripheral Clock 40 Disable **/
#define PMC_PMC_PCDR1_PID40		(1 << 8)
/** PMC_PMC_PCDR1_PID39 Peripheral Clock 39 Disable **/
#define PMC_PMC_PCDR1_PID39		(1 << 7)
/** PMC_PMC_PCDR1_PID35 Peripheral Clock 35 Disable **/
#define PMC_PMC_PCDR1_PID35		(1 << 3)
/** PMC_PMC_PCDR1_PID34 Peripheral Clock 34 Disable **/
#define PMC_PMC_PCDR1_PID34		(1 << 2)
/** PMC_PMC_PCDR1_PID33 Peripheral Clock 33 Disable **/
#define PMC_PMC_PCDR1_PID33		(1 << 1)
/** PMC_PMC_PCDR1_PID32 Peripheral Clock 32 Disable **/
#define PMC_PMC_PCDR1_PID32		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_pcsr1 PMCPCSR1 Peripheral Clock Status Register 1
@{*/

/** PMC_PMC_PCSR1_PID60 Peripheral Clock 60 Status **/
#define PMC_PMC_PCSR1_PID60		(1 << 28)
/** PMC_PMC_PCSR1_PID59 Peripheral Clock 59 Status **/
#define PMC_PMC_PCSR1_PID59		(1 << 27)
/** PMC_PMC_PCSR1_PID58 Peripheral Clock 58 Status **/
#define PMC_PMC_PCSR1_PID58		(1 << 26)
/** PMC_PMC_PCSR1_PID57 Peripheral Clock 57 Status **/
#define PMC_PMC_PCSR1_PID57		(1 << 25)
/** PMC_PMC_PCSR1_PID56 Peripheral Clock 56 Status **/
#define PMC_PMC_PCSR1_PID56		(1 << 24)
/** PMC_PMC_PCSR1_PID53 Peripheral Clock 53 Status **/
#define PMC_PMC_PCSR1_PID53		(1 << 21)
/** PMC_PMC_PCSR1_PID52 Peripheral Clock 52 Status **/
#define PMC_PMC_PCSR1_PID52		(1 << 20)
/** PMC_PMC_PCSR1_PID51 Peripheral Clock 51 Status **/
#define PMC_PMC_PCSR1_PID51		(1 << 19)
/** PMC_PMC_PCSR1_PID50 Peripheral Clock 50 Status **/
#define PMC_PMC_PCSR1_PID50		(1 << 18)
/** PMC_PMC_PCSR1_PID49 Peripheral Clock 49 Status **/
#define PMC_PMC_PCSR1_PID49		(1 << 17)
/** PMC_PMC_PCSR1_PID48 Peripheral Clock 48 Status **/
#define PMC_PMC_PCSR1_PID48		(1 << 16)
/** PMC_PMC_PCSR1_PID47 Peripheral Clock 47 Status **/
#define PMC_PMC_PCSR1_PID47		(1 << 15)
/** PMC_PMC_PCSR1_PID46 Peripheral Clock 46 Status **/
#define PMC_PMC_PCSR1_PID46		(1 << 14)
/** PMC_PMC_PCSR1_PID45 Peripheral Clock 45 Status **/
#define PMC_PMC_PCSR1_PID45		(1 << 13)
/** PMC_PMC_PCSR1_PID44 Peripheral Clock 44 Status **/
#define PMC_PMC_PCSR1_PID44		(1 << 12)
/** PMC_PMC_PCSR1_PID43 Peripheral Clock 43 Status **/
#define PMC_PMC_PCSR1_PID43		(1 << 11)
/** PMC_PMC_PCSR1_PID40 Peripheral Clock 40 Status **/
#define PMC_PMC_PCSR1_PID40		(1 << 8)
/** PMC_PMC_PCSR1_PID39 Peripheral Clock 39 Status **/
#define PMC_PMC_PCSR1_PID39		(1 << 7)
/** PMC_PMC_PCSR1_PID35 Peripheral Clock 35 Status **/
#define PMC_PMC_PCSR1_PID35		(1 << 3)
/** PMC_PMC_PCSR1_PID34 Peripheral Clock 34 Status **/
#define PMC_PMC_PCSR1_PID34		(1 << 2)
/** PMC_PMC_PCSR1_PID33 Peripheral Clock 33 Status **/
#define PMC_PMC_PCSR1_PID33		(1 << 1)
/** PMC_PMC_PCSR1_PID32 Peripheral Clock 32 Status **/
#define PMC_PMC_PCSR1_PID32		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_pcr PMCPCR Peripheral Control Register
@{*/

/** PMC_PMC_PCR_GCLKEN Generic Clock Enable **/
#define PMC_PMC_PCR_GCLKEN		(1 << 29)
/** PMC_PMC_PCR_EN Enable **/
#define PMC_PMC_PCR_EN		(1 << 28)

#define PMC_PMC_PCR_GCLKDIV_SHIFT		20
#define PMC_PMC_PCR_GCLKDIV_MASK		0xff
/** @defgroup pmc_pmc_pcr_gclkdiv GCLKDIV Generic Clock Division Ratio
@{*/
/**@}*/

/** PMC_PMC_PCR_CMD Command **/
#define PMC_PMC_PCR_CMD		(1 << 12)

#define PMC_PMC_PCR_GCLKCSS_SHIFT		8
#define PMC_PMC_PCR_GCLKCSS_MASK		0x07
/** @defgroup pmc_pmc_pcr_gclkcss GCLKCSS Generic Clock Source Selection
@{*/
/**@}*/


#define PMC_PMC_PCR_PID_SHIFT		0
#define PMC_PMC_PCR_PID_MASK		0x7f
/** @defgroup pmc_pmc_pcr_pid PID Peripheral ID
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_ocr PMCOCR Oscillator Calibration Register
@{*/

/** PMC_PMC_OCR_SEL12 Selection of Main RC Oscillator Calibration Bits for 12 MHz **/
#define PMC_PMC_OCR_SEL12		(1 << 23)

#define PMC_PMC_OCR_CAL12_SHIFT		16
#define PMC_PMC_OCR_CAL12_MASK		0x7f
/** @defgroup pmc_pmc_ocr_cal12 CAL12 Main RC Oscillator Calibration Bits for 12 MHz
@{*/
/**@}*/

/** PMC_PMC_OCR_SEL8 Selection of Main RC Oscillator Calibration Bits for 8 MHz **/
#define PMC_PMC_OCR_SEL8		(1 << 15)

#define PMC_PMC_OCR_CAL8_SHIFT		8
#define PMC_PMC_OCR_CAL8_MASK		0x7f
/** @defgroup pmc_pmc_ocr_cal8 CAL8 Main RC Oscillator Calibration Bits for 8 MHz
@{*/
/**@}*/

/** PMC_PMC_OCR_SEL4 Selection of Main RC Oscillator Calibration Bits for 4 MHz **/
#define PMC_PMC_OCR_SEL4		(1 << 7)

#define PMC_PMC_OCR_CAL4_SHIFT		0
#define PMC_PMC_OCR_CAL4_MASK		0x7f
/** @defgroup pmc_pmc_ocr_cal4 CAL4 Main RC Oscillator Calibration Bits for 4 MHz
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_slpwk_er0 PMCSLPWKER0 SleepWalking Enable Register 0
@{*/

/** PMC_PMC_SLPWK_ER0_PID31 Peripheral 31 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID31		(1 << 31)
/** PMC_PMC_SLPWK_ER0_PID30 Peripheral 30 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID30		(1 << 30)
/** PMC_PMC_SLPWK_ER0_PID29 Peripheral 29 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID29		(1 << 29)
/** PMC_PMC_SLPWK_ER0_PID28 Peripheral 28 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID28		(1 << 28)
/** PMC_PMC_SLPWK_ER0_PID27 Peripheral 27 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID27		(1 << 27)
/** PMC_PMC_SLPWK_ER0_PID26 Peripheral 26 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID26		(1 << 26)
/** PMC_PMC_SLPWK_ER0_PID25 Peripheral 25 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID25		(1 << 25)
/** PMC_PMC_SLPWK_ER0_PID24 Peripheral 24 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID24		(1 << 24)
/** PMC_PMC_SLPWK_ER0_PID23 Peripheral 23 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID23		(1 << 23)
/** PMC_PMC_SLPWK_ER0_PID22 Peripheral 22 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID22		(1 << 22)
/** PMC_PMC_SLPWK_ER0_PID20 Peripheral 20 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID20		(1 << 20)
/** PMC_PMC_SLPWK_ER0_PID19 Peripheral 19 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID19		(1 << 19)
/** PMC_PMC_SLPWK_ER0_PID16 Peripheral 16 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID16		(1 << 16)
/** PMC_PMC_SLPWK_ER0_PID14 Peripheral 14 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID14		(1 << 14)
/** PMC_PMC_SLPWK_ER0_PID13 Peripheral 13 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID13		(1 << 13)
/** PMC_PMC_SLPWK_ER0_PID11 Peripheral 11 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID11		(1 << 11)
/** PMC_PMC_SLPWK_ER0_PID10 Peripheral 10 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID10		(1 << 10)
/** PMC_PMC_SLPWK_ER0_PID8 Peripheral 8 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID8		(1 << 8)
/** PMC_PMC_SLPWK_ER0_PID7 Peripheral 7 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER0_PID7		(1 << 7)

/**@}*/

/** @defgroup pmc_pmc_slpwk_dr0 PMCSLPWKDR0 SleepWalking Disable Register 0
@{*/

/** PMC_PMC_SLPWK_DR0_PID31 Peripheral 31 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID31		(1 << 31)
/** PMC_PMC_SLPWK_DR0_PID30 Peripheral 30 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID30		(1 << 30)
/** PMC_PMC_SLPWK_DR0_PID29 Peripheral 29 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID29		(1 << 29)
/** PMC_PMC_SLPWK_DR0_PID28 Peripheral 28 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID28		(1 << 28)
/** PMC_PMC_SLPWK_DR0_PID27 Peripheral 27 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID27		(1 << 27)
/** PMC_PMC_SLPWK_DR0_PID26 Peripheral 26 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID26		(1 << 26)
/** PMC_PMC_SLPWK_DR0_PID25 Peripheral 25 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID25		(1 << 25)
/** PMC_PMC_SLPWK_DR0_PID24 Peripheral 24 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID24		(1 << 24)
/** PMC_PMC_SLPWK_DR0_PID23 Peripheral 23 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID23		(1 << 23)
/** PMC_PMC_SLPWK_DR0_PID22 Peripheral 22 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID22		(1 << 22)
/** PMC_PMC_SLPWK_DR0_PID20 Peripheral 20 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID20		(1 << 20)
/** PMC_PMC_SLPWK_DR0_PID19 Peripheral 19 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID19		(1 << 19)
/** PMC_PMC_SLPWK_DR0_PID16 Peripheral 16 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID16		(1 << 16)
/** PMC_PMC_SLPWK_DR0_PID14 Peripheral 14 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID14		(1 << 14)
/** PMC_PMC_SLPWK_DR0_PID13 Peripheral 13 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID13		(1 << 13)
/** PMC_PMC_SLPWK_DR0_PID11 Peripheral 11 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID11		(1 << 11)
/** PMC_PMC_SLPWK_DR0_PID10 Peripheral 10 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID10		(1 << 10)
/** PMC_PMC_SLPWK_DR0_PID8 Peripheral 8 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID8		(1 << 8)
/** PMC_PMC_SLPWK_DR0_PID7 Peripheral 7 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR0_PID7		(1 << 7)

/**@}*/

/** @defgroup pmc_pmc_slpwk_sr0 PMCSLPWKSR0 SleepWalking Status Register 0
@{*/

/** PMC_PMC_SLPWK_SR0_PID31 Peripheral 31 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID31		(1 << 31)
/** PMC_PMC_SLPWK_SR0_PID30 Peripheral 30 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID30		(1 << 30)
/** PMC_PMC_SLPWK_SR0_PID29 Peripheral 29 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID29		(1 << 29)
/** PMC_PMC_SLPWK_SR0_PID28 Peripheral 28 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID28		(1 << 28)
/** PMC_PMC_SLPWK_SR0_PID27 Peripheral 27 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID27		(1 << 27)
/** PMC_PMC_SLPWK_SR0_PID26 Peripheral 26 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID26		(1 << 26)
/** PMC_PMC_SLPWK_SR0_PID25 Peripheral 25 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID25		(1 << 25)
/** PMC_PMC_SLPWK_SR0_PID24 Peripheral 24 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID24		(1 << 24)
/** PMC_PMC_SLPWK_SR0_PID23 Peripheral 23 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID23		(1 << 23)
/** PMC_PMC_SLPWK_SR0_PID22 Peripheral 22 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID22		(1 << 22)
/** PMC_PMC_SLPWK_SR0_PID20 Peripheral 20 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID20		(1 << 20)
/** PMC_PMC_SLPWK_SR0_PID19 Peripheral 19 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID19		(1 << 19)
/** PMC_PMC_SLPWK_SR0_PID16 Peripheral 16 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID16		(1 << 16)
/** PMC_PMC_SLPWK_SR0_PID14 Peripheral 14 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID14		(1 << 14)
/** PMC_PMC_SLPWK_SR0_PID13 Peripheral 13 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID13		(1 << 13)
/** PMC_PMC_SLPWK_SR0_PID11 Peripheral 11 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID11		(1 << 11)
/** PMC_PMC_SLPWK_SR0_PID10 Peripheral 10 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID10		(1 << 10)
/** PMC_PMC_SLPWK_SR0_PID8 Peripheral 8 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID8		(1 << 8)
/** PMC_PMC_SLPWK_SR0_PID7 Peripheral 7 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR0_PID7		(1 << 7)

/**@}*/

/** @defgroup pmc_pmc_slpwk_asr0 PMCSLPWKASR0 SleepWalking Activity Status Register 0
@{*/

/** PMC_PMC_SLPWK_ASR0_PID31 Peripheral 31 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID31		(1 << 31)
/** PMC_PMC_SLPWK_ASR0_PID30 Peripheral 30 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID30		(1 << 30)
/** PMC_PMC_SLPWK_ASR0_PID29 Peripheral 29 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID29		(1 << 29)
/** PMC_PMC_SLPWK_ASR0_PID28 Peripheral 28 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID28		(1 << 28)
/** PMC_PMC_SLPWK_ASR0_PID27 Peripheral 27 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID27		(1 << 27)
/** PMC_PMC_SLPWK_ASR0_PID26 Peripheral 26 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID26		(1 << 26)
/** PMC_PMC_SLPWK_ASR0_PID25 Peripheral 25 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID25		(1 << 25)
/** PMC_PMC_SLPWK_ASR0_PID24 Peripheral 24 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID24		(1 << 24)
/** PMC_PMC_SLPWK_ASR0_PID23 Peripheral 23 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID23		(1 << 23)
/** PMC_PMC_SLPWK_ASR0_PID22 Peripheral 22 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID22		(1 << 22)
/** PMC_PMC_SLPWK_ASR0_PID20 Peripheral 20 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID20		(1 << 20)
/** PMC_PMC_SLPWK_ASR0_PID19 Peripheral 19 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID19		(1 << 19)
/** PMC_PMC_SLPWK_ASR0_PID16 Peripheral 16 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID16		(1 << 16)
/** PMC_PMC_SLPWK_ASR0_PID14 Peripheral 14 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID14		(1 << 14)
/** PMC_PMC_SLPWK_ASR0_PID13 Peripheral 13 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID13		(1 << 13)
/** PMC_PMC_SLPWK_ASR0_PID11 Peripheral 11 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID11		(1 << 11)
/** PMC_PMC_SLPWK_ASR0_PID10 Peripheral 10 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID10		(1 << 10)
/** PMC_PMC_SLPWK_ASR0_PID8 Peripheral 8 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID8		(1 << 8)
/** PMC_PMC_SLPWK_ASR0_PID7 Peripheral 7 Activity Status **/
#define PMC_PMC_SLPWK_ASR0_PID7		(1 << 7)

/**@}*/

/** @defgroup pmc_pmc_pmmr PMCPMMR PLL Maximum Multiplier Value Register
@{*/


#define PMC_PMC_PMMR_PLLA_MMAX_SHIFT		0
#define PMC_PMC_PMMR_PLLA_MMAX_MASK		0x7ff
/** @defgroup pmc_pmc_pmmr_plla_mmax PLLAMMAX PLLA Maximum Allowed Multiplier Value
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_slpwk_er1 PMCSLPWKER1 SleepWalking Enable Register 1
@{*/

/** PMC_PMC_SLPWK_ER1_PID60 Peripheral 60 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID60		(1 << 28)
/** PMC_PMC_SLPWK_ER1_PID59 Peripheral 59 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID59		(1 << 27)
/** PMC_PMC_SLPWK_ER1_PID58 Peripheral 58 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID58		(1 << 26)
/** PMC_PMC_SLPWK_ER1_PID57 Peripheral 57 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID57		(1 << 25)
/** PMC_PMC_SLPWK_ER1_PID56 Peripheral 56 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID56		(1 << 24)
/** PMC_PMC_SLPWK_ER1_PID53 Peripheral 53 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID53		(1 << 21)
/** PMC_PMC_SLPWK_ER1_PID52 Peripheral 52 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID52		(1 << 20)
/** PMC_PMC_SLPWK_ER1_PID51 Peripheral 51 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID51		(1 << 19)
/** PMC_PMC_SLPWK_ER1_PID50 Peripheral 50 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID50		(1 << 18)
/** PMC_PMC_SLPWK_ER1_PID49 Peripheral 49 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID49		(1 << 17)
/** PMC_PMC_SLPWK_ER1_PID48 Peripheral 48 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID48		(1 << 16)
/** PMC_PMC_SLPWK_ER1_PID47 Peripheral 47 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID47		(1 << 15)
/** PMC_PMC_SLPWK_ER1_PID46 Peripheral 46 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID46		(1 << 14)
/** PMC_PMC_SLPWK_ER1_PID45 Peripheral 45 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID45		(1 << 13)
/** PMC_PMC_SLPWK_ER1_PID44 Peripheral 44 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID44		(1 << 12)
/** PMC_PMC_SLPWK_ER1_PID43 Peripheral 43 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID43		(1 << 11)
/** PMC_PMC_SLPWK_ER1_PID40 Peripheral 40 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID40		(1 << 8)
/** PMC_PMC_SLPWK_ER1_PID39 Peripheral 39 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID39		(1 << 7)
/** PMC_PMC_SLPWK_ER1_PID35 Peripheral 35 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID35		(1 << 3)
/** PMC_PMC_SLPWK_ER1_PID34 Peripheral 34 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID34		(1 << 2)
/** PMC_PMC_SLPWK_ER1_PID33 Peripheral 33 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID33		(1 << 1)
/** PMC_PMC_SLPWK_ER1_PID32 Peripheral 32 SleepWalking Enable **/
#define PMC_PMC_SLPWK_ER1_PID32		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_slpwk_dr1 PMCSLPWKDR1 SleepWalking Disable Register 1
@{*/

/** PMC_PMC_SLPWK_DR1_PID60 Peripheral 60 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID60		(1 << 28)
/** PMC_PMC_SLPWK_DR1_PID59 Peripheral 59 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID59		(1 << 27)
/** PMC_PMC_SLPWK_DR1_PID58 Peripheral 58 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID58		(1 << 26)
/** PMC_PMC_SLPWK_DR1_PID57 Peripheral 57 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID57		(1 << 25)
/** PMC_PMC_SLPWK_DR1_PID56 Peripheral 56 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID56		(1 << 24)
/** PMC_PMC_SLPWK_DR1_PID53 Peripheral 53 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID53		(1 << 21)
/** PMC_PMC_SLPWK_DR1_PID52 Peripheral 52 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID52		(1 << 20)
/** PMC_PMC_SLPWK_DR1_PID51 Peripheral 51 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID51		(1 << 19)
/** PMC_PMC_SLPWK_DR1_PID50 Peripheral 50 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID50		(1 << 18)
/** PMC_PMC_SLPWK_DR1_PID49 Peripheral 49 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID49		(1 << 17)
/** PMC_PMC_SLPWK_DR1_PID48 Peripheral 48 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID48		(1 << 16)
/** PMC_PMC_SLPWK_DR1_PID47 Peripheral 47 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID47		(1 << 15)
/** PMC_PMC_SLPWK_DR1_PID46 Peripheral 46 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID46		(1 << 14)
/** PMC_PMC_SLPWK_DR1_PID45 Peripheral 45 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID45		(1 << 13)
/** PMC_PMC_SLPWK_DR1_PID44 Peripheral 44 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID44		(1 << 12)
/** PMC_PMC_SLPWK_DR1_PID43 Peripheral 43 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID43		(1 << 11)
/** PMC_PMC_SLPWK_DR1_PID40 Peripheral 40 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID40		(1 << 8)
/** PMC_PMC_SLPWK_DR1_PID39 Peripheral 39 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID39		(1 << 7)
/** PMC_PMC_SLPWK_DR1_PID35 Peripheral 35 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID35		(1 << 3)
/** PMC_PMC_SLPWK_DR1_PID34 Peripheral 34 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID34		(1 << 2)
/** PMC_PMC_SLPWK_DR1_PID33 Peripheral 33 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID33		(1 << 1)
/** PMC_PMC_SLPWK_DR1_PID32 Peripheral 32 SleepWalking Disable **/
#define PMC_PMC_SLPWK_DR1_PID32		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_slpwk_sr1 PMCSLPWKSR1 SleepWalking Status Register 1
@{*/

/** PMC_PMC_SLPWK_SR1_PID60 Peripheral 60 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID60		(1 << 28)
/** PMC_PMC_SLPWK_SR1_PID59 Peripheral 59 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID59		(1 << 27)
/** PMC_PMC_SLPWK_SR1_PID58 Peripheral 58 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID58		(1 << 26)
/** PMC_PMC_SLPWK_SR1_PID57 Peripheral 57 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID57		(1 << 25)
/** PMC_PMC_SLPWK_SR1_PID56 Peripheral 56 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID56		(1 << 24)
/** PMC_PMC_SLPWK_SR1_PID53 Peripheral 53 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID53		(1 << 21)
/** PMC_PMC_SLPWK_SR1_PID52 Peripheral 52 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID52		(1 << 20)
/** PMC_PMC_SLPWK_SR1_PID51 Peripheral 51 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID51		(1 << 19)
/** PMC_PMC_SLPWK_SR1_PID50 Peripheral 50 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID50		(1 << 18)
/** PMC_PMC_SLPWK_SR1_PID49 Peripheral 49 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID49		(1 << 17)
/** PMC_PMC_SLPWK_SR1_PID48 Peripheral 48 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID48		(1 << 16)
/** PMC_PMC_SLPWK_SR1_PID47 Peripheral 47 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID47		(1 << 15)
/** PMC_PMC_SLPWK_SR1_PID46 Peripheral 46 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID46		(1 << 14)
/** PMC_PMC_SLPWK_SR1_PID45 Peripheral 45 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID45		(1 << 13)
/** PMC_PMC_SLPWK_SR1_PID44 Peripheral 44 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID44		(1 << 12)
/** PMC_PMC_SLPWK_SR1_PID43 Peripheral 43 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID43		(1 << 11)
/** PMC_PMC_SLPWK_SR1_PID40 Peripheral 40 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID40		(1 << 8)
/** PMC_PMC_SLPWK_SR1_PID39 Peripheral 39 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID39		(1 << 7)
/** PMC_PMC_SLPWK_SR1_PID35 Peripheral 35 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID35		(1 << 3)
/** PMC_PMC_SLPWK_SR1_PID34 Peripheral 34 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID34		(1 << 2)
/** PMC_PMC_SLPWK_SR1_PID33 Peripheral 33 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID33		(1 << 1)
/** PMC_PMC_SLPWK_SR1_PID32 Peripheral 32 SleepWalking Status **/
#define PMC_PMC_SLPWK_SR1_PID32		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_slpwk_asr1 PMCSLPWKASR1 SleepWalking Activity Status Register 1
@{*/

/** PMC_PMC_SLPWK_ASR1_PID60 Peripheral 60 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID60		(1 << 28)
/** PMC_PMC_SLPWK_ASR1_PID59 Peripheral 59 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID59		(1 << 27)
/** PMC_PMC_SLPWK_ASR1_PID58 Peripheral 58 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID58		(1 << 26)
/** PMC_PMC_SLPWK_ASR1_PID57 Peripheral 57 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID57		(1 << 25)
/** PMC_PMC_SLPWK_ASR1_PID56 Peripheral 56 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID56		(1 << 24)
/** PMC_PMC_SLPWK_ASR1_PID53 Peripheral 53 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID53		(1 << 21)
/** PMC_PMC_SLPWK_ASR1_PID52 Peripheral 52 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID52		(1 << 20)
/** PMC_PMC_SLPWK_ASR1_PID51 Peripheral 51 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID51		(1 << 19)
/** PMC_PMC_SLPWK_ASR1_PID50 Peripheral 50 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID50		(1 << 18)
/** PMC_PMC_SLPWK_ASR1_PID49 Peripheral 49 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID49		(1 << 17)
/** PMC_PMC_SLPWK_ASR1_PID48 Peripheral 48 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID48		(1 << 16)
/** PMC_PMC_SLPWK_ASR1_PID47 Peripheral 47 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID47		(1 << 15)
/** PMC_PMC_SLPWK_ASR1_PID46 Peripheral 46 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID46		(1 << 14)
/** PMC_PMC_SLPWK_ASR1_PID45 Peripheral 45 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID45		(1 << 13)
/** PMC_PMC_SLPWK_ASR1_PID44 Peripheral 44 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID44		(1 << 12)
/** PMC_PMC_SLPWK_ASR1_PID43 Peripheral 43 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID43		(1 << 11)
/** PMC_PMC_SLPWK_ASR1_PID40 Peripheral 40 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID40		(1 << 8)
/** PMC_PMC_SLPWK_ASR1_PID39 Peripheral 39 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID39		(1 << 7)
/** PMC_PMC_SLPWK_ASR1_PID35 Peripheral 35 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID35		(1 << 3)
/** PMC_PMC_SLPWK_ASR1_PID34 Peripheral 34 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID34		(1 << 2)
/** PMC_PMC_SLPWK_ASR1_PID33 Peripheral 33 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID33		(1 << 1)
/** PMC_PMC_SLPWK_ASR1_PID32 Peripheral 32 Activity Status **/
#define PMC_PMC_SLPWK_ASR1_PID32		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_slpwk_aipr PMCSLPWKAIPR SleepWalking Activity In Progress Register
@{*/

/** PMC_PMC_SLPWK_AIPR_AIP Activity In Progress **/
#define PMC_PMC_SLPWK_AIPR_AIP		(1 << 0)

/**@}*/

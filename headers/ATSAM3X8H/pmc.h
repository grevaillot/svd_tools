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
/** PMC_PMC_PCK[0] Programmable Clock 0 Register **/
#define PMC_PMC_PCK[0]			MMIO32(PMC_BASE + 0x40)
/** PMC_PMC_PCK[1] Programmable Clock 0 Register **/
#define PMC_PMC_PCK[1]			MMIO32(PMC_BASE + 0x44)
/** PMC_PMC_PCK[2] Programmable Clock 0 Register **/
#define PMC_PMC_PCK[2]			MMIO32(PMC_BASE + 0x48)
/** PMC_PMC_IER Interrupt Enable Register **/
#define PMC_PMC_IER			MMIO32(PMC_BASE + 0x60)
/** PMC_PMC_IDR Interrupt Disable Register **/
#define PMC_PMC_IDR			MMIO32(PMC_BASE + 0x64)
/** PMC_PMC_SR Status Register **/
#define PMC_PMC_SR			MMIO32(PMC_BASE + 0x68)
/** PMC_PMC_IMR Interrupt Mask Register **/
#define PMC_PMC_IMR			MMIO32(PMC_BASE + 0x6c)
/** PMC_PMC_FSMR Fast Start-up Mode Register **/
#define PMC_PMC_FSMR			MMIO32(PMC_BASE + 0x70)
/** PMC_PMC_FSPR Fast Start-up Polarity Register **/
#define PMC_PMC_FSPR			MMIO32(PMC_BASE + 0x74)
/** PMC_PMC_FOCR Fault Output Clear Register **/
#define PMC_PMC_FOCR			MMIO32(PMC_BASE + 0x78)
/** PMC_PMC_WPMR Write Protect Mode Register **/
#define PMC_PMC_WPMR			MMIO32(PMC_BASE + 0xe4)
/** PMC_PMC_WPSR Write Protect Status Register **/
#define PMC_PMC_WPSR			MMIO32(PMC_BASE + 0xe8)
/** PMC_PMC_PCER1 Peripheral Clock Enable Register 1 **/
#define PMC_PMC_PCER1			MMIO32(PMC_BASE + 0x100)
/** PMC_PMC_PCDR1 Peripheral Clock Disable Register 1 **/
#define PMC_PMC_PCDR1			MMIO32(PMC_BASE + 0x104)
/** PMC_PMC_PCSR1 Peripheral Clock Status Register 1 **/
#define PMC_PMC_PCSR1			MMIO32(PMC_BASE + 0x108)
/** PMC_PMC_PCR Peripheral Control Register **/
#define PMC_PMC_PCR			MMIO32(PMC_BASE + 0x10c)

/**@}*/


/** @defgroup pmc_pmc_scer PMCSCER System Clock Enable Register
@{*/

/** PMC_PMC_SCER_PCK2 Programmable Clock 2 Output Enable **/
#define PMC_PMC_SCER_PCK2		(1 << 10)
/** PMC_PMC_SCER_PCK1 Programmable Clock 1 Output Enable **/
#define PMC_PMC_SCER_PCK1		(1 << 9)
/** PMC_PMC_SCER_PCK0 Programmable Clock 0 Output Enable **/
#define PMC_PMC_SCER_PCK0		(1 << 8)
/** PMC_PMC_SCER_UOTGCLK Enable USB OTG Clock (48 MHz, USB_48M) for UTMI **/
#define PMC_PMC_SCER_UOTGCLK		(1 << 5)

/**@}*/

/** @defgroup pmc_pmc_scdr PMCSCDR System Clock Disable Register
@{*/

/** PMC_PMC_SCDR_PCK2 Programmable Clock 2 Output Disable **/
#define PMC_PMC_SCDR_PCK2		(1 << 10)
/** PMC_PMC_SCDR_PCK1 Programmable Clock 1 Output Disable **/
#define PMC_PMC_SCDR_PCK1		(1 << 9)
/** PMC_PMC_SCDR_PCK0 Programmable Clock 0 Output Disable **/
#define PMC_PMC_SCDR_PCK0		(1 << 8)
/** PMC_PMC_SCDR_UOTGCLK Disable USB OTG Clock (48 MHz, USB_48M) for UTMI **/
#define PMC_PMC_SCDR_UOTGCLK		(1 << 5)

/**@}*/

/** @defgroup pmc_pmc_scsr PMCSCSR System Clock Status Register
@{*/

/** PMC_PMC_SCSR_PCK2 Programmable Clock 2 Output Status **/
#define PMC_PMC_SCSR_PCK2		(1 << 10)
/** PMC_PMC_SCSR_PCK1 Programmable Clock 1 Output Status **/
#define PMC_PMC_SCSR_PCK1		(1 << 9)
/** PMC_PMC_SCSR_PCK0 Programmable Clock 0 Output Status **/
#define PMC_PMC_SCSR_PCK0		(1 << 8)
/** PMC_PMC_SCSR_UOTGCLK USB OTG Clock (48 MHz, USB_48M) Clock Status **/
#define PMC_PMC_SCSR_UOTGCLK		(1 << 5)

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
/** PMC_PMC_PCER0_PID21 Peripheral Clock 21 Enable **/
#define PMC_PMC_PCER0_PID21		(1 << 21)
/** PMC_PMC_PCER0_PID20 Peripheral Clock 20 Enable **/
#define PMC_PMC_PCER0_PID20		(1 << 20)
/** PMC_PMC_PCER0_PID19 Peripheral Clock 19 Enable **/
#define PMC_PMC_PCER0_PID19		(1 << 19)
/** PMC_PMC_PCER0_PID18 Peripheral Clock 18 Enable **/
#define PMC_PMC_PCER0_PID18		(1 << 18)
/** PMC_PMC_PCER0_PID17 Peripheral Clock 17 Enable **/
#define PMC_PMC_PCER0_PID17		(1 << 17)
/** PMC_PMC_PCER0_PID16 Peripheral Clock 16 Enable **/
#define PMC_PMC_PCER0_PID16		(1 << 16)
/** PMC_PMC_PCER0_PID15 Peripheral Clock 15 Enable **/
#define PMC_PMC_PCER0_PID15		(1 << 15)
/** PMC_PMC_PCER0_PID14 Peripheral Clock 14 Enable **/
#define PMC_PMC_PCER0_PID14		(1 << 14)
/** PMC_PMC_PCER0_PID13 Peripheral Clock 13 Enable **/
#define PMC_PMC_PCER0_PID13		(1 << 13)
/** PMC_PMC_PCER0_PID12 Peripheral Clock 12 Enable **/
#define PMC_PMC_PCER0_PID12		(1 << 12)
/** PMC_PMC_PCER0_PID11 Peripheral Clock 11 Enable **/
#define PMC_PMC_PCER0_PID11		(1 << 11)
/** PMC_PMC_PCER0_PID10 Peripheral Clock 10 Enable **/
#define PMC_PMC_PCER0_PID10		(1 << 10)
/** PMC_PMC_PCER0_PID9 Peripheral Clock 9 Enable **/
#define PMC_PMC_PCER0_PID9		(1 << 9)
/** PMC_PMC_PCER0_PID8 Peripheral Clock 8 Enable **/
#define PMC_PMC_PCER0_PID8		(1 << 8)

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
/** PMC_PMC_PCDR0_PID21 Peripheral Clock 21 Disable **/
#define PMC_PMC_PCDR0_PID21		(1 << 21)
/** PMC_PMC_PCDR0_PID20 Peripheral Clock 20 Disable **/
#define PMC_PMC_PCDR0_PID20		(1 << 20)
/** PMC_PMC_PCDR0_PID19 Peripheral Clock 19 Disable **/
#define PMC_PMC_PCDR0_PID19		(1 << 19)
/** PMC_PMC_PCDR0_PID18 Peripheral Clock 18 Disable **/
#define PMC_PMC_PCDR0_PID18		(1 << 18)
/** PMC_PMC_PCDR0_PID17 Peripheral Clock 17 Disable **/
#define PMC_PMC_PCDR0_PID17		(1 << 17)
/** PMC_PMC_PCDR0_PID16 Peripheral Clock 16 Disable **/
#define PMC_PMC_PCDR0_PID16		(1 << 16)
/** PMC_PMC_PCDR0_PID15 Peripheral Clock 15 Disable **/
#define PMC_PMC_PCDR0_PID15		(1 << 15)
/** PMC_PMC_PCDR0_PID14 Peripheral Clock 14 Disable **/
#define PMC_PMC_PCDR0_PID14		(1 << 14)
/** PMC_PMC_PCDR0_PID13 Peripheral Clock 13 Disable **/
#define PMC_PMC_PCDR0_PID13		(1 << 13)
/** PMC_PMC_PCDR0_PID12 Peripheral Clock 12 Disable **/
#define PMC_PMC_PCDR0_PID12		(1 << 12)
/** PMC_PMC_PCDR0_PID11 Peripheral Clock 11 Disable **/
#define PMC_PMC_PCDR0_PID11		(1 << 11)
/** PMC_PMC_PCDR0_PID10 Peripheral Clock 10 Disable **/
#define PMC_PMC_PCDR0_PID10		(1 << 10)
/** PMC_PMC_PCDR0_PID9 Peripheral Clock 9 Disable **/
#define PMC_PMC_PCDR0_PID9		(1 << 9)
/** PMC_PMC_PCDR0_PID8 Peripheral Clock 8 Disable **/
#define PMC_PMC_PCDR0_PID8		(1 << 8)

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
/** PMC_PMC_PCSR0_PID21 Peripheral Clock 21 Status **/
#define PMC_PMC_PCSR0_PID21		(1 << 21)
/** PMC_PMC_PCSR0_PID20 Peripheral Clock 20 Status **/
#define PMC_PMC_PCSR0_PID20		(1 << 20)
/** PMC_PMC_PCSR0_PID19 Peripheral Clock 19 Status **/
#define PMC_PMC_PCSR0_PID19		(1 << 19)
/** PMC_PMC_PCSR0_PID18 Peripheral Clock 18 Status **/
#define PMC_PMC_PCSR0_PID18		(1 << 18)
/** PMC_PMC_PCSR0_PID17 Peripheral Clock 17 Status **/
#define PMC_PMC_PCSR0_PID17		(1 << 17)
/** PMC_PMC_PCSR0_PID16 Peripheral Clock 16 Status **/
#define PMC_PMC_PCSR0_PID16		(1 << 16)
/** PMC_PMC_PCSR0_PID15 Peripheral Clock 15 Status **/
#define PMC_PMC_PCSR0_PID15		(1 << 15)
/** PMC_PMC_PCSR0_PID14 Peripheral Clock 14 Status **/
#define PMC_PMC_PCSR0_PID14		(1 << 14)
/** PMC_PMC_PCSR0_PID13 Peripheral Clock 13 Status **/
#define PMC_PMC_PCSR0_PID13		(1 << 13)
/** PMC_PMC_PCSR0_PID12 Peripheral Clock 12 Status **/
#define PMC_PMC_PCSR0_PID12		(1 << 12)
/** PMC_PMC_PCSR0_PID11 Peripheral Clock 11 Status **/
#define PMC_PMC_PCSR0_PID11		(1 << 11)
/** PMC_PMC_PCSR0_PID10 Peripheral Clock 10 Status **/
#define PMC_PMC_PCSR0_PID10		(1 << 10)
/** PMC_PMC_PCSR0_PID9 Peripheral Clock 9 Status **/
#define PMC_PMC_PCSR0_PID9		(1 << 9)
/** PMC_PMC_PCSR0_PID8 Peripheral Clock 8 Status **/
#define PMC_PMC_PCSR0_PID8		(1 << 8)

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

/** PMC_CKGR_MOR_CFDEN Clock Failure Detector Enable **/
#define PMC_CKGR_MOR_CFDEN		(1 << 25)
/** PMC_CKGR_MOR_MOSCSEL Main Oscillator Selection **/
#define PMC_CKGR_MOR_MOSCSEL		(1 << 24)

#define PMC_CKGR_MOR_KEY_SHIFT		16
#define PMC_CKGR_MOR_KEY_MASK		0xff
/** @defgroup pmc_ckgr_mor_key KEY Write Access Password
@{*/
/**@}*/


#define PMC_CKGR_MOR_MOSCXTST_SHIFT		8
#define PMC_CKGR_MOR_MOSCXTST_MASK		0xff
/** @defgroup pmc_ckgr_mor_moscxtst MOSCXTST Main Crystal Oscillator Start-up Time
@{*/
/**@}*/


#define PMC_CKGR_MOR_MOSCRCF_SHIFT		4
#define PMC_CKGR_MOR_MOSCRCF_MASK		0x07
/** @defgroup pmc_ckgr_mor_moscrcf MOSCRCF Main On-Chip RC Oscillator Frequency Selection
@{*/
/**@}*/

/** PMC_CKGR_MOR_MOSCRCEN Main On-Chip RC Oscillator Enable **/
#define PMC_CKGR_MOR_MOSCRCEN		(1 << 3)
/** PMC_CKGR_MOR_MOSCXTBY Main Crystal Oscillator Bypass **/
#define PMC_CKGR_MOR_MOSCXTBY		(1 << 1)
/** PMC_CKGR_MOR_MOSCXTEN Main Crystal Oscillator Enable **/
#define PMC_CKGR_MOR_MOSCXTEN		(1 << 0)

/**@}*/

/** @defgroup pmc_ckgr_mcfr CKGRMCFR Main Clock Frequency Register
@{*/

/** PMC_CKGR_MCFR_MAINFRDY Main Clock Ready **/
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
/** @defgroup pmc_ckgr_pllar_diva DIVA Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_mckr PMCMCKR Master Clock Register
@{*/

/** PMC_PMC_MCKR_UPLLDIV2  **/
#define PMC_PMC_MCKR_UPLLDIV2		(1 << 13)
/** PMC_PMC_MCKR_PLLADIV2 PLLA Divisor by 2 **/
#define PMC_PMC_MCKR_PLLADIV2		(1 << 12)

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
/** @defgroup pmc_pmc_usb_usbdiv USBDIV Divider for USB Clock.
@{*/
/**@}*/

/** PMC_PMC_USB_USBS USB Input Clock Selection **/
#define PMC_PMC_USB_USBS		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_pck[0] PMCPCK[0] Programmable Clock 0 Register
@{*/


#define PMC_PMC_PCK[0]_PRES_SHIFT		4
#define PMC_PMC_PCK[0]_PRES_MASK		0x07
/** @defgroup pmc_pmc_pck[0]_pres PRES Programmable Clock Prescaler
@{*/
/**@}*/


#define PMC_PMC_PCK[0]_CSS_SHIFT		0
#define PMC_PMC_PCK[0]_CSS_MASK		0x07
/** @defgroup pmc_pmc_pck[0]_css CSS Master Clock Source Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_pck[1] PMCPCK[1] Programmable Clock 0 Register
@{*/


#define PMC_PMC_PCK[1]_PRES_SHIFT		4
#define PMC_PMC_PCK[1]_PRES_MASK		0x07
/** @defgroup pmc_pmc_pck[1]_pres PRES Programmable Clock Prescaler
@{*/
/**@}*/


#define PMC_PMC_PCK[1]_CSS_SHIFT		0
#define PMC_PMC_PCK[1]_CSS_MASK		0x07
/** @defgroup pmc_pmc_pck[1]_css CSS Master Clock Source Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_pck[2] PMCPCK[2] Programmable Clock 0 Register
@{*/


#define PMC_PMC_PCK[2]_PRES_SHIFT		4
#define PMC_PMC_PCK[2]_PRES_MASK		0x07
/** @defgroup pmc_pmc_pck[2]_pres PRES Programmable Clock Prescaler
@{*/
/**@}*/


#define PMC_PMC_PCK[2]_CSS_SHIFT		0
#define PMC_PMC_PCK[2]_CSS_MASK		0x07
/** @defgroup pmc_pmc_pck[2]_css CSS Master Clock Source Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup pmc_pmc_ier PMCIER Interrupt Enable Register
@{*/

/** PMC_PMC_IER_CFDEV Clock Failure Detector Event Interrupt Enable **/
#define PMC_PMC_IER_CFDEV		(1 << 18)
/** PMC_PMC_IER_MOSCRCS Main On-Chip RC Status Interrupt Enable **/
#define PMC_PMC_IER_MOSCRCS		(1 << 17)
/** PMC_PMC_IER_MOSCSELS Main Oscillator Selection Status Interrupt Enable **/
#define PMC_PMC_IER_MOSCSELS		(1 << 16)
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

/** PMC_PMC_IDR_CFDEV Clock Failure Detector Event Interrupt Disable **/
#define PMC_PMC_IDR_CFDEV		(1 << 18)
/** PMC_PMC_IDR_MOSCRCS Main On-Chip RC Status Interrupt Disable **/
#define PMC_PMC_IDR_MOSCRCS		(1 << 17)
/** PMC_PMC_IDR_MOSCSELS Main Oscillator Selection Status Interrupt Disable **/
#define PMC_PMC_IDR_MOSCSELS		(1 << 16)
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

/** PMC_PMC_SR_FOS Clock Failure Detector Fault Output Status **/
#define PMC_PMC_SR_FOS		(1 << 20)
/** PMC_PMC_SR_CFDS Clock Failure Detector Status **/
#define PMC_PMC_SR_CFDS		(1 << 19)
/** PMC_PMC_SR_CFDEV Clock Failure Detector Event **/
#define PMC_PMC_SR_CFDEV		(1 << 18)
/** PMC_PMC_SR_MOSCRCS Main On-Chip RC Oscillator Status **/
#define PMC_PMC_SR_MOSCRCS		(1 << 17)
/** PMC_PMC_SR_MOSCSELS Main Oscillator Selection Status **/
#define PMC_PMC_SR_MOSCSELS		(1 << 16)
/** PMC_PMC_SR_PCKRDY2 Programmable Clock Ready Status **/
#define PMC_PMC_SR_PCKRDY2		(1 << 10)
/** PMC_PMC_SR_PCKRDY1 Programmable Clock Ready Status **/
#define PMC_PMC_SR_PCKRDY1		(1 << 9)
/** PMC_PMC_SR_PCKRDY0 Programmable Clock Ready Status **/
#define PMC_PMC_SR_PCKRDY0		(1 << 8)
/** PMC_PMC_SR_OSCSELS Slow Clock Oscillator Selection **/
#define PMC_PMC_SR_OSCSELS		(1 << 7)
/** PMC_PMC_SR_LOCKU UTMI PLL Lock Status **/
#define PMC_PMC_SR_LOCKU		(1 << 6)
/** PMC_PMC_SR_MCKRDY Master Clock Status **/
#define PMC_PMC_SR_MCKRDY		(1 << 3)
/** PMC_PMC_SR_LOCKA PLLA Lock Status **/
#define PMC_PMC_SR_LOCKA		(1 << 1)
/** PMC_PMC_SR_MOSCXTS Main XTAL Oscillator Status **/
#define PMC_PMC_SR_MOSCXTS		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_imr PMCIMR Interrupt Mask Register
@{*/

/** PMC_PMC_IMR_CFDEV Clock Failure Detector Event Interrupt Mask **/
#define PMC_PMC_IMR_CFDEV		(1 << 18)
/** PMC_PMC_IMR_MOSCRCS Main On-Chip RC Status Interrupt Mask **/
#define PMC_PMC_IMR_MOSCRCS		(1 << 17)
/** PMC_PMC_IMR_MOSCSELS Main Oscillator Selection Status Interrupt Mask **/
#define PMC_PMC_IMR_MOSCSELS		(1 << 16)
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

/** @defgroup pmc_pmc_fsmr PMCFSMR Fast Start-up Mode Register
@{*/

/** PMC_PMC_FSMR_LPM Low Power Mode **/
#define PMC_PMC_FSMR_LPM		(1 << 20)
/** PMC_PMC_FSMR_USBAL USB Alarm Enable **/
#define PMC_PMC_FSMR_USBAL		(1 << 18)
/** PMC_PMC_FSMR_RTCAL RTC Alarm Enable **/
#define PMC_PMC_FSMR_RTCAL		(1 << 17)
/** PMC_PMC_FSMR_RTTAL RTT Alarm Enable **/
#define PMC_PMC_FSMR_RTTAL		(1 << 16)
/** PMC_PMC_FSMR_FSTT15 Fast Start-up Input Enable 15 **/
#define PMC_PMC_FSMR_FSTT15		(1 << 15)
/** PMC_PMC_FSMR_FSTT14 Fast Start-up Input Enable 14 **/
#define PMC_PMC_FSMR_FSTT14		(1 << 14)
/** PMC_PMC_FSMR_FSTT13 Fast Start-up Input Enable 13 **/
#define PMC_PMC_FSMR_FSTT13		(1 << 13)
/** PMC_PMC_FSMR_FSTT12 Fast Start-up Input Enable 12 **/
#define PMC_PMC_FSMR_FSTT12		(1 << 12)
/** PMC_PMC_FSMR_FSTT11 Fast Start-up Input Enable 11 **/
#define PMC_PMC_FSMR_FSTT11		(1 << 11)
/** PMC_PMC_FSMR_FSTT10 Fast Start-up Input Enable 10 **/
#define PMC_PMC_FSMR_FSTT10		(1 << 10)
/** PMC_PMC_FSMR_FSTT9 Fast Start-up Input Enable 9 **/
#define PMC_PMC_FSMR_FSTT9		(1 << 9)
/** PMC_PMC_FSMR_FSTT8 Fast Start-up Input Enable 8 **/
#define PMC_PMC_FSMR_FSTT8		(1 << 8)
/** PMC_PMC_FSMR_FSTT7 Fast Start-up Input Enable 7 **/
#define PMC_PMC_FSMR_FSTT7		(1 << 7)
/** PMC_PMC_FSMR_FSTT6 Fast Start-up Input Enable 6 **/
#define PMC_PMC_FSMR_FSTT6		(1 << 6)
/** PMC_PMC_FSMR_FSTT5 Fast Start-up Input Enable 5 **/
#define PMC_PMC_FSMR_FSTT5		(1 << 5)
/** PMC_PMC_FSMR_FSTT4 Fast Start-up Input Enable 4 **/
#define PMC_PMC_FSMR_FSTT4		(1 << 4)
/** PMC_PMC_FSMR_FSTT3 Fast Start-up Input Enable 3 **/
#define PMC_PMC_FSMR_FSTT3		(1 << 3)
/** PMC_PMC_FSMR_FSTT2 Fast Start-up Input Enable 2 **/
#define PMC_PMC_FSMR_FSTT2		(1 << 2)
/** PMC_PMC_FSMR_FSTT1 Fast Start-up Input Enable 1 **/
#define PMC_PMC_FSMR_FSTT1		(1 << 1)
/** PMC_PMC_FSMR_FSTT0 Fast Start-up Input Enable 0 **/
#define PMC_PMC_FSMR_FSTT0		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_fspr PMCFSPR Fast Start-up Polarity Register
@{*/

/** PMC_PMC_FSPR_FSTP15 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP15		(1 << 15)
/** PMC_PMC_FSPR_FSTP14 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP14		(1 << 14)
/** PMC_PMC_FSPR_FSTP13 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP13		(1 << 13)
/** PMC_PMC_FSPR_FSTP12 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP12		(1 << 12)
/** PMC_PMC_FSPR_FSTP11 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP11		(1 << 11)
/** PMC_PMC_FSPR_FSTP10 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP10		(1 << 10)
/** PMC_PMC_FSPR_FSTP9 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP9		(1 << 9)
/** PMC_PMC_FSPR_FSTP8 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP8		(1 << 8)
/** PMC_PMC_FSPR_FSTP7 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP7		(1 << 7)
/** PMC_PMC_FSPR_FSTP6 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP6		(1 << 6)
/** PMC_PMC_FSPR_FSTP5 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP5		(1 << 5)
/** PMC_PMC_FSPR_FSTP4 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP4		(1 << 4)
/** PMC_PMC_FSPR_FSTP3 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP3		(1 << 3)
/** PMC_PMC_FSPR_FSTP2 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP2		(1 << 2)
/** PMC_PMC_FSPR_FSTP1 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP1		(1 << 1)
/** PMC_PMC_FSPR_FSTP0 Fast Start-up Input Polarityx **/
#define PMC_PMC_FSPR_FSTP0		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_focr PMCFOCR Fault Output Clear Register
@{*/

/** PMC_PMC_FOCR_FOCLR Fault Output Clear **/
#define PMC_PMC_FOCR_FOCLR		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_wpmr PMCWPMR Write Protect Mode Register
@{*/


#define PMC_PMC_WPMR_WPKEY_SHIFT		8
#define PMC_PMC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup pmc_pmc_wpmr_wpkey WPKEY Write Protect KEY
@{*/
/**@}*/

/** PMC_PMC_WPMR_WPEN Write Protect Enable **/
#define PMC_PMC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_wpsr PMCWPSR Write Protect Status Register
@{*/


#define PMC_PMC_WPSR_WPVSRC_SHIFT		8
#define PMC_PMC_WPSR_WPVSRC_MASK		0xffff
/** @defgroup pmc_pmc_wpsr_wpvsrc WPVSRC Write Protect Violation Source
@{*/
/**@}*/

/** PMC_PMC_WPSR_WPVS Write Protect Violation Status **/
#define PMC_PMC_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup pmc_pmc_pcer1 PMCPCER1 Peripheral Clock Enable Register 1
@{*/

/** PMC_PMC_PCER1_PID44 Peripheral Clock 44 Enable **/
#define PMC_PMC_PCER1_PID44		(1 << 12)
/** PMC_PMC_PCER1_PID43 Peripheral Clock 43 Enable **/
#define PMC_PMC_PCER1_PID43		(1 << 11)
/** PMC_PMC_PCER1_PID42 Peripheral Clock 42 Enable **/
#define PMC_PMC_PCER1_PID42		(1 << 10)
/** PMC_PMC_PCER1_PID41 Peripheral Clock 41 Enable **/
#define PMC_PMC_PCER1_PID41		(1 << 9)
/** PMC_PMC_PCER1_PID40 Peripheral Clock 40 Enable **/
#define PMC_PMC_PCER1_PID40		(1 << 8)
/** PMC_PMC_PCER1_PID39 Peripheral Clock 39 Enable **/
#define PMC_PMC_PCER1_PID39		(1 << 7)
/** PMC_PMC_PCER1_PID38 Peripheral Clock 38 Enable **/
#define PMC_PMC_PCER1_PID38		(1 << 6)
/** PMC_PMC_PCER1_PID37 Peripheral Clock 37 Enable **/
#define PMC_PMC_PCER1_PID37		(1 << 5)
/** PMC_PMC_PCER1_PID36 Peripheral Clock 36 Enable **/
#define PMC_PMC_PCER1_PID36		(1 << 4)
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

/** PMC_PMC_PCDR1_PID44 Peripheral Clock 44 Disable **/
#define PMC_PMC_PCDR1_PID44		(1 << 12)
/** PMC_PMC_PCDR1_PID43 Peripheral Clock 43 Disable **/
#define PMC_PMC_PCDR1_PID43		(1 << 11)
/** PMC_PMC_PCDR1_PID42 Peripheral Clock 42 Disable **/
#define PMC_PMC_PCDR1_PID42		(1 << 10)
/** PMC_PMC_PCDR1_PID41 Peripheral Clock 41 Disable **/
#define PMC_PMC_PCDR1_PID41		(1 << 9)
/** PMC_PMC_PCDR1_PID40 Peripheral Clock 40 Disable **/
#define PMC_PMC_PCDR1_PID40		(1 << 8)
/** PMC_PMC_PCDR1_PID39 Peripheral Clock 39 Disable **/
#define PMC_PMC_PCDR1_PID39		(1 << 7)
/** PMC_PMC_PCDR1_PID38 Peripheral Clock 38 Disable **/
#define PMC_PMC_PCDR1_PID38		(1 << 6)
/** PMC_PMC_PCDR1_PID37 Peripheral Clock 37 Disable **/
#define PMC_PMC_PCDR1_PID37		(1 << 5)
/** PMC_PMC_PCDR1_PID36 Peripheral Clock 36 Disable **/
#define PMC_PMC_PCDR1_PID36		(1 << 4)
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

/** PMC_PMC_PCSR1_PID44 Peripheral Clock 44 Status **/
#define PMC_PMC_PCSR1_PID44		(1 << 12)
/** PMC_PMC_PCSR1_PID43 Peripheral Clock 43 Status **/
#define PMC_PMC_PCSR1_PID43		(1 << 11)
/** PMC_PMC_PCSR1_PID42 Peripheral Clock 42 Status **/
#define PMC_PMC_PCSR1_PID42		(1 << 10)
/** PMC_PMC_PCSR1_PID41 Peripheral Clock 41 Status **/
#define PMC_PMC_PCSR1_PID41		(1 << 9)
/** PMC_PMC_PCSR1_PID40 Peripheral Clock 40 Status **/
#define PMC_PMC_PCSR1_PID40		(1 << 8)
/** PMC_PMC_PCSR1_PID39 Peripheral Clock 39 Status **/
#define PMC_PMC_PCSR1_PID39		(1 << 7)
/** PMC_PMC_PCSR1_PID38 Peripheral Clock 38 Status **/
#define PMC_PMC_PCSR1_PID38		(1 << 6)
/** PMC_PMC_PCSR1_PID37 Peripheral Clock 37 Status **/
#define PMC_PMC_PCSR1_PID37		(1 << 5)
/** PMC_PMC_PCSR1_PID36 Peripheral Clock 36 Status **/
#define PMC_PMC_PCSR1_PID36		(1 << 4)
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

/** PMC_PMC_PCR_EN Enable **/
#define PMC_PMC_PCR_EN		(1 << 28)

#define PMC_PMC_PCR_DIV_SHIFT		16
#define PMC_PMC_PCR_DIV_MASK		0x03
/** @defgroup pmc_pmc_pcr_div DIV Divisor Value
@{*/
/**@}*/

/** PMC_PMC_PCR_CMD Command **/
#define PMC_PMC_PCR_CMD		(1 << 12)

#define PMC_PMC_PCR_PID_SHIFT		0
#define PMC_PMC_PCR_PID_MASK		0x3f
/** @defgroup pmc_pmc_pcr_pid PID Peripheral ID
@{*/
/**@}*/


/**@}*/

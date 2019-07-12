#pragma once 

/* --- PWR: PWR ----------------------------------------------------- */

/** @defgroup pwr_registers PWR Register
@{*/

/** PWR_CR1 PWR control register 1 **/
#define PWR_CR1			MMIO32(PWR_BASE + 0x00)
/** PWR_CSR1 PWR control status register 1 **/
#define PWR_CSR1			MMIO32(PWR_BASE + 0x04)
/** PWR_CR2 This register is not reset by wakeup from Standby mode, RESET signal and VDD POR. It is only reset by VSW POR and VSWRST reset. This register shall not be accessed when VSWRST bit in RCC_BDCR register resets the VSW domain.After reset, PWR_CR2 register is write-protected. Prior to modifying its content, the DBP bit in PWR_CR1 register must be set to disable the write protection. **/
#define PWR_CR2			MMIO32(PWR_BASE + 0x08)
/** PWR_CR3 Reset only by POR only, not reset by wakeup from Standby mode and RESET pad. The lower byte of this register is written once after POR and shall be written before changing VOS level or ck_sys clock frequency. No limitation applies to the upper bytes.Programming data corresponding to an invalid combination of SDLEVEL, SDEXTHP, SDEN, LDOEN and BYPASS bits (see Table9) will be ignored: data will not be written, the written-once mechanism will lock the register and any further write access will be ignored. The default supply configuration will be kept and the ACTVOSRDY bit in PWR control status register 1 (PWR_CSR1) will go on indicating invalid voltage levels. The system shall be power cycled before writing a new value. **/
#define PWR_CR3			MMIO32(PWR_BASE + 0x0c)
/** PWR_CPUCR This register allows controlling CPU1 power. **/
#define PWR_CPUCR			MMIO32(PWR_BASE + 0x10)
/** PWR_D3CR This register allows controlling D3 domain power.Following reset VOSRDY will be read 1 by software **/
#define PWR_D3CR			MMIO32(PWR_BASE + 0x18)
/** PWR_WKUPCR reset only by system reset, not reset by wakeup from Standby mode5 wait states are required when writing this register (when clearing a WKUPF bit in PWR_WKUPFR, the AHB write access will complete after the WKUPF has been cleared). **/
#define PWR_WKUPCR			MMIO32(PWR_BASE + 0x20)
/** PWR_WKUPFR reset only by system reset, not reset by wakeup from Standby mode **/
#define PWR_WKUPFR			MMIO32(PWR_BASE + 0x24)
/** PWR_WKUPEPR Reset only by system reset, not reset by wakeup from Standby mode **/
#define PWR_WKUPEPR			MMIO32(PWR_BASE + 0x28)

/**@}*/


/** @defgroup pwr_cr1 CR1 PWR control register 1
@{*/


#define PWR_CR1_ALS_SHIFT		17
#define PWR_CR1_ALS_MASK		0x03
/** @defgroup pwr_cr1_als ALS Analog voltage detector level selection These bits select the voltage threshold detected by the AVD.
@{*/
/**@}*/

/** PWR_CR1_AVDEN Peripheral voltage monitor on VDDA enable **/
#define PWR_CR1_AVDEN		(1 << 16)

#define PWR_CR1_SVOS_SHIFT		14
#define PWR_CR1_SVOS_MASK		0x03
/** @defgroup pwr_cr1_svos SVOS System Stop mode voltage scaling selection These bits control the VCORE voltage level in system Stop mode, to obtain the best trade-off between power consumption and performance.
@{*/
/**@}*/

/** PWR_CR1_FLPS Flash low-power mode in DStop mode This bit allows to obtain the best trade-off between low-power consumption and restart time when exiting from DStop mode. When it is set, the Flash memory enters low-power mode when D1 domain is in DStop mode. **/
#define PWR_CR1_FLPS		(1 << 9)
/** PWR_CR1_DBP Disable backup domain write protection In reset state, the RCC_BDCR register, the RTC registers (including the backup registers), BREN and MOEN bits in PWR_CR2 register, are protected against parasitic write access. This bit must be set to enable write access to these registers. **/
#define PWR_CR1_DBP		(1 << 8)

#define PWR_CR1_PLS_SHIFT		5
#define PWR_CR1_PLS_MASK		0x07
/** @defgroup pwr_cr1_pls PLS Programmable voltage detector level selection These bits select the voltage threshold detected by the PVD. Note: Refer to Section Electrical characteristics of the product datasheet for more details.
@{*/
/**@}*/

/** PWR_CR1_PVDE Programmable voltage detector enable **/
#define PWR_CR1_PVDE		(1 << 4)
/** PWR_CR1_LPDS Low-power Deepsleep with SVOS3 (SVOS4 and SVOS5 always use low-power, regardless of the setting of this bit) **/
#define PWR_CR1_LPDS		(1 << 0)

/**@}*/

/** @defgroup pwr_csr1 CSR1 PWR control status register 1
@{*/

/** PWR_CSR1_AVDO Analog voltage detector output on VDDA This bit is set and cleared by hardware. It is valid only if AVD on VDDA is enabled by the AVDEN bit. Note: Since the AVD is disabled in Standby mode, this bit is equal to 0 after Standby or reset until the AVDEN bit is set. **/
#define PWR_CSR1_AVDO		(1 << 16)

#define PWR_CSR1_ACTVOS_SHIFT		14
#define PWR_CSR1_ACTVOS_MASK		0x03
/** @defgroup pwr_csr1_actvos ACTVOS VOS currently applied for VCORE voltage scaling selection. These bits reflect the last VOS value applied to the PMU.
@{*/
/**@}*/

/** PWR_CSR1_ACTVOSRDY Voltage levels ready bit for currently used VOS and SDLEVEL This bit is set to 1 by hardware when the voltage regulator and the SD converter are both disabled and Bypass mode is selected in PWR control register 3 (PWR_CR3). **/
#define PWR_CSR1_ACTVOSRDY		(1 << 13)
/** PWR_CSR1_PVDO Programmable voltage detect output This bit is set and cleared by hardware. It is valid only if the PVD has been enabled by the PVDE bit. Note: since the PVD is disabled in Standby mode, this bit is equal to 0 after Standby or reset until the PVDE bit is set. **/
#define PWR_CSR1_PVDO		(1 << 4)

/**@}*/

/** @defgroup pwr_cr2 CR2 This register is not reset by wakeup from Standby mode, RESET signal and VDD POR. It is only reset by VSW POR and VSWRST reset. This register shall not be accessed when VSWRST bit in RCC_BDCR register resets the VSW domain.After reset, PWR_CR2 register is write-protected. Prior to modifying its content, the DBP bit in PWR_CR1 register must be set to disable the write protection.
@{*/

/** PWR_CR2_TEMPH Temperature level monitoring versus high threshold **/
#define PWR_CR2_TEMPH		(1 << 23)
/** PWR_CR2_TEMPL Temperature level monitoring versus low threshold **/
#define PWR_CR2_TEMPL		(1 << 22)
/** PWR_CR2_VBATH VBAT level monitoring versus high threshold **/
#define PWR_CR2_VBATH		(1 << 21)
/** PWR_CR2_VBATL VBAT level monitoring versus low threshold **/
#define PWR_CR2_VBATL		(1 << 20)
/** PWR_CR2_BRRDY Backup regulator ready This bit is set by hardware to indicate that the Backup regulator is ready. **/
#define PWR_CR2_BRRDY		(1 << 16)
/** PWR_CR2_MONEN VBAT and temperature monitoring enable When set, the VBAT supply and temperature monitoring is enabled. **/
#define PWR_CR2_MONEN		(1 << 4)
/** PWR_CR2_BREN Backup regulator enable When set, the Backup regulator (used to maintain the backup RAM content in Standby and VBAT modes) is enabled. If BREN is reset, the backup regulator is switched off. The backup RAM can still be used in Run and Stop modes. However, its content will be lost in Standby and VBAT modes. If BREN is set, the application must wait till the Backup Regulator Ready flag (BRRDY) is set to indicate that the data written into the SRAM will be maintained in Standby and VBAT modes. **/
#define PWR_CR2_BREN		(1 << 0)

/**@}*/

/** @defgroup pwr_cr3 CR3 Reset only by POR only, not reset by wakeup from Standby mode and RESET pad. The lower byte of this register is written once after POR and shall be written before changing VOS level or ck_sys clock frequency. No limitation applies to the upper bytes.Programming data corresponding to an invalid combination of SDLEVEL, SDEXTHP, SDEN, LDOEN and BYPASS bits (see Table9) will be ignored: data will not be written, the written-once mechanism will lock the register and any further write access will be ignored. The default supply configuration will be kept and the ACTVOSRDY bit in PWR control status register 1 (PWR_CSR1) will go on indicating invalid voltage levels. The system shall be power cycled before writing a new value.
@{*/

/** PWR_CR3_USB33RDY USB supply ready. **/
#define PWR_CR3_USB33RDY		(1 << 26)
/** PWR_CR3_USBREGEN USB regulator enable. **/
#define PWR_CR3_USBREGEN		(1 << 25)
/** PWR_CR3_USB33DEN VDD33USB voltage level detector enable. **/
#define PWR_CR3_USB33DEN		(1 << 24)
/** PWR_CR3_VBRS VBAT charging resistor selection **/
#define PWR_CR3_VBRS		(1 << 9)
/** PWR_CR3_VBE VBAT charging enable **/
#define PWR_CR3_VBE		(1 << 8)
/** PWR_CR3_SDEN SD converter Enable **/
#define PWR_CR3_SDEN		(1 << 2)
/** PWR_CR3_LDOEN Low drop-out regulator enable **/
#define PWR_CR3_LDOEN		(1 << 1)
/** PWR_CR3_BYPASS Power management unit bypass **/
#define PWR_CR3_BYPASS		(1 << 0)

/**@}*/

/** @defgroup pwr_cpucr CPUCR This register allows controlling CPU1 power.
@{*/

/** PWR_CPUCR_RUN_D3 Keep system D3 domain in Run mode regardless of the CPU sub-systems modes **/
#define PWR_CPUCR_RUN_D3		(1 << 11)
/** PWR_CPUCR_CSSF Clear D1 domain CPU1 Standby, Stop and HOLD flags (always read as 0) This bit is cleared to 0 by hardware. **/
#define PWR_CPUCR_CSSF		(1 << 9)
/** PWR_CPUCR_SBF_D2 D2 domain DStandby flag This bit is set by hardware and cleared by any system reset or by setting the CPU1 CSSF bit. Once set, this bit can be cleared only when the D2 domain is no longer in DStandby mode. **/
#define PWR_CPUCR_SBF_D2		(1 << 8)
/** PWR_CPUCR_SBF_D1 D1 domain DStandby flag This bit is set by hardware and cleared by any system reset or by setting the CPU1 CSSF bit. Once set, this bit can be cleared only when the D1 domain is no longer in DStandby mode. **/
#define PWR_CPUCR_SBF_D1		(1 << 7)
/** PWR_CPUCR_SBF System Standby flag This bit is set by hardware and cleared only by a POR (Power-on Reset) or by setting the CPU1 CSSF bit **/
#define PWR_CPUCR_SBF		(1 << 6)
/** PWR_CPUCR_STOPF STOP flag This bit is set by hardware and cleared only by any reset or by setting the CPU1 CSSF bit. **/
#define PWR_CPUCR_STOPF		(1 << 5)
/** PWR_CPUCR_PDDS_D3 System D3 domain Power Down Deepsleep. This bit allows CPU1 to define the Deepsleep mode for System D3 domain. **/
#define PWR_CPUCR_PDDS_D3		(1 << 2)
/** PWR_CPUCR_PDDS_D2 D2 domain Power Down Deepsleep. This bit allows CPU1 to define the Deepsleep mode for D2 domain. **/
#define PWR_CPUCR_PDDS_D2		(1 << 1)
/** PWR_CPUCR_PDDS_D1 D1 domain Power Down Deepsleep selection. This bit allows CPU1 to define the Deepsleep mode for D1 domain. **/
#define PWR_CPUCR_PDDS_D1		(1 << 0)

/**@}*/

/** @defgroup pwr_d3cr D3CR This register allows controlling D3 domain power.Following reset VOSRDY will be read 1 by software
@{*/


#define PWR_D3CR_VOS_SHIFT		14
#define PWR_D3CR_VOS_MASK		0x03
/** @defgroup pwr_d3cr_vos VOS Voltage scaling selection according to performance These bits control the VCORE voltage level and allow to obtains the best trade-off between power consumption and performance: When increasing the performance, the voltage scaling shall be changed before increasing the system frequency. When decreasing performance, the system frequency shall first be decreased before changing the voltage scaling.
@{*/
/**@}*/

/** PWR_D3CR_VOSRDY VOS Ready bit for VCORE voltage scaling output selection. This bit is set to 1 by hardware when Bypass mode is selected in PWR control register 3 (PWR_CR3). **/
#define PWR_D3CR_VOSRDY		(1 << 13)

/**@}*/

/** @defgroup pwr_wkupcr WKUPCR reset only by system reset, not reset by wakeup from Standby mode5 wait states are required when writing this register (when clearing a WKUPF bit in PWR_WKUPFR, the AHB write access will complete after the WKUPF has been cleared).
@{*/


#define PWR_WKUPCR_WKUPC_SHIFT		0
#define PWR_WKUPCR_WKUPC_MASK		0x3f
/** @defgroup pwr_wkupcr_wkupc WKUPC Clear Wakeup pin flag for WKUP. These bits are always read as 0.
@{*/
/**@}*/


/**@}*/

/** @defgroup pwr_wkupfr WKUPFR reset only by system reset, not reset by wakeup from Standby mode
@{*/

/** PWR_WKUPFR_WKUPF6 Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR). **/
#define PWR_WKUPFR_WKUPF6		(1 << 5)
/** PWR_WKUPFR_WKUPF5 Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR). **/
#define PWR_WKUPFR_WKUPF5		(1 << 4)
/** PWR_WKUPFR_WKUPF4 Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR). **/
#define PWR_WKUPFR_WKUPF4		(1 << 3)
/** PWR_WKUPFR_WKUPF3 Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR). **/
#define PWR_WKUPFR_WKUPF3		(1 << 2)
/** PWR_WKUPFR_WKUPF2 Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR). **/
#define PWR_WKUPFR_WKUPF2		(1 << 1)
/** PWR_WKUPFR_WKUPF1 Wakeup pin WKUPF flag. This bit is set by hardware and cleared only by a Reset pin or by setting the WKUPCn+1 bit in the PWR wakeup clear register (PWR_WKUPCR). **/
#define PWR_WKUPFR_WKUPF1		(1 << 0)

/**@}*/

/** @defgroup pwr_wkupepr WKUPEPR Reset only by system reset, not reset by wakeup from Standby mode
@{*/


#define PWR_WKUPEPR_WKUPPUPD6_SHIFT		26
#define PWR_WKUPEPR_WKUPPUPD6_MASK		0x03
/** @defgroup pwr_wkupepr_wkuppupd6 WKUPPUPD6 Wakeup pin pull configuration for WKUP(truncate(n/2)-7) These bits define the I/O pad pull configuration used when WKUPEN(truncate(n/2)-7) = 1. The associated GPIO port pull configuration shall be set to the same value or to 00. The Wakeup pin pull configuration is kept in Standby mode.
@{*/
/**@}*/


#define PWR_WKUPEPR_WKUPPUPD5_SHIFT		24
#define PWR_WKUPEPR_WKUPPUPD5_MASK		0x03
/** @defgroup pwr_wkupepr_wkuppupd5 WKUPPUPD5 Wakeup pin pull configuration
@{*/
/**@}*/


#define PWR_WKUPEPR_WKUPPUPD4_SHIFT		22
#define PWR_WKUPEPR_WKUPPUPD4_MASK		0x03
/** @defgroup pwr_wkupepr_wkuppupd4 WKUPPUPD4 Wakeup pin pull configuration
@{*/
/**@}*/


#define PWR_WKUPEPR_WKUPPUPD3_SHIFT		20
#define PWR_WKUPEPR_WKUPPUPD3_MASK		0x03
/** @defgroup pwr_wkupepr_wkuppupd3 WKUPPUPD3 Wakeup pin pull configuration
@{*/
/**@}*/


#define PWR_WKUPEPR_WKUPPUPD2_SHIFT		18
#define PWR_WKUPEPR_WKUPPUPD2_MASK		0x03
/** @defgroup pwr_wkupepr_wkuppupd2 WKUPPUPD2 Wakeup pin pull configuration
@{*/
/**@}*/


#define PWR_WKUPEPR_WKUPPUPD1_SHIFT		16
#define PWR_WKUPEPR_WKUPPUPD1_MASK		0x03
/** @defgroup pwr_wkupepr_wkuppupd1 WKUPPUPD1 Wakeup pin pull configuration
@{*/
/**@}*/

/** PWR_WKUPEPR_WKUPP6 Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin. **/
#define PWR_WKUPEPR_WKUPP6		(1 << 13)
/** PWR_WKUPEPR_WKUPP5 Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin. **/
#define PWR_WKUPEPR_WKUPP5		(1 << 12)
/** PWR_WKUPEPR_WKUPP4 Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin. **/
#define PWR_WKUPEPR_WKUPP4		(1 << 11)
/** PWR_WKUPEPR_WKUPP3 Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin. **/
#define PWR_WKUPEPR_WKUPP3		(1 << 10)
/** PWR_WKUPEPR_WKUPP2 Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin. **/
#define PWR_WKUPEPR_WKUPP2		(1 << 9)
/** PWR_WKUPEPR_WKUPP1 Wakeup pin polarity bit for WKUPn-7 These bits define the polarity used for event detection on WKUPn-7 external wakeup pin. **/
#define PWR_WKUPEPR_WKUPP1		(1 << 8)
/** PWR_WKUPEPR_WKUPEN6 Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge. **/
#define PWR_WKUPEPR_WKUPEN6		(1 << 5)
/** PWR_WKUPEPR_WKUPEN5 Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge. **/
#define PWR_WKUPEPR_WKUPEN5		(1 << 4)
/** PWR_WKUPEPR_WKUPEN4 Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge. **/
#define PWR_WKUPEPR_WKUPEN4		(1 << 3)
/** PWR_WKUPEPR_WKUPEN3 Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge. **/
#define PWR_WKUPEPR_WKUPEN3		(1 << 2)
/** PWR_WKUPEPR_WKUPEN2 Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge. **/
#define PWR_WKUPEPR_WKUPEN2		(1 << 1)
/** PWR_WKUPEPR_WKUPEN1 Enable Wakeup Pin WKUPn+1 Each bit is set and cleared by software. Note: An additional wakeup event is detected if WKUPn+1 pin is enabled (by setting the WKUPENn+1 bit) when WKUPn+1 pin level is already high when WKUPPn+1 selects rising edge, or low when WKUPPn+1 selects falling edge. **/
#define PWR_WKUPEPR_WKUPEN1		(1 << 0)

/**@}*/

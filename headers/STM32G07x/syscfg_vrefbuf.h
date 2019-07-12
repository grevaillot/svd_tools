#pragma once 

/* --- SYSCFG_VREFBUF: System configuration controller -------------- */

/** @defgroup syscfg_vrefbuf_registers System configuration controller Register
@{*/

/** SYSCFG_VREFBUF_CFGR1 SYSCFG configuration register 1 **/
#define SYSCFG_VREFBUF_CFGR1			MMIO32(SYSCFG_VREFBUF_BASE + 0x00)
/** SYSCFG_VREFBUF_CFGR2 SYSCFG configuration register 1 **/
#define SYSCFG_VREFBUF_CFGR2			MMIO32(SYSCFG_VREFBUF_BASE + 0x18)
/** SYSCFG_VREFBUF_VREFBUF_CSR VREFBUF control and status register **/
#define SYSCFG_VREFBUF_VREFBUF_CSR			MMIO32(SYSCFG_VREFBUF_BASE + 0x30)
/** SYSCFG_VREFBUF_VREFBUF_CCR VREFBUF calibration control register **/
#define SYSCFG_VREFBUF_VREFBUF_CCR			MMIO32(SYSCFG_VREFBUF_BASE + 0x34)
/** SYSCFG_VREFBUF_ITLINE0 interrupt line 0 status register **/
#define SYSCFG_VREFBUF_ITLINE0			MMIO32(SYSCFG_VREFBUF_BASE + 0x80)
/** SYSCFG_VREFBUF_ITLINE1 interrupt line 1 status register **/
#define SYSCFG_VREFBUF_ITLINE1			MMIO32(SYSCFG_VREFBUF_BASE + 0x84)
/** SYSCFG_VREFBUF_ITLINE2 interrupt line 2 status register **/
#define SYSCFG_VREFBUF_ITLINE2			MMIO32(SYSCFG_VREFBUF_BASE + 0x88)
/** SYSCFG_VREFBUF_ITLINE3 interrupt line 3 status register **/
#define SYSCFG_VREFBUF_ITLINE3			MMIO32(SYSCFG_VREFBUF_BASE + 0x8c)
/** SYSCFG_VREFBUF_ITLINE4 interrupt line 4 status register **/
#define SYSCFG_VREFBUF_ITLINE4			MMIO32(SYSCFG_VREFBUF_BASE + 0x90)
/** SYSCFG_VREFBUF_ITLINE5 interrupt line 5 status register **/
#define SYSCFG_VREFBUF_ITLINE5			MMIO32(SYSCFG_VREFBUF_BASE + 0x94)
/** SYSCFG_VREFBUF_ITLINE6 interrupt line 6 status register **/
#define SYSCFG_VREFBUF_ITLINE6			MMIO32(SYSCFG_VREFBUF_BASE + 0x98)
/** SYSCFG_VREFBUF_ITLINE7 interrupt line 7 status register **/
#define SYSCFG_VREFBUF_ITLINE7			MMIO32(SYSCFG_VREFBUF_BASE + 0x9c)
/** SYSCFG_VREFBUF_ITLINE8 interrupt line 8 status register **/
#define SYSCFG_VREFBUF_ITLINE8			MMIO32(SYSCFG_VREFBUF_BASE + 0xa0)
/** SYSCFG_VREFBUF_ITLINE9 interrupt line 9 status register **/
#define SYSCFG_VREFBUF_ITLINE9			MMIO32(SYSCFG_VREFBUF_BASE + 0xa4)
/** SYSCFG_VREFBUF_ITLINE10 interrupt line 10 status register **/
#define SYSCFG_VREFBUF_ITLINE10			MMIO32(SYSCFG_VREFBUF_BASE + 0xa8)
/** SYSCFG_VREFBUF_ITLINE11 interrupt line 11 status register **/
#define SYSCFG_VREFBUF_ITLINE11			MMIO32(SYSCFG_VREFBUF_BASE + 0xac)
/** SYSCFG_VREFBUF_ITLINE12 interrupt line 12 status register **/
#define SYSCFG_VREFBUF_ITLINE12			MMIO32(SYSCFG_VREFBUF_BASE + 0xb0)
/** SYSCFG_VREFBUF_ITLINE13 interrupt line 13 status register **/
#define SYSCFG_VREFBUF_ITLINE13			MMIO32(SYSCFG_VREFBUF_BASE + 0xb4)
/** SYSCFG_VREFBUF_ITLINE14 interrupt line 14 status register **/
#define SYSCFG_VREFBUF_ITLINE14			MMIO32(SYSCFG_VREFBUF_BASE + 0xb8)
/** SYSCFG_VREFBUF_ITLINE15 interrupt line 15 status register **/
#define SYSCFG_VREFBUF_ITLINE15			MMIO32(SYSCFG_VREFBUF_BASE + 0xbc)
/** SYSCFG_VREFBUF_ITLINE16 interrupt line 16 status register **/
#define SYSCFG_VREFBUF_ITLINE16			MMIO32(SYSCFG_VREFBUF_BASE + 0xc0)
/** SYSCFG_VREFBUF_ITLINE17 interrupt line 17 status register **/
#define SYSCFG_VREFBUF_ITLINE17			MMIO32(SYSCFG_VREFBUF_BASE + 0xc4)
/** SYSCFG_VREFBUF_ITLINE18 interrupt line 18 status register **/
#define SYSCFG_VREFBUF_ITLINE18			MMIO32(SYSCFG_VREFBUF_BASE + 0xc8)
/** SYSCFG_VREFBUF_ITLINE19 interrupt line 19 status register **/
#define SYSCFG_VREFBUF_ITLINE19			MMIO32(SYSCFG_VREFBUF_BASE + 0xcc)
/** SYSCFG_VREFBUF_ITLINE20 interrupt line 20 status register **/
#define SYSCFG_VREFBUF_ITLINE20			MMIO32(SYSCFG_VREFBUF_BASE + 0xd0)
/** SYSCFG_VREFBUF_ITLINE21 interrupt line 21 status register **/
#define SYSCFG_VREFBUF_ITLINE21			MMIO32(SYSCFG_VREFBUF_BASE + 0xd4)
/** SYSCFG_VREFBUF_ITLINE22 interrupt line 22 status register **/
#define SYSCFG_VREFBUF_ITLINE22			MMIO32(SYSCFG_VREFBUF_BASE + 0xd8)
/** SYSCFG_VREFBUF_ITLINE23 interrupt line 23 status register **/
#define SYSCFG_VREFBUF_ITLINE23			MMIO32(SYSCFG_VREFBUF_BASE + 0xdc)
/** SYSCFG_VREFBUF_ITLINE24 interrupt line 24 status register **/
#define SYSCFG_VREFBUF_ITLINE24			MMIO32(SYSCFG_VREFBUF_BASE + 0xe0)
/** SYSCFG_VREFBUF_ITLINE25 interrupt line 25 status register **/
#define SYSCFG_VREFBUF_ITLINE25			MMIO32(SYSCFG_VREFBUF_BASE + 0xe4)
/** SYSCFG_VREFBUF_ITLINE26 interrupt line 26 status register **/
#define SYSCFG_VREFBUF_ITLINE26			MMIO32(SYSCFG_VREFBUF_BASE + 0xe8)
/** SYSCFG_VREFBUF_ITLINE27 interrupt line 27 status register **/
#define SYSCFG_VREFBUF_ITLINE27			MMIO32(SYSCFG_VREFBUF_BASE + 0xec)
/** SYSCFG_VREFBUF_ITLINE28 interrupt line 28 status register **/
#define SYSCFG_VREFBUF_ITLINE28			MMIO32(SYSCFG_VREFBUF_BASE + 0xf0)
/** SYSCFG_VREFBUF_ITLINE29 interrupt line 29 status register **/
#define SYSCFG_VREFBUF_ITLINE29			MMIO32(SYSCFG_VREFBUF_BASE + 0xf4)
/** SYSCFG_VREFBUF_ITLINE30 interrupt line 30 status register **/
#define SYSCFG_VREFBUF_ITLINE30			MMIO32(SYSCFG_VREFBUF_BASE + 0xf8)
/** SYSCFG_VREFBUF_ITLINE31 interrupt line 31 status register **/
#define SYSCFG_VREFBUF_ITLINE31			MMIO32(SYSCFG_VREFBUF_BASE + 0xfc)

/**@}*/


/** @defgroup syscfg_vrefbuf_cfgr1 CFGR1 SYSCFG configuration register 1
@{*/


#define SYSCFG_VREFBUF_CFGR1_I2C_PAx_FMP_SHIFT		22
#define SYSCFG_VREFBUF_CFGR1_I2C_PAx_FMP_MASK		0x03
/** @defgroup syscfg_vrefbuf_cfgr1_i2c_pax_fmp I2CPAxFMP Fast Mode Plus (FM+) driving capability activation bits
@{*/
/**@}*/

/** SYSCFG_VREFBUF_CFGR1_I2C2_FMP FM+ driving capability activation for I2C2 **/
#define SYSCFG_VREFBUF_CFGR1_I2C2_FMP		(1 << 21)
/** SYSCFG_VREFBUF_CFGR1_I2C1_FMP FM+ driving capability activation for I2C1 **/
#define SYSCFG_VREFBUF_CFGR1_I2C1_FMP		(1 << 20)

#define SYSCFG_VREFBUF_CFGR1_I2C_PBx_FMP_SHIFT		16
#define SYSCFG_VREFBUF_CFGR1_I2C_PBx_FMP_MASK		0x0f
/** @defgroup syscfg_vrefbuf_cfgr1_i2c_pbx_fmp I2CPBxFMP Fast Mode Plus (FM+) driving capability activation bits
@{*/
/**@}*/

/** SYSCFG_VREFBUF_CFGR1_UCPD2_STROBE Strobe signal bit for UCPD2 **/
#define SYSCFG_VREFBUF_CFGR1_UCPD2_STROBE		(1 << 10)
/** SYSCFG_VREFBUF_CFGR1_UCPD1_STROBE Strobe signal bit for UCPD1 **/
#define SYSCFG_VREFBUF_CFGR1_UCPD1_STROBE		(1 << 9)
/** SYSCFG_VREFBUF_CFGR1_BOOSTEN I/O analog switch voltage booster enable **/
#define SYSCFG_VREFBUF_CFGR1_BOOSTEN		(1 << 8)

#define SYSCFG_VREFBUF_CFGR1_IR_MOD_SHIFT		6
#define SYSCFG_VREFBUF_CFGR1_IR_MOD_MASK		0x03
/** @defgroup syscfg_vrefbuf_cfgr1_ir_mod IRMOD IR Modulation Envelope signal selection.
@{*/
/**@}*/

/** SYSCFG_VREFBUF_CFGR1_IR_POL IR output polarity selection **/
#define SYSCFG_VREFBUF_CFGR1_IR_POL		(1 << 5)
/** SYSCFG_VREFBUF_CFGR1_PA11_PA12_RMP PA11 and PA12 remapping bit. **/
#define SYSCFG_VREFBUF_CFGR1_PA11_PA12_RMP		(1 << 4)

#define SYSCFG_VREFBUF_CFGR1_MEM_MODE_SHIFT		0
#define SYSCFG_VREFBUF_CFGR1_MEM_MODE_MASK		0x03
/** @defgroup syscfg_vrefbuf_cfgr1_mem_mode MEMMODE Memory mapping selection bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_vrefbuf_cfgr2 CFGR2 SYSCFG configuration register 1
@{*/

/** SYSCFG_VREFBUF_CFGR2_SRAM_PEF SRAM parity error flag **/
#define SYSCFG_VREFBUF_CFGR2_SRAM_PEF		(1 << 8)
/** SYSCFG_VREFBUF_CFGR2_ECC_LOCK ECC error lock bit **/
#define SYSCFG_VREFBUF_CFGR2_ECC_LOCK		(1 << 3)
/** SYSCFG_VREFBUF_CFGR2_PVD_LOCK PVD lock enable bit **/
#define SYSCFG_VREFBUF_CFGR2_PVD_LOCK		(1 << 2)
/** SYSCFG_VREFBUF_CFGR2_SRAM_PARITY_LOCK SRAM parity lock bit **/
#define SYSCFG_VREFBUF_CFGR2_SRAM_PARITY_LOCK		(1 << 1)
/** SYSCFG_VREFBUF_CFGR2_LOCKUP_LOCK Cortex-M0+ LOCKUP bit enable bit **/
#define SYSCFG_VREFBUF_CFGR2_LOCKUP_LOCK		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_vrefbuf_csr VREFBUFCSR VREFBUF control and status register
@{*/


#define SYSCFG_VREFBUF_VREFBUF_CSR_VRS_SHIFT		4
#define SYSCFG_VREFBUF_VREFBUF_CSR_VRS_MASK		0x07
/** @defgroup syscfg_vrefbuf_vrefbuf_csr_vrs VRS Voltage reference scale These bits select the value generated by the voltage reference buffer. Other: Reserved
@{*/
/**@}*/

/** SYSCFG_VREFBUF_VREFBUF_CSR_VRR Voltage reference buffer ready **/
#define SYSCFG_VREFBUF_VREFBUF_CSR_VRR		(1 << 3)
/** SYSCFG_VREFBUF_VREFBUF_CSR_HIZ High impedance mode This bit controls the analog switch to connect or not the VREF+ pin. Refer to Table196: VREF buffer modes for the mode descriptions depending on ENVR bit configuration. **/
#define SYSCFG_VREFBUF_VREFBUF_CSR_HIZ		(1 << 1)
/** SYSCFG_VREFBUF_VREFBUF_CSR_ENVR Voltage reference buffer mode enable This bit is used to enable the voltage reference buffer mode. **/
#define SYSCFG_VREFBUF_VREFBUF_CSR_ENVR		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_vrefbuf_ccr VREFBUFCCR VREFBUF calibration control register
@{*/


#define SYSCFG_VREFBUF_VREFBUF_CCR_TRIM_SHIFT		0
#define SYSCFG_VREFBUF_VREFBUF_CCR_TRIM_MASK		0x3f
/** @defgroup syscfg_vrefbuf_vrefbuf_ccr_trim TRIM Trimming code These bits are automatically initialized after reset with the trimming value stored in the Flash memory during the production test. Writing into these bits allows to tune the internal reference buffer voltage.
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_vrefbuf_itline0 ITLINE0 interrupt line 0 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE0_WWDG Window watchdog interrupt pending flag **/
#define SYSCFG_VREFBUF_ITLINE0_WWDG		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline1 ITLINE1 interrupt line 1 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE1_PVDOUT PVD supply monitoring interrupt request pending (EXTI line 16). **/
#define SYSCFG_VREFBUF_ITLINE1_PVDOUT		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline2 ITLINE2 interrupt line 2 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE2_RTC RTC **/
#define SYSCFG_VREFBUF_ITLINE2_RTC		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE2_TAMP TAMP **/
#define SYSCFG_VREFBUF_ITLINE2_TAMP		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline3 ITLINE3 interrupt line 3 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE3_FLASH_ECC FLASH_ECC **/
#define SYSCFG_VREFBUF_ITLINE3_FLASH_ECC		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE3_FLASH_ITF FLASH_ITF **/
#define SYSCFG_VREFBUF_ITLINE3_FLASH_ITF		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline4 ITLINE4 interrupt line 4 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE4_RCC RCC **/
#define SYSCFG_VREFBUF_ITLINE4_RCC		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline5 ITLINE5 interrupt line 5 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE5_EXTI1 EXTI1 **/
#define SYSCFG_VREFBUF_ITLINE5_EXTI1		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE5_EXTI0 EXTI0 **/
#define SYSCFG_VREFBUF_ITLINE5_EXTI0		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline6 ITLINE6 interrupt line 6 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE6_EXTI3 EXTI3 **/
#define SYSCFG_VREFBUF_ITLINE6_EXTI3		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE6_EXTI2 EXTI2 **/
#define SYSCFG_VREFBUF_ITLINE6_EXTI2		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline7 ITLINE7 interrupt line 7 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE7_EXTI15 EXTI15 **/
#define SYSCFG_VREFBUF_ITLINE7_EXTI15		(1 << 11)
/** SYSCFG_VREFBUF_ITLINE7_EXTI14 EXTI14 **/
#define SYSCFG_VREFBUF_ITLINE7_EXTI14		(1 << 10)
/** SYSCFG_VREFBUF_ITLINE7_EXTI13 EXTI13 **/
#define SYSCFG_VREFBUF_ITLINE7_EXTI13		(1 << 9)
/** SYSCFG_VREFBUF_ITLINE7_EXTI12 EXTI12 **/
#define SYSCFG_VREFBUF_ITLINE7_EXTI12		(1 << 8)
/** SYSCFG_VREFBUF_ITLINE7_EXTI11 EXTI11 **/
#define SYSCFG_VREFBUF_ITLINE7_EXTI11		(1 << 7)
/** SYSCFG_VREFBUF_ITLINE7_EXTI10 EXTI10 **/
#define SYSCFG_VREFBUF_ITLINE7_EXTI10		(1 << 6)
/** SYSCFG_VREFBUF_ITLINE7_EXTI9 EXTI9 **/
#define SYSCFG_VREFBUF_ITLINE7_EXTI9		(1 << 5)
/** SYSCFG_VREFBUF_ITLINE7_EXTI8 EXTI8 **/
#define SYSCFG_VREFBUF_ITLINE7_EXTI8		(1 << 4)
/** SYSCFG_VREFBUF_ITLINE7_EXTI7 EXTI7 **/
#define SYSCFG_VREFBUF_ITLINE7_EXTI7		(1 << 3)
/** SYSCFG_VREFBUF_ITLINE7_EXTI6 EXTI6 **/
#define SYSCFG_VREFBUF_ITLINE7_EXTI6		(1 << 2)
/** SYSCFG_VREFBUF_ITLINE7_EXTI5 EXTI5 **/
#define SYSCFG_VREFBUF_ITLINE7_EXTI5		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE7_EXTI4 EXTI4 **/
#define SYSCFG_VREFBUF_ITLINE7_EXTI4		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline8 ITLINE8 interrupt line 8 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE8_UCPD2 UCPD2 **/
#define SYSCFG_VREFBUF_ITLINE8_UCPD2		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE8_UCPD1 UCPD1 **/
#define SYSCFG_VREFBUF_ITLINE8_UCPD1		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline9 ITLINE9 interrupt line 9 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE9_DMA1_CH1 DMA1_CH1 **/
#define SYSCFG_VREFBUF_ITLINE9_DMA1_CH1		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline10 ITLINE10 interrupt line 10 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE10_DMA1_CH3 DMA1_CH3 **/
#define SYSCFG_VREFBUF_ITLINE10_DMA1_CH3		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE10_DMA1_CH2 DMA1_CH1 **/
#define SYSCFG_VREFBUF_ITLINE10_DMA1_CH2		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline11 ITLINE11 interrupt line 11 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE11_DMA1_CH7 DMA1_CH7 **/
#define SYSCFG_VREFBUF_ITLINE11_DMA1_CH7		(1 << 4)
/** SYSCFG_VREFBUF_ITLINE11_DMA1_CH6 DMA1_CH6 **/
#define SYSCFG_VREFBUF_ITLINE11_DMA1_CH6		(1 << 3)
/** SYSCFG_VREFBUF_ITLINE11_DMA1_CH5 DMA1_CH5 **/
#define SYSCFG_VREFBUF_ITLINE11_DMA1_CH5		(1 << 2)
/** SYSCFG_VREFBUF_ITLINE11_DMA1_CH4 DMA1_CH4 **/
#define SYSCFG_VREFBUF_ITLINE11_DMA1_CH4		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE11_DMAMUX DMAMUX **/
#define SYSCFG_VREFBUF_ITLINE11_DMAMUX		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline12 ITLINE12 interrupt line 12 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE12_COMP2 COMP2 **/
#define SYSCFG_VREFBUF_ITLINE12_COMP2		(1 << 2)
/** SYSCFG_VREFBUF_ITLINE12_COMP1 COMP1 **/
#define SYSCFG_VREFBUF_ITLINE12_COMP1		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE12_ADC ADC **/
#define SYSCFG_VREFBUF_ITLINE12_ADC		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline13 ITLINE13 interrupt line 13 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE13_TIM1_BRK TIM1_BRK **/
#define SYSCFG_VREFBUF_ITLINE13_TIM1_BRK		(1 << 3)
/** SYSCFG_VREFBUF_ITLINE13_TIM1_UPD TIM1_UPD **/
#define SYSCFG_VREFBUF_ITLINE13_TIM1_UPD		(1 << 2)
/** SYSCFG_VREFBUF_ITLINE13_TIM1_TRG TIM1_TRG **/
#define SYSCFG_VREFBUF_ITLINE13_TIM1_TRG		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE13_TIM1_CCU TIM1_CCU **/
#define SYSCFG_VREFBUF_ITLINE13_TIM1_CCU		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline14 ITLINE14 interrupt line 14 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE14_TIM1_CC TIM1_CC **/
#define SYSCFG_VREFBUF_ITLINE14_TIM1_CC		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline15 ITLINE15 interrupt line 15 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE15_TIM2 TIM2 **/
#define SYSCFG_VREFBUF_ITLINE15_TIM2		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline16 ITLINE16 interrupt line 16 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE16_TIM3 TIM3 **/
#define SYSCFG_VREFBUF_ITLINE16_TIM3		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline17 ITLINE17 interrupt line 17 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE17_LPTIM1 LPTIM1 **/
#define SYSCFG_VREFBUF_ITLINE17_LPTIM1		(1 << 2)
/** SYSCFG_VREFBUF_ITLINE17_DAC DAC **/
#define SYSCFG_VREFBUF_ITLINE17_DAC		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE17_TIM6 TIM6 **/
#define SYSCFG_VREFBUF_ITLINE17_TIM6		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline18 ITLINE18 interrupt line 18 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE18_LPTIM2 LPTIM2 **/
#define SYSCFG_VREFBUF_ITLINE18_LPTIM2		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE18_TIM7 TIM7 **/
#define SYSCFG_VREFBUF_ITLINE18_TIM7		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline19 ITLINE19 interrupt line 19 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE19_TIM14 TIM14 **/
#define SYSCFG_VREFBUF_ITLINE19_TIM14		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline20 ITLINE20 interrupt line 20 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE20_TIM15 TIM15 **/
#define SYSCFG_VREFBUF_ITLINE20_TIM15		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline21 ITLINE21 interrupt line 21 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE21_TIM16 TIM16 **/
#define SYSCFG_VREFBUF_ITLINE21_TIM16		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline22 ITLINE22 interrupt line 22 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE22_TIM17 TIM17 **/
#define SYSCFG_VREFBUF_ITLINE22_TIM17		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline23 ITLINE23 interrupt line 23 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE23_I2C1 I2C1 **/
#define SYSCFG_VREFBUF_ITLINE23_I2C1		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline24 ITLINE24 interrupt line 24 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE24_I2C2 I2C2 **/
#define SYSCFG_VREFBUF_ITLINE24_I2C2		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline25 ITLINE25 interrupt line 25 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE25_SPI1 SPI1 **/
#define SYSCFG_VREFBUF_ITLINE25_SPI1		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline26 ITLINE26 interrupt line 26 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE26_SPI2 SPI2 **/
#define SYSCFG_VREFBUF_ITLINE26_SPI2		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline27 ITLINE27 interrupt line 27 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE27_USART1 USART1 **/
#define SYSCFG_VREFBUF_ITLINE27_USART1		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline28 ITLINE28 interrupt line 28 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE28_USART2 USART2 **/
#define SYSCFG_VREFBUF_ITLINE28_USART2		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline29 ITLINE29 interrupt line 29 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE29_USART5 USART5 **/
#define SYSCFG_VREFBUF_ITLINE29_USART5		(1 << 2)
/** SYSCFG_VREFBUF_ITLINE29_USART4 USART4 **/
#define SYSCFG_VREFBUF_ITLINE29_USART4		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE29_USART3 USART3 **/
#define SYSCFG_VREFBUF_ITLINE29_USART3		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline30 ITLINE30 interrupt line 30 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE30_USART2 CEC **/
#define SYSCFG_VREFBUF_ITLINE30_USART2		(1 << 0)

/**@}*/

/** @defgroup syscfg_vrefbuf_itline31 ITLINE31 interrupt line 31 status register
@{*/

/** SYSCFG_VREFBUF_ITLINE31_AES AES **/
#define SYSCFG_VREFBUF_ITLINE31_AES		(1 << 1)
/** SYSCFG_VREFBUF_ITLINE31_RNG RNG **/
#define SYSCFG_VREFBUF_ITLINE31_RNG		(1 << 0)

/**@}*/

#pragma once 

/* --- SYSCFG_COMP_OPAMP: System configuration controller _Comparator and Operational amplifier  */

/** @defgroup syscfg_comp_opamp_registers System configuration controller _Comparator and
      Operational amplifier Register
@{*/

/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1 configuration register 1 **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x00)
/** SYSCFG_COMP_OPAMP_SYSCFG_RCR CCM SRAM protection register **/
#define SYSCFG_COMP_OPAMP_SYSCFG_RCR			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x04)
/** SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1 external interrupt configuration register 1 **/
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x08)
/** SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2 external interrupt configuration register 2 **/
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x0c)
/** SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3 external interrupt configuration register 3 **/
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x10)
/** SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4 external interrupt configuration register 4 **/
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x14)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR2 configuration register 2 **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR2			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x18)
/** SYSCFG_COMP_OPAMP_COMP1_CSR control and status register **/
#define SYSCFG_COMP_OPAMP_COMP1_CSR			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x1c)
/** SYSCFG_COMP_OPAMP_COMP2_CSR control and status register **/
#define SYSCFG_COMP_OPAMP_COMP2_CSR			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x20)
/** SYSCFG_COMP_OPAMP_COMP3_CSR control and status register **/
#define SYSCFG_COMP_OPAMP_COMP3_CSR			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x24)
/** SYSCFG_COMP_OPAMP_COMP4_CSR control and status register **/
#define SYSCFG_COMP_OPAMP_COMP4_CSR			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x28)
/** SYSCFG_COMP_OPAMP_COMP5_CSR control and status register **/
#define SYSCFG_COMP_OPAMP_COMP5_CSR			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x2c)
/** SYSCFG_COMP_OPAMP_COMP6_CSR control and status register **/
#define SYSCFG_COMP_OPAMP_COMP6_CSR			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x30)
/** SYSCFG_COMP_OPAMP_COMP7_CSR control and status register **/
#define SYSCFG_COMP_OPAMP_COMP7_CSR			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x34)
/** SYSCFG_COMP_OPAMP_OPAMP1_CSR control register **/
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x38)
/** SYSCFG_COMP_OPAMP_OPAMP2_CSR control register **/
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x3c)
/** SYSCFG_COMP_OPAMP_OPAMP3_CSR control register **/
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x40)
/** SYSCFG_COMP_OPAMP_OPAMP4_CSR control register **/
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR			MMIO32(SYSCFG_COMP_OPAMP_BASE + 0x44)

/**@}*/


/** @defgroup syscfg_comp_opamp_syscfg_cfgr1 SYSCFGCFGR1 configuration register 1
@{*/


#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_FPU_IT_SHIFT		26
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_FPU_IT_MASK		0x3f
/** @defgroup syscfg_comp_opamp_syscfg_cfgr1_fpu_it FPUIT Interrupt enable bits from FPU
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_ENCODER_MODE_SHIFT		22
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_ENCODER_MODE_MASK		0x03
/** @defgroup syscfg_comp_opamp_syscfg_cfgr1_encoder_mode ENCODERMODE Encoder mode
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_I2C2_FM I2C2 Fast Mode Plus **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_I2C2_FM		(1 << 21)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_I2C1_FM I2C1 Fast Mode Plus **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_I2C1_FM		(1 << 20)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_I2C_PB9_FM Fast Mode Plus (FM+) driving capability activation bits. **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_I2C_PB9_FM		(1 << 19)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_I2C_PB8_FM Fast Mode Plus (FM+) driving capability activation bits. **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_I2C_PB8_FM		(1 << 18)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_I2C_PB7_FM Fast Mode Plus (FM+) driving capability activation bits. **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_I2C_PB7_FM		(1 << 17)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_I2C_PB6_FM Fast Mode Plus (FM+) driving capability activation bits. **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_I2C_PB6_FM		(1 << 16)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_TIM7_DAC2_DMA_RMP TIM7 and DAC2 DMA request remapping bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_TIM7_DAC2_DMA_RMP		(1 << 14)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_TIM6_DAC1_DMA_RMP TIM6 and DAC1 DMA request remapping bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_TIM6_DAC1_DMA_RMP		(1 << 13)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_TIM17_DMA_RMP TIM17 DMA request remapping bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_TIM17_DMA_RMP		(1 << 12)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_TIM16_DMA_RMP TIM16 DMA request remapping bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_TIM16_DMA_RMP		(1 << 11)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_ADC24_DMA_RMP ADC24 DMA remapping bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_ADC24_DMA_RMP		(1 << 8)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_DAC_TRIG_RMP DAC trigger remap (when TSEL = 001) **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_DAC_TRIG_RMP		(1 << 7)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_TIM1_ITR_RMP Timer 1 ITR3 selection **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_TIM1_ITR_RMP		(1 << 6)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_USB_IT_RMP USB interrupt remap **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_USB_IT_RMP		(1 << 5)

#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_MEM_MODE_SHIFT		0
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR1_MEM_MODE_MASK		0x03
/** @defgroup syscfg_comp_opamp_syscfg_cfgr1_mem_mode MEMMODE Memory mapping selection bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_comp_opamp_syscfg_rcr SYSCFGRCR CCM SRAM protection register
@{*/

/** SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE7_WP CCM SRAM page write protection bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE7_WP		(1 << 7)
/** SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE6_WP CCM SRAM page write protection bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE6_WP		(1 << 6)
/** SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE5_WP CCM SRAM page write protection bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE5_WP		(1 << 5)
/** SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE4_WP CCM SRAM page write protection bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE4_WP		(1 << 4)
/** SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE3_WP CCM SRAM page write protection bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE3_WP		(1 << 3)
/** SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE2_WP CCM SRAM page write protection bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE2_WP		(1 << 2)
/** SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE1_WP CCM SRAM page write protection bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE1_WP		(1 << 1)
/** SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE0_WP CCM SRAM page write protection bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_RCR_PAGE0_WP		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_opamp_syscfg_exticr1 SYSCFGEXTICR1 external interrupt configuration register 1
@{*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1_EXTI3_SHIFT		12
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1_EXTI3_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr1_exti3 EXTI3 EXTI 3 configuration bits
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1_EXTI2_SHIFT		8
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1_EXTI2_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr1_exti2 EXTI2 EXTI 2 configuration bits
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1_EXTI1_SHIFT		4
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1_EXTI1_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr1_exti1 EXTI1 EXTI 1 configuration bits
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1_EXTI0_SHIFT		0
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR1_EXTI0_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr1_exti0 EXTI0 EXTI 0 configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_comp_opamp_syscfg_exticr2 SYSCFGEXTICR2 external interrupt configuration register 2
@{*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2_EXTI7_SHIFT		12
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2_EXTI7_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr2_exti7 EXTI7 EXTI 7 configuration bits
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2_EXTI6_SHIFT		8
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2_EXTI6_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr2_exti6 EXTI6 EXTI 6 configuration bits
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2_EXTI5_SHIFT		4
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2_EXTI5_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr2_exti5 EXTI5 EXTI 5 configuration bits
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2_EXTI4_SHIFT		0
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR2_EXTI4_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr2_exti4 EXTI4 EXTI 4 configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_comp_opamp_syscfg_exticr3 SYSCFGEXTICR3 external interrupt configuration register 3
@{*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3_EXTI11_SHIFT		12
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3_EXTI11_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr3_exti11 EXTI11 EXTI 11 configuration bits
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3_EXTI10_SHIFT		8
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3_EXTI10_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr3_exti10 EXTI10 EXTI 10 configuration bits
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3_EXTI9_SHIFT		4
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3_EXTI9_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr3_exti9 EXTI9 EXTI 9 configuration bits
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3_EXTI8_SHIFT		0
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR3_EXTI8_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr3_exti8 EXTI8 EXTI 8 configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_comp_opamp_syscfg_exticr4 SYSCFGEXTICR4 external interrupt configuration register 4
@{*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4_EXTI15_SHIFT		12
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4_EXTI15_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr4_exti15 EXTI15 EXTI 15 configuration bits
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4_EXTI14_SHIFT		8
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4_EXTI14_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr4_exti14 EXTI14 EXTI 14 configuration bits
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4_EXTI13_SHIFT		4
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4_EXTI13_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr4_exti13 EXTI13 EXTI 13 configuration bits
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4_EXTI12_SHIFT		0
#define SYSCFG_COMP_OPAMP_SYSCFG_EXTICR4_EXTI12_MASK		0x0f
/** @defgroup syscfg_comp_opamp_syscfg_exticr4_exti12 EXTI12 EXTI 12 configuration bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_comp_opamp_syscfg_cfgr2 SYSCFGCFGR2 configuration register 2
@{*/

/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR2_SRAM_PEF SRAM parity flag **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR2_SRAM_PEF		(1 << 8)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR2_BYP_ADD_PAR Bypass address bit 29 in parity calculation **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR2_BYP_ADD_PAR		(1 << 4)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR2_PVD_LOCK PVD lock enable bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR2_PVD_LOCK		(1 << 2)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR2_SRAM_PARITY_LOCK SRAM parity lock bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR2_SRAM_PARITY_LOCK		(1 << 1)
/** SYSCFG_COMP_OPAMP_SYSCFG_CFGR2_LOCUP_LOCK Cortex-M0 LOCKUP bit enable bit **/
#define SYSCFG_COMP_OPAMP_SYSCFG_CFGR2_LOCUP_LOCK		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_opamp_comp1_csr COMP1CSR control and status register
@{*/

/** SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1LOCK Comparator 1 lock **/
#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1LOCK		(1 << 31)
/** SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1OUT Comparator 1 output **/
#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1OUT		(1 << 30)

#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1_BLANKING_SHIFT		18
#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1_BLANKING_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp1_csr_comp1_blanking COMP1BLANKING Comparator 1 blanking source
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1HYST_SHIFT		16
#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1HYST_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp1_csr_comp1hyst COMP1HYST Comparator 1 hysteresis
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1POL Comparator 1 output polarity **/
#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1POL		(1 << 15)

#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1_OUT_SEL_SHIFT		10
#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1_OUT_SEL_MASK		0x0f
/** @defgroup syscfg_comp_opamp_comp1_csr_comp1_out_sel COMP1OUTSEL Comparator 1 output selection
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1INSEL_SHIFT		4
#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1INSEL_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp1_csr_comp1insel COMP1INSEL Comparator 1 inverting input selection
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1MODE_SHIFT		2
#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1MODE_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp1_csr_comp1mode COMP1MODE Comparator 1 mode
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1_INP_DAC COMP1_INP_DAC **/
#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1_INP_DAC		(1 << 1)
/** SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1EN Comparator 1 enable **/
#define SYSCFG_COMP_OPAMP_COMP1_CSR_COMP1EN		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_opamp_comp2_csr COMP2CSR control and status register
@{*/

/** SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2LOCK Comparator 2 lock **/
#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2LOCK		(1 << 31)

#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2_BLANKING_SHIFT		18
#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2_BLANKING_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp2_csr_comp2_blanking COMP2BLANKING Comparator 2 blanking source
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2HYST_SHIFT		16
#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2HYST_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp2_csr_comp2hyst COMP2HYST Comparator 2 hysteresis
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2POL Comparator 2 output polarity **/
#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2POL		(1 << 15)

#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2_OUT_SEL_SHIFT		10
#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2_OUT_SEL_MASK		0x0f
/** @defgroup syscfg_comp_opamp_comp2_csr_comp2_out_sel COMP2OUTSEL Comparator 2 output selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2INMSEL Comparator 1inverting input selection **/
#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2INMSEL		(1 << 9)
/** SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2INPSEL Comparator 2 non inverted input selection **/
#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2INPSEL		(1 << 7)

#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2INSEL_SHIFT		4
#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2INSEL_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp2_csr_comp2insel COMP2INSEL Comparator 2 inverting input selection
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2MODE_SHIFT		2
#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2MODE_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp2_csr_comp2mode COMP2MODE Comparator 2 mode
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2EN Comparator 2 enable **/
#define SYSCFG_COMP_OPAMP_COMP2_CSR_COMP2EN		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_opamp_comp3_csr COMP3CSR control and status register
@{*/

/** SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3LOCK Comparator 3 lock **/
#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3LOCK		(1 << 31)
/** SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3OUT Comparator 3 output **/
#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3OUT		(1 << 30)

#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3_BLANKING_SHIFT		18
#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3_BLANKING_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp3_csr_comp3_blanking COMP3BLANKING Comparator 3 blanking source
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3HYST_SHIFT		16
#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3HYST_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp3_csr_comp3hyst COMP3HYST Comparator 3 hysteresis
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3POL Comparator 3 output polarity **/
#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3POL		(1 << 15)

#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3_OUT_SEL_SHIFT		10
#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3_OUT_SEL_MASK		0x0f
/** @defgroup syscfg_comp_opamp_comp3_csr_comp3_out_sel COMP3OUTSEL Comparator 3 output selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3INPSEL Comparator 3 non inverted input selection **/
#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3INPSEL		(1 << 7)

#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3INSEL_SHIFT		4
#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3INSEL_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp3_csr_comp3insel COMP3INSEL Comparator 3 inverting input selection
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3MODE_SHIFT		2
#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3MODE_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp3_csr_comp3mode COMP3MODE Comparator 3 mode
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3EN Comparator 3 enable **/
#define SYSCFG_COMP_OPAMP_COMP3_CSR_COMP3EN		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_opamp_comp4_csr COMP4CSR control and status register
@{*/

/** SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4LOCK Comparator 4 lock **/
#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4LOCK		(1 << 31)
/** SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4OUT Comparator 4 output **/
#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4OUT		(1 << 30)

#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4_BLANKING_SHIFT		18
#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4_BLANKING_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp4_csr_comp4_blanking COMP4BLANKING Comparator 4 blanking source
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4HYST_SHIFT		16
#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4HYST_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp4_csr_comp4hyst COMP4HYST Comparator 4 hysteresis
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4POL Comparator 4 output polarity **/
#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4POL		(1 << 15)

#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4_OUT_SEL_SHIFT		10
#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4_OUT_SEL_MASK		0x0f
/** @defgroup syscfg_comp_opamp_comp4_csr_comp4_out_sel COMP4OUTSEL Comparator 4 output selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP4_CSR_COM4WINMODE Comparator 4 window mode **/
#define SYSCFG_COMP_OPAMP_COMP4_CSR_COM4WINMODE		(1 << 9)
/** SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4INPSEL Comparator 4 non inverted input selection **/
#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4INPSEL		(1 << 7)

#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4INSEL_SHIFT		4
#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4INSEL_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp4_csr_comp4insel COMP4INSEL Comparator 4 inverting input selection
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4MODE_SHIFT		2
#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4MODE_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp4_csr_comp4mode COMP4MODE Comparator 4 mode
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4EN Comparator 4 enable **/
#define SYSCFG_COMP_OPAMP_COMP4_CSR_COMP4EN		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_opamp_comp5_csr COMP5CSR control and status register
@{*/

/** SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5LOCK Comparator 5 lock **/
#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5LOCK		(1 << 31)
/** SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5OUT Comparator51 output **/
#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5OUT		(1 << 30)

#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5_BLANKING_SHIFT		18
#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5_BLANKING_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp5_csr_comp5_blanking COMP5BLANKING Comparator 5 blanking source
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5HYST_SHIFT		16
#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5HYST_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp5_csr_comp5hyst COMP5HYST Comparator 5 hysteresis
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5POL Comparator 5 output polarity **/
#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5POL		(1 << 15)

#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5_OUT_SEL_SHIFT		10
#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5_OUT_SEL_MASK		0x0f
/** @defgroup syscfg_comp_opamp_comp5_csr_comp5_out_sel COMP5OUTSEL Comparator 5 output selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5INPSEL Comparator 5 non inverted input selection **/
#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5INPSEL		(1 << 7)

#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5INSEL_SHIFT		4
#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5INSEL_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp5_csr_comp5insel COMP5INSEL Comparator 5 inverting input selection
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5MODE_SHIFT		2
#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5MODE_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp5_csr_comp5mode COMP5MODE Comparator 5 mode
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5EN Comparator 5 enable **/
#define SYSCFG_COMP_OPAMP_COMP5_CSR_COMP5EN		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_opamp_comp6_csr COMP6CSR control and status register
@{*/

/** SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6LOCK Comparator 6 lock **/
#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6LOCK		(1 << 31)
/** SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6OUT Comparator 6 output **/
#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6OUT		(1 << 30)

#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6_BLANKING_SHIFT		18
#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6_BLANKING_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp6_csr_comp6_blanking COMP6BLANKING Comparator 6 blanking source
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6HYST_SHIFT		16
#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6HYST_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp6_csr_comp6hyst COMP6HYST Comparator 6 hysteresis
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6POL Comparator 6 output polarity **/
#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6POL		(1 << 15)

#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6_OUT_SEL_SHIFT		10
#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6_OUT_SEL_MASK		0x0f
/** @defgroup syscfg_comp_opamp_comp6_csr_comp6_out_sel COMP6OUTSEL Comparator 6 output selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP6_CSR_COM6WINMODE Comparator 6 window mode **/
#define SYSCFG_COMP_OPAMP_COMP6_CSR_COM6WINMODE		(1 << 9)
/** SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6INPSEL Comparator 6 non inverted input selection **/
#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6INPSEL		(1 << 7)

#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6INSEL_SHIFT		4
#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6INSEL_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp6_csr_comp6insel COMP6INSEL Comparator 6 inverting input selection
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6MODE_SHIFT		2
#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6MODE_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp6_csr_comp6mode COMP6MODE Comparator 6 mode
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6EN Comparator 6 enable **/
#define SYSCFG_COMP_OPAMP_COMP6_CSR_COMP6EN		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_opamp_comp7_csr COMP7CSR control and status register
@{*/

/** SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7LOCK Comparator 7 lock **/
#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7LOCK		(1 << 31)
/** SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7OUT Comparator 7 output **/
#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7OUT		(1 << 30)

#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7_BLANKING_SHIFT		18
#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7_BLANKING_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp7_csr_comp7_blanking COMP7BLANKING Comparator 7 blanking source
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7HYST_SHIFT		16
#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7HYST_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp7_csr_comp7hyst COMP7HYST Comparator 7 hysteresis
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7POL Comparator 7 output polarity **/
#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7POL		(1 << 15)

#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7_OUT_SEL_SHIFT		10
#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7_OUT_SEL_MASK		0x0f
/** @defgroup syscfg_comp_opamp_comp7_csr_comp7_out_sel COMP7OUTSEL Comparator 7 output selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7INPSEL Comparator 7 non inverted input selection **/
#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7INPSEL		(1 << 7)

#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7INSEL_SHIFT		4
#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7INSEL_MASK		0x07
/** @defgroup syscfg_comp_opamp_comp7_csr_comp7insel COMP7INSEL Comparator 7 inverting input selection
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7MODE_SHIFT		2
#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7MODE_MASK		0x03
/** @defgroup syscfg_comp_opamp_comp7_csr_comp7mode COMP7MODE Comparator 7 mode
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7EN Comparator 7 enable **/
#define SYSCFG_COMP_OPAMP_COMP7_CSR_COMP7EN		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_opamp_opamp1_csr OPAMP1CSR control register
@{*/

/** SYSCFG_COMP_OPAMP_OPAMP1_CSR_LOCK OPAMP 1 lock **/
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_LOCK		(1 << 31)
/** SYSCFG_COMP_OPAMP_OPAMP1_CSR_OUTCAL OPAMP 1 ouput status flag **/
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_OUTCAL		(1 << 30)
/** SYSCFG_COMP_OPAMP_OPAMP1_CSR_TSTREF TSTREF **/
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_TSTREF		(1 << 29)

#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_TRIMOFFSETN_SHIFT		24
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_TRIMOFFSETN_MASK		0x1f
/** @defgroup syscfg_comp_opamp_opamp1_csr_trimoffsetn TRIMOFFSETN Offset trimming value (NMOS)
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_TRIMOFFSETP_SHIFT		19
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_TRIMOFFSETP_MASK		0x1f
/** @defgroup syscfg_comp_opamp_opamp1_csr_trimoffsetp TRIMOFFSETP Offset trimming value (PMOS)
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP1_CSR_USER_TRIM User trimming enable **/
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_USER_TRIM		(1 << 18)

#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_PGA_GAIN_SHIFT		14
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_PGA_GAIN_MASK		0x0f
/** @defgroup syscfg_comp_opamp_opamp1_csr_pga_gain PGAGAIN Gain in PGA mode
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_CALSEL_SHIFT		12
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_CALSEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp1_csr_calsel CALSEL Calibration selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP1_CSR_CALON Calibration mode enable **/
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_CALON		(1 << 11)

#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_VPS_SEL_SHIFT		9
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_VPS_SEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp1_csr_vps_sel VPSSEL OPAMP1 Non inverting input secondary selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP1_CSR_VMS_SEL OPAMP1 inverting input secondary selection **/
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_VMS_SEL		(1 << 8)
/** SYSCFG_COMP_OPAMP_OPAMP1_CSR_TCM_EN Timer controlled Mux mode enable **/
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_TCM_EN		(1 << 7)

#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_VM_SEL_SHIFT		5
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_VM_SEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp1_csr_vm_sel VMSEL OPAMP1 inverting input selection
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_VP_SEL_SHIFT		2
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_VP_SEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp1_csr_vp_sel VPSEL OPAMP1 Non inverting input selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP1_CSR_FORCE_VP FORCE_VP **/
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_FORCE_VP		(1 << 1)
/** SYSCFG_COMP_OPAMP_OPAMP1_CSR_OPAMP1_EN OPAMP1 enable **/
#define SYSCFG_COMP_OPAMP_OPAMP1_CSR_OPAMP1_EN		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_opamp_opamp2_csr OPAMP2CSR control register
@{*/

/** SYSCFG_COMP_OPAMP_OPAMP2_CSR_LOCK OPAMP 2 lock **/
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_LOCK		(1 << 31)
/** SYSCFG_COMP_OPAMP_OPAMP2_CSR_OUTCAL OPAMP 2 ouput status flag **/
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_OUTCAL		(1 << 30)
/** SYSCFG_COMP_OPAMP_OPAMP2_CSR_TSTREF TSTREF **/
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_TSTREF		(1 << 29)

#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_TRIMOFFSETN_SHIFT		24
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_TRIMOFFSETN_MASK		0x1f
/** @defgroup syscfg_comp_opamp_opamp2_csr_trimoffsetn TRIMOFFSETN Offset trimming value (NMOS)
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_TRIMOFFSETP_SHIFT		19
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_TRIMOFFSETP_MASK		0x1f
/** @defgroup syscfg_comp_opamp_opamp2_csr_trimoffsetp TRIMOFFSETP Offset trimming value (PMOS)
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP2_CSR_USER_TRIM User trimming enable **/
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_USER_TRIM		(1 << 18)

#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_PGA_GAIN_SHIFT		14
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_PGA_GAIN_MASK		0x0f
/** @defgroup syscfg_comp_opamp_opamp2_csr_pga_gain PGAGAIN Gain in PGA mode
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_CAL_SEL_SHIFT		12
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_CAL_SEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp2_csr_cal_sel CALSEL Calibration selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP2_CSR_CALON Calibration mode enable **/
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_CALON		(1 << 11)

#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_VPS_SEL_SHIFT		9
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_VPS_SEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp2_csr_vps_sel VPSSEL OPAMP2 Non inverting input secondary selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP2_CSR_VMS_SEL OPAMP2 inverting input secondary selection **/
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_VMS_SEL		(1 << 8)
/** SYSCFG_COMP_OPAMP_OPAMP2_CSR_TCM_EN Timer controlled Mux mode enable **/
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_TCM_EN		(1 << 7)

#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_VM_SEL_SHIFT		5
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_VM_SEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp2_csr_vm_sel VMSEL OPAMP2 inverting input selection
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_VP_SEL_SHIFT		2
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_VP_SEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp2_csr_vp_sel VPSEL OPAMP2 Non inverting input selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP2_CSR_FORCE_VP FORCE_VP **/
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_FORCE_VP		(1 << 1)
/** SYSCFG_COMP_OPAMP_OPAMP2_CSR_OPAMP2EN OPAMP2 enable **/
#define SYSCFG_COMP_OPAMP_OPAMP2_CSR_OPAMP2EN		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_opamp_opamp3_csr OPAMP3CSR control register
@{*/

/** SYSCFG_COMP_OPAMP_OPAMP3_CSR_LOCK OPAMP 3 lock **/
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_LOCK		(1 << 31)
/** SYSCFG_COMP_OPAMP_OPAMP3_CSR_OUTCAL OPAMP 3 ouput status flag **/
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_OUTCAL		(1 << 30)
/** SYSCFG_COMP_OPAMP_OPAMP3_CSR_TSTREF TSTREF **/
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_TSTREF		(1 << 29)

#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_TRIMOFFSETN_SHIFT		24
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_TRIMOFFSETN_MASK		0x1f
/** @defgroup syscfg_comp_opamp_opamp3_csr_trimoffsetn TRIMOFFSETN Offset trimming value (NMOS)
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_TRIMOFFSETP_SHIFT		19
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_TRIMOFFSETP_MASK		0x1f
/** @defgroup syscfg_comp_opamp_opamp3_csr_trimoffsetp TRIMOFFSETP Offset trimming value (PMOS)
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP3_CSR_USER_TRIM User trimming enable **/
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_USER_TRIM		(1 << 18)

#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_PGA_GAIN_SHIFT		14
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_PGA_GAIN_MASK		0x0f
/** @defgroup syscfg_comp_opamp_opamp3_csr_pga_gain PGAGAIN Gain in PGA mode
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_CALSEL_SHIFT		12
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_CALSEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp3_csr_calsel CALSEL Calibration selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP3_CSR_CALON Calibration mode enable **/
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_CALON		(1 << 11)

#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_VPS_SEL_SHIFT		9
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_VPS_SEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp3_csr_vps_sel VPSSEL OPAMP3 Non inverting input secondary selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP3_CSR_VMS_SEL OPAMP3 inverting input secondary selection **/
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_VMS_SEL		(1 << 8)
/** SYSCFG_COMP_OPAMP_OPAMP3_CSR_TCM_EN Timer controlled Mux mode enable **/
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_TCM_EN		(1 << 7)

#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_VM_SEL_SHIFT		5
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_VM_SEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp3_csr_vm_sel VMSEL OPAMP3 inverting input selection
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_VP_SEL_SHIFT		2
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_VP_SEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp3_csr_vp_sel VPSEL OPAMP3 Non inverting input selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP3_CSR_FORCE_VP FORCE_VP **/
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_FORCE_VP		(1 << 1)
/** SYSCFG_COMP_OPAMP_OPAMP3_CSR_OPAMP3EN OPAMP3 enable **/
#define SYSCFG_COMP_OPAMP_OPAMP3_CSR_OPAMP3EN		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_opamp_opamp4_csr OPAMP4CSR control register
@{*/

/** SYSCFG_COMP_OPAMP_OPAMP4_CSR_LOCK OPAMP 4 lock **/
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_LOCK		(1 << 31)
/** SYSCFG_COMP_OPAMP_OPAMP4_CSR_OUTCAL OPAMP 4 ouput status flag **/
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_OUTCAL		(1 << 30)
/** SYSCFG_COMP_OPAMP_OPAMP4_CSR_TSTREF TSTREF **/
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_TSTREF		(1 << 29)

#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_TRIMOFFSETN_SHIFT		24
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_TRIMOFFSETN_MASK		0x1f
/** @defgroup syscfg_comp_opamp_opamp4_csr_trimoffsetn TRIMOFFSETN Offset trimming value (NMOS)
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_TRIMOFFSETP_SHIFT		19
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_TRIMOFFSETP_MASK		0x1f
/** @defgroup syscfg_comp_opamp_opamp4_csr_trimoffsetp TRIMOFFSETP Offset trimming value (PMOS)
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP4_CSR_USER_TRIM User trimming enable **/
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_USER_TRIM		(1 << 18)

#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_PGA_GAIN_SHIFT		14
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_PGA_GAIN_MASK		0x0f
/** @defgroup syscfg_comp_opamp_opamp4_csr_pga_gain PGAGAIN Gain in PGA mode
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_CALSEL_SHIFT		12
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_CALSEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp4_csr_calsel CALSEL Calibration selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP4_CSR_CALON Calibration mode enable **/
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_CALON		(1 << 11)

#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_VPS_SEL_SHIFT		9
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_VPS_SEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp4_csr_vps_sel VPSSEL OPAMP4 Non inverting input secondary selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP4_CSR_VMS_SEL OPAMP4 inverting input secondary selection **/
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_VMS_SEL		(1 << 8)
/** SYSCFG_COMP_OPAMP_OPAMP4_CSR_TCM_EN Timer controlled Mux mode enable **/
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_TCM_EN		(1 << 7)

#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_VM_SEL_SHIFT		5
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_VM_SEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp4_csr_vm_sel VMSEL OPAMP4 inverting input selection
@{*/
/**@}*/


#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_VP_SEL_SHIFT		2
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_VP_SEL_MASK		0x03
/** @defgroup syscfg_comp_opamp_opamp4_csr_vp_sel VPSEL OPAMP4 Non inverting input selection
@{*/
/**@}*/

/** SYSCFG_COMP_OPAMP_OPAMP4_CSR_FORCE_VP FORCE_VP **/
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_FORCE_VP		(1 << 1)
/** SYSCFG_COMP_OPAMP_OPAMP4_CSR_OPAMP4EN OPAMP4 enable **/
#define SYSCFG_COMP_OPAMP_OPAMP4_CSR_OPAMP4EN		(1 << 0)

/**@}*/

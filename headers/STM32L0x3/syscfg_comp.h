#pragma once 

/* --- SYSCFG_COMP: System configuration controller and Comparator -- */

/** @defgroup syscfg_comp_registers System configuration controller and
      Comparator Register
@{*/

/** SYSCFG_COMP_CFGR1 SYSCFG configuration register 1 **/
#define SYSCFG_COMP_CFGR1			MMIO32(SYSCFG_COMP_BASE + 0x00)
/** SYSCFG_COMP_CFGR2 SYSCFG configuration register 2 **/
#define SYSCFG_COMP_CFGR2			MMIO32(SYSCFG_COMP_BASE + 0x04)
/** SYSCFG_COMP_EXTICR1 external interrupt configuration register 1 **/
#define SYSCFG_COMP_EXTICR1			MMIO32(SYSCFG_COMP_BASE + 0x08)
/** SYSCFG_COMP_EXTICR2 external interrupt configuration register 2 **/
#define SYSCFG_COMP_EXTICR2			MMIO32(SYSCFG_COMP_BASE + 0x0c)
/** SYSCFG_COMP_EXTICR3 external interrupt configuration register 3 **/
#define SYSCFG_COMP_EXTICR3			MMIO32(SYSCFG_COMP_BASE + 0x10)
/** SYSCFG_COMP_EXTICR4 external interrupt configuration register 4 **/
#define SYSCFG_COMP_EXTICR4			MMIO32(SYSCFG_COMP_BASE + 0x14)
/** SYSCFG_COMP_COMP1_CSR Comparator 1 control and status register **/
#define SYSCFG_COMP_COMP1_CSR			MMIO32(SYSCFG_COMP_BASE + 0x18)
/** SYSCFG_COMP_COMP2_CSR Comparator 2 control and status register **/
#define SYSCFG_COMP_COMP2_CSR			MMIO32(SYSCFG_COMP_BASE + 0x1c)
/** SYSCFG_COMP_CFGR3 SYSCFG configuration register 3 **/
#define SYSCFG_COMP_CFGR3			MMIO32(SYSCFG_COMP_BASE + 0x20)

/**@}*/


/** @defgroup syscfg_comp_cfgr1 CFGR1 SYSCFG configuration register 1
@{*/


#define SYSCFG_COMP_CFGR1_BOOT_MODE_SHIFT		8
#define SYSCFG_COMP_CFGR1_BOOT_MODE_MASK		0x03
/** @defgroup syscfg_comp_cfgr1_boot_mode BOOTMODE Boot mode selected by the boot pins status bits
@{*/
/**@}*/


#define SYSCFG_COMP_CFGR1_MEM_MODE_SHIFT		0
#define SYSCFG_COMP_CFGR1_MEM_MODE_MASK		0x03
/** @defgroup syscfg_comp_cfgr1_mem_mode MEMMODE Memory mapping selection bits
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_comp_cfgr2 CFGR2 SYSCFG configuration register 2
@{*/

/** SYSCFG_COMP_CFGR2_I2C2_FMP I2C2 Fm+ drive capability enable bit **/
#define SYSCFG_COMP_CFGR2_I2C2_FMP		(1 << 13)
/** SYSCFG_COMP_CFGR2_I2C1_FMP I2C1 Fm+ drive capability enable bit **/
#define SYSCFG_COMP_CFGR2_I2C1_FMP		(1 << 12)
/** SYSCFG_COMP_CFGR2_I2C_PB9_FMP Fm+ drive capability on PB9 enable bit **/
#define SYSCFG_COMP_CFGR2_I2C_PB9_FMP		(1 << 11)
/** SYSCFG_COMP_CFGR2_I2C_PB8_FMP Fm+ drive capability on PB8 enable bit **/
#define SYSCFG_COMP_CFGR2_I2C_PB8_FMP		(1 << 10)
/** SYSCFG_COMP_CFGR2_I2C_PB7_FMP Fm+ drive capability on PB7 enable bit **/
#define SYSCFG_COMP_CFGR2_I2C_PB7_FMP		(1 << 9)
/** SYSCFG_COMP_CFGR2_I2C_PB6_FMP Fm+ drive capability on PB6 enable bit **/
#define SYSCFG_COMP_CFGR2_I2C_PB6_FMP		(1 << 8)
/** SYSCFG_COMP_CFGR2_FWDISEN Firewall disable bit **/
#define SYSCFG_COMP_CFGR2_FWDISEN		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_exticr1 EXTICR1 external interrupt configuration register 1
@{*/


#define SYSCFG_COMP_EXTICR1_EXTI3_SHIFT		12
#define SYSCFG_COMP_EXTICR1_EXTI3_MASK		0x0f
/** @defgroup syscfg_comp_exticr1_exti3 EXTI3 EXTI x configuration (x = 0 to 3)
@{*/
/**@}*/


#define SYSCFG_COMP_EXTICR1_EXTI2_SHIFT		8
#define SYSCFG_COMP_EXTICR1_EXTI2_MASK		0x0f
/** @defgroup syscfg_comp_exticr1_exti2 EXTI2 EXTI x configuration (x = 0 to 3)
@{*/
/**@}*/


#define SYSCFG_COMP_EXTICR1_EXTI1_SHIFT		4
#define SYSCFG_COMP_EXTICR1_EXTI1_MASK		0x0f
/** @defgroup syscfg_comp_exticr1_exti1 EXTI1 EXTI x configuration (x = 0 to 3)
@{*/
/**@}*/


#define SYSCFG_COMP_EXTICR1_EXTI0_SHIFT		0
#define SYSCFG_COMP_EXTICR1_EXTI0_MASK		0x0f
/** @defgroup syscfg_comp_exticr1_exti0 EXTI0 EXTI x configuration (x = 0 to 3)
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_comp_exticr2 EXTICR2 external interrupt configuration register 2
@{*/


#define SYSCFG_COMP_EXTICR2_EXTI7_SHIFT		12
#define SYSCFG_COMP_EXTICR2_EXTI7_MASK		0x0f
/** @defgroup syscfg_comp_exticr2_exti7 EXTI7 EXTI x configuration (x = 4 to 7)
@{*/
/**@}*/


#define SYSCFG_COMP_EXTICR2_EXTI6_SHIFT		8
#define SYSCFG_COMP_EXTICR2_EXTI6_MASK		0x0f
/** @defgroup syscfg_comp_exticr2_exti6 EXTI6 EXTI x configuration (x = 4 to 7)
@{*/
/**@}*/


#define SYSCFG_COMP_EXTICR2_EXTI5_SHIFT		4
#define SYSCFG_COMP_EXTICR2_EXTI5_MASK		0x0f
/** @defgroup syscfg_comp_exticr2_exti5 EXTI5 EXTI x configuration (x = 4 to 7)
@{*/
/**@}*/


#define SYSCFG_COMP_EXTICR2_EXTI4_SHIFT		0
#define SYSCFG_COMP_EXTICR2_EXTI4_MASK		0x0f
/** @defgroup syscfg_comp_exticr2_exti4 EXTI4 EXTI x configuration (x = 4 to 7)
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_comp_exticr3 EXTICR3 external interrupt configuration register 3
@{*/


#define SYSCFG_COMP_EXTICR3_EXTI11_SHIFT		12
#define SYSCFG_COMP_EXTICR3_EXTI11_MASK		0x0f
/** @defgroup syscfg_comp_exticr3_exti11 EXTI11 EXTI x configuration (x = 8 to 11)
@{*/
/**@}*/


#define SYSCFG_COMP_EXTICR3_EXTI10_SHIFT		8
#define SYSCFG_COMP_EXTICR3_EXTI10_MASK		0x0f
/** @defgroup syscfg_comp_exticr3_exti10 EXTI10 EXTI10
@{*/
/**@}*/


#define SYSCFG_COMP_EXTICR3_EXTI9_SHIFT		4
#define SYSCFG_COMP_EXTICR3_EXTI9_MASK		0x0f
/** @defgroup syscfg_comp_exticr3_exti9 EXTI9 EXTI x configuration (x = 8 to 11)
@{*/
/**@}*/


#define SYSCFG_COMP_EXTICR3_EXTI8_SHIFT		0
#define SYSCFG_COMP_EXTICR3_EXTI8_MASK		0x0f
/** @defgroup syscfg_comp_exticr3_exti8 EXTI8 EXTI x configuration (x = 8 to 11)
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_comp_exticr4 EXTICR4 external interrupt configuration register 4
@{*/


#define SYSCFG_COMP_EXTICR4_EXTI15_SHIFT		12
#define SYSCFG_COMP_EXTICR4_EXTI15_MASK		0x0f
/** @defgroup syscfg_comp_exticr4_exti15 EXTI15 EXTI x configuration (x = 12 to 15)
@{*/
/**@}*/


#define SYSCFG_COMP_EXTICR4_EXTI14_SHIFT		8
#define SYSCFG_COMP_EXTICR4_EXTI14_MASK		0x0f
/** @defgroup syscfg_comp_exticr4_exti14 EXTI14 EXTI14
@{*/
/**@}*/


#define SYSCFG_COMP_EXTICR4_EXTI13_SHIFT		4
#define SYSCFG_COMP_EXTICR4_EXTI13_MASK		0x0f
/** @defgroup syscfg_comp_exticr4_exti13 EXTI13 EXTI13
@{*/
/**@}*/


#define SYSCFG_COMP_EXTICR4_EXTI12_SHIFT		0
#define SYSCFG_COMP_EXTICR4_EXTI12_MASK		0x0f
/** @defgroup syscfg_comp_exticr4_exti12 EXTI12 EXTI12
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_comp_comp1_csr COMP1CSR Comparator 1 control and status register
@{*/

/** SYSCFG_COMP_COMP1_CSR_COMP1LOCK COMP1_CSR register lock bit **/
#define SYSCFG_COMP_COMP1_CSR_COMP1LOCK		(1 << 31)
/** SYSCFG_COMP_COMP1_CSR_COMP1VALUE Comparator 1 output status bit **/
#define SYSCFG_COMP_COMP1_CSR_COMP1VALUE		(1 << 30)
/** SYSCFG_COMP_COMP1_CSR_COMP1POLARITY Comparator 1 polarity selection bit **/
#define SYSCFG_COMP_COMP1_CSR_COMP1POLARITY		(1 << 15)
/** SYSCFG_COMP_COMP1_CSR_COMP1LPTIMIN1 Comparator 1 LPTIM input propagation bit **/
#define SYSCFG_COMP_COMP1_CSR_COMP1LPTIMIN1		(1 << 12)
/** SYSCFG_COMP_COMP1_CSR_COMP1WM Comparator 1 window mode selection bit **/
#define SYSCFG_COMP_COMP1_CSR_COMP1WM		(1 << 8)

#define SYSCFG_COMP_COMP1_CSR_COMP1INNSEL_SHIFT		4
#define SYSCFG_COMP_COMP1_CSR_COMP1INNSEL_MASK		0x03
/** @defgroup syscfg_comp_comp1_csr_comp1innsel COMP1INNSEL Comparator 1 Input Minus connection configuration bit
@{*/
/**@}*/

/** SYSCFG_COMP_COMP1_CSR_COMP1EN Comparator 1 enable bit **/
#define SYSCFG_COMP_COMP1_CSR_COMP1EN		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_comp2_csr COMP2CSR Comparator 2 control and status register
@{*/

/** SYSCFG_COMP_COMP2_CSR_COMP2LOCK COMP2_CSR register lock bit **/
#define SYSCFG_COMP_COMP2_CSR_COMP2LOCK		(1 << 31)
/** SYSCFG_COMP_COMP2_CSR_COMP2VALUE Comparator 2 output status bit **/
#define SYSCFG_COMP_COMP2_CSR_COMP2VALUE		(1 << 20)
/** SYSCFG_COMP_COMP2_CSR_COMP2POLARITY Comparator 2 polarity selection bit **/
#define SYSCFG_COMP_COMP2_CSR_COMP2POLARITY		(1 << 15)
/** SYSCFG_COMP_COMP2_CSR_COMP2LPTIMIN1 Comparator 2 LPTIM input 1 propagation bit **/
#define SYSCFG_COMP_COMP2_CSR_COMP2LPTIMIN1		(1 << 13)
/** SYSCFG_COMP_COMP2_CSR_COMP2LPTIMIN2 Comparator 2 LPTIM input 2 propagation bit **/
#define SYSCFG_COMP_COMP2_CSR_COMP2LPTIMIN2		(1 << 12)

#define SYSCFG_COMP_COMP2_CSR_COMP2INPSEL_SHIFT		8
#define SYSCFG_COMP_COMP2_CSR_COMP2INPSEL_MASK		0x07
/** @defgroup syscfg_comp_comp2_csr_comp2inpsel COMP2INPSEL Comparator 2 Input Plus connection configuration bit
@{*/
/**@}*/


#define SYSCFG_COMP_COMP2_CSR_COMP2INNSEL_SHIFT		4
#define SYSCFG_COMP_COMP2_CSR_COMP2INNSEL_MASK		0x07
/** @defgroup syscfg_comp_comp2_csr_comp2innsel COMP2INNSEL Comparator 2 Input Minus connection configuration bit
@{*/
/**@}*/

/** SYSCFG_COMP_COMP2_CSR_COMP2SPEED Comparator 2 power mode selection bit **/
#define SYSCFG_COMP_COMP2_CSR_COMP2SPEED		(1 << 3)
/** SYSCFG_COMP_COMP2_CSR_COMP2EN Comparator 2 enable bit **/
#define SYSCFG_COMP_COMP2_CSR_COMP2EN		(1 << 0)

/**@}*/

/** @defgroup syscfg_comp_cfgr3 CFGR3 SYSCFG configuration register 3
@{*/

/** SYSCFG_COMP_CFGR3_REF_LOCK REF_CTRL lock bit **/
#define SYSCFG_COMP_CFGR3_REF_LOCK		(1 << 31)
/** SYSCFG_COMP_CFGR3_VREFINT_RDYF VREFINT ready flag **/
#define SYSCFG_COMP_CFGR3_VREFINT_RDYF		(1 << 30)
/** SYSCFG_COMP_CFGR3_VREFINT_COMP_RDYF VREFINT for comparator ready flag **/
#define SYSCFG_COMP_CFGR3_VREFINT_COMP_RDYF		(1 << 29)
/** SYSCFG_COMP_CFGR3_VREFINT_ADC_RDYF VREFINT for ADC ready flag **/
#define SYSCFG_COMP_CFGR3_VREFINT_ADC_RDYF		(1 << 28)
/** SYSCFG_COMP_CFGR3_SENSOR_ADC_RDYF Sensor for ADC ready flag **/
#define SYSCFG_COMP_CFGR3_SENSOR_ADC_RDYF		(1 << 27)
/** SYSCFG_COMP_CFGR3_REF_RC48MHz_RDYF VREFINT for 48 MHz RC oscillator ready flag **/
#define SYSCFG_COMP_CFGR3_REF_RC48MHz_RDYF		(1 << 26)
/** SYSCFG_COMP_CFGR3_ENREF_RC48MHz VREFINT reference for 48 MHz RC oscillator enable bit **/
#define SYSCFG_COMP_CFGR3_ENREF_RC48MHz		(1 << 13)
/** SYSCFG_COMP_CFGR3_ENBUF_VREFINT_COMP VREFINT reference for comparator 2 enable bit **/
#define SYSCFG_COMP_CFGR3_ENBUF_VREFINT_COMP		(1 << 12)
/** SYSCFG_COMP_CFGR3_ENBUF_SENSOR_ADC Sensor reference for ADC enable bit **/
#define SYSCFG_COMP_CFGR3_ENBUF_SENSOR_ADC		(1 << 9)
/** SYSCFG_COMP_CFGR3_ENBUF_BGAP_ADC VREFINT reference for ADC enable bit **/
#define SYSCFG_COMP_CFGR3_ENBUF_BGAP_ADC		(1 << 8)

#define SYSCFG_COMP_CFGR3_SEL_VREF_OUT_SHIFT		4
#define SYSCFG_COMP_CFGR3_SEL_VREF_OUT_MASK		0x03
/** @defgroup syscfg_comp_cfgr3_sel_vref_out SELVREFOUT BGAP_ADC connection bit
@{*/
/**@}*/

/** SYSCFG_COMP_CFGR3_EN_BGAP Vref Enable bit **/
#define SYSCFG_COMP_CFGR3_EN_BGAP		(1 << 0)

/**@}*/

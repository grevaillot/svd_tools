#pragma once 

/* --- SYSCFG: System configuration controller ---------------------- */

/** @defgroup syscfg_registers System configuration controller Register
@{*/

/** SYSCFG_PMCR peripheral mode configuration register **/
#define SYSCFG_PMCR			MMIO32(SYSCFG_BASE + 0x04)
/** SYSCFG_EXTICR1 external interrupt configuration register 1 **/
#define SYSCFG_EXTICR1			MMIO32(SYSCFG_BASE + 0x08)
/** SYSCFG_EXTICR2 external interrupt configuration register 2 **/
#define SYSCFG_EXTICR2			MMIO32(SYSCFG_BASE + 0x0c)
/** SYSCFG_EXTICR3 external interrupt configuration register 3 **/
#define SYSCFG_EXTICR3			MMIO32(SYSCFG_BASE + 0x10)
/** SYSCFG_EXTICR4 external interrupt configuration register 4 **/
#define SYSCFG_EXTICR4			MMIO32(SYSCFG_BASE + 0x14)
/** SYSCFG_CCCSR compensation cell control/status register **/
#define SYSCFG_CCCSR			MMIO32(SYSCFG_BASE + 0x20)
/** SYSCFG_CCVR SYSCFG compensation cell value register **/
#define SYSCFG_CCVR			MMIO32(SYSCFG_BASE + 0x24)
/** SYSCFG_CCCR SYSCFG compensation cell code register **/
#define SYSCFG_CCCR			MMIO32(SYSCFG_BASE + 0x28)
/** SYSCFG_SYSCFG_BRK_LOCKUPR SYSCFG timer break lockup register **/
#define SYSCFG_SYSCFG_BRK_LOCKUPR			MMIO32(SYSCFG_BASE + 0x118)

/**@}*/


/** @defgroup syscfg_pmcr PMCR peripheral mode configuration register
@{*/

/** SYSCFG_PMCR_PC3SO PC3 Switch Open **/
#define SYSCFG_PMCR_PC3SO		(1 << 27)
/** SYSCFG_PMCR_PC2SO PC2 Switch Open **/
#define SYSCFG_PMCR_PC2SO		(1 << 26)
/** SYSCFG_PMCR_PA1SO PA1 Switch Open **/
#define SYSCFG_PMCR_PA1SO		(1 << 25)
/** SYSCFG_PMCR_PA0SO PA0 Switch Open **/
#define SYSCFG_PMCR_PA0SO		(1 << 24)

#define SYSCFG_PMCR_EPIS_SHIFT		21
#define SYSCFG_PMCR_EPIS_MASK		0x07
/** @defgroup syscfg_pmcr_epis EPIS Ethernet PHY Interface Selection
@{*/
/**@}*/

/** SYSCFG_PMCR_BOOSTE Booster Enable **/
#define SYSCFG_PMCR_BOOSTE		(1 << 8)
/** SYSCFG_PMCR_PB9FMP PB(9) Fm+ **/
#define SYSCFG_PMCR_PB9FMP		(1 << 7)
/** SYSCFG_PMCR_PB8FMP PB(8) Fast Mode Plus **/
#define SYSCFG_PMCR_PB8FMP		(1 << 6)
/** SYSCFG_PMCR_PB7FMP PB(7) Fast Mode Plus **/
#define SYSCFG_PMCR_PB7FMP		(1 << 5)
/** SYSCFG_PMCR_PB6FMP PB(6) Fm+ **/
#define SYSCFG_PMCR_PB6FMP		(1 << 4)
/** SYSCFG_PMCR_I2C4FMP I2C4 Fm+ **/
#define SYSCFG_PMCR_I2C4FMP		(1 << 3)
/** SYSCFG_PMCR_I2C3FMP I2C3 Fm+ **/
#define SYSCFG_PMCR_I2C3FMP		(1 << 2)
/** SYSCFG_PMCR_I2C2FMP I2C2 Fm+ **/
#define SYSCFG_PMCR_I2C2FMP		(1 << 1)
/** SYSCFG_PMCR_I2C1FMP I2C1 Fm+ **/
#define SYSCFG_PMCR_I2C1FMP		(1 << 0)

/**@}*/

/** @defgroup syscfg_exticr1 EXTICR1 external interrupt configuration register 1
@{*/


#define SYSCFG_EXTICR1_EXTI3_SHIFT		12
#define SYSCFG_EXTICR1_EXTI3_MASK		0x0f
/** @defgroup syscfg_exticr1_exti3 EXTI3 EXTI x configuration (x = 0 to 3)
@{*/
/**@}*/


#define SYSCFG_EXTICR1_EXTI2_SHIFT		8
#define SYSCFG_EXTICR1_EXTI2_MASK		0x0f
/** @defgroup syscfg_exticr1_exti2 EXTI2 EXTI x configuration (x = 0 to 3)
@{*/
/**@}*/


#define SYSCFG_EXTICR1_EXTI1_SHIFT		4
#define SYSCFG_EXTICR1_EXTI1_MASK		0x0f
/** @defgroup syscfg_exticr1_exti1 EXTI1 EXTI x configuration (x = 0 to 3)
@{*/
/**@}*/


#define SYSCFG_EXTICR1_EXTI0_SHIFT		0
#define SYSCFG_EXTICR1_EXTI0_MASK		0x0f
/** @defgroup syscfg_exticr1_exti0 EXTI0 EXTI x configuration (x = 0 to 3)
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_exticr2 EXTICR2 external interrupt configuration register 2
@{*/


#define SYSCFG_EXTICR2_EXTI7_SHIFT		12
#define SYSCFG_EXTICR2_EXTI7_MASK		0x0f
/** @defgroup syscfg_exticr2_exti7 EXTI7 EXTI x configuration (x = 4 to 7)
@{*/
/**@}*/


#define SYSCFG_EXTICR2_EXTI6_SHIFT		8
#define SYSCFG_EXTICR2_EXTI6_MASK		0x0f
/** @defgroup syscfg_exticr2_exti6 EXTI6 EXTI x configuration (x = 4 to 7)
@{*/
/**@}*/


#define SYSCFG_EXTICR2_EXTI5_SHIFT		4
#define SYSCFG_EXTICR2_EXTI5_MASK		0x0f
/** @defgroup syscfg_exticr2_exti5 EXTI5 EXTI x configuration (x = 4 to 7)
@{*/
/**@}*/


#define SYSCFG_EXTICR2_EXTI4_SHIFT		0
#define SYSCFG_EXTICR2_EXTI4_MASK		0x0f
/** @defgroup syscfg_exticr2_exti4 EXTI4 EXTI x configuration (x = 4 to 7)
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_exticr3 EXTICR3 external interrupt configuration register 3
@{*/


#define SYSCFG_EXTICR3_EXTI11_SHIFT		12
#define SYSCFG_EXTICR3_EXTI11_MASK		0x0f
/** @defgroup syscfg_exticr3_exti11 EXTI11 EXTI x configuration (x = 8 to 11)
@{*/
/**@}*/


#define SYSCFG_EXTICR3_EXTI10_SHIFT		8
#define SYSCFG_EXTICR3_EXTI10_MASK		0x0f
/** @defgroup syscfg_exticr3_exti10 EXTI10 EXTI10
@{*/
/**@}*/


#define SYSCFG_EXTICR3_EXTI9_SHIFT		4
#define SYSCFG_EXTICR3_EXTI9_MASK		0x0f
/** @defgroup syscfg_exticr3_exti9 EXTI9 EXTI x configuration (x = 8 to 11)
@{*/
/**@}*/


#define SYSCFG_EXTICR3_EXTI8_SHIFT		0
#define SYSCFG_EXTICR3_EXTI8_MASK		0x0f
/** @defgroup syscfg_exticr3_exti8 EXTI8 EXTI x configuration (x = 8 to 11)
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_exticr4 EXTICR4 external interrupt configuration register 4
@{*/


#define SYSCFG_EXTICR4_EXTI15_SHIFT		12
#define SYSCFG_EXTICR4_EXTI15_MASK		0x0f
/** @defgroup syscfg_exticr4_exti15 EXTI15 EXTI x configuration (x = 12 to 15)
@{*/
/**@}*/


#define SYSCFG_EXTICR4_EXTI14_SHIFT		8
#define SYSCFG_EXTICR4_EXTI14_MASK		0x0f
/** @defgroup syscfg_exticr4_exti14 EXTI14 EXTI x configuration (x = 12 to 15)
@{*/
/**@}*/


#define SYSCFG_EXTICR4_EXTI13_SHIFT		4
#define SYSCFG_EXTICR4_EXTI13_MASK		0x0f
/** @defgroup syscfg_exticr4_exti13 EXTI13 EXTI x configuration (x = 12 to 15)
@{*/
/**@}*/


#define SYSCFG_EXTICR4_EXTI12_SHIFT		0
#define SYSCFG_EXTICR4_EXTI12_MASK		0x0f
/** @defgroup syscfg_exticr4_exti12 EXTI12 EXTI x configuration (x = 12 to 15)
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_cccsr CCCSR compensation cell control/status register
@{*/

/** SYSCFG_CCCSR_HSLV High-speed at low-voltage **/
#define SYSCFG_CCCSR_HSLV		(1 << 16)
/** SYSCFG_CCCSR_READY Compensation cell ready flag **/
#define SYSCFG_CCCSR_READY		(1 << 8)
/** SYSCFG_CCCSR_CS Code selection **/
#define SYSCFG_CCCSR_CS		(1 << 1)
/** SYSCFG_CCCSR_EN enable **/
#define SYSCFG_CCCSR_EN		(1 << 0)

/**@}*/

/** @defgroup syscfg_ccvr CCVR SYSCFG compensation cell value register
@{*/


#define SYSCFG_CCVR_PCV_SHIFT		4
#define SYSCFG_CCVR_PCV_MASK		0x0f
/** @defgroup syscfg_ccvr_pcv PCV PMOS compensation value
@{*/
/**@}*/


#define SYSCFG_CCVR_NCV_SHIFT		0
#define SYSCFG_CCVR_NCV_MASK		0x0f
/** @defgroup syscfg_ccvr_ncv NCV NMOS compensation value
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_cccr CCCR SYSCFG compensation cell code register
@{*/


#define SYSCFG_CCCR_PCC_SHIFT		4
#define SYSCFG_CCCR_PCC_MASK		0x0f
/** @defgroup syscfg_cccr_pcc PCC PMOS compensation code
@{*/
/**@}*/


#define SYSCFG_CCCR_NCC_SHIFT		0
#define SYSCFG_CCCR_NCC_MASK		0x0f
/** @defgroup syscfg_cccr_ncc NCC NMOS compensation code
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_syscfg_brk_lockupr SYSCFGBRKLOCKUPR SYSCFG timer break lockup register
@{*/

/** SYSCFG_SYSCFG_BRK_LOCKUPR_ITCML ITCM double ECC error signal lock **/
#define SYSCFG_SYSCFG_BRK_LOCKUPR_ITCML		(1 << 14)
/** SYSCFG_SYSCFG_BRK_LOCKUPR_DTCML D1TCM or D0TCM double ECC error signal lock **/
#define SYSCFG_SYSCFG_BRK_LOCKUPR_DTCML		(1 << 13)
/** SYSCFG_SYSCFG_BRK_LOCKUPR_CM7L CortexÃ‚Â®-M7 LOCKUP (HardFault) output enable bit **/
#define SYSCFG_SYSCFG_BRK_LOCKUPR_CM7L		(1 << 6)
/** SYSCFG_SYSCFG_BRK_LOCKUPR_FLASHL Flash double ECC error lock bit **/
#define SYSCFG_SYSCFG_BRK_LOCKUPR_FLASHL		(1 << 3)
/** SYSCFG_SYSCFG_BRK_LOCKUPR_PVDL PVD lock enable bit. **/
#define SYSCFG_SYSCFG_BRK_LOCKUPR_PVDL		(1 << 2)

/**@}*/

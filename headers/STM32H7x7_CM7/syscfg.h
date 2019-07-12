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
/** SYSCFG_PKGR SYSCFG package register **/
#define SYSCFG_PKGR			MMIO32(SYSCFG_BASE + 0x124)
/** SYSCFG_UR0 SYSCFG user register 0 **/
#define SYSCFG_UR0			MMIO32(SYSCFG_BASE + 0x300)
/** SYSCFG_UR2 SYSCFG user register 2 **/
#define SYSCFG_UR2			MMIO32(SYSCFG_BASE + 0x308)
/** SYSCFG_UR3 SYSCFG user register 3 **/
#define SYSCFG_UR3			MMIO32(SYSCFG_BASE + 0x30c)
/** SYSCFG_UR4 SYSCFG user register 4 **/
#define SYSCFG_UR4			MMIO32(SYSCFG_BASE + 0x310)
/** SYSCFG_UR5 SYSCFG user register 5 **/
#define SYSCFG_UR5			MMIO32(SYSCFG_BASE + 0x314)
/** SYSCFG_UR6 SYSCFG user register 6 **/
#define SYSCFG_UR6			MMIO32(SYSCFG_BASE + 0x318)
/** SYSCFG_UR7 SYSCFG user register 7 **/
#define SYSCFG_UR7			MMIO32(SYSCFG_BASE + 0x31c)
/** SYSCFG_UR8 SYSCFG user register 8 **/
#define SYSCFG_UR8			MMIO32(SYSCFG_BASE + 0x320)
/** SYSCFG_UR9 SYSCFG user register 9 **/
#define SYSCFG_UR9			MMIO32(SYSCFG_BASE + 0x324)
/** SYSCFG_UR10 SYSCFG user register 10 **/
#define SYSCFG_UR10			MMIO32(SYSCFG_BASE + 0x328)
/** SYSCFG_UR11 SYSCFG user register 11 **/
#define SYSCFG_UR11			MMIO32(SYSCFG_BASE + 0x32c)
/** SYSCFG_UR12 SYSCFG user register 12 **/
#define SYSCFG_UR12			MMIO32(SYSCFG_BASE + 0x330)
/** SYSCFG_UR13 SYSCFG user register 13 **/
#define SYSCFG_UR13			MMIO32(SYSCFG_BASE + 0x334)
/** SYSCFG_UR14 SYSCFG user register 14 **/
#define SYSCFG_UR14			MMIO32(SYSCFG_BASE + 0x338)
/** SYSCFG_UR15 SYSCFG user register 15 **/
#define SYSCFG_UR15			MMIO32(SYSCFG_BASE + 0x33c)
/** SYSCFG_UR16 SYSCFG user register 16 **/
#define SYSCFG_UR16			MMIO32(SYSCFG_BASE + 0x340)
/** SYSCFG_UR17 SYSCFG user register 17 **/
#define SYSCFG_UR17			MMIO32(SYSCFG_BASE + 0x344)

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

/** @defgroup syscfg_pkgr PKGR SYSCFG package register
@{*/


#define SYSCFG_PKGR_PKG_SHIFT		0
#define SYSCFG_PKGR_PKG_MASK		0x0f
/** @defgroup syscfg_pkgr_pkg PKG Package
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_ur0 UR0 SYSCFG user register 0
@{*/


#define SYSCFG_UR0_RDP_SHIFT		16
#define SYSCFG_UR0_RDP_MASK		0xff
/** @defgroup syscfg_ur0_rdp RDP Readout protection
@{*/
/**@}*/

/** SYSCFG_UR0_BKS Bank Swap **/
#define SYSCFG_UR0_BKS		(1 << 0)

/**@}*/

/** @defgroup syscfg_ur2 UR2 SYSCFG user register 2
@{*/


#define SYSCFG_UR2_BOOT_ADD0_SHIFT		16
#define SYSCFG_UR2_BOOT_ADD0_MASK		0xffff
/** @defgroup syscfg_ur2_boot_add0 BOOTADD0 Boot Address 0
@{*/
/**@}*/


#define SYSCFG_UR2_BORH_SHIFT		0
#define SYSCFG_UR2_BORH_MASK		0x03
/** @defgroup syscfg_ur2_borh BORH BOR_LVL Brownout Reset Threshold Level
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_ur3 UR3 SYSCFG user register 3
@{*/


#define SYSCFG_UR3_BOOT_ADD1_SHIFT		16
#define SYSCFG_UR3_BOOT_ADD1_MASK		0xffff
/** @defgroup syscfg_ur3_boot_add1 BOOTADD1 Boot Address 1
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_ur4 UR4 SYSCFG user register 4
@{*/

/** SYSCFG_UR4_MEPAD_1 Mass Erase Protected Area Disabled for bank 1 **/
#define SYSCFG_UR4_MEPAD_1		(1 << 16)

/**@}*/

/** @defgroup syscfg_ur5 UR5 SYSCFG user register 5
@{*/


#define SYSCFG_UR5_WRPN_1_SHIFT		16
#define SYSCFG_UR5_WRPN_1_MASK		0xff
/** @defgroup syscfg_ur5_wrpn_1 WRPN1 Write protection for flash bank 1
@{*/
/**@}*/

/** SYSCFG_UR5_MESAD_1 Mass erase secured area disabled for bank 1 **/
#define SYSCFG_UR5_MESAD_1		(1 << 0)

/**@}*/

/** @defgroup syscfg_ur6 UR6 SYSCFG user register 6
@{*/


#define SYSCFG_UR6_PA_END_1_SHIFT		16
#define SYSCFG_UR6_PA_END_1_MASK		0xfff
/** @defgroup syscfg_ur6_pa_end_1 PAEND1 Protected area end address for bank 1
@{*/
/**@}*/


#define SYSCFG_UR6_PA_BEG_1_SHIFT		0
#define SYSCFG_UR6_PA_BEG_1_MASK		0xfff
/** @defgroup syscfg_ur6_pa_beg_1 PABEG1 Protected area start address for bank 1
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_ur7 UR7 SYSCFG user register 7
@{*/


#define SYSCFG_UR7_SA_END_1_SHIFT		16
#define SYSCFG_UR7_SA_END_1_MASK		0xfff
/** @defgroup syscfg_ur7_sa_end_1 SAEND1 Secured area end address for bank 1
@{*/
/**@}*/


#define SYSCFG_UR7_SA_BEG_1_SHIFT		0
#define SYSCFG_UR7_SA_BEG_1_MASK		0xfff
/** @defgroup syscfg_ur7_sa_beg_1 SABEG1 Secured area start address for bank 1
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_ur8 UR8 SYSCFG user register 8
@{*/

/** SYSCFG_UR8_MESAD_2 Mass erase secured area disabled for bank 2 **/
#define SYSCFG_UR8_MESAD_2		(1 << 16)
/** SYSCFG_UR8_MEPAD_2 Mass erase protected area disabled for bank 2 **/
#define SYSCFG_UR8_MEPAD_2		(1 << 0)

/**@}*/

/** @defgroup syscfg_ur9 UR9 SYSCFG user register 9
@{*/


#define SYSCFG_UR9_PA_BEG_2_SHIFT		16
#define SYSCFG_UR9_PA_BEG_2_MASK		0xfff
/** @defgroup syscfg_ur9_pa_beg_2 PABEG2 Protected area start address for bank 2
@{*/
/**@}*/


#define SYSCFG_UR9_WRPN_2_SHIFT		0
#define SYSCFG_UR9_WRPN_2_MASK		0xff
/** @defgroup syscfg_ur9_wrpn_2 WRPN2 Write protection for flash bank 2
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_ur10 UR10 SYSCFG user register 10
@{*/


#define SYSCFG_UR10_SA_BEG_2_SHIFT		16
#define SYSCFG_UR10_SA_BEG_2_MASK		0xfff
/** @defgroup syscfg_ur10_sa_beg_2 SABEG2 Secured area start address for bank 2
@{*/
/**@}*/


#define SYSCFG_UR10_PA_END_2_SHIFT		0
#define SYSCFG_UR10_PA_END_2_MASK		0xfff
/** @defgroup syscfg_ur10_pa_end_2 PAEND2 Protected area end address for bank 2
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_ur11 UR11 SYSCFG user register 11
@{*/

/** SYSCFG_UR11_IWDG1M Independent Watchdog 1 mode **/
#define SYSCFG_UR11_IWDG1M		(1 << 16)

#define SYSCFG_UR11_SA_END_2_SHIFT		0
#define SYSCFG_UR11_SA_END_2_MASK		0xfff
/** @defgroup syscfg_ur11_sa_end_2 SAEND2 Secured area end address for bank 2
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_ur12 UR12 SYSCFG user register 12
@{*/

/** SYSCFG_UR12_SECURE Secure mode **/
#define SYSCFG_UR12_SECURE		(1 << 16)

/**@}*/

/** @defgroup syscfg_ur13 UR13 SYSCFG user register 13
@{*/

/** SYSCFG_UR13_D1SBRST D1 Standby reset **/
#define SYSCFG_UR13_D1SBRST		(1 << 16)

#define SYSCFG_UR13_SDRS_SHIFT		0
#define SYSCFG_UR13_SDRS_MASK		0x03
/** @defgroup syscfg_ur13_sdrs SDRS Secured DTCM RAM Size
@{*/
/**@}*/


/**@}*/

/** @defgroup syscfg_ur14 UR14 SYSCFG user register 14
@{*/

/** SYSCFG_UR14_D1STPRST D1 Stop Reset **/
#define SYSCFG_UR14_D1STPRST		(1 << 0)

/**@}*/

/** @defgroup syscfg_ur15 UR15 SYSCFG user register 15
@{*/

/** SYSCFG_UR15_FZIWDGSTB Freeze independent watchdog in Standby mode **/
#define SYSCFG_UR15_FZIWDGSTB		(1 << 16)

/**@}*/

/** @defgroup syscfg_ur16 UR16 SYSCFG user register 16
@{*/

/** SYSCFG_UR16_PKP Private key programmed **/
#define SYSCFG_UR16_PKP		(1 << 16)
/** SYSCFG_UR16_FZIWDGSTP Freeze independent watchdog in Stop mode **/
#define SYSCFG_UR16_FZIWDGSTP		(1 << 0)

/**@}*/

/** @defgroup syscfg_ur17 UR17 SYSCFG user register 17
@{*/

/** SYSCFG_UR17_IO_HSLV I/O high speed / low voltage **/
#define SYSCFG_UR17_IO_HSLV		(1 << 0)

/**@}*/

#pragma once 

/* --- BKP: Backup registers ---------------------------------------- */

/** @defgroup bkp_registers Backup registers Register
@{*/

/** BKP_DR1 Backup data register (BKP_DR) **/
#define BKP_DR1			MMIO32(BKP_BASE + 0x00)
/** BKP_DR2 Backup data register (BKP_DR) **/
#define BKP_DR2			MMIO32(BKP_BASE + 0x04)
/** BKP_DR3 Backup data register (BKP_DR) **/
#define BKP_DR3			MMIO32(BKP_BASE + 0x08)
/** BKP_DR4 Backup data register (BKP_DR) **/
#define BKP_DR4			MMIO32(BKP_BASE + 0x0c)
/** BKP_DR5 Backup data register (BKP_DR) **/
#define BKP_DR5			MMIO32(BKP_BASE + 0x10)
/** BKP_DR6 Backup data register (BKP_DR) **/
#define BKP_DR6			MMIO32(BKP_BASE + 0x14)
/** BKP_DR7 Backup data register (BKP_DR) **/
#define BKP_DR7			MMIO32(BKP_BASE + 0x18)
/** BKP_DR8 Backup data register (BKP_DR) **/
#define BKP_DR8			MMIO32(BKP_BASE + 0x1c)
/** BKP_DR9 Backup data register (BKP_DR) **/
#define BKP_DR9			MMIO32(BKP_BASE + 0x20)
/** BKP_DR10 Backup data register (BKP_DR) **/
#define BKP_DR10			MMIO32(BKP_BASE + 0x24)
/** BKP_RTCCR RTC clock calibration register (BKP_RTCCR) **/
#define BKP_RTCCR			MMIO32(BKP_BASE + 0x28)
/** BKP_CR Backup control register (BKP_CR) **/
#define BKP_CR			MMIO32(BKP_BASE + 0x2c)
/** BKP_CSR BKP_CSR control/status register **/
#define BKP_CSR			MMIO32(BKP_BASE + 0x30)
/** BKP_DR11 Backup data register (BKP_DR) **/
#define BKP_DR11			MMIO32(BKP_BASE + 0x3c)
/** BKP_DR12 Backup data register (BKP_DR) **/
#define BKP_DR12			MMIO32(BKP_BASE + 0x40)
/** BKP_DR13 Backup data register (BKP_DR) **/
#define BKP_DR13			MMIO32(BKP_BASE + 0x44)
/** BKP_DR14 Backup data register (BKP_DR) **/
#define BKP_DR14			MMIO32(BKP_BASE + 0x48)
/** BKP_DR15 Backup data register (BKP_DR) **/
#define BKP_DR15			MMIO32(BKP_BASE + 0x4c)
/** BKP_DR16 Backup data register (BKP_DR) **/
#define BKP_DR16			MMIO32(BKP_BASE + 0x50)
/** BKP_DR17 Backup data register (BKP_DR) **/
#define BKP_DR17			MMIO32(BKP_BASE + 0x54)
/** BKP_DR18 Backup data register (BKP_DR) **/
#define BKP_DR18			MMIO32(BKP_BASE + 0x58)
/** BKP_DR19 Backup data register (BKP_DR) **/
#define BKP_DR19			MMIO32(BKP_BASE + 0x5c)
/** BKP_DR20 Backup data register (BKP_DR) **/
#define BKP_DR20			MMIO32(BKP_BASE + 0x60)
/** BKP_DR21 Backup data register (BKP_DR) **/
#define BKP_DR21			MMIO32(BKP_BASE + 0x64)
/** BKP_DR22 Backup data register (BKP_DR) **/
#define BKP_DR22			MMIO32(BKP_BASE + 0x68)
/** BKP_DR23 Backup data register (BKP_DR) **/
#define BKP_DR23			MMIO32(BKP_BASE + 0x6c)
/** BKP_DR24 Backup data register (BKP_DR) **/
#define BKP_DR24			MMIO32(BKP_BASE + 0x70)
/** BKP_DR25 Backup data register (BKP_DR) **/
#define BKP_DR25			MMIO32(BKP_BASE + 0x74)
/** BKP_DR26 Backup data register (BKP_DR) **/
#define BKP_DR26			MMIO32(BKP_BASE + 0x78)
/** BKP_DR27 Backup data register (BKP_DR) **/
#define BKP_DR27			MMIO32(BKP_BASE + 0x7c)
/** BKP_DR28 Backup data register (BKP_DR) **/
#define BKP_DR28			MMIO32(BKP_BASE + 0x80)
/** BKP_DR29 Backup data register (BKP_DR) **/
#define BKP_DR29			MMIO32(BKP_BASE + 0x84)
/** BKP_DR30 Backup data register (BKP_DR) **/
#define BKP_DR30			MMIO32(BKP_BASE + 0x88)
/** BKP_DR31 Backup data register (BKP_DR) **/
#define BKP_DR31			MMIO32(BKP_BASE + 0x8c)
/** BKP_DR32 Backup data register (BKP_DR) **/
#define BKP_DR32			MMIO32(BKP_BASE + 0x90)
/** BKP_DR33 Backup data register (BKP_DR) **/
#define BKP_DR33			MMIO32(BKP_BASE + 0x94)
/** BKP_DR34 Backup data register (BKP_DR) **/
#define BKP_DR34			MMIO32(BKP_BASE + 0x98)
/** BKP_DR35 Backup data register (BKP_DR) **/
#define BKP_DR35			MMIO32(BKP_BASE + 0x9c)
/** BKP_DR36 Backup data register (BKP_DR) **/
#define BKP_DR36			MMIO32(BKP_BASE + 0xa0)
/** BKP_DR37 Backup data register (BKP_DR) **/
#define BKP_DR37			MMIO32(BKP_BASE + 0xa4)
/** BKP_DR38 Backup data register (BKP_DR) **/
#define BKP_DR38			MMIO32(BKP_BASE + 0xa8)
/** BKP_DR39 Backup data register (BKP_DR) **/
#define BKP_DR39			MMIO32(BKP_BASE + 0xac)
/** BKP_DR40 Backup data register (BKP_DR) **/
#define BKP_DR40			MMIO32(BKP_BASE + 0xb0)
/** BKP_DR41 Backup data register (BKP_DR) **/
#define BKP_DR41			MMIO32(BKP_BASE + 0xb4)
/** BKP_DR42 Backup data register (BKP_DR) **/
#define BKP_DR42			MMIO32(BKP_BASE + 0xb8)

/**@}*/


/** @defgroup bkp_dr1 DR1 Backup data register (BKP_DR)
@{*/


#define BKP_DR1_D1_SHIFT		0
#define BKP_DR1_D1_MASK		0xffff
/** @defgroup bkp_dr1_d1 D1 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr2 DR2 Backup data register (BKP_DR)
@{*/


#define BKP_DR2_D2_SHIFT		0
#define BKP_DR2_D2_MASK		0xffff
/** @defgroup bkp_dr2_d2 D2 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr3 DR3 Backup data register (BKP_DR)
@{*/


#define BKP_DR3_D3_SHIFT		0
#define BKP_DR3_D3_MASK		0xffff
/** @defgroup bkp_dr3_d3 D3 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr4 DR4 Backup data register (BKP_DR)
@{*/


#define BKP_DR4_D4_SHIFT		0
#define BKP_DR4_D4_MASK		0xffff
/** @defgroup bkp_dr4_d4 D4 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr5 DR5 Backup data register (BKP_DR)
@{*/


#define BKP_DR5_D5_SHIFT		0
#define BKP_DR5_D5_MASK		0xffff
/** @defgroup bkp_dr5_d5 D5 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr6 DR6 Backup data register (BKP_DR)
@{*/


#define BKP_DR6_D6_SHIFT		0
#define BKP_DR6_D6_MASK		0xffff
/** @defgroup bkp_dr6_d6 D6 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr7 DR7 Backup data register (BKP_DR)
@{*/


#define BKP_DR7_D7_SHIFT		0
#define BKP_DR7_D7_MASK		0xffff
/** @defgroup bkp_dr7_d7 D7 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr8 DR8 Backup data register (BKP_DR)
@{*/


#define BKP_DR8_D8_SHIFT		0
#define BKP_DR8_D8_MASK		0xffff
/** @defgroup bkp_dr8_d8 D8 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr9 DR9 Backup data register (BKP_DR)
@{*/


#define BKP_DR9_D9_SHIFT		0
#define BKP_DR9_D9_MASK		0xffff
/** @defgroup bkp_dr9_d9 D9 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr10 DR10 Backup data register (BKP_DR)
@{*/


#define BKP_DR10_D10_SHIFT		0
#define BKP_DR10_D10_MASK		0xffff
/** @defgroup bkp_dr10_d10 D10 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_rtccr RTCCR RTC clock calibration register (BKP_RTCCR)
@{*/

/** BKP_RTCCR_CCO Calibration Clock Output **/
#define BKP_RTCCR_CCO		(1 << 7)

#define BKP_RTCCR_CAL_SHIFT		0
#define BKP_RTCCR_CAL_MASK		0x7f
/** @defgroup bkp_rtccr_cal CAL Calibration value
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_cr CR Backup control register (BKP_CR)
@{*/

/** BKP_CR_TPAL Tamper pin active level **/
#define BKP_CR_TPAL		(1 << 1)
/** BKP_CR_TPE Tamper pin enable **/
#define BKP_CR_TPE		(1 << 0)

/**@}*/

/** @defgroup bkp_csr CSR BKP_CSR control/status register
@{*/

/** BKP_CSR_TIF Tamper Interrupt Flag **/
#define BKP_CSR_TIF		(1 << 9)
/** BKP_CSR_TEF Tamper Event Flag **/
#define BKP_CSR_TEF		(1 << 8)
/** BKP_CSR_TPIE Tamper Pin interrupt enable **/
#define BKP_CSR_TPIE		(1 << 2)
/** BKP_CSR_CTI Clear Tamper Interrupt **/
#define BKP_CSR_CTI		(1 << 1)
/** BKP_CSR_CTE Clear Tamper event **/
#define BKP_CSR_CTE		(1 << 0)

/**@}*/

/** @defgroup bkp_dr11 DR11 Backup data register (BKP_DR)
@{*/


#define BKP_DR11_DR11_SHIFT		0
#define BKP_DR11_DR11_MASK		0xffff
/** @defgroup bkp_dr11_dr11 DR11 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr12 DR12 Backup data register (BKP_DR)
@{*/


#define BKP_DR12_DR12_SHIFT		0
#define BKP_DR12_DR12_MASK		0xffff
/** @defgroup bkp_dr12_dr12 DR12 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr13 DR13 Backup data register (BKP_DR)
@{*/


#define BKP_DR13_DR13_SHIFT		0
#define BKP_DR13_DR13_MASK		0xffff
/** @defgroup bkp_dr13_dr13 DR13 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr14 DR14 Backup data register (BKP_DR)
@{*/


#define BKP_DR14_D14_SHIFT		0
#define BKP_DR14_D14_MASK		0xffff
/** @defgroup bkp_dr14_d14 D14 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr15 DR15 Backup data register (BKP_DR)
@{*/


#define BKP_DR15_D15_SHIFT		0
#define BKP_DR15_D15_MASK		0xffff
/** @defgroup bkp_dr15_d15 D15 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr16 DR16 Backup data register (BKP_DR)
@{*/


#define BKP_DR16_D16_SHIFT		0
#define BKP_DR16_D16_MASK		0xffff
/** @defgroup bkp_dr16_d16 D16 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr17 DR17 Backup data register (BKP_DR)
@{*/


#define BKP_DR17_D17_SHIFT		0
#define BKP_DR17_D17_MASK		0xffff
/** @defgroup bkp_dr17_d17 D17 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr18 DR18 Backup data register (BKP_DR)
@{*/


#define BKP_DR18_D18_SHIFT		0
#define BKP_DR18_D18_MASK		0xffff
/** @defgroup bkp_dr18_d18 D18 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr19 DR19 Backup data register (BKP_DR)
@{*/


#define BKP_DR19_D19_SHIFT		0
#define BKP_DR19_D19_MASK		0xffff
/** @defgroup bkp_dr19_d19 D19 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr20 DR20 Backup data register (BKP_DR)
@{*/


#define BKP_DR20_D20_SHIFT		0
#define BKP_DR20_D20_MASK		0xffff
/** @defgroup bkp_dr20_d20 D20 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr21 DR21 Backup data register (BKP_DR)
@{*/


#define BKP_DR21_D21_SHIFT		0
#define BKP_DR21_D21_MASK		0xffff
/** @defgroup bkp_dr21_d21 D21 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr22 DR22 Backup data register (BKP_DR)
@{*/


#define BKP_DR22_D22_SHIFT		0
#define BKP_DR22_D22_MASK		0xffff
/** @defgroup bkp_dr22_d22 D22 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr23 DR23 Backup data register (BKP_DR)
@{*/


#define BKP_DR23_D23_SHIFT		0
#define BKP_DR23_D23_MASK		0xffff
/** @defgroup bkp_dr23_d23 D23 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr24 DR24 Backup data register (BKP_DR)
@{*/


#define BKP_DR24_D24_SHIFT		0
#define BKP_DR24_D24_MASK		0xffff
/** @defgroup bkp_dr24_d24 D24 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr25 DR25 Backup data register (BKP_DR)
@{*/


#define BKP_DR25_D25_SHIFT		0
#define BKP_DR25_D25_MASK		0xffff
/** @defgroup bkp_dr25_d25 D25 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr26 DR26 Backup data register (BKP_DR)
@{*/


#define BKP_DR26_D26_SHIFT		0
#define BKP_DR26_D26_MASK		0xffff
/** @defgroup bkp_dr26_d26 D26 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr27 DR27 Backup data register (BKP_DR)
@{*/


#define BKP_DR27_D27_SHIFT		0
#define BKP_DR27_D27_MASK		0xffff
/** @defgroup bkp_dr27_d27 D27 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr28 DR28 Backup data register (BKP_DR)
@{*/


#define BKP_DR28_D28_SHIFT		0
#define BKP_DR28_D28_MASK		0xffff
/** @defgroup bkp_dr28_d28 D28 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr29 DR29 Backup data register (BKP_DR)
@{*/


#define BKP_DR29_D29_SHIFT		0
#define BKP_DR29_D29_MASK		0xffff
/** @defgroup bkp_dr29_d29 D29 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr30 DR30 Backup data register (BKP_DR)
@{*/


#define BKP_DR30_D30_SHIFT		0
#define BKP_DR30_D30_MASK		0xffff
/** @defgroup bkp_dr30_d30 D30 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr31 DR31 Backup data register (BKP_DR)
@{*/


#define BKP_DR31_D31_SHIFT		0
#define BKP_DR31_D31_MASK		0xffff
/** @defgroup bkp_dr31_d31 D31 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr32 DR32 Backup data register (BKP_DR)
@{*/


#define BKP_DR32_D32_SHIFT		0
#define BKP_DR32_D32_MASK		0xffff
/** @defgroup bkp_dr32_d32 D32 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr33 DR33 Backup data register (BKP_DR)
@{*/


#define BKP_DR33_D33_SHIFT		0
#define BKP_DR33_D33_MASK		0xffff
/** @defgroup bkp_dr33_d33 D33 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr34 DR34 Backup data register (BKP_DR)
@{*/


#define BKP_DR34_D34_SHIFT		0
#define BKP_DR34_D34_MASK		0xffff
/** @defgroup bkp_dr34_d34 D34 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr35 DR35 Backup data register (BKP_DR)
@{*/


#define BKP_DR35_D35_SHIFT		0
#define BKP_DR35_D35_MASK		0xffff
/** @defgroup bkp_dr35_d35 D35 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr36 DR36 Backup data register (BKP_DR)
@{*/


#define BKP_DR36_D36_SHIFT		0
#define BKP_DR36_D36_MASK		0xffff
/** @defgroup bkp_dr36_d36 D36 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr37 DR37 Backup data register (BKP_DR)
@{*/


#define BKP_DR37_D37_SHIFT		0
#define BKP_DR37_D37_MASK		0xffff
/** @defgroup bkp_dr37_d37 D37 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr38 DR38 Backup data register (BKP_DR)
@{*/


#define BKP_DR38_D38_SHIFT		0
#define BKP_DR38_D38_MASK		0xffff
/** @defgroup bkp_dr38_d38 D38 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr39 DR39 Backup data register (BKP_DR)
@{*/


#define BKP_DR39_D39_SHIFT		0
#define BKP_DR39_D39_MASK		0xffff
/** @defgroup bkp_dr39_d39 D39 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr40 DR40 Backup data register (BKP_DR)
@{*/


#define BKP_DR40_D40_SHIFT		0
#define BKP_DR40_D40_MASK		0xffff
/** @defgroup bkp_dr40_d40 D40 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr41 DR41 Backup data register (BKP_DR)
@{*/


#define BKP_DR41_D41_SHIFT		0
#define BKP_DR41_D41_MASK		0xffff
/** @defgroup bkp_dr41_d41 D41 Backup data
@{*/
/**@}*/


/**@}*/

/** @defgroup bkp_dr42 DR42 Backup data register (BKP_DR)
@{*/


#define BKP_DR42_D42_SHIFT		0
#define BKP_DR42_D42_MASK		0xffff
/** @defgroup bkp_dr42_d42 D42 Backup data
@{*/
/**@}*/


/**@}*/

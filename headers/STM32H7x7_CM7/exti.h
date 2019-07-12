#pragma once 

/* --- EXTI: External interrupt/event controller -------------------- */

/** @defgroup exti_registers External interrupt/event
      controller Register
@{*/

/** EXTI_RTSR1 EXTI rising trigger selection register **/
#define EXTI_RTSR1			MMIO32(EXTI_BASE + 0x00)
/** EXTI_FTSR1 EXTI falling trigger selection register **/
#define EXTI_FTSR1			MMIO32(EXTI_BASE + 0x04)
/** EXTI_SWIER1 EXTI software interrupt event register **/
#define EXTI_SWIER1			MMIO32(EXTI_BASE + 0x08)
/** EXTI_D3PMR1 EXTI D3 pending mask register **/
#define EXTI_D3PMR1			MMIO32(EXTI_BASE + 0x0c)
/** EXTI_D3PCR1L EXTI D3 pending clear selection register low **/
#define EXTI_D3PCR1L			MMIO32(EXTI_BASE + 0x10)
/** EXTI_D3PCR1H EXTI D3 pending clear selection register high **/
#define EXTI_D3PCR1H			MMIO32(EXTI_BASE + 0x14)
/** EXTI_RTSR2 EXTI rising trigger selection register **/
#define EXTI_RTSR2			MMIO32(EXTI_BASE + 0x20)
/** EXTI_FTSR2 EXTI falling trigger selection register **/
#define EXTI_FTSR2			MMIO32(EXTI_BASE + 0x24)
/** EXTI_SWIER2 EXTI software interrupt event register **/
#define EXTI_SWIER2			MMIO32(EXTI_BASE + 0x28)
/** EXTI_D3PMR2 EXTI D3 pending mask register **/
#define EXTI_D3PMR2			MMIO32(EXTI_BASE + 0x2c)
/** EXTI_D3PCR2L EXTI D3 pending clear selection register low **/
#define EXTI_D3PCR2L			MMIO32(EXTI_BASE + 0x30)
/** EXTI_D3PCR2H EXTI D3 pending clear selection register high **/
#define EXTI_D3PCR2H			MMIO32(EXTI_BASE + 0x34)
/** EXTI_RTSR3 EXTI rising trigger selection register **/
#define EXTI_RTSR3			MMIO32(EXTI_BASE + 0x40)
/** EXTI_FTSR3 EXTI falling trigger selection register **/
#define EXTI_FTSR3			MMIO32(EXTI_BASE + 0x44)
/** EXTI_SWIER3 EXTI software interrupt event register **/
#define EXTI_SWIER3			MMIO32(EXTI_BASE + 0x48)
/** EXTI_D3PMR3 EXTI D3 pending mask register **/
#define EXTI_D3PMR3			MMIO32(EXTI_BASE + 0x4c)
/** EXTI_D3PCR3H EXTI D3 pending clear selection register high **/
#define EXTI_D3PCR3H			MMIO32(EXTI_BASE + 0x54)
/** EXTI_C1IMR1 EXTI interrupt mask register **/
#define EXTI_C1IMR1			MMIO32(EXTI_BASE + 0x80)
/** EXTI_C1EMR1 EXTI event mask register **/
#define EXTI_C1EMR1			MMIO32(EXTI_BASE + 0x84)
/** EXTI_C1PR1 EXTI pending register **/
#define EXTI_C1PR1			MMIO32(EXTI_BASE + 0x88)
/** EXTI_C1IMR2 EXTI interrupt mask register **/
#define EXTI_C1IMR2			MMIO32(EXTI_BASE + 0x90)
/** EXTI_C1EMR2 EXTI event mask register **/
#define EXTI_C1EMR2			MMIO32(EXTI_BASE + 0x94)
/** EXTI_C1PR2 EXTI pending register **/
#define EXTI_C1PR2			MMIO32(EXTI_BASE + 0x98)
/** EXTI_C1IMR3 EXTI interrupt mask register **/
#define EXTI_C1IMR3			MMIO32(EXTI_BASE + 0xa0)
/** EXTI_C1EMR3 EXTI event mask register **/
#define EXTI_C1EMR3			MMIO32(EXTI_BASE + 0xa4)
/** EXTI_C1PR3 EXTI pending register **/
#define EXTI_C1PR3			MMIO32(EXTI_BASE + 0xa8)
/** EXTI_C2IMR1 EXTI interrupt mask register **/
#define EXTI_C2IMR1			MMIO32(EXTI_BASE + 0xc0)
/** EXTI_C2EMR1 EXTI event mask register **/
#define EXTI_C2EMR1			MMIO32(EXTI_BASE + 0xc4)
/** EXTI_C2PR1 EXTI pending register **/
#define EXTI_C2PR1			MMIO32(EXTI_BASE + 0xc8)
/** EXTI_C2IMR2 EXTI interrupt mask register **/
#define EXTI_C2IMR2			MMIO32(EXTI_BASE + 0xd0)
/** EXTI_C2EMR2 EXTI event mask register **/
#define EXTI_C2EMR2			MMIO32(EXTI_BASE + 0xd4)
/** EXTI_C2PR2 EXTI pending register **/
#define EXTI_C2PR2			MMIO32(EXTI_BASE + 0xd8)
/** EXTI_C2IMR3 EXTI interrupt mask register **/
#define EXTI_C2IMR3			MMIO32(EXTI_BASE + 0xe0)
/** EXTI_C2EMR3 EXTI event mask register **/
#define EXTI_C2EMR3			MMIO32(EXTI_BASE + 0xe4)
/** EXTI_C2PR3 EXTI pending register **/
#define EXTI_C2PR3			MMIO32(EXTI_BASE + 0xe8)

/**@}*/


/** @defgroup exti_rtsr1 RTSR1 EXTI rising trigger selection register
@{*/

/** EXTI_RTSR1_TR21 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR21		(1 << 21)
/** EXTI_RTSR1_TR20 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR20		(1 << 20)
/** EXTI_RTSR1_TR19 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR19		(1 << 19)
/** EXTI_RTSR1_TR18 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR18		(1 << 18)
/** EXTI_RTSR1_TR17 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR17		(1 << 17)
/** EXTI_RTSR1_TR16 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR16		(1 << 16)
/** EXTI_RTSR1_TR15 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR15		(1 << 15)
/** EXTI_RTSR1_TR14 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR14		(1 << 14)
/** EXTI_RTSR1_TR13 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR13		(1 << 13)
/** EXTI_RTSR1_TR12 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR12		(1 << 12)
/** EXTI_RTSR1_TR11 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR11		(1 << 11)
/** EXTI_RTSR1_TR10 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR10		(1 << 10)
/** EXTI_RTSR1_TR9 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR9		(1 << 9)
/** EXTI_RTSR1_TR8 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR8		(1 << 8)
/** EXTI_RTSR1_TR7 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR7		(1 << 7)
/** EXTI_RTSR1_TR6 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR6		(1 << 6)
/** EXTI_RTSR1_TR5 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR5		(1 << 5)
/** EXTI_RTSR1_TR4 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR4		(1 << 4)
/** EXTI_RTSR1_TR3 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR3		(1 << 3)
/** EXTI_RTSR1_TR2 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR2		(1 << 2)
/** EXTI_RTSR1_TR1 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR1		(1 << 1)
/** EXTI_RTSR1_TR0 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_RTSR1_TR0		(1 << 0)

/**@}*/

/** @defgroup exti_ftsr1 FTSR1 EXTI falling trigger selection register
@{*/

/** EXTI_FTSR1_TR21 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR21		(1 << 21)
/** EXTI_FTSR1_TR20 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR20		(1 << 20)
/** EXTI_FTSR1_TR19 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR19		(1 << 19)
/** EXTI_FTSR1_TR18 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR18		(1 << 18)
/** EXTI_FTSR1_TR17 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR17		(1 << 17)
/** EXTI_FTSR1_TR16 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR16		(1 << 16)
/** EXTI_FTSR1_TR15 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR15		(1 << 15)
/** EXTI_FTSR1_TR14 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR14		(1 << 14)
/** EXTI_FTSR1_TR13 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR13		(1 << 13)
/** EXTI_FTSR1_TR12 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR12		(1 << 12)
/** EXTI_FTSR1_TR11 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR11		(1 << 11)
/** EXTI_FTSR1_TR10 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR10		(1 << 10)
/** EXTI_FTSR1_TR9 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR9		(1 << 9)
/** EXTI_FTSR1_TR8 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR8		(1 << 8)
/** EXTI_FTSR1_TR7 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR7		(1 << 7)
/** EXTI_FTSR1_TR6 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR6		(1 << 6)
/** EXTI_FTSR1_TR5 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR5		(1 << 5)
/** EXTI_FTSR1_TR4 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR4		(1 << 4)
/** EXTI_FTSR1_TR3 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR3		(1 << 3)
/** EXTI_FTSR1_TR2 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR2		(1 << 2)
/** EXTI_FTSR1_TR1 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR1		(1 << 1)
/** EXTI_FTSR1_TR0 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_FTSR1_TR0		(1 << 0)

/**@}*/

/** @defgroup exti_swier1 SWIER1 EXTI software interrupt event register
@{*/

/** EXTI_SWIER1_SWIER21 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER21		(1 << 21)
/** EXTI_SWIER1_SWIER20 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER20		(1 << 20)
/** EXTI_SWIER1_SWIER19 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER19		(1 << 19)
/** EXTI_SWIER1_SWIER18 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER18		(1 << 18)
/** EXTI_SWIER1_SWIER17 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER17		(1 << 17)
/** EXTI_SWIER1_SWIER16 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER16		(1 << 16)
/** EXTI_SWIER1_SWIER15 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER15		(1 << 15)
/** EXTI_SWIER1_SWIER14 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER14		(1 << 14)
/** EXTI_SWIER1_SWIER13 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER13		(1 << 13)
/** EXTI_SWIER1_SWIER12 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER12		(1 << 12)
/** EXTI_SWIER1_SWIER11 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER11		(1 << 11)
/** EXTI_SWIER1_SWIER10 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER10		(1 << 10)
/** EXTI_SWIER1_SWIER9 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER9		(1 << 9)
/** EXTI_SWIER1_SWIER8 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER8		(1 << 8)
/** EXTI_SWIER1_SWIER7 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER7		(1 << 7)
/** EXTI_SWIER1_SWIER6 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER6		(1 << 6)
/** EXTI_SWIER1_SWIER5 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER5		(1 << 5)
/** EXTI_SWIER1_SWIER4 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER4		(1 << 4)
/** EXTI_SWIER1_SWIER3 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER3		(1 << 3)
/** EXTI_SWIER1_SWIER2 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER2		(1 << 2)
/** EXTI_SWIER1_SWIER1 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER1		(1 << 1)
/** EXTI_SWIER1_SWIER0 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_SWIER1_SWIER0		(1 << 0)

/**@}*/

/** @defgroup exti_d3pmr1 D3PMR1 EXTI D3 pending mask register
@{*/

/** EXTI_D3PMR1_MR25 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR25		(1 << 25)
/** EXTI_D3PMR1_MR21 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR21		(1 << 21)
/** EXTI_D3PMR1_MR20 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR20		(1 << 20)
/** EXTI_D3PMR1_MR19 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR19		(1 << 19)
/** EXTI_D3PMR1_MR15 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR15		(1 << 15)
/** EXTI_D3PMR1_MR14 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR14		(1 << 14)
/** EXTI_D3PMR1_MR13 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR13		(1 << 13)
/** EXTI_D3PMR1_MR12 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR12		(1 << 12)
/** EXTI_D3PMR1_MR11 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR11		(1 << 11)
/** EXTI_D3PMR1_MR10 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR10		(1 << 10)
/** EXTI_D3PMR1_MR9 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR9		(1 << 9)
/** EXTI_D3PMR1_MR8 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR8		(1 << 8)
/** EXTI_D3PMR1_MR7 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR7		(1 << 7)
/** EXTI_D3PMR1_MR6 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR6		(1 << 6)
/** EXTI_D3PMR1_MR5 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR5		(1 << 5)
/** EXTI_D3PMR1_MR4 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR4		(1 << 4)
/** EXTI_D3PMR1_MR3 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR3		(1 << 3)
/** EXTI_D3PMR1_MR2 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR2		(1 << 2)
/** EXTI_D3PMR1_MR1 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR1		(1 << 1)
/** EXTI_D3PMR1_MR0 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_D3PMR1_MR0		(1 << 0)

/**@}*/

/** @defgroup exti_d3pcr1l D3PCR1L EXTI D3 pending clear selection register low
@{*/


#define EXTI_D3PCR1L_PCS15_SHIFT		30
#define EXTI_D3PCR1L_PCS15_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs15 PCS15 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS14_SHIFT		28
#define EXTI_D3PCR1L_PCS14_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs14 PCS14 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS13_SHIFT		26
#define EXTI_D3PCR1L_PCS13_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs13 PCS13 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS12_SHIFT		24
#define EXTI_D3PCR1L_PCS12_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs12 PCS12 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS11_SHIFT		22
#define EXTI_D3PCR1L_PCS11_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs11 PCS11 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS10_SHIFT		20
#define EXTI_D3PCR1L_PCS10_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs10 PCS10 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS9_SHIFT		18
#define EXTI_D3PCR1L_PCS9_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs9 PCS9 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS8_SHIFT		16
#define EXTI_D3PCR1L_PCS8_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs8 PCS8 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS7_SHIFT		14
#define EXTI_D3PCR1L_PCS7_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs7 PCS7 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS6_SHIFT		12
#define EXTI_D3PCR1L_PCS6_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs6 PCS6 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS5_SHIFT		10
#define EXTI_D3PCR1L_PCS5_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs5 PCS5 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS4_SHIFT		8
#define EXTI_D3PCR1L_PCS4_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs4 PCS4 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS3_SHIFT		6
#define EXTI_D3PCR1L_PCS3_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs3 PCS3 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS2_SHIFT		4
#define EXTI_D3PCR1L_PCS2_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs2 PCS2 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS1_SHIFT		2
#define EXTI_D3PCR1L_PCS1_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs1 PCS1 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


#define EXTI_D3PCR1L_PCS0_SHIFT		0
#define EXTI_D3PCR1L_PCS0_MASK		0x03
/** @defgroup exti_d3pcr1l_pcs0 PCS0 D3 Pending request clear input signal selection on Event input x = truncate (n/2)
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_d3pcr1h D3PCR1H EXTI D3 pending clear selection register high
@{*/


#define EXTI_D3PCR1H_PCS25_SHIFT		18
#define EXTI_D3PCR1H_PCS25_MASK		0x03
/** @defgroup exti_d3pcr1h_pcs25 PCS25 D3 Pending request clear input signal selection on Event input x = truncate ((n+32)/2)
@{*/
/**@}*/


#define EXTI_D3PCR1H_PCS21_SHIFT		10
#define EXTI_D3PCR1H_PCS21_MASK		0x03
/** @defgroup exti_d3pcr1h_pcs21 PCS21 D3 Pending request clear input signal selection on Event input x = truncate ((n+32)/2)
@{*/
/**@}*/


#define EXTI_D3PCR1H_PCS20_SHIFT		8
#define EXTI_D3PCR1H_PCS20_MASK		0x03
/** @defgroup exti_d3pcr1h_pcs20 PCS20 D3 Pending request clear input signal selection on Event input x = truncate ((n+32)/2)
@{*/
/**@}*/


#define EXTI_D3PCR1H_PCS19_SHIFT		6
#define EXTI_D3PCR1H_PCS19_MASK		0x03
/** @defgroup exti_d3pcr1h_pcs19 PCS19 D3 Pending request clear input signal selection on Event input x = truncate ((n+32)/2)
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_rtsr2 RTSR2 EXTI rising trigger selection register
@{*/

/** EXTI_RTSR2_TR51 Rising trigger event configuration bit of Configurable Event input x+32 **/
#define EXTI_RTSR2_TR51		(1 << 19)
/** EXTI_RTSR2_TR49 Rising trigger event configuration bit of Configurable Event input x+32 **/
#define EXTI_RTSR2_TR49		(1 << 17)

/**@}*/

/** @defgroup exti_ftsr2 FTSR2 EXTI falling trigger selection register
@{*/

/** EXTI_FTSR2_TR51 Falling trigger event configuration bit of Configurable Event input x+32 **/
#define EXTI_FTSR2_TR51		(1 << 19)
/** EXTI_FTSR2_TR49 Falling trigger event configuration bit of Configurable Event input x+32 **/
#define EXTI_FTSR2_TR49		(1 << 17)

/**@}*/

/** @defgroup exti_swier2 SWIER2 EXTI software interrupt event register
@{*/

/** EXTI_SWIER2_SWIER51 Software interrupt on line x+32 **/
#define EXTI_SWIER2_SWIER51		(1 << 19)
/** EXTI_SWIER2_SWIER49 Software interrupt on line x+32 **/
#define EXTI_SWIER2_SWIER49		(1 << 17)

/**@}*/

/** @defgroup exti_d3pmr2 D3PMR2 EXTI D3 pending mask register
@{*/

/** EXTI_D3PMR2_MR53 D3 Pending Mask on Event input x+32 **/
#define EXTI_D3PMR2_MR53		(1 << 21)
/** EXTI_D3PMR2_MR52 D3 Pending Mask on Event input x+32 **/
#define EXTI_D3PMR2_MR52		(1 << 20)
/** EXTI_D3PMR2_MR51 D3 Pending Mask on Event input x+32 **/
#define EXTI_D3PMR2_MR51		(1 << 19)
/** EXTI_D3PMR2_MR50 D3 Pending Mask on Event input x+32 **/
#define EXTI_D3PMR2_MR50		(1 << 18)
/** EXTI_D3PMR2_MR49 D3 Pending Mask on Event input x+32 **/
#define EXTI_D3PMR2_MR49		(1 << 17)
/** EXTI_D3PMR2_MR48 D3 Pending Mask on Event input x+32 **/
#define EXTI_D3PMR2_MR48		(1 << 16)
/** EXTI_D3PMR2_MR41 D3 Pending Mask on Event input x+32 **/
#define EXTI_D3PMR2_MR41		(1 << 9)
/** EXTI_D3PMR2_MR35 D3 Pending Mask on Event input x+32 **/
#define EXTI_D3PMR2_MR35		(1 << 3)
/** EXTI_D3PMR2_MR34 D3 Pending Mask on Event input x+32 **/
#define EXTI_D3PMR2_MR34		(1 << 2)

/**@}*/

/** @defgroup exti_d3pcr2l D3PCR2L EXTI D3 pending clear selection register low
@{*/


#define EXTI_D3PCR2L_PCS41_SHIFT		18
#define EXTI_D3PCR2L_PCS41_MASK		0x03
/** @defgroup exti_d3pcr2l_pcs41 PCS41 D3 Pending request clear input signal selection on Event input x = truncate ((n+64)/2)
@{*/
/**@}*/


#define EXTI_D3PCR2L_PCS35_SHIFT		6
#define EXTI_D3PCR2L_PCS35_MASK		0x03
/** @defgroup exti_d3pcr2l_pcs35 PCS35 D3 Pending request clear input signal selection on Event input x = truncate ((n+64)/2)
@{*/
/**@}*/


#define EXTI_D3PCR2L_PCS34_SHIFT		4
#define EXTI_D3PCR2L_PCS34_MASK		0x03
/** @defgroup exti_d3pcr2l_pcs34 PCS34 D3 Pending request clear input signal selection on Event input x = truncate ((n+64)/2)
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_d3pcr2h D3PCR2H EXTI D3 pending clear selection register high
@{*/


#define EXTI_D3PCR2H_PCS53_SHIFT		10
#define EXTI_D3PCR2H_PCS53_MASK		0x03
/** @defgroup exti_d3pcr2h_pcs53 PCS53 Pending request clear input signal selection on Event input x= truncate ((n+96)/2)
@{*/
/**@}*/


#define EXTI_D3PCR2H_PCS52_SHIFT		8
#define EXTI_D3PCR2H_PCS52_MASK		0x03
/** @defgroup exti_d3pcr2h_pcs52 PCS52 Pending request clear input signal selection on Event input x= truncate ((n+96)/2)
@{*/
/**@}*/


#define EXTI_D3PCR2H_PCS51_SHIFT		6
#define EXTI_D3PCR2H_PCS51_MASK		0x03
/** @defgroup exti_d3pcr2h_pcs51 PCS51 Pending request clear input signal selection on Event input x= truncate ((n+96)/2)
@{*/
/**@}*/


#define EXTI_D3PCR2H_PCS50_SHIFT		4
#define EXTI_D3PCR2H_PCS50_MASK		0x03
/** @defgroup exti_d3pcr2h_pcs50 PCS50 Pending request clear input signal selection on Event input x= truncate ((n+96)/2)
@{*/
/**@}*/


#define EXTI_D3PCR2H_PCS49_SHIFT		2
#define EXTI_D3PCR2H_PCS49_MASK		0x03
/** @defgroup exti_d3pcr2h_pcs49 PCS49 Pending request clear input signal selection on Event input x= truncate ((n+96)/2)
@{*/
/**@}*/


#define EXTI_D3PCR2H_PCS48_SHIFT		0
#define EXTI_D3PCR2H_PCS48_MASK		0x03
/** @defgroup exti_d3pcr2h_pcs48 PCS48 Pending request clear input signal selection on Event input x= truncate ((n+96)/2)
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_rtsr3 RTSR3 EXTI rising trigger selection register
@{*/

/** EXTI_RTSR3_TR86 Rising trigger event configuration bit of Configurable Event input x+64 **/
#define EXTI_RTSR3_TR86		(1 << 22)
/** EXTI_RTSR3_TR85 Rising trigger event configuration bit of Configurable Event input x+64 **/
#define EXTI_RTSR3_TR85		(1 << 21)
/** EXTI_RTSR3_TR84 Rising trigger event configuration bit of Configurable Event input x+64 **/
#define EXTI_RTSR3_TR84		(1 << 20)
/** EXTI_RTSR3_TR82 Rising trigger event configuration bit of Configurable Event input x+64 **/
#define EXTI_RTSR3_TR82		(1 << 18)

/**@}*/

/** @defgroup exti_ftsr3 FTSR3 EXTI falling trigger selection register
@{*/

/** EXTI_FTSR3_TR86 Falling trigger event configuration bit of Configurable Event input x+64 **/
#define EXTI_FTSR3_TR86		(1 << 22)
/** EXTI_FTSR3_TR85 Falling trigger event configuration bit of Configurable Event input x+64 **/
#define EXTI_FTSR3_TR85		(1 << 21)
/** EXTI_FTSR3_TR84 Falling trigger event configuration bit of Configurable Event input x+64 **/
#define EXTI_FTSR3_TR84		(1 << 20)
/** EXTI_FTSR3_TR82 Falling trigger event configuration bit of Configurable Event input x+64 **/
#define EXTI_FTSR3_TR82		(1 << 18)

/**@}*/

/** @defgroup exti_swier3 SWIER3 EXTI software interrupt event register
@{*/

/** EXTI_SWIER3_SWIER86 Software interrupt on line x+64 **/
#define EXTI_SWIER3_SWIER86		(1 << 22)
/** EXTI_SWIER3_SWIER85 Software interrupt on line x+64 **/
#define EXTI_SWIER3_SWIER85		(1 << 21)
/** EXTI_SWIER3_SWIER84 Software interrupt on line x+64 **/
#define EXTI_SWIER3_SWIER84		(1 << 20)
/** EXTI_SWIER3_SWIER82 Software interrupt on line x+64 **/
#define EXTI_SWIER3_SWIER82		(1 << 18)

/**@}*/

/** @defgroup exti_d3pmr3 D3PMR3 EXTI D3 pending mask register
@{*/

/** EXTI_D3PMR3_MR88 D3 Pending Mask on Event input x+64 **/
#define EXTI_D3PMR3_MR88		(1 << 24)

/**@}*/

/** @defgroup exti_d3pcr3h D3PCR3H EXTI D3 pending clear selection register high
@{*/


#define EXTI_D3PCR3H_PCS88_SHIFT		18
#define EXTI_D3PCR3H_PCS88_MASK		0x03
/** @defgroup exti_d3pcr3h_pcs88 PCS88 D3 Pending request clear input signal selection on Event input x= truncate N+160/2
@{*/
/**@}*/


/**@}*/

/** @defgroup exti_c1imr1 C1IMR1 EXTI interrupt mask register
@{*/

/** EXTI_C1IMR1_MR31 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR31		(1 << 31)
/** EXTI_C1IMR1_MR30 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR30		(1 << 30)
/** EXTI_C1IMR1_MR29 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR29		(1 << 29)
/** EXTI_C1IMR1_MR28 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR28		(1 << 28)
/** EXTI_C1IMR1_MR27 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR27		(1 << 27)
/** EXTI_C1IMR1_MR26 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR26		(1 << 26)
/** EXTI_C1IMR1_MR25 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR25		(1 << 25)
/** EXTI_C1IMR1_MR24 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR24		(1 << 24)
/** EXTI_C1IMR1_MR23 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR23		(1 << 23)
/** EXTI_C1IMR1_MR22 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR22		(1 << 22)
/** EXTI_C1IMR1_MR21 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR21		(1 << 21)
/** EXTI_C1IMR1_MR20 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR20		(1 << 20)
/** EXTI_C1IMR1_MR19 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR19		(1 << 19)
/** EXTI_C1IMR1_MR18 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR18		(1 << 18)
/** EXTI_C1IMR1_MR17 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR17		(1 << 17)
/** EXTI_C1IMR1_MR16 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR16		(1 << 16)
/** EXTI_C1IMR1_MR15 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR15		(1 << 15)
/** EXTI_C1IMR1_MR14 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR14		(1 << 14)
/** EXTI_C1IMR1_MR13 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR13		(1 << 13)
/** EXTI_C1IMR1_MR12 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR12		(1 << 12)
/** EXTI_C1IMR1_MR11 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR11		(1 << 11)
/** EXTI_C1IMR1_MR10 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR10		(1 << 10)
/** EXTI_C1IMR1_MR9 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR9		(1 << 9)
/** EXTI_C1IMR1_MR8 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR8		(1 << 8)
/** EXTI_C1IMR1_MR7 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR7		(1 << 7)
/** EXTI_C1IMR1_MR6 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR6		(1 << 6)
/** EXTI_C1IMR1_MR5 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR5		(1 << 5)
/** EXTI_C1IMR1_MR4 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR4		(1 << 4)
/** EXTI_C1IMR1_MR3 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR3		(1 << 3)
/** EXTI_C1IMR1_MR2 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR2		(1 << 2)
/** EXTI_C1IMR1_MR1 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR1		(1 << 1)
/** EXTI_C1IMR1_MR0 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C1IMR1_MR0		(1 << 0)

/**@}*/

/** @defgroup exti_c1emr1 C1EMR1 EXTI event mask register
@{*/

/** EXTI_C1EMR1_MR31 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR31		(1 << 31)
/** EXTI_C1EMR1_MR30 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR30		(1 << 30)
/** EXTI_C1EMR1_MR29 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR29		(1 << 29)
/** EXTI_C1EMR1_MR28 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR28		(1 << 28)
/** EXTI_C1EMR1_MR27 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR27		(1 << 27)
/** EXTI_C1EMR1_MR26 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR26		(1 << 26)
/** EXTI_C1EMR1_MR25 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR25		(1 << 25)
/** EXTI_C1EMR1_MR24 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR24		(1 << 24)
/** EXTI_C1EMR1_MR23 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR23		(1 << 23)
/** EXTI_C1EMR1_MR22 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR22		(1 << 22)
/** EXTI_C1EMR1_MR21 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR21		(1 << 21)
/** EXTI_C1EMR1_MR20 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR20		(1 << 20)
/** EXTI_C1EMR1_MR19 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR19		(1 << 19)
/** EXTI_C1EMR1_MR18 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR18		(1 << 18)
/** EXTI_C1EMR1_MR17 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR17		(1 << 17)
/** EXTI_C1EMR1_MR16 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR16		(1 << 16)
/** EXTI_C1EMR1_MR15 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR15		(1 << 15)
/** EXTI_C1EMR1_MR14 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR14		(1 << 14)
/** EXTI_C1EMR1_MR13 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR13		(1 << 13)
/** EXTI_C1EMR1_MR12 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR12		(1 << 12)
/** EXTI_C1EMR1_MR11 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR11		(1 << 11)
/** EXTI_C1EMR1_MR10 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR10		(1 << 10)
/** EXTI_C1EMR1_MR9 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR9		(1 << 9)
/** EXTI_C1EMR1_MR8 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR8		(1 << 8)
/** EXTI_C1EMR1_MR7 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR7		(1 << 7)
/** EXTI_C1EMR1_MR6 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR6		(1 << 6)
/** EXTI_C1EMR1_MR5 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR5		(1 << 5)
/** EXTI_C1EMR1_MR4 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR4		(1 << 4)
/** EXTI_C1EMR1_MR3 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR3		(1 << 3)
/** EXTI_C1EMR1_MR2 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR2		(1 << 2)
/** EXTI_C1EMR1_MR1 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR1		(1 << 1)
/** EXTI_C1EMR1_MR0 CPU Event mask on Event input x **/
#define EXTI_C1EMR1_MR0		(1 << 0)

/**@}*/

/** @defgroup exti_c1pr1 C1PR1 EXTI pending register
@{*/

/** EXTI_C1PR1_PR21 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR21		(1 << 21)
/** EXTI_C1PR1_PR20 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR20		(1 << 20)
/** EXTI_C1PR1_PR19 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR19		(1 << 19)
/** EXTI_C1PR1_PR18 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR18		(1 << 18)
/** EXTI_C1PR1_PR17 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR17		(1 << 17)
/** EXTI_C1PR1_PR16 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR16		(1 << 16)
/** EXTI_C1PR1_PR15 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR15		(1 << 15)
/** EXTI_C1PR1_PR14 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR14		(1 << 14)
/** EXTI_C1PR1_PR13 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR13		(1 << 13)
/** EXTI_C1PR1_PR12 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR12		(1 << 12)
/** EXTI_C1PR1_PR11 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR11		(1 << 11)
/** EXTI_C1PR1_PR10 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR10		(1 << 10)
/** EXTI_C1PR1_PR9 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR9		(1 << 9)
/** EXTI_C1PR1_PR8 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR8		(1 << 8)
/** EXTI_C1PR1_PR7 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR7		(1 << 7)
/** EXTI_C1PR1_PR6 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR6		(1 << 6)
/** EXTI_C1PR1_PR5 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR5		(1 << 5)
/** EXTI_C1PR1_PR4 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR4		(1 << 4)
/** EXTI_C1PR1_PR3 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR3		(1 << 3)
/** EXTI_C1PR1_PR2 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR2		(1 << 2)
/** EXTI_C1PR1_PR1 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR1		(1 << 1)
/** EXTI_C1PR1_PR0 CPU Event mask on Event input x **/
#define EXTI_C1PR1_PR0		(1 << 0)

/**@}*/

/** @defgroup exti_c1imr2 C1IMR2 EXTI interrupt mask register
@{*/

/** EXTI_C1IMR2_MR31 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR31		(1 << 31)
/** EXTI_C1IMR2_MR30 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR30		(1 << 30)
/** EXTI_C1IMR2_MR29 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR29		(1 << 29)
/** EXTI_C1IMR2_MR28 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR28		(1 << 28)
/** EXTI_C1IMR2_MR27 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR27		(1 << 27)
/** EXTI_C1IMR2_MR26 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR26		(1 << 26)
/** EXTI_C1IMR2_MR25 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR25		(1 << 25)
/** EXTI_C1IMR2_MR24 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR24		(1 << 24)
/** EXTI_C1IMR2_MR23 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR23		(1 << 23)
/** EXTI_C1IMR2_MR22 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR22		(1 << 22)
/** EXTI_C1IMR2_MR21 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR21		(1 << 21)
/** EXTI_C1IMR2_MR20 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR20		(1 << 20)
/** EXTI_C1IMR2_MR19 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR19		(1 << 19)
/** EXTI_C1IMR2_MR18 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR18		(1 << 18)
/** EXTI_C1IMR2_MR17 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR17		(1 << 17)
/** EXTI_C1IMR2_MR16 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR16		(1 << 16)
/** EXTI_C1IMR2_MR15 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR15		(1 << 15)
/** EXTI_C1IMR2_MR14 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR14		(1 << 14)
/** EXTI_C1IMR2_MR12 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR12		(1 << 12)
/** EXTI_C1IMR2_MR11 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR11		(1 << 11)
/** EXTI_C1IMR2_MR10 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR10		(1 << 10)
/** EXTI_C1IMR2_MR9 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR9		(1 << 9)
/** EXTI_C1IMR2_MR8 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR8		(1 << 8)
/** EXTI_C1IMR2_MR7 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR7		(1 << 7)
/** EXTI_C1IMR2_MR6 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR6		(1 << 6)
/** EXTI_C1IMR2_MR5 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR5		(1 << 5)
/** EXTI_C1IMR2_MR4 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR4		(1 << 4)
/** EXTI_C1IMR2_MR3 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR3		(1 << 3)
/** EXTI_C1IMR2_MR2 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR2		(1 << 2)
/** EXTI_C1IMR2_MR1 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR1		(1 << 1)
/** EXTI_C1IMR2_MR0 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1IMR2_MR0		(1 << 0)

/**@}*/

/** @defgroup exti_c1emr2 C1EMR2 EXTI event mask register
@{*/

/** EXTI_C1EMR2_MR63 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR63		(1 << 31)
/** EXTI_C1EMR2_MR62 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR62		(1 << 30)
/** EXTI_C1EMR2_MR61 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR61		(1 << 29)
/** EXTI_C1EMR2_MR60 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR60		(1 << 28)
/** EXTI_C1EMR2_MR59 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR59		(1 << 27)
/** EXTI_C1EMR2_MR58 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR58		(1 << 26)
/** EXTI_C1EMR2_MR57 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR57		(1 << 25)
/** EXTI_C1EMR2_MR56 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR56		(1 << 24)
/** EXTI_C1EMR2_MR55 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR55		(1 << 23)
/** EXTI_C1EMR2_MR54 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR54		(1 << 22)
/** EXTI_C1EMR2_MR53 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR53		(1 << 21)
/** EXTI_C1EMR2_MR52 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR52		(1 << 20)
/** EXTI_C1EMR2_MR51 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR51		(1 << 19)
/** EXTI_C1EMR2_MR50 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR50		(1 << 18)
/** EXTI_C1EMR2_MR49 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR49		(1 << 17)
/** EXTI_C1EMR2_MR48 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR48		(1 << 16)
/** EXTI_C1EMR2_MR47 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR47		(1 << 15)
/** EXTI_C1EMR2_MR46 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR46		(1 << 14)
/** EXTI_C1EMR2_MR44 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR44		(1 << 12)
/** EXTI_C1EMR2_MR43 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR43		(1 << 11)
/** EXTI_C1EMR2_MR42 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR42		(1 << 10)
/** EXTI_C1EMR2_MR41 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR41		(1 << 9)
/** EXTI_C1EMR2_MR40 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR40		(1 << 8)
/** EXTI_C1EMR2_MR39 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR39		(1 << 7)
/** EXTI_C1EMR2_MR38 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR38		(1 << 6)
/** EXTI_C1EMR2_MR37 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR37		(1 << 5)
/** EXTI_C1EMR2_MR36 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR36		(1 << 4)
/** EXTI_C1EMR2_MR35 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR35		(1 << 3)
/** EXTI_C1EMR2_MR34 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR34		(1 << 2)
/** EXTI_C1EMR2_MR33 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR33		(1 << 1)
/** EXTI_C1EMR2_MR32 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C1EMR2_MR32		(1 << 0)

/**@}*/

/** @defgroup exti_c1pr2 C1PR2 EXTI pending register
@{*/

/** EXTI_C1PR2_PR51 Configurable event inputs x+32 Pending bit **/
#define EXTI_C1PR2_PR51		(1 << 19)
/** EXTI_C1PR2_PR49 Configurable event inputs x+32 Pending bit **/
#define EXTI_C1PR2_PR49		(1 << 17)

/**@}*/

/** @defgroup exti_c1imr3 C1IMR3 EXTI interrupt mask register
@{*/

/** EXTI_C1IMR3_MR88 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR88		(1 << 24)
/** EXTI_C1IMR3_MR87 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR87		(1 << 23)
/** EXTI_C1IMR3_MR86 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR86		(1 << 22)
/** EXTI_C1IMR3_MR85 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR85		(1 << 21)
/** EXTI_C1IMR3_MR84 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR84		(1 << 20)
/** EXTI_C1IMR3_MR82 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR82		(1 << 18)
/** EXTI_C1IMR3_MR80 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR80		(1 << 16)
/** EXTI_C1IMR3_MR79 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR79		(1 << 15)
/** EXTI_C1IMR3_MR78 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR78		(1 << 14)
/** EXTI_C1IMR3_MR77 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR77		(1 << 13)
/** EXTI_C1IMR3_MR76 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR76		(1 << 12)
/** EXTI_C1IMR3_MR75 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR75		(1 << 11)
/** EXTI_C1IMR3_MR74 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR74		(1 << 10)
/** EXTI_C1IMR3_MR73 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR73		(1 << 9)
/** EXTI_C1IMR3_MR72 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR72		(1 << 8)
/** EXTI_C1IMR3_MR71 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR71		(1 << 7)
/** EXTI_C1IMR3_MR70 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR70		(1 << 6)
/** EXTI_C1IMR3_MR69 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR69		(1 << 5)
/** EXTI_C1IMR3_MR68 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR68		(1 << 4)
/** EXTI_C1IMR3_MR67 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR67		(1 << 3)
/** EXTI_C1IMR3_MR66 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR66		(1 << 2)
/** EXTI_C1IMR3_MR65 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR65		(1 << 1)
/** EXTI_C1IMR3_MR64 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C1IMR3_MR64		(1 << 0)

/**@}*/

/** @defgroup exti_c1emr3 C1EMR3 EXTI event mask register
@{*/

/** EXTI_C1EMR3_MR88 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR88		(1 << 24)
/** EXTI_C1EMR3_MR87 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR87		(1 << 23)
/** EXTI_C1EMR3_MR86 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR86		(1 << 22)
/** EXTI_C1EMR3_MR85 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR85		(1 << 21)
/** EXTI_C1EMR3_MR84 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR84		(1 << 20)
/** EXTI_C1EMR3_MR82 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR82		(1 << 18)
/** EXTI_C1EMR3_MR80 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR80		(1 << 16)
/** EXTI_C1EMR3_MR79 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR79		(1 << 15)
/** EXTI_C1EMR3_MR78 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR78		(1 << 14)
/** EXTI_C1EMR3_MR77 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR77		(1 << 13)
/** EXTI_C1EMR3_MR76 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR76		(1 << 12)
/** EXTI_C1EMR3_MR75 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR75		(1 << 11)
/** EXTI_C1EMR3_MR74 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR74		(1 << 10)
/** EXTI_C1EMR3_MR73 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR73		(1 << 9)
/** EXTI_C1EMR3_MR72 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR72		(1 << 8)
/** EXTI_C1EMR3_MR71 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR71		(1 << 7)
/** EXTI_C1EMR3_MR70 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR70		(1 << 6)
/** EXTI_C1EMR3_MR69 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR69		(1 << 5)
/** EXTI_C1EMR3_MR68 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR68		(1 << 4)
/** EXTI_C1EMR3_MR67 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR67		(1 << 3)
/** EXTI_C1EMR3_MR66 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR66		(1 << 2)
/** EXTI_C1EMR3_MR65 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR65		(1 << 1)
/** EXTI_C1EMR3_MR64 CPU Event mask on Event input x+64 **/
#define EXTI_C1EMR3_MR64		(1 << 0)

/**@}*/

/** @defgroup exti_c1pr3 C1PR3 EXTI pending register
@{*/

/** EXTI_C1PR3_PR86 Configurable event inputs x+64 Pending bit **/
#define EXTI_C1PR3_PR86		(1 << 22)
/** EXTI_C1PR3_PR85 Configurable event inputs x+64 Pending bit **/
#define EXTI_C1PR3_PR85		(1 << 21)
/** EXTI_C1PR3_PR84 Configurable event inputs x+64 Pending bit **/
#define EXTI_C1PR3_PR84		(1 << 20)
/** EXTI_C1PR3_PR82 Configurable event inputs x+64 Pending bit **/
#define EXTI_C1PR3_PR82		(1 << 18)

/**@}*/

/** @defgroup exti_c2imr1 C2IMR1 EXTI interrupt mask register
@{*/

/** EXTI_C2IMR1_MR31 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR31		(1 << 31)
/** EXTI_C2IMR1_MR30 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR30		(1 << 30)
/** EXTI_C2IMR1_MR29 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR29		(1 << 29)
/** EXTI_C2IMR1_MR28 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR28		(1 << 28)
/** EXTI_C2IMR1_MR27 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR27		(1 << 27)
/** EXTI_C2IMR1_MR26 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR26		(1 << 26)
/** EXTI_C2IMR1_MR25 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR25		(1 << 25)
/** EXTI_C2IMR1_MR24 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR24		(1 << 24)
/** EXTI_C2IMR1_MR23 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR23		(1 << 23)
/** EXTI_C2IMR1_MR22 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR22		(1 << 22)
/** EXTI_C2IMR1_MR21 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR21		(1 << 21)
/** EXTI_C2IMR1_MR20 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR20		(1 << 20)
/** EXTI_C2IMR1_MR19 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR19		(1 << 19)
/** EXTI_C2IMR1_MR18 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR18		(1 << 18)
/** EXTI_C2IMR1_MR17 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR17		(1 << 17)
/** EXTI_C2IMR1_MR16 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR16		(1 << 16)
/** EXTI_C2IMR1_MR15 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR15		(1 << 15)
/** EXTI_C2IMR1_MR14 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR14		(1 << 14)
/** EXTI_C2IMR1_MR13 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR13		(1 << 13)
/** EXTI_C2IMR1_MR12 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR12		(1 << 12)
/** EXTI_C2IMR1_MR11 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR11		(1 << 11)
/** EXTI_C2IMR1_MR10 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR10		(1 << 10)
/** EXTI_C2IMR1_MR9 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR9		(1 << 9)
/** EXTI_C2IMR1_MR8 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR8		(1 << 8)
/** EXTI_C2IMR1_MR7 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR7		(1 << 7)
/** EXTI_C2IMR1_MR6 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR6		(1 << 6)
/** EXTI_C2IMR1_MR5 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR5		(1 << 5)
/** EXTI_C2IMR1_MR4 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR4		(1 << 4)
/** EXTI_C2IMR1_MR3 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR3		(1 << 3)
/** EXTI_C2IMR1_MR2 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR2		(1 << 2)
/** EXTI_C2IMR1_MR1 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR1		(1 << 1)
/** EXTI_C2IMR1_MR0 Rising trigger event configuration bit of Configurable Event input **/
#define EXTI_C2IMR1_MR0		(1 << 0)

/**@}*/

/** @defgroup exti_c2emr1 C2EMR1 EXTI event mask register
@{*/

/** EXTI_C2EMR1_MR31 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR31		(1 << 31)
/** EXTI_C2EMR1_MR30 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR30		(1 << 30)
/** EXTI_C2EMR1_MR29 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR29		(1 << 29)
/** EXTI_C2EMR1_MR28 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR28		(1 << 28)
/** EXTI_C2EMR1_MR27 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR27		(1 << 27)
/** EXTI_C2EMR1_MR26 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR26		(1 << 26)
/** EXTI_C2EMR1_MR25 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR25		(1 << 25)
/** EXTI_C2EMR1_MR24 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR24		(1 << 24)
/** EXTI_C2EMR1_MR23 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR23		(1 << 23)
/** EXTI_C2EMR1_MR22 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR22		(1 << 22)
/** EXTI_C2EMR1_MR21 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR21		(1 << 21)
/** EXTI_C2EMR1_MR20 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR20		(1 << 20)
/** EXTI_C2EMR1_MR19 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR19		(1 << 19)
/** EXTI_C2EMR1_MR18 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR18		(1 << 18)
/** EXTI_C2EMR1_MR17 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR17		(1 << 17)
/** EXTI_C2EMR1_MR16 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR16		(1 << 16)
/** EXTI_C2EMR1_MR15 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR15		(1 << 15)
/** EXTI_C2EMR1_MR14 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR14		(1 << 14)
/** EXTI_C2EMR1_MR13 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR13		(1 << 13)
/** EXTI_C2EMR1_MR12 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR12		(1 << 12)
/** EXTI_C2EMR1_MR11 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR11		(1 << 11)
/** EXTI_C2EMR1_MR10 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR10		(1 << 10)
/** EXTI_C2EMR1_MR9 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR9		(1 << 9)
/** EXTI_C2EMR1_MR8 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR8		(1 << 8)
/** EXTI_C2EMR1_MR7 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR7		(1 << 7)
/** EXTI_C2EMR1_MR6 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR6		(1 << 6)
/** EXTI_C2EMR1_MR5 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR5		(1 << 5)
/** EXTI_C2EMR1_MR4 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR4		(1 << 4)
/** EXTI_C2EMR1_MR3 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR3		(1 << 3)
/** EXTI_C2EMR1_MR2 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR2		(1 << 2)
/** EXTI_C2EMR1_MR1 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR1		(1 << 1)
/** EXTI_C2EMR1_MR0 CPU Event mask on Event input x **/
#define EXTI_C2EMR1_MR0		(1 << 0)

/**@}*/

/** @defgroup exti_c2pr1 C2PR1 EXTI pending register
@{*/

/** EXTI_C2PR1_PR21 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR21		(1 << 21)
/** EXTI_C2PR1_PR20 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR20		(1 << 20)
/** EXTI_C2PR1_PR19 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR19		(1 << 19)
/** EXTI_C2PR1_PR18 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR18		(1 << 18)
/** EXTI_C2PR1_PR17 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR17		(1 << 17)
/** EXTI_C2PR1_PR16 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR16		(1 << 16)
/** EXTI_C2PR1_PR15 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR15		(1 << 15)
/** EXTI_C2PR1_PR14 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR14		(1 << 14)
/** EXTI_C2PR1_PR13 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR13		(1 << 13)
/** EXTI_C2PR1_PR12 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR12		(1 << 12)
/** EXTI_C2PR1_PR11 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR11		(1 << 11)
/** EXTI_C2PR1_PR10 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR10		(1 << 10)
/** EXTI_C2PR1_PR9 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR9		(1 << 9)
/** EXTI_C2PR1_PR8 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR8		(1 << 8)
/** EXTI_C2PR1_PR7 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR7		(1 << 7)
/** EXTI_C2PR1_PR6 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR6		(1 << 6)
/** EXTI_C2PR1_PR5 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR5		(1 << 5)
/** EXTI_C2PR1_PR4 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR4		(1 << 4)
/** EXTI_C2PR1_PR3 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR3		(1 << 3)
/** EXTI_C2PR1_PR2 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR2		(1 << 2)
/** EXTI_C2PR1_PR1 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR1		(1 << 1)
/** EXTI_C2PR1_PR0 CPU Event mask on Event input x **/
#define EXTI_C2PR1_PR0		(1 << 0)

/**@}*/

/** @defgroup exti_c2imr2 C2IMR2 EXTI interrupt mask register
@{*/

/** EXTI_C2IMR2_MR31 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR31		(1 << 31)
/** EXTI_C2IMR2_MR30 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR30		(1 << 30)
/** EXTI_C2IMR2_MR29 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR29		(1 << 29)
/** EXTI_C2IMR2_MR28 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR28		(1 << 28)
/** EXTI_C2IMR2_MR27 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR27		(1 << 27)
/** EXTI_C2IMR2_MR26 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR26		(1 << 26)
/** EXTI_C2IMR2_MR25 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR25		(1 << 25)
/** EXTI_C2IMR2_MR24 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR24		(1 << 24)
/** EXTI_C2IMR2_MR23 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR23		(1 << 23)
/** EXTI_C2IMR2_MR22 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR22		(1 << 22)
/** EXTI_C2IMR2_MR21 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR21		(1 << 21)
/** EXTI_C2IMR2_MR20 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR20		(1 << 20)
/** EXTI_C2IMR2_MR19 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR19		(1 << 19)
/** EXTI_C2IMR2_MR18 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR18		(1 << 18)
/** EXTI_C2IMR2_MR17 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR17		(1 << 17)
/** EXTI_C2IMR2_MR16 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR16		(1 << 16)
/** EXTI_C2IMR2_MR15 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR15		(1 << 15)
/** EXTI_C2IMR2_MR14 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR14		(1 << 14)
/** EXTI_C2IMR2_MR12 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR12		(1 << 12)
/** EXTI_C2IMR2_MR11 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR11		(1 << 11)
/** EXTI_C2IMR2_MR10 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR10		(1 << 10)
/** EXTI_C2IMR2_MR9 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR9		(1 << 9)
/** EXTI_C2IMR2_MR8 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR8		(1 << 8)
/** EXTI_C2IMR2_MR7 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR7		(1 << 7)
/** EXTI_C2IMR2_MR6 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR6		(1 << 6)
/** EXTI_C2IMR2_MR5 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR5		(1 << 5)
/** EXTI_C2IMR2_MR4 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR4		(1 << 4)
/** EXTI_C2IMR2_MR3 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR3		(1 << 3)
/** EXTI_C2IMR2_MR2 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR2		(1 << 2)
/** EXTI_C2IMR2_MR1 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR1		(1 << 1)
/** EXTI_C2IMR2_MR0 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2IMR2_MR0		(1 << 0)

/**@}*/

/** @defgroup exti_c2emr2 C2EMR2 EXTI event mask register
@{*/

/** EXTI_C2EMR2_MR63 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR63		(1 << 31)
/** EXTI_C2EMR2_MR62 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR62		(1 << 30)
/** EXTI_C2EMR2_MR61 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR61		(1 << 29)
/** EXTI_C2EMR2_MR60 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR60		(1 << 28)
/** EXTI_C2EMR2_MR59 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR59		(1 << 27)
/** EXTI_C2EMR2_MR58 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR58		(1 << 26)
/** EXTI_C2EMR2_MR57 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR57		(1 << 25)
/** EXTI_C2EMR2_MR56 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR56		(1 << 24)
/** EXTI_C2EMR2_MR55 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR55		(1 << 23)
/** EXTI_C2EMR2_MR54 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR54		(1 << 22)
/** EXTI_C2EMR2_MR53 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR53		(1 << 21)
/** EXTI_C2EMR2_MR52 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR52		(1 << 20)
/** EXTI_C2EMR2_MR51 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR51		(1 << 19)
/** EXTI_C2EMR2_MR50 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR50		(1 << 18)
/** EXTI_C2EMR2_MR49 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR49		(1 << 17)
/** EXTI_C2EMR2_MR48 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR48		(1 << 16)
/** EXTI_C2EMR2_MR47 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR47		(1 << 15)
/** EXTI_C2EMR2_MR46 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR46		(1 << 14)
/** EXTI_C2EMR2_MR44 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR44		(1 << 12)
/** EXTI_C2EMR2_MR43 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR43		(1 << 11)
/** EXTI_C2EMR2_MR42 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR42		(1 << 10)
/** EXTI_C2EMR2_MR41 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR41		(1 << 9)
/** EXTI_C2EMR2_MR40 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR40		(1 << 8)
/** EXTI_C2EMR2_MR39 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR39		(1 << 7)
/** EXTI_C2EMR2_MR38 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR38		(1 << 6)
/** EXTI_C2EMR2_MR37 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR37		(1 << 5)
/** EXTI_C2EMR2_MR36 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR36		(1 << 4)
/** EXTI_C2EMR2_MR35 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR35		(1 << 3)
/** EXTI_C2EMR2_MR34 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR34		(1 << 2)
/** EXTI_C2EMR2_MR33 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR33		(1 << 1)
/** EXTI_C2EMR2_MR32 CPU Interrupt Mask on Direct Event input x+32 **/
#define EXTI_C2EMR2_MR32		(1 << 0)

/**@}*/

/** @defgroup exti_c2pr2 C2PR2 EXTI pending register
@{*/

/** EXTI_C2PR2_PR51 Configurable event inputs x+32 Pending bit **/
#define EXTI_C2PR2_PR51		(1 << 19)
/** EXTI_C2PR2_PR49 Configurable event inputs x+32 Pending bit **/
#define EXTI_C2PR2_PR49		(1 << 17)

/**@}*/

/** @defgroup exti_c2imr3 C2IMR3 EXTI interrupt mask register
@{*/

/** EXTI_C2IMR3_MR88 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR88		(1 << 24)
/** EXTI_C2IMR3_MR87 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR87		(1 << 23)
/** EXTI_C2IMR3_MR86 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR86		(1 << 22)
/** EXTI_C2IMR3_MR85 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR85		(1 << 21)
/** EXTI_C2IMR3_MR84 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR84		(1 << 20)
/** EXTI_C2IMR3_MR82 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR82		(1 << 18)
/** EXTI_C2IMR3_MR80 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR80		(1 << 16)
/** EXTI_C2IMR3_MR79 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR79		(1 << 15)
/** EXTI_C2IMR3_MR78 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR78		(1 << 14)
/** EXTI_C2IMR3_MR77 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR77		(1 << 13)
/** EXTI_C2IMR3_MR76 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR76		(1 << 12)
/** EXTI_C2IMR3_MR75 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR75		(1 << 11)
/** EXTI_C2IMR3_MR74 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR74		(1 << 10)
/** EXTI_C2IMR3_MR73 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR73		(1 << 9)
/** EXTI_C2IMR3_MR72 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR72		(1 << 8)
/** EXTI_C2IMR3_MR71 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR71		(1 << 7)
/** EXTI_C2IMR3_MR70 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR70		(1 << 6)
/** EXTI_C2IMR3_MR69 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR69		(1 << 5)
/** EXTI_C2IMR3_MR68 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR68		(1 << 4)
/** EXTI_C2IMR3_MR67 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR67		(1 << 3)
/** EXTI_C2IMR3_MR66 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR66		(1 << 2)
/** EXTI_C2IMR3_MR65 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR65		(1 << 1)
/** EXTI_C2IMR3_MR64 CPU Interrupt Mask on Direct Event input x+64 **/
#define EXTI_C2IMR3_MR64		(1 << 0)

/**@}*/

/** @defgroup exti_c2emr3 C2EMR3 EXTI event mask register
@{*/

/** EXTI_C2EMR3_MR88 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR88		(1 << 24)
/** EXTI_C2EMR3_MR87 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR87		(1 << 23)
/** EXTI_C2EMR3_MR86 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR86		(1 << 22)
/** EXTI_C2EMR3_MR85 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR85		(1 << 21)
/** EXTI_C2EMR3_MR84 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR84		(1 << 20)
/** EXTI_C2EMR3_MR82 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR82		(1 << 18)
/** EXTI_C2EMR3_MR80 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR80		(1 << 16)
/** EXTI_C2EMR3_MR79 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR79		(1 << 15)
/** EXTI_C2EMR3_MR78 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR78		(1 << 14)
/** EXTI_C2EMR3_MR77 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR77		(1 << 13)
/** EXTI_C2EMR3_MR76 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR76		(1 << 12)
/** EXTI_C2EMR3_MR75 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR75		(1 << 11)
/** EXTI_C2EMR3_MR74 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR74		(1 << 10)
/** EXTI_C2EMR3_MR73 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR73		(1 << 9)
/** EXTI_C2EMR3_MR72 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR72		(1 << 8)
/** EXTI_C2EMR3_MR71 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR71		(1 << 7)
/** EXTI_C2EMR3_MR70 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR70		(1 << 6)
/** EXTI_C2EMR3_MR69 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR69		(1 << 5)
/** EXTI_C2EMR3_MR68 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR68		(1 << 4)
/** EXTI_C2EMR3_MR67 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR67		(1 << 3)
/** EXTI_C2EMR3_MR66 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR66		(1 << 2)
/** EXTI_C2EMR3_MR65 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR65		(1 << 1)
/** EXTI_C2EMR3_MR64 CPU Event mask on Event input x+64 **/
#define EXTI_C2EMR3_MR64		(1 << 0)

/**@}*/

/** @defgroup exti_c2pr3 C2PR3 EXTI pending register
@{*/

/** EXTI_C2PR3_PR86 Configurable event inputs x+64 Pending bit **/
#define EXTI_C2PR3_PR86		(1 << 22)
/** EXTI_C2PR3_PR85 Configurable event inputs x+64 Pending bit **/
#define EXTI_C2PR3_PR85		(1 << 21)
/** EXTI_C2PR3_PR84 Configurable event inputs x+64 Pending bit **/
#define EXTI_C2PR3_PR84		(1 << 20)
/** EXTI_C2PR3_PR82 Configurable event inputs x+64 Pending bit **/
#define EXTI_C2PR3_PR82		(1 << 18)

/**@}*/

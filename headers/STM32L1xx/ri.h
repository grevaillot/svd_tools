#pragma once 

/* --- RI: Routing interface ---------------------------------------- */

/** @defgroup ri_registers Routing interface Register
@{*/

/** RI_ICR RI input capture register **/
#define RI_ICR			MMIO32(RI_BASE + 0x04)
/** RI_ASCR1 RI analog switches control register 1 **/
#define RI_ASCR1			MMIO32(RI_BASE + 0x08)
/** RI_ASCR2 RI analog switches control register 2 **/
#define RI_ASCR2			MMIO32(RI_BASE + 0x0c)
/** RI_HYSCR1 RI hysteresis control register 1 **/
#define RI_HYSCR1			MMIO32(RI_BASE + 0x10)
/** RI_HYSCR2 RI hysteresis control register 2 **/
#define RI_HYSCR2			MMIO32(RI_BASE + 0x14)
/** RI_HYSCR3 RI hysteresis control register 3 **/
#define RI_HYSCR3			MMIO32(RI_BASE + 0x18)
/** RI_HYSCR4 Hysteresis control register **/
#define RI_HYSCR4			MMIO32(RI_BASE + 0x1c)

/**@}*/


/** @defgroup ri_icr ICR RI input capture register
@{*/

/** RI_ICR_IC4 IC4 **/
#define RI_ICR_IC4		(1 << 21)
/** RI_ICR_IC3 IC3 **/
#define RI_ICR_IC3		(1 << 20)
/** RI_ICR_IC2 IC2 **/
#define RI_ICR_IC2		(1 << 19)
/** RI_ICR_IC1 IC1 **/
#define RI_ICR_IC1		(1 << 18)

#define RI_ICR_TIM_SHIFT		16
#define RI_ICR_TIM_MASK		0x03
/** @defgroup ri_icr_tim TIM Timer select bits
@{*/
/**@}*/


#define RI_ICR_IC4IOS_SHIFT		12
#define RI_ICR_IC4IOS_MASK		0x0f
/** @defgroup ri_icr_ic4ios IC4IOS Input capture 4 select bits
@{*/
/**@}*/


#define RI_ICR_IC3IOS_SHIFT		8
#define RI_ICR_IC3IOS_MASK		0x0f
/** @defgroup ri_icr_ic3ios IC3IOS Input capture 3 select bits
@{*/
/**@}*/


#define RI_ICR_IC2IOS_SHIFT		4
#define RI_ICR_IC2IOS_MASK		0x0f
/** @defgroup ri_icr_ic2ios IC2IOS Input capture 2 select bits
@{*/
/**@}*/


#define RI_ICR_IC1IOS_SHIFT		0
#define RI_ICR_IC1IOS_MASK		0x0f
/** @defgroup ri_icr_ic1ios IC1IOS Input capture 1 select bits
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_ascr1 ASCR1 RI analog switches control register 1
@{*/

/** RI_ASCR1_SCM Switch control mode **/
#define RI_ASCR1_SCM		(1 << 31)
/** RI_ASCR1_CH30GR11_4 Analog switch control **/
#define RI_ASCR1_CH30GR11_4		(1 << 30)
/** RI_ASCR1_CH29GR11_3 Analog switch control **/
#define RI_ASCR1_CH29GR11_3		(1 << 29)
/** RI_ASCR1_CH28GR11_2 Analog switch control **/
#define RI_ASCR1_CH28GR11_2		(1 << 28)
/** RI_ASCR1_CH27GR11_1 Analog switch control **/
#define RI_ASCR1_CH27GR11_1		(1 << 27)
/** RI_ASCR1_VCOMP ADC analog switch selection for internal node to comparator 1 **/
#define RI_ASCR1_VCOMP		(1 << 26)
/** RI_ASCR1_CH25 Analog I/O switch control of channel CH25 **/
#define RI_ASCR1_CH25		(1 << 25)
/** RI_ASCR1_CH24 Analog I/O switch control of channel CH24 **/
#define RI_ASCR1_CH24		(1 << 24)
/** RI_ASCR1_CH23 Analog I/O switch control of channel CH23 **/
#define RI_ASCR1_CH23		(1 << 23)
/** RI_ASCR1_CH22 Analog I/O switch control of channel CH22 **/
#define RI_ASCR1_CH22		(1 << 22)
/** RI_ASCR1_CH21GR7_4 Analog switch control **/
#define RI_ASCR1_CH21GR7_4		(1 << 21)
/** RI_ASCR1_CH20GR7_3 Analog switch control **/
#define RI_ASCR1_CH20GR7_3		(1 << 20)
/** RI_ASCR1_CH19GR7_2 Analog switch control **/
#define RI_ASCR1_CH19GR7_2		(1 << 19)
/** RI_ASCR1_CH18GR7_1 Analog switch control **/
#define RI_ASCR1_CH18GR7_1		(1 << 18)
/** RI_ASCR1_CH31GR7_1 Analog switch control **/
#define RI_ASCR1_CH31GR7_1		(1 << 16)
/** RI_ASCR1_CH15GR9_2 Analog switch control **/
#define RI_ASCR1_CH15GR9_2		(1 << 15)
/** RI_ASCR1_CH14GR9_1 Analog switch control **/
#define RI_ASCR1_CH14GR9_1		(1 << 14)
/** RI_ASCR1_CH13GR8_4 Analog switch control **/
#define RI_ASCR1_CH13GR8_4		(1 << 13)
/** RI_ASCR1_CH12GR8_3 Analog switch control **/
#define RI_ASCR1_CH12GR8_3		(1 << 12)
/** RI_ASCR1_CH11GR8_2 Analog switch control **/
#define RI_ASCR1_CH11GR8_2		(1 << 11)
/** RI_ASCR1_CH10GR8_1 Analog switch control **/
#define RI_ASCR1_CH10GR8_1		(1 << 10)
/** RI_ASCR1_CH9GR3_2 Analog switch control **/
#define RI_ASCR1_CH9GR3_2		(1 << 9)
/** RI_ASCR1_CH8GR3_1 Analog switch control **/
#define RI_ASCR1_CH8GR3_1		(1 << 8)
/** RI_ASCR1_CH7GR2_2 Analog switch control **/
#define RI_ASCR1_CH7GR2_2		(1 << 7)
/** RI_ASCR1_CH6GR2_1 Analog switch control **/
#define RI_ASCR1_CH6GR2_1		(1 << 6)
/** RI_ASCR1_COMP1_SW1 Comparator 1 analog switch **/
#define RI_ASCR1_COMP1_SW1		(1 << 5)
/** RI_ASCR1_CH31GR11_5 Analog switch control **/
#define RI_ASCR1_CH31GR11_5		(1 << 4)
/** RI_ASCR1_CH3GR1_4 Analog switch control **/
#define RI_ASCR1_CH3GR1_4		(1 << 3)
/** RI_ASCR1_CH2GR1_3 Analog switch control **/
#define RI_ASCR1_CH2GR1_3		(1 << 2)
/** RI_ASCR1_CH1GR1_2 Analog switch control **/
#define RI_ASCR1_CH1GR1_2		(1 << 1)
/** RI_ASCR1_CH0GR1_1 Analog switch control **/
#define RI_ASCR1_CH0GR1_1		(1 << 0)

/**@}*/

/** @defgroup ri_ascr2 ASCR2 RI analog switches control register 2
@{*/

/** RI_ASCR2_GR5_4 GR5_4 analog switch control **/
#define RI_ASCR2_GR5_4		(1 << 29)
/** RI_ASCR2_GR6_4 GR6_4 analog switch control **/
#define RI_ASCR2_GR6_4		(1 << 28)
/** RI_ASCR2_GR6_3 GR6_3 analog switch control **/
#define RI_ASCR2_GR6_3		(1 << 27)
/** RI_ASCR2_GR7_7 GR7_7 analog switch control **/
#define RI_ASCR2_GR7_7		(1 << 26)
/** RI_ASCR2_GR7_6 GR7_6 analog switch control **/
#define RI_ASCR2_GR7_6		(1 << 25)
/** RI_ASCR2_GR7_5 GR7_5 analog switch control **/
#define RI_ASCR2_GR7_5		(1 << 24)
/** RI_ASCR2_GR2_5 GR2_5 analog switch control **/
#define RI_ASCR2_GR2_5		(1 << 23)
/** RI_ASCR2_GR2_4 GR2_4 analog switch control **/
#define RI_ASCR2_GR2_4		(1 << 22)
/** RI_ASCR2_GR2_3 GR2_3 analog switch control **/
#define RI_ASCR2_GR2_3		(1 << 21)
/** RI_ASCR2_GR9_4 GR9_4 analog switch control **/
#define RI_ASCR2_GR9_4		(1 << 20)
/** RI_ASCR2_GR9_3 GR9_3 analog switch control **/
#define RI_ASCR2_GR9_3		(1 << 19)
/** RI_ASCR2_GR3_5 GR3_5 analog switch control **/
#define RI_ASCR2_GR3_5		(1 << 18)
/** RI_ASCR2_GR3_4 GR3_4 analog switch control **/
#define RI_ASCR2_GR3_4		(1 << 17)
/** RI_ASCR2_GR3_3 GR3_3 analog switch control **/
#define RI_ASCR2_GR3_3		(1 << 16)
/** RI_ASCR2_GR4_3 GR4_3 analog switch control **/
#define RI_ASCR2_GR4_3		(1 << 11)
/** RI_ASCR2_GR4_2 GR4_2 analog switch control **/
#define RI_ASCR2_GR4_2		(1 << 10)
/** RI_ASCR2_GR4_1 GR4_1 analog switch control **/
#define RI_ASCR2_GR4_1		(1 << 9)
/** RI_ASCR2_GR5_3 GR5_3 analog switch control **/
#define RI_ASCR2_GR5_3		(1 << 8)
/** RI_ASCR2_GR5_2 GR5_2 analog switch control **/
#define RI_ASCR2_GR5_2		(1 << 7)
/** RI_ASCR2_GR5_1 GR5_1 analog switch control **/
#define RI_ASCR2_GR5_1		(1 << 6)
/** RI_ASCR2_GR6_2 GR6_2 analog switch control **/
#define RI_ASCR2_GR6_2		(1 << 5)
/** RI_ASCR2_GR6_1 GR6_1 analog switch control **/
#define RI_ASCR2_GR6_1		(1 << 4)
/** RI_ASCR2_GR10_4 GR10_4 analog switch control **/
#define RI_ASCR2_GR10_4		(1 << 3)
/** RI_ASCR2_GR10_3 GR10_3 analog switch control **/
#define RI_ASCR2_GR10_3		(1 << 2)
/** RI_ASCR2_GR10_2 GR10_2 analog switch control **/
#define RI_ASCR2_GR10_2		(1 << 1)
/** RI_ASCR2_GR10_1 GR10_1 analog switch control **/
#define RI_ASCR2_GR10_1		(1 << 0)

/**@}*/

/** @defgroup ri_hyscr1 HYSCR1 RI hysteresis control register 1
@{*/


#define RI_HYSCR1_PB_SHIFT		16
#define RI_HYSCR1_PB_MASK		0xffff
/** @defgroup ri_hyscr1_pb PB Port B hysteresis control on/off
@{*/
/**@}*/


#define RI_HYSCR1_PA_SHIFT		0
#define RI_HYSCR1_PA_MASK		0xffff
/** @defgroup ri_hyscr1_pa PA Port A hysteresis control on/off
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_hyscr2 HYSCR2 RI hysteresis control register 2
@{*/


#define RI_HYSCR2_PD_SHIFT		16
#define RI_HYSCR2_PD_MASK		0xffff
/** @defgroup ri_hyscr2_pd PD Port D hysteresis control on/off
@{*/
/**@}*/


#define RI_HYSCR2_PC_SHIFT		0
#define RI_HYSCR2_PC_MASK		0xffff
/** @defgroup ri_hyscr2_pc PC Port C hysteresis control on/off
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_hyscr3 HYSCR3 RI hysteresis control register 3
@{*/


#define RI_HYSCR3_PF_SHIFT		16
#define RI_HYSCR3_PF_MASK		0xffff
/** @defgroup ri_hyscr3_pf PF Port F hysteresis control on/off
@{*/
/**@}*/


#define RI_HYSCR3_PE_SHIFT		0
#define RI_HYSCR3_PE_MASK		0xffff
/** @defgroup ri_hyscr3_pe PE Port E hysteresis control on/off
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_hyscr4 HYSCR4 Hysteresis control register
@{*/


#define RI_HYSCR4_PG_SHIFT		0
#define RI_HYSCR4_PG_MASK		0xffff
/** @defgroup ri_hyscr4_pg PG Port G hysteresis control on/off
@{*/
/**@}*/


/**@}*/

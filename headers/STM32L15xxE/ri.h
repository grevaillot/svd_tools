#pragma once 

/* --- RI: Routing interface ---------------------------------------- */

/** @defgroup ri_registers Routing interface Register
@{*/

/** RI_ICR RI input capture register **/
#define RI_ICR			MMIO32(RI_BASE + 0x00)
/** RI_ASCR1 RI analog switches control register 1 **/
#define RI_ASCR1			MMIO32(RI_BASE + 0x04)
/** RI_ASCR2 RI analog switches control register 2 **/
#define RI_ASCR2			MMIO32(RI_BASE + 0x08)
/** RI_HYSCR1 RI hysteresis control register 1 **/
#define RI_HYSCR1			MMIO32(RI_BASE + 0x0c)
/** RI_HYSCR2 RI hysteresis control register 2 **/
#define RI_HYSCR2			MMIO32(RI_BASE + 0x10)
/** RI_HYSCR3 RI hysteresis control register 3 **/
#define RI_HYSCR3			MMIO32(RI_BASE + 0x14)
/** RI_HYSCR4 Hysteresis control register **/
#define RI_HYSCR4			MMIO32(RI_BASE + 0x18)
/** RI_ASMR1 Analog switch mode register **/
#define RI_ASMR1			MMIO32(RI_BASE + 0x1c)
/** RI_CMR1 Channel mask register **/
#define RI_CMR1			MMIO32(RI_BASE + 0x20)
/** RI_CICR1 Channel identification for capture register **/
#define RI_CICR1			MMIO32(RI_BASE + 0x24)
/** RI_ASMR2 Analog switch mode register **/
#define RI_ASMR2			MMIO32(RI_BASE + 0x28)
/** RI_CMR2 Channel mask register **/
#define RI_CMR2			MMIO32(RI_BASE + 0x2c)
/** RI_CICR2 Channel identification for capture register **/
#define RI_CICR2			MMIO32(RI_BASE + 0x30)
/** RI_ASMR3 Analog switch mode register **/
#define RI_ASMR3			MMIO32(RI_BASE + 0x34)
/** RI_CMR3 Channel mask register **/
#define RI_CMR3			MMIO32(RI_BASE + 0x38)
/** RI_CICR3 Channel identification for capture register **/
#define RI_CICR3			MMIO32(RI_BASE + 0x3c)
/** RI_ASMR4 Analog switch mode register **/
#define RI_ASMR4			MMIO32(RI_BASE + 0x40)
/** RI_CMR4 Channel mask register **/
#define RI_CMR4			MMIO32(RI_BASE + 0x44)
/** RI_CICR4 Channel identification for capture register **/
#define RI_CICR4			MMIO32(RI_BASE + 0x48)
/** RI_ASMR5 Analog switch mode register **/
#define RI_ASMR5			MMIO32(RI_BASE + 0x4c)
/** RI_CMR5 Channel mask register **/
#define RI_CMR5			MMIO32(RI_BASE + 0x50)
/** RI_CICR5 Channel identification for capture register **/
#define RI_CICR5			MMIO32(RI_BASE + 0x54)

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

/** @defgroup ri_asmr1 ASMR1 Analog switch mode register
@{*/


#define RI_ASMR1_PA_SHIFT		0
#define RI_ASMR1_PA_MASK		0xffff
/** @defgroup ri_asmr1_pa PA Port A analog switch mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_cmr1 CMR1 Channel mask register
@{*/


#define RI_CMR1_PA_SHIFT		0
#define RI_CMR1_PA_MASK		0xffff
/** @defgroup ri_cmr1_pa PA Port A channel masking
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_cicr1 CICR1 Channel identification for capture register
@{*/


#define RI_CICR1_PA_SHIFT		0
#define RI_CICR1_PA_MASK		0xffff
/** @defgroup ri_cicr1_pa PA Port A channel identification for capture
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_asmr2 ASMR2 Analog switch mode register
@{*/


#define RI_ASMR2_PB_SHIFT		0
#define RI_ASMR2_PB_MASK		0xffff
/** @defgroup ri_asmr2_pb PB Port B analog switch mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_cmr2 CMR2 Channel mask register
@{*/


#define RI_CMR2_PB_SHIFT		0
#define RI_CMR2_PB_MASK		0xffff
/** @defgroup ri_cmr2_pb PB Port B channel masking
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_cicr2 CICR2 Channel identification for capture register
@{*/


#define RI_CICR2_PB_SHIFT		0
#define RI_CICR2_PB_MASK		0xffff
/** @defgroup ri_cicr2_pb PB Port B channel identification for capture
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_asmr3 ASMR3 Analog switch mode register
@{*/


#define RI_ASMR3_PC_SHIFT		0
#define RI_ASMR3_PC_MASK		0xffff
/** @defgroup ri_asmr3_pc PC Port C analog switch mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_cmr3 CMR3 Channel mask register
@{*/


#define RI_CMR3_PC_SHIFT		0
#define RI_CMR3_PC_MASK		0xffff
/** @defgroup ri_cmr3_pc PC Port C channel masking
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_cicr3 CICR3 Channel identification for capture register
@{*/


#define RI_CICR3_PC_SHIFT		0
#define RI_CICR3_PC_MASK		0xffff
/** @defgroup ri_cicr3_pc PC Port C channel identification for capture
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_asmr4 ASMR4 Analog switch mode register
@{*/


#define RI_ASMR4_PF_SHIFT		0
#define RI_ASMR4_PF_MASK		0xffff
/** @defgroup ri_asmr4_pf PF Port F analog switch mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_cmr4 CMR4 Channel mask register
@{*/


#define RI_CMR4_PF_SHIFT		0
#define RI_CMR4_PF_MASK		0xffff
/** @defgroup ri_cmr4_pf PF Port F channel masking
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_cicr4 CICR4 Channel identification for capture register
@{*/


#define RI_CICR4_PF_SHIFT		0
#define RI_CICR4_PF_MASK		0xffff
/** @defgroup ri_cicr4_pf PF Port F channel identification for capture
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_asmr5 ASMR5 Analog switch mode register
@{*/


#define RI_ASMR5_PG_SHIFT		0
#define RI_ASMR5_PG_MASK		0xffff
/** @defgroup ri_asmr5_pg PG Port G analog switch mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_cmr5 CMR5 Channel mask register
@{*/


#define RI_CMR5_PG_SHIFT		0
#define RI_CMR5_PG_MASK		0xffff
/** @defgroup ri_cmr5_pg PG Port G channel masking
@{*/
/**@}*/


/**@}*/

/** @defgroup ri_cicr5 CICR5 Channel identification for capture register
@{*/


#define RI_CICR5_PG_SHIFT		0
#define RI_CICR5_PG_MASK		0xffff
/** @defgroup ri_cicr5_pg PG Port G channel identification for capture
@{*/
/**@}*/


/**@}*/

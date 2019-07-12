#pragma once 

/* --- LCD: Liquid crystal display controller ----------------------- */

/** @defgroup lcd_registers Liquid crystal display controller Register
@{*/

/** LCD_CR control register **/
#define LCD_CR			MMIO32(LCD_BASE + 0x00)
/** LCD_FCR frame control register **/
#define LCD_FCR			MMIO32(LCD_BASE + 0x04)
/** LCD_SR status register **/
#define LCD_SR			MMIO32(LCD_BASE + 0x08)
/** LCD_CLR clear register **/
#define LCD_CLR			MMIO32(LCD_BASE + 0x0c)
/** LCD_RAM_COM0 display memory **/
#define LCD_RAM_COM0			MMIO32(LCD_BASE + 0x14)
/** LCD_RAM_COM1 display memory **/
#define LCD_RAM_COM1			MMIO32(LCD_BASE + 0x1c)
/** LCD_RAM_COM2 display memory **/
#define LCD_RAM_COM2			MMIO32(LCD_BASE + 0x24)
/** LCD_RAM_COM3 display memory **/
#define LCD_RAM_COM3			MMIO32(LCD_BASE + 0x2c)
/** LCD_RAM_COM4 display memory **/
#define LCD_RAM_COM4			MMIO32(LCD_BASE + 0x34)
/** LCD_RAM_COM5 display memory **/
#define LCD_RAM_COM5			MMIO32(LCD_BASE + 0x3c)
/** LCD_RAM_COM6 display memory **/
#define LCD_RAM_COM6			MMIO32(LCD_BASE + 0x44)
/** LCD_RAM_COM7 display memory **/
#define LCD_RAM_COM7			MMIO32(LCD_BASE + 0x4c)

/**@}*/


/** @defgroup lcd_cr CR control register
@{*/


#define LCD_CR_BIAS_SHIFT		5
#define LCD_CR_BIAS_MASK		0x03
/** @defgroup lcd_cr_bias BIAS Bias selector
@{*/
/**@}*/


#define LCD_CR_DUTY_SHIFT		2
#define LCD_CR_DUTY_MASK		0x07
/** @defgroup lcd_cr_duty DUTY Duty selection
@{*/
/**@}*/

/** LCD_CR_VSEL Voltage source selection **/
#define LCD_CR_VSEL		(1 << 1)
/** LCD_CR_LCDEN LCD controller enable **/
#define LCD_CR_LCDEN		(1 << 0)

/**@}*/

/** @defgroup lcd_fcr FCR frame control register
@{*/


#define LCD_FCR_PS_SHIFT		22
#define LCD_FCR_PS_MASK		0x0f
/** @defgroup lcd_fcr_ps PS PS 16-bit prescaler
@{*/
/**@}*/


#define LCD_FCR_DIV_SHIFT		18
#define LCD_FCR_DIV_MASK		0x0f
/** @defgroup lcd_fcr_div DIV DIV clock divider
@{*/
/**@}*/


#define LCD_FCR_BLINK_SHIFT		16
#define LCD_FCR_BLINK_MASK		0x03
/** @defgroup lcd_fcr_blink BLINK Blink mode selection
@{*/
/**@}*/


#define LCD_FCR_BLINKF_SHIFT		13
#define LCD_FCR_BLINKF_MASK		0x07
/** @defgroup lcd_fcr_blinkf BLINKF Blink frequency selection
@{*/
/**@}*/


#define LCD_FCR_CC_SHIFT		10
#define LCD_FCR_CC_MASK		0x07
/** @defgroup lcd_fcr_cc CC Contrast control
@{*/
/**@}*/


#define LCD_FCR_DEAD_SHIFT		7
#define LCD_FCR_DEAD_MASK		0x07
/** @defgroup lcd_fcr_dead DEAD Dead time duration
@{*/
/**@}*/


#define LCD_FCR_PON_SHIFT		4
#define LCD_FCR_PON_MASK		0x07
/** @defgroup lcd_fcr_pon PON Pulse ON duration
@{*/
/**@}*/

/** LCD_FCR_UDDIE Update display done interrupt enable **/
#define LCD_FCR_UDDIE		(1 << 3)
/** LCD_FCR_SOFIE Start of frame interrupt enable **/
#define LCD_FCR_SOFIE		(1 << 1)
/** LCD_FCR_HD High drive enable **/
#define LCD_FCR_HD		(1 << 0)

/**@}*/

/** @defgroup lcd_sr SR status register
@{*/

/** LCD_SR_FCRSF LCD Frame Control Register Synchronization flag **/
#define LCD_SR_FCRSF		(1 << 5)
/** LCD_SR_RDY Ready flag **/
#define LCD_SR_RDY		(1 << 4)
/** LCD_SR_UDD Update Display Done **/
#define LCD_SR_UDD		(1 << 3)
/** LCD_SR_UDR Update display request **/
#define LCD_SR_UDR		(1 << 2)
/** LCD_SR_SOF Start of frame flag **/
#define LCD_SR_SOF		(1 << 1)
/** LCD_SR_ENS ENS **/
#define LCD_SR_ENS		(1 << 0)

/**@}*/

/** @defgroup lcd_clr CLR clear register
@{*/

/** LCD_CLR_UDDC Update display done clear **/
#define LCD_CLR_UDDC		(1 << 3)
/** LCD_CLR_SOFC Start of frame flag clear **/
#define LCD_CLR_SOFC		(1 << 1)

/**@}*/

/** @defgroup lcd_ram_com0 RAMCOM0 display memory
@{*/

/** LCD_RAM_COM0_S30 S30 **/
#define LCD_RAM_COM0_S30		(1 << 30)
/** LCD_RAM_COM0_S29 S29 **/
#define LCD_RAM_COM0_S29		(1 << 29)
/** LCD_RAM_COM0_S28 S28 **/
#define LCD_RAM_COM0_S28		(1 << 28)
/** LCD_RAM_COM0_S27 S27 **/
#define LCD_RAM_COM0_S27		(1 << 27)
/** LCD_RAM_COM0_S26 S26 **/
#define LCD_RAM_COM0_S26		(1 << 26)
/** LCD_RAM_COM0_S25 S25 **/
#define LCD_RAM_COM0_S25		(1 << 25)
/** LCD_RAM_COM0_S24 S24 **/
#define LCD_RAM_COM0_S24		(1 << 24)
/** LCD_RAM_COM0_S23 S23 **/
#define LCD_RAM_COM0_S23		(1 << 23)
/** LCD_RAM_COM0_S22 S22 **/
#define LCD_RAM_COM0_S22		(1 << 22)
/** LCD_RAM_COM0_S21 S21 **/
#define LCD_RAM_COM0_S21		(1 << 21)
/** LCD_RAM_COM0_S20 S20 **/
#define LCD_RAM_COM0_S20		(1 << 20)
/** LCD_RAM_COM0_S19 S19 **/
#define LCD_RAM_COM0_S19		(1 << 19)
/** LCD_RAM_COM0_S18 S18 **/
#define LCD_RAM_COM0_S18		(1 << 18)
/** LCD_RAM_COM0_S17 S17 **/
#define LCD_RAM_COM0_S17		(1 << 17)
/** LCD_RAM_COM0_S16 S16 **/
#define LCD_RAM_COM0_S16		(1 << 16)
/** LCD_RAM_COM0_S15 S15 **/
#define LCD_RAM_COM0_S15		(1 << 15)
/** LCD_RAM_COM0_S14 S14 **/
#define LCD_RAM_COM0_S14		(1 << 14)
/** LCD_RAM_COM0_S13 S13 **/
#define LCD_RAM_COM0_S13		(1 << 13)
/** LCD_RAM_COM0_S12 S12 **/
#define LCD_RAM_COM0_S12		(1 << 12)
/** LCD_RAM_COM0_S11 S11 **/
#define LCD_RAM_COM0_S11		(1 << 11)
/** LCD_RAM_COM0_S10 S10 **/
#define LCD_RAM_COM0_S10		(1 << 10)
/** LCD_RAM_COM0_S09 S09 **/
#define LCD_RAM_COM0_S09		(1 << 9)
/** LCD_RAM_COM0_S08 S08 **/
#define LCD_RAM_COM0_S08		(1 << 8)
/** LCD_RAM_COM0_S07 S07 **/
#define LCD_RAM_COM0_S07		(1 << 7)
/** LCD_RAM_COM0_S06 S06 **/
#define LCD_RAM_COM0_S06		(1 << 6)
/** LCD_RAM_COM0_S05 S05 **/
#define LCD_RAM_COM0_S05		(1 << 5)
/** LCD_RAM_COM0_S04 S04 **/
#define LCD_RAM_COM0_S04		(1 << 4)
/** LCD_RAM_COM0_S03 S03 **/
#define LCD_RAM_COM0_S03		(1 << 3)
/** LCD_RAM_COM0_S02 S02 **/
#define LCD_RAM_COM0_S02		(1 << 2)
/** LCD_RAM_COM0_S01 S01 **/
#define LCD_RAM_COM0_S01		(1 << 1)
/** LCD_RAM_COM0_S00 S00 **/
#define LCD_RAM_COM0_S00		(1 << 0)

/**@}*/

/** @defgroup lcd_ram_com1 RAMCOM1 display memory
@{*/

/** LCD_RAM_COM1_S31 S31 **/
#define LCD_RAM_COM1_S31		(1 << 31)
/** LCD_RAM_COM1_S30 S30 **/
#define LCD_RAM_COM1_S30		(1 << 30)
/** LCD_RAM_COM1_S29 S29 **/
#define LCD_RAM_COM1_S29		(1 << 29)
/** LCD_RAM_COM1_S28 S28 **/
#define LCD_RAM_COM1_S28		(1 << 28)
/** LCD_RAM_COM1_S27 S27 **/
#define LCD_RAM_COM1_S27		(1 << 27)
/** LCD_RAM_COM1_S26 S26 **/
#define LCD_RAM_COM1_S26		(1 << 26)
/** LCD_RAM_COM1_S25 S25 **/
#define LCD_RAM_COM1_S25		(1 << 25)
/** LCD_RAM_COM1_S24 S24 **/
#define LCD_RAM_COM1_S24		(1 << 24)
/** LCD_RAM_COM1_S23 S23 **/
#define LCD_RAM_COM1_S23		(1 << 23)
/** LCD_RAM_COM1_S22 S22 **/
#define LCD_RAM_COM1_S22		(1 << 22)
/** LCD_RAM_COM1_S21 S21 **/
#define LCD_RAM_COM1_S21		(1 << 21)
/** LCD_RAM_COM1_S20 S20 **/
#define LCD_RAM_COM1_S20		(1 << 20)
/** LCD_RAM_COM1_S19 S19 **/
#define LCD_RAM_COM1_S19		(1 << 19)
/** LCD_RAM_COM1_S18 S18 **/
#define LCD_RAM_COM1_S18		(1 << 18)
/** LCD_RAM_COM1_S17 S17 **/
#define LCD_RAM_COM1_S17		(1 << 17)
/** LCD_RAM_COM1_S16 S16 **/
#define LCD_RAM_COM1_S16		(1 << 16)
/** LCD_RAM_COM1_S15 S15 **/
#define LCD_RAM_COM1_S15		(1 << 15)
/** LCD_RAM_COM1_S14 S14 **/
#define LCD_RAM_COM1_S14		(1 << 14)
/** LCD_RAM_COM1_S13 S13 **/
#define LCD_RAM_COM1_S13		(1 << 13)
/** LCD_RAM_COM1_S12 S12 **/
#define LCD_RAM_COM1_S12		(1 << 12)
/** LCD_RAM_COM1_S11 S11 **/
#define LCD_RAM_COM1_S11		(1 << 11)
/** LCD_RAM_COM1_S10 S10 **/
#define LCD_RAM_COM1_S10		(1 << 10)
/** LCD_RAM_COM1_S09 S09 **/
#define LCD_RAM_COM1_S09		(1 << 9)
/** LCD_RAM_COM1_S08 S08 **/
#define LCD_RAM_COM1_S08		(1 << 8)
/** LCD_RAM_COM1_S07 S07 **/
#define LCD_RAM_COM1_S07		(1 << 7)
/** LCD_RAM_COM1_S06 S06 **/
#define LCD_RAM_COM1_S06		(1 << 6)
/** LCD_RAM_COM1_S05 S05 **/
#define LCD_RAM_COM1_S05		(1 << 5)
/** LCD_RAM_COM1_S04 S04 **/
#define LCD_RAM_COM1_S04		(1 << 4)
/** LCD_RAM_COM1_S03 S03 **/
#define LCD_RAM_COM1_S03		(1 << 3)
/** LCD_RAM_COM1_S02 S02 **/
#define LCD_RAM_COM1_S02		(1 << 2)
/** LCD_RAM_COM1_S01 S01 **/
#define LCD_RAM_COM1_S01		(1 << 1)
/** LCD_RAM_COM1_S00 S00 **/
#define LCD_RAM_COM1_S00		(1 << 0)

/**@}*/

/** @defgroup lcd_ram_com2 RAMCOM2 display memory
@{*/

/** LCD_RAM_COM2_S31 S31 **/
#define LCD_RAM_COM2_S31		(1 << 31)
/** LCD_RAM_COM2_S30 S30 **/
#define LCD_RAM_COM2_S30		(1 << 30)
/** LCD_RAM_COM2_S29 S29 **/
#define LCD_RAM_COM2_S29		(1 << 29)
/** LCD_RAM_COM2_S28 S28 **/
#define LCD_RAM_COM2_S28		(1 << 28)
/** LCD_RAM_COM2_S27 S27 **/
#define LCD_RAM_COM2_S27		(1 << 27)
/** LCD_RAM_COM2_S26 S26 **/
#define LCD_RAM_COM2_S26		(1 << 26)
/** LCD_RAM_COM2_S25 S25 **/
#define LCD_RAM_COM2_S25		(1 << 25)
/** LCD_RAM_COM2_S24 S24 **/
#define LCD_RAM_COM2_S24		(1 << 24)
/** LCD_RAM_COM2_S23 S23 **/
#define LCD_RAM_COM2_S23		(1 << 23)
/** LCD_RAM_COM2_S22 S22 **/
#define LCD_RAM_COM2_S22		(1 << 22)
/** LCD_RAM_COM2_S21 S21 **/
#define LCD_RAM_COM2_S21		(1 << 21)
/** LCD_RAM_COM2_S20 S20 **/
#define LCD_RAM_COM2_S20		(1 << 20)
/** LCD_RAM_COM2_S19 S19 **/
#define LCD_RAM_COM2_S19		(1 << 19)
/** LCD_RAM_COM2_S18 S18 **/
#define LCD_RAM_COM2_S18		(1 << 18)
/** LCD_RAM_COM2_S17 S17 **/
#define LCD_RAM_COM2_S17		(1 << 17)
/** LCD_RAM_COM2_S16 S16 **/
#define LCD_RAM_COM2_S16		(1 << 16)
/** LCD_RAM_COM2_S15 S15 **/
#define LCD_RAM_COM2_S15		(1 << 15)
/** LCD_RAM_COM2_S14 S14 **/
#define LCD_RAM_COM2_S14		(1 << 14)
/** LCD_RAM_COM2_S13 S13 **/
#define LCD_RAM_COM2_S13		(1 << 13)
/** LCD_RAM_COM2_S12 S12 **/
#define LCD_RAM_COM2_S12		(1 << 12)
/** LCD_RAM_COM2_S11 S11 **/
#define LCD_RAM_COM2_S11		(1 << 11)
/** LCD_RAM_COM2_S10 S10 **/
#define LCD_RAM_COM2_S10		(1 << 10)
/** LCD_RAM_COM2_S09 S09 **/
#define LCD_RAM_COM2_S09		(1 << 9)
/** LCD_RAM_COM2_S08 S08 **/
#define LCD_RAM_COM2_S08		(1 << 8)
/** LCD_RAM_COM2_S07 S07 **/
#define LCD_RAM_COM2_S07		(1 << 7)
/** LCD_RAM_COM2_S06 S06 **/
#define LCD_RAM_COM2_S06		(1 << 6)
/** LCD_RAM_COM2_S05 S05 **/
#define LCD_RAM_COM2_S05		(1 << 5)
/** LCD_RAM_COM2_S04 S04 **/
#define LCD_RAM_COM2_S04		(1 << 4)
/** LCD_RAM_COM2_S03 S03 **/
#define LCD_RAM_COM2_S03		(1 << 3)
/** LCD_RAM_COM2_S02 S02 **/
#define LCD_RAM_COM2_S02		(1 << 2)
/** LCD_RAM_COM2_S01 S01 **/
#define LCD_RAM_COM2_S01		(1 << 1)
/** LCD_RAM_COM2_S00 S00 **/
#define LCD_RAM_COM2_S00		(1 << 0)

/**@}*/

/** @defgroup lcd_ram_com3 RAMCOM3 display memory
@{*/

/** LCD_RAM_COM3_S31 S31 **/
#define LCD_RAM_COM3_S31		(1 << 31)
/** LCD_RAM_COM3_S30 S30 **/
#define LCD_RAM_COM3_S30		(1 << 30)
/** LCD_RAM_COM3_S29 S29 **/
#define LCD_RAM_COM3_S29		(1 << 29)
/** LCD_RAM_COM3_S28 S28 **/
#define LCD_RAM_COM3_S28		(1 << 28)
/** LCD_RAM_COM3_S27 S27 **/
#define LCD_RAM_COM3_S27		(1 << 27)
/** LCD_RAM_COM3_S26 S26 **/
#define LCD_RAM_COM3_S26		(1 << 26)
/** LCD_RAM_COM3_S25 S25 **/
#define LCD_RAM_COM3_S25		(1 << 25)
/** LCD_RAM_COM3_S24 S24 **/
#define LCD_RAM_COM3_S24		(1 << 24)
/** LCD_RAM_COM3_S23 S23 **/
#define LCD_RAM_COM3_S23		(1 << 23)
/** LCD_RAM_COM3_S22 S22 **/
#define LCD_RAM_COM3_S22		(1 << 22)
/** LCD_RAM_COM3_S21 S21 **/
#define LCD_RAM_COM3_S21		(1 << 21)
/** LCD_RAM_COM3_S20 S20 **/
#define LCD_RAM_COM3_S20		(1 << 20)
/** LCD_RAM_COM3_S19 S19 **/
#define LCD_RAM_COM3_S19		(1 << 19)
/** LCD_RAM_COM3_S18 S18 **/
#define LCD_RAM_COM3_S18		(1 << 18)
/** LCD_RAM_COM3_S17 S17 **/
#define LCD_RAM_COM3_S17		(1 << 17)
/** LCD_RAM_COM3_S16 S16 **/
#define LCD_RAM_COM3_S16		(1 << 16)
/** LCD_RAM_COM3_S15 S15 **/
#define LCD_RAM_COM3_S15		(1 << 15)
/** LCD_RAM_COM3_S14 S14 **/
#define LCD_RAM_COM3_S14		(1 << 14)
/** LCD_RAM_COM3_S13 S13 **/
#define LCD_RAM_COM3_S13		(1 << 13)
/** LCD_RAM_COM3_S12 S12 **/
#define LCD_RAM_COM3_S12		(1 << 12)
/** LCD_RAM_COM3_S11 S11 **/
#define LCD_RAM_COM3_S11		(1 << 11)
/** LCD_RAM_COM3_S10 S10 **/
#define LCD_RAM_COM3_S10		(1 << 10)
/** LCD_RAM_COM3_S09 S09 **/
#define LCD_RAM_COM3_S09		(1 << 9)
/** LCD_RAM_COM3_S08 S08 **/
#define LCD_RAM_COM3_S08		(1 << 8)
/** LCD_RAM_COM3_S07 S07 **/
#define LCD_RAM_COM3_S07		(1 << 7)
/** LCD_RAM_COM3_S06 S06 **/
#define LCD_RAM_COM3_S06		(1 << 6)
/** LCD_RAM_COM3_S05 S05 **/
#define LCD_RAM_COM3_S05		(1 << 5)
/** LCD_RAM_COM3_S04 S04 **/
#define LCD_RAM_COM3_S04		(1 << 4)
/** LCD_RAM_COM3_S03 S03 **/
#define LCD_RAM_COM3_S03		(1 << 3)
/** LCD_RAM_COM3_S02 S02 **/
#define LCD_RAM_COM3_S02		(1 << 2)
/** LCD_RAM_COM3_S01 S01 **/
#define LCD_RAM_COM3_S01		(1 << 1)
/** LCD_RAM_COM3_S00 S00 **/
#define LCD_RAM_COM3_S00		(1 << 0)

/**@}*/

/** @defgroup lcd_ram_com4 RAMCOM4 display memory
@{*/

/** LCD_RAM_COM4_S31 S31 **/
#define LCD_RAM_COM4_S31		(1 << 31)
/** LCD_RAM_COM4_S30 S30 **/
#define LCD_RAM_COM4_S30		(1 << 30)
/** LCD_RAM_COM4_S29 S29 **/
#define LCD_RAM_COM4_S29		(1 << 29)
/** LCD_RAM_COM4_S28 S28 **/
#define LCD_RAM_COM4_S28		(1 << 28)
/** LCD_RAM_COM4_S27 S27 **/
#define LCD_RAM_COM4_S27		(1 << 27)
/** LCD_RAM_COM4_S26 S26 **/
#define LCD_RAM_COM4_S26		(1 << 26)
/** LCD_RAM_COM4_S25 S25 **/
#define LCD_RAM_COM4_S25		(1 << 25)
/** LCD_RAM_COM4_S24 S24 **/
#define LCD_RAM_COM4_S24		(1 << 24)
/** LCD_RAM_COM4_S23 S23 **/
#define LCD_RAM_COM4_S23		(1 << 23)
/** LCD_RAM_COM4_S22 S22 **/
#define LCD_RAM_COM4_S22		(1 << 22)
/** LCD_RAM_COM4_S21 S21 **/
#define LCD_RAM_COM4_S21		(1 << 21)
/** LCD_RAM_COM4_S20 S20 **/
#define LCD_RAM_COM4_S20		(1 << 20)
/** LCD_RAM_COM4_S19 S19 **/
#define LCD_RAM_COM4_S19		(1 << 19)
/** LCD_RAM_COM4_S18 S18 **/
#define LCD_RAM_COM4_S18		(1 << 18)
/** LCD_RAM_COM4_S17 S17 **/
#define LCD_RAM_COM4_S17		(1 << 17)
/** LCD_RAM_COM4_S16 S16 **/
#define LCD_RAM_COM4_S16		(1 << 16)
/** LCD_RAM_COM4_S15 S15 **/
#define LCD_RAM_COM4_S15		(1 << 15)
/** LCD_RAM_COM4_S14 S14 **/
#define LCD_RAM_COM4_S14		(1 << 14)
/** LCD_RAM_COM4_S13 S13 **/
#define LCD_RAM_COM4_S13		(1 << 13)
/** LCD_RAM_COM4_S12 S12 **/
#define LCD_RAM_COM4_S12		(1 << 12)
/** LCD_RAM_COM4_S11 S11 **/
#define LCD_RAM_COM4_S11		(1 << 11)
/** LCD_RAM_COM4_S10 S10 **/
#define LCD_RAM_COM4_S10		(1 << 10)
/** LCD_RAM_COM4_S09 S09 **/
#define LCD_RAM_COM4_S09		(1 << 9)
/** LCD_RAM_COM4_S08 S08 **/
#define LCD_RAM_COM4_S08		(1 << 8)
/** LCD_RAM_COM4_S07 S07 **/
#define LCD_RAM_COM4_S07		(1 << 7)
/** LCD_RAM_COM4_S06 S06 **/
#define LCD_RAM_COM4_S06		(1 << 6)
/** LCD_RAM_COM4_S05 S05 **/
#define LCD_RAM_COM4_S05		(1 << 5)
/** LCD_RAM_COM4_S04 S04 **/
#define LCD_RAM_COM4_S04		(1 << 4)
/** LCD_RAM_COM4_S03 S03 **/
#define LCD_RAM_COM4_S03		(1 << 3)
/** LCD_RAM_COM4_S02 S02 **/
#define LCD_RAM_COM4_S02		(1 << 2)
/** LCD_RAM_COM4_S01 S01 **/
#define LCD_RAM_COM4_S01		(1 << 1)
/** LCD_RAM_COM4_S00 S00 **/
#define LCD_RAM_COM4_S00		(1 << 0)

/**@}*/

/** @defgroup lcd_ram_com5 RAMCOM5 display memory
@{*/

/** LCD_RAM_COM5_S31 S31 **/
#define LCD_RAM_COM5_S31		(1 << 31)
/** LCD_RAM_COM5_S30 S30 **/
#define LCD_RAM_COM5_S30		(1 << 30)
/** LCD_RAM_COM5_S29 S29 **/
#define LCD_RAM_COM5_S29		(1 << 29)
/** LCD_RAM_COM5_S28 S28 **/
#define LCD_RAM_COM5_S28		(1 << 28)
/** LCD_RAM_COM5_S27 S27 **/
#define LCD_RAM_COM5_S27		(1 << 27)
/** LCD_RAM_COM5_S26 S26 **/
#define LCD_RAM_COM5_S26		(1 << 26)
/** LCD_RAM_COM5_S25 S25 **/
#define LCD_RAM_COM5_S25		(1 << 25)
/** LCD_RAM_COM5_S24 S24 **/
#define LCD_RAM_COM5_S24		(1 << 24)
/** LCD_RAM_COM5_S23 S23 **/
#define LCD_RAM_COM5_S23		(1 << 23)
/** LCD_RAM_COM5_S22 S22 **/
#define LCD_RAM_COM5_S22		(1 << 22)
/** LCD_RAM_COM5_S21 S21 **/
#define LCD_RAM_COM5_S21		(1 << 21)
/** LCD_RAM_COM5_S20 S20 **/
#define LCD_RAM_COM5_S20		(1 << 20)
/** LCD_RAM_COM5_S19 S19 **/
#define LCD_RAM_COM5_S19		(1 << 19)
/** LCD_RAM_COM5_S18 S18 **/
#define LCD_RAM_COM5_S18		(1 << 18)
/** LCD_RAM_COM5_S17 S17 **/
#define LCD_RAM_COM5_S17		(1 << 17)
/** LCD_RAM_COM5_S16 S16 **/
#define LCD_RAM_COM5_S16		(1 << 16)
/** LCD_RAM_COM5_S15 S15 **/
#define LCD_RAM_COM5_S15		(1 << 15)
/** LCD_RAM_COM5_S14 S14 **/
#define LCD_RAM_COM5_S14		(1 << 14)
/** LCD_RAM_COM5_S13 S13 **/
#define LCD_RAM_COM5_S13		(1 << 13)
/** LCD_RAM_COM5_S12 S12 **/
#define LCD_RAM_COM5_S12		(1 << 12)
/** LCD_RAM_COM5_S11 S11 **/
#define LCD_RAM_COM5_S11		(1 << 11)
/** LCD_RAM_COM5_S10 S10 **/
#define LCD_RAM_COM5_S10		(1 << 10)
/** LCD_RAM_COM5_S09 S09 **/
#define LCD_RAM_COM5_S09		(1 << 9)
/** LCD_RAM_COM5_S08 S08 **/
#define LCD_RAM_COM5_S08		(1 << 8)
/** LCD_RAM_COM5_S07 S07 **/
#define LCD_RAM_COM5_S07		(1 << 7)
/** LCD_RAM_COM5_S06 S06 **/
#define LCD_RAM_COM5_S06		(1 << 6)
/** LCD_RAM_COM5_S05 S05 **/
#define LCD_RAM_COM5_S05		(1 << 5)
/** LCD_RAM_COM5_S04 S04 **/
#define LCD_RAM_COM5_S04		(1 << 4)
/** LCD_RAM_COM5_S03 S03 **/
#define LCD_RAM_COM5_S03		(1 << 3)
/** LCD_RAM_COM5_S02 S02 **/
#define LCD_RAM_COM5_S02		(1 << 2)
/** LCD_RAM_COM5_S01 S01 **/
#define LCD_RAM_COM5_S01		(1 << 1)
/** LCD_RAM_COM5_S00 S00 **/
#define LCD_RAM_COM5_S00		(1 << 0)

/**@}*/

/** @defgroup lcd_ram_com6 RAMCOM6 display memory
@{*/

/** LCD_RAM_COM6_S31 S31 **/
#define LCD_RAM_COM6_S31		(1 << 31)
/** LCD_RAM_COM6_S30 S30 **/
#define LCD_RAM_COM6_S30		(1 << 30)
/** LCD_RAM_COM6_S29 S29 **/
#define LCD_RAM_COM6_S29		(1 << 29)
/** LCD_RAM_COM6_S28 S28 **/
#define LCD_RAM_COM6_S28		(1 << 28)
/** LCD_RAM_COM6_S27 S27 **/
#define LCD_RAM_COM6_S27		(1 << 27)
/** LCD_RAM_COM6_S26 S26 **/
#define LCD_RAM_COM6_S26		(1 << 26)
/** LCD_RAM_COM6_S25 S25 **/
#define LCD_RAM_COM6_S25		(1 << 25)
/** LCD_RAM_COM6_S24 S24 **/
#define LCD_RAM_COM6_S24		(1 << 24)
/** LCD_RAM_COM6_S23 S23 **/
#define LCD_RAM_COM6_S23		(1 << 23)
/** LCD_RAM_COM6_S22 S22 **/
#define LCD_RAM_COM6_S22		(1 << 22)
/** LCD_RAM_COM6_S21 S21 **/
#define LCD_RAM_COM6_S21		(1 << 21)
/** LCD_RAM_COM6_S20 S20 **/
#define LCD_RAM_COM6_S20		(1 << 20)
/** LCD_RAM_COM6_S19 S19 **/
#define LCD_RAM_COM6_S19		(1 << 19)
/** LCD_RAM_COM6_S18 S18 **/
#define LCD_RAM_COM6_S18		(1 << 18)
/** LCD_RAM_COM6_S17 S17 **/
#define LCD_RAM_COM6_S17		(1 << 17)
/** LCD_RAM_COM6_S16 S16 **/
#define LCD_RAM_COM6_S16		(1 << 16)
/** LCD_RAM_COM6_S15 S15 **/
#define LCD_RAM_COM6_S15		(1 << 15)
/** LCD_RAM_COM6_S14 S14 **/
#define LCD_RAM_COM6_S14		(1 << 14)
/** LCD_RAM_COM6_S13 S13 **/
#define LCD_RAM_COM6_S13		(1 << 13)
/** LCD_RAM_COM6_S12 S12 **/
#define LCD_RAM_COM6_S12		(1 << 12)
/** LCD_RAM_COM6_S11 S11 **/
#define LCD_RAM_COM6_S11		(1 << 11)
/** LCD_RAM_COM6_S10 S10 **/
#define LCD_RAM_COM6_S10		(1 << 10)
/** LCD_RAM_COM6_S09 S09 **/
#define LCD_RAM_COM6_S09		(1 << 9)
/** LCD_RAM_COM6_S08 S08 **/
#define LCD_RAM_COM6_S08		(1 << 8)
/** LCD_RAM_COM6_S07 S07 **/
#define LCD_RAM_COM6_S07		(1 << 7)
/** LCD_RAM_COM6_S06 S06 **/
#define LCD_RAM_COM6_S06		(1 << 6)
/** LCD_RAM_COM6_S05 S05 **/
#define LCD_RAM_COM6_S05		(1 << 5)
/** LCD_RAM_COM6_S04 S04 **/
#define LCD_RAM_COM6_S04		(1 << 4)
/** LCD_RAM_COM6_S03 S03 **/
#define LCD_RAM_COM6_S03		(1 << 3)
/** LCD_RAM_COM6_S02 S02 **/
#define LCD_RAM_COM6_S02		(1 << 2)
/** LCD_RAM_COM6_S01 S01 **/
#define LCD_RAM_COM6_S01		(1 << 1)
/** LCD_RAM_COM6_S00 S00 **/
#define LCD_RAM_COM6_S00		(1 << 0)

/**@}*/

/** @defgroup lcd_ram_com7 RAMCOM7 display memory
@{*/

/** LCD_RAM_COM7_S31 S31 **/
#define LCD_RAM_COM7_S31		(1 << 31)
/** LCD_RAM_COM7_S30 S30 **/
#define LCD_RAM_COM7_S30		(1 << 30)
/** LCD_RAM_COM7_S29 S29 **/
#define LCD_RAM_COM7_S29		(1 << 29)
/** LCD_RAM_COM7_S28 S28 **/
#define LCD_RAM_COM7_S28		(1 << 28)
/** LCD_RAM_COM7_S27 S27 **/
#define LCD_RAM_COM7_S27		(1 << 27)
/** LCD_RAM_COM7_S26 S26 **/
#define LCD_RAM_COM7_S26		(1 << 26)
/** LCD_RAM_COM7_S25 S25 **/
#define LCD_RAM_COM7_S25		(1 << 25)
/** LCD_RAM_COM7_S24 S24 **/
#define LCD_RAM_COM7_S24		(1 << 24)
/** LCD_RAM_COM7_S23 S23 **/
#define LCD_RAM_COM7_S23		(1 << 23)
/** LCD_RAM_COM7_S22 S22 **/
#define LCD_RAM_COM7_S22		(1 << 22)
/** LCD_RAM_COM7_S21 S21 **/
#define LCD_RAM_COM7_S21		(1 << 21)
/** LCD_RAM_COM7_S20 S20 **/
#define LCD_RAM_COM7_S20		(1 << 20)
/** LCD_RAM_COM7_S19 S19 **/
#define LCD_RAM_COM7_S19		(1 << 19)
/** LCD_RAM_COM7_S18 S18 **/
#define LCD_RAM_COM7_S18		(1 << 18)
/** LCD_RAM_COM7_S17 S17 **/
#define LCD_RAM_COM7_S17		(1 << 17)
/** LCD_RAM_COM7_S16 S16 **/
#define LCD_RAM_COM7_S16		(1 << 16)
/** LCD_RAM_COM7_S15 S15 **/
#define LCD_RAM_COM7_S15		(1 << 15)
/** LCD_RAM_COM7_S14 S14 **/
#define LCD_RAM_COM7_S14		(1 << 14)
/** LCD_RAM_COM7_S13 S13 **/
#define LCD_RAM_COM7_S13		(1 << 13)
/** LCD_RAM_COM7_S12 S12 **/
#define LCD_RAM_COM7_S12		(1 << 12)
/** LCD_RAM_COM7_S11 S11 **/
#define LCD_RAM_COM7_S11		(1 << 11)
/** LCD_RAM_COM7_S10 S10 **/
#define LCD_RAM_COM7_S10		(1 << 10)
/** LCD_RAM_COM7_S09 S09 **/
#define LCD_RAM_COM7_S09		(1 << 9)
/** LCD_RAM_COM7_S08 S08 **/
#define LCD_RAM_COM7_S08		(1 << 8)
/** LCD_RAM_COM7_S07 S07 **/
#define LCD_RAM_COM7_S07		(1 << 7)
/** LCD_RAM_COM7_S06 S06 **/
#define LCD_RAM_COM7_S06		(1 << 6)
/** LCD_RAM_COM7_S05 S05 **/
#define LCD_RAM_COM7_S05		(1 << 5)
/** LCD_RAM_COM7_S04 S04 **/
#define LCD_RAM_COM7_S04		(1 << 4)
/** LCD_RAM_COM7_S03 S03 **/
#define LCD_RAM_COM7_S03		(1 << 3)
/** LCD_RAM_COM7_S02 S02 **/
#define LCD_RAM_COM7_S02		(1 << 2)
/** LCD_RAM_COM7_S01 S01 **/
#define LCD_RAM_COM7_S01		(1 << 1)
/** LCD_RAM_COM7_S00 S00 **/
#define LCD_RAM_COM7_S00		(1 << 0)

/**@}*/

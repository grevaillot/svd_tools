#pragma once 

/* --- PORT: Port Module -------------------------------------------- */

/** @defgroup port_registers Port Module Register
@{*/

/** PORT_DIR0 Data Direction **/
#define PORT_DIR0			MMIO32(PORT_BASE + 0x00)
/** PORT_DIRCLR0 Data Direction Clear **/
#define PORT_DIRCLR0			MMIO32(PORT_BASE + 0x04)
/** PORT_DIRSET0 Data Direction Set **/
#define PORT_DIRSET0			MMIO32(PORT_BASE + 0x08)
/** PORT_DIRTGL0 Data Direction Toggle **/
#define PORT_DIRTGL0			MMIO32(PORT_BASE + 0x0c)
/** PORT_OUT0 Data Output Value **/
#define PORT_OUT0			MMIO32(PORT_BASE + 0x10)
/** PORT_OUTCLR0 Data Output Value Clear **/
#define PORT_OUTCLR0			MMIO32(PORT_BASE + 0x14)
/** PORT_OUTSET0 Data Output Value Set **/
#define PORT_OUTSET0			MMIO32(PORT_BASE + 0x18)
/** PORT_OUTTGL0 Data Output Value Toggle **/
#define PORT_OUTTGL0			MMIO32(PORT_BASE + 0x1c)
/** PORT_IN0 Data Input Value **/
#define PORT_IN0			MMIO32(PORT_BASE + 0x20)
/** PORT_CTRL0 Control **/
#define PORT_CTRL0			MMIO32(PORT_BASE + 0x24)
/** PORT_WRCONFIG0 Write Configuration **/
#define PORT_WRCONFIG0			MMIO32(PORT_BASE + 0x28)
/** PORT_EVCTRL0 Event Input Control **/
#define PORT_EVCTRL0			MMIO32(PORT_BASE + 0x2c)
/** PORT_PMUX0_0 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_0			MMIO32(PORT_BASE + 0x30)
/** PORT_PMUX0_1 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_1			MMIO32(PORT_BASE + 0x31)
/** PORT_PMUX0_2 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_2			MMIO32(PORT_BASE + 0x32)
/** PORT_PMUX0_3 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_3			MMIO32(PORT_BASE + 0x33)
/** PORT_PMUX0_4 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_4			MMIO32(PORT_BASE + 0x34)
/** PORT_PMUX0_5 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_5			MMIO32(PORT_BASE + 0x35)
/** PORT_PMUX0_6 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_6			MMIO32(PORT_BASE + 0x36)
/** PORT_PMUX0_7 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_7			MMIO32(PORT_BASE + 0x37)
/** PORT_PMUX0_8 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_8			MMIO32(PORT_BASE + 0x38)
/** PORT_PMUX0_9 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_9			MMIO32(PORT_BASE + 0x39)
/** PORT_PMUX0_10 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_10			MMIO32(PORT_BASE + 0x3a)
/** PORT_PMUX0_11 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_11			MMIO32(PORT_BASE + 0x3b)
/** PORT_PMUX0_12 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_12			MMIO32(PORT_BASE + 0x3c)
/** PORT_PMUX0_13 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_13			MMIO32(PORT_BASE + 0x3d)
/** PORT_PMUX0_14 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_14			MMIO32(PORT_BASE + 0x3e)
/** PORT_PMUX0_15 Peripheral Multiplexing n - Group 0 **/
#define PORT_PMUX0_15			MMIO32(PORT_BASE + 0x3f)
/** PORT_PINCFG0_0 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_0			MMIO32(PORT_BASE + 0x40)
/** PORT_PINCFG0_1 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_1			MMIO32(PORT_BASE + 0x41)
/** PORT_PINCFG0_2 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_2			MMIO32(PORT_BASE + 0x42)
/** PORT_PINCFG0_3 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_3			MMIO32(PORT_BASE + 0x43)
/** PORT_PINCFG0_4 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_4			MMIO32(PORT_BASE + 0x44)
/** PORT_PINCFG0_5 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_5			MMIO32(PORT_BASE + 0x45)
/** PORT_PINCFG0_6 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_6			MMIO32(PORT_BASE + 0x46)
/** PORT_PINCFG0_7 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_7			MMIO32(PORT_BASE + 0x47)
/** PORT_PINCFG0_8 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_8			MMIO32(PORT_BASE + 0x48)
/** PORT_PINCFG0_9 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_9			MMIO32(PORT_BASE + 0x49)
/** PORT_PINCFG0_10 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_10			MMIO32(PORT_BASE + 0x4a)
/** PORT_PINCFG0_11 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_11			MMIO32(PORT_BASE + 0x4b)
/** PORT_PINCFG0_12 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_12			MMIO32(PORT_BASE + 0x4c)
/** PORT_PINCFG0_13 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_13			MMIO32(PORT_BASE + 0x4d)
/** PORT_PINCFG0_14 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_14			MMIO32(PORT_BASE + 0x4e)
/** PORT_PINCFG0_15 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_15			MMIO32(PORT_BASE + 0x4f)
/** PORT_PINCFG0_16 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_16			MMIO32(PORT_BASE + 0x50)
/** PORT_PINCFG0_17 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_17			MMIO32(PORT_BASE + 0x51)
/** PORT_PINCFG0_18 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_18			MMIO32(PORT_BASE + 0x52)
/** PORT_PINCFG0_19 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_19			MMIO32(PORT_BASE + 0x53)
/** PORT_PINCFG0_20 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_20			MMIO32(PORT_BASE + 0x54)
/** PORT_PINCFG0_21 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_21			MMIO32(PORT_BASE + 0x55)
/** PORT_PINCFG0_22 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_22			MMIO32(PORT_BASE + 0x56)
/** PORT_PINCFG0_23 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_23			MMIO32(PORT_BASE + 0x57)
/** PORT_PINCFG0_24 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_24			MMIO32(PORT_BASE + 0x58)
/** PORT_PINCFG0_25 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_25			MMIO32(PORT_BASE + 0x59)
/** PORT_PINCFG0_26 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_26			MMIO32(PORT_BASE + 0x5a)
/** PORT_PINCFG0_27 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_27			MMIO32(PORT_BASE + 0x5b)
/** PORT_PINCFG0_28 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_28			MMIO32(PORT_BASE + 0x5c)
/** PORT_PINCFG0_29 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_29			MMIO32(PORT_BASE + 0x5d)
/** PORT_PINCFG0_30 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_30			MMIO32(PORT_BASE + 0x5e)
/** PORT_PINCFG0_31 Pin Configuration n - Group 0 **/
#define PORT_PINCFG0_31			MMIO32(PORT_BASE + 0x5f)
/** PORT_DIR1 Data Direction **/
#define PORT_DIR1			MMIO32(PORT_BASE + 0x80)
/** PORT_DIRCLR1 Data Direction Clear **/
#define PORT_DIRCLR1			MMIO32(PORT_BASE + 0x84)
/** PORT_DIRSET1 Data Direction Set **/
#define PORT_DIRSET1			MMIO32(PORT_BASE + 0x88)
/** PORT_DIRTGL1 Data Direction Toggle **/
#define PORT_DIRTGL1			MMIO32(PORT_BASE + 0x8c)
/** PORT_OUT1 Data Output Value **/
#define PORT_OUT1			MMIO32(PORT_BASE + 0x90)
/** PORT_OUTCLR1 Data Output Value Clear **/
#define PORT_OUTCLR1			MMIO32(PORT_BASE + 0x94)
/** PORT_OUTSET1 Data Output Value Set **/
#define PORT_OUTSET1			MMIO32(PORT_BASE + 0x98)
/** PORT_OUTTGL1 Data Output Value Toggle **/
#define PORT_OUTTGL1			MMIO32(PORT_BASE + 0x9c)
/** PORT_IN1 Data Input Value **/
#define PORT_IN1			MMIO32(PORT_BASE + 0xa0)
/** PORT_CTRL1 Control **/
#define PORT_CTRL1			MMIO32(PORT_BASE + 0xa4)
/** PORT_WRCONFIG1 Write Configuration **/
#define PORT_WRCONFIG1			MMIO32(PORT_BASE + 0xa8)
/** PORT_EVCTRL1 Event Input Control **/
#define PORT_EVCTRL1			MMIO32(PORT_BASE + 0xac)
/** PORT_PMUX1_0 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_0			MMIO32(PORT_BASE + 0xb0)
/** PORT_PMUX1_1 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_1			MMIO32(PORT_BASE + 0xb1)
/** PORT_PMUX1_2 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_2			MMIO32(PORT_BASE + 0xb2)
/** PORT_PMUX1_3 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_3			MMIO32(PORT_BASE + 0xb3)
/** PORT_PMUX1_4 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_4			MMIO32(PORT_BASE + 0xb4)
/** PORT_PMUX1_5 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_5			MMIO32(PORT_BASE + 0xb5)
/** PORT_PMUX1_6 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_6			MMIO32(PORT_BASE + 0xb6)
/** PORT_PMUX1_7 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_7			MMIO32(PORT_BASE + 0xb7)
/** PORT_PMUX1_8 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_8			MMIO32(PORT_BASE + 0xb8)
/** PORT_PMUX1_9 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_9			MMIO32(PORT_BASE + 0xb9)
/** PORT_PMUX1_10 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_10			MMIO32(PORT_BASE + 0xba)
/** PORT_PMUX1_11 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_11			MMIO32(PORT_BASE + 0xbb)
/** PORT_PMUX1_12 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_12			MMIO32(PORT_BASE + 0xbc)
/** PORT_PMUX1_13 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_13			MMIO32(PORT_BASE + 0xbd)
/** PORT_PMUX1_14 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_14			MMIO32(PORT_BASE + 0xbe)
/** PORT_PMUX1_15 Peripheral Multiplexing n - Group 1 **/
#define PORT_PMUX1_15			MMIO32(PORT_BASE + 0xbf)
/** PORT_PINCFG1_0 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_0			MMIO32(PORT_BASE + 0xc0)
/** PORT_PINCFG1_1 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_1			MMIO32(PORT_BASE + 0xc1)
/** PORT_PINCFG1_2 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_2			MMIO32(PORT_BASE + 0xc2)
/** PORT_PINCFG1_3 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_3			MMIO32(PORT_BASE + 0xc3)
/** PORT_PINCFG1_4 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_4			MMIO32(PORT_BASE + 0xc4)
/** PORT_PINCFG1_5 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_5			MMIO32(PORT_BASE + 0xc5)
/** PORT_PINCFG1_6 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_6			MMIO32(PORT_BASE + 0xc6)
/** PORT_PINCFG1_7 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_7			MMIO32(PORT_BASE + 0xc7)
/** PORT_PINCFG1_8 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_8			MMIO32(PORT_BASE + 0xc8)
/** PORT_PINCFG1_9 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_9			MMIO32(PORT_BASE + 0xc9)
/** PORT_PINCFG1_10 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_10			MMIO32(PORT_BASE + 0xca)
/** PORT_PINCFG1_11 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_11			MMIO32(PORT_BASE + 0xcb)
/** PORT_PINCFG1_12 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_12			MMIO32(PORT_BASE + 0xcc)
/** PORT_PINCFG1_13 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_13			MMIO32(PORT_BASE + 0xcd)
/** PORT_PINCFG1_14 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_14			MMIO32(PORT_BASE + 0xce)
/** PORT_PINCFG1_15 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_15			MMIO32(PORT_BASE + 0xcf)
/** PORT_PINCFG1_16 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_16			MMIO32(PORT_BASE + 0xd0)
/** PORT_PINCFG1_17 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_17			MMIO32(PORT_BASE + 0xd1)
/** PORT_PINCFG1_18 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_18			MMIO32(PORT_BASE + 0xd2)
/** PORT_PINCFG1_19 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_19			MMIO32(PORT_BASE + 0xd3)
/** PORT_PINCFG1_20 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_20			MMIO32(PORT_BASE + 0xd4)
/** PORT_PINCFG1_21 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_21			MMIO32(PORT_BASE + 0xd5)
/** PORT_PINCFG1_22 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_22			MMIO32(PORT_BASE + 0xd6)
/** PORT_PINCFG1_23 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_23			MMIO32(PORT_BASE + 0xd7)
/** PORT_PINCFG1_24 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_24			MMIO32(PORT_BASE + 0xd8)
/** PORT_PINCFG1_25 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_25			MMIO32(PORT_BASE + 0xd9)
/** PORT_PINCFG1_26 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_26			MMIO32(PORT_BASE + 0xda)
/** PORT_PINCFG1_27 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_27			MMIO32(PORT_BASE + 0xdb)
/** PORT_PINCFG1_28 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_28			MMIO32(PORT_BASE + 0xdc)
/** PORT_PINCFG1_29 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_29			MMIO32(PORT_BASE + 0xdd)
/** PORT_PINCFG1_30 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_30			MMIO32(PORT_BASE + 0xde)
/** PORT_PINCFG1_31 Pin Configuration n - Group 1 **/
#define PORT_PINCFG1_31			MMIO32(PORT_BASE + 0xdf)
/** PORT_DIR2 Data Direction **/
#define PORT_DIR2			MMIO32(PORT_BASE + 0x100)
/** PORT_DIRCLR2 Data Direction Clear **/
#define PORT_DIRCLR2			MMIO32(PORT_BASE + 0x104)
/** PORT_DIRSET2 Data Direction Set **/
#define PORT_DIRSET2			MMIO32(PORT_BASE + 0x108)
/** PORT_DIRTGL2 Data Direction Toggle **/
#define PORT_DIRTGL2			MMIO32(PORT_BASE + 0x10c)
/** PORT_OUT2 Data Output Value **/
#define PORT_OUT2			MMIO32(PORT_BASE + 0x110)
/** PORT_OUTCLR2 Data Output Value Clear **/
#define PORT_OUTCLR2			MMIO32(PORT_BASE + 0x114)
/** PORT_OUTSET2 Data Output Value Set **/
#define PORT_OUTSET2			MMIO32(PORT_BASE + 0x118)
/** PORT_OUTTGL2 Data Output Value Toggle **/
#define PORT_OUTTGL2			MMIO32(PORT_BASE + 0x11c)
/** PORT_IN2 Data Input Value **/
#define PORT_IN2			MMIO32(PORT_BASE + 0x120)
/** PORT_CTRL2 Control **/
#define PORT_CTRL2			MMIO32(PORT_BASE + 0x124)
/** PORT_WRCONFIG2 Write Configuration **/
#define PORT_WRCONFIG2			MMIO32(PORT_BASE + 0x128)
/** PORT_EVCTRL2 Event Input Control **/
#define PORT_EVCTRL2			MMIO32(PORT_BASE + 0x12c)
/** PORT_PMUX2_0 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_0			MMIO32(PORT_BASE + 0x130)
/** PORT_PMUX2_1 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_1			MMIO32(PORT_BASE + 0x131)
/** PORT_PMUX2_2 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_2			MMIO32(PORT_BASE + 0x132)
/** PORT_PMUX2_3 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_3			MMIO32(PORT_BASE + 0x133)
/** PORT_PMUX2_4 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_4			MMIO32(PORT_BASE + 0x134)
/** PORT_PMUX2_5 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_5			MMIO32(PORT_BASE + 0x135)
/** PORT_PMUX2_6 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_6			MMIO32(PORT_BASE + 0x136)
/** PORT_PMUX2_7 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_7			MMIO32(PORT_BASE + 0x137)
/** PORT_PMUX2_8 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_8			MMIO32(PORT_BASE + 0x138)
/** PORT_PMUX2_9 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_9			MMIO32(PORT_BASE + 0x139)
/** PORT_PMUX2_10 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_10			MMIO32(PORT_BASE + 0x13a)
/** PORT_PMUX2_11 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_11			MMIO32(PORT_BASE + 0x13b)
/** PORT_PMUX2_12 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_12			MMIO32(PORT_BASE + 0x13c)
/** PORT_PMUX2_13 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_13			MMIO32(PORT_BASE + 0x13d)
/** PORT_PMUX2_14 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_14			MMIO32(PORT_BASE + 0x13e)
/** PORT_PMUX2_15 Peripheral Multiplexing n - Group 2 **/
#define PORT_PMUX2_15			MMIO32(PORT_BASE + 0x13f)
/** PORT_PINCFG2_0 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_0			MMIO32(PORT_BASE + 0x140)
/** PORT_PINCFG2_1 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_1			MMIO32(PORT_BASE + 0x141)
/** PORT_PINCFG2_2 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_2			MMIO32(PORT_BASE + 0x142)
/** PORT_PINCFG2_3 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_3			MMIO32(PORT_BASE + 0x143)
/** PORT_PINCFG2_4 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_4			MMIO32(PORT_BASE + 0x144)
/** PORT_PINCFG2_5 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_5			MMIO32(PORT_BASE + 0x145)
/** PORT_PINCFG2_6 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_6			MMIO32(PORT_BASE + 0x146)
/** PORT_PINCFG2_7 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_7			MMIO32(PORT_BASE + 0x147)
/** PORT_PINCFG2_8 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_8			MMIO32(PORT_BASE + 0x148)
/** PORT_PINCFG2_9 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_9			MMIO32(PORT_BASE + 0x149)
/** PORT_PINCFG2_10 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_10			MMIO32(PORT_BASE + 0x14a)
/** PORT_PINCFG2_11 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_11			MMIO32(PORT_BASE + 0x14b)
/** PORT_PINCFG2_12 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_12			MMIO32(PORT_BASE + 0x14c)
/** PORT_PINCFG2_13 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_13			MMIO32(PORT_BASE + 0x14d)
/** PORT_PINCFG2_14 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_14			MMIO32(PORT_BASE + 0x14e)
/** PORT_PINCFG2_15 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_15			MMIO32(PORT_BASE + 0x14f)
/** PORT_PINCFG2_16 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_16			MMIO32(PORT_BASE + 0x150)
/** PORT_PINCFG2_17 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_17			MMIO32(PORT_BASE + 0x151)
/** PORT_PINCFG2_18 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_18			MMIO32(PORT_BASE + 0x152)
/** PORT_PINCFG2_19 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_19			MMIO32(PORT_BASE + 0x153)
/** PORT_PINCFG2_20 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_20			MMIO32(PORT_BASE + 0x154)
/** PORT_PINCFG2_21 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_21			MMIO32(PORT_BASE + 0x155)
/** PORT_PINCFG2_22 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_22			MMIO32(PORT_BASE + 0x156)
/** PORT_PINCFG2_23 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_23			MMIO32(PORT_BASE + 0x157)
/** PORT_PINCFG2_24 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_24			MMIO32(PORT_BASE + 0x158)
/** PORT_PINCFG2_25 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_25			MMIO32(PORT_BASE + 0x159)
/** PORT_PINCFG2_26 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_26			MMIO32(PORT_BASE + 0x15a)
/** PORT_PINCFG2_27 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_27			MMIO32(PORT_BASE + 0x15b)
/** PORT_PINCFG2_28 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_28			MMIO32(PORT_BASE + 0x15c)
/** PORT_PINCFG2_29 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_29			MMIO32(PORT_BASE + 0x15d)
/** PORT_PINCFG2_30 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_30			MMIO32(PORT_BASE + 0x15e)
/** PORT_PINCFG2_31 Pin Configuration n - Group 2 **/
#define PORT_PINCFG2_31			MMIO32(PORT_BASE + 0x15f)

/**@}*/


/** @defgroup port_dir0 DIR0 Data Direction
@{*/


#define PORT_DIR0_DIR_SHIFT		0
#define PORT_DIR0_DIR_MASK		0xffffffff
/** @defgroup port_dir0_dir DIR Port Data Direction
@{*/
/**@}*/


/**@}*/

/** @defgroup port_dirclr0 DIRCLR0 Data Direction Clear
@{*/


#define PORT_DIRCLR0_DIRCLR_SHIFT		0
#define PORT_DIRCLR0_DIRCLR_MASK		0xffffffff
/** @defgroup port_dirclr0_dirclr DIRCLR Port Data Direction Clear
@{*/
/**@}*/


/**@}*/

/** @defgroup port_dirset0 DIRSET0 Data Direction Set
@{*/


#define PORT_DIRSET0_DIRSET_SHIFT		0
#define PORT_DIRSET0_DIRSET_MASK		0xffffffff
/** @defgroup port_dirset0_dirset DIRSET Port Data Direction Set
@{*/
/**@}*/


/**@}*/

/** @defgroup port_dirtgl0 DIRTGL0 Data Direction Toggle
@{*/


#define PORT_DIRTGL0_DIRTGL_SHIFT		0
#define PORT_DIRTGL0_DIRTGL_MASK		0xffffffff
/** @defgroup port_dirtgl0_dirtgl DIRTGL Port Data Direction Toggle
@{*/
/**@}*/


/**@}*/

/** @defgroup port_out0 OUT0 Data Output Value
@{*/


#define PORT_OUT0_OUT_SHIFT		0
#define PORT_OUT0_OUT_MASK		0xffffffff
/** @defgroup port_out0_out OUT Port Data Output Value
@{*/
/**@}*/


/**@}*/

/** @defgroup port_outclr0 OUTCLR0 Data Output Value Clear
@{*/


#define PORT_OUTCLR0_OUTCLR_SHIFT		0
#define PORT_OUTCLR0_OUTCLR_MASK		0xffffffff
/** @defgroup port_outclr0_outclr OUTCLR Port Data Output Value Clear
@{*/
/**@}*/


/**@}*/

/** @defgroup port_outset0 OUTSET0 Data Output Value Set
@{*/


#define PORT_OUTSET0_OUTSET_SHIFT		0
#define PORT_OUTSET0_OUTSET_MASK		0xffffffff
/** @defgroup port_outset0_outset OUTSET Port Data Output Value Set
@{*/
/**@}*/


/**@}*/

/** @defgroup port_outtgl0 OUTTGL0 Data Output Value Toggle
@{*/


#define PORT_OUTTGL0_OUTTGL_SHIFT		0
#define PORT_OUTTGL0_OUTTGL_MASK		0xffffffff
/** @defgroup port_outtgl0_outtgl OUTTGL Port Data Output Value Toggle
@{*/
/**@}*/


/**@}*/

/** @defgroup port_in0 IN0 Data Input Value
@{*/


#define PORT_IN0_IN_SHIFT		0
#define PORT_IN0_IN_MASK		0xffffffff
/** @defgroup port_in0_in IN Port Data Input Value
@{*/
/**@}*/


/**@}*/

/** @defgroup port_ctrl0 CTRL0 Control
@{*/


#define PORT_CTRL0_SAMPLING_SHIFT		0
#define PORT_CTRL0_SAMPLING_MASK		0xffffffff
/** @defgroup port_ctrl0_sampling SAMPLING Input Sampling Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup port_wrconfig0 WRCONFIG0 Write Configuration
@{*/

/** PORT_WRCONFIG0_HWSEL Half-Word Select **/
#define PORT_WRCONFIG0_HWSEL		(1 << 31)
/** PORT_WRCONFIG0_WRPINCFG Write PINCFG Registers **/
#define PORT_WRCONFIG0_WRPINCFG		(1 << 30)
/** PORT_WRCONFIG0_WRPMUX Write PMUX Registers **/
#define PORT_WRCONFIG0_WRPMUX		(1 << 28)

#define PORT_WRCONFIG0_PMUX_SHIFT		24
#define PORT_WRCONFIG0_PMUX_MASK		0x0f
/** @defgroup port_wrconfig0_pmux PMUX Peripheral Multiplexing Template
@{*/
/**@}*/

/** PORT_WRCONFIG0_DRVSTR Output Driver Strength Selection **/
#define PORT_WRCONFIG0_DRVSTR		(1 << 22)
/** PORT_WRCONFIG0_PULLEN Pull Enable **/
#define PORT_WRCONFIG0_PULLEN		(1 << 18)
/** PORT_WRCONFIG0_INEN Input Enable **/
#define PORT_WRCONFIG0_INEN		(1 << 17)
/** PORT_WRCONFIG0_PMUXEN Select Peripheral Multiplexer **/
#define PORT_WRCONFIG0_PMUXEN		(1 << 16)

#define PORT_WRCONFIG0_PINMASK_SHIFT		0
#define PORT_WRCONFIG0_PINMASK_MASK		0xffff
/** @defgroup port_wrconfig0_pinmask PINMASK Pin Mask for Multiple Pin Configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup port_evctrl0 EVCTRL0 Event Input Control
@{*/

/** PORT_EVCTRL0_PORTEI3 Port Event Enable Input 3 **/
#define PORT_EVCTRL0_PORTEI3		(1 << 31)

#define PORT_EVCTRL0_EVACT3_SHIFT		29
#define PORT_EVCTRL0_EVACT3_MASK		0x03
/** @defgroup port_evctrl0_evact3 EVACT3 Port Event Action 3
@{*/
/**@}*/


#define PORT_EVCTRL0_PID3_SHIFT		24
#define PORT_EVCTRL0_PID3_MASK		0x1f
/** @defgroup port_evctrl0_pid3 PID3 Port Event Pin Identifier 3
@{*/
/**@}*/

/** PORT_EVCTRL0_PORTEI2 Port Event Enable Input 2 **/
#define PORT_EVCTRL0_PORTEI2		(1 << 23)

#define PORT_EVCTRL0_EVACT2_SHIFT		21
#define PORT_EVCTRL0_EVACT2_MASK		0x03
/** @defgroup port_evctrl0_evact2 EVACT2 Port Event Action 2
@{*/
/**@}*/


#define PORT_EVCTRL0_PID2_SHIFT		16
#define PORT_EVCTRL0_PID2_MASK		0x1f
/** @defgroup port_evctrl0_pid2 PID2 Port Event Pin Identifier 2
@{*/
/**@}*/

/** PORT_EVCTRL0_PORTEI1 Port Event Enable Input 1 **/
#define PORT_EVCTRL0_PORTEI1		(1 << 15)

#define PORT_EVCTRL0_EVACT1_SHIFT		13
#define PORT_EVCTRL0_EVACT1_MASK		0x03
/** @defgroup port_evctrl0_evact1 EVACT1 Port Event Action 1
@{*/
/**@}*/


#define PORT_EVCTRL0_PID1_SHIFT		8
#define PORT_EVCTRL0_PID1_MASK		0x1f
/** @defgroup port_evctrl0_pid1 PID1 Port Event Pin Identifier 1
@{*/
/**@}*/

/** PORT_EVCTRL0_PORTEI0 Port Event Enable Input 0 **/
#define PORT_EVCTRL0_PORTEI0		(1 << 7)

#define PORT_EVCTRL0_EVACT0_SHIFT		5
#define PORT_EVCTRL0_EVACT0_MASK		0x03
/** @defgroup port_evctrl0_evact0 EVACT0 Port Event Action 0
@{*/
/**@}*/


#define PORT_EVCTRL0_PID0_SHIFT		0
#define PORT_EVCTRL0_PID0_MASK		0x1f
/** @defgroup port_evctrl0_pid0 PID0 Port Event Pin Identifier 0
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_0 PMUX00 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_0_PMUXO_SHIFT		4
#define PORT_PMUX0_0_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_0_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_0_PMUXE_SHIFT		0
#define PORT_PMUX0_0_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_0_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_1 PMUX01 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_1_PMUXO_SHIFT		4
#define PORT_PMUX0_1_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_1_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_1_PMUXE_SHIFT		0
#define PORT_PMUX0_1_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_1_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_2 PMUX02 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_2_PMUXO_SHIFT		4
#define PORT_PMUX0_2_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_2_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_2_PMUXE_SHIFT		0
#define PORT_PMUX0_2_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_2_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_3 PMUX03 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_3_PMUXO_SHIFT		4
#define PORT_PMUX0_3_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_3_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_3_PMUXE_SHIFT		0
#define PORT_PMUX0_3_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_3_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_4 PMUX04 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_4_PMUXO_SHIFT		4
#define PORT_PMUX0_4_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_4_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_4_PMUXE_SHIFT		0
#define PORT_PMUX0_4_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_4_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_5 PMUX05 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_5_PMUXO_SHIFT		4
#define PORT_PMUX0_5_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_5_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_5_PMUXE_SHIFT		0
#define PORT_PMUX0_5_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_5_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_6 PMUX06 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_6_PMUXO_SHIFT		4
#define PORT_PMUX0_6_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_6_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_6_PMUXE_SHIFT		0
#define PORT_PMUX0_6_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_6_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_7 PMUX07 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_7_PMUXO_SHIFT		4
#define PORT_PMUX0_7_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_7_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_7_PMUXE_SHIFT		0
#define PORT_PMUX0_7_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_7_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_8 PMUX08 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_8_PMUXO_SHIFT		4
#define PORT_PMUX0_8_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_8_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_8_PMUXE_SHIFT		0
#define PORT_PMUX0_8_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_8_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_9 PMUX09 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_9_PMUXO_SHIFT		4
#define PORT_PMUX0_9_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_9_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_9_PMUXE_SHIFT		0
#define PORT_PMUX0_9_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_9_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_10 PMUX010 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_10_PMUXO_SHIFT		4
#define PORT_PMUX0_10_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_10_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_10_PMUXE_SHIFT		0
#define PORT_PMUX0_10_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_10_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_11 PMUX011 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_11_PMUXO_SHIFT		4
#define PORT_PMUX0_11_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_11_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_11_PMUXE_SHIFT		0
#define PORT_PMUX0_11_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_11_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_12 PMUX012 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_12_PMUXO_SHIFT		4
#define PORT_PMUX0_12_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_12_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_12_PMUXE_SHIFT		0
#define PORT_PMUX0_12_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_12_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_13 PMUX013 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_13_PMUXO_SHIFT		4
#define PORT_PMUX0_13_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_13_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_13_PMUXE_SHIFT		0
#define PORT_PMUX0_13_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_13_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_14 PMUX014 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_14_PMUXO_SHIFT		4
#define PORT_PMUX0_14_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_14_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_14_PMUXE_SHIFT		0
#define PORT_PMUX0_14_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_14_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux0_15 PMUX015 Peripheral Multiplexing n - Group 0
@{*/


#define PORT_PMUX0_15_PMUXO_SHIFT		4
#define PORT_PMUX0_15_PMUXO_MASK		0x0f
/** @defgroup port_pmux0_15_pmuxo PMUXO Peripheral Multiplexing for Odd-Numbered Pin
@{*/
/**@}*/


#define PORT_PMUX0_15_PMUXE_SHIFT		0
#define PORT_PMUX0_15_PMUXE_MASK		0x0f
/** @defgroup port_pmux0_15_pmuxe PMUXE Peripheral Multiplexing for Even-Numbered Pin
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pincfg0_0 PINCFG00 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_0_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_0_DRVSTR		(1 << 6)
/** PORT_PINCFG0_0_PULLEN Pull Enable **/
#define PORT_PINCFG0_0_PULLEN		(1 << 2)
/** PORT_PINCFG0_0_INEN Input Enable **/
#define PORT_PINCFG0_0_INEN		(1 << 1)
/** PORT_PINCFG0_0_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_0_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_1 PINCFG01 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_1_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_1_DRVSTR		(1 << 6)
/** PORT_PINCFG0_1_PULLEN Pull Enable **/
#define PORT_PINCFG0_1_PULLEN		(1 << 2)
/** PORT_PINCFG0_1_INEN Input Enable **/
#define PORT_PINCFG0_1_INEN		(1 << 1)
/** PORT_PINCFG0_1_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_1_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_2 PINCFG02 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_2_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_2_DRVSTR		(1 << 6)
/** PORT_PINCFG0_2_PULLEN Pull Enable **/
#define PORT_PINCFG0_2_PULLEN		(1 << 2)
/** PORT_PINCFG0_2_INEN Input Enable **/
#define PORT_PINCFG0_2_INEN		(1 << 1)
/** PORT_PINCFG0_2_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_2_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_3 PINCFG03 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_3_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_3_DRVSTR		(1 << 6)
/** PORT_PINCFG0_3_PULLEN Pull Enable **/
#define PORT_PINCFG0_3_PULLEN		(1 << 2)
/** PORT_PINCFG0_3_INEN Input Enable **/
#define PORT_PINCFG0_3_INEN		(1 << 1)
/** PORT_PINCFG0_3_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_3_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_4 PINCFG04 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_4_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_4_DRVSTR		(1 << 6)
/** PORT_PINCFG0_4_PULLEN Pull Enable **/
#define PORT_PINCFG0_4_PULLEN		(1 << 2)
/** PORT_PINCFG0_4_INEN Input Enable **/
#define PORT_PINCFG0_4_INEN		(1 << 1)
/** PORT_PINCFG0_4_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_4_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_5 PINCFG05 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_5_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_5_DRVSTR		(1 << 6)
/** PORT_PINCFG0_5_PULLEN Pull Enable **/
#define PORT_PINCFG0_5_PULLEN		(1 << 2)
/** PORT_PINCFG0_5_INEN Input Enable **/
#define PORT_PINCFG0_5_INEN		(1 << 1)
/** PORT_PINCFG0_5_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_5_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_6 PINCFG06 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_6_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_6_DRVSTR		(1 << 6)
/** PORT_PINCFG0_6_PULLEN Pull Enable **/
#define PORT_PINCFG0_6_PULLEN		(1 << 2)
/** PORT_PINCFG0_6_INEN Input Enable **/
#define PORT_PINCFG0_6_INEN		(1 << 1)
/** PORT_PINCFG0_6_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_6_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_7 PINCFG07 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_7_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_7_DRVSTR		(1 << 6)
/** PORT_PINCFG0_7_PULLEN Pull Enable **/
#define PORT_PINCFG0_7_PULLEN		(1 << 2)
/** PORT_PINCFG0_7_INEN Input Enable **/
#define PORT_PINCFG0_7_INEN		(1 << 1)
/** PORT_PINCFG0_7_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_7_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_8 PINCFG08 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_8_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_8_DRVSTR		(1 << 6)
/** PORT_PINCFG0_8_PULLEN Pull Enable **/
#define PORT_PINCFG0_8_PULLEN		(1 << 2)
/** PORT_PINCFG0_8_INEN Input Enable **/
#define PORT_PINCFG0_8_INEN		(1 << 1)
/** PORT_PINCFG0_8_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_8_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_9 PINCFG09 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_9_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_9_DRVSTR		(1 << 6)
/** PORT_PINCFG0_9_PULLEN Pull Enable **/
#define PORT_PINCFG0_9_PULLEN		(1 << 2)
/** PORT_PINCFG0_9_INEN Input Enable **/
#define PORT_PINCFG0_9_INEN		(1 << 1)
/** PORT_PINCFG0_9_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_9_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_10 PINCFG010 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_10_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_10_DRVSTR		(1 << 6)
/** PORT_PINCFG0_10_PULLEN Pull Enable **/
#define PORT_PINCFG0_10_PULLEN		(1 << 2)
/** PORT_PINCFG0_10_INEN Input Enable **/
#define PORT_PINCFG0_10_INEN		(1 << 1)
/** PORT_PINCFG0_10_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_10_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_11 PINCFG011 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_11_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_11_DRVSTR		(1 << 6)
/** PORT_PINCFG0_11_PULLEN Pull Enable **/
#define PORT_PINCFG0_11_PULLEN		(1 << 2)
/** PORT_PINCFG0_11_INEN Input Enable **/
#define PORT_PINCFG0_11_INEN		(1 << 1)
/** PORT_PINCFG0_11_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_11_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_12 PINCFG012 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_12_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_12_DRVSTR		(1 << 6)
/** PORT_PINCFG0_12_PULLEN Pull Enable **/
#define PORT_PINCFG0_12_PULLEN		(1 << 2)
/** PORT_PINCFG0_12_INEN Input Enable **/
#define PORT_PINCFG0_12_INEN		(1 << 1)
/** PORT_PINCFG0_12_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_12_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_13 PINCFG013 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_13_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_13_DRVSTR		(1 << 6)
/** PORT_PINCFG0_13_PULLEN Pull Enable **/
#define PORT_PINCFG0_13_PULLEN		(1 << 2)
/** PORT_PINCFG0_13_INEN Input Enable **/
#define PORT_PINCFG0_13_INEN		(1 << 1)
/** PORT_PINCFG0_13_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_13_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_14 PINCFG014 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_14_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_14_DRVSTR		(1 << 6)
/** PORT_PINCFG0_14_PULLEN Pull Enable **/
#define PORT_PINCFG0_14_PULLEN		(1 << 2)
/** PORT_PINCFG0_14_INEN Input Enable **/
#define PORT_PINCFG0_14_INEN		(1 << 1)
/** PORT_PINCFG0_14_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_14_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_15 PINCFG015 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_15_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_15_DRVSTR		(1 << 6)
/** PORT_PINCFG0_15_PULLEN Pull Enable **/
#define PORT_PINCFG0_15_PULLEN		(1 << 2)
/** PORT_PINCFG0_15_INEN Input Enable **/
#define PORT_PINCFG0_15_INEN		(1 << 1)
/** PORT_PINCFG0_15_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_15_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_16 PINCFG016 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_16_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_16_DRVSTR		(1 << 6)
/** PORT_PINCFG0_16_PULLEN Pull Enable **/
#define PORT_PINCFG0_16_PULLEN		(1 << 2)
/** PORT_PINCFG0_16_INEN Input Enable **/
#define PORT_PINCFG0_16_INEN		(1 << 1)
/** PORT_PINCFG0_16_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_16_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_17 PINCFG017 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_17_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_17_DRVSTR		(1 << 6)
/** PORT_PINCFG0_17_PULLEN Pull Enable **/
#define PORT_PINCFG0_17_PULLEN		(1 << 2)
/** PORT_PINCFG0_17_INEN Input Enable **/
#define PORT_PINCFG0_17_INEN		(1 << 1)
/** PORT_PINCFG0_17_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_17_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_18 PINCFG018 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_18_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_18_DRVSTR		(1 << 6)
/** PORT_PINCFG0_18_PULLEN Pull Enable **/
#define PORT_PINCFG0_18_PULLEN		(1 << 2)
/** PORT_PINCFG0_18_INEN Input Enable **/
#define PORT_PINCFG0_18_INEN		(1 << 1)
/** PORT_PINCFG0_18_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_18_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_19 PINCFG019 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_19_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_19_DRVSTR		(1 << 6)
/** PORT_PINCFG0_19_PULLEN Pull Enable **/
#define PORT_PINCFG0_19_PULLEN		(1 << 2)
/** PORT_PINCFG0_19_INEN Input Enable **/
#define PORT_PINCFG0_19_INEN		(1 << 1)
/** PORT_PINCFG0_19_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_19_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_20 PINCFG020 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_20_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_20_DRVSTR		(1 << 6)
/** PORT_PINCFG0_20_PULLEN Pull Enable **/
#define PORT_PINCFG0_20_PULLEN		(1 << 2)
/** PORT_PINCFG0_20_INEN Input Enable **/
#define PORT_PINCFG0_20_INEN		(1 << 1)
/** PORT_PINCFG0_20_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_20_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_21 PINCFG021 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_21_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_21_DRVSTR		(1 << 6)
/** PORT_PINCFG0_21_PULLEN Pull Enable **/
#define PORT_PINCFG0_21_PULLEN		(1 << 2)
/** PORT_PINCFG0_21_INEN Input Enable **/
#define PORT_PINCFG0_21_INEN		(1 << 1)
/** PORT_PINCFG0_21_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_21_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_22 PINCFG022 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_22_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_22_DRVSTR		(1 << 6)
/** PORT_PINCFG0_22_PULLEN Pull Enable **/
#define PORT_PINCFG0_22_PULLEN		(1 << 2)
/** PORT_PINCFG0_22_INEN Input Enable **/
#define PORT_PINCFG0_22_INEN		(1 << 1)
/** PORT_PINCFG0_22_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_22_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_23 PINCFG023 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_23_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_23_DRVSTR		(1 << 6)
/** PORT_PINCFG0_23_PULLEN Pull Enable **/
#define PORT_PINCFG0_23_PULLEN		(1 << 2)
/** PORT_PINCFG0_23_INEN Input Enable **/
#define PORT_PINCFG0_23_INEN		(1 << 1)
/** PORT_PINCFG0_23_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_23_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_24 PINCFG024 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_24_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_24_DRVSTR		(1 << 6)
/** PORT_PINCFG0_24_PULLEN Pull Enable **/
#define PORT_PINCFG0_24_PULLEN		(1 << 2)
/** PORT_PINCFG0_24_INEN Input Enable **/
#define PORT_PINCFG0_24_INEN		(1 << 1)
/** PORT_PINCFG0_24_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_24_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_25 PINCFG025 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_25_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_25_DRVSTR		(1 << 6)
/** PORT_PINCFG0_25_PULLEN Pull Enable **/
#define PORT_PINCFG0_25_PULLEN		(1 << 2)
/** PORT_PINCFG0_25_INEN Input Enable **/
#define PORT_PINCFG0_25_INEN		(1 << 1)
/** PORT_PINCFG0_25_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_25_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_26 PINCFG026 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_26_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_26_DRVSTR		(1 << 6)
/** PORT_PINCFG0_26_PULLEN Pull Enable **/
#define PORT_PINCFG0_26_PULLEN		(1 << 2)
/** PORT_PINCFG0_26_INEN Input Enable **/
#define PORT_PINCFG0_26_INEN		(1 << 1)
/** PORT_PINCFG0_26_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_26_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_27 PINCFG027 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_27_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_27_DRVSTR		(1 << 6)
/** PORT_PINCFG0_27_PULLEN Pull Enable **/
#define PORT_PINCFG0_27_PULLEN		(1 << 2)
/** PORT_PINCFG0_27_INEN Input Enable **/
#define PORT_PINCFG0_27_INEN		(1 << 1)
/** PORT_PINCFG0_27_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_27_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_28 PINCFG028 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_28_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_28_DRVSTR		(1 << 6)
/** PORT_PINCFG0_28_PULLEN Pull Enable **/
#define PORT_PINCFG0_28_PULLEN		(1 << 2)
/** PORT_PINCFG0_28_INEN Input Enable **/
#define PORT_PINCFG0_28_INEN		(1 << 1)
/** PORT_PINCFG0_28_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_28_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_29 PINCFG029 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_29_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_29_DRVSTR		(1 << 6)
/** PORT_PINCFG0_29_PULLEN Pull Enable **/
#define PORT_PINCFG0_29_PULLEN		(1 << 2)
/** PORT_PINCFG0_29_INEN Input Enable **/
#define PORT_PINCFG0_29_INEN		(1 << 1)
/** PORT_PINCFG0_29_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_29_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_30 PINCFG030 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_30_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_30_DRVSTR		(1 << 6)
/** PORT_PINCFG0_30_PULLEN Pull Enable **/
#define PORT_PINCFG0_30_PULLEN		(1 << 2)
/** PORT_PINCFG0_30_INEN Input Enable **/
#define PORT_PINCFG0_30_INEN		(1 << 1)
/** PORT_PINCFG0_30_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_30_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_pincfg0_31 PINCFG031 Pin Configuration n - Group 0
@{*/

/** PORT_PINCFG0_31_DRVSTR Output Driver Strength Selection **/
#define PORT_PINCFG0_31_DRVSTR		(1 << 6)
/** PORT_PINCFG0_31_PULLEN Pull Enable **/
#define PORT_PINCFG0_31_PULLEN		(1 << 2)
/** PORT_PINCFG0_31_INEN Input Enable **/
#define PORT_PINCFG0_31_INEN		(1 << 1)
/** PORT_PINCFG0_31_PMUXEN Select Peripheral Multiplexer **/
#define PORT_PINCFG0_31_PMUXEN		(1 << 0)

/**@}*/

/** @defgroup port_dir1 DIR1 Data Direction
@{*/


#define PORT_DIR1_DIR_SHIFT		0
#define PORT_DIR1_DIR_MASK		0xffffffff
/** @defgroup port_dir1_dir DIR Port Data Direction
@{*/
/**@}*/


/**@}*/

/** @defgroup port_dirclr1 DIRCLR1 Data Direction Clear
@{*/


#define PORT_DIRCLR1_DIRCLR_SHIFT		0
#define PORT_DIRCLR1_DIRCLR_MASK		0xffffffff
/** @defgroup port_dirclr1_dirclr DIRCLR Port Data Direction Clear
@{*/
/**@}*/


/**@}*/

/** @defgroup port_dirset1 DIRSET1 Data Direction Set
@{*/


#define PORT_DIRSET1_DIRSET_SHIFT		0
#define PORT_DIRSET1_DIRSET_MASK		0xffffffff
/** @defgroup port_dirset1_dirset DIRSET Port Data Direction Set
@{*/
/**@}*/


/**@}*/

/** @defgroup port_dirtgl1 DIRTGL1 Data Direction Toggle
@{*/


#define PORT_DIRTGL1_DIRTGL_SHIFT		0
#define PORT_DIRTGL1_DIRTGL_MASK		0xffffffff
/** @defgroup port_dirtgl1_dirtgl DIRTGL Port Data Direction Toggle
@{*/
/**@}*/


/**@}*/

/** @defgroup port_out1 OUT1 Data Output Value
@{*/


#define PORT_OUT1_OUT_SHIFT		0
#define PORT_OUT1_OUT_MASK		0xffffffff
/** @defgroup port_out1_out OUT Port Data Output Value
@{*/
/**@}*/


/**@}*/

/** @defgroup port_outclr1 OUTCLR1 Data Output Value Clear
@{*/


#define PORT_OUTCLR1_OUTCLR_SHIFT		0
#define PORT_OUTCLR1_OUTCLR_MASK		0xffffffff
/** @defgroup port_outclr1_outclr OUTCLR Port Data Output Value Clear
@{*/
/**@}*/


/**@}*/

/** @defgroup port_outset1 OUTSET1 Data Output Value Set
@{*/


#define PORT_OUTSET1_OUTSET_SHIFT		0
#define PORT_OUTSET1_OUTSET_MASK		0xffffffff
/** @defgroup port_outset1_outset OUTSET Port Data Output Value Set
@{*/
/**@}*/


/**@}*/

/** @defgroup port_outtgl1 OUTTGL1 Data Output Value Toggle
@{*/


#define PORT_OUTTGL1_OUTTGL_SHIFT		0
#define PORT_OUTTGL1_OUTTGL_MASK		0xffffffff
/** @defgroup port_outtgl1_outtgl OUTTGL Port Data Output Value Toggle
@{*/
/**@}*/


/**@}*/

/** @defgroup port_in1 IN1 Data Input Value
@{*/


#define PORT_IN1_IN_SHIFT		0
#define PORT_IN1_IN_MASK		0xffffffff
/** @defgroup port_in1_in IN Port Data Input Value
@{*/
/**@}*/


/**@}*/

/** @defgroup port_ctrl1 CTRL1 Control
@{*/


#define PORT_CTRL1_SAMPLING_SHIFT		0
#define PORT_CTRL1_SAMPLING_MASK		0xffffffff
/** @defgroup port_ctrl1_sampling SAMPLING Input Sampling Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup port_wrconfig1 WRCONFIG1 Write Configuration
@{*/

/** PORT_WRCONFIG1_HWSEL Half-Word Select **/
#define PORT_WRCONFIG1_HWSEL		(1 << 31)
/** PORT_WRCONFIG1_WRPINCFG Write PINCFG Registers **/
#define PORT_WRCONFIG1_WRPINCFG		(1 << 30)
/** PORT_WRCONFIG1_WRPMUX Write PMUX Registers **/
#define PORT_WRCONFIG1_WRPMUX		(1 << 28)

#define PORT_WRCONFIG1_PMUX_SHIFT		24
#define PORT_WRCONFIG1_PMUX_MASK		0x0f
/** @defgroup port_wrconfig1_pmux PMUX Peripheral Multiplexing Template
@{*/
/**@}*/

/** PORT_WRCONFIG1_DRVSTR Output Driver Strength Selection **/
#define PORT_WRCONFIG1_DRVSTR		(1 << 22)
/** PORT_WRCONFIG1_PULLEN Pull Enable **/
#define PORT_WRCONFIG1_PULLEN		(1 << 18)
/** PORT_WRCONFIG1_INEN Input Enable **/
#define PORT_WRCONFIG1_INEN		(1 << 17)
/** PORT_WRCONFIG1_PMUXEN Select Peripheral Multiplexer **/
#define PORT_WRCONFIG1_PMUXEN		(1 << 16)

#define PORT_WRCONFIG1_PINMASK_SHIFT		0
#define PORT_WRCONFIG1_PINMASK_MASK		0xffff
/** @defgroup port_wrconfig1_pinmask PINMASK Pin Mask for Multiple Pin Configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup port_evctrl1 EVCTRL1 Event Input Control
@{*/

/** PORT_EVCTRL1_PORTEI3 Port Event Enable Input 3 **/
#define PORT_EVCTRL1_PORTEI3		(1 << 31)

#define PORT_EVCTRL1_EVACT3_SHIFT		29
#define PORT_EVCTRL1_EVACT3_MASK		0x03
/** @defgroup port_evctrl1_evact3 EVACT3 Port Event Action 3
@{*/
/**@}*/


#define PORT_EVCTRL1_PID3_SHIFT		24
#define PORT_EVCTRL1_PID3_MASK		0x1f
/** @defgroup port_evctrl1_pid3 PID3 Port Event Pin Identifier 3
@{*/
/**@}*/

/** PORT_EVCTRL1_PORTEI2 Port Event Enable Input 2 **/
#define PORT_EVCTRL1_PORTEI2		(1 << 23)

#define PORT_EVCTRL1_EVACT2_SHIFT		21
#define PORT_EVCTRL1_EVACT2_MASK		0x03
/** @defgroup port_evctrl1_evact2 EVACT2 Port Event Action 2
@{*/
/**@}*/


#define PORT_EVCTRL1_PID2_SHIFT		16
#define PORT_EVCTRL1_PID2_MASK		0x1f
/** @defgroup port_evctrl1_pid2 PID2 Port Event Pin Identifier 2
@{*/
/**@}*/

/** PORT_EVCTRL1_PORTEI1 Port Event Enable Input 1 **/
#define PORT_EVCTRL1_PORTEI1		(1 << 15)

#define PORT_EVCTRL1_EVACT1_SHIFT		13
#define PORT_EVCTRL1_EVACT1_MASK		0x03
/** @defgroup port_evctrl1_evact1 EVACT1 Port Event Action 1
@{*/
/**@}*/


#define PORT_EVCTRL1_PID1_SHIFT		8
#define PORT_EVCTRL1_PID1_MASK		0x1f
/** @defgroup port_evctrl1_pid1 PID1 Port Event Pin Identifier 1
@{*/
/**@}*/

/** PORT_EVCTRL1_PORTEI0 Port Event Enable Input 0 **/
#define PORT_EVCTRL1_PORTEI0		(1 << 7)

#define PORT_EVCTRL1_EVACT0_SHIFT		5
#define PORT_EVCTRL1_EVACT0_MASK		0x03
/** @defgroup port_evctrl1_evact0 EVACT0 Port Event Action 0
@{*/
/**@}*/


#define PORT_EVCTRL1_PID0_SHIFT		0
#define PORT_EVCTRL1_PID0_MASK		0x1f
/** @defgroup port_evctrl1_pid0 PID0 Port Event Pin Identifier 0
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux1_0 PMUX10 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_1 PMUX11 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_2 PMUX12 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_3 PMUX13 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_4 PMUX14 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_5 PMUX15 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_6 PMUX16 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_7 PMUX17 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_8 PMUX18 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_9 PMUX19 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_10 PMUX110 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_11 PMUX111 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_12 PMUX112 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_13 PMUX113 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_14 PMUX114 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pmux1_15 PMUX115 Peripheral Multiplexing n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_0 PINCFG10 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_1 PINCFG11 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_2 PINCFG12 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_3 PINCFG13 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_4 PINCFG14 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_5 PINCFG15 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_6 PINCFG16 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_7 PINCFG17 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_8 PINCFG18 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_9 PINCFG19 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_10 PINCFG110 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_11 PINCFG111 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_12 PINCFG112 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_13 PINCFG113 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_14 PINCFG114 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_15 PINCFG115 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_16 PINCFG116 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_17 PINCFG117 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_18 PINCFG118 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_19 PINCFG119 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_20 PINCFG120 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_21 PINCFG121 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_22 PINCFG122 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_23 PINCFG123 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_24 PINCFG124 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_25 PINCFG125 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_26 PINCFG126 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_27 PINCFG127 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_28 PINCFG128 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_29 PINCFG129 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_30 PINCFG130 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_pincfg1_31 PINCFG131 Pin Configuration n - Group 1
@{*/


/**@}*/

/** @defgroup port_dir2 DIR2 Data Direction
@{*/


#define PORT_DIR2_DIR_SHIFT		0
#define PORT_DIR2_DIR_MASK		0xffffffff
/** @defgroup port_dir2_dir DIR Port Data Direction
@{*/
/**@}*/


/**@}*/

/** @defgroup port_dirclr2 DIRCLR2 Data Direction Clear
@{*/


#define PORT_DIRCLR2_DIRCLR_SHIFT		0
#define PORT_DIRCLR2_DIRCLR_MASK		0xffffffff
/** @defgroup port_dirclr2_dirclr DIRCLR Port Data Direction Clear
@{*/
/**@}*/


/**@}*/

/** @defgroup port_dirset2 DIRSET2 Data Direction Set
@{*/


#define PORT_DIRSET2_DIRSET_SHIFT		0
#define PORT_DIRSET2_DIRSET_MASK		0xffffffff
/** @defgroup port_dirset2_dirset DIRSET Port Data Direction Set
@{*/
/**@}*/


/**@}*/

/** @defgroup port_dirtgl2 DIRTGL2 Data Direction Toggle
@{*/


#define PORT_DIRTGL2_DIRTGL_SHIFT		0
#define PORT_DIRTGL2_DIRTGL_MASK		0xffffffff
/** @defgroup port_dirtgl2_dirtgl DIRTGL Port Data Direction Toggle
@{*/
/**@}*/


/**@}*/

/** @defgroup port_out2 OUT2 Data Output Value
@{*/


#define PORT_OUT2_OUT_SHIFT		0
#define PORT_OUT2_OUT_MASK		0xffffffff
/** @defgroup port_out2_out OUT Port Data Output Value
@{*/
/**@}*/


/**@}*/

/** @defgroup port_outclr2 OUTCLR2 Data Output Value Clear
@{*/


#define PORT_OUTCLR2_OUTCLR_SHIFT		0
#define PORT_OUTCLR2_OUTCLR_MASK		0xffffffff
/** @defgroup port_outclr2_outclr OUTCLR Port Data Output Value Clear
@{*/
/**@}*/


/**@}*/

/** @defgroup port_outset2 OUTSET2 Data Output Value Set
@{*/


#define PORT_OUTSET2_OUTSET_SHIFT		0
#define PORT_OUTSET2_OUTSET_MASK		0xffffffff
/** @defgroup port_outset2_outset OUTSET Port Data Output Value Set
@{*/
/**@}*/


/**@}*/

/** @defgroup port_outtgl2 OUTTGL2 Data Output Value Toggle
@{*/


#define PORT_OUTTGL2_OUTTGL_SHIFT		0
#define PORT_OUTTGL2_OUTTGL_MASK		0xffffffff
/** @defgroup port_outtgl2_outtgl OUTTGL Port Data Output Value Toggle
@{*/
/**@}*/


/**@}*/

/** @defgroup port_in2 IN2 Data Input Value
@{*/


#define PORT_IN2_IN_SHIFT		0
#define PORT_IN2_IN_MASK		0xffffffff
/** @defgroup port_in2_in IN Port Data Input Value
@{*/
/**@}*/


/**@}*/

/** @defgroup port_ctrl2 CTRL2 Control
@{*/


#define PORT_CTRL2_SAMPLING_SHIFT		0
#define PORT_CTRL2_SAMPLING_MASK		0xffffffff
/** @defgroup port_ctrl2_sampling SAMPLING Input Sampling Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup port_wrconfig2 WRCONFIG2 Write Configuration
@{*/

/** PORT_WRCONFIG2_HWSEL Half-Word Select **/
#define PORT_WRCONFIG2_HWSEL		(1 << 31)
/** PORT_WRCONFIG2_WRPINCFG Write PINCFG Registers **/
#define PORT_WRCONFIG2_WRPINCFG		(1 << 30)
/** PORT_WRCONFIG2_WRPMUX Write PMUX Registers **/
#define PORT_WRCONFIG2_WRPMUX		(1 << 28)

#define PORT_WRCONFIG2_PMUX_SHIFT		24
#define PORT_WRCONFIG2_PMUX_MASK		0x0f
/** @defgroup port_wrconfig2_pmux PMUX Peripheral Multiplexing Template
@{*/
/**@}*/

/** PORT_WRCONFIG2_DRVSTR Output Driver Strength Selection **/
#define PORT_WRCONFIG2_DRVSTR		(1 << 22)
/** PORT_WRCONFIG2_PULLEN Pull Enable **/
#define PORT_WRCONFIG2_PULLEN		(1 << 18)
/** PORT_WRCONFIG2_INEN Input Enable **/
#define PORT_WRCONFIG2_INEN		(1 << 17)
/** PORT_WRCONFIG2_PMUXEN Select Peripheral Multiplexer **/
#define PORT_WRCONFIG2_PMUXEN		(1 << 16)

#define PORT_WRCONFIG2_PINMASK_SHIFT		0
#define PORT_WRCONFIG2_PINMASK_MASK		0xffff
/** @defgroup port_wrconfig2_pinmask PINMASK Pin Mask for Multiple Pin Configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup port_evctrl2 EVCTRL2 Event Input Control
@{*/

/** PORT_EVCTRL2_PORTEI3 Port Event Enable Input 3 **/
#define PORT_EVCTRL2_PORTEI3		(1 << 31)

#define PORT_EVCTRL2_EVACT3_SHIFT		29
#define PORT_EVCTRL2_EVACT3_MASK		0x03
/** @defgroup port_evctrl2_evact3 EVACT3 Port Event Action 3
@{*/
/**@}*/


#define PORT_EVCTRL2_PID3_SHIFT		24
#define PORT_EVCTRL2_PID3_MASK		0x1f
/** @defgroup port_evctrl2_pid3 PID3 Port Event Pin Identifier 3
@{*/
/**@}*/

/** PORT_EVCTRL2_PORTEI2 Port Event Enable Input 2 **/
#define PORT_EVCTRL2_PORTEI2		(1 << 23)

#define PORT_EVCTRL2_EVACT2_SHIFT		21
#define PORT_EVCTRL2_EVACT2_MASK		0x03
/** @defgroup port_evctrl2_evact2 EVACT2 Port Event Action 2
@{*/
/**@}*/


#define PORT_EVCTRL2_PID2_SHIFT		16
#define PORT_EVCTRL2_PID2_MASK		0x1f
/** @defgroup port_evctrl2_pid2 PID2 Port Event Pin Identifier 2
@{*/
/**@}*/

/** PORT_EVCTRL2_PORTEI1 Port Event Enable Input 1 **/
#define PORT_EVCTRL2_PORTEI1		(1 << 15)

#define PORT_EVCTRL2_EVACT1_SHIFT		13
#define PORT_EVCTRL2_EVACT1_MASK		0x03
/** @defgroup port_evctrl2_evact1 EVACT1 Port Event Action 1
@{*/
/**@}*/


#define PORT_EVCTRL2_PID1_SHIFT		8
#define PORT_EVCTRL2_PID1_MASK		0x1f
/** @defgroup port_evctrl2_pid1 PID1 Port Event Pin Identifier 1
@{*/
/**@}*/

/** PORT_EVCTRL2_PORTEI0 Port Event Enable Input 0 **/
#define PORT_EVCTRL2_PORTEI0		(1 << 7)

#define PORT_EVCTRL2_EVACT0_SHIFT		5
#define PORT_EVCTRL2_EVACT0_MASK		0x03
/** @defgroup port_evctrl2_evact0 EVACT0 Port Event Action 0
@{*/
/**@}*/


#define PORT_EVCTRL2_PID0_SHIFT		0
#define PORT_EVCTRL2_PID0_MASK		0x1f
/** @defgroup port_evctrl2_pid0 PID0 Port Event Pin Identifier 0
@{*/
/**@}*/


/**@}*/

/** @defgroup port_pmux2_0 PMUX20 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_1 PMUX21 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_2 PMUX22 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_3 PMUX23 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_4 PMUX24 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_5 PMUX25 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_6 PMUX26 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_7 PMUX27 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_8 PMUX28 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_9 PMUX29 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_10 PMUX210 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_11 PMUX211 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_12 PMUX212 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_13 PMUX213 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_14 PMUX214 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pmux2_15 PMUX215 Peripheral Multiplexing n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_0 PINCFG20 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_1 PINCFG21 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_2 PINCFG22 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_3 PINCFG23 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_4 PINCFG24 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_5 PINCFG25 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_6 PINCFG26 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_7 PINCFG27 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_8 PINCFG28 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_9 PINCFG29 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_10 PINCFG210 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_11 PINCFG211 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_12 PINCFG212 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_13 PINCFG213 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_14 PINCFG214 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_15 PINCFG215 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_16 PINCFG216 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_17 PINCFG217 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_18 PINCFG218 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_19 PINCFG219 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_20 PINCFG220 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_21 PINCFG221 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_22 PINCFG222 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_23 PINCFG223 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_24 PINCFG224 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_25 PINCFG225 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_26 PINCFG226 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_27 PINCFG227 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_28 PINCFG228 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_29 PINCFG229 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_30 PINCFG230 Pin Configuration n - Group 2
@{*/


/**@}*/

/** @defgroup port_pincfg2_31 PINCFG231 Pin Configuration n - Group 2
@{*/


/**@}*/

#pragma once 

/* --- CAN1: Controller area network -------------------------------- */

/** @defgroup can1_registers Controller area network Register
@{*/

/** CAN1_MCR master control register **/
#define CAN1_MCR			MMIO32(CAN1_BASE + 0x00)
/** CAN1_MSR master status register **/
#define CAN1_MSR			MMIO32(CAN1_BASE + 0x04)
/** CAN1_TSR transmit status register **/
#define CAN1_TSR			MMIO32(CAN1_BASE + 0x08)
/** CAN1_RF0R receive FIFO 0 register **/
#define CAN1_RF0R			MMIO32(CAN1_BASE + 0x0c)
/** CAN1_RF1R receive FIFO 1 register **/
#define CAN1_RF1R			MMIO32(CAN1_BASE + 0x10)
/** CAN1_IER interrupt enable register **/
#define CAN1_IER			MMIO32(CAN1_BASE + 0x14)
/** CAN1_ESR interrupt enable register **/
#define CAN1_ESR			MMIO32(CAN1_BASE + 0x18)
/** CAN1_BTR bit timing register **/
#define CAN1_BTR			MMIO32(CAN1_BASE + 0x1c)
/** CAN1_TI0R TX mailbox identifier register **/
#define CAN1_TI0R			MMIO32(CAN1_BASE + 0x180)
/** CAN1_TDT0R mailbox data length control and time stamp register **/
#define CAN1_TDT0R			MMIO32(CAN1_BASE + 0x184)
/** CAN1_TDL0R mailbox data low register **/
#define CAN1_TDL0R			MMIO32(CAN1_BASE + 0x188)
/** CAN1_TDH0R mailbox data high register **/
#define CAN1_TDH0R			MMIO32(CAN1_BASE + 0x18c)
/** CAN1_TI1R mailbox identifier register **/
#define CAN1_TI1R			MMIO32(CAN1_BASE + 0x190)
/** CAN1_TDT1R mailbox data length control and time stamp register **/
#define CAN1_TDT1R			MMIO32(CAN1_BASE + 0x194)
/** CAN1_TDL1R mailbox data low register **/
#define CAN1_TDL1R			MMIO32(CAN1_BASE + 0x198)
/** CAN1_TDH1R mailbox data high register **/
#define CAN1_TDH1R			MMIO32(CAN1_BASE + 0x19c)
/** CAN1_TI2R mailbox identifier register **/
#define CAN1_TI2R			MMIO32(CAN1_BASE + 0x1a0)
/** CAN1_TDT2R mailbox data length control and time stamp register **/
#define CAN1_TDT2R			MMIO32(CAN1_BASE + 0x1a4)
/** CAN1_TDL2R mailbox data low register **/
#define CAN1_TDL2R			MMIO32(CAN1_BASE + 0x1a8)
/** CAN1_TDH2R mailbox data high register **/
#define CAN1_TDH2R			MMIO32(CAN1_BASE + 0x1ac)
/** CAN1_RI0R receive FIFO mailbox identifier register **/
#define CAN1_RI0R			MMIO32(CAN1_BASE + 0x1b0)
/** CAN1_RDT0R mailbox data high register **/
#define CAN1_RDT0R			MMIO32(CAN1_BASE + 0x1b4)
/** CAN1_RDL0R mailbox data high register **/
#define CAN1_RDL0R			MMIO32(CAN1_BASE + 0x1b8)
/** CAN1_RDH0R receive FIFO mailbox data high register **/
#define CAN1_RDH0R			MMIO32(CAN1_BASE + 0x1bc)
/** CAN1_RI1R mailbox data high register **/
#define CAN1_RI1R			MMIO32(CAN1_BASE + 0x1c0)
/** CAN1_RDT1R mailbox data high register **/
#define CAN1_RDT1R			MMIO32(CAN1_BASE + 0x1c4)
/** CAN1_RDL1R mailbox data high register **/
#define CAN1_RDL1R			MMIO32(CAN1_BASE + 0x1c8)
/** CAN1_RDH1R mailbox data high register **/
#define CAN1_RDH1R			MMIO32(CAN1_BASE + 0x1cc)
/** CAN1_FMR filter master register **/
#define CAN1_FMR			MMIO32(CAN1_BASE + 0x200)
/** CAN1_FM1R filter mode register **/
#define CAN1_FM1R			MMIO32(CAN1_BASE + 0x204)
/** CAN1_FS1R filter scale register **/
#define CAN1_FS1R			MMIO32(CAN1_BASE + 0x20c)
/** CAN1_FFA1R filter FIFO assignment register **/
#define CAN1_FFA1R			MMIO32(CAN1_BASE + 0x214)
/** CAN1_FA1R filter activation register **/
#define CAN1_FA1R			MMIO32(CAN1_BASE + 0x21c)
/** CAN1_F0R1 Filter bank 0 register 1 **/
#define CAN1_F0R1			MMIO32(CAN1_BASE + 0x240)
/** CAN1_F0R2 Filter bank 0 register 2 **/
#define CAN1_F0R2			MMIO32(CAN1_BASE + 0x244)
/** CAN1_F1R1 Filter bank 1 register 1 **/
#define CAN1_F1R1			MMIO32(CAN1_BASE + 0x248)
/** CAN1_F1R2 Filter bank 1 register 2 **/
#define CAN1_F1R2			MMIO32(CAN1_BASE + 0x24c)
/** CAN1_F2R1 Filter bank 2 register 1 **/
#define CAN1_F2R1			MMIO32(CAN1_BASE + 0x250)
/** CAN1_F2R2 Filter bank 2 register 2 **/
#define CAN1_F2R2			MMIO32(CAN1_BASE + 0x254)
/** CAN1_F3R1 Filter bank 3 register 1 **/
#define CAN1_F3R1			MMIO32(CAN1_BASE + 0x258)
/** CAN1_F3R2 Filter bank 3 register 2 **/
#define CAN1_F3R2			MMIO32(CAN1_BASE + 0x25c)
/** CAN1_F4R1 Filter bank 4 register 1 **/
#define CAN1_F4R1			MMIO32(CAN1_BASE + 0x260)
/** CAN1_F4R2 Filter bank 4 register 2 **/
#define CAN1_F4R2			MMIO32(CAN1_BASE + 0x264)
/** CAN1_F5R1 Filter bank 5 register 1 **/
#define CAN1_F5R1			MMIO32(CAN1_BASE + 0x268)
/** CAN1_F5R2 Filter bank 5 register 2 **/
#define CAN1_F5R2			MMIO32(CAN1_BASE + 0x26c)
/** CAN1_F6R1 Filter bank 6 register 1 **/
#define CAN1_F6R1			MMIO32(CAN1_BASE + 0x270)
/** CAN1_F6R2 Filter bank 6 register 2 **/
#define CAN1_F6R2			MMIO32(CAN1_BASE + 0x274)
/** CAN1_F7R1 Filter bank 7 register 1 **/
#define CAN1_F7R1			MMIO32(CAN1_BASE + 0x278)
/** CAN1_F7R2 Filter bank 7 register 2 **/
#define CAN1_F7R2			MMIO32(CAN1_BASE + 0x27c)
/** CAN1_F8R1 Filter bank 8 register 1 **/
#define CAN1_F8R1			MMIO32(CAN1_BASE + 0x280)
/** CAN1_F8R2 Filter bank 8 register 2 **/
#define CAN1_F8R2			MMIO32(CAN1_BASE + 0x284)
/** CAN1_F9R1 Filter bank 9 register 1 **/
#define CAN1_F9R1			MMIO32(CAN1_BASE + 0x288)
/** CAN1_F9R2 Filter bank 9 register 2 **/
#define CAN1_F9R2			MMIO32(CAN1_BASE + 0x28c)
/** CAN1_F10R1 Filter bank 10 register 1 **/
#define CAN1_F10R1			MMIO32(CAN1_BASE + 0x290)
/** CAN1_F10R2 Filter bank 10 register 2 **/
#define CAN1_F10R2			MMIO32(CAN1_BASE + 0x294)
/** CAN1_F11R1 Filter bank 11 register 1 **/
#define CAN1_F11R1			MMIO32(CAN1_BASE + 0x298)
/** CAN1_F11R2 Filter bank 11 register 2 **/
#define CAN1_F11R2			MMIO32(CAN1_BASE + 0x29c)
/** CAN1_F12R1 Filter bank 4 register 1 **/
#define CAN1_F12R1			MMIO32(CAN1_BASE + 0x2a0)
/** CAN1_F12R2 Filter bank 12 register 2 **/
#define CAN1_F12R2			MMIO32(CAN1_BASE + 0x2a4)
/** CAN1_F13R1 Filter bank 13 register 1 **/
#define CAN1_F13R1			MMIO32(CAN1_BASE + 0x2a8)
/** CAN1_F13R2 Filter bank 13 register 2 **/
#define CAN1_F13R2			MMIO32(CAN1_BASE + 0x2ac)
/** CAN1_F14R1 Filter bank 14 register 1 **/
#define CAN1_F14R1			MMIO32(CAN1_BASE + 0x2b0)
/** CAN1_F14R2 Filter bank 14 register 2 **/
#define CAN1_F14R2			MMIO32(CAN1_BASE + 0x2b4)
/** CAN1_F15R1 Filter bank 15 register 1 **/
#define CAN1_F15R1			MMIO32(CAN1_BASE + 0x2b8)
/** CAN1_F15R2 Filter bank 15 register 2 **/
#define CAN1_F15R2			MMIO32(CAN1_BASE + 0x2bc)
/** CAN1_F16R1 Filter bank 16 register 1 **/
#define CAN1_F16R1			MMIO32(CAN1_BASE + 0x2c0)
/** CAN1_F16R2 Filter bank 16 register 2 **/
#define CAN1_F16R2			MMIO32(CAN1_BASE + 0x2c4)
/** CAN1_F17R1 Filter bank 17 register 1 **/
#define CAN1_F17R1			MMIO32(CAN1_BASE + 0x2c8)
/** CAN1_F17R2 Filter bank 17 register 2 **/
#define CAN1_F17R2			MMIO32(CAN1_BASE + 0x2cc)
/** CAN1_F18R1 Filter bank 18 register 1 **/
#define CAN1_F18R1			MMIO32(CAN1_BASE + 0x2d0)
/** CAN1_F18R2 Filter bank 18 register 2 **/
#define CAN1_F18R2			MMIO32(CAN1_BASE + 0x2d4)
/** CAN1_F19R1 Filter bank 19 register 1 **/
#define CAN1_F19R1			MMIO32(CAN1_BASE + 0x2d8)
/** CAN1_F19R2 Filter bank 19 register 2 **/
#define CAN1_F19R2			MMIO32(CAN1_BASE + 0x2dc)
/** CAN1_F20R1 Filter bank 20 register 1 **/
#define CAN1_F20R1			MMIO32(CAN1_BASE + 0x2e0)
/** CAN1_F20R2 Filter bank 20 register 2 **/
#define CAN1_F20R2			MMIO32(CAN1_BASE + 0x2e4)
/** CAN1_F21R1 Filter bank 21 register 1 **/
#define CAN1_F21R1			MMIO32(CAN1_BASE + 0x2e8)
/** CAN1_F21R2 Filter bank 21 register 2 **/
#define CAN1_F21R2			MMIO32(CAN1_BASE + 0x2ec)
/** CAN1_F22R1 Filter bank 22 register 1 **/
#define CAN1_F22R1			MMIO32(CAN1_BASE + 0x2f0)
/** CAN1_F22R2 Filter bank 22 register 2 **/
#define CAN1_F22R2			MMIO32(CAN1_BASE + 0x2f4)
/** CAN1_F23R1 Filter bank 23 register 1 **/
#define CAN1_F23R1			MMIO32(CAN1_BASE + 0x2f8)
/** CAN1_F23R2 Filter bank 23 register 2 **/
#define CAN1_F23R2			MMIO32(CAN1_BASE + 0x2fc)
/** CAN1_F24R1 Filter bank 24 register 1 **/
#define CAN1_F24R1			MMIO32(CAN1_BASE + 0x300)
/** CAN1_F24R2 Filter bank 24 register 2 **/
#define CAN1_F24R2			MMIO32(CAN1_BASE + 0x304)
/** CAN1_F25R1 Filter bank 25 register 1 **/
#define CAN1_F25R1			MMIO32(CAN1_BASE + 0x308)
/** CAN1_F25R2 Filter bank 25 register 2 **/
#define CAN1_F25R2			MMIO32(CAN1_BASE + 0x30c)
/** CAN1_F26R1 Filter bank 26 register 1 **/
#define CAN1_F26R1			MMIO32(CAN1_BASE + 0x310)
/** CAN1_F26R2 Filter bank 26 register 2 **/
#define CAN1_F26R2			MMIO32(CAN1_BASE + 0x314)
/** CAN1_F27R1 Filter bank 27 register 1 **/
#define CAN1_F27R1			MMIO32(CAN1_BASE + 0x318)
/** CAN1_F27R2 Filter bank 27 register 2 **/
#define CAN1_F27R2			MMIO32(CAN1_BASE + 0x31c)

/**@}*/


/** @defgroup can1_mcr MCR master control register
@{*/

/** CAN1_MCR_DBF DBF **/
#define CAN1_MCR_DBF		(1 << 16)
/** CAN1_MCR_RESET RESET **/
#define CAN1_MCR_RESET		(1 << 15)
/** CAN1_MCR_TTCM TTCM **/
#define CAN1_MCR_TTCM		(1 << 7)
/** CAN1_MCR_ABOM ABOM **/
#define CAN1_MCR_ABOM		(1 << 6)
/** CAN1_MCR_AWUM AWUM **/
#define CAN1_MCR_AWUM		(1 << 5)
/** CAN1_MCR_NART NART **/
#define CAN1_MCR_NART		(1 << 4)
/** CAN1_MCR_RFLM RFLM **/
#define CAN1_MCR_RFLM		(1 << 3)
/** CAN1_MCR_TXFP TXFP **/
#define CAN1_MCR_TXFP		(1 << 2)
/** CAN1_MCR_SLEEP SLEEP **/
#define CAN1_MCR_SLEEP		(1 << 1)
/** CAN1_MCR_INRQ INRQ **/
#define CAN1_MCR_INRQ		(1 << 0)

/**@}*/

/** @defgroup can1_msr MSR master status register
@{*/

/** CAN1_MSR_RX RX **/
#define CAN1_MSR_RX		(1 << 11)
/** CAN1_MSR_SAMP SAMP **/
#define CAN1_MSR_SAMP		(1 << 10)
/** CAN1_MSR_RXM RXM **/
#define CAN1_MSR_RXM		(1 << 9)
/** CAN1_MSR_TXM TXM **/
#define CAN1_MSR_TXM		(1 << 8)
/** CAN1_MSR_SLAKI SLAKI **/
#define CAN1_MSR_SLAKI		(1 << 4)
/** CAN1_MSR_WKUI WKUI **/
#define CAN1_MSR_WKUI		(1 << 3)
/** CAN1_MSR_ERRI ERRI **/
#define CAN1_MSR_ERRI		(1 << 2)
/** CAN1_MSR_SLAK SLAK **/
#define CAN1_MSR_SLAK		(1 << 1)
/** CAN1_MSR_INAK INAK **/
#define CAN1_MSR_INAK		(1 << 0)

/**@}*/

/** @defgroup can1_tsr TSR transmit status register
@{*/

/** CAN1_TSR_LOW2 Lowest priority flag for mailbox 2 **/
#define CAN1_TSR_LOW2		(1 << 31)
/** CAN1_TSR_LOW1 Lowest priority flag for mailbox 1 **/
#define CAN1_TSR_LOW1		(1 << 30)
/** CAN1_TSR_LOW0 Lowest priority flag for mailbox 0 **/
#define CAN1_TSR_LOW0		(1 << 29)
/** CAN1_TSR_TME2 Lowest priority flag for mailbox 2 **/
#define CAN1_TSR_TME2		(1 << 28)
/** CAN1_TSR_TME1 Lowest priority flag for mailbox 1 **/
#define CAN1_TSR_TME1		(1 << 27)
/** CAN1_TSR_TME0 Lowest priority flag for mailbox 0 **/
#define CAN1_TSR_TME0		(1 << 26)

#define CAN1_TSR_CODE_SHIFT		24
#define CAN1_TSR_CODE_MASK		0x03
/** @defgroup can1_tsr_code CODE CODE
@{*/
/**@}*/

/** CAN1_TSR_ABRQ2 ABRQ2 **/
#define CAN1_TSR_ABRQ2		(1 << 23)
/** CAN1_TSR_TERR2 TERR2 **/
#define CAN1_TSR_TERR2		(1 << 19)
/** CAN1_TSR_ALST2 ALST2 **/
#define CAN1_TSR_ALST2		(1 << 18)
/** CAN1_TSR_TXOK2 TXOK2 **/
#define CAN1_TSR_TXOK2		(1 << 17)
/** CAN1_TSR_RQCP2 RQCP2 **/
#define CAN1_TSR_RQCP2		(1 << 16)
/** CAN1_TSR_ABRQ1 ABRQ1 **/
#define CAN1_TSR_ABRQ1		(1 << 15)
/** CAN1_TSR_TERR1 TERR1 **/
#define CAN1_TSR_TERR1		(1 << 11)
/** CAN1_TSR_ALST1 ALST1 **/
#define CAN1_TSR_ALST1		(1 << 10)
/** CAN1_TSR_TXOK1 TXOK1 **/
#define CAN1_TSR_TXOK1		(1 << 9)
/** CAN1_TSR_RQCP1 RQCP1 **/
#define CAN1_TSR_RQCP1		(1 << 8)
/** CAN1_TSR_ABRQ0 ABRQ0 **/
#define CAN1_TSR_ABRQ0		(1 << 7)
/** CAN1_TSR_TERR0 TERR0 **/
#define CAN1_TSR_TERR0		(1 << 3)
/** CAN1_TSR_ALST0 ALST0 **/
#define CAN1_TSR_ALST0		(1 << 2)
/** CAN1_TSR_TXOK0 TXOK0 **/
#define CAN1_TSR_TXOK0		(1 << 1)
/** CAN1_TSR_RQCP0 RQCP0 **/
#define CAN1_TSR_RQCP0		(1 << 0)

/**@}*/

/** @defgroup can1_rf0r RF0R receive FIFO 0 register
@{*/

/** CAN1_RF0R_RFOM0 RFOM0 **/
#define CAN1_RF0R_RFOM0		(1 << 5)
/** CAN1_RF0R_FOVR0 FOVR0 **/
#define CAN1_RF0R_FOVR0		(1 << 4)
/** CAN1_RF0R_FULL0 FULL0 **/
#define CAN1_RF0R_FULL0		(1 << 3)

#define CAN1_RF0R_FMP0_SHIFT		0
#define CAN1_RF0R_FMP0_MASK		0x03
/** @defgroup can1_rf0r_fmp0 FMP0 FMP0
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_rf1r RF1R receive FIFO 1 register
@{*/

/** CAN1_RF1R_RFOM1 RFOM1 **/
#define CAN1_RF1R_RFOM1		(1 << 5)
/** CAN1_RF1R_FOVR1 FOVR1 **/
#define CAN1_RF1R_FOVR1		(1 << 4)
/** CAN1_RF1R_FULL1 FULL1 **/
#define CAN1_RF1R_FULL1		(1 << 3)

#define CAN1_RF1R_FMP1_SHIFT		0
#define CAN1_RF1R_FMP1_MASK		0x03
/** @defgroup can1_rf1r_fmp1 FMP1 FMP1
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_ier IER interrupt enable register
@{*/

/** CAN1_IER_SLKIE SLKIE **/
#define CAN1_IER_SLKIE		(1 << 17)
/** CAN1_IER_WKUIE WKUIE **/
#define CAN1_IER_WKUIE		(1 << 16)
/** CAN1_IER_ERRIE ERRIE **/
#define CAN1_IER_ERRIE		(1 << 15)
/** CAN1_IER_LECIE LECIE **/
#define CAN1_IER_LECIE		(1 << 11)
/** CAN1_IER_BOFIE BOFIE **/
#define CAN1_IER_BOFIE		(1 << 10)
/** CAN1_IER_EPVIE EPVIE **/
#define CAN1_IER_EPVIE		(1 << 9)
/** CAN1_IER_EWGIE EWGIE **/
#define CAN1_IER_EWGIE		(1 << 8)
/** CAN1_IER_FOVIE1 FOVIE1 **/
#define CAN1_IER_FOVIE1		(1 << 6)
/** CAN1_IER_FFIE1 FFIE1 **/
#define CAN1_IER_FFIE1		(1 << 5)
/** CAN1_IER_FMPIE1 FMPIE1 **/
#define CAN1_IER_FMPIE1		(1 << 4)
/** CAN1_IER_FOVIE0 FOVIE0 **/
#define CAN1_IER_FOVIE0		(1 << 3)
/** CAN1_IER_FFIE0 FFIE0 **/
#define CAN1_IER_FFIE0		(1 << 2)
/** CAN1_IER_FMPIE0 FMPIE0 **/
#define CAN1_IER_FMPIE0		(1 << 1)
/** CAN1_IER_TMEIE TMEIE **/
#define CAN1_IER_TMEIE		(1 << 0)

/**@}*/

/** @defgroup can1_esr ESR interrupt enable register
@{*/


#define CAN1_ESR_REC_SHIFT		24
#define CAN1_ESR_REC_MASK		0xff
/** @defgroup can1_esr_rec REC REC
@{*/
/**@}*/


#define CAN1_ESR_TEC_SHIFT		16
#define CAN1_ESR_TEC_MASK		0xff
/** @defgroup can1_esr_tec TEC TEC
@{*/
/**@}*/


#define CAN1_ESR_LEC_SHIFT		4
#define CAN1_ESR_LEC_MASK		0x07
/** @defgroup can1_esr_lec LEC LEC
@{*/
/**@}*/

/** CAN1_ESR_BOFF BOFF **/
#define CAN1_ESR_BOFF		(1 << 2)
/** CAN1_ESR_EPVF EPVF **/
#define CAN1_ESR_EPVF		(1 << 1)
/** CAN1_ESR_EWGF EWGF **/
#define CAN1_ESR_EWGF		(1 << 0)

/**@}*/

/** @defgroup can1_btr BTR bit timing register
@{*/

/** CAN1_BTR_SILM SILM **/
#define CAN1_BTR_SILM		(1 << 31)
/** CAN1_BTR_LBKM LBKM **/
#define CAN1_BTR_LBKM		(1 << 30)

#define CAN1_BTR_SJW_SHIFT		24
#define CAN1_BTR_SJW_MASK		0x03
/** @defgroup can1_btr_sjw SJW SJW
@{*/
/**@}*/


#define CAN1_BTR_TS2_SHIFT		20
#define CAN1_BTR_TS2_MASK		0x07
/** @defgroup can1_btr_ts2 TS2 TS2
@{*/
/**@}*/


#define CAN1_BTR_TS1_SHIFT		16
#define CAN1_BTR_TS1_MASK		0x0f
/** @defgroup can1_btr_ts1 TS1 TS1
@{*/
/**@}*/


#define CAN1_BTR_BRP_SHIFT		0
#define CAN1_BTR_BRP_MASK		0x3ff
/** @defgroup can1_btr_brp BRP BRP
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_ti0r TI0R TX mailbox identifier register
@{*/


#define CAN1_TI0R_STID_SHIFT		21
#define CAN1_TI0R_STID_MASK		0x7ff
/** @defgroup can1_ti0r_stid STID STID
@{*/
/**@}*/


#define CAN1_TI0R_EXID_SHIFT		3
#define CAN1_TI0R_EXID_MASK		0x3ffff
/** @defgroup can1_ti0r_exid EXID EXID
@{*/
/**@}*/

/** CAN1_TI0R_IDE IDE **/
#define CAN1_TI0R_IDE		(1 << 2)
/** CAN1_TI0R_RTR RTR **/
#define CAN1_TI0R_RTR		(1 << 1)
/** CAN1_TI0R_TXRQ TXRQ **/
#define CAN1_TI0R_TXRQ		(1 << 0)

/**@}*/

/** @defgroup can1_tdt0r TDT0R mailbox data length control and time stamp register
@{*/


#define CAN1_TDT0R_TIME_SHIFT		16
#define CAN1_TDT0R_TIME_MASK		0xffff
/** @defgroup can1_tdt0r_time TIME TIME
@{*/
/**@}*/

/** CAN1_TDT0R_TGT TGT **/
#define CAN1_TDT0R_TGT		(1 << 8)

#define CAN1_TDT0R_DLC_SHIFT		0
#define CAN1_TDT0R_DLC_MASK		0x0f
/** @defgroup can1_tdt0r_dlc DLC DLC
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_tdl0r TDL0R mailbox data low register
@{*/


#define CAN1_TDL0R_DATA3_SHIFT		24
#define CAN1_TDL0R_DATA3_MASK		0xff
/** @defgroup can1_tdl0r_data3 DATA3 DATA3
@{*/
/**@}*/


#define CAN1_TDL0R_DATA2_SHIFT		16
#define CAN1_TDL0R_DATA2_MASK		0xff
/** @defgroup can1_tdl0r_data2 DATA2 DATA2
@{*/
/**@}*/


#define CAN1_TDL0R_DATA1_SHIFT		8
#define CAN1_TDL0R_DATA1_MASK		0xff
/** @defgroup can1_tdl0r_data1 DATA1 DATA1
@{*/
/**@}*/


#define CAN1_TDL0R_DATA0_SHIFT		0
#define CAN1_TDL0R_DATA0_MASK		0xff
/** @defgroup can1_tdl0r_data0 DATA0 DATA0
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_tdh0r TDH0R mailbox data high register
@{*/


#define CAN1_TDH0R_DATA7_SHIFT		24
#define CAN1_TDH0R_DATA7_MASK		0xff
/** @defgroup can1_tdh0r_data7 DATA7 DATA7
@{*/
/**@}*/


#define CAN1_TDH0R_DATA6_SHIFT		16
#define CAN1_TDH0R_DATA6_MASK		0xff
/** @defgroup can1_tdh0r_data6 DATA6 DATA6
@{*/
/**@}*/


#define CAN1_TDH0R_DATA5_SHIFT		8
#define CAN1_TDH0R_DATA5_MASK		0xff
/** @defgroup can1_tdh0r_data5 DATA5 DATA5
@{*/
/**@}*/


#define CAN1_TDH0R_DATA4_SHIFT		0
#define CAN1_TDH0R_DATA4_MASK		0xff
/** @defgroup can1_tdh0r_data4 DATA4 DATA4
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_ti1r TI1R mailbox identifier register
@{*/


#define CAN1_TI1R_STID_SHIFT		21
#define CAN1_TI1R_STID_MASK		0x7ff
/** @defgroup can1_ti1r_stid STID STID
@{*/
/**@}*/


#define CAN1_TI1R_EXID_SHIFT		3
#define CAN1_TI1R_EXID_MASK		0x3ffff
/** @defgroup can1_ti1r_exid EXID EXID
@{*/
/**@}*/

/** CAN1_TI1R_IDE IDE **/
#define CAN1_TI1R_IDE		(1 << 2)
/** CAN1_TI1R_RTR RTR **/
#define CAN1_TI1R_RTR		(1 << 1)
/** CAN1_TI1R_TXRQ TXRQ **/
#define CAN1_TI1R_TXRQ		(1 << 0)

/**@}*/

/** @defgroup can1_tdt1r TDT1R mailbox data length control and time stamp register
@{*/


#define CAN1_TDT1R_TIME_SHIFT		16
#define CAN1_TDT1R_TIME_MASK		0xffff
/** @defgroup can1_tdt1r_time TIME TIME
@{*/
/**@}*/

/** CAN1_TDT1R_TGT TGT **/
#define CAN1_TDT1R_TGT		(1 << 8)

#define CAN1_TDT1R_DLC_SHIFT		0
#define CAN1_TDT1R_DLC_MASK		0x0f
/** @defgroup can1_tdt1r_dlc DLC DLC
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_tdl1r TDL1R mailbox data low register
@{*/


#define CAN1_TDL1R_DATA3_SHIFT		24
#define CAN1_TDL1R_DATA3_MASK		0xff
/** @defgroup can1_tdl1r_data3 DATA3 DATA3
@{*/
/**@}*/


#define CAN1_TDL1R_DATA2_SHIFT		16
#define CAN1_TDL1R_DATA2_MASK		0xff
/** @defgroup can1_tdl1r_data2 DATA2 DATA2
@{*/
/**@}*/


#define CAN1_TDL1R_DATA1_SHIFT		8
#define CAN1_TDL1R_DATA1_MASK		0xff
/** @defgroup can1_tdl1r_data1 DATA1 DATA1
@{*/
/**@}*/


#define CAN1_TDL1R_DATA0_SHIFT		0
#define CAN1_TDL1R_DATA0_MASK		0xff
/** @defgroup can1_tdl1r_data0 DATA0 DATA0
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_tdh1r TDH1R mailbox data high register
@{*/


#define CAN1_TDH1R_DATA7_SHIFT		24
#define CAN1_TDH1R_DATA7_MASK		0xff
/** @defgroup can1_tdh1r_data7 DATA7 DATA7
@{*/
/**@}*/


#define CAN1_TDH1R_DATA6_SHIFT		16
#define CAN1_TDH1R_DATA6_MASK		0xff
/** @defgroup can1_tdh1r_data6 DATA6 DATA6
@{*/
/**@}*/


#define CAN1_TDH1R_DATA5_SHIFT		8
#define CAN1_TDH1R_DATA5_MASK		0xff
/** @defgroup can1_tdh1r_data5 DATA5 DATA5
@{*/
/**@}*/


#define CAN1_TDH1R_DATA4_SHIFT		0
#define CAN1_TDH1R_DATA4_MASK		0xff
/** @defgroup can1_tdh1r_data4 DATA4 DATA4
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_ti2r TI2R mailbox identifier register
@{*/


#define CAN1_TI2R_STID_SHIFT		21
#define CAN1_TI2R_STID_MASK		0x7ff
/** @defgroup can1_ti2r_stid STID STID
@{*/
/**@}*/


#define CAN1_TI2R_EXID_SHIFT		3
#define CAN1_TI2R_EXID_MASK		0x3ffff
/** @defgroup can1_ti2r_exid EXID EXID
@{*/
/**@}*/

/** CAN1_TI2R_IDE IDE **/
#define CAN1_TI2R_IDE		(1 << 2)
/** CAN1_TI2R_RTR RTR **/
#define CAN1_TI2R_RTR		(1 << 1)
/** CAN1_TI2R_TXRQ TXRQ **/
#define CAN1_TI2R_TXRQ		(1 << 0)

/**@}*/

/** @defgroup can1_tdt2r TDT2R mailbox data length control and time stamp register
@{*/


#define CAN1_TDT2R_TIME_SHIFT		16
#define CAN1_TDT2R_TIME_MASK		0xffff
/** @defgroup can1_tdt2r_time TIME TIME
@{*/
/**@}*/

/** CAN1_TDT2R_TGT TGT **/
#define CAN1_TDT2R_TGT		(1 << 8)

#define CAN1_TDT2R_DLC_SHIFT		0
#define CAN1_TDT2R_DLC_MASK		0x0f
/** @defgroup can1_tdt2r_dlc DLC DLC
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_tdl2r TDL2R mailbox data low register
@{*/


#define CAN1_TDL2R_DATA3_SHIFT		24
#define CAN1_TDL2R_DATA3_MASK		0xff
/** @defgroup can1_tdl2r_data3 DATA3 DATA3
@{*/
/**@}*/


#define CAN1_TDL2R_DATA2_SHIFT		16
#define CAN1_TDL2R_DATA2_MASK		0xff
/** @defgroup can1_tdl2r_data2 DATA2 DATA2
@{*/
/**@}*/


#define CAN1_TDL2R_DATA1_SHIFT		8
#define CAN1_TDL2R_DATA1_MASK		0xff
/** @defgroup can1_tdl2r_data1 DATA1 DATA1
@{*/
/**@}*/


#define CAN1_TDL2R_DATA0_SHIFT		0
#define CAN1_TDL2R_DATA0_MASK		0xff
/** @defgroup can1_tdl2r_data0 DATA0 DATA0
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_tdh2r TDH2R mailbox data high register
@{*/


#define CAN1_TDH2R_DATA7_SHIFT		24
#define CAN1_TDH2R_DATA7_MASK		0xff
/** @defgroup can1_tdh2r_data7 DATA7 DATA7
@{*/
/**@}*/


#define CAN1_TDH2R_DATA6_SHIFT		16
#define CAN1_TDH2R_DATA6_MASK		0xff
/** @defgroup can1_tdh2r_data6 DATA6 DATA6
@{*/
/**@}*/


#define CAN1_TDH2R_DATA5_SHIFT		8
#define CAN1_TDH2R_DATA5_MASK		0xff
/** @defgroup can1_tdh2r_data5 DATA5 DATA5
@{*/
/**@}*/


#define CAN1_TDH2R_DATA4_SHIFT		0
#define CAN1_TDH2R_DATA4_MASK		0xff
/** @defgroup can1_tdh2r_data4 DATA4 DATA4
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_ri0r RI0R receive FIFO mailbox identifier register
@{*/


#define CAN1_RI0R_STID_SHIFT		21
#define CAN1_RI0R_STID_MASK		0x7ff
/** @defgroup can1_ri0r_stid STID STID
@{*/
/**@}*/


#define CAN1_RI0R_EXID_SHIFT		3
#define CAN1_RI0R_EXID_MASK		0x3ffff
/** @defgroup can1_ri0r_exid EXID EXID
@{*/
/**@}*/

/** CAN1_RI0R_IDE IDE **/
#define CAN1_RI0R_IDE		(1 << 2)
/** CAN1_RI0R_RTR RTR **/
#define CAN1_RI0R_RTR		(1 << 1)

/**@}*/

/** @defgroup can1_rdt0r RDT0R mailbox data high register
@{*/


#define CAN1_RDT0R_TIME_SHIFT		16
#define CAN1_RDT0R_TIME_MASK		0xffff
/** @defgroup can1_rdt0r_time TIME TIME
@{*/
/**@}*/


#define CAN1_RDT0R_FMI_SHIFT		8
#define CAN1_RDT0R_FMI_MASK		0xff
/** @defgroup can1_rdt0r_fmi FMI FMI
@{*/
/**@}*/


#define CAN1_RDT0R_DLC_SHIFT		0
#define CAN1_RDT0R_DLC_MASK		0x0f
/** @defgroup can1_rdt0r_dlc DLC DLC
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_rdl0r RDL0R mailbox data high register
@{*/


#define CAN1_RDL0R_DATA3_SHIFT		24
#define CAN1_RDL0R_DATA3_MASK		0xff
/** @defgroup can1_rdl0r_data3 DATA3 DATA3
@{*/
/**@}*/


#define CAN1_RDL0R_DATA2_SHIFT		16
#define CAN1_RDL0R_DATA2_MASK		0xff
/** @defgroup can1_rdl0r_data2 DATA2 DATA2
@{*/
/**@}*/


#define CAN1_RDL0R_DATA1_SHIFT		8
#define CAN1_RDL0R_DATA1_MASK		0xff
/** @defgroup can1_rdl0r_data1 DATA1 DATA1
@{*/
/**@}*/


#define CAN1_RDL0R_DATA0_SHIFT		0
#define CAN1_RDL0R_DATA0_MASK		0xff
/** @defgroup can1_rdl0r_data0 DATA0 DATA0
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_rdh0r RDH0R receive FIFO mailbox data high register
@{*/


#define CAN1_RDH0R_DATA7_SHIFT		24
#define CAN1_RDH0R_DATA7_MASK		0xff
/** @defgroup can1_rdh0r_data7 DATA7 DATA7
@{*/
/**@}*/


#define CAN1_RDH0R_DATA6_SHIFT		16
#define CAN1_RDH0R_DATA6_MASK		0xff
/** @defgroup can1_rdh0r_data6 DATA6 DATA6
@{*/
/**@}*/


#define CAN1_RDH0R_DATA5_SHIFT		8
#define CAN1_RDH0R_DATA5_MASK		0xff
/** @defgroup can1_rdh0r_data5 DATA5 DATA5
@{*/
/**@}*/


#define CAN1_RDH0R_DATA4_SHIFT		0
#define CAN1_RDH0R_DATA4_MASK		0xff
/** @defgroup can1_rdh0r_data4 DATA4 DATA4
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_ri1r RI1R mailbox data high register
@{*/


#define CAN1_RI1R_STID_SHIFT		21
#define CAN1_RI1R_STID_MASK		0x7ff
/** @defgroup can1_ri1r_stid STID STID
@{*/
/**@}*/


#define CAN1_RI1R_EXID_SHIFT		3
#define CAN1_RI1R_EXID_MASK		0x3ffff
/** @defgroup can1_ri1r_exid EXID EXID
@{*/
/**@}*/

/** CAN1_RI1R_IDE IDE **/
#define CAN1_RI1R_IDE		(1 << 2)
/** CAN1_RI1R_RTR RTR **/
#define CAN1_RI1R_RTR		(1 << 1)

/**@}*/

/** @defgroup can1_rdt1r RDT1R mailbox data high register
@{*/


#define CAN1_RDT1R_TIME_SHIFT		16
#define CAN1_RDT1R_TIME_MASK		0xffff
/** @defgroup can1_rdt1r_time TIME TIME
@{*/
/**@}*/


#define CAN1_RDT1R_FMI_SHIFT		8
#define CAN1_RDT1R_FMI_MASK		0xff
/** @defgroup can1_rdt1r_fmi FMI FMI
@{*/
/**@}*/


#define CAN1_RDT1R_DLC_SHIFT		0
#define CAN1_RDT1R_DLC_MASK		0x0f
/** @defgroup can1_rdt1r_dlc DLC DLC
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_rdl1r RDL1R mailbox data high register
@{*/


#define CAN1_RDL1R_DATA3_SHIFT		24
#define CAN1_RDL1R_DATA3_MASK		0xff
/** @defgroup can1_rdl1r_data3 DATA3 DATA3
@{*/
/**@}*/


#define CAN1_RDL1R_DATA2_SHIFT		16
#define CAN1_RDL1R_DATA2_MASK		0xff
/** @defgroup can1_rdl1r_data2 DATA2 DATA2
@{*/
/**@}*/


#define CAN1_RDL1R_DATA1_SHIFT		8
#define CAN1_RDL1R_DATA1_MASK		0xff
/** @defgroup can1_rdl1r_data1 DATA1 DATA1
@{*/
/**@}*/


#define CAN1_RDL1R_DATA0_SHIFT		0
#define CAN1_RDL1R_DATA0_MASK		0xff
/** @defgroup can1_rdl1r_data0 DATA0 DATA0
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_rdh1r RDH1R mailbox data high register
@{*/


#define CAN1_RDH1R_DATA7_SHIFT		24
#define CAN1_RDH1R_DATA7_MASK		0xff
/** @defgroup can1_rdh1r_data7 DATA7 DATA7
@{*/
/**@}*/


#define CAN1_RDH1R_DATA6_SHIFT		16
#define CAN1_RDH1R_DATA6_MASK		0xff
/** @defgroup can1_rdh1r_data6 DATA6 DATA6
@{*/
/**@}*/


#define CAN1_RDH1R_DATA5_SHIFT		8
#define CAN1_RDH1R_DATA5_MASK		0xff
/** @defgroup can1_rdh1r_data5 DATA5 DATA5
@{*/
/**@}*/


#define CAN1_RDH1R_DATA4_SHIFT		0
#define CAN1_RDH1R_DATA4_MASK		0xff
/** @defgroup can1_rdh1r_data4 DATA4 DATA4
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_fmr FMR filter master register
@{*/


#define CAN1_FMR_CAN2SB_SHIFT		8
#define CAN1_FMR_CAN2SB_MASK		0x3f
/** @defgroup can1_fmr_can2sb CAN2SB CAN2SB
@{*/
/**@}*/

/** CAN1_FMR_FINIT FINIT **/
#define CAN1_FMR_FINIT		(1 << 0)

/**@}*/

/** @defgroup can1_fm1r FM1R filter mode register
@{*/

/** CAN1_FM1R_FBM27 Filter mode **/
#define CAN1_FM1R_FBM27		(1 << 27)
/** CAN1_FM1R_FBM26 Filter mode **/
#define CAN1_FM1R_FBM26		(1 << 26)
/** CAN1_FM1R_FBM25 Filter mode **/
#define CAN1_FM1R_FBM25		(1 << 25)
/** CAN1_FM1R_FBM24 Filter mode **/
#define CAN1_FM1R_FBM24		(1 << 24)
/** CAN1_FM1R_FBM23 Filter mode **/
#define CAN1_FM1R_FBM23		(1 << 23)
/** CAN1_FM1R_FBM22 Filter mode **/
#define CAN1_FM1R_FBM22		(1 << 22)
/** CAN1_FM1R_FBM21 Filter mode **/
#define CAN1_FM1R_FBM21		(1 << 21)
/** CAN1_FM1R_FBM20 Filter mode **/
#define CAN1_FM1R_FBM20		(1 << 20)
/** CAN1_FM1R_FBM19 Filter mode **/
#define CAN1_FM1R_FBM19		(1 << 19)
/** CAN1_FM1R_FBM18 Filter mode **/
#define CAN1_FM1R_FBM18		(1 << 18)
/** CAN1_FM1R_FBM17 Filter mode **/
#define CAN1_FM1R_FBM17		(1 << 17)
/** CAN1_FM1R_FBM16 Filter mode **/
#define CAN1_FM1R_FBM16		(1 << 16)
/** CAN1_FM1R_FBM15 Filter mode **/
#define CAN1_FM1R_FBM15		(1 << 15)
/** CAN1_FM1R_FBM14 Filter mode **/
#define CAN1_FM1R_FBM14		(1 << 14)
/** CAN1_FM1R_FBM13 Filter mode **/
#define CAN1_FM1R_FBM13		(1 << 13)
/** CAN1_FM1R_FBM12 Filter mode **/
#define CAN1_FM1R_FBM12		(1 << 12)
/** CAN1_FM1R_FBM11 Filter mode **/
#define CAN1_FM1R_FBM11		(1 << 11)
/** CAN1_FM1R_FBM10 Filter mode **/
#define CAN1_FM1R_FBM10		(1 << 10)
/** CAN1_FM1R_FBM9 Filter mode **/
#define CAN1_FM1R_FBM9		(1 << 9)
/** CAN1_FM1R_FBM8 Filter mode **/
#define CAN1_FM1R_FBM8		(1 << 8)
/** CAN1_FM1R_FBM7 Filter mode **/
#define CAN1_FM1R_FBM7		(1 << 7)
/** CAN1_FM1R_FBM6 Filter mode **/
#define CAN1_FM1R_FBM6		(1 << 6)
/** CAN1_FM1R_FBM5 Filter mode **/
#define CAN1_FM1R_FBM5		(1 << 5)
/** CAN1_FM1R_FBM4 Filter mode **/
#define CAN1_FM1R_FBM4		(1 << 4)
/** CAN1_FM1R_FBM3 Filter mode **/
#define CAN1_FM1R_FBM3		(1 << 3)
/** CAN1_FM1R_FBM2 Filter mode **/
#define CAN1_FM1R_FBM2		(1 << 2)
/** CAN1_FM1R_FBM1 Filter mode **/
#define CAN1_FM1R_FBM1		(1 << 1)
/** CAN1_FM1R_FBM0 Filter mode **/
#define CAN1_FM1R_FBM0		(1 << 0)

/**@}*/

/** @defgroup can1_fs1r FS1R filter scale register
@{*/

/** CAN1_FS1R_FSC27 Filter scale configuration **/
#define CAN1_FS1R_FSC27		(1 << 27)
/** CAN1_FS1R_FSC26 Filter scale configuration **/
#define CAN1_FS1R_FSC26		(1 << 26)
/** CAN1_FS1R_FSC25 Filter scale configuration **/
#define CAN1_FS1R_FSC25		(1 << 25)
/** CAN1_FS1R_FSC24 Filter scale configuration **/
#define CAN1_FS1R_FSC24		(1 << 24)
/** CAN1_FS1R_FSC23 Filter scale configuration **/
#define CAN1_FS1R_FSC23		(1 << 23)
/** CAN1_FS1R_FSC22 Filter scale configuration **/
#define CAN1_FS1R_FSC22		(1 << 22)
/** CAN1_FS1R_FSC21 Filter scale configuration **/
#define CAN1_FS1R_FSC21		(1 << 21)
/** CAN1_FS1R_FSC20 Filter scale configuration **/
#define CAN1_FS1R_FSC20		(1 << 20)
/** CAN1_FS1R_FSC19 Filter scale configuration **/
#define CAN1_FS1R_FSC19		(1 << 19)
/** CAN1_FS1R_FSC18 Filter scale configuration **/
#define CAN1_FS1R_FSC18		(1 << 18)
/** CAN1_FS1R_FSC17 Filter scale configuration **/
#define CAN1_FS1R_FSC17		(1 << 17)
/** CAN1_FS1R_FSC16 Filter scale configuration **/
#define CAN1_FS1R_FSC16		(1 << 16)
/** CAN1_FS1R_FSC15 Filter scale configuration **/
#define CAN1_FS1R_FSC15		(1 << 15)
/** CAN1_FS1R_FSC14 Filter scale configuration **/
#define CAN1_FS1R_FSC14		(1 << 14)
/** CAN1_FS1R_FSC13 Filter scale configuration **/
#define CAN1_FS1R_FSC13		(1 << 13)
/** CAN1_FS1R_FSC12 Filter scale configuration **/
#define CAN1_FS1R_FSC12		(1 << 12)
/** CAN1_FS1R_FSC11 Filter scale configuration **/
#define CAN1_FS1R_FSC11		(1 << 11)
/** CAN1_FS1R_FSC10 Filter scale configuration **/
#define CAN1_FS1R_FSC10		(1 << 10)
/** CAN1_FS1R_FSC9 Filter scale configuration **/
#define CAN1_FS1R_FSC9		(1 << 9)
/** CAN1_FS1R_FSC8 Filter scale configuration **/
#define CAN1_FS1R_FSC8		(1 << 8)
/** CAN1_FS1R_FSC7 Filter scale configuration **/
#define CAN1_FS1R_FSC7		(1 << 7)
/** CAN1_FS1R_FSC6 Filter scale configuration **/
#define CAN1_FS1R_FSC6		(1 << 6)
/** CAN1_FS1R_FSC5 Filter scale configuration **/
#define CAN1_FS1R_FSC5		(1 << 5)
/** CAN1_FS1R_FSC4 Filter scale configuration **/
#define CAN1_FS1R_FSC4		(1 << 4)
/** CAN1_FS1R_FSC3 Filter scale configuration **/
#define CAN1_FS1R_FSC3		(1 << 3)
/** CAN1_FS1R_FSC2 Filter scale configuration **/
#define CAN1_FS1R_FSC2		(1 << 2)
/** CAN1_FS1R_FSC1 Filter scale configuration **/
#define CAN1_FS1R_FSC1		(1 << 1)
/** CAN1_FS1R_FSC0 Filter scale configuration **/
#define CAN1_FS1R_FSC0		(1 << 0)

/**@}*/

/** @defgroup can1_ffa1r FFA1R filter FIFO assignment register
@{*/

/** CAN1_FFA1R_FFA27 Filter FIFO assignment for filter 27 **/
#define CAN1_FFA1R_FFA27		(1 << 27)
/** CAN1_FFA1R_FFA26 Filter FIFO assignment for filter 26 **/
#define CAN1_FFA1R_FFA26		(1 << 26)
/** CAN1_FFA1R_FFA25 Filter FIFO assignment for filter 25 **/
#define CAN1_FFA1R_FFA25		(1 << 25)
/** CAN1_FFA1R_FFA24 Filter FIFO assignment for filter 24 **/
#define CAN1_FFA1R_FFA24		(1 << 24)
/** CAN1_FFA1R_FFA23 Filter FIFO assignment for filter 23 **/
#define CAN1_FFA1R_FFA23		(1 << 23)
/** CAN1_FFA1R_FFA22 Filter FIFO assignment for filter 22 **/
#define CAN1_FFA1R_FFA22		(1 << 22)
/** CAN1_FFA1R_FFA21 Filter FIFO assignment for filter 21 **/
#define CAN1_FFA1R_FFA21		(1 << 21)
/** CAN1_FFA1R_FFA20 Filter FIFO assignment for filter 20 **/
#define CAN1_FFA1R_FFA20		(1 << 20)
/** CAN1_FFA1R_FFA19 Filter FIFO assignment for filter 19 **/
#define CAN1_FFA1R_FFA19		(1 << 19)
/** CAN1_FFA1R_FFA18 Filter FIFO assignment for filter 18 **/
#define CAN1_FFA1R_FFA18		(1 << 18)
/** CAN1_FFA1R_FFA17 Filter FIFO assignment for filter 17 **/
#define CAN1_FFA1R_FFA17		(1 << 17)
/** CAN1_FFA1R_FFA16 Filter FIFO assignment for filter 16 **/
#define CAN1_FFA1R_FFA16		(1 << 16)
/** CAN1_FFA1R_FFA15 Filter FIFO assignment for filter 15 **/
#define CAN1_FFA1R_FFA15		(1 << 15)
/** CAN1_FFA1R_FFA14 Filter FIFO assignment for filter 14 **/
#define CAN1_FFA1R_FFA14		(1 << 14)
/** CAN1_FFA1R_FFA13 Filter FIFO assignment for filter 13 **/
#define CAN1_FFA1R_FFA13		(1 << 13)
/** CAN1_FFA1R_FFA12 Filter FIFO assignment for filter 12 **/
#define CAN1_FFA1R_FFA12		(1 << 12)
/** CAN1_FFA1R_FFA11 Filter FIFO assignment for filter 11 **/
#define CAN1_FFA1R_FFA11		(1 << 11)
/** CAN1_FFA1R_FFA10 Filter FIFO assignment for filter 10 **/
#define CAN1_FFA1R_FFA10		(1 << 10)
/** CAN1_FFA1R_FFA9 Filter FIFO assignment for filter 9 **/
#define CAN1_FFA1R_FFA9		(1 << 9)
/** CAN1_FFA1R_FFA8 Filter FIFO assignment for filter 8 **/
#define CAN1_FFA1R_FFA8		(1 << 8)
/** CAN1_FFA1R_FFA7 Filter FIFO assignment for filter 7 **/
#define CAN1_FFA1R_FFA7		(1 << 7)
/** CAN1_FFA1R_FFA6 Filter FIFO assignment for filter 6 **/
#define CAN1_FFA1R_FFA6		(1 << 6)
/** CAN1_FFA1R_FFA5 Filter FIFO assignment for filter 5 **/
#define CAN1_FFA1R_FFA5		(1 << 5)
/** CAN1_FFA1R_FFA4 Filter FIFO assignment for filter 4 **/
#define CAN1_FFA1R_FFA4		(1 << 4)
/** CAN1_FFA1R_FFA3 Filter FIFO assignment for filter 3 **/
#define CAN1_FFA1R_FFA3		(1 << 3)
/** CAN1_FFA1R_FFA2 Filter FIFO assignment for filter 2 **/
#define CAN1_FFA1R_FFA2		(1 << 2)
/** CAN1_FFA1R_FFA1 Filter FIFO assignment for filter 1 **/
#define CAN1_FFA1R_FFA1		(1 << 1)
/** CAN1_FFA1R_FFA0 Filter FIFO assignment for filter 0 **/
#define CAN1_FFA1R_FFA0		(1 << 0)

/**@}*/

/** @defgroup can1_fa1r FA1R filter activation register
@{*/

/** CAN1_FA1R_FACT27 Filter active **/
#define CAN1_FA1R_FACT27		(1 << 27)
/** CAN1_FA1R_FACT26 Filter active **/
#define CAN1_FA1R_FACT26		(1 << 26)
/** CAN1_FA1R_FACT25 Filter active **/
#define CAN1_FA1R_FACT25		(1 << 25)
/** CAN1_FA1R_FACT24 Filter active **/
#define CAN1_FA1R_FACT24		(1 << 24)
/** CAN1_FA1R_FACT23 Filter active **/
#define CAN1_FA1R_FACT23		(1 << 23)
/** CAN1_FA1R_FACT22 Filter active **/
#define CAN1_FA1R_FACT22		(1 << 22)
/** CAN1_FA1R_FACT21 Filter active **/
#define CAN1_FA1R_FACT21		(1 << 21)
/** CAN1_FA1R_FACT20 Filter active **/
#define CAN1_FA1R_FACT20		(1 << 20)
/** CAN1_FA1R_FACT19 Filter active **/
#define CAN1_FA1R_FACT19		(1 << 19)
/** CAN1_FA1R_FACT18 Filter active **/
#define CAN1_FA1R_FACT18		(1 << 18)
/** CAN1_FA1R_FACT17 Filter active **/
#define CAN1_FA1R_FACT17		(1 << 17)
/** CAN1_FA1R_FACT16 Filter active **/
#define CAN1_FA1R_FACT16		(1 << 16)
/** CAN1_FA1R_FACT15 Filter active **/
#define CAN1_FA1R_FACT15		(1 << 15)
/** CAN1_FA1R_FACT14 Filter active **/
#define CAN1_FA1R_FACT14		(1 << 14)
/** CAN1_FA1R_FACT13 Filter active **/
#define CAN1_FA1R_FACT13		(1 << 13)
/** CAN1_FA1R_FACT12 Filter active **/
#define CAN1_FA1R_FACT12		(1 << 12)
/** CAN1_FA1R_FACT11 Filter active **/
#define CAN1_FA1R_FACT11		(1 << 11)
/** CAN1_FA1R_FACT10 Filter active **/
#define CAN1_FA1R_FACT10		(1 << 10)
/** CAN1_FA1R_FACT9 Filter active **/
#define CAN1_FA1R_FACT9		(1 << 9)
/** CAN1_FA1R_FACT8 Filter active **/
#define CAN1_FA1R_FACT8		(1 << 8)
/** CAN1_FA1R_FACT7 Filter active **/
#define CAN1_FA1R_FACT7		(1 << 7)
/** CAN1_FA1R_FACT6 Filter active **/
#define CAN1_FA1R_FACT6		(1 << 6)
/** CAN1_FA1R_FACT5 Filter active **/
#define CAN1_FA1R_FACT5		(1 << 5)
/** CAN1_FA1R_FACT4 Filter active **/
#define CAN1_FA1R_FACT4		(1 << 4)
/** CAN1_FA1R_FACT3 Filter active **/
#define CAN1_FA1R_FACT3		(1 << 3)
/** CAN1_FA1R_FACT2 Filter active **/
#define CAN1_FA1R_FACT2		(1 << 2)
/** CAN1_FA1R_FACT1 Filter active **/
#define CAN1_FA1R_FACT1		(1 << 1)
/** CAN1_FA1R_FACT0 Filter active **/
#define CAN1_FA1R_FACT0		(1 << 0)

/**@}*/

/** @defgroup can1_f0r1 F0R1 Filter bank 0 register 1
@{*/

/** CAN1_F0R1_FB31 Filter bits **/
#define CAN1_F0R1_FB31		(1 << 31)
/** CAN1_F0R1_FB30 Filter bits **/
#define CAN1_F0R1_FB30		(1 << 30)
/** CAN1_F0R1_FB29 Filter bits **/
#define CAN1_F0R1_FB29		(1 << 29)
/** CAN1_F0R1_FB28 Filter bits **/
#define CAN1_F0R1_FB28		(1 << 28)
/** CAN1_F0R1_FB27 Filter bits **/
#define CAN1_F0R1_FB27		(1 << 27)
/** CAN1_F0R1_FB26 Filter bits **/
#define CAN1_F0R1_FB26		(1 << 26)
/** CAN1_F0R1_FB25 Filter bits **/
#define CAN1_F0R1_FB25		(1 << 25)
/** CAN1_F0R1_FB24 Filter bits **/
#define CAN1_F0R1_FB24		(1 << 24)
/** CAN1_F0R1_FB23 Filter bits **/
#define CAN1_F0R1_FB23		(1 << 23)
/** CAN1_F0R1_FB22 Filter bits **/
#define CAN1_F0R1_FB22		(1 << 22)
/** CAN1_F0R1_FB21 Filter bits **/
#define CAN1_F0R1_FB21		(1 << 21)
/** CAN1_F0R1_FB20 Filter bits **/
#define CAN1_F0R1_FB20		(1 << 20)
/** CAN1_F0R1_FB19 Filter bits **/
#define CAN1_F0R1_FB19		(1 << 19)
/** CAN1_F0R1_FB18 Filter bits **/
#define CAN1_F0R1_FB18		(1 << 18)
/** CAN1_F0R1_FB17 Filter bits **/
#define CAN1_F0R1_FB17		(1 << 17)
/** CAN1_F0R1_FB16 Filter bits **/
#define CAN1_F0R1_FB16		(1 << 16)
/** CAN1_F0R1_FB15 Filter bits **/
#define CAN1_F0R1_FB15		(1 << 15)
/** CAN1_F0R1_FB14 Filter bits **/
#define CAN1_F0R1_FB14		(1 << 14)
/** CAN1_F0R1_FB13 Filter bits **/
#define CAN1_F0R1_FB13		(1 << 13)
/** CAN1_F0R1_FB12 Filter bits **/
#define CAN1_F0R1_FB12		(1 << 12)
/** CAN1_F0R1_FB11 Filter bits **/
#define CAN1_F0R1_FB11		(1 << 11)
/** CAN1_F0R1_FB10 Filter bits **/
#define CAN1_F0R1_FB10		(1 << 10)
/** CAN1_F0R1_FB9 Filter bits **/
#define CAN1_F0R1_FB9		(1 << 9)
/** CAN1_F0R1_FB8 Filter bits **/
#define CAN1_F0R1_FB8		(1 << 8)
/** CAN1_F0R1_FB7 Filter bits **/
#define CAN1_F0R1_FB7		(1 << 7)
/** CAN1_F0R1_FB6 Filter bits **/
#define CAN1_F0R1_FB6		(1 << 6)
/** CAN1_F0R1_FB5 Filter bits **/
#define CAN1_F0R1_FB5		(1 << 5)
/** CAN1_F0R1_FB4 Filter bits **/
#define CAN1_F0R1_FB4		(1 << 4)
/** CAN1_F0R1_FB3 Filter bits **/
#define CAN1_F0R1_FB3		(1 << 3)
/** CAN1_F0R1_FB2 Filter bits **/
#define CAN1_F0R1_FB2		(1 << 2)
/** CAN1_F0R1_FB1 Filter bits **/
#define CAN1_F0R1_FB1		(1 << 1)
/** CAN1_F0R1_FB0 Filter bits **/
#define CAN1_F0R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f0r2 F0R2 Filter bank 0 register 2
@{*/

/** CAN1_F0R2_FB31 Filter bits **/
#define CAN1_F0R2_FB31		(1 << 31)
/** CAN1_F0R2_FB30 Filter bits **/
#define CAN1_F0R2_FB30		(1 << 30)
/** CAN1_F0R2_FB29 Filter bits **/
#define CAN1_F0R2_FB29		(1 << 29)
/** CAN1_F0R2_FB28 Filter bits **/
#define CAN1_F0R2_FB28		(1 << 28)
/** CAN1_F0R2_FB27 Filter bits **/
#define CAN1_F0R2_FB27		(1 << 27)
/** CAN1_F0R2_FB26 Filter bits **/
#define CAN1_F0R2_FB26		(1 << 26)
/** CAN1_F0R2_FB25 Filter bits **/
#define CAN1_F0R2_FB25		(1 << 25)
/** CAN1_F0R2_FB24 Filter bits **/
#define CAN1_F0R2_FB24		(1 << 24)
/** CAN1_F0R2_FB23 Filter bits **/
#define CAN1_F0R2_FB23		(1 << 23)
/** CAN1_F0R2_FB22 Filter bits **/
#define CAN1_F0R2_FB22		(1 << 22)
/** CAN1_F0R2_FB21 Filter bits **/
#define CAN1_F0R2_FB21		(1 << 21)
/** CAN1_F0R2_FB20 Filter bits **/
#define CAN1_F0R2_FB20		(1 << 20)
/** CAN1_F0R2_FB19 Filter bits **/
#define CAN1_F0R2_FB19		(1 << 19)
/** CAN1_F0R2_FB18 Filter bits **/
#define CAN1_F0R2_FB18		(1 << 18)
/** CAN1_F0R2_FB17 Filter bits **/
#define CAN1_F0R2_FB17		(1 << 17)
/** CAN1_F0R2_FB16 Filter bits **/
#define CAN1_F0R2_FB16		(1 << 16)
/** CAN1_F0R2_FB15 Filter bits **/
#define CAN1_F0R2_FB15		(1 << 15)
/** CAN1_F0R2_FB14 Filter bits **/
#define CAN1_F0R2_FB14		(1 << 14)
/** CAN1_F0R2_FB13 Filter bits **/
#define CAN1_F0R2_FB13		(1 << 13)
/** CAN1_F0R2_FB12 Filter bits **/
#define CAN1_F0R2_FB12		(1 << 12)
/** CAN1_F0R2_FB11 Filter bits **/
#define CAN1_F0R2_FB11		(1 << 11)
/** CAN1_F0R2_FB10 Filter bits **/
#define CAN1_F0R2_FB10		(1 << 10)
/** CAN1_F0R2_FB9 Filter bits **/
#define CAN1_F0R2_FB9		(1 << 9)
/** CAN1_F0R2_FB8 Filter bits **/
#define CAN1_F0R2_FB8		(1 << 8)
/** CAN1_F0R2_FB7 Filter bits **/
#define CAN1_F0R2_FB7		(1 << 7)
/** CAN1_F0R2_FB6 Filter bits **/
#define CAN1_F0R2_FB6		(1 << 6)
/** CAN1_F0R2_FB5 Filter bits **/
#define CAN1_F0R2_FB5		(1 << 5)
/** CAN1_F0R2_FB4 Filter bits **/
#define CAN1_F0R2_FB4		(1 << 4)
/** CAN1_F0R2_FB3 Filter bits **/
#define CAN1_F0R2_FB3		(1 << 3)
/** CAN1_F0R2_FB2 Filter bits **/
#define CAN1_F0R2_FB2		(1 << 2)
/** CAN1_F0R2_FB1 Filter bits **/
#define CAN1_F0R2_FB1		(1 << 1)
/** CAN1_F0R2_FB0 Filter bits **/
#define CAN1_F0R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f1r1 F1R1 Filter bank 1 register 1
@{*/

/** CAN1_F1R1_FB31 Filter bits **/
#define CAN1_F1R1_FB31		(1 << 31)
/** CAN1_F1R1_FB30 Filter bits **/
#define CAN1_F1R1_FB30		(1 << 30)
/** CAN1_F1R1_FB29 Filter bits **/
#define CAN1_F1R1_FB29		(1 << 29)
/** CAN1_F1R1_FB28 Filter bits **/
#define CAN1_F1R1_FB28		(1 << 28)
/** CAN1_F1R1_FB27 Filter bits **/
#define CAN1_F1R1_FB27		(1 << 27)
/** CAN1_F1R1_FB26 Filter bits **/
#define CAN1_F1R1_FB26		(1 << 26)
/** CAN1_F1R1_FB25 Filter bits **/
#define CAN1_F1R1_FB25		(1 << 25)
/** CAN1_F1R1_FB24 Filter bits **/
#define CAN1_F1R1_FB24		(1 << 24)
/** CAN1_F1R1_FB23 Filter bits **/
#define CAN1_F1R1_FB23		(1 << 23)
/** CAN1_F1R1_FB22 Filter bits **/
#define CAN1_F1R1_FB22		(1 << 22)
/** CAN1_F1R1_FB21 Filter bits **/
#define CAN1_F1R1_FB21		(1 << 21)
/** CAN1_F1R1_FB20 Filter bits **/
#define CAN1_F1R1_FB20		(1 << 20)
/** CAN1_F1R1_FB19 Filter bits **/
#define CAN1_F1R1_FB19		(1 << 19)
/** CAN1_F1R1_FB18 Filter bits **/
#define CAN1_F1R1_FB18		(1 << 18)
/** CAN1_F1R1_FB17 Filter bits **/
#define CAN1_F1R1_FB17		(1 << 17)
/** CAN1_F1R1_FB16 Filter bits **/
#define CAN1_F1R1_FB16		(1 << 16)
/** CAN1_F1R1_FB15 Filter bits **/
#define CAN1_F1R1_FB15		(1 << 15)
/** CAN1_F1R1_FB14 Filter bits **/
#define CAN1_F1R1_FB14		(1 << 14)
/** CAN1_F1R1_FB13 Filter bits **/
#define CAN1_F1R1_FB13		(1 << 13)
/** CAN1_F1R1_FB12 Filter bits **/
#define CAN1_F1R1_FB12		(1 << 12)
/** CAN1_F1R1_FB11 Filter bits **/
#define CAN1_F1R1_FB11		(1 << 11)
/** CAN1_F1R1_FB10 Filter bits **/
#define CAN1_F1R1_FB10		(1 << 10)
/** CAN1_F1R1_FB9 Filter bits **/
#define CAN1_F1R1_FB9		(1 << 9)
/** CAN1_F1R1_FB8 Filter bits **/
#define CAN1_F1R1_FB8		(1 << 8)
/** CAN1_F1R1_FB7 Filter bits **/
#define CAN1_F1R1_FB7		(1 << 7)
/** CAN1_F1R1_FB6 Filter bits **/
#define CAN1_F1R1_FB6		(1 << 6)
/** CAN1_F1R1_FB5 Filter bits **/
#define CAN1_F1R1_FB5		(1 << 5)
/** CAN1_F1R1_FB4 Filter bits **/
#define CAN1_F1R1_FB4		(1 << 4)
/** CAN1_F1R1_FB3 Filter bits **/
#define CAN1_F1R1_FB3		(1 << 3)
/** CAN1_F1R1_FB2 Filter bits **/
#define CAN1_F1R1_FB2		(1 << 2)
/** CAN1_F1R1_FB1 Filter bits **/
#define CAN1_F1R1_FB1		(1 << 1)
/** CAN1_F1R1_FB0 Filter bits **/
#define CAN1_F1R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f1r2 F1R2 Filter bank 1 register 2
@{*/

/** CAN1_F1R2_FB31 Filter bits **/
#define CAN1_F1R2_FB31		(1 << 31)
/** CAN1_F1R2_FB30 Filter bits **/
#define CAN1_F1R2_FB30		(1 << 30)
/** CAN1_F1R2_FB29 Filter bits **/
#define CAN1_F1R2_FB29		(1 << 29)
/** CAN1_F1R2_FB28 Filter bits **/
#define CAN1_F1R2_FB28		(1 << 28)
/** CAN1_F1R2_FB27 Filter bits **/
#define CAN1_F1R2_FB27		(1 << 27)
/** CAN1_F1R2_FB26 Filter bits **/
#define CAN1_F1R2_FB26		(1 << 26)
/** CAN1_F1R2_FB25 Filter bits **/
#define CAN1_F1R2_FB25		(1 << 25)
/** CAN1_F1R2_FB24 Filter bits **/
#define CAN1_F1R2_FB24		(1 << 24)
/** CAN1_F1R2_FB23 Filter bits **/
#define CAN1_F1R2_FB23		(1 << 23)
/** CAN1_F1R2_FB22 Filter bits **/
#define CAN1_F1R2_FB22		(1 << 22)
/** CAN1_F1R2_FB21 Filter bits **/
#define CAN1_F1R2_FB21		(1 << 21)
/** CAN1_F1R2_FB20 Filter bits **/
#define CAN1_F1R2_FB20		(1 << 20)
/** CAN1_F1R2_FB19 Filter bits **/
#define CAN1_F1R2_FB19		(1 << 19)
/** CAN1_F1R2_FB18 Filter bits **/
#define CAN1_F1R2_FB18		(1 << 18)
/** CAN1_F1R2_FB17 Filter bits **/
#define CAN1_F1R2_FB17		(1 << 17)
/** CAN1_F1R2_FB16 Filter bits **/
#define CAN1_F1R2_FB16		(1 << 16)
/** CAN1_F1R2_FB15 Filter bits **/
#define CAN1_F1R2_FB15		(1 << 15)
/** CAN1_F1R2_FB14 Filter bits **/
#define CAN1_F1R2_FB14		(1 << 14)
/** CAN1_F1R2_FB13 Filter bits **/
#define CAN1_F1R2_FB13		(1 << 13)
/** CAN1_F1R2_FB12 Filter bits **/
#define CAN1_F1R2_FB12		(1 << 12)
/** CAN1_F1R2_FB11 Filter bits **/
#define CAN1_F1R2_FB11		(1 << 11)
/** CAN1_F1R2_FB10 Filter bits **/
#define CAN1_F1R2_FB10		(1 << 10)
/** CAN1_F1R2_FB9 Filter bits **/
#define CAN1_F1R2_FB9		(1 << 9)
/** CAN1_F1R2_FB8 Filter bits **/
#define CAN1_F1R2_FB8		(1 << 8)
/** CAN1_F1R2_FB7 Filter bits **/
#define CAN1_F1R2_FB7		(1 << 7)
/** CAN1_F1R2_FB6 Filter bits **/
#define CAN1_F1R2_FB6		(1 << 6)
/** CAN1_F1R2_FB5 Filter bits **/
#define CAN1_F1R2_FB5		(1 << 5)
/** CAN1_F1R2_FB4 Filter bits **/
#define CAN1_F1R2_FB4		(1 << 4)
/** CAN1_F1R2_FB3 Filter bits **/
#define CAN1_F1R2_FB3		(1 << 3)
/** CAN1_F1R2_FB2 Filter bits **/
#define CAN1_F1R2_FB2		(1 << 2)
/** CAN1_F1R2_FB1 Filter bits **/
#define CAN1_F1R2_FB1		(1 << 1)
/** CAN1_F1R2_FB0 Filter bits **/
#define CAN1_F1R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f2r1 F2R1 Filter bank 2 register 1
@{*/

/** CAN1_F2R1_FB31 Filter bits **/
#define CAN1_F2R1_FB31		(1 << 31)
/** CAN1_F2R1_FB30 Filter bits **/
#define CAN1_F2R1_FB30		(1 << 30)
/** CAN1_F2R1_FB29 Filter bits **/
#define CAN1_F2R1_FB29		(1 << 29)
/** CAN1_F2R1_FB28 Filter bits **/
#define CAN1_F2R1_FB28		(1 << 28)
/** CAN1_F2R1_FB27 Filter bits **/
#define CAN1_F2R1_FB27		(1 << 27)
/** CAN1_F2R1_FB26 Filter bits **/
#define CAN1_F2R1_FB26		(1 << 26)
/** CAN1_F2R1_FB25 Filter bits **/
#define CAN1_F2R1_FB25		(1 << 25)
/** CAN1_F2R1_FB24 Filter bits **/
#define CAN1_F2R1_FB24		(1 << 24)
/** CAN1_F2R1_FB23 Filter bits **/
#define CAN1_F2R1_FB23		(1 << 23)
/** CAN1_F2R1_FB22 Filter bits **/
#define CAN1_F2R1_FB22		(1 << 22)
/** CAN1_F2R1_FB21 Filter bits **/
#define CAN1_F2R1_FB21		(1 << 21)
/** CAN1_F2R1_FB20 Filter bits **/
#define CAN1_F2R1_FB20		(1 << 20)
/** CAN1_F2R1_FB19 Filter bits **/
#define CAN1_F2R1_FB19		(1 << 19)
/** CAN1_F2R1_FB18 Filter bits **/
#define CAN1_F2R1_FB18		(1 << 18)
/** CAN1_F2R1_FB17 Filter bits **/
#define CAN1_F2R1_FB17		(1 << 17)
/** CAN1_F2R1_FB16 Filter bits **/
#define CAN1_F2R1_FB16		(1 << 16)
/** CAN1_F2R1_FB15 Filter bits **/
#define CAN1_F2R1_FB15		(1 << 15)
/** CAN1_F2R1_FB14 Filter bits **/
#define CAN1_F2R1_FB14		(1 << 14)
/** CAN1_F2R1_FB13 Filter bits **/
#define CAN1_F2R1_FB13		(1 << 13)
/** CAN1_F2R1_FB12 Filter bits **/
#define CAN1_F2R1_FB12		(1 << 12)
/** CAN1_F2R1_FB11 Filter bits **/
#define CAN1_F2R1_FB11		(1 << 11)
/** CAN1_F2R1_FB10 Filter bits **/
#define CAN1_F2R1_FB10		(1 << 10)
/** CAN1_F2R1_FB9 Filter bits **/
#define CAN1_F2R1_FB9		(1 << 9)
/** CAN1_F2R1_FB8 Filter bits **/
#define CAN1_F2R1_FB8		(1 << 8)
/** CAN1_F2R1_FB7 Filter bits **/
#define CAN1_F2R1_FB7		(1 << 7)
/** CAN1_F2R1_FB6 Filter bits **/
#define CAN1_F2R1_FB6		(1 << 6)
/** CAN1_F2R1_FB5 Filter bits **/
#define CAN1_F2R1_FB5		(1 << 5)
/** CAN1_F2R1_FB4 Filter bits **/
#define CAN1_F2R1_FB4		(1 << 4)
/** CAN1_F2R1_FB3 Filter bits **/
#define CAN1_F2R1_FB3		(1 << 3)
/** CAN1_F2R1_FB2 Filter bits **/
#define CAN1_F2R1_FB2		(1 << 2)
/** CAN1_F2R1_FB1 Filter bits **/
#define CAN1_F2R1_FB1		(1 << 1)
/** CAN1_F2R1_FB0 Filter bits **/
#define CAN1_F2R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f2r2 F2R2 Filter bank 2 register 2
@{*/

/** CAN1_F2R2_FB31 Filter bits **/
#define CAN1_F2R2_FB31		(1 << 31)
/** CAN1_F2R2_FB30 Filter bits **/
#define CAN1_F2R2_FB30		(1 << 30)
/** CAN1_F2R2_FB29 Filter bits **/
#define CAN1_F2R2_FB29		(1 << 29)
/** CAN1_F2R2_FB28 Filter bits **/
#define CAN1_F2R2_FB28		(1 << 28)
/** CAN1_F2R2_FB27 Filter bits **/
#define CAN1_F2R2_FB27		(1 << 27)
/** CAN1_F2R2_FB26 Filter bits **/
#define CAN1_F2R2_FB26		(1 << 26)
/** CAN1_F2R2_FB25 Filter bits **/
#define CAN1_F2R2_FB25		(1 << 25)
/** CAN1_F2R2_FB24 Filter bits **/
#define CAN1_F2R2_FB24		(1 << 24)
/** CAN1_F2R2_FB23 Filter bits **/
#define CAN1_F2R2_FB23		(1 << 23)
/** CAN1_F2R2_FB22 Filter bits **/
#define CAN1_F2R2_FB22		(1 << 22)
/** CAN1_F2R2_FB21 Filter bits **/
#define CAN1_F2R2_FB21		(1 << 21)
/** CAN1_F2R2_FB20 Filter bits **/
#define CAN1_F2R2_FB20		(1 << 20)
/** CAN1_F2R2_FB19 Filter bits **/
#define CAN1_F2R2_FB19		(1 << 19)
/** CAN1_F2R2_FB18 Filter bits **/
#define CAN1_F2R2_FB18		(1 << 18)
/** CAN1_F2R2_FB17 Filter bits **/
#define CAN1_F2R2_FB17		(1 << 17)
/** CAN1_F2R2_FB16 Filter bits **/
#define CAN1_F2R2_FB16		(1 << 16)
/** CAN1_F2R2_FB15 Filter bits **/
#define CAN1_F2R2_FB15		(1 << 15)
/** CAN1_F2R2_FB14 Filter bits **/
#define CAN1_F2R2_FB14		(1 << 14)
/** CAN1_F2R2_FB13 Filter bits **/
#define CAN1_F2R2_FB13		(1 << 13)
/** CAN1_F2R2_FB12 Filter bits **/
#define CAN1_F2R2_FB12		(1 << 12)
/** CAN1_F2R2_FB11 Filter bits **/
#define CAN1_F2R2_FB11		(1 << 11)
/** CAN1_F2R2_FB10 Filter bits **/
#define CAN1_F2R2_FB10		(1 << 10)
/** CAN1_F2R2_FB9 Filter bits **/
#define CAN1_F2R2_FB9		(1 << 9)
/** CAN1_F2R2_FB8 Filter bits **/
#define CAN1_F2R2_FB8		(1 << 8)
/** CAN1_F2R2_FB7 Filter bits **/
#define CAN1_F2R2_FB7		(1 << 7)
/** CAN1_F2R2_FB6 Filter bits **/
#define CAN1_F2R2_FB6		(1 << 6)
/** CAN1_F2R2_FB5 Filter bits **/
#define CAN1_F2R2_FB5		(1 << 5)
/** CAN1_F2R2_FB4 Filter bits **/
#define CAN1_F2R2_FB4		(1 << 4)
/** CAN1_F2R2_FB3 Filter bits **/
#define CAN1_F2R2_FB3		(1 << 3)
/** CAN1_F2R2_FB2 Filter bits **/
#define CAN1_F2R2_FB2		(1 << 2)
/** CAN1_F2R2_FB1 Filter bits **/
#define CAN1_F2R2_FB1		(1 << 1)
/** CAN1_F2R2_FB0 Filter bits **/
#define CAN1_F2R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f3r1 F3R1 Filter bank 3 register 1
@{*/

/** CAN1_F3R1_FB31 Filter bits **/
#define CAN1_F3R1_FB31		(1 << 31)
/** CAN1_F3R1_FB30 Filter bits **/
#define CAN1_F3R1_FB30		(1 << 30)
/** CAN1_F3R1_FB29 Filter bits **/
#define CAN1_F3R1_FB29		(1 << 29)
/** CAN1_F3R1_FB28 Filter bits **/
#define CAN1_F3R1_FB28		(1 << 28)
/** CAN1_F3R1_FB27 Filter bits **/
#define CAN1_F3R1_FB27		(1 << 27)
/** CAN1_F3R1_FB26 Filter bits **/
#define CAN1_F3R1_FB26		(1 << 26)
/** CAN1_F3R1_FB25 Filter bits **/
#define CAN1_F3R1_FB25		(1 << 25)
/** CAN1_F3R1_FB24 Filter bits **/
#define CAN1_F3R1_FB24		(1 << 24)
/** CAN1_F3R1_FB23 Filter bits **/
#define CAN1_F3R1_FB23		(1 << 23)
/** CAN1_F3R1_FB22 Filter bits **/
#define CAN1_F3R1_FB22		(1 << 22)
/** CAN1_F3R1_FB21 Filter bits **/
#define CAN1_F3R1_FB21		(1 << 21)
/** CAN1_F3R1_FB20 Filter bits **/
#define CAN1_F3R1_FB20		(1 << 20)
/** CAN1_F3R1_FB19 Filter bits **/
#define CAN1_F3R1_FB19		(1 << 19)
/** CAN1_F3R1_FB18 Filter bits **/
#define CAN1_F3R1_FB18		(1 << 18)
/** CAN1_F3R1_FB17 Filter bits **/
#define CAN1_F3R1_FB17		(1 << 17)
/** CAN1_F3R1_FB16 Filter bits **/
#define CAN1_F3R1_FB16		(1 << 16)
/** CAN1_F3R1_FB15 Filter bits **/
#define CAN1_F3R1_FB15		(1 << 15)
/** CAN1_F3R1_FB14 Filter bits **/
#define CAN1_F3R1_FB14		(1 << 14)
/** CAN1_F3R1_FB13 Filter bits **/
#define CAN1_F3R1_FB13		(1 << 13)
/** CAN1_F3R1_FB12 Filter bits **/
#define CAN1_F3R1_FB12		(1 << 12)
/** CAN1_F3R1_FB11 Filter bits **/
#define CAN1_F3R1_FB11		(1 << 11)
/** CAN1_F3R1_FB10 Filter bits **/
#define CAN1_F3R1_FB10		(1 << 10)
/** CAN1_F3R1_FB9 Filter bits **/
#define CAN1_F3R1_FB9		(1 << 9)
/** CAN1_F3R1_FB8 Filter bits **/
#define CAN1_F3R1_FB8		(1 << 8)
/** CAN1_F3R1_FB7 Filter bits **/
#define CAN1_F3R1_FB7		(1 << 7)
/** CAN1_F3R1_FB6 Filter bits **/
#define CAN1_F3R1_FB6		(1 << 6)
/** CAN1_F3R1_FB5 Filter bits **/
#define CAN1_F3R1_FB5		(1 << 5)
/** CAN1_F3R1_FB4 Filter bits **/
#define CAN1_F3R1_FB4		(1 << 4)
/** CAN1_F3R1_FB3 Filter bits **/
#define CAN1_F3R1_FB3		(1 << 3)
/** CAN1_F3R1_FB2 Filter bits **/
#define CAN1_F3R1_FB2		(1 << 2)
/** CAN1_F3R1_FB1 Filter bits **/
#define CAN1_F3R1_FB1		(1 << 1)
/** CAN1_F3R1_FB0 Filter bits **/
#define CAN1_F3R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f3r2 F3R2 Filter bank 3 register 2
@{*/

/** CAN1_F3R2_FB31 Filter bits **/
#define CAN1_F3R2_FB31		(1 << 31)
/** CAN1_F3R2_FB30 Filter bits **/
#define CAN1_F3R2_FB30		(1 << 30)
/** CAN1_F3R2_FB29 Filter bits **/
#define CAN1_F3R2_FB29		(1 << 29)
/** CAN1_F3R2_FB28 Filter bits **/
#define CAN1_F3R2_FB28		(1 << 28)
/** CAN1_F3R2_FB27 Filter bits **/
#define CAN1_F3R2_FB27		(1 << 27)
/** CAN1_F3R2_FB26 Filter bits **/
#define CAN1_F3R2_FB26		(1 << 26)
/** CAN1_F3R2_FB25 Filter bits **/
#define CAN1_F3R2_FB25		(1 << 25)
/** CAN1_F3R2_FB24 Filter bits **/
#define CAN1_F3R2_FB24		(1 << 24)
/** CAN1_F3R2_FB23 Filter bits **/
#define CAN1_F3R2_FB23		(1 << 23)
/** CAN1_F3R2_FB22 Filter bits **/
#define CAN1_F3R2_FB22		(1 << 22)
/** CAN1_F3R2_FB21 Filter bits **/
#define CAN1_F3R2_FB21		(1 << 21)
/** CAN1_F3R2_FB20 Filter bits **/
#define CAN1_F3R2_FB20		(1 << 20)
/** CAN1_F3R2_FB19 Filter bits **/
#define CAN1_F3R2_FB19		(1 << 19)
/** CAN1_F3R2_FB18 Filter bits **/
#define CAN1_F3R2_FB18		(1 << 18)
/** CAN1_F3R2_FB17 Filter bits **/
#define CAN1_F3R2_FB17		(1 << 17)
/** CAN1_F3R2_FB16 Filter bits **/
#define CAN1_F3R2_FB16		(1 << 16)
/** CAN1_F3R2_FB15 Filter bits **/
#define CAN1_F3R2_FB15		(1 << 15)
/** CAN1_F3R2_FB14 Filter bits **/
#define CAN1_F3R2_FB14		(1 << 14)
/** CAN1_F3R2_FB13 Filter bits **/
#define CAN1_F3R2_FB13		(1 << 13)
/** CAN1_F3R2_FB12 Filter bits **/
#define CAN1_F3R2_FB12		(1 << 12)
/** CAN1_F3R2_FB11 Filter bits **/
#define CAN1_F3R2_FB11		(1 << 11)
/** CAN1_F3R2_FB10 Filter bits **/
#define CAN1_F3R2_FB10		(1 << 10)
/** CAN1_F3R2_FB9 Filter bits **/
#define CAN1_F3R2_FB9		(1 << 9)
/** CAN1_F3R2_FB8 Filter bits **/
#define CAN1_F3R2_FB8		(1 << 8)
/** CAN1_F3R2_FB7 Filter bits **/
#define CAN1_F3R2_FB7		(1 << 7)
/** CAN1_F3R2_FB6 Filter bits **/
#define CAN1_F3R2_FB6		(1 << 6)
/** CAN1_F3R2_FB5 Filter bits **/
#define CAN1_F3R2_FB5		(1 << 5)
/** CAN1_F3R2_FB4 Filter bits **/
#define CAN1_F3R2_FB4		(1 << 4)
/** CAN1_F3R2_FB3 Filter bits **/
#define CAN1_F3R2_FB3		(1 << 3)
/** CAN1_F3R2_FB2 Filter bits **/
#define CAN1_F3R2_FB2		(1 << 2)
/** CAN1_F3R2_FB1 Filter bits **/
#define CAN1_F3R2_FB1		(1 << 1)
/** CAN1_F3R2_FB0 Filter bits **/
#define CAN1_F3R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f4r1 F4R1 Filter bank 4 register 1
@{*/

/** CAN1_F4R1_FB31 Filter bits **/
#define CAN1_F4R1_FB31		(1 << 31)
/** CAN1_F4R1_FB30 Filter bits **/
#define CAN1_F4R1_FB30		(1 << 30)
/** CAN1_F4R1_FB29 Filter bits **/
#define CAN1_F4R1_FB29		(1 << 29)
/** CAN1_F4R1_FB28 Filter bits **/
#define CAN1_F4R1_FB28		(1 << 28)
/** CAN1_F4R1_FB27 Filter bits **/
#define CAN1_F4R1_FB27		(1 << 27)
/** CAN1_F4R1_FB26 Filter bits **/
#define CAN1_F4R1_FB26		(1 << 26)
/** CAN1_F4R1_FB25 Filter bits **/
#define CAN1_F4R1_FB25		(1 << 25)
/** CAN1_F4R1_FB24 Filter bits **/
#define CAN1_F4R1_FB24		(1 << 24)
/** CAN1_F4R1_FB23 Filter bits **/
#define CAN1_F4R1_FB23		(1 << 23)
/** CAN1_F4R1_FB22 Filter bits **/
#define CAN1_F4R1_FB22		(1 << 22)
/** CAN1_F4R1_FB21 Filter bits **/
#define CAN1_F4R1_FB21		(1 << 21)
/** CAN1_F4R1_FB20 Filter bits **/
#define CAN1_F4R1_FB20		(1 << 20)
/** CAN1_F4R1_FB19 Filter bits **/
#define CAN1_F4R1_FB19		(1 << 19)
/** CAN1_F4R1_FB18 Filter bits **/
#define CAN1_F4R1_FB18		(1 << 18)
/** CAN1_F4R1_FB17 Filter bits **/
#define CAN1_F4R1_FB17		(1 << 17)
/** CAN1_F4R1_FB16 Filter bits **/
#define CAN1_F4R1_FB16		(1 << 16)
/** CAN1_F4R1_FB15 Filter bits **/
#define CAN1_F4R1_FB15		(1 << 15)
/** CAN1_F4R1_FB14 Filter bits **/
#define CAN1_F4R1_FB14		(1 << 14)
/** CAN1_F4R1_FB13 Filter bits **/
#define CAN1_F4R1_FB13		(1 << 13)
/** CAN1_F4R1_FB12 Filter bits **/
#define CAN1_F4R1_FB12		(1 << 12)
/** CAN1_F4R1_FB11 Filter bits **/
#define CAN1_F4R1_FB11		(1 << 11)
/** CAN1_F4R1_FB10 Filter bits **/
#define CAN1_F4R1_FB10		(1 << 10)
/** CAN1_F4R1_FB9 Filter bits **/
#define CAN1_F4R1_FB9		(1 << 9)
/** CAN1_F4R1_FB8 Filter bits **/
#define CAN1_F4R1_FB8		(1 << 8)
/** CAN1_F4R1_FB7 Filter bits **/
#define CAN1_F4R1_FB7		(1 << 7)
/** CAN1_F4R1_FB6 Filter bits **/
#define CAN1_F4R1_FB6		(1 << 6)
/** CAN1_F4R1_FB5 Filter bits **/
#define CAN1_F4R1_FB5		(1 << 5)
/** CAN1_F4R1_FB4 Filter bits **/
#define CAN1_F4R1_FB4		(1 << 4)
/** CAN1_F4R1_FB3 Filter bits **/
#define CAN1_F4R1_FB3		(1 << 3)
/** CAN1_F4R1_FB2 Filter bits **/
#define CAN1_F4R1_FB2		(1 << 2)
/** CAN1_F4R1_FB1 Filter bits **/
#define CAN1_F4R1_FB1		(1 << 1)
/** CAN1_F4R1_FB0 Filter bits **/
#define CAN1_F4R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f4r2 F4R2 Filter bank 4 register 2
@{*/

/** CAN1_F4R2_FB31 Filter bits **/
#define CAN1_F4R2_FB31		(1 << 31)
/** CAN1_F4R2_FB30 Filter bits **/
#define CAN1_F4R2_FB30		(1 << 30)
/** CAN1_F4R2_FB29 Filter bits **/
#define CAN1_F4R2_FB29		(1 << 29)
/** CAN1_F4R2_FB28 Filter bits **/
#define CAN1_F4R2_FB28		(1 << 28)
/** CAN1_F4R2_FB27 Filter bits **/
#define CAN1_F4R2_FB27		(1 << 27)
/** CAN1_F4R2_FB26 Filter bits **/
#define CAN1_F4R2_FB26		(1 << 26)
/** CAN1_F4R2_FB25 Filter bits **/
#define CAN1_F4R2_FB25		(1 << 25)
/** CAN1_F4R2_FB24 Filter bits **/
#define CAN1_F4R2_FB24		(1 << 24)
/** CAN1_F4R2_FB23 Filter bits **/
#define CAN1_F4R2_FB23		(1 << 23)
/** CAN1_F4R2_FB22 Filter bits **/
#define CAN1_F4R2_FB22		(1 << 22)
/** CAN1_F4R2_FB21 Filter bits **/
#define CAN1_F4R2_FB21		(1 << 21)
/** CAN1_F4R2_FB20 Filter bits **/
#define CAN1_F4R2_FB20		(1 << 20)
/** CAN1_F4R2_FB19 Filter bits **/
#define CAN1_F4R2_FB19		(1 << 19)
/** CAN1_F4R2_FB18 Filter bits **/
#define CAN1_F4R2_FB18		(1 << 18)
/** CAN1_F4R2_FB17 Filter bits **/
#define CAN1_F4R2_FB17		(1 << 17)
/** CAN1_F4R2_FB16 Filter bits **/
#define CAN1_F4R2_FB16		(1 << 16)
/** CAN1_F4R2_FB15 Filter bits **/
#define CAN1_F4R2_FB15		(1 << 15)
/** CAN1_F4R2_FB14 Filter bits **/
#define CAN1_F4R2_FB14		(1 << 14)
/** CAN1_F4R2_FB13 Filter bits **/
#define CAN1_F4R2_FB13		(1 << 13)
/** CAN1_F4R2_FB12 Filter bits **/
#define CAN1_F4R2_FB12		(1 << 12)
/** CAN1_F4R2_FB11 Filter bits **/
#define CAN1_F4R2_FB11		(1 << 11)
/** CAN1_F4R2_FB10 Filter bits **/
#define CAN1_F4R2_FB10		(1 << 10)
/** CAN1_F4R2_FB9 Filter bits **/
#define CAN1_F4R2_FB9		(1 << 9)
/** CAN1_F4R2_FB8 Filter bits **/
#define CAN1_F4R2_FB8		(1 << 8)
/** CAN1_F4R2_FB7 Filter bits **/
#define CAN1_F4R2_FB7		(1 << 7)
/** CAN1_F4R2_FB6 Filter bits **/
#define CAN1_F4R2_FB6		(1 << 6)
/** CAN1_F4R2_FB5 Filter bits **/
#define CAN1_F4R2_FB5		(1 << 5)
/** CAN1_F4R2_FB4 Filter bits **/
#define CAN1_F4R2_FB4		(1 << 4)
/** CAN1_F4R2_FB3 Filter bits **/
#define CAN1_F4R2_FB3		(1 << 3)
/** CAN1_F4R2_FB2 Filter bits **/
#define CAN1_F4R2_FB2		(1 << 2)
/** CAN1_F4R2_FB1 Filter bits **/
#define CAN1_F4R2_FB1		(1 << 1)
/** CAN1_F4R2_FB0 Filter bits **/
#define CAN1_F4R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f5r1 F5R1 Filter bank 5 register 1
@{*/

/** CAN1_F5R1_FB31 Filter bits **/
#define CAN1_F5R1_FB31		(1 << 31)
/** CAN1_F5R1_FB30 Filter bits **/
#define CAN1_F5R1_FB30		(1 << 30)
/** CAN1_F5R1_FB29 Filter bits **/
#define CAN1_F5R1_FB29		(1 << 29)
/** CAN1_F5R1_FB28 Filter bits **/
#define CAN1_F5R1_FB28		(1 << 28)
/** CAN1_F5R1_FB27 Filter bits **/
#define CAN1_F5R1_FB27		(1 << 27)
/** CAN1_F5R1_FB26 Filter bits **/
#define CAN1_F5R1_FB26		(1 << 26)
/** CAN1_F5R1_FB25 Filter bits **/
#define CAN1_F5R1_FB25		(1 << 25)
/** CAN1_F5R1_FB24 Filter bits **/
#define CAN1_F5R1_FB24		(1 << 24)
/** CAN1_F5R1_FB23 Filter bits **/
#define CAN1_F5R1_FB23		(1 << 23)
/** CAN1_F5R1_FB22 Filter bits **/
#define CAN1_F5R1_FB22		(1 << 22)
/** CAN1_F5R1_FB21 Filter bits **/
#define CAN1_F5R1_FB21		(1 << 21)
/** CAN1_F5R1_FB20 Filter bits **/
#define CAN1_F5R1_FB20		(1 << 20)
/** CAN1_F5R1_FB19 Filter bits **/
#define CAN1_F5R1_FB19		(1 << 19)
/** CAN1_F5R1_FB18 Filter bits **/
#define CAN1_F5R1_FB18		(1 << 18)
/** CAN1_F5R1_FB17 Filter bits **/
#define CAN1_F5R1_FB17		(1 << 17)
/** CAN1_F5R1_FB16 Filter bits **/
#define CAN1_F5R1_FB16		(1 << 16)
/** CAN1_F5R1_FB15 Filter bits **/
#define CAN1_F5R1_FB15		(1 << 15)
/** CAN1_F5R1_FB14 Filter bits **/
#define CAN1_F5R1_FB14		(1 << 14)
/** CAN1_F5R1_FB13 Filter bits **/
#define CAN1_F5R1_FB13		(1 << 13)
/** CAN1_F5R1_FB12 Filter bits **/
#define CAN1_F5R1_FB12		(1 << 12)
/** CAN1_F5R1_FB11 Filter bits **/
#define CAN1_F5R1_FB11		(1 << 11)
/** CAN1_F5R1_FB10 Filter bits **/
#define CAN1_F5R1_FB10		(1 << 10)
/** CAN1_F5R1_FB9 Filter bits **/
#define CAN1_F5R1_FB9		(1 << 9)
/** CAN1_F5R1_FB8 Filter bits **/
#define CAN1_F5R1_FB8		(1 << 8)
/** CAN1_F5R1_FB7 Filter bits **/
#define CAN1_F5R1_FB7		(1 << 7)
/** CAN1_F5R1_FB6 Filter bits **/
#define CAN1_F5R1_FB6		(1 << 6)
/** CAN1_F5R1_FB5 Filter bits **/
#define CAN1_F5R1_FB5		(1 << 5)
/** CAN1_F5R1_FB4 Filter bits **/
#define CAN1_F5R1_FB4		(1 << 4)
/** CAN1_F5R1_FB3 Filter bits **/
#define CAN1_F5R1_FB3		(1 << 3)
/** CAN1_F5R1_FB2 Filter bits **/
#define CAN1_F5R1_FB2		(1 << 2)
/** CAN1_F5R1_FB1 Filter bits **/
#define CAN1_F5R1_FB1		(1 << 1)
/** CAN1_F5R1_FB0 Filter bits **/
#define CAN1_F5R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f5r2 F5R2 Filter bank 5 register 2
@{*/

/** CAN1_F5R2_FB31 Filter bits **/
#define CAN1_F5R2_FB31		(1 << 31)
/** CAN1_F5R2_FB30 Filter bits **/
#define CAN1_F5R2_FB30		(1 << 30)
/** CAN1_F5R2_FB29 Filter bits **/
#define CAN1_F5R2_FB29		(1 << 29)
/** CAN1_F5R2_FB28 Filter bits **/
#define CAN1_F5R2_FB28		(1 << 28)
/** CAN1_F5R2_FB27 Filter bits **/
#define CAN1_F5R2_FB27		(1 << 27)
/** CAN1_F5R2_FB26 Filter bits **/
#define CAN1_F5R2_FB26		(1 << 26)
/** CAN1_F5R2_FB25 Filter bits **/
#define CAN1_F5R2_FB25		(1 << 25)
/** CAN1_F5R2_FB24 Filter bits **/
#define CAN1_F5R2_FB24		(1 << 24)
/** CAN1_F5R2_FB23 Filter bits **/
#define CAN1_F5R2_FB23		(1 << 23)
/** CAN1_F5R2_FB22 Filter bits **/
#define CAN1_F5R2_FB22		(1 << 22)
/** CAN1_F5R2_FB21 Filter bits **/
#define CAN1_F5R2_FB21		(1 << 21)
/** CAN1_F5R2_FB20 Filter bits **/
#define CAN1_F5R2_FB20		(1 << 20)
/** CAN1_F5R2_FB19 Filter bits **/
#define CAN1_F5R2_FB19		(1 << 19)
/** CAN1_F5R2_FB18 Filter bits **/
#define CAN1_F5R2_FB18		(1 << 18)
/** CAN1_F5R2_FB17 Filter bits **/
#define CAN1_F5R2_FB17		(1 << 17)
/** CAN1_F5R2_FB16 Filter bits **/
#define CAN1_F5R2_FB16		(1 << 16)
/** CAN1_F5R2_FB15 Filter bits **/
#define CAN1_F5R2_FB15		(1 << 15)
/** CAN1_F5R2_FB14 Filter bits **/
#define CAN1_F5R2_FB14		(1 << 14)
/** CAN1_F5R2_FB13 Filter bits **/
#define CAN1_F5R2_FB13		(1 << 13)
/** CAN1_F5R2_FB12 Filter bits **/
#define CAN1_F5R2_FB12		(1 << 12)
/** CAN1_F5R2_FB11 Filter bits **/
#define CAN1_F5R2_FB11		(1 << 11)
/** CAN1_F5R2_FB10 Filter bits **/
#define CAN1_F5R2_FB10		(1 << 10)
/** CAN1_F5R2_FB9 Filter bits **/
#define CAN1_F5R2_FB9		(1 << 9)
/** CAN1_F5R2_FB8 Filter bits **/
#define CAN1_F5R2_FB8		(1 << 8)
/** CAN1_F5R2_FB7 Filter bits **/
#define CAN1_F5R2_FB7		(1 << 7)
/** CAN1_F5R2_FB6 Filter bits **/
#define CAN1_F5R2_FB6		(1 << 6)
/** CAN1_F5R2_FB5 Filter bits **/
#define CAN1_F5R2_FB5		(1 << 5)
/** CAN1_F5R2_FB4 Filter bits **/
#define CAN1_F5R2_FB4		(1 << 4)
/** CAN1_F5R2_FB3 Filter bits **/
#define CAN1_F5R2_FB3		(1 << 3)
/** CAN1_F5R2_FB2 Filter bits **/
#define CAN1_F5R2_FB2		(1 << 2)
/** CAN1_F5R2_FB1 Filter bits **/
#define CAN1_F5R2_FB1		(1 << 1)
/** CAN1_F5R2_FB0 Filter bits **/
#define CAN1_F5R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f6r1 F6R1 Filter bank 6 register 1
@{*/

/** CAN1_F6R1_FB31 Filter bits **/
#define CAN1_F6R1_FB31		(1 << 31)
/** CAN1_F6R1_FB30 Filter bits **/
#define CAN1_F6R1_FB30		(1 << 30)
/** CAN1_F6R1_FB29 Filter bits **/
#define CAN1_F6R1_FB29		(1 << 29)
/** CAN1_F6R1_FB28 Filter bits **/
#define CAN1_F6R1_FB28		(1 << 28)
/** CAN1_F6R1_FB27 Filter bits **/
#define CAN1_F6R1_FB27		(1 << 27)
/** CAN1_F6R1_FB26 Filter bits **/
#define CAN1_F6R1_FB26		(1 << 26)
/** CAN1_F6R1_FB25 Filter bits **/
#define CAN1_F6R1_FB25		(1 << 25)
/** CAN1_F6R1_FB24 Filter bits **/
#define CAN1_F6R1_FB24		(1 << 24)
/** CAN1_F6R1_FB23 Filter bits **/
#define CAN1_F6R1_FB23		(1 << 23)
/** CAN1_F6R1_FB22 Filter bits **/
#define CAN1_F6R1_FB22		(1 << 22)
/** CAN1_F6R1_FB21 Filter bits **/
#define CAN1_F6R1_FB21		(1 << 21)
/** CAN1_F6R1_FB20 Filter bits **/
#define CAN1_F6R1_FB20		(1 << 20)
/** CAN1_F6R1_FB19 Filter bits **/
#define CAN1_F6R1_FB19		(1 << 19)
/** CAN1_F6R1_FB18 Filter bits **/
#define CAN1_F6R1_FB18		(1 << 18)
/** CAN1_F6R1_FB17 Filter bits **/
#define CAN1_F6R1_FB17		(1 << 17)
/** CAN1_F6R1_FB16 Filter bits **/
#define CAN1_F6R1_FB16		(1 << 16)
/** CAN1_F6R1_FB15 Filter bits **/
#define CAN1_F6R1_FB15		(1 << 15)
/** CAN1_F6R1_FB14 Filter bits **/
#define CAN1_F6R1_FB14		(1 << 14)
/** CAN1_F6R1_FB13 Filter bits **/
#define CAN1_F6R1_FB13		(1 << 13)
/** CAN1_F6R1_FB12 Filter bits **/
#define CAN1_F6R1_FB12		(1 << 12)
/** CAN1_F6R1_FB11 Filter bits **/
#define CAN1_F6R1_FB11		(1 << 11)
/** CAN1_F6R1_FB10 Filter bits **/
#define CAN1_F6R1_FB10		(1 << 10)
/** CAN1_F6R1_FB9 Filter bits **/
#define CAN1_F6R1_FB9		(1 << 9)
/** CAN1_F6R1_FB8 Filter bits **/
#define CAN1_F6R1_FB8		(1 << 8)
/** CAN1_F6R1_FB7 Filter bits **/
#define CAN1_F6R1_FB7		(1 << 7)
/** CAN1_F6R1_FB6 Filter bits **/
#define CAN1_F6R1_FB6		(1 << 6)
/** CAN1_F6R1_FB5 Filter bits **/
#define CAN1_F6R1_FB5		(1 << 5)
/** CAN1_F6R1_FB4 Filter bits **/
#define CAN1_F6R1_FB4		(1 << 4)
/** CAN1_F6R1_FB3 Filter bits **/
#define CAN1_F6R1_FB3		(1 << 3)
/** CAN1_F6R1_FB2 Filter bits **/
#define CAN1_F6R1_FB2		(1 << 2)
/** CAN1_F6R1_FB1 Filter bits **/
#define CAN1_F6R1_FB1		(1 << 1)
/** CAN1_F6R1_FB0 Filter bits **/
#define CAN1_F6R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f6r2 F6R2 Filter bank 6 register 2
@{*/

/** CAN1_F6R2_FB31 Filter bits **/
#define CAN1_F6R2_FB31		(1 << 31)
/** CAN1_F6R2_FB30 Filter bits **/
#define CAN1_F6R2_FB30		(1 << 30)
/** CAN1_F6R2_FB29 Filter bits **/
#define CAN1_F6R2_FB29		(1 << 29)
/** CAN1_F6R2_FB28 Filter bits **/
#define CAN1_F6R2_FB28		(1 << 28)
/** CAN1_F6R2_FB27 Filter bits **/
#define CAN1_F6R2_FB27		(1 << 27)
/** CAN1_F6R2_FB26 Filter bits **/
#define CAN1_F6R2_FB26		(1 << 26)
/** CAN1_F6R2_FB25 Filter bits **/
#define CAN1_F6R2_FB25		(1 << 25)
/** CAN1_F6R2_FB24 Filter bits **/
#define CAN1_F6R2_FB24		(1 << 24)
/** CAN1_F6R2_FB23 Filter bits **/
#define CAN1_F6R2_FB23		(1 << 23)
/** CAN1_F6R2_FB22 Filter bits **/
#define CAN1_F6R2_FB22		(1 << 22)
/** CAN1_F6R2_FB21 Filter bits **/
#define CAN1_F6R2_FB21		(1 << 21)
/** CAN1_F6R2_FB20 Filter bits **/
#define CAN1_F6R2_FB20		(1 << 20)
/** CAN1_F6R2_FB19 Filter bits **/
#define CAN1_F6R2_FB19		(1 << 19)
/** CAN1_F6R2_FB18 Filter bits **/
#define CAN1_F6R2_FB18		(1 << 18)
/** CAN1_F6R2_FB17 Filter bits **/
#define CAN1_F6R2_FB17		(1 << 17)
/** CAN1_F6R2_FB16 Filter bits **/
#define CAN1_F6R2_FB16		(1 << 16)
/** CAN1_F6R2_FB15 Filter bits **/
#define CAN1_F6R2_FB15		(1 << 15)
/** CAN1_F6R2_FB14 Filter bits **/
#define CAN1_F6R2_FB14		(1 << 14)
/** CAN1_F6R2_FB13 Filter bits **/
#define CAN1_F6R2_FB13		(1 << 13)
/** CAN1_F6R2_FB12 Filter bits **/
#define CAN1_F6R2_FB12		(1 << 12)
/** CAN1_F6R2_FB11 Filter bits **/
#define CAN1_F6R2_FB11		(1 << 11)
/** CAN1_F6R2_FB10 Filter bits **/
#define CAN1_F6R2_FB10		(1 << 10)
/** CAN1_F6R2_FB9 Filter bits **/
#define CAN1_F6R2_FB9		(1 << 9)
/** CAN1_F6R2_FB8 Filter bits **/
#define CAN1_F6R2_FB8		(1 << 8)
/** CAN1_F6R2_FB7 Filter bits **/
#define CAN1_F6R2_FB7		(1 << 7)
/** CAN1_F6R2_FB6 Filter bits **/
#define CAN1_F6R2_FB6		(1 << 6)
/** CAN1_F6R2_FB5 Filter bits **/
#define CAN1_F6R2_FB5		(1 << 5)
/** CAN1_F6R2_FB4 Filter bits **/
#define CAN1_F6R2_FB4		(1 << 4)
/** CAN1_F6R2_FB3 Filter bits **/
#define CAN1_F6R2_FB3		(1 << 3)
/** CAN1_F6R2_FB2 Filter bits **/
#define CAN1_F6R2_FB2		(1 << 2)
/** CAN1_F6R2_FB1 Filter bits **/
#define CAN1_F6R2_FB1		(1 << 1)
/** CAN1_F6R2_FB0 Filter bits **/
#define CAN1_F6R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f7r1 F7R1 Filter bank 7 register 1
@{*/

/** CAN1_F7R1_FB31 Filter bits **/
#define CAN1_F7R1_FB31		(1 << 31)
/** CAN1_F7R1_FB30 Filter bits **/
#define CAN1_F7R1_FB30		(1 << 30)
/** CAN1_F7R1_FB29 Filter bits **/
#define CAN1_F7R1_FB29		(1 << 29)
/** CAN1_F7R1_FB28 Filter bits **/
#define CAN1_F7R1_FB28		(1 << 28)
/** CAN1_F7R1_FB27 Filter bits **/
#define CAN1_F7R1_FB27		(1 << 27)
/** CAN1_F7R1_FB26 Filter bits **/
#define CAN1_F7R1_FB26		(1 << 26)
/** CAN1_F7R1_FB25 Filter bits **/
#define CAN1_F7R1_FB25		(1 << 25)
/** CAN1_F7R1_FB24 Filter bits **/
#define CAN1_F7R1_FB24		(1 << 24)
/** CAN1_F7R1_FB23 Filter bits **/
#define CAN1_F7R1_FB23		(1 << 23)
/** CAN1_F7R1_FB22 Filter bits **/
#define CAN1_F7R1_FB22		(1 << 22)
/** CAN1_F7R1_FB21 Filter bits **/
#define CAN1_F7R1_FB21		(1 << 21)
/** CAN1_F7R1_FB20 Filter bits **/
#define CAN1_F7R1_FB20		(1 << 20)
/** CAN1_F7R1_FB19 Filter bits **/
#define CAN1_F7R1_FB19		(1 << 19)
/** CAN1_F7R1_FB18 Filter bits **/
#define CAN1_F7R1_FB18		(1 << 18)
/** CAN1_F7R1_FB17 Filter bits **/
#define CAN1_F7R1_FB17		(1 << 17)
/** CAN1_F7R1_FB16 Filter bits **/
#define CAN1_F7R1_FB16		(1 << 16)
/** CAN1_F7R1_FB15 Filter bits **/
#define CAN1_F7R1_FB15		(1 << 15)
/** CAN1_F7R1_FB14 Filter bits **/
#define CAN1_F7R1_FB14		(1 << 14)
/** CAN1_F7R1_FB13 Filter bits **/
#define CAN1_F7R1_FB13		(1 << 13)
/** CAN1_F7R1_FB12 Filter bits **/
#define CAN1_F7R1_FB12		(1 << 12)
/** CAN1_F7R1_FB11 Filter bits **/
#define CAN1_F7R1_FB11		(1 << 11)
/** CAN1_F7R1_FB10 Filter bits **/
#define CAN1_F7R1_FB10		(1 << 10)
/** CAN1_F7R1_FB9 Filter bits **/
#define CAN1_F7R1_FB9		(1 << 9)
/** CAN1_F7R1_FB8 Filter bits **/
#define CAN1_F7R1_FB8		(1 << 8)
/** CAN1_F7R1_FB7 Filter bits **/
#define CAN1_F7R1_FB7		(1 << 7)
/** CAN1_F7R1_FB6 Filter bits **/
#define CAN1_F7R1_FB6		(1 << 6)
/** CAN1_F7R1_FB5 Filter bits **/
#define CAN1_F7R1_FB5		(1 << 5)
/** CAN1_F7R1_FB4 Filter bits **/
#define CAN1_F7R1_FB4		(1 << 4)
/** CAN1_F7R1_FB3 Filter bits **/
#define CAN1_F7R1_FB3		(1 << 3)
/** CAN1_F7R1_FB2 Filter bits **/
#define CAN1_F7R1_FB2		(1 << 2)
/** CAN1_F7R1_FB1 Filter bits **/
#define CAN1_F7R1_FB1		(1 << 1)
/** CAN1_F7R1_FB0 Filter bits **/
#define CAN1_F7R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f7r2 F7R2 Filter bank 7 register 2
@{*/

/** CAN1_F7R2_FB31 Filter bits **/
#define CAN1_F7R2_FB31		(1 << 31)
/** CAN1_F7R2_FB30 Filter bits **/
#define CAN1_F7R2_FB30		(1 << 30)
/** CAN1_F7R2_FB29 Filter bits **/
#define CAN1_F7R2_FB29		(1 << 29)
/** CAN1_F7R2_FB28 Filter bits **/
#define CAN1_F7R2_FB28		(1 << 28)
/** CAN1_F7R2_FB27 Filter bits **/
#define CAN1_F7R2_FB27		(1 << 27)
/** CAN1_F7R2_FB26 Filter bits **/
#define CAN1_F7R2_FB26		(1 << 26)
/** CAN1_F7R2_FB25 Filter bits **/
#define CAN1_F7R2_FB25		(1 << 25)
/** CAN1_F7R2_FB24 Filter bits **/
#define CAN1_F7R2_FB24		(1 << 24)
/** CAN1_F7R2_FB23 Filter bits **/
#define CAN1_F7R2_FB23		(1 << 23)
/** CAN1_F7R2_FB22 Filter bits **/
#define CAN1_F7R2_FB22		(1 << 22)
/** CAN1_F7R2_FB21 Filter bits **/
#define CAN1_F7R2_FB21		(1 << 21)
/** CAN1_F7R2_FB20 Filter bits **/
#define CAN1_F7R2_FB20		(1 << 20)
/** CAN1_F7R2_FB19 Filter bits **/
#define CAN1_F7R2_FB19		(1 << 19)
/** CAN1_F7R2_FB18 Filter bits **/
#define CAN1_F7R2_FB18		(1 << 18)
/** CAN1_F7R2_FB17 Filter bits **/
#define CAN1_F7R2_FB17		(1 << 17)
/** CAN1_F7R2_FB16 Filter bits **/
#define CAN1_F7R2_FB16		(1 << 16)
/** CAN1_F7R2_FB15 Filter bits **/
#define CAN1_F7R2_FB15		(1 << 15)
/** CAN1_F7R2_FB14 Filter bits **/
#define CAN1_F7R2_FB14		(1 << 14)
/** CAN1_F7R2_FB13 Filter bits **/
#define CAN1_F7R2_FB13		(1 << 13)
/** CAN1_F7R2_FB12 Filter bits **/
#define CAN1_F7R2_FB12		(1 << 12)
/** CAN1_F7R2_FB11 Filter bits **/
#define CAN1_F7R2_FB11		(1 << 11)
/** CAN1_F7R2_FB10 Filter bits **/
#define CAN1_F7R2_FB10		(1 << 10)
/** CAN1_F7R2_FB9 Filter bits **/
#define CAN1_F7R2_FB9		(1 << 9)
/** CAN1_F7R2_FB8 Filter bits **/
#define CAN1_F7R2_FB8		(1 << 8)
/** CAN1_F7R2_FB7 Filter bits **/
#define CAN1_F7R2_FB7		(1 << 7)
/** CAN1_F7R2_FB6 Filter bits **/
#define CAN1_F7R2_FB6		(1 << 6)
/** CAN1_F7R2_FB5 Filter bits **/
#define CAN1_F7R2_FB5		(1 << 5)
/** CAN1_F7R2_FB4 Filter bits **/
#define CAN1_F7R2_FB4		(1 << 4)
/** CAN1_F7R2_FB3 Filter bits **/
#define CAN1_F7R2_FB3		(1 << 3)
/** CAN1_F7R2_FB2 Filter bits **/
#define CAN1_F7R2_FB2		(1 << 2)
/** CAN1_F7R2_FB1 Filter bits **/
#define CAN1_F7R2_FB1		(1 << 1)
/** CAN1_F7R2_FB0 Filter bits **/
#define CAN1_F7R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f8r1 F8R1 Filter bank 8 register 1
@{*/

/** CAN1_F8R1_FB31 Filter bits **/
#define CAN1_F8R1_FB31		(1 << 31)
/** CAN1_F8R1_FB30 Filter bits **/
#define CAN1_F8R1_FB30		(1 << 30)
/** CAN1_F8R1_FB29 Filter bits **/
#define CAN1_F8R1_FB29		(1 << 29)
/** CAN1_F8R1_FB28 Filter bits **/
#define CAN1_F8R1_FB28		(1 << 28)
/** CAN1_F8R1_FB27 Filter bits **/
#define CAN1_F8R1_FB27		(1 << 27)
/** CAN1_F8R1_FB26 Filter bits **/
#define CAN1_F8R1_FB26		(1 << 26)
/** CAN1_F8R1_FB25 Filter bits **/
#define CAN1_F8R1_FB25		(1 << 25)
/** CAN1_F8R1_FB24 Filter bits **/
#define CAN1_F8R1_FB24		(1 << 24)
/** CAN1_F8R1_FB23 Filter bits **/
#define CAN1_F8R1_FB23		(1 << 23)
/** CAN1_F8R1_FB22 Filter bits **/
#define CAN1_F8R1_FB22		(1 << 22)
/** CAN1_F8R1_FB21 Filter bits **/
#define CAN1_F8R1_FB21		(1 << 21)
/** CAN1_F8R1_FB20 Filter bits **/
#define CAN1_F8R1_FB20		(1 << 20)
/** CAN1_F8R1_FB19 Filter bits **/
#define CAN1_F8R1_FB19		(1 << 19)
/** CAN1_F8R1_FB18 Filter bits **/
#define CAN1_F8R1_FB18		(1 << 18)
/** CAN1_F8R1_FB17 Filter bits **/
#define CAN1_F8R1_FB17		(1 << 17)
/** CAN1_F8R1_FB16 Filter bits **/
#define CAN1_F8R1_FB16		(1 << 16)
/** CAN1_F8R1_FB15 Filter bits **/
#define CAN1_F8R1_FB15		(1 << 15)
/** CAN1_F8R1_FB14 Filter bits **/
#define CAN1_F8R1_FB14		(1 << 14)
/** CAN1_F8R1_FB13 Filter bits **/
#define CAN1_F8R1_FB13		(1 << 13)
/** CAN1_F8R1_FB12 Filter bits **/
#define CAN1_F8R1_FB12		(1 << 12)
/** CAN1_F8R1_FB11 Filter bits **/
#define CAN1_F8R1_FB11		(1 << 11)
/** CAN1_F8R1_FB10 Filter bits **/
#define CAN1_F8R1_FB10		(1 << 10)
/** CAN1_F8R1_FB9 Filter bits **/
#define CAN1_F8R1_FB9		(1 << 9)
/** CAN1_F8R1_FB8 Filter bits **/
#define CAN1_F8R1_FB8		(1 << 8)
/** CAN1_F8R1_FB7 Filter bits **/
#define CAN1_F8R1_FB7		(1 << 7)
/** CAN1_F8R1_FB6 Filter bits **/
#define CAN1_F8R1_FB6		(1 << 6)
/** CAN1_F8R1_FB5 Filter bits **/
#define CAN1_F8R1_FB5		(1 << 5)
/** CAN1_F8R1_FB4 Filter bits **/
#define CAN1_F8R1_FB4		(1 << 4)
/** CAN1_F8R1_FB3 Filter bits **/
#define CAN1_F8R1_FB3		(1 << 3)
/** CAN1_F8R1_FB2 Filter bits **/
#define CAN1_F8R1_FB2		(1 << 2)
/** CAN1_F8R1_FB1 Filter bits **/
#define CAN1_F8R1_FB1		(1 << 1)
/** CAN1_F8R1_FB0 Filter bits **/
#define CAN1_F8R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f8r2 F8R2 Filter bank 8 register 2
@{*/

/** CAN1_F8R2_FB31 Filter bits **/
#define CAN1_F8R2_FB31		(1 << 31)
/** CAN1_F8R2_FB30 Filter bits **/
#define CAN1_F8R2_FB30		(1 << 30)
/** CAN1_F8R2_FB29 Filter bits **/
#define CAN1_F8R2_FB29		(1 << 29)
/** CAN1_F8R2_FB28 Filter bits **/
#define CAN1_F8R2_FB28		(1 << 28)
/** CAN1_F8R2_FB27 Filter bits **/
#define CAN1_F8R2_FB27		(1 << 27)
/** CAN1_F8R2_FB26 Filter bits **/
#define CAN1_F8R2_FB26		(1 << 26)
/** CAN1_F8R2_FB25 Filter bits **/
#define CAN1_F8R2_FB25		(1 << 25)
/** CAN1_F8R2_FB24 Filter bits **/
#define CAN1_F8R2_FB24		(1 << 24)
/** CAN1_F8R2_FB23 Filter bits **/
#define CAN1_F8R2_FB23		(1 << 23)
/** CAN1_F8R2_FB22 Filter bits **/
#define CAN1_F8R2_FB22		(1 << 22)
/** CAN1_F8R2_FB21 Filter bits **/
#define CAN1_F8R2_FB21		(1 << 21)
/** CAN1_F8R2_FB20 Filter bits **/
#define CAN1_F8R2_FB20		(1 << 20)
/** CAN1_F8R2_FB19 Filter bits **/
#define CAN1_F8R2_FB19		(1 << 19)
/** CAN1_F8R2_FB18 Filter bits **/
#define CAN1_F8R2_FB18		(1 << 18)
/** CAN1_F8R2_FB17 Filter bits **/
#define CAN1_F8R2_FB17		(1 << 17)
/** CAN1_F8R2_FB16 Filter bits **/
#define CAN1_F8R2_FB16		(1 << 16)
/** CAN1_F8R2_FB15 Filter bits **/
#define CAN1_F8R2_FB15		(1 << 15)
/** CAN1_F8R2_FB14 Filter bits **/
#define CAN1_F8R2_FB14		(1 << 14)
/** CAN1_F8R2_FB13 Filter bits **/
#define CAN1_F8R2_FB13		(1 << 13)
/** CAN1_F8R2_FB12 Filter bits **/
#define CAN1_F8R2_FB12		(1 << 12)
/** CAN1_F8R2_FB11 Filter bits **/
#define CAN1_F8R2_FB11		(1 << 11)
/** CAN1_F8R2_FB10 Filter bits **/
#define CAN1_F8R2_FB10		(1 << 10)
/** CAN1_F8R2_FB9 Filter bits **/
#define CAN1_F8R2_FB9		(1 << 9)
/** CAN1_F8R2_FB8 Filter bits **/
#define CAN1_F8R2_FB8		(1 << 8)
/** CAN1_F8R2_FB7 Filter bits **/
#define CAN1_F8R2_FB7		(1 << 7)
/** CAN1_F8R2_FB6 Filter bits **/
#define CAN1_F8R2_FB6		(1 << 6)
/** CAN1_F8R2_FB5 Filter bits **/
#define CAN1_F8R2_FB5		(1 << 5)
/** CAN1_F8R2_FB4 Filter bits **/
#define CAN1_F8R2_FB4		(1 << 4)
/** CAN1_F8R2_FB3 Filter bits **/
#define CAN1_F8R2_FB3		(1 << 3)
/** CAN1_F8R2_FB2 Filter bits **/
#define CAN1_F8R2_FB2		(1 << 2)
/** CAN1_F8R2_FB1 Filter bits **/
#define CAN1_F8R2_FB1		(1 << 1)
/** CAN1_F8R2_FB0 Filter bits **/
#define CAN1_F8R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f9r1 F9R1 Filter bank 9 register 1
@{*/

/** CAN1_F9R1_FB31 Filter bits **/
#define CAN1_F9R1_FB31		(1 << 31)
/** CAN1_F9R1_FB30 Filter bits **/
#define CAN1_F9R1_FB30		(1 << 30)
/** CAN1_F9R1_FB29 Filter bits **/
#define CAN1_F9R1_FB29		(1 << 29)
/** CAN1_F9R1_FB28 Filter bits **/
#define CAN1_F9R1_FB28		(1 << 28)
/** CAN1_F9R1_FB27 Filter bits **/
#define CAN1_F9R1_FB27		(1 << 27)
/** CAN1_F9R1_FB26 Filter bits **/
#define CAN1_F9R1_FB26		(1 << 26)
/** CAN1_F9R1_FB25 Filter bits **/
#define CAN1_F9R1_FB25		(1 << 25)
/** CAN1_F9R1_FB24 Filter bits **/
#define CAN1_F9R1_FB24		(1 << 24)
/** CAN1_F9R1_FB23 Filter bits **/
#define CAN1_F9R1_FB23		(1 << 23)
/** CAN1_F9R1_FB22 Filter bits **/
#define CAN1_F9R1_FB22		(1 << 22)
/** CAN1_F9R1_FB21 Filter bits **/
#define CAN1_F9R1_FB21		(1 << 21)
/** CAN1_F9R1_FB20 Filter bits **/
#define CAN1_F9R1_FB20		(1 << 20)
/** CAN1_F9R1_FB19 Filter bits **/
#define CAN1_F9R1_FB19		(1 << 19)
/** CAN1_F9R1_FB18 Filter bits **/
#define CAN1_F9R1_FB18		(1 << 18)
/** CAN1_F9R1_FB17 Filter bits **/
#define CAN1_F9R1_FB17		(1 << 17)
/** CAN1_F9R1_FB16 Filter bits **/
#define CAN1_F9R1_FB16		(1 << 16)
/** CAN1_F9R1_FB15 Filter bits **/
#define CAN1_F9R1_FB15		(1 << 15)
/** CAN1_F9R1_FB14 Filter bits **/
#define CAN1_F9R1_FB14		(1 << 14)
/** CAN1_F9R1_FB13 Filter bits **/
#define CAN1_F9R1_FB13		(1 << 13)
/** CAN1_F9R1_FB12 Filter bits **/
#define CAN1_F9R1_FB12		(1 << 12)
/** CAN1_F9R1_FB11 Filter bits **/
#define CAN1_F9R1_FB11		(1 << 11)
/** CAN1_F9R1_FB10 Filter bits **/
#define CAN1_F9R1_FB10		(1 << 10)
/** CAN1_F9R1_FB9 Filter bits **/
#define CAN1_F9R1_FB9		(1 << 9)
/** CAN1_F9R1_FB8 Filter bits **/
#define CAN1_F9R1_FB8		(1 << 8)
/** CAN1_F9R1_FB7 Filter bits **/
#define CAN1_F9R1_FB7		(1 << 7)
/** CAN1_F9R1_FB6 Filter bits **/
#define CAN1_F9R1_FB6		(1 << 6)
/** CAN1_F9R1_FB5 Filter bits **/
#define CAN1_F9R1_FB5		(1 << 5)
/** CAN1_F9R1_FB4 Filter bits **/
#define CAN1_F9R1_FB4		(1 << 4)
/** CAN1_F9R1_FB3 Filter bits **/
#define CAN1_F9R1_FB3		(1 << 3)
/** CAN1_F9R1_FB2 Filter bits **/
#define CAN1_F9R1_FB2		(1 << 2)
/** CAN1_F9R1_FB1 Filter bits **/
#define CAN1_F9R1_FB1		(1 << 1)
/** CAN1_F9R1_FB0 Filter bits **/
#define CAN1_F9R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f9r2 F9R2 Filter bank 9 register 2
@{*/

/** CAN1_F9R2_FB31 Filter bits **/
#define CAN1_F9R2_FB31		(1 << 31)
/** CAN1_F9R2_FB30 Filter bits **/
#define CAN1_F9R2_FB30		(1 << 30)
/** CAN1_F9R2_FB29 Filter bits **/
#define CAN1_F9R2_FB29		(1 << 29)
/** CAN1_F9R2_FB28 Filter bits **/
#define CAN1_F9R2_FB28		(1 << 28)
/** CAN1_F9R2_FB27 Filter bits **/
#define CAN1_F9R2_FB27		(1 << 27)
/** CAN1_F9R2_FB26 Filter bits **/
#define CAN1_F9R2_FB26		(1 << 26)
/** CAN1_F9R2_FB25 Filter bits **/
#define CAN1_F9R2_FB25		(1 << 25)
/** CAN1_F9R2_FB24 Filter bits **/
#define CAN1_F9R2_FB24		(1 << 24)
/** CAN1_F9R2_FB23 Filter bits **/
#define CAN1_F9R2_FB23		(1 << 23)
/** CAN1_F9R2_FB22 Filter bits **/
#define CAN1_F9R2_FB22		(1 << 22)
/** CAN1_F9R2_FB21 Filter bits **/
#define CAN1_F9R2_FB21		(1 << 21)
/** CAN1_F9R2_FB20 Filter bits **/
#define CAN1_F9R2_FB20		(1 << 20)
/** CAN1_F9R2_FB19 Filter bits **/
#define CAN1_F9R2_FB19		(1 << 19)
/** CAN1_F9R2_FB18 Filter bits **/
#define CAN1_F9R2_FB18		(1 << 18)
/** CAN1_F9R2_FB17 Filter bits **/
#define CAN1_F9R2_FB17		(1 << 17)
/** CAN1_F9R2_FB16 Filter bits **/
#define CAN1_F9R2_FB16		(1 << 16)
/** CAN1_F9R2_FB15 Filter bits **/
#define CAN1_F9R2_FB15		(1 << 15)
/** CAN1_F9R2_FB14 Filter bits **/
#define CAN1_F9R2_FB14		(1 << 14)
/** CAN1_F9R2_FB13 Filter bits **/
#define CAN1_F9R2_FB13		(1 << 13)
/** CAN1_F9R2_FB12 Filter bits **/
#define CAN1_F9R2_FB12		(1 << 12)
/** CAN1_F9R2_FB11 Filter bits **/
#define CAN1_F9R2_FB11		(1 << 11)
/** CAN1_F9R2_FB10 Filter bits **/
#define CAN1_F9R2_FB10		(1 << 10)
/** CAN1_F9R2_FB9 Filter bits **/
#define CAN1_F9R2_FB9		(1 << 9)
/** CAN1_F9R2_FB8 Filter bits **/
#define CAN1_F9R2_FB8		(1 << 8)
/** CAN1_F9R2_FB7 Filter bits **/
#define CAN1_F9R2_FB7		(1 << 7)
/** CAN1_F9R2_FB6 Filter bits **/
#define CAN1_F9R2_FB6		(1 << 6)
/** CAN1_F9R2_FB5 Filter bits **/
#define CAN1_F9R2_FB5		(1 << 5)
/** CAN1_F9R2_FB4 Filter bits **/
#define CAN1_F9R2_FB4		(1 << 4)
/** CAN1_F9R2_FB3 Filter bits **/
#define CAN1_F9R2_FB3		(1 << 3)
/** CAN1_F9R2_FB2 Filter bits **/
#define CAN1_F9R2_FB2		(1 << 2)
/** CAN1_F9R2_FB1 Filter bits **/
#define CAN1_F9R2_FB1		(1 << 1)
/** CAN1_F9R2_FB0 Filter bits **/
#define CAN1_F9R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f10r1 F10R1 Filter bank 10 register 1
@{*/

/** CAN1_F10R1_FB31 Filter bits **/
#define CAN1_F10R1_FB31		(1 << 31)
/** CAN1_F10R1_FB30 Filter bits **/
#define CAN1_F10R1_FB30		(1 << 30)
/** CAN1_F10R1_FB29 Filter bits **/
#define CAN1_F10R1_FB29		(1 << 29)
/** CAN1_F10R1_FB28 Filter bits **/
#define CAN1_F10R1_FB28		(1 << 28)
/** CAN1_F10R1_FB27 Filter bits **/
#define CAN1_F10R1_FB27		(1 << 27)
/** CAN1_F10R1_FB26 Filter bits **/
#define CAN1_F10R1_FB26		(1 << 26)
/** CAN1_F10R1_FB25 Filter bits **/
#define CAN1_F10R1_FB25		(1 << 25)
/** CAN1_F10R1_FB24 Filter bits **/
#define CAN1_F10R1_FB24		(1 << 24)
/** CAN1_F10R1_FB23 Filter bits **/
#define CAN1_F10R1_FB23		(1 << 23)
/** CAN1_F10R1_FB22 Filter bits **/
#define CAN1_F10R1_FB22		(1 << 22)
/** CAN1_F10R1_FB21 Filter bits **/
#define CAN1_F10R1_FB21		(1 << 21)
/** CAN1_F10R1_FB20 Filter bits **/
#define CAN1_F10R1_FB20		(1 << 20)
/** CAN1_F10R1_FB19 Filter bits **/
#define CAN1_F10R1_FB19		(1 << 19)
/** CAN1_F10R1_FB18 Filter bits **/
#define CAN1_F10R1_FB18		(1 << 18)
/** CAN1_F10R1_FB17 Filter bits **/
#define CAN1_F10R1_FB17		(1 << 17)
/** CAN1_F10R1_FB16 Filter bits **/
#define CAN1_F10R1_FB16		(1 << 16)
/** CAN1_F10R1_FB15 Filter bits **/
#define CAN1_F10R1_FB15		(1 << 15)
/** CAN1_F10R1_FB14 Filter bits **/
#define CAN1_F10R1_FB14		(1 << 14)
/** CAN1_F10R1_FB13 Filter bits **/
#define CAN1_F10R1_FB13		(1 << 13)
/** CAN1_F10R1_FB12 Filter bits **/
#define CAN1_F10R1_FB12		(1 << 12)
/** CAN1_F10R1_FB11 Filter bits **/
#define CAN1_F10R1_FB11		(1 << 11)
/** CAN1_F10R1_FB10 Filter bits **/
#define CAN1_F10R1_FB10		(1 << 10)
/** CAN1_F10R1_FB9 Filter bits **/
#define CAN1_F10R1_FB9		(1 << 9)
/** CAN1_F10R1_FB8 Filter bits **/
#define CAN1_F10R1_FB8		(1 << 8)
/** CAN1_F10R1_FB7 Filter bits **/
#define CAN1_F10R1_FB7		(1 << 7)
/** CAN1_F10R1_FB6 Filter bits **/
#define CAN1_F10R1_FB6		(1 << 6)
/** CAN1_F10R1_FB5 Filter bits **/
#define CAN1_F10R1_FB5		(1 << 5)
/** CAN1_F10R1_FB4 Filter bits **/
#define CAN1_F10R1_FB4		(1 << 4)
/** CAN1_F10R1_FB3 Filter bits **/
#define CAN1_F10R1_FB3		(1 << 3)
/** CAN1_F10R1_FB2 Filter bits **/
#define CAN1_F10R1_FB2		(1 << 2)
/** CAN1_F10R1_FB1 Filter bits **/
#define CAN1_F10R1_FB1		(1 << 1)
/** CAN1_F10R1_FB0 Filter bits **/
#define CAN1_F10R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f10r2 F10R2 Filter bank 10 register 2
@{*/

/** CAN1_F10R2_FB31 Filter bits **/
#define CAN1_F10R2_FB31		(1 << 31)
/** CAN1_F10R2_FB30 Filter bits **/
#define CAN1_F10R2_FB30		(1 << 30)
/** CAN1_F10R2_FB29 Filter bits **/
#define CAN1_F10R2_FB29		(1 << 29)
/** CAN1_F10R2_FB28 Filter bits **/
#define CAN1_F10R2_FB28		(1 << 28)
/** CAN1_F10R2_FB27 Filter bits **/
#define CAN1_F10R2_FB27		(1 << 27)
/** CAN1_F10R2_FB26 Filter bits **/
#define CAN1_F10R2_FB26		(1 << 26)
/** CAN1_F10R2_FB25 Filter bits **/
#define CAN1_F10R2_FB25		(1 << 25)
/** CAN1_F10R2_FB24 Filter bits **/
#define CAN1_F10R2_FB24		(1 << 24)
/** CAN1_F10R2_FB23 Filter bits **/
#define CAN1_F10R2_FB23		(1 << 23)
/** CAN1_F10R2_FB22 Filter bits **/
#define CAN1_F10R2_FB22		(1 << 22)
/** CAN1_F10R2_FB21 Filter bits **/
#define CAN1_F10R2_FB21		(1 << 21)
/** CAN1_F10R2_FB20 Filter bits **/
#define CAN1_F10R2_FB20		(1 << 20)
/** CAN1_F10R2_FB19 Filter bits **/
#define CAN1_F10R2_FB19		(1 << 19)
/** CAN1_F10R2_FB18 Filter bits **/
#define CAN1_F10R2_FB18		(1 << 18)
/** CAN1_F10R2_FB17 Filter bits **/
#define CAN1_F10R2_FB17		(1 << 17)
/** CAN1_F10R2_FB16 Filter bits **/
#define CAN1_F10R2_FB16		(1 << 16)
/** CAN1_F10R2_FB15 Filter bits **/
#define CAN1_F10R2_FB15		(1 << 15)
/** CAN1_F10R2_FB14 Filter bits **/
#define CAN1_F10R2_FB14		(1 << 14)
/** CAN1_F10R2_FB13 Filter bits **/
#define CAN1_F10R2_FB13		(1 << 13)
/** CAN1_F10R2_FB12 Filter bits **/
#define CAN1_F10R2_FB12		(1 << 12)
/** CAN1_F10R2_FB11 Filter bits **/
#define CAN1_F10R2_FB11		(1 << 11)
/** CAN1_F10R2_FB10 Filter bits **/
#define CAN1_F10R2_FB10		(1 << 10)
/** CAN1_F10R2_FB9 Filter bits **/
#define CAN1_F10R2_FB9		(1 << 9)
/** CAN1_F10R2_FB8 Filter bits **/
#define CAN1_F10R2_FB8		(1 << 8)
/** CAN1_F10R2_FB7 Filter bits **/
#define CAN1_F10R2_FB7		(1 << 7)
/** CAN1_F10R2_FB6 Filter bits **/
#define CAN1_F10R2_FB6		(1 << 6)
/** CAN1_F10R2_FB5 Filter bits **/
#define CAN1_F10R2_FB5		(1 << 5)
/** CAN1_F10R2_FB4 Filter bits **/
#define CAN1_F10R2_FB4		(1 << 4)
/** CAN1_F10R2_FB3 Filter bits **/
#define CAN1_F10R2_FB3		(1 << 3)
/** CAN1_F10R2_FB2 Filter bits **/
#define CAN1_F10R2_FB2		(1 << 2)
/** CAN1_F10R2_FB1 Filter bits **/
#define CAN1_F10R2_FB1		(1 << 1)
/** CAN1_F10R2_FB0 Filter bits **/
#define CAN1_F10R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f11r1 F11R1 Filter bank 11 register 1
@{*/

/** CAN1_F11R1_FB31 Filter bits **/
#define CAN1_F11R1_FB31		(1 << 31)
/** CAN1_F11R1_FB30 Filter bits **/
#define CAN1_F11R1_FB30		(1 << 30)
/** CAN1_F11R1_FB29 Filter bits **/
#define CAN1_F11R1_FB29		(1 << 29)
/** CAN1_F11R1_FB28 Filter bits **/
#define CAN1_F11R1_FB28		(1 << 28)
/** CAN1_F11R1_FB27 Filter bits **/
#define CAN1_F11R1_FB27		(1 << 27)
/** CAN1_F11R1_FB26 Filter bits **/
#define CAN1_F11R1_FB26		(1 << 26)
/** CAN1_F11R1_FB25 Filter bits **/
#define CAN1_F11R1_FB25		(1 << 25)
/** CAN1_F11R1_FB24 Filter bits **/
#define CAN1_F11R1_FB24		(1 << 24)
/** CAN1_F11R1_FB23 Filter bits **/
#define CAN1_F11R1_FB23		(1 << 23)
/** CAN1_F11R1_FB22 Filter bits **/
#define CAN1_F11R1_FB22		(1 << 22)
/** CAN1_F11R1_FB21 Filter bits **/
#define CAN1_F11R1_FB21		(1 << 21)
/** CAN1_F11R1_FB20 Filter bits **/
#define CAN1_F11R1_FB20		(1 << 20)
/** CAN1_F11R1_FB19 Filter bits **/
#define CAN1_F11R1_FB19		(1 << 19)
/** CAN1_F11R1_FB18 Filter bits **/
#define CAN1_F11R1_FB18		(1 << 18)
/** CAN1_F11R1_FB17 Filter bits **/
#define CAN1_F11R1_FB17		(1 << 17)
/** CAN1_F11R1_FB16 Filter bits **/
#define CAN1_F11R1_FB16		(1 << 16)
/** CAN1_F11R1_FB15 Filter bits **/
#define CAN1_F11R1_FB15		(1 << 15)
/** CAN1_F11R1_FB14 Filter bits **/
#define CAN1_F11R1_FB14		(1 << 14)
/** CAN1_F11R1_FB13 Filter bits **/
#define CAN1_F11R1_FB13		(1 << 13)
/** CAN1_F11R1_FB12 Filter bits **/
#define CAN1_F11R1_FB12		(1 << 12)
/** CAN1_F11R1_FB11 Filter bits **/
#define CAN1_F11R1_FB11		(1 << 11)
/** CAN1_F11R1_FB10 Filter bits **/
#define CAN1_F11R1_FB10		(1 << 10)
/** CAN1_F11R1_FB9 Filter bits **/
#define CAN1_F11R1_FB9		(1 << 9)
/** CAN1_F11R1_FB8 Filter bits **/
#define CAN1_F11R1_FB8		(1 << 8)
/** CAN1_F11R1_FB7 Filter bits **/
#define CAN1_F11R1_FB7		(1 << 7)
/** CAN1_F11R1_FB6 Filter bits **/
#define CAN1_F11R1_FB6		(1 << 6)
/** CAN1_F11R1_FB5 Filter bits **/
#define CAN1_F11R1_FB5		(1 << 5)
/** CAN1_F11R1_FB4 Filter bits **/
#define CAN1_F11R1_FB4		(1 << 4)
/** CAN1_F11R1_FB3 Filter bits **/
#define CAN1_F11R1_FB3		(1 << 3)
/** CAN1_F11R1_FB2 Filter bits **/
#define CAN1_F11R1_FB2		(1 << 2)
/** CAN1_F11R1_FB1 Filter bits **/
#define CAN1_F11R1_FB1		(1 << 1)
/** CAN1_F11R1_FB0 Filter bits **/
#define CAN1_F11R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f11r2 F11R2 Filter bank 11 register 2
@{*/

/** CAN1_F11R2_FB31 Filter bits **/
#define CAN1_F11R2_FB31		(1 << 31)
/** CAN1_F11R2_FB30 Filter bits **/
#define CAN1_F11R2_FB30		(1 << 30)
/** CAN1_F11R2_FB29 Filter bits **/
#define CAN1_F11R2_FB29		(1 << 29)
/** CAN1_F11R2_FB28 Filter bits **/
#define CAN1_F11R2_FB28		(1 << 28)
/** CAN1_F11R2_FB27 Filter bits **/
#define CAN1_F11R2_FB27		(1 << 27)
/** CAN1_F11R2_FB26 Filter bits **/
#define CAN1_F11R2_FB26		(1 << 26)
/** CAN1_F11R2_FB25 Filter bits **/
#define CAN1_F11R2_FB25		(1 << 25)
/** CAN1_F11R2_FB24 Filter bits **/
#define CAN1_F11R2_FB24		(1 << 24)
/** CAN1_F11R2_FB23 Filter bits **/
#define CAN1_F11R2_FB23		(1 << 23)
/** CAN1_F11R2_FB22 Filter bits **/
#define CAN1_F11R2_FB22		(1 << 22)
/** CAN1_F11R2_FB21 Filter bits **/
#define CAN1_F11R2_FB21		(1 << 21)
/** CAN1_F11R2_FB20 Filter bits **/
#define CAN1_F11R2_FB20		(1 << 20)
/** CAN1_F11R2_FB19 Filter bits **/
#define CAN1_F11R2_FB19		(1 << 19)
/** CAN1_F11R2_FB18 Filter bits **/
#define CAN1_F11R2_FB18		(1 << 18)
/** CAN1_F11R2_FB17 Filter bits **/
#define CAN1_F11R2_FB17		(1 << 17)
/** CAN1_F11R2_FB16 Filter bits **/
#define CAN1_F11R2_FB16		(1 << 16)
/** CAN1_F11R2_FB15 Filter bits **/
#define CAN1_F11R2_FB15		(1 << 15)
/** CAN1_F11R2_FB14 Filter bits **/
#define CAN1_F11R2_FB14		(1 << 14)
/** CAN1_F11R2_FB13 Filter bits **/
#define CAN1_F11R2_FB13		(1 << 13)
/** CAN1_F11R2_FB12 Filter bits **/
#define CAN1_F11R2_FB12		(1 << 12)
/** CAN1_F11R2_FB11 Filter bits **/
#define CAN1_F11R2_FB11		(1 << 11)
/** CAN1_F11R2_FB10 Filter bits **/
#define CAN1_F11R2_FB10		(1 << 10)
/** CAN1_F11R2_FB9 Filter bits **/
#define CAN1_F11R2_FB9		(1 << 9)
/** CAN1_F11R2_FB8 Filter bits **/
#define CAN1_F11R2_FB8		(1 << 8)
/** CAN1_F11R2_FB7 Filter bits **/
#define CAN1_F11R2_FB7		(1 << 7)
/** CAN1_F11R2_FB6 Filter bits **/
#define CAN1_F11R2_FB6		(1 << 6)
/** CAN1_F11R2_FB5 Filter bits **/
#define CAN1_F11R2_FB5		(1 << 5)
/** CAN1_F11R2_FB4 Filter bits **/
#define CAN1_F11R2_FB4		(1 << 4)
/** CAN1_F11R2_FB3 Filter bits **/
#define CAN1_F11R2_FB3		(1 << 3)
/** CAN1_F11R2_FB2 Filter bits **/
#define CAN1_F11R2_FB2		(1 << 2)
/** CAN1_F11R2_FB1 Filter bits **/
#define CAN1_F11R2_FB1		(1 << 1)
/** CAN1_F11R2_FB0 Filter bits **/
#define CAN1_F11R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f12r1 F12R1 Filter bank 4 register 1
@{*/

/** CAN1_F12R1_FB31 Filter bits **/
#define CAN1_F12R1_FB31		(1 << 31)
/** CAN1_F12R1_FB30 Filter bits **/
#define CAN1_F12R1_FB30		(1 << 30)
/** CAN1_F12R1_FB29 Filter bits **/
#define CAN1_F12R1_FB29		(1 << 29)
/** CAN1_F12R1_FB28 Filter bits **/
#define CAN1_F12R1_FB28		(1 << 28)
/** CAN1_F12R1_FB27 Filter bits **/
#define CAN1_F12R1_FB27		(1 << 27)
/** CAN1_F12R1_FB26 Filter bits **/
#define CAN1_F12R1_FB26		(1 << 26)
/** CAN1_F12R1_FB25 Filter bits **/
#define CAN1_F12R1_FB25		(1 << 25)
/** CAN1_F12R1_FB24 Filter bits **/
#define CAN1_F12R1_FB24		(1 << 24)
/** CAN1_F12R1_FB23 Filter bits **/
#define CAN1_F12R1_FB23		(1 << 23)
/** CAN1_F12R1_FB22 Filter bits **/
#define CAN1_F12R1_FB22		(1 << 22)
/** CAN1_F12R1_FB21 Filter bits **/
#define CAN1_F12R1_FB21		(1 << 21)
/** CAN1_F12R1_FB20 Filter bits **/
#define CAN1_F12R1_FB20		(1 << 20)
/** CAN1_F12R1_FB19 Filter bits **/
#define CAN1_F12R1_FB19		(1 << 19)
/** CAN1_F12R1_FB18 Filter bits **/
#define CAN1_F12R1_FB18		(1 << 18)
/** CAN1_F12R1_FB17 Filter bits **/
#define CAN1_F12R1_FB17		(1 << 17)
/** CAN1_F12R1_FB16 Filter bits **/
#define CAN1_F12R1_FB16		(1 << 16)
/** CAN1_F12R1_FB15 Filter bits **/
#define CAN1_F12R1_FB15		(1 << 15)
/** CAN1_F12R1_FB14 Filter bits **/
#define CAN1_F12R1_FB14		(1 << 14)
/** CAN1_F12R1_FB13 Filter bits **/
#define CAN1_F12R1_FB13		(1 << 13)
/** CAN1_F12R1_FB12 Filter bits **/
#define CAN1_F12R1_FB12		(1 << 12)
/** CAN1_F12R1_FB11 Filter bits **/
#define CAN1_F12R1_FB11		(1 << 11)
/** CAN1_F12R1_FB10 Filter bits **/
#define CAN1_F12R1_FB10		(1 << 10)
/** CAN1_F12R1_FB9 Filter bits **/
#define CAN1_F12R1_FB9		(1 << 9)
/** CAN1_F12R1_FB8 Filter bits **/
#define CAN1_F12R1_FB8		(1 << 8)
/** CAN1_F12R1_FB7 Filter bits **/
#define CAN1_F12R1_FB7		(1 << 7)
/** CAN1_F12R1_FB6 Filter bits **/
#define CAN1_F12R1_FB6		(1 << 6)
/** CAN1_F12R1_FB5 Filter bits **/
#define CAN1_F12R1_FB5		(1 << 5)
/** CAN1_F12R1_FB4 Filter bits **/
#define CAN1_F12R1_FB4		(1 << 4)
/** CAN1_F12R1_FB3 Filter bits **/
#define CAN1_F12R1_FB3		(1 << 3)
/** CAN1_F12R1_FB2 Filter bits **/
#define CAN1_F12R1_FB2		(1 << 2)
/** CAN1_F12R1_FB1 Filter bits **/
#define CAN1_F12R1_FB1		(1 << 1)
/** CAN1_F12R1_FB0 Filter bits **/
#define CAN1_F12R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f12r2 F12R2 Filter bank 12 register 2
@{*/

/** CAN1_F12R2_FB31 Filter bits **/
#define CAN1_F12R2_FB31		(1 << 31)
/** CAN1_F12R2_FB30 Filter bits **/
#define CAN1_F12R2_FB30		(1 << 30)
/** CAN1_F12R2_FB29 Filter bits **/
#define CAN1_F12R2_FB29		(1 << 29)
/** CAN1_F12R2_FB28 Filter bits **/
#define CAN1_F12R2_FB28		(1 << 28)
/** CAN1_F12R2_FB27 Filter bits **/
#define CAN1_F12R2_FB27		(1 << 27)
/** CAN1_F12R2_FB26 Filter bits **/
#define CAN1_F12R2_FB26		(1 << 26)
/** CAN1_F12R2_FB25 Filter bits **/
#define CAN1_F12R2_FB25		(1 << 25)
/** CAN1_F12R2_FB24 Filter bits **/
#define CAN1_F12R2_FB24		(1 << 24)
/** CAN1_F12R2_FB23 Filter bits **/
#define CAN1_F12R2_FB23		(1 << 23)
/** CAN1_F12R2_FB22 Filter bits **/
#define CAN1_F12R2_FB22		(1 << 22)
/** CAN1_F12R2_FB21 Filter bits **/
#define CAN1_F12R2_FB21		(1 << 21)
/** CAN1_F12R2_FB20 Filter bits **/
#define CAN1_F12R2_FB20		(1 << 20)
/** CAN1_F12R2_FB19 Filter bits **/
#define CAN1_F12R2_FB19		(1 << 19)
/** CAN1_F12R2_FB18 Filter bits **/
#define CAN1_F12R2_FB18		(1 << 18)
/** CAN1_F12R2_FB17 Filter bits **/
#define CAN1_F12R2_FB17		(1 << 17)
/** CAN1_F12R2_FB16 Filter bits **/
#define CAN1_F12R2_FB16		(1 << 16)
/** CAN1_F12R2_FB15 Filter bits **/
#define CAN1_F12R2_FB15		(1 << 15)
/** CAN1_F12R2_FB14 Filter bits **/
#define CAN1_F12R2_FB14		(1 << 14)
/** CAN1_F12R2_FB13 Filter bits **/
#define CAN1_F12R2_FB13		(1 << 13)
/** CAN1_F12R2_FB12 Filter bits **/
#define CAN1_F12R2_FB12		(1 << 12)
/** CAN1_F12R2_FB11 Filter bits **/
#define CAN1_F12R2_FB11		(1 << 11)
/** CAN1_F12R2_FB10 Filter bits **/
#define CAN1_F12R2_FB10		(1 << 10)
/** CAN1_F12R2_FB9 Filter bits **/
#define CAN1_F12R2_FB9		(1 << 9)
/** CAN1_F12R2_FB8 Filter bits **/
#define CAN1_F12R2_FB8		(1 << 8)
/** CAN1_F12R2_FB7 Filter bits **/
#define CAN1_F12R2_FB7		(1 << 7)
/** CAN1_F12R2_FB6 Filter bits **/
#define CAN1_F12R2_FB6		(1 << 6)
/** CAN1_F12R2_FB5 Filter bits **/
#define CAN1_F12R2_FB5		(1 << 5)
/** CAN1_F12R2_FB4 Filter bits **/
#define CAN1_F12R2_FB4		(1 << 4)
/** CAN1_F12R2_FB3 Filter bits **/
#define CAN1_F12R2_FB3		(1 << 3)
/** CAN1_F12R2_FB2 Filter bits **/
#define CAN1_F12R2_FB2		(1 << 2)
/** CAN1_F12R2_FB1 Filter bits **/
#define CAN1_F12R2_FB1		(1 << 1)
/** CAN1_F12R2_FB0 Filter bits **/
#define CAN1_F12R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f13r1 F13R1 Filter bank 13 register 1
@{*/

/** CAN1_F13R1_FB31 Filter bits **/
#define CAN1_F13R1_FB31		(1 << 31)
/** CAN1_F13R1_FB30 Filter bits **/
#define CAN1_F13R1_FB30		(1 << 30)
/** CAN1_F13R1_FB29 Filter bits **/
#define CAN1_F13R1_FB29		(1 << 29)
/** CAN1_F13R1_FB28 Filter bits **/
#define CAN1_F13R1_FB28		(1 << 28)
/** CAN1_F13R1_FB27 Filter bits **/
#define CAN1_F13R1_FB27		(1 << 27)
/** CAN1_F13R1_FB26 Filter bits **/
#define CAN1_F13R1_FB26		(1 << 26)
/** CAN1_F13R1_FB25 Filter bits **/
#define CAN1_F13R1_FB25		(1 << 25)
/** CAN1_F13R1_FB24 Filter bits **/
#define CAN1_F13R1_FB24		(1 << 24)
/** CAN1_F13R1_FB23 Filter bits **/
#define CAN1_F13R1_FB23		(1 << 23)
/** CAN1_F13R1_FB22 Filter bits **/
#define CAN1_F13R1_FB22		(1 << 22)
/** CAN1_F13R1_FB21 Filter bits **/
#define CAN1_F13R1_FB21		(1 << 21)
/** CAN1_F13R1_FB20 Filter bits **/
#define CAN1_F13R1_FB20		(1 << 20)
/** CAN1_F13R1_FB19 Filter bits **/
#define CAN1_F13R1_FB19		(1 << 19)
/** CAN1_F13R1_FB18 Filter bits **/
#define CAN1_F13R1_FB18		(1 << 18)
/** CAN1_F13R1_FB17 Filter bits **/
#define CAN1_F13R1_FB17		(1 << 17)
/** CAN1_F13R1_FB16 Filter bits **/
#define CAN1_F13R1_FB16		(1 << 16)
/** CAN1_F13R1_FB15 Filter bits **/
#define CAN1_F13R1_FB15		(1 << 15)
/** CAN1_F13R1_FB14 Filter bits **/
#define CAN1_F13R1_FB14		(1 << 14)
/** CAN1_F13R1_FB13 Filter bits **/
#define CAN1_F13R1_FB13		(1 << 13)
/** CAN1_F13R1_FB12 Filter bits **/
#define CAN1_F13R1_FB12		(1 << 12)
/** CAN1_F13R1_FB11 Filter bits **/
#define CAN1_F13R1_FB11		(1 << 11)
/** CAN1_F13R1_FB10 Filter bits **/
#define CAN1_F13R1_FB10		(1 << 10)
/** CAN1_F13R1_FB9 Filter bits **/
#define CAN1_F13R1_FB9		(1 << 9)
/** CAN1_F13R1_FB8 Filter bits **/
#define CAN1_F13R1_FB8		(1 << 8)
/** CAN1_F13R1_FB7 Filter bits **/
#define CAN1_F13R1_FB7		(1 << 7)
/** CAN1_F13R1_FB6 Filter bits **/
#define CAN1_F13R1_FB6		(1 << 6)
/** CAN1_F13R1_FB5 Filter bits **/
#define CAN1_F13R1_FB5		(1 << 5)
/** CAN1_F13R1_FB4 Filter bits **/
#define CAN1_F13R1_FB4		(1 << 4)
/** CAN1_F13R1_FB3 Filter bits **/
#define CAN1_F13R1_FB3		(1 << 3)
/** CAN1_F13R1_FB2 Filter bits **/
#define CAN1_F13R1_FB2		(1 << 2)
/** CAN1_F13R1_FB1 Filter bits **/
#define CAN1_F13R1_FB1		(1 << 1)
/** CAN1_F13R1_FB0 Filter bits **/
#define CAN1_F13R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f13r2 F13R2 Filter bank 13 register 2
@{*/

/** CAN1_F13R2_FB31 Filter bits **/
#define CAN1_F13R2_FB31		(1 << 31)
/** CAN1_F13R2_FB30 Filter bits **/
#define CAN1_F13R2_FB30		(1 << 30)
/** CAN1_F13R2_FB29 Filter bits **/
#define CAN1_F13R2_FB29		(1 << 29)
/** CAN1_F13R2_FB28 Filter bits **/
#define CAN1_F13R2_FB28		(1 << 28)
/** CAN1_F13R2_FB27 Filter bits **/
#define CAN1_F13R2_FB27		(1 << 27)
/** CAN1_F13R2_FB26 Filter bits **/
#define CAN1_F13R2_FB26		(1 << 26)
/** CAN1_F13R2_FB25 Filter bits **/
#define CAN1_F13R2_FB25		(1 << 25)
/** CAN1_F13R2_FB24 Filter bits **/
#define CAN1_F13R2_FB24		(1 << 24)
/** CAN1_F13R2_FB23 Filter bits **/
#define CAN1_F13R2_FB23		(1 << 23)
/** CAN1_F13R2_FB22 Filter bits **/
#define CAN1_F13R2_FB22		(1 << 22)
/** CAN1_F13R2_FB21 Filter bits **/
#define CAN1_F13R2_FB21		(1 << 21)
/** CAN1_F13R2_FB20 Filter bits **/
#define CAN1_F13R2_FB20		(1 << 20)
/** CAN1_F13R2_FB19 Filter bits **/
#define CAN1_F13R2_FB19		(1 << 19)
/** CAN1_F13R2_FB18 Filter bits **/
#define CAN1_F13R2_FB18		(1 << 18)
/** CAN1_F13R2_FB17 Filter bits **/
#define CAN1_F13R2_FB17		(1 << 17)
/** CAN1_F13R2_FB16 Filter bits **/
#define CAN1_F13R2_FB16		(1 << 16)
/** CAN1_F13R2_FB15 Filter bits **/
#define CAN1_F13R2_FB15		(1 << 15)
/** CAN1_F13R2_FB14 Filter bits **/
#define CAN1_F13R2_FB14		(1 << 14)
/** CAN1_F13R2_FB13 Filter bits **/
#define CAN1_F13R2_FB13		(1 << 13)
/** CAN1_F13R2_FB12 Filter bits **/
#define CAN1_F13R2_FB12		(1 << 12)
/** CAN1_F13R2_FB11 Filter bits **/
#define CAN1_F13R2_FB11		(1 << 11)
/** CAN1_F13R2_FB10 Filter bits **/
#define CAN1_F13R2_FB10		(1 << 10)
/** CAN1_F13R2_FB9 Filter bits **/
#define CAN1_F13R2_FB9		(1 << 9)
/** CAN1_F13R2_FB8 Filter bits **/
#define CAN1_F13R2_FB8		(1 << 8)
/** CAN1_F13R2_FB7 Filter bits **/
#define CAN1_F13R2_FB7		(1 << 7)
/** CAN1_F13R2_FB6 Filter bits **/
#define CAN1_F13R2_FB6		(1 << 6)
/** CAN1_F13R2_FB5 Filter bits **/
#define CAN1_F13R2_FB5		(1 << 5)
/** CAN1_F13R2_FB4 Filter bits **/
#define CAN1_F13R2_FB4		(1 << 4)
/** CAN1_F13R2_FB3 Filter bits **/
#define CAN1_F13R2_FB3		(1 << 3)
/** CAN1_F13R2_FB2 Filter bits **/
#define CAN1_F13R2_FB2		(1 << 2)
/** CAN1_F13R2_FB1 Filter bits **/
#define CAN1_F13R2_FB1		(1 << 1)
/** CAN1_F13R2_FB0 Filter bits **/
#define CAN1_F13R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f14r1 F14R1 Filter bank 14 register 1
@{*/

/** CAN1_F14R1_FB31 Filter bits **/
#define CAN1_F14R1_FB31		(1 << 31)
/** CAN1_F14R1_FB30 Filter bits **/
#define CAN1_F14R1_FB30		(1 << 30)
/** CAN1_F14R1_FB29 Filter bits **/
#define CAN1_F14R1_FB29		(1 << 29)
/** CAN1_F14R1_FB28 Filter bits **/
#define CAN1_F14R1_FB28		(1 << 28)
/** CAN1_F14R1_FB27 Filter bits **/
#define CAN1_F14R1_FB27		(1 << 27)
/** CAN1_F14R1_FB26 Filter bits **/
#define CAN1_F14R1_FB26		(1 << 26)
/** CAN1_F14R1_FB25 Filter bits **/
#define CAN1_F14R1_FB25		(1 << 25)
/** CAN1_F14R1_FB24 Filter bits **/
#define CAN1_F14R1_FB24		(1 << 24)
/** CAN1_F14R1_FB23 Filter bits **/
#define CAN1_F14R1_FB23		(1 << 23)
/** CAN1_F14R1_FB22 Filter bits **/
#define CAN1_F14R1_FB22		(1 << 22)
/** CAN1_F14R1_FB21 Filter bits **/
#define CAN1_F14R1_FB21		(1 << 21)
/** CAN1_F14R1_FB20 Filter bits **/
#define CAN1_F14R1_FB20		(1 << 20)
/** CAN1_F14R1_FB19 Filter bits **/
#define CAN1_F14R1_FB19		(1 << 19)
/** CAN1_F14R1_FB18 Filter bits **/
#define CAN1_F14R1_FB18		(1 << 18)
/** CAN1_F14R1_FB17 Filter bits **/
#define CAN1_F14R1_FB17		(1 << 17)
/** CAN1_F14R1_FB16 Filter bits **/
#define CAN1_F14R1_FB16		(1 << 16)
/** CAN1_F14R1_FB15 Filter bits **/
#define CAN1_F14R1_FB15		(1 << 15)
/** CAN1_F14R1_FB14 Filter bits **/
#define CAN1_F14R1_FB14		(1 << 14)
/** CAN1_F14R1_FB13 Filter bits **/
#define CAN1_F14R1_FB13		(1 << 13)
/** CAN1_F14R1_FB12 Filter bits **/
#define CAN1_F14R1_FB12		(1 << 12)
/** CAN1_F14R1_FB11 Filter bits **/
#define CAN1_F14R1_FB11		(1 << 11)
/** CAN1_F14R1_FB10 Filter bits **/
#define CAN1_F14R1_FB10		(1 << 10)
/** CAN1_F14R1_FB9 Filter bits **/
#define CAN1_F14R1_FB9		(1 << 9)
/** CAN1_F14R1_FB8 Filter bits **/
#define CAN1_F14R1_FB8		(1 << 8)
/** CAN1_F14R1_FB7 Filter bits **/
#define CAN1_F14R1_FB7		(1 << 7)
/** CAN1_F14R1_FB6 Filter bits **/
#define CAN1_F14R1_FB6		(1 << 6)
/** CAN1_F14R1_FB5 Filter bits **/
#define CAN1_F14R1_FB5		(1 << 5)
/** CAN1_F14R1_FB4 Filter bits **/
#define CAN1_F14R1_FB4		(1 << 4)
/** CAN1_F14R1_FB3 Filter bits **/
#define CAN1_F14R1_FB3		(1 << 3)
/** CAN1_F14R1_FB2 Filter bits **/
#define CAN1_F14R1_FB2		(1 << 2)
/** CAN1_F14R1_FB1 Filter bits **/
#define CAN1_F14R1_FB1		(1 << 1)
/** CAN1_F14R1_FB0 Filter bits **/
#define CAN1_F14R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f14r2 F14R2 Filter bank 14 register 2
@{*/

/** CAN1_F14R2_FB31 Filter bits **/
#define CAN1_F14R2_FB31		(1 << 31)
/** CAN1_F14R2_FB30 Filter bits **/
#define CAN1_F14R2_FB30		(1 << 30)
/** CAN1_F14R2_FB29 Filter bits **/
#define CAN1_F14R2_FB29		(1 << 29)
/** CAN1_F14R2_FB28 Filter bits **/
#define CAN1_F14R2_FB28		(1 << 28)
/** CAN1_F14R2_FB27 Filter bits **/
#define CAN1_F14R2_FB27		(1 << 27)
/** CAN1_F14R2_FB26 Filter bits **/
#define CAN1_F14R2_FB26		(1 << 26)
/** CAN1_F14R2_FB25 Filter bits **/
#define CAN1_F14R2_FB25		(1 << 25)
/** CAN1_F14R2_FB24 Filter bits **/
#define CAN1_F14R2_FB24		(1 << 24)
/** CAN1_F14R2_FB23 Filter bits **/
#define CAN1_F14R2_FB23		(1 << 23)
/** CAN1_F14R2_FB22 Filter bits **/
#define CAN1_F14R2_FB22		(1 << 22)
/** CAN1_F14R2_FB21 Filter bits **/
#define CAN1_F14R2_FB21		(1 << 21)
/** CAN1_F14R2_FB20 Filter bits **/
#define CAN1_F14R2_FB20		(1 << 20)
/** CAN1_F14R2_FB19 Filter bits **/
#define CAN1_F14R2_FB19		(1 << 19)
/** CAN1_F14R2_FB18 Filter bits **/
#define CAN1_F14R2_FB18		(1 << 18)
/** CAN1_F14R2_FB17 Filter bits **/
#define CAN1_F14R2_FB17		(1 << 17)
/** CAN1_F14R2_FB16 Filter bits **/
#define CAN1_F14R2_FB16		(1 << 16)
/** CAN1_F14R2_FB15 Filter bits **/
#define CAN1_F14R2_FB15		(1 << 15)
/** CAN1_F14R2_FB14 Filter bits **/
#define CAN1_F14R2_FB14		(1 << 14)
/** CAN1_F14R2_FB13 Filter bits **/
#define CAN1_F14R2_FB13		(1 << 13)
/** CAN1_F14R2_FB12 Filter bits **/
#define CAN1_F14R2_FB12		(1 << 12)
/** CAN1_F14R2_FB11 Filter bits **/
#define CAN1_F14R2_FB11		(1 << 11)
/** CAN1_F14R2_FB10 Filter bits **/
#define CAN1_F14R2_FB10		(1 << 10)
/** CAN1_F14R2_FB9 Filter bits **/
#define CAN1_F14R2_FB9		(1 << 9)
/** CAN1_F14R2_FB8 Filter bits **/
#define CAN1_F14R2_FB8		(1 << 8)
/** CAN1_F14R2_FB7 Filter bits **/
#define CAN1_F14R2_FB7		(1 << 7)
/** CAN1_F14R2_FB6 Filter bits **/
#define CAN1_F14R2_FB6		(1 << 6)
/** CAN1_F14R2_FB5 Filter bits **/
#define CAN1_F14R2_FB5		(1 << 5)
/** CAN1_F14R2_FB4 Filter bits **/
#define CAN1_F14R2_FB4		(1 << 4)
/** CAN1_F14R2_FB3 Filter bits **/
#define CAN1_F14R2_FB3		(1 << 3)
/** CAN1_F14R2_FB2 Filter bits **/
#define CAN1_F14R2_FB2		(1 << 2)
/** CAN1_F14R2_FB1 Filter bits **/
#define CAN1_F14R2_FB1		(1 << 1)
/** CAN1_F14R2_FB0 Filter bits **/
#define CAN1_F14R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f15r1 F15R1 Filter bank 15 register 1
@{*/

/** CAN1_F15R1_FB31 Filter bits **/
#define CAN1_F15R1_FB31		(1 << 31)
/** CAN1_F15R1_FB30 Filter bits **/
#define CAN1_F15R1_FB30		(1 << 30)
/** CAN1_F15R1_FB29 Filter bits **/
#define CAN1_F15R1_FB29		(1 << 29)
/** CAN1_F15R1_FB28 Filter bits **/
#define CAN1_F15R1_FB28		(1 << 28)
/** CAN1_F15R1_FB27 Filter bits **/
#define CAN1_F15R1_FB27		(1 << 27)
/** CAN1_F15R1_FB26 Filter bits **/
#define CAN1_F15R1_FB26		(1 << 26)
/** CAN1_F15R1_FB25 Filter bits **/
#define CAN1_F15R1_FB25		(1 << 25)
/** CAN1_F15R1_FB24 Filter bits **/
#define CAN1_F15R1_FB24		(1 << 24)
/** CAN1_F15R1_FB23 Filter bits **/
#define CAN1_F15R1_FB23		(1 << 23)
/** CAN1_F15R1_FB22 Filter bits **/
#define CAN1_F15R1_FB22		(1 << 22)
/** CAN1_F15R1_FB21 Filter bits **/
#define CAN1_F15R1_FB21		(1 << 21)
/** CAN1_F15R1_FB20 Filter bits **/
#define CAN1_F15R1_FB20		(1 << 20)
/** CAN1_F15R1_FB19 Filter bits **/
#define CAN1_F15R1_FB19		(1 << 19)
/** CAN1_F15R1_FB18 Filter bits **/
#define CAN1_F15R1_FB18		(1 << 18)
/** CAN1_F15R1_FB17 Filter bits **/
#define CAN1_F15R1_FB17		(1 << 17)
/** CAN1_F15R1_FB16 Filter bits **/
#define CAN1_F15R1_FB16		(1 << 16)
/** CAN1_F15R1_FB15 Filter bits **/
#define CAN1_F15R1_FB15		(1 << 15)
/** CAN1_F15R1_FB14 Filter bits **/
#define CAN1_F15R1_FB14		(1 << 14)
/** CAN1_F15R1_FB13 Filter bits **/
#define CAN1_F15R1_FB13		(1 << 13)
/** CAN1_F15R1_FB12 Filter bits **/
#define CAN1_F15R1_FB12		(1 << 12)
/** CAN1_F15R1_FB11 Filter bits **/
#define CAN1_F15R1_FB11		(1 << 11)
/** CAN1_F15R1_FB10 Filter bits **/
#define CAN1_F15R1_FB10		(1 << 10)
/** CAN1_F15R1_FB9 Filter bits **/
#define CAN1_F15R1_FB9		(1 << 9)
/** CAN1_F15R1_FB8 Filter bits **/
#define CAN1_F15R1_FB8		(1 << 8)
/** CAN1_F15R1_FB7 Filter bits **/
#define CAN1_F15R1_FB7		(1 << 7)
/** CAN1_F15R1_FB6 Filter bits **/
#define CAN1_F15R1_FB6		(1 << 6)
/** CAN1_F15R1_FB5 Filter bits **/
#define CAN1_F15R1_FB5		(1 << 5)
/** CAN1_F15R1_FB4 Filter bits **/
#define CAN1_F15R1_FB4		(1 << 4)
/** CAN1_F15R1_FB3 Filter bits **/
#define CAN1_F15R1_FB3		(1 << 3)
/** CAN1_F15R1_FB2 Filter bits **/
#define CAN1_F15R1_FB2		(1 << 2)
/** CAN1_F15R1_FB1 Filter bits **/
#define CAN1_F15R1_FB1		(1 << 1)
/** CAN1_F15R1_FB0 Filter bits **/
#define CAN1_F15R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f15r2 F15R2 Filter bank 15 register 2
@{*/

/** CAN1_F15R2_FB31 Filter bits **/
#define CAN1_F15R2_FB31		(1 << 31)
/** CAN1_F15R2_FB30 Filter bits **/
#define CAN1_F15R2_FB30		(1 << 30)
/** CAN1_F15R2_FB29 Filter bits **/
#define CAN1_F15R2_FB29		(1 << 29)
/** CAN1_F15R2_FB28 Filter bits **/
#define CAN1_F15R2_FB28		(1 << 28)
/** CAN1_F15R2_FB27 Filter bits **/
#define CAN1_F15R2_FB27		(1 << 27)
/** CAN1_F15R2_FB26 Filter bits **/
#define CAN1_F15R2_FB26		(1 << 26)
/** CAN1_F15R2_FB25 Filter bits **/
#define CAN1_F15R2_FB25		(1 << 25)
/** CAN1_F15R2_FB24 Filter bits **/
#define CAN1_F15R2_FB24		(1 << 24)
/** CAN1_F15R2_FB23 Filter bits **/
#define CAN1_F15R2_FB23		(1 << 23)
/** CAN1_F15R2_FB22 Filter bits **/
#define CAN1_F15R2_FB22		(1 << 22)
/** CAN1_F15R2_FB21 Filter bits **/
#define CAN1_F15R2_FB21		(1 << 21)
/** CAN1_F15R2_FB20 Filter bits **/
#define CAN1_F15R2_FB20		(1 << 20)
/** CAN1_F15R2_FB19 Filter bits **/
#define CAN1_F15R2_FB19		(1 << 19)
/** CAN1_F15R2_FB18 Filter bits **/
#define CAN1_F15R2_FB18		(1 << 18)
/** CAN1_F15R2_FB17 Filter bits **/
#define CAN1_F15R2_FB17		(1 << 17)
/** CAN1_F15R2_FB16 Filter bits **/
#define CAN1_F15R2_FB16		(1 << 16)
/** CAN1_F15R2_FB15 Filter bits **/
#define CAN1_F15R2_FB15		(1 << 15)
/** CAN1_F15R2_FB14 Filter bits **/
#define CAN1_F15R2_FB14		(1 << 14)
/** CAN1_F15R2_FB13 Filter bits **/
#define CAN1_F15R2_FB13		(1 << 13)
/** CAN1_F15R2_FB12 Filter bits **/
#define CAN1_F15R2_FB12		(1 << 12)
/** CAN1_F15R2_FB11 Filter bits **/
#define CAN1_F15R2_FB11		(1 << 11)
/** CAN1_F15R2_FB10 Filter bits **/
#define CAN1_F15R2_FB10		(1 << 10)
/** CAN1_F15R2_FB9 Filter bits **/
#define CAN1_F15R2_FB9		(1 << 9)
/** CAN1_F15R2_FB8 Filter bits **/
#define CAN1_F15R2_FB8		(1 << 8)
/** CAN1_F15R2_FB7 Filter bits **/
#define CAN1_F15R2_FB7		(1 << 7)
/** CAN1_F15R2_FB6 Filter bits **/
#define CAN1_F15R2_FB6		(1 << 6)
/** CAN1_F15R2_FB5 Filter bits **/
#define CAN1_F15R2_FB5		(1 << 5)
/** CAN1_F15R2_FB4 Filter bits **/
#define CAN1_F15R2_FB4		(1 << 4)
/** CAN1_F15R2_FB3 Filter bits **/
#define CAN1_F15R2_FB3		(1 << 3)
/** CAN1_F15R2_FB2 Filter bits **/
#define CAN1_F15R2_FB2		(1 << 2)
/** CAN1_F15R2_FB1 Filter bits **/
#define CAN1_F15R2_FB1		(1 << 1)
/** CAN1_F15R2_FB0 Filter bits **/
#define CAN1_F15R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f16r1 F16R1 Filter bank 16 register 1
@{*/

/** CAN1_F16R1_FB31 Filter bits **/
#define CAN1_F16R1_FB31		(1 << 31)
/** CAN1_F16R1_FB30 Filter bits **/
#define CAN1_F16R1_FB30		(1 << 30)
/** CAN1_F16R1_FB29 Filter bits **/
#define CAN1_F16R1_FB29		(1 << 29)
/** CAN1_F16R1_FB28 Filter bits **/
#define CAN1_F16R1_FB28		(1 << 28)
/** CAN1_F16R1_FB27 Filter bits **/
#define CAN1_F16R1_FB27		(1 << 27)
/** CAN1_F16R1_FB26 Filter bits **/
#define CAN1_F16R1_FB26		(1 << 26)
/** CAN1_F16R1_FB25 Filter bits **/
#define CAN1_F16R1_FB25		(1 << 25)
/** CAN1_F16R1_FB24 Filter bits **/
#define CAN1_F16R1_FB24		(1 << 24)
/** CAN1_F16R1_FB23 Filter bits **/
#define CAN1_F16R1_FB23		(1 << 23)
/** CAN1_F16R1_FB22 Filter bits **/
#define CAN1_F16R1_FB22		(1 << 22)
/** CAN1_F16R1_FB21 Filter bits **/
#define CAN1_F16R1_FB21		(1 << 21)
/** CAN1_F16R1_FB20 Filter bits **/
#define CAN1_F16R1_FB20		(1 << 20)
/** CAN1_F16R1_FB19 Filter bits **/
#define CAN1_F16R1_FB19		(1 << 19)
/** CAN1_F16R1_FB18 Filter bits **/
#define CAN1_F16R1_FB18		(1 << 18)
/** CAN1_F16R1_FB17 Filter bits **/
#define CAN1_F16R1_FB17		(1 << 17)
/** CAN1_F16R1_FB16 Filter bits **/
#define CAN1_F16R1_FB16		(1 << 16)
/** CAN1_F16R1_FB15 Filter bits **/
#define CAN1_F16R1_FB15		(1 << 15)
/** CAN1_F16R1_FB14 Filter bits **/
#define CAN1_F16R1_FB14		(1 << 14)
/** CAN1_F16R1_FB13 Filter bits **/
#define CAN1_F16R1_FB13		(1 << 13)
/** CAN1_F16R1_FB12 Filter bits **/
#define CAN1_F16R1_FB12		(1 << 12)
/** CAN1_F16R1_FB11 Filter bits **/
#define CAN1_F16R1_FB11		(1 << 11)
/** CAN1_F16R1_FB10 Filter bits **/
#define CAN1_F16R1_FB10		(1 << 10)
/** CAN1_F16R1_FB9 Filter bits **/
#define CAN1_F16R1_FB9		(1 << 9)
/** CAN1_F16R1_FB8 Filter bits **/
#define CAN1_F16R1_FB8		(1 << 8)
/** CAN1_F16R1_FB7 Filter bits **/
#define CAN1_F16R1_FB7		(1 << 7)
/** CAN1_F16R1_FB6 Filter bits **/
#define CAN1_F16R1_FB6		(1 << 6)
/** CAN1_F16R1_FB5 Filter bits **/
#define CAN1_F16R1_FB5		(1 << 5)
/** CAN1_F16R1_FB4 Filter bits **/
#define CAN1_F16R1_FB4		(1 << 4)
/** CAN1_F16R1_FB3 Filter bits **/
#define CAN1_F16R1_FB3		(1 << 3)
/** CAN1_F16R1_FB2 Filter bits **/
#define CAN1_F16R1_FB2		(1 << 2)
/** CAN1_F16R1_FB1 Filter bits **/
#define CAN1_F16R1_FB1		(1 << 1)
/** CAN1_F16R1_FB0 Filter bits **/
#define CAN1_F16R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f16r2 F16R2 Filter bank 16 register 2
@{*/

/** CAN1_F16R2_FB31 Filter bits **/
#define CAN1_F16R2_FB31		(1 << 31)
/** CAN1_F16R2_FB30 Filter bits **/
#define CAN1_F16R2_FB30		(1 << 30)
/** CAN1_F16R2_FB29 Filter bits **/
#define CAN1_F16R2_FB29		(1 << 29)
/** CAN1_F16R2_FB28 Filter bits **/
#define CAN1_F16R2_FB28		(1 << 28)
/** CAN1_F16R2_FB27 Filter bits **/
#define CAN1_F16R2_FB27		(1 << 27)
/** CAN1_F16R2_FB26 Filter bits **/
#define CAN1_F16R2_FB26		(1 << 26)
/** CAN1_F16R2_FB25 Filter bits **/
#define CAN1_F16R2_FB25		(1 << 25)
/** CAN1_F16R2_FB24 Filter bits **/
#define CAN1_F16R2_FB24		(1 << 24)
/** CAN1_F16R2_FB23 Filter bits **/
#define CAN1_F16R2_FB23		(1 << 23)
/** CAN1_F16R2_FB22 Filter bits **/
#define CAN1_F16R2_FB22		(1 << 22)
/** CAN1_F16R2_FB21 Filter bits **/
#define CAN1_F16R2_FB21		(1 << 21)
/** CAN1_F16R2_FB20 Filter bits **/
#define CAN1_F16R2_FB20		(1 << 20)
/** CAN1_F16R2_FB19 Filter bits **/
#define CAN1_F16R2_FB19		(1 << 19)
/** CAN1_F16R2_FB18 Filter bits **/
#define CAN1_F16R2_FB18		(1 << 18)
/** CAN1_F16R2_FB17 Filter bits **/
#define CAN1_F16R2_FB17		(1 << 17)
/** CAN1_F16R2_FB16 Filter bits **/
#define CAN1_F16R2_FB16		(1 << 16)
/** CAN1_F16R2_FB15 Filter bits **/
#define CAN1_F16R2_FB15		(1 << 15)
/** CAN1_F16R2_FB14 Filter bits **/
#define CAN1_F16R2_FB14		(1 << 14)
/** CAN1_F16R2_FB13 Filter bits **/
#define CAN1_F16R2_FB13		(1 << 13)
/** CAN1_F16R2_FB12 Filter bits **/
#define CAN1_F16R2_FB12		(1 << 12)
/** CAN1_F16R2_FB11 Filter bits **/
#define CAN1_F16R2_FB11		(1 << 11)
/** CAN1_F16R2_FB10 Filter bits **/
#define CAN1_F16R2_FB10		(1 << 10)
/** CAN1_F16R2_FB9 Filter bits **/
#define CAN1_F16R2_FB9		(1 << 9)
/** CAN1_F16R2_FB8 Filter bits **/
#define CAN1_F16R2_FB8		(1 << 8)
/** CAN1_F16R2_FB7 Filter bits **/
#define CAN1_F16R2_FB7		(1 << 7)
/** CAN1_F16R2_FB6 Filter bits **/
#define CAN1_F16R2_FB6		(1 << 6)
/** CAN1_F16R2_FB5 Filter bits **/
#define CAN1_F16R2_FB5		(1 << 5)
/** CAN1_F16R2_FB4 Filter bits **/
#define CAN1_F16R2_FB4		(1 << 4)
/** CAN1_F16R2_FB3 Filter bits **/
#define CAN1_F16R2_FB3		(1 << 3)
/** CAN1_F16R2_FB2 Filter bits **/
#define CAN1_F16R2_FB2		(1 << 2)
/** CAN1_F16R2_FB1 Filter bits **/
#define CAN1_F16R2_FB1		(1 << 1)
/** CAN1_F16R2_FB0 Filter bits **/
#define CAN1_F16R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f17r1 F17R1 Filter bank 17 register 1
@{*/

/** CAN1_F17R1_FB31 Filter bits **/
#define CAN1_F17R1_FB31		(1 << 31)
/** CAN1_F17R1_FB30 Filter bits **/
#define CAN1_F17R1_FB30		(1 << 30)
/** CAN1_F17R1_FB29 Filter bits **/
#define CAN1_F17R1_FB29		(1 << 29)
/** CAN1_F17R1_FB28 Filter bits **/
#define CAN1_F17R1_FB28		(1 << 28)
/** CAN1_F17R1_FB27 Filter bits **/
#define CAN1_F17R1_FB27		(1 << 27)
/** CAN1_F17R1_FB26 Filter bits **/
#define CAN1_F17R1_FB26		(1 << 26)
/** CAN1_F17R1_FB25 Filter bits **/
#define CAN1_F17R1_FB25		(1 << 25)
/** CAN1_F17R1_FB24 Filter bits **/
#define CAN1_F17R1_FB24		(1 << 24)
/** CAN1_F17R1_FB23 Filter bits **/
#define CAN1_F17R1_FB23		(1 << 23)
/** CAN1_F17R1_FB22 Filter bits **/
#define CAN1_F17R1_FB22		(1 << 22)
/** CAN1_F17R1_FB21 Filter bits **/
#define CAN1_F17R1_FB21		(1 << 21)
/** CAN1_F17R1_FB20 Filter bits **/
#define CAN1_F17R1_FB20		(1 << 20)
/** CAN1_F17R1_FB19 Filter bits **/
#define CAN1_F17R1_FB19		(1 << 19)
/** CAN1_F17R1_FB18 Filter bits **/
#define CAN1_F17R1_FB18		(1 << 18)
/** CAN1_F17R1_FB17 Filter bits **/
#define CAN1_F17R1_FB17		(1 << 17)
/** CAN1_F17R1_FB16 Filter bits **/
#define CAN1_F17R1_FB16		(1 << 16)
/** CAN1_F17R1_FB15 Filter bits **/
#define CAN1_F17R1_FB15		(1 << 15)
/** CAN1_F17R1_FB14 Filter bits **/
#define CAN1_F17R1_FB14		(1 << 14)
/** CAN1_F17R1_FB13 Filter bits **/
#define CAN1_F17R1_FB13		(1 << 13)
/** CAN1_F17R1_FB12 Filter bits **/
#define CAN1_F17R1_FB12		(1 << 12)
/** CAN1_F17R1_FB11 Filter bits **/
#define CAN1_F17R1_FB11		(1 << 11)
/** CAN1_F17R1_FB10 Filter bits **/
#define CAN1_F17R1_FB10		(1 << 10)
/** CAN1_F17R1_FB9 Filter bits **/
#define CAN1_F17R1_FB9		(1 << 9)
/** CAN1_F17R1_FB8 Filter bits **/
#define CAN1_F17R1_FB8		(1 << 8)
/** CAN1_F17R1_FB7 Filter bits **/
#define CAN1_F17R1_FB7		(1 << 7)
/** CAN1_F17R1_FB6 Filter bits **/
#define CAN1_F17R1_FB6		(1 << 6)
/** CAN1_F17R1_FB5 Filter bits **/
#define CAN1_F17R1_FB5		(1 << 5)
/** CAN1_F17R1_FB4 Filter bits **/
#define CAN1_F17R1_FB4		(1 << 4)
/** CAN1_F17R1_FB3 Filter bits **/
#define CAN1_F17R1_FB3		(1 << 3)
/** CAN1_F17R1_FB2 Filter bits **/
#define CAN1_F17R1_FB2		(1 << 2)
/** CAN1_F17R1_FB1 Filter bits **/
#define CAN1_F17R1_FB1		(1 << 1)
/** CAN1_F17R1_FB0 Filter bits **/
#define CAN1_F17R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f17r2 F17R2 Filter bank 17 register 2
@{*/

/** CAN1_F17R2_FB31 Filter bits **/
#define CAN1_F17R2_FB31		(1 << 31)
/** CAN1_F17R2_FB30 Filter bits **/
#define CAN1_F17R2_FB30		(1 << 30)
/** CAN1_F17R2_FB29 Filter bits **/
#define CAN1_F17R2_FB29		(1 << 29)
/** CAN1_F17R2_FB28 Filter bits **/
#define CAN1_F17R2_FB28		(1 << 28)
/** CAN1_F17R2_FB27 Filter bits **/
#define CAN1_F17R2_FB27		(1 << 27)
/** CAN1_F17R2_FB26 Filter bits **/
#define CAN1_F17R2_FB26		(1 << 26)
/** CAN1_F17R2_FB25 Filter bits **/
#define CAN1_F17R2_FB25		(1 << 25)
/** CAN1_F17R2_FB24 Filter bits **/
#define CAN1_F17R2_FB24		(1 << 24)
/** CAN1_F17R2_FB23 Filter bits **/
#define CAN1_F17R2_FB23		(1 << 23)
/** CAN1_F17R2_FB22 Filter bits **/
#define CAN1_F17R2_FB22		(1 << 22)
/** CAN1_F17R2_FB21 Filter bits **/
#define CAN1_F17R2_FB21		(1 << 21)
/** CAN1_F17R2_FB20 Filter bits **/
#define CAN1_F17R2_FB20		(1 << 20)
/** CAN1_F17R2_FB19 Filter bits **/
#define CAN1_F17R2_FB19		(1 << 19)
/** CAN1_F17R2_FB18 Filter bits **/
#define CAN1_F17R2_FB18		(1 << 18)
/** CAN1_F17R2_FB17 Filter bits **/
#define CAN1_F17R2_FB17		(1 << 17)
/** CAN1_F17R2_FB16 Filter bits **/
#define CAN1_F17R2_FB16		(1 << 16)
/** CAN1_F17R2_FB15 Filter bits **/
#define CAN1_F17R2_FB15		(1 << 15)
/** CAN1_F17R2_FB14 Filter bits **/
#define CAN1_F17R2_FB14		(1 << 14)
/** CAN1_F17R2_FB13 Filter bits **/
#define CAN1_F17R2_FB13		(1 << 13)
/** CAN1_F17R2_FB12 Filter bits **/
#define CAN1_F17R2_FB12		(1 << 12)
/** CAN1_F17R2_FB11 Filter bits **/
#define CAN1_F17R2_FB11		(1 << 11)
/** CAN1_F17R2_FB10 Filter bits **/
#define CAN1_F17R2_FB10		(1 << 10)
/** CAN1_F17R2_FB9 Filter bits **/
#define CAN1_F17R2_FB9		(1 << 9)
/** CAN1_F17R2_FB8 Filter bits **/
#define CAN1_F17R2_FB8		(1 << 8)
/** CAN1_F17R2_FB7 Filter bits **/
#define CAN1_F17R2_FB7		(1 << 7)
/** CAN1_F17R2_FB6 Filter bits **/
#define CAN1_F17R2_FB6		(1 << 6)
/** CAN1_F17R2_FB5 Filter bits **/
#define CAN1_F17R2_FB5		(1 << 5)
/** CAN1_F17R2_FB4 Filter bits **/
#define CAN1_F17R2_FB4		(1 << 4)
/** CAN1_F17R2_FB3 Filter bits **/
#define CAN1_F17R2_FB3		(1 << 3)
/** CAN1_F17R2_FB2 Filter bits **/
#define CAN1_F17R2_FB2		(1 << 2)
/** CAN1_F17R2_FB1 Filter bits **/
#define CAN1_F17R2_FB1		(1 << 1)
/** CAN1_F17R2_FB0 Filter bits **/
#define CAN1_F17R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f18r1 F18R1 Filter bank 18 register 1
@{*/

/** CAN1_F18R1_FB31 Filter bits **/
#define CAN1_F18R1_FB31		(1 << 31)
/** CAN1_F18R1_FB30 Filter bits **/
#define CAN1_F18R1_FB30		(1 << 30)
/** CAN1_F18R1_FB29 Filter bits **/
#define CAN1_F18R1_FB29		(1 << 29)
/** CAN1_F18R1_FB28 Filter bits **/
#define CAN1_F18R1_FB28		(1 << 28)
/** CAN1_F18R1_FB27 Filter bits **/
#define CAN1_F18R1_FB27		(1 << 27)
/** CAN1_F18R1_FB26 Filter bits **/
#define CAN1_F18R1_FB26		(1 << 26)
/** CAN1_F18R1_FB25 Filter bits **/
#define CAN1_F18R1_FB25		(1 << 25)
/** CAN1_F18R1_FB24 Filter bits **/
#define CAN1_F18R1_FB24		(1 << 24)
/** CAN1_F18R1_FB23 Filter bits **/
#define CAN1_F18R1_FB23		(1 << 23)
/** CAN1_F18R1_FB22 Filter bits **/
#define CAN1_F18R1_FB22		(1 << 22)
/** CAN1_F18R1_FB21 Filter bits **/
#define CAN1_F18R1_FB21		(1 << 21)
/** CAN1_F18R1_FB20 Filter bits **/
#define CAN1_F18R1_FB20		(1 << 20)
/** CAN1_F18R1_FB19 Filter bits **/
#define CAN1_F18R1_FB19		(1 << 19)
/** CAN1_F18R1_FB18 Filter bits **/
#define CAN1_F18R1_FB18		(1 << 18)
/** CAN1_F18R1_FB17 Filter bits **/
#define CAN1_F18R1_FB17		(1 << 17)
/** CAN1_F18R1_FB16 Filter bits **/
#define CAN1_F18R1_FB16		(1 << 16)
/** CAN1_F18R1_FB15 Filter bits **/
#define CAN1_F18R1_FB15		(1 << 15)
/** CAN1_F18R1_FB14 Filter bits **/
#define CAN1_F18R1_FB14		(1 << 14)
/** CAN1_F18R1_FB13 Filter bits **/
#define CAN1_F18R1_FB13		(1 << 13)
/** CAN1_F18R1_FB12 Filter bits **/
#define CAN1_F18R1_FB12		(1 << 12)
/** CAN1_F18R1_FB11 Filter bits **/
#define CAN1_F18R1_FB11		(1 << 11)
/** CAN1_F18R1_FB10 Filter bits **/
#define CAN1_F18R1_FB10		(1 << 10)
/** CAN1_F18R1_FB9 Filter bits **/
#define CAN1_F18R1_FB9		(1 << 9)
/** CAN1_F18R1_FB8 Filter bits **/
#define CAN1_F18R1_FB8		(1 << 8)
/** CAN1_F18R1_FB7 Filter bits **/
#define CAN1_F18R1_FB7		(1 << 7)
/** CAN1_F18R1_FB6 Filter bits **/
#define CAN1_F18R1_FB6		(1 << 6)
/** CAN1_F18R1_FB5 Filter bits **/
#define CAN1_F18R1_FB5		(1 << 5)
/** CAN1_F18R1_FB4 Filter bits **/
#define CAN1_F18R1_FB4		(1 << 4)
/** CAN1_F18R1_FB3 Filter bits **/
#define CAN1_F18R1_FB3		(1 << 3)
/** CAN1_F18R1_FB2 Filter bits **/
#define CAN1_F18R1_FB2		(1 << 2)
/** CAN1_F18R1_FB1 Filter bits **/
#define CAN1_F18R1_FB1		(1 << 1)
/** CAN1_F18R1_FB0 Filter bits **/
#define CAN1_F18R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f18r2 F18R2 Filter bank 18 register 2
@{*/

/** CAN1_F18R2_FB31 Filter bits **/
#define CAN1_F18R2_FB31		(1 << 31)
/** CAN1_F18R2_FB30 Filter bits **/
#define CAN1_F18R2_FB30		(1 << 30)
/** CAN1_F18R2_FB29 Filter bits **/
#define CAN1_F18R2_FB29		(1 << 29)
/** CAN1_F18R2_FB28 Filter bits **/
#define CAN1_F18R2_FB28		(1 << 28)
/** CAN1_F18R2_FB27 Filter bits **/
#define CAN1_F18R2_FB27		(1 << 27)
/** CAN1_F18R2_FB26 Filter bits **/
#define CAN1_F18R2_FB26		(1 << 26)
/** CAN1_F18R2_FB25 Filter bits **/
#define CAN1_F18R2_FB25		(1 << 25)
/** CAN1_F18R2_FB24 Filter bits **/
#define CAN1_F18R2_FB24		(1 << 24)
/** CAN1_F18R2_FB23 Filter bits **/
#define CAN1_F18R2_FB23		(1 << 23)
/** CAN1_F18R2_FB22 Filter bits **/
#define CAN1_F18R2_FB22		(1 << 22)
/** CAN1_F18R2_FB21 Filter bits **/
#define CAN1_F18R2_FB21		(1 << 21)
/** CAN1_F18R2_FB20 Filter bits **/
#define CAN1_F18R2_FB20		(1 << 20)
/** CAN1_F18R2_FB19 Filter bits **/
#define CAN1_F18R2_FB19		(1 << 19)
/** CAN1_F18R2_FB18 Filter bits **/
#define CAN1_F18R2_FB18		(1 << 18)
/** CAN1_F18R2_FB17 Filter bits **/
#define CAN1_F18R2_FB17		(1 << 17)
/** CAN1_F18R2_FB16 Filter bits **/
#define CAN1_F18R2_FB16		(1 << 16)
/** CAN1_F18R2_FB15 Filter bits **/
#define CAN1_F18R2_FB15		(1 << 15)
/** CAN1_F18R2_FB14 Filter bits **/
#define CAN1_F18R2_FB14		(1 << 14)
/** CAN1_F18R2_FB13 Filter bits **/
#define CAN1_F18R2_FB13		(1 << 13)
/** CAN1_F18R2_FB12 Filter bits **/
#define CAN1_F18R2_FB12		(1 << 12)
/** CAN1_F18R2_FB11 Filter bits **/
#define CAN1_F18R2_FB11		(1 << 11)
/** CAN1_F18R2_FB10 Filter bits **/
#define CAN1_F18R2_FB10		(1 << 10)
/** CAN1_F18R2_FB9 Filter bits **/
#define CAN1_F18R2_FB9		(1 << 9)
/** CAN1_F18R2_FB8 Filter bits **/
#define CAN1_F18R2_FB8		(1 << 8)
/** CAN1_F18R2_FB7 Filter bits **/
#define CAN1_F18R2_FB7		(1 << 7)
/** CAN1_F18R2_FB6 Filter bits **/
#define CAN1_F18R2_FB6		(1 << 6)
/** CAN1_F18R2_FB5 Filter bits **/
#define CAN1_F18R2_FB5		(1 << 5)
/** CAN1_F18R2_FB4 Filter bits **/
#define CAN1_F18R2_FB4		(1 << 4)
/** CAN1_F18R2_FB3 Filter bits **/
#define CAN1_F18R2_FB3		(1 << 3)
/** CAN1_F18R2_FB2 Filter bits **/
#define CAN1_F18R2_FB2		(1 << 2)
/** CAN1_F18R2_FB1 Filter bits **/
#define CAN1_F18R2_FB1		(1 << 1)
/** CAN1_F18R2_FB0 Filter bits **/
#define CAN1_F18R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f19r1 F19R1 Filter bank 19 register 1
@{*/

/** CAN1_F19R1_FB31 Filter bits **/
#define CAN1_F19R1_FB31		(1 << 31)
/** CAN1_F19R1_FB30 Filter bits **/
#define CAN1_F19R1_FB30		(1 << 30)
/** CAN1_F19R1_FB29 Filter bits **/
#define CAN1_F19R1_FB29		(1 << 29)
/** CAN1_F19R1_FB28 Filter bits **/
#define CAN1_F19R1_FB28		(1 << 28)
/** CAN1_F19R1_FB27 Filter bits **/
#define CAN1_F19R1_FB27		(1 << 27)
/** CAN1_F19R1_FB26 Filter bits **/
#define CAN1_F19R1_FB26		(1 << 26)
/** CAN1_F19R1_FB25 Filter bits **/
#define CAN1_F19R1_FB25		(1 << 25)
/** CAN1_F19R1_FB24 Filter bits **/
#define CAN1_F19R1_FB24		(1 << 24)
/** CAN1_F19R1_FB23 Filter bits **/
#define CAN1_F19R1_FB23		(1 << 23)
/** CAN1_F19R1_FB22 Filter bits **/
#define CAN1_F19R1_FB22		(1 << 22)
/** CAN1_F19R1_FB21 Filter bits **/
#define CAN1_F19R1_FB21		(1 << 21)
/** CAN1_F19R1_FB20 Filter bits **/
#define CAN1_F19R1_FB20		(1 << 20)
/** CAN1_F19R1_FB19 Filter bits **/
#define CAN1_F19R1_FB19		(1 << 19)
/** CAN1_F19R1_FB18 Filter bits **/
#define CAN1_F19R1_FB18		(1 << 18)
/** CAN1_F19R1_FB17 Filter bits **/
#define CAN1_F19R1_FB17		(1 << 17)
/** CAN1_F19R1_FB16 Filter bits **/
#define CAN1_F19R1_FB16		(1 << 16)
/** CAN1_F19R1_FB15 Filter bits **/
#define CAN1_F19R1_FB15		(1 << 15)
/** CAN1_F19R1_FB14 Filter bits **/
#define CAN1_F19R1_FB14		(1 << 14)
/** CAN1_F19R1_FB13 Filter bits **/
#define CAN1_F19R1_FB13		(1 << 13)
/** CAN1_F19R1_FB12 Filter bits **/
#define CAN1_F19R1_FB12		(1 << 12)
/** CAN1_F19R1_FB11 Filter bits **/
#define CAN1_F19R1_FB11		(1 << 11)
/** CAN1_F19R1_FB10 Filter bits **/
#define CAN1_F19R1_FB10		(1 << 10)
/** CAN1_F19R1_FB9 Filter bits **/
#define CAN1_F19R1_FB9		(1 << 9)
/** CAN1_F19R1_FB8 Filter bits **/
#define CAN1_F19R1_FB8		(1 << 8)
/** CAN1_F19R1_FB7 Filter bits **/
#define CAN1_F19R1_FB7		(1 << 7)
/** CAN1_F19R1_FB6 Filter bits **/
#define CAN1_F19R1_FB6		(1 << 6)
/** CAN1_F19R1_FB5 Filter bits **/
#define CAN1_F19R1_FB5		(1 << 5)
/** CAN1_F19R1_FB4 Filter bits **/
#define CAN1_F19R1_FB4		(1 << 4)
/** CAN1_F19R1_FB3 Filter bits **/
#define CAN1_F19R1_FB3		(1 << 3)
/** CAN1_F19R1_FB2 Filter bits **/
#define CAN1_F19R1_FB2		(1 << 2)
/** CAN1_F19R1_FB1 Filter bits **/
#define CAN1_F19R1_FB1		(1 << 1)
/** CAN1_F19R1_FB0 Filter bits **/
#define CAN1_F19R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f19r2 F19R2 Filter bank 19 register 2
@{*/

/** CAN1_F19R2_FB31 Filter bits **/
#define CAN1_F19R2_FB31		(1 << 31)
/** CAN1_F19R2_FB30 Filter bits **/
#define CAN1_F19R2_FB30		(1 << 30)
/** CAN1_F19R2_FB29 Filter bits **/
#define CAN1_F19R2_FB29		(1 << 29)
/** CAN1_F19R2_FB28 Filter bits **/
#define CAN1_F19R2_FB28		(1 << 28)
/** CAN1_F19R2_FB27 Filter bits **/
#define CAN1_F19R2_FB27		(1 << 27)
/** CAN1_F19R2_FB26 Filter bits **/
#define CAN1_F19R2_FB26		(1 << 26)
/** CAN1_F19R2_FB25 Filter bits **/
#define CAN1_F19R2_FB25		(1 << 25)
/** CAN1_F19R2_FB24 Filter bits **/
#define CAN1_F19R2_FB24		(1 << 24)
/** CAN1_F19R2_FB23 Filter bits **/
#define CAN1_F19R2_FB23		(1 << 23)
/** CAN1_F19R2_FB22 Filter bits **/
#define CAN1_F19R2_FB22		(1 << 22)
/** CAN1_F19R2_FB21 Filter bits **/
#define CAN1_F19R2_FB21		(1 << 21)
/** CAN1_F19R2_FB20 Filter bits **/
#define CAN1_F19R2_FB20		(1 << 20)
/** CAN1_F19R2_FB19 Filter bits **/
#define CAN1_F19R2_FB19		(1 << 19)
/** CAN1_F19R2_FB18 Filter bits **/
#define CAN1_F19R2_FB18		(1 << 18)
/** CAN1_F19R2_FB17 Filter bits **/
#define CAN1_F19R2_FB17		(1 << 17)
/** CAN1_F19R2_FB16 Filter bits **/
#define CAN1_F19R2_FB16		(1 << 16)
/** CAN1_F19R2_FB15 Filter bits **/
#define CAN1_F19R2_FB15		(1 << 15)
/** CAN1_F19R2_FB14 Filter bits **/
#define CAN1_F19R2_FB14		(1 << 14)
/** CAN1_F19R2_FB13 Filter bits **/
#define CAN1_F19R2_FB13		(1 << 13)
/** CAN1_F19R2_FB12 Filter bits **/
#define CAN1_F19R2_FB12		(1 << 12)
/** CAN1_F19R2_FB11 Filter bits **/
#define CAN1_F19R2_FB11		(1 << 11)
/** CAN1_F19R2_FB10 Filter bits **/
#define CAN1_F19R2_FB10		(1 << 10)
/** CAN1_F19R2_FB9 Filter bits **/
#define CAN1_F19R2_FB9		(1 << 9)
/** CAN1_F19R2_FB8 Filter bits **/
#define CAN1_F19R2_FB8		(1 << 8)
/** CAN1_F19R2_FB7 Filter bits **/
#define CAN1_F19R2_FB7		(1 << 7)
/** CAN1_F19R2_FB6 Filter bits **/
#define CAN1_F19R2_FB6		(1 << 6)
/** CAN1_F19R2_FB5 Filter bits **/
#define CAN1_F19R2_FB5		(1 << 5)
/** CAN1_F19R2_FB4 Filter bits **/
#define CAN1_F19R2_FB4		(1 << 4)
/** CAN1_F19R2_FB3 Filter bits **/
#define CAN1_F19R2_FB3		(1 << 3)
/** CAN1_F19R2_FB2 Filter bits **/
#define CAN1_F19R2_FB2		(1 << 2)
/** CAN1_F19R2_FB1 Filter bits **/
#define CAN1_F19R2_FB1		(1 << 1)
/** CAN1_F19R2_FB0 Filter bits **/
#define CAN1_F19R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f20r1 F20R1 Filter bank 20 register 1
@{*/

/** CAN1_F20R1_FB31 Filter bits **/
#define CAN1_F20R1_FB31		(1 << 31)
/** CAN1_F20R1_FB30 Filter bits **/
#define CAN1_F20R1_FB30		(1 << 30)
/** CAN1_F20R1_FB29 Filter bits **/
#define CAN1_F20R1_FB29		(1 << 29)
/** CAN1_F20R1_FB28 Filter bits **/
#define CAN1_F20R1_FB28		(1 << 28)
/** CAN1_F20R1_FB27 Filter bits **/
#define CAN1_F20R1_FB27		(1 << 27)
/** CAN1_F20R1_FB26 Filter bits **/
#define CAN1_F20R1_FB26		(1 << 26)
/** CAN1_F20R1_FB25 Filter bits **/
#define CAN1_F20R1_FB25		(1 << 25)
/** CAN1_F20R1_FB24 Filter bits **/
#define CAN1_F20R1_FB24		(1 << 24)
/** CAN1_F20R1_FB23 Filter bits **/
#define CAN1_F20R1_FB23		(1 << 23)
/** CAN1_F20R1_FB22 Filter bits **/
#define CAN1_F20R1_FB22		(1 << 22)
/** CAN1_F20R1_FB21 Filter bits **/
#define CAN1_F20R1_FB21		(1 << 21)
/** CAN1_F20R1_FB20 Filter bits **/
#define CAN1_F20R1_FB20		(1 << 20)
/** CAN1_F20R1_FB19 Filter bits **/
#define CAN1_F20R1_FB19		(1 << 19)
/** CAN1_F20R1_FB18 Filter bits **/
#define CAN1_F20R1_FB18		(1 << 18)
/** CAN1_F20R1_FB17 Filter bits **/
#define CAN1_F20R1_FB17		(1 << 17)
/** CAN1_F20R1_FB16 Filter bits **/
#define CAN1_F20R1_FB16		(1 << 16)
/** CAN1_F20R1_FB15 Filter bits **/
#define CAN1_F20R1_FB15		(1 << 15)
/** CAN1_F20R1_FB14 Filter bits **/
#define CAN1_F20R1_FB14		(1 << 14)
/** CAN1_F20R1_FB13 Filter bits **/
#define CAN1_F20R1_FB13		(1 << 13)
/** CAN1_F20R1_FB12 Filter bits **/
#define CAN1_F20R1_FB12		(1 << 12)
/** CAN1_F20R1_FB11 Filter bits **/
#define CAN1_F20R1_FB11		(1 << 11)
/** CAN1_F20R1_FB10 Filter bits **/
#define CAN1_F20R1_FB10		(1 << 10)
/** CAN1_F20R1_FB9 Filter bits **/
#define CAN1_F20R1_FB9		(1 << 9)
/** CAN1_F20R1_FB8 Filter bits **/
#define CAN1_F20R1_FB8		(1 << 8)
/** CAN1_F20R1_FB7 Filter bits **/
#define CAN1_F20R1_FB7		(1 << 7)
/** CAN1_F20R1_FB6 Filter bits **/
#define CAN1_F20R1_FB6		(1 << 6)
/** CAN1_F20R1_FB5 Filter bits **/
#define CAN1_F20R1_FB5		(1 << 5)
/** CAN1_F20R1_FB4 Filter bits **/
#define CAN1_F20R1_FB4		(1 << 4)
/** CAN1_F20R1_FB3 Filter bits **/
#define CAN1_F20R1_FB3		(1 << 3)
/** CAN1_F20R1_FB2 Filter bits **/
#define CAN1_F20R1_FB2		(1 << 2)
/** CAN1_F20R1_FB1 Filter bits **/
#define CAN1_F20R1_FB1		(1 << 1)
/** CAN1_F20R1_FB0 Filter bits **/
#define CAN1_F20R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f20r2 F20R2 Filter bank 20 register 2
@{*/

/** CAN1_F20R2_FB31 Filter bits **/
#define CAN1_F20R2_FB31		(1 << 31)
/** CAN1_F20R2_FB30 Filter bits **/
#define CAN1_F20R2_FB30		(1 << 30)
/** CAN1_F20R2_FB29 Filter bits **/
#define CAN1_F20R2_FB29		(1 << 29)
/** CAN1_F20R2_FB28 Filter bits **/
#define CAN1_F20R2_FB28		(1 << 28)
/** CAN1_F20R2_FB27 Filter bits **/
#define CAN1_F20R2_FB27		(1 << 27)
/** CAN1_F20R2_FB26 Filter bits **/
#define CAN1_F20R2_FB26		(1 << 26)
/** CAN1_F20R2_FB25 Filter bits **/
#define CAN1_F20R2_FB25		(1 << 25)
/** CAN1_F20R2_FB24 Filter bits **/
#define CAN1_F20R2_FB24		(1 << 24)
/** CAN1_F20R2_FB23 Filter bits **/
#define CAN1_F20R2_FB23		(1 << 23)
/** CAN1_F20R2_FB22 Filter bits **/
#define CAN1_F20R2_FB22		(1 << 22)
/** CAN1_F20R2_FB21 Filter bits **/
#define CAN1_F20R2_FB21		(1 << 21)
/** CAN1_F20R2_FB20 Filter bits **/
#define CAN1_F20R2_FB20		(1 << 20)
/** CAN1_F20R2_FB19 Filter bits **/
#define CAN1_F20R2_FB19		(1 << 19)
/** CAN1_F20R2_FB18 Filter bits **/
#define CAN1_F20R2_FB18		(1 << 18)
/** CAN1_F20R2_FB17 Filter bits **/
#define CAN1_F20R2_FB17		(1 << 17)
/** CAN1_F20R2_FB16 Filter bits **/
#define CAN1_F20R2_FB16		(1 << 16)
/** CAN1_F20R2_FB15 Filter bits **/
#define CAN1_F20R2_FB15		(1 << 15)
/** CAN1_F20R2_FB14 Filter bits **/
#define CAN1_F20R2_FB14		(1 << 14)
/** CAN1_F20R2_FB13 Filter bits **/
#define CAN1_F20R2_FB13		(1 << 13)
/** CAN1_F20R2_FB12 Filter bits **/
#define CAN1_F20R2_FB12		(1 << 12)
/** CAN1_F20R2_FB11 Filter bits **/
#define CAN1_F20R2_FB11		(1 << 11)
/** CAN1_F20R2_FB10 Filter bits **/
#define CAN1_F20R2_FB10		(1 << 10)
/** CAN1_F20R2_FB9 Filter bits **/
#define CAN1_F20R2_FB9		(1 << 9)
/** CAN1_F20R2_FB8 Filter bits **/
#define CAN1_F20R2_FB8		(1 << 8)
/** CAN1_F20R2_FB7 Filter bits **/
#define CAN1_F20R2_FB7		(1 << 7)
/** CAN1_F20R2_FB6 Filter bits **/
#define CAN1_F20R2_FB6		(1 << 6)
/** CAN1_F20R2_FB5 Filter bits **/
#define CAN1_F20R2_FB5		(1 << 5)
/** CAN1_F20R2_FB4 Filter bits **/
#define CAN1_F20R2_FB4		(1 << 4)
/** CAN1_F20R2_FB3 Filter bits **/
#define CAN1_F20R2_FB3		(1 << 3)
/** CAN1_F20R2_FB2 Filter bits **/
#define CAN1_F20R2_FB2		(1 << 2)
/** CAN1_F20R2_FB1 Filter bits **/
#define CAN1_F20R2_FB1		(1 << 1)
/** CAN1_F20R2_FB0 Filter bits **/
#define CAN1_F20R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f21r1 F21R1 Filter bank 21 register 1
@{*/

/** CAN1_F21R1_FB31 Filter bits **/
#define CAN1_F21R1_FB31		(1 << 31)
/** CAN1_F21R1_FB30 Filter bits **/
#define CAN1_F21R1_FB30		(1 << 30)
/** CAN1_F21R1_FB29 Filter bits **/
#define CAN1_F21R1_FB29		(1 << 29)
/** CAN1_F21R1_FB28 Filter bits **/
#define CAN1_F21R1_FB28		(1 << 28)
/** CAN1_F21R1_FB27 Filter bits **/
#define CAN1_F21R1_FB27		(1 << 27)
/** CAN1_F21R1_FB26 Filter bits **/
#define CAN1_F21R1_FB26		(1 << 26)
/** CAN1_F21R1_FB25 Filter bits **/
#define CAN1_F21R1_FB25		(1 << 25)
/** CAN1_F21R1_FB24 Filter bits **/
#define CAN1_F21R1_FB24		(1 << 24)
/** CAN1_F21R1_FB23 Filter bits **/
#define CAN1_F21R1_FB23		(1 << 23)
/** CAN1_F21R1_FB22 Filter bits **/
#define CAN1_F21R1_FB22		(1 << 22)
/** CAN1_F21R1_FB21 Filter bits **/
#define CAN1_F21R1_FB21		(1 << 21)
/** CAN1_F21R1_FB20 Filter bits **/
#define CAN1_F21R1_FB20		(1 << 20)
/** CAN1_F21R1_FB19 Filter bits **/
#define CAN1_F21R1_FB19		(1 << 19)
/** CAN1_F21R1_FB18 Filter bits **/
#define CAN1_F21R1_FB18		(1 << 18)
/** CAN1_F21R1_FB17 Filter bits **/
#define CAN1_F21R1_FB17		(1 << 17)
/** CAN1_F21R1_FB16 Filter bits **/
#define CAN1_F21R1_FB16		(1 << 16)
/** CAN1_F21R1_FB15 Filter bits **/
#define CAN1_F21R1_FB15		(1 << 15)
/** CAN1_F21R1_FB14 Filter bits **/
#define CAN1_F21R1_FB14		(1 << 14)
/** CAN1_F21R1_FB13 Filter bits **/
#define CAN1_F21R1_FB13		(1 << 13)
/** CAN1_F21R1_FB12 Filter bits **/
#define CAN1_F21R1_FB12		(1 << 12)
/** CAN1_F21R1_FB11 Filter bits **/
#define CAN1_F21R1_FB11		(1 << 11)
/** CAN1_F21R1_FB10 Filter bits **/
#define CAN1_F21R1_FB10		(1 << 10)
/** CAN1_F21R1_FB9 Filter bits **/
#define CAN1_F21R1_FB9		(1 << 9)
/** CAN1_F21R1_FB8 Filter bits **/
#define CAN1_F21R1_FB8		(1 << 8)
/** CAN1_F21R1_FB7 Filter bits **/
#define CAN1_F21R1_FB7		(1 << 7)
/** CAN1_F21R1_FB6 Filter bits **/
#define CAN1_F21R1_FB6		(1 << 6)
/** CAN1_F21R1_FB5 Filter bits **/
#define CAN1_F21R1_FB5		(1 << 5)
/** CAN1_F21R1_FB4 Filter bits **/
#define CAN1_F21R1_FB4		(1 << 4)
/** CAN1_F21R1_FB3 Filter bits **/
#define CAN1_F21R1_FB3		(1 << 3)
/** CAN1_F21R1_FB2 Filter bits **/
#define CAN1_F21R1_FB2		(1 << 2)
/** CAN1_F21R1_FB1 Filter bits **/
#define CAN1_F21R1_FB1		(1 << 1)
/** CAN1_F21R1_FB0 Filter bits **/
#define CAN1_F21R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f21r2 F21R2 Filter bank 21 register 2
@{*/

/** CAN1_F21R2_FB31 Filter bits **/
#define CAN1_F21R2_FB31		(1 << 31)
/** CAN1_F21R2_FB30 Filter bits **/
#define CAN1_F21R2_FB30		(1 << 30)
/** CAN1_F21R2_FB29 Filter bits **/
#define CAN1_F21R2_FB29		(1 << 29)
/** CAN1_F21R2_FB28 Filter bits **/
#define CAN1_F21R2_FB28		(1 << 28)
/** CAN1_F21R2_FB27 Filter bits **/
#define CAN1_F21R2_FB27		(1 << 27)
/** CAN1_F21R2_FB26 Filter bits **/
#define CAN1_F21R2_FB26		(1 << 26)
/** CAN1_F21R2_FB25 Filter bits **/
#define CAN1_F21R2_FB25		(1 << 25)
/** CAN1_F21R2_FB24 Filter bits **/
#define CAN1_F21R2_FB24		(1 << 24)
/** CAN1_F21R2_FB23 Filter bits **/
#define CAN1_F21R2_FB23		(1 << 23)
/** CAN1_F21R2_FB22 Filter bits **/
#define CAN1_F21R2_FB22		(1 << 22)
/** CAN1_F21R2_FB21 Filter bits **/
#define CAN1_F21R2_FB21		(1 << 21)
/** CAN1_F21R2_FB20 Filter bits **/
#define CAN1_F21R2_FB20		(1 << 20)
/** CAN1_F21R2_FB19 Filter bits **/
#define CAN1_F21R2_FB19		(1 << 19)
/** CAN1_F21R2_FB18 Filter bits **/
#define CAN1_F21R2_FB18		(1 << 18)
/** CAN1_F21R2_FB17 Filter bits **/
#define CAN1_F21R2_FB17		(1 << 17)
/** CAN1_F21R2_FB16 Filter bits **/
#define CAN1_F21R2_FB16		(1 << 16)
/** CAN1_F21R2_FB15 Filter bits **/
#define CAN1_F21R2_FB15		(1 << 15)
/** CAN1_F21R2_FB14 Filter bits **/
#define CAN1_F21R2_FB14		(1 << 14)
/** CAN1_F21R2_FB13 Filter bits **/
#define CAN1_F21R2_FB13		(1 << 13)
/** CAN1_F21R2_FB12 Filter bits **/
#define CAN1_F21R2_FB12		(1 << 12)
/** CAN1_F21R2_FB11 Filter bits **/
#define CAN1_F21R2_FB11		(1 << 11)
/** CAN1_F21R2_FB10 Filter bits **/
#define CAN1_F21R2_FB10		(1 << 10)
/** CAN1_F21R2_FB9 Filter bits **/
#define CAN1_F21R2_FB9		(1 << 9)
/** CAN1_F21R2_FB8 Filter bits **/
#define CAN1_F21R2_FB8		(1 << 8)
/** CAN1_F21R2_FB7 Filter bits **/
#define CAN1_F21R2_FB7		(1 << 7)
/** CAN1_F21R2_FB6 Filter bits **/
#define CAN1_F21R2_FB6		(1 << 6)
/** CAN1_F21R2_FB5 Filter bits **/
#define CAN1_F21R2_FB5		(1 << 5)
/** CAN1_F21R2_FB4 Filter bits **/
#define CAN1_F21R2_FB4		(1 << 4)
/** CAN1_F21R2_FB3 Filter bits **/
#define CAN1_F21R2_FB3		(1 << 3)
/** CAN1_F21R2_FB2 Filter bits **/
#define CAN1_F21R2_FB2		(1 << 2)
/** CAN1_F21R2_FB1 Filter bits **/
#define CAN1_F21R2_FB1		(1 << 1)
/** CAN1_F21R2_FB0 Filter bits **/
#define CAN1_F21R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f22r1 F22R1 Filter bank 22 register 1
@{*/

/** CAN1_F22R1_FB31 Filter bits **/
#define CAN1_F22R1_FB31		(1 << 31)
/** CAN1_F22R1_FB30 Filter bits **/
#define CAN1_F22R1_FB30		(1 << 30)
/** CAN1_F22R1_FB29 Filter bits **/
#define CAN1_F22R1_FB29		(1 << 29)
/** CAN1_F22R1_FB28 Filter bits **/
#define CAN1_F22R1_FB28		(1 << 28)
/** CAN1_F22R1_FB27 Filter bits **/
#define CAN1_F22R1_FB27		(1 << 27)
/** CAN1_F22R1_FB26 Filter bits **/
#define CAN1_F22R1_FB26		(1 << 26)
/** CAN1_F22R1_FB25 Filter bits **/
#define CAN1_F22R1_FB25		(1 << 25)
/** CAN1_F22R1_FB24 Filter bits **/
#define CAN1_F22R1_FB24		(1 << 24)
/** CAN1_F22R1_FB23 Filter bits **/
#define CAN1_F22R1_FB23		(1 << 23)
/** CAN1_F22R1_FB22 Filter bits **/
#define CAN1_F22R1_FB22		(1 << 22)
/** CAN1_F22R1_FB21 Filter bits **/
#define CAN1_F22R1_FB21		(1 << 21)
/** CAN1_F22R1_FB20 Filter bits **/
#define CAN1_F22R1_FB20		(1 << 20)
/** CAN1_F22R1_FB19 Filter bits **/
#define CAN1_F22R1_FB19		(1 << 19)
/** CAN1_F22R1_FB18 Filter bits **/
#define CAN1_F22R1_FB18		(1 << 18)
/** CAN1_F22R1_FB17 Filter bits **/
#define CAN1_F22R1_FB17		(1 << 17)
/** CAN1_F22R1_FB16 Filter bits **/
#define CAN1_F22R1_FB16		(1 << 16)
/** CAN1_F22R1_FB15 Filter bits **/
#define CAN1_F22R1_FB15		(1 << 15)
/** CAN1_F22R1_FB14 Filter bits **/
#define CAN1_F22R1_FB14		(1 << 14)
/** CAN1_F22R1_FB13 Filter bits **/
#define CAN1_F22R1_FB13		(1 << 13)
/** CAN1_F22R1_FB12 Filter bits **/
#define CAN1_F22R1_FB12		(1 << 12)
/** CAN1_F22R1_FB11 Filter bits **/
#define CAN1_F22R1_FB11		(1 << 11)
/** CAN1_F22R1_FB10 Filter bits **/
#define CAN1_F22R1_FB10		(1 << 10)
/** CAN1_F22R1_FB9 Filter bits **/
#define CAN1_F22R1_FB9		(1 << 9)
/** CAN1_F22R1_FB8 Filter bits **/
#define CAN1_F22R1_FB8		(1 << 8)
/** CAN1_F22R1_FB7 Filter bits **/
#define CAN1_F22R1_FB7		(1 << 7)
/** CAN1_F22R1_FB6 Filter bits **/
#define CAN1_F22R1_FB6		(1 << 6)
/** CAN1_F22R1_FB5 Filter bits **/
#define CAN1_F22R1_FB5		(1 << 5)
/** CAN1_F22R1_FB4 Filter bits **/
#define CAN1_F22R1_FB4		(1 << 4)
/** CAN1_F22R1_FB3 Filter bits **/
#define CAN1_F22R1_FB3		(1 << 3)
/** CAN1_F22R1_FB2 Filter bits **/
#define CAN1_F22R1_FB2		(1 << 2)
/** CAN1_F22R1_FB1 Filter bits **/
#define CAN1_F22R1_FB1		(1 << 1)
/** CAN1_F22R1_FB0 Filter bits **/
#define CAN1_F22R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f22r2 F22R2 Filter bank 22 register 2
@{*/

/** CAN1_F22R2_FB31 Filter bits **/
#define CAN1_F22R2_FB31		(1 << 31)
/** CAN1_F22R2_FB30 Filter bits **/
#define CAN1_F22R2_FB30		(1 << 30)
/** CAN1_F22R2_FB29 Filter bits **/
#define CAN1_F22R2_FB29		(1 << 29)
/** CAN1_F22R2_FB28 Filter bits **/
#define CAN1_F22R2_FB28		(1 << 28)
/** CAN1_F22R2_FB27 Filter bits **/
#define CAN1_F22R2_FB27		(1 << 27)
/** CAN1_F22R2_FB26 Filter bits **/
#define CAN1_F22R2_FB26		(1 << 26)
/** CAN1_F22R2_FB25 Filter bits **/
#define CAN1_F22R2_FB25		(1 << 25)
/** CAN1_F22R2_FB24 Filter bits **/
#define CAN1_F22R2_FB24		(1 << 24)
/** CAN1_F22R2_FB23 Filter bits **/
#define CAN1_F22R2_FB23		(1 << 23)
/** CAN1_F22R2_FB22 Filter bits **/
#define CAN1_F22R2_FB22		(1 << 22)
/** CAN1_F22R2_FB21 Filter bits **/
#define CAN1_F22R2_FB21		(1 << 21)
/** CAN1_F22R2_FB20 Filter bits **/
#define CAN1_F22R2_FB20		(1 << 20)
/** CAN1_F22R2_FB19 Filter bits **/
#define CAN1_F22R2_FB19		(1 << 19)
/** CAN1_F22R2_FB18 Filter bits **/
#define CAN1_F22R2_FB18		(1 << 18)
/** CAN1_F22R2_FB17 Filter bits **/
#define CAN1_F22R2_FB17		(1 << 17)
/** CAN1_F22R2_FB16 Filter bits **/
#define CAN1_F22R2_FB16		(1 << 16)
/** CAN1_F22R2_FB15 Filter bits **/
#define CAN1_F22R2_FB15		(1 << 15)
/** CAN1_F22R2_FB14 Filter bits **/
#define CAN1_F22R2_FB14		(1 << 14)
/** CAN1_F22R2_FB13 Filter bits **/
#define CAN1_F22R2_FB13		(1 << 13)
/** CAN1_F22R2_FB12 Filter bits **/
#define CAN1_F22R2_FB12		(1 << 12)
/** CAN1_F22R2_FB11 Filter bits **/
#define CAN1_F22R2_FB11		(1 << 11)
/** CAN1_F22R2_FB10 Filter bits **/
#define CAN1_F22R2_FB10		(1 << 10)
/** CAN1_F22R2_FB9 Filter bits **/
#define CAN1_F22R2_FB9		(1 << 9)
/** CAN1_F22R2_FB8 Filter bits **/
#define CAN1_F22R2_FB8		(1 << 8)
/** CAN1_F22R2_FB7 Filter bits **/
#define CAN1_F22R2_FB7		(1 << 7)
/** CAN1_F22R2_FB6 Filter bits **/
#define CAN1_F22R2_FB6		(1 << 6)
/** CAN1_F22R2_FB5 Filter bits **/
#define CAN1_F22R2_FB5		(1 << 5)
/** CAN1_F22R2_FB4 Filter bits **/
#define CAN1_F22R2_FB4		(1 << 4)
/** CAN1_F22R2_FB3 Filter bits **/
#define CAN1_F22R2_FB3		(1 << 3)
/** CAN1_F22R2_FB2 Filter bits **/
#define CAN1_F22R2_FB2		(1 << 2)
/** CAN1_F22R2_FB1 Filter bits **/
#define CAN1_F22R2_FB1		(1 << 1)
/** CAN1_F22R2_FB0 Filter bits **/
#define CAN1_F22R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f23r1 F23R1 Filter bank 23 register 1
@{*/

/** CAN1_F23R1_FB31 Filter bits **/
#define CAN1_F23R1_FB31		(1 << 31)
/** CAN1_F23R1_FB30 Filter bits **/
#define CAN1_F23R1_FB30		(1 << 30)
/** CAN1_F23R1_FB29 Filter bits **/
#define CAN1_F23R1_FB29		(1 << 29)
/** CAN1_F23R1_FB28 Filter bits **/
#define CAN1_F23R1_FB28		(1 << 28)
/** CAN1_F23R1_FB27 Filter bits **/
#define CAN1_F23R1_FB27		(1 << 27)
/** CAN1_F23R1_FB26 Filter bits **/
#define CAN1_F23R1_FB26		(1 << 26)
/** CAN1_F23R1_FB25 Filter bits **/
#define CAN1_F23R1_FB25		(1 << 25)
/** CAN1_F23R1_FB24 Filter bits **/
#define CAN1_F23R1_FB24		(1 << 24)
/** CAN1_F23R1_FB23 Filter bits **/
#define CAN1_F23R1_FB23		(1 << 23)
/** CAN1_F23R1_FB22 Filter bits **/
#define CAN1_F23R1_FB22		(1 << 22)
/** CAN1_F23R1_FB21 Filter bits **/
#define CAN1_F23R1_FB21		(1 << 21)
/** CAN1_F23R1_FB20 Filter bits **/
#define CAN1_F23R1_FB20		(1 << 20)
/** CAN1_F23R1_FB19 Filter bits **/
#define CAN1_F23R1_FB19		(1 << 19)
/** CAN1_F23R1_FB18 Filter bits **/
#define CAN1_F23R1_FB18		(1 << 18)
/** CAN1_F23R1_FB17 Filter bits **/
#define CAN1_F23R1_FB17		(1 << 17)
/** CAN1_F23R1_FB16 Filter bits **/
#define CAN1_F23R1_FB16		(1 << 16)
/** CAN1_F23R1_FB15 Filter bits **/
#define CAN1_F23R1_FB15		(1 << 15)
/** CAN1_F23R1_FB14 Filter bits **/
#define CAN1_F23R1_FB14		(1 << 14)
/** CAN1_F23R1_FB13 Filter bits **/
#define CAN1_F23R1_FB13		(1 << 13)
/** CAN1_F23R1_FB12 Filter bits **/
#define CAN1_F23R1_FB12		(1 << 12)
/** CAN1_F23R1_FB11 Filter bits **/
#define CAN1_F23R1_FB11		(1 << 11)
/** CAN1_F23R1_FB10 Filter bits **/
#define CAN1_F23R1_FB10		(1 << 10)
/** CAN1_F23R1_FB9 Filter bits **/
#define CAN1_F23R1_FB9		(1 << 9)
/** CAN1_F23R1_FB8 Filter bits **/
#define CAN1_F23R1_FB8		(1 << 8)
/** CAN1_F23R1_FB7 Filter bits **/
#define CAN1_F23R1_FB7		(1 << 7)
/** CAN1_F23R1_FB6 Filter bits **/
#define CAN1_F23R1_FB6		(1 << 6)
/** CAN1_F23R1_FB5 Filter bits **/
#define CAN1_F23R1_FB5		(1 << 5)
/** CAN1_F23R1_FB4 Filter bits **/
#define CAN1_F23R1_FB4		(1 << 4)
/** CAN1_F23R1_FB3 Filter bits **/
#define CAN1_F23R1_FB3		(1 << 3)
/** CAN1_F23R1_FB2 Filter bits **/
#define CAN1_F23R1_FB2		(1 << 2)
/** CAN1_F23R1_FB1 Filter bits **/
#define CAN1_F23R1_FB1		(1 << 1)
/** CAN1_F23R1_FB0 Filter bits **/
#define CAN1_F23R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f23r2 F23R2 Filter bank 23 register 2
@{*/

/** CAN1_F23R2_FB31 Filter bits **/
#define CAN1_F23R2_FB31		(1 << 31)
/** CAN1_F23R2_FB30 Filter bits **/
#define CAN1_F23R2_FB30		(1 << 30)
/** CAN1_F23R2_FB29 Filter bits **/
#define CAN1_F23R2_FB29		(1 << 29)
/** CAN1_F23R2_FB28 Filter bits **/
#define CAN1_F23R2_FB28		(1 << 28)
/** CAN1_F23R2_FB27 Filter bits **/
#define CAN1_F23R2_FB27		(1 << 27)
/** CAN1_F23R2_FB26 Filter bits **/
#define CAN1_F23R2_FB26		(1 << 26)
/** CAN1_F23R2_FB25 Filter bits **/
#define CAN1_F23R2_FB25		(1 << 25)
/** CAN1_F23R2_FB24 Filter bits **/
#define CAN1_F23R2_FB24		(1 << 24)
/** CAN1_F23R2_FB23 Filter bits **/
#define CAN1_F23R2_FB23		(1 << 23)
/** CAN1_F23R2_FB22 Filter bits **/
#define CAN1_F23R2_FB22		(1 << 22)
/** CAN1_F23R2_FB21 Filter bits **/
#define CAN1_F23R2_FB21		(1 << 21)
/** CAN1_F23R2_FB20 Filter bits **/
#define CAN1_F23R2_FB20		(1 << 20)
/** CAN1_F23R2_FB19 Filter bits **/
#define CAN1_F23R2_FB19		(1 << 19)
/** CAN1_F23R2_FB18 Filter bits **/
#define CAN1_F23R2_FB18		(1 << 18)
/** CAN1_F23R2_FB17 Filter bits **/
#define CAN1_F23R2_FB17		(1 << 17)
/** CAN1_F23R2_FB16 Filter bits **/
#define CAN1_F23R2_FB16		(1 << 16)
/** CAN1_F23R2_FB15 Filter bits **/
#define CAN1_F23R2_FB15		(1 << 15)
/** CAN1_F23R2_FB14 Filter bits **/
#define CAN1_F23R2_FB14		(1 << 14)
/** CAN1_F23R2_FB13 Filter bits **/
#define CAN1_F23R2_FB13		(1 << 13)
/** CAN1_F23R2_FB12 Filter bits **/
#define CAN1_F23R2_FB12		(1 << 12)
/** CAN1_F23R2_FB11 Filter bits **/
#define CAN1_F23R2_FB11		(1 << 11)
/** CAN1_F23R2_FB10 Filter bits **/
#define CAN1_F23R2_FB10		(1 << 10)
/** CAN1_F23R2_FB9 Filter bits **/
#define CAN1_F23R2_FB9		(1 << 9)
/** CAN1_F23R2_FB8 Filter bits **/
#define CAN1_F23R2_FB8		(1 << 8)
/** CAN1_F23R2_FB7 Filter bits **/
#define CAN1_F23R2_FB7		(1 << 7)
/** CAN1_F23R2_FB6 Filter bits **/
#define CAN1_F23R2_FB6		(1 << 6)
/** CAN1_F23R2_FB5 Filter bits **/
#define CAN1_F23R2_FB5		(1 << 5)
/** CAN1_F23R2_FB4 Filter bits **/
#define CAN1_F23R2_FB4		(1 << 4)
/** CAN1_F23R2_FB3 Filter bits **/
#define CAN1_F23R2_FB3		(1 << 3)
/** CAN1_F23R2_FB2 Filter bits **/
#define CAN1_F23R2_FB2		(1 << 2)
/** CAN1_F23R2_FB1 Filter bits **/
#define CAN1_F23R2_FB1		(1 << 1)
/** CAN1_F23R2_FB0 Filter bits **/
#define CAN1_F23R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f24r1 F24R1 Filter bank 24 register 1
@{*/

/** CAN1_F24R1_FB31 Filter bits **/
#define CAN1_F24R1_FB31		(1 << 31)
/** CAN1_F24R1_FB30 Filter bits **/
#define CAN1_F24R1_FB30		(1 << 30)
/** CAN1_F24R1_FB29 Filter bits **/
#define CAN1_F24R1_FB29		(1 << 29)
/** CAN1_F24R1_FB28 Filter bits **/
#define CAN1_F24R1_FB28		(1 << 28)
/** CAN1_F24R1_FB27 Filter bits **/
#define CAN1_F24R1_FB27		(1 << 27)
/** CAN1_F24R1_FB26 Filter bits **/
#define CAN1_F24R1_FB26		(1 << 26)
/** CAN1_F24R1_FB25 Filter bits **/
#define CAN1_F24R1_FB25		(1 << 25)
/** CAN1_F24R1_FB24 Filter bits **/
#define CAN1_F24R1_FB24		(1 << 24)
/** CAN1_F24R1_FB23 Filter bits **/
#define CAN1_F24R1_FB23		(1 << 23)
/** CAN1_F24R1_FB22 Filter bits **/
#define CAN1_F24R1_FB22		(1 << 22)
/** CAN1_F24R1_FB21 Filter bits **/
#define CAN1_F24R1_FB21		(1 << 21)
/** CAN1_F24R1_FB20 Filter bits **/
#define CAN1_F24R1_FB20		(1 << 20)
/** CAN1_F24R1_FB19 Filter bits **/
#define CAN1_F24R1_FB19		(1 << 19)
/** CAN1_F24R1_FB18 Filter bits **/
#define CAN1_F24R1_FB18		(1 << 18)
/** CAN1_F24R1_FB17 Filter bits **/
#define CAN1_F24R1_FB17		(1 << 17)
/** CAN1_F24R1_FB16 Filter bits **/
#define CAN1_F24R1_FB16		(1 << 16)
/** CAN1_F24R1_FB15 Filter bits **/
#define CAN1_F24R1_FB15		(1 << 15)
/** CAN1_F24R1_FB14 Filter bits **/
#define CAN1_F24R1_FB14		(1 << 14)
/** CAN1_F24R1_FB13 Filter bits **/
#define CAN1_F24R1_FB13		(1 << 13)
/** CAN1_F24R1_FB12 Filter bits **/
#define CAN1_F24R1_FB12		(1 << 12)
/** CAN1_F24R1_FB11 Filter bits **/
#define CAN1_F24R1_FB11		(1 << 11)
/** CAN1_F24R1_FB10 Filter bits **/
#define CAN1_F24R1_FB10		(1 << 10)
/** CAN1_F24R1_FB9 Filter bits **/
#define CAN1_F24R1_FB9		(1 << 9)
/** CAN1_F24R1_FB8 Filter bits **/
#define CAN1_F24R1_FB8		(1 << 8)
/** CAN1_F24R1_FB7 Filter bits **/
#define CAN1_F24R1_FB7		(1 << 7)
/** CAN1_F24R1_FB6 Filter bits **/
#define CAN1_F24R1_FB6		(1 << 6)
/** CAN1_F24R1_FB5 Filter bits **/
#define CAN1_F24R1_FB5		(1 << 5)
/** CAN1_F24R1_FB4 Filter bits **/
#define CAN1_F24R1_FB4		(1 << 4)
/** CAN1_F24R1_FB3 Filter bits **/
#define CAN1_F24R1_FB3		(1 << 3)
/** CAN1_F24R1_FB2 Filter bits **/
#define CAN1_F24R1_FB2		(1 << 2)
/** CAN1_F24R1_FB1 Filter bits **/
#define CAN1_F24R1_FB1		(1 << 1)
/** CAN1_F24R1_FB0 Filter bits **/
#define CAN1_F24R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f24r2 F24R2 Filter bank 24 register 2
@{*/

/** CAN1_F24R2_FB31 Filter bits **/
#define CAN1_F24R2_FB31		(1 << 31)
/** CAN1_F24R2_FB30 Filter bits **/
#define CAN1_F24R2_FB30		(1 << 30)
/** CAN1_F24R2_FB29 Filter bits **/
#define CAN1_F24R2_FB29		(1 << 29)
/** CAN1_F24R2_FB28 Filter bits **/
#define CAN1_F24R2_FB28		(1 << 28)
/** CAN1_F24R2_FB27 Filter bits **/
#define CAN1_F24R2_FB27		(1 << 27)
/** CAN1_F24R2_FB26 Filter bits **/
#define CAN1_F24R2_FB26		(1 << 26)
/** CAN1_F24R2_FB25 Filter bits **/
#define CAN1_F24R2_FB25		(1 << 25)
/** CAN1_F24R2_FB24 Filter bits **/
#define CAN1_F24R2_FB24		(1 << 24)
/** CAN1_F24R2_FB23 Filter bits **/
#define CAN1_F24R2_FB23		(1 << 23)
/** CAN1_F24R2_FB22 Filter bits **/
#define CAN1_F24R2_FB22		(1 << 22)
/** CAN1_F24R2_FB21 Filter bits **/
#define CAN1_F24R2_FB21		(1 << 21)
/** CAN1_F24R2_FB20 Filter bits **/
#define CAN1_F24R2_FB20		(1 << 20)
/** CAN1_F24R2_FB19 Filter bits **/
#define CAN1_F24R2_FB19		(1 << 19)
/** CAN1_F24R2_FB18 Filter bits **/
#define CAN1_F24R2_FB18		(1 << 18)
/** CAN1_F24R2_FB17 Filter bits **/
#define CAN1_F24R2_FB17		(1 << 17)
/** CAN1_F24R2_FB16 Filter bits **/
#define CAN1_F24R2_FB16		(1 << 16)
/** CAN1_F24R2_FB15 Filter bits **/
#define CAN1_F24R2_FB15		(1 << 15)
/** CAN1_F24R2_FB14 Filter bits **/
#define CAN1_F24R2_FB14		(1 << 14)
/** CAN1_F24R2_FB13 Filter bits **/
#define CAN1_F24R2_FB13		(1 << 13)
/** CAN1_F24R2_FB12 Filter bits **/
#define CAN1_F24R2_FB12		(1 << 12)
/** CAN1_F24R2_FB11 Filter bits **/
#define CAN1_F24R2_FB11		(1 << 11)
/** CAN1_F24R2_FB10 Filter bits **/
#define CAN1_F24R2_FB10		(1 << 10)
/** CAN1_F24R2_FB9 Filter bits **/
#define CAN1_F24R2_FB9		(1 << 9)
/** CAN1_F24R2_FB8 Filter bits **/
#define CAN1_F24R2_FB8		(1 << 8)
/** CAN1_F24R2_FB7 Filter bits **/
#define CAN1_F24R2_FB7		(1 << 7)
/** CAN1_F24R2_FB6 Filter bits **/
#define CAN1_F24R2_FB6		(1 << 6)
/** CAN1_F24R2_FB5 Filter bits **/
#define CAN1_F24R2_FB5		(1 << 5)
/** CAN1_F24R2_FB4 Filter bits **/
#define CAN1_F24R2_FB4		(1 << 4)
/** CAN1_F24R2_FB3 Filter bits **/
#define CAN1_F24R2_FB3		(1 << 3)
/** CAN1_F24R2_FB2 Filter bits **/
#define CAN1_F24R2_FB2		(1 << 2)
/** CAN1_F24R2_FB1 Filter bits **/
#define CAN1_F24R2_FB1		(1 << 1)
/** CAN1_F24R2_FB0 Filter bits **/
#define CAN1_F24R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f25r1 F25R1 Filter bank 25 register 1
@{*/

/** CAN1_F25R1_FB31 Filter bits **/
#define CAN1_F25R1_FB31		(1 << 31)
/** CAN1_F25R1_FB30 Filter bits **/
#define CAN1_F25R1_FB30		(1 << 30)
/** CAN1_F25R1_FB29 Filter bits **/
#define CAN1_F25R1_FB29		(1 << 29)
/** CAN1_F25R1_FB28 Filter bits **/
#define CAN1_F25R1_FB28		(1 << 28)
/** CAN1_F25R1_FB27 Filter bits **/
#define CAN1_F25R1_FB27		(1 << 27)
/** CAN1_F25R1_FB26 Filter bits **/
#define CAN1_F25R1_FB26		(1 << 26)
/** CAN1_F25R1_FB25 Filter bits **/
#define CAN1_F25R1_FB25		(1 << 25)
/** CAN1_F25R1_FB24 Filter bits **/
#define CAN1_F25R1_FB24		(1 << 24)
/** CAN1_F25R1_FB23 Filter bits **/
#define CAN1_F25R1_FB23		(1 << 23)
/** CAN1_F25R1_FB22 Filter bits **/
#define CAN1_F25R1_FB22		(1 << 22)
/** CAN1_F25R1_FB21 Filter bits **/
#define CAN1_F25R1_FB21		(1 << 21)
/** CAN1_F25R1_FB20 Filter bits **/
#define CAN1_F25R1_FB20		(1 << 20)
/** CAN1_F25R1_FB19 Filter bits **/
#define CAN1_F25R1_FB19		(1 << 19)
/** CAN1_F25R1_FB18 Filter bits **/
#define CAN1_F25R1_FB18		(1 << 18)
/** CAN1_F25R1_FB17 Filter bits **/
#define CAN1_F25R1_FB17		(1 << 17)
/** CAN1_F25R1_FB16 Filter bits **/
#define CAN1_F25R1_FB16		(1 << 16)
/** CAN1_F25R1_FB15 Filter bits **/
#define CAN1_F25R1_FB15		(1 << 15)
/** CAN1_F25R1_FB14 Filter bits **/
#define CAN1_F25R1_FB14		(1 << 14)
/** CAN1_F25R1_FB13 Filter bits **/
#define CAN1_F25R1_FB13		(1 << 13)
/** CAN1_F25R1_FB12 Filter bits **/
#define CAN1_F25R1_FB12		(1 << 12)
/** CAN1_F25R1_FB11 Filter bits **/
#define CAN1_F25R1_FB11		(1 << 11)
/** CAN1_F25R1_FB10 Filter bits **/
#define CAN1_F25R1_FB10		(1 << 10)
/** CAN1_F25R1_FB9 Filter bits **/
#define CAN1_F25R1_FB9		(1 << 9)
/** CAN1_F25R1_FB8 Filter bits **/
#define CAN1_F25R1_FB8		(1 << 8)
/** CAN1_F25R1_FB7 Filter bits **/
#define CAN1_F25R1_FB7		(1 << 7)
/** CAN1_F25R1_FB6 Filter bits **/
#define CAN1_F25R1_FB6		(1 << 6)
/** CAN1_F25R1_FB5 Filter bits **/
#define CAN1_F25R1_FB5		(1 << 5)
/** CAN1_F25R1_FB4 Filter bits **/
#define CAN1_F25R1_FB4		(1 << 4)
/** CAN1_F25R1_FB3 Filter bits **/
#define CAN1_F25R1_FB3		(1 << 3)
/** CAN1_F25R1_FB2 Filter bits **/
#define CAN1_F25R1_FB2		(1 << 2)
/** CAN1_F25R1_FB1 Filter bits **/
#define CAN1_F25R1_FB1		(1 << 1)
/** CAN1_F25R1_FB0 Filter bits **/
#define CAN1_F25R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f25r2 F25R2 Filter bank 25 register 2
@{*/

/** CAN1_F25R2_FB31 Filter bits **/
#define CAN1_F25R2_FB31		(1 << 31)
/** CAN1_F25R2_FB30 Filter bits **/
#define CAN1_F25R2_FB30		(1 << 30)
/** CAN1_F25R2_FB29 Filter bits **/
#define CAN1_F25R2_FB29		(1 << 29)
/** CAN1_F25R2_FB28 Filter bits **/
#define CAN1_F25R2_FB28		(1 << 28)
/** CAN1_F25R2_FB27 Filter bits **/
#define CAN1_F25R2_FB27		(1 << 27)
/** CAN1_F25R2_FB26 Filter bits **/
#define CAN1_F25R2_FB26		(1 << 26)
/** CAN1_F25R2_FB25 Filter bits **/
#define CAN1_F25R2_FB25		(1 << 25)
/** CAN1_F25R2_FB24 Filter bits **/
#define CAN1_F25R2_FB24		(1 << 24)
/** CAN1_F25R2_FB23 Filter bits **/
#define CAN1_F25R2_FB23		(1 << 23)
/** CAN1_F25R2_FB22 Filter bits **/
#define CAN1_F25R2_FB22		(1 << 22)
/** CAN1_F25R2_FB21 Filter bits **/
#define CAN1_F25R2_FB21		(1 << 21)
/** CAN1_F25R2_FB20 Filter bits **/
#define CAN1_F25R2_FB20		(1 << 20)
/** CAN1_F25R2_FB19 Filter bits **/
#define CAN1_F25R2_FB19		(1 << 19)
/** CAN1_F25R2_FB18 Filter bits **/
#define CAN1_F25R2_FB18		(1 << 18)
/** CAN1_F25R2_FB17 Filter bits **/
#define CAN1_F25R2_FB17		(1 << 17)
/** CAN1_F25R2_FB16 Filter bits **/
#define CAN1_F25R2_FB16		(1 << 16)
/** CAN1_F25R2_FB15 Filter bits **/
#define CAN1_F25R2_FB15		(1 << 15)
/** CAN1_F25R2_FB14 Filter bits **/
#define CAN1_F25R2_FB14		(1 << 14)
/** CAN1_F25R2_FB13 Filter bits **/
#define CAN1_F25R2_FB13		(1 << 13)
/** CAN1_F25R2_FB12 Filter bits **/
#define CAN1_F25R2_FB12		(1 << 12)
/** CAN1_F25R2_FB11 Filter bits **/
#define CAN1_F25R2_FB11		(1 << 11)
/** CAN1_F25R2_FB10 Filter bits **/
#define CAN1_F25R2_FB10		(1 << 10)
/** CAN1_F25R2_FB9 Filter bits **/
#define CAN1_F25R2_FB9		(1 << 9)
/** CAN1_F25R2_FB8 Filter bits **/
#define CAN1_F25R2_FB8		(1 << 8)
/** CAN1_F25R2_FB7 Filter bits **/
#define CAN1_F25R2_FB7		(1 << 7)
/** CAN1_F25R2_FB6 Filter bits **/
#define CAN1_F25R2_FB6		(1 << 6)
/** CAN1_F25R2_FB5 Filter bits **/
#define CAN1_F25R2_FB5		(1 << 5)
/** CAN1_F25R2_FB4 Filter bits **/
#define CAN1_F25R2_FB4		(1 << 4)
/** CAN1_F25R2_FB3 Filter bits **/
#define CAN1_F25R2_FB3		(1 << 3)
/** CAN1_F25R2_FB2 Filter bits **/
#define CAN1_F25R2_FB2		(1 << 2)
/** CAN1_F25R2_FB1 Filter bits **/
#define CAN1_F25R2_FB1		(1 << 1)
/** CAN1_F25R2_FB0 Filter bits **/
#define CAN1_F25R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f26r1 F26R1 Filter bank 26 register 1
@{*/

/** CAN1_F26R1_FB31 Filter bits **/
#define CAN1_F26R1_FB31		(1 << 31)
/** CAN1_F26R1_FB30 Filter bits **/
#define CAN1_F26R1_FB30		(1 << 30)
/** CAN1_F26R1_FB29 Filter bits **/
#define CAN1_F26R1_FB29		(1 << 29)
/** CAN1_F26R1_FB28 Filter bits **/
#define CAN1_F26R1_FB28		(1 << 28)
/** CAN1_F26R1_FB27 Filter bits **/
#define CAN1_F26R1_FB27		(1 << 27)
/** CAN1_F26R1_FB26 Filter bits **/
#define CAN1_F26R1_FB26		(1 << 26)
/** CAN1_F26R1_FB25 Filter bits **/
#define CAN1_F26R1_FB25		(1 << 25)
/** CAN1_F26R1_FB24 Filter bits **/
#define CAN1_F26R1_FB24		(1 << 24)
/** CAN1_F26R1_FB23 Filter bits **/
#define CAN1_F26R1_FB23		(1 << 23)
/** CAN1_F26R1_FB22 Filter bits **/
#define CAN1_F26R1_FB22		(1 << 22)
/** CAN1_F26R1_FB21 Filter bits **/
#define CAN1_F26R1_FB21		(1 << 21)
/** CAN1_F26R1_FB20 Filter bits **/
#define CAN1_F26R1_FB20		(1 << 20)
/** CAN1_F26R1_FB19 Filter bits **/
#define CAN1_F26R1_FB19		(1 << 19)
/** CAN1_F26R1_FB18 Filter bits **/
#define CAN1_F26R1_FB18		(1 << 18)
/** CAN1_F26R1_FB17 Filter bits **/
#define CAN1_F26R1_FB17		(1 << 17)
/** CAN1_F26R1_FB16 Filter bits **/
#define CAN1_F26R1_FB16		(1 << 16)
/** CAN1_F26R1_FB15 Filter bits **/
#define CAN1_F26R1_FB15		(1 << 15)
/** CAN1_F26R1_FB14 Filter bits **/
#define CAN1_F26R1_FB14		(1 << 14)
/** CAN1_F26R1_FB13 Filter bits **/
#define CAN1_F26R1_FB13		(1 << 13)
/** CAN1_F26R1_FB12 Filter bits **/
#define CAN1_F26R1_FB12		(1 << 12)
/** CAN1_F26R1_FB11 Filter bits **/
#define CAN1_F26R1_FB11		(1 << 11)
/** CAN1_F26R1_FB10 Filter bits **/
#define CAN1_F26R1_FB10		(1 << 10)
/** CAN1_F26R1_FB9 Filter bits **/
#define CAN1_F26R1_FB9		(1 << 9)
/** CAN1_F26R1_FB8 Filter bits **/
#define CAN1_F26R1_FB8		(1 << 8)
/** CAN1_F26R1_FB7 Filter bits **/
#define CAN1_F26R1_FB7		(1 << 7)
/** CAN1_F26R1_FB6 Filter bits **/
#define CAN1_F26R1_FB6		(1 << 6)
/** CAN1_F26R1_FB5 Filter bits **/
#define CAN1_F26R1_FB5		(1 << 5)
/** CAN1_F26R1_FB4 Filter bits **/
#define CAN1_F26R1_FB4		(1 << 4)
/** CAN1_F26R1_FB3 Filter bits **/
#define CAN1_F26R1_FB3		(1 << 3)
/** CAN1_F26R1_FB2 Filter bits **/
#define CAN1_F26R1_FB2		(1 << 2)
/** CAN1_F26R1_FB1 Filter bits **/
#define CAN1_F26R1_FB1		(1 << 1)
/** CAN1_F26R1_FB0 Filter bits **/
#define CAN1_F26R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f26r2 F26R2 Filter bank 26 register 2
@{*/

/** CAN1_F26R2_FB31 Filter bits **/
#define CAN1_F26R2_FB31		(1 << 31)
/** CAN1_F26R2_FB30 Filter bits **/
#define CAN1_F26R2_FB30		(1 << 30)
/** CAN1_F26R2_FB29 Filter bits **/
#define CAN1_F26R2_FB29		(1 << 29)
/** CAN1_F26R2_FB28 Filter bits **/
#define CAN1_F26R2_FB28		(1 << 28)
/** CAN1_F26R2_FB27 Filter bits **/
#define CAN1_F26R2_FB27		(1 << 27)
/** CAN1_F26R2_FB26 Filter bits **/
#define CAN1_F26R2_FB26		(1 << 26)
/** CAN1_F26R2_FB25 Filter bits **/
#define CAN1_F26R2_FB25		(1 << 25)
/** CAN1_F26R2_FB24 Filter bits **/
#define CAN1_F26R2_FB24		(1 << 24)
/** CAN1_F26R2_FB23 Filter bits **/
#define CAN1_F26R2_FB23		(1 << 23)
/** CAN1_F26R2_FB22 Filter bits **/
#define CAN1_F26R2_FB22		(1 << 22)
/** CAN1_F26R2_FB21 Filter bits **/
#define CAN1_F26R2_FB21		(1 << 21)
/** CAN1_F26R2_FB20 Filter bits **/
#define CAN1_F26R2_FB20		(1 << 20)
/** CAN1_F26R2_FB19 Filter bits **/
#define CAN1_F26R2_FB19		(1 << 19)
/** CAN1_F26R2_FB18 Filter bits **/
#define CAN1_F26R2_FB18		(1 << 18)
/** CAN1_F26R2_FB17 Filter bits **/
#define CAN1_F26R2_FB17		(1 << 17)
/** CAN1_F26R2_FB16 Filter bits **/
#define CAN1_F26R2_FB16		(1 << 16)
/** CAN1_F26R2_FB15 Filter bits **/
#define CAN1_F26R2_FB15		(1 << 15)
/** CAN1_F26R2_FB14 Filter bits **/
#define CAN1_F26R2_FB14		(1 << 14)
/** CAN1_F26R2_FB13 Filter bits **/
#define CAN1_F26R2_FB13		(1 << 13)
/** CAN1_F26R2_FB12 Filter bits **/
#define CAN1_F26R2_FB12		(1 << 12)
/** CAN1_F26R2_FB11 Filter bits **/
#define CAN1_F26R2_FB11		(1 << 11)
/** CAN1_F26R2_FB10 Filter bits **/
#define CAN1_F26R2_FB10		(1 << 10)
/** CAN1_F26R2_FB9 Filter bits **/
#define CAN1_F26R2_FB9		(1 << 9)
/** CAN1_F26R2_FB8 Filter bits **/
#define CAN1_F26R2_FB8		(1 << 8)
/** CAN1_F26R2_FB7 Filter bits **/
#define CAN1_F26R2_FB7		(1 << 7)
/** CAN1_F26R2_FB6 Filter bits **/
#define CAN1_F26R2_FB6		(1 << 6)
/** CAN1_F26R2_FB5 Filter bits **/
#define CAN1_F26R2_FB5		(1 << 5)
/** CAN1_F26R2_FB4 Filter bits **/
#define CAN1_F26R2_FB4		(1 << 4)
/** CAN1_F26R2_FB3 Filter bits **/
#define CAN1_F26R2_FB3		(1 << 3)
/** CAN1_F26R2_FB2 Filter bits **/
#define CAN1_F26R2_FB2		(1 << 2)
/** CAN1_F26R2_FB1 Filter bits **/
#define CAN1_F26R2_FB1		(1 << 1)
/** CAN1_F26R2_FB0 Filter bits **/
#define CAN1_F26R2_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f27r1 F27R1 Filter bank 27 register 1
@{*/

/** CAN1_F27R1_FB31 Filter bits **/
#define CAN1_F27R1_FB31		(1 << 31)
/** CAN1_F27R1_FB30 Filter bits **/
#define CAN1_F27R1_FB30		(1 << 30)
/** CAN1_F27R1_FB29 Filter bits **/
#define CAN1_F27R1_FB29		(1 << 29)
/** CAN1_F27R1_FB28 Filter bits **/
#define CAN1_F27R1_FB28		(1 << 28)
/** CAN1_F27R1_FB27 Filter bits **/
#define CAN1_F27R1_FB27		(1 << 27)
/** CAN1_F27R1_FB26 Filter bits **/
#define CAN1_F27R1_FB26		(1 << 26)
/** CAN1_F27R1_FB25 Filter bits **/
#define CAN1_F27R1_FB25		(1 << 25)
/** CAN1_F27R1_FB24 Filter bits **/
#define CAN1_F27R1_FB24		(1 << 24)
/** CAN1_F27R1_FB23 Filter bits **/
#define CAN1_F27R1_FB23		(1 << 23)
/** CAN1_F27R1_FB22 Filter bits **/
#define CAN1_F27R1_FB22		(1 << 22)
/** CAN1_F27R1_FB21 Filter bits **/
#define CAN1_F27R1_FB21		(1 << 21)
/** CAN1_F27R1_FB20 Filter bits **/
#define CAN1_F27R1_FB20		(1 << 20)
/** CAN1_F27R1_FB19 Filter bits **/
#define CAN1_F27R1_FB19		(1 << 19)
/** CAN1_F27R1_FB18 Filter bits **/
#define CAN1_F27R1_FB18		(1 << 18)
/** CAN1_F27R1_FB17 Filter bits **/
#define CAN1_F27R1_FB17		(1 << 17)
/** CAN1_F27R1_FB16 Filter bits **/
#define CAN1_F27R1_FB16		(1 << 16)
/** CAN1_F27R1_FB15 Filter bits **/
#define CAN1_F27R1_FB15		(1 << 15)
/** CAN1_F27R1_FB14 Filter bits **/
#define CAN1_F27R1_FB14		(1 << 14)
/** CAN1_F27R1_FB13 Filter bits **/
#define CAN1_F27R1_FB13		(1 << 13)
/** CAN1_F27R1_FB12 Filter bits **/
#define CAN1_F27R1_FB12		(1 << 12)
/** CAN1_F27R1_FB11 Filter bits **/
#define CAN1_F27R1_FB11		(1 << 11)
/** CAN1_F27R1_FB10 Filter bits **/
#define CAN1_F27R1_FB10		(1 << 10)
/** CAN1_F27R1_FB9 Filter bits **/
#define CAN1_F27R1_FB9		(1 << 9)
/** CAN1_F27R1_FB8 Filter bits **/
#define CAN1_F27R1_FB8		(1 << 8)
/** CAN1_F27R1_FB7 Filter bits **/
#define CAN1_F27R1_FB7		(1 << 7)
/** CAN1_F27R1_FB6 Filter bits **/
#define CAN1_F27R1_FB6		(1 << 6)
/** CAN1_F27R1_FB5 Filter bits **/
#define CAN1_F27R1_FB5		(1 << 5)
/** CAN1_F27R1_FB4 Filter bits **/
#define CAN1_F27R1_FB4		(1 << 4)
/** CAN1_F27R1_FB3 Filter bits **/
#define CAN1_F27R1_FB3		(1 << 3)
/** CAN1_F27R1_FB2 Filter bits **/
#define CAN1_F27R1_FB2		(1 << 2)
/** CAN1_F27R1_FB1 Filter bits **/
#define CAN1_F27R1_FB1		(1 << 1)
/** CAN1_F27R1_FB0 Filter bits **/
#define CAN1_F27R1_FB0		(1 << 0)

/**@}*/

/** @defgroup can1_f27r2 F27R2 Filter bank 27 register 2
@{*/

/** CAN1_F27R2_FB31 Filter bits **/
#define CAN1_F27R2_FB31		(1 << 31)
/** CAN1_F27R2_FB30 Filter bits **/
#define CAN1_F27R2_FB30		(1 << 30)
/** CAN1_F27R2_FB29 Filter bits **/
#define CAN1_F27R2_FB29		(1 << 29)
/** CAN1_F27R2_FB28 Filter bits **/
#define CAN1_F27R2_FB28		(1 << 28)
/** CAN1_F27R2_FB27 Filter bits **/
#define CAN1_F27R2_FB27		(1 << 27)
/** CAN1_F27R2_FB26 Filter bits **/
#define CAN1_F27R2_FB26		(1 << 26)
/** CAN1_F27R2_FB25 Filter bits **/
#define CAN1_F27R2_FB25		(1 << 25)
/** CAN1_F27R2_FB24 Filter bits **/
#define CAN1_F27R2_FB24		(1 << 24)
/** CAN1_F27R2_FB23 Filter bits **/
#define CAN1_F27R2_FB23		(1 << 23)
/** CAN1_F27R2_FB22 Filter bits **/
#define CAN1_F27R2_FB22		(1 << 22)
/** CAN1_F27R2_FB21 Filter bits **/
#define CAN1_F27R2_FB21		(1 << 21)
/** CAN1_F27R2_FB20 Filter bits **/
#define CAN1_F27R2_FB20		(1 << 20)
/** CAN1_F27R2_FB19 Filter bits **/
#define CAN1_F27R2_FB19		(1 << 19)
/** CAN1_F27R2_FB18 Filter bits **/
#define CAN1_F27R2_FB18		(1 << 18)
/** CAN1_F27R2_FB17 Filter bits **/
#define CAN1_F27R2_FB17		(1 << 17)
/** CAN1_F27R2_FB16 Filter bits **/
#define CAN1_F27R2_FB16		(1 << 16)
/** CAN1_F27R2_FB15 Filter bits **/
#define CAN1_F27R2_FB15		(1 << 15)
/** CAN1_F27R2_FB14 Filter bits **/
#define CAN1_F27R2_FB14		(1 << 14)
/** CAN1_F27R2_FB13 Filter bits **/
#define CAN1_F27R2_FB13		(1 << 13)
/** CAN1_F27R2_FB12 Filter bits **/
#define CAN1_F27R2_FB12		(1 << 12)
/** CAN1_F27R2_FB11 Filter bits **/
#define CAN1_F27R2_FB11		(1 << 11)
/** CAN1_F27R2_FB10 Filter bits **/
#define CAN1_F27R2_FB10		(1 << 10)
/** CAN1_F27R2_FB9 Filter bits **/
#define CAN1_F27R2_FB9		(1 << 9)
/** CAN1_F27R2_FB8 Filter bits **/
#define CAN1_F27R2_FB8		(1 << 8)
/** CAN1_F27R2_FB7 Filter bits **/
#define CAN1_F27R2_FB7		(1 << 7)
/** CAN1_F27R2_FB6 Filter bits **/
#define CAN1_F27R2_FB6		(1 << 6)
/** CAN1_F27R2_FB5 Filter bits **/
#define CAN1_F27R2_FB5		(1 << 5)
/** CAN1_F27R2_FB4 Filter bits **/
#define CAN1_F27R2_FB4		(1 << 4)
/** CAN1_F27R2_FB3 Filter bits **/
#define CAN1_F27R2_FB3		(1 << 3)
/** CAN1_F27R2_FB2 Filter bits **/
#define CAN1_F27R2_FB2		(1 << 2)
/** CAN1_F27R2_FB1 Filter bits **/
#define CAN1_F27R2_FB1		(1 << 1)
/** CAN1_F27R2_FB0 Filter bits **/
#define CAN1_F27R2_FB0		(1 << 0)

/**@}*/

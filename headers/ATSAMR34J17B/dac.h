#pragma once 

/* --- DAC: Digital-to-Analog Converter ----------------------------- */

/** @defgroup dac_registers Digital-to-Analog Converter Register
@{*/

/** DAC_CTRLA Control A **/
#define DAC_CTRLA			MMIO32(DAC_BASE + 0x00)
/** DAC_CTRLB Control B **/
#define DAC_CTRLB			MMIO32(DAC_BASE + 0x01)
/** DAC_EVCTRL Event Control **/
#define DAC_EVCTRL			MMIO32(DAC_BASE + 0x02)
/** DAC_INTENCLR Interrupt Enable Clear **/
#define DAC_INTENCLR			MMIO32(DAC_BASE + 0x04)
/** DAC_INTENSET Interrupt Enable Set **/
#define DAC_INTENSET			MMIO32(DAC_BASE + 0x05)
/** DAC_INTFLAG Interrupt Flag Status and Clear **/
#define DAC_INTFLAG			MMIO32(DAC_BASE + 0x06)
/** DAC_STATUS Status **/
#define DAC_STATUS			MMIO32(DAC_BASE + 0x07)
/** DAC_SYNCBUSY Synchronization Busy **/
#define DAC_SYNCBUSY			MMIO32(DAC_BASE + 0x08)
/** DAC_DACCTRL0 DAC n Control **/
#define DAC_DACCTRL0			MMIO32(DAC_BASE + 0x0c)
/** DAC_DACCTRL1 DAC n Control **/
#define DAC_DACCTRL1			MMIO32(DAC_BASE + 0x0e)
/** DAC_DATA0 DAC n Data **/
#define DAC_DATA0			MMIO32(DAC_BASE + 0x10)
/** DAC_DATA1 DAC n Data **/
#define DAC_DATA1			MMIO32(DAC_BASE + 0x12)
/** DAC_DATABUF0 DAC n Data Buffer **/
#define DAC_DATABUF0			MMIO32(DAC_BASE + 0x14)
/** DAC_DATABUF1 DAC n Data Buffer **/
#define DAC_DATABUF1			MMIO32(DAC_BASE + 0x16)
/** DAC_DBGCTRL Debug Control **/
#define DAC_DBGCTRL			MMIO32(DAC_BASE + 0x18)

/**@}*/


/** @defgroup dac_ctrla CTRLA Control A
@{*/

/** DAC_CTRLA_ENABLE Enable DAC Controller **/
#define DAC_CTRLA_ENABLE		(1 << 1)
/** DAC_CTRLA_SWRST Software Reset **/
#define DAC_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup dac_ctrlb CTRLB Control B
@{*/


#define DAC_CTRLB_REFSEL_SHIFT		1
#define DAC_CTRLB_REFSEL_MASK		0x03
/** @defgroup dac_ctrlb_refsel REFSEL Reference Selection for DAC0/1
@{*/
/**@}*/

/** DAC_CTRLB_DIFF Differential mode enable **/
#define DAC_CTRLB_DIFF		(1 << 0)

/**@}*/

/** @defgroup dac_evctrl EVCTRL Event Control
@{*/

/** DAC_EVCTRL_INVEI1 Enable Invertion of DAC 1 input event **/
#define DAC_EVCTRL_INVEI1		(1 << 5)
/** DAC_EVCTRL_INVEI0 Enable Invertion of DAC 0 input event **/
#define DAC_EVCTRL_INVEI0		(1 << 4)
/** DAC_EVCTRL_EMPTYEO1 Data Buffer Empty Event Output DAC 1 **/
#define DAC_EVCTRL_EMPTYEO1		(1 << 3)
/** DAC_EVCTRL_EMPTYEO0 Data Buffer Empty Event Output DAC 0 **/
#define DAC_EVCTRL_EMPTYEO0		(1 << 2)
/** DAC_EVCTRL_STARTEI1 Start Conversion Event Input DAC 1 **/
#define DAC_EVCTRL_STARTEI1		(1 << 1)
/** DAC_EVCTRL_STARTEI0 Start Conversion Event Input DAC 0 **/
#define DAC_EVCTRL_STARTEI0		(1 << 0)

/**@}*/

/** @defgroup dac_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** DAC_INTENCLR_EMPTY1 Data Buffer 1 Empty Interrupt Enable **/
#define DAC_INTENCLR_EMPTY1		(1 << 3)
/** DAC_INTENCLR_EMPTY0 Data Buffer 0 Empty Interrupt Enable **/
#define DAC_INTENCLR_EMPTY0		(1 << 2)
/** DAC_INTENCLR_UNDERRUN1 Underrun Interrupt Enable for DAC 1 **/
#define DAC_INTENCLR_UNDERRUN1		(1 << 1)
/** DAC_INTENCLR_UNDERRUN0 Underrun Interrupt Enable for DAC 0 **/
#define DAC_INTENCLR_UNDERRUN0		(1 << 0)

/**@}*/

/** @defgroup dac_intenset INTENSET Interrupt Enable Set
@{*/

/** DAC_INTENSET_EMPTY1 Data Buffer 1 Empty Interrupt Enable **/
#define DAC_INTENSET_EMPTY1		(1 << 3)
/** DAC_INTENSET_EMPTY0 Data Buffer 0 Empty Interrupt Enable **/
#define DAC_INTENSET_EMPTY0		(1 << 2)
/** DAC_INTENSET_UNDERRUN1 Underrun Interrupt Enable for DAC 1 **/
#define DAC_INTENSET_UNDERRUN1		(1 << 1)
/** DAC_INTENSET_UNDERRUN0 Underrun Interrupt Enable for DAC 0 **/
#define DAC_INTENSET_UNDERRUN0		(1 << 0)

/**@}*/

/** @defgroup dac_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** DAC_INTFLAG_EMPTY1 Data Buffer 1 Empty **/
#define DAC_INTFLAG_EMPTY1		(1 << 3)
/** DAC_INTFLAG_EMPTY0 Data Buffer 0 Empty **/
#define DAC_INTFLAG_EMPTY0		(1 << 2)
/** DAC_INTFLAG_UNDERRUN1 DAC 1 Underrun **/
#define DAC_INTFLAG_UNDERRUN1		(1 << 1)
/** DAC_INTFLAG_UNDERRUN0 DAC 0 Underrun **/
#define DAC_INTFLAG_UNDERRUN0		(1 << 0)

/**@}*/

/** @defgroup dac_status STATUS Status
@{*/

/** DAC_STATUS_EOC1 DAC 1 End of Conversion **/
#define DAC_STATUS_EOC1		(1 << 3)
/** DAC_STATUS_EOC0 DAC 0 End of Conversion **/
#define DAC_STATUS_EOC0		(1 << 2)
/** DAC_STATUS_READY1 DAC 1 Startup Ready **/
#define DAC_STATUS_READY1		(1 << 1)
/** DAC_STATUS_READY0 DAC 0 Startup Ready **/
#define DAC_STATUS_READY0		(1 << 0)

/**@}*/

/** @defgroup dac_syncbusy SYNCBUSY Synchronization Busy
@{*/

/** DAC_SYNCBUSY_DATABUF1 Data Buffer DAC 1 **/
#define DAC_SYNCBUSY_DATABUF1		(1 << 5)
/** DAC_SYNCBUSY_DATABUF0 Data Buffer DAC 0 **/
#define DAC_SYNCBUSY_DATABUF0		(1 << 4)
/** DAC_SYNCBUSY_DATA1 Data DAC 1 **/
#define DAC_SYNCBUSY_DATA1		(1 << 3)
/** DAC_SYNCBUSY_DATA0 Data DAC 0 **/
#define DAC_SYNCBUSY_DATA0		(1 << 2)
/** DAC_SYNCBUSY_ENABLE DAC Enable Status **/
#define DAC_SYNCBUSY_ENABLE		(1 << 1)
/** DAC_SYNCBUSY_SWRST Software Reset **/
#define DAC_SYNCBUSY_SWRST		(1 << 0)

/**@}*/

/** @defgroup dac_dacctrl0 DACCTRL0 DAC n Control
@{*/


#define DAC_DACCTRL0_REFRESH_SHIFT		8
#define DAC_DACCTRL0_REFRESH_MASK		0x0f
/** @defgroup dac_dacctrl0_refresh REFRESH Refresh period
@{*/
/**@}*/

/** DAC_DACCTRL0_DITHER Dithering Mode **/
#define DAC_DACCTRL0_DITHER		(1 << 7)
/** DAC_DACCTRL0_RUNSTDBY Run in Standby **/
#define DAC_DACCTRL0_RUNSTDBY		(1 << 6)

#define DAC_DACCTRL0_CCTRL_SHIFT		2
#define DAC_DACCTRL0_CCTRL_MASK		0x03
/** @defgroup dac_dacctrl0_cctrl CCTRL Current Control
@{*/
/**@}*/

/** DAC_DACCTRL0_ENABLE Enable DAC0 **/
#define DAC_DACCTRL0_ENABLE		(1 << 1)
/** DAC_DACCTRL0_LEFTADJ Left Adjusted Data **/
#define DAC_DACCTRL0_LEFTADJ		(1 << 0)

/**@}*/

/** @defgroup dac_dacctrl1 DACCTRL1 DAC n Control
@{*/


#define DAC_DACCTRL1_REFRESH_SHIFT		8
#define DAC_DACCTRL1_REFRESH_MASK		0x0f
/** @defgroup dac_dacctrl1_refresh REFRESH Refresh period
@{*/
/**@}*/

/** DAC_DACCTRL1_DITHER Dithering Mode **/
#define DAC_DACCTRL1_DITHER		(1 << 7)
/** DAC_DACCTRL1_RUNSTDBY Run in Standby **/
#define DAC_DACCTRL1_RUNSTDBY		(1 << 6)

#define DAC_DACCTRL1_CCTRL_SHIFT		2
#define DAC_DACCTRL1_CCTRL_MASK		0x03
/** @defgroup dac_dacctrl1_cctrl CCTRL Current Control
@{*/
/**@}*/

/** DAC_DACCTRL1_ENABLE Enable DAC0 **/
#define DAC_DACCTRL1_ENABLE		(1 << 1)
/** DAC_DACCTRL1_LEFTADJ Left Adjusted Data **/
#define DAC_DACCTRL1_LEFTADJ		(1 << 0)

/**@}*/

/** @defgroup dac_data0 DATA0 DAC n Data
@{*/


#define DAC_DATA0_DATA_SHIFT		0
#define DAC_DATA0_DATA_MASK		0xffff
/** @defgroup dac_data0_data DATA DAC0 Data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_data1 DATA1 DAC n Data
@{*/


#define DAC_DATA1_DATA_SHIFT		0
#define DAC_DATA1_DATA_MASK		0xffff
/** @defgroup dac_data1_data DATA DAC0 Data
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_databuf0 DATABUF0 DAC n Data Buffer
@{*/


#define DAC_DATABUF0_DATABUF_SHIFT		0
#define DAC_DATABUF0_DATABUF_MASK		0xffff
/** @defgroup dac_databuf0_databuf DATABUF DAC0 Data Buffer
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_databuf1 DATABUF1 DAC n Data Buffer
@{*/


#define DAC_DATABUF1_DATABUF_SHIFT		0
#define DAC_DATABUF1_DATABUF_MASK		0xffff
/** @defgroup dac_databuf1_databuf DATABUF DAC0 Data Buffer
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_dbgctrl DBGCTRL Debug Control
@{*/

/** DAC_DBGCTRL_DBGRUN Debug Run **/
#define DAC_DBGCTRL_DBGRUN		(1 << 0)

/**@}*/

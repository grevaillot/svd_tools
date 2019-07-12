#pragma once 

/* --- DAC: Digital Analog Converter -------------------------------- */

/** @defgroup dac_registers Digital Analog Converter Register
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
/** DAC_DATA Data **/
#define DAC_DATA			MMIO32(DAC_BASE + 0x08)
/** DAC_DATABUF Data Buffer **/
#define DAC_DATABUF			MMIO32(DAC_BASE + 0x0c)

/**@}*/


/** @defgroup dac_ctrla CTRLA Control A
@{*/

/** DAC_CTRLA_RUNSTDBY Run in Standby **/
#define DAC_CTRLA_RUNSTDBY		(1 << 2)
/** DAC_CTRLA_ENABLE Enable **/
#define DAC_CTRLA_ENABLE		(1 << 1)
/** DAC_CTRLA_SWRST Software Reset **/
#define DAC_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup dac_ctrlb CTRLB Control B
@{*/


#define DAC_CTRLB_REFSEL_SHIFT		6
#define DAC_CTRLB_REFSEL_MASK		0x03
/** @defgroup dac_ctrlb_refsel REFSEL Reference Selection
@{*/
/**@}*/

/** DAC_CTRLB_BDWP Bypass DATABUF Write Protection **/
#define DAC_CTRLB_BDWP		(1 << 4)
/** DAC_CTRLB_VPD Voltage Pump Disable **/
#define DAC_CTRLB_VPD		(1 << 3)
/** DAC_CTRLB_LEFTADJ Left Adjusted Data **/
#define DAC_CTRLB_LEFTADJ		(1 << 2)
/** DAC_CTRLB_IOEN Internal Output Enable **/
#define DAC_CTRLB_IOEN		(1 << 1)
/** DAC_CTRLB_EOEN External Output Enable **/
#define DAC_CTRLB_EOEN		(1 << 0)

/**@}*/

/** @defgroup dac_evctrl EVCTRL Event Control
@{*/

/** DAC_EVCTRL_EMPTYEO Data Buffer Empty Event Output **/
#define DAC_EVCTRL_EMPTYEO		(1 << 1)
/** DAC_EVCTRL_STARTEI Start Conversion Event Input **/
#define DAC_EVCTRL_STARTEI		(1 << 0)

/**@}*/

/** @defgroup dac_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** DAC_INTENCLR_SYNCRDY Synchronization Ready Interrupt Enable **/
#define DAC_INTENCLR_SYNCRDY		(1 << 2)
/** DAC_INTENCLR_EMPTY Data Buffer Empty Interrupt Enable **/
#define DAC_INTENCLR_EMPTY		(1 << 1)
/** DAC_INTENCLR_UNDERRUN Underrun Interrupt Enable **/
#define DAC_INTENCLR_UNDERRUN		(1 << 0)

/**@}*/

/** @defgroup dac_intenset INTENSET Interrupt Enable Set
@{*/

/** DAC_INTENSET_SYNCRDY Synchronization Ready Interrupt Enable **/
#define DAC_INTENSET_SYNCRDY		(1 << 2)
/** DAC_INTENSET_EMPTY Data Buffer Empty Interrupt Enable **/
#define DAC_INTENSET_EMPTY		(1 << 1)
/** DAC_INTENSET_UNDERRUN Underrun Interrupt Enable **/
#define DAC_INTENSET_UNDERRUN		(1 << 0)

/**@}*/

/** @defgroup dac_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** DAC_INTFLAG_SYNCRDY Synchronization Ready **/
#define DAC_INTFLAG_SYNCRDY		(1 << 2)
/** DAC_INTFLAG_EMPTY Data Buffer Empty **/
#define DAC_INTFLAG_EMPTY		(1 << 1)
/** DAC_INTFLAG_UNDERRUN Underrun **/
#define DAC_INTFLAG_UNDERRUN		(1 << 0)

/**@}*/

/** @defgroup dac_status STATUS Status
@{*/

/** DAC_STATUS_SYNCBUSY Synchronization Busy Status **/
#define DAC_STATUS_SYNCBUSY		(1 << 7)

/**@}*/

/** @defgroup dac_data DATA Data
@{*/


#define DAC_DATA_DATA_SHIFT		0
#define DAC_DATA_DATA_MASK		0xffff
/** @defgroup dac_data_data DATA Data value to be converted
@{*/
/**@}*/


/**@}*/

/** @defgroup dac_databuf DATABUF Data Buffer
@{*/


#define DAC_DATABUF_DATABUF_SHIFT		0
#define DAC_DATABUF_DATABUF_MASK		0xffff
/** @defgroup dac_databuf_databuf DATABUF Data Buffer
@{*/
/**@}*/


/**@}*/

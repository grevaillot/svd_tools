#pragma once 

/* --- UTMI: USB Transmitter Interface Macrocell -------------------- */

/** @defgroup utmi_registers USB Transmitter Interface Macrocell Register
@{*/

/** UTMI_UTMI_OHCIICR OHCI Interrupt Configuration Register **/
#define UTMI_UTMI_OHCIICR			MMIO32(UTMI_BASE + 0x10)
/** UTMI_UTMI_CKTRIM UTMI Clock Trimming Register **/
#define UTMI_UTMI_CKTRIM			MMIO32(UTMI_BASE + 0x30)

/**@}*/


/** @defgroup utmi_utmi_ohciicr UTMIOHCIICR OHCI Interrupt Configuration Register
@{*/

/** UTMI_UTMI_OHCIICR_UDPPUDIS USB Device Pull-up Disable **/
#define UTMI_UTMI_OHCIICR_UDPPUDIS		(1 << 23)
/** UTMI_UTMI_OHCIICR_APPSTART  **/
#define UTMI_UTMI_OHCIICR_APPSTART		(1 << 5)
/** UTMI_UTMI_OHCIICR_ARIE OHCI Asynchronous Resume Interrupt Enable **/
#define UTMI_UTMI_OHCIICR_ARIE		(1 << 4)
/** UTMI_UTMI_OHCIICR_RES0 USB PORTx Reset **/
#define UTMI_UTMI_OHCIICR_RES0		(1 << 0)

/**@}*/

/** @defgroup utmi_utmi_cktrim UTMICKTRIM UTMI Clock Trimming Register
@{*/


#define UTMI_UTMI_CKTRIM_FREQ_SHIFT		0
#define UTMI_UTMI_CKTRIM_FREQ_MASK		0x03
/** @defgroup utmi_utmi_cktrim_freq FREQ UTMI Reference Clock Frequency
@{*/
/**@}*/


/**@}*/

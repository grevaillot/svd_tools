#pragma once 

/* --- EVSYS: Event System Interface -------------------------------- */

/** @defgroup evsys_registers Event System Interface Register
@{*/

/** EVSYS_CTRL Control **/
#define EVSYS_CTRL			MMIO32(EVSYS_BASE + 0x00)
/** EVSYS_CHANNEL Channel **/
#define EVSYS_CHANNEL			MMIO32(EVSYS_BASE + 0x04)
/** EVSYS_USER User Multiplexer **/
#define EVSYS_USER			MMIO32(EVSYS_BASE + 0x08)
/** EVSYS_CHSTATUS Channel Status **/
#define EVSYS_CHSTATUS			MMIO32(EVSYS_BASE + 0x0c)
/** EVSYS_INTENCLR Interrupt Enable Clear **/
#define EVSYS_INTENCLR			MMIO32(EVSYS_BASE + 0x10)
/** EVSYS_INTENSET Interrupt Enable Set **/
#define EVSYS_INTENSET			MMIO32(EVSYS_BASE + 0x14)
/** EVSYS_INTFLAG Interrupt Flag Status and Clear **/
#define EVSYS_INTFLAG			MMIO32(EVSYS_BASE + 0x18)

/**@}*/


/** @defgroup evsys_ctrl CTRL Control
@{*/

/** EVSYS_CTRL_GCLKREQ Generic Clock Requests **/
#define EVSYS_CTRL_GCLKREQ		(1 << 4)
/** EVSYS_CTRL_SWRST Software Reset **/
#define EVSYS_CTRL_SWRST		(1 << 0)

/**@}*/

/** @defgroup evsys_channel CHANNEL Channel
@{*/


#define EVSYS_CHANNEL_EDGSEL_SHIFT		26
#define EVSYS_CHANNEL_EDGSEL_MASK		0x03
/** @defgroup evsys_channel_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL_PATH_SHIFT		24
#define EVSYS_CHANNEL_PATH_MASK		0x03
/** @defgroup evsys_channel_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL_EVGEN_SHIFT		16
#define EVSYS_CHANNEL_EVGEN_MASK		0x7f
/** @defgroup evsys_channel_evgen EVGEN Event Generator Selection
@{*/
/**@}*/

/** EVSYS_CHANNEL_SWEVT Software Event **/
#define EVSYS_CHANNEL_SWEVT		(1 << 8)

#define EVSYS_CHANNEL_CHANNEL_SHIFT		0
#define EVSYS_CHANNEL_CHANNEL_MASK		0x0f
/** @defgroup evsys_channel_channel CHANNEL Channel Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user USER User Multiplexer
@{*/


#define EVSYS_USER_CHANNEL_SHIFT		8
#define EVSYS_USER_CHANNEL_MASK		0x1f
/** @defgroup evsys_user_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


#define EVSYS_USER_USER_SHIFT		0
#define EVSYS_USER_USER_MASK		0x1f
/** @defgroup evsys_user_user USER User Multiplexer Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_chstatus CHSTATUS Channel Status
@{*/

/** EVSYS_CHSTATUS_CHBUSY11 Channel 11 Busy **/
#define EVSYS_CHSTATUS_CHBUSY11		(1 << 27)
/** EVSYS_CHSTATUS_CHBUSY10 Channel 10 Busy **/
#define EVSYS_CHSTATUS_CHBUSY10		(1 << 26)
/** EVSYS_CHSTATUS_CHBUSY9 Channel 9 Busy **/
#define EVSYS_CHSTATUS_CHBUSY9		(1 << 25)
/** EVSYS_CHSTATUS_CHBUSY8 Channel 8 Busy **/
#define EVSYS_CHSTATUS_CHBUSY8		(1 << 24)
/** EVSYS_CHSTATUS_USRRDY11 Channel 11 User Ready **/
#define EVSYS_CHSTATUS_USRRDY11		(1 << 19)
/** EVSYS_CHSTATUS_USRRDY10 Channel 10 User Ready **/
#define EVSYS_CHSTATUS_USRRDY10		(1 << 18)
/** EVSYS_CHSTATUS_USRRDY9 Channel 9 User Ready **/
#define EVSYS_CHSTATUS_USRRDY9		(1 << 17)
/** EVSYS_CHSTATUS_USRRDY8 Channel 8 User Ready **/
#define EVSYS_CHSTATUS_USRRDY8		(1 << 16)
/** EVSYS_CHSTATUS_CHBUSY7 Channel 7 Busy **/
#define EVSYS_CHSTATUS_CHBUSY7		(1 << 15)
/** EVSYS_CHSTATUS_CHBUSY6 Channel 6 Busy **/
#define EVSYS_CHSTATUS_CHBUSY6		(1 << 14)
/** EVSYS_CHSTATUS_CHBUSY5 Channel 5 Busy **/
#define EVSYS_CHSTATUS_CHBUSY5		(1 << 13)
/** EVSYS_CHSTATUS_CHBUSY4 Channel 4 Busy **/
#define EVSYS_CHSTATUS_CHBUSY4		(1 << 12)
/** EVSYS_CHSTATUS_CHBUSY3 Channel 3 Busy **/
#define EVSYS_CHSTATUS_CHBUSY3		(1 << 11)
/** EVSYS_CHSTATUS_CHBUSY2 Channel 2 Busy **/
#define EVSYS_CHSTATUS_CHBUSY2		(1 << 10)
/** EVSYS_CHSTATUS_CHBUSY1 Channel 1 Busy **/
#define EVSYS_CHSTATUS_CHBUSY1		(1 << 9)
/** EVSYS_CHSTATUS_CHBUSY0 Channel 0 Busy **/
#define EVSYS_CHSTATUS_CHBUSY0		(1 << 8)
/** EVSYS_CHSTATUS_USRRDY7 Channel 7 User Ready **/
#define EVSYS_CHSTATUS_USRRDY7		(1 << 7)
/** EVSYS_CHSTATUS_USRRDY6 Channel 6 User Ready **/
#define EVSYS_CHSTATUS_USRRDY6		(1 << 6)
/** EVSYS_CHSTATUS_USRRDY5 Channel 5 User Ready **/
#define EVSYS_CHSTATUS_USRRDY5		(1 << 5)
/** EVSYS_CHSTATUS_USRRDY4 Channel 4 User Ready **/
#define EVSYS_CHSTATUS_USRRDY4		(1 << 4)
/** EVSYS_CHSTATUS_USRRDY3 Channel 3 User Ready **/
#define EVSYS_CHSTATUS_USRRDY3		(1 << 3)
/** EVSYS_CHSTATUS_USRRDY2 Channel 2 User Ready **/
#define EVSYS_CHSTATUS_USRRDY2		(1 << 2)
/** EVSYS_CHSTATUS_USRRDY1 Channel 1 User Ready **/
#define EVSYS_CHSTATUS_USRRDY1		(1 << 1)
/** EVSYS_CHSTATUS_USRRDY0 Channel 0 User Ready **/
#define EVSYS_CHSTATUS_USRRDY0		(1 << 0)

/**@}*/

/** @defgroup evsys_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** EVSYS_INTENCLR_EVD11 Channel 11 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD11		(1 << 27)
/** EVSYS_INTENCLR_EVD10 Channel 10 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD10		(1 << 26)
/** EVSYS_INTENCLR_EVD9 Channel 9 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD9		(1 << 25)
/** EVSYS_INTENCLR_EVD8 Channel 8 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD8		(1 << 24)
/** EVSYS_INTENCLR_OVR11 Channel 11 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR11		(1 << 19)
/** EVSYS_INTENCLR_OVR10 Channel 10 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR10		(1 << 18)
/** EVSYS_INTENCLR_OVR9 Channel 9 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR9		(1 << 17)
/** EVSYS_INTENCLR_OVR8 Channel 8 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR8		(1 << 16)
/** EVSYS_INTENCLR_EVD7 Channel 7 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD7		(1 << 15)
/** EVSYS_INTENCLR_EVD6 Channel 6 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD6		(1 << 14)
/** EVSYS_INTENCLR_EVD5 Channel 5 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD5		(1 << 13)
/** EVSYS_INTENCLR_EVD4 Channel 4 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD4		(1 << 12)
/** EVSYS_INTENCLR_EVD3 Channel 3 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD3		(1 << 11)
/** EVSYS_INTENCLR_EVD2 Channel 2 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD2		(1 << 10)
/** EVSYS_INTENCLR_EVD1 Channel 1 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD1		(1 << 9)
/** EVSYS_INTENCLR_EVD0 Channel 0 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD0		(1 << 8)
/** EVSYS_INTENCLR_OVR7 Channel 7 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR7		(1 << 7)
/** EVSYS_INTENCLR_OVR6 Channel 6 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR6		(1 << 6)
/** EVSYS_INTENCLR_OVR5 Channel 5 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR5		(1 << 5)
/** EVSYS_INTENCLR_OVR4 Channel 4 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR4		(1 << 4)
/** EVSYS_INTENCLR_OVR3 Channel 3 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR3		(1 << 3)
/** EVSYS_INTENCLR_OVR2 Channel 2 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR2		(1 << 2)
/** EVSYS_INTENCLR_OVR1 Channel 1 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR1		(1 << 1)
/** EVSYS_INTENCLR_OVR0 Channel 0 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR0		(1 << 0)

/**@}*/

/** @defgroup evsys_intenset INTENSET Interrupt Enable Set
@{*/

/** EVSYS_INTENSET_EVD11 Channel 11 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD11		(1 << 27)
/** EVSYS_INTENSET_EVD10 Channel 10 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD10		(1 << 26)
/** EVSYS_INTENSET_EVD9 Channel 9 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD9		(1 << 25)
/** EVSYS_INTENSET_EVD8 Channel 8 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD8		(1 << 24)
/** EVSYS_INTENSET_OVR11 Channel 11 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR11		(1 << 19)
/** EVSYS_INTENSET_OVR10 Channel 10 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR10		(1 << 18)
/** EVSYS_INTENSET_OVR9 Channel 9 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR9		(1 << 17)
/** EVSYS_INTENSET_OVR8 Channel 8 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR8		(1 << 16)
/** EVSYS_INTENSET_EVD7 Channel 7 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD7		(1 << 15)
/** EVSYS_INTENSET_EVD6 Channel 6 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD6		(1 << 14)
/** EVSYS_INTENSET_EVD5 Channel 5 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD5		(1 << 13)
/** EVSYS_INTENSET_EVD4 Channel 4 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD4		(1 << 12)
/** EVSYS_INTENSET_EVD3 Channel 3 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD3		(1 << 11)
/** EVSYS_INTENSET_EVD2 Channel 2 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD2		(1 << 10)
/** EVSYS_INTENSET_EVD1 Channel 1 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD1		(1 << 9)
/** EVSYS_INTENSET_EVD0 Channel 0 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD0		(1 << 8)
/** EVSYS_INTENSET_OVR7 Channel 7 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR7		(1 << 7)
/** EVSYS_INTENSET_OVR6 Channel 6 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR6		(1 << 6)
/** EVSYS_INTENSET_OVR5 Channel 5 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR5		(1 << 5)
/** EVSYS_INTENSET_OVR4 Channel 4 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR4		(1 << 4)
/** EVSYS_INTENSET_OVR3 Channel 3 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR3		(1 << 3)
/** EVSYS_INTENSET_OVR2 Channel 2 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR2		(1 << 2)
/** EVSYS_INTENSET_OVR1 Channel 1 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR1		(1 << 1)
/** EVSYS_INTENSET_OVR0 Channel 0 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR0		(1 << 0)

/**@}*/

/** @defgroup evsys_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** EVSYS_INTFLAG_EVD11 Channel 11 Event Detection **/
#define EVSYS_INTFLAG_EVD11		(1 << 27)
/** EVSYS_INTFLAG_EVD10 Channel 10 Event Detection **/
#define EVSYS_INTFLAG_EVD10		(1 << 26)
/** EVSYS_INTFLAG_EVD9 Channel 9 Event Detection **/
#define EVSYS_INTFLAG_EVD9		(1 << 25)
/** EVSYS_INTFLAG_EVD8 Channel 8 Event Detection **/
#define EVSYS_INTFLAG_EVD8		(1 << 24)
/** EVSYS_INTFLAG_OVR11 Channel 11 Overrun **/
#define EVSYS_INTFLAG_OVR11		(1 << 19)
/** EVSYS_INTFLAG_OVR10 Channel 10 Overrun **/
#define EVSYS_INTFLAG_OVR10		(1 << 18)
/** EVSYS_INTFLAG_OVR9 Channel 9 Overrun **/
#define EVSYS_INTFLAG_OVR9		(1 << 17)
/** EVSYS_INTFLAG_OVR8 Channel 8 Overrun **/
#define EVSYS_INTFLAG_OVR8		(1 << 16)
/** EVSYS_INTFLAG_EVD7 Channel 7 Event Detection **/
#define EVSYS_INTFLAG_EVD7		(1 << 15)
/** EVSYS_INTFLAG_EVD6 Channel 6 Event Detection **/
#define EVSYS_INTFLAG_EVD6		(1 << 14)
/** EVSYS_INTFLAG_EVD5 Channel 5 Event Detection **/
#define EVSYS_INTFLAG_EVD5		(1 << 13)
/** EVSYS_INTFLAG_EVD4 Channel 4 Event Detection **/
#define EVSYS_INTFLAG_EVD4		(1 << 12)
/** EVSYS_INTFLAG_EVD3 Channel 3 Event Detection **/
#define EVSYS_INTFLAG_EVD3		(1 << 11)
/** EVSYS_INTFLAG_EVD2 Channel 2 Event Detection **/
#define EVSYS_INTFLAG_EVD2		(1 << 10)
/** EVSYS_INTFLAG_EVD1 Channel 1 Event Detection **/
#define EVSYS_INTFLAG_EVD1		(1 << 9)
/** EVSYS_INTFLAG_EVD0 Channel 0 Event Detection **/
#define EVSYS_INTFLAG_EVD0		(1 << 8)
/** EVSYS_INTFLAG_OVR7 Channel 7 Overrun **/
#define EVSYS_INTFLAG_OVR7		(1 << 7)
/** EVSYS_INTFLAG_OVR6 Channel 6 Overrun **/
#define EVSYS_INTFLAG_OVR6		(1 << 6)
/** EVSYS_INTFLAG_OVR5 Channel 5 Overrun **/
#define EVSYS_INTFLAG_OVR5		(1 << 5)
/** EVSYS_INTFLAG_OVR4 Channel 4 Overrun **/
#define EVSYS_INTFLAG_OVR4		(1 << 4)
/** EVSYS_INTFLAG_OVR3 Channel 3 Overrun **/
#define EVSYS_INTFLAG_OVR3		(1 << 3)
/** EVSYS_INTFLAG_OVR2 Channel 2 Overrun **/
#define EVSYS_INTFLAG_OVR2		(1 << 2)
/** EVSYS_INTFLAG_OVR1 Channel 1 Overrun **/
#define EVSYS_INTFLAG_OVR1		(1 << 1)
/** EVSYS_INTFLAG_OVR0 Channel 0 Overrun **/
#define EVSYS_INTFLAG_OVR0		(1 << 0)

/**@}*/

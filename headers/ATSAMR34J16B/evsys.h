#pragma once 

/* --- EVSYS: Event System Interface -------------------------------- */

/** @defgroup evsys_registers Event System Interface Register
@{*/

/** EVSYS_CTRLA Control **/
#define EVSYS_CTRLA			MMIO32(EVSYS_BASE + 0x00)
/** EVSYS_CHSTATUS Channel Status **/
#define EVSYS_CHSTATUS			MMIO32(EVSYS_BASE + 0x0c)
/** EVSYS_INTENCLR Interrupt Enable Clear **/
#define EVSYS_INTENCLR			MMIO32(EVSYS_BASE + 0x10)
/** EVSYS_INTENSET Interrupt Enable Set **/
#define EVSYS_INTENSET			MMIO32(EVSYS_BASE + 0x14)
/** EVSYS_INTFLAG Interrupt Flag Status and Clear **/
#define EVSYS_INTFLAG			MMIO32(EVSYS_BASE + 0x18)
/** EVSYS_SWEVT Software Event **/
#define EVSYS_SWEVT			MMIO32(EVSYS_BASE + 0x1c)
/** EVSYS_CHANNEL0 Channel n **/
#define EVSYS_CHANNEL0			MMIO32(EVSYS_BASE + 0x20)
/** EVSYS_CHANNEL1 Channel n **/
#define EVSYS_CHANNEL1			MMIO32(EVSYS_BASE + 0x24)
/** EVSYS_CHANNEL2 Channel n **/
#define EVSYS_CHANNEL2			MMIO32(EVSYS_BASE + 0x28)
/** EVSYS_CHANNEL3 Channel n **/
#define EVSYS_CHANNEL3			MMIO32(EVSYS_BASE + 0x2c)
/** EVSYS_CHANNEL4 Channel n **/
#define EVSYS_CHANNEL4			MMIO32(EVSYS_BASE + 0x30)
/** EVSYS_CHANNEL5 Channel n **/
#define EVSYS_CHANNEL5			MMIO32(EVSYS_BASE + 0x34)
/** EVSYS_CHANNEL6 Channel n **/
#define EVSYS_CHANNEL6			MMIO32(EVSYS_BASE + 0x38)
/** EVSYS_CHANNEL7 Channel n **/
#define EVSYS_CHANNEL7			MMIO32(EVSYS_BASE + 0x3c)
/** EVSYS_CHANNEL8 Channel n **/
#define EVSYS_CHANNEL8			MMIO32(EVSYS_BASE + 0x40)
/** EVSYS_CHANNEL9 Channel n **/
#define EVSYS_CHANNEL9			MMIO32(EVSYS_BASE + 0x44)
/** EVSYS_CHANNEL10 Channel n **/
#define EVSYS_CHANNEL10			MMIO32(EVSYS_BASE + 0x48)
/** EVSYS_CHANNEL11 Channel n **/
#define EVSYS_CHANNEL11			MMIO32(EVSYS_BASE + 0x4c)
/** EVSYS_USER0 User Multiplexer n **/
#define EVSYS_USER0			MMIO32(EVSYS_BASE + 0x80)
/** EVSYS_USER1 User Multiplexer n **/
#define EVSYS_USER1			MMIO32(EVSYS_BASE + 0x84)
/** EVSYS_USER2 User Multiplexer n **/
#define EVSYS_USER2			MMIO32(EVSYS_BASE + 0x88)
/** EVSYS_USER3 User Multiplexer n **/
#define EVSYS_USER3			MMIO32(EVSYS_BASE + 0x8c)
/** EVSYS_USER4 User Multiplexer n **/
#define EVSYS_USER4			MMIO32(EVSYS_BASE + 0x90)
/** EVSYS_USER5 User Multiplexer n **/
#define EVSYS_USER5			MMIO32(EVSYS_BASE + 0x94)
/** EVSYS_USER6 User Multiplexer n **/
#define EVSYS_USER6			MMIO32(EVSYS_BASE + 0x98)
/** EVSYS_USER7 User Multiplexer n **/
#define EVSYS_USER7			MMIO32(EVSYS_BASE + 0x9c)
/** EVSYS_USER8 User Multiplexer n **/
#define EVSYS_USER8			MMIO32(EVSYS_BASE + 0xa0)
/** EVSYS_USER9 User Multiplexer n **/
#define EVSYS_USER9			MMIO32(EVSYS_BASE + 0xa4)
/** EVSYS_USER10 User Multiplexer n **/
#define EVSYS_USER10			MMIO32(EVSYS_BASE + 0xa8)
/** EVSYS_USER11 User Multiplexer n **/
#define EVSYS_USER11			MMIO32(EVSYS_BASE + 0xac)
/** EVSYS_USER12 User Multiplexer n **/
#define EVSYS_USER12			MMIO32(EVSYS_BASE + 0xb0)
/** EVSYS_USER13 User Multiplexer n **/
#define EVSYS_USER13			MMIO32(EVSYS_BASE + 0xb4)
/** EVSYS_USER14 User Multiplexer n **/
#define EVSYS_USER14			MMIO32(EVSYS_BASE + 0xb8)
/** EVSYS_USER15 User Multiplexer n **/
#define EVSYS_USER15			MMIO32(EVSYS_BASE + 0xbc)
/** EVSYS_USER16 User Multiplexer n **/
#define EVSYS_USER16			MMIO32(EVSYS_BASE + 0xc0)
/** EVSYS_USER17 User Multiplexer n **/
#define EVSYS_USER17			MMIO32(EVSYS_BASE + 0xc4)
/** EVSYS_USER18 User Multiplexer n **/
#define EVSYS_USER18			MMIO32(EVSYS_BASE + 0xc8)
/** EVSYS_USER19 User Multiplexer n **/
#define EVSYS_USER19			MMIO32(EVSYS_BASE + 0xcc)
/** EVSYS_USER20 User Multiplexer n **/
#define EVSYS_USER20			MMIO32(EVSYS_BASE + 0xd0)
/** EVSYS_USER21 User Multiplexer n **/
#define EVSYS_USER21			MMIO32(EVSYS_BASE + 0xd4)
/** EVSYS_USER22 User Multiplexer n **/
#define EVSYS_USER22			MMIO32(EVSYS_BASE + 0xd8)
/** EVSYS_USER23 User Multiplexer n **/
#define EVSYS_USER23			MMIO32(EVSYS_BASE + 0xdc)
/** EVSYS_USER24 User Multiplexer n **/
#define EVSYS_USER24			MMIO32(EVSYS_BASE + 0xe0)
/** EVSYS_USER25 User Multiplexer n **/
#define EVSYS_USER25			MMIO32(EVSYS_BASE + 0xe4)
/** EVSYS_USER26 User Multiplexer n **/
#define EVSYS_USER26			MMIO32(EVSYS_BASE + 0xe8)
/** EVSYS_USER27 User Multiplexer n **/
#define EVSYS_USER27			MMIO32(EVSYS_BASE + 0xec)
/** EVSYS_USER28 User Multiplexer n **/
#define EVSYS_USER28			MMIO32(EVSYS_BASE + 0xf0)
/** EVSYS_USER29 User Multiplexer n **/
#define EVSYS_USER29			MMIO32(EVSYS_BASE + 0xf4)
/** EVSYS_USER30 User Multiplexer n **/
#define EVSYS_USER30			MMIO32(EVSYS_BASE + 0xf8)
/** EVSYS_USER31 User Multiplexer n **/
#define EVSYS_USER31			MMIO32(EVSYS_BASE + 0xfc)
/** EVSYS_USER32 User Multiplexer n **/
#define EVSYS_USER32			MMIO32(EVSYS_BASE + 0x100)
/** EVSYS_USER33 User Multiplexer n **/
#define EVSYS_USER33			MMIO32(EVSYS_BASE + 0x104)
/** EVSYS_USER34 User Multiplexer n **/
#define EVSYS_USER34			MMIO32(EVSYS_BASE + 0x108)
/** EVSYS_USER35 User Multiplexer n **/
#define EVSYS_USER35			MMIO32(EVSYS_BASE + 0x10c)
/** EVSYS_USER36 User Multiplexer n **/
#define EVSYS_USER36			MMIO32(EVSYS_BASE + 0x110)
/** EVSYS_USER37 User Multiplexer n **/
#define EVSYS_USER37			MMIO32(EVSYS_BASE + 0x114)
/** EVSYS_USER38 User Multiplexer n **/
#define EVSYS_USER38			MMIO32(EVSYS_BASE + 0x118)
/** EVSYS_USER39 User Multiplexer n **/
#define EVSYS_USER39			MMIO32(EVSYS_BASE + 0x11c)
/** EVSYS_USER40 User Multiplexer n **/
#define EVSYS_USER40			MMIO32(EVSYS_BASE + 0x120)
/** EVSYS_USER41 User Multiplexer n **/
#define EVSYS_USER41			MMIO32(EVSYS_BASE + 0x124)
/** EVSYS_USER42 User Multiplexer n **/
#define EVSYS_USER42			MMIO32(EVSYS_BASE + 0x128)
/** EVSYS_USER43 User Multiplexer n **/
#define EVSYS_USER43			MMIO32(EVSYS_BASE + 0x12c)
/** EVSYS_USER44 User Multiplexer n **/
#define EVSYS_USER44			MMIO32(EVSYS_BASE + 0x130)

/**@}*/


/** @defgroup evsys_ctrla CTRLA Control
@{*/

/** EVSYS_CTRLA_SWRST Software Reset **/
#define EVSYS_CTRLA_SWRST		(1 << 0)

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
/** EVSYS_CHSTATUS_CHBUSY7 Channel 7 Busy **/
#define EVSYS_CHSTATUS_CHBUSY7		(1 << 23)
/** EVSYS_CHSTATUS_CHBUSY6 Channel 6 Busy **/
#define EVSYS_CHSTATUS_CHBUSY6		(1 << 22)
/** EVSYS_CHSTATUS_CHBUSY5 Channel 5 Busy **/
#define EVSYS_CHSTATUS_CHBUSY5		(1 << 21)
/** EVSYS_CHSTATUS_CHBUSY4 Channel 4 Busy **/
#define EVSYS_CHSTATUS_CHBUSY4		(1 << 20)
/** EVSYS_CHSTATUS_CHBUSY3 Channel 3 Busy **/
#define EVSYS_CHSTATUS_CHBUSY3		(1 << 19)
/** EVSYS_CHSTATUS_CHBUSY2 Channel 2 Busy **/
#define EVSYS_CHSTATUS_CHBUSY2		(1 << 18)
/** EVSYS_CHSTATUS_CHBUSY1 Channel 1 Busy **/
#define EVSYS_CHSTATUS_CHBUSY1		(1 << 17)
/** EVSYS_CHSTATUS_CHBUSY0 Channel 0 Busy **/
#define EVSYS_CHSTATUS_CHBUSY0		(1 << 16)
/** EVSYS_CHSTATUS_USRRDY11 Channel 11 User Ready **/
#define EVSYS_CHSTATUS_USRRDY11		(1 << 11)
/** EVSYS_CHSTATUS_USRRDY10 Channel 10 User Ready **/
#define EVSYS_CHSTATUS_USRRDY10		(1 << 10)
/** EVSYS_CHSTATUS_USRRDY9 Channel 9 User Ready **/
#define EVSYS_CHSTATUS_USRRDY9		(1 << 9)
/** EVSYS_CHSTATUS_USRRDY8 Channel 8 User Ready **/
#define EVSYS_CHSTATUS_USRRDY8		(1 << 8)
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
/** EVSYS_INTENCLR_EVD7 Channel 7 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD7		(1 << 23)
/** EVSYS_INTENCLR_EVD6 Channel 6 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD6		(1 << 22)
/** EVSYS_INTENCLR_EVD5 Channel 5 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD5		(1 << 21)
/** EVSYS_INTENCLR_EVD4 Channel 4 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD4		(1 << 20)
/** EVSYS_INTENCLR_EVD3 Channel 3 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD3		(1 << 19)
/** EVSYS_INTENCLR_EVD2 Channel 2 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD2		(1 << 18)
/** EVSYS_INTENCLR_EVD1 Channel 1 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD1		(1 << 17)
/** EVSYS_INTENCLR_EVD0 Channel 0 Event Detection Interrupt Enable **/
#define EVSYS_INTENCLR_EVD0		(1 << 16)
/** EVSYS_INTENCLR_OVR11 Channel 11 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR11		(1 << 11)
/** EVSYS_INTENCLR_OVR10 Channel 10 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR10		(1 << 10)
/** EVSYS_INTENCLR_OVR9 Channel 9 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR9		(1 << 9)
/** EVSYS_INTENCLR_OVR8 Channel 8 Overrun Interrupt Enable **/
#define EVSYS_INTENCLR_OVR8		(1 << 8)
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
/** EVSYS_INTENSET_EVD7 Channel 7 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD7		(1 << 23)
/** EVSYS_INTENSET_EVD6 Channel 6 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD6		(1 << 22)
/** EVSYS_INTENSET_EVD5 Channel 5 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD5		(1 << 21)
/** EVSYS_INTENSET_EVD4 Channel 4 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD4		(1 << 20)
/** EVSYS_INTENSET_EVD3 Channel 3 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD3		(1 << 19)
/** EVSYS_INTENSET_EVD2 Channel 2 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD2		(1 << 18)
/** EVSYS_INTENSET_EVD1 Channel 1 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD1		(1 << 17)
/** EVSYS_INTENSET_EVD0 Channel 0 Event Detection Interrupt Enable **/
#define EVSYS_INTENSET_EVD0		(1 << 16)
/** EVSYS_INTENSET_OVR11 Channel 11 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR11		(1 << 11)
/** EVSYS_INTENSET_OVR10 Channel 10 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR10		(1 << 10)
/** EVSYS_INTENSET_OVR9 Channel 9 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR9		(1 << 9)
/** EVSYS_INTENSET_OVR8 Channel 8 Overrun Interrupt Enable **/
#define EVSYS_INTENSET_OVR8		(1 << 8)
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
/** EVSYS_INTFLAG_EVD7 Channel 7 Event Detection **/
#define EVSYS_INTFLAG_EVD7		(1 << 23)
/** EVSYS_INTFLAG_EVD6 Channel 6 Event Detection **/
#define EVSYS_INTFLAG_EVD6		(1 << 22)
/** EVSYS_INTFLAG_EVD5 Channel 5 Event Detection **/
#define EVSYS_INTFLAG_EVD5		(1 << 21)
/** EVSYS_INTFLAG_EVD4 Channel 4 Event Detection **/
#define EVSYS_INTFLAG_EVD4		(1 << 20)
/** EVSYS_INTFLAG_EVD3 Channel 3 Event Detection **/
#define EVSYS_INTFLAG_EVD3		(1 << 19)
/** EVSYS_INTFLAG_EVD2 Channel 2 Event Detection **/
#define EVSYS_INTFLAG_EVD2		(1 << 18)
/** EVSYS_INTFLAG_EVD1 Channel 1 Event Detection **/
#define EVSYS_INTFLAG_EVD1		(1 << 17)
/** EVSYS_INTFLAG_EVD0 Channel 0 Event Detection **/
#define EVSYS_INTFLAG_EVD0		(1 << 16)
/** EVSYS_INTFLAG_OVR11 Channel 11 Overrun **/
#define EVSYS_INTFLAG_OVR11		(1 << 11)
/** EVSYS_INTFLAG_OVR10 Channel 10 Overrun **/
#define EVSYS_INTFLAG_OVR10		(1 << 10)
/** EVSYS_INTFLAG_OVR9 Channel 9 Overrun **/
#define EVSYS_INTFLAG_OVR9		(1 << 9)
/** EVSYS_INTFLAG_OVR8 Channel 8 Overrun **/
#define EVSYS_INTFLAG_OVR8		(1 << 8)
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

/** @defgroup evsys_swevt SWEVT Software Event
@{*/

/** EVSYS_SWEVT_CHANNEL11 Channel 11 Software Selection **/
#define EVSYS_SWEVT_CHANNEL11		(1 << 11)
/** EVSYS_SWEVT_CHANNEL10 Channel 10 Software Selection **/
#define EVSYS_SWEVT_CHANNEL10		(1 << 10)
/** EVSYS_SWEVT_CHANNEL9 Channel 9 Software Selection **/
#define EVSYS_SWEVT_CHANNEL9		(1 << 9)
/** EVSYS_SWEVT_CHANNEL8 Channel 8 Software Selection **/
#define EVSYS_SWEVT_CHANNEL8		(1 << 8)
/** EVSYS_SWEVT_CHANNEL7 Channel 7 Software Selection **/
#define EVSYS_SWEVT_CHANNEL7		(1 << 7)
/** EVSYS_SWEVT_CHANNEL6 Channel 6 Software Selection **/
#define EVSYS_SWEVT_CHANNEL6		(1 << 6)
/** EVSYS_SWEVT_CHANNEL5 Channel 5 Software Selection **/
#define EVSYS_SWEVT_CHANNEL5		(1 << 5)
/** EVSYS_SWEVT_CHANNEL4 Channel 4 Software Selection **/
#define EVSYS_SWEVT_CHANNEL4		(1 << 4)
/** EVSYS_SWEVT_CHANNEL3 Channel 3 Software Selection **/
#define EVSYS_SWEVT_CHANNEL3		(1 << 3)
/** EVSYS_SWEVT_CHANNEL2 Channel 2 Software Selection **/
#define EVSYS_SWEVT_CHANNEL2		(1 << 2)
/** EVSYS_SWEVT_CHANNEL1 Channel 1 Software Selection **/
#define EVSYS_SWEVT_CHANNEL1		(1 << 1)
/** EVSYS_SWEVT_CHANNEL0 Channel 0 Software Selection **/
#define EVSYS_SWEVT_CHANNEL0		(1 << 0)

/**@}*/

/** @defgroup evsys_channel0 CHANNEL0 Channel n
@{*/

/** EVSYS_CHANNEL0_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL0_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL0_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL0_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL0_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL0_EDGSEL_MASK		0x03
/** @defgroup evsys_channel0_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL0_PATH_SHIFT		8
#define EVSYS_CHANNEL0_PATH_MASK		0x03
/** @defgroup evsys_channel0_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL0_EVGEN_SHIFT		0
#define EVSYS_CHANNEL0_EVGEN_MASK		0x7f
/** @defgroup evsys_channel0_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel1 CHANNEL1 Channel n
@{*/

/** EVSYS_CHANNEL1_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL1_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL1_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL1_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL1_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL1_EDGSEL_MASK		0x03
/** @defgroup evsys_channel1_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL1_PATH_SHIFT		8
#define EVSYS_CHANNEL1_PATH_MASK		0x03
/** @defgroup evsys_channel1_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL1_EVGEN_SHIFT		0
#define EVSYS_CHANNEL1_EVGEN_MASK		0x7f
/** @defgroup evsys_channel1_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel2 CHANNEL2 Channel n
@{*/

/** EVSYS_CHANNEL2_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL2_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL2_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL2_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL2_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL2_EDGSEL_MASK		0x03
/** @defgroup evsys_channel2_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL2_PATH_SHIFT		8
#define EVSYS_CHANNEL2_PATH_MASK		0x03
/** @defgroup evsys_channel2_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL2_EVGEN_SHIFT		0
#define EVSYS_CHANNEL2_EVGEN_MASK		0x7f
/** @defgroup evsys_channel2_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel3 CHANNEL3 Channel n
@{*/

/** EVSYS_CHANNEL3_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL3_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL3_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL3_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL3_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL3_EDGSEL_MASK		0x03
/** @defgroup evsys_channel3_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL3_PATH_SHIFT		8
#define EVSYS_CHANNEL3_PATH_MASK		0x03
/** @defgroup evsys_channel3_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL3_EVGEN_SHIFT		0
#define EVSYS_CHANNEL3_EVGEN_MASK		0x7f
/** @defgroup evsys_channel3_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel4 CHANNEL4 Channel n
@{*/

/** EVSYS_CHANNEL4_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL4_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL4_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL4_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL4_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL4_EDGSEL_MASK		0x03
/** @defgroup evsys_channel4_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL4_PATH_SHIFT		8
#define EVSYS_CHANNEL4_PATH_MASK		0x03
/** @defgroup evsys_channel4_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL4_EVGEN_SHIFT		0
#define EVSYS_CHANNEL4_EVGEN_MASK		0x7f
/** @defgroup evsys_channel4_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel5 CHANNEL5 Channel n
@{*/

/** EVSYS_CHANNEL5_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL5_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL5_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL5_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL5_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL5_EDGSEL_MASK		0x03
/** @defgroup evsys_channel5_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL5_PATH_SHIFT		8
#define EVSYS_CHANNEL5_PATH_MASK		0x03
/** @defgroup evsys_channel5_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL5_EVGEN_SHIFT		0
#define EVSYS_CHANNEL5_EVGEN_MASK		0x7f
/** @defgroup evsys_channel5_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel6 CHANNEL6 Channel n
@{*/

/** EVSYS_CHANNEL6_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL6_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL6_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL6_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL6_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL6_EDGSEL_MASK		0x03
/** @defgroup evsys_channel6_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL6_PATH_SHIFT		8
#define EVSYS_CHANNEL6_PATH_MASK		0x03
/** @defgroup evsys_channel6_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL6_EVGEN_SHIFT		0
#define EVSYS_CHANNEL6_EVGEN_MASK		0x7f
/** @defgroup evsys_channel6_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel7 CHANNEL7 Channel n
@{*/

/** EVSYS_CHANNEL7_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL7_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL7_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL7_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL7_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL7_EDGSEL_MASK		0x03
/** @defgroup evsys_channel7_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL7_PATH_SHIFT		8
#define EVSYS_CHANNEL7_PATH_MASK		0x03
/** @defgroup evsys_channel7_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL7_EVGEN_SHIFT		0
#define EVSYS_CHANNEL7_EVGEN_MASK		0x7f
/** @defgroup evsys_channel7_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel8 CHANNEL8 Channel n
@{*/

/** EVSYS_CHANNEL8_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL8_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL8_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL8_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL8_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL8_EDGSEL_MASK		0x03
/** @defgroup evsys_channel8_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL8_PATH_SHIFT		8
#define EVSYS_CHANNEL8_PATH_MASK		0x03
/** @defgroup evsys_channel8_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL8_EVGEN_SHIFT		0
#define EVSYS_CHANNEL8_EVGEN_MASK		0x7f
/** @defgroup evsys_channel8_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel9 CHANNEL9 Channel n
@{*/

/** EVSYS_CHANNEL9_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL9_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL9_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL9_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL9_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL9_EDGSEL_MASK		0x03
/** @defgroup evsys_channel9_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL9_PATH_SHIFT		8
#define EVSYS_CHANNEL9_PATH_MASK		0x03
/** @defgroup evsys_channel9_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL9_EVGEN_SHIFT		0
#define EVSYS_CHANNEL9_EVGEN_MASK		0x7f
/** @defgroup evsys_channel9_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel10 CHANNEL10 Channel n
@{*/

/** EVSYS_CHANNEL10_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL10_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL10_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL10_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL10_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL10_EDGSEL_MASK		0x03
/** @defgroup evsys_channel10_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL10_PATH_SHIFT		8
#define EVSYS_CHANNEL10_PATH_MASK		0x03
/** @defgroup evsys_channel10_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL10_EVGEN_SHIFT		0
#define EVSYS_CHANNEL10_EVGEN_MASK		0x7f
/** @defgroup evsys_channel10_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel11 CHANNEL11 Channel n
@{*/

/** EVSYS_CHANNEL11_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL11_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL11_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL11_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL11_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL11_EDGSEL_MASK		0x03
/** @defgroup evsys_channel11_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL11_PATH_SHIFT		8
#define EVSYS_CHANNEL11_PATH_MASK		0x03
/** @defgroup evsys_channel11_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL11_EVGEN_SHIFT		0
#define EVSYS_CHANNEL11_EVGEN_MASK		0x7f
/** @defgroup evsys_channel11_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user0 USER0 User Multiplexer n
@{*/


#define EVSYS_USER0_CHANNEL_SHIFT		0
#define EVSYS_USER0_CHANNEL_MASK		0x1f
/** @defgroup evsys_user0_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user1 USER1 User Multiplexer n
@{*/


#define EVSYS_USER1_CHANNEL_SHIFT		0
#define EVSYS_USER1_CHANNEL_MASK		0x1f
/** @defgroup evsys_user1_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user2 USER2 User Multiplexer n
@{*/


#define EVSYS_USER2_CHANNEL_SHIFT		0
#define EVSYS_USER2_CHANNEL_MASK		0x1f
/** @defgroup evsys_user2_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user3 USER3 User Multiplexer n
@{*/


#define EVSYS_USER3_CHANNEL_SHIFT		0
#define EVSYS_USER3_CHANNEL_MASK		0x1f
/** @defgroup evsys_user3_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user4 USER4 User Multiplexer n
@{*/


#define EVSYS_USER4_CHANNEL_SHIFT		0
#define EVSYS_USER4_CHANNEL_MASK		0x1f
/** @defgroup evsys_user4_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user5 USER5 User Multiplexer n
@{*/


#define EVSYS_USER5_CHANNEL_SHIFT		0
#define EVSYS_USER5_CHANNEL_MASK		0x1f
/** @defgroup evsys_user5_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user6 USER6 User Multiplexer n
@{*/


#define EVSYS_USER6_CHANNEL_SHIFT		0
#define EVSYS_USER6_CHANNEL_MASK		0x1f
/** @defgroup evsys_user6_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user7 USER7 User Multiplexer n
@{*/


#define EVSYS_USER7_CHANNEL_SHIFT		0
#define EVSYS_USER7_CHANNEL_MASK		0x1f
/** @defgroup evsys_user7_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user8 USER8 User Multiplexer n
@{*/


#define EVSYS_USER8_CHANNEL_SHIFT		0
#define EVSYS_USER8_CHANNEL_MASK		0x1f
/** @defgroup evsys_user8_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user9 USER9 User Multiplexer n
@{*/


#define EVSYS_USER9_CHANNEL_SHIFT		0
#define EVSYS_USER9_CHANNEL_MASK		0x1f
/** @defgroup evsys_user9_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user10 USER10 User Multiplexer n
@{*/


#define EVSYS_USER10_CHANNEL_SHIFT		0
#define EVSYS_USER10_CHANNEL_MASK		0x1f
/** @defgroup evsys_user10_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user11 USER11 User Multiplexer n
@{*/


#define EVSYS_USER11_CHANNEL_SHIFT		0
#define EVSYS_USER11_CHANNEL_MASK		0x1f
/** @defgroup evsys_user11_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user12 USER12 User Multiplexer n
@{*/


#define EVSYS_USER12_CHANNEL_SHIFT		0
#define EVSYS_USER12_CHANNEL_MASK		0x1f
/** @defgroup evsys_user12_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user13 USER13 User Multiplexer n
@{*/


#define EVSYS_USER13_CHANNEL_SHIFT		0
#define EVSYS_USER13_CHANNEL_MASK		0x1f
/** @defgroup evsys_user13_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user14 USER14 User Multiplexer n
@{*/


#define EVSYS_USER14_CHANNEL_SHIFT		0
#define EVSYS_USER14_CHANNEL_MASK		0x1f
/** @defgroup evsys_user14_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user15 USER15 User Multiplexer n
@{*/


#define EVSYS_USER15_CHANNEL_SHIFT		0
#define EVSYS_USER15_CHANNEL_MASK		0x1f
/** @defgroup evsys_user15_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user16 USER16 User Multiplexer n
@{*/


#define EVSYS_USER16_CHANNEL_SHIFT		0
#define EVSYS_USER16_CHANNEL_MASK		0x1f
/** @defgroup evsys_user16_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user17 USER17 User Multiplexer n
@{*/


#define EVSYS_USER17_CHANNEL_SHIFT		0
#define EVSYS_USER17_CHANNEL_MASK		0x1f
/** @defgroup evsys_user17_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user18 USER18 User Multiplexer n
@{*/


#define EVSYS_USER18_CHANNEL_SHIFT		0
#define EVSYS_USER18_CHANNEL_MASK		0x1f
/** @defgroup evsys_user18_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user19 USER19 User Multiplexer n
@{*/


#define EVSYS_USER19_CHANNEL_SHIFT		0
#define EVSYS_USER19_CHANNEL_MASK		0x1f
/** @defgroup evsys_user19_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user20 USER20 User Multiplexer n
@{*/


#define EVSYS_USER20_CHANNEL_SHIFT		0
#define EVSYS_USER20_CHANNEL_MASK		0x1f
/** @defgroup evsys_user20_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user21 USER21 User Multiplexer n
@{*/


#define EVSYS_USER21_CHANNEL_SHIFT		0
#define EVSYS_USER21_CHANNEL_MASK		0x1f
/** @defgroup evsys_user21_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user22 USER22 User Multiplexer n
@{*/


#define EVSYS_USER22_CHANNEL_SHIFT		0
#define EVSYS_USER22_CHANNEL_MASK		0x1f
/** @defgroup evsys_user22_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user23 USER23 User Multiplexer n
@{*/


#define EVSYS_USER23_CHANNEL_SHIFT		0
#define EVSYS_USER23_CHANNEL_MASK		0x1f
/** @defgroup evsys_user23_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user24 USER24 User Multiplexer n
@{*/


#define EVSYS_USER24_CHANNEL_SHIFT		0
#define EVSYS_USER24_CHANNEL_MASK		0x1f
/** @defgroup evsys_user24_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user25 USER25 User Multiplexer n
@{*/


#define EVSYS_USER25_CHANNEL_SHIFT		0
#define EVSYS_USER25_CHANNEL_MASK		0x1f
/** @defgroup evsys_user25_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user26 USER26 User Multiplexer n
@{*/


#define EVSYS_USER26_CHANNEL_SHIFT		0
#define EVSYS_USER26_CHANNEL_MASK		0x1f
/** @defgroup evsys_user26_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user27 USER27 User Multiplexer n
@{*/


#define EVSYS_USER27_CHANNEL_SHIFT		0
#define EVSYS_USER27_CHANNEL_MASK		0x1f
/** @defgroup evsys_user27_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user28 USER28 User Multiplexer n
@{*/


#define EVSYS_USER28_CHANNEL_SHIFT		0
#define EVSYS_USER28_CHANNEL_MASK		0x1f
/** @defgroup evsys_user28_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user29 USER29 User Multiplexer n
@{*/


#define EVSYS_USER29_CHANNEL_SHIFT		0
#define EVSYS_USER29_CHANNEL_MASK		0x1f
/** @defgroup evsys_user29_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user30 USER30 User Multiplexer n
@{*/


#define EVSYS_USER30_CHANNEL_SHIFT		0
#define EVSYS_USER30_CHANNEL_MASK		0x1f
/** @defgroup evsys_user30_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user31 USER31 User Multiplexer n
@{*/


#define EVSYS_USER31_CHANNEL_SHIFT		0
#define EVSYS_USER31_CHANNEL_MASK		0x1f
/** @defgroup evsys_user31_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user32 USER32 User Multiplexer n
@{*/


#define EVSYS_USER32_CHANNEL_SHIFT		0
#define EVSYS_USER32_CHANNEL_MASK		0x1f
/** @defgroup evsys_user32_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user33 USER33 User Multiplexer n
@{*/


#define EVSYS_USER33_CHANNEL_SHIFT		0
#define EVSYS_USER33_CHANNEL_MASK		0x1f
/** @defgroup evsys_user33_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user34 USER34 User Multiplexer n
@{*/


#define EVSYS_USER34_CHANNEL_SHIFT		0
#define EVSYS_USER34_CHANNEL_MASK		0x1f
/** @defgroup evsys_user34_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user35 USER35 User Multiplexer n
@{*/


#define EVSYS_USER35_CHANNEL_SHIFT		0
#define EVSYS_USER35_CHANNEL_MASK		0x1f
/** @defgroup evsys_user35_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user36 USER36 User Multiplexer n
@{*/


#define EVSYS_USER36_CHANNEL_SHIFT		0
#define EVSYS_USER36_CHANNEL_MASK		0x1f
/** @defgroup evsys_user36_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user37 USER37 User Multiplexer n
@{*/


#define EVSYS_USER37_CHANNEL_SHIFT		0
#define EVSYS_USER37_CHANNEL_MASK		0x1f
/** @defgroup evsys_user37_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user38 USER38 User Multiplexer n
@{*/


#define EVSYS_USER38_CHANNEL_SHIFT		0
#define EVSYS_USER38_CHANNEL_MASK		0x1f
/** @defgroup evsys_user38_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user39 USER39 User Multiplexer n
@{*/


#define EVSYS_USER39_CHANNEL_SHIFT		0
#define EVSYS_USER39_CHANNEL_MASK		0x1f
/** @defgroup evsys_user39_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user40 USER40 User Multiplexer n
@{*/


#define EVSYS_USER40_CHANNEL_SHIFT		0
#define EVSYS_USER40_CHANNEL_MASK		0x1f
/** @defgroup evsys_user40_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user41 USER41 User Multiplexer n
@{*/


#define EVSYS_USER41_CHANNEL_SHIFT		0
#define EVSYS_USER41_CHANNEL_MASK		0x1f
/** @defgroup evsys_user41_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user42 USER42 User Multiplexer n
@{*/


#define EVSYS_USER42_CHANNEL_SHIFT		0
#define EVSYS_USER42_CHANNEL_MASK		0x1f
/** @defgroup evsys_user42_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user43 USER43 User Multiplexer n
@{*/


#define EVSYS_USER43_CHANNEL_SHIFT		0
#define EVSYS_USER43_CHANNEL_MASK		0x1f
/** @defgroup evsys_user43_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user44 USER44 User Multiplexer n
@{*/


#define EVSYS_USER44_CHANNEL_SHIFT		0
#define EVSYS_USER44_CHANNEL_MASK		0x1f
/** @defgroup evsys_user44_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

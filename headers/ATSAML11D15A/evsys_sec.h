#pragma once 

/* --- EVSYS_SEC: Event System Interface ---------------------------- */

/** @defgroup evsys_sec_registers Event System Interface Register
@{*/

/** EVSYS_SEC_CTRLA Control **/
#define EVSYS_SEC_CTRLA			MMIO32(EVSYS_SEC_BASE + 0x00)
/** EVSYS_SEC_SWEVT Software Event **/
#define EVSYS_SEC_SWEVT			MMIO32(EVSYS_SEC_BASE + 0x04)
/** EVSYS_SEC_PRICTRL Priority Control **/
#define EVSYS_SEC_PRICTRL			MMIO32(EVSYS_SEC_BASE + 0x08)
/** EVSYS_SEC_INTPEND Channel Pending Interrupt **/
#define EVSYS_SEC_INTPEND			MMIO32(EVSYS_SEC_BASE + 0x10)
/** EVSYS_SEC_INTSTATUS Interrupt Status **/
#define EVSYS_SEC_INTSTATUS			MMIO32(EVSYS_SEC_BASE + 0x14)
/** EVSYS_SEC_BUSYCH Busy Channels **/
#define EVSYS_SEC_BUSYCH			MMIO32(EVSYS_SEC_BASE + 0x18)
/** EVSYS_SEC_READYUSR Ready Users **/
#define EVSYS_SEC_READYUSR			MMIO32(EVSYS_SEC_BASE + 0x1c)
/** EVSYS_SEC_USER[0] User Multiplexer n **/
#define EVSYS_SEC_USER[0]			MMIO32(EVSYS_SEC_BASE + 0x120)
/** EVSYS_SEC_USER[1] User Multiplexer n **/
#define EVSYS_SEC_USER[1]			MMIO32(EVSYS_SEC_BASE + 0x121)
/** EVSYS_SEC_USER[2] User Multiplexer n **/
#define EVSYS_SEC_USER[2]			MMIO32(EVSYS_SEC_BASE + 0x122)
/** EVSYS_SEC_USER[3] User Multiplexer n **/
#define EVSYS_SEC_USER[3]			MMIO32(EVSYS_SEC_BASE + 0x123)
/** EVSYS_SEC_USER[4] User Multiplexer n **/
#define EVSYS_SEC_USER[4]			MMIO32(EVSYS_SEC_BASE + 0x124)
/** EVSYS_SEC_USER[5] User Multiplexer n **/
#define EVSYS_SEC_USER[5]			MMIO32(EVSYS_SEC_BASE + 0x125)
/** EVSYS_SEC_USER[6] User Multiplexer n **/
#define EVSYS_SEC_USER[6]			MMIO32(EVSYS_SEC_BASE + 0x126)
/** EVSYS_SEC_USER[7] User Multiplexer n **/
#define EVSYS_SEC_USER[7]			MMIO32(EVSYS_SEC_BASE + 0x127)
/** EVSYS_SEC_USER[8] User Multiplexer n **/
#define EVSYS_SEC_USER[8]			MMIO32(EVSYS_SEC_BASE + 0x128)
/** EVSYS_SEC_USER[9] User Multiplexer n **/
#define EVSYS_SEC_USER[9]			MMIO32(EVSYS_SEC_BASE + 0x129)
/** EVSYS_SEC_USER[10] User Multiplexer n **/
#define EVSYS_SEC_USER[10]			MMIO32(EVSYS_SEC_BASE + 0x12a)
/** EVSYS_SEC_USER[11] User Multiplexer n **/
#define EVSYS_SEC_USER[11]			MMIO32(EVSYS_SEC_BASE + 0x12b)
/** EVSYS_SEC_USER[12] User Multiplexer n **/
#define EVSYS_SEC_USER[12]			MMIO32(EVSYS_SEC_BASE + 0x12c)
/** EVSYS_SEC_USER[13] User Multiplexer n **/
#define EVSYS_SEC_USER[13]			MMIO32(EVSYS_SEC_BASE + 0x12d)
/** EVSYS_SEC_USER[14] User Multiplexer n **/
#define EVSYS_SEC_USER[14]			MMIO32(EVSYS_SEC_BASE + 0x12e)
/** EVSYS_SEC_USER[15] User Multiplexer n **/
#define EVSYS_SEC_USER[15]			MMIO32(EVSYS_SEC_BASE + 0x12f)
/** EVSYS_SEC_USER[16] User Multiplexer n **/
#define EVSYS_SEC_USER[16]			MMIO32(EVSYS_SEC_BASE + 0x130)
/** EVSYS_SEC_USER[17] User Multiplexer n **/
#define EVSYS_SEC_USER[17]			MMIO32(EVSYS_SEC_BASE + 0x131)
/** EVSYS_SEC_USER[18] User Multiplexer n **/
#define EVSYS_SEC_USER[18]			MMIO32(EVSYS_SEC_BASE + 0x132)
/** EVSYS_SEC_USER[19] User Multiplexer n **/
#define EVSYS_SEC_USER[19]			MMIO32(EVSYS_SEC_BASE + 0x133)
/** EVSYS_SEC_USER[20] User Multiplexer n **/
#define EVSYS_SEC_USER[20]			MMIO32(EVSYS_SEC_BASE + 0x134)
/** EVSYS_SEC_USER[21] User Multiplexer n **/
#define EVSYS_SEC_USER[21]			MMIO32(EVSYS_SEC_BASE + 0x135)
/** EVSYS_SEC_USER[22] User Multiplexer n **/
#define EVSYS_SEC_USER[22]			MMIO32(EVSYS_SEC_BASE + 0x136)
/** EVSYS_SEC_INTENCLR Interrupt Enable Clear **/
#define EVSYS_SEC_INTENCLR			MMIO32(EVSYS_SEC_BASE + 0x1d4)
/** EVSYS_SEC_INTENSET Interrupt Enable Set **/
#define EVSYS_SEC_INTENSET			MMIO32(EVSYS_SEC_BASE + 0x1d5)
/** EVSYS_SEC_INTFLAG Interrupt Flag Status and Clear **/
#define EVSYS_SEC_INTFLAG			MMIO32(EVSYS_SEC_BASE + 0x1d6)
/** EVSYS_SEC_NONSECCHAN Channels Security Attribution **/
#define EVSYS_SEC_NONSECCHAN			MMIO32(EVSYS_SEC_BASE + 0x1d8)
/** EVSYS_SEC_NSCHKCHAN Non-Secure Channels Check **/
#define EVSYS_SEC_NSCHKCHAN			MMIO32(EVSYS_SEC_BASE + 0x1dc)
/** EVSYS_SEC_NONSECUSER[0] Users Security Attribution **/
#define EVSYS_SEC_NONSECUSER[0]			MMIO32(EVSYS_SEC_BASE + 0x1e0)
/** EVSYS_SEC_NSCHKUSER[0] Non-Secure Users Check **/
#define EVSYS_SEC_NSCHKUSER[0]			MMIO32(EVSYS_SEC_BASE + 0x1f0)

/**@}*/


/** @defgroup evsys_sec_ctrla CTRLA Control
@{*/

/** EVSYS_SEC_CTRLA_SWRST Software Reset **/
#define EVSYS_SEC_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup evsys_sec_swevt SWEVT Software Event
@{*/

/** EVSYS_SEC_SWEVT_CHANNEL7 Channel 7 Software Selection **/
#define EVSYS_SEC_SWEVT_CHANNEL7		(1 << 7)
/** EVSYS_SEC_SWEVT_CHANNEL6 Channel 6 Software Selection **/
#define EVSYS_SEC_SWEVT_CHANNEL6		(1 << 6)
/** EVSYS_SEC_SWEVT_CHANNEL5 Channel 5 Software Selection **/
#define EVSYS_SEC_SWEVT_CHANNEL5		(1 << 5)
/** EVSYS_SEC_SWEVT_CHANNEL4 Channel 4 Software Selection **/
#define EVSYS_SEC_SWEVT_CHANNEL4		(1 << 4)
/** EVSYS_SEC_SWEVT_CHANNEL3 Channel 3 Software Selection **/
#define EVSYS_SEC_SWEVT_CHANNEL3		(1 << 3)
/** EVSYS_SEC_SWEVT_CHANNEL2 Channel 2 Software Selection **/
#define EVSYS_SEC_SWEVT_CHANNEL2		(1 << 2)
/** EVSYS_SEC_SWEVT_CHANNEL1 Channel 1 Software Selection **/
#define EVSYS_SEC_SWEVT_CHANNEL1		(1 << 1)
/** EVSYS_SEC_SWEVT_CHANNEL0 Channel 0 Software Selection **/
#define EVSYS_SEC_SWEVT_CHANNEL0		(1 << 0)

/**@}*/

/** @defgroup evsys_sec_prictrl PRICTRL Priority Control
@{*/

/** EVSYS_SEC_PRICTRL_RREN Round-Robin Scheduling Enable **/
#define EVSYS_SEC_PRICTRL_RREN		(1 << 7)

#define EVSYS_SEC_PRICTRL_PRI_SHIFT		0
#define EVSYS_SEC_PRICTRL_PRI_MASK		0x03
/** @defgroup evsys_sec_prictrl_pri PRI Channel Priority Number
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_intpend INTPEND Channel Pending Interrupt
@{*/

/** EVSYS_SEC_INTPEND_BUSY Busy **/
#define EVSYS_SEC_INTPEND_BUSY		(1 << 15)
/** EVSYS_SEC_INTPEND_READY Ready **/
#define EVSYS_SEC_INTPEND_READY		(1 << 14)
/** EVSYS_SEC_INTPEND_EVD Channel Event Detected **/
#define EVSYS_SEC_INTPEND_EVD		(1 << 9)
/** EVSYS_SEC_INTPEND_OVR Channel Overrun **/
#define EVSYS_SEC_INTPEND_OVR		(1 << 8)

#define EVSYS_SEC_INTPEND_ID_SHIFT		0
#define EVSYS_SEC_INTPEND_ID_MASK		0x03
/** @defgroup evsys_sec_intpend_id ID Channel ID
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_intstatus INTSTATUS Interrupt Status
@{*/

/** EVSYS_SEC_INTSTATUS_CHINT3 Channel 3 Pending Interrupt **/
#define EVSYS_SEC_INTSTATUS_CHINT3		(1 << 3)
/** EVSYS_SEC_INTSTATUS_CHINT2 Channel 2 Pending Interrupt **/
#define EVSYS_SEC_INTSTATUS_CHINT2		(1 << 2)
/** EVSYS_SEC_INTSTATUS_CHINT1 Channel 1 Pending Interrupt **/
#define EVSYS_SEC_INTSTATUS_CHINT1		(1 << 1)
/** EVSYS_SEC_INTSTATUS_CHINT0 Channel 0 Pending Interrupt **/
#define EVSYS_SEC_INTSTATUS_CHINT0		(1 << 0)

/**@}*/

/** @defgroup evsys_sec_busych BUSYCH Busy Channels
@{*/

/** EVSYS_SEC_BUSYCH_BUSYCH3 Busy Channel 3 **/
#define EVSYS_SEC_BUSYCH_BUSYCH3		(1 << 3)
/** EVSYS_SEC_BUSYCH_BUSYCH2 Busy Channel 2 **/
#define EVSYS_SEC_BUSYCH_BUSYCH2		(1 << 2)
/** EVSYS_SEC_BUSYCH_BUSYCH1 Busy Channel 1 **/
#define EVSYS_SEC_BUSYCH_BUSYCH1		(1 << 1)
/** EVSYS_SEC_BUSYCH_BUSYCH0 Busy Channel 0 **/
#define EVSYS_SEC_BUSYCH_BUSYCH0		(1 << 0)

/**@}*/

/** @defgroup evsys_sec_readyusr READYUSR Ready Users
@{*/

/** EVSYS_SEC_READYUSR_READYUSR3 Ready User for Channel 3 **/
#define EVSYS_SEC_READYUSR_READYUSR3		(1 << 3)
/** EVSYS_SEC_READYUSR_READYUSR2 Ready User for Channel 2 **/
#define EVSYS_SEC_READYUSR_READYUSR2		(1 << 2)
/** EVSYS_SEC_READYUSR_READYUSR1 Ready User for Channel 1 **/
#define EVSYS_SEC_READYUSR_READYUSR1		(1 << 1)
/** EVSYS_SEC_READYUSR_READYUSR0 Ready User for Channel 0 **/
#define EVSYS_SEC_READYUSR_READYUSR0		(1 << 0)

/**@}*/

/** @defgroup evsys_sec_user[0] USER[0] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[0]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[0]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[0]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[1] USER[1] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[1]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[1]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[1]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[2] USER[2] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[2]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[2]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[2]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[3] USER[3] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[3]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[3]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[3]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[4] USER[4] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[4]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[4]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[4]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[5] USER[5] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[5]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[5]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[5]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[6] USER[6] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[6]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[6]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[6]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[7] USER[7] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[7]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[7]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[7]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[8] USER[8] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[8]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[8]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[8]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[9] USER[9] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[9]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[9]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[9]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[10] USER[10] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[10]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[10]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[10]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[11] USER[11] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[11]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[11]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[11]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[12] USER[12] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[12]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[12]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[12]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[13] USER[13] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[13]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[13]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[13]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[14] USER[14] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[14]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[14]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[14]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[15] USER[15] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[15]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[15]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[15]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[16] USER[16] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[16]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[16]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[16]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[17] USER[17] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[17]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[17]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[17]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[18] USER[18] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[18]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[18]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[18]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[19] USER[19] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[19]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[19]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[19]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[20] USER[20] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[20]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[20]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[20]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[21] USER[21] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[21]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[21]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[21]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_user[22] USER[22] User Multiplexer n
@{*/


#define EVSYS_SEC_USER[22]_CHANNEL_SHIFT		0
#define EVSYS_SEC_USER[22]_CHANNEL_MASK		0x0f
/** @defgroup evsys_sec_user[22]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_sec_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** EVSYS_SEC_INTENCLR_NSCHK Non-Secure Check Interrupt Enable **/
#define EVSYS_SEC_INTENCLR_NSCHK		(1 << 0)

/**@}*/

/** @defgroup evsys_sec_intenset INTENSET Interrupt Enable Set
@{*/

/** EVSYS_SEC_INTENSET_NSCHK Non-Secure Check Interrupt Enable **/
#define EVSYS_SEC_INTENSET_NSCHK		(1 << 0)

/**@}*/

/** @defgroup evsys_sec_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** EVSYS_SEC_INTFLAG_NSCHK Non-Secure Check **/
#define EVSYS_SEC_INTFLAG_NSCHK		(1 << 0)

/**@}*/

/** @defgroup evsys_sec_nonsecchan NONSECCHAN Channels Security Attribution
@{*/

/** EVSYS_SEC_NONSECCHAN_CHANNEL7 Non-Secure for Channel 7 **/
#define EVSYS_SEC_NONSECCHAN_CHANNEL7		(1 << 7)
/** EVSYS_SEC_NONSECCHAN_CHANNEL6 Non-Secure for Channel 6 **/
#define EVSYS_SEC_NONSECCHAN_CHANNEL6		(1 << 6)
/** EVSYS_SEC_NONSECCHAN_CHANNEL5 Non-Secure for Channel 5 **/
#define EVSYS_SEC_NONSECCHAN_CHANNEL5		(1 << 5)
/** EVSYS_SEC_NONSECCHAN_CHANNEL4 Non-Secure for Channel 4 **/
#define EVSYS_SEC_NONSECCHAN_CHANNEL4		(1 << 4)
/** EVSYS_SEC_NONSECCHAN_CHANNEL3 Non-Secure for Channel 3 **/
#define EVSYS_SEC_NONSECCHAN_CHANNEL3		(1 << 3)
/** EVSYS_SEC_NONSECCHAN_CHANNEL2 Non-Secure for Channel 2 **/
#define EVSYS_SEC_NONSECCHAN_CHANNEL2		(1 << 2)
/** EVSYS_SEC_NONSECCHAN_CHANNEL1 Non-Secure for Channel 1 **/
#define EVSYS_SEC_NONSECCHAN_CHANNEL1		(1 << 1)
/** EVSYS_SEC_NONSECCHAN_CHANNEL0 Non-Secure for Channel 0 **/
#define EVSYS_SEC_NONSECCHAN_CHANNEL0		(1 << 0)

/**@}*/

/** @defgroup evsys_sec_nschkchan NSCHKCHAN Non-Secure Channels Check
@{*/

/** EVSYS_SEC_NSCHKCHAN_CHANNEL7 Channel 7 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKCHAN_CHANNEL7		(1 << 7)
/** EVSYS_SEC_NSCHKCHAN_CHANNEL6 Channel 6 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKCHAN_CHANNEL6		(1 << 6)
/** EVSYS_SEC_NSCHKCHAN_CHANNEL5 Channel 5 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKCHAN_CHANNEL5		(1 << 5)
/** EVSYS_SEC_NSCHKCHAN_CHANNEL4 Channel 4 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKCHAN_CHANNEL4		(1 << 4)
/** EVSYS_SEC_NSCHKCHAN_CHANNEL3 Channel 3 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKCHAN_CHANNEL3		(1 << 3)
/** EVSYS_SEC_NSCHKCHAN_CHANNEL2 Channel 2 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKCHAN_CHANNEL2		(1 << 2)
/** EVSYS_SEC_NSCHKCHAN_CHANNEL1 Channel 1 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKCHAN_CHANNEL1		(1 << 1)
/** EVSYS_SEC_NSCHKCHAN_CHANNEL0 Channel 0 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKCHAN_CHANNEL0		(1 << 0)

/**@}*/

/** @defgroup evsys_sec_nonsecuser[0] NONSECUSER[0] Users Security Attribution
@{*/

/** EVSYS_SEC_NONSECUSER[0]_USER22 Non-Secure for User 22 **/
#define EVSYS_SEC_NONSECUSER[0]_USER22		(1 << 22)
/** EVSYS_SEC_NONSECUSER[0]_USER21 Non-Secure for User 21 **/
#define EVSYS_SEC_NONSECUSER[0]_USER21		(1 << 21)
/** EVSYS_SEC_NONSECUSER[0]_USER20 Non-Secure for User 20 **/
#define EVSYS_SEC_NONSECUSER[0]_USER20		(1 << 20)
/** EVSYS_SEC_NONSECUSER[0]_USER19 Non-Secure for User 19 **/
#define EVSYS_SEC_NONSECUSER[0]_USER19		(1 << 19)
/** EVSYS_SEC_NONSECUSER[0]_USER18 Non-Secure for User 18 **/
#define EVSYS_SEC_NONSECUSER[0]_USER18		(1 << 18)
/** EVSYS_SEC_NONSECUSER[0]_USER17 Non-Secure for User 17 **/
#define EVSYS_SEC_NONSECUSER[0]_USER17		(1 << 17)
/** EVSYS_SEC_NONSECUSER[0]_USER16 Non-Secure for User 16 **/
#define EVSYS_SEC_NONSECUSER[0]_USER16		(1 << 16)
/** EVSYS_SEC_NONSECUSER[0]_USER15 Non-Secure for User 15 **/
#define EVSYS_SEC_NONSECUSER[0]_USER15		(1 << 15)
/** EVSYS_SEC_NONSECUSER[0]_USER14 Non-Secure for User 14 **/
#define EVSYS_SEC_NONSECUSER[0]_USER14		(1 << 14)
/** EVSYS_SEC_NONSECUSER[0]_USER13 Non-Secure for User 13 **/
#define EVSYS_SEC_NONSECUSER[0]_USER13		(1 << 13)
/** EVSYS_SEC_NONSECUSER[0]_USER12 Non-Secure for User 12 **/
#define EVSYS_SEC_NONSECUSER[0]_USER12		(1 << 12)
/** EVSYS_SEC_NONSECUSER[0]_USER11 Non-Secure for User 11 **/
#define EVSYS_SEC_NONSECUSER[0]_USER11		(1 << 11)
/** EVSYS_SEC_NONSECUSER[0]_USER10 Non-Secure for User 10 **/
#define EVSYS_SEC_NONSECUSER[0]_USER10		(1 << 10)
/** EVSYS_SEC_NONSECUSER[0]_USER9 Non-Secure for User 9 **/
#define EVSYS_SEC_NONSECUSER[0]_USER9		(1 << 9)
/** EVSYS_SEC_NONSECUSER[0]_USER8 Non-Secure for User 8 **/
#define EVSYS_SEC_NONSECUSER[0]_USER8		(1 << 8)
/** EVSYS_SEC_NONSECUSER[0]_USER7 Non-Secure for User 7 **/
#define EVSYS_SEC_NONSECUSER[0]_USER7		(1 << 7)
/** EVSYS_SEC_NONSECUSER[0]_USER6 Non-Secure for User 6 **/
#define EVSYS_SEC_NONSECUSER[0]_USER6		(1 << 6)
/** EVSYS_SEC_NONSECUSER[0]_USER5 Non-Secure for User 5 **/
#define EVSYS_SEC_NONSECUSER[0]_USER5		(1 << 5)
/** EVSYS_SEC_NONSECUSER[0]_USER4 Non-Secure for User 4 **/
#define EVSYS_SEC_NONSECUSER[0]_USER4		(1 << 4)
/** EVSYS_SEC_NONSECUSER[0]_USER3 Non-Secure for User 3 **/
#define EVSYS_SEC_NONSECUSER[0]_USER3		(1 << 3)
/** EVSYS_SEC_NONSECUSER[0]_USER2 Non-Secure for User 2 **/
#define EVSYS_SEC_NONSECUSER[0]_USER2		(1 << 2)
/** EVSYS_SEC_NONSECUSER[0]_USER1 Non-Secure for User 1 **/
#define EVSYS_SEC_NONSECUSER[0]_USER1		(1 << 1)
/** EVSYS_SEC_NONSECUSER[0]_USER0 Non-Secure for User 0 **/
#define EVSYS_SEC_NONSECUSER[0]_USER0		(1 << 0)

/**@}*/

/** @defgroup evsys_sec_nschkuser[0] NSCHKUSER[0] Non-Secure Users Check
@{*/

/** EVSYS_SEC_NSCHKUSER[0]_USER22 User 22 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER22		(1 << 22)
/** EVSYS_SEC_NSCHKUSER[0]_USER21 User 21 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER21		(1 << 21)
/** EVSYS_SEC_NSCHKUSER[0]_USER20 User 20 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER20		(1 << 20)
/** EVSYS_SEC_NSCHKUSER[0]_USER19 User 19 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER19		(1 << 19)
/** EVSYS_SEC_NSCHKUSER[0]_USER18 User 18 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER18		(1 << 18)
/** EVSYS_SEC_NSCHKUSER[0]_USER17 User 17 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER17		(1 << 17)
/** EVSYS_SEC_NSCHKUSER[0]_USER16 User 16 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER16		(1 << 16)
/** EVSYS_SEC_NSCHKUSER[0]_USER15 User 15 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER15		(1 << 15)
/** EVSYS_SEC_NSCHKUSER[0]_USER14 User 14 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER14		(1 << 14)
/** EVSYS_SEC_NSCHKUSER[0]_USER13 User 13 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER13		(1 << 13)
/** EVSYS_SEC_NSCHKUSER[0]_USER12 User 12 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER12		(1 << 12)
/** EVSYS_SEC_NSCHKUSER[0]_USER11 User 11 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER11		(1 << 11)
/** EVSYS_SEC_NSCHKUSER[0]_USER10 User 10 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER10		(1 << 10)
/** EVSYS_SEC_NSCHKUSER[0]_USER9 User 9 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER9		(1 << 9)
/** EVSYS_SEC_NSCHKUSER[0]_USER8 User 8 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER8		(1 << 8)
/** EVSYS_SEC_NSCHKUSER[0]_USER7 User 7 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER7		(1 << 7)
/** EVSYS_SEC_NSCHKUSER[0]_USER6 User 6 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER6		(1 << 6)
/** EVSYS_SEC_NSCHKUSER[0]_USER5 User 5 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER5		(1 << 5)
/** EVSYS_SEC_NSCHKUSER[0]_USER4 User 4 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER4		(1 << 4)
/** EVSYS_SEC_NSCHKUSER[0]_USER3 User 3 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER3		(1 << 3)
/** EVSYS_SEC_NSCHKUSER[0]_USER2 User 2 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER2		(1 << 2)
/** EVSYS_SEC_NSCHKUSER[0]_USER1 User 1 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER1		(1 << 1)
/** EVSYS_SEC_NSCHKUSER[0]_USER0 User 0 to be checked as non-secured **/
#define EVSYS_SEC_NSCHKUSER[0]_USER0		(1 << 0)

/**@}*/

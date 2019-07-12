#pragma once 

/* --- EVSYS: Event System Interface -------------------------------- */

/** @defgroup evsys_registers Event System Interface Register
@{*/

/** EVSYS_CTRLA Control **/
#define EVSYS_CTRLA			MMIO32(EVSYS_BASE + 0x00)
/** EVSYS_SWEVT Software Event **/
#define EVSYS_SWEVT			MMIO32(EVSYS_BASE + 0x04)
/** EVSYS_PRICTRL Priority Control **/
#define EVSYS_PRICTRL			MMIO32(EVSYS_BASE + 0x08)
/** EVSYS_INTPEND Channel Pending Interrupt **/
#define EVSYS_INTPEND			MMIO32(EVSYS_BASE + 0x10)
/** EVSYS_INTSTATUS Interrupt Status **/
#define EVSYS_INTSTATUS			MMIO32(EVSYS_BASE + 0x14)
/** EVSYS_BUSYCH Busy Channels **/
#define EVSYS_BUSYCH			MMIO32(EVSYS_BASE + 0x18)
/** EVSYS_READYUSR Ready Users **/
#define EVSYS_READYUSR			MMIO32(EVSYS_BASE + 0x1c)
/** EVSYS_CHANNEL[0]_CHANNEL Channel n Control **/
#define EVSYS_CHANNEL[0]_CHANNEL			MMIO32(EVSYS_BASE + 0x20)
/** EVSYS_CHANNEL[0]_CHINTENCLR Channel n Interrupt Enable Clear **/
#define EVSYS_CHANNEL[0]_CHINTENCLR			MMIO32(EVSYS_BASE + 0x24)
/** EVSYS_CHANNEL[0]_CHINTENSET Channel n Interrupt Enable Set **/
#define EVSYS_CHANNEL[0]_CHINTENSET			MMIO32(EVSYS_BASE + 0x25)
/** EVSYS_CHANNEL[0]_CHINTFLAG Channel n Interrupt Flag Status and Clear **/
#define EVSYS_CHANNEL[0]_CHINTFLAG			MMIO32(EVSYS_BASE + 0x26)
/** EVSYS_CHANNEL[0]_CHSTATUS Channel n Status **/
#define EVSYS_CHANNEL[0]_CHSTATUS			MMIO32(EVSYS_BASE + 0x27)
/** EVSYS_CHANNEL[1]_CHANNEL Channel n Control **/
#define EVSYS_CHANNEL[1]_CHANNEL			MMIO32(EVSYS_BASE + 0x28)
/** EVSYS_CHANNEL[1]_CHINTENCLR Channel n Interrupt Enable Clear **/
#define EVSYS_CHANNEL[1]_CHINTENCLR			MMIO32(EVSYS_BASE + 0x2c)
/** EVSYS_CHANNEL[1]_CHINTENSET Channel n Interrupt Enable Set **/
#define EVSYS_CHANNEL[1]_CHINTENSET			MMIO32(EVSYS_BASE + 0x2d)
/** EVSYS_CHANNEL[1]_CHINTFLAG Channel n Interrupt Flag Status and Clear **/
#define EVSYS_CHANNEL[1]_CHINTFLAG			MMIO32(EVSYS_BASE + 0x2e)
/** EVSYS_CHANNEL[1]_CHSTATUS Channel n Status **/
#define EVSYS_CHANNEL[1]_CHSTATUS			MMIO32(EVSYS_BASE + 0x2f)
/** EVSYS_CHANNEL[2]_CHANNEL Channel n Control **/
#define EVSYS_CHANNEL[2]_CHANNEL			MMIO32(EVSYS_BASE + 0x30)
/** EVSYS_CHANNEL[2]_CHINTENCLR Channel n Interrupt Enable Clear **/
#define EVSYS_CHANNEL[2]_CHINTENCLR			MMIO32(EVSYS_BASE + 0x34)
/** EVSYS_CHANNEL[2]_CHINTENSET Channel n Interrupt Enable Set **/
#define EVSYS_CHANNEL[2]_CHINTENSET			MMIO32(EVSYS_BASE + 0x35)
/** EVSYS_CHANNEL[2]_CHINTFLAG Channel n Interrupt Flag Status and Clear **/
#define EVSYS_CHANNEL[2]_CHINTFLAG			MMIO32(EVSYS_BASE + 0x36)
/** EVSYS_CHANNEL[2]_CHSTATUS Channel n Status **/
#define EVSYS_CHANNEL[2]_CHSTATUS			MMIO32(EVSYS_BASE + 0x37)
/** EVSYS_CHANNEL[3]_CHANNEL Channel n Control **/
#define EVSYS_CHANNEL[3]_CHANNEL			MMIO32(EVSYS_BASE + 0x38)
/** EVSYS_CHANNEL[3]_CHINTENCLR Channel n Interrupt Enable Clear **/
#define EVSYS_CHANNEL[3]_CHINTENCLR			MMIO32(EVSYS_BASE + 0x3c)
/** EVSYS_CHANNEL[3]_CHINTENSET Channel n Interrupt Enable Set **/
#define EVSYS_CHANNEL[3]_CHINTENSET			MMIO32(EVSYS_BASE + 0x3d)
/** EVSYS_CHANNEL[3]_CHINTFLAG Channel n Interrupt Flag Status and Clear **/
#define EVSYS_CHANNEL[3]_CHINTFLAG			MMIO32(EVSYS_BASE + 0x3e)
/** EVSYS_CHANNEL[3]_CHSTATUS Channel n Status **/
#define EVSYS_CHANNEL[3]_CHSTATUS			MMIO32(EVSYS_BASE + 0x3f)
/** EVSYS_CHANNEL[4]_CHANNEL Channel n Control **/
#define EVSYS_CHANNEL[4]_CHANNEL			MMIO32(EVSYS_BASE + 0x40)
/** EVSYS_CHANNEL[4]_CHINTENCLR Channel n Interrupt Enable Clear **/
#define EVSYS_CHANNEL[4]_CHINTENCLR			MMIO32(EVSYS_BASE + 0x44)
/** EVSYS_CHANNEL[4]_CHINTENSET Channel n Interrupt Enable Set **/
#define EVSYS_CHANNEL[4]_CHINTENSET			MMIO32(EVSYS_BASE + 0x45)
/** EVSYS_CHANNEL[4]_CHINTFLAG Channel n Interrupt Flag Status and Clear **/
#define EVSYS_CHANNEL[4]_CHINTFLAG			MMIO32(EVSYS_BASE + 0x46)
/** EVSYS_CHANNEL[4]_CHSTATUS Channel n Status **/
#define EVSYS_CHANNEL[4]_CHSTATUS			MMIO32(EVSYS_BASE + 0x47)
/** EVSYS_CHANNEL[5]_CHANNEL Channel n Control **/
#define EVSYS_CHANNEL[5]_CHANNEL			MMIO32(EVSYS_BASE + 0x48)
/** EVSYS_CHANNEL[5]_CHINTENCLR Channel n Interrupt Enable Clear **/
#define EVSYS_CHANNEL[5]_CHINTENCLR			MMIO32(EVSYS_BASE + 0x4c)
/** EVSYS_CHANNEL[5]_CHINTENSET Channel n Interrupt Enable Set **/
#define EVSYS_CHANNEL[5]_CHINTENSET			MMIO32(EVSYS_BASE + 0x4d)
/** EVSYS_CHANNEL[5]_CHINTFLAG Channel n Interrupt Flag Status and Clear **/
#define EVSYS_CHANNEL[5]_CHINTFLAG			MMIO32(EVSYS_BASE + 0x4e)
/** EVSYS_CHANNEL[5]_CHSTATUS Channel n Status **/
#define EVSYS_CHANNEL[5]_CHSTATUS			MMIO32(EVSYS_BASE + 0x4f)
/** EVSYS_CHANNEL[6]_CHANNEL Channel n Control **/
#define EVSYS_CHANNEL[6]_CHANNEL			MMIO32(EVSYS_BASE + 0x50)
/** EVSYS_CHANNEL[6]_CHINTENCLR Channel n Interrupt Enable Clear **/
#define EVSYS_CHANNEL[6]_CHINTENCLR			MMIO32(EVSYS_BASE + 0x54)
/** EVSYS_CHANNEL[6]_CHINTENSET Channel n Interrupt Enable Set **/
#define EVSYS_CHANNEL[6]_CHINTENSET			MMIO32(EVSYS_BASE + 0x55)
/** EVSYS_CHANNEL[6]_CHINTFLAG Channel n Interrupt Flag Status and Clear **/
#define EVSYS_CHANNEL[6]_CHINTFLAG			MMIO32(EVSYS_BASE + 0x56)
/** EVSYS_CHANNEL[6]_CHSTATUS Channel n Status **/
#define EVSYS_CHANNEL[6]_CHSTATUS			MMIO32(EVSYS_BASE + 0x57)
/** EVSYS_CHANNEL[7]_CHANNEL Channel n Control **/
#define EVSYS_CHANNEL[7]_CHANNEL			MMIO32(EVSYS_BASE + 0x58)
/** EVSYS_CHANNEL[7]_CHINTENCLR Channel n Interrupt Enable Clear **/
#define EVSYS_CHANNEL[7]_CHINTENCLR			MMIO32(EVSYS_BASE + 0x5c)
/** EVSYS_CHANNEL[7]_CHINTENSET Channel n Interrupt Enable Set **/
#define EVSYS_CHANNEL[7]_CHINTENSET			MMIO32(EVSYS_BASE + 0x5d)
/** EVSYS_CHANNEL[7]_CHINTFLAG Channel n Interrupt Flag Status and Clear **/
#define EVSYS_CHANNEL[7]_CHINTFLAG			MMIO32(EVSYS_BASE + 0x5e)
/** EVSYS_CHANNEL[7]_CHSTATUS Channel n Status **/
#define EVSYS_CHANNEL[7]_CHSTATUS			MMIO32(EVSYS_BASE + 0x5f)
/** EVSYS_USER[0] User Multiplexer n **/
#define EVSYS_USER[0]			MMIO32(EVSYS_BASE + 0x120)
/** EVSYS_USER[1] User Multiplexer n **/
#define EVSYS_USER[1]			MMIO32(EVSYS_BASE + 0x121)
/** EVSYS_USER[2] User Multiplexer n **/
#define EVSYS_USER[2]			MMIO32(EVSYS_BASE + 0x122)
/** EVSYS_USER[3] User Multiplexer n **/
#define EVSYS_USER[3]			MMIO32(EVSYS_BASE + 0x123)
/** EVSYS_USER[4] User Multiplexer n **/
#define EVSYS_USER[4]			MMIO32(EVSYS_BASE + 0x124)
/** EVSYS_USER[5] User Multiplexer n **/
#define EVSYS_USER[5]			MMIO32(EVSYS_BASE + 0x125)
/** EVSYS_USER[6] User Multiplexer n **/
#define EVSYS_USER[6]			MMIO32(EVSYS_BASE + 0x126)
/** EVSYS_USER[7] User Multiplexer n **/
#define EVSYS_USER[7]			MMIO32(EVSYS_BASE + 0x127)
/** EVSYS_USER[8] User Multiplexer n **/
#define EVSYS_USER[8]			MMIO32(EVSYS_BASE + 0x128)
/** EVSYS_USER[9] User Multiplexer n **/
#define EVSYS_USER[9]			MMIO32(EVSYS_BASE + 0x129)
/** EVSYS_USER[10] User Multiplexer n **/
#define EVSYS_USER[10]			MMIO32(EVSYS_BASE + 0x12a)
/** EVSYS_USER[11] User Multiplexer n **/
#define EVSYS_USER[11]			MMIO32(EVSYS_BASE + 0x12b)
/** EVSYS_USER[12] User Multiplexer n **/
#define EVSYS_USER[12]			MMIO32(EVSYS_BASE + 0x12c)
/** EVSYS_USER[13] User Multiplexer n **/
#define EVSYS_USER[13]			MMIO32(EVSYS_BASE + 0x12d)
/** EVSYS_USER[14] User Multiplexer n **/
#define EVSYS_USER[14]			MMIO32(EVSYS_BASE + 0x12e)
/** EVSYS_USER[15] User Multiplexer n **/
#define EVSYS_USER[15]			MMIO32(EVSYS_BASE + 0x12f)
/** EVSYS_USER[16] User Multiplexer n **/
#define EVSYS_USER[16]			MMIO32(EVSYS_BASE + 0x130)
/** EVSYS_USER[17] User Multiplexer n **/
#define EVSYS_USER[17]			MMIO32(EVSYS_BASE + 0x131)
/** EVSYS_USER[18] User Multiplexer n **/
#define EVSYS_USER[18]			MMIO32(EVSYS_BASE + 0x132)
/** EVSYS_USER[19] User Multiplexer n **/
#define EVSYS_USER[19]			MMIO32(EVSYS_BASE + 0x133)
/** EVSYS_USER[20] User Multiplexer n **/
#define EVSYS_USER[20]			MMIO32(EVSYS_BASE + 0x134)
/** EVSYS_USER[21] User Multiplexer n **/
#define EVSYS_USER[21]			MMIO32(EVSYS_BASE + 0x135)
/** EVSYS_USER[22] User Multiplexer n **/
#define EVSYS_USER[22]			MMIO32(EVSYS_BASE + 0x136)
/** EVSYS_INTENCLR Interrupt Enable Clear **/
#define EVSYS_INTENCLR			MMIO32(EVSYS_BASE + 0x1d4)
/** EVSYS_INTENSET Interrupt Enable Set **/
#define EVSYS_INTENSET			MMIO32(EVSYS_BASE + 0x1d5)
/** EVSYS_INTFLAG Interrupt Flag Status and Clear **/
#define EVSYS_INTFLAG			MMIO32(EVSYS_BASE + 0x1d6)
/** EVSYS_NONSECCHAN Channels Security Attribution **/
#define EVSYS_NONSECCHAN			MMIO32(EVSYS_BASE + 0x1d8)
/** EVSYS_NSCHKCHAN Non-Secure Channels Check **/
#define EVSYS_NSCHKCHAN			MMIO32(EVSYS_BASE + 0x1dc)
/** EVSYS_NONSECUSER[0] Users Security Attribution **/
#define EVSYS_NONSECUSER[0]			MMIO32(EVSYS_BASE + 0x1e0)
/** EVSYS_NSCHKUSER[0] Non-Secure Users Check **/
#define EVSYS_NSCHKUSER[0]			MMIO32(EVSYS_BASE + 0x1f0)

/**@}*/


/** @defgroup evsys_ctrla CTRLA Control
@{*/

/** EVSYS_CTRLA_SWRST Software Reset **/
#define EVSYS_CTRLA_SWRST		(1 << 0)

/**@}*/

/** @defgroup evsys_swevt SWEVT Software Event
@{*/

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

/** @defgroup evsys_prictrl PRICTRL Priority Control
@{*/

/** EVSYS_PRICTRL_RREN Round-Robin Scheduling Enable **/
#define EVSYS_PRICTRL_RREN		(1 << 7)

#define EVSYS_PRICTRL_PRI_SHIFT		0
#define EVSYS_PRICTRL_PRI_MASK		0x03
/** @defgroup evsys_prictrl_pri PRI Channel Priority Number
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_intpend INTPEND Channel Pending Interrupt
@{*/

/** EVSYS_INTPEND_BUSY Busy **/
#define EVSYS_INTPEND_BUSY		(1 << 15)
/** EVSYS_INTPEND_READY Ready **/
#define EVSYS_INTPEND_READY		(1 << 14)
/** EVSYS_INTPEND_EVD Channel Event Detected **/
#define EVSYS_INTPEND_EVD		(1 << 9)
/** EVSYS_INTPEND_OVR Channel Overrun **/
#define EVSYS_INTPEND_OVR		(1 << 8)

#define EVSYS_INTPEND_ID_SHIFT		0
#define EVSYS_INTPEND_ID_MASK		0x03
/** @defgroup evsys_intpend_id ID Channel ID
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_intstatus INTSTATUS Interrupt Status
@{*/

/** EVSYS_INTSTATUS_CHINT3 Channel 3 Pending Interrupt **/
#define EVSYS_INTSTATUS_CHINT3		(1 << 3)
/** EVSYS_INTSTATUS_CHINT2 Channel 2 Pending Interrupt **/
#define EVSYS_INTSTATUS_CHINT2		(1 << 2)
/** EVSYS_INTSTATUS_CHINT1 Channel 1 Pending Interrupt **/
#define EVSYS_INTSTATUS_CHINT1		(1 << 1)
/** EVSYS_INTSTATUS_CHINT0 Channel 0 Pending Interrupt **/
#define EVSYS_INTSTATUS_CHINT0		(1 << 0)

/**@}*/

/** @defgroup evsys_busych BUSYCH Busy Channels
@{*/

/** EVSYS_BUSYCH_BUSYCH3 Busy Channel 3 **/
#define EVSYS_BUSYCH_BUSYCH3		(1 << 3)
/** EVSYS_BUSYCH_BUSYCH2 Busy Channel 2 **/
#define EVSYS_BUSYCH_BUSYCH2		(1 << 2)
/** EVSYS_BUSYCH_BUSYCH1 Busy Channel 1 **/
#define EVSYS_BUSYCH_BUSYCH1		(1 << 1)
/** EVSYS_BUSYCH_BUSYCH0 Busy Channel 0 **/
#define EVSYS_BUSYCH_BUSYCH0		(1 << 0)

/**@}*/

/** @defgroup evsys_readyusr READYUSR Ready Users
@{*/

/** EVSYS_READYUSR_READYUSR3 Ready User for Channel 3 **/
#define EVSYS_READYUSR_READYUSR3		(1 << 3)
/** EVSYS_READYUSR_READYUSR2 Ready User for Channel 2 **/
#define EVSYS_READYUSR_READYUSR2		(1 << 2)
/** EVSYS_READYUSR_READYUSR1 Ready User for Channel 1 **/
#define EVSYS_READYUSR_READYUSR1		(1 << 1)
/** EVSYS_READYUSR_READYUSR0 Ready User for Channel 0 **/
#define EVSYS_READYUSR_READYUSR0		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[0]_channel CHANNEL[0]CHANNEL Channel n Control
@{*/

/** EVSYS_CHANNEL[0]_CHANNEL_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL[0]_CHANNEL_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL[0]_CHANNEL_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL[0]_CHANNEL_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL[0]_CHANNEL_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL[0]_CHANNEL_EDGSEL_MASK		0x03
/** @defgroup evsys_channel[0]_channel_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[0]_CHANNEL_PATH_SHIFT		8
#define EVSYS_CHANNEL[0]_CHANNEL_PATH_MASK		0x03
/** @defgroup evsys_channel[0]_channel_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[0]_CHANNEL_EVGEN_SHIFT		0
#define EVSYS_CHANNEL[0]_CHANNEL_EVGEN_MASK		0x3f
/** @defgroup evsys_channel[0]_channel_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel[0]_chintenclr CHANNEL[0]CHINTENCLR Channel n Interrupt Enable Clear
@{*/

/** EVSYS_CHANNEL[0]_CHINTENCLR_EVD Channel Event Detected Interrupt Disable **/
#define EVSYS_CHANNEL[0]_CHINTENCLR_EVD		(1 << 1)
/** EVSYS_CHANNEL[0]_CHINTENCLR_OVR Channel Overrun Interrupt Disable **/
#define EVSYS_CHANNEL[0]_CHINTENCLR_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[0]_chintenset CHANNEL[0]CHINTENSET Channel n Interrupt Enable Set
@{*/

/** EVSYS_CHANNEL[0]_CHINTENSET_EVD Channel Event Detected Interrupt Enable **/
#define EVSYS_CHANNEL[0]_CHINTENSET_EVD		(1 << 1)
/** EVSYS_CHANNEL[0]_CHINTENSET_OVR Channel Overrun Interrupt Enable **/
#define EVSYS_CHANNEL[0]_CHINTENSET_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[0]_chintflag CHANNEL[0]CHINTFLAG Channel n Interrupt Flag Status and Clear
@{*/

/** EVSYS_CHANNEL[0]_CHINTFLAG_EVD Channel Event Detected **/
#define EVSYS_CHANNEL[0]_CHINTFLAG_EVD		(1 << 1)
/** EVSYS_CHANNEL[0]_CHINTFLAG_OVR Channel Overrun **/
#define EVSYS_CHANNEL[0]_CHINTFLAG_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[0]_chstatus CHANNEL[0]CHSTATUS Channel n Status
@{*/

/** EVSYS_CHANNEL[0]_CHSTATUS_BUSYCH Busy Channel **/
#define EVSYS_CHANNEL[0]_CHSTATUS_BUSYCH		(1 << 1)
/** EVSYS_CHANNEL[0]_CHSTATUS_RDYUSR Ready User **/
#define EVSYS_CHANNEL[0]_CHSTATUS_RDYUSR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[1]_channel CHANNEL[1]CHANNEL Channel n Control
@{*/

/** EVSYS_CHANNEL[1]_CHANNEL_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL[1]_CHANNEL_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL[1]_CHANNEL_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL[1]_CHANNEL_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL[1]_CHANNEL_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL[1]_CHANNEL_EDGSEL_MASK		0x03
/** @defgroup evsys_channel[1]_channel_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[1]_CHANNEL_PATH_SHIFT		8
#define EVSYS_CHANNEL[1]_CHANNEL_PATH_MASK		0x03
/** @defgroup evsys_channel[1]_channel_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[1]_CHANNEL_EVGEN_SHIFT		0
#define EVSYS_CHANNEL[1]_CHANNEL_EVGEN_MASK		0x3f
/** @defgroup evsys_channel[1]_channel_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel[1]_chintenclr CHANNEL[1]CHINTENCLR Channel n Interrupt Enable Clear
@{*/

/** EVSYS_CHANNEL[1]_CHINTENCLR_EVD Channel Event Detected Interrupt Disable **/
#define EVSYS_CHANNEL[1]_CHINTENCLR_EVD		(1 << 1)
/** EVSYS_CHANNEL[1]_CHINTENCLR_OVR Channel Overrun Interrupt Disable **/
#define EVSYS_CHANNEL[1]_CHINTENCLR_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[1]_chintenset CHANNEL[1]CHINTENSET Channel n Interrupt Enable Set
@{*/

/** EVSYS_CHANNEL[1]_CHINTENSET_EVD Channel Event Detected Interrupt Enable **/
#define EVSYS_CHANNEL[1]_CHINTENSET_EVD		(1 << 1)
/** EVSYS_CHANNEL[1]_CHINTENSET_OVR Channel Overrun Interrupt Enable **/
#define EVSYS_CHANNEL[1]_CHINTENSET_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[1]_chintflag CHANNEL[1]CHINTFLAG Channel n Interrupt Flag Status and Clear
@{*/

/** EVSYS_CHANNEL[1]_CHINTFLAG_EVD Channel Event Detected **/
#define EVSYS_CHANNEL[1]_CHINTFLAG_EVD		(1 << 1)
/** EVSYS_CHANNEL[1]_CHINTFLAG_OVR Channel Overrun **/
#define EVSYS_CHANNEL[1]_CHINTFLAG_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[1]_chstatus CHANNEL[1]CHSTATUS Channel n Status
@{*/

/** EVSYS_CHANNEL[1]_CHSTATUS_BUSYCH Busy Channel **/
#define EVSYS_CHANNEL[1]_CHSTATUS_BUSYCH		(1 << 1)
/** EVSYS_CHANNEL[1]_CHSTATUS_RDYUSR Ready User **/
#define EVSYS_CHANNEL[1]_CHSTATUS_RDYUSR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[2]_channel CHANNEL[2]CHANNEL Channel n Control
@{*/

/** EVSYS_CHANNEL[2]_CHANNEL_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL[2]_CHANNEL_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL[2]_CHANNEL_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL[2]_CHANNEL_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL[2]_CHANNEL_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL[2]_CHANNEL_EDGSEL_MASK		0x03
/** @defgroup evsys_channel[2]_channel_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[2]_CHANNEL_PATH_SHIFT		8
#define EVSYS_CHANNEL[2]_CHANNEL_PATH_MASK		0x03
/** @defgroup evsys_channel[2]_channel_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[2]_CHANNEL_EVGEN_SHIFT		0
#define EVSYS_CHANNEL[2]_CHANNEL_EVGEN_MASK		0x3f
/** @defgroup evsys_channel[2]_channel_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel[2]_chintenclr CHANNEL[2]CHINTENCLR Channel n Interrupt Enable Clear
@{*/

/** EVSYS_CHANNEL[2]_CHINTENCLR_EVD Channel Event Detected Interrupt Disable **/
#define EVSYS_CHANNEL[2]_CHINTENCLR_EVD		(1 << 1)
/** EVSYS_CHANNEL[2]_CHINTENCLR_OVR Channel Overrun Interrupt Disable **/
#define EVSYS_CHANNEL[2]_CHINTENCLR_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[2]_chintenset CHANNEL[2]CHINTENSET Channel n Interrupt Enable Set
@{*/

/** EVSYS_CHANNEL[2]_CHINTENSET_EVD Channel Event Detected Interrupt Enable **/
#define EVSYS_CHANNEL[2]_CHINTENSET_EVD		(1 << 1)
/** EVSYS_CHANNEL[2]_CHINTENSET_OVR Channel Overrun Interrupt Enable **/
#define EVSYS_CHANNEL[2]_CHINTENSET_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[2]_chintflag CHANNEL[2]CHINTFLAG Channel n Interrupt Flag Status and Clear
@{*/

/** EVSYS_CHANNEL[2]_CHINTFLAG_EVD Channel Event Detected **/
#define EVSYS_CHANNEL[2]_CHINTFLAG_EVD		(1 << 1)
/** EVSYS_CHANNEL[2]_CHINTFLAG_OVR Channel Overrun **/
#define EVSYS_CHANNEL[2]_CHINTFLAG_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[2]_chstatus CHANNEL[2]CHSTATUS Channel n Status
@{*/

/** EVSYS_CHANNEL[2]_CHSTATUS_BUSYCH Busy Channel **/
#define EVSYS_CHANNEL[2]_CHSTATUS_BUSYCH		(1 << 1)
/** EVSYS_CHANNEL[2]_CHSTATUS_RDYUSR Ready User **/
#define EVSYS_CHANNEL[2]_CHSTATUS_RDYUSR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[3]_channel CHANNEL[3]CHANNEL Channel n Control
@{*/

/** EVSYS_CHANNEL[3]_CHANNEL_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL[3]_CHANNEL_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL[3]_CHANNEL_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL[3]_CHANNEL_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL[3]_CHANNEL_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL[3]_CHANNEL_EDGSEL_MASK		0x03
/** @defgroup evsys_channel[3]_channel_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[3]_CHANNEL_PATH_SHIFT		8
#define EVSYS_CHANNEL[3]_CHANNEL_PATH_MASK		0x03
/** @defgroup evsys_channel[3]_channel_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[3]_CHANNEL_EVGEN_SHIFT		0
#define EVSYS_CHANNEL[3]_CHANNEL_EVGEN_MASK		0x3f
/** @defgroup evsys_channel[3]_channel_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel[3]_chintenclr CHANNEL[3]CHINTENCLR Channel n Interrupt Enable Clear
@{*/

/** EVSYS_CHANNEL[3]_CHINTENCLR_EVD Channel Event Detected Interrupt Disable **/
#define EVSYS_CHANNEL[3]_CHINTENCLR_EVD		(1 << 1)
/** EVSYS_CHANNEL[3]_CHINTENCLR_OVR Channel Overrun Interrupt Disable **/
#define EVSYS_CHANNEL[3]_CHINTENCLR_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[3]_chintenset CHANNEL[3]CHINTENSET Channel n Interrupt Enable Set
@{*/

/** EVSYS_CHANNEL[3]_CHINTENSET_EVD Channel Event Detected Interrupt Enable **/
#define EVSYS_CHANNEL[3]_CHINTENSET_EVD		(1 << 1)
/** EVSYS_CHANNEL[3]_CHINTENSET_OVR Channel Overrun Interrupt Enable **/
#define EVSYS_CHANNEL[3]_CHINTENSET_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[3]_chintflag CHANNEL[3]CHINTFLAG Channel n Interrupt Flag Status and Clear
@{*/

/** EVSYS_CHANNEL[3]_CHINTFLAG_EVD Channel Event Detected **/
#define EVSYS_CHANNEL[3]_CHINTFLAG_EVD		(1 << 1)
/** EVSYS_CHANNEL[3]_CHINTFLAG_OVR Channel Overrun **/
#define EVSYS_CHANNEL[3]_CHINTFLAG_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[3]_chstatus CHANNEL[3]CHSTATUS Channel n Status
@{*/

/** EVSYS_CHANNEL[3]_CHSTATUS_BUSYCH Busy Channel **/
#define EVSYS_CHANNEL[3]_CHSTATUS_BUSYCH		(1 << 1)
/** EVSYS_CHANNEL[3]_CHSTATUS_RDYUSR Ready User **/
#define EVSYS_CHANNEL[3]_CHSTATUS_RDYUSR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[4]_channel CHANNEL[4]CHANNEL Channel n Control
@{*/

/** EVSYS_CHANNEL[4]_CHANNEL_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL[4]_CHANNEL_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL[4]_CHANNEL_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL[4]_CHANNEL_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL[4]_CHANNEL_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL[4]_CHANNEL_EDGSEL_MASK		0x03
/** @defgroup evsys_channel[4]_channel_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[4]_CHANNEL_PATH_SHIFT		8
#define EVSYS_CHANNEL[4]_CHANNEL_PATH_MASK		0x03
/** @defgroup evsys_channel[4]_channel_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[4]_CHANNEL_EVGEN_SHIFT		0
#define EVSYS_CHANNEL[4]_CHANNEL_EVGEN_MASK		0x3f
/** @defgroup evsys_channel[4]_channel_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel[4]_chintenclr CHANNEL[4]CHINTENCLR Channel n Interrupt Enable Clear
@{*/

/** EVSYS_CHANNEL[4]_CHINTENCLR_EVD Channel Event Detected Interrupt Disable **/
#define EVSYS_CHANNEL[4]_CHINTENCLR_EVD		(1 << 1)
/** EVSYS_CHANNEL[4]_CHINTENCLR_OVR Channel Overrun Interrupt Disable **/
#define EVSYS_CHANNEL[4]_CHINTENCLR_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[4]_chintenset CHANNEL[4]CHINTENSET Channel n Interrupt Enable Set
@{*/

/** EVSYS_CHANNEL[4]_CHINTENSET_EVD Channel Event Detected Interrupt Enable **/
#define EVSYS_CHANNEL[4]_CHINTENSET_EVD		(1 << 1)
/** EVSYS_CHANNEL[4]_CHINTENSET_OVR Channel Overrun Interrupt Enable **/
#define EVSYS_CHANNEL[4]_CHINTENSET_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[4]_chintflag CHANNEL[4]CHINTFLAG Channel n Interrupt Flag Status and Clear
@{*/

/** EVSYS_CHANNEL[4]_CHINTFLAG_EVD Channel Event Detected **/
#define EVSYS_CHANNEL[4]_CHINTFLAG_EVD		(1 << 1)
/** EVSYS_CHANNEL[4]_CHINTFLAG_OVR Channel Overrun **/
#define EVSYS_CHANNEL[4]_CHINTFLAG_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[4]_chstatus CHANNEL[4]CHSTATUS Channel n Status
@{*/

/** EVSYS_CHANNEL[4]_CHSTATUS_BUSYCH Busy Channel **/
#define EVSYS_CHANNEL[4]_CHSTATUS_BUSYCH		(1 << 1)
/** EVSYS_CHANNEL[4]_CHSTATUS_RDYUSR Ready User **/
#define EVSYS_CHANNEL[4]_CHSTATUS_RDYUSR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[5]_channel CHANNEL[5]CHANNEL Channel n Control
@{*/

/** EVSYS_CHANNEL[5]_CHANNEL_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL[5]_CHANNEL_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL[5]_CHANNEL_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL[5]_CHANNEL_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL[5]_CHANNEL_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL[5]_CHANNEL_EDGSEL_MASK		0x03
/** @defgroup evsys_channel[5]_channel_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[5]_CHANNEL_PATH_SHIFT		8
#define EVSYS_CHANNEL[5]_CHANNEL_PATH_MASK		0x03
/** @defgroup evsys_channel[5]_channel_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[5]_CHANNEL_EVGEN_SHIFT		0
#define EVSYS_CHANNEL[5]_CHANNEL_EVGEN_MASK		0x3f
/** @defgroup evsys_channel[5]_channel_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel[5]_chintenclr CHANNEL[5]CHINTENCLR Channel n Interrupt Enable Clear
@{*/

/** EVSYS_CHANNEL[5]_CHINTENCLR_EVD Channel Event Detected Interrupt Disable **/
#define EVSYS_CHANNEL[5]_CHINTENCLR_EVD		(1 << 1)
/** EVSYS_CHANNEL[5]_CHINTENCLR_OVR Channel Overrun Interrupt Disable **/
#define EVSYS_CHANNEL[5]_CHINTENCLR_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[5]_chintenset CHANNEL[5]CHINTENSET Channel n Interrupt Enable Set
@{*/

/** EVSYS_CHANNEL[5]_CHINTENSET_EVD Channel Event Detected Interrupt Enable **/
#define EVSYS_CHANNEL[5]_CHINTENSET_EVD		(1 << 1)
/** EVSYS_CHANNEL[5]_CHINTENSET_OVR Channel Overrun Interrupt Enable **/
#define EVSYS_CHANNEL[5]_CHINTENSET_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[5]_chintflag CHANNEL[5]CHINTFLAG Channel n Interrupt Flag Status and Clear
@{*/

/** EVSYS_CHANNEL[5]_CHINTFLAG_EVD Channel Event Detected **/
#define EVSYS_CHANNEL[5]_CHINTFLAG_EVD		(1 << 1)
/** EVSYS_CHANNEL[5]_CHINTFLAG_OVR Channel Overrun **/
#define EVSYS_CHANNEL[5]_CHINTFLAG_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[5]_chstatus CHANNEL[5]CHSTATUS Channel n Status
@{*/

/** EVSYS_CHANNEL[5]_CHSTATUS_BUSYCH Busy Channel **/
#define EVSYS_CHANNEL[5]_CHSTATUS_BUSYCH		(1 << 1)
/** EVSYS_CHANNEL[5]_CHSTATUS_RDYUSR Ready User **/
#define EVSYS_CHANNEL[5]_CHSTATUS_RDYUSR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[6]_channel CHANNEL[6]CHANNEL Channel n Control
@{*/

/** EVSYS_CHANNEL[6]_CHANNEL_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL[6]_CHANNEL_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL[6]_CHANNEL_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL[6]_CHANNEL_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL[6]_CHANNEL_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL[6]_CHANNEL_EDGSEL_MASK		0x03
/** @defgroup evsys_channel[6]_channel_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[6]_CHANNEL_PATH_SHIFT		8
#define EVSYS_CHANNEL[6]_CHANNEL_PATH_MASK		0x03
/** @defgroup evsys_channel[6]_channel_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[6]_CHANNEL_EVGEN_SHIFT		0
#define EVSYS_CHANNEL[6]_CHANNEL_EVGEN_MASK		0x3f
/** @defgroup evsys_channel[6]_channel_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel[6]_chintenclr CHANNEL[6]CHINTENCLR Channel n Interrupt Enable Clear
@{*/

/** EVSYS_CHANNEL[6]_CHINTENCLR_EVD Channel Event Detected Interrupt Disable **/
#define EVSYS_CHANNEL[6]_CHINTENCLR_EVD		(1 << 1)
/** EVSYS_CHANNEL[6]_CHINTENCLR_OVR Channel Overrun Interrupt Disable **/
#define EVSYS_CHANNEL[6]_CHINTENCLR_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[6]_chintenset CHANNEL[6]CHINTENSET Channel n Interrupt Enable Set
@{*/

/** EVSYS_CHANNEL[6]_CHINTENSET_EVD Channel Event Detected Interrupt Enable **/
#define EVSYS_CHANNEL[6]_CHINTENSET_EVD		(1 << 1)
/** EVSYS_CHANNEL[6]_CHINTENSET_OVR Channel Overrun Interrupt Enable **/
#define EVSYS_CHANNEL[6]_CHINTENSET_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[6]_chintflag CHANNEL[6]CHINTFLAG Channel n Interrupt Flag Status and Clear
@{*/

/** EVSYS_CHANNEL[6]_CHINTFLAG_EVD Channel Event Detected **/
#define EVSYS_CHANNEL[6]_CHINTFLAG_EVD		(1 << 1)
/** EVSYS_CHANNEL[6]_CHINTFLAG_OVR Channel Overrun **/
#define EVSYS_CHANNEL[6]_CHINTFLAG_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[6]_chstatus CHANNEL[6]CHSTATUS Channel n Status
@{*/

/** EVSYS_CHANNEL[6]_CHSTATUS_BUSYCH Busy Channel **/
#define EVSYS_CHANNEL[6]_CHSTATUS_BUSYCH		(1 << 1)
/** EVSYS_CHANNEL[6]_CHSTATUS_RDYUSR Ready User **/
#define EVSYS_CHANNEL[6]_CHSTATUS_RDYUSR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[7]_channel CHANNEL[7]CHANNEL Channel n Control
@{*/

/** EVSYS_CHANNEL[7]_CHANNEL_ONDEMAND Generic Clock On Demand **/
#define EVSYS_CHANNEL[7]_CHANNEL_ONDEMAND		(1 << 15)
/** EVSYS_CHANNEL[7]_CHANNEL_RUNSTDBY Run in standby **/
#define EVSYS_CHANNEL[7]_CHANNEL_RUNSTDBY		(1 << 14)

#define EVSYS_CHANNEL[7]_CHANNEL_EDGSEL_SHIFT		10
#define EVSYS_CHANNEL[7]_CHANNEL_EDGSEL_MASK		0x03
/** @defgroup evsys_channel[7]_channel_edgsel EDGSEL Edge Detection Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[7]_CHANNEL_PATH_SHIFT		8
#define EVSYS_CHANNEL[7]_CHANNEL_PATH_MASK		0x03
/** @defgroup evsys_channel[7]_channel_path PATH Path Selection
@{*/
/**@}*/


#define EVSYS_CHANNEL[7]_CHANNEL_EVGEN_SHIFT		0
#define EVSYS_CHANNEL[7]_CHANNEL_EVGEN_MASK		0x3f
/** @defgroup evsys_channel[7]_channel_evgen EVGEN Event Generator Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_channel[7]_chintenclr CHANNEL[7]CHINTENCLR Channel n Interrupt Enable Clear
@{*/

/** EVSYS_CHANNEL[7]_CHINTENCLR_EVD Channel Event Detected Interrupt Disable **/
#define EVSYS_CHANNEL[7]_CHINTENCLR_EVD		(1 << 1)
/** EVSYS_CHANNEL[7]_CHINTENCLR_OVR Channel Overrun Interrupt Disable **/
#define EVSYS_CHANNEL[7]_CHINTENCLR_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[7]_chintenset CHANNEL[7]CHINTENSET Channel n Interrupt Enable Set
@{*/

/** EVSYS_CHANNEL[7]_CHINTENSET_EVD Channel Event Detected Interrupt Enable **/
#define EVSYS_CHANNEL[7]_CHINTENSET_EVD		(1 << 1)
/** EVSYS_CHANNEL[7]_CHINTENSET_OVR Channel Overrun Interrupt Enable **/
#define EVSYS_CHANNEL[7]_CHINTENSET_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[7]_chintflag CHANNEL[7]CHINTFLAG Channel n Interrupt Flag Status and Clear
@{*/

/** EVSYS_CHANNEL[7]_CHINTFLAG_EVD Channel Event Detected **/
#define EVSYS_CHANNEL[7]_CHINTFLAG_EVD		(1 << 1)
/** EVSYS_CHANNEL[7]_CHINTFLAG_OVR Channel Overrun **/
#define EVSYS_CHANNEL[7]_CHINTFLAG_OVR		(1 << 0)

/**@}*/

/** @defgroup evsys_channel[7]_chstatus CHANNEL[7]CHSTATUS Channel n Status
@{*/

/** EVSYS_CHANNEL[7]_CHSTATUS_BUSYCH Busy Channel **/
#define EVSYS_CHANNEL[7]_CHSTATUS_BUSYCH		(1 << 1)
/** EVSYS_CHANNEL[7]_CHSTATUS_RDYUSR Ready User **/
#define EVSYS_CHANNEL[7]_CHSTATUS_RDYUSR		(1 << 0)

/**@}*/

/** @defgroup evsys_user[0] USER[0] User Multiplexer n
@{*/


#define EVSYS_USER[0]_CHANNEL_SHIFT		0
#define EVSYS_USER[0]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[0]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[1] USER[1] User Multiplexer n
@{*/


#define EVSYS_USER[1]_CHANNEL_SHIFT		0
#define EVSYS_USER[1]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[1]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[2] USER[2] User Multiplexer n
@{*/


#define EVSYS_USER[2]_CHANNEL_SHIFT		0
#define EVSYS_USER[2]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[2]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[3] USER[3] User Multiplexer n
@{*/


#define EVSYS_USER[3]_CHANNEL_SHIFT		0
#define EVSYS_USER[3]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[3]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[4] USER[4] User Multiplexer n
@{*/


#define EVSYS_USER[4]_CHANNEL_SHIFT		0
#define EVSYS_USER[4]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[4]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[5] USER[5] User Multiplexer n
@{*/


#define EVSYS_USER[5]_CHANNEL_SHIFT		0
#define EVSYS_USER[5]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[5]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[6] USER[6] User Multiplexer n
@{*/


#define EVSYS_USER[6]_CHANNEL_SHIFT		0
#define EVSYS_USER[6]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[6]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[7] USER[7] User Multiplexer n
@{*/


#define EVSYS_USER[7]_CHANNEL_SHIFT		0
#define EVSYS_USER[7]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[7]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[8] USER[8] User Multiplexer n
@{*/


#define EVSYS_USER[8]_CHANNEL_SHIFT		0
#define EVSYS_USER[8]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[8]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[9] USER[9] User Multiplexer n
@{*/


#define EVSYS_USER[9]_CHANNEL_SHIFT		0
#define EVSYS_USER[9]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[9]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[10] USER[10] User Multiplexer n
@{*/


#define EVSYS_USER[10]_CHANNEL_SHIFT		0
#define EVSYS_USER[10]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[10]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[11] USER[11] User Multiplexer n
@{*/


#define EVSYS_USER[11]_CHANNEL_SHIFT		0
#define EVSYS_USER[11]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[11]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[12] USER[12] User Multiplexer n
@{*/


#define EVSYS_USER[12]_CHANNEL_SHIFT		0
#define EVSYS_USER[12]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[12]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[13] USER[13] User Multiplexer n
@{*/


#define EVSYS_USER[13]_CHANNEL_SHIFT		0
#define EVSYS_USER[13]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[13]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[14] USER[14] User Multiplexer n
@{*/


#define EVSYS_USER[14]_CHANNEL_SHIFT		0
#define EVSYS_USER[14]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[14]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[15] USER[15] User Multiplexer n
@{*/


#define EVSYS_USER[15]_CHANNEL_SHIFT		0
#define EVSYS_USER[15]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[15]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[16] USER[16] User Multiplexer n
@{*/


#define EVSYS_USER[16]_CHANNEL_SHIFT		0
#define EVSYS_USER[16]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[16]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[17] USER[17] User Multiplexer n
@{*/


#define EVSYS_USER[17]_CHANNEL_SHIFT		0
#define EVSYS_USER[17]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[17]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[18] USER[18] User Multiplexer n
@{*/


#define EVSYS_USER[18]_CHANNEL_SHIFT		0
#define EVSYS_USER[18]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[18]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[19] USER[19] User Multiplexer n
@{*/


#define EVSYS_USER[19]_CHANNEL_SHIFT		0
#define EVSYS_USER[19]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[19]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[20] USER[20] User Multiplexer n
@{*/


#define EVSYS_USER[20]_CHANNEL_SHIFT		0
#define EVSYS_USER[20]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[20]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[21] USER[21] User Multiplexer n
@{*/


#define EVSYS_USER[21]_CHANNEL_SHIFT		0
#define EVSYS_USER[21]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[21]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_user[22] USER[22] User Multiplexer n
@{*/


#define EVSYS_USER[22]_CHANNEL_SHIFT		0
#define EVSYS_USER[22]_CHANNEL_MASK		0x0f
/** @defgroup evsys_user[22]_channel CHANNEL Channel Event Selection
@{*/
/**@}*/


/**@}*/

/** @defgroup evsys_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** EVSYS_INTENCLR_NSCHK Non-Secure Check Interrupt Enable **/
#define EVSYS_INTENCLR_NSCHK		(1 << 0)

/**@}*/

/** @defgroup evsys_intenset INTENSET Interrupt Enable Set
@{*/

/** EVSYS_INTENSET_NSCHK Non-Secure Check Interrupt Enable **/
#define EVSYS_INTENSET_NSCHK		(1 << 0)

/**@}*/

/** @defgroup evsys_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** EVSYS_INTFLAG_NSCHK Non-Secure Check **/
#define EVSYS_INTFLAG_NSCHK		(1 << 0)

/**@}*/

/** @defgroup evsys_nonsecchan NONSECCHAN Channels Security Attribution
@{*/

/** EVSYS_NONSECCHAN_CHANNEL7 Non-Secure for Channel 7 **/
#define EVSYS_NONSECCHAN_CHANNEL7		(1 << 7)
/** EVSYS_NONSECCHAN_CHANNEL6 Non-Secure for Channel 6 **/
#define EVSYS_NONSECCHAN_CHANNEL6		(1 << 6)
/** EVSYS_NONSECCHAN_CHANNEL5 Non-Secure for Channel 5 **/
#define EVSYS_NONSECCHAN_CHANNEL5		(1 << 5)
/** EVSYS_NONSECCHAN_CHANNEL4 Non-Secure for Channel 4 **/
#define EVSYS_NONSECCHAN_CHANNEL4		(1 << 4)
/** EVSYS_NONSECCHAN_CHANNEL3 Non-Secure for Channel 3 **/
#define EVSYS_NONSECCHAN_CHANNEL3		(1 << 3)
/** EVSYS_NONSECCHAN_CHANNEL2 Non-Secure for Channel 2 **/
#define EVSYS_NONSECCHAN_CHANNEL2		(1 << 2)
/** EVSYS_NONSECCHAN_CHANNEL1 Non-Secure for Channel 1 **/
#define EVSYS_NONSECCHAN_CHANNEL1		(1 << 1)
/** EVSYS_NONSECCHAN_CHANNEL0 Non-Secure for Channel 0 **/
#define EVSYS_NONSECCHAN_CHANNEL0		(1 << 0)

/**@}*/

/** @defgroup evsys_nschkchan NSCHKCHAN Non-Secure Channels Check
@{*/

/** EVSYS_NSCHKCHAN_CHANNEL7 Channel 7 to be checked as non-secured **/
#define EVSYS_NSCHKCHAN_CHANNEL7		(1 << 7)
/** EVSYS_NSCHKCHAN_CHANNEL6 Channel 6 to be checked as non-secured **/
#define EVSYS_NSCHKCHAN_CHANNEL6		(1 << 6)
/** EVSYS_NSCHKCHAN_CHANNEL5 Channel 5 to be checked as non-secured **/
#define EVSYS_NSCHKCHAN_CHANNEL5		(1 << 5)
/** EVSYS_NSCHKCHAN_CHANNEL4 Channel 4 to be checked as non-secured **/
#define EVSYS_NSCHKCHAN_CHANNEL4		(1 << 4)
/** EVSYS_NSCHKCHAN_CHANNEL3 Channel 3 to be checked as non-secured **/
#define EVSYS_NSCHKCHAN_CHANNEL3		(1 << 3)
/** EVSYS_NSCHKCHAN_CHANNEL2 Channel 2 to be checked as non-secured **/
#define EVSYS_NSCHKCHAN_CHANNEL2		(1 << 2)
/** EVSYS_NSCHKCHAN_CHANNEL1 Channel 1 to be checked as non-secured **/
#define EVSYS_NSCHKCHAN_CHANNEL1		(1 << 1)
/** EVSYS_NSCHKCHAN_CHANNEL0 Channel 0 to be checked as non-secured **/
#define EVSYS_NSCHKCHAN_CHANNEL0		(1 << 0)

/**@}*/

/** @defgroup evsys_nonsecuser[0] NONSECUSER[0] Users Security Attribution
@{*/

/** EVSYS_NONSECUSER[0]_USER22 Non-Secure for User 22 **/
#define EVSYS_NONSECUSER[0]_USER22		(1 << 22)
/** EVSYS_NONSECUSER[0]_USER21 Non-Secure for User 21 **/
#define EVSYS_NONSECUSER[0]_USER21		(1 << 21)
/** EVSYS_NONSECUSER[0]_USER20 Non-Secure for User 20 **/
#define EVSYS_NONSECUSER[0]_USER20		(1 << 20)
/** EVSYS_NONSECUSER[0]_USER19 Non-Secure for User 19 **/
#define EVSYS_NONSECUSER[0]_USER19		(1 << 19)
/** EVSYS_NONSECUSER[0]_USER18 Non-Secure for User 18 **/
#define EVSYS_NONSECUSER[0]_USER18		(1 << 18)
/** EVSYS_NONSECUSER[0]_USER17 Non-Secure for User 17 **/
#define EVSYS_NONSECUSER[0]_USER17		(1 << 17)
/** EVSYS_NONSECUSER[0]_USER16 Non-Secure for User 16 **/
#define EVSYS_NONSECUSER[0]_USER16		(1 << 16)
/** EVSYS_NONSECUSER[0]_USER15 Non-Secure for User 15 **/
#define EVSYS_NONSECUSER[0]_USER15		(1 << 15)
/** EVSYS_NONSECUSER[0]_USER14 Non-Secure for User 14 **/
#define EVSYS_NONSECUSER[0]_USER14		(1 << 14)
/** EVSYS_NONSECUSER[0]_USER13 Non-Secure for User 13 **/
#define EVSYS_NONSECUSER[0]_USER13		(1 << 13)
/** EVSYS_NONSECUSER[0]_USER12 Non-Secure for User 12 **/
#define EVSYS_NONSECUSER[0]_USER12		(1 << 12)
/** EVSYS_NONSECUSER[0]_USER11 Non-Secure for User 11 **/
#define EVSYS_NONSECUSER[0]_USER11		(1 << 11)
/** EVSYS_NONSECUSER[0]_USER10 Non-Secure for User 10 **/
#define EVSYS_NONSECUSER[0]_USER10		(1 << 10)
/** EVSYS_NONSECUSER[0]_USER9 Non-Secure for User 9 **/
#define EVSYS_NONSECUSER[0]_USER9		(1 << 9)
/** EVSYS_NONSECUSER[0]_USER8 Non-Secure for User 8 **/
#define EVSYS_NONSECUSER[0]_USER8		(1 << 8)
/** EVSYS_NONSECUSER[0]_USER7 Non-Secure for User 7 **/
#define EVSYS_NONSECUSER[0]_USER7		(1 << 7)
/** EVSYS_NONSECUSER[0]_USER6 Non-Secure for User 6 **/
#define EVSYS_NONSECUSER[0]_USER6		(1 << 6)
/** EVSYS_NONSECUSER[0]_USER5 Non-Secure for User 5 **/
#define EVSYS_NONSECUSER[0]_USER5		(1 << 5)
/** EVSYS_NONSECUSER[0]_USER4 Non-Secure for User 4 **/
#define EVSYS_NONSECUSER[0]_USER4		(1 << 4)
/** EVSYS_NONSECUSER[0]_USER3 Non-Secure for User 3 **/
#define EVSYS_NONSECUSER[0]_USER3		(1 << 3)
/** EVSYS_NONSECUSER[0]_USER2 Non-Secure for User 2 **/
#define EVSYS_NONSECUSER[0]_USER2		(1 << 2)
/** EVSYS_NONSECUSER[0]_USER1 Non-Secure for User 1 **/
#define EVSYS_NONSECUSER[0]_USER1		(1 << 1)
/** EVSYS_NONSECUSER[0]_USER0 Non-Secure for User 0 **/
#define EVSYS_NONSECUSER[0]_USER0		(1 << 0)

/**@}*/

/** @defgroup evsys_nschkuser[0] NSCHKUSER[0] Non-Secure Users Check
@{*/

/** EVSYS_NSCHKUSER[0]_USER22 User 22 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER22		(1 << 22)
/** EVSYS_NSCHKUSER[0]_USER21 User 21 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER21		(1 << 21)
/** EVSYS_NSCHKUSER[0]_USER20 User 20 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER20		(1 << 20)
/** EVSYS_NSCHKUSER[0]_USER19 User 19 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER19		(1 << 19)
/** EVSYS_NSCHKUSER[0]_USER18 User 18 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER18		(1 << 18)
/** EVSYS_NSCHKUSER[0]_USER17 User 17 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER17		(1 << 17)
/** EVSYS_NSCHKUSER[0]_USER16 User 16 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER16		(1 << 16)
/** EVSYS_NSCHKUSER[0]_USER15 User 15 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER15		(1 << 15)
/** EVSYS_NSCHKUSER[0]_USER14 User 14 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER14		(1 << 14)
/** EVSYS_NSCHKUSER[0]_USER13 User 13 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER13		(1 << 13)
/** EVSYS_NSCHKUSER[0]_USER12 User 12 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER12		(1 << 12)
/** EVSYS_NSCHKUSER[0]_USER11 User 11 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER11		(1 << 11)
/** EVSYS_NSCHKUSER[0]_USER10 User 10 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER10		(1 << 10)
/** EVSYS_NSCHKUSER[0]_USER9 User 9 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER9		(1 << 9)
/** EVSYS_NSCHKUSER[0]_USER8 User 8 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER8		(1 << 8)
/** EVSYS_NSCHKUSER[0]_USER7 User 7 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER7		(1 << 7)
/** EVSYS_NSCHKUSER[0]_USER6 User 6 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER6		(1 << 6)
/** EVSYS_NSCHKUSER[0]_USER5 User 5 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER5		(1 << 5)
/** EVSYS_NSCHKUSER[0]_USER4 User 4 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER4		(1 << 4)
/** EVSYS_NSCHKUSER[0]_USER3 User 3 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER3		(1 << 3)
/** EVSYS_NSCHKUSER[0]_USER2 User 2 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER2		(1 << 2)
/** EVSYS_NSCHKUSER[0]_USER1 User 1 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER1		(1 << 1)
/** EVSYS_NSCHKUSER[0]_USER0 User 0 to be checked as non-secured **/
#define EVSYS_NSCHKUSER[0]_USER0		(1 << 0)

/**@}*/

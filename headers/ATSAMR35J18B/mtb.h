#pragma once 

/* --- MTB: Cortex-M0+ Micro-Trace Buffer --------------------------- */

/** @defgroup mtb_registers Cortex-M0+ Micro-Trace Buffer Register
@{*/

/** MTB_POSITION MTB Position **/
#define MTB_POSITION			MMIO32(MTB_BASE + 0x00)
/** MTB_MASTER MTB Master **/
#define MTB_MASTER			MMIO32(MTB_BASE + 0x04)
/** MTB_FLOW MTB Flow **/
#define MTB_FLOW			MMIO32(MTB_BASE + 0x08)
/** MTB_BASE MTB Base **/
#define MTB_BASE			MMIO32(MTB_BASE + 0x0c)
/** MTB_ITCTRL MTB Integration Mode Control **/
#define MTB_ITCTRL			MMIO32(MTB_BASE + 0xf00)
/** MTB_CLAIMSET MTB Claim Set **/
#define MTB_CLAIMSET			MMIO32(MTB_BASE + 0xfa0)
/** MTB_CLAIMCLR MTB Claim Clear **/
#define MTB_CLAIMCLR			MMIO32(MTB_BASE + 0xfa4)
/** MTB_LOCKACCESS MTB Lock Access **/
#define MTB_LOCKACCESS			MMIO32(MTB_BASE + 0xfb0)
/** MTB_LOCKSTATUS MTB Lock Status **/
#define MTB_LOCKSTATUS			MMIO32(MTB_BASE + 0xfb4)
/** MTB_AUTHSTATUS MTB Authentication Status **/
#define MTB_AUTHSTATUS			MMIO32(MTB_BASE + 0xfb8)
/** MTB_DEVARCH MTB Device Architecture **/
#define MTB_DEVARCH			MMIO32(MTB_BASE + 0xfbc)
/** MTB_DEVID MTB Device Configuration **/
#define MTB_DEVID			MMIO32(MTB_BASE + 0xfc8)
/** MTB_DEVTYPE MTB Device Type **/
#define MTB_DEVTYPE			MMIO32(MTB_BASE + 0xfcc)
/** MTB_PID4 Peripheral Identification 4 **/
#define MTB_PID4			MMIO32(MTB_BASE + 0xfd0)
/** MTB_PID5 Peripheral Identification 5 **/
#define MTB_PID5			MMIO32(MTB_BASE + 0xfd4)
/** MTB_PID6 Peripheral Identification 6 **/
#define MTB_PID6			MMIO32(MTB_BASE + 0xfd8)
/** MTB_PID7 Peripheral Identification 7 **/
#define MTB_PID7			MMIO32(MTB_BASE + 0xfdc)
/** MTB_PID0 Peripheral Identification 0 **/
#define MTB_PID0			MMIO32(MTB_BASE + 0xfe0)
/** MTB_PID1 Peripheral Identification 1 **/
#define MTB_PID1			MMIO32(MTB_BASE + 0xfe4)
/** MTB_PID2 Peripheral Identification 2 **/
#define MTB_PID2			MMIO32(MTB_BASE + 0xfe8)
/** MTB_PID3 Peripheral Identification 3 **/
#define MTB_PID3			MMIO32(MTB_BASE + 0xfec)
/** MTB_CID0 Component Identification 0 **/
#define MTB_CID0			MMIO32(MTB_BASE + 0xff0)
/** MTB_CID1 Component Identification 1 **/
#define MTB_CID1			MMIO32(MTB_BASE + 0xff4)
/** MTB_CID2 Component Identification 2 **/
#define MTB_CID2			MMIO32(MTB_BASE + 0xff8)
/** MTB_CID3 Component Identification 3 **/
#define MTB_CID3			MMIO32(MTB_BASE + 0xffc)

/**@}*/


/** @defgroup mtb_position POSITION MTB Position
@{*/


#define MTB_POSITION_POINTER_SHIFT		3
#define MTB_POSITION_POINTER_MASK		0x1fffffff
/** @defgroup mtb_position_pointer POINTER Trace Packet Location Pointer
@{*/
/**@}*/

/** MTB_POSITION_WRAP Pointer Value Wraps **/
#define MTB_POSITION_WRAP		(1 << 2)

/**@}*/

/** @defgroup mtb_master MASTER MTB Master
@{*/

/** MTB_MASTER_EN Main Trace Enable **/
#define MTB_MASTER_EN		(1 << 31)
/** MTB_MASTER_HALTREQ Halt Request **/
#define MTB_MASTER_HALTREQ		(1 << 9)
/** MTB_MASTER_RAMPRIV SRAM Privilege **/
#define MTB_MASTER_RAMPRIV		(1 << 8)
/** MTB_MASTER_SFRWPRIV Special Function Register Write Privilege **/
#define MTB_MASTER_SFRWPRIV		(1 << 7)
/** MTB_MASTER_TSTOPEN Trace Stop Input Enable **/
#define MTB_MASTER_TSTOPEN		(1 << 6)
/** MTB_MASTER_TSTARTEN Trace Start Input Enable **/
#define MTB_MASTER_TSTARTEN		(1 << 5)

#define MTB_MASTER_MASK_SHIFT		0
#define MTB_MASTER_MASK_MASK		0x1f
/** @defgroup mtb_master_mask MASK Maximum Value of the Trace Buffer in SRAM
@{*/
/**@}*/


/**@}*/

/** @defgroup mtb_flow FLOW MTB Flow
@{*/


#define MTB_FLOW_WATERMARK_SHIFT		3
#define MTB_FLOW_WATERMARK_MASK		0x1fffffff
/** @defgroup mtb_flow_watermark WATERMARK Watermark value
@{*/
/**@}*/

/** MTB_FLOW_AUTOHALT Auto Halt Request **/
#define MTB_FLOW_AUTOHALT		(1 << 1)
/** MTB_FLOW_AUTOSTOP Auto Stop Tracing **/
#define MTB_FLOW_AUTOSTOP		(1 << 0)

/**@}*/

/** @defgroup mtb_base BASE MTB Base
@{*/


/**@}*/

/** @defgroup mtb_itctrl ITCTRL MTB Integration Mode Control
@{*/


/**@}*/

/** @defgroup mtb_claimset CLAIMSET MTB Claim Set
@{*/


/**@}*/

/** @defgroup mtb_claimclr CLAIMCLR MTB Claim Clear
@{*/


/**@}*/

/** @defgroup mtb_lockaccess LOCKACCESS MTB Lock Access
@{*/


/**@}*/

/** @defgroup mtb_lockstatus LOCKSTATUS MTB Lock Status
@{*/


/**@}*/

/** @defgroup mtb_authstatus AUTHSTATUS MTB Authentication Status
@{*/


/**@}*/

/** @defgroup mtb_devarch DEVARCH MTB Device Architecture
@{*/


/**@}*/

/** @defgroup mtb_devid DEVID MTB Device Configuration
@{*/


/**@}*/

/** @defgroup mtb_devtype DEVTYPE MTB Device Type
@{*/


/**@}*/

/** @defgroup mtb_pid4 PID4 Peripheral Identification 4
@{*/


/**@}*/

/** @defgroup mtb_pid5 PID5 Peripheral Identification 5
@{*/


/**@}*/

/** @defgroup mtb_pid6 PID6 Peripheral Identification 6
@{*/


/**@}*/

/** @defgroup mtb_pid7 PID7 Peripheral Identification 7
@{*/


/**@}*/

/** @defgroup mtb_pid0 PID0 Peripheral Identification 0
@{*/


/**@}*/

/** @defgroup mtb_pid1 PID1 Peripheral Identification 1
@{*/


/**@}*/

/** @defgroup mtb_pid2 PID2 Peripheral Identification 2
@{*/


/**@}*/

/** @defgroup mtb_pid3 PID3 Peripheral Identification 3
@{*/


/**@}*/

/** @defgroup mtb_cid0 CID0 Component Identification 0
@{*/


/**@}*/

/** @defgroup mtb_cid1 CID1 Component Identification 1
@{*/


/**@}*/

/** @defgroup mtb_cid2 CID2 Component Identification 2
@{*/


/**@}*/

/** @defgroup mtb_cid3 CID3 Component Identification 3
@{*/


/**@}*/

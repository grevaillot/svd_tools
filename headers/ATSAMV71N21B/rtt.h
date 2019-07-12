#pragma once 

/* --- RTT: Real-time Timer ----------------------------------------- */

/** @defgroup rtt_registers Real-time Timer Register
@{*/

/** RTT_RTT_MR Mode Register **/
#define RTT_RTT_MR			MMIO32(RTT_BASE + 0x00)
/** RTT_RTT_AR Alarm Register **/
#define RTT_RTT_AR			MMIO32(RTT_BASE + 0x04)
/** RTT_RTT_VR Value Register **/
#define RTT_RTT_VR			MMIO32(RTT_BASE + 0x08)
/** RTT_RTT_SR Status Register **/
#define RTT_RTT_SR			MMIO32(RTT_BASE + 0x0c)

/**@}*/


/** @defgroup rtt_rtt_mr RTTMR Mode Register
@{*/

/** RTT_RTT_MR_RTC1HZ Real-Time Clock 1Hz Clock Selection **/
#define RTT_RTT_MR_RTC1HZ		(1 << 24)
/** RTT_RTT_MR_RTTDIS Real-time Timer Disable **/
#define RTT_RTT_MR_RTTDIS		(1 << 20)
/** RTT_RTT_MR_RTTRST Real-time Timer Restart **/
#define RTT_RTT_MR_RTTRST		(1 << 18)
/** RTT_RTT_MR_RTTINCIEN Real-time Timer Increment Interrupt Enable **/
#define RTT_RTT_MR_RTTINCIEN		(1 << 17)
/** RTT_RTT_MR_ALMIEN Alarm Interrupt Enable **/
#define RTT_RTT_MR_ALMIEN		(1 << 16)

#define RTT_RTT_MR_RTPRES_SHIFT		0
#define RTT_RTT_MR_RTPRES_MASK		0xffff
/** @defgroup rtt_rtt_mr_rtpres RTPRES Real-time Timer Prescaler Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtt_rtt_ar RTTAR Alarm Register
@{*/


#define RTT_RTT_AR_ALMV_SHIFT		0
#define RTT_RTT_AR_ALMV_MASK		0xffffffff
/** @defgroup rtt_rtt_ar_almv ALMV Alarm Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtt_rtt_vr RTTVR Value Register
@{*/


#define RTT_RTT_VR_CRTV_SHIFT		0
#define RTT_RTT_VR_CRTV_MASK		0xffffffff
/** @defgroup rtt_rtt_vr_crtv CRTV Current Real-time Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtt_rtt_sr RTTSR Status Register
@{*/

/** RTT_RTT_SR_RTTINC Prescaler Roll-over Status (cleared on read) **/
#define RTT_RTT_SR_RTTINC		(1 << 1)
/** RTT_RTT_SR_ALMS Real-time Alarm Status (cleared on read) **/
#define RTT_RTT_SR_ALMS		(1 << 0)

/**@}*/

#pragma once 

/* --- RTT: Real-time Timer ----------------------------------------- */

/** @defgroup rtt_registers Real-time Timer Register
@{*/

/** RTT_MR Mode Register **/
#define RTT_MR			MMIO32(RTT_BASE + 0x00)
/** RTT_AR Alarm Register **/
#define RTT_AR			MMIO32(RTT_BASE + 0x04)
/** RTT_VR Value Register **/
#define RTT_VR			MMIO32(RTT_BASE + 0x08)
/** RTT_SR Status Register **/
#define RTT_SR			MMIO32(RTT_BASE + 0x0c)

/**@}*/


/** @defgroup rtt_mr MR Mode Register
@{*/

/** RTT_MR_RTC1HZ Real-Time Clock 1Hz Clock Selection **/
#define RTT_MR_RTC1HZ		(1 << 24)
/** RTT_MR_RTTDIS Real-time Timer Disable **/
#define RTT_MR_RTTDIS		(1 << 20)
/** RTT_MR_RTTRST Real-time Timer Restart **/
#define RTT_MR_RTTRST		(1 << 18)
/** RTT_MR_RTTINCIEN Real-time Timer Increment Interrupt Enable **/
#define RTT_MR_RTTINCIEN		(1 << 17)
/** RTT_MR_ALMIEN Alarm Interrupt Enable **/
#define RTT_MR_ALMIEN		(1 << 16)

#define RTT_MR_RTPRES_SHIFT		0
#define RTT_MR_RTPRES_MASK		0xffff
/** @defgroup rtt_mr_rtpres RTPRES Real-time Timer Prescaler Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtt_ar AR Alarm Register
@{*/


#define RTT_AR_ALMV_SHIFT		0
#define RTT_AR_ALMV_MASK		0xffffffff
/** @defgroup rtt_ar_almv ALMV Alarm Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtt_vr VR Value Register
@{*/


#define RTT_VR_CRTV_SHIFT		0
#define RTT_VR_CRTV_MASK		0xffffffff
/** @defgroup rtt_vr_crtv CRTV Current Real-time Value
@{*/
/**@}*/


/**@}*/

/** @defgroup rtt_sr SR Status Register
@{*/

/** RTT_SR_RTTINC Real-time Timer Increment **/
#define RTT_SR_RTTINC		(1 << 1)
/** RTT_SR_ALMS Real-time Alarm Status **/
#define RTT_SR_ALMS		(1 << 0)

/**@}*/

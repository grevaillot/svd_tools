#pragma once 

/* --- RTC: Real time clock ----------------------------------------- */

/** @defgroup rtc_registers Real time clock Register
@{*/

/** RTC_CRH RTC Control Register High **/
#define RTC_CRH			MMIO32(RTC_BASE + 0x00)
/** RTC_CRL RTC Control Register Low **/
#define RTC_CRL			MMIO32(RTC_BASE + 0x04)
/** RTC_PRLH RTC Prescaler Load Register High **/
#define RTC_PRLH			MMIO32(RTC_BASE + 0x08)
/** RTC_PRLL RTC Prescaler Load Register Low **/
#define RTC_PRLL			MMIO32(RTC_BASE + 0x0c)
/** RTC_DIVH RTC Prescaler Divider Register High **/
#define RTC_DIVH			MMIO32(RTC_BASE + 0x10)
/** RTC_DIVL RTC Prescaler Divider Register Low **/
#define RTC_DIVL			MMIO32(RTC_BASE + 0x14)
/** RTC_CNTH RTC Counter Register High **/
#define RTC_CNTH			MMIO32(RTC_BASE + 0x18)
/** RTC_CNTL RTC Counter Register Low **/
#define RTC_CNTL			MMIO32(RTC_BASE + 0x1c)
/** RTC_ALRH RTC Alarm Register High **/
#define RTC_ALRH			MMIO32(RTC_BASE + 0x20)
/** RTC_ALRL RTC Alarm Register Low **/
#define RTC_ALRL			MMIO32(RTC_BASE + 0x24)

/**@}*/


/** @defgroup rtc_crh CRH RTC Control Register High
@{*/

/** RTC_CRH_OWIE Overflow interrupt Enable **/
#define RTC_CRH_OWIE		(1 << 2)
/** RTC_CRH_ALRIE Alarm interrupt Enable **/
#define RTC_CRH_ALRIE		(1 << 1)
/** RTC_CRH_SECIE Second interrupt Enable **/
#define RTC_CRH_SECIE		(1 << 0)

/**@}*/

/** @defgroup rtc_crl CRL RTC Control Register Low
@{*/

/** RTC_CRL_RTOFF RTC operation OFF **/
#define RTC_CRL_RTOFF		(1 << 5)
/** RTC_CRL_CNF Configuration Flag **/
#define RTC_CRL_CNF		(1 << 4)
/** RTC_CRL_RSF Registers Synchronized Flag **/
#define RTC_CRL_RSF		(1 << 3)
/** RTC_CRL_OWF Overflow Flag **/
#define RTC_CRL_OWF		(1 << 2)
/** RTC_CRL_ALRF Alarm Flag **/
#define RTC_CRL_ALRF		(1 << 1)
/** RTC_CRL_SECF Second Flag **/
#define RTC_CRL_SECF		(1 << 0)

/**@}*/

/** @defgroup rtc_prlh PRLH RTC Prescaler Load Register High
@{*/


#define RTC_PRLH_PRLH_SHIFT		0
#define RTC_PRLH_PRLH_MASK		0x0f
/** @defgroup rtc_prlh_prlh PRLH RTC Prescaler Load Register High
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_prll PRLL RTC Prescaler Load Register Low
@{*/


#define RTC_PRLL_PRLL_SHIFT		0
#define RTC_PRLL_PRLL_MASK		0xffff
/** @defgroup rtc_prll_prll PRLL RTC Prescaler Divider Register Low
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_divh DIVH RTC Prescaler Divider Register High
@{*/


#define RTC_DIVH_DIVH_SHIFT		0
#define RTC_DIVH_DIVH_MASK		0x0f
/** @defgroup rtc_divh_divh DIVH RTC prescaler divider register high
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_divl DIVL RTC Prescaler Divider Register Low
@{*/


#define RTC_DIVL_DIVL_SHIFT		0
#define RTC_DIVL_DIVL_MASK		0xffff
/** @defgroup rtc_divl_divl DIVL RTC prescaler divider register Low
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_cnth CNTH RTC Counter Register High
@{*/


#define RTC_CNTH_CNTH_SHIFT		0
#define RTC_CNTH_CNTH_MASK		0xffff
/** @defgroup rtc_cnth_cnth CNTH RTC counter register high
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_cntl CNTL RTC Counter Register Low
@{*/


#define RTC_CNTL_CNTL_SHIFT		0
#define RTC_CNTL_CNTL_MASK		0xffff
/** @defgroup rtc_cntl_cntl CNTL RTC counter register Low
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_alrh ALRH RTC Alarm Register High
@{*/


#define RTC_ALRH_ALRH_SHIFT		0
#define RTC_ALRH_ALRH_MASK		0xffff
/** @defgroup rtc_alrh_alrh ALRH RTC alarm register high
@{*/
/**@}*/


/**@}*/

/** @defgroup rtc_alrl ALRL RTC Alarm Register Low
@{*/


#define RTC_ALRL_ALRL_SHIFT		0
#define RTC_ALRL_ALRL_MASK		0xffff
/** @defgroup rtc_alrl_alrl ALRL RTC alarm register low
@{*/
/**@}*/


/**@}*/

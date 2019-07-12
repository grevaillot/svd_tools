#pragma once 

/* --- Ethernet_PTP: Ethernet: Precision time protocol -------------- */

/** @defgroup ethernet_ptp_registers Ethernet: Precision time protocol Register
@{*/

/** Ethernet_PTP_PTPTSCR Ethernet PTP time stamp control register **/
#define Ethernet_PTP_PTPTSCR			MMIO32(Ethernet_PTP_BASE + 0x00)
/** Ethernet_PTP_PTPSSIR Ethernet PTP subsecond increment register **/
#define Ethernet_PTP_PTPSSIR			MMIO32(Ethernet_PTP_BASE + 0x04)
/** Ethernet_PTP_PTPTSHR Ethernet PTP time stamp high register **/
#define Ethernet_PTP_PTPTSHR			MMIO32(Ethernet_PTP_BASE + 0x08)
/** Ethernet_PTP_PTPTSLR Ethernet PTP time stamp low register **/
#define Ethernet_PTP_PTPTSLR			MMIO32(Ethernet_PTP_BASE + 0x0c)
/** Ethernet_PTP_PTPTSHUR Ethernet PTP time stamp high update register **/
#define Ethernet_PTP_PTPTSHUR			MMIO32(Ethernet_PTP_BASE + 0x10)
/** Ethernet_PTP_PTPTSLUR Ethernet PTP time stamp low update register **/
#define Ethernet_PTP_PTPTSLUR			MMIO32(Ethernet_PTP_BASE + 0x14)
/** Ethernet_PTP_PTPTSAR Ethernet PTP time stamp addend register **/
#define Ethernet_PTP_PTPTSAR			MMIO32(Ethernet_PTP_BASE + 0x18)
/** Ethernet_PTP_PTPTTHR Ethernet PTP target time high register **/
#define Ethernet_PTP_PTPTTHR			MMIO32(Ethernet_PTP_BASE + 0x1c)
/** Ethernet_PTP_PTPTTLR Ethernet PTP target time low register **/
#define Ethernet_PTP_PTPTTLR			MMIO32(Ethernet_PTP_BASE + 0x20)
/** Ethernet_PTP_PTPTSSR Ethernet PTP time stamp status register **/
#define Ethernet_PTP_PTPTSSR			MMIO32(Ethernet_PTP_BASE + 0x28)
/** Ethernet_PTP_PTPPPSCR Ethernet PTP PPS control register **/
#define Ethernet_PTP_PTPPPSCR			MMIO32(Ethernet_PTP_BASE + 0x2c)

/**@}*/


/** @defgroup ethernet_ptp_ptptscr PTPTSCR Ethernet PTP time stamp control register
@{*/

/** Ethernet_PTP_PTPTSCR_TSPFFMAE Time stamp PTP frame filtering MAC address enable **/
#define Ethernet_PTP_PTPTSCR_TSPFFMAE		(1 << 18)

#define Ethernet_PTP_PTPTSCR_TSCNT_SHIFT		16
#define Ethernet_PTP_PTPTSCR_TSCNT_MASK		0x03
/** @defgroup ethernet_ptp_ptptscr_tscnt TSCNT Time stamp clock node type
@{*/
/**@}*/

/** Ethernet_PTP_PTPTSCR_TSSMRME Time stamp snapshot for message relevant to master enable **/
#define Ethernet_PTP_PTPTSCR_TSSMRME		(1 << 15)
/** Ethernet_PTP_PTPTSCR_TSSEME Time stamp snapshot for event message enable **/
#define Ethernet_PTP_PTPTSCR_TSSEME		(1 << 14)
/** Ethernet_PTP_PTPTSCR_TSSIPV4FE Time stamp snapshot for IPv4 frames enable **/
#define Ethernet_PTP_PTPTSCR_TSSIPV4FE		(1 << 13)
/** Ethernet_PTP_PTPTSCR_TSSIPV6FE Time stamp snapshot for IPv6 frames enable **/
#define Ethernet_PTP_PTPTSCR_TSSIPV6FE		(1 << 12)
/** Ethernet_PTP_PTPTSCR_TSSPTPOEFE Time stamp snapshot for PTP over ethernet frames enable **/
#define Ethernet_PTP_PTPTSCR_TSSPTPOEFE		(1 << 11)
/** Ethernet_PTP_PTPTSCR_TSPTPPSV2E Time stamp PTP packet snooping for version2 format enable **/
#define Ethernet_PTP_PTPTSCR_TSPTPPSV2E		(1 << 10)
/** Ethernet_PTP_PTPTSCR_TSSSR Time stamp subsecond rollover: digital or binary rollover control **/
#define Ethernet_PTP_PTPTSCR_TSSSR		(1 << 9)
/** Ethernet_PTP_PTPTSCR_TSSARFE Time stamp snapshot for all received frames enable **/
#define Ethernet_PTP_PTPTSCR_TSSARFE		(1 << 8)
/** Ethernet_PTP_PTPTSCR_TTSARU Time stamp addend register update **/
#define Ethernet_PTP_PTPTSCR_TTSARU		(1 << 5)
/** Ethernet_PTP_PTPTSCR_TSITE Time stamp interrupt trigger enable **/
#define Ethernet_PTP_PTPTSCR_TSITE		(1 << 4)
/** Ethernet_PTP_PTPTSCR_TSSTU Time stamp system time update **/
#define Ethernet_PTP_PTPTSCR_TSSTU		(1 << 3)
/** Ethernet_PTP_PTPTSCR_TSSTI Time stamp system time initialize **/
#define Ethernet_PTP_PTPTSCR_TSSTI		(1 << 2)
/** Ethernet_PTP_PTPTSCR_TSFCU Time stamp fine or coarse update **/
#define Ethernet_PTP_PTPTSCR_TSFCU		(1 << 1)
/** Ethernet_PTP_PTPTSCR_TSE Time stamp enable **/
#define Ethernet_PTP_PTPTSCR_TSE		(1 << 0)

/**@}*/

/** @defgroup ethernet_ptp_ptpssir PTPSSIR Ethernet PTP subsecond increment register
@{*/


#define Ethernet_PTP_PTPSSIR_STSSI_SHIFT		0
#define Ethernet_PTP_PTPSSIR_STSSI_MASK		0xff
/** @defgroup ethernet_ptp_ptpssir_stssi STSSI System time subsecond increment
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptshr PTPTSHR Ethernet PTP time stamp high register
@{*/


#define Ethernet_PTP_PTPTSHR_STS_SHIFT		0
#define Ethernet_PTP_PTPTSHR_STS_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptptshr_sts STS System time second
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptslr PTPTSLR Ethernet PTP time stamp low register
@{*/

/** Ethernet_PTP_PTPTSLR_STPNS System time positive or negative sign **/
#define Ethernet_PTP_PTPTSLR_STPNS		(1 << 31)

#define Ethernet_PTP_PTPTSLR_STSS_SHIFT		0
#define Ethernet_PTP_PTPTSLR_STSS_MASK		0x7fffffff
/** @defgroup ethernet_ptp_ptptslr_stss STSS System time subseconds
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptshur PTPTSHUR Ethernet PTP time stamp high update register
@{*/


#define Ethernet_PTP_PTPTSHUR_TSUS_SHIFT		0
#define Ethernet_PTP_PTPTSHUR_TSUS_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptptshur_tsus TSUS Time stamp update second
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptslur PTPTSLUR Ethernet PTP time stamp low update register
@{*/

/** Ethernet_PTP_PTPTSLUR_TSUPNS Time stamp update positive or negative sign **/
#define Ethernet_PTP_PTPTSLUR_TSUPNS		(1 << 31)

#define Ethernet_PTP_PTPTSLUR_TSUSS_SHIFT		0
#define Ethernet_PTP_PTPTSLUR_TSUSS_MASK		0x7fffffff
/** @defgroup ethernet_ptp_ptptslur_tsuss TSUSS Time stamp update subseconds
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptsar PTPTSAR Ethernet PTP time stamp addend register
@{*/


#define Ethernet_PTP_PTPTSAR_TSA_SHIFT		0
#define Ethernet_PTP_PTPTSAR_TSA_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptptsar_tsa TSA Time stamp addend
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptthr PTPTTHR Ethernet PTP target time high register
@{*/


#define Ethernet_PTP_PTPTTHR_TTSH_SHIFT		0
#define Ethernet_PTP_PTPTTHR_TTSH_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptptthr_ttsh TTSH Target time stamp high
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptpttlr PTPTTLR Ethernet PTP target time low register
@{*/


#define Ethernet_PTP_PTPTTLR_TTSL_SHIFT		0
#define Ethernet_PTP_PTPTTLR_TTSL_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptpttlr_ttsl TTSL Target time stamp low
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptssr PTPTSSR Ethernet PTP time stamp status register
@{*/

/** Ethernet_PTP_PTPTSSR_TSTTR Time stamp target time reached **/
#define Ethernet_PTP_PTPTSSR_TSTTR		(1 << 1)
/** Ethernet_PTP_PTPTSSR_TSSO Time stamp second overflow **/
#define Ethernet_PTP_PTPTSSR_TSSO		(1 << 0)

/**@}*/

/** @defgroup ethernet_ptp_ptpppscr PTPPPSCR Ethernet PTP PPS control register
@{*/


#define Ethernet_PTP_PTPPPSCR_PPSFREQ_SHIFT		0
#define Ethernet_PTP_PTPPPSCR_PPSFREQ_MASK		0x0f
/** @defgroup ethernet_ptp_ptpppscr_ppsfreq PPSFREQ PPS frequency selection
@{*/
/**@}*/


/**@}*/

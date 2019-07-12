#pragma once 

/* --- ETHERNET_PTP: Ethernet: Precision time protocol -------------- */

/** @defgroup ethernet_ptp_registers Ethernet: Precision time protocol Register
@{*/

/** ETHERNET_PTP_PTPTSCR Ethernet PTP time stamp control register (ETH_PTPTSCR) **/
#define ETHERNET_PTP_PTPTSCR			MMIO32(ETHERNET_PTP_BASE + 0x00)
/** ETHERNET_PTP_PTPSSIR Ethernet PTP subsecond increment register **/
#define ETHERNET_PTP_PTPSSIR			MMIO32(ETHERNET_PTP_BASE + 0x04)
/** ETHERNET_PTP_PTPTSHR Ethernet PTP time stamp high register **/
#define ETHERNET_PTP_PTPTSHR			MMIO32(ETHERNET_PTP_BASE + 0x08)
/** ETHERNET_PTP_PTPTSLR Ethernet PTP time stamp low register (ETH_PTPTSLR) **/
#define ETHERNET_PTP_PTPTSLR			MMIO32(ETHERNET_PTP_BASE + 0x0c)
/** ETHERNET_PTP_PTPTSHUR Ethernet PTP time stamp high update register **/
#define ETHERNET_PTP_PTPTSHUR			MMIO32(ETHERNET_PTP_BASE + 0x10)
/** ETHERNET_PTP_PTPTSLUR Ethernet PTP time stamp low update register (ETH_PTPTSLUR) **/
#define ETHERNET_PTP_PTPTSLUR			MMIO32(ETHERNET_PTP_BASE + 0x14)
/** ETHERNET_PTP_PTPTSAR Ethernet PTP time stamp addend register **/
#define ETHERNET_PTP_PTPTSAR			MMIO32(ETHERNET_PTP_BASE + 0x18)
/** ETHERNET_PTP_PTPTTHR Ethernet PTP target time high register **/
#define ETHERNET_PTP_PTPTTHR			MMIO32(ETHERNET_PTP_BASE + 0x1c)
/** ETHERNET_PTP_PTPTTLR Ethernet PTP target time low register **/
#define ETHERNET_PTP_PTPTTLR			MMIO32(ETHERNET_PTP_BASE + 0x20)

/**@}*/


/** @defgroup ethernet_ptp_ptptscr PTPTSCR Ethernet PTP time stamp control register (ETH_PTPTSCR)
@{*/

/** ETHERNET_PTP_PTPTSCR_TSARU Time stamp addend register update **/
#define ETHERNET_PTP_PTPTSCR_TSARU		(1 << 5)
/** ETHERNET_PTP_PTPTSCR_TSITE Time stamp interrupt trigger enable **/
#define ETHERNET_PTP_PTPTSCR_TSITE		(1 << 4)
/** ETHERNET_PTP_PTPTSCR_TSSTU Time stamp system time update **/
#define ETHERNET_PTP_PTPTSCR_TSSTU		(1 << 3)
/** ETHERNET_PTP_PTPTSCR_TSSTI Time stamp system time initialize **/
#define ETHERNET_PTP_PTPTSCR_TSSTI		(1 << 2)
/** ETHERNET_PTP_PTPTSCR_TSFCU Time stamp fine or coarse update **/
#define ETHERNET_PTP_PTPTSCR_TSFCU		(1 << 1)
/** ETHERNET_PTP_PTPTSCR_TSE Time stamp enable **/
#define ETHERNET_PTP_PTPTSCR_TSE		(1 << 0)

/**@}*/

/** @defgroup ethernet_ptp_ptpssir PTPSSIR Ethernet PTP subsecond increment register
@{*/


#define ETHERNET_PTP_PTPSSIR_STSSI_SHIFT		0
#define ETHERNET_PTP_PTPSSIR_STSSI_MASK		0xff
/** @defgroup ethernet_ptp_ptpssir_stssi STSSI System time subsecond increment
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptshr PTPTSHR Ethernet PTP time stamp high register
@{*/


#define ETHERNET_PTP_PTPTSHR_STS_SHIFT		0
#define ETHERNET_PTP_PTPTSHR_STS_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptptshr_sts STS System time second
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptslr PTPTSLR Ethernet PTP time stamp low register (ETH_PTPTSLR)
@{*/

/** ETHERNET_PTP_PTPTSLR_STPNS System time positive or negative sign **/
#define ETHERNET_PTP_PTPTSLR_STPNS		(1 << 31)

#define ETHERNET_PTP_PTPTSLR_STSS_SHIFT		0
#define ETHERNET_PTP_PTPTSLR_STSS_MASK		0x7fffffff
/** @defgroup ethernet_ptp_ptptslr_stss STSS System time subseconds
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptshur PTPTSHUR Ethernet PTP time stamp high update register
@{*/


#define ETHERNET_PTP_PTPTSHUR_TSUS_SHIFT		0
#define ETHERNET_PTP_PTPTSHUR_TSUS_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptptshur_tsus TSUS Time stamp update second
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptslur PTPTSLUR Ethernet PTP time stamp low update register (ETH_PTPTSLUR)
@{*/

/** ETHERNET_PTP_PTPTSLUR_TSUPNS Time stamp update positive or negative sign **/
#define ETHERNET_PTP_PTPTSLUR_TSUPNS		(1 << 31)

#define ETHERNET_PTP_PTPTSLUR_TSUSS_SHIFT		0
#define ETHERNET_PTP_PTPTSLUR_TSUSS_MASK		0x7fffffff
/** @defgroup ethernet_ptp_ptptslur_tsuss TSUSS Time stamp update subseconds
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptsar PTPTSAR Ethernet PTP time stamp addend register
@{*/


#define ETHERNET_PTP_PTPTSAR_TSA_SHIFT		0
#define ETHERNET_PTP_PTPTSAR_TSA_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptptsar_tsa TSA Time stamp addend
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptthr PTPTTHR Ethernet PTP target time high register
@{*/


#define ETHERNET_PTP_PTPTTHR_TTSH_SHIFT		0
#define ETHERNET_PTP_PTPTTHR_TTSH_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptptthr_ttsh TTSH Target time stamp high
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptpttlr PTPTTLR Ethernet PTP target time low register
@{*/


#define ETHERNET_PTP_PTPTTLR_TTSL_SHIFT		0
#define ETHERNET_PTP_PTPTTLR_TTSL_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptpttlr_ttsl TTSL Target time stamp low
@{*/
/**@}*/


/**@}*/

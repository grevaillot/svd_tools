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

/** Ethernet_PTP_PTPTSCR_TSPFFMAE no description available **/
#define Ethernet_PTP_PTPTSCR_TSPFFMAE		(1 << 18)

#define Ethernet_PTP_PTPTSCR_TSCNT_SHIFT		16
#define Ethernet_PTP_PTPTSCR_TSCNT_MASK		0x03
/** @defgroup ethernet_ptp_ptptscr_tscnt TSCNT no description available
@{*/
/**@}*/

/** Ethernet_PTP_PTPTSCR_TSSMRME no description available **/
#define Ethernet_PTP_PTPTSCR_TSSMRME		(1 << 15)
/** Ethernet_PTP_PTPTSCR_TSSEME no description available **/
#define Ethernet_PTP_PTPTSCR_TSSEME		(1 << 14)
/** Ethernet_PTP_PTPTSCR_TSSIPV4FE no description available **/
#define Ethernet_PTP_PTPTSCR_TSSIPV4FE		(1 << 13)
/** Ethernet_PTP_PTPTSCR_TSSIPV6FE no description available **/
#define Ethernet_PTP_PTPTSCR_TSSIPV6FE		(1 << 12)
/** Ethernet_PTP_PTPTSCR_TSSPTPOEFE no description available **/
#define Ethernet_PTP_PTPTSCR_TSSPTPOEFE		(1 << 11)
/** Ethernet_PTP_PTPTSCR_TSPTPPSV2E no description available **/
#define Ethernet_PTP_PTPTSCR_TSPTPPSV2E		(1 << 10)
/** Ethernet_PTP_PTPTSCR_TSSSR no description available **/
#define Ethernet_PTP_PTPTSCR_TSSSR		(1 << 9)
/** Ethernet_PTP_PTPTSCR_TSSARFE no description available **/
#define Ethernet_PTP_PTPTSCR_TSSARFE		(1 << 8)
/** Ethernet_PTP_PTPTSCR_TTSARU no description available **/
#define Ethernet_PTP_PTPTSCR_TTSARU		(1 << 5)
/** Ethernet_PTP_PTPTSCR_TSITE no description available **/
#define Ethernet_PTP_PTPTSCR_TSITE		(1 << 4)
/** Ethernet_PTP_PTPTSCR_TSSTU no description available **/
#define Ethernet_PTP_PTPTSCR_TSSTU		(1 << 3)
/** Ethernet_PTP_PTPTSCR_TSSTI no description available **/
#define Ethernet_PTP_PTPTSCR_TSSTI		(1 << 2)
/** Ethernet_PTP_PTPTSCR_TSFCU no description available **/
#define Ethernet_PTP_PTPTSCR_TSFCU		(1 << 1)
/** Ethernet_PTP_PTPTSCR_TSE no description available **/
#define Ethernet_PTP_PTPTSCR_TSE		(1 << 0)

/**@}*/

/** @defgroup ethernet_ptp_ptpssir PTPSSIR Ethernet PTP subsecond increment register
@{*/


#define Ethernet_PTP_PTPSSIR_STSSI_SHIFT		0
#define Ethernet_PTP_PTPSSIR_STSSI_MASK		0xff
/** @defgroup ethernet_ptp_ptpssir_stssi STSSI no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptshr PTPTSHR Ethernet PTP time stamp high register
@{*/


#define Ethernet_PTP_PTPTSHR_STS_SHIFT		0
#define Ethernet_PTP_PTPTSHR_STS_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptptshr_sts STS no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptslr PTPTSLR Ethernet PTP time stamp low register
@{*/

/** Ethernet_PTP_PTPTSLR_STPNS no description available **/
#define Ethernet_PTP_PTPTSLR_STPNS		(1 << 31)

#define Ethernet_PTP_PTPTSLR_STSS_SHIFT		0
#define Ethernet_PTP_PTPTSLR_STSS_MASK		0x7fffffff
/** @defgroup ethernet_ptp_ptptslr_stss STSS no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptshur PTPTSHUR Ethernet PTP time stamp high update register
@{*/


#define Ethernet_PTP_PTPTSHUR_TSUS_SHIFT		0
#define Ethernet_PTP_PTPTSHUR_TSUS_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptptshur_tsus TSUS no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptslur PTPTSLUR Ethernet PTP time stamp low update register
@{*/

/** Ethernet_PTP_PTPTSLUR_TSUPNS no description available **/
#define Ethernet_PTP_PTPTSLUR_TSUPNS		(1 << 31)

#define Ethernet_PTP_PTPTSLUR_TSUSS_SHIFT		0
#define Ethernet_PTP_PTPTSLUR_TSUSS_MASK		0x7fffffff
/** @defgroup ethernet_ptp_ptptslur_tsuss TSUSS no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptsar PTPTSAR Ethernet PTP time stamp addend register
@{*/


#define Ethernet_PTP_PTPTSAR_TSA_SHIFT		0
#define Ethernet_PTP_PTPTSAR_TSA_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptptsar_tsa TSA no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptthr PTPTTHR Ethernet PTP target time high register
@{*/


#define Ethernet_PTP_PTPTTHR_TTSH_SHIFT		0
#define Ethernet_PTP_PTPTTHR_TTSH_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptptthr_ttsh TTSH 0
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptpttlr PTPTTLR Ethernet PTP target time low register
@{*/


#define Ethernet_PTP_PTPTTLR_TTSL_SHIFT		0
#define Ethernet_PTP_PTPTTLR_TTSL_MASK		0xffffffff
/** @defgroup ethernet_ptp_ptpttlr_ttsl TTSL no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_ptp_ptptssr PTPTSSR Ethernet PTP time stamp status register
@{*/

/** Ethernet_PTP_PTPTSSR_TSTTR no description available **/
#define Ethernet_PTP_PTPTSSR_TSTTR		(1 << 1)
/** Ethernet_PTP_PTPTSSR_TSSO no description available **/
#define Ethernet_PTP_PTPTSSR_TSSO		(1 << 0)

/**@}*/

/** @defgroup ethernet_ptp_ptpppscr PTPPPSCR Ethernet PTP PPS control register
@{*/

/** Ethernet_PTP_PTPPPSCR_TSTTR TSTTR **/
#define Ethernet_PTP_PTPPPSCR_TSTTR		(1 << 1)
/** Ethernet_PTP_PTPPPSCR_TSSO TSSO **/
#define Ethernet_PTP_PTPPPSCR_TSSO		(1 << 0)

/**@}*/

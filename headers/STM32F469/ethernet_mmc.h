#pragma once 

/* --- Ethernet_MMC: Ethernet: MAC management counters -------------- */

/** @defgroup ethernet_mmc_registers Ethernet: MAC management counters Register
@{*/

/** Ethernet_MMC_MMCCR Ethernet MMC control register **/
#define Ethernet_MMC_MMCCR			MMIO32(Ethernet_MMC_BASE + 0x00)
/** Ethernet_MMC_MMCRIR Ethernet MMC receive interrupt register **/
#define Ethernet_MMC_MMCRIR			MMIO32(Ethernet_MMC_BASE + 0x04)
/** Ethernet_MMC_MMCTIR Ethernet MMC transmit interrupt register **/
#define Ethernet_MMC_MMCTIR			MMIO32(Ethernet_MMC_BASE + 0x08)
/** Ethernet_MMC_MMCRIMR Ethernet MMC receive interrupt mask register **/
#define Ethernet_MMC_MMCRIMR			MMIO32(Ethernet_MMC_BASE + 0x0c)
/** Ethernet_MMC_MMCTIMR Ethernet MMC transmit interrupt mask register **/
#define Ethernet_MMC_MMCTIMR			MMIO32(Ethernet_MMC_BASE + 0x10)
/** Ethernet_MMC_MMCTGFSCCR Ethernet MMC transmitted good frames after a single collision counter **/
#define Ethernet_MMC_MMCTGFSCCR			MMIO32(Ethernet_MMC_BASE + 0x4c)
/** Ethernet_MMC_MMCTGFMSCCR Ethernet MMC transmitted good frames after more than a single collision **/
#define Ethernet_MMC_MMCTGFMSCCR			MMIO32(Ethernet_MMC_BASE + 0x50)
/** Ethernet_MMC_MMCTGFCR Ethernet MMC transmitted good frames counter register **/
#define Ethernet_MMC_MMCTGFCR			MMIO32(Ethernet_MMC_BASE + 0x68)
/** Ethernet_MMC_MMCRFCECR Ethernet MMC received frames with CRC error counter register **/
#define Ethernet_MMC_MMCRFCECR			MMIO32(Ethernet_MMC_BASE + 0x94)
/** Ethernet_MMC_MMCRFAECR Ethernet MMC received frames with alignment error counter register **/
#define Ethernet_MMC_MMCRFAECR			MMIO32(Ethernet_MMC_BASE + 0x98)
/** Ethernet_MMC_MMCRGUFCR MMC received good unicast frames counter register **/
#define Ethernet_MMC_MMCRGUFCR			MMIO32(Ethernet_MMC_BASE + 0xc4)

/**@}*/


/** @defgroup ethernet_mmc_mmccr MMCCR Ethernet MMC control register
@{*/

/** Ethernet_MMC_MMCCR_MCFHP MCFHP **/
#define Ethernet_MMC_MMCCR_MCFHP		(1 << 5)
/** Ethernet_MMC_MMCCR_MCP MCP **/
#define Ethernet_MMC_MMCCR_MCP		(1 << 4)
/** Ethernet_MMC_MMCCR_MCF MCF **/
#define Ethernet_MMC_MMCCR_MCF		(1 << 3)
/** Ethernet_MMC_MMCCR_ROR ROR **/
#define Ethernet_MMC_MMCCR_ROR		(1 << 2)
/** Ethernet_MMC_MMCCR_CSR CSR **/
#define Ethernet_MMC_MMCCR_CSR		(1 << 1)
/** Ethernet_MMC_MMCCR_CR CR **/
#define Ethernet_MMC_MMCCR_CR		(1 << 0)

/**@}*/

/** @defgroup ethernet_mmc_mmcrir MMCRIR Ethernet MMC receive interrupt register
@{*/

/** Ethernet_MMC_MMCRIR_RGUFS RGUFS **/
#define Ethernet_MMC_MMCRIR_RGUFS		(1 << 17)
/** Ethernet_MMC_MMCRIR_RFAES RFAES **/
#define Ethernet_MMC_MMCRIR_RFAES		(1 << 6)
/** Ethernet_MMC_MMCRIR_RFCES RFCES **/
#define Ethernet_MMC_MMCRIR_RFCES		(1 << 5)

/**@}*/

/** @defgroup ethernet_mmc_mmctir MMCTIR Ethernet MMC transmit interrupt register
@{*/

/** Ethernet_MMC_MMCTIR_TGFS TGFS **/
#define Ethernet_MMC_MMCTIR_TGFS		(1 << 21)
/** Ethernet_MMC_MMCTIR_TGFMSCS TGFMSCS **/
#define Ethernet_MMC_MMCTIR_TGFMSCS		(1 << 15)
/** Ethernet_MMC_MMCTIR_TGFSCS TGFSCS **/
#define Ethernet_MMC_MMCTIR_TGFSCS		(1 << 14)

/**@}*/

/** @defgroup ethernet_mmc_mmcrimr MMCRIMR Ethernet MMC receive interrupt mask register
@{*/

/** Ethernet_MMC_MMCRIMR_RGUFM RGUFM **/
#define Ethernet_MMC_MMCRIMR_RGUFM		(1 << 17)
/** Ethernet_MMC_MMCRIMR_RFAEM RFAEM **/
#define Ethernet_MMC_MMCRIMR_RFAEM		(1 << 6)
/** Ethernet_MMC_MMCRIMR_RFCEM RFCEM **/
#define Ethernet_MMC_MMCRIMR_RFCEM		(1 << 5)

/**@}*/

/** @defgroup ethernet_mmc_mmctimr MMCTIMR Ethernet MMC transmit interrupt mask register
@{*/

/** Ethernet_MMC_MMCTIMR_TGFM TGFM **/
#define Ethernet_MMC_MMCTIMR_TGFM		(1 << 16)
/** Ethernet_MMC_MMCTIMR_TGFMSCM TGFMSCM **/
#define Ethernet_MMC_MMCTIMR_TGFMSCM		(1 << 15)
/** Ethernet_MMC_MMCTIMR_TGFSCM TGFSCM **/
#define Ethernet_MMC_MMCTIMR_TGFSCM		(1 << 14)

/**@}*/

/** @defgroup ethernet_mmc_mmctgfsccr MMCTGFSCCR Ethernet MMC transmitted good frames after a single collision counter
@{*/


#define Ethernet_MMC_MMCTGFSCCR_TGFSCC_SHIFT		0
#define Ethernet_MMC_MMCTGFSCCR_TGFSCC_MASK		0xffffffff
/** @defgroup ethernet_mmc_mmctgfsccr_tgfscc TGFSCC TGFSCC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mmc_mmctgfmsccr MMCTGFMSCCR Ethernet MMC transmitted good frames after more than a single collision
@{*/


#define Ethernet_MMC_MMCTGFMSCCR_TGFMSCC_SHIFT		0
#define Ethernet_MMC_MMCTGFMSCCR_TGFMSCC_MASK		0xffffffff
/** @defgroup ethernet_mmc_mmctgfmsccr_tgfmscc TGFMSCC TGFMSCC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mmc_mmctgfcr MMCTGFCR Ethernet MMC transmitted good frames counter register
@{*/


#define Ethernet_MMC_MMCTGFCR_TGFC_SHIFT		0
#define Ethernet_MMC_MMCTGFCR_TGFC_MASK		0xffffffff
/** @defgroup ethernet_mmc_mmctgfcr_tgfc TGFC HTL
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mmc_mmcrfcecr MMCRFCECR Ethernet MMC received frames with CRC error counter register
@{*/


#define Ethernet_MMC_MMCRFCECR_RFCFC_SHIFT		0
#define Ethernet_MMC_MMCRFCECR_RFCFC_MASK		0xffffffff
/** @defgroup ethernet_mmc_mmcrfcecr_rfcfc RFCFC RFCFC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mmc_mmcrfaecr MMCRFAECR Ethernet MMC received frames with alignment error counter register
@{*/


#define Ethernet_MMC_MMCRFAECR_RFAEC_SHIFT		0
#define Ethernet_MMC_MMCRFAECR_RFAEC_MASK		0xffffffff
/** @defgroup ethernet_mmc_mmcrfaecr_rfaec RFAEC RFAEC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mmc_mmcrgufcr MMCRGUFCR MMC received good unicast frames counter register
@{*/


#define Ethernet_MMC_MMCRGUFCR_RGUFC_SHIFT		0
#define Ethernet_MMC_MMCRGUFCR_RGUFC_MASK		0xffffffff
/** @defgroup ethernet_mmc_mmcrgufcr_rgufc RGUFC RGUFC
@{*/
/**@}*/


/**@}*/

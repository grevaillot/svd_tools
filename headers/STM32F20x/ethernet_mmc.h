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

/** Ethernet_MMC_MMCCR_MCFHP MMC counter Full-Half preset **/
#define Ethernet_MMC_MMCCR_MCFHP		(1 << 5)
/** Ethernet_MMC_MMCCR_MCP MMC counter preset **/
#define Ethernet_MMC_MMCCR_MCP		(1 << 4)
/** Ethernet_MMC_MMCCR_MCF MMC counter freeze **/
#define Ethernet_MMC_MMCCR_MCF		(1 << 3)
/** Ethernet_MMC_MMCCR_ROR Reset on read **/
#define Ethernet_MMC_MMCCR_ROR		(1 << 2)
/** Ethernet_MMC_MMCCR_CSR Counter stop rollover **/
#define Ethernet_MMC_MMCCR_CSR		(1 << 1)
/** Ethernet_MMC_MMCCR_CR Counter reset **/
#define Ethernet_MMC_MMCCR_CR		(1 << 0)

/**@}*/

/** @defgroup ethernet_mmc_mmcrir MMCRIR Ethernet MMC receive interrupt register
@{*/

/** Ethernet_MMC_MMCRIR_RGUFS Received Good Unicast Frames Status **/
#define Ethernet_MMC_MMCRIR_RGUFS		(1 << 17)
/** Ethernet_MMC_MMCRIR_RFAES Received frames alignment error status **/
#define Ethernet_MMC_MMCRIR_RFAES		(1 << 6)
/** Ethernet_MMC_MMCRIR_RFCES Received frames CRC error status **/
#define Ethernet_MMC_MMCRIR_RFCES		(1 << 5)

/**@}*/

/** @defgroup ethernet_mmc_mmctir MMCTIR Ethernet MMC transmit interrupt register
@{*/

/** Ethernet_MMC_MMCTIR_TGFS Transmitted good frames status **/
#define Ethernet_MMC_MMCTIR_TGFS		(1 << 21)
/** Ethernet_MMC_MMCTIR_TGFMSCS Transmitted good frames more single collision status **/
#define Ethernet_MMC_MMCTIR_TGFMSCS		(1 << 15)
/** Ethernet_MMC_MMCTIR_TGFSCS Transmitted good frames single collision status **/
#define Ethernet_MMC_MMCTIR_TGFSCS		(1 << 14)

/**@}*/

/** @defgroup ethernet_mmc_mmcrimr MMCRIMR Ethernet MMC receive interrupt mask register
@{*/

/** Ethernet_MMC_MMCRIMR_RGUFM Received good unicast frames mask **/
#define Ethernet_MMC_MMCRIMR_RGUFM		(1 << 17)
/** Ethernet_MMC_MMCRIMR_RFAEM Received frames alignment error mask **/
#define Ethernet_MMC_MMCRIMR_RFAEM		(1 << 6)
/** Ethernet_MMC_MMCRIMR_RFCEM Received frame CRC error mask **/
#define Ethernet_MMC_MMCRIMR_RFCEM		(1 << 5)

/**@}*/

/** @defgroup ethernet_mmc_mmctimr MMCTIMR Ethernet MMC transmit interrupt mask register
@{*/

/** Ethernet_MMC_MMCTIMR_TGFM Transmitted good frames mask **/
#define Ethernet_MMC_MMCTIMR_TGFM		(1 << 21)
/** Ethernet_MMC_MMCTIMR_TGFMSCM Transmitted good frames more single collision mask **/
#define Ethernet_MMC_MMCTIMR_TGFMSCM		(1 << 15)
/** Ethernet_MMC_MMCTIMR_TGFSCM Transmitted good frames single collision mask **/
#define Ethernet_MMC_MMCTIMR_TGFSCM		(1 << 14)

/**@}*/

/** @defgroup ethernet_mmc_mmctgfsccr MMCTGFSCCR Ethernet MMC transmitted good frames after a single collision counter
@{*/


#define Ethernet_MMC_MMCTGFSCCR_TGFSCC_SHIFT		0
#define Ethernet_MMC_MMCTGFSCCR_TGFSCC_MASK		0xffffffff
/** @defgroup ethernet_mmc_mmctgfsccr_tgfscc TGFSCC Transmitted good frames single collision counter
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mmc_mmctgfmsccr MMCTGFMSCCR Ethernet MMC transmitted good frames after more than a single collision
@{*/


#define Ethernet_MMC_MMCTGFMSCCR_TGFMSCC_SHIFT		0
#define Ethernet_MMC_MMCTGFMSCCR_TGFMSCC_MASK		0xffffffff
/** @defgroup ethernet_mmc_mmctgfmsccr_tgfmscc TGFMSCC Transmitted good frames more single collision counter
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mmc_mmctgfcr MMCTGFCR Ethernet MMC transmitted good frames counter register
@{*/


#define Ethernet_MMC_MMCTGFCR_TGFC_SHIFT		0
#define Ethernet_MMC_MMCTGFCR_TGFC_MASK		0xffffffff
/** @defgroup ethernet_mmc_mmctgfcr_tgfc TGFC Transmitted good frames counter
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mmc_mmcrfcecr MMCRFCECR Ethernet MMC received frames with CRC error counter register
@{*/


#define Ethernet_MMC_MMCRFCECR_RFCFC_SHIFT		0
#define Ethernet_MMC_MMCRFCECR_RFCFC_MASK		0xffffffff
/** @defgroup ethernet_mmc_mmcrfcecr_rfcfc RFCFC Received frames CRC error counter
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mmc_mmcrfaecr MMCRFAECR Ethernet MMC received frames with alignment error counter register
@{*/


#define Ethernet_MMC_MMCRFAECR_RFAEC_SHIFT		0
#define Ethernet_MMC_MMCRFAECR_RFAEC_MASK		0xffffffff
/** @defgroup ethernet_mmc_mmcrfaecr_rfaec RFAEC Received frames alignment error counter
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mmc_mmcrgufcr MMCRGUFCR MMC received good unicast frames counter register
@{*/


#define Ethernet_MMC_MMCRGUFCR_RGUFC_SHIFT		0
#define Ethernet_MMC_MMCRGUFCR_RGUFC_MASK		0xffffffff
/** @defgroup ethernet_mmc_mmcrgufcr_rgufc RGUFC Received good unicast frames counter
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- DMAC: DMA Controller ----------------------------------------- */

/** @defgroup dmac_registers DMA Controller Register
@{*/

/** DMAC_GCFG DMAC Global Configuration Register **/
#define DMAC_GCFG			MMIO32(DMAC_BASE + 0x00)
/** DMAC_EN DMAC Enable Register **/
#define DMAC_EN			MMIO32(DMAC_BASE + 0x04)
/** DMAC_SREQ DMAC Software Single Request Register **/
#define DMAC_SREQ			MMIO32(DMAC_BASE + 0x08)
/** DMAC_CREQ DMAC Software Chunk Transfer Request Register **/
#define DMAC_CREQ			MMIO32(DMAC_BASE + 0x0c)
/** DMAC_LAST DMAC Software Last Transfer Flag Register **/
#define DMAC_LAST			MMIO32(DMAC_BASE + 0x10)
/** DMAC_EBCIER DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Enable register. **/
#define DMAC_EBCIER			MMIO32(DMAC_BASE + 0x18)
/** DMAC_EBCIDR DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Disable register. **/
#define DMAC_EBCIDR			MMIO32(DMAC_BASE + 0x1c)
/** DMAC_EBCIMR DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Mask Register. **/
#define DMAC_EBCIMR			MMIO32(DMAC_BASE + 0x20)
/** DMAC_EBCISR DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Status Register. **/
#define DMAC_EBCISR			MMIO32(DMAC_BASE + 0x24)
/** DMAC_CHER DMAC Channel Handler Enable Register **/
#define DMAC_CHER			MMIO32(DMAC_BASE + 0x28)
/** DMAC_CHDR DMAC Channel Handler Disable Register **/
#define DMAC_CHDR			MMIO32(DMAC_BASE + 0x2c)
/** DMAC_CHSR DMAC Channel Handler Status Register **/
#define DMAC_CHSR			MMIO32(DMAC_BASE + 0x30)
/** DMAC_SADDR0 DMAC Channel Source Address Register (ch_num = 0) **/
#define DMAC_SADDR0			MMIO32(DMAC_BASE + 0x3c)
/** DMAC_DADDR0 DMAC Channel Destination Address Register (ch_num = 0) **/
#define DMAC_DADDR0			MMIO32(DMAC_BASE + 0x40)
/** DMAC_DSCR0 DMAC Channel Descriptor Address Register (ch_num = 0) **/
#define DMAC_DSCR0			MMIO32(DMAC_BASE + 0x44)
/** DMAC_CTRLA0 DMAC Channel Control A Register (ch_num = 0) **/
#define DMAC_CTRLA0			MMIO32(DMAC_BASE + 0x48)
/** DMAC_CTRLB0 DMAC Channel Control B Register (ch_num = 0) **/
#define DMAC_CTRLB0			MMIO32(DMAC_BASE + 0x4c)
/** DMAC_CFG0 DMAC Channel Configuration Register (ch_num = 0) **/
#define DMAC_CFG0			MMIO32(DMAC_BASE + 0x50)
/** DMAC_SADDR1 DMAC Channel Source Address Register (ch_num = 1) **/
#define DMAC_SADDR1			MMIO32(DMAC_BASE + 0x64)
/** DMAC_DADDR1 DMAC Channel Destination Address Register (ch_num = 1) **/
#define DMAC_DADDR1			MMIO32(DMAC_BASE + 0x68)
/** DMAC_DSCR1 DMAC Channel Descriptor Address Register (ch_num = 1) **/
#define DMAC_DSCR1			MMIO32(DMAC_BASE + 0x6c)
/** DMAC_CTRLA1 DMAC Channel Control A Register (ch_num = 1) **/
#define DMAC_CTRLA1			MMIO32(DMAC_BASE + 0x70)
/** DMAC_CTRLB1 DMAC Channel Control B Register (ch_num = 1) **/
#define DMAC_CTRLB1			MMIO32(DMAC_BASE + 0x74)
/** DMAC_CFG1 DMAC Channel Configuration Register (ch_num = 1) **/
#define DMAC_CFG1			MMIO32(DMAC_BASE + 0x78)
/** DMAC_SADDR2 DMAC Channel Source Address Register (ch_num = 2) **/
#define DMAC_SADDR2			MMIO32(DMAC_BASE + 0x8c)
/** DMAC_DADDR2 DMAC Channel Destination Address Register (ch_num = 2) **/
#define DMAC_DADDR2			MMIO32(DMAC_BASE + 0x90)
/** DMAC_DSCR2 DMAC Channel Descriptor Address Register (ch_num = 2) **/
#define DMAC_DSCR2			MMIO32(DMAC_BASE + 0x94)
/** DMAC_CTRLA2 DMAC Channel Control A Register (ch_num = 2) **/
#define DMAC_CTRLA2			MMIO32(DMAC_BASE + 0x98)
/** DMAC_CTRLB2 DMAC Channel Control B Register (ch_num = 2) **/
#define DMAC_CTRLB2			MMIO32(DMAC_BASE + 0x9c)
/** DMAC_CFG2 DMAC Channel Configuration Register (ch_num = 2) **/
#define DMAC_CFG2			MMIO32(DMAC_BASE + 0xa0)
/** DMAC_SADDR3 DMAC Channel Source Address Register (ch_num = 3) **/
#define DMAC_SADDR3			MMIO32(DMAC_BASE + 0xb4)
/** DMAC_DADDR3 DMAC Channel Destination Address Register (ch_num = 3) **/
#define DMAC_DADDR3			MMIO32(DMAC_BASE + 0xb8)
/** DMAC_DSCR3 DMAC Channel Descriptor Address Register (ch_num = 3) **/
#define DMAC_DSCR3			MMIO32(DMAC_BASE + 0xbc)
/** DMAC_CTRLA3 DMAC Channel Control A Register (ch_num = 3) **/
#define DMAC_CTRLA3			MMIO32(DMAC_BASE + 0xc0)
/** DMAC_CTRLB3 DMAC Channel Control B Register (ch_num = 3) **/
#define DMAC_CTRLB3			MMIO32(DMAC_BASE + 0xc4)
/** DMAC_CFG3 DMAC Channel Configuration Register (ch_num = 3) **/
#define DMAC_CFG3			MMIO32(DMAC_BASE + 0xc8)
/** DMAC_SADDR4 DMAC Channel Source Address Register (ch_num = 4) **/
#define DMAC_SADDR4			MMIO32(DMAC_BASE + 0xdc)
/** DMAC_DADDR4 DMAC Channel Destination Address Register (ch_num = 4) **/
#define DMAC_DADDR4			MMIO32(DMAC_BASE + 0xe0)
/** DMAC_DSCR4 DMAC Channel Descriptor Address Register (ch_num = 4) **/
#define DMAC_DSCR4			MMIO32(DMAC_BASE + 0xe4)
/** DMAC_CTRLA4 DMAC Channel Control A Register (ch_num = 4) **/
#define DMAC_CTRLA4			MMIO32(DMAC_BASE + 0xe8)
/** DMAC_CTRLB4 DMAC Channel Control B Register (ch_num = 4) **/
#define DMAC_CTRLB4			MMIO32(DMAC_BASE + 0xec)
/** DMAC_CFG4 DMAC Channel Configuration Register (ch_num = 4) **/
#define DMAC_CFG4			MMIO32(DMAC_BASE + 0xf0)
/** DMAC_SADDR5 DMAC Channel Source Address Register (ch_num = 5) **/
#define DMAC_SADDR5			MMIO32(DMAC_BASE + 0x104)
/** DMAC_DADDR5 DMAC Channel Destination Address Register (ch_num = 5) **/
#define DMAC_DADDR5			MMIO32(DMAC_BASE + 0x108)
/** DMAC_DSCR5 DMAC Channel Descriptor Address Register (ch_num = 5) **/
#define DMAC_DSCR5			MMIO32(DMAC_BASE + 0x10c)
/** DMAC_CTRLA5 DMAC Channel Control A Register (ch_num = 5) **/
#define DMAC_CTRLA5			MMIO32(DMAC_BASE + 0x110)
/** DMAC_CTRLB5 DMAC Channel Control B Register (ch_num = 5) **/
#define DMAC_CTRLB5			MMIO32(DMAC_BASE + 0x114)
/** DMAC_CFG5 DMAC Channel Configuration Register (ch_num = 5) **/
#define DMAC_CFG5			MMIO32(DMAC_BASE + 0x118)
/** DMAC_WPMR DMAC Write Protect Mode Register **/
#define DMAC_WPMR			MMIO32(DMAC_BASE + 0x1e4)
/** DMAC_WPSR DMAC Write Protect Status Register **/
#define DMAC_WPSR			MMIO32(DMAC_BASE + 0x1e8)

/**@}*/


/** @defgroup dmac_gcfg GCFG DMAC Global Configuration Register
@{*/

/** DMAC_GCFG_ARB_CFG Arbiter Configuration **/
#define DMAC_GCFG_ARB_CFG		(1 << 4)

/**@}*/

/** @defgroup dmac_en EN DMAC Enable Register
@{*/

/** DMAC_EN_ENABLE General Enable of DMA **/
#define DMAC_EN_ENABLE		(1 << 0)

/**@}*/

/** @defgroup dmac_sreq SREQ DMAC Software Single Request Register
@{*/

/** DMAC_SREQ_DSREQ5 Destination Request **/
#define DMAC_SREQ_DSREQ5		(1 << 11)
/** DMAC_SREQ_SSREQ5 Source Request **/
#define DMAC_SREQ_SSREQ5		(1 << 10)
/** DMAC_SREQ_DSREQ4 Destination Request **/
#define DMAC_SREQ_DSREQ4		(1 << 9)
/** DMAC_SREQ_SSREQ4 Source Request **/
#define DMAC_SREQ_SSREQ4		(1 << 8)
/** DMAC_SREQ_DSREQ3 Destination Request **/
#define DMAC_SREQ_DSREQ3		(1 << 7)
/** DMAC_SREQ_SSREQ3 Source Request **/
#define DMAC_SREQ_SSREQ3		(1 << 6)
/** DMAC_SREQ_DSREQ2 Destination Request **/
#define DMAC_SREQ_DSREQ2		(1 << 5)
/** DMAC_SREQ_SSREQ2 Source Request **/
#define DMAC_SREQ_SSREQ2		(1 << 4)
/** DMAC_SREQ_DSREQ1 Destination Request **/
#define DMAC_SREQ_DSREQ1		(1 << 3)
/** DMAC_SREQ_SSREQ1 Source Request **/
#define DMAC_SREQ_SSREQ1		(1 << 2)
/** DMAC_SREQ_DSREQ0 Destination Request **/
#define DMAC_SREQ_DSREQ0		(1 << 1)
/** DMAC_SREQ_SSREQ0 Source Request **/
#define DMAC_SREQ_SSREQ0		(1 << 0)

/**@}*/

/** @defgroup dmac_creq CREQ DMAC Software Chunk Transfer Request Register
@{*/

/** DMAC_CREQ_DCREQ5 Destination Chunk Request **/
#define DMAC_CREQ_DCREQ5		(1 << 11)
/** DMAC_CREQ_SCREQ5 Source Chunk Request **/
#define DMAC_CREQ_SCREQ5		(1 << 10)
/** DMAC_CREQ_DCREQ4 Destination Chunk Request **/
#define DMAC_CREQ_DCREQ4		(1 << 9)
/** DMAC_CREQ_SCREQ4 Source Chunk Request **/
#define DMAC_CREQ_SCREQ4		(1 << 8)
/** DMAC_CREQ_DCREQ3 Destination Chunk Request **/
#define DMAC_CREQ_DCREQ3		(1 << 7)
/** DMAC_CREQ_SCREQ3 Source Chunk Request **/
#define DMAC_CREQ_SCREQ3		(1 << 6)
/** DMAC_CREQ_DCREQ2 Destination Chunk Request **/
#define DMAC_CREQ_DCREQ2		(1 << 5)
/** DMAC_CREQ_SCREQ2 Source Chunk Request **/
#define DMAC_CREQ_SCREQ2		(1 << 4)
/** DMAC_CREQ_DCREQ1 Destination Chunk Request **/
#define DMAC_CREQ_DCREQ1		(1 << 3)
/** DMAC_CREQ_SCREQ1 Source Chunk Request **/
#define DMAC_CREQ_SCREQ1		(1 << 2)
/** DMAC_CREQ_DCREQ0 Destination Chunk Request **/
#define DMAC_CREQ_DCREQ0		(1 << 1)
/** DMAC_CREQ_SCREQ0 Source Chunk Request **/
#define DMAC_CREQ_SCREQ0		(1 << 0)

/**@}*/

/** @defgroup dmac_last LAST DMAC Software Last Transfer Flag Register
@{*/

/** DMAC_LAST_DLAST5 Destination Last **/
#define DMAC_LAST_DLAST5		(1 << 11)
/** DMAC_LAST_SLAST5 Source Last **/
#define DMAC_LAST_SLAST5		(1 << 10)
/** DMAC_LAST_DLAST4 Destination Last **/
#define DMAC_LAST_DLAST4		(1 << 9)
/** DMAC_LAST_SLAST4 Source Last **/
#define DMAC_LAST_SLAST4		(1 << 8)
/** DMAC_LAST_DLAST3 Destination Last **/
#define DMAC_LAST_DLAST3		(1 << 7)
/** DMAC_LAST_SLAST3 Source Last **/
#define DMAC_LAST_SLAST3		(1 << 6)
/** DMAC_LAST_DLAST2 Destination Last **/
#define DMAC_LAST_DLAST2		(1 << 5)
/** DMAC_LAST_SLAST2 Source Last **/
#define DMAC_LAST_SLAST2		(1 << 4)
/** DMAC_LAST_DLAST1 Destination Last **/
#define DMAC_LAST_DLAST1		(1 << 3)
/** DMAC_LAST_SLAST1 Source Last **/
#define DMAC_LAST_SLAST1		(1 << 2)
/** DMAC_LAST_DLAST0 Destination Last **/
#define DMAC_LAST_DLAST0		(1 << 1)
/** DMAC_LAST_SLAST0 Source Last **/
#define DMAC_LAST_SLAST0		(1 << 0)

/**@}*/

/** @defgroup dmac_ebcier EBCIER DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Enable register.
@{*/

/** DMAC_EBCIER_ERR5 Access Error [5:0] **/
#define DMAC_EBCIER_ERR5		(1 << 21)
/** DMAC_EBCIER_ERR4 Access Error [5:0] **/
#define DMAC_EBCIER_ERR4		(1 << 20)
/** DMAC_EBCIER_ERR3 Access Error [5:0] **/
#define DMAC_EBCIER_ERR3		(1 << 19)
/** DMAC_EBCIER_ERR2 Access Error [5:0] **/
#define DMAC_EBCIER_ERR2		(1 << 18)
/** DMAC_EBCIER_ERR1 Access Error [5:0] **/
#define DMAC_EBCIER_ERR1		(1 << 17)
/** DMAC_EBCIER_ERR0 Access Error [5:0] **/
#define DMAC_EBCIER_ERR0		(1 << 16)
/** DMAC_EBCIER_CBTC5 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIER_CBTC5		(1 << 13)
/** DMAC_EBCIER_CBTC4 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIER_CBTC4		(1 << 12)
/** DMAC_EBCIER_CBTC3 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIER_CBTC3		(1 << 11)
/** DMAC_EBCIER_CBTC2 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIER_CBTC2		(1 << 10)
/** DMAC_EBCIER_CBTC1 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIER_CBTC1		(1 << 9)
/** DMAC_EBCIER_CBTC0 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIER_CBTC0		(1 << 8)
/** DMAC_EBCIER_BTC5 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIER_BTC5		(1 << 5)
/** DMAC_EBCIER_BTC4 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIER_BTC4		(1 << 4)
/** DMAC_EBCIER_BTC3 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIER_BTC3		(1 << 3)
/** DMAC_EBCIER_BTC2 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIER_BTC2		(1 << 2)
/** DMAC_EBCIER_BTC1 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIER_BTC1		(1 << 1)
/** DMAC_EBCIER_BTC0 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIER_BTC0		(1 << 0)

/**@}*/

/** @defgroup dmac_ebcidr EBCIDR DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer Transfer Completed Interrupt Disable register.
@{*/

/** DMAC_EBCIDR_ERR5 Access Error [5:0] **/
#define DMAC_EBCIDR_ERR5		(1 << 21)
/** DMAC_EBCIDR_ERR4 Access Error [5:0] **/
#define DMAC_EBCIDR_ERR4		(1 << 20)
/** DMAC_EBCIDR_ERR3 Access Error [5:0] **/
#define DMAC_EBCIDR_ERR3		(1 << 19)
/** DMAC_EBCIDR_ERR2 Access Error [5:0] **/
#define DMAC_EBCIDR_ERR2		(1 << 18)
/** DMAC_EBCIDR_ERR1 Access Error [5:0] **/
#define DMAC_EBCIDR_ERR1		(1 << 17)
/** DMAC_EBCIDR_ERR0 Access Error [5:0] **/
#define DMAC_EBCIDR_ERR0		(1 << 16)
/** DMAC_EBCIDR_CBTC5 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIDR_CBTC5		(1 << 13)
/** DMAC_EBCIDR_CBTC4 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIDR_CBTC4		(1 << 12)
/** DMAC_EBCIDR_CBTC3 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIDR_CBTC3		(1 << 11)
/** DMAC_EBCIDR_CBTC2 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIDR_CBTC2		(1 << 10)
/** DMAC_EBCIDR_CBTC1 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIDR_CBTC1		(1 << 9)
/** DMAC_EBCIDR_CBTC0 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIDR_CBTC0		(1 << 8)
/** DMAC_EBCIDR_BTC5 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIDR_BTC5		(1 << 5)
/** DMAC_EBCIDR_BTC4 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIDR_BTC4		(1 << 4)
/** DMAC_EBCIDR_BTC3 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIDR_BTC3		(1 << 3)
/** DMAC_EBCIDR_BTC2 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIDR_BTC2		(1 << 2)
/** DMAC_EBCIDR_BTC1 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIDR_BTC1		(1 << 1)
/** DMAC_EBCIDR_BTC0 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIDR_BTC0		(1 << 0)

/**@}*/

/** @defgroup dmac_ebcimr EBCIMR DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Mask Register.
@{*/

/** DMAC_EBCIMR_ERR5 Access Error [5:0] **/
#define DMAC_EBCIMR_ERR5		(1 << 21)
/** DMAC_EBCIMR_ERR4 Access Error [5:0] **/
#define DMAC_EBCIMR_ERR4		(1 << 20)
/** DMAC_EBCIMR_ERR3 Access Error [5:0] **/
#define DMAC_EBCIMR_ERR3		(1 << 19)
/** DMAC_EBCIMR_ERR2 Access Error [5:0] **/
#define DMAC_EBCIMR_ERR2		(1 << 18)
/** DMAC_EBCIMR_ERR1 Access Error [5:0] **/
#define DMAC_EBCIMR_ERR1		(1 << 17)
/** DMAC_EBCIMR_ERR0 Access Error [5:0] **/
#define DMAC_EBCIMR_ERR0		(1 << 16)
/** DMAC_EBCIMR_CBTC5 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIMR_CBTC5		(1 << 13)
/** DMAC_EBCIMR_CBTC4 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIMR_CBTC4		(1 << 12)
/** DMAC_EBCIMR_CBTC3 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIMR_CBTC3		(1 << 11)
/** DMAC_EBCIMR_CBTC2 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIMR_CBTC2		(1 << 10)
/** DMAC_EBCIMR_CBTC1 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIMR_CBTC1		(1 << 9)
/** DMAC_EBCIMR_CBTC0 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIMR_CBTC0		(1 << 8)
/** DMAC_EBCIMR_BTC5 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIMR_BTC5		(1 << 5)
/** DMAC_EBCIMR_BTC4 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIMR_BTC4		(1 << 4)
/** DMAC_EBCIMR_BTC3 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIMR_BTC3		(1 << 3)
/** DMAC_EBCIMR_BTC2 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIMR_BTC2		(1 << 2)
/** DMAC_EBCIMR_BTC1 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIMR_BTC1		(1 << 1)
/** DMAC_EBCIMR_BTC0 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCIMR_BTC0		(1 << 0)

/**@}*/

/** @defgroup dmac_ebcisr EBCISR DMAC Error, Chained Buffer Transfer Completed Interrupt and Buffer transfer completed Status Register.
@{*/

/** DMAC_EBCISR_ERR5 Access Error [5:0] **/
#define DMAC_EBCISR_ERR5		(1 << 21)
/** DMAC_EBCISR_ERR4 Access Error [5:0] **/
#define DMAC_EBCISR_ERR4		(1 << 20)
/** DMAC_EBCISR_ERR3 Access Error [5:0] **/
#define DMAC_EBCISR_ERR3		(1 << 19)
/** DMAC_EBCISR_ERR2 Access Error [5:0] **/
#define DMAC_EBCISR_ERR2		(1 << 18)
/** DMAC_EBCISR_ERR1 Access Error [5:0] **/
#define DMAC_EBCISR_ERR1		(1 << 17)
/** DMAC_EBCISR_ERR0 Access Error [5:0] **/
#define DMAC_EBCISR_ERR0		(1 << 16)
/** DMAC_EBCISR_CBTC5 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCISR_CBTC5		(1 << 13)
/** DMAC_EBCISR_CBTC4 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCISR_CBTC4		(1 << 12)
/** DMAC_EBCISR_CBTC3 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCISR_CBTC3		(1 << 11)
/** DMAC_EBCISR_CBTC2 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCISR_CBTC2		(1 << 10)
/** DMAC_EBCISR_CBTC1 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCISR_CBTC1		(1 << 9)
/** DMAC_EBCISR_CBTC0 Chained Buffer Transfer Completed [5:0] **/
#define DMAC_EBCISR_CBTC0		(1 << 8)
/** DMAC_EBCISR_BTC5 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCISR_BTC5		(1 << 5)
/** DMAC_EBCISR_BTC4 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCISR_BTC4		(1 << 4)
/** DMAC_EBCISR_BTC3 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCISR_BTC3		(1 << 3)
/** DMAC_EBCISR_BTC2 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCISR_BTC2		(1 << 2)
/** DMAC_EBCISR_BTC1 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCISR_BTC1		(1 << 1)
/** DMAC_EBCISR_BTC0 Buffer Transfer Completed [5:0] **/
#define DMAC_EBCISR_BTC0		(1 << 0)

/**@}*/

/** @defgroup dmac_cher CHER DMAC Channel Handler Enable Register
@{*/

/** DMAC_CHER_KEEP5 Keep on [5:0] **/
#define DMAC_CHER_KEEP5		(1 << 29)
/** DMAC_CHER_KEEP4 Keep on [5:0] **/
#define DMAC_CHER_KEEP4		(1 << 28)
/** DMAC_CHER_KEEP3 Keep on [5:0] **/
#define DMAC_CHER_KEEP3		(1 << 27)
/** DMAC_CHER_KEEP2 Keep on [5:0] **/
#define DMAC_CHER_KEEP2		(1 << 26)
/** DMAC_CHER_KEEP1 Keep on [5:0] **/
#define DMAC_CHER_KEEP1		(1 << 25)
/** DMAC_CHER_KEEP0 Keep on [5:0] **/
#define DMAC_CHER_KEEP0		(1 << 24)
/** DMAC_CHER_SUSP5 Suspend [5:0] **/
#define DMAC_CHER_SUSP5		(1 << 13)
/** DMAC_CHER_SUSP4 Suspend [5:0] **/
#define DMAC_CHER_SUSP4		(1 << 12)
/** DMAC_CHER_SUSP3 Suspend [5:0] **/
#define DMAC_CHER_SUSP3		(1 << 11)
/** DMAC_CHER_SUSP2 Suspend [5:0] **/
#define DMAC_CHER_SUSP2		(1 << 10)
/** DMAC_CHER_SUSP1 Suspend [5:0] **/
#define DMAC_CHER_SUSP1		(1 << 9)
/** DMAC_CHER_SUSP0 Suspend [5:0] **/
#define DMAC_CHER_SUSP0		(1 << 8)
/** DMAC_CHER_ENA5 Enable [5:0] **/
#define DMAC_CHER_ENA5		(1 << 5)
/** DMAC_CHER_ENA4 Enable [5:0] **/
#define DMAC_CHER_ENA4		(1 << 4)
/** DMAC_CHER_ENA3 Enable [5:0] **/
#define DMAC_CHER_ENA3		(1 << 3)
/** DMAC_CHER_ENA2 Enable [5:0] **/
#define DMAC_CHER_ENA2		(1 << 2)
/** DMAC_CHER_ENA1 Enable [5:0] **/
#define DMAC_CHER_ENA1		(1 << 1)
/** DMAC_CHER_ENA0 Enable [5:0] **/
#define DMAC_CHER_ENA0		(1 << 0)

/**@}*/

/** @defgroup dmac_chdr CHDR DMAC Channel Handler Disable Register
@{*/

/** DMAC_CHDR_RES5 Resume [5:0] **/
#define DMAC_CHDR_RES5		(1 << 13)
/** DMAC_CHDR_RES4 Resume [5:0] **/
#define DMAC_CHDR_RES4		(1 << 12)
/** DMAC_CHDR_RES3 Resume [5:0] **/
#define DMAC_CHDR_RES3		(1 << 11)
/** DMAC_CHDR_RES2 Resume [5:0] **/
#define DMAC_CHDR_RES2		(1 << 10)
/** DMAC_CHDR_RES1 Resume [5:0] **/
#define DMAC_CHDR_RES1		(1 << 9)
/** DMAC_CHDR_RES0 Resume [5:0] **/
#define DMAC_CHDR_RES0		(1 << 8)
/** DMAC_CHDR_DIS5 Disable [5:0] **/
#define DMAC_CHDR_DIS5		(1 << 5)
/** DMAC_CHDR_DIS4 Disable [5:0] **/
#define DMAC_CHDR_DIS4		(1 << 4)
/** DMAC_CHDR_DIS3 Disable [5:0] **/
#define DMAC_CHDR_DIS3		(1 << 3)
/** DMAC_CHDR_DIS2 Disable [5:0] **/
#define DMAC_CHDR_DIS2		(1 << 2)
/** DMAC_CHDR_DIS1 Disable [5:0] **/
#define DMAC_CHDR_DIS1		(1 << 1)
/** DMAC_CHDR_DIS0 Disable [5:0] **/
#define DMAC_CHDR_DIS0		(1 << 0)

/**@}*/

/** @defgroup dmac_chsr CHSR DMAC Channel Handler Status Register
@{*/

/** DMAC_CHSR_STAL5 Stalled [5:0] **/
#define DMAC_CHSR_STAL5		(1 << 29)
/** DMAC_CHSR_STAL4 Stalled [5:0] **/
#define DMAC_CHSR_STAL4		(1 << 28)
/** DMAC_CHSR_STAL3 Stalled [5:0] **/
#define DMAC_CHSR_STAL3		(1 << 27)
/** DMAC_CHSR_STAL2 Stalled [5:0] **/
#define DMAC_CHSR_STAL2		(1 << 26)
/** DMAC_CHSR_STAL1 Stalled [5:0] **/
#define DMAC_CHSR_STAL1		(1 << 25)
/** DMAC_CHSR_STAL0 Stalled [5:0] **/
#define DMAC_CHSR_STAL0		(1 << 24)
/** DMAC_CHSR_EMPT5 Empty [5:0] **/
#define DMAC_CHSR_EMPT5		(1 << 21)
/** DMAC_CHSR_EMPT4 Empty [5:0] **/
#define DMAC_CHSR_EMPT4		(1 << 20)
/** DMAC_CHSR_EMPT3 Empty [5:0] **/
#define DMAC_CHSR_EMPT3		(1 << 19)
/** DMAC_CHSR_EMPT2 Empty [5:0] **/
#define DMAC_CHSR_EMPT2		(1 << 18)
/** DMAC_CHSR_EMPT1 Empty [5:0] **/
#define DMAC_CHSR_EMPT1		(1 << 17)
/** DMAC_CHSR_EMPT0 Empty [5:0] **/
#define DMAC_CHSR_EMPT0		(1 << 16)
/** DMAC_CHSR_SUSP5 Suspend [5:0] **/
#define DMAC_CHSR_SUSP5		(1 << 13)
/** DMAC_CHSR_SUSP4 Suspend [5:0] **/
#define DMAC_CHSR_SUSP4		(1 << 12)
/** DMAC_CHSR_SUSP3 Suspend [5:0] **/
#define DMAC_CHSR_SUSP3		(1 << 11)
/** DMAC_CHSR_SUSP2 Suspend [5:0] **/
#define DMAC_CHSR_SUSP2		(1 << 10)
/** DMAC_CHSR_SUSP1 Suspend [5:0] **/
#define DMAC_CHSR_SUSP1		(1 << 9)
/** DMAC_CHSR_SUSP0 Suspend [5:0] **/
#define DMAC_CHSR_SUSP0		(1 << 8)
/** DMAC_CHSR_ENA5 Enable [5:0] **/
#define DMAC_CHSR_ENA5		(1 << 5)
/** DMAC_CHSR_ENA4 Enable [5:0] **/
#define DMAC_CHSR_ENA4		(1 << 4)
/** DMAC_CHSR_ENA3 Enable [5:0] **/
#define DMAC_CHSR_ENA3		(1 << 3)
/** DMAC_CHSR_ENA2 Enable [5:0] **/
#define DMAC_CHSR_ENA2		(1 << 2)
/** DMAC_CHSR_ENA1 Enable [5:0] **/
#define DMAC_CHSR_ENA1		(1 << 1)
/** DMAC_CHSR_ENA0 Enable [5:0] **/
#define DMAC_CHSR_ENA0		(1 << 0)

/**@}*/

/** @defgroup dmac_saddr0 SADDR0 DMAC Channel Source Address Register (ch_num = 0)
@{*/


#define DMAC_SADDR0_SADDR_SHIFT		0
#define DMAC_SADDR0_SADDR_MASK		0xffffffff
/** @defgroup dmac_saddr0_saddr SADDR Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_daddr0 DADDR0 DMAC Channel Destination Address Register (ch_num = 0)
@{*/


#define DMAC_DADDR0_DADDR_SHIFT		0
#define DMAC_DADDR0_DADDR_MASK		0xffffffff
/** @defgroup dmac_daddr0_daddr DADDR Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_dscr0 DSCR0 DMAC Channel Descriptor Address Register (ch_num = 0)
@{*/


#define DMAC_DSCR0_DSCR_SHIFT		2
#define DMAC_DSCR0_DSCR_MASK		0x3fffffff
/** @defgroup dmac_dscr0_dscr DSCR Buffer Transfer Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_ctrla0 CTRLA0 DMAC Channel Control A Register (ch_num = 0)
@{*/

/** DMAC_CTRLA0_DONE Current Descriptor Stop Command and Transfer Completed Memory Indicator **/
#define DMAC_CTRLA0_DONE		(1 << 31)

#define DMAC_CTRLA0_DST_WIDTH_SHIFT		28
#define DMAC_CTRLA0_DST_WIDTH_MASK		0x03
/** @defgroup dmac_ctrla0_dst_width DSTWIDTH Transfer Width for the Destination
@{*/
/**@}*/


#define DMAC_CTRLA0_SRC_WIDTH_SHIFT		24
#define DMAC_CTRLA0_SRC_WIDTH_MASK		0x03
/** @defgroup dmac_ctrla0_src_width SRCWIDTH Transfer Width for the Source
@{*/
/**@}*/


#define DMAC_CTRLA0_DCSIZE_SHIFT		20
#define DMAC_CTRLA0_DCSIZE_MASK		0x07
/** @defgroup dmac_ctrla0_dcsize DCSIZE Destination Chunk Transfer Size
@{*/
/**@}*/


#define DMAC_CTRLA0_SCSIZE_SHIFT		16
#define DMAC_CTRLA0_SCSIZE_MASK		0x07
/** @defgroup dmac_ctrla0_scsize SCSIZE Source Chunk Transfer Size.
@{*/
/**@}*/


#define DMAC_CTRLA0_BTSIZE_SHIFT		0
#define DMAC_CTRLA0_BTSIZE_MASK		0xffff
/** @defgroup dmac_ctrla0_btsize BTSIZE Buffer Transfer Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_ctrlb0 CTRLB0 DMAC Channel Control B Register (ch_num = 0)
@{*/

/** DMAC_CTRLB0_IEN Interrupt Enable Not **/
#define DMAC_CTRLB0_IEN		(1 << 30)

#define DMAC_CTRLB0_DST_INCR_SHIFT		28
#define DMAC_CTRLB0_DST_INCR_MASK		0x03
/** @defgroup dmac_ctrlb0_dst_incr DSTINCR Incrementing, Decrementing or Fixed Address for the Destination
@{*/
/**@}*/


#define DMAC_CTRLB0_SRC_INCR_SHIFT		24
#define DMAC_CTRLB0_SRC_INCR_MASK		0x03
/** @defgroup dmac_ctrlb0_src_incr SRCINCR Incrementing, Decrementing or Fixed Address for the Source
@{*/
/**@}*/


#define DMAC_CTRLB0_FC_SHIFT		21
#define DMAC_CTRLB0_FC_MASK		0x03
/** @defgroup dmac_ctrlb0_fc FC Flow Control
@{*/
/**@}*/

/** DMAC_CTRLB0_DST_DSCR Destination Address Descriptor **/
#define DMAC_CTRLB0_DST_DSCR		(1 << 20)
/** DMAC_CTRLB0_SRC_DSCR Source Address Descriptor **/
#define DMAC_CTRLB0_SRC_DSCR		(1 << 16)

/**@}*/

/** @defgroup dmac_cfg0 CFG0 DMAC Channel Configuration Register (ch_num = 0)
@{*/


#define DMAC_CFG0_FIFOCFG_SHIFT		28
#define DMAC_CFG0_FIFOCFG_MASK		0x03
/** @defgroup dmac_cfg0_fifocfg FIFOCFG FIFO Configuration
@{*/
/**@}*/


#define DMAC_CFG0_AHB_PROT_SHIFT		24
#define DMAC_CFG0_AHB_PROT_MASK		0x07
/** @defgroup dmac_cfg0_ahb_prot AHBPROT AHB Protection
@{*/
/**@}*/

/** DMAC_CFG0_LOCK_IF_L Master Interface Arbiter Lock **/
#define DMAC_CFG0_LOCK_IF_L		(1 << 22)
/** DMAC_CFG0_LOCK_B Bus Lock **/
#define DMAC_CFG0_LOCK_B		(1 << 21)
/** DMAC_CFG0_LOCK_IF Interface Lock **/
#define DMAC_CFG0_LOCK_IF		(1 << 20)
/** DMAC_CFG0_SOD Stop On Done **/
#define DMAC_CFG0_SOD		(1 << 16)
/** DMAC_CFG0_DST_H2SEL Software or Hardware Selection for the Destination **/
#define DMAC_CFG0_DST_H2SEL		(1 << 13)
/** DMAC_CFG0_SRC_H2SEL Software or Hardware Selection for the Source **/
#define DMAC_CFG0_SRC_H2SEL		(1 << 9)

#define DMAC_CFG0_DST_PER_SHIFT		4
#define DMAC_CFG0_DST_PER_MASK		0x0f
/** @defgroup dmac_cfg0_dst_per DSTPER Destination with Peripheral identifier
@{*/
/**@}*/


#define DMAC_CFG0_SRC_PER_SHIFT		0
#define DMAC_CFG0_SRC_PER_MASK		0x0f
/** @defgroup dmac_cfg0_src_per SRCPER Source with Peripheral identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_saddr1 SADDR1 DMAC Channel Source Address Register (ch_num = 1)
@{*/


#define DMAC_SADDR1_SADDR_SHIFT		0
#define DMAC_SADDR1_SADDR_MASK		0xffffffff
/** @defgroup dmac_saddr1_saddr SADDR Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_daddr1 DADDR1 DMAC Channel Destination Address Register (ch_num = 1)
@{*/


#define DMAC_DADDR1_DADDR_SHIFT		0
#define DMAC_DADDR1_DADDR_MASK		0xffffffff
/** @defgroup dmac_daddr1_daddr DADDR Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_dscr1 DSCR1 DMAC Channel Descriptor Address Register (ch_num = 1)
@{*/


#define DMAC_DSCR1_DSCR_SHIFT		2
#define DMAC_DSCR1_DSCR_MASK		0x3fffffff
/** @defgroup dmac_dscr1_dscr DSCR Buffer Transfer Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_ctrla1 CTRLA1 DMAC Channel Control A Register (ch_num = 1)
@{*/

/** DMAC_CTRLA1_DONE Current Descriptor Stop Command and Transfer Completed Memory Indicator **/
#define DMAC_CTRLA1_DONE		(1 << 31)

#define DMAC_CTRLA1_DST_WIDTH_SHIFT		28
#define DMAC_CTRLA1_DST_WIDTH_MASK		0x03
/** @defgroup dmac_ctrla1_dst_width DSTWIDTH Transfer Width for the Destination
@{*/
/**@}*/


#define DMAC_CTRLA1_SRC_WIDTH_SHIFT		24
#define DMAC_CTRLA1_SRC_WIDTH_MASK		0x03
/** @defgroup dmac_ctrla1_src_width SRCWIDTH Transfer Width for the Source
@{*/
/**@}*/


#define DMAC_CTRLA1_DCSIZE_SHIFT		20
#define DMAC_CTRLA1_DCSIZE_MASK		0x07
/** @defgroup dmac_ctrla1_dcsize DCSIZE Destination Chunk Transfer Size
@{*/
/**@}*/


#define DMAC_CTRLA1_SCSIZE_SHIFT		16
#define DMAC_CTRLA1_SCSIZE_MASK		0x07
/** @defgroup dmac_ctrla1_scsize SCSIZE Source Chunk Transfer Size.
@{*/
/**@}*/


#define DMAC_CTRLA1_BTSIZE_SHIFT		0
#define DMAC_CTRLA1_BTSIZE_MASK		0xffff
/** @defgroup dmac_ctrla1_btsize BTSIZE Buffer Transfer Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_ctrlb1 CTRLB1 DMAC Channel Control B Register (ch_num = 1)
@{*/

/** DMAC_CTRLB1_IEN Interrupt Enable Not **/
#define DMAC_CTRLB1_IEN		(1 << 30)

#define DMAC_CTRLB1_DST_INCR_SHIFT		28
#define DMAC_CTRLB1_DST_INCR_MASK		0x03
/** @defgroup dmac_ctrlb1_dst_incr DSTINCR Incrementing, Decrementing or Fixed Address for the Destination
@{*/
/**@}*/


#define DMAC_CTRLB1_SRC_INCR_SHIFT		24
#define DMAC_CTRLB1_SRC_INCR_MASK		0x03
/** @defgroup dmac_ctrlb1_src_incr SRCINCR Incrementing, Decrementing or Fixed Address for the Source
@{*/
/**@}*/


#define DMAC_CTRLB1_FC_SHIFT		21
#define DMAC_CTRLB1_FC_MASK		0x03
/** @defgroup dmac_ctrlb1_fc FC Flow Control
@{*/
/**@}*/

/** DMAC_CTRLB1_DST_DSCR Destination Address Descriptor **/
#define DMAC_CTRLB1_DST_DSCR		(1 << 20)
/** DMAC_CTRLB1_SRC_DSCR Source Address Descriptor **/
#define DMAC_CTRLB1_SRC_DSCR		(1 << 16)

/**@}*/

/** @defgroup dmac_cfg1 CFG1 DMAC Channel Configuration Register (ch_num = 1)
@{*/


#define DMAC_CFG1_FIFOCFG_SHIFT		28
#define DMAC_CFG1_FIFOCFG_MASK		0x03
/** @defgroup dmac_cfg1_fifocfg FIFOCFG FIFO Configuration
@{*/
/**@}*/


#define DMAC_CFG1_AHB_PROT_SHIFT		24
#define DMAC_CFG1_AHB_PROT_MASK		0x07
/** @defgroup dmac_cfg1_ahb_prot AHBPROT AHB Protection
@{*/
/**@}*/

/** DMAC_CFG1_LOCK_IF_L Master Interface Arbiter Lock **/
#define DMAC_CFG1_LOCK_IF_L		(1 << 22)
/** DMAC_CFG1_LOCK_B Bus Lock **/
#define DMAC_CFG1_LOCK_B		(1 << 21)
/** DMAC_CFG1_LOCK_IF Interface Lock **/
#define DMAC_CFG1_LOCK_IF		(1 << 20)
/** DMAC_CFG1_SOD Stop On Done **/
#define DMAC_CFG1_SOD		(1 << 16)
/** DMAC_CFG1_DST_H2SEL Software or Hardware Selection for the Destination **/
#define DMAC_CFG1_DST_H2SEL		(1 << 13)
/** DMAC_CFG1_SRC_H2SEL Software or Hardware Selection for the Source **/
#define DMAC_CFG1_SRC_H2SEL		(1 << 9)

#define DMAC_CFG1_DST_PER_SHIFT		4
#define DMAC_CFG1_DST_PER_MASK		0x0f
/** @defgroup dmac_cfg1_dst_per DSTPER Destination with Peripheral identifier
@{*/
/**@}*/


#define DMAC_CFG1_SRC_PER_SHIFT		0
#define DMAC_CFG1_SRC_PER_MASK		0x0f
/** @defgroup dmac_cfg1_src_per SRCPER Source with Peripheral identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_saddr2 SADDR2 DMAC Channel Source Address Register (ch_num = 2)
@{*/


#define DMAC_SADDR2_SADDR_SHIFT		0
#define DMAC_SADDR2_SADDR_MASK		0xffffffff
/** @defgroup dmac_saddr2_saddr SADDR Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_daddr2 DADDR2 DMAC Channel Destination Address Register (ch_num = 2)
@{*/


#define DMAC_DADDR2_DADDR_SHIFT		0
#define DMAC_DADDR2_DADDR_MASK		0xffffffff
/** @defgroup dmac_daddr2_daddr DADDR Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_dscr2 DSCR2 DMAC Channel Descriptor Address Register (ch_num = 2)
@{*/


#define DMAC_DSCR2_DSCR_SHIFT		2
#define DMAC_DSCR2_DSCR_MASK		0x3fffffff
/** @defgroup dmac_dscr2_dscr DSCR Buffer Transfer Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_ctrla2 CTRLA2 DMAC Channel Control A Register (ch_num = 2)
@{*/

/** DMAC_CTRLA2_DONE Current Descriptor Stop Command and Transfer Completed Memory Indicator **/
#define DMAC_CTRLA2_DONE		(1 << 31)

#define DMAC_CTRLA2_DST_WIDTH_SHIFT		28
#define DMAC_CTRLA2_DST_WIDTH_MASK		0x03
/** @defgroup dmac_ctrla2_dst_width DSTWIDTH Transfer Width for the Destination
@{*/
/**@}*/


#define DMAC_CTRLA2_SRC_WIDTH_SHIFT		24
#define DMAC_CTRLA2_SRC_WIDTH_MASK		0x03
/** @defgroup dmac_ctrla2_src_width SRCWIDTH Transfer Width for the Source
@{*/
/**@}*/


#define DMAC_CTRLA2_DCSIZE_SHIFT		20
#define DMAC_CTRLA2_DCSIZE_MASK		0x07
/** @defgroup dmac_ctrla2_dcsize DCSIZE Destination Chunk Transfer Size
@{*/
/**@}*/


#define DMAC_CTRLA2_SCSIZE_SHIFT		16
#define DMAC_CTRLA2_SCSIZE_MASK		0x07
/** @defgroup dmac_ctrla2_scsize SCSIZE Source Chunk Transfer Size.
@{*/
/**@}*/


#define DMAC_CTRLA2_BTSIZE_SHIFT		0
#define DMAC_CTRLA2_BTSIZE_MASK		0xffff
/** @defgroup dmac_ctrla2_btsize BTSIZE Buffer Transfer Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_ctrlb2 CTRLB2 DMAC Channel Control B Register (ch_num = 2)
@{*/

/** DMAC_CTRLB2_IEN Interrupt Enable Not **/
#define DMAC_CTRLB2_IEN		(1 << 30)

#define DMAC_CTRLB2_DST_INCR_SHIFT		28
#define DMAC_CTRLB2_DST_INCR_MASK		0x03
/** @defgroup dmac_ctrlb2_dst_incr DSTINCR Incrementing, Decrementing or Fixed Address for the Destination
@{*/
/**@}*/


#define DMAC_CTRLB2_SRC_INCR_SHIFT		24
#define DMAC_CTRLB2_SRC_INCR_MASK		0x03
/** @defgroup dmac_ctrlb2_src_incr SRCINCR Incrementing, Decrementing or Fixed Address for the Source
@{*/
/**@}*/


#define DMAC_CTRLB2_FC_SHIFT		21
#define DMAC_CTRLB2_FC_MASK		0x03
/** @defgroup dmac_ctrlb2_fc FC Flow Control
@{*/
/**@}*/

/** DMAC_CTRLB2_DST_DSCR Destination Address Descriptor **/
#define DMAC_CTRLB2_DST_DSCR		(1 << 20)
/** DMAC_CTRLB2_SRC_DSCR Source Address Descriptor **/
#define DMAC_CTRLB2_SRC_DSCR		(1 << 16)

/**@}*/

/** @defgroup dmac_cfg2 CFG2 DMAC Channel Configuration Register (ch_num = 2)
@{*/


#define DMAC_CFG2_FIFOCFG_SHIFT		28
#define DMAC_CFG2_FIFOCFG_MASK		0x03
/** @defgroup dmac_cfg2_fifocfg FIFOCFG FIFO Configuration
@{*/
/**@}*/


#define DMAC_CFG2_AHB_PROT_SHIFT		24
#define DMAC_CFG2_AHB_PROT_MASK		0x07
/** @defgroup dmac_cfg2_ahb_prot AHBPROT AHB Protection
@{*/
/**@}*/

/** DMAC_CFG2_LOCK_IF_L Master Interface Arbiter Lock **/
#define DMAC_CFG2_LOCK_IF_L		(1 << 22)
/** DMAC_CFG2_LOCK_B Bus Lock **/
#define DMAC_CFG2_LOCK_B		(1 << 21)
/** DMAC_CFG2_LOCK_IF Interface Lock **/
#define DMAC_CFG2_LOCK_IF		(1 << 20)
/** DMAC_CFG2_SOD Stop On Done **/
#define DMAC_CFG2_SOD		(1 << 16)
/** DMAC_CFG2_DST_H2SEL Software or Hardware Selection for the Destination **/
#define DMAC_CFG2_DST_H2SEL		(1 << 13)
/** DMAC_CFG2_SRC_H2SEL Software or Hardware Selection for the Source **/
#define DMAC_CFG2_SRC_H2SEL		(1 << 9)

#define DMAC_CFG2_DST_PER_SHIFT		4
#define DMAC_CFG2_DST_PER_MASK		0x0f
/** @defgroup dmac_cfg2_dst_per DSTPER Destination with Peripheral identifier
@{*/
/**@}*/


#define DMAC_CFG2_SRC_PER_SHIFT		0
#define DMAC_CFG2_SRC_PER_MASK		0x0f
/** @defgroup dmac_cfg2_src_per SRCPER Source with Peripheral identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_saddr3 SADDR3 DMAC Channel Source Address Register (ch_num = 3)
@{*/


#define DMAC_SADDR3_SADDR_SHIFT		0
#define DMAC_SADDR3_SADDR_MASK		0xffffffff
/** @defgroup dmac_saddr3_saddr SADDR Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_daddr3 DADDR3 DMAC Channel Destination Address Register (ch_num = 3)
@{*/


#define DMAC_DADDR3_DADDR_SHIFT		0
#define DMAC_DADDR3_DADDR_MASK		0xffffffff
/** @defgroup dmac_daddr3_daddr DADDR Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_dscr3 DSCR3 DMAC Channel Descriptor Address Register (ch_num = 3)
@{*/


#define DMAC_DSCR3_DSCR_SHIFT		2
#define DMAC_DSCR3_DSCR_MASK		0x3fffffff
/** @defgroup dmac_dscr3_dscr DSCR Buffer Transfer Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_ctrla3 CTRLA3 DMAC Channel Control A Register (ch_num = 3)
@{*/

/** DMAC_CTRLA3_DONE Current Descriptor Stop Command and Transfer Completed Memory Indicator **/
#define DMAC_CTRLA3_DONE		(1 << 31)

#define DMAC_CTRLA3_DST_WIDTH_SHIFT		28
#define DMAC_CTRLA3_DST_WIDTH_MASK		0x03
/** @defgroup dmac_ctrla3_dst_width DSTWIDTH Transfer Width for the Destination
@{*/
/**@}*/


#define DMAC_CTRLA3_SRC_WIDTH_SHIFT		24
#define DMAC_CTRLA3_SRC_WIDTH_MASK		0x03
/** @defgroup dmac_ctrla3_src_width SRCWIDTH Transfer Width for the Source
@{*/
/**@}*/


#define DMAC_CTRLA3_DCSIZE_SHIFT		20
#define DMAC_CTRLA3_DCSIZE_MASK		0x07
/** @defgroup dmac_ctrla3_dcsize DCSIZE Destination Chunk Transfer Size
@{*/
/**@}*/


#define DMAC_CTRLA3_SCSIZE_SHIFT		16
#define DMAC_CTRLA3_SCSIZE_MASK		0x07
/** @defgroup dmac_ctrla3_scsize SCSIZE Source Chunk Transfer Size.
@{*/
/**@}*/


#define DMAC_CTRLA3_BTSIZE_SHIFT		0
#define DMAC_CTRLA3_BTSIZE_MASK		0xffff
/** @defgroup dmac_ctrla3_btsize BTSIZE Buffer Transfer Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_ctrlb3 CTRLB3 DMAC Channel Control B Register (ch_num = 3)
@{*/

/** DMAC_CTRLB3_IEN Interrupt Enable Not **/
#define DMAC_CTRLB3_IEN		(1 << 30)

#define DMAC_CTRLB3_DST_INCR_SHIFT		28
#define DMAC_CTRLB3_DST_INCR_MASK		0x03
/** @defgroup dmac_ctrlb3_dst_incr DSTINCR Incrementing, Decrementing or Fixed Address for the Destination
@{*/
/**@}*/


#define DMAC_CTRLB3_SRC_INCR_SHIFT		24
#define DMAC_CTRLB3_SRC_INCR_MASK		0x03
/** @defgroup dmac_ctrlb3_src_incr SRCINCR Incrementing, Decrementing or Fixed Address for the Source
@{*/
/**@}*/


#define DMAC_CTRLB3_FC_SHIFT		21
#define DMAC_CTRLB3_FC_MASK		0x03
/** @defgroup dmac_ctrlb3_fc FC Flow Control
@{*/
/**@}*/

/** DMAC_CTRLB3_DST_DSCR Destination Address Descriptor **/
#define DMAC_CTRLB3_DST_DSCR		(1 << 20)
/** DMAC_CTRLB3_SRC_DSCR Source Address Descriptor **/
#define DMAC_CTRLB3_SRC_DSCR		(1 << 16)

/**@}*/

/** @defgroup dmac_cfg3 CFG3 DMAC Channel Configuration Register (ch_num = 3)
@{*/


#define DMAC_CFG3_FIFOCFG_SHIFT		28
#define DMAC_CFG3_FIFOCFG_MASK		0x03
/** @defgroup dmac_cfg3_fifocfg FIFOCFG FIFO Configuration
@{*/
/**@}*/


#define DMAC_CFG3_AHB_PROT_SHIFT		24
#define DMAC_CFG3_AHB_PROT_MASK		0x07
/** @defgroup dmac_cfg3_ahb_prot AHBPROT AHB Protection
@{*/
/**@}*/

/** DMAC_CFG3_LOCK_IF_L Master Interface Arbiter Lock **/
#define DMAC_CFG3_LOCK_IF_L		(1 << 22)
/** DMAC_CFG3_LOCK_B Bus Lock **/
#define DMAC_CFG3_LOCK_B		(1 << 21)
/** DMAC_CFG3_LOCK_IF Interface Lock **/
#define DMAC_CFG3_LOCK_IF		(1 << 20)
/** DMAC_CFG3_SOD Stop On Done **/
#define DMAC_CFG3_SOD		(1 << 16)
/** DMAC_CFG3_DST_H2SEL Software or Hardware Selection for the Destination **/
#define DMAC_CFG3_DST_H2SEL		(1 << 13)
/** DMAC_CFG3_SRC_H2SEL Software or Hardware Selection for the Source **/
#define DMAC_CFG3_SRC_H2SEL		(1 << 9)

#define DMAC_CFG3_DST_PER_SHIFT		4
#define DMAC_CFG3_DST_PER_MASK		0x0f
/** @defgroup dmac_cfg3_dst_per DSTPER Destination with Peripheral identifier
@{*/
/**@}*/


#define DMAC_CFG3_SRC_PER_SHIFT		0
#define DMAC_CFG3_SRC_PER_MASK		0x0f
/** @defgroup dmac_cfg3_src_per SRCPER Source with Peripheral identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_saddr4 SADDR4 DMAC Channel Source Address Register (ch_num = 4)
@{*/


#define DMAC_SADDR4_SADDR_SHIFT		0
#define DMAC_SADDR4_SADDR_MASK		0xffffffff
/** @defgroup dmac_saddr4_saddr SADDR Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_daddr4 DADDR4 DMAC Channel Destination Address Register (ch_num = 4)
@{*/


#define DMAC_DADDR4_DADDR_SHIFT		0
#define DMAC_DADDR4_DADDR_MASK		0xffffffff
/** @defgroup dmac_daddr4_daddr DADDR Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_dscr4 DSCR4 DMAC Channel Descriptor Address Register (ch_num = 4)
@{*/


#define DMAC_DSCR4_DSCR_SHIFT		2
#define DMAC_DSCR4_DSCR_MASK		0x3fffffff
/** @defgroup dmac_dscr4_dscr DSCR Buffer Transfer Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_ctrla4 CTRLA4 DMAC Channel Control A Register (ch_num = 4)
@{*/

/** DMAC_CTRLA4_DONE Current Descriptor Stop Command and Transfer Completed Memory Indicator **/
#define DMAC_CTRLA4_DONE		(1 << 31)

#define DMAC_CTRLA4_DST_WIDTH_SHIFT		28
#define DMAC_CTRLA4_DST_WIDTH_MASK		0x03
/** @defgroup dmac_ctrla4_dst_width DSTWIDTH Transfer Width for the Destination
@{*/
/**@}*/


#define DMAC_CTRLA4_SRC_WIDTH_SHIFT		24
#define DMAC_CTRLA4_SRC_WIDTH_MASK		0x03
/** @defgroup dmac_ctrla4_src_width SRCWIDTH Transfer Width for the Source
@{*/
/**@}*/


#define DMAC_CTRLA4_DCSIZE_SHIFT		20
#define DMAC_CTRLA4_DCSIZE_MASK		0x07
/** @defgroup dmac_ctrla4_dcsize DCSIZE Destination Chunk Transfer Size
@{*/
/**@}*/


#define DMAC_CTRLA4_SCSIZE_SHIFT		16
#define DMAC_CTRLA4_SCSIZE_MASK		0x07
/** @defgroup dmac_ctrla4_scsize SCSIZE Source Chunk Transfer Size.
@{*/
/**@}*/


#define DMAC_CTRLA4_BTSIZE_SHIFT		0
#define DMAC_CTRLA4_BTSIZE_MASK		0xffff
/** @defgroup dmac_ctrla4_btsize BTSIZE Buffer Transfer Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_ctrlb4 CTRLB4 DMAC Channel Control B Register (ch_num = 4)
@{*/

/** DMAC_CTRLB4_IEN Interrupt Enable Not **/
#define DMAC_CTRLB4_IEN		(1 << 30)

#define DMAC_CTRLB4_DST_INCR_SHIFT		28
#define DMAC_CTRLB4_DST_INCR_MASK		0x03
/** @defgroup dmac_ctrlb4_dst_incr DSTINCR Incrementing, Decrementing or Fixed Address for the Destination
@{*/
/**@}*/


#define DMAC_CTRLB4_SRC_INCR_SHIFT		24
#define DMAC_CTRLB4_SRC_INCR_MASK		0x03
/** @defgroup dmac_ctrlb4_src_incr SRCINCR Incrementing, Decrementing or Fixed Address for the Source
@{*/
/**@}*/


#define DMAC_CTRLB4_FC_SHIFT		21
#define DMAC_CTRLB4_FC_MASK		0x03
/** @defgroup dmac_ctrlb4_fc FC Flow Control
@{*/
/**@}*/

/** DMAC_CTRLB4_DST_DSCR Destination Address Descriptor **/
#define DMAC_CTRLB4_DST_DSCR		(1 << 20)
/** DMAC_CTRLB4_SRC_DSCR Source Address Descriptor **/
#define DMAC_CTRLB4_SRC_DSCR		(1 << 16)

/**@}*/

/** @defgroup dmac_cfg4 CFG4 DMAC Channel Configuration Register (ch_num = 4)
@{*/


#define DMAC_CFG4_FIFOCFG_SHIFT		28
#define DMAC_CFG4_FIFOCFG_MASK		0x03
/** @defgroup dmac_cfg4_fifocfg FIFOCFG FIFO Configuration
@{*/
/**@}*/


#define DMAC_CFG4_AHB_PROT_SHIFT		24
#define DMAC_CFG4_AHB_PROT_MASK		0x07
/** @defgroup dmac_cfg4_ahb_prot AHBPROT AHB Protection
@{*/
/**@}*/

/** DMAC_CFG4_LOCK_IF_L Master Interface Arbiter Lock **/
#define DMAC_CFG4_LOCK_IF_L		(1 << 22)
/** DMAC_CFG4_LOCK_B Bus Lock **/
#define DMAC_CFG4_LOCK_B		(1 << 21)
/** DMAC_CFG4_LOCK_IF Interface Lock **/
#define DMAC_CFG4_LOCK_IF		(1 << 20)
/** DMAC_CFG4_SOD Stop On Done **/
#define DMAC_CFG4_SOD		(1 << 16)
/** DMAC_CFG4_DST_H2SEL Software or Hardware Selection for the Destination **/
#define DMAC_CFG4_DST_H2SEL		(1 << 13)
/** DMAC_CFG4_SRC_H2SEL Software or Hardware Selection for the Source **/
#define DMAC_CFG4_SRC_H2SEL		(1 << 9)

#define DMAC_CFG4_DST_PER_SHIFT		4
#define DMAC_CFG4_DST_PER_MASK		0x0f
/** @defgroup dmac_cfg4_dst_per DSTPER Destination with Peripheral identifier
@{*/
/**@}*/


#define DMAC_CFG4_SRC_PER_SHIFT		0
#define DMAC_CFG4_SRC_PER_MASK		0x0f
/** @defgroup dmac_cfg4_src_per SRCPER Source with Peripheral identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_saddr5 SADDR5 DMAC Channel Source Address Register (ch_num = 5)
@{*/


#define DMAC_SADDR5_SADDR_SHIFT		0
#define DMAC_SADDR5_SADDR_MASK		0xffffffff
/** @defgroup dmac_saddr5_saddr SADDR Channel x Source Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_daddr5 DADDR5 DMAC Channel Destination Address Register (ch_num = 5)
@{*/


#define DMAC_DADDR5_DADDR_SHIFT		0
#define DMAC_DADDR5_DADDR_MASK		0xffffffff
/** @defgroup dmac_daddr5_daddr DADDR Channel x Destination Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_dscr5 DSCR5 DMAC Channel Descriptor Address Register (ch_num = 5)
@{*/


#define DMAC_DSCR5_DSCR_SHIFT		2
#define DMAC_DSCR5_DSCR_MASK		0x3fffffff
/** @defgroup dmac_dscr5_dscr DSCR Buffer Transfer Descriptor Address
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_ctrla5 CTRLA5 DMAC Channel Control A Register (ch_num = 5)
@{*/

/** DMAC_CTRLA5_DONE Current Descriptor Stop Command and Transfer Completed Memory Indicator **/
#define DMAC_CTRLA5_DONE		(1 << 31)

#define DMAC_CTRLA5_DST_WIDTH_SHIFT		28
#define DMAC_CTRLA5_DST_WIDTH_MASK		0x03
/** @defgroup dmac_ctrla5_dst_width DSTWIDTH Transfer Width for the Destination
@{*/
/**@}*/


#define DMAC_CTRLA5_SRC_WIDTH_SHIFT		24
#define DMAC_CTRLA5_SRC_WIDTH_MASK		0x03
/** @defgroup dmac_ctrla5_src_width SRCWIDTH Transfer Width for the Source
@{*/
/**@}*/


#define DMAC_CTRLA5_DCSIZE_SHIFT		20
#define DMAC_CTRLA5_DCSIZE_MASK		0x07
/** @defgroup dmac_ctrla5_dcsize DCSIZE Destination Chunk Transfer Size
@{*/
/**@}*/


#define DMAC_CTRLA5_SCSIZE_SHIFT		16
#define DMAC_CTRLA5_SCSIZE_MASK		0x07
/** @defgroup dmac_ctrla5_scsize SCSIZE Source Chunk Transfer Size.
@{*/
/**@}*/


#define DMAC_CTRLA5_BTSIZE_SHIFT		0
#define DMAC_CTRLA5_BTSIZE_MASK		0xffff
/** @defgroup dmac_ctrla5_btsize BTSIZE Buffer Transfer Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_ctrlb5 CTRLB5 DMAC Channel Control B Register (ch_num = 5)
@{*/

/** DMAC_CTRLB5_IEN Interrupt Enable Not **/
#define DMAC_CTRLB5_IEN		(1 << 30)

#define DMAC_CTRLB5_DST_INCR_SHIFT		28
#define DMAC_CTRLB5_DST_INCR_MASK		0x03
/** @defgroup dmac_ctrlb5_dst_incr DSTINCR Incrementing, Decrementing or Fixed Address for the Destination
@{*/
/**@}*/


#define DMAC_CTRLB5_SRC_INCR_SHIFT		24
#define DMAC_CTRLB5_SRC_INCR_MASK		0x03
/** @defgroup dmac_ctrlb5_src_incr SRCINCR Incrementing, Decrementing or Fixed Address for the Source
@{*/
/**@}*/


#define DMAC_CTRLB5_FC_SHIFT		21
#define DMAC_CTRLB5_FC_MASK		0x03
/** @defgroup dmac_ctrlb5_fc FC Flow Control
@{*/
/**@}*/

/** DMAC_CTRLB5_DST_DSCR Destination Address Descriptor **/
#define DMAC_CTRLB5_DST_DSCR		(1 << 20)
/** DMAC_CTRLB5_SRC_DSCR Source Address Descriptor **/
#define DMAC_CTRLB5_SRC_DSCR		(1 << 16)

/**@}*/

/** @defgroup dmac_cfg5 CFG5 DMAC Channel Configuration Register (ch_num = 5)
@{*/


#define DMAC_CFG5_FIFOCFG_SHIFT		28
#define DMAC_CFG5_FIFOCFG_MASK		0x03
/** @defgroup dmac_cfg5_fifocfg FIFOCFG FIFO Configuration
@{*/
/**@}*/


#define DMAC_CFG5_AHB_PROT_SHIFT		24
#define DMAC_CFG5_AHB_PROT_MASK		0x07
/** @defgroup dmac_cfg5_ahb_prot AHBPROT AHB Protection
@{*/
/**@}*/

/** DMAC_CFG5_LOCK_IF_L Master Interface Arbiter Lock **/
#define DMAC_CFG5_LOCK_IF_L		(1 << 22)
/** DMAC_CFG5_LOCK_B Bus Lock **/
#define DMAC_CFG5_LOCK_B		(1 << 21)
/** DMAC_CFG5_LOCK_IF Interface Lock **/
#define DMAC_CFG5_LOCK_IF		(1 << 20)
/** DMAC_CFG5_SOD Stop On Done **/
#define DMAC_CFG5_SOD		(1 << 16)
/** DMAC_CFG5_DST_H2SEL Software or Hardware Selection for the Destination **/
#define DMAC_CFG5_DST_H2SEL		(1 << 13)
/** DMAC_CFG5_SRC_H2SEL Software or Hardware Selection for the Source **/
#define DMAC_CFG5_SRC_H2SEL		(1 << 9)

#define DMAC_CFG5_DST_PER_SHIFT		4
#define DMAC_CFG5_DST_PER_MASK		0x0f
/** @defgroup dmac_cfg5_dst_per DSTPER Destination with Peripheral identifier
@{*/
/**@}*/


#define DMAC_CFG5_SRC_PER_SHIFT		0
#define DMAC_CFG5_SRC_PER_MASK		0x0f
/** @defgroup dmac_cfg5_src_per SRCPER Source with Peripheral identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup dmac_wpmr WPMR DMAC Write Protect Mode Register
@{*/


#define DMAC_WPMR_WPKEY_SHIFT		8
#define DMAC_WPMR_WPKEY_MASK		0xffffff
/** @defgroup dmac_wpmr_wpkey WPKEY Write Protect KEY
@{*/
/**@}*/

/** DMAC_WPMR_WPEN Write Protect Enable **/
#define DMAC_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup dmac_wpsr WPSR DMAC Write Protect Status Register
@{*/


#define DMAC_WPSR_WPVSRC_SHIFT		8
#define DMAC_WPSR_WPVSRC_MASK		0xffff
/** @defgroup dmac_wpsr_wpvsrc WPVSRC Write Protect Violation Source
@{*/
/**@}*/

/** DMAC_WPSR_WPVS Write Protect Violation Status **/
#define DMAC_WPSR_WPVS		(1 << 0)

/**@}*/

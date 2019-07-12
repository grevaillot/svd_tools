#pragma once 

/* --- I2SC0: Inter-IC Sound Controller ----------------------------- */

/** @defgroup i2sc0_registers Inter-IC Sound Controller Register
@{*/

/** I2SC0_I2SC_CR Control Register **/
#define I2SC0_I2SC_CR			MMIO32(I2SC0_BASE + 0x00)
/** I2SC0_I2SC_MR Mode Register **/
#define I2SC0_I2SC_MR			MMIO32(I2SC0_BASE + 0x04)
/** I2SC0_I2SC_SR Status Register **/
#define I2SC0_I2SC_SR			MMIO32(I2SC0_BASE + 0x08)
/** I2SC0_I2SC_SCR Status Clear Register **/
#define I2SC0_I2SC_SCR			MMIO32(I2SC0_BASE + 0x0c)
/** I2SC0_I2SC_SSR Status Set Register **/
#define I2SC0_I2SC_SSR			MMIO32(I2SC0_BASE + 0x10)
/** I2SC0_I2SC_IER Interrupt Enable Register **/
#define I2SC0_I2SC_IER			MMIO32(I2SC0_BASE + 0x14)
/** I2SC0_I2SC_IDR Interrupt Disable Register **/
#define I2SC0_I2SC_IDR			MMIO32(I2SC0_BASE + 0x18)
/** I2SC0_I2SC_IMR Interrupt Mask Register **/
#define I2SC0_I2SC_IMR			MMIO32(I2SC0_BASE + 0x1c)
/** I2SC0_I2SC_RHR Receiver Holding Register **/
#define I2SC0_I2SC_RHR			MMIO32(I2SC0_BASE + 0x20)
/** I2SC0_I2SC_THR Transmitter Holding Register **/
#define I2SC0_I2SC_THR			MMIO32(I2SC0_BASE + 0x24)

/**@}*/


/** @defgroup i2sc0_i2sc_cr I2SCCR Control Register
@{*/

/** I2SC0_I2SC_CR_SWRST Software Reset **/
#define I2SC0_I2SC_CR_SWRST		(1 << 7)
/** I2SC0_I2SC_CR_TXDIS Transmitter Disable **/
#define I2SC0_I2SC_CR_TXDIS		(1 << 5)
/** I2SC0_I2SC_CR_TXEN Transmitter Enable **/
#define I2SC0_I2SC_CR_TXEN		(1 << 4)
/** I2SC0_I2SC_CR_CKDIS Clocks Disable **/
#define I2SC0_I2SC_CR_CKDIS		(1 << 3)
/** I2SC0_I2SC_CR_CKEN Clocks Enable **/
#define I2SC0_I2SC_CR_CKEN		(1 << 2)
/** I2SC0_I2SC_CR_RXDIS Receiver Disable **/
#define I2SC0_I2SC_CR_RXDIS		(1 << 1)
/** I2SC0_I2SC_CR_RXEN Receiver Enable **/
#define I2SC0_I2SC_CR_RXEN		(1 << 0)

/**@}*/

/** @defgroup i2sc0_i2sc_mr I2SCMR Mode Register
@{*/

/** I2SC0_I2SC_MR_IWS I2SC_WS Slot Width **/
#define I2SC0_I2SC_MR_IWS		(1 << 31)
/** I2SC0_I2SC_MR_IMCKMODE Master Clock Mode **/
#define I2SC0_I2SC_MR_IMCKMODE		(1 << 30)

#define I2SC0_I2SC_MR_IMCKFS_SHIFT		24
#define I2SC0_I2SC_MR_IMCKFS_MASK		0x3f
/** @defgroup i2sc0_i2sc_mr_imckfs IMCKFS Master Clock to fs Ratio
@{*/
/**@}*/


#define I2SC0_I2SC_MR_IMCKDIV_SHIFT		16
#define I2SC0_I2SC_MR_IMCKDIV_MASK		0x3f
/** @defgroup i2sc0_i2sc_mr_imckdiv IMCKDIV Selected Clock to I2SC Master Clock Ratio
@{*/
/**@}*/

/** I2SC0_I2SC_MR_TXSAME Transmit Data when Underrun **/
#define I2SC0_I2SC_MR_TXSAME		(1 << 14)
/** I2SC0_I2SC_MR_TXDMA Single or Multiple DMA Controller Channels for Transmitter **/
#define I2SC0_I2SC_MR_TXDMA		(1 << 13)
/** I2SC0_I2SC_MR_TXMONO Transmit Mono **/
#define I2SC0_I2SC_MR_TXMONO		(1 << 12)
/** I2SC0_I2SC_MR_RXLOOP Loopback Test Mode **/
#define I2SC0_I2SC_MR_RXLOOP		(1 << 10)
/** I2SC0_I2SC_MR_RXDMA Single or Multiple DMA Controller Channels for Receiver **/
#define I2SC0_I2SC_MR_RXDMA		(1 << 9)
/** I2SC0_I2SC_MR_RXMONO Receive Mono **/
#define I2SC0_I2SC_MR_RXMONO		(1 << 8)

#define I2SC0_I2SC_MR_DATALENGTH_SHIFT		2
#define I2SC0_I2SC_MR_DATALENGTH_MASK		0x07
/** @defgroup i2sc0_i2sc_mr_datalength DATALENGTH Data Word Length
@{*/
/**@}*/

/** I2SC0_I2SC_MR_MODE Inter-IC Sound Controller Mode **/
#define I2SC0_I2SC_MR_MODE		(1 << 0)

/**@}*/

/** @defgroup i2sc0_i2sc_sr I2SCSR Status Register
@{*/


#define I2SC0_I2SC_SR_TXURCH_SHIFT		20
#define I2SC0_I2SC_SR_TXURCH_MASK		0x03
/** @defgroup i2sc0_i2sc_sr_txurch TXURCH Transmit Underrun Channel
@{*/
/**@}*/


#define I2SC0_I2SC_SR_RXORCH_SHIFT		8
#define I2SC0_I2SC_SR_RXORCH_MASK		0x03
/** @defgroup i2sc0_i2sc_sr_rxorch RXORCH Receive Overrun Channel
@{*/
/**@}*/

/** I2SC0_I2SC_SR_TXUR Transmit Underrun **/
#define I2SC0_I2SC_SR_TXUR		(1 << 6)
/** I2SC0_I2SC_SR_TXRDY Transmit Ready **/
#define I2SC0_I2SC_SR_TXRDY		(1 << 5)
/** I2SC0_I2SC_SR_TXEN Transmitter Enabled **/
#define I2SC0_I2SC_SR_TXEN		(1 << 4)
/** I2SC0_I2SC_SR_RXOR Receive Overrun **/
#define I2SC0_I2SC_SR_RXOR		(1 << 2)
/** I2SC0_I2SC_SR_RXRDY Receive Ready **/
#define I2SC0_I2SC_SR_RXRDY		(1 << 1)
/** I2SC0_I2SC_SR_RXEN Receiver Enabled **/
#define I2SC0_I2SC_SR_RXEN		(1 << 0)

/**@}*/

/** @defgroup i2sc0_i2sc_scr I2SCSCR Status Clear Register
@{*/


#define I2SC0_I2SC_SCR_TXURCH_SHIFT		20
#define I2SC0_I2SC_SCR_TXURCH_MASK		0x03
/** @defgroup i2sc0_i2sc_scr_txurch TXURCH Transmit Underrun Per Channel Status Clear
@{*/
/**@}*/


#define I2SC0_I2SC_SCR_RXORCH_SHIFT		8
#define I2SC0_I2SC_SCR_RXORCH_MASK		0x03
/** @defgroup i2sc0_i2sc_scr_rxorch RXORCH Receive Overrun Per Channel Status Clear
@{*/
/**@}*/

/** I2SC0_I2SC_SCR_TXUR Transmit Underrun Status Clear **/
#define I2SC0_I2SC_SCR_TXUR		(1 << 6)
/** I2SC0_I2SC_SCR_RXOR Receive Overrun Status Clear **/
#define I2SC0_I2SC_SCR_RXOR		(1 << 2)

/**@}*/

/** @defgroup i2sc0_i2sc_ssr I2SCSSR Status Set Register
@{*/


#define I2SC0_I2SC_SSR_TXURCH_SHIFT		20
#define I2SC0_I2SC_SSR_TXURCH_MASK		0x03
/** @defgroup i2sc0_i2sc_ssr_txurch TXURCH Transmit Underrun Per Channel Status Set
@{*/
/**@}*/


#define I2SC0_I2SC_SSR_RXORCH_SHIFT		8
#define I2SC0_I2SC_SSR_RXORCH_MASK		0x03
/** @defgroup i2sc0_i2sc_ssr_rxorch RXORCH Receive Overrun Per Channel Status Set
@{*/
/**@}*/

/** I2SC0_I2SC_SSR_TXUR Transmit Underrun Status Set **/
#define I2SC0_I2SC_SSR_TXUR		(1 << 6)
/** I2SC0_I2SC_SSR_RXOR Receive Overrun Status Set **/
#define I2SC0_I2SC_SSR_RXOR		(1 << 2)

/**@}*/

/** @defgroup i2sc0_i2sc_ier I2SCIER Interrupt Enable Register
@{*/

/** I2SC0_I2SC_IER_TXUR Transmit Underflow Interrupt Enable **/
#define I2SC0_I2SC_IER_TXUR		(1 << 6)
/** I2SC0_I2SC_IER_TXRDY Transmit Ready Interrupt Enable **/
#define I2SC0_I2SC_IER_TXRDY		(1 << 5)
/** I2SC0_I2SC_IER_RXOR Receiver Overrun Interrupt Enable **/
#define I2SC0_I2SC_IER_RXOR		(1 << 2)
/** I2SC0_I2SC_IER_RXRDY Receiver Ready Interrupt Enable **/
#define I2SC0_I2SC_IER_RXRDY		(1 << 1)

/**@}*/

/** @defgroup i2sc0_i2sc_idr I2SCIDR Interrupt Disable Register
@{*/

/** I2SC0_I2SC_IDR_TXUR Transmit Underflow Interrupt Disable **/
#define I2SC0_I2SC_IDR_TXUR		(1 << 6)
/** I2SC0_I2SC_IDR_TXRDY Transmit Ready Interrupt Disable **/
#define I2SC0_I2SC_IDR_TXRDY		(1 << 5)
/** I2SC0_I2SC_IDR_RXOR Receiver Overrun Interrupt Disable **/
#define I2SC0_I2SC_IDR_RXOR		(1 << 2)
/** I2SC0_I2SC_IDR_RXRDY Receiver Ready Interrupt Disable **/
#define I2SC0_I2SC_IDR_RXRDY		(1 << 1)

/**@}*/

/** @defgroup i2sc0_i2sc_imr I2SCIMR Interrupt Mask Register
@{*/

/** I2SC0_I2SC_IMR_TXUR Transmit Underflow Interrupt Disable **/
#define I2SC0_I2SC_IMR_TXUR		(1 << 6)
/** I2SC0_I2SC_IMR_TXRDY Transmit Ready Interrupt Disable **/
#define I2SC0_I2SC_IMR_TXRDY		(1 << 5)
/** I2SC0_I2SC_IMR_RXOR Receiver Overrun Interrupt Disable **/
#define I2SC0_I2SC_IMR_RXOR		(1 << 2)
/** I2SC0_I2SC_IMR_RXRDY Receiver Ready Interrupt Disable **/
#define I2SC0_I2SC_IMR_RXRDY		(1 << 1)

/**@}*/

/** @defgroup i2sc0_i2sc_rhr I2SCRHR Receiver Holding Register
@{*/


#define I2SC0_I2SC_RHR_RHR_SHIFT		0
#define I2SC0_I2SC_RHR_RHR_MASK		0xffffffff
/** @defgroup i2sc0_i2sc_rhr_rhr RHR Receiver Holding Register
@{*/
/**@}*/


/**@}*/

/** @defgroup i2sc0_i2sc_thr I2SCTHR Transmitter Holding Register
@{*/


#define I2SC0_I2SC_THR_THR_SHIFT		0
#define I2SC0_I2SC_THR_THR_MASK		0xffffffff
/** @defgroup i2sc0_i2sc_thr_thr THR Transmitter Holding Register
@{*/
/**@}*/


/**@}*/

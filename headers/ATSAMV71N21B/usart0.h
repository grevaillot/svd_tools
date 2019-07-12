#pragma once 

/* --- USART0: Universal Synchronous Asynchronous Receiver Transmitter  */

/** @defgroup usart0_registers Universal Synchronous Asynchronous Receiver Transmitter Register
@{*/

/** USART0_US_CR_USART_MODE Control Register **/
#define USART0_US_CR_USART_MODE			MMIO32(USART0_BASE + 0x00)
/** USART0_US_CR_SPI_MODE Control Register **/
#define USART0_US_CR_SPI_MODE			MMIO32(USART0_BASE + 0x00)
/** USART0_US_CR_LIN_MODE Control Register **/
#define USART0_US_CR_LIN_MODE			MMIO32(USART0_BASE + 0x00)
/** USART0_US_MR_USART_MODE Mode Register **/
#define USART0_US_MR_USART_MODE			MMIO32(USART0_BASE + 0x04)
/** USART0_US_MR_SPI_MODE Mode Register **/
#define USART0_US_MR_SPI_MODE			MMIO32(USART0_BASE + 0x04)
/** USART0_US_IER_USART_MODE Interrupt Enable Register **/
#define USART0_US_IER_USART_MODE			MMIO32(USART0_BASE + 0x08)
/** USART0_US_IER_USART_LIN_MODE Interrupt Enable Register **/
#define USART0_US_IER_USART_LIN_MODE			MMIO32(USART0_BASE + 0x08)
/** USART0_US_IER_SPI_MODE Interrupt Enable Register **/
#define USART0_US_IER_SPI_MODE			MMIO32(USART0_BASE + 0x08)
/** USART0_US_IER_LIN_MODE Interrupt Enable Register **/
#define USART0_US_IER_LIN_MODE			MMIO32(USART0_BASE + 0x08)
/** USART0_US_IER_LON_MODE Interrupt Enable Register **/
#define USART0_US_IER_LON_MODE			MMIO32(USART0_BASE + 0x08)
/** USART0_US_IER_LON_SPI_MODE Interrupt Enable Register **/
#define USART0_US_IER_LON_SPI_MODE			MMIO32(USART0_BASE + 0x08)
/** USART0_US_IDR_USART_MODE Interrupt Disable Register **/
#define USART0_US_IDR_USART_MODE			MMIO32(USART0_BASE + 0x0c)
/** USART0_US_IDR_USART_LIN_MODE Interrupt Disable Register **/
#define USART0_US_IDR_USART_LIN_MODE			MMIO32(USART0_BASE + 0x0c)
/** USART0_US_IDR_SPI_MODE Interrupt Disable Register **/
#define USART0_US_IDR_SPI_MODE			MMIO32(USART0_BASE + 0x0c)
/** USART0_US_IDR_LIN_MODE Interrupt Disable Register **/
#define USART0_US_IDR_LIN_MODE			MMIO32(USART0_BASE + 0x0c)
/** USART0_US_IDR_LON_MODE Interrupt Disable Register **/
#define USART0_US_IDR_LON_MODE			MMIO32(USART0_BASE + 0x0c)
/** USART0_US_IDR_LON_SPI_MODE Interrupt Disable Register **/
#define USART0_US_IDR_LON_SPI_MODE			MMIO32(USART0_BASE + 0x0c)
/** USART0_US_IMR_USART_MODE Interrupt Mask Register **/
#define USART0_US_IMR_USART_MODE			MMIO32(USART0_BASE + 0x10)
/** USART0_US_IMR_USART_LIN_MODE Interrupt Mask Register **/
#define USART0_US_IMR_USART_LIN_MODE			MMIO32(USART0_BASE + 0x10)
/** USART0_US_IMR_SPI_MODE Interrupt Mask Register **/
#define USART0_US_IMR_SPI_MODE			MMIO32(USART0_BASE + 0x10)
/** USART0_US_IMR_LIN_MODE Interrupt Mask Register **/
#define USART0_US_IMR_LIN_MODE			MMIO32(USART0_BASE + 0x10)
/** USART0_US_IMR_LON_MODE Interrupt Mask Register **/
#define USART0_US_IMR_LON_MODE			MMIO32(USART0_BASE + 0x10)
/** USART0_US_IMR_LON_SPI_MODE Interrupt Mask Register **/
#define USART0_US_IMR_LON_SPI_MODE			MMIO32(USART0_BASE + 0x10)
/** USART0_US_CSR_USART_MODE Channel Status Register **/
#define USART0_US_CSR_USART_MODE			MMIO32(USART0_BASE + 0x14)
/** USART0_US_CSR_USART_LIN_MODE Channel Status Register **/
#define USART0_US_CSR_USART_LIN_MODE			MMIO32(USART0_BASE + 0x14)
/** USART0_US_CSR_SPI_MODE Channel Status Register **/
#define USART0_US_CSR_SPI_MODE			MMIO32(USART0_BASE + 0x14)
/** USART0_US_CSR_LIN_MODE Channel Status Register **/
#define USART0_US_CSR_LIN_MODE			MMIO32(USART0_BASE + 0x14)
/** USART0_US_CSR_LON_MODE Channel Status Register **/
#define USART0_US_CSR_LON_MODE			MMIO32(USART0_BASE + 0x14)
/** USART0_US_CSR_LON_SPI_MODE Channel Status Register **/
#define USART0_US_CSR_LON_SPI_MODE			MMIO32(USART0_BASE + 0x14)
/** USART0_US_RHR Receive Holding Register **/
#define USART0_US_RHR			MMIO32(USART0_BASE + 0x18)
/** USART0_US_THR Transmit Holding Register **/
#define USART0_US_THR			MMIO32(USART0_BASE + 0x1c)
/** USART0_US_BRGR Baud Rate Generator Register **/
#define USART0_US_BRGR			MMIO32(USART0_BASE + 0x20)
/** USART0_US_RTOR Receiver Timeout Register **/
#define USART0_US_RTOR			MMIO32(USART0_BASE + 0x24)
/** USART0_US_TTGR_USART_MODE Transmitter Timeguard Register **/
#define USART0_US_TTGR_USART_MODE			MMIO32(USART0_BASE + 0x28)
/** USART0_US_TTGR_LON_MODE Transmitter Timeguard Register **/
#define USART0_US_TTGR_LON_MODE			MMIO32(USART0_BASE + 0x28)
/** USART0_US_FIDI_USART_MODE FI DI Ratio Register **/
#define USART0_US_FIDI_USART_MODE			MMIO32(USART0_BASE + 0x40)
/** USART0_US_FIDI_LON_MODE FI DI Ratio Register **/
#define USART0_US_FIDI_LON_MODE			MMIO32(USART0_BASE + 0x40)
/** USART0_US_NER Number of Errors Register **/
#define USART0_US_NER			MMIO32(USART0_BASE + 0x44)
/** USART0_US_IF IrDA Filter Register **/
#define USART0_US_IF			MMIO32(USART0_BASE + 0x4c)
/** USART0_US_MAN Manchester Configuration Register **/
#define USART0_US_MAN			MMIO32(USART0_BASE + 0x50)
/** USART0_US_LINMR LIN Mode Register **/
#define USART0_US_LINMR			MMIO32(USART0_BASE + 0x54)
/** USART0_US_LINIR LIN Identifier Register **/
#define USART0_US_LINIR			MMIO32(USART0_BASE + 0x58)
/** USART0_US_LINBRR LIN Baud Rate Register **/
#define USART0_US_LINBRR			MMIO32(USART0_BASE + 0x5c)
/** USART0_US_LONMR LON Mode Register **/
#define USART0_US_LONMR			MMIO32(USART0_BASE + 0x60)
/** USART0_US_LONPR LON Preamble Register **/
#define USART0_US_LONPR			MMIO32(USART0_BASE + 0x64)
/** USART0_US_LONDL LON Data Length Register **/
#define USART0_US_LONDL			MMIO32(USART0_BASE + 0x68)
/** USART0_US_LONL2HDR LON L2HDR Register **/
#define USART0_US_LONL2HDR			MMIO32(USART0_BASE + 0x6c)
/** USART0_US_LONBL LON Backlog Register **/
#define USART0_US_LONBL			MMIO32(USART0_BASE + 0x70)
/** USART0_US_LONB1TX LON Beta1 Tx Register **/
#define USART0_US_LONB1TX			MMIO32(USART0_BASE + 0x74)
/** USART0_US_LONB1RX LON Beta1 Rx Register **/
#define USART0_US_LONB1RX			MMIO32(USART0_BASE + 0x78)
/** USART0_US_LONPRIO LON Priority Register **/
#define USART0_US_LONPRIO			MMIO32(USART0_BASE + 0x7c)
/** USART0_US_IDTTX LON IDT Tx Register **/
#define USART0_US_IDTTX			MMIO32(USART0_BASE + 0x80)
/** USART0_US_IDTRX LON IDT Rx Register **/
#define USART0_US_IDTRX			MMIO32(USART0_BASE + 0x84)
/** USART0_US_ICDIFF IC DIFF Register **/
#define USART0_US_ICDIFF			MMIO32(USART0_BASE + 0x88)
/** USART0_US_WPMR Write Protection Mode Register **/
#define USART0_US_WPMR			MMIO32(USART0_BASE + 0xe4)
/** USART0_US_WPSR Write Protection Status Register **/
#define USART0_US_WPSR			MMIO32(USART0_BASE + 0xe8)

/**@}*/


/** @defgroup usart0_us_cr_usart_mode USCRUSARTMODE Control Register
@{*/

/** USART0_US_CR_USART_MODE_RTSDIS Request to Send Disable **/
#define USART0_US_CR_USART_MODE_RTSDIS		(1 << 19)
/** USART0_US_CR_USART_MODE_RTSEN Request to Send Enable **/
#define USART0_US_CR_USART_MODE_RTSEN		(1 << 18)
/** USART0_US_CR_USART_MODE_DTRDIS Data Terminal Ready Disable **/
#define USART0_US_CR_USART_MODE_DTRDIS		(1 << 17)
/** USART0_US_CR_USART_MODE_DTREN Data Terminal Ready Enable **/
#define USART0_US_CR_USART_MODE_DTREN		(1 << 16)
/** USART0_US_CR_USART_MODE_RETTO Start Timeout Immediately **/
#define USART0_US_CR_USART_MODE_RETTO		(1 << 15)
/** USART0_US_CR_USART_MODE_RSTNACK Reset Non Acknowledge **/
#define USART0_US_CR_USART_MODE_RSTNACK		(1 << 14)
/** USART0_US_CR_USART_MODE_RSTIT Reset Iterations **/
#define USART0_US_CR_USART_MODE_RSTIT		(1 << 13)
/** USART0_US_CR_USART_MODE_SENDA Send Address **/
#define USART0_US_CR_USART_MODE_SENDA		(1 << 12)
/** USART0_US_CR_USART_MODE_STTTO Clear TIMEOUT Flag and Start Timeout After Next Character Received **/
#define USART0_US_CR_USART_MODE_STTTO		(1 << 11)
/** USART0_US_CR_USART_MODE_STPBRK Stop Break **/
#define USART0_US_CR_USART_MODE_STPBRK		(1 << 10)
/** USART0_US_CR_USART_MODE_STTBRK Start Break **/
#define USART0_US_CR_USART_MODE_STTBRK		(1 << 9)
/** USART0_US_CR_USART_MODE_RSTSTA Reset Status Bits **/
#define USART0_US_CR_USART_MODE_RSTSTA		(1 << 8)
/** USART0_US_CR_USART_MODE_TXDIS Transmitter Disable **/
#define USART0_US_CR_USART_MODE_TXDIS		(1 << 7)
/** USART0_US_CR_USART_MODE_TXEN Transmitter Enable **/
#define USART0_US_CR_USART_MODE_TXEN		(1 << 6)
/** USART0_US_CR_USART_MODE_RXDIS Receiver Disable **/
#define USART0_US_CR_USART_MODE_RXDIS		(1 << 5)
/** USART0_US_CR_USART_MODE_RXEN Receiver Enable **/
#define USART0_US_CR_USART_MODE_RXEN		(1 << 4)
/** USART0_US_CR_USART_MODE_RSTTX Reset Transmitter **/
#define USART0_US_CR_USART_MODE_RSTTX		(1 << 3)
/** USART0_US_CR_USART_MODE_RSTRX Reset Receiver **/
#define USART0_US_CR_USART_MODE_RSTRX		(1 << 2)

/**@}*/

/** @defgroup usart0_us_cr_spi_mode USCRSPIMODE Control Register
@{*/

/** USART0_US_CR_SPI_MODE_RCS Release SPI Chip Select **/
#define USART0_US_CR_SPI_MODE_RCS		(1 << 19)
/** USART0_US_CR_SPI_MODE_FCS Force SPI Chip Select **/
#define USART0_US_CR_SPI_MODE_FCS		(1 << 18)
/** USART0_US_CR_SPI_MODE_RSTSTA Reset Status Bits **/
#define USART0_US_CR_SPI_MODE_RSTSTA		(1 << 8)
/** USART0_US_CR_SPI_MODE_TXDIS Transmitter Disable **/
#define USART0_US_CR_SPI_MODE_TXDIS		(1 << 7)
/** USART0_US_CR_SPI_MODE_TXEN Transmitter Enable **/
#define USART0_US_CR_SPI_MODE_TXEN		(1 << 6)
/** USART0_US_CR_SPI_MODE_RXDIS Receiver Disable **/
#define USART0_US_CR_SPI_MODE_RXDIS		(1 << 5)
/** USART0_US_CR_SPI_MODE_RXEN Receiver Enable **/
#define USART0_US_CR_SPI_MODE_RXEN		(1 << 4)
/** USART0_US_CR_SPI_MODE_RSTTX Reset Transmitter **/
#define USART0_US_CR_SPI_MODE_RSTTX		(1 << 3)
/** USART0_US_CR_SPI_MODE_RSTRX Reset Receiver **/
#define USART0_US_CR_SPI_MODE_RSTRX		(1 << 2)

/**@}*/

/** @defgroup usart0_us_cr_lin_mode USCRLINMODE Control Register
@{*/

/** USART0_US_CR_LIN_MODE_LINWKUP Send LIN Wakeup Signal **/
#define USART0_US_CR_LIN_MODE_LINWKUP		(1 << 21)
/** USART0_US_CR_LIN_MODE_LINABT Abort LIN Transmission **/
#define USART0_US_CR_LIN_MODE_LINABT		(1 << 20)
/** USART0_US_CR_LIN_MODE_RSTSTA Reset Status Bits **/
#define USART0_US_CR_LIN_MODE_RSTSTA		(1 << 8)
/** USART0_US_CR_LIN_MODE_TXDIS Transmitter Disable **/
#define USART0_US_CR_LIN_MODE_TXDIS		(1 << 7)
/** USART0_US_CR_LIN_MODE_TXEN Transmitter Enable **/
#define USART0_US_CR_LIN_MODE_TXEN		(1 << 6)
/** USART0_US_CR_LIN_MODE_RXDIS Receiver Disable **/
#define USART0_US_CR_LIN_MODE_RXDIS		(1 << 5)
/** USART0_US_CR_LIN_MODE_RXEN Receiver Enable **/
#define USART0_US_CR_LIN_MODE_RXEN		(1 << 4)
/** USART0_US_CR_LIN_MODE_RSTTX Reset Transmitter **/
#define USART0_US_CR_LIN_MODE_RSTTX		(1 << 3)
/** USART0_US_CR_LIN_MODE_RSTRX Reset Receiver **/
#define USART0_US_CR_LIN_MODE_RSTRX		(1 << 2)

/**@}*/

/** @defgroup usart0_us_mr_usart_mode USMRUSARTMODE Mode Register
@{*/

/** USART0_US_MR_USART_MODE_ONEBIT Start Frame Delimiter Selector **/
#define USART0_US_MR_USART_MODE_ONEBIT		(1 << 31)
/** USART0_US_MR_USART_MODE_MODSYNC Manchester Synchronization Mode **/
#define USART0_US_MR_USART_MODE_MODSYNC		(1 << 30)
/** USART0_US_MR_USART_MODE_MAN Manchester Encoder/Decoder Enable **/
#define USART0_US_MR_USART_MODE_MAN		(1 << 29)
/** USART0_US_MR_USART_MODE_FILTER Receive Line Filter **/
#define USART0_US_MR_USART_MODE_FILTER		(1 << 28)

#define USART0_US_MR_USART_MODE_MAX_ITERATION_SHIFT		24
#define USART0_US_MR_USART_MODE_MAX_ITERATION_MASK		0x07
/** @defgroup usart0_us_mr_usart_mode_max_iteration MAXITERATION Maximum Number of Automatic Iteration
@{*/
/**@}*/

/** USART0_US_MR_USART_MODE_INVDATA Inverted Data **/
#define USART0_US_MR_USART_MODE_INVDATA		(1 << 23)
/** USART0_US_MR_USART_MODE_VAR_SYNC Variable Synchronization of Command/Data Sync Start Frame Delimiter **/
#define USART0_US_MR_USART_MODE_VAR_SYNC		(1 << 22)
/** USART0_US_MR_USART_MODE_DSNACK Disable Successive NACK **/
#define USART0_US_MR_USART_MODE_DSNACK		(1 << 21)
/** USART0_US_MR_USART_MODE_INACK Inhibit Non Acknowledge **/
#define USART0_US_MR_USART_MODE_INACK		(1 << 20)
/** USART0_US_MR_USART_MODE_OVER Oversampling Mode **/
#define USART0_US_MR_USART_MODE_OVER		(1 << 19)
/** USART0_US_MR_USART_MODE_CLKO Clock Output Select **/
#define USART0_US_MR_USART_MODE_CLKO		(1 << 18)
/** USART0_US_MR_USART_MODE_MODE9 9-bit Character Length **/
#define USART0_US_MR_USART_MODE_MODE9		(1 << 17)
/** USART0_US_MR_USART_MODE_MSBF Bit Order **/
#define USART0_US_MR_USART_MODE_MSBF		(1 << 16)

#define USART0_US_MR_USART_MODE_CHMODE_SHIFT		14
#define USART0_US_MR_USART_MODE_CHMODE_MASK		0x03
/** @defgroup usart0_us_mr_usart_mode_chmode CHMODE Channel Mode
@{*/
/**@}*/


#define USART0_US_MR_USART_MODE_NBSTOP_SHIFT		12
#define USART0_US_MR_USART_MODE_NBSTOP_MASK		0x03
/** @defgroup usart0_us_mr_usart_mode_nbstop NBSTOP Number of Stop Bits
@{*/
/**@}*/


#define USART0_US_MR_USART_MODE_PAR_SHIFT		9
#define USART0_US_MR_USART_MODE_PAR_MASK		0x07
/** @defgroup usart0_us_mr_usart_mode_par PAR Parity Type
@{*/
/**@}*/

/** USART0_US_MR_USART_MODE_SYNC Synchronous Mode Select **/
#define USART0_US_MR_USART_MODE_SYNC		(1 << 8)

#define USART0_US_MR_USART_MODE_CHRL_SHIFT		6
#define USART0_US_MR_USART_MODE_CHRL_MASK		0x03
/** @defgroup usart0_us_mr_usart_mode_chrl CHRL Character Length
@{*/
/**@}*/


#define USART0_US_MR_USART_MODE_USCLKS_SHIFT		4
#define USART0_US_MR_USART_MODE_USCLKS_MASK		0x03
/** @defgroup usart0_us_mr_usart_mode_usclks USCLKS Clock Selection
@{*/
/**@}*/


#define USART0_US_MR_USART_MODE_USART_MODE_SHIFT		0
#define USART0_US_MR_USART_MODE_USART_MODE_MASK		0x0f
/** @defgroup usart0_us_mr_usart_mode_usart_mode USARTMODE USART Mode of Operation
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_mr_spi_mode USMRSPIMODE Mode Register
@{*/

/** USART0_US_MR_SPI_MODE_WRDBT Wait Read Data Before Transfer **/
#define USART0_US_MR_SPI_MODE_WRDBT		(1 << 20)
/** USART0_US_MR_SPI_MODE_CLKO Clock Output Select **/
#define USART0_US_MR_SPI_MODE_CLKO		(1 << 18)
/** USART0_US_MR_SPI_MODE_CPOL SPI Clock Polarity **/
#define USART0_US_MR_SPI_MODE_CPOL		(1 << 16)
/** USART0_US_MR_SPI_MODE_CPHA SPI Clock Phase **/
#define USART0_US_MR_SPI_MODE_CPHA		(1 << 8)

#define USART0_US_MR_SPI_MODE_CHRL_SHIFT		6
#define USART0_US_MR_SPI_MODE_CHRL_MASK		0x03
/** @defgroup usart0_us_mr_spi_mode_chrl CHRL Character Length
@{*/
/**@}*/


#define USART0_US_MR_SPI_MODE_USCLKS_SHIFT		4
#define USART0_US_MR_SPI_MODE_USCLKS_MASK		0x03
/** @defgroup usart0_us_mr_spi_mode_usclks USCLKS Clock Selection
@{*/
/**@}*/


#define USART0_US_MR_SPI_MODE_USART_MODE_SHIFT		0
#define USART0_US_MR_SPI_MODE_USART_MODE_MASK		0x0f
/** @defgroup usart0_us_mr_spi_mode_usart_mode USARTMODE USART Mode of Operation
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_ier_usart_mode USIERUSARTMODE Interrupt Enable Register
@{*/

/** USART0_US_IER_USART_MODE_MANE Manchester Error Interrupt Enable **/
#define USART0_US_IER_USART_MODE_MANE		(1 << 24)
/** USART0_US_IER_USART_MODE_CTSIC Clear to Send Input Change Interrupt Enable **/
#define USART0_US_IER_USART_MODE_CTSIC		(1 << 19)
/** USART0_US_IER_USART_MODE_DCDIC Data Carrier Detect Input Change Interrupt Enable **/
#define USART0_US_IER_USART_MODE_DCDIC		(1 << 18)
/** USART0_US_IER_USART_MODE_DSRIC Data Set Ready Input Change Enable **/
#define USART0_US_IER_USART_MODE_DSRIC		(1 << 17)
/** USART0_US_IER_USART_MODE_RIIC Ring Indicator Input Change Enable **/
#define USART0_US_IER_USART_MODE_RIIC		(1 << 16)
/** USART0_US_IER_USART_MODE_NACK Non Acknowledge Interrupt Enable **/
#define USART0_US_IER_USART_MODE_NACK		(1 << 13)
/** USART0_US_IER_USART_MODE_ITER Max number of Repetitions Reached Interrupt Enable **/
#define USART0_US_IER_USART_MODE_ITER		(1 << 10)
/** USART0_US_IER_USART_MODE_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART0_US_IER_USART_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IER_USART_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART0_US_IER_USART_MODE_OVRE		(1 << 5)
/** USART0_US_IER_USART_MODE_RXBRK Receiver Break Interrupt Enable **/
#define USART0_US_IER_USART_MODE_RXBRK		(1 << 2)
/** USART0_US_IER_USART_MODE_TXRDY TXRDY Interrupt Enable **/
#define USART0_US_IER_USART_MODE_TXRDY		(1 << 1)
/** USART0_US_IER_USART_MODE_RXRDY RXRDY Interrupt Enable **/
#define USART0_US_IER_USART_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_ier_usart_lin_mode USIERUSARTLINMODE Interrupt Enable Register
@{*/

/** USART0_US_IER_USART_LIN_MODE_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART0_US_IER_USART_LIN_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IER_USART_LIN_MODE_TIMEOUT Timeout Interrupt Enable **/
#define USART0_US_IER_USART_LIN_MODE_TIMEOUT		(1 << 8)
/** USART0_US_IER_USART_LIN_MODE_PARE Parity Error Interrupt Enable **/
#define USART0_US_IER_USART_LIN_MODE_PARE		(1 << 7)
/** USART0_US_IER_USART_LIN_MODE_FRAME Framing Error Interrupt Enable **/
#define USART0_US_IER_USART_LIN_MODE_FRAME		(1 << 6)
/** USART0_US_IER_USART_LIN_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART0_US_IER_USART_LIN_MODE_OVRE		(1 << 5)
/** USART0_US_IER_USART_LIN_MODE_TXRDY TXRDY Interrupt Enable **/
#define USART0_US_IER_USART_LIN_MODE_TXRDY		(1 << 1)
/** USART0_US_IER_USART_LIN_MODE_RXRDY RXRDY Interrupt Enable **/
#define USART0_US_IER_USART_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_ier_spi_mode USIERSPIMODE Interrupt Enable Register
@{*/

/** USART0_US_IER_SPI_MODE_NSSE NSS Line (Driving CTS Pin) Rising or Falling Edge Event **/
#define USART0_US_IER_SPI_MODE_NSSE		(1 << 19)
/** USART0_US_IER_SPI_MODE_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART0_US_IER_SPI_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IER_SPI_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART0_US_IER_SPI_MODE_OVRE		(1 << 5)
/** USART0_US_IER_SPI_MODE_TXRDY TXRDY Interrupt Enable **/
#define USART0_US_IER_SPI_MODE_TXRDY		(1 << 1)
/** USART0_US_IER_SPI_MODE_RXRDY RXRDY Interrupt Enable **/
#define USART0_US_IER_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_ier_lin_mode USIERLINMODE Interrupt Enable Register
@{*/

/** USART0_US_IER_LIN_MODE_LINHTE LIN Header Timeout Error Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_LINHTE		(1 << 31)
/** USART0_US_IER_LIN_MODE_LINSTE LIN Synch Tolerance Error Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_LINSTE		(1 << 30)
/** USART0_US_IER_LIN_MODE_LINSNRE LIN Slave Not Responding Error Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_LINSNRE		(1 << 29)
/** USART0_US_IER_LIN_MODE_LINCE LIN Checksum Error Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_LINCE		(1 << 28)
/** USART0_US_IER_LIN_MODE_LINIPE LIN Identifier Parity Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_LINIPE		(1 << 27)
/** USART0_US_IER_LIN_MODE_LINISFE LIN Inconsistent Synch Field Error Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_LINISFE		(1 << 26)
/** USART0_US_IER_LIN_MODE_LINBE LIN Bus Error Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_LINBE		(1 << 25)
/** USART0_US_IER_LIN_MODE_LINTC LIN Transfer Completed Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_LINTC		(1 << 15)
/** USART0_US_IER_LIN_MODE_LINID LIN Identifier Sent or LIN Identifier Received Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_LINID		(1 << 14)
/** USART0_US_IER_LIN_MODE_LINBK LIN Break Sent or LIN Break Received Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_LINBK		(1 << 13)
/** USART0_US_IER_LIN_MODE_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IER_LIN_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_OVRE		(1 << 5)
/** USART0_US_IER_LIN_MODE_TXRDY TXRDY Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_TXRDY		(1 << 1)
/** USART0_US_IER_LIN_MODE_RXRDY RXRDY Interrupt Enable **/
#define USART0_US_IER_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_ier_lon_mode USIERLONMODE Interrupt Enable Register
@{*/

/** USART0_US_IER_LON_MODE_LBLOVFE LON Backlog Overflow Error Interrupt Enable **/
#define USART0_US_IER_LON_MODE_LBLOVFE		(1 << 28)
/** USART0_US_IER_LON_MODE_LRXD LON Reception Done Interrupt Enable **/
#define USART0_US_IER_LON_MODE_LRXD		(1 << 27)
/** USART0_US_IER_LON_MODE_LFET LON Frame Early Termination Interrupt Enable **/
#define USART0_US_IER_LON_MODE_LFET		(1 << 26)
/** USART0_US_IER_LON_MODE_LCOL LON Collision Interrupt Enable **/
#define USART0_US_IER_LON_MODE_LCOL		(1 << 25)
/** USART0_US_IER_LON_MODE_LTXD LON Transmission Done Interrupt Enable **/
#define USART0_US_IER_LON_MODE_LTXD		(1 << 24)
/** USART0_US_IER_LON_MODE_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART0_US_IER_LON_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IER_LON_MODE_LCRCE LON CRC Error Interrupt Enable **/
#define USART0_US_IER_LON_MODE_LCRCE		(1 << 7)
/** USART0_US_IER_LON_MODE_LSFE LON Short Frame Error Interrupt Enable **/
#define USART0_US_IER_LON_MODE_LSFE		(1 << 6)
/** USART0_US_IER_LON_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART0_US_IER_LON_MODE_OVRE		(1 << 5)
/** USART0_US_IER_LON_MODE_TXRDY TXRDY Interrupt Enable **/
#define USART0_US_IER_LON_MODE_TXRDY		(1 << 1)
/** USART0_US_IER_LON_MODE_RXRDY RXRDY Interrupt Enable **/
#define USART0_US_IER_LON_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_ier_lon_spi_mode USIERLONSPIMODE Interrupt Enable Register
@{*/

/** USART0_US_IER_LON_SPI_MODE_UNRE Underrun Error Interrupt Enable **/
#define USART0_US_IER_LON_SPI_MODE_UNRE		(1 << 10)
/** USART0_US_IER_LON_SPI_MODE_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART0_US_IER_LON_SPI_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IER_LON_SPI_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART0_US_IER_LON_SPI_MODE_OVRE		(1 << 5)
/** USART0_US_IER_LON_SPI_MODE_TXRDY TXRDY Interrupt Enable **/
#define USART0_US_IER_LON_SPI_MODE_TXRDY		(1 << 1)
/** USART0_US_IER_LON_SPI_MODE_RXRDY RXRDY Interrupt Enable **/
#define USART0_US_IER_LON_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_idr_usart_mode USIDRUSARTMODE Interrupt Disable Register
@{*/

/** USART0_US_IDR_USART_MODE_MANE Manchester Error Interrupt Disable **/
#define USART0_US_IDR_USART_MODE_MANE		(1 << 24)
/** USART0_US_IDR_USART_MODE_CTSIC Clear to Send Input Change Interrupt Disable **/
#define USART0_US_IDR_USART_MODE_CTSIC		(1 << 19)
/** USART0_US_IDR_USART_MODE_DCDIC Data Carrier Detect Input Change Interrupt Disable **/
#define USART0_US_IDR_USART_MODE_DCDIC		(1 << 18)
/** USART0_US_IDR_USART_MODE_DSRIC Data Set Ready Input Change Disable **/
#define USART0_US_IDR_USART_MODE_DSRIC		(1 << 17)
/** USART0_US_IDR_USART_MODE_RIIC Ring Indicator Input Change Disable **/
#define USART0_US_IDR_USART_MODE_RIIC		(1 << 16)
/** USART0_US_IDR_USART_MODE_NACK Non Acknowledge Interrupt Disable **/
#define USART0_US_IDR_USART_MODE_NACK		(1 << 13)
/** USART0_US_IDR_USART_MODE_ITER Max Number of Repetitions Reached Interrupt Disable **/
#define USART0_US_IDR_USART_MODE_ITER		(1 << 10)
/** USART0_US_IDR_USART_MODE_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART0_US_IDR_USART_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IDR_USART_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART0_US_IDR_USART_MODE_OVRE		(1 << 5)
/** USART0_US_IDR_USART_MODE_RXBRK Receiver Break Interrupt Disable **/
#define USART0_US_IDR_USART_MODE_RXBRK		(1 << 2)
/** USART0_US_IDR_USART_MODE_TXRDY TXRDY Interrupt Disable **/
#define USART0_US_IDR_USART_MODE_TXRDY		(1 << 1)
/** USART0_US_IDR_USART_MODE_RXRDY RXRDY Interrupt Disable **/
#define USART0_US_IDR_USART_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_idr_usart_lin_mode USIDRUSARTLINMODE Interrupt Disable Register
@{*/

/** USART0_US_IDR_USART_LIN_MODE_DCDIC Data Carrier Detect Input Change Interrupt Disable **/
#define USART0_US_IDR_USART_LIN_MODE_DCDIC		(1 << 18)
/** USART0_US_IDR_USART_LIN_MODE_DSRIC Data Set Ready Input Change Disable **/
#define USART0_US_IDR_USART_LIN_MODE_DSRIC		(1 << 17)
/** USART0_US_IDR_USART_LIN_MODE_RIIC Ring Indicator Input Change Disable **/
#define USART0_US_IDR_USART_LIN_MODE_RIIC		(1 << 16)
/** USART0_US_IDR_USART_LIN_MODE_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART0_US_IDR_USART_LIN_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IDR_USART_LIN_MODE_TIMEOUT Timeout Interrupt Disable **/
#define USART0_US_IDR_USART_LIN_MODE_TIMEOUT		(1 << 8)
/** USART0_US_IDR_USART_LIN_MODE_PARE Parity Error Interrupt Disable **/
#define USART0_US_IDR_USART_LIN_MODE_PARE		(1 << 7)
/** USART0_US_IDR_USART_LIN_MODE_FRAME Framing Error Interrupt Disable **/
#define USART0_US_IDR_USART_LIN_MODE_FRAME		(1 << 6)
/** USART0_US_IDR_USART_LIN_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART0_US_IDR_USART_LIN_MODE_OVRE		(1 << 5)
/** USART0_US_IDR_USART_LIN_MODE_TXRDY TXRDY Interrupt Disable **/
#define USART0_US_IDR_USART_LIN_MODE_TXRDY		(1 << 1)
/** USART0_US_IDR_USART_LIN_MODE_RXRDY RXRDY Interrupt Disable **/
#define USART0_US_IDR_USART_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_idr_spi_mode USIDRSPIMODE Interrupt Disable Register
@{*/

/** USART0_US_IDR_SPI_MODE_NSSE NSS Line (Driving CTS Pin) Rising or Falling Edge Event **/
#define USART0_US_IDR_SPI_MODE_NSSE		(1 << 19)
/** USART0_US_IDR_SPI_MODE_DCDIC Data Carrier Detect Input Change Interrupt Disable **/
#define USART0_US_IDR_SPI_MODE_DCDIC		(1 << 18)
/** USART0_US_IDR_SPI_MODE_DSRIC Data Set Ready Input Change Disable **/
#define USART0_US_IDR_SPI_MODE_DSRIC		(1 << 17)
/** USART0_US_IDR_SPI_MODE_RIIC Ring Indicator Input Change Disable **/
#define USART0_US_IDR_SPI_MODE_RIIC		(1 << 16)
/** USART0_US_IDR_SPI_MODE_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART0_US_IDR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IDR_SPI_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART0_US_IDR_SPI_MODE_OVRE		(1 << 5)
/** USART0_US_IDR_SPI_MODE_TXRDY TXRDY Interrupt Disable **/
#define USART0_US_IDR_SPI_MODE_TXRDY		(1 << 1)
/** USART0_US_IDR_SPI_MODE_RXRDY RXRDY Interrupt Disable **/
#define USART0_US_IDR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_idr_lin_mode USIDRLINMODE Interrupt Disable Register
@{*/

/** USART0_US_IDR_LIN_MODE_LINHTE LIN Header Timeout Error Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_LINHTE		(1 << 31)
/** USART0_US_IDR_LIN_MODE_LINSTE LIN Synch Tolerance Error Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_LINSTE		(1 << 30)
/** USART0_US_IDR_LIN_MODE_LINSNRE LIN Slave Not Responding Error Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_LINSNRE		(1 << 29)
/** USART0_US_IDR_LIN_MODE_LINCE LIN Checksum Error Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_LINCE		(1 << 28)
/** USART0_US_IDR_LIN_MODE_LINIPE LIN Identifier Parity Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_LINIPE		(1 << 27)
/** USART0_US_IDR_LIN_MODE_LINISFE LIN Inconsistent Synch Field Error Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_LINISFE		(1 << 26)
/** USART0_US_IDR_LIN_MODE_LINBE LIN Bus Error Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_LINBE		(1 << 25)
/** USART0_US_IDR_LIN_MODE_DCDIC Data Carrier Detect Input Change Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_DCDIC		(1 << 18)
/** USART0_US_IDR_LIN_MODE_DSRIC Data Set Ready Input Change Disable **/
#define USART0_US_IDR_LIN_MODE_DSRIC		(1 << 17)
/** USART0_US_IDR_LIN_MODE_RIIC Ring Indicator Input Change Disable **/
#define USART0_US_IDR_LIN_MODE_RIIC		(1 << 16)
/** USART0_US_IDR_LIN_MODE_LINTC LIN Transfer Completed Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_LINTC		(1 << 15)
/** USART0_US_IDR_LIN_MODE_LINID LIN Identifier Sent or LIN Identifier Received Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_LINID		(1 << 14)
/** USART0_US_IDR_LIN_MODE_LINBK LIN Break Sent or LIN Break Received Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_LINBK		(1 << 13)
/** USART0_US_IDR_LIN_MODE_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IDR_LIN_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART0_US_IDR_LIN_MODE_OVRE		(1 << 5)
/** USART0_US_IDR_LIN_MODE_TXRDY TXRDY Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_TXRDY		(1 << 1)
/** USART0_US_IDR_LIN_MODE_RXRDY RXRDY Interrupt Disable **/
#define USART0_US_IDR_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_idr_lon_mode USIDRLONMODE Interrupt Disable Register
@{*/

/** USART0_US_IDR_LON_MODE_LBLOVFE LON Backlog Overflow Error Interrupt Disable **/
#define USART0_US_IDR_LON_MODE_LBLOVFE		(1 << 28)
/** USART0_US_IDR_LON_MODE_LRXD LON Reception Done Interrupt Disable **/
#define USART0_US_IDR_LON_MODE_LRXD		(1 << 27)
/** USART0_US_IDR_LON_MODE_LFET LON Frame Early Termination Interrupt Disable **/
#define USART0_US_IDR_LON_MODE_LFET		(1 << 26)
/** USART0_US_IDR_LON_MODE_LCOL LON Collision Interrupt Disable **/
#define USART0_US_IDR_LON_MODE_LCOL		(1 << 25)
/** USART0_US_IDR_LON_MODE_LTXD LON Transmission Done Interrupt Disable **/
#define USART0_US_IDR_LON_MODE_LTXD		(1 << 24)
/** USART0_US_IDR_LON_MODE_DCDIC Data Carrier Detect Input Change Interrupt Disable **/
#define USART0_US_IDR_LON_MODE_DCDIC		(1 << 18)
/** USART0_US_IDR_LON_MODE_DSRIC Data Set Ready Input Change Disable **/
#define USART0_US_IDR_LON_MODE_DSRIC		(1 << 17)
/** USART0_US_IDR_LON_MODE_RIIC Ring Indicator Input Change Disable **/
#define USART0_US_IDR_LON_MODE_RIIC		(1 << 16)
/** USART0_US_IDR_LON_MODE_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART0_US_IDR_LON_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IDR_LON_MODE_LCRCE LON CRC Error Interrupt Disable **/
#define USART0_US_IDR_LON_MODE_LCRCE		(1 << 7)
/** USART0_US_IDR_LON_MODE_LSFE LON Short Frame Error Interrupt Disable **/
#define USART0_US_IDR_LON_MODE_LSFE		(1 << 6)
/** USART0_US_IDR_LON_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART0_US_IDR_LON_MODE_OVRE		(1 << 5)
/** USART0_US_IDR_LON_MODE_TXRDY TXRDY Interrupt Disable **/
#define USART0_US_IDR_LON_MODE_TXRDY		(1 << 1)
/** USART0_US_IDR_LON_MODE_RXRDY RXRDY Interrupt Disable **/
#define USART0_US_IDR_LON_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_idr_lon_spi_mode USIDRLONSPIMODE Interrupt Disable Register
@{*/

/** USART0_US_IDR_LON_SPI_MODE_DCDIC Data Carrier Detect Input Change Interrupt Disable **/
#define USART0_US_IDR_LON_SPI_MODE_DCDIC		(1 << 18)
/** USART0_US_IDR_LON_SPI_MODE_DSRIC Data Set Ready Input Change Disable **/
#define USART0_US_IDR_LON_SPI_MODE_DSRIC		(1 << 17)
/** USART0_US_IDR_LON_SPI_MODE_RIIC Ring Indicator Input Change Disable **/
#define USART0_US_IDR_LON_SPI_MODE_RIIC		(1 << 16)
/** USART0_US_IDR_LON_SPI_MODE_UNRE SPI Underrun Error Interrupt Disable **/
#define USART0_US_IDR_LON_SPI_MODE_UNRE		(1 << 10)
/** USART0_US_IDR_LON_SPI_MODE_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART0_US_IDR_LON_SPI_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IDR_LON_SPI_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART0_US_IDR_LON_SPI_MODE_OVRE		(1 << 5)
/** USART0_US_IDR_LON_SPI_MODE_TXRDY TXRDY Interrupt Disable **/
#define USART0_US_IDR_LON_SPI_MODE_TXRDY		(1 << 1)
/** USART0_US_IDR_LON_SPI_MODE_RXRDY RXRDY Interrupt Disable **/
#define USART0_US_IDR_LON_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_imr_usart_mode USIMRUSARTMODE Interrupt Mask Register
@{*/

/** USART0_US_IMR_USART_MODE_MANE Manchester Error Interrupt Mask **/
#define USART0_US_IMR_USART_MODE_MANE		(1 << 24)
/** USART0_US_IMR_USART_MODE_CTSIC Clear to Send Input Change Interrupt Mask **/
#define USART0_US_IMR_USART_MODE_CTSIC		(1 << 19)
/** USART0_US_IMR_USART_MODE_DCDIC Data Carrier Detect Input Change Interrupt Mask **/
#define USART0_US_IMR_USART_MODE_DCDIC		(1 << 18)
/** USART0_US_IMR_USART_MODE_DSRIC Data Set Ready Input Change Mask **/
#define USART0_US_IMR_USART_MODE_DSRIC		(1 << 17)
/** USART0_US_IMR_USART_MODE_RIIC Ring Indicator Input Change Mask **/
#define USART0_US_IMR_USART_MODE_RIIC		(1 << 16)
/** USART0_US_IMR_USART_MODE_NACK Non Acknowledge Interrupt Mask **/
#define USART0_US_IMR_USART_MODE_NACK		(1 << 13)
/** USART0_US_IMR_USART_MODE_ITER Max Number of Repetitions Reached Interrupt Mask **/
#define USART0_US_IMR_USART_MODE_ITER		(1 << 10)
/** USART0_US_IMR_USART_MODE_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART0_US_IMR_USART_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IMR_USART_MODE_OVRE Overrun Error Interrupt Mask **/
#define USART0_US_IMR_USART_MODE_OVRE		(1 << 5)
/** USART0_US_IMR_USART_MODE_RXBRK Receiver Break Interrupt Mask **/
#define USART0_US_IMR_USART_MODE_RXBRK		(1 << 2)
/** USART0_US_IMR_USART_MODE_TXRDY TXRDY Interrupt Mask **/
#define USART0_US_IMR_USART_MODE_TXRDY		(1 << 1)
/** USART0_US_IMR_USART_MODE_RXRDY RXRDY Interrupt Mask **/
#define USART0_US_IMR_USART_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_imr_usart_lin_mode USIMRUSARTLINMODE Interrupt Mask Register
@{*/

/** USART0_US_IMR_USART_LIN_MODE_DCDIC Data Carrier Detect Input Change Interrupt Mask **/
#define USART0_US_IMR_USART_LIN_MODE_DCDIC		(1 << 18)
/** USART0_US_IMR_USART_LIN_MODE_DSRIC Data Set Ready Input Change Mask **/
#define USART0_US_IMR_USART_LIN_MODE_DSRIC		(1 << 17)
/** USART0_US_IMR_USART_LIN_MODE_RIIC Ring Indicator Input Change Mask **/
#define USART0_US_IMR_USART_LIN_MODE_RIIC		(1 << 16)
/** USART0_US_IMR_USART_LIN_MODE_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART0_US_IMR_USART_LIN_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IMR_USART_LIN_MODE_TIMEOUT Timeout Interrupt Mask **/
#define USART0_US_IMR_USART_LIN_MODE_TIMEOUT		(1 << 8)
/** USART0_US_IMR_USART_LIN_MODE_PARE Parity Error Interrupt Mask **/
#define USART0_US_IMR_USART_LIN_MODE_PARE		(1 << 7)
/** USART0_US_IMR_USART_LIN_MODE_FRAME Framing Error Interrupt Mask **/
#define USART0_US_IMR_USART_LIN_MODE_FRAME		(1 << 6)
/** USART0_US_IMR_USART_LIN_MODE_OVRE Overrun Error Interrupt Mask **/
#define USART0_US_IMR_USART_LIN_MODE_OVRE		(1 << 5)
/** USART0_US_IMR_USART_LIN_MODE_TXRDY TXRDY Interrupt Mask **/
#define USART0_US_IMR_USART_LIN_MODE_TXRDY		(1 << 1)
/** USART0_US_IMR_USART_LIN_MODE_RXRDY RXRDY Interrupt Mask **/
#define USART0_US_IMR_USART_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_imr_spi_mode USIMRSPIMODE Interrupt Mask Register
@{*/

/** USART0_US_IMR_SPI_MODE_NSSE NSS Line (Driving CTS Pin) Rising or Falling Edge Event **/
#define USART0_US_IMR_SPI_MODE_NSSE		(1 << 19)
/** USART0_US_IMR_SPI_MODE_DCDIC Data Carrier Detect Input Change Interrupt Mask **/
#define USART0_US_IMR_SPI_MODE_DCDIC		(1 << 18)
/** USART0_US_IMR_SPI_MODE_DSRIC Data Set Ready Input Change Mask **/
#define USART0_US_IMR_SPI_MODE_DSRIC		(1 << 17)
/** USART0_US_IMR_SPI_MODE_RIIC Ring Indicator Input Change Mask **/
#define USART0_US_IMR_SPI_MODE_RIIC		(1 << 16)
/** USART0_US_IMR_SPI_MODE_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART0_US_IMR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IMR_SPI_MODE_OVRE Overrun Error Interrupt Mask **/
#define USART0_US_IMR_SPI_MODE_OVRE		(1 << 5)
/** USART0_US_IMR_SPI_MODE_TXRDY TXRDY Interrupt Mask **/
#define USART0_US_IMR_SPI_MODE_TXRDY		(1 << 1)
/** USART0_US_IMR_SPI_MODE_RXRDY RXRDY Interrupt Mask **/
#define USART0_US_IMR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_imr_lin_mode USIMRLINMODE Interrupt Mask Register
@{*/

/** USART0_US_IMR_LIN_MODE_LINHTE LIN Header Timeout Error Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_LINHTE		(1 << 31)
/** USART0_US_IMR_LIN_MODE_LINSTE LIN Synch Tolerance Error Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_LINSTE		(1 << 30)
/** USART0_US_IMR_LIN_MODE_LINSNRE LIN Slave Not Responding Error Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_LINSNRE		(1 << 29)
/** USART0_US_IMR_LIN_MODE_LINCE LIN Checksum Error Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_LINCE		(1 << 28)
/** USART0_US_IMR_LIN_MODE_LINIPE LIN Identifier Parity Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_LINIPE		(1 << 27)
/** USART0_US_IMR_LIN_MODE_LINISFE LIN Inconsistent Synch Field Error Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_LINISFE		(1 << 26)
/** USART0_US_IMR_LIN_MODE_LINBE LIN Bus Error Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_LINBE		(1 << 25)
/** USART0_US_IMR_LIN_MODE_DCDIC Data Carrier Detect Input Change Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_DCDIC		(1 << 18)
/** USART0_US_IMR_LIN_MODE_DSRIC Data Set Ready Input Change Mask **/
#define USART0_US_IMR_LIN_MODE_DSRIC		(1 << 17)
/** USART0_US_IMR_LIN_MODE_RIIC Ring Indicator Input Change Mask **/
#define USART0_US_IMR_LIN_MODE_RIIC		(1 << 16)
/** USART0_US_IMR_LIN_MODE_LINTC LIN Transfer Completed Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_LINTC		(1 << 15)
/** USART0_US_IMR_LIN_MODE_LINID LIN Identifier Sent or LIN Identifier Received Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_LINID		(1 << 14)
/** USART0_US_IMR_LIN_MODE_LINBK LIN Break Sent or LIN Break Received Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_LINBK		(1 << 13)
/** USART0_US_IMR_LIN_MODE_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IMR_LIN_MODE_OVRE Overrun Error Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_OVRE		(1 << 5)
/** USART0_US_IMR_LIN_MODE_TXRDY TXRDY Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_TXRDY		(1 << 1)
/** USART0_US_IMR_LIN_MODE_RXRDY RXRDY Interrupt Mask **/
#define USART0_US_IMR_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_imr_lon_mode USIMRLONMODE Interrupt Mask Register
@{*/

/** USART0_US_IMR_LON_MODE_LBLOVFE LON Backlog Overflow Error Interrupt Mask **/
#define USART0_US_IMR_LON_MODE_LBLOVFE		(1 << 28)
/** USART0_US_IMR_LON_MODE_LRXD LON Reception Done Interrupt Mask **/
#define USART0_US_IMR_LON_MODE_LRXD		(1 << 27)
/** USART0_US_IMR_LON_MODE_LFET LON Frame Early Termination Interrupt Mask **/
#define USART0_US_IMR_LON_MODE_LFET		(1 << 26)
/** USART0_US_IMR_LON_MODE_LCOL LON Collision Interrupt Mask **/
#define USART0_US_IMR_LON_MODE_LCOL		(1 << 25)
/** USART0_US_IMR_LON_MODE_LTXD LON Transmission Done Interrupt Mask **/
#define USART0_US_IMR_LON_MODE_LTXD		(1 << 24)
/** USART0_US_IMR_LON_MODE_DCDIC Data Carrier Detect Input Change Interrupt Mask **/
#define USART0_US_IMR_LON_MODE_DCDIC		(1 << 18)
/** USART0_US_IMR_LON_MODE_DSRIC Data Set Ready Input Change Mask **/
#define USART0_US_IMR_LON_MODE_DSRIC		(1 << 17)
/** USART0_US_IMR_LON_MODE_RIIC Ring Indicator Input Change Mask **/
#define USART0_US_IMR_LON_MODE_RIIC		(1 << 16)
/** USART0_US_IMR_LON_MODE_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART0_US_IMR_LON_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IMR_LON_MODE_LCRCE LON CRC Error Interrupt Mask **/
#define USART0_US_IMR_LON_MODE_LCRCE		(1 << 7)
/** USART0_US_IMR_LON_MODE_LSFE LON Short Frame Error Interrupt Mask **/
#define USART0_US_IMR_LON_MODE_LSFE		(1 << 6)
/** USART0_US_IMR_LON_MODE_OVRE Overrun Error Interrupt Mask **/
#define USART0_US_IMR_LON_MODE_OVRE		(1 << 5)
/** USART0_US_IMR_LON_MODE_TXRDY TXRDY Interrupt Mask **/
#define USART0_US_IMR_LON_MODE_TXRDY		(1 << 1)
/** USART0_US_IMR_LON_MODE_RXRDY RXRDY Interrupt Mask **/
#define USART0_US_IMR_LON_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_imr_lon_spi_mode USIMRLONSPIMODE Interrupt Mask Register
@{*/

/** USART0_US_IMR_LON_SPI_MODE_DCDIC Data Carrier Detect Input Change Interrupt Mask **/
#define USART0_US_IMR_LON_SPI_MODE_DCDIC		(1 << 18)
/** USART0_US_IMR_LON_SPI_MODE_DSRIC Data Set Ready Input Change Mask **/
#define USART0_US_IMR_LON_SPI_MODE_DSRIC		(1 << 17)
/** USART0_US_IMR_LON_SPI_MODE_RIIC Ring Indicator Input Change Mask **/
#define USART0_US_IMR_LON_SPI_MODE_RIIC		(1 << 16)
/** USART0_US_IMR_LON_SPI_MODE_UNRE SPI Underrun Error Interrupt Mask **/
#define USART0_US_IMR_LON_SPI_MODE_UNRE		(1 << 10)
/** USART0_US_IMR_LON_SPI_MODE_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART0_US_IMR_LON_SPI_MODE_TXEMPTY		(1 << 9)
/** USART0_US_IMR_LON_SPI_MODE_OVRE Overrun Error Interrupt Mask **/
#define USART0_US_IMR_LON_SPI_MODE_OVRE		(1 << 5)
/** USART0_US_IMR_LON_SPI_MODE_TXRDY TXRDY Interrupt Mask **/
#define USART0_US_IMR_LON_SPI_MODE_TXRDY		(1 << 1)
/** USART0_US_IMR_LON_SPI_MODE_RXRDY RXRDY Interrupt Mask **/
#define USART0_US_IMR_LON_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_csr_usart_mode USCSRUSARTMODE Channel Status Register
@{*/

/** USART0_US_CSR_USART_MODE_MANERR Manchester Error (cleared by writing a one to the bit US_CR.RSTSTA) **/
#define USART0_US_CSR_USART_MODE_MANERR		(1 << 24)
/** USART0_US_CSR_USART_MODE_CTS Image of CTS Input **/
#define USART0_US_CSR_USART_MODE_CTS		(1 << 23)
/** USART0_US_CSR_USART_MODE_DCD Image of DCD Input **/
#define USART0_US_CSR_USART_MODE_DCD		(1 << 22)
/** USART0_US_CSR_USART_MODE_DSR Image of DSR Input **/
#define USART0_US_CSR_USART_MODE_DSR		(1 << 21)
/** USART0_US_CSR_USART_MODE_RI Image of RI Input **/
#define USART0_US_CSR_USART_MODE_RI		(1 << 20)
/** USART0_US_CSR_USART_MODE_CTSIC Clear to Send Input Change Flag (cleared on read) **/
#define USART0_US_CSR_USART_MODE_CTSIC		(1 << 19)
/** USART0_US_CSR_USART_MODE_DCDIC Data Carrier Detect Input Change Flag (cleared on read) **/
#define USART0_US_CSR_USART_MODE_DCDIC		(1 << 18)
/** USART0_US_CSR_USART_MODE_DSRIC Data Set Ready Input Change Flag (cleared on read) **/
#define USART0_US_CSR_USART_MODE_DSRIC		(1 << 17)
/** USART0_US_CSR_USART_MODE_RIIC Ring Indicator Input Change Flag (cleared on read) **/
#define USART0_US_CSR_USART_MODE_RIIC		(1 << 16)
/** USART0_US_CSR_USART_MODE_NACK Non Acknowledge Interrupt (cleared by writing a one to bit US_CR.RSTNACK) **/
#define USART0_US_CSR_USART_MODE_NACK		(1 << 13)
/** USART0_US_CSR_USART_MODE_ITER Max Number of Repetitions Reached (cleared by writing a one to bit US_CR.RSTIT) **/
#define USART0_US_CSR_USART_MODE_ITER		(1 << 10)
/** USART0_US_CSR_USART_MODE_TXEMPTY Transmitter Empty (cleared by writing US_THR) **/
#define USART0_US_CSR_USART_MODE_TXEMPTY		(1 << 9)
/** USART0_US_CSR_USART_MODE_OVRE Overrun Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_US_CSR_USART_MODE_OVRE		(1 << 5)
/** USART0_US_CSR_USART_MODE_RXBRK Break Received/End of Break (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_US_CSR_USART_MODE_RXBRK		(1 << 2)
/** USART0_US_CSR_USART_MODE_TXRDY Transmitter Ready (cleared by writing US_THR) **/
#define USART0_US_CSR_USART_MODE_TXRDY		(1 << 1)
/** USART0_US_CSR_USART_MODE_RXRDY Receiver Ready (cleared by reading US_RHR) **/
#define USART0_US_CSR_USART_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_csr_usart_lin_mode USCSRUSARTLINMODE Channel Status Register
@{*/

/** USART0_US_CSR_USART_LIN_MODE_DCDIC Data Carrier Detect Input Change Flag (cleared on read) **/
#define USART0_US_CSR_USART_LIN_MODE_DCDIC		(1 << 18)
/** USART0_US_CSR_USART_LIN_MODE_DSRIC Data Set Ready Input Change Flag (cleared on read) **/
#define USART0_US_CSR_USART_LIN_MODE_DSRIC		(1 << 17)
/** USART0_US_CSR_USART_LIN_MODE_RIIC Ring Indicator Input Change Flag (cleared on read) **/
#define USART0_US_CSR_USART_LIN_MODE_RIIC		(1 << 16)
/** USART0_US_CSR_USART_LIN_MODE_TXEMPTY Transmitter Empty (cleared by writing US_THR) **/
#define USART0_US_CSR_USART_LIN_MODE_TXEMPTY		(1 << 9)
/** USART0_US_CSR_USART_LIN_MODE_TIMEOUT Receiver Timeout (cleared by writing a one to bit US_CR.STTTO) **/
#define USART0_US_CSR_USART_LIN_MODE_TIMEOUT		(1 << 8)
/** USART0_US_CSR_USART_LIN_MODE_PARE Parity Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_US_CSR_USART_LIN_MODE_PARE		(1 << 7)
/** USART0_US_CSR_USART_LIN_MODE_FRAME Framing Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_US_CSR_USART_LIN_MODE_FRAME		(1 << 6)
/** USART0_US_CSR_USART_LIN_MODE_OVRE Overrun Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_US_CSR_USART_LIN_MODE_OVRE		(1 << 5)
/** USART0_US_CSR_USART_LIN_MODE_TXRDY Transmitter Ready (cleared by writing US_THR) **/
#define USART0_US_CSR_USART_LIN_MODE_TXRDY		(1 << 1)
/** USART0_US_CSR_USART_LIN_MODE_RXRDY Receiver Ready (cleared by reading US_RHR) **/
#define USART0_US_CSR_USART_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_csr_spi_mode USCSRSPIMODE Channel Status Register
@{*/

/** USART0_US_CSR_SPI_MODE_NSS Image of NSS Line **/
#define USART0_US_CSR_SPI_MODE_NSS		(1 << 23)
/** USART0_US_CSR_SPI_MODE_NSSE NSS Line (Driving CTS Pin) Rising or Falling Edge Event **/
#define USART0_US_CSR_SPI_MODE_NSSE		(1 << 19)
/** USART0_US_CSR_SPI_MODE_DCDIC Data Carrier Detect Input Change Flag (cleared on read) **/
#define USART0_US_CSR_SPI_MODE_DCDIC		(1 << 18)
/** USART0_US_CSR_SPI_MODE_DSRIC Data Set Ready Input Change Flag (cleared on read) **/
#define USART0_US_CSR_SPI_MODE_DSRIC		(1 << 17)
/** USART0_US_CSR_SPI_MODE_RIIC Ring Indicator Input Change Flag (cleared on read) **/
#define USART0_US_CSR_SPI_MODE_RIIC		(1 << 16)
/** USART0_US_CSR_SPI_MODE_TXEMPTY Transmitter Empty (cleared by writing US_THR) **/
#define USART0_US_CSR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART0_US_CSR_SPI_MODE_OVRE Overrun Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_US_CSR_SPI_MODE_OVRE		(1 << 5)
/** USART0_US_CSR_SPI_MODE_TXRDY Transmitter Ready (cleared by writing US_THR) **/
#define USART0_US_CSR_SPI_MODE_TXRDY		(1 << 1)
/** USART0_US_CSR_SPI_MODE_RXRDY Receiver Ready (cleared by reading US_RHR) **/
#define USART0_US_CSR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_csr_lin_mode USCSRLINMODE Channel Status Register
@{*/

/** USART0_US_CSR_LIN_MODE_LINHTE LIN Header Timeout Error **/
#define USART0_US_CSR_LIN_MODE_LINHTE		(1 << 31)
/** USART0_US_CSR_LIN_MODE_LINSTE LIN Synch Tolerance Error **/
#define USART0_US_CSR_LIN_MODE_LINSTE		(1 << 30)
/** USART0_US_CSR_LIN_MODE_LINSNRE LIN Slave Not Responding Error Interrupt Mask **/
#define USART0_US_CSR_LIN_MODE_LINSNRE		(1 << 29)
/** USART0_US_CSR_LIN_MODE_LINCE LIN Checksum Error **/
#define USART0_US_CSR_LIN_MODE_LINCE		(1 << 28)
/** USART0_US_CSR_LIN_MODE_LINIPE LIN Identifier Parity Error **/
#define USART0_US_CSR_LIN_MODE_LINIPE		(1 << 27)
/** USART0_US_CSR_LIN_MODE_LINISFE LIN Inconsistent Synch Field Error **/
#define USART0_US_CSR_LIN_MODE_LINISFE		(1 << 26)
/** USART0_US_CSR_LIN_MODE_LINBE LIN Bus Error **/
#define USART0_US_CSR_LIN_MODE_LINBE		(1 << 25)
/** USART0_US_CSR_LIN_MODE_LINBLS LIN Bus Line Status **/
#define USART0_US_CSR_LIN_MODE_LINBLS		(1 << 23)
/** USART0_US_CSR_LIN_MODE_DCDIC Data Carrier Detect Input Change Flag (cleared on read) **/
#define USART0_US_CSR_LIN_MODE_DCDIC		(1 << 18)
/** USART0_US_CSR_LIN_MODE_DSRIC Data Set Ready Input Change Flag (cleared on read) **/
#define USART0_US_CSR_LIN_MODE_DSRIC		(1 << 17)
/** USART0_US_CSR_LIN_MODE_RIIC Ring Indicator Input Change Flag (cleared on read) **/
#define USART0_US_CSR_LIN_MODE_RIIC		(1 << 16)
/** USART0_US_CSR_LIN_MODE_LINTC LIN Transfer Completed **/
#define USART0_US_CSR_LIN_MODE_LINTC		(1 << 15)
/** USART0_US_CSR_LIN_MODE_LINID LIN Identifier Sent or LIN Identifier Received **/
#define USART0_US_CSR_LIN_MODE_LINID		(1 << 14)
/** USART0_US_CSR_LIN_MODE_LINBK LIN Break Sent or LIN Break Received **/
#define USART0_US_CSR_LIN_MODE_LINBK		(1 << 13)
/** USART0_US_CSR_LIN_MODE_TXEMPTY Transmitter Empty (cleared by writing US_THR) **/
#define USART0_US_CSR_LIN_MODE_TXEMPTY		(1 << 9)
/** USART0_US_CSR_LIN_MODE_OVRE Overrun Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_US_CSR_LIN_MODE_OVRE		(1 << 5)
/** USART0_US_CSR_LIN_MODE_TXRDY Transmitter Ready (cleared by writing US_THR) **/
#define USART0_US_CSR_LIN_MODE_TXRDY		(1 << 1)
/** USART0_US_CSR_LIN_MODE_RXRDY Receiver Ready (cleared by reading US_RHR) **/
#define USART0_US_CSR_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_csr_lon_mode USCSRLONMODE Channel Status Register
@{*/

/** USART0_US_CSR_LON_MODE_LBLOVFE LON Backlog Overflow Error **/
#define USART0_US_CSR_LON_MODE_LBLOVFE		(1 << 28)
/** USART0_US_CSR_LON_MODE_LRXD LON Reception End Flag **/
#define USART0_US_CSR_LON_MODE_LRXD		(1 << 27)
/** USART0_US_CSR_LON_MODE_LFET LON Frame Early Termination **/
#define USART0_US_CSR_LON_MODE_LFET		(1 << 26)
/** USART0_US_CSR_LON_MODE_LCOL LON Collision Detected Flag **/
#define USART0_US_CSR_LON_MODE_LCOL		(1 << 25)
/** USART0_US_CSR_LON_MODE_LTXD LON Transmission End Flag **/
#define USART0_US_CSR_LON_MODE_LTXD		(1 << 24)
/** USART0_US_CSR_LON_MODE_DCDIC Data Carrier Detect Input Change Flag (cleared on read) **/
#define USART0_US_CSR_LON_MODE_DCDIC		(1 << 18)
/** USART0_US_CSR_LON_MODE_DSRIC Data Set Ready Input Change Flag (cleared on read) **/
#define USART0_US_CSR_LON_MODE_DSRIC		(1 << 17)
/** USART0_US_CSR_LON_MODE_RIIC Ring Indicator Input Change Flag (cleared on read) **/
#define USART0_US_CSR_LON_MODE_RIIC		(1 << 16)
/** USART0_US_CSR_LON_MODE_TXEMPTY Transmitter Empty (cleared by writing US_THR) **/
#define USART0_US_CSR_LON_MODE_TXEMPTY		(1 << 9)
/** USART0_US_CSR_LON_MODE_LCRCE LON CRC Error **/
#define USART0_US_CSR_LON_MODE_LCRCE		(1 << 7)
/** USART0_US_CSR_LON_MODE_LSFE LON Short Frame Error **/
#define USART0_US_CSR_LON_MODE_LSFE		(1 << 6)
/** USART0_US_CSR_LON_MODE_OVRE Overrun Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_US_CSR_LON_MODE_OVRE		(1 << 5)
/** USART0_US_CSR_LON_MODE_TXRDY Transmitter Ready (cleared by writing US_THR) **/
#define USART0_US_CSR_LON_MODE_TXRDY		(1 << 1)
/** USART0_US_CSR_LON_MODE_RXRDY Receiver Ready (cleared by reading US_RHR) **/
#define USART0_US_CSR_LON_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_csr_lon_spi_mode USCSRLONSPIMODE Channel Status Register
@{*/

/** USART0_US_CSR_LON_SPI_MODE_DCDIC Data Carrier Detect Input Change Flag (cleared on read) **/
#define USART0_US_CSR_LON_SPI_MODE_DCDIC		(1 << 18)
/** USART0_US_CSR_LON_SPI_MODE_DSRIC Data Set Ready Input Change Flag (cleared on read) **/
#define USART0_US_CSR_LON_SPI_MODE_DSRIC		(1 << 17)
/** USART0_US_CSR_LON_SPI_MODE_RIIC Ring Indicator Input Change Flag (cleared on read) **/
#define USART0_US_CSR_LON_SPI_MODE_RIIC		(1 << 16)
/** USART0_US_CSR_LON_SPI_MODE_UNRE SPI Underrun Error **/
#define USART0_US_CSR_LON_SPI_MODE_UNRE		(1 << 10)
/** USART0_US_CSR_LON_SPI_MODE_TXEMPTY Transmitter Empty (cleared by writing US_THR) **/
#define USART0_US_CSR_LON_SPI_MODE_TXEMPTY		(1 << 9)
/** USART0_US_CSR_LON_SPI_MODE_OVRE Overrun Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_US_CSR_LON_SPI_MODE_OVRE		(1 << 5)
/** USART0_US_CSR_LON_SPI_MODE_TXRDY Transmitter Ready (cleared by writing US_THR) **/
#define USART0_US_CSR_LON_SPI_MODE_TXRDY		(1 << 1)
/** USART0_US_CSR_LON_SPI_MODE_RXRDY Receiver Ready (cleared by reading US_RHR) **/
#define USART0_US_CSR_LON_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_us_rhr USRHR Receive Holding Register
@{*/

/** USART0_US_RHR_RXSYNH Received Sync **/
#define USART0_US_RHR_RXSYNH		(1 << 15)

#define USART0_US_RHR_RXCHR_SHIFT		0
#define USART0_US_RHR_RXCHR_MASK		0x1ff
/** @defgroup usart0_us_rhr_rxchr RXCHR Received Character
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_thr USTHR Transmit Holding Register
@{*/

/** USART0_US_THR_TXSYNH Sync Field to be Transmitted **/
#define USART0_US_THR_TXSYNH		(1 << 15)

#define USART0_US_THR_TXCHR_SHIFT		0
#define USART0_US_THR_TXCHR_MASK		0x1ff
/** @defgroup usart0_us_thr_txchr TXCHR Character to be Transmitted
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_brgr USBRGR Baud Rate Generator Register
@{*/


#define USART0_US_BRGR_FP_SHIFT		16
#define USART0_US_BRGR_FP_MASK		0x07
/** @defgroup usart0_us_brgr_fp FP Fractional Part
@{*/
/**@}*/


#define USART0_US_BRGR_CD_SHIFT		0
#define USART0_US_BRGR_CD_MASK		0xffff
/** @defgroup usart0_us_brgr_cd CD Clock Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_rtor USRTOR Receiver Timeout Register
@{*/


#define USART0_US_RTOR_TO_SHIFT		0
#define USART0_US_RTOR_TO_MASK		0x1ffff
/** @defgroup usart0_us_rtor_to TO Timeout Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_ttgr_usart_mode USTTGRUSARTMODE Transmitter Timeguard Register
@{*/


#define USART0_US_TTGR_USART_MODE_TG_SHIFT		0
#define USART0_US_TTGR_USART_MODE_TG_MASK		0xff
/** @defgroup usart0_us_ttgr_usart_mode_tg TG Timeguard Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_ttgr_lon_mode USTTGRLONMODE Transmitter Timeguard Register
@{*/


#define USART0_US_TTGR_LON_MODE_PCYCLE_SHIFT		0
#define USART0_US_TTGR_LON_MODE_PCYCLE_MASK		0xffffff
/** @defgroup usart0_us_ttgr_lon_mode_pcycle PCYCLE LON PCYCLE Length
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_fidi_usart_mode USFIDIUSARTMODE FI DI Ratio Register
@{*/


#define USART0_US_FIDI_USART_MODE_FI_DI_RATIO_SHIFT		0
#define USART0_US_FIDI_USART_MODE_FI_DI_RATIO_MASK		0xffff
/** @defgroup usart0_us_fidi_usart_mode_fi_di_ratio FIDIRATIO FI Over DI Ratio Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_fidi_lon_mode USFIDILONMODE FI DI Ratio Register
@{*/


#define USART0_US_FIDI_LON_MODE_BETA2_SHIFT		0
#define USART0_US_FIDI_LON_MODE_BETA2_MASK		0xffffff
/** @defgroup usart0_us_fidi_lon_mode_beta2 BETA2 LON BETA2 Length
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_ner USNER Number of Errors Register
@{*/


#define USART0_US_NER_NB_ERRORS_SHIFT		0
#define USART0_US_NER_NB_ERRORS_MASK		0xff
/** @defgroup usart0_us_ner_nb_errors NBERRORS Number of Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_if USIF IrDA Filter Register
@{*/


#define USART0_US_IF_IRDA_FILTER_SHIFT		0
#define USART0_US_IF_IRDA_FILTER_MASK		0xff
/** @defgroup usart0_us_if_irda_filter IRDAFILTER IrDA Filter
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_man USMAN Manchester Configuration Register
@{*/

/** USART0_US_MAN_RXIDLEV Receiver Idle Value **/
#define USART0_US_MAN_RXIDLEV		(1 << 31)
/** USART0_US_MAN_DRIFT Drift Compensation **/
#define USART0_US_MAN_DRIFT		(1 << 30)
/** USART0_US_MAN_ONE Must Be Set to 1 **/
#define USART0_US_MAN_ONE		(1 << 29)
/** USART0_US_MAN_RX_MPOL Receiver Manchester Polarity **/
#define USART0_US_MAN_RX_MPOL		(1 << 28)

#define USART0_US_MAN_RX_PP_SHIFT		24
#define USART0_US_MAN_RX_PP_MASK		0x03
/** @defgroup usart0_us_man_rx_pp RXPP Receiver Preamble Pattern detected
@{*/
/**@}*/


#define USART0_US_MAN_RX_PL_SHIFT		16
#define USART0_US_MAN_RX_PL_MASK		0x0f
/** @defgroup usart0_us_man_rx_pl RXPL Receiver Preamble Length
@{*/
/**@}*/

/** USART0_US_MAN_TX_MPOL Transmitter Manchester Polarity **/
#define USART0_US_MAN_TX_MPOL		(1 << 12)

#define USART0_US_MAN_TX_PP_SHIFT		8
#define USART0_US_MAN_TX_PP_MASK		0x03
/** @defgroup usart0_us_man_tx_pp TXPP Transmitter Preamble Pattern
@{*/
/**@}*/


#define USART0_US_MAN_TX_PL_SHIFT		0
#define USART0_US_MAN_TX_PL_MASK		0x0f
/** @defgroup usart0_us_man_tx_pl TXPL Transmitter Preamble Length
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_linmr USLINMR LIN Mode Register
@{*/

/** USART0_US_LINMR_SYNCDIS Synchronization Disable **/
#define USART0_US_LINMR_SYNCDIS		(1 << 17)
/** USART0_US_LINMR_PDCM DMAC Mode **/
#define USART0_US_LINMR_PDCM		(1 << 16)

#define USART0_US_LINMR_DLC_SHIFT		8
#define USART0_US_LINMR_DLC_MASK		0xff
/** @defgroup usart0_us_linmr_dlc DLC Data Length Control
@{*/
/**@}*/

/** USART0_US_LINMR_WKUPTYP Wakeup Signal Type **/
#define USART0_US_LINMR_WKUPTYP		(1 << 7)
/** USART0_US_LINMR_FSDIS Frame Slot Mode Disable **/
#define USART0_US_LINMR_FSDIS		(1 << 6)
/** USART0_US_LINMR_DLM Data Length Mode **/
#define USART0_US_LINMR_DLM		(1 << 5)
/** USART0_US_LINMR_CHKTYP Checksum Type **/
#define USART0_US_LINMR_CHKTYP		(1 << 4)
/** USART0_US_LINMR_CHKDIS Checksum Disable **/
#define USART0_US_LINMR_CHKDIS		(1 << 3)
/** USART0_US_LINMR_PARDIS Parity Disable **/
#define USART0_US_LINMR_PARDIS		(1 << 2)

#define USART0_US_LINMR_NACT_SHIFT		0
#define USART0_US_LINMR_NACT_MASK		0x03
/** @defgroup usart0_us_linmr_nact NACT LIN Node Action
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_linir USLINIR LIN Identifier Register
@{*/


#define USART0_US_LINIR_IDCHR_SHIFT		0
#define USART0_US_LINIR_IDCHR_MASK		0xff
/** @defgroup usart0_us_linir_idchr IDCHR Identifier Character
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_linbrr USLINBRR LIN Baud Rate Register
@{*/


#define USART0_US_LINBRR_LINFP_SHIFT		16
#define USART0_US_LINBRR_LINFP_MASK		0x07
/** @defgroup usart0_us_linbrr_linfp LINFP Fractional Part after Synchronization
@{*/
/**@}*/


#define USART0_US_LINBRR_LINCD_SHIFT		0
#define USART0_US_LINBRR_LINCD_MASK		0xffff
/** @defgroup usart0_us_linbrr_lincd LINCD Clock Divider after Synchronization
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_lonmr USLONMR LON Mode Register
@{*/


#define USART0_US_LONMR_EOFS_SHIFT		16
#define USART0_US_LONMR_EOFS_MASK		0xff
/** @defgroup usart0_us_lonmr_eofs EOFS End of Frame Condition Size
@{*/
/**@}*/

/** USART0_US_LONMR_LCDS LON Collision Detection Source **/
#define USART0_US_LONMR_LCDS		(1 << 5)
/** USART0_US_LONMR_DMAM LON DMA Mode **/
#define USART0_US_LONMR_DMAM		(1 << 4)
/** USART0_US_LONMR_CDTAIL LON Collision Detection on Frame Tail **/
#define USART0_US_LONMR_CDTAIL		(1 << 3)
/** USART0_US_LONMR_TCOL Terminate Frame upon Collision Notification **/
#define USART0_US_LONMR_TCOL		(1 << 2)
/** USART0_US_LONMR_COLDET LON Collision Detection Feature **/
#define USART0_US_LONMR_COLDET		(1 << 1)
/** USART0_US_LONMR_COMMT LON comm_type Parameter Value **/
#define USART0_US_LONMR_COMMT		(1 << 0)

/**@}*/

/** @defgroup usart0_us_lonpr USLONPR LON Preamble Register
@{*/


#define USART0_US_LONPR_LONPL_SHIFT		0
#define USART0_US_LONPR_LONPL_MASK		0x3fff
/** @defgroup usart0_us_lonpr_lonpl LONPL LON Preamble Length
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_londl USLONDL LON Data Length Register
@{*/


#define USART0_US_LONDL_LONDL_SHIFT		0
#define USART0_US_LONDL_LONDL_MASK		0xff
/** @defgroup usart0_us_londl_londl LONDL LON Data Length
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_lonl2hdr USLONL2HDR LON L2HDR Register
@{*/

/** USART0_US_LONL2HDR_PB LON Priority Bit **/
#define USART0_US_LONL2HDR_PB		(1 << 7)
/** USART0_US_LONL2HDR_ALTP LON Alternate Path Bit **/
#define USART0_US_LONL2HDR_ALTP		(1 << 6)

#define USART0_US_LONL2HDR_BLI_SHIFT		0
#define USART0_US_LONL2HDR_BLI_MASK		0x3f
/** @defgroup usart0_us_lonl2hdr_bli BLI LON Backlog Increment
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_lonbl USLONBL LON Backlog Register
@{*/


#define USART0_US_LONBL_LONBL_SHIFT		0
#define USART0_US_LONBL_LONBL_MASK		0x3f
/** @defgroup usart0_us_lonbl_lonbl LONBL LON Node Backlog Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_lonb1tx USLONB1TX LON Beta1 Tx Register
@{*/


#define USART0_US_LONB1TX_BETA1TX_SHIFT		0
#define USART0_US_LONB1TX_BETA1TX_MASK		0xffffff
/** @defgroup usart0_us_lonb1tx_beta1tx BETA1TX LON Beta1 Length after Transmission
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_lonb1rx USLONB1RX LON Beta1 Rx Register
@{*/


#define USART0_US_LONB1RX_BETA1RX_SHIFT		0
#define USART0_US_LONB1RX_BETA1RX_MASK		0xffffff
/** @defgroup usart0_us_lonb1rx_beta1rx BETA1RX LON Beta1 Length after Reception
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_lonprio USLONPRIO LON Priority Register
@{*/


#define USART0_US_LONPRIO_NPS_SHIFT		8
#define USART0_US_LONPRIO_NPS_MASK		0x7f
/** @defgroup usart0_us_lonprio_nps NPS LON Node Priority Slot
@{*/
/**@}*/


#define USART0_US_LONPRIO_PSNB_SHIFT		0
#define USART0_US_LONPRIO_PSNB_MASK		0x7f
/** @defgroup usart0_us_lonprio_psnb PSNB LON Priority Slot Number
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_idttx USIDTTX LON IDT Tx Register
@{*/


#define USART0_US_IDTTX_IDTTX_SHIFT		0
#define USART0_US_IDTTX_IDTTX_MASK		0xffffff
/** @defgroup usart0_us_idttx_idttx IDTTX LON Indeterminate Time after Transmission (comm_type = 1 mode only)
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_idtrx USIDTRX LON IDT Rx Register
@{*/


#define USART0_US_IDTRX_IDTRX_SHIFT		0
#define USART0_US_IDTRX_IDTRX_MASK		0xffffff
/** @defgroup usart0_us_idtrx_idtrx IDTRX LON Indeterminate Time after Reception (comm_type = 1 mode only)
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_icdiff USICDIFF IC DIFF Register
@{*/


#define USART0_US_ICDIFF_ICDIFF_SHIFT		0
#define USART0_US_ICDIFF_ICDIFF_MASK		0x0f
/** @defgroup usart0_us_icdiff_icdiff ICDIFF IC Differentiator Number
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_us_wpmr USWPMR Write Protection Mode Register
@{*/


#define USART0_US_WPMR_WPKEY_SHIFT		8
#define USART0_US_WPMR_WPKEY_MASK		0xffffff
/** @defgroup usart0_us_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** USART0_US_WPMR_WPEN Write Protection Enable **/
#define USART0_US_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup usart0_us_wpsr USWPSR Write Protection Status Register
@{*/


#define USART0_US_WPSR_WPVSRC_SHIFT		8
#define USART0_US_WPSR_WPVSRC_MASK		0xffff
/** @defgroup usart0_us_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** USART0_US_WPSR_WPVS Write Protection Violation Status **/
#define USART0_US_WPSR_WPVS		(1 << 0)

/**@}*/

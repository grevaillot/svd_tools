#pragma once 

/* --- USART2: Universal Synchronous Asynchronous Receiver Transmitter 2  */

/** @defgroup usart2_registers Universal Synchronous Asynchronous Receiver Transmitter 2 Register
@{*/

/** USART2_CR Control Register **/
#define USART2_CR			MMIO32(USART2_BASE + 0x00)
/** USART2_CR_SPI_MODE Control Register **/
#define USART2_CR_SPI_MODE			MMIO32(USART2_BASE + 0x00)
/** USART2_MR Mode Register **/
#define USART2_MR			MMIO32(USART2_BASE + 0x04)
/** USART2_MR_SPI_MODE Mode Register **/
#define USART2_MR_SPI_MODE			MMIO32(USART2_BASE + 0x04)
/** USART2_IER Interrupt Enable Register **/
#define USART2_IER			MMIO32(USART2_BASE + 0x08)
/** USART2_IER_SPI_MODE Interrupt Enable Register **/
#define USART2_IER_SPI_MODE			MMIO32(USART2_BASE + 0x08)
/** USART2_IER_LIN_MODE Interrupt Enable Register **/
#define USART2_IER_LIN_MODE			MMIO32(USART2_BASE + 0x08)
/** USART2_IDR Interrupt Disable Register **/
#define USART2_IDR			MMIO32(USART2_BASE + 0x0c)
/** USART2_IDR_SPI_MODE Interrupt Disable Register **/
#define USART2_IDR_SPI_MODE			MMIO32(USART2_BASE + 0x0c)
/** USART2_IDR_LIN_MODE Interrupt Disable Register **/
#define USART2_IDR_LIN_MODE			MMIO32(USART2_BASE + 0x0c)
/** USART2_IMR Interrupt Mask Register **/
#define USART2_IMR			MMIO32(USART2_BASE + 0x10)
/** USART2_IMR_SPI_MODE Interrupt Mask Register **/
#define USART2_IMR_SPI_MODE			MMIO32(USART2_BASE + 0x10)
/** USART2_IMR_LIN_MODE Interrupt Mask Register **/
#define USART2_IMR_LIN_MODE			MMIO32(USART2_BASE + 0x10)
/** USART2_CSR Channel Status Register **/
#define USART2_CSR			MMIO32(USART2_BASE + 0x14)
/** USART2_CSR_SPI_MODE Channel Status Register **/
#define USART2_CSR_SPI_MODE			MMIO32(USART2_BASE + 0x14)
/** USART2_CSR_LIN_MODE Channel Status Register **/
#define USART2_CSR_LIN_MODE			MMIO32(USART2_BASE + 0x14)
/** USART2_RHR Receive Holding Register **/
#define USART2_RHR			MMIO32(USART2_BASE + 0x18)
/** USART2_THR Transmit Holding Register **/
#define USART2_THR			MMIO32(USART2_BASE + 0x1c)
/** USART2_BRGR Baud Rate Generator Register **/
#define USART2_BRGR			MMIO32(USART2_BASE + 0x20)
/** USART2_RTOR Receiver Time-out Register **/
#define USART2_RTOR			MMIO32(USART2_BASE + 0x24)
/** USART2_TTGR Transmitter Timeguard Register **/
#define USART2_TTGR			MMIO32(USART2_BASE + 0x28)
/** USART2_FIDI FI DI Ratio Register **/
#define USART2_FIDI			MMIO32(USART2_BASE + 0x40)
/** USART2_NER Number of Errors Register **/
#define USART2_NER			MMIO32(USART2_BASE + 0x44)
/** USART2_IF IrDA Filter Register **/
#define USART2_IF			MMIO32(USART2_BASE + 0x4c)
/** USART2_MAN Manchester Configuration Register **/
#define USART2_MAN			MMIO32(USART2_BASE + 0x50)
/** USART2_LINMR LIN Mode Register **/
#define USART2_LINMR			MMIO32(USART2_BASE + 0x54)
/** USART2_LINIR LIN Identifier Register **/
#define USART2_LINIR			MMIO32(USART2_BASE + 0x58)
/** USART2_LINBRR LIN Baud Rate Register **/
#define USART2_LINBRR			MMIO32(USART2_BASE + 0x5c)
/** USART2_WPMR Write Protection Mode Register **/
#define USART2_WPMR			MMIO32(USART2_BASE + 0xe4)
/** USART2_WPSR Write Protection Status Register **/
#define USART2_WPSR			MMIO32(USART2_BASE + 0xe8)
/** USART2_RPR Receive Pointer Register **/
#define USART2_RPR			MMIO32(USART2_BASE + 0x100)
/** USART2_RCR Receive Counter Register **/
#define USART2_RCR			MMIO32(USART2_BASE + 0x104)
/** USART2_TPR Transmit Pointer Register **/
#define USART2_TPR			MMIO32(USART2_BASE + 0x108)
/** USART2_TCR Transmit Counter Register **/
#define USART2_TCR			MMIO32(USART2_BASE + 0x10c)
/** USART2_RNPR Receive Next Pointer Register **/
#define USART2_RNPR			MMIO32(USART2_BASE + 0x110)
/** USART2_RNCR Receive Next Counter Register **/
#define USART2_RNCR			MMIO32(USART2_BASE + 0x114)
/** USART2_TNPR Transmit Next Pointer Register **/
#define USART2_TNPR			MMIO32(USART2_BASE + 0x118)
/** USART2_TNCR Transmit Next Counter Register **/
#define USART2_TNCR			MMIO32(USART2_BASE + 0x11c)
/** USART2_PTCR Transfer Control Register **/
#define USART2_PTCR			MMIO32(USART2_BASE + 0x120)
/** USART2_PTSR Transfer Status Register **/
#define USART2_PTSR			MMIO32(USART2_BASE + 0x124)

/**@}*/


/** @defgroup usart2_cr CR Control Register
@{*/

/** USART2_CR_LINWKUP Send LIN Wakeup Signal **/
#define USART2_CR_LINWKUP		(1 << 21)
/** USART2_CR_LINABT Abort LIN Transmission **/
#define USART2_CR_LINABT		(1 << 20)
/** USART2_CR_RTSDIS Request to Send Disable **/
#define USART2_CR_RTSDIS		(1 << 19)
/** USART2_CR_RTSEN Request to Send Enable **/
#define USART2_CR_RTSEN		(1 << 18)
/** USART2_CR_RETTO Rearm Time-out **/
#define USART2_CR_RETTO		(1 << 15)
/** USART2_CR_RSTNACK Reset Non Acknowledge **/
#define USART2_CR_RSTNACK		(1 << 14)
/** USART2_CR_RSTIT Reset Iterations **/
#define USART2_CR_RSTIT		(1 << 13)
/** USART2_CR_SENDA Send Address **/
#define USART2_CR_SENDA		(1 << 12)
/** USART2_CR_STTTO Start Time-out **/
#define USART2_CR_STTTO		(1 << 11)
/** USART2_CR_STPBRK Stop Break **/
#define USART2_CR_STPBRK		(1 << 10)
/** USART2_CR_STTBRK Start Break **/
#define USART2_CR_STTBRK		(1 << 9)
/** USART2_CR_RSTSTA Reset Status Bits **/
#define USART2_CR_RSTSTA		(1 << 8)
/** USART2_CR_TXDIS Transmitter Disable **/
#define USART2_CR_TXDIS		(1 << 7)
/** USART2_CR_TXEN Transmitter Enable **/
#define USART2_CR_TXEN		(1 << 6)
/** USART2_CR_RXDIS Receiver Disable **/
#define USART2_CR_RXDIS		(1 << 5)
/** USART2_CR_RXEN Receiver Enable **/
#define USART2_CR_RXEN		(1 << 4)
/** USART2_CR_RSTTX Reset Transmitter **/
#define USART2_CR_RSTTX		(1 << 3)
/** USART2_CR_RSTRX Reset Receiver **/
#define USART2_CR_RSTRX		(1 << 2)

/**@}*/

/** @defgroup usart2_cr_spi_mode CRSPIMODE Control Register
@{*/

/** USART2_CR_SPI_MODE_RCS Release SPI Chip Select **/
#define USART2_CR_SPI_MODE_RCS		(1 << 19)
/** USART2_CR_SPI_MODE_FCS Force SPI Chip Select **/
#define USART2_CR_SPI_MODE_FCS		(1 << 18)
/** USART2_CR_SPI_MODE_RSTSTA Reset Status Bits **/
#define USART2_CR_SPI_MODE_RSTSTA		(1 << 8)
/** USART2_CR_SPI_MODE_TXDIS Transmitter Disable **/
#define USART2_CR_SPI_MODE_TXDIS		(1 << 7)
/** USART2_CR_SPI_MODE_TXEN Transmitter Enable **/
#define USART2_CR_SPI_MODE_TXEN		(1 << 6)
/** USART2_CR_SPI_MODE_RXDIS Receiver Disable **/
#define USART2_CR_SPI_MODE_RXDIS		(1 << 5)
/** USART2_CR_SPI_MODE_RXEN Receiver Enable **/
#define USART2_CR_SPI_MODE_RXEN		(1 << 4)
/** USART2_CR_SPI_MODE_RSTTX Reset Transmitter **/
#define USART2_CR_SPI_MODE_RSTTX		(1 << 3)
/** USART2_CR_SPI_MODE_RSTRX Reset Receiver **/
#define USART2_CR_SPI_MODE_RSTRX		(1 << 2)

/**@}*/

/** @defgroup usart2_mr MR Mode Register
@{*/

/** USART2_MR_ONEBIT Start Frame Delimiter Selector **/
#define USART2_MR_ONEBIT		(1 << 31)
/** USART2_MR_MODSYNC Manchester Synchronization Mode **/
#define USART2_MR_MODSYNC		(1 << 30)
/** USART2_MR_MAN Manchester Encoder/Decoder Enable **/
#define USART2_MR_MAN		(1 << 29)
/** USART2_MR_FILTER Infrared Receive Line Filter **/
#define USART2_MR_FILTER		(1 << 28)

#define USART2_MR_MAX_ITERATION_SHIFT		24
#define USART2_MR_MAX_ITERATION_MASK		0x07
/** @defgroup usart2_mr_max_iteration MAXITERATION Maximum Number of Automatic Iteration
@{*/
/**@}*/

/** USART2_MR_INVDATA Inverted Data **/
#define USART2_MR_INVDATA		(1 << 23)
/** USART2_MR_VAR_SYNC Variable Synchronization of Command/Data Sync Start Frame Delimiter **/
#define USART2_MR_VAR_SYNC		(1 << 22)
/** USART2_MR_DSNACK Disable Successive NACK **/
#define USART2_MR_DSNACK		(1 << 21)
/** USART2_MR_INACK Inhibit Non Acknowledge **/
#define USART2_MR_INACK		(1 << 20)
/** USART2_MR_OVER Oversampling Mode **/
#define USART2_MR_OVER		(1 << 19)
/** USART2_MR_CLKO Clock Output Select **/
#define USART2_MR_CLKO		(1 << 18)
/** USART2_MR_MODE9 9-bit Character Length **/
#define USART2_MR_MODE9		(1 << 17)
/** USART2_MR_MSBF Bit Order **/
#define USART2_MR_MSBF		(1 << 16)

#define USART2_MR_CHMODE_SHIFT		14
#define USART2_MR_CHMODE_MASK		0x03
/** @defgroup usart2_mr_chmode CHMODE Channel Mode
@{*/
/**@}*/


#define USART2_MR_NBSTOP_SHIFT		12
#define USART2_MR_NBSTOP_MASK		0x03
/** @defgroup usart2_mr_nbstop NBSTOP Number of Stop Bits
@{*/
/**@}*/


#define USART2_MR_PAR_SHIFT		9
#define USART2_MR_PAR_MASK		0x07
/** @defgroup usart2_mr_par PAR Parity Type
@{*/
/**@}*/

/** USART2_MR_SYNC Synchronous Mode Select **/
#define USART2_MR_SYNC		(1 << 8)

#define USART2_MR_CHRL_SHIFT		6
#define USART2_MR_CHRL_MASK		0x03
/** @defgroup usart2_mr_chrl CHRL Character Length
@{*/
/**@}*/


#define USART2_MR_USCLKS_SHIFT		4
#define USART2_MR_USCLKS_MASK		0x03
/** @defgroup usart2_mr_usclks USCLKS Clock Selection
@{*/
/**@}*/


#define USART2_MR_USART_MODE_SHIFT		0
#define USART2_MR_USART_MODE_MASK		0x0f
/** @defgroup usart2_mr_usart_mode USARTMODE USART Mode of Operation
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_mr_spi_mode MRSPIMODE Mode Register
@{*/

/** USART2_MR_SPI_MODE_WRDBT Wait Read Data Before Transfer **/
#define USART2_MR_SPI_MODE_WRDBT		(1 << 20)
/** USART2_MR_SPI_MODE_CPOL SPI Clock Polarity **/
#define USART2_MR_SPI_MODE_CPOL		(1 << 16)
/** USART2_MR_SPI_MODE_CPHA SPI Clock Phase **/
#define USART2_MR_SPI_MODE_CPHA		(1 << 8)

#define USART2_MR_SPI_MODE_CHRL_SHIFT		6
#define USART2_MR_SPI_MODE_CHRL_MASK		0x03
/** @defgroup usart2_mr_spi_mode_chrl CHRL Character Length
@{*/
/**@}*/


#define USART2_MR_SPI_MODE_USCLKS_SHIFT		4
#define USART2_MR_SPI_MODE_USCLKS_MASK		0x03
/** @defgroup usart2_mr_spi_mode_usclks USCLKS Clock Selection
@{*/
/**@}*/


#define USART2_MR_SPI_MODE_USART_MODE_SHIFT		0
#define USART2_MR_SPI_MODE_USART_MODE_MASK		0x0f
/** @defgroup usart2_mr_spi_mode_usart_mode USARTMODE USART Mode of Operation
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_ier IER Interrupt Enable Register
@{*/

/** USART2_IER_MANE Manchester Error Interrupt Enable **/
#define USART2_IER_MANE		(1 << 24)
/** USART2_IER_CTSIC Clear to Send Input Change Interrupt Enable **/
#define USART2_IER_CTSIC		(1 << 19)
/** USART2_IER_NACK Non Acknowledge Interrupt Enable **/
#define USART2_IER_NACK		(1 << 13)
/** USART2_IER_RXBUFF Buffer Full Interrupt Enable (available in all USART modes of operation) **/
#define USART2_IER_RXBUFF		(1 << 12)
/** USART2_IER_TXBUFE Buffer Empty Interrupt Enable (available in all USART modes of operation) **/
#define USART2_IER_TXBUFE		(1 << 11)
/** USART2_IER_ITER Max number of Repetitions Reached Interrupt Enable **/
#define USART2_IER_ITER		(1 << 10)
/** USART2_IER_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART2_IER_TXEMPTY		(1 << 9)
/** USART2_IER_TIMEOUT Time-out Interrupt Enable **/
#define USART2_IER_TIMEOUT		(1 << 8)
/** USART2_IER_PARE Parity Error Interrupt Enable **/
#define USART2_IER_PARE		(1 << 7)
/** USART2_IER_FRAME Framing Error Interrupt Enable **/
#define USART2_IER_FRAME		(1 << 6)
/** USART2_IER_OVRE Overrun Error Interrupt Enable **/
#define USART2_IER_OVRE		(1 << 5)
/** USART2_IER_ENDTX End of Transmit Interrupt Enable (available in all USART modes of operation) **/
#define USART2_IER_ENDTX		(1 << 4)
/** USART2_IER_ENDRX End of Receive Transfer Interrupt Enable (available in all USART modes of operation) **/
#define USART2_IER_ENDRX		(1 << 3)
/** USART2_IER_RXBRK Receiver Break Interrupt Enable **/
#define USART2_IER_RXBRK		(1 << 2)
/** USART2_IER_TXRDY TXRDY Interrupt Enable **/
#define USART2_IER_TXRDY		(1 << 1)
/** USART2_IER_RXRDY RXRDY Interrupt Enable **/
#define USART2_IER_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart2_ier_spi_mode IERSPIMODE Interrupt Enable Register
@{*/

/** USART2_IER_SPI_MODE_RXBUFF  **/
#define USART2_IER_SPI_MODE_RXBUFF		(1 << 12)
/** USART2_IER_SPI_MODE_TXBUFE  **/
#define USART2_IER_SPI_MODE_TXBUFE		(1 << 11)
/** USART2_IER_SPI_MODE_UNRE SPI Underrun Error Interrupt Enable **/
#define USART2_IER_SPI_MODE_UNRE		(1 << 10)
/** USART2_IER_SPI_MODE_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART2_IER_SPI_MODE_TXEMPTY		(1 << 9)
/** USART2_IER_SPI_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART2_IER_SPI_MODE_OVRE		(1 << 5)
/** USART2_IER_SPI_MODE_ENDTX  **/
#define USART2_IER_SPI_MODE_ENDTX		(1 << 4)
/** USART2_IER_SPI_MODE_ENDRX  **/
#define USART2_IER_SPI_MODE_ENDRX		(1 << 3)
/** USART2_IER_SPI_MODE_TXRDY TXRDY Interrupt Enable **/
#define USART2_IER_SPI_MODE_TXRDY		(1 << 1)
/** USART2_IER_SPI_MODE_RXRDY RXRDY Interrupt Enable **/
#define USART2_IER_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart2_ier_lin_mode IERLINMODE Interrupt Enable Register
@{*/

/** USART2_IER_LIN_MODE_LINSNRE LIN Slave Not Responding Error Interrupt Enable **/
#define USART2_IER_LIN_MODE_LINSNRE		(1 << 29)
/** USART2_IER_LIN_MODE_LINCE LIN Checksum Error Interrupt Enable **/
#define USART2_IER_LIN_MODE_LINCE		(1 << 28)
/** USART2_IER_LIN_MODE_LINIPE LIN Identifier Parity Interrupt Enable **/
#define USART2_IER_LIN_MODE_LINIPE		(1 << 27)
/** USART2_IER_LIN_MODE_LINISFE LIN Inconsistent Synch Field Error Interrupt Enable **/
#define USART2_IER_LIN_MODE_LINISFE		(1 << 26)
/** USART2_IER_LIN_MODE_LINBE LIN Bus Error Interrupt Enable **/
#define USART2_IER_LIN_MODE_LINBE		(1 << 25)
/** USART2_IER_LIN_MODE_LINTC LIN Transfer Completed Interrupt Enable **/
#define USART2_IER_LIN_MODE_LINTC		(1 << 15)
/** USART2_IER_LIN_MODE_LINID LIN Identifier Sent or LIN Identifier Received Interrupt Enable **/
#define USART2_IER_LIN_MODE_LINID		(1 << 14)
/** USART2_IER_LIN_MODE_LINBK LIN Break Sent or LIN Break Received Interrupt Enable **/
#define USART2_IER_LIN_MODE_LINBK		(1 << 13)
/** USART2_IER_LIN_MODE_RXBUFF  **/
#define USART2_IER_LIN_MODE_RXBUFF		(1 << 12)
/** USART2_IER_LIN_MODE_TXBUFE  **/
#define USART2_IER_LIN_MODE_TXBUFE		(1 << 11)
/** USART2_IER_LIN_MODE_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART2_IER_LIN_MODE_TXEMPTY		(1 << 9)
/** USART2_IER_LIN_MODE_TIMEOUT Time-out Interrupt Enable **/
#define USART2_IER_LIN_MODE_TIMEOUT		(1 << 8)
/** USART2_IER_LIN_MODE_PARE Parity Error Interrupt Enable **/
#define USART2_IER_LIN_MODE_PARE		(1 << 7)
/** USART2_IER_LIN_MODE_FRAME Framing Error Interrupt Enable **/
#define USART2_IER_LIN_MODE_FRAME		(1 << 6)
/** USART2_IER_LIN_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART2_IER_LIN_MODE_OVRE		(1 << 5)
/** USART2_IER_LIN_MODE_ENDTX  **/
#define USART2_IER_LIN_MODE_ENDTX		(1 << 4)
/** USART2_IER_LIN_MODE_ENDRX  **/
#define USART2_IER_LIN_MODE_ENDRX		(1 << 3)
/** USART2_IER_LIN_MODE_TXRDY TXRDY Interrupt Enable **/
#define USART2_IER_LIN_MODE_TXRDY		(1 << 1)
/** USART2_IER_LIN_MODE_RXRDY RXRDY Interrupt Enable **/
#define USART2_IER_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart2_idr IDR Interrupt Disable Register
@{*/

/** USART2_IDR_MANE Manchester Error Interrupt Disable **/
#define USART2_IDR_MANE		(1 << 24)
/** USART2_IDR_CTSIC Clear to Send Input Change Interrupt Disable **/
#define USART2_IDR_CTSIC		(1 << 19)
/** USART2_IDR_NACK Non Acknowledge Interrupt Disable **/
#define USART2_IDR_NACK		(1 << 13)
/** USART2_IDR_RXBUFF Buffer Full Interrupt Disable (available in all USART modes of operation) **/
#define USART2_IDR_RXBUFF		(1 << 12)
/** USART2_IDR_TXBUFE Buffer Empty Interrupt Disable (available in all USART modes of operation) **/
#define USART2_IDR_TXBUFE		(1 << 11)
/** USART2_IDR_ITER Max Number of Repetitions Reached Interrupt Disable **/
#define USART2_IDR_ITER		(1 << 10)
/** USART2_IDR_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART2_IDR_TXEMPTY		(1 << 9)
/** USART2_IDR_TIMEOUT Time-out Interrupt Disable **/
#define USART2_IDR_TIMEOUT		(1 << 8)
/** USART2_IDR_PARE Parity Error Interrupt Disable **/
#define USART2_IDR_PARE		(1 << 7)
/** USART2_IDR_FRAME Framing Error Interrupt Disable **/
#define USART2_IDR_FRAME		(1 << 6)
/** USART2_IDR_OVRE Overrun Error Interrupt Enable **/
#define USART2_IDR_OVRE		(1 << 5)
/** USART2_IDR_ENDTX End of Transmit Interrupt Disable (available in all USART modes of operation) **/
#define USART2_IDR_ENDTX		(1 << 4)
/** USART2_IDR_ENDRX End of Receive Transfer Interrupt Disable (available in all USART modes of operation) **/
#define USART2_IDR_ENDRX		(1 << 3)
/** USART2_IDR_RXBRK Receiver Break Interrupt Disable **/
#define USART2_IDR_RXBRK		(1 << 2)
/** USART2_IDR_TXRDY TXRDY Interrupt Disable **/
#define USART2_IDR_TXRDY		(1 << 1)
/** USART2_IDR_RXRDY RXRDY Interrupt Disable **/
#define USART2_IDR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart2_idr_spi_mode IDRSPIMODE Interrupt Disable Register
@{*/

/** USART2_IDR_SPI_MODE_RXBUFF  **/
#define USART2_IDR_SPI_MODE_RXBUFF		(1 << 12)
/** USART2_IDR_SPI_MODE_TXBUFE  **/
#define USART2_IDR_SPI_MODE_TXBUFE		(1 << 11)
/** USART2_IDR_SPI_MODE_UNRE SPI Underrun Error Interrupt Disable **/
#define USART2_IDR_SPI_MODE_UNRE		(1 << 10)
/** USART2_IDR_SPI_MODE_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART2_IDR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART2_IDR_SPI_MODE_OVRE Overrun Error Interrupt Disable **/
#define USART2_IDR_SPI_MODE_OVRE		(1 << 5)
/** USART2_IDR_SPI_MODE_ENDTX  **/
#define USART2_IDR_SPI_MODE_ENDTX		(1 << 4)
/** USART2_IDR_SPI_MODE_ENDRX  **/
#define USART2_IDR_SPI_MODE_ENDRX		(1 << 3)
/** USART2_IDR_SPI_MODE_TXRDY TXRDY Interrupt Disable **/
#define USART2_IDR_SPI_MODE_TXRDY		(1 << 1)
/** USART2_IDR_SPI_MODE_RXRDY RXRDY Interrupt Disable **/
#define USART2_IDR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart2_idr_lin_mode IDRLINMODE Interrupt Disable Register
@{*/

/** USART2_IDR_LIN_MODE_LINSNRE LIN Slave Not Responding Error Interrupt Disable **/
#define USART2_IDR_LIN_MODE_LINSNRE		(1 << 29)
/** USART2_IDR_LIN_MODE_LINCE LIN Checksum Error Interrupt Disable **/
#define USART2_IDR_LIN_MODE_LINCE		(1 << 28)
/** USART2_IDR_LIN_MODE_LINIPE LIN Identifier Parity Interrupt Disable **/
#define USART2_IDR_LIN_MODE_LINIPE		(1 << 27)
/** USART2_IDR_LIN_MODE_LINISFE LIN Inconsistent Synch Field Error Interrupt Disable **/
#define USART2_IDR_LIN_MODE_LINISFE		(1 << 26)
/** USART2_IDR_LIN_MODE_LINBE LIN Bus Error Interrupt Disable **/
#define USART2_IDR_LIN_MODE_LINBE		(1 << 25)
/** USART2_IDR_LIN_MODE_LINTC LIN Transfer Completed Interrupt Disable **/
#define USART2_IDR_LIN_MODE_LINTC		(1 << 15)
/** USART2_IDR_LIN_MODE_LINID LIN Identifier Sent or LIN Identifier Received Interrupt Disable **/
#define USART2_IDR_LIN_MODE_LINID		(1 << 14)
/** USART2_IDR_LIN_MODE_LINBK LIN Break Sent or LIN Break Received Interrupt Disable **/
#define USART2_IDR_LIN_MODE_LINBK		(1 << 13)
/** USART2_IDR_LIN_MODE_RXBUFF  **/
#define USART2_IDR_LIN_MODE_RXBUFF		(1 << 12)
/** USART2_IDR_LIN_MODE_TXBUFE  **/
#define USART2_IDR_LIN_MODE_TXBUFE		(1 << 11)
/** USART2_IDR_LIN_MODE_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART2_IDR_LIN_MODE_TXEMPTY		(1 << 9)
/** USART2_IDR_LIN_MODE_TIMEOUT Time-out Interrupt Disable **/
#define USART2_IDR_LIN_MODE_TIMEOUT		(1 << 8)
/** USART2_IDR_LIN_MODE_PARE Parity Error Interrupt Disable **/
#define USART2_IDR_LIN_MODE_PARE		(1 << 7)
/** USART2_IDR_LIN_MODE_FRAME Framing Error Interrupt Disable **/
#define USART2_IDR_LIN_MODE_FRAME		(1 << 6)
/** USART2_IDR_LIN_MODE_OVRE Overrun Error Interrupt Disable **/
#define USART2_IDR_LIN_MODE_OVRE		(1 << 5)
/** USART2_IDR_LIN_MODE_ENDTX  **/
#define USART2_IDR_LIN_MODE_ENDTX		(1 << 4)
/** USART2_IDR_LIN_MODE_ENDRX  **/
#define USART2_IDR_LIN_MODE_ENDRX		(1 << 3)
/** USART2_IDR_LIN_MODE_TXRDY TXRDY Interrupt Disable **/
#define USART2_IDR_LIN_MODE_TXRDY		(1 << 1)
/** USART2_IDR_LIN_MODE_RXRDY RXRDY Interrupt Disable **/
#define USART2_IDR_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart2_imr IMR Interrupt Mask Register
@{*/

/** USART2_IMR_MANE Manchester Error Interrupt Mask **/
#define USART2_IMR_MANE		(1 << 24)
/** USART2_IMR_CTSIC Clear to Send Input Change Interrupt Mask **/
#define USART2_IMR_CTSIC		(1 << 19)
/** USART2_IMR_NACK Non Acknowledge Interrupt Mask **/
#define USART2_IMR_NACK		(1 << 13)
/** USART2_IMR_RXBUFF Buffer Full Interrupt Mask (available in all USART modes of operation) **/
#define USART2_IMR_RXBUFF		(1 << 12)
/** USART2_IMR_TXBUFE Buffer Empty Interrupt Mask (available in all USART modes of operation) **/
#define USART2_IMR_TXBUFE		(1 << 11)
/** USART2_IMR_ITER Max Number of Repetitions Reached Interrupt Mask **/
#define USART2_IMR_ITER		(1 << 10)
/** USART2_IMR_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART2_IMR_TXEMPTY		(1 << 9)
/** USART2_IMR_TIMEOUT Time-out Interrupt Mask **/
#define USART2_IMR_TIMEOUT		(1 << 8)
/** USART2_IMR_PARE Parity Error Interrupt Mask **/
#define USART2_IMR_PARE		(1 << 7)
/** USART2_IMR_FRAME Framing Error Interrupt Mask **/
#define USART2_IMR_FRAME		(1 << 6)
/** USART2_IMR_OVRE Overrun Error Interrupt Mask **/
#define USART2_IMR_OVRE		(1 << 5)
/** USART2_IMR_ENDTX End of Transmit Interrupt Mask (available in all USART modes of operation) **/
#define USART2_IMR_ENDTX		(1 << 4)
/** USART2_IMR_ENDRX End of Receive Transfer Interrupt Mask (available in all USART modes of operation) **/
#define USART2_IMR_ENDRX		(1 << 3)
/** USART2_IMR_RXBRK Receiver Break Interrupt Mask **/
#define USART2_IMR_RXBRK		(1 << 2)
/** USART2_IMR_TXRDY TXRDY Interrupt Mask **/
#define USART2_IMR_TXRDY		(1 << 1)
/** USART2_IMR_RXRDY RXRDY Interrupt Mask **/
#define USART2_IMR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart2_imr_spi_mode IMRSPIMODE Interrupt Mask Register
@{*/

/** USART2_IMR_SPI_MODE_RXBUFF  **/
#define USART2_IMR_SPI_MODE_RXBUFF		(1 << 12)
/** USART2_IMR_SPI_MODE_TXBUFE  **/
#define USART2_IMR_SPI_MODE_TXBUFE		(1 << 11)
/** USART2_IMR_SPI_MODE_UNRE SPI Underrun Error Interrupt Mask **/
#define USART2_IMR_SPI_MODE_UNRE		(1 << 10)
/** USART2_IMR_SPI_MODE_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART2_IMR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART2_IMR_SPI_MODE_OVRE Overrun Error Interrupt Mask **/
#define USART2_IMR_SPI_MODE_OVRE		(1 << 5)
/** USART2_IMR_SPI_MODE_ENDTX  **/
#define USART2_IMR_SPI_MODE_ENDTX		(1 << 4)
/** USART2_IMR_SPI_MODE_ENDRX  **/
#define USART2_IMR_SPI_MODE_ENDRX		(1 << 3)
/** USART2_IMR_SPI_MODE_TXRDY TXRDY Interrupt Mask **/
#define USART2_IMR_SPI_MODE_TXRDY		(1 << 1)
/** USART2_IMR_SPI_MODE_RXRDY RXRDY Interrupt Mask **/
#define USART2_IMR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart2_imr_lin_mode IMRLINMODE Interrupt Mask Register
@{*/

/** USART2_IMR_LIN_MODE_LINSNRE LIN Slave Not Responding Error Interrupt Mask **/
#define USART2_IMR_LIN_MODE_LINSNRE		(1 << 29)
/** USART2_IMR_LIN_MODE_LINCE LIN Checksum Error Interrupt Mask **/
#define USART2_IMR_LIN_MODE_LINCE		(1 << 28)
/** USART2_IMR_LIN_MODE_LINIPE LIN Identifier Parity Interrupt Mask **/
#define USART2_IMR_LIN_MODE_LINIPE		(1 << 27)
/** USART2_IMR_LIN_MODE_LINISFE LIN Inconsistent Synch Field Error Interrupt Mask **/
#define USART2_IMR_LIN_MODE_LINISFE		(1 << 26)
/** USART2_IMR_LIN_MODE_LINBE LIN Bus Error Interrupt Mask **/
#define USART2_IMR_LIN_MODE_LINBE		(1 << 25)
/** USART2_IMR_LIN_MODE_LINTC LIN Transfer Completed Interrupt Mask **/
#define USART2_IMR_LIN_MODE_LINTC		(1 << 15)
/** USART2_IMR_LIN_MODE_LINID LIN Identifier Sent or LIN Identifier Received Interrupt Mask **/
#define USART2_IMR_LIN_MODE_LINID		(1 << 14)
/** USART2_IMR_LIN_MODE_LINBK LIN Break Sent or LIN Break Received Interrupt Mask **/
#define USART2_IMR_LIN_MODE_LINBK		(1 << 13)
/** USART2_IMR_LIN_MODE_RXBUFF  **/
#define USART2_IMR_LIN_MODE_RXBUFF		(1 << 12)
/** USART2_IMR_LIN_MODE_TXBUFE  **/
#define USART2_IMR_LIN_MODE_TXBUFE		(1 << 11)
/** USART2_IMR_LIN_MODE_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART2_IMR_LIN_MODE_TXEMPTY		(1 << 9)
/** USART2_IMR_LIN_MODE_TIMEOUT Time-out Interrupt Mask **/
#define USART2_IMR_LIN_MODE_TIMEOUT		(1 << 8)
/** USART2_IMR_LIN_MODE_PARE Parity Error Interrupt Mask **/
#define USART2_IMR_LIN_MODE_PARE		(1 << 7)
/** USART2_IMR_LIN_MODE_FRAME Framing Error Interrupt Mask **/
#define USART2_IMR_LIN_MODE_FRAME		(1 << 6)
/** USART2_IMR_LIN_MODE_OVRE Overrun Error Interrupt Mask **/
#define USART2_IMR_LIN_MODE_OVRE		(1 << 5)
/** USART2_IMR_LIN_MODE_ENDTX  **/
#define USART2_IMR_LIN_MODE_ENDTX		(1 << 4)
/** USART2_IMR_LIN_MODE_ENDRX  **/
#define USART2_IMR_LIN_MODE_ENDRX		(1 << 3)
/** USART2_IMR_LIN_MODE_TXRDY TXRDY Interrupt Mask **/
#define USART2_IMR_LIN_MODE_TXRDY		(1 << 1)
/** USART2_IMR_LIN_MODE_RXRDY RXRDY Interrupt Mask **/
#define USART2_IMR_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart2_csr CSR Channel Status Register
@{*/

/** USART2_CSR_MANERR Manchester Error **/
#define USART2_CSR_MANERR		(1 << 24)
/** USART2_CSR_CTS Image of CTS Input **/
#define USART2_CSR_CTS		(1 << 23)
/** USART2_CSR_CTSIC Clear to Send Input Change Flag **/
#define USART2_CSR_CTSIC		(1 << 19)
/** USART2_CSR_NACK Non Acknowledge Interrupt **/
#define USART2_CSR_NACK		(1 << 13)
/** USART2_CSR_RXBUFF Reception Buffer Full **/
#define USART2_CSR_RXBUFF		(1 << 12)
/** USART2_CSR_TXBUFE Transmission Buffer Empty **/
#define USART2_CSR_TXBUFE		(1 << 11)
/** USART2_CSR_ITER Max Number of Repetitions Reached **/
#define USART2_CSR_ITER		(1 << 10)
/** USART2_CSR_TXEMPTY Transmitter Empty **/
#define USART2_CSR_TXEMPTY		(1 << 9)
/** USART2_CSR_TIMEOUT Receiver Time-out **/
#define USART2_CSR_TIMEOUT		(1 << 8)
/** USART2_CSR_PARE Parity Error **/
#define USART2_CSR_PARE		(1 << 7)
/** USART2_CSR_FRAME Framing Error **/
#define USART2_CSR_FRAME		(1 << 6)
/** USART2_CSR_OVRE Overrun Error **/
#define USART2_CSR_OVRE		(1 << 5)
/** USART2_CSR_ENDTX End of Transmitter Transfer **/
#define USART2_CSR_ENDTX		(1 << 4)
/** USART2_CSR_ENDRX End of Receiver Transfer **/
#define USART2_CSR_ENDRX		(1 << 3)
/** USART2_CSR_RXBRK Break Received/End of Break **/
#define USART2_CSR_RXBRK		(1 << 2)
/** USART2_CSR_TXRDY Transmitter Ready **/
#define USART2_CSR_TXRDY		(1 << 1)
/** USART2_CSR_RXRDY Receiver Ready **/
#define USART2_CSR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart2_csr_spi_mode CSRSPIMODE Channel Status Register
@{*/

/** USART2_CSR_SPI_MODE_RXBUFF  **/
#define USART2_CSR_SPI_MODE_RXBUFF		(1 << 12)
/** USART2_CSR_SPI_MODE_TXBUFE  **/
#define USART2_CSR_SPI_MODE_TXBUFE		(1 << 11)
/** USART2_CSR_SPI_MODE_UNRE Underrun Error **/
#define USART2_CSR_SPI_MODE_UNRE		(1 << 10)
/** USART2_CSR_SPI_MODE_TXEMPTY Transmitter Empty **/
#define USART2_CSR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART2_CSR_SPI_MODE_OVRE Overrun Error **/
#define USART2_CSR_SPI_MODE_OVRE		(1 << 5)
/** USART2_CSR_SPI_MODE_ENDTX  **/
#define USART2_CSR_SPI_MODE_ENDTX		(1 << 4)
/** USART2_CSR_SPI_MODE_ENDRX  **/
#define USART2_CSR_SPI_MODE_ENDRX		(1 << 3)
/** USART2_CSR_SPI_MODE_TXRDY Transmitter Ready **/
#define USART2_CSR_SPI_MODE_TXRDY		(1 << 1)
/** USART2_CSR_SPI_MODE_RXRDY Receiver Ready **/
#define USART2_CSR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart2_csr_lin_mode CSRLINMODE Channel Status Register
@{*/

/** USART2_CSR_LIN_MODE_LINSNRE LIN Slave Not Responding Error **/
#define USART2_CSR_LIN_MODE_LINSNRE		(1 << 29)
/** USART2_CSR_LIN_MODE_LINCE LIN Checksum Error **/
#define USART2_CSR_LIN_MODE_LINCE		(1 << 28)
/** USART2_CSR_LIN_MODE_LINIPE LIN Identifier Parity Error **/
#define USART2_CSR_LIN_MODE_LINIPE		(1 << 27)
/** USART2_CSR_LIN_MODE_LINISFE LIN Inconsistent Synch Field Error **/
#define USART2_CSR_LIN_MODE_LINISFE		(1 << 26)
/** USART2_CSR_LIN_MODE_LINBE LIN Bit Error **/
#define USART2_CSR_LIN_MODE_LINBE		(1 << 25)
/** USART2_CSR_LIN_MODE_LINBLS LIN Bus Line Status **/
#define USART2_CSR_LIN_MODE_LINBLS		(1 << 23)
/** USART2_CSR_LIN_MODE_LINTC LIN Transfer Completed **/
#define USART2_CSR_LIN_MODE_LINTC		(1 << 15)
/** USART2_CSR_LIN_MODE_LINID LIN Identifier Sent or LIN Identifier Received **/
#define USART2_CSR_LIN_MODE_LINID		(1 << 14)
/** USART2_CSR_LIN_MODE_LINBK LIN Break Sent or LIN Break Received **/
#define USART2_CSR_LIN_MODE_LINBK		(1 << 13)
/** USART2_CSR_LIN_MODE_RXBUFF  **/
#define USART2_CSR_LIN_MODE_RXBUFF		(1 << 12)
/** USART2_CSR_LIN_MODE_TXBUFE  **/
#define USART2_CSR_LIN_MODE_TXBUFE		(1 << 11)
/** USART2_CSR_LIN_MODE_TXEMPTY Transmitter Empty **/
#define USART2_CSR_LIN_MODE_TXEMPTY		(1 << 9)
/** USART2_CSR_LIN_MODE_TIMEOUT Receiver Time-out **/
#define USART2_CSR_LIN_MODE_TIMEOUT		(1 << 8)
/** USART2_CSR_LIN_MODE_PARE Parity Error **/
#define USART2_CSR_LIN_MODE_PARE		(1 << 7)
/** USART2_CSR_LIN_MODE_FRAME Framing Error **/
#define USART2_CSR_LIN_MODE_FRAME		(1 << 6)
/** USART2_CSR_LIN_MODE_OVRE Overrun Error **/
#define USART2_CSR_LIN_MODE_OVRE		(1 << 5)
/** USART2_CSR_LIN_MODE_ENDTX  **/
#define USART2_CSR_LIN_MODE_ENDTX		(1 << 4)
/** USART2_CSR_LIN_MODE_ENDRX  **/
#define USART2_CSR_LIN_MODE_ENDRX		(1 << 3)
/** USART2_CSR_LIN_MODE_TXRDY Transmitter Ready **/
#define USART2_CSR_LIN_MODE_TXRDY		(1 << 1)
/** USART2_CSR_LIN_MODE_RXRDY Receiver Ready **/
#define USART2_CSR_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart2_rhr RHR Receive Holding Register
@{*/

/** USART2_RHR_RXSYNH Received Sync **/
#define USART2_RHR_RXSYNH		(1 << 15)

#define USART2_RHR_RXCHR_SHIFT		0
#define USART2_RHR_RXCHR_MASK		0x1ff
/** @defgroup usart2_rhr_rxchr RXCHR Received Character
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_thr THR Transmit Holding Register
@{*/

/** USART2_THR_TXSYNH Sync Field to be Transmitted **/
#define USART2_THR_TXSYNH		(1 << 15)

#define USART2_THR_TXCHR_SHIFT		0
#define USART2_THR_TXCHR_MASK		0x1ff
/** @defgroup usart2_thr_txchr TXCHR Character to be Transmitted
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_brgr BRGR Baud Rate Generator Register
@{*/


#define USART2_BRGR_FP_SHIFT		16
#define USART2_BRGR_FP_MASK		0x07
/** @defgroup usart2_brgr_fp FP Fractional Part
@{*/
/**@}*/


#define USART2_BRGR_CD_SHIFT		0
#define USART2_BRGR_CD_MASK		0xffff
/** @defgroup usart2_brgr_cd CD Clock Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_rtor RTOR Receiver Time-out Register
@{*/


#define USART2_RTOR_TO_SHIFT		0
#define USART2_RTOR_TO_MASK		0x1ffff
/** @defgroup usart2_rtor_to TO Time-out Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_ttgr TTGR Transmitter Timeguard Register
@{*/


#define USART2_TTGR_TG_SHIFT		0
#define USART2_TTGR_TG_MASK		0xff
/** @defgroup usart2_ttgr_tg TG Timeguard Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_fidi FIDI FI DI Ratio Register
@{*/


#define USART2_FIDI_FI_DI_RATIO_SHIFT		0
#define USART2_FIDI_FI_DI_RATIO_MASK		0x7ff
/** @defgroup usart2_fidi_fi_di_ratio FIDIRATIO FI Over DI Ratio Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_ner NER Number of Errors Register
@{*/


#define USART2_NER_NB_ERRORS_SHIFT		0
#define USART2_NER_NB_ERRORS_MASK		0xff
/** @defgroup usart2_ner_nb_errors NBERRORS Number of Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_if IF IrDA Filter Register
@{*/


#define USART2_IF_IRDA_FILTER_SHIFT		0
#define USART2_IF_IRDA_FILTER_MASK		0xff
/** @defgroup usart2_if_irda_filter IRDAFILTER IrDA Filter
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_man MAN Manchester Configuration Register
@{*/

/** USART2_MAN_DRIFT Drift Compensation **/
#define USART2_MAN_DRIFT		(1 << 30)
/** USART2_MAN_ONE Must Be Set to 1 **/
#define USART2_MAN_ONE		(1 << 29)
/** USART2_MAN_RX_MPOL Receiver Manchester Polarity **/
#define USART2_MAN_RX_MPOL		(1 << 28)

#define USART2_MAN_RX_PP_SHIFT		24
#define USART2_MAN_RX_PP_MASK		0x03
/** @defgroup usart2_man_rx_pp RXPP Receiver Preamble Pattern detected
@{*/
/**@}*/


#define USART2_MAN_RX_PL_SHIFT		16
#define USART2_MAN_RX_PL_MASK		0x0f
/** @defgroup usart2_man_rx_pl RXPL Receiver Preamble Length
@{*/
/**@}*/

/** USART2_MAN_TX_MPOL Transmitter Manchester Polarity **/
#define USART2_MAN_TX_MPOL		(1 << 12)

#define USART2_MAN_TX_PP_SHIFT		8
#define USART2_MAN_TX_PP_MASK		0x03
/** @defgroup usart2_man_tx_pp TXPP Transmitter Preamble Pattern
@{*/
/**@}*/


#define USART2_MAN_TX_PL_SHIFT		0
#define USART2_MAN_TX_PL_MASK		0x0f
/** @defgroup usart2_man_tx_pl TXPL Transmitter Preamble Length
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_linmr LINMR LIN Mode Register
@{*/

/** USART2_LINMR_PDCM PDC Mode **/
#define USART2_LINMR_PDCM		(1 << 16)

#define USART2_LINMR_DLC_SHIFT		8
#define USART2_LINMR_DLC_MASK		0xff
/** @defgroup usart2_linmr_dlc DLC Data Length Control
@{*/
/**@}*/

/** USART2_LINMR_WKUPTYP Wakeup Signal Type **/
#define USART2_LINMR_WKUPTYP		(1 << 7)
/** USART2_LINMR_FSDIS Frame Slot Mode Disable **/
#define USART2_LINMR_FSDIS		(1 << 6)
/** USART2_LINMR_DLM Data Length Mode **/
#define USART2_LINMR_DLM		(1 << 5)
/** USART2_LINMR_CHKTYP Checksum Type **/
#define USART2_LINMR_CHKTYP		(1 << 4)
/** USART2_LINMR_CHKDIS Checksum Disable **/
#define USART2_LINMR_CHKDIS		(1 << 3)
/** USART2_LINMR_PARDIS Parity Disable **/
#define USART2_LINMR_PARDIS		(1 << 2)

#define USART2_LINMR_NACT_SHIFT		0
#define USART2_LINMR_NACT_MASK		0x03
/** @defgroup usart2_linmr_nact NACT LIN Node Action
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_linir LINIR LIN Identifier Register
@{*/


#define USART2_LINIR_IDCHR_SHIFT		0
#define USART2_LINIR_IDCHR_MASK		0xff
/** @defgroup usart2_linir_idchr IDCHR Identifier Character
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_linbrr LINBRR LIN Baud Rate Register
@{*/


#define USART2_LINBRR_LINFP_SHIFT		16
#define USART2_LINBRR_LINFP_MASK		0x07
/** @defgroup usart2_linbrr_linfp LINFP Fractional Part after Synchronization
@{*/
/**@}*/


#define USART2_LINBRR_LINCD_SHIFT		0
#define USART2_LINBRR_LINCD_MASK		0xffff
/** @defgroup usart2_linbrr_lincd LINCD Clock Divider after Synchronization
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_wpmr WPMR Write Protection Mode Register
@{*/


#define USART2_WPMR_WPKEY_SHIFT		8
#define USART2_WPMR_WPKEY_MASK		0xffffff
/** @defgroup usart2_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** USART2_WPMR_WPEN Write Protection Enable **/
#define USART2_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup usart2_wpsr WPSR Write Protection Status Register
@{*/


#define USART2_WPSR_WPVSRC_SHIFT		8
#define USART2_WPSR_WPVSRC_MASK		0xffff
/** @defgroup usart2_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** USART2_WPSR_WPVS Write Protection Violation Status **/
#define USART2_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup usart2_rpr RPR Receive Pointer Register
@{*/


#define USART2_RPR_RXPTR_SHIFT		0
#define USART2_RPR_RXPTR_MASK		0xffffffff
/** @defgroup usart2_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_rcr RCR Receive Counter Register
@{*/


#define USART2_RCR_RXCTR_SHIFT		0
#define USART2_RCR_RXCTR_MASK		0xffff
/** @defgroup usart2_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_tpr TPR Transmit Pointer Register
@{*/


#define USART2_TPR_TXPTR_SHIFT		0
#define USART2_TPR_TXPTR_MASK		0xffffffff
/** @defgroup usart2_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_tcr TCR Transmit Counter Register
@{*/


#define USART2_TCR_TXCTR_SHIFT		0
#define USART2_TCR_TXCTR_MASK		0xffff
/** @defgroup usart2_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_rnpr RNPR Receive Next Pointer Register
@{*/


#define USART2_RNPR_RXNPTR_SHIFT		0
#define USART2_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup usart2_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_rncr RNCR Receive Next Counter Register
@{*/


#define USART2_RNCR_RXNCTR_SHIFT		0
#define USART2_RNCR_RXNCTR_MASK		0xffff
/** @defgroup usart2_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_tnpr TNPR Transmit Next Pointer Register
@{*/


#define USART2_TNPR_TXNPTR_SHIFT		0
#define USART2_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup usart2_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_tncr TNCR Transmit Next Counter Register
@{*/


#define USART2_TNCR_TXNCTR_SHIFT		0
#define USART2_TNCR_TXNCTR_MASK		0xffff
/** @defgroup usart2_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup usart2_ptcr PTCR Transfer Control Register
@{*/

/** USART2_PTCR_TXTDIS Transmitter Transfer Disable **/
#define USART2_PTCR_TXTDIS		(1 << 9)
/** USART2_PTCR_TXTEN Transmitter Transfer Enable **/
#define USART2_PTCR_TXTEN		(1 << 8)
/** USART2_PTCR_RXTDIS Receiver Transfer Disable **/
#define USART2_PTCR_RXTDIS		(1 << 1)
/** USART2_PTCR_RXTEN Receiver Transfer Enable **/
#define USART2_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup usart2_ptsr PTSR Transfer Status Register
@{*/

/** USART2_PTSR_TXTEN Transmitter Transfer Enable **/
#define USART2_PTSR_TXTEN		(1 << 8)
/** USART2_PTSR_RXTEN Receiver Transfer Enable **/
#define USART2_PTSR_RXTEN		(1 << 0)

/**@}*/

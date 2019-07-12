#pragma once 

/* --- USART3: Universal Synchronous Asynchronous Receiver Transmitter 3  */

/** @defgroup usart3_registers Universal Synchronous Asynchronous Receiver Transmitter 3 Register
@{*/

/** USART3_CR Control Register **/
#define USART3_CR			MMIO32(USART3_BASE + 0x00)
/** USART3_CR_SPI_MODE Control Register **/
#define USART3_CR_SPI_MODE			MMIO32(USART3_BASE + 0x00)
/** USART3_MR Mode Register **/
#define USART3_MR			MMIO32(USART3_BASE + 0x04)
/** USART3_MR_SPI_MODE Mode Register **/
#define USART3_MR_SPI_MODE			MMIO32(USART3_BASE + 0x04)
/** USART3_IER Interrupt Enable Register **/
#define USART3_IER			MMIO32(USART3_BASE + 0x08)
/** USART3_IER_SPI_MODE Interrupt Enable Register **/
#define USART3_IER_SPI_MODE			MMIO32(USART3_BASE + 0x08)
/** USART3_IER_LIN_MODE Interrupt Enable Register **/
#define USART3_IER_LIN_MODE			MMIO32(USART3_BASE + 0x08)
/** USART3_IDR Interrupt Disable Register **/
#define USART3_IDR			MMIO32(USART3_BASE + 0x0c)
/** USART3_IDR_SPI_MODE Interrupt Disable Register **/
#define USART3_IDR_SPI_MODE			MMIO32(USART3_BASE + 0x0c)
/** USART3_IDR_LIN_MODE Interrupt Disable Register **/
#define USART3_IDR_LIN_MODE			MMIO32(USART3_BASE + 0x0c)
/** USART3_IMR Interrupt Mask Register **/
#define USART3_IMR			MMIO32(USART3_BASE + 0x10)
/** USART3_IMR_SPI_MODE Interrupt Mask Register **/
#define USART3_IMR_SPI_MODE			MMIO32(USART3_BASE + 0x10)
/** USART3_IMR_LIN_MODE Interrupt Mask Register **/
#define USART3_IMR_LIN_MODE			MMIO32(USART3_BASE + 0x10)
/** USART3_CSR Channel Status Register **/
#define USART3_CSR			MMIO32(USART3_BASE + 0x14)
/** USART3_CSR_SPI_MODE Channel Status Register **/
#define USART3_CSR_SPI_MODE			MMIO32(USART3_BASE + 0x14)
/** USART3_CSR_LIN_MODE Channel Status Register **/
#define USART3_CSR_LIN_MODE			MMIO32(USART3_BASE + 0x14)
/** USART3_RHR Receive Holding Register **/
#define USART3_RHR			MMIO32(USART3_BASE + 0x18)
/** USART3_THR Transmit Holding Register **/
#define USART3_THR			MMIO32(USART3_BASE + 0x1c)
/** USART3_BRGR Baud Rate Generator Register **/
#define USART3_BRGR			MMIO32(USART3_BASE + 0x20)
/** USART3_RTOR Receiver Time-out Register **/
#define USART3_RTOR			MMIO32(USART3_BASE + 0x24)
/** USART3_TTGR Transmitter Timeguard Register **/
#define USART3_TTGR			MMIO32(USART3_BASE + 0x28)
/** USART3_FIDI FI DI Ratio Register **/
#define USART3_FIDI			MMIO32(USART3_BASE + 0x40)
/** USART3_NER Number of Errors Register **/
#define USART3_NER			MMIO32(USART3_BASE + 0x44)
/** USART3_IF IrDA Filter Register **/
#define USART3_IF			MMIO32(USART3_BASE + 0x4c)
/** USART3_MAN Manchester Configuration Register **/
#define USART3_MAN			MMIO32(USART3_BASE + 0x50)
/** USART3_LINMR LIN Mode Register **/
#define USART3_LINMR			MMIO32(USART3_BASE + 0x54)
/** USART3_LINIR LIN Identifier Register **/
#define USART3_LINIR			MMIO32(USART3_BASE + 0x58)
/** USART3_LINBRR LIN Baud Rate Register **/
#define USART3_LINBRR			MMIO32(USART3_BASE + 0x5c)
/** USART3_WPMR Write Protection Mode Register **/
#define USART3_WPMR			MMIO32(USART3_BASE + 0xe4)
/** USART3_WPSR Write Protection Status Register **/
#define USART3_WPSR			MMIO32(USART3_BASE + 0xe8)
/** USART3_RPR Receive Pointer Register **/
#define USART3_RPR			MMIO32(USART3_BASE + 0x100)
/** USART3_RCR Receive Counter Register **/
#define USART3_RCR			MMIO32(USART3_BASE + 0x104)
/** USART3_TPR Transmit Pointer Register **/
#define USART3_TPR			MMIO32(USART3_BASE + 0x108)
/** USART3_TCR Transmit Counter Register **/
#define USART3_TCR			MMIO32(USART3_BASE + 0x10c)
/** USART3_RNPR Receive Next Pointer Register **/
#define USART3_RNPR			MMIO32(USART3_BASE + 0x110)
/** USART3_RNCR Receive Next Counter Register **/
#define USART3_RNCR			MMIO32(USART3_BASE + 0x114)
/** USART3_TNPR Transmit Next Pointer Register **/
#define USART3_TNPR			MMIO32(USART3_BASE + 0x118)
/** USART3_TNCR Transmit Next Counter Register **/
#define USART3_TNCR			MMIO32(USART3_BASE + 0x11c)
/** USART3_PTCR Transfer Control Register **/
#define USART3_PTCR			MMIO32(USART3_BASE + 0x120)
/** USART3_PTSR Transfer Status Register **/
#define USART3_PTSR			MMIO32(USART3_BASE + 0x124)

/**@}*/


/** @defgroup usart3_cr CR Control Register
@{*/

/** USART3_CR_LINWKUP Send LIN Wakeup Signal **/
#define USART3_CR_LINWKUP		(1 << 21)
/** USART3_CR_LINABT Abort LIN Transmission **/
#define USART3_CR_LINABT		(1 << 20)
/** USART3_CR_RTSDIS Request to Send Disable **/
#define USART3_CR_RTSDIS		(1 << 19)
/** USART3_CR_RTSEN Request to Send Enable **/
#define USART3_CR_RTSEN		(1 << 18)
/** USART3_CR_RETTO Rearm Time-out **/
#define USART3_CR_RETTO		(1 << 15)
/** USART3_CR_RSTNACK Reset Non Acknowledge **/
#define USART3_CR_RSTNACK		(1 << 14)
/** USART3_CR_RSTIT Reset Iterations **/
#define USART3_CR_RSTIT		(1 << 13)
/** USART3_CR_SENDA Send Address **/
#define USART3_CR_SENDA		(1 << 12)
/** USART3_CR_STTTO Start Time-out **/
#define USART3_CR_STTTO		(1 << 11)
/** USART3_CR_STPBRK Stop Break **/
#define USART3_CR_STPBRK		(1 << 10)
/** USART3_CR_STTBRK Start Break **/
#define USART3_CR_STTBRK		(1 << 9)
/** USART3_CR_RSTSTA Reset Status Bits **/
#define USART3_CR_RSTSTA		(1 << 8)
/** USART3_CR_TXDIS Transmitter Disable **/
#define USART3_CR_TXDIS		(1 << 7)
/** USART3_CR_TXEN Transmitter Enable **/
#define USART3_CR_TXEN		(1 << 6)
/** USART3_CR_RXDIS Receiver Disable **/
#define USART3_CR_RXDIS		(1 << 5)
/** USART3_CR_RXEN Receiver Enable **/
#define USART3_CR_RXEN		(1 << 4)
/** USART3_CR_RSTTX Reset Transmitter **/
#define USART3_CR_RSTTX		(1 << 3)
/** USART3_CR_RSTRX Reset Receiver **/
#define USART3_CR_RSTRX		(1 << 2)

/**@}*/

/** @defgroup usart3_cr_spi_mode CRSPIMODE Control Register
@{*/

/** USART3_CR_SPI_MODE_RCS Release SPI Chip Select **/
#define USART3_CR_SPI_MODE_RCS		(1 << 19)
/** USART3_CR_SPI_MODE_FCS Force SPI Chip Select **/
#define USART3_CR_SPI_MODE_FCS		(1 << 18)
/** USART3_CR_SPI_MODE_RSTSTA Reset Status Bits **/
#define USART3_CR_SPI_MODE_RSTSTA		(1 << 8)
/** USART3_CR_SPI_MODE_TXDIS Transmitter Disable **/
#define USART3_CR_SPI_MODE_TXDIS		(1 << 7)
/** USART3_CR_SPI_MODE_TXEN Transmitter Enable **/
#define USART3_CR_SPI_MODE_TXEN		(1 << 6)
/** USART3_CR_SPI_MODE_RXDIS Receiver Disable **/
#define USART3_CR_SPI_MODE_RXDIS		(1 << 5)
/** USART3_CR_SPI_MODE_RXEN Receiver Enable **/
#define USART3_CR_SPI_MODE_RXEN		(1 << 4)
/** USART3_CR_SPI_MODE_RSTTX Reset Transmitter **/
#define USART3_CR_SPI_MODE_RSTTX		(1 << 3)
/** USART3_CR_SPI_MODE_RSTRX Reset Receiver **/
#define USART3_CR_SPI_MODE_RSTRX		(1 << 2)

/**@}*/

/** @defgroup usart3_mr MR Mode Register
@{*/

/** USART3_MR_ONEBIT Start Frame Delimiter Selector **/
#define USART3_MR_ONEBIT		(1 << 31)
/** USART3_MR_MODSYNC Manchester Synchronization Mode **/
#define USART3_MR_MODSYNC		(1 << 30)
/** USART3_MR_MAN Manchester Encoder/Decoder Enable **/
#define USART3_MR_MAN		(1 << 29)
/** USART3_MR_FILTER Infrared Receive Line Filter **/
#define USART3_MR_FILTER		(1 << 28)

#define USART3_MR_MAX_ITERATION_SHIFT		24
#define USART3_MR_MAX_ITERATION_MASK		0x07
/** @defgroup usart3_mr_max_iteration MAXITERATION Maximum Number of Automatic Iteration
@{*/
/**@}*/

/** USART3_MR_INVDATA Inverted Data **/
#define USART3_MR_INVDATA		(1 << 23)
/** USART3_MR_VAR_SYNC Variable Synchronization of Command/Data Sync Start Frame Delimiter **/
#define USART3_MR_VAR_SYNC		(1 << 22)
/** USART3_MR_DSNACK Disable Successive NACK **/
#define USART3_MR_DSNACK		(1 << 21)
/** USART3_MR_INACK Inhibit Non Acknowledge **/
#define USART3_MR_INACK		(1 << 20)
/** USART3_MR_OVER Oversampling Mode **/
#define USART3_MR_OVER		(1 << 19)
/** USART3_MR_CLKO Clock Output Select **/
#define USART3_MR_CLKO		(1 << 18)
/** USART3_MR_MODE9 9-bit Character Length **/
#define USART3_MR_MODE9		(1 << 17)
/** USART3_MR_MSBF Bit Order **/
#define USART3_MR_MSBF		(1 << 16)

#define USART3_MR_CHMODE_SHIFT		14
#define USART3_MR_CHMODE_MASK		0x03
/** @defgroup usart3_mr_chmode CHMODE Channel Mode
@{*/
/**@}*/


#define USART3_MR_NBSTOP_SHIFT		12
#define USART3_MR_NBSTOP_MASK		0x03
/** @defgroup usart3_mr_nbstop NBSTOP Number of Stop Bits
@{*/
/**@}*/


#define USART3_MR_PAR_SHIFT		9
#define USART3_MR_PAR_MASK		0x07
/** @defgroup usart3_mr_par PAR Parity Type
@{*/
/**@}*/

/** USART3_MR_SYNC Synchronous Mode Select **/
#define USART3_MR_SYNC		(1 << 8)

#define USART3_MR_CHRL_SHIFT		6
#define USART3_MR_CHRL_MASK		0x03
/** @defgroup usart3_mr_chrl CHRL Character Length
@{*/
/**@}*/


#define USART3_MR_USCLKS_SHIFT		4
#define USART3_MR_USCLKS_MASK		0x03
/** @defgroup usart3_mr_usclks USCLKS Clock Selection
@{*/
/**@}*/


#define USART3_MR_USART_MODE_SHIFT		0
#define USART3_MR_USART_MODE_MASK		0x0f
/** @defgroup usart3_mr_usart_mode USARTMODE USART Mode of Operation
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_mr_spi_mode MRSPIMODE Mode Register
@{*/

/** USART3_MR_SPI_MODE_WRDBT Wait Read Data Before Transfer **/
#define USART3_MR_SPI_MODE_WRDBT		(1 << 20)
/** USART3_MR_SPI_MODE_CPOL SPI Clock Polarity **/
#define USART3_MR_SPI_MODE_CPOL		(1 << 16)
/** USART3_MR_SPI_MODE_CPHA SPI Clock Phase **/
#define USART3_MR_SPI_MODE_CPHA		(1 << 8)

#define USART3_MR_SPI_MODE_CHRL_SHIFT		6
#define USART3_MR_SPI_MODE_CHRL_MASK		0x03
/** @defgroup usart3_mr_spi_mode_chrl CHRL Character Length
@{*/
/**@}*/


#define USART3_MR_SPI_MODE_USCLKS_SHIFT		4
#define USART3_MR_SPI_MODE_USCLKS_MASK		0x03
/** @defgroup usart3_mr_spi_mode_usclks USCLKS Clock Selection
@{*/
/**@}*/


#define USART3_MR_SPI_MODE_USART_MODE_SHIFT		0
#define USART3_MR_SPI_MODE_USART_MODE_MASK		0x0f
/** @defgroup usart3_mr_spi_mode_usart_mode USARTMODE USART Mode of Operation
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_ier IER Interrupt Enable Register
@{*/

/** USART3_IER_MANE Manchester Error Interrupt Enable **/
#define USART3_IER_MANE		(1 << 24)
/** USART3_IER_CTSIC Clear to Send Input Change Interrupt Enable **/
#define USART3_IER_CTSIC		(1 << 19)
/** USART3_IER_NACK Non Acknowledge Interrupt Enable **/
#define USART3_IER_NACK		(1 << 13)
/** USART3_IER_RXBUFF Buffer Full Interrupt Enable (available in all USART modes of operation) **/
#define USART3_IER_RXBUFF		(1 << 12)
/** USART3_IER_TXBUFE Buffer Empty Interrupt Enable (available in all USART modes of operation) **/
#define USART3_IER_TXBUFE		(1 << 11)
/** USART3_IER_ITER Max number of Repetitions Reached Interrupt Enable **/
#define USART3_IER_ITER		(1 << 10)
/** USART3_IER_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART3_IER_TXEMPTY		(1 << 9)
/** USART3_IER_TIMEOUT Time-out Interrupt Enable **/
#define USART3_IER_TIMEOUT		(1 << 8)
/** USART3_IER_PARE Parity Error Interrupt Enable **/
#define USART3_IER_PARE		(1 << 7)
/** USART3_IER_FRAME Framing Error Interrupt Enable **/
#define USART3_IER_FRAME		(1 << 6)
/** USART3_IER_OVRE Overrun Error Interrupt Enable **/
#define USART3_IER_OVRE		(1 << 5)
/** USART3_IER_ENDTX End of Transmit Interrupt Enable (available in all USART modes of operation) **/
#define USART3_IER_ENDTX		(1 << 4)
/** USART3_IER_ENDRX End of Receive Transfer Interrupt Enable (available in all USART modes of operation) **/
#define USART3_IER_ENDRX		(1 << 3)
/** USART3_IER_RXBRK Receiver Break Interrupt Enable **/
#define USART3_IER_RXBRK		(1 << 2)
/** USART3_IER_TXRDY TXRDY Interrupt Enable **/
#define USART3_IER_TXRDY		(1 << 1)
/** USART3_IER_RXRDY RXRDY Interrupt Enable **/
#define USART3_IER_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart3_ier_spi_mode IERSPIMODE Interrupt Enable Register
@{*/

/** USART3_IER_SPI_MODE_RXBUFF  **/
#define USART3_IER_SPI_MODE_RXBUFF		(1 << 12)
/** USART3_IER_SPI_MODE_TXBUFE  **/
#define USART3_IER_SPI_MODE_TXBUFE		(1 << 11)
/** USART3_IER_SPI_MODE_UNRE SPI Underrun Error Interrupt Enable **/
#define USART3_IER_SPI_MODE_UNRE		(1 << 10)
/** USART3_IER_SPI_MODE_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART3_IER_SPI_MODE_TXEMPTY		(1 << 9)
/** USART3_IER_SPI_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART3_IER_SPI_MODE_OVRE		(1 << 5)
/** USART3_IER_SPI_MODE_ENDTX  **/
#define USART3_IER_SPI_MODE_ENDTX		(1 << 4)
/** USART3_IER_SPI_MODE_ENDRX  **/
#define USART3_IER_SPI_MODE_ENDRX		(1 << 3)
/** USART3_IER_SPI_MODE_TXRDY TXRDY Interrupt Enable **/
#define USART3_IER_SPI_MODE_TXRDY		(1 << 1)
/** USART3_IER_SPI_MODE_RXRDY RXRDY Interrupt Enable **/
#define USART3_IER_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart3_ier_lin_mode IERLINMODE Interrupt Enable Register
@{*/

/** USART3_IER_LIN_MODE_LINSNRE LIN Slave Not Responding Error Interrupt Enable **/
#define USART3_IER_LIN_MODE_LINSNRE		(1 << 29)
/** USART3_IER_LIN_MODE_LINCE LIN Checksum Error Interrupt Enable **/
#define USART3_IER_LIN_MODE_LINCE		(1 << 28)
/** USART3_IER_LIN_MODE_LINIPE LIN Identifier Parity Interrupt Enable **/
#define USART3_IER_LIN_MODE_LINIPE		(1 << 27)
/** USART3_IER_LIN_MODE_LINISFE LIN Inconsistent Synch Field Error Interrupt Enable **/
#define USART3_IER_LIN_MODE_LINISFE		(1 << 26)
/** USART3_IER_LIN_MODE_LINBE LIN Bus Error Interrupt Enable **/
#define USART3_IER_LIN_MODE_LINBE		(1 << 25)
/** USART3_IER_LIN_MODE_LINTC LIN Transfer Completed Interrupt Enable **/
#define USART3_IER_LIN_MODE_LINTC		(1 << 15)
/** USART3_IER_LIN_MODE_LINID LIN Identifier Sent or LIN Identifier Received Interrupt Enable **/
#define USART3_IER_LIN_MODE_LINID		(1 << 14)
/** USART3_IER_LIN_MODE_LINBK LIN Break Sent or LIN Break Received Interrupt Enable **/
#define USART3_IER_LIN_MODE_LINBK		(1 << 13)
/** USART3_IER_LIN_MODE_RXBUFF  **/
#define USART3_IER_LIN_MODE_RXBUFF		(1 << 12)
/** USART3_IER_LIN_MODE_TXBUFE  **/
#define USART3_IER_LIN_MODE_TXBUFE		(1 << 11)
/** USART3_IER_LIN_MODE_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART3_IER_LIN_MODE_TXEMPTY		(1 << 9)
/** USART3_IER_LIN_MODE_TIMEOUT Time-out Interrupt Enable **/
#define USART3_IER_LIN_MODE_TIMEOUT		(1 << 8)
/** USART3_IER_LIN_MODE_PARE Parity Error Interrupt Enable **/
#define USART3_IER_LIN_MODE_PARE		(1 << 7)
/** USART3_IER_LIN_MODE_FRAME Framing Error Interrupt Enable **/
#define USART3_IER_LIN_MODE_FRAME		(1 << 6)
/** USART3_IER_LIN_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART3_IER_LIN_MODE_OVRE		(1 << 5)
/** USART3_IER_LIN_MODE_ENDTX  **/
#define USART3_IER_LIN_MODE_ENDTX		(1 << 4)
/** USART3_IER_LIN_MODE_ENDRX  **/
#define USART3_IER_LIN_MODE_ENDRX		(1 << 3)
/** USART3_IER_LIN_MODE_TXRDY TXRDY Interrupt Enable **/
#define USART3_IER_LIN_MODE_TXRDY		(1 << 1)
/** USART3_IER_LIN_MODE_RXRDY RXRDY Interrupt Enable **/
#define USART3_IER_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart3_idr IDR Interrupt Disable Register
@{*/

/** USART3_IDR_MANE Manchester Error Interrupt Disable **/
#define USART3_IDR_MANE		(1 << 24)
/** USART3_IDR_CTSIC Clear to Send Input Change Interrupt Disable **/
#define USART3_IDR_CTSIC		(1 << 19)
/** USART3_IDR_NACK Non Acknowledge Interrupt Disable **/
#define USART3_IDR_NACK		(1 << 13)
/** USART3_IDR_RXBUFF Buffer Full Interrupt Disable (available in all USART modes of operation) **/
#define USART3_IDR_RXBUFF		(1 << 12)
/** USART3_IDR_TXBUFE Buffer Empty Interrupt Disable (available in all USART modes of operation) **/
#define USART3_IDR_TXBUFE		(1 << 11)
/** USART3_IDR_ITER Max Number of Repetitions Reached Interrupt Disable **/
#define USART3_IDR_ITER		(1 << 10)
/** USART3_IDR_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART3_IDR_TXEMPTY		(1 << 9)
/** USART3_IDR_TIMEOUT Time-out Interrupt Disable **/
#define USART3_IDR_TIMEOUT		(1 << 8)
/** USART3_IDR_PARE Parity Error Interrupt Disable **/
#define USART3_IDR_PARE		(1 << 7)
/** USART3_IDR_FRAME Framing Error Interrupt Disable **/
#define USART3_IDR_FRAME		(1 << 6)
/** USART3_IDR_OVRE Overrun Error Interrupt Enable **/
#define USART3_IDR_OVRE		(1 << 5)
/** USART3_IDR_ENDTX End of Transmit Interrupt Disable (available in all USART modes of operation) **/
#define USART3_IDR_ENDTX		(1 << 4)
/** USART3_IDR_ENDRX End of Receive Transfer Interrupt Disable (available in all USART modes of operation) **/
#define USART3_IDR_ENDRX		(1 << 3)
/** USART3_IDR_RXBRK Receiver Break Interrupt Disable **/
#define USART3_IDR_RXBRK		(1 << 2)
/** USART3_IDR_TXRDY TXRDY Interrupt Disable **/
#define USART3_IDR_TXRDY		(1 << 1)
/** USART3_IDR_RXRDY RXRDY Interrupt Disable **/
#define USART3_IDR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart3_idr_spi_mode IDRSPIMODE Interrupt Disable Register
@{*/

/** USART3_IDR_SPI_MODE_RXBUFF  **/
#define USART3_IDR_SPI_MODE_RXBUFF		(1 << 12)
/** USART3_IDR_SPI_MODE_TXBUFE  **/
#define USART3_IDR_SPI_MODE_TXBUFE		(1 << 11)
/** USART3_IDR_SPI_MODE_UNRE SPI Underrun Error Interrupt Disable **/
#define USART3_IDR_SPI_MODE_UNRE		(1 << 10)
/** USART3_IDR_SPI_MODE_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART3_IDR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART3_IDR_SPI_MODE_OVRE Overrun Error Interrupt Disable **/
#define USART3_IDR_SPI_MODE_OVRE		(1 << 5)
/** USART3_IDR_SPI_MODE_ENDTX  **/
#define USART3_IDR_SPI_MODE_ENDTX		(1 << 4)
/** USART3_IDR_SPI_MODE_ENDRX  **/
#define USART3_IDR_SPI_MODE_ENDRX		(1 << 3)
/** USART3_IDR_SPI_MODE_TXRDY TXRDY Interrupt Disable **/
#define USART3_IDR_SPI_MODE_TXRDY		(1 << 1)
/** USART3_IDR_SPI_MODE_RXRDY RXRDY Interrupt Disable **/
#define USART3_IDR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart3_idr_lin_mode IDRLINMODE Interrupt Disable Register
@{*/

/** USART3_IDR_LIN_MODE_LINSNRE LIN Slave Not Responding Error Interrupt Disable **/
#define USART3_IDR_LIN_MODE_LINSNRE		(1 << 29)
/** USART3_IDR_LIN_MODE_LINCE LIN Checksum Error Interrupt Disable **/
#define USART3_IDR_LIN_MODE_LINCE		(1 << 28)
/** USART3_IDR_LIN_MODE_LINIPE LIN Identifier Parity Interrupt Disable **/
#define USART3_IDR_LIN_MODE_LINIPE		(1 << 27)
/** USART3_IDR_LIN_MODE_LINISFE LIN Inconsistent Synch Field Error Interrupt Disable **/
#define USART3_IDR_LIN_MODE_LINISFE		(1 << 26)
/** USART3_IDR_LIN_MODE_LINBE LIN Bus Error Interrupt Disable **/
#define USART3_IDR_LIN_MODE_LINBE		(1 << 25)
/** USART3_IDR_LIN_MODE_LINTC LIN Transfer Completed Interrupt Disable **/
#define USART3_IDR_LIN_MODE_LINTC		(1 << 15)
/** USART3_IDR_LIN_MODE_LINID LIN Identifier Sent or LIN Identifier Received Interrupt Disable **/
#define USART3_IDR_LIN_MODE_LINID		(1 << 14)
/** USART3_IDR_LIN_MODE_LINBK LIN Break Sent or LIN Break Received Interrupt Disable **/
#define USART3_IDR_LIN_MODE_LINBK		(1 << 13)
/** USART3_IDR_LIN_MODE_RXBUFF  **/
#define USART3_IDR_LIN_MODE_RXBUFF		(1 << 12)
/** USART3_IDR_LIN_MODE_TXBUFE  **/
#define USART3_IDR_LIN_MODE_TXBUFE		(1 << 11)
/** USART3_IDR_LIN_MODE_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART3_IDR_LIN_MODE_TXEMPTY		(1 << 9)
/** USART3_IDR_LIN_MODE_TIMEOUT Time-out Interrupt Disable **/
#define USART3_IDR_LIN_MODE_TIMEOUT		(1 << 8)
/** USART3_IDR_LIN_MODE_PARE Parity Error Interrupt Disable **/
#define USART3_IDR_LIN_MODE_PARE		(1 << 7)
/** USART3_IDR_LIN_MODE_FRAME Framing Error Interrupt Disable **/
#define USART3_IDR_LIN_MODE_FRAME		(1 << 6)
/** USART3_IDR_LIN_MODE_OVRE Overrun Error Interrupt Disable **/
#define USART3_IDR_LIN_MODE_OVRE		(1 << 5)
/** USART3_IDR_LIN_MODE_ENDTX  **/
#define USART3_IDR_LIN_MODE_ENDTX		(1 << 4)
/** USART3_IDR_LIN_MODE_ENDRX  **/
#define USART3_IDR_LIN_MODE_ENDRX		(1 << 3)
/** USART3_IDR_LIN_MODE_TXRDY TXRDY Interrupt Disable **/
#define USART3_IDR_LIN_MODE_TXRDY		(1 << 1)
/** USART3_IDR_LIN_MODE_RXRDY RXRDY Interrupt Disable **/
#define USART3_IDR_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart3_imr IMR Interrupt Mask Register
@{*/

/** USART3_IMR_MANE Manchester Error Interrupt Mask **/
#define USART3_IMR_MANE		(1 << 24)
/** USART3_IMR_CTSIC Clear to Send Input Change Interrupt Mask **/
#define USART3_IMR_CTSIC		(1 << 19)
/** USART3_IMR_NACK Non Acknowledge Interrupt Mask **/
#define USART3_IMR_NACK		(1 << 13)
/** USART3_IMR_RXBUFF Buffer Full Interrupt Mask (available in all USART modes of operation) **/
#define USART3_IMR_RXBUFF		(1 << 12)
/** USART3_IMR_TXBUFE Buffer Empty Interrupt Mask (available in all USART modes of operation) **/
#define USART3_IMR_TXBUFE		(1 << 11)
/** USART3_IMR_ITER Max Number of Repetitions Reached Interrupt Mask **/
#define USART3_IMR_ITER		(1 << 10)
/** USART3_IMR_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART3_IMR_TXEMPTY		(1 << 9)
/** USART3_IMR_TIMEOUT Time-out Interrupt Mask **/
#define USART3_IMR_TIMEOUT		(1 << 8)
/** USART3_IMR_PARE Parity Error Interrupt Mask **/
#define USART3_IMR_PARE		(1 << 7)
/** USART3_IMR_FRAME Framing Error Interrupt Mask **/
#define USART3_IMR_FRAME		(1 << 6)
/** USART3_IMR_OVRE Overrun Error Interrupt Mask **/
#define USART3_IMR_OVRE		(1 << 5)
/** USART3_IMR_ENDTX End of Transmit Interrupt Mask (available in all USART modes of operation) **/
#define USART3_IMR_ENDTX		(1 << 4)
/** USART3_IMR_ENDRX End of Receive Transfer Interrupt Mask (available in all USART modes of operation) **/
#define USART3_IMR_ENDRX		(1 << 3)
/** USART3_IMR_RXBRK Receiver Break Interrupt Mask **/
#define USART3_IMR_RXBRK		(1 << 2)
/** USART3_IMR_TXRDY TXRDY Interrupt Mask **/
#define USART3_IMR_TXRDY		(1 << 1)
/** USART3_IMR_RXRDY RXRDY Interrupt Mask **/
#define USART3_IMR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart3_imr_spi_mode IMRSPIMODE Interrupt Mask Register
@{*/

/** USART3_IMR_SPI_MODE_RXBUFF  **/
#define USART3_IMR_SPI_MODE_RXBUFF		(1 << 12)
/** USART3_IMR_SPI_MODE_TXBUFE  **/
#define USART3_IMR_SPI_MODE_TXBUFE		(1 << 11)
/** USART3_IMR_SPI_MODE_UNRE SPI Underrun Error Interrupt Mask **/
#define USART3_IMR_SPI_MODE_UNRE		(1 << 10)
/** USART3_IMR_SPI_MODE_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART3_IMR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART3_IMR_SPI_MODE_OVRE Overrun Error Interrupt Mask **/
#define USART3_IMR_SPI_MODE_OVRE		(1 << 5)
/** USART3_IMR_SPI_MODE_ENDTX  **/
#define USART3_IMR_SPI_MODE_ENDTX		(1 << 4)
/** USART3_IMR_SPI_MODE_ENDRX  **/
#define USART3_IMR_SPI_MODE_ENDRX		(1 << 3)
/** USART3_IMR_SPI_MODE_TXRDY TXRDY Interrupt Mask **/
#define USART3_IMR_SPI_MODE_TXRDY		(1 << 1)
/** USART3_IMR_SPI_MODE_RXRDY RXRDY Interrupt Mask **/
#define USART3_IMR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart3_imr_lin_mode IMRLINMODE Interrupt Mask Register
@{*/

/** USART3_IMR_LIN_MODE_LINSNRE LIN Slave Not Responding Error Interrupt Mask **/
#define USART3_IMR_LIN_MODE_LINSNRE		(1 << 29)
/** USART3_IMR_LIN_MODE_LINCE LIN Checksum Error Interrupt Mask **/
#define USART3_IMR_LIN_MODE_LINCE		(1 << 28)
/** USART3_IMR_LIN_MODE_LINIPE LIN Identifier Parity Interrupt Mask **/
#define USART3_IMR_LIN_MODE_LINIPE		(1 << 27)
/** USART3_IMR_LIN_MODE_LINISFE LIN Inconsistent Synch Field Error Interrupt Mask **/
#define USART3_IMR_LIN_MODE_LINISFE		(1 << 26)
/** USART3_IMR_LIN_MODE_LINBE LIN Bus Error Interrupt Mask **/
#define USART3_IMR_LIN_MODE_LINBE		(1 << 25)
/** USART3_IMR_LIN_MODE_LINTC LIN Transfer Completed Interrupt Mask **/
#define USART3_IMR_LIN_MODE_LINTC		(1 << 15)
/** USART3_IMR_LIN_MODE_LINID LIN Identifier Sent or LIN Identifier Received Interrupt Mask **/
#define USART3_IMR_LIN_MODE_LINID		(1 << 14)
/** USART3_IMR_LIN_MODE_LINBK LIN Break Sent or LIN Break Received Interrupt Mask **/
#define USART3_IMR_LIN_MODE_LINBK		(1 << 13)
/** USART3_IMR_LIN_MODE_RXBUFF  **/
#define USART3_IMR_LIN_MODE_RXBUFF		(1 << 12)
/** USART3_IMR_LIN_MODE_TXBUFE  **/
#define USART3_IMR_LIN_MODE_TXBUFE		(1 << 11)
/** USART3_IMR_LIN_MODE_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART3_IMR_LIN_MODE_TXEMPTY		(1 << 9)
/** USART3_IMR_LIN_MODE_TIMEOUT Time-out Interrupt Mask **/
#define USART3_IMR_LIN_MODE_TIMEOUT		(1 << 8)
/** USART3_IMR_LIN_MODE_PARE Parity Error Interrupt Mask **/
#define USART3_IMR_LIN_MODE_PARE		(1 << 7)
/** USART3_IMR_LIN_MODE_FRAME Framing Error Interrupt Mask **/
#define USART3_IMR_LIN_MODE_FRAME		(1 << 6)
/** USART3_IMR_LIN_MODE_OVRE Overrun Error Interrupt Mask **/
#define USART3_IMR_LIN_MODE_OVRE		(1 << 5)
/** USART3_IMR_LIN_MODE_ENDTX  **/
#define USART3_IMR_LIN_MODE_ENDTX		(1 << 4)
/** USART3_IMR_LIN_MODE_ENDRX  **/
#define USART3_IMR_LIN_MODE_ENDRX		(1 << 3)
/** USART3_IMR_LIN_MODE_TXRDY TXRDY Interrupt Mask **/
#define USART3_IMR_LIN_MODE_TXRDY		(1 << 1)
/** USART3_IMR_LIN_MODE_RXRDY RXRDY Interrupt Mask **/
#define USART3_IMR_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart3_csr CSR Channel Status Register
@{*/

/** USART3_CSR_MANERR Manchester Error **/
#define USART3_CSR_MANERR		(1 << 24)
/** USART3_CSR_CTS Image of CTS Input **/
#define USART3_CSR_CTS		(1 << 23)
/** USART3_CSR_CTSIC Clear to Send Input Change Flag **/
#define USART3_CSR_CTSIC		(1 << 19)
/** USART3_CSR_NACK Non Acknowledge Interrupt **/
#define USART3_CSR_NACK		(1 << 13)
/** USART3_CSR_RXBUFF Reception Buffer Full **/
#define USART3_CSR_RXBUFF		(1 << 12)
/** USART3_CSR_TXBUFE Transmission Buffer Empty **/
#define USART3_CSR_TXBUFE		(1 << 11)
/** USART3_CSR_ITER Max Number of Repetitions Reached **/
#define USART3_CSR_ITER		(1 << 10)
/** USART3_CSR_TXEMPTY Transmitter Empty **/
#define USART3_CSR_TXEMPTY		(1 << 9)
/** USART3_CSR_TIMEOUT Receiver Time-out **/
#define USART3_CSR_TIMEOUT		(1 << 8)
/** USART3_CSR_PARE Parity Error **/
#define USART3_CSR_PARE		(1 << 7)
/** USART3_CSR_FRAME Framing Error **/
#define USART3_CSR_FRAME		(1 << 6)
/** USART3_CSR_OVRE Overrun Error **/
#define USART3_CSR_OVRE		(1 << 5)
/** USART3_CSR_ENDTX End of Transmitter Transfer **/
#define USART3_CSR_ENDTX		(1 << 4)
/** USART3_CSR_ENDRX End of Receiver Transfer **/
#define USART3_CSR_ENDRX		(1 << 3)
/** USART3_CSR_RXBRK Break Received/End of Break **/
#define USART3_CSR_RXBRK		(1 << 2)
/** USART3_CSR_TXRDY Transmitter Ready **/
#define USART3_CSR_TXRDY		(1 << 1)
/** USART3_CSR_RXRDY Receiver Ready **/
#define USART3_CSR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart3_csr_spi_mode CSRSPIMODE Channel Status Register
@{*/

/** USART3_CSR_SPI_MODE_RXBUFF  **/
#define USART3_CSR_SPI_MODE_RXBUFF		(1 << 12)
/** USART3_CSR_SPI_MODE_TXBUFE  **/
#define USART3_CSR_SPI_MODE_TXBUFE		(1 << 11)
/** USART3_CSR_SPI_MODE_UNRE Underrun Error **/
#define USART3_CSR_SPI_MODE_UNRE		(1 << 10)
/** USART3_CSR_SPI_MODE_TXEMPTY Transmitter Empty **/
#define USART3_CSR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART3_CSR_SPI_MODE_OVRE Overrun Error **/
#define USART3_CSR_SPI_MODE_OVRE		(1 << 5)
/** USART3_CSR_SPI_MODE_ENDTX  **/
#define USART3_CSR_SPI_MODE_ENDTX		(1 << 4)
/** USART3_CSR_SPI_MODE_ENDRX  **/
#define USART3_CSR_SPI_MODE_ENDRX		(1 << 3)
/** USART3_CSR_SPI_MODE_TXRDY Transmitter Ready **/
#define USART3_CSR_SPI_MODE_TXRDY		(1 << 1)
/** USART3_CSR_SPI_MODE_RXRDY Receiver Ready **/
#define USART3_CSR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart3_csr_lin_mode CSRLINMODE Channel Status Register
@{*/

/** USART3_CSR_LIN_MODE_LINSNRE LIN Slave Not Responding Error **/
#define USART3_CSR_LIN_MODE_LINSNRE		(1 << 29)
/** USART3_CSR_LIN_MODE_LINCE LIN Checksum Error **/
#define USART3_CSR_LIN_MODE_LINCE		(1 << 28)
/** USART3_CSR_LIN_MODE_LINIPE LIN Identifier Parity Error **/
#define USART3_CSR_LIN_MODE_LINIPE		(1 << 27)
/** USART3_CSR_LIN_MODE_LINISFE LIN Inconsistent Synch Field Error **/
#define USART3_CSR_LIN_MODE_LINISFE		(1 << 26)
/** USART3_CSR_LIN_MODE_LINBE LIN Bit Error **/
#define USART3_CSR_LIN_MODE_LINBE		(1 << 25)
/** USART3_CSR_LIN_MODE_LINBLS LIN Bus Line Status **/
#define USART3_CSR_LIN_MODE_LINBLS		(1 << 23)
/** USART3_CSR_LIN_MODE_LINTC LIN Transfer Completed **/
#define USART3_CSR_LIN_MODE_LINTC		(1 << 15)
/** USART3_CSR_LIN_MODE_LINID LIN Identifier Sent or LIN Identifier Received **/
#define USART3_CSR_LIN_MODE_LINID		(1 << 14)
/** USART3_CSR_LIN_MODE_LINBK LIN Break Sent or LIN Break Received **/
#define USART3_CSR_LIN_MODE_LINBK		(1 << 13)
/** USART3_CSR_LIN_MODE_RXBUFF  **/
#define USART3_CSR_LIN_MODE_RXBUFF		(1 << 12)
/** USART3_CSR_LIN_MODE_TXBUFE  **/
#define USART3_CSR_LIN_MODE_TXBUFE		(1 << 11)
/** USART3_CSR_LIN_MODE_TXEMPTY Transmitter Empty **/
#define USART3_CSR_LIN_MODE_TXEMPTY		(1 << 9)
/** USART3_CSR_LIN_MODE_TIMEOUT Receiver Time-out **/
#define USART3_CSR_LIN_MODE_TIMEOUT		(1 << 8)
/** USART3_CSR_LIN_MODE_PARE Parity Error **/
#define USART3_CSR_LIN_MODE_PARE		(1 << 7)
/** USART3_CSR_LIN_MODE_FRAME Framing Error **/
#define USART3_CSR_LIN_MODE_FRAME		(1 << 6)
/** USART3_CSR_LIN_MODE_OVRE Overrun Error **/
#define USART3_CSR_LIN_MODE_OVRE		(1 << 5)
/** USART3_CSR_LIN_MODE_ENDTX  **/
#define USART3_CSR_LIN_MODE_ENDTX		(1 << 4)
/** USART3_CSR_LIN_MODE_ENDRX  **/
#define USART3_CSR_LIN_MODE_ENDRX		(1 << 3)
/** USART3_CSR_LIN_MODE_TXRDY Transmitter Ready **/
#define USART3_CSR_LIN_MODE_TXRDY		(1 << 1)
/** USART3_CSR_LIN_MODE_RXRDY Receiver Ready **/
#define USART3_CSR_LIN_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart3_rhr RHR Receive Holding Register
@{*/

/** USART3_RHR_RXSYNH Received Sync **/
#define USART3_RHR_RXSYNH		(1 << 15)

#define USART3_RHR_RXCHR_SHIFT		0
#define USART3_RHR_RXCHR_MASK		0x1ff
/** @defgroup usart3_rhr_rxchr RXCHR Received Character
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_thr THR Transmit Holding Register
@{*/

/** USART3_THR_TXSYNH Sync Field to be Transmitted **/
#define USART3_THR_TXSYNH		(1 << 15)

#define USART3_THR_TXCHR_SHIFT		0
#define USART3_THR_TXCHR_MASK		0x1ff
/** @defgroup usart3_thr_txchr TXCHR Character to be Transmitted
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_brgr BRGR Baud Rate Generator Register
@{*/


#define USART3_BRGR_FP_SHIFT		16
#define USART3_BRGR_FP_MASK		0x07
/** @defgroup usart3_brgr_fp FP Fractional Part
@{*/
/**@}*/


#define USART3_BRGR_CD_SHIFT		0
#define USART3_BRGR_CD_MASK		0xffff
/** @defgroup usart3_brgr_cd CD Clock Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_rtor RTOR Receiver Time-out Register
@{*/


#define USART3_RTOR_TO_SHIFT		0
#define USART3_RTOR_TO_MASK		0x1ffff
/** @defgroup usart3_rtor_to TO Time-out Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_ttgr TTGR Transmitter Timeguard Register
@{*/


#define USART3_TTGR_TG_SHIFT		0
#define USART3_TTGR_TG_MASK		0xff
/** @defgroup usart3_ttgr_tg TG Timeguard Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_fidi FIDI FI DI Ratio Register
@{*/


#define USART3_FIDI_FI_DI_RATIO_SHIFT		0
#define USART3_FIDI_FI_DI_RATIO_MASK		0x7ff
/** @defgroup usart3_fidi_fi_di_ratio FIDIRATIO FI Over DI Ratio Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_ner NER Number of Errors Register
@{*/


#define USART3_NER_NB_ERRORS_SHIFT		0
#define USART3_NER_NB_ERRORS_MASK		0xff
/** @defgroup usart3_ner_nb_errors NBERRORS Number of Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_if IF IrDA Filter Register
@{*/


#define USART3_IF_IRDA_FILTER_SHIFT		0
#define USART3_IF_IRDA_FILTER_MASK		0xff
/** @defgroup usart3_if_irda_filter IRDAFILTER IrDA Filter
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_man MAN Manchester Configuration Register
@{*/

/** USART3_MAN_DRIFT Drift Compensation **/
#define USART3_MAN_DRIFT		(1 << 30)
/** USART3_MAN_ONE Must Be Set to 1 **/
#define USART3_MAN_ONE		(1 << 29)
/** USART3_MAN_RX_MPOL Receiver Manchester Polarity **/
#define USART3_MAN_RX_MPOL		(1 << 28)

#define USART3_MAN_RX_PP_SHIFT		24
#define USART3_MAN_RX_PP_MASK		0x03
/** @defgroup usart3_man_rx_pp RXPP Receiver Preamble Pattern detected
@{*/
/**@}*/


#define USART3_MAN_RX_PL_SHIFT		16
#define USART3_MAN_RX_PL_MASK		0x0f
/** @defgroup usart3_man_rx_pl RXPL Receiver Preamble Length
@{*/
/**@}*/

/** USART3_MAN_TX_MPOL Transmitter Manchester Polarity **/
#define USART3_MAN_TX_MPOL		(1 << 12)

#define USART3_MAN_TX_PP_SHIFT		8
#define USART3_MAN_TX_PP_MASK		0x03
/** @defgroup usart3_man_tx_pp TXPP Transmitter Preamble Pattern
@{*/
/**@}*/


#define USART3_MAN_TX_PL_SHIFT		0
#define USART3_MAN_TX_PL_MASK		0x0f
/** @defgroup usart3_man_tx_pl TXPL Transmitter Preamble Length
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_linmr LINMR LIN Mode Register
@{*/

/** USART3_LINMR_PDCM PDC Mode **/
#define USART3_LINMR_PDCM		(1 << 16)

#define USART3_LINMR_DLC_SHIFT		8
#define USART3_LINMR_DLC_MASK		0xff
/** @defgroup usart3_linmr_dlc DLC Data Length Control
@{*/
/**@}*/

/** USART3_LINMR_WKUPTYP Wakeup Signal Type **/
#define USART3_LINMR_WKUPTYP		(1 << 7)
/** USART3_LINMR_FSDIS Frame Slot Mode Disable **/
#define USART3_LINMR_FSDIS		(1 << 6)
/** USART3_LINMR_DLM Data Length Mode **/
#define USART3_LINMR_DLM		(1 << 5)
/** USART3_LINMR_CHKTYP Checksum Type **/
#define USART3_LINMR_CHKTYP		(1 << 4)
/** USART3_LINMR_CHKDIS Checksum Disable **/
#define USART3_LINMR_CHKDIS		(1 << 3)
/** USART3_LINMR_PARDIS Parity Disable **/
#define USART3_LINMR_PARDIS		(1 << 2)

#define USART3_LINMR_NACT_SHIFT		0
#define USART3_LINMR_NACT_MASK		0x03
/** @defgroup usart3_linmr_nact NACT LIN Node Action
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_linir LINIR LIN Identifier Register
@{*/


#define USART3_LINIR_IDCHR_SHIFT		0
#define USART3_LINIR_IDCHR_MASK		0xff
/** @defgroup usart3_linir_idchr IDCHR Identifier Character
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_linbrr LINBRR LIN Baud Rate Register
@{*/


#define USART3_LINBRR_LINFP_SHIFT		16
#define USART3_LINBRR_LINFP_MASK		0x07
/** @defgroup usart3_linbrr_linfp LINFP Fractional Part after Synchronization
@{*/
/**@}*/


#define USART3_LINBRR_LINCD_SHIFT		0
#define USART3_LINBRR_LINCD_MASK		0xffff
/** @defgroup usart3_linbrr_lincd LINCD Clock Divider after Synchronization
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_wpmr WPMR Write Protection Mode Register
@{*/


#define USART3_WPMR_WPKEY_SHIFT		8
#define USART3_WPMR_WPKEY_MASK		0xffffff
/** @defgroup usart3_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** USART3_WPMR_WPEN Write Protection Enable **/
#define USART3_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup usart3_wpsr WPSR Write Protection Status Register
@{*/


#define USART3_WPSR_WPVSRC_SHIFT		8
#define USART3_WPSR_WPVSRC_MASK		0xffff
/** @defgroup usart3_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** USART3_WPSR_WPVS Write Protection Violation Status **/
#define USART3_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup usart3_rpr RPR Receive Pointer Register
@{*/


#define USART3_RPR_RXPTR_SHIFT		0
#define USART3_RPR_RXPTR_MASK		0xffffffff
/** @defgroup usart3_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_rcr RCR Receive Counter Register
@{*/


#define USART3_RCR_RXCTR_SHIFT		0
#define USART3_RCR_RXCTR_MASK		0xffff
/** @defgroup usart3_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_tpr TPR Transmit Pointer Register
@{*/


#define USART3_TPR_TXPTR_SHIFT		0
#define USART3_TPR_TXPTR_MASK		0xffffffff
/** @defgroup usart3_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_tcr TCR Transmit Counter Register
@{*/


#define USART3_TCR_TXCTR_SHIFT		0
#define USART3_TCR_TXCTR_MASK		0xffff
/** @defgroup usart3_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_rnpr RNPR Receive Next Pointer Register
@{*/


#define USART3_RNPR_RXNPTR_SHIFT		0
#define USART3_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup usart3_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_rncr RNCR Receive Next Counter Register
@{*/


#define USART3_RNCR_RXNCTR_SHIFT		0
#define USART3_RNCR_RXNCTR_MASK		0xffff
/** @defgroup usart3_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_tnpr TNPR Transmit Next Pointer Register
@{*/


#define USART3_TNPR_TXNPTR_SHIFT		0
#define USART3_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup usart3_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_tncr TNCR Transmit Next Counter Register
@{*/


#define USART3_TNCR_TXNCTR_SHIFT		0
#define USART3_TNCR_TXNCTR_MASK		0xffff
/** @defgroup usart3_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup usart3_ptcr PTCR Transfer Control Register
@{*/

/** USART3_PTCR_TXTDIS Transmitter Transfer Disable **/
#define USART3_PTCR_TXTDIS		(1 << 9)
/** USART3_PTCR_TXTEN Transmitter Transfer Enable **/
#define USART3_PTCR_TXTEN		(1 << 8)
/** USART3_PTCR_RXTDIS Receiver Transfer Disable **/
#define USART3_PTCR_RXTDIS		(1 << 1)
/** USART3_PTCR_RXTEN Receiver Transfer Enable **/
#define USART3_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup usart3_ptsr PTSR Transfer Status Register
@{*/

/** USART3_PTSR_TXTEN Transmitter Transfer Enable **/
#define USART3_PTSR_TXTEN		(1 << 8)
/** USART3_PTSR_RXTEN Receiver Transfer Enable **/
#define USART3_PTSR_RXTEN		(1 << 0)

/**@}*/

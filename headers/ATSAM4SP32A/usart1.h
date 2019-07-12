#pragma once 

/* --- USART1: Universal Synchronous Asynchronous Receiver Transmitter 1  */

/** @defgroup usart1_registers Universal Synchronous Asynchronous Receiver Transmitter 1 Register
@{*/

/** USART1_CR Control Register **/
#define USART1_CR			MMIO32(USART1_BASE + 0x00)
/** USART1_CR_SPI_MODE Control Register **/
#define USART1_CR_SPI_MODE			MMIO32(USART1_BASE + 0x00)
/** USART1_MR Mode Register **/
#define USART1_MR			MMIO32(USART1_BASE + 0x04)
/** USART1_MR_SPI_MODE Mode Register **/
#define USART1_MR_SPI_MODE			MMIO32(USART1_BASE + 0x04)
/** USART1_IER Interrupt Enable Register **/
#define USART1_IER			MMIO32(USART1_BASE + 0x08)
/** USART1_IER_SPI_MODE Interrupt Enable Register **/
#define USART1_IER_SPI_MODE			MMIO32(USART1_BASE + 0x08)
/** USART1_IDR Interrupt Disable Register **/
#define USART1_IDR			MMIO32(USART1_BASE + 0x0c)
/** USART1_IDR_SPI_MODE Interrupt Disable Register **/
#define USART1_IDR_SPI_MODE			MMIO32(USART1_BASE + 0x0c)
/** USART1_IMR Interrupt Mask Register **/
#define USART1_IMR			MMIO32(USART1_BASE + 0x10)
/** USART1_IMR_SPI_MODE Interrupt Mask Register **/
#define USART1_IMR_SPI_MODE			MMIO32(USART1_BASE + 0x10)
/** USART1_CSR Channel Status Register **/
#define USART1_CSR			MMIO32(USART1_BASE + 0x14)
/** USART1_CSR_SPI_MODE Channel Status Register **/
#define USART1_CSR_SPI_MODE			MMIO32(USART1_BASE + 0x14)
/** USART1_RHR Receiver Holding Register **/
#define USART1_RHR			MMIO32(USART1_BASE + 0x18)
/** USART1_THR Transmitter Holding Register **/
#define USART1_THR			MMIO32(USART1_BASE + 0x1c)
/** USART1_BRGR Baud Rate Generator Register **/
#define USART1_BRGR			MMIO32(USART1_BASE + 0x20)
/** USART1_RTOR Receiver Time-out Register **/
#define USART1_RTOR			MMIO32(USART1_BASE + 0x24)
/** USART1_TTGR Transmitter Timeguard Register **/
#define USART1_TTGR			MMIO32(USART1_BASE + 0x28)
/** USART1_FIDI FI DI Ratio Register **/
#define USART1_FIDI			MMIO32(USART1_BASE + 0x40)
/** USART1_NER Number of Errors Register **/
#define USART1_NER			MMIO32(USART1_BASE + 0x44)
/** USART1_IF IrDA Filter Register **/
#define USART1_IF			MMIO32(USART1_BASE + 0x4c)
/** USART1_MAN Manchester Encoder Decoder Register **/
#define USART1_MAN			MMIO32(USART1_BASE + 0x50)
/** USART1_WPMR Write Protect Mode Register **/
#define USART1_WPMR			MMIO32(USART1_BASE + 0xe4)
/** USART1_WPSR Write Protect Status Register **/
#define USART1_WPSR			MMIO32(USART1_BASE + 0xe8)
/** USART1_VERSION Version Register **/
#define USART1_VERSION			MMIO32(USART1_BASE + 0xfc)
/** USART1_RPR Receive Pointer Register **/
#define USART1_RPR			MMIO32(USART1_BASE + 0x100)
/** USART1_RCR Receive Counter Register **/
#define USART1_RCR			MMIO32(USART1_BASE + 0x104)
/** USART1_TPR Transmit Pointer Register **/
#define USART1_TPR			MMIO32(USART1_BASE + 0x108)
/** USART1_TCR Transmit Counter Register **/
#define USART1_TCR			MMIO32(USART1_BASE + 0x10c)
/** USART1_RNPR Receive Next Pointer Register **/
#define USART1_RNPR			MMIO32(USART1_BASE + 0x110)
/** USART1_RNCR Receive Next Counter Register **/
#define USART1_RNCR			MMIO32(USART1_BASE + 0x114)
/** USART1_TNPR Transmit Next Pointer Register **/
#define USART1_TNPR			MMIO32(USART1_BASE + 0x118)
/** USART1_TNCR Transmit Next Counter Register **/
#define USART1_TNCR			MMIO32(USART1_BASE + 0x11c)
/** USART1_PTCR Transfer Control Register **/
#define USART1_PTCR			MMIO32(USART1_BASE + 0x120)
/** USART1_PTSR Transfer Status Register **/
#define USART1_PTSR			MMIO32(USART1_BASE + 0x124)

/**@}*/


/** @defgroup usart1_cr CR Control Register
@{*/

/** USART1_CR_RTSDIS Request to Send Disable **/
#define USART1_CR_RTSDIS		(1 << 19)
/** USART1_CR_RTSEN Request to Send Enable **/
#define USART1_CR_RTSEN		(1 << 18)
/** USART1_CR_RETTO Rearm Time-out **/
#define USART1_CR_RETTO		(1 << 15)
/** USART1_CR_RSTNACK Reset Non Acknowledge **/
#define USART1_CR_RSTNACK		(1 << 14)
/** USART1_CR_RSTIT Reset Iterations **/
#define USART1_CR_RSTIT		(1 << 13)
/** USART1_CR_SENDA Send Address **/
#define USART1_CR_SENDA		(1 << 12)
/** USART1_CR_STTTO Start Time-out **/
#define USART1_CR_STTTO		(1 << 11)
/** USART1_CR_STPBRK Stop Break **/
#define USART1_CR_STPBRK		(1 << 10)
/** USART1_CR_STTBRK Start Break **/
#define USART1_CR_STTBRK		(1 << 9)
/** USART1_CR_RSTSTA Reset Status Bits **/
#define USART1_CR_RSTSTA		(1 << 8)
/** USART1_CR_TXDIS Transmitter Disable **/
#define USART1_CR_TXDIS		(1 << 7)
/** USART1_CR_TXEN Transmitter Enable **/
#define USART1_CR_TXEN		(1 << 6)
/** USART1_CR_RXDIS Receiver Disable **/
#define USART1_CR_RXDIS		(1 << 5)
/** USART1_CR_RXEN Receiver Enable **/
#define USART1_CR_RXEN		(1 << 4)
/** USART1_CR_RSTTX Reset Transmitter **/
#define USART1_CR_RSTTX		(1 << 3)
/** USART1_CR_RSTRX Reset Receiver **/
#define USART1_CR_RSTRX		(1 << 2)

/**@}*/

/** @defgroup usart1_cr_spi_mode CRSPIMODE Control Register
@{*/

/** USART1_CR_SPI_MODE_RCS Release SPI Chip Select **/
#define USART1_CR_SPI_MODE_RCS		(1 << 19)
/** USART1_CR_SPI_MODE_FCS Force SPI Chip Select **/
#define USART1_CR_SPI_MODE_FCS		(1 << 18)
/** USART1_CR_SPI_MODE_RSTSTA Reset Status Bits **/
#define USART1_CR_SPI_MODE_RSTSTA		(1 << 8)
/** USART1_CR_SPI_MODE_TXDIS Transmitter Disable **/
#define USART1_CR_SPI_MODE_TXDIS		(1 << 7)
/** USART1_CR_SPI_MODE_TXEN Transmitter Enable **/
#define USART1_CR_SPI_MODE_TXEN		(1 << 6)
/** USART1_CR_SPI_MODE_RXDIS Receiver Disable **/
#define USART1_CR_SPI_MODE_RXDIS		(1 << 5)
/** USART1_CR_SPI_MODE_RXEN Receiver Enable **/
#define USART1_CR_SPI_MODE_RXEN		(1 << 4)
/** USART1_CR_SPI_MODE_RSTTX Reset Transmitter **/
#define USART1_CR_SPI_MODE_RSTTX		(1 << 3)
/** USART1_CR_SPI_MODE_RSTRX Reset Receiver **/
#define USART1_CR_SPI_MODE_RSTRX		(1 << 2)

/**@}*/

/** @defgroup usart1_mr MR Mode Register
@{*/

/** USART1_MR_ONEBIT Start Frame Delimiter Selector **/
#define USART1_MR_ONEBIT		(1 << 31)
/** USART1_MR_MODSYNC Manchester Synchronization Mode **/
#define USART1_MR_MODSYNC		(1 << 30)
/** USART1_MR_MAN Manchester Encoder/Decoder Enable **/
#define USART1_MR_MAN		(1 << 29)
/** USART1_MR_FILTER Infrared Receive Line Filter **/
#define USART1_MR_FILTER		(1 << 28)

#define USART1_MR_MAX_ITERATION_SHIFT		24
#define USART1_MR_MAX_ITERATION_MASK		0x07
/** @defgroup usart1_mr_max_iteration MAXITERATION Maximum Number of Automatic Iteration
@{*/
/**@}*/

/** USART1_MR_INVDATA Inverted Data **/
#define USART1_MR_INVDATA		(1 << 23)
/** USART1_MR_VAR_SYNC Variable Synchronization of Command/Data Sync Start Frame Delimiter **/
#define USART1_MR_VAR_SYNC		(1 << 22)
/** USART1_MR_DSNACK Disable Successive NACK **/
#define USART1_MR_DSNACK		(1 << 21)
/** USART1_MR_INACK Inhibit Non Acknowledge **/
#define USART1_MR_INACK		(1 << 20)
/** USART1_MR_OVER Oversampling Mode **/
#define USART1_MR_OVER		(1 << 19)
/** USART1_MR_CLKO Clock Output Select **/
#define USART1_MR_CLKO		(1 << 18)
/** USART1_MR_MODE9 9-bit Character Length **/
#define USART1_MR_MODE9		(1 << 17)
/** USART1_MR_MSBF Bit Order **/
#define USART1_MR_MSBF		(1 << 16)

#define USART1_MR_CHMODE_SHIFT		14
#define USART1_MR_CHMODE_MASK		0x03
/** @defgroup usart1_mr_chmode CHMODE Channel Mode
@{*/
/**@}*/


#define USART1_MR_NBSTOP_SHIFT		12
#define USART1_MR_NBSTOP_MASK		0x03
/** @defgroup usart1_mr_nbstop NBSTOP Number of Stop Bits
@{*/
/**@}*/


#define USART1_MR_PAR_SHIFT		9
#define USART1_MR_PAR_MASK		0x07
/** @defgroup usart1_mr_par PAR Parity Type
@{*/
/**@}*/

/** USART1_MR_SYNC Synchronous Mode Select **/
#define USART1_MR_SYNC		(1 << 8)

#define USART1_MR_CHRL_SHIFT		6
#define USART1_MR_CHRL_MASK		0x03
/** @defgroup usart1_mr_chrl CHRL Character Length.
@{*/
/**@}*/


#define USART1_MR_USCLKS_SHIFT		4
#define USART1_MR_USCLKS_MASK		0x03
/** @defgroup usart1_mr_usclks USCLKS Clock Selection
@{*/
/**@}*/


#define USART1_MR_USART_MODE_SHIFT		0
#define USART1_MR_USART_MODE_MASK		0x0f
/** @defgroup usart1_mr_usart_mode USARTMODE USART Mode of Operation
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_mr_spi_mode MRSPIMODE Mode Register
@{*/

/** USART1_MR_SPI_MODE_WRDBT Wait Read Data Before Transfer **/
#define USART1_MR_SPI_MODE_WRDBT		(1 << 20)
/** USART1_MR_SPI_MODE_CPOL SPI Clock Polarity **/
#define USART1_MR_SPI_MODE_CPOL		(1 << 16)
/** USART1_MR_SPI_MODE_CPHA SPI Clock Phase **/
#define USART1_MR_SPI_MODE_CPHA		(1 << 8)

#define USART1_MR_SPI_MODE_CHRL_SHIFT		6
#define USART1_MR_SPI_MODE_CHRL_MASK		0x03
/** @defgroup usart1_mr_spi_mode_chrl CHRL Character Length.
@{*/
/**@}*/


#define USART1_MR_SPI_MODE_USCLKS_SHIFT		4
#define USART1_MR_SPI_MODE_USCLKS_MASK		0x03
/** @defgroup usart1_mr_spi_mode_usclks USCLKS Clock Selection
@{*/
/**@}*/


#define USART1_MR_SPI_MODE_USART_MODE_SHIFT		0
#define USART1_MR_SPI_MODE_USART_MODE_MASK		0x0f
/** @defgroup usart1_mr_spi_mode_usart_mode USARTMODE USART Mode of Operation
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_ier IER Interrupt Enable Register
@{*/

/** USART1_IER_MANE Manchester Error Interrupt Enable **/
#define USART1_IER_MANE		(1 << 24)
/** USART1_IER_CTSIC Clear to Send Input Change Interrupt Enable **/
#define USART1_IER_CTSIC		(1 << 19)
/** USART1_IER_NACK Non AcknowledgeInterrupt Enable **/
#define USART1_IER_NACK		(1 << 13)
/** USART1_IER_RXBUFF Buffer Full Interrupt Enable (available in all USART modes of operation) **/
#define USART1_IER_RXBUFF		(1 << 12)
/** USART1_IER_TXBUFE Buffer Empty Interrupt Enable (available in all USART modes of operation) **/
#define USART1_IER_TXBUFE		(1 << 11)
/** USART1_IER_ITER Max number of Repetitions Reached Interrupt Enable **/
#define USART1_IER_ITER		(1 << 10)
/** USART1_IER_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART1_IER_TXEMPTY		(1 << 9)
/** USART1_IER_TIMEOUT Time-out Interrupt Enable **/
#define USART1_IER_TIMEOUT		(1 << 8)
/** USART1_IER_PARE Parity Error Interrupt Enable **/
#define USART1_IER_PARE		(1 << 7)
/** USART1_IER_FRAME Framing Error Interrupt Enable **/
#define USART1_IER_FRAME		(1 << 6)
/** USART1_IER_OVRE Overrun Error Interrupt Enable **/
#define USART1_IER_OVRE		(1 << 5)
/** USART1_IER_ENDTX End of Transmit Interrupt Enable (available in all USART modes of operation) **/
#define USART1_IER_ENDTX		(1 << 4)
/** USART1_IER_ENDRX End of Receive Transfer Interrupt Enable (available in all USART modes of operation) **/
#define USART1_IER_ENDRX		(1 << 3)
/** USART1_IER_RXBRK Receiver Break Interrupt Enable **/
#define USART1_IER_RXBRK		(1 << 2)
/** USART1_IER_TXRDY TXRDY Interrupt Enable **/
#define USART1_IER_TXRDY		(1 << 1)
/** USART1_IER_RXRDY RXRDY Interrupt Enable **/
#define USART1_IER_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart1_ier_spi_mode IERSPIMODE Interrupt Enable Register
@{*/

/** USART1_IER_SPI_MODE_UNRE SPI Underrun Error Interrupt Enable **/
#define USART1_IER_SPI_MODE_UNRE		(1 << 10)
/** USART1_IER_SPI_MODE_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART1_IER_SPI_MODE_TXEMPTY		(1 << 9)
/** USART1_IER_SPI_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART1_IER_SPI_MODE_OVRE		(1 << 5)
/** USART1_IER_SPI_MODE_TXRDY TXRDY Interrupt Enable **/
#define USART1_IER_SPI_MODE_TXRDY		(1 << 1)
/** USART1_IER_SPI_MODE_RXRDY RXRDY Interrupt Enable **/
#define USART1_IER_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart1_idr IDR Interrupt Disable Register
@{*/

/** USART1_IDR_MANE Manchester Error Interrupt Disable **/
#define USART1_IDR_MANE		(1 << 24)
/** USART1_IDR_CTSIC Clear to Send Input Change Interrupt Disable **/
#define USART1_IDR_CTSIC		(1 << 19)
/** USART1_IDR_NACK Non AcknowledgeInterrupt Disable **/
#define USART1_IDR_NACK		(1 << 13)
/** USART1_IDR_RXBUFF Buffer Full Interrupt Disable (available in all USART modes of operation) **/
#define USART1_IDR_RXBUFF		(1 << 12)
/** USART1_IDR_TXBUFE Buffer Empty Interrupt Disable (available in all USART modes of operation) **/
#define USART1_IDR_TXBUFE		(1 << 11)
/** USART1_IDR_ITER Max Number of Repetitions Reached Interrupt Disable **/
#define USART1_IDR_ITER		(1 << 10)
/** USART1_IDR_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART1_IDR_TXEMPTY		(1 << 9)
/** USART1_IDR_TIMEOUT Time-out Interrupt Disable **/
#define USART1_IDR_TIMEOUT		(1 << 8)
/** USART1_IDR_PARE Parity Error Interrupt Disable **/
#define USART1_IDR_PARE		(1 << 7)
/** USART1_IDR_FRAME Framing Error Interrupt Disable **/
#define USART1_IDR_FRAME		(1 << 6)
/** USART1_IDR_OVRE Overrun Error Interrupt Enable **/
#define USART1_IDR_OVRE		(1 << 5)
/** USART1_IDR_ENDTX End of Transmit Interrupt Disable (available in all USART modes of operation) **/
#define USART1_IDR_ENDTX		(1 << 4)
/** USART1_IDR_ENDRX End of Receive Transfer Interrupt Disable (available in all USART modes of operation) **/
#define USART1_IDR_ENDRX		(1 << 3)
/** USART1_IDR_RXBRK Receiver Break Interrupt Disable **/
#define USART1_IDR_RXBRK		(1 << 2)
/** USART1_IDR_TXRDY TXRDY Interrupt Disable **/
#define USART1_IDR_TXRDY		(1 << 1)
/** USART1_IDR_RXRDY RXRDY Interrupt Disable **/
#define USART1_IDR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart1_idr_spi_mode IDRSPIMODE Interrupt Disable Register
@{*/

/** USART1_IDR_SPI_MODE_UNRE SPI Underrun Error Interrupt Disable **/
#define USART1_IDR_SPI_MODE_UNRE		(1 << 10)
/** USART1_IDR_SPI_MODE_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART1_IDR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART1_IDR_SPI_MODE_OVRE Overrun Error Interrupt Disable **/
#define USART1_IDR_SPI_MODE_OVRE		(1 << 5)
/** USART1_IDR_SPI_MODE_TXRDY TXRDY Interrupt Disable **/
#define USART1_IDR_SPI_MODE_TXRDY		(1 << 1)
/** USART1_IDR_SPI_MODE_RXRDY RXRDY Interrupt Disable **/
#define USART1_IDR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart1_imr IMR Interrupt Mask Register
@{*/

/** USART1_IMR_MANE Manchester Error Interrupt Mask **/
#define USART1_IMR_MANE		(1 << 24)
/** USART1_IMR_CTSIC Clear to Send Input Change Interrupt Mask **/
#define USART1_IMR_CTSIC		(1 << 19)
/** USART1_IMR_NACK Non AcknowledgeInterrupt Mask **/
#define USART1_IMR_NACK		(1 << 13)
/** USART1_IMR_RXBUFF Buffer Full Interrupt Mask (available in all USART modes of operation) **/
#define USART1_IMR_RXBUFF		(1 << 12)
/** USART1_IMR_TXBUFE Buffer Empty Interrupt Mask (available in all USART modes of operation) **/
#define USART1_IMR_TXBUFE		(1 << 11)
/** USART1_IMR_ITER Max Number of Repetitions Reached Interrupt Mask **/
#define USART1_IMR_ITER		(1 << 10)
/** USART1_IMR_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART1_IMR_TXEMPTY		(1 << 9)
/** USART1_IMR_TIMEOUT Time-out Interrupt Mask **/
#define USART1_IMR_TIMEOUT		(1 << 8)
/** USART1_IMR_PARE Parity Error Interrupt Mask **/
#define USART1_IMR_PARE		(1 << 7)
/** USART1_IMR_FRAME Framing Error Interrupt Mask **/
#define USART1_IMR_FRAME		(1 << 6)
/** USART1_IMR_OVRE Overrun Error Interrupt Mask **/
#define USART1_IMR_OVRE		(1 << 5)
/** USART1_IMR_ENDTX End of Transmit Interrupt Mask (available in all USART modes of operation) **/
#define USART1_IMR_ENDTX		(1 << 4)
/** USART1_IMR_ENDRX End of Receive Transfer Interrupt Mask (available in all USART modes of operation) **/
#define USART1_IMR_ENDRX		(1 << 3)
/** USART1_IMR_RXBRK Receiver Break Interrupt Mask **/
#define USART1_IMR_RXBRK		(1 << 2)
/** USART1_IMR_TXRDY TXRDY Interrupt Mask **/
#define USART1_IMR_TXRDY		(1 << 1)
/** USART1_IMR_RXRDY RXRDY Interrupt Mask **/
#define USART1_IMR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart1_imr_spi_mode IMRSPIMODE Interrupt Mask Register
@{*/

/** USART1_IMR_SPI_MODE_UNRE SPI Underrun Error Interrupt Mask **/
#define USART1_IMR_SPI_MODE_UNRE		(1 << 10)
/** USART1_IMR_SPI_MODE_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART1_IMR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART1_IMR_SPI_MODE_OVRE Overrun Error Interrupt Mask **/
#define USART1_IMR_SPI_MODE_OVRE		(1 << 5)
/** USART1_IMR_SPI_MODE_TXRDY TXRDY Interrupt Mask **/
#define USART1_IMR_SPI_MODE_TXRDY		(1 << 1)
/** USART1_IMR_SPI_MODE_RXRDY RXRDY Interrupt Mask **/
#define USART1_IMR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart1_csr CSR Channel Status Register
@{*/

/** USART1_CSR_MANERR Manchester Error **/
#define USART1_CSR_MANERR		(1 << 24)
/** USART1_CSR_CTS Image of CTS Input **/
#define USART1_CSR_CTS		(1 << 23)
/** USART1_CSR_CTSIC Clear to Send Input Change Flag **/
#define USART1_CSR_CTSIC		(1 << 19)
/** USART1_CSR_NACK Non AcknowledgeInterrupt **/
#define USART1_CSR_NACK		(1 << 13)
/** USART1_CSR_RXBUFF Reception Buffer Full **/
#define USART1_CSR_RXBUFF		(1 << 12)
/** USART1_CSR_TXBUFE Transmission Buffer Empty **/
#define USART1_CSR_TXBUFE		(1 << 11)
/** USART1_CSR_ITER MaxNumber of Repetitions Reached **/
#define USART1_CSR_ITER		(1 << 10)
/** USART1_CSR_TXEMPTY Transmitter Empty **/
#define USART1_CSR_TXEMPTY		(1 << 9)
/** USART1_CSR_TIMEOUT Receiver Time-out **/
#define USART1_CSR_TIMEOUT		(1 << 8)
/** USART1_CSR_PARE Parity Error **/
#define USART1_CSR_PARE		(1 << 7)
/** USART1_CSR_FRAME Framing Error **/
#define USART1_CSR_FRAME		(1 << 6)
/** USART1_CSR_OVRE Overrun Error **/
#define USART1_CSR_OVRE		(1 << 5)
/** USART1_CSR_ENDTX End of Transmitter Transfer **/
#define USART1_CSR_ENDTX		(1 << 4)
/** USART1_CSR_ENDRX End of Receiver Transfer **/
#define USART1_CSR_ENDRX		(1 << 3)
/** USART1_CSR_RXBRK Break Received/End of Break **/
#define USART1_CSR_RXBRK		(1 << 2)
/** USART1_CSR_TXRDY Transmitter Ready **/
#define USART1_CSR_TXRDY		(1 << 1)
/** USART1_CSR_RXRDY Receiver Ready **/
#define USART1_CSR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart1_csr_spi_mode CSRSPIMODE Channel Status Register
@{*/

/** USART1_CSR_SPI_MODE_UNRE Underrun Error **/
#define USART1_CSR_SPI_MODE_UNRE		(1 << 10)
/** USART1_CSR_SPI_MODE_TXEMPTY Transmitter Empty **/
#define USART1_CSR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART1_CSR_SPI_MODE_OVRE Overrun Error **/
#define USART1_CSR_SPI_MODE_OVRE		(1 << 5)
/** USART1_CSR_SPI_MODE_TXRDY Transmitter Ready **/
#define USART1_CSR_SPI_MODE_TXRDY		(1 << 1)
/** USART1_CSR_SPI_MODE_RXRDY Receiver Ready **/
#define USART1_CSR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart1_rhr RHR Receiver Holding Register
@{*/

/** USART1_RHR_RXSYNH Received Sync **/
#define USART1_RHR_RXSYNH		(1 << 15)

#define USART1_RHR_RXCHR_SHIFT		0
#define USART1_RHR_RXCHR_MASK		0x1ff
/** @defgroup usart1_rhr_rxchr RXCHR Received Character
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_thr THR Transmitter Holding Register
@{*/

/** USART1_THR_TXSYNH Sync Field to be Transmitted **/
#define USART1_THR_TXSYNH		(1 << 15)

#define USART1_THR_TXCHR_SHIFT		0
#define USART1_THR_TXCHR_MASK		0x1ff
/** @defgroup usart1_thr_txchr TXCHR Character to be Transmitted
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_brgr BRGR Baud Rate Generator Register
@{*/


#define USART1_BRGR_FP_SHIFT		16
#define USART1_BRGR_FP_MASK		0x07
/** @defgroup usart1_brgr_fp FP Fractional Part
@{*/
/**@}*/


#define USART1_BRGR_CD_SHIFT		0
#define USART1_BRGR_CD_MASK		0xffff
/** @defgroup usart1_brgr_cd CD Clock Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_rtor RTOR Receiver Time-out Register
@{*/


#define USART1_RTOR_TO_SHIFT		0
#define USART1_RTOR_TO_MASK		0xffff
/** @defgroup usart1_rtor_to TO Time-out Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_ttgr TTGR Transmitter Timeguard Register
@{*/


#define USART1_TTGR_TG_SHIFT		0
#define USART1_TTGR_TG_MASK		0xff
/** @defgroup usart1_ttgr_tg TG Timeguard Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_fidi FIDI FI DI Ratio Register
@{*/


#define USART1_FIDI_FI_DI_RATIO_SHIFT		0
#define USART1_FIDI_FI_DI_RATIO_MASK		0x7ff
/** @defgroup usart1_fidi_fi_di_ratio FIDIRATIO FI Over DI Ratio Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_ner NER Number of Errors Register
@{*/


#define USART1_NER_NB_ERRORS_SHIFT		0
#define USART1_NER_NB_ERRORS_MASK		0xff
/** @defgroup usart1_ner_nb_errors NBERRORS Number of Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_if IF IrDA Filter Register
@{*/


#define USART1_IF_IRDA_FILTER_SHIFT		0
#define USART1_IF_IRDA_FILTER_MASK		0xff
/** @defgroup usart1_if_irda_filter IRDAFILTER IrDA Filter
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_man MAN Manchester Encoder Decoder Register
@{*/

/** USART1_MAN_DRIFT Drift Compensation **/
#define USART1_MAN_DRIFT		(1 << 30)
/** USART1_MAN_ONE Must Be Set to 1 **/
#define USART1_MAN_ONE		(1 << 29)
/** USART1_MAN_RX_MPOL Receiver Manchester Polarity **/
#define USART1_MAN_RX_MPOL		(1 << 28)

#define USART1_MAN_RX_PP_SHIFT		24
#define USART1_MAN_RX_PP_MASK		0x03
/** @defgroup usart1_man_rx_pp RXPP Receiver Preamble Pattern detected
@{*/
/**@}*/


#define USART1_MAN_RX_PL_SHIFT		16
#define USART1_MAN_RX_PL_MASK		0x0f
/** @defgroup usart1_man_rx_pl RXPL Receiver Preamble Length
@{*/
/**@}*/

/** USART1_MAN_TX_MPOL Transmitter Manchester Polarity **/
#define USART1_MAN_TX_MPOL		(1 << 12)

#define USART1_MAN_TX_PP_SHIFT		8
#define USART1_MAN_TX_PP_MASK		0x03
/** @defgroup usart1_man_tx_pp TXPP Transmitter Preamble Pattern
@{*/
/**@}*/


#define USART1_MAN_TX_PL_SHIFT		0
#define USART1_MAN_TX_PL_MASK		0x0f
/** @defgroup usart1_man_tx_pl TXPL Transmitter Preamble Length
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_wpmr WPMR Write Protect Mode Register
@{*/


#define USART1_WPMR_WPKEY_SHIFT		8
#define USART1_WPMR_WPKEY_MASK		0xffffff
/** @defgroup usart1_wpmr_wpkey WPKEY Write Protect KEY
@{*/
/**@}*/

/** USART1_WPMR_WPEN Write Protect Enable **/
#define USART1_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup usart1_wpsr WPSR Write Protect Status Register
@{*/


#define USART1_WPSR_WPVSRC_SHIFT		8
#define USART1_WPSR_WPVSRC_MASK		0xffff
/** @defgroup usart1_wpsr_wpvsrc WPVSRC Write Protect Violation Source
@{*/
/**@}*/

/** USART1_WPSR_WPVS Write Protect Violation Status **/
#define USART1_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup usart1_version VERSION Version Register
@{*/


#define USART1_VERSION_MFN_SHIFT		16
#define USART1_VERSION_MFN_MASK		0x07
/** @defgroup usart1_version_mfn MFN Metal Fix Number
@{*/
/**@}*/


#define USART1_VERSION_VERSION_SHIFT		0
#define USART1_VERSION_VERSION_MASK		0xfff
/** @defgroup usart1_version_version VERSION Harware Module Version
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_rpr RPR Receive Pointer Register
@{*/


#define USART1_RPR_RXPTR_SHIFT		0
#define USART1_RPR_RXPTR_MASK		0xffffffff
/** @defgroup usart1_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_rcr RCR Receive Counter Register
@{*/


#define USART1_RCR_RXCTR_SHIFT		0
#define USART1_RCR_RXCTR_MASK		0xffff
/** @defgroup usart1_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_tpr TPR Transmit Pointer Register
@{*/


#define USART1_TPR_TXPTR_SHIFT		0
#define USART1_TPR_TXPTR_MASK		0xffffffff
/** @defgroup usart1_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_tcr TCR Transmit Counter Register
@{*/


#define USART1_TCR_TXCTR_SHIFT		0
#define USART1_TCR_TXCTR_MASK		0xffff
/** @defgroup usart1_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_rnpr RNPR Receive Next Pointer Register
@{*/


#define USART1_RNPR_RXNPTR_SHIFT		0
#define USART1_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup usart1_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_rncr RNCR Receive Next Counter Register
@{*/


#define USART1_RNCR_RXNCTR_SHIFT		0
#define USART1_RNCR_RXNCTR_MASK		0xffff
/** @defgroup usart1_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_tnpr TNPR Transmit Next Pointer Register
@{*/


#define USART1_TNPR_TXNPTR_SHIFT		0
#define USART1_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup usart1_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_tncr TNCR Transmit Next Counter Register
@{*/


#define USART1_TNCR_TXNCTR_SHIFT		0
#define USART1_TNCR_TXNCTR_MASK		0xffff
/** @defgroup usart1_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_ptcr PTCR Transfer Control Register
@{*/

/** USART1_PTCR_TXTDIS Transmitter Transfer Disable **/
#define USART1_PTCR_TXTDIS		(1 << 9)
/** USART1_PTCR_TXTEN Transmitter Transfer Enable **/
#define USART1_PTCR_TXTEN		(1 << 8)
/** USART1_PTCR_RXTDIS Receiver Transfer Disable **/
#define USART1_PTCR_RXTDIS		(1 << 1)
/** USART1_PTCR_RXTEN Receiver Transfer Enable **/
#define USART1_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup usart1_ptsr PTSR Transfer Status Register
@{*/

/** USART1_PTSR_TXTEN Transmitter Transfer Enable **/
#define USART1_PTSR_TXTEN		(1 << 8)
/** USART1_PTSR_RXTEN Receiver Transfer Enable **/
#define USART1_PTSR_RXTEN		(1 << 0)

/**@}*/

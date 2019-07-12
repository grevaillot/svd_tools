#pragma once 

/* --- USART0: Universal Synchronous Asynchronous Receiver Transmitter 0  */

/** @defgroup usart0_registers Universal Synchronous Asynchronous Receiver Transmitter 0 Register
@{*/

/** USART0_CR Control Register **/
#define USART0_CR			MMIO32(USART0_BASE + 0x00)
/** USART0_CR_SPI_MODE Control Register **/
#define USART0_CR_SPI_MODE			MMIO32(USART0_BASE + 0x00)
/** USART0_MR Mode Register **/
#define USART0_MR			MMIO32(USART0_BASE + 0x04)
/** USART0_MR_SPI_MODE Mode Register **/
#define USART0_MR_SPI_MODE			MMIO32(USART0_BASE + 0x04)
/** USART0_IER Interrupt Enable Register **/
#define USART0_IER			MMIO32(USART0_BASE + 0x08)
/** USART0_IER_SPI_MODE Interrupt Enable Register **/
#define USART0_IER_SPI_MODE			MMIO32(USART0_BASE + 0x08)
/** USART0_IDR Interrupt Disable Register **/
#define USART0_IDR			MMIO32(USART0_BASE + 0x0c)
/** USART0_IDR_SPI_MODE Interrupt Disable Register **/
#define USART0_IDR_SPI_MODE			MMIO32(USART0_BASE + 0x0c)
/** USART0_IMR Interrupt Mask Register **/
#define USART0_IMR			MMIO32(USART0_BASE + 0x10)
/** USART0_IMR_SPI_MODE Interrupt Mask Register **/
#define USART0_IMR_SPI_MODE			MMIO32(USART0_BASE + 0x10)
/** USART0_CSR Channel Status Register **/
#define USART0_CSR			MMIO32(USART0_BASE + 0x14)
/** USART0_CSR_SPI_MODE Channel Status Register **/
#define USART0_CSR_SPI_MODE			MMIO32(USART0_BASE + 0x14)
/** USART0_RHR Receive Holding Register **/
#define USART0_RHR			MMIO32(USART0_BASE + 0x18)
/** USART0_THR Transmit Holding Register **/
#define USART0_THR			MMIO32(USART0_BASE + 0x1c)
/** USART0_BRGR Baud Rate Generator Register **/
#define USART0_BRGR			MMIO32(USART0_BASE + 0x20)
/** USART0_RTOR Receiver Time-out Register **/
#define USART0_RTOR			MMIO32(USART0_BASE + 0x24)
/** USART0_TTGR Transmitter Timeguard Register **/
#define USART0_TTGR			MMIO32(USART0_BASE + 0x28)
/** USART0_FIDI FI DI Ratio Register **/
#define USART0_FIDI			MMIO32(USART0_BASE + 0x40)
/** USART0_NER Number of Errors Register **/
#define USART0_NER			MMIO32(USART0_BASE + 0x44)
/** USART0_IF IrDA Filter Register **/
#define USART0_IF			MMIO32(USART0_BASE + 0x4c)
/** USART0_MAN Manchester Configuration Register **/
#define USART0_MAN			MMIO32(USART0_BASE + 0x50)
/** USART0_WPMR Write Protection Mode Register **/
#define USART0_WPMR			MMIO32(USART0_BASE + 0xe4)
/** USART0_WPSR Write Protection Status Register **/
#define USART0_WPSR			MMIO32(USART0_BASE + 0xe8)
/** USART0_RPR Receive Pointer Register **/
#define USART0_RPR			MMIO32(USART0_BASE + 0x100)
/** USART0_RCR Receive Counter Register **/
#define USART0_RCR			MMIO32(USART0_BASE + 0x104)
/** USART0_TPR Transmit Pointer Register **/
#define USART0_TPR			MMIO32(USART0_BASE + 0x108)
/** USART0_TCR Transmit Counter Register **/
#define USART0_TCR			MMIO32(USART0_BASE + 0x10c)
/** USART0_RNPR Receive Next Pointer Register **/
#define USART0_RNPR			MMIO32(USART0_BASE + 0x110)
/** USART0_RNCR Receive Next Counter Register **/
#define USART0_RNCR			MMIO32(USART0_BASE + 0x114)
/** USART0_TNPR Transmit Next Pointer Register **/
#define USART0_TNPR			MMIO32(USART0_BASE + 0x118)
/** USART0_TNCR Transmit Next Counter Register **/
#define USART0_TNCR			MMIO32(USART0_BASE + 0x11c)
/** USART0_PTCR Transfer Control Register **/
#define USART0_PTCR			MMIO32(USART0_BASE + 0x120)
/** USART0_PTSR Transfer Status Register **/
#define USART0_PTSR			MMIO32(USART0_BASE + 0x124)

/**@}*/


/** @defgroup usart0_cr CR Control Register
@{*/

/** USART0_CR_RTSDIS Request to Send Pin Control **/
#define USART0_CR_RTSDIS		(1 << 19)
/** USART0_CR_RTSEN Request to Send Pin Control **/
#define USART0_CR_RTSEN		(1 << 18)
/** USART0_CR_DTRDIS Data Terminal Ready Disable **/
#define USART0_CR_DTRDIS		(1 << 17)
/** USART0_CR_DTREN Data Terminal Ready Enable **/
#define USART0_CR_DTREN		(1 << 16)
/** USART0_CR_RETTO Start Time-out Immediately **/
#define USART0_CR_RETTO		(1 << 15)
/** USART0_CR_RSTNACK Reset Non Acknowledge **/
#define USART0_CR_RSTNACK		(1 << 14)
/** USART0_CR_RSTIT Reset Iterations **/
#define USART0_CR_RSTIT		(1 << 13)
/** USART0_CR_SENDA Send Address **/
#define USART0_CR_SENDA		(1 << 12)
/** USART0_CR_STTTO Clear TIMEOUT Flag and Start Time-out After Next Character Received **/
#define USART0_CR_STTTO		(1 << 11)
/** USART0_CR_STPBRK Stop Break **/
#define USART0_CR_STPBRK		(1 << 10)
/** USART0_CR_STTBRK Start Break **/
#define USART0_CR_STTBRK		(1 << 9)
/** USART0_CR_RSTSTA Reset Status Bits **/
#define USART0_CR_RSTSTA		(1 << 8)
/** USART0_CR_TXDIS Transmitter Disable **/
#define USART0_CR_TXDIS		(1 << 7)
/** USART0_CR_TXEN Transmitter Enable **/
#define USART0_CR_TXEN		(1 << 6)
/** USART0_CR_RXDIS Receiver Disable **/
#define USART0_CR_RXDIS		(1 << 5)
/** USART0_CR_RXEN Receiver Enable **/
#define USART0_CR_RXEN		(1 << 4)
/** USART0_CR_RSTTX Reset Transmitter **/
#define USART0_CR_RSTTX		(1 << 3)
/** USART0_CR_RSTRX Reset Receiver **/
#define USART0_CR_RSTRX		(1 << 2)

/**@}*/

/** @defgroup usart0_cr_spi_mode CRSPIMODE Control Register
@{*/

/** USART0_CR_SPI_MODE_RCS Release SPI Chip Select **/
#define USART0_CR_SPI_MODE_RCS		(1 << 19)
/** USART0_CR_SPI_MODE_FCS Force SPI Chip Select **/
#define USART0_CR_SPI_MODE_FCS		(1 << 18)
/** USART0_CR_SPI_MODE_RSTSTA Reset Status Bits **/
#define USART0_CR_SPI_MODE_RSTSTA		(1 << 8)
/** USART0_CR_SPI_MODE_TXDIS Transmitter Disable **/
#define USART0_CR_SPI_MODE_TXDIS		(1 << 7)
/** USART0_CR_SPI_MODE_TXEN Transmitter Enable **/
#define USART0_CR_SPI_MODE_TXEN		(1 << 6)
/** USART0_CR_SPI_MODE_RXDIS Receiver Disable **/
#define USART0_CR_SPI_MODE_RXDIS		(1 << 5)
/** USART0_CR_SPI_MODE_RXEN Receiver Enable **/
#define USART0_CR_SPI_MODE_RXEN		(1 << 4)
/** USART0_CR_SPI_MODE_RSTTX Reset Transmitter **/
#define USART0_CR_SPI_MODE_RSTTX		(1 << 3)
/** USART0_CR_SPI_MODE_RSTRX Reset Receiver **/
#define USART0_CR_SPI_MODE_RSTRX		(1 << 2)

/**@}*/

/** @defgroup usart0_mr MR Mode Register
@{*/

/** USART0_MR_ONEBIT Start Frame Delimiter Selector **/
#define USART0_MR_ONEBIT		(1 << 31)
/** USART0_MR_MODSYNC Manchester Synchronization Mode **/
#define USART0_MR_MODSYNC		(1 << 30)
/** USART0_MR_MAN Manchester Encoder/Decoder Enable **/
#define USART0_MR_MAN		(1 << 29)
/** USART0_MR_FILTER Receive Line Filter **/
#define USART0_MR_FILTER		(1 << 28)

#define USART0_MR_MAX_ITERATION_SHIFT		24
#define USART0_MR_MAX_ITERATION_MASK		0x07
/** @defgroup usart0_mr_max_iteration MAXITERATION Maximum Number of Automatic Iteration
@{*/
/**@}*/

/** USART0_MR_INVDATA Inverted Data **/
#define USART0_MR_INVDATA		(1 << 23)
/** USART0_MR_VAR_SYNC Variable Synchronization of Command/Data Sync Start Frame Delimiter **/
#define USART0_MR_VAR_SYNC		(1 << 22)
/** USART0_MR_DSNACK Disable Successive NACK **/
#define USART0_MR_DSNACK		(1 << 21)
/** USART0_MR_INACK Inhibit Non Acknowledge **/
#define USART0_MR_INACK		(1 << 20)
/** USART0_MR_OVER Oversampling Mode **/
#define USART0_MR_OVER		(1 << 19)
/** USART0_MR_CLKO Clock Output Select **/
#define USART0_MR_CLKO		(1 << 18)
/** USART0_MR_MODE9 9-bit Character Length **/
#define USART0_MR_MODE9		(1 << 17)
/** USART0_MR_MSBF Bit Order **/
#define USART0_MR_MSBF		(1 << 16)

#define USART0_MR_CHMODE_SHIFT		14
#define USART0_MR_CHMODE_MASK		0x03
/** @defgroup usart0_mr_chmode CHMODE Channel Mode
@{*/
/**@}*/


#define USART0_MR_NBSTOP_SHIFT		12
#define USART0_MR_NBSTOP_MASK		0x03
/** @defgroup usart0_mr_nbstop NBSTOP Number of Stop Bits
@{*/
/**@}*/


#define USART0_MR_PAR_SHIFT		9
#define USART0_MR_PAR_MASK		0x07
/** @defgroup usart0_mr_par PAR Parity Type
@{*/
/**@}*/

/** USART0_MR_SYNC Synchronous Mode Select **/
#define USART0_MR_SYNC		(1 << 8)

#define USART0_MR_CHRL_SHIFT		6
#define USART0_MR_CHRL_MASK		0x03
/** @defgroup usart0_mr_chrl CHRL Character Length
@{*/
/**@}*/


#define USART0_MR_USCLKS_SHIFT		4
#define USART0_MR_USCLKS_MASK		0x03
/** @defgroup usart0_mr_usclks USCLKS Clock Selection
@{*/
/**@}*/


#define USART0_MR_USART_MODE_SHIFT		0
#define USART0_MR_USART_MODE_MASK		0x0f
/** @defgroup usart0_mr_usart_mode USARTMODE USART Mode of Operation
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_mr_spi_mode MRSPIMODE Mode Register
@{*/

/** USART0_MR_SPI_MODE_WRDBT Wait Read Data Before Transfer **/
#define USART0_MR_SPI_MODE_WRDBT		(1 << 20)
/** USART0_MR_SPI_MODE_CLKO Clock Output Select **/
#define USART0_MR_SPI_MODE_CLKO		(1 << 18)
/** USART0_MR_SPI_MODE_CPOL SPI Clock Polarity **/
#define USART0_MR_SPI_MODE_CPOL		(1 << 16)
/** USART0_MR_SPI_MODE_CPHA SPI Clock Phase **/
#define USART0_MR_SPI_MODE_CPHA		(1 << 8)

#define USART0_MR_SPI_MODE_CHRL_SHIFT		6
#define USART0_MR_SPI_MODE_CHRL_MASK		0x03
/** @defgroup usart0_mr_spi_mode_chrl CHRL Character Length
@{*/
/**@}*/


#define USART0_MR_SPI_MODE_USCLKS_SHIFT		4
#define USART0_MR_SPI_MODE_USCLKS_MASK		0x03
/** @defgroup usart0_mr_spi_mode_usclks USCLKS Clock Selection
@{*/
/**@}*/


#define USART0_MR_SPI_MODE_USART_MODE_SHIFT		0
#define USART0_MR_SPI_MODE_USART_MODE_MASK		0x0f
/** @defgroup usart0_mr_spi_mode_usart_mode USARTMODE USART Mode of Operation
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_ier IER Interrupt Enable Register
@{*/

/** USART0_IER_MANE Manchester Error Interrupt Enable **/
#define USART0_IER_MANE		(1 << 24)
/** USART0_IER_CTSIC Clear to Send Input Change Interrupt Enable **/
#define USART0_IER_CTSIC		(1 << 19)
/** USART0_IER_DCDIC Data Carrier Detect Input Change Interrupt Enable **/
#define USART0_IER_DCDIC		(1 << 18)
/** USART0_IER_DSRIC Data Set Ready Input Change Enable **/
#define USART0_IER_DSRIC		(1 << 17)
/** USART0_IER_RIIC Ring Indicator Input Change Enable **/
#define USART0_IER_RIIC		(1 << 16)
/** USART0_IER_NACK Non Acknowledge Interrupt Enable **/
#define USART0_IER_NACK		(1 << 13)
/** USART0_IER_RXBUFF Receive Buffer Full Interrupt Enable (available in all USART modes of operation) **/
#define USART0_IER_RXBUFF		(1 << 12)
/** USART0_IER_TXBUFE Transmit Buffer Empty Interrupt Enable (available in all USART modes of operation) **/
#define USART0_IER_TXBUFE		(1 << 11)
/** USART0_IER_ITER Max number of Repetitions Reached Interrupt Enable **/
#define USART0_IER_ITER		(1 << 10)
/** USART0_IER_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART0_IER_TXEMPTY		(1 << 9)
/** USART0_IER_TIMEOUT Time-out Interrupt Enable **/
#define USART0_IER_TIMEOUT		(1 << 8)
/** USART0_IER_PARE Parity Error Interrupt Enable **/
#define USART0_IER_PARE		(1 << 7)
/** USART0_IER_FRAME Framing Error Interrupt Enable **/
#define USART0_IER_FRAME		(1 << 6)
/** USART0_IER_OVRE Overrun Error Interrupt Enable **/
#define USART0_IER_OVRE		(1 << 5)
/** USART0_IER_ENDTX End of Transmit Buffer Interrupt Enable (available in all USART modes of operation) **/
#define USART0_IER_ENDTX		(1 << 4)
/** USART0_IER_ENDRX End of Receive Buffer Interrupt Enable (available in all USART modes of operation) **/
#define USART0_IER_ENDRX		(1 << 3)
/** USART0_IER_RXBRK Receiver Break Interrupt Enable **/
#define USART0_IER_RXBRK		(1 << 2)
/** USART0_IER_TXRDY TXRDY Interrupt Enable **/
#define USART0_IER_TXRDY		(1 << 1)
/** USART0_IER_RXRDY RXRDY Interrupt Enable **/
#define USART0_IER_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_ier_spi_mode IERSPIMODE Interrupt Enable Register
@{*/

/** USART0_IER_SPI_MODE_RXBUFF Receive Buffer Full Interrupt Enable **/
#define USART0_IER_SPI_MODE_RXBUFF		(1 << 12)
/** USART0_IER_SPI_MODE_TXBUFE Transmit Buffer Empty Interrupt Enable **/
#define USART0_IER_SPI_MODE_TXBUFE		(1 << 11)
/** USART0_IER_SPI_MODE_UNRE SPI Underrun Error Interrupt Enable **/
#define USART0_IER_SPI_MODE_UNRE		(1 << 10)
/** USART0_IER_SPI_MODE_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART0_IER_SPI_MODE_TXEMPTY		(1 << 9)
/** USART0_IER_SPI_MODE_OVRE Overrun Error Interrupt Enable **/
#define USART0_IER_SPI_MODE_OVRE		(1 << 5)
/** USART0_IER_SPI_MODE_ENDTX End of Transmit Buffer Interrupt Enable **/
#define USART0_IER_SPI_MODE_ENDTX		(1 << 4)
/** USART0_IER_SPI_MODE_ENDRX End of Receive Buffer Interrupt Enable **/
#define USART0_IER_SPI_MODE_ENDRX		(1 << 3)
/** USART0_IER_SPI_MODE_TXRDY TXRDY Interrupt Enable **/
#define USART0_IER_SPI_MODE_TXRDY		(1 << 1)
/** USART0_IER_SPI_MODE_RXRDY RXRDY Interrupt Enable **/
#define USART0_IER_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_idr IDR Interrupt Disable Register
@{*/

/** USART0_IDR_MANE Manchester Error Interrupt Disable **/
#define USART0_IDR_MANE		(1 << 24)
/** USART0_IDR_CTSIC Clear to Send Input Change Interrupt Disable **/
#define USART0_IDR_CTSIC		(1 << 19)
/** USART0_IDR_DCDIC Data Carrier Detect Input Change Interrupt Disable **/
#define USART0_IDR_DCDIC		(1 << 18)
/** USART0_IDR_DSRIC Data Set Ready Input Change Disable **/
#define USART0_IDR_DSRIC		(1 << 17)
/** USART0_IDR_RIIC Ring Indicator Input Change Disable **/
#define USART0_IDR_RIIC		(1 << 16)
/** USART0_IDR_NACK Non Acknowledge Interrupt Disable **/
#define USART0_IDR_NACK		(1 << 13)
/** USART0_IDR_RXBUFF Receive Buffer Full Interrupt Disable (available in all USART modes of operation) **/
#define USART0_IDR_RXBUFF		(1 << 12)
/** USART0_IDR_TXBUFE Transmit Buffer Empty Interrupt Disable (available in all USART modes of operation) **/
#define USART0_IDR_TXBUFE		(1 << 11)
/** USART0_IDR_ITER Max Number of Repetitions Reached Interrupt Disable **/
#define USART0_IDR_ITER		(1 << 10)
/** USART0_IDR_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART0_IDR_TXEMPTY		(1 << 9)
/** USART0_IDR_TIMEOUT Time-out Interrupt Disable **/
#define USART0_IDR_TIMEOUT		(1 << 8)
/** USART0_IDR_PARE Parity Error Interrupt Disable **/
#define USART0_IDR_PARE		(1 << 7)
/** USART0_IDR_FRAME Framing Error Interrupt Disable **/
#define USART0_IDR_FRAME		(1 << 6)
/** USART0_IDR_OVRE Overrun Error Interrupt Enable **/
#define USART0_IDR_OVRE		(1 << 5)
/** USART0_IDR_ENDTX End of Transmit Buffer Interrupt Disable (available in all USART modes of operation) **/
#define USART0_IDR_ENDTX		(1 << 4)
/** USART0_IDR_ENDRX End of Receive Buffer Transfer Interrupt Disable (available in all USART modes of operation) **/
#define USART0_IDR_ENDRX		(1 << 3)
/** USART0_IDR_RXBRK Receiver Break Interrupt Disable **/
#define USART0_IDR_RXBRK		(1 << 2)
/** USART0_IDR_TXRDY TXRDY Interrupt Disable **/
#define USART0_IDR_TXRDY		(1 << 1)
/** USART0_IDR_RXRDY RXRDY Interrupt Disable **/
#define USART0_IDR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_idr_spi_mode IDRSPIMODE Interrupt Disable Register
@{*/

/** USART0_IDR_SPI_MODE_RXBUFF Receive Buffer Full Interrupt Disable **/
#define USART0_IDR_SPI_MODE_RXBUFF		(1 << 12)
/** USART0_IDR_SPI_MODE_TXBUFE Transmit Buffer Empty Interrupt Disable **/
#define USART0_IDR_SPI_MODE_TXBUFE		(1 << 11)
/** USART0_IDR_SPI_MODE_UNRE SPI Underrun Error Interrupt Disable **/
#define USART0_IDR_SPI_MODE_UNRE		(1 << 10)
/** USART0_IDR_SPI_MODE_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART0_IDR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART0_IDR_SPI_MODE_OVRE Overrun Error Interrupt Disable **/
#define USART0_IDR_SPI_MODE_OVRE		(1 << 5)
/** USART0_IDR_SPI_MODE_ENDTX End of Transmit Buffer Interrupt Disable **/
#define USART0_IDR_SPI_MODE_ENDTX		(1 << 4)
/** USART0_IDR_SPI_MODE_ENDRX End of Receive Buffer Transfer Interrupt Disable **/
#define USART0_IDR_SPI_MODE_ENDRX		(1 << 3)
/** USART0_IDR_SPI_MODE_TXRDY TXRDY Interrupt Disable **/
#define USART0_IDR_SPI_MODE_TXRDY		(1 << 1)
/** USART0_IDR_SPI_MODE_RXRDY RXRDY Interrupt Disable **/
#define USART0_IDR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_imr IMR Interrupt Mask Register
@{*/

/** USART0_IMR_MANE Manchester Error Interrupt Mask **/
#define USART0_IMR_MANE		(1 << 24)
/** USART0_IMR_CTSIC Clear to Send Input Change Interrupt Mask **/
#define USART0_IMR_CTSIC		(1 << 19)
/** USART0_IMR_DCDIC Data Carrier Detect Input Change Interrupt Mask **/
#define USART0_IMR_DCDIC		(1 << 18)
/** USART0_IMR_DSRIC Data Set Ready Input Change Mask **/
#define USART0_IMR_DSRIC		(1 << 17)
/** USART0_IMR_RIIC Ring Indicator Input Change Mask **/
#define USART0_IMR_RIIC		(1 << 16)
/** USART0_IMR_NACK Non Acknowledge Interrupt Mask **/
#define USART0_IMR_NACK		(1 << 13)
/** USART0_IMR_RXBUFF Receive Buffer Full Interrupt Mask (available in all USART modes of operation) **/
#define USART0_IMR_RXBUFF		(1 << 12)
/** USART0_IMR_TXBUFE Transmit Buffer Empty Interrupt Mask (available in all USART modes of operation) **/
#define USART0_IMR_TXBUFE		(1 << 11)
/** USART0_IMR_ITER Max Number of Repetitions Reached Interrupt Mask **/
#define USART0_IMR_ITER		(1 << 10)
/** USART0_IMR_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART0_IMR_TXEMPTY		(1 << 9)
/** USART0_IMR_TIMEOUT Time-out Interrupt Mask **/
#define USART0_IMR_TIMEOUT		(1 << 8)
/** USART0_IMR_PARE Parity Error Interrupt Mask **/
#define USART0_IMR_PARE		(1 << 7)
/** USART0_IMR_FRAME Framing Error Interrupt Mask **/
#define USART0_IMR_FRAME		(1 << 6)
/** USART0_IMR_OVRE Overrun Error Interrupt Mask **/
#define USART0_IMR_OVRE		(1 << 5)
/** USART0_IMR_ENDTX End of Transmit Buffer Interrupt Mask (available in all USART modes of operation) **/
#define USART0_IMR_ENDTX		(1 << 4)
/** USART0_IMR_ENDRX End of Receive Buffer Interrupt Mask (available in all USART modes of operation) **/
#define USART0_IMR_ENDRX		(1 << 3)
/** USART0_IMR_RXBRK Receiver Break Interrupt Mask **/
#define USART0_IMR_RXBRK		(1 << 2)
/** USART0_IMR_TXRDY TXRDY Interrupt Mask **/
#define USART0_IMR_TXRDY		(1 << 1)
/** USART0_IMR_RXRDY RXRDY Interrupt Mask **/
#define USART0_IMR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_imr_spi_mode IMRSPIMODE Interrupt Mask Register
@{*/

/** USART0_IMR_SPI_MODE_RXBUFF Receive Buffer Full Interrupt Mask **/
#define USART0_IMR_SPI_MODE_RXBUFF		(1 << 12)
/** USART0_IMR_SPI_MODE_TXBUFE Transmit Buffer Empty Interrupt Mask **/
#define USART0_IMR_SPI_MODE_TXBUFE		(1 << 11)
/** USART0_IMR_SPI_MODE_UNRE SPI Underrun Error Interrupt Mask **/
#define USART0_IMR_SPI_MODE_UNRE		(1 << 10)
/** USART0_IMR_SPI_MODE_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART0_IMR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART0_IMR_SPI_MODE_OVRE Overrun Error Interrupt Mask **/
#define USART0_IMR_SPI_MODE_OVRE		(1 << 5)
/** USART0_IMR_SPI_MODE_ENDTX End of Transmit Buffer Interrupt Mask **/
#define USART0_IMR_SPI_MODE_ENDTX		(1 << 4)
/** USART0_IMR_SPI_MODE_ENDRX End of Receive Buffer Interrupt Mask **/
#define USART0_IMR_SPI_MODE_ENDRX		(1 << 3)
/** USART0_IMR_SPI_MODE_TXRDY TXRDY Interrupt Mask **/
#define USART0_IMR_SPI_MODE_TXRDY		(1 << 1)
/** USART0_IMR_SPI_MODE_RXRDY RXRDY Interrupt Mask **/
#define USART0_IMR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_csr CSR Channel Status Register
@{*/

/** USART0_CSR_MANERR Manchester Error (cleared by writing a one to the bit US_CR.RSTSTA) **/
#define USART0_CSR_MANERR		(1 << 24)
/** USART0_CSR_CTS Image of CTS Input **/
#define USART0_CSR_CTS		(1 << 23)
/** USART0_CSR_DCD Image of DCD Input **/
#define USART0_CSR_DCD		(1 << 22)
/** USART0_CSR_DSR Image of DSR Input **/
#define USART0_CSR_DSR		(1 << 21)
/** USART0_CSR_RI Image of RI Input **/
#define USART0_CSR_RI		(1 << 20)
/** USART0_CSR_CTSIC Clear to Send Input Change Flag (cleared on read) **/
#define USART0_CSR_CTSIC		(1 << 19)
/** USART0_CSR_DCDIC Data Carrier Detect Input Change Flag (cleared on read) **/
#define USART0_CSR_DCDIC		(1 << 18)
/** USART0_CSR_DSRIC Data Set Ready Input Change Flag (cleared on read) **/
#define USART0_CSR_DSRIC		(1 << 17)
/** USART0_CSR_RIIC Ring Indicator Input Change Flag (cleared on read) **/
#define USART0_CSR_RIIC		(1 << 16)
/** USART0_CSR_NACK Non Acknowledge Interrupt (cleared by writing a one to bit US_CR.RSTNACK) **/
#define USART0_CSR_NACK		(1 << 13)
/** USART0_CSR_RXBUFF RX Buffer Full (cleared by writing US_RCR or US_RNCR) **/
#define USART0_CSR_RXBUFF		(1 << 12)
/** USART0_CSR_TXBUFE TX Buffer Empty (cleared by writing US_TCR or US_TNCR) **/
#define USART0_CSR_TXBUFE		(1 << 11)
/** USART0_CSR_ITER Max Number of Repetitions Reached (cleared by writing a one to bit US_CR.RSTIT) **/
#define USART0_CSR_ITER		(1 << 10)
/** USART0_CSR_TXEMPTY Transmitter Empty (cleared by writing US_THR) **/
#define USART0_CSR_TXEMPTY		(1 << 9)
/** USART0_CSR_TIMEOUT Receiver Time-out (cleared by writing a one to bit US_CR.STTTO) **/
#define USART0_CSR_TIMEOUT		(1 << 8)
/** USART0_CSR_PARE Parity Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_CSR_PARE		(1 << 7)
/** USART0_CSR_FRAME Framing Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_CSR_FRAME		(1 << 6)
/** USART0_CSR_OVRE Overrun Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_CSR_OVRE		(1 << 5)
/** USART0_CSR_ENDTX End of TX Buffer (cleared by writing US_TCR or US_TNCR) **/
#define USART0_CSR_ENDTX		(1 << 4)
/** USART0_CSR_ENDRX End of RX Buffer (cleared by writing US_RCR or US_RNCR) **/
#define USART0_CSR_ENDRX		(1 << 3)
/** USART0_CSR_RXBRK Break Received/End of Break (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_CSR_RXBRK		(1 << 2)
/** USART0_CSR_TXRDY Transmitter Ready (cleared by writing US_THR) **/
#define USART0_CSR_TXRDY		(1 << 1)
/** USART0_CSR_RXRDY Receiver Ready (cleared by reading US_RHR) **/
#define USART0_CSR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_csr_spi_mode CSRSPIMODE Channel Status Register
@{*/

/** USART0_CSR_SPI_MODE_RXBUFF RX Buffer Full (cleared by writing US_RCR or US_RNCR) **/
#define USART0_CSR_SPI_MODE_RXBUFF		(1 << 12)
/** USART0_CSR_SPI_MODE_TXBUFE TX Buffer Empty (cleared by writing US_TCR or US_TNCR) **/
#define USART0_CSR_SPI_MODE_TXBUFE		(1 << 11)
/** USART0_CSR_SPI_MODE_UNRE Underrun Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_CSR_SPI_MODE_UNRE		(1 << 10)
/** USART0_CSR_SPI_MODE_TXEMPTY Transmitter Empty (cleared by writing US_THR) **/
#define USART0_CSR_SPI_MODE_TXEMPTY		(1 << 9)
/** USART0_CSR_SPI_MODE_OVRE Overrun Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART0_CSR_SPI_MODE_OVRE		(1 << 5)
/** USART0_CSR_SPI_MODE_ENDTX End of TX Buffer (cleared by writing US_TCR or US_TNCR) **/
#define USART0_CSR_SPI_MODE_ENDTX		(1 << 4)
/** USART0_CSR_SPI_MODE_ENDRX End of RX Buffer (cleared by writing US_RCR or US_RNCR) **/
#define USART0_CSR_SPI_MODE_ENDRX		(1 << 3)
/** USART0_CSR_SPI_MODE_TXRDY Transmitter Ready (cleared by writing US_THR) **/
#define USART0_CSR_SPI_MODE_TXRDY		(1 << 1)
/** USART0_CSR_SPI_MODE_RXRDY Receiver Ready (cleared by reading US_RHR) **/
#define USART0_CSR_SPI_MODE_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart0_rhr RHR Receive Holding Register
@{*/

/** USART0_RHR_RXSYNH Received Sync **/
#define USART0_RHR_RXSYNH		(1 << 15)

#define USART0_RHR_RXCHR_SHIFT		0
#define USART0_RHR_RXCHR_MASK		0x1ff
/** @defgroup usart0_rhr_rxchr RXCHR Received Character
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_thr THR Transmit Holding Register
@{*/

/** USART0_THR_TXSYNH Sync Field to be Transmitted **/
#define USART0_THR_TXSYNH		(1 << 15)

#define USART0_THR_TXCHR_SHIFT		0
#define USART0_THR_TXCHR_MASK		0x1ff
/** @defgroup usart0_thr_txchr TXCHR Character to be Transmitted
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_brgr BRGR Baud Rate Generator Register
@{*/


#define USART0_BRGR_FP_SHIFT		16
#define USART0_BRGR_FP_MASK		0x07
/** @defgroup usart0_brgr_fp FP Fractional Part
@{*/
/**@}*/


#define USART0_BRGR_CD_SHIFT		0
#define USART0_BRGR_CD_MASK		0xffff
/** @defgroup usart0_brgr_cd CD Clock Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_rtor RTOR Receiver Time-out Register
@{*/


#define USART0_RTOR_TO_SHIFT		0
#define USART0_RTOR_TO_MASK		0xffff
/** @defgroup usart0_rtor_to TO Time-out Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_ttgr TTGR Transmitter Timeguard Register
@{*/


#define USART0_TTGR_TG_SHIFT		0
#define USART0_TTGR_TG_MASK		0xff
/** @defgroup usart0_ttgr_tg TG Timeguard Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_fidi FIDI FI DI Ratio Register
@{*/


#define USART0_FIDI_FI_DI_RATIO_SHIFT		0
#define USART0_FIDI_FI_DI_RATIO_MASK		0x7ff
/** @defgroup usart0_fidi_fi_di_ratio FIDIRATIO FI Over DI Ratio Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_ner NER Number of Errors Register
@{*/


#define USART0_NER_NB_ERRORS_SHIFT		0
#define USART0_NER_NB_ERRORS_MASK		0xff
/** @defgroup usart0_ner_nb_errors NBERRORS Number of Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_if IF IrDA Filter Register
@{*/


#define USART0_IF_IRDA_FILTER_SHIFT		0
#define USART0_IF_IRDA_FILTER_MASK		0xff
/** @defgroup usart0_if_irda_filter IRDAFILTER IrDA Filter
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_man MAN Manchester Configuration Register
@{*/

/** USART0_MAN_DRIFT Drift Compensation **/
#define USART0_MAN_DRIFT		(1 << 30)
/** USART0_MAN_ONE Must Be Set to 1 **/
#define USART0_MAN_ONE		(1 << 29)
/** USART0_MAN_RX_MPOL Receiver Manchester Polarity **/
#define USART0_MAN_RX_MPOL		(1 << 28)

#define USART0_MAN_RX_PP_SHIFT		24
#define USART0_MAN_RX_PP_MASK		0x03
/** @defgroup usart0_man_rx_pp RXPP Receiver Preamble Pattern detected
@{*/
/**@}*/


#define USART0_MAN_RX_PL_SHIFT		16
#define USART0_MAN_RX_PL_MASK		0x0f
/** @defgroup usart0_man_rx_pl RXPL Receiver Preamble Length
@{*/
/**@}*/

/** USART0_MAN_TX_MPOL Transmitter Manchester Polarity **/
#define USART0_MAN_TX_MPOL		(1 << 12)

#define USART0_MAN_TX_PP_SHIFT		8
#define USART0_MAN_TX_PP_MASK		0x03
/** @defgroup usart0_man_tx_pp TXPP Transmitter Preamble Pattern
@{*/
/**@}*/


#define USART0_MAN_TX_PL_SHIFT		0
#define USART0_MAN_TX_PL_MASK		0x0f
/** @defgroup usart0_man_tx_pl TXPL Transmitter Preamble Length
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_wpmr WPMR Write Protection Mode Register
@{*/


#define USART0_WPMR_WPKEY_SHIFT		8
#define USART0_WPMR_WPKEY_MASK		0xffffff
/** @defgroup usart0_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** USART0_WPMR_WPEN Write Protection Enable **/
#define USART0_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup usart0_wpsr WPSR Write Protection Status Register
@{*/


#define USART0_WPSR_WPVSRC_SHIFT		8
#define USART0_WPSR_WPVSRC_MASK		0xffff
/** @defgroup usart0_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** USART0_WPSR_WPVS Write Protection Violation Status **/
#define USART0_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup usart0_rpr RPR Receive Pointer Register
@{*/


#define USART0_RPR_RXPTR_SHIFT		0
#define USART0_RPR_RXPTR_MASK		0xffffffff
/** @defgroup usart0_rpr_rxptr RXPTR Receive Pointer Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_rcr RCR Receive Counter Register
@{*/


#define USART0_RCR_RXCTR_SHIFT		0
#define USART0_RCR_RXCTR_MASK		0xffff
/** @defgroup usart0_rcr_rxctr RXCTR Receive Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_tpr TPR Transmit Pointer Register
@{*/


#define USART0_TPR_TXPTR_SHIFT		0
#define USART0_TPR_TXPTR_MASK		0xffffffff
/** @defgroup usart0_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_tcr TCR Transmit Counter Register
@{*/


#define USART0_TCR_TXCTR_SHIFT		0
#define USART0_TCR_TXCTR_MASK		0xffff
/** @defgroup usart0_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_rnpr RNPR Receive Next Pointer Register
@{*/


#define USART0_RNPR_RXNPTR_SHIFT		0
#define USART0_RNPR_RXNPTR_MASK		0xffffffff
/** @defgroup usart0_rnpr_rxnptr RXNPTR Receive Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_rncr RNCR Receive Next Counter Register
@{*/


#define USART0_RNCR_RXNCTR_SHIFT		0
#define USART0_RNCR_RXNCTR_MASK		0xffff
/** @defgroup usart0_rncr_rxnctr RXNCTR Receive Next Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_tnpr TNPR Transmit Next Pointer Register
@{*/


#define USART0_TNPR_TXNPTR_SHIFT		0
#define USART0_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup usart0_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_tncr TNCR Transmit Next Counter Register
@{*/


#define USART0_TNCR_TXNCTR_SHIFT		0
#define USART0_TNCR_TXNCTR_MASK		0xffff
/** @defgroup usart0_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup usart0_ptcr PTCR Transfer Control Register
@{*/

/** USART0_PTCR_TXTDIS Transmitter Transfer Disable **/
#define USART0_PTCR_TXTDIS		(1 << 9)
/** USART0_PTCR_TXTEN Transmitter Transfer Enable **/
#define USART0_PTCR_TXTEN		(1 << 8)
/** USART0_PTCR_RXTDIS Receiver Transfer Disable **/
#define USART0_PTCR_RXTDIS		(1 << 1)
/** USART0_PTCR_RXTEN Receiver Transfer Enable **/
#define USART0_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup usart0_ptsr PTSR Transfer Status Register
@{*/

/** USART0_PTSR_TXTEN Transmitter Transfer Enable **/
#define USART0_PTSR_TXTEN		(1 << 8)
/** USART0_PTSR_RXTEN Receiver Transfer Enable **/
#define USART0_PTSR_RXTEN		(1 << 0)

/**@}*/

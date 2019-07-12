#pragma once 

/* --- USART1: Universal Synchronous Asynchronous Receiver Transmitter  */

/** @defgroup usart1_registers Universal Synchronous Asynchronous Receiver Transmitter Register
@{*/

/** USART1_US_CR Control Register **/
#define USART1_US_CR			MMIO32(USART1_BASE + 0x00)
/** USART1_US_MR Mode Register **/
#define USART1_US_MR			MMIO32(USART1_BASE + 0x04)
/** USART1_US_IER Interrupt Enable Register **/
#define USART1_US_IER			MMIO32(USART1_BASE + 0x08)
/** USART1_US_IDR Interrupt Disable Register **/
#define USART1_US_IDR			MMIO32(USART1_BASE + 0x0c)
/** USART1_US_IMR Interrupt Mask Register **/
#define USART1_US_IMR			MMIO32(USART1_BASE + 0x10)
/** USART1_US_CSR Channel Status Register **/
#define USART1_US_CSR			MMIO32(USART1_BASE + 0x14)
/** USART1_US_RHR Receive Holding Register **/
#define USART1_US_RHR			MMIO32(USART1_BASE + 0x18)
/** USART1_US_THR Transmit Holding Register **/
#define USART1_US_THR			MMIO32(USART1_BASE + 0x1c)
/** USART1_US_BRGR Baud Rate Generator Register **/
#define USART1_US_BRGR			MMIO32(USART1_BASE + 0x20)
/** USART1_US_RTOR Receiver Timeout Register **/
#define USART1_US_RTOR			MMIO32(USART1_BASE + 0x24)
/** USART1_US_TTGR Transmitter Timeguard Register **/
#define USART1_US_TTGR			MMIO32(USART1_BASE + 0x28)
/** USART1_US_FIDI FI DI Ratio Register **/
#define USART1_US_FIDI			MMIO32(USART1_BASE + 0x40)
/** USART1_US_NER Number of Errors Register **/
#define USART1_US_NER			MMIO32(USART1_BASE + 0x44)
/** USART1_US_IF IrDA Filter Register **/
#define USART1_US_IF			MMIO32(USART1_BASE + 0x4c)
/** USART1_US_MAN Manchester Configuration Register **/
#define USART1_US_MAN			MMIO32(USART1_BASE + 0x50)
/** USART1_US_LINMR LIN Mode Register **/
#define USART1_US_LINMR			MMIO32(USART1_BASE + 0x54)
/** USART1_US_LINIR LIN Identifier Register **/
#define USART1_US_LINIR			MMIO32(USART1_BASE + 0x58)
/** USART1_US_LINBRR LIN Baud Rate Register **/
#define USART1_US_LINBRR			MMIO32(USART1_BASE + 0x5c)
/** USART1_US_LONMR LON Mode Register **/
#define USART1_US_LONMR			MMIO32(USART1_BASE + 0x60)
/** USART1_US_LONPR LON Preamble Register **/
#define USART1_US_LONPR			MMIO32(USART1_BASE + 0x64)
/** USART1_US_LONDL LON Data Length Register **/
#define USART1_US_LONDL			MMIO32(USART1_BASE + 0x68)
/** USART1_US_LONL2HDR LON L2HDR Register **/
#define USART1_US_LONL2HDR			MMIO32(USART1_BASE + 0x6c)
/** USART1_US_LONBL LON Backlog Register **/
#define USART1_US_LONBL			MMIO32(USART1_BASE + 0x70)
/** USART1_US_LONB1TX LON Beta1 Tx Register **/
#define USART1_US_LONB1TX			MMIO32(USART1_BASE + 0x74)
/** USART1_US_LONB1RX LON Beta1 Rx Register **/
#define USART1_US_LONB1RX			MMIO32(USART1_BASE + 0x78)
/** USART1_US_LONPRIO LON Priority Register **/
#define USART1_US_LONPRIO			MMIO32(USART1_BASE + 0x7c)
/** USART1_US_IDTTX LON IDT Tx Register **/
#define USART1_US_IDTTX			MMIO32(USART1_BASE + 0x80)
/** USART1_US_IDTRX LON IDT Rx Register **/
#define USART1_US_IDTRX			MMIO32(USART1_BASE + 0x84)
/** USART1_US_ICDIFF IC DIFF Register **/
#define USART1_US_ICDIFF			MMIO32(USART1_BASE + 0x88)
/** USART1_US_WPMR Write Protection Mode Register **/
#define USART1_US_WPMR			MMIO32(USART1_BASE + 0xe4)
/** USART1_US_WPSR Write Protection Status Register **/
#define USART1_US_WPSR			MMIO32(USART1_BASE + 0xe8)
/** USART1_US_VERSION Version Register **/
#define USART1_US_VERSION			MMIO32(USART1_BASE + 0xfc)

/**@}*/


/** @defgroup usart1_us_cr USCR Control Register
@{*/

/** USART1_US_CR_LINWKUP Send LIN Wakeup Signal **/
#define USART1_US_CR_LINWKUP		(1 << 21)
/** USART1_US_CR_LINABT Abort LIN Transmission **/
#define USART1_US_CR_LINABT		(1 << 20)
/** USART1_US_CR_RTSDIS Request to Send Pin Control **/
#define USART1_US_CR_RTSDIS		(1 << 19)
/** USART1_US_CR_RTSEN Request to Send Pin Control **/
#define USART1_US_CR_RTSEN		(1 << 18)
/** USART1_US_CR_DTRDIS Data Terminal Ready Disable **/
#define USART1_US_CR_DTRDIS		(1 << 17)
/** USART1_US_CR_DTREN Data Terminal Ready Enable **/
#define USART1_US_CR_DTREN		(1 << 16)
/** USART1_US_CR_RETTO Start Timeout Immediately **/
#define USART1_US_CR_RETTO		(1 << 15)
/** USART1_US_CR_RSTNACK Reset Non Acknowledge **/
#define USART1_US_CR_RSTNACK		(1 << 14)
/** USART1_US_CR_RSTIT Reset Iterations **/
#define USART1_US_CR_RSTIT		(1 << 13)
/** USART1_US_CR_SENDA Send Address **/
#define USART1_US_CR_SENDA		(1 << 12)
/** USART1_US_CR_STTTO Clear TIMEOUT Flag and Start Timeout After Next Character Received **/
#define USART1_US_CR_STTTO		(1 << 11)
/** USART1_US_CR_STPBRK Stop Break **/
#define USART1_US_CR_STPBRK		(1 << 10)
/** USART1_US_CR_STTBRK Start Break **/
#define USART1_US_CR_STTBRK		(1 << 9)
/** USART1_US_CR_RSTSTA Reset Status Bits **/
#define USART1_US_CR_RSTSTA		(1 << 8)
/** USART1_US_CR_TXDIS Transmitter Disable **/
#define USART1_US_CR_TXDIS		(1 << 7)
/** USART1_US_CR_TXEN Transmitter Enable **/
#define USART1_US_CR_TXEN		(1 << 6)
/** USART1_US_CR_RXDIS Receiver Disable **/
#define USART1_US_CR_RXDIS		(1 << 5)
/** USART1_US_CR_RXEN Receiver Enable **/
#define USART1_US_CR_RXEN		(1 << 4)
/** USART1_US_CR_RSTTX Reset Transmitter **/
#define USART1_US_CR_RSTTX		(1 << 3)
/** USART1_US_CR_RSTRX Reset Receiver **/
#define USART1_US_CR_RSTRX		(1 << 2)

/**@}*/

/** @defgroup usart1_us_mr USMR Mode Register
@{*/

/** USART1_US_MR_ONEBIT Start Frame Delimiter Selector **/
#define USART1_US_MR_ONEBIT		(1 << 31)
/** USART1_US_MR_MODSYNC Manchester Synchronization Mode **/
#define USART1_US_MR_MODSYNC		(1 << 30)
/** USART1_US_MR_MAN Manchester Encoder/Decoder Enable **/
#define USART1_US_MR_MAN		(1 << 29)
/** USART1_US_MR_FILTER Receive Line Filter **/
#define USART1_US_MR_FILTER		(1 << 28)

#define USART1_US_MR_MAX_ITERATION_SHIFT		24
#define USART1_US_MR_MAX_ITERATION_MASK		0x07
/** @defgroup usart1_us_mr_max_iteration MAXITERATION Maximum Number of Automatic Iteration
@{*/
/**@}*/

/** USART1_US_MR_INVDATA Inverted Data **/
#define USART1_US_MR_INVDATA		(1 << 23)
/** USART1_US_MR_VAR_SYNC Variable Synchronization of Command/Data Sync Start Frame Delimiter **/
#define USART1_US_MR_VAR_SYNC		(1 << 22)
/** USART1_US_MR_DSNACK Disable Successive NACK **/
#define USART1_US_MR_DSNACK		(1 << 21)
/** USART1_US_MR_INACK Inhibit Non Acknowledge **/
#define USART1_US_MR_INACK		(1 << 20)
/** USART1_US_MR_OVER Oversampling Mode **/
#define USART1_US_MR_OVER		(1 << 19)
/** USART1_US_MR_CLKO Clock Output Select **/
#define USART1_US_MR_CLKO		(1 << 18)
/** USART1_US_MR_MODE9 9-bit Character Length **/
#define USART1_US_MR_MODE9		(1 << 17)
/** USART1_US_MR_MSBF Bit Order **/
#define USART1_US_MR_MSBF		(1 << 16)

#define USART1_US_MR_CHMODE_SHIFT		14
#define USART1_US_MR_CHMODE_MASK		0x03
/** @defgroup usart1_us_mr_chmode CHMODE Channel Mode
@{*/
/**@}*/


#define USART1_US_MR_NBSTOP_SHIFT		12
#define USART1_US_MR_NBSTOP_MASK		0x03
/** @defgroup usart1_us_mr_nbstop NBSTOP Number of Stop Bits
@{*/
/**@}*/


#define USART1_US_MR_PAR_SHIFT		9
#define USART1_US_MR_PAR_MASK		0x07
/** @defgroup usart1_us_mr_par PAR Parity Type
@{*/
/**@}*/

/** USART1_US_MR_SYNC Synchronous Mode Select **/
#define USART1_US_MR_SYNC		(1 << 8)

#define USART1_US_MR_CHRL_SHIFT		6
#define USART1_US_MR_CHRL_MASK		0x03
/** @defgroup usart1_us_mr_chrl CHRL Character Length
@{*/
/**@}*/


#define USART1_US_MR_USCLKS_SHIFT		4
#define USART1_US_MR_USCLKS_MASK		0x03
/** @defgroup usart1_us_mr_usclks USCLKS Clock Selection
@{*/
/**@}*/


#define USART1_US_MR_USART_MODE_SHIFT		0
#define USART1_US_MR_USART_MODE_MASK		0x0f
/** @defgroup usart1_us_mr_usart_mode USARTMODE USART Mode of Operation
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_ier USIER Interrupt Enable Register
@{*/

/** USART1_US_IER_MANE Manchester Error Interrupt Enable **/
#define USART1_US_IER_MANE		(1 << 24)
/** USART1_US_IER_CTSIC Clear to Send Input Change Interrupt Enable **/
#define USART1_US_IER_CTSIC		(1 << 19)
/** USART1_US_IER_DCDIC Data Carrier Detect Input Change Interrupt Enable **/
#define USART1_US_IER_DCDIC		(1 << 18)
/** USART1_US_IER_DSRIC Data Set Ready Input Change Enable **/
#define USART1_US_IER_DSRIC		(1 << 17)
/** USART1_US_IER_RIIC Ring Indicator Input Change Enable **/
#define USART1_US_IER_RIIC		(1 << 16)
/** USART1_US_IER_NACK Non Acknowledge Interrupt Enable **/
#define USART1_US_IER_NACK		(1 << 13)
/** USART1_US_IER_ITER Max number of Repetitions Reached Interrupt Enable **/
#define USART1_US_IER_ITER		(1 << 10)
/** USART1_US_IER_TXEMPTY TXEMPTY Interrupt Enable **/
#define USART1_US_IER_TXEMPTY		(1 << 9)
/** USART1_US_IER_TIMEOUT Timeout Interrupt Enable **/
#define USART1_US_IER_TIMEOUT		(1 << 8)
/** USART1_US_IER_PARE Parity Error Interrupt Enable **/
#define USART1_US_IER_PARE		(1 << 7)
/** USART1_US_IER_FRAME Framing Error Interrupt Enable **/
#define USART1_US_IER_FRAME		(1 << 6)
/** USART1_US_IER_OVRE Overrun Error Interrupt Enable **/
#define USART1_US_IER_OVRE		(1 << 5)
/** USART1_US_IER_RXBRK Receiver Break Interrupt Enable **/
#define USART1_US_IER_RXBRK		(1 << 2)
/** USART1_US_IER_TXRDY TXRDY Interrupt Enable **/
#define USART1_US_IER_TXRDY		(1 << 1)
/** USART1_US_IER_RXRDY RXRDY Interrupt Enable **/
#define USART1_US_IER_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart1_us_idr USIDR Interrupt Disable Register
@{*/

/** USART1_US_IDR_MANE Manchester Error Interrupt Disable **/
#define USART1_US_IDR_MANE		(1 << 24)
/** USART1_US_IDR_CTSIC Clear to Send Input Change Interrupt Disable **/
#define USART1_US_IDR_CTSIC		(1 << 19)
/** USART1_US_IDR_DCDIC Data Carrier Detect Input Change Interrupt Disable **/
#define USART1_US_IDR_DCDIC		(1 << 18)
/** USART1_US_IDR_DSRIC Data Set Ready Input Change Disable **/
#define USART1_US_IDR_DSRIC		(1 << 17)
/** USART1_US_IDR_RIIC Ring Indicator Input Change Disable **/
#define USART1_US_IDR_RIIC		(1 << 16)
/** USART1_US_IDR_NACK Non Acknowledge Interrupt Disable **/
#define USART1_US_IDR_NACK		(1 << 13)
/** USART1_US_IDR_ITER Max Number of Repetitions Reached Interrupt Disable **/
#define USART1_US_IDR_ITER		(1 << 10)
/** USART1_US_IDR_TXEMPTY TXEMPTY Interrupt Disable **/
#define USART1_US_IDR_TXEMPTY		(1 << 9)
/** USART1_US_IDR_TIMEOUT Timeout Interrupt Disable **/
#define USART1_US_IDR_TIMEOUT		(1 << 8)
/** USART1_US_IDR_PARE Parity Error Interrupt Disable **/
#define USART1_US_IDR_PARE		(1 << 7)
/** USART1_US_IDR_FRAME Framing Error Interrupt Disable **/
#define USART1_US_IDR_FRAME		(1 << 6)
/** USART1_US_IDR_OVRE Overrun Error Interrupt Enable **/
#define USART1_US_IDR_OVRE		(1 << 5)
/** USART1_US_IDR_RXBRK Receiver Break Interrupt Disable **/
#define USART1_US_IDR_RXBRK		(1 << 2)
/** USART1_US_IDR_TXRDY TXRDY Interrupt Disable **/
#define USART1_US_IDR_TXRDY		(1 << 1)
/** USART1_US_IDR_RXRDY RXRDY Interrupt Disable **/
#define USART1_US_IDR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart1_us_imr USIMR Interrupt Mask Register
@{*/

/** USART1_US_IMR_MANE Manchester Error Interrupt Mask **/
#define USART1_US_IMR_MANE		(1 << 24)
/** USART1_US_IMR_CTSIC Clear to Send Input Change Interrupt Mask **/
#define USART1_US_IMR_CTSIC		(1 << 19)
/** USART1_US_IMR_DCDIC Data Carrier Detect Input Change Interrupt Mask **/
#define USART1_US_IMR_DCDIC		(1 << 18)
/** USART1_US_IMR_DSRIC Data Set Ready Input Change Mask **/
#define USART1_US_IMR_DSRIC		(1 << 17)
/** USART1_US_IMR_RIIC Ring Indicator Input Change Mask **/
#define USART1_US_IMR_RIIC		(1 << 16)
/** USART1_US_IMR_NACK Non Acknowledge Interrupt Mask **/
#define USART1_US_IMR_NACK		(1 << 13)
/** USART1_US_IMR_ITER Max Number of Repetitions Reached Interrupt Mask **/
#define USART1_US_IMR_ITER		(1 << 10)
/** USART1_US_IMR_TXEMPTY TXEMPTY Interrupt Mask **/
#define USART1_US_IMR_TXEMPTY		(1 << 9)
/** USART1_US_IMR_TIMEOUT Timeout Interrupt Mask **/
#define USART1_US_IMR_TIMEOUT		(1 << 8)
/** USART1_US_IMR_PARE Parity Error Interrupt Mask **/
#define USART1_US_IMR_PARE		(1 << 7)
/** USART1_US_IMR_FRAME Framing Error Interrupt Mask **/
#define USART1_US_IMR_FRAME		(1 << 6)
/** USART1_US_IMR_OVRE Overrun Error Interrupt Mask **/
#define USART1_US_IMR_OVRE		(1 << 5)
/** USART1_US_IMR_RXBRK Receiver Break Interrupt Mask **/
#define USART1_US_IMR_RXBRK		(1 << 2)
/** USART1_US_IMR_TXRDY TXRDY Interrupt Mask **/
#define USART1_US_IMR_TXRDY		(1 << 1)
/** USART1_US_IMR_RXRDY RXRDY Interrupt Mask **/
#define USART1_US_IMR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart1_us_csr USCSR Channel Status Register
@{*/

/** USART1_US_CSR_MANERR Manchester Error (cleared by writing a one to the bit US_CR.RSTSTA) **/
#define USART1_US_CSR_MANERR		(1 << 24)
/** USART1_US_CSR_CTS Image of CTS Input **/
#define USART1_US_CSR_CTS		(1 << 23)
/** USART1_US_CSR_DCD Image of DCD Input **/
#define USART1_US_CSR_DCD		(1 << 22)
/** USART1_US_CSR_DSR Image of DSR Input **/
#define USART1_US_CSR_DSR		(1 << 21)
/** USART1_US_CSR_RI Image of RI Input **/
#define USART1_US_CSR_RI		(1 << 20)
/** USART1_US_CSR_CTSIC Clear to Send Input Change Flag (cleared on read) **/
#define USART1_US_CSR_CTSIC		(1 << 19)
/** USART1_US_CSR_DCDIC Data Carrier Detect Input Change Flag (cleared on read) **/
#define USART1_US_CSR_DCDIC		(1 << 18)
/** USART1_US_CSR_DSRIC Data Set Ready Input Change Flag (cleared on read) **/
#define USART1_US_CSR_DSRIC		(1 << 17)
/** USART1_US_CSR_RIIC Ring Indicator Input Change Flag (cleared on read) **/
#define USART1_US_CSR_RIIC		(1 << 16)
/** USART1_US_CSR_NACK Non Acknowledge Interrupt (cleared by writing a one to bit US_CR.RSTNACK) **/
#define USART1_US_CSR_NACK		(1 << 13)
/** USART1_US_CSR_ITER Max Number of Repetitions Reached (cleared by writing a one to bit US_CR.RSTIT) **/
#define USART1_US_CSR_ITER		(1 << 10)
/** USART1_US_CSR_TXEMPTY Transmitter Empty (cleared by writing US_THR) **/
#define USART1_US_CSR_TXEMPTY		(1 << 9)
/** USART1_US_CSR_TIMEOUT Receiver Timeout (cleared by writing a one to bit US_CR.STTTO) **/
#define USART1_US_CSR_TIMEOUT		(1 << 8)
/** USART1_US_CSR_PARE Parity Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART1_US_CSR_PARE		(1 << 7)
/** USART1_US_CSR_FRAME Framing Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART1_US_CSR_FRAME		(1 << 6)
/** USART1_US_CSR_OVRE Overrun Error (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART1_US_CSR_OVRE		(1 << 5)
/** USART1_US_CSR_RXBRK Break Received/End of Break (cleared by writing a one to bit US_CR.RSTSTA) **/
#define USART1_US_CSR_RXBRK		(1 << 2)
/** USART1_US_CSR_TXRDY Transmitter Ready (cleared by writing US_THR) **/
#define USART1_US_CSR_TXRDY		(1 << 1)
/** USART1_US_CSR_RXRDY Receiver Ready (cleared by reading US_RHR) **/
#define USART1_US_CSR_RXRDY		(1 << 0)

/**@}*/

/** @defgroup usart1_us_rhr USRHR Receive Holding Register
@{*/

/** USART1_US_RHR_RXSYNH Received Sync **/
#define USART1_US_RHR_RXSYNH		(1 << 15)

#define USART1_US_RHR_RXCHR_SHIFT		0
#define USART1_US_RHR_RXCHR_MASK		0x1ff
/** @defgroup usart1_us_rhr_rxchr RXCHR Received Character
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_thr USTHR Transmit Holding Register
@{*/

/** USART1_US_THR_TXSYNH Sync Field to be Transmitted **/
#define USART1_US_THR_TXSYNH		(1 << 15)

#define USART1_US_THR_TXCHR_SHIFT		0
#define USART1_US_THR_TXCHR_MASK		0x1ff
/** @defgroup usart1_us_thr_txchr TXCHR Character to be Transmitted
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_brgr USBRGR Baud Rate Generator Register
@{*/


#define USART1_US_BRGR_FP_SHIFT		16
#define USART1_US_BRGR_FP_MASK		0x07
/** @defgroup usart1_us_brgr_fp FP Fractional Part
@{*/
/**@}*/


#define USART1_US_BRGR_CD_SHIFT		0
#define USART1_US_BRGR_CD_MASK		0xffff
/** @defgroup usart1_us_brgr_cd CD Clock Divider
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_rtor USRTOR Receiver Timeout Register
@{*/


#define USART1_US_RTOR_TO_SHIFT		0
#define USART1_US_RTOR_TO_MASK		0x1ffff
/** @defgroup usart1_us_rtor_to TO Timeout Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_ttgr USTTGR Transmitter Timeguard Register
@{*/


#define USART1_US_TTGR_TG_SHIFT		0
#define USART1_US_TTGR_TG_MASK		0xff
/** @defgroup usart1_us_ttgr_tg TG Timeguard Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_fidi USFIDI FI DI Ratio Register
@{*/


#define USART1_US_FIDI_FI_DI_RATIO_SHIFT		0
#define USART1_US_FIDI_FI_DI_RATIO_MASK		0xffff
/** @defgroup usart1_us_fidi_fi_di_ratio FIDIRATIO FI Over DI Ratio Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_ner USNER Number of Errors Register
@{*/


#define USART1_US_NER_NB_ERRORS_SHIFT		0
#define USART1_US_NER_NB_ERRORS_MASK		0xff
/** @defgroup usart1_us_ner_nb_errors NBERRORS Number of Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_if USIF IrDA Filter Register
@{*/


#define USART1_US_IF_IRDA_FILTER_SHIFT		0
#define USART1_US_IF_IRDA_FILTER_MASK		0xff
/** @defgroup usart1_us_if_irda_filter IRDAFILTER IrDA Filter
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_man USMAN Manchester Configuration Register
@{*/

/** USART1_US_MAN_RXIDLEV  **/
#define USART1_US_MAN_RXIDLEV		(1 << 31)
/** USART1_US_MAN_DRIFT Drift Compensation **/
#define USART1_US_MAN_DRIFT		(1 << 30)
/** USART1_US_MAN_ONE Must Be Set to 1 **/
#define USART1_US_MAN_ONE		(1 << 29)
/** USART1_US_MAN_RX_MPOL Receiver Manchester Polarity **/
#define USART1_US_MAN_RX_MPOL		(1 << 28)

#define USART1_US_MAN_RX_PP_SHIFT		24
#define USART1_US_MAN_RX_PP_MASK		0x03
/** @defgroup usart1_us_man_rx_pp RXPP Receiver Preamble Pattern detected
@{*/
/**@}*/


#define USART1_US_MAN_RX_PL_SHIFT		16
#define USART1_US_MAN_RX_PL_MASK		0x0f
/** @defgroup usart1_us_man_rx_pl RXPL Receiver Preamble Length
@{*/
/**@}*/

/** USART1_US_MAN_TX_MPOL Transmitter Manchester Polarity **/
#define USART1_US_MAN_TX_MPOL		(1 << 12)

#define USART1_US_MAN_TX_PP_SHIFT		8
#define USART1_US_MAN_TX_PP_MASK		0x03
/** @defgroup usart1_us_man_tx_pp TXPP Transmitter Preamble Pattern
@{*/
/**@}*/


#define USART1_US_MAN_TX_PL_SHIFT		0
#define USART1_US_MAN_TX_PL_MASK		0x0f
/** @defgroup usart1_us_man_tx_pl TXPL Transmitter Preamble Length
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_linmr USLINMR LIN Mode Register
@{*/

/** USART1_US_LINMR_SYNCDIS Synchronization Disable **/
#define USART1_US_LINMR_SYNCDIS		(1 << 17)
/** USART1_US_LINMR_PDCM DMAC Mode **/
#define USART1_US_LINMR_PDCM		(1 << 16)

#define USART1_US_LINMR_DLC_SHIFT		8
#define USART1_US_LINMR_DLC_MASK		0xff
/** @defgroup usart1_us_linmr_dlc DLC Data Length Control
@{*/
/**@}*/

/** USART1_US_LINMR_WKUPTYP Wakeup Signal Type **/
#define USART1_US_LINMR_WKUPTYP		(1 << 7)
/** USART1_US_LINMR_FSDIS Frame Slot Mode Disable **/
#define USART1_US_LINMR_FSDIS		(1 << 6)
/** USART1_US_LINMR_DLM Data Length Mode **/
#define USART1_US_LINMR_DLM		(1 << 5)
/** USART1_US_LINMR_CHKTYP Checksum Type **/
#define USART1_US_LINMR_CHKTYP		(1 << 4)
/** USART1_US_LINMR_CHKDIS Checksum Disable **/
#define USART1_US_LINMR_CHKDIS		(1 << 3)
/** USART1_US_LINMR_PARDIS Parity Disable **/
#define USART1_US_LINMR_PARDIS		(1 << 2)

#define USART1_US_LINMR_NACT_SHIFT		0
#define USART1_US_LINMR_NACT_MASK		0x03
/** @defgroup usart1_us_linmr_nact NACT LIN Node Action
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_linir USLINIR LIN Identifier Register
@{*/


#define USART1_US_LINIR_IDCHR_SHIFT		0
#define USART1_US_LINIR_IDCHR_MASK		0xff
/** @defgroup usart1_us_linir_idchr IDCHR Identifier Character
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_linbrr USLINBRR LIN Baud Rate Register
@{*/


#define USART1_US_LINBRR_LINFP_SHIFT		16
#define USART1_US_LINBRR_LINFP_MASK		0x07
/** @defgroup usart1_us_linbrr_linfp LINFP Fractional Part after Synchronization
@{*/
/**@}*/


#define USART1_US_LINBRR_LINCD_SHIFT		0
#define USART1_US_LINBRR_LINCD_MASK		0xffff
/** @defgroup usart1_us_linbrr_lincd LINCD Clock Divider after Synchronization
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_lonmr USLONMR LON Mode Register
@{*/


#define USART1_US_LONMR_EOFS_SHIFT		16
#define USART1_US_LONMR_EOFS_MASK		0xff
/** @defgroup usart1_us_lonmr_eofs EOFS End of Frame Condition Size
@{*/
/**@}*/

/** USART1_US_LONMR_LCDS LON Collision Detection Source **/
#define USART1_US_LONMR_LCDS		(1 << 5)
/** USART1_US_LONMR_DMAM LON DMA Mode **/
#define USART1_US_LONMR_DMAM		(1 << 4)
/** USART1_US_LONMR_CDTAIL LON Collision Detection on Frame Tail **/
#define USART1_US_LONMR_CDTAIL		(1 << 3)
/** USART1_US_LONMR_TCOL Terminate Frame upon Collision Notification **/
#define USART1_US_LONMR_TCOL		(1 << 2)
/** USART1_US_LONMR_COLDET LON Collision Detection Feature **/
#define USART1_US_LONMR_COLDET		(1 << 1)
/** USART1_US_LONMR_COMMT LON comm_type Parameter Value **/
#define USART1_US_LONMR_COMMT		(1 << 0)

/**@}*/

/** @defgroup usart1_us_lonpr USLONPR LON Preamble Register
@{*/


#define USART1_US_LONPR_LONPL_SHIFT		0
#define USART1_US_LONPR_LONPL_MASK		0x3fff
/** @defgroup usart1_us_lonpr_lonpl LONPL LON Preamble Length
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_londl USLONDL LON Data Length Register
@{*/


#define USART1_US_LONDL_LONDL_SHIFT		0
#define USART1_US_LONDL_LONDL_MASK		0xff
/** @defgroup usart1_us_londl_londl LONDL LON Data Length
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_lonl2hdr USLONL2HDR LON L2HDR Register
@{*/

/** USART1_US_LONL2HDR_PB LON Priority Bit **/
#define USART1_US_LONL2HDR_PB		(1 << 7)
/** USART1_US_LONL2HDR_ALTP LON Alternate Path Bit **/
#define USART1_US_LONL2HDR_ALTP		(1 << 6)

#define USART1_US_LONL2HDR_BLI_SHIFT		0
#define USART1_US_LONL2HDR_BLI_MASK		0x3f
/** @defgroup usart1_us_lonl2hdr_bli BLI LON Backlog Increment
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_lonbl USLONBL LON Backlog Register
@{*/


#define USART1_US_LONBL_LONBL_SHIFT		0
#define USART1_US_LONBL_LONBL_MASK		0x3f
/** @defgroup usart1_us_lonbl_lonbl LONBL LON Node Backlog Value
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_lonb1tx USLONB1TX LON Beta1 Tx Register
@{*/


#define USART1_US_LONB1TX_BETA1TX_SHIFT		0
#define USART1_US_LONB1TX_BETA1TX_MASK		0xffffff
/** @defgroup usart1_us_lonb1tx_beta1tx BETA1TX LON Beta1 Length after Transmission
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_lonb1rx USLONB1RX LON Beta1 Rx Register
@{*/


#define USART1_US_LONB1RX_BETA1RX_SHIFT		0
#define USART1_US_LONB1RX_BETA1RX_MASK		0xffffff
/** @defgroup usart1_us_lonb1rx_beta1rx BETA1RX LON Beta1 Length after Reception
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_lonprio USLONPRIO LON Priority Register
@{*/


#define USART1_US_LONPRIO_NPS_SHIFT		8
#define USART1_US_LONPRIO_NPS_MASK		0x7f
/** @defgroup usart1_us_lonprio_nps NPS LON Node Priority Slot
@{*/
/**@}*/


#define USART1_US_LONPRIO_PSNB_SHIFT		0
#define USART1_US_LONPRIO_PSNB_MASK		0x7f
/** @defgroup usart1_us_lonprio_psnb PSNB LON Priority Slot Number
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_idttx USIDTTX LON IDT Tx Register
@{*/


#define USART1_US_IDTTX_IDTTX_SHIFT		0
#define USART1_US_IDTTX_IDTTX_MASK		0xffffff
/** @defgroup usart1_us_idttx_idttx IDTTX LON Indeterminate Time after Transmission (comm_type = 1 mode only)
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_idtrx USIDTRX LON IDT Rx Register
@{*/


#define USART1_US_IDTRX_IDTRX_SHIFT		0
#define USART1_US_IDTRX_IDTRX_MASK		0xffffff
/** @defgroup usart1_us_idtrx_idtrx IDTRX LON Indeterminate Time after Reception (comm_type = 1 mode only)
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_icdiff USICDIFF IC DIFF Register
@{*/


#define USART1_US_ICDIFF_ICDIFF_SHIFT		0
#define USART1_US_ICDIFF_ICDIFF_MASK		0x0f
/** @defgroup usart1_us_icdiff_icdiff ICDIFF IC Differentiator Number
@{*/
/**@}*/


/**@}*/

/** @defgroup usart1_us_wpmr USWPMR Write Protection Mode Register
@{*/


#define USART1_US_WPMR_WPKEY_SHIFT		8
#define USART1_US_WPMR_WPKEY_MASK		0xffffff
/** @defgroup usart1_us_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** USART1_US_WPMR_WPEN Write Protection Enable **/
#define USART1_US_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup usart1_us_wpsr USWPSR Write Protection Status Register
@{*/


#define USART1_US_WPSR_WPVSRC_SHIFT		8
#define USART1_US_WPSR_WPVSRC_MASK		0xffff
/** @defgroup usart1_us_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** USART1_US_WPSR_WPVS Write Protection Violation Status **/
#define USART1_US_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup usart1_us_version USVERSION Version Register
@{*/


#define USART1_US_VERSION_MFN_SHIFT		16
#define USART1_US_VERSION_MFN_MASK		0x07
/** @defgroup usart1_us_version_mfn MFN Metal Fix Number
@{*/
/**@}*/


#define USART1_US_VERSION_VERSION_SHIFT		0
#define USART1_US_VERSION_VERSION_MASK		0xfff
/** @defgroup usart1_us_version_version VERSION Hardware Module Version
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- QUADSPI: QUADSPI --------------------------------------------- */

/** @defgroup quadspi_registers QUADSPI Register
@{*/

/** QUADSPI_QUADSPI_CR QUADSPI control register **/
#define QUADSPI_QUADSPI_CR			MMIO32(QUADSPI_BASE + 0x00)
/** QUADSPI_QUADSPI_DCR QUADSPI device configuration register **/
#define QUADSPI_QUADSPI_DCR			MMIO32(QUADSPI_BASE + 0x04)
/** QUADSPI_QUADSPI_SR QUADSPI status register **/
#define QUADSPI_QUADSPI_SR			MMIO32(QUADSPI_BASE + 0x08)
/** QUADSPI_QUADSPI_FCR QUADSPI flag clear register **/
#define QUADSPI_QUADSPI_FCR			MMIO32(QUADSPI_BASE + 0x0c)
/** QUADSPI_QUADSPI_DLR QUADSPI data length register **/
#define QUADSPI_QUADSPI_DLR			MMIO32(QUADSPI_BASE + 0x10)
/** QUADSPI_QUADSPI_CCR QUADSPI communication configuration register **/
#define QUADSPI_QUADSPI_CCR			MMIO32(QUADSPI_BASE + 0x14)
/** QUADSPI_QUADSPI_AR QUADSPI address register **/
#define QUADSPI_QUADSPI_AR			MMIO32(QUADSPI_BASE + 0x18)
/** QUADSPI_QUADSPI_ABR QUADSPI alternate bytes registers **/
#define QUADSPI_QUADSPI_ABR			MMIO32(QUADSPI_BASE + 0x1c)
/** QUADSPI_QUADSPI_DR QUADSPI data register **/
#define QUADSPI_QUADSPI_DR			MMIO32(QUADSPI_BASE + 0x20)
/** QUADSPI_QUADSPI_PSMKR QUADSPI polling status mask register **/
#define QUADSPI_QUADSPI_PSMKR			MMIO32(QUADSPI_BASE + 0x24)
/** QUADSPI_QUADSPI_PSMAR QUADSPI polling status match register **/
#define QUADSPI_QUADSPI_PSMAR			MMIO32(QUADSPI_BASE + 0x28)
/** QUADSPI_QUADSPI_PIR QUADSPI polling interval register **/
#define QUADSPI_QUADSPI_PIR			MMIO32(QUADSPI_BASE + 0x2c)
/** QUADSPI_QUADSPI_LPTR QUADSPI low-power timeout register **/
#define QUADSPI_QUADSPI_LPTR			MMIO32(QUADSPI_BASE + 0x30)

/**@}*/


/** @defgroup quadspi_quadspi_cr QUADSPICR QUADSPI control register
@{*/


#define QUADSPI_QUADSPI_CR_PRESCALER_SHIFT		24
#define QUADSPI_QUADSPI_CR_PRESCALER_MASK		0xff
/** @defgroup quadspi_quadspi_cr_prescaler PRESCALER clock prescaler
@{*/
/**@}*/

/** QUADSPI_QUADSPI_CR_PMM Polling match mode This bit indicates which method should be used for determining a match during automatic polling mode. This bit can be modified only when BUSY = 0. **/
#define QUADSPI_QUADSPI_CR_PMM		(1 << 23)
/** QUADSPI_QUADSPI_CR_APMS Automatic poll mode stop This bit determines if automatic polling is stopped after a match. This bit can be modified only when BUSY = 0. **/
#define QUADSPI_QUADSPI_CR_APMS		(1 << 22)
/** QUADSPI_QUADSPI_CR_TOIE TimeOut interrupt enable This bit enables the TimeOut interrupt. **/
#define QUADSPI_QUADSPI_CR_TOIE		(1 << 20)
/** QUADSPI_QUADSPI_CR_SMIE Status match interrupt enable This bit enables the status match interrupt. **/
#define QUADSPI_QUADSPI_CR_SMIE		(1 << 19)
/** QUADSPI_QUADSPI_CR_FTIE FIFO threshold interrupt enable This bit enables the FIFO threshold interrupt. **/
#define QUADSPI_QUADSPI_CR_FTIE		(1 << 18)
/** QUADSPI_QUADSPI_CR_TCIE Transfer complete interrupt enable This bit enables the transfer complete interrupt. **/
#define QUADSPI_QUADSPI_CR_TCIE		(1 << 17)
/** QUADSPI_QUADSPI_CR_TEIE Transfer error interrupt enable This bit enables the transfer error interrupt. **/
#define QUADSPI_QUADSPI_CR_TEIE		(1 << 16)

#define QUADSPI_QUADSPI_CR_FTHRES_SHIFT		8
#define QUADSPI_QUADSPI_CR_FTHRES_MASK		0x1f
/** @defgroup quadspi_quadspi_cr_fthres FTHRES FIFO threshold level Defines, in indirect mode, the threshold number of bytes in the FIFO that will cause the FIFO threshold flag (FTF, QUADSPI_SR[2]) to be set. In indirect write mode (FMODE = 00): ... In indirect read mode (FMODE = 01): ... If DMAEN = 1, then the DMA controller for the corresponding channel must be disabled before changing the FTHRES value.
@{*/
/**@}*/

/** QUADSPI_QUADSPI_CR_FSEL Flash memory selection This bit selects the Flash memory to be addressed in single flash mode (when DFM = 0). This bit can be modified only when BUSY = 0. This bit is ignored when DFM = 1. **/
#define QUADSPI_QUADSPI_CR_FSEL		(1 << 7)
/** QUADSPI_QUADSPI_CR_DFM Dual-flash mode This bit activates dual-flash mode, where two external Flash memories are used simultaneously to double throughput and capacity. This bit can be modified only when BUSY = 0. **/
#define QUADSPI_QUADSPI_CR_DFM		(1 << 6)
/** QUADSPI_QUADSPI_CR_SSHIFT Sample shift By default, the QUADSPI samples data 1/2 of a CLK cycle after the data is driven by the Flash memory. This bit allows the data is to be sampled later in order to account for external signal delays. Firmware must assure that SSHIFT = 0 when in DDR mode (when DDRM = 1). This field can be modified only when BUSY = 0. **/
#define QUADSPI_QUADSPI_CR_SSHIFT		(1 << 4)
/** QUADSPI_QUADSPI_CR_TCEN Timeout counter enable This bit is valid only when memory-mapped mode (FMODE = 11) is selected. Activating this bit causes the chip select (nCS) to be released (and thus reduces consumption) if there has not been an access after a certain amount of time, where this time is defined by TIMEOUT[15:0] (QUADSPI_LPTR). Enable the timeout counter. By default, the QUADSPI never stops its prefetch operation, keeping the previous read operation active with nCS maintained low, even if no access to the Flash memory occurs for a long time. Since Flash memories tend to consume more when nCS is held low, the application might want to activate the timeout counter (TCEN = 1, QUADSPI_CR[3]) so that nCS is released after a period of TIMEOUT[15:0] (QUADSPI_LPTR) cycles have elapsed without an access since when the FIFO becomes full with prefetch data. This bit can be modified only when BUSY = 0. **/
#define QUADSPI_QUADSPI_CR_TCEN		(1 << 3)
/** QUADSPI_QUADSPI_CR_DMAEN DMA enable In indirect mode, DMA can be used to input or output data via the QUADSPI_DR register. DMA transfers are initiated when the FIFO threshold flag, FTF, is set. **/
#define QUADSPI_QUADSPI_CR_DMAEN		(1 << 2)
/** QUADSPI_QUADSPI_CR_ABORT Abort request This bit aborts the on-going command sequence. It is automatically reset once the abort is complete. This bit stops the current transfer. In polling mode or memory-mapped mode, this bit also reset the APM bit or the DM bit. **/
#define QUADSPI_QUADSPI_CR_ABORT		(1 << 1)
/** QUADSPI_QUADSPI_CR_EN Enable Enable the QUADSPI. **/
#define QUADSPI_QUADSPI_CR_EN		(1 << 0)

/**@}*/

/** @defgroup quadspi_quadspi_dcr QUADSPIDCR QUADSPI device configuration register
@{*/


#define QUADSPI_QUADSPI_DCR_FSIZE_SHIFT		16
#define QUADSPI_QUADSPI_DCR_FSIZE_MASK		0x1f
/** @defgroup quadspi_quadspi_dcr_fsize FSIZE Flash memory size This field defines the size of external memory using the following formula: Number of bytes in Flash memory = 2[FSIZE+1] FSIZE+1 is effectively the number of address bits required to address the Flash memory. The Flash memory capacity can be up to 4GB (addressed using 32 bits) in indirect mode, but the addressable space in memory-mapped mode is limited to 256MB. If DFM = 1, FSIZE indicates the total capacity of the two Flash memories together. This field can be modified only when BUSY = 0.
@{*/
/**@}*/


#define QUADSPI_QUADSPI_DCR_CSHT_SHIFT		8
#define QUADSPI_QUADSPI_DCR_CSHT_MASK		0x07
/** @defgroup quadspi_quadspi_dcr_csht CSHT Chip select high time CSHT+1 defines the minimum number of CLK cycles which the chip select (nCS) must remain high between commands issued to the Flash memory. ... This field can be modified only when BUSY = 0.
@{*/
/**@}*/

/** QUADSPI_QUADSPI_DCR_CKMODE indicates the level that clk takes between command **/
#define QUADSPI_QUADSPI_DCR_CKMODE		(1 << 0)

/**@}*/

/** @defgroup quadspi_quadspi_sr QUADSPISR QUADSPI status register
@{*/


#define QUADSPI_QUADSPI_SR_FLEVEL_SHIFT		8
#define QUADSPI_QUADSPI_SR_FLEVEL_MASK		0x3f
/** @defgroup quadspi_quadspi_sr_flevel FLEVEL FIFO level This field gives the number of valid bytes which are being held in the FIFO. FLEVEL = 0 when the FIFO is empty, and 16 when it is full. In memory-mapped mode and in automatic status polling mode, FLEVEL is zero.
@{*/
/**@}*/

/** QUADSPI_QUADSPI_SR_BUSY Busy This bit is set when an operation is on going. This bit clears automatically when the operation with the Flash memory is finished and the FIFO is empty. **/
#define QUADSPI_QUADSPI_SR_BUSY		(1 << 5)
/** QUADSPI_QUADSPI_SR_TOF Timeout flag This bit is set when timeout occurs. It is cleared by writing 1 to CTOF. **/
#define QUADSPI_QUADSPI_SR_TOF		(1 << 4)
/** QUADSPI_QUADSPI_SR_SMF Status match flag This bit is set in automatic polling mode when the unmasked received data matches the corresponding bits in the match register (QUADSPI_PSMAR). It is cleared by writing 1 to CSMF. **/
#define QUADSPI_QUADSPI_SR_SMF		(1 << 3)
/** QUADSPI_QUADSPI_SR_FTF FIFO threshold flag In indirect mode, this bit is set when the FIFO threshold has been reached, or if there is any data left in the FIFO after reads from the Flash memory are complete. It is cleared automatically as soon as threshold condition is no longer true. In automatic polling mode this bit is set every time the status register is read, and the bit is cleared when the data register is read. **/
#define QUADSPI_QUADSPI_SR_FTF		(1 << 2)
/** QUADSPI_QUADSPI_SR_TCF Transfer complete flag This bit is set in indirect mode when the programmed number of data has been transferred or in any mode when the transfer has been aborted.It is cleared by writing 1 to CTCF. **/
#define QUADSPI_QUADSPI_SR_TCF		(1 << 1)
/** QUADSPI_QUADSPI_SR_TEF Transfer error flag This bit is set in indirect mode when an invalid address is being accessed in indirect mode. It is cleared by writing 1 to CTEF. **/
#define QUADSPI_QUADSPI_SR_TEF		(1 << 0)

/**@}*/

/** @defgroup quadspi_quadspi_fcr QUADSPIFCR QUADSPI flag clear register
@{*/

/** QUADSPI_QUADSPI_FCR_CTOF Clear timeout flag Writing 1 clears the TOF flag in the QUADSPI_SR register **/
#define QUADSPI_QUADSPI_FCR_CTOF		(1 << 4)
/** QUADSPI_QUADSPI_FCR_CSMF Clear status match flag Writing 1 clears the SMF flag in the QUADSPI_SR register **/
#define QUADSPI_QUADSPI_FCR_CSMF		(1 << 3)
/** QUADSPI_QUADSPI_FCR_CTCF Clear transfer complete flag Writing 1 clears the TCF flag in the QUADSPI_SR register **/
#define QUADSPI_QUADSPI_FCR_CTCF		(1 << 1)
/** QUADSPI_QUADSPI_FCR_CTEF Clear transfer error flag Writing 1 clears the TEF flag in the QUADSPI_SR register **/
#define QUADSPI_QUADSPI_FCR_CTEF		(1 << 0)

/**@}*/

/** @defgroup quadspi_quadspi_dlr QUADSPIDLR QUADSPI data length register
@{*/


#define QUADSPI_QUADSPI_DLR_DL_SHIFT		0
#define QUADSPI_QUADSPI_DLR_DL_MASK		0xffffffff
/** @defgroup quadspi_quadspi_dlr_dl DL Data length Number of data to be retrieved (value+1) in indirect and status-polling modes. A value no greater than 3 (indicating 4 bytes) should be used for status-polling mode. All 1s in indirect mode means undefined length, where QUADSPI will continue until the end of memory, as defined by FSIZE. 0x0000_0000: 1 byte is to be transferred 0x0000_0001: 2 bytes are to be transferred 0x0000_0002: 3 bytes are to be transferred 0x0000_0003: 4 bytes are to be transferred ... 0xFFFF_FFFD: 4,294,967,294 (4G-2) bytes are to be transferred 0xFFFF_FFFE: 4,294,967,295 (4G-1) bytes are to be transferred 0xFFFF_FFFF: undefined length -- all bytes until the end of Flash memory (as defined by FSIZE) are to be transferred. Continue reading indefinitely if FSIZE = 0x1F. DL[0] is stuck at 1 in dual-flash mode (DFM = 1) even when 0 is written to this bit, thus assuring that each access transfers an even number of bytes. This field has no effect when in memory-mapped mode (FMODE = 10). This field can be written only when BUSY = 0.
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_quadspi_ccr QUADSPICCR QUADSPI communication configuration register
@{*/

/** QUADSPI_QUADSPI_CCR_DDRM Double data rate mode This bit sets the DDR mode for the address, alternate byte and data phase: This field can be written only when BUSY = 0. **/
#define QUADSPI_QUADSPI_CCR_DDRM		(1 << 31)
/** QUADSPI_QUADSPI_CCR_DHHC DDR hold Delay the data output by 1/4 of the QUADSPI output clock cycle in DDR mode: This feature is only active in DDR mode. This field can be written only when BUSY = 0. **/
#define QUADSPI_QUADSPI_CCR_DHHC		(1 << 30)
/** QUADSPI_QUADSPI_CCR_SIOO Send instruction only once mode See Section15.3.11: Sending the instruction only once on page13. This bit has no effect when IMODE = 00. This field can be written only when BUSY = 0. **/
#define QUADSPI_QUADSPI_CCR_SIOO		(1 << 28)

#define QUADSPI_QUADSPI_CCR_FMODE_SHIFT		26
#define QUADSPI_QUADSPI_CCR_FMODE_MASK		0x03
/** @defgroup quadspi_quadspi_ccr_fmode FMODE Functional mode This field defines the QUADSPI functional mode of operation. If DMAEN = 1 already, then the DMA controller for the corresponding channel must be disabled before changing the FMODE value. This field can be written only when BUSY = 0.
@{*/
/**@}*/


#define QUADSPI_QUADSPI_CCR_DMODE_SHIFT		24
#define QUADSPI_QUADSPI_CCR_DMODE_MASK		0x03
/** @defgroup quadspi_quadspi_ccr_dmode DMODE Data mode This field defines the data phases mode of operation: This field also determines the dummy phase mode of operation. This field can be written only when BUSY = 0.
@{*/
/**@}*/


#define QUADSPI_QUADSPI_CCR_DCYC_SHIFT		18
#define QUADSPI_QUADSPI_CCR_DCYC_MASK		0x1f
/** @defgroup quadspi_quadspi_ccr_dcyc DCYC Number of dummy cycles This field defines the duration of the dummy phase. In both SDR and DDR modes, it specifies a number of CLK cycles (0-31). This field can be written only when BUSY = 0.
@{*/
/**@}*/


#define QUADSPI_QUADSPI_CCR_ABSIZE_SHIFT		16
#define QUADSPI_QUADSPI_CCR_ABSIZE_MASK		0x03
/** @defgroup quadspi_quadspi_ccr_absize ABSIZE Alternate bytes size This bit defines alternate bytes size: This field can be written only when BUSY = 0.
@{*/
/**@}*/


#define QUADSPI_QUADSPI_CCR_ABMODE_SHIFT		14
#define QUADSPI_QUADSPI_CCR_ABMODE_MASK		0x03
/** @defgroup quadspi_quadspi_ccr_abmode ABMODE Alternate bytes mode This field defines the alternate-bytes phase mode of operation: This field can be written only when BUSY = 0.
@{*/
/**@}*/


#define QUADSPI_QUADSPI_CCR_ADSIZE_SHIFT		12
#define QUADSPI_QUADSPI_CCR_ADSIZE_MASK		0x03
/** @defgroup quadspi_quadspi_ccr_adsize ADSIZE Address size This bit defines address size: This field can be written only when BUSY = 0.
@{*/
/**@}*/


#define QUADSPI_QUADSPI_CCR_ADMODE_SHIFT		10
#define QUADSPI_QUADSPI_CCR_ADMODE_MASK		0x03
/** @defgroup quadspi_quadspi_ccr_admode ADMODE Address mode This field defines the address phase mode of operation: This field can be written only when BUSY = 0.
@{*/
/**@}*/


#define QUADSPI_QUADSPI_CCR_IMODE_SHIFT		8
#define QUADSPI_QUADSPI_CCR_IMODE_MASK		0x03
/** @defgroup quadspi_quadspi_ccr_imode IMODE Instruction mode This field defines the instruction phase mode of operation: This field can be written only when BUSY = 0.
@{*/
/**@}*/


#define QUADSPI_QUADSPI_CCR_INSTRUCTION_SHIFT		0
#define QUADSPI_QUADSPI_CCR_INSTRUCTION_MASK		0xff
/** @defgroup quadspi_quadspi_ccr_instruction INSTRUCTION Instruction Instruction to be send to the external SPI device. This field can be written only when BUSY = 0.
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_quadspi_ar QUADSPIAR QUADSPI address register
@{*/


#define QUADSPI_QUADSPI_AR_ADDRESS_SHIFT		0
#define QUADSPI_QUADSPI_AR_ADDRESS_MASK		0xffffffff
/** @defgroup quadspi_quadspi_ar_address ADDRESS [31 0]: Address Address to be send to the external Flash memory Writes to this field are ignored when BUSY = 0 or when FMODE = 11 (memory-mapped mode). In dual flash mode, ADDRESS[0] is automatically stuck to 0 as the address should always be even
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_quadspi_abr QUADSPIABR QUADSPI alternate bytes registers
@{*/


#define QUADSPI_QUADSPI_ABR_ALTERNATE_SHIFT		0
#define QUADSPI_QUADSPI_ABR_ALTERNATE_MASK		0xffffffff
/** @defgroup quadspi_quadspi_abr_alternate ALTERNATE Alternate Bytes Optional data to be send to the external SPI device right after the address. This field can be written only when BUSY = 0.
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_quadspi_dr QUADSPIDR QUADSPI data register
@{*/


#define QUADSPI_QUADSPI_DR_DATA_SHIFT		0
#define QUADSPI_QUADSPI_DR_DATA_MASK		0xffffffff
/** @defgroup quadspi_quadspi_dr_data DATA Data Data to be sent/received to/from the external SPI device. In indirect write mode, data written to this register is stored on the FIFO before it is sent to the Flash memory during the data phase. If the FIFO is too full, a write operation is stalled until the FIFO has enough space to accept the amount of data being written. In indirect read mode, reading this register gives (via the FIFO) the data which was received from the Flash memory. If the FIFO does not have as many bytes as requested by the read operation and if BUSY=1, the read operation is stalled until enough data is present or until the transfer is complete, whichever happens first. In automatic polling mode, this register contains the last data read from the Flash memory (without masking). Word, halfword, and byte accesses to this register are supported. In indirect write mode, a byte write adds 1 byte to the FIFO, a halfword write 2, and a word write 4. Similarly, in indirect read mode, a byte read removes 1 byte from the FIFO, a halfword read 2, and a word read 4. Accesses in indirect mode must be aligned to the bottom of this register: a byte read must read DATA[7:0] and a halfword read must read DATA[15:0].
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_quadspi_psmkr QUADSPIPSMKR QUADSPI polling status mask register
@{*/


#define QUADSPI_QUADSPI_PSMKR_MASK_SHIFT		0
#define QUADSPI_QUADSPI_PSMKR_MASK_MASK		0xffffffff
/** @defgroup quadspi_quadspi_psmkr_mask MASK Status mask Mask to be applied to the status bytes received in polling mode. For bit n: This field can be written only when BUSY = 0.
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_quadspi_psmar QUADSPIPSMAR QUADSPI polling status match register
@{*/


#define QUADSPI_QUADSPI_PSMAR_MATCH_SHIFT		0
#define QUADSPI_QUADSPI_PSMAR_MATCH_MASK		0xffffffff
/** @defgroup quadspi_quadspi_psmar_match MATCH Status match Value to be compared with the masked status register to get a match. This field can be written only when BUSY = 0.
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_quadspi_pir QUADSPIPIR QUADSPI polling interval register
@{*/


#define QUADSPI_QUADSPI_PIR_INTERVAL_SHIFT		0
#define QUADSPI_QUADSPI_PIR_INTERVAL_MASK		0xffff
/** @defgroup quadspi_quadspi_pir_interval INTERVAL Polling interval Number of CLK cycles between to read during automatic polling phases. This field can be written only when BUSY = 0.
@{*/
/**@}*/


/**@}*/

/** @defgroup quadspi_quadspi_lptr QUADSPILPTR QUADSPI low-power timeout register
@{*/


#define QUADSPI_QUADSPI_LPTR_TIMEOUT_SHIFT		0
#define QUADSPI_QUADSPI_LPTR_TIMEOUT_MASK		0xffff
/** @defgroup quadspi_quadspi_lptr_timeout TIMEOUT Timeout period After each access in memory-mapped mode, the QUADSPI prefetches the subsequent bytes and holds these bytes in the FIFO. This field indicates how many CLK cycles the QUADSPI waits after the FIFO becomes full until it raises nCS, putting the Flash memory in a lower-consumption state. This field can be written only when BUSY = 0.
@{*/
/**@}*/


/**@}*/

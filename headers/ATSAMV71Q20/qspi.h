#pragma once 

/* --- QSPI: Quad Serial Peripheral Interface ----------------------- */

/** @defgroup qspi_registers Quad Serial Peripheral Interface Register
@{*/

/** QSPI_QSPI_CR Control Register **/
#define QSPI_QSPI_CR			MMIO32(QSPI_BASE + 0x00)
/** QSPI_QSPI_MR Mode Register **/
#define QSPI_QSPI_MR			MMIO32(QSPI_BASE + 0x04)
/** QSPI_QSPI_RDR Receive Data Register **/
#define QSPI_QSPI_RDR			MMIO32(QSPI_BASE + 0x08)
/** QSPI_QSPI_TDR Transmit Data Register **/
#define QSPI_QSPI_TDR			MMIO32(QSPI_BASE + 0x0c)
/** QSPI_QSPI_SR Status Register **/
#define QSPI_QSPI_SR			MMIO32(QSPI_BASE + 0x10)
/** QSPI_QSPI_IER Interrupt Enable Register **/
#define QSPI_QSPI_IER			MMIO32(QSPI_BASE + 0x14)
/** QSPI_QSPI_IDR Interrupt Disable Register **/
#define QSPI_QSPI_IDR			MMIO32(QSPI_BASE + 0x18)
/** QSPI_QSPI_IMR Interrupt Mask Register **/
#define QSPI_QSPI_IMR			MMIO32(QSPI_BASE + 0x1c)
/** QSPI_QSPI_SCR Serial Clock Register **/
#define QSPI_QSPI_SCR			MMIO32(QSPI_BASE + 0x20)
/** QSPI_QSPI_IAR Instruction Address Register **/
#define QSPI_QSPI_IAR			MMIO32(QSPI_BASE + 0x30)
/** QSPI_QSPI_ICR Instruction Code Register **/
#define QSPI_QSPI_ICR			MMIO32(QSPI_BASE + 0x34)
/** QSPI_QSPI_IFR Instruction Frame Register **/
#define QSPI_QSPI_IFR			MMIO32(QSPI_BASE + 0x38)
/** QSPI_QSPI_SMR Scrambling Mode Register **/
#define QSPI_QSPI_SMR			MMIO32(QSPI_BASE + 0x40)
/** QSPI_QSPI_SKR Scrambling Key Register **/
#define QSPI_QSPI_SKR			MMIO32(QSPI_BASE + 0x44)
/** QSPI_QSPI_WPMR Write Protection Mode Register **/
#define QSPI_QSPI_WPMR			MMIO32(QSPI_BASE + 0xe4)
/** QSPI_QSPI_WPSR Write Protection Status Register **/
#define QSPI_QSPI_WPSR			MMIO32(QSPI_BASE + 0xe8)
/** QSPI_QSPI_VERSION Version Register **/
#define QSPI_QSPI_VERSION			MMIO32(QSPI_BASE + 0xfc)

/**@}*/


/** @defgroup qspi_qspi_cr QSPICR Control Register
@{*/

/** QSPI_QSPI_CR_LASTXFER Last Transfer **/
#define QSPI_QSPI_CR_LASTXFER		(1 << 24)
/** QSPI_QSPI_CR_SWRST QSPI Software Reset **/
#define QSPI_QSPI_CR_SWRST		(1 << 7)
/** QSPI_QSPI_CR_QSPIDIS QSPI Disable **/
#define QSPI_QSPI_CR_QSPIDIS		(1 << 1)
/** QSPI_QSPI_CR_QSPIEN QSPI Enable **/
#define QSPI_QSPI_CR_QSPIEN		(1 << 0)

/**@}*/

/** @defgroup qspi_qspi_mr QSPIMR Mode Register
@{*/


#define QSPI_QSPI_MR_DLYCS_SHIFT		24
#define QSPI_QSPI_MR_DLYCS_MASK		0xff
/** @defgroup qspi_qspi_mr_dlycs DLYCS Minimum Inactive QCS Delay
@{*/
/**@}*/


#define QSPI_QSPI_MR_DLYBCT_SHIFT		16
#define QSPI_QSPI_MR_DLYBCT_MASK		0xff
/** @defgroup qspi_qspi_mr_dlybct DLYBCT Delay Between Consecutive Transfers
@{*/
/**@}*/


#define QSPI_QSPI_MR_NBBITS_SHIFT		8
#define QSPI_QSPI_MR_NBBITS_MASK		0x0f
/** @defgroup qspi_qspi_mr_nbbits NBBITS Number Of Bits Per Transfer
@{*/
/**@}*/


#define QSPI_QSPI_MR_CSMODE_SHIFT		4
#define QSPI_QSPI_MR_CSMODE_MASK		0x03
/** @defgroup qspi_qspi_mr_csmode CSMODE Chip Select Mode
@{*/
/**@}*/

/** QSPI_QSPI_MR_WDRBT Wait Data Read Before Transfer **/
#define QSPI_QSPI_MR_WDRBT		(1 << 2)
/** QSPI_QSPI_MR_LLB Local Loopback Enable **/
#define QSPI_QSPI_MR_LLB		(1 << 1)
/** QSPI_QSPI_MR_SMM Serial Memory Mode **/
#define QSPI_QSPI_MR_SMM		(1 << 0)

/**@}*/

/** @defgroup qspi_qspi_rdr QSPIRDR Receive Data Register
@{*/


#define QSPI_QSPI_RDR_RD_SHIFT		0
#define QSPI_QSPI_RDR_RD_MASK		0xffff
/** @defgroup qspi_qspi_rdr_rd RD Receive Data
@{*/
/**@}*/


/**@}*/

/** @defgroup qspi_qspi_tdr QSPITDR Transmit Data Register
@{*/


#define QSPI_QSPI_TDR_TD_SHIFT		0
#define QSPI_QSPI_TDR_TD_MASK		0xffff
/** @defgroup qspi_qspi_tdr_td TD Transmit Data
@{*/
/**@}*/


/**@}*/

/** @defgroup qspi_qspi_sr QSPISR Status Register
@{*/

/** QSPI_QSPI_SR_QSPIENS QSPI Enable Status **/
#define QSPI_QSPI_SR_QSPIENS		(1 << 24)
/** QSPI_QSPI_SR_INSTRE Instruction End Status (cleared on read) **/
#define QSPI_QSPI_SR_INSTRE		(1 << 10)
/** QSPI_QSPI_SR_CSS Chip Select Status **/
#define QSPI_QSPI_SR_CSS		(1 << 9)
/** QSPI_QSPI_SR_CSR Chip Select Rise (cleared on read) **/
#define QSPI_QSPI_SR_CSR		(1 << 8)
/** QSPI_QSPI_SR_OVRES Overrun Error Status (cleared on read) **/
#define QSPI_QSPI_SR_OVRES		(1 << 3)
/** QSPI_QSPI_SR_TXEMPTY Transmission Registers Empty (cleared by writing SPI_TDR) **/
#define QSPI_QSPI_SR_TXEMPTY		(1 << 2)
/** QSPI_QSPI_SR_TDRE Transmit Data Register Empty (cleared by writing SPI_TDR) **/
#define QSPI_QSPI_SR_TDRE		(1 << 1)
/** QSPI_QSPI_SR_RDRF Receive Data Register Full (cleared by reading SPI_RDR) **/
#define QSPI_QSPI_SR_RDRF		(1 << 0)

/**@}*/

/** @defgroup qspi_qspi_ier QSPIIER Interrupt Enable Register
@{*/

/** QSPI_QSPI_IER_INSTRE Instruction End Interrupt Enable **/
#define QSPI_QSPI_IER_INSTRE		(1 << 10)
/** QSPI_QSPI_IER_CSS Chip Select Status Interrupt Enable **/
#define QSPI_QSPI_IER_CSS		(1 << 9)
/** QSPI_QSPI_IER_CSR Chip Select Rise Interrupt Enable **/
#define QSPI_QSPI_IER_CSR		(1 << 8)
/** QSPI_QSPI_IER_OVRES Overrun Error Interrupt Enable **/
#define QSPI_QSPI_IER_OVRES		(1 << 3)
/** QSPI_QSPI_IER_TXEMPTY Transmission Registers Empty Enable **/
#define QSPI_QSPI_IER_TXEMPTY		(1 << 2)
/** QSPI_QSPI_IER_TDRE Transmit Data Register Empty Interrupt Enable **/
#define QSPI_QSPI_IER_TDRE		(1 << 1)
/** QSPI_QSPI_IER_RDRF Receive Data Register Full Interrupt Enable **/
#define QSPI_QSPI_IER_RDRF		(1 << 0)

/**@}*/

/** @defgroup qspi_qspi_idr QSPIIDR Interrupt Disable Register
@{*/

/** QSPI_QSPI_IDR_INSTRE Instruction End Interrupt Disable **/
#define QSPI_QSPI_IDR_INSTRE		(1 << 10)
/** QSPI_QSPI_IDR_CSS Chip Select Status Interrupt Disable **/
#define QSPI_QSPI_IDR_CSS		(1 << 9)
/** QSPI_QSPI_IDR_CSR Chip Select Rise Interrupt Disable **/
#define QSPI_QSPI_IDR_CSR		(1 << 8)
/** QSPI_QSPI_IDR_OVRES Overrun Error Interrupt Disable **/
#define QSPI_QSPI_IDR_OVRES		(1 << 3)
/** QSPI_QSPI_IDR_TXEMPTY Transmission Registers Empty Disable **/
#define QSPI_QSPI_IDR_TXEMPTY		(1 << 2)
/** QSPI_QSPI_IDR_TDRE Transmit Data Register Empty Interrupt Disable **/
#define QSPI_QSPI_IDR_TDRE		(1 << 1)
/** QSPI_QSPI_IDR_RDRF Receive Data Register Full Interrupt Disable **/
#define QSPI_QSPI_IDR_RDRF		(1 << 0)

/**@}*/

/** @defgroup qspi_qspi_imr QSPIIMR Interrupt Mask Register
@{*/

/** QSPI_QSPI_IMR_INSTRE Instruction End Interrupt Mask **/
#define QSPI_QSPI_IMR_INSTRE		(1 << 10)
/** QSPI_QSPI_IMR_CSS Chip Select Status Interrupt Mask **/
#define QSPI_QSPI_IMR_CSS		(1 << 9)
/** QSPI_QSPI_IMR_CSR Chip Select Rise Interrupt Mask **/
#define QSPI_QSPI_IMR_CSR		(1 << 8)
/** QSPI_QSPI_IMR_OVRES Overrun Error Interrupt Mask **/
#define QSPI_QSPI_IMR_OVRES		(1 << 3)
/** QSPI_QSPI_IMR_TXEMPTY Transmission Registers Empty Mask **/
#define QSPI_QSPI_IMR_TXEMPTY		(1 << 2)
/** QSPI_QSPI_IMR_TDRE Transmit Data Register Empty Interrupt Mask **/
#define QSPI_QSPI_IMR_TDRE		(1 << 1)
/** QSPI_QSPI_IMR_RDRF Receive Data Register Full Interrupt Mask **/
#define QSPI_QSPI_IMR_RDRF		(1 << 0)

/**@}*/

/** @defgroup qspi_qspi_scr QSPISCR Serial Clock Register
@{*/


#define QSPI_QSPI_SCR_DLYBS_SHIFT		16
#define QSPI_QSPI_SCR_DLYBS_MASK		0xff
/** @defgroup qspi_qspi_scr_dlybs DLYBS Delay Before QSCK
@{*/
/**@}*/


#define QSPI_QSPI_SCR_SCBR_SHIFT		8
#define QSPI_QSPI_SCR_SCBR_MASK		0xff
/** @defgroup qspi_qspi_scr_scbr SCBR Serial Clock Baud Rate
@{*/
/**@}*/

/** QSPI_QSPI_SCR_CPHA Clock Phase **/
#define QSPI_QSPI_SCR_CPHA		(1 << 1)
/** QSPI_QSPI_SCR_CPOL Clock Polarity **/
#define QSPI_QSPI_SCR_CPOL		(1 << 0)

/**@}*/

/** @defgroup qspi_qspi_iar QSPIIAR Instruction Address Register
@{*/


#define QSPI_QSPI_IAR_ADDR_SHIFT		0
#define QSPI_QSPI_IAR_ADDR_MASK		0xffffffff
/** @defgroup qspi_qspi_iar_addr ADDR Address
@{*/
/**@}*/


/**@}*/

/** @defgroup qspi_qspi_icr QSPIICR Instruction Code Register
@{*/


#define QSPI_QSPI_ICR_OPT_SHIFT		16
#define QSPI_QSPI_ICR_OPT_MASK		0xff
/** @defgroup qspi_qspi_icr_opt OPT Option Code
@{*/
/**@}*/


#define QSPI_QSPI_ICR_INST_SHIFT		0
#define QSPI_QSPI_ICR_INST_MASK		0xff
/** @defgroup qspi_qspi_icr_inst INST Instruction Code
@{*/
/**@}*/


/**@}*/

/** @defgroup qspi_qspi_ifr QSPIIFR Instruction Frame Register
@{*/


#define QSPI_QSPI_IFR_NBDUM_SHIFT		16
#define QSPI_QSPI_IFR_NBDUM_MASK		0x1f
/** @defgroup qspi_qspi_ifr_nbdum NBDUM Number Of Dummy Cycles
@{*/
/**@}*/

/** QSPI_QSPI_IFR_CRM Continuous Read Mode **/
#define QSPI_QSPI_IFR_CRM		(1 << 14)

#define QSPI_QSPI_IFR_TFRTYP_SHIFT		12
#define QSPI_QSPI_IFR_TFRTYP_MASK		0x03
/** @defgroup qspi_qspi_ifr_tfrtyp TFRTYP Data Transfer Type
@{*/
/**@}*/

/** QSPI_QSPI_IFR_ADDRL Address Length **/
#define QSPI_QSPI_IFR_ADDRL		(1 << 10)

#define QSPI_QSPI_IFR_OPTL_SHIFT		8
#define QSPI_QSPI_IFR_OPTL_MASK		0x03
/** @defgroup qspi_qspi_ifr_optl OPTL Option Code Length
@{*/
/**@}*/

/** QSPI_QSPI_IFR_DATAEN Data Enable **/
#define QSPI_QSPI_IFR_DATAEN		(1 << 7)
/** QSPI_QSPI_IFR_OPTEN Option Enable **/
#define QSPI_QSPI_IFR_OPTEN		(1 << 6)
/** QSPI_QSPI_IFR_ADDREN Address Enable **/
#define QSPI_QSPI_IFR_ADDREN		(1 << 5)
/** QSPI_QSPI_IFR_INSTEN Instruction Enable **/
#define QSPI_QSPI_IFR_INSTEN		(1 << 4)

#define QSPI_QSPI_IFR_WIDTH_SHIFT		0
#define QSPI_QSPI_IFR_WIDTH_MASK		0x07
/** @defgroup qspi_qspi_ifr_width WIDTH Width of Instruction Code, Address, Option Code and Data
@{*/
/**@}*/


/**@}*/

/** @defgroup qspi_qspi_smr QSPISMR Scrambling Mode Register
@{*/

/** QSPI_QSPI_SMR_RVDIS Scrambling/Unscrambling Random Value Disable **/
#define QSPI_QSPI_SMR_RVDIS		(1 << 1)
/** QSPI_QSPI_SMR_SCREN Scrambling/Unscrambling Enable **/
#define QSPI_QSPI_SMR_SCREN		(1 << 0)

/**@}*/

/** @defgroup qspi_qspi_skr QSPISKR Scrambling Key Register
@{*/


#define QSPI_QSPI_SKR_USRK_SHIFT		0
#define QSPI_QSPI_SKR_USRK_MASK		0xffffffff
/** @defgroup qspi_qspi_skr_usrk USRK User Scrambling Key
@{*/
/**@}*/


/**@}*/

/** @defgroup qspi_qspi_wpmr QSPIWPMR Write Protection Mode Register
@{*/


#define QSPI_QSPI_WPMR_WPKEY_SHIFT		8
#define QSPI_QSPI_WPMR_WPKEY_MASK		0xffffff
/** @defgroup qspi_qspi_wpmr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** QSPI_QSPI_WPMR_WPEN Write Protection Enable **/
#define QSPI_QSPI_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup qspi_qspi_wpsr QSPIWPSR Write Protection Status Register
@{*/


#define QSPI_QSPI_WPSR_WPVSRC_SHIFT		8
#define QSPI_QSPI_WPSR_WPVSRC_MASK		0xff
/** @defgroup qspi_qspi_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** QSPI_QSPI_WPSR_WPVS Write Protection Violation Status **/
#define QSPI_QSPI_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup qspi_qspi_version QSPIVERSION Version Register
@{*/


#define QSPI_QSPI_VERSION_MFN_SHIFT		16
#define QSPI_QSPI_VERSION_MFN_MASK		0x07
/** @defgroup qspi_qspi_version_mfn MFN Metal Fix Number
@{*/
/**@}*/


#define QSPI_QSPI_VERSION_VERSION_SHIFT		0
#define QSPI_QSPI_VERSION_VERSION_MASK		0xfff
/** @defgroup qspi_qspi_version_version VERSION Hardware Module Version
@{*/
/**@}*/


/**@}*/

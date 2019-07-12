#pragma once 

/* --- OCTOSPI1_CONTROL_REGISTER: OctoSPI --------------------------- */

/** @defgroup octospi1_control_register_registers OctoSPI Register
@{*/

/** OCTOSPI1_CONTROL_REGISTER_CR control register **/
#define OCTOSPI1_CONTROL_REGISTER_CR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x00)
/** OCTOSPI1_CONTROL_REGISTER_DCR1 device configuration register **/
#define OCTOSPI1_CONTROL_REGISTER_DCR1			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x08)
/** OCTOSPI1_CONTROL_REGISTER_DCR2 device configuration register 2 **/
#define OCTOSPI1_CONTROL_REGISTER_DCR2			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x0c)
/** OCTOSPI1_CONTROL_REGISTER_DCR3 device configuration register 3 **/
#define OCTOSPI1_CONTROL_REGISTER_DCR3			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x10)
/** OCTOSPI1_CONTROL_REGISTER_DCR4 DCR4 **/
#define OCTOSPI1_CONTROL_REGISTER_DCR4			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x14)
/** OCTOSPI1_CONTROL_REGISTER_SR status register **/
#define OCTOSPI1_CONTROL_REGISTER_SR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x20)
/** OCTOSPI1_CONTROL_REGISTER_FCR flag clear register **/
#define OCTOSPI1_CONTROL_REGISTER_FCR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x24)
/** OCTOSPI1_CONTROL_REGISTER_DLR data length register **/
#define OCTOSPI1_CONTROL_REGISTER_DLR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x40)
/** OCTOSPI1_CONTROL_REGISTER_AR address register **/
#define OCTOSPI1_CONTROL_REGISTER_AR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x48)
/** OCTOSPI1_CONTROL_REGISTER_DR data register **/
#define OCTOSPI1_CONTROL_REGISTER_DR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x50)
/** OCTOSPI1_CONTROL_REGISTER_PSMKR polling status mask register **/
#define OCTOSPI1_CONTROL_REGISTER_PSMKR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x80)
/** OCTOSPI1_CONTROL_REGISTER_PSMAR polling status match register **/
#define OCTOSPI1_CONTROL_REGISTER_PSMAR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x88)
/** OCTOSPI1_CONTROL_REGISTER_PIR OCTOSPI polling interval register **/
#define OCTOSPI1_CONTROL_REGISTER_PIR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x90)
/** OCTOSPI1_CONTROL_REGISTER_CCR polling interval register **/
#define OCTOSPI1_CONTROL_REGISTER_CCR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x100)
/** OCTOSPI1_CONTROL_REGISTER_TCR communication configuration register **/
#define OCTOSPI1_CONTROL_REGISTER_TCR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x108)
/** OCTOSPI1_CONTROL_REGISTER_IR timing configuration register **/
#define OCTOSPI1_CONTROL_REGISTER_IR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x110)
/** OCTOSPI1_CONTROL_REGISTER_ABR instruction register **/
#define OCTOSPI1_CONTROL_REGISTER_ABR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x120)
/** OCTOSPI1_CONTROL_REGISTER_LPTR alternate bytes register **/
#define OCTOSPI1_CONTROL_REGISTER_LPTR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x130)
/** OCTOSPI1_CONTROL_REGISTER_WPCCR low-power timeout register **/
#define OCTOSPI1_CONTROL_REGISTER_WPCCR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x140)
/** OCTOSPI1_CONTROL_REGISTER_WPTCR wrap timing configuration register **/
#define OCTOSPI1_CONTROL_REGISTER_WPTCR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x148)
/** OCTOSPI1_CONTROL_REGISTER_WPIR wrap instruction register **/
#define OCTOSPI1_CONTROL_REGISTER_WPIR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x150)
/** OCTOSPI1_CONTROL_REGISTER_WPABR wrap alternate bytes register **/
#define OCTOSPI1_CONTROL_REGISTER_WPABR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x160)
/** OCTOSPI1_CONTROL_REGISTER_WCCR write communication configuration register **/
#define OCTOSPI1_CONTROL_REGISTER_WCCR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x180)
/** OCTOSPI1_CONTROL_REGISTER_WTCR write timing configuration register **/
#define OCTOSPI1_CONTROL_REGISTER_WTCR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x188)
/** OCTOSPI1_CONTROL_REGISTER_WIR instruction register **/
#define OCTOSPI1_CONTROL_REGISTER_WIR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x190)
/** OCTOSPI1_CONTROL_REGISTER_WABR write alternate bytes register **/
#define OCTOSPI1_CONTROL_REGISTER_WABR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x1a0)
/** OCTOSPI1_CONTROL_REGISTER_HLCR HyperBusTM latency configuration register **/
#define OCTOSPI1_CONTROL_REGISTER_HLCR			MMIO32(OCTOSPI1_CONTROL_REGISTER_BASE + 0x200)

/**@}*/


/** @defgroup octospi1_control_register_cr CR control register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_CR_FMODE_SHIFT		28
#define OCTOSPI1_CONTROL_REGISTER_CR_FMODE_MASK		0x03
/** @defgroup octospi1_control_register_cr_fmode FMODE Functional mode
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_CR_PMM Polling match mode **/
#define OCTOSPI1_CONTROL_REGISTER_CR_PMM		(1 << 23)
/** OCTOSPI1_CONTROL_REGISTER_CR_APMS Automatic poll mode stop **/
#define OCTOSPI1_CONTROL_REGISTER_CR_APMS		(1 << 22)
/** OCTOSPI1_CONTROL_REGISTER_CR_TOIE TimeOut interrupt enable **/
#define OCTOSPI1_CONTROL_REGISTER_CR_TOIE		(1 << 20)
/** OCTOSPI1_CONTROL_REGISTER_CR_SMIE Status match interrupt enable **/
#define OCTOSPI1_CONTROL_REGISTER_CR_SMIE		(1 << 19)
/** OCTOSPI1_CONTROL_REGISTER_CR_FTIE FIFO threshold interrupt enable **/
#define OCTOSPI1_CONTROL_REGISTER_CR_FTIE		(1 << 18)
/** OCTOSPI1_CONTROL_REGISTER_CR_TCIE Transfer complete interrupt enable **/
#define OCTOSPI1_CONTROL_REGISTER_CR_TCIE		(1 << 17)
/** OCTOSPI1_CONTROL_REGISTER_CR_TEIE Transfer error interrupt enable **/
#define OCTOSPI1_CONTROL_REGISTER_CR_TEIE		(1 << 16)

#define OCTOSPI1_CONTROL_REGISTER_CR_FTHRES_SHIFT		8
#define OCTOSPI1_CONTROL_REGISTER_CR_FTHRES_MASK		0x1f
/** @defgroup octospi1_control_register_cr_fthres FTHRES IFO threshold level
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_CR_FSEL FLASH memory selection **/
#define OCTOSPI1_CONTROL_REGISTER_CR_FSEL		(1 << 7)
/** OCTOSPI1_CONTROL_REGISTER_CR_DQM Dual-quad mode **/
#define OCTOSPI1_CONTROL_REGISTER_CR_DQM		(1 << 6)
/** OCTOSPI1_CONTROL_REGISTER_CR_TCEN Timeout counter enable **/
#define OCTOSPI1_CONTROL_REGISTER_CR_TCEN		(1 << 3)
/** OCTOSPI1_CONTROL_REGISTER_CR_DMAEN DMA enable **/
#define OCTOSPI1_CONTROL_REGISTER_CR_DMAEN		(1 << 2)
/** OCTOSPI1_CONTROL_REGISTER_CR_ABORT Abort request **/
#define OCTOSPI1_CONTROL_REGISTER_CR_ABORT		(1 << 1)
/** OCTOSPI1_CONTROL_REGISTER_CR_EN Enable **/
#define OCTOSPI1_CONTROL_REGISTER_CR_EN		(1 << 0)

/**@}*/

/** @defgroup octospi1_control_register_dcr1 DCR1 device configuration register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_DCR1_MTYP_SHIFT		24
#define OCTOSPI1_CONTROL_REGISTER_DCR1_MTYP_MASK		0x03
/** @defgroup octospi1_control_register_dcr1_mtyp MTYP Memory type
@{*/
/**@}*/


#define OCTOSPI1_CONTROL_REGISTER_DCR1_DEVSIZE_SHIFT		16
#define OCTOSPI1_CONTROL_REGISTER_DCR1_DEVSIZE_MASK		0x1f
/** @defgroup octospi1_control_register_dcr1_devsize DEVSIZE Device size
@{*/
/**@}*/


#define OCTOSPI1_CONTROL_REGISTER_DCR1_CSHT_SHIFT		8
#define OCTOSPI1_CONTROL_REGISTER_DCR1_CSHT_MASK		0x07
/** @defgroup octospi1_control_register_dcr1_csht CSHT Chip-select high time
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_DCR1_FRCK Free running clock **/
#define OCTOSPI1_CONTROL_REGISTER_DCR1_FRCK		(1 << 1)
/** OCTOSPI1_CONTROL_REGISTER_DCR1_CKMODE Mode 0 / mode 3 **/
#define OCTOSPI1_CONTROL_REGISTER_DCR1_CKMODE		(1 << 0)

/**@}*/

/** @defgroup octospi1_control_register_dcr2 DCR2 device configuration register 2
@{*/


#define OCTOSPI1_CONTROL_REGISTER_DCR2_WRAPSIZE_SHIFT		16
#define OCTOSPI1_CONTROL_REGISTER_DCR2_WRAPSIZE_MASK		0x07
/** @defgroup octospi1_control_register_dcr2_wrapsize WRAPSIZE Wrap size
@{*/
/**@}*/


#define OCTOSPI1_CONTROL_REGISTER_DCR2_PRESCALER_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_DCR2_PRESCALER_MASK		0xff
/** @defgroup octospi1_control_register_dcr2_prescaler PRESCALER Clock prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_dcr3 DCR3 device configuration register 3
@{*/


#define OCTOSPI1_CONTROL_REGISTER_DCR3_CSBOUND_SHIFT		16
#define OCTOSPI1_CONTROL_REGISTER_DCR3_CSBOUND_MASK		0x1f
/** @defgroup octospi1_control_register_dcr3_csbound CSBOUND CS boundary
@{*/
/**@}*/


#define OCTOSPI1_CONTROL_REGISTER_DCR3_MAXTRAN_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_DCR3_MAXTRAN_MASK		0xff
/** @defgroup octospi1_control_register_dcr3_maxtran MAXTRAN Maximum transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_dcr4 DCR4 DCR4
@{*/


#define OCTOSPI1_CONTROL_REGISTER_DCR4_REFRESH_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_DCR4_REFRESH_MASK		0xffff
/** @defgroup octospi1_control_register_dcr4_refresh REFRESH Refresh rate
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_sr SR status register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_SR_FLEVEL_SHIFT		8
#define OCTOSPI1_CONTROL_REGISTER_SR_FLEVEL_MASK		0x3f
/** @defgroup octospi1_control_register_sr_flevel FLEVEL FIFO level
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_SR_BUSY Busy **/
#define OCTOSPI1_CONTROL_REGISTER_SR_BUSY		(1 << 5)
/** OCTOSPI1_CONTROL_REGISTER_SR_CTOF Clear timeout flag **/
#define OCTOSPI1_CONTROL_REGISTER_SR_CTOF		(1 << 4)
/** OCTOSPI1_CONTROL_REGISTER_SR_CSMF Clear status match flag **/
#define OCTOSPI1_CONTROL_REGISTER_SR_CSMF		(1 << 3)
/** OCTOSPI1_CONTROL_REGISTER_SR_FTF FIFO threshold flag **/
#define OCTOSPI1_CONTROL_REGISTER_SR_FTF		(1 << 2)
/** OCTOSPI1_CONTROL_REGISTER_SR_CTCF Clear transfer complete flag **/
#define OCTOSPI1_CONTROL_REGISTER_SR_CTCF		(1 << 1)
/** OCTOSPI1_CONTROL_REGISTER_SR_CTEF Clear transfer error flag **/
#define OCTOSPI1_CONTROL_REGISTER_SR_CTEF		(1 << 0)

/**@}*/

/** @defgroup octospi1_control_register_fcr FCR flag clear register
@{*/

/** OCTOSPI1_CONTROL_REGISTER_FCR_CTOF Clear timeout flag **/
#define OCTOSPI1_CONTROL_REGISTER_FCR_CTOF		(1 << 4)
/** OCTOSPI1_CONTROL_REGISTER_FCR_CSMF Clear status match flag **/
#define OCTOSPI1_CONTROL_REGISTER_FCR_CSMF		(1 << 3)
/** OCTOSPI1_CONTROL_REGISTER_FCR_CTCF Clear transfer complete flag **/
#define OCTOSPI1_CONTROL_REGISTER_FCR_CTCF		(1 << 1)
/** OCTOSPI1_CONTROL_REGISTER_FCR_CTEF Clear transfer error flag **/
#define OCTOSPI1_CONTROL_REGISTER_FCR_CTEF		(1 << 0)

/**@}*/

/** @defgroup octospi1_control_register_dlr DLR data length register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_DLR_DL_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_DLR_DL_MASK		0xffffffff
/** @defgroup octospi1_control_register_dlr_dl DL Data length
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_ar AR address register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_AR_ADRESS_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_AR_ADRESS_MASK		0xffffffff
/** @defgroup octospi1_control_register_ar_adress ADRESS Adress
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_dr DR data register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_DR_DATA_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_DR_DATA_MASK		0xffffffff
/** @defgroup octospi1_control_register_dr_data DATA Data
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_psmkr PSMKR polling status mask register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_PSMKR_MASK_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_PSMKR_MASK_MASK		0xffffffff
/** @defgroup octospi1_control_register_psmkr_mask MASK Status mask
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_psmar PSMAR polling status match register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_PSMAR_MATCH_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_PSMAR_MATCH_MASK		0xffffffff
/** @defgroup octospi1_control_register_psmar_match MATCH Match
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_pir PIR OCTOSPI polling interval register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_PIR_INTERVAL_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_PIR_INTERVAL_MASK		0xffff
/** @defgroup octospi1_control_register_pir_interval INTERVAL Polling interval
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_ccr CCR polling interval register
@{*/

/** OCTOSPI1_CONTROL_REGISTER_CCR_SIOO Send instruction only once mode **/
#define OCTOSPI1_CONTROL_REGISTER_CCR_SIOO		(1 << 31)
/** OCTOSPI1_CONTROL_REGISTER_CCR_DQSE DQS enable **/
#define OCTOSPI1_CONTROL_REGISTER_CCR_DQSE		(1 << 29)
/** OCTOSPI1_CONTROL_REGISTER_CCR_DDTR Alternate bytes double transfer rate **/
#define OCTOSPI1_CONTROL_REGISTER_CCR_DDTR		(1 << 27)

#define OCTOSPI1_CONTROL_REGISTER_CCR_DMODE_SHIFT		24
#define OCTOSPI1_CONTROL_REGISTER_CCR_DMODE_MASK		0x07
/** @defgroup octospi1_control_register_ccr_dmode DMODE Data mode
@{*/
/**@}*/


#define OCTOSPI1_CONTROL_REGISTER_CCR_ABSIZE_SHIFT		20
#define OCTOSPI1_CONTROL_REGISTER_CCR_ABSIZE_MASK		0x03
/** @defgroup octospi1_control_register_ccr_absize ABSIZE Alternate bytes size
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_CCR_ABDTR Alternate bytes double transfer rate **/
#define OCTOSPI1_CONTROL_REGISTER_CCR_ABDTR		(1 << 19)

#define OCTOSPI1_CONTROL_REGISTER_CCR_ABMODE_SHIFT		16
#define OCTOSPI1_CONTROL_REGISTER_CCR_ABMODE_MASK		0x07
/** @defgroup octospi1_control_register_ccr_abmode ABMODE Alternate byte mode
@{*/
/**@}*/


#define OCTOSPI1_CONTROL_REGISTER_CCR_ADSIZE_SHIFT		12
#define OCTOSPI1_CONTROL_REGISTER_CCR_ADSIZE_MASK		0x03
/** @defgroup octospi1_control_register_ccr_adsize ADSIZE Address size
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_CCR_ADDTR Address double transfer rate **/
#define OCTOSPI1_CONTROL_REGISTER_CCR_ADDTR		(1 << 11)

#define OCTOSPI1_CONTROL_REGISTER_CCR_ADMODE_SHIFT		8
#define OCTOSPI1_CONTROL_REGISTER_CCR_ADMODE_MASK		0x07
/** @defgroup octospi1_control_register_ccr_admode ADMODE Address mode
@{*/
/**@}*/


#define OCTOSPI1_CONTROL_REGISTER_CCR_ISIZE_SHIFT		4
#define OCTOSPI1_CONTROL_REGISTER_CCR_ISIZE_MASK		0x03
/** @defgroup octospi1_control_register_ccr_isize ISIZE Instruction size
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_CCR_IDTR Instruction double transfer rate **/
#define OCTOSPI1_CONTROL_REGISTER_CCR_IDTR		(1 << 3)

#define OCTOSPI1_CONTROL_REGISTER_CCR_IMODE_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_CCR_IMODE_MASK		0x07
/** @defgroup octospi1_control_register_ccr_imode IMODE Instruction mode
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_tcr TCR communication configuration register
@{*/

/** OCTOSPI1_CONTROL_REGISTER_TCR_SSHIFT Sample shift **/
#define OCTOSPI1_CONTROL_REGISTER_TCR_SSHIFT		(1 << 30)
/** OCTOSPI1_CONTROL_REGISTER_TCR_DHQC Delay hold quarter cycle **/
#define OCTOSPI1_CONTROL_REGISTER_TCR_DHQC		(1 << 28)

#define OCTOSPI1_CONTROL_REGISTER_TCR_DCYC_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_TCR_DCYC_MASK		0x1f
/** @defgroup octospi1_control_register_tcr_dcyc DCYC Number of dummy cycles
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_ir IR timing configuration register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_IR_INSTRUCTION_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_IR_INSTRUCTION_MASK		0xffffffff
/** @defgroup octospi1_control_register_ir_instruction INSTRUCTION INSTRUCTION
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_abr ABR instruction register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_ABR_ALTERNATE_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_ABR_ALTERNATE_MASK		0xffffffff
/** @defgroup octospi1_control_register_abr_alternate ALTERNATE Alternate bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_lptr LPTR alternate bytes register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_LPTR_TIMEOUT_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_LPTR_TIMEOUT_MASK		0xffff
/** @defgroup octospi1_control_register_lptr_timeout TIMEOUT Timeout period
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_wpccr WPCCR low-power timeout register
@{*/

/** OCTOSPI1_CONTROL_REGISTER_WPCCR_DQSE DQS enable **/
#define OCTOSPI1_CONTROL_REGISTER_WPCCR_DQSE		(1 << 29)
/** OCTOSPI1_CONTROL_REGISTER_WPCCR_DDTR alternate bytes double transfer rate **/
#define OCTOSPI1_CONTROL_REGISTER_WPCCR_DDTR		(1 << 27)

#define OCTOSPI1_CONTROL_REGISTER_WPCCR_DMODE_SHIFT		24
#define OCTOSPI1_CONTROL_REGISTER_WPCCR_DMODE_MASK		0x07
/** @defgroup octospi1_control_register_wpccr_dmode DMODE Data mode
@{*/
/**@}*/


#define OCTOSPI1_CONTROL_REGISTER_WPCCR_ABSIZE_SHIFT		20
#define OCTOSPI1_CONTROL_REGISTER_WPCCR_ABSIZE_MASK		0x03
/** @defgroup octospi1_control_register_wpccr_absize ABSIZE Alternate bytes size
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_WPCCR_ABDTR Alternate bytes double transfer rate **/
#define OCTOSPI1_CONTROL_REGISTER_WPCCR_ABDTR		(1 << 19)

#define OCTOSPI1_CONTROL_REGISTER_WPCCR_ABMODE_SHIFT		16
#define OCTOSPI1_CONTROL_REGISTER_WPCCR_ABMODE_MASK		0x07
/** @defgroup octospi1_control_register_wpccr_abmode ABMODE Alternate byte mode
@{*/
/**@}*/


#define OCTOSPI1_CONTROL_REGISTER_WPCCR_ADSIZE_SHIFT		12
#define OCTOSPI1_CONTROL_REGISTER_WPCCR_ADSIZE_MASK		0x03
/** @defgroup octospi1_control_register_wpccr_adsize ADSIZE Address size
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_WPCCR_ADDTR Address double transfer rate **/
#define OCTOSPI1_CONTROL_REGISTER_WPCCR_ADDTR		(1 << 11)

#define OCTOSPI1_CONTROL_REGISTER_WPCCR_ADMODE_SHIFT		8
#define OCTOSPI1_CONTROL_REGISTER_WPCCR_ADMODE_MASK		0x07
/** @defgroup octospi1_control_register_wpccr_admode ADMODE Address mode
@{*/
/**@}*/


#define OCTOSPI1_CONTROL_REGISTER_WPCCR_ISIZE_SHIFT		4
#define OCTOSPI1_CONTROL_REGISTER_WPCCR_ISIZE_MASK		0x03
/** @defgroup octospi1_control_register_wpccr_isize ISIZE Instruction size
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_WPCCR_IDTR Instruction double transfer rate **/
#define OCTOSPI1_CONTROL_REGISTER_WPCCR_IDTR		(1 << 3)

#define OCTOSPI1_CONTROL_REGISTER_WPCCR_IMODE_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_WPCCR_IMODE_MASK		0x07
/** @defgroup octospi1_control_register_wpccr_imode IMODE Instruction mode
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_wptcr WPTCR wrap timing configuration register
@{*/

/** OCTOSPI1_CONTROL_REGISTER_WPTCR_SSHIFT Sample shift **/
#define OCTOSPI1_CONTROL_REGISTER_WPTCR_SSHIFT		(1 << 30)
/** OCTOSPI1_CONTROL_REGISTER_WPTCR_DHQC Delay hold quarter cycle **/
#define OCTOSPI1_CONTROL_REGISTER_WPTCR_DHQC		(1 << 28)

#define OCTOSPI1_CONTROL_REGISTER_WPTCR_DCYC_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_WPTCR_DCYC_MASK		0x1f
/** @defgroup octospi1_control_register_wptcr_dcyc DCYC Number of dummy cycles
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_wpir WPIR wrap instruction register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_WPIR_INSTRUCTION_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_WPIR_INSTRUCTION_MASK		0xffffffff
/** @defgroup octospi1_control_register_wpir_instruction INSTRUCTION INSTRUCTION
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_wpabr WPABR wrap alternate bytes register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_WPABR_ALTERNATE_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_WPABR_ALTERNATE_MASK		0xffffffff
/** @defgroup octospi1_control_register_wpabr_alternate ALTERNATE Alternate bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_wccr WCCR write communication configuration register
@{*/

/** OCTOSPI1_CONTROL_REGISTER_WCCR_DQSE DQSE **/
#define OCTOSPI1_CONTROL_REGISTER_WCCR_DQSE		(1 << 29)
/** OCTOSPI1_CONTROL_REGISTER_WCCR_DDTR DDTR **/
#define OCTOSPI1_CONTROL_REGISTER_WCCR_DDTR		(1 << 27)

#define OCTOSPI1_CONTROL_REGISTER_WCCR_DMODE_SHIFT		24
#define OCTOSPI1_CONTROL_REGISTER_WCCR_DMODE_MASK		0x07
/** @defgroup octospi1_control_register_wccr_dmode DMODE Data mode
@{*/
/**@}*/


#define OCTOSPI1_CONTROL_REGISTER_WCCR_ABSIZE_SHIFT		20
#define OCTOSPI1_CONTROL_REGISTER_WCCR_ABSIZE_MASK		0x03
/** @defgroup octospi1_control_register_wccr_absize ABSIZE Alternate bytes size
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_WCCR_ABDTR Alternate bytes double transfer rate **/
#define OCTOSPI1_CONTROL_REGISTER_WCCR_ABDTR		(1 << 19)

#define OCTOSPI1_CONTROL_REGISTER_WCCR_ABMODE_SHIFT		16
#define OCTOSPI1_CONTROL_REGISTER_WCCR_ABMODE_MASK		0x07
/** @defgroup octospi1_control_register_wccr_abmode ABMODE Alternate-byte mode
@{*/
/**@}*/


#define OCTOSPI1_CONTROL_REGISTER_WCCR_ADSIZE_SHIFT		12
#define OCTOSPI1_CONTROL_REGISTER_WCCR_ADSIZE_MASK		0x03
/** @defgroup octospi1_control_register_wccr_adsize ADSIZE Address size
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_WCCR_ADDTR Address double transfer rate **/
#define OCTOSPI1_CONTROL_REGISTER_WCCR_ADDTR		(1 << 11)

#define OCTOSPI1_CONTROL_REGISTER_WCCR_ADMODE_SHIFT		8
#define OCTOSPI1_CONTROL_REGISTER_WCCR_ADMODE_MASK		0x07
/** @defgroup octospi1_control_register_wccr_admode ADMODE Address mode
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_WCCR_ISIZE Instruction size **/
#define OCTOSPI1_CONTROL_REGISTER_WCCR_ISIZE		(1 << 3)
/** OCTOSPI1_CONTROL_REGISTER_WCCR_IDTR Instruction double transfer rate **/
#define OCTOSPI1_CONTROL_REGISTER_WCCR_IDTR		(1 << 2)

#define OCTOSPI1_CONTROL_REGISTER_WCCR_IMODE_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_WCCR_IMODE_MASK		0x03
/** @defgroup octospi1_control_register_wccr_imode IMODE Instruction mode
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_wtcr WTCR write timing configuration register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_WTCR_DCYC_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_WTCR_DCYC_MASK		0x1f
/** @defgroup octospi1_control_register_wtcr_dcyc DCYC DCYC
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_wir WIR instruction register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_WIR_INSTRUCTION_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_WIR_INSTRUCTION_MASK		0xffffffff
/** @defgroup octospi1_control_register_wir_instruction INSTRUCTION INSTRUCTION
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_wabr WABR write alternate bytes register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_WABR_ALTERNATE_SHIFT		0
#define OCTOSPI1_CONTROL_REGISTER_WABR_ALTERNATE_MASK		0xffffffff
/** @defgroup octospi1_control_register_wabr_alternate ALTERNATE Alternate bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_control_register_hlcr HLCR HyperBusTM latency configuration register
@{*/


#define OCTOSPI1_CONTROL_REGISTER_HLCR_TRWR_SHIFT		16
#define OCTOSPI1_CONTROL_REGISTER_HLCR_TRWR_MASK		0xff
/** @defgroup octospi1_control_register_hlcr_trwr TRWR Read write recovery time
@{*/
/**@}*/


#define OCTOSPI1_CONTROL_REGISTER_HLCR_TACC_SHIFT		8
#define OCTOSPI1_CONTROL_REGISTER_HLCR_TACC_MASK		0xff
/** @defgroup octospi1_control_register_hlcr_tacc TACC Access time
@{*/
/**@}*/

/** OCTOSPI1_CONTROL_REGISTER_HLCR_WZL Write zero latency **/
#define OCTOSPI1_CONTROL_REGISTER_HLCR_WZL		(1 << 1)
/** OCTOSPI1_CONTROL_REGISTER_HLCR_LM Latency mode **/
#define OCTOSPI1_CONTROL_REGISTER_HLCR_LM		(1 << 0)

/**@}*/

#pragma once 

/* --- OCTOSPI2: OctoSPI -------------------------------------------- */

/** @defgroup octospi2_registers OctoSPI Register
@{*/

/** OCTOSPI2_CR control register **/
#define OCTOSPI2_CR			MMIO32(OCTOSPI2_BASE + 0x00)
/** OCTOSPI2_DCR1 device configuration register **/
#define OCTOSPI2_DCR1			MMIO32(OCTOSPI2_BASE + 0x08)
/** OCTOSPI2_DCR2 device configuration register 2 **/
#define OCTOSPI2_DCR2			MMIO32(OCTOSPI2_BASE + 0x0c)
/** OCTOSPI2_DCR3 device configuration register 3 **/
#define OCTOSPI2_DCR3			MMIO32(OCTOSPI2_BASE + 0x10)
/** OCTOSPI2_DCR4 DCR4 **/
#define OCTOSPI2_DCR4			MMIO32(OCTOSPI2_BASE + 0x14)
/** OCTOSPI2_SR status register **/
#define OCTOSPI2_SR			MMIO32(OCTOSPI2_BASE + 0x20)
/** OCTOSPI2_FCR flag clear register **/
#define OCTOSPI2_FCR			MMIO32(OCTOSPI2_BASE + 0x24)
/** OCTOSPI2_DLR data length register **/
#define OCTOSPI2_DLR			MMIO32(OCTOSPI2_BASE + 0x40)
/** OCTOSPI2_AR address register **/
#define OCTOSPI2_AR			MMIO32(OCTOSPI2_BASE + 0x48)
/** OCTOSPI2_DR data register **/
#define OCTOSPI2_DR			MMIO32(OCTOSPI2_BASE + 0x50)
/** OCTOSPI2_PSMKR polling status mask register **/
#define OCTOSPI2_PSMKR			MMIO32(OCTOSPI2_BASE + 0x80)
/** OCTOSPI2_PSMAR polling status match register **/
#define OCTOSPI2_PSMAR			MMIO32(OCTOSPI2_BASE + 0x88)
/** OCTOSPI2_PIR OCTOSPI polling interval register **/
#define OCTOSPI2_PIR			MMIO32(OCTOSPI2_BASE + 0x90)
/** OCTOSPI2_CCR polling interval register **/
#define OCTOSPI2_CCR			MMIO32(OCTOSPI2_BASE + 0x100)
/** OCTOSPI2_TCR communication configuration register **/
#define OCTOSPI2_TCR			MMIO32(OCTOSPI2_BASE + 0x108)
/** OCTOSPI2_IR timing configuration register **/
#define OCTOSPI2_IR			MMIO32(OCTOSPI2_BASE + 0x110)
/** OCTOSPI2_ABR instruction register **/
#define OCTOSPI2_ABR			MMIO32(OCTOSPI2_BASE + 0x120)
/** OCTOSPI2_LPTR alternate bytes register **/
#define OCTOSPI2_LPTR			MMIO32(OCTOSPI2_BASE + 0x130)
/** OCTOSPI2_WPCCR low-power timeout register **/
#define OCTOSPI2_WPCCR			MMIO32(OCTOSPI2_BASE + 0x140)
/** OCTOSPI2_WPTCR wrap timing configuration register **/
#define OCTOSPI2_WPTCR			MMIO32(OCTOSPI2_BASE + 0x148)
/** OCTOSPI2_WPIR wrap instruction register **/
#define OCTOSPI2_WPIR			MMIO32(OCTOSPI2_BASE + 0x150)
/** OCTOSPI2_WPABR wrap alternate bytes register **/
#define OCTOSPI2_WPABR			MMIO32(OCTOSPI2_BASE + 0x160)
/** OCTOSPI2_WCCR write communication configuration register **/
#define OCTOSPI2_WCCR			MMIO32(OCTOSPI2_BASE + 0x180)
/** OCTOSPI2_WTCR write timing configuration register **/
#define OCTOSPI2_WTCR			MMIO32(OCTOSPI2_BASE + 0x188)
/** OCTOSPI2_WIR instruction register **/
#define OCTOSPI2_WIR			MMIO32(OCTOSPI2_BASE + 0x190)
/** OCTOSPI2_WABR write alternate bytes register **/
#define OCTOSPI2_WABR			MMIO32(OCTOSPI2_BASE + 0x1a0)
/** OCTOSPI2_HLCR HyperBusTM latency configuration register **/
#define OCTOSPI2_HLCR			MMIO32(OCTOSPI2_BASE + 0x200)

/**@}*/


/** @defgroup octospi2_cr CR control register
@{*/


#define OCTOSPI2_CR_FMODE_SHIFT		28
#define OCTOSPI2_CR_FMODE_MASK		0x03
/** @defgroup octospi2_cr_fmode FMODE Functional mode
@{*/
/**@}*/

/** OCTOSPI2_CR_PMM Polling match mode **/
#define OCTOSPI2_CR_PMM		(1 << 23)
/** OCTOSPI2_CR_APMS Automatic poll mode stop **/
#define OCTOSPI2_CR_APMS		(1 << 22)
/** OCTOSPI2_CR_TOIE TimeOut interrupt enable **/
#define OCTOSPI2_CR_TOIE		(1 << 20)
/** OCTOSPI2_CR_SMIE Status match interrupt enable **/
#define OCTOSPI2_CR_SMIE		(1 << 19)
/** OCTOSPI2_CR_FTIE FIFO threshold interrupt enable **/
#define OCTOSPI2_CR_FTIE		(1 << 18)
/** OCTOSPI2_CR_TCIE Transfer complete interrupt enable **/
#define OCTOSPI2_CR_TCIE		(1 << 17)
/** OCTOSPI2_CR_TEIE Transfer error interrupt enable **/
#define OCTOSPI2_CR_TEIE		(1 << 16)

#define OCTOSPI2_CR_FTHRES_SHIFT		8
#define OCTOSPI2_CR_FTHRES_MASK		0x1f
/** @defgroup octospi2_cr_fthres FTHRES IFO threshold level
@{*/
/**@}*/

/** OCTOSPI2_CR_FSEL FLASH memory selection **/
#define OCTOSPI2_CR_FSEL		(1 << 7)
/** OCTOSPI2_CR_DQM Dual-quad mode **/
#define OCTOSPI2_CR_DQM		(1 << 6)
/** OCTOSPI2_CR_TCEN Timeout counter enable **/
#define OCTOSPI2_CR_TCEN		(1 << 3)
/** OCTOSPI2_CR_DMAEN DMA enable **/
#define OCTOSPI2_CR_DMAEN		(1 << 2)
/** OCTOSPI2_CR_ABORT Abort request **/
#define OCTOSPI2_CR_ABORT		(1 << 1)
/** OCTOSPI2_CR_EN Enable **/
#define OCTOSPI2_CR_EN		(1 << 0)

/**@}*/

/** @defgroup octospi2_dcr1 DCR1 device configuration register
@{*/


#define OCTOSPI2_DCR1_MTYP_SHIFT		24
#define OCTOSPI2_DCR1_MTYP_MASK		0x03
/** @defgroup octospi2_dcr1_mtyp MTYP Memory type
@{*/
/**@}*/


#define OCTOSPI2_DCR1_DEVSIZE_SHIFT		16
#define OCTOSPI2_DCR1_DEVSIZE_MASK		0x1f
/** @defgroup octospi2_dcr1_devsize DEVSIZE Device size
@{*/
/**@}*/


#define OCTOSPI2_DCR1_CSHT_SHIFT		8
#define OCTOSPI2_DCR1_CSHT_MASK		0x07
/** @defgroup octospi2_dcr1_csht CSHT Chip-select high time
@{*/
/**@}*/

/** OCTOSPI2_DCR1_FRCK Free running clock **/
#define OCTOSPI2_DCR1_FRCK		(1 << 1)
/** OCTOSPI2_DCR1_CKMODE Mode 0 / mode 3 **/
#define OCTOSPI2_DCR1_CKMODE		(1 << 0)

/**@}*/

/** @defgroup octospi2_dcr2 DCR2 device configuration register 2
@{*/


#define OCTOSPI2_DCR2_WRAPSIZE_SHIFT		16
#define OCTOSPI2_DCR2_WRAPSIZE_MASK		0x07
/** @defgroup octospi2_dcr2_wrapsize WRAPSIZE Wrap size
@{*/
/**@}*/


#define OCTOSPI2_DCR2_PRESCALER_SHIFT		0
#define OCTOSPI2_DCR2_PRESCALER_MASK		0xff
/** @defgroup octospi2_dcr2_prescaler PRESCALER Clock prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_dcr3 DCR3 device configuration register 3
@{*/


#define OCTOSPI2_DCR3_CSBOUND_SHIFT		16
#define OCTOSPI2_DCR3_CSBOUND_MASK		0x1f
/** @defgroup octospi2_dcr3_csbound CSBOUND CS boundary
@{*/
/**@}*/


#define OCTOSPI2_DCR3_MAXTRAN_SHIFT		0
#define OCTOSPI2_DCR3_MAXTRAN_MASK		0xff
/** @defgroup octospi2_dcr3_maxtran MAXTRAN Maximum transfer
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_dcr4 DCR4 DCR4
@{*/


#define OCTOSPI2_DCR4_REFRESH_SHIFT		0
#define OCTOSPI2_DCR4_REFRESH_MASK		0xffff
/** @defgroup octospi2_dcr4_refresh REFRESH Refresh rate
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_sr SR status register
@{*/


#define OCTOSPI2_SR_FLEVEL_SHIFT		8
#define OCTOSPI2_SR_FLEVEL_MASK		0x3f
/** @defgroup octospi2_sr_flevel FLEVEL FIFO level
@{*/
/**@}*/

/** OCTOSPI2_SR_BUSY Busy **/
#define OCTOSPI2_SR_BUSY		(1 << 5)
/** OCTOSPI2_SR_CTOF Clear timeout flag **/
#define OCTOSPI2_SR_CTOF		(1 << 4)
/** OCTOSPI2_SR_CSMF Clear status match flag **/
#define OCTOSPI2_SR_CSMF		(1 << 3)
/** OCTOSPI2_SR_FTF FIFO threshold flag **/
#define OCTOSPI2_SR_FTF		(1 << 2)
/** OCTOSPI2_SR_CTCF Clear transfer complete flag **/
#define OCTOSPI2_SR_CTCF		(1 << 1)
/** OCTOSPI2_SR_CTEF Clear transfer error flag **/
#define OCTOSPI2_SR_CTEF		(1 << 0)

/**@}*/

/** @defgroup octospi2_fcr FCR flag clear register
@{*/

/** OCTOSPI2_FCR_CTOF Clear timeout flag **/
#define OCTOSPI2_FCR_CTOF		(1 << 4)
/** OCTOSPI2_FCR_CSMF Clear status match flag **/
#define OCTOSPI2_FCR_CSMF		(1 << 3)
/** OCTOSPI2_FCR_CTCF Clear transfer complete flag **/
#define OCTOSPI2_FCR_CTCF		(1 << 1)
/** OCTOSPI2_FCR_CTEF Clear transfer error flag **/
#define OCTOSPI2_FCR_CTEF		(1 << 0)

/**@}*/

/** @defgroup octospi2_dlr DLR data length register
@{*/


#define OCTOSPI2_DLR_DL_SHIFT		0
#define OCTOSPI2_DLR_DL_MASK		0xffffffff
/** @defgroup octospi2_dlr_dl DL Data length
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_ar AR address register
@{*/


#define OCTOSPI2_AR_ADRESS_SHIFT		0
#define OCTOSPI2_AR_ADRESS_MASK		0xffffffff
/** @defgroup octospi2_ar_adress ADRESS Adress
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_dr DR data register
@{*/


#define OCTOSPI2_DR_DATA_SHIFT		0
#define OCTOSPI2_DR_DATA_MASK		0xffffffff
/** @defgroup octospi2_dr_data DATA Data
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_psmkr PSMKR polling status mask register
@{*/


#define OCTOSPI2_PSMKR_MASK_SHIFT		0
#define OCTOSPI2_PSMKR_MASK_MASK		0xffffffff
/** @defgroup octospi2_psmkr_mask MASK Status mask
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_psmar PSMAR polling status match register
@{*/


#define OCTOSPI2_PSMAR_MATCH_SHIFT		0
#define OCTOSPI2_PSMAR_MATCH_MASK		0xffffffff
/** @defgroup octospi2_psmar_match MATCH Match
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_pir PIR OCTOSPI polling interval register
@{*/


#define OCTOSPI2_PIR_INTERVAL_SHIFT		0
#define OCTOSPI2_PIR_INTERVAL_MASK		0xffff
/** @defgroup octospi2_pir_interval INTERVAL Polling interval
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_ccr CCR polling interval register
@{*/

/** OCTOSPI2_CCR_SIOO Send instruction only once mode **/
#define OCTOSPI2_CCR_SIOO		(1 << 31)
/** OCTOSPI2_CCR_DQSE DQS enable **/
#define OCTOSPI2_CCR_DQSE		(1 << 29)
/** OCTOSPI2_CCR_DDTR Alternate bytes double transfer rate **/
#define OCTOSPI2_CCR_DDTR		(1 << 27)

#define OCTOSPI2_CCR_DMODE_SHIFT		24
#define OCTOSPI2_CCR_DMODE_MASK		0x07
/** @defgroup octospi2_ccr_dmode DMODE Data mode
@{*/
/**@}*/


#define OCTOSPI2_CCR_ABSIZE_SHIFT		20
#define OCTOSPI2_CCR_ABSIZE_MASK		0x03
/** @defgroup octospi2_ccr_absize ABSIZE Alternate bytes size
@{*/
/**@}*/

/** OCTOSPI2_CCR_ABDTR Alternate bytes double transfer rate **/
#define OCTOSPI2_CCR_ABDTR		(1 << 19)

#define OCTOSPI2_CCR_ABMODE_SHIFT		16
#define OCTOSPI2_CCR_ABMODE_MASK		0x07
/** @defgroup octospi2_ccr_abmode ABMODE Alternate byte mode
@{*/
/**@}*/


#define OCTOSPI2_CCR_ADSIZE_SHIFT		12
#define OCTOSPI2_CCR_ADSIZE_MASK		0x03
/** @defgroup octospi2_ccr_adsize ADSIZE Address size
@{*/
/**@}*/

/** OCTOSPI2_CCR_ADDTR Address double transfer rate **/
#define OCTOSPI2_CCR_ADDTR		(1 << 11)

#define OCTOSPI2_CCR_ADMODE_SHIFT		8
#define OCTOSPI2_CCR_ADMODE_MASK		0x07
/** @defgroup octospi2_ccr_admode ADMODE Address mode
@{*/
/**@}*/


#define OCTOSPI2_CCR_ISIZE_SHIFT		4
#define OCTOSPI2_CCR_ISIZE_MASK		0x03
/** @defgroup octospi2_ccr_isize ISIZE Instruction size
@{*/
/**@}*/

/** OCTOSPI2_CCR_IDTR Instruction double transfer rate **/
#define OCTOSPI2_CCR_IDTR		(1 << 3)

#define OCTOSPI2_CCR_IMODE_SHIFT		0
#define OCTOSPI2_CCR_IMODE_MASK		0x07
/** @defgroup octospi2_ccr_imode IMODE Instruction mode
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_tcr TCR communication configuration register
@{*/

/** OCTOSPI2_TCR_SSHIFT Sample shift **/
#define OCTOSPI2_TCR_SSHIFT		(1 << 30)
/** OCTOSPI2_TCR_DHQC Delay hold quarter cycle **/
#define OCTOSPI2_TCR_DHQC		(1 << 28)

#define OCTOSPI2_TCR_DCYC_SHIFT		0
#define OCTOSPI2_TCR_DCYC_MASK		0x1f
/** @defgroup octospi2_tcr_dcyc DCYC Number of dummy cycles
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_ir IR timing configuration register
@{*/


#define OCTOSPI2_IR_INSTRUCTION_SHIFT		0
#define OCTOSPI2_IR_INSTRUCTION_MASK		0xffffffff
/** @defgroup octospi2_ir_instruction INSTRUCTION INSTRUCTION
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_abr ABR instruction register
@{*/


#define OCTOSPI2_ABR_ALTERNATE_SHIFT		0
#define OCTOSPI2_ABR_ALTERNATE_MASK		0xffffffff
/** @defgroup octospi2_abr_alternate ALTERNATE Alternate bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_lptr LPTR alternate bytes register
@{*/


#define OCTOSPI2_LPTR_TIMEOUT_SHIFT		0
#define OCTOSPI2_LPTR_TIMEOUT_MASK		0xffff
/** @defgroup octospi2_lptr_timeout TIMEOUT Timeout period
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_wpccr WPCCR low-power timeout register
@{*/

/** OCTOSPI2_WPCCR_DQSE DQS enable **/
#define OCTOSPI2_WPCCR_DQSE		(1 << 29)
/** OCTOSPI2_WPCCR_DDTR alternate bytes double transfer rate **/
#define OCTOSPI2_WPCCR_DDTR		(1 << 27)

#define OCTOSPI2_WPCCR_DMODE_SHIFT		24
#define OCTOSPI2_WPCCR_DMODE_MASK		0x07
/** @defgroup octospi2_wpccr_dmode DMODE Data mode
@{*/
/**@}*/


#define OCTOSPI2_WPCCR_ABSIZE_SHIFT		20
#define OCTOSPI2_WPCCR_ABSIZE_MASK		0x03
/** @defgroup octospi2_wpccr_absize ABSIZE Alternate bytes size
@{*/
/**@}*/

/** OCTOSPI2_WPCCR_ABDTR Alternate bytes double transfer rate **/
#define OCTOSPI2_WPCCR_ABDTR		(1 << 19)

#define OCTOSPI2_WPCCR_ABMODE_SHIFT		16
#define OCTOSPI2_WPCCR_ABMODE_MASK		0x07
/** @defgroup octospi2_wpccr_abmode ABMODE Alternate byte mode
@{*/
/**@}*/


#define OCTOSPI2_WPCCR_ADSIZE_SHIFT		12
#define OCTOSPI2_WPCCR_ADSIZE_MASK		0x03
/** @defgroup octospi2_wpccr_adsize ADSIZE Address size
@{*/
/**@}*/

/** OCTOSPI2_WPCCR_ADDTR Address double transfer rate **/
#define OCTOSPI2_WPCCR_ADDTR		(1 << 11)

#define OCTOSPI2_WPCCR_ADMODE_SHIFT		8
#define OCTOSPI2_WPCCR_ADMODE_MASK		0x07
/** @defgroup octospi2_wpccr_admode ADMODE Address mode
@{*/
/**@}*/


#define OCTOSPI2_WPCCR_ISIZE_SHIFT		4
#define OCTOSPI2_WPCCR_ISIZE_MASK		0x03
/** @defgroup octospi2_wpccr_isize ISIZE Instruction size
@{*/
/**@}*/

/** OCTOSPI2_WPCCR_IDTR Instruction double transfer rate **/
#define OCTOSPI2_WPCCR_IDTR		(1 << 3)

#define OCTOSPI2_WPCCR_IMODE_SHIFT		0
#define OCTOSPI2_WPCCR_IMODE_MASK		0x07
/** @defgroup octospi2_wpccr_imode IMODE Instruction mode
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_wptcr WPTCR wrap timing configuration register
@{*/

/** OCTOSPI2_WPTCR_SSHIFT Sample shift **/
#define OCTOSPI2_WPTCR_SSHIFT		(1 << 30)
/** OCTOSPI2_WPTCR_DHQC Delay hold quarter cycle **/
#define OCTOSPI2_WPTCR_DHQC		(1 << 28)

#define OCTOSPI2_WPTCR_DCYC_SHIFT		0
#define OCTOSPI2_WPTCR_DCYC_MASK		0x1f
/** @defgroup octospi2_wptcr_dcyc DCYC Number of dummy cycles
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_wpir WPIR wrap instruction register
@{*/


#define OCTOSPI2_WPIR_INSTRUCTION_SHIFT		0
#define OCTOSPI2_WPIR_INSTRUCTION_MASK		0xffffffff
/** @defgroup octospi2_wpir_instruction INSTRUCTION INSTRUCTION
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_wpabr WPABR wrap alternate bytes register
@{*/


#define OCTOSPI2_WPABR_ALTERNATE_SHIFT		0
#define OCTOSPI2_WPABR_ALTERNATE_MASK		0xffffffff
/** @defgroup octospi2_wpabr_alternate ALTERNATE Alternate bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_wccr WCCR write communication configuration register
@{*/

/** OCTOSPI2_WCCR_DQSE DQSE **/
#define OCTOSPI2_WCCR_DQSE		(1 << 29)
/** OCTOSPI2_WCCR_DDTR DDTR **/
#define OCTOSPI2_WCCR_DDTR		(1 << 27)

#define OCTOSPI2_WCCR_DMODE_SHIFT		24
#define OCTOSPI2_WCCR_DMODE_MASK		0x07
/** @defgroup octospi2_wccr_dmode DMODE Data mode
@{*/
/**@}*/


#define OCTOSPI2_WCCR_ABSIZE_SHIFT		20
#define OCTOSPI2_WCCR_ABSIZE_MASK		0x03
/** @defgroup octospi2_wccr_absize ABSIZE Alternate bytes size
@{*/
/**@}*/

/** OCTOSPI2_WCCR_ABDTR Alternate bytes double transfer rate **/
#define OCTOSPI2_WCCR_ABDTR		(1 << 19)

#define OCTOSPI2_WCCR_ABMODE_SHIFT		16
#define OCTOSPI2_WCCR_ABMODE_MASK		0x07
/** @defgroup octospi2_wccr_abmode ABMODE Alternate-byte mode
@{*/
/**@}*/


#define OCTOSPI2_WCCR_ADSIZE_SHIFT		12
#define OCTOSPI2_WCCR_ADSIZE_MASK		0x03
/** @defgroup octospi2_wccr_adsize ADSIZE Address size
@{*/
/**@}*/

/** OCTOSPI2_WCCR_ADDTR Address double transfer rate **/
#define OCTOSPI2_WCCR_ADDTR		(1 << 11)

#define OCTOSPI2_WCCR_ADMODE_SHIFT		8
#define OCTOSPI2_WCCR_ADMODE_MASK		0x07
/** @defgroup octospi2_wccr_admode ADMODE Address mode
@{*/
/**@}*/

/** OCTOSPI2_WCCR_ISIZE Instruction size **/
#define OCTOSPI2_WCCR_ISIZE		(1 << 3)
/** OCTOSPI2_WCCR_IDTR Instruction double transfer rate **/
#define OCTOSPI2_WCCR_IDTR		(1 << 2)

#define OCTOSPI2_WCCR_IMODE_SHIFT		0
#define OCTOSPI2_WCCR_IMODE_MASK		0x03
/** @defgroup octospi2_wccr_imode IMODE Instruction mode
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_wtcr WTCR write timing configuration register
@{*/


#define OCTOSPI2_WTCR_DCYC_SHIFT		0
#define OCTOSPI2_WTCR_DCYC_MASK		0x1f
/** @defgroup octospi2_wtcr_dcyc DCYC DCYC
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_wir WIR instruction register
@{*/


#define OCTOSPI2_WIR_INSTRUCTION_SHIFT		0
#define OCTOSPI2_WIR_INSTRUCTION_MASK		0xffffffff
/** @defgroup octospi2_wir_instruction INSTRUCTION INSTRUCTION
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_wabr WABR write alternate bytes register
@{*/


#define OCTOSPI2_WABR_ALTERNATE_SHIFT		0
#define OCTOSPI2_WABR_ALTERNATE_MASK		0xffffffff
/** @defgroup octospi2_wabr_alternate ALTERNATE Alternate bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi2_hlcr HLCR HyperBusTM latency configuration register
@{*/


#define OCTOSPI2_HLCR_TRWR_SHIFT		16
#define OCTOSPI2_HLCR_TRWR_MASK		0xff
/** @defgroup octospi2_hlcr_trwr TRWR Read write recovery time
@{*/
/**@}*/


#define OCTOSPI2_HLCR_TACC_SHIFT		8
#define OCTOSPI2_HLCR_TACC_MASK		0xff
/** @defgroup octospi2_hlcr_tacc TACC Access time
@{*/
/**@}*/

/** OCTOSPI2_HLCR_WZL Write zero latency **/
#define OCTOSPI2_HLCR_WZL		(1 << 1)
/** OCTOSPI2_HLCR_LM Latency mode **/
#define OCTOSPI2_HLCR_LM		(1 << 0)

/**@}*/

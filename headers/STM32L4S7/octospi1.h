#pragma once 

/* --- OCTOSPI1: OctoSPI -------------------------------------------- */

/** @defgroup octospi1_registers OctoSPI Register
@{*/

/** OCTOSPI1_CR control register **/
#define OCTOSPI1_CR			MMIO32(OCTOSPI1_BASE + 0x00)
/** OCTOSPI1_DCR1 device configuration register **/
#define OCTOSPI1_DCR1			MMIO32(OCTOSPI1_BASE + 0x08)
/** OCTOSPI1_DCR2 device configuration register 2 **/
#define OCTOSPI1_DCR2			MMIO32(OCTOSPI1_BASE + 0x0c)
/** OCTOSPI1_DCR3 device configuration register 3 **/
#define OCTOSPI1_DCR3			MMIO32(OCTOSPI1_BASE + 0x10)
/** OCTOSPI1_SR status register **/
#define OCTOSPI1_SR			MMIO32(OCTOSPI1_BASE + 0x20)
/** OCTOSPI1_FCR flag clear register **/
#define OCTOSPI1_FCR			MMIO32(OCTOSPI1_BASE + 0x24)
/** OCTOSPI1_DLR data length register **/
#define OCTOSPI1_DLR			MMIO32(OCTOSPI1_BASE + 0x40)
/** OCTOSPI1_AR address register **/
#define OCTOSPI1_AR			MMIO32(OCTOSPI1_BASE + 0x48)
/** OCTOSPI1_DR data register **/
#define OCTOSPI1_DR			MMIO32(OCTOSPI1_BASE + 0x50)
/** OCTOSPI1_PSMKR polling status mask register **/
#define OCTOSPI1_PSMKR			MMIO32(OCTOSPI1_BASE + 0x80)
/** OCTOSPI1_PSMAR polling status match register **/
#define OCTOSPI1_PSMAR			MMIO32(OCTOSPI1_BASE + 0x88)
/** OCTOSPI1_PIR polling interval register **/
#define OCTOSPI1_PIR			MMIO32(OCTOSPI1_BASE + 0x90)
/** OCTOSPI1_CCR communication configuration register **/
#define OCTOSPI1_CCR			MMIO32(OCTOSPI1_BASE + 0x100)
/** OCTOSPI1_TCR timing configuration register **/
#define OCTOSPI1_TCR			MMIO32(OCTOSPI1_BASE + 0x108)
/** OCTOSPI1_IR instruction register **/
#define OCTOSPI1_IR			MMIO32(OCTOSPI1_BASE + 0x110)
/** OCTOSPI1_ABR alternate bytes register **/
#define OCTOSPI1_ABR			MMIO32(OCTOSPI1_BASE + 0x120)
/** OCTOSPI1_LPTR low-power timeout register **/
#define OCTOSPI1_LPTR			MMIO32(OCTOSPI1_BASE + 0x130)
/** OCTOSPI1_WCCR write communication configuration register **/
#define OCTOSPI1_WCCR			MMIO32(OCTOSPI1_BASE + 0x180)
/** OCTOSPI1_WTCR write timing configuration register **/
#define OCTOSPI1_WTCR			MMIO32(OCTOSPI1_BASE + 0x188)
/** OCTOSPI1_WIR write instruction register **/
#define OCTOSPI1_WIR			MMIO32(OCTOSPI1_BASE + 0x190)
/** OCTOSPI1_WABR write alternate bytes register **/
#define OCTOSPI1_WABR			MMIO32(OCTOSPI1_BASE + 0x1a0)
/** OCTOSPI1_HLCR HyperBusTM latency configuration register **/
#define OCTOSPI1_HLCR			MMIO32(OCTOSPI1_BASE + 0x200)
/** OCTOSPI1_HWCFGR HW configuration register **/
#define OCTOSPI1_HWCFGR			MMIO32(OCTOSPI1_BASE + 0x3f0)
/** OCTOSPI1_VER version register **/
#define OCTOSPI1_VER			MMIO32(OCTOSPI1_BASE + 0x3f4)
/** OCTOSPI1_ID identification **/
#define OCTOSPI1_ID			MMIO32(OCTOSPI1_BASE + 0x3f8)
/** OCTOSPI1_MID magic ID **/
#define OCTOSPI1_MID			MMIO32(OCTOSPI1_BASE + 0x3fc)

/**@}*/


/** @defgroup octospi1_cr CR control register
@{*/


#define OCTOSPI1_CR_FMODE_SHIFT		28
#define OCTOSPI1_CR_FMODE_MASK		0x03
/** @defgroup octospi1_cr_fmode FMODE Functional mode
@{*/
/**@}*/

/** OCTOSPI1_CR_PMM Polling match mode **/
#define OCTOSPI1_CR_PMM		(1 << 23)
/** OCTOSPI1_CR_APMS Automatic poll mode stop **/
#define OCTOSPI1_CR_APMS		(1 << 22)
/** OCTOSPI1_CR_TOIE TimeOut interrupt enable **/
#define OCTOSPI1_CR_TOIE		(1 << 20)
/** OCTOSPI1_CR_SMIE Status match interrupt enable **/
#define OCTOSPI1_CR_SMIE		(1 << 19)
/** OCTOSPI1_CR_FTIE FIFO threshold interrupt enable **/
#define OCTOSPI1_CR_FTIE		(1 << 18)
/** OCTOSPI1_CR_TCIE Transfer complete interrupt enable **/
#define OCTOSPI1_CR_TCIE		(1 << 17)
/** OCTOSPI1_CR_TEIE Transfer error interrupt enable **/
#define OCTOSPI1_CR_TEIE		(1 << 16)

#define OCTOSPI1_CR_FTHRES_SHIFT		8
#define OCTOSPI1_CR_FTHRES_MASK		0x1f
/** @defgroup octospi1_cr_fthres FTHRES IFO threshold level
@{*/
/**@}*/

/** OCTOSPI1_CR_FSEL FLASH memory selection **/
#define OCTOSPI1_CR_FSEL		(1 << 7)
/** OCTOSPI1_CR_DQM Dual-quad mode **/
#define OCTOSPI1_CR_DQM		(1 << 6)
/** OCTOSPI1_CR_TCEN Timeout counter enable **/
#define OCTOSPI1_CR_TCEN		(1 << 3)
/** OCTOSPI1_CR_DMAEN DMA enable **/
#define OCTOSPI1_CR_DMAEN		(1 << 2)
/** OCTOSPI1_CR_ABORT Abort request **/
#define OCTOSPI1_CR_ABORT		(1 << 1)
/** OCTOSPI1_CR_EN Enable **/
#define OCTOSPI1_CR_EN		(1 << 0)

/**@}*/

/** @defgroup octospi1_dcr1 DCR1 device configuration register
@{*/


#define OCTOSPI1_DCR1_MTYP_SHIFT		24
#define OCTOSPI1_DCR1_MTYP_MASK		0x03
/** @defgroup octospi1_dcr1_mtyp MTYP Memory type
@{*/
/**@}*/


#define OCTOSPI1_DCR1_DEVSIZE_SHIFT		16
#define OCTOSPI1_DCR1_DEVSIZE_MASK		0x1f
/** @defgroup octospi1_dcr1_devsize DEVSIZE Device size
@{*/
/**@}*/


#define OCTOSPI1_DCR1_CSHT_SHIFT		8
#define OCTOSPI1_DCR1_CSHT_MASK		0x07
/** @defgroup octospi1_dcr1_csht CSHT Chip-select high time
@{*/
/**@}*/

/** OCTOSPI1_DCR1_FRCK Free running clock **/
#define OCTOSPI1_DCR1_FRCK		(1 << 1)
/** OCTOSPI1_DCR1_CKMODE Mode 0 / mode 3 **/
#define OCTOSPI1_DCR1_CKMODE		(1 << 0)

/**@}*/

/** @defgroup octospi1_dcr2 DCR2 device configuration register 2
@{*/


#define OCTOSPI1_DCR2_WRAPSIZE_SHIFT		16
#define OCTOSPI1_DCR2_WRAPSIZE_MASK		0x07
/** @defgroup octospi1_dcr2_wrapsize WRAPSIZE Wrap size
@{*/
/**@}*/


#define OCTOSPI1_DCR2_PRESCALER_SHIFT		0
#define OCTOSPI1_DCR2_PRESCALER_MASK		0xff
/** @defgroup octospi1_dcr2_prescaler PRESCALER Clock prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_dcr3 DCR3 device configuration register 3
@{*/


#define OCTOSPI1_DCR3_CSBOUND_SHIFT		16
#define OCTOSPI1_DCR3_CSBOUND_MASK		0x1f
/** @defgroup octospi1_dcr3_csbound CSBOUND CS boundary
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_sr SR status register
@{*/


#define OCTOSPI1_SR_FLEVEL_SHIFT		8
#define OCTOSPI1_SR_FLEVEL_MASK		0x3f
/** @defgroup octospi1_sr_flevel FLEVEL FIFO level
@{*/
/**@}*/

/** OCTOSPI1_SR_BUSY BUSY **/
#define OCTOSPI1_SR_BUSY		(1 << 5)
/** OCTOSPI1_SR_TOF Timeout flag **/
#define OCTOSPI1_SR_TOF		(1 << 4)
/** OCTOSPI1_SR_SMF Status match flag **/
#define OCTOSPI1_SR_SMF		(1 << 3)
/** OCTOSPI1_SR_FTF FIFO threshold flag **/
#define OCTOSPI1_SR_FTF		(1 << 2)
/** OCTOSPI1_SR_TCF Transfer complete flag **/
#define OCTOSPI1_SR_TCF		(1 << 1)
/** OCTOSPI1_SR_TEF Transfer error flag **/
#define OCTOSPI1_SR_TEF		(1 << 0)

/**@}*/

/** @defgroup octospi1_fcr FCR flag clear register
@{*/

/** OCTOSPI1_FCR_CTOF Clear timeout flag **/
#define OCTOSPI1_FCR_CTOF		(1 << 4)
/** OCTOSPI1_FCR_CSMF Clear status match flag **/
#define OCTOSPI1_FCR_CSMF		(1 << 3)
/** OCTOSPI1_FCR_CTCF Clear transfer complete flag **/
#define OCTOSPI1_FCR_CTCF		(1 << 1)
/** OCTOSPI1_FCR_CTEF Clear transfer error flag **/
#define OCTOSPI1_FCR_CTEF		(1 << 0)

/**@}*/

/** @defgroup octospi1_dlr DLR data length register
@{*/


#define OCTOSPI1_DLR_DL_SHIFT		0
#define OCTOSPI1_DLR_DL_MASK		0xffffffff
/** @defgroup octospi1_dlr_dl DL Data length
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_ar AR address register
@{*/


#define OCTOSPI1_AR_ADDRESS_SHIFT		0
#define OCTOSPI1_AR_ADDRESS_MASK		0xffffffff
/** @defgroup octospi1_ar_address ADDRESS ADDRESS
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_dr DR data register
@{*/


#define OCTOSPI1_DR_DATA_SHIFT		0
#define OCTOSPI1_DR_DATA_MASK		0xffffffff
/** @defgroup octospi1_dr_data DATA Data
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_psmkr PSMKR polling status mask register
@{*/


#define OCTOSPI1_PSMKR_MASK_SHIFT		0
#define OCTOSPI1_PSMKR_MASK_MASK		0xffffffff
/** @defgroup octospi1_psmkr_mask MASK Status mask
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_psmar PSMAR polling status match register
@{*/


#define OCTOSPI1_PSMAR_MATCH_SHIFT		0
#define OCTOSPI1_PSMAR_MATCH_MASK		0xffffffff
/** @defgroup octospi1_psmar_match MATCH Status match
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_pir PIR polling interval register
@{*/


#define OCTOSPI1_PIR_INTERVAL_SHIFT		0
#define OCTOSPI1_PIR_INTERVAL_MASK		0xffff
/** @defgroup octospi1_pir_interval INTERVAL Polling interval
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_ccr CCR communication configuration register
@{*/

/** OCTOSPI1_CCR_SIOO Send instruction only once mode **/
#define OCTOSPI1_CCR_SIOO		(1 << 31)
/** OCTOSPI1_CCR_DQSE DQS enable **/
#define OCTOSPI1_CCR_DQSE		(1 << 29)
/** OCTOSPI1_CCR_DDTR Alternate bytes double transfer rate **/
#define OCTOSPI1_CCR_DDTR		(1 << 27)

#define OCTOSPI1_CCR_DMODE_SHIFT		24
#define OCTOSPI1_CCR_DMODE_MASK		0x07
/** @defgroup octospi1_ccr_dmode DMODE Data mode
@{*/
/**@}*/


#define OCTOSPI1_CCR_ABSIZE_SHIFT		20
#define OCTOSPI1_CCR_ABSIZE_MASK		0x03
/** @defgroup octospi1_ccr_absize ABSIZE Alternate bytes size
@{*/
/**@}*/

/** OCTOSPI1_CCR_ABDTR Alternate bytes double transfer rate **/
#define OCTOSPI1_CCR_ABDTR		(1 << 19)

#define OCTOSPI1_CCR_ABMODE_SHIFT		16
#define OCTOSPI1_CCR_ABMODE_MASK		0x07
/** @defgroup octospi1_ccr_abmode ABMODE Alternate byte mode
@{*/
/**@}*/


#define OCTOSPI1_CCR_ADSIZE_SHIFT		12
#define OCTOSPI1_CCR_ADSIZE_MASK		0x03
/** @defgroup octospi1_ccr_adsize ADSIZE Address size
@{*/
/**@}*/

/** OCTOSPI1_CCR_ADDTR Address double transfer rate **/
#define OCTOSPI1_CCR_ADDTR		(1 << 11)

#define OCTOSPI1_CCR_ADMODE_SHIFT		8
#define OCTOSPI1_CCR_ADMODE_MASK		0x07
/** @defgroup octospi1_ccr_admode ADMODE Address mode
@{*/
/**@}*/


#define OCTOSPI1_CCR_ISIZE_SHIFT		4
#define OCTOSPI1_CCR_ISIZE_MASK		0x03
/** @defgroup octospi1_ccr_isize ISIZE Instruction size
@{*/
/**@}*/

/** OCTOSPI1_CCR_IDTR Instruction double transfer rate **/
#define OCTOSPI1_CCR_IDTR		(1 << 3)

#define OCTOSPI1_CCR_IMODE_SHIFT		0
#define OCTOSPI1_CCR_IMODE_MASK		0x07
/** @defgroup octospi1_ccr_imode IMODE Instruction mode
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_tcr TCR timing configuration register
@{*/

/** OCTOSPI1_TCR_SSHIFT Sample shift **/
#define OCTOSPI1_TCR_SSHIFT		(1 << 30)
/** OCTOSPI1_TCR_DHQC Delay hold quarter cycle **/
#define OCTOSPI1_TCR_DHQC		(1 << 28)

#define OCTOSPI1_TCR_DCYC_SHIFT		0
#define OCTOSPI1_TCR_DCYC_MASK		0x1f
/** @defgroup octospi1_tcr_dcyc DCYC Number of dummy cycles
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_ir IR instruction register
@{*/


#define OCTOSPI1_IR_INSTRUCTION_SHIFT		0
#define OCTOSPI1_IR_INSTRUCTION_MASK		0xffffffff
/** @defgroup octospi1_ir_instruction INSTRUCTION INSTRUCTION
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_abr ABR alternate bytes register
@{*/


#define OCTOSPI1_ABR_ALTERNATE_SHIFT		0
#define OCTOSPI1_ABR_ALTERNATE_MASK		0xffffffff
/** @defgroup octospi1_abr_alternate ALTERNATE Alternate bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_lptr LPTR low-power timeout register
@{*/


#define OCTOSPI1_LPTR_TIMEOUT_SHIFT		0
#define OCTOSPI1_LPTR_TIMEOUT_MASK		0xffff
/** @defgroup octospi1_lptr_timeout TIMEOUT Timeout period
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_wccr WCCR write communication configuration register
@{*/

/** OCTOSPI1_WCCR_SIOO Send instruction only once mode **/
#define OCTOSPI1_WCCR_SIOO		(1 << 31)
/** OCTOSPI1_WCCR_DQSE DQS enable **/
#define OCTOSPI1_WCCR_DQSE		(1 << 29)
/** OCTOSPI1_WCCR_DDTR alternate bytes double transfer rate **/
#define OCTOSPI1_WCCR_DDTR		(1 << 27)

#define OCTOSPI1_WCCR_DMODE_SHIFT		24
#define OCTOSPI1_WCCR_DMODE_MASK		0x07
/** @defgroup octospi1_wccr_dmode DMODE Data mode
@{*/
/**@}*/


#define OCTOSPI1_WCCR_ABSIZE_SHIFT		20
#define OCTOSPI1_WCCR_ABSIZE_MASK		0x03
/** @defgroup octospi1_wccr_absize ABSIZE Alternate bytes size
@{*/
/**@}*/

/** OCTOSPI1_WCCR_ABDTR Alternate bytes double transfer rate **/
#define OCTOSPI1_WCCR_ABDTR		(1 << 19)

#define OCTOSPI1_WCCR_ABMODE_SHIFT		16
#define OCTOSPI1_WCCR_ABMODE_MASK		0x07
/** @defgroup octospi1_wccr_abmode ABMODE Alternate byte mode
@{*/
/**@}*/


#define OCTOSPI1_WCCR_ADSIZE_SHIFT		12
#define OCTOSPI1_WCCR_ADSIZE_MASK		0x03
/** @defgroup octospi1_wccr_adsize ADSIZE Address size
@{*/
/**@}*/

/** OCTOSPI1_WCCR_ADDTR Address double transfer rate **/
#define OCTOSPI1_WCCR_ADDTR		(1 << 11)

#define OCTOSPI1_WCCR_ADMODE_SHIFT		8
#define OCTOSPI1_WCCR_ADMODE_MASK		0x07
/** @defgroup octospi1_wccr_admode ADMODE Address mode
@{*/
/**@}*/


#define OCTOSPI1_WCCR_ISIZE_SHIFT		4
#define OCTOSPI1_WCCR_ISIZE_MASK		0x03
/** @defgroup octospi1_wccr_isize ISIZE Instruction size
@{*/
/**@}*/

/** OCTOSPI1_WCCR_IDTR Instruction double transfer rate **/
#define OCTOSPI1_WCCR_IDTR		(1 << 3)

#define OCTOSPI1_WCCR_IMODE_SHIFT		0
#define OCTOSPI1_WCCR_IMODE_MASK		0x07
/** @defgroup octospi1_wccr_imode IMODE Instruction mode
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_wtcr WTCR write timing configuration register
@{*/


#define OCTOSPI1_WTCR_DCYC_SHIFT		0
#define OCTOSPI1_WTCR_DCYC_MASK		0x1f
/** @defgroup octospi1_wtcr_dcyc DCYC Number of dummy cycles
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_wir WIR write instruction register
@{*/


#define OCTOSPI1_WIR_INSTRUCTION_SHIFT		0
#define OCTOSPI1_WIR_INSTRUCTION_MASK		0xffffffff
/** @defgroup octospi1_wir_instruction INSTRUCTION INSTRUCTION
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_wabr WABR write alternate bytes register
@{*/


#define OCTOSPI1_WABR_ALTERNATE_SHIFT		0
#define OCTOSPI1_WABR_ALTERNATE_MASK		0xffffffff
/** @defgroup octospi1_wabr_alternate ALTERNATE Alternate bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_hlcr HLCR HyperBusTM latency configuration register
@{*/


#define OCTOSPI1_HLCR_TRWR_SHIFT		16
#define OCTOSPI1_HLCR_TRWR_MASK		0xff
/** @defgroup octospi1_hlcr_trwr TRWR Read write recovery time
@{*/
/**@}*/


#define OCTOSPI1_HLCR_TACC_SHIFT		8
#define OCTOSPI1_HLCR_TACC_MASK		0xff
/** @defgroup octospi1_hlcr_tacc TACC Access time
@{*/
/**@}*/

/** OCTOSPI1_HLCR_WZL Write zero latency **/
#define OCTOSPI1_HLCR_WZL		(1 << 1)
/** OCTOSPI1_HLCR_LM Latency mode **/
#define OCTOSPI1_HLCR_LM		(1 << 0)

/**@}*/

/** @defgroup octospi1_hwcfgr HWCFGR HW configuration register
@{*/


#define OCTOSPI1_HWCFGR_MST_SHIFT		28
#define OCTOSPI1_HWCFGR_MST_MASK		0x0f
/** @defgroup octospi1_hwcfgr_mst MST Master
@{*/
/**@}*/


#define OCTOSPI1_HWCFGR_MMW_SHIFT		24
#define OCTOSPI1_HWCFGR_MMW_MASK		0x0f
/** @defgroup octospi1_hwcfgr_mmw MMW Memory map write
@{*/
/**@}*/


#define OCTOSPI1_HWCFGR_IDL_SHIFT		20
#define OCTOSPI1_HWCFGR_IDL_MASK		0x0f
/** @defgroup octospi1_hwcfgr_idl IDL ID Length
@{*/
/**@}*/


#define OCTOSPI1_HWCFGR_PRES_SHIFT		12
#define OCTOSPI1_HWCFGR_PRES_MASK		0xff
/** @defgroup octospi1_hwcfgr_pres PRES Prescaler
@{*/
/**@}*/


#define OCTOSPI1_HWCFGR_FIFO_SHIFT		4
#define OCTOSPI1_HWCFGR_FIFO_MASK		0xff
/** @defgroup octospi1_hwcfgr_fifo FIFO FIFO depth
@{*/
/**@}*/


#define OCTOSPI1_HWCFGR_AXI_SHIFT		0
#define OCTOSPI1_HWCFGR_AXI_MASK		0x0f
/** @defgroup octospi1_hwcfgr_axi AXI AXI interface
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_ver VER version register
@{*/


#define OCTOSPI1_VER_VER_SHIFT		0
#define OCTOSPI1_VER_VER_MASK		0xff
/** @defgroup octospi1_ver_ver VER Version
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_id ID identification
@{*/


#define OCTOSPI1_ID_ID_SHIFT		0
#define OCTOSPI1_ID_ID_MASK		0xffffffff
/** @defgroup octospi1_id_id ID Identification
@{*/
/**@}*/


/**@}*/

/** @defgroup octospi1_mid MID magic ID
@{*/


#define OCTOSPI1_MID_MID_SHIFT		0
#define OCTOSPI1_MID_MID_MASK		0xffffffff
/** @defgroup octospi1_mid_mid MID Magic ID
@{*/
/**@}*/


/**@}*/

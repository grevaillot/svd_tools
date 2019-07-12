#pragma once 

/* --- HRTIM_Master: High Resolution Timer: Master Timers ----------- */

/** @defgroup hrtim_master_registers High Resolution Timer: Master       Timers Register
@{*/

/** HRTIM_Master_MCR Master Timer Control Register **/
#define HRTIM_Master_MCR			MMIO32(HRTIM_Master_BASE + 0x00)
/** HRTIM_Master_MISR Master Timer Interrupt Status Register **/
#define HRTIM_Master_MISR			MMIO32(HRTIM_Master_BASE + 0x04)
/** HRTIM_Master_MICR Master Timer Interrupt Clear Register **/
#define HRTIM_Master_MICR			MMIO32(HRTIM_Master_BASE + 0x08)
/** HRTIM_Master_MDIER HRTIM Master Timer DMA / Interrupt Enable Register **/
#define HRTIM_Master_MDIER			MMIO32(HRTIM_Master_BASE + 0x0c)
/** HRTIM_Master_MCNTR Master Timer Counter Register **/
#define HRTIM_Master_MCNTR			MMIO32(HRTIM_Master_BASE + 0x10)
/** HRTIM_Master_MPER Master Timer Period Register **/
#define HRTIM_Master_MPER			MMIO32(HRTIM_Master_BASE + 0x14)
/** HRTIM_Master_MREP Master Timer Repetition Register **/
#define HRTIM_Master_MREP			MMIO32(HRTIM_Master_BASE + 0x18)
/** HRTIM_Master_MCMP1R Master Timer Compare 1 Register **/
#define HRTIM_Master_MCMP1R			MMIO32(HRTIM_Master_BASE + 0x1c)
/** HRTIM_Master_MCMP2R Master Timer Compare 2 Register **/
#define HRTIM_Master_MCMP2R			MMIO32(HRTIM_Master_BASE + 0x24)
/** HRTIM_Master_MCMP3R Master Timer Compare 3 Register **/
#define HRTIM_Master_MCMP3R			MMIO32(HRTIM_Master_BASE + 0x28)
/** HRTIM_Master_MCMP4R Master Timer Compare 4 Register **/
#define HRTIM_Master_MCMP4R			MMIO32(HRTIM_Master_BASE + 0x2c)

/**@}*/


/** @defgroup hrtim_master_mcr MCR Master Timer Control Register
@{*/


#define HRTIM_Master_MCR_BRSTDMA_SHIFT		30
#define HRTIM_Master_MCR_BRSTDMA_MASK		0x03
/** @defgroup hrtim_master_mcr_brstdma BRSTDMA Burst DMA Update
@{*/
/**@}*/

/** HRTIM_Master_MCR_MREPU Master Timer Repetition update **/
#define HRTIM_Master_MCR_MREPU		(1 << 29)
/** HRTIM_Master_MCR_PREEN Preload enable **/
#define HRTIM_Master_MCR_PREEN		(1 << 27)

#define HRTIM_Master_MCR_DACSYNC_SHIFT		25
#define HRTIM_Master_MCR_DACSYNC_MASK		0x03
/** @defgroup hrtim_master_mcr_dacsync DACSYNC AC Synchronization
@{*/
/**@}*/

/** HRTIM_Master_MCR_TFCEN Timer F counter enable **/
#define HRTIM_Master_MCR_TFCEN		(1 << 22)
/** HRTIM_Master_MCR_TECEN Timer E counter enable **/
#define HRTIM_Master_MCR_TECEN		(1 << 21)
/** HRTIM_Master_MCR_TDCEN Timer D counter enable **/
#define HRTIM_Master_MCR_TDCEN		(1 << 20)
/** HRTIM_Master_MCR_TCCEN Timer C counter enable **/
#define HRTIM_Master_MCR_TCCEN		(1 << 19)
/** HRTIM_Master_MCR_TBCEN Timer B counter enable **/
#define HRTIM_Master_MCR_TBCEN		(1 << 18)
/** HRTIM_Master_MCR_TACEN Timer A counter enable **/
#define HRTIM_Master_MCR_TACEN		(1 << 17)
/** HRTIM_Master_MCR_MCEN Master Counter enable **/
#define HRTIM_Master_MCR_MCEN		(1 << 16)

#define HRTIM_Master_MCR_SYNC_SRC_SHIFT		14
#define HRTIM_Master_MCR_SYNC_SRC_MASK		0x03
/** @defgroup hrtim_master_mcr_sync_src SYNCSRC Synchronization source
@{*/
/**@}*/


#define HRTIM_Master_MCR_SYNC_OUT_SHIFT		12
#define HRTIM_Master_MCR_SYNC_OUT_MASK		0x03
/** @defgroup hrtim_master_mcr_sync_out SYNCOUT Synchronization output
@{*/
/**@}*/

/** HRTIM_Master_MCR_SYNCSTRTM Synchronization Starts Master **/
#define HRTIM_Master_MCR_SYNCSTRTM		(1 << 11)
/** HRTIM_Master_MCR_SYNCRSTM Synchronization Resets Master **/
#define HRTIM_Master_MCR_SYNCRSTM		(1 << 10)

#define HRTIM_Master_MCR_SYNC_IN_SHIFT		8
#define HRTIM_Master_MCR_SYNC_IN_MASK		0x03
/** @defgroup hrtim_master_mcr_sync_in SYNCIN synchronization input
@{*/
/**@}*/


#define HRTIM_Master_MCR_INTLVD_SHIFT		6
#define HRTIM_Master_MCR_INTLVD_MASK		0x03
/** @defgroup hrtim_master_mcr_intlvd INTLVD Interleaved mode
@{*/
/**@}*/

/** HRTIM_Master_MCR_HALF Half mode enable **/
#define HRTIM_Master_MCR_HALF		(1 << 5)
/** HRTIM_Master_MCR_RETRIG Master Re-triggerable mode **/
#define HRTIM_Master_MCR_RETRIG		(1 << 4)
/** HRTIM_Master_MCR_CONT Master Continuous mode **/
#define HRTIM_Master_MCR_CONT		(1 << 3)

#define HRTIM_Master_MCR_CK_PSC_SHIFT		0
#define HRTIM_Master_MCR_CK_PSC_MASK		0x07
/** @defgroup hrtim_master_mcr_ck_psc CKPSC HRTIM Master Clock prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_master_misr MISR Master Timer Interrupt Status Register
@{*/

/** HRTIM_Master_MISR_MUPD Master Update Interrupt Flag **/
#define HRTIM_Master_MISR_MUPD		(1 << 6)
/** HRTIM_Master_MISR_SYNC Sync Input Interrupt Flag **/
#define HRTIM_Master_MISR_SYNC		(1 << 5)
/** HRTIM_Master_MISR_MREP Master Repetition Interrupt Flag **/
#define HRTIM_Master_MISR_MREP		(1 << 4)
/** HRTIM_Master_MISR_MCMP4 Master Compare 4 Interrupt Flag **/
#define HRTIM_Master_MISR_MCMP4		(1 << 3)
/** HRTIM_Master_MISR_MCMP3 Master Compare 3 Interrupt Flag **/
#define HRTIM_Master_MISR_MCMP3		(1 << 2)
/** HRTIM_Master_MISR_MCMP2 Master Compare 2 Interrupt Flag **/
#define HRTIM_Master_MISR_MCMP2		(1 << 1)
/** HRTIM_Master_MISR_MCMP1 Master Compare 1 Interrupt Flag **/
#define HRTIM_Master_MISR_MCMP1		(1 << 0)

/**@}*/

/** @defgroup hrtim_master_micr MICR Master Timer Interrupt Clear Register
@{*/

/** HRTIM_Master_MICR_MUPDC Master update Interrupt flag clear **/
#define HRTIM_Master_MICR_MUPDC		(1 << 6)
/** HRTIM_Master_MICR_SYNCC Sync Input Interrupt flag clear **/
#define HRTIM_Master_MICR_SYNCC		(1 << 5)
/** HRTIM_Master_MICR_MREPC Repetition Interrupt flag clear **/
#define HRTIM_Master_MICR_MREPC		(1 << 4)
/** HRTIM_Master_MICR_MCMP4C Master Compare 4 Interrupt flag clear **/
#define HRTIM_Master_MICR_MCMP4C		(1 << 3)
/** HRTIM_Master_MICR_MCMP3C Master Compare 3 Interrupt flag clear **/
#define HRTIM_Master_MICR_MCMP3C		(1 << 2)
/** HRTIM_Master_MICR_MCMP2C Master Compare 2 Interrupt flag clear **/
#define HRTIM_Master_MICR_MCMP2C		(1 << 1)
/** HRTIM_Master_MICR_MCMP1C Master Compare 1 Interrupt flag clear **/
#define HRTIM_Master_MICR_MCMP1C		(1 << 0)

/**@}*/

/** @defgroup hrtim_master_mdier MDIER HRTIM Master Timer DMA / Interrupt Enable Register
@{*/

/** HRTIM_Master_MDIER_MUPDDE MUPDDE **/
#define HRTIM_Master_MDIER_MUPDDE		(1 << 22)
/** HRTIM_Master_MDIER_SYNCDE SYNCDE **/
#define HRTIM_Master_MDIER_SYNCDE		(1 << 21)
/** HRTIM_Master_MDIER_MREPDE MREPDE **/
#define HRTIM_Master_MDIER_MREPDE		(1 << 20)
/** HRTIM_Master_MDIER_MCMP4DE MCMP4DE **/
#define HRTIM_Master_MDIER_MCMP4DE		(1 << 19)
/** HRTIM_Master_MDIER_MCMP3DE MCMP3DE **/
#define HRTIM_Master_MDIER_MCMP3DE		(1 << 18)
/** HRTIM_Master_MDIER_MCMP2DE MCMP2DE **/
#define HRTIM_Master_MDIER_MCMP2DE		(1 << 17)
/** HRTIM_Master_MDIER_MCMP1DE MCMP1DE **/
#define HRTIM_Master_MDIER_MCMP1DE		(1 << 16)
/** HRTIM_Master_MDIER_MUPDIE MUPDIE **/
#define HRTIM_Master_MDIER_MUPDIE		(1 << 6)
/** HRTIM_Master_MDIER_SYNCIE SYNCIE **/
#define HRTIM_Master_MDIER_SYNCIE		(1 << 5)
/** HRTIM_Master_MDIER_MREPIE MREPIE **/
#define HRTIM_Master_MDIER_MREPIE		(1 << 4)
/** HRTIM_Master_MDIER_MCMP4IE MCMP4IE **/
#define HRTIM_Master_MDIER_MCMP4IE		(1 << 3)
/** HRTIM_Master_MDIER_MCMP3IE MCMP3IE **/
#define HRTIM_Master_MDIER_MCMP3IE		(1 << 2)
/** HRTIM_Master_MDIER_MCMP2IE MCMP2IE **/
#define HRTIM_Master_MDIER_MCMP2IE		(1 << 1)
/** HRTIM_Master_MDIER_MCMP1IE MCMP1IE **/
#define HRTIM_Master_MDIER_MCMP1IE		(1 << 0)

/**@}*/

/** @defgroup hrtim_master_mcntr MCNTR Master Timer Counter Register
@{*/


#define HRTIM_Master_MCNTR_MCNT_SHIFT		0
#define HRTIM_Master_MCNTR_MCNT_MASK		0xffff
/** @defgroup hrtim_master_mcntr_mcnt MCNT Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_master_mper MPER Master Timer Period Register
@{*/


#define HRTIM_Master_MPER_MPER_SHIFT		0
#define HRTIM_Master_MPER_MPER_MASK		0xffff
/** @defgroup hrtim_master_mper_mper MPER Master Timer Period value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_master_mrep MREP Master Timer Repetition Register
@{*/


#define HRTIM_Master_MREP_MREP_SHIFT		0
#define HRTIM_Master_MREP_MREP_MASK		0xff
/** @defgroup hrtim_master_mrep_mrep MREP Master Timer Repetition counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_master_mcmp1r MCMP1R Master Timer Compare 1 Register
@{*/


#define HRTIM_Master_MCMP1R_MCMP1_SHIFT		0
#define HRTIM_Master_MCMP1R_MCMP1_MASK		0xffff
/** @defgroup hrtim_master_mcmp1r_mcmp1 MCMP1 Master Timer Compare 1 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_master_mcmp2r MCMP2R Master Timer Compare 2 Register
@{*/


#define HRTIM_Master_MCMP2R_MCMP2_SHIFT		0
#define HRTIM_Master_MCMP2R_MCMP2_MASK		0xffff
/** @defgroup hrtim_master_mcmp2r_mcmp2 MCMP2 Master Timer Compare 2 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_master_mcmp3r MCMP3R Master Timer Compare 3 Register
@{*/


#define HRTIM_Master_MCMP3R_MCMP3_SHIFT		0
#define HRTIM_Master_MCMP3R_MCMP3_MASK		0xffff
/** @defgroup hrtim_master_mcmp3r_mcmp3 MCMP3 Master Timer Compare 3 value
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_master_mcmp4r MCMP4R Master Timer Compare 4 Register
@{*/


#define HRTIM_Master_MCMP4R_MCMP4_SHIFT		0
#define HRTIM_Master_MCMP4R_MCMP4_MASK		0xffff
/** @defgroup hrtim_master_mcmp4r_mcmp4 MCMP4 Master Timer Compare 4 value
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- ICM: Integrity Check Monitor --------------------------------- */

/** @defgroup icm_registers Integrity Check Monitor Register
@{*/

/** ICM_ICM_CFG Configuration Register **/
#define ICM_ICM_CFG			MMIO32(ICM_BASE + 0x00)
/** ICM_ICM_CTRL Control Register **/
#define ICM_ICM_CTRL			MMIO32(ICM_BASE + 0x04)
/** ICM_ICM_SR Status Register **/
#define ICM_ICM_SR			MMIO32(ICM_BASE + 0x08)
/** ICM_ICM_IER Interrupt Enable Register **/
#define ICM_ICM_IER			MMIO32(ICM_BASE + 0x10)
/** ICM_ICM_IDR Interrupt Disable Register **/
#define ICM_ICM_IDR			MMIO32(ICM_BASE + 0x14)
/** ICM_ICM_IMR Interrupt Mask Register **/
#define ICM_ICM_IMR			MMIO32(ICM_BASE + 0x18)
/** ICM_ICM_ISR Interrupt Status Register **/
#define ICM_ICM_ISR			MMIO32(ICM_BASE + 0x1c)
/** ICM_ICM_UASR Undefined Access Status Register **/
#define ICM_ICM_UASR			MMIO32(ICM_BASE + 0x20)
/** ICM_ICM_DSCR Region Descriptor Area Start Address Register **/
#define ICM_ICM_DSCR			MMIO32(ICM_BASE + 0x30)
/** ICM_ICM_HASH Region Hash Area Start Address Register **/
#define ICM_ICM_HASH			MMIO32(ICM_BASE + 0x34)
/** ICM_ICM_UIHVAL[0] User Initial Hash Value 0 Register 0 **/
#define ICM_ICM_UIHVAL[0]			MMIO32(ICM_BASE + 0x38)
/** ICM_ICM_UIHVAL[1] User Initial Hash Value 0 Register 0 **/
#define ICM_ICM_UIHVAL[1]			MMIO32(ICM_BASE + 0x3c)
/** ICM_ICM_UIHVAL[2] User Initial Hash Value 0 Register 0 **/
#define ICM_ICM_UIHVAL[2]			MMIO32(ICM_BASE + 0x40)
/** ICM_ICM_UIHVAL[3] User Initial Hash Value 0 Register 0 **/
#define ICM_ICM_UIHVAL[3]			MMIO32(ICM_BASE + 0x44)
/** ICM_ICM_UIHVAL[4] User Initial Hash Value 0 Register 0 **/
#define ICM_ICM_UIHVAL[4]			MMIO32(ICM_BASE + 0x48)
/** ICM_ICM_UIHVAL[5] User Initial Hash Value 0 Register 0 **/
#define ICM_ICM_UIHVAL[5]			MMIO32(ICM_BASE + 0x4c)
/** ICM_ICM_UIHVAL[6] User Initial Hash Value 0 Register 0 **/
#define ICM_ICM_UIHVAL[6]			MMIO32(ICM_BASE + 0x50)
/** ICM_ICM_UIHVAL[7] User Initial Hash Value 0 Register 0 **/
#define ICM_ICM_UIHVAL[7]			MMIO32(ICM_BASE + 0x54)

/**@}*/


/** @defgroup icm_icm_cfg ICMCFG Configuration Register
@{*/


#define ICM_ICM_CFG_UALGO_SHIFT		13
#define ICM_ICM_CFG_UALGO_MASK		0x07
/** @defgroup icm_icm_cfg_ualgo UALGO User SHA Algorithm
@{*/
/**@}*/

/** ICM_ICM_CFG_UIHASH User Initial Hash Value **/
#define ICM_ICM_CFG_UIHASH		(1 << 12)
/** ICM_ICM_CFG_DUALBUFF Dual Input Buffer **/
#define ICM_ICM_CFG_DUALBUFF		(1 << 9)
/** ICM_ICM_CFG_ASCD Automatic Switch To Compare Digest **/
#define ICM_ICM_CFG_ASCD		(1 << 8)

#define ICM_ICM_CFG_BBC_SHIFT		4
#define ICM_ICM_CFG_BBC_MASK		0x0f
/** @defgroup icm_icm_cfg_bbc BBC Bus Burden Control
@{*/
/**@}*/

/** ICM_ICM_CFG_SLBDIS Secondary List Branching Disable **/
#define ICM_ICM_CFG_SLBDIS		(1 << 2)
/** ICM_ICM_CFG_EOMDIS End of Monitoring Disable **/
#define ICM_ICM_CFG_EOMDIS		(1 << 1)
/** ICM_ICM_CFG_WBDIS Write Back Disable **/
#define ICM_ICM_CFG_WBDIS		(1 << 0)

/**@}*/

/** @defgroup icm_icm_ctrl ICMCTRL Control Register
@{*/


#define ICM_ICM_CTRL_RMEN_SHIFT		12
#define ICM_ICM_CTRL_RMEN_MASK		0x0f
/** @defgroup icm_icm_ctrl_rmen RMEN Region Monitoring Enable
@{*/
/**@}*/


#define ICM_ICM_CTRL_RMDIS_SHIFT		8
#define ICM_ICM_CTRL_RMDIS_MASK		0x0f
/** @defgroup icm_icm_ctrl_rmdis RMDIS Region Monitoring Disable
@{*/
/**@}*/


#define ICM_ICM_CTRL_REHASH_SHIFT		4
#define ICM_ICM_CTRL_REHASH_MASK		0x0f
/** @defgroup icm_icm_ctrl_rehash REHASH Recompute Internal Hash
@{*/
/**@}*/

/** ICM_ICM_CTRL_SWRST Software Reset **/
#define ICM_ICM_CTRL_SWRST		(1 << 2)
/** ICM_ICM_CTRL_DISABLE ICM Disable Register **/
#define ICM_ICM_CTRL_DISABLE		(1 << 1)
/** ICM_ICM_CTRL_ENABLE ICM Enable **/
#define ICM_ICM_CTRL_ENABLE		(1 << 0)

/**@}*/

/** @defgroup icm_icm_sr ICMSR Status Register
@{*/


#define ICM_ICM_SR_RMDIS_SHIFT		12
#define ICM_ICM_SR_RMDIS_MASK		0x0f
/** @defgroup icm_icm_sr_rmdis RMDIS Region Monitoring Disabled Status
@{*/
/**@}*/


#define ICM_ICM_SR_RAWRMDIS_SHIFT		8
#define ICM_ICM_SR_RAWRMDIS_MASK		0x0f
/** @defgroup icm_icm_sr_rawrmdis RAWRMDIS Region Monitoring Disabled Raw Status
@{*/
/**@}*/

/** ICM_ICM_SR_ENABLE ICM Controller Enable Register **/
#define ICM_ICM_SR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup icm_icm_ier ICMIER Interrupt Enable Register
@{*/

/** ICM_ICM_IER_URAD Undefined Register Access Detection Interrupt Enable **/
#define ICM_ICM_IER_URAD		(1 << 24)

#define ICM_ICM_IER_RSU_SHIFT		20
#define ICM_ICM_IER_RSU_MASK		0x0f
/** @defgroup icm_icm_ier_rsu RSU Region Status Updated Interrupt Disable
@{*/
/**@}*/


#define ICM_ICM_IER_REC_SHIFT		16
#define ICM_ICM_IER_REC_MASK		0x0f
/** @defgroup icm_icm_ier_rec REC Region End bit Condition Detected Interrupt Enable
@{*/
/**@}*/


#define ICM_ICM_IER_RWC_SHIFT		12
#define ICM_ICM_IER_RWC_MASK		0x0f
/** @defgroup icm_icm_ier_rwc RWC Region Wrap Condition detected Interrupt Enable
@{*/
/**@}*/


#define ICM_ICM_IER_RBE_SHIFT		8
#define ICM_ICM_IER_RBE_MASK		0x0f
/** @defgroup icm_icm_ier_rbe RBE Region Bus Error Interrupt Enable
@{*/
/**@}*/


#define ICM_ICM_IER_RDM_SHIFT		4
#define ICM_ICM_IER_RDM_MASK		0x0f
/** @defgroup icm_icm_ier_rdm RDM Region Digest Mismatch Interrupt Enable
@{*/
/**@}*/


#define ICM_ICM_IER_RHC_SHIFT		0
#define ICM_ICM_IER_RHC_MASK		0x0f
/** @defgroup icm_icm_ier_rhc RHC Region Hash Completed Interrupt Enable
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_idr ICMIDR Interrupt Disable Register
@{*/

/** ICM_ICM_IDR_URAD Undefined Register Access Detection Interrupt Disable **/
#define ICM_ICM_IDR_URAD		(1 << 24)

#define ICM_ICM_IDR_RSU_SHIFT		20
#define ICM_ICM_IDR_RSU_MASK		0x0f
/** @defgroup icm_icm_idr_rsu RSU Region Status Updated Interrupt Disable
@{*/
/**@}*/


#define ICM_ICM_IDR_REC_SHIFT		16
#define ICM_ICM_IDR_REC_MASK		0x0f
/** @defgroup icm_icm_idr_rec REC Region End bit Condition detected Interrupt Disable
@{*/
/**@}*/


#define ICM_ICM_IDR_RWC_SHIFT		12
#define ICM_ICM_IDR_RWC_MASK		0x0f
/** @defgroup icm_icm_idr_rwc RWC Region Wrap Condition Detected Interrupt Disable
@{*/
/**@}*/


#define ICM_ICM_IDR_RBE_SHIFT		8
#define ICM_ICM_IDR_RBE_MASK		0x0f
/** @defgroup icm_icm_idr_rbe RBE Region Bus Error Interrupt Disable
@{*/
/**@}*/


#define ICM_ICM_IDR_RDM_SHIFT		4
#define ICM_ICM_IDR_RDM_MASK		0x0f
/** @defgroup icm_icm_idr_rdm RDM Region Digest Mismatch Interrupt Disable
@{*/
/**@}*/


#define ICM_ICM_IDR_RHC_SHIFT		0
#define ICM_ICM_IDR_RHC_MASK		0x0f
/** @defgroup icm_icm_idr_rhc RHC Region Hash Completed Interrupt Disable
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_imr ICMIMR Interrupt Mask Register
@{*/

/** ICM_ICM_IMR_URAD Undefined Register Access Detection Interrupt Mask **/
#define ICM_ICM_IMR_URAD		(1 << 24)

#define ICM_ICM_IMR_RSU_SHIFT		20
#define ICM_ICM_IMR_RSU_MASK		0x0f
/** @defgroup icm_icm_imr_rsu RSU Region Status Updated Interrupt Mask
@{*/
/**@}*/


#define ICM_ICM_IMR_REC_SHIFT		16
#define ICM_ICM_IMR_REC_MASK		0x0f
/** @defgroup icm_icm_imr_rec REC Region End bit Condition Detected Interrupt Mask
@{*/
/**@}*/


#define ICM_ICM_IMR_RWC_SHIFT		12
#define ICM_ICM_IMR_RWC_MASK		0x0f
/** @defgroup icm_icm_imr_rwc RWC Region Wrap Condition Detected Interrupt Mask
@{*/
/**@}*/


#define ICM_ICM_IMR_RBE_SHIFT		8
#define ICM_ICM_IMR_RBE_MASK		0x0f
/** @defgroup icm_icm_imr_rbe RBE Region Bus Error Interrupt Mask
@{*/
/**@}*/


#define ICM_ICM_IMR_RDM_SHIFT		4
#define ICM_ICM_IMR_RDM_MASK		0x0f
/** @defgroup icm_icm_imr_rdm RDM Region Digest Mismatch Interrupt Mask
@{*/
/**@}*/


#define ICM_ICM_IMR_RHC_SHIFT		0
#define ICM_ICM_IMR_RHC_MASK		0x0f
/** @defgroup icm_icm_imr_rhc RHC Region Hash Completed Interrupt Mask
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_isr ICMISR Interrupt Status Register
@{*/

/** ICM_ICM_ISR_URAD Undefined Register Access Detection Status **/
#define ICM_ICM_ISR_URAD		(1 << 24)

#define ICM_ICM_ISR_RSU_SHIFT		20
#define ICM_ICM_ISR_RSU_MASK		0x0f
/** @defgroup icm_icm_isr_rsu RSU Region Status Updated Detected
@{*/
/**@}*/


#define ICM_ICM_ISR_REC_SHIFT		16
#define ICM_ICM_ISR_REC_MASK		0x0f
/** @defgroup icm_icm_isr_rec REC Region End bit Condition Detected
@{*/
/**@}*/


#define ICM_ICM_ISR_RWC_SHIFT		12
#define ICM_ICM_ISR_RWC_MASK		0x0f
/** @defgroup icm_icm_isr_rwc RWC Region Wrap Condition Detected
@{*/
/**@}*/


#define ICM_ICM_ISR_RBE_SHIFT		8
#define ICM_ICM_ISR_RBE_MASK		0x0f
/** @defgroup icm_icm_isr_rbe RBE Region Bus Error
@{*/
/**@}*/


#define ICM_ICM_ISR_RDM_SHIFT		4
#define ICM_ICM_ISR_RDM_MASK		0x0f
/** @defgroup icm_icm_isr_rdm RDM Region Digest Mismatch
@{*/
/**@}*/


#define ICM_ICM_ISR_RHC_SHIFT		0
#define ICM_ICM_ISR_RHC_MASK		0x0f
/** @defgroup icm_icm_isr_rhc RHC Region Hash Completed
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_uasr ICMUASR Undefined Access Status Register
@{*/


#define ICM_ICM_UASR_URAT_SHIFT		0
#define ICM_ICM_UASR_URAT_MASK		0x07
/** @defgroup icm_icm_uasr_urat URAT Undefined Register Access Trace
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_dscr ICMDSCR Region Descriptor Area Start Address Register
@{*/


#define ICM_ICM_DSCR_DASA_SHIFT		6
#define ICM_ICM_DSCR_DASA_MASK		0x3ffffff
/** @defgroup icm_icm_dscr_dasa DASA Descriptor Area Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_hash ICMHASH Region Hash Area Start Address Register
@{*/


#define ICM_ICM_HASH_HASA_SHIFT		7
#define ICM_ICM_HASH_HASA_MASK		0x1ffffff
/** @defgroup icm_icm_hash_hasa HASA Hash Area Start Address
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_uihval[0] ICMUIHVAL[0] User Initial Hash Value 0 Register 0
@{*/


#define ICM_ICM_UIHVAL[0]_VAL_SHIFT		0
#define ICM_ICM_UIHVAL[0]_VAL_MASK		0xffffffff
/** @defgroup icm_icm_uihval[0]_val VAL Initial Hash Value
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_uihval[1] ICMUIHVAL[1] User Initial Hash Value 0 Register 0
@{*/


#define ICM_ICM_UIHVAL[1]_VAL_SHIFT		0
#define ICM_ICM_UIHVAL[1]_VAL_MASK		0xffffffff
/** @defgroup icm_icm_uihval[1]_val VAL Initial Hash Value
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_uihval[2] ICMUIHVAL[2] User Initial Hash Value 0 Register 0
@{*/


#define ICM_ICM_UIHVAL[2]_VAL_SHIFT		0
#define ICM_ICM_UIHVAL[2]_VAL_MASK		0xffffffff
/** @defgroup icm_icm_uihval[2]_val VAL Initial Hash Value
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_uihval[3] ICMUIHVAL[3] User Initial Hash Value 0 Register 0
@{*/


#define ICM_ICM_UIHVAL[3]_VAL_SHIFT		0
#define ICM_ICM_UIHVAL[3]_VAL_MASK		0xffffffff
/** @defgroup icm_icm_uihval[3]_val VAL Initial Hash Value
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_uihval[4] ICMUIHVAL[4] User Initial Hash Value 0 Register 0
@{*/


#define ICM_ICM_UIHVAL[4]_VAL_SHIFT		0
#define ICM_ICM_UIHVAL[4]_VAL_MASK		0xffffffff
/** @defgroup icm_icm_uihval[4]_val VAL Initial Hash Value
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_uihval[5] ICMUIHVAL[5] User Initial Hash Value 0 Register 0
@{*/


#define ICM_ICM_UIHVAL[5]_VAL_SHIFT		0
#define ICM_ICM_UIHVAL[5]_VAL_MASK		0xffffffff
/** @defgroup icm_icm_uihval[5]_val VAL Initial Hash Value
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_uihval[6] ICMUIHVAL[6] User Initial Hash Value 0 Register 0
@{*/


#define ICM_ICM_UIHVAL[6]_VAL_SHIFT		0
#define ICM_ICM_UIHVAL[6]_VAL_MASK		0xffffffff
/** @defgroup icm_icm_uihval[6]_val VAL Initial Hash Value
@{*/
/**@}*/


/**@}*/

/** @defgroup icm_icm_uihval[7] ICMUIHVAL[7] User Initial Hash Value 0 Register 0
@{*/


#define ICM_ICM_UIHVAL[7]_VAL_SHIFT		0
#define ICM_ICM_UIHVAL[7]_VAL_MASK		0xffffffff
/** @defgroup icm_icm_uihval[7]_val VAL Initial Hash Value
@{*/
/**@}*/


/**@}*/

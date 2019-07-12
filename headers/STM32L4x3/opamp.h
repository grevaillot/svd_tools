#pragma once 

/* --- OPAMP: Operational amplifiers -------------------------------- */

/** @defgroup opamp_registers Operational amplifiers Register
@{*/

/** OPAMP_OPAMP1_CSR OPAMP1 control/status register **/
#define OPAMP_OPAMP1_CSR			MMIO32(OPAMP_BASE + 0x00)
/** OPAMP_OPAMP1_OTR OPAMP1 offset trimming register in normal mode **/
#define OPAMP_OPAMP1_OTR			MMIO32(OPAMP_BASE + 0x04)
/** OPAMP_OPAMP1_LPOTR OPAMP1 offset trimming register in low-power mode **/
#define OPAMP_OPAMP1_LPOTR			MMIO32(OPAMP_BASE + 0x08)
/** OPAMP_OPAMP2_CSR OPAMP2 control/status register **/
#define OPAMP_OPAMP2_CSR			MMIO32(OPAMP_BASE + 0x10)
/** OPAMP_OPAMP2_OTR OPAMP2 offset trimming register in normal mode **/
#define OPAMP_OPAMP2_OTR			MMIO32(OPAMP_BASE + 0x14)
/** OPAMP_OPAMP2_LPOTR OPAMP2 offset trimming register in low-power mode **/
#define OPAMP_OPAMP2_LPOTR			MMIO32(OPAMP_BASE + 0x18)

/**@}*/


/** @defgroup opamp_opamp1_csr OPAMP1CSR OPAMP1 control/status register
@{*/

/** OPAMP_OPAMP1_CSR_OPA_RANGE Operational amplifier power supply range for stability **/
#define OPAMP_OPAMP1_CSR_OPA_RANGE		(1 << 31)
/** OPAMP_OPAMP1_CSR_CALOUT Operational amplifier calibration output **/
#define OPAMP_OPAMP1_CSR_CALOUT		(1 << 15)
/** OPAMP_OPAMP1_CSR_USERTRIM allows to switch from ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¹ÃƒÆ’Ã¢â‚¬Â¦ÃƒÂ¢Ã¢â€šÂ¬Ã…â€œfactoryÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¾ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ AOP offset trimmed values to AOP offset ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¹ÃƒÆ’Ã¢â‚¬Â¦ÃƒÂ¢Ã¢â€šÂ¬Ã…â€œuserÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¾ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ **/
#define OPAMP_OPAMP1_CSR_USERTRIM		(1 << 14)
/** OPAMP_OPAMP1_CSR_CALSEL Calibration selection **/
#define OPAMP_OPAMP1_CSR_CALSEL		(1 << 13)
/** OPAMP_OPAMP1_CSR_CALON Calibration mode enabled **/
#define OPAMP_OPAMP1_CSR_CALON		(1 << 12)
/** OPAMP_OPAMP1_CSR_VP_SEL Non inverted input selection **/
#define OPAMP_OPAMP1_CSR_VP_SEL		(1 << 10)

#define OPAMP_OPAMP1_CSR_VM_SEL_SHIFT		8
#define OPAMP_OPAMP1_CSR_VM_SEL_MASK		0x03
/** @defgroup opamp_opamp1_csr_vm_sel VMSEL Inverting input selection
@{*/
/**@}*/


#define OPAMP_OPAMP1_CSR_PGA_GAIN_SHIFT		4
#define OPAMP_OPAMP1_CSR_PGA_GAIN_MASK		0x03
/** @defgroup opamp_opamp1_csr_pga_gain PGAGAIN Operational amplifier Programmable amplifier gain value
@{*/
/**@}*/


#define OPAMP_OPAMP1_CSR_OPAMODE_SHIFT		2
#define OPAMP_OPAMP1_CSR_OPAMODE_MASK		0x03
/** @defgroup opamp_opamp1_csr_opamode OPAMODE Operational amplifier PGA mode
@{*/
/**@}*/

/** OPAMP_OPAMP1_CSR_OPALPM Operational amplifier Low Power Mode **/
#define OPAMP_OPAMP1_CSR_OPALPM		(1 << 1)
/** OPAMP_OPAMP1_CSR_OPAEN Operational amplifier Enable **/
#define OPAMP_OPAMP1_CSR_OPAEN		(1 << 0)

/**@}*/

/** @defgroup opamp_opamp1_otr OPAMP1OTR OPAMP1 offset trimming register in normal mode
@{*/


#define OPAMP_OPAMP1_OTR_TRIMOFFSETP_SHIFT		8
#define OPAMP_OPAMP1_OTR_TRIMOFFSETP_MASK		0x1f
/** @defgroup opamp_opamp1_otr_trimoffsetp TRIMOFFSETP Trim for PMOS differential pairs
@{*/
/**@}*/


#define OPAMP_OPAMP1_OTR_TRIMOFFSETN_SHIFT		0
#define OPAMP_OPAMP1_OTR_TRIMOFFSETN_MASK		0x1f
/** @defgroup opamp_opamp1_otr_trimoffsetn TRIMOFFSETN Trim for NMOS differential pairs
@{*/
/**@}*/


/**@}*/

/** @defgroup opamp_opamp1_lpotr OPAMP1LPOTR OPAMP1 offset trimming register in low-power mode
@{*/


#define OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_SHIFT		8
#define OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETP_MASK		0x1f
/** @defgroup opamp_opamp1_lpotr_trimlpoffsetp TRIMLPOFFSETP Trim for PMOS differential pairs
@{*/
/**@}*/


#define OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_SHIFT		0
#define OPAMP_OPAMP1_LPOTR_TRIMLPOFFSETN_MASK		0x1f
/** @defgroup opamp_opamp1_lpotr_trimlpoffsetn TRIMLPOFFSETN Trim for NMOS differential pairs
@{*/
/**@}*/


/**@}*/

/** @defgroup opamp_opamp2_csr OPAMP2CSR OPAMP2 control/status register
@{*/

/** OPAMP_OPAMP2_CSR_CALOUT Operational amplifier calibration output **/
#define OPAMP_OPAMP2_CSR_CALOUT		(1 << 15)
/** OPAMP_OPAMP2_CSR_USERTRIM allows to switch from ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¹ÃƒÆ’Ã¢â‚¬Â¦ÃƒÂ¢Ã¢â€šÂ¬Ã…â€œfactoryÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¾ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ AOP offset trimmed values to AOP offset ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¹ÃƒÆ’Ã¢â‚¬Â¦ÃƒÂ¢Ã¢â€šÂ¬Ã…â€œuserÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¾ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ **/
#define OPAMP_OPAMP2_CSR_USERTRIM		(1 << 14)
/** OPAMP_OPAMP2_CSR_CALSEL Calibration selection **/
#define OPAMP_OPAMP2_CSR_CALSEL		(1 << 13)
/** OPAMP_OPAMP2_CSR_CALON Calibration mode enabled **/
#define OPAMP_OPAMP2_CSR_CALON		(1 << 12)
/** OPAMP_OPAMP2_CSR_VP_SEL Non inverted input selection **/
#define OPAMP_OPAMP2_CSR_VP_SEL		(1 << 10)

#define OPAMP_OPAMP2_CSR_VM_SEL_SHIFT		8
#define OPAMP_OPAMP2_CSR_VM_SEL_MASK		0x03
/** @defgroup opamp_opamp2_csr_vm_sel VMSEL Inverting input selection
@{*/
/**@}*/


#define OPAMP_OPAMP2_CSR_PGA_GAIN_SHIFT		4
#define OPAMP_OPAMP2_CSR_PGA_GAIN_MASK		0x03
/** @defgroup opamp_opamp2_csr_pga_gain PGAGAIN Operational amplifier Programmable amplifier gain value
@{*/
/**@}*/


#define OPAMP_OPAMP2_CSR_OPAMODE_SHIFT		2
#define OPAMP_OPAMP2_CSR_OPAMODE_MASK		0x03
/** @defgroup opamp_opamp2_csr_opamode OPAMODE Operational amplifier PGA mode
@{*/
/**@}*/

/** OPAMP_OPAMP2_CSR_OPALPM Operational amplifier Low Power Mode **/
#define OPAMP_OPAMP2_CSR_OPALPM		(1 << 1)
/** OPAMP_OPAMP2_CSR_OPAEN Operational amplifier Enable **/
#define OPAMP_OPAMP2_CSR_OPAEN		(1 << 0)

/**@}*/

/** @defgroup opamp_opamp2_otr OPAMP2OTR OPAMP2 offset trimming register in normal mode
@{*/


#define OPAMP_OPAMP2_OTR_TRIMOFFSETP_SHIFT		8
#define OPAMP_OPAMP2_OTR_TRIMOFFSETP_MASK		0x1f
/** @defgroup opamp_opamp2_otr_trimoffsetp TRIMOFFSETP Trim for PMOS differential pairs
@{*/
/**@}*/


#define OPAMP_OPAMP2_OTR_TRIMOFFSETN_SHIFT		0
#define OPAMP_OPAMP2_OTR_TRIMOFFSETN_MASK		0x1f
/** @defgroup opamp_opamp2_otr_trimoffsetn TRIMOFFSETN Trim for NMOS differential pairs
@{*/
/**@}*/


/**@}*/

/** @defgroup opamp_opamp2_lpotr OPAMP2LPOTR OPAMP2 offset trimming register in low-power mode
@{*/


#define OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_SHIFT		8
#define OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETP_MASK		0x1f
/** @defgroup opamp_opamp2_lpotr_trimlpoffsetp TRIMLPOFFSETP Trim for PMOS differential pairs
@{*/
/**@}*/


#define OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_SHIFT		0
#define OPAMP_OPAMP2_LPOTR_TRIMLPOFFSETN_MASK		0x1f
/** @defgroup opamp_opamp2_lpotr_trimlpoffsetn TRIMLPOFFSETN Trim for NMOS differential pairs
@{*/
/**@}*/


/**@}*/

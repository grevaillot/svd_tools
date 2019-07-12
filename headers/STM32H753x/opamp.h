#pragma once 

/* --- OPAMP: Operational amplifiers -------------------------------- */

/** @defgroup opamp_registers Operational amplifiers Register
@{*/

/** OPAMP_OPAMP1_CSR OPAMP1 control/status register **/
#define OPAMP_OPAMP1_CSR			MMIO32(OPAMP_BASE + 0x00)
/** OPAMP_OPAMP1_OTR OPAMP1 offset trimming register in normal mode **/
#define OPAMP_OPAMP1_OTR			MMIO32(OPAMP_BASE + 0x04)
/** OPAMP_OPAMP1_HSOTR OPAMP1 offset trimming register in low-power mode **/
#define OPAMP_OPAMP1_HSOTR			MMIO32(OPAMP_BASE + 0x08)
/** OPAMP_OPAMP2_CSR OPAMP2 control/status register **/
#define OPAMP_OPAMP2_CSR			MMIO32(OPAMP_BASE + 0x10)
/** OPAMP_OPAMP2_OTR OPAMP2 offset trimming register in normal mode **/
#define OPAMP_OPAMP2_OTR			MMIO32(OPAMP_BASE + 0x14)
/** OPAMP_OPAMP2_HSOTR OPAMP2 offset trimming register in low-power mode **/
#define OPAMP_OPAMP2_HSOTR			MMIO32(OPAMP_BASE + 0x18)

/**@}*/


/** @defgroup opamp_opamp1_csr OPAMP1CSR OPAMP1 control/status register
@{*/

/** OPAMP_OPAMP1_CSR_CALOUT Operational amplifier calibration output **/
#define OPAMP_OPAMP1_CSR_CALOUT		(1 << 30)
/** OPAMP_OPAMP1_CSR_TSTREF OPAMP calibration reference voltage output control (reserved for test) **/
#define OPAMP_OPAMP1_CSR_TSTREF		(1 << 29)
/** OPAMP_OPAMP1_CSR_USERTRIM User trimming enable **/
#define OPAMP_OPAMP1_CSR_USERTRIM		(1 << 18)

#define OPAMP_OPAMP1_CSR_PGA_GAIN_SHIFT		14
#define OPAMP_OPAMP1_CSR_PGA_GAIN_MASK		0x0f
/** @defgroup opamp_opamp1_csr_pga_gain PGAGAIN allows to switch from AOP offset trimmed values to AOP offset
@{*/
/**@}*/


#define OPAMP_OPAMP1_CSR_CALSEL_SHIFT		12
#define OPAMP_OPAMP1_CSR_CALSEL_MASK		0x03
/** @defgroup opamp_opamp1_csr_calsel CALSEL Calibration selection
@{*/
/**@}*/

/** OPAMP_OPAMP1_CSR_CALON Calibration mode enabled **/
#define OPAMP_OPAMP1_CSR_CALON		(1 << 11)
/** OPAMP_OPAMP1_CSR_OPAHSM Operational amplifier high-speed mode **/
#define OPAMP_OPAMP1_CSR_OPAHSM		(1 << 8)

#define OPAMP_OPAMP1_CSR_VM_SEL_SHIFT		5
#define OPAMP_OPAMP1_CSR_VM_SEL_MASK		0x03
/** @defgroup opamp_opamp1_csr_vm_sel VMSEL Inverting input selection
@{*/
/**@}*/


#define OPAMP_OPAMP1_CSR_VP_SEL_SHIFT		2
#define OPAMP_OPAMP1_CSR_VP_SEL_MASK		0x03
/** @defgroup opamp_opamp1_csr_vp_sel VPSEL Operational amplifier PGA mode
@{*/
/**@}*/

/** OPAMP_OPAMP1_CSR_FORCE_VP Force internal reference on VP (reserved for test **/
#define OPAMP_OPAMP1_CSR_FORCE_VP		(1 << 1)
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

/** @defgroup opamp_opamp1_hsotr OPAMP1HSOTR OPAMP1 offset trimming register in low-power mode
@{*/


#define OPAMP_OPAMP1_HSOTR_TRIMLPOFFSETP_SHIFT		8
#define OPAMP_OPAMP1_HSOTR_TRIMLPOFFSETP_MASK		0x1f
/** @defgroup opamp_opamp1_hsotr_trimlpoffsetp TRIMLPOFFSETP Trim for PMOS differential pairs
@{*/
/**@}*/


#define OPAMP_OPAMP1_HSOTR_TRIMLPOFFSETN_SHIFT		0
#define OPAMP_OPAMP1_HSOTR_TRIMLPOFFSETN_MASK		0x1f
/** @defgroup opamp_opamp1_hsotr_trimlpoffsetn TRIMLPOFFSETN Trim for NMOS differential pairs
@{*/
/**@}*/


/**@}*/

/** @defgroup opamp_opamp2_csr OPAMP2CSR OPAMP2 control/status register
@{*/

/** OPAMP_OPAMP2_CSR_CALOUT Operational amplifier calibration output **/
#define OPAMP_OPAMP2_CSR_CALOUT		(1 << 30)
/** OPAMP_OPAMP2_CSR_TSTREF OPAMP calibration reference voltage output control (reserved for test) **/
#define OPAMP_OPAMP2_CSR_TSTREF		(1 << 29)
/** OPAMP_OPAMP2_CSR_USERTRIM User trimming enable **/
#define OPAMP_OPAMP2_CSR_USERTRIM		(1 << 18)

#define OPAMP_OPAMP2_CSR_PGA_GAIN_SHIFT		14
#define OPAMP_OPAMP2_CSR_PGA_GAIN_MASK		0x0f
/** @defgroup opamp_opamp2_csr_pga_gain PGAGAIN Operational amplifier Programmable amplifier gain value
@{*/
/**@}*/


#define OPAMP_OPAMP2_CSR_CALSEL_SHIFT		12
#define OPAMP_OPAMP2_CSR_CALSEL_MASK		0x03
/** @defgroup opamp_opamp2_csr_calsel CALSEL Calibration selection
@{*/
/**@}*/

/** OPAMP_OPAMP2_CSR_CALON Calibration mode enabled **/
#define OPAMP_OPAMP2_CSR_CALON		(1 << 11)
/** OPAMP_OPAMP2_CSR_OPAHSM Operational amplifier high-speed mode **/
#define OPAMP_OPAMP2_CSR_OPAHSM		(1 << 8)

#define OPAMP_OPAMP2_CSR_VM_SEL_SHIFT		5
#define OPAMP_OPAMP2_CSR_VM_SEL_MASK		0x03
/** @defgroup opamp_opamp2_csr_vm_sel VMSEL Inverting input selection
@{*/
/**@}*/

/** OPAMP_OPAMP2_CSR_FORCE_VP Force internal reference on VP (reserved for test) **/
#define OPAMP_OPAMP2_CSR_FORCE_VP		(1 << 1)
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

/** @defgroup opamp_opamp2_hsotr OPAMP2HSOTR OPAMP2 offset trimming register in low-power mode
@{*/


#define OPAMP_OPAMP2_HSOTR_TRIMLPOFFSETP_SHIFT		8
#define OPAMP_OPAMP2_HSOTR_TRIMLPOFFSETP_MASK		0x1f
/** @defgroup opamp_opamp2_hsotr_trimlpoffsetp TRIMLPOFFSETP Trim for PMOS differential pairs
@{*/
/**@}*/


#define OPAMP_OPAMP2_HSOTR_TRIMLPOFFSETN_SHIFT		0
#define OPAMP_OPAMP2_HSOTR_TRIMLPOFFSETN_MASK		0x1f
/** @defgroup opamp_opamp2_hsotr_trimlpoffsetn TRIMLPOFFSETN Trim for NMOS differential pairs
@{*/
/**@}*/


/**@}*/

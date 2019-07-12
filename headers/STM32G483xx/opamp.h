#pragma once 

/* --- OPAMP: Operational amplifiers -------------------------------- */

/** @defgroup opamp_registers Operational amplifiers Register
@{*/

/** OPAMP_OPAMP1_CSR OPAMP1 control/status register **/
#define OPAMP_OPAMP1_CSR			MMIO32(OPAMP_BASE + 0x00)
/** OPAMP_OPAMP2_CSR OPAMP2 control/status register **/
#define OPAMP_OPAMP2_CSR			MMIO32(OPAMP_BASE + 0x04)
/** OPAMP_OPAMP3_CSR OPAMP3 control/status register **/
#define OPAMP_OPAMP3_CSR			MMIO32(OPAMP_BASE + 0x08)
/** OPAMP_OPAMP4_CSR OPAMP4 control/status register **/
#define OPAMP_OPAMP4_CSR			MMIO32(OPAMP_BASE + 0x0c)
/** OPAMP_OPAMP5_CSR OPAMP5 control/status register **/
#define OPAMP_OPAMP5_CSR			MMIO32(OPAMP_BASE + 0x10)
/** OPAMP_OPAMP6_CSR OPAMP6 control/status register **/
#define OPAMP_OPAMP6_CSR			MMIO32(OPAMP_BASE + 0x14)
/** OPAMP_OPAMP1_TCMR OPAMP1 control/status register **/
#define OPAMP_OPAMP1_TCMR			MMIO32(OPAMP_BASE + 0x18)
/** OPAMP_OPAMP2_TCMR OPAMP2 control/status register **/
#define OPAMP_OPAMP2_TCMR			MMIO32(OPAMP_BASE + 0x1c)
/** OPAMP_OPAMP3_TCMR OPAMP3 control/status register **/
#define OPAMP_OPAMP3_TCMR			MMIO32(OPAMP_BASE + 0x20)
/** OPAMP_OPAMP4_TCMR OPAMP4 control/status register **/
#define OPAMP_OPAMP4_TCMR			MMIO32(OPAMP_BASE + 0x24)
/** OPAMP_OPAMP5_TCMR OPAMP5 control/status register **/
#define OPAMP_OPAMP5_TCMR			MMIO32(OPAMP_BASE + 0x28)
/** OPAMP_OPAMP6_TCMR OPAMP6 control/status register **/
#define OPAMP_OPAMP6_TCMR			MMIO32(OPAMP_BASE + 0x2c)

/**@}*/


/** @defgroup opamp_opamp1_csr OPAMP1CSR OPAMP1 control/status register
@{*/

/** OPAMP_OPAMP1_CSR_LOCK LOCK **/
#define OPAMP_OPAMP1_CSR_LOCK		(1 << 31)
/** OPAMP_OPAMP1_CSR_CALOUT CALOUT **/
#define OPAMP_OPAMP1_CSR_CALOUT		(1 << 30)

#define OPAMP_OPAMP1_CSR_TRIMOFFSETN_SHIFT		24
#define OPAMP_OPAMP1_CSR_TRIMOFFSETN_MASK		0x1f
/** @defgroup opamp_opamp1_csr_trimoffsetn TRIMOFFSETN TRIMOFFSETN
@{*/
/**@}*/


#define OPAMP_OPAMP1_CSR_TRIMOFFSETP_SHIFT		19
#define OPAMP_OPAMP1_CSR_TRIMOFFSETP_MASK		0x1f
/** @defgroup opamp_opamp1_csr_trimoffsetp TRIMOFFSETP TRIMOFFSETP
@{*/
/**@}*/


#define OPAMP_OPAMP1_CSR_PGA_GAIN_SHIFT		14
#define OPAMP_OPAMP1_CSR_PGA_GAIN_MASK		0x1f
/** @defgroup opamp_opamp1_csr_pga_gain PGAGAIN PGA_GAIN
@{*/
/**@}*/


#define OPAMP_OPAMP1_CSR_CALSEL_SHIFT		12
#define OPAMP_OPAMP1_CSR_CALSEL_MASK		0x03
/** @defgroup opamp_opamp1_csr_calsel CALSEL CALSEL
@{*/
/**@}*/

/** OPAMP_OPAMP1_CSR_CALON CALON **/
#define OPAMP_OPAMP1_CSR_CALON		(1 << 11)
/** OPAMP_OPAMP1_CSR_OPAINTOEN OPAINTOEN **/
#define OPAMP_OPAMP1_CSR_OPAINTOEN		(1 << 8)
/** OPAMP_OPAMP1_CSR_OPAHSM OPAHSM **/
#define OPAMP_OPAMP1_CSR_OPAHSM		(1 << 7)

#define OPAMP_OPAMP1_CSR_VM_SEL_SHIFT		5
#define OPAMP_OPAMP1_CSR_VM_SEL_MASK		0x03
/** @defgroup opamp_opamp1_csr_vm_sel VMSEL VM_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP1_CSR_USERTRIM USERTRIM **/
#define OPAMP_OPAMP1_CSR_USERTRIM		(1 << 4)

#define OPAMP_OPAMP1_CSR_VP_SEL_SHIFT		2
#define OPAMP_OPAMP1_CSR_VP_SEL_MASK		0x03
/** @defgroup opamp_opamp1_csr_vp_sel VPSEL VP_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP1_CSR_FORCE_VP FORCE_VP **/
#define OPAMP_OPAMP1_CSR_FORCE_VP		(1 << 1)
/** OPAMP_OPAMP1_CSR_OPAEN Operational amplifier Enable **/
#define OPAMP_OPAMP1_CSR_OPAEN		(1 << 0)

/**@}*/

/** @defgroup opamp_opamp2_csr OPAMP2CSR OPAMP2 control/status register
@{*/

/** OPAMP_OPAMP2_CSR_LOCK LOCK **/
#define OPAMP_OPAMP2_CSR_LOCK		(1 << 31)
/** OPAMP_OPAMP2_CSR_CALOUT CALOUT **/
#define OPAMP_OPAMP2_CSR_CALOUT		(1 << 30)

#define OPAMP_OPAMP2_CSR_TRIMOFFSETN_SHIFT		24
#define OPAMP_OPAMP2_CSR_TRIMOFFSETN_MASK		0x1f
/** @defgroup opamp_opamp2_csr_trimoffsetn TRIMOFFSETN TRIMOFFSETN
@{*/
/**@}*/


#define OPAMP_OPAMP2_CSR_TRIMOFFSETP_SHIFT		19
#define OPAMP_OPAMP2_CSR_TRIMOFFSETP_MASK		0x1f
/** @defgroup opamp_opamp2_csr_trimoffsetp TRIMOFFSETP TRIMOFFSETP
@{*/
/**@}*/


#define OPAMP_OPAMP2_CSR_PGA_GAIN_SHIFT		14
#define OPAMP_OPAMP2_CSR_PGA_GAIN_MASK		0x1f
/** @defgroup opamp_opamp2_csr_pga_gain PGAGAIN PGA_GAIN
@{*/
/**@}*/


#define OPAMP_OPAMP2_CSR_CALSEL_SHIFT		12
#define OPAMP_OPAMP2_CSR_CALSEL_MASK		0x03
/** @defgroup opamp_opamp2_csr_calsel CALSEL CALSEL
@{*/
/**@}*/

/** OPAMP_OPAMP2_CSR_CALON CALON **/
#define OPAMP_OPAMP2_CSR_CALON		(1 << 11)
/** OPAMP_OPAMP2_CSR_OPAINTOEN OPAINTOEN **/
#define OPAMP_OPAMP2_CSR_OPAINTOEN		(1 << 8)
/** OPAMP_OPAMP2_CSR_OPAHSM OPAHSM **/
#define OPAMP_OPAMP2_CSR_OPAHSM		(1 << 7)

#define OPAMP_OPAMP2_CSR_VM_SEL_SHIFT		5
#define OPAMP_OPAMP2_CSR_VM_SEL_MASK		0x03
/** @defgroup opamp_opamp2_csr_vm_sel VMSEL VM_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP2_CSR_USERTRIM USERTRIM **/
#define OPAMP_OPAMP2_CSR_USERTRIM		(1 << 4)

#define OPAMP_OPAMP2_CSR_VP_SEL_SHIFT		2
#define OPAMP_OPAMP2_CSR_VP_SEL_MASK		0x03
/** @defgroup opamp_opamp2_csr_vp_sel VPSEL VP_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP2_CSR_FORCE_VP FORCE_VP **/
#define OPAMP_OPAMP2_CSR_FORCE_VP		(1 << 1)
/** OPAMP_OPAMP2_CSR_OPAEN Operational amplifier Enable **/
#define OPAMP_OPAMP2_CSR_OPAEN		(1 << 0)

/**@}*/

/** @defgroup opamp_opamp3_csr OPAMP3CSR OPAMP3 control/status register
@{*/

/** OPAMP_OPAMP3_CSR_LOCK LOCK **/
#define OPAMP_OPAMP3_CSR_LOCK		(1 << 31)
/** OPAMP_OPAMP3_CSR_CALOUT CALOUT **/
#define OPAMP_OPAMP3_CSR_CALOUT		(1 << 30)

#define OPAMP_OPAMP3_CSR_TRIMOFFSETN_SHIFT		24
#define OPAMP_OPAMP3_CSR_TRIMOFFSETN_MASK		0x1f
/** @defgroup opamp_opamp3_csr_trimoffsetn TRIMOFFSETN TRIMOFFSETN
@{*/
/**@}*/


#define OPAMP_OPAMP3_CSR_TRIMOFFSETP_SHIFT		19
#define OPAMP_OPAMP3_CSR_TRIMOFFSETP_MASK		0x1f
/** @defgroup opamp_opamp3_csr_trimoffsetp TRIMOFFSETP TRIMOFFSETP
@{*/
/**@}*/


#define OPAMP_OPAMP3_CSR_PGA_GAIN_SHIFT		14
#define OPAMP_OPAMP3_CSR_PGA_GAIN_MASK		0x1f
/** @defgroup opamp_opamp3_csr_pga_gain PGAGAIN PGA_GAIN
@{*/
/**@}*/


#define OPAMP_OPAMP3_CSR_CALSEL_SHIFT		12
#define OPAMP_OPAMP3_CSR_CALSEL_MASK		0x03
/** @defgroup opamp_opamp3_csr_calsel CALSEL CALSEL
@{*/
/**@}*/

/** OPAMP_OPAMP3_CSR_CALON CALON **/
#define OPAMP_OPAMP3_CSR_CALON		(1 << 11)
/** OPAMP_OPAMP3_CSR_OPAINTOEN OPAINTOEN **/
#define OPAMP_OPAMP3_CSR_OPAINTOEN		(1 << 8)
/** OPAMP_OPAMP3_CSR_OPAHSM OPAHSM **/
#define OPAMP_OPAMP3_CSR_OPAHSM		(1 << 7)

#define OPAMP_OPAMP3_CSR_VM_SEL_SHIFT		5
#define OPAMP_OPAMP3_CSR_VM_SEL_MASK		0x03
/** @defgroup opamp_opamp3_csr_vm_sel VMSEL VM_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP3_CSR_USERTRIM USERTRIM **/
#define OPAMP_OPAMP3_CSR_USERTRIM		(1 << 4)

#define OPAMP_OPAMP3_CSR_VP_SEL_SHIFT		2
#define OPAMP_OPAMP3_CSR_VP_SEL_MASK		0x03
/** @defgroup opamp_opamp3_csr_vp_sel VPSEL VP_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP3_CSR_FORCE_VP FORCE_VP **/
#define OPAMP_OPAMP3_CSR_FORCE_VP		(1 << 1)
/** OPAMP_OPAMP3_CSR_OPAEN Operational amplifier Enable **/
#define OPAMP_OPAMP3_CSR_OPAEN		(1 << 0)

/**@}*/

/** @defgroup opamp_opamp4_csr OPAMP4CSR OPAMP4 control/status register
@{*/

/** OPAMP_OPAMP4_CSR_LOCK LOCK **/
#define OPAMP_OPAMP4_CSR_LOCK		(1 << 31)
/** OPAMP_OPAMP4_CSR_CALOUT CALOUT **/
#define OPAMP_OPAMP4_CSR_CALOUT		(1 << 30)

#define OPAMP_OPAMP4_CSR_TRIMOFFSETN_SHIFT		24
#define OPAMP_OPAMP4_CSR_TRIMOFFSETN_MASK		0x1f
/** @defgroup opamp_opamp4_csr_trimoffsetn TRIMOFFSETN TRIMOFFSETN
@{*/
/**@}*/


#define OPAMP_OPAMP4_CSR_TRIMOFFSETP_SHIFT		19
#define OPAMP_OPAMP4_CSR_TRIMOFFSETP_MASK		0x1f
/** @defgroup opamp_opamp4_csr_trimoffsetp TRIMOFFSETP TRIMOFFSETP
@{*/
/**@}*/


#define OPAMP_OPAMP4_CSR_PGA_GAIN_SHIFT		14
#define OPAMP_OPAMP4_CSR_PGA_GAIN_MASK		0x1f
/** @defgroup opamp_opamp4_csr_pga_gain PGAGAIN PGA_GAIN
@{*/
/**@}*/


#define OPAMP_OPAMP4_CSR_CALSEL_SHIFT		12
#define OPAMP_OPAMP4_CSR_CALSEL_MASK		0x03
/** @defgroup opamp_opamp4_csr_calsel CALSEL CALSEL
@{*/
/**@}*/

/** OPAMP_OPAMP4_CSR_CALON CALON **/
#define OPAMP_OPAMP4_CSR_CALON		(1 << 11)
/** OPAMP_OPAMP4_CSR_OPAINTOEN OPAINTOEN **/
#define OPAMP_OPAMP4_CSR_OPAINTOEN		(1 << 8)
/** OPAMP_OPAMP4_CSR_OPAHSM OPAHSM **/
#define OPAMP_OPAMP4_CSR_OPAHSM		(1 << 7)

#define OPAMP_OPAMP4_CSR_VM_SEL_SHIFT		5
#define OPAMP_OPAMP4_CSR_VM_SEL_MASK		0x03
/** @defgroup opamp_opamp4_csr_vm_sel VMSEL VM_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP4_CSR_USERTRIM USERTRIM **/
#define OPAMP_OPAMP4_CSR_USERTRIM		(1 << 4)

#define OPAMP_OPAMP4_CSR_VP_SEL_SHIFT		2
#define OPAMP_OPAMP4_CSR_VP_SEL_MASK		0x03
/** @defgroup opamp_opamp4_csr_vp_sel VPSEL VP_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP4_CSR_FORCE_VP FORCE_VP **/
#define OPAMP_OPAMP4_CSR_FORCE_VP		(1 << 1)
/** OPAMP_OPAMP4_CSR_OPAEN Operational amplifier Enable **/
#define OPAMP_OPAMP4_CSR_OPAEN		(1 << 0)

/**@}*/

/** @defgroup opamp_opamp5_csr OPAMP5CSR OPAMP5 control/status register
@{*/

/** OPAMP_OPAMP5_CSR_LOCK LOCK **/
#define OPAMP_OPAMP5_CSR_LOCK		(1 << 31)
/** OPAMP_OPAMP5_CSR_CALOUT CALOUT **/
#define OPAMP_OPAMP5_CSR_CALOUT		(1 << 30)

#define OPAMP_OPAMP5_CSR_TRIMOFFSETN_SHIFT		24
#define OPAMP_OPAMP5_CSR_TRIMOFFSETN_MASK		0x1f
/** @defgroup opamp_opamp5_csr_trimoffsetn TRIMOFFSETN TRIMOFFSETN
@{*/
/**@}*/


#define OPAMP_OPAMP5_CSR_TRIMOFFSETP_SHIFT		19
#define OPAMP_OPAMP5_CSR_TRIMOFFSETP_MASK		0x1f
/** @defgroup opamp_opamp5_csr_trimoffsetp TRIMOFFSETP TRIMOFFSETP
@{*/
/**@}*/


#define OPAMP_OPAMP5_CSR_PGA_GAIN_SHIFT		14
#define OPAMP_OPAMP5_CSR_PGA_GAIN_MASK		0x1f
/** @defgroup opamp_opamp5_csr_pga_gain PGAGAIN PGA_GAIN
@{*/
/**@}*/


#define OPAMP_OPAMP5_CSR_CALSEL_SHIFT		12
#define OPAMP_OPAMP5_CSR_CALSEL_MASK		0x03
/** @defgroup opamp_opamp5_csr_calsel CALSEL CALSEL
@{*/
/**@}*/

/** OPAMP_OPAMP5_CSR_CALON CALON **/
#define OPAMP_OPAMP5_CSR_CALON		(1 << 11)
/** OPAMP_OPAMP5_CSR_OPAINTOEN OPAINTOEN **/
#define OPAMP_OPAMP5_CSR_OPAINTOEN		(1 << 8)
/** OPAMP_OPAMP5_CSR_OPAHSM OPAHSM **/
#define OPAMP_OPAMP5_CSR_OPAHSM		(1 << 7)

#define OPAMP_OPAMP5_CSR_VM_SEL_SHIFT		5
#define OPAMP_OPAMP5_CSR_VM_SEL_MASK		0x03
/** @defgroup opamp_opamp5_csr_vm_sel VMSEL VM_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP5_CSR_USERTRIM USERTRIM **/
#define OPAMP_OPAMP5_CSR_USERTRIM		(1 << 4)

#define OPAMP_OPAMP5_CSR_VP_SEL_SHIFT		2
#define OPAMP_OPAMP5_CSR_VP_SEL_MASK		0x03
/** @defgroup opamp_opamp5_csr_vp_sel VPSEL VP_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP5_CSR_FORCE_VP FORCE_VP **/
#define OPAMP_OPAMP5_CSR_FORCE_VP		(1 << 1)
/** OPAMP_OPAMP5_CSR_OPAEN Operational amplifier Enable **/
#define OPAMP_OPAMP5_CSR_OPAEN		(1 << 0)

/**@}*/

/** @defgroup opamp_opamp6_csr OPAMP6CSR OPAMP6 control/status register
@{*/

/** OPAMP_OPAMP6_CSR_LOCK LOCK **/
#define OPAMP_OPAMP6_CSR_LOCK		(1 << 31)
/** OPAMP_OPAMP6_CSR_CALOUT CALOUT **/
#define OPAMP_OPAMP6_CSR_CALOUT		(1 << 30)

#define OPAMP_OPAMP6_CSR_TRIMOFFSETN_SHIFT		24
#define OPAMP_OPAMP6_CSR_TRIMOFFSETN_MASK		0x1f
/** @defgroup opamp_opamp6_csr_trimoffsetn TRIMOFFSETN TRIMOFFSETN
@{*/
/**@}*/


#define OPAMP_OPAMP6_CSR_TRIMOFFSETP_SHIFT		19
#define OPAMP_OPAMP6_CSR_TRIMOFFSETP_MASK		0x1f
/** @defgroup opamp_opamp6_csr_trimoffsetp TRIMOFFSETP TRIMOFFSETP
@{*/
/**@}*/


#define OPAMP_OPAMP6_CSR_PGA_GAIN_SHIFT		14
#define OPAMP_OPAMP6_CSR_PGA_GAIN_MASK		0x1f
/** @defgroup opamp_opamp6_csr_pga_gain PGAGAIN PGA_GAIN
@{*/
/**@}*/


#define OPAMP_OPAMP6_CSR_CALSEL_SHIFT		12
#define OPAMP_OPAMP6_CSR_CALSEL_MASK		0x03
/** @defgroup opamp_opamp6_csr_calsel CALSEL CALSEL
@{*/
/**@}*/

/** OPAMP_OPAMP6_CSR_CALON CALON **/
#define OPAMP_OPAMP6_CSR_CALON		(1 << 11)
/** OPAMP_OPAMP6_CSR_OPAINTOEN OPAINTOEN **/
#define OPAMP_OPAMP6_CSR_OPAINTOEN		(1 << 8)
/** OPAMP_OPAMP6_CSR_OPAHSM OPAHSM **/
#define OPAMP_OPAMP6_CSR_OPAHSM		(1 << 7)

#define OPAMP_OPAMP6_CSR_VM_SEL_SHIFT		5
#define OPAMP_OPAMP6_CSR_VM_SEL_MASK		0x03
/** @defgroup opamp_opamp6_csr_vm_sel VMSEL VM_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP6_CSR_USERTRIM USERTRIM **/
#define OPAMP_OPAMP6_CSR_USERTRIM		(1 << 4)

#define OPAMP_OPAMP6_CSR_VP_SEL_SHIFT		2
#define OPAMP_OPAMP6_CSR_VP_SEL_MASK		0x03
/** @defgroup opamp_opamp6_csr_vp_sel VPSEL VP_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP6_CSR_FORCE_VP FORCE_VP **/
#define OPAMP_OPAMP6_CSR_FORCE_VP		(1 << 1)
/** OPAMP_OPAMP6_CSR_OPAEN Operational amplifier Enable **/
#define OPAMP_OPAMP6_CSR_OPAEN		(1 << 0)

/**@}*/

/** @defgroup opamp_opamp1_tcmr OPAMP1TCMR OPAMP1 control/status register
@{*/

/** OPAMP_OPAMP1_TCMR_LOCK LOCK **/
#define OPAMP_OPAMP1_TCMR_LOCK		(1 << 31)
/** OPAMP_OPAMP1_TCMR_T20CM_EN T20CM_EN **/
#define OPAMP_OPAMP1_TCMR_T20CM_EN		(1 << 5)
/** OPAMP_OPAMP1_TCMR_T8CM_EN T8CM_EN **/
#define OPAMP_OPAMP1_TCMR_T8CM_EN		(1 << 4)
/** OPAMP_OPAMP1_TCMR_T1CM_EN T1CM_EN **/
#define OPAMP_OPAMP1_TCMR_T1CM_EN		(1 << 3)

#define OPAMP_OPAMP1_TCMR_VPS_SEL_SHIFT		1
#define OPAMP_OPAMP1_TCMR_VPS_SEL_MASK		0x03
/** @defgroup opamp_opamp1_tcmr_vps_sel VPSSEL VPS_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP1_TCMR_VMS_SEL VMS_SEL **/
#define OPAMP_OPAMP1_TCMR_VMS_SEL		(1 << 0)

/**@}*/

/** @defgroup opamp_opamp2_tcmr OPAMP2TCMR OPAMP2 control/status register
@{*/

/** OPAMP_OPAMP2_TCMR_LOCK LOCK **/
#define OPAMP_OPAMP2_TCMR_LOCK		(1 << 31)
/** OPAMP_OPAMP2_TCMR_T20CM_EN T20CM_EN **/
#define OPAMP_OPAMP2_TCMR_T20CM_EN		(1 << 5)
/** OPAMP_OPAMP2_TCMR_T8CM_EN T8CM_EN **/
#define OPAMP_OPAMP2_TCMR_T8CM_EN		(1 << 4)
/** OPAMP_OPAMP2_TCMR_T1CM_EN T1CM_EN **/
#define OPAMP_OPAMP2_TCMR_T1CM_EN		(1 << 3)

#define OPAMP_OPAMP2_TCMR_VPS_SEL_SHIFT		1
#define OPAMP_OPAMP2_TCMR_VPS_SEL_MASK		0x03
/** @defgroup opamp_opamp2_tcmr_vps_sel VPSSEL VPS_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP2_TCMR_VMS_SEL VMS_SEL **/
#define OPAMP_OPAMP2_TCMR_VMS_SEL		(1 << 0)

/**@}*/

/** @defgroup opamp_opamp3_tcmr OPAMP3TCMR OPAMP3 control/status register
@{*/

/** OPAMP_OPAMP3_TCMR_LOCK LOCK **/
#define OPAMP_OPAMP3_TCMR_LOCK		(1 << 31)
/** OPAMP_OPAMP3_TCMR_T20CM_EN T20CM_EN **/
#define OPAMP_OPAMP3_TCMR_T20CM_EN		(1 << 5)
/** OPAMP_OPAMP3_TCMR_T8CM_EN T8CM_EN **/
#define OPAMP_OPAMP3_TCMR_T8CM_EN		(1 << 4)
/** OPAMP_OPAMP3_TCMR_T1CM_EN T1CM_EN **/
#define OPAMP_OPAMP3_TCMR_T1CM_EN		(1 << 3)

#define OPAMP_OPAMP3_TCMR_VPS_SEL_SHIFT		1
#define OPAMP_OPAMP3_TCMR_VPS_SEL_MASK		0x03
/** @defgroup opamp_opamp3_tcmr_vps_sel VPSSEL VPS_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP3_TCMR_VMS_SEL VMS_SEL **/
#define OPAMP_OPAMP3_TCMR_VMS_SEL		(1 << 0)

/**@}*/

/** @defgroup opamp_opamp4_tcmr OPAMP4TCMR OPAMP4 control/status register
@{*/

/** OPAMP_OPAMP4_TCMR_LOCK LOCK **/
#define OPAMP_OPAMP4_TCMR_LOCK		(1 << 31)
/** OPAMP_OPAMP4_TCMR_T20CM_EN T20CM_EN **/
#define OPAMP_OPAMP4_TCMR_T20CM_EN		(1 << 5)
/** OPAMP_OPAMP4_TCMR_T8CM_EN T8CM_EN **/
#define OPAMP_OPAMP4_TCMR_T8CM_EN		(1 << 4)
/** OPAMP_OPAMP4_TCMR_T1CM_EN T1CM_EN **/
#define OPAMP_OPAMP4_TCMR_T1CM_EN		(1 << 3)

#define OPAMP_OPAMP4_TCMR_VPS_SEL_SHIFT		1
#define OPAMP_OPAMP4_TCMR_VPS_SEL_MASK		0x03
/** @defgroup opamp_opamp4_tcmr_vps_sel VPSSEL VPS_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP4_TCMR_VMS_SEL VMS_SEL **/
#define OPAMP_OPAMP4_TCMR_VMS_SEL		(1 << 0)

/**@}*/

/** @defgroup opamp_opamp5_tcmr OPAMP5TCMR OPAMP5 control/status register
@{*/

/** OPAMP_OPAMP5_TCMR_LOCK LOCK **/
#define OPAMP_OPAMP5_TCMR_LOCK		(1 << 31)
/** OPAMP_OPAMP5_TCMR_T20CM_EN T20CM_EN **/
#define OPAMP_OPAMP5_TCMR_T20CM_EN		(1 << 5)
/** OPAMP_OPAMP5_TCMR_T8CM_EN T8CM_EN **/
#define OPAMP_OPAMP5_TCMR_T8CM_EN		(1 << 4)
/** OPAMP_OPAMP5_TCMR_T1CM_EN T1CM_EN **/
#define OPAMP_OPAMP5_TCMR_T1CM_EN		(1 << 3)

#define OPAMP_OPAMP5_TCMR_VPS_SEL_SHIFT		1
#define OPAMP_OPAMP5_TCMR_VPS_SEL_MASK		0x03
/** @defgroup opamp_opamp5_tcmr_vps_sel VPSSEL VPS_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP5_TCMR_VMS_SEL VMS_SEL **/
#define OPAMP_OPAMP5_TCMR_VMS_SEL		(1 << 0)

/**@}*/

/** @defgroup opamp_opamp6_tcmr OPAMP6TCMR OPAMP6 control/status register
@{*/

/** OPAMP_OPAMP6_TCMR_LOCK LOCK **/
#define OPAMP_OPAMP6_TCMR_LOCK		(1 << 31)
/** OPAMP_OPAMP6_TCMR_T20CM_EN T20CM_EN **/
#define OPAMP_OPAMP6_TCMR_T20CM_EN		(1 << 5)
/** OPAMP_OPAMP6_TCMR_T8CM_EN T8CM_EN **/
#define OPAMP_OPAMP6_TCMR_T8CM_EN		(1 << 4)
/** OPAMP_OPAMP6_TCMR_T1CM_EN T1CM_EN **/
#define OPAMP_OPAMP6_TCMR_T1CM_EN		(1 << 3)

#define OPAMP_OPAMP6_TCMR_VPS_SEL_SHIFT		1
#define OPAMP_OPAMP6_TCMR_VPS_SEL_MASK		0x03
/** @defgroup opamp_opamp6_tcmr_vps_sel VPSSEL VPS_SEL
@{*/
/**@}*/

/** OPAMP_OPAMP6_TCMR_VMS_SEL VMS_SEL **/
#define OPAMP_OPAMP6_TCMR_VMS_SEL		(1 << 0)

/**@}*/

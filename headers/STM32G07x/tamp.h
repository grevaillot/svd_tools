#pragma once 

/* --- TAMP: Tamper and backup registers ---------------------------- */

/** @defgroup tamp_registers Tamper and backup registers Register
@{*/

/** TAMP_CR1 control register 1 **/
#define TAMP_CR1			MMIO32(TAMP_BASE + 0x00)
/** TAMP_CR2 control register 2 **/
#define TAMP_CR2			MMIO32(TAMP_BASE + 0x04)
/** TAMP_FLTCR TAMP filter control register **/
#define TAMP_FLTCR			MMIO32(TAMP_BASE + 0x0c)
/** TAMP_IER TAMP interrupt enable register **/
#define TAMP_IER			MMIO32(TAMP_BASE + 0x2c)
/** TAMP_SR TAMP status register **/
#define TAMP_SR			MMIO32(TAMP_BASE + 0x30)
/** TAMP_MISR TAMP masked interrupt status register **/
#define TAMP_MISR			MMIO32(TAMP_BASE + 0x34)
/** TAMP_SCR TAMP status clear register **/
#define TAMP_SCR			MMIO32(TAMP_BASE + 0x3c)
/** TAMP_BKP0R TAMP backup register **/
#define TAMP_BKP0R			MMIO32(TAMP_BASE + 0x100)
/** TAMP_BKP1R TAMP backup register **/
#define TAMP_BKP1R			MMIO32(TAMP_BASE + 0x104)
/** TAMP_BKP2R TAMP backup register **/
#define TAMP_BKP2R			MMIO32(TAMP_BASE + 0x108)
/** TAMP_BKP3R TAMP backup register **/
#define TAMP_BKP3R			MMIO32(TAMP_BASE + 0x10c)
/** TAMP_BKP4R TAMP backup register **/
#define TAMP_BKP4R			MMIO32(TAMP_BASE + 0x110)
/** TAMP_HWCFGR2 TAMP hardware configuration register 2 **/
#define TAMP_HWCFGR2			MMIO32(TAMP_BASE + 0x3ec)
/** TAMP_HWCFGR1 TAMP hardware configuration register 1 **/
#define TAMP_HWCFGR1			MMIO32(TAMP_BASE + 0x3f0)
/** TAMP_VERR EXTI IP Version register **/
#define TAMP_VERR			MMIO32(TAMP_BASE + 0x3f4)
/** TAMP_IPIDR EXTI Identification register **/
#define TAMP_IPIDR			MMIO32(TAMP_BASE + 0x3f8)
/** TAMP_SIDR EXTI Size ID register **/
#define TAMP_SIDR			MMIO32(TAMP_BASE + 0x3fc)

/**@}*/


/** @defgroup tamp_cr1 CR1 control register 1
@{*/

/** TAMP_CR1_ITAMP6E ITAMP6E **/
#define TAMP_CR1_ITAMP6E		(1 << 21)
/** TAMP_CR1_ITAMP5E ITAMP5E **/
#define TAMP_CR1_ITAMP5E		(1 << 20)
/** TAMP_CR1_ITAMP4E ITAMP4E **/
#define TAMP_CR1_ITAMP4E		(1 << 19)
/** TAMP_CR1_ITAMP3E ITAMP3E **/
#define TAMP_CR1_ITAMP3E		(1 << 18)
/** TAMP_CR1_ITAMP1E ITAMP1E **/
#define TAMP_CR1_ITAMP1E		(1 << 16)
/** TAMP_CR1_TAMP2E TAMP2E **/
#define TAMP_CR1_TAMP2E		(1 << 1)
/** TAMP_CR1_TAMP1E TAMP1E **/
#define TAMP_CR1_TAMP1E		(1 << 0)

/**@}*/

/** @defgroup tamp_cr2 CR2 control register 2
@{*/

/** TAMP_CR2_TAMP2TRG TAMP2TRG **/
#define TAMP_CR2_TAMP2TRG		(1 << 25)
/** TAMP_CR2_TAMP1TRG TAMP1TRG **/
#define TAMP_CR2_TAMP1TRG		(1 << 24)
/** TAMP_CR2_TAMP2MSK TAMP2MSK **/
#define TAMP_CR2_TAMP2MSK		(1 << 17)
/** TAMP_CR2_TAMP1MSK TAMP1MSK **/
#define TAMP_CR2_TAMP1MSK		(1 << 16)
/** TAMP_CR2_TAMP2NOER TAMP2NOER **/
#define TAMP_CR2_TAMP2NOER		(1 << 1)
/** TAMP_CR2_TAMP1NOER TAMP1NOER **/
#define TAMP_CR2_TAMP1NOER		(1 << 0)

/**@}*/

/** @defgroup tamp_fltcr FLTCR TAMP filter control register
@{*/

/** TAMP_FLTCR_TAMPPUDIS TAMPPUDIS **/
#define TAMP_FLTCR_TAMPPUDIS		(1 << 7)

#define TAMP_FLTCR_TAMPPRCH_SHIFT		5
#define TAMP_FLTCR_TAMPPRCH_MASK		0x03
/** @defgroup tamp_fltcr_tampprch TAMPPRCH TAMPPRCH
@{*/
/**@}*/


#define TAMP_FLTCR_TAMPFLT_SHIFT		3
#define TAMP_FLTCR_TAMPFLT_MASK		0x03
/** @defgroup tamp_fltcr_tampflt TAMPFLT TAMPFLT
@{*/
/**@}*/


#define TAMP_FLTCR_TAMPFREQ_SHIFT		0
#define TAMP_FLTCR_TAMPFREQ_MASK		0x07
/** @defgroup tamp_fltcr_tampfreq TAMPFREQ TAMPFREQ
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_ier IER TAMP interrupt enable register
@{*/

/** TAMP_IER_ITAMP6IE ITAMP6IE **/
#define TAMP_IER_ITAMP6IE		(1 << 21)
/** TAMP_IER_ITAMP5IE ITAMP5IE **/
#define TAMP_IER_ITAMP5IE		(1 << 20)
/** TAMP_IER_ITAMP4IE ITAMP4IE **/
#define TAMP_IER_ITAMP4IE		(1 << 19)
/** TAMP_IER_ITAMP3IE ITAMP3IE **/
#define TAMP_IER_ITAMP3IE		(1 << 18)
/** TAMP_IER_ITAMP1IE ITAMP1IE **/
#define TAMP_IER_ITAMP1IE		(1 << 16)
/** TAMP_IER_TAMP2IE TAMP2IE **/
#define TAMP_IER_TAMP2IE		(1 << 1)
/** TAMP_IER_TAMP1IE TAMP1IE **/
#define TAMP_IER_TAMP1IE		(1 << 0)

/**@}*/

/** @defgroup tamp_sr SR TAMP status register
@{*/

/** TAMP_SR_ITAMP7F ITAMP7F **/
#define TAMP_SR_ITAMP7F		(1 << 22)
/** TAMP_SR_ITAMP6F ITAMP6F **/
#define TAMP_SR_ITAMP6F		(1 << 21)
/** TAMP_SR_ITAMP5F ITAMP5F **/
#define TAMP_SR_ITAMP5F		(1 << 20)
/** TAMP_SR_ITAMP4F ITAMP4F **/
#define TAMP_SR_ITAMP4F		(1 << 19)
/** TAMP_SR_ITAMP3F ITAMP3F **/
#define TAMP_SR_ITAMP3F		(1 << 18)
/** TAMP_SR_ITAMP1F ITAMP1F **/
#define TAMP_SR_ITAMP1F		(1 << 16)
/** TAMP_SR_TAMP2F TAMP2F **/
#define TAMP_SR_TAMP2F		(1 << 1)
/** TAMP_SR_TAMP1F TAMP1F **/
#define TAMP_SR_TAMP1F		(1 << 0)

/**@}*/

/** @defgroup tamp_misr MISR TAMP masked interrupt status register
@{*/

/** TAMP_MISR_ITAMP6MF ITAMP6MF **/
#define TAMP_MISR_ITAMP6MF		(1 << 21)
/** TAMP_MISR_ITAMP5MF ITAMP5MF **/
#define TAMP_MISR_ITAMP5MF		(1 << 20)
/** TAMP_MISR_ITAMP4MF ITAMP4MF **/
#define TAMP_MISR_ITAMP4MF		(1 << 19)
/** TAMP_MISR_ITAMP3MF ITAMP3MF **/
#define TAMP_MISR_ITAMP3MF		(1 << 18)
/** TAMP_MISR_ITAMP1MF ITAMP1MF **/
#define TAMP_MISR_ITAMP1MF		(1 << 16)
/** TAMP_MISR_TAMP2MF TAMP2MF **/
#define TAMP_MISR_TAMP2MF		(1 << 1)
/** TAMP_MISR_TAMP1MF TAMP1MF: **/
#define TAMP_MISR_TAMP1MF		(1 << 0)

/**@}*/

/** @defgroup tamp_scr SCR TAMP status clear register
@{*/

/** TAMP_SCR_CITAMP7F CITAMP7F **/
#define TAMP_SCR_CITAMP7F		(1 << 22)
/** TAMP_SCR_CITAMP6F CITAMP6F **/
#define TAMP_SCR_CITAMP6F		(1 << 21)
/** TAMP_SCR_CITAMP5F CITAMP5F **/
#define TAMP_SCR_CITAMP5F		(1 << 20)
/** TAMP_SCR_CITAMP4F CITAMP4F **/
#define TAMP_SCR_CITAMP4F		(1 << 19)
/** TAMP_SCR_CITAMP3F CITAMP3F **/
#define TAMP_SCR_CITAMP3F		(1 << 18)
/** TAMP_SCR_CITAMP1F CITAMP1F **/
#define TAMP_SCR_CITAMP1F		(1 << 16)
/** TAMP_SCR_CTAMP2F CTAMP2F **/
#define TAMP_SCR_CTAMP2F		(1 << 1)
/** TAMP_SCR_CTAMP1F CTAMP1F **/
#define TAMP_SCR_CTAMP1F		(1 << 0)

/**@}*/

/** @defgroup tamp_bkp0r BKP0R TAMP backup register
@{*/


#define TAMP_BKP0R_BKP_SHIFT		0
#define TAMP_BKP0R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp0r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp1r BKP1R TAMP backup register
@{*/


#define TAMP_BKP1R_BKP_SHIFT		0
#define TAMP_BKP1R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp1r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp2r BKP2R TAMP backup register
@{*/


#define TAMP_BKP2R_BKP_SHIFT		0
#define TAMP_BKP2R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp2r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp3r BKP3R TAMP backup register
@{*/


#define TAMP_BKP3R_BKP_SHIFT		0
#define TAMP_BKP3R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp3r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp4r BKP4R TAMP backup register
@{*/


#define TAMP_BKP4R_BKP_SHIFT		0
#define TAMP_BKP4R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp4r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_hwcfgr2 HWCFGR2 TAMP hardware configuration register 2
@{*/


#define TAMP_HWCFGR2_TRUST_ZONE_SHIFT		8
#define TAMP_HWCFGR2_TRUST_ZONE_MASK		0x0f
/** @defgroup tamp_hwcfgr2_trust_zone TRUSTZONE TRUST_ZONE
@{*/
/**@}*/


#define TAMP_HWCFGR2_PTIONREG_OUT_SHIFT		0
#define TAMP_HWCFGR2_PTIONREG_OUT_MASK		0xff
/** @defgroup tamp_hwcfgr2_ptionreg_out PTIONREGOUT PTIONREG_OUT
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_hwcfgr1 HWCFGR1 TAMP hardware configuration register 1
@{*/


#define TAMP_HWCFGR1_INT_TAMPER_SHIFT		16
#define TAMP_HWCFGR1_INT_TAMPER_MASK		0xffff
/** @defgroup tamp_hwcfgr1_int_tamper INTTAMPER INT_TAMPER
@{*/
/**@}*/


#define TAMP_HWCFGR1_ACTIVE_TAMPER_SHIFT		12
#define TAMP_HWCFGR1_ACTIVE_TAMPER_MASK		0x0f
/** @defgroup tamp_hwcfgr1_active_tamper ACTIVETAMPER ACTIVE_TAMPER
@{*/
/**@}*/


#define TAMP_HWCFGR1_TAMPER_SHIFT		8
#define TAMP_HWCFGR1_TAMPER_MASK		0x0f
/** @defgroup tamp_hwcfgr1_tamper TAMPER TAMPER
@{*/
/**@}*/


#define TAMP_HWCFGR1_BACKUP_REGS_SHIFT		0
#define TAMP_HWCFGR1_BACKUP_REGS_MASK		0xff
/** @defgroup tamp_hwcfgr1_backup_regs BACKUPREGS BACKUP_REGS
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_verr VERR EXTI IP Version register
@{*/


#define TAMP_VERR_MAJREV_SHIFT		4
#define TAMP_VERR_MAJREV_MASK		0x0f
/** @defgroup tamp_verr_majrev MAJREV Major Revision number
@{*/
/**@}*/


#define TAMP_VERR_MINREV_SHIFT		0
#define TAMP_VERR_MINREV_MASK		0x0f
/** @defgroup tamp_verr_minrev MINREV Minor Revision number
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_ipidr IPIDR EXTI Identification register
@{*/


#define TAMP_IPIDR_IPID_SHIFT		0
#define TAMP_IPIDR_IPID_MASK		0xffffffff
/** @defgroup tamp_ipidr_ipid IPID IP Identification
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_sidr SIDR EXTI Size ID register
@{*/


#define TAMP_SIDR_SID_SHIFT		0
#define TAMP_SIDR_SID_MASK		0xffffffff
/** @defgroup tamp_sidr_sid SID Size Identification
@{*/
/**@}*/


/**@}*/

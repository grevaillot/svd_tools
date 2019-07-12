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
/** TAMP_BKP5R TAMP backup register **/
#define TAMP_BKP5R			MMIO32(TAMP_BASE + 0x114)
/** TAMP_BKP6R TAMP backup register **/
#define TAMP_BKP6R			MMIO32(TAMP_BASE + 0x118)
/** TAMP_BKP7R TAMP backup register **/
#define TAMP_BKP7R			MMIO32(TAMP_BASE + 0x11c)
/** TAMP_BKP8R TAMP backup register **/
#define TAMP_BKP8R			MMIO32(TAMP_BASE + 0x120)
/** TAMP_BKP9R TAMP backup register **/
#define TAMP_BKP9R			MMIO32(TAMP_BASE + 0x124)
/** TAMP_BKP10R TAMP backup register **/
#define TAMP_BKP10R			MMIO32(TAMP_BASE + 0x128)
/** TAMP_BKP11R TAMP backup register **/
#define TAMP_BKP11R			MMIO32(TAMP_BASE + 0x12c)
/** TAMP_BKP12R TAMP backup register **/
#define TAMP_BKP12R			MMIO32(TAMP_BASE + 0x130)
/** TAMP_BKP13R TAMP backup register **/
#define TAMP_BKP13R			MMIO32(TAMP_BASE + 0x134)
/** TAMP_BKP14R TAMP backup register **/
#define TAMP_BKP14R			MMIO32(TAMP_BASE + 0x138)
/** TAMP_BKP15R TAMP backup register **/
#define TAMP_BKP15R			MMIO32(TAMP_BASE + 0x13c)
/** TAMP_BKP16R TAMP backup register **/
#define TAMP_BKP16R			MMIO32(TAMP_BASE + 0x140)
/** TAMP_BKP17R TAMP backup register **/
#define TAMP_BKP17R			MMIO32(TAMP_BASE + 0x144)
/** TAMP_BKP18R TAMP backup register **/
#define TAMP_BKP18R			MMIO32(TAMP_BASE + 0x148)
/** TAMP_BKP19R TAMP backup register **/
#define TAMP_BKP19R			MMIO32(TAMP_BASE + 0x14c)
/** TAMP_BKP20R TAMP backup register **/
#define TAMP_BKP20R			MMIO32(TAMP_BASE + 0x150)
/** TAMP_BKP21R TAMP backup register **/
#define TAMP_BKP21R			MMIO32(TAMP_BASE + 0x154)
/** TAMP_BKP22R TAMP backup register **/
#define TAMP_BKP22R			MMIO32(TAMP_BASE + 0x158)
/** TAMP_BKP23R TAMP backup register **/
#define TAMP_BKP23R			MMIO32(TAMP_BASE + 0x15c)
/** TAMP_BKP24R TAMP backup register **/
#define TAMP_BKP24R			MMIO32(TAMP_BASE + 0x160)
/** TAMP_BKP25R TAMP backup register **/
#define TAMP_BKP25R			MMIO32(TAMP_BASE + 0x164)
/** TAMP_BKP26R TAMP backup register **/
#define TAMP_BKP26R			MMIO32(TAMP_BASE + 0x168)
/** TAMP_BKP27R TAMP backup register **/
#define TAMP_BKP27R			MMIO32(TAMP_BASE + 0x16c)
/** TAMP_BKP28R TAMP backup register **/
#define TAMP_BKP28R			MMIO32(TAMP_BASE + 0x170)
/** TAMP_BKP29R TAMP backup register **/
#define TAMP_BKP29R			MMIO32(TAMP_BASE + 0x174)
/** TAMP_BKP30R TAMP backup register **/
#define TAMP_BKP30R			MMIO32(TAMP_BASE + 0x178)
/** TAMP_BKP31R TAMP backup register **/
#define TAMP_BKP31R			MMIO32(TAMP_BASE + 0x17c)

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
/** TAMP_CR1_TAMP3E TAMP2E **/
#define TAMP_CR1_TAMP3E		(1 << 2)
/** TAMP_CR1_TAMP2E TAMP2E **/
#define TAMP_CR1_TAMP2E		(1 << 1)
/** TAMP_CR1_TAMP1E TAMP1E **/
#define TAMP_CR1_TAMP1E		(1 << 0)

/**@}*/

/** @defgroup tamp_cr2 CR2 control register 2
@{*/

/** TAMP_CR2_TAMP3TRG TAMP3TRG **/
#define TAMP_CR2_TAMP3TRG		(1 << 26)
/** TAMP_CR2_TAMP2TRG TAMP2TRG **/
#define TAMP_CR2_TAMP2TRG		(1 << 25)
/** TAMP_CR2_TAMP1TRG TAMP1TRG **/
#define TAMP_CR2_TAMP1TRG		(1 << 24)
/** TAMP_CR2_TAMP3MSK TAMP3MSK **/
#define TAMP_CR2_TAMP3MSK		(1 << 18)
/** TAMP_CR2_TAMP2MSK TAMP2MSK **/
#define TAMP_CR2_TAMP2MSK		(1 << 17)
/** TAMP_CR2_TAMP1MSK TAMP1MSK **/
#define TAMP_CR2_TAMP1MSK		(1 << 16)
/** TAMP_CR2_TAMP3NOER TAMP3NOER **/
#define TAMP_CR2_TAMP3NOER		(1 << 2)
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
/** TAMP_IER_TAMP3IE TAMP3IE **/
#define TAMP_IER_TAMP3IE		(1 << 2)
/** TAMP_IER_TAMP2IE TAMP2IE **/
#define TAMP_IER_TAMP2IE		(1 << 1)
/** TAMP_IER_TAMP1IE TAMP1IE **/
#define TAMP_IER_TAMP1IE		(1 << 0)

/**@}*/

/** @defgroup tamp_sr SR TAMP status register
@{*/

/** TAMP_SR_ITAMP6F ITAMP6F **/
#define TAMP_SR_ITAMP6F		(1 << 21)
/** TAMP_SR_ITAMP5F ITAMP5F **/
#define TAMP_SR_ITAMP5F		(1 << 20)
/** TAMP_SR_ITAMP4F ITAMP4F **/
#define TAMP_SR_ITAMP4F		(1 << 19)
/** TAMP_SR_ITAMP3F ITAMP3F **/
#define TAMP_SR_ITAMP3F		(1 << 18)
/** TAMP_SR_TAMP3F TAMP3F **/
#define TAMP_SR_TAMP3F		(1 << 2)
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
/** TAMP_MISR_TAMP3MF TAMP3MF **/
#define TAMP_MISR_TAMP3MF		(1 << 2)
/** TAMP_MISR_TAMP2MF TAMP2MF **/
#define TAMP_MISR_TAMP2MF		(1 << 1)
/** TAMP_MISR_TAMP1MF TAMP1MF: **/
#define TAMP_MISR_TAMP1MF		(1 << 0)

/**@}*/

/** @defgroup tamp_scr SCR TAMP status clear register
@{*/

/** TAMP_SCR_CITAMP6F CITAMP6F **/
#define TAMP_SCR_CITAMP6F		(1 << 21)
/** TAMP_SCR_CITAMP5F CITAMP5F **/
#define TAMP_SCR_CITAMP5F		(1 << 20)
/** TAMP_SCR_CITAMP4F CITAMP4F **/
#define TAMP_SCR_CITAMP4F		(1 << 19)
/** TAMP_SCR_CITAMP3F CITAMP3F **/
#define TAMP_SCR_CITAMP3F		(1 << 18)
/** TAMP_SCR_CTAMP3F CTAMP3F **/
#define TAMP_SCR_CTAMP3F		(1 << 2)
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

/** @defgroup tamp_bkp5r BKP5R TAMP backup register
@{*/


#define TAMP_BKP5R_BKP_SHIFT		0
#define TAMP_BKP5R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp5r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp6r BKP6R TAMP backup register
@{*/


#define TAMP_BKP6R_BKP_SHIFT		0
#define TAMP_BKP6R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp6r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp7r BKP7R TAMP backup register
@{*/


#define TAMP_BKP7R_BKP_SHIFT		0
#define TAMP_BKP7R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp7r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp8r BKP8R TAMP backup register
@{*/


#define TAMP_BKP8R_BKP_SHIFT		0
#define TAMP_BKP8R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp8r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp9r BKP9R TAMP backup register
@{*/


#define TAMP_BKP9R_BKP_SHIFT		0
#define TAMP_BKP9R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp9r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp10r BKP10R TAMP backup register
@{*/


#define TAMP_BKP10R_BKP_SHIFT		0
#define TAMP_BKP10R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp10r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp11r BKP11R TAMP backup register
@{*/


#define TAMP_BKP11R_BKP_SHIFT		0
#define TAMP_BKP11R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp11r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp12r BKP12R TAMP backup register
@{*/


#define TAMP_BKP12R_BKP_SHIFT		0
#define TAMP_BKP12R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp12r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp13r BKP13R TAMP backup register
@{*/


#define TAMP_BKP13R_BKP_SHIFT		0
#define TAMP_BKP13R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp13r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp14r BKP14R TAMP backup register
@{*/


#define TAMP_BKP14R_BKP_SHIFT		0
#define TAMP_BKP14R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp14r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp15r BKP15R TAMP backup register
@{*/


#define TAMP_BKP15R_BKP_SHIFT		0
#define TAMP_BKP15R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp15r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp16r BKP16R TAMP backup register
@{*/


#define TAMP_BKP16R_BKP_SHIFT		0
#define TAMP_BKP16R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp16r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp17r BKP17R TAMP backup register
@{*/


#define TAMP_BKP17R_BKP_SHIFT		0
#define TAMP_BKP17R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp17r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp18r BKP18R TAMP backup register
@{*/


#define TAMP_BKP18R_BKP_SHIFT		0
#define TAMP_BKP18R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp18r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp19r BKP19R TAMP backup register
@{*/


#define TAMP_BKP19R_BKP_SHIFT		0
#define TAMP_BKP19R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp19r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp20r BKP20R TAMP backup register
@{*/


#define TAMP_BKP20R_BKP_SHIFT		0
#define TAMP_BKP20R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp20r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp21r BKP21R TAMP backup register
@{*/


#define TAMP_BKP21R_BKP_SHIFT		0
#define TAMP_BKP21R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp21r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp22r BKP22R TAMP backup register
@{*/


#define TAMP_BKP22R_BKP_SHIFT		0
#define TAMP_BKP22R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp22r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp23r BKP23R TAMP backup register
@{*/


#define TAMP_BKP23R_BKP_SHIFT		0
#define TAMP_BKP23R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp23r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp24r BKP24R TAMP backup register
@{*/


#define TAMP_BKP24R_BKP_SHIFT		0
#define TAMP_BKP24R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp24r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp25r BKP25R TAMP backup register
@{*/


#define TAMP_BKP25R_BKP_SHIFT		0
#define TAMP_BKP25R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp25r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp26r BKP26R TAMP backup register
@{*/


#define TAMP_BKP26R_BKP_SHIFT		0
#define TAMP_BKP26R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp26r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp27r BKP27R TAMP backup register
@{*/


#define TAMP_BKP27R_BKP_SHIFT		0
#define TAMP_BKP27R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp27r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp28r BKP28R TAMP backup register
@{*/


#define TAMP_BKP28R_BKP_SHIFT		0
#define TAMP_BKP28R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp28r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp29r BKP29R TAMP backup register
@{*/


#define TAMP_BKP29R_BKP_SHIFT		0
#define TAMP_BKP29R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp29r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp30r BKP30R TAMP backup register
@{*/


#define TAMP_BKP30R_BKP_SHIFT		0
#define TAMP_BKP30R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp30r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

/** @defgroup tamp_bkp31r BKP31R TAMP backup register
@{*/


#define TAMP_BKP31R_BKP_SHIFT		0
#define TAMP_BKP31R_BKP_MASK		0xffffffff
/** @defgroup tamp_bkp31r_bkp BKP BKP
@{*/
/**@}*/


/**@}*/

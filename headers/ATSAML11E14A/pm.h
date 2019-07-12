#pragma once 

/* --- PM: Power Manager -------------------------------------------- */

/** @defgroup pm_registers Power Manager Register
@{*/

/** PM_SLEEPCFG Sleep Configuration **/
#define PM_SLEEPCFG			MMIO32(PM_BASE + 0x01)
/** PM_PLCFG Performance Level Configuration **/
#define PM_PLCFG			MMIO32(PM_BASE + 0x02)
/** PM_PWCFG Power Configuration **/
#define PM_PWCFG			MMIO32(PM_BASE + 0x03)
/** PM_INTENCLR Interrupt Enable Clear **/
#define PM_INTENCLR			MMIO32(PM_BASE + 0x04)
/** PM_INTENSET Interrupt Enable Set **/
#define PM_INTENSET			MMIO32(PM_BASE + 0x05)
/** PM_INTFLAG Interrupt Flag Status and Clear **/
#define PM_INTFLAG			MMIO32(PM_BASE + 0x06)
/** PM_STDBYCFG Standby Configuration **/
#define PM_STDBYCFG			MMIO32(PM_BASE + 0x08)

/**@}*/


/** @defgroup pm_sleepcfg SLEEPCFG Sleep Configuration
@{*/


#define PM_SLEEPCFG_SLEEPMODE_SHIFT		0
#define PM_SLEEPCFG_SLEEPMODE_MASK		0x07
/** @defgroup pm_sleepcfg_sleepmode SLEEPMODE Sleep Mode
@{*/
/**@}*/


/**@}*/

/** @defgroup pm_plcfg PLCFG Performance Level Configuration
@{*/

/** PM_PLCFG_PLDIS Performance Level Disable **/
#define PM_PLCFG_PLDIS		(1 << 7)

#define PM_PLCFG_PLSEL_SHIFT		0
#define PM_PLCFG_PLSEL_MASK		0x03
/** @defgroup pm_plcfg_plsel PLSEL Performance Level Select
@{*/
/**@}*/


/**@}*/

/** @defgroup pm_pwcfg PWCFG Power Configuration
@{*/


#define PM_PWCFG_RAMPSWC_SHIFT		0
#define PM_PWCFG_RAMPSWC_MASK		0x03
/** @defgroup pm_pwcfg_rampswc RAMPSWC RAM Power Switch Configuration
@{*/
/**@}*/


/**@}*/

/** @defgroup pm_intenclr INTENCLR Interrupt Enable Clear
@{*/

/** PM_INTENCLR_PLRDY Performance Level Interrupt Enable **/
#define PM_INTENCLR_PLRDY		(1 << 0)

/**@}*/

/** @defgroup pm_intenset INTENSET Interrupt Enable Set
@{*/

/** PM_INTENSET_PLRDY Performance Level Ready interrupt Enable **/
#define PM_INTENSET_PLRDY		(1 << 0)

/**@}*/

/** @defgroup pm_intflag INTFLAG Interrupt Flag Status and Clear
@{*/

/** PM_INTFLAG_PLRDY Performance Level Ready **/
#define PM_INTFLAG_PLRDY		(1 << 0)

/**@}*/

/** @defgroup pm_stdbycfg STDBYCFG Standby Configuration
@{*/

/** PM_STDBYCFG_BBIASTR Back Bias for Trust RAM **/
#define PM_STDBYCFG_BBIASTR		(1 << 12)
/** PM_STDBYCFG_BBIASHS Back Bias for HSRAM **/
#define PM_STDBYCFG_BBIASHS		(1 << 10)

#define PM_STDBYCFG_VREGSMOD_SHIFT		6
#define PM_STDBYCFG_VREGSMOD_MASK		0x03
/** @defgroup pm_stdbycfg_vregsmod VREGSMOD Voltage Regulator Standby mode
@{*/
/**@}*/

/** PM_STDBYCFG_DPGPDSW Dynamic Power Gating for PDSW **/
#define PM_STDBYCFG_DPGPDSW		(1 << 4)
/** PM_STDBYCFG_PDCFG Power Domain Configuration **/
#define PM_STDBYCFG_PDCFG		(1 << 0)

/**@}*/

#pragma once 

/* --- RFCTRL: RF233 control module --------------------------------- */

/** @defgroup rfctrl_registers RF233 control module Register
@{*/

/** RFCTRL_FECFG Front-end control bus configuration **/
#define RFCTRL_FECFG			MMIO32(RFCTRL_BASE + 0x00)

/**@}*/


/** @defgroup rfctrl_fecfg FECFG Front-end control bus configuration
@{*/


#define RFCTRL_FECFG_F5CFG_SHIFT		10
#define RFCTRL_FECFG_F5CFG_MASK		0x03
/** @defgroup rfctrl_fecfg_f5cfg F5CFG Front-end control signal 5 configuration
@{*/
/**@}*/


#define RFCTRL_FECFG_F4CFG_SHIFT		8
#define RFCTRL_FECFG_F4CFG_MASK		0x03
/** @defgroup rfctrl_fecfg_f4cfg F4CFG Front-end control signal 4 configuration
@{*/
/**@}*/


#define RFCTRL_FECFG_F3CFG_SHIFT		6
#define RFCTRL_FECFG_F3CFG_MASK		0x03
/** @defgroup rfctrl_fecfg_f3cfg F3CFG Front-end control signal 3 configuration
@{*/
/**@}*/


#define RFCTRL_FECFG_F2CFG_SHIFT		4
#define RFCTRL_FECFG_F2CFG_MASK		0x03
/** @defgroup rfctrl_fecfg_f2cfg F2CFG Front-end control signal 2 configuration
@{*/
/**@}*/


#define RFCTRL_FECFG_F1CFG_SHIFT		2
#define RFCTRL_FECFG_F1CFG_MASK		0x03
/** @defgroup rfctrl_fecfg_f1cfg F1CFG Front-end control signal 1 configuration
@{*/
/**@}*/


#define RFCTRL_FECFG_F0CFG_SHIFT		0
#define RFCTRL_FECFG_F0CFG_MASK		0x03
/** @defgroup rfctrl_fecfg_f0cfg F0CFG Front-end control signal 0 configuration
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- CAN_CCU: CCU registers --------------------------------------- */

/** @defgroup can_ccu_registers CCU registers Register
@{*/

/** CAN_CCU_CREL Clock Calibration Unit Core Release Register **/
#define CAN_CCU_CREL			MMIO32(CAN_CCU_BASE + 0x00)
/** CAN_CCU_CCFG Calibration Configuration Register **/
#define CAN_CCU_CCFG			MMIO32(CAN_CCU_BASE + 0x04)
/** CAN_CCU_CSTAT Calibration Status Register **/
#define CAN_CCU_CSTAT			MMIO32(CAN_CCU_BASE + 0x08)
/** CAN_CCU_CWD Calibration Watchdog Register **/
#define CAN_CCU_CWD			MMIO32(CAN_CCU_BASE + 0x0c)
/** CAN_CCU_IR Clock Calibration Unit Interrupt Register **/
#define CAN_CCU_IR			MMIO32(CAN_CCU_BASE + 0x10)
/** CAN_CCU_IE Clock Calibration Unit Interrupt Enable Register **/
#define CAN_CCU_IE			MMIO32(CAN_CCU_BASE + 0x14)

/**@}*/


/** @defgroup can_ccu_crel CREL Clock Calibration Unit Core Release Register
@{*/


#define CAN_CCU_CREL_REL_SHIFT		28
#define CAN_CCU_CREL_REL_MASK		0x0f
/** @defgroup can_ccu_crel_rel REL Core Release
@{*/
/**@}*/


#define CAN_CCU_CREL_STEP_SHIFT		24
#define CAN_CCU_CREL_STEP_MASK		0x0f
/** @defgroup can_ccu_crel_step STEP Step of Core Release
@{*/
/**@}*/


#define CAN_CCU_CREL_SUBSTEP_SHIFT		20
#define CAN_CCU_CREL_SUBSTEP_MASK		0x0f
/** @defgroup can_ccu_crel_substep SUBSTEP Sub-step of Core Release
@{*/
/**@}*/


#define CAN_CCU_CREL_YEAR_SHIFT		16
#define CAN_CCU_CREL_YEAR_MASK		0x0f
/** @defgroup can_ccu_crel_year YEAR Time Stamp Year
@{*/
/**@}*/


#define CAN_CCU_CREL_MON_SHIFT		8
#define CAN_CCU_CREL_MON_MASK		0xff
/** @defgroup can_ccu_crel_mon MON Time Stamp Month
@{*/
/**@}*/


#define CAN_CCU_CREL_DAY_SHIFT		0
#define CAN_CCU_CREL_DAY_MASK		0xff
/** @defgroup can_ccu_crel_day DAY Time Stamp Day
@{*/
/**@}*/


/**@}*/

/** @defgroup can_ccu_ccfg CCFG Calibration Configuration Register
@{*/

/** CAN_CCU_CCFG_SWR Software Reset **/
#define CAN_CCU_CCFG_SWR		(1 << 31)

#define CAN_CCU_CCFG_CDIV_SHIFT		16
#define CAN_CCU_CCFG_CDIV_MASK		0x0f
/** @defgroup can_ccu_ccfg_cdiv CDIV Clock Divider
@{*/
/**@}*/


#define CAN_CCU_CCFG_OCPM_SHIFT		8
#define CAN_CCU_CCFG_OCPM_MASK		0xff
/** @defgroup can_ccu_ccfg_ocpm OCPM Oscillator Clock Periods Minimum
@{*/
/**@}*/

/** CAN_CCU_CCFG_CFL Calibration Field Length **/
#define CAN_CCU_CCFG_CFL		(1 << 7)
/** CAN_CCU_CCFG_BCC Bypass Clock Calibration **/
#define CAN_CCU_CCFG_BCC		(1 << 6)

#define CAN_CCU_CCFG_TQBT_SHIFT		0
#define CAN_CCU_CCFG_TQBT_MASK		0x1f
/** @defgroup can_ccu_ccfg_tqbt TQBT Time Quanta per Bit Time
@{*/
/**@}*/


/**@}*/

/** @defgroup can_ccu_cstat CSTAT Calibration Status Register
@{*/


#define CAN_CCU_CSTAT_CALS_SHIFT		30
#define CAN_CCU_CSTAT_CALS_MASK		0x03
/** @defgroup can_ccu_cstat_cals CALS Calibration State
@{*/
/**@}*/


#define CAN_CCU_CSTAT_TQC_SHIFT		18
#define CAN_CCU_CSTAT_TQC_MASK		0x7ff
/** @defgroup can_ccu_cstat_tqc TQC Time Quanta Counter
@{*/
/**@}*/


#define CAN_CCU_CSTAT_OCPC_SHIFT		0
#define CAN_CCU_CSTAT_OCPC_MASK		0x3ffff
/** @defgroup can_ccu_cstat_ocpc OCPC Oscillator Clock Period Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup can_ccu_cwd CWD Calibration Watchdog Register
@{*/


#define CAN_CCU_CWD_WDV_SHIFT		16
#define CAN_CCU_CWD_WDV_MASK		0xffff
/** @defgroup can_ccu_cwd_wdv WDV WDV
@{*/
/**@}*/


#define CAN_CCU_CWD_WDC_SHIFT		0
#define CAN_CCU_CWD_WDC_MASK		0xffff
/** @defgroup can_ccu_cwd_wdc WDC WDC
@{*/
/**@}*/


/**@}*/

/** @defgroup can_ccu_ir IR Clock Calibration Unit Interrupt Register
@{*/

/** CAN_CCU_IR_CSC Calibration State Changed **/
#define CAN_CCU_IR_CSC		(1 << 1)
/** CAN_CCU_IR_CWE Calibration Watchdog Event **/
#define CAN_CCU_IR_CWE		(1 << 0)

/**@}*/

/** @defgroup can_ccu_ie IE Clock Calibration Unit Interrupt Enable Register
@{*/

/** CAN_CCU_IE_CSCE Calibration State Changed Enable **/
#define CAN_CCU_IE_CSCE		(1 << 1)
/** CAN_CCU_IE_CWEE Calibration Watchdog Event Enable **/
#define CAN_CCU_IE_CWEE		(1 << 0)

/**@}*/

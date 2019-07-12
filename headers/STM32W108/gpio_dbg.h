#pragma once 

/* --- GPIO_DBG: General purpose I/Os ------------------------------- */

/** @defgroup gpio_dbg_registers General purpose I/Os Register
@{*/

/** GPIO_DBG_GPIO_PCTRACECR Clock PC trace register **/
#define GPIO_DBG_GPIO_PCTRACECR			MMIO32(GPIO_DBG_BASE + 0x00)
/** GPIO_DBG_GPIO_DBGCR GPIO debug configuration register **/
#define GPIO_DBG_GPIO_DBGCR			MMIO32(GPIO_DBG_BASE + 0x7bd8)
/** GPIO_DBG_GPIO_DBGSR GPIO debug status register **/
#define GPIO_DBG_GPIO_DBGSR			MMIO32(GPIO_DBG_BASE + 0x7bdc)

/**@}*/


/** @defgroup gpio_dbg_gpio_pctracecr GPIOPCTRACECR Clock PC trace register
@{*/

/** GPIO_DBG_GPIO_PCTRACECR_SEL selects PC_TRACE source on bb_debug GPIO pins **/
#define GPIO_DBG_GPIO_PCTRACECR_SEL		(1 << 0)

/**@}*/

/** @defgroup gpio_dbg_gpio_dbgcr GPIODBGCR GPIO debug configuration register
@{*/

/** GPIO_DBG_GPIO_DBGCR_DBGDIS DBGDIS **/
#define GPIO_DBG_GPIO_DBGCR_DBGDIS		(1 << 5)
/** GPIO_DBG_GPIO_DBGCR_EXTREGEN EXTREGEN **/
#define GPIO_DBG_GPIO_DBGCR_EXTREGEN		(1 << 4)

/**@}*/

/** @defgroup gpio_dbg_gpio_dbgsr GPIODBGSR GPIO debug status register
@{*/

/** GPIO_DBG_GPIO_DBGSR_BOOTMODE BOOTMODE **/
#define GPIO_DBG_GPIO_DBGSR_BOOTMODE		(1 << 3)
/** GPIO_DBG_GPIO_DBGSR_FORCEDBG FORCEDBG **/
#define GPIO_DBG_GPIO_DBGSR_FORCEDBG		(1 << 1)
/** GPIO_DBG_GPIO_DBGSR_SWEN SWEN **/
#define GPIO_DBG_GPIO_DBGSR_SWEN		(1 << 0)

/**@}*/

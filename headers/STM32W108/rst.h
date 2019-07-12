#pragma once 

/* --- RST: Reset event --------------------------------------------- */

/** @defgroup rst_registers Reset event Register
@{*/

/** RST_RST_SR Reset Status Register **/
#define RST_RST_SR			MMIO32(RST_BASE + 0x00)

/**@}*/


/** @defgroup rst_rst_sr RSTSR Reset Status Register
@{*/

/** RST_RST_SR_LKUP LKUP **/
#define RST_RST_SR_LKUP		(1 << 7)
/** RST_RST_SR_OBFAIL OBFAIL **/
#define RST_RST_SR_OBFAIL		(1 << 6)
/** RST_RST_SR_WKUP WKUP **/
#define RST_RST_SR_WKUP		(1 << 5)
/** RST_RST_SR_SWRST SWRST **/
#define RST_RST_SR_SWRST		(1 << 4)
/** RST_RST_SR_WDG WDG **/
#define RST_RST_SR_WDG		(1 << 3)
/** RST_RST_SR_PIN PIN **/
#define RST_RST_SR_PIN		(1 << 2)
/** RST_RST_SR_PWRLV PWRLV **/
#define RST_RST_SR_PWRLV		(1 << 1)
/** RST_RST_SR_PWRHV PWRHV **/
#define RST_RST_SR_PWRHV		(1 << 0)

/**@}*/

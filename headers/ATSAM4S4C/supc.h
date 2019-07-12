#pragma once 

/* --- SUPC: Supply Controller -------------------------------------- */

/** @defgroup supc_registers Supply Controller Register
@{*/

/** SUPC_CR Supply Controller Control Register **/
#define SUPC_CR			MMIO32(SUPC_BASE + 0x00)
/** SUPC_SMMR Supply Controller Supply Monitor Mode Register **/
#define SUPC_SMMR			MMIO32(SUPC_BASE + 0x04)
/** SUPC_MR Supply Controller Mode Register **/
#define SUPC_MR			MMIO32(SUPC_BASE + 0x08)
/** SUPC_WUMR Supply Controller Wake-up Mode Register **/
#define SUPC_WUMR			MMIO32(SUPC_BASE + 0x0c)
/** SUPC_WUIR Supply Controller Wake-up Inputs Register **/
#define SUPC_WUIR			MMIO32(SUPC_BASE + 0x10)
/** SUPC_SR Supply Controller Status Register **/
#define SUPC_SR			MMIO32(SUPC_BASE + 0x14)

/**@}*/


/** @defgroup supc_cr CR Supply Controller Control Register
@{*/


#define SUPC_CR_KEY_SHIFT		24
#define SUPC_CR_KEY_MASK		0xff
/** @defgroup supc_cr_key KEY Password
@{*/
/**@}*/

/** SUPC_CR_XTALSEL Crystal Oscillator Select **/
#define SUPC_CR_XTALSEL		(1 << 3)
/** SUPC_CR_VROFF Voltage Regulator Off **/
#define SUPC_CR_VROFF		(1 << 2)

/**@}*/

/** @defgroup supc_smmr SMMR Supply Controller Supply Monitor Mode Register
@{*/

/** SUPC_SMMR_SMIEN Supply Monitor Interrupt Enable **/
#define SUPC_SMMR_SMIEN		(1 << 13)
/** SUPC_SMMR_SMRSTEN Supply Monitor Reset Enable **/
#define SUPC_SMMR_SMRSTEN		(1 << 12)

#define SUPC_SMMR_SMSMPL_SHIFT		8
#define SUPC_SMMR_SMSMPL_MASK		0x07
/** @defgroup supc_smmr_smsmpl SMSMPL Supply Monitor Sampling Period
@{*/
/**@}*/


#define SUPC_SMMR_SMTH_SHIFT		0
#define SUPC_SMMR_SMTH_MASK		0x0f
/** @defgroup supc_smmr_smth SMTH Supply Monitor Threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup supc_mr MR Supply Controller Mode Register
@{*/


#define SUPC_MR_KEY_SHIFT		24
#define SUPC_MR_KEY_MASK		0xff
/** @defgroup supc_mr_key KEY Password Key
@{*/
/**@}*/

/** SUPC_MR_OSCBYPASS Oscillator Bypass **/
#define SUPC_MR_OSCBYPASS		(1 << 20)
/** SUPC_MR_ONREG Voltage Regulator Enable **/
#define SUPC_MR_ONREG		(1 << 14)
/** SUPC_MR_BODDIS Brownout Detector Disable **/
#define SUPC_MR_BODDIS		(1 << 13)
/** SUPC_MR_BODRSTEN Brownout Detector Reset Enable **/
#define SUPC_MR_BODRSTEN		(1 << 12)

/**@}*/

/** @defgroup supc_wumr WUMR Supply Controller Wake-up Mode Register
@{*/


#define SUPC_WUMR_LPDBC_SHIFT		16
#define SUPC_WUMR_LPDBC_MASK		0x07
/** @defgroup supc_wumr_lpdbc LPDBC Low-power Debouncer Period
@{*/
/**@}*/


#define SUPC_WUMR_WKUPDBC_SHIFT		12
#define SUPC_WUMR_WKUPDBC_MASK		0x07
/** @defgroup supc_wumr_wkupdbc WKUPDBC Wake-up Inputs Debouncer Period
@{*/
/**@}*/

/** SUPC_WUMR_LPDBCCLR Low-power Debouncer Clear **/
#define SUPC_WUMR_LPDBCCLR		(1 << 7)
/** SUPC_WUMR_LPDBCEN1 Low-power Debouncer Enable WKUP1 **/
#define SUPC_WUMR_LPDBCEN1		(1 << 6)
/** SUPC_WUMR_LPDBCEN0 Low-power Debouncer Enable WKUP0 **/
#define SUPC_WUMR_LPDBCEN0		(1 << 5)
/** SUPC_WUMR_RTCEN Real-time Clock Wake-up Enable **/
#define SUPC_WUMR_RTCEN		(1 << 3)
/** SUPC_WUMR_RTTEN Real-time Timer Wake-up Enable **/
#define SUPC_WUMR_RTTEN		(1 << 2)
/** SUPC_WUMR_SMEN Supply Monitor Wake-up Enable **/
#define SUPC_WUMR_SMEN		(1 << 1)

/**@}*/

/** @defgroup supc_wuir WUIR Supply Controller Wake-up Inputs Register
@{*/

/** SUPC_WUIR_WKUPT15 Wake-up Input Type 0 to 15 **/
#define SUPC_WUIR_WKUPT15		(1 << 31)
/** SUPC_WUIR_WKUPT14 Wake-up Input Type 0 to 14 **/
#define SUPC_WUIR_WKUPT14		(1 << 30)
/** SUPC_WUIR_WKUPT13 Wake-up Input Type 0 to 13 **/
#define SUPC_WUIR_WKUPT13		(1 << 29)
/** SUPC_WUIR_WKUPT12 Wake-up Input Type 0 to 12 **/
#define SUPC_WUIR_WKUPT12		(1 << 28)
/** SUPC_WUIR_WKUPT11 Wake-up Input Type 0 to 11 **/
#define SUPC_WUIR_WKUPT11		(1 << 27)
/** SUPC_WUIR_WKUPT10 Wake-up Input Type 0 to 10 **/
#define SUPC_WUIR_WKUPT10		(1 << 26)
/** SUPC_WUIR_WKUPT9 Wake-up Input Type 0 to 9 **/
#define SUPC_WUIR_WKUPT9		(1 << 25)
/** SUPC_WUIR_WKUPT8 Wake-up Input Type 0 to 8 **/
#define SUPC_WUIR_WKUPT8		(1 << 24)
/** SUPC_WUIR_WKUPT7 Wake-up Input Type 0 to 7 **/
#define SUPC_WUIR_WKUPT7		(1 << 23)
/** SUPC_WUIR_WKUPT6 Wake-up Input Type 0 to 6 **/
#define SUPC_WUIR_WKUPT6		(1 << 22)
/** SUPC_WUIR_WKUPT5 Wake-up Input Type 0 to 5 **/
#define SUPC_WUIR_WKUPT5		(1 << 21)
/** SUPC_WUIR_WKUPT4 Wake-up Input Type 0 to 4 **/
#define SUPC_WUIR_WKUPT4		(1 << 20)
/** SUPC_WUIR_WKUPT3 Wake-up Input Type 0 to 3 **/
#define SUPC_WUIR_WKUPT3		(1 << 19)
/** SUPC_WUIR_WKUPT2 Wake-up Input Type 0 to 2 **/
#define SUPC_WUIR_WKUPT2		(1 << 18)
/** SUPC_WUIR_WKUPT1 Wake-up Input Type 0 to 1 **/
#define SUPC_WUIR_WKUPT1		(1 << 17)
/** SUPC_WUIR_WKUPT0 Wake-up Input Type 0 to 0 **/
#define SUPC_WUIR_WKUPT0		(1 << 16)
/** SUPC_WUIR_WKUPEN15 Wake-up Input Enable 0 to 15 **/
#define SUPC_WUIR_WKUPEN15		(1 << 15)
/** SUPC_WUIR_WKUPEN14 Wake-up Input Enable 0 to 14 **/
#define SUPC_WUIR_WKUPEN14		(1 << 14)
/** SUPC_WUIR_WKUPEN13 Wake-up Input Enable 0 to 13 **/
#define SUPC_WUIR_WKUPEN13		(1 << 13)
/** SUPC_WUIR_WKUPEN12 Wake-up Input Enable 0 to 12 **/
#define SUPC_WUIR_WKUPEN12		(1 << 12)
/** SUPC_WUIR_WKUPEN11 Wake-up Input Enable 0 to 11 **/
#define SUPC_WUIR_WKUPEN11		(1 << 11)
/** SUPC_WUIR_WKUPEN10 Wake-up Input Enable 0 to 10 **/
#define SUPC_WUIR_WKUPEN10		(1 << 10)
/** SUPC_WUIR_WKUPEN9 Wake-up Input Enable 0 to 9 **/
#define SUPC_WUIR_WKUPEN9		(1 << 9)
/** SUPC_WUIR_WKUPEN8 Wake-up Input Enable 0 to 8 **/
#define SUPC_WUIR_WKUPEN8		(1 << 8)
/** SUPC_WUIR_WKUPEN7 Wake-up Input Enable 0 to 7 **/
#define SUPC_WUIR_WKUPEN7		(1 << 7)
/** SUPC_WUIR_WKUPEN6 Wake-up Input Enable 0 to 6 **/
#define SUPC_WUIR_WKUPEN6		(1 << 6)
/** SUPC_WUIR_WKUPEN5 Wake-up Input Enable 0 to 5 **/
#define SUPC_WUIR_WKUPEN5		(1 << 5)
/** SUPC_WUIR_WKUPEN4 Wake-up Input Enable 0 to 4 **/
#define SUPC_WUIR_WKUPEN4		(1 << 4)
/** SUPC_WUIR_WKUPEN3 Wake-up Input Enable 0 to 3 **/
#define SUPC_WUIR_WKUPEN3		(1 << 3)
/** SUPC_WUIR_WKUPEN2 Wake-up Input Enable 0 to 2 **/
#define SUPC_WUIR_WKUPEN2		(1 << 2)
/** SUPC_WUIR_WKUPEN1 Wake-up Input Enable 0 to 1 **/
#define SUPC_WUIR_WKUPEN1		(1 << 1)
/** SUPC_WUIR_WKUPEN0 Wake-up Input Enable 0 to 0 **/
#define SUPC_WUIR_WKUPEN0		(1 << 0)

/**@}*/

/** @defgroup supc_sr SR Supply Controller Status Register
@{*/

/** SUPC_SR_WKUPIS15 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS15		(1 << 31)
/** SUPC_SR_WKUPIS14 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS14		(1 << 30)
/** SUPC_SR_WKUPIS13 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS13		(1 << 29)
/** SUPC_SR_WKUPIS12 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS12		(1 << 28)
/** SUPC_SR_WKUPIS11 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS11		(1 << 27)
/** SUPC_SR_WKUPIS10 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS10		(1 << 26)
/** SUPC_SR_WKUPIS9 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS9		(1 << 25)
/** SUPC_SR_WKUPIS8 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS8		(1 << 24)
/** SUPC_SR_WKUPIS7 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS7		(1 << 23)
/** SUPC_SR_WKUPIS6 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS6		(1 << 22)
/** SUPC_SR_WKUPIS5 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS5		(1 << 21)
/** SUPC_SR_WKUPIS4 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS4		(1 << 20)
/** SUPC_SR_WKUPIS3 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS3		(1 << 19)
/** SUPC_SR_WKUPIS2 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS2		(1 << 18)
/** SUPC_SR_WKUPIS1 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS1		(1 << 17)
/** SUPC_SR_WKUPIS0 WKUPx Input Status (cleared on read) **/
#define SUPC_SR_WKUPIS0		(1 << 16)
/** SUPC_SR_LPDBCS1 Low-power Debouncer Wake-up Status on WKUP1 (cleared on read) **/
#define SUPC_SR_LPDBCS1		(1 << 14)
/** SUPC_SR_LPDBCS0 Low-power Debouncer Wake-up Status on WKUP0 (cleared on read) **/
#define SUPC_SR_LPDBCS0		(1 << 13)
/** SUPC_SR_OSCSEL 32-kHz Oscillator Selection Status **/
#define SUPC_SR_OSCSEL		(1 << 7)
/** SUPC_SR_SMOS Supply Monitor Output Status **/
#define SUPC_SR_SMOS		(1 << 6)
/** SUPC_SR_SMS Supply Monitor Status (cleared on read) **/
#define SUPC_SR_SMS		(1 << 5)
/** SUPC_SR_SMRSTS Supply Monitor Reset Status (cleared on read) **/
#define SUPC_SR_SMRSTS		(1 << 4)
/** SUPC_SR_BODRSTS Brownout Detector Reset Status (cleared on read) **/
#define SUPC_SR_BODRSTS		(1 << 3)
/** SUPC_SR_SMWS Supply Monitor Detection Wake-up Status (cleared on read) **/
#define SUPC_SR_SMWS		(1 << 2)
/** SUPC_SR_WKUPS WKUP Wake-up Status (cleared on read) **/
#define SUPC_SR_WKUPS		(1 << 1)

/**@}*/

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
/** SUPC_WUMR Supply Controller Wake Up Mode Register **/
#define SUPC_WUMR			MMIO32(SUPC_BASE + 0x0c)
/** SUPC_WUIR Supply Controller Wake Up Inputs Register **/
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
/** SUPC_MR_ONREG Voltage Regulator enable **/
#define SUPC_MR_ONREG		(1 << 14)
/** SUPC_MR_BODDIS Brownout Detector Disable **/
#define SUPC_MR_BODDIS		(1 << 13)
/** SUPC_MR_BODRSTEN Brownout Detector Reset Enable **/
#define SUPC_MR_BODRSTEN		(1 << 12)

/**@}*/

/** @defgroup supc_wumr WUMR Supply Controller Wake Up Mode Register
@{*/


#define SUPC_WUMR_LPDBC_SHIFT		16
#define SUPC_WUMR_LPDBC_MASK		0x07
/** @defgroup supc_wumr_lpdbc LPDBC Low Power DeBounCer Period
@{*/
/**@}*/


#define SUPC_WUMR_WKUPDBC_SHIFT		12
#define SUPC_WUMR_WKUPDBC_MASK		0x07
/** @defgroup supc_wumr_wkupdbc WKUPDBC Wake Up Inputs Debouncer Period
@{*/
/**@}*/

/** SUPC_WUMR_LPDBCCLR Low power Debouncer Clear **/
#define SUPC_WUMR_LPDBCCLR		(1 << 7)
/** SUPC_WUMR_LPDBCEN1 Low power Debouncer ENable WKUP1 **/
#define SUPC_WUMR_LPDBCEN1		(1 << 6)
/** SUPC_WUMR_LPDBCEN0 Low power Debouncer ENable WKUP0 **/
#define SUPC_WUMR_LPDBCEN0		(1 << 5)
/** SUPC_WUMR_RTCEN Real Time Clock Wake Up Enable **/
#define SUPC_WUMR_RTCEN		(1 << 3)
/** SUPC_WUMR_RTTEN Real Time Timer Wake Up Enable **/
#define SUPC_WUMR_RTTEN		(1 << 2)
/** SUPC_WUMR_SMEN Supply Monitor Wake Up Enable **/
#define SUPC_WUMR_SMEN		(1 << 1)

/**@}*/

/** @defgroup supc_wuir WUIR Supply Controller Wake Up Inputs Register
@{*/

/** SUPC_WUIR_WKUPT15 Wake Up Input Type 15 **/
#define SUPC_WUIR_WKUPT15		(1 << 31)
/** SUPC_WUIR_WKUPT14 Wake Up Input Type 14 **/
#define SUPC_WUIR_WKUPT14		(1 << 30)
/** SUPC_WUIR_WKUPT13 Wake Up Input Type 13 **/
#define SUPC_WUIR_WKUPT13		(1 << 29)
/** SUPC_WUIR_WKUPT12 Wake Up Input Type 12 **/
#define SUPC_WUIR_WKUPT12		(1 << 28)
/** SUPC_WUIR_WKUPT11 Wake Up Input Type 11 **/
#define SUPC_WUIR_WKUPT11		(1 << 27)
/** SUPC_WUIR_WKUPT10 Wake Up Input Type 10 **/
#define SUPC_WUIR_WKUPT10		(1 << 26)
/** SUPC_WUIR_WKUPT9 Wake Up Input Type 9 **/
#define SUPC_WUIR_WKUPT9		(1 << 25)
/** SUPC_WUIR_WKUPT8 Wake Up Input Type 8 **/
#define SUPC_WUIR_WKUPT8		(1 << 24)
/** SUPC_WUIR_WKUPT7 Wake Up Input Type 7 **/
#define SUPC_WUIR_WKUPT7		(1 << 23)
/** SUPC_WUIR_WKUPT6 Wake Up Input Type 6 **/
#define SUPC_WUIR_WKUPT6		(1 << 22)
/** SUPC_WUIR_WKUPT5 Wake Up Input Type 5 **/
#define SUPC_WUIR_WKUPT5		(1 << 21)
/** SUPC_WUIR_WKUPT4 Wake Up Input Type 4 **/
#define SUPC_WUIR_WKUPT4		(1 << 20)
/** SUPC_WUIR_WKUPT3 Wake Up Input Type 3 **/
#define SUPC_WUIR_WKUPT3		(1 << 19)
/** SUPC_WUIR_WKUPT2 Wake Up Input Type 2 **/
#define SUPC_WUIR_WKUPT2		(1 << 18)
/** SUPC_WUIR_WKUPT1 Wake Up Input Type 1 **/
#define SUPC_WUIR_WKUPT1		(1 << 17)
/** SUPC_WUIR_WKUPT0 Wake Up Input Type 0 **/
#define SUPC_WUIR_WKUPT0		(1 << 16)
/** SUPC_WUIR_WKUPEN15 Wake Up Input Enable 15 **/
#define SUPC_WUIR_WKUPEN15		(1 << 15)
/** SUPC_WUIR_WKUPEN14 Wake Up Input Enable 14 **/
#define SUPC_WUIR_WKUPEN14		(1 << 14)
/** SUPC_WUIR_WKUPEN13 Wake Up Input Enable 13 **/
#define SUPC_WUIR_WKUPEN13		(1 << 13)
/** SUPC_WUIR_WKUPEN12 Wake Up Input Enable 12 **/
#define SUPC_WUIR_WKUPEN12		(1 << 12)
/** SUPC_WUIR_WKUPEN11 Wake Up Input Enable 11 **/
#define SUPC_WUIR_WKUPEN11		(1 << 11)
/** SUPC_WUIR_WKUPEN10 Wake Up Input Enable 10 **/
#define SUPC_WUIR_WKUPEN10		(1 << 10)
/** SUPC_WUIR_WKUPEN9 Wake Up Input Enable 9 **/
#define SUPC_WUIR_WKUPEN9		(1 << 9)
/** SUPC_WUIR_WKUPEN8 Wake Up Input Enable 8 **/
#define SUPC_WUIR_WKUPEN8		(1 << 8)
/** SUPC_WUIR_WKUPEN7 Wake Up Input Enable 7 **/
#define SUPC_WUIR_WKUPEN7		(1 << 7)
/** SUPC_WUIR_WKUPEN6 Wake Up Input Enable 6 **/
#define SUPC_WUIR_WKUPEN6		(1 << 6)
/** SUPC_WUIR_WKUPEN5 Wake Up Input Enable 5 **/
#define SUPC_WUIR_WKUPEN5		(1 << 5)
/** SUPC_WUIR_WKUPEN4 Wake Up Input Enable 4 **/
#define SUPC_WUIR_WKUPEN4		(1 << 4)
/** SUPC_WUIR_WKUPEN3 Wake Up Input Enable 3 **/
#define SUPC_WUIR_WKUPEN3		(1 << 3)
/** SUPC_WUIR_WKUPEN2 Wake Up Input Enable 2 **/
#define SUPC_WUIR_WKUPEN2		(1 << 2)
/** SUPC_WUIR_WKUPEN1 Wake Up Input Enable 1 **/
#define SUPC_WUIR_WKUPEN1		(1 << 1)
/** SUPC_WUIR_WKUPEN0 Wake Up Input Enable 0 **/
#define SUPC_WUIR_WKUPEN0		(1 << 0)

/**@}*/

/** @defgroup supc_sr SR Supply Controller Status Register
@{*/

/** SUPC_SR_WKUPIS15 WKUP Input Status 15 **/
#define SUPC_SR_WKUPIS15		(1 << 31)
/** SUPC_SR_WKUPIS14 WKUP Input Status 14 **/
#define SUPC_SR_WKUPIS14		(1 << 30)
/** SUPC_SR_WKUPIS13 WKUP Input Status 13 **/
#define SUPC_SR_WKUPIS13		(1 << 29)
/** SUPC_SR_WKUPIS12 WKUP Input Status 12 **/
#define SUPC_SR_WKUPIS12		(1 << 28)
/** SUPC_SR_WKUPIS11 WKUP Input Status 11 **/
#define SUPC_SR_WKUPIS11		(1 << 27)
/** SUPC_SR_WKUPIS10 WKUP Input Status 10 **/
#define SUPC_SR_WKUPIS10		(1 << 26)
/** SUPC_SR_WKUPIS9 WKUP Input Status 9 **/
#define SUPC_SR_WKUPIS9		(1 << 25)
/** SUPC_SR_WKUPIS8 WKUP Input Status 8 **/
#define SUPC_SR_WKUPIS8		(1 << 24)
/** SUPC_SR_WKUPIS7 WKUP Input Status 7 **/
#define SUPC_SR_WKUPIS7		(1 << 23)
/** SUPC_SR_WKUPIS6 WKUP Input Status 6 **/
#define SUPC_SR_WKUPIS6		(1 << 22)
/** SUPC_SR_WKUPIS5 WKUP Input Status 5 **/
#define SUPC_SR_WKUPIS5		(1 << 21)
/** SUPC_SR_WKUPIS4 WKUP Input Status 4 **/
#define SUPC_SR_WKUPIS4		(1 << 20)
/** SUPC_SR_WKUPIS3 WKUP Input Status 3 **/
#define SUPC_SR_WKUPIS3		(1 << 19)
/** SUPC_SR_WKUPIS2 WKUP Input Status 2 **/
#define SUPC_SR_WKUPIS2		(1 << 18)
/** SUPC_SR_WKUPIS1 WKUP Input Status 1 **/
#define SUPC_SR_WKUPIS1		(1 << 17)
/** SUPC_SR_WKUPIS0 WKUP Input Status 0 **/
#define SUPC_SR_WKUPIS0		(1 << 16)
/** SUPC_SR_LPDBCS1 Low Power Debouncer Wake Up Status on WKUP1 **/
#define SUPC_SR_LPDBCS1		(1 << 14)
/** SUPC_SR_LPDBCS0 Low Power Debouncer Wake Up Status on WKUP0 **/
#define SUPC_SR_LPDBCS0		(1 << 13)
/** SUPC_SR_OSCSEL 32-kHz Oscillator Selection Status **/
#define SUPC_SR_OSCSEL		(1 << 7)
/** SUPC_SR_SMOS Supply Monitor Output Status **/
#define SUPC_SR_SMOS		(1 << 6)
/** SUPC_SR_SMS Supply Monitor Status **/
#define SUPC_SR_SMS		(1 << 5)
/** SUPC_SR_SMRSTS Supply Monitor Reset Status **/
#define SUPC_SR_SMRSTS		(1 << 4)
/** SUPC_SR_BODRSTS Brownout Detector Reset Status **/
#define SUPC_SR_BODRSTS		(1 << 3)
/** SUPC_SR_SMWS Supply Monitor Detection Wake Up Status **/
#define SUPC_SR_SMWS		(1 << 2)
/** SUPC_SR_WKUPS WKUP Wake Up Status **/
#define SUPC_SR_WKUPS		(1 << 1)

/**@}*/

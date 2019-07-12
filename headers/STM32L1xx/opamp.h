#pragma once 

/* --- OPAMP: Operational amplifiers -------------------------------- */

/** @defgroup opamp_registers Operational amplifiers Register
@{*/

/** OPAMP_CSR control/status register **/
#define OPAMP_CSR			MMIO32(OPAMP_BASE + 0x00)
/** OPAMP_OTR offset trimming register for normal mode **/
#define OPAMP_OTR			MMIO32(OPAMP_BASE + 0x04)
/** OPAMP_LPOTR OPAMP offset trimming register for low power mode **/
#define OPAMP_LPOTR			MMIO32(OPAMP_BASE + 0x08)

/**@}*/


/** @defgroup opamp_csr CSR control/status register
@{*/

/** OPAMP_CSR_OPA3CALOUT OPAMP3 calibration output **/
#define OPAMP_CSR_OPA3CALOUT		(1 << 31)
/** OPAMP_CSR_OPA2CALOUT OPAMP2 calibration output **/
#define OPAMP_CSR_OPA2CALOUT		(1 << 30)
/** OPAMP_CSR_OPA1CALOUT OPAMP1 calibration output **/
#define OPAMP_CSR_OPA1CALOUT		(1 << 29)
/** OPAMP_CSR_AOP_RANGE Power range selection **/
#define OPAMP_CSR_AOP_RANGE		(1 << 28)
/** OPAMP_CSR_S7SEL2 Switch 7 for OPAMP2 enable **/
#define OPAMP_CSR_S7SEL2		(1 << 27)
/** OPAMP_CSR_ANAWSEL3 Switch SanA enable for OPAMP3 **/
#define OPAMP_CSR_ANAWSEL3		(1 << 26)
/** OPAMP_CSR_ANAWSEL2 Switch SanA enable for OPAMP2 **/
#define OPAMP_CSR_ANAWSEL2		(1 << 25)
/** OPAMP_CSR_ANAWSEL1 Switch SanA enable for OPAMP1 **/
#define OPAMP_CSR_ANAWSEL1		(1 << 24)
/** OPAMP_CSR_OPA3LPM OPAMP3 low power mode **/
#define OPAMP_CSR_OPA3LPM		(1 << 23)
/** OPAMP_CSR_OPA3CAL_H OPAMP3 offset calibration for N differential pair **/
#define OPAMP_CSR_OPA3CAL_H		(1 << 22)
/** OPAMP_CSR_OPA3CAL_L OPAMP3 offset Calibration for P differential pair **/
#define OPAMP_CSR_OPA3CAL_L		(1 << 21)
/** OPAMP_CSR_S6SEL3 Switch 6 for OPAMP3 enable **/
#define OPAMP_CSR_S6SEL3		(1 << 20)
/** OPAMP_CSR_S5SEL3 Switch 5 for OPAMP3 enable **/
#define OPAMP_CSR_S5SEL3		(1 << 19)
/** OPAMP_CSR_S4SEL3 Switch 4 for OPAMP3 enable **/
#define OPAMP_CSR_S4SEL3		(1 << 18)
/** OPAMP_CSR_S3SEL3 Switch 3 for OPAMP3 Enable **/
#define OPAMP_CSR_S3SEL3		(1 << 17)
/** OPAMP_CSR_OPA3PD OPAMP3 power down **/
#define OPAMP_CSR_OPA3PD		(1 << 16)
/** OPAMP_CSR_OPA2LPM OPAMP2 low power mode **/
#define OPAMP_CSR_OPA2LPM		(1 << 15)
/** OPAMP_CSR_OPA2CAL_H OPAMP2 offset calibration for N differential pair **/
#define OPAMP_CSR_OPA2CAL_H		(1 << 14)
/** OPAMP_CSR_OPA2CAL_L OPAMP2 offset Calibration for P differential pair **/
#define OPAMP_CSR_OPA2CAL_L		(1 << 13)
/** OPAMP_CSR_S6SEL2 Switch 6 for OPAMP2 enable **/
#define OPAMP_CSR_S6SEL2		(1 << 12)
/** OPAMP_CSR_S5SEL2 Switch 5 for OPAMP2 enable **/
#define OPAMP_CSR_S5SEL2		(1 << 11)
/** OPAMP_CSR_S4SEL2 Switch 4 for OPAMP2 enable **/
#define OPAMP_CSR_S4SEL2		(1 << 10)
/** OPAMP_CSR_S3SEL2 Switch 3 for OPAMP2 enable **/
#define OPAMP_CSR_S3SEL2		(1 << 9)
/** OPAMP_CSR_OPA2PD OPAMP2 power down **/
#define OPAMP_CSR_OPA2PD		(1 << 8)
/** OPAMP_CSR_OPA1LPM OPAMP1 low power mode **/
#define OPAMP_CSR_OPA1LPM		(1 << 7)
/** OPAMP_CSR_OPA1CAL_H OPAMP1 offset calibration for N differential pair **/
#define OPAMP_CSR_OPA1CAL_H		(1 << 6)
/** OPAMP_CSR_OPA1CAL_L OPAMP1 offset calibration for P differential pair **/
#define OPAMP_CSR_OPA1CAL_L		(1 << 5)
/** OPAMP_CSR_S6SEL1 Switch 6 for OPAMP1 enable **/
#define OPAMP_CSR_S6SEL1		(1 << 4)
/** OPAMP_CSR_S5SEL1 Switch 5 for OPAMP1 enable **/
#define OPAMP_CSR_S5SEL1		(1 << 3)
/** OPAMP_CSR_S4SEL1 Switch 4 for OPAMP1 enable **/
#define OPAMP_CSR_S4SEL1		(1 << 2)
/** OPAMP_CSR_S3SEL1 Switch 3 for OPAMP1 enable **/
#define OPAMP_CSR_S3SEL1		(1 << 1)
/** OPAMP_CSR_OPA1PD OPAMP1 power down **/
#define OPAMP_CSR_OPA1PD		(1 << 0)

/**@}*/

/** @defgroup opamp_otr OTR offset trimming register for normal mode
@{*/

/** OPAMP_OTR_OT_USER Select user or factory trimming value **/
#define OPAMP_OTR_OT_USER		(1 << 31)

#define OPAMP_OTR_AO3_OPT_OFFSET_TRIM_SHIFT		20
#define OPAMP_OTR_AO3_OPT_OFFSET_TRIM_MASK		0x3ff
/** @defgroup opamp_otr_ao3_opt_offset_trim AO3OPTOFFSETTRIM OPAMP3, 10-bit offset trim value for normal mode
@{*/
/**@}*/


#define OPAMP_OTR_AO2_OPT_OFFSET_TRIM_SHIFT		10
#define OPAMP_OTR_AO2_OPT_OFFSET_TRIM_MASK		0x3ff
/** @defgroup opamp_otr_ao2_opt_offset_trim AO2OPTOFFSETTRIM OPAMP2, 10-bit offset trim value for normal mode
@{*/
/**@}*/


#define OPAMP_OTR_AO1_OPT_OFFSET_TRIM_SHIFT		0
#define OPAMP_OTR_AO1_OPT_OFFSET_TRIM_MASK		0x3ff
/** @defgroup opamp_otr_ao1_opt_offset_trim AO1OPTOFFSETTRIM OPAMP1, 10-bit offset trim value for normal mode
@{*/
/**@}*/


/**@}*/

/** @defgroup opamp_lpotr LPOTR OPAMP offset trimming register for low power mode
@{*/


#define OPAMP_LPOTR_AO3_OPT_OFFSET_TRIM_LP_SHIFT		20
#define OPAMP_LPOTR_AO3_OPT_OFFSET_TRIM_LP_MASK		0x3ff
/** @defgroup opamp_lpotr_ao3_opt_offset_trim_lp AO3OPTOFFSETTRIMLP OPAMP3, 10-bit offset trim value for low power mode
@{*/
/**@}*/


#define OPAMP_LPOTR_AO2_OPT_OFFSET_TRIM_LP_SHIFT		10
#define OPAMP_LPOTR_AO2_OPT_OFFSET_TRIM_LP_MASK		0x3ff
/** @defgroup opamp_lpotr_ao2_opt_offset_trim_lp AO2OPTOFFSETTRIMLP OPAMP2, 10-bit offset trim value for low power mode
@{*/
/**@}*/


#define OPAMP_LPOTR_AO1_OPT_OFFSET_TRIM_LP_SHIFT		0
#define OPAMP_LPOTR_AO1_OPT_OFFSET_TRIM_LP_MASK		0x3ff
/** @defgroup opamp_lpotr_ao1_opt_offset_trim_lp AO1OPTOFFSETTRIMLP OPAMP1, 10-bit offset trim value for low power mode
@{*/
/**@}*/


/**@}*/

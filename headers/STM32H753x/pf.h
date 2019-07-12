#pragma once 

/* --- PF: Processor features --------------------------------------- */

/** @defgroup pf_registers Processor features Register
@{*/

/** PF_CLIDR Cache Level ID register **/
#define PF_CLIDR			MMIO32(PF_BASE + 0x00)
/** PF_CTR Cache Type register **/
#define PF_CTR			MMIO32(PF_BASE + 0x04)
/** PF_CCSIDR Cache Size ID register **/
#define PF_CCSIDR			MMIO32(PF_BASE + 0x08)

/**@}*/


/** @defgroup pf_clidr CLIDR Cache Level ID register
@{*/


#define PF_CLIDR_LoU_SHIFT		27
#define PF_CLIDR_LoU_MASK		0x07
/** @defgroup pf_clidr_lou LoU LoU
@{*/
/**@}*/


#define PF_CLIDR_LoC_SHIFT		24
#define PF_CLIDR_LoC_MASK		0x07
/** @defgroup pf_clidr_loc LoC LoC
@{*/
/**@}*/


#define PF_CLIDR_LoUIS_SHIFT		21
#define PF_CLIDR_LoUIS_MASK		0x07
/** @defgroup pf_clidr_louis LoUIS LoUIS
@{*/
/**@}*/


#define PF_CLIDR_CL7_SHIFT		18
#define PF_CLIDR_CL7_MASK		0x07
/** @defgroup pf_clidr_cl7 CL7 CL7
@{*/
/**@}*/


#define PF_CLIDR_CL6_SHIFT		15
#define PF_CLIDR_CL6_MASK		0x07
/** @defgroup pf_clidr_cl6 CL6 CL6
@{*/
/**@}*/


#define PF_CLIDR_CL5_SHIFT		12
#define PF_CLIDR_CL5_MASK		0x07
/** @defgroup pf_clidr_cl5 CL5 CL5
@{*/
/**@}*/


#define PF_CLIDR_CL4_SHIFT		9
#define PF_CLIDR_CL4_MASK		0x07
/** @defgroup pf_clidr_cl4 CL4 CL4
@{*/
/**@}*/


#define PF_CLIDR_CL3_SHIFT		6
#define PF_CLIDR_CL3_MASK		0x07
/** @defgroup pf_clidr_cl3 CL3 CL3
@{*/
/**@}*/


#define PF_CLIDR_CL2_SHIFT		3
#define PF_CLIDR_CL2_MASK		0x07
/** @defgroup pf_clidr_cl2 CL2 CL2
@{*/
/**@}*/


#define PF_CLIDR_CL1_SHIFT		0
#define PF_CLIDR_CL1_MASK		0x07
/** @defgroup pf_clidr_cl1 CL1 CL1
@{*/
/**@}*/


/**@}*/

/** @defgroup pf_ctr CTR Cache Type register
@{*/


#define PF_CTR_Format_SHIFT		29
#define PF_CTR_Format_MASK		0x07
/** @defgroup pf_ctr_format Format Format
@{*/
/**@}*/


#define PF_CTR_CWG_SHIFT		24
#define PF_CTR_CWG_MASK		0x0f
/** @defgroup pf_ctr_cwg CWG CWG
@{*/
/**@}*/


#define PF_CTR_ERG_SHIFT		20
#define PF_CTR_ERG_MASK		0x0f
/** @defgroup pf_ctr_erg ERG ERG
@{*/
/**@}*/


#define PF_CTR_DMinLine_SHIFT		16
#define PF_CTR_DMinLine_MASK		0x0f
/** @defgroup pf_ctr_dminline DMinLine DMinLine
@{*/
/**@}*/


#define PF_CTR__IminLine_SHIFT		0
#define PF_CTR__IminLine_MASK		0x0f
/** @defgroup pf_ctr__iminline IminLine IminLine
@{*/
/**@}*/


/**@}*/

/** @defgroup pf_ccsidr CCSIDR Cache Size ID register
@{*/

/** PF_CCSIDR_WT WT **/
#define PF_CCSIDR_WT		(1 << 31)
/** PF_CCSIDR_WB WB **/
#define PF_CCSIDR_WB		(1 << 30)
/** PF_CCSIDR_RA RA **/
#define PF_CCSIDR_RA		(1 << 29)
/** PF_CCSIDR_WA WA **/
#define PF_CCSIDR_WA		(1 << 28)

#define PF_CCSIDR_NumSets_SHIFT		13
#define PF_CCSIDR_NumSets_MASK		0x7fff
/** @defgroup pf_ccsidr_numsets NumSets NumSets
@{*/
/**@}*/


#define PF_CCSIDR_Associativity_SHIFT		3
#define PF_CCSIDR_Associativity_MASK		0x3ff
/** @defgroup pf_ccsidr_associativity Associativity Associativity
@{*/
/**@}*/


#define PF_CCSIDR_LineSize_SHIFT		0
#define PF_CCSIDR_LineSize_MASK		0x07
/** @defgroup pf_ccsidr_linesize LineSize LineSize
@{*/
/**@}*/


/**@}*/

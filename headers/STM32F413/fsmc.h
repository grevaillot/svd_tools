#pragma once 

/* --- FSMC: Flexible static memory controller ---------------------- */

/** @defgroup fsmc_registers Flexible static memory controller Register
@{*/

/** FSMC_BCR1 BCR1 **/
#define FSMC_BCR1			MMIO32(FSMC_BASE + 0x00)
/** FSMC_BTR1 BTR1 **/
#define FSMC_BTR1			MMIO32(FSMC_BASE + 0x04)
/** FSMC_BCR2 BCR2 **/
#define FSMC_BCR2			MMIO32(FSMC_BASE + 0x08)
/** FSMC_BTR2 BTR2 **/
#define FSMC_BTR2			MMIO32(FSMC_BASE + 0x0c)
/** FSMC_BCR3 BCR3 **/
#define FSMC_BCR3			MMIO32(FSMC_BASE + 0x10)
/** FSMC_BTR3 BTR3 **/
#define FSMC_BTR3			MMIO32(FSMC_BASE + 0x14)
/** FSMC_BCR4 BCR4 **/
#define FSMC_BCR4			MMIO32(FSMC_BASE + 0x18)
/** FSMC_BTR4 BTR4 **/
#define FSMC_BTR4			MMIO32(FSMC_BASE + 0x1c)
/** FSMC_BWTR1 BWTR1 **/
#define FSMC_BWTR1			MMIO32(FSMC_BASE + 0x104)
/** FSMC_BWTR2 BWTR2 **/
#define FSMC_BWTR2			MMIO32(FSMC_BASE + 0x10c)
/** FSMC_BWTR3 BWTR3 **/
#define FSMC_BWTR3			MMIO32(FSMC_BASE + 0x114)
/** FSMC_BWTR4 BWTR4 **/
#define FSMC_BWTR4			MMIO32(FSMC_BASE + 0x11c)

/**@}*/


/** @defgroup fsmc_bcr1 BCR1 BCR1
@{*/

/** FSMC_BCR1_WFDIS Write FIFO Disable **/
#define FSMC_BCR1_WFDIS		(1 << 21)
/** FSMC_BCR1_CCLKEN Continuous Clock Enable **/
#define FSMC_BCR1_CCLKEN		(1 << 20)
/** FSMC_BCR1_CBURSTRW Write burst enable **/
#define FSMC_BCR1_CBURSTRW		(1 << 19)

#define FSMC_BCR1_CPSIZE_SHIFT		16
#define FSMC_BCR1_CPSIZE_MASK		0x07
/** @defgroup fsmc_bcr1_cpsize CPSIZE CRAM page size
@{*/
/**@}*/

/** FSMC_BCR1_ASYNCWAIT Wait signal during asynchronous transfers **/
#define FSMC_BCR1_ASYNCWAIT		(1 << 15)
/** FSMC_BCR1_EXTMOD Extended mode enable **/
#define FSMC_BCR1_EXTMOD		(1 << 14)
/** FSMC_BCR1_WAITEN Wait enable bit **/
#define FSMC_BCR1_WAITEN		(1 << 13)
/** FSMC_BCR1_WREN Write enable bitWREN **/
#define FSMC_BCR1_WREN		(1 << 12)
/** FSMC_BCR1_WAITCFG Wait timing configuration **/
#define FSMC_BCR1_WAITCFG		(1 << 11)
/** FSMC_BCR1_WAITPOL Wait signal polarity bit **/
#define FSMC_BCR1_WAITPOL		(1 << 9)
/** FSMC_BCR1_BURSTEN Burst enable bit **/
#define FSMC_BCR1_BURSTEN		(1 << 8)
/** FSMC_BCR1_FACCEN Flash access enable **/
#define FSMC_BCR1_FACCEN		(1 << 6)

#define FSMC_BCR1_MWID_SHIFT		4
#define FSMC_BCR1_MWID_MASK		0x03
/** @defgroup fsmc_bcr1_mwid MWID Memory data bus width
@{*/
/**@}*/


#define FSMC_BCR1_MTYP_SHIFT		2
#define FSMC_BCR1_MTYP_MASK		0x03
/** @defgroup fsmc_bcr1_mtyp MTYP Memory type
@{*/
/**@}*/

/** FSMC_BCR1_MUXEN Memory bank enable bit **/
#define FSMC_BCR1_MUXEN		(1 << 1)
/** FSMC_BCR1_MBKEN Memory bank enable bit **/
#define FSMC_BCR1_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fsmc_btr1 BTR1 BTR1
@{*/


#define FSMC_BTR1_ACCMOD_SHIFT		28
#define FSMC_BTR1_ACCMOD_MASK		0x03
/** @defgroup fsmc_btr1_accmod ACCMOD Access mode
@{*/
/**@}*/


#define FSMC_BTR1_DATLAT_SHIFT		24
#define FSMC_BTR1_DATLAT_MASK		0x0f
/** @defgroup fsmc_btr1_datlat DATLAT Data latency
@{*/
/**@}*/


#define FSMC_BTR1_CLKDIV_SHIFT		20
#define FSMC_BTR1_CLKDIV_MASK		0x0f
/** @defgroup fsmc_btr1_clkdiv CLKDIV Clock divide ratio
@{*/
/**@}*/


#define FSMC_BTR1_BUSTURN_SHIFT		16
#define FSMC_BTR1_BUSTURN_MASK		0x0f
/** @defgroup fsmc_btr1_busturn BUSTURN Bus turnaround phase duration
@{*/
/**@}*/


#define FSMC_BTR1_DATAST_SHIFT		8
#define FSMC_BTR1_DATAST_MASK		0xff
/** @defgroup fsmc_btr1_datast DATAST Data-phase duration
@{*/
/**@}*/


#define FSMC_BTR1_ADDHLD_SHIFT		4
#define FSMC_BTR1_ADDHLD_MASK		0x0f
/** @defgroup fsmc_btr1_addhld ADDHLD Address-hold phase duration
@{*/
/**@}*/


#define FSMC_BTR1_ADDSET_SHIFT		0
#define FSMC_BTR1_ADDSET_MASK		0x0f
/** @defgroup fsmc_btr1_addset ADDSET Address setup phase duration
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bcr2 BCR2 BCR2
@{*/

/** FSMC_BCR2_WFDIS Write FIFO Disable **/
#define FSMC_BCR2_WFDIS		(1 << 21)
/** FSMC_BCR2_CCLKEN Continuous Clock Enable **/
#define FSMC_BCR2_CCLKEN		(1 << 20)
/** FSMC_BCR2_CBURSTRW Write burst enable **/
#define FSMC_BCR2_CBURSTRW		(1 << 19)

#define FSMC_BCR2_CPSIZE_SHIFT		16
#define FSMC_BCR2_CPSIZE_MASK		0x07
/** @defgroup fsmc_bcr2_cpsize CPSIZE CRAM page size
@{*/
/**@}*/

/** FSMC_BCR2_ASYNCWAIT Wait signal during asynchronous transfers **/
#define FSMC_BCR2_ASYNCWAIT		(1 << 15)
/** FSMC_BCR2_EXTMOD Extended mode enable **/
#define FSMC_BCR2_EXTMOD		(1 << 14)
/** FSMC_BCR2_WAITEN Wait enable bit **/
#define FSMC_BCR2_WAITEN		(1 << 13)
/** FSMC_BCR2_WREN Write enable bit **/
#define FSMC_BCR2_WREN		(1 << 12)
/** FSMC_BCR2_WAITCFG Wait timing configuration **/
#define FSMC_BCR2_WAITCFG		(1 << 11)
/** FSMC_BCR2_WAITPOL Wait signal polarity bit **/
#define FSMC_BCR2_WAITPOL		(1 << 9)
/** FSMC_BCR2_BURSTEN Burst enable bit **/
#define FSMC_BCR2_BURSTEN		(1 << 8)
/** FSMC_BCR2_FACCEN Flash access enable **/
#define FSMC_BCR2_FACCEN		(1 << 6)

#define FSMC_BCR2_MWID_SHIFT		4
#define FSMC_BCR2_MWID_MASK		0x03
/** @defgroup fsmc_bcr2_mwid MWID Memory data bus width
@{*/
/**@}*/


#define FSMC_BCR2_MTYP_SHIFT		2
#define FSMC_BCR2_MTYP_MASK		0x03
/** @defgroup fsmc_bcr2_mtyp MTYP Memory type
@{*/
/**@}*/

/** FSMC_BCR2_MUXEN Address/data multiplexing enable bit **/
#define FSMC_BCR2_MUXEN		(1 << 1)
/** FSMC_BCR2_MBKEN Memory bank enable bit **/
#define FSMC_BCR2_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fsmc_btr2 BTR2 BTR2
@{*/


#define FSMC_BTR2_ACCMOD_SHIFT		28
#define FSMC_BTR2_ACCMOD_MASK		0x03
/** @defgroup fsmc_btr2_accmod ACCMOD Access mode
@{*/
/**@}*/


#define FSMC_BTR2_DATLAT_SHIFT		24
#define FSMC_BTR2_DATLAT_MASK		0x0f
/** @defgroup fsmc_btr2_datlat DATLAT Data latency
@{*/
/**@}*/


#define FSMC_BTR2_CLKDIV_SHIFT		20
#define FSMC_BTR2_CLKDIV_MASK		0x0f
/** @defgroup fsmc_btr2_clkdiv CLKDIV Clock divide ratio
@{*/
/**@}*/


#define FSMC_BTR2_BUSTURN_SHIFT		16
#define FSMC_BTR2_BUSTURN_MASK		0x0f
/** @defgroup fsmc_btr2_busturn BUSTURN Bus turnaround phase duration
@{*/
/**@}*/


#define FSMC_BTR2_DATAST_SHIFT		8
#define FSMC_BTR2_DATAST_MASK		0xff
/** @defgroup fsmc_btr2_datast DATAST Data-phase duration
@{*/
/**@}*/


#define FSMC_BTR2_ADDHLD_SHIFT		4
#define FSMC_BTR2_ADDHLD_MASK		0x0f
/** @defgroup fsmc_btr2_addhld ADDHLD Address-hold phase duration
@{*/
/**@}*/


#define FSMC_BTR2_ADDSET_SHIFT		0
#define FSMC_BTR2_ADDSET_MASK		0x0f
/** @defgroup fsmc_btr2_addset ADDSET Address setup phase duration
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bcr3 BCR3 BCR3
@{*/

/** FSMC_BCR3_WFDIS Write FIFO Disable **/
#define FSMC_BCR3_WFDIS		(1 << 21)
/** FSMC_BCR3_CCLKEN Continuous Clock Enable **/
#define FSMC_BCR3_CCLKEN		(1 << 20)
/** FSMC_BCR3_CBURSTRW Write burst enable **/
#define FSMC_BCR3_CBURSTRW		(1 << 19)

#define FSMC_BCR3_CPSIZE_SHIFT		16
#define FSMC_BCR3_CPSIZE_MASK		0x07
/** @defgroup fsmc_bcr3_cpsize CPSIZE CRAM page size
@{*/
/**@}*/

/** FSMC_BCR3_ASYNCWAIT Wait signal during asynchronous transfers **/
#define FSMC_BCR3_ASYNCWAIT		(1 << 15)
/** FSMC_BCR3_EXTMOD Extended mode enable **/
#define FSMC_BCR3_EXTMOD		(1 << 14)
/** FSMC_BCR3_WAITEN Write enable bit **/
#define FSMC_BCR3_WAITEN		(1 << 13)
/** FSMC_BCR3_WREN Write enable bit **/
#define FSMC_BCR3_WREN		(1 << 12)
/** FSMC_BCR3_WAITCFG Wait timing configuration **/
#define FSMC_BCR3_WAITCFG		(1 << 11)
/** FSMC_BCR3_WAITPOL Wait signal polarity bit **/
#define FSMC_BCR3_WAITPOL		(1 << 9)
/** FSMC_BCR3_BURSTEN Burst enable bit **/
#define FSMC_BCR3_BURSTEN		(1 << 8)
/** FSMC_BCR3_FACCEN Flash access enable **/
#define FSMC_BCR3_FACCEN		(1 << 6)

#define FSMC_BCR3_MWID_SHIFT		4
#define FSMC_BCR3_MWID_MASK		0x03
/** @defgroup fsmc_bcr3_mwid MWID Memory data bus width
@{*/
/**@}*/


#define FSMC_BCR3_MTYP_SHIFT		2
#define FSMC_BCR3_MTYP_MASK		0x03
/** @defgroup fsmc_bcr3_mtyp MTYP Memory type
@{*/
/**@}*/

/** FSMC_BCR3_MUXEN Address/data multiplexing enable bit **/
#define FSMC_BCR3_MUXEN		(1 << 1)
/** FSMC_BCR3_MBKEN Memory bank enable bit **/
#define FSMC_BCR3_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fsmc_btr3 BTR3 BTR3
@{*/


#define FSMC_BTR3_ACCMOD_SHIFT		28
#define FSMC_BTR3_ACCMOD_MASK		0x03
/** @defgroup fsmc_btr3_accmod ACCMOD Access mode
@{*/
/**@}*/


#define FSMC_BTR3_DATLAT_SHIFT		24
#define FSMC_BTR3_DATLAT_MASK		0x0f
/** @defgroup fsmc_btr3_datlat DATLAT Data latency
@{*/
/**@}*/


#define FSMC_BTR3_CLKDIV_SHIFT		20
#define FSMC_BTR3_CLKDIV_MASK		0x0f
/** @defgroup fsmc_btr3_clkdiv CLKDIV Clock divide ratio
@{*/
/**@}*/


#define FSMC_BTR3_BUSTURN_SHIFT		16
#define FSMC_BTR3_BUSTURN_MASK		0x0f
/** @defgroup fsmc_btr3_busturn BUSTURN Bus turnaround phase duration
@{*/
/**@}*/


#define FSMC_BTR3_DATAST_SHIFT		8
#define FSMC_BTR3_DATAST_MASK		0xff
/** @defgroup fsmc_btr3_datast DATAST Data-phase duration
@{*/
/**@}*/


#define FSMC_BTR3_ADDHLD_SHIFT		4
#define FSMC_BTR3_ADDHLD_MASK		0x0f
/** @defgroup fsmc_btr3_addhld ADDHLD Address-hold phase duration
@{*/
/**@}*/


#define FSMC_BTR3_ADDSET_SHIFT		0
#define FSMC_BTR3_ADDSET_MASK		0x0f
/** @defgroup fsmc_btr3_addset ADDSET Address setup phase duration
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bcr4 BCR4 BCR4
@{*/

/** FSMC_BCR4_WFDIS Write FIFO Disable **/
#define FSMC_BCR4_WFDIS		(1 << 21)
/** FSMC_BCR4_CCLKEN Continuous Clock Enable **/
#define FSMC_BCR4_CCLKEN		(1 << 20)
/** FSMC_BCR4_CBURSTRW Write burst enable **/
#define FSMC_BCR4_CBURSTRW		(1 << 19)

#define FSMC_BCR4_CPSIZE_SHIFT		16
#define FSMC_BCR4_CPSIZE_MASK		0x07
/** @defgroup fsmc_bcr4_cpsize CPSIZE CRAM page size
@{*/
/**@}*/

/** FSMC_BCR4_ASYNCWAIT Extended mode enable **/
#define FSMC_BCR4_ASYNCWAIT		(1 << 15)
/** FSMC_BCR4_EXTMOD Extended mode enable **/
#define FSMC_BCR4_EXTMOD		(1 << 14)
/** FSMC_BCR4_WAITEN Wait enable bit **/
#define FSMC_BCR4_WAITEN		(1 << 13)
/** FSMC_BCR4_WREN Write enable bit **/
#define FSMC_BCR4_WREN		(1 << 12)
/** FSMC_BCR4_WAITCFG Wait timing configuration **/
#define FSMC_BCR4_WAITCFG		(1 << 11)
/** FSMC_BCR4_WAITPOL Wait signal polarity bit **/
#define FSMC_BCR4_WAITPOL		(1 << 9)
/** FSMC_BCR4_BURSTEN Burst enable bit **/
#define FSMC_BCR4_BURSTEN		(1 << 8)
/** FSMC_BCR4_FACCEN Flash access enable **/
#define FSMC_BCR4_FACCEN		(1 << 6)

#define FSMC_BCR4_MWID_SHIFT		4
#define FSMC_BCR4_MWID_MASK		0x03
/** @defgroup fsmc_bcr4_mwid MWID Memory data bus width
@{*/
/**@}*/


#define FSMC_BCR4_MTYP_SHIFT		2
#define FSMC_BCR4_MTYP_MASK		0x03
/** @defgroup fsmc_bcr4_mtyp MTYP Memory type
@{*/
/**@}*/

/** FSMC_BCR4_MUXEN Address/data multiplexing enable bit **/
#define FSMC_BCR4_MUXEN		(1 << 1)
/** FSMC_BCR4_MBKEN Memory bank enable bit **/
#define FSMC_BCR4_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fsmc_btr4 BTR4 BTR4
@{*/


#define FSMC_BTR4_ACCMOD_SHIFT		28
#define FSMC_BTR4_ACCMOD_MASK		0x03
/** @defgroup fsmc_btr4_accmod ACCMOD Access mode
@{*/
/**@}*/


#define FSMC_BTR4_DATLAT_SHIFT		24
#define FSMC_BTR4_DATLAT_MASK		0x0f
/** @defgroup fsmc_btr4_datlat DATLAT Data latency
@{*/
/**@}*/


#define FSMC_BTR4_CLKDIV_SHIFT		20
#define FSMC_BTR4_CLKDIV_MASK		0x0f
/** @defgroup fsmc_btr4_clkdiv CLKDIV Clock divide ratio
@{*/
/**@}*/


#define FSMC_BTR4_BUSTURN_SHIFT		16
#define FSMC_BTR4_BUSTURN_MASK		0x0f
/** @defgroup fsmc_btr4_busturn BUSTURN Bus turnaround phase duration
@{*/
/**@}*/


#define FSMC_BTR4_DATAST_SHIFT		8
#define FSMC_BTR4_DATAST_MASK		0xff
/** @defgroup fsmc_btr4_datast DATAST Data-phase duration
@{*/
/**@}*/


#define FSMC_BTR4_ADDHLD_SHIFT		4
#define FSMC_BTR4_ADDHLD_MASK		0x0f
/** @defgroup fsmc_btr4_addhld ADDHLD Address-hold phase duration
@{*/
/**@}*/


#define FSMC_BTR4_ADDSET_SHIFT		0
#define FSMC_BTR4_ADDSET_MASK		0x0f
/** @defgroup fsmc_btr4_addset ADDSET Address setup phase duration
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bwtr1 BWTR1 BWTR1
@{*/


#define FSMC_BWTR1_ACCMOD_SHIFT		28
#define FSMC_BWTR1_ACCMOD_MASK		0x03
/** @defgroup fsmc_bwtr1_accmod ACCMOD Access mode
@{*/
/**@}*/


#define FSMC_BWTR1_BUSTURN_SHIFT		16
#define FSMC_BWTR1_BUSTURN_MASK		0x0f
/** @defgroup fsmc_bwtr1_busturn BUSTURN Bus turnaround phase duration
@{*/
/**@}*/


#define FSMC_BWTR1_DATAST_SHIFT		8
#define FSMC_BWTR1_DATAST_MASK		0xff
/** @defgroup fsmc_bwtr1_datast DATAST Data-phase duration
@{*/
/**@}*/


#define FSMC_BWTR1_ADDHLD_SHIFT		4
#define FSMC_BWTR1_ADDHLD_MASK		0x0f
/** @defgroup fsmc_bwtr1_addhld ADDHLD Address-hold phase duration
@{*/
/**@}*/


#define FSMC_BWTR1_ADDSET_SHIFT		0
#define FSMC_BWTR1_ADDSET_MASK		0x0f
/** @defgroup fsmc_bwtr1_addset ADDSET Address setup phase duration
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bwtr2 BWTR2 BWTR2
@{*/


#define FSMC_BWTR2_ACCMOD_SHIFT		28
#define FSMC_BWTR2_ACCMOD_MASK		0x03
/** @defgroup fsmc_bwtr2_accmod ACCMOD Access mode
@{*/
/**@}*/


#define FSMC_BWTR2_BUSTURN_SHIFT		16
#define FSMC_BWTR2_BUSTURN_MASK		0x0f
/** @defgroup fsmc_bwtr2_busturn BUSTURN Bus turnaround phase duration
@{*/
/**@}*/


#define FSMC_BWTR2_DATAST_SHIFT		8
#define FSMC_BWTR2_DATAST_MASK		0xff
/** @defgroup fsmc_bwtr2_datast DATAST Data-phase duration
@{*/
/**@}*/


#define FSMC_BWTR2_ADDHLD_SHIFT		4
#define FSMC_BWTR2_ADDHLD_MASK		0x0f
/** @defgroup fsmc_bwtr2_addhld ADDHLD Address-hold phase duration
@{*/
/**@}*/


#define FSMC_BWTR2_ADDSET_SHIFT		0
#define FSMC_BWTR2_ADDSET_MASK		0x0f
/** @defgroup fsmc_bwtr2_addset ADDSET Address setup phase duration
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bwtr3 BWTR3 BWTR3
@{*/


#define FSMC_BWTR3_ACCMOD_SHIFT		28
#define FSMC_BWTR3_ACCMOD_MASK		0x03
/** @defgroup fsmc_bwtr3_accmod ACCMOD Access mode
@{*/
/**@}*/


#define FSMC_BWTR3_BUSTURN_SHIFT		16
#define FSMC_BWTR3_BUSTURN_MASK		0x0f
/** @defgroup fsmc_bwtr3_busturn BUSTURN Bus turnaround phase duration
@{*/
/**@}*/


#define FSMC_BWTR3_DATAST_SHIFT		8
#define FSMC_BWTR3_DATAST_MASK		0xff
/** @defgroup fsmc_bwtr3_datast DATAST Data-phase duration
@{*/
/**@}*/


#define FSMC_BWTR3_ADDHLD_SHIFT		4
#define FSMC_BWTR3_ADDHLD_MASK		0x0f
/** @defgroup fsmc_bwtr3_addhld ADDHLD Address-hold phase duration
@{*/
/**@}*/


#define FSMC_BWTR3_ADDSET_SHIFT		0
#define FSMC_BWTR3_ADDSET_MASK		0x0f
/** @defgroup fsmc_bwtr3_addset ADDSET Address setup phase duration
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bwtr4 BWTR4 BWTR4
@{*/


#define FSMC_BWTR4_ACCMOD_SHIFT		28
#define FSMC_BWTR4_ACCMOD_MASK		0x03
/** @defgroup fsmc_bwtr4_accmod ACCMOD Access mode
@{*/
/**@}*/


#define FSMC_BWTR4_BUSTURN_SHIFT		16
#define FSMC_BWTR4_BUSTURN_MASK		0x0f
/** @defgroup fsmc_bwtr4_busturn BUSTURN Bus turnaround phase duration
@{*/
/**@}*/


#define FSMC_BWTR4_DATAST_SHIFT		8
#define FSMC_BWTR4_DATAST_MASK		0xff
/** @defgroup fsmc_bwtr4_datast DATAST Data-phase duration
@{*/
/**@}*/


#define FSMC_BWTR4_ADDHLD_SHIFT		4
#define FSMC_BWTR4_ADDHLD_MASK		0x0f
/** @defgroup fsmc_bwtr4_addhld ADDHLD Address-hold phase duration
@{*/
/**@}*/


#define FSMC_BWTR4_ADDSET_SHIFT		0
#define FSMC_BWTR4_ADDSET_MASK		0x0f
/** @defgroup fsmc_bwtr4_addset ADDSET Address setup phase duration
@{*/
/**@}*/


/**@}*/

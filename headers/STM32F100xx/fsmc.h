#pragma once 

/* --- FSMC: Flexible static memory controller ---------------------- */

/** @defgroup fsmc_registers Flexible static memory controller Register
@{*/

/** FSMC_BCR1 SRAM/NOR-Flash chip-select control register 1 **/
#define FSMC_BCR1			MMIO32(FSMC_BASE + 0x00)
/** FSMC_BTR1 SRAM/NOR-Flash chip-select timing register 1 **/
#define FSMC_BTR1			MMIO32(FSMC_BASE + 0x04)
/** FSMC_BCR2 SRAM/NOR-Flash chip-select control register 2 **/
#define FSMC_BCR2			MMIO32(FSMC_BASE + 0x08)
/** FSMC_BTR2 SRAM/NOR-Flash chip-select timing register 2 **/
#define FSMC_BTR2			MMIO32(FSMC_BASE + 0x0c)
/** FSMC_BCR3 SRAM/NOR-Flash chip-select control register 3 **/
#define FSMC_BCR3			MMIO32(FSMC_BASE + 0x10)
/** FSMC_BTR3 SRAM/NOR-Flash chip-select timing register 3 **/
#define FSMC_BTR3			MMIO32(FSMC_BASE + 0x14)
/** FSMC_BCR4 SRAM/NOR-Flash chip-select control register 4 **/
#define FSMC_BCR4			MMIO32(FSMC_BASE + 0x18)
/** FSMC_BTR4 SRAM/NOR-Flash chip-select timing register 4 **/
#define FSMC_BTR4			MMIO32(FSMC_BASE + 0x1c)
/** FSMC_BWTR1 SRAM/NOR-Flash write timing registers 1 **/
#define FSMC_BWTR1			MMIO32(FSMC_BASE + 0x104)
/** FSMC_BWTR2 SRAM/NOR-Flash write timing registers 2 **/
#define FSMC_BWTR2			MMIO32(FSMC_BASE + 0x10c)
/** FSMC_BWTR3 SRAM/NOR-Flash write timing registers 3 **/
#define FSMC_BWTR3			MMIO32(FSMC_BASE + 0x114)
/** FSMC_BWTR4 SRAM/NOR-Flash write timing registers 4 **/
#define FSMC_BWTR4			MMIO32(FSMC_BASE + 0x11c)

/**@}*/


/** @defgroup fsmc_bcr1 BCR1 SRAM/NOR-Flash chip-select control register 1
@{*/

/** FSMC_BCR1_CBURSTRW CBURSTRW **/
#define FSMC_BCR1_CBURSTRW		(1 << 19)
/** FSMC_BCR1_ASYNCWAIT ASYNCWAIT **/
#define FSMC_BCR1_ASYNCWAIT		(1 << 15)
/** FSMC_BCR1_EXTMOD EXTMOD **/
#define FSMC_BCR1_EXTMOD		(1 << 14)
/** FSMC_BCR1_WAITEN WAITEN **/
#define FSMC_BCR1_WAITEN		(1 << 13)
/** FSMC_BCR1_WREN WREN **/
#define FSMC_BCR1_WREN		(1 << 12)
/** FSMC_BCR1_WAITCFG WAITCFG **/
#define FSMC_BCR1_WAITCFG		(1 << 11)
/** FSMC_BCR1_WAITPOL WAITPOL **/
#define FSMC_BCR1_WAITPOL		(1 << 9)
/** FSMC_BCR1_BURSTEN BURSTEN **/
#define FSMC_BCR1_BURSTEN		(1 << 8)
/** FSMC_BCR1_FACCEN FACCEN **/
#define FSMC_BCR1_FACCEN		(1 << 6)

#define FSMC_BCR1_MWID_SHIFT		4
#define FSMC_BCR1_MWID_MASK		0x03
/** @defgroup fsmc_bcr1_mwid MWID MWID
@{*/
/**@}*/


#define FSMC_BCR1_MTYP_SHIFT		2
#define FSMC_BCR1_MTYP_MASK		0x03
/** @defgroup fsmc_bcr1_mtyp MTYP MTYP
@{*/
/**@}*/

/** FSMC_BCR1_MUXEN MUXEN **/
#define FSMC_BCR1_MUXEN		(1 << 1)
/** FSMC_BCR1_MBKEN MBKEN **/
#define FSMC_BCR1_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fsmc_btr1 BTR1 SRAM/NOR-Flash chip-select timing register 1
@{*/


#define FSMC_BTR1_ACCMOD_SHIFT		28
#define FSMC_BTR1_ACCMOD_MASK		0x03
/** @defgroup fsmc_btr1_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FSMC_BTR1_DATLAT_SHIFT		24
#define FSMC_BTR1_DATLAT_MASK		0x0f
/** @defgroup fsmc_btr1_datlat DATLAT DATLAT
@{*/
/**@}*/


#define FSMC_BTR1_CLKDIV_SHIFT		20
#define FSMC_BTR1_CLKDIV_MASK		0x0f
/** @defgroup fsmc_btr1_clkdiv CLKDIV CLKDIV
@{*/
/**@}*/


#define FSMC_BTR1_BUSTURN_SHIFT		16
#define FSMC_BTR1_BUSTURN_MASK		0x0f
/** @defgroup fsmc_btr1_busturn BUSTURN BUSTURN
@{*/
/**@}*/


#define FSMC_BTR1_DATAST_SHIFT		8
#define FSMC_BTR1_DATAST_MASK		0xff
/** @defgroup fsmc_btr1_datast DATAST DATAST
@{*/
/**@}*/


#define FSMC_BTR1_ADDHLD_SHIFT		4
#define FSMC_BTR1_ADDHLD_MASK		0x0f
/** @defgroup fsmc_btr1_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FSMC_BTR1_ADDSET_SHIFT		0
#define FSMC_BTR1_ADDSET_MASK		0x0f
/** @defgroup fsmc_btr1_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bcr2 BCR2 SRAM/NOR-Flash chip-select control register 2
@{*/

/** FSMC_BCR2_CBURSTRW CBURSTRW **/
#define FSMC_BCR2_CBURSTRW		(1 << 19)
/** FSMC_BCR2_ASYNCWAIT ASYNCWAIT **/
#define FSMC_BCR2_ASYNCWAIT		(1 << 15)
/** FSMC_BCR2_EXTMOD EXTMOD **/
#define FSMC_BCR2_EXTMOD		(1 << 14)
/** FSMC_BCR2_WAITEN WAITEN **/
#define FSMC_BCR2_WAITEN		(1 << 13)
/** FSMC_BCR2_WREN WREN **/
#define FSMC_BCR2_WREN		(1 << 12)
/** FSMC_BCR2_WAITCFG WAITCFG **/
#define FSMC_BCR2_WAITCFG		(1 << 11)
/** FSMC_BCR2_WRAPMOD WRAPMOD **/
#define FSMC_BCR2_WRAPMOD		(1 << 10)
/** FSMC_BCR2_WAITPOL WAITPOL **/
#define FSMC_BCR2_WAITPOL		(1 << 9)
/** FSMC_BCR2_BURSTEN BURSTEN **/
#define FSMC_BCR2_BURSTEN		(1 << 8)
/** FSMC_BCR2_FACCEN FACCEN **/
#define FSMC_BCR2_FACCEN		(1 << 6)

#define FSMC_BCR2_MWID_SHIFT		4
#define FSMC_BCR2_MWID_MASK		0x03
/** @defgroup fsmc_bcr2_mwid MWID MWID
@{*/
/**@}*/


#define FSMC_BCR2_MTYP_SHIFT		2
#define FSMC_BCR2_MTYP_MASK		0x03
/** @defgroup fsmc_bcr2_mtyp MTYP MTYP
@{*/
/**@}*/

/** FSMC_BCR2_MUXEN MUXEN **/
#define FSMC_BCR2_MUXEN		(1 << 1)
/** FSMC_BCR2_MBKEN MBKEN **/
#define FSMC_BCR2_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fsmc_btr2 BTR2 SRAM/NOR-Flash chip-select timing register 2
@{*/


#define FSMC_BTR2_ACCMOD_SHIFT		28
#define FSMC_BTR2_ACCMOD_MASK		0x03
/** @defgroup fsmc_btr2_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FSMC_BTR2_DATLAT_SHIFT		24
#define FSMC_BTR2_DATLAT_MASK		0x0f
/** @defgroup fsmc_btr2_datlat DATLAT DATLAT
@{*/
/**@}*/


#define FSMC_BTR2_CLKDIV_SHIFT		20
#define FSMC_BTR2_CLKDIV_MASK		0x0f
/** @defgroup fsmc_btr2_clkdiv CLKDIV CLKDIV
@{*/
/**@}*/


#define FSMC_BTR2_BUSTURN_SHIFT		16
#define FSMC_BTR2_BUSTURN_MASK		0x0f
/** @defgroup fsmc_btr2_busturn BUSTURN BUSTURN
@{*/
/**@}*/


#define FSMC_BTR2_DATAST_SHIFT		8
#define FSMC_BTR2_DATAST_MASK		0xff
/** @defgroup fsmc_btr2_datast DATAST DATAST
@{*/
/**@}*/


#define FSMC_BTR2_ADDHLD_SHIFT		4
#define FSMC_BTR2_ADDHLD_MASK		0x0f
/** @defgroup fsmc_btr2_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FSMC_BTR2_ADDSET_SHIFT		0
#define FSMC_BTR2_ADDSET_MASK		0x0f
/** @defgroup fsmc_btr2_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bcr3 BCR3 SRAM/NOR-Flash chip-select control register 3
@{*/

/** FSMC_BCR3_CBURSTRW CBURSTRW **/
#define FSMC_BCR3_CBURSTRW		(1 << 19)
/** FSMC_BCR3_ASYNCWAIT ASYNCWAIT **/
#define FSMC_BCR3_ASYNCWAIT		(1 << 15)
/** FSMC_BCR3_EXTMOD EXTMOD **/
#define FSMC_BCR3_EXTMOD		(1 << 14)
/** FSMC_BCR3_WAITEN WAITEN **/
#define FSMC_BCR3_WAITEN		(1 << 13)
/** FSMC_BCR3_WREN WREN **/
#define FSMC_BCR3_WREN		(1 << 12)
/** FSMC_BCR3_WAITCFG WAITCFG **/
#define FSMC_BCR3_WAITCFG		(1 << 11)
/** FSMC_BCR3_WRAPMOD WRAPMOD **/
#define FSMC_BCR3_WRAPMOD		(1 << 10)
/** FSMC_BCR3_WAITPOL WAITPOL **/
#define FSMC_BCR3_WAITPOL		(1 << 9)
/** FSMC_BCR3_BURSTEN BURSTEN **/
#define FSMC_BCR3_BURSTEN		(1 << 8)
/** FSMC_BCR3_FACCEN FACCEN **/
#define FSMC_BCR3_FACCEN		(1 << 6)

#define FSMC_BCR3_MWID_SHIFT		4
#define FSMC_BCR3_MWID_MASK		0x03
/** @defgroup fsmc_bcr3_mwid MWID MWID
@{*/
/**@}*/


#define FSMC_BCR3_MTYP_SHIFT		2
#define FSMC_BCR3_MTYP_MASK		0x03
/** @defgroup fsmc_bcr3_mtyp MTYP MTYP
@{*/
/**@}*/

/** FSMC_BCR3_MUXEN MUXEN **/
#define FSMC_BCR3_MUXEN		(1 << 1)
/** FSMC_BCR3_MBKEN MBKEN **/
#define FSMC_BCR3_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fsmc_btr3 BTR3 SRAM/NOR-Flash chip-select timing register 3
@{*/


#define FSMC_BTR3_ACCMOD_SHIFT		28
#define FSMC_BTR3_ACCMOD_MASK		0x03
/** @defgroup fsmc_btr3_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FSMC_BTR3_DATLAT_SHIFT		24
#define FSMC_BTR3_DATLAT_MASK		0x0f
/** @defgroup fsmc_btr3_datlat DATLAT DATLAT
@{*/
/**@}*/


#define FSMC_BTR3_CLKDIV_SHIFT		20
#define FSMC_BTR3_CLKDIV_MASK		0x0f
/** @defgroup fsmc_btr3_clkdiv CLKDIV CLKDIV
@{*/
/**@}*/


#define FSMC_BTR3_BUSTURN_SHIFT		16
#define FSMC_BTR3_BUSTURN_MASK		0x0f
/** @defgroup fsmc_btr3_busturn BUSTURN BUSTURN
@{*/
/**@}*/


#define FSMC_BTR3_DATAST_SHIFT		8
#define FSMC_BTR3_DATAST_MASK		0xff
/** @defgroup fsmc_btr3_datast DATAST DATAST
@{*/
/**@}*/


#define FSMC_BTR3_ADDHLD_SHIFT		4
#define FSMC_BTR3_ADDHLD_MASK		0x0f
/** @defgroup fsmc_btr3_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FSMC_BTR3_ADDSET_SHIFT		0
#define FSMC_BTR3_ADDSET_MASK		0x0f
/** @defgroup fsmc_btr3_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bcr4 BCR4 SRAM/NOR-Flash chip-select control register 4
@{*/

/** FSMC_BCR4_CBURSTRW CBURSTRW **/
#define FSMC_BCR4_CBURSTRW		(1 << 19)
/** FSMC_BCR4_ASYNCWAIT ASYNCWAIT **/
#define FSMC_BCR4_ASYNCWAIT		(1 << 15)
/** FSMC_BCR4_EXTMOD EXTMOD **/
#define FSMC_BCR4_EXTMOD		(1 << 14)
/** FSMC_BCR4_WAITEN WAITEN **/
#define FSMC_BCR4_WAITEN		(1 << 13)
/** FSMC_BCR4_WREN WREN **/
#define FSMC_BCR4_WREN		(1 << 12)
/** FSMC_BCR4_WAITCFG WAITCFG **/
#define FSMC_BCR4_WAITCFG		(1 << 11)
/** FSMC_BCR4_WRAPMOD WRAPMOD **/
#define FSMC_BCR4_WRAPMOD		(1 << 10)
/** FSMC_BCR4_WAITPOL WAITPOL **/
#define FSMC_BCR4_WAITPOL		(1 << 9)
/** FSMC_BCR4_BURSTEN BURSTEN **/
#define FSMC_BCR4_BURSTEN		(1 << 8)
/** FSMC_BCR4_FACCEN FACCEN **/
#define FSMC_BCR4_FACCEN		(1 << 6)

#define FSMC_BCR4_MWID_SHIFT		4
#define FSMC_BCR4_MWID_MASK		0x03
/** @defgroup fsmc_bcr4_mwid MWID MWID
@{*/
/**@}*/


#define FSMC_BCR4_MTYP_SHIFT		2
#define FSMC_BCR4_MTYP_MASK		0x03
/** @defgroup fsmc_bcr4_mtyp MTYP MTYP
@{*/
/**@}*/

/** FSMC_BCR4_MUXEN MUXEN **/
#define FSMC_BCR4_MUXEN		(1 << 1)
/** FSMC_BCR4_MBKEN MBKEN **/
#define FSMC_BCR4_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fsmc_btr4 BTR4 SRAM/NOR-Flash chip-select timing register 4
@{*/


#define FSMC_BTR4_ACCMOD_SHIFT		28
#define FSMC_BTR4_ACCMOD_MASK		0x03
/** @defgroup fsmc_btr4_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FSMC_BTR4_DATLAT_SHIFT		24
#define FSMC_BTR4_DATLAT_MASK		0x0f
/** @defgroup fsmc_btr4_datlat DATLAT DATLAT
@{*/
/**@}*/


#define FSMC_BTR4_CLKDIV_SHIFT		20
#define FSMC_BTR4_CLKDIV_MASK		0x0f
/** @defgroup fsmc_btr4_clkdiv CLKDIV CLKDIV
@{*/
/**@}*/


#define FSMC_BTR4_BUSTURN_SHIFT		16
#define FSMC_BTR4_BUSTURN_MASK		0x0f
/** @defgroup fsmc_btr4_busturn BUSTURN BUSTURN
@{*/
/**@}*/


#define FSMC_BTR4_DATAST_SHIFT		8
#define FSMC_BTR4_DATAST_MASK		0xff
/** @defgroup fsmc_btr4_datast DATAST DATAST
@{*/
/**@}*/


#define FSMC_BTR4_ADDHLD_SHIFT		4
#define FSMC_BTR4_ADDHLD_MASK		0x0f
/** @defgroup fsmc_btr4_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FSMC_BTR4_ADDSET_SHIFT		0
#define FSMC_BTR4_ADDSET_MASK		0x0f
/** @defgroup fsmc_btr4_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bwtr1 BWTR1 SRAM/NOR-Flash write timing registers 1
@{*/


#define FSMC_BWTR1_ACCMOD_SHIFT		28
#define FSMC_BWTR1_ACCMOD_MASK		0x03
/** @defgroup fsmc_bwtr1_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FSMC_BWTR1_DATLAT_SHIFT		24
#define FSMC_BWTR1_DATLAT_MASK		0x0f
/** @defgroup fsmc_bwtr1_datlat DATLAT DATLAT
@{*/
/**@}*/


#define FSMC_BWTR1_CLKDIV_SHIFT		20
#define FSMC_BWTR1_CLKDIV_MASK		0x0f
/** @defgroup fsmc_bwtr1_clkdiv CLKDIV CLKDIV
@{*/
/**@}*/


#define FSMC_BWTR1_DATAST_SHIFT		8
#define FSMC_BWTR1_DATAST_MASK		0xff
/** @defgroup fsmc_bwtr1_datast DATAST DATAST
@{*/
/**@}*/


#define FSMC_BWTR1_ADDHLD_SHIFT		4
#define FSMC_BWTR1_ADDHLD_MASK		0x0f
/** @defgroup fsmc_bwtr1_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FSMC_BWTR1_ADDSET_SHIFT		0
#define FSMC_BWTR1_ADDSET_MASK		0x0f
/** @defgroup fsmc_bwtr1_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bwtr2 BWTR2 SRAM/NOR-Flash write timing registers 2
@{*/


#define FSMC_BWTR2_ACCMOD_SHIFT		28
#define FSMC_BWTR2_ACCMOD_MASK		0x03
/** @defgroup fsmc_bwtr2_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FSMC_BWTR2_DATLAT_SHIFT		24
#define FSMC_BWTR2_DATLAT_MASK		0x0f
/** @defgroup fsmc_bwtr2_datlat DATLAT DATLAT
@{*/
/**@}*/


#define FSMC_BWTR2_CLKDIV_SHIFT		20
#define FSMC_BWTR2_CLKDIV_MASK		0x0f
/** @defgroup fsmc_bwtr2_clkdiv CLKDIV CLKDIV
@{*/
/**@}*/


#define FSMC_BWTR2_DATAST_SHIFT		8
#define FSMC_BWTR2_DATAST_MASK		0xff
/** @defgroup fsmc_bwtr2_datast DATAST DATAST
@{*/
/**@}*/


#define FSMC_BWTR2_ADDHLD_SHIFT		4
#define FSMC_BWTR2_ADDHLD_MASK		0x0f
/** @defgroup fsmc_bwtr2_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FSMC_BWTR2_ADDSET_SHIFT		0
#define FSMC_BWTR2_ADDSET_MASK		0x0f
/** @defgroup fsmc_bwtr2_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bwtr3 BWTR3 SRAM/NOR-Flash write timing registers 3
@{*/


#define FSMC_BWTR3_ACCMOD_SHIFT		28
#define FSMC_BWTR3_ACCMOD_MASK		0x03
/** @defgroup fsmc_bwtr3_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FSMC_BWTR3_DATLAT_SHIFT		24
#define FSMC_BWTR3_DATLAT_MASK		0x0f
/** @defgroup fsmc_bwtr3_datlat DATLAT DATLAT
@{*/
/**@}*/


#define FSMC_BWTR3_CLKDIV_SHIFT		20
#define FSMC_BWTR3_CLKDIV_MASK		0x0f
/** @defgroup fsmc_bwtr3_clkdiv CLKDIV CLKDIV
@{*/
/**@}*/


#define FSMC_BWTR3_DATAST_SHIFT		8
#define FSMC_BWTR3_DATAST_MASK		0xff
/** @defgroup fsmc_bwtr3_datast DATAST DATAST
@{*/
/**@}*/


#define FSMC_BWTR3_ADDHLD_SHIFT		4
#define FSMC_BWTR3_ADDHLD_MASK		0x0f
/** @defgroup fsmc_bwtr3_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FSMC_BWTR3_ADDSET_SHIFT		0
#define FSMC_BWTR3_ADDSET_MASK		0x0f
/** @defgroup fsmc_bwtr3_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fsmc_bwtr4 BWTR4 SRAM/NOR-Flash write timing registers 4
@{*/


#define FSMC_BWTR4_ACCMOD_SHIFT		28
#define FSMC_BWTR4_ACCMOD_MASK		0x03
/** @defgroup fsmc_bwtr4_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FSMC_BWTR4_DATLAT_SHIFT		24
#define FSMC_BWTR4_DATLAT_MASK		0x0f
/** @defgroup fsmc_bwtr4_datlat DATLAT DATLAT
@{*/
/**@}*/


#define FSMC_BWTR4_CLKDIV_SHIFT		20
#define FSMC_BWTR4_CLKDIV_MASK		0x0f
/** @defgroup fsmc_bwtr4_clkdiv CLKDIV CLKDIV
@{*/
/**@}*/


#define FSMC_BWTR4_DATAST_SHIFT		8
#define FSMC_BWTR4_DATAST_MASK		0xff
/** @defgroup fsmc_bwtr4_datast DATAST DATAST
@{*/
/**@}*/


#define FSMC_BWTR4_ADDHLD_SHIFT		4
#define FSMC_BWTR4_ADDHLD_MASK		0x0f
/** @defgroup fsmc_bwtr4_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FSMC_BWTR4_ADDSET_SHIFT		0
#define FSMC_BWTR4_ADDSET_MASK		0x0f
/** @defgroup fsmc_bwtr4_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/
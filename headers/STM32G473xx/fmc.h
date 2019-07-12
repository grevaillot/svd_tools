#pragma once 

/* --- FMC: Flexible memory controller ------------------------------ */

/** @defgroup fmc_registers Flexible memory controller Register
@{*/

/** FMC_BCR1 SRAM/NOR-Flash chip-select control register 1 **/
#define FMC_BCR1			MMIO32(FMC_BASE + 0x00)
/** FMC_BTR1 SRAM/NOR-Flash chip-select timing register 1 **/
#define FMC_BTR1			MMIO32(FMC_BASE + 0x04)
/** FMC_BCR2 SRAM/NOR-Flash chip-select control register 2 **/
#define FMC_BCR2			MMIO32(FMC_BASE + 0x08)
/** FMC_BTR2 SRAM/NOR-Flash chip-select timing register 2 **/
#define FMC_BTR2			MMIO32(FMC_BASE + 0x0c)
/** FMC_BCR3 SRAM/NOR-Flash chip-select control register 3 **/
#define FMC_BCR3			MMIO32(FMC_BASE + 0x10)
/** FMC_BTR3 SRAM/NOR-Flash chip-select timing register 3 **/
#define FMC_BTR3			MMIO32(FMC_BASE + 0x14)
/** FMC_BCR4 SRAM/NOR-Flash chip-select control register 4 **/
#define FMC_BCR4			MMIO32(FMC_BASE + 0x18)
/** FMC_BTR4 SRAM/NOR-Flash chip-select timing register 4 **/
#define FMC_BTR4			MMIO32(FMC_BASE + 0x1c)
/** FMC_PCSCNTR PSRAM chip select counter register **/
#define FMC_PCSCNTR			MMIO32(FMC_BASE + 0x20)
/** FMC_PCR PC Card/NAND Flash control register 3 **/
#define FMC_PCR			MMIO32(FMC_BASE + 0x80)
/** FMC_SR FIFO status and interrupt register 3 **/
#define FMC_SR			MMIO32(FMC_BASE + 0x84)
/** FMC_PMEM Common memory space timing register 3 **/
#define FMC_PMEM			MMIO32(FMC_BASE + 0x88)
/** FMC_PATT Attribute memory space timing register 3 **/
#define FMC_PATT			MMIO32(FMC_BASE + 0x8c)
/** FMC_ECCR ECC result register 3 **/
#define FMC_ECCR			MMIO32(FMC_BASE + 0x94)
/** FMC_BWTR1 SRAM/NOR-Flash write timing registers 1 **/
#define FMC_BWTR1			MMIO32(FMC_BASE + 0x104)
/** FMC_BWTR2 SRAM/NOR-Flash write timing registers 2 **/
#define FMC_BWTR2			MMIO32(FMC_BASE + 0x10c)
/** FMC_BWTR3 SRAM/NOR-Flash write timing registers 3 **/
#define FMC_BWTR3			MMIO32(FMC_BASE + 0x114)
/** FMC_BWTR4 SRAM/NOR-Flash write timing registers 4 **/
#define FMC_BWTR4			MMIO32(FMC_BASE + 0x11c)

/**@}*/


/** @defgroup fmc_bcr1 BCR1 SRAM/NOR-Flash chip-select control register 1
@{*/


#define FMC_BCR1_NBLSET_SHIFT		22
#define FMC_BCR1_NBLSET_MASK		0x03
/** @defgroup fmc_bcr1_nblset NBLSET NBLSET
@{*/
/**@}*/

/** FMC_BCR1_WFDIS WFDIS **/
#define FMC_BCR1_WFDIS		(1 << 21)
/** FMC_BCR1_CCLKEN CCLKEN **/
#define FMC_BCR1_CCLKEN		(1 << 20)
/** FMC_BCR1_CBURSTRW CBURSTRW **/
#define FMC_BCR1_CBURSTRW		(1 << 19)

#define FMC_BCR1_CPSIZE_SHIFT		16
#define FMC_BCR1_CPSIZE_MASK		0x07
/** @defgroup fmc_bcr1_cpsize CPSIZE CPSIZE
@{*/
/**@}*/

/** FMC_BCR1_ASYNCWAIT ASYNCWAIT **/
#define FMC_BCR1_ASYNCWAIT		(1 << 15)
/** FMC_BCR1_EXTMOD EXTMOD **/
#define FMC_BCR1_EXTMOD		(1 << 14)
/** FMC_BCR1_WAITEN WAITEN **/
#define FMC_BCR1_WAITEN		(1 << 13)
/** FMC_BCR1_WREN WREN **/
#define FMC_BCR1_WREN		(1 << 12)
/** FMC_BCR1_WAITCFG WAITCFG **/
#define FMC_BCR1_WAITCFG		(1 << 11)
/** FMC_BCR1_WAITPOL WAITPOL **/
#define FMC_BCR1_WAITPOL		(1 << 9)
/** FMC_BCR1_BURSTEN BURSTEN **/
#define FMC_BCR1_BURSTEN		(1 << 8)
/** FMC_BCR1_FACCEN FACCEN **/
#define FMC_BCR1_FACCEN		(1 << 6)

#define FMC_BCR1_MWID_SHIFT		4
#define FMC_BCR1_MWID_MASK		0x03
/** @defgroup fmc_bcr1_mwid MWID MWID
@{*/
/**@}*/


#define FMC_BCR1_MTYP_SHIFT		2
#define FMC_BCR1_MTYP_MASK		0x03
/** @defgroup fmc_bcr1_mtyp MTYP MTYP
@{*/
/**@}*/

/** FMC_BCR1_MUXEN MUXEN **/
#define FMC_BCR1_MUXEN		(1 << 1)
/** FMC_BCR1_MBKEN MBKEN **/
#define FMC_BCR1_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fmc_btr1 BTR1 SRAM/NOR-Flash chip-select timing register 1
@{*/


#define FMC_BTR1_DATAHLD_SHIFT		30
#define FMC_BTR1_DATAHLD_MASK		0x03
/** @defgroup fmc_btr1_datahld DATAHLD DATAHLD
@{*/
/**@}*/


#define FMC_BTR1_ACCMOD_SHIFT		28
#define FMC_BTR1_ACCMOD_MASK		0x03
/** @defgroup fmc_btr1_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FMC_BTR1_DATLAT_SHIFT		24
#define FMC_BTR1_DATLAT_MASK		0x0f
/** @defgroup fmc_btr1_datlat DATLAT DATLAT
@{*/
/**@}*/


#define FMC_BTR1_CLKDIV_SHIFT		20
#define FMC_BTR1_CLKDIV_MASK		0x0f
/** @defgroup fmc_btr1_clkdiv CLKDIV CLKDIV
@{*/
/**@}*/


#define FMC_BTR1_BUSTURN_SHIFT		16
#define FMC_BTR1_BUSTURN_MASK		0x0f
/** @defgroup fmc_btr1_busturn BUSTURN BUSTURN
@{*/
/**@}*/


#define FMC_BTR1_DATAST_SHIFT		8
#define FMC_BTR1_DATAST_MASK		0xff
/** @defgroup fmc_btr1_datast DATAST DATAST
@{*/
/**@}*/


#define FMC_BTR1_ADDHLD_SHIFT		4
#define FMC_BTR1_ADDHLD_MASK		0x0f
/** @defgroup fmc_btr1_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FMC_BTR1_ADDSET_SHIFT		0
#define FMC_BTR1_ADDSET_MASK		0x0f
/** @defgroup fmc_btr1_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bcr2 BCR2 SRAM/NOR-Flash chip-select control register 2
@{*/


#define FMC_BCR2_NBLSET_SHIFT		22
#define FMC_BCR2_NBLSET_MASK		0x03
/** @defgroup fmc_bcr2_nblset NBLSET NBLSET
@{*/
/**@}*/

/** FMC_BCR2_WFDIS WFDIS **/
#define FMC_BCR2_WFDIS		(1 << 21)
/** FMC_BCR2_CCLKEN CCLKEN **/
#define FMC_BCR2_CCLKEN		(1 << 20)
/** FMC_BCR2_CBURSTRW CBURSTRW **/
#define FMC_BCR2_CBURSTRW		(1 << 19)

#define FMC_BCR2_CPSIZE_SHIFT		16
#define FMC_BCR2_CPSIZE_MASK		0x07
/** @defgroup fmc_bcr2_cpsize CPSIZE CPSIZE
@{*/
/**@}*/

/** FMC_BCR2_ASYNCWAIT ASYNCWAIT **/
#define FMC_BCR2_ASYNCWAIT		(1 << 15)
/** FMC_BCR2_EXTMOD EXTMOD **/
#define FMC_BCR2_EXTMOD		(1 << 14)
/** FMC_BCR2_WAITEN WAITEN **/
#define FMC_BCR2_WAITEN		(1 << 13)
/** FMC_BCR2_WREN WREN **/
#define FMC_BCR2_WREN		(1 << 12)
/** FMC_BCR2_WAITCFG WAITCFG **/
#define FMC_BCR2_WAITCFG		(1 << 11)
/** FMC_BCR2_WAITPOL WAITPOL **/
#define FMC_BCR2_WAITPOL		(1 << 9)
/** FMC_BCR2_BURSTEN BURSTEN **/
#define FMC_BCR2_BURSTEN		(1 << 8)
/** FMC_BCR2_FACCEN FACCEN **/
#define FMC_BCR2_FACCEN		(1 << 6)

#define FMC_BCR2_MWID_SHIFT		4
#define FMC_BCR2_MWID_MASK		0x03
/** @defgroup fmc_bcr2_mwid MWID MWID
@{*/
/**@}*/


#define FMC_BCR2_MTYP_SHIFT		2
#define FMC_BCR2_MTYP_MASK		0x03
/** @defgroup fmc_bcr2_mtyp MTYP MTYP
@{*/
/**@}*/

/** FMC_BCR2_MUXEN MUXEN **/
#define FMC_BCR2_MUXEN		(1 << 1)
/** FMC_BCR2_MBKEN MBKEN **/
#define FMC_BCR2_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fmc_btr2 BTR2 SRAM/NOR-Flash chip-select timing register 2
@{*/


#define FMC_BTR2_DATAHLD_SHIFT		30
#define FMC_BTR2_DATAHLD_MASK		0x03
/** @defgroup fmc_btr2_datahld DATAHLD DATAHLD
@{*/
/**@}*/


#define FMC_BTR2_ACCMOD_SHIFT		28
#define FMC_BTR2_ACCMOD_MASK		0x03
/** @defgroup fmc_btr2_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FMC_BTR2_DATLAT_SHIFT		24
#define FMC_BTR2_DATLAT_MASK		0x0f
/** @defgroup fmc_btr2_datlat DATLAT DATLAT
@{*/
/**@}*/


#define FMC_BTR2_CLKDIV_SHIFT		20
#define FMC_BTR2_CLKDIV_MASK		0x0f
/** @defgroup fmc_btr2_clkdiv CLKDIV CLKDIV
@{*/
/**@}*/


#define FMC_BTR2_BUSTURN_SHIFT		16
#define FMC_BTR2_BUSTURN_MASK		0x0f
/** @defgroup fmc_btr2_busturn BUSTURN BUSTURN
@{*/
/**@}*/


#define FMC_BTR2_DATAST_SHIFT		8
#define FMC_BTR2_DATAST_MASK		0xff
/** @defgroup fmc_btr2_datast DATAST DATAST
@{*/
/**@}*/


#define FMC_BTR2_ADDHLD_SHIFT		4
#define FMC_BTR2_ADDHLD_MASK		0x0f
/** @defgroup fmc_btr2_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FMC_BTR2_ADDSET_SHIFT		0
#define FMC_BTR2_ADDSET_MASK		0x0f
/** @defgroup fmc_btr2_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bcr3 BCR3 SRAM/NOR-Flash chip-select control register 3
@{*/


#define FMC_BCR3_NBLSET_SHIFT		22
#define FMC_BCR3_NBLSET_MASK		0x03
/** @defgroup fmc_bcr3_nblset NBLSET NBLSET
@{*/
/**@}*/

/** FMC_BCR3_WFDIS WFDIS **/
#define FMC_BCR3_WFDIS		(1 << 21)
/** FMC_BCR3_CCLKEN CCLKEN **/
#define FMC_BCR3_CCLKEN		(1 << 20)
/** FMC_BCR3_CBURSTRW CBURSTRW **/
#define FMC_BCR3_CBURSTRW		(1 << 19)

#define FMC_BCR3_CPSIZE_SHIFT		16
#define FMC_BCR3_CPSIZE_MASK		0x07
/** @defgroup fmc_bcr3_cpsize CPSIZE CPSIZE
@{*/
/**@}*/

/** FMC_BCR3_ASYNCWAIT ASYNCWAIT **/
#define FMC_BCR3_ASYNCWAIT		(1 << 15)
/** FMC_BCR3_EXTMOD EXTMOD **/
#define FMC_BCR3_EXTMOD		(1 << 14)
/** FMC_BCR3_WAITEN WAITEN **/
#define FMC_BCR3_WAITEN		(1 << 13)
/** FMC_BCR3_WREN WREN **/
#define FMC_BCR3_WREN		(1 << 12)
/** FMC_BCR3_WAITCFG WAITCFG **/
#define FMC_BCR3_WAITCFG		(1 << 11)
/** FMC_BCR3_WAITPOL WAITPOL **/
#define FMC_BCR3_WAITPOL		(1 << 9)
/** FMC_BCR3_BURSTEN BURSTEN **/
#define FMC_BCR3_BURSTEN		(1 << 8)
/** FMC_BCR3_FACCEN FACCEN **/
#define FMC_BCR3_FACCEN		(1 << 6)

#define FMC_BCR3_MWID_SHIFT		4
#define FMC_BCR3_MWID_MASK		0x03
/** @defgroup fmc_bcr3_mwid MWID MWID
@{*/
/**@}*/


#define FMC_BCR3_MTYP_SHIFT		2
#define FMC_BCR3_MTYP_MASK		0x03
/** @defgroup fmc_bcr3_mtyp MTYP MTYP
@{*/
/**@}*/

/** FMC_BCR3_MUXEN MUXEN **/
#define FMC_BCR3_MUXEN		(1 << 1)
/** FMC_BCR3_MBKEN MBKEN **/
#define FMC_BCR3_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fmc_btr3 BTR3 SRAM/NOR-Flash chip-select timing register 3
@{*/


#define FMC_BTR3_DATAHLD_SHIFT		30
#define FMC_BTR3_DATAHLD_MASK		0x03
/** @defgroup fmc_btr3_datahld DATAHLD DATAHLD
@{*/
/**@}*/


#define FMC_BTR3_ACCMOD_SHIFT		28
#define FMC_BTR3_ACCMOD_MASK		0x03
/** @defgroup fmc_btr3_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FMC_BTR3_DATLAT_SHIFT		24
#define FMC_BTR3_DATLAT_MASK		0x0f
/** @defgroup fmc_btr3_datlat DATLAT DATLAT
@{*/
/**@}*/


#define FMC_BTR3_CLKDIV_SHIFT		20
#define FMC_BTR3_CLKDIV_MASK		0x0f
/** @defgroup fmc_btr3_clkdiv CLKDIV CLKDIV
@{*/
/**@}*/


#define FMC_BTR3_BUSTURN_SHIFT		16
#define FMC_BTR3_BUSTURN_MASK		0x0f
/** @defgroup fmc_btr3_busturn BUSTURN BUSTURN
@{*/
/**@}*/


#define FMC_BTR3_DATAST_SHIFT		8
#define FMC_BTR3_DATAST_MASK		0xff
/** @defgroup fmc_btr3_datast DATAST DATAST
@{*/
/**@}*/


#define FMC_BTR3_ADDHLD_SHIFT		4
#define FMC_BTR3_ADDHLD_MASK		0x0f
/** @defgroup fmc_btr3_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FMC_BTR3_ADDSET_SHIFT		0
#define FMC_BTR3_ADDSET_MASK		0x0f
/** @defgroup fmc_btr3_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bcr4 BCR4 SRAM/NOR-Flash chip-select control register 4
@{*/


#define FMC_BCR4_NBLSET_SHIFT		22
#define FMC_BCR4_NBLSET_MASK		0x03
/** @defgroup fmc_bcr4_nblset NBLSET NBLSET
@{*/
/**@}*/

/** FMC_BCR4_WFDIS WFDIS **/
#define FMC_BCR4_WFDIS		(1 << 21)
/** FMC_BCR4_CCLKEN CCLKEN **/
#define FMC_BCR4_CCLKEN		(1 << 20)
/** FMC_BCR4_CBURSTRW CBURSTRW **/
#define FMC_BCR4_CBURSTRW		(1 << 19)

#define FMC_BCR4_CPSIZE_SHIFT		16
#define FMC_BCR4_CPSIZE_MASK		0x07
/** @defgroup fmc_bcr4_cpsize CPSIZE CPSIZE
@{*/
/**@}*/

/** FMC_BCR4_ASYNCWAIT ASYNCWAIT **/
#define FMC_BCR4_ASYNCWAIT		(1 << 15)
/** FMC_BCR4_EXTMOD EXTMOD **/
#define FMC_BCR4_EXTMOD		(1 << 14)
/** FMC_BCR4_WAITEN WAITEN **/
#define FMC_BCR4_WAITEN		(1 << 13)
/** FMC_BCR4_WREN WREN **/
#define FMC_BCR4_WREN		(1 << 12)
/** FMC_BCR4_WAITCFG WAITCFG **/
#define FMC_BCR4_WAITCFG		(1 << 11)
/** FMC_BCR4_WAITPOL WAITPOL **/
#define FMC_BCR4_WAITPOL		(1 << 9)
/** FMC_BCR4_BURSTEN BURSTEN **/
#define FMC_BCR4_BURSTEN		(1 << 8)
/** FMC_BCR4_FACCEN FACCEN **/
#define FMC_BCR4_FACCEN		(1 << 6)

#define FMC_BCR4_MWID_SHIFT		4
#define FMC_BCR4_MWID_MASK		0x03
/** @defgroup fmc_bcr4_mwid MWID MWID
@{*/
/**@}*/


#define FMC_BCR4_MTYP_SHIFT		2
#define FMC_BCR4_MTYP_MASK		0x03
/** @defgroup fmc_bcr4_mtyp MTYP MTYP
@{*/
/**@}*/

/** FMC_BCR4_MUXEN MUXEN **/
#define FMC_BCR4_MUXEN		(1 << 1)
/** FMC_BCR4_MBKEN MBKEN **/
#define FMC_BCR4_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fmc_btr4 BTR4 SRAM/NOR-Flash chip-select timing register 4
@{*/


#define FMC_BTR4_DATAHLD_SHIFT		30
#define FMC_BTR4_DATAHLD_MASK		0x03
/** @defgroup fmc_btr4_datahld DATAHLD DATAHLD
@{*/
/**@}*/


#define FMC_BTR4_ACCMOD_SHIFT		28
#define FMC_BTR4_ACCMOD_MASK		0x03
/** @defgroup fmc_btr4_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FMC_BTR4_DATLAT_SHIFT		24
#define FMC_BTR4_DATLAT_MASK		0x0f
/** @defgroup fmc_btr4_datlat DATLAT DATLAT
@{*/
/**@}*/


#define FMC_BTR4_CLKDIV_SHIFT		20
#define FMC_BTR4_CLKDIV_MASK		0x0f
/** @defgroup fmc_btr4_clkdiv CLKDIV CLKDIV
@{*/
/**@}*/


#define FMC_BTR4_BUSTURN_SHIFT		16
#define FMC_BTR4_BUSTURN_MASK		0x0f
/** @defgroup fmc_btr4_busturn BUSTURN BUSTURN
@{*/
/**@}*/


#define FMC_BTR4_DATAST_SHIFT		8
#define FMC_BTR4_DATAST_MASK		0xff
/** @defgroup fmc_btr4_datast DATAST DATAST
@{*/
/**@}*/


#define FMC_BTR4_ADDHLD_SHIFT		4
#define FMC_BTR4_ADDHLD_MASK		0x0f
/** @defgroup fmc_btr4_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FMC_BTR4_ADDSET_SHIFT		0
#define FMC_BTR4_ADDSET_MASK		0x0f
/** @defgroup fmc_btr4_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_pcscntr PCSCNTR PSRAM chip select counter register
@{*/

/** FMC_PCSCNTR_CNTB4EN CNTB4EN **/
#define FMC_PCSCNTR_CNTB4EN		(1 << 19)
/** FMC_PCSCNTR_CNTB3EN CNTB3EN **/
#define FMC_PCSCNTR_CNTB3EN		(1 << 18)
/** FMC_PCSCNTR_CNTB2EN CNTB2EN **/
#define FMC_PCSCNTR_CNTB2EN		(1 << 17)
/** FMC_PCSCNTR_CNTB1EN CNTB1EN **/
#define FMC_PCSCNTR_CNTB1EN		(1 << 16)

#define FMC_PCSCNTR_CSCOUNT_SHIFT		0
#define FMC_PCSCNTR_CSCOUNT_MASK		0xffff
/** @defgroup fmc_pcscntr_cscount CSCOUNT CSCOUNT
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_pcr PCR PC Card/NAND Flash control register 3
@{*/


#define FMC_PCR_ECCPS_SHIFT		17
#define FMC_PCR_ECCPS_MASK		0x07
/** @defgroup fmc_pcr_eccps ECCPS ECCPS
@{*/
/**@}*/


#define FMC_PCR_TAR_SHIFT		13
#define FMC_PCR_TAR_MASK		0x0f
/** @defgroup fmc_pcr_tar TAR TAR
@{*/
/**@}*/


#define FMC_PCR_TCLR_SHIFT		9
#define FMC_PCR_TCLR_MASK		0x0f
/** @defgroup fmc_pcr_tclr TCLR TCLR
@{*/
/**@}*/

/** FMC_PCR_ECCEN ECCEN **/
#define FMC_PCR_ECCEN		(1 << 6)

#define FMC_PCR_PWID_SHIFT		4
#define FMC_PCR_PWID_MASK		0x03
/** @defgroup fmc_pcr_pwid PWID PWID
@{*/
/**@}*/

/** FMC_PCR_PTYP PTYP **/
#define FMC_PCR_PTYP		(1 << 3)
/** FMC_PCR_PBKEN PBKEN **/
#define FMC_PCR_PBKEN		(1 << 2)
/** FMC_PCR_PWAITEN PWAITEN **/
#define FMC_PCR_PWAITEN		(1 << 1)

/**@}*/

/** @defgroup fmc_sr SR FIFO status and interrupt register 3
@{*/

/** FMC_SR_FEMPT FEMPT **/
#define FMC_SR_FEMPT		(1 << 6)
/** FMC_SR_IFEN IFEN **/
#define FMC_SR_IFEN		(1 << 5)
/** FMC_SR_ILEN ILEN **/
#define FMC_SR_ILEN		(1 << 4)
/** FMC_SR_IREN IREN **/
#define FMC_SR_IREN		(1 << 3)
/** FMC_SR_IFS IFS **/
#define FMC_SR_IFS		(1 << 2)
/** FMC_SR_ILS ILS **/
#define FMC_SR_ILS		(1 << 1)
/** FMC_SR_IRS IRS **/
#define FMC_SR_IRS		(1 << 0)

/**@}*/

/** @defgroup fmc_pmem PMEM Common memory space timing register 3
@{*/


#define FMC_PMEM_MEMHIZx_SHIFT		24
#define FMC_PMEM_MEMHIZx_MASK		0xff
/** @defgroup fmc_pmem_memhizx MEMHIZx MEMHIZx
@{*/
/**@}*/


#define FMC_PMEM_MEMHOLDx_SHIFT		16
#define FMC_PMEM_MEMHOLDx_MASK		0xff
/** @defgroup fmc_pmem_memholdx MEMHOLDx MEMHOLDx
@{*/
/**@}*/


#define FMC_PMEM_MEMWAITx_SHIFT		8
#define FMC_PMEM_MEMWAITx_MASK		0xff
/** @defgroup fmc_pmem_memwaitx MEMWAITx MEMWAITx
@{*/
/**@}*/


#define FMC_PMEM_MEMSETx_SHIFT		0
#define FMC_PMEM_MEMSETx_MASK		0xff
/** @defgroup fmc_pmem_memsetx MEMSETx MEMSETx
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_patt PATT Attribute memory space timing register 3
@{*/


#define FMC_PATT_ATTHIZx_SHIFT		24
#define FMC_PATT_ATTHIZx_MASK		0xff
/** @defgroup fmc_patt_atthizx ATTHIZx ATTHIZx
@{*/
/**@}*/


#define FMC_PATT_ATTHOLDx_SHIFT		16
#define FMC_PATT_ATTHOLDx_MASK		0xff
/** @defgroup fmc_patt_attholdx ATTHOLDx ATTHOLDx
@{*/
/**@}*/


#define FMC_PATT_ATTWAITx_SHIFT		8
#define FMC_PATT_ATTWAITx_MASK		0xff
/** @defgroup fmc_patt_attwaitx ATTWAITx ATTWAITx
@{*/
/**@}*/


#define FMC_PATT_ATTSETx_SHIFT		0
#define FMC_PATT_ATTSETx_MASK		0xff
/** @defgroup fmc_patt_attsetx ATTSETx ATTSETx
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_eccr ECCR ECC result register 3
@{*/


#define FMC_ECCR_ECCx_SHIFT		0
#define FMC_ECCR_ECCx_MASK		0xffffffff
/** @defgroup fmc_eccr_eccx ECCx ECCx
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bwtr1 BWTR1 SRAM/NOR-Flash write timing registers 1
@{*/


#define FMC_BWTR1_DATAHLD_SHIFT		30
#define FMC_BWTR1_DATAHLD_MASK		0x03
/** @defgroup fmc_bwtr1_datahld DATAHLD DATAHLD
@{*/
/**@}*/


#define FMC_BWTR1_ACCMOD_SHIFT		28
#define FMC_BWTR1_ACCMOD_MASK		0x03
/** @defgroup fmc_bwtr1_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FMC_BWTR1_BUSTURN_SHIFT		16
#define FMC_BWTR1_BUSTURN_MASK		0x0f
/** @defgroup fmc_bwtr1_busturn BUSTURN BUSTURN
@{*/
/**@}*/


#define FMC_BWTR1_DATAST_SHIFT		8
#define FMC_BWTR1_DATAST_MASK		0xff
/** @defgroup fmc_bwtr1_datast DATAST DATAST
@{*/
/**@}*/


#define FMC_BWTR1_ADDHLD_SHIFT		4
#define FMC_BWTR1_ADDHLD_MASK		0x0f
/** @defgroup fmc_bwtr1_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FMC_BWTR1_ADDSET_SHIFT		0
#define FMC_BWTR1_ADDSET_MASK		0x0f
/** @defgroup fmc_bwtr1_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bwtr2 BWTR2 SRAM/NOR-Flash write timing registers 2
@{*/


#define FMC_BWTR2_DATAHLD_SHIFT		30
#define FMC_BWTR2_DATAHLD_MASK		0x03
/** @defgroup fmc_bwtr2_datahld DATAHLD DATAHLD
@{*/
/**@}*/


#define FMC_BWTR2_ACCMOD_SHIFT		28
#define FMC_BWTR2_ACCMOD_MASK		0x03
/** @defgroup fmc_bwtr2_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FMC_BWTR2_BUSTURN_SHIFT		16
#define FMC_BWTR2_BUSTURN_MASK		0x0f
/** @defgroup fmc_bwtr2_busturn BUSTURN BUSTURN
@{*/
/**@}*/


#define FMC_BWTR2_DATAST_SHIFT		8
#define FMC_BWTR2_DATAST_MASK		0xff
/** @defgroup fmc_bwtr2_datast DATAST DATAST
@{*/
/**@}*/


#define FMC_BWTR2_ADDHLD_SHIFT		4
#define FMC_BWTR2_ADDHLD_MASK		0x0f
/** @defgroup fmc_bwtr2_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FMC_BWTR2_ADDSET_SHIFT		0
#define FMC_BWTR2_ADDSET_MASK		0x0f
/** @defgroup fmc_bwtr2_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bwtr3 BWTR3 SRAM/NOR-Flash write timing registers 3
@{*/


#define FMC_BWTR3_DATAHLD_SHIFT		30
#define FMC_BWTR3_DATAHLD_MASK		0x03
/** @defgroup fmc_bwtr3_datahld DATAHLD DATAHLD
@{*/
/**@}*/


#define FMC_BWTR3_ACCMOD_SHIFT		28
#define FMC_BWTR3_ACCMOD_MASK		0x03
/** @defgroup fmc_bwtr3_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FMC_BWTR3_BUSTURN_SHIFT		16
#define FMC_BWTR3_BUSTURN_MASK		0x0f
/** @defgroup fmc_bwtr3_busturn BUSTURN BUSTURN
@{*/
/**@}*/


#define FMC_BWTR3_DATAST_SHIFT		8
#define FMC_BWTR3_DATAST_MASK		0xff
/** @defgroup fmc_bwtr3_datast DATAST DATAST
@{*/
/**@}*/


#define FMC_BWTR3_ADDHLD_SHIFT		4
#define FMC_BWTR3_ADDHLD_MASK		0x0f
/** @defgroup fmc_bwtr3_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FMC_BWTR3_ADDSET_SHIFT		0
#define FMC_BWTR3_ADDSET_MASK		0x0f
/** @defgroup fmc_bwtr3_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bwtr4 BWTR4 SRAM/NOR-Flash write timing registers 4
@{*/


#define FMC_BWTR4_DATAHLD_SHIFT		30
#define FMC_BWTR4_DATAHLD_MASK		0x03
/** @defgroup fmc_bwtr4_datahld DATAHLD DATAHLD
@{*/
/**@}*/


#define FMC_BWTR4_ACCMOD_SHIFT		28
#define FMC_BWTR4_ACCMOD_MASK		0x03
/** @defgroup fmc_bwtr4_accmod ACCMOD ACCMOD
@{*/
/**@}*/


#define FMC_BWTR4_BUSTURN_SHIFT		16
#define FMC_BWTR4_BUSTURN_MASK		0x0f
/** @defgroup fmc_bwtr4_busturn BUSTURN BUSTURN
@{*/
/**@}*/


#define FMC_BWTR4_DATAST_SHIFT		8
#define FMC_BWTR4_DATAST_MASK		0xff
/** @defgroup fmc_bwtr4_datast DATAST DATAST
@{*/
/**@}*/


#define FMC_BWTR4_ADDHLD_SHIFT		4
#define FMC_BWTR4_ADDHLD_MASK		0x0f
/** @defgroup fmc_bwtr4_addhld ADDHLD ADDHLD
@{*/
/**@}*/


#define FMC_BWTR4_ADDSET_SHIFT		0
#define FMC_BWTR4_ADDSET_MASK		0x0f
/** @defgroup fmc_bwtr4_addset ADDSET ADDSET
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- SAI: Serial audio interface ---------------------------------- */

/** @defgroup sai_registers Serial audio interface Register
@{*/

/** SAI_ACR1 AConfiguration register 1 **/
#define SAI_ACR1			MMIO32(SAI_BASE + 0x04)
/** SAI_ACR2 AConfiguration register 2 **/
#define SAI_ACR2			MMIO32(SAI_BASE + 0x08)
/** SAI_AFRCR AFRCR **/
#define SAI_AFRCR			MMIO32(SAI_BASE + 0x0c)
/** SAI_ASLOTR ASlot register **/
#define SAI_ASLOTR			MMIO32(SAI_BASE + 0x10)
/** SAI_AIM AInterrupt mask register2 **/
#define SAI_AIM			MMIO32(SAI_BASE + 0x14)
/** SAI_ASR AStatus register **/
#define SAI_ASR			MMIO32(SAI_BASE + 0x18)
/** SAI_ACLRFR AClear flag register **/
#define SAI_ACLRFR			MMIO32(SAI_BASE + 0x1c)
/** SAI_ADR AData register **/
#define SAI_ADR			MMIO32(SAI_BASE + 0x20)
/** SAI_BCR1 BConfiguration register 1 **/
#define SAI_BCR1			MMIO32(SAI_BASE + 0x24)
/** SAI_BCR2 BConfiguration register 2 **/
#define SAI_BCR2			MMIO32(SAI_BASE + 0x28)
/** SAI_BFRCR BFRCR **/
#define SAI_BFRCR			MMIO32(SAI_BASE + 0x2c)
/** SAI_BSLOTR BSlot register **/
#define SAI_BSLOTR			MMIO32(SAI_BASE + 0x30)
/** SAI_BIM BInterrupt mask register2 **/
#define SAI_BIM			MMIO32(SAI_BASE + 0x34)
/** SAI_BSR BStatus register **/
#define SAI_BSR			MMIO32(SAI_BASE + 0x38)
/** SAI_BCLRFR BClear flag register **/
#define SAI_BCLRFR			MMIO32(SAI_BASE + 0x3c)
/** SAI_BDR BData register **/
#define SAI_BDR			MMIO32(SAI_BASE + 0x40)
/** SAI_PDMCR PDM control register **/
#define SAI_PDMCR			MMIO32(SAI_BASE + 0x44)
/** SAI_PDMDLY PDM delay register **/
#define SAI_PDMDLY			MMIO32(SAI_BASE + 0x48)

/**@}*/


/** @defgroup sai_acr1 ACR1 AConfiguration register 1
@{*/

/** SAI_ACR1_MCKEN MCKEN **/
#define SAI_ACR1_MCKEN		(1 << 27)
/** SAI_ACR1_OSR OSR **/
#define SAI_ACR1_OSR		(1 << 26)

#define SAI_ACR1_MCJDIV_SHIFT		20
#define SAI_ACR1_MCJDIV_MASK		0x3f
/** @defgroup sai_acr1_mcjdiv MCJDIV Master clock divider
@{*/
/**@}*/

/** SAI_ACR1_NODIV No divider **/
#define SAI_ACR1_NODIV		(1 << 19)
/** SAI_ACR1_DMAEN DMA enable **/
#define SAI_ACR1_DMAEN		(1 << 17)
/** SAI_ACR1_SAIAEN Audio block A enable **/
#define SAI_ACR1_SAIAEN		(1 << 16)
/** SAI_ACR1_OutDri Output drive **/
#define SAI_ACR1_OutDri		(1 << 13)
/** SAI_ACR1_MONO Mono mode **/
#define SAI_ACR1_MONO		(1 << 12)

#define SAI_ACR1_SYNCEN_SHIFT		10
#define SAI_ACR1_SYNCEN_MASK		0x03
/** @defgroup sai_acr1_syncen SYNCEN Synchronization enable
@{*/
/**@}*/

/** SAI_ACR1_CKSTR Clock strobing edge **/
#define SAI_ACR1_CKSTR		(1 << 9)
/** SAI_ACR1_LSBFIRST Least significant bit first **/
#define SAI_ACR1_LSBFIRST		(1 << 8)

#define SAI_ACR1_DS_SHIFT		5
#define SAI_ACR1_DS_MASK		0x07
/** @defgroup sai_acr1_ds DS Data size
@{*/
/**@}*/


#define SAI_ACR1_PRTCFG_SHIFT		2
#define SAI_ACR1_PRTCFG_MASK		0x03
/** @defgroup sai_acr1_prtcfg PRTCFG Protocol configuration
@{*/
/**@}*/


#define SAI_ACR1_MODE_SHIFT		0
#define SAI_ACR1_MODE_MASK		0x03
/** @defgroup sai_acr1_mode MODE Audio block mode
@{*/
/**@}*/


/**@}*/

/** @defgroup sai_acr2 ACR2 AConfiguration register 2
@{*/


#define SAI_ACR2_COMP_SHIFT		14
#define SAI_ACR2_COMP_MASK		0x03
/** @defgroup sai_acr2_comp COMP Companding mode
@{*/
/**@}*/

/** SAI_ACR2_CPL Complement bit **/
#define SAI_ACR2_CPL		(1 << 13)

#define SAI_ACR2_MUTECN_SHIFT		7
#define SAI_ACR2_MUTECN_MASK		0x3f
/** @defgroup sai_acr2_mutecn MUTECN Mute counter
@{*/
/**@}*/

/** SAI_ACR2_MUTEVAL Mute value **/
#define SAI_ACR2_MUTEVAL		(1 << 6)
/** SAI_ACR2_MUTE Mute **/
#define SAI_ACR2_MUTE		(1 << 5)
/** SAI_ACR2_TRIS Tristate management on data line **/
#define SAI_ACR2_TRIS		(1 << 4)
/** SAI_ACR2_FFLUS FIFO flush **/
#define SAI_ACR2_FFLUS		(1 << 3)

#define SAI_ACR2_FTH_SHIFT		0
#define SAI_ACR2_FTH_MASK		0x07
/** @defgroup sai_acr2_fth FTH FIFO threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup sai_afrcr AFRCR AFRCR
@{*/

/** SAI_AFRCR_FSOFF Frame synchronization offset **/
#define SAI_AFRCR_FSOFF		(1 << 18)
/** SAI_AFRCR_FSPOL Frame synchronization polarity **/
#define SAI_AFRCR_FSPOL		(1 << 17)
/** SAI_AFRCR_FSDEF Frame synchronization definition **/
#define SAI_AFRCR_FSDEF		(1 << 16)

#define SAI_AFRCR_FSALL_SHIFT		8
#define SAI_AFRCR_FSALL_MASK		0x7f
/** @defgroup sai_afrcr_fsall FSALL Frame synchronization active level length
@{*/
/**@}*/


#define SAI_AFRCR_FRL_SHIFT		0
#define SAI_AFRCR_FRL_MASK		0xff
/** @defgroup sai_afrcr_frl FRL Frame length
@{*/
/**@}*/


/**@}*/

/** @defgroup sai_aslotr ASLOTR ASlot register
@{*/


#define SAI_ASLOTR_SLOTEN_SHIFT		16
#define SAI_ASLOTR_SLOTEN_MASK		0xffff
/** @defgroup sai_aslotr_sloten SLOTEN Slot enable
@{*/
/**@}*/


#define SAI_ASLOTR_NBSLOT_SHIFT		8
#define SAI_ASLOTR_NBSLOT_MASK		0x0f
/** @defgroup sai_aslotr_nbslot NBSLOT Number of slots in an audio frame
@{*/
/**@}*/


#define SAI_ASLOTR_SLOTSZ_SHIFT		6
#define SAI_ASLOTR_SLOTSZ_MASK		0x03
/** @defgroup sai_aslotr_slotsz SLOTSZ Slot size
@{*/
/**@}*/


#define SAI_ASLOTR_FBOFF_SHIFT		0
#define SAI_ASLOTR_FBOFF_MASK		0x1f
/** @defgroup sai_aslotr_fboff FBOFF First bit offset
@{*/
/**@}*/


/**@}*/

/** @defgroup sai_aim AIM AInterrupt mask register2
@{*/

/** SAI_AIM_LFSDET Late frame synchronization detection interrupt enable **/
#define SAI_AIM_LFSDET		(1 << 6)
/** SAI_AIM_AFSDETIE Anticipated frame synchronization detection interrupt enable **/
#define SAI_AIM_AFSDETIE		(1 << 5)
/** SAI_AIM_CNRDYIE Codec not ready interrupt enable **/
#define SAI_AIM_CNRDYIE		(1 << 4)
/** SAI_AIM_FREQIE FIFO request interrupt enable **/
#define SAI_AIM_FREQIE		(1 << 3)
/** SAI_AIM_WCKCFG Wrong clock configuration interrupt enable **/
#define SAI_AIM_WCKCFG		(1 << 2)
/** SAI_AIM_MUTEDET Mute detection interrupt enable **/
#define SAI_AIM_MUTEDET		(1 << 1)
/** SAI_AIM_OVRUDRIE Overrun/underrun interrupt enable **/
#define SAI_AIM_OVRUDRIE		(1 << 0)

/**@}*/

/** @defgroup sai_asr ASR AStatus register
@{*/


#define SAI_ASR_FLVL_SHIFT		16
#define SAI_ASR_FLVL_MASK		0x07
/** @defgroup sai_asr_flvl FLVL FIFO level threshold
@{*/
/**@}*/

/** SAI_ASR_LFSDET Late frame synchronization detection **/
#define SAI_ASR_LFSDET		(1 << 6)
/** SAI_ASR_AFSDET Anticipated frame synchronization detection **/
#define SAI_ASR_AFSDET		(1 << 5)
/** SAI_ASR_CNRDY Codec not ready **/
#define SAI_ASR_CNRDY		(1 << 4)
/** SAI_ASR_FREQ FIFO request **/
#define SAI_ASR_FREQ		(1 << 3)
/** SAI_ASR_WCKCFG Wrong clock configuration flag. This bit is read only **/
#define SAI_ASR_WCKCFG		(1 << 2)
/** SAI_ASR_MUTEDET Mute detection **/
#define SAI_ASR_MUTEDET		(1 << 1)
/** SAI_ASR_OVRUDR Overrun / underrun **/
#define SAI_ASR_OVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai_aclrfr ACLRFR AClear flag register
@{*/

/** SAI_ACLRFR_LFSDET Clear late frame synchronization detection flag **/
#define SAI_ACLRFR_LFSDET		(1 << 6)
/** SAI_ACLRFR_CAFSDET Clear anticipated frame synchronization detection flag **/
#define SAI_ACLRFR_CAFSDET		(1 << 5)
/** SAI_ACLRFR_CNRDY Clear codec not ready flag **/
#define SAI_ACLRFR_CNRDY		(1 << 4)
/** SAI_ACLRFR_WCKCFG Clear wrong clock configuration flag **/
#define SAI_ACLRFR_WCKCFG		(1 << 2)
/** SAI_ACLRFR_MUTEDET Mute detection flag **/
#define SAI_ACLRFR_MUTEDET		(1 << 1)
/** SAI_ACLRFR_OVRUDR Clear overrun / underrun **/
#define SAI_ACLRFR_OVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai_adr ADR AData register
@{*/


#define SAI_ADR_DATA_SHIFT		0
#define SAI_ADR_DATA_MASK		0xffffffff
/** @defgroup sai_adr_data DATA Data
@{*/
/**@}*/


/**@}*/

/** @defgroup sai_bcr1 BCR1 BConfiguration register 1
@{*/

/** SAI_BCR1_MCKEN MCKEN **/
#define SAI_BCR1_MCKEN		(1 << 27)
/** SAI_BCR1_OSR OSR **/
#define SAI_BCR1_OSR		(1 << 26)

#define SAI_BCR1_MCJDIV_SHIFT		20
#define SAI_BCR1_MCJDIV_MASK		0x3f
/** @defgroup sai_bcr1_mcjdiv MCJDIV Master clock divider
@{*/
/**@}*/

/** SAI_BCR1_NODIV No divider **/
#define SAI_BCR1_NODIV		(1 << 19)
/** SAI_BCR1_DMAEN DMA enable **/
#define SAI_BCR1_DMAEN		(1 << 17)
/** SAI_BCR1_SAIBEN Audio block B enable **/
#define SAI_BCR1_SAIBEN		(1 << 16)
/** SAI_BCR1_OutDri Output drive **/
#define SAI_BCR1_OutDri		(1 << 13)
/** SAI_BCR1_MONO Mono mode **/
#define SAI_BCR1_MONO		(1 << 12)

#define SAI_BCR1_SYNCEN_SHIFT		10
#define SAI_BCR1_SYNCEN_MASK		0x03
/** @defgroup sai_bcr1_syncen SYNCEN Synchronization enable
@{*/
/**@}*/

/** SAI_BCR1_CKSTR Clock strobing edge **/
#define SAI_BCR1_CKSTR		(1 << 9)
/** SAI_BCR1_LSBFIRST Least significant bit first **/
#define SAI_BCR1_LSBFIRST		(1 << 8)

#define SAI_BCR1_DS_SHIFT		5
#define SAI_BCR1_DS_MASK		0x07
/** @defgroup sai_bcr1_ds DS Data size
@{*/
/**@}*/


#define SAI_BCR1_PRTCFG_SHIFT		2
#define SAI_BCR1_PRTCFG_MASK		0x03
/** @defgroup sai_bcr1_prtcfg PRTCFG Protocol configuration
@{*/
/**@}*/


#define SAI_BCR1_MODE_SHIFT		0
#define SAI_BCR1_MODE_MASK		0x03
/** @defgroup sai_bcr1_mode MODE Audio block mode
@{*/
/**@}*/


/**@}*/

/** @defgroup sai_bcr2 BCR2 BConfiguration register 2
@{*/


#define SAI_BCR2_COMP_SHIFT		14
#define SAI_BCR2_COMP_MASK		0x03
/** @defgroup sai_bcr2_comp COMP Companding mode
@{*/
/**@}*/

/** SAI_BCR2_CPL Complement bit **/
#define SAI_BCR2_CPL		(1 << 13)

#define SAI_BCR2_MUTECN_SHIFT		7
#define SAI_BCR2_MUTECN_MASK		0x3f
/** @defgroup sai_bcr2_mutecn MUTECN Mute counter
@{*/
/**@}*/

/** SAI_BCR2_MUTEVAL Mute value **/
#define SAI_BCR2_MUTEVAL		(1 << 6)
/** SAI_BCR2_MUTE Mute **/
#define SAI_BCR2_MUTE		(1 << 5)
/** SAI_BCR2_TRIS Tristate management on data line **/
#define SAI_BCR2_TRIS		(1 << 4)
/** SAI_BCR2_FFLUS FIFO flush **/
#define SAI_BCR2_FFLUS		(1 << 3)

#define SAI_BCR2_FTH_SHIFT		0
#define SAI_BCR2_FTH_MASK		0x07
/** @defgroup sai_bcr2_fth FTH FIFO threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup sai_bfrcr BFRCR BFRCR
@{*/

/** SAI_BFRCR_FSOFF Frame synchronization offset **/
#define SAI_BFRCR_FSOFF		(1 << 18)
/** SAI_BFRCR_FSPOL Frame synchronization polarity **/
#define SAI_BFRCR_FSPOL		(1 << 17)
/** SAI_BFRCR_FSDEF Frame synchronization definition **/
#define SAI_BFRCR_FSDEF		(1 << 16)

#define SAI_BFRCR_FSALL_SHIFT		8
#define SAI_BFRCR_FSALL_MASK		0x7f
/** @defgroup sai_bfrcr_fsall FSALL Frame synchronization active level length
@{*/
/**@}*/


#define SAI_BFRCR_FRL_SHIFT		0
#define SAI_BFRCR_FRL_MASK		0xff
/** @defgroup sai_bfrcr_frl FRL Frame length
@{*/
/**@}*/


/**@}*/

/** @defgroup sai_bslotr BSLOTR BSlot register
@{*/


#define SAI_BSLOTR_SLOTEN_SHIFT		16
#define SAI_BSLOTR_SLOTEN_MASK		0xffff
/** @defgroup sai_bslotr_sloten SLOTEN Slot enable
@{*/
/**@}*/


#define SAI_BSLOTR_NBSLOT_SHIFT		8
#define SAI_BSLOTR_NBSLOT_MASK		0x0f
/** @defgroup sai_bslotr_nbslot NBSLOT Number of slots in an audio frame
@{*/
/**@}*/


#define SAI_BSLOTR_SLOTSZ_SHIFT		6
#define SAI_BSLOTR_SLOTSZ_MASK		0x03
/** @defgroup sai_bslotr_slotsz SLOTSZ Slot size
@{*/
/**@}*/


#define SAI_BSLOTR_FBOFF_SHIFT		0
#define SAI_BSLOTR_FBOFF_MASK		0x1f
/** @defgroup sai_bslotr_fboff FBOFF First bit offset
@{*/
/**@}*/


/**@}*/

/** @defgroup sai_bim BIM BInterrupt mask register2
@{*/

/** SAI_BIM_LFSDETIE Late frame synchronization detection interrupt enable **/
#define SAI_BIM_LFSDETIE		(1 << 6)
/** SAI_BIM_AFSDETIE Anticipated frame synchronization detection interrupt enable **/
#define SAI_BIM_AFSDETIE		(1 << 5)
/** SAI_BIM_CNRDYIE Codec not ready interrupt enable **/
#define SAI_BIM_CNRDYIE		(1 << 4)
/** SAI_BIM_FREQIE FIFO request interrupt enable **/
#define SAI_BIM_FREQIE		(1 << 3)
/** SAI_BIM_WCKCFG Wrong clock configuration interrupt enable **/
#define SAI_BIM_WCKCFG		(1 << 2)
/** SAI_BIM_MUTEDET Mute detection interrupt enable **/
#define SAI_BIM_MUTEDET		(1 << 1)
/** SAI_BIM_OVRUDRIE Overrun/underrun interrupt enable **/
#define SAI_BIM_OVRUDRIE		(1 << 0)

/**@}*/

/** @defgroup sai_bsr BSR BStatus register
@{*/


#define SAI_BSR_FLVL_SHIFT		16
#define SAI_BSR_FLVL_MASK		0x07
/** @defgroup sai_bsr_flvl FLVL FIFO level threshold
@{*/
/**@}*/

/** SAI_BSR_LFSDET Late frame synchronization detection **/
#define SAI_BSR_LFSDET		(1 << 6)
/** SAI_BSR_AFSDET Anticipated frame synchronization detection **/
#define SAI_BSR_AFSDET		(1 << 5)
/** SAI_BSR_CNRDY Codec not ready **/
#define SAI_BSR_CNRDY		(1 << 4)
/** SAI_BSR_FREQ FIFO request **/
#define SAI_BSR_FREQ		(1 << 3)
/** SAI_BSR_WCKCFG Wrong clock configuration flag **/
#define SAI_BSR_WCKCFG		(1 << 2)
/** SAI_BSR_MUTEDET Mute detection **/
#define SAI_BSR_MUTEDET		(1 << 1)
/** SAI_BSR_OVRUDR Overrun / underrun **/
#define SAI_BSR_OVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai_bclrfr BCLRFR BClear flag register
@{*/

/** SAI_BCLRFR_LFSDET Clear late frame synchronization detection flag **/
#define SAI_BCLRFR_LFSDET		(1 << 6)
/** SAI_BCLRFR_CAFSDET Clear anticipated frame synchronization detection flag **/
#define SAI_BCLRFR_CAFSDET		(1 << 5)
/** SAI_BCLRFR_CNRDY Clear codec not ready flag **/
#define SAI_BCLRFR_CNRDY		(1 << 4)
/** SAI_BCLRFR_WCKCFG Clear wrong clock configuration flag **/
#define SAI_BCLRFR_WCKCFG		(1 << 2)
/** SAI_BCLRFR_MUTEDET Mute detection flag **/
#define SAI_BCLRFR_MUTEDET		(1 << 1)
/** SAI_BCLRFR_OVRUDR Clear overrun / underrun **/
#define SAI_BCLRFR_OVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai_bdr BDR BData register
@{*/


#define SAI_BDR_DATA_SHIFT		0
#define SAI_BDR_DATA_MASK		0xffffffff
/** @defgroup sai_bdr_data DATA Data
@{*/
/**@}*/


/**@}*/

/** @defgroup sai_pdmcr PDMCR PDM control register
@{*/

/** SAI_PDMCR_CKEN4 CKEN4 **/
#define SAI_PDMCR_CKEN4		(1 << 11)
/** SAI_PDMCR_CKEN3 CKEN3 **/
#define SAI_PDMCR_CKEN3		(1 << 10)
/** SAI_PDMCR_CKEN2 CKEN2 **/
#define SAI_PDMCR_CKEN2		(1 << 9)
/** SAI_PDMCR_CKEN1 CKEN1 **/
#define SAI_PDMCR_CKEN1		(1 << 8)

#define SAI_PDMCR_MICNBR_SHIFT		4
#define SAI_PDMCR_MICNBR_MASK		0x03
/** @defgroup sai_pdmcr_micnbr MICNBR MICNBR
@{*/
/**@}*/

/** SAI_PDMCR_PDMEN PDMEN **/
#define SAI_PDMCR_PDMEN		(1 << 0)

/**@}*/

/** @defgroup sai_pdmdly PDMDLY PDM delay register
@{*/


#define SAI_PDMDLY_DLYM4R_SHIFT		28
#define SAI_PDMDLY_DLYM4R_MASK		0x07
/** @defgroup sai_pdmdly_dlym4r DLYM4R DLYM4R
@{*/
/**@}*/


#define SAI_PDMDLY_DLYM4L_SHIFT		24
#define SAI_PDMDLY_DLYM4L_MASK		0x07
/** @defgroup sai_pdmdly_dlym4l DLYM4L DLYM4L
@{*/
/**@}*/


#define SAI_PDMDLY_DLYM3R_SHIFT		20
#define SAI_PDMDLY_DLYM3R_MASK		0x07
/** @defgroup sai_pdmdly_dlym3r DLYM3R DLYM3R
@{*/
/**@}*/


#define SAI_PDMDLY_DLYM3L_SHIFT		16
#define SAI_PDMDLY_DLYM3L_MASK		0x07
/** @defgroup sai_pdmdly_dlym3l DLYM3L DLYM3L
@{*/
/**@}*/


#define SAI_PDMDLY_DLYM2R_SHIFT		12
#define SAI_PDMDLY_DLYM2R_MASK		0x07
/** @defgroup sai_pdmdly_dlym2r DLYM2R DLYM2R
@{*/
/**@}*/


#define SAI_PDMDLY_DLYM2L_SHIFT		8
#define SAI_PDMDLY_DLYM2L_MASK		0x07
/** @defgroup sai_pdmdly_dlym2l DLYM2L DLYM2L
@{*/
/**@}*/


#define SAI_PDMDLY_DLYM1R_SHIFT		4
#define SAI_PDMDLY_DLYM1R_MASK		0x07
/** @defgroup sai_pdmdly_dlym1r DLYM1R DLYM1R
@{*/
/**@}*/


#define SAI_PDMDLY_DLYM1L_SHIFT		0
#define SAI_PDMDLY_DLYM1L_MASK		0x07
/** @defgroup sai_pdmdly_dlym1l DLYM1L DLYM1L
@{*/
/**@}*/


/**@}*/

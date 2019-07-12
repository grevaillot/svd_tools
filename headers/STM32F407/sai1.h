#pragma once 

/* --- SAI1: Serial audio interface --------------------------------- */

/** @defgroup sai1_registers Serial audio interface Register
@{*/

/** SAI1_SAI_ACR1 SAI AConfiguration register 1 **/
#define SAI1_SAI_ACR1			MMIO32(SAI1_BASE + 0x04)
/** SAI1_SAI_ACR2 SAI AConfiguration register 2 **/
#define SAI1_SAI_ACR2			MMIO32(SAI1_BASE + 0x08)
/** SAI1_SAI_AFRCR SAI AFrame configuration register **/
#define SAI1_SAI_AFRCR			MMIO32(SAI1_BASE + 0x0c)
/** SAI1_SAI_ASLOTR SAI ASlot register **/
#define SAI1_SAI_ASLOTR			MMIO32(SAI1_BASE + 0x10)
/** SAI1_SAI_AIM SAI AInterrupt mask register2 **/
#define SAI1_SAI_AIM			MMIO32(SAI1_BASE + 0x14)
/** SAI1_SAI_ASR SAI AStatus register **/
#define SAI1_SAI_ASR			MMIO32(SAI1_BASE + 0x18)
/** SAI1_SAI_ACLRFR SAI AClear flag register **/
#define SAI1_SAI_ACLRFR			MMIO32(SAI1_BASE + 0x1c)
/** SAI1_SAI_ADR SAI AData register **/
#define SAI1_SAI_ADR			MMIO32(SAI1_BASE + 0x20)
/** SAI1_SAI_BCR1 SAI BConfiguration register 1 **/
#define SAI1_SAI_BCR1			MMIO32(SAI1_BASE + 0x24)
/** SAI1_SAI_BCR2 SAI BConfiguration register 2 **/
#define SAI1_SAI_BCR2			MMIO32(SAI1_BASE + 0x28)
/** SAI1_SAI_BFRCR SAI BFrame configuration register **/
#define SAI1_SAI_BFRCR			MMIO32(SAI1_BASE + 0x2c)
/** SAI1_SAI_BSLOTR SAI BSlot register **/
#define SAI1_SAI_BSLOTR			MMIO32(SAI1_BASE + 0x30)
/** SAI1_SAI_BIM SAI BInterrupt mask register2 **/
#define SAI1_SAI_BIM			MMIO32(SAI1_BASE + 0x34)
/** SAI1_SAI_BSR SAI BStatus register **/
#define SAI1_SAI_BSR			MMIO32(SAI1_BASE + 0x38)
/** SAI1_SAI_BCLRFR SAI BClear flag register **/
#define SAI1_SAI_BCLRFR			MMIO32(SAI1_BASE + 0x3c)
/** SAI1_SAI_BDR SAI BData register **/
#define SAI1_SAI_BDR			MMIO32(SAI1_BASE + 0x40)

/**@}*/


/** @defgroup sai1_sai_acr1 SAIACR1 SAI AConfiguration register 1
@{*/


#define SAI1_SAI_ACR1_MCKDIV_SHIFT		20
#define SAI1_SAI_ACR1_MCKDIV_MASK		0x0f
/** @defgroup sai1_sai_acr1_mckdiv MCKDIV Master clock divider
@{*/
/**@}*/

/** SAI1_SAI_ACR1_NODIV No divider **/
#define SAI1_SAI_ACR1_NODIV		(1 << 19)
/** SAI1_SAI_ACR1_DMAEN DMA enable **/
#define SAI1_SAI_ACR1_DMAEN		(1 << 17)
/** SAI1_SAI_ACR1_SAIAEN Audio block enable **/
#define SAI1_SAI_ACR1_SAIAEN		(1 << 16)
/** SAI1_SAI_ACR1_OUTDRIV Output drive **/
#define SAI1_SAI_ACR1_OUTDRIV		(1 << 13)
/** SAI1_SAI_ACR1_MONO Mono mode **/
#define SAI1_SAI_ACR1_MONO		(1 << 12)

#define SAI1_SAI_ACR1_SYNCEN_SHIFT		10
#define SAI1_SAI_ACR1_SYNCEN_MASK		0x03
/** @defgroup sai1_sai_acr1_syncen SYNCEN Synchronization enable
@{*/
/**@}*/

/** SAI1_SAI_ACR1_CKSTR Clock strobing edge **/
#define SAI1_SAI_ACR1_CKSTR		(1 << 9)
/** SAI1_SAI_ACR1_LSBFIRST Least significant bit first **/
#define SAI1_SAI_ACR1_LSBFIRST		(1 << 8)

#define SAI1_SAI_ACR1_DS_SHIFT		5
#define SAI1_SAI_ACR1_DS_MASK		0x07
/** @defgroup sai1_sai_acr1_ds DS Data size
@{*/
/**@}*/


#define SAI1_SAI_ACR1_PRTCFG_SHIFT		2
#define SAI1_SAI_ACR1_PRTCFG_MASK		0x03
/** @defgroup sai1_sai_acr1_prtcfg PRTCFG Protocol configuration
@{*/
/**@}*/


#define SAI1_SAI_ACR1_MODE_SHIFT		0
#define SAI1_SAI_ACR1_MODE_MASK		0x03
/** @defgroup sai1_sai_acr1_mode MODE Audio block mode
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_sai_acr2 SAIACR2 SAI AConfiguration register 2
@{*/


#define SAI1_SAI_ACR2_COMP_SHIFT		14
#define SAI1_SAI_ACR2_COMP_MASK		0x03
/** @defgroup sai1_sai_acr2_comp COMP Companding mode
@{*/
/**@}*/

/** SAI1_SAI_ACR2_CPL Complement bit **/
#define SAI1_SAI_ACR2_CPL		(1 << 13)

#define SAI1_SAI_ACR2_MUTECNT_SHIFT		7
#define SAI1_SAI_ACR2_MUTECNT_MASK		0x3f
/** @defgroup sai1_sai_acr2_mutecnt MUTECNT Mute counter
@{*/
/**@}*/

/** SAI1_SAI_ACR2_MUTEVAL Mute value **/
#define SAI1_SAI_ACR2_MUTEVAL		(1 << 6)
/** SAI1_SAI_ACR2_MUTE Mute **/
#define SAI1_SAI_ACR2_MUTE		(1 << 5)
/** SAI1_SAI_ACR2_TRIS Tristate management on data line **/
#define SAI1_SAI_ACR2_TRIS		(1 << 4)
/** SAI1_SAI_ACR2_FFLUSH FIFO flush **/
#define SAI1_SAI_ACR2_FFLUSH		(1 << 3)

#define SAI1_SAI_ACR2_FTH_SHIFT		0
#define SAI1_SAI_ACR2_FTH_MASK		0x07
/** @defgroup sai1_sai_acr2_fth FTH FIFO threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_sai_afrcr SAIAFRCR SAI AFrame configuration register
@{*/

/** SAI1_SAI_AFRCR_FSOFF Frame synchronization offset **/
#define SAI1_SAI_AFRCR_FSOFF		(1 << 18)
/** SAI1_SAI_AFRCR_FSPOL Frame synchronization polarity **/
#define SAI1_SAI_AFRCR_FSPOL		(1 << 17)
/** SAI1_SAI_AFRCR_FSDEF Frame synchronization definition **/
#define SAI1_SAI_AFRCR_FSDEF		(1 << 16)

#define SAI1_SAI_AFRCR_FSALL_SHIFT		8
#define SAI1_SAI_AFRCR_FSALL_MASK		0x7f
/** @defgroup sai1_sai_afrcr_fsall FSALL Frame synchronization active level length
@{*/
/**@}*/


#define SAI1_SAI_AFRCR_FRL_SHIFT		0
#define SAI1_SAI_AFRCR_FRL_MASK		0xff
/** @defgroup sai1_sai_afrcr_frl FRL Frame length
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_sai_aslotr SAIASLOTR SAI ASlot register
@{*/


#define SAI1_SAI_ASLOTR_SLOTEN_SHIFT		16
#define SAI1_SAI_ASLOTR_SLOTEN_MASK		0xffff
/** @defgroup sai1_sai_aslotr_sloten SLOTEN Slot enable
@{*/
/**@}*/


#define SAI1_SAI_ASLOTR_NBSLOT_SHIFT		8
#define SAI1_SAI_ASLOTR_NBSLOT_MASK		0x0f
/** @defgroup sai1_sai_aslotr_nbslot NBSLOT Number of slots in an audio frame
@{*/
/**@}*/


#define SAI1_SAI_ASLOTR_SLOTSZ_SHIFT		6
#define SAI1_SAI_ASLOTR_SLOTSZ_MASK		0x03
/** @defgroup sai1_sai_aslotr_slotsz SLOTSZ Slot size
@{*/
/**@}*/


#define SAI1_SAI_ASLOTR_FBOFF_SHIFT		0
#define SAI1_SAI_ASLOTR_FBOFF_MASK		0x1f
/** @defgroup sai1_sai_aslotr_fboff FBOFF First bit offset
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_sai_aim SAIAIM SAI AInterrupt mask register2
@{*/

/** SAI1_SAI_AIM_LFSDETIE Late frame synchronization detection interrupt enable **/
#define SAI1_SAI_AIM_LFSDETIE		(1 << 6)
/** SAI1_SAI_AIM_AFSDETIE Anticipated frame synchronization detection interrupt enable **/
#define SAI1_SAI_AIM_AFSDETIE		(1 << 5)
/** SAI1_SAI_AIM_CNRDYIE Codec not ready interrupt enable **/
#define SAI1_SAI_AIM_CNRDYIE		(1 << 4)
/** SAI1_SAI_AIM_FREQIE FIFO request interrupt enable **/
#define SAI1_SAI_AIM_FREQIE		(1 << 3)
/** SAI1_SAI_AIM_WCKCFGIE Wrong clock configuration interrupt enable **/
#define SAI1_SAI_AIM_WCKCFGIE		(1 << 2)
/** SAI1_SAI_AIM_MUTEDETIE Mute detection interrupt enable **/
#define SAI1_SAI_AIM_MUTEDETIE		(1 << 1)
/** SAI1_SAI_AIM_OVRUDRIE Overrun/underrun interrupt enable **/
#define SAI1_SAI_AIM_OVRUDRIE		(1 << 0)

/**@}*/

/** @defgroup sai1_sai_asr SAIASR SAI AStatus register
@{*/


#define SAI1_SAI_ASR_FLTH_SHIFT		16
#define SAI1_SAI_ASR_FLTH_MASK		0x07
/** @defgroup sai1_sai_asr_flth FLTH FIFO level threshold
@{*/
/**@}*/

/** SAI1_SAI_ASR_LFSDET Late frame synchronization detection **/
#define SAI1_SAI_ASR_LFSDET		(1 << 6)
/** SAI1_SAI_ASR_AFSDET Anticipated frame synchronization detection **/
#define SAI1_SAI_ASR_AFSDET		(1 << 5)
/** SAI1_SAI_ASR_CNRDY Codec not ready **/
#define SAI1_SAI_ASR_CNRDY		(1 << 4)
/** SAI1_SAI_ASR_FREQ FIFO request **/
#define SAI1_SAI_ASR_FREQ		(1 << 3)
/** SAI1_SAI_ASR_WCKCFG Wrong clock configuration flag **/
#define SAI1_SAI_ASR_WCKCFG		(1 << 2)
/** SAI1_SAI_ASR_MUTEDET Mute detection **/
#define SAI1_SAI_ASR_MUTEDET		(1 << 1)
/** SAI1_SAI_ASR_OVRUDR Overrun / underrun **/
#define SAI1_SAI_ASR_OVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai1_sai_aclrfr SAIACLRFR SAI AClear flag register
@{*/

/** SAI1_SAI_ACLRFR_CLFSDET Clear late frame synchronization detection flag **/
#define SAI1_SAI_ACLRFR_CLFSDET		(1 << 6)
/** SAI1_SAI_ACLRFR_CAFSDET Clear anticipated frame synchronization detection flag **/
#define SAI1_SAI_ACLRFR_CAFSDET		(1 << 5)
/** SAI1_SAI_ACLRFR_CCNRDY Clear codec not ready flag **/
#define SAI1_SAI_ACLRFR_CCNRDY		(1 << 4)
/** SAI1_SAI_ACLRFR_CWCKCFG Clear wrong clock configuration flag **/
#define SAI1_SAI_ACLRFR_CWCKCFG		(1 << 2)
/** SAI1_SAI_ACLRFR_CMUTEDET Mute detection flag **/
#define SAI1_SAI_ACLRFR_CMUTEDET		(1 << 1)
/** SAI1_SAI_ACLRFR_COVRUDR Clear overrun / underrun **/
#define SAI1_SAI_ACLRFR_COVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai1_sai_adr SAIADR SAI AData register
@{*/


#define SAI1_SAI_ADR_DATA_SHIFT		0
#define SAI1_SAI_ADR_DATA_MASK		0xffffffff
/** @defgroup sai1_sai_adr_data DATA Data
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_sai_bcr1 SAIBCR1 SAI BConfiguration register 1
@{*/


#define SAI1_SAI_BCR1_MCKDIV_SHIFT		20
#define SAI1_SAI_BCR1_MCKDIV_MASK		0x0f
/** @defgroup sai1_sai_bcr1_mckdiv MCKDIV Master clock divider
@{*/
/**@}*/

/** SAI1_SAI_BCR1_NODIV No divider **/
#define SAI1_SAI_BCR1_NODIV		(1 << 19)
/** SAI1_SAI_BCR1_DMAEN DMA enable **/
#define SAI1_SAI_BCR1_DMAEN		(1 << 17)
/** SAI1_SAI_BCR1_SAIBEN Audio block enable **/
#define SAI1_SAI_BCR1_SAIBEN		(1 << 16)
/** SAI1_SAI_BCR1_OUTDRIV Output drive **/
#define SAI1_SAI_BCR1_OUTDRIV		(1 << 13)
/** SAI1_SAI_BCR1_MONO Mono mode **/
#define SAI1_SAI_BCR1_MONO		(1 << 12)

#define SAI1_SAI_BCR1_SYNCEN_SHIFT		10
#define SAI1_SAI_BCR1_SYNCEN_MASK		0x03
/** @defgroup sai1_sai_bcr1_syncen SYNCEN Synchronization enable
@{*/
/**@}*/

/** SAI1_SAI_BCR1_CKSTR Clock strobing edge **/
#define SAI1_SAI_BCR1_CKSTR		(1 << 9)
/** SAI1_SAI_BCR1_LSBFIRST Least significant bit first **/
#define SAI1_SAI_BCR1_LSBFIRST		(1 << 8)

#define SAI1_SAI_BCR1_DS_SHIFT		5
#define SAI1_SAI_BCR1_DS_MASK		0x07
/** @defgroup sai1_sai_bcr1_ds DS Data size
@{*/
/**@}*/


#define SAI1_SAI_BCR1_PRTCFG_SHIFT		2
#define SAI1_SAI_BCR1_PRTCFG_MASK		0x03
/** @defgroup sai1_sai_bcr1_prtcfg PRTCFG Protocol configuration
@{*/
/**@}*/


#define SAI1_SAI_BCR1_MODE_SHIFT		0
#define SAI1_SAI_BCR1_MODE_MASK		0x03
/** @defgroup sai1_sai_bcr1_mode MODE Audio block mode
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_sai_bcr2 SAIBCR2 SAI BConfiguration register 2
@{*/


#define SAI1_SAI_BCR2_COMP_SHIFT		14
#define SAI1_SAI_BCR2_COMP_MASK		0x03
/** @defgroup sai1_sai_bcr2_comp COMP Companding mode
@{*/
/**@}*/

/** SAI1_SAI_BCR2_CPL Complement bit **/
#define SAI1_SAI_BCR2_CPL		(1 << 13)

#define SAI1_SAI_BCR2_MUTECNT_SHIFT		7
#define SAI1_SAI_BCR2_MUTECNT_MASK		0x3f
/** @defgroup sai1_sai_bcr2_mutecnt MUTECNT Mute counter
@{*/
/**@}*/

/** SAI1_SAI_BCR2_MUTEVAL Mute value **/
#define SAI1_SAI_BCR2_MUTEVAL		(1 << 6)
/** SAI1_SAI_BCR2_MUTE Mute **/
#define SAI1_SAI_BCR2_MUTE		(1 << 5)
/** SAI1_SAI_BCR2_TRIS Tristate management on data line **/
#define SAI1_SAI_BCR2_TRIS		(1 << 4)
/** SAI1_SAI_BCR2_FFLUSH FIFO flush **/
#define SAI1_SAI_BCR2_FFLUSH		(1 << 3)

#define SAI1_SAI_BCR2_FTH_SHIFT		0
#define SAI1_SAI_BCR2_FTH_MASK		0x07
/** @defgroup sai1_sai_bcr2_fth FTH FIFO threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_sai_bfrcr SAIBFRCR SAI BFrame configuration register
@{*/

/** SAI1_SAI_BFRCR_FSOFF Frame synchronization offset **/
#define SAI1_SAI_BFRCR_FSOFF		(1 << 18)
/** SAI1_SAI_BFRCR_FSPOL Frame synchronization polarity **/
#define SAI1_SAI_BFRCR_FSPOL		(1 << 17)
/** SAI1_SAI_BFRCR_FSDEF Frame synchronization definition **/
#define SAI1_SAI_BFRCR_FSDEF		(1 << 16)

#define SAI1_SAI_BFRCR_FSALL_SHIFT		8
#define SAI1_SAI_BFRCR_FSALL_MASK		0x7f
/** @defgroup sai1_sai_bfrcr_fsall FSALL Frame synchronization active level length
@{*/
/**@}*/


#define SAI1_SAI_BFRCR_FRL_SHIFT		0
#define SAI1_SAI_BFRCR_FRL_MASK		0xff
/** @defgroup sai1_sai_bfrcr_frl FRL Frame length
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_sai_bslotr SAIBSLOTR SAI BSlot register
@{*/


#define SAI1_SAI_BSLOTR_SLOTEN_SHIFT		16
#define SAI1_SAI_BSLOTR_SLOTEN_MASK		0xffff
/** @defgroup sai1_sai_bslotr_sloten SLOTEN Slot enable
@{*/
/**@}*/


#define SAI1_SAI_BSLOTR_NBSLOT_SHIFT		8
#define SAI1_SAI_BSLOTR_NBSLOT_MASK		0x0f
/** @defgroup sai1_sai_bslotr_nbslot NBSLOT Number of slots in an audio frame
@{*/
/**@}*/


#define SAI1_SAI_BSLOTR_SLOTSZ_SHIFT		6
#define SAI1_SAI_BSLOTR_SLOTSZ_MASK		0x03
/** @defgroup sai1_sai_bslotr_slotsz SLOTSZ Slot size
@{*/
/**@}*/


#define SAI1_SAI_BSLOTR_FBOFF_SHIFT		0
#define SAI1_SAI_BSLOTR_FBOFF_MASK		0x1f
/** @defgroup sai1_sai_bslotr_fboff FBOFF First bit offset
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_sai_bim SAIBIM SAI BInterrupt mask register2
@{*/

/** SAI1_SAI_BIM_LFSDETIE Late frame synchronization detection interrupt enable **/
#define SAI1_SAI_BIM_LFSDETIE		(1 << 6)
/** SAI1_SAI_BIM_AFSDETIE Anticipated frame synchronization detection interrupt enable **/
#define SAI1_SAI_BIM_AFSDETIE		(1 << 5)
/** SAI1_SAI_BIM_CNRDYIE Codec not ready interrupt enable **/
#define SAI1_SAI_BIM_CNRDYIE		(1 << 4)
/** SAI1_SAI_BIM_FREQIE FIFO request interrupt enable **/
#define SAI1_SAI_BIM_FREQIE		(1 << 3)
/** SAI1_SAI_BIM_WCKCFGIE Wrong clock configuration interrupt enable **/
#define SAI1_SAI_BIM_WCKCFGIE		(1 << 2)
/** SAI1_SAI_BIM_MUTEDETIE Mute detection interrupt enable **/
#define SAI1_SAI_BIM_MUTEDETIE		(1 << 1)
/** SAI1_SAI_BIM_OVRUDRIE Overrun/underrun interrupt enable **/
#define SAI1_SAI_BIM_OVRUDRIE		(1 << 0)

/**@}*/

/** @defgroup sai1_sai_bsr SAIBSR SAI BStatus register
@{*/


#define SAI1_SAI_BSR_FLTH_SHIFT		16
#define SAI1_SAI_BSR_FLTH_MASK		0x07
/** @defgroup sai1_sai_bsr_flth FLTH FIFO level threshold
@{*/
/**@}*/

/** SAI1_SAI_BSR_LFSDET Late frame synchronization detection **/
#define SAI1_SAI_BSR_LFSDET		(1 << 6)
/** SAI1_SAI_BSR_AFSDET Anticipated frame synchronization detection **/
#define SAI1_SAI_BSR_AFSDET		(1 << 5)
/** SAI1_SAI_BSR_CNRDY Codec not ready **/
#define SAI1_SAI_BSR_CNRDY		(1 << 4)
/** SAI1_SAI_BSR_FREQ FIFO request **/
#define SAI1_SAI_BSR_FREQ		(1 << 3)
/** SAI1_SAI_BSR_WCKCFG Wrong clock configuration flag **/
#define SAI1_SAI_BSR_WCKCFG		(1 << 2)
/** SAI1_SAI_BSR_MUTEDET Mute detection **/
#define SAI1_SAI_BSR_MUTEDET		(1 << 1)
/** SAI1_SAI_BSR_OVRUDR Overrun / underrun **/
#define SAI1_SAI_BSR_OVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai1_sai_bclrfr SAIBCLRFR SAI BClear flag register
@{*/

/** SAI1_SAI_BCLRFR_CLFSDET Clear late frame synchronization detection flag **/
#define SAI1_SAI_BCLRFR_CLFSDET		(1 << 6)
/** SAI1_SAI_BCLRFR_CAFSDET Clear anticipated frame synchronization detection flag **/
#define SAI1_SAI_BCLRFR_CAFSDET		(1 << 5)
/** SAI1_SAI_BCLRFR_CCNRDY Clear codec not ready flag **/
#define SAI1_SAI_BCLRFR_CCNRDY		(1 << 4)
/** SAI1_SAI_BCLRFR_CWCKCFG Clear wrong clock configuration flag **/
#define SAI1_SAI_BCLRFR_CWCKCFG		(1 << 2)
/** SAI1_SAI_BCLRFR_CMUTEDET Mute detection flag **/
#define SAI1_SAI_BCLRFR_CMUTEDET		(1 << 1)
/** SAI1_SAI_BCLRFR_COVRUDR Clear overrun / underrun **/
#define SAI1_SAI_BCLRFR_COVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai1_sai_bdr SAIBDR SAI BData register
@{*/


#define SAI1_SAI_BDR_DATA_SHIFT		0
#define SAI1_SAI_BDR_DATA_MASK		0xffffffff
/** @defgroup sai1_sai_bdr_data DATA Data
@{*/
/**@}*/


/**@}*/

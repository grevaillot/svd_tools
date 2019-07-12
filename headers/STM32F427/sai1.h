#pragma once 

/* --- SAI1: Serial audio interface --------------------------------- */

/** @defgroup sai1_registers Serial audio interface Register
@{*/

/** SAI1_ACR1 AConfiguration register 1 **/
#define SAI1_ACR1			MMIO32(SAI1_BASE + 0x04)
/** SAI1_ACR2 AConfiguration register 2 **/
#define SAI1_ACR2			MMIO32(SAI1_BASE + 0x08)
/** SAI1_AFRCR AFRCR **/
#define SAI1_AFRCR			MMIO32(SAI1_BASE + 0x0c)
/** SAI1_ASLOTR ASlot register **/
#define SAI1_ASLOTR			MMIO32(SAI1_BASE + 0x10)
/** SAI1_AIM AInterrupt mask register2 **/
#define SAI1_AIM			MMIO32(SAI1_BASE + 0x14)
/** SAI1_ASR AStatus register **/
#define SAI1_ASR			MMIO32(SAI1_BASE + 0x18)
/** SAI1_ACLRFR AClear flag register **/
#define SAI1_ACLRFR			MMIO32(SAI1_BASE + 0x1c)
/** SAI1_ADR AData register **/
#define SAI1_ADR			MMIO32(SAI1_BASE + 0x20)
/** SAI1_BCR1 BConfiguration register 1 **/
#define SAI1_BCR1			MMIO32(SAI1_BASE + 0x24)
/** SAI1_BCR2 BConfiguration register 2 **/
#define SAI1_BCR2			MMIO32(SAI1_BASE + 0x28)
/** SAI1_BFRCR BFRCR **/
#define SAI1_BFRCR			MMIO32(SAI1_BASE + 0x2c)
/** SAI1_BSLOTR BSlot register **/
#define SAI1_BSLOTR			MMIO32(SAI1_BASE + 0x30)
/** SAI1_BIM BInterrupt mask register2 **/
#define SAI1_BIM			MMIO32(SAI1_BASE + 0x34)
/** SAI1_BSR BStatus register **/
#define SAI1_BSR			MMIO32(SAI1_BASE + 0x38)
/** SAI1_BCLRFR BClear flag register **/
#define SAI1_BCLRFR			MMIO32(SAI1_BASE + 0x3c)
/** SAI1_BDR BData register **/
#define SAI1_BDR			MMIO32(SAI1_BASE + 0x40)

/**@}*/


/** @defgroup sai1_acr1 ACR1 AConfiguration register 1
@{*/


#define SAI1_ACR1_MCJDIV_SHIFT		20
#define SAI1_ACR1_MCJDIV_MASK		0x0f
/** @defgroup sai1_acr1_mcjdiv MCJDIV Master clock divider
@{*/
/**@}*/

/** SAI1_ACR1_NODIV No divider **/
#define SAI1_ACR1_NODIV		(1 << 19)
/** SAI1_ACR1_DMAEN DMA enable **/
#define SAI1_ACR1_DMAEN		(1 << 17)
/** SAI1_ACR1_SAIAEN Audio block A enable **/
#define SAI1_ACR1_SAIAEN		(1 << 16)
/** SAI1_ACR1_OutDri Output drive **/
#define SAI1_ACR1_OutDri		(1 << 13)
/** SAI1_ACR1_MONO Mono mode **/
#define SAI1_ACR1_MONO		(1 << 12)

#define SAI1_ACR1_SYNCEN_SHIFT		10
#define SAI1_ACR1_SYNCEN_MASK		0x03
/** @defgroup sai1_acr1_syncen SYNCEN Synchronization enable
@{*/
/**@}*/

/** SAI1_ACR1_CKSTR Clock strobing edge **/
#define SAI1_ACR1_CKSTR		(1 << 9)
/** SAI1_ACR1_LSBFIRST Least significant bit first **/
#define SAI1_ACR1_LSBFIRST		(1 << 8)

#define SAI1_ACR1_DS_SHIFT		5
#define SAI1_ACR1_DS_MASK		0x07
/** @defgroup sai1_acr1_ds DS Data size
@{*/
/**@}*/


#define SAI1_ACR1_PRTCFG_SHIFT		2
#define SAI1_ACR1_PRTCFG_MASK		0x03
/** @defgroup sai1_acr1_prtcfg PRTCFG Protocol configuration
@{*/
/**@}*/


#define SAI1_ACR1_MODE_SHIFT		0
#define SAI1_ACR1_MODE_MASK		0x03
/** @defgroup sai1_acr1_mode MODE Audio block mode
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_acr2 ACR2 AConfiguration register 2
@{*/


#define SAI1_ACR2_COMP_SHIFT		14
#define SAI1_ACR2_COMP_MASK		0x03
/** @defgroup sai1_acr2_comp COMP Companding mode
@{*/
/**@}*/

/** SAI1_ACR2_CPL Complement bit **/
#define SAI1_ACR2_CPL		(1 << 13)

#define SAI1_ACR2_MUTECN_SHIFT		7
#define SAI1_ACR2_MUTECN_MASK		0x3f
/** @defgroup sai1_acr2_mutecn MUTECN Mute counter
@{*/
/**@}*/

/** SAI1_ACR2_MUTEVAL Mute value **/
#define SAI1_ACR2_MUTEVAL		(1 << 6)
/** SAI1_ACR2_MUTE Mute **/
#define SAI1_ACR2_MUTE		(1 << 5)
/** SAI1_ACR2_TRIS Tristate management on data line **/
#define SAI1_ACR2_TRIS		(1 << 4)
/** SAI1_ACR2_FFLUS FIFO flush **/
#define SAI1_ACR2_FFLUS		(1 << 3)

#define SAI1_ACR2_FTH_SHIFT		0
#define SAI1_ACR2_FTH_MASK		0x07
/** @defgroup sai1_acr2_fth FTH FIFO threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_afrcr AFRCR AFRCR
@{*/

/** SAI1_AFRCR_FSOFF Frame synchronization offset **/
#define SAI1_AFRCR_FSOFF		(1 << 18)
/** SAI1_AFRCR_FSPOL Frame synchronization polarity **/
#define SAI1_AFRCR_FSPOL		(1 << 17)
/** SAI1_AFRCR_FSDEF Frame synchronization definition **/
#define SAI1_AFRCR_FSDEF		(1 << 16)

#define SAI1_AFRCR_FSALL_SHIFT		8
#define SAI1_AFRCR_FSALL_MASK		0x7f
/** @defgroup sai1_afrcr_fsall FSALL Frame synchronization active level length
@{*/
/**@}*/


#define SAI1_AFRCR_FRL_SHIFT		0
#define SAI1_AFRCR_FRL_MASK		0xff
/** @defgroup sai1_afrcr_frl FRL Frame length
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_aslotr ASLOTR ASlot register
@{*/


#define SAI1_ASLOTR_SLOTEN_SHIFT		16
#define SAI1_ASLOTR_SLOTEN_MASK		0xffff
/** @defgroup sai1_aslotr_sloten SLOTEN Slot enable
@{*/
/**@}*/


#define SAI1_ASLOTR_NBSLOT_SHIFT		8
#define SAI1_ASLOTR_NBSLOT_MASK		0x0f
/** @defgroup sai1_aslotr_nbslot NBSLOT Number of slots in an audio frame
@{*/
/**@}*/


#define SAI1_ASLOTR_SLOTSZ_SHIFT		6
#define SAI1_ASLOTR_SLOTSZ_MASK		0x03
/** @defgroup sai1_aslotr_slotsz SLOTSZ Slot size
@{*/
/**@}*/


#define SAI1_ASLOTR_FBOFF_SHIFT		0
#define SAI1_ASLOTR_FBOFF_MASK		0x1f
/** @defgroup sai1_aslotr_fboff FBOFF First bit offset
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_aim AIM AInterrupt mask register2
@{*/

/** SAI1_AIM_LFSDET Late frame synchronization detection interrupt enable **/
#define SAI1_AIM_LFSDET		(1 << 6)
/** SAI1_AIM_AFSDETIE Anticipated frame synchronization detection interrupt enable **/
#define SAI1_AIM_AFSDETIE		(1 << 5)
/** SAI1_AIM_CNRDYIE Codec not ready interrupt enable **/
#define SAI1_AIM_CNRDYIE		(1 << 4)
/** SAI1_AIM_FREQIE FIFO request interrupt enable **/
#define SAI1_AIM_FREQIE		(1 << 3)
/** SAI1_AIM_WCKCFG Wrong clock configuration interrupt enable **/
#define SAI1_AIM_WCKCFG		(1 << 2)
/** SAI1_AIM_MUTEDET Mute detection interrupt enable **/
#define SAI1_AIM_MUTEDET		(1 << 1)
/** SAI1_AIM_OVRUDRIE Overrun/underrun interrupt enable **/
#define SAI1_AIM_OVRUDRIE		(1 << 0)

/**@}*/

/** @defgroup sai1_asr ASR AStatus register
@{*/


#define SAI1_ASR_FLVL_SHIFT		16
#define SAI1_ASR_FLVL_MASK		0x07
/** @defgroup sai1_asr_flvl FLVL FIFO level threshold
@{*/
/**@}*/

/** SAI1_ASR_LFSDET Late frame synchronization detection **/
#define SAI1_ASR_LFSDET		(1 << 6)
/** SAI1_ASR_AFSDET Anticipated frame synchronization detection **/
#define SAI1_ASR_AFSDET		(1 << 5)
/** SAI1_ASR_CNRDY Codec not ready **/
#define SAI1_ASR_CNRDY		(1 << 4)
/** SAI1_ASR_FREQ FIFO request **/
#define SAI1_ASR_FREQ		(1 << 3)
/** SAI1_ASR_WCKCFG Wrong clock configuration flag. This bit is read only. **/
#define SAI1_ASR_WCKCFG		(1 << 2)
/** SAI1_ASR_MUTEDET Mute detection **/
#define SAI1_ASR_MUTEDET		(1 << 1)
/** SAI1_ASR_OVRUDR Overrun / underrun **/
#define SAI1_ASR_OVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai1_aclrfr ACLRFR AClear flag register
@{*/

/** SAI1_ACLRFR_LFSDET Clear late frame synchronization detection flag **/
#define SAI1_ACLRFR_LFSDET		(1 << 6)
/** SAI1_ACLRFR_CAFSDET Clear anticipated frame synchronization detection flag. **/
#define SAI1_ACLRFR_CAFSDET		(1 << 5)
/** SAI1_ACLRFR_CNRDY Clear codec not ready flag **/
#define SAI1_ACLRFR_CNRDY		(1 << 4)
/** SAI1_ACLRFR_WCKCFG Clear wrong clock configuration flag **/
#define SAI1_ACLRFR_WCKCFG		(1 << 2)
/** SAI1_ACLRFR_MUTEDET Mute detection flag **/
#define SAI1_ACLRFR_MUTEDET		(1 << 1)
/** SAI1_ACLRFR_OVRUDR Clear overrun / underrun **/
#define SAI1_ACLRFR_OVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai1_adr ADR AData register
@{*/


#define SAI1_ADR_DATA_SHIFT		0
#define SAI1_ADR_DATA_MASK		0xffffffff
/** @defgroup sai1_adr_data DATA Data
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_bcr1 BCR1 BConfiguration register 1
@{*/


#define SAI1_BCR1_MCJDIV_SHIFT		20
#define SAI1_BCR1_MCJDIV_MASK		0x0f
/** @defgroup sai1_bcr1_mcjdiv MCJDIV Master clock divider
@{*/
/**@}*/

/** SAI1_BCR1_NODIV No divider **/
#define SAI1_BCR1_NODIV		(1 << 19)
/** SAI1_BCR1_DMAEN DMA enable **/
#define SAI1_BCR1_DMAEN		(1 << 17)
/** SAI1_BCR1_SAIBEN Audio block B enable **/
#define SAI1_BCR1_SAIBEN		(1 << 16)
/** SAI1_BCR1_OutDri Output drive **/
#define SAI1_BCR1_OutDri		(1 << 13)
/** SAI1_BCR1_MONO Mono mode **/
#define SAI1_BCR1_MONO		(1 << 12)

#define SAI1_BCR1_SYNCEN_SHIFT		10
#define SAI1_BCR1_SYNCEN_MASK		0x03
/** @defgroup sai1_bcr1_syncen SYNCEN Synchronization enable
@{*/
/**@}*/

/** SAI1_BCR1_CKSTR Clock strobing edge **/
#define SAI1_BCR1_CKSTR		(1 << 9)
/** SAI1_BCR1_LSBFIRST Least significant bit first **/
#define SAI1_BCR1_LSBFIRST		(1 << 8)

#define SAI1_BCR1_DS_SHIFT		5
#define SAI1_BCR1_DS_MASK		0x07
/** @defgroup sai1_bcr1_ds DS Data size
@{*/
/**@}*/


#define SAI1_BCR1_PRTCFG_SHIFT		2
#define SAI1_BCR1_PRTCFG_MASK		0x03
/** @defgroup sai1_bcr1_prtcfg PRTCFG Protocol configuration
@{*/
/**@}*/


#define SAI1_BCR1_MODE_SHIFT		0
#define SAI1_BCR1_MODE_MASK		0x03
/** @defgroup sai1_bcr1_mode MODE Audio block mode
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_bcr2 BCR2 BConfiguration register 2
@{*/


#define SAI1_BCR2_COMP_SHIFT		14
#define SAI1_BCR2_COMP_MASK		0x03
/** @defgroup sai1_bcr2_comp COMP Companding mode
@{*/
/**@}*/

/** SAI1_BCR2_CPL Complement bit **/
#define SAI1_BCR2_CPL		(1 << 13)

#define SAI1_BCR2_MUTECN_SHIFT		7
#define SAI1_BCR2_MUTECN_MASK		0x3f
/** @defgroup sai1_bcr2_mutecn MUTECN Mute counter
@{*/
/**@}*/

/** SAI1_BCR2_MUTEVAL Mute value **/
#define SAI1_BCR2_MUTEVAL		(1 << 6)
/** SAI1_BCR2_MUTE Mute **/
#define SAI1_BCR2_MUTE		(1 << 5)
/** SAI1_BCR2_TRIS Tristate management on data line **/
#define SAI1_BCR2_TRIS		(1 << 4)
/** SAI1_BCR2_FFLUS FIFO flush **/
#define SAI1_BCR2_FFLUS		(1 << 3)

#define SAI1_BCR2_FTH_SHIFT		0
#define SAI1_BCR2_FTH_MASK		0x07
/** @defgroup sai1_bcr2_fth FTH FIFO threshold
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_bfrcr BFRCR BFRCR
@{*/

/** SAI1_BFRCR_FSOFF Frame synchronization offset **/
#define SAI1_BFRCR_FSOFF		(1 << 18)
/** SAI1_BFRCR_FSPOL Frame synchronization polarity **/
#define SAI1_BFRCR_FSPOL		(1 << 17)
/** SAI1_BFRCR_FSDEF Frame synchronization definition **/
#define SAI1_BFRCR_FSDEF		(1 << 16)

#define SAI1_BFRCR_FSALL_SHIFT		8
#define SAI1_BFRCR_FSALL_MASK		0x7f
/** @defgroup sai1_bfrcr_fsall FSALL Frame synchronization active level length
@{*/
/**@}*/


#define SAI1_BFRCR_FRL_SHIFT		0
#define SAI1_BFRCR_FRL_MASK		0xff
/** @defgroup sai1_bfrcr_frl FRL Frame length
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_bslotr BSLOTR BSlot register
@{*/


#define SAI1_BSLOTR_SLOTEN_SHIFT		16
#define SAI1_BSLOTR_SLOTEN_MASK		0xffff
/** @defgroup sai1_bslotr_sloten SLOTEN Slot enable
@{*/
/**@}*/


#define SAI1_BSLOTR_NBSLOT_SHIFT		8
#define SAI1_BSLOTR_NBSLOT_MASK		0x0f
/** @defgroup sai1_bslotr_nbslot NBSLOT Number of slots in an audio frame
@{*/
/**@}*/


#define SAI1_BSLOTR_SLOTSZ_SHIFT		6
#define SAI1_BSLOTR_SLOTSZ_MASK		0x03
/** @defgroup sai1_bslotr_slotsz SLOTSZ Slot size
@{*/
/**@}*/


#define SAI1_BSLOTR_FBOFF_SHIFT		0
#define SAI1_BSLOTR_FBOFF_MASK		0x1f
/** @defgroup sai1_bslotr_fboff FBOFF First bit offset
@{*/
/**@}*/


/**@}*/

/** @defgroup sai1_bim BIM BInterrupt mask register2
@{*/

/** SAI1_BIM_LFSDETIE Late frame synchronization detection interrupt enable **/
#define SAI1_BIM_LFSDETIE		(1 << 6)
/** SAI1_BIM_AFSDETIE Anticipated frame synchronization detection interrupt enable **/
#define SAI1_BIM_AFSDETIE		(1 << 5)
/** SAI1_BIM_CNRDYIE Codec not ready interrupt enable **/
#define SAI1_BIM_CNRDYIE		(1 << 4)
/** SAI1_BIM_FREQIE FIFO request interrupt enable **/
#define SAI1_BIM_FREQIE		(1 << 3)
/** SAI1_BIM_WCKCFG Wrong clock configuration interrupt enable **/
#define SAI1_BIM_WCKCFG		(1 << 2)
/** SAI1_BIM_MUTEDET Mute detection interrupt enable **/
#define SAI1_BIM_MUTEDET		(1 << 1)
/** SAI1_BIM_OVRUDRIE Overrun/underrun interrupt enable **/
#define SAI1_BIM_OVRUDRIE		(1 << 0)

/**@}*/

/** @defgroup sai1_bsr BSR BStatus register
@{*/


#define SAI1_BSR_FLVL_SHIFT		16
#define SAI1_BSR_FLVL_MASK		0x07
/** @defgroup sai1_bsr_flvl FLVL FIFO level threshold
@{*/
/**@}*/

/** SAI1_BSR_LFSDET Late frame synchronization detection **/
#define SAI1_BSR_LFSDET		(1 << 6)
/** SAI1_BSR_AFSDET Anticipated frame synchronization detection **/
#define SAI1_BSR_AFSDET		(1 << 5)
/** SAI1_BSR_CNRDY Codec not ready **/
#define SAI1_BSR_CNRDY		(1 << 4)
/** SAI1_BSR_FREQ FIFO request **/
#define SAI1_BSR_FREQ		(1 << 3)
/** SAI1_BSR_WCKCFG Wrong clock configuration flag **/
#define SAI1_BSR_WCKCFG		(1 << 2)
/** SAI1_BSR_MUTEDET Mute detection **/
#define SAI1_BSR_MUTEDET		(1 << 1)
/** SAI1_BSR_OVRUDR Overrun / underrun **/
#define SAI1_BSR_OVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai1_bclrfr BCLRFR BClear flag register
@{*/

/** SAI1_BCLRFR_LFSDET Clear late frame synchronization detection flag **/
#define SAI1_BCLRFR_LFSDET		(1 << 6)
/** SAI1_BCLRFR_CAFSDET Clear anticipated frame synchronization detection flag **/
#define SAI1_BCLRFR_CAFSDET		(1 << 5)
/** SAI1_BCLRFR_CNRDY Clear codec not ready flag **/
#define SAI1_BCLRFR_CNRDY		(1 << 4)
/** SAI1_BCLRFR_WCKCFG Clear wrong clock configuration flag **/
#define SAI1_BCLRFR_WCKCFG		(1 << 2)
/** SAI1_BCLRFR_MUTEDET Mute detection flag **/
#define SAI1_BCLRFR_MUTEDET		(1 << 1)
/** SAI1_BCLRFR_OVRUDR Clear overrun / underrun **/
#define SAI1_BCLRFR_OVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai1_bdr BDR BData register
@{*/


#define SAI1_BDR_DATA_SHIFT		0
#define SAI1_BDR_DATA_MASK		0xffffffff
/** @defgroup sai1_bdr_data DATA Data
@{*/
/**@}*/


/**@}*/

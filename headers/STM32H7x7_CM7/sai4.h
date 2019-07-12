#pragma once 

/* --- SAI4: SAI ---------------------------------------------------- */

/** @defgroup sai4_registers SAI Register
@{*/

/** SAI4_SAI_GCR Global configuration register **/
#define SAI4_SAI_GCR			MMIO32(SAI4_BASE + 0x00)
/** SAI4_SAI_ACR1 Configuration register 1 **/
#define SAI4_SAI_ACR1			MMIO32(SAI4_BASE + 0x04)
/** SAI4_SAI_ACR2 Configuration register 2 **/
#define SAI4_SAI_ACR2			MMIO32(SAI4_BASE + 0x08)
/** SAI4_SAI_AFRCR This register has no meaning in AC97 and SPDIF audio protocol **/
#define SAI4_SAI_AFRCR			MMIO32(SAI4_BASE + 0x0c)
/** SAI4_SAI_ASLOTR This register has no meaning in AC97 and SPDIF audio protocol **/
#define SAI4_SAI_ASLOTR			MMIO32(SAI4_BASE + 0x10)
/** SAI4_SAI_AIM Interrupt mask register 2 **/
#define SAI4_SAI_AIM			MMIO32(SAI4_BASE + 0x14)
/** SAI4_SAI_ASR Status register **/
#define SAI4_SAI_ASR			MMIO32(SAI4_BASE + 0x18)
/** SAI4_SAI_ACLRFR Clear flag register **/
#define SAI4_SAI_ACLRFR			MMIO32(SAI4_BASE + 0x1c)
/** SAI4_SAI_ADR Data register **/
#define SAI4_SAI_ADR			MMIO32(SAI4_BASE + 0x20)
/** SAI4_SAI_BCR1 Configuration register 1 **/
#define SAI4_SAI_BCR1			MMIO32(SAI4_BASE + 0x24)
/** SAI4_SAI_BCR2 Configuration register 2 **/
#define SAI4_SAI_BCR2			MMIO32(SAI4_BASE + 0x28)
/** SAI4_SAI_BFRCR This register has no meaning in AC97 and SPDIF audio protocol **/
#define SAI4_SAI_BFRCR			MMIO32(SAI4_BASE + 0x2c)
/** SAI4_SAI_BSLOTR This register has no meaning in AC97 and SPDIF audio protocol **/
#define SAI4_SAI_BSLOTR			MMIO32(SAI4_BASE + 0x30)
/** SAI4_SAI_BIM Interrupt mask register 2 **/
#define SAI4_SAI_BIM			MMIO32(SAI4_BASE + 0x34)
/** SAI4_SAI_BSR Status register **/
#define SAI4_SAI_BSR			MMIO32(SAI4_BASE + 0x38)
/** SAI4_SAI_BCLRFR Clear flag register **/
#define SAI4_SAI_BCLRFR			MMIO32(SAI4_BASE + 0x3c)
/** SAI4_SAI_BDR Data register **/
#define SAI4_SAI_BDR			MMIO32(SAI4_BASE + 0x40)
/** SAI4_SAI_PDMCR PDM control register **/
#define SAI4_SAI_PDMCR			MMIO32(SAI4_BASE + 0x44)
/** SAI4_SAI_PDMDLY PDM delay register **/
#define SAI4_SAI_PDMDLY			MMIO32(SAI4_BASE + 0x48)

/**@}*/


/** @defgroup sai4_sai_gcr SAIGCR Global configuration register
@{*/


#define SAI4_SAI_GCR_SYNCOUT_SHIFT		4
#define SAI4_SAI_GCR_SYNCOUT_MASK		0x03
/** @defgroup sai4_sai_gcr_syncout SYNCOUT Synchronization outputs These bits are set and cleared by software.
@{*/
/**@}*/


#define SAI4_SAI_GCR_SYNCIN_SHIFT		0
#define SAI4_SAI_GCR_SYNCIN_MASK		0x03
/** @defgroup sai4_sai_gcr_syncin SYNCIN Synchronization inputs
@{*/
/**@}*/


/**@}*/

/** @defgroup sai4_sai_acr1 SAIACR1 Configuration register 1
@{*/

/** SAI4_SAI_ACR1_MCKEN Master clock generation enable **/
#define SAI4_SAI_ACR1_MCKEN		(1 << 27)
/** SAI4_SAI_ACR1_OSR Oversampling ratio for master clock **/
#define SAI4_SAI_ACR1_OSR		(1 << 26)

#define SAI4_SAI_ACR1_MCKDIV_SHIFT		20
#define SAI4_SAI_ACR1_MCKDIV_MASK		0x3f
/** @defgroup sai4_sai_acr1_mckdiv MCKDIV Master clock divider. These bits are set and cleared by software. These bits are meaningless when the audio block operates in slave mode. They have to be configured when the audio block is disabled. Others: the master clock frequency is calculated accordingly to the following formula:
@{*/
/**@}*/

/** SAI4_SAI_ACR1_NOMCK No divider **/
#define SAI4_SAI_ACR1_NOMCK		(1 << 19)
/** SAI4_SAI_ACR1_DMAEN DMA enable. This bit is set and cleared by software. Note: Since the audio block defaults to operate as a transmitter after reset, the MODE[1:0] bits must be configured before setting DMAEN to avoid a DMA request in receiver mode. **/
#define SAI4_SAI_ACR1_DMAEN		(1 << 17)
/** SAI4_SAI_ACR1_SAIXEN Audio block enable where x is A or B. This bit is set by software. To switch off the audio block, the application software must program this bit to 0 and poll the bit till it reads back 0, meaning that the block is completely disabled. Before setting this bit to 1, check that it is set to 0, otherwise the enable command will not be taken into account. This bit allows to control the state of SAIx audio block. If it is disabled when an audio frame transfer is ongoing, the ongoing transfer completes and the cell is fully disabled at the end of this audio frame transfer. Note: When SAIx block is configured in master mode, the clock must be present on the input of SAIx before setting SAIXEN bit. **/
#define SAI4_SAI_ACR1_SAIXEN		(1 << 16)
/** SAI4_SAI_ACR1_OUTDRIV Output drive. This bit is set and cleared by software. Note: This bit has to be set before enabling the audio block and after the audio block configuration. **/
#define SAI4_SAI_ACR1_OUTDRIV		(1 << 13)
/** SAI4_SAI_ACR1_MONO Mono mode. This bit is set and cleared by software. It is meaningful only when the number of slots is equal to 2. When the mono mode is selected, slot 0 data are duplicated on slot 1 when the audio block operates as a transmitter. In reception mode, the slot1 is discarded and only the data received from slot 0 are stored. Refer to Section: Mono/stereo mode for more details. **/
#define SAI4_SAI_ACR1_MONO		(1 << 12)

#define SAI4_SAI_ACR1_SYNCEN_SHIFT		10
#define SAI4_SAI_ACR1_SYNCEN_MASK		0x03
/** @defgroup sai4_sai_acr1_syncen SYNCEN Synchronization enable. These bits are set and cleared by software. They must be configured when the audio sub-block is disabled. Note: The audio sub-block should be configured as asynchronous when SPDIF mode is enabled.
@{*/
/**@}*/

/** SAI4_SAI_ACR1_CKSTR Clock strobing edge. This bit is set and cleared by software. It must be configured when the audio block is disabled. This bit has no meaning in SPDIF audio protocol. **/
#define SAI4_SAI_ACR1_CKSTR		(1 << 9)
/** SAI4_SAI_ACR1_LSBFIRST Least significant bit first. This bit is set and cleared by software. It must be configured when the audio block is disabled. This bit has no meaning in AC97 audio protocol since AC97 data are always transferred with the MSB first. This bit has no meaning in SPDIF audio protocol since in SPDIF data are always transferred with LSB first. **/
#define SAI4_SAI_ACR1_LSBFIRST		(1 << 8)

#define SAI4_SAI_ACR1_DS_SHIFT		5
#define SAI4_SAI_ACR1_DS_MASK		0x07
/** @defgroup sai4_sai_acr1_ds DS Data size. These bits are set and cleared by software. These bits are ignored when the SPDIF protocols are selected (bit PRTCFG[1:0]), because the frame and the data size are fixed in such case. When the companding mode is selected through COMP[1:0] bits, DS[1:0] are ignored since the data size is fixed to 8 bits by the algorithm. These bits must be configured when the audio block is disabled.
@{*/
/**@}*/


#define SAI4_SAI_ACR1_PRTCFG_SHIFT		2
#define SAI4_SAI_ACR1_PRTCFG_MASK		0x03
/** @defgroup sai4_sai_acr1_prtcfg PRTCFG Protocol configuration. These bits are set and cleared by software. These bits have to be configured when the audio block is disabled.
@{*/
/**@}*/


#define SAI4_SAI_ACR1_MODE_SHIFT		0
#define SAI4_SAI_ACR1_MODE_MASK		0x03
/** @defgroup sai4_sai_acr1_mode MODE SAIx audio block mode immediately
@{*/
/**@}*/


/**@}*/

/** @defgroup sai4_sai_acr2 SAIACR2 Configuration register 2
@{*/


#define SAI4_SAI_ACR2_COMP_SHIFT		14
#define SAI4_SAI_ACR2_COMP_MASK		0x03
/** @defgroup sai4_sai_acr2_comp COMP Companding mode. These bits are set and cleared by software. The -Law and the A-Law log are a part of the CCITT G.711 recommendation, the type of complement that will be used depends on CPL bit. The data expansion or data compression are determined by the state of bit MODE[0]. The data compression is applied if the audio block is configured as a transmitter. The data expansion is automatically applied when the audio block is configured as a receiver. Refer to Section: Companding mode for more details. Note: Companding mode is applicable only when TDM is selected.
@{*/
/**@}*/

/** SAI4_SAI_ACR2_CPL Complement bit. This bit is set and cleared by software. It defines the type of complement to be used for companding mode Note: This bit has effect only when the companding mode is -Law algorithm or A-Law algorithm. **/
#define SAI4_SAI_ACR2_CPL		(1 << 13)

#define SAI4_SAI_ACR2_MUTECNT_SHIFT		7
#define SAI4_SAI_ACR2_MUTECNT_MASK		0x3f
/** @defgroup sai4_sai_acr2_mutecnt MUTECNT Mute counter. These bits are set and cleared by software. They are used only in reception mode. The value set in these bits is compared to the number of consecutive mute frames detected in reception. When the number of mute frames is equal to this value, the flag MUTEDET will be set and an interrupt will be generated if bit MUTEDETIE is set. Refer to Section: Mute mode for more details.
@{*/
/**@}*/

/** SAI4_SAI_ACR2_MUTEVAL Mute value. This bit is set and cleared by software.It must be written before enabling the audio block: SAIXEN. This bit is meaningful only when the audio block operates as a transmitter, the number of slots is lower or equal to 2 and the MUTE bit is set. If more slots are declared, the bit value sent during the transmission in mute mode is equal to 0, whatever the value of MUTEVAL. if the number of slot is lower or equal to 2 and MUTEVAL = 1, the MUTE value transmitted for each slot is the one sent during the previous frame. Refer to Section: Mute mode for more details. Note: This bit is meaningless and should not be used for SPDIF audio blocks. **/
#define SAI4_SAI_ACR2_MUTEVAL		(1 << 6)
/** SAI4_SAI_ACR2_MUTE Mute. This bit is set and cleared by software. It is meaningful only when the audio block operates as a transmitter. The MUTE value is linked to value of MUTEVAL if the number of slots is lower or equal to 2, or equal to 0 if it is greater than 2. Refer to Section: Mute mode for more details. Note: This bit is meaningless and should not be used for SPDIF audio blocks. **/
#define SAI4_SAI_ACR2_MUTE		(1 << 5)
/** SAI4_SAI_ACR2_TRIS Tristate management on data line. This bit is set and cleared by software. It is meaningful only if the audio block is configured as a transmitter. This bit is not used when the audio block is configured in SPDIF mode. It should be configured when SAI is disabled. Refer to Section: Output data line management on an inactive slot for more details. **/
#define SAI4_SAI_ACR2_TRIS		(1 << 4)
/** SAI4_SAI_ACR2_FFLUSH FIFO flush. This bit is set by software. It is always read as 0. This bit should be configured when the SAI is disabled. **/
#define SAI4_SAI_ACR2_FFLUSH		(1 << 3)

#define SAI4_SAI_ACR2_FTH_SHIFT		0
#define SAI4_SAI_ACR2_FTH_MASK		0x07
/** @defgroup sai4_sai_acr2_fth FTH FIFO threshold. This bit is set and cleared by software.
@{*/
/**@}*/


/**@}*/

/** @defgroup sai4_sai_afrcr SAIAFRCR This register has no meaning in AC97 and SPDIF audio protocol
@{*/

/** SAI4_SAI_AFRCR_FSOFF Frame synchronization offset. This bit is set and cleared by software. It is meaningless and is not used in AC97 or SPDIF audio block configuration. This bit must be configured when the audio block is disabled. **/
#define SAI4_SAI_AFRCR_FSOFF		(1 << 18)
/** SAI4_SAI_AFRCR_FSPOL Frame synchronization polarity. This bit is set and cleared by software. It is used to configure the level of the start of frame on the FS signal. It is meaningless and is not used in AC97 or SPDIF audio block configuration. This bit must be configured when the audio block is disabled. **/
#define SAI4_SAI_AFRCR_FSPOL		(1 << 17)
/** SAI4_SAI_AFRCR_FSDEF Frame synchronization definition. This bit is set and cleared by software. When the bit is set, the number of slots defined in the SAI_xSLOTR register has to be even. It means that half of this number of slots will be dedicated to the left channel and the other slots for the right channel (e.g: this bit has to be set for I2S or MSB/LSB-justified protocols...). This bit is meaningless and is not used in AC97 or SPDIF audio block configuration. It must be configured when the audio block is disabled. **/
#define SAI4_SAI_AFRCR_FSDEF		(1 << 16)

#define SAI4_SAI_AFRCR_FSALL_SHIFT		8
#define SAI4_SAI_AFRCR_FSALL_MASK		0x7f
/** @defgroup sai4_sai_afrcr_fsall FSALL Frame synchronization active level length. These bits are set and cleared by software. They specify the length in number of bit clock (SCK) + 1 (FSALL[6:0] + 1) of the active level of the FS signal in the audio frame These bits are meaningless and are not used in AC97 or SPDIF audio block configuration. They must be configured when the audio block is disabled.
@{*/
/**@}*/


#define SAI4_SAI_AFRCR_FRL_SHIFT		0
#define SAI4_SAI_AFRCR_FRL_MASK		0xff
/** @defgroup sai4_sai_afrcr_frl FRL Frame length. These bits are set and cleared by software. They define the audio frame length expressed in number of SCK clock cycles: the number of bits in the frame is equal to FRL[7:0] + 1. The minimum number of bits to transfer in an audio frame must be equal to 8, otherwise the audio block will behaves in an unexpected way. This is the case when the data size is 8 bits and only one slot 0 is defined in NBSLOT[4:0] of SAI_xSLOTR register (NBSLOT[3:0] = 0000). In master mode, if the master clock (available on MCLK_x pin) is used, the frame length should be aligned with a number equal to a power of 2, ranging from 8 to 256. When the master clock is not used (NODIV = 1), it is recommended to program the frame length to an value ranging from 8 to 256. These bits are meaningless and are not used in AC97 or SPDIF audio block configuration.
@{*/
/**@}*/


/**@}*/

/** @defgroup sai4_sai_aslotr SAIASLOTR This register has no meaning in AC97 and SPDIF audio protocol
@{*/


#define SAI4_SAI_ASLOTR_SLOTEN_SHIFT		16
#define SAI4_SAI_ASLOTR_SLOTEN_MASK		0xffff
/** @defgroup sai4_sai_aslotr_sloten SLOTEN Slot enable. These bits are set and cleared by software. Each SLOTEN bit corresponds to a slot position from 0 to 15 (maximum 16 slots). The slot must be enabled when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
@{*/
/**@}*/


#define SAI4_SAI_ASLOTR_NBSLOT_SHIFT		8
#define SAI4_SAI_ASLOTR_NBSLOT_MASK		0x0f
/** @defgroup sai4_sai_aslotr_nbslot NBSLOT Number of slots in an audio frame. These bits are set and cleared by software. The value set in this bitfield represents the number of slots + 1 in the audio frame (including the number of inactive slots). The maximum number of slots is 16. The number of slots should be even if FSDEF bit in the SAI_xFRCR register is set. The number of slots must be configured when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
@{*/
/**@}*/


#define SAI4_SAI_ASLOTR_SLOTSZ_SHIFT		6
#define SAI4_SAI_ASLOTR_SLOTSZ_MASK		0x03
/** @defgroup sai4_sai_aslotr_slotsz SLOTSZ Slot size This bits is set and cleared by software. The slot size must be higher or equal to the data size. If this condition is not respected, the behavior of the SAI will be undetermined. Refer to Section: Output data line management on an inactive slot for information on how to drive SD line. These bits must be set when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
@{*/
/**@}*/


#define SAI4_SAI_ASLOTR_FBOFF_SHIFT		0
#define SAI4_SAI_ASLOTR_FBOFF_MASK		0x1f
/** @defgroup sai4_sai_aslotr_fboff FBOFF First bit offset These bits are set and cleared by software. The value set in this bitfield defines the position of the first data transfer bit in the slot. It represents an offset value. In transmission mode, the bits outside the data field are forced to 0. In reception mode, the extra received bits are discarded. These bits must be set when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
@{*/
/**@}*/


/**@}*/

/** @defgroup sai4_sai_aim SAIAIM Interrupt mask register 2
@{*/

/** SAI4_SAI_AIM_LFSDETIE Late frame synchronization detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt will be generated if the LFSDET bit is set in the SAI_xSR register. This bit is meaningless in AC97, SPDIF mode or when the audio block operates as a master. **/
#define SAI4_SAI_AIM_LFSDETIE		(1 << 6)
/** SAI4_SAI_AIM_AFSDETIE Anticipated frame synchronization detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt will be generated if the AFSDET bit in the SAI_xSR register is set. This bit is meaningless in AC97, SPDIF mode or when the audio block operates as a master. **/
#define SAI4_SAI_AIM_AFSDETIE		(1 << 5)
/** SAI4_SAI_AIM_CNRDYIE Codec not ready interrupt enable (AC97). This bit is set and cleared by software. When the interrupt is enabled, the audio block detects in the slot 0 (tag0) of the AC97 frame if the Codec connected to this line is ready or not. If it is not ready, the CNRDY flag in the SAI_xSR register is set and an interruption i generated. This bit has a meaning only if the AC97 mode is selected through PRTCFG[1:0] bits and the audio block is operates as a receiver. **/
#define SAI4_SAI_AIM_CNRDYIE		(1 << 4)
/** SAI4_SAI_AIM_FREQIE FIFO request interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the FREQ bit in the SAI_xSR register is set. Since the audio block defaults to operate as a transmitter after reset, the MODE bit must be configured before setting FREQIE to avoid a parasitic interruption in receiver mode, **/
#define SAI4_SAI_AIM_FREQIE		(1 << 3)
/** SAI4_SAI_AIM_WCKCFGIE Wrong clock configuration interrupt enable. This bit is set and cleared by software. This bit is taken into account only if the audio block is configured as a master (MODE[1] = 0) and NODIV = 0. It generates an interrupt if the WCKCFG flag in the SAI_xSR register is set. Note: This bit is used only in TDM mode and is meaningless in other modes. **/
#define SAI4_SAI_AIM_WCKCFGIE		(1 << 2)
/** SAI4_SAI_AIM_MUTEDETIE Mute detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the MUTEDET bit in the SAI_xSR register is set. This bit has a meaning only if the audio block is configured in receiver mode. **/
#define SAI4_SAI_AIM_MUTEDETIE		(1 << 1)
/** SAI4_SAI_AIM_OVRUDRIE Overrun/underrun interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the OVRUDR bit in the SAI_xSR register is set. **/
#define SAI4_SAI_AIM_OVRUDRIE		(1 << 0)

/**@}*/

/** @defgroup sai4_sai_asr SAIASR Status register
@{*/


#define SAI4_SAI_ASR_FLVL_SHIFT		16
#define SAI4_SAI_ASR_FLVL_MASK		0x07
/** @defgroup sai4_sai_asr_flvl FLVL FIFO level threshold. This bit is read only. The FIFO level threshold flag is managed only by hardware and its setting depends on SAI block configuration (transmitter or receiver mode). If the SAI block is configured as transmitter: If SAI block is configured as receiver:
@{*/
/**@}*/

/** SAI4_SAI_ASR_LFSDET Late frame synchronization detection. This bit is read only. This flag can be set only if the audio block is configured in slave mode. It is not used in AC97 or SPDIF mode. It can generate an interrupt if LFSDETIE bit is set in the SAI_xIM register. This flag is cleared when the software sets bit CLFSDET in SAI_xCLRFR register **/
#define SAI4_SAI_ASR_LFSDET		(1 << 6)
/** SAI4_SAI_ASR_AFSDET Anticipated frame synchronization detection. This bit is read only. This flag can be set only if the audio block is configured in slave mode. It is not used in AC97or SPDIF mode. It can generate an interrupt if AFSDETIE bit is set in SAI_xIM register. This flag is cleared when the software sets CAFSDET bit in SAI_xCLRFR register. **/
#define SAI4_SAI_ASR_AFSDET		(1 << 5)
/** SAI4_SAI_ASR_CNRDY Codec not ready. This bit is read only. This bit is used only when the AC97 audio protocol is selected in the SAI_xCR1 register and configured in receiver mode. It can generate an interrupt if CNRDYIE bit is set in SAI_xIM register. This flag is cleared when the software sets CCNRDY bit in SAI_xCLRFR register. **/
#define SAI4_SAI_ASR_CNRDY		(1 << 4)
/** SAI4_SAI_ASR_FREQ FIFO request. This bit is read only. The request depends on the audio block configuration: If the block is configured in transmission mode, the FIFO request is related to a write request operation in the SAI_xDR. If the block configured in reception, the FIFO request related to a read request operation from the SAI_xDR. This flag can generate an interrupt if FREQIE bit is set in SAI_xIM register. **/
#define SAI4_SAI_ASR_FREQ		(1 << 3)
/** SAI4_SAI_ASR_WCKCFG Wrong clock configuration flag. This bit is read only. This bit is used only when the audio block operates in master mode (MODE[1] = 0) and NODIV = 0. It can generate an interrupt if WCKCFGIE bit is set in SAI_xIM register. This flag is cleared when the software sets CWCKCFG bit in SAI_xCLRFR register. **/
#define SAI4_SAI_ASR_WCKCFG		(1 << 2)
/** SAI4_SAI_ASR_MUTEDET Mute detection. This bit is read only. This flag is set if consecutive 0 values are received in each slot of a given audio frame and for a consecutive number of audio frames (set in the MUTECNT bit in the SAI_xCR2 register). It can generate an interrupt if MUTEDETIE bit is set in SAI_xIM register. This flag is cleared when the software sets bit CMUTEDET in the SAI_xCLRFR register. **/
#define SAI4_SAI_ASR_MUTEDET		(1 << 1)
/** SAI4_SAI_ASR_OVRUDR Overrun / underrun. This bit is read only. The overrun and underrun conditions can occur only when the audio block is configured as a receiver and a transmitter, respectively. It can generate an interrupt if OVRUDRIE bit is set in SAI_xIM register. This flag is cleared when the software sets COVRUDR bit in SAI_xCLRFR register. **/
#define SAI4_SAI_ASR_OVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai4_sai_aclrfr SAIACLRFR Clear flag register
@{*/

/** SAI4_SAI_ACLRFR_CLFSDET Clear late frame synchronization detection flag. This bit is write only. Programming this bit to 1 clears the LFSDET flag in the SAI_xSR register. This bit is not used in AC97or SPDIF mode Reading this bit always returns the value 0. **/
#define SAI4_SAI_ACLRFR_CLFSDET		(1 << 6)
/** SAI4_SAI_ACLRFR_CAFSDET Clear anticipated frame synchronization detection flag. This bit is write only. Programming this bit to 1 clears the AFSDET flag in the SAI_xSR register. It is not used in AC97or SPDIF mode. Reading this bit always returns the value 0. **/
#define SAI4_SAI_ACLRFR_CAFSDET		(1 << 5)
/** SAI4_SAI_ACLRFR_CCNRDY Clear Codec not ready flag. This bit is write only. Programming this bit to 1 clears the CNRDY flag in the SAI_xSR register. This bit is used only when the AC97 audio protocol is selected in the SAI_xCR1 register. Reading this bit always returns the value 0. **/
#define SAI4_SAI_ACLRFR_CCNRDY		(1 << 4)
/** SAI4_SAI_ACLRFR_CWCKCFG Clear wrong clock configuration flag. This bit is write only. Programming this bit to 1 clears the WCKCFG flag in the SAI_xSR register. This bit is used only when the audio block is set as master (MODE[1] = 0) and NODIV = 0 in the SAI_xCR1 register. Reading this bit always returns the value 0. **/
#define SAI4_SAI_ACLRFR_CWCKCFG		(1 << 2)
/** SAI4_SAI_ACLRFR_CMUTEDET Mute detection flag. This bit is write only. Programming this bit to 1 clears the MUTEDET flag in the SAI_xSR register. Reading this bit always returns the value 0. **/
#define SAI4_SAI_ACLRFR_CMUTEDET		(1 << 1)
/** SAI4_SAI_ACLRFR_COVRUDR Clear overrun / underrun. This bit is write only. Programming this bit to 1 clears the OVRUDR flag in the SAI_xSR register. Reading this bit always returns the value 0. **/
#define SAI4_SAI_ACLRFR_COVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai4_sai_adr SAIADR Data register
@{*/


#define SAI4_SAI_ADR_DATA_SHIFT		0
#define SAI4_SAI_ADR_DATA_MASK		0xffffffff
/** @defgroup sai4_sai_adr_data DATA Data A write to this register loads the FIFO provided the FIFO is not full. A read from this register empties the FIFO if the FIFO is not empty.
@{*/
/**@}*/


/**@}*/

/** @defgroup sai4_sai_bcr1 SAIBCR1 Configuration register 1
@{*/

/** SAI4_SAI_BCR1_MCKEN Master clock generation enable **/
#define SAI4_SAI_BCR1_MCKEN		(1 << 27)
/** SAI4_SAI_BCR1_OSR Oversampling ratio for master clock **/
#define SAI4_SAI_BCR1_OSR		(1 << 26)

#define SAI4_SAI_BCR1_MCKDIV_SHIFT		20
#define SAI4_SAI_BCR1_MCKDIV_MASK		0x0f
/** @defgroup sai4_sai_bcr1_mckdiv MCKDIV Master clock divider. These bits are set and cleared by software. These bits are meaningless when the audio block operates in slave mode. They have to be configured when the audio block is disabled. Others: the master clock frequency is calculated accordingly to the following formula:
@{*/
/**@}*/

/** SAI4_SAI_BCR1_NOMCK No divider **/
#define SAI4_SAI_BCR1_NOMCK		(1 << 19)
/** SAI4_SAI_BCR1_DMAEN DMA enable. This bit is set and cleared by software. Note: Since the audio block defaults to operate as a transmitter after reset, the MODE[1:0] bits must be configured before setting DMAEN to avoid a DMA request in receiver mode. **/
#define SAI4_SAI_BCR1_DMAEN		(1 << 17)
/** SAI4_SAI_BCR1_SAIXEN Audio block enable where x is A or B. This bit is set by software. To switch off the audio block, the application software must program this bit to 0 and poll the bit till it reads back 0, meaning that the block is completely disabled. Before setting this bit to 1, check that it is set to 0, otherwise the enable command will not be taken into account. This bit allows to control the state of SAIx audio block. If it is disabled when an audio frame transfer is ongoing, the ongoing transfer completes and the cell is fully disabled at the end of this audio frame transfer. Note: When SAIx block is configured in master mode, the clock must be present on the input of SAIx before setting SAIXEN bit. **/
#define SAI4_SAI_BCR1_SAIXEN		(1 << 16)
/** SAI4_SAI_BCR1_OUTDRIV Output drive. This bit is set and cleared by software. Note: This bit has to be set before enabling the audio block and after the audio block configuration. **/
#define SAI4_SAI_BCR1_OUTDRIV		(1 << 13)
/** SAI4_SAI_BCR1_MONO Mono mode. This bit is set and cleared by software. It is meaningful only when the number of slots is equal to 2. When the mono mode is selected, slot 0 data are duplicated on slot 1 when the audio block operates as a transmitter. In reception mode, the slot1 is discarded and only the data received from slot 0 are stored. Refer to Section: Mono/stereo mode for more details. **/
#define SAI4_SAI_BCR1_MONO		(1 << 12)

#define SAI4_SAI_BCR1_SYNCEN_SHIFT		10
#define SAI4_SAI_BCR1_SYNCEN_MASK		0x03
/** @defgroup sai4_sai_bcr1_syncen SYNCEN Synchronization enable. These bits are set and cleared by software. They must be configured when the audio sub-block is disabled. Note: The audio sub-block should be configured as asynchronous when SPDIF mode is enabled.
@{*/
/**@}*/

/** SAI4_SAI_BCR1_CKSTR Clock strobing edge. This bit is set and cleared by software. It must be configured when the audio block is disabled. This bit has no meaning in SPDIF audio protocol. **/
#define SAI4_SAI_BCR1_CKSTR		(1 << 9)
/** SAI4_SAI_BCR1_LSBFIRST Least significant bit first. This bit is set and cleared by software. It must be configured when the audio block is disabled. This bit has no meaning in AC97 audio protocol since AC97 data are always transferred with the MSB first. This bit has no meaning in SPDIF audio protocol since in SPDIF data are always transferred with LSB first. **/
#define SAI4_SAI_BCR1_LSBFIRST		(1 << 8)

#define SAI4_SAI_BCR1_DS_SHIFT		5
#define SAI4_SAI_BCR1_DS_MASK		0x07
/** @defgroup sai4_sai_bcr1_ds DS Data size. These bits are set and cleared by software. These bits are ignored when the SPDIF protocols are selected (bit PRTCFG[1:0]), because the frame and the data size are fixed in such case. When the companding mode is selected through COMP[1:0] bits, DS[1:0] are ignored since the data size is fixed to 8 bits by the algorithm. These bits must be configured when the audio block is disabled.
@{*/
/**@}*/


#define SAI4_SAI_BCR1_PRTCFG_SHIFT		2
#define SAI4_SAI_BCR1_PRTCFG_MASK		0x03
/** @defgroup sai4_sai_bcr1_prtcfg PRTCFG Protocol configuration. These bits are set and cleared by software. These bits have to be configured when the audio block is disabled.
@{*/
/**@}*/


#define SAI4_SAI_BCR1_MODE_SHIFT		0
#define SAI4_SAI_BCR1_MODE_MASK		0x03
/** @defgroup sai4_sai_bcr1_mode MODE SAIx audio block mode immediately
@{*/
/**@}*/


/**@}*/

/** @defgroup sai4_sai_bcr2 SAIBCR2 Configuration register 2
@{*/


#define SAI4_SAI_BCR2_COMP_SHIFT		14
#define SAI4_SAI_BCR2_COMP_MASK		0x03
/** @defgroup sai4_sai_bcr2_comp COMP Companding mode. These bits are set and cleared by software. The -Law and the A-Law log are a part of the CCITT G.711 recommendation, the type of complement that will be used depends on CPL bit. The data expansion or data compression are determined by the state of bit MODE[0]. The data compression is applied if the audio block is configured as a transmitter. The data expansion is automatically applied when the audio block is configured as a receiver. Refer to Section: Companding mode for more details. Note: Companding mode is applicable only when TDM is selected.
@{*/
/**@}*/

/** SAI4_SAI_BCR2_CPL Complement bit. This bit is set and cleared by software. It defines the type of complement to be used for companding mode Note: This bit has effect only when the companding mode is -Law algorithm or A-Law algorithm. **/
#define SAI4_SAI_BCR2_CPL		(1 << 13)

#define SAI4_SAI_BCR2_MUTECNT_SHIFT		7
#define SAI4_SAI_BCR2_MUTECNT_MASK		0x3f
/** @defgroup sai4_sai_bcr2_mutecnt MUTECNT Mute counter. These bits are set and cleared by software. They are used only in reception mode. The value set in these bits is compared to the number of consecutive mute frames detected in reception. When the number of mute frames is equal to this value, the flag MUTEDET will be set and an interrupt will be generated if bit MUTEDETIE is set. Refer to Section: Mute mode for more details.
@{*/
/**@}*/

/** SAI4_SAI_BCR2_MUTEVAL Mute value. This bit is set and cleared by software.It must be written before enabling the audio block: SAIXEN. This bit is meaningful only when the audio block operates as a transmitter, the number of slots is lower or equal to 2 and the MUTE bit is set. If more slots are declared, the bit value sent during the transmission in mute mode is equal to 0, whatever the value of MUTEVAL. if the number of slot is lower or equal to 2 and MUTEVAL = 1, the MUTE value transmitted for each slot is the one sent during the previous frame. Refer to Section: Mute mode for more details. Note: This bit is meaningless and should not be used for SPDIF audio blocks. **/
#define SAI4_SAI_BCR2_MUTEVAL		(1 << 6)
/** SAI4_SAI_BCR2_MUTE Mute. This bit is set and cleared by software. It is meaningful only when the audio block operates as a transmitter. The MUTE value is linked to value of MUTEVAL if the number of slots is lower or equal to 2, or equal to 0 if it is greater than 2. Refer to Section: Mute mode for more details. Note: This bit is meaningless and should not be used for SPDIF audio blocks. **/
#define SAI4_SAI_BCR2_MUTE		(1 << 5)
/** SAI4_SAI_BCR2_TRIS Tristate management on data line. This bit is set and cleared by software. It is meaningful only if the audio block is configured as a transmitter. This bit is not used when the audio block is configured in SPDIF mode. It should be configured when SAI is disabled. Refer to Section: Output data line management on an inactive slot for more details. **/
#define SAI4_SAI_BCR2_TRIS		(1 << 4)
/** SAI4_SAI_BCR2_FFLUSH FIFO flush. This bit is set by software. It is always read as 0. This bit should be configured when the SAI is disabled. **/
#define SAI4_SAI_BCR2_FFLUSH		(1 << 3)

#define SAI4_SAI_BCR2_FTH_SHIFT		0
#define SAI4_SAI_BCR2_FTH_MASK		0x07
/** @defgroup sai4_sai_bcr2_fth FTH FIFO threshold. This bit is set and cleared by software.
@{*/
/**@}*/


/**@}*/

/** @defgroup sai4_sai_bfrcr SAIBFRCR This register has no meaning in AC97 and SPDIF audio protocol
@{*/

/** SAI4_SAI_BFRCR_FSOFF Frame synchronization offset. This bit is set and cleared by software. It is meaningless and is not used in AC97 or SPDIF audio block configuration. This bit must be configured when the audio block is disabled. **/
#define SAI4_SAI_BFRCR_FSOFF		(1 << 18)
/** SAI4_SAI_BFRCR_FSPOL Frame synchronization polarity. This bit is set and cleared by software. It is used to configure the level of the start of frame on the FS signal. It is meaningless and is not used in AC97 or SPDIF audio block configuration. This bit must be configured when the audio block is disabled. **/
#define SAI4_SAI_BFRCR_FSPOL		(1 << 17)
/** SAI4_SAI_BFRCR_FSDEF Frame synchronization definition. This bit is set and cleared by software. When the bit is set, the number of slots defined in the SAI_xSLOTR register has to be even. It means that half of this number of slots will be dedicated to the left channel and the other slots for the right channel (e.g: this bit has to be set for I2S or MSB/LSB-justified protocols...). This bit is meaningless and is not used in AC97 or SPDIF audio block configuration. It must be configured when the audio block is disabled. **/
#define SAI4_SAI_BFRCR_FSDEF		(1 << 16)

#define SAI4_SAI_BFRCR_FSALL_SHIFT		8
#define SAI4_SAI_BFRCR_FSALL_MASK		0x7f
/** @defgroup sai4_sai_bfrcr_fsall FSALL Frame synchronization active level length. These bits are set and cleared by software. They specify the length in number of bit clock (SCK) + 1 (FSALL[6:0] + 1) of the active level of the FS signal in the audio frame These bits are meaningless and are not used in AC97 or SPDIF audio block configuration. They must be configured when the audio block is disabled.
@{*/
/**@}*/


#define SAI4_SAI_BFRCR_FRL_SHIFT		0
#define SAI4_SAI_BFRCR_FRL_MASK		0xff
/** @defgroup sai4_sai_bfrcr_frl FRL Frame length. These bits are set and cleared by software. They define the audio frame length expressed in number of SCK clock cycles: the number of bits in the frame is equal to FRL[7:0] + 1. The minimum number of bits to transfer in an audio frame must be equal to 8, otherwise the audio block will behaves in an unexpected way. This is the case when the data size is 8 bits and only one slot 0 is defined in NBSLOT[4:0] of SAI_xSLOTR register (NBSLOT[3:0] = 0000). In master mode, if the master clock (available on MCLK_x pin) is used, the frame length should be aligned with a number equal to a power of 2, ranging from 8 to 256. When the master clock is not used (NODIV = 1), it is recommended to program the frame length to an value ranging from 8 to 256. These bits are meaningless and are not used in AC97 or SPDIF audio block configuration.
@{*/
/**@}*/


/**@}*/

/** @defgroup sai4_sai_bslotr SAIBSLOTR This register has no meaning in AC97 and SPDIF audio protocol
@{*/


#define SAI4_SAI_BSLOTR_SLOTEN_SHIFT		16
#define SAI4_SAI_BSLOTR_SLOTEN_MASK		0xffff
/** @defgroup sai4_sai_bslotr_sloten SLOTEN Slot enable. These bits are set and cleared by software. Each SLOTEN bit corresponds to a slot position from 0 to 15 (maximum 16 slots). The slot must be enabled when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
@{*/
/**@}*/


#define SAI4_SAI_BSLOTR_NBSLOT_SHIFT		8
#define SAI4_SAI_BSLOTR_NBSLOT_MASK		0x0f
/** @defgroup sai4_sai_bslotr_nbslot NBSLOT Number of slots in an audio frame. These bits are set and cleared by software. The value set in this bitfield represents the number of slots + 1 in the audio frame (including the number of inactive slots). The maximum number of slots is 16. The number of slots should be even if FSDEF bit in the SAI_xFRCR register is set. The number of slots must be configured when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
@{*/
/**@}*/


#define SAI4_SAI_BSLOTR_SLOTSZ_SHIFT		6
#define SAI4_SAI_BSLOTR_SLOTSZ_MASK		0x03
/** @defgroup sai4_sai_bslotr_slotsz SLOTSZ Slot size This bits is set and cleared by software. The slot size must be higher or equal to the data size. If this condition is not respected, the behavior of the SAI will be undetermined. Refer to Section: Output data line management on an inactive slot for information on how to drive SD line. These bits must be set when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
@{*/
/**@}*/


#define SAI4_SAI_BSLOTR_FBOFF_SHIFT		0
#define SAI4_SAI_BSLOTR_FBOFF_MASK		0x1f
/** @defgroup sai4_sai_bslotr_fboff FBOFF First bit offset These bits are set and cleared by software. The value set in this bitfield defines the position of the first data transfer bit in the slot. It represents an offset value. In transmission mode, the bits outside the data field are forced to 0. In reception mode, the extra received bits are discarded. These bits must be set when the audio block is disabled. They are ignored in AC97 or SPDIF mode.
@{*/
/**@}*/


/**@}*/

/** @defgroup sai4_sai_bim SAIBIM Interrupt mask register 2
@{*/

/** SAI4_SAI_BIM_LFSDETIE Late frame synchronization detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt will be generated if the LFSDET bit is set in the SAI_xSR register. This bit is meaningless in AC97, SPDIF mode or when the audio block operates as a master. **/
#define SAI4_SAI_BIM_LFSDETIE		(1 << 6)
/** SAI4_SAI_BIM_AFSDETIE Anticipated frame synchronization detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt will be generated if the AFSDET bit in the SAI_xSR register is set. This bit is meaningless in AC97, SPDIF mode or when the audio block operates as a master. **/
#define SAI4_SAI_BIM_AFSDETIE		(1 << 5)
/** SAI4_SAI_BIM_CNRDYIE Codec not ready interrupt enable (AC97). This bit is set and cleared by software. When the interrupt is enabled, the audio block detects in the slot 0 (tag0) of the AC97 frame if the Codec connected to this line is ready or not. If it is not ready, the CNRDY flag in the SAI_xSR register is set and an interruption i generated. This bit has a meaning only if the AC97 mode is selected through PRTCFG[1:0] bits and the audio block is operates as a receiver. **/
#define SAI4_SAI_BIM_CNRDYIE		(1 << 4)
/** SAI4_SAI_BIM_FREQIE FIFO request interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the FREQ bit in the SAI_xSR register is set. Since the audio block defaults to operate as a transmitter after reset, the MODE bit must be configured before setting FREQIE to avoid a parasitic interruption in receiver mode, **/
#define SAI4_SAI_BIM_FREQIE		(1 << 3)
/** SAI4_SAI_BIM_WCKCFGIE Wrong clock configuration interrupt enable. This bit is set and cleared by software. This bit is taken into account only if the audio block is configured as a master (MODE[1] = 0) and NODIV = 0. It generates an interrupt if the WCKCFG flag in the SAI_xSR register is set. Note: This bit is used only in TDM mode and is meaningless in other modes. **/
#define SAI4_SAI_BIM_WCKCFGIE		(1 << 2)
/** SAI4_SAI_BIM_MUTEDETIE Mute detection interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the MUTEDET bit in the SAI_xSR register is set. This bit has a meaning only if the audio block is configured in receiver mode. **/
#define SAI4_SAI_BIM_MUTEDETIE		(1 << 1)
/** SAI4_SAI_BIM_OVRUDRIE Overrun/underrun interrupt enable. This bit is set and cleared by software. When this bit is set, an interrupt is generated if the OVRUDR bit in the SAI_xSR register is set. **/
#define SAI4_SAI_BIM_OVRUDRIE		(1 << 0)

/**@}*/

/** @defgroup sai4_sai_bsr SAIBSR Status register
@{*/


#define SAI4_SAI_BSR_FLVL_SHIFT		16
#define SAI4_SAI_BSR_FLVL_MASK		0x07
/** @defgroup sai4_sai_bsr_flvl FLVL FIFO level threshold. This bit is read only. The FIFO level threshold flag is managed only by hardware and its setting depends on SAI block configuration (transmitter or receiver mode). If the SAI block is configured as transmitter: If SAI block is configured as receiver:
@{*/
/**@}*/

/** SAI4_SAI_BSR_LFSDET Late frame synchronization detection. This bit is read only. This flag can be set only if the audio block is configured in slave mode. It is not used in AC97 or SPDIF mode. It can generate an interrupt if LFSDETIE bit is set in the SAI_xIM register. This flag is cleared when the software sets bit CLFSDET in SAI_xCLRFR register **/
#define SAI4_SAI_BSR_LFSDET		(1 << 6)
/** SAI4_SAI_BSR_AFSDET Anticipated frame synchronization detection. This bit is read only. This flag can be set only if the audio block is configured in slave mode. It is not used in AC97or SPDIF mode. It can generate an interrupt if AFSDETIE bit is set in SAI_xIM register. This flag is cleared when the software sets CAFSDET bit in SAI_xCLRFR register. **/
#define SAI4_SAI_BSR_AFSDET		(1 << 5)
/** SAI4_SAI_BSR_CNRDY Codec not ready. This bit is read only. This bit is used only when the AC97 audio protocol is selected in the SAI_xCR1 register and configured in receiver mode. It can generate an interrupt if CNRDYIE bit is set in SAI_xIM register. This flag is cleared when the software sets CCNRDY bit in SAI_xCLRFR register. **/
#define SAI4_SAI_BSR_CNRDY		(1 << 4)
/** SAI4_SAI_BSR_FREQ FIFO request. This bit is read only. The request depends on the audio block configuration: If the block is configured in transmission mode, the FIFO request is related to a write request operation in the SAI_xDR. If the block configured in reception, the FIFO request related to a read request operation from the SAI_xDR. This flag can generate an interrupt if FREQIE bit is set in SAI_xIM register. **/
#define SAI4_SAI_BSR_FREQ		(1 << 3)
/** SAI4_SAI_BSR_WCKCFG Wrong clock configuration flag. This bit is read only. This bit is used only when the audio block operates in master mode (MODE[1] = 0) and NODIV = 0. It can generate an interrupt if WCKCFGIE bit is set in SAI_xIM register. This flag is cleared when the software sets CWCKCFG bit in SAI_xCLRFR register. **/
#define SAI4_SAI_BSR_WCKCFG		(1 << 2)
/** SAI4_SAI_BSR_MUTEDET Mute detection. This bit is read only. This flag is set if consecutive 0 values are received in each slot of a given audio frame and for a consecutive number of audio frames (set in the MUTECNT bit in the SAI_xCR2 register). It can generate an interrupt if MUTEDETIE bit is set in SAI_xIM register. This flag is cleared when the software sets bit CMUTEDET in the SAI_xCLRFR register. **/
#define SAI4_SAI_BSR_MUTEDET		(1 << 1)
/** SAI4_SAI_BSR_OVRUDR Overrun / underrun. This bit is read only. The overrun and underrun conditions can occur only when the audio block is configured as a receiver and a transmitter, respectively. It can generate an interrupt if OVRUDRIE bit is set in SAI_xIM register. This flag is cleared when the software sets COVRUDR bit in SAI_xCLRFR register. **/
#define SAI4_SAI_BSR_OVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai4_sai_bclrfr SAIBCLRFR Clear flag register
@{*/

/** SAI4_SAI_BCLRFR_CLFSDET Clear late frame synchronization detection flag. This bit is write only. Programming this bit to 1 clears the LFSDET flag in the SAI_xSR register. This bit is not used in AC97or SPDIF mode Reading this bit always returns the value 0. **/
#define SAI4_SAI_BCLRFR_CLFSDET		(1 << 6)
/** SAI4_SAI_BCLRFR_CAFSDET Clear anticipated frame synchronization detection flag. This bit is write only. Programming this bit to 1 clears the AFSDET flag in the SAI_xSR register. It is not used in AC97or SPDIF mode. Reading this bit always returns the value 0. **/
#define SAI4_SAI_BCLRFR_CAFSDET		(1 << 5)
/** SAI4_SAI_BCLRFR_CCNRDY Clear Codec not ready flag. This bit is write only. Programming this bit to 1 clears the CNRDY flag in the SAI_xSR register. This bit is used only when the AC97 audio protocol is selected in the SAI_xCR1 register. Reading this bit always returns the value 0. **/
#define SAI4_SAI_BCLRFR_CCNRDY		(1 << 4)
/** SAI4_SAI_BCLRFR_CWCKCFG Clear wrong clock configuration flag. This bit is write only. Programming this bit to 1 clears the WCKCFG flag in the SAI_xSR register. This bit is used only when the audio block is set as master (MODE[1] = 0) and NODIV = 0 in the SAI_xCR1 register. Reading this bit always returns the value 0. **/
#define SAI4_SAI_BCLRFR_CWCKCFG		(1 << 2)
/** SAI4_SAI_BCLRFR_CMUTEDET Mute detection flag. This bit is write only. Programming this bit to 1 clears the MUTEDET flag in the SAI_xSR register. Reading this bit always returns the value 0. **/
#define SAI4_SAI_BCLRFR_CMUTEDET		(1 << 1)
/** SAI4_SAI_BCLRFR_COVRUDR Clear overrun / underrun. This bit is write only. Programming this bit to 1 clears the OVRUDR flag in the SAI_xSR register. Reading this bit always returns the value 0. **/
#define SAI4_SAI_BCLRFR_COVRUDR		(1 << 0)

/**@}*/

/** @defgroup sai4_sai_bdr SAIBDR Data register
@{*/


#define SAI4_SAI_BDR_DATA_SHIFT		0
#define SAI4_SAI_BDR_DATA_MASK		0xffffffff
/** @defgroup sai4_sai_bdr_data DATA Data A write to this register loads the FIFO provided the FIFO is not full. A read from this register empties the FIFO if the FIFO is not empty.
@{*/
/**@}*/


/**@}*/

/** @defgroup sai4_sai_pdmcr SAIPDMCR PDM control register
@{*/

/** SAI4_SAI_PDMCR_CKEN4 Clock enable of bitstream clock number 4 **/
#define SAI4_SAI_PDMCR_CKEN4		(1 << 11)
/** SAI4_SAI_PDMCR_CKEN3 Clock enable of bitstream clock number 3 **/
#define SAI4_SAI_PDMCR_CKEN3		(1 << 10)
/** SAI4_SAI_PDMCR_CKEN2 Clock enable of bitstream clock number 2 **/
#define SAI4_SAI_PDMCR_CKEN2		(1 << 9)
/** SAI4_SAI_PDMCR_CKEN1 Clock enable of bitstream clock number 1 **/
#define SAI4_SAI_PDMCR_CKEN1		(1 << 8)

#define SAI4_SAI_PDMCR_MICNBR_SHIFT		4
#define SAI4_SAI_PDMCR_MICNBR_MASK		0x03
/** @defgroup sai4_sai_pdmcr_micnbr MICNBR Number of microphones
@{*/
/**@}*/

/** SAI4_SAI_PDMCR_PDMEN PDM enable **/
#define SAI4_SAI_PDMCR_PDMEN		(1 << 0)

/**@}*/

/** @defgroup sai4_sai_pdmdly SAIPDMDLY PDM delay register
@{*/


#define SAI4_SAI_PDMDLY_DLYM4R_SHIFT		28
#define SAI4_SAI_PDMDLY_DLYM4R_MASK		0x07
/** @defgroup sai4_sai_pdmdly_dlym4r DLYM4R Delay line for second microphone of pair 4
@{*/
/**@}*/


#define SAI4_SAI_PDMDLY_DLYM4L_SHIFT		24
#define SAI4_SAI_PDMDLY_DLYM4L_MASK		0x07
/** @defgroup sai4_sai_pdmdly_dlym4l DLYM4L Delay line for first microphone of pair 4
@{*/
/**@}*/


#define SAI4_SAI_PDMDLY_DLYM3R_SHIFT		20
#define SAI4_SAI_PDMDLY_DLYM3R_MASK		0x07
/** @defgroup sai4_sai_pdmdly_dlym3r DLYM3R Delay line for second microphone of pair 3
@{*/
/**@}*/


#define SAI4_SAI_PDMDLY_DLYM3L_SHIFT		16
#define SAI4_SAI_PDMDLY_DLYM3L_MASK		0x07
/** @defgroup sai4_sai_pdmdly_dlym3l DLYM3L Delay line for first microphone of pair 3
@{*/
/**@}*/


#define SAI4_SAI_PDMDLY_DLYM2R_SHIFT		12
#define SAI4_SAI_PDMDLY_DLYM2R_MASK		0x07
/** @defgroup sai4_sai_pdmdly_dlym2r DLYM2R Delay line for second microphone of pair 2
@{*/
/**@}*/


#define SAI4_SAI_PDMDLY_DLYM2L_SHIFT		8
#define SAI4_SAI_PDMDLY_DLYM2L_MASK		0x07
/** @defgroup sai4_sai_pdmdly_dlym2l DLYM2L Delay line for first microphone of pair 2
@{*/
/**@}*/


#define SAI4_SAI_PDMDLY_DLYM1R_SHIFT		4
#define SAI4_SAI_PDMDLY_DLYM1R_MASK		0x07
/** @defgroup sai4_sai_pdmdly_dlym1r DLYM1R Delay line adjust for second microphone of pair 1
@{*/
/**@}*/


#define SAI4_SAI_PDMDLY_DLYM1L_SHIFT		0
#define SAI4_SAI_PDMDLY_DLYM1L_MASK		0x07
/** @defgroup sai4_sai_pdmdly_dlym1l DLYM1L Delay line adjust for first microphone of pair 1
@{*/
/**@}*/


/**@}*/

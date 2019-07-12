#pragma once 

/* --- ISI: Image Sensor Interface ---------------------------------- */

/** @defgroup isi_registers Image Sensor Interface Register
@{*/

/** ISI_ISI_CFG1 ISI Configuration 1 Register **/
#define ISI_ISI_CFG1			MMIO32(ISI_BASE + 0x00)
/** ISI_ISI_CFG2 ISI Configuration 2 Register **/
#define ISI_ISI_CFG2			MMIO32(ISI_BASE + 0x04)
/** ISI_ISI_PSIZE ISI Preview Size Register **/
#define ISI_ISI_PSIZE			MMIO32(ISI_BASE + 0x08)
/** ISI_ISI_PDECF ISI Preview Decimation Factor Register **/
#define ISI_ISI_PDECF			MMIO32(ISI_BASE + 0x0c)
/** ISI_ISI_Y2R_SET0 ISI Color Space Conversion YCrCb To RGB Set 0 Register **/
#define ISI_ISI_Y2R_SET0			MMIO32(ISI_BASE + 0x10)
/** ISI_ISI_Y2R_SET1 ISI Color Space Conversion YCrCb To RGB Set 1 Register **/
#define ISI_ISI_Y2R_SET1			MMIO32(ISI_BASE + 0x14)
/** ISI_ISI_R2Y_SET0 ISI Color Space Conversion RGB To YCrCb Set 0 Register **/
#define ISI_ISI_R2Y_SET0			MMIO32(ISI_BASE + 0x18)
/** ISI_ISI_R2Y_SET1 ISI Color Space Conversion RGB To YCrCb Set 1 Register **/
#define ISI_ISI_R2Y_SET1			MMIO32(ISI_BASE + 0x1c)
/** ISI_ISI_R2Y_SET2 ISI Color Space Conversion RGB To YCrCb Set 2 Register **/
#define ISI_ISI_R2Y_SET2			MMIO32(ISI_BASE + 0x20)
/** ISI_ISI_CR ISI Control Register **/
#define ISI_ISI_CR			MMIO32(ISI_BASE + 0x24)
/** ISI_ISI_SR ISI Status Register **/
#define ISI_ISI_SR			MMIO32(ISI_BASE + 0x28)
/** ISI_ISI_IER ISI Interrupt Enable Register **/
#define ISI_ISI_IER			MMIO32(ISI_BASE + 0x2c)
/** ISI_ISI_IDR ISI Interrupt Disable Register **/
#define ISI_ISI_IDR			MMIO32(ISI_BASE + 0x30)
/** ISI_ISI_IMR ISI Interrupt Mask Register **/
#define ISI_ISI_IMR			MMIO32(ISI_BASE + 0x34)
/** ISI_ISI_DMA_CHER DMA Channel Enable Register **/
#define ISI_ISI_DMA_CHER			MMIO32(ISI_BASE + 0x38)
/** ISI_ISI_DMA_CHDR DMA Channel Disable Register **/
#define ISI_ISI_DMA_CHDR			MMIO32(ISI_BASE + 0x3c)
/** ISI_ISI_DMA_CHSR DMA Channel Status Register **/
#define ISI_ISI_DMA_CHSR			MMIO32(ISI_BASE + 0x40)
/** ISI_ISI_DMA_P_ADDR DMA Preview Base Address Register **/
#define ISI_ISI_DMA_P_ADDR			MMIO32(ISI_BASE + 0x44)
/** ISI_ISI_DMA_P_CTRL DMA Preview Control Register **/
#define ISI_ISI_DMA_P_CTRL			MMIO32(ISI_BASE + 0x48)
/** ISI_ISI_DMA_P_DSCR DMA Preview Descriptor Address Register **/
#define ISI_ISI_DMA_P_DSCR			MMIO32(ISI_BASE + 0x4c)
/** ISI_ISI_DMA_C_ADDR DMA Codec Base Address Register **/
#define ISI_ISI_DMA_C_ADDR			MMIO32(ISI_BASE + 0x50)
/** ISI_ISI_DMA_C_CTRL DMA Codec Control Register **/
#define ISI_ISI_DMA_C_CTRL			MMIO32(ISI_BASE + 0x54)
/** ISI_ISI_DMA_C_DSCR DMA Codec Descriptor Address Register **/
#define ISI_ISI_DMA_C_DSCR			MMIO32(ISI_BASE + 0x58)
/** ISI_ISI_WPMR Write Protection Mode Register **/
#define ISI_ISI_WPMR			MMIO32(ISI_BASE + 0xe4)
/** ISI_ISI_WPSR Write Protection Status Register **/
#define ISI_ISI_WPSR			MMIO32(ISI_BASE + 0xe8)

/**@}*/


/** @defgroup isi_isi_cfg1 ISICFG1 ISI Configuration 1 Register
@{*/


#define ISI_ISI_CFG1_SFD_SHIFT		24
#define ISI_ISI_CFG1_SFD_MASK		0xff
/** @defgroup isi_isi_cfg1_sfd SFD Start of Frame Delay
@{*/
/**@}*/


#define ISI_ISI_CFG1_SLD_SHIFT		16
#define ISI_ISI_CFG1_SLD_MASK		0xff
/** @defgroup isi_isi_cfg1_sld SLD Start of Line Delay
@{*/
/**@}*/


#define ISI_ISI_CFG1_THMASK_SHIFT		13
#define ISI_ISI_CFG1_THMASK_MASK		0x03
/** @defgroup isi_isi_cfg1_thmask THMASK Threshold Mask
@{*/
/**@}*/

/** ISI_ISI_CFG1_FULL Full Mode is Allowed **/
#define ISI_ISI_CFG1_FULL		(1 << 12)
/** ISI_ISI_CFG1_DISCR Disable Codec Request **/
#define ISI_ISI_CFG1_DISCR		(1 << 11)

#define ISI_ISI_CFG1_FRATE_SHIFT		8
#define ISI_ISI_CFG1_FRATE_MASK		0x07
/** @defgroup isi_isi_cfg1_frate FRATE Frame Rate [0..7]
@{*/
/**@}*/

/** ISI_ISI_CFG1_CRC_SYNC Embedded Synchronization Correction **/
#define ISI_ISI_CFG1_CRC_SYNC		(1 << 7)
/** ISI_ISI_CFG1_EMB_SYNC Embedded Synchronization **/
#define ISI_ISI_CFG1_EMB_SYNC		(1 << 6)
/** ISI_ISI_CFG1_GRAYLE Grayscale Little Endian **/
#define ISI_ISI_CFG1_GRAYLE		(1 << 5)
/** ISI_ISI_CFG1_PIXCLK_POL Pixel Clock Polarity **/
#define ISI_ISI_CFG1_PIXCLK_POL		(1 << 4)
/** ISI_ISI_CFG1_VSYNC_POL Vertical Synchronization Polarity **/
#define ISI_ISI_CFG1_VSYNC_POL		(1 << 3)
/** ISI_ISI_CFG1_HSYNC_POL Horizontal Synchronization Polarity **/
#define ISI_ISI_CFG1_HSYNC_POL		(1 << 2)

/**@}*/

/** @defgroup isi_isi_cfg2 ISICFG2 ISI Configuration 2 Register
@{*/


#define ISI_ISI_CFG2_RGB_CFG_SHIFT		30
#define ISI_ISI_CFG2_RGB_CFG_MASK		0x03
/** @defgroup isi_isi_cfg2_rgb_cfg RGBCFG RGB Pixel Mapping Configuration
@{*/
/**@}*/


#define ISI_ISI_CFG2_YCC_SWAP_SHIFT		28
#define ISI_ISI_CFG2_YCC_SWAP_MASK		0x03
/** @defgroup isi_isi_cfg2_ycc_swap YCCSWAP YCrCb Format Swap Mode
@{*/
/**@}*/


#define ISI_ISI_CFG2_IM_HSIZE_SHIFT		16
#define ISI_ISI_CFG2_IM_HSIZE_MASK		0x7ff
/** @defgroup isi_isi_cfg2_im_hsize IMHSIZE Horizontal Size of the Image Sensor [0..2047]
@{*/
/**@}*/

/** ISI_ISI_CFG2_COL_SPACE Color Space for the Image Data **/
#define ISI_ISI_CFG2_COL_SPACE		(1 << 15)
/** ISI_ISI_CFG2_RGB_SWAP RGB Format Swap Mode **/
#define ISI_ISI_CFG2_RGB_SWAP		(1 << 14)
/** ISI_ISI_CFG2_GRAYSCALE Grayscale Mode Format Enable **/
#define ISI_ISI_CFG2_GRAYSCALE		(1 << 13)
/** ISI_ISI_CFG2_RGB_MODE RGB Input Mode **/
#define ISI_ISI_CFG2_RGB_MODE		(1 << 12)
/** ISI_ISI_CFG2_GS_MODE Grayscale Pixel Format Mode **/
#define ISI_ISI_CFG2_GS_MODE		(1 << 11)

#define ISI_ISI_CFG2_IM_VSIZE_SHIFT		0
#define ISI_ISI_CFG2_IM_VSIZE_MASK		0x7ff
/** @defgroup isi_isi_cfg2_im_vsize IMVSIZE Vertical Size of the Image Sensor [0..2047]
@{*/
/**@}*/


/**@}*/

/** @defgroup isi_isi_psize ISIPSIZE ISI Preview Size Register
@{*/


#define ISI_ISI_PSIZE_PREV_HSIZE_SHIFT		16
#define ISI_ISI_PSIZE_PREV_HSIZE_MASK		0x3ff
/** @defgroup isi_isi_psize_prev_hsize PREVHSIZE Horizontal Size for the Preview Path
@{*/
/**@}*/


#define ISI_ISI_PSIZE_PREV_VSIZE_SHIFT		0
#define ISI_ISI_PSIZE_PREV_VSIZE_MASK		0x3ff
/** @defgroup isi_isi_psize_prev_vsize PREVVSIZE Vertical Size for the Preview Path
@{*/
/**@}*/


/**@}*/

/** @defgroup isi_isi_pdecf ISIPDECF ISI Preview Decimation Factor Register
@{*/


#define ISI_ISI_PDECF_DEC_FACTOR_SHIFT		0
#define ISI_ISI_PDECF_DEC_FACTOR_MASK		0xff
/** @defgroup isi_isi_pdecf_dec_factor DECFACTOR Decimation Factor
@{*/
/**@}*/


/**@}*/

/** @defgroup isi_isi_y2r_set0 ISIY2RSET0 ISI Color Space Conversion YCrCb To RGB Set 0 Register
@{*/


#define ISI_ISI_Y2R_SET0_C3_SHIFT		24
#define ISI_ISI_Y2R_SET0_C3_MASK		0xff
/** @defgroup isi_isi_y2r_set0_c3 C3 Color Space Conversion Matrix Coefficient C3
@{*/
/**@}*/


#define ISI_ISI_Y2R_SET0_C2_SHIFT		16
#define ISI_ISI_Y2R_SET0_C2_MASK		0xff
/** @defgroup isi_isi_y2r_set0_c2 C2 Color Space Conversion Matrix Coefficient C2
@{*/
/**@}*/


#define ISI_ISI_Y2R_SET0_C1_SHIFT		8
#define ISI_ISI_Y2R_SET0_C1_MASK		0xff
/** @defgroup isi_isi_y2r_set0_c1 C1 Color Space Conversion Matrix Coefficient C1
@{*/
/**@}*/


#define ISI_ISI_Y2R_SET0_C0_SHIFT		0
#define ISI_ISI_Y2R_SET0_C0_MASK		0xff
/** @defgroup isi_isi_y2r_set0_c0 C0 Color Space Conversion Matrix Coefficient C0
@{*/
/**@}*/


/**@}*/

/** @defgroup isi_isi_y2r_set1 ISIY2RSET1 ISI Color Space Conversion YCrCb To RGB Set 1 Register
@{*/

/** ISI_ISI_Y2R_SET1_Cboff Color Space Conversion Blue Chrominance Default Offset **/
#define ISI_ISI_Y2R_SET1_Cboff		(1 << 14)
/** ISI_ISI_Y2R_SET1_Croff Color Space Conversion Red Chrominance Default Offset **/
#define ISI_ISI_Y2R_SET1_Croff		(1 << 13)
/** ISI_ISI_Y2R_SET1_Yoff Color Space Conversion Luminance Default Offset **/
#define ISI_ISI_Y2R_SET1_Yoff		(1 << 12)

#define ISI_ISI_Y2R_SET1_C4_SHIFT		0
#define ISI_ISI_Y2R_SET1_C4_MASK		0x1ff
/** @defgroup isi_isi_y2r_set1_c4 C4 Color Space Conversion Matrix Coefficient C4
@{*/
/**@}*/


/**@}*/

/** @defgroup isi_isi_r2y_set0 ISIR2YSET0 ISI Color Space Conversion RGB To YCrCb Set 0 Register
@{*/

/** ISI_ISI_R2Y_SET0_Roff Color Space Conversion Red Component Offset **/
#define ISI_ISI_R2Y_SET0_Roff		(1 << 24)

#define ISI_ISI_R2Y_SET0_C2_SHIFT		16
#define ISI_ISI_R2Y_SET0_C2_MASK		0x7f
/** @defgroup isi_isi_r2y_set0_c2 C2 Color Space Conversion Matrix Coefficient C2
@{*/
/**@}*/


#define ISI_ISI_R2Y_SET0_C1_SHIFT		8
#define ISI_ISI_R2Y_SET0_C1_MASK		0x7f
/** @defgroup isi_isi_r2y_set0_c1 C1 Color Space Conversion Matrix Coefficient C1
@{*/
/**@}*/


#define ISI_ISI_R2Y_SET0_C0_SHIFT		0
#define ISI_ISI_R2Y_SET0_C0_MASK		0x7f
/** @defgroup isi_isi_r2y_set0_c0 C0 Color Space Conversion Matrix Coefficient C0
@{*/
/**@}*/


/**@}*/

/** @defgroup isi_isi_r2y_set1 ISIR2YSET1 ISI Color Space Conversion RGB To YCrCb Set 1 Register
@{*/

/** ISI_ISI_R2Y_SET1_Goff Color Space Conversion Green Component Offset **/
#define ISI_ISI_R2Y_SET1_Goff		(1 << 24)

#define ISI_ISI_R2Y_SET1_C5_SHIFT		16
#define ISI_ISI_R2Y_SET1_C5_MASK		0x7f
/** @defgroup isi_isi_r2y_set1_c5 C5 Color Space Conversion Matrix Coefficient C5
@{*/
/**@}*/


#define ISI_ISI_R2Y_SET1_C4_SHIFT		8
#define ISI_ISI_R2Y_SET1_C4_MASK		0x7f
/** @defgroup isi_isi_r2y_set1_c4 C4 Color Space Conversion Matrix Coefficient C4
@{*/
/**@}*/


#define ISI_ISI_R2Y_SET1_C3_SHIFT		0
#define ISI_ISI_R2Y_SET1_C3_MASK		0x7f
/** @defgroup isi_isi_r2y_set1_c3 C3 Color Space Conversion Matrix Coefficient C3
@{*/
/**@}*/


/**@}*/

/** @defgroup isi_isi_r2y_set2 ISIR2YSET2 ISI Color Space Conversion RGB To YCrCb Set 2 Register
@{*/

/** ISI_ISI_R2Y_SET2_Boff Color Space Conversion Blue Component Offset **/
#define ISI_ISI_R2Y_SET2_Boff		(1 << 24)

#define ISI_ISI_R2Y_SET2_C8_SHIFT		16
#define ISI_ISI_R2Y_SET2_C8_MASK		0x7f
/** @defgroup isi_isi_r2y_set2_c8 C8 Color Space Conversion Matrix Coefficient C8
@{*/
/**@}*/


#define ISI_ISI_R2Y_SET2_C7_SHIFT		8
#define ISI_ISI_R2Y_SET2_C7_MASK		0x7f
/** @defgroup isi_isi_r2y_set2_c7 C7 Color Space Conversion Matrix Coefficient C7
@{*/
/**@}*/


#define ISI_ISI_R2Y_SET2_C6_SHIFT		0
#define ISI_ISI_R2Y_SET2_C6_MASK		0x7f
/** @defgroup isi_isi_r2y_set2_c6 C6 Color Space Conversion Matrix Coefficient C6
@{*/
/**@}*/


/**@}*/

/** @defgroup isi_isi_cr ISICR ISI Control Register
@{*/

/** ISI_ISI_CR_ISI_CDC ISI Codec Request **/
#define ISI_ISI_CR_ISI_CDC		(1 << 8)
/** ISI_ISI_CR_ISI_SRST ISI Software Reset Request **/
#define ISI_ISI_CR_ISI_SRST		(1 << 2)
/** ISI_ISI_CR_ISI_DIS ISI Module Disable Request **/
#define ISI_ISI_CR_ISI_DIS		(1 << 1)
/** ISI_ISI_CR_ISI_EN ISI Module Enable Request **/
#define ISI_ISI_CR_ISI_EN		(1 << 0)

/**@}*/

/** @defgroup isi_isi_sr ISISR ISI Status Register
@{*/

/** ISI_ISI_SR_FR_OVR Frame Rate Overrun (cleared on read) **/
#define ISI_ISI_SR_FR_OVR		(1 << 27)
/** ISI_ISI_SR_CRC_ERR CRC Synchronization Error (cleared on read) **/
#define ISI_ISI_SR_CRC_ERR		(1 << 26)
/** ISI_ISI_SR_C_OVR Codec Datapath Overflow (cleared on read) **/
#define ISI_ISI_SR_C_OVR		(1 << 25)
/** ISI_ISI_SR_P_OVR Preview Datapath Overflow (cleared on read) **/
#define ISI_ISI_SR_P_OVR		(1 << 24)
/** ISI_ISI_SR_SIP Synchronization in Progress **/
#define ISI_ISI_SR_SIP		(1 << 19)
/** ISI_ISI_SR_CXFR_DONE Codec DMA Transfer has Terminated (cleared on read) **/
#define ISI_ISI_SR_CXFR_DONE		(1 << 17)
/** ISI_ISI_SR_PXFR_DONE Preview DMA Transfer has Terminated (cleared on read) **/
#define ISI_ISI_SR_PXFR_DONE		(1 << 16)
/** ISI_ISI_SR_VSYNC Vertical Synchronization (cleared on read) **/
#define ISI_ISI_SR_VSYNC		(1 << 10)
/** ISI_ISI_SR_CDC_PND Pending Codec Request **/
#define ISI_ISI_SR_CDC_PND		(1 << 8)
/** ISI_ISI_SR_SRST Module Software Reset Request has Terminated (cleared on read) **/
#define ISI_ISI_SR_SRST		(1 << 2)
/** ISI_ISI_SR_DIS_DONE Module Disable Request has Terminated (cleared on read) **/
#define ISI_ISI_SR_DIS_DONE		(1 << 1)
/** ISI_ISI_SR_ENABLE Module Enable **/
#define ISI_ISI_SR_ENABLE		(1 << 0)

/**@}*/

/** @defgroup isi_isi_ier ISIIER ISI Interrupt Enable Register
@{*/

/** ISI_ISI_IER_FR_OVR Frame Rate Overflow Interrupt Enable **/
#define ISI_ISI_IER_FR_OVR		(1 << 27)
/** ISI_ISI_IER_CRC_ERR Embedded Synchronization CRC Error Interrupt Enable **/
#define ISI_ISI_IER_CRC_ERR		(1 << 26)
/** ISI_ISI_IER_C_OVR Codec Datapath Overflow Interrupt Enable **/
#define ISI_ISI_IER_C_OVR		(1 << 25)
/** ISI_ISI_IER_P_OVR Preview Datapath Overflow Interrupt Enable **/
#define ISI_ISI_IER_P_OVR		(1 << 24)
/** ISI_ISI_IER_CXFR_DONE Codec DMA Transfer Done Interrupt Enable **/
#define ISI_ISI_IER_CXFR_DONE		(1 << 17)
/** ISI_ISI_IER_PXFR_DONE Preview DMA Transfer Done Interrupt Enable **/
#define ISI_ISI_IER_PXFR_DONE		(1 << 16)
/** ISI_ISI_IER_VSYNC Vertical Synchronization Interrupt Enable **/
#define ISI_ISI_IER_VSYNC		(1 << 10)
/** ISI_ISI_IER_SRST Software Reset Interrupt Enable **/
#define ISI_ISI_IER_SRST		(1 << 2)
/** ISI_ISI_IER_DIS_DONE Disable Done Interrupt Enable **/
#define ISI_ISI_IER_DIS_DONE		(1 << 1)

/**@}*/

/** @defgroup isi_isi_idr ISIIDR ISI Interrupt Disable Register
@{*/

/** ISI_ISI_IDR_FR_OVR Frame Rate Overflow Interrupt Disable **/
#define ISI_ISI_IDR_FR_OVR		(1 << 27)
/** ISI_ISI_IDR_CRC_ERR Embedded Synchronization CRC Error Interrupt Disable **/
#define ISI_ISI_IDR_CRC_ERR		(1 << 26)
/** ISI_ISI_IDR_C_OVR Codec Datapath Overflow Interrupt Disable **/
#define ISI_ISI_IDR_C_OVR		(1 << 25)
/** ISI_ISI_IDR_P_OVR Preview Datapath Overflow Interrupt Disable **/
#define ISI_ISI_IDR_P_OVR		(1 << 24)
/** ISI_ISI_IDR_CXFR_DONE Codec DMA Transfer Done Interrupt Disable **/
#define ISI_ISI_IDR_CXFR_DONE		(1 << 17)
/** ISI_ISI_IDR_PXFR_DONE Preview DMA Transfer Done Interrupt Disable **/
#define ISI_ISI_IDR_PXFR_DONE		(1 << 16)
/** ISI_ISI_IDR_VSYNC Vertical Synchronization Interrupt Disable **/
#define ISI_ISI_IDR_VSYNC		(1 << 10)
/** ISI_ISI_IDR_SRST Software Reset Interrupt Disable **/
#define ISI_ISI_IDR_SRST		(1 << 2)
/** ISI_ISI_IDR_DIS_DONE Disable Done Interrupt Disable **/
#define ISI_ISI_IDR_DIS_DONE		(1 << 1)

/**@}*/

/** @defgroup isi_isi_imr ISIIMR ISI Interrupt Mask Register
@{*/

/** ISI_ISI_IMR_FR_OVR Frame Rate Overrun **/
#define ISI_ISI_IMR_FR_OVR		(1 << 27)
/** ISI_ISI_IMR_CRC_ERR CRC Synchronization Error **/
#define ISI_ISI_IMR_CRC_ERR		(1 << 26)
/** ISI_ISI_IMR_C_OVR Codec FIFO Overflow **/
#define ISI_ISI_IMR_C_OVR		(1 << 25)
/** ISI_ISI_IMR_P_OVR Preview FIFO Overflow **/
#define ISI_ISI_IMR_P_OVR		(1 << 24)
/** ISI_ISI_IMR_CXFR_DONE Codec DMA Transfer Completed **/
#define ISI_ISI_IMR_CXFR_DONE		(1 << 17)
/** ISI_ISI_IMR_PXFR_DONE Preview DMA Transfer Completed **/
#define ISI_ISI_IMR_PXFR_DONE		(1 << 16)
/** ISI_ISI_IMR_VSYNC Vertical Synchronization **/
#define ISI_ISI_IMR_VSYNC		(1 << 10)
/** ISI_ISI_IMR_SRST Software Reset Completed **/
#define ISI_ISI_IMR_SRST		(1 << 2)
/** ISI_ISI_IMR_DIS_DONE Module Disable Operation Completed **/
#define ISI_ISI_IMR_DIS_DONE		(1 << 1)

/**@}*/

/** @defgroup isi_isi_dma_cher ISIDMACHER DMA Channel Enable Register
@{*/

/** ISI_ISI_DMA_CHER_C_CH_EN Codec Channel Enable **/
#define ISI_ISI_DMA_CHER_C_CH_EN		(1 << 1)
/** ISI_ISI_DMA_CHER_P_CH_EN Preview Channel Enable **/
#define ISI_ISI_DMA_CHER_P_CH_EN		(1 << 0)

/**@}*/

/** @defgroup isi_isi_dma_chdr ISIDMACHDR DMA Channel Disable Register
@{*/

/** ISI_ISI_DMA_CHDR_C_CH_DIS Codec Channel Disable Request **/
#define ISI_ISI_DMA_CHDR_C_CH_DIS		(1 << 1)
/** ISI_ISI_DMA_CHDR_P_CH_DIS Preview Channel Disable Request **/
#define ISI_ISI_DMA_CHDR_P_CH_DIS		(1 << 0)

/**@}*/

/** @defgroup isi_isi_dma_chsr ISIDMACHSR DMA Channel Status Register
@{*/

/** ISI_ISI_DMA_CHSR_C_CH_S Code DMA Channel Status **/
#define ISI_ISI_DMA_CHSR_C_CH_S		(1 << 1)
/** ISI_ISI_DMA_CHSR_P_CH_S Preview DMA Channel Status **/
#define ISI_ISI_DMA_CHSR_P_CH_S		(1 << 0)

/**@}*/

/** @defgroup isi_isi_dma_p_addr ISIDMAPADDR DMA Preview Base Address Register
@{*/


#define ISI_ISI_DMA_P_ADDR_P_ADDR_SHIFT		2
#define ISI_ISI_DMA_P_ADDR_P_ADDR_MASK		0x3fffffff
/** @defgroup isi_isi_dma_p_addr_p_addr PADDR Preview Image Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup isi_isi_dma_p_ctrl ISIDMAPCTRL DMA Preview Control Register
@{*/

/** ISI_ISI_DMA_P_CTRL_P_DONE Preview Transfer Done **/
#define ISI_ISI_DMA_P_CTRL_P_DONE		(1 << 3)
/** ISI_ISI_DMA_P_CTRL_P_IEN Transfer Done Flag Control **/
#define ISI_ISI_DMA_P_CTRL_P_IEN		(1 << 2)
/** ISI_ISI_DMA_P_CTRL_P_WB Descriptor Writeback Control Bit **/
#define ISI_ISI_DMA_P_CTRL_P_WB		(1 << 1)
/** ISI_ISI_DMA_P_CTRL_P_FETCH Descriptor Fetch Control Bit **/
#define ISI_ISI_DMA_P_CTRL_P_FETCH		(1 << 0)

/**@}*/

/** @defgroup isi_isi_dma_p_dscr ISIDMAPDSCR DMA Preview Descriptor Address Register
@{*/


#define ISI_ISI_DMA_P_DSCR_P_DSCR_SHIFT		2
#define ISI_ISI_DMA_P_DSCR_P_DSCR_MASK		0x3fffffff
/** @defgroup isi_isi_dma_p_dscr_p_dscr PDSCR Preview Descriptor Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup isi_isi_dma_c_addr ISIDMACADDR DMA Codec Base Address Register
@{*/


#define ISI_ISI_DMA_C_ADDR_C_ADDR_SHIFT		2
#define ISI_ISI_DMA_C_ADDR_C_ADDR_MASK		0x3fffffff
/** @defgroup isi_isi_dma_c_addr_c_addr CADDR Codec Image Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup isi_isi_dma_c_ctrl ISIDMACCTRL DMA Codec Control Register
@{*/

/** ISI_ISI_DMA_C_CTRL_C_DONE Codec Transfer Done **/
#define ISI_ISI_DMA_C_CTRL_C_DONE		(1 << 3)
/** ISI_ISI_DMA_C_CTRL_C_IEN Transfer Done Flag Control **/
#define ISI_ISI_DMA_C_CTRL_C_IEN		(1 << 2)
/** ISI_ISI_DMA_C_CTRL_C_WB Descriptor Writeback Control Bit **/
#define ISI_ISI_DMA_C_CTRL_C_WB		(1 << 1)
/** ISI_ISI_DMA_C_CTRL_C_FETCH Descriptor Fetch Control Bit **/
#define ISI_ISI_DMA_C_CTRL_C_FETCH		(1 << 0)

/**@}*/

/** @defgroup isi_isi_dma_c_dscr ISIDMACDSCR DMA Codec Descriptor Address Register
@{*/


#define ISI_ISI_DMA_C_DSCR_C_DSCR_SHIFT		2
#define ISI_ISI_DMA_C_DSCR_C_DSCR_MASK		0x3fffffff
/** @defgroup isi_isi_dma_c_dscr_c_dscr CDSCR Codec Descriptor Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup isi_isi_wpmr ISIWPMR Write Protection Mode Register
@{*/


#define ISI_ISI_WPMR_WPKEY_SHIFT		8
#define ISI_ISI_WPMR_WPKEY_MASK		0xffffff
/** @defgroup isi_isi_wpmr_wpkey WPKEY Write Protection Key Password
@{*/
/**@}*/

/** ISI_ISI_WPMR_WPEN Write Protection Enable **/
#define ISI_ISI_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup isi_isi_wpsr ISIWPSR Write Protection Status Register
@{*/


#define ISI_ISI_WPSR_WPVSRC_SHIFT		8
#define ISI_ISI_WPSR_WPVSRC_MASK		0xffff
/** @defgroup isi_isi_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** ISI_ISI_WPSR_WPVS Write Protection Violation Status **/
#define ISI_ISI_WPSR_WPVS		(1 << 0)

/**@}*/

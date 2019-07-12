#pragma once 

/* --- MLB: MediaLB ------------------------------------------------- */

/** @defgroup mlb_registers MediaLB Register
@{*/

/** MLB_MLB_MLBC0 MediaLB Control 0 Register **/
#define MLB_MLB_MLBC0			MMIO32(MLB_BASE + 0x00)
/** MLB_MLB_MS0 MediaLB Channel Status 0 Register **/
#define MLB_MLB_MS0			MMIO32(MLB_BASE + 0x0c)
/** MLB_MLB_MS1 MediaLB Channel Status1 Register **/
#define MLB_MLB_MS1			MMIO32(MLB_BASE + 0x14)
/** MLB_MLB_MSS MediaLB System Status Register **/
#define MLB_MLB_MSS			MMIO32(MLB_BASE + 0x20)
/** MLB_MLB_MSD MediaLB System Data Register **/
#define MLB_MLB_MSD			MMIO32(MLB_BASE + 0x24)
/** MLB_MLB_MIEN MediaLB Interrupt Enable Register **/
#define MLB_MLB_MIEN			MMIO32(MLB_BASE + 0x2c)
/** MLB_MLB_MLBC1 MediaLB Control 1 Register **/
#define MLB_MLB_MLBC1			MMIO32(MLB_BASE + 0x3c)
/** MLB_MLB_HCTL HBI Control Register **/
#define MLB_MLB_HCTL			MMIO32(MLB_BASE + 0x80)
/** MLB_MLB_HCMR[0] HBI Channel Mask 0 Register 0 **/
#define MLB_MLB_HCMR[0]			MMIO32(MLB_BASE + 0x88)
/** MLB_MLB_HCMR[1] HBI Channel Mask 0 Register 0 **/
#define MLB_MLB_HCMR[1]			MMIO32(MLB_BASE + 0x8c)
/** MLB_MLB_HCER[0] HBI Channel Error 0 Register 0 **/
#define MLB_MLB_HCER[0]			MMIO32(MLB_BASE + 0x90)
/** MLB_MLB_HCER[1] HBI Channel Error 0 Register 0 **/
#define MLB_MLB_HCER[1]			MMIO32(MLB_BASE + 0x94)
/** MLB_MLB_HCBR[0] HBI Channel Busy 0 Register 0 **/
#define MLB_MLB_HCBR[0]			MMIO32(MLB_BASE + 0x98)
/** MLB_MLB_HCBR[1] HBI Channel Busy 0 Register 0 **/
#define MLB_MLB_HCBR[1]			MMIO32(MLB_BASE + 0x9c)
/** MLB_MLB_MDAT[0] MIF Data 0 Register 0 **/
#define MLB_MLB_MDAT[0]			MMIO32(MLB_BASE + 0xc0)
/** MLB_MLB_MDAT[1] MIF Data 0 Register 0 **/
#define MLB_MLB_MDAT[1]			MMIO32(MLB_BASE + 0xc4)
/** MLB_MLB_MDAT[2] MIF Data 0 Register 0 **/
#define MLB_MLB_MDAT[2]			MMIO32(MLB_BASE + 0xc8)
/** MLB_MLB_MDAT[3] MIF Data 0 Register 0 **/
#define MLB_MLB_MDAT[3]			MMIO32(MLB_BASE + 0xcc)
/** MLB_MLB_MDWE[0] MIF Data Write Enable 0 Register 0 **/
#define MLB_MLB_MDWE[0]			MMIO32(MLB_BASE + 0xd0)
/** MLB_MLB_MDWE[1] MIF Data Write Enable 0 Register 0 **/
#define MLB_MLB_MDWE[1]			MMIO32(MLB_BASE + 0xd4)
/** MLB_MLB_MDWE[2] MIF Data Write Enable 0 Register 0 **/
#define MLB_MLB_MDWE[2]			MMIO32(MLB_BASE + 0xd8)
/** MLB_MLB_MDWE[3] MIF Data Write Enable 0 Register 0 **/
#define MLB_MLB_MDWE[3]			MMIO32(MLB_BASE + 0xdc)
/** MLB_MLB_MCTL MIF Control Register **/
#define MLB_MLB_MCTL			MMIO32(MLB_BASE + 0xe0)
/** MLB_MLB_MADR MIF Address Register **/
#define MLB_MLB_MADR			MMIO32(MLB_BASE + 0xe4)
/** MLB_MLB_ACTL AHB Control Register **/
#define MLB_MLB_ACTL			MMIO32(MLB_BASE + 0x3c0)
/** MLB_MLB_ACSR[0] AHB Channel Status 0 Register 0 **/
#define MLB_MLB_ACSR[0]			MMIO32(MLB_BASE + 0x3d0)
/** MLB_MLB_ACSR[1] AHB Channel Status 0 Register 0 **/
#define MLB_MLB_ACSR[1]			MMIO32(MLB_BASE + 0x3d4)
/** MLB_MLB_ACMR[0] AHB Channel Mask 0 Register 0 **/
#define MLB_MLB_ACMR[0]			MMIO32(MLB_BASE + 0x3d8)
/** MLB_MLB_ACMR[1] AHB Channel Mask 0 Register 0 **/
#define MLB_MLB_ACMR[1]			MMIO32(MLB_BASE + 0x3dc)

/**@}*/


/** @defgroup mlb_mlb_mlbc0 MLBMLBC0 MediaLB Control 0 Register
@{*/


#define MLB_MLB_MLBC0_FCNT_SHIFT		15
#define MLB_MLB_MLBC0_FCNT_MASK		0x07
/** @defgroup mlb_mlb_mlbc0_fcnt FCNT The number of frames per sub-buffer for synchronous channels
@{*/
/**@}*/

/** MLB_MLB_MLBC0_CTLRETRY Control Tx Packet Retry **/
#define MLB_MLB_MLBC0_CTLRETRY		(1 << 14)
/** MLB_MLB_MLBC0_ASYRETRY Asynchronous Tx Packet Retry **/
#define MLB_MLB_MLBC0_ASYRETRY		(1 << 12)
/** MLB_MLB_MLBC0_MLBLK MediaLB Lock Status (read-only) **/
#define MLB_MLB_MLBC0_MLBLK		(1 << 7)
/** MLB_MLB_MLBC0_ZERO Must be Written to 0 **/
#define MLB_MLB_MLBC0_ZERO		(1 << 5)

#define MLB_MLB_MLBC0_MLBCLK_SHIFT		2
#define MLB_MLB_MLBC0_MLBCLK_MASK		0x07
/** @defgroup mlb_mlb_mlbc0_mlbclk MLBCLK MLBCLK (MediaLB clock) Speed Select
@{*/
/**@}*/

/** MLB_MLB_MLBC0_MLBEN MediaLB Enable **/
#define MLB_MLB_MLBC0_MLBEN		(1 << 0)

/**@}*/

/** @defgroup mlb_mlb_ms0 MLBMS0 MediaLB Channel Status 0 Register
@{*/


#define MLB_MLB_MS0_MCS_SHIFT		0
#define MLB_MLB_MS0_MCS_MASK		0xffffffff
/** @defgroup mlb_mlb_ms0_mcs MCS MediaLB Channel Status [31:0] (cleared by writing a 0)
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_ms1 MLBMS1 MediaLB Channel Status1 Register
@{*/


#define MLB_MLB_MS1_MCS_SHIFT		0
#define MLB_MLB_MS1_MCS_MASK		0xffffffff
/** @defgroup mlb_mlb_ms1_mcs MCS MediaLB Channel Status [63:32] (cleared by writing a 0)
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_mss MLBMSS MediaLB System Status Register
@{*/

/** MLB_MLB_MSS_SERVREQ Service Request Enabled **/
#define MLB_MLB_MSS_SERVREQ		(1 << 5)
/** MLB_MLB_MSS_SWSYSCMD Software System Command Detected in the System Quadlet (cleared by writing a 0) **/
#define MLB_MLB_MSS_SWSYSCMD		(1 << 4)
/** MLB_MLB_MSS_CSSYSCMD Channel Scan System Command Detected in the System Quadlet (cleared by writing a 0) **/
#define MLB_MLB_MSS_CSSYSCMD		(1 << 3)
/** MLB_MLB_MSS_ULKSYSCMD Network Unlock System Command Detected in the System Quadlet (cleared by writing a 0) **/
#define MLB_MLB_MSS_ULKSYSCMD		(1 << 2)
/** MLB_MLB_MSS_LKSYSCMD Network Lock System Command Detected in the System Quadlet (cleared by writing a 0) **/
#define MLB_MLB_MSS_LKSYSCMD		(1 << 1)
/** MLB_MLB_MSS_RSTSYSCMD Reset System Command Detected in the System Quadlet (cleared by writing a 0) **/
#define MLB_MLB_MSS_RSTSYSCMD		(1 << 0)

/**@}*/

/** @defgroup mlb_mlb_msd MLBMSD MediaLB System Data Register
@{*/


#define MLB_MLB_MSD_SD3_SHIFT		24
#define MLB_MLB_MSD_SD3_MASK		0xff
/** @defgroup mlb_mlb_msd_sd3 SD3 System Data (Byte 3)
@{*/
/**@}*/


#define MLB_MLB_MSD_SD2_SHIFT		16
#define MLB_MLB_MSD_SD2_MASK		0xff
/** @defgroup mlb_mlb_msd_sd2 SD2 System Data (Byte 2)
@{*/
/**@}*/


#define MLB_MLB_MSD_SD1_SHIFT		8
#define MLB_MLB_MSD_SD1_MASK		0xff
/** @defgroup mlb_mlb_msd_sd1 SD1 System Data (Byte 1)
@{*/
/**@}*/


#define MLB_MLB_MSD_SD0_SHIFT		0
#define MLB_MLB_MSD_SD0_MASK		0xff
/** @defgroup mlb_mlb_msd_sd0 SD0 System Data (Byte 0)
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_mien MLBMIEN MediaLB Interrupt Enable Register
@{*/

/** MLB_MLB_MIEN_CTX_BREAK Control Tx Break Enable **/
#define MLB_MLB_MIEN_CTX_BREAK		(1 << 29)
/** MLB_MLB_MIEN_CTX_PE Control Tx Protocol Error Enable **/
#define MLB_MLB_MIEN_CTX_PE		(1 << 28)
/** MLB_MLB_MIEN_CTX_DONE Control Tx Packet Done Enable **/
#define MLB_MLB_MIEN_CTX_DONE		(1 << 27)
/** MLB_MLB_MIEN_CRX_BREAK Control Rx Break Enable **/
#define MLB_MLB_MIEN_CRX_BREAK		(1 << 26)
/** MLB_MLB_MIEN_CRX_PE Control Rx Protocol Error Enable **/
#define MLB_MLB_MIEN_CRX_PE		(1 << 25)
/** MLB_MLB_MIEN_CRX_DONE Control Rx Packet Done Enable **/
#define MLB_MLB_MIEN_CRX_DONE		(1 << 24)
/** MLB_MLB_MIEN_ATX_BREAK Asynchronous Tx Break Enable **/
#define MLB_MLB_MIEN_ATX_BREAK		(1 << 22)
/** MLB_MLB_MIEN_ATX_PE Asynchronous Tx Protocol Error Enable **/
#define MLB_MLB_MIEN_ATX_PE		(1 << 21)
/** MLB_MLB_MIEN_ATX_DONE Asynchronous Tx Packet Done Enable **/
#define MLB_MLB_MIEN_ATX_DONE		(1 << 20)
/** MLB_MLB_MIEN_ARX_BREAK Asynchronous Rx Break Enable **/
#define MLB_MLB_MIEN_ARX_BREAK		(1 << 19)
/** MLB_MLB_MIEN_ARX_PE Asynchronous Rx Protocol Error Enable **/
#define MLB_MLB_MIEN_ARX_PE		(1 << 18)
/** MLB_MLB_MIEN_ARX_DONE Asynchronous Rx Done Enable **/
#define MLB_MLB_MIEN_ARX_DONE		(1 << 17)
/** MLB_MLB_MIEN_SYNC_PE Synchronous Protocol Error Enable **/
#define MLB_MLB_MIEN_SYNC_PE		(1 << 16)
/** MLB_MLB_MIEN_ISOC_BUFO Isochronous Rx Buffer Overflow Enable **/
#define MLB_MLB_MIEN_ISOC_BUFO		(1 << 1)
/** MLB_MLB_MIEN_ISOC_PE Isochronous Rx Protocol Error Enable **/
#define MLB_MLB_MIEN_ISOC_PE		(1 << 0)

/**@}*/

/** @defgroup mlb_mlb_mlbc1 MLBMLBC1 MediaLB Control 1 Register
@{*/


#define MLB_MLB_MLBC1_NDA_SHIFT		8
#define MLB_MLB_MLBC1_NDA_MASK		0xff
/** @defgroup mlb_mlb_mlbc1_nda NDA Node Device Address
@{*/
/**@}*/

/** MLB_MLB_MLBC1_CLKM MediaLB Clock Missing Status (cleared by writing a 0) **/
#define MLB_MLB_MLBC1_CLKM		(1 << 7)
/** MLB_MLB_MLBC1_LOCK MediaLB Lock Error Status (cleared by writing a 0) **/
#define MLB_MLB_MLBC1_LOCK		(1 << 6)

/**@}*/

/** @defgroup mlb_mlb_hctl MLBHCTL HBI Control Register
@{*/

/** MLB_MLB_HCTL_EN HBI Enable **/
#define MLB_MLB_HCTL_EN		(1 << 15)
/** MLB_MLB_HCTL_RST1 Address Generation Unit 1 Software Reset **/
#define MLB_MLB_HCTL_RST1		(1 << 1)
/** MLB_MLB_HCTL_RST0 Address Generation Unit 0 Software Reset **/
#define MLB_MLB_HCTL_RST0		(1 << 0)

/**@}*/

/** @defgroup mlb_mlb_hcmr[0] MLBHCMR[0] HBI Channel Mask 0 Register 0
@{*/


#define MLB_MLB_HCMR[0]_CHM_SHIFT		0
#define MLB_MLB_HCMR[0]_CHM_MASK		0xffffffff
/** @defgroup mlb_mlb_hcmr[0]_chm CHM Bitwise Channel Mask Bit [31:0]
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_hcmr[1] MLBHCMR[1] HBI Channel Mask 0 Register 0
@{*/


#define MLB_MLB_HCMR[1]_CHM_SHIFT		0
#define MLB_MLB_HCMR[1]_CHM_MASK		0xffffffff
/** @defgroup mlb_mlb_hcmr[1]_chm CHM Bitwise Channel Mask Bit [31:0]
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_hcer[0] MLBHCER[0] HBI Channel Error 0 Register 0
@{*/


#define MLB_MLB_HCER[0]_CERR_SHIFT		0
#define MLB_MLB_HCER[0]_CERR_MASK		0xffffffff
/** @defgroup mlb_mlb_hcer[0]_cerr CERR Bitwise Channel Error Bit [31:0]
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_hcer[1] MLBHCER[1] HBI Channel Error 0 Register 0
@{*/


#define MLB_MLB_HCER[1]_CERR_SHIFT		0
#define MLB_MLB_HCER[1]_CERR_MASK		0xffffffff
/** @defgroup mlb_mlb_hcer[1]_cerr CERR Bitwise Channel Error Bit [31:0]
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_hcbr[0] MLBHCBR[0] HBI Channel Busy 0 Register 0
@{*/


#define MLB_MLB_HCBR[0]_CHB_SHIFT		0
#define MLB_MLB_HCBR[0]_CHB_MASK		0xffffffff
/** @defgroup mlb_mlb_hcbr[0]_chb CHB Bitwise Channel Busy Bit [31:0]
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_hcbr[1] MLBHCBR[1] HBI Channel Busy 0 Register 0
@{*/


#define MLB_MLB_HCBR[1]_CHB_SHIFT		0
#define MLB_MLB_HCBR[1]_CHB_MASK		0xffffffff
/** @defgroup mlb_mlb_hcbr[1]_chb CHB Bitwise Channel Busy Bit [31:0]
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_mdat[0] MLBMDAT[0] MIF Data 0 Register 0
@{*/


#define MLB_MLB_MDAT[0]_DATA_SHIFT		0
#define MLB_MLB_MDAT[0]_DATA_MASK		0xffffffff
/** @defgroup mlb_mlb_mdat[0]_data DATA CRT or DBR Data
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_mdat[1] MLBMDAT[1] MIF Data 0 Register 0
@{*/


#define MLB_MLB_MDAT[1]_DATA_SHIFT		0
#define MLB_MLB_MDAT[1]_DATA_MASK		0xffffffff
/** @defgroup mlb_mlb_mdat[1]_data DATA CRT or DBR Data
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_mdat[2] MLBMDAT[2] MIF Data 0 Register 0
@{*/


#define MLB_MLB_MDAT[2]_DATA_SHIFT		0
#define MLB_MLB_MDAT[2]_DATA_MASK		0xffffffff
/** @defgroup mlb_mlb_mdat[2]_data DATA CRT or DBR Data
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_mdat[3] MLBMDAT[3] MIF Data 0 Register 0
@{*/


#define MLB_MLB_MDAT[3]_DATA_SHIFT		0
#define MLB_MLB_MDAT[3]_DATA_MASK		0xffffffff
/** @defgroup mlb_mlb_mdat[3]_data DATA CRT or DBR Data
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_mdwe[0] MLBMDWE[0] MIF Data Write Enable 0 Register 0
@{*/


#define MLB_MLB_MDWE[0]_MASK_SHIFT		0
#define MLB_MLB_MDWE[0]_MASK_MASK		0xffffffff
/** @defgroup mlb_mlb_mdwe[0]_mask MASK Bitwise Write Enable for CTR Data - bits[31:0]
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_mdwe[1] MLBMDWE[1] MIF Data Write Enable 0 Register 0
@{*/


#define MLB_MLB_MDWE[1]_MASK_SHIFT		0
#define MLB_MLB_MDWE[1]_MASK_MASK		0xffffffff
/** @defgroup mlb_mlb_mdwe[1]_mask MASK Bitwise Write Enable for CTR Data - bits[31:0]
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_mdwe[2] MLBMDWE[2] MIF Data Write Enable 0 Register 0
@{*/


#define MLB_MLB_MDWE[2]_MASK_SHIFT		0
#define MLB_MLB_MDWE[2]_MASK_MASK		0xffffffff
/** @defgroup mlb_mlb_mdwe[2]_mask MASK Bitwise Write Enable for CTR Data - bits[31:0]
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_mdwe[3] MLBMDWE[3] MIF Data Write Enable 0 Register 0
@{*/


#define MLB_MLB_MDWE[3]_MASK_SHIFT		0
#define MLB_MLB_MDWE[3]_MASK_MASK		0xffffffff
/** @defgroup mlb_mlb_mdwe[3]_mask MASK Bitwise Write Enable for CTR Data - bits[31:0]
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_mctl MLBMCTL MIF Control Register
@{*/

/** MLB_MLB_MCTL_XCMP Transfer Complete (Write 0 to Clear) **/
#define MLB_MLB_MCTL_XCMP		(1 << 0)

/**@}*/

/** @defgroup mlb_mlb_madr MLBMADR MIF Address Register
@{*/

/** MLB_MLB_MADR_WNR Write-Not-Read Selection **/
#define MLB_MLB_MADR_WNR		(1 << 31)
/** MLB_MLB_MADR_TB Target Location Bit **/
#define MLB_MLB_MADR_TB		(1 << 30)

#define MLB_MLB_MADR_ADDR_SHIFT		0
#define MLB_MLB_MADR_ADDR_MASK		0x3fff
/** @defgroup mlb_mlb_madr_addr ADDR CTR or DBR Address
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_actl MLBACTL AHB Control Register
@{*/

/** MLB_MLB_ACTL_MPB DMA Packet Buffering Mode **/
#define MLB_MLB_ACTL_MPB		(1 << 4)
/** MLB_MLB_ACTL_DMA_MODE DMA Mode **/
#define MLB_MLB_ACTL_DMA_MODE		(1 << 2)
/** MLB_MLB_ACTL_SMX AHB Interrupt Mux Enable **/
#define MLB_MLB_ACTL_SMX		(1 << 1)
/** MLB_MLB_ACTL_SCE Software Clear Enable **/
#define MLB_MLB_ACTL_SCE		(1 << 0)

/**@}*/

/** @defgroup mlb_mlb_acsr[0] MLBACSR[0] AHB Channel Status 0 Register 0
@{*/


#define MLB_MLB_ACSR[0]_CHS_SHIFT		0
#define MLB_MLB_ACSR[0]_CHS_MASK		0xffffffff
/** @defgroup mlb_mlb_acsr[0]_chs CHS Interrupt Status for Logical Channels [31:0] (cleared by writing a 1)
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_acsr[1] MLBACSR[1] AHB Channel Status 0 Register 0
@{*/


#define MLB_MLB_ACSR[1]_CHS_SHIFT		0
#define MLB_MLB_ACSR[1]_CHS_MASK		0xffffffff
/** @defgroup mlb_mlb_acsr[1]_chs CHS Interrupt Status for Logical Channels [31:0] (cleared by writing a 1)
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_acmr[0] MLBACMR[0] AHB Channel Mask 0 Register 0
@{*/


#define MLB_MLB_ACMR[0]_CHM_SHIFT		0
#define MLB_MLB_ACMR[0]_CHM_MASK		0xffffffff
/** @defgroup mlb_mlb_acmr[0]_chm CHM Bitwise Channel Mask Bits 31 to 0
@{*/
/**@}*/


/**@}*/

/** @defgroup mlb_mlb_acmr[1] MLBACMR[1] AHB Channel Mask 0 Register 0
@{*/


#define MLB_MLB_ACMR[1]_CHM_SHIFT		0
#define MLB_MLB_ACMR[1]_CHM_MASK		0xffffffff
/** @defgroup mlb_mlb_acmr[1]_chm CHM Bitwise Channel Mask Bits 31 to 0
@{*/
/**@}*/


/**@}*/

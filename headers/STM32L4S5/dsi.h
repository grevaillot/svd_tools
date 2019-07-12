#pragma once 

/* --- DSI: DSI Host ------------------------------------------------ */

/** @defgroup dsi_registers DSI Host Register
@{*/

/** DSI_DSI_VR DSI Host Version Register **/
#define DSI_DSI_VR			MMIO32(DSI_BASE + 0x00)
/** DSI_DSI_CR DSI Host Control Register **/
#define DSI_DSI_CR			MMIO32(DSI_BASE + 0x04)
/** DSI_DSI_CCR DSI HOST Clock Control Register **/
#define DSI_DSI_CCR			MMIO32(DSI_BASE + 0x08)
/** DSI_DSI_LVCIDR DSI Host LTDC VCID Register **/
#define DSI_DSI_LVCIDR			MMIO32(DSI_BASE + 0x0c)
/** DSI_DSI_LCOLCR DSI Host LTDC Color Coding Register **/
#define DSI_DSI_LCOLCR			MMIO32(DSI_BASE + 0x10)
/** DSI_DSI_LPCR DSI Host LTDC Polarity Configuration Register **/
#define DSI_DSI_LPCR			MMIO32(DSI_BASE + 0x14)
/** DSI_DSI_LPMCR DSI Host Low-Power mode Configuration Register **/
#define DSI_DSI_LPMCR			MMIO32(DSI_BASE + 0x18)
/** DSI_DSI_PCR DSI Host Protocol Configuration Register **/
#define DSI_DSI_PCR			MMIO32(DSI_BASE + 0x1c)
/** DSI_DSI_GVCIDR DSI Host Generic VCID Register **/
#define DSI_DSI_GVCIDR			MMIO32(DSI_BASE + 0x20)
/** DSI_DSI_MCR DSI Host mode Configuration Register **/
#define DSI_DSI_MCR			MMIO32(DSI_BASE + 0x24)
/** DSI_DSI_VMCR DSI Host Video mode Configuration Register **/
#define DSI_DSI_VMCR			MMIO32(DSI_BASE + 0x28)
/** DSI_DSI_VPCR DSI Host Video Packet Configuration Register **/
#define DSI_DSI_VPCR			MMIO32(DSI_BASE + 0x2c)
/** DSI_DSI_VCCR DSI Host Video Chunks Configuration Register **/
#define DSI_DSI_VCCR			MMIO32(DSI_BASE + 0x30)
/** DSI_DSI_VNPCR DSI Host Video Null Packet Configuration Register **/
#define DSI_DSI_VNPCR			MMIO32(DSI_BASE + 0x34)
/** DSI_DSI_VHSACR DSI Host Video HSA Configuration Register **/
#define DSI_DSI_VHSACR			MMIO32(DSI_BASE + 0x38)
/** DSI_DSI_VHBPCR DSI Host Video HBP Configuration Register **/
#define DSI_DSI_VHBPCR			MMIO32(DSI_BASE + 0x3c)
/** DSI_DSI_VLCR DSI Host Video Line Configuration Register **/
#define DSI_DSI_VLCR			MMIO32(DSI_BASE + 0x40)
/** DSI_DSI_VVSACR DSI Host Video VSA Configuration Register **/
#define DSI_DSI_VVSACR			MMIO32(DSI_BASE + 0x44)
/** DSI_DSI_VVBPCR DSI Host Video VBP Configuration Register **/
#define DSI_DSI_VVBPCR			MMIO32(DSI_BASE + 0x48)
/** DSI_DSI_VVFPCR DSI Host Video VFP Configuration Register **/
#define DSI_DSI_VVFPCR			MMIO32(DSI_BASE + 0x4c)
/** DSI_DSI_VVACR DSI Host Video VA Configuration Register **/
#define DSI_DSI_VVACR			MMIO32(DSI_BASE + 0x50)
/** DSI_DSI_LCCR DSI Host LTDC Command Configuration Register **/
#define DSI_DSI_LCCR			MMIO32(DSI_BASE + 0x54)
/** DSI_DSI_CMCR DSI Host Command mode Configuration Register **/
#define DSI_DSI_CMCR			MMIO32(DSI_BASE + 0x58)
/** DSI_DSI_GHCR DSI Host Generic Header Configuration Register **/
#define DSI_DSI_GHCR			MMIO32(DSI_BASE + 0x5c)
/** DSI_DSI_GPDR DSI Host Generic Payload Data Register **/
#define DSI_DSI_GPDR			MMIO32(DSI_BASE + 0x60)
/** DSI_DSI_GPSR DSI Host Generic Packet Status Register **/
#define DSI_DSI_GPSR			MMIO32(DSI_BASE + 0x64)
/** DSI_DSI_TCCR0 DSI Host Timeout Counter Configuration Register 0 **/
#define DSI_DSI_TCCR0			MMIO32(DSI_BASE + 0x68)
/** DSI_DSI_TCCR1 DSI Host Timeout Counter Configuration Register 1 **/
#define DSI_DSI_TCCR1			MMIO32(DSI_BASE + 0x6c)
/** DSI_DSI_TCCR2 DSI Host Timeout Counter Configuration Register 2 **/
#define DSI_DSI_TCCR2			MMIO32(DSI_BASE + 0x70)
/** DSI_DSI_TCCR3 DSI Host Timeout Counter Configuration Register 3 **/
#define DSI_DSI_TCCR3			MMIO32(DSI_BASE + 0x74)
/** DSI_DSI_TCCR4 DSI Host Timeout Counter Configuration Register 4 **/
#define DSI_DSI_TCCR4			MMIO32(DSI_BASE + 0x78)
/** DSI_DSI_TCCR5 DSI Host Timeout Counter Configuration Register 5 **/
#define DSI_DSI_TCCR5			MMIO32(DSI_BASE + 0x7c)
/** DSI_DSI_CLCR DSI Host Clock Lane Configuration Register **/
#define DSI_DSI_CLCR			MMIO32(DSI_BASE + 0x80)
/** DSI_DSI_CLTCR DSI Host Clock Lane Timer Configuration Register **/
#define DSI_DSI_CLTCR			MMIO32(DSI_BASE + 0x84)
/** DSI_DSI_DLTRC DSI Host Data Lane Timer Configuration Register **/
#define DSI_DSI_DLTRC			MMIO32(DSI_BASE + 0x88)
/** DSI_DSI_PCTLR DSI Host PHY Control Register **/
#define DSI_DSI_PCTLR			MMIO32(DSI_BASE + 0x8c)
/** DSI_DSI_PCONFR DSI Host PHY Configuration Register **/
#define DSI_DSI_PCONFR			MMIO32(DSI_BASE + 0x90)
/** DSI_DSI_PUCR DSI Host PHY ULPS Control Register **/
#define DSI_DSI_PUCR			MMIO32(DSI_BASE + 0x94)
/** DSI_DSI_PTTCR DSI Host PHY TX Triggers Configuration Register **/
#define DSI_DSI_PTTCR			MMIO32(DSI_BASE + 0x98)
/** DSI_DSI_PSR DSI Host PHY Status Register **/
#define DSI_DSI_PSR			MMIO32(DSI_BASE + 0x9c)
/** DSI_DSI_ISR0 DSI Host Interrupt & Status Register 0 **/
#define DSI_DSI_ISR0			MMIO32(DSI_BASE + 0xa0)
/** DSI_DSI_ISR1 DSI Host Interrupt & Status Register 1 **/
#define DSI_DSI_ISR1			MMIO32(DSI_BASE + 0xa4)
/** DSI_DSI_IER0 DSI Host Interrupt Enable Register 0 **/
#define DSI_DSI_IER0			MMIO32(DSI_BASE + 0xa8)
/** DSI_DSI_IER1 DSI Host Interrupt Enable Register 1 **/
#define DSI_DSI_IER1			MMIO32(DSI_BASE + 0xac)
/** DSI_DSI_FIR0 DSI Host Force Interrupt Register 0 **/
#define DSI_DSI_FIR0			MMIO32(DSI_BASE + 0xb0)
/** DSI_DSI_FIR1 DSI Host Force Interrupt Register 1 **/
#define DSI_DSI_FIR1			MMIO32(DSI_BASE + 0xb4)
/** DSI_DSI_VSCR DSI Host Video Shadow Control Register **/
#define DSI_DSI_VSCR			MMIO32(DSI_BASE + 0xb8)
/** DSI_DSI_LCVCIDR DSI Host LTDC Current VCID Register **/
#define DSI_DSI_LCVCIDR			MMIO32(DSI_BASE + 0xbc)
/** DSI_DSI_LCCCR DSI Host LTDC Current Color Coding Register **/
#define DSI_DSI_LCCCR			MMIO32(DSI_BASE + 0xc0)
/** DSI_DSI_LPMCCR DSI Host Low-Power mode Current Configuration Register **/
#define DSI_DSI_LPMCCR			MMIO32(DSI_BASE + 0xc4)
/** DSI_DSI_VMCCR DSI Host Video mode Current Configuration Register **/
#define DSI_DSI_VMCCR			MMIO32(DSI_BASE + 0xc8)
/** DSI_DSI_VPCCR DSI Host Video Packet Current Configuration Register **/
#define DSI_DSI_VPCCR			MMIO32(DSI_BASE + 0xcc)
/** DSI_DSI_VCCCR DSI Host Video Chunks Current Configuration Register **/
#define DSI_DSI_VCCCR			MMIO32(DSI_BASE + 0xd0)
/** DSI_DSI_VNPCCR DSI Host Video Null Packet Current Configuration Register **/
#define DSI_DSI_VNPCCR			MMIO32(DSI_BASE + 0xd4)
/** DSI_DSI_VHSACCR DSI Host Video HSA Current Configuration Register **/
#define DSI_DSI_VHSACCR			MMIO32(DSI_BASE + 0xd8)
/** DSI_DSI_VHBPCCR DSI Host Video HBP Current Configuration Register **/
#define DSI_DSI_VHBPCCR			MMIO32(DSI_BASE + 0xdc)
/** DSI_DSI_VLCCR DSI Host Video Line Current Configuration Register **/
#define DSI_DSI_VLCCR			MMIO32(DSI_BASE + 0xe0)
/** DSI_DSI_VVSACCR DSI Host Video VSA Current Configuration Register **/
#define DSI_DSI_VVSACCR			MMIO32(DSI_BASE + 0xe4)
/** DSI_DSI_VVBPCCR DSI Host Video VBP Current Configuration Register **/
#define DSI_DSI_VVBPCCR			MMIO32(DSI_BASE + 0xe8)
/** DSI_DSI_VVFPCCR DSI Host Video VFP Current Configuration Register **/
#define DSI_DSI_VVFPCCR			MMIO32(DSI_BASE + 0xec)
/** DSI_DSI_VVACCR DSI Host Video VA Current Configuration Register **/
#define DSI_DSI_VVACCR			MMIO32(DSI_BASE + 0xf0)
/** DSI_DSI_WCFGR DSI Wrapper Configuration Register **/
#define DSI_DSI_WCFGR			MMIO32(DSI_BASE + 0x400)
/** DSI_DSI_WCR DSI Wrapper Control Register **/
#define DSI_DSI_WCR			MMIO32(DSI_BASE + 0x404)
/** DSI_DSI_WIER DSI Wrapper Interrupt Enable Register **/
#define DSI_DSI_WIER			MMIO32(DSI_BASE + 0x408)
/** DSI_DSI_WISR DSI Wrapper Interrupt & Status Register **/
#define DSI_DSI_WISR			MMIO32(DSI_BASE + 0x40c)
/** DSI_DSI_WIFCR DSI Wrapper Interrupt Flag Clear Register **/
#define DSI_DSI_WIFCR			MMIO32(DSI_BASE + 0x410)
/** DSI_DSI_WPCR1 DSI Wrapper PHY Configuration Register 1 **/
#define DSI_DSI_WPCR1			MMIO32(DSI_BASE + 0x418)
/** DSI_DSI_WPCR2 DSI Wrapper PHY Configuration Register 2 **/
#define DSI_DSI_WPCR2			MMIO32(DSI_BASE + 0x41c)
/** DSI_DSI_WPCR3 DSI Wrapper PHY Configuration Register 3 **/
#define DSI_DSI_WPCR3			MMIO32(DSI_BASE + 0x420)
/** DSI_DSI_WPCR4 DSI_WPCR4 **/
#define DSI_DSI_WPCR4			MMIO32(DSI_BASE + 0x424)
/** DSI_DSI_WPCR5 DSI Wrapper PHY Configuration Register 5 **/
#define DSI_DSI_WPCR5			MMIO32(DSI_BASE + 0x428)
/** DSI_DSI_WRPCR DSI Wrapper Regulator and PLL Control Register **/
#define DSI_DSI_WRPCR			MMIO32(DSI_BASE + 0x430)

/**@}*/


/** @defgroup dsi_dsi_vr DSIVR DSI Host Version Register
@{*/


#define DSI_DSI_VR_VERSION_SHIFT		0
#define DSI_DSI_VR_VERSION_MASK		0xffffffff
/** @defgroup dsi_dsi_vr_version VERSION Version of the DSI Host
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_cr DSICR DSI Host Control Register
@{*/

/** DSI_DSI_CR_EN Enable **/
#define DSI_DSI_CR_EN		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_ccr DSICCR DSI HOST Clock Control Register
@{*/


#define DSI_DSI_CCR_TOCKDIV_SHIFT		8
#define DSI_DSI_CCR_TOCKDIV_MASK		0xff
/** @defgroup dsi_dsi_ccr_tockdiv TOCKDIV Timeout Clock Division
@{*/
/**@}*/


#define DSI_DSI_CCR_TXECKDIV_SHIFT		0
#define DSI_DSI_CCR_TXECKDIV_MASK		0xff
/** @defgroup dsi_dsi_ccr_txeckdiv TXECKDIV TX Escape Clock Division
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_lvcidr DSILVCIDR DSI Host LTDC VCID Register
@{*/


#define DSI_DSI_LVCIDR_VCID_SHIFT		0
#define DSI_DSI_LVCIDR_VCID_MASK		0x03
/** @defgroup dsi_dsi_lvcidr_vcid VCID Virtual Channel ID
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_lcolcr DSILCOLCR DSI Host LTDC Color Coding Register
@{*/

/** DSI_DSI_LCOLCR_LPE Loosely Packet Enable **/
#define DSI_DSI_LCOLCR_LPE		(1 << 8)

#define DSI_DSI_LCOLCR_COLC_SHIFT		0
#define DSI_DSI_LCOLCR_COLC_MASK		0x0f
/** @defgroup dsi_dsi_lcolcr_colc COLC Color Coding
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_lpcr DSILPCR DSI Host LTDC Polarity Configuration Register
@{*/

/** DSI_DSI_LPCR_HSP HSYNC Polarity **/
#define DSI_DSI_LPCR_HSP		(1 << 2)
/** DSI_DSI_LPCR_VSP VSYNC Polarity **/
#define DSI_DSI_LPCR_VSP		(1 << 1)
/** DSI_DSI_LPCR_DEP Data Enable Polarity **/
#define DSI_DSI_LPCR_DEP		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_lpmcr DSILPMCR DSI Host Low-Power mode Configuration Register
@{*/


#define DSI_DSI_LPMCR_LPSIZE_SHIFT		16
#define DSI_DSI_LPMCR_LPSIZE_MASK		0xff
/** @defgroup dsi_dsi_lpmcr_lpsize LPSIZE Largest Packet Size
@{*/
/**@}*/


#define DSI_DSI_LPMCR_VLPSIZE_SHIFT		0
#define DSI_DSI_LPMCR_VLPSIZE_MASK		0xff
/** @defgroup dsi_dsi_lpmcr_vlpsize VLPSIZE VACT Largest Packet Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_pcr DSIPCR DSI Host Protocol Configuration Register
@{*/

/** DSI_DSI_PCR_CRCRXE CRC Reception Enable **/
#define DSI_DSI_PCR_CRCRXE		(1 << 4)
/** DSI_DSI_PCR_ECCRXE ECC Reception Enable **/
#define DSI_DSI_PCR_ECCRXE		(1 << 3)
/** DSI_DSI_PCR_BTAE Bus Turn Around Enable **/
#define DSI_DSI_PCR_BTAE		(1 << 2)
/** DSI_DSI_PCR_ETRXE EoTp Reception Enable **/
#define DSI_DSI_PCR_ETRXE		(1 << 1)
/** DSI_DSI_PCR_ETTXE EoTp Transmission Enable **/
#define DSI_DSI_PCR_ETTXE		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_gvcidr DSIGVCIDR DSI Host Generic VCID Register
@{*/


#define DSI_DSI_GVCIDR_VCID_SHIFT		0
#define DSI_DSI_GVCIDR_VCID_MASK		0x03
/** @defgroup dsi_dsi_gvcidr_vcid VCID Virtual Channel ID
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_mcr DSIMCR DSI Host mode Configuration Register
@{*/

/** DSI_DSI_MCR_CMDM Command mode **/
#define DSI_DSI_MCR_CMDM		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_vmcr DSIVMCR DSI Host Video mode Configuration Register
@{*/

/** DSI_DSI_VMCR_PGO Pattern Generator Orientation **/
#define DSI_DSI_VMCR_PGO		(1 << 24)
/** DSI_DSI_VMCR_PGM Pattern Generator mode **/
#define DSI_DSI_VMCR_PGM		(1 << 20)
/** DSI_DSI_VMCR_PGE Pattern Generator Enable **/
#define DSI_DSI_VMCR_PGE		(1 << 16)
/** DSI_DSI_VMCR_LPCE Low-Power Command Enable **/
#define DSI_DSI_VMCR_LPCE		(1 << 15)
/** DSI_DSI_VMCR_FBTAAE Frame Bus-Turn-Around Acknowledge Enable **/
#define DSI_DSI_VMCR_FBTAAE		(1 << 14)
/** DSI_DSI_VMCR_LPHFPE Low-Power Horizontal Front-Porch Enable **/
#define DSI_DSI_VMCR_LPHFPE		(1 << 13)
/** DSI_DSI_VMCR_LPHBPE Low-Power Horizontal Back-Porch Enable **/
#define DSI_DSI_VMCR_LPHBPE		(1 << 12)
/** DSI_DSI_VMCR_LPVAE Low-Power Vertical Active Enable **/
#define DSI_DSI_VMCR_LPVAE		(1 << 11)
/** DSI_DSI_VMCR_LPVFPE Low-power Vertical Front-porch Enable **/
#define DSI_DSI_VMCR_LPVFPE		(1 << 10)
/** DSI_DSI_VMCR_LPVBPE Low-power Vertical Back-Porch Enable **/
#define DSI_DSI_VMCR_LPVBPE		(1 << 9)
/** DSI_DSI_VMCR_LPVSAE Low-Power Vertical Sync Active Enable **/
#define DSI_DSI_VMCR_LPVSAE		(1 << 8)

#define DSI_DSI_VMCR_VMT_SHIFT		0
#define DSI_DSI_VMCR_VMT_MASK		0x03
/** @defgroup dsi_dsi_vmcr_vmt VMT Video mode Type
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vpcr DSIVPCR DSI Host Video Packet Configuration Register
@{*/


#define DSI_DSI_VPCR_VPSIZE_SHIFT		0
#define DSI_DSI_VPCR_VPSIZE_MASK		0x3fff
/** @defgroup dsi_dsi_vpcr_vpsize VPSIZE Video Packet Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vccr DSIVCCR DSI Host Video Chunks Configuration Register
@{*/


#define DSI_DSI_VCCR_NUMC_SHIFT		0
#define DSI_DSI_VCCR_NUMC_MASK		0x1fff
/** @defgroup dsi_dsi_vccr_numc NUMC Number of Chunks
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vnpcr DSIVNPCR DSI Host Video Null Packet Configuration Register
@{*/


#define DSI_DSI_VNPCR_NPSIZE_SHIFT		0
#define DSI_DSI_VNPCR_NPSIZE_MASK		0x1fff
/** @defgroup dsi_dsi_vnpcr_npsize NPSIZE Null Packet Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vhsacr DSIVHSACR DSI Host Video HSA Configuration Register
@{*/


#define DSI_DSI_VHSACR_HSA_SHIFT		0
#define DSI_DSI_VHSACR_HSA_MASK		0xfff
/** @defgroup dsi_dsi_vhsacr_hsa HSA Horizontal Synchronism Active duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vhbpcr DSIVHBPCR DSI Host Video HBP Configuration Register
@{*/


#define DSI_DSI_VHBPCR_HBP_SHIFT		0
#define DSI_DSI_VHBPCR_HBP_MASK		0xfff
/** @defgroup dsi_dsi_vhbpcr_hbp HBP Horizontal Back-Porch duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vlcr DSIVLCR DSI Host Video Line Configuration Register
@{*/


#define DSI_DSI_VLCR_HLINE_SHIFT		0
#define DSI_DSI_VLCR_HLINE_MASK		0x7fff
/** @defgroup dsi_dsi_vlcr_hline HLINE Horizontal Line duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vvsacr DSIVVSACR DSI Host Video VSA Configuration Register
@{*/


#define DSI_DSI_VVSACR_VSA_SHIFT		0
#define DSI_DSI_VVSACR_VSA_MASK		0x3ff
/** @defgroup dsi_dsi_vvsacr_vsa VSA Vertical Synchronism Active duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vvbpcr DSIVVBPCR DSI Host Video VBP Configuration Register
@{*/


#define DSI_DSI_VVBPCR_VBP_SHIFT		0
#define DSI_DSI_VVBPCR_VBP_MASK		0x3ff
/** @defgroup dsi_dsi_vvbpcr_vbp VBP Vertical Back-Porch duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vvfpcr DSIVVFPCR DSI Host Video VFP Configuration Register
@{*/


#define DSI_DSI_VVFPCR_VFP_SHIFT		0
#define DSI_DSI_VVFPCR_VFP_MASK		0x3ff
/** @defgroup dsi_dsi_vvfpcr_vfp VFP Vertical Front-Porch duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vvacr DSIVVACR DSI Host Video VA Configuration Register
@{*/


#define DSI_DSI_VVACR_VA_SHIFT		0
#define DSI_DSI_VVACR_VA_MASK		0x3fff
/** @defgroup dsi_dsi_vvacr_va VA Vertical Active duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_lccr DSILCCR DSI Host LTDC Command Configuration Register
@{*/


#define DSI_DSI_LCCR_CMDSIZE_SHIFT		0
#define DSI_DSI_LCCR_CMDSIZE_MASK		0xffff
/** @defgroup dsi_dsi_lccr_cmdsize CMDSIZE Command Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_cmcr DSICMCR DSI Host Command mode Configuration Register
@{*/

/** DSI_DSI_CMCR_MRDPS Maximum Read Packet Size **/
#define DSI_DSI_CMCR_MRDPS		(1 << 24)
/** DSI_DSI_CMCR_DLWTX DCS Long Write Transmission **/
#define DSI_DSI_CMCR_DLWTX		(1 << 19)
/** DSI_DSI_CMCR_DSR0TX DCS Short Read Zero parameter Transmission **/
#define DSI_DSI_CMCR_DSR0TX		(1 << 18)
/** DSI_DSI_CMCR_DSW1TX DCS Short Read One parameter Transmission **/
#define DSI_DSI_CMCR_DSW1TX		(1 << 17)
/** DSI_DSI_CMCR_DSW0TX DCS Short Write Zero parameter Transmission **/
#define DSI_DSI_CMCR_DSW0TX		(1 << 16)
/** DSI_DSI_CMCR_GLWTX Generic Long Write Transmission **/
#define DSI_DSI_CMCR_GLWTX		(1 << 14)
/** DSI_DSI_CMCR_GSR2TX Generic Short Read Two parameters Transmission **/
#define DSI_DSI_CMCR_GSR2TX		(1 << 13)
/** DSI_DSI_CMCR_GSR1TX Generic Short Read One parameters Transmission **/
#define DSI_DSI_CMCR_GSR1TX		(1 << 12)
/** DSI_DSI_CMCR_GSR0TX Generic Short Read Zero parameters Transmission **/
#define DSI_DSI_CMCR_GSR0TX		(1 << 11)
/** DSI_DSI_CMCR_GSW2TX Generic Short Write Two parameters Transmission **/
#define DSI_DSI_CMCR_GSW2TX		(1 << 10)
/** DSI_DSI_CMCR_GSW1TX Generic Short Write One parameters Transmission **/
#define DSI_DSI_CMCR_GSW1TX		(1 << 9)
/** DSI_DSI_CMCR_GSW0TX Generic Short Write Zero parameters Transmission **/
#define DSI_DSI_CMCR_GSW0TX		(1 << 8)
/** DSI_DSI_CMCR_ARE Acknowledge Request Enable **/
#define DSI_DSI_CMCR_ARE		(1 << 1)
/** DSI_DSI_CMCR_TEARE Tearing Effect Acknowledge Request Enable **/
#define DSI_DSI_CMCR_TEARE		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_ghcr DSIGHCR DSI Host Generic Header Configuration Register
@{*/


#define DSI_DSI_GHCR_WCMSB_SHIFT		16
#define DSI_DSI_GHCR_WCMSB_MASK		0xff
/** @defgroup dsi_dsi_ghcr_wcmsb WCMSB WordCount MSB
@{*/
/**@}*/


#define DSI_DSI_GHCR_WCLSB_SHIFT		8
#define DSI_DSI_GHCR_WCLSB_MASK		0xff
/** @defgroup dsi_dsi_ghcr_wclsb WCLSB WordCount LSB
@{*/
/**@}*/


#define DSI_DSI_GHCR_VCID_SHIFT		6
#define DSI_DSI_GHCR_VCID_MASK		0x03
/** @defgroup dsi_dsi_ghcr_vcid VCID Channel
@{*/
/**@}*/


#define DSI_DSI_GHCR_DT_SHIFT		0
#define DSI_DSI_GHCR_DT_MASK		0x3f
/** @defgroup dsi_dsi_ghcr_dt DT Type
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_gpdr DSIGPDR DSI Host Generic Payload Data Register
@{*/


#define DSI_DSI_GPDR_DATA4_SHIFT		24
#define DSI_DSI_GPDR_DATA4_MASK		0xff
/** @defgroup dsi_dsi_gpdr_data4 DATA4 Payload Byte 4
@{*/
/**@}*/


#define DSI_DSI_GPDR_DATA3_SHIFT		16
#define DSI_DSI_GPDR_DATA3_MASK		0xff
/** @defgroup dsi_dsi_gpdr_data3 DATA3 Payload Byte 3
@{*/
/**@}*/


#define DSI_DSI_GPDR_DATA2_SHIFT		8
#define DSI_DSI_GPDR_DATA2_MASK		0xff
/** @defgroup dsi_dsi_gpdr_data2 DATA2 Payload Byte 2
@{*/
/**@}*/


#define DSI_DSI_GPDR_DATA1_SHIFT		0
#define DSI_DSI_GPDR_DATA1_MASK		0xff
/** @defgroup dsi_dsi_gpdr_data1 DATA1 Payload Byte 1
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_gpsr DSIGPSR DSI Host Generic Packet Status Register
@{*/

/** DSI_DSI_GPSR_RCB Read Command Busy **/
#define DSI_DSI_GPSR_RCB		(1 << 6)
/** DSI_DSI_GPSR_PRDFF Payload Read FIFO Full **/
#define DSI_DSI_GPSR_PRDFF		(1 << 5)
/** DSI_DSI_GPSR_PRDFE Payload Read FIFO Empty **/
#define DSI_DSI_GPSR_PRDFE		(1 << 4)
/** DSI_DSI_GPSR_PWRFF Payload Write FIFO Full **/
#define DSI_DSI_GPSR_PWRFF		(1 << 3)
/** DSI_DSI_GPSR_PWRFE Payload Write FIFO Empty **/
#define DSI_DSI_GPSR_PWRFE		(1 << 2)
/** DSI_DSI_GPSR_CMDFF Command FIFO Full **/
#define DSI_DSI_GPSR_CMDFF		(1 << 1)
/** DSI_DSI_GPSR_CMDFE Command FIFO Empty **/
#define DSI_DSI_GPSR_CMDFE		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_tccr0 DSITCCR0 DSI Host Timeout Counter Configuration Register 0
@{*/


#define DSI_DSI_TCCR0_HSTX_TOCNT_SHIFT		16
#define DSI_DSI_TCCR0_HSTX_TOCNT_MASK		0xffff
/** @defgroup dsi_dsi_tccr0_hstx_tocnt HSTXTOCNT High-Speed Transmission Timeout Counter
@{*/
/**@}*/


#define DSI_DSI_TCCR0_LPRX_TOCNT_SHIFT		0
#define DSI_DSI_TCCR0_LPRX_TOCNT_MASK		0xffff
/** @defgroup dsi_dsi_tccr0_lprx_tocnt LPRXTOCNT Low-power Reception Timeout Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_tccr1 DSITCCR1 DSI Host Timeout Counter Configuration Register 1
@{*/


#define DSI_DSI_TCCR1_HSRD_TOCNT_SHIFT		0
#define DSI_DSI_TCCR1_HSRD_TOCNT_MASK		0xffff
/** @defgroup dsi_dsi_tccr1_hsrd_tocnt HSRDTOCNT High-Speed Read Timeout Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_tccr2 DSITCCR2 DSI Host Timeout Counter Configuration Register 2
@{*/


#define DSI_DSI_TCCR2_LPRD_TOCNT_SHIFT		0
#define DSI_DSI_TCCR2_LPRD_TOCNT_MASK		0xffff
/** @defgroup dsi_dsi_tccr2_lprd_tocnt LPRDTOCNT Low-Power Read Timeout Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_tccr3 DSITCCR3 DSI Host Timeout Counter Configuration Register 3
@{*/

/** DSI_DSI_TCCR3_PM Presp mode **/
#define DSI_DSI_TCCR3_PM		(1 << 24)

#define DSI_DSI_TCCR3_HSWR_TOCNT_SHIFT		0
#define DSI_DSI_TCCR3_HSWR_TOCNT_MASK		0xffff
/** @defgroup dsi_dsi_tccr3_hswr_tocnt HSWRTOCNT High-Speed Write Timeout Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_tccr4 DSITCCR4 DSI Host Timeout Counter Configuration Register 4
@{*/


#define DSI_DSI_TCCR4_LSWR_TOCNT_SHIFT		0
#define DSI_DSI_TCCR4_LSWR_TOCNT_MASK		0xffff
/** @defgroup dsi_dsi_tccr4_lswr_tocnt LSWRTOCNT Low-Power Write Timeout Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_tccr5 DSITCCR5 DSI Host Timeout Counter Configuration Register 5
@{*/


#define DSI_DSI_TCCR5_BTA_TOCNT_SHIFT		0
#define DSI_DSI_TCCR5_BTA_TOCNT_MASK		0xffff
/** @defgroup dsi_dsi_tccr5_bta_tocnt BTATOCNT Bus-Turn-Around Timeout Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_clcr DSICLCR DSI Host Clock Lane Configuration Register
@{*/

/** DSI_DSI_CLCR_ACR Automatic Clock lane Control **/
#define DSI_DSI_CLCR_ACR		(1 << 1)
/** DSI_DSI_CLCR_DPCC D-PHY Clock Control **/
#define DSI_DSI_CLCR_DPCC		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_cltcr DSICLTCR DSI Host Clock Lane Timer Configuration Register
@{*/


#define DSI_DSI_CLTCR_HS2LP_TIME_SHIFT		16
#define DSI_DSI_CLTCR_HS2LP_TIME_MASK		0x3ff
/** @defgroup dsi_dsi_cltcr_hs2lp_time HS2LPTIME High-Speed to Low-Power Time
@{*/
/**@}*/


#define DSI_DSI_CLTCR_LP2HS_TIME_SHIFT		0
#define DSI_DSI_CLTCR_LP2HS_TIME_MASK		0x3ff
/** @defgroup dsi_dsi_cltcr_lp2hs_time LP2HSTIME Low-Power to High-Speed Time
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_dltrc DSIDLTRC DSI Host Data Lane Timer Configuration Register
@{*/


#define DSI_DSI_DLTRC_HS2LP_TIME_SHIFT		24
#define DSI_DSI_DLTRC_HS2LP_TIME_MASK		0xff
/** @defgroup dsi_dsi_dltrc_hs2lp_time HS2LPTIME High-Speed To Low-Power Time
@{*/
/**@}*/


#define DSI_DSI_DLTRC_LP2HS_TIME_SHIFT		16
#define DSI_DSI_DLTRC_LP2HS_TIME_MASK		0xff
/** @defgroup dsi_dsi_dltrc_lp2hs_time LP2HSTIME Low-Power To High-Speed Time
@{*/
/**@}*/


#define DSI_DSI_DLTRC_MRD_TIME_SHIFT		0
#define DSI_DSI_DLTRC_MRD_TIME_MASK		0x7fff
/** @defgroup dsi_dsi_dltrc_mrd_time MRDTIME Maximum Read Time
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_pctlr DSIPCTLR DSI Host PHY Control Register
@{*/

/** DSI_DSI_PCTLR_CKE Clock Enable **/
#define DSI_DSI_PCTLR_CKE		(1 << 2)
/** DSI_DSI_PCTLR_DEN Digital Enable **/
#define DSI_DSI_PCTLR_DEN		(1 << 1)

/**@}*/

/** @defgroup dsi_dsi_pconfr DSIPCONFR DSI Host PHY Configuration Register
@{*/


#define DSI_DSI_PCONFR_SW_TIME_SHIFT		8
#define DSI_DSI_PCONFR_SW_TIME_MASK		0xff
/** @defgroup dsi_dsi_pconfr_sw_time SWTIME Stop Wait Time
@{*/
/**@}*/


#define DSI_DSI_PCONFR_NL_SHIFT		0
#define DSI_DSI_PCONFR_NL_MASK		0x03
/** @defgroup dsi_dsi_pconfr_nl NL Number of Lanes
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_pucr DSIPUCR DSI Host PHY ULPS Control Register
@{*/

/** DSI_DSI_PUCR_UEDL ULPS Exit on Data Lane **/
#define DSI_DSI_PUCR_UEDL		(1 << 3)
/** DSI_DSI_PUCR_URDL ULPS Request on Data Lane **/
#define DSI_DSI_PUCR_URDL		(1 << 2)
/** DSI_DSI_PUCR_UECL ULPS Exit on Clock Lane **/
#define DSI_DSI_PUCR_UECL		(1 << 1)
/** DSI_DSI_PUCR_URCL ULPS Request on Clock Lane **/
#define DSI_DSI_PUCR_URCL		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_pttcr DSIPTTCR DSI Host PHY TX Triggers Configuration Register
@{*/


#define DSI_DSI_PTTCR_TX_TRIG_SHIFT		0
#define DSI_DSI_PTTCR_TX_TRIG_MASK		0x0f
/** @defgroup dsi_dsi_pttcr_tx_trig TXTRIG Transmission Trigger
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_psr DSIPSR DSI Host PHY Status Register
@{*/

/** DSI_DSI_PSR_UAN1 ULPS Active Not lane 1 **/
#define DSI_DSI_PSR_UAN1		(1 << 8)
/** DSI_DSI_PSR_PSS1 PHY Stop State lane 1 **/
#define DSI_DSI_PSR_PSS1		(1 << 7)
/** DSI_DSI_PSR_RUE0 RX ULPS Escape lane 0 **/
#define DSI_DSI_PSR_RUE0		(1 << 6)
/** DSI_DSI_PSR_UAN0 ULPS Active Not lane 1 **/
#define DSI_DSI_PSR_UAN0		(1 << 5)
/** DSI_DSI_PSR_PSS0 PHY Stop State lane 0 **/
#define DSI_DSI_PSR_PSS0		(1 << 4)
/** DSI_DSI_PSR_UANC ULPS Active Not Clock lane **/
#define DSI_DSI_PSR_UANC		(1 << 3)
/** DSI_DSI_PSR_PSSC PHY Stop State Clock lane **/
#define DSI_DSI_PSR_PSSC		(1 << 2)
/** DSI_DSI_PSR_PD PHY Direction **/
#define DSI_DSI_PSR_PD		(1 << 1)

/**@}*/

/** @defgroup dsi_dsi_isr0 DSIISR0 DSI Host Interrupt & Status Register 0
@{*/

/** DSI_DSI_ISR0_PE4 PHY Error 4 **/
#define DSI_DSI_ISR0_PE4		(1 << 20)
/** DSI_DSI_ISR0_PE3 PHY Error 3 **/
#define DSI_DSI_ISR0_PE3		(1 << 19)
/** DSI_DSI_ISR0_PE2 PHY Error 2 **/
#define DSI_DSI_ISR0_PE2		(1 << 18)
/** DSI_DSI_ISR0_PE1 PHY Error 1 **/
#define DSI_DSI_ISR0_PE1		(1 << 17)
/** DSI_DSI_ISR0_PE0 PHY Error 0 **/
#define DSI_DSI_ISR0_PE0		(1 << 16)
/** DSI_DSI_ISR0_AE15 Acknowledge Error 15 **/
#define DSI_DSI_ISR0_AE15		(1 << 15)
/** DSI_DSI_ISR0_AE14 Acknowledge Error 14 **/
#define DSI_DSI_ISR0_AE14		(1 << 14)
/** DSI_DSI_ISR0_AE13 Acknowledge Error 13 **/
#define DSI_DSI_ISR0_AE13		(1 << 13)
/** DSI_DSI_ISR0_AE12 Acknowledge Error 12 **/
#define DSI_DSI_ISR0_AE12		(1 << 12)
/** DSI_DSI_ISR0_AE11 Acknowledge Error 11 **/
#define DSI_DSI_ISR0_AE11		(1 << 11)
/** DSI_DSI_ISR0_AE10 Acknowledge Error 10 **/
#define DSI_DSI_ISR0_AE10		(1 << 10)
/** DSI_DSI_ISR0_AE9 Acknowledge Error 9 **/
#define DSI_DSI_ISR0_AE9		(1 << 9)
/** DSI_DSI_ISR0_AE8 Acknowledge Error 8 **/
#define DSI_DSI_ISR0_AE8		(1 << 8)
/** DSI_DSI_ISR0_AE7 Acknowledge Error 7 **/
#define DSI_DSI_ISR0_AE7		(1 << 7)
/** DSI_DSI_ISR0_AE6 Acknowledge Error 6 **/
#define DSI_DSI_ISR0_AE6		(1 << 6)
/** DSI_DSI_ISR0_AE5 Acknowledge Error 5 **/
#define DSI_DSI_ISR0_AE5		(1 << 5)
/** DSI_DSI_ISR0_AE4 Acknowledge Error 4 **/
#define DSI_DSI_ISR0_AE4		(1 << 4)
/** DSI_DSI_ISR0_AE3 Acknowledge Error 3 **/
#define DSI_DSI_ISR0_AE3		(1 << 3)
/** DSI_DSI_ISR0_AE2 Acknowledge Error 2 **/
#define DSI_DSI_ISR0_AE2		(1 << 2)
/** DSI_DSI_ISR0_AE1 Acknowledge Error 1 **/
#define DSI_DSI_ISR0_AE1		(1 << 1)
/** DSI_DSI_ISR0_AE0 Acknowledge Error 0 **/
#define DSI_DSI_ISR0_AE0		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_isr1 DSIISR1 DSI Host Interrupt & Status Register 1
@{*/

/** DSI_DSI_ISR1_GPRXE Generic Payload Receive Error **/
#define DSI_DSI_ISR1_GPRXE		(1 << 12)
/** DSI_DSI_ISR1_GPRDE Generic Payload Read Error **/
#define DSI_DSI_ISR1_GPRDE		(1 << 11)
/** DSI_DSI_ISR1_GPTXE Generic Payload Transmit Error **/
#define DSI_DSI_ISR1_GPTXE		(1 << 10)
/** DSI_DSI_ISR1_GPWRE Generic Payload Write Error **/
#define DSI_DSI_ISR1_GPWRE		(1 << 9)
/** DSI_DSI_ISR1_GCWRE Generic Command Write Error **/
#define DSI_DSI_ISR1_GCWRE		(1 << 8)
/** DSI_DSI_ISR1_LPWRE LTDC Payload Write Error **/
#define DSI_DSI_ISR1_LPWRE		(1 << 7)
/** DSI_DSI_ISR1_EOTPE EoTp Error **/
#define DSI_DSI_ISR1_EOTPE		(1 << 6)
/** DSI_DSI_ISR1_PSE Packet Size Error **/
#define DSI_DSI_ISR1_PSE		(1 << 5)
/** DSI_DSI_ISR1_CRCE CRC Error **/
#define DSI_DSI_ISR1_CRCE		(1 << 4)
/** DSI_DSI_ISR1_ECCME ECC Multi-bit Error **/
#define DSI_DSI_ISR1_ECCME		(1 << 3)
/** DSI_DSI_ISR1_ECCSE ECC Single-bit Error **/
#define DSI_DSI_ISR1_ECCSE		(1 << 2)
/** DSI_DSI_ISR1_TOLPRX Timeout Low-Power Reception **/
#define DSI_DSI_ISR1_TOLPRX		(1 << 1)
/** DSI_DSI_ISR1_TOHSTX Timeout High-Speed Transmission **/
#define DSI_DSI_ISR1_TOHSTX		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_ier0 DSIIER0 DSI Host Interrupt Enable Register 0
@{*/

/** DSI_DSI_IER0_PE4IE PHY Error 4 Interrupt Enable **/
#define DSI_DSI_IER0_PE4IE		(1 << 20)
/** DSI_DSI_IER0_PE3IE PHY Error 3 Interrupt Enable **/
#define DSI_DSI_IER0_PE3IE		(1 << 19)
/** DSI_DSI_IER0_PE2IE PHY Error 2 Interrupt Enable **/
#define DSI_DSI_IER0_PE2IE		(1 << 18)
/** DSI_DSI_IER0_PE1IE PHY Error 1 Interrupt Enable **/
#define DSI_DSI_IER0_PE1IE		(1 << 17)
/** DSI_DSI_IER0_PE0IE PHY Error 0 Interrupt Enable **/
#define DSI_DSI_IER0_PE0IE		(1 << 16)
/** DSI_DSI_IER0_AE15IE Acknowledge Error 15 Interrupt Enable **/
#define DSI_DSI_IER0_AE15IE		(1 << 15)
/** DSI_DSI_IER0_AE14IE Acknowledge Error 14 Interrupt Enable **/
#define DSI_DSI_IER0_AE14IE		(1 << 14)
/** DSI_DSI_IER0_AE13IE Acknowledge Error 13 Interrupt Enable **/
#define DSI_DSI_IER0_AE13IE		(1 << 13)
/** DSI_DSI_IER0_AE12IE Acknowledge Error 12 Interrupt Enable **/
#define DSI_DSI_IER0_AE12IE		(1 << 12)
/** DSI_DSI_IER0_AE11IE Acknowledge Error 11 Interrupt Enable **/
#define DSI_DSI_IER0_AE11IE		(1 << 11)
/** DSI_DSI_IER0_AE10IE Acknowledge Error 10 Interrupt Enable **/
#define DSI_DSI_IER0_AE10IE		(1 << 10)
/** DSI_DSI_IER0_AE9IE Acknowledge Error 9 Interrupt Enable **/
#define DSI_DSI_IER0_AE9IE		(1 << 9)
/** DSI_DSI_IER0_AE8IE Acknowledge Error 8 Interrupt Enable **/
#define DSI_DSI_IER0_AE8IE		(1 << 8)
/** DSI_DSI_IER0_AE7IE Acknowledge Error 7 Interrupt Enable **/
#define DSI_DSI_IER0_AE7IE		(1 << 7)
/** DSI_DSI_IER0_AE6IE Acknowledge Error 6 Interrupt Enable **/
#define DSI_DSI_IER0_AE6IE		(1 << 6)
/** DSI_DSI_IER0_AE5IE Acknowledge Error 5 Interrupt Enable **/
#define DSI_DSI_IER0_AE5IE		(1 << 5)
/** DSI_DSI_IER0_AE4IE Acknowledge Error 4 Interrupt Enable **/
#define DSI_DSI_IER0_AE4IE		(1 << 4)
/** DSI_DSI_IER0_AE3IE Acknowledge Error 3 Interrupt Enable **/
#define DSI_DSI_IER0_AE3IE		(1 << 3)
/** DSI_DSI_IER0_AE2IE Acknowledge Error 2 Interrupt Enable **/
#define DSI_DSI_IER0_AE2IE		(1 << 2)
/** DSI_DSI_IER0_AE1IE Acknowledge Error 1 Interrupt Enable **/
#define DSI_DSI_IER0_AE1IE		(1 << 1)
/** DSI_DSI_IER0_AE0IE Acknowledge Error 0 Interrupt Enable **/
#define DSI_DSI_IER0_AE0IE		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_ier1 DSIIER1 DSI Host Interrupt Enable Register 1
@{*/

/** DSI_DSI_IER1_GPRXEIE Generic Payload Receive Error Interrupt Enable **/
#define DSI_DSI_IER1_GPRXEIE		(1 << 12)
/** DSI_DSI_IER1_GPRDEIE Generic Payload Read Error Interrupt Enable **/
#define DSI_DSI_IER1_GPRDEIE		(1 << 11)
/** DSI_DSI_IER1_GPTXEIE Generic Payload Transmit Error Interrupt Enable **/
#define DSI_DSI_IER1_GPTXEIE		(1 << 10)
/** DSI_DSI_IER1_GPWREIE Generic Payload Write Error Interrupt Enable **/
#define DSI_DSI_IER1_GPWREIE		(1 << 9)
/** DSI_DSI_IER1_GCWREIE Generic Command Write Error Interrupt Enable **/
#define DSI_DSI_IER1_GCWREIE		(1 << 8)
/** DSI_DSI_IER1_LPWREIE LTDC Payload Write Error Interrupt Enable **/
#define DSI_DSI_IER1_LPWREIE		(1 << 7)
/** DSI_DSI_IER1_EOTPEIE EoTp Error Interrupt Enable **/
#define DSI_DSI_IER1_EOTPEIE		(1 << 6)
/** DSI_DSI_IER1_PSEIE Packet Size Error Interrupt Enable **/
#define DSI_DSI_IER1_PSEIE		(1 << 5)
/** DSI_DSI_IER1_CRCEIE CRC Error Interrupt Enable **/
#define DSI_DSI_IER1_CRCEIE		(1 << 4)
/** DSI_DSI_IER1_ECCMEIE ECC Multi-bit Error Interrupt Enable **/
#define DSI_DSI_IER1_ECCMEIE		(1 << 3)
/** DSI_DSI_IER1_ECCSEIE ECC Single-bit Error Interrupt Enable **/
#define DSI_DSI_IER1_ECCSEIE		(1 << 2)
/** DSI_DSI_IER1_TOLPRXIE Timeout Low-Power Reception Interrupt Enable **/
#define DSI_DSI_IER1_TOLPRXIE		(1 << 1)
/** DSI_DSI_IER1_TOHSTXIE Timeout High-Speed Transmission Interrupt Enable **/
#define DSI_DSI_IER1_TOHSTXIE		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_fir0 DSIFIR0 DSI Host Force Interrupt Register 0
@{*/

/** DSI_DSI_FIR0_FPE4 Force PHY Error 4 **/
#define DSI_DSI_FIR0_FPE4		(1 << 20)
/** DSI_DSI_FIR0_FPE3 Force PHY Error 3 **/
#define DSI_DSI_FIR0_FPE3		(1 << 19)
/** DSI_DSI_FIR0_FPE2 Force PHY Error 2 **/
#define DSI_DSI_FIR0_FPE2		(1 << 18)
/** DSI_DSI_FIR0_FPE1 Force PHY Error 1 **/
#define DSI_DSI_FIR0_FPE1		(1 << 17)
/** DSI_DSI_FIR0_FPE0 Force PHY Error 0 **/
#define DSI_DSI_FIR0_FPE0		(1 << 16)
/** DSI_DSI_FIR0_FAE15 Force Acknowledge Error 15 **/
#define DSI_DSI_FIR0_FAE15		(1 << 15)
/** DSI_DSI_FIR0_FAE14 Force Acknowledge Error 14 **/
#define DSI_DSI_FIR0_FAE14		(1 << 14)
/** DSI_DSI_FIR0_FAE13 Force Acknowledge Error 13 **/
#define DSI_DSI_FIR0_FAE13		(1 << 13)
/** DSI_DSI_FIR0_FAE12 Force Acknowledge Error 12 **/
#define DSI_DSI_FIR0_FAE12		(1 << 12)
/** DSI_DSI_FIR0_FAE11 Force Acknowledge Error 11 **/
#define DSI_DSI_FIR0_FAE11		(1 << 11)
/** DSI_DSI_FIR0_FAE10 Force Acknowledge Error 10 **/
#define DSI_DSI_FIR0_FAE10		(1 << 10)
/** DSI_DSI_FIR0_FAE9 Force Acknowledge Error 9 **/
#define DSI_DSI_FIR0_FAE9		(1 << 9)
/** DSI_DSI_FIR0_FAE8 Force Acknowledge Error 8 **/
#define DSI_DSI_FIR0_FAE8		(1 << 8)
/** DSI_DSI_FIR0_FAE7 Force Acknowledge Error 7 **/
#define DSI_DSI_FIR0_FAE7		(1 << 7)
/** DSI_DSI_FIR0_FAE6 Force Acknowledge Error 6 **/
#define DSI_DSI_FIR0_FAE6		(1 << 6)
/** DSI_DSI_FIR0_FAE5 Force Acknowledge Error 5 **/
#define DSI_DSI_FIR0_FAE5		(1 << 5)
/** DSI_DSI_FIR0_FAE4 Force Acknowledge Error 4 **/
#define DSI_DSI_FIR0_FAE4		(1 << 4)
/** DSI_DSI_FIR0_FAE3 Force Acknowledge Error 3 **/
#define DSI_DSI_FIR0_FAE3		(1 << 3)
/** DSI_DSI_FIR0_FAE2 Force Acknowledge Error 2 **/
#define DSI_DSI_FIR0_FAE2		(1 << 2)
/** DSI_DSI_FIR0_FAE1 Force Acknowledge Error 1 **/
#define DSI_DSI_FIR0_FAE1		(1 << 1)
/** DSI_DSI_FIR0_FAE0 Force Acknowledge Error 0 **/
#define DSI_DSI_FIR0_FAE0		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_fir1 DSIFIR1 DSI Host Force Interrupt Register 1
@{*/

/** DSI_DSI_FIR1_FGPRXE Force Generic Payload Receive Error **/
#define DSI_DSI_FIR1_FGPRXE		(1 << 12)
/** DSI_DSI_FIR1_FGPRDE Force Generic Payload Read Error **/
#define DSI_DSI_FIR1_FGPRDE		(1 << 11)
/** DSI_DSI_FIR1_FGPTXE Force Generic Payload Transmit Error **/
#define DSI_DSI_FIR1_FGPTXE		(1 << 10)
/** DSI_DSI_FIR1_FGPWRE Force Generic Payload Write Error **/
#define DSI_DSI_FIR1_FGPWRE		(1 << 9)
/** DSI_DSI_FIR1_FGCWRE Force Generic Command Write Error **/
#define DSI_DSI_FIR1_FGCWRE		(1 << 8)
/** DSI_DSI_FIR1_FLPWRE Force LTDC Payload Write Error **/
#define DSI_DSI_FIR1_FLPWRE		(1 << 7)
/** DSI_DSI_FIR1_FEOTPE Force EoTp Error **/
#define DSI_DSI_FIR1_FEOTPE		(1 << 6)
/** DSI_DSI_FIR1_FPSE Force Packet Size Error **/
#define DSI_DSI_FIR1_FPSE		(1 << 5)
/** DSI_DSI_FIR1_FCRCE Force CRC Error **/
#define DSI_DSI_FIR1_FCRCE		(1 << 4)
/** DSI_DSI_FIR1_FECCME Force ECC Multi-bit Error **/
#define DSI_DSI_FIR1_FECCME		(1 << 3)
/** DSI_DSI_FIR1_FECCSE Force ECC Single-bit Error **/
#define DSI_DSI_FIR1_FECCSE		(1 << 2)
/** DSI_DSI_FIR1_FTOLPRX Force Timeout Low-Power Reception **/
#define DSI_DSI_FIR1_FTOLPRX		(1 << 1)
/** DSI_DSI_FIR1_FTOHSTX Force Timeout High-Speed Transmission **/
#define DSI_DSI_FIR1_FTOHSTX		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_vscr DSIVSCR DSI Host Video Shadow Control Register
@{*/

/** DSI_DSI_VSCR_UR Update Register **/
#define DSI_DSI_VSCR_UR		(1 << 8)
/** DSI_DSI_VSCR_EN Enable **/
#define DSI_DSI_VSCR_EN		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_lcvcidr DSILCVCIDR DSI Host LTDC Current VCID Register
@{*/


#define DSI_DSI_LCVCIDR_VCID_SHIFT		0
#define DSI_DSI_LCVCIDR_VCID_MASK		0x03
/** @defgroup dsi_dsi_lcvcidr_vcid VCID Virtual Channel ID
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_lcccr DSILCCCR DSI Host LTDC Current Color Coding Register
@{*/

/** DSI_DSI_LCCCR_LPE Loosely Packed Enable **/
#define DSI_DSI_LCCCR_LPE		(1 << 8)

#define DSI_DSI_LCCCR_COLC_SHIFT		0
#define DSI_DSI_LCCCR_COLC_MASK		0x0f
/** @defgroup dsi_dsi_lcccr_colc COLC Color Coding
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_lpmccr DSILPMCCR DSI Host Low-Power mode Current Configuration Register
@{*/


#define DSI_DSI_LPMCCR_LPSIZE_SHIFT		16
#define DSI_DSI_LPMCCR_LPSIZE_MASK		0xff
/** @defgroup dsi_dsi_lpmccr_lpsize LPSIZE Largest Packet Size
@{*/
/**@}*/


#define DSI_DSI_LPMCCR_VLPSIZE_SHIFT		0
#define DSI_DSI_LPMCCR_VLPSIZE_MASK		0xff
/** @defgroup dsi_dsi_lpmccr_vlpsize VLPSIZE VACT Largest Packet Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vmccr DSIVMCCR DSI Host Video mode Current Configuration Register
@{*/

/** DSI_DSI_VMCCR_LPCE Low-Power Command Enable **/
#define DSI_DSI_VMCCR_LPCE		(1 << 9)
/** DSI_DSI_VMCCR_FBTAAE Frame BTA Acknowledge Enable **/
#define DSI_DSI_VMCCR_FBTAAE		(1 << 8)
/** DSI_DSI_VMCCR_LPHFE Low-Power Horizontal Front-Porch Enable **/
#define DSI_DSI_VMCCR_LPHFE		(1 << 7)
/** DSI_DSI_VMCCR_LPHBPE Low-power Horizontal Back-Porch Enable **/
#define DSI_DSI_VMCCR_LPHBPE		(1 << 6)
/** DSI_DSI_VMCCR_LPVAE Low-Power Vertical Active Enable **/
#define DSI_DSI_VMCCR_LPVAE		(1 << 5)
/** DSI_DSI_VMCCR_LPVFPE Low-power Vertical Front-Porch Enable **/
#define DSI_DSI_VMCCR_LPVFPE		(1 << 4)
/** DSI_DSI_VMCCR_LPVBPE Low-power Vertical Back-Porch Enable **/
#define DSI_DSI_VMCCR_LPVBPE		(1 << 3)
/** DSI_DSI_VMCCR_LPVSAE Low-Power Vertical Sync time Enable **/
#define DSI_DSI_VMCCR_LPVSAE		(1 << 2)

#define DSI_DSI_VMCCR_VMT_SHIFT		0
#define DSI_DSI_VMCCR_VMT_MASK		0x03
/** @defgroup dsi_dsi_vmccr_vmt VMT Video mode Type
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vpccr DSIVPCCR DSI Host Video Packet Current Configuration Register
@{*/


#define DSI_DSI_VPCCR_VPSIZE_SHIFT		0
#define DSI_DSI_VPCCR_VPSIZE_MASK		0x3fff
/** @defgroup dsi_dsi_vpccr_vpsize VPSIZE Video Packet Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vcccr DSIVCCCR DSI Host Video Chunks Current Configuration Register
@{*/


#define DSI_DSI_VCCCR_NUMC_SHIFT		0
#define DSI_DSI_VCCCR_NUMC_MASK		0x1fff
/** @defgroup dsi_dsi_vcccr_numc NUMC Number of Chunks
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vnpccr DSIVNPCCR DSI Host Video Null Packet Current Configuration Register
@{*/


#define DSI_DSI_VNPCCR_NPSIZE_SHIFT		0
#define DSI_DSI_VNPCCR_NPSIZE_MASK		0x1fff
/** @defgroup dsi_dsi_vnpccr_npsize NPSIZE Null Packet Size
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vhsaccr DSIVHSACCR DSI Host Video HSA Current Configuration Register
@{*/


#define DSI_DSI_VHSACCR_HSA_SHIFT		0
#define DSI_DSI_VHSACCR_HSA_MASK		0xfff
/** @defgroup dsi_dsi_vhsaccr_hsa HSA Horizontal Synchronism Active duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vhbpccr DSIVHBPCCR DSI Host Video HBP Current Configuration Register
@{*/


#define DSI_DSI_VHBPCCR_HBP_SHIFT		0
#define DSI_DSI_VHBPCCR_HBP_MASK		0xfff
/** @defgroup dsi_dsi_vhbpccr_hbp HBP Horizontal Back-Porch duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vlccr DSIVLCCR DSI Host Video Line Current Configuration Register
@{*/


#define DSI_DSI_VLCCR_HLINE_SHIFT		0
#define DSI_DSI_VLCCR_HLINE_MASK		0x7fff
/** @defgroup dsi_dsi_vlccr_hline HLINE Horizontal Line duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vvsaccr DSIVVSACCR DSI Host Video VSA Current Configuration Register
@{*/


#define DSI_DSI_VVSACCR_VSA_SHIFT		0
#define DSI_DSI_VVSACCR_VSA_MASK		0x3ff
/** @defgroup dsi_dsi_vvsaccr_vsa VSA Vertical Synchronism Active duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vvbpccr DSIVVBPCCR DSI Host Video VBP Current Configuration Register
@{*/


#define DSI_DSI_VVBPCCR_VBP_SHIFT		0
#define DSI_DSI_VVBPCCR_VBP_MASK		0x3ff
/** @defgroup dsi_dsi_vvbpccr_vbp VBP Vertical Back-Porch duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vvfpccr DSIVVFPCCR DSI Host Video VFP Current Configuration Register
@{*/


#define DSI_DSI_VVFPCCR_VFP_SHIFT		0
#define DSI_DSI_VVFPCCR_VFP_MASK		0x3ff
/** @defgroup dsi_dsi_vvfpccr_vfp VFP Vertical Front-Porch duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_vvaccr DSIVVACCR DSI Host Video VA Current Configuration Register
@{*/


#define DSI_DSI_VVACCR_VA_SHIFT		0
#define DSI_DSI_VVACCR_VA_MASK		0x3fff
/** @defgroup dsi_dsi_vvaccr_va VA Vertical Active duration
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_wcfgr DSIWCFGR DSI Wrapper Configuration Register
@{*/

/** DSI_DSI_WCFGR_VSPOL VSync Polarity **/
#define DSI_DSI_WCFGR_VSPOL		(1 << 7)
/** DSI_DSI_WCFGR_AR Automatic Refresh **/
#define DSI_DSI_WCFGR_AR		(1 << 6)
/** DSI_DSI_WCFGR_TEPOL TE Polarity **/
#define DSI_DSI_WCFGR_TEPOL		(1 << 5)
/** DSI_DSI_WCFGR_TESRC TE Source **/
#define DSI_DSI_WCFGR_TESRC		(1 << 4)

#define DSI_DSI_WCFGR_COLMUX_SHIFT		1
#define DSI_DSI_WCFGR_COLMUX_MASK		0x07
/** @defgroup dsi_dsi_wcfgr_colmux COLMUX Color Multiplexing
@{*/
/**@}*/

/** DSI_DSI_WCFGR_DSIM DSI Mode **/
#define DSI_DSI_WCFGR_DSIM		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_wcr DSIWCR DSI Wrapper Control Register
@{*/

/** DSI_DSI_WCR_DSIEN DSI Enable **/
#define DSI_DSI_WCR_DSIEN		(1 << 3)
/** DSI_DSI_WCR_LTDCEN LTDC Enable **/
#define DSI_DSI_WCR_LTDCEN		(1 << 2)
/** DSI_DSI_WCR_SHTDN Shutdown **/
#define DSI_DSI_WCR_SHTDN		(1 << 1)
/** DSI_DSI_WCR_COLM Color Mode **/
#define DSI_DSI_WCR_COLM		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_wier DSIWIER DSI Wrapper Interrupt Enable Register
@{*/

/** DSI_DSI_WIER_RRIE Regulator Ready Interrupt Enable **/
#define DSI_DSI_WIER_RRIE		(1 << 13)
/** DSI_DSI_WIER_PLLUIE PLL Unlock Interrupt Enable **/
#define DSI_DSI_WIER_PLLUIE		(1 << 10)
/** DSI_DSI_WIER_PLLLIE PLL Lock Interrupt Enable **/
#define DSI_DSI_WIER_PLLLIE		(1 << 9)
/** DSI_DSI_WIER_ERIE End of Refresh Interrupt Enable **/
#define DSI_DSI_WIER_ERIE		(1 << 1)
/** DSI_DSI_WIER_TEIE Tearing Effect Interrupt Enable **/
#define DSI_DSI_WIER_TEIE		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_wisr DSIWISR DSI Wrapper Interrupt & Status Register
@{*/

/** DSI_DSI_WISR_RRIF Regulator Ready Interrupt Flag **/
#define DSI_DSI_WISR_RRIF		(1 << 13)
/** DSI_DSI_WISR_RRS Regulator Ready Status **/
#define DSI_DSI_WISR_RRS		(1 << 12)
/** DSI_DSI_WISR_PLLUIF PLL Unlock Interrupt Flag **/
#define DSI_DSI_WISR_PLLUIF		(1 << 10)
/** DSI_DSI_WISR_PLLLIF PLL Lock Interrupt Flag **/
#define DSI_DSI_WISR_PLLLIF		(1 << 9)
/** DSI_DSI_WISR_PLLLS PLL Lock Status **/
#define DSI_DSI_WISR_PLLLS		(1 << 8)
/** DSI_DSI_WISR_BUSY Busy Flag **/
#define DSI_DSI_WISR_BUSY		(1 << 2)
/** DSI_DSI_WISR_ERIF End of Refresh Interrupt Flag **/
#define DSI_DSI_WISR_ERIF		(1 << 1)
/** DSI_DSI_WISR_TEIF Tearing Effect Interrupt Flag **/
#define DSI_DSI_WISR_TEIF		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_wifcr DSIWIFCR DSI Wrapper Interrupt Flag Clear Register
@{*/

/** DSI_DSI_WIFCR_CRRIF Clear Regulator Ready Interrupt Flag **/
#define DSI_DSI_WIFCR_CRRIF		(1 << 13)
/** DSI_DSI_WIFCR_CPLLUIF Clear PLL Unlock Interrupt Flag **/
#define DSI_DSI_WIFCR_CPLLUIF		(1 << 10)
/** DSI_DSI_WIFCR_CPLLLIF Clear PLL Lock Interrupt Flag **/
#define DSI_DSI_WIFCR_CPLLLIF		(1 << 9)
/** DSI_DSI_WIFCR_CERIF Clear End of Refresh Interrupt Flag **/
#define DSI_DSI_WIFCR_CERIF		(1 << 1)
/** DSI_DSI_WIFCR_CTEIF Clear Tearing Effect Interrupt Flag **/
#define DSI_DSI_WIFCR_CTEIF		(1 << 0)

/**@}*/

/** @defgroup dsi_dsi_wpcr1 DSIWPCR1 DSI Wrapper PHY Configuration Register 1
@{*/

/** DSI_DSI_WPCR1_TCLKPOSTEN custom time for tCLK-POST Enable **/
#define DSI_DSI_WPCR1_TCLKPOSTEN		(1 << 27)
/** DSI_DSI_WPCR1_TLPXCEN custom time for tLPX for Clock lane Enable **/
#define DSI_DSI_WPCR1_TLPXCEN		(1 << 26)
/** DSI_DSI_WPCR1_THSEXITEN custom time for tHS-EXIT Enable **/
#define DSI_DSI_WPCR1_THSEXITEN		(1 << 25)
/** DSI_DSI_WPCR1_TLPXDEN custom time for tLPX for Data lanes Enable **/
#define DSI_DSI_WPCR1_TLPXDEN		(1 << 24)
/** DSI_DSI_WPCR1_THSZEROEN custom time for tHS-ZERO Enable **/
#define DSI_DSI_WPCR1_THSZEROEN		(1 << 23)
/** DSI_DSI_WPCR1_THSTRAILEN custom time for tHS-TRAIL Enable **/
#define DSI_DSI_WPCR1_THSTRAILEN		(1 << 22)
/** DSI_DSI_WPCR1_THSPREPEN custom time for tHS-PREPARE Enable **/
#define DSI_DSI_WPCR1_THSPREPEN		(1 << 21)
/** DSI_DSI_WPCR1_TCLKZEROEN custom time for tCLK-ZERO Enable **/
#define DSI_DSI_WPCR1_TCLKZEROEN		(1 << 20)
/** DSI_DSI_WPCR1_TCLKPREPEN custom time for tCLK-PREPARE Enable **/
#define DSI_DSI_WPCR1_TCLKPREPEN		(1 << 19)
/** DSI_DSI_WPCR1_PDEN Pull-Down Enable **/
#define DSI_DSI_WPCR1_PDEN		(1 << 18)
/** DSI_DSI_WPCR1_TDDL Turn Disable Data Lanes **/
#define DSI_DSI_WPCR1_TDDL		(1 << 16)
/** DSI_DSI_WPCR1_CDOFFDL Contention Detection OFF on Data Lanes **/
#define DSI_DSI_WPCR1_CDOFFDL		(1 << 14)
/** DSI_DSI_WPCR1_FTXSMDL Force in TX Stop Mode the Data Lanes **/
#define DSI_DSI_WPCR1_FTXSMDL		(1 << 13)
/** DSI_DSI_WPCR1_FTXSMCL Force in TX Stop Mode the Clock Lane **/
#define DSI_DSI_WPCR1_FTXSMCL		(1 << 12)
/** DSI_DSI_WPCR1_HSIDL1 Invert the High-Speed data signal on Data Lane 1 **/
#define DSI_DSI_WPCR1_HSIDL1		(1 << 11)
/** DSI_DSI_WPCR1_HSIDL0 Invert the Hight-Speed data signal on Data Lane 0 **/
#define DSI_DSI_WPCR1_HSIDL0		(1 << 10)
/** DSI_DSI_WPCR1_HSICL Invert Hight-Speed data signal on Clock Lane **/
#define DSI_DSI_WPCR1_HSICL		(1 << 9)
/** DSI_DSI_WPCR1_SWDL1 Swap Data Lane 1 pins **/
#define DSI_DSI_WPCR1_SWDL1		(1 << 8)
/** DSI_DSI_WPCR1_SWDL0 Swap Data Lane 0 pins **/
#define DSI_DSI_WPCR1_SWDL0		(1 << 7)
/** DSI_DSI_WPCR1_SWCL Swap Clock Lane pins **/
#define DSI_DSI_WPCR1_SWCL		(1 << 6)

#define DSI_DSI_WPCR1_UIX4_SHIFT		0
#define DSI_DSI_WPCR1_UIX4_MASK		0x3f
/** @defgroup dsi_dsi_wpcr1_uix4 UIX4 Unit Interval multiplied by 4
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_wpcr2 DSIWPCR2 DSI Wrapper PHY Configuration Register 2
@{*/


#define DSI_DSI_WPCR2_LPRXFT_SHIFT		25
#define DSI_DSI_WPCR2_LPRXFT_MASK		0x03
/** @defgroup dsi_dsi_wpcr2_lprxft LPRXFT Low-Power RX low-pass Filtering Tuning
@{*/
/**@}*/

/** DSI_DSI_WPCR2_FLPRXLPM Forces LP Receiver in Low-Power Mode **/
#define DSI_DSI_WPCR2_FLPRXLPM		(1 << 22)

#define DSI_DSI_WPCR2_HSTXSRCDL_SHIFT		18
#define DSI_DSI_WPCR2_HSTXSRCDL_MASK		0x03
/** @defgroup dsi_dsi_wpcr2_hstxsrcdl HSTXSRCDL High-Speed Transmission Slew Rate Control on Data Lanes
@{*/
/**@}*/


#define DSI_DSI_WPCR2_HSTXSRCCL_SHIFT		16
#define DSI_DSI_WPCR2_HSTXSRCCL_MASK		0x03
/** @defgroup dsi_dsi_wpcr2_hstxsrccl HSTXSRCCL High-Speed Transmission Slew Rate Control on Clock Lane
@{*/
/**@}*/

/** DSI_DSI_WPCR2_SDCC SDD Control **/
#define DSI_DSI_WPCR2_SDCC		(1 << 12)

#define DSI_DSI_WPCR2_LPSRDL_SHIFT		8
#define DSI_DSI_WPCR2_LPSRDL_MASK		0x03
/** @defgroup dsi_dsi_wpcr2_lpsrdl LPSRDL Low-Power transmission Slew Rate Compensation on Data Lanes
@{*/
/**@}*/


#define DSI_DSI_WPCR2_LPSRCL_SHIFT		6
#define DSI_DSI_WPCR2_LPSRCL_MASK		0x03
/** @defgroup dsi_dsi_wpcr2_lpsrcl LPSRCL Low-Power transmission Slew Rate Compensation on Clock Lane
@{*/
/**@}*/


#define DSI_DSI_WPCR2_HSTXDLL_SHIFT		2
#define DSI_DSI_WPCR2_HSTXDLL_MASK		0x03
/** @defgroup dsi_dsi_wpcr2_hstxdll HSTXDLL High-Speed Transmission Delay on Data Lanes
@{*/
/**@}*/


#define DSI_DSI_WPCR2_HSTXDCL_SHIFT		0
#define DSI_DSI_WPCR2_HSTXDCL_MASK		0x03
/** @defgroup dsi_dsi_wpcr2_hstxdcl HSTXDCL High-Speed Transmission Delay on Clock Lane
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_wpcr3 DSIWPCR3 DSI Wrapper PHY Configuration Register 3
@{*/


#define DSI_DSI_WPCR3_THSTRAIL_SHIFT		24
#define DSI_DSI_WPCR3_THSTRAIL_MASK		0xff
/** @defgroup dsi_dsi_wpcr3_thstrail THSTRAIL tHSTRAIL
@{*/
/**@}*/


#define DSI_DSI_WPCR3_THSPREP_SHIFT		16
#define DSI_DSI_WPCR3_THSPREP_MASK		0xff
/** @defgroup dsi_dsi_wpcr3_thsprep THSPREP tHS-PREPARE
@{*/
/**@}*/


#define DSI_DSI_WPCR3_TCLKZEO_SHIFT		8
#define DSI_DSI_WPCR3_TCLKZEO_MASK		0xff
/** @defgroup dsi_dsi_wpcr3_tclkzeo TCLKZEO tCLK-ZERO
@{*/
/**@}*/


#define DSI_DSI_WPCR3_TCLKPREP_SHIFT		0
#define DSI_DSI_WPCR3_TCLKPREP_MASK		0xff
/** @defgroup dsi_dsi_wpcr3_tclkprep TCLKPREP tCLK-PREPARE
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_wpcr4 DSIWPCR4 DSI_WPCR4
@{*/


#define DSI_DSI_WPCR4_TLPXC_SHIFT		24
#define DSI_DSI_WPCR4_TLPXC_MASK		0xff
/** @defgroup dsi_dsi_wpcr4_tlpxc TLPXC tLPXC for Clock lane
@{*/
/**@}*/


#define DSI_DSI_WPCR4_THSEXIT_SHIFT		16
#define DSI_DSI_WPCR4_THSEXIT_MASK		0xff
/** @defgroup dsi_dsi_wpcr4_thsexit THSEXIT tHSEXIT
@{*/
/**@}*/


#define DSI_DSI_WPCR4_TLPXD_SHIFT		8
#define DSI_DSI_WPCR4_TLPXD_MASK		0xff
/** @defgroup dsi_dsi_wpcr4_tlpxd TLPXD tLPX for Data lanes
@{*/
/**@}*/


#define DSI_DSI_WPCR4_THSZERO_SHIFT		0
#define DSI_DSI_WPCR4_THSZERO_MASK		0xff
/** @defgroup dsi_dsi_wpcr4_thszero THSZERO tHS-ZERO
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_wpcr5 DSIWPCR5 DSI Wrapper PHY Configuration Register 5
@{*/


#define DSI_DSI_WPCR5_THSZERO_SHIFT		0
#define DSI_DSI_WPCR5_THSZERO_MASK		0xff
/** @defgroup dsi_dsi_wpcr5_thszero THSZERO tCLK-POST
@{*/
/**@}*/


/**@}*/

/** @defgroup dsi_dsi_wrpcr DSIWRPCR DSI Wrapper Regulator and PLL Control Register
@{*/

/** DSI_DSI_WRPCR_REGEN Regulator Enable **/
#define DSI_DSI_WRPCR_REGEN		(1 << 24)

#define DSI_DSI_WRPCR_ODF_SHIFT		16
#define DSI_DSI_WRPCR_ODF_MASK		0x03
/** @defgroup dsi_dsi_wrpcr_odf ODF PLL Output Division Factor
@{*/
/**@}*/


#define DSI_DSI_WRPCR_IDF_SHIFT		11
#define DSI_DSI_WRPCR_IDF_MASK		0x0f
/** @defgroup dsi_dsi_wrpcr_idf IDF PLL Input Division Factor
@{*/
/**@}*/


#define DSI_DSI_WRPCR_NDIV_SHIFT		2
#define DSI_DSI_WRPCR_NDIV_MASK		0x7f
/** @defgroup dsi_dsi_wrpcr_ndiv NDIV PLL Loop Division Factor
@{*/
/**@}*/

/** DSI_DSI_WRPCR_PLLEN PLL Enable **/
#define DSI_DSI_WRPCR_PLLEN		(1 << 0)

/**@}*/

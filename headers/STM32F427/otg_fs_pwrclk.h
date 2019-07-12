#pragma once 

/* --- OTG_FS_PWRCLK: USB on the go full speed ---------------------- */

/** @defgroup otg_fs_pwrclk_registers USB on the go full speed Register
@{*/

/** OTG_FS_PWRCLK_FS_PCGCCTL OTG_FS power and clock gating control register (OTG_FS_PCGCCTL) **/
#define OTG_FS_PWRCLK_FS_PCGCCTL			MMIO32(OTG_FS_PWRCLK_BASE + 0x00)

/**@}*/


/** @defgroup otg_fs_pwrclk_fs_pcgcctl FSPCGCCTL OTG_FS power and clock gating control register (OTG_FS_PCGCCTL)
@{*/

/** OTG_FS_PWRCLK_FS_PCGCCTL_PHYSUSP PHY Suspended **/
#define OTG_FS_PWRCLK_FS_PCGCCTL_PHYSUSP		(1 << 4)
/** OTG_FS_PWRCLK_FS_PCGCCTL_GATEHCLK Gate HCLK **/
#define OTG_FS_PWRCLK_FS_PCGCCTL_GATEHCLK		(1 << 1)
/** OTG_FS_PWRCLK_FS_PCGCCTL_STPPCLK Stop PHY clock **/
#define OTG_FS_PWRCLK_FS_PCGCCTL_STPPCLK		(1 << 0)

/**@}*/

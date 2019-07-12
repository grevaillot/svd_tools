#pragma once 

/* --- USB_OTG_PWRCLK: USB on the go full speed --------------------- */

/** @defgroup usb_otg_pwrclk_registers USB on the go full speed Register
@{*/

/** USB_OTG_PWRCLK_FS_PCGCCTL OTG_FS power and clock gating control register (OTG_FS_PCGCCTL) **/
#define USB_OTG_PWRCLK_FS_PCGCCTL			MMIO32(USB_OTG_PWRCLK_BASE + 0x00)

/**@}*/


/** @defgroup usb_otg_pwrclk_fs_pcgcctl FSPCGCCTL OTG_FS power and clock gating control register (OTG_FS_PCGCCTL)
@{*/

/** USB_OTG_PWRCLK_FS_PCGCCTL_PHYSUSP PHY Suspended **/
#define USB_OTG_PWRCLK_FS_PCGCCTL_PHYSUSP		(1 << 4)
/** USB_OTG_PWRCLK_FS_PCGCCTL_GATEHCLK Gate HCLK **/
#define USB_OTG_PWRCLK_FS_PCGCCTL_GATEHCLK		(1 << 1)
/** USB_OTG_PWRCLK_FS_PCGCCTL_STPPCLK Stop PHY clock **/
#define USB_OTG_PWRCLK_FS_PCGCCTL_STPPCLK		(1 << 0)

/**@}*/

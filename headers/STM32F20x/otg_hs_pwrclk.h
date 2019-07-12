#pragma once 

/* --- OTG_HS_PWRCLK: USB on the go high speed ---------------------- */

/** @defgroup otg_hs_pwrclk_registers USB on the go high speed Register
@{*/

/** OTG_HS_PWRCLK_OTG_HS_PCGCR Power and clock gating control register **/
#define OTG_HS_PWRCLK_OTG_HS_PCGCR			MMIO32(OTG_HS_PWRCLK_BASE + 0x00)

/**@}*/


/** @defgroup otg_hs_pwrclk_otg_hs_pcgcr OTGHSPCGCR Power and clock gating control register
@{*/

/** OTG_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP PHY suspended **/
#define OTG_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP		(1 << 4)
/** OTG_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK Gate HCLK **/
#define OTG_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK		(1 << 1)
/** OTG_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK Stop PHY clock **/
#define OTG_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK		(1 << 0)

/**@}*/

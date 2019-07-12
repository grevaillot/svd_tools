#pragma once 

/* --- OTG2_HS_PWRCLK: USB 1 on the go high speed ------------------- */

/** @defgroup otg2_hs_pwrclk_registers USB 1 on the go high speed Register
@{*/

/** OTG2_HS_PWRCLK_OTG_HS_PCGCR Power and clock gating control register **/
#define OTG2_HS_PWRCLK_OTG_HS_PCGCR			MMIO32(OTG2_HS_PWRCLK_BASE + 0x00)

/**@}*/


/** @defgroup otg2_hs_pwrclk_otg_hs_pcgcr OTGHSPCGCR Power and clock gating control register
@{*/

/** OTG2_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP PHY suspended **/
#define OTG2_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP		(1 << 4)
/** OTG2_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK Gate HCLK **/
#define OTG2_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK		(1 << 1)
/** OTG2_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK Stop PHY clock **/
#define OTG2_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK		(1 << 0)

/**@}*/

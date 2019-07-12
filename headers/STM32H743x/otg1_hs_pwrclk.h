#pragma once 

/* --- OTG1_HS_PWRCLK: USB 1 on the go high speed ------------------- */

/** @defgroup otg1_hs_pwrclk_registers USB 1 on the go high speed Register
@{*/

/** OTG1_HS_PWRCLK_OTG_HS_PCGCR Power and clock gating control register **/
#define OTG1_HS_PWRCLK_OTG_HS_PCGCR			MMIO32(OTG1_HS_PWRCLK_BASE + 0x00)

/**@}*/


/** @defgroup otg1_hs_pwrclk_otg_hs_pcgcr OTGHSPCGCR Power and clock gating control register
@{*/

/** OTG1_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP PHY suspended **/
#define OTG1_HS_PWRCLK_OTG_HS_PCGCR_PHYSUSP		(1 << 4)
/** OTG1_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK Gate HCLK **/
#define OTG1_HS_PWRCLK_OTG_HS_PCGCR_GATEHCLK		(1 << 1)
/** OTG1_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK Stop PHY clock **/
#define OTG1_HS_PWRCLK_OTG_HS_PCGCR_STPPCLK		(1 << 0)

/**@}*/

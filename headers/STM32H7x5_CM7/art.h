#pragma once 

/* --- ART: accelerator - control register (ART_CTR) ---------------- */

/** @defgroup art_registers accelerator - control register
      (ART_CTR) Register
@{*/

/** ART_CTR control register **/
#define ART_CTR			MMIO32(ART_BASE + 0x00)

/**@}*/


/** @defgroup art_ctr CTR control register
@{*/


#define ART_CTR_PCACHEADDR_SHIFT		8
#define ART_CTR_PCACHEADDR_MASK		0xfff
/** @defgroup art_ctr_pcacheaddr PCACHEADDR Cacheable page index
@{*/
/**@}*/

/** ART_CTR_EN Cache enable **/
#define ART_CTR_EN		(1 << 0)

/**@}*/

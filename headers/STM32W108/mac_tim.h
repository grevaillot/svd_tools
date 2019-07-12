#pragma once 

/* --- MAC_TIM: MAC timer ------------------------------------------- */

/** @defgroup mac_tim_registers MAC timer Register
@{*/

/** MAC_TIM_MACTMR_CNTR MACTMR counter register **/
#define MAC_TIM_MACTMR_CNTR			MMIO32(MAC_TIM_BASE + 0x00)
/** MAC_TIM_MACTMR_CR MACTMR configuration register **/
#define MAC_TIM_MACTMR_CR			MMIO32(MAC_TIM_BASE + 0x54)

/**@}*/


/** @defgroup mac_tim_mactmr_cntr MACTMRCNTR MACTMR counter register
@{*/


#define MAC_TIM_MACTMR_CNTR_CNT_SHIFT		0
#define MAC_TIM_MACTMR_CNTR_CNT_MASK		0xfffff
/** @defgroup mac_tim_mactmr_cntr_cnt CNT MAC timer count
@{*/
/**@}*/


/**@}*/

/** @defgroup mac_tim_mactmr_cr MACTMRCR MACTMR configuration register
@{*/

/** MAC_TIM_MACTMR_CR_RST MAC timer reset **/
#define MAC_TIM_MACTMR_CR_RST		(1 << 1)
/** MAC_TIM_MACTMR_CR_EN MAC timer enable **/
#define MAC_TIM_MACTMR_CR_EN		(1 << 0)

/**@}*/

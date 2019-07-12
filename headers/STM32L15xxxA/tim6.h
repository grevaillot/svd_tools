#pragma once 

/* --- TIM6: Basic timers ------------------------------------------- */

/** @defgroup tim6_registers Basic timers Register
@{*/

/** TIM6_CR1 TIM6 control register 1 **/
#define TIM6_CR1			MMIO32(TIM6_BASE + 0x00)
/** TIM6_CR2 TIM6 control register 2 **/
#define TIM6_CR2			MMIO32(TIM6_BASE + 0x04)
/** TIM6_DIER TIM6 DMA/Interrupt enable register **/
#define TIM6_DIER			MMIO32(TIM6_BASE + 0x0c)
/** TIM6_SR TIM6 status register **/
#define TIM6_SR			MMIO32(TIM6_BASE + 0x10)
/** TIM6_EGR TIM6 event generation register **/
#define TIM6_EGR			MMIO32(TIM6_BASE + 0x14)
/** TIM6_CNT TIM6 counter **/
#define TIM6_CNT			MMIO32(TIM6_BASE + 0x24)
/** TIM6_PSC TIM6 prescaler **/
#define TIM6_PSC			MMIO32(TIM6_BASE + 0x28)
/** TIM6_ARR TIM6 auto-reload register **/
#define TIM6_ARR			MMIO32(TIM6_BASE + 0x2c)

/**@}*/


/** @defgroup tim6_cr1 CR1 TIM6 control register 1
@{*/

/** TIM6_CR1_ARPE Auto-reload preload enable **/
#define TIM6_CR1_ARPE		(1 << 7)
/** TIM6_CR1_OPM One-pulse mode **/
#define TIM6_CR1_OPM		(1 << 3)
/** TIM6_CR1_URS Update request source **/
#define TIM6_CR1_URS		(1 << 2)
/** TIM6_CR1_UDIS Update disable **/
#define TIM6_CR1_UDIS		(1 << 1)
/** TIM6_CR1_CEN Counter enable **/
#define TIM6_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim6_cr2 CR2 TIM6 control register 2
@{*/


#define TIM6_CR2_MMS_SHIFT		4
#define TIM6_CR2_MMS_MASK		0x07
/** @defgroup tim6_cr2_mms MMS Master mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim6_dier DIER TIM6 DMA/Interrupt enable register
@{*/

/** TIM6_DIER_UDE Update DMA request enable **/
#define TIM6_DIER_UDE		(1 << 8)
/** TIM6_DIER_UIE Update interrupt enable **/
#define TIM6_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim6_sr SR TIM6 status register
@{*/

/** TIM6_SR_UIF Update interrupt flag **/
#define TIM6_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim6_egr EGR TIM6 event generation register
@{*/

/** TIM6_EGR_UG Update generation **/
#define TIM6_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim6_cnt CNT TIM6 counter
@{*/


#define TIM6_CNT_CNT_SHIFT		0
#define TIM6_CNT_CNT_MASK		0xffff
/** @defgroup tim6_cnt_cnt CNT CNT
@{*/
/**@}*/


/**@}*/

/** @defgroup tim6_psc PSC TIM6 prescaler
@{*/


#define TIM6_PSC_PSC_SHIFT		0
#define TIM6_PSC_PSC_MASK		0xffff
/** @defgroup tim6_psc_psc PSC Prescaler valueThe counter clock frequency CK_CNT is equal to fCK_PSC / (PSC[15:0] + 1).
@{*/
/**@}*/


/**@}*/

/** @defgroup tim6_arr ARR TIM6 auto-reload register
@{*/


#define TIM6_ARR_ARR_SHIFT		0
#define TIM6_ARR_ARR_MASK		0xffff
/** @defgroup tim6_arr_arr ARR Prescaler value
@{*/
/**@}*/


/**@}*/
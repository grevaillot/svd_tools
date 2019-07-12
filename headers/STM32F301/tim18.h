#pragma once 

/* --- TIM18: Basic timers ------------------------------------------ */

/** @defgroup tim18_registers Basic timers Register
@{*/

/** TIM18_CR1 control register 1 **/
#define TIM18_CR1			MMIO32(TIM18_BASE + 0x00)
/** TIM18_CR2 control register 2 **/
#define TIM18_CR2			MMIO32(TIM18_BASE + 0x04)
/** TIM18_DIER DMA/Interrupt enable register **/
#define TIM18_DIER			MMIO32(TIM18_BASE + 0x0c)
/** TIM18_SR status register **/
#define TIM18_SR			MMIO32(TIM18_BASE + 0x10)
/** TIM18_EGR event generation register **/
#define TIM18_EGR			MMIO32(TIM18_BASE + 0x14)
/** TIM18_CNT counter **/
#define TIM18_CNT			MMIO32(TIM18_BASE + 0x24)
/** TIM18_PSC prescaler **/
#define TIM18_PSC			MMIO32(TIM18_BASE + 0x28)
/** TIM18_ARR auto-reload register **/
#define TIM18_ARR			MMIO32(TIM18_BASE + 0x2c)

/**@}*/


/** @defgroup tim18_cr1 CR1 control register 1
@{*/

/** TIM18_CR1_ARPE Auto-reload preload enable **/
#define TIM18_CR1_ARPE		(1 << 7)
/** TIM18_CR1_OPM One-pulse mode **/
#define TIM18_CR1_OPM		(1 << 3)
/** TIM18_CR1_URS Update request source **/
#define TIM18_CR1_URS		(1 << 2)
/** TIM18_CR1_UDIS Update disable **/
#define TIM18_CR1_UDIS		(1 << 1)
/** TIM18_CR1_CEN Counter enable **/
#define TIM18_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim18_cr2 CR2 control register 2
@{*/


#define TIM18_CR2_MMS_SHIFT		4
#define TIM18_CR2_MMS_MASK		0x07
/** @defgroup tim18_cr2_mms MMS Master mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim18_dier DIER DMA/Interrupt enable register
@{*/

/** TIM18_DIER_UDE Update DMA request enable **/
#define TIM18_DIER_UDE		(1 << 8)
/** TIM18_DIER_UIE Update interrupt enable **/
#define TIM18_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim18_sr SR status register
@{*/

/** TIM18_SR_UIF Update interrupt flag **/
#define TIM18_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim18_egr EGR event generation register
@{*/

/** TIM18_EGR_UG Update generation **/
#define TIM18_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim18_cnt CNT counter
@{*/


#define TIM18_CNT_CNT_SHIFT		0
#define TIM18_CNT_CNT_MASK		0xffff
/** @defgroup tim18_cnt_cnt CNT Low counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim18_psc PSC prescaler
@{*/


#define TIM18_PSC_PSC_SHIFT		0
#define TIM18_PSC_PSC_MASK		0xffff
/** @defgroup tim18_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim18_arr ARR auto-reload register
@{*/


#define TIM18_ARR_ARR_SHIFT		0
#define TIM18_ARR_ARR_MASK		0xffff
/** @defgroup tim18_arr_arr ARR Low Auto-reload value
@{*/
/**@}*/


/**@}*/

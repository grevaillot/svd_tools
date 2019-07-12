#pragma once 

/* --- TIM7: Basic timers ------------------------------------------- */

/** @defgroup tim7_registers Basic timers Register
@{*/

/** TIM7_CR1 control register 1 **/
#define TIM7_CR1			MMIO32(TIM7_BASE + 0x00)
/** TIM7_CR2 control register 2 **/
#define TIM7_CR2			MMIO32(TIM7_BASE + 0x04)
/** TIM7_DIER DMA/Interrupt enable register **/
#define TIM7_DIER			MMIO32(TIM7_BASE + 0x0c)
/** TIM7_SR status register **/
#define TIM7_SR			MMIO32(TIM7_BASE + 0x10)
/** TIM7_EGR event generation register **/
#define TIM7_EGR			MMIO32(TIM7_BASE + 0x14)
/** TIM7_CNT counter **/
#define TIM7_CNT			MMIO32(TIM7_BASE + 0x24)
/** TIM7_PSC prescaler **/
#define TIM7_PSC			MMIO32(TIM7_BASE + 0x28)
/** TIM7_ARR auto-reload register **/
#define TIM7_ARR			MMIO32(TIM7_BASE + 0x2c)

/**@}*/


/** @defgroup tim7_cr1 CR1 control register 1
@{*/

/** TIM7_CR1_UIFREMAP UIF status bit remapping **/
#define TIM7_CR1_UIFREMAP		(1 << 11)
/** TIM7_CR1_ARPE Auto-reload preload enable **/
#define TIM7_CR1_ARPE		(1 << 7)
/** TIM7_CR1_OPM One-pulse mode **/
#define TIM7_CR1_OPM		(1 << 3)
/** TIM7_CR1_URS Update request source **/
#define TIM7_CR1_URS		(1 << 2)
/** TIM7_CR1_UDIS Update disable **/
#define TIM7_CR1_UDIS		(1 << 1)
/** TIM7_CR1_CEN Counter enable **/
#define TIM7_CR1_CEN		(1 << 0)

/**@}*/

/** @defgroup tim7_cr2 CR2 control register 2
@{*/


#define TIM7_CR2_MMS_SHIFT		4
#define TIM7_CR2_MMS_MASK		0x07
/** @defgroup tim7_cr2_mms MMS Master mode selection
@{*/
/**@}*/


/**@}*/

/** @defgroup tim7_dier DIER DMA/Interrupt enable register
@{*/

/** TIM7_DIER_UDE Update DMA request enable **/
#define TIM7_DIER_UDE		(1 << 8)
/** TIM7_DIER_UIE Update interrupt enable **/
#define TIM7_DIER_UIE		(1 << 0)

/**@}*/

/** @defgroup tim7_sr SR status register
@{*/

/** TIM7_SR_UIF Update interrupt flag **/
#define TIM7_SR_UIF		(1 << 0)

/**@}*/

/** @defgroup tim7_egr EGR event generation register
@{*/

/** TIM7_EGR_UG Update generation **/
#define TIM7_EGR_UG		(1 << 0)

/**@}*/

/** @defgroup tim7_cnt CNT counter
@{*/

/** TIM7_CNT_UIFCPY UIF Copy **/
#define TIM7_CNT_UIFCPY		(1 << 31)

#define TIM7_CNT_CNT_SHIFT		0
#define TIM7_CNT_CNT_MASK		0xffff
/** @defgroup tim7_cnt_cnt CNT Low counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim7_psc PSC prescaler
@{*/


#define TIM7_PSC_PSC_SHIFT		0
#define TIM7_PSC_PSC_MASK		0xffff
/** @defgroup tim7_psc_psc PSC Prescaler value
@{*/
/**@}*/


/**@}*/

/** @defgroup tim7_arr ARR auto-reload register
@{*/


#define TIM7_ARR_ARR_SHIFT		0
#define TIM7_ARR_ARR_MASK		0xffff
/** @defgroup tim7_arr_arr ARR Low Auto-reload value
@{*/
/**@}*/


/**@}*/

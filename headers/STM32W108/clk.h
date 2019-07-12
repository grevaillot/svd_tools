#pragma once 

/* --- CLK: Clock --------------------------------------------------- */

/** @defgroup clk_registers Clock Register
@{*/

/** CLK_CLK_SLEEPCR Sleep timer control register **/
#define CLK_CLK_SLEEPCR			MMIO32(CLK_BASE + 0x00)
/** CLK_CLK_LSI10KCR LSI Clock (10KHz) control register **/
#define CLK_CLK_LSI10KCR			MMIO32(CLK_BASE + 0x04)
/** CLK_CLK_LSI1KCR LSI Clock (1KHz) control register **/
#define CLK_CLK_LSI1KCR			MMIO32(CLK_BASE + 0x08)
/** CLK_CLK_HSECR1 HSE Clock (24MHz) control register 1 **/
#define CLK_CLK_HSECR1			MMIO32(CLK_BASE + 0x3ffc)
/** CLK_CLK_HSICR HSI Clock (12MHz) trim register **/
#define CLK_CLK_HSICR			MMIO32(CLK_BASE + 0x4000)
/** CLK_CLK_PERIODCR Clock period control register **/
#define CLK_CLK_PERIODCR			MMIO32(CLK_BASE + 0x4008)
/** CLK_CLK_PERIODSR Clock period status register **/
#define CLK_CLK_PERIODSR			MMIO32(CLK_BASE + 0x400c)
/** CLK_CLK_DITHERCR Clock dither control register **/
#define CLK_CLK_DITHERCR			MMIO32(CLK_BASE + 0x4010)
/** CLK_CLK_HSECR2 HSE Clock (24MHz) control register 2 **/
#define CLK_CLK_HSECR2			MMIO32(CLK_BASE + 0x4014)
/** CLK_CLK_CPUCR Clock source select register **/
#define CLK_CLK_CPUCR			MMIO32(CLK_BASE + 0x4018)

/**@}*/


/** @defgroup clk_clk_sleepcr CLKSLEEPCR Sleep timer control register
@{*/

/** CLK_CLK_SLEEPCR_LSI10KEN Enables 10kHz internal RC during deep **/
#define CLK_CLK_SLEEPCR_LSI10KEN		(1 << 1)
/** CLK_CLK_SLEEPCR_LSEEN Enables 32kHz external XTAL **/
#define CLK_CLK_SLEEPCR_LSEEN		(1 << 0)

/**@}*/

/** @defgroup clk_clk_lsi10kcr CLKLSI10KCR LSI Clock (10KHz) control register
@{*/


#define CLK_CLK_LSI10KCR_TUNE_SHIFT		0
#define CLK_CLK_LSI10KCR_TUNE_MASK		0x0f
/** @defgroup clk_clk_lsi10kcr_tune TUNE Tune value for clkrc
@{*/
/**@}*/


/**@}*/

/** @defgroup clk_clk_lsi1kcr CLKLSI1KCR LSI Clock (1KHz) control register
@{*/


#define CLK_CLK_LSI1KCR_CALINT_SHIFT		11
#define CLK_CLK_LSI1KCR_CALINT_MASK		0x7fff
/** @defgroup clk_clk_lsi1kcr_calint CALINT Divider value integer portion
@{*/
/**@}*/


#define CLK_CLK_LSI1KCR_CLKFRAC_SHIFT		0
#define CLK_CLK_LSI1KCR_CLKFRAC_MASK		0x7ff
/** @defgroup clk_clk_lsi1kcr_clkfrac CLKFRAC Divider value fractional portion
@{*/
/**@}*/


/**@}*/

/** @defgroup clk_clk_hsecr1 CLKHSECR1 HSE Clock (24MHz) control register 1
@{*/


#define CLK_CLK_HSECR1_BIASTRIM_SHIFT		0
#define CLK_CLK_HSECR1_BIASTRIM_MASK		0x0f
/** @defgroup clk_clk_hsecr1_biastrim BIASTRIM Bias trim setting for 24MHz oscillator
@{*/
/**@}*/


/**@}*/

/** @defgroup clk_clk_hsicr CLKHSICR HSI Clock (12MHz) trim register
@{*/


#define CLK_CLK_HSICR_TUNE_SHIFT		0
#define CLK_CLK_HSICR_TUNE_MASK		0x1f
/** @defgroup clk_clk_hsicr_tune TUNE Frequency trim setting for HF RC oscillator
@{*/
/**@}*/


/**@}*/

/** @defgroup clk_clk_periodcr CLKPERIODCR Clock period control register
@{*/


#define CLK_CLK_PERIODCR_MODE_SHIFT		0
#define CLK_CLK_PERIODCR_MODE_MASK		0x03
/** @defgroup clk_clk_periodcr_mode MODE Sets clock to be measured by CLK_PERIOD
@{*/
/**@}*/


/**@}*/

/** @defgroup clk_clk_periodsr CLKPERIODSR Clock period status register
@{*/


#define CLK_CLK_PERIODSR_PERIOD_SHIFT		0
#define CLK_CLK_PERIODSR_PERIOD_MASK		0xffff
/** @defgroup clk_clk_periodsr_period PERIOD Clock period measurement
@{*/
/**@}*/


/**@}*/

/** @defgroup clk_clk_dithercr CLKDITHERCR Clock dither control register
@{*/

/** CLK_CLK_DITHERCR_DIS Dither disable **/
#define CLK_CLK_DITHERCR_DIS		(1 << 0)

/**@}*/

/** @defgroup clk_clk_hsecr2 CLKHSECR2 HSE Clock (24MHz) control register 2
@{*/

/** CLK_CLK_HSECR2_EN MHz crystal oscillator is main clock **/
#define CLK_CLK_HSECR2_EN		(1 << 1)
/** CLK_CLK_HSECR2_SW1 OSCHF/XTAL is selected **/
#define CLK_CLK_HSECR2_SW1		(1 << 0)

/**@}*/

/** @defgroup clk_clk_cpucr CLKCPUCR Clock source select register
@{*/

/** CLK_CLK_CPUCR_SW2 12MHz/24MHz is selected **/
#define CLK_CLK_CPUCR_SW2		(1 << 0)

/**@}*/

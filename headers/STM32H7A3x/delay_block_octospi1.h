#pragma once 

/* --- Delay_Block_OCTOSPI1: DELAY_Block_SDMMC1 --------------------- */

/** @defgroup delay_block_octospi1_registers DELAY_Block_SDMMC1 Register
@{*/

/** Delay_Block_OCTOSPI1_CR DLYB control register **/
#define Delay_Block_OCTOSPI1_CR			MMIO32(Delay_Block_OCTOSPI1_BASE + 0x00)
/** Delay_Block_OCTOSPI1_CFGR DLYB configuration register **/
#define Delay_Block_OCTOSPI1_CFGR			MMIO32(Delay_Block_OCTOSPI1_BASE + 0x04)

/**@}*/


/** @defgroup delay_block_octospi1_cr CR DLYB control register
@{*/

/** Delay_Block_OCTOSPI1_CR_SEN Sampler length enable bit **/
#define Delay_Block_OCTOSPI1_CR_SEN		(1 << 1)
/** Delay_Block_OCTOSPI1_CR_DEN Delay block enable bit **/
#define Delay_Block_OCTOSPI1_CR_DEN		(1 << 0)

/**@}*/

/** @defgroup delay_block_octospi1_cfgr CFGR DLYB configuration register
@{*/

/** Delay_Block_OCTOSPI1_CFGR_LNGF Length valid flag **/
#define Delay_Block_OCTOSPI1_CFGR_LNGF		(1 << 31)

#define Delay_Block_OCTOSPI1_CFGR_LNG_SHIFT		16
#define Delay_Block_OCTOSPI1_CFGR_LNG_MASK		0xfff
/** @defgroup delay_block_octospi1_cfgr_lng LNG Delay line length value
@{*/
/**@}*/


#define Delay_Block_OCTOSPI1_CFGR_UNIT_SHIFT		8
#define Delay_Block_OCTOSPI1_CFGR_UNIT_MASK		0x7f
/** @defgroup delay_block_octospi1_cfgr_unit UNIT Delay Defines the delay of a Unit delay cell
@{*/
/**@}*/


#define Delay_Block_OCTOSPI1_CFGR_SEL_SHIFT		0
#define Delay_Block_OCTOSPI1_CFGR_SEL_MASK		0x0f
/** @defgroup delay_block_octospi1_cfgr_sel SEL Select the phase for the Output clock
@{*/
/**@}*/


/**@}*/

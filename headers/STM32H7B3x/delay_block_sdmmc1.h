#pragma once 

/* --- DELAY_Block_SDMMC1: DELAY_Block_SDMMC1 ----------------------- */

/** @defgroup delay_block_sdmmc1_registers DELAY_Block_SDMMC1 Register
@{*/

/** DELAY_Block_SDMMC1_CR DLYB control register **/
#define DELAY_Block_SDMMC1_CR			MMIO32(DELAY_Block_SDMMC1_BASE + 0x00)
/** DELAY_Block_SDMMC1_CFGR DLYB configuration register **/
#define DELAY_Block_SDMMC1_CFGR			MMIO32(DELAY_Block_SDMMC1_BASE + 0x04)

/**@}*/


/** @defgroup delay_block_sdmmc1_cr CR DLYB control register
@{*/

/** DELAY_Block_SDMMC1_CR_SEN Sampler length enable bit **/
#define DELAY_Block_SDMMC1_CR_SEN		(1 << 1)
/** DELAY_Block_SDMMC1_CR_DEN Delay block enable bit **/
#define DELAY_Block_SDMMC1_CR_DEN		(1 << 0)

/**@}*/

/** @defgroup delay_block_sdmmc1_cfgr CFGR DLYB configuration register
@{*/

/** DELAY_Block_SDMMC1_CFGR_LNGF Length valid flag **/
#define DELAY_Block_SDMMC1_CFGR_LNGF		(1 << 31)

#define DELAY_Block_SDMMC1_CFGR_LNG_SHIFT		16
#define DELAY_Block_SDMMC1_CFGR_LNG_MASK		0xfff
/** @defgroup delay_block_sdmmc1_cfgr_lng LNG Delay line length value
@{*/
/**@}*/


#define DELAY_Block_SDMMC1_CFGR_UNIT_SHIFT		8
#define DELAY_Block_SDMMC1_CFGR_UNIT_MASK		0x7f
/** @defgroup delay_block_sdmmc1_cfgr_unit UNIT Delay Defines the delay of a Unit delay cell
@{*/
/**@}*/


#define DELAY_Block_SDMMC1_CFGR_SEL_SHIFT		0
#define DELAY_Block_SDMMC1_CFGR_SEL_MASK		0x0f
/** @defgroup delay_block_sdmmc1_cfgr_sel SEL Select the phase for the Output clock
@{*/
/**@}*/


/**@}*/

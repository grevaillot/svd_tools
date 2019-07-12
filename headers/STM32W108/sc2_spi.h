#pragma once 

/* --- SC2_SPI: Serial controller 2 (Serial peripheral interface) --- */

/** @defgroup sc2_spi_registers Serial controller 2 (Serial peripheral
      interface) Register
@{*/

/** SC2_SPI_SC2_SPISR Serial controller SPI status register **/
#define SC2_SPI_SC2_SPISR			MMIO32(SC2_SPI_BASE + 0x00)
/** SC2_SPI_SC2_SPICR Serial controller SPI control register **/
#define SC2_SPI_SC2_SPICR			MMIO32(SC2_SPI_BASE + 0x18)

/**@}*/


/** @defgroup sc2_spi_sc2_spisr SC2SPISR Serial controller SPI status register
@{*/

/** SC2_SPI_SC2_SPISR_IDLE IDLE **/
#define SC2_SPI_SC2_SPISR_IDLE		(1 << 3)
/** SC2_SPI_SC2_SPISR_TXE TXE **/
#define SC2_SPI_SC2_SPISR_TXE		(1 << 2)
/** SC2_SPI_SC2_SPISR_RXNE RXNE **/
#define SC2_SPI_SC2_SPISR_RXNE		(1 << 1)
/** SC2_SPI_SC2_SPISR_OVF OVF **/
#define SC2_SPI_SC2_SPISR_OVF		(1 << 0)

/**@}*/

/** @defgroup sc2_spi_sc2_spicr SC2SPICR Serial controller SPI control register
@{*/

/** SC2_SPI_SC2_SPICR_RXMODE RXMODE **/
#define SC2_SPI_SC2_SPICR_RXMODE		(1 << 5)
/** SC2_SPI_SC2_SPICR_MSTR MSTR **/
#define SC2_SPI_SC2_SPICR_MSTR		(1 << 4)
/** SC2_SPI_SC2_SPICR_RPTEN RPTEN **/
#define SC2_SPI_SC2_SPICR_RPTEN		(1 << 3)
/** SC2_SPI_SC2_SPICR_LSBFIRST LSBFIRST **/
#define SC2_SPI_SC2_SPICR_LSBFIRST		(1 << 2)
/** SC2_SPI_SC2_SPICR_CPHA CPHA **/
#define SC2_SPI_SC2_SPICR_CPHA		(1 << 1)
/** SC2_SPI_SC2_SPICR_CPOL CPOL **/
#define SC2_SPI_SC2_SPICR_CPOL		(1 << 0)

/**@}*/

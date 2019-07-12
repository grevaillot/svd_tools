#pragma once 

/* --- SC1_SPI: Serial controller 1 (Serial peripheral interface) --- */

/** @defgroup sc1_spi_registers Serial controller 1 (Serial peripheral
      interface) Register
@{*/

/** SC1_SPI_SC1_SPISR Serial controller SPI status register **/
#define SC1_SPI_SC1_SPISR			MMIO32(SC1_SPI_BASE + 0x00)
/** SC1_SPI_SC1_SPICR Serial controller SPI control register **/
#define SC1_SPI_SC1_SPICR			MMIO32(SC1_SPI_BASE + 0x18)

/**@}*/


/** @defgroup sc1_spi_sc1_spisr SC1SPISR Serial controller SPI status register
@{*/

/** SC1_SPI_SC1_SPISR_IDLE IDLE **/
#define SC1_SPI_SC1_SPISR_IDLE		(1 << 3)
/** SC1_SPI_SC1_SPISR_TXE TXE **/
#define SC1_SPI_SC1_SPISR_TXE		(1 << 2)
/** SC1_SPI_SC1_SPISR_RXNE RXNE **/
#define SC1_SPI_SC1_SPISR_RXNE		(1 << 1)
/** SC1_SPI_SC1_SPISR_OVF OVF **/
#define SC1_SPI_SC1_SPISR_OVF		(1 << 0)

/**@}*/

/** @defgroup sc1_spi_sc1_spicr SC1SPICR Serial controller SPI control register
@{*/

/** SC1_SPI_SC1_SPICR_RXMODE RXMODE **/
#define SC1_SPI_SC1_SPICR_RXMODE		(1 << 5)
/** SC1_SPI_SC1_SPICR_MSTR MSTR **/
#define SC1_SPI_SC1_SPICR_MSTR		(1 << 4)
/** SC1_SPI_SC1_SPICR_RPTEN RPTEN **/
#define SC1_SPI_SC1_SPICR_RPTEN		(1 << 3)
/** SC1_SPI_SC1_SPICR_LSBFIRST LSBFIRST **/
#define SC1_SPI_SC1_SPICR_LSBFIRST		(1 << 2)
/** SC1_SPI_SC1_SPICR_CPHA CPHA **/
#define SC1_SPI_SC1_SPICR_CPHA		(1 << 1)
/** SC1_SPI_SC1_SPICR_CPOL CPOL **/
#define SC1_SPI_SC1_SPICR_CPOL		(1 << 0)

/**@}*/

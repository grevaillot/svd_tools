#pragma once 

/* --- SC1_UART: Serial controller 1 (Universal Asynchronous Receiver/Transmitter)  */

/** @defgroup sc1_uart_registers Serial controller 1 (Universal Asynchronous
      Receiver/Transmitter) Register
@{*/

/** SC1_UART_SC1_UARTSR Serial controller UART status register **/
#define SC1_UART_SC1_UARTSR			MMIO32(SC1_UART_BASE + 0x00)
/** SC1_UART_SC1_UARTCR Serial controller UART control register **/
#define SC1_UART_SC1_UARTCR			MMIO32(SC1_UART_BASE + 0x14)
/** SC1_UART_SC1_UARTBRR1 Serial controller UART baud rate register 1 **/
#define SC1_UART_SC1_UARTBRR1			MMIO32(SC1_UART_BASE + 0x20)
/** SC1_UART_SC1_UARTBRR2 Serial controller UART baud rate register 2 **/
#define SC1_UART_SC1_UARTBRR2			MMIO32(SC1_UART_BASE + 0x24)

/**@}*/


/** @defgroup sc1_uart_sc1_uartsr SC1UARTSR Serial controller UART status register
@{*/

/** SC1_UART_SC1_UARTSR_IDLE IDLE **/
#define SC1_UART_SC1_UARTSR_IDLE		(1 << 6)
/** SC1_UART_SC1_UARTSR_PE PE **/
#define SC1_UART_SC1_UARTSR_PE		(1 << 5)
/** SC1_UART_SC1_UARTSR_FE FE **/
#define SC1_UART_SC1_UARTSR_FE		(1 << 4)
/** SC1_UART_SC1_UARTSR_OVR OVR **/
#define SC1_UART_SC1_UARTSR_OVR		(1 << 3)
/** SC1_UART_SC1_UARTSR_TXE TXE **/
#define SC1_UART_SC1_UARTSR_TXE		(1 << 2)
/** SC1_UART_SC1_UARTSR_RXNE RXNE **/
#define SC1_UART_SC1_UARTSR_RXNE		(1 << 1)
/** SC1_UART_SC1_UARTSR_CTS CTS **/
#define SC1_UART_SC1_UARTSR_CTS		(1 << 0)

/**@}*/

/** @defgroup sc1_uart_sc1_uartcr SC1UARTCR Serial controller UART control register
@{*/

/** SC1_UART_SC1_UARTCR_AHFCE AHFCE **/
#define SC1_UART_SC1_UARTCR_AHFCE		(1 << 6)
/** SC1_UART_SC1_UARTCR_HFCE HFCE **/
#define SC1_UART_SC1_UARTCR_HFCE		(1 << 5)
/** SC1_UART_SC1_UARTCR_PS PS **/
#define SC1_UART_SC1_UARTCR_PS		(1 << 4)
/** SC1_UART_SC1_UARTCR_PCE PCE **/
#define SC1_UART_SC1_UARTCR_PCE		(1 << 3)
/** SC1_UART_SC1_UARTCR_STOP STOP **/
#define SC1_UART_SC1_UARTCR_STOP		(1 << 2)
/** SC1_UART_SC1_UARTCR_M M **/
#define SC1_UART_SC1_UARTCR_M		(1 << 1)
/** SC1_UART_SC1_UARTCR_nRTS nRTS **/
#define SC1_UART_SC1_UARTCR_nRTS		(1 << 0)

/**@}*/

/** @defgroup sc1_uart_sc1_uartbrr1 SC1UARTBRR1 Serial controller UART baud rate register 1
@{*/


#define SC1_UART_SC1_UARTBRR1_N_SHIFT		0
#define SC1_UART_SC1_UARTBRR1_N_MASK		0xffff
/** @defgroup sc1_uart_sc1_uartbrr1_n N N
@{*/
/**@}*/


/**@}*/

/** @defgroup sc1_uart_sc1_uartbrr2 SC1UARTBRR2 Serial controller UART baud rate register 2
@{*/

/** SC1_UART_SC1_UARTBRR2_F F **/
#define SC1_UART_SC1_UARTBRR2_F		(1 << 0)

/**@}*/

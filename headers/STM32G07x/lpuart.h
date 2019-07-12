#pragma once 

/* --- LPUART: Universal synchronous asynchronous receiver transmitter  */

/** @defgroup lpuart_registers Universal synchronous asynchronous receiver
      transmitter Register
@{*/

/** LPUART_CR1 Control register 1 **/
#define LPUART_CR1			MMIO32(LPUART_BASE + 0x00)
/** LPUART_CR2 Control register 2 **/
#define LPUART_CR2			MMIO32(LPUART_BASE + 0x04)
/** LPUART_CR3 Control register 3 **/
#define LPUART_CR3			MMIO32(LPUART_BASE + 0x08)
/** LPUART_BRR Baud rate register **/
#define LPUART_BRR			MMIO32(LPUART_BASE + 0x0c)
/** LPUART_RQR Request register **/
#define LPUART_RQR			MMIO32(LPUART_BASE + 0x18)
/** LPUART_ISR Interrupt & status register **/
#define LPUART_ISR			MMIO32(LPUART_BASE + 0x1c)
/** LPUART_ICR Interrupt flag clear register **/
#define LPUART_ICR			MMIO32(LPUART_BASE + 0x20)
/** LPUART_RDR Receive data register **/
#define LPUART_RDR			MMIO32(LPUART_BASE + 0x24)
/** LPUART_TDR Transmit data register **/
#define LPUART_TDR			MMIO32(LPUART_BASE + 0x28)
/** LPUART_PRESC Prescaler register **/
#define LPUART_PRESC			MMIO32(LPUART_BASE + 0x2c)
/** LPUART_HWCFGR2 LPUART Hardware Configuration register 2 **/
#define LPUART_HWCFGR2			MMIO32(LPUART_BASE + 0x3ec)
/** LPUART_HWCFGR1 LPUART Hardware Configuration register 1 **/
#define LPUART_HWCFGR1			MMIO32(LPUART_BASE + 0x3f0)
/** LPUART_VERR EXTI IP Version register **/
#define LPUART_VERR			MMIO32(LPUART_BASE + 0x3f4)
/** LPUART_IPIDR EXTI Identification register **/
#define LPUART_IPIDR			MMIO32(LPUART_BASE + 0x3f8)
/** LPUART_SIDR EXTI Size ID register **/
#define LPUART_SIDR			MMIO32(LPUART_BASE + 0x3fc)

/**@}*/


/** @defgroup lpuart_cr1 CR1 Control register 1
@{*/

/** LPUART_CR1_RXFFIE RXFIFO Full interrupt enable **/
#define LPUART_CR1_RXFFIE		(1 << 31)
/** LPUART_CR1_TXFEIE TXFIFO empty interrupt enable **/
#define LPUART_CR1_TXFEIE		(1 << 30)
/** LPUART_CR1_FIFOEN FIFO mode enable **/
#define LPUART_CR1_FIFOEN		(1 << 29)
/** LPUART_CR1_M1 Word length **/
#define LPUART_CR1_M1		(1 << 28)

#define LPUART_CR1_DEAT_SHIFT		21
#define LPUART_CR1_DEAT_MASK		0x1f
/** @defgroup lpuart_cr1_deat DEAT DEAT0
@{*/
/**@}*/


#define LPUART_CR1_DEDT0_SHIFT		16
#define LPUART_CR1_DEDT0_MASK		0x1f
/** @defgroup lpuart_cr1_dedt0 DEDT0 DEDT0
@{*/
/**@}*/

/** LPUART_CR1_CMIE Character match interrupt enable **/
#define LPUART_CR1_CMIE		(1 << 14)
/** LPUART_CR1_MME Mute mode enable **/
#define LPUART_CR1_MME		(1 << 13)
/** LPUART_CR1_M0 Word length **/
#define LPUART_CR1_M0		(1 << 12)
/** LPUART_CR1_WAKE Receiver wakeup method **/
#define LPUART_CR1_WAKE		(1 << 11)
/** LPUART_CR1_PCE Parity control enable **/
#define LPUART_CR1_PCE		(1 << 10)
/** LPUART_CR1_PS Parity selection **/
#define LPUART_CR1_PS		(1 << 9)
/** LPUART_CR1_PEIE PE interrupt enable **/
#define LPUART_CR1_PEIE		(1 << 8)
/** LPUART_CR1_TXEIE interrupt enable **/
#define LPUART_CR1_TXEIE		(1 << 7)
/** LPUART_CR1_TCIE Transmission complete interrupt enable **/
#define LPUART_CR1_TCIE		(1 << 6)
/** LPUART_CR1_RXNEIE RXNE interrupt enable **/
#define LPUART_CR1_RXNEIE		(1 << 5)
/** LPUART_CR1_IDLEIE IDLE interrupt enable **/
#define LPUART_CR1_IDLEIE		(1 << 4)
/** LPUART_CR1_TE Transmitter enable **/
#define LPUART_CR1_TE		(1 << 3)
/** LPUART_CR1_RE Receiver enable **/
#define LPUART_CR1_RE		(1 << 2)
/** LPUART_CR1_UESM USART enable in Stop mode **/
#define LPUART_CR1_UESM		(1 << 1)
/** LPUART_CR1_UE USART enable **/
#define LPUART_CR1_UE		(1 << 0)

/**@}*/

/** @defgroup lpuart_cr2 CR2 Control register 2
@{*/


#define LPUART_CR2_ADD4_7_SHIFT		28
#define LPUART_CR2_ADD4_7_MASK		0x0f
/** @defgroup lpuart_cr2_add4_7 ADD47 Address of the USART node
@{*/
/**@}*/


#define LPUART_CR2_ADD0_3_SHIFT		24
#define LPUART_CR2_ADD0_3_MASK		0x0f
/** @defgroup lpuart_cr2_add0_3 ADD03 Address of the USART node
@{*/
/**@}*/

/** LPUART_CR2_MSBFIRST Most significant bit first **/
#define LPUART_CR2_MSBFIRST		(1 << 19)
/** LPUART_CR2_TAINV Binary data inversion **/
#define LPUART_CR2_TAINV		(1 << 18)
/** LPUART_CR2_TXINV TX pin active level inversion **/
#define LPUART_CR2_TXINV		(1 << 17)
/** LPUART_CR2_RXINV RX pin active level inversion **/
#define LPUART_CR2_RXINV		(1 << 16)
/** LPUART_CR2_SWAP Swap TX/RX pins **/
#define LPUART_CR2_SWAP		(1 << 15)

#define LPUART_CR2_STOP_SHIFT		12
#define LPUART_CR2_STOP_MASK		0x03
/** @defgroup lpuart_cr2_stop STOP STOP bits
@{*/
/**@}*/

/** LPUART_CR2_ADDM7 7-bit Address Detection/4-bit Address Detection **/
#define LPUART_CR2_ADDM7		(1 << 4)

/**@}*/

/** @defgroup lpuart_cr3 CR3 Control register 3
@{*/


#define LPUART_CR3_TXFTCFG_SHIFT		29
#define LPUART_CR3_TXFTCFG_MASK		0x07
/** @defgroup lpuart_cr3_txftcfg TXFTCFG TXFIFO threshold configuration
@{*/
/**@}*/

/** LPUART_CR3_RXFTIE RXFIFO threshold interrupt enable **/
#define LPUART_CR3_RXFTIE		(1 << 28)

#define LPUART_CR3_RXFTCFG_SHIFT		25
#define LPUART_CR3_RXFTCFG_MASK		0x07
/** @defgroup lpuart_cr3_rxftcfg RXFTCFG Receive FIFO threshold configuration
@{*/
/**@}*/

/** LPUART_CR3_TXFTIE threshold interrupt enable **/
#define LPUART_CR3_TXFTIE		(1 << 23)
/** LPUART_CR3_WUFIE Wakeup from Stop mode interrupt enable **/
#define LPUART_CR3_WUFIE		(1 << 22)

#define LPUART_CR3_WUS_SHIFT		20
#define LPUART_CR3_WUS_MASK		0x03
/** @defgroup lpuart_cr3_wus WUS Wakeup from Stop mode interrupt flag selection
@{*/
/**@}*/

/** LPUART_CR3_DEP Driver enable polarity selection **/
#define LPUART_CR3_DEP		(1 << 15)
/** LPUART_CR3_DEM Driver enable mode **/
#define LPUART_CR3_DEM		(1 << 14)
/** LPUART_CR3_DDRE DMA Disable on Reception Error **/
#define LPUART_CR3_DDRE		(1 << 13)
/** LPUART_CR3_OVRDIS Overrun Disable **/
#define LPUART_CR3_OVRDIS		(1 << 12)
/** LPUART_CR3_CTSIE CTS interrupt enable **/
#define LPUART_CR3_CTSIE		(1 << 10)
/** LPUART_CR3_CTSE CTS enable **/
#define LPUART_CR3_CTSE		(1 << 9)
/** LPUART_CR3_RTSE RTS enable **/
#define LPUART_CR3_RTSE		(1 << 8)
/** LPUART_CR3_DMAT DMA enable transmitter **/
#define LPUART_CR3_DMAT		(1 << 7)
/** LPUART_CR3_DMAR DMA enable receiver **/
#define LPUART_CR3_DMAR		(1 << 6)
/** LPUART_CR3_HDSEL Half-duplex selection **/
#define LPUART_CR3_HDSEL		(1 << 3)
/** LPUART_CR3_EIE Error interrupt enable **/
#define LPUART_CR3_EIE		(1 << 0)

/**@}*/

/** @defgroup lpuart_brr BRR Baud rate register
@{*/


#define LPUART_BRR_BRR_SHIFT		0
#define LPUART_BRR_BRR_MASK		0xfffff
/** @defgroup lpuart_brr_brr BRR BRR
@{*/
/**@}*/


/**@}*/

/** @defgroup lpuart_rqr RQR Request register
@{*/

/** LPUART_RQR_TXFRQ Transmit data flush request **/
#define LPUART_RQR_TXFRQ		(1 << 4)
/** LPUART_RQR_RXFRQ Receive data flush request **/
#define LPUART_RQR_RXFRQ		(1 << 3)
/** LPUART_RQR_MMRQ Mute mode request **/
#define LPUART_RQR_MMRQ		(1 << 2)
/** LPUART_RQR_SBKRQ Send break request **/
#define LPUART_RQR_SBKRQ		(1 << 1)
/** LPUART_RQR_ABRRQ Auto baud rate request **/
#define LPUART_RQR_ABRRQ		(1 << 0)

/**@}*/

/** @defgroup lpuart_isr ISR Interrupt & status register
@{*/

/** LPUART_ISR_TXFT TXFIFO threshold flag **/
#define LPUART_ISR_TXFT		(1 << 27)
/** LPUART_ISR_RXFT RXFIFO threshold flag **/
#define LPUART_ISR_RXFT		(1 << 26)
/** LPUART_ISR_RXFF RXFIFO Full **/
#define LPUART_ISR_RXFF		(1 << 24)
/** LPUART_ISR_TXFE TXFIFO Empty **/
#define LPUART_ISR_TXFE		(1 << 23)
/** LPUART_ISR_REACK REACK **/
#define LPUART_ISR_REACK		(1 << 22)
/** LPUART_ISR_TEACK TEACK **/
#define LPUART_ISR_TEACK		(1 << 21)
/** LPUART_ISR_WUF WUF **/
#define LPUART_ISR_WUF		(1 << 20)
/** LPUART_ISR_RWU RWU **/
#define LPUART_ISR_RWU		(1 << 19)
/** LPUART_ISR_SBKF SBKF **/
#define LPUART_ISR_SBKF		(1 << 18)
/** LPUART_ISR_CMF CMF **/
#define LPUART_ISR_CMF		(1 << 17)
/** LPUART_ISR_BUSY BUSY **/
#define LPUART_ISR_BUSY		(1 << 16)
/** LPUART_ISR_CTS CTS **/
#define LPUART_ISR_CTS		(1 << 10)
/** LPUART_ISR_CTSIF CTSIF **/
#define LPUART_ISR_CTSIF		(1 << 9)
/** LPUART_ISR_TXE TXE **/
#define LPUART_ISR_TXE		(1 << 7)
/** LPUART_ISR_TC TC **/
#define LPUART_ISR_TC		(1 << 6)
/** LPUART_ISR_RXNE RXNE **/
#define LPUART_ISR_RXNE		(1 << 5)
/** LPUART_ISR_IDLE IDLE **/
#define LPUART_ISR_IDLE		(1 << 4)
/** LPUART_ISR_ORE ORE **/
#define LPUART_ISR_ORE		(1 << 3)
/** LPUART_ISR_NF NF **/
#define LPUART_ISR_NF		(1 << 2)
/** LPUART_ISR_FE FE **/
#define LPUART_ISR_FE		(1 << 1)
/** LPUART_ISR_PE PE **/
#define LPUART_ISR_PE		(1 << 0)

/**@}*/

/** @defgroup lpuart_icr ICR Interrupt flag clear register
@{*/

/** LPUART_ICR_WUCF Wakeup from Stop mode clear flag **/
#define LPUART_ICR_WUCF		(1 << 20)
/** LPUART_ICR_CMCF Character match clear flag **/
#define LPUART_ICR_CMCF		(1 << 17)
/** LPUART_ICR_CTSCF CTS clear flag **/
#define LPUART_ICR_CTSCF		(1 << 9)
/** LPUART_ICR_TCCF Transmission complete clear flag **/
#define LPUART_ICR_TCCF		(1 << 6)
/** LPUART_ICR_IDLECF Idle line detected clear flag **/
#define LPUART_ICR_IDLECF		(1 << 4)
/** LPUART_ICR_ORECF Overrun error clear flag **/
#define LPUART_ICR_ORECF		(1 << 3)
/** LPUART_ICR_NCF Noise detected clear flag **/
#define LPUART_ICR_NCF		(1 << 2)
/** LPUART_ICR_FECF Framing error clear flag **/
#define LPUART_ICR_FECF		(1 << 1)
/** LPUART_ICR_PECF Parity error clear flag **/
#define LPUART_ICR_PECF		(1 << 0)

/**@}*/

/** @defgroup lpuart_rdr RDR Receive data register
@{*/


#define LPUART_RDR_RDR_SHIFT		0
#define LPUART_RDR_RDR_MASK		0x1ff
/** @defgroup lpuart_rdr_rdr RDR Receive data value
@{*/
/**@}*/


/**@}*/

/** @defgroup lpuart_tdr TDR Transmit data register
@{*/


#define LPUART_TDR_TDR_SHIFT		0
#define LPUART_TDR_TDR_MASK		0x1ff
/** @defgroup lpuart_tdr_tdr TDR Transmit data value
@{*/
/**@}*/


/**@}*/

/** @defgroup lpuart_presc PRESC Prescaler register
@{*/


#define LPUART_PRESC_PRESCALER_SHIFT		0
#define LPUART_PRESC_PRESCALER_MASK		0x0f
/** @defgroup lpuart_presc_prescaler PRESCALER Clock prescaler
@{*/
/**@}*/


/**@}*/

/** @defgroup lpuart_hwcfgr2 HWCFGR2 LPUART Hardware Configuration register 2
@{*/


#define LPUART_HWCFGR2_CFG2_SHIFT		4
#define LPUART_HWCFGR2_CFG2_MASK		0x0f
/** @defgroup lpuart_hwcfgr2_cfg2 CFG2 LUART hardware configuration 2
@{*/
/**@}*/


#define LPUART_HWCFGR2_CFG1_SHIFT		0
#define LPUART_HWCFGR2_CFG1_MASK		0x0f
/** @defgroup lpuart_hwcfgr2_cfg1 CFG1 LUART hardware configuration 1
@{*/
/**@}*/


/**@}*/

/** @defgroup lpuart_hwcfgr1 HWCFGR1 LPUART Hardware Configuration register 1
@{*/


#define LPUART_HWCFGR1_CFG8_SHIFT		28
#define LPUART_HWCFGR1_CFG8_MASK		0x0f
/** @defgroup lpuart_hwcfgr1_cfg8 CFG8 LUART hardware configuration 2
@{*/
/**@}*/


#define LPUART_HWCFGR1_CFG7_SHIFT		24
#define LPUART_HWCFGR1_CFG7_MASK		0x0f
/** @defgroup lpuart_hwcfgr1_cfg7 CFG7 LUART hardware configuration 2
@{*/
/**@}*/


#define LPUART_HWCFGR1_CFG6_SHIFT		20
#define LPUART_HWCFGR1_CFG6_MASK		0x0f
/** @defgroup lpuart_hwcfgr1_cfg6 CFG6 LUART hardware configuration 2
@{*/
/**@}*/


#define LPUART_HWCFGR1_CFG5_SHIFT		16
#define LPUART_HWCFGR1_CFG5_MASK		0x0f
/** @defgroup lpuart_hwcfgr1_cfg5 CFG5 LUART hardware configuration 2
@{*/
/**@}*/


#define LPUART_HWCFGR1_CFG4_SHIFT		12
#define LPUART_HWCFGR1_CFG4_MASK		0x0f
/** @defgroup lpuart_hwcfgr1_cfg4 CFG4 LUART hardware configuration 2
@{*/
/**@}*/


#define LPUART_HWCFGR1_CFG3_SHIFT		8
#define LPUART_HWCFGR1_CFG3_MASK		0x0f
/** @defgroup lpuart_hwcfgr1_cfg3 CFG3 LUART hardware configuration 1
@{*/
/**@}*/


#define LPUART_HWCFGR1_CFG2_SHIFT		4
#define LPUART_HWCFGR1_CFG2_MASK		0x0f
/** @defgroup lpuart_hwcfgr1_cfg2 CFG2 LUART hardware configuration 2
@{*/
/**@}*/


#define LPUART_HWCFGR1_CFG1_SHIFT		0
#define LPUART_HWCFGR1_CFG1_MASK		0x0f
/** @defgroup lpuart_hwcfgr1_cfg1 CFG1 LUART hardware configuration 1
@{*/
/**@}*/


/**@}*/

/** @defgroup lpuart_verr VERR EXTI IP Version register
@{*/


#define LPUART_VERR_MAJREV_SHIFT		4
#define LPUART_VERR_MAJREV_MASK		0x0f
/** @defgroup lpuart_verr_majrev MAJREV Major Revision number
@{*/
/**@}*/


#define LPUART_VERR_MINREV_SHIFT		0
#define LPUART_VERR_MINREV_MASK		0x0f
/** @defgroup lpuart_verr_minrev MINREV Minor Revision number
@{*/
/**@}*/


/**@}*/

/** @defgroup lpuart_ipidr IPIDR EXTI Identification register
@{*/


#define LPUART_IPIDR_IPID_SHIFT		0
#define LPUART_IPIDR_IPID_MASK		0xffffffff
/** @defgroup lpuart_ipidr_ipid IPID IP Identification
@{*/
/**@}*/


/**@}*/

/** @defgroup lpuart_sidr SIDR EXTI Size ID register
@{*/


#define LPUART_SIDR_SID_SHIFT		0
#define LPUART_SIDR_SID_MASK		0xffffffff
/** @defgroup lpuart_sidr_sid SID Size Identification
@{*/
/**@}*/


/**@}*/

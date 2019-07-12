#pragma once 

/* --- SDIO: Secure digital input/output interface ------------------ */

/** @defgroup sdio_registers Secure digital input/output
      interface Register
@{*/

/** SDIO_POWER power control register **/
#define SDIO_POWER			MMIO32(SDIO_BASE + 0x00)
/** SDIO_CLKCR SDI clock control register **/
#define SDIO_CLKCR			MMIO32(SDIO_BASE + 0x04)
/** SDIO_ARG argument register **/
#define SDIO_ARG			MMIO32(SDIO_BASE + 0x08)
/** SDIO_CMD command register **/
#define SDIO_CMD			MMIO32(SDIO_BASE + 0x0c)
/** SDIO_RESPCMD command response register **/
#define SDIO_RESPCMD			MMIO32(SDIO_BASE + 0x10)
/** SDIO_RESP1 response 1..4 register **/
#define SDIO_RESP1			MMIO32(SDIO_BASE + 0x14)
/** SDIO_RESP2 response 1..4 register **/
#define SDIO_RESP2			MMIO32(SDIO_BASE + 0x18)
/** SDIO_RESP3 response 1..4 register **/
#define SDIO_RESP3			MMIO32(SDIO_BASE + 0x1c)
/** SDIO_RESP4 response 1..4 register **/
#define SDIO_RESP4			MMIO32(SDIO_BASE + 0x20)
/** SDIO_DTIMER data timer register **/
#define SDIO_DTIMER			MMIO32(SDIO_BASE + 0x24)
/** SDIO_DLEN data length register **/
#define SDIO_DLEN			MMIO32(SDIO_BASE + 0x28)
/** SDIO_DCTRL data control register **/
#define SDIO_DCTRL			MMIO32(SDIO_BASE + 0x2c)
/** SDIO_DCOUNT data counter register **/
#define SDIO_DCOUNT			MMIO32(SDIO_BASE + 0x30)
/** SDIO_STA status register **/
#define SDIO_STA			MMIO32(SDIO_BASE + 0x34)
/** SDIO_ICR interrupt clear register **/
#define SDIO_ICR			MMIO32(SDIO_BASE + 0x38)
/** SDIO_MASK mask register **/
#define SDIO_MASK			MMIO32(SDIO_BASE + 0x3c)
/** SDIO_FIFOCNT FIFO counter register **/
#define SDIO_FIFOCNT			MMIO32(SDIO_BASE + 0x48)
/** SDIO_FIFO data FIFO register **/
#define SDIO_FIFO			MMIO32(SDIO_BASE + 0x80)

/**@}*/


/** @defgroup sdio_power POWER power control register
@{*/


#define SDIO_POWER_PWRCTRL_SHIFT		0
#define SDIO_POWER_PWRCTRL_MASK		0x03
/** @defgroup sdio_power_pwrctrl PWRCTRL Power supply control bits.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_clkcr CLKCR SDI clock control register
@{*/

/** SDIO_CLKCR_HWFC_EN HW Flow Control enable **/
#define SDIO_CLKCR_HWFC_EN		(1 << 14)
/** SDIO_CLKCR_NEGEDGE SDIO_CK dephasing selection bit **/
#define SDIO_CLKCR_NEGEDGE		(1 << 13)

#define SDIO_CLKCR_WIDBUS_SHIFT		11
#define SDIO_CLKCR_WIDBUS_MASK		0x03
/** @defgroup sdio_clkcr_widbus WIDBUS Wide bus mode enable bit
@{*/
/**@}*/

/** SDIO_CLKCR_BYPASS Clock divider bypass enable bit **/
#define SDIO_CLKCR_BYPASS		(1 << 10)
/** SDIO_CLKCR_PWRSAV Power saving configuration bit **/
#define SDIO_CLKCR_PWRSAV		(1 << 9)
/** SDIO_CLKCR_CLKEN Clock enable bit **/
#define SDIO_CLKCR_CLKEN		(1 << 8)

#define SDIO_CLKCR_CLKDIV_SHIFT		0
#define SDIO_CLKCR_CLKDIV_MASK		0xff
/** @defgroup sdio_clkcr_clkdiv CLKDIV Clock divide factor
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_arg ARG argument register
@{*/


#define SDIO_ARG_CMDARG_SHIFT		0
#define SDIO_ARG_CMDARG_MASK		0xffffffff
/** @defgroup sdio_arg_cmdarg CMDARG Command argument
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_cmd CMD command register
@{*/

/** SDIO_CMD_CE_ATACMD CE-ATA command **/
#define SDIO_CMD_CE_ATACMD		(1 << 14)
/** SDIO_CMD_nIEN not Interrupt Enable **/
#define SDIO_CMD_nIEN		(1 << 13)
/** SDIO_CMD_ENCMDcompl Enable CMD completion **/
#define SDIO_CMD_ENCMDcompl		(1 << 12)
/** SDIO_CMD_SDIOSuspend SD I/O suspend command **/
#define SDIO_CMD_SDIOSuspend		(1 << 11)
/** SDIO_CMD_CPSMEN Command path state machine (CPSM) Enable bit **/
#define SDIO_CMD_CPSMEN		(1 << 10)
/** SDIO_CMD_WAITPEND CPSM Waits for ends of data transfer (CmdPend internal signal). **/
#define SDIO_CMD_WAITPEND		(1 << 9)
/** SDIO_CMD_WAITINT CPSM waits for interrupt request **/
#define SDIO_CMD_WAITINT		(1 << 8)

#define SDIO_CMD_WAITRESP_SHIFT		6
#define SDIO_CMD_WAITRESP_MASK		0x03
/** @defgroup sdio_cmd_waitresp WAITRESP Wait for response bits
@{*/
/**@}*/


#define SDIO_CMD_CMDINDEX_SHIFT		0
#define SDIO_CMD_CMDINDEX_MASK		0x3f
/** @defgroup sdio_cmd_cmdindex CMDINDEX Command index
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_respcmd RESPCMD command response register
@{*/


#define SDIO_RESPCMD_RESPCMD_SHIFT		0
#define SDIO_RESPCMD_RESPCMD_MASK		0x3f
/** @defgroup sdio_respcmd_respcmd RESPCMD Response command index
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_resp1 RESP1 response 1..4 register
@{*/


#define SDIO_RESP1_CARDSTATUS1_SHIFT		0
#define SDIO_RESP1_CARDSTATUS1_MASK		0xffffffff
/** @defgroup sdio_resp1_cardstatus1 CARDSTATUS1 see Table 133.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_resp2 RESP2 response 1..4 register
@{*/


#define SDIO_RESP2_CARDSTATUS2_SHIFT		0
#define SDIO_RESP2_CARDSTATUS2_MASK		0xffffffff
/** @defgroup sdio_resp2_cardstatus2 CARDSTATUS2 see Table 133.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_resp3 RESP3 response 1..4 register
@{*/


#define SDIO_RESP3_CARDSTATUS3_SHIFT		0
#define SDIO_RESP3_CARDSTATUS3_MASK		0xffffffff
/** @defgroup sdio_resp3_cardstatus3 CARDSTATUS3 see Table 133.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_resp4 RESP4 response 1..4 register
@{*/


#define SDIO_RESP4_CARDSTATUS4_SHIFT		0
#define SDIO_RESP4_CARDSTATUS4_MASK		0xffffffff
/** @defgroup sdio_resp4_cardstatus4 CARDSTATUS4 see Table 133.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_dtimer DTIMER data timer register
@{*/


#define SDIO_DTIMER_DATATIME_SHIFT		0
#define SDIO_DTIMER_DATATIME_MASK		0xffffffff
/** @defgroup sdio_dtimer_datatime DATATIME Data timeout period
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_dlen DLEN data length register
@{*/


#define SDIO_DLEN_DATALENGTH_SHIFT		0
#define SDIO_DLEN_DATALENGTH_MASK		0x1ffffff
/** @defgroup sdio_dlen_datalength DATALENGTH Data length value
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_dctrl DCTRL data control register
@{*/

/** SDIO_DCTRL_SDIOEN SD I/O enable functions **/
#define SDIO_DCTRL_SDIOEN		(1 << 11)
/** SDIO_DCTRL_RWMOD Read wait mode **/
#define SDIO_DCTRL_RWMOD		(1 << 10)
/** SDIO_DCTRL_RWSTOP Read wait stop **/
#define SDIO_DCTRL_RWSTOP		(1 << 9)
/** SDIO_DCTRL_RWSTART Read wait start **/
#define SDIO_DCTRL_RWSTART		(1 << 8)

#define SDIO_DCTRL_DBLOCKSIZE_SHIFT		4
#define SDIO_DCTRL_DBLOCKSIZE_MASK		0x0f
/** @defgroup sdio_dctrl_dblocksize DBLOCKSIZE Data block size
@{*/
/**@}*/

/** SDIO_DCTRL_DMAEN DMA enable bit **/
#define SDIO_DCTRL_DMAEN		(1 << 3)
/** SDIO_DCTRL_DTMODE Data transfer mode selection 1: Stream or SDIO multibyte data transfer. **/
#define SDIO_DCTRL_DTMODE		(1 << 2)
/** SDIO_DCTRL_DTDIR Data transfer direction selection **/
#define SDIO_DCTRL_DTDIR		(1 << 1)
/** SDIO_DCTRL_DTEN Data transfer enabled bit **/
#define SDIO_DCTRL_DTEN		(1 << 0)

/**@}*/

/** @defgroup sdio_dcount DCOUNT data counter register
@{*/


#define SDIO_DCOUNT_DATACOUNT_SHIFT		0
#define SDIO_DCOUNT_DATACOUNT_MASK		0x1ffffff
/** @defgroup sdio_dcount_datacount DATACOUNT Data count value
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_sta STA status register
@{*/

/** SDIO_STA_CEATAEND CE-ATA command completion signal received for CMD61 **/
#define SDIO_STA_CEATAEND		(1 << 23)
/** SDIO_STA_SDIOIT SDIO interrupt received **/
#define SDIO_STA_SDIOIT		(1 << 22)
/** SDIO_STA_RXDAVL Data available in receive FIFO **/
#define SDIO_STA_RXDAVL		(1 << 21)
/** SDIO_STA_TXDAVL Data available in transmit FIFO **/
#define SDIO_STA_TXDAVL		(1 << 20)
/** SDIO_STA_RXFIFOE Receive FIFO empty **/
#define SDIO_STA_RXFIFOE		(1 << 19)
/** SDIO_STA_TXFIFOE Transmit FIFO empty **/
#define SDIO_STA_TXFIFOE		(1 << 18)
/** SDIO_STA_RXFIFOF Receive FIFO full **/
#define SDIO_STA_RXFIFOF		(1 << 17)
/** SDIO_STA_TXFIFOF Transmit FIFO full **/
#define SDIO_STA_TXFIFOF		(1 << 16)
/** SDIO_STA_RXFIFOHF Receive FIFO half full: there are at least 8 words in the FIFO **/
#define SDIO_STA_RXFIFOHF		(1 << 15)
/** SDIO_STA_TXFIFOHE Transmit FIFO half empty: at least 8 words can be written into the FIFO **/
#define SDIO_STA_TXFIFOHE		(1 << 14)
/** SDIO_STA_RXACT Data receive in progress **/
#define SDIO_STA_RXACT		(1 << 13)
/** SDIO_STA_TXACT Data transmit in progress **/
#define SDIO_STA_TXACT		(1 << 12)
/** SDIO_STA_CMDACT Command transfer in progress **/
#define SDIO_STA_CMDACT		(1 << 11)
/** SDIO_STA_DBCKEND Data block sent/received (CRC check passed) **/
#define SDIO_STA_DBCKEND		(1 << 10)
/** SDIO_STA_STBITERR Start bit not detected on all data signals in wide bus mode **/
#define SDIO_STA_STBITERR		(1 << 9)
/** SDIO_STA_DATAEND Data end (data counter, SDIDCOUNT, is zero) **/
#define SDIO_STA_DATAEND		(1 << 8)
/** SDIO_STA_CMDSENT Command sent (no response required) **/
#define SDIO_STA_CMDSENT		(1 << 7)
/** SDIO_STA_CMDREND Command response received (CRC check passed) **/
#define SDIO_STA_CMDREND		(1 << 6)
/** SDIO_STA_RXOVERR Received FIFO overrun error **/
#define SDIO_STA_RXOVERR		(1 << 5)
/** SDIO_STA_TXUNDERR Transmit FIFO underrun error **/
#define SDIO_STA_TXUNDERR		(1 << 4)
/** SDIO_STA_DTIMEOUT Data timeout **/
#define SDIO_STA_DTIMEOUT		(1 << 3)
/** SDIO_STA_CTIMEOUT Command response timeout **/
#define SDIO_STA_CTIMEOUT		(1 << 2)
/** SDIO_STA_DCRCFAIL Data block sent/received (CRC check failed) **/
#define SDIO_STA_DCRCFAIL		(1 << 1)
/** SDIO_STA_CCRCFAIL Command response received (CRC check failed) **/
#define SDIO_STA_CCRCFAIL		(1 << 0)

/**@}*/

/** @defgroup sdio_icr ICR interrupt clear register
@{*/

/** SDIO_ICR_CEATAENDC CEATAEND flag clear bit **/
#define SDIO_ICR_CEATAENDC		(1 << 23)
/** SDIO_ICR_SDIOITC SDIOIT flag clear bit **/
#define SDIO_ICR_SDIOITC		(1 << 22)
/** SDIO_ICR_DBCKENDC DBCKEND flag clear bit **/
#define SDIO_ICR_DBCKENDC		(1 << 10)
/** SDIO_ICR_STBITERRC STBITERR flag clear bit **/
#define SDIO_ICR_STBITERRC		(1 << 9)
/** SDIO_ICR_DATAENDC DATAEND flag clear bit **/
#define SDIO_ICR_DATAENDC		(1 << 8)
/** SDIO_ICR_CMDSENTC CMDSENT flag clear bit **/
#define SDIO_ICR_CMDSENTC		(1 << 7)
/** SDIO_ICR_CMDRENDC CMDREND flag clear bit **/
#define SDIO_ICR_CMDRENDC		(1 << 6)
/** SDIO_ICR_RXOVERRC RXOVERR flag clear bit **/
#define SDIO_ICR_RXOVERRC		(1 << 5)
/** SDIO_ICR_TXUNDERRC TXUNDERR flag clear bit **/
#define SDIO_ICR_TXUNDERRC		(1 << 4)
/** SDIO_ICR_DTIMEOUTC DTIMEOUT flag clear bit **/
#define SDIO_ICR_DTIMEOUTC		(1 << 3)
/** SDIO_ICR_CTIMEOUTC CTIMEOUT flag clear bit **/
#define SDIO_ICR_CTIMEOUTC		(1 << 2)
/** SDIO_ICR_DCRCFAILC DCRCFAIL flag clear bit **/
#define SDIO_ICR_DCRCFAILC		(1 << 1)
/** SDIO_ICR_CCRCFAILC CCRCFAIL flag clear bit **/
#define SDIO_ICR_CCRCFAILC		(1 << 0)

/**@}*/

/** @defgroup sdio_mask MASK mask register
@{*/

/** SDIO_MASK_CEATAENDIE CE-ATA command completion signal received interrupt enable **/
#define SDIO_MASK_CEATAENDIE		(1 << 23)
/** SDIO_MASK_SDIOITIE SDIO mode interrupt received interrupt enable **/
#define SDIO_MASK_SDIOITIE		(1 << 22)
/** SDIO_MASK_RXDAVLIE Data available in Rx FIFO interrupt enable **/
#define SDIO_MASK_RXDAVLIE		(1 << 21)
/** SDIO_MASK_TXDAVLIE Data available in Tx FIFO interrupt enable **/
#define SDIO_MASK_TXDAVLIE		(1 << 20)
/** SDIO_MASK_RXFIFOEIE Rx FIFO empty interrupt enable **/
#define SDIO_MASK_RXFIFOEIE		(1 << 19)
/** SDIO_MASK_TXFIFOEIE Tx FIFO empty interrupt enable **/
#define SDIO_MASK_TXFIFOEIE		(1 << 18)
/** SDIO_MASK_RXFIFOFIE Rx FIFO full interrupt enable **/
#define SDIO_MASK_RXFIFOFIE		(1 << 17)
/** SDIO_MASK_TXFIFOFIE Tx FIFO full interrupt enable **/
#define SDIO_MASK_TXFIFOFIE		(1 << 16)
/** SDIO_MASK_RXFIFOHFIE Rx FIFO half full interrupt enable **/
#define SDIO_MASK_RXFIFOHFIE		(1 << 15)
/** SDIO_MASK_TXFIFOHEIE Tx FIFO half empty interrupt enable **/
#define SDIO_MASK_TXFIFOHEIE		(1 << 14)
/** SDIO_MASK_RXACTIE Data receive acting interrupt enable **/
#define SDIO_MASK_RXACTIE		(1 << 13)
/** SDIO_MASK_TXACTIE Data transmit acting interrupt enable **/
#define SDIO_MASK_TXACTIE		(1 << 12)
/** SDIO_MASK_CMDACTIE Command acting interrupt enable **/
#define SDIO_MASK_CMDACTIE		(1 << 11)
/** SDIO_MASK_DBCKENDIE Data block end interrupt enable **/
#define SDIO_MASK_DBCKENDIE		(1 << 10)
/** SDIO_MASK_STBITERRIE Start bit error interrupt enable **/
#define SDIO_MASK_STBITERRIE		(1 << 9)
/** SDIO_MASK_DATAENDIE Data end interrupt enable **/
#define SDIO_MASK_DATAENDIE		(1 << 8)
/** SDIO_MASK_CMDSENTIE Command sent interrupt enable **/
#define SDIO_MASK_CMDSENTIE		(1 << 7)
/** SDIO_MASK_CMDRENDIE Command response received interrupt enable **/
#define SDIO_MASK_CMDRENDIE		(1 << 6)
/** SDIO_MASK_RXOVERRIE Rx FIFO overrun error interrupt enable **/
#define SDIO_MASK_RXOVERRIE		(1 << 5)
/** SDIO_MASK_TXUNDERRIE Tx FIFO underrun error interrupt enable **/
#define SDIO_MASK_TXUNDERRIE		(1 << 4)
/** SDIO_MASK_DTIMEOUTIE Data timeout interrupt enable **/
#define SDIO_MASK_DTIMEOUTIE		(1 << 3)
/** SDIO_MASK_CTIMEOUTIE Command timeout interrupt enable **/
#define SDIO_MASK_CTIMEOUTIE		(1 << 2)
/** SDIO_MASK_DCRCFAILIE Data CRC fail interrupt enable **/
#define SDIO_MASK_DCRCFAILIE		(1 << 1)
/** SDIO_MASK_CCRCFAILIE Command CRC fail interrupt enable **/
#define SDIO_MASK_CCRCFAILIE		(1 << 0)

/**@}*/

/** @defgroup sdio_fifocnt FIFOCNT FIFO counter register
@{*/


#define SDIO_FIFOCNT_FIFOCOUNT_SHIFT		0
#define SDIO_FIFOCNT_FIFOCOUNT_MASK		0xffffff
/** @defgroup sdio_fifocnt_fifocount FIFOCOUNT Remaining number of words to be written to or read from the FIFO.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_fifo FIFO data FIFO register
@{*/


#define SDIO_FIFO_FIF0Data_SHIFT		0
#define SDIO_FIFO_FIF0Data_MASK		0xffffffff
/** @defgroup sdio_fifo_fif0data FIF0Data FIF0Data
@{*/
/**@}*/


/**@}*/

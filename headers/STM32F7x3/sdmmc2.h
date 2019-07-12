#pragma once 

/* --- SDMMC2: Secure digital input/output interface ---------------- */

/** @defgroup sdmmc2_registers Secure digital input/output
      interface Register
@{*/

/** SDMMC2_POWER power control register **/
#define SDMMC2_POWER			MMIO32(SDMMC2_BASE + 0x00)
/** SDMMC2_CLKCR SDI clock control register **/
#define SDMMC2_CLKCR			MMIO32(SDMMC2_BASE + 0x04)
/** SDMMC2_ARG argument register **/
#define SDMMC2_ARG			MMIO32(SDMMC2_BASE + 0x08)
/** SDMMC2_CMD command register **/
#define SDMMC2_CMD			MMIO32(SDMMC2_BASE + 0x0c)
/** SDMMC2_RESPCMD command response register **/
#define SDMMC2_RESPCMD			MMIO32(SDMMC2_BASE + 0x10)
/** SDMMC2_RESP1 response 1..4 register **/
#define SDMMC2_RESP1			MMIO32(SDMMC2_BASE + 0x14)
/** SDMMC2_RESP2 response 1..4 register **/
#define SDMMC2_RESP2			MMIO32(SDMMC2_BASE + 0x18)
/** SDMMC2_RESP3 response 1..4 register **/
#define SDMMC2_RESP3			MMIO32(SDMMC2_BASE + 0x1c)
/** SDMMC2_RESP4 response 1..4 register **/
#define SDMMC2_RESP4			MMIO32(SDMMC2_BASE + 0x20)
/** SDMMC2_DTIMER data timer register **/
#define SDMMC2_DTIMER			MMIO32(SDMMC2_BASE + 0x24)
/** SDMMC2_DLEN data length register **/
#define SDMMC2_DLEN			MMIO32(SDMMC2_BASE + 0x28)
/** SDMMC2_DCTRL data control register **/
#define SDMMC2_DCTRL			MMIO32(SDMMC2_BASE + 0x2c)
/** SDMMC2_DCOUNT data counter register **/
#define SDMMC2_DCOUNT			MMIO32(SDMMC2_BASE + 0x30)
/** SDMMC2_STA status register **/
#define SDMMC2_STA			MMIO32(SDMMC2_BASE + 0x34)
/** SDMMC2_ICR interrupt clear register **/
#define SDMMC2_ICR			MMIO32(SDMMC2_BASE + 0x38)
/** SDMMC2_MASK mask register **/
#define SDMMC2_MASK			MMIO32(SDMMC2_BASE + 0x3c)
/** SDMMC2_FIFOCNT FIFO counter register **/
#define SDMMC2_FIFOCNT			MMIO32(SDMMC2_BASE + 0x48)
/** SDMMC2_FIFO data FIFO register **/
#define SDMMC2_FIFO			MMIO32(SDMMC2_BASE + 0x80)

/**@}*/


/** @defgroup sdmmc2_power POWER power control register
@{*/


#define SDMMC2_POWER_PWRCTRL_SHIFT		0
#define SDMMC2_POWER_PWRCTRL_MASK		0x03
/** @defgroup sdmmc2_power_pwrctrl PWRCTRL PWRCTRL
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc2_clkcr CLKCR SDI clock control register
@{*/

/** SDMMC2_CLKCR_HWFC_EN HW Flow Control enable **/
#define SDMMC2_CLKCR_HWFC_EN		(1 << 14)
/** SDMMC2_CLKCR_NEGEDGE SDIO_CK dephasing selection bit **/
#define SDMMC2_CLKCR_NEGEDGE		(1 << 13)

#define SDMMC2_CLKCR_WIDBUS_SHIFT		11
#define SDMMC2_CLKCR_WIDBUS_MASK		0x03
/** @defgroup sdmmc2_clkcr_widbus WIDBUS Wide bus mode enable bit
@{*/
/**@}*/

/** SDMMC2_CLKCR_BYPASS Clock divider bypass enable bit **/
#define SDMMC2_CLKCR_BYPASS		(1 << 10)
/** SDMMC2_CLKCR_PWRSAV Power saving configuration bit **/
#define SDMMC2_CLKCR_PWRSAV		(1 << 9)
/** SDMMC2_CLKCR_CLKEN Clock enable bit **/
#define SDMMC2_CLKCR_CLKEN		(1 << 8)

#define SDMMC2_CLKCR_CLKDIV_SHIFT		0
#define SDMMC2_CLKCR_CLKDIV_MASK		0xff
/** @defgroup sdmmc2_clkcr_clkdiv CLKDIV Clock divide factor
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc2_arg ARG argument register
@{*/


#define SDMMC2_ARG_CMDARG_SHIFT		0
#define SDMMC2_ARG_CMDARG_MASK		0xffffffff
/** @defgroup sdmmc2_arg_cmdarg CMDARG Command argument
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc2_cmd CMD command register
@{*/

/** SDMMC2_CMD_SDIOSuspend SD I/O suspend command **/
#define SDMMC2_CMD_SDIOSuspend		(1 << 11)
/** SDMMC2_CMD_CPSMEN Command path state machine (CPSM) Enable bit **/
#define SDMMC2_CMD_CPSMEN		(1 << 10)
/** SDMMC2_CMD_WAITPEND CPSM Waits for ends of data transfer (CmdPend internal signal) **/
#define SDMMC2_CMD_WAITPEND		(1 << 9)
/** SDMMC2_CMD_WAITINT CPSM waits for interrupt request **/
#define SDMMC2_CMD_WAITINT		(1 << 8)

#define SDMMC2_CMD_WAITRESP_SHIFT		6
#define SDMMC2_CMD_WAITRESP_MASK		0x03
/** @defgroup sdmmc2_cmd_waitresp WAITRESP Wait for response bits
@{*/
/**@}*/


#define SDMMC2_CMD_CMDINDEX_SHIFT		0
#define SDMMC2_CMD_CMDINDEX_MASK		0x3f
/** @defgroup sdmmc2_cmd_cmdindex CMDINDEX Command index
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc2_respcmd RESPCMD command response register
@{*/


#define SDMMC2_RESPCMD_RESPCMD_SHIFT		0
#define SDMMC2_RESPCMD_RESPCMD_MASK		0x3f
/** @defgroup sdmmc2_respcmd_respcmd RESPCMD Response command index
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc2_resp1 RESP1 response 1..4 register
@{*/


#define SDMMC2_RESP1_CARDSTATUS1_SHIFT		0
#define SDMMC2_RESP1_CARDSTATUS1_MASK		0xffffffff
/** @defgroup sdmmc2_resp1_cardstatus1 CARDSTATUS1 see Table 132
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc2_resp2 RESP2 response 1..4 register
@{*/


#define SDMMC2_RESP2_CARDSTATUS2_SHIFT		0
#define SDMMC2_RESP2_CARDSTATUS2_MASK		0xffffffff
/** @defgroup sdmmc2_resp2_cardstatus2 CARDSTATUS2 see Table 132
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc2_resp3 RESP3 response 1..4 register
@{*/


#define SDMMC2_RESP3_CARDSTATUS3_SHIFT		0
#define SDMMC2_RESP3_CARDSTATUS3_MASK		0xffffffff
/** @defgroup sdmmc2_resp3_cardstatus3 CARDSTATUS3 see Table 132
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc2_resp4 RESP4 response 1..4 register
@{*/


#define SDMMC2_RESP4_CARDSTATUS4_SHIFT		0
#define SDMMC2_RESP4_CARDSTATUS4_MASK		0xffffffff
/** @defgroup sdmmc2_resp4_cardstatus4 CARDSTATUS4 see Table 132
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc2_dtimer DTIMER data timer register
@{*/


#define SDMMC2_DTIMER_DATATIME_SHIFT		0
#define SDMMC2_DTIMER_DATATIME_MASK		0xffffffff
/** @defgroup sdmmc2_dtimer_datatime DATATIME Data timeout period
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc2_dlen DLEN data length register
@{*/


#define SDMMC2_DLEN_DATALENGTH_SHIFT		0
#define SDMMC2_DLEN_DATALENGTH_MASK		0x1ffffff
/** @defgroup sdmmc2_dlen_datalength DATALENGTH Data length value
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc2_dctrl DCTRL data control register
@{*/

/** SDMMC2_DCTRL_SDIOEN SD I/O enable functions **/
#define SDMMC2_DCTRL_SDIOEN		(1 << 11)
/** SDMMC2_DCTRL_RWMOD Read wait mode **/
#define SDMMC2_DCTRL_RWMOD		(1 << 10)
/** SDMMC2_DCTRL_RWSTOP Read wait stop **/
#define SDMMC2_DCTRL_RWSTOP		(1 << 9)
/** SDMMC2_DCTRL_RWSTART Read wait start **/
#define SDMMC2_DCTRL_RWSTART		(1 << 8)

#define SDMMC2_DCTRL_DBLOCKSIZE_SHIFT		4
#define SDMMC2_DCTRL_DBLOCKSIZE_MASK		0x0f
/** @defgroup sdmmc2_dctrl_dblocksize DBLOCKSIZE Data block size
@{*/
/**@}*/

/** SDMMC2_DCTRL_DMAEN DMA enable bit **/
#define SDMMC2_DCTRL_DMAEN		(1 << 3)
/** SDMMC2_DCTRL_DTMODE Data transfer mode selection 1: Stream or SDIO multibyte data transfer **/
#define SDMMC2_DCTRL_DTMODE		(1 << 2)
/** SDMMC2_DCTRL_DTDIR Data transfer direction selection **/
#define SDMMC2_DCTRL_DTDIR		(1 << 1)
/** SDMMC2_DCTRL_DTEN DTEN **/
#define SDMMC2_DCTRL_DTEN		(1 << 0)

/**@}*/

/** @defgroup sdmmc2_dcount DCOUNT data counter register
@{*/


#define SDMMC2_DCOUNT_DATACOUNT_SHIFT		0
#define SDMMC2_DCOUNT_DATACOUNT_MASK		0x1ffffff
/** @defgroup sdmmc2_dcount_datacount DATACOUNT Data count value
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc2_sta STA status register
@{*/

/** SDMMC2_STA_SDIOIT SDIO interrupt received **/
#define SDMMC2_STA_SDIOIT		(1 << 22)
/** SDMMC2_STA_RXDAVL Data available in receive FIFO **/
#define SDMMC2_STA_RXDAVL		(1 << 21)
/** SDMMC2_STA_TXDAVL Data available in transmit FIFO **/
#define SDMMC2_STA_TXDAVL		(1 << 20)
/** SDMMC2_STA_RXFIFOE Receive FIFO empty **/
#define SDMMC2_STA_RXFIFOE		(1 << 19)
/** SDMMC2_STA_TXFIFOE Transmit FIFO empty **/
#define SDMMC2_STA_TXFIFOE		(1 << 18)
/** SDMMC2_STA_RXFIFOF Receive FIFO full **/
#define SDMMC2_STA_RXFIFOF		(1 << 17)
/** SDMMC2_STA_TXFIFOF Transmit FIFO full **/
#define SDMMC2_STA_TXFIFOF		(1 << 16)
/** SDMMC2_STA_RXFIFOHF Receive FIFO half full: there are at least 8 words in the FIFO **/
#define SDMMC2_STA_RXFIFOHF		(1 << 15)
/** SDMMC2_STA_TXFIFOHE Transmit FIFO half empty: at least 8 words can be written into the FIFO **/
#define SDMMC2_STA_TXFIFOHE		(1 << 14)
/** SDMMC2_STA_RXACT Data receive in progress **/
#define SDMMC2_STA_RXACT		(1 << 13)
/** SDMMC2_STA_TXACT Data transmit in progress **/
#define SDMMC2_STA_TXACT		(1 << 12)
/** SDMMC2_STA_CMDACT Command transfer in progress **/
#define SDMMC2_STA_CMDACT		(1 << 11)
/** SDMMC2_STA_DBCKEND Data block sent/received (CRC check passed) **/
#define SDMMC2_STA_DBCKEND		(1 << 10)
/** SDMMC2_STA_DATAEND Data end (data counter, SDIDCOUNT, is zero) **/
#define SDMMC2_STA_DATAEND		(1 << 8)
/** SDMMC2_STA_CMDSENT Command sent (no response required) **/
#define SDMMC2_STA_CMDSENT		(1 << 7)
/** SDMMC2_STA_CMDREND Command response received (CRC check passed) **/
#define SDMMC2_STA_CMDREND		(1 << 6)
/** SDMMC2_STA_RXOVERR Received FIFO overrun error **/
#define SDMMC2_STA_RXOVERR		(1 << 5)
/** SDMMC2_STA_TXUNDERR Transmit FIFO underrun error **/
#define SDMMC2_STA_TXUNDERR		(1 << 4)
/** SDMMC2_STA_DTIMEOUT Data timeout **/
#define SDMMC2_STA_DTIMEOUT		(1 << 3)
/** SDMMC2_STA_CTIMEOUT Command response timeout **/
#define SDMMC2_STA_CTIMEOUT		(1 << 2)
/** SDMMC2_STA_DCRCFAIL Data block sent/received (CRC check failed) **/
#define SDMMC2_STA_DCRCFAIL		(1 << 1)
/** SDMMC2_STA_CCRCFAIL Command response received (CRC check failed) **/
#define SDMMC2_STA_CCRCFAIL		(1 << 0)

/**@}*/

/** @defgroup sdmmc2_icr ICR interrupt clear register
@{*/

/** SDMMC2_ICR_SDIOITC SDIOIT flag clear bit **/
#define SDMMC2_ICR_SDIOITC		(1 << 22)
/** SDMMC2_ICR_DBCKENDC DBCKEND flag clear bit **/
#define SDMMC2_ICR_DBCKENDC		(1 << 10)
/** SDMMC2_ICR_DATAENDC DATAEND flag clear bit **/
#define SDMMC2_ICR_DATAENDC		(1 << 8)
/** SDMMC2_ICR_CMDSENTC CMDSENT flag clear bit **/
#define SDMMC2_ICR_CMDSENTC		(1 << 7)
/** SDMMC2_ICR_CMDRENDC CMDREND flag clear bit **/
#define SDMMC2_ICR_CMDRENDC		(1 << 6)
/** SDMMC2_ICR_RXOVERRC RXOVERR flag clear bit **/
#define SDMMC2_ICR_RXOVERRC		(1 << 5)
/** SDMMC2_ICR_TXUNDERRC TXUNDERR flag clear bit **/
#define SDMMC2_ICR_TXUNDERRC		(1 << 4)
/** SDMMC2_ICR_DTIMEOUTC DTIMEOUT flag clear bit **/
#define SDMMC2_ICR_DTIMEOUTC		(1 << 3)
/** SDMMC2_ICR_CTIMEOUTC CTIMEOUT flag clear bit **/
#define SDMMC2_ICR_CTIMEOUTC		(1 << 2)
/** SDMMC2_ICR_DCRCFAILC DCRCFAIL flag clear bit **/
#define SDMMC2_ICR_DCRCFAILC		(1 << 1)
/** SDMMC2_ICR_CCRCFAILC CCRCFAIL flag clear bit **/
#define SDMMC2_ICR_CCRCFAILC		(1 << 0)

/**@}*/

/** @defgroup sdmmc2_mask MASK mask register
@{*/

/** SDMMC2_MASK_SDIOITIE SDIO mode interrupt received interrupt enable **/
#define SDMMC2_MASK_SDIOITIE		(1 << 22)
/** SDMMC2_MASK_RXDAVLIE Data available in Rx FIFO interrupt enable **/
#define SDMMC2_MASK_RXDAVLIE		(1 << 21)
/** SDMMC2_MASK_TXDAVLIE Data available in Tx FIFO interrupt enable **/
#define SDMMC2_MASK_TXDAVLIE		(1 << 20)
/** SDMMC2_MASK_RXFIFOEIE Rx FIFO empty interrupt enable **/
#define SDMMC2_MASK_RXFIFOEIE		(1 << 19)
/** SDMMC2_MASK_TXFIFOEIE Tx FIFO empty interrupt enable **/
#define SDMMC2_MASK_TXFIFOEIE		(1 << 18)
/** SDMMC2_MASK_RXFIFOFIE Rx FIFO full interrupt enable **/
#define SDMMC2_MASK_RXFIFOFIE		(1 << 17)
/** SDMMC2_MASK_TXFIFOFIE Tx FIFO full interrupt enable **/
#define SDMMC2_MASK_TXFIFOFIE		(1 << 16)
/** SDMMC2_MASK_RXFIFOHFIE Rx FIFO half full interrupt enable **/
#define SDMMC2_MASK_RXFIFOHFIE		(1 << 15)
/** SDMMC2_MASK_TXFIFOHEIE Tx FIFO half empty interrupt enable **/
#define SDMMC2_MASK_TXFIFOHEIE		(1 << 14)
/** SDMMC2_MASK_RXACTIE Data receive acting interrupt enable **/
#define SDMMC2_MASK_RXACTIE		(1 << 13)
/** SDMMC2_MASK_TXACTIE Data transmit acting interrupt enable **/
#define SDMMC2_MASK_TXACTIE		(1 << 12)
/** SDMMC2_MASK_CMDACTIE Command acting interrupt enable **/
#define SDMMC2_MASK_CMDACTIE		(1 << 11)
/** SDMMC2_MASK_DBCKENDIE Data block end interrupt enable **/
#define SDMMC2_MASK_DBCKENDIE		(1 << 10)
/** SDMMC2_MASK_DATAENDIE Data end interrupt enable **/
#define SDMMC2_MASK_DATAENDIE		(1 << 8)
/** SDMMC2_MASK_CMDSENTIE Command sent interrupt enable **/
#define SDMMC2_MASK_CMDSENTIE		(1 << 7)
/** SDMMC2_MASK_CMDRENDIE Command response received interrupt enable **/
#define SDMMC2_MASK_CMDRENDIE		(1 << 6)
/** SDMMC2_MASK_RXOVERRIE Rx FIFO overrun error interrupt enable **/
#define SDMMC2_MASK_RXOVERRIE		(1 << 5)
/** SDMMC2_MASK_TXUNDERRIE Tx FIFO underrun error interrupt enable **/
#define SDMMC2_MASK_TXUNDERRIE		(1 << 4)
/** SDMMC2_MASK_DTIMEOUTIE Data timeout interrupt enable **/
#define SDMMC2_MASK_DTIMEOUTIE		(1 << 3)
/** SDMMC2_MASK_CTIMEOUTIE Command timeout interrupt enable **/
#define SDMMC2_MASK_CTIMEOUTIE		(1 << 2)
/** SDMMC2_MASK_DCRCFAILIE Data CRC fail interrupt enable **/
#define SDMMC2_MASK_DCRCFAILIE		(1 << 1)
/** SDMMC2_MASK_CCRCFAILIE Command CRC fail interrupt enable **/
#define SDMMC2_MASK_CCRCFAILIE		(1 << 0)

/**@}*/

/** @defgroup sdmmc2_fifocnt FIFOCNT FIFO counter register
@{*/


#define SDMMC2_FIFOCNT_FIFOCOUNT_SHIFT		0
#define SDMMC2_FIFOCNT_FIFOCOUNT_MASK		0xffffff
/** @defgroup sdmmc2_fifocnt_fifocount FIFOCOUNT Remaining number of words to be written to or read from the FIFO
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc2_fifo FIFO data FIFO register
@{*/


#define SDMMC2_FIFO_FIFOData_SHIFT		0
#define SDMMC2_FIFO_FIFOData_MASK		0xffffffff
/** @defgroup sdmmc2_fifo_fifodata FIFOData Receive and transmit FIFO data
@{*/
/**@}*/


/**@}*/

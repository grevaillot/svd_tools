#pragma once 

/* --- SDMMC1: Secure digital input/output interface ---------------- */

/** @defgroup sdmmc1_registers Secure digital input/output
      interface Register
@{*/

/** SDMMC1_POWER power control register **/
#define SDMMC1_POWER			MMIO32(SDMMC1_BASE + 0x00)
/** SDMMC1_CLKCR SDI clock control register **/
#define SDMMC1_CLKCR			MMIO32(SDMMC1_BASE + 0x04)
/** SDMMC1_ARG argument register **/
#define SDMMC1_ARG			MMIO32(SDMMC1_BASE + 0x08)
/** SDMMC1_CMD command register **/
#define SDMMC1_CMD			MMIO32(SDMMC1_BASE + 0x0c)
/** SDMMC1_RESPCMD command response register **/
#define SDMMC1_RESPCMD			MMIO32(SDMMC1_BASE + 0x10)
/** SDMMC1_RESP1 response 1..4 register **/
#define SDMMC1_RESP1			MMIO32(SDMMC1_BASE + 0x14)
/** SDMMC1_RESP2 response 1..4 register **/
#define SDMMC1_RESP2			MMIO32(SDMMC1_BASE + 0x18)
/** SDMMC1_RESP3 response 1..4 register **/
#define SDMMC1_RESP3			MMIO32(SDMMC1_BASE + 0x1c)
/** SDMMC1_RESP4 response 1..4 register **/
#define SDMMC1_RESP4			MMIO32(SDMMC1_BASE + 0x20)
/** SDMMC1_DTIMER data timer register **/
#define SDMMC1_DTIMER			MMIO32(SDMMC1_BASE + 0x24)
/** SDMMC1_DLEN data length register **/
#define SDMMC1_DLEN			MMIO32(SDMMC1_BASE + 0x28)
/** SDMMC1_DCTRL data control register **/
#define SDMMC1_DCTRL			MMIO32(SDMMC1_BASE + 0x2c)
/** SDMMC1_DCOUNT data counter register **/
#define SDMMC1_DCOUNT			MMIO32(SDMMC1_BASE + 0x30)
/** SDMMC1_STA status register **/
#define SDMMC1_STA			MMIO32(SDMMC1_BASE + 0x34)
/** SDMMC1_ICR interrupt clear register **/
#define SDMMC1_ICR			MMIO32(SDMMC1_BASE + 0x38)
/** SDMMC1_MASK mask register **/
#define SDMMC1_MASK			MMIO32(SDMMC1_BASE + 0x3c)
/** SDMMC1_FIFOCNT FIFO counter register **/
#define SDMMC1_FIFOCNT			MMIO32(SDMMC1_BASE + 0x48)
/** SDMMC1_FIFO data FIFO register **/
#define SDMMC1_FIFO			MMIO32(SDMMC1_BASE + 0x80)

/**@}*/


/** @defgroup sdmmc1_power POWER power control register
@{*/


#define SDMMC1_POWER_PWRCTRL_SHIFT		0
#define SDMMC1_POWER_PWRCTRL_MASK		0x03
/** @defgroup sdmmc1_power_pwrctrl PWRCTRL PWRCTRL
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_clkcr CLKCR SDI clock control register
@{*/

/** SDMMC1_CLKCR_HWFC_EN HW Flow Control enable **/
#define SDMMC1_CLKCR_HWFC_EN		(1 << 14)
/** SDMMC1_CLKCR_NEGEDGE SDIO_CK dephasing selection bit **/
#define SDMMC1_CLKCR_NEGEDGE		(1 << 13)

#define SDMMC1_CLKCR_WIDBUS_SHIFT		11
#define SDMMC1_CLKCR_WIDBUS_MASK		0x03
/** @defgroup sdmmc1_clkcr_widbus WIDBUS Wide bus mode enable bit
@{*/
/**@}*/

/** SDMMC1_CLKCR_BYPASS Clock divider bypass enable bit **/
#define SDMMC1_CLKCR_BYPASS		(1 << 10)
/** SDMMC1_CLKCR_PWRSAV Power saving configuration bit **/
#define SDMMC1_CLKCR_PWRSAV		(1 << 9)
/** SDMMC1_CLKCR_CLKEN Clock enable bit **/
#define SDMMC1_CLKCR_CLKEN		(1 << 8)

#define SDMMC1_CLKCR_CLKDIV_SHIFT		0
#define SDMMC1_CLKCR_CLKDIV_MASK		0xff
/** @defgroup sdmmc1_clkcr_clkdiv CLKDIV Clock divide factor
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_arg ARG argument register
@{*/


#define SDMMC1_ARG_CMDARG_SHIFT		0
#define SDMMC1_ARG_CMDARG_MASK		0xffffffff
/** @defgroup sdmmc1_arg_cmdarg CMDARG Command argument
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_cmd CMD command register
@{*/

/** SDMMC1_CMD_CE_ATACMD CE-ATA command **/
#define SDMMC1_CMD_CE_ATACMD		(1 << 14)
/** SDMMC1_CMD_nIEN not Interrupt Enable **/
#define SDMMC1_CMD_nIEN		(1 << 13)
/** SDMMC1_CMD_ENCMDcompl Enable CMD completion **/
#define SDMMC1_CMD_ENCMDcompl		(1 << 12)
/** SDMMC1_CMD_SDIOSuspend SD I/O suspend command **/
#define SDMMC1_CMD_SDIOSuspend		(1 << 11)
/** SDMMC1_CMD_CPSMEN Command path state machine (CPSM) Enable bit **/
#define SDMMC1_CMD_CPSMEN		(1 << 10)
/** SDMMC1_CMD_WAITPEND CPSM Waits for ends of data transfer (CmdPend internal signal) **/
#define SDMMC1_CMD_WAITPEND		(1 << 9)
/** SDMMC1_CMD_WAITINT CPSM waits for interrupt request **/
#define SDMMC1_CMD_WAITINT		(1 << 8)

#define SDMMC1_CMD_WAITRESP_SHIFT		6
#define SDMMC1_CMD_WAITRESP_MASK		0x03
/** @defgroup sdmmc1_cmd_waitresp WAITRESP Wait for response bits
@{*/
/**@}*/


#define SDMMC1_CMD_CMDINDEX_SHIFT		0
#define SDMMC1_CMD_CMDINDEX_MASK		0x3f
/** @defgroup sdmmc1_cmd_cmdindex CMDINDEX Command index
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_respcmd RESPCMD command response register
@{*/


#define SDMMC1_RESPCMD_RESPCMD_SHIFT		0
#define SDMMC1_RESPCMD_RESPCMD_MASK		0x3f
/** @defgroup sdmmc1_respcmd_respcmd RESPCMD Response command index
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_resp1 RESP1 response 1..4 register
@{*/


#define SDMMC1_RESP1_CARDSTATUS1_SHIFT		0
#define SDMMC1_RESP1_CARDSTATUS1_MASK		0xffffffff
/** @defgroup sdmmc1_resp1_cardstatus1 CARDSTATUS1 see Table 132
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_resp2 RESP2 response 1..4 register
@{*/


#define SDMMC1_RESP2_CARDSTATUS2_SHIFT		0
#define SDMMC1_RESP2_CARDSTATUS2_MASK		0xffffffff
/** @defgroup sdmmc1_resp2_cardstatus2 CARDSTATUS2 see Table 132
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_resp3 RESP3 response 1..4 register
@{*/


#define SDMMC1_RESP3_CARDSTATUS3_SHIFT		0
#define SDMMC1_RESP3_CARDSTATUS3_MASK		0xffffffff
/** @defgroup sdmmc1_resp3_cardstatus3 CARDSTATUS3 see Table 132
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_resp4 RESP4 response 1..4 register
@{*/


#define SDMMC1_RESP4_CARDSTATUS4_SHIFT		0
#define SDMMC1_RESP4_CARDSTATUS4_MASK		0xffffffff
/** @defgroup sdmmc1_resp4_cardstatus4 CARDSTATUS4 see Table 132
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_dtimer DTIMER data timer register
@{*/


#define SDMMC1_DTIMER_DATATIME_SHIFT		0
#define SDMMC1_DTIMER_DATATIME_MASK		0xffffffff
/** @defgroup sdmmc1_dtimer_datatime DATATIME Data timeout period
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_dlen DLEN data length register
@{*/


#define SDMMC1_DLEN_DATALENGTH_SHIFT		0
#define SDMMC1_DLEN_DATALENGTH_MASK		0x1ffffff
/** @defgroup sdmmc1_dlen_datalength DATALENGTH Data length value
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_dctrl DCTRL data control register
@{*/

/** SDMMC1_DCTRL_SDIOEN SD I/O enable functions **/
#define SDMMC1_DCTRL_SDIOEN		(1 << 11)
/** SDMMC1_DCTRL_RWMOD Read wait mode **/
#define SDMMC1_DCTRL_RWMOD		(1 << 10)
/** SDMMC1_DCTRL_RWSTOP Read wait stop **/
#define SDMMC1_DCTRL_RWSTOP		(1 << 9)
/** SDMMC1_DCTRL_RWSTART Read wait start **/
#define SDMMC1_DCTRL_RWSTART		(1 << 8)

#define SDMMC1_DCTRL_DBLOCKSIZE_SHIFT		4
#define SDMMC1_DCTRL_DBLOCKSIZE_MASK		0x0f
/** @defgroup sdmmc1_dctrl_dblocksize DBLOCKSIZE Data block size
@{*/
/**@}*/

/** SDMMC1_DCTRL_DMAEN DMA enable bit **/
#define SDMMC1_DCTRL_DMAEN		(1 << 3)
/** SDMMC1_DCTRL_DTMODE Data transfer mode selection 1: Stream or SDIO multibyte data transfer **/
#define SDMMC1_DCTRL_DTMODE		(1 << 2)
/** SDMMC1_DCTRL_DTDIR Data transfer direction selection **/
#define SDMMC1_DCTRL_DTDIR		(1 << 1)
/** SDMMC1_DCTRL_DTEN DTEN **/
#define SDMMC1_DCTRL_DTEN		(1 << 0)

/**@}*/

/** @defgroup sdmmc1_dcount DCOUNT data counter register
@{*/


#define SDMMC1_DCOUNT_DATACOUNT_SHIFT		0
#define SDMMC1_DCOUNT_DATACOUNT_MASK		0x1ffffff
/** @defgroup sdmmc1_dcount_datacount DATACOUNT Data count value
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sta STA status register
@{*/

/** SDMMC1_STA_CEATAEND CE-ATA command completion signal received for CMD61 **/
#define SDMMC1_STA_CEATAEND		(1 << 23)
/** SDMMC1_STA_SDIOIT SDIO interrupt received **/
#define SDMMC1_STA_SDIOIT		(1 << 22)
/** SDMMC1_STA_RXDAVL Data available in receive FIFO **/
#define SDMMC1_STA_RXDAVL		(1 << 21)
/** SDMMC1_STA_TXDAVL Data available in transmit FIFO **/
#define SDMMC1_STA_TXDAVL		(1 << 20)
/** SDMMC1_STA_RXFIFOE Receive FIFO empty **/
#define SDMMC1_STA_RXFIFOE		(1 << 19)
/** SDMMC1_STA_TXFIFOE Transmit FIFO empty **/
#define SDMMC1_STA_TXFIFOE		(1 << 18)
/** SDMMC1_STA_RXFIFOF Receive FIFO full **/
#define SDMMC1_STA_RXFIFOF		(1 << 17)
/** SDMMC1_STA_TXFIFOF Transmit FIFO full **/
#define SDMMC1_STA_TXFIFOF		(1 << 16)
/** SDMMC1_STA_RXFIFOHF Receive FIFO half full: there are at least 8 words in the FIFO **/
#define SDMMC1_STA_RXFIFOHF		(1 << 15)
/** SDMMC1_STA_TXFIFOHE Transmit FIFO half empty: at least 8 words can be written into the FIFO **/
#define SDMMC1_STA_TXFIFOHE		(1 << 14)
/** SDMMC1_STA_RXACT Data receive in progress **/
#define SDMMC1_STA_RXACT		(1 << 13)
/** SDMMC1_STA_TXACT Data transmit in progress **/
#define SDMMC1_STA_TXACT		(1 << 12)
/** SDMMC1_STA_CMDACT Command transfer in progress **/
#define SDMMC1_STA_CMDACT		(1 << 11)
/** SDMMC1_STA_DBCKEND Data block sent/received (CRC check passed) **/
#define SDMMC1_STA_DBCKEND		(1 << 10)
/** SDMMC1_STA_STBITERR Start bit not detected on all data signals in wide bus mode **/
#define SDMMC1_STA_STBITERR		(1 << 9)
/** SDMMC1_STA_DATAEND Data end (data counter, SDIDCOUNT, is zero) **/
#define SDMMC1_STA_DATAEND		(1 << 8)
/** SDMMC1_STA_CMDSENT Command sent (no response required) **/
#define SDMMC1_STA_CMDSENT		(1 << 7)
/** SDMMC1_STA_CMDREND Command response received (CRC check passed) **/
#define SDMMC1_STA_CMDREND		(1 << 6)
/** SDMMC1_STA_RXOVERR Received FIFO overrun error **/
#define SDMMC1_STA_RXOVERR		(1 << 5)
/** SDMMC1_STA_TXUNDERR Transmit FIFO underrun error **/
#define SDMMC1_STA_TXUNDERR		(1 << 4)
/** SDMMC1_STA_DTIMEOUT Data timeout **/
#define SDMMC1_STA_DTIMEOUT		(1 << 3)
/** SDMMC1_STA_CTIMEOUT Command response timeout **/
#define SDMMC1_STA_CTIMEOUT		(1 << 2)
/** SDMMC1_STA_DCRCFAIL Data block sent/received (CRC check failed) **/
#define SDMMC1_STA_DCRCFAIL		(1 << 1)
/** SDMMC1_STA_CCRCFAIL Command response received (CRC check failed) **/
#define SDMMC1_STA_CCRCFAIL		(1 << 0)

/**@}*/

/** @defgroup sdmmc1_icr ICR interrupt clear register
@{*/

/** SDMMC1_ICR_CEATAENDC CEATAEND flag clear bit **/
#define SDMMC1_ICR_CEATAENDC		(1 << 23)
/** SDMMC1_ICR_SDIOITC SDIOIT flag clear bit **/
#define SDMMC1_ICR_SDIOITC		(1 << 22)
/** SDMMC1_ICR_DBCKENDC DBCKEND flag clear bit **/
#define SDMMC1_ICR_DBCKENDC		(1 << 10)
/** SDMMC1_ICR_STBITERRC STBITERR flag clear bit **/
#define SDMMC1_ICR_STBITERRC		(1 << 9)
/** SDMMC1_ICR_DATAENDC DATAEND flag clear bit **/
#define SDMMC1_ICR_DATAENDC		(1 << 8)
/** SDMMC1_ICR_CMDSENTC CMDSENT flag clear bit **/
#define SDMMC1_ICR_CMDSENTC		(1 << 7)
/** SDMMC1_ICR_CMDRENDC CMDREND flag clear bit **/
#define SDMMC1_ICR_CMDRENDC		(1 << 6)
/** SDMMC1_ICR_RXOVERRC RXOVERR flag clear bit **/
#define SDMMC1_ICR_RXOVERRC		(1 << 5)
/** SDMMC1_ICR_TXUNDERRC TXUNDERR flag clear bit **/
#define SDMMC1_ICR_TXUNDERRC		(1 << 4)
/** SDMMC1_ICR_DTIMEOUTC DTIMEOUT flag clear bit **/
#define SDMMC1_ICR_DTIMEOUTC		(1 << 3)
/** SDMMC1_ICR_CTIMEOUTC CTIMEOUT flag clear bit **/
#define SDMMC1_ICR_CTIMEOUTC		(1 << 2)
/** SDMMC1_ICR_DCRCFAILC DCRCFAIL flag clear bit **/
#define SDMMC1_ICR_DCRCFAILC		(1 << 1)
/** SDMMC1_ICR_CCRCFAILC CCRCFAIL flag clear bit **/
#define SDMMC1_ICR_CCRCFAILC		(1 << 0)

/**@}*/

/** @defgroup sdmmc1_mask MASK mask register
@{*/

/** SDMMC1_MASK_CEATAENDIE CE-ATA command completion signal received interrupt enable **/
#define SDMMC1_MASK_CEATAENDIE		(1 << 23)
/** SDMMC1_MASK_SDIOITIE SDIO mode interrupt received interrupt enable **/
#define SDMMC1_MASK_SDIOITIE		(1 << 22)
/** SDMMC1_MASK_RXDAVLIE Data available in Rx FIFO interrupt enable **/
#define SDMMC1_MASK_RXDAVLIE		(1 << 21)
/** SDMMC1_MASK_TXDAVLIE Data available in Tx FIFO interrupt enable **/
#define SDMMC1_MASK_TXDAVLIE		(1 << 20)
/** SDMMC1_MASK_RXFIFOEIE Rx FIFO empty interrupt enable **/
#define SDMMC1_MASK_RXFIFOEIE		(1 << 19)
/** SDMMC1_MASK_TXFIFOEIE Tx FIFO empty interrupt enable **/
#define SDMMC1_MASK_TXFIFOEIE		(1 << 18)
/** SDMMC1_MASK_RXFIFOFIE Rx FIFO full interrupt enable **/
#define SDMMC1_MASK_RXFIFOFIE		(1 << 17)
/** SDMMC1_MASK_TXFIFOFIE Tx FIFO full interrupt enable **/
#define SDMMC1_MASK_TXFIFOFIE		(1 << 16)
/** SDMMC1_MASK_RXFIFOHFIE Rx FIFO half full interrupt enable **/
#define SDMMC1_MASK_RXFIFOHFIE		(1 << 15)
/** SDMMC1_MASK_TXFIFOHEIE Tx FIFO half empty interrupt enable **/
#define SDMMC1_MASK_TXFIFOHEIE		(1 << 14)
/** SDMMC1_MASK_RXACTIE Data receive acting interrupt enable **/
#define SDMMC1_MASK_RXACTIE		(1 << 13)
/** SDMMC1_MASK_TXACTIE Data transmit acting interrupt enable **/
#define SDMMC1_MASK_TXACTIE		(1 << 12)
/** SDMMC1_MASK_CMDACTIE Command acting interrupt enable **/
#define SDMMC1_MASK_CMDACTIE		(1 << 11)
/** SDMMC1_MASK_DBCKENDIE Data block end interrupt enable **/
#define SDMMC1_MASK_DBCKENDIE		(1 << 10)
/** SDMMC1_MASK_STBITERRIE Start bit error interrupt enable **/
#define SDMMC1_MASK_STBITERRIE		(1 << 9)
/** SDMMC1_MASK_DATAENDIE Data end interrupt enable **/
#define SDMMC1_MASK_DATAENDIE		(1 << 8)
/** SDMMC1_MASK_CMDSENTIE Command sent interrupt enable **/
#define SDMMC1_MASK_CMDSENTIE		(1 << 7)
/** SDMMC1_MASK_CMDRENDIE Command response received interrupt enable **/
#define SDMMC1_MASK_CMDRENDIE		(1 << 6)
/** SDMMC1_MASK_RXOVERRIE Rx FIFO overrun error interrupt enable **/
#define SDMMC1_MASK_RXOVERRIE		(1 << 5)
/** SDMMC1_MASK_TXUNDERRIE Tx FIFO underrun error interrupt enable **/
#define SDMMC1_MASK_TXUNDERRIE		(1 << 4)
/** SDMMC1_MASK_DTIMEOUTIE Data timeout interrupt enable **/
#define SDMMC1_MASK_DTIMEOUTIE		(1 << 3)
/** SDMMC1_MASK_CTIMEOUTIE Command timeout interrupt enable **/
#define SDMMC1_MASK_CTIMEOUTIE		(1 << 2)
/** SDMMC1_MASK_DCRCFAILIE Data CRC fail interrupt enable **/
#define SDMMC1_MASK_DCRCFAILIE		(1 << 1)
/** SDMMC1_MASK_CCRCFAILIE Command CRC fail interrupt enable **/
#define SDMMC1_MASK_CCRCFAILIE		(1 << 0)

/**@}*/

/** @defgroup sdmmc1_fifocnt FIFOCNT FIFO counter register
@{*/


#define SDMMC1_FIFOCNT_FIFOCOUNT_SHIFT		0
#define SDMMC1_FIFOCNT_FIFOCOUNT_MASK		0xffffff
/** @defgroup sdmmc1_fifocnt_fifocount FIFOCOUNT Remaining number of words to be written to or read from the FIFO
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_fifo FIFO data FIFO register
@{*/


#define SDMMC1_FIFO_FIFOData_SHIFT		0
#define SDMMC1_FIFO_FIFOData_MASK		0xffffffff
/** @defgroup sdmmc1_fifo_fifodata FIFOData Receive and transmit FIFO data
@{*/
/**@}*/


/**@}*/

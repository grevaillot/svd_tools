#pragma once 

/* --- SDIO: Secure digital input/output interface ------------------ */

/** @defgroup sdio_registers Secure digital input/output
      interface Register
@{*/

/** SDIO_POWER Bits 1:0 = PWRCTRL: Power supply control bits **/
#define SDIO_POWER			MMIO32(SDIO_BASE + 0x00)
/** SDIO_CLKCR SDI clock control register (SDIO_CLKCR) **/
#define SDIO_CLKCR			MMIO32(SDIO_BASE + 0x04)
/** SDIO_ARG Bits 31:0 = : Command argument **/
#define SDIO_ARG			MMIO32(SDIO_BASE + 0x08)
/** SDIO_CMD SDIO command register (SDIO_CMD) **/
#define SDIO_CMD			MMIO32(SDIO_BASE + 0x0c)
/** SDIO_RESPCMD SDIO command register **/
#define SDIO_RESPCMD			MMIO32(SDIO_BASE + 0x10)
/** SDIO_RESPI1 Bits 31:0 = CARDSTATUS1 **/
#define SDIO_RESPI1			MMIO32(SDIO_BASE + 0x14)
/** SDIO_RESP2 Bits 31:0 = CARDSTATUS2 **/
#define SDIO_RESP2			MMIO32(SDIO_BASE + 0x18)
/** SDIO_RESP3 Bits 31:0 = CARDSTATUS3 **/
#define SDIO_RESP3			MMIO32(SDIO_BASE + 0x1c)
/** SDIO_RESP4 Bits 31:0 = CARDSTATUS4 **/
#define SDIO_RESP4			MMIO32(SDIO_BASE + 0x20)
/** SDIO_DTIMER Bits 31:0 = DATATIME: Data timeout period **/
#define SDIO_DTIMER			MMIO32(SDIO_BASE + 0x24)
/** SDIO_DLEN Bits 24:0 = DATALENGTH: Data length value **/
#define SDIO_DLEN			MMIO32(SDIO_BASE + 0x28)
/** SDIO_DCTRL SDIO data control register (SDIO_DCTRL) **/
#define SDIO_DCTRL			MMIO32(SDIO_BASE + 0x2c)
/** SDIO_DCOUNT Bits 24:0 = DATACOUNT: Data count value **/
#define SDIO_DCOUNT			MMIO32(SDIO_BASE + 0x30)
/** SDIO_STA SDIO status register (SDIO_STA) **/
#define SDIO_STA			MMIO32(SDIO_BASE + 0x34)
/** SDIO_ICR SDIO interrupt clear register (SDIO_ICR) **/
#define SDIO_ICR			MMIO32(SDIO_BASE + 0x38)
/** SDIO_MASK SDIO mask register (SDIO_MASK) **/
#define SDIO_MASK			MMIO32(SDIO_BASE + 0x3c)
/** SDIO_FIFOCNT Bits 23:0 = FIFOCOUNT: Remaining number of words to be written to or read from the FIFO **/
#define SDIO_FIFOCNT			MMIO32(SDIO_BASE + 0x48)
/** SDIO_FIFO bits 31:0 = FIFOData: Receive and transmit FIFO data **/
#define SDIO_FIFO			MMIO32(SDIO_BASE + 0x80)

/**@}*/


/** @defgroup sdio_power POWER Bits 1:0 = PWRCTRL: Power supply control bits
@{*/


#define SDIO_POWER_PWRCTRL_SHIFT		0
#define SDIO_POWER_PWRCTRL_MASK		0x03
/** @defgroup sdio_power_pwrctrl PWRCTRL PWRCTRL
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_clkcr CLKCR SDI clock control register (SDIO_CLKCR)
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

/** @defgroup sdio_arg ARG Bits 31:0 = : Command argument
@{*/


#define SDIO_ARG_CMDARG_SHIFT		0
#define SDIO_ARG_CMDARG_MASK		0xffffffff
/** @defgroup sdio_arg_cmdarg CMDARG Command argument
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_cmd CMD SDIO command register (SDIO_CMD)
@{*/

/** SDIO_CMD_CE_ATACMD CE_ATACMD **/
#define SDIO_CMD_CE_ATACMD		(1 << 14)
/** SDIO_CMD_nIEN nIEN **/
#define SDIO_CMD_nIEN		(1 << 13)
/** SDIO_CMD_ENCMDcompl ENCMDcompl **/
#define SDIO_CMD_ENCMDcompl		(1 << 12)
/** SDIO_CMD_SDIOSuspend SDIOSuspend **/
#define SDIO_CMD_SDIOSuspend		(1 << 11)
/** SDIO_CMD_CPSMEN CPSMEN **/
#define SDIO_CMD_CPSMEN		(1 << 10)
/** SDIO_CMD_WAITPEND WAITPEND **/
#define SDIO_CMD_WAITPEND		(1 << 9)
/** SDIO_CMD_WAITINT WAITINT **/
#define SDIO_CMD_WAITINT		(1 << 8)

#define SDIO_CMD_WAITRESP_SHIFT		6
#define SDIO_CMD_WAITRESP_MASK		0x03
/** @defgroup sdio_cmd_waitresp WAITRESP WAITRESP
@{*/
/**@}*/


#define SDIO_CMD_CMDINDEX_SHIFT		0
#define SDIO_CMD_CMDINDEX_MASK		0x3f
/** @defgroup sdio_cmd_cmdindex CMDINDEX CMDINDEX
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_respcmd RESPCMD SDIO command register
@{*/


#define SDIO_RESPCMD_RESPCMD_SHIFT		0
#define SDIO_RESPCMD_RESPCMD_MASK		0x3f
/** @defgroup sdio_respcmd_respcmd RESPCMD RESPCMD
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_respi1 RESPI1 Bits 31:0 = CARDSTATUS1
@{*/


#define SDIO_RESPI1_CARDSTATUS1_SHIFT		0
#define SDIO_RESPI1_CARDSTATUS1_MASK		0xffffffff
/** @defgroup sdio_respi1_cardstatus1 CARDSTATUS1 CARDSTATUS1
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_resp2 RESP2 Bits 31:0 = CARDSTATUS2
@{*/


#define SDIO_RESP2_CARDSTATUS2_SHIFT		0
#define SDIO_RESP2_CARDSTATUS2_MASK		0xffffffff
/** @defgroup sdio_resp2_cardstatus2 CARDSTATUS2 CARDSTATUS2
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_resp3 RESP3 Bits 31:0 = CARDSTATUS3
@{*/


#define SDIO_RESP3_CARDSTATUS3_SHIFT		0
#define SDIO_RESP3_CARDSTATUS3_MASK		0xffffffff
/** @defgroup sdio_resp3_cardstatus3 CARDSTATUS3 CARDSTATUS3
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_resp4 RESP4 Bits 31:0 = CARDSTATUS4
@{*/


#define SDIO_RESP4_CARDSTATUS4_SHIFT		0
#define SDIO_RESP4_CARDSTATUS4_MASK		0xffffffff
/** @defgroup sdio_resp4_cardstatus4 CARDSTATUS4 CARDSTATUS4
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_dtimer DTIMER Bits 31:0 = DATATIME: Data timeout period
@{*/


#define SDIO_DTIMER_DATATIME_SHIFT		0
#define SDIO_DTIMER_DATATIME_MASK		0xffffffff
/** @defgroup sdio_dtimer_datatime DATATIME Data timeout period
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_dlen DLEN Bits 24:0 = DATALENGTH: Data length value
@{*/


#define SDIO_DLEN_DATALENGTH_SHIFT		0
#define SDIO_DLEN_DATALENGTH_MASK		0x1ffffff
/** @defgroup sdio_dlen_datalength DATALENGTH Data length value
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_dctrl DCTRL SDIO data control register (SDIO_DCTRL)
@{*/

/** SDIO_DCTRL_SDIOEN SDIOEN **/
#define SDIO_DCTRL_SDIOEN		(1 << 11)
/** SDIO_DCTRL_RWMOD RWMOD **/
#define SDIO_DCTRL_RWMOD		(1 << 10)
/** SDIO_DCTRL_PWSTOP PWSTOP **/
#define SDIO_DCTRL_PWSTOP		(1 << 9)
/** SDIO_DCTRL_PWSTART PWSTART **/
#define SDIO_DCTRL_PWSTART		(1 << 8)

#define SDIO_DCTRL_DBLOCKSIZE_SHIFT		4
#define SDIO_DCTRL_DBLOCKSIZE_MASK		0x0f
/** @defgroup sdio_dctrl_dblocksize DBLOCKSIZE DBLOCKSIZE
@{*/
/**@}*/

/** SDIO_DCTRL_DMAEN DMAEN **/
#define SDIO_DCTRL_DMAEN		(1 << 3)
/** SDIO_DCTRL_DTMODE DTMODE **/
#define SDIO_DCTRL_DTMODE		(1 << 2)
/** SDIO_DCTRL_DTDIR DTDIR **/
#define SDIO_DCTRL_DTDIR		(1 << 1)
/** SDIO_DCTRL_DTEN DTEN **/
#define SDIO_DCTRL_DTEN		(1 << 0)

/**@}*/

/** @defgroup sdio_dcount DCOUNT Bits 24:0 = DATACOUNT: Data count value
@{*/


#define SDIO_DCOUNT_DATACOUNT_SHIFT		0
#define SDIO_DCOUNT_DATACOUNT_MASK		0x1ffffff
/** @defgroup sdio_dcount_datacount DATACOUNT Data count value
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_sta STA SDIO status register (SDIO_STA)
@{*/

/** SDIO_STA_CEATAEND CEATAEND **/
#define SDIO_STA_CEATAEND		(1 << 23)
/** SDIO_STA_SDIOIT SDIOIT **/
#define SDIO_STA_SDIOIT		(1 << 22)
/** SDIO_STA_RXDAVL RXDAVL **/
#define SDIO_STA_RXDAVL		(1 << 21)
/** SDIO_STA_TXDAVL TXDAVL **/
#define SDIO_STA_TXDAVL		(1 << 20)
/** SDIO_STA_RXFIFOE RXFIFOE **/
#define SDIO_STA_RXFIFOE		(1 << 19)
/** SDIO_STA_TXFIFOE TXFIFOE **/
#define SDIO_STA_TXFIFOE		(1 << 18)
/** SDIO_STA_RXFIFOF RXFIFOF **/
#define SDIO_STA_RXFIFOF		(1 << 17)
/** SDIO_STA_TXFIFOF TXFIFOF **/
#define SDIO_STA_TXFIFOF		(1 << 16)
/** SDIO_STA_RXFIFOHF RXFIFOHF **/
#define SDIO_STA_RXFIFOHF		(1 << 15)
/** SDIO_STA_TXFIFOHE TXFIFOHE **/
#define SDIO_STA_TXFIFOHE		(1 << 14)
/** SDIO_STA_RXACT RXACT **/
#define SDIO_STA_RXACT		(1 << 13)
/** SDIO_STA_TXACT TXACT **/
#define SDIO_STA_TXACT		(1 << 12)
/** SDIO_STA_CMDACT CMDACT **/
#define SDIO_STA_CMDACT		(1 << 11)
/** SDIO_STA_DBCKEND DBCKEND **/
#define SDIO_STA_DBCKEND		(1 << 10)
/** SDIO_STA_STBITERR STBITERR **/
#define SDIO_STA_STBITERR		(1 << 9)
/** SDIO_STA_DATAEND DATAEND **/
#define SDIO_STA_DATAEND		(1 << 8)
/** SDIO_STA_CMDSENT CMDSENT **/
#define SDIO_STA_CMDSENT		(1 << 7)
/** SDIO_STA_CMDREND CMDREND **/
#define SDIO_STA_CMDREND		(1 << 6)
/** SDIO_STA_RXOVERR RXOVERR **/
#define SDIO_STA_RXOVERR		(1 << 5)
/** SDIO_STA_TXUNDERR TXUNDERR **/
#define SDIO_STA_TXUNDERR		(1 << 4)
/** SDIO_STA_DTIMEOUT DTIMEOUT **/
#define SDIO_STA_DTIMEOUT		(1 << 3)
/** SDIO_STA_CTIMEOUT CTIMEOUT **/
#define SDIO_STA_CTIMEOUT		(1 << 2)
/** SDIO_STA_DCRCFAIL DCRCFAIL **/
#define SDIO_STA_DCRCFAIL		(1 << 1)
/** SDIO_STA_CCRCFAIL CCRCFAIL **/
#define SDIO_STA_CCRCFAIL		(1 << 0)

/**@}*/

/** @defgroup sdio_icr ICR SDIO interrupt clear register (SDIO_ICR)
@{*/

/** SDIO_ICR_CEATAENDC CEATAENDC **/
#define SDIO_ICR_CEATAENDC		(1 << 23)
/** SDIO_ICR_SDIOITC SDIOITC **/
#define SDIO_ICR_SDIOITC		(1 << 22)
/** SDIO_ICR_DBCKENDC DBCKENDC **/
#define SDIO_ICR_DBCKENDC		(1 << 10)
/** SDIO_ICR_STBITERRC STBITERRC **/
#define SDIO_ICR_STBITERRC		(1 << 9)
/** SDIO_ICR_DATAENDC DATAENDC **/
#define SDIO_ICR_DATAENDC		(1 << 8)
/** SDIO_ICR_CMDSENTC CMDSENTC **/
#define SDIO_ICR_CMDSENTC		(1 << 7)
/** SDIO_ICR_CMDRENDC CMDRENDC **/
#define SDIO_ICR_CMDRENDC		(1 << 6)
/** SDIO_ICR_RXOVERRC RXOVERRC **/
#define SDIO_ICR_RXOVERRC		(1 << 5)
/** SDIO_ICR_TXUNDERRC TXUNDERRC **/
#define SDIO_ICR_TXUNDERRC		(1 << 4)
/** SDIO_ICR_DTIMEOUTC DTIMEOUTC **/
#define SDIO_ICR_DTIMEOUTC		(1 << 3)
/** SDIO_ICR_CTIMEOUTC CTIMEOUTC **/
#define SDIO_ICR_CTIMEOUTC		(1 << 2)
/** SDIO_ICR_DCRCFAILC DCRCFAILC **/
#define SDIO_ICR_DCRCFAILC		(1 << 1)
/** SDIO_ICR_CCRCFAILC CCRCFAILC **/
#define SDIO_ICR_CCRCFAILC		(1 << 0)

/**@}*/

/** @defgroup sdio_mask MASK SDIO mask register (SDIO_MASK)
@{*/

/** SDIO_MASK_CEATENDIE CEATENDIE **/
#define SDIO_MASK_CEATENDIE		(1 << 23)
/** SDIO_MASK_SDIOITIE SDIOITIE **/
#define SDIO_MASK_SDIOITIE		(1 << 22)
/** SDIO_MASK_RXDAVLIE RXDAVLIE **/
#define SDIO_MASK_RXDAVLIE		(1 << 21)
/** SDIO_MASK_TXDAVLIE TXDAVLIE **/
#define SDIO_MASK_TXDAVLIE		(1 << 20)
/** SDIO_MASK_RXFIFOEIE RXFIFOEIE **/
#define SDIO_MASK_RXFIFOEIE		(1 << 19)
/** SDIO_MASK_TXFIFOEIE TXFIFOEIE **/
#define SDIO_MASK_TXFIFOEIE		(1 << 18)
/** SDIO_MASK_RXFIFOFIE RXFIFOFIE **/
#define SDIO_MASK_RXFIFOFIE		(1 << 17)
/** SDIO_MASK_TXFIFOFIE TXFIFOFIE **/
#define SDIO_MASK_TXFIFOFIE		(1 << 16)
/** SDIO_MASK_RXFIFOHFIE RXFIFOHFIE **/
#define SDIO_MASK_RXFIFOHFIE		(1 << 15)
/** SDIO_MASK_TXFIFOHEIE TXFIFOHEIE **/
#define SDIO_MASK_TXFIFOHEIE		(1 << 14)
/** SDIO_MASK_RXACTIE RXACTIE **/
#define SDIO_MASK_RXACTIE		(1 << 13)
/** SDIO_MASK_TXACTIE TXACTIE **/
#define SDIO_MASK_TXACTIE		(1 << 12)
/** SDIO_MASK_CMDACTIE CMDACTIE **/
#define SDIO_MASK_CMDACTIE		(1 << 11)
/** SDIO_MASK_DBACKENDIE DBACKENDIE **/
#define SDIO_MASK_DBACKENDIE		(1 << 10)
/** SDIO_MASK_STBITERRIE STBITERRIE **/
#define SDIO_MASK_STBITERRIE		(1 << 9)
/** SDIO_MASK_DATAENDIE DATAENDIE **/
#define SDIO_MASK_DATAENDIE		(1 << 8)
/** SDIO_MASK_CMDSENTIE CMDSENTIE **/
#define SDIO_MASK_CMDSENTIE		(1 << 7)
/** SDIO_MASK_CMDRENDIE CMDRENDIE **/
#define SDIO_MASK_CMDRENDIE		(1 << 6)
/** SDIO_MASK_RXOVERRIE RXOVERRIE **/
#define SDIO_MASK_RXOVERRIE		(1 << 5)
/** SDIO_MASK_TXUNDERRIE TXUNDERRIE **/
#define SDIO_MASK_TXUNDERRIE		(1 << 4)
/** SDIO_MASK_DTIMEOUTIE DTIMEOUTIE **/
#define SDIO_MASK_DTIMEOUTIE		(1 << 3)
/** SDIO_MASK_CTIMEOUTIE CTIMEOUTIE **/
#define SDIO_MASK_CTIMEOUTIE		(1 << 2)
/** SDIO_MASK_DCRCFAILIE DCRCFAILIE **/
#define SDIO_MASK_DCRCFAILIE		(1 << 1)
/** SDIO_MASK_CCRCFAILIE CCRCFAILIE **/
#define SDIO_MASK_CCRCFAILIE		(1 << 0)

/**@}*/

/** @defgroup sdio_fifocnt FIFOCNT Bits 23:0 = FIFOCOUNT: Remaining number of words to be written to or read from the FIFO
@{*/


#define SDIO_FIFOCNT_FIF0COUNT_SHIFT		0
#define SDIO_FIFOCNT_FIF0COUNT_MASK		0xffffff
/** @defgroup sdio_fifocnt_fif0count FIF0COUNT FIF0COUNT
@{*/
/**@}*/


/**@}*/

/** @defgroup sdio_fifo FIFO bits 31:0 = FIFOData: Receive and transmit FIFO data
@{*/


#define SDIO_FIFO_FIFOData_SHIFT		0
#define SDIO_FIFO_FIFOData_MASK		0xffffffff
/** @defgroup sdio_fifo_fifodata FIFOData FIFOData
@{*/
/**@}*/


/**@}*/

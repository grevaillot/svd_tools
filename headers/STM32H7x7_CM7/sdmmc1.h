#pragma once 

/* --- SDMMC1: SDMMC1 ----------------------------------------------- */

/** @defgroup sdmmc1_registers SDMMC1 Register
@{*/

/** SDMMC1_SDMMC_POWER SDMMC power control register **/
#define SDMMC1_SDMMC_POWER			MMIO32(SDMMC1_BASE + 0x00)
/** SDMMC1_SDMMC_CLKCR The SDMMC_CLKCR register controls the SDMMC_CK output clock, the SDMMC_RX_CLK receive clock, and the bus width. **/
#define SDMMC1_SDMMC_CLKCR			MMIO32(SDMMC1_BASE + 0x04)
/** SDMMC1_SDMMC_ARGR The SDMMC_ARGR register contains a 32-bit command argument, which is sent to a card as part of a command message. **/
#define SDMMC1_SDMMC_ARGR			MMIO32(SDMMC1_BASE + 0x08)
/** SDMMC1_SDMMC_CMDR The SDMMC_CMDR register contains the command index and command type bits. The command index is sent to a card as part of a command message. The command type bits control the command path state machine (CPSM). **/
#define SDMMC1_SDMMC_CMDR			MMIO32(SDMMC1_BASE + 0x0c)
/** SDMMC1_RESPCMDR SDMMC command response register **/
#define SDMMC1_RESPCMDR			MMIO32(SDMMC1_BASE + 0x10)
/** SDMMC1_SDMMC_RESP1R The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response. **/
#define SDMMC1_SDMMC_RESP1R			MMIO32(SDMMC1_BASE + 0x14)
/** SDMMC1_SDMMC_RESP2R The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response. **/
#define SDMMC1_SDMMC_RESP2R			MMIO32(SDMMC1_BASE + 0x18)
/** SDMMC1_SDMMC_RESP3R The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response. **/
#define SDMMC1_SDMMC_RESP3R			MMIO32(SDMMC1_BASE + 0x1c)
/** SDMMC1_SDMMC_RESP4R The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response. **/
#define SDMMC1_SDMMC_RESP4R			MMIO32(SDMMC1_BASE + 0x20)
/** SDMMC1_SDMMC_DTIMER The SDMMC_DTIMER register contains the data timeout period, in card bus clock periods. A counter loads the value from the SDMMC_DTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_R or Busy state. If the timer reaches 0 while the DPSM is in either of these states, the timeout status flag is set. **/
#define SDMMC1_SDMMC_DTIMER			MMIO32(SDMMC1_BASE + 0x24)
/** SDMMC1_SDMMC_DLENR The SDMMC_DLENR register contains the number of data bytes to be transferred. The value is loaded into the data counter when data transfer starts. **/
#define SDMMC1_SDMMC_DLENR			MMIO32(SDMMC1_BASE + 0x28)
/** SDMMC1_SDMMC_DCTRL The SDMMC_DCTRL register control the data path state machine (DPSM). **/
#define SDMMC1_SDMMC_DCTRL			MMIO32(SDMMC1_BASE + 0x2c)
/** SDMMC1_SDMMC_DCNTR The SDMMC_DCNTR register loads the value from the data length register (see SDMMC_DLENR) when the DPSM moves from the Idle state to the Wait_R or Wait_S state. As data is transferred, the counter decrements the value until it reaches 0. The DPSM then moves to the Idle state and when there has been no error, the data status end flag (DATAEND) is set. **/
#define SDMMC1_SDMMC_DCNTR			MMIO32(SDMMC1_BASE + 0x30)
/** SDMMC1_SDMMC_STAR The SDMMC_STAR register is a read-only register. It contains two types of flag:Static flags (bits [29,21,11:0]): these bits remain asserted until they are cleared by writing to the SDMMC interrupt Clear register (see SDMMC_ICR)Dynamic flags (bits [20:12]): these bits change state depending on the state of the underlying logic (for example, FIFO full and empty flags are asserted and de-asserted as data while written to the FIFO) **/
#define SDMMC1_SDMMC_STAR			MMIO32(SDMMC1_BASE + 0x34)
/** SDMMC1_SDMMC_ICR The SDMMC_ICR register is a write-only register. Writing a bit with 1 clears the corresponding bit in the SDMMC_STAR status register. **/
#define SDMMC1_SDMMC_ICR			MMIO32(SDMMC1_BASE + 0x38)
/** SDMMC1_SDMMC_MASKR The interrupt mask register determines which status flags generate an interrupt request by setting the corresponding bit to 1. **/
#define SDMMC1_SDMMC_MASKR			MMIO32(SDMMC1_BASE + 0x3c)
/** SDMMC1_SDMMC_ACKTIMER The SDMMC_ACKTIMER register contains the acknowledgment timeout period, in SDMMC_CK bus clock periods. A counter loads the value from the SDMMC_ACKTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_Ack state. If the timer reaches 0 while the DPSM is in this states, the acknowledgment timeout status flag is set. **/
#define SDMMC1_SDMMC_ACKTIMER			MMIO32(SDMMC1_BASE + 0x40)
/** SDMMC1_SDMMC_IDMACTRLR The receive and transmit FIFOs can be read or written as 32-bit wide registers. The FIFOs contain 32 entries on 32 sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO. **/
#define SDMMC1_SDMMC_IDMACTRLR			MMIO32(SDMMC1_BASE + 0x50)
/** SDMMC1_SDMMC_IDMABSIZER The SDMMC_IDMABSIZER register contains the buffers size when in double buffer configuration. **/
#define SDMMC1_SDMMC_IDMABSIZER			MMIO32(SDMMC1_BASE + 0x54)
/** SDMMC1_SDMMC_IDMABASE0R The SDMMC_IDMABASE0R register contains the memory buffer base address in single buffer configuration and the buffer 0 base address in double buffer configuration. **/
#define SDMMC1_SDMMC_IDMABASE0R			MMIO32(SDMMC1_BASE + 0x58)
/** SDMMC1_SDMMC_IDMABASE1R The SDMMC_IDMABASE1R register contains the double buffer configuration second buffer memory base address. **/
#define SDMMC1_SDMMC_IDMABASE1R			MMIO32(SDMMC1_BASE + 0x5c)
/** SDMMC1_SDMMC_FIFOR The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO.When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated. **/
#define SDMMC1_SDMMC_FIFOR			MMIO32(SDMMC1_BASE + 0x80)

/**@}*/


/** @defgroup sdmmc1_sdmmc_power SDMMCPOWER SDMMC power control register
@{*/

/** SDMMC1_SDMMC_POWER_DIRPOL Data and command direction signals polarity selection. This bit can only be written when the SDMMC is in the power-off state (PWRCTRL = 00). **/
#define SDMMC1_SDMMC_POWER_DIRPOL		(1 << 4)
/** SDMMC1_SDMMC_POWER_VSWITCHEN Voltage switch procedure enable. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). This bit is used to stop the SDMMC_CK after the voltage switch command response: **/
#define SDMMC1_SDMMC_POWER_VSWITCHEN		(1 << 3)
/** SDMMC1_SDMMC_POWER_VSWITCH Voltage switch sequence start. This bit is used to start the timing critical section of the voltage switch sequence: **/
#define SDMMC1_SDMMC_POWER_VSWITCH		(1 << 2)

#define SDMMC1_SDMMC_POWER_PWRCTRL_SHIFT		0
#define SDMMC1_SDMMC_POWER_PWRCTRL_MASK		0x03
/** @defgroup sdmmc1_sdmmc_power_pwrctrl PWRCTRL SDMMC state control bits. These bits can only be written when the SDMMC is not in the power-on state (PWRCTRL?11). These bits are used to define the functional state of the SDMMC signals: Any further write will be ignored, PWRCTRL value will keep 11.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_clkcr SDMMCCLKCR The SDMMC_CLKCR register controls the SDMMC_CK output clock, the SDMMC_RX_CLK receive clock, and the bus width.
@{*/


#define SDMMC1_SDMMC_CLKCR_SELCLKRX_SHIFT		20
#define SDMMC1_SDMMC_CLKCR_SELCLKRX_MASK		0x03
/** @defgroup sdmmc1_sdmmc_clkcr_selclkrx SELCLKRX Receive clock selection. These bits can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0)
@{*/
/**@}*/

/** SDMMC1_SDMMC_CLKCR_BUSSPEED Bus speed mode selection between DS, HS, SDR12, SDR25 and SDR50, DDR50, SDR104. This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) **/
#define SDMMC1_SDMMC_CLKCR_BUSSPEED		(1 << 19)
/** SDMMC1_SDMMC_CLKCR_DDR Data rate signaling selection This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) DDR rate shall only be selected with 4-bit or 8-bit wide bus mode. (WIDBUS &gt; 00). DDR = 1 has no effect when WIDBUS = 00 (1-bit wide bus). DDR rate shall only be selected with clock division &gt;1. (CLKDIV &gt; 0) **/
#define SDMMC1_SDMMC_CLKCR_DDR		(1 << 18)
/** SDMMC1_SDMMC_CLKCR_HWFC_EN Hardware flow control enable This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) When Hardware flow control is enabled, the meaning of the TXFIFOE and RXFIFOF flags change, please see SDMMC status register definition in Section56.8.11. **/
#define SDMMC1_SDMMC_CLKCR_HWFC_EN		(1 << 17)
/** SDMMC1_SDMMC_CLKCR_NEGEDGE SDMMC_CK dephasing selection bit for data and Command. This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). When clock division = 1 (CLKDIV = 0), this bit has no effect. Data and Command change on SDMMC_CK falling edge. When clock division &gt;1 (CLKDIV &gt; 0) &amp; DDR = 0: - SDMMC_CK edge occurs on SDMMCCLK rising edge. When clock division >1 (CLKDIV > 0) & DDR = 1: - Data changed on the SDMMCCLK falling edge succeeding a SDMMC_CK edge. - SDMMC_CK edge occurs on SDMMCCLK rising edge. - Data changed on the SDMMC_CK falling edge succeeding a SDMMC_CK edge. - SDMMC_CK edge occurs on SDMMCCLK rising edge. **/
#define SDMMC1_SDMMC_CLKCR_NEGEDGE		(1 << 16)

#define SDMMC1_SDMMC_CLKCR_WIDBUS_SHIFT		14
#define SDMMC1_SDMMC_CLKCR_WIDBUS_MASK		0x03
/** @defgroup sdmmc1_sdmmc_clkcr_widbus WIDBUS Wide bus mode enable bit This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0)
@{*/
/**@}*/

/** SDMMC1_SDMMC_CLKCR_PWRSAV Power saving configuration bit This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0) For power saving, the SDMMC_CK clock output can be disabled when the bus is idle by setting PWRSAV: **/
#define SDMMC1_SDMMC_CLKCR_PWRSAV		(1 << 12)

#define SDMMC1_SDMMC_CLKCR_CLKDIV_SHIFT		0
#define SDMMC1_SDMMC_CLKCR_CLKDIV_MASK		0x3ff
/** @defgroup sdmmc1_sdmmc_clkcr_clkdiv CLKDIV Clock divide factor This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). This field defines the divide factor between the input clock (SDMMCCLK) and the output clock (SDMMC_CK): SDMMC_CK frequency = SDMMCCLK / [2 * CLKDIV]. 0xx: etc.. xxx: etc..
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_argr SDMMCARGR The SDMMC_ARGR register contains a 32-bit command argument, which is sent to a card as part of a command message.
@{*/


#define SDMMC1_SDMMC_ARGR_CMDARG_SHIFT		0
#define SDMMC1_SDMMC_ARGR_CMDARG_MASK		0xffffffff
/** @defgroup sdmmc1_sdmmc_argr_cmdarg CMDARG Command argument. These bits can only be written by firmware when CPSM is disabled (CPSMEN = 0). Command argument sent to a card as part of a command message. If a command contains an argument, it must be loaded into this register before writing a command to the command register.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_cmdr SDMMCCMDR The SDMMC_CMDR register contains the command index and command type bits. The command index is sent to a card as part of a command message. The command type bits control the command path state machine (CPSM).
@{*/

/** SDMMC1_SDMMC_CMDR_CMDSUSPEND The CPSM treats the command as a Suspend or Resume command and signals interrupt period start/end. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). CMDSUSPEND = 1 and CMDTRANS = 0 Suspend command, start interrupt period when response bit BS=0. CMDSUSPEND = 1 and CMDTRANS = 1 Resume command with data, end interrupt period when response bit DF=1. **/
#define SDMMC1_SDMMC_CMDR_CMDSUSPEND		(1 << 16)
/** SDMMC1_SDMMC_CMDR_BOOTEN Enable boot mode procedure. **/
#define SDMMC1_SDMMC_CMDR_BOOTEN		(1 << 15)
/** SDMMC1_SDMMC_CMDR_BOOTMODE Select the boot mode procedure to be used. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0) **/
#define SDMMC1_SDMMC_CMDR_BOOTMODE		(1 << 14)
/** SDMMC1_SDMMC_CMDR_DTHOLD Hold new data block transmission and reception in the DPSM. If this bit is set, the DPSM will not move from the Wait_S state to the Send state or from the Wait_R state to the Receive state. **/
#define SDMMC1_SDMMC_CMDR_DTHOLD		(1 << 13)
/** SDMMC1_SDMMC_CMDR_CPSMEN Command path state machine (CPSM) Enable bit This bit is written 1 by firmware, and cleared by hardware when the CPSM enters the Idle state. If this bit is set, the CPSM is enabled. When DTEN = 1, no command will be transfered nor boot procedure will be started. CPSMEN is cleared to 0. **/
#define SDMMC1_SDMMC_CMDR_CPSMEN		(1 << 12)
/** SDMMC1_SDMMC_CMDR_WAITPEND CPSM Waits for end of data transfer (CmdPend internal signal) from DPSM. This bit when set, the CPSM waits for the end of data transfer trigger before it starts sending a command. WAITPEND is only taken into account when DTMODE = MMC stream data transfer, WIDBUS = 1-bit wide bus mode, DPSMACT = 1 and DTDIR = from host to card. **/
#define SDMMC1_SDMMC_CMDR_WAITPEND		(1 << 11)
/** SDMMC1_SDMMC_CMDR_WAITINT CPSM waits for interrupt request. If this bit is set, the CPSM disables command timeout and waits for an card interrupt request (Response). If this bit is cleared in the CPSM Wait state, will cause the abort of the interrupt mode. **/
#define SDMMC1_SDMMC_CMDR_WAITINT		(1 << 10)

#define SDMMC1_SDMMC_CMDR_WAITRESP_SHIFT		8
#define SDMMC1_SDMMC_CMDR_WAITRESP_MASK		0x03
/** @defgroup sdmmc1_sdmmc_cmdr_waitresp WAITRESP Wait for response bits. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). They are used to configure whether the CPSM is to wait for a response, and if yes, which kind of response.
@{*/
/**@}*/

/** SDMMC1_SDMMC_CMDR_CMDSTOP The CPSM treats the command as a Stop Transmission command and signals Abort to the DPSM. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). If this bit is set, the CPSM issues the Abort signal to the DPSM when the command is sent. **/
#define SDMMC1_SDMMC_CMDR_CMDSTOP		(1 << 7)
/** SDMMC1_SDMMC_CMDR_CMDTRANS The CPSM treats the command as a data transfer command, stops the interrupt period, and signals DataEnable to the DPSM This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). If this bit is set, the CPSM issues an end of interrupt period and issues DataEnable signal to the DPSM when the command is sent. **/
#define SDMMC1_SDMMC_CMDR_CMDTRANS		(1 << 6)

#define SDMMC1_SDMMC_CMDR_CMDINDEX_SHIFT		0
#define SDMMC1_SDMMC_CMDR_CMDINDEX_MASK		0x3f
/** @defgroup sdmmc1_sdmmc_cmdr_cmdindex CMDINDEX Command index. This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). The command index is sent to the card as part of a command message.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_respcmdr RESPCMDR SDMMC command response register
@{*/


#define SDMMC1_RESPCMDR_RESPCMD_SHIFT		0
#define SDMMC1_RESPCMDR_RESPCMD_MASK		0x3f
/** @defgroup sdmmc1_respcmdr_respcmd RESPCMD Response command index
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_resp1r SDMMCRESP1R The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
@{*/


#define SDMMC1_SDMMC_RESP1R_CARDSTATUS1_SHIFT		0
#define SDMMC1_SDMMC_RESP1R_CARDSTATUS1_MASK		0xffffffff
/** @defgroup sdmmc1_sdmmc_resp1r_cardstatus1 CARDSTATUS1 see Table 432
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_resp2r SDMMCRESP2R The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
@{*/


#define SDMMC1_SDMMC_RESP2R_CARDSTATUS2_SHIFT		0
#define SDMMC1_SDMMC_RESP2R_CARDSTATUS2_MASK		0xffffffff
/** @defgroup sdmmc1_sdmmc_resp2r_cardstatus2 CARDSTATUS2 see Table404.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_resp3r SDMMCRESP3R The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
@{*/


#define SDMMC1_SDMMC_RESP3R_CARDSTATUS3_SHIFT		0
#define SDMMC1_SDMMC_RESP3R_CARDSTATUS3_MASK		0xffffffff
/** @defgroup sdmmc1_sdmmc_resp3r_cardstatus3 CARDSTATUS3 see Table404.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_resp4r SDMMCRESP4R The SDMMC_RESP1/2/3/4R registers contain the status of a card, which is part of the received response.
@{*/


#define SDMMC1_SDMMC_RESP4R_CARDSTATUS4_SHIFT		0
#define SDMMC1_SDMMC_RESP4R_CARDSTATUS4_MASK		0xffffffff
/** @defgroup sdmmc1_sdmmc_resp4r_cardstatus4 CARDSTATUS4 see Table404.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_dtimer SDMMCDTIMER The SDMMC_DTIMER register contains the data timeout period, in card bus clock periods. A counter loads the value from the SDMMC_DTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_R or Busy state. If the timer reaches 0 while the DPSM is in either of these states, the timeout status flag is set.
@{*/


#define SDMMC1_SDMMC_DTIMER_DATATIME_SHIFT		0
#define SDMMC1_SDMMC_DTIMER_DATATIME_MASK		0xffffffff
/** @defgroup sdmmc1_sdmmc_dtimer_datatime DATATIME Data and R1b busy timeout period This bit can only be written when the CPSM and DPSM are not active (CPSMACT = 0 and DPSMACT = 0). Data and R1b busy timeout period expressed in card bus clock periods.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_dlenr SDMMCDLENR The SDMMC_DLENR register contains the number of data bytes to be transferred. The value is loaded into the data counter when data transfer starts.
@{*/


#define SDMMC1_SDMMC_DLENR_DATALENGTH_SHIFT		0
#define SDMMC1_SDMMC_DLENR_DATALENGTH_MASK		0x1ffffff
/** @defgroup sdmmc1_sdmmc_dlenr_datalength DATALENGTH Data length value This register can only be written by firmware when DPSM is inactive (DPSMACT = 0). Number of data bytes to be transferred. When DDR = 1 DATALENGTH is truncated to a multiple of 2. (The last odd byte is not transfered) When DATALENGTH = 0 no data will be transfered, when requested by a CPSMEN and CMDTRANS = 1 also no command will be transfered. DTEN and CPSMEN are cleared to 0.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_dctrl SDMMCDCTRL The SDMMC_DCTRL register control the data path state machine (DPSM).
@{*/

/** SDMMC1_SDMMC_DCTRL_FIFORST FIFO reset, will flush any remaining data. This bit can only be written by firmware when IDMAEN= 0 and DPSM is active (DPSMACT = 1). This bit will only take effect when a transfer error or transfer hold occurs. **/
#define SDMMC1_SDMMC_DCTRL_FIFORST		(1 << 13)
/** SDMMC1_SDMMC_DCTRL_BOOTACKEN Enable the reception of the boot acknowledgment. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). **/
#define SDMMC1_SDMMC_DCTRL_BOOTACKEN		(1 << 12)
/** SDMMC1_SDMMC_DCTRL_SDIOEN SD I/O interrupt enable functions This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). If this bit is set, the DPSM enables the SD I/O card specific interrupt operation. **/
#define SDMMC1_SDMMC_DCTRL_SDIOEN		(1 << 11)
/** SDMMC1_SDMMC_DCTRL_RWMOD Read wait mode. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). **/
#define SDMMC1_SDMMC_DCTRL_RWMOD		(1 << 10)
/** SDMMC1_SDMMC_DCTRL_RWSTOP Read wait stop This bit is written by firmware and auto cleared by hardware when the DPSM moves from the READ_WAIT state to the WAIT_R or IDLE state. **/
#define SDMMC1_SDMMC_DCTRL_RWSTOP		(1 << 9)
/** SDMMC1_SDMMC_DCTRL_RWSTART Read wait start. If this bit is set, read wait operation starts. **/
#define SDMMC1_SDMMC_DCTRL_RWSTART		(1 << 8)

#define SDMMC1_SDMMC_DCTRL_DBLOCKSIZE_SHIFT		4
#define SDMMC1_SDMMC_DCTRL_DBLOCKSIZE_MASK		0x0f
/** @defgroup sdmmc1_sdmmc_dctrl_dblocksize DBLOCKSIZE Data block size This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). Define the data block length when the block data transfer mode is selected: When DATALENGTH is not a multiple of DBLOCKSIZE, the transfered data is truncated at a multiple of DBLOCKSIZE. (Any remain data will not be transfered.) When DDR = 1, DBLOCKSIZE = 0000 shall not be used. (No data will be transfered)
@{*/
/**@}*/


#define SDMMC1_SDMMC_DCTRL_DTMODE_SHIFT		2
#define SDMMC1_SDMMC_DCTRL_DTMODE_MASK		0x03
/** @defgroup sdmmc1_sdmmc_dctrl_dtmode DTMODE Data transfer mode selection. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0).
@{*/
/**@}*/

/** SDMMC1_SDMMC_DCTRL_DTDIR Data transfer direction selection This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). **/
#define SDMMC1_SDMMC_DCTRL_DTDIR		(1 << 1)
/** SDMMC1_SDMMC_DCTRL_DTEN Data transfer enable bit This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). This bit is cleared by Hardware when data transfer completes. This bit shall only be used to transfer data when no associated data transfer command is used, i.e. shall not be used with SD or eMMC cards. **/
#define SDMMC1_SDMMC_DCTRL_DTEN		(1 << 0)

/**@}*/

/** @defgroup sdmmc1_sdmmc_dcntr SDMMCDCNTR The SDMMC_DCNTR register loads the value from the data length register (see SDMMC_DLENR) when the DPSM moves from the Idle state to the Wait_R or Wait_S state. As data is transferred, the counter decrements the value until it reaches 0. The DPSM then moves to the Idle state and when there has been no error, the data status end flag (DATAEND) is set.
@{*/


#define SDMMC1_SDMMC_DCNTR_DATACOUNT_SHIFT		0
#define SDMMC1_SDMMC_DCNTR_DATACOUNT_MASK		0x1ffffff
/** @defgroup sdmmc1_sdmmc_dcntr_datacount DATACOUNT Data count value When read, the number of remaining data bytes to be transferred is returned. Write has no effect.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_star SDMMCSTAR The SDMMC_STAR register is a read-only register. It contains two types of flag:Static flags (bits [29,21,11:0]): these bits remain asserted until they are cleared by writing to the SDMMC interrupt Clear register (see SDMMC_ICR)Dynamic flags (bits [20:12]): these bits change state depending on the state of the underlying logic (for example, FIFO full and empty flags are asserted and de-asserted as data while written to the FIFO)
@{*/

/** SDMMC1_SDMMC_STAR_IDMABTC IDMA buffer transfer complete. interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_IDMABTC		(1 << 28)
/** SDMMC1_SDMMC_STAR_IDMATE IDMA transfer error. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_IDMATE		(1 << 27)
/** SDMMC1_SDMMC_STAR_CKSTOP SDMMC_CK stopped in Voltage switch procedure. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_CKSTOP		(1 << 26)
/** SDMMC1_SDMMC_STAR_VSWEND Voltage switch critical timing section completion. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_VSWEND		(1 << 25)
/** SDMMC1_SDMMC_STAR_ACKTIMEOUT Boot acknowledgment timeout. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_ACKTIMEOUT		(1 << 24)
/** SDMMC1_SDMMC_STAR_ACKFAIL Boot acknowledgment received (boot acknowledgment check fail). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_ACKFAIL		(1 << 23)
/** SDMMC1_SDMMC_STAR_SDIOIT SDIO interrupt received. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_SDIOIT		(1 << 22)
/** SDMMC1_SDMMC_STAR_BUSYD0END end of SDMMC_D0 Busy following a CMD response detected. This indicates only end of busy following a CMD response. This bit does not signal busy due to data transfer. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_BUSYD0END		(1 << 21)
/** SDMMC1_SDMMC_STAR_BUSYD0 Inverted value of SDMMC_D0 line (Busy), sampled at the end of a CMD response and a second time 2 SDMMC_CK cycles after the CMD response. This bit is reset to not busy when the SDMMCD0 line changes from busy to not busy. This bit does not signal busy due to data transfer. This is a hardware status flag only, it does not generate an interrupt. **/
#define SDMMC1_SDMMC_STAR_BUSYD0		(1 << 20)
/** SDMMC1_SDMMC_STAR_RXFIFOE Receive FIFO empty This is a hardware status flag only, does not generate an interrupt. This bit is cleared when one FIFO location becomes full. **/
#define SDMMC1_SDMMC_STAR_RXFIFOE		(1 << 19)
/** SDMMC1_SDMMC_STAR_TXFIFOE Transmit FIFO empty This bit is cleared when one FIFO location becomes full. **/
#define SDMMC1_SDMMC_STAR_TXFIFOE		(1 << 18)
/** SDMMC1_SDMMC_STAR_RXFIFOF Receive FIFO full This bit is cleared when one FIFO location becomes empty. **/
#define SDMMC1_SDMMC_STAR_RXFIFOF		(1 << 17)
/** SDMMC1_SDMMC_STAR_TXFIFOF Transmit FIFO full This is a hardware status flag only, does not generate an interrupt. This bit is cleared when one FIFO location becomes empty. **/
#define SDMMC1_SDMMC_STAR_TXFIFOF		(1 << 16)
/** SDMMC1_SDMMC_STAR_RXFIFOHF Receive FIFO half full There are at least half the number of words in the FIFO. This bit is cleared when the FIFO becomes half+1 empty. **/
#define SDMMC1_SDMMC_STAR_RXFIFOHF		(1 << 15)
/** SDMMC1_SDMMC_STAR_TXFIFOHE Transmit FIFO half empty At least half the number of words can be written into the FIFO. This bit is cleared when the FIFO becomes half+1 full. **/
#define SDMMC1_SDMMC_STAR_TXFIFOHE		(1 << 14)
/** SDMMC1_SDMMC_STAR_CPSMACT Command path state machine active, i.e. not in Idle state. This is a hardware status flag only, does not generate an interrupt. **/
#define SDMMC1_SDMMC_STAR_CPSMACT		(1 << 13)
/** SDMMC1_SDMMC_STAR_DPSMACT Data path state machine active, i.e. not in Idle state. This is a hardware status flag only, does not generate an interrupt. **/
#define SDMMC1_SDMMC_STAR_DPSMACT		(1 << 12)
/** SDMMC1_SDMMC_STAR_DABORT Data transfer aborted by CMD12. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_DABORT		(1 << 11)
/** SDMMC1_SDMMC_STAR_DBCKEND Data block sent/received. (CRC check passed) and DPSM moves to the READWAIT state. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_DBCKEND		(1 << 10)
/** SDMMC1_SDMMC_STAR_DHOLD Data transfer Hold. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_DHOLD		(1 << 9)
/** SDMMC1_SDMMC_STAR_DATAEND Data transfer ended correctly. (data counter, DATACOUNT is zero and no errors occur). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_DATAEND		(1 << 8)
/** SDMMC1_SDMMC_STAR_CMDSENT Command sent (no response required). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_CMDSENT		(1 << 7)
/** SDMMC1_SDMMC_STAR_CMDREND Command response received (CRC check passed, or no CRC). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_CMDREND		(1 << 6)
/** SDMMC1_SDMMC_STAR_RXOVERR Received FIFO overrun error or IDMA write transfer error. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_RXOVERR		(1 << 5)
/** SDMMC1_SDMMC_STAR_TXUNDERR Transmit FIFO underrun error or IDMA read transfer error. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_TXUNDERR		(1 << 4)
/** SDMMC1_SDMMC_STAR_DTIMEOUT Data timeout. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_DTIMEOUT		(1 << 3)
/** SDMMC1_SDMMC_STAR_CTIMEOUT Command response timeout. Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. The Command Timeout period has a fixed value of 64 SDMMC_CK clock periods. **/
#define SDMMC1_SDMMC_STAR_CTIMEOUT		(1 << 2)
/** SDMMC1_SDMMC_STAR_DCRCFAIL Data block sent/received (CRC check failed). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_DCRCFAIL		(1 << 1)
/** SDMMC1_SDMMC_STAR_CCRCFAIL Command response received (CRC check failed). Interrupt flag is cleared by writing corresponding interrupt clear bit in SDMMC_ICR. **/
#define SDMMC1_SDMMC_STAR_CCRCFAIL		(1 << 0)

/**@}*/

/** @defgroup sdmmc1_sdmmc_icr SDMMCICR The SDMMC_ICR register is a write-only register. Writing a bit with 1 clears the corresponding bit in the SDMMC_STAR status register.
@{*/

/** SDMMC1_SDMMC_ICR_IDMABTCC IDMA buffer transfer complete clear bit Set by software to clear the IDMABTC flag. **/
#define SDMMC1_SDMMC_ICR_IDMABTCC		(1 << 28)
/** SDMMC1_SDMMC_ICR_IDMATEC IDMA transfer error clear bit Set by software to clear the IDMATE flag. **/
#define SDMMC1_SDMMC_ICR_IDMATEC		(1 << 27)
/** SDMMC1_SDMMC_ICR_CKSTOPC CKSTOP flag clear bit Set by software to clear the CKSTOP flag. **/
#define SDMMC1_SDMMC_ICR_CKSTOPC		(1 << 26)
/** SDMMC1_SDMMC_ICR_VSWENDC VSWEND flag clear bit Set by software to clear the VSWEND flag. **/
#define SDMMC1_SDMMC_ICR_VSWENDC		(1 << 25)
/** SDMMC1_SDMMC_ICR_ACKTIMEOUTC ACKTIMEOUT flag clear bit Set by software to clear the ACKTIMEOUT flag. **/
#define SDMMC1_SDMMC_ICR_ACKTIMEOUTC		(1 << 24)
/** SDMMC1_SDMMC_ICR_ACKFAILC ACKFAIL flag clear bit Set by software to clear the ACKFAIL flag. **/
#define SDMMC1_SDMMC_ICR_ACKFAILC		(1 << 23)
/** SDMMC1_SDMMC_ICR_SDIOITC SDIOIT flag clear bit Set by software to clear the SDIOIT flag. **/
#define SDMMC1_SDMMC_ICR_SDIOITC		(1 << 22)
/** SDMMC1_SDMMC_ICR_BUSYD0ENDC BUSYD0END flag clear bit Set by software to clear the BUSYD0END flag. **/
#define SDMMC1_SDMMC_ICR_BUSYD0ENDC		(1 << 21)
/** SDMMC1_SDMMC_ICR_DABORTC DABORT flag clear bit Set by software to clear the DABORT flag. **/
#define SDMMC1_SDMMC_ICR_DABORTC		(1 << 11)
/** SDMMC1_SDMMC_ICR_DBCKENDC DBCKEND flag clear bit Set by software to clear the DBCKEND flag. **/
#define SDMMC1_SDMMC_ICR_DBCKENDC		(1 << 10)
/** SDMMC1_SDMMC_ICR_DHOLDC DHOLD flag clear bit Set by software to clear the DHOLD flag. **/
#define SDMMC1_SDMMC_ICR_DHOLDC		(1 << 9)
/** SDMMC1_SDMMC_ICR_DATAENDC DATAEND flag clear bit Set by software to clear the DATAEND flag. **/
#define SDMMC1_SDMMC_ICR_DATAENDC		(1 << 8)
/** SDMMC1_SDMMC_ICR_CMDSENTC CMDSENT flag clear bit Set by software to clear the CMDSENT flag. **/
#define SDMMC1_SDMMC_ICR_CMDSENTC		(1 << 7)
/** SDMMC1_SDMMC_ICR_CMDRENDC CMDREND flag clear bit Set by software to clear the CMDREND flag. **/
#define SDMMC1_SDMMC_ICR_CMDRENDC		(1 << 6)
/** SDMMC1_SDMMC_ICR_RXOVERRC RXOVERR flag clear bit Set by software to clear the RXOVERR flag. **/
#define SDMMC1_SDMMC_ICR_RXOVERRC		(1 << 5)
/** SDMMC1_SDMMC_ICR_TXUNDERRC TXUNDERR flag clear bit Set by software to clear TXUNDERR flag. **/
#define SDMMC1_SDMMC_ICR_TXUNDERRC		(1 << 4)
/** SDMMC1_SDMMC_ICR_DTIMEOUTC DTIMEOUT flag clear bit Set by software to clear the DTIMEOUT flag. **/
#define SDMMC1_SDMMC_ICR_DTIMEOUTC		(1 << 3)
/** SDMMC1_SDMMC_ICR_CTIMEOUTC CTIMEOUT flag clear bit Set by software to clear the CTIMEOUT flag. **/
#define SDMMC1_SDMMC_ICR_CTIMEOUTC		(1 << 2)
/** SDMMC1_SDMMC_ICR_DCRCFAILC DCRCFAIL flag clear bit Set by software to clear the DCRCFAIL flag. **/
#define SDMMC1_SDMMC_ICR_DCRCFAILC		(1 << 1)
/** SDMMC1_SDMMC_ICR_CCRCFAILC CCRCFAIL flag clear bit Set by software to clear the CCRCFAIL flag. **/
#define SDMMC1_SDMMC_ICR_CCRCFAILC		(1 << 0)

/**@}*/

/** @defgroup sdmmc1_sdmmc_maskr SDMMCMASKR The interrupt mask register determines which status flags generate an interrupt request by setting the corresponding bit to 1.
@{*/

/** SDMMC1_SDMMC_MASKR_IDMABTCIE IDMA buffer transfer complete interrupt enable Set and cleared by software to enable/disable the interrupt generated when the IDMA has transferred all data belonging to a memory buffer. **/
#define SDMMC1_SDMMC_MASKR_IDMABTCIE		(1 << 28)
/** SDMMC1_SDMMC_MASKR_CKSTOPIE Voltage Switch clock stopped interrupt enable Set and cleared by software to enable/disable interrupt caused by Voltage Switch clock stopped. **/
#define SDMMC1_SDMMC_MASKR_CKSTOPIE		(1 << 26)
/** SDMMC1_SDMMC_MASKR_VSWENDIE Voltage switch critical timing section completion interrupt enable Set and cleared by software to enable/disable the interrupt generated when voltage switch critical timing section completion. **/
#define SDMMC1_SDMMC_MASKR_VSWENDIE		(1 << 25)
/** SDMMC1_SDMMC_MASKR_ACKTIMEOUTIE Acknowledgment timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by acknowledgment timeout. **/
#define SDMMC1_SDMMC_MASKR_ACKTIMEOUTIE		(1 << 24)
/** SDMMC1_SDMMC_MASKR_ACKFAILIE Acknowledgment Fail interrupt enable Set and cleared by software to enable/disable interrupt caused by acknowledgment Fail. **/
#define SDMMC1_SDMMC_MASKR_ACKFAILIE		(1 << 23)
/** SDMMC1_SDMMC_MASKR_SDIOITIE SDIO mode interrupt received interrupt enable Set and cleared by software to enable/disable the interrupt generated when receiving the SDIO mode interrupt. **/
#define SDMMC1_SDMMC_MASKR_SDIOITIE		(1 << 22)
/** SDMMC1_SDMMC_MASKR_BUSYD0ENDIE BUSYD0END interrupt enable Set and cleared by software to enable/disable the interrupt generated when SDMMC_D0 signal changes from busy to NOT busy following a CMD response. **/
#define SDMMC1_SDMMC_MASKR_BUSYD0ENDIE		(1 << 21)
/** SDMMC1_SDMMC_MASKR_TXFIFOEIE Tx FIFO empty interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO empty. **/
#define SDMMC1_SDMMC_MASKR_TXFIFOEIE		(1 << 18)
/** SDMMC1_SDMMC_MASKR_RXFIFOFIE Rx FIFO full interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO full. **/
#define SDMMC1_SDMMC_MASKR_RXFIFOFIE		(1 << 17)
/** SDMMC1_SDMMC_MASKR_RXFIFOHFIE Rx FIFO half full interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO half full. **/
#define SDMMC1_SDMMC_MASKR_RXFIFOHFIE		(1 << 15)
/** SDMMC1_SDMMC_MASKR_TXFIFOHEIE Tx FIFO half empty interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO half empty. **/
#define SDMMC1_SDMMC_MASKR_TXFIFOHEIE		(1 << 14)
/** SDMMC1_SDMMC_MASKR_DABORTIE Data transfer aborted interrupt enable Set and cleared by software to enable/disable interrupt caused by a data transfer being aborted. **/
#define SDMMC1_SDMMC_MASKR_DABORTIE		(1 << 11)
/** SDMMC1_SDMMC_MASKR_DBCKENDIE Data block end interrupt enable Set and cleared by software to enable/disable interrupt caused by data block end. **/
#define SDMMC1_SDMMC_MASKR_DBCKENDIE		(1 << 10)
/** SDMMC1_SDMMC_MASKR_DHOLDIE Data hold interrupt enable Set and cleared by software to enable/disable the interrupt generated when sending new data is hold in the DPSM Wait_S state. **/
#define SDMMC1_SDMMC_MASKR_DHOLDIE		(1 << 9)
/** SDMMC1_SDMMC_MASKR_DATAENDIE Data end interrupt enable Set and cleared by software to enable/disable interrupt caused by data end. **/
#define SDMMC1_SDMMC_MASKR_DATAENDIE		(1 << 8)
/** SDMMC1_SDMMC_MASKR_CMDSENTIE Command sent interrupt enable Set and cleared by software to enable/disable interrupt caused by sending command. **/
#define SDMMC1_SDMMC_MASKR_CMDSENTIE		(1 << 7)
/** SDMMC1_SDMMC_MASKR_CMDRENDIE Command response received interrupt enable Set and cleared by software to enable/disable interrupt caused by receiving command response. **/
#define SDMMC1_SDMMC_MASKR_CMDRENDIE		(1 << 6)
/** SDMMC1_SDMMC_MASKR_RXOVERRIE Rx FIFO overrun error interrupt enable Set and cleared by software to enable/disable interrupt caused by Rx FIFO overrun error. **/
#define SDMMC1_SDMMC_MASKR_RXOVERRIE		(1 << 5)
/** SDMMC1_SDMMC_MASKR_TXUNDERRIE Tx FIFO underrun error interrupt enable Set and cleared by software to enable/disable interrupt caused by Tx FIFO underrun error. **/
#define SDMMC1_SDMMC_MASKR_TXUNDERRIE		(1 << 4)
/** SDMMC1_SDMMC_MASKR_DTIMEOUTIE Data timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by data timeout. **/
#define SDMMC1_SDMMC_MASKR_DTIMEOUTIE		(1 << 3)
/** SDMMC1_SDMMC_MASKR_CTIMEOUTIE Command timeout interrupt enable Set and cleared by software to enable/disable interrupt caused by command timeout. **/
#define SDMMC1_SDMMC_MASKR_CTIMEOUTIE		(1 << 2)
/** SDMMC1_SDMMC_MASKR_DCRCFAILIE Data CRC fail interrupt enable Set and cleared by software to enable/disable interrupt caused by data CRC failure. **/
#define SDMMC1_SDMMC_MASKR_DCRCFAILIE		(1 << 1)
/** SDMMC1_SDMMC_MASKR_CCRCFAILIE Command CRC fail interrupt enable Set and cleared by software to enable/disable interrupt caused by command CRC failure. **/
#define SDMMC1_SDMMC_MASKR_CCRCFAILIE		(1 << 0)

/**@}*/

/** @defgroup sdmmc1_sdmmc_acktimer SDMMCACKTIMER The SDMMC_ACKTIMER register contains the acknowledgment timeout period, in SDMMC_CK bus clock periods. A counter loads the value from the SDMMC_ACKTIMER register, and starts decrementing when the data path state machine (DPSM) enters the Wait_Ack state. If the timer reaches 0 while the DPSM is in this states, the acknowledgment timeout status flag is set.
@{*/


#define SDMMC1_SDMMC_ACKTIMER_ACKTIME_SHIFT		0
#define SDMMC1_SDMMC_ACKTIMER_ACKTIME_MASK		0x1ffffff
/** @defgroup sdmmc1_sdmmc_acktimer_acktime ACKTIME Boot acknowledgment timeout period This bit can only be written by firmware when CPSM is disabled (CPSMEN = 0). Boot acknowledgment timeout period expressed in card bus clock periods.
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_idmactrlr SDMMCIDMACTRLR The receive and transmit FIFOs can be read or written as 32-bit wide registers. The FIFOs contain 32 entries on 32 sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO.
@{*/

/** SDMMC1_SDMMC_IDMACTRLR_IDMABACT Double buffer mode active buffer indication This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). When IDMA is enabled this bit is toggled by hardware. **/
#define SDMMC1_SDMMC_IDMACTRLR_IDMABACT		(1 << 2)
/** SDMMC1_SDMMC_IDMACTRLR_IDMABMODE Buffer mode selection. This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). **/
#define SDMMC1_SDMMC_IDMACTRLR_IDMABMODE		(1 << 1)
/** SDMMC1_SDMMC_IDMACTRLR_IDMAEN IDMA enable This bit can only be written by firmware when DPSM is inactive (DPSMACT = 0). **/
#define SDMMC1_SDMMC_IDMACTRLR_IDMAEN		(1 << 0)

/**@}*/

/** @defgroup sdmmc1_sdmmc_idmabsizer SDMMCIDMABSIZER The SDMMC_IDMABSIZER register contains the buffers size when in double buffer configuration.
@{*/


#define SDMMC1_SDMMC_IDMABSIZER_IDMABNDT_SHIFT		5
#define SDMMC1_SDMMC_IDMABSIZER_IDMABNDT_MASK		0xff
/** @defgroup sdmmc1_sdmmc_idmabsizer_idmabndt IDMABNDT Number of transfers per buffer. This 8-bit value shall be multiplied by 8 to get the size of the buffer in 32-bit words and by 32 to get the size of the buffer in bytes. Example: IDMABNDT = 0x01: buffer size = 8 words = 32 bytes. These bits can only be written by firmware when DPSM is inactive (DPSMACT = 0).
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_idmabase0r SDMMCIDMABASE0R The SDMMC_IDMABASE0R register contains the memory buffer base address in single buffer configuration and the buffer 0 base address in double buffer configuration.
@{*/


#define SDMMC1_SDMMC_IDMABASE0R_IDMABASE0_SHIFT		0
#define SDMMC1_SDMMC_IDMABASE0R_IDMABASE0_MASK		0xffffffff
/** @defgroup sdmmc1_sdmmc_idmabase0r_idmabase0 IDMABASE0 Buffer 0 memory base address bits [31:2], shall be word aligned (bit [1:0] are always 0 and read only). This register can be written by firmware when DPSM is inactive (DPSMACT = 0), and can dynamically be written by firmware when DPSM active (DPSMACT = 1) and memory buffer 0 is inactive (IDMABACT = 1).
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_idmabase1r SDMMCIDMABASE1R The SDMMC_IDMABASE1R register contains the double buffer configuration second buffer memory base address.
@{*/


#define SDMMC1_SDMMC_IDMABASE1R_IDMABASE1_SHIFT		0
#define SDMMC1_SDMMC_IDMABASE1R_IDMABASE1_MASK		0xffffffff
/** @defgroup sdmmc1_sdmmc_idmabase1r_idmabase1 IDMABASE1 Buffer 1 memory base address, shall be word aligned (bit [1:0] are always 0 and read only). This register can be written by firmware when DPSM is inactive (DPSMACT = 0), and can dynamically be written by firmware when DPSM active (DPSMACT = 1) and memory buffer 1 is inactive (IDMABACT = 0).
@{*/
/**@}*/


/**@}*/

/** @defgroup sdmmc1_sdmmc_fifor SDMMCFIFOR The receive and transmit FIFOs can be only read or written as word (32-bit) wide registers. The FIFOs contain 16 entries on sequential addresses. This allows the CPU to use its load and store multiple operands to read from/write to the FIFO.When accessing SDMMC_FIFOR with half word or byte access an AHB bus fault is generated.
@{*/


#define SDMMC1_SDMMC_FIFOR_FIFODATA_SHIFT		0
#define SDMMC1_SDMMC_FIFOR_FIFODATA_MASK		0xffffffff
/** @defgroup sdmmc1_sdmmc_fifor_fifodata FIFODATA Receive and transmit FIFO data This register can only be read or written by firmware when the DPSM is active (DPSMACT=1). The FIFO data occupies 16 entries of 32-bit words.
@{*/
/**@}*/


/**@}*/

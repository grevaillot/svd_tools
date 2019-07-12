#pragma once 

/* --- FMC: FMC ----------------------------------------------------- */

/** @defgroup fmc_registers FMC Register
@{*/

/** FMC_BCR1 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories. **/
#define FMC_BCR1			MMIO32(FMC_BASE + 0x00)
/** FMC_BTR1 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers). **/
#define FMC_BTR1			MMIO32(FMC_BASE + 0x04)
/** FMC_BCR2 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories. **/
#define FMC_BCR2			MMIO32(FMC_BASE + 0x08)
/** FMC_BTR2 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers). **/
#define FMC_BTR2			MMIO32(FMC_BASE + 0x0c)
/** FMC_BCR3 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories. **/
#define FMC_BCR3			MMIO32(FMC_BASE + 0x10)
/** FMC_BTR3 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers). **/
#define FMC_BTR3			MMIO32(FMC_BASE + 0x14)
/** FMC_BCR4 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories. **/
#define FMC_BCR4			MMIO32(FMC_BASE + 0x18)
/** FMC_BTR4 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers). **/
#define FMC_BTR4			MMIO32(FMC_BASE + 0x1c)
/** FMC_PCR NAND Flash control registers **/
#define FMC_PCR			MMIO32(FMC_BASE + 0x80)
/** FMC_SR This register contains information about the FIFO status and interrupt. The FMC features a FIFO that is used when writing to memories to transfer up to 16 words of data.This is used to quickly write to the FIFO and free the AXI bus for transactions to peripherals other than the FMC, while the FMC is draining its FIFO into the memory. One of these register bits indicates the status of the FIFO, for ECC purposes.The ECC is calculated while the data are written to the memory. To read the correct ECC, the software must consequently wait until the FIFO is empty. **/
#define FMC_SR			MMIO32(FMC_BASE + 0x84)
/** FMC_PMEM The FMC_PMEM read/write register contains the timing information for NAND Flash memory bank. This information is used to access either the common memory space of the NAND Flash for command, address write access and data read/write access. **/
#define FMC_PMEM			MMIO32(FMC_BASE + 0x88)
/** FMC_PATT The FMC_PATT read/write register contains the timing information for NAND Flash memory bank. It is used for 8-bit accesses to the attribute memory space of the NAND Flash for the last address write access if the timing must differ from that of previous accesses (for Ready/Busy management, refer to Section20.8.5: NAND Flash prewait feature). **/
#define FMC_PATT			MMIO32(FMC_BASE + 0x8c)
/** FMC_ECCR This register contain the current error correction code value computed by the ECC computation modules of the FMC NAND controller. When the CPU reads/writes the data from a NAND Flash memory page at the correct address (refer to Section20.8.6: Computation of the error correction code (ECC) in NAND Flash memory), the data read/written from/to the NAND Flash memory are processed automatically by the ECC computation module. When X bytes have been read (according to the ECCPS field in the FMC_PCR registers), the CPU must read the computed ECC value from the FMC_ECC registers. It then verifies if these computed parity data are the same as the parity value recorded in the spare area, to determine whether a page is valid, and, to correct it otherwise. The FMC_ECCR register should be cleared after being read by setting the ECCEN bit to 0. To compute a new data block, the ECCEN bit must be set to 1. **/
#define FMC_ECCR			MMIO32(FMC_BASE + 0x94)
/** FMC_BWTR1 This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access. **/
#define FMC_BWTR1			MMIO32(FMC_BASE + 0x104)
/** FMC_BWTR2 This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access. **/
#define FMC_BWTR2			MMIO32(FMC_BASE + 0x10c)
/** FMC_BWTR3 This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access. **/
#define FMC_BWTR3			MMIO32(FMC_BASE + 0x114)
/** FMC_BWTR4 This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access. **/
#define FMC_BWTR4			MMIO32(FMC_BASE + 0x11c)
/** FMC_SDCR1 This register contains the control parameters for each SDRAM memory bank **/
#define FMC_SDCR1			MMIO32(FMC_BASE + 0x140)
/** FMC_SDCR2 This register contains the control parameters for each SDRAM memory bank **/
#define FMC_SDCR2			MMIO32(FMC_BASE + 0x144)
/** FMC_SDTR1 This register contains the timing parameters of each SDRAM bank **/
#define FMC_SDTR1			MMIO32(FMC_BASE + 0x148)
/** FMC_SDTR2 This register contains the timing parameters of each SDRAM bank **/
#define FMC_SDTR2			MMIO32(FMC_BASE + 0x14c)
/** FMC_SDCMR This register contains the command issued when the SDRAM device is accessed. This register is used to initialize the SDRAM device, and to activate the Self-refresh and the Power-down modes. As soon as the MODE field is written, the command will be issued only to one or to both SDRAM banks according to CTB1 and CTB2 command bits. This register is the same for both SDRAM banks. **/
#define FMC_SDCMR			MMIO32(FMC_BASE + 0x150)
/** FMC_SDRTR This register sets the refresh rate in number of SDCLK clock cycles between the refresh cycles by configuring the Refresh Timer Count value.Examplewhere 64 ms is the SDRAM refresh period.The refresh rate must be increased by 20 SDRAM clock cycles (as in the above example) to obtain a safe margin if an internal refresh request occurs when a read request has been accepted. It corresponds to a COUNT value of 0000111000000 (448). This 13-bit field is loaded into a timer which is decremented using the SDRAM clock. This timer generates a refresh pulse when zero is reached. The COUNT value must be set at least to 41 SDRAM clock cycles.As soon as the FMC_SDRTR register is programmed, the timer starts counting. If the value programmed in the register is 0, no refresh is carried out. This register must not be reprogrammed after the initialization procedure to avoid modifying the refresh rate.Each time a refresh pulse is generated, this 13-bit COUNT field is reloaded into the counter.If a memory access is in progress, the Auto-refresh request is delayed. However, if the memory access and Auto-refresh requests are generated simultaneously, the Auto-refresh takes precedence. If the memory access occurs during a refresh operation, the request is buffered to be processed when the refresh is complete.This register is common to SDRAM bank 1 and bank 2. **/
#define FMC_SDRTR			MMIO32(FMC_BASE + 0x154)
/** FMC_SDSR SDRAM Status register **/
#define FMC_SDSR			MMIO32(FMC_BASE + 0x158)

/**@}*/


/** @defgroup fmc_bcr1 BCR1 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.
@{*/

/** FMC_BCR1_FMCEN FMC controller Enable This bit enables/disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. **/
#define FMC_BCR1_FMCEN		(1 << 31)

#define FMC_BCR1_BMAP_SHIFT		24
#define FMC_BCR1_BMAP_MASK		0x03
/** @defgroup fmc_bcr1_bmap BMAP FMC bank mapping These bits allows different to remap SDRAM bank2 or swap the FMC NOR/PSRAM and SDRAM banks.Refer to Table 10 for Note: The BMAP bits of the FMC_BCR2..4 registers are dont care. It is only enabled through the FMC_BCR1 register.
@{*/
/**@}*/

/** FMC_BCR1_WFDIS Write FIFO Disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. **/
#define FMC_BCR1_WFDIS		(1 << 21)
/** FMC_BCR1_CCLKEN Continuous Clock Enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in synchronous mode to generate the FMC_CLK continuous clock. If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is dont care. If the synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.) **/
#define FMC_BCR1_CCLKEN		(1 << 20)
/** FMC_BCR1_CBURSTRW Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register. **/
#define FMC_BCR1_CBURSTRW		(1 << 19)

#define FMC_BCR1_CPSIZE_SHIFT		16
#define FMC_BCR1_CPSIZE_MASK		0x07
/** @defgroup fmc_bcr1_cpsize CPSIZE CRAM Page Size These are used for Cellular RAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Other configuration: reserved.
@{*/
/**@}*/

/** FMC_BCR1_ASYNCWAIT Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol. **/
#define FMC_BCR1_ASYNCWAIT		(1 << 15)
/** FMC_BCR1_EXTMOD Extended mode enable. This bit enables the FMC to program the write timings for asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the extended mode is disabled, the FMC can operate in Mode1 or Mode2 as follows: ** Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP =0x0 or 0x01) ** Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10). **/
#define FMC_BCR1_EXTMOD		(1 << 14)
/** FMC_BCR1_WAITEN Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in synchronous mode. **/
#define FMC_BCR1_WAITEN		(1 << 13)
/** FMC_BCR1_WREN Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC: **/
#define FMC_BCR1_WREN		(1 << 12)
/** FMC_BCR1_WAITCFG Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state: **/
#define FMC_BCR1_WAITCFG		(1 << 11)
/** FMC_BCR1_WAITPOL Wait signal polarity bit This bit defines the polarity of the wait signal from memory used for either in synchronous or asynchronous mode: **/
#define FMC_BCR1_WAITPOL		(1 << 9)
/** FMC_BCR1_BURSTEN Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode: **/
#define FMC_BCR1_BURSTEN		(1 << 8)
/** FMC_BCR1_FACCEN Flash access enable This bit enables NOR Flash memory access operations. **/
#define FMC_BCR1_FACCEN		(1 << 6)

#define FMC_BCR1_MWID_SHIFT		4
#define FMC_BCR1_MWID_MASK		0x03
/** @defgroup fmc_bcr1_mwid MWID Memory data bus width Defines the external memory device width, valid for all type of memories.
@{*/
/**@}*/


#define FMC_BCR1_MTYP_SHIFT		2
#define FMC_BCR1_MTYP_MASK		0x03
/** @defgroup fmc_bcr1_mtyp MTYP Memory type These bits define the type of external memory attached to the corresponding memory bank:
@{*/
/**@}*/

/** FMC_BCR1_MUXEN Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories: **/
#define FMC_BCR1_MUXEN		(1 << 1)
/** FMC_BCR1_MBKEN Memory bank enable bit This bit enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AXI bus. **/
#define FMC_BCR1_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fmc_btr1 BTR1 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
@{*/


#define FMC_BTR1_ACCMOD_SHIFT		28
#define FMC_BTR1_ACCMOD_MASK		0x03
/** @defgroup fmc_btr1_accmod ACCMOD Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.
@{*/
/**@}*/


#define FMC_BTR1_DATLAT_SHIFT		24
#define FMC_BTR1_DATLAT_MASK		0x0f
/** @defgroup fmc_btr1_datlat DATLAT Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
@{*/
/**@}*/


#define FMC_BTR1_CLKDIV_SHIFT		20
#define FMC_BTR1_CLKDIV_MASK		0x0f
/** @defgroup fmc_btr1_clkdiv CLKDIV Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
@{*/
/**@}*/


#define FMC_BTR1_BUSTURN_SHIFT		16
#define FMC_BTR1_BUSTURN_MASK		0x0f
/** @defgroup fmc_btr1_busturn BUSTURN Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &#8805; max (tEHELmin, tEHQZmax) if EXTMOD = 126. ...
@{*/
/**@}*/


#define FMC_BTR1_DATAST_SHIFT		8
#define FMC_BTR1_DATAST_MASK		0xff
/** @defgroup fmc_btr1_datast DATAST Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
@{*/
/**@}*/


#define FMC_BTR1_ADDHLD_SHIFT		4
#define FMC_BTR1_ADDHLD_MASK		0x0f
/** @defgroup fmc_btr1_addhld ADDHLD Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
@{*/
/**@}*/


#define FMC_BTR1_ADDSET_SHIFT		0
#define FMC_BTR1_ADDSET_MASK		0x0f
/** @defgroup fmc_btr1_addset ADDSET Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bcr2 BCR2 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.
@{*/

/** FMC_BCR2_FMCEN FMC controller Enable This bit enables/disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. **/
#define FMC_BCR2_FMCEN		(1 << 31)

#define FMC_BCR2_BMAP_SHIFT		24
#define FMC_BCR2_BMAP_MASK		0x03
/** @defgroup fmc_bcr2_bmap BMAP FMC bank mapping These bits allows different to remap SDRAM bank2 or swap the FMC NOR/PSRAM and SDRAM banks.Refer to Table 10 for Note: The BMAP bits of the FMC_BCR2..4 registers are dont care. It is only enabled through the FMC_BCR1 register.
@{*/
/**@}*/

/** FMC_BCR2_WFDIS Write FIFO Disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. **/
#define FMC_BCR2_WFDIS		(1 << 21)
/** FMC_BCR2_CCLKEN Continuous Clock Enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in synchronous mode to generate the FMC_CLK continuous clock. If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is dont care. If the synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.) **/
#define FMC_BCR2_CCLKEN		(1 << 20)
/** FMC_BCR2_CBURSTRW Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register. **/
#define FMC_BCR2_CBURSTRW		(1 << 19)

#define FMC_BCR2_CPSIZE_SHIFT		16
#define FMC_BCR2_CPSIZE_MASK		0x07
/** @defgroup fmc_bcr2_cpsize CPSIZE CRAM Page Size These are used for Cellular RAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Other configuration: reserved.
@{*/
/**@}*/

/** FMC_BCR2_ASYNCWAIT Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol. **/
#define FMC_BCR2_ASYNCWAIT		(1 << 15)
/** FMC_BCR2_EXTMOD Extended mode enable. This bit enables the FMC to program the write timings for asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the extended mode is disabled, the FMC can operate in Mode1 or Mode2 as follows: ** Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP =0x0 or 0x01) ** Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10). **/
#define FMC_BCR2_EXTMOD		(1 << 14)
/** FMC_BCR2_WAITEN Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in synchronous mode. **/
#define FMC_BCR2_WAITEN		(1 << 13)
/** FMC_BCR2_WREN Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC: **/
#define FMC_BCR2_WREN		(1 << 12)
/** FMC_BCR2_WAITCFG Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state: **/
#define FMC_BCR2_WAITCFG		(1 << 11)
/** FMC_BCR2_WAITPOL Wait signal polarity bit This bit defines the polarity of the wait signal from memory used for either in synchronous or asynchronous mode: **/
#define FMC_BCR2_WAITPOL		(1 << 9)
/** FMC_BCR2_BURSTEN Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode: **/
#define FMC_BCR2_BURSTEN		(1 << 8)
/** FMC_BCR2_FACCEN Flash access enable This bit enables NOR Flash memory access operations. **/
#define FMC_BCR2_FACCEN		(1 << 6)

#define FMC_BCR2_MWID_SHIFT		4
#define FMC_BCR2_MWID_MASK		0x03
/** @defgroup fmc_bcr2_mwid MWID Memory data bus width Defines the external memory device width, valid for all type of memories.
@{*/
/**@}*/


#define FMC_BCR2_MTYP_SHIFT		2
#define FMC_BCR2_MTYP_MASK		0x03
/** @defgroup fmc_bcr2_mtyp MTYP Memory type These bits define the type of external memory attached to the corresponding memory bank:
@{*/
/**@}*/

/** FMC_BCR2_MUXEN Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories: **/
#define FMC_BCR2_MUXEN		(1 << 1)
/** FMC_BCR2_MBKEN Memory bank enable bit This bit enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AXI bus. **/
#define FMC_BCR2_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fmc_btr2 BTR2 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
@{*/


#define FMC_BTR2_ACCMOD_SHIFT		28
#define FMC_BTR2_ACCMOD_MASK		0x03
/** @defgroup fmc_btr2_accmod ACCMOD Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.
@{*/
/**@}*/


#define FMC_BTR2_DATLAT_SHIFT		24
#define FMC_BTR2_DATLAT_MASK		0x0f
/** @defgroup fmc_btr2_datlat DATLAT Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
@{*/
/**@}*/


#define FMC_BTR2_CLKDIV_SHIFT		20
#define FMC_BTR2_CLKDIV_MASK		0x0f
/** @defgroup fmc_btr2_clkdiv CLKDIV Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
@{*/
/**@}*/


#define FMC_BTR2_BUSTURN_SHIFT		16
#define FMC_BTR2_BUSTURN_MASK		0x0f
/** @defgroup fmc_btr2_busturn BUSTURN Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &#8805; max (tEHELmin, tEHQZmax) if EXTMOD = 1. ...
@{*/
/**@}*/


#define FMC_BTR2_DATAST_SHIFT		8
#define FMC_BTR2_DATAST_MASK		0xff
/** @defgroup fmc_btr2_datast DATAST Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
@{*/
/**@}*/


#define FMC_BTR2_ADDHLD_SHIFT		4
#define FMC_BTR2_ADDHLD_MASK		0x0f
/** @defgroup fmc_btr2_addhld ADDHLD Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
@{*/
/**@}*/


#define FMC_BTR2_ADDSET_SHIFT		0
#define FMC_BTR2_ADDSET_MASK		0x0f
/** @defgroup fmc_btr2_addset ADDSET Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bcr3 BCR3 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.
@{*/

/** FMC_BCR3_FMCEN FMC controller Enable This bit enables/disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. **/
#define FMC_BCR3_FMCEN		(1 << 31)

#define FMC_BCR3_BMAP_SHIFT		24
#define FMC_BCR3_BMAP_MASK		0x03
/** @defgroup fmc_bcr3_bmap BMAP FMC bank mapping These bits allows different to remap SDRAM bank2 or swap the FMC NOR/PSRAM and SDRAM banks.Refer to Table 10 for Note: The BMAP bits of the FMC_BCR2..4 registers are dont care. It is only enabled through the FMC_BCR1 register.
@{*/
/**@}*/

/** FMC_BCR3_WFDIS Write FIFO Disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. **/
#define FMC_BCR3_WFDIS		(1 << 21)
/** FMC_BCR3_CCLKEN Continuous Clock Enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in synchronous mode to generate the FMC_CLK continuous clock. If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is dont care. If the synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.) **/
#define FMC_BCR3_CCLKEN		(1 << 20)
/** FMC_BCR3_CBURSTRW Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register. **/
#define FMC_BCR3_CBURSTRW		(1 << 19)

#define FMC_BCR3_CPSIZE_SHIFT		16
#define FMC_BCR3_CPSIZE_MASK		0x07
/** @defgroup fmc_bcr3_cpsize CPSIZE CRAM Page Size These are used for Cellular RAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Other configuration: reserved.
@{*/
/**@}*/

/** FMC_BCR3_ASYNCWAIT Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol. **/
#define FMC_BCR3_ASYNCWAIT		(1 << 15)
/** FMC_BCR3_EXTMOD Extended mode enable. This bit enables the FMC to program the write timings for asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the extended mode is disabled, the FMC can operate in Mode1 or Mode2 as follows: ** Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP =0x0 or 0x01) ** Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10). **/
#define FMC_BCR3_EXTMOD		(1 << 14)
/** FMC_BCR3_WAITEN Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in synchronous mode. **/
#define FMC_BCR3_WAITEN		(1 << 13)
/** FMC_BCR3_WREN Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC: **/
#define FMC_BCR3_WREN		(1 << 12)
/** FMC_BCR3_WAITCFG Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state: **/
#define FMC_BCR3_WAITCFG		(1 << 11)
/** FMC_BCR3_WAITPOL Wait signal polarity bit This bit defines the polarity of the wait signal from memory used for either in synchronous or asynchronous mode: **/
#define FMC_BCR3_WAITPOL		(1 << 9)
/** FMC_BCR3_BURSTEN Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode: **/
#define FMC_BCR3_BURSTEN		(1 << 8)
/** FMC_BCR3_FACCEN Flash access enable This bit enables NOR Flash memory access operations. **/
#define FMC_BCR3_FACCEN		(1 << 6)

#define FMC_BCR3_MWID_SHIFT		4
#define FMC_BCR3_MWID_MASK		0x03
/** @defgroup fmc_bcr3_mwid MWID Memory data bus width Defines the external memory device width, valid for all type of memories.
@{*/
/**@}*/


#define FMC_BCR3_MTYP_SHIFT		2
#define FMC_BCR3_MTYP_MASK		0x03
/** @defgroup fmc_bcr3_mtyp MTYP Memory type These bits define the type of external memory attached to the corresponding memory bank:
@{*/
/**@}*/

/** FMC_BCR3_MUXEN Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories: **/
#define FMC_BCR3_MUXEN		(1 << 1)
/** FMC_BCR3_MBKEN Memory bank enable bit This bit enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AXI bus. **/
#define FMC_BCR3_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fmc_btr3 BTR3 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
@{*/


#define FMC_BTR3_ACCMOD_SHIFT		28
#define FMC_BTR3_ACCMOD_MASK		0x03
/** @defgroup fmc_btr3_accmod ACCMOD Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.
@{*/
/**@}*/


#define FMC_BTR3_DATLAT_SHIFT		24
#define FMC_BTR3_DATLAT_MASK		0x0f
/** @defgroup fmc_btr3_datlat DATLAT Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
@{*/
/**@}*/


#define FMC_BTR3_CLKDIV_SHIFT		20
#define FMC_BTR3_CLKDIV_MASK		0x0f
/** @defgroup fmc_btr3_clkdiv CLKDIV Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
@{*/
/**@}*/


#define FMC_BTR3_BUSTURN_SHIFT		16
#define FMC_BTR3_BUSTURN_MASK		0x0f
/** @defgroup fmc_btr3_busturn BUSTURN Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &#8805; max (tEHELmin, tEHQZmax) if EXTMOD =1. ...
@{*/
/**@}*/


#define FMC_BTR3_DATAST_SHIFT		8
#define FMC_BTR3_DATAST_MASK		0xff
/** @defgroup fmc_btr3_datast DATAST Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
@{*/
/**@}*/


#define FMC_BTR3_ADDHLD_SHIFT		4
#define FMC_BTR3_ADDHLD_MASK		0x0f
/** @defgroup fmc_btr3_addhld ADDHLD Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
@{*/
/**@}*/


#define FMC_BTR3_ADDSET_SHIFT		0
#define FMC_BTR3_ADDSET_MASK		0x0f
/** @defgroup fmc_btr3_addset ADDSET Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bcr4 BCR4 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.
@{*/

/** FMC_BCR4_FMCEN FMC controller Enable This bit enables/disables the FMC controller. Note: The FMCEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. **/
#define FMC_BCR4_FMCEN		(1 << 31)

#define FMC_BCR4_BMAP_SHIFT		24
#define FMC_BCR4_BMAP_MASK		0x03
/** @defgroup fmc_bcr4_bmap BMAP FMC bank mapping These bits allows different to remap SDRAM bank2 or swap the FMC NOR/PSRAM and SDRAM banks.Refer to Table 10 for Note: The BMAP bits of the FMC_BCR2..4 registers are dont care. It is only enabled through the FMC_BCR1 register.
@{*/
/**@}*/

/** FMC_BCR4_WFDIS Write FIFO Disable This bit disables the Write FIFO used by the FMC controller. Note: The WFDIS bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. **/
#define FMC_BCR4_WFDIS		(1 << 21)
/** FMC_BCR4_CCLKEN Continuous Clock Enable This bit enables the FMC_CLK clock output to external memory devices. Note: The CCLKEN bit of the FMC_BCR2..4 registers is dont care. It is only enabled through the FMC_BCR1 register. Bank 1 must be configured in synchronous mode to generate the FMC_CLK continuous clock. If CCLKEN bit is set, the FMC_CLK clock ratio is specified by CLKDIV value in the FMC_BTR1 register. CLKDIV in FMC_BWTR1 is dont care. If the synchronous mode is used and CCLKEN bit is set, the synchronous memories connected to other banks than Bank 1 are clocked by the same clock (the CLKDIV value in the FMC_BTR2..4 and FMC_BWTR2..4 registers for other banks has no effect.) **/
#define FMC_BCR4_CCLKEN		(1 << 20)
/** FMC_BCR4_CBURSTRW Write burst enable For PSRAM (CRAM) operating in Burst mode, the bit enables synchronous accesses during write operations. The enable bit for synchronous read accesses is the BURSTEN bit in the FMC_BCRx register. **/
#define FMC_BCR4_CBURSTRW		(1 << 19)

#define FMC_BCR4_CPSIZE_SHIFT		16
#define FMC_BCR4_CPSIZE_MASK		0x07
/** @defgroup fmc_bcr4_cpsize CPSIZE CRAM Page Size These are used for Cellular RAM 1.5 which does not allow burst access to cross the address boundaries between pages. When these bits are configured, the FMC controller splits automatically the burst access when the memory page size is reached (refer to memory datasheet for page size). Other configuration: reserved.
@{*/
/**@}*/

/** FMC_BCR4_ASYNCWAIT Wait signal during asynchronous transfers This bit enables/disables the FMC to use the wait signal even during an asynchronous protocol. **/
#define FMC_BCR4_ASYNCWAIT		(1 << 15)
/** FMC_BCR4_EXTMOD Extended mode enable. This bit enables the FMC to program the write timings for asynchronous accesses inside the FMC_BWTR register, thus resulting in different timings for read and write operations. Note: When the extended mode is disabled, the FMC can operate in Mode1 or Mode2 as follows: ** Mode 1 is the default mode when the SRAM/PSRAM memory type is selected (MTYP =0x0 or 0x01) ** Mode 2 is the default mode when the NOR memory type is selected (MTYP = 0x10). **/
#define FMC_BCR4_EXTMOD		(1 << 14)
/** FMC_BCR4_WAITEN Wait enable bit This bit enables/disables wait-state insertion via the NWAIT signal when accessing the memory in synchronous mode. **/
#define FMC_BCR4_WAITEN		(1 << 13)
/** FMC_BCR4_WREN Write enable bit This bit indicates whether write operations are enabled/disabled in the bank by the FMC: **/
#define FMC_BCR4_WREN		(1 << 12)
/** FMC_BCR4_WAITCFG Wait timing configuration The NWAIT signal indicates whether the data from the memory are valid or if a wait state must be inserted when accessing the memory in synchronous mode. This configuration bit determines if NWAIT is asserted by the memory one clock cycle before the wait state or during the wait state: **/
#define FMC_BCR4_WAITCFG		(1 << 11)
/** FMC_BCR4_WAITPOL Wait signal polarity bit This bit defines the polarity of the wait signal from memory used for either in synchronous or asynchronous mode: **/
#define FMC_BCR4_WAITPOL		(1 << 9)
/** FMC_BCR4_BURSTEN Burst enable bit This bit enables/disables synchronous accesses during read operations. It is valid only for synchronous memories operating in Burst mode: **/
#define FMC_BCR4_BURSTEN		(1 << 8)
/** FMC_BCR4_FACCEN Flash access enable This bit enables NOR Flash memory access operations. **/
#define FMC_BCR4_FACCEN		(1 << 6)

#define FMC_BCR4_MWID_SHIFT		4
#define FMC_BCR4_MWID_MASK		0x03
/** @defgroup fmc_bcr4_mwid MWID Memory data bus width Defines the external memory device width, valid for all type of memories.
@{*/
/**@}*/


#define FMC_BCR4_MTYP_SHIFT		2
#define FMC_BCR4_MTYP_MASK		0x03
/** @defgroup fmc_bcr4_mtyp MTYP Memory type These bits define the type of external memory attached to the corresponding memory bank:
@{*/
/**@}*/

/** FMC_BCR4_MUXEN Address/data multiplexing enable bit When this bit is set, the address and data values are multiplexed on the data bus, valid only with NOR and PSRAM memories: **/
#define FMC_BCR4_MUXEN		(1 << 1)
/** FMC_BCR4_MBKEN Memory bank enable bit This bit enables the memory bank. After reset Bank1 is enabled, all others are disabled. Accessing a disabled bank causes an ERROR on AXI bus. **/
#define FMC_BCR4_MBKEN		(1 << 0)

/**@}*/

/** @defgroup fmc_btr4 BTR4 This register contains the control information of each memory bank, used for SRAMs, PSRAM and NOR Flash memories.If the EXTMOD bit is set in the FMC_BCRx register, then this register is partitioned for write and read access, that is, 2 registers are available: one to configure read accesses (this register) and one to configure write accesses (FMC_BWTRx registers).
@{*/


#define FMC_BTR4_ACCMOD_SHIFT		28
#define FMC_BTR4_ACCMOD_MASK		0x03
/** @defgroup fmc_btr4_accmod ACCMOD Access mode These bits specify the asynchronous access modes as shown in the timing diagrams. They are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.
@{*/
/**@}*/


#define FMC_BTR4_DATLAT_SHIFT		24
#define FMC_BTR4_DATLAT_MASK		0x0f
/** @defgroup fmc_btr4_datlat DATLAT Data latency for synchronous memory For synchronous access with read write burst mode enabled these bits define the number of memory clock cycles
@{*/
/**@}*/


#define FMC_BTR4_CLKDIV_SHIFT		20
#define FMC_BTR4_CLKDIV_MASK		0x0f
/** @defgroup fmc_btr4_clkdiv CLKDIV Clock divide ratio (for FMC_CLK signal) These bits define the period of FMC_CLK clock output signal, expressed in number of KCK_FMC cycles: In asynchronous NOR Flash, SRAM or PSRAM accesses, this value is dont care. Note: Refer to Section20.6.5: Synchronous transactions for FMC_CLK divider ratio formula)
@{*/
/**@}*/


#define FMC_BTR4_BUSTURN_SHIFT		16
#define FMC_BTR4_BUSTURN_MASK		0x0f
/** @defgroup fmc_btr4_busturn BUSTURN Bus turnaround phase duration These bits are written by software to add a delay at the end of a write-to-read or read-to write transaction. The programmed bus turnaround delay is inserted between an asynchronous read (in muxed or mode D) or write transaction and any other asynchronous /synchronous read/write from/to a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except in muxed mode and mode D. There is a bus turnaround delay of 1 FMC clock cycle between: Two consecutive asynchronous read transfers to the same static memory bank except for modes muxed and D. An asynchronous read to an asynchronous or synchronous write to any static bank or dynamic bank except in modes muxed and D mode. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank. A synchronous write (burst or single) access and an asynchronous write or read transfer to or from static memory bank (the bank can be the same or a different one in case of a read operation. Two consecutive synchronous read operations (in Burst or Single mode) followed by any synchronous/asynchronous read or write from/to another static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write access (in Burst or Single mode) and a synchronous read from the same or a different bank. The bus turnaround delay allows to match the minimum time between consecutive transactions (tEHEL from NEx high to NEx low) and the maximum time required by the memory to free the data bus after a read access (tEHQZ): (BUSTRUN + 1) KCK_FMC period &#8805; tEHELmin and (BUSTRUN + 2)KCK_FMC period &#8805; tEHQZmax if EXTMOD = 0 (BUSTRUN + 2)KCK_FMC period &#8805; max (tEHELmin, tEHQZmax) if EXTMOD =1. ...
@{*/
/**@}*/


#define FMC_BTR4_DATAST_SHIFT		8
#define FMC_BTR4_DATAST_MASK		0xff
/** @defgroup fmc_btr4_datast DATAST Data-phase duration These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous accesses: For each memory type and access mode data-phase duration, please refer to the respective figure (Figure81 to Figure93). Example: Mode1, write access, DATAST=1: Data-phase duration= DATAST+1 = 2 KCK_FMC clock cycles. Note: In synchronous accesses, this value is dont care.
@{*/
/**@}*/


#define FMC_BTR4_ADDHLD_SHIFT		4
#define FMC_BTR4_ADDHLD_MASK		0x0f
/** @defgroup fmc_btr4_addhld ADDHLD Address-hold phase duration These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in mode D or multiplexed accesses: For each access mode address-hold phase duration, please refer to the respective figure (Figure81 to Figure93). Note: In synchronous accesses, this value is not used, the address hold phase is always 1 memory clock period duration.
@{*/
/**@}*/


#define FMC_BTR4_ADDSET_SHIFT		0
#define FMC_BTR4_ADDSET_MASK		0x0f
/** @defgroup fmc_btr4_addset ADDSET Address setup phase duration These bits are written by software to define the duration of the address setup phase (refer to Figure81 to Figure93), used in SRAMs, ROMs and asynchronous NOR Flash: For each access mode address setup phase duration, please refer to the respective figure (refer to Figure81 to Figure93). Note: In synchronous accesses, this value is dont care. In Muxed mode or Mode D, the minimum value for ADDSET is 1.
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_pcr PCR NAND Flash control registers
@{*/


#define FMC_PCR_ECCPS_SHIFT		17
#define FMC_PCR_ECCPS_MASK		0x07
/** @defgroup fmc_pcr_eccps ECCPS ECC page size. These bits define the page size for the extended ECC:
@{*/
/**@}*/


#define FMC_PCR_TAR_SHIFT		13
#define FMC_PCR_TAR_MASK		0x0f
/** @defgroup fmc_pcr_tar TAR ALE to RE delay. These bits set time from ALE low to RE low in number of KCK_FMC clock cycles. Time is: t_ar = (TAR + SET + 2) TKCK_FMC where TKCK_FMC is the FMC clock period Note: Set is MEMSET or ATTSET according to the addressed space.
@{*/
/**@}*/


#define FMC_PCR_TCLR_SHIFT		9
#define FMC_PCR_TCLR_MASK		0x0f
/** @defgroup fmc_pcr_tclr TCLR CLE to RE delay. These bits set time from CLE low to RE low in number of KCK_FMC clock cycles. The time is give by the following formula: t_clr = (TCLR + SET + 2) TKCK_FMC where TKCK_FMC is the KCK_FMC clock period Note: Set is MEMSET or ATTSET according to the addressed space.
@{*/
/**@}*/

/** FMC_PCR_ECCEN ECC computation logic enable bit **/
#define FMC_PCR_ECCEN		(1 << 6)

#define FMC_PCR_PWID_SHIFT		4
#define FMC_PCR_PWID_MASK		0x03
/** @defgroup fmc_pcr_pwid PWID Data bus width. These bits define the external memory device width.
@{*/
/**@}*/

/** FMC_PCR_PBKEN NAND Flash memory bank enable bit. This bit enables the memory bank. Accessing a disabled memory bank causes an ERROR on AXI bus **/
#define FMC_PCR_PBKEN		(1 << 2)
/** FMC_PCR_PWAITEN Wait feature enable bit. This bit enables the Wait feature for the NAND Flash memory bank: **/
#define FMC_PCR_PWAITEN		(1 << 1)

/**@}*/

/** @defgroup fmc_sr SR This register contains information about the FIFO status and interrupt. The FMC features a FIFO that is used when writing to memories to transfer up to 16 words of data.This is used to quickly write to the FIFO and free the AXI bus for transactions to peripherals other than the FMC, while the FMC is draining its FIFO into the memory. One of these register bits indicates the status of the FIFO, for ECC purposes.The ECC is calculated while the data are written to the memory. To read the correct ECC, the software must consequently wait until the FIFO is empty.
@{*/

/** FMC_SR_FEMPT FIFO empty. Read-only bit that provides the status of the FIFO **/
#define FMC_SR_FEMPT		(1 << 6)
/** FMC_SR_IFEN Interrupt falling edge detection enable bit **/
#define FMC_SR_IFEN		(1 << 5)
/** FMC_SR_ILEN Interrupt high-level detection enable bit **/
#define FMC_SR_ILEN		(1 << 4)
/** FMC_SR_IREN Interrupt rising edge detection enable bit **/
#define FMC_SR_IREN		(1 << 3)
/** FMC_SR_IFS Interrupt falling edge status The flag is set by hardware and reset by software. Note: If this bit is written by software to 1 it will be set. **/
#define FMC_SR_IFS		(1 << 2)
/** FMC_SR_ILS Interrupt high-level status The flag is set by hardware and reset by software. **/
#define FMC_SR_ILS		(1 << 1)
/** FMC_SR_IRS Interrupt rising edge status The flag is set by hardware and reset by software. Note: If this bit is written by software to 1 it will be set. **/
#define FMC_SR_IRS		(1 << 0)

/**@}*/

/** @defgroup fmc_pmem PMEM The FMC_PMEM read/write register contains the timing information for NAND Flash memory bank. This information is used to access either the common memory space of the NAND Flash for command, address write access and data read/write access.
@{*/


#define FMC_PMEM_MEMHIZ_SHIFT		24
#define FMC_PMEM_MEMHIZ_MASK		0xff
/** @defgroup fmc_pmem_memhiz MEMHIZ Common memory x data bus Hi-Z time These bits define the number of KCK_FMC clock cycles during which the data bus is kept Hi-Z after the start of a NAND Flash write access to common memory space. This is only valid for write transactions:
@{*/
/**@}*/


#define FMC_PMEM_MEMHOLD_SHIFT		16
#define FMC_PMEM_MEMHOLD_MASK		0xff
/** @defgroup fmc_pmem_memhold MEMHOLD Common memory hold time These bits define the number of KCK_FMC clock cycles for write accesses and KCK_FMC+1 clock cycles for read accesses during which the address is held (and data for write accesses) after the command is de-asserted (NWE, NOE), for NAND Flash read or write access to common memory space:
@{*/
/**@}*/


#define FMC_PMEM_MEMWAIT_SHIFT		8
#define FMC_PMEM_MEMWAIT_MASK		0xff
/** @defgroup fmc_pmem_memwait MEMWAIT Common memory wait time These bits define the minimum number of KCK_FMC (+1) clock cycles to assert the command (NWE, NOE), for NAND Flash read or write access to common memory space. The duration of command assertion is extended if the wait signal (NWAIT) is active (low) at the end of the programmed value of KCK_FMC:
@{*/
/**@}*/


#define FMC_PMEM_MEMSET_SHIFT		0
#define FMC_PMEM_MEMSET_MASK		0xff
/** @defgroup fmc_pmem_memset MEMSET Common memory x setup time These bits define the number of KCK_FMC (+1) clock cycles to set up the address before the command assertion (NWE, NOE), for NAND Flash read or write access to common memory space:
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_patt PATT The FMC_PATT read/write register contains the timing information for NAND Flash memory bank. It is used for 8-bit accesses to the attribute memory space of the NAND Flash for the last address write access if the timing must differ from that of previous accesses (for Ready/Busy management, refer to Section20.8.5: NAND Flash prewait feature).
@{*/


#define FMC_PATT_ATTHIZ_SHIFT		24
#define FMC_PATT_ATTHIZ_MASK		0xff
/** @defgroup fmc_patt_atthiz ATTHIZ Attribute memory data bus Hi-Z time These bits define the number of KCK_FMC clock cycles during which the data bus is kept in Hi-Z after the start of a NAND Flash write access to attribute memory space on socket. Only valid for writ transaction:
@{*/
/**@}*/


#define FMC_PATT_ATTHOLD_SHIFT		16
#define FMC_PATT_ATTHOLD_MASK		0xff
/** @defgroup fmc_patt_atthold ATTHOLD Attribute memory hold time These bits define the number of KCK_FMC clock cycles during which the address is held (and data for write access) after the command de-assertion (NWE, NOE), for NAND Flash read or write access to attribute memory space:
@{*/
/**@}*/


#define FMC_PATT_ATTWAIT_SHIFT		8
#define FMC_PATT_ATTWAIT_MASK		0xff
/** @defgroup fmc_patt_attwait ATTWAIT Attribute memory wait time These bits define the minimum number of x KCK_FMC (+1) clock cycles to assert the command (NWE, NOE), for NAND Flash read or write access to attribute memory space. The duration for command assertion is extended if the wait signal (NWAIT) is active (low) at the end of the programmed value of KCK_FMC:
@{*/
/**@}*/


#define FMC_PATT_ATTSET_SHIFT		0
#define FMC_PATT_ATTSET_MASK		0xff
/** @defgroup fmc_patt_attset ATTSET Attribute memory setup time These bits define the number of KCK_FMC (+1) clock cycles to set up address before the command assertion (NWE, NOE), for NAND Flash read or write access to attribute memory space:
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_eccr ECCR This register contain the current error correction code value computed by the ECC computation modules of the FMC NAND controller. When the CPU reads/writes the data from a NAND Flash memory page at the correct address (refer to Section20.8.6: Computation of the error correction code (ECC) in NAND Flash memory), the data read/written from/to the NAND Flash memory are processed automatically by the ECC computation module. When X bytes have been read (according to the ECCPS field in the FMC_PCR registers), the CPU must read the computed ECC value from the FMC_ECC registers. It then verifies if these computed parity data are the same as the parity value recorded in the spare area, to determine whether a page is valid, and, to correct it otherwise. The FMC_ECCR register should be cleared after being read by setting the ECCEN bit to 0. To compute a new data block, the ECCEN bit must be set to 1.
@{*/


#define FMC_ECCR_ECC_SHIFT		0
#define FMC_ECCR_ECC_MASK		0xffffffff
/** @defgroup fmc_eccr_ecc ECC ECC result This field contains the value computed by the ECC computation logic. Table167 describes the contents of these bit fields.
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bwtr1 BWTR1 This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
@{*/


#define FMC_BWTR1_ACCMOD_SHIFT		28
#define FMC_BWTR1_ACCMOD_MASK		0x03
/** @defgroup fmc_bwtr1_accmod ACCMOD Access mode. These bits specify the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.
@{*/
/**@}*/


#define FMC_BWTR1_BUSTURN_SHIFT		16
#define FMC_BWTR1_BUSTURN_MASK		0x0f
/** @defgroup fmc_bwtr1_busturn BUSTURN Bus turnaround phase duration These bits are written by software to add a delay at the end of a write transaction to match the minimum time between consecutive transactions (tEHEL from ENx high to ENx low): (BUSTRUN + 1) KCK_FMC period &#8805; tEHELmin. The programmed bus turnaround delay is inserted between a an asynchronous write transfer and any other asynchronous /synchronous read or write transfer to or from a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except for muxed mode and mode D. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank A synchronous write transfer ((in Burst or Single mode) and an asynchronous write or read transfer to or from static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write transfer (in Burst or Single mode) and a synchronous read from the same or a different bank. ...
@{*/
/**@}*/


#define FMC_BWTR1_DATAST_SHIFT		8
#define FMC_BWTR1_DATAST_MASK		0xff
/** @defgroup fmc_bwtr1_datast DATAST Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses:
@{*/
/**@}*/


#define FMC_BWTR1_ADDHLD_SHIFT		4
#define FMC_BWTR1_ADDHLD_MASK		0x0f
/** @defgroup fmc_bwtr1_addhld ADDHLD Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration.
@{*/
/**@}*/


#define FMC_BWTR1_ADDSET_SHIFT		0
#define FMC_BWTR1_ADDSET_MASK		0x0f
/** @defgroup fmc_bwtr1_addset ADDSET Address setup phase duration. These bits are written by software to define the duration of the address setup phase in KCK_FMC cycles (refer to Figure81 to Figure93), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1.
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bwtr2 BWTR2 This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
@{*/


#define FMC_BWTR2_ACCMOD_SHIFT		28
#define FMC_BWTR2_ACCMOD_MASK		0x03
/** @defgroup fmc_bwtr2_accmod ACCMOD Access mode. These bits specify the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.
@{*/
/**@}*/


#define FMC_BWTR2_BUSTURN_SHIFT		16
#define FMC_BWTR2_BUSTURN_MASK		0x0f
/** @defgroup fmc_bwtr2_busturn BUSTURN Bus turnaround phase duration These bits are written by software to add a delay at the end of a write transaction to match the minimum time between consecutive transactions (tEHEL from ENx high to ENx low): (BUSTRUN + 1) KCK_FMC period &#8805; tEHELmin. The programmed bus turnaround delay is inserted between a an asynchronous write transfer and any other asynchronous /synchronous read or write transfer to or from a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except for muxed mode and mode D. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank A synchronous write transfer ((in Burst or Single mode) and an asynchronous write or read transfer to or from static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write transfer (in Burst or Single mode) and a synchronous read from the same or a different bank. ...
@{*/
/**@}*/


#define FMC_BWTR2_DATAST_SHIFT		8
#define FMC_BWTR2_DATAST_MASK		0xff
/** @defgroup fmc_bwtr2_datast DATAST Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses:
@{*/
/**@}*/


#define FMC_BWTR2_ADDHLD_SHIFT		4
#define FMC_BWTR2_ADDHLD_MASK		0x0f
/** @defgroup fmc_bwtr2_addhld ADDHLD Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration.
@{*/
/**@}*/


#define FMC_BWTR2_ADDSET_SHIFT		0
#define FMC_BWTR2_ADDSET_MASK		0x0f
/** @defgroup fmc_bwtr2_addset ADDSET Address setup phase duration. These bits are written by software to define the duration of the address setup phase in KCK_FMC cycles (refer to Figure81 to Figure93), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1.
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bwtr3 BWTR3 This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
@{*/


#define FMC_BWTR3_ACCMOD_SHIFT		28
#define FMC_BWTR3_ACCMOD_MASK		0x03
/** @defgroup fmc_bwtr3_accmod ACCMOD Access mode. These bits specify the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.
@{*/
/**@}*/


#define FMC_BWTR3_BUSTURN_SHIFT		16
#define FMC_BWTR3_BUSTURN_MASK		0x0f
/** @defgroup fmc_bwtr3_busturn BUSTURN Bus turnaround phase duration These bits are written by software to add a delay at the end of a write transaction to match the minimum time between consecutive transactions (tEHEL from ENx high to ENx low): (BUSTRUN + 1) KCK_FMC period &#8805; tEHELmin. The programmed bus turnaround delay is inserted between a an asynchronous write transfer and any other asynchronous /synchronous read or write transfer to or from a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except for muxed mode and mode D. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank A synchronous write transfer ((in Burst or Single mode) and an asynchronous write or read transfer to or from static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write transfer (in Burst or Single mode) and a synchronous read from the same or a different bank. ...
@{*/
/**@}*/


#define FMC_BWTR3_DATAST_SHIFT		8
#define FMC_BWTR3_DATAST_MASK		0xff
/** @defgroup fmc_bwtr3_datast DATAST Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses:
@{*/
/**@}*/


#define FMC_BWTR3_ADDHLD_SHIFT		4
#define FMC_BWTR3_ADDHLD_MASK		0x0f
/** @defgroup fmc_bwtr3_addhld ADDHLD Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration.
@{*/
/**@}*/


#define FMC_BWTR3_ADDSET_SHIFT		0
#define FMC_BWTR3_ADDSET_MASK		0x0f
/** @defgroup fmc_bwtr3_addset ADDSET Address setup phase duration. These bits are written by software to define the duration of the address setup phase in KCK_FMC cycles (refer to Figure81 to Figure93), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1.
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_bwtr4 BWTR4 This register contains the control information of each memory bank. It is used for SRAMs, PSRAMs and NOR Flash memories. When the EXTMOD bit is set in the FMC_BCRx register, then this register is active for write access.
@{*/


#define FMC_BWTR4_ACCMOD_SHIFT		28
#define FMC_BWTR4_ACCMOD_MASK		0x03
/** @defgroup fmc_bwtr4_accmod ACCMOD Access mode. These bits specify the asynchronous access modes as shown in the next timing diagrams.These bits are taken into account only when the EXTMOD bit in the FMC_BCRx register is 1.
@{*/
/**@}*/


#define FMC_BWTR4_BUSTURN_SHIFT		16
#define FMC_BWTR4_BUSTURN_MASK		0x0f
/** @defgroup fmc_bwtr4_busturn BUSTURN Bus turnaround phase duration These bits are written by software to add a delay at the end of a write transaction to match the minimum time between consecutive transactions (tEHEL from ENx high to ENx low): (BUSTRUN + 1) KCK_FMC period &#8805; tEHELmin. The programmed bus turnaround delay is inserted between a an asynchronous write transfer and any other asynchronous /synchronous read or write transfer to or from a static bank. If a read operation is performed, the bank can be the same or a different one, whereas it must be different in case of write operation to the bank, except in muxed mode or mode D. In some cases, whatever the programmed BUSTRUN values, the bus turnaround delay is fixed as follows: The bus turnaround delay is not inserted between two consecutive asynchronous write transfers to the same static memory bank except for muxed mode and mode D. There is a bus turnaround delay of 2 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to the same bank A synchronous write transfer ((in Burst or Single mode) and an asynchronous write or read transfer to or from static memory bank. There is a bus turnaround delay of 3 FMC clock cycle between: Two consecutive synchronous write operations (in Burst or Single mode) to different static banks. A synchronous write transfer (in Burst or Single mode) and a synchronous read from the same or a different bank. ...
@{*/
/**@}*/


#define FMC_BWTR4_DATAST_SHIFT		8
#define FMC_BWTR4_DATAST_MASK		0xff
/** @defgroup fmc_bwtr4_datast DATAST Data-phase duration. These bits are written by software to define the duration of the data phase (refer to Figure81 to Figure93), used in asynchronous SRAM, PSRAM and NOR Flash memory accesses:
@{*/
/**@}*/


#define FMC_BWTR4_ADDHLD_SHIFT		4
#define FMC_BWTR4_ADDHLD_MASK		0x0f
/** @defgroup fmc_bwtr4_addhld ADDHLD Address-hold phase duration. These bits are written by software to define the duration of the address hold phase (refer to Figure81 to Figure93), used in asynchronous multiplexed accesses: ... Note: In synchronous NOR Flash accesses, this value is not used, the address hold phase is always 1 Flash clock period duration.
@{*/
/**@}*/


#define FMC_BWTR4_ADDSET_SHIFT		0
#define FMC_BWTR4_ADDSET_MASK		0x0f
/** @defgroup fmc_bwtr4_addset ADDSET Address setup phase duration. These bits are written by software to define the duration of the address setup phase in KCK_FMC cycles (refer to Figure81 to Figure93), used in asynchronous accesses: ... Note: In synchronous accesses, this value is not used, the address setup phase is always 1 Flash clock period duration. In muxed mode, the minimum ADDSET value is 1.
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_sdcr1 SDCR1 This register contains the control parameters for each SDRAM memory bank
@{*/


#define FMC_SDCR1_RPIPE_SHIFT		13
#define FMC_SDCR1_RPIPE_MASK		0x03
/** @defgroup fmc_sdcr1_rpipe RPIPE Read pipe These bits define the delay, in KCK_FMC clock cycles, for reading data after CAS latency. Note: The corresponding bits in the FMC_SDCR2 register is read only.
@{*/
/**@}*/

/** FMC_SDCR1_RBURST Burst read This bit enables burst read mode. The SDRAM controller anticipates the next read commands during the CAS latency and stores data in the Read FIFO. Note: The corresponding bit in the FMC_SDCR2 register is read only. **/
#define FMC_SDCR1_RBURST		(1 << 12)

#define FMC_SDCR1_SDCLK_SHIFT		10
#define FMC_SDCR1_SDCLK_MASK		0x03
/** @defgroup fmc_sdcr1_sdclk SDCLK SDRAM clock configuration These bits define the SDRAM clock period for both SDRAM banks and allow disabling the clock before changing the frequency. In this case the SDRAM must be re-initialized. Note: The corresponding bits in the FMC_SDCR2 register is read only.
@{*/
/**@}*/

/** FMC_SDCR1_WP Write protection This bit enables write mode access to the SDRAM bank. **/
#define FMC_SDCR1_WP		(1 << 9)

#define FMC_SDCR1_CAS_SHIFT		7
#define FMC_SDCR1_CAS_MASK		0x03
/** @defgroup fmc_sdcr1_cas CAS CAS Latency This bits sets the SDRAM CAS latency in number of memory clock cycles
@{*/
/**@}*/

/** FMC_SDCR1_NB Number of internal banks This bit sets the number of internal banks. **/
#define FMC_SDCR1_NB		(1 << 6)

#define FMC_SDCR1_MWID_SHIFT		4
#define FMC_SDCR1_MWID_MASK		0x03
/** @defgroup fmc_sdcr1_mwid MWID Memory data bus width. These bits define the memory device width.
@{*/
/**@}*/


#define FMC_SDCR1_NR_SHIFT		2
#define FMC_SDCR1_NR_MASK		0x03
/** @defgroup fmc_sdcr1_nr NR Number of row address bits These bits define the number of bits of a row address.
@{*/
/**@}*/


#define FMC_SDCR1_NC_SHIFT		0
#define FMC_SDCR1_NC_MASK		0x03
/** @defgroup fmc_sdcr1_nc NC Number of column address bits These bits define the number of bits of a column address.
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_sdcr2 SDCR2 This register contains the control parameters for each SDRAM memory bank
@{*/


#define FMC_SDCR2_RPIPE_SHIFT		13
#define FMC_SDCR2_RPIPE_MASK		0x03
/** @defgroup fmc_sdcr2_rpipe RPIPE Read pipe These bits define the delay, in KCK_FMC clock cycles, for reading data after CAS latency. Note: The corresponding bits in the FMC_SDCR2 register is read only.
@{*/
/**@}*/

/** FMC_SDCR2_RBURST Burst read This bit enables burst read mode. The SDRAM controller anticipates the next read commands during the CAS latency and stores data in the Read FIFO. Note: The corresponding bit in the FMC_SDCR2 register is read only. **/
#define FMC_SDCR2_RBURST		(1 << 12)

#define FMC_SDCR2_SDCLK_SHIFT		10
#define FMC_SDCR2_SDCLK_MASK		0x03
/** @defgroup fmc_sdcr2_sdclk SDCLK SDRAM clock configuration These bits define the SDRAM clock period for both SDRAM banks and allow disabling the clock before changing the frequency. In this case the SDRAM must be re-initialized. Note: The corresponding bits in the FMC_SDCR2 register is read only.
@{*/
/**@}*/

/** FMC_SDCR2_WP Write protection This bit enables write mode access to the SDRAM bank. **/
#define FMC_SDCR2_WP		(1 << 9)

#define FMC_SDCR2_CAS_SHIFT		7
#define FMC_SDCR2_CAS_MASK		0x03
/** @defgroup fmc_sdcr2_cas CAS CAS Latency This bits sets the SDRAM CAS latency in number of memory clock cycles
@{*/
/**@}*/

/** FMC_SDCR2_NB Number of internal banks This bit sets the number of internal banks. **/
#define FMC_SDCR2_NB		(1 << 6)

#define FMC_SDCR2_MWID_SHIFT		4
#define FMC_SDCR2_MWID_MASK		0x03
/** @defgroup fmc_sdcr2_mwid MWID Memory data bus width. These bits define the memory device width.
@{*/
/**@}*/


#define FMC_SDCR2_NR_SHIFT		2
#define FMC_SDCR2_NR_MASK		0x03
/** @defgroup fmc_sdcr2_nr NR Number of row address bits These bits define the number of bits of a row address.
@{*/
/**@}*/


#define FMC_SDCR2_NC_SHIFT		0
#define FMC_SDCR2_NC_MASK		0x03
/** @defgroup fmc_sdcr2_nc NC Number of column address bits These bits define the number of bits of a column address.
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_sdtr1 SDTR1 This register contains the timing parameters of each SDRAM bank
@{*/


#define FMC_SDTR1_TRCD_SHIFT		24
#define FMC_SDTR1_TRCD_MASK		0x0f
/** @defgroup fmc_sdtr1_trcd TRCD Row to column delay These bits define the delay between the Activate command and a Read/Write command in number of memory clock cycles. ....
@{*/
/**@}*/


#define FMC_SDTR1_TRP_SHIFT		20
#define FMC_SDTR1_TRP_MASK		0x0f
/** @defgroup fmc_sdtr1_trp TRP Row precharge delay These bits define the delay between a Precharge command and another command in number of memory clock cycles. The TRP timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRP must be programmed with the timing of the slowest device. .... Note: The corresponding bits in the FMC_SDTR2 register are dont care.
@{*/
/**@}*/


#define FMC_SDTR1_TWR_SHIFT		16
#define FMC_SDTR1_TWR_MASK		0x0f
/** @defgroup fmc_sdtr1_twr TWR Recovery delay These bits define the delay between a Write and a Precharge command in number of memory clock cycles. .... Note: TWR must be programmed to match the write recovery time (tWR) defined in the SDRAM datasheet, and to guarantee that: TWR &#8805; TRAS - TRCD and TWR &#8805;TRC - TRCD - TRP Example: TRAS= 4 cycles, TRCD= 2 cycles. So, TWR &gt;= 2 cycles. TWR must be programmed to 0x1. If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TWR timing corresponding to the slowest SDRAM device.
@{*/
/**@}*/


#define FMC_SDTR1_TRC_SHIFT		12
#define FMC_SDTR1_TRC_MASK		0x0f
/** @defgroup fmc_sdtr1_trc TRC Row cycle delay These bits define the delay between the Refresh command and the Activate command, as well as the delay between two consecutive Refresh commands. It is expressed in number of memory clock cycles. The TRC timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRC must be programmed with the timings of the slowest device. .... Note: TRC must match the TRC and TRFC (Auto Refresh period) timings defined in the SDRAM device datasheet. Note: The corresponding bits in the FMC_SDTR2 register are dont care.
@{*/
/**@}*/


#define FMC_SDTR1_TRAS_SHIFT		8
#define FMC_SDTR1_TRAS_MASK		0x0f
/** @defgroup fmc_sdtr1_tras TRAS Self refresh time These bits define the minimum Self-refresh period in number of memory clock cycles. ....
@{*/
/**@}*/


#define FMC_SDTR1_TXSR_SHIFT		4
#define FMC_SDTR1_TXSR_MASK		0x0f
/** @defgroup fmc_sdtr1_txsr TXSR Exit Self-refresh delay These bits define the delay from releasing the Self-refresh command to issuing the Activate command in number of memory clock cycles. .... Note: If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TXSR timing corresponding to the slowest SDRAM device.
@{*/
/**@}*/


#define FMC_SDTR1_TMRD_SHIFT		0
#define FMC_SDTR1_TMRD_MASK		0x0f
/** @defgroup fmc_sdtr1_tmrd TMRD Load Mode Register to Active These bits define the delay between a Load Mode Register command and an Active or Refresh command in number of memory clock cycles. ....
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_sdtr2 SDTR2 This register contains the timing parameters of each SDRAM bank
@{*/


#define FMC_SDTR2_TRCD_SHIFT		24
#define FMC_SDTR2_TRCD_MASK		0x0f
/** @defgroup fmc_sdtr2_trcd TRCD Row to column delay These bits define the delay between the Activate command and a Read/Write command in number of memory clock cycles. ....
@{*/
/**@}*/


#define FMC_SDTR2_TRP_SHIFT		20
#define FMC_SDTR2_TRP_MASK		0x0f
/** @defgroup fmc_sdtr2_trp TRP Row precharge delay These bits define the delay between a Precharge command and another command in number of memory clock cycles. The TRP timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRP must be programmed with the timing of the slowest device. .... Note: The corresponding bits in the FMC_SDTR2 register are dont care.
@{*/
/**@}*/


#define FMC_SDTR2_TWR_SHIFT		16
#define FMC_SDTR2_TWR_MASK		0x0f
/** @defgroup fmc_sdtr2_twr TWR Recovery delay These bits define the delay between a Write and a Precharge command in number of memory clock cycles. .... Note: TWR must be programmed to match the write recovery time (tWR) defined in the SDRAM datasheet, and to guarantee that: TWR &#8805; TRAS - TRCD and TWR &#8805;TRC - TRCD - TRP Example: TRAS= 4 cycles, TRCD= 2 cycles. So, TWR &gt;= 2 cycles. TWR must be programmed to 0x1. If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TWR timing corresponding to the slowest SDRAM device.
@{*/
/**@}*/


#define FMC_SDTR2_TRC_SHIFT		12
#define FMC_SDTR2_TRC_MASK		0x0f
/** @defgroup fmc_sdtr2_trc TRC Row cycle delay These bits define the delay between the Refresh command and the Activate command, as well as the delay between two consecutive Refresh commands. It is expressed in number of memory clock cycles. The TRC timing is only configured in the FMC_SDTR1 register. If two SDRAM devices are used, the TRC must be programmed with the timings of the slowest device. .... Note: TRC must match the TRC and TRFC (Auto Refresh period) timings defined in the SDRAM device datasheet. Note: The corresponding bits in the FMC_SDTR2 register are dont care.
@{*/
/**@}*/


#define FMC_SDTR2_TRAS_SHIFT		8
#define FMC_SDTR2_TRAS_MASK		0x0f
/** @defgroup fmc_sdtr2_tras TRAS Self refresh time These bits define the minimum Self-refresh period in number of memory clock cycles. ....
@{*/
/**@}*/


#define FMC_SDTR2_TXSR_SHIFT		4
#define FMC_SDTR2_TXSR_MASK		0x0f
/** @defgroup fmc_sdtr2_txsr TXSR Exit Self-refresh delay These bits define the delay from releasing the Self-refresh command to issuing the Activate command in number of memory clock cycles. .... Note: If two SDRAM devices are used, the FMC_SDTR1 and FMC_SDTR2 must be programmed with the same TXSR timing corresponding to the slowest SDRAM device.
@{*/
/**@}*/


#define FMC_SDTR2_TMRD_SHIFT		0
#define FMC_SDTR2_TMRD_MASK		0x0f
/** @defgroup fmc_sdtr2_tmrd TMRD Load Mode Register to Active These bits define the delay between a Load Mode Register command and an Active or Refresh command in number of memory clock cycles. ....
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_sdcmr SDCMR This register contains the command issued when the SDRAM device is accessed. This register is used to initialize the SDRAM device, and to activate the Self-refresh and the Power-down modes. As soon as the MODE field is written, the command will be issued only to one or to both SDRAM banks according to CTB1 and CTB2 command bits. This register is the same for both SDRAM banks.
@{*/


#define FMC_SDCMR_MRD_SHIFT		9
#define FMC_SDCMR_MRD_MASK		0x3fff
/** @defgroup fmc_sdcmr_mrd MRD Mode Register definition This 14-bit field defines the SDRAM Mode Register content. The Mode Register is programmed using the Load Mode Register command. The MRD[13:0] bits are also used to program the extended mode register for mobile SDRAM.
@{*/
/**@}*/


#define FMC_SDCMR_NRFS_SHIFT		5
#define FMC_SDCMR_NRFS_MASK		0x0f
/** @defgroup fmc_sdcmr_nrfs NRFS Number of Auto-refresh These bits define the number of consecutive Auto-refresh commands issued when MODE = 011. ....
@{*/
/**@}*/

/** FMC_SDCMR_CTB1 Command Target Bank 1 This bit indicates whether the command will be issued to SDRAM Bank 1 or not. **/
#define FMC_SDCMR_CTB1		(1 << 4)
/** FMC_SDCMR_CTB2 Command Target Bank 2 This bit indicates whether the command will be issued to SDRAM Bank 2 or not. **/
#define FMC_SDCMR_CTB2		(1 << 3)

#define FMC_SDCMR_MODE_SHIFT		0
#define FMC_SDCMR_MODE_MASK		0x07
/** @defgroup fmc_sdcmr_mode MODE Command mode These bits define the command issued to the SDRAM device. Note: When a command is issued, at least one Command Target Bank bit ( CTB1 or CTB2) must be set otherwise the command will be ignored. Note: If two SDRAM banks are used, the Auto-refresh and PALL command must be issued simultaneously to the two devices with CTB1 and CTB2 bits set otherwise the command will be ignored. Note: If only one SDRAM bank is used and a command is issued with its associated CTB bit set, the other CTB bit of the unused bank must be kept to 0.
@{*/
/**@}*/


/**@}*/

/** @defgroup fmc_sdrtr SDRTR This register sets the refresh rate in number of SDCLK clock cycles between the refresh cycles by configuring the Refresh Timer Count value.Examplewhere 64 ms is the SDRAM refresh period.The refresh rate must be increased by 20 SDRAM clock cycles (as in the above example) to obtain a safe margin if an internal refresh request occurs when a read request has been accepted. It corresponds to a COUNT value of 0000111000000 (448). This 13-bit field is loaded into a timer which is decremented using the SDRAM clock. This timer generates a refresh pulse when zero is reached. The COUNT value must be set at least to 41 SDRAM clock cycles.As soon as the FMC_SDRTR register is programmed, the timer starts counting. If the value programmed in the register is 0, no refresh is carried out. This register must not be reprogrammed after the initialization procedure to avoid modifying the refresh rate.Each time a refresh pulse is generated, this 13-bit COUNT field is reloaded into the counter.If a memory access is in progress, the Auto-refresh request is delayed. However, if the memory access and Auto-refresh requests are generated simultaneously, the Auto-refresh takes precedence. If the memory access occurs during a refresh operation, the request is buffered to be processed when the refresh is complete.This register is common to SDRAM bank 1 and bank 2.
@{*/

/** FMC_SDRTR_REIE RES Interrupt Enable **/
#define FMC_SDRTR_REIE		(1 << 14)

#define FMC_SDRTR_COUNT_SHIFT		1
#define FMC_SDRTR_COUNT_MASK		0x1fff
/** @defgroup fmc_sdrtr_count COUNT Refresh Timer Count This 13-bit field defines the refresh rate of the SDRAM device. It is expressed in number of memory clock cycles. It must be set at least to 41 SDRAM clock cycles (0x29). Refresh rate = (COUNT + 1) x SDRAM frequency clock COUNT = (SDRAM refresh period / Number of rows) - 20
@{*/
/**@}*/

/** FMC_SDRTR_CRE Clear Refresh error flag This bit is used to clear the Refresh Error Flag (RE) in the Status Register. **/
#define FMC_SDRTR_CRE		(1 << 0)

/**@}*/

/** @defgroup fmc_sdsr SDSR SDRAM Status register
@{*/


#define FMC_SDSR_MODES2_SHIFT		3
#define FMC_SDSR_MODES2_MASK		0x03
/** @defgroup fmc_sdsr_modes2 MODES2 Status Mode for Bank 2 These bits define the Status Mode of SDRAM Bank 2.
@{*/
/**@}*/


#define FMC_SDSR_MODES1_SHIFT		1
#define FMC_SDSR_MODES1_MASK		0x03
/** @defgroup fmc_sdsr_modes1 MODES1 Status Mode for Bank 1 These bits define the Status Mode of SDRAM Bank 1.
@{*/
/**@}*/

/** FMC_SDSR_RE Refresh error flag An interrupt is generated if REIE = 1 and RE = 1 **/
#define FMC_SDSR_RE		(1 << 0)

/**@}*/

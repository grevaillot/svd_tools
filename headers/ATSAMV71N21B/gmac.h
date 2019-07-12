#pragma once 

/* --- GMAC: Gigabit Ethernet MAC ----------------------------------- */

/** @defgroup gmac_registers Gigabit Ethernet MAC Register
@{*/

/** GMAC_GMAC_NCR Network Control Register **/
#define GMAC_GMAC_NCR			MMIO32(GMAC_BASE + 0x00)
/** GMAC_GMAC_NCFGR Network Configuration Register **/
#define GMAC_GMAC_NCFGR			MMIO32(GMAC_BASE + 0x04)
/** GMAC_GMAC_NSR Network Status Register **/
#define GMAC_GMAC_NSR			MMIO32(GMAC_BASE + 0x08)
/** GMAC_GMAC_UR User Register **/
#define GMAC_GMAC_UR			MMIO32(GMAC_BASE + 0x0c)
/** GMAC_GMAC_DCFGR DMA Configuration Register **/
#define GMAC_GMAC_DCFGR			MMIO32(GMAC_BASE + 0x10)
/** GMAC_GMAC_TSR Transmit Status Register **/
#define GMAC_GMAC_TSR			MMIO32(GMAC_BASE + 0x14)
/** GMAC_GMAC_RBQB Receive Buffer Queue Base Address Register **/
#define GMAC_GMAC_RBQB			MMIO32(GMAC_BASE + 0x18)
/** GMAC_GMAC_TBQB Transmit Buffer Queue Base Address Register **/
#define GMAC_GMAC_TBQB			MMIO32(GMAC_BASE + 0x1c)
/** GMAC_GMAC_RSR Receive Status Register **/
#define GMAC_GMAC_RSR			MMIO32(GMAC_BASE + 0x20)
/** GMAC_GMAC_ISR Interrupt Status Register **/
#define GMAC_GMAC_ISR			MMIO32(GMAC_BASE + 0x24)
/** GMAC_GMAC_IER Interrupt Enable Register **/
#define GMAC_GMAC_IER			MMIO32(GMAC_BASE + 0x28)
/** GMAC_GMAC_IDR Interrupt Disable Register **/
#define GMAC_GMAC_IDR			MMIO32(GMAC_BASE + 0x2c)
/** GMAC_GMAC_IMR Interrupt Mask Register **/
#define GMAC_GMAC_IMR			MMIO32(GMAC_BASE + 0x30)
/** GMAC_GMAC_MAN PHY Maintenance Register **/
#define GMAC_GMAC_MAN			MMIO32(GMAC_BASE + 0x34)
/** GMAC_GMAC_RPQ Received Pause Quantum Register **/
#define GMAC_GMAC_RPQ			MMIO32(GMAC_BASE + 0x38)
/** GMAC_GMAC_TPQ Transmit Pause Quantum Register **/
#define GMAC_GMAC_TPQ			MMIO32(GMAC_BASE + 0x3c)
/** GMAC_GMAC_TPSF TX Partial Store and Forward Register **/
#define GMAC_GMAC_TPSF			MMIO32(GMAC_BASE + 0x40)
/** GMAC_GMAC_RPSF RX Partial Store and Forward Register **/
#define GMAC_GMAC_RPSF			MMIO32(GMAC_BASE + 0x44)
/** GMAC_GMAC_RJFML RX Jumbo Frame Max Length Register **/
#define GMAC_GMAC_RJFML			MMIO32(GMAC_BASE + 0x48)
/** GMAC_GMAC_HRB Hash Register Bottom **/
#define GMAC_GMAC_HRB			MMIO32(GMAC_BASE + 0x80)
/** GMAC_GMAC_HRT Hash Register Top **/
#define GMAC_GMAC_HRT			MMIO32(GMAC_BASE + 0x84)
/** GMAC_GMAC_SA0_GMAC_SAB Specific Address 1 Bottom Register **/
#define GMAC_GMAC_SA0_GMAC_SAB			MMIO32(GMAC_BASE + 0x88)
/** GMAC_GMAC_SA0_GMAC_SAT Specific Address 1 Top Register **/
#define GMAC_GMAC_SA0_GMAC_SAT			MMIO32(GMAC_BASE + 0x8c)
/** GMAC_GMAC_SA1_GMAC_SAB Specific Address 1 Bottom Register **/
#define GMAC_GMAC_SA1_GMAC_SAB			MMIO32(GMAC_BASE + 0x90)
/** GMAC_GMAC_SA1_GMAC_SAT Specific Address 1 Top Register **/
#define GMAC_GMAC_SA1_GMAC_SAT			MMIO32(GMAC_BASE + 0x94)
/** GMAC_GMAC_SA2_GMAC_SAB Specific Address 1 Bottom Register **/
#define GMAC_GMAC_SA2_GMAC_SAB			MMIO32(GMAC_BASE + 0x98)
/** GMAC_GMAC_SA2_GMAC_SAT Specific Address 1 Top Register **/
#define GMAC_GMAC_SA2_GMAC_SAT			MMIO32(GMAC_BASE + 0x9c)
/** GMAC_GMAC_SA3_GMAC_SAB Specific Address 1 Bottom Register **/
#define GMAC_GMAC_SA3_GMAC_SAB			MMIO32(GMAC_BASE + 0xa0)
/** GMAC_GMAC_SA3_GMAC_SAT Specific Address 1 Top Register **/
#define GMAC_GMAC_SA3_GMAC_SAT			MMIO32(GMAC_BASE + 0xa4)
/** GMAC_GMAC_TIDM1 Type ID Match 1 Register **/
#define GMAC_GMAC_TIDM1			MMIO32(GMAC_BASE + 0xa8)
/** GMAC_GMAC_TIDM2 Type ID Match 2 Register **/
#define GMAC_GMAC_TIDM2			MMIO32(GMAC_BASE + 0xac)
/** GMAC_GMAC_TIDM3 Type ID Match 3 Register **/
#define GMAC_GMAC_TIDM3			MMIO32(GMAC_BASE + 0xb0)
/** GMAC_GMAC_TIDM4 Type ID Match 4 Register **/
#define GMAC_GMAC_TIDM4			MMIO32(GMAC_BASE + 0xb4)
/** GMAC_GMAC_WOL Wake on LAN Register **/
#define GMAC_GMAC_WOL			MMIO32(GMAC_BASE + 0xb8)
/** GMAC_GMAC_IPGS IPG Stretch Register **/
#define GMAC_GMAC_IPGS			MMIO32(GMAC_BASE + 0xbc)
/** GMAC_GMAC_SVLAN Stacked VLAN Register **/
#define GMAC_GMAC_SVLAN			MMIO32(GMAC_BASE + 0xc0)
/** GMAC_GMAC_TPFCP Transmit PFC Pause Register **/
#define GMAC_GMAC_TPFCP			MMIO32(GMAC_BASE + 0xc4)
/** GMAC_GMAC_SAMB1 Specific Address 1 Mask Bottom Register **/
#define GMAC_GMAC_SAMB1			MMIO32(GMAC_BASE + 0xc8)
/** GMAC_GMAC_SAMT1 Specific Address 1 Mask Top Register **/
#define GMAC_GMAC_SAMT1			MMIO32(GMAC_BASE + 0xcc)
/** GMAC_GMAC_NSC 1588 Timer Nanosecond Comparison Register **/
#define GMAC_GMAC_NSC			MMIO32(GMAC_BASE + 0xdc)
/** GMAC_GMAC_SCL 1588 Timer Second Comparison Low Register **/
#define GMAC_GMAC_SCL			MMIO32(GMAC_BASE + 0xe0)
/** GMAC_GMAC_SCH 1588 Timer Second Comparison High Register **/
#define GMAC_GMAC_SCH			MMIO32(GMAC_BASE + 0xe4)
/** GMAC_GMAC_EFTSH PTP Event Frame Transmitted Seconds High Register **/
#define GMAC_GMAC_EFTSH			MMIO32(GMAC_BASE + 0xe8)
/** GMAC_GMAC_EFRSH PTP Event Frame Received Seconds High Register **/
#define GMAC_GMAC_EFRSH			MMIO32(GMAC_BASE + 0xec)
/** GMAC_GMAC_PEFTSH PTP Peer Event Frame Transmitted Seconds High Register **/
#define GMAC_GMAC_PEFTSH			MMIO32(GMAC_BASE + 0xf0)
/** GMAC_GMAC_PEFRSH PTP Peer Event Frame Received Seconds High Register **/
#define GMAC_GMAC_PEFRSH			MMIO32(GMAC_BASE + 0xf4)
/** GMAC_GMAC_OTLO Octets Transmitted Low Register **/
#define GMAC_GMAC_OTLO			MMIO32(GMAC_BASE + 0x100)
/** GMAC_GMAC_OTHI Octets Transmitted High Register **/
#define GMAC_GMAC_OTHI			MMIO32(GMAC_BASE + 0x104)
/** GMAC_GMAC_FT Frames Transmitted Register **/
#define GMAC_GMAC_FT			MMIO32(GMAC_BASE + 0x108)
/** GMAC_GMAC_BCFT Broadcast Frames Transmitted Register **/
#define GMAC_GMAC_BCFT			MMIO32(GMAC_BASE + 0x10c)
/** GMAC_GMAC_MFT Multicast Frames Transmitted Register **/
#define GMAC_GMAC_MFT			MMIO32(GMAC_BASE + 0x110)
/** GMAC_GMAC_PFT Pause Frames Transmitted Register **/
#define GMAC_GMAC_PFT			MMIO32(GMAC_BASE + 0x114)
/** GMAC_GMAC_BFT64 64 Byte Frames Transmitted Register **/
#define GMAC_GMAC_BFT64			MMIO32(GMAC_BASE + 0x118)
/** GMAC_GMAC_TBFT127 65 to 127 Byte Frames Transmitted Register **/
#define GMAC_GMAC_TBFT127			MMIO32(GMAC_BASE + 0x11c)
/** GMAC_GMAC_TBFT255 128 to 255 Byte Frames Transmitted Register **/
#define GMAC_GMAC_TBFT255			MMIO32(GMAC_BASE + 0x120)
/** GMAC_GMAC_TBFT511 256 to 511 Byte Frames Transmitted Register **/
#define GMAC_GMAC_TBFT511			MMIO32(GMAC_BASE + 0x124)
/** GMAC_GMAC_TBFT1023 512 to 1023 Byte Frames Transmitted Register **/
#define GMAC_GMAC_TBFT1023			MMIO32(GMAC_BASE + 0x128)
/** GMAC_GMAC_TBFT1518 1024 to 1518 Byte Frames Transmitted Register **/
#define GMAC_GMAC_TBFT1518			MMIO32(GMAC_BASE + 0x12c)
/** GMAC_GMAC_GTBFT1518 Greater Than 1518 Byte Frames Transmitted Register **/
#define GMAC_GMAC_GTBFT1518			MMIO32(GMAC_BASE + 0x130)
/** GMAC_GMAC_TUR Transmit Underruns Register **/
#define GMAC_GMAC_TUR			MMIO32(GMAC_BASE + 0x134)
/** GMAC_GMAC_SCF Single Collision Frames Register **/
#define GMAC_GMAC_SCF			MMIO32(GMAC_BASE + 0x138)
/** GMAC_GMAC_MCF Multiple Collision Frames Register **/
#define GMAC_GMAC_MCF			MMIO32(GMAC_BASE + 0x13c)
/** GMAC_GMAC_EC Excessive Collisions Register **/
#define GMAC_GMAC_EC			MMIO32(GMAC_BASE + 0x140)
/** GMAC_GMAC_LC Late Collisions Register **/
#define GMAC_GMAC_LC			MMIO32(GMAC_BASE + 0x144)
/** GMAC_GMAC_DTF Deferred Transmission Frames Register **/
#define GMAC_GMAC_DTF			MMIO32(GMAC_BASE + 0x148)
/** GMAC_GMAC_CSE Carrier Sense Errors Register **/
#define GMAC_GMAC_CSE			MMIO32(GMAC_BASE + 0x14c)
/** GMAC_GMAC_ORLO Octets Received Low Received Register **/
#define GMAC_GMAC_ORLO			MMIO32(GMAC_BASE + 0x150)
/** GMAC_GMAC_ORHI Octets Received High Received Register **/
#define GMAC_GMAC_ORHI			MMIO32(GMAC_BASE + 0x154)
/** GMAC_GMAC_FR Frames Received Register **/
#define GMAC_GMAC_FR			MMIO32(GMAC_BASE + 0x158)
/** GMAC_GMAC_BCFR Broadcast Frames Received Register **/
#define GMAC_GMAC_BCFR			MMIO32(GMAC_BASE + 0x15c)
/** GMAC_GMAC_MFR Multicast Frames Received Register **/
#define GMAC_GMAC_MFR			MMIO32(GMAC_BASE + 0x160)
/** GMAC_GMAC_PFR Pause Frames Received Register **/
#define GMAC_GMAC_PFR			MMIO32(GMAC_BASE + 0x164)
/** GMAC_GMAC_BFR64 64 Byte Frames Received Register **/
#define GMAC_GMAC_BFR64			MMIO32(GMAC_BASE + 0x168)
/** GMAC_GMAC_TBFR127 65 to 127 Byte Frames Received Register **/
#define GMAC_GMAC_TBFR127			MMIO32(GMAC_BASE + 0x16c)
/** GMAC_GMAC_TBFR255 128 to 255 Byte Frames Received Register **/
#define GMAC_GMAC_TBFR255			MMIO32(GMAC_BASE + 0x170)
/** GMAC_GMAC_TBFR511 256 to 511 Byte Frames Received Register **/
#define GMAC_GMAC_TBFR511			MMIO32(GMAC_BASE + 0x174)
/** GMAC_GMAC_TBFR1023 512 to 1023 Byte Frames Received Register **/
#define GMAC_GMAC_TBFR1023			MMIO32(GMAC_BASE + 0x178)
/** GMAC_GMAC_TBFR1518 1024 to 1518 Byte Frames Received Register **/
#define GMAC_GMAC_TBFR1518			MMIO32(GMAC_BASE + 0x17c)
/** GMAC_GMAC_TMXBFR 1519 to Maximum Byte Frames Received Register **/
#define GMAC_GMAC_TMXBFR			MMIO32(GMAC_BASE + 0x180)
/** GMAC_GMAC_UFR Undersize Frames Received Register **/
#define GMAC_GMAC_UFR			MMIO32(GMAC_BASE + 0x184)
/** GMAC_GMAC_OFR Oversize Frames Received Register **/
#define GMAC_GMAC_OFR			MMIO32(GMAC_BASE + 0x188)
/** GMAC_GMAC_JR Jabbers Received Register **/
#define GMAC_GMAC_JR			MMIO32(GMAC_BASE + 0x18c)
/** GMAC_GMAC_FCSE Frame Check Sequence Errors Register **/
#define GMAC_GMAC_FCSE			MMIO32(GMAC_BASE + 0x190)
/** GMAC_GMAC_LFFE Length Field Frame Errors Register **/
#define GMAC_GMAC_LFFE			MMIO32(GMAC_BASE + 0x194)
/** GMAC_GMAC_RSE Receive Symbol Errors Register **/
#define GMAC_GMAC_RSE			MMIO32(GMAC_BASE + 0x198)
/** GMAC_GMAC_AE Alignment Errors Register **/
#define GMAC_GMAC_AE			MMIO32(GMAC_BASE + 0x19c)
/** GMAC_GMAC_RRE Receive Resource Errors Register **/
#define GMAC_GMAC_RRE			MMIO32(GMAC_BASE + 0x1a0)
/** GMAC_GMAC_ROE Receive Overrun Register **/
#define GMAC_GMAC_ROE			MMIO32(GMAC_BASE + 0x1a4)
/** GMAC_GMAC_IHCE IP Header Checksum Errors Register **/
#define GMAC_GMAC_IHCE			MMIO32(GMAC_BASE + 0x1a8)
/** GMAC_GMAC_TCE TCP Checksum Errors Register **/
#define GMAC_GMAC_TCE			MMIO32(GMAC_BASE + 0x1ac)
/** GMAC_GMAC_UCE UDP Checksum Errors Register **/
#define GMAC_GMAC_UCE			MMIO32(GMAC_BASE + 0x1b0)
/** GMAC_GMAC_TISUBN 1588 Timer Increment Sub-nanoseconds Register **/
#define GMAC_GMAC_TISUBN			MMIO32(GMAC_BASE + 0x1bc)
/** GMAC_GMAC_TSH 1588 Timer Seconds High Register **/
#define GMAC_GMAC_TSH			MMIO32(GMAC_BASE + 0x1c0)
/** GMAC_GMAC_TSL 1588 Timer Seconds Low Register **/
#define GMAC_GMAC_TSL			MMIO32(GMAC_BASE + 0x1d0)
/** GMAC_GMAC_TN 1588 Timer Nanoseconds Register **/
#define GMAC_GMAC_TN			MMIO32(GMAC_BASE + 0x1d4)
/** GMAC_GMAC_TA 1588 Timer Adjust Register **/
#define GMAC_GMAC_TA			MMIO32(GMAC_BASE + 0x1d8)
/** GMAC_GMAC_TI 1588 Timer Increment Register **/
#define GMAC_GMAC_TI			MMIO32(GMAC_BASE + 0x1dc)
/** GMAC_GMAC_EFTSL PTP Event Frame Transmitted Seconds Low Register **/
#define GMAC_GMAC_EFTSL			MMIO32(GMAC_BASE + 0x1e0)
/** GMAC_GMAC_EFTN PTP Event Frame Transmitted Nanoseconds Register **/
#define GMAC_GMAC_EFTN			MMIO32(GMAC_BASE + 0x1e4)
/** GMAC_GMAC_EFRSL PTP Event Frame Received Seconds Low Register **/
#define GMAC_GMAC_EFRSL			MMIO32(GMAC_BASE + 0x1e8)
/** GMAC_GMAC_EFRN PTP Event Frame Received Nanoseconds Register **/
#define GMAC_GMAC_EFRN			MMIO32(GMAC_BASE + 0x1ec)
/** GMAC_GMAC_PEFTSL PTP Peer Event Frame Transmitted Seconds Low Register **/
#define GMAC_GMAC_PEFTSL			MMIO32(GMAC_BASE + 0x1f0)
/** GMAC_GMAC_PEFTN PTP Peer Event Frame Transmitted Nanoseconds Register **/
#define GMAC_GMAC_PEFTN			MMIO32(GMAC_BASE + 0x1f4)
/** GMAC_GMAC_PEFRSL PTP Peer Event Frame Received Seconds Low Register **/
#define GMAC_GMAC_PEFRSL			MMIO32(GMAC_BASE + 0x1f8)
/** GMAC_GMAC_PEFRN PTP Peer Event Frame Received Nanoseconds Register **/
#define GMAC_GMAC_PEFRN			MMIO32(GMAC_BASE + 0x1fc)
/** GMAC_GMAC_RXLPI Received LPI Transitions **/
#define GMAC_GMAC_RXLPI			MMIO32(GMAC_BASE + 0x270)
/** GMAC_GMAC_RXLPITIME Received LPI Time **/
#define GMAC_GMAC_RXLPITIME			MMIO32(GMAC_BASE + 0x274)
/** GMAC_GMAC_TXLPI Transmit LPI Transitions **/
#define GMAC_GMAC_TXLPI			MMIO32(GMAC_BASE + 0x278)
/** GMAC_GMAC_TXLPITIME Transmit LPI Time **/
#define GMAC_GMAC_TXLPITIME			MMIO32(GMAC_BASE + 0x27c)
/** GMAC_GMAC_ISRPQ[0] Interrupt Status Register Priority Queue (1..5) **/
#define GMAC_GMAC_ISRPQ[0]			MMIO32(GMAC_BASE + 0x400)
/** GMAC_GMAC_ISRPQ[1] Interrupt Status Register Priority Queue (1..5) **/
#define GMAC_GMAC_ISRPQ[1]			MMIO32(GMAC_BASE + 0x404)
/** GMAC_GMAC_ISRPQ[2] Interrupt Status Register Priority Queue (1..5) **/
#define GMAC_GMAC_ISRPQ[2]			MMIO32(GMAC_BASE + 0x408)
/** GMAC_GMAC_ISRPQ[3] Interrupt Status Register Priority Queue (1..5) **/
#define GMAC_GMAC_ISRPQ[3]			MMIO32(GMAC_BASE + 0x40c)
/** GMAC_GMAC_ISRPQ[4] Interrupt Status Register Priority Queue (1..5) **/
#define GMAC_GMAC_ISRPQ[4]			MMIO32(GMAC_BASE + 0x410)
/** GMAC_GMAC_TBQBAPQ[0] Transmit Buffer Queue Base Address Register Priority Queue (1..5) **/
#define GMAC_GMAC_TBQBAPQ[0]			MMIO32(GMAC_BASE + 0x440)
/** GMAC_GMAC_TBQBAPQ[1] Transmit Buffer Queue Base Address Register Priority Queue (1..5) **/
#define GMAC_GMAC_TBQBAPQ[1]			MMIO32(GMAC_BASE + 0x444)
/** GMAC_GMAC_TBQBAPQ[2] Transmit Buffer Queue Base Address Register Priority Queue (1..5) **/
#define GMAC_GMAC_TBQBAPQ[2]			MMIO32(GMAC_BASE + 0x448)
/** GMAC_GMAC_TBQBAPQ[3] Transmit Buffer Queue Base Address Register Priority Queue (1..5) **/
#define GMAC_GMAC_TBQBAPQ[3]			MMIO32(GMAC_BASE + 0x44c)
/** GMAC_GMAC_TBQBAPQ[4] Transmit Buffer Queue Base Address Register Priority Queue (1..5) **/
#define GMAC_GMAC_TBQBAPQ[4]			MMIO32(GMAC_BASE + 0x450)
/** GMAC_GMAC_RBQBAPQ[0] Receive Buffer Queue Base Address Register Priority Queue (1..5) **/
#define GMAC_GMAC_RBQBAPQ[0]			MMIO32(GMAC_BASE + 0x480)
/** GMAC_GMAC_RBQBAPQ[1] Receive Buffer Queue Base Address Register Priority Queue (1..5) **/
#define GMAC_GMAC_RBQBAPQ[1]			MMIO32(GMAC_BASE + 0x484)
/** GMAC_GMAC_RBQBAPQ[2] Receive Buffer Queue Base Address Register Priority Queue (1..5) **/
#define GMAC_GMAC_RBQBAPQ[2]			MMIO32(GMAC_BASE + 0x488)
/** GMAC_GMAC_RBQBAPQ[3] Receive Buffer Queue Base Address Register Priority Queue (1..5) **/
#define GMAC_GMAC_RBQBAPQ[3]			MMIO32(GMAC_BASE + 0x48c)
/** GMAC_GMAC_RBQBAPQ[4] Receive Buffer Queue Base Address Register Priority Queue (1..5) **/
#define GMAC_GMAC_RBQBAPQ[4]			MMIO32(GMAC_BASE + 0x490)
/** GMAC_GMAC_RBSRPQ[0] Receive Buffer Size Register Priority Queue (1..5) **/
#define GMAC_GMAC_RBSRPQ[0]			MMIO32(GMAC_BASE + 0x4a0)
/** GMAC_GMAC_RBSRPQ[1] Receive Buffer Size Register Priority Queue (1..5) **/
#define GMAC_GMAC_RBSRPQ[1]			MMIO32(GMAC_BASE + 0x4a4)
/** GMAC_GMAC_RBSRPQ[2] Receive Buffer Size Register Priority Queue (1..5) **/
#define GMAC_GMAC_RBSRPQ[2]			MMIO32(GMAC_BASE + 0x4a8)
/** GMAC_GMAC_RBSRPQ[3] Receive Buffer Size Register Priority Queue (1..5) **/
#define GMAC_GMAC_RBSRPQ[3]			MMIO32(GMAC_BASE + 0x4ac)
/** GMAC_GMAC_RBSRPQ[4] Receive Buffer Size Register Priority Queue (1..5) **/
#define GMAC_GMAC_RBSRPQ[4]			MMIO32(GMAC_BASE + 0x4b0)
/** GMAC_GMAC_CBSCR Credit-Based Shaping Control Register **/
#define GMAC_GMAC_CBSCR			MMIO32(GMAC_BASE + 0x4bc)
/** GMAC_GMAC_CBSISQA Credit-Based Shaping IdleSlope Register for Queue A **/
#define GMAC_GMAC_CBSISQA			MMIO32(GMAC_BASE + 0x4c0)
/** GMAC_GMAC_CBSISQB Credit-Based Shaping IdleSlope Register for Queue B **/
#define GMAC_GMAC_CBSISQB			MMIO32(GMAC_BASE + 0x4c4)
/** GMAC_GMAC_ST1RPQ[0] Screening Type 1 Register Priority Queue **/
#define GMAC_GMAC_ST1RPQ[0]			MMIO32(GMAC_BASE + 0x500)
/** GMAC_GMAC_ST1RPQ[1] Screening Type 1 Register Priority Queue **/
#define GMAC_GMAC_ST1RPQ[1]			MMIO32(GMAC_BASE + 0x504)
/** GMAC_GMAC_ST1RPQ[2] Screening Type 1 Register Priority Queue **/
#define GMAC_GMAC_ST1RPQ[2]			MMIO32(GMAC_BASE + 0x508)
/** GMAC_GMAC_ST1RPQ[3] Screening Type 1 Register Priority Queue **/
#define GMAC_GMAC_ST1RPQ[3]			MMIO32(GMAC_BASE + 0x50c)
/** GMAC_GMAC_ST2RPQ[0] Screening Type 2 Register Priority Queue **/
#define GMAC_GMAC_ST2RPQ[0]			MMIO32(GMAC_BASE + 0x540)
/** GMAC_GMAC_ST2RPQ[1] Screening Type 2 Register Priority Queue **/
#define GMAC_GMAC_ST2RPQ[1]			MMIO32(GMAC_BASE + 0x544)
/** GMAC_GMAC_ST2RPQ[2] Screening Type 2 Register Priority Queue **/
#define GMAC_GMAC_ST2RPQ[2]			MMIO32(GMAC_BASE + 0x548)
/** GMAC_GMAC_ST2RPQ[3] Screening Type 2 Register Priority Queue **/
#define GMAC_GMAC_ST2RPQ[3]			MMIO32(GMAC_BASE + 0x54c)
/** GMAC_GMAC_ST2RPQ[4] Screening Type 2 Register Priority Queue **/
#define GMAC_GMAC_ST2RPQ[4]			MMIO32(GMAC_BASE + 0x550)
/** GMAC_GMAC_ST2RPQ[5] Screening Type 2 Register Priority Queue **/
#define GMAC_GMAC_ST2RPQ[5]			MMIO32(GMAC_BASE + 0x554)
/** GMAC_GMAC_ST2RPQ[6] Screening Type 2 Register Priority Queue **/
#define GMAC_GMAC_ST2RPQ[6]			MMIO32(GMAC_BASE + 0x558)
/** GMAC_GMAC_ST2RPQ[7] Screening Type 2 Register Priority Queue **/
#define GMAC_GMAC_ST2RPQ[7]			MMIO32(GMAC_BASE + 0x55c)
/** GMAC_GMAC_IERPQ[0] Interrupt Enable Register Priority Queue (1..5) **/
#define GMAC_GMAC_IERPQ[0]			MMIO32(GMAC_BASE + 0x600)
/** GMAC_GMAC_IERPQ[1] Interrupt Enable Register Priority Queue (1..5) **/
#define GMAC_GMAC_IERPQ[1]			MMIO32(GMAC_BASE + 0x604)
/** GMAC_GMAC_IERPQ[2] Interrupt Enable Register Priority Queue (1..5) **/
#define GMAC_GMAC_IERPQ[2]			MMIO32(GMAC_BASE + 0x608)
/** GMAC_GMAC_IERPQ[3] Interrupt Enable Register Priority Queue (1..5) **/
#define GMAC_GMAC_IERPQ[3]			MMIO32(GMAC_BASE + 0x60c)
/** GMAC_GMAC_IERPQ[4] Interrupt Enable Register Priority Queue (1..5) **/
#define GMAC_GMAC_IERPQ[4]			MMIO32(GMAC_BASE + 0x610)
/** GMAC_GMAC_IDRPQ[0] Interrupt Disable Register Priority Queue (1..5) **/
#define GMAC_GMAC_IDRPQ[0]			MMIO32(GMAC_BASE + 0x620)
/** GMAC_GMAC_IDRPQ[1] Interrupt Disable Register Priority Queue (1..5) **/
#define GMAC_GMAC_IDRPQ[1]			MMIO32(GMAC_BASE + 0x624)
/** GMAC_GMAC_IDRPQ[2] Interrupt Disable Register Priority Queue (1..5) **/
#define GMAC_GMAC_IDRPQ[2]			MMIO32(GMAC_BASE + 0x628)
/** GMAC_GMAC_IDRPQ[3] Interrupt Disable Register Priority Queue (1..5) **/
#define GMAC_GMAC_IDRPQ[3]			MMIO32(GMAC_BASE + 0x62c)
/** GMAC_GMAC_IDRPQ[4] Interrupt Disable Register Priority Queue (1..5) **/
#define GMAC_GMAC_IDRPQ[4]			MMIO32(GMAC_BASE + 0x630)
/** GMAC_GMAC_IMRPQ[0] Interrupt Mask Register Priority Queue (1..5) **/
#define GMAC_GMAC_IMRPQ[0]			MMIO32(GMAC_BASE + 0x640)
/** GMAC_GMAC_IMRPQ[1] Interrupt Mask Register Priority Queue (1..5) **/
#define GMAC_GMAC_IMRPQ[1]			MMIO32(GMAC_BASE + 0x644)
/** GMAC_GMAC_IMRPQ[2] Interrupt Mask Register Priority Queue (1..5) **/
#define GMAC_GMAC_IMRPQ[2]			MMIO32(GMAC_BASE + 0x648)
/** GMAC_GMAC_IMRPQ[3] Interrupt Mask Register Priority Queue (1..5) **/
#define GMAC_GMAC_IMRPQ[3]			MMIO32(GMAC_BASE + 0x64c)
/** GMAC_GMAC_IMRPQ[4] Interrupt Mask Register Priority Queue (1..5) **/
#define GMAC_GMAC_IMRPQ[4]			MMIO32(GMAC_BASE + 0x650)
/** GMAC_GMAC_ST2ER[0] Screening Type 2 Ethertype Register **/
#define GMAC_GMAC_ST2ER[0]			MMIO32(GMAC_BASE + 0x6e0)
/** GMAC_GMAC_ST2ER[1] Screening Type 2 Ethertype Register **/
#define GMAC_GMAC_ST2ER[1]			MMIO32(GMAC_BASE + 0x6e4)
/** GMAC_GMAC_ST2ER[2] Screening Type 2 Ethertype Register **/
#define GMAC_GMAC_ST2ER[2]			MMIO32(GMAC_BASE + 0x6e8)
/** GMAC_GMAC_ST2ER[3] Screening Type 2 Ethertype Register **/
#define GMAC_GMAC_ST2ER[3]			MMIO32(GMAC_BASE + 0x6ec)
/** GMAC_GMAC_ST2CW[0]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[0]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x700)
/** GMAC_GMAC_ST2CW[0]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[0]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x704)
/** GMAC_GMAC_ST2CW[1]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[1]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x708)
/** GMAC_GMAC_ST2CW[1]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[1]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x70c)
/** GMAC_GMAC_ST2CW[2]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[2]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x710)
/** GMAC_GMAC_ST2CW[2]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[2]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x714)
/** GMAC_GMAC_ST2CW[3]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[3]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x718)
/** GMAC_GMAC_ST2CW[3]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[3]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x71c)
/** GMAC_GMAC_ST2CW[4]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[4]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x720)
/** GMAC_GMAC_ST2CW[4]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[4]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x724)
/** GMAC_GMAC_ST2CW[5]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[5]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x728)
/** GMAC_GMAC_ST2CW[5]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[5]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x72c)
/** GMAC_GMAC_ST2CW[6]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[6]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x730)
/** GMAC_GMAC_ST2CW[6]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[6]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x734)
/** GMAC_GMAC_ST2CW[7]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[7]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x738)
/** GMAC_GMAC_ST2CW[7]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[7]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x73c)
/** GMAC_GMAC_ST2CW[8]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[8]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x740)
/** GMAC_GMAC_ST2CW[8]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[8]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x744)
/** GMAC_GMAC_ST2CW[9]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[9]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x748)
/** GMAC_GMAC_ST2CW[9]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[9]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x74c)
/** GMAC_GMAC_ST2CW[10]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[10]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x750)
/** GMAC_GMAC_ST2CW[10]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[10]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x754)
/** GMAC_GMAC_ST2CW[11]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[11]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x758)
/** GMAC_GMAC_ST2CW[11]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[11]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x75c)
/** GMAC_GMAC_ST2CW[12]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[12]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x760)
/** GMAC_GMAC_ST2CW[12]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[12]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x764)
/** GMAC_GMAC_ST2CW[13]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[13]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x768)
/** GMAC_GMAC_ST2CW[13]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[13]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x76c)
/** GMAC_GMAC_ST2CW[14]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[14]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x770)
/** GMAC_GMAC_ST2CW[14]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[14]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x774)
/** GMAC_GMAC_ST2CW[15]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[15]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x778)
/** GMAC_GMAC_ST2CW[15]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[15]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x77c)
/** GMAC_GMAC_ST2CW[16]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[16]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x780)
/** GMAC_GMAC_ST2CW[16]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[16]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x784)
/** GMAC_GMAC_ST2CW[17]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[17]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x788)
/** GMAC_GMAC_ST2CW[17]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[17]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x78c)
/** GMAC_GMAC_ST2CW[18]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[18]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x790)
/** GMAC_GMAC_ST2CW[18]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[18]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x794)
/** GMAC_GMAC_ST2CW[19]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[19]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x798)
/** GMAC_GMAC_ST2CW[19]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[19]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x79c)
/** GMAC_GMAC_ST2CW[20]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[20]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x7a0)
/** GMAC_GMAC_ST2CW[20]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[20]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x7a4)
/** GMAC_GMAC_ST2CW[21]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[21]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x7a8)
/** GMAC_GMAC_ST2CW[21]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[21]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x7ac)
/** GMAC_GMAC_ST2CW[22]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[22]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x7b0)
/** GMAC_GMAC_ST2CW[22]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[22]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x7b4)
/** GMAC_GMAC_ST2CW[23]_GMAC_ST2CW0 Screening Type 2 Compare Word 0 Register **/
#define GMAC_GMAC_ST2CW[23]_GMAC_ST2CW0			MMIO32(GMAC_BASE + 0x7b8)
/** GMAC_GMAC_ST2CW[23]_GMAC_ST2CW1 Screening Type 2 Compare Word 1 Register **/
#define GMAC_GMAC_ST2CW[23]_GMAC_ST2CW1			MMIO32(GMAC_BASE + 0x7bc)

/**@}*/


/** @defgroup gmac_gmac_ncr GMACNCR Network Control Register
@{*/

/** GMAC_GMAC_NCR_TXLPIEN Enable LPI Transmission **/
#define GMAC_GMAC_NCR_TXLPIEN		(1 << 19)
/** GMAC_GMAC_NCR_FNP Flush Next Packet **/
#define GMAC_GMAC_NCR_FNP		(1 << 18)
/** GMAC_GMAC_NCR_TXPBPF Transmit PFC Priority-based Pause Frame **/
#define GMAC_GMAC_NCR_TXPBPF		(1 << 17)
/** GMAC_GMAC_NCR_ENPBPR Enable PFC Priority-based Pause Reception **/
#define GMAC_GMAC_NCR_ENPBPR		(1 << 16)
/** GMAC_GMAC_NCR_SRTSM Store Receive Time Stamp to Memory **/
#define GMAC_GMAC_NCR_SRTSM		(1 << 15)
/** GMAC_GMAC_NCR_TXZQPF Transmit Zero Quantum Pause Frame **/
#define GMAC_GMAC_NCR_TXZQPF		(1 << 12)
/** GMAC_GMAC_NCR_TXPF Transmit Pause Frame **/
#define GMAC_GMAC_NCR_TXPF		(1 << 11)
/** GMAC_GMAC_NCR_THALT Transmit Halt **/
#define GMAC_GMAC_NCR_THALT		(1 << 10)
/** GMAC_GMAC_NCR_TSTART Start Transmission **/
#define GMAC_GMAC_NCR_TSTART		(1 << 9)
/** GMAC_GMAC_NCR_BP Back pressure **/
#define GMAC_GMAC_NCR_BP		(1 << 8)
/** GMAC_GMAC_NCR_WESTAT Write Enable for Statistics Registers **/
#define GMAC_GMAC_NCR_WESTAT		(1 << 7)
/** GMAC_GMAC_NCR_INCSTAT Increment Statistics Registers **/
#define GMAC_GMAC_NCR_INCSTAT		(1 << 6)
/** GMAC_GMAC_NCR_CLRSTAT Clear Statistics Registers **/
#define GMAC_GMAC_NCR_CLRSTAT		(1 << 5)
/** GMAC_GMAC_NCR_MPE Management Port Enable **/
#define GMAC_GMAC_NCR_MPE		(1 << 4)
/** GMAC_GMAC_NCR_TXEN Transmit Enable **/
#define GMAC_GMAC_NCR_TXEN		(1 << 3)
/** GMAC_GMAC_NCR_RXEN Receive Enable **/
#define GMAC_GMAC_NCR_RXEN		(1 << 2)
/** GMAC_GMAC_NCR_LBL Loop Back Local **/
#define GMAC_GMAC_NCR_LBL		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_ncfgr GMACNCFGR Network Configuration Register
@{*/

/** GMAC_GMAC_NCFGR_IRXER Ignore IPG GRXER **/
#define GMAC_GMAC_NCFGR_IRXER		(1 << 30)
/** GMAC_GMAC_NCFGR_RXBP Receive Bad Preamble **/
#define GMAC_GMAC_NCFGR_RXBP		(1 << 29)
/** GMAC_GMAC_NCFGR_IPGSEN IP Stretch Enable **/
#define GMAC_GMAC_NCFGR_IPGSEN		(1 << 28)
/** GMAC_GMAC_NCFGR_IRXFCS Ignore RX FCS **/
#define GMAC_GMAC_NCFGR_IRXFCS		(1 << 26)
/** GMAC_GMAC_NCFGR_EFRHD Enable Frames Received in Half Duplex **/
#define GMAC_GMAC_NCFGR_EFRHD		(1 << 25)
/** GMAC_GMAC_NCFGR_RXCOEN Receive Checksum Offload Enable **/
#define GMAC_GMAC_NCFGR_RXCOEN		(1 << 24)
/** GMAC_GMAC_NCFGR_DCPF Disable Copy of Pause Frames **/
#define GMAC_GMAC_NCFGR_DCPF		(1 << 23)

#define GMAC_GMAC_NCFGR_DBW_SHIFT		21
#define GMAC_GMAC_NCFGR_DBW_MASK		0x03
/** @defgroup gmac_gmac_ncfgr_dbw DBW Data Bus Width
@{*/
/**@}*/


#define GMAC_GMAC_NCFGR_CLK_SHIFT		18
#define GMAC_GMAC_NCFGR_CLK_MASK		0x07
/** @defgroup gmac_gmac_ncfgr_clk CLK MDC CLock Division
@{*/
/**@}*/

/** GMAC_GMAC_NCFGR_RFCS Remove FCS **/
#define GMAC_GMAC_NCFGR_RFCS		(1 << 17)
/** GMAC_GMAC_NCFGR_LFERD Length Field Error Frame Discard **/
#define GMAC_GMAC_NCFGR_LFERD		(1 << 16)

#define GMAC_GMAC_NCFGR_RXBUFO_SHIFT		14
#define GMAC_GMAC_NCFGR_RXBUFO_MASK		0x03
/** @defgroup gmac_gmac_ncfgr_rxbufo RXBUFO Receive Buffer Offset
@{*/
/**@}*/

/** GMAC_GMAC_NCFGR_PEN Pause Enable **/
#define GMAC_GMAC_NCFGR_PEN		(1 << 13)
/** GMAC_GMAC_NCFGR_RTY Retry Test **/
#define GMAC_GMAC_NCFGR_RTY		(1 << 12)
/** GMAC_GMAC_NCFGR_MAXFS 1536 Maximum Frame Size **/
#define GMAC_GMAC_NCFGR_MAXFS		(1 << 8)
/** GMAC_GMAC_NCFGR_UNIHEN Unicast Hash Enable **/
#define GMAC_GMAC_NCFGR_UNIHEN		(1 << 7)
/** GMAC_GMAC_NCFGR_MTIHEN Multicast Hash Enable **/
#define GMAC_GMAC_NCFGR_MTIHEN		(1 << 6)
/** GMAC_GMAC_NCFGR_NBC No Broadcast **/
#define GMAC_GMAC_NCFGR_NBC		(1 << 5)
/** GMAC_GMAC_NCFGR_CAF Copy All Frames **/
#define GMAC_GMAC_NCFGR_CAF		(1 << 4)
/** GMAC_GMAC_NCFGR_JFRAME Jumbo Frame Size **/
#define GMAC_GMAC_NCFGR_JFRAME		(1 << 3)
/** GMAC_GMAC_NCFGR_DNVLAN Discard Non-VLAN FRAMES **/
#define GMAC_GMAC_NCFGR_DNVLAN		(1 << 2)
/** GMAC_GMAC_NCFGR_FD Full Duplex **/
#define GMAC_GMAC_NCFGR_FD		(1 << 1)
/** GMAC_GMAC_NCFGR_SPD Speed **/
#define GMAC_GMAC_NCFGR_SPD		(1 << 0)

/**@}*/

/** @defgroup gmac_gmac_nsr GMACNSR Network Status Register
@{*/

/** GMAC_GMAC_NSR_RXLPIS LPI Indication **/
#define GMAC_GMAC_NSR_RXLPIS		(1 << 7)
/** GMAC_GMAC_NSR_IDLE PHY Management Logic Idle **/
#define GMAC_GMAC_NSR_IDLE		(1 << 2)
/** GMAC_GMAC_NSR_MDIO MDIO Input Status **/
#define GMAC_GMAC_NSR_MDIO		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_ur GMACUR User Register
@{*/

/** GMAC_GMAC_UR_RMII Reduced MII Mode **/
#define GMAC_GMAC_UR_RMII		(1 << 0)

/**@}*/

/** @defgroup gmac_gmac_dcfgr GMACDCFGR DMA Configuration Register
@{*/

/** GMAC_GMAC_DCFGR_DDRP DMA Discard Receive Packets **/
#define GMAC_GMAC_DCFGR_DDRP		(1 << 24)

#define GMAC_GMAC_DCFGR_DRBS_SHIFT		16
#define GMAC_GMAC_DCFGR_DRBS_MASK		0xff
/** @defgroup gmac_gmac_dcfgr_drbs DRBS DMA Receive Buffer Size
@{*/
/**@}*/

/** GMAC_GMAC_DCFGR_TXCOEN Transmitter Checksum Generation Offload Enable **/
#define GMAC_GMAC_DCFGR_TXCOEN		(1 << 11)
/** GMAC_GMAC_DCFGR_TXPBMS Transmitter Packet Buffer Memory Size Select **/
#define GMAC_GMAC_DCFGR_TXPBMS		(1 << 10)

#define GMAC_GMAC_DCFGR_RXBMS_SHIFT		8
#define GMAC_GMAC_DCFGR_RXBMS_MASK		0x03
/** @defgroup gmac_gmac_dcfgr_rxbms RXBMS Receiver Packet Buffer Memory Size Select
@{*/
/**@}*/

/** GMAC_GMAC_DCFGR_ESPA Endian Swap Mode Enable for Packet Data Accesses **/
#define GMAC_GMAC_DCFGR_ESPA		(1 << 7)
/** GMAC_GMAC_DCFGR_ESMA Endian Swap Mode Enable for Management Descriptor Accesses **/
#define GMAC_GMAC_DCFGR_ESMA		(1 << 6)

#define GMAC_GMAC_DCFGR_FBLDO_SHIFT		0
#define GMAC_GMAC_DCFGR_FBLDO_MASK		0x1f
/** @defgroup gmac_gmac_dcfgr_fbldo FBLDO Fixed Burst Length for DMA Data Operations:
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tsr GMACTSR Transmit Status Register
@{*/

/** GMAC_GMAC_TSR_HRESP HRESP Not OK **/
#define GMAC_GMAC_TSR_HRESP		(1 << 8)
/** GMAC_GMAC_TSR_TXCOMP Transmit Complete **/
#define GMAC_GMAC_TSR_TXCOMP		(1 << 5)
/** GMAC_GMAC_TSR_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_TSR_TFC		(1 << 4)
/** GMAC_GMAC_TSR_TXGO Transmit Go **/
#define GMAC_GMAC_TSR_TXGO		(1 << 3)
/** GMAC_GMAC_TSR_RLE Retry Limit Exceeded **/
#define GMAC_GMAC_TSR_RLE		(1 << 2)
/** GMAC_GMAC_TSR_COL Collision Occurred **/
#define GMAC_GMAC_TSR_COL		(1 << 1)
/** GMAC_GMAC_TSR_UBR Used Bit Read **/
#define GMAC_GMAC_TSR_UBR		(1 << 0)

/**@}*/

/** @defgroup gmac_gmac_rbqb GMACRBQB Receive Buffer Queue Base Address Register
@{*/


#define GMAC_GMAC_RBQB_ADDR_SHIFT		2
#define GMAC_GMAC_RBQB_ADDR_MASK		0x3fffffff
/** @defgroup gmac_gmac_rbqb_addr ADDR Receive Buffer Queue Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbqb GMACTBQB Transmit Buffer Queue Base Address Register
@{*/


#define GMAC_GMAC_TBQB_ADDR_SHIFT		2
#define GMAC_GMAC_TBQB_ADDR_MASK		0x3fffffff
/** @defgroup gmac_gmac_tbqb_addr ADDR Transmit Buffer Queue Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rsr GMACRSR Receive Status Register
@{*/

/** GMAC_GMAC_RSR_HNO HRESP Not OK **/
#define GMAC_GMAC_RSR_HNO		(1 << 3)
/** GMAC_GMAC_RSR_RXOVR Receive Overrun **/
#define GMAC_GMAC_RSR_RXOVR		(1 << 2)
/** GMAC_GMAC_RSR_REC Frame Received **/
#define GMAC_GMAC_RSR_REC		(1 << 1)
/** GMAC_GMAC_RSR_BNA Buffer Not Available **/
#define GMAC_GMAC_RSR_BNA		(1 << 0)

/**@}*/

/** @defgroup gmac_gmac_isr GMACISR Interrupt Status Register
@{*/

/** GMAC_GMAC_ISR_TSUTIMCOMP TSU Timer Comparison **/
#define GMAC_GMAC_ISR_TSUTIMCOMP		(1 << 29)
/** GMAC_GMAC_ISR_WOL Wake On LAN **/
#define GMAC_GMAC_ISR_WOL		(1 << 28)
/** GMAC_GMAC_ISR_RXLPISBC Receive LPI indication Status Bit Change **/
#define GMAC_GMAC_ISR_RXLPISBC		(1 << 27)
/** GMAC_GMAC_ISR_SRI TSU Seconds Register Increment **/
#define GMAC_GMAC_ISR_SRI		(1 << 26)
/** GMAC_GMAC_ISR_PDRSFT PDelay Response Frame Transmitted **/
#define GMAC_GMAC_ISR_PDRSFT		(1 << 25)
/** GMAC_GMAC_ISR_PDRQFT PDelay Request Frame Transmitted **/
#define GMAC_GMAC_ISR_PDRQFT		(1 << 24)
/** GMAC_GMAC_ISR_PDRSFR PDelay Response Frame Received **/
#define GMAC_GMAC_ISR_PDRSFR		(1 << 23)
/** GMAC_GMAC_ISR_PDRQFR PDelay Request Frame Received **/
#define GMAC_GMAC_ISR_PDRQFR		(1 << 22)
/** GMAC_GMAC_ISR_SFT PTP Sync Frame Transmitted **/
#define GMAC_GMAC_ISR_SFT		(1 << 21)
/** GMAC_GMAC_ISR_DRQFT PTP Delay Request Frame Transmitted **/
#define GMAC_GMAC_ISR_DRQFT		(1 << 20)
/** GMAC_GMAC_ISR_SFR PTP Sync Frame Received **/
#define GMAC_GMAC_ISR_SFR		(1 << 19)
/** GMAC_GMAC_ISR_DRQFR PTP Delay Request Frame Received **/
#define GMAC_GMAC_ISR_DRQFR		(1 << 18)
/** GMAC_GMAC_ISR_PFTR Pause Frame Transmitted **/
#define GMAC_GMAC_ISR_PFTR		(1 << 14)
/** GMAC_GMAC_ISR_PTZ Pause Time Zero **/
#define GMAC_GMAC_ISR_PTZ		(1 << 13)
/** GMAC_GMAC_ISR_PFNZ Pause Frame with Non-zero Pause Quantum Received **/
#define GMAC_GMAC_ISR_PFNZ		(1 << 12)
/** GMAC_GMAC_ISR_HRESP HRESP Not OK **/
#define GMAC_GMAC_ISR_HRESP		(1 << 11)
/** GMAC_GMAC_ISR_ROVR Receive Overrun **/
#define GMAC_GMAC_ISR_ROVR		(1 << 10)
/** GMAC_GMAC_ISR_TCOMP Transmit Complete **/
#define GMAC_GMAC_ISR_TCOMP		(1 << 7)
/** GMAC_GMAC_ISR_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_ISR_TFC		(1 << 6)
/** GMAC_GMAC_ISR_RLEX Retry Limit Exceeded **/
#define GMAC_GMAC_ISR_RLEX		(1 << 5)
/** GMAC_GMAC_ISR_TUR Transmit Underrun **/
#define GMAC_GMAC_ISR_TUR		(1 << 4)
/** GMAC_GMAC_ISR_TXUBR TX Used Bit Read **/
#define GMAC_GMAC_ISR_TXUBR		(1 << 3)
/** GMAC_GMAC_ISR_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_ISR_RXUBR		(1 << 2)
/** GMAC_GMAC_ISR_RCOMP Receive Complete **/
#define GMAC_GMAC_ISR_RCOMP		(1 << 1)
/** GMAC_GMAC_ISR_MFS Management Frame Sent **/
#define GMAC_GMAC_ISR_MFS		(1 << 0)

/**@}*/

/** @defgroup gmac_gmac_ier GMACIER Interrupt Enable Register
@{*/

/** GMAC_GMAC_IER_TSUTIMCOMP TSU Timer Comparison **/
#define GMAC_GMAC_IER_TSUTIMCOMP		(1 << 29)
/** GMAC_GMAC_IER_WOL Wake On LAN **/
#define GMAC_GMAC_IER_WOL		(1 << 28)
/** GMAC_GMAC_IER_RXLPISBC Enable RX LPI Indication **/
#define GMAC_GMAC_IER_RXLPISBC		(1 << 27)
/** GMAC_GMAC_IER_SRI TSU Seconds Register Increment **/
#define GMAC_GMAC_IER_SRI		(1 << 26)
/** GMAC_GMAC_IER_PDRSFT PDelay Response Frame Transmitted **/
#define GMAC_GMAC_IER_PDRSFT		(1 << 25)
/** GMAC_GMAC_IER_PDRQFT PDelay Request Frame Transmitted **/
#define GMAC_GMAC_IER_PDRQFT		(1 << 24)
/** GMAC_GMAC_IER_PDRSFR PDelay Response Frame Received **/
#define GMAC_GMAC_IER_PDRSFR		(1 << 23)
/** GMAC_GMAC_IER_PDRQFR PDelay Request Frame Received **/
#define GMAC_GMAC_IER_PDRQFR		(1 << 22)
/** GMAC_GMAC_IER_SFT PTP Sync Frame Transmitted **/
#define GMAC_GMAC_IER_SFT		(1 << 21)
/** GMAC_GMAC_IER_DRQFT PTP Delay Request Frame Transmitted **/
#define GMAC_GMAC_IER_DRQFT		(1 << 20)
/** GMAC_GMAC_IER_SFR PTP Sync Frame Received **/
#define GMAC_GMAC_IER_SFR		(1 << 19)
/** GMAC_GMAC_IER_DRQFR PTP Delay Request Frame Received **/
#define GMAC_GMAC_IER_DRQFR		(1 << 18)
/** GMAC_GMAC_IER_EXINT External Interrupt **/
#define GMAC_GMAC_IER_EXINT		(1 << 15)
/** GMAC_GMAC_IER_PFTR Pause Frame Transmitted **/
#define GMAC_GMAC_IER_PFTR		(1 << 14)
/** GMAC_GMAC_IER_PTZ Pause Time Zero **/
#define GMAC_GMAC_IER_PTZ		(1 << 13)
/** GMAC_GMAC_IER_PFNZ Pause Frame with Non-zero Pause Quantum Received **/
#define GMAC_GMAC_IER_PFNZ		(1 << 12)
/** GMAC_GMAC_IER_HRESP HRESP Not OK **/
#define GMAC_GMAC_IER_HRESP		(1 << 11)
/** GMAC_GMAC_IER_ROVR Receive Overrun **/
#define GMAC_GMAC_IER_ROVR		(1 << 10)
/** GMAC_GMAC_IER_TCOMP Transmit Complete **/
#define GMAC_GMAC_IER_TCOMP		(1 << 7)
/** GMAC_GMAC_IER_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_IER_TFC		(1 << 6)
/** GMAC_GMAC_IER_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IER_RLEX		(1 << 5)
/** GMAC_GMAC_IER_TUR Transmit Underrun **/
#define GMAC_GMAC_IER_TUR		(1 << 4)
/** GMAC_GMAC_IER_TXUBR TX Used Bit Read **/
#define GMAC_GMAC_IER_TXUBR		(1 << 3)
/** GMAC_GMAC_IER_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IER_RXUBR		(1 << 2)
/** GMAC_GMAC_IER_RCOMP Receive Complete **/
#define GMAC_GMAC_IER_RCOMP		(1 << 1)
/** GMAC_GMAC_IER_MFS Management Frame Sent **/
#define GMAC_GMAC_IER_MFS		(1 << 0)

/**@}*/

/** @defgroup gmac_gmac_idr GMACIDR Interrupt Disable Register
@{*/

/** GMAC_GMAC_IDR_TSUTIMCOMP TSU Timer Comparison **/
#define GMAC_GMAC_IDR_TSUTIMCOMP		(1 << 29)
/** GMAC_GMAC_IDR_WOL Wake On LAN **/
#define GMAC_GMAC_IDR_WOL		(1 << 28)
/** GMAC_GMAC_IDR_RXLPISBC Enable RX LPI Indication **/
#define GMAC_GMAC_IDR_RXLPISBC		(1 << 27)
/** GMAC_GMAC_IDR_SRI TSU Seconds Register Increment **/
#define GMAC_GMAC_IDR_SRI		(1 << 26)
/** GMAC_GMAC_IDR_PDRSFT PDelay Response Frame Transmitted **/
#define GMAC_GMAC_IDR_PDRSFT		(1 << 25)
/** GMAC_GMAC_IDR_PDRQFT PDelay Request Frame Transmitted **/
#define GMAC_GMAC_IDR_PDRQFT		(1 << 24)
/** GMAC_GMAC_IDR_PDRSFR PDelay Response Frame Received **/
#define GMAC_GMAC_IDR_PDRSFR		(1 << 23)
/** GMAC_GMAC_IDR_PDRQFR PDelay Request Frame Received **/
#define GMAC_GMAC_IDR_PDRQFR		(1 << 22)
/** GMAC_GMAC_IDR_SFT PTP Sync Frame Transmitted **/
#define GMAC_GMAC_IDR_SFT		(1 << 21)
/** GMAC_GMAC_IDR_DRQFT PTP Delay Request Frame Transmitted **/
#define GMAC_GMAC_IDR_DRQFT		(1 << 20)
/** GMAC_GMAC_IDR_SFR PTP Sync Frame Received **/
#define GMAC_GMAC_IDR_SFR		(1 << 19)
/** GMAC_GMAC_IDR_DRQFR PTP Delay Request Frame Received **/
#define GMAC_GMAC_IDR_DRQFR		(1 << 18)
/** GMAC_GMAC_IDR_EXINT External Interrupt **/
#define GMAC_GMAC_IDR_EXINT		(1 << 15)
/** GMAC_GMAC_IDR_PFTR Pause Frame Transmitted **/
#define GMAC_GMAC_IDR_PFTR		(1 << 14)
/** GMAC_GMAC_IDR_PTZ Pause Time Zero **/
#define GMAC_GMAC_IDR_PTZ		(1 << 13)
/** GMAC_GMAC_IDR_PFNZ Pause Frame with Non-zero Pause Quantum Received **/
#define GMAC_GMAC_IDR_PFNZ		(1 << 12)
/** GMAC_GMAC_IDR_HRESP HRESP Not OK **/
#define GMAC_GMAC_IDR_HRESP		(1 << 11)
/** GMAC_GMAC_IDR_ROVR Receive Overrun **/
#define GMAC_GMAC_IDR_ROVR		(1 << 10)
/** GMAC_GMAC_IDR_TCOMP Transmit Complete **/
#define GMAC_GMAC_IDR_TCOMP		(1 << 7)
/** GMAC_GMAC_IDR_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_IDR_TFC		(1 << 6)
/** GMAC_GMAC_IDR_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IDR_RLEX		(1 << 5)
/** GMAC_GMAC_IDR_TUR Transmit Underrun **/
#define GMAC_GMAC_IDR_TUR		(1 << 4)
/** GMAC_GMAC_IDR_TXUBR TX Used Bit Read **/
#define GMAC_GMAC_IDR_TXUBR		(1 << 3)
/** GMAC_GMAC_IDR_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IDR_RXUBR		(1 << 2)
/** GMAC_GMAC_IDR_RCOMP Receive Complete **/
#define GMAC_GMAC_IDR_RCOMP		(1 << 1)
/** GMAC_GMAC_IDR_MFS Management Frame Sent **/
#define GMAC_GMAC_IDR_MFS		(1 << 0)

/**@}*/

/** @defgroup gmac_gmac_imr GMACIMR Interrupt Mask Register
@{*/

/** GMAC_GMAC_IMR_TSUTIMCOMP TSU Timer Comparison **/
#define GMAC_GMAC_IMR_TSUTIMCOMP		(1 << 29)
/** GMAC_GMAC_IMR_WOL Wake On LAN **/
#define GMAC_GMAC_IMR_WOL		(1 << 28)
/** GMAC_GMAC_IMR_RXLPISBC Enable RX LPI Indication **/
#define GMAC_GMAC_IMR_RXLPISBC		(1 << 27)
/** GMAC_GMAC_IMR_SRI TSU Seconds Register Increment **/
#define GMAC_GMAC_IMR_SRI		(1 << 26)
/** GMAC_GMAC_IMR_PDRSFT PDelay Response Frame Transmitted **/
#define GMAC_GMAC_IMR_PDRSFT		(1 << 25)
/** GMAC_GMAC_IMR_PDRQFT PDelay Request Frame Transmitted **/
#define GMAC_GMAC_IMR_PDRQFT		(1 << 24)
/** GMAC_GMAC_IMR_PDRSFR PDelay Response Frame Received **/
#define GMAC_GMAC_IMR_PDRSFR		(1 << 23)
/** GMAC_GMAC_IMR_PDRQFR PDelay Request Frame Received **/
#define GMAC_GMAC_IMR_PDRQFR		(1 << 22)
/** GMAC_GMAC_IMR_SFT PTP Sync Frame Transmitted **/
#define GMAC_GMAC_IMR_SFT		(1 << 21)
/** GMAC_GMAC_IMR_DRQFT PTP Delay Request Frame Transmitted **/
#define GMAC_GMAC_IMR_DRQFT		(1 << 20)
/** GMAC_GMAC_IMR_SFR PTP Sync Frame Received **/
#define GMAC_GMAC_IMR_SFR		(1 << 19)
/** GMAC_GMAC_IMR_DRQFR PTP Delay Request Frame Received **/
#define GMAC_GMAC_IMR_DRQFR		(1 << 18)
/** GMAC_GMAC_IMR_EXINT External Interrupt **/
#define GMAC_GMAC_IMR_EXINT		(1 << 15)
/** GMAC_GMAC_IMR_PFTR Pause Frame Transmitted **/
#define GMAC_GMAC_IMR_PFTR		(1 << 14)
/** GMAC_GMAC_IMR_PTZ Pause Time Zero **/
#define GMAC_GMAC_IMR_PTZ		(1 << 13)
/** GMAC_GMAC_IMR_PFNZ Pause Frame with Non-zero Pause Quantum Received **/
#define GMAC_GMAC_IMR_PFNZ		(1 << 12)
/** GMAC_GMAC_IMR_HRESP HRESP Not OK **/
#define GMAC_GMAC_IMR_HRESP		(1 << 11)
/** GMAC_GMAC_IMR_ROVR Receive Overrun **/
#define GMAC_GMAC_IMR_ROVR		(1 << 10)
/** GMAC_GMAC_IMR_TCOMP Transmit Complete **/
#define GMAC_GMAC_IMR_TCOMP		(1 << 7)
/** GMAC_GMAC_IMR_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_IMR_TFC		(1 << 6)
/** GMAC_GMAC_IMR_RLEX Retry Limit Exceeded **/
#define GMAC_GMAC_IMR_RLEX		(1 << 5)
/** GMAC_GMAC_IMR_TUR Transmit Underrun **/
#define GMAC_GMAC_IMR_TUR		(1 << 4)
/** GMAC_GMAC_IMR_TXUBR TX Used Bit Read **/
#define GMAC_GMAC_IMR_TXUBR		(1 << 3)
/** GMAC_GMAC_IMR_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IMR_RXUBR		(1 << 2)
/** GMAC_GMAC_IMR_RCOMP Receive Complete **/
#define GMAC_GMAC_IMR_RCOMP		(1 << 1)
/** GMAC_GMAC_IMR_MFS Management Frame Sent **/
#define GMAC_GMAC_IMR_MFS		(1 << 0)

/**@}*/

/** @defgroup gmac_gmac_man GMACMAN PHY Maintenance Register
@{*/

/** GMAC_GMAC_MAN_WZO Write ZERO **/
#define GMAC_GMAC_MAN_WZO		(1 << 31)
/** GMAC_GMAC_MAN_CLTTO Clause 22 Operation **/
#define GMAC_GMAC_MAN_CLTTO		(1 << 30)

#define GMAC_GMAC_MAN_OP_SHIFT		28
#define GMAC_GMAC_MAN_OP_MASK		0x03
/** @defgroup gmac_gmac_man_op OP Operation
@{*/
/**@}*/


#define GMAC_GMAC_MAN_PHYA_SHIFT		23
#define GMAC_GMAC_MAN_PHYA_MASK		0x1f
/** @defgroup gmac_gmac_man_phya PHYA PHY Address
@{*/
/**@}*/


#define GMAC_GMAC_MAN_REGA_SHIFT		18
#define GMAC_GMAC_MAN_REGA_MASK		0x1f
/** @defgroup gmac_gmac_man_rega REGA Register Address
@{*/
/**@}*/


#define GMAC_GMAC_MAN_WTN_SHIFT		16
#define GMAC_GMAC_MAN_WTN_MASK		0x03
/** @defgroup gmac_gmac_man_wtn WTN Write Ten
@{*/
/**@}*/


#define GMAC_GMAC_MAN_DATA_SHIFT		0
#define GMAC_GMAC_MAN_DATA_MASK		0xffff
/** @defgroup gmac_gmac_man_data DATA PHY Data
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rpq GMACRPQ Received Pause Quantum Register
@{*/


#define GMAC_GMAC_RPQ_RPQ_SHIFT		0
#define GMAC_GMAC_RPQ_RPQ_MASK		0xffff
/** @defgroup gmac_gmac_rpq_rpq RPQ Received Pause Quantum
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tpq GMACTPQ Transmit Pause Quantum Register
@{*/


#define GMAC_GMAC_TPQ_TPQ_SHIFT		0
#define GMAC_GMAC_TPQ_TPQ_MASK		0xffff
/** @defgroup gmac_gmac_tpq_tpq TPQ Transmit Pause Quantum
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tpsf GMACTPSF TX Partial Store and Forward Register
@{*/

/** GMAC_GMAC_TPSF_ENTXP Enable TX Partial Store and Forward Operation **/
#define GMAC_GMAC_TPSF_ENTXP		(1 << 31)

#define GMAC_GMAC_TPSF_TPB1ADR_SHIFT		0
#define GMAC_GMAC_TPSF_TPB1ADR_MASK		0xfff
/** @defgroup gmac_gmac_tpsf_tpb1adr TPB1ADR Transmit Partial Store and Forward Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rpsf GMACRPSF RX Partial Store and Forward Register
@{*/

/** GMAC_GMAC_RPSF_ENRXP Enable RX Partial Store and Forward Operation **/
#define GMAC_GMAC_RPSF_ENRXP		(1 << 31)

#define GMAC_GMAC_RPSF_RPB1ADR_SHIFT		0
#define GMAC_GMAC_RPSF_RPB1ADR_MASK		0xfff
/** @defgroup gmac_gmac_rpsf_rpb1adr RPB1ADR Receive Partial Store and Forward Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rjfml GMACRJFML RX Jumbo Frame Max Length Register
@{*/


#define GMAC_GMAC_RJFML_FML_SHIFT		0
#define GMAC_GMAC_RJFML_FML_MASK		0x3fff
/** @defgroup gmac_gmac_rjfml_fml FML Frame Max Length
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_hrb GMACHRB Hash Register Bottom
@{*/


#define GMAC_GMAC_HRB_ADDR_SHIFT		0
#define GMAC_GMAC_HRB_ADDR_MASK		0xffffffff
/** @defgroup gmac_gmac_hrb_addr ADDR Hash Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_hrt GMACHRT Hash Register Top
@{*/


#define GMAC_GMAC_HRT_ADDR_SHIFT		0
#define GMAC_GMAC_HRT_ADDR_MASK		0xffffffff
/** @defgroup gmac_gmac_hrt_addr ADDR Hash Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_sa0_gmac_sab GMACSA0GMACSAB Specific Address 1 Bottom Register
@{*/


#define GMAC_GMAC_SA0_GMAC_SAB_ADDR_SHIFT		0
#define GMAC_GMAC_SA0_GMAC_SAB_ADDR_MASK		0xffffffff
/** @defgroup gmac_gmac_sa0_gmac_sab_addr ADDR Specific Address 1
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_sa0_gmac_sat GMACSA0GMACSAT Specific Address 1 Top Register
@{*/


#define GMAC_GMAC_SA0_GMAC_SAT_ADDR_SHIFT		0
#define GMAC_GMAC_SA0_GMAC_SAT_ADDR_MASK		0xffff
/** @defgroup gmac_gmac_sa0_gmac_sat_addr ADDR Specific Address 1
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_sa1_gmac_sab GMACSA1GMACSAB Specific Address 1 Bottom Register
@{*/


#define GMAC_GMAC_SA1_GMAC_SAB_ADDR_SHIFT		0
#define GMAC_GMAC_SA1_GMAC_SAB_ADDR_MASK		0xffffffff
/** @defgroup gmac_gmac_sa1_gmac_sab_addr ADDR Specific Address 1
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_sa1_gmac_sat GMACSA1GMACSAT Specific Address 1 Top Register
@{*/


#define GMAC_GMAC_SA1_GMAC_SAT_ADDR_SHIFT		0
#define GMAC_GMAC_SA1_GMAC_SAT_ADDR_MASK		0xffff
/** @defgroup gmac_gmac_sa1_gmac_sat_addr ADDR Specific Address 1
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_sa2_gmac_sab GMACSA2GMACSAB Specific Address 1 Bottom Register
@{*/


#define GMAC_GMAC_SA2_GMAC_SAB_ADDR_SHIFT		0
#define GMAC_GMAC_SA2_GMAC_SAB_ADDR_MASK		0xffffffff
/** @defgroup gmac_gmac_sa2_gmac_sab_addr ADDR Specific Address 1
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_sa2_gmac_sat GMACSA2GMACSAT Specific Address 1 Top Register
@{*/


#define GMAC_GMAC_SA2_GMAC_SAT_ADDR_SHIFT		0
#define GMAC_GMAC_SA2_GMAC_SAT_ADDR_MASK		0xffff
/** @defgroup gmac_gmac_sa2_gmac_sat_addr ADDR Specific Address 1
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_sa3_gmac_sab GMACSA3GMACSAB Specific Address 1 Bottom Register
@{*/


#define GMAC_GMAC_SA3_GMAC_SAB_ADDR_SHIFT		0
#define GMAC_GMAC_SA3_GMAC_SAB_ADDR_MASK		0xffffffff
/** @defgroup gmac_gmac_sa3_gmac_sab_addr ADDR Specific Address 1
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_sa3_gmac_sat GMACSA3GMACSAT Specific Address 1 Top Register
@{*/


#define GMAC_GMAC_SA3_GMAC_SAT_ADDR_SHIFT		0
#define GMAC_GMAC_SA3_GMAC_SAT_ADDR_MASK		0xffff
/** @defgroup gmac_gmac_sa3_gmac_sat_addr ADDR Specific Address 1
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tidm1 GMACTIDM1 Type ID Match 1 Register
@{*/

/** GMAC_GMAC_TIDM1_ENID1 Enable Copying of TID Matched Frames **/
#define GMAC_GMAC_TIDM1_ENID1		(1 << 31)

#define GMAC_GMAC_TIDM1_TID_SHIFT		0
#define GMAC_GMAC_TIDM1_TID_MASK		0xffff
/** @defgroup gmac_gmac_tidm1_tid TID Type ID Match 1
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tidm2 GMACTIDM2 Type ID Match 2 Register
@{*/

/** GMAC_GMAC_TIDM2_ENID2 Enable Copying of TID Matched Frames **/
#define GMAC_GMAC_TIDM2_ENID2		(1 << 31)

#define GMAC_GMAC_TIDM2_TID_SHIFT		0
#define GMAC_GMAC_TIDM2_TID_MASK		0xffff
/** @defgroup gmac_gmac_tidm2_tid TID Type ID Match 2
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tidm3 GMACTIDM3 Type ID Match 3 Register
@{*/

/** GMAC_GMAC_TIDM3_ENID3 Enable Copying of TID Matched Frames **/
#define GMAC_GMAC_TIDM3_ENID3		(1 << 31)

#define GMAC_GMAC_TIDM3_TID_SHIFT		0
#define GMAC_GMAC_TIDM3_TID_MASK		0xffff
/** @defgroup gmac_gmac_tidm3_tid TID Type ID Match 3
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tidm4 GMACTIDM4 Type ID Match 4 Register
@{*/

/** GMAC_GMAC_TIDM4_ENID4 Enable Copying of TID Matched Frames **/
#define GMAC_GMAC_TIDM4_ENID4		(1 << 31)

#define GMAC_GMAC_TIDM4_TID_SHIFT		0
#define GMAC_GMAC_TIDM4_TID_MASK		0xffff
/** @defgroup gmac_gmac_tidm4_tid TID Type ID Match 4
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_wol GMACWOL Wake on LAN Register
@{*/

/** GMAC_GMAC_WOL_MTI Multicast Hash Event Enable **/
#define GMAC_GMAC_WOL_MTI		(1 << 19)
/** GMAC_GMAC_WOL_SA1 Specific Address Register 1 Event Enable **/
#define GMAC_GMAC_WOL_SA1		(1 << 18)
/** GMAC_GMAC_WOL_ARP ARP Request IP Address **/
#define GMAC_GMAC_WOL_ARP		(1 << 17)
/** GMAC_GMAC_WOL_MAG Magic Packet Event Enable **/
#define GMAC_GMAC_WOL_MAG		(1 << 16)

#define GMAC_GMAC_WOL_IP_SHIFT		0
#define GMAC_GMAC_WOL_IP_MASK		0xffff
/** @defgroup gmac_gmac_wol_ip IP ARP Request IP Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_ipgs GMACIPGS IPG Stretch Register
@{*/


#define GMAC_GMAC_IPGS_FL_SHIFT		0
#define GMAC_GMAC_IPGS_FL_MASK		0xffff
/** @defgroup gmac_gmac_ipgs_fl FL Frame Length
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_svlan GMACSVLAN Stacked VLAN Register
@{*/

/** GMAC_GMAC_SVLAN_ESVLAN Enable Stacked VLAN Processing Mode **/
#define GMAC_GMAC_SVLAN_ESVLAN		(1 << 31)

#define GMAC_GMAC_SVLAN_VLAN_TYPE_SHIFT		0
#define GMAC_GMAC_SVLAN_VLAN_TYPE_MASK		0xffff
/** @defgroup gmac_gmac_svlan_vlan_type VLANTYPE User Defined VLAN_TYPE Field
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tpfcp GMACTPFCP Transmit PFC Pause Register
@{*/


#define GMAC_GMAC_TPFCP_PQ_SHIFT		8
#define GMAC_GMAC_TPFCP_PQ_MASK		0xff
/** @defgroup gmac_gmac_tpfcp_pq PQ Pause Quantum
@{*/
/**@}*/


#define GMAC_GMAC_TPFCP_PEV_SHIFT		0
#define GMAC_GMAC_TPFCP_PEV_MASK		0xff
/** @defgroup gmac_gmac_tpfcp_pev PEV Priority Enable Vector
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_samb1 GMACSAMB1 Specific Address 1 Mask Bottom Register
@{*/


#define GMAC_GMAC_SAMB1_ADDR_SHIFT		0
#define GMAC_GMAC_SAMB1_ADDR_MASK		0xffffffff
/** @defgroup gmac_gmac_samb1_addr ADDR Specific Address 1 Mask
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_samt1 GMACSAMT1 Specific Address 1 Mask Top Register
@{*/


#define GMAC_GMAC_SAMT1_ADDR_SHIFT		0
#define GMAC_GMAC_SAMT1_ADDR_MASK		0xffff
/** @defgroup gmac_gmac_samt1_addr ADDR Specific Address 1 Mask
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_nsc GMACNSC 1588 Timer Nanosecond Comparison Register
@{*/


#define GMAC_GMAC_NSC_NANOSEC_SHIFT		0
#define GMAC_GMAC_NSC_NANOSEC_MASK		0x3fffff
/** @defgroup gmac_gmac_nsc_nanosec NANOSEC 1588 Timer Nanosecond Comparison Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_scl GMACSCL 1588 Timer Second Comparison Low Register
@{*/


#define GMAC_GMAC_SCL_SEC_SHIFT		0
#define GMAC_GMAC_SCL_SEC_MASK		0xffffffff
/** @defgroup gmac_gmac_scl_sec SEC 1588 Timer Second Comparison Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_sch GMACSCH 1588 Timer Second Comparison High Register
@{*/


#define GMAC_GMAC_SCH_SEC_SHIFT		0
#define GMAC_GMAC_SCH_SEC_MASK		0xffff
/** @defgroup gmac_gmac_sch_sec SEC 1588 Timer Second Comparison Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_eftsh GMACEFTSH PTP Event Frame Transmitted Seconds High Register
@{*/


#define GMAC_GMAC_EFTSH_RUD_SHIFT		0
#define GMAC_GMAC_EFTSH_RUD_MASK		0xffff
/** @defgroup gmac_gmac_eftsh_rud RUD Register Update
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_efrsh GMACEFRSH PTP Event Frame Received Seconds High Register
@{*/


#define GMAC_GMAC_EFRSH_RUD_SHIFT		0
#define GMAC_GMAC_EFRSH_RUD_MASK		0xffff
/** @defgroup gmac_gmac_efrsh_rud RUD Register Update
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_peftsh GMACPEFTSH PTP Peer Event Frame Transmitted Seconds High Register
@{*/


#define GMAC_GMAC_PEFTSH_RUD_SHIFT		0
#define GMAC_GMAC_PEFTSH_RUD_MASK		0xffff
/** @defgroup gmac_gmac_peftsh_rud RUD Register Update
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_pefrsh GMACPEFRSH PTP Peer Event Frame Received Seconds High Register
@{*/


#define GMAC_GMAC_PEFRSH_RUD_SHIFT		0
#define GMAC_GMAC_PEFRSH_RUD_MASK		0xffff
/** @defgroup gmac_gmac_pefrsh_rud RUD Register Update
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_otlo GMACOTLO Octets Transmitted Low Register
@{*/


#define GMAC_GMAC_OTLO_TXO_SHIFT		0
#define GMAC_GMAC_OTLO_TXO_MASK		0xffffffff
/** @defgroup gmac_gmac_otlo_txo TXO Transmitted Octets
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_othi GMACOTHI Octets Transmitted High Register
@{*/


#define GMAC_GMAC_OTHI_TXO_SHIFT		0
#define GMAC_GMAC_OTHI_TXO_MASK		0xffff
/** @defgroup gmac_gmac_othi_txo TXO Transmitted Octets
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_ft GMACFT Frames Transmitted Register
@{*/


#define GMAC_GMAC_FT_FTX_SHIFT		0
#define GMAC_GMAC_FT_FTX_MASK		0xffffffff
/** @defgroup gmac_gmac_ft_ftx FTX Frames Transmitted without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_bcft GMACBCFT Broadcast Frames Transmitted Register
@{*/


#define GMAC_GMAC_BCFT_BFTX_SHIFT		0
#define GMAC_GMAC_BCFT_BFTX_MASK		0xffffffff
/** @defgroup gmac_gmac_bcft_bftx BFTX Broadcast Frames Transmitted without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_mft GMACMFT Multicast Frames Transmitted Register
@{*/


#define GMAC_GMAC_MFT_MFTX_SHIFT		0
#define GMAC_GMAC_MFT_MFTX_MASK		0xffffffff
/** @defgroup gmac_gmac_mft_mftx MFTX Multicast Frames Transmitted without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_pft GMACPFT Pause Frames Transmitted Register
@{*/


#define GMAC_GMAC_PFT_PFTX_SHIFT		0
#define GMAC_GMAC_PFT_PFTX_MASK		0xffff
/** @defgroup gmac_gmac_pft_pftx PFTX Pause Frames Transmitted Register
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_bft64 GMACBFT64 64 Byte Frames Transmitted Register
@{*/


#define GMAC_GMAC_BFT64_NFTX_SHIFT		0
#define GMAC_GMAC_BFT64_NFTX_MASK		0xffffffff
/** @defgroup gmac_gmac_bft64_nftx NFTX 64 Byte Frames Transmitted without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbft127 GMACTBFT127 65 to 127 Byte Frames Transmitted Register
@{*/


#define GMAC_GMAC_TBFT127_NFTX_SHIFT		0
#define GMAC_GMAC_TBFT127_NFTX_MASK		0xffffffff
/** @defgroup gmac_gmac_tbft127_nftx NFTX 65 to 127 Byte Frames Transmitted without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbft255 GMACTBFT255 128 to 255 Byte Frames Transmitted Register
@{*/


#define GMAC_GMAC_TBFT255_NFTX_SHIFT		0
#define GMAC_GMAC_TBFT255_NFTX_MASK		0xffffffff
/** @defgroup gmac_gmac_tbft255_nftx NFTX 128 to 255 Byte Frames Transmitted without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbft511 GMACTBFT511 256 to 511 Byte Frames Transmitted Register
@{*/


#define GMAC_GMAC_TBFT511_NFTX_SHIFT		0
#define GMAC_GMAC_TBFT511_NFTX_MASK		0xffffffff
/** @defgroup gmac_gmac_tbft511_nftx NFTX 256 to 511 Byte Frames Transmitted without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbft1023 GMACTBFT1023 512 to 1023 Byte Frames Transmitted Register
@{*/


#define GMAC_GMAC_TBFT1023_NFTX_SHIFT		0
#define GMAC_GMAC_TBFT1023_NFTX_MASK		0xffffffff
/** @defgroup gmac_gmac_tbft1023_nftx NFTX 512 to 1023 Byte Frames Transmitted without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbft1518 GMACTBFT1518 1024 to 1518 Byte Frames Transmitted Register
@{*/


#define GMAC_GMAC_TBFT1518_NFTX_SHIFT		0
#define GMAC_GMAC_TBFT1518_NFTX_MASK		0xffffffff
/** @defgroup gmac_gmac_tbft1518_nftx NFTX 1024 to 1518 Byte Frames Transmitted without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_gtbft1518 GMACGTBFT1518 Greater Than 1518 Byte Frames Transmitted Register
@{*/


#define GMAC_GMAC_GTBFT1518_NFTX_SHIFT		0
#define GMAC_GMAC_GTBFT1518_NFTX_MASK		0xffffffff
/** @defgroup gmac_gmac_gtbft1518_nftx NFTX Greater than 1518 Byte Frames Transmitted without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tur GMACTUR Transmit Underruns Register
@{*/


#define GMAC_GMAC_TUR_TXUNR_SHIFT		0
#define GMAC_GMAC_TUR_TXUNR_MASK		0x3ff
/** @defgroup gmac_gmac_tur_txunr TXUNR Transmit Underruns
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_scf GMACSCF Single Collision Frames Register
@{*/


#define GMAC_GMAC_SCF_SCOL_SHIFT		0
#define GMAC_GMAC_SCF_SCOL_MASK		0x3ffff
/** @defgroup gmac_gmac_scf_scol SCOL Single Collision
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_mcf GMACMCF Multiple Collision Frames Register
@{*/


#define GMAC_GMAC_MCF_MCOL_SHIFT		0
#define GMAC_GMAC_MCF_MCOL_MASK		0x3ffff
/** @defgroup gmac_gmac_mcf_mcol MCOL Multiple Collision
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_ec GMACEC Excessive Collisions Register
@{*/


#define GMAC_GMAC_EC_XCOL_SHIFT		0
#define GMAC_GMAC_EC_XCOL_MASK		0x3ff
/** @defgroup gmac_gmac_ec_xcol XCOL Excessive Collisions
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_lc GMACLC Late Collisions Register
@{*/


#define GMAC_GMAC_LC_LCOL_SHIFT		0
#define GMAC_GMAC_LC_LCOL_MASK		0x3ff
/** @defgroup gmac_gmac_lc_lcol LCOL Late Collisions
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_dtf GMACDTF Deferred Transmission Frames Register
@{*/


#define GMAC_GMAC_DTF_DEFT_SHIFT		0
#define GMAC_GMAC_DTF_DEFT_MASK		0x3ffff
/** @defgroup gmac_gmac_dtf_deft DEFT Deferred Transmission
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_cse GMACCSE Carrier Sense Errors Register
@{*/


#define GMAC_GMAC_CSE_CSR_SHIFT		0
#define GMAC_GMAC_CSE_CSR_MASK		0x3ff
/** @defgroup gmac_gmac_cse_csr CSR Carrier Sense Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_orlo GMACORLO Octets Received Low Received Register
@{*/


#define GMAC_GMAC_ORLO_RXO_SHIFT		0
#define GMAC_GMAC_ORLO_RXO_MASK		0xffffffff
/** @defgroup gmac_gmac_orlo_rxo RXO Received Octets
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_orhi GMACORHI Octets Received High Received Register
@{*/


#define GMAC_GMAC_ORHI_RXO_SHIFT		0
#define GMAC_GMAC_ORHI_RXO_MASK		0xffff
/** @defgroup gmac_gmac_orhi_rxo RXO Received Octets
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_fr GMACFR Frames Received Register
@{*/


#define GMAC_GMAC_FR_FRX_SHIFT		0
#define GMAC_GMAC_FR_FRX_MASK		0xffffffff
/** @defgroup gmac_gmac_fr_frx FRX Frames Received without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_bcfr GMACBCFR Broadcast Frames Received Register
@{*/


#define GMAC_GMAC_BCFR_BFRX_SHIFT		0
#define GMAC_GMAC_BCFR_BFRX_MASK		0xffffffff
/** @defgroup gmac_gmac_bcfr_bfrx BFRX Broadcast Frames Received without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_mfr GMACMFR Multicast Frames Received Register
@{*/


#define GMAC_GMAC_MFR_MFRX_SHIFT		0
#define GMAC_GMAC_MFR_MFRX_MASK		0xffffffff
/** @defgroup gmac_gmac_mfr_mfrx MFRX Multicast Frames Received without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_pfr GMACPFR Pause Frames Received Register
@{*/


#define GMAC_GMAC_PFR_PFRX_SHIFT		0
#define GMAC_GMAC_PFR_PFRX_MASK		0xffff
/** @defgroup gmac_gmac_pfr_pfrx PFRX Pause Frames Received Register
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_bfr64 GMACBFR64 64 Byte Frames Received Register
@{*/


#define GMAC_GMAC_BFR64_NFRX_SHIFT		0
#define GMAC_GMAC_BFR64_NFRX_MASK		0xffffffff
/** @defgroup gmac_gmac_bfr64_nfrx NFRX 64 Byte Frames Received without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbfr127 GMACTBFR127 65 to 127 Byte Frames Received Register
@{*/


#define GMAC_GMAC_TBFR127_NFRX_SHIFT		0
#define GMAC_GMAC_TBFR127_NFRX_MASK		0xffffffff
/** @defgroup gmac_gmac_tbfr127_nfrx NFRX 65 to 127 Byte Frames Received without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbfr255 GMACTBFR255 128 to 255 Byte Frames Received Register
@{*/


#define GMAC_GMAC_TBFR255_NFRX_SHIFT		0
#define GMAC_GMAC_TBFR255_NFRX_MASK		0xffffffff
/** @defgroup gmac_gmac_tbfr255_nfrx NFRX 128 to 255 Byte Frames Received without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbfr511 GMACTBFR511 256 to 511 Byte Frames Received Register
@{*/


#define GMAC_GMAC_TBFR511_NFRX_SHIFT		0
#define GMAC_GMAC_TBFR511_NFRX_MASK		0xffffffff
/** @defgroup gmac_gmac_tbfr511_nfrx NFRX 256 to 511 Byte Frames Received without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbfr1023 GMACTBFR1023 512 to 1023 Byte Frames Received Register
@{*/


#define GMAC_GMAC_TBFR1023_NFRX_SHIFT		0
#define GMAC_GMAC_TBFR1023_NFRX_MASK		0xffffffff
/** @defgroup gmac_gmac_tbfr1023_nfrx NFRX 512 to 1023 Byte Frames Received without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbfr1518 GMACTBFR1518 1024 to 1518 Byte Frames Received Register
@{*/


#define GMAC_GMAC_TBFR1518_NFRX_SHIFT		0
#define GMAC_GMAC_TBFR1518_NFRX_MASK		0xffffffff
/** @defgroup gmac_gmac_tbfr1518_nfrx NFRX 1024 to 1518 Byte Frames Received without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tmxbfr GMACTMXBFR 1519 to Maximum Byte Frames Received Register
@{*/


#define GMAC_GMAC_TMXBFR_NFRX_SHIFT		0
#define GMAC_GMAC_TMXBFR_NFRX_MASK		0xffffffff
/** @defgroup gmac_gmac_tmxbfr_nfrx NFRX 1519 to Maximum Byte Frames Received without Error
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_ufr GMACUFR Undersize Frames Received Register
@{*/


#define GMAC_GMAC_UFR_UFRX_SHIFT		0
#define GMAC_GMAC_UFR_UFRX_MASK		0x3ff
/** @defgroup gmac_gmac_ufr_ufrx UFRX Undersize Frames Received
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_ofr GMACOFR Oversize Frames Received Register
@{*/


#define GMAC_GMAC_OFR_OFRX_SHIFT		0
#define GMAC_GMAC_OFR_OFRX_MASK		0x3ff
/** @defgroup gmac_gmac_ofr_ofrx OFRX Oversized Frames Received
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_jr GMACJR Jabbers Received Register
@{*/


#define GMAC_GMAC_JR_JRX_SHIFT		0
#define GMAC_GMAC_JR_JRX_MASK		0x3ff
/** @defgroup gmac_gmac_jr_jrx JRX Jabbers Received
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_fcse GMACFCSE Frame Check Sequence Errors Register
@{*/


#define GMAC_GMAC_FCSE_FCKR_SHIFT		0
#define GMAC_GMAC_FCSE_FCKR_MASK		0x3ff
/** @defgroup gmac_gmac_fcse_fckr FCKR Frame Check Sequence Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_lffe GMACLFFE Length Field Frame Errors Register
@{*/


#define GMAC_GMAC_LFFE_LFER_SHIFT		0
#define GMAC_GMAC_LFFE_LFER_MASK		0x3ff
/** @defgroup gmac_gmac_lffe_lfer LFER Length Field Frame Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rse GMACRSE Receive Symbol Errors Register
@{*/


#define GMAC_GMAC_RSE_RXSE_SHIFT		0
#define GMAC_GMAC_RSE_RXSE_MASK		0x3ff
/** @defgroup gmac_gmac_rse_rxse RXSE Receive Symbol Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_ae GMACAE Alignment Errors Register
@{*/


#define GMAC_GMAC_AE_AER_SHIFT		0
#define GMAC_GMAC_AE_AER_MASK		0x3ff
/** @defgroup gmac_gmac_ae_aer AER Alignment Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rre GMACRRE Receive Resource Errors Register
@{*/


#define GMAC_GMAC_RRE_RXRER_SHIFT		0
#define GMAC_GMAC_RRE_RXRER_MASK		0x3ffff
/** @defgroup gmac_gmac_rre_rxrer RXRER Receive Resource Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_roe GMACROE Receive Overrun Register
@{*/


#define GMAC_GMAC_ROE_RXOVR_SHIFT		0
#define GMAC_GMAC_ROE_RXOVR_MASK		0x3ff
/** @defgroup gmac_gmac_roe_rxovr RXOVR Receive Overruns
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_ihce GMACIHCE IP Header Checksum Errors Register
@{*/


#define GMAC_GMAC_IHCE_HCKER_SHIFT		0
#define GMAC_GMAC_IHCE_HCKER_MASK		0xff
/** @defgroup gmac_gmac_ihce_hcker HCKER IP Header Checksum Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tce GMACTCE TCP Checksum Errors Register
@{*/


#define GMAC_GMAC_TCE_TCKER_SHIFT		0
#define GMAC_GMAC_TCE_TCKER_MASK		0xff
/** @defgroup gmac_gmac_tce_tcker TCKER TCP Checksum Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_uce GMACUCE UDP Checksum Errors Register
@{*/


#define GMAC_GMAC_UCE_UCKER_SHIFT		0
#define GMAC_GMAC_UCE_UCKER_MASK		0xff
/** @defgroup gmac_gmac_uce_ucker UCKER UDP Checksum Errors
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tisubn GMACTISUBN 1588 Timer Increment Sub-nanoseconds Register
@{*/


#define GMAC_GMAC_TISUBN_LSBTIR_SHIFT		0
#define GMAC_GMAC_TISUBN_LSBTIR_MASK		0xffff
/** @defgroup gmac_gmac_tisubn_lsbtir LSBTIR Lower Significant Bits of Timer Increment Register
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tsh GMACTSH 1588 Timer Seconds High Register
@{*/


#define GMAC_GMAC_TSH_TCS_SHIFT		0
#define GMAC_GMAC_TSH_TCS_MASK		0xffff
/** @defgroup gmac_gmac_tsh_tcs TCS Timer Count in Seconds
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tsl GMACTSL 1588 Timer Seconds Low Register
@{*/


#define GMAC_GMAC_TSL_TCS_SHIFT		0
#define GMAC_GMAC_TSL_TCS_MASK		0xffffffff
/** @defgroup gmac_gmac_tsl_tcs TCS Timer Count in Seconds
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tn GMACTN 1588 Timer Nanoseconds Register
@{*/


#define GMAC_GMAC_TN_TNS_SHIFT		0
#define GMAC_GMAC_TN_TNS_MASK		0x3fffffff
/** @defgroup gmac_gmac_tn_tns TNS Timer Count in Nanoseconds
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_ta GMACTA 1588 Timer Adjust Register
@{*/

/** GMAC_GMAC_TA_ADJ Adjust 1588 Timer **/
#define GMAC_GMAC_TA_ADJ		(1 << 31)

#define GMAC_GMAC_TA_ITDT_SHIFT		0
#define GMAC_GMAC_TA_ITDT_MASK		0x3fffffff
/** @defgroup gmac_gmac_ta_itdt ITDT Increment/Decrement
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_ti GMACTI 1588 Timer Increment Register
@{*/


#define GMAC_GMAC_TI_NIT_SHIFT		16
#define GMAC_GMAC_TI_NIT_MASK		0xff
/** @defgroup gmac_gmac_ti_nit NIT Number of Increments
@{*/
/**@}*/


#define GMAC_GMAC_TI_ACNS_SHIFT		8
#define GMAC_GMAC_TI_ACNS_MASK		0xff
/** @defgroup gmac_gmac_ti_acns ACNS Alternative Count Nanoseconds
@{*/
/**@}*/


#define GMAC_GMAC_TI_CNS_SHIFT		0
#define GMAC_GMAC_TI_CNS_MASK		0xff
/** @defgroup gmac_gmac_ti_cns CNS Count Nanoseconds
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_eftsl GMACEFTSL PTP Event Frame Transmitted Seconds Low Register
@{*/


#define GMAC_GMAC_EFTSL_RUD_SHIFT		0
#define GMAC_GMAC_EFTSL_RUD_MASK		0xffffffff
/** @defgroup gmac_gmac_eftsl_rud RUD Register Update
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_eftn GMACEFTN PTP Event Frame Transmitted Nanoseconds Register
@{*/


#define GMAC_GMAC_EFTN_RUD_SHIFT		0
#define GMAC_GMAC_EFTN_RUD_MASK		0x3fffffff
/** @defgroup gmac_gmac_eftn_rud RUD Register Update
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_efrsl GMACEFRSL PTP Event Frame Received Seconds Low Register
@{*/


#define GMAC_GMAC_EFRSL_RUD_SHIFT		0
#define GMAC_GMAC_EFRSL_RUD_MASK		0xffffffff
/** @defgroup gmac_gmac_efrsl_rud RUD Register Update
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_efrn GMACEFRN PTP Event Frame Received Nanoseconds Register
@{*/


#define GMAC_GMAC_EFRN_RUD_SHIFT		0
#define GMAC_GMAC_EFRN_RUD_MASK		0x3fffffff
/** @defgroup gmac_gmac_efrn_rud RUD Register Update
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_peftsl GMACPEFTSL PTP Peer Event Frame Transmitted Seconds Low Register
@{*/


#define GMAC_GMAC_PEFTSL_RUD_SHIFT		0
#define GMAC_GMAC_PEFTSL_RUD_MASK		0xffffffff
/** @defgroup gmac_gmac_peftsl_rud RUD Register Update
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_peftn GMACPEFTN PTP Peer Event Frame Transmitted Nanoseconds Register
@{*/


#define GMAC_GMAC_PEFTN_RUD_SHIFT		0
#define GMAC_GMAC_PEFTN_RUD_MASK		0x3fffffff
/** @defgroup gmac_gmac_peftn_rud RUD Register Update
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_pefrsl GMACPEFRSL PTP Peer Event Frame Received Seconds Low Register
@{*/


#define GMAC_GMAC_PEFRSL_RUD_SHIFT		0
#define GMAC_GMAC_PEFRSL_RUD_MASK		0xffffffff
/** @defgroup gmac_gmac_pefrsl_rud RUD Register Update
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_pefrn GMACPEFRN PTP Peer Event Frame Received Nanoseconds Register
@{*/


#define GMAC_GMAC_PEFRN_RUD_SHIFT		0
#define GMAC_GMAC_PEFRN_RUD_MASK		0x3fffffff
/** @defgroup gmac_gmac_pefrn_rud RUD Register Update
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rxlpi GMACRXLPI Received LPI Transitions
@{*/


#define GMAC_GMAC_RXLPI_COUNT_SHIFT		0
#define GMAC_GMAC_RXLPI_COUNT_MASK		0xffff
/** @defgroup gmac_gmac_rxlpi_count COUNT Count of RX LPI transitions (cleared on read)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rxlpitime GMACRXLPITIME Received LPI Time
@{*/


#define GMAC_GMAC_RXLPITIME_LPITIME_SHIFT		0
#define GMAC_GMAC_RXLPITIME_LPITIME_MASK		0xffffff
/** @defgroup gmac_gmac_rxlpitime_lpitime LPITIME Time in LPI (cleared on read)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_txlpi GMACTXLPI Transmit LPI Transitions
@{*/


#define GMAC_GMAC_TXLPI_COUNT_SHIFT		0
#define GMAC_GMAC_TXLPI_COUNT_MASK		0xffff
/** @defgroup gmac_gmac_txlpi_count COUNT Count of LPI transitions (cleared on read)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_txlpitime GMACTXLPITIME Transmit LPI Time
@{*/


#define GMAC_GMAC_TXLPITIME_LPITIME_SHIFT		0
#define GMAC_GMAC_TXLPITIME_LPITIME_MASK		0xffffff
/** @defgroup gmac_gmac_txlpitime_lpitime LPITIME Time in LPI (cleared on read)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_isrpq[0] GMACISRPQ[0] Interrupt Status Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_ISRPQ[0]_HRESP HRESP Not OK **/
#define GMAC_GMAC_ISRPQ[0]_HRESP		(1 << 11)
/** GMAC_GMAC_ISRPQ[0]_ROVR Receive Overrun **/
#define GMAC_GMAC_ISRPQ[0]_ROVR		(1 << 10)
/** GMAC_GMAC_ISRPQ[0]_TCOMP Transmit Complete **/
#define GMAC_GMAC_ISRPQ[0]_TCOMP		(1 << 7)
/** GMAC_GMAC_ISRPQ[0]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_ISRPQ[0]_TFC		(1 << 6)
/** GMAC_GMAC_ISRPQ[0]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_ISRPQ[0]_RLEX		(1 << 5)
/** GMAC_GMAC_ISRPQ[0]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_ISRPQ[0]_RXUBR		(1 << 2)
/** GMAC_GMAC_ISRPQ[0]_RCOMP Receive Complete **/
#define GMAC_GMAC_ISRPQ[0]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_isrpq[1] GMACISRPQ[1] Interrupt Status Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_ISRPQ[1]_HRESP HRESP Not OK **/
#define GMAC_GMAC_ISRPQ[1]_HRESP		(1 << 11)
/** GMAC_GMAC_ISRPQ[1]_ROVR Receive Overrun **/
#define GMAC_GMAC_ISRPQ[1]_ROVR		(1 << 10)
/** GMAC_GMAC_ISRPQ[1]_TCOMP Transmit Complete **/
#define GMAC_GMAC_ISRPQ[1]_TCOMP		(1 << 7)
/** GMAC_GMAC_ISRPQ[1]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_ISRPQ[1]_TFC		(1 << 6)
/** GMAC_GMAC_ISRPQ[1]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_ISRPQ[1]_RLEX		(1 << 5)
/** GMAC_GMAC_ISRPQ[1]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_ISRPQ[1]_RXUBR		(1 << 2)
/** GMAC_GMAC_ISRPQ[1]_RCOMP Receive Complete **/
#define GMAC_GMAC_ISRPQ[1]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_isrpq[2] GMACISRPQ[2] Interrupt Status Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_ISRPQ[2]_HRESP HRESP Not OK **/
#define GMAC_GMAC_ISRPQ[2]_HRESP		(1 << 11)
/** GMAC_GMAC_ISRPQ[2]_ROVR Receive Overrun **/
#define GMAC_GMAC_ISRPQ[2]_ROVR		(1 << 10)
/** GMAC_GMAC_ISRPQ[2]_TCOMP Transmit Complete **/
#define GMAC_GMAC_ISRPQ[2]_TCOMP		(1 << 7)
/** GMAC_GMAC_ISRPQ[2]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_ISRPQ[2]_TFC		(1 << 6)
/** GMAC_GMAC_ISRPQ[2]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_ISRPQ[2]_RLEX		(1 << 5)
/** GMAC_GMAC_ISRPQ[2]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_ISRPQ[2]_RXUBR		(1 << 2)
/** GMAC_GMAC_ISRPQ[2]_RCOMP Receive Complete **/
#define GMAC_GMAC_ISRPQ[2]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_isrpq[3] GMACISRPQ[3] Interrupt Status Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_ISRPQ[3]_HRESP HRESP Not OK **/
#define GMAC_GMAC_ISRPQ[3]_HRESP		(1 << 11)
/** GMAC_GMAC_ISRPQ[3]_ROVR Receive Overrun **/
#define GMAC_GMAC_ISRPQ[3]_ROVR		(1 << 10)
/** GMAC_GMAC_ISRPQ[3]_TCOMP Transmit Complete **/
#define GMAC_GMAC_ISRPQ[3]_TCOMP		(1 << 7)
/** GMAC_GMAC_ISRPQ[3]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_ISRPQ[3]_TFC		(1 << 6)
/** GMAC_GMAC_ISRPQ[3]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_ISRPQ[3]_RLEX		(1 << 5)
/** GMAC_GMAC_ISRPQ[3]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_ISRPQ[3]_RXUBR		(1 << 2)
/** GMAC_GMAC_ISRPQ[3]_RCOMP Receive Complete **/
#define GMAC_GMAC_ISRPQ[3]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_isrpq[4] GMACISRPQ[4] Interrupt Status Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_ISRPQ[4]_HRESP HRESP Not OK **/
#define GMAC_GMAC_ISRPQ[4]_HRESP		(1 << 11)
/** GMAC_GMAC_ISRPQ[4]_ROVR Receive Overrun **/
#define GMAC_GMAC_ISRPQ[4]_ROVR		(1 << 10)
/** GMAC_GMAC_ISRPQ[4]_TCOMP Transmit Complete **/
#define GMAC_GMAC_ISRPQ[4]_TCOMP		(1 << 7)
/** GMAC_GMAC_ISRPQ[4]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_ISRPQ[4]_TFC		(1 << 6)
/** GMAC_GMAC_ISRPQ[4]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_ISRPQ[4]_RLEX		(1 << 5)
/** GMAC_GMAC_ISRPQ[4]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_ISRPQ[4]_RXUBR		(1 << 2)
/** GMAC_GMAC_ISRPQ[4]_RCOMP Receive Complete **/
#define GMAC_GMAC_ISRPQ[4]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_tbqbapq[0] GMACTBQBAPQ[0] Transmit Buffer Queue Base Address Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_TBQBAPQ[0]_TXBQBA_SHIFT		2
#define GMAC_GMAC_TBQBAPQ[0]_TXBQBA_MASK		0x3fffffff
/** @defgroup gmac_gmac_tbqbapq[0]_txbqba TXBQBA Transmit Buffer Queue Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbqbapq[1] GMACTBQBAPQ[1] Transmit Buffer Queue Base Address Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_TBQBAPQ[1]_TXBQBA_SHIFT		2
#define GMAC_GMAC_TBQBAPQ[1]_TXBQBA_MASK		0x3fffffff
/** @defgroup gmac_gmac_tbqbapq[1]_txbqba TXBQBA Transmit Buffer Queue Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbqbapq[2] GMACTBQBAPQ[2] Transmit Buffer Queue Base Address Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_TBQBAPQ[2]_TXBQBA_SHIFT		2
#define GMAC_GMAC_TBQBAPQ[2]_TXBQBA_MASK		0x3fffffff
/** @defgroup gmac_gmac_tbqbapq[2]_txbqba TXBQBA Transmit Buffer Queue Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbqbapq[3] GMACTBQBAPQ[3] Transmit Buffer Queue Base Address Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_TBQBAPQ[3]_TXBQBA_SHIFT		2
#define GMAC_GMAC_TBQBAPQ[3]_TXBQBA_MASK		0x3fffffff
/** @defgroup gmac_gmac_tbqbapq[3]_txbqba TXBQBA Transmit Buffer Queue Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_tbqbapq[4] GMACTBQBAPQ[4] Transmit Buffer Queue Base Address Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_TBQBAPQ[4]_TXBQBA_SHIFT		2
#define GMAC_GMAC_TBQBAPQ[4]_TXBQBA_MASK		0x3fffffff
/** @defgroup gmac_gmac_tbqbapq[4]_txbqba TXBQBA Transmit Buffer Queue Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rbqbapq[0] GMACRBQBAPQ[0] Receive Buffer Queue Base Address Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_RBQBAPQ[0]_RXBQBA_SHIFT		2
#define GMAC_GMAC_RBQBAPQ[0]_RXBQBA_MASK		0x3fffffff
/** @defgroup gmac_gmac_rbqbapq[0]_rxbqba RXBQBA Receive Buffer Queue Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rbqbapq[1] GMACRBQBAPQ[1] Receive Buffer Queue Base Address Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_RBQBAPQ[1]_RXBQBA_SHIFT		2
#define GMAC_GMAC_RBQBAPQ[1]_RXBQBA_MASK		0x3fffffff
/** @defgroup gmac_gmac_rbqbapq[1]_rxbqba RXBQBA Receive Buffer Queue Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rbqbapq[2] GMACRBQBAPQ[2] Receive Buffer Queue Base Address Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_RBQBAPQ[2]_RXBQBA_SHIFT		2
#define GMAC_GMAC_RBQBAPQ[2]_RXBQBA_MASK		0x3fffffff
/** @defgroup gmac_gmac_rbqbapq[2]_rxbqba RXBQBA Receive Buffer Queue Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rbqbapq[3] GMACRBQBAPQ[3] Receive Buffer Queue Base Address Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_RBQBAPQ[3]_RXBQBA_SHIFT		2
#define GMAC_GMAC_RBQBAPQ[3]_RXBQBA_MASK		0x3fffffff
/** @defgroup gmac_gmac_rbqbapq[3]_rxbqba RXBQBA Receive Buffer Queue Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rbqbapq[4] GMACRBQBAPQ[4] Receive Buffer Queue Base Address Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_RBQBAPQ[4]_RXBQBA_SHIFT		2
#define GMAC_GMAC_RBQBAPQ[4]_RXBQBA_MASK		0x3fffffff
/** @defgroup gmac_gmac_rbqbapq[4]_rxbqba RXBQBA Receive Buffer Queue Base Address
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rbsrpq[0] GMACRBSRPQ[0] Receive Buffer Size Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_RBSRPQ[0]_RBS_SHIFT		0
#define GMAC_GMAC_RBSRPQ[0]_RBS_MASK		0xffff
/** @defgroup gmac_gmac_rbsrpq[0]_rbs RBS Receive Buffer Size
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rbsrpq[1] GMACRBSRPQ[1] Receive Buffer Size Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_RBSRPQ[1]_RBS_SHIFT		0
#define GMAC_GMAC_RBSRPQ[1]_RBS_MASK		0xffff
/** @defgroup gmac_gmac_rbsrpq[1]_rbs RBS Receive Buffer Size
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rbsrpq[2] GMACRBSRPQ[2] Receive Buffer Size Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_RBSRPQ[2]_RBS_SHIFT		0
#define GMAC_GMAC_RBSRPQ[2]_RBS_MASK		0xffff
/** @defgroup gmac_gmac_rbsrpq[2]_rbs RBS Receive Buffer Size
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rbsrpq[3] GMACRBSRPQ[3] Receive Buffer Size Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_RBSRPQ[3]_RBS_SHIFT		0
#define GMAC_GMAC_RBSRPQ[3]_RBS_MASK		0xffff
/** @defgroup gmac_gmac_rbsrpq[3]_rbs RBS Receive Buffer Size
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_rbsrpq[4] GMACRBSRPQ[4] Receive Buffer Size Register Priority Queue (1..5)
@{*/


#define GMAC_GMAC_RBSRPQ[4]_RBS_SHIFT		0
#define GMAC_GMAC_RBSRPQ[4]_RBS_MASK		0xffff
/** @defgroup gmac_gmac_rbsrpq[4]_rbs RBS Receive Buffer Size
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_cbscr GMACCBSCR Credit-Based Shaping Control Register
@{*/

/** GMAC_GMAC_CBSCR_QAE Queue A CBS Enable **/
#define GMAC_GMAC_CBSCR_QAE		(1 << 1)
/** GMAC_GMAC_CBSCR_QBE Queue B CBS Enable **/
#define GMAC_GMAC_CBSCR_QBE		(1 << 0)

/**@}*/

/** @defgroup gmac_gmac_cbsisqa GMACCBSISQA Credit-Based Shaping IdleSlope Register for Queue A
@{*/


#define GMAC_GMAC_CBSISQA_IS_SHIFT		0
#define GMAC_GMAC_CBSISQA_IS_MASK		0xffffffff
/** @defgroup gmac_gmac_cbsisqa_is IS IdleSlope
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_cbsisqb GMACCBSISQB Credit-Based Shaping IdleSlope Register for Queue B
@{*/


#define GMAC_GMAC_CBSISQB_IS_SHIFT		0
#define GMAC_GMAC_CBSISQB_IS_MASK		0xffffffff
/** @defgroup gmac_gmac_cbsisqb_is IS IdleSlope
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st1rpq[0] GMACST1RPQ[0] Screening Type 1 Register Priority Queue
@{*/

/** GMAC_GMAC_ST1RPQ[0]_UDPE UDP Port Match Enable **/
#define GMAC_GMAC_ST1RPQ[0]_UDPE		(1 << 29)
/** GMAC_GMAC_ST1RPQ[0]_DSTCE Differentiated Services or Traffic Class Match Enable **/
#define GMAC_GMAC_ST1RPQ[0]_DSTCE		(1 << 28)

#define GMAC_GMAC_ST1RPQ[0]_UDPM_SHIFT		12
#define GMAC_GMAC_ST1RPQ[0]_UDPM_MASK		0xffff
/** @defgroup gmac_gmac_st1rpq[0]_udpm UDPM UDP Port Match
@{*/
/**@}*/


#define GMAC_GMAC_ST1RPQ[0]_DSTCM_SHIFT		4
#define GMAC_GMAC_ST1RPQ[0]_DSTCM_MASK		0xff
/** @defgroup gmac_gmac_st1rpq[0]_dstcm DSTCM Differentiated Services or Traffic Class Match
@{*/
/**@}*/


#define GMAC_GMAC_ST1RPQ[0]_QNB_SHIFT		0
#define GMAC_GMAC_ST1RPQ[0]_QNB_MASK		0x07
/** @defgroup gmac_gmac_st1rpq[0]_qnb QNB Queue Number (0-5)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st1rpq[1] GMACST1RPQ[1] Screening Type 1 Register Priority Queue
@{*/

/** GMAC_GMAC_ST1RPQ[1]_UDPE UDP Port Match Enable **/
#define GMAC_GMAC_ST1RPQ[1]_UDPE		(1 << 29)
/** GMAC_GMAC_ST1RPQ[1]_DSTCE Differentiated Services or Traffic Class Match Enable **/
#define GMAC_GMAC_ST1RPQ[1]_DSTCE		(1 << 28)

#define GMAC_GMAC_ST1RPQ[1]_UDPM_SHIFT		12
#define GMAC_GMAC_ST1RPQ[1]_UDPM_MASK		0xffff
/** @defgroup gmac_gmac_st1rpq[1]_udpm UDPM UDP Port Match
@{*/
/**@}*/


#define GMAC_GMAC_ST1RPQ[1]_DSTCM_SHIFT		4
#define GMAC_GMAC_ST1RPQ[1]_DSTCM_MASK		0xff
/** @defgroup gmac_gmac_st1rpq[1]_dstcm DSTCM Differentiated Services or Traffic Class Match
@{*/
/**@}*/


#define GMAC_GMAC_ST1RPQ[1]_QNB_SHIFT		0
#define GMAC_GMAC_ST1RPQ[1]_QNB_MASK		0x07
/** @defgroup gmac_gmac_st1rpq[1]_qnb QNB Queue Number (0-5)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st1rpq[2] GMACST1RPQ[2] Screening Type 1 Register Priority Queue
@{*/

/** GMAC_GMAC_ST1RPQ[2]_UDPE UDP Port Match Enable **/
#define GMAC_GMAC_ST1RPQ[2]_UDPE		(1 << 29)
/** GMAC_GMAC_ST1RPQ[2]_DSTCE Differentiated Services or Traffic Class Match Enable **/
#define GMAC_GMAC_ST1RPQ[2]_DSTCE		(1 << 28)

#define GMAC_GMAC_ST1RPQ[2]_UDPM_SHIFT		12
#define GMAC_GMAC_ST1RPQ[2]_UDPM_MASK		0xffff
/** @defgroup gmac_gmac_st1rpq[2]_udpm UDPM UDP Port Match
@{*/
/**@}*/


#define GMAC_GMAC_ST1RPQ[2]_DSTCM_SHIFT		4
#define GMAC_GMAC_ST1RPQ[2]_DSTCM_MASK		0xff
/** @defgroup gmac_gmac_st1rpq[2]_dstcm DSTCM Differentiated Services or Traffic Class Match
@{*/
/**@}*/


#define GMAC_GMAC_ST1RPQ[2]_QNB_SHIFT		0
#define GMAC_GMAC_ST1RPQ[2]_QNB_MASK		0x07
/** @defgroup gmac_gmac_st1rpq[2]_qnb QNB Queue Number (0-5)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st1rpq[3] GMACST1RPQ[3] Screening Type 1 Register Priority Queue
@{*/

/** GMAC_GMAC_ST1RPQ[3]_UDPE UDP Port Match Enable **/
#define GMAC_GMAC_ST1RPQ[3]_UDPE		(1 << 29)
/** GMAC_GMAC_ST1RPQ[3]_DSTCE Differentiated Services or Traffic Class Match Enable **/
#define GMAC_GMAC_ST1RPQ[3]_DSTCE		(1 << 28)

#define GMAC_GMAC_ST1RPQ[3]_UDPM_SHIFT		12
#define GMAC_GMAC_ST1RPQ[3]_UDPM_MASK		0xffff
/** @defgroup gmac_gmac_st1rpq[3]_udpm UDPM UDP Port Match
@{*/
/**@}*/


#define GMAC_GMAC_ST1RPQ[3]_DSTCM_SHIFT		4
#define GMAC_GMAC_ST1RPQ[3]_DSTCM_MASK		0xff
/** @defgroup gmac_gmac_st1rpq[3]_dstcm DSTCM Differentiated Services or Traffic Class Match
@{*/
/**@}*/


#define GMAC_GMAC_ST1RPQ[3]_QNB_SHIFT		0
#define GMAC_GMAC_ST1RPQ[3]_QNB_MASK		0x07
/** @defgroup gmac_gmac_st1rpq[3]_qnb QNB Queue Number (0-5)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2rpq[0] GMACST2RPQ[0] Screening Type 2 Register Priority Queue
@{*/

/** GMAC_GMAC_ST2RPQ[0]_COMPCE Compare C Enable **/
#define GMAC_GMAC_ST2RPQ[0]_COMPCE		(1 << 30)

#define GMAC_GMAC_ST2RPQ[0]_COMPC_SHIFT		25
#define GMAC_GMAC_ST2RPQ[0]_COMPC_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[0]_compc COMPC Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[0]_COMPBE Compare B Enable **/
#define GMAC_GMAC_ST2RPQ[0]_COMPBE		(1 << 24)

#define GMAC_GMAC_ST2RPQ[0]_COMPB_SHIFT		19
#define GMAC_GMAC_ST2RPQ[0]_COMPB_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[0]_compb COMPB Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[0]_COMPAE Compare A Enable **/
#define GMAC_GMAC_ST2RPQ[0]_COMPAE		(1 << 18)

#define GMAC_GMAC_ST2RPQ[0]_COMPA_SHIFT		13
#define GMAC_GMAC_ST2RPQ[0]_COMPA_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[0]_compa COMPA Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[0]_ETHE EtherType Enable **/
#define GMAC_GMAC_ST2RPQ[0]_ETHE		(1 << 12)

#define GMAC_GMAC_ST2RPQ[0]_I2ETH_SHIFT		9
#define GMAC_GMAC_ST2RPQ[0]_I2ETH_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[0]_i2eth I2ETH Index of Screening Type 2 EtherType register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[0]_VLANE VLAN Enable **/
#define GMAC_GMAC_ST2RPQ[0]_VLANE		(1 << 8)

#define GMAC_GMAC_ST2RPQ[0]_VLANP_SHIFT		4
#define GMAC_GMAC_ST2RPQ[0]_VLANP_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[0]_vlanp VLANP VLAN Priority
@{*/
/**@}*/


#define GMAC_GMAC_ST2RPQ[0]_QNB_SHIFT		0
#define GMAC_GMAC_ST2RPQ[0]_QNB_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[0]_qnb QNB Queue Number (0-5)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2rpq[1] GMACST2RPQ[1] Screening Type 2 Register Priority Queue
@{*/

/** GMAC_GMAC_ST2RPQ[1]_COMPCE Compare C Enable **/
#define GMAC_GMAC_ST2RPQ[1]_COMPCE		(1 << 30)

#define GMAC_GMAC_ST2RPQ[1]_COMPC_SHIFT		25
#define GMAC_GMAC_ST2RPQ[1]_COMPC_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[1]_compc COMPC Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[1]_COMPBE Compare B Enable **/
#define GMAC_GMAC_ST2RPQ[1]_COMPBE		(1 << 24)

#define GMAC_GMAC_ST2RPQ[1]_COMPB_SHIFT		19
#define GMAC_GMAC_ST2RPQ[1]_COMPB_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[1]_compb COMPB Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[1]_COMPAE Compare A Enable **/
#define GMAC_GMAC_ST2RPQ[1]_COMPAE		(1 << 18)

#define GMAC_GMAC_ST2RPQ[1]_COMPA_SHIFT		13
#define GMAC_GMAC_ST2RPQ[1]_COMPA_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[1]_compa COMPA Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[1]_ETHE EtherType Enable **/
#define GMAC_GMAC_ST2RPQ[1]_ETHE		(1 << 12)

#define GMAC_GMAC_ST2RPQ[1]_I2ETH_SHIFT		9
#define GMAC_GMAC_ST2RPQ[1]_I2ETH_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[1]_i2eth I2ETH Index of Screening Type 2 EtherType register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[1]_VLANE VLAN Enable **/
#define GMAC_GMAC_ST2RPQ[1]_VLANE		(1 << 8)

#define GMAC_GMAC_ST2RPQ[1]_VLANP_SHIFT		4
#define GMAC_GMAC_ST2RPQ[1]_VLANP_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[1]_vlanp VLANP VLAN Priority
@{*/
/**@}*/


#define GMAC_GMAC_ST2RPQ[1]_QNB_SHIFT		0
#define GMAC_GMAC_ST2RPQ[1]_QNB_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[1]_qnb QNB Queue Number (0-5)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2rpq[2] GMACST2RPQ[2] Screening Type 2 Register Priority Queue
@{*/

/** GMAC_GMAC_ST2RPQ[2]_COMPCE Compare C Enable **/
#define GMAC_GMAC_ST2RPQ[2]_COMPCE		(1 << 30)

#define GMAC_GMAC_ST2RPQ[2]_COMPC_SHIFT		25
#define GMAC_GMAC_ST2RPQ[2]_COMPC_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[2]_compc COMPC Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[2]_COMPBE Compare B Enable **/
#define GMAC_GMAC_ST2RPQ[2]_COMPBE		(1 << 24)

#define GMAC_GMAC_ST2RPQ[2]_COMPB_SHIFT		19
#define GMAC_GMAC_ST2RPQ[2]_COMPB_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[2]_compb COMPB Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[2]_COMPAE Compare A Enable **/
#define GMAC_GMAC_ST2RPQ[2]_COMPAE		(1 << 18)

#define GMAC_GMAC_ST2RPQ[2]_COMPA_SHIFT		13
#define GMAC_GMAC_ST2RPQ[2]_COMPA_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[2]_compa COMPA Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[2]_ETHE EtherType Enable **/
#define GMAC_GMAC_ST2RPQ[2]_ETHE		(1 << 12)

#define GMAC_GMAC_ST2RPQ[2]_I2ETH_SHIFT		9
#define GMAC_GMAC_ST2RPQ[2]_I2ETH_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[2]_i2eth I2ETH Index of Screening Type 2 EtherType register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[2]_VLANE VLAN Enable **/
#define GMAC_GMAC_ST2RPQ[2]_VLANE		(1 << 8)

#define GMAC_GMAC_ST2RPQ[2]_VLANP_SHIFT		4
#define GMAC_GMAC_ST2RPQ[2]_VLANP_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[2]_vlanp VLANP VLAN Priority
@{*/
/**@}*/


#define GMAC_GMAC_ST2RPQ[2]_QNB_SHIFT		0
#define GMAC_GMAC_ST2RPQ[2]_QNB_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[2]_qnb QNB Queue Number (0-5)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2rpq[3] GMACST2RPQ[3] Screening Type 2 Register Priority Queue
@{*/

/** GMAC_GMAC_ST2RPQ[3]_COMPCE Compare C Enable **/
#define GMAC_GMAC_ST2RPQ[3]_COMPCE		(1 << 30)

#define GMAC_GMAC_ST2RPQ[3]_COMPC_SHIFT		25
#define GMAC_GMAC_ST2RPQ[3]_COMPC_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[3]_compc COMPC Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[3]_COMPBE Compare B Enable **/
#define GMAC_GMAC_ST2RPQ[3]_COMPBE		(1 << 24)

#define GMAC_GMAC_ST2RPQ[3]_COMPB_SHIFT		19
#define GMAC_GMAC_ST2RPQ[3]_COMPB_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[3]_compb COMPB Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[3]_COMPAE Compare A Enable **/
#define GMAC_GMAC_ST2RPQ[3]_COMPAE		(1 << 18)

#define GMAC_GMAC_ST2RPQ[3]_COMPA_SHIFT		13
#define GMAC_GMAC_ST2RPQ[3]_COMPA_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[3]_compa COMPA Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[3]_ETHE EtherType Enable **/
#define GMAC_GMAC_ST2RPQ[3]_ETHE		(1 << 12)

#define GMAC_GMAC_ST2RPQ[3]_I2ETH_SHIFT		9
#define GMAC_GMAC_ST2RPQ[3]_I2ETH_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[3]_i2eth I2ETH Index of Screening Type 2 EtherType register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[3]_VLANE VLAN Enable **/
#define GMAC_GMAC_ST2RPQ[3]_VLANE		(1 << 8)

#define GMAC_GMAC_ST2RPQ[3]_VLANP_SHIFT		4
#define GMAC_GMAC_ST2RPQ[3]_VLANP_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[3]_vlanp VLANP VLAN Priority
@{*/
/**@}*/


#define GMAC_GMAC_ST2RPQ[3]_QNB_SHIFT		0
#define GMAC_GMAC_ST2RPQ[3]_QNB_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[3]_qnb QNB Queue Number (0-5)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2rpq[4] GMACST2RPQ[4] Screening Type 2 Register Priority Queue
@{*/

/** GMAC_GMAC_ST2RPQ[4]_COMPCE Compare C Enable **/
#define GMAC_GMAC_ST2RPQ[4]_COMPCE		(1 << 30)

#define GMAC_GMAC_ST2RPQ[4]_COMPC_SHIFT		25
#define GMAC_GMAC_ST2RPQ[4]_COMPC_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[4]_compc COMPC Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[4]_COMPBE Compare B Enable **/
#define GMAC_GMAC_ST2RPQ[4]_COMPBE		(1 << 24)

#define GMAC_GMAC_ST2RPQ[4]_COMPB_SHIFT		19
#define GMAC_GMAC_ST2RPQ[4]_COMPB_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[4]_compb COMPB Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[4]_COMPAE Compare A Enable **/
#define GMAC_GMAC_ST2RPQ[4]_COMPAE		(1 << 18)

#define GMAC_GMAC_ST2RPQ[4]_COMPA_SHIFT		13
#define GMAC_GMAC_ST2RPQ[4]_COMPA_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[4]_compa COMPA Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[4]_ETHE EtherType Enable **/
#define GMAC_GMAC_ST2RPQ[4]_ETHE		(1 << 12)

#define GMAC_GMAC_ST2RPQ[4]_I2ETH_SHIFT		9
#define GMAC_GMAC_ST2RPQ[4]_I2ETH_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[4]_i2eth I2ETH Index of Screening Type 2 EtherType register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[4]_VLANE VLAN Enable **/
#define GMAC_GMAC_ST2RPQ[4]_VLANE		(1 << 8)

#define GMAC_GMAC_ST2RPQ[4]_VLANP_SHIFT		4
#define GMAC_GMAC_ST2RPQ[4]_VLANP_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[4]_vlanp VLANP VLAN Priority
@{*/
/**@}*/


#define GMAC_GMAC_ST2RPQ[4]_QNB_SHIFT		0
#define GMAC_GMAC_ST2RPQ[4]_QNB_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[4]_qnb QNB Queue Number (0-5)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2rpq[5] GMACST2RPQ[5] Screening Type 2 Register Priority Queue
@{*/

/** GMAC_GMAC_ST2RPQ[5]_COMPCE Compare C Enable **/
#define GMAC_GMAC_ST2RPQ[5]_COMPCE		(1 << 30)

#define GMAC_GMAC_ST2RPQ[5]_COMPC_SHIFT		25
#define GMAC_GMAC_ST2RPQ[5]_COMPC_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[5]_compc COMPC Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[5]_COMPBE Compare B Enable **/
#define GMAC_GMAC_ST2RPQ[5]_COMPBE		(1 << 24)

#define GMAC_GMAC_ST2RPQ[5]_COMPB_SHIFT		19
#define GMAC_GMAC_ST2RPQ[5]_COMPB_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[5]_compb COMPB Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[5]_COMPAE Compare A Enable **/
#define GMAC_GMAC_ST2RPQ[5]_COMPAE		(1 << 18)

#define GMAC_GMAC_ST2RPQ[5]_COMPA_SHIFT		13
#define GMAC_GMAC_ST2RPQ[5]_COMPA_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[5]_compa COMPA Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[5]_ETHE EtherType Enable **/
#define GMAC_GMAC_ST2RPQ[5]_ETHE		(1 << 12)

#define GMAC_GMAC_ST2RPQ[5]_I2ETH_SHIFT		9
#define GMAC_GMAC_ST2RPQ[5]_I2ETH_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[5]_i2eth I2ETH Index of Screening Type 2 EtherType register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[5]_VLANE VLAN Enable **/
#define GMAC_GMAC_ST2RPQ[5]_VLANE		(1 << 8)

#define GMAC_GMAC_ST2RPQ[5]_VLANP_SHIFT		4
#define GMAC_GMAC_ST2RPQ[5]_VLANP_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[5]_vlanp VLANP VLAN Priority
@{*/
/**@}*/


#define GMAC_GMAC_ST2RPQ[5]_QNB_SHIFT		0
#define GMAC_GMAC_ST2RPQ[5]_QNB_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[5]_qnb QNB Queue Number (0-5)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2rpq[6] GMACST2RPQ[6] Screening Type 2 Register Priority Queue
@{*/

/** GMAC_GMAC_ST2RPQ[6]_COMPCE Compare C Enable **/
#define GMAC_GMAC_ST2RPQ[6]_COMPCE		(1 << 30)

#define GMAC_GMAC_ST2RPQ[6]_COMPC_SHIFT		25
#define GMAC_GMAC_ST2RPQ[6]_COMPC_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[6]_compc COMPC Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[6]_COMPBE Compare B Enable **/
#define GMAC_GMAC_ST2RPQ[6]_COMPBE		(1 << 24)

#define GMAC_GMAC_ST2RPQ[6]_COMPB_SHIFT		19
#define GMAC_GMAC_ST2RPQ[6]_COMPB_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[6]_compb COMPB Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[6]_COMPAE Compare A Enable **/
#define GMAC_GMAC_ST2RPQ[6]_COMPAE		(1 << 18)

#define GMAC_GMAC_ST2RPQ[6]_COMPA_SHIFT		13
#define GMAC_GMAC_ST2RPQ[6]_COMPA_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[6]_compa COMPA Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[6]_ETHE EtherType Enable **/
#define GMAC_GMAC_ST2RPQ[6]_ETHE		(1 << 12)

#define GMAC_GMAC_ST2RPQ[6]_I2ETH_SHIFT		9
#define GMAC_GMAC_ST2RPQ[6]_I2ETH_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[6]_i2eth I2ETH Index of Screening Type 2 EtherType register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[6]_VLANE VLAN Enable **/
#define GMAC_GMAC_ST2RPQ[6]_VLANE		(1 << 8)

#define GMAC_GMAC_ST2RPQ[6]_VLANP_SHIFT		4
#define GMAC_GMAC_ST2RPQ[6]_VLANP_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[6]_vlanp VLANP VLAN Priority
@{*/
/**@}*/


#define GMAC_GMAC_ST2RPQ[6]_QNB_SHIFT		0
#define GMAC_GMAC_ST2RPQ[6]_QNB_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[6]_qnb QNB Queue Number (0-5)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2rpq[7] GMACST2RPQ[7] Screening Type 2 Register Priority Queue
@{*/

/** GMAC_GMAC_ST2RPQ[7]_COMPCE Compare C Enable **/
#define GMAC_GMAC_ST2RPQ[7]_COMPCE		(1 << 30)

#define GMAC_GMAC_ST2RPQ[7]_COMPC_SHIFT		25
#define GMAC_GMAC_ST2RPQ[7]_COMPC_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[7]_compc COMPC Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[7]_COMPBE Compare B Enable **/
#define GMAC_GMAC_ST2RPQ[7]_COMPBE		(1 << 24)

#define GMAC_GMAC_ST2RPQ[7]_COMPB_SHIFT		19
#define GMAC_GMAC_ST2RPQ[7]_COMPB_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[7]_compb COMPB Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[7]_COMPAE Compare A Enable **/
#define GMAC_GMAC_ST2RPQ[7]_COMPAE		(1 << 18)

#define GMAC_GMAC_ST2RPQ[7]_COMPA_SHIFT		13
#define GMAC_GMAC_ST2RPQ[7]_COMPA_MASK		0x1f
/** @defgroup gmac_gmac_st2rpq[7]_compa COMPA Index of Screening Type 2 Compare Word 0/Word 1 register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[7]_ETHE EtherType Enable **/
#define GMAC_GMAC_ST2RPQ[7]_ETHE		(1 << 12)

#define GMAC_GMAC_ST2RPQ[7]_I2ETH_SHIFT		9
#define GMAC_GMAC_ST2RPQ[7]_I2ETH_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[7]_i2eth I2ETH Index of Screening Type 2 EtherType register x
@{*/
/**@}*/

/** GMAC_GMAC_ST2RPQ[7]_VLANE VLAN Enable **/
#define GMAC_GMAC_ST2RPQ[7]_VLANE		(1 << 8)

#define GMAC_GMAC_ST2RPQ[7]_VLANP_SHIFT		4
#define GMAC_GMAC_ST2RPQ[7]_VLANP_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[7]_vlanp VLANP VLAN Priority
@{*/
/**@}*/


#define GMAC_GMAC_ST2RPQ[7]_QNB_SHIFT		0
#define GMAC_GMAC_ST2RPQ[7]_QNB_MASK		0x07
/** @defgroup gmac_gmac_st2rpq[7]_qnb QNB Queue Number (0-5)
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_ierpq[0] GMACIERPQ[0] Interrupt Enable Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IERPQ[0]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IERPQ[0]_HRESP		(1 << 11)
/** GMAC_GMAC_IERPQ[0]_ROVR Receive Overrun **/
#define GMAC_GMAC_IERPQ[0]_ROVR		(1 << 10)
/** GMAC_GMAC_IERPQ[0]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IERPQ[0]_TCOMP		(1 << 7)
/** GMAC_GMAC_IERPQ[0]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_IERPQ[0]_TFC		(1 << 6)
/** GMAC_GMAC_IERPQ[0]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IERPQ[0]_RLEX		(1 << 5)
/** GMAC_GMAC_IERPQ[0]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IERPQ[0]_RXUBR		(1 << 2)
/** GMAC_GMAC_IERPQ[0]_RCOMP Receive Complete **/
#define GMAC_GMAC_IERPQ[0]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_ierpq[1] GMACIERPQ[1] Interrupt Enable Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IERPQ[1]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IERPQ[1]_HRESP		(1 << 11)
/** GMAC_GMAC_IERPQ[1]_ROVR Receive Overrun **/
#define GMAC_GMAC_IERPQ[1]_ROVR		(1 << 10)
/** GMAC_GMAC_IERPQ[1]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IERPQ[1]_TCOMP		(1 << 7)
/** GMAC_GMAC_IERPQ[1]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_IERPQ[1]_TFC		(1 << 6)
/** GMAC_GMAC_IERPQ[1]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IERPQ[1]_RLEX		(1 << 5)
/** GMAC_GMAC_IERPQ[1]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IERPQ[1]_RXUBR		(1 << 2)
/** GMAC_GMAC_IERPQ[1]_RCOMP Receive Complete **/
#define GMAC_GMAC_IERPQ[1]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_ierpq[2] GMACIERPQ[2] Interrupt Enable Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IERPQ[2]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IERPQ[2]_HRESP		(1 << 11)
/** GMAC_GMAC_IERPQ[2]_ROVR Receive Overrun **/
#define GMAC_GMAC_IERPQ[2]_ROVR		(1 << 10)
/** GMAC_GMAC_IERPQ[2]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IERPQ[2]_TCOMP		(1 << 7)
/** GMAC_GMAC_IERPQ[2]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_IERPQ[2]_TFC		(1 << 6)
/** GMAC_GMAC_IERPQ[2]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IERPQ[2]_RLEX		(1 << 5)
/** GMAC_GMAC_IERPQ[2]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IERPQ[2]_RXUBR		(1 << 2)
/** GMAC_GMAC_IERPQ[2]_RCOMP Receive Complete **/
#define GMAC_GMAC_IERPQ[2]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_ierpq[3] GMACIERPQ[3] Interrupt Enable Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IERPQ[3]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IERPQ[3]_HRESP		(1 << 11)
/** GMAC_GMAC_IERPQ[3]_ROVR Receive Overrun **/
#define GMAC_GMAC_IERPQ[3]_ROVR		(1 << 10)
/** GMAC_GMAC_IERPQ[3]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IERPQ[3]_TCOMP		(1 << 7)
/** GMAC_GMAC_IERPQ[3]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_IERPQ[3]_TFC		(1 << 6)
/** GMAC_GMAC_IERPQ[3]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IERPQ[3]_RLEX		(1 << 5)
/** GMAC_GMAC_IERPQ[3]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IERPQ[3]_RXUBR		(1 << 2)
/** GMAC_GMAC_IERPQ[3]_RCOMP Receive Complete **/
#define GMAC_GMAC_IERPQ[3]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_ierpq[4] GMACIERPQ[4] Interrupt Enable Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IERPQ[4]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IERPQ[4]_HRESP		(1 << 11)
/** GMAC_GMAC_IERPQ[4]_ROVR Receive Overrun **/
#define GMAC_GMAC_IERPQ[4]_ROVR		(1 << 10)
/** GMAC_GMAC_IERPQ[4]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IERPQ[4]_TCOMP		(1 << 7)
/** GMAC_GMAC_IERPQ[4]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_IERPQ[4]_TFC		(1 << 6)
/** GMAC_GMAC_IERPQ[4]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IERPQ[4]_RLEX		(1 << 5)
/** GMAC_GMAC_IERPQ[4]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IERPQ[4]_RXUBR		(1 << 2)
/** GMAC_GMAC_IERPQ[4]_RCOMP Receive Complete **/
#define GMAC_GMAC_IERPQ[4]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_idrpq[0] GMACIDRPQ[0] Interrupt Disable Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IDRPQ[0]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IDRPQ[0]_HRESP		(1 << 11)
/** GMAC_GMAC_IDRPQ[0]_ROVR Receive Overrun **/
#define GMAC_GMAC_IDRPQ[0]_ROVR		(1 << 10)
/** GMAC_GMAC_IDRPQ[0]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IDRPQ[0]_TCOMP		(1 << 7)
/** GMAC_GMAC_IDRPQ[0]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_IDRPQ[0]_TFC		(1 << 6)
/** GMAC_GMAC_IDRPQ[0]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IDRPQ[0]_RLEX		(1 << 5)
/** GMAC_GMAC_IDRPQ[0]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IDRPQ[0]_RXUBR		(1 << 2)
/** GMAC_GMAC_IDRPQ[0]_RCOMP Receive Complete **/
#define GMAC_GMAC_IDRPQ[0]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_idrpq[1] GMACIDRPQ[1] Interrupt Disable Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IDRPQ[1]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IDRPQ[1]_HRESP		(1 << 11)
/** GMAC_GMAC_IDRPQ[1]_ROVR Receive Overrun **/
#define GMAC_GMAC_IDRPQ[1]_ROVR		(1 << 10)
/** GMAC_GMAC_IDRPQ[1]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IDRPQ[1]_TCOMP		(1 << 7)
/** GMAC_GMAC_IDRPQ[1]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_IDRPQ[1]_TFC		(1 << 6)
/** GMAC_GMAC_IDRPQ[1]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IDRPQ[1]_RLEX		(1 << 5)
/** GMAC_GMAC_IDRPQ[1]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IDRPQ[1]_RXUBR		(1 << 2)
/** GMAC_GMAC_IDRPQ[1]_RCOMP Receive Complete **/
#define GMAC_GMAC_IDRPQ[1]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_idrpq[2] GMACIDRPQ[2] Interrupt Disable Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IDRPQ[2]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IDRPQ[2]_HRESP		(1 << 11)
/** GMAC_GMAC_IDRPQ[2]_ROVR Receive Overrun **/
#define GMAC_GMAC_IDRPQ[2]_ROVR		(1 << 10)
/** GMAC_GMAC_IDRPQ[2]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IDRPQ[2]_TCOMP		(1 << 7)
/** GMAC_GMAC_IDRPQ[2]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_IDRPQ[2]_TFC		(1 << 6)
/** GMAC_GMAC_IDRPQ[2]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IDRPQ[2]_RLEX		(1 << 5)
/** GMAC_GMAC_IDRPQ[2]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IDRPQ[2]_RXUBR		(1 << 2)
/** GMAC_GMAC_IDRPQ[2]_RCOMP Receive Complete **/
#define GMAC_GMAC_IDRPQ[2]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_idrpq[3] GMACIDRPQ[3] Interrupt Disable Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IDRPQ[3]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IDRPQ[3]_HRESP		(1 << 11)
/** GMAC_GMAC_IDRPQ[3]_ROVR Receive Overrun **/
#define GMAC_GMAC_IDRPQ[3]_ROVR		(1 << 10)
/** GMAC_GMAC_IDRPQ[3]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IDRPQ[3]_TCOMP		(1 << 7)
/** GMAC_GMAC_IDRPQ[3]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_IDRPQ[3]_TFC		(1 << 6)
/** GMAC_GMAC_IDRPQ[3]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IDRPQ[3]_RLEX		(1 << 5)
/** GMAC_GMAC_IDRPQ[3]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IDRPQ[3]_RXUBR		(1 << 2)
/** GMAC_GMAC_IDRPQ[3]_RCOMP Receive Complete **/
#define GMAC_GMAC_IDRPQ[3]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_idrpq[4] GMACIDRPQ[4] Interrupt Disable Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IDRPQ[4]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IDRPQ[4]_HRESP		(1 << 11)
/** GMAC_GMAC_IDRPQ[4]_ROVR Receive Overrun **/
#define GMAC_GMAC_IDRPQ[4]_ROVR		(1 << 10)
/** GMAC_GMAC_IDRPQ[4]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IDRPQ[4]_TCOMP		(1 << 7)
/** GMAC_GMAC_IDRPQ[4]_TFC Transmit Frame Corruption Due to AHB Error **/
#define GMAC_GMAC_IDRPQ[4]_TFC		(1 << 6)
/** GMAC_GMAC_IDRPQ[4]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IDRPQ[4]_RLEX		(1 << 5)
/** GMAC_GMAC_IDRPQ[4]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IDRPQ[4]_RXUBR		(1 << 2)
/** GMAC_GMAC_IDRPQ[4]_RCOMP Receive Complete **/
#define GMAC_GMAC_IDRPQ[4]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_imrpq[0] GMACIMRPQ[0] Interrupt Mask Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IMRPQ[0]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IMRPQ[0]_HRESP		(1 << 11)
/** GMAC_GMAC_IMRPQ[0]_ROVR Receive Overrun **/
#define GMAC_GMAC_IMRPQ[0]_ROVR		(1 << 10)
/** GMAC_GMAC_IMRPQ[0]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IMRPQ[0]_TCOMP		(1 << 7)
/** GMAC_GMAC_IMRPQ[0]_AHB AHB Error **/
#define GMAC_GMAC_IMRPQ[0]_AHB		(1 << 6)
/** GMAC_GMAC_IMRPQ[0]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IMRPQ[0]_RLEX		(1 << 5)
/** GMAC_GMAC_IMRPQ[0]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IMRPQ[0]_RXUBR		(1 << 2)
/** GMAC_GMAC_IMRPQ[0]_RCOMP Receive Complete **/
#define GMAC_GMAC_IMRPQ[0]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_imrpq[1] GMACIMRPQ[1] Interrupt Mask Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IMRPQ[1]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IMRPQ[1]_HRESP		(1 << 11)
/** GMAC_GMAC_IMRPQ[1]_ROVR Receive Overrun **/
#define GMAC_GMAC_IMRPQ[1]_ROVR		(1 << 10)
/** GMAC_GMAC_IMRPQ[1]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IMRPQ[1]_TCOMP		(1 << 7)
/** GMAC_GMAC_IMRPQ[1]_AHB AHB Error **/
#define GMAC_GMAC_IMRPQ[1]_AHB		(1 << 6)
/** GMAC_GMAC_IMRPQ[1]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IMRPQ[1]_RLEX		(1 << 5)
/** GMAC_GMAC_IMRPQ[1]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IMRPQ[1]_RXUBR		(1 << 2)
/** GMAC_GMAC_IMRPQ[1]_RCOMP Receive Complete **/
#define GMAC_GMAC_IMRPQ[1]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_imrpq[2] GMACIMRPQ[2] Interrupt Mask Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IMRPQ[2]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IMRPQ[2]_HRESP		(1 << 11)
/** GMAC_GMAC_IMRPQ[2]_ROVR Receive Overrun **/
#define GMAC_GMAC_IMRPQ[2]_ROVR		(1 << 10)
/** GMAC_GMAC_IMRPQ[2]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IMRPQ[2]_TCOMP		(1 << 7)
/** GMAC_GMAC_IMRPQ[2]_AHB AHB Error **/
#define GMAC_GMAC_IMRPQ[2]_AHB		(1 << 6)
/** GMAC_GMAC_IMRPQ[2]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IMRPQ[2]_RLEX		(1 << 5)
/** GMAC_GMAC_IMRPQ[2]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IMRPQ[2]_RXUBR		(1 << 2)
/** GMAC_GMAC_IMRPQ[2]_RCOMP Receive Complete **/
#define GMAC_GMAC_IMRPQ[2]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_imrpq[3] GMACIMRPQ[3] Interrupt Mask Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IMRPQ[3]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IMRPQ[3]_HRESP		(1 << 11)
/** GMAC_GMAC_IMRPQ[3]_ROVR Receive Overrun **/
#define GMAC_GMAC_IMRPQ[3]_ROVR		(1 << 10)
/** GMAC_GMAC_IMRPQ[3]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IMRPQ[3]_TCOMP		(1 << 7)
/** GMAC_GMAC_IMRPQ[3]_AHB AHB Error **/
#define GMAC_GMAC_IMRPQ[3]_AHB		(1 << 6)
/** GMAC_GMAC_IMRPQ[3]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IMRPQ[3]_RLEX		(1 << 5)
/** GMAC_GMAC_IMRPQ[3]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IMRPQ[3]_RXUBR		(1 << 2)
/** GMAC_GMAC_IMRPQ[3]_RCOMP Receive Complete **/
#define GMAC_GMAC_IMRPQ[3]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_imrpq[4] GMACIMRPQ[4] Interrupt Mask Register Priority Queue (1..5)
@{*/

/** GMAC_GMAC_IMRPQ[4]_HRESP HRESP Not OK **/
#define GMAC_GMAC_IMRPQ[4]_HRESP		(1 << 11)
/** GMAC_GMAC_IMRPQ[4]_ROVR Receive Overrun **/
#define GMAC_GMAC_IMRPQ[4]_ROVR		(1 << 10)
/** GMAC_GMAC_IMRPQ[4]_TCOMP Transmit Complete **/
#define GMAC_GMAC_IMRPQ[4]_TCOMP		(1 << 7)
/** GMAC_GMAC_IMRPQ[4]_AHB AHB Error **/
#define GMAC_GMAC_IMRPQ[4]_AHB		(1 << 6)
/** GMAC_GMAC_IMRPQ[4]_RLEX Retry Limit Exceeded or Late Collision **/
#define GMAC_GMAC_IMRPQ[4]_RLEX		(1 << 5)
/** GMAC_GMAC_IMRPQ[4]_RXUBR RX Used Bit Read **/
#define GMAC_GMAC_IMRPQ[4]_RXUBR		(1 << 2)
/** GMAC_GMAC_IMRPQ[4]_RCOMP Receive Complete **/
#define GMAC_GMAC_IMRPQ[4]_RCOMP		(1 << 1)

/**@}*/

/** @defgroup gmac_gmac_st2er[0] GMACST2ER[0] Screening Type 2 Ethertype Register
@{*/


#define GMAC_GMAC_ST2ER[0]_COMPVAL_SHIFT		0
#define GMAC_GMAC_ST2ER[0]_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2er[0]_compval COMPVAL Ethertype Compare Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2er[1] GMACST2ER[1] Screening Type 2 Ethertype Register
@{*/


#define GMAC_GMAC_ST2ER[1]_COMPVAL_SHIFT		0
#define GMAC_GMAC_ST2ER[1]_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2er[1]_compval COMPVAL Ethertype Compare Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2er[2] GMACST2ER[2] Screening Type 2 Ethertype Register
@{*/


#define GMAC_GMAC_ST2ER[2]_COMPVAL_SHIFT		0
#define GMAC_GMAC_ST2ER[2]_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2er[2]_compval COMPVAL Ethertype Compare Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2er[3] GMACST2ER[3] Screening Type 2 Ethertype Register
@{*/


#define GMAC_GMAC_ST2ER[3]_COMPVAL_SHIFT		0
#define GMAC_GMAC_ST2ER[3]_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2er[3]_compval COMPVAL Ethertype Compare Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[0]_gmac_st2cw0 GMACST2CW[0]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[0]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[0]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[0]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[0]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[0]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[0]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[0]_gmac_st2cw1 GMACST2CW[0]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[0]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[0]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[0]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[0]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[0]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[0]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[1]_gmac_st2cw0 GMACST2CW[1]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[1]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[1]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[1]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[1]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[1]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[1]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[1]_gmac_st2cw1 GMACST2CW[1]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[1]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[1]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[1]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[1]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[1]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[1]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[2]_gmac_st2cw0 GMACST2CW[2]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[2]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[2]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[2]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[2]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[2]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[2]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[2]_gmac_st2cw1 GMACST2CW[2]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[2]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[2]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[2]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[2]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[2]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[2]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[3]_gmac_st2cw0 GMACST2CW[3]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[3]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[3]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[3]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[3]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[3]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[3]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[3]_gmac_st2cw1 GMACST2CW[3]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[3]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[3]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[3]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[3]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[3]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[3]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[4]_gmac_st2cw0 GMACST2CW[4]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[4]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[4]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[4]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[4]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[4]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[4]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[4]_gmac_st2cw1 GMACST2CW[4]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[4]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[4]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[4]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[4]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[4]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[4]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[5]_gmac_st2cw0 GMACST2CW[5]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[5]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[5]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[5]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[5]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[5]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[5]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[5]_gmac_st2cw1 GMACST2CW[5]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[5]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[5]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[5]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[5]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[5]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[5]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[6]_gmac_st2cw0 GMACST2CW[6]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[6]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[6]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[6]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[6]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[6]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[6]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[6]_gmac_st2cw1 GMACST2CW[6]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[6]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[6]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[6]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[6]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[6]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[6]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[7]_gmac_st2cw0 GMACST2CW[7]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[7]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[7]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[7]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[7]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[7]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[7]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[7]_gmac_st2cw1 GMACST2CW[7]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[7]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[7]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[7]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[7]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[7]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[7]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[8]_gmac_st2cw0 GMACST2CW[8]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[8]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[8]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[8]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[8]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[8]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[8]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[8]_gmac_st2cw1 GMACST2CW[8]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[8]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[8]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[8]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[8]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[8]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[8]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[9]_gmac_st2cw0 GMACST2CW[9]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[9]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[9]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[9]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[9]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[9]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[9]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[9]_gmac_st2cw1 GMACST2CW[9]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[9]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[9]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[9]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[9]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[9]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[9]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[10]_gmac_st2cw0 GMACST2CW[10]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[10]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[10]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[10]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[10]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[10]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[10]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[10]_gmac_st2cw1 GMACST2CW[10]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[10]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[10]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[10]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[10]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[10]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[10]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[11]_gmac_st2cw0 GMACST2CW[11]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[11]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[11]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[11]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[11]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[11]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[11]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[11]_gmac_st2cw1 GMACST2CW[11]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[11]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[11]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[11]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[11]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[11]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[11]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[12]_gmac_st2cw0 GMACST2CW[12]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[12]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[12]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[12]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[12]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[12]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[12]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[12]_gmac_st2cw1 GMACST2CW[12]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[12]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[12]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[12]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[12]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[12]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[12]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[13]_gmac_st2cw0 GMACST2CW[13]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[13]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[13]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[13]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[13]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[13]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[13]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[13]_gmac_st2cw1 GMACST2CW[13]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[13]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[13]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[13]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[13]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[13]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[13]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[14]_gmac_st2cw0 GMACST2CW[14]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[14]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[14]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[14]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[14]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[14]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[14]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[14]_gmac_st2cw1 GMACST2CW[14]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[14]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[14]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[14]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[14]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[14]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[14]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[15]_gmac_st2cw0 GMACST2CW[15]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[15]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[15]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[15]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[15]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[15]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[15]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[15]_gmac_st2cw1 GMACST2CW[15]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[15]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[15]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[15]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[15]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[15]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[15]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[16]_gmac_st2cw0 GMACST2CW[16]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[16]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[16]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[16]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[16]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[16]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[16]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[16]_gmac_st2cw1 GMACST2CW[16]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[16]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[16]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[16]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[16]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[16]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[16]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[17]_gmac_st2cw0 GMACST2CW[17]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[17]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[17]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[17]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[17]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[17]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[17]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[17]_gmac_st2cw1 GMACST2CW[17]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[17]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[17]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[17]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[17]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[17]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[17]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[18]_gmac_st2cw0 GMACST2CW[18]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[18]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[18]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[18]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[18]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[18]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[18]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[18]_gmac_st2cw1 GMACST2CW[18]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[18]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[18]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[18]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[18]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[18]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[18]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[19]_gmac_st2cw0 GMACST2CW[19]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[19]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[19]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[19]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[19]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[19]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[19]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[19]_gmac_st2cw1 GMACST2CW[19]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[19]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[19]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[19]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[19]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[19]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[19]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[20]_gmac_st2cw0 GMACST2CW[20]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[20]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[20]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[20]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[20]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[20]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[20]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[20]_gmac_st2cw1 GMACST2CW[20]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[20]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[20]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[20]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[20]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[20]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[20]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[21]_gmac_st2cw0 GMACST2CW[21]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[21]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[21]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[21]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[21]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[21]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[21]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[21]_gmac_st2cw1 GMACST2CW[21]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[21]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[21]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[21]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[21]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[21]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[21]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[22]_gmac_st2cw0 GMACST2CW[22]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[22]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[22]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[22]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[22]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[22]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[22]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[22]_gmac_st2cw1 GMACST2CW[22]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[22]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[22]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[22]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[22]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[22]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[22]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[23]_gmac_st2cw0 GMACST2CW[23]GMACST2CW0 Screening Type 2 Compare Word 0 Register
@{*/


#define GMAC_GMAC_ST2CW[23]_GMAC_ST2CW0_COMPVAL_SHIFT		16
#define GMAC_GMAC_ST2CW[23]_GMAC_ST2CW0_COMPVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[23]_gmac_st2cw0_compval COMPVAL Compare Value
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[23]_GMAC_ST2CW0_MASKVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[23]_GMAC_ST2CW0_MASKVAL_MASK		0xffff
/** @defgroup gmac_gmac_st2cw[23]_gmac_st2cw0_maskval MASKVAL Mask Value
@{*/
/**@}*/


/**@}*/

/** @defgroup gmac_gmac_st2cw[23]_gmac_st2cw1 GMACST2CW[23]GMACST2CW1 Screening Type 2 Compare Word 1 Register
@{*/


#define GMAC_GMAC_ST2CW[23]_GMAC_ST2CW1_OFFSSTRT_SHIFT		7
#define GMAC_GMAC_ST2CW[23]_GMAC_ST2CW1_OFFSSTRT_MASK		0x03
/** @defgroup gmac_gmac_st2cw[23]_gmac_st2cw1_offsstrt OFFSSTRT Ethernet Frame Offset Start
@{*/
/**@}*/


#define GMAC_GMAC_ST2CW[23]_GMAC_ST2CW1_OFFSVAL_SHIFT		0
#define GMAC_GMAC_ST2CW[23]_GMAC_ST2CW1_OFFSVAL_MASK		0x7f
/** @defgroup gmac_gmac_st2cw[23]_gmac_st2cw1_offsval OFFSVAL Offset Value in Bytes
@{*/
/**@}*/


/**@}*/

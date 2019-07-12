#pragma once 

/* --- Ethernet_MAC: Ethernet: media access control (MAC) ----------- */

/** @defgroup ethernet_mac_registers Ethernet: media access control
      (MAC) Register
@{*/

/** Ethernet_MAC_MACCR Operating mode configuration register **/
#define Ethernet_MAC_MACCR			MMIO32(Ethernet_MAC_BASE + 0x00)
/** Ethernet_MAC_MACECR Extended operating mode configuration register **/
#define Ethernet_MAC_MACECR			MMIO32(Ethernet_MAC_BASE + 0x04)
/** Ethernet_MAC_MACPFR Packet filtering control register **/
#define Ethernet_MAC_MACPFR			MMIO32(Ethernet_MAC_BASE + 0x08)
/** Ethernet_MAC_MACWTR Watchdog timeout register **/
#define Ethernet_MAC_MACWTR			MMIO32(Ethernet_MAC_BASE + 0x0c)
/** Ethernet_MAC_MACHT0R Hash Table 0 register **/
#define Ethernet_MAC_MACHT0R			MMIO32(Ethernet_MAC_BASE + 0x10)
/** Ethernet_MAC_MACHT1R Hash Table 1 register **/
#define Ethernet_MAC_MACHT1R			MMIO32(Ethernet_MAC_BASE + 0x14)
/** Ethernet_MAC_MACVTR VLAN tag register **/
#define Ethernet_MAC_MACVTR			MMIO32(Ethernet_MAC_BASE + 0x50)
/** Ethernet_MAC_MACVHTR VLAN Hash table register **/
#define Ethernet_MAC_MACVHTR			MMIO32(Ethernet_MAC_BASE + 0x58)
/** Ethernet_MAC_MACVIR VLAN inclusion register **/
#define Ethernet_MAC_MACVIR			MMIO32(Ethernet_MAC_BASE + 0x60)
/** Ethernet_MAC_MACIVIR Inner VLAN inclusion register **/
#define Ethernet_MAC_MACIVIR			MMIO32(Ethernet_MAC_BASE + 0x64)
/** Ethernet_MAC_MACQTxFCR Tx Queue flow control register **/
#define Ethernet_MAC_MACQTxFCR			MMIO32(Ethernet_MAC_BASE + 0x70)
/** Ethernet_MAC_MACRxFCR Rx flow control register **/
#define Ethernet_MAC_MACRxFCR			MMIO32(Ethernet_MAC_BASE + 0x90)
/** Ethernet_MAC_MACISR Interrupt status register **/
#define Ethernet_MAC_MACISR			MMIO32(Ethernet_MAC_BASE + 0xb0)
/** Ethernet_MAC_MACIER Interrupt enable register **/
#define Ethernet_MAC_MACIER			MMIO32(Ethernet_MAC_BASE + 0xb4)
/** Ethernet_MAC_MACRxTxSR Rx Tx status register **/
#define Ethernet_MAC_MACRxTxSR			MMIO32(Ethernet_MAC_BASE + 0xb8)
/** Ethernet_MAC_MACPCSR PMT control status register **/
#define Ethernet_MAC_MACPCSR			MMIO32(Ethernet_MAC_BASE + 0xc0)
/** Ethernet_MAC_MACRWKPFR Remove wakeup packet filter register **/
#define Ethernet_MAC_MACRWKPFR			MMIO32(Ethernet_MAC_BASE + 0xc4)
/** Ethernet_MAC_MACLCSR LPI control status register **/
#define Ethernet_MAC_MACLCSR			MMIO32(Ethernet_MAC_BASE + 0xd0)
/** Ethernet_MAC_MACLTCR LPI timers control register **/
#define Ethernet_MAC_MACLTCR			MMIO32(Ethernet_MAC_BASE + 0xd4)
/** Ethernet_MAC_MACLETR LPI entry timer register **/
#define Ethernet_MAC_MACLETR			MMIO32(Ethernet_MAC_BASE + 0xd8)
/** Ethernet_MAC_MAC1USTCR 1-microsecond-tick counter register **/
#define Ethernet_MAC_MAC1USTCR			MMIO32(Ethernet_MAC_BASE + 0xdc)
/** Ethernet_MAC_MACVR Version register **/
#define Ethernet_MAC_MACVR			MMIO32(Ethernet_MAC_BASE + 0x110)
/** Ethernet_MAC_MACDR Debug register **/
#define Ethernet_MAC_MACDR			MMIO32(Ethernet_MAC_BASE + 0x114)
/** Ethernet_MAC_MACHWF1R HW feature 1 register **/
#define Ethernet_MAC_MACHWF1R			MMIO32(Ethernet_MAC_BASE + 0x120)
/** Ethernet_MAC_MACHWF2R HW feature 2 register **/
#define Ethernet_MAC_MACHWF2R			MMIO32(Ethernet_MAC_BASE + 0x124)
/** Ethernet_MAC_MACMDIOAR MDIO address register **/
#define Ethernet_MAC_MACMDIOAR			MMIO32(Ethernet_MAC_BASE + 0x200)
/** Ethernet_MAC_MACMDIODR MDIO data register **/
#define Ethernet_MAC_MACMDIODR			MMIO32(Ethernet_MAC_BASE + 0x204)
/** Ethernet_MAC_MACA0HR Address 0 high register **/
#define Ethernet_MAC_MACA0HR			MMIO32(Ethernet_MAC_BASE + 0x300)
/** Ethernet_MAC_MACA0LR Address 0 low register **/
#define Ethernet_MAC_MACA0LR			MMIO32(Ethernet_MAC_BASE + 0x304)
/** Ethernet_MAC_MACA1HR Address 1 high register **/
#define Ethernet_MAC_MACA1HR			MMIO32(Ethernet_MAC_BASE + 0x308)
/** Ethernet_MAC_MACA1LR Address 1 low register **/
#define Ethernet_MAC_MACA1LR			MMIO32(Ethernet_MAC_BASE + 0x30c)
/** Ethernet_MAC_MACA2HR Address 2 high register **/
#define Ethernet_MAC_MACA2HR			MMIO32(Ethernet_MAC_BASE + 0x310)
/** Ethernet_MAC_MACA2LR Address 2 low register **/
#define Ethernet_MAC_MACA2LR			MMIO32(Ethernet_MAC_BASE + 0x314)
/** Ethernet_MAC_MACA3HR Address 3 high register **/
#define Ethernet_MAC_MACA3HR			MMIO32(Ethernet_MAC_BASE + 0x318)
/** Ethernet_MAC_MACA3LR Address 3 low register **/
#define Ethernet_MAC_MACA3LR			MMIO32(Ethernet_MAC_BASE + 0x31c)
/** Ethernet_MAC_MMC_CONTROL MMC control register **/
#define Ethernet_MAC_MMC_CONTROL			MMIO32(Ethernet_MAC_BASE + 0x700)
/** Ethernet_MAC_MMC_RX_INTERRUPT MMC Rx interrupt register **/
#define Ethernet_MAC_MMC_RX_INTERRUPT			MMIO32(Ethernet_MAC_BASE + 0x704)
/** Ethernet_MAC_MMC_TX_INTERRUPT MMC Tx interrupt register **/
#define Ethernet_MAC_MMC_TX_INTERRUPT			MMIO32(Ethernet_MAC_BASE + 0x708)
/** Ethernet_MAC_MMC_RX_INTERRUPT_MASK MMC Rx interrupt mask register **/
#define Ethernet_MAC_MMC_RX_INTERRUPT_MASK			MMIO32(Ethernet_MAC_BASE + 0x70c)
/** Ethernet_MAC_MMC_TX_INTERRUPT_MASK MMC Tx interrupt mask register **/
#define Ethernet_MAC_MMC_TX_INTERRUPT_MASK			MMIO32(Ethernet_MAC_BASE + 0x710)
/** Ethernet_MAC_TX_SINGLE_COLLISION_GOOD_PACKETS Tx single collision good packets register **/
#define Ethernet_MAC_TX_SINGLE_COLLISION_GOOD_PACKETS			MMIO32(Ethernet_MAC_BASE + 0x74c)
/** Ethernet_MAC_TX_MULTIPLE_COLLISION_GOOD_PACKETS Tx multiple collision good packets register **/
#define Ethernet_MAC_TX_MULTIPLE_COLLISION_GOOD_PACKETS			MMIO32(Ethernet_MAC_BASE + 0x750)
/** Ethernet_MAC_TX_PACKET_COUNT_GOOD Tx packet count good register **/
#define Ethernet_MAC_TX_PACKET_COUNT_GOOD			MMIO32(Ethernet_MAC_BASE + 0x768)
/** Ethernet_MAC_RX_CRC_ERROR_PACKETS Rx CRC error packets register **/
#define Ethernet_MAC_RX_CRC_ERROR_PACKETS			MMIO32(Ethernet_MAC_BASE + 0x794)
/** Ethernet_MAC_RX_ALIGNMENT_ERROR_PACKETS Rx alignment error packets register **/
#define Ethernet_MAC_RX_ALIGNMENT_ERROR_PACKETS			MMIO32(Ethernet_MAC_BASE + 0x798)
/** Ethernet_MAC_RX_UNICAST_PACKETS_GOOD Rx unicast packets good register **/
#define Ethernet_MAC_RX_UNICAST_PACKETS_GOOD			MMIO32(Ethernet_MAC_BASE + 0x7c4)
/** Ethernet_MAC_TX_LPI_USEC_CNTR Tx LPI microsecond timer register **/
#define Ethernet_MAC_TX_LPI_USEC_CNTR			MMIO32(Ethernet_MAC_BASE + 0x7ec)
/** Ethernet_MAC_TX_LPI_TRAN_CNTR Tx LPI transition counter register **/
#define Ethernet_MAC_TX_LPI_TRAN_CNTR			MMIO32(Ethernet_MAC_BASE + 0x7f0)
/** Ethernet_MAC_RX_LPI_USEC_CNTR Rx LPI microsecond counter register **/
#define Ethernet_MAC_RX_LPI_USEC_CNTR			MMIO32(Ethernet_MAC_BASE + 0x7f4)
/** Ethernet_MAC_RX_LPI_TRAN_CNTR Rx LPI transition counter register **/
#define Ethernet_MAC_RX_LPI_TRAN_CNTR			MMIO32(Ethernet_MAC_BASE + 0x7f8)
/** Ethernet_MAC_MACL3L4C0R L3 and L4 control 0 register **/
#define Ethernet_MAC_MACL3L4C0R			MMIO32(Ethernet_MAC_BASE + 0x900)
/** Ethernet_MAC_MACL4A0R Layer4 address filter 0 register **/
#define Ethernet_MAC_MACL4A0R			MMIO32(Ethernet_MAC_BASE + 0x904)
/** Ethernet_MAC_MACL3A00R MACL3A00R **/
#define Ethernet_MAC_MACL3A00R			MMIO32(Ethernet_MAC_BASE + 0x910)
/** Ethernet_MAC_MACL3A10R Layer3 address 1 filter 0 register **/
#define Ethernet_MAC_MACL3A10R			MMIO32(Ethernet_MAC_BASE + 0x914)
/** Ethernet_MAC_MACL3A20 Layer3 Address 2 filter 0 register **/
#define Ethernet_MAC_MACL3A20			MMIO32(Ethernet_MAC_BASE + 0x918)
/** Ethernet_MAC_MACL3A30 Layer3 Address 3 filter 0 register **/
#define Ethernet_MAC_MACL3A30			MMIO32(Ethernet_MAC_BASE + 0x91c)
/** Ethernet_MAC_MACL3L4C1R L3 and L4 control 1 register **/
#define Ethernet_MAC_MACL3L4C1R			MMIO32(Ethernet_MAC_BASE + 0x930)
/** Ethernet_MAC_MACL4A1R Layer 4 address filter 1 register **/
#define Ethernet_MAC_MACL4A1R			MMIO32(Ethernet_MAC_BASE + 0x934)
/** Ethernet_MAC_MACL3A01R Layer3 address 0 filter 1 Register **/
#define Ethernet_MAC_MACL3A01R			MMIO32(Ethernet_MAC_BASE + 0x940)
/** Ethernet_MAC_MACL3A11R Layer3 address 1 filter 1 register **/
#define Ethernet_MAC_MACL3A11R			MMIO32(Ethernet_MAC_BASE + 0x944)
/** Ethernet_MAC_MACL3A21R Layer3 address 2 filter 1 Register **/
#define Ethernet_MAC_MACL3A21R			MMIO32(Ethernet_MAC_BASE + 0x948)
/** Ethernet_MAC_MACL3A31R Layer3 address 3 filter 1 register **/
#define Ethernet_MAC_MACL3A31R			MMIO32(Ethernet_MAC_BASE + 0x94c)
/** Ethernet_MAC_MACARPAR ARP address register **/
#define Ethernet_MAC_MACARPAR			MMIO32(Ethernet_MAC_BASE + 0xae0)
/** Ethernet_MAC_MACTSCR Timestamp control Register **/
#define Ethernet_MAC_MACTSCR			MMIO32(Ethernet_MAC_BASE + 0xb00)
/** Ethernet_MAC_MACSSIR Sub-second increment register **/
#define Ethernet_MAC_MACSSIR			MMIO32(Ethernet_MAC_BASE + 0xb04)
/** Ethernet_MAC_MACSTSR System time seconds register **/
#define Ethernet_MAC_MACSTSR			MMIO32(Ethernet_MAC_BASE + 0xb08)
/** Ethernet_MAC_MACSTNR System time nanoseconds register **/
#define Ethernet_MAC_MACSTNR			MMIO32(Ethernet_MAC_BASE + 0xb0c)
/** Ethernet_MAC_MACSTSUR System time seconds update register **/
#define Ethernet_MAC_MACSTSUR			MMIO32(Ethernet_MAC_BASE + 0xb10)
/** Ethernet_MAC_MACSTNUR System time nanoseconds update register **/
#define Ethernet_MAC_MACSTNUR			MMIO32(Ethernet_MAC_BASE + 0xb14)
/** Ethernet_MAC_MACTSAR Timestamp addend register **/
#define Ethernet_MAC_MACTSAR			MMIO32(Ethernet_MAC_BASE + 0xb18)
/** Ethernet_MAC_MACTSSR Timestamp status register **/
#define Ethernet_MAC_MACTSSR			MMIO32(Ethernet_MAC_BASE + 0xb20)
/** Ethernet_MAC_MACTxTSSNR Tx timestamp status nanoseconds register **/
#define Ethernet_MAC_MACTxTSSNR			MMIO32(Ethernet_MAC_BASE + 0xb30)
/** Ethernet_MAC_MACTxTSSSR Tx timestamp status seconds register **/
#define Ethernet_MAC_MACTxTSSSR			MMIO32(Ethernet_MAC_BASE + 0xb34)
/** Ethernet_MAC_MACACR Auxiliary control register **/
#define Ethernet_MAC_MACACR			MMIO32(Ethernet_MAC_BASE + 0xb40)
/** Ethernet_MAC_MACATSNR Auxiliary timestamp nanoseconds register **/
#define Ethernet_MAC_MACATSNR			MMIO32(Ethernet_MAC_BASE + 0xb48)
/** Ethernet_MAC_MACATSSR Auxiliary timestamp seconds register **/
#define Ethernet_MAC_MACATSSR			MMIO32(Ethernet_MAC_BASE + 0xb4c)
/** Ethernet_MAC_MACTSIACR Timestamp Ingress asymmetric correction register **/
#define Ethernet_MAC_MACTSIACR			MMIO32(Ethernet_MAC_BASE + 0xb50)
/** Ethernet_MAC_MACTSEACR Timestamp Egress asymmetric correction register **/
#define Ethernet_MAC_MACTSEACR			MMIO32(Ethernet_MAC_BASE + 0xb54)
/** Ethernet_MAC_MACTSICNR Timestamp Ingress correction nanosecond register **/
#define Ethernet_MAC_MACTSICNR			MMIO32(Ethernet_MAC_BASE + 0xb58)
/** Ethernet_MAC_MACTSECNR Timestamp Egress correction nanosecond register **/
#define Ethernet_MAC_MACTSECNR			MMIO32(Ethernet_MAC_BASE + 0xb5c)
/** Ethernet_MAC_MACPPSCR PPS control register **/
#define Ethernet_MAC_MACPPSCR			MMIO32(Ethernet_MAC_BASE + 0xb70)
/** Ethernet_MAC_MACPPSTTSR PPS target time seconds register **/
#define Ethernet_MAC_MACPPSTTSR			MMIO32(Ethernet_MAC_BASE + 0xb80)
/** Ethernet_MAC_MACPPSTTNR PPS target time nanoseconds register **/
#define Ethernet_MAC_MACPPSTTNR			MMIO32(Ethernet_MAC_BASE + 0xb84)
/** Ethernet_MAC_MACPPSIR PPS interval register **/
#define Ethernet_MAC_MACPPSIR			MMIO32(Ethernet_MAC_BASE + 0xb88)
/** Ethernet_MAC_MACPPSWR PPS width register **/
#define Ethernet_MAC_MACPPSWR			MMIO32(Ethernet_MAC_BASE + 0xb8c)
/** Ethernet_MAC_MACPOCR PTP Offload control register **/
#define Ethernet_MAC_MACPOCR			MMIO32(Ethernet_MAC_BASE + 0xbc0)
/** Ethernet_MAC_MACSPI0R PTP Source Port Identity 0 Register **/
#define Ethernet_MAC_MACSPI0R			MMIO32(Ethernet_MAC_BASE + 0xbc4)
/** Ethernet_MAC_MACSPI1R PTP Source port identity 1 register **/
#define Ethernet_MAC_MACSPI1R			MMIO32(Ethernet_MAC_BASE + 0xbc8)
/** Ethernet_MAC_MACSPI2R PTP Source port identity 2 register **/
#define Ethernet_MAC_MACSPI2R			MMIO32(Ethernet_MAC_BASE + 0xbcc)
/** Ethernet_MAC_MACLMIR Log message interval register **/
#define Ethernet_MAC_MACLMIR			MMIO32(Ethernet_MAC_BASE + 0xbd0)
/** Ethernet_MAC_MTLOMR Operating mode Register **/
#define Ethernet_MAC_MTLOMR			MMIO32(Ethernet_MAC_BASE + 0xc00)
/** Ethernet_MAC_MTLISR Interrupt status Register **/
#define Ethernet_MAC_MTLISR			MMIO32(Ethernet_MAC_BASE + 0xc20)
/** Ethernet_MAC_MTLTxQOMR Tx queue operating mode Register **/
#define Ethernet_MAC_MTLTxQOMR			MMIO32(Ethernet_MAC_BASE + 0xd00)
/** Ethernet_MAC_MTLTxQUR Tx queue underflow register **/
#define Ethernet_MAC_MTLTxQUR			MMIO32(Ethernet_MAC_BASE + 0xd04)
/** Ethernet_MAC_MTLTxQDR Tx queue debug Register **/
#define Ethernet_MAC_MTLTxQDR			MMIO32(Ethernet_MAC_BASE + 0xd08)
/** Ethernet_MAC_MTLQICSR Queue interrupt control status Register **/
#define Ethernet_MAC_MTLQICSR			MMIO32(Ethernet_MAC_BASE + 0xd2c)
/** Ethernet_MAC_MTLRxQOMR Rx queue operating mode register **/
#define Ethernet_MAC_MTLRxQOMR			MMIO32(Ethernet_MAC_BASE + 0xd30)
/** Ethernet_MAC_MTLRxQMPOCR Rx queue missed packet and overflow counter register **/
#define Ethernet_MAC_MTLRxQMPOCR			MMIO32(Ethernet_MAC_BASE + 0xd34)
/** Ethernet_MAC_MTLRxQDR Rx queue debug register **/
#define Ethernet_MAC_MTLRxQDR			MMIO32(Ethernet_MAC_BASE + 0xd38)
/** Ethernet_MAC_DMAMR DMA mode register **/
#define Ethernet_MAC_DMAMR			MMIO32(Ethernet_MAC_BASE + 0x1000)
/** Ethernet_MAC_DMASBMR System bus mode register **/
#define Ethernet_MAC_DMASBMR			MMIO32(Ethernet_MAC_BASE + 0x1004)
/** Ethernet_MAC_DMAISR Interrupt status register **/
#define Ethernet_MAC_DMAISR			MMIO32(Ethernet_MAC_BASE + 0x1008)
/** Ethernet_MAC_DMADSR Debug status register **/
#define Ethernet_MAC_DMADSR			MMIO32(Ethernet_MAC_BASE + 0x100c)
/** Ethernet_MAC_DMACCR Channel control register **/
#define Ethernet_MAC_DMACCR			MMIO32(Ethernet_MAC_BASE + 0x1100)
/** Ethernet_MAC_DMACTxCR Channel transmit control register **/
#define Ethernet_MAC_DMACTxCR			MMIO32(Ethernet_MAC_BASE + 0x1104)
/** Ethernet_MAC_DMACRxCR Channel receive control register **/
#define Ethernet_MAC_DMACRxCR			MMIO32(Ethernet_MAC_BASE + 0x1108)
/** Ethernet_MAC_DMACTxDLAR Channel Tx descriptor list address register **/
#define Ethernet_MAC_DMACTxDLAR			MMIO32(Ethernet_MAC_BASE + 0x1114)
/** Ethernet_MAC_DMACRxDLAR Channel Rx descriptor list address register **/
#define Ethernet_MAC_DMACRxDLAR			MMIO32(Ethernet_MAC_BASE + 0x111c)
/** Ethernet_MAC_DMACTxDTPR Channel Tx descriptor tail pointer register **/
#define Ethernet_MAC_DMACTxDTPR			MMIO32(Ethernet_MAC_BASE + 0x1120)
/** Ethernet_MAC_DMACRxDTPR Channel Rx descriptor tail pointer register **/
#define Ethernet_MAC_DMACRxDTPR			MMIO32(Ethernet_MAC_BASE + 0x1128)
/** Ethernet_MAC_DMACTxRLR Channel Tx descriptor ring length register **/
#define Ethernet_MAC_DMACTxRLR			MMIO32(Ethernet_MAC_BASE + 0x112c)
/** Ethernet_MAC_DMACRxRLR Channel Rx descriptor ring length register **/
#define Ethernet_MAC_DMACRxRLR			MMIO32(Ethernet_MAC_BASE + 0x1130)
/** Ethernet_MAC_DMACIER Channel interrupt enable register **/
#define Ethernet_MAC_DMACIER			MMIO32(Ethernet_MAC_BASE + 0x1134)
/** Ethernet_MAC_DMACRxIWTR Channel Rx interrupt watchdog timer register **/
#define Ethernet_MAC_DMACRxIWTR			MMIO32(Ethernet_MAC_BASE + 0x1138)
/** Ethernet_MAC_DMACCATxDR Channel current application transmit descriptor register **/
#define Ethernet_MAC_DMACCATxDR			MMIO32(Ethernet_MAC_BASE + 0x1144)
/** Ethernet_MAC_DMACCARxDR Channel current application receive descriptor register **/
#define Ethernet_MAC_DMACCARxDR			MMIO32(Ethernet_MAC_BASE + 0x114c)
/** Ethernet_MAC_DMACCATxBR Channel current application transmit buffer register **/
#define Ethernet_MAC_DMACCATxBR			MMIO32(Ethernet_MAC_BASE + 0x1154)
/** Ethernet_MAC_DMACCARxBR Channel current application receive buffer register **/
#define Ethernet_MAC_DMACCARxBR			MMIO32(Ethernet_MAC_BASE + 0x115c)
/** Ethernet_MAC_DMACSR Channel status register **/
#define Ethernet_MAC_DMACSR			MMIO32(Ethernet_MAC_BASE + 0x1160)
/** Ethernet_MAC_DMACMFCR Channel missed frame count register **/
#define Ethernet_MAC_DMACMFCR			MMIO32(Ethernet_MAC_BASE + 0x116c)

/**@}*/


/** @defgroup ethernet_mac_maccr MACCR Operating mode configuration register
@{*/

/** Ethernet_MAC_MACCR_ARPEN ARPEN **/
#define Ethernet_MAC_MACCR_ARPEN		(1 << 31)

#define Ethernet_MAC_MACCR_SARC_SHIFT		28
#define Ethernet_MAC_MACCR_SARC_MASK		0x07
/** @defgroup ethernet_mac_maccr_sarc SARC SARC
@{*/
/**@}*/

/** Ethernet_MAC_MACCR_IPC IPC **/
#define Ethernet_MAC_MACCR_IPC		(1 << 27)

#define Ethernet_MAC_MACCR_IPG_SHIFT		24
#define Ethernet_MAC_MACCR_IPG_MASK		0x07
/** @defgroup ethernet_mac_maccr_ipg IPG IPG
@{*/
/**@}*/

/** Ethernet_MAC_MACCR_GPSLCE GPSLCE **/
#define Ethernet_MAC_MACCR_GPSLCE		(1 << 23)
/** Ethernet_MAC_MACCR_S2KP S2KP **/
#define Ethernet_MAC_MACCR_S2KP		(1 << 22)
/** Ethernet_MAC_MACCR_CST CST **/
#define Ethernet_MAC_MACCR_CST		(1 << 21)
/** Ethernet_MAC_MACCR_ACS ACS **/
#define Ethernet_MAC_MACCR_ACS		(1 << 20)
/** Ethernet_MAC_MACCR_WD WD **/
#define Ethernet_MAC_MACCR_WD		(1 << 19)
/** Ethernet_MAC_MACCR_JD JD **/
#define Ethernet_MAC_MACCR_JD		(1 << 17)
/** Ethernet_MAC_MACCR_JE JE **/
#define Ethernet_MAC_MACCR_JE		(1 << 16)
/** Ethernet_MAC_MACCR_FES FES **/
#define Ethernet_MAC_MACCR_FES		(1 << 14)
/** Ethernet_MAC_MACCR_DM DM **/
#define Ethernet_MAC_MACCR_DM		(1 << 13)
/** Ethernet_MAC_MACCR_LM LM **/
#define Ethernet_MAC_MACCR_LM		(1 << 12)
/** Ethernet_MAC_MACCR_ECRSFD ECRSFD **/
#define Ethernet_MAC_MACCR_ECRSFD		(1 << 11)
/** Ethernet_MAC_MACCR_DO DO **/
#define Ethernet_MAC_MACCR_DO		(1 << 10)
/** Ethernet_MAC_MACCR_DCRS DCRS **/
#define Ethernet_MAC_MACCR_DCRS		(1 << 9)
/** Ethernet_MAC_MACCR_DR DR **/
#define Ethernet_MAC_MACCR_DR		(1 << 8)

#define Ethernet_MAC_MACCR_BL_SHIFT		5
#define Ethernet_MAC_MACCR_BL_MASK		0x03
/** @defgroup ethernet_mac_maccr_bl BL BL
@{*/
/**@}*/

/** Ethernet_MAC_MACCR_DC DC **/
#define Ethernet_MAC_MACCR_DC		(1 << 4)

#define Ethernet_MAC_MACCR_PRELEN_SHIFT		2
#define Ethernet_MAC_MACCR_PRELEN_MASK		0x03
/** @defgroup ethernet_mac_maccr_prelen PRELEN PRELEN
@{*/
/**@}*/

/** Ethernet_MAC_MACCR_TE TE **/
#define Ethernet_MAC_MACCR_TE		(1 << 1)
/** Ethernet_MAC_MACCR_RE Receiver Enable **/
#define Ethernet_MAC_MACCR_RE		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macecr MACECR Extended operating mode configuration register
@{*/


#define Ethernet_MAC_MACECR_EIPG_SHIFT		25
#define Ethernet_MAC_MACECR_EIPG_MASK		0x1f
/** @defgroup ethernet_mac_macecr_eipg EIPG EIPG
@{*/
/**@}*/

/** Ethernet_MAC_MACECR_EIPGEN EIPGEN **/
#define Ethernet_MAC_MACECR_EIPGEN		(1 << 24)
/** Ethernet_MAC_MACECR_USP USP **/
#define Ethernet_MAC_MACECR_USP		(1 << 18)
/** Ethernet_MAC_MACECR_SPEN SPEN **/
#define Ethernet_MAC_MACECR_SPEN		(1 << 17)
/** Ethernet_MAC_MACECR_DCRCC DCRCC **/
#define Ethernet_MAC_MACECR_DCRCC		(1 << 16)

#define Ethernet_MAC_MACECR_GPSL_SHIFT		0
#define Ethernet_MAC_MACECR_GPSL_MASK		0x3fff
/** @defgroup ethernet_mac_macecr_gpsl GPSL GPSL
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macpfr MACPFR Packet filtering control register
@{*/

/** Ethernet_MAC_MACPFR_RA RA **/
#define Ethernet_MAC_MACPFR_RA		(1 << 31)
/** Ethernet_MAC_MACPFR_DNTU DNTU **/
#define Ethernet_MAC_MACPFR_DNTU		(1 << 21)
/** Ethernet_MAC_MACPFR_IPFE IPFE **/
#define Ethernet_MAC_MACPFR_IPFE		(1 << 20)
/** Ethernet_MAC_MACPFR_VTFE VTFE **/
#define Ethernet_MAC_MACPFR_VTFE		(1 << 16)
/** Ethernet_MAC_MACPFR_HPF HPF **/
#define Ethernet_MAC_MACPFR_HPF		(1 << 10)
/** Ethernet_MAC_MACPFR_SAF SAF **/
#define Ethernet_MAC_MACPFR_SAF		(1 << 9)
/** Ethernet_MAC_MACPFR_SAIF SAIF **/
#define Ethernet_MAC_MACPFR_SAIF		(1 << 8)

#define Ethernet_MAC_MACPFR_PCF_SHIFT		6
#define Ethernet_MAC_MACPFR_PCF_MASK		0x03
/** @defgroup ethernet_mac_macpfr_pcf PCF PCF
@{*/
/**@}*/

/** Ethernet_MAC_MACPFR_DBF DBF **/
#define Ethernet_MAC_MACPFR_DBF		(1 << 5)
/** Ethernet_MAC_MACPFR_PM PM **/
#define Ethernet_MAC_MACPFR_PM		(1 << 4)
/** Ethernet_MAC_MACPFR_DAIF DAIF **/
#define Ethernet_MAC_MACPFR_DAIF		(1 << 3)
/** Ethernet_MAC_MACPFR_HMC HMC **/
#define Ethernet_MAC_MACPFR_HMC		(1 << 2)
/** Ethernet_MAC_MACPFR_HUC HUC **/
#define Ethernet_MAC_MACPFR_HUC		(1 << 1)
/** Ethernet_MAC_MACPFR_PR PR **/
#define Ethernet_MAC_MACPFR_PR		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macwtr MACWTR Watchdog timeout register
@{*/

/** Ethernet_MAC_MACWTR_PWE PWE **/
#define Ethernet_MAC_MACWTR_PWE		(1 << 8)

#define Ethernet_MAC_MACWTR_WTO_SHIFT		0
#define Ethernet_MAC_MACWTR_WTO_MASK		0x0f
/** @defgroup ethernet_mac_macwtr_wto WTO WTO
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macht0r MACHT0R Hash Table 0 register
@{*/


#define Ethernet_MAC_MACHT0R_HT31T0_SHIFT		0
#define Ethernet_MAC_MACHT0R_HT31T0_MASK		0xffffffff
/** @defgroup ethernet_mac_macht0r_ht31t0 HT31T0 HT31T0
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macht1r MACHT1R Hash Table 1 register
@{*/


#define Ethernet_MAC_MACHT1R_HT63T32_SHIFT		0
#define Ethernet_MAC_MACHT1R_HT63T32_MASK		0xffffffff
/** @defgroup ethernet_mac_macht1r_ht63t32 HT63T32 HT63T32
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macvtr MACVTR VLAN tag register
@{*/

/** Ethernet_MAC_MACVTR_EIVLRXS EIVLRXS **/
#define Ethernet_MAC_MACVTR_EIVLRXS		(1 << 31)

#define Ethernet_MAC_MACVTR_EIVLS_SHIFT		28
#define Ethernet_MAC_MACVTR_EIVLS_MASK		0x03
/** @defgroup ethernet_mac_macvtr_eivls EIVLS EIVLS
@{*/
/**@}*/

/** Ethernet_MAC_MACVTR_ERIVLT ERIVLT **/
#define Ethernet_MAC_MACVTR_ERIVLT		(1 << 27)
/** Ethernet_MAC_MACVTR_EDVLP EDVLP **/
#define Ethernet_MAC_MACVTR_EDVLP		(1 << 26)
/** Ethernet_MAC_MACVTR_VTHM VTHM **/
#define Ethernet_MAC_MACVTR_VTHM		(1 << 25)
/** Ethernet_MAC_MACVTR_EVLRXS EVLRXS **/
#define Ethernet_MAC_MACVTR_EVLRXS		(1 << 24)

#define Ethernet_MAC_MACVTR_EVLS_SHIFT		21
#define Ethernet_MAC_MACVTR_EVLS_MASK		0x03
/** @defgroup ethernet_mac_macvtr_evls EVLS EVLS
@{*/
/**@}*/

/** Ethernet_MAC_MACVTR_DOVLTC DOVLTC **/
#define Ethernet_MAC_MACVTR_DOVLTC		(1 << 20)
/** Ethernet_MAC_MACVTR_ERSVLM ERSVLM **/
#define Ethernet_MAC_MACVTR_ERSVLM		(1 << 19)
/** Ethernet_MAC_MACVTR_ESVL ESVL **/
#define Ethernet_MAC_MACVTR_ESVL		(1 << 18)
/** Ethernet_MAC_MACVTR_VTIM VTIM **/
#define Ethernet_MAC_MACVTR_VTIM		(1 << 17)
/** Ethernet_MAC_MACVTR_ETV ETV **/
#define Ethernet_MAC_MACVTR_ETV		(1 << 16)

#define Ethernet_MAC_MACVTR_VL_SHIFT		0
#define Ethernet_MAC_MACVTR_VL_MASK		0xffff
/** @defgroup ethernet_mac_macvtr_vl VL VL
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macvhtr MACVHTR VLAN Hash table register
@{*/


#define Ethernet_MAC_MACVHTR_VLHT_SHIFT		0
#define Ethernet_MAC_MACVHTR_VLHT_MASK		0xffff
/** @defgroup ethernet_mac_macvhtr_vlht VLHT VLHT
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macvir MACVIR VLAN inclusion register
@{*/

/** Ethernet_MAC_MACVIR_VLTI VLTI **/
#define Ethernet_MAC_MACVIR_VLTI		(1 << 20)
/** Ethernet_MAC_MACVIR_CSVL CSVL **/
#define Ethernet_MAC_MACVIR_CSVL		(1 << 19)
/** Ethernet_MAC_MACVIR_VLP VLP **/
#define Ethernet_MAC_MACVIR_VLP		(1 << 18)

#define Ethernet_MAC_MACVIR_VLC_SHIFT		16
#define Ethernet_MAC_MACVIR_VLC_MASK		0x03
/** @defgroup ethernet_mac_macvir_vlc VLC VLC
@{*/
/**@}*/


#define Ethernet_MAC_MACVIR_VLT_SHIFT		0
#define Ethernet_MAC_MACVIR_VLT_MASK		0xffff
/** @defgroup ethernet_mac_macvir_vlt VLT VLT
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macivir MACIVIR Inner VLAN inclusion register
@{*/

/** Ethernet_MAC_MACIVIR_VLTI VLTI **/
#define Ethernet_MAC_MACIVIR_VLTI		(1 << 20)
/** Ethernet_MAC_MACIVIR_CSVL CSVL **/
#define Ethernet_MAC_MACIVIR_CSVL		(1 << 19)
/** Ethernet_MAC_MACIVIR_VLP VLP **/
#define Ethernet_MAC_MACIVIR_VLP		(1 << 18)

#define Ethernet_MAC_MACIVIR_VLC_SHIFT		16
#define Ethernet_MAC_MACIVIR_VLC_MASK		0x03
/** @defgroup ethernet_mac_macivir_vlc VLC VLC
@{*/
/**@}*/


#define Ethernet_MAC_MACIVIR_VLT_SHIFT		0
#define Ethernet_MAC_MACIVIR_VLT_MASK		0xffff
/** @defgroup ethernet_mac_macivir_vlt VLT VLT
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macqtxfcr MACQTxFCR Tx Queue flow control register
@{*/


#define Ethernet_MAC_MACQTxFCR_PT_SHIFT		16
#define Ethernet_MAC_MACQTxFCR_PT_MASK		0xffff
/** @defgroup ethernet_mac_macqtxfcr_pt PT PT
@{*/
/**@}*/

/** Ethernet_MAC_MACQTxFCR_DZPQ DZPQ **/
#define Ethernet_MAC_MACQTxFCR_DZPQ		(1 << 7)

#define Ethernet_MAC_MACQTxFCR_PLT_SHIFT		4
#define Ethernet_MAC_MACQTxFCR_PLT_MASK		0x07
/** @defgroup ethernet_mac_macqtxfcr_plt PLT PLT
@{*/
/**@}*/

/** Ethernet_MAC_MACQTxFCR_TFE TFE **/
#define Ethernet_MAC_MACQTxFCR_TFE		(1 << 1)
/** Ethernet_MAC_MACQTxFCR_FCB_BPA FCB_BPA **/
#define Ethernet_MAC_MACQTxFCR_FCB_BPA		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macrxfcr MACRxFCR Rx flow control register
@{*/

/** Ethernet_MAC_MACRxFCR_UP UP **/
#define Ethernet_MAC_MACRxFCR_UP		(1 << 1)
/** Ethernet_MAC_MACRxFCR_RFE RFE **/
#define Ethernet_MAC_MACRxFCR_RFE		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macisr MACISR Interrupt status register
@{*/

/** Ethernet_MAC_MACISR_RXSTSIS RXSTSIS **/
#define Ethernet_MAC_MACISR_RXSTSIS		(1 << 14)
/** Ethernet_MAC_MACISR_TXSTSIS TXSTSIS **/
#define Ethernet_MAC_MACISR_TXSTSIS		(1 << 13)
/** Ethernet_MAC_MACISR_TSIS TSIS **/
#define Ethernet_MAC_MACISR_TSIS		(1 << 12)
/** Ethernet_MAC_MACISR_MMCTXIS MMCTXIS **/
#define Ethernet_MAC_MACISR_MMCTXIS		(1 << 10)
/** Ethernet_MAC_MACISR_MMCRXIS MMCRXIS **/
#define Ethernet_MAC_MACISR_MMCRXIS		(1 << 9)
/** Ethernet_MAC_MACISR_MMCIS MMCIS **/
#define Ethernet_MAC_MACISR_MMCIS		(1 << 8)
/** Ethernet_MAC_MACISR_LPIIS LPIIS **/
#define Ethernet_MAC_MACISR_LPIIS		(1 << 5)
/** Ethernet_MAC_MACISR_PMTIS PMTIS **/
#define Ethernet_MAC_MACISR_PMTIS		(1 << 4)
/** Ethernet_MAC_MACISR_PHYIS PHYIS **/
#define Ethernet_MAC_MACISR_PHYIS		(1 << 3)

/**@}*/

/** @defgroup ethernet_mac_macier MACIER Interrupt enable register
@{*/

/** Ethernet_MAC_MACIER_RXSTSIE RXSTSIE **/
#define Ethernet_MAC_MACIER_RXSTSIE		(1 << 14)
/** Ethernet_MAC_MACIER_TXSTSIE TXSTSIE **/
#define Ethernet_MAC_MACIER_TXSTSIE		(1 << 13)
/** Ethernet_MAC_MACIER_TSIE TSIE **/
#define Ethernet_MAC_MACIER_TSIE		(1 << 12)
/** Ethernet_MAC_MACIER_LPIIE LPIIE **/
#define Ethernet_MAC_MACIER_LPIIE		(1 << 5)
/** Ethernet_MAC_MACIER_PMTIE PMTIE **/
#define Ethernet_MAC_MACIER_PMTIE		(1 << 4)
/** Ethernet_MAC_MACIER_PHYIE PHYIE **/
#define Ethernet_MAC_MACIER_PHYIE		(1 << 3)

/**@}*/

/** @defgroup ethernet_mac_macrxtxsr MACRxTxSR Rx Tx status register
@{*/

/** Ethernet_MAC_MACRxTxSR_RWT RWT **/
#define Ethernet_MAC_MACRxTxSR_RWT		(1 << 8)
/** Ethernet_MAC_MACRxTxSR_EXCOL LCOL **/
#define Ethernet_MAC_MACRxTxSR_EXCOL		(1 << 5)
/** Ethernet_MAC_MACRxTxSR_LCOL LCOL **/
#define Ethernet_MAC_MACRxTxSR_LCOL		(1 << 4)
/** Ethernet_MAC_MACRxTxSR_EXDEF EXDEF **/
#define Ethernet_MAC_MACRxTxSR_EXDEF		(1 << 3)
/** Ethernet_MAC_MACRxTxSR_LCARR LCARR **/
#define Ethernet_MAC_MACRxTxSR_LCARR		(1 << 2)
/** Ethernet_MAC_MACRxTxSR_NCARR NCARR **/
#define Ethernet_MAC_MACRxTxSR_NCARR		(1 << 1)
/** Ethernet_MAC_MACRxTxSR_TJT TJT **/
#define Ethernet_MAC_MACRxTxSR_TJT		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macpcsr MACPCSR PMT control status register
@{*/

/** Ethernet_MAC_MACPCSR_RWKFILTRST RWKFILTRST **/
#define Ethernet_MAC_MACPCSR_RWKFILTRST		(1 << 31)

#define Ethernet_MAC_MACPCSR_RWKPTR_SHIFT		24
#define Ethernet_MAC_MACPCSR_RWKPTR_MASK		0x1f
/** @defgroup ethernet_mac_macpcsr_rwkptr RWKPTR RWKPTR
@{*/
/**@}*/

/** Ethernet_MAC_MACPCSR_RWKPFE RWKPFE **/
#define Ethernet_MAC_MACPCSR_RWKPFE		(1 << 10)
/** Ethernet_MAC_MACPCSR_GLBLUCAST GLBLUCAST **/
#define Ethernet_MAC_MACPCSR_GLBLUCAST		(1 << 9)
/** Ethernet_MAC_MACPCSR_RWKPRCVD RWKPRCVD **/
#define Ethernet_MAC_MACPCSR_RWKPRCVD		(1 << 6)
/** Ethernet_MAC_MACPCSR_MGKPRCVD MGKPRCVD **/
#define Ethernet_MAC_MACPCSR_MGKPRCVD		(1 << 5)
/** Ethernet_MAC_MACPCSR_RWKPKTEN RWKPKTEN **/
#define Ethernet_MAC_MACPCSR_RWKPKTEN		(1 << 2)
/** Ethernet_MAC_MACPCSR_MGKPKTEN MGKPKTEN **/
#define Ethernet_MAC_MACPCSR_MGKPKTEN		(1 << 1)
/** Ethernet_MAC_MACPCSR_PWRDWN PWRDWN **/
#define Ethernet_MAC_MACPCSR_PWRDWN		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macrwkpfr MACRWKPFR Remove wakeup packet filter register
@{*/


#define Ethernet_MAC_MACRWKPFR_WKUPFRMFTR_SHIFT		0
#define Ethernet_MAC_MACRWKPFR_WKUPFRMFTR_MASK		0xffffffff
/** @defgroup ethernet_mac_macrwkpfr_wkupfrmftr WKUPFRMFTR WKUPFRMFTR
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maclcsr MACLCSR LPI control status register
@{*/

/** Ethernet_MAC_MACLCSR_LPITCSE LPITCSE **/
#define Ethernet_MAC_MACLCSR_LPITCSE		(1 << 21)
/** Ethernet_MAC_MACLCSR_LPITE LPITE **/
#define Ethernet_MAC_MACLCSR_LPITE		(1 << 20)
/** Ethernet_MAC_MACLCSR_LPITXA LPITXA **/
#define Ethernet_MAC_MACLCSR_LPITXA		(1 << 19)
/** Ethernet_MAC_MACLCSR_PLSEN PLSEN **/
#define Ethernet_MAC_MACLCSR_PLSEN		(1 << 18)
/** Ethernet_MAC_MACLCSR_PLS PLS **/
#define Ethernet_MAC_MACLCSR_PLS		(1 << 17)
/** Ethernet_MAC_MACLCSR_LPIEN LPIEN **/
#define Ethernet_MAC_MACLCSR_LPIEN		(1 << 16)
/** Ethernet_MAC_MACLCSR_RLPIST RLPIST **/
#define Ethernet_MAC_MACLCSR_RLPIST		(1 << 9)
/** Ethernet_MAC_MACLCSR_TLPIST TLPIST **/
#define Ethernet_MAC_MACLCSR_TLPIST		(1 << 8)
/** Ethernet_MAC_MACLCSR_RLPIEX RLPIEX **/
#define Ethernet_MAC_MACLCSR_RLPIEX		(1 << 3)
/** Ethernet_MAC_MACLCSR_RLPIEN RLPIEN **/
#define Ethernet_MAC_MACLCSR_RLPIEN		(1 << 2)
/** Ethernet_MAC_MACLCSR_TLPIEX TLPIEX **/
#define Ethernet_MAC_MACLCSR_TLPIEX		(1 << 1)
/** Ethernet_MAC_MACLCSR_TLPIEN TLPIEN **/
#define Ethernet_MAC_MACLCSR_TLPIEN		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macltcr MACLTCR LPI timers control register
@{*/


#define Ethernet_MAC_MACLTCR_LST_SHIFT		16
#define Ethernet_MAC_MACLTCR_LST_MASK		0x3ff
/** @defgroup ethernet_mac_macltcr_lst LST LST
@{*/
/**@}*/


#define Ethernet_MAC_MACLTCR_TWT_SHIFT		0
#define Ethernet_MAC_MACLTCR_TWT_MASK		0xffff
/** @defgroup ethernet_mac_macltcr_twt TWT TWT
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macletr MACLETR LPI entry timer register
@{*/


#define Ethernet_MAC_MACLETR_LPIET_SHIFT		0
#define Ethernet_MAC_MACLETR_LPIET_MASK		0x1ffff
/** @defgroup ethernet_mac_macletr_lpiet LPIET LPIET
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mac1ustcr MAC1USTCR 1-microsecond-tick counter register
@{*/


#define Ethernet_MAC_MAC1USTCR_TIC_1US_CNTR_SHIFT		0
#define Ethernet_MAC_MAC1USTCR_TIC_1US_CNTR_MASK		0xfff
/** @defgroup ethernet_mac_mac1ustcr_tic_1us_cntr TIC1USCNTR TIC_1US_CNTR
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macvr MACVR Version register
@{*/


#define Ethernet_MAC_MACVR_USERVER_SHIFT		8
#define Ethernet_MAC_MACVR_USERVER_MASK		0xff
/** @defgroup ethernet_mac_macvr_userver USERVER USERVER
@{*/
/**@}*/


#define Ethernet_MAC_MACVR_SNPSVER_SHIFT		0
#define Ethernet_MAC_MACVR_SNPSVER_MASK		0xff
/** @defgroup ethernet_mac_macvr_snpsver SNPSVER SNPSVER
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macdr MACDR Debug register
@{*/


#define Ethernet_MAC_MACDR_TFCSTS_SHIFT		17
#define Ethernet_MAC_MACDR_TFCSTS_MASK		0x03
/** @defgroup ethernet_mac_macdr_tfcsts TFCSTS TFCSTS
@{*/
/**@}*/

/** Ethernet_MAC_MACDR_TPESTS TPESTS **/
#define Ethernet_MAC_MACDR_TPESTS		(1 << 16)

#define Ethernet_MAC_MACDR_RFCFCSTS_SHIFT		1
#define Ethernet_MAC_MACDR_RFCFCSTS_MASK		0x03
/** @defgroup ethernet_mac_macdr_rfcfcsts RFCFCSTS RFCFCSTS
@{*/
/**@}*/

/** Ethernet_MAC_MACDR_RPESTS RPESTS **/
#define Ethernet_MAC_MACDR_RPESTS		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_machwf1r MACHWF1R HW feature 1 register
@{*/


#define Ethernet_MAC_MACHWF1R_L3L4FNUM_SHIFT		27
#define Ethernet_MAC_MACHWF1R_L3L4FNUM_MASK		0x0f
/** @defgroup ethernet_mac_machwf1r_l3l4fnum L3L4FNUM L3L4FNUM
@{*/
/**@}*/


#define Ethernet_MAC_MACHWF1R_HASHTBLSZ_SHIFT		24
#define Ethernet_MAC_MACHWF1R_HASHTBLSZ_MASK		0x03
/** @defgroup ethernet_mac_machwf1r_hashtblsz HASHTBLSZ HASHTBLSZ
@{*/
/**@}*/

/** Ethernet_MAC_MACHWF1R_AVSEL AVSEL **/
#define Ethernet_MAC_MACHWF1R_AVSEL		(1 << 20)
/** Ethernet_MAC_MACHWF1R_DBGMEMA DBGMEMA **/
#define Ethernet_MAC_MACHWF1R_DBGMEMA		(1 << 19)
/** Ethernet_MAC_MACHWF1R_TSOEN TSOEN **/
#define Ethernet_MAC_MACHWF1R_TSOEN		(1 << 18)
/** Ethernet_MAC_MACHWF1R_SPHEN SPHEN **/
#define Ethernet_MAC_MACHWF1R_SPHEN		(1 << 17)
/** Ethernet_MAC_MACHWF1R_DCBEN DCBEN **/
#define Ethernet_MAC_MACHWF1R_DCBEN		(1 << 16)
/** Ethernet_MAC_MACHWF1R_ADVTHWORD ADVTHWORD **/
#define Ethernet_MAC_MACHWF1R_ADVTHWORD		(1 << 13)
/** Ethernet_MAC_MACHWF1R_PTOEN PTOEN **/
#define Ethernet_MAC_MACHWF1R_PTOEN		(1 << 12)
/** Ethernet_MAC_MACHWF1R_OSTEN OSTEN **/
#define Ethernet_MAC_MACHWF1R_OSTEN		(1 << 11)

#define Ethernet_MAC_MACHWF1R_TXFIFOSIZE_SHIFT		6
#define Ethernet_MAC_MACHWF1R_TXFIFOSIZE_MASK		0x1f
/** @defgroup ethernet_mac_machwf1r_txfifosize TXFIFOSIZE TXFIFOSIZE
@{*/
/**@}*/


#define Ethernet_MAC_MACHWF1R_RXFIFOSIZE_SHIFT		0
#define Ethernet_MAC_MACHWF1R_RXFIFOSIZE_MASK		0x1f
/** @defgroup ethernet_mac_machwf1r_rxfifosize RXFIFOSIZE RXFIFOSIZE
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_machwf2r MACHWF2R HW feature 2 register
@{*/


#define Ethernet_MAC_MACHWF2R_AUXSNAPNUM_SHIFT		28
#define Ethernet_MAC_MACHWF2R_AUXSNAPNUM_MASK		0x07
/** @defgroup ethernet_mac_machwf2r_auxsnapnum AUXSNAPNUM AUXSNAPNUM
@{*/
/**@}*/


#define Ethernet_MAC_MACHWF2R_PPSOUTNUM_SHIFT		24
#define Ethernet_MAC_MACHWF2R_PPSOUTNUM_MASK		0x07
/** @defgroup ethernet_mac_machwf2r_ppsoutnum PPSOUTNUM PPSOUTNUM
@{*/
/**@}*/


#define Ethernet_MAC_MACHWF2R_TXCHCNT_SHIFT		18
#define Ethernet_MAC_MACHWF2R_TXCHCNT_MASK		0x0f
/** @defgroup ethernet_mac_machwf2r_txchcnt TXCHCNT TXCHCNT
@{*/
/**@}*/


#define Ethernet_MAC_MACHWF2R_RXCHCNT_SHIFT		12
#define Ethernet_MAC_MACHWF2R_RXCHCNT_MASK		0x0f
/** @defgroup ethernet_mac_machwf2r_rxchcnt RXCHCNT RXCHCNT
@{*/
/**@}*/


#define Ethernet_MAC_MACHWF2R_TXQCNT_SHIFT		6
#define Ethernet_MAC_MACHWF2R_TXQCNT_MASK		0x0f
/** @defgroup ethernet_mac_machwf2r_txqcnt TXQCNT TXQCNT
@{*/
/**@}*/


#define Ethernet_MAC_MACHWF2R_RXQCNT_SHIFT		0
#define Ethernet_MAC_MACHWF2R_RXQCNT_MASK		0x0f
/** @defgroup ethernet_mac_machwf2r_rxqcnt RXQCNT RXQCNT
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macmdioar MACMDIOAR MDIO address register
@{*/

/** Ethernet_MAC_MACMDIOAR_PSE PSE **/
#define Ethernet_MAC_MACMDIOAR_PSE		(1 << 27)
/** Ethernet_MAC_MACMDIOAR_BTB BTB **/
#define Ethernet_MAC_MACMDIOAR_BTB		(1 << 26)

#define Ethernet_MAC_MACMDIOAR_PA_SHIFT		21
#define Ethernet_MAC_MACMDIOAR_PA_MASK		0x1f
/** @defgroup ethernet_mac_macmdioar_pa PA PA
@{*/
/**@}*/


#define Ethernet_MAC_MACMDIOAR_RDA_SHIFT		16
#define Ethernet_MAC_MACMDIOAR_RDA_MASK		0x1f
/** @defgroup ethernet_mac_macmdioar_rda RDA RDA
@{*/
/**@}*/


#define Ethernet_MAC_MACMDIOAR_NTC_SHIFT		12
#define Ethernet_MAC_MACMDIOAR_NTC_MASK		0x07
/** @defgroup ethernet_mac_macmdioar_ntc NTC NTC
@{*/
/**@}*/


#define Ethernet_MAC_MACMDIOAR_CR_SHIFT		8
#define Ethernet_MAC_MACMDIOAR_CR_MASK		0x0f
/** @defgroup ethernet_mac_macmdioar_cr CR CR
@{*/
/**@}*/

/** Ethernet_MAC_MACMDIOAR_SKAP SKAP **/
#define Ethernet_MAC_MACMDIOAR_SKAP		(1 << 4)

#define Ethernet_MAC_MACMDIOAR_GOC_SHIFT		2
#define Ethernet_MAC_MACMDIOAR_GOC_MASK		0x03
/** @defgroup ethernet_mac_macmdioar_goc GOC GOC
@{*/
/**@}*/

/** Ethernet_MAC_MACMDIOAR_C45E C45E **/
#define Ethernet_MAC_MACMDIOAR_C45E		(1 << 1)
/** Ethernet_MAC_MACMDIOAR_MB MB **/
#define Ethernet_MAC_MACMDIOAR_MB		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macmdiodr MACMDIODR MDIO data register
@{*/


#define Ethernet_MAC_MACMDIODR_RA_SHIFT		16
#define Ethernet_MAC_MACMDIODR_RA_MASK		0xffff
/** @defgroup ethernet_mac_macmdiodr_ra RA RA
@{*/
/**@}*/


#define Ethernet_MAC_MACMDIODR_MD_SHIFT		0
#define Ethernet_MAC_MACMDIODR_MD_MASK		0xffff
/** @defgroup ethernet_mac_macmdiodr_md MD MD
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca0hr MACA0HR Address 0 high register
@{*/

/** Ethernet_MAC_MACA0HR_AE AE **/
#define Ethernet_MAC_MACA0HR_AE		(1 << 31)

#define Ethernet_MAC_MACA0HR_ADDRHI_SHIFT		0
#define Ethernet_MAC_MACA0HR_ADDRHI_MASK		0xffff
/** @defgroup ethernet_mac_maca0hr_addrhi ADDRHI ADDRHI
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca0lr MACA0LR Address 0 low register
@{*/


#define Ethernet_MAC_MACA0LR_ADDRLO_SHIFT		0
#define Ethernet_MAC_MACA0LR_ADDRLO_MASK		0xffffffff
/** @defgroup ethernet_mac_maca0lr_addrlo ADDRLO ADDRLO
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca1hr MACA1HR Address 1 high register
@{*/

/** Ethernet_MAC_MACA1HR_AE AE **/
#define Ethernet_MAC_MACA1HR_AE		(1 << 31)
/** Ethernet_MAC_MACA1HR_SA SA **/
#define Ethernet_MAC_MACA1HR_SA		(1 << 30)

#define Ethernet_MAC_MACA1HR_MBC_SHIFT		24
#define Ethernet_MAC_MACA1HR_MBC_MASK		0x3f
/** @defgroup ethernet_mac_maca1hr_mbc MBC MBC
@{*/
/**@}*/


#define Ethernet_MAC_MACA1HR_ADDRHI_SHIFT		0
#define Ethernet_MAC_MACA1HR_ADDRHI_MASK		0xffff
/** @defgroup ethernet_mac_maca1hr_addrhi ADDRHI ADDRHI
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca1lr MACA1LR Address 1 low register
@{*/


#define Ethernet_MAC_MACA1LR_ADDRLO_SHIFT		0
#define Ethernet_MAC_MACA1LR_ADDRLO_MASK		0xffffffff
/** @defgroup ethernet_mac_maca1lr_addrlo ADDRLO ADDRLO
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca2hr MACA2HR Address 2 high register
@{*/

/** Ethernet_MAC_MACA2HR_AE AE **/
#define Ethernet_MAC_MACA2HR_AE		(1 << 31)
/** Ethernet_MAC_MACA2HR_SA SA **/
#define Ethernet_MAC_MACA2HR_SA		(1 << 30)

#define Ethernet_MAC_MACA2HR_MBC_SHIFT		24
#define Ethernet_MAC_MACA2HR_MBC_MASK		0x3f
/** @defgroup ethernet_mac_maca2hr_mbc MBC MBC
@{*/
/**@}*/


#define Ethernet_MAC_MACA2HR_ADDRHI_SHIFT		0
#define Ethernet_MAC_MACA2HR_ADDRHI_MASK		0xffff
/** @defgroup ethernet_mac_maca2hr_addrhi ADDRHI ADDRHI
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca2lr MACA2LR Address 2 low register
@{*/


#define Ethernet_MAC_MACA2LR_ADDRLO_SHIFT		0
#define Ethernet_MAC_MACA2LR_ADDRLO_MASK		0xffffffff
/** @defgroup ethernet_mac_maca2lr_addrlo ADDRLO ADDRLO
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca3hr MACA3HR Address 3 high register
@{*/

/** Ethernet_MAC_MACA3HR_AE AE **/
#define Ethernet_MAC_MACA3HR_AE		(1 << 31)
/** Ethernet_MAC_MACA3HR_SA SA **/
#define Ethernet_MAC_MACA3HR_SA		(1 << 30)

#define Ethernet_MAC_MACA3HR_MBC_SHIFT		24
#define Ethernet_MAC_MACA3HR_MBC_MASK		0x3f
/** @defgroup ethernet_mac_maca3hr_mbc MBC MBC
@{*/
/**@}*/


#define Ethernet_MAC_MACA3HR_ADDRHI_SHIFT		0
#define Ethernet_MAC_MACA3HR_ADDRHI_MASK		0xffff
/** @defgroup ethernet_mac_maca3hr_addrhi ADDRHI ADDRHI
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca3lr MACA3LR Address 3 low register
@{*/


#define Ethernet_MAC_MACA3LR_ADDRLO_SHIFT		0
#define Ethernet_MAC_MACA3LR_ADDRLO_MASK		0xffffffff
/** @defgroup ethernet_mac_maca3lr_addrlo ADDRLO ADDRLO
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mmc_control MMCCONTROL MMC control register
@{*/

/** Ethernet_MAC_MMC_CONTROL_UCDBC UCDBC **/
#define Ethernet_MAC_MMC_CONTROL_UCDBC		(1 << 8)
/** Ethernet_MAC_MMC_CONTROL_CNTPRSTLVL CNTPRSTLVL **/
#define Ethernet_MAC_MMC_CONTROL_CNTPRSTLVL		(1 << 5)
/** Ethernet_MAC_MMC_CONTROL_CNTPRST CNTPRST **/
#define Ethernet_MAC_MMC_CONTROL_CNTPRST		(1 << 4)
/** Ethernet_MAC_MMC_CONTROL_CNTFREEZ CNTFREEZ **/
#define Ethernet_MAC_MMC_CONTROL_CNTFREEZ		(1 << 3)
/** Ethernet_MAC_MMC_CONTROL_RSTONRD RSTONRD **/
#define Ethernet_MAC_MMC_CONTROL_RSTONRD		(1 << 2)
/** Ethernet_MAC_MMC_CONTROL_CNTSTOPRO CNTSTOPRO **/
#define Ethernet_MAC_MMC_CONTROL_CNTSTOPRO		(1 << 1)
/** Ethernet_MAC_MMC_CONTROL_CNTRST CNTRST **/
#define Ethernet_MAC_MMC_CONTROL_CNTRST		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_mmc_rx_interrupt MMCRXINTERRUPT MMC Rx interrupt register
@{*/

/** Ethernet_MAC_MMC_RX_INTERRUPT_RXLPITRCIS RXLPITRCIS **/
#define Ethernet_MAC_MMC_RX_INTERRUPT_RXLPITRCIS		(1 << 27)
/** Ethernet_MAC_MMC_RX_INTERRUPT_RXLPIUSCIS RXLPIUSCIS **/
#define Ethernet_MAC_MMC_RX_INTERRUPT_RXLPIUSCIS		(1 << 26)
/** Ethernet_MAC_MMC_RX_INTERRUPT_RXUCGPIS RXUCGPIS **/
#define Ethernet_MAC_MMC_RX_INTERRUPT_RXUCGPIS		(1 << 17)
/** Ethernet_MAC_MMC_RX_INTERRUPT_RXALGNERPIS RXALGNERPIS **/
#define Ethernet_MAC_MMC_RX_INTERRUPT_RXALGNERPIS		(1 << 6)
/** Ethernet_MAC_MMC_RX_INTERRUPT_RXCRCERPIS RXCRCERPIS **/
#define Ethernet_MAC_MMC_RX_INTERRUPT_RXCRCERPIS		(1 << 5)

/**@}*/

/** @defgroup ethernet_mac_mmc_tx_interrupt MMCTXINTERRUPT MMC Tx interrupt register
@{*/

/** Ethernet_MAC_MMC_TX_INTERRUPT_TXLPITRCIS TXLPITRCIS **/
#define Ethernet_MAC_MMC_TX_INTERRUPT_TXLPITRCIS		(1 << 27)
/** Ethernet_MAC_MMC_TX_INTERRUPT_TXLPIUSCIS TXLPIUSCIS **/
#define Ethernet_MAC_MMC_TX_INTERRUPT_TXLPIUSCIS		(1 << 26)
/** Ethernet_MAC_MMC_TX_INTERRUPT_TXGPKTIS TXGPKTIS **/
#define Ethernet_MAC_MMC_TX_INTERRUPT_TXGPKTIS		(1 << 21)
/** Ethernet_MAC_MMC_TX_INTERRUPT_TXMCOLGPIS TXMCOLGPIS **/
#define Ethernet_MAC_MMC_TX_INTERRUPT_TXMCOLGPIS		(1 << 15)
/** Ethernet_MAC_MMC_TX_INTERRUPT_TXSCOLGPIS TXSCOLGPIS **/
#define Ethernet_MAC_MMC_TX_INTERRUPT_TXSCOLGPIS		(1 << 14)

/**@}*/

/** @defgroup ethernet_mac_mmc_rx_interrupt_mask MMCRXINTERRUPTMASK MMC Rx interrupt mask register
@{*/

/** Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXLPITRCIM RXLPITRCIM **/
#define Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXLPITRCIM		(1 << 27)
/** Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXLPIUSCIM RXLPIUSCIM **/
#define Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXLPIUSCIM		(1 << 26)
/** Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXUCGPIM RXUCGPIM **/
#define Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXUCGPIM		(1 << 17)
/** Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXALGNERPIM RXALGNERPIM **/
#define Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXALGNERPIM		(1 << 6)
/** Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXCRCERPIM RXCRCERPIM **/
#define Ethernet_MAC_MMC_RX_INTERRUPT_MASK_RXCRCERPIM		(1 << 5)

/**@}*/

/** @defgroup ethernet_mac_mmc_tx_interrupt_mask MMCTXINTERRUPTMASK MMC Tx interrupt mask register
@{*/

/** Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXLPITRCIM TXLPITRCIM **/
#define Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXLPITRCIM		(1 << 27)
/** Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXLPIUSCIM TXLPIUSCIM **/
#define Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXLPIUSCIM		(1 << 26)
/** Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXGPKTIM TXGPKTIM **/
#define Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXGPKTIM		(1 << 21)
/** Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXMCOLGPIM TXMCOLGPIM **/
#define Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXMCOLGPIM		(1 << 15)
/** Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXSCOLGPIM TXSCOLGPIM **/
#define Ethernet_MAC_MMC_TX_INTERRUPT_MASK_TXSCOLGPIM		(1 << 14)

/**@}*/

/** @defgroup ethernet_mac_tx_single_collision_good_packets TXSINGLECOLLISIONGOODPACKETS Tx single collision good packets register
@{*/


#define Ethernet_MAC_TX_SINGLE_COLLISION_GOOD_PACKETS_TXSNGLCOLG_SHIFT		0
#define Ethernet_MAC_TX_SINGLE_COLLISION_GOOD_PACKETS_TXSNGLCOLG_MASK		0xffffffff
/** @defgroup ethernet_mac_tx_single_collision_good_packets_txsnglcolg TXSNGLCOLG TXSNGLCOLG
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_tx_multiple_collision_good_packets TXMULTIPLECOLLISIONGOODPACKETS Tx multiple collision good packets register
@{*/


#define Ethernet_MAC_TX_MULTIPLE_COLLISION_GOOD_PACKETS_TXMULTCOLG_SHIFT		0
#define Ethernet_MAC_TX_MULTIPLE_COLLISION_GOOD_PACKETS_TXMULTCOLG_MASK		0xffffffff
/** @defgroup ethernet_mac_tx_multiple_collision_good_packets_txmultcolg TXMULTCOLG TXMULTCOLG
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_tx_packet_count_good TXPACKETCOUNTGOOD Tx packet count good register
@{*/


#define Ethernet_MAC_TX_PACKET_COUNT_GOOD_TXPKTG_SHIFT		0
#define Ethernet_MAC_TX_PACKET_COUNT_GOOD_TXPKTG_MASK		0xffffffff
/** @defgroup ethernet_mac_tx_packet_count_good_txpktg TXPKTG TXPKTG
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_rx_crc_error_packets RXCRCERRORPACKETS Rx CRC error packets register
@{*/


#define Ethernet_MAC_RX_CRC_ERROR_PACKETS_RXCRCERR_SHIFT		0
#define Ethernet_MAC_RX_CRC_ERROR_PACKETS_RXCRCERR_MASK		0xffffffff
/** @defgroup ethernet_mac_rx_crc_error_packets_rxcrcerr RXCRCERR RXCRCERR
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_rx_alignment_error_packets RXALIGNMENTERRORPACKETS Rx alignment error packets register
@{*/


#define Ethernet_MAC_RX_ALIGNMENT_ERROR_PACKETS_RXALGNERR_SHIFT		0
#define Ethernet_MAC_RX_ALIGNMENT_ERROR_PACKETS_RXALGNERR_MASK		0xffffffff
/** @defgroup ethernet_mac_rx_alignment_error_packets_rxalgnerr RXALGNERR RXALGNERR
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_rx_unicast_packets_good RXUNICASTPACKETSGOOD Rx unicast packets good register
@{*/


#define Ethernet_MAC_RX_UNICAST_PACKETS_GOOD_RXUCASTG_SHIFT		0
#define Ethernet_MAC_RX_UNICAST_PACKETS_GOOD_RXUCASTG_MASK		0xffffffff
/** @defgroup ethernet_mac_rx_unicast_packets_good_rxucastg RXUCASTG RXUCASTG
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_tx_lpi_usec_cntr TXLPIUSECCNTR Tx LPI microsecond timer register
@{*/


#define Ethernet_MAC_TX_LPI_USEC_CNTR_TXLPIUSC_SHIFT		0
#define Ethernet_MAC_TX_LPI_USEC_CNTR_TXLPIUSC_MASK		0xffffffff
/** @defgroup ethernet_mac_tx_lpi_usec_cntr_txlpiusc TXLPIUSC TXLPIUSC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_tx_lpi_tran_cntr TXLPITRANCNTR Tx LPI transition counter register
@{*/


#define Ethernet_MAC_TX_LPI_TRAN_CNTR_TXLPITRC_SHIFT		0
#define Ethernet_MAC_TX_LPI_TRAN_CNTR_TXLPITRC_MASK		0xffffffff
/** @defgroup ethernet_mac_tx_lpi_tran_cntr_txlpitrc TXLPITRC TXLPITRC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_rx_lpi_usec_cntr RXLPIUSECCNTR Rx LPI microsecond counter register
@{*/


#define Ethernet_MAC_RX_LPI_USEC_CNTR_RXLPIUSC_SHIFT		0
#define Ethernet_MAC_RX_LPI_USEC_CNTR_RXLPIUSC_MASK		0xffffffff
/** @defgroup ethernet_mac_rx_lpi_usec_cntr_rxlpiusc RXLPIUSC RXLPIUSC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_rx_lpi_tran_cntr RXLPITRANCNTR Rx LPI transition counter register
@{*/


#define Ethernet_MAC_RX_LPI_TRAN_CNTR_RXLPITRC_SHIFT		0
#define Ethernet_MAC_RX_LPI_TRAN_CNTR_RXLPITRC_MASK		0xffffffff
/** @defgroup ethernet_mac_rx_lpi_tran_cntr_rxlpitrc RXLPITRC RXLPITRC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macl3l4c0r MACL3L4C0R L3 and L4 control 0 register
@{*/

/** Ethernet_MAC_MACL3L4C0R_L4DPIM0 L4DPIM0 **/
#define Ethernet_MAC_MACL3L4C0R_L4DPIM0		(1 << 21)
/** Ethernet_MAC_MACL3L4C0R_L4DPM0 L4DPM0 **/
#define Ethernet_MAC_MACL3L4C0R_L4DPM0		(1 << 20)
/** Ethernet_MAC_MACL3L4C0R_L4SPIM0 L4SPIM0 **/
#define Ethernet_MAC_MACL3L4C0R_L4SPIM0		(1 << 19)
/** Ethernet_MAC_MACL3L4C0R_L4SPM0 L4SPM0 **/
#define Ethernet_MAC_MACL3L4C0R_L4SPM0		(1 << 18)
/** Ethernet_MAC_MACL3L4C0R_L4PEN0 L4PEN0 **/
#define Ethernet_MAC_MACL3L4C0R_L4PEN0		(1 << 16)

#define Ethernet_MAC_MACL3L4C0R_L3HDBM0_SHIFT		11
#define Ethernet_MAC_MACL3L4C0R_L3HDBM0_MASK		0x1f
/** @defgroup ethernet_mac_macl3l4c0r_l3hdbm0 L3HDBM0 L3HDBM0
@{*/
/**@}*/


#define Ethernet_MAC_MACL3L4C0R_L3HSBM0_SHIFT		6
#define Ethernet_MAC_MACL3L4C0R_L3HSBM0_MASK		0x1f
/** @defgroup ethernet_mac_macl3l4c0r_l3hsbm0 L3HSBM0 L3HSBM0
@{*/
/**@}*/

/** Ethernet_MAC_MACL3L4C0R_L3DAIM0 L3DAIM0 **/
#define Ethernet_MAC_MACL3L4C0R_L3DAIM0		(1 << 5)
/** Ethernet_MAC_MACL3L4C0R_L3DAM0 L3DAM0 **/
#define Ethernet_MAC_MACL3L4C0R_L3DAM0		(1 << 4)
/** Ethernet_MAC_MACL3L4C0R_L3SAIM0 L3SAIM0 **/
#define Ethernet_MAC_MACL3L4C0R_L3SAIM0		(1 << 3)
/** Ethernet_MAC_MACL3L4C0R_L3SAM0 L3SAM0 **/
#define Ethernet_MAC_MACL3L4C0R_L3SAM0		(1 << 2)
/** Ethernet_MAC_MACL3L4C0R_L3PEN0 L3PEN0 **/
#define Ethernet_MAC_MACL3L4C0R_L3PEN0		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macl4a0r MACL4A0R Layer4 address filter 0 register
@{*/


#define Ethernet_MAC_MACL4A0R_L4DP0_SHIFT		16
#define Ethernet_MAC_MACL4A0R_L4DP0_MASK		0xffff
/** @defgroup ethernet_mac_macl4a0r_l4dp0 L4DP0 L4DP0
@{*/
/**@}*/


#define Ethernet_MAC_MACL4A0R_L4SP0_SHIFT		0
#define Ethernet_MAC_MACL4A0R_L4SP0_MASK		0xffff
/** @defgroup ethernet_mac_macl4a0r_l4sp0 L4SP0 L4SP0
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macl3a00r MACL3A00R MACL3A00R
@{*/


#define Ethernet_MAC_MACL3A00R_L3A00_SHIFT		0
#define Ethernet_MAC_MACL3A00R_L3A00_MASK		0xffffffff
/** @defgroup ethernet_mac_macl3a00r_l3a00 L3A00 L3A00
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macl3a10r MACL3A10R Layer3 address 1 filter 0 register
@{*/


#define Ethernet_MAC_MACL3A10R_L3A10_SHIFT		0
#define Ethernet_MAC_MACL3A10R_L3A10_MASK		0xffffffff
/** @defgroup ethernet_mac_macl3a10r_l3a10 L3A10 L3A10
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macl3a20 MACL3A20 Layer3 Address 2 filter 0 register
@{*/


#define Ethernet_MAC_MACL3A20_L3A20_SHIFT		0
#define Ethernet_MAC_MACL3A20_L3A20_MASK		0xffffffff
/** @defgroup ethernet_mac_macl3a20_l3a20 L3A20 L3A20
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macl3a30 MACL3A30 Layer3 Address 3 filter 0 register
@{*/


#define Ethernet_MAC_MACL3A30_L3A30_SHIFT		0
#define Ethernet_MAC_MACL3A30_L3A30_MASK		0xffffffff
/** @defgroup ethernet_mac_macl3a30_l3a30 L3A30 L3A30
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macl3l4c1r MACL3L4C1R L3 and L4 control 1 register
@{*/

/** Ethernet_MAC_MACL3L4C1R_L4DPIM1 L4DPIM1 **/
#define Ethernet_MAC_MACL3L4C1R_L4DPIM1		(1 << 21)
/** Ethernet_MAC_MACL3L4C1R_L4DPM1 L4DPM1 **/
#define Ethernet_MAC_MACL3L4C1R_L4DPM1		(1 << 20)
/** Ethernet_MAC_MACL3L4C1R_L4SPIM1 L4SPIM1 **/
#define Ethernet_MAC_MACL3L4C1R_L4SPIM1		(1 << 19)
/** Ethernet_MAC_MACL3L4C1R_L4SPM1 L4SPM1 **/
#define Ethernet_MAC_MACL3L4C1R_L4SPM1		(1 << 18)
/** Ethernet_MAC_MACL3L4C1R_L4PEN1 L4PEN1 **/
#define Ethernet_MAC_MACL3L4C1R_L4PEN1		(1 << 16)

#define Ethernet_MAC_MACL3L4C1R_L3HDBM1_SHIFT		11
#define Ethernet_MAC_MACL3L4C1R_L3HDBM1_MASK		0x1f
/** @defgroup ethernet_mac_macl3l4c1r_l3hdbm1 L3HDBM1 L3HDBM1
@{*/
/**@}*/


#define Ethernet_MAC_MACL3L4C1R_L3HSBM1_SHIFT		6
#define Ethernet_MAC_MACL3L4C1R_L3HSBM1_MASK		0x1f
/** @defgroup ethernet_mac_macl3l4c1r_l3hsbm1 L3HSBM1 L3HSBM1
@{*/
/**@}*/

/** Ethernet_MAC_MACL3L4C1R_L3DAIM1 L3DAIM1 **/
#define Ethernet_MAC_MACL3L4C1R_L3DAIM1		(1 << 5)
/** Ethernet_MAC_MACL3L4C1R_L3DAM1 L3DAM1 **/
#define Ethernet_MAC_MACL3L4C1R_L3DAM1		(1 << 4)
/** Ethernet_MAC_MACL3L4C1R_L3SAIM1 L3SAIM1 **/
#define Ethernet_MAC_MACL3L4C1R_L3SAIM1		(1 << 3)
/** Ethernet_MAC_MACL3L4C1R_L3SAM1 L3SAM1 **/
#define Ethernet_MAC_MACL3L4C1R_L3SAM1		(1 << 2)
/** Ethernet_MAC_MACL3L4C1R_L3PEN1 L3PEN1 **/
#define Ethernet_MAC_MACL3L4C1R_L3PEN1		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macl4a1r MACL4A1R Layer 4 address filter 1 register
@{*/


#define Ethernet_MAC_MACL4A1R_L4DP1_SHIFT		16
#define Ethernet_MAC_MACL4A1R_L4DP1_MASK		0xffff
/** @defgroup ethernet_mac_macl4a1r_l4dp1 L4DP1 L4DP1
@{*/
/**@}*/


#define Ethernet_MAC_MACL4A1R_L4SP1_SHIFT		0
#define Ethernet_MAC_MACL4A1R_L4SP1_MASK		0xffff
/** @defgroup ethernet_mac_macl4a1r_l4sp1 L4SP1 L4SP1
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macl3a01r MACL3A01R Layer3 address 0 filter 1 Register
@{*/


#define Ethernet_MAC_MACL3A01R_L3A01_SHIFT		0
#define Ethernet_MAC_MACL3A01R_L3A01_MASK		0xffffffff
/** @defgroup ethernet_mac_macl3a01r_l3a01 L3A01 L3A01
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macl3a11r MACL3A11R Layer3 address 1 filter 1 register
@{*/


#define Ethernet_MAC_MACL3A11R_L3A11_SHIFT		0
#define Ethernet_MAC_MACL3A11R_L3A11_MASK		0xffffffff
/** @defgroup ethernet_mac_macl3a11r_l3a11 L3A11 L3A11
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macl3a21r MACL3A21R Layer3 address 2 filter 1 Register
@{*/


#define Ethernet_MAC_MACL3A21R_L3A21_SHIFT		0
#define Ethernet_MAC_MACL3A21R_L3A21_MASK		0xffffffff
/** @defgroup ethernet_mac_macl3a21r_l3a21 L3A21 L3A21
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macl3a31r MACL3A31R Layer3 address 3 filter 1 register
@{*/


#define Ethernet_MAC_MACL3A31R_L3A31_SHIFT		0
#define Ethernet_MAC_MACL3A31R_L3A31_MASK		0xffffffff
/** @defgroup ethernet_mac_macl3a31r_l3a31 L3A31 L3A31
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macarpar MACARPAR ARP address register
@{*/


#define Ethernet_MAC_MACARPAR_ARPPA_SHIFT		0
#define Ethernet_MAC_MACARPAR_ARPPA_MASK		0xffffffff
/** @defgroup ethernet_mac_macarpar_arppa ARPPA ARPPA
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mactscr MACTSCR Timestamp control Register
@{*/

/** Ethernet_MAC_MACTSCR_TXTSSTSM TXTSSTSM **/
#define Ethernet_MAC_MACTSCR_TXTSSTSM		(1 << 24)
/** Ethernet_MAC_MACTSCR_CSC CSC **/
#define Ethernet_MAC_MACTSCR_CSC		(1 << 19)
/** Ethernet_MAC_MACTSCR_TSENMACADDR TSENMACADDR **/
#define Ethernet_MAC_MACTSCR_TSENMACADDR		(1 << 18)

#define Ethernet_MAC_MACTSCR_SNAPTYPSEL_SHIFT		16
#define Ethernet_MAC_MACTSCR_SNAPTYPSEL_MASK		0x03
/** @defgroup ethernet_mac_mactscr_snaptypsel SNAPTYPSEL SNAPTYPSEL
@{*/
/**@}*/

/** Ethernet_MAC_MACTSCR_TSMSTRENA TSMSTRENA **/
#define Ethernet_MAC_MACTSCR_TSMSTRENA		(1 << 15)
/** Ethernet_MAC_MACTSCR_TSEVNTENA TSEVNTENA **/
#define Ethernet_MAC_MACTSCR_TSEVNTENA		(1 << 14)
/** Ethernet_MAC_MACTSCR_TSIPV4ENA TSIPV4ENA **/
#define Ethernet_MAC_MACTSCR_TSIPV4ENA		(1 << 13)
/** Ethernet_MAC_MACTSCR_TSIPV6ENA TSIPV6ENA **/
#define Ethernet_MAC_MACTSCR_TSIPV6ENA		(1 << 12)
/** Ethernet_MAC_MACTSCR_TSIPENA TSIPENA **/
#define Ethernet_MAC_MACTSCR_TSIPENA		(1 << 11)
/** Ethernet_MAC_MACTSCR_TSVER2ENA TSVER2ENA **/
#define Ethernet_MAC_MACTSCR_TSVER2ENA		(1 << 10)
/** Ethernet_MAC_MACTSCR_TSCTRLSSR TSCTRLSSR **/
#define Ethernet_MAC_MACTSCR_TSCTRLSSR		(1 << 9)
/** Ethernet_MAC_MACTSCR_TSENALL TSENALL **/
#define Ethernet_MAC_MACTSCR_TSENALL		(1 << 8)
/** Ethernet_MAC_MACTSCR_TSADDREG TSADDREG **/
#define Ethernet_MAC_MACTSCR_TSADDREG		(1 << 5)
/** Ethernet_MAC_MACTSCR_TSUPDT TSUPDT **/
#define Ethernet_MAC_MACTSCR_TSUPDT		(1 << 3)
/** Ethernet_MAC_MACTSCR_TSINIT TSINIT **/
#define Ethernet_MAC_MACTSCR_TSINIT		(1 << 2)
/** Ethernet_MAC_MACTSCR_TSCFUPDT TSCFUPDT **/
#define Ethernet_MAC_MACTSCR_TSCFUPDT		(1 << 1)
/** Ethernet_MAC_MACTSCR_TSENA TSENA **/
#define Ethernet_MAC_MACTSCR_TSENA		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macssir MACSSIR Sub-second increment register
@{*/


#define Ethernet_MAC_MACSSIR_SSINC_SHIFT		16
#define Ethernet_MAC_MACSSIR_SSINC_MASK		0xff
/** @defgroup ethernet_mac_macssir_ssinc SSINC SSINC
@{*/
/**@}*/


#define Ethernet_MAC_MACSSIR_SNSINC_SHIFT		8
#define Ethernet_MAC_MACSSIR_SNSINC_MASK		0xff
/** @defgroup ethernet_mac_macssir_snsinc SNSINC SNSINC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macstsr MACSTSR System time seconds register
@{*/


#define Ethernet_MAC_MACSTSR_TSS_SHIFT		0
#define Ethernet_MAC_MACSTSR_TSS_MASK		0xffffffff
/** @defgroup ethernet_mac_macstsr_tss TSS TSS
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macstnr MACSTNR System time nanoseconds register
@{*/


#define Ethernet_MAC_MACSTNR_TSSS_SHIFT		0
#define Ethernet_MAC_MACSTNR_TSSS_MASK		0x7fffffff
/** @defgroup ethernet_mac_macstnr_tsss TSSS TSSS
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macstsur MACSTSUR System time seconds update register
@{*/


#define Ethernet_MAC_MACSTSUR_TSS_SHIFT		0
#define Ethernet_MAC_MACSTSUR_TSS_MASK		0xffffffff
/** @defgroup ethernet_mac_macstsur_tss TSS TSS
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macstnur MACSTNUR System time nanoseconds update register
@{*/

/** Ethernet_MAC_MACSTNUR_ADDSUB ADDSUB **/
#define Ethernet_MAC_MACSTNUR_ADDSUB		(1 << 31)

#define Ethernet_MAC_MACSTNUR_TSSS_SHIFT		0
#define Ethernet_MAC_MACSTNUR_TSSS_MASK		0x7fffffff
/** @defgroup ethernet_mac_macstnur_tsss TSSS TSSS
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mactsar MACTSAR Timestamp addend register
@{*/


#define Ethernet_MAC_MACTSAR_TSAR_SHIFT		0
#define Ethernet_MAC_MACTSAR_TSAR_MASK		0xffffffff
/** @defgroup ethernet_mac_mactsar_tsar TSAR TSAR
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mactssr MACTSSR Timestamp status register
@{*/


#define Ethernet_MAC_MACTSSR_ATSNS_SHIFT		25
#define Ethernet_MAC_MACTSSR_ATSNS_MASK		0x1f
/** @defgroup ethernet_mac_mactssr_atsns ATSNS ATSNS
@{*/
/**@}*/

/** Ethernet_MAC_MACTSSR_ATSSTM ATSSTM **/
#define Ethernet_MAC_MACTSSR_ATSSTM		(1 << 24)

#define Ethernet_MAC_MACTSSR_ATSSTN_SHIFT		16
#define Ethernet_MAC_MACTSSR_ATSSTN_MASK		0x0f
/** @defgroup ethernet_mac_mactssr_atsstn ATSSTN ATSSTN
@{*/
/**@}*/

/** Ethernet_MAC_MACTSSR_TXTSSIS TXTSSIS **/
#define Ethernet_MAC_MACTSSR_TXTSSIS		(1 << 15)
/** Ethernet_MAC_MACTSSR_TSTRGTERR0 TSTRGTERR0 **/
#define Ethernet_MAC_MACTSSR_TSTRGTERR0		(1 << 3)
/** Ethernet_MAC_MACTSSR_AUXTSTRIG AUXTSTRIG **/
#define Ethernet_MAC_MACTSSR_AUXTSTRIG		(1 << 2)
/** Ethernet_MAC_MACTSSR_TSTARGT0 TSTARGT0 **/
#define Ethernet_MAC_MACTSSR_TSTARGT0		(1 << 1)
/** Ethernet_MAC_MACTSSR_TSSOVF TSSOVF **/
#define Ethernet_MAC_MACTSSR_TSSOVF		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_mactxtssnr MACTxTSSNR Tx timestamp status nanoseconds register
@{*/

/** Ethernet_MAC_MACTxTSSNR_TXTSSMIS TXTSSMIS **/
#define Ethernet_MAC_MACTxTSSNR_TXTSSMIS		(1 << 31)

#define Ethernet_MAC_MACTxTSSNR_TXTSSLO_SHIFT		0
#define Ethernet_MAC_MACTxTSSNR_TXTSSLO_MASK		0x7fffffff
/** @defgroup ethernet_mac_mactxtssnr_txtsslo TXTSSLO TXTSSLO
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mactxtsssr MACTxTSSSR Tx timestamp status seconds register
@{*/


#define Ethernet_MAC_MACTxTSSSR_TXTSSHI_SHIFT		0
#define Ethernet_MAC_MACTxTSSSR_TXTSSHI_MASK		0xffffffff
/** @defgroup ethernet_mac_mactxtsssr_txtsshi TXTSSHI TXTSSHI
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macacr MACACR Auxiliary control register
@{*/

/** Ethernet_MAC_MACACR_ATSEN3 ATSEN3 **/
#define Ethernet_MAC_MACACR_ATSEN3		(1 << 7)
/** Ethernet_MAC_MACACR_ATSEN2 ATSEN2 **/
#define Ethernet_MAC_MACACR_ATSEN2		(1 << 6)
/** Ethernet_MAC_MACACR_ATSEN1 ATSEN1 **/
#define Ethernet_MAC_MACACR_ATSEN1		(1 << 5)
/** Ethernet_MAC_MACACR_ATSEN0 ATSEN0 **/
#define Ethernet_MAC_MACACR_ATSEN0		(1 << 4)
/** Ethernet_MAC_MACACR_ATSFC ATSFC **/
#define Ethernet_MAC_MACACR_ATSFC		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macatsnr MACATSNR Auxiliary timestamp nanoseconds register
@{*/


#define Ethernet_MAC_MACATSNR_AUXTSLO_SHIFT		0
#define Ethernet_MAC_MACATSNR_AUXTSLO_MASK		0x7fffffff
/** @defgroup ethernet_mac_macatsnr_auxtslo AUXTSLO AUXTSLO
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macatssr MACATSSR Auxiliary timestamp seconds register
@{*/


#define Ethernet_MAC_MACATSSR_AUXTSHI_SHIFT		0
#define Ethernet_MAC_MACATSSR_AUXTSHI_MASK		0xffffffff
/** @defgroup ethernet_mac_macatssr_auxtshi AUXTSHI AUXTSHI
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mactsiacr MACTSIACR Timestamp Ingress asymmetric correction register
@{*/


#define Ethernet_MAC_MACTSIACR_OSTIAC_SHIFT		0
#define Ethernet_MAC_MACTSIACR_OSTIAC_MASK		0xffffffff
/** @defgroup ethernet_mac_mactsiacr_ostiac OSTIAC OSTIAC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mactseacr MACTSEACR Timestamp Egress asymmetric correction register
@{*/


#define Ethernet_MAC_MACTSEACR_OSTEAC_SHIFT		0
#define Ethernet_MAC_MACTSEACR_OSTEAC_MASK		0xffffffff
/** @defgroup ethernet_mac_mactseacr_osteac OSTEAC OSTEAC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mactsicnr MACTSICNR Timestamp Ingress correction nanosecond register
@{*/


#define Ethernet_MAC_MACTSICNR_TSIC_SHIFT		0
#define Ethernet_MAC_MACTSICNR_TSIC_MASK		0xffffffff
/** @defgroup ethernet_mac_mactsicnr_tsic TSIC TSIC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mactsecnr MACTSECNR Timestamp Egress correction nanosecond register
@{*/


#define Ethernet_MAC_MACTSECNR_TSEC_SHIFT		0
#define Ethernet_MAC_MACTSECNR_TSEC_MASK		0xffffffff
/** @defgroup ethernet_mac_mactsecnr_tsec TSEC TSEC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macppscr MACPPSCR PPS control register
@{*/


#define Ethernet_MAC_MACPPSCR_TRGTMODSEL0_SHIFT		5
#define Ethernet_MAC_MACPPSCR_TRGTMODSEL0_MASK		0x03
/** @defgroup ethernet_mac_macppscr_trgtmodsel0 TRGTMODSEL0 TRGTMODSEL0
@{*/
/**@}*/

/** Ethernet_MAC_MACPPSCR_PPSEN0 PPSEN0 **/
#define Ethernet_MAC_MACPPSCR_PPSEN0		(1 << 4)

#define Ethernet_MAC_MACPPSCR_PPSCTRL_SHIFT		0
#define Ethernet_MAC_MACPPSCR_PPSCTRL_MASK		0x0f
/** @defgroup ethernet_mac_macppscr_ppsctrl PPSCTRL PPSCTRL
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macppsttsr MACPPSTTSR PPS target time seconds register
@{*/


#define Ethernet_MAC_MACPPSTTSR_TSTRH0_SHIFT		0
#define Ethernet_MAC_MACPPSTTSR_TSTRH0_MASK		0x7fffffff
/** @defgroup ethernet_mac_macppsttsr_tstrh0 TSTRH0 TSTRH0
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macppsttnr MACPPSTTNR PPS target time nanoseconds register
@{*/

/** Ethernet_MAC_MACPPSTTNR_TRGTBUSY0 TRGTBUSY0 **/
#define Ethernet_MAC_MACPPSTTNR_TRGTBUSY0		(1 << 31)

#define Ethernet_MAC_MACPPSTTNR_TTSL0_SHIFT		0
#define Ethernet_MAC_MACPPSTTNR_TTSL0_MASK		0x7fffffff
/** @defgroup ethernet_mac_macppsttnr_ttsl0 TTSL0 TTSL0
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macppsir MACPPSIR PPS interval register
@{*/


#define Ethernet_MAC_MACPPSIR_PPSINT0_SHIFT		0
#define Ethernet_MAC_MACPPSIR_PPSINT0_MASK		0xffffffff
/** @defgroup ethernet_mac_macppsir_ppsint0 PPSINT0 PPSINT0
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macppswr MACPPSWR PPS width register
@{*/


#define Ethernet_MAC_MACPPSWR_PPSWIDTH0_SHIFT		0
#define Ethernet_MAC_MACPPSWR_PPSWIDTH0_MASK		0xffffffff
/** @defgroup ethernet_mac_macppswr_ppswidth0 PPSWIDTH0 PPSWIDTH0
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macpocr MACPOCR PTP Offload control register
@{*/


#define Ethernet_MAC_MACPOCR_DN_SHIFT		8
#define Ethernet_MAC_MACPOCR_DN_MASK		0xff
/** @defgroup ethernet_mac_macpocr_dn DN DN
@{*/
/**@}*/

/** Ethernet_MAC_MACPOCR_DRRDIS DRRDIS **/
#define Ethernet_MAC_MACPOCR_DRRDIS		(1 << 6)
/** Ethernet_MAC_MACPOCR_APDREQTRIG APDREQTRIG **/
#define Ethernet_MAC_MACPOCR_APDREQTRIG		(1 << 5)
/** Ethernet_MAC_MACPOCR_ASYNCTRIG ASYNCTRIG **/
#define Ethernet_MAC_MACPOCR_ASYNCTRIG		(1 << 4)
/** Ethernet_MAC_MACPOCR_APDREQEN APDREQEN **/
#define Ethernet_MAC_MACPOCR_APDREQEN		(1 << 2)
/** Ethernet_MAC_MACPOCR_ASYNCEN ASYNCEN **/
#define Ethernet_MAC_MACPOCR_ASYNCEN		(1 << 1)
/** Ethernet_MAC_MACPOCR_PTOEN PTOEN **/
#define Ethernet_MAC_MACPOCR_PTOEN		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macspi0r MACSPI0R PTP Source Port Identity 0 Register
@{*/


#define Ethernet_MAC_MACSPI0R_SPI0_SHIFT		0
#define Ethernet_MAC_MACSPI0R_SPI0_MASK		0xffffffff
/** @defgroup ethernet_mac_macspi0r_spi0 SPI0 SPI0
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macspi1r MACSPI1R PTP Source port identity 1 register
@{*/


#define Ethernet_MAC_MACSPI1R_SPI1_SHIFT		0
#define Ethernet_MAC_MACSPI1R_SPI1_MASK		0xffffffff
/** @defgroup ethernet_mac_macspi1r_spi1 SPI1 SPI1
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macspi2r MACSPI2R PTP Source port identity 2 register
@{*/


#define Ethernet_MAC_MACSPI2R_SPI2_SHIFT		0
#define Ethernet_MAC_MACSPI2R_SPI2_MASK		0xffff
/** @defgroup ethernet_mac_macspi2r_spi2 SPI2 SPI2
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maclmir MACLMIR Log message interval register
@{*/


#define Ethernet_MAC_MACLMIR_LMPDRI_SHIFT		24
#define Ethernet_MAC_MACLMIR_LMPDRI_MASK		0xff
/** @defgroup ethernet_mac_maclmir_lmpdri LMPDRI LMPDRI
@{*/
/**@}*/


#define Ethernet_MAC_MACLMIR_DRSYNCR_SHIFT		8
#define Ethernet_MAC_MACLMIR_DRSYNCR_MASK		0x07
/** @defgroup ethernet_mac_maclmir_drsyncr DRSYNCR DRSYNCR
@{*/
/**@}*/


#define Ethernet_MAC_MACLMIR_LSI_SHIFT		0
#define Ethernet_MAC_MACLMIR_LSI_MASK		0xff
/** @defgroup ethernet_mac_maclmir_lsi LSI LSI
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mtlomr MTLOMR Operating mode Register
@{*/

/** Ethernet_MAC_MTLOMR_CNTCLR CNTCLR **/
#define Ethernet_MAC_MTLOMR_CNTCLR		(1 << 9)
/** Ethernet_MAC_MTLOMR_CNTPRST CNTPRST **/
#define Ethernet_MAC_MTLOMR_CNTPRST		(1 << 8)
/** Ethernet_MAC_MTLOMR_DTXSTS DTXSTS **/
#define Ethernet_MAC_MTLOMR_DTXSTS		(1 << 1)

/**@}*/

/** @defgroup ethernet_mac_mtlisr MTLISR Interrupt status Register
@{*/

/** Ethernet_MAC_MTLISR_Q0IS Queue interrupt status **/
#define Ethernet_MAC_MTLISR_Q0IS		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_mtltxqomr MTLTxQOMR Tx queue operating mode Register
@{*/


#define Ethernet_MAC_MTLTxQOMR_TQS_SHIFT		16
#define Ethernet_MAC_MTLTxQOMR_TQS_MASK		0x1ff
/** @defgroup ethernet_mac_mtltxqomr_tqs TQS Transmit Queue Size
@{*/
/**@}*/


#define Ethernet_MAC_MTLTxQOMR_TTC_SHIFT		4
#define Ethernet_MAC_MTLTxQOMR_TTC_MASK		0x07
/** @defgroup ethernet_mac_mtltxqomr_ttc TTC Transmit Threshold Control
@{*/
/**@}*/


#define Ethernet_MAC_MTLTxQOMR_TXQEN_SHIFT		2
#define Ethernet_MAC_MTLTxQOMR_TXQEN_MASK		0x03
/** @defgroup ethernet_mac_mtltxqomr_txqen TXQEN Transmit Queue Enable
@{*/
/**@}*/

/** Ethernet_MAC_MTLTxQOMR_TSF Transmit Store and Forward **/
#define Ethernet_MAC_MTLTxQOMR_TSF		(1 << 1)
/** Ethernet_MAC_MTLTxQOMR_FTQ Flush Transmit Queue **/
#define Ethernet_MAC_MTLTxQOMR_FTQ		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_mtltxqur MTLTxQUR Tx queue underflow register
@{*/

/** Ethernet_MAC_MTLTxQUR_UFCNTOVF UFCNTOVF **/
#define Ethernet_MAC_MTLTxQUR_UFCNTOVF		(1 << 11)

#define Ethernet_MAC_MTLTxQUR_UFFRMCNT_SHIFT		0
#define Ethernet_MAC_MTLTxQUR_UFFRMCNT_MASK		0x7ff
/** @defgroup ethernet_mac_mtltxqur_uffrmcnt UFFRMCNT Underflow Packet Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mtltxqdr MTLTxQDR Tx queue debug Register
@{*/


#define Ethernet_MAC_MTLTxQDR_STXSTSF_SHIFT		20
#define Ethernet_MAC_MTLTxQDR_STXSTSF_MASK		0x07
/** @defgroup ethernet_mac_mtltxqdr_stxstsf STXSTSF STXSTSF
@{*/
/**@}*/


#define Ethernet_MAC_MTLTxQDR_PTXQ_SHIFT		16
#define Ethernet_MAC_MTLTxQDR_PTXQ_MASK		0x07
/** @defgroup ethernet_mac_mtltxqdr_ptxq PTXQ PTXQ
@{*/
/**@}*/

/** Ethernet_MAC_MTLTxQDR_TXSTSFSTS TXSTSFSTS **/
#define Ethernet_MAC_MTLTxQDR_TXSTSFSTS		(1 << 5)
/** Ethernet_MAC_MTLTxQDR_TXQSTS TXQSTS **/
#define Ethernet_MAC_MTLTxQDR_TXQSTS		(1 << 4)
/** Ethernet_MAC_MTLTxQDR_TWCSTS TWCSTS **/
#define Ethernet_MAC_MTLTxQDR_TWCSTS		(1 << 3)

#define Ethernet_MAC_MTLTxQDR_TRCSTS_SHIFT		1
#define Ethernet_MAC_MTLTxQDR_TRCSTS_MASK		0x03
/** @defgroup ethernet_mac_mtltxqdr_trcsts TRCSTS TRCSTS
@{*/
/**@}*/

/** Ethernet_MAC_MTLTxQDR_TXQPAUSED TXQPAUSED **/
#define Ethernet_MAC_MTLTxQDR_TXQPAUSED		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_mtlqicsr MTLQICSR Queue interrupt control status Register
@{*/

/** Ethernet_MAC_MTLQICSR_RXOIE RXOIE **/
#define Ethernet_MAC_MTLQICSR_RXOIE		(1 << 24)
/** Ethernet_MAC_MTLQICSR_RXOVFIS RXOVFIS **/
#define Ethernet_MAC_MTLQICSR_RXOVFIS		(1 << 16)
/** Ethernet_MAC_MTLQICSR_TXUIE TXUIE **/
#define Ethernet_MAC_MTLQICSR_TXUIE		(1 << 8)
/** Ethernet_MAC_MTLQICSR_TXUNFIS TXUNFIS **/
#define Ethernet_MAC_MTLQICSR_TXUNFIS		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_mtlrxqomr MTLRxQOMR Rx queue operating mode register
@{*/


#define Ethernet_MAC_MTLRxQOMR_RQS_SHIFT		20
#define Ethernet_MAC_MTLRxQOMR_RQS_MASK		0x07
/** @defgroup ethernet_mac_mtlrxqomr_rqs RQS RQS
@{*/
/**@}*/


#define Ethernet_MAC_MTLRxQOMR_RFD_SHIFT		14
#define Ethernet_MAC_MTLRxQOMR_RFD_MASK		0x07
/** @defgroup ethernet_mac_mtlrxqomr_rfd RFD RFD
@{*/
/**@}*/


#define Ethernet_MAC_MTLRxQOMR_RFA_SHIFT		8
#define Ethernet_MAC_MTLRxQOMR_RFA_MASK		0x07
/** @defgroup ethernet_mac_mtlrxqomr_rfa RFA RFA
@{*/
/**@}*/

/** Ethernet_MAC_MTLRxQOMR_EHFC EHFC **/
#define Ethernet_MAC_MTLRxQOMR_EHFC		(1 << 7)
/** Ethernet_MAC_MTLRxQOMR_DIS_TCP_EF DIS_TCP_EF **/
#define Ethernet_MAC_MTLRxQOMR_DIS_TCP_EF		(1 << 6)
/** Ethernet_MAC_MTLRxQOMR_RSF RSF **/
#define Ethernet_MAC_MTLRxQOMR_RSF		(1 << 5)
/** Ethernet_MAC_MTLRxQOMR_FEP FEP **/
#define Ethernet_MAC_MTLRxQOMR_FEP		(1 << 4)
/** Ethernet_MAC_MTLRxQOMR_FUP FUP **/
#define Ethernet_MAC_MTLRxQOMR_FUP		(1 << 3)

#define Ethernet_MAC_MTLRxQOMR_RTC_SHIFT		0
#define Ethernet_MAC_MTLRxQOMR_RTC_MASK		0x03
/** @defgroup ethernet_mac_mtlrxqomr_rtc RTC RTC
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mtlrxqmpocr MTLRxQMPOCR Rx queue missed packet and overflow counter register
@{*/

/** Ethernet_MAC_MTLRxQMPOCR_MISCNTOVF MISCNTOVF **/
#define Ethernet_MAC_MTLRxQMPOCR_MISCNTOVF		(1 << 27)

#define Ethernet_MAC_MTLRxQMPOCR_MISPKTCNT_SHIFT		16
#define Ethernet_MAC_MTLRxQMPOCR_MISPKTCNT_MASK		0x7ff
/** @defgroup ethernet_mac_mtlrxqmpocr_mispktcnt MISPKTCNT MISPKTCNT
@{*/
/**@}*/

/** Ethernet_MAC_MTLRxQMPOCR_OVFCNTOVF OVFCNTOVF **/
#define Ethernet_MAC_MTLRxQMPOCR_OVFCNTOVF		(1 << 11)

#define Ethernet_MAC_MTLRxQMPOCR_OVFPKTCNT_SHIFT		0
#define Ethernet_MAC_MTLRxQMPOCR_OVFPKTCNT_MASK		0x7ff
/** @defgroup ethernet_mac_mtlrxqmpocr_ovfpktcnt OVFPKTCNT OVFPKTCNT
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_mtlrxqdr MTLRxQDR Rx queue debug register
@{*/


#define Ethernet_MAC_MTLRxQDR_PRXQ_SHIFT		16
#define Ethernet_MAC_MTLRxQDR_PRXQ_MASK		0x3fff
/** @defgroup ethernet_mac_mtlrxqdr_prxq PRXQ PRXQ
@{*/
/**@}*/


#define Ethernet_MAC_MTLRxQDR_RXQSTS_SHIFT		4
#define Ethernet_MAC_MTLRxQDR_RXQSTS_MASK		0x03
/** @defgroup ethernet_mac_mtlrxqdr_rxqsts RXQSTS RXQSTS
@{*/
/**@}*/


#define Ethernet_MAC_MTLRxQDR_RRCSTS_SHIFT		1
#define Ethernet_MAC_MTLRxQDR_RRCSTS_MASK		0x03
/** @defgroup ethernet_mac_mtlrxqdr_rrcsts RRCSTS RRCSTS
@{*/
/**@}*/

/** Ethernet_MAC_MTLRxQDR_RWCSTS RWCSTS **/
#define Ethernet_MAC_MTLRxQDR_RWCSTS		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmamr DMAMR DMA mode register
@{*/

/** Ethernet_MAC_DMAMR_INTM Interrupt Mode **/
#define Ethernet_MAC_DMAMR_INTM		(1 << 16)

#define Ethernet_MAC_DMAMR_PR_SHIFT		12
#define Ethernet_MAC_DMAMR_PR_MASK		0x07
/** @defgroup ethernet_mac_dmamr_pr PR Priority ratio
@{*/
/**@}*/

/** Ethernet_MAC_DMAMR_TXPR Transmit priority **/
#define Ethernet_MAC_DMAMR_TXPR		(1 << 11)
/** Ethernet_MAC_DMAMR_DA DMA Tx or Rx Arbitration Scheme **/
#define Ethernet_MAC_DMAMR_DA		(1 << 1)
/** Ethernet_MAC_DMAMR_SWR Software Reset **/
#define Ethernet_MAC_DMAMR_SWR		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmasbmr DMASBMR System bus mode register
@{*/

/** Ethernet_MAC_DMASBMR_RB Rebuild INCRx Burst **/
#define Ethernet_MAC_DMASBMR_RB		(1 << 15)
/** Ethernet_MAC_DMASBMR_MB Mixed Burst **/
#define Ethernet_MAC_DMASBMR_MB		(1 << 14)
/** Ethernet_MAC_DMASBMR_AAL Address-Aligned Beats **/
#define Ethernet_MAC_DMASBMR_AAL		(1 << 12)
/** Ethernet_MAC_DMASBMR_FB Fixed Burst Length **/
#define Ethernet_MAC_DMASBMR_FB		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmaisr DMAISR Interrupt status register
@{*/

/** Ethernet_MAC_DMAISR_MACIS MAC Interrupt Status **/
#define Ethernet_MAC_DMAISR_MACIS		(1 << 17)
/** Ethernet_MAC_DMAISR_MTLIS MTL Interrupt Status **/
#define Ethernet_MAC_DMAISR_MTLIS		(1 << 16)
/** Ethernet_MAC_DMAISR_DC0IS DMA Channel Interrupt Status **/
#define Ethernet_MAC_DMAISR_DC0IS		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmadsr DMADSR Debug status register
@{*/


#define Ethernet_MAC_DMADSR_TPS0_SHIFT		12
#define Ethernet_MAC_DMADSR_TPS0_MASK		0x0f
/** @defgroup ethernet_mac_dmadsr_tps0 TPS0 DMA Channel Transmit Process State
@{*/
/**@}*/


#define Ethernet_MAC_DMADSR_RPS0_SHIFT		8
#define Ethernet_MAC_DMADSR_RPS0_MASK		0x0f
/** @defgroup ethernet_mac_dmadsr_rps0 RPS0 DMA Channel Receive Process State
@{*/
/**@}*/

/** Ethernet_MAC_DMADSR_AXWHSTS AHB Master Write Channel **/
#define Ethernet_MAC_DMADSR_AXWHSTS		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmaccr DMACCR Channel control register
@{*/


#define Ethernet_MAC_DMACCR_DSL_SHIFT		18
#define Ethernet_MAC_DMACCR_DSL_MASK		0x07
/** @defgroup ethernet_mac_dmaccr_dsl DSL Descriptor Skip Length
@{*/
/**@}*/

/** Ethernet_MAC_DMACCR_PBLX8 8xPBL mode **/
#define Ethernet_MAC_DMACCR_PBLX8		(1 << 16)

#define Ethernet_MAC_DMACCR_MSS_SHIFT		0
#define Ethernet_MAC_DMACCR_MSS_MASK		0x3fff
/** @defgroup ethernet_mac_dmaccr_mss MSS Maximum Segment Size
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmactxcr DMACTxCR Channel transmit control register
@{*/


#define Ethernet_MAC_DMACTxCR_TXPBL_SHIFT		16
#define Ethernet_MAC_DMACTxCR_TXPBL_MASK		0x3f
/** @defgroup ethernet_mac_dmactxcr_txpbl TXPBL Transmit Programmable Burst Length
@{*/
/**@}*/

/** Ethernet_MAC_DMACTxCR_TSE TCP Segmentation Enabled **/
#define Ethernet_MAC_DMACTxCR_TSE		(1 << 12)
/** Ethernet_MAC_DMACTxCR_OSF Operate on Second Packet **/
#define Ethernet_MAC_DMACTxCR_OSF		(1 << 4)
/** Ethernet_MAC_DMACTxCR_ST Start or Stop Transmission Command **/
#define Ethernet_MAC_DMACTxCR_ST		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmacrxcr DMACRxCR Channel receive control register
@{*/

/** Ethernet_MAC_DMACRxCR_RPF DMA Rx Channel Packet Flush **/
#define Ethernet_MAC_DMACRxCR_RPF		(1 << 31)

#define Ethernet_MAC_DMACRxCR_RXPBL_SHIFT		16
#define Ethernet_MAC_DMACRxCR_RXPBL_MASK		0x3f
/** @defgroup ethernet_mac_dmacrxcr_rxpbl RXPBL RXPBL
@{*/
/**@}*/


#define Ethernet_MAC_DMACRxCR_RBSZ_SHIFT		1
#define Ethernet_MAC_DMACRxCR_RBSZ_MASK		0x3fff
/** @defgroup ethernet_mac_dmacrxcr_rbsz RBSZ Receive Buffer size
@{*/
/**@}*/

/** Ethernet_MAC_DMACRxCR_SR Start or Stop Receive Command **/
#define Ethernet_MAC_DMACRxCR_SR		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmactxdlar DMACTxDLAR Channel Tx descriptor list address register
@{*/


#define Ethernet_MAC_DMACTxDLAR_TDESLA_SHIFT		2
#define Ethernet_MAC_DMACTxDLAR_TDESLA_MASK		0x3fffffff
/** @defgroup ethernet_mac_dmactxdlar_tdesla TDESLA Start of Transmit List
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmacrxdlar DMACRxDLAR Channel Rx descriptor list address register
@{*/


#define Ethernet_MAC_DMACRxDLAR_RDESLA_SHIFT		2
#define Ethernet_MAC_DMACRxDLAR_RDESLA_MASK		0x3fffffff
/** @defgroup ethernet_mac_dmacrxdlar_rdesla RDESLA Start of Receive List
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmactxdtpr DMACTxDTPR Channel Tx descriptor tail pointer register
@{*/


#define Ethernet_MAC_DMACTxDTPR_TDT_SHIFT		2
#define Ethernet_MAC_DMACTxDTPR_TDT_MASK		0x3fffffff
/** @defgroup ethernet_mac_dmactxdtpr_tdt TDT Transmit Descriptor Tail Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmacrxdtpr DMACRxDTPR Channel Rx descriptor tail pointer register
@{*/


#define Ethernet_MAC_DMACRxDTPR_RDT_SHIFT		2
#define Ethernet_MAC_DMACRxDTPR_RDT_MASK		0x3fffffff
/** @defgroup ethernet_mac_dmacrxdtpr_rdt RDT Receive Descriptor Tail Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmactxrlr DMACTxRLR Channel Tx descriptor ring length register
@{*/


#define Ethernet_MAC_DMACTxRLR_TDRL_SHIFT		0
#define Ethernet_MAC_DMACTxRLR_TDRL_MASK		0x3ff
/** @defgroup ethernet_mac_dmactxrlr_tdrl TDRL Transmit Descriptor Ring Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmacrxrlr DMACRxRLR Channel Rx descriptor ring length register
@{*/


#define Ethernet_MAC_DMACRxRLR_RDRL_SHIFT		0
#define Ethernet_MAC_DMACRxRLR_RDRL_MASK		0x3ff
/** @defgroup ethernet_mac_dmacrxrlr_rdrl RDRL Receive Descriptor Ring Length
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmacier DMACIER Channel interrupt enable register
@{*/

/** Ethernet_MAC_DMACIER_NIE Normal Interrupt Summary Enable **/
#define Ethernet_MAC_DMACIER_NIE		(1 << 15)
/** Ethernet_MAC_DMACIER_AIE Abnormal Interrupt Summary Enable **/
#define Ethernet_MAC_DMACIER_AIE		(1 << 14)
/** Ethernet_MAC_DMACIER_CDEE Context Descriptor Error Enable **/
#define Ethernet_MAC_DMACIER_CDEE		(1 << 13)
/** Ethernet_MAC_DMACIER_FBEE Fatal Bus Error Enable **/
#define Ethernet_MAC_DMACIER_FBEE		(1 << 12)
/** Ethernet_MAC_DMACIER_ERIE Early Receive Interrupt Enable **/
#define Ethernet_MAC_DMACIER_ERIE		(1 << 11)
/** Ethernet_MAC_DMACIER_ETIE Early Transmit Interrupt Enable **/
#define Ethernet_MAC_DMACIER_ETIE		(1 << 10)
/** Ethernet_MAC_DMACIER_RWTE Receive Watchdog Timeout Enable **/
#define Ethernet_MAC_DMACIER_RWTE		(1 << 9)
/** Ethernet_MAC_DMACIER_RSE Receive Stopped Enable **/
#define Ethernet_MAC_DMACIER_RSE		(1 << 8)
/** Ethernet_MAC_DMACIER_RBUE Receive Buffer Unavailable Enable **/
#define Ethernet_MAC_DMACIER_RBUE		(1 << 7)
/** Ethernet_MAC_DMACIER_RIE Receive Interrupt Enable **/
#define Ethernet_MAC_DMACIER_RIE		(1 << 6)
/** Ethernet_MAC_DMACIER_TBUE Transmit Buffer Unavailable Enable **/
#define Ethernet_MAC_DMACIER_TBUE		(1 << 2)
/** Ethernet_MAC_DMACIER_TXSE Transmit Stopped Enable **/
#define Ethernet_MAC_DMACIER_TXSE		(1 << 1)
/** Ethernet_MAC_DMACIER_TIE Transmit Interrupt Enable **/
#define Ethernet_MAC_DMACIER_TIE		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmacrxiwtr DMACRxIWTR Channel Rx interrupt watchdog timer register
@{*/


#define Ethernet_MAC_DMACRxIWTR_RWT_SHIFT		0
#define Ethernet_MAC_DMACRxIWTR_RWT_MASK		0xff
/** @defgroup ethernet_mac_dmacrxiwtr_rwt RWT Receive Interrupt Watchdog Timer Count
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmaccatxdr DMACCATxDR Channel current application transmit descriptor register
@{*/


#define Ethernet_MAC_DMACCATxDR_CURTDESAPTR_SHIFT		0
#define Ethernet_MAC_DMACCATxDR_CURTDESAPTR_MASK		0xffffffff
/** @defgroup ethernet_mac_dmaccatxdr_curtdesaptr CURTDESAPTR Application Transmit Descriptor Address Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmaccarxdr DMACCARxDR Channel current application receive descriptor register
@{*/


#define Ethernet_MAC_DMACCARxDR_CURRDESAPTR_SHIFT		0
#define Ethernet_MAC_DMACCARxDR_CURRDESAPTR_MASK		0xffffffff
/** @defgroup ethernet_mac_dmaccarxdr_currdesaptr CURRDESAPTR Application Receive Descriptor Address Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmaccatxbr DMACCATxBR Channel current application transmit buffer register
@{*/


#define Ethernet_MAC_DMACCATxBR_CURTBUFAPTR_SHIFT		0
#define Ethernet_MAC_DMACCATxBR_CURTBUFAPTR_MASK		0xffffffff
/** @defgroup ethernet_mac_dmaccatxbr_curtbufaptr CURTBUFAPTR Application Transmit Buffer Address Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmaccarxbr DMACCARxBR Channel current application receive buffer register
@{*/


#define Ethernet_MAC_DMACCARxBR_CURRBUFAPTR_SHIFT		0
#define Ethernet_MAC_DMACCARxBR_CURRBUFAPTR_MASK		0xffffffff
/** @defgroup ethernet_mac_dmaccarxbr_currbufaptr CURRBUFAPTR Application Receive Buffer Address Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_dmacsr DMACSR Channel status register
@{*/


#define Ethernet_MAC_DMACSR_REB_SHIFT		19
#define Ethernet_MAC_DMACSR_REB_MASK		0x07
/** @defgroup ethernet_mac_dmacsr_reb REB Rx DMA Error Bits
@{*/
/**@}*/


#define Ethernet_MAC_DMACSR_TEB_SHIFT		16
#define Ethernet_MAC_DMACSR_TEB_MASK		0x07
/** @defgroup ethernet_mac_dmacsr_teb TEB Tx DMA Error Bits
@{*/
/**@}*/

/** Ethernet_MAC_DMACSR_NIS Normal Interrupt Summary **/
#define Ethernet_MAC_DMACSR_NIS		(1 << 15)
/** Ethernet_MAC_DMACSR_AIS Abnormal Interrupt Summary **/
#define Ethernet_MAC_DMACSR_AIS		(1 << 14)
/** Ethernet_MAC_DMACSR_CDE Context Descriptor Error **/
#define Ethernet_MAC_DMACSR_CDE		(1 << 13)
/** Ethernet_MAC_DMACSR_FBE Fatal Bus Error **/
#define Ethernet_MAC_DMACSR_FBE		(1 << 12)
/** Ethernet_MAC_DMACSR_ER Early Receive Interrupt **/
#define Ethernet_MAC_DMACSR_ER		(1 << 11)
/** Ethernet_MAC_DMACSR_ET Early Transmit Interrupt **/
#define Ethernet_MAC_DMACSR_ET		(1 << 10)
/** Ethernet_MAC_DMACSR_RWT Receive Watchdog Timeout **/
#define Ethernet_MAC_DMACSR_RWT		(1 << 9)
/** Ethernet_MAC_DMACSR_RPS Receive Process Stopped **/
#define Ethernet_MAC_DMACSR_RPS		(1 << 8)
/** Ethernet_MAC_DMACSR_RBU Receive Buffer Unavailable **/
#define Ethernet_MAC_DMACSR_RBU		(1 << 7)
/** Ethernet_MAC_DMACSR_RI Receive Interrupt **/
#define Ethernet_MAC_DMACSR_RI		(1 << 6)
/** Ethernet_MAC_DMACSR_TBU Transmit Buffer Unavailable **/
#define Ethernet_MAC_DMACSR_TBU		(1 << 2)
/** Ethernet_MAC_DMACSR_TPS Transmit Process Stopped **/
#define Ethernet_MAC_DMACSR_TPS		(1 << 1)
/** Ethernet_MAC_DMACSR_TI Transmit Interrupt **/
#define Ethernet_MAC_DMACSR_TI		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_dmacmfcr DMACMFCR Channel missed frame count register
@{*/

/** Ethernet_MAC_DMACMFCR_MFCO Overflow status of the MFC Counter **/
#define Ethernet_MAC_DMACMFCR_MFCO		(1 << 15)

#define Ethernet_MAC_DMACMFCR_MFC_SHIFT		0
#define Ethernet_MAC_DMACMFCR_MFC_MASK		0x7ff
/** @defgroup ethernet_mac_dmacmfcr_mfc MFC Dropped Packet Counters
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- ETHERNET_MAC: Ethernet: media access control ----------------- */

/** @defgroup ethernet_mac_registers Ethernet: media access control Register
@{*/

/** ETHERNET_MAC_MACCR Ethernet MAC configuration register (ETH_MACCR) **/
#define ETHERNET_MAC_MACCR			MMIO32(ETHERNET_MAC_BASE + 0x00)
/** ETHERNET_MAC_MACFFR Ethernet MAC frame filter register (ETH_MACCFFR) **/
#define ETHERNET_MAC_MACFFR			MMIO32(ETHERNET_MAC_BASE + 0x04)
/** ETHERNET_MAC_MACHTHR Ethernet MAC hash table high register **/
#define ETHERNET_MAC_MACHTHR			MMIO32(ETHERNET_MAC_BASE + 0x08)
/** ETHERNET_MAC_MACHTLR Ethernet MAC hash table low register **/
#define ETHERNET_MAC_MACHTLR			MMIO32(ETHERNET_MAC_BASE + 0x0c)
/** ETHERNET_MAC_MACMIIAR Ethernet MAC MII address register (ETH_MACMIIAR) **/
#define ETHERNET_MAC_MACMIIAR			MMIO32(ETHERNET_MAC_BASE + 0x10)
/** ETHERNET_MAC_MACMIIDR Ethernet MAC MII data register (ETH_MACMIIDR) **/
#define ETHERNET_MAC_MACMIIDR			MMIO32(ETHERNET_MAC_BASE + 0x14)
/** ETHERNET_MAC_MACFCR Ethernet MAC flow control register (ETH_MACFCR) **/
#define ETHERNET_MAC_MACFCR			MMIO32(ETHERNET_MAC_BASE + 0x18)
/** ETHERNET_MAC_MACVLANTR Ethernet MAC VLAN tag register (ETH_MACVLANTR) **/
#define ETHERNET_MAC_MACVLANTR			MMIO32(ETHERNET_MAC_BASE + 0x1c)
/** ETHERNET_MAC_MACRWUFFR Ethernet MAC remote wakeup frame filter register (ETH_MACRWUFFR) **/
#define ETHERNET_MAC_MACRWUFFR			MMIO32(ETHERNET_MAC_BASE + 0x28)
/** ETHERNET_MAC_MACPMTCSR Ethernet MAC PMT control and status register (ETH_MACPMTCSR) **/
#define ETHERNET_MAC_MACPMTCSR			MMIO32(ETHERNET_MAC_BASE + 0x2c)
/** ETHERNET_MAC_MACSR Ethernet MAC interrupt status register (ETH_MACSR) **/
#define ETHERNET_MAC_MACSR			MMIO32(ETHERNET_MAC_BASE + 0x38)
/** ETHERNET_MAC_MACIMR Ethernet MAC interrupt mask register (ETH_MACIMR) **/
#define ETHERNET_MAC_MACIMR			MMIO32(ETHERNET_MAC_BASE + 0x3c)
/** ETHERNET_MAC_MACA0HR Ethernet MAC address 0 high register (ETH_MACA0HR) **/
#define ETHERNET_MAC_MACA0HR			MMIO32(ETHERNET_MAC_BASE + 0x40)
/** ETHERNET_MAC_MACA0LR Ethernet MAC address 0 low register **/
#define ETHERNET_MAC_MACA0LR			MMIO32(ETHERNET_MAC_BASE + 0x44)
/** ETHERNET_MAC_MACA1HR Ethernet MAC address 1 high register (ETH_MACA1HR) **/
#define ETHERNET_MAC_MACA1HR			MMIO32(ETHERNET_MAC_BASE + 0x48)
/** ETHERNET_MAC_MACA1LR Ethernet MAC address1 low register **/
#define ETHERNET_MAC_MACA1LR			MMIO32(ETHERNET_MAC_BASE + 0x4c)
/** ETHERNET_MAC_MACA2HR Ethernet MAC address 2 high register (ETH_MACA2HR) **/
#define ETHERNET_MAC_MACA2HR			MMIO32(ETHERNET_MAC_BASE + 0x50)
/** ETHERNET_MAC_MACA2LR Ethernet MAC address 2 low register **/
#define ETHERNET_MAC_MACA2LR			MMIO32(ETHERNET_MAC_BASE + 0x54)
/** ETHERNET_MAC_MACA3HR Ethernet MAC address 3 high register (ETH_MACA3HR) **/
#define ETHERNET_MAC_MACA3HR			MMIO32(ETHERNET_MAC_BASE + 0x58)
/** ETHERNET_MAC_MACA3LR Ethernet MAC address 3 low register **/
#define ETHERNET_MAC_MACA3LR			MMIO32(ETHERNET_MAC_BASE + 0x5c)

/**@}*/


/** @defgroup ethernet_mac_maccr MACCR Ethernet MAC configuration register (ETH_MACCR)
@{*/

/** ETHERNET_MAC_MACCR_WD Watchdog disable **/
#define ETHERNET_MAC_MACCR_WD		(1 << 23)
/** ETHERNET_MAC_MACCR_JD Jabber disable **/
#define ETHERNET_MAC_MACCR_JD		(1 << 22)

#define ETHERNET_MAC_MACCR_IFG_SHIFT		17
#define ETHERNET_MAC_MACCR_IFG_MASK		0x07
/** @defgroup ethernet_mac_maccr_ifg IFG Interframe gap
@{*/
/**@}*/

/** ETHERNET_MAC_MACCR_CSD Carrier sense disable **/
#define ETHERNET_MAC_MACCR_CSD		(1 << 16)
/** ETHERNET_MAC_MACCR_FES Fast Ethernet speed **/
#define ETHERNET_MAC_MACCR_FES		(1 << 14)
/** ETHERNET_MAC_MACCR_ROD Receive own disable **/
#define ETHERNET_MAC_MACCR_ROD		(1 << 13)
/** ETHERNET_MAC_MACCR_LM Loopback mode **/
#define ETHERNET_MAC_MACCR_LM		(1 << 12)
/** ETHERNET_MAC_MACCR_DM Duplex mode **/
#define ETHERNET_MAC_MACCR_DM		(1 << 11)
/** ETHERNET_MAC_MACCR_IPCO IPv4 checksum offload **/
#define ETHERNET_MAC_MACCR_IPCO		(1 << 10)
/** ETHERNET_MAC_MACCR_RD Retry disable **/
#define ETHERNET_MAC_MACCR_RD		(1 << 9)
/** ETHERNET_MAC_MACCR_APCS Automatic pad/CRC stripping **/
#define ETHERNET_MAC_MACCR_APCS		(1 << 7)

#define ETHERNET_MAC_MACCR_BL_SHIFT		5
#define ETHERNET_MAC_MACCR_BL_MASK		0x03
/** @defgroup ethernet_mac_maccr_bl BL Back-off limit
@{*/
/**@}*/

/** ETHERNET_MAC_MACCR_DC Deferral check **/
#define ETHERNET_MAC_MACCR_DC		(1 << 4)
/** ETHERNET_MAC_MACCR_TE Transmitter enable **/
#define ETHERNET_MAC_MACCR_TE		(1 << 3)
/** ETHERNET_MAC_MACCR_RE Receiver enable **/
#define ETHERNET_MAC_MACCR_RE		(1 << 2)

/**@}*/

/** @defgroup ethernet_mac_macffr MACFFR Ethernet MAC frame filter register (ETH_MACCFFR)
@{*/

/** ETHERNET_MAC_MACFFR_RA Receive all **/
#define ETHERNET_MAC_MACFFR_RA		(1 << 31)
/** ETHERNET_MAC_MACFFR_HPF Hash or perfect filter **/
#define ETHERNET_MAC_MACFFR_HPF		(1 << 10)
/** ETHERNET_MAC_MACFFR_SAF Source address filter **/
#define ETHERNET_MAC_MACFFR_SAF		(1 << 9)
/** ETHERNET_MAC_MACFFR_SAIF Source address inverse filtering **/
#define ETHERNET_MAC_MACFFR_SAIF		(1 << 8)

#define ETHERNET_MAC_MACFFR_PCF_SHIFT		6
#define ETHERNET_MAC_MACFFR_PCF_MASK		0x03
/** @defgroup ethernet_mac_macffr_pcf PCF Pass control frames
@{*/
/**@}*/

/** ETHERNET_MAC_MACFFR_BFD Broadcast frames disable **/
#define ETHERNET_MAC_MACFFR_BFD		(1 << 5)
/** ETHERNET_MAC_MACFFR_PAM Pass all multicast **/
#define ETHERNET_MAC_MACFFR_PAM		(1 << 4)
/** ETHERNET_MAC_MACFFR_DAIF Destination address inverse filtering **/
#define ETHERNET_MAC_MACFFR_DAIF		(1 << 3)
/** ETHERNET_MAC_MACFFR_HM Hash multicast **/
#define ETHERNET_MAC_MACFFR_HM		(1 << 2)
/** ETHERNET_MAC_MACFFR_HU Hash unicast **/
#define ETHERNET_MAC_MACFFR_HU		(1 << 1)
/** ETHERNET_MAC_MACFFR_PM Promiscuous mode **/
#define ETHERNET_MAC_MACFFR_PM		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_machthr MACHTHR Ethernet MAC hash table high register
@{*/


#define ETHERNET_MAC_MACHTHR_HTH_SHIFT		0
#define ETHERNET_MAC_MACHTHR_HTH_MASK		0xffffffff
/** @defgroup ethernet_mac_machthr_hth HTH Hash table high
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_machtlr MACHTLR Ethernet MAC hash table low register
@{*/


#define ETHERNET_MAC_MACHTLR_HTL_SHIFT		0
#define ETHERNET_MAC_MACHTLR_HTL_MASK		0xffffffff
/** @defgroup ethernet_mac_machtlr_htl HTL Hash table low
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macmiiar MACMIIAR Ethernet MAC MII address register (ETH_MACMIIAR)
@{*/


#define ETHERNET_MAC_MACMIIAR_PA_SHIFT		11
#define ETHERNET_MAC_MACMIIAR_PA_MASK		0x1f
/** @defgroup ethernet_mac_macmiiar_pa PA PHY address
@{*/
/**@}*/


#define ETHERNET_MAC_MACMIIAR_MR_SHIFT		6
#define ETHERNET_MAC_MACMIIAR_MR_MASK		0x1f
/** @defgroup ethernet_mac_macmiiar_mr MR MII register
@{*/
/**@}*/


#define ETHERNET_MAC_MACMIIAR_CR_SHIFT		2
#define ETHERNET_MAC_MACMIIAR_CR_MASK		0x07
/** @defgroup ethernet_mac_macmiiar_cr CR Clock range
@{*/
/**@}*/

/** ETHERNET_MAC_MACMIIAR_MW MII write **/
#define ETHERNET_MAC_MACMIIAR_MW		(1 << 1)
/** ETHERNET_MAC_MACMIIAR_MB MII busy **/
#define ETHERNET_MAC_MACMIIAR_MB		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macmiidr MACMIIDR Ethernet MAC MII data register (ETH_MACMIIDR)
@{*/


#define ETHERNET_MAC_MACMIIDR_MD_SHIFT		0
#define ETHERNET_MAC_MACMIIDR_MD_MASK		0xffff
/** @defgroup ethernet_mac_macmiidr_md MD MII data
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macfcr MACFCR Ethernet MAC flow control register (ETH_MACFCR)
@{*/


#define ETHERNET_MAC_MACFCR_PT_SHIFT		16
#define ETHERNET_MAC_MACFCR_PT_MASK		0xffff
/** @defgroup ethernet_mac_macfcr_pt PT Pass control frames
@{*/
/**@}*/

/** ETHERNET_MAC_MACFCR_ZQPD Zero-quanta pause disable **/
#define ETHERNET_MAC_MACFCR_ZQPD		(1 << 7)

#define ETHERNET_MAC_MACFCR_PLT_SHIFT		4
#define ETHERNET_MAC_MACFCR_PLT_MASK		0x03
/** @defgroup ethernet_mac_macfcr_plt PLT Pause low threshold
@{*/
/**@}*/

/** ETHERNET_MAC_MACFCR_UPFD Unicast pause frame detect **/
#define ETHERNET_MAC_MACFCR_UPFD		(1 << 3)
/** ETHERNET_MAC_MACFCR_RFCE Receive flow control enable **/
#define ETHERNET_MAC_MACFCR_RFCE		(1 << 2)
/** ETHERNET_MAC_MACFCR_TFCE Transmit flow control enable **/
#define ETHERNET_MAC_MACFCR_TFCE		(1 << 1)
/** ETHERNET_MAC_MACFCR_FCB_BPA Flow control busy/back pressure activate **/
#define ETHERNET_MAC_MACFCR_FCB_BPA		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macvlantr MACVLANTR Ethernet MAC VLAN tag register (ETH_MACVLANTR)
@{*/

/** ETHERNET_MAC_MACVLANTR_VLANTC 12-bit VLAN tag comparison **/
#define ETHERNET_MAC_MACVLANTR_VLANTC		(1 << 16)

#define ETHERNET_MAC_MACVLANTR_VLANTI_SHIFT		0
#define ETHERNET_MAC_MACVLANTR_VLANTI_MASK		0xffff
/** @defgroup ethernet_mac_macvlantr_vlanti VLANTI VLAN tag identifier (for receive frames)
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macrwuffr MACRWUFFR Ethernet MAC remote wakeup frame filter register (ETH_MACRWUFFR)
@{*/


/**@}*/

/** @defgroup ethernet_mac_macpmtcsr MACPMTCSR Ethernet MAC PMT control and status register (ETH_MACPMTCSR)
@{*/

/** ETHERNET_MAC_MACPMTCSR_WFFRPR Wakeup frame filter register pointer reset **/
#define ETHERNET_MAC_MACPMTCSR_WFFRPR		(1 << 31)
/** ETHERNET_MAC_MACPMTCSR_GU Global unicast **/
#define ETHERNET_MAC_MACPMTCSR_GU		(1 << 9)
/** ETHERNET_MAC_MACPMTCSR_WFR Wakeup frame received **/
#define ETHERNET_MAC_MACPMTCSR_WFR		(1 << 6)
/** ETHERNET_MAC_MACPMTCSR_MPR Magic packet received **/
#define ETHERNET_MAC_MACPMTCSR_MPR		(1 << 5)
/** ETHERNET_MAC_MACPMTCSR_WFE Wakeup frame enable **/
#define ETHERNET_MAC_MACPMTCSR_WFE		(1 << 2)
/** ETHERNET_MAC_MACPMTCSR_MPE Magic Packet enable **/
#define ETHERNET_MAC_MACPMTCSR_MPE		(1 << 1)
/** ETHERNET_MAC_MACPMTCSR_PD Power down **/
#define ETHERNET_MAC_MACPMTCSR_PD		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macsr MACSR Ethernet MAC interrupt status register (ETH_MACSR)
@{*/

/** ETHERNET_MAC_MACSR_TSTS Time stamp trigger status **/
#define ETHERNET_MAC_MACSR_TSTS		(1 << 9)
/** ETHERNET_MAC_MACSR_MMCTS MMC transmit status **/
#define ETHERNET_MAC_MACSR_MMCTS		(1 << 6)
/** ETHERNET_MAC_MACSR_MMCRS MMC receive status **/
#define ETHERNET_MAC_MACSR_MMCRS		(1 << 5)
/** ETHERNET_MAC_MACSR_MMCS MMC status **/
#define ETHERNET_MAC_MACSR_MMCS		(1 << 4)
/** ETHERNET_MAC_MACSR_PMTS PMT status **/
#define ETHERNET_MAC_MACSR_PMTS		(1 << 3)

/**@}*/

/** @defgroup ethernet_mac_macimr MACIMR Ethernet MAC interrupt mask register (ETH_MACIMR)
@{*/

/** ETHERNET_MAC_MACIMR_TSTIM Time stamp trigger interrupt mask **/
#define ETHERNET_MAC_MACIMR_TSTIM		(1 << 9)
/** ETHERNET_MAC_MACIMR_PMTIM PMT interrupt mask **/
#define ETHERNET_MAC_MACIMR_PMTIM		(1 << 3)

/**@}*/

/** @defgroup ethernet_mac_maca0hr MACA0HR Ethernet MAC address 0 high register (ETH_MACA0HR)
@{*/

/** ETHERNET_MAC_MACA0HR_MO Always 1 **/
#define ETHERNET_MAC_MACA0HR_MO		(1 << 31)

#define ETHERNET_MAC_MACA0HR_MACA0H_SHIFT		0
#define ETHERNET_MAC_MACA0HR_MACA0H_MASK		0xffff
/** @defgroup ethernet_mac_maca0hr_maca0h MACA0H MAC address0 high
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca0lr MACA0LR Ethernet MAC address 0 low register
@{*/


#define ETHERNET_MAC_MACA0LR_MACA0L_SHIFT		0
#define ETHERNET_MAC_MACA0LR_MACA0L_MASK		0xffffffff
/** @defgroup ethernet_mac_maca0lr_maca0l MACA0L MAC address0 low
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca1hr MACA1HR Ethernet MAC address 1 high register (ETH_MACA1HR)
@{*/

/** ETHERNET_MAC_MACA1HR_AE Address enable **/
#define ETHERNET_MAC_MACA1HR_AE		(1 << 31)
/** ETHERNET_MAC_MACA1HR_SA Source address **/
#define ETHERNET_MAC_MACA1HR_SA		(1 << 30)

#define ETHERNET_MAC_MACA1HR_MBC_SHIFT		24
#define ETHERNET_MAC_MACA1HR_MBC_MASK		0x3f
/** @defgroup ethernet_mac_maca1hr_mbc MBC Mask byte control
@{*/
/**@}*/


#define ETHERNET_MAC_MACA1HR_MACA1H_SHIFT		0
#define ETHERNET_MAC_MACA1HR_MACA1H_MASK		0xffff
/** @defgroup ethernet_mac_maca1hr_maca1h MACA1H MAC address1 high
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca1lr MACA1LR Ethernet MAC address1 low register
@{*/


#define ETHERNET_MAC_MACA1LR_MACA1L_SHIFT		0
#define ETHERNET_MAC_MACA1LR_MACA1L_MASK		0xffffffff
/** @defgroup ethernet_mac_maca1lr_maca1l MACA1L MAC address1 low
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca2hr MACA2HR Ethernet MAC address 2 high register (ETH_MACA2HR)
@{*/

/** ETHERNET_MAC_MACA2HR_AE Address enable **/
#define ETHERNET_MAC_MACA2HR_AE		(1 << 31)
/** ETHERNET_MAC_MACA2HR_SA Source address **/
#define ETHERNET_MAC_MACA2HR_SA		(1 << 30)

#define ETHERNET_MAC_MACA2HR_MBC_SHIFT		24
#define ETHERNET_MAC_MACA2HR_MBC_MASK		0x3f
/** @defgroup ethernet_mac_maca2hr_mbc MBC Mask byte control
@{*/
/**@}*/


#define ETHERNET_MAC_MACA2HR_ETH_MACA2HR_SHIFT		0
#define ETHERNET_MAC_MACA2HR_ETH_MACA2HR_MASK		0xffff
/** @defgroup ethernet_mac_maca2hr_eth_maca2hr ETHMACA2HR Ethernet MAC address 2 high register
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca2lr MACA2LR Ethernet MAC address 2 low register
@{*/


#define ETHERNET_MAC_MACA2LR_MACA2L_SHIFT		0
#define ETHERNET_MAC_MACA2LR_MACA2L_MASK		0x7fffffff
/** @defgroup ethernet_mac_maca2lr_maca2l MACA2L MAC address2 low
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca3hr MACA3HR Ethernet MAC address 3 high register (ETH_MACA3HR)
@{*/

/** ETHERNET_MAC_MACA3HR_AE Address enable **/
#define ETHERNET_MAC_MACA3HR_AE		(1 << 31)
/** ETHERNET_MAC_MACA3HR_SA Source address **/
#define ETHERNET_MAC_MACA3HR_SA		(1 << 30)

#define ETHERNET_MAC_MACA3HR_MBC_SHIFT		24
#define ETHERNET_MAC_MACA3HR_MBC_MASK		0x3f
/** @defgroup ethernet_mac_maca3hr_mbc MBC Mask byte control
@{*/
/**@}*/


#define ETHERNET_MAC_MACA3HR_MACA3H_SHIFT		0
#define ETHERNET_MAC_MACA3HR_MACA3H_MASK		0xffff
/** @defgroup ethernet_mac_maca3hr_maca3h MACA3H MAC address3 high
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca3lr MACA3LR Ethernet MAC address 3 low register
@{*/


#define ETHERNET_MAC_MACA3LR_MBCA3L_SHIFT		0
#define ETHERNET_MAC_MACA3LR_MBCA3L_MASK		0xffffffff
/** @defgroup ethernet_mac_maca3lr_mbca3l MBCA3L MAC address3 low
@{*/
/**@}*/


/**@}*/

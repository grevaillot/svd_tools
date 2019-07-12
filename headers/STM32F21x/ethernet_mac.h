#pragma once 

/* --- Ethernet_MAC: Ethernet: media access control (MAC) ----------- */

/** @defgroup ethernet_mac_registers Ethernet: media access control
      (MAC) Register
@{*/

/** Ethernet_MAC_MACCR Ethernet MAC configuration register **/
#define Ethernet_MAC_MACCR			MMIO32(Ethernet_MAC_BASE + 0x00)
/** Ethernet_MAC_MACFFR Ethernet MAC frame filter register **/
#define Ethernet_MAC_MACFFR			MMIO32(Ethernet_MAC_BASE + 0x04)
/** Ethernet_MAC_MACHTHR Ethernet MAC hash table high register **/
#define Ethernet_MAC_MACHTHR			MMIO32(Ethernet_MAC_BASE + 0x08)
/** Ethernet_MAC_MACHTLR Ethernet MAC hash table low register **/
#define Ethernet_MAC_MACHTLR			MMIO32(Ethernet_MAC_BASE + 0x0c)
/** Ethernet_MAC_MACMIIAR Ethernet MAC MII address register **/
#define Ethernet_MAC_MACMIIAR			MMIO32(Ethernet_MAC_BASE + 0x10)
/** Ethernet_MAC_MACMIIDR Ethernet MAC MII data register **/
#define Ethernet_MAC_MACMIIDR			MMIO32(Ethernet_MAC_BASE + 0x14)
/** Ethernet_MAC_MACFCR Ethernet MAC flow control register **/
#define Ethernet_MAC_MACFCR			MMIO32(Ethernet_MAC_BASE + 0x18)
/** Ethernet_MAC_MACVLANTR Ethernet MAC VLAN tag register **/
#define Ethernet_MAC_MACVLANTR			MMIO32(Ethernet_MAC_BASE + 0x1c)
/** Ethernet_MAC_MACRWUFFR Ethernet MAC remote wakeup frame filter register **/
#define Ethernet_MAC_MACRWUFFR			MMIO32(Ethernet_MAC_BASE + 0x28)
/** Ethernet_MAC_MACPMTCSR Ethernet MAC PMT control and status register **/
#define Ethernet_MAC_MACPMTCSR			MMIO32(Ethernet_MAC_BASE + 0x2c)
/** Ethernet_MAC_MACDBGR Ethernet MAC debug register **/
#define Ethernet_MAC_MACDBGR			MMIO32(Ethernet_MAC_BASE + 0x34)
/** Ethernet_MAC_MACSR Ethernet MAC interrupt status register **/
#define Ethernet_MAC_MACSR			MMIO32(Ethernet_MAC_BASE + 0x38)
/** Ethernet_MAC_MACIMR Ethernet MAC interrupt mask register **/
#define Ethernet_MAC_MACIMR			MMIO32(Ethernet_MAC_BASE + 0x3c)
/** Ethernet_MAC_MACA0HR Ethernet MAC address 0 high register **/
#define Ethernet_MAC_MACA0HR			MMIO32(Ethernet_MAC_BASE + 0x40)
/** Ethernet_MAC_MACA0LR Ethernet MAC address 0 low register **/
#define Ethernet_MAC_MACA0LR			MMIO32(Ethernet_MAC_BASE + 0x44)
/** Ethernet_MAC_MACA1HR Ethernet MAC address 1 high register **/
#define Ethernet_MAC_MACA1HR			MMIO32(Ethernet_MAC_BASE + 0x48)
/** Ethernet_MAC_MACA1LR Ethernet MAC address1 low register **/
#define Ethernet_MAC_MACA1LR			MMIO32(Ethernet_MAC_BASE + 0x4c)
/** Ethernet_MAC_MACA2HR Ethernet MAC address 2 high register **/
#define Ethernet_MAC_MACA2HR			MMIO32(Ethernet_MAC_BASE + 0x50)
/** Ethernet_MAC_MACA2LR Ethernet MAC address 2 low register **/
#define Ethernet_MAC_MACA2LR			MMIO32(Ethernet_MAC_BASE + 0x54)
/** Ethernet_MAC_MACA3HR Ethernet MAC address 3 high register **/
#define Ethernet_MAC_MACA3HR			MMIO32(Ethernet_MAC_BASE + 0x58)
/** Ethernet_MAC_MACA3LR Ethernet MAC address 3 low register **/
#define Ethernet_MAC_MACA3LR			MMIO32(Ethernet_MAC_BASE + 0x5c)

/**@}*/


/** @defgroup ethernet_mac_maccr MACCR Ethernet MAC configuration register
@{*/

/** Ethernet_MAC_MACCR_CSTF CSTF **/
#define Ethernet_MAC_MACCR_CSTF		(1 << 25)
/** Ethernet_MAC_MACCR_WD WD **/
#define Ethernet_MAC_MACCR_WD		(1 << 23)
/** Ethernet_MAC_MACCR_JD JD **/
#define Ethernet_MAC_MACCR_JD		(1 << 22)

#define Ethernet_MAC_MACCR_IFG_SHIFT		17
#define Ethernet_MAC_MACCR_IFG_MASK		0x07
/** @defgroup ethernet_mac_maccr_ifg IFG IFG
@{*/
/**@}*/

/** Ethernet_MAC_MACCR_CSD CSD **/
#define Ethernet_MAC_MACCR_CSD		(1 << 16)
/** Ethernet_MAC_MACCR_FES FES **/
#define Ethernet_MAC_MACCR_FES		(1 << 14)
/** Ethernet_MAC_MACCR_ROD ROD **/
#define Ethernet_MAC_MACCR_ROD		(1 << 13)
/** Ethernet_MAC_MACCR_LM LM **/
#define Ethernet_MAC_MACCR_LM		(1 << 12)
/** Ethernet_MAC_MACCR_DM DM **/
#define Ethernet_MAC_MACCR_DM		(1 << 11)
/** Ethernet_MAC_MACCR_IPCO IPCO **/
#define Ethernet_MAC_MACCR_IPCO		(1 << 10)
/** Ethernet_MAC_MACCR_RD RD **/
#define Ethernet_MAC_MACCR_RD		(1 << 9)
/** Ethernet_MAC_MACCR_APCS APCS **/
#define Ethernet_MAC_MACCR_APCS		(1 << 7)

#define Ethernet_MAC_MACCR_BL_SHIFT		5
#define Ethernet_MAC_MACCR_BL_MASK		0x03
/** @defgroup ethernet_mac_maccr_bl BL BL
@{*/
/**@}*/

/** Ethernet_MAC_MACCR_DC DC **/
#define Ethernet_MAC_MACCR_DC		(1 << 4)
/** Ethernet_MAC_MACCR_TE TE **/
#define Ethernet_MAC_MACCR_TE		(1 << 3)
/** Ethernet_MAC_MACCR_RE RE **/
#define Ethernet_MAC_MACCR_RE		(1 << 2)

/**@}*/

/** @defgroup ethernet_mac_macffr MACFFR Ethernet MAC frame filter register
@{*/

/** Ethernet_MAC_MACFFR_RA Receive all **/
#define Ethernet_MAC_MACFFR_RA		(1 << 31)
/** Ethernet_MAC_MACFFR_HPF Hash or perfect filter **/
#define Ethernet_MAC_MACFFR_HPF		(1 << 10)
/** Ethernet_MAC_MACFFR_SAF Source address filter **/
#define Ethernet_MAC_MACFFR_SAF		(1 << 9)
/** Ethernet_MAC_MACFFR_SAIF Source address inverse filtering **/
#define Ethernet_MAC_MACFFR_SAIF		(1 << 8)
/** Ethernet_MAC_MACFFR_PCF Pass control frames **/
#define Ethernet_MAC_MACFFR_PCF		(1 << 6)
/** Ethernet_MAC_MACFFR_BFD Broadcast frames disable **/
#define Ethernet_MAC_MACFFR_BFD		(1 << 5)
/** Ethernet_MAC_MACFFR_PAM Pass all multicast **/
#define Ethernet_MAC_MACFFR_PAM		(1 << 4)
/** Ethernet_MAC_MACFFR_DAIF Destination address inverse filtering **/
#define Ethernet_MAC_MACFFR_DAIF		(1 << 3)
/** Ethernet_MAC_MACFFR_HM Hash multicast **/
#define Ethernet_MAC_MACFFR_HM		(1 << 2)
/** Ethernet_MAC_MACFFR_HU Hash unicast **/
#define Ethernet_MAC_MACFFR_HU		(1 << 1)
/** Ethernet_MAC_MACFFR_PM Promiscuous mode **/
#define Ethernet_MAC_MACFFR_PM		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_machthr MACHTHR Ethernet MAC hash table high register
@{*/


#define Ethernet_MAC_MACHTHR_HTH_SHIFT		0
#define Ethernet_MAC_MACHTHR_HTH_MASK		0xffffffff
/** @defgroup ethernet_mac_machthr_hth HTH Hash table high
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_machtlr MACHTLR Ethernet MAC hash table low register
@{*/


#define Ethernet_MAC_MACHTLR_HTL_SHIFT		0
#define Ethernet_MAC_MACHTLR_HTL_MASK		0xffffffff
/** @defgroup ethernet_mac_machtlr_htl HTL Hash table low
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macmiiar MACMIIAR Ethernet MAC MII address register
@{*/


#define Ethernet_MAC_MACMIIAR_PA_SHIFT		11
#define Ethernet_MAC_MACMIIAR_PA_MASK		0x1f
/** @defgroup ethernet_mac_macmiiar_pa PA PHY address
@{*/
/**@}*/


#define Ethernet_MAC_MACMIIAR_MR_SHIFT		6
#define Ethernet_MAC_MACMIIAR_MR_MASK		0x1f
/** @defgroup ethernet_mac_macmiiar_mr MR MII register
@{*/
/**@}*/


#define Ethernet_MAC_MACMIIAR_CR_SHIFT		2
#define Ethernet_MAC_MACMIIAR_CR_MASK		0x07
/** @defgroup ethernet_mac_macmiiar_cr CR Clock range
@{*/
/**@}*/

/** Ethernet_MAC_MACMIIAR_MW MII write **/
#define Ethernet_MAC_MACMIIAR_MW		(1 << 1)
/** Ethernet_MAC_MACMIIAR_MB MII busy **/
#define Ethernet_MAC_MACMIIAR_MB		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macmiidr MACMIIDR Ethernet MAC MII data register
@{*/


#define Ethernet_MAC_MACMIIDR_MD_SHIFT		0
#define Ethernet_MAC_MACMIIDR_MD_MASK		0xffff
/** @defgroup ethernet_mac_macmiidr_md MD MII data
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macfcr MACFCR Ethernet MAC flow control register
@{*/


#define Ethernet_MAC_MACFCR_PT_SHIFT		16
#define Ethernet_MAC_MACFCR_PT_MASK		0xffff
/** @defgroup ethernet_mac_macfcr_pt PT Pause time
@{*/
/**@}*/

/** Ethernet_MAC_MACFCR_ZQPD Zero-quanta pause disable **/
#define Ethernet_MAC_MACFCR_ZQPD		(1 << 7)

#define Ethernet_MAC_MACFCR_PLT_SHIFT		4
#define Ethernet_MAC_MACFCR_PLT_MASK		0x03
/** @defgroup ethernet_mac_macfcr_plt PLT Pause low threshold
@{*/
/**@}*/

/** Ethernet_MAC_MACFCR_UPFD Unicast pause frame detect **/
#define Ethernet_MAC_MACFCR_UPFD		(1 << 3)
/** Ethernet_MAC_MACFCR_RFCE Receive flow control enable **/
#define Ethernet_MAC_MACFCR_RFCE		(1 << 2)
/** Ethernet_MAC_MACFCR_TFCE Transmit flow control enable **/
#define Ethernet_MAC_MACFCR_TFCE		(1 << 1)
/** Ethernet_MAC_MACFCR_FCB Flow control busy/back pressure activate **/
#define Ethernet_MAC_MACFCR_FCB		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macvlantr MACVLANTR Ethernet MAC VLAN tag register
@{*/

/** Ethernet_MAC_MACVLANTR_VLANTC 12-bit VLAN tag comparison **/
#define Ethernet_MAC_MACVLANTR_VLANTC		(1 << 16)

#define Ethernet_MAC_MACVLANTR_VLANTI_SHIFT		0
#define Ethernet_MAC_MACVLANTR_VLANTI_MASK		0xffff
/** @defgroup ethernet_mac_macvlantr_vlanti VLANTI VLAN tag identifier
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macrwuffr MACRWUFFR Ethernet MAC remote wakeup frame filter register
@{*/


/**@}*/

/** @defgroup ethernet_mac_macpmtcsr MACPMTCSR Ethernet MAC PMT control and status register
@{*/

/** Ethernet_MAC_MACPMTCSR_WFFRPR Wakeup frame filter register pointer reset **/
#define Ethernet_MAC_MACPMTCSR_WFFRPR		(1 << 31)
/** Ethernet_MAC_MACPMTCSR_GU Global unicast **/
#define Ethernet_MAC_MACPMTCSR_GU		(1 << 9)
/** Ethernet_MAC_MACPMTCSR_WFR Wakeup frame received **/
#define Ethernet_MAC_MACPMTCSR_WFR		(1 << 6)
/** Ethernet_MAC_MACPMTCSR_MPR Magic packet received **/
#define Ethernet_MAC_MACPMTCSR_MPR		(1 << 5)
/** Ethernet_MAC_MACPMTCSR_WFE Wakeup frame enable **/
#define Ethernet_MAC_MACPMTCSR_WFE		(1 << 2)
/** Ethernet_MAC_MACPMTCSR_MPE Magic Packet enable **/
#define Ethernet_MAC_MACPMTCSR_MPE		(1 << 1)
/** Ethernet_MAC_MACPMTCSR_PD Power down **/
#define Ethernet_MAC_MACPMTCSR_PD		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macdbgr MACDBGR Ethernet MAC debug register
@{*/

/** Ethernet_MAC_MACDBGR_TFF Tx FIFO full **/
#define Ethernet_MAC_MACDBGR_TFF		(1 << 25)
/** Ethernet_MAC_MACDBGR_TFNE Tx FIFO not empty **/
#define Ethernet_MAC_MACDBGR_TFNE		(1 << 24)
/** Ethernet_MAC_MACDBGR_TFWA Tx FIFO write active **/
#define Ethernet_MAC_MACDBGR_TFWA		(1 << 22)

#define Ethernet_MAC_MACDBGR_TFRS_SHIFT		20
#define Ethernet_MAC_MACDBGR_TFRS_MASK		0x03
/** @defgroup ethernet_mac_macdbgr_tfrs TFRS Tx FIFO read status
@{*/
/**@}*/

/** Ethernet_MAC_MACDBGR_MTP MAC transmitter in pause **/
#define Ethernet_MAC_MACDBGR_MTP		(1 << 19)

#define Ethernet_MAC_MACDBGR_MTFCS_SHIFT		17
#define Ethernet_MAC_MACDBGR_MTFCS_MASK		0x03
/** @defgroup ethernet_mac_macdbgr_mtfcs MTFCS MAC transmit frame controller status
@{*/
/**@}*/

/** Ethernet_MAC_MACDBGR_MMTEA MAC MII transmit engine active **/
#define Ethernet_MAC_MACDBGR_MMTEA		(1 << 16)
/** Ethernet_MAC_MACDBGR_RFFL Rx FIFO fill level **/
#define Ethernet_MAC_MACDBGR_RFFL		(1 << 8)
/** Ethernet_MAC_MACDBGR_RFRCS Rx FIFO read controller status **/
#define Ethernet_MAC_MACDBGR_RFRCS		(1 << 5)
/** Ethernet_MAC_MACDBGR_RFWRA Rx FIFO write controller active **/
#define Ethernet_MAC_MACDBGR_RFWRA		(1 << 4)
/** Ethernet_MAC_MACDBGR_MSFRWCS MAC small FIFO read / write controllers status **/
#define Ethernet_MAC_MACDBGR_MSFRWCS		(1 << 1)
/** Ethernet_MAC_MACDBGR_MMRPEA MAC MII receive protocol engine active **/
#define Ethernet_MAC_MACDBGR_MMRPEA		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macsr MACSR Ethernet MAC interrupt status register
@{*/

/** Ethernet_MAC_MACSR_TSTS Time stamp trigger status **/
#define Ethernet_MAC_MACSR_TSTS		(1 << 9)
/** Ethernet_MAC_MACSR_MMCTS MMC transmit status **/
#define Ethernet_MAC_MACSR_MMCTS		(1 << 6)
/** Ethernet_MAC_MACSR_MMCRS MMC receive status **/
#define Ethernet_MAC_MACSR_MMCRS		(1 << 5)
/** Ethernet_MAC_MACSR_MMCS MMC status **/
#define Ethernet_MAC_MACSR_MMCS		(1 << 4)
/** Ethernet_MAC_MACSR_PMTS PMT status **/
#define Ethernet_MAC_MACSR_PMTS		(1 << 3)

/**@}*/

/** @defgroup ethernet_mac_macimr MACIMR Ethernet MAC interrupt mask register
@{*/

/** Ethernet_MAC_MACIMR_TSTIM Time stamp trigger interrupt mask **/
#define Ethernet_MAC_MACIMR_TSTIM		(1 << 9)
/** Ethernet_MAC_MACIMR_PMTIM PMT interrupt mask **/
#define Ethernet_MAC_MACIMR_PMTIM		(1 << 3)

/**@}*/

/** @defgroup ethernet_mac_maca0hr MACA0HR Ethernet MAC address 0 high register
@{*/

/** Ethernet_MAC_MACA0HR_MO MO **/
#define Ethernet_MAC_MACA0HR_MO		(1 << 31)

#define Ethernet_MAC_MACA0HR_MACA0H_SHIFT		0
#define Ethernet_MAC_MACA0HR_MACA0H_MASK		0xffff
/** @defgroup ethernet_mac_maca0hr_maca0h MACA0H MAC address0 high
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca0lr MACA0LR Ethernet MAC address 0 low register
@{*/


#define Ethernet_MAC_MACA0LR_MACA0L_SHIFT		0
#define Ethernet_MAC_MACA0LR_MACA0L_MASK		0xffffffff
/** @defgroup ethernet_mac_maca0lr_maca0l MACA0L MAC address0 low
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca1hr MACA1HR Ethernet MAC address 1 high register
@{*/

/** Ethernet_MAC_MACA1HR_AE Address enable **/
#define Ethernet_MAC_MACA1HR_AE		(1 << 31)
/** Ethernet_MAC_MACA1HR_SA Source address **/
#define Ethernet_MAC_MACA1HR_SA		(1 << 30)

#define Ethernet_MAC_MACA1HR_MBC_SHIFT		24
#define Ethernet_MAC_MACA1HR_MBC_MASK		0x3f
/** @defgroup ethernet_mac_maca1hr_mbc MBC Mask byte control
@{*/
/**@}*/


#define Ethernet_MAC_MACA1HR_MACA1H_SHIFT		0
#define Ethernet_MAC_MACA1HR_MACA1H_MASK		0xffff
/** @defgroup ethernet_mac_maca1hr_maca1h MACA1H MAC address1 high
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca1lr MACA1LR Ethernet MAC address1 low register
@{*/


#define Ethernet_MAC_MACA1LR_MACA1LR_SHIFT		0
#define Ethernet_MAC_MACA1LR_MACA1LR_MASK		0xffffffff
/** @defgroup ethernet_mac_maca1lr_maca1lr MACA1LR MAC address1 low
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca2hr MACA2HR Ethernet MAC address 2 high register
@{*/

/** Ethernet_MAC_MACA2HR_AE Address enable **/
#define Ethernet_MAC_MACA2HR_AE		(1 << 31)
/** Ethernet_MAC_MACA2HR_SA Source address **/
#define Ethernet_MAC_MACA2HR_SA		(1 << 30)

#define Ethernet_MAC_MACA2HR_MBC_SHIFT		24
#define Ethernet_MAC_MACA2HR_MBC_MASK		0x3f
/** @defgroup ethernet_mac_maca2hr_mbc MBC Mask byte control
@{*/
/**@}*/


#define Ethernet_MAC_MACA2HR_MAC2AH_SHIFT		0
#define Ethernet_MAC_MACA2HR_MAC2AH_MASK		0xffff
/** @defgroup ethernet_mac_maca2hr_mac2ah MAC2AH MAC address2 high
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca2lr MACA2LR Ethernet MAC address 2 low register
@{*/


#define Ethernet_MAC_MACA2LR_MACA2L_SHIFT		0
#define Ethernet_MAC_MACA2LR_MACA2L_MASK		0x7fffffff
/** @defgroup ethernet_mac_maca2lr_maca2l MACA2L MAC address2 low
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca3hr MACA3HR Ethernet MAC address 3 high register
@{*/

/** Ethernet_MAC_MACA3HR_AE Address enable **/
#define Ethernet_MAC_MACA3HR_AE		(1 << 31)
/** Ethernet_MAC_MACA3HR_SA Source address **/
#define Ethernet_MAC_MACA3HR_SA		(1 << 30)

#define Ethernet_MAC_MACA3HR_MBC_SHIFT		24
#define Ethernet_MAC_MACA3HR_MBC_MASK		0x3f
/** @defgroup ethernet_mac_maca3hr_mbc MBC Mask byte control
@{*/
/**@}*/


#define Ethernet_MAC_MACA3HR_MACA3H_SHIFT		0
#define Ethernet_MAC_MACA3HR_MACA3H_MASK		0xffff
/** @defgroup ethernet_mac_maca3hr_maca3h MACA3H MAC address3 high
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca3lr MACA3LR Ethernet MAC address 3 low register
@{*/


#define Ethernet_MAC_MACA3LR_MBCA3L_SHIFT		0
#define Ethernet_MAC_MACA3LR_MBCA3L_MASK		0xffffffff
/** @defgroup ethernet_mac_maca3lr_mbca3l MBCA3L MAC address3 low
@{*/
/**@}*/


/**@}*/

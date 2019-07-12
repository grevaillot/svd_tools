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
/** Ethernet_MAC_MACRWUFFER Ethernet MAC remote wakeup frame filter register **/
#define Ethernet_MAC_MACRWUFFER			MMIO32(Ethernet_MAC_BASE + 0x60)

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

/** Ethernet_MAC_MACFFR_RA no description available **/
#define Ethernet_MAC_MACFFR_RA		(1 << 31)
/** Ethernet_MAC_MACFFR_HPF no description available **/
#define Ethernet_MAC_MACFFR_HPF		(1 << 9)
/** Ethernet_MAC_MACFFR_SAF no description available **/
#define Ethernet_MAC_MACFFR_SAF		(1 << 8)
/** Ethernet_MAC_MACFFR_SAIF no description available **/
#define Ethernet_MAC_MACFFR_SAIF		(1 << 7)
/** Ethernet_MAC_MACFFR_PCF no description available **/
#define Ethernet_MAC_MACFFR_PCF		(1 << 6)
/** Ethernet_MAC_MACFFR_BFD no description available **/
#define Ethernet_MAC_MACFFR_BFD		(1 << 5)
/** Ethernet_MAC_MACFFR_RAM no description available **/
#define Ethernet_MAC_MACFFR_RAM		(1 << 4)
/** Ethernet_MAC_MACFFR_DAIF no description available **/
#define Ethernet_MAC_MACFFR_DAIF		(1 << 3)
/** Ethernet_MAC_MACFFR_HM no description available **/
#define Ethernet_MAC_MACFFR_HM		(1 << 2)
/** Ethernet_MAC_MACFFR_HU no description available **/
#define Ethernet_MAC_MACFFR_HU		(1 << 1)
/** Ethernet_MAC_MACFFR_PM no description available **/
#define Ethernet_MAC_MACFFR_PM		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_machthr MACHTHR Ethernet MAC hash table high register
@{*/


#define Ethernet_MAC_MACHTHR_HTH_SHIFT		0
#define Ethernet_MAC_MACHTHR_HTH_MASK		0xffffffff
/** @defgroup ethernet_mac_machthr_hth HTH no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_machtlr MACHTLR Ethernet MAC hash table low register
@{*/


#define Ethernet_MAC_MACHTLR_HTL_SHIFT		0
#define Ethernet_MAC_MACHTLR_HTL_MASK		0xffffffff
/** @defgroup ethernet_mac_machtlr_htl HTL no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macmiiar MACMIIAR Ethernet MAC MII address register
@{*/


#define Ethernet_MAC_MACMIIAR_PA_SHIFT		11
#define Ethernet_MAC_MACMIIAR_PA_MASK		0x1f
/** @defgroup ethernet_mac_macmiiar_pa PA no description available
@{*/
/**@}*/


#define Ethernet_MAC_MACMIIAR_MR_SHIFT		6
#define Ethernet_MAC_MACMIIAR_MR_MASK		0x1f
/** @defgroup ethernet_mac_macmiiar_mr MR no description available
@{*/
/**@}*/


#define Ethernet_MAC_MACMIIAR_CR_SHIFT		2
#define Ethernet_MAC_MACMIIAR_CR_MASK		0x07
/** @defgroup ethernet_mac_macmiiar_cr CR no description available
@{*/
/**@}*/

/** Ethernet_MAC_MACMIIAR_MW no description available **/
#define Ethernet_MAC_MACMIIAR_MW		(1 << 1)
/** Ethernet_MAC_MACMIIAR_MB no description available **/
#define Ethernet_MAC_MACMIIAR_MB		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macmiidr MACMIIDR Ethernet MAC MII data register
@{*/


#define Ethernet_MAC_MACMIIDR_TD_SHIFT		0
#define Ethernet_MAC_MACMIIDR_TD_MASK		0xffff
/** @defgroup ethernet_mac_macmiidr_td TD no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macfcr MACFCR Ethernet MAC flow control register
@{*/


#define Ethernet_MAC_MACFCR_PT_SHIFT		16
#define Ethernet_MAC_MACFCR_PT_MASK		0xffff
/** @defgroup ethernet_mac_macfcr_pt PT no description available
@{*/
/**@}*/

/** Ethernet_MAC_MACFCR_ZQPD no description available **/
#define Ethernet_MAC_MACFCR_ZQPD		(1 << 7)

#define Ethernet_MAC_MACFCR_PLT_SHIFT		4
#define Ethernet_MAC_MACFCR_PLT_MASK		0x03
/** @defgroup ethernet_mac_macfcr_plt PLT no description available
@{*/
/**@}*/

/** Ethernet_MAC_MACFCR_UPFD no description available **/
#define Ethernet_MAC_MACFCR_UPFD		(1 << 3)
/** Ethernet_MAC_MACFCR_RFCE no description available **/
#define Ethernet_MAC_MACFCR_RFCE		(1 << 2)
/** Ethernet_MAC_MACFCR_TFCE no description available **/
#define Ethernet_MAC_MACFCR_TFCE		(1 << 1)
/** Ethernet_MAC_MACFCR_FCB no description available **/
#define Ethernet_MAC_MACFCR_FCB		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macvlantr MACVLANTR Ethernet MAC VLAN tag register
@{*/

/** Ethernet_MAC_MACVLANTR_VLANTC no description available **/
#define Ethernet_MAC_MACVLANTR_VLANTC		(1 << 16)

#define Ethernet_MAC_MACVLANTR_VLANTI_SHIFT		0
#define Ethernet_MAC_MACVLANTR_VLANTI_MASK		0xffff
/** @defgroup ethernet_mac_macvlantr_vlanti VLANTI no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macpmtcsr MACPMTCSR Ethernet MAC PMT control and status register
@{*/

/** Ethernet_MAC_MACPMTCSR_WFFRPR no description available **/
#define Ethernet_MAC_MACPMTCSR_WFFRPR		(1 << 31)
/** Ethernet_MAC_MACPMTCSR_GU no description available **/
#define Ethernet_MAC_MACPMTCSR_GU		(1 << 9)
/** Ethernet_MAC_MACPMTCSR_WFR no description available **/
#define Ethernet_MAC_MACPMTCSR_WFR		(1 << 6)
/** Ethernet_MAC_MACPMTCSR_MPR no description available **/
#define Ethernet_MAC_MACPMTCSR_MPR		(1 << 5)
/** Ethernet_MAC_MACPMTCSR_WFE no description available **/
#define Ethernet_MAC_MACPMTCSR_WFE		(1 << 2)
/** Ethernet_MAC_MACPMTCSR_MPE no description available **/
#define Ethernet_MAC_MACPMTCSR_MPE		(1 << 1)
/** Ethernet_MAC_MACPMTCSR_PD no description available **/
#define Ethernet_MAC_MACPMTCSR_PD		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macdbgr MACDBGR Ethernet MAC debug register
@{*/

/** Ethernet_MAC_MACDBGR_MCFHP MCFHP **/
#define Ethernet_MAC_MACDBGR_MCFHP		(1 << 5)
/** Ethernet_MAC_MACDBGR_MCP MCP **/
#define Ethernet_MAC_MACDBGR_MCP		(1 << 4)
/** Ethernet_MAC_MACDBGR_MCF MCF **/
#define Ethernet_MAC_MACDBGR_MCF		(1 << 3)
/** Ethernet_MAC_MACDBGR_ROR ROR **/
#define Ethernet_MAC_MACDBGR_ROR		(1 << 2)
/** Ethernet_MAC_MACDBGR_CSR CSR **/
#define Ethernet_MAC_MACDBGR_CSR		(1 << 1)
/** Ethernet_MAC_MACDBGR_CR CR **/
#define Ethernet_MAC_MACDBGR_CR		(1 << 0)

/**@}*/

/** @defgroup ethernet_mac_macsr MACSR Ethernet MAC interrupt status register
@{*/

/** Ethernet_MAC_MACSR_TSTS no description available **/
#define Ethernet_MAC_MACSR_TSTS		(1 << 9)
/** Ethernet_MAC_MACSR_MMCTS no description available **/
#define Ethernet_MAC_MACSR_MMCTS		(1 << 6)
/** Ethernet_MAC_MACSR_MMCRS no description available **/
#define Ethernet_MAC_MACSR_MMCRS		(1 << 5)
/** Ethernet_MAC_MACSR_MMCS no description available **/
#define Ethernet_MAC_MACSR_MMCS		(1 << 4)
/** Ethernet_MAC_MACSR_PMTS no description available **/
#define Ethernet_MAC_MACSR_PMTS		(1 << 3)

/**@}*/

/** @defgroup ethernet_mac_macimr MACIMR Ethernet MAC interrupt mask register
@{*/

/** Ethernet_MAC_MACIMR_TSTIM no description available **/
#define Ethernet_MAC_MACIMR_TSTIM		(1 << 9)
/** Ethernet_MAC_MACIMR_PMTIM no description available **/
#define Ethernet_MAC_MACIMR_PMTIM		(1 << 3)

/**@}*/

/** @defgroup ethernet_mac_maca0hr MACA0HR Ethernet MAC address 0 high register
@{*/

/** Ethernet_MAC_MACA0HR_MO Always 1 **/
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
/** @defgroup ethernet_mac_maca0lr_maca0l MACA0L 0
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca1hr MACA1HR Ethernet MAC address 1 high register
@{*/

/** Ethernet_MAC_MACA1HR_AE no description available **/
#define Ethernet_MAC_MACA1HR_AE		(1 << 31)
/** Ethernet_MAC_MACA1HR_SA no description available **/
#define Ethernet_MAC_MACA1HR_SA		(1 << 30)

#define Ethernet_MAC_MACA1HR_MBC_SHIFT		24
#define Ethernet_MAC_MACA1HR_MBC_MASK		0x3f
/** @defgroup ethernet_mac_maca1hr_mbc MBC no description available
@{*/
/**@}*/


#define Ethernet_MAC_MACA1HR_MACA1H_SHIFT		0
#define Ethernet_MAC_MACA1HR_MACA1H_MASK		0xffff
/** @defgroup ethernet_mac_maca1hr_maca1h MACA1H no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca1lr MACA1LR Ethernet MAC address1 low register
@{*/


#define Ethernet_MAC_MACA1LR_MACA1LR_SHIFT		0
#define Ethernet_MAC_MACA1LR_MACA1LR_MASK		0xffffffff
/** @defgroup ethernet_mac_maca1lr_maca1lr MACA1LR no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca2hr MACA2HR Ethernet MAC address 2 high register
@{*/

/** Ethernet_MAC_MACA2HR_AE no description available **/
#define Ethernet_MAC_MACA2HR_AE		(1 << 31)
/** Ethernet_MAC_MACA2HR_SA no description available **/
#define Ethernet_MAC_MACA2HR_SA		(1 << 30)

#define Ethernet_MAC_MACA2HR_MBC_SHIFT		24
#define Ethernet_MAC_MACA2HR_MBC_MASK		0x3f
/** @defgroup ethernet_mac_maca2hr_mbc MBC no description available
@{*/
/**@}*/


#define Ethernet_MAC_MACA2HR_MAC2AH_SHIFT		0
#define Ethernet_MAC_MACA2HR_MAC2AH_MASK		0xffff
/** @defgroup ethernet_mac_maca2hr_mac2ah MAC2AH no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca2lr MACA2LR Ethernet MAC address 2 low register
@{*/


#define Ethernet_MAC_MACA2LR_MACA2L_SHIFT		0
#define Ethernet_MAC_MACA2LR_MACA2L_MASK		0x7fffffff
/** @defgroup ethernet_mac_maca2lr_maca2l MACA2L no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca3hr MACA3HR Ethernet MAC address 3 high register
@{*/

/** Ethernet_MAC_MACA3HR_AE no description available **/
#define Ethernet_MAC_MACA3HR_AE		(1 << 31)
/** Ethernet_MAC_MACA3HR_SA no description available **/
#define Ethernet_MAC_MACA3HR_SA		(1 << 30)

#define Ethernet_MAC_MACA3HR_MBC_SHIFT		24
#define Ethernet_MAC_MACA3HR_MBC_MASK		0x3f
/** @defgroup ethernet_mac_maca3hr_mbc MBC no description available
@{*/
/**@}*/


#define Ethernet_MAC_MACA3HR_MACA3H_SHIFT		0
#define Ethernet_MAC_MACA3HR_MACA3H_MASK		0xffff
/** @defgroup ethernet_mac_maca3hr_maca3h MACA3H no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_maca3lr MACA3LR Ethernet MAC address 3 low register
@{*/


#define Ethernet_MAC_MACA3LR_MBCA3L_SHIFT		0
#define Ethernet_MAC_MACA3LR_MBCA3L_MASK		0xffffffff
/** @defgroup ethernet_mac_maca3lr_mbca3l MBCA3L no description available
@{*/
/**@}*/


/**@}*/

/** @defgroup ethernet_mac_macrwuffer MACRWUFFER Ethernet MAC remote wakeup frame filter register
@{*/


/**@}*/

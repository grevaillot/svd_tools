#pragma once 

/* --- UDP: USB Device Port ----------------------------------------- */

/** @defgroup udp_registers USB Device Port Register
@{*/

/** UDP_FRM_NUM Frame Number Register **/
#define UDP_FRM_NUM			MMIO32(UDP_BASE + 0x00)
/** UDP_GLB_STAT Global State Register **/
#define UDP_GLB_STAT			MMIO32(UDP_BASE + 0x04)
/** UDP_FADDR Function Address Register **/
#define UDP_FADDR			MMIO32(UDP_BASE + 0x08)
/** UDP_IER Interrupt Enable Register **/
#define UDP_IER			MMIO32(UDP_BASE + 0x10)
/** UDP_IDR Interrupt Disable Register **/
#define UDP_IDR			MMIO32(UDP_BASE + 0x14)
/** UDP_IMR Interrupt Mask Register **/
#define UDP_IMR			MMIO32(UDP_BASE + 0x18)
/** UDP_ISR Interrupt Status Register **/
#define UDP_ISR			MMIO32(UDP_BASE + 0x1c)
/** UDP_ICR Interrupt Clear Register **/
#define UDP_ICR			MMIO32(UDP_BASE + 0x20)
/** UDP_RST_EP Reset Endpoint Register **/
#define UDP_RST_EP			MMIO32(UDP_BASE + 0x28)
/** UDP_CSR0_ISOCHRONOUS Endpoint Control and Status Register **/
#define UDP_CSR0_ISOCHRONOUS			MMIO32(UDP_BASE + 0x30)
/** UDP_CSR[0] Endpoint Control and Status Register **/
#define UDP_CSR[0]			MMIO32(UDP_BASE + 0x30)
/** UDP_CSR[1] Endpoint Control and Status Register **/
#define UDP_CSR[1]			MMIO32(UDP_BASE + 0x34)
/** UDP_CSR[2] Endpoint Control and Status Register **/
#define UDP_CSR[2]			MMIO32(UDP_BASE + 0x38)
/** UDP_CSR[3] Endpoint Control and Status Register **/
#define UDP_CSR[3]			MMIO32(UDP_BASE + 0x3c)
/** UDP_CSR[4] Endpoint Control and Status Register **/
#define UDP_CSR[4]			MMIO32(UDP_BASE + 0x40)
/** UDP_CSR[5] Endpoint Control and Status Register **/
#define UDP_CSR[5]			MMIO32(UDP_BASE + 0x44)
/** UDP_CSR[6] Endpoint Control and Status Register **/
#define UDP_CSR[6]			MMIO32(UDP_BASE + 0x48)
/** UDP_CSR[7] Endpoint Control and Status Register **/
#define UDP_CSR[7]			MMIO32(UDP_BASE + 0x4c)
/** UDP_FDR[0] Endpoint FIFO Data Register **/
#define UDP_FDR[0]			MMIO32(UDP_BASE + 0x50)
/** UDP_FDR[1] Endpoint FIFO Data Register **/
#define UDP_FDR[1]			MMIO32(UDP_BASE + 0x54)
/** UDP_FDR[2] Endpoint FIFO Data Register **/
#define UDP_FDR[2]			MMIO32(UDP_BASE + 0x58)
/** UDP_FDR[3] Endpoint FIFO Data Register **/
#define UDP_FDR[3]			MMIO32(UDP_BASE + 0x5c)
/** UDP_FDR[4] Endpoint FIFO Data Register **/
#define UDP_FDR[4]			MMIO32(UDP_BASE + 0x60)
/** UDP_FDR[5] Endpoint FIFO Data Register **/
#define UDP_FDR[5]			MMIO32(UDP_BASE + 0x64)
/** UDP_FDR[6] Endpoint FIFO Data Register **/
#define UDP_FDR[6]			MMIO32(UDP_BASE + 0x68)
/** UDP_FDR[7] Endpoint FIFO Data Register **/
#define UDP_FDR[7]			MMIO32(UDP_BASE + 0x6c)
/** UDP_TXVC Transceiver Control Register **/
#define UDP_TXVC			MMIO32(UDP_BASE + 0x74)

/**@}*/


/** @defgroup udp_frm_num FRMNUM Frame Number Register
@{*/

/** UDP_FRM_NUM_FRM_OK Frame OK **/
#define UDP_FRM_NUM_FRM_OK		(1 << 17)
/** UDP_FRM_NUM_FRM_ERR Frame Error **/
#define UDP_FRM_NUM_FRM_ERR		(1 << 16)

#define UDP_FRM_NUM_FRM_NUM_SHIFT		0
#define UDP_FRM_NUM_FRM_NUM_MASK		0x7ff
/** @defgroup udp_frm_num_frm_num FRMNUM Frame Number as Defined in the Packet Field Formats
@{*/
/**@}*/


/**@}*/

/** @defgroup udp_glb_stat GLBSTAT Global State Register
@{*/

/** UDP_GLB_STAT_RMWUPE Remote Wakeup Enable **/
#define UDP_GLB_STAT_RMWUPE		(1 << 4)
/** UDP_GLB_STAT_RSMINPR  **/
#define UDP_GLB_STAT_RSMINPR		(1 << 3)
/** UDP_GLB_STAT_ESR Enable Send Resume **/
#define UDP_GLB_STAT_ESR		(1 << 2)
/** UDP_GLB_STAT_CONFG Configured **/
#define UDP_GLB_STAT_CONFG		(1 << 1)
/** UDP_GLB_STAT_FADDEN Function Address Enable **/
#define UDP_GLB_STAT_FADDEN		(1 << 0)

/**@}*/

/** @defgroup udp_faddr FADDR Function Address Register
@{*/

/** UDP_FADDR_FEN Function Enable **/
#define UDP_FADDR_FEN		(1 << 8)

#define UDP_FADDR_FADD_SHIFT		0
#define UDP_FADDR_FADD_MASK		0x7f
/** @defgroup udp_faddr_fadd FADD Function Address Value
@{*/
/**@}*/


/**@}*/

/** @defgroup udp_ier IER Interrupt Enable Register
@{*/

/** UDP_IER_WAKEUP Enable UDP Bus Wakeup Interrupt **/
#define UDP_IER_WAKEUP		(1 << 13)
/** UDP_IER_SOFINT Enable Start Of Frame Interrupt **/
#define UDP_IER_SOFINT		(1 << 11)
/** UDP_IER_EXTRSM  **/
#define UDP_IER_EXTRSM		(1 << 10)
/** UDP_IER_RXRSM Enable UDP Resume Interrupt **/
#define UDP_IER_RXRSM		(1 << 9)
/** UDP_IER_RXSUSP Enable UDP Suspend Interrupt **/
#define UDP_IER_RXSUSP		(1 << 8)
/** UDP_IER_EP7INT Enable Endpoint 7 Interrupt **/
#define UDP_IER_EP7INT		(1 << 7)
/** UDP_IER_EP6INT Enable Endpoint 6 Interrupt **/
#define UDP_IER_EP6INT		(1 << 6)
/** UDP_IER_EP5INT Enable Endpoint 5 Interrupt **/
#define UDP_IER_EP5INT		(1 << 5)
/** UDP_IER_EP4INT Enable Endpoint 4 Interrupt **/
#define UDP_IER_EP4INT		(1 << 4)
/** UDP_IER_EP3INT Enable Endpoint 3 Interrupt **/
#define UDP_IER_EP3INT		(1 << 3)
/** UDP_IER_EP2INT Enable Endpoint 2Interrupt **/
#define UDP_IER_EP2INT		(1 << 2)
/** UDP_IER_EP1INT Enable Endpoint 1 Interrupt **/
#define UDP_IER_EP1INT		(1 << 1)
/** UDP_IER_EP0INT Enable Endpoint 0 Interrupt **/
#define UDP_IER_EP0INT		(1 << 0)

/**@}*/

/** @defgroup udp_idr IDR Interrupt Disable Register
@{*/

/** UDP_IDR_WAKEUP Disable USB Bus Interrupt **/
#define UDP_IDR_WAKEUP		(1 << 13)
/** UDP_IDR_SOFINT Disable Start Of Frame Interrupt **/
#define UDP_IDR_SOFINT		(1 << 11)
/** UDP_IDR_EXTRSM  **/
#define UDP_IDR_EXTRSM		(1 << 10)
/** UDP_IDR_RXRSM Disable UDP Resume Interrupt **/
#define UDP_IDR_RXRSM		(1 << 9)
/** UDP_IDR_RXSUSP Disable UDP Suspend Interrupt **/
#define UDP_IDR_RXSUSP		(1 << 8)
/** UDP_IDR_EP7INT Disable Endpoint 7 Interrupt **/
#define UDP_IDR_EP7INT		(1 << 7)
/** UDP_IDR_EP6INT Disable Endpoint 6 Interrupt **/
#define UDP_IDR_EP6INT		(1 << 6)
/** UDP_IDR_EP5INT Disable Endpoint 5 Interrupt **/
#define UDP_IDR_EP5INT		(1 << 5)
/** UDP_IDR_EP4INT Disable Endpoint 4 Interrupt **/
#define UDP_IDR_EP4INT		(1 << 4)
/** UDP_IDR_EP3INT Disable Endpoint 3 Interrupt **/
#define UDP_IDR_EP3INT		(1 << 3)
/** UDP_IDR_EP2INT Disable Endpoint 2 Interrupt **/
#define UDP_IDR_EP2INT		(1 << 2)
/** UDP_IDR_EP1INT Disable Endpoint 1 Interrupt **/
#define UDP_IDR_EP1INT		(1 << 1)
/** UDP_IDR_EP0INT Disable Endpoint 0 Interrupt **/
#define UDP_IDR_EP0INT		(1 << 0)

/**@}*/

/** @defgroup udp_imr IMR Interrupt Mask Register
@{*/

/** UDP_IMR_WAKEUP USB Bus Wakeup Interrupt **/
#define UDP_IMR_WAKEUP		(1 << 13)
/** UDP_IMR_BIT12 UDP_IMR Bit 12 **/
#define UDP_IMR_BIT12		(1 << 12)
/** UDP_IMR_SOFINT Mask Start Of Frame Interrupt **/
#define UDP_IMR_SOFINT		(1 << 11)
/** UDP_IMR_EXTRSM  **/
#define UDP_IMR_EXTRSM		(1 << 10)
/** UDP_IMR_RXRSM Mask UDP Resume Interrupt. **/
#define UDP_IMR_RXRSM		(1 << 9)
/** UDP_IMR_RXSUSP Mask UDP Suspend Interrupt **/
#define UDP_IMR_RXSUSP		(1 << 8)
/** UDP_IMR_EP7INT Mask Endpoint 7 Interrupt **/
#define UDP_IMR_EP7INT		(1 << 7)
/** UDP_IMR_EP6INT Mask Endpoint 6 Interrupt **/
#define UDP_IMR_EP6INT		(1 << 6)
/** UDP_IMR_EP5INT Mask Endpoint 5 Interrupt **/
#define UDP_IMR_EP5INT		(1 << 5)
/** UDP_IMR_EP4INT Mask Endpoint 4 Interrupt **/
#define UDP_IMR_EP4INT		(1 << 4)
/** UDP_IMR_EP3INT Mask Endpoint 3 Interrupt **/
#define UDP_IMR_EP3INT		(1 << 3)
/** UDP_IMR_EP2INT Mask Endpoint 2 Interrupt **/
#define UDP_IMR_EP2INT		(1 << 2)
/** UDP_IMR_EP1INT Mask Endpoint 1 Interrupt **/
#define UDP_IMR_EP1INT		(1 << 1)
/** UDP_IMR_EP0INT Mask Endpoint 0 Interrupt **/
#define UDP_IMR_EP0INT		(1 << 0)

/**@}*/

/** @defgroup udp_isr ISR Interrupt Status Register
@{*/

/** UDP_ISR_WAKEUP UDP Resume Interrupt Status **/
#define UDP_ISR_WAKEUP		(1 << 13)
/** UDP_ISR_ENDBUSRES End of BUS Reset Interrupt Status **/
#define UDP_ISR_ENDBUSRES		(1 << 12)
/** UDP_ISR_SOFINT Start of Frame Interrupt Status **/
#define UDP_ISR_SOFINT		(1 << 11)
/** UDP_ISR_EXTRSM  **/
#define UDP_ISR_EXTRSM		(1 << 10)
/** UDP_ISR_RXRSM UDP Resume Interrupt Status **/
#define UDP_ISR_RXRSM		(1 << 9)
/** UDP_ISR_RXSUSP UDP Suspend Interrupt Status **/
#define UDP_ISR_RXSUSP		(1 << 8)
/** UDP_ISR_EP7INT Endpoint 7Interrupt Status **/
#define UDP_ISR_EP7INT		(1 << 7)
/** UDP_ISR_EP6INT Endpoint 6 Interrupt Status **/
#define UDP_ISR_EP6INT		(1 << 6)
/** UDP_ISR_EP5INT Endpoint 5 Interrupt Status **/
#define UDP_ISR_EP5INT		(1 << 5)
/** UDP_ISR_EP4INT Endpoint 4 Interrupt Status **/
#define UDP_ISR_EP4INT		(1 << 4)
/** UDP_ISR_EP3INT Endpoint 3 Interrupt Status **/
#define UDP_ISR_EP3INT		(1 << 3)
/** UDP_ISR_EP2INT Endpoint 2 Interrupt Status **/
#define UDP_ISR_EP2INT		(1 << 2)
/** UDP_ISR_EP1INT Endpoint 1 Interrupt Status **/
#define UDP_ISR_EP1INT		(1 << 1)
/** UDP_ISR_EP0INT Endpoint 0 Interrupt Status **/
#define UDP_ISR_EP0INT		(1 << 0)

/**@}*/

/** @defgroup udp_icr ICR Interrupt Clear Register
@{*/

/** UDP_ICR_WAKEUP Clear Wakeup Interrupt **/
#define UDP_ICR_WAKEUP		(1 << 13)
/** UDP_ICR_ENDBUSRES Clear End of Bus Reset Interrupt **/
#define UDP_ICR_ENDBUSRES		(1 << 12)
/** UDP_ICR_SOFINT Clear Start Of Frame Interrupt **/
#define UDP_ICR_SOFINT		(1 << 11)
/** UDP_ICR_EXTRSM  **/
#define UDP_ICR_EXTRSM		(1 << 10)
/** UDP_ICR_RXRSM Clear UDP Resume Interrupt **/
#define UDP_ICR_RXRSM		(1 << 9)
/** UDP_ICR_RXSUSP Clear UDP Suspend Interrupt **/
#define UDP_ICR_RXSUSP		(1 << 8)

/**@}*/

/** @defgroup udp_rst_ep RSTEP Reset Endpoint Register
@{*/

/** UDP_RST_EP_EP7 Reset Endpoint 7 **/
#define UDP_RST_EP_EP7		(1 << 7)
/** UDP_RST_EP_EP6 Reset Endpoint 6 **/
#define UDP_RST_EP_EP6		(1 << 6)
/** UDP_RST_EP_EP5 Reset Endpoint 5 **/
#define UDP_RST_EP_EP5		(1 << 5)
/** UDP_RST_EP_EP4 Reset Endpoint 4 **/
#define UDP_RST_EP_EP4		(1 << 4)
/** UDP_RST_EP_EP3 Reset Endpoint 3 **/
#define UDP_RST_EP_EP3		(1 << 3)
/** UDP_RST_EP_EP2 Reset Endpoint 2 **/
#define UDP_RST_EP_EP2		(1 << 2)
/** UDP_RST_EP_EP1 Reset Endpoint 1 **/
#define UDP_RST_EP_EP1		(1 << 1)
/** UDP_RST_EP_EP0 Reset Endpoint 0 **/
#define UDP_RST_EP_EP0		(1 << 0)

/**@}*/

/** @defgroup udp_csr0_isochronous CSR0ISOCHRONOUS Endpoint Control and Status Register
@{*/


#define UDP_CSR0_ISOCHRONOUS_RXBYTECNT_SHIFT		16
#define UDP_CSR0_ISOCHRONOUS_RXBYTECNT_MASK		0x7ff
/** @defgroup udp_csr0_isochronous_rxbytecnt RXBYTECNT Number of Bytes Available in the FIFO (Read-only)
@{*/
/**@}*/

/** UDP_CSR0_ISOCHRONOUS_EPEDS Endpoint Enable Disable **/
#define UDP_CSR0_ISOCHRONOUS_EPEDS		(1 << 15)
/** UDP_CSR0_ISOCHRONOUS_DTGLE Data Toggle (Read-only) **/
#define UDP_CSR0_ISOCHRONOUS_DTGLE		(1 << 11)

#define UDP_CSR0_ISOCHRONOUS_EPTYPE_SHIFT		8
#define UDP_CSR0_ISOCHRONOUS_EPTYPE_MASK		0x07
/** @defgroup udp_csr0_isochronous_eptype EPTYPE Endpoint Type (Read/Write)
@{*/
/**@}*/

/** UDP_CSR0_ISOCHRONOUS_DIR Transfer Direction (only available for control endpoints) (Read/Write) **/
#define UDP_CSR0_ISOCHRONOUS_DIR		(1 << 7)
/** UDP_CSR0_ISOCHRONOUS_RX_DATA_BK1 Receive Data Bank 1 (only used by endpoints with ping-pong attributes) **/
#define UDP_CSR0_ISOCHRONOUS_RX_DATA_BK1		(1 << 6)
/** UDP_CSR0_ISOCHRONOUS_FORCESTALL Force Stall (used by Control, Bulk and Isochronous Endpoints) **/
#define UDP_CSR0_ISOCHRONOUS_FORCESTALL		(1 << 5)
/** UDP_CSR0_ISOCHRONOUS_TXPKTRDY Transmit Packet Ready **/
#define UDP_CSR0_ISOCHRONOUS_TXPKTRDY		(1 << 4)
/** UDP_CSR0_ISOCHRONOUS_ISOERROR A CRC error has been detected in an isochronous transfer **/
#define UDP_CSR0_ISOCHRONOUS_ISOERROR		(1 << 3)
/** UDP_CSR0_ISOCHRONOUS_RXSETUP Received Setup **/
#define UDP_CSR0_ISOCHRONOUS_RXSETUP		(1 << 2)
/** UDP_CSR0_ISOCHRONOUS_RX_DATA_BK0 Receive Data Bank 0 **/
#define UDP_CSR0_ISOCHRONOUS_RX_DATA_BK0		(1 << 1)
/** UDP_CSR0_ISOCHRONOUS_TXCOMP Generates an IN Packet with Data Previously Written in the DPR **/
#define UDP_CSR0_ISOCHRONOUS_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup udp_csr[0] CSR[0] Endpoint Control and Status Register
@{*/


#define UDP_CSR[0]_RXBYTECNT_SHIFT		16
#define UDP_CSR[0]_RXBYTECNT_MASK		0x7ff
/** @defgroup udp_csr[0]_rxbytecnt RXBYTECNT Number of Bytes Available in the FIFO (Read-only)
@{*/
/**@}*/

/** UDP_CSR[0]_EPEDS Endpoint Enable Disable **/
#define UDP_CSR[0]_EPEDS		(1 << 15)
/** UDP_CSR[0]_DTGLE Data Toggle (Read-only) **/
#define UDP_CSR[0]_DTGLE		(1 << 11)

#define UDP_CSR[0]_EPTYPE_SHIFT		8
#define UDP_CSR[0]_EPTYPE_MASK		0x07
/** @defgroup udp_csr[0]_eptype EPTYPE Endpoint Type (Read/Write)
@{*/
/**@}*/

/** UDP_CSR[0]_DIR Transfer Direction (only available for control endpoints) (Read/Write) **/
#define UDP_CSR[0]_DIR		(1 << 7)
/** UDP_CSR[0]_RX_DATA_BK1 Receive Data Bank 1 (only used by endpoints with ping-pong attributes) **/
#define UDP_CSR[0]_RX_DATA_BK1		(1 << 6)
/** UDP_CSR[0]_FORCESTALL Force Stall (used by Control, Bulk and Isochronous Endpoints) **/
#define UDP_CSR[0]_FORCESTALL		(1 << 5)
/** UDP_CSR[0]_TXPKTRDY Transmit Packet Ready **/
#define UDP_CSR[0]_TXPKTRDY		(1 << 4)
/** UDP_CSR[0]_STALLSENT Stall Sent **/
#define UDP_CSR[0]_STALLSENT		(1 << 3)
/** UDP_CSR[0]_RXSETUP Received Setup **/
#define UDP_CSR[0]_RXSETUP		(1 << 2)
/** UDP_CSR[0]_RX_DATA_BK0 Receive Data Bank 0 **/
#define UDP_CSR[0]_RX_DATA_BK0		(1 << 1)
/** UDP_CSR[0]_TXCOMP Generates an IN Packet with Data Previously Written in the DPR **/
#define UDP_CSR[0]_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup udp_csr[1] CSR[1] Endpoint Control and Status Register
@{*/


#define UDP_CSR[1]_RXBYTECNT_SHIFT		16
#define UDP_CSR[1]_RXBYTECNT_MASK		0x7ff
/** @defgroup udp_csr[1]_rxbytecnt RXBYTECNT Number of Bytes Available in the FIFO (Read-only)
@{*/
/**@}*/

/** UDP_CSR[1]_EPEDS Endpoint Enable Disable **/
#define UDP_CSR[1]_EPEDS		(1 << 15)
/** UDP_CSR[1]_DTGLE Data Toggle (Read-only) **/
#define UDP_CSR[1]_DTGLE		(1 << 11)

#define UDP_CSR[1]_EPTYPE_SHIFT		8
#define UDP_CSR[1]_EPTYPE_MASK		0x07
/** @defgroup udp_csr[1]_eptype EPTYPE Endpoint Type (Read/Write)
@{*/
/**@}*/

/** UDP_CSR[1]_DIR Transfer Direction (only available for control endpoints) (Read/Write) **/
#define UDP_CSR[1]_DIR		(1 << 7)
/** UDP_CSR[1]_RX_DATA_BK1 Receive Data Bank 1 (only used by endpoints with ping-pong attributes) **/
#define UDP_CSR[1]_RX_DATA_BK1		(1 << 6)
/** UDP_CSR[1]_FORCESTALL Force Stall (used by Control, Bulk and Isochronous Endpoints) **/
#define UDP_CSR[1]_FORCESTALL		(1 << 5)
/** UDP_CSR[1]_TXPKTRDY Transmit Packet Ready **/
#define UDP_CSR[1]_TXPKTRDY		(1 << 4)
/** UDP_CSR[1]_STALLSENT Stall Sent **/
#define UDP_CSR[1]_STALLSENT		(1 << 3)
/** UDP_CSR[1]_RXSETUP Received Setup **/
#define UDP_CSR[1]_RXSETUP		(1 << 2)
/** UDP_CSR[1]_RX_DATA_BK0 Receive Data Bank 0 **/
#define UDP_CSR[1]_RX_DATA_BK0		(1 << 1)
/** UDP_CSR[1]_TXCOMP Generates an IN Packet with Data Previously Written in the DPR **/
#define UDP_CSR[1]_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup udp_csr[2] CSR[2] Endpoint Control and Status Register
@{*/


#define UDP_CSR[2]_RXBYTECNT_SHIFT		16
#define UDP_CSR[2]_RXBYTECNT_MASK		0x7ff
/** @defgroup udp_csr[2]_rxbytecnt RXBYTECNT Number of Bytes Available in the FIFO (Read-only)
@{*/
/**@}*/

/** UDP_CSR[2]_EPEDS Endpoint Enable Disable **/
#define UDP_CSR[2]_EPEDS		(1 << 15)
/** UDP_CSR[2]_DTGLE Data Toggle (Read-only) **/
#define UDP_CSR[2]_DTGLE		(1 << 11)

#define UDP_CSR[2]_EPTYPE_SHIFT		8
#define UDP_CSR[2]_EPTYPE_MASK		0x07
/** @defgroup udp_csr[2]_eptype EPTYPE Endpoint Type (Read/Write)
@{*/
/**@}*/

/** UDP_CSR[2]_DIR Transfer Direction (only available for control endpoints) (Read/Write) **/
#define UDP_CSR[2]_DIR		(1 << 7)
/** UDP_CSR[2]_RX_DATA_BK1 Receive Data Bank 1 (only used by endpoints with ping-pong attributes) **/
#define UDP_CSR[2]_RX_DATA_BK1		(1 << 6)
/** UDP_CSR[2]_FORCESTALL Force Stall (used by Control, Bulk and Isochronous Endpoints) **/
#define UDP_CSR[2]_FORCESTALL		(1 << 5)
/** UDP_CSR[2]_TXPKTRDY Transmit Packet Ready **/
#define UDP_CSR[2]_TXPKTRDY		(1 << 4)
/** UDP_CSR[2]_STALLSENT Stall Sent **/
#define UDP_CSR[2]_STALLSENT		(1 << 3)
/** UDP_CSR[2]_RXSETUP Received Setup **/
#define UDP_CSR[2]_RXSETUP		(1 << 2)
/** UDP_CSR[2]_RX_DATA_BK0 Receive Data Bank 0 **/
#define UDP_CSR[2]_RX_DATA_BK0		(1 << 1)
/** UDP_CSR[2]_TXCOMP Generates an IN Packet with Data Previously Written in the DPR **/
#define UDP_CSR[2]_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup udp_csr[3] CSR[3] Endpoint Control and Status Register
@{*/


#define UDP_CSR[3]_RXBYTECNT_SHIFT		16
#define UDP_CSR[3]_RXBYTECNT_MASK		0x7ff
/** @defgroup udp_csr[3]_rxbytecnt RXBYTECNT Number of Bytes Available in the FIFO (Read-only)
@{*/
/**@}*/

/** UDP_CSR[3]_EPEDS Endpoint Enable Disable **/
#define UDP_CSR[3]_EPEDS		(1 << 15)
/** UDP_CSR[3]_DTGLE Data Toggle (Read-only) **/
#define UDP_CSR[3]_DTGLE		(1 << 11)

#define UDP_CSR[3]_EPTYPE_SHIFT		8
#define UDP_CSR[3]_EPTYPE_MASK		0x07
/** @defgroup udp_csr[3]_eptype EPTYPE Endpoint Type (Read/Write)
@{*/
/**@}*/

/** UDP_CSR[3]_DIR Transfer Direction (only available for control endpoints) (Read/Write) **/
#define UDP_CSR[3]_DIR		(1 << 7)
/** UDP_CSR[3]_RX_DATA_BK1 Receive Data Bank 1 (only used by endpoints with ping-pong attributes) **/
#define UDP_CSR[3]_RX_DATA_BK1		(1 << 6)
/** UDP_CSR[3]_FORCESTALL Force Stall (used by Control, Bulk and Isochronous Endpoints) **/
#define UDP_CSR[3]_FORCESTALL		(1 << 5)
/** UDP_CSR[3]_TXPKTRDY Transmit Packet Ready **/
#define UDP_CSR[3]_TXPKTRDY		(1 << 4)
/** UDP_CSR[3]_STALLSENT Stall Sent **/
#define UDP_CSR[3]_STALLSENT		(1 << 3)
/** UDP_CSR[3]_RXSETUP Received Setup **/
#define UDP_CSR[3]_RXSETUP		(1 << 2)
/** UDP_CSR[3]_RX_DATA_BK0 Receive Data Bank 0 **/
#define UDP_CSR[3]_RX_DATA_BK0		(1 << 1)
/** UDP_CSR[3]_TXCOMP Generates an IN Packet with Data Previously Written in the DPR **/
#define UDP_CSR[3]_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup udp_csr[4] CSR[4] Endpoint Control and Status Register
@{*/


#define UDP_CSR[4]_RXBYTECNT_SHIFT		16
#define UDP_CSR[4]_RXBYTECNT_MASK		0x7ff
/** @defgroup udp_csr[4]_rxbytecnt RXBYTECNT Number of Bytes Available in the FIFO (Read-only)
@{*/
/**@}*/

/** UDP_CSR[4]_EPEDS Endpoint Enable Disable **/
#define UDP_CSR[4]_EPEDS		(1 << 15)
/** UDP_CSR[4]_DTGLE Data Toggle (Read-only) **/
#define UDP_CSR[4]_DTGLE		(1 << 11)

#define UDP_CSR[4]_EPTYPE_SHIFT		8
#define UDP_CSR[4]_EPTYPE_MASK		0x07
/** @defgroup udp_csr[4]_eptype EPTYPE Endpoint Type (Read/Write)
@{*/
/**@}*/

/** UDP_CSR[4]_DIR Transfer Direction (only available for control endpoints) (Read/Write) **/
#define UDP_CSR[4]_DIR		(1 << 7)
/** UDP_CSR[4]_RX_DATA_BK1 Receive Data Bank 1 (only used by endpoints with ping-pong attributes) **/
#define UDP_CSR[4]_RX_DATA_BK1		(1 << 6)
/** UDP_CSR[4]_FORCESTALL Force Stall (used by Control, Bulk and Isochronous Endpoints) **/
#define UDP_CSR[4]_FORCESTALL		(1 << 5)
/** UDP_CSR[4]_TXPKTRDY Transmit Packet Ready **/
#define UDP_CSR[4]_TXPKTRDY		(1 << 4)
/** UDP_CSR[4]_STALLSENT Stall Sent **/
#define UDP_CSR[4]_STALLSENT		(1 << 3)
/** UDP_CSR[4]_RXSETUP Received Setup **/
#define UDP_CSR[4]_RXSETUP		(1 << 2)
/** UDP_CSR[4]_RX_DATA_BK0 Receive Data Bank 0 **/
#define UDP_CSR[4]_RX_DATA_BK0		(1 << 1)
/** UDP_CSR[4]_TXCOMP Generates an IN Packet with Data Previously Written in the DPR **/
#define UDP_CSR[4]_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup udp_csr[5] CSR[5] Endpoint Control and Status Register
@{*/


#define UDP_CSR[5]_RXBYTECNT_SHIFT		16
#define UDP_CSR[5]_RXBYTECNT_MASK		0x7ff
/** @defgroup udp_csr[5]_rxbytecnt RXBYTECNT Number of Bytes Available in the FIFO (Read-only)
@{*/
/**@}*/

/** UDP_CSR[5]_EPEDS Endpoint Enable Disable **/
#define UDP_CSR[5]_EPEDS		(1 << 15)
/** UDP_CSR[5]_DTGLE Data Toggle (Read-only) **/
#define UDP_CSR[5]_DTGLE		(1 << 11)

#define UDP_CSR[5]_EPTYPE_SHIFT		8
#define UDP_CSR[5]_EPTYPE_MASK		0x07
/** @defgroup udp_csr[5]_eptype EPTYPE Endpoint Type (Read/Write)
@{*/
/**@}*/

/** UDP_CSR[5]_DIR Transfer Direction (only available for control endpoints) (Read/Write) **/
#define UDP_CSR[5]_DIR		(1 << 7)
/** UDP_CSR[5]_RX_DATA_BK1 Receive Data Bank 1 (only used by endpoints with ping-pong attributes) **/
#define UDP_CSR[5]_RX_DATA_BK1		(1 << 6)
/** UDP_CSR[5]_FORCESTALL Force Stall (used by Control, Bulk and Isochronous Endpoints) **/
#define UDP_CSR[5]_FORCESTALL		(1 << 5)
/** UDP_CSR[5]_TXPKTRDY Transmit Packet Ready **/
#define UDP_CSR[5]_TXPKTRDY		(1 << 4)
/** UDP_CSR[5]_STALLSENT Stall Sent **/
#define UDP_CSR[5]_STALLSENT		(1 << 3)
/** UDP_CSR[5]_RXSETUP Received Setup **/
#define UDP_CSR[5]_RXSETUP		(1 << 2)
/** UDP_CSR[5]_RX_DATA_BK0 Receive Data Bank 0 **/
#define UDP_CSR[5]_RX_DATA_BK0		(1 << 1)
/** UDP_CSR[5]_TXCOMP Generates an IN Packet with Data Previously Written in the DPR **/
#define UDP_CSR[5]_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup udp_csr[6] CSR[6] Endpoint Control and Status Register
@{*/


#define UDP_CSR[6]_RXBYTECNT_SHIFT		16
#define UDP_CSR[6]_RXBYTECNT_MASK		0x7ff
/** @defgroup udp_csr[6]_rxbytecnt RXBYTECNT Number of Bytes Available in the FIFO (Read-only)
@{*/
/**@}*/

/** UDP_CSR[6]_EPEDS Endpoint Enable Disable **/
#define UDP_CSR[6]_EPEDS		(1 << 15)
/** UDP_CSR[6]_DTGLE Data Toggle (Read-only) **/
#define UDP_CSR[6]_DTGLE		(1 << 11)

#define UDP_CSR[6]_EPTYPE_SHIFT		8
#define UDP_CSR[6]_EPTYPE_MASK		0x07
/** @defgroup udp_csr[6]_eptype EPTYPE Endpoint Type (Read/Write)
@{*/
/**@}*/

/** UDP_CSR[6]_DIR Transfer Direction (only available for control endpoints) (Read/Write) **/
#define UDP_CSR[6]_DIR		(1 << 7)
/** UDP_CSR[6]_RX_DATA_BK1 Receive Data Bank 1 (only used by endpoints with ping-pong attributes) **/
#define UDP_CSR[6]_RX_DATA_BK1		(1 << 6)
/** UDP_CSR[6]_FORCESTALL Force Stall (used by Control, Bulk and Isochronous Endpoints) **/
#define UDP_CSR[6]_FORCESTALL		(1 << 5)
/** UDP_CSR[6]_TXPKTRDY Transmit Packet Ready **/
#define UDP_CSR[6]_TXPKTRDY		(1 << 4)
/** UDP_CSR[6]_STALLSENT Stall Sent **/
#define UDP_CSR[6]_STALLSENT		(1 << 3)
/** UDP_CSR[6]_RXSETUP Received Setup **/
#define UDP_CSR[6]_RXSETUP		(1 << 2)
/** UDP_CSR[6]_RX_DATA_BK0 Receive Data Bank 0 **/
#define UDP_CSR[6]_RX_DATA_BK0		(1 << 1)
/** UDP_CSR[6]_TXCOMP Generates an IN Packet with Data Previously Written in the DPR **/
#define UDP_CSR[6]_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup udp_csr[7] CSR[7] Endpoint Control and Status Register
@{*/


#define UDP_CSR[7]_RXBYTECNT_SHIFT		16
#define UDP_CSR[7]_RXBYTECNT_MASK		0x7ff
/** @defgroup udp_csr[7]_rxbytecnt RXBYTECNT Number of Bytes Available in the FIFO (Read-only)
@{*/
/**@}*/

/** UDP_CSR[7]_EPEDS Endpoint Enable Disable **/
#define UDP_CSR[7]_EPEDS		(1 << 15)
/** UDP_CSR[7]_DTGLE Data Toggle (Read-only) **/
#define UDP_CSR[7]_DTGLE		(1 << 11)

#define UDP_CSR[7]_EPTYPE_SHIFT		8
#define UDP_CSR[7]_EPTYPE_MASK		0x07
/** @defgroup udp_csr[7]_eptype EPTYPE Endpoint Type (Read/Write)
@{*/
/**@}*/

/** UDP_CSR[7]_DIR Transfer Direction (only available for control endpoints) (Read/Write) **/
#define UDP_CSR[7]_DIR		(1 << 7)
/** UDP_CSR[7]_RX_DATA_BK1 Receive Data Bank 1 (only used by endpoints with ping-pong attributes) **/
#define UDP_CSR[7]_RX_DATA_BK1		(1 << 6)
/** UDP_CSR[7]_FORCESTALL Force Stall (used by Control, Bulk and Isochronous Endpoints) **/
#define UDP_CSR[7]_FORCESTALL		(1 << 5)
/** UDP_CSR[7]_TXPKTRDY Transmit Packet Ready **/
#define UDP_CSR[7]_TXPKTRDY		(1 << 4)
/** UDP_CSR[7]_STALLSENT Stall Sent **/
#define UDP_CSR[7]_STALLSENT		(1 << 3)
/** UDP_CSR[7]_RXSETUP Received Setup **/
#define UDP_CSR[7]_RXSETUP		(1 << 2)
/** UDP_CSR[7]_RX_DATA_BK0 Receive Data Bank 0 **/
#define UDP_CSR[7]_RX_DATA_BK0		(1 << 1)
/** UDP_CSR[7]_TXCOMP Generates an IN Packet with Data Previously Written in the DPR **/
#define UDP_CSR[7]_TXCOMP		(1 << 0)

/**@}*/

/** @defgroup udp_fdr[0] FDR[0] Endpoint FIFO Data Register
@{*/


#define UDP_FDR[0]_FIFO_DATA_SHIFT		0
#define UDP_FDR[0]_FIFO_DATA_MASK		0xff
/** @defgroup udp_fdr[0]_fifo_data FIFODATA FIFO Data Value
@{*/
/**@}*/


/**@}*/

/** @defgroup udp_fdr[1] FDR[1] Endpoint FIFO Data Register
@{*/


#define UDP_FDR[1]_FIFO_DATA_SHIFT		0
#define UDP_FDR[1]_FIFO_DATA_MASK		0xff
/** @defgroup udp_fdr[1]_fifo_data FIFODATA FIFO Data Value
@{*/
/**@}*/


/**@}*/

/** @defgroup udp_fdr[2] FDR[2] Endpoint FIFO Data Register
@{*/


#define UDP_FDR[2]_FIFO_DATA_SHIFT		0
#define UDP_FDR[2]_FIFO_DATA_MASK		0xff
/** @defgroup udp_fdr[2]_fifo_data FIFODATA FIFO Data Value
@{*/
/**@}*/


/**@}*/

/** @defgroup udp_fdr[3] FDR[3] Endpoint FIFO Data Register
@{*/


#define UDP_FDR[3]_FIFO_DATA_SHIFT		0
#define UDP_FDR[3]_FIFO_DATA_MASK		0xff
/** @defgroup udp_fdr[3]_fifo_data FIFODATA FIFO Data Value
@{*/
/**@}*/


/**@}*/

/** @defgroup udp_fdr[4] FDR[4] Endpoint FIFO Data Register
@{*/


#define UDP_FDR[4]_FIFO_DATA_SHIFT		0
#define UDP_FDR[4]_FIFO_DATA_MASK		0xff
/** @defgroup udp_fdr[4]_fifo_data FIFODATA FIFO Data Value
@{*/
/**@}*/


/**@}*/

/** @defgroup udp_fdr[5] FDR[5] Endpoint FIFO Data Register
@{*/


#define UDP_FDR[5]_FIFO_DATA_SHIFT		0
#define UDP_FDR[5]_FIFO_DATA_MASK		0xff
/** @defgroup udp_fdr[5]_fifo_data FIFODATA FIFO Data Value
@{*/
/**@}*/


/**@}*/

/** @defgroup udp_fdr[6] FDR[6] Endpoint FIFO Data Register
@{*/


#define UDP_FDR[6]_FIFO_DATA_SHIFT		0
#define UDP_FDR[6]_FIFO_DATA_MASK		0xff
/** @defgroup udp_fdr[6]_fifo_data FIFODATA FIFO Data Value
@{*/
/**@}*/


/**@}*/

/** @defgroup udp_fdr[7] FDR[7] Endpoint FIFO Data Register
@{*/


#define UDP_FDR[7]_FIFO_DATA_SHIFT		0
#define UDP_FDR[7]_FIFO_DATA_MASK		0xff
/** @defgroup udp_fdr[7]_fifo_data FIFODATA FIFO Data Value
@{*/
/**@}*/


/**@}*/

/** @defgroup udp_txvc TXVC Transceiver Control Register
@{*/

/** UDP_TXVC_PUON Pull-up On **/
#define UDP_TXVC_PUON		(1 << 9)
/** UDP_TXVC_TXVDIS Transceiver Disable **/
#define UDP_TXVC_TXVDIS		(1 << 8)

/**@}*/

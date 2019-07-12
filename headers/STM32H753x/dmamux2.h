#pragma once 

/* --- DMAMUX2: DMAMUX ---------------------------------------------- */

/** @defgroup dmamux2_registers DMAMUX Register
@{*/

/** DMAMUX2_C0CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX2_C0CR			MMIO32(DMAMUX2_BASE + 0x00)
/** DMAMUX2_C1CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX2_C1CR			MMIO32(DMAMUX2_BASE + 0x04)
/** DMAMUX2_C2CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX2_C2CR			MMIO32(DMAMUX2_BASE + 0x08)
/** DMAMUX2_C3CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX2_C3CR			MMIO32(DMAMUX2_BASE + 0x0c)
/** DMAMUX2_C4CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX2_C4CR			MMIO32(DMAMUX2_BASE + 0x10)
/** DMAMUX2_C5CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX2_C5CR			MMIO32(DMAMUX2_BASE + 0x14)
/** DMAMUX2_C6CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX2_C6CR			MMIO32(DMAMUX2_BASE + 0x18)
/** DMAMUX2_C7CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX2_C7CR			MMIO32(DMAMUX2_BASE + 0x1c)
/** DMAMUX2_CSR DMAMUX request line multiplexer interrupt channel status register **/
#define DMAMUX2_CSR			MMIO32(DMAMUX2_BASE + 0x80)
/** DMAMUX2_CFR DMAMUX request line multiplexer interrupt clear flag register **/
#define DMAMUX2_CFR			MMIO32(DMAMUX2_BASE + 0x84)
/** DMAMUX2_RG0CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX2_RG0CR			MMIO32(DMAMUX2_BASE + 0x100)
/** DMAMUX2_RG1CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX2_RG1CR			MMIO32(DMAMUX2_BASE + 0x104)
/** DMAMUX2_RG2CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX2_RG2CR			MMIO32(DMAMUX2_BASE + 0x108)
/** DMAMUX2_RG3CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX2_RG3CR			MMIO32(DMAMUX2_BASE + 0x10c)
/** DMAMUX2_RG4CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX2_RG4CR			MMIO32(DMAMUX2_BASE + 0x110)
/** DMAMUX2_RG5CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX2_RG5CR			MMIO32(DMAMUX2_BASE + 0x114)
/** DMAMUX2_RG6CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX2_RG6CR			MMIO32(DMAMUX2_BASE + 0x118)
/** DMAMUX2_RG7CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX2_RG7CR			MMIO32(DMAMUX2_BASE + 0x11c)
/** DMAMUX2_RGSR DMAMux - DMA request generator status register **/
#define DMAMUX2_RGSR			MMIO32(DMAMUX2_BASE + 0x140)
/** DMAMUX2_RGCFR DMAMux - DMA request generator clear flag register **/
#define DMAMUX2_RGCFR			MMIO32(DMAMUX2_BASE + 0x144)

/**@}*/


/** @defgroup dmamux2_c0cr C0CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX2_C0CR_SYNC_ID_SHIFT		24
#define DMAMUX2_C0CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux2_c0cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX2_C0CR_NBREQ_SHIFT		19
#define DMAMUX2_C0CR_NBREQ_MASK		0x1f
/** @defgroup dmamux2_c0cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX2_C0CR_SPOL_SHIFT		17
#define DMAMUX2_C0CR_SPOL_MASK		0x03
/** @defgroup dmamux2_c0cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX2_C0CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX2_C0CR_SE		(1 << 16)
/** DMAMUX2_C0CR_EGE Event generation enable/disable **/
#define DMAMUX2_C0CR_EGE		(1 << 9)
/** DMAMUX2_C0CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX2_C0CR_SOIE		(1 << 8)

#define DMAMUX2_C0CR_DMAREQ_ID_SHIFT		0
#define DMAMUX2_C0CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux2_c0cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_c1cr C1CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX2_C1CR_SYNC_ID_SHIFT		24
#define DMAMUX2_C1CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux2_c1cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX2_C1CR_NBREQ_SHIFT		19
#define DMAMUX2_C1CR_NBREQ_MASK		0x1f
/** @defgroup dmamux2_c1cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX2_C1CR_SPOL_SHIFT		17
#define DMAMUX2_C1CR_SPOL_MASK		0x03
/** @defgroup dmamux2_c1cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX2_C1CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX2_C1CR_SE		(1 << 16)
/** DMAMUX2_C1CR_EGE Event generation enable/disable **/
#define DMAMUX2_C1CR_EGE		(1 << 9)
/** DMAMUX2_C1CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX2_C1CR_SOIE		(1 << 8)

#define DMAMUX2_C1CR_DMAREQ_ID_SHIFT		0
#define DMAMUX2_C1CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux2_c1cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_c2cr C2CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX2_C2CR_SYNC_ID_SHIFT		24
#define DMAMUX2_C2CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux2_c2cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX2_C2CR_NBREQ_SHIFT		19
#define DMAMUX2_C2CR_NBREQ_MASK		0x1f
/** @defgroup dmamux2_c2cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX2_C2CR_SPOL_SHIFT		17
#define DMAMUX2_C2CR_SPOL_MASK		0x03
/** @defgroup dmamux2_c2cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX2_C2CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX2_C2CR_SE		(1 << 16)
/** DMAMUX2_C2CR_EGE Event generation enable/disable **/
#define DMAMUX2_C2CR_EGE		(1 << 9)
/** DMAMUX2_C2CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX2_C2CR_SOIE		(1 << 8)

#define DMAMUX2_C2CR_DMAREQ_ID_SHIFT		0
#define DMAMUX2_C2CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux2_c2cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_c3cr C3CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX2_C3CR_SYNC_ID_SHIFT		24
#define DMAMUX2_C3CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux2_c3cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX2_C3CR_NBREQ_SHIFT		19
#define DMAMUX2_C3CR_NBREQ_MASK		0x1f
/** @defgroup dmamux2_c3cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX2_C3CR_SPOL_SHIFT		17
#define DMAMUX2_C3CR_SPOL_MASK		0x03
/** @defgroup dmamux2_c3cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX2_C3CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX2_C3CR_SE		(1 << 16)
/** DMAMUX2_C3CR_EGE Event generation enable/disable **/
#define DMAMUX2_C3CR_EGE		(1 << 9)
/** DMAMUX2_C3CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX2_C3CR_SOIE		(1 << 8)

#define DMAMUX2_C3CR_DMAREQ_ID_SHIFT		0
#define DMAMUX2_C3CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux2_c3cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_c4cr C4CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX2_C4CR_SYNC_ID_SHIFT		24
#define DMAMUX2_C4CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux2_c4cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX2_C4CR_NBREQ_SHIFT		19
#define DMAMUX2_C4CR_NBREQ_MASK		0x1f
/** @defgroup dmamux2_c4cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX2_C4CR_SPOL_SHIFT		17
#define DMAMUX2_C4CR_SPOL_MASK		0x03
/** @defgroup dmamux2_c4cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX2_C4CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX2_C4CR_SE		(1 << 16)
/** DMAMUX2_C4CR_EGE Event generation enable/disable **/
#define DMAMUX2_C4CR_EGE		(1 << 9)
/** DMAMUX2_C4CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX2_C4CR_SOIE		(1 << 8)

#define DMAMUX2_C4CR_DMAREQ_ID_SHIFT		0
#define DMAMUX2_C4CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux2_c4cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_c5cr C5CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX2_C5CR_SYNC_ID_SHIFT		24
#define DMAMUX2_C5CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux2_c5cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX2_C5CR_NBREQ_SHIFT		19
#define DMAMUX2_C5CR_NBREQ_MASK		0x1f
/** @defgroup dmamux2_c5cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX2_C5CR_SPOL_SHIFT		17
#define DMAMUX2_C5CR_SPOL_MASK		0x03
/** @defgroup dmamux2_c5cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX2_C5CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX2_C5CR_SE		(1 << 16)
/** DMAMUX2_C5CR_EGE Event generation enable/disable **/
#define DMAMUX2_C5CR_EGE		(1 << 9)
/** DMAMUX2_C5CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX2_C5CR_SOIE		(1 << 8)

#define DMAMUX2_C5CR_DMAREQ_ID_SHIFT		0
#define DMAMUX2_C5CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux2_c5cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_c6cr C6CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX2_C6CR_SYNC_ID_SHIFT		24
#define DMAMUX2_C6CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux2_c6cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX2_C6CR_NBREQ_SHIFT		19
#define DMAMUX2_C6CR_NBREQ_MASK		0x1f
/** @defgroup dmamux2_c6cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX2_C6CR_SPOL_SHIFT		17
#define DMAMUX2_C6CR_SPOL_MASK		0x03
/** @defgroup dmamux2_c6cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX2_C6CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX2_C6CR_SE		(1 << 16)
/** DMAMUX2_C6CR_EGE Event generation enable/disable **/
#define DMAMUX2_C6CR_EGE		(1 << 9)
/** DMAMUX2_C6CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX2_C6CR_SOIE		(1 << 8)

#define DMAMUX2_C6CR_DMAREQ_ID_SHIFT		0
#define DMAMUX2_C6CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux2_c6cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_c7cr C7CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX2_C7CR_SYNC_ID_SHIFT		24
#define DMAMUX2_C7CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux2_c7cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX2_C7CR_NBREQ_SHIFT		19
#define DMAMUX2_C7CR_NBREQ_MASK		0x1f
/** @defgroup dmamux2_c7cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX2_C7CR_SPOL_SHIFT		17
#define DMAMUX2_C7CR_SPOL_MASK		0x03
/** @defgroup dmamux2_c7cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX2_C7CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX2_C7CR_SE		(1 << 16)
/** DMAMUX2_C7CR_EGE Event generation enable/disable **/
#define DMAMUX2_C7CR_EGE		(1 << 9)
/** DMAMUX2_C7CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX2_C7CR_SOIE		(1 << 8)

#define DMAMUX2_C7CR_DMAREQ_ID_SHIFT		0
#define DMAMUX2_C7CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux2_c7cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_csr CSR DMAMUX request line multiplexer interrupt channel status register
@{*/


#define DMAMUX2_CSR_SOF_SHIFT		0
#define DMAMUX2_CSR_SOF_MASK		0xffff
/** @defgroup dmamux2_csr_sof SOF Synchronization overrun event flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_cfr CFR DMAMUX request line multiplexer interrupt clear flag register
@{*/


#define DMAMUX2_CFR_CSOF_SHIFT		0
#define DMAMUX2_CFR_CSOF_MASK		0xffff
/** @defgroup dmamux2_cfr_csof CSOF Clear synchronization overrun event flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_rg0cr RG0CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX2_RG0CR_GNBREQ_SHIFT		19
#define DMAMUX2_RG0CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux2_rg0cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX2_RG0CR_GPOL_SHIFT		17
#define DMAMUX2_RG0CR_GPOL_MASK		0x03
/** @defgroup dmamux2_rg0cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX2_RG0CR_GE DMA request generator channel enable/disable **/
#define DMAMUX2_RG0CR_GE		(1 << 16)
/** DMAMUX2_RG0CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX2_RG0CR_OIE		(1 << 8)

#define DMAMUX2_RG0CR_SIG_ID_SHIFT		0
#define DMAMUX2_RG0CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux2_rg0cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_rg1cr RG1CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX2_RG1CR_GNBREQ_SHIFT		19
#define DMAMUX2_RG1CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux2_rg1cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX2_RG1CR_GPOL_SHIFT		17
#define DMAMUX2_RG1CR_GPOL_MASK		0x03
/** @defgroup dmamux2_rg1cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX2_RG1CR_GE DMA request generator channel enable/disable **/
#define DMAMUX2_RG1CR_GE		(1 << 16)
/** DMAMUX2_RG1CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX2_RG1CR_OIE		(1 << 8)

#define DMAMUX2_RG1CR_SIG_ID_SHIFT		0
#define DMAMUX2_RG1CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux2_rg1cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_rg2cr RG2CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX2_RG2CR_GNBREQ_SHIFT		19
#define DMAMUX2_RG2CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux2_rg2cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX2_RG2CR_GPOL_SHIFT		17
#define DMAMUX2_RG2CR_GPOL_MASK		0x03
/** @defgroup dmamux2_rg2cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX2_RG2CR_GE DMA request generator channel enable/disable **/
#define DMAMUX2_RG2CR_GE		(1 << 16)
/** DMAMUX2_RG2CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX2_RG2CR_OIE		(1 << 8)

#define DMAMUX2_RG2CR_SIG_ID_SHIFT		0
#define DMAMUX2_RG2CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux2_rg2cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_rg3cr RG3CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX2_RG3CR_GNBREQ_SHIFT		19
#define DMAMUX2_RG3CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux2_rg3cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX2_RG3CR_GPOL_SHIFT		17
#define DMAMUX2_RG3CR_GPOL_MASK		0x03
/** @defgroup dmamux2_rg3cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX2_RG3CR_GE DMA request generator channel enable/disable **/
#define DMAMUX2_RG3CR_GE		(1 << 16)
/** DMAMUX2_RG3CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX2_RG3CR_OIE		(1 << 8)

#define DMAMUX2_RG3CR_SIG_ID_SHIFT		0
#define DMAMUX2_RG3CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux2_rg3cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_rg4cr RG4CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX2_RG4CR_GNBREQ_SHIFT		19
#define DMAMUX2_RG4CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux2_rg4cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX2_RG4CR_GPOL_SHIFT		17
#define DMAMUX2_RG4CR_GPOL_MASK		0x03
/** @defgroup dmamux2_rg4cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX2_RG4CR_GE DMA request generator channel enable/disable **/
#define DMAMUX2_RG4CR_GE		(1 << 16)
/** DMAMUX2_RG4CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX2_RG4CR_OIE		(1 << 8)

#define DMAMUX2_RG4CR_SIG_ID_SHIFT		0
#define DMAMUX2_RG4CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux2_rg4cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_rg5cr RG5CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX2_RG5CR_GNBREQ_SHIFT		19
#define DMAMUX2_RG5CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux2_rg5cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX2_RG5CR_GPOL_SHIFT		17
#define DMAMUX2_RG5CR_GPOL_MASK		0x03
/** @defgroup dmamux2_rg5cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX2_RG5CR_GE DMA request generator channel enable/disable **/
#define DMAMUX2_RG5CR_GE		(1 << 16)
/** DMAMUX2_RG5CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX2_RG5CR_OIE		(1 << 8)

#define DMAMUX2_RG5CR_SIG_ID_SHIFT		0
#define DMAMUX2_RG5CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux2_rg5cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_rg6cr RG6CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX2_RG6CR_GNBREQ_SHIFT		19
#define DMAMUX2_RG6CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux2_rg6cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX2_RG6CR_GPOL_SHIFT		17
#define DMAMUX2_RG6CR_GPOL_MASK		0x03
/** @defgroup dmamux2_rg6cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX2_RG6CR_GE DMA request generator channel enable/disable **/
#define DMAMUX2_RG6CR_GE		(1 << 16)
/** DMAMUX2_RG6CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX2_RG6CR_OIE		(1 << 8)

#define DMAMUX2_RG6CR_SIG_ID_SHIFT		0
#define DMAMUX2_RG6CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux2_rg6cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_rg7cr RG7CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX2_RG7CR_GNBREQ_SHIFT		19
#define DMAMUX2_RG7CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux2_rg7cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX2_RG7CR_GPOL_SHIFT		17
#define DMAMUX2_RG7CR_GPOL_MASK		0x03
/** @defgroup dmamux2_rg7cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX2_RG7CR_GE DMA request generator channel enable/disable **/
#define DMAMUX2_RG7CR_GE		(1 << 16)
/** DMAMUX2_RG7CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX2_RG7CR_OIE		(1 << 8)

#define DMAMUX2_RG7CR_SIG_ID_SHIFT		0
#define DMAMUX2_RG7CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux2_rg7cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_rgsr RGSR DMAMux - DMA request generator status register
@{*/


#define DMAMUX2_RGSR_OF_SHIFT		0
#define DMAMUX2_RGSR_OF_MASK		0xff
/** @defgroup dmamux2_rgsr_of OF Trigger event overrun flag The flag is set when a trigger event occurs on DMA request generator channel x, while the DMA request generator counter value is lower than GNBREQ. The flag is cleared by writing 1 to the corresponding COFx bit in DMAMUX_RGCFR register.
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux2_rgcfr RGCFR DMAMux - DMA request generator clear flag register
@{*/


#define DMAMUX2_RGCFR_COF_SHIFT		0
#define DMAMUX2_RGCFR_COF_MASK		0xff
/** @defgroup dmamux2_rgcfr_cof COF Clear trigger event overrun flag Upon setting, this bit clears the corresponding overrun flag OFx in the DMAMUX_RGCSR register.
@{*/
/**@}*/


/**@}*/

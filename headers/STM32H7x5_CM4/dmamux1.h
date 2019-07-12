#pragma once 

/* --- DMAMUX1: DMAMUX ---------------------------------------------- */

/** @defgroup dmamux1_registers DMAMUX Register
@{*/

/** DMAMUX1_C0CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C0CR			MMIO32(DMAMUX1_BASE + 0x00)
/** DMAMUX1_C1CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C1CR			MMIO32(DMAMUX1_BASE + 0x04)
/** DMAMUX1_C2CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C2CR			MMIO32(DMAMUX1_BASE + 0x08)
/** DMAMUX1_C3CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C3CR			MMIO32(DMAMUX1_BASE + 0x0c)
/** DMAMUX1_C4CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C4CR			MMIO32(DMAMUX1_BASE + 0x10)
/** DMAMUX1_C5CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C5CR			MMIO32(DMAMUX1_BASE + 0x14)
/** DMAMUX1_C6CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C6CR			MMIO32(DMAMUX1_BASE + 0x18)
/** DMAMUX1_C7CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C7CR			MMIO32(DMAMUX1_BASE + 0x1c)
/** DMAMUX1_C8CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C8CR			MMIO32(DMAMUX1_BASE + 0x20)
/** DMAMUX1_C9CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C9CR			MMIO32(DMAMUX1_BASE + 0x24)
/** DMAMUX1_C10CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C10CR			MMIO32(DMAMUX1_BASE + 0x28)
/** DMAMUX1_C11CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C11CR			MMIO32(DMAMUX1_BASE + 0x2c)
/** DMAMUX1_C12CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C12CR			MMIO32(DMAMUX1_BASE + 0x30)
/** DMAMUX1_C13CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C13CR			MMIO32(DMAMUX1_BASE + 0x34)
/** DMAMUX1_C14CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C14CR			MMIO32(DMAMUX1_BASE + 0x38)
/** DMAMUX1_C15CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX1_C15CR			MMIO32(DMAMUX1_BASE + 0x3c)
/** DMAMUX1_CSR DMAMUX request line multiplexer interrupt channel status register **/
#define DMAMUX1_CSR			MMIO32(DMAMUX1_BASE + 0x80)
/** DMAMUX1_CFR DMAMUX request line multiplexer interrupt clear flag register **/
#define DMAMUX1_CFR			MMIO32(DMAMUX1_BASE + 0x84)
/** DMAMUX1_RG0CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX1_RG0CR			MMIO32(DMAMUX1_BASE + 0x100)
/** DMAMUX1_RG1CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX1_RG1CR			MMIO32(DMAMUX1_BASE + 0x104)
/** DMAMUX1_RG2CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX1_RG2CR			MMIO32(DMAMUX1_BASE + 0x108)
/** DMAMUX1_RG3CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX1_RG3CR			MMIO32(DMAMUX1_BASE + 0x10c)
/** DMAMUX1_RG4CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX1_RG4CR			MMIO32(DMAMUX1_BASE + 0x110)
/** DMAMUX1_RG5CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX1_RG5CR			MMIO32(DMAMUX1_BASE + 0x114)
/** DMAMUX1_RG6CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX1_RG6CR			MMIO32(DMAMUX1_BASE + 0x118)
/** DMAMUX1_RG7CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX1_RG7CR			MMIO32(DMAMUX1_BASE + 0x11c)
/** DMAMUX1_RGSR DMAMux - DMA request generator status register **/
#define DMAMUX1_RGSR			MMIO32(DMAMUX1_BASE + 0x140)
/** DMAMUX1_RGCFR DMAMux - DMA request generator clear flag register **/
#define DMAMUX1_RGCFR			MMIO32(DMAMUX1_BASE + 0x144)

/**@}*/


/** @defgroup dmamux1_c0cr C0CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C0CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C0CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c0cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C0CR_NBREQ_SHIFT		19
#define DMAMUX1_C0CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c0cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C0CR_SPOL_SHIFT		17
#define DMAMUX1_C0CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c0cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C0CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C0CR_SE		(1 << 16)
/** DMAMUX1_C0CR_EGE Event generation enable/disable **/
#define DMAMUX1_C0CR_EGE		(1 << 9)
/** DMAMUX1_C0CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C0CR_SOIE		(1 << 8)

#define DMAMUX1_C0CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C0CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c0cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c1cr C1CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C1CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C1CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c1cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C1CR_NBREQ_SHIFT		19
#define DMAMUX1_C1CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c1cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C1CR_SPOL_SHIFT		17
#define DMAMUX1_C1CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c1cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C1CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C1CR_SE		(1 << 16)
/** DMAMUX1_C1CR_EGE Event generation enable/disable **/
#define DMAMUX1_C1CR_EGE		(1 << 9)
/** DMAMUX1_C1CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C1CR_SOIE		(1 << 8)

#define DMAMUX1_C1CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C1CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c1cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c2cr C2CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C2CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C2CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c2cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C2CR_NBREQ_SHIFT		19
#define DMAMUX1_C2CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c2cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C2CR_SPOL_SHIFT		17
#define DMAMUX1_C2CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c2cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C2CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C2CR_SE		(1 << 16)
/** DMAMUX1_C2CR_EGE Event generation enable/disable **/
#define DMAMUX1_C2CR_EGE		(1 << 9)
/** DMAMUX1_C2CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C2CR_SOIE		(1 << 8)

#define DMAMUX1_C2CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C2CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c2cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c3cr C3CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C3CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C3CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c3cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C3CR_NBREQ_SHIFT		19
#define DMAMUX1_C3CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c3cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C3CR_SPOL_SHIFT		17
#define DMAMUX1_C3CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c3cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C3CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C3CR_SE		(1 << 16)
/** DMAMUX1_C3CR_EGE Event generation enable/disable **/
#define DMAMUX1_C3CR_EGE		(1 << 9)
/** DMAMUX1_C3CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C3CR_SOIE		(1 << 8)

#define DMAMUX1_C3CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C3CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c3cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c4cr C4CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C4CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C4CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c4cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C4CR_NBREQ_SHIFT		19
#define DMAMUX1_C4CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c4cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C4CR_SPOL_SHIFT		17
#define DMAMUX1_C4CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c4cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C4CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C4CR_SE		(1 << 16)
/** DMAMUX1_C4CR_EGE Event generation enable/disable **/
#define DMAMUX1_C4CR_EGE		(1 << 9)
/** DMAMUX1_C4CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C4CR_SOIE		(1 << 8)

#define DMAMUX1_C4CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C4CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c4cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c5cr C5CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C5CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C5CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c5cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C5CR_NBREQ_SHIFT		19
#define DMAMUX1_C5CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c5cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C5CR_SPOL_SHIFT		17
#define DMAMUX1_C5CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c5cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C5CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C5CR_SE		(1 << 16)
/** DMAMUX1_C5CR_EGE Event generation enable/disable **/
#define DMAMUX1_C5CR_EGE		(1 << 9)
/** DMAMUX1_C5CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C5CR_SOIE		(1 << 8)

#define DMAMUX1_C5CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C5CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c5cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c6cr C6CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C6CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C6CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c6cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C6CR_NBREQ_SHIFT		19
#define DMAMUX1_C6CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c6cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C6CR_SPOL_SHIFT		17
#define DMAMUX1_C6CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c6cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C6CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C6CR_SE		(1 << 16)
/** DMAMUX1_C6CR_EGE Event generation enable/disable **/
#define DMAMUX1_C6CR_EGE		(1 << 9)
/** DMAMUX1_C6CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C6CR_SOIE		(1 << 8)

#define DMAMUX1_C6CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C6CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c6cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c7cr C7CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C7CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C7CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c7cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C7CR_NBREQ_SHIFT		19
#define DMAMUX1_C7CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c7cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C7CR_SPOL_SHIFT		17
#define DMAMUX1_C7CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c7cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C7CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C7CR_SE		(1 << 16)
/** DMAMUX1_C7CR_EGE Event generation enable/disable **/
#define DMAMUX1_C7CR_EGE		(1 << 9)
/** DMAMUX1_C7CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C7CR_SOIE		(1 << 8)

#define DMAMUX1_C7CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C7CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c7cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c8cr C8CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C8CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C8CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c8cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C8CR_NBREQ_SHIFT		19
#define DMAMUX1_C8CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c8cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C8CR_SPOL_SHIFT		17
#define DMAMUX1_C8CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c8cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C8CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C8CR_SE		(1 << 16)
/** DMAMUX1_C8CR_EGE Event generation enable/disable **/
#define DMAMUX1_C8CR_EGE		(1 << 9)
/** DMAMUX1_C8CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C8CR_SOIE		(1 << 8)

#define DMAMUX1_C8CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C8CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c8cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c9cr C9CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C9CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C9CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c9cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C9CR_NBREQ_SHIFT		19
#define DMAMUX1_C9CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c9cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C9CR_SPOL_SHIFT		17
#define DMAMUX1_C9CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c9cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C9CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C9CR_SE		(1 << 16)
/** DMAMUX1_C9CR_EGE Event generation enable/disable **/
#define DMAMUX1_C9CR_EGE		(1 << 9)
/** DMAMUX1_C9CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C9CR_SOIE		(1 << 8)

#define DMAMUX1_C9CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C9CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c9cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c10cr C10CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C10CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C10CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c10cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C10CR_NBREQ_SHIFT		19
#define DMAMUX1_C10CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c10cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C10CR_SPOL_SHIFT		17
#define DMAMUX1_C10CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c10cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C10CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C10CR_SE		(1 << 16)
/** DMAMUX1_C10CR_EGE Event generation enable/disable **/
#define DMAMUX1_C10CR_EGE		(1 << 9)
/** DMAMUX1_C10CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C10CR_SOIE		(1 << 8)

#define DMAMUX1_C10CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C10CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c10cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c11cr C11CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C11CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C11CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c11cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C11CR_NBREQ_SHIFT		19
#define DMAMUX1_C11CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c11cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C11CR_SPOL_SHIFT		17
#define DMAMUX1_C11CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c11cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C11CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C11CR_SE		(1 << 16)
/** DMAMUX1_C11CR_EGE Event generation enable/disable **/
#define DMAMUX1_C11CR_EGE		(1 << 9)
/** DMAMUX1_C11CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C11CR_SOIE		(1 << 8)

#define DMAMUX1_C11CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C11CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c11cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c12cr C12CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C12CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C12CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c12cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C12CR_NBREQ_SHIFT		19
#define DMAMUX1_C12CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c12cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C12CR_SPOL_SHIFT		17
#define DMAMUX1_C12CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c12cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C12CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C12CR_SE		(1 << 16)
/** DMAMUX1_C12CR_EGE Event generation enable/disable **/
#define DMAMUX1_C12CR_EGE		(1 << 9)
/** DMAMUX1_C12CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C12CR_SOIE		(1 << 8)

#define DMAMUX1_C12CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C12CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c12cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c13cr C13CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C13CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C13CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c13cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C13CR_NBREQ_SHIFT		19
#define DMAMUX1_C13CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c13cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C13CR_SPOL_SHIFT		17
#define DMAMUX1_C13CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c13cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C13CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C13CR_SE		(1 << 16)
/** DMAMUX1_C13CR_EGE Event generation enable/disable **/
#define DMAMUX1_C13CR_EGE		(1 << 9)
/** DMAMUX1_C13CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C13CR_SOIE		(1 << 8)

#define DMAMUX1_C13CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C13CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c13cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c14cr C14CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C14CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C14CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c14cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C14CR_NBREQ_SHIFT		19
#define DMAMUX1_C14CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c14cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C14CR_SPOL_SHIFT		17
#define DMAMUX1_C14CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c14cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C14CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C14CR_SE		(1 << 16)
/** DMAMUX1_C14CR_EGE Event generation enable/disable **/
#define DMAMUX1_C14CR_EGE		(1 << 9)
/** DMAMUX1_C14CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C14CR_SOIE		(1 << 8)

#define DMAMUX1_C14CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C14CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c14cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_c15cr C15CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX1_C15CR_SYNC_ID_SHIFT		24
#define DMAMUX1_C15CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux1_c15cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX1_C15CR_NBREQ_SHIFT		19
#define DMAMUX1_C15CR_NBREQ_MASK		0x1f
/** @defgroup dmamux1_c15cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX1_C15CR_SPOL_SHIFT		17
#define DMAMUX1_C15CR_SPOL_MASK		0x03
/** @defgroup dmamux1_c15cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX1_C15CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX1_C15CR_SE		(1 << 16)
/** DMAMUX1_C15CR_EGE Event generation enable/disable **/
#define DMAMUX1_C15CR_EGE		(1 << 9)
/** DMAMUX1_C15CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX1_C15CR_SOIE		(1 << 8)

#define DMAMUX1_C15CR_DMAREQ_ID_SHIFT		0
#define DMAMUX1_C15CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux1_c15cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_csr CSR DMAMUX request line multiplexer interrupt channel status register
@{*/


#define DMAMUX1_CSR_SOF_SHIFT		0
#define DMAMUX1_CSR_SOF_MASK		0xffff
/** @defgroup dmamux1_csr_sof SOF Synchronization overrun event flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_cfr CFR DMAMUX request line multiplexer interrupt clear flag register
@{*/


#define DMAMUX1_CFR_CSOF_SHIFT		0
#define DMAMUX1_CFR_CSOF_MASK		0xffff
/** @defgroup dmamux1_cfr_csof CSOF Clear synchronization overrun event flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_rg0cr RG0CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX1_RG0CR_GNBREQ_SHIFT		19
#define DMAMUX1_RG0CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux1_rg0cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX1_RG0CR_GPOL_SHIFT		17
#define DMAMUX1_RG0CR_GPOL_MASK		0x03
/** @defgroup dmamux1_rg0cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX1_RG0CR_GE DMA request generator channel enable/disable **/
#define DMAMUX1_RG0CR_GE		(1 << 16)
/** DMAMUX1_RG0CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX1_RG0CR_OIE		(1 << 8)

#define DMAMUX1_RG0CR_SIG_ID_SHIFT		0
#define DMAMUX1_RG0CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux1_rg0cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_rg1cr RG1CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX1_RG1CR_GNBREQ_SHIFT		19
#define DMAMUX1_RG1CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux1_rg1cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX1_RG1CR_GPOL_SHIFT		17
#define DMAMUX1_RG1CR_GPOL_MASK		0x03
/** @defgroup dmamux1_rg1cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX1_RG1CR_GE DMA request generator channel enable/disable **/
#define DMAMUX1_RG1CR_GE		(1 << 16)
/** DMAMUX1_RG1CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX1_RG1CR_OIE		(1 << 8)

#define DMAMUX1_RG1CR_SIG_ID_SHIFT		0
#define DMAMUX1_RG1CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux1_rg1cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_rg2cr RG2CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX1_RG2CR_GNBREQ_SHIFT		19
#define DMAMUX1_RG2CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux1_rg2cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX1_RG2CR_GPOL_SHIFT		17
#define DMAMUX1_RG2CR_GPOL_MASK		0x03
/** @defgroup dmamux1_rg2cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX1_RG2CR_GE DMA request generator channel enable/disable **/
#define DMAMUX1_RG2CR_GE		(1 << 16)
/** DMAMUX1_RG2CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX1_RG2CR_OIE		(1 << 8)

#define DMAMUX1_RG2CR_SIG_ID_SHIFT		0
#define DMAMUX1_RG2CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux1_rg2cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_rg3cr RG3CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX1_RG3CR_GNBREQ_SHIFT		19
#define DMAMUX1_RG3CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux1_rg3cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX1_RG3CR_GPOL_SHIFT		17
#define DMAMUX1_RG3CR_GPOL_MASK		0x03
/** @defgroup dmamux1_rg3cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX1_RG3CR_GE DMA request generator channel enable/disable **/
#define DMAMUX1_RG3CR_GE		(1 << 16)
/** DMAMUX1_RG3CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX1_RG3CR_OIE		(1 << 8)

#define DMAMUX1_RG3CR_SIG_ID_SHIFT		0
#define DMAMUX1_RG3CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux1_rg3cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_rg4cr RG4CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX1_RG4CR_GNBREQ_SHIFT		19
#define DMAMUX1_RG4CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux1_rg4cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX1_RG4CR_GPOL_SHIFT		17
#define DMAMUX1_RG4CR_GPOL_MASK		0x03
/** @defgroup dmamux1_rg4cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX1_RG4CR_GE DMA request generator channel enable/disable **/
#define DMAMUX1_RG4CR_GE		(1 << 16)
/** DMAMUX1_RG4CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX1_RG4CR_OIE		(1 << 8)

#define DMAMUX1_RG4CR_SIG_ID_SHIFT		0
#define DMAMUX1_RG4CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux1_rg4cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_rg5cr RG5CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX1_RG5CR_GNBREQ_SHIFT		19
#define DMAMUX1_RG5CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux1_rg5cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX1_RG5CR_GPOL_SHIFT		17
#define DMAMUX1_RG5CR_GPOL_MASK		0x03
/** @defgroup dmamux1_rg5cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX1_RG5CR_GE DMA request generator channel enable/disable **/
#define DMAMUX1_RG5CR_GE		(1 << 16)
/** DMAMUX1_RG5CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX1_RG5CR_OIE		(1 << 8)

#define DMAMUX1_RG5CR_SIG_ID_SHIFT		0
#define DMAMUX1_RG5CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux1_rg5cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_rg6cr RG6CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX1_RG6CR_GNBREQ_SHIFT		19
#define DMAMUX1_RG6CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux1_rg6cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX1_RG6CR_GPOL_SHIFT		17
#define DMAMUX1_RG6CR_GPOL_MASK		0x03
/** @defgroup dmamux1_rg6cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX1_RG6CR_GE DMA request generator channel enable/disable **/
#define DMAMUX1_RG6CR_GE		(1 << 16)
/** DMAMUX1_RG6CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX1_RG6CR_OIE		(1 << 8)

#define DMAMUX1_RG6CR_SIG_ID_SHIFT		0
#define DMAMUX1_RG6CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux1_rg6cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_rg7cr RG7CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX1_RG7CR_GNBREQ_SHIFT		19
#define DMAMUX1_RG7CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux1_rg7cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX1_RG7CR_GPOL_SHIFT		17
#define DMAMUX1_RG7CR_GPOL_MASK		0x03
/** @defgroup dmamux1_rg7cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX1_RG7CR_GE DMA request generator channel enable/disable **/
#define DMAMUX1_RG7CR_GE		(1 << 16)
/** DMAMUX1_RG7CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX1_RG7CR_OIE		(1 << 8)

#define DMAMUX1_RG7CR_SIG_ID_SHIFT		0
#define DMAMUX1_RG7CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux1_rg7cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_rgsr RGSR DMAMux - DMA request generator status register
@{*/


#define DMAMUX1_RGSR_OF_SHIFT		0
#define DMAMUX1_RGSR_OF_MASK		0xff
/** @defgroup dmamux1_rgsr_of OF Trigger event overrun flag The flag is set when a trigger event occurs on DMA request generator channel x, while the DMA request generator counter value is lower than GNBREQ. The flag is cleared by writing 1 to the corresponding COFx bit in DMAMUX_RGCFR register.
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux1_rgcfr RGCFR DMAMux - DMA request generator clear flag register
@{*/


#define DMAMUX1_RGCFR_COF_SHIFT		0
#define DMAMUX1_RGCFR_COF_MASK		0xff
/** @defgroup dmamux1_rgcfr_cof COF Clear trigger event overrun flag Upon setting, this bit clears the corresponding overrun flag OFx in the DMAMUX_RGCSR register.
@{*/
/**@}*/


/**@}*/

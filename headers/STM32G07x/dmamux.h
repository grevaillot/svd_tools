#pragma once 

/* --- DMAMUX: DMAMUX ----------------------------------------------- */

/** @defgroup dmamux_registers DMAMUX Register
@{*/

/** DMAMUX_DMAMUX_C0CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX_DMAMUX_C0CR			MMIO32(DMAMUX_BASE + 0x00)
/** DMAMUX_DMAMUX_C1CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX_DMAMUX_C1CR			MMIO32(DMAMUX_BASE + 0x04)
/** DMAMUX_DMAMUX_C2CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX_DMAMUX_C2CR			MMIO32(DMAMUX_BASE + 0x08)
/** DMAMUX_DMAMUX_C3CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX_DMAMUX_C3CR			MMIO32(DMAMUX_BASE + 0x0c)
/** DMAMUX_DMAMUX_C4CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX_DMAMUX_C4CR			MMIO32(DMAMUX_BASE + 0x10)
/** DMAMUX_DMAMUX_C5CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX_DMAMUX_C5CR			MMIO32(DMAMUX_BASE + 0x14)
/** DMAMUX_DMAMUX_C6CR DMAMux - DMA request line multiplexer channel x control register **/
#define DMAMUX_DMAMUX_C6CR			MMIO32(DMAMUX_BASE + 0x18)
/** DMAMUX_DMAMUX_CSR DMAMUX request line multiplexer interrupt channel status register **/
#define DMAMUX_DMAMUX_CSR			MMIO32(DMAMUX_BASE + 0x80)
/** DMAMUX_DMAMUX_CFR DMAMUX request line multiplexer interrupt clear flag register **/
#define DMAMUX_DMAMUX_CFR			MMIO32(DMAMUX_BASE + 0x84)
/** DMAMUX_DMAMUX_RG0CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX_DMAMUX_RG0CR			MMIO32(DMAMUX_BASE + 0x100)
/** DMAMUX_DMAMUX_RG1CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX_DMAMUX_RG1CR			MMIO32(DMAMUX_BASE + 0x104)
/** DMAMUX_DMAMUX_RG2CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX_DMAMUX_RG2CR			MMIO32(DMAMUX_BASE + 0x108)
/** DMAMUX_DMAMUX_RG3CR DMAMux - DMA request generator channel x control register **/
#define DMAMUX_DMAMUX_RG3CR			MMIO32(DMAMUX_BASE + 0x10c)
/** DMAMUX_DMAMUX_RGSR DMAMux - DMA request generator status register **/
#define DMAMUX_DMAMUX_RGSR			MMIO32(DMAMUX_BASE + 0x140)
/** DMAMUX_DMAMUX_RGCFR DMAMux - DMA request generator clear flag register **/
#define DMAMUX_DMAMUX_RGCFR			MMIO32(DMAMUX_BASE + 0x144)
/** DMAMUX_DMAMUX_HWCFGR2 DMAMUX hardware configuration 2 register **/
#define DMAMUX_DMAMUX_HWCFGR2			MMIO32(DMAMUX_BASE + 0x3ec)
/** DMAMUX_DMAMUX_HWCFGR1 DMAMUX hardware configuration 1 register **/
#define DMAMUX_DMAMUX_HWCFGR1			MMIO32(DMAMUX_BASE + 0x3f0)
/** DMAMUX_DMAMUX_VERR DMAMUX version register **/
#define DMAMUX_DMAMUX_VERR			MMIO32(DMAMUX_BASE + 0x3f4)
/** DMAMUX_DMAMUX_IPIDR DMAMUX IP identification register **/
#define DMAMUX_DMAMUX_IPIDR			MMIO32(DMAMUX_BASE + 0x3f8)
/** DMAMUX_DMAMUX_SIDR DMAMUX size identification register **/
#define DMAMUX_DMAMUX_SIDR			MMIO32(DMAMUX_BASE + 0x3fc)

/**@}*/


/** @defgroup dmamux_dmamux_c0cr DMAMUXC0CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX_DMAMUX_C0CR_SYNC_ID_SHIFT		24
#define DMAMUX_DMAMUX_C0CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux_dmamux_c0cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C0CR_NBREQ_SHIFT		19
#define DMAMUX_DMAMUX_C0CR_NBREQ_MASK		0x1f
/** @defgroup dmamux_dmamux_c0cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C0CR_SPOL_SHIFT		17
#define DMAMUX_DMAMUX_C0CR_SPOL_MASK		0x03
/** @defgroup dmamux_dmamux_c0cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX_DMAMUX_C0CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX_DMAMUX_C0CR_SE		(1 << 16)
/** DMAMUX_DMAMUX_C0CR_EGE Event generation enable/disable **/
#define DMAMUX_DMAMUX_C0CR_EGE		(1 << 9)
/** DMAMUX_DMAMUX_C0CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX_DMAMUX_C0CR_SOIE		(1 << 8)

#define DMAMUX_DMAMUX_C0CR_DMAREQ_ID_SHIFT		0
#define DMAMUX_DMAMUX_C0CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux_dmamux_c0cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_c1cr DMAMUXC1CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX_DMAMUX_C1CR_SYNC_ID_SHIFT		24
#define DMAMUX_DMAMUX_C1CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux_dmamux_c1cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C1CR_NBREQ_SHIFT		19
#define DMAMUX_DMAMUX_C1CR_NBREQ_MASK		0x1f
/** @defgroup dmamux_dmamux_c1cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C1CR_SPOL_SHIFT		17
#define DMAMUX_DMAMUX_C1CR_SPOL_MASK		0x03
/** @defgroup dmamux_dmamux_c1cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX_DMAMUX_C1CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX_DMAMUX_C1CR_SE		(1 << 16)
/** DMAMUX_DMAMUX_C1CR_EGE Event generation enable/disable **/
#define DMAMUX_DMAMUX_C1CR_EGE		(1 << 9)
/** DMAMUX_DMAMUX_C1CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX_DMAMUX_C1CR_SOIE		(1 << 8)

#define DMAMUX_DMAMUX_C1CR_DMAREQ_ID_SHIFT		0
#define DMAMUX_DMAMUX_C1CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux_dmamux_c1cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_c2cr DMAMUXC2CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX_DMAMUX_C2CR_SYNC_ID_SHIFT		24
#define DMAMUX_DMAMUX_C2CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux_dmamux_c2cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C2CR_NBREQ_SHIFT		19
#define DMAMUX_DMAMUX_C2CR_NBREQ_MASK		0x1f
/** @defgroup dmamux_dmamux_c2cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C2CR_SPOL_SHIFT		17
#define DMAMUX_DMAMUX_C2CR_SPOL_MASK		0x03
/** @defgroup dmamux_dmamux_c2cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX_DMAMUX_C2CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX_DMAMUX_C2CR_SE		(1 << 16)
/** DMAMUX_DMAMUX_C2CR_EGE Event generation enable/disable **/
#define DMAMUX_DMAMUX_C2CR_EGE		(1 << 9)
/** DMAMUX_DMAMUX_C2CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX_DMAMUX_C2CR_SOIE		(1 << 8)

#define DMAMUX_DMAMUX_C2CR_DMAREQ_ID_SHIFT		0
#define DMAMUX_DMAMUX_C2CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux_dmamux_c2cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_c3cr DMAMUXC3CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX_DMAMUX_C3CR_SYNC_ID_SHIFT		24
#define DMAMUX_DMAMUX_C3CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux_dmamux_c3cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C3CR_NBREQ_SHIFT		19
#define DMAMUX_DMAMUX_C3CR_NBREQ_MASK		0x1f
/** @defgroup dmamux_dmamux_c3cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C3CR_SPOL_SHIFT		17
#define DMAMUX_DMAMUX_C3CR_SPOL_MASK		0x03
/** @defgroup dmamux_dmamux_c3cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX_DMAMUX_C3CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX_DMAMUX_C3CR_SE		(1 << 16)
/** DMAMUX_DMAMUX_C3CR_EGE Event generation enable/disable **/
#define DMAMUX_DMAMUX_C3CR_EGE		(1 << 9)
/** DMAMUX_DMAMUX_C3CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX_DMAMUX_C3CR_SOIE		(1 << 8)

#define DMAMUX_DMAMUX_C3CR_DMAREQ_ID_SHIFT		0
#define DMAMUX_DMAMUX_C3CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux_dmamux_c3cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_c4cr DMAMUXC4CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX_DMAMUX_C4CR_SYNC_ID_SHIFT		24
#define DMAMUX_DMAMUX_C4CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux_dmamux_c4cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C4CR_NBREQ_SHIFT		19
#define DMAMUX_DMAMUX_C4CR_NBREQ_MASK		0x1f
/** @defgroup dmamux_dmamux_c4cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C4CR_SPOL_SHIFT		17
#define DMAMUX_DMAMUX_C4CR_SPOL_MASK		0x03
/** @defgroup dmamux_dmamux_c4cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX_DMAMUX_C4CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX_DMAMUX_C4CR_SE		(1 << 16)
/** DMAMUX_DMAMUX_C4CR_EGE Event generation enable/disable **/
#define DMAMUX_DMAMUX_C4CR_EGE		(1 << 9)
/** DMAMUX_DMAMUX_C4CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX_DMAMUX_C4CR_SOIE		(1 << 8)

#define DMAMUX_DMAMUX_C4CR_DMAREQ_ID_SHIFT		0
#define DMAMUX_DMAMUX_C4CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux_dmamux_c4cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_c5cr DMAMUXC5CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX_DMAMUX_C5CR_SYNC_ID_SHIFT		24
#define DMAMUX_DMAMUX_C5CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux_dmamux_c5cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C5CR_NBREQ_SHIFT		19
#define DMAMUX_DMAMUX_C5CR_NBREQ_MASK		0x1f
/** @defgroup dmamux_dmamux_c5cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C5CR_SPOL_SHIFT		17
#define DMAMUX_DMAMUX_C5CR_SPOL_MASK		0x03
/** @defgroup dmamux_dmamux_c5cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX_DMAMUX_C5CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX_DMAMUX_C5CR_SE		(1 << 16)
/** DMAMUX_DMAMUX_C5CR_EGE Event generation enable/disable **/
#define DMAMUX_DMAMUX_C5CR_EGE		(1 << 9)
/** DMAMUX_DMAMUX_C5CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX_DMAMUX_C5CR_SOIE		(1 << 8)

#define DMAMUX_DMAMUX_C5CR_DMAREQ_ID_SHIFT		0
#define DMAMUX_DMAMUX_C5CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux_dmamux_c5cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_c6cr DMAMUXC6CR DMAMux - DMA request line multiplexer channel x control register
@{*/


#define DMAMUX_DMAMUX_C6CR_SYNC_ID_SHIFT		24
#define DMAMUX_DMAMUX_C6CR_SYNC_ID_MASK		0x1f
/** @defgroup dmamux_dmamux_c6cr_sync_id SYNCID Synchronization input selected
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C6CR_NBREQ_SHIFT		19
#define DMAMUX_DMAMUX_C6CR_NBREQ_MASK		0x1f
/** @defgroup dmamux_dmamux_c6cr_nbreq NBREQ Number of DMA requests to forward Defines the number of DMA requests forwarded before output event is generated. In synchronous mode, it also defines the number of DMA requests to forward after a synchronization event, then stop forwarding. The actual number of DMA requests forwarded is NBREQ+1. Note: This field can only be written when both SE and EGE bits are reset.
@{*/
/**@}*/


#define DMAMUX_DMAMUX_C6CR_SPOL_SHIFT		17
#define DMAMUX_DMAMUX_C6CR_SPOL_MASK		0x03
/** @defgroup dmamux_dmamux_c6cr_spol SPOL Synchronization event type selector Defines the synchronization event on the selected synchronization input:
@{*/
/**@}*/

/** DMAMUX_DMAMUX_C6CR_SE Synchronous operating mode enable/disable **/
#define DMAMUX_DMAMUX_C6CR_SE		(1 << 16)
/** DMAMUX_DMAMUX_C6CR_EGE Event generation enable/disable **/
#define DMAMUX_DMAMUX_C6CR_EGE		(1 << 9)
/** DMAMUX_DMAMUX_C6CR_SOIE Interrupt enable at synchronization event overrun **/
#define DMAMUX_DMAMUX_C6CR_SOIE		(1 << 8)

#define DMAMUX_DMAMUX_C6CR_DMAREQ_ID_SHIFT		0
#define DMAMUX_DMAMUX_C6CR_DMAREQ_ID_MASK		0xff
/** @defgroup dmamux_dmamux_c6cr_dmareq_id DMAREQID Input DMA request line selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_csr DMAMUXCSR DMAMUX request line multiplexer interrupt channel status register
@{*/


#define DMAMUX_DMAMUX_CSR_SOF_SHIFT		0
#define DMAMUX_DMAMUX_CSR_SOF_MASK		0x7f
/** @defgroup dmamux_dmamux_csr_sof SOF Synchronization overrun event flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_cfr DMAMUXCFR DMAMUX request line multiplexer interrupt clear flag register
@{*/


#define DMAMUX_DMAMUX_CFR_CSOF_SHIFT		0
#define DMAMUX_DMAMUX_CFR_CSOF_MASK		0x7f
/** @defgroup dmamux_dmamux_cfr_csof CSOF Clear synchronization overrun event flag
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_rg0cr DMAMUXRG0CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX_DMAMUX_RG0CR_GNBREQ_SHIFT		19
#define DMAMUX_DMAMUX_RG0CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux_dmamux_rg0cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX_DMAMUX_RG0CR_GPOL_SHIFT		17
#define DMAMUX_DMAMUX_RG0CR_GPOL_MASK		0x03
/** @defgroup dmamux_dmamux_rg0cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX_DMAMUX_RG0CR_GE DMA request generator channel enable/disable **/
#define DMAMUX_DMAMUX_RG0CR_GE		(1 << 16)
/** DMAMUX_DMAMUX_RG0CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX_DMAMUX_RG0CR_OIE		(1 << 8)

#define DMAMUX_DMAMUX_RG0CR_SIG_ID_SHIFT		0
#define DMAMUX_DMAMUX_RG0CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux_dmamux_rg0cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_rg1cr DMAMUXRG1CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX_DMAMUX_RG1CR_GNBREQ_SHIFT		19
#define DMAMUX_DMAMUX_RG1CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux_dmamux_rg1cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX_DMAMUX_RG1CR_GPOL_SHIFT		17
#define DMAMUX_DMAMUX_RG1CR_GPOL_MASK		0x03
/** @defgroup dmamux_dmamux_rg1cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX_DMAMUX_RG1CR_GE DMA request generator channel enable/disable **/
#define DMAMUX_DMAMUX_RG1CR_GE		(1 << 16)
/** DMAMUX_DMAMUX_RG1CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX_DMAMUX_RG1CR_OIE		(1 << 8)

#define DMAMUX_DMAMUX_RG1CR_SIG_ID_SHIFT		0
#define DMAMUX_DMAMUX_RG1CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux_dmamux_rg1cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_rg2cr DMAMUXRG2CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX_DMAMUX_RG2CR_GNBREQ_SHIFT		19
#define DMAMUX_DMAMUX_RG2CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux_dmamux_rg2cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX_DMAMUX_RG2CR_GPOL_SHIFT		17
#define DMAMUX_DMAMUX_RG2CR_GPOL_MASK		0x03
/** @defgroup dmamux_dmamux_rg2cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX_DMAMUX_RG2CR_GE DMA request generator channel enable/disable **/
#define DMAMUX_DMAMUX_RG2CR_GE		(1 << 16)
/** DMAMUX_DMAMUX_RG2CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX_DMAMUX_RG2CR_OIE		(1 << 8)

#define DMAMUX_DMAMUX_RG2CR_SIG_ID_SHIFT		0
#define DMAMUX_DMAMUX_RG2CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux_dmamux_rg2cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_rg3cr DMAMUXRG3CR DMAMux - DMA request generator channel x control register
@{*/


#define DMAMUX_DMAMUX_RG3CR_GNBREQ_SHIFT		19
#define DMAMUX_DMAMUX_RG3CR_GNBREQ_MASK		0x1f
/** @defgroup dmamux_dmamux_rg3cr_gnbreq GNBREQ Number of DMA requests to generate Defines the number of DMA requests generated after a trigger event, then stop generating. The actual number of generated DMA requests is GNBREQ+1. Note: This field can only be written when GE bit is reset.
@{*/
/**@}*/


#define DMAMUX_DMAMUX_RG3CR_GPOL_SHIFT		17
#define DMAMUX_DMAMUX_RG3CR_GPOL_MASK		0x03
/** @defgroup dmamux_dmamux_rg3cr_gpol GPOL DMA request generator trigger event type selection Defines the trigger event on the selected DMA request trigger input
@{*/
/**@}*/

/** DMAMUX_DMAMUX_RG3CR_GE DMA request generator channel enable/disable **/
#define DMAMUX_DMAMUX_RG3CR_GE		(1 << 16)
/** DMAMUX_DMAMUX_RG3CR_OIE Interrupt enable at trigger event overrun **/
#define DMAMUX_DMAMUX_RG3CR_OIE		(1 << 8)

#define DMAMUX_DMAMUX_RG3CR_SIG_ID_SHIFT		0
#define DMAMUX_DMAMUX_RG3CR_SIG_ID_MASK		0x1f
/** @defgroup dmamux_dmamux_rg3cr_sig_id SIGID DMA request trigger input selected
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_rgsr DMAMUXRGSR DMAMux - DMA request generator status register
@{*/


#define DMAMUX_DMAMUX_RGSR_OF_SHIFT		0
#define DMAMUX_DMAMUX_RGSR_OF_MASK		0x0f
/** @defgroup dmamux_dmamux_rgsr_of OF Trigger event overrun flag The flag is set when a trigger event occurs on DMA request generator channel x, while the DMA request generator counter value is lower than GNBREQ. The flag is cleared by writing 1 to the corresponding COFx bit in DMAMUX_RGCFR register.
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_rgcfr DMAMUXRGCFR DMAMux - DMA request generator clear flag register
@{*/


#define DMAMUX_DMAMUX_RGCFR_COF_SHIFT		0
#define DMAMUX_DMAMUX_RGCFR_COF_MASK		0x0f
/** @defgroup dmamux_dmamux_rgcfr_cof COF Clear trigger event overrun flag Upon setting, this bit clears the corresponding overrun flag OFx in the DMAMUX_RGCSR register.
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_hwcfgr2 DMAMUXHWCFGR2 DMAMUX hardware configuration 2 register
@{*/


#define DMAMUX_DMAMUX_HWCFGR2_NUM_DMA_EXT_REQ_SHIFT		0
#define DMAMUX_DMAMUX_HWCFGR2_NUM_DMA_EXT_REQ_MASK		0xff
/** @defgroup dmamux_dmamux_hwcfgr2_num_dma_ext_req NUMDMAEXTREQ Number of DMA request trigger inputs
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_hwcfgr1 DMAMUXHWCFGR1 DMAMUX hardware configuration 1 register
@{*/


#define DMAMUX_DMAMUX_HWCFGR1_NUM_DMA_REQGEN_SHIFT		24
#define DMAMUX_DMAMUX_HWCFGR1_NUM_DMA_REQGEN_MASK		0xff
/** @defgroup dmamux_dmamux_hwcfgr1_num_dma_reqgen NUMDMAREQGEN number of DMA request generator channels
@{*/
/**@}*/


#define DMAMUX_DMAMUX_HWCFGR1_NUM_DMA_TRIG_SHIFT		16
#define DMAMUX_DMAMUX_HWCFGR1_NUM_DMA_TRIG_MASK		0xff
/** @defgroup dmamux_dmamux_hwcfgr1_num_dma_trig NUMDMATRIG number of synchronization inputs
@{*/
/**@}*/


#define DMAMUX_DMAMUX_HWCFGR1_NUM_DMA_PERIPH_REQ_SHIFT		8
#define DMAMUX_DMAMUX_HWCFGR1_NUM_DMA_PERIPH_REQ_MASK		0xff
/** @defgroup dmamux_dmamux_hwcfgr1_num_dma_periph_req NUMDMAPERIPHREQ number of DMA request lines from peripherals
@{*/
/**@}*/


#define DMAMUX_DMAMUX_HWCFGR1_NUM_DMA_STREAMS_SHIFT		0
#define DMAMUX_DMAMUX_HWCFGR1_NUM_DMA_STREAMS_MASK		0xff
/** @defgroup dmamux_dmamux_hwcfgr1_num_dma_streams NUMDMASTREAMS number of DMA request line multiplexer (output) channels
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_verr DMAMUXVERR DMAMUX version register
@{*/


#define DMAMUX_DMAMUX_VERR_MAJREV_SHIFT		4
#define DMAMUX_DMAMUX_VERR_MAJREV_MASK		0x0f
/** @defgroup dmamux_dmamux_verr_majrev MAJREV Major IP revision
@{*/
/**@}*/


#define DMAMUX_DMAMUX_VERR_MINREV_SHIFT		0
#define DMAMUX_DMAMUX_VERR_MINREV_MASK		0x0f
/** @defgroup dmamux_dmamux_verr_minrev MINREV Minor IP revision
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_ipidr DMAMUXIPIDR DMAMUX IP identification register
@{*/


#define DMAMUX_DMAMUX_IPIDR_ID_SHIFT		0
#define DMAMUX_DMAMUX_IPIDR_ID_MASK		0xffffffff
/** @defgroup dmamux_dmamux_ipidr_id ID IP identification
@{*/
/**@}*/


/**@}*/

/** @defgroup dmamux_dmamux_sidr DMAMUXSIDR DMAMUX size identification register
@{*/


#define DMAMUX_DMAMUX_SIDR_SID_SHIFT		0
#define DMAMUX_DMAMUX_SIDR_SID_MASK		0xffffffff
/** @defgroup dmamux_dmamux_sidr_sid SID Size identification
@{*/
/**@}*/


/**@}*/

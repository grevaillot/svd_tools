#pragma once 

/* --- ETM: Embedded Trace Macrocell -------------------------------- */

/** @defgroup etm_registers Embedded Trace Macrocell Register
@{*/

/** ETM_CR ETM Main Control Register **/
#define ETM_CR			MMIO32(ETM_BASE + 0x00)
/** ETM_CCR ETM Configuration Code Register **/
#define ETM_CCR			MMIO32(ETM_BASE + 0x04)
/** ETM_TRIGGER ETM Trigger Event Register **/
#define ETM_TRIGGER			MMIO32(ETM_BASE + 0x08)
/** ETM_SR ETM Status Register **/
#define ETM_SR			MMIO32(ETM_BASE + 0x10)
/** ETM_SCR ETM System Configuration Register **/
#define ETM_SCR			MMIO32(ETM_BASE + 0x14)
/** ETM_TEEVR ETM TraceEnable Event Register **/
#define ETM_TEEVR			MMIO32(ETM_BASE + 0x20)
/** ETM_TECR1 ETM TraceEnable Control 1 Register **/
#define ETM_TECR1			MMIO32(ETM_BASE + 0x24)
/** ETM_FFLR ETM FIFO Full Level Register **/
#define ETM_FFLR			MMIO32(ETM_BASE + 0x28)
/** ETM_CNTRLDVR1 ETM Free-running Counter Reload Value **/
#define ETM_CNTRLDVR1			MMIO32(ETM_BASE + 0x140)
/** ETM_SYNCFR ETM Synchronization Frequency Register **/
#define ETM_SYNCFR			MMIO32(ETM_BASE + 0x1e0)
/** ETM_IDR ETM ID Register **/
#define ETM_IDR			MMIO32(ETM_BASE + 0x1e4)
/** ETM_CCER ETM Configuration Code Extension Register **/
#define ETM_CCER			MMIO32(ETM_BASE + 0x1e8)
/** ETM_TESSEICR ETM TraceEnable Start/Stop EmbeddedICE Control Register **/
#define ETM_TESSEICR			MMIO32(ETM_BASE + 0x1f0)
/** ETM_TSEVT ETM TimeStamp Event Register **/
#define ETM_TSEVT			MMIO32(ETM_BASE + 0x1f8)
/** ETM_TRACEIDR ETM CoreSight Trace ID Register **/
#define ETM_TRACEIDR			MMIO32(ETM_BASE + 0x200)
/** ETM_IDR2 ETM ID Register 2 **/
#define ETM_IDR2			MMIO32(ETM_BASE + 0x208)
/** ETM_PDSR ETM Device Power-Down Status Register **/
#define ETM_PDSR			MMIO32(ETM_BASE + 0x314)
/** ETM_ITMISCIN ETM Integration Test Miscellaneous Inputs **/
#define ETM_ITMISCIN			MMIO32(ETM_BASE + 0xee0)
/** ETM_ITTRIGOUT ETM Integration Test Trigger Out **/
#define ETM_ITTRIGOUT			MMIO32(ETM_BASE + 0xee8)
/** ETM_ITATBCTR2 ETM Integration Test ATB Control 2 **/
#define ETM_ITATBCTR2			MMIO32(ETM_BASE + 0xef0)
/** ETM_ITATBCTR0 ETM Integration Test ATB Control 0 **/
#define ETM_ITATBCTR0			MMIO32(ETM_BASE + 0xef8)
/** ETM_ITCTRL ETM Integration Mode Control Register **/
#define ETM_ITCTRL			MMIO32(ETM_BASE + 0xf00)
/** ETM_CLAIMSET ETM Claim Tag Set Register **/
#define ETM_CLAIMSET			MMIO32(ETM_BASE + 0xfa0)
/** ETM_CLAIMCLR ETM Claim Tag Clear Register **/
#define ETM_CLAIMCLR			MMIO32(ETM_BASE + 0xfa4)
/** ETM_LAR ETM Lock Access Register **/
#define ETM_LAR			MMIO32(ETM_BASE + 0xfb0)
/** ETM_LSR ETM Lock Status Register **/
#define ETM_LSR			MMIO32(ETM_BASE + 0xfb4)
/** ETM_AUTHSTATUS ETM Authentication Status Register **/
#define ETM_AUTHSTATUS			MMIO32(ETM_BASE + 0xfb8)
/** ETM_DEVTYPE ETM CoreSight Device Type Register **/
#define ETM_DEVTYPE			MMIO32(ETM_BASE + 0xfcc)
/** ETM_PIDR4 ETM Peripheral Identification Register #4 **/
#define ETM_PIDR4			MMIO32(ETM_BASE + 0xfd0)
/** ETM_PIDR5 ETM Peripheral Identification Register #5 **/
#define ETM_PIDR5			MMIO32(ETM_BASE + 0xfd4)
/** ETM_PIDR6 ETM Peripheral Identification Register #6 **/
#define ETM_PIDR6			MMIO32(ETM_BASE + 0xfd8)
/** ETM_PIDR7 ETM Peripheral Identification Register #7 **/
#define ETM_PIDR7			MMIO32(ETM_BASE + 0xfdc)
/** ETM_PIDR0 ETM Peripheral Identification Register #0 **/
#define ETM_PIDR0			MMIO32(ETM_BASE + 0xfe0)
/** ETM_PIDR1 ETM Peripheral Identification Register #1 **/
#define ETM_PIDR1			MMIO32(ETM_BASE + 0xfe4)
/** ETM_PIDR2 ETM Peripheral Identification Register #2 **/
#define ETM_PIDR2			MMIO32(ETM_BASE + 0xfe8)
/** ETM_PIDR3 ETM Peripheral Identification Register #3 **/
#define ETM_PIDR3			MMIO32(ETM_BASE + 0xfec)
/** ETM_CIDR0 ETM Component Identification Register #0 **/
#define ETM_CIDR0			MMIO32(ETM_BASE + 0xff0)
/** ETM_CIDR1 ETM Component Identification Register #1 **/
#define ETM_CIDR1			MMIO32(ETM_BASE + 0xff4)
/** ETM_CIDR2 ETM Component Identification Register #2 **/
#define ETM_CIDR2			MMIO32(ETM_BASE + 0xff8)
/** ETM_CIDR3 ETM Component Identification Register #3 **/
#define ETM_CIDR3			MMIO32(ETM_BASE + 0xffc)

/**@}*/


/** @defgroup etm_cr CR ETM Main Control Register
@{*/

/** ETM_CR_TSEN TimeStamp Enable **/
#define ETM_CR_TSEN		(1 << 28)
/** ETM_CR_PORTSIZE3 Port Size bit 3 **/
#define ETM_CR_PORTSIZE3		(1 << 21)

#define ETM_CR_PORTMODE_SHIFT		16
#define ETM_CR_PORTMODE_MASK		0x03
/** @defgroup etm_cr_portmode PORTMODE Port Mode bits 1:0
@{*/
/**@}*/

/** ETM_CR_PORTMODE2 Port Mode bit 2 **/
#define ETM_CR_PORTMODE2		(1 << 13)
/** ETM_CR_PORTSEL ETM Port Select **/
#define ETM_CR_PORTSEL		(1 << 11)
/** ETM_CR_PROG ETM Programming **/
#define ETM_CR_PROG		(1 << 10)
/** ETM_CR_DBGRQ Debug Request Control **/
#define ETM_CR_DBGRQ		(1 << 9)
/** ETM_CR_BROUT Branch Output **/
#define ETM_CR_BROUT		(1 << 8)
/** ETM_CR_STALL Stall Processor **/
#define ETM_CR_STALL		(1 << 7)

#define ETM_CR_PORTSIZE_SHIFT		4
#define ETM_CR_PORTSIZE_MASK		0x07
/** @defgroup etm_cr_portsize PORTSIZE Port Size bits 2:0
@{*/
/**@}*/

/** ETM_CR_ETMPD ETM Power Down **/
#define ETM_CR_ETMPD		(1 << 0)

/**@}*/

/** @defgroup etm_ccr CCR ETM Configuration Code Register
@{*/


/**@}*/

/** @defgroup etm_trigger TRIGGER ETM Trigger Event Register
@{*/


/**@}*/

/** @defgroup etm_sr SR ETM Status Register
@{*/


/**@}*/

/** @defgroup etm_scr SCR ETM System Configuration Register
@{*/


/**@}*/

/** @defgroup etm_teevr TEEVR ETM TraceEnable Event Register
@{*/


/**@}*/

/** @defgroup etm_tecr1 TECR1 ETM TraceEnable Control 1 Register
@{*/


/**@}*/

/** @defgroup etm_fflr FFLR ETM FIFO Full Level Register
@{*/


/**@}*/

/** @defgroup etm_cntrldvr1 CNTRLDVR1 ETM Free-running Counter Reload Value
@{*/


/**@}*/

/** @defgroup etm_syncfr SYNCFR ETM Synchronization Frequency Register
@{*/


/**@}*/

/** @defgroup etm_idr IDR ETM ID Register
@{*/


/**@}*/

/** @defgroup etm_ccer CCER ETM Configuration Code Extension Register
@{*/


/**@}*/

/** @defgroup etm_tesseicr TESSEICR ETM TraceEnable Start/Stop EmbeddedICE Control Register
@{*/


/**@}*/

/** @defgroup etm_tsevt TSEVT ETM TimeStamp Event Register
@{*/


/**@}*/

/** @defgroup etm_traceidr TRACEIDR ETM CoreSight Trace ID Register
@{*/


/**@}*/

/** @defgroup etm_idr2 IDR2 ETM ID Register 2
@{*/


/**@}*/

/** @defgroup etm_pdsr PDSR ETM Device Power-Down Status Register
@{*/


/**@}*/

/** @defgroup etm_itmiscin ITMISCIN ETM Integration Test Miscellaneous Inputs
@{*/


/**@}*/

/** @defgroup etm_ittrigout ITTRIGOUT ETM Integration Test Trigger Out
@{*/


/**@}*/

/** @defgroup etm_itatbctr2 ITATBCTR2 ETM Integration Test ATB Control 2
@{*/


/**@}*/

/** @defgroup etm_itatbctr0 ITATBCTR0 ETM Integration Test ATB Control 0
@{*/


/**@}*/

/** @defgroup etm_itctrl ITCTRL ETM Integration Mode Control Register
@{*/

/** ETM_ITCTRL_INTEGRATION  **/
#define ETM_ITCTRL_INTEGRATION		(1 << 0)

/**@}*/

/** @defgroup etm_claimset CLAIMSET ETM Claim Tag Set Register
@{*/


/**@}*/

/** @defgroup etm_claimclr CLAIMCLR ETM Claim Tag Clear Register
@{*/


/**@}*/

/** @defgroup etm_lar LAR ETM Lock Access Register
@{*/


/**@}*/

/** @defgroup etm_lsr LSR ETM Lock Status Register
@{*/

/** ETM_LSR_ByteAcc  **/
#define ETM_LSR_ByteAcc		(1 << 2)
/** ETM_LSR_Access  **/
#define ETM_LSR_Access		(1 << 1)
/** ETM_LSR_Present  **/
#define ETM_LSR_Present		(1 << 0)

/**@}*/

/** @defgroup etm_authstatus AUTHSTATUS ETM Authentication Status Register
@{*/


/**@}*/

/** @defgroup etm_devtype DEVTYPE ETM CoreSight Device Type Register
@{*/


/**@}*/

/** @defgroup etm_pidr4 PIDR4 ETM Peripheral Identification Register #4
@{*/


/**@}*/

/** @defgroup etm_pidr5 PIDR5 ETM Peripheral Identification Register #5
@{*/


/**@}*/

/** @defgroup etm_pidr6 PIDR6 ETM Peripheral Identification Register #6
@{*/


/**@}*/

/** @defgroup etm_pidr7 PIDR7 ETM Peripheral Identification Register #7
@{*/


/**@}*/

/** @defgroup etm_pidr0 PIDR0 ETM Peripheral Identification Register #0
@{*/


/**@}*/

/** @defgroup etm_pidr1 PIDR1 ETM Peripheral Identification Register #1
@{*/


/**@}*/

/** @defgroup etm_pidr2 PIDR2 ETM Peripheral Identification Register #2
@{*/


/**@}*/

/** @defgroup etm_pidr3 PIDR3 ETM Peripheral Identification Register #3
@{*/


/**@}*/

/** @defgroup etm_cidr0 CIDR0 ETM Component Identification Register #0
@{*/


/**@}*/

/** @defgroup etm_cidr1 CIDR1 ETM Component Identification Register #1
@{*/


/**@}*/

/** @defgroup etm_cidr2 CIDR2 ETM Component Identification Register #2
@{*/


/**@}*/

/** @defgroup etm_cidr3 CIDR3 ETM Component Identification Register #3
@{*/


/**@}*/

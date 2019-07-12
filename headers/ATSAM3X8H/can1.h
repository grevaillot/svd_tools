#pragma once 

/* --- CAN1: Controller Area Network 1 ------------------------------ */

/** @defgroup can1_registers Controller Area Network 1 Register
@{*/

/** CAN1_MR Mode Register **/
#define CAN1_MR			MMIO32(CAN1_BASE + 0x00)
/** CAN1_IER Interrupt Enable Register **/
#define CAN1_IER			MMIO32(CAN1_BASE + 0x04)
/** CAN1_IDR Interrupt Disable Register **/
#define CAN1_IDR			MMIO32(CAN1_BASE + 0x08)
/** CAN1_IMR Interrupt Mask Register **/
#define CAN1_IMR			MMIO32(CAN1_BASE + 0x0c)
/** CAN1_SR Status Register **/
#define CAN1_SR			MMIO32(CAN1_BASE + 0x10)
/** CAN1_BR Baudrate Register **/
#define CAN1_BR			MMIO32(CAN1_BASE + 0x14)
/** CAN1_TIM Timer Register **/
#define CAN1_TIM			MMIO32(CAN1_BASE + 0x18)
/** CAN1_TIMESTP Timestamp Register **/
#define CAN1_TIMESTP			MMIO32(CAN1_BASE + 0x1c)
/** CAN1_ECR Error Counter Register **/
#define CAN1_ECR			MMIO32(CAN1_BASE + 0x20)
/** CAN1_TCR Transfer Command Register **/
#define CAN1_TCR			MMIO32(CAN1_BASE + 0x24)
/** CAN1_ACR Abort Command Register **/
#define CAN1_ACR			MMIO32(CAN1_BASE + 0x28)
/** CAN1_WPMR Write Protect Mode Register **/
#define CAN1_WPMR			MMIO32(CAN1_BASE + 0xe4)
/** CAN1_WPSR Write Protect Status Register **/
#define CAN1_WPSR			MMIO32(CAN1_BASE + 0xe8)
/** CAN1_MMR0 Mailbox Mode Register (MB = 0) **/
#define CAN1_MMR0			MMIO32(CAN1_BASE + 0x200)
/** CAN1_MAM0 Mailbox Acceptance Mask Register (MB = 0) **/
#define CAN1_MAM0			MMIO32(CAN1_BASE + 0x204)
/** CAN1_MID0 Mailbox ID Register (MB = 0) **/
#define CAN1_MID0			MMIO32(CAN1_BASE + 0x208)
/** CAN1_MFID0 Mailbox Family ID Register (MB = 0) **/
#define CAN1_MFID0			MMIO32(CAN1_BASE + 0x20c)
/** CAN1_MSR0 Mailbox Status Register (MB = 0) **/
#define CAN1_MSR0			MMIO32(CAN1_BASE + 0x210)
/** CAN1_MDL0 Mailbox Data Low Register (MB = 0) **/
#define CAN1_MDL0			MMIO32(CAN1_BASE + 0x214)
/** CAN1_MDH0 Mailbox Data High Register (MB = 0) **/
#define CAN1_MDH0			MMIO32(CAN1_BASE + 0x218)
/** CAN1_MCR0 Mailbox Control Register (MB = 0) **/
#define CAN1_MCR0			MMIO32(CAN1_BASE + 0x21c)
/** CAN1_MMR1 Mailbox Mode Register (MB = 1) **/
#define CAN1_MMR1			MMIO32(CAN1_BASE + 0x220)
/** CAN1_MAM1 Mailbox Acceptance Mask Register (MB = 1) **/
#define CAN1_MAM1			MMIO32(CAN1_BASE + 0x224)
/** CAN1_MID1 Mailbox ID Register (MB = 1) **/
#define CAN1_MID1			MMIO32(CAN1_BASE + 0x228)
/** CAN1_MFID1 Mailbox Family ID Register (MB = 1) **/
#define CAN1_MFID1			MMIO32(CAN1_BASE + 0x22c)
/** CAN1_MSR1 Mailbox Status Register (MB = 1) **/
#define CAN1_MSR1			MMIO32(CAN1_BASE + 0x230)
/** CAN1_MDL1 Mailbox Data Low Register (MB = 1) **/
#define CAN1_MDL1			MMIO32(CAN1_BASE + 0x234)
/** CAN1_MDH1 Mailbox Data High Register (MB = 1) **/
#define CAN1_MDH1			MMIO32(CAN1_BASE + 0x238)
/** CAN1_MCR1 Mailbox Control Register (MB = 1) **/
#define CAN1_MCR1			MMIO32(CAN1_BASE + 0x23c)
/** CAN1_MMR2 Mailbox Mode Register (MB = 2) **/
#define CAN1_MMR2			MMIO32(CAN1_BASE + 0x240)
/** CAN1_MAM2 Mailbox Acceptance Mask Register (MB = 2) **/
#define CAN1_MAM2			MMIO32(CAN1_BASE + 0x244)
/** CAN1_MID2 Mailbox ID Register (MB = 2) **/
#define CAN1_MID2			MMIO32(CAN1_BASE + 0x248)
/** CAN1_MFID2 Mailbox Family ID Register (MB = 2) **/
#define CAN1_MFID2			MMIO32(CAN1_BASE + 0x24c)
/** CAN1_MSR2 Mailbox Status Register (MB = 2) **/
#define CAN1_MSR2			MMIO32(CAN1_BASE + 0x250)
/** CAN1_MDL2 Mailbox Data Low Register (MB = 2) **/
#define CAN1_MDL2			MMIO32(CAN1_BASE + 0x254)
/** CAN1_MDH2 Mailbox Data High Register (MB = 2) **/
#define CAN1_MDH2			MMIO32(CAN1_BASE + 0x258)
/** CAN1_MCR2 Mailbox Control Register (MB = 2) **/
#define CAN1_MCR2			MMIO32(CAN1_BASE + 0x25c)
/** CAN1_MMR3 Mailbox Mode Register (MB = 3) **/
#define CAN1_MMR3			MMIO32(CAN1_BASE + 0x260)
/** CAN1_MAM3 Mailbox Acceptance Mask Register (MB = 3) **/
#define CAN1_MAM3			MMIO32(CAN1_BASE + 0x264)
/** CAN1_MID3 Mailbox ID Register (MB = 3) **/
#define CAN1_MID3			MMIO32(CAN1_BASE + 0x268)
/** CAN1_MFID3 Mailbox Family ID Register (MB = 3) **/
#define CAN1_MFID3			MMIO32(CAN1_BASE + 0x26c)
/** CAN1_MSR3 Mailbox Status Register (MB = 3) **/
#define CAN1_MSR3			MMIO32(CAN1_BASE + 0x270)
/** CAN1_MDL3 Mailbox Data Low Register (MB = 3) **/
#define CAN1_MDL3			MMIO32(CAN1_BASE + 0x274)
/** CAN1_MDH3 Mailbox Data High Register (MB = 3) **/
#define CAN1_MDH3			MMIO32(CAN1_BASE + 0x278)
/** CAN1_MCR3 Mailbox Control Register (MB = 3) **/
#define CAN1_MCR3			MMIO32(CAN1_BASE + 0x27c)
/** CAN1_MMR4 Mailbox Mode Register (MB = 4) **/
#define CAN1_MMR4			MMIO32(CAN1_BASE + 0x280)
/** CAN1_MAM4 Mailbox Acceptance Mask Register (MB = 4) **/
#define CAN1_MAM4			MMIO32(CAN1_BASE + 0x284)
/** CAN1_MID4 Mailbox ID Register (MB = 4) **/
#define CAN1_MID4			MMIO32(CAN1_BASE + 0x288)
/** CAN1_MFID4 Mailbox Family ID Register (MB = 4) **/
#define CAN1_MFID4			MMIO32(CAN1_BASE + 0x28c)
/** CAN1_MSR4 Mailbox Status Register (MB = 4) **/
#define CAN1_MSR4			MMIO32(CAN1_BASE + 0x290)
/** CAN1_MDL4 Mailbox Data Low Register (MB = 4) **/
#define CAN1_MDL4			MMIO32(CAN1_BASE + 0x294)
/** CAN1_MDH4 Mailbox Data High Register (MB = 4) **/
#define CAN1_MDH4			MMIO32(CAN1_BASE + 0x298)
/** CAN1_MCR4 Mailbox Control Register (MB = 4) **/
#define CAN1_MCR4			MMIO32(CAN1_BASE + 0x29c)
/** CAN1_MMR5 Mailbox Mode Register (MB = 5) **/
#define CAN1_MMR5			MMIO32(CAN1_BASE + 0x2a0)
/** CAN1_MAM5 Mailbox Acceptance Mask Register (MB = 5) **/
#define CAN1_MAM5			MMIO32(CAN1_BASE + 0x2a4)
/** CAN1_MID5 Mailbox ID Register (MB = 5) **/
#define CAN1_MID5			MMIO32(CAN1_BASE + 0x2a8)
/** CAN1_MFID5 Mailbox Family ID Register (MB = 5) **/
#define CAN1_MFID5			MMIO32(CAN1_BASE + 0x2ac)
/** CAN1_MSR5 Mailbox Status Register (MB = 5) **/
#define CAN1_MSR5			MMIO32(CAN1_BASE + 0x2b0)
/** CAN1_MDL5 Mailbox Data Low Register (MB = 5) **/
#define CAN1_MDL5			MMIO32(CAN1_BASE + 0x2b4)
/** CAN1_MDH5 Mailbox Data High Register (MB = 5) **/
#define CAN1_MDH5			MMIO32(CAN1_BASE + 0x2b8)
/** CAN1_MCR5 Mailbox Control Register (MB = 5) **/
#define CAN1_MCR5			MMIO32(CAN1_BASE + 0x2bc)
/** CAN1_MMR6 Mailbox Mode Register (MB = 6) **/
#define CAN1_MMR6			MMIO32(CAN1_BASE + 0x2c0)
/** CAN1_MAM6 Mailbox Acceptance Mask Register (MB = 6) **/
#define CAN1_MAM6			MMIO32(CAN1_BASE + 0x2c4)
/** CAN1_MID6 Mailbox ID Register (MB = 6) **/
#define CAN1_MID6			MMIO32(CAN1_BASE + 0x2c8)
/** CAN1_MFID6 Mailbox Family ID Register (MB = 6) **/
#define CAN1_MFID6			MMIO32(CAN1_BASE + 0x2cc)
/** CAN1_MSR6 Mailbox Status Register (MB = 6) **/
#define CAN1_MSR6			MMIO32(CAN1_BASE + 0x2d0)
/** CAN1_MDL6 Mailbox Data Low Register (MB = 6) **/
#define CAN1_MDL6			MMIO32(CAN1_BASE + 0x2d4)
/** CAN1_MDH6 Mailbox Data High Register (MB = 6) **/
#define CAN1_MDH6			MMIO32(CAN1_BASE + 0x2d8)
/** CAN1_MCR6 Mailbox Control Register (MB = 6) **/
#define CAN1_MCR6			MMIO32(CAN1_BASE + 0x2dc)
/** CAN1_MMR7 Mailbox Mode Register (MB = 7) **/
#define CAN1_MMR7			MMIO32(CAN1_BASE + 0x2e0)
/** CAN1_MAM7 Mailbox Acceptance Mask Register (MB = 7) **/
#define CAN1_MAM7			MMIO32(CAN1_BASE + 0x2e4)
/** CAN1_MID7 Mailbox ID Register (MB = 7) **/
#define CAN1_MID7			MMIO32(CAN1_BASE + 0x2e8)
/** CAN1_MFID7 Mailbox Family ID Register (MB = 7) **/
#define CAN1_MFID7			MMIO32(CAN1_BASE + 0x2ec)
/** CAN1_MSR7 Mailbox Status Register (MB = 7) **/
#define CAN1_MSR7			MMIO32(CAN1_BASE + 0x2f0)
/** CAN1_MDL7 Mailbox Data Low Register (MB = 7) **/
#define CAN1_MDL7			MMIO32(CAN1_BASE + 0x2f4)
/** CAN1_MDH7 Mailbox Data High Register (MB = 7) **/
#define CAN1_MDH7			MMIO32(CAN1_BASE + 0x2f8)
/** CAN1_MCR7 Mailbox Control Register (MB = 7) **/
#define CAN1_MCR7			MMIO32(CAN1_BASE + 0x2fc)

/**@}*/


/** @defgroup can1_mr MR Mode Register
@{*/


#define CAN1_MR_RXSYNC_SHIFT		24
#define CAN1_MR_RXSYNC_MASK		0x07
/** @defgroup can1_mr_rxsync RXSYNC Reception Synchronization Stage (not readable)
@{*/
/**@}*/

/** CAN1_MR_DRPT Disable Repeat **/
#define CAN1_MR_DRPT		(1 << 7)
/** CAN1_MR_TIMFRZ Enable Timer Freeze **/
#define CAN1_MR_TIMFRZ		(1 << 6)
/** CAN1_MR_TTM Disable/Enable Time Triggered Mode **/
#define CAN1_MR_TTM		(1 << 5)
/** CAN1_MR_TEOF Timestamp messages at each end of Frame **/
#define CAN1_MR_TEOF		(1 << 4)
/** CAN1_MR_OVL Disable/Enable Overload Frame **/
#define CAN1_MR_OVL		(1 << 3)
/** CAN1_MR_ABM Disable/Enable Autobaud/Listen mode **/
#define CAN1_MR_ABM		(1 << 2)
/** CAN1_MR_LPM Disable/Enable Low Power Mode **/
#define CAN1_MR_LPM		(1 << 1)
/** CAN1_MR_CANEN CAN Controller Enable **/
#define CAN1_MR_CANEN		(1 << 0)

/**@}*/

/** @defgroup can1_ier IER Interrupt Enable Register
@{*/

/** CAN1_IER_BERR Bit Error Interrupt Enable **/
#define CAN1_IER_BERR		(1 << 28)
/** CAN1_IER_FERR Form Error Interrupt Enable **/
#define CAN1_IER_FERR		(1 << 27)
/** CAN1_IER_AERR Acknowledgment Error Interrupt Enable **/
#define CAN1_IER_AERR		(1 << 26)
/** CAN1_IER_SERR Stuffing Error Interrupt Enable **/
#define CAN1_IER_SERR		(1 << 25)
/** CAN1_IER_CERR CRC Error Interrupt Enable **/
#define CAN1_IER_CERR		(1 << 24)
/** CAN1_IER_TSTP TimeStamp Interrupt Enable **/
#define CAN1_IER_TSTP		(1 << 23)
/** CAN1_IER_TOVF Timer Overflow Interrupt Enable **/
#define CAN1_IER_TOVF		(1 << 22)
/** CAN1_IER_WAKEUP Wakeup Interrupt Enable **/
#define CAN1_IER_WAKEUP		(1 << 21)
/** CAN1_IER_SLEEP Sleep Interrupt Enable **/
#define CAN1_IER_SLEEP		(1 << 20)
/** CAN1_IER_BOFF Bus Off Mode Interrupt Enable **/
#define CAN1_IER_BOFF		(1 << 19)
/** CAN1_IER_ERRP Error Passive Mode Interrupt Enable **/
#define CAN1_IER_ERRP		(1 << 18)
/** CAN1_IER_WARN Warning Limit Interrupt Enable **/
#define CAN1_IER_WARN		(1 << 17)
/** CAN1_IER_ERRA Error Active Mode Interrupt Enable **/
#define CAN1_IER_ERRA		(1 << 16)
/** CAN1_IER_MB7 Mailbox 7 Interrupt Enable **/
#define CAN1_IER_MB7		(1 << 7)
/** CAN1_IER_MB6 Mailbox 6 Interrupt Enable **/
#define CAN1_IER_MB6		(1 << 6)
/** CAN1_IER_MB5 Mailbox 5 Interrupt Enable **/
#define CAN1_IER_MB5		(1 << 5)
/** CAN1_IER_MB4 Mailbox 4 Interrupt Enable **/
#define CAN1_IER_MB4		(1 << 4)
/** CAN1_IER_MB3 Mailbox 3 Interrupt Enable **/
#define CAN1_IER_MB3		(1 << 3)
/** CAN1_IER_MB2 Mailbox 2 Interrupt Enable **/
#define CAN1_IER_MB2		(1 << 2)
/** CAN1_IER_MB1 Mailbox 1 Interrupt Enable **/
#define CAN1_IER_MB1		(1 << 1)
/** CAN1_IER_MB0 Mailbox 0 Interrupt Enable **/
#define CAN1_IER_MB0		(1 << 0)

/**@}*/

/** @defgroup can1_idr IDR Interrupt Disable Register
@{*/

/** CAN1_IDR_BERR Bit Error Interrupt Disable **/
#define CAN1_IDR_BERR		(1 << 28)
/** CAN1_IDR_FERR Form Error Interrupt Disable **/
#define CAN1_IDR_FERR		(1 << 27)
/** CAN1_IDR_AERR Acknowledgment Error Interrupt Disable **/
#define CAN1_IDR_AERR		(1 << 26)
/** CAN1_IDR_SERR Stuffing Error Interrupt Disable **/
#define CAN1_IDR_SERR		(1 << 25)
/** CAN1_IDR_CERR CRC Error Interrupt Disable **/
#define CAN1_IDR_CERR		(1 << 24)
/** CAN1_IDR_TSTP TimeStamp Interrupt Disable **/
#define CAN1_IDR_TSTP		(1 << 23)
/** CAN1_IDR_TOVF Timer Overflow Interrupt **/
#define CAN1_IDR_TOVF		(1 << 22)
/** CAN1_IDR_WAKEUP Wakeup Interrupt Disable **/
#define CAN1_IDR_WAKEUP		(1 << 21)
/** CAN1_IDR_SLEEP Sleep Interrupt Disable **/
#define CAN1_IDR_SLEEP		(1 << 20)
/** CAN1_IDR_BOFF Bus Off Mode Interrupt Disable **/
#define CAN1_IDR_BOFF		(1 << 19)
/** CAN1_IDR_ERRP Error Passive Mode Interrupt Disable **/
#define CAN1_IDR_ERRP		(1 << 18)
/** CAN1_IDR_WARN Warning Limit Interrupt Disable **/
#define CAN1_IDR_WARN		(1 << 17)
/** CAN1_IDR_ERRA Error Active Mode Interrupt Disable **/
#define CAN1_IDR_ERRA		(1 << 16)
/** CAN1_IDR_MB7 Mailbox 7 Interrupt Disable **/
#define CAN1_IDR_MB7		(1 << 7)
/** CAN1_IDR_MB6 Mailbox 6 Interrupt Disable **/
#define CAN1_IDR_MB6		(1 << 6)
/** CAN1_IDR_MB5 Mailbox 5 Interrupt Disable **/
#define CAN1_IDR_MB5		(1 << 5)
/** CAN1_IDR_MB4 Mailbox 4 Interrupt Disable **/
#define CAN1_IDR_MB4		(1 << 4)
/** CAN1_IDR_MB3 Mailbox 3 Interrupt Disable **/
#define CAN1_IDR_MB3		(1 << 3)
/** CAN1_IDR_MB2 Mailbox 2 Interrupt Disable **/
#define CAN1_IDR_MB2		(1 << 2)
/** CAN1_IDR_MB1 Mailbox 1 Interrupt Disable **/
#define CAN1_IDR_MB1		(1 << 1)
/** CAN1_IDR_MB0 Mailbox 0 Interrupt Disable **/
#define CAN1_IDR_MB0		(1 << 0)

/**@}*/

/** @defgroup can1_imr IMR Interrupt Mask Register
@{*/

/** CAN1_IMR_BERR Bit Error Interrupt Mask **/
#define CAN1_IMR_BERR		(1 << 28)
/** CAN1_IMR_FERR Form Error Interrupt Mask **/
#define CAN1_IMR_FERR		(1 << 27)
/** CAN1_IMR_AERR Acknowledgment Error Interrupt Mask **/
#define CAN1_IMR_AERR		(1 << 26)
/** CAN1_IMR_SERR Stuffing Error Interrupt Mask **/
#define CAN1_IMR_SERR		(1 << 25)
/** CAN1_IMR_CERR CRC Error Interrupt Mask **/
#define CAN1_IMR_CERR		(1 << 24)
/** CAN1_IMR_TSTP Timestamp Interrupt Mask **/
#define CAN1_IMR_TSTP		(1 << 23)
/** CAN1_IMR_TOVF Timer Overflow Interrupt Mask **/
#define CAN1_IMR_TOVF		(1 << 22)
/** CAN1_IMR_WAKEUP Wakeup Interrupt Mask **/
#define CAN1_IMR_WAKEUP		(1 << 21)
/** CAN1_IMR_SLEEP Sleep Interrupt Mask **/
#define CAN1_IMR_SLEEP		(1 << 20)
/** CAN1_IMR_BOFF Bus Off Mode Interrupt Mask **/
#define CAN1_IMR_BOFF		(1 << 19)
/** CAN1_IMR_ERRP Error Passive Mode Interrupt Mask **/
#define CAN1_IMR_ERRP		(1 << 18)
/** CAN1_IMR_WARN Warning Limit Interrupt Mask **/
#define CAN1_IMR_WARN		(1 << 17)
/** CAN1_IMR_ERRA Error Active Mode Interrupt Mask **/
#define CAN1_IMR_ERRA		(1 << 16)
/** CAN1_IMR_MB7 Mailbox 7 Interrupt Mask **/
#define CAN1_IMR_MB7		(1 << 7)
/** CAN1_IMR_MB6 Mailbox 6 Interrupt Mask **/
#define CAN1_IMR_MB6		(1 << 6)
/** CAN1_IMR_MB5 Mailbox 5 Interrupt Mask **/
#define CAN1_IMR_MB5		(1 << 5)
/** CAN1_IMR_MB4 Mailbox 4 Interrupt Mask **/
#define CAN1_IMR_MB4		(1 << 4)
/** CAN1_IMR_MB3 Mailbox 3 Interrupt Mask **/
#define CAN1_IMR_MB3		(1 << 3)
/** CAN1_IMR_MB2 Mailbox 2 Interrupt Mask **/
#define CAN1_IMR_MB2		(1 << 2)
/** CAN1_IMR_MB1 Mailbox 1 Interrupt Mask **/
#define CAN1_IMR_MB1		(1 << 1)
/** CAN1_IMR_MB0 Mailbox 0 Interrupt Mask **/
#define CAN1_IMR_MB0		(1 << 0)

/**@}*/

/** @defgroup can1_sr SR Status Register
@{*/

/** CAN1_SR_OVLSY Overload busy **/
#define CAN1_SR_OVLSY		(1 << 31)
/** CAN1_SR_TBSY Transmitter busy **/
#define CAN1_SR_TBSY		(1 << 30)
/** CAN1_SR_RBSY Receiver busy **/
#define CAN1_SR_RBSY		(1 << 29)
/** CAN1_SR_BERR Bit Error **/
#define CAN1_SR_BERR		(1 << 28)
/** CAN1_SR_FERR Form Error **/
#define CAN1_SR_FERR		(1 << 27)
/** CAN1_SR_AERR Acknowledgment Error **/
#define CAN1_SR_AERR		(1 << 26)
/** CAN1_SR_SERR Mailbox Stuffing Error **/
#define CAN1_SR_SERR		(1 << 25)
/** CAN1_SR_CERR Mailbox CRC Error **/
#define CAN1_SR_CERR		(1 << 24)
/** CAN1_SR_TSTP  **/
#define CAN1_SR_TSTP		(1 << 23)
/** CAN1_SR_TOVF Timer Overflow **/
#define CAN1_SR_TOVF		(1 << 22)
/** CAN1_SR_WAKEUP CAN controller is not in Low power Mode **/
#define CAN1_SR_WAKEUP		(1 << 21)
/** CAN1_SR_SLEEP CAN controller in Low power Mode **/
#define CAN1_SR_SLEEP		(1 << 20)
/** CAN1_SR_BOFF Bus Off Mode **/
#define CAN1_SR_BOFF		(1 << 19)
/** CAN1_SR_ERRP Error Passive Mode **/
#define CAN1_SR_ERRP		(1 << 18)
/** CAN1_SR_WARN Warning Limit **/
#define CAN1_SR_WARN		(1 << 17)
/** CAN1_SR_ERRA Error Active Mode **/
#define CAN1_SR_ERRA		(1 << 16)
/** CAN1_SR_MB7 Mailbox 7 Event **/
#define CAN1_SR_MB7		(1 << 7)
/** CAN1_SR_MB6 Mailbox 6 Event **/
#define CAN1_SR_MB6		(1 << 6)
/** CAN1_SR_MB5 Mailbox 5 Event **/
#define CAN1_SR_MB5		(1 << 5)
/** CAN1_SR_MB4 Mailbox 4 Event **/
#define CAN1_SR_MB4		(1 << 4)
/** CAN1_SR_MB3 Mailbox 3 Event **/
#define CAN1_SR_MB3		(1 << 3)
/** CAN1_SR_MB2 Mailbox 2 Event **/
#define CAN1_SR_MB2		(1 << 2)
/** CAN1_SR_MB1 Mailbox 1 Event **/
#define CAN1_SR_MB1		(1 << 1)
/** CAN1_SR_MB0 Mailbox 0 Event **/
#define CAN1_SR_MB0		(1 << 0)

/**@}*/

/** @defgroup can1_br BR Baudrate Register
@{*/

/** CAN1_BR_SMP Sampling Mode **/
#define CAN1_BR_SMP		(1 << 24)

#define CAN1_BR_BRP_SHIFT		16
#define CAN1_BR_BRP_MASK		0x7f
/** @defgroup can1_br_brp BRP Baudrate Prescaler.
@{*/
/**@}*/


#define CAN1_BR_SJW_SHIFT		12
#define CAN1_BR_SJW_MASK		0x03
/** @defgroup can1_br_sjw SJW Re-synchronization jump width
@{*/
/**@}*/


#define CAN1_BR_PROPAG_SHIFT		8
#define CAN1_BR_PROPAG_MASK		0x07
/** @defgroup can1_br_propag PROPAG Programming time segment
@{*/
/**@}*/


#define CAN1_BR_PHASE1_SHIFT		4
#define CAN1_BR_PHASE1_MASK		0x07
/** @defgroup can1_br_phase1 PHASE1 Phase 1 segment
@{*/
/**@}*/


#define CAN1_BR_PHASE2_SHIFT		0
#define CAN1_BR_PHASE2_MASK		0x07
/** @defgroup can1_br_phase2 PHASE2 Phase 2 segment
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_tim TIM Timer Register
@{*/


#define CAN1_TIM_TIMER_SHIFT		0
#define CAN1_TIM_TIMER_MASK		0xffff
/** @defgroup can1_tim_timer TIMER Timer
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_timestp TIMESTP Timestamp Register
@{*/


#define CAN1_TIMESTP_MTIMESTAMP_SHIFT		0
#define CAN1_TIMESTP_MTIMESTAMP_MASK		0xffff
/** @defgroup can1_timestp_mtimestamp MTIMESTAMP Timestamp
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_ecr ECR Error Counter Register
@{*/


#define CAN1_ECR_TEC_SHIFT		16
#define CAN1_ECR_TEC_MASK		0xff
/** @defgroup can1_ecr_tec TEC Transmit Error Counter
@{*/
/**@}*/


#define CAN1_ECR_REC_SHIFT		0
#define CAN1_ECR_REC_MASK		0xff
/** @defgroup can1_ecr_rec REC Receive Error Counter
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_tcr TCR Transfer Command Register
@{*/

/** CAN1_TCR_TIMRST Timer Reset **/
#define CAN1_TCR_TIMRST		(1 << 31)
/** CAN1_TCR_MB7 Transfer Request for Mailbox 7 **/
#define CAN1_TCR_MB7		(1 << 7)
/** CAN1_TCR_MB6 Transfer Request for Mailbox 6 **/
#define CAN1_TCR_MB6		(1 << 6)
/** CAN1_TCR_MB5 Transfer Request for Mailbox 5 **/
#define CAN1_TCR_MB5		(1 << 5)
/** CAN1_TCR_MB4 Transfer Request for Mailbox 4 **/
#define CAN1_TCR_MB4		(1 << 4)
/** CAN1_TCR_MB3 Transfer Request for Mailbox 3 **/
#define CAN1_TCR_MB3		(1 << 3)
/** CAN1_TCR_MB2 Transfer Request for Mailbox 2 **/
#define CAN1_TCR_MB2		(1 << 2)
/** CAN1_TCR_MB1 Transfer Request for Mailbox 1 **/
#define CAN1_TCR_MB1		(1 << 1)
/** CAN1_TCR_MB0 Transfer Request for Mailbox 0 **/
#define CAN1_TCR_MB0		(1 << 0)

/**@}*/

/** @defgroup can1_acr ACR Abort Command Register
@{*/

/** CAN1_ACR_MB7 Abort Request for Mailbox 7 **/
#define CAN1_ACR_MB7		(1 << 7)
/** CAN1_ACR_MB6 Abort Request for Mailbox 6 **/
#define CAN1_ACR_MB6		(1 << 6)
/** CAN1_ACR_MB5 Abort Request for Mailbox 5 **/
#define CAN1_ACR_MB5		(1 << 5)
/** CAN1_ACR_MB4 Abort Request for Mailbox 4 **/
#define CAN1_ACR_MB4		(1 << 4)
/** CAN1_ACR_MB3 Abort Request for Mailbox 3 **/
#define CAN1_ACR_MB3		(1 << 3)
/** CAN1_ACR_MB2 Abort Request for Mailbox 2 **/
#define CAN1_ACR_MB2		(1 << 2)
/** CAN1_ACR_MB1 Abort Request for Mailbox 1 **/
#define CAN1_ACR_MB1		(1 << 1)
/** CAN1_ACR_MB0 Abort Request for Mailbox 0 **/
#define CAN1_ACR_MB0		(1 << 0)

/**@}*/

/** @defgroup can1_wpmr WPMR Write Protect Mode Register
@{*/


#define CAN1_WPMR_WPKEY_SHIFT		8
#define CAN1_WPMR_WPKEY_MASK		0xffffff
/** @defgroup can1_wpmr_wpkey WPKEY SPI Write Protection Key Password
@{*/
/**@}*/

/** CAN1_WPMR_WPEN Write Protection Enable **/
#define CAN1_WPMR_WPEN		(1 << 0)

/**@}*/

/** @defgroup can1_wpsr WPSR Write Protect Status Register
@{*/


#define CAN1_WPSR_WPVSRC_SHIFT		8
#define CAN1_WPSR_WPVSRC_MASK		0xff
/** @defgroup can1_wpsr_wpvsrc WPVSRC Write Protection Violation Source
@{*/
/**@}*/

/** CAN1_WPSR_WPVS Write Protection Violation Status **/
#define CAN1_WPSR_WPVS		(1 << 0)

/**@}*/

/** @defgroup can1_mmr0 MMR0 Mailbox Mode Register (MB = 0)
@{*/


#define CAN1_MMR0_MOT_SHIFT		24
#define CAN1_MMR0_MOT_MASK		0x07
/** @defgroup can1_mmr0_mot MOT Mailbox Object Type
@{*/
/**@}*/


#define CAN1_MMR0_PRIOR_SHIFT		16
#define CAN1_MMR0_PRIOR_MASK		0x0f
/** @defgroup can1_mmr0_prior PRIOR Mailbox Priority
@{*/
/**@}*/


#define CAN1_MMR0_MTIMEMARK_SHIFT		0
#define CAN1_MMR0_MTIMEMARK_MASK		0xffff
/** @defgroup can1_mmr0_mtimemark MTIMEMARK Mailbox Timemark
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mam0 MAM0 Mailbox Acceptance Mask Register (MB = 0)
@{*/

/** CAN1_MAM0_MIDE Identifier Version **/
#define CAN1_MAM0_MIDE		(1 << 29)

#define CAN1_MAM0_MIDvA_SHIFT		18
#define CAN1_MAM0_MIDvA_MASK		0x7ff
/** @defgroup can1_mam0_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MAM0_MIDvB_SHIFT		0
#define CAN1_MAM0_MIDvB_MASK		0x3ffff
/** @defgroup can1_mam0_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mid0 MID0 Mailbox ID Register (MB = 0)
@{*/

/** CAN1_MID0_MIDE Identifier Version **/
#define CAN1_MID0_MIDE		(1 << 29)

#define CAN1_MID0_MIDvA_SHIFT		18
#define CAN1_MID0_MIDvA_MASK		0x7ff
/** @defgroup can1_mid0_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MID0_MIDvB_SHIFT		0
#define CAN1_MID0_MIDvB_MASK		0x3ffff
/** @defgroup can1_mid0_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mfid0 MFID0 Mailbox Family ID Register (MB = 0)
@{*/


#define CAN1_MFID0_MFID_SHIFT		0
#define CAN1_MFID0_MFID_MASK		0x1fffffff
/** @defgroup can1_mfid0_mfid MFID Family ID
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_msr0 MSR0 Mailbox Status Register (MB = 0)
@{*/

/** CAN1_MSR0_MMI Mailbox Message Ignored **/
#define CAN1_MSR0_MMI		(1 << 24)
/** CAN1_MSR0_MRDY Mailbox Ready **/
#define CAN1_MSR0_MRDY		(1 << 23)
/** CAN1_MSR0_MABT Mailbox Message Abort **/
#define CAN1_MSR0_MABT		(1 << 22)
/** CAN1_MSR0_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MSR0_MRTR		(1 << 20)

#define CAN1_MSR0_MDLC_SHIFT		16
#define CAN1_MSR0_MDLC_MASK		0x0f
/** @defgroup can1_msr0_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


#define CAN1_MSR0_MTIMESTAMP_SHIFT		0
#define CAN1_MSR0_MTIMESTAMP_MASK		0xffff
/** @defgroup can1_msr0_mtimestamp MTIMESTAMP Timer value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdl0 MDL0 Mailbox Data Low Register (MB = 0)
@{*/


#define CAN1_MDL0_MDL_SHIFT		0
#define CAN1_MDL0_MDL_MASK		0xffffffff
/** @defgroup can1_mdl0_mdl MDL Message Data Low Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdh0 MDH0 Mailbox Data High Register (MB = 0)
@{*/


#define CAN1_MDH0_MDH_SHIFT		0
#define CAN1_MDH0_MDH_MASK		0xffffffff
/** @defgroup can1_mdh0_mdh MDH Message Data High Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mcr0 MCR0 Mailbox Control Register (MB = 0)
@{*/

/** CAN1_MCR0_MTCR Mailbox Transfer Command **/
#define CAN1_MCR0_MTCR		(1 << 23)
/** CAN1_MCR0_MACR Abort Request for Mailbox x **/
#define CAN1_MCR0_MACR		(1 << 22)
/** CAN1_MCR0_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MCR0_MRTR		(1 << 20)

#define CAN1_MCR0_MDLC_SHIFT		16
#define CAN1_MCR0_MDLC_MASK		0x0f
/** @defgroup can1_mcr0_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mmr1 MMR1 Mailbox Mode Register (MB = 1)
@{*/


#define CAN1_MMR1_MOT_SHIFT		24
#define CAN1_MMR1_MOT_MASK		0x07
/** @defgroup can1_mmr1_mot MOT Mailbox Object Type
@{*/
/**@}*/


#define CAN1_MMR1_PRIOR_SHIFT		16
#define CAN1_MMR1_PRIOR_MASK		0x0f
/** @defgroup can1_mmr1_prior PRIOR Mailbox Priority
@{*/
/**@}*/


#define CAN1_MMR1_MTIMEMARK_SHIFT		0
#define CAN1_MMR1_MTIMEMARK_MASK		0xffff
/** @defgroup can1_mmr1_mtimemark MTIMEMARK Mailbox Timemark
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mam1 MAM1 Mailbox Acceptance Mask Register (MB = 1)
@{*/

/** CAN1_MAM1_MIDE Identifier Version **/
#define CAN1_MAM1_MIDE		(1 << 29)

#define CAN1_MAM1_MIDvA_SHIFT		18
#define CAN1_MAM1_MIDvA_MASK		0x7ff
/** @defgroup can1_mam1_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MAM1_MIDvB_SHIFT		0
#define CAN1_MAM1_MIDvB_MASK		0x3ffff
/** @defgroup can1_mam1_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mid1 MID1 Mailbox ID Register (MB = 1)
@{*/

/** CAN1_MID1_MIDE Identifier Version **/
#define CAN1_MID1_MIDE		(1 << 29)

#define CAN1_MID1_MIDvA_SHIFT		18
#define CAN1_MID1_MIDvA_MASK		0x7ff
/** @defgroup can1_mid1_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MID1_MIDvB_SHIFT		0
#define CAN1_MID1_MIDvB_MASK		0x3ffff
/** @defgroup can1_mid1_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mfid1 MFID1 Mailbox Family ID Register (MB = 1)
@{*/


#define CAN1_MFID1_MFID_SHIFT		0
#define CAN1_MFID1_MFID_MASK		0x1fffffff
/** @defgroup can1_mfid1_mfid MFID Family ID
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_msr1 MSR1 Mailbox Status Register (MB = 1)
@{*/

/** CAN1_MSR1_MMI Mailbox Message Ignored **/
#define CAN1_MSR1_MMI		(1 << 24)
/** CAN1_MSR1_MRDY Mailbox Ready **/
#define CAN1_MSR1_MRDY		(1 << 23)
/** CAN1_MSR1_MABT Mailbox Message Abort **/
#define CAN1_MSR1_MABT		(1 << 22)
/** CAN1_MSR1_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MSR1_MRTR		(1 << 20)

#define CAN1_MSR1_MDLC_SHIFT		16
#define CAN1_MSR1_MDLC_MASK		0x0f
/** @defgroup can1_msr1_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


#define CAN1_MSR1_MTIMESTAMP_SHIFT		0
#define CAN1_MSR1_MTIMESTAMP_MASK		0xffff
/** @defgroup can1_msr1_mtimestamp MTIMESTAMP Timer value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdl1 MDL1 Mailbox Data Low Register (MB = 1)
@{*/


#define CAN1_MDL1_MDL_SHIFT		0
#define CAN1_MDL1_MDL_MASK		0xffffffff
/** @defgroup can1_mdl1_mdl MDL Message Data Low Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdh1 MDH1 Mailbox Data High Register (MB = 1)
@{*/


#define CAN1_MDH1_MDH_SHIFT		0
#define CAN1_MDH1_MDH_MASK		0xffffffff
/** @defgroup can1_mdh1_mdh MDH Message Data High Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mcr1 MCR1 Mailbox Control Register (MB = 1)
@{*/

/** CAN1_MCR1_MTCR Mailbox Transfer Command **/
#define CAN1_MCR1_MTCR		(1 << 23)
/** CAN1_MCR1_MACR Abort Request for Mailbox x **/
#define CAN1_MCR1_MACR		(1 << 22)
/** CAN1_MCR1_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MCR1_MRTR		(1 << 20)

#define CAN1_MCR1_MDLC_SHIFT		16
#define CAN1_MCR1_MDLC_MASK		0x0f
/** @defgroup can1_mcr1_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mmr2 MMR2 Mailbox Mode Register (MB = 2)
@{*/


#define CAN1_MMR2_MOT_SHIFT		24
#define CAN1_MMR2_MOT_MASK		0x07
/** @defgroup can1_mmr2_mot MOT Mailbox Object Type
@{*/
/**@}*/


#define CAN1_MMR2_PRIOR_SHIFT		16
#define CAN1_MMR2_PRIOR_MASK		0x0f
/** @defgroup can1_mmr2_prior PRIOR Mailbox Priority
@{*/
/**@}*/


#define CAN1_MMR2_MTIMEMARK_SHIFT		0
#define CAN1_MMR2_MTIMEMARK_MASK		0xffff
/** @defgroup can1_mmr2_mtimemark MTIMEMARK Mailbox Timemark
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mam2 MAM2 Mailbox Acceptance Mask Register (MB = 2)
@{*/

/** CAN1_MAM2_MIDE Identifier Version **/
#define CAN1_MAM2_MIDE		(1 << 29)

#define CAN1_MAM2_MIDvA_SHIFT		18
#define CAN1_MAM2_MIDvA_MASK		0x7ff
/** @defgroup can1_mam2_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MAM2_MIDvB_SHIFT		0
#define CAN1_MAM2_MIDvB_MASK		0x3ffff
/** @defgroup can1_mam2_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mid2 MID2 Mailbox ID Register (MB = 2)
@{*/

/** CAN1_MID2_MIDE Identifier Version **/
#define CAN1_MID2_MIDE		(1 << 29)

#define CAN1_MID2_MIDvA_SHIFT		18
#define CAN1_MID2_MIDvA_MASK		0x7ff
/** @defgroup can1_mid2_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MID2_MIDvB_SHIFT		0
#define CAN1_MID2_MIDvB_MASK		0x3ffff
/** @defgroup can1_mid2_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mfid2 MFID2 Mailbox Family ID Register (MB = 2)
@{*/


#define CAN1_MFID2_MFID_SHIFT		0
#define CAN1_MFID2_MFID_MASK		0x1fffffff
/** @defgroup can1_mfid2_mfid MFID Family ID
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_msr2 MSR2 Mailbox Status Register (MB = 2)
@{*/

/** CAN1_MSR2_MMI Mailbox Message Ignored **/
#define CAN1_MSR2_MMI		(1 << 24)
/** CAN1_MSR2_MRDY Mailbox Ready **/
#define CAN1_MSR2_MRDY		(1 << 23)
/** CAN1_MSR2_MABT Mailbox Message Abort **/
#define CAN1_MSR2_MABT		(1 << 22)
/** CAN1_MSR2_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MSR2_MRTR		(1 << 20)

#define CAN1_MSR2_MDLC_SHIFT		16
#define CAN1_MSR2_MDLC_MASK		0x0f
/** @defgroup can1_msr2_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


#define CAN1_MSR2_MTIMESTAMP_SHIFT		0
#define CAN1_MSR2_MTIMESTAMP_MASK		0xffff
/** @defgroup can1_msr2_mtimestamp MTIMESTAMP Timer value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdl2 MDL2 Mailbox Data Low Register (MB = 2)
@{*/


#define CAN1_MDL2_MDL_SHIFT		0
#define CAN1_MDL2_MDL_MASK		0xffffffff
/** @defgroup can1_mdl2_mdl MDL Message Data Low Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdh2 MDH2 Mailbox Data High Register (MB = 2)
@{*/


#define CAN1_MDH2_MDH_SHIFT		0
#define CAN1_MDH2_MDH_MASK		0xffffffff
/** @defgroup can1_mdh2_mdh MDH Message Data High Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mcr2 MCR2 Mailbox Control Register (MB = 2)
@{*/

/** CAN1_MCR2_MTCR Mailbox Transfer Command **/
#define CAN1_MCR2_MTCR		(1 << 23)
/** CAN1_MCR2_MACR Abort Request for Mailbox x **/
#define CAN1_MCR2_MACR		(1 << 22)
/** CAN1_MCR2_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MCR2_MRTR		(1 << 20)

#define CAN1_MCR2_MDLC_SHIFT		16
#define CAN1_MCR2_MDLC_MASK		0x0f
/** @defgroup can1_mcr2_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mmr3 MMR3 Mailbox Mode Register (MB = 3)
@{*/


#define CAN1_MMR3_MOT_SHIFT		24
#define CAN1_MMR3_MOT_MASK		0x07
/** @defgroup can1_mmr3_mot MOT Mailbox Object Type
@{*/
/**@}*/


#define CAN1_MMR3_PRIOR_SHIFT		16
#define CAN1_MMR3_PRIOR_MASK		0x0f
/** @defgroup can1_mmr3_prior PRIOR Mailbox Priority
@{*/
/**@}*/


#define CAN1_MMR3_MTIMEMARK_SHIFT		0
#define CAN1_MMR3_MTIMEMARK_MASK		0xffff
/** @defgroup can1_mmr3_mtimemark MTIMEMARK Mailbox Timemark
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mam3 MAM3 Mailbox Acceptance Mask Register (MB = 3)
@{*/

/** CAN1_MAM3_MIDE Identifier Version **/
#define CAN1_MAM3_MIDE		(1 << 29)

#define CAN1_MAM3_MIDvA_SHIFT		18
#define CAN1_MAM3_MIDvA_MASK		0x7ff
/** @defgroup can1_mam3_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MAM3_MIDvB_SHIFT		0
#define CAN1_MAM3_MIDvB_MASK		0x3ffff
/** @defgroup can1_mam3_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mid3 MID3 Mailbox ID Register (MB = 3)
@{*/

/** CAN1_MID3_MIDE Identifier Version **/
#define CAN1_MID3_MIDE		(1 << 29)

#define CAN1_MID3_MIDvA_SHIFT		18
#define CAN1_MID3_MIDvA_MASK		0x7ff
/** @defgroup can1_mid3_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MID3_MIDvB_SHIFT		0
#define CAN1_MID3_MIDvB_MASK		0x3ffff
/** @defgroup can1_mid3_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mfid3 MFID3 Mailbox Family ID Register (MB = 3)
@{*/


#define CAN1_MFID3_MFID_SHIFT		0
#define CAN1_MFID3_MFID_MASK		0x1fffffff
/** @defgroup can1_mfid3_mfid MFID Family ID
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_msr3 MSR3 Mailbox Status Register (MB = 3)
@{*/

/** CAN1_MSR3_MMI Mailbox Message Ignored **/
#define CAN1_MSR3_MMI		(1 << 24)
/** CAN1_MSR3_MRDY Mailbox Ready **/
#define CAN1_MSR3_MRDY		(1 << 23)
/** CAN1_MSR3_MABT Mailbox Message Abort **/
#define CAN1_MSR3_MABT		(1 << 22)
/** CAN1_MSR3_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MSR3_MRTR		(1 << 20)

#define CAN1_MSR3_MDLC_SHIFT		16
#define CAN1_MSR3_MDLC_MASK		0x0f
/** @defgroup can1_msr3_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


#define CAN1_MSR3_MTIMESTAMP_SHIFT		0
#define CAN1_MSR3_MTIMESTAMP_MASK		0xffff
/** @defgroup can1_msr3_mtimestamp MTIMESTAMP Timer value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdl3 MDL3 Mailbox Data Low Register (MB = 3)
@{*/


#define CAN1_MDL3_MDL_SHIFT		0
#define CAN1_MDL3_MDL_MASK		0xffffffff
/** @defgroup can1_mdl3_mdl MDL Message Data Low Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdh3 MDH3 Mailbox Data High Register (MB = 3)
@{*/


#define CAN1_MDH3_MDH_SHIFT		0
#define CAN1_MDH3_MDH_MASK		0xffffffff
/** @defgroup can1_mdh3_mdh MDH Message Data High Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mcr3 MCR3 Mailbox Control Register (MB = 3)
@{*/

/** CAN1_MCR3_MTCR Mailbox Transfer Command **/
#define CAN1_MCR3_MTCR		(1 << 23)
/** CAN1_MCR3_MACR Abort Request for Mailbox x **/
#define CAN1_MCR3_MACR		(1 << 22)
/** CAN1_MCR3_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MCR3_MRTR		(1 << 20)

#define CAN1_MCR3_MDLC_SHIFT		16
#define CAN1_MCR3_MDLC_MASK		0x0f
/** @defgroup can1_mcr3_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mmr4 MMR4 Mailbox Mode Register (MB = 4)
@{*/


#define CAN1_MMR4_MOT_SHIFT		24
#define CAN1_MMR4_MOT_MASK		0x07
/** @defgroup can1_mmr4_mot MOT Mailbox Object Type
@{*/
/**@}*/


#define CAN1_MMR4_PRIOR_SHIFT		16
#define CAN1_MMR4_PRIOR_MASK		0x0f
/** @defgroup can1_mmr4_prior PRIOR Mailbox Priority
@{*/
/**@}*/


#define CAN1_MMR4_MTIMEMARK_SHIFT		0
#define CAN1_MMR4_MTIMEMARK_MASK		0xffff
/** @defgroup can1_mmr4_mtimemark MTIMEMARK Mailbox Timemark
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mam4 MAM4 Mailbox Acceptance Mask Register (MB = 4)
@{*/

/** CAN1_MAM4_MIDE Identifier Version **/
#define CAN1_MAM4_MIDE		(1 << 29)

#define CAN1_MAM4_MIDvA_SHIFT		18
#define CAN1_MAM4_MIDvA_MASK		0x7ff
/** @defgroup can1_mam4_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MAM4_MIDvB_SHIFT		0
#define CAN1_MAM4_MIDvB_MASK		0x3ffff
/** @defgroup can1_mam4_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mid4 MID4 Mailbox ID Register (MB = 4)
@{*/

/** CAN1_MID4_MIDE Identifier Version **/
#define CAN1_MID4_MIDE		(1 << 29)

#define CAN1_MID4_MIDvA_SHIFT		18
#define CAN1_MID4_MIDvA_MASK		0x7ff
/** @defgroup can1_mid4_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MID4_MIDvB_SHIFT		0
#define CAN1_MID4_MIDvB_MASK		0x3ffff
/** @defgroup can1_mid4_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mfid4 MFID4 Mailbox Family ID Register (MB = 4)
@{*/


#define CAN1_MFID4_MFID_SHIFT		0
#define CAN1_MFID4_MFID_MASK		0x1fffffff
/** @defgroup can1_mfid4_mfid MFID Family ID
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_msr4 MSR4 Mailbox Status Register (MB = 4)
@{*/

/** CAN1_MSR4_MMI Mailbox Message Ignored **/
#define CAN1_MSR4_MMI		(1 << 24)
/** CAN1_MSR4_MRDY Mailbox Ready **/
#define CAN1_MSR4_MRDY		(1 << 23)
/** CAN1_MSR4_MABT Mailbox Message Abort **/
#define CAN1_MSR4_MABT		(1 << 22)
/** CAN1_MSR4_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MSR4_MRTR		(1 << 20)

#define CAN1_MSR4_MDLC_SHIFT		16
#define CAN1_MSR4_MDLC_MASK		0x0f
/** @defgroup can1_msr4_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


#define CAN1_MSR4_MTIMESTAMP_SHIFT		0
#define CAN1_MSR4_MTIMESTAMP_MASK		0xffff
/** @defgroup can1_msr4_mtimestamp MTIMESTAMP Timer value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdl4 MDL4 Mailbox Data Low Register (MB = 4)
@{*/


#define CAN1_MDL4_MDL_SHIFT		0
#define CAN1_MDL4_MDL_MASK		0xffffffff
/** @defgroup can1_mdl4_mdl MDL Message Data Low Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdh4 MDH4 Mailbox Data High Register (MB = 4)
@{*/


#define CAN1_MDH4_MDH_SHIFT		0
#define CAN1_MDH4_MDH_MASK		0xffffffff
/** @defgroup can1_mdh4_mdh MDH Message Data High Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mcr4 MCR4 Mailbox Control Register (MB = 4)
@{*/

/** CAN1_MCR4_MTCR Mailbox Transfer Command **/
#define CAN1_MCR4_MTCR		(1 << 23)
/** CAN1_MCR4_MACR Abort Request for Mailbox x **/
#define CAN1_MCR4_MACR		(1 << 22)
/** CAN1_MCR4_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MCR4_MRTR		(1 << 20)

#define CAN1_MCR4_MDLC_SHIFT		16
#define CAN1_MCR4_MDLC_MASK		0x0f
/** @defgroup can1_mcr4_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mmr5 MMR5 Mailbox Mode Register (MB = 5)
@{*/


#define CAN1_MMR5_MOT_SHIFT		24
#define CAN1_MMR5_MOT_MASK		0x07
/** @defgroup can1_mmr5_mot MOT Mailbox Object Type
@{*/
/**@}*/


#define CAN1_MMR5_PRIOR_SHIFT		16
#define CAN1_MMR5_PRIOR_MASK		0x0f
/** @defgroup can1_mmr5_prior PRIOR Mailbox Priority
@{*/
/**@}*/


#define CAN1_MMR5_MTIMEMARK_SHIFT		0
#define CAN1_MMR5_MTIMEMARK_MASK		0xffff
/** @defgroup can1_mmr5_mtimemark MTIMEMARK Mailbox Timemark
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mam5 MAM5 Mailbox Acceptance Mask Register (MB = 5)
@{*/

/** CAN1_MAM5_MIDE Identifier Version **/
#define CAN1_MAM5_MIDE		(1 << 29)

#define CAN1_MAM5_MIDvA_SHIFT		18
#define CAN1_MAM5_MIDvA_MASK		0x7ff
/** @defgroup can1_mam5_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MAM5_MIDvB_SHIFT		0
#define CAN1_MAM5_MIDvB_MASK		0x3ffff
/** @defgroup can1_mam5_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mid5 MID5 Mailbox ID Register (MB = 5)
@{*/

/** CAN1_MID5_MIDE Identifier Version **/
#define CAN1_MID5_MIDE		(1 << 29)

#define CAN1_MID5_MIDvA_SHIFT		18
#define CAN1_MID5_MIDvA_MASK		0x7ff
/** @defgroup can1_mid5_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MID5_MIDvB_SHIFT		0
#define CAN1_MID5_MIDvB_MASK		0x3ffff
/** @defgroup can1_mid5_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mfid5 MFID5 Mailbox Family ID Register (MB = 5)
@{*/


#define CAN1_MFID5_MFID_SHIFT		0
#define CAN1_MFID5_MFID_MASK		0x1fffffff
/** @defgroup can1_mfid5_mfid MFID Family ID
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_msr5 MSR5 Mailbox Status Register (MB = 5)
@{*/

/** CAN1_MSR5_MMI Mailbox Message Ignored **/
#define CAN1_MSR5_MMI		(1 << 24)
/** CAN1_MSR5_MRDY Mailbox Ready **/
#define CAN1_MSR5_MRDY		(1 << 23)
/** CAN1_MSR5_MABT Mailbox Message Abort **/
#define CAN1_MSR5_MABT		(1 << 22)
/** CAN1_MSR5_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MSR5_MRTR		(1 << 20)

#define CAN1_MSR5_MDLC_SHIFT		16
#define CAN1_MSR5_MDLC_MASK		0x0f
/** @defgroup can1_msr5_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


#define CAN1_MSR5_MTIMESTAMP_SHIFT		0
#define CAN1_MSR5_MTIMESTAMP_MASK		0xffff
/** @defgroup can1_msr5_mtimestamp MTIMESTAMP Timer value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdl5 MDL5 Mailbox Data Low Register (MB = 5)
@{*/


#define CAN1_MDL5_MDL_SHIFT		0
#define CAN1_MDL5_MDL_MASK		0xffffffff
/** @defgroup can1_mdl5_mdl MDL Message Data Low Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdh5 MDH5 Mailbox Data High Register (MB = 5)
@{*/


#define CAN1_MDH5_MDH_SHIFT		0
#define CAN1_MDH5_MDH_MASK		0xffffffff
/** @defgroup can1_mdh5_mdh MDH Message Data High Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mcr5 MCR5 Mailbox Control Register (MB = 5)
@{*/

/** CAN1_MCR5_MTCR Mailbox Transfer Command **/
#define CAN1_MCR5_MTCR		(1 << 23)
/** CAN1_MCR5_MACR Abort Request for Mailbox x **/
#define CAN1_MCR5_MACR		(1 << 22)
/** CAN1_MCR5_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MCR5_MRTR		(1 << 20)

#define CAN1_MCR5_MDLC_SHIFT		16
#define CAN1_MCR5_MDLC_MASK		0x0f
/** @defgroup can1_mcr5_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mmr6 MMR6 Mailbox Mode Register (MB = 6)
@{*/


#define CAN1_MMR6_MOT_SHIFT		24
#define CAN1_MMR6_MOT_MASK		0x07
/** @defgroup can1_mmr6_mot MOT Mailbox Object Type
@{*/
/**@}*/


#define CAN1_MMR6_PRIOR_SHIFT		16
#define CAN1_MMR6_PRIOR_MASK		0x0f
/** @defgroup can1_mmr6_prior PRIOR Mailbox Priority
@{*/
/**@}*/


#define CAN1_MMR6_MTIMEMARK_SHIFT		0
#define CAN1_MMR6_MTIMEMARK_MASK		0xffff
/** @defgroup can1_mmr6_mtimemark MTIMEMARK Mailbox Timemark
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mam6 MAM6 Mailbox Acceptance Mask Register (MB = 6)
@{*/

/** CAN1_MAM6_MIDE Identifier Version **/
#define CAN1_MAM6_MIDE		(1 << 29)

#define CAN1_MAM6_MIDvA_SHIFT		18
#define CAN1_MAM6_MIDvA_MASK		0x7ff
/** @defgroup can1_mam6_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MAM6_MIDvB_SHIFT		0
#define CAN1_MAM6_MIDvB_MASK		0x3ffff
/** @defgroup can1_mam6_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mid6 MID6 Mailbox ID Register (MB = 6)
@{*/

/** CAN1_MID6_MIDE Identifier Version **/
#define CAN1_MID6_MIDE		(1 << 29)

#define CAN1_MID6_MIDvA_SHIFT		18
#define CAN1_MID6_MIDvA_MASK		0x7ff
/** @defgroup can1_mid6_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MID6_MIDvB_SHIFT		0
#define CAN1_MID6_MIDvB_MASK		0x3ffff
/** @defgroup can1_mid6_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mfid6 MFID6 Mailbox Family ID Register (MB = 6)
@{*/


#define CAN1_MFID6_MFID_SHIFT		0
#define CAN1_MFID6_MFID_MASK		0x1fffffff
/** @defgroup can1_mfid6_mfid MFID Family ID
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_msr6 MSR6 Mailbox Status Register (MB = 6)
@{*/

/** CAN1_MSR6_MMI Mailbox Message Ignored **/
#define CAN1_MSR6_MMI		(1 << 24)
/** CAN1_MSR6_MRDY Mailbox Ready **/
#define CAN1_MSR6_MRDY		(1 << 23)
/** CAN1_MSR6_MABT Mailbox Message Abort **/
#define CAN1_MSR6_MABT		(1 << 22)
/** CAN1_MSR6_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MSR6_MRTR		(1 << 20)

#define CAN1_MSR6_MDLC_SHIFT		16
#define CAN1_MSR6_MDLC_MASK		0x0f
/** @defgroup can1_msr6_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


#define CAN1_MSR6_MTIMESTAMP_SHIFT		0
#define CAN1_MSR6_MTIMESTAMP_MASK		0xffff
/** @defgroup can1_msr6_mtimestamp MTIMESTAMP Timer value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdl6 MDL6 Mailbox Data Low Register (MB = 6)
@{*/


#define CAN1_MDL6_MDL_SHIFT		0
#define CAN1_MDL6_MDL_MASK		0xffffffff
/** @defgroup can1_mdl6_mdl MDL Message Data Low Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdh6 MDH6 Mailbox Data High Register (MB = 6)
@{*/


#define CAN1_MDH6_MDH_SHIFT		0
#define CAN1_MDH6_MDH_MASK		0xffffffff
/** @defgroup can1_mdh6_mdh MDH Message Data High Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mcr6 MCR6 Mailbox Control Register (MB = 6)
@{*/

/** CAN1_MCR6_MTCR Mailbox Transfer Command **/
#define CAN1_MCR6_MTCR		(1 << 23)
/** CAN1_MCR6_MACR Abort Request for Mailbox x **/
#define CAN1_MCR6_MACR		(1 << 22)
/** CAN1_MCR6_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MCR6_MRTR		(1 << 20)

#define CAN1_MCR6_MDLC_SHIFT		16
#define CAN1_MCR6_MDLC_MASK		0x0f
/** @defgroup can1_mcr6_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mmr7 MMR7 Mailbox Mode Register (MB = 7)
@{*/


#define CAN1_MMR7_MOT_SHIFT		24
#define CAN1_MMR7_MOT_MASK		0x07
/** @defgroup can1_mmr7_mot MOT Mailbox Object Type
@{*/
/**@}*/


#define CAN1_MMR7_PRIOR_SHIFT		16
#define CAN1_MMR7_PRIOR_MASK		0x0f
/** @defgroup can1_mmr7_prior PRIOR Mailbox Priority
@{*/
/**@}*/


#define CAN1_MMR7_MTIMEMARK_SHIFT		0
#define CAN1_MMR7_MTIMEMARK_MASK		0xffff
/** @defgroup can1_mmr7_mtimemark MTIMEMARK Mailbox Timemark
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mam7 MAM7 Mailbox Acceptance Mask Register (MB = 7)
@{*/

/** CAN1_MAM7_MIDE Identifier Version **/
#define CAN1_MAM7_MIDE		(1 << 29)

#define CAN1_MAM7_MIDvA_SHIFT		18
#define CAN1_MAM7_MIDvA_MASK		0x7ff
/** @defgroup can1_mam7_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MAM7_MIDvB_SHIFT		0
#define CAN1_MAM7_MIDvB_MASK		0x3ffff
/** @defgroup can1_mam7_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mid7 MID7 Mailbox ID Register (MB = 7)
@{*/

/** CAN1_MID7_MIDE Identifier Version **/
#define CAN1_MID7_MIDE		(1 << 29)

#define CAN1_MID7_MIDvA_SHIFT		18
#define CAN1_MID7_MIDvA_MASK		0x7ff
/** @defgroup can1_mid7_midva MIDvA Identifier for standard frame mode
@{*/
/**@}*/


#define CAN1_MID7_MIDvB_SHIFT		0
#define CAN1_MID7_MIDvB_MASK		0x3ffff
/** @defgroup can1_mid7_midvb MIDvB Complementary bits for identifier in extended frame mode
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mfid7 MFID7 Mailbox Family ID Register (MB = 7)
@{*/


#define CAN1_MFID7_MFID_SHIFT		0
#define CAN1_MFID7_MFID_MASK		0x1fffffff
/** @defgroup can1_mfid7_mfid MFID Family ID
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_msr7 MSR7 Mailbox Status Register (MB = 7)
@{*/

/** CAN1_MSR7_MMI Mailbox Message Ignored **/
#define CAN1_MSR7_MMI		(1 << 24)
/** CAN1_MSR7_MRDY Mailbox Ready **/
#define CAN1_MSR7_MRDY		(1 << 23)
/** CAN1_MSR7_MABT Mailbox Message Abort **/
#define CAN1_MSR7_MABT		(1 << 22)
/** CAN1_MSR7_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MSR7_MRTR		(1 << 20)

#define CAN1_MSR7_MDLC_SHIFT		16
#define CAN1_MSR7_MDLC_MASK		0x0f
/** @defgroup can1_msr7_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


#define CAN1_MSR7_MTIMESTAMP_SHIFT		0
#define CAN1_MSR7_MTIMESTAMP_MASK		0xffff
/** @defgroup can1_msr7_mtimestamp MTIMESTAMP Timer value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdl7 MDL7 Mailbox Data Low Register (MB = 7)
@{*/


#define CAN1_MDL7_MDL_SHIFT		0
#define CAN1_MDL7_MDL_MASK		0xffffffff
/** @defgroup can1_mdl7_mdl MDL Message Data Low Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mdh7 MDH7 Mailbox Data High Register (MB = 7)
@{*/


#define CAN1_MDH7_MDH_SHIFT		0
#define CAN1_MDH7_MDH_MASK		0xffffffff
/** @defgroup can1_mdh7_mdh MDH Message Data High Value
@{*/
/**@}*/


/**@}*/

/** @defgroup can1_mcr7 MCR7 Mailbox Control Register (MB = 7)
@{*/

/** CAN1_MCR7_MTCR Mailbox Transfer Command **/
#define CAN1_MCR7_MTCR		(1 << 23)
/** CAN1_MCR7_MACR Abort Request for Mailbox x **/
#define CAN1_MCR7_MACR		(1 << 22)
/** CAN1_MCR7_MRTR Mailbox Remote Transmission Request **/
#define CAN1_MCR7_MRTR		(1 << 20)

#define CAN1_MCR7_MDLC_SHIFT		16
#define CAN1_MCR7_MDLC_MASK		0x0f
/** @defgroup can1_mcr7_mdlc MDLC Mailbox Data Length Code
@{*/
/**@}*/


/**@}*/

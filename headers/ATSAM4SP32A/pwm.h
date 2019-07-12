#pragma once 

/* --- PWM: Pulse Width Modulation Controller ----------------------- */

/** @defgroup pwm_registers Pulse Width Modulation Controller Register
@{*/

/** PWM_CLK PWM Clock Register **/
#define PWM_CLK			MMIO32(PWM_BASE + 0x00)
/** PWM_ENA PWM Enable Register **/
#define PWM_ENA			MMIO32(PWM_BASE + 0x04)
/** PWM_DIS PWM Disable Register **/
#define PWM_DIS			MMIO32(PWM_BASE + 0x08)
/** PWM_SR PWM Status Register **/
#define PWM_SR			MMIO32(PWM_BASE + 0x0c)
/** PWM_IER1 PWM Interrupt Enable Register 1 **/
#define PWM_IER1			MMIO32(PWM_BASE + 0x10)
/** PWM_IDR1 PWM Interrupt Disable Register 1 **/
#define PWM_IDR1			MMIO32(PWM_BASE + 0x14)
/** PWM_IMR1 PWM Interrupt Mask Register 1 **/
#define PWM_IMR1			MMIO32(PWM_BASE + 0x18)
/** PWM_ISR1 PWM Interrupt Status Register 1 **/
#define PWM_ISR1			MMIO32(PWM_BASE + 0x1c)
/** PWM_SCM PWM Sync Channels Mode Register **/
#define PWM_SCM			MMIO32(PWM_BASE + 0x20)
/** PWM_SCUC PWM Sync Channels Update Control Register **/
#define PWM_SCUC			MMIO32(PWM_BASE + 0x28)
/** PWM_SCUP PWM Sync Channels Update Period Register **/
#define PWM_SCUP			MMIO32(PWM_BASE + 0x2c)
/** PWM_SCUPUPD PWM Sync Channels Update Period Update Register **/
#define PWM_SCUPUPD			MMIO32(PWM_BASE + 0x30)
/** PWM_IER2 PWM Interrupt Enable Register 2 **/
#define PWM_IER2			MMIO32(PWM_BASE + 0x34)
/** PWM_IDR2 PWM Interrupt Disable Register 2 **/
#define PWM_IDR2			MMIO32(PWM_BASE + 0x38)
/** PWM_IMR2 PWM Interrupt Mask Register 2 **/
#define PWM_IMR2			MMIO32(PWM_BASE + 0x3c)
/** PWM_ISR2 PWM Interrupt Status Register 2 **/
#define PWM_ISR2			MMIO32(PWM_BASE + 0x40)
/** PWM_OOV PWM Output Override Value Register **/
#define PWM_OOV			MMIO32(PWM_BASE + 0x44)
/** PWM_OS PWM Output Selection Register **/
#define PWM_OS			MMIO32(PWM_BASE + 0x48)
/** PWM_OSS PWM Output Selection Set Register **/
#define PWM_OSS			MMIO32(PWM_BASE + 0x4c)
/** PWM_OSC PWM Output Selection Clear Register **/
#define PWM_OSC			MMIO32(PWM_BASE + 0x50)
/** PWM_OSSUPD PWM Output Selection Set Update Register **/
#define PWM_OSSUPD			MMIO32(PWM_BASE + 0x54)
/** PWM_OSCUPD PWM Output Selection Clear Update Register **/
#define PWM_OSCUPD			MMIO32(PWM_BASE + 0x58)
/** PWM_FMR PWM Fault Mode Register **/
#define PWM_FMR			MMIO32(PWM_BASE + 0x5c)
/** PWM_FSR PWM Fault Status Register **/
#define PWM_FSR			MMIO32(PWM_BASE + 0x60)
/** PWM_FCR PWM Fault Clear Register **/
#define PWM_FCR			MMIO32(PWM_BASE + 0x64)
/** PWM_FPV PWM Fault Protection Value Register **/
#define PWM_FPV			MMIO32(PWM_BASE + 0x68)
/** PWM_FPE PWM Fault Protection Enable Register **/
#define PWM_FPE			MMIO32(PWM_BASE + 0x6c)
/** PWM_ELMR[0] PWM Event Line 0 Mode Register **/
#define PWM_ELMR[0]			MMIO32(PWM_BASE + 0x7c)
/** PWM_ELMR[1] PWM Event Line 0 Mode Register **/
#define PWM_ELMR[1]			MMIO32(PWM_BASE + 0x80)
/** PWM_SMMR PWM Stepper Motor Mode Register **/
#define PWM_SMMR			MMIO32(PWM_BASE + 0xb0)
/** PWM_WPCR PWM Write Protect Control Register **/
#define PWM_WPCR			MMIO32(PWM_BASE + 0xe4)
/** PWM_WPSR PWM Write Protect Status Register **/
#define PWM_WPSR			MMIO32(PWM_BASE + 0xe8)
/** PWM_TPR Transmit Pointer Register **/
#define PWM_TPR			MMIO32(PWM_BASE + 0x108)
/** PWM_TCR Transmit Counter Register **/
#define PWM_TCR			MMIO32(PWM_BASE + 0x10c)
/** PWM_TNPR Transmit Next Pointer Register **/
#define PWM_TNPR			MMIO32(PWM_BASE + 0x118)
/** PWM_TNCR Transmit Next Counter Register **/
#define PWM_TNCR			MMIO32(PWM_BASE + 0x11c)
/** PWM_PTCR Transfer Control Register **/
#define PWM_PTCR			MMIO32(PWM_BASE + 0x120)
/** PWM_PTSR Transfer Status Register **/
#define PWM_PTSR			MMIO32(PWM_BASE + 0x124)
/** PWM_CMPV0 PWM Comparison 0 Value Register **/
#define PWM_CMPV0			MMIO32(PWM_BASE + 0x130)
/** PWM_CMPVUPD0 PWM Comparison 0 Value Update Register **/
#define PWM_CMPVUPD0			MMIO32(PWM_BASE + 0x134)
/** PWM_CMPM0 PWM Comparison 0 Mode Register **/
#define PWM_CMPM0			MMIO32(PWM_BASE + 0x138)
/** PWM_CMPMUPD0 PWM Comparison 0 Mode Update Register **/
#define PWM_CMPMUPD0			MMIO32(PWM_BASE + 0x13c)
/** PWM_CMPV1 PWM Comparison 1 Value Register **/
#define PWM_CMPV1			MMIO32(PWM_BASE + 0x140)
/** PWM_CMPVUPD1 PWM Comparison 1 Value Update Register **/
#define PWM_CMPVUPD1			MMIO32(PWM_BASE + 0x144)
/** PWM_CMPM1 PWM Comparison 1 Mode Register **/
#define PWM_CMPM1			MMIO32(PWM_BASE + 0x148)
/** PWM_CMPMUPD1 PWM Comparison 1 Mode Update Register **/
#define PWM_CMPMUPD1			MMIO32(PWM_BASE + 0x14c)
/** PWM_CMPV2 PWM Comparison 2 Value Register **/
#define PWM_CMPV2			MMIO32(PWM_BASE + 0x150)
/** PWM_CMPVUPD2 PWM Comparison 2 Value Update Register **/
#define PWM_CMPVUPD2			MMIO32(PWM_BASE + 0x154)
/** PWM_CMPM2 PWM Comparison 2 Mode Register **/
#define PWM_CMPM2			MMIO32(PWM_BASE + 0x158)
/** PWM_CMPMUPD2 PWM Comparison 2 Mode Update Register **/
#define PWM_CMPMUPD2			MMIO32(PWM_BASE + 0x15c)
/** PWM_CMPV3 PWM Comparison 3 Value Register **/
#define PWM_CMPV3			MMIO32(PWM_BASE + 0x160)
/** PWM_CMPVUPD3 PWM Comparison 3 Value Update Register **/
#define PWM_CMPVUPD3			MMIO32(PWM_BASE + 0x164)
/** PWM_CMPM3 PWM Comparison 3 Mode Register **/
#define PWM_CMPM3			MMIO32(PWM_BASE + 0x168)
/** PWM_CMPMUPD3 PWM Comparison 3 Mode Update Register **/
#define PWM_CMPMUPD3			MMIO32(PWM_BASE + 0x16c)
/** PWM_CMPV4 PWM Comparison 4 Value Register **/
#define PWM_CMPV4			MMIO32(PWM_BASE + 0x170)
/** PWM_CMPVUPD4 PWM Comparison 4 Value Update Register **/
#define PWM_CMPVUPD4			MMIO32(PWM_BASE + 0x174)
/** PWM_CMPM4 PWM Comparison 4 Mode Register **/
#define PWM_CMPM4			MMIO32(PWM_BASE + 0x178)
/** PWM_CMPMUPD4 PWM Comparison 4 Mode Update Register **/
#define PWM_CMPMUPD4			MMIO32(PWM_BASE + 0x17c)
/** PWM_CMPV5 PWM Comparison 5 Value Register **/
#define PWM_CMPV5			MMIO32(PWM_BASE + 0x180)
/** PWM_CMPVUPD5 PWM Comparison 5 Value Update Register **/
#define PWM_CMPVUPD5			MMIO32(PWM_BASE + 0x184)
/** PWM_CMPM5 PWM Comparison 5 Mode Register **/
#define PWM_CMPM5			MMIO32(PWM_BASE + 0x188)
/** PWM_CMPMUPD5 PWM Comparison 5 Mode Update Register **/
#define PWM_CMPMUPD5			MMIO32(PWM_BASE + 0x18c)
/** PWM_CMPV6 PWM Comparison 6 Value Register **/
#define PWM_CMPV6			MMIO32(PWM_BASE + 0x190)
/** PWM_CMPVUPD6 PWM Comparison 6 Value Update Register **/
#define PWM_CMPVUPD6			MMIO32(PWM_BASE + 0x194)
/** PWM_CMPM6 PWM Comparison 6 Mode Register **/
#define PWM_CMPM6			MMIO32(PWM_BASE + 0x198)
/** PWM_CMPMUPD6 PWM Comparison 6 Mode Update Register **/
#define PWM_CMPMUPD6			MMIO32(PWM_BASE + 0x19c)
/** PWM_CMPV7 PWM Comparison 7 Value Register **/
#define PWM_CMPV7			MMIO32(PWM_BASE + 0x1a0)
/** PWM_CMPVUPD7 PWM Comparison 7 Value Update Register **/
#define PWM_CMPVUPD7			MMIO32(PWM_BASE + 0x1a4)
/** PWM_CMPM7 PWM Comparison 7 Mode Register **/
#define PWM_CMPM7			MMIO32(PWM_BASE + 0x1a8)
/** PWM_CMPMUPD7 PWM Comparison 7 Mode Update Register **/
#define PWM_CMPMUPD7			MMIO32(PWM_BASE + 0x1ac)
/** PWM_CMR0 PWM Channel Mode Register (ch_num = 0) **/
#define PWM_CMR0			MMIO32(PWM_BASE + 0x200)
/** PWM_CDTY0 PWM Channel Duty Cycle Register (ch_num = 0) **/
#define PWM_CDTY0			MMIO32(PWM_BASE + 0x204)
/** PWM_CDTYUPD0 PWM Channel Duty Cycle Update Register (ch_num = 0) **/
#define PWM_CDTYUPD0			MMIO32(PWM_BASE + 0x208)
/** PWM_CPRD0 PWM Channel Period Register (ch_num = 0) **/
#define PWM_CPRD0			MMIO32(PWM_BASE + 0x20c)
/** PWM_CPRDUPD0 PWM Channel Period Update Register (ch_num = 0) **/
#define PWM_CPRDUPD0			MMIO32(PWM_BASE + 0x210)
/** PWM_CCNT0 PWM Channel Counter Register (ch_num = 0) **/
#define PWM_CCNT0			MMIO32(PWM_BASE + 0x214)
/** PWM_DT0 PWM Channel Dead Time Register (ch_num = 0) **/
#define PWM_DT0			MMIO32(PWM_BASE + 0x218)
/** PWM_DTUPD0 PWM Channel Dead Time Update Register (ch_num = 0) **/
#define PWM_DTUPD0			MMIO32(PWM_BASE + 0x21c)
/** PWM_CMR1 PWM Channel Mode Register (ch_num = 1) **/
#define PWM_CMR1			MMIO32(PWM_BASE + 0x220)
/** PWM_CDTY1 PWM Channel Duty Cycle Register (ch_num = 1) **/
#define PWM_CDTY1			MMIO32(PWM_BASE + 0x224)
/** PWM_CDTYUPD1 PWM Channel Duty Cycle Update Register (ch_num = 1) **/
#define PWM_CDTYUPD1			MMIO32(PWM_BASE + 0x228)
/** PWM_CPRD1 PWM Channel Period Register (ch_num = 1) **/
#define PWM_CPRD1			MMIO32(PWM_BASE + 0x22c)
/** PWM_CPRDUPD1 PWM Channel Period Update Register (ch_num = 1) **/
#define PWM_CPRDUPD1			MMIO32(PWM_BASE + 0x230)
/** PWM_CCNT1 PWM Channel Counter Register (ch_num = 1) **/
#define PWM_CCNT1			MMIO32(PWM_BASE + 0x234)
/** PWM_DT1 PWM Channel Dead Time Register (ch_num = 1) **/
#define PWM_DT1			MMIO32(PWM_BASE + 0x238)
/** PWM_DTUPD1 PWM Channel Dead Time Update Register (ch_num = 1) **/
#define PWM_DTUPD1			MMIO32(PWM_BASE + 0x23c)
/** PWM_CMR2 PWM Channel Mode Register (ch_num = 2) **/
#define PWM_CMR2			MMIO32(PWM_BASE + 0x240)
/** PWM_CDTY2 PWM Channel Duty Cycle Register (ch_num = 2) **/
#define PWM_CDTY2			MMIO32(PWM_BASE + 0x244)
/** PWM_CDTYUPD2 PWM Channel Duty Cycle Update Register (ch_num = 2) **/
#define PWM_CDTYUPD2			MMIO32(PWM_BASE + 0x248)
/** PWM_CPRD2 PWM Channel Period Register (ch_num = 2) **/
#define PWM_CPRD2			MMIO32(PWM_BASE + 0x24c)
/** PWM_CPRDUPD2 PWM Channel Period Update Register (ch_num = 2) **/
#define PWM_CPRDUPD2			MMIO32(PWM_BASE + 0x250)
/** PWM_CCNT2 PWM Channel Counter Register (ch_num = 2) **/
#define PWM_CCNT2			MMIO32(PWM_BASE + 0x254)
/** PWM_DT2 PWM Channel Dead Time Register (ch_num = 2) **/
#define PWM_DT2			MMIO32(PWM_BASE + 0x258)
/** PWM_DTUPD2 PWM Channel Dead Time Update Register (ch_num = 2) **/
#define PWM_DTUPD2			MMIO32(PWM_BASE + 0x25c)
/** PWM_CMR3 PWM Channel Mode Register (ch_num = 3) **/
#define PWM_CMR3			MMIO32(PWM_BASE + 0x260)
/** PWM_CDTY3 PWM Channel Duty Cycle Register (ch_num = 3) **/
#define PWM_CDTY3			MMIO32(PWM_BASE + 0x264)
/** PWM_CDTYUPD3 PWM Channel Duty Cycle Update Register (ch_num = 3) **/
#define PWM_CDTYUPD3			MMIO32(PWM_BASE + 0x268)
/** PWM_CPRD3 PWM Channel Period Register (ch_num = 3) **/
#define PWM_CPRD3			MMIO32(PWM_BASE + 0x26c)
/** PWM_CPRDUPD3 PWM Channel Period Update Register (ch_num = 3) **/
#define PWM_CPRDUPD3			MMIO32(PWM_BASE + 0x270)
/** PWM_CCNT3 PWM Channel Counter Register (ch_num = 3) **/
#define PWM_CCNT3			MMIO32(PWM_BASE + 0x274)
/** PWM_DT3 PWM Channel Dead Time Register (ch_num = 3) **/
#define PWM_DT3			MMIO32(PWM_BASE + 0x278)
/** PWM_DTUPD3 PWM Channel Dead Time Update Register (ch_num = 3) **/
#define PWM_DTUPD3			MMIO32(PWM_BASE + 0x27c)

/**@}*/


/** @defgroup pwm_clk CLK PWM Clock Register
@{*/


#define PWM_CLK_PREB_SHIFT		24
#define PWM_CLK_PREB_MASK		0x0f
/** @defgroup pwm_clk_preb PREB CLKA, CLKB Source Clock Selection
@{*/
/**@}*/


#define PWM_CLK_DIVB_SHIFT		16
#define PWM_CLK_DIVB_MASK		0xff
/** @defgroup pwm_clk_divb DIVB CLKA, CLKB Divide Factor
@{*/
/**@}*/


#define PWM_CLK_PREA_SHIFT		8
#define PWM_CLK_PREA_MASK		0x0f
/** @defgroup pwm_clk_prea PREA CLKA, CLKB Source Clock Selection
@{*/
/**@}*/


#define PWM_CLK_DIVA_SHIFT		0
#define PWM_CLK_DIVA_MASK		0xff
/** @defgroup pwm_clk_diva DIVA CLKA, CLKB Divide Factor
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_ena ENA PWM Enable Register
@{*/

/** PWM_ENA_CHID3 Channel ID **/
#define PWM_ENA_CHID3		(1 << 3)
/** PWM_ENA_CHID2 Channel ID **/
#define PWM_ENA_CHID2		(1 << 2)
/** PWM_ENA_CHID1 Channel ID **/
#define PWM_ENA_CHID1		(1 << 1)
/** PWM_ENA_CHID0 Channel ID **/
#define PWM_ENA_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm_dis DIS PWM Disable Register
@{*/

/** PWM_DIS_CHID3 Channel ID **/
#define PWM_DIS_CHID3		(1 << 3)
/** PWM_DIS_CHID2 Channel ID **/
#define PWM_DIS_CHID2		(1 << 2)
/** PWM_DIS_CHID1 Channel ID **/
#define PWM_DIS_CHID1		(1 << 1)
/** PWM_DIS_CHID0 Channel ID **/
#define PWM_DIS_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm_sr SR PWM Status Register
@{*/

/** PWM_SR_CHID3 Channel ID **/
#define PWM_SR_CHID3		(1 << 3)
/** PWM_SR_CHID2 Channel ID **/
#define PWM_SR_CHID2		(1 << 2)
/** PWM_SR_CHID1 Channel ID **/
#define PWM_SR_CHID1		(1 << 1)
/** PWM_SR_CHID0 Channel ID **/
#define PWM_SR_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm_ier1 IER1 PWM Interrupt Enable Register 1
@{*/

/** PWM_IER1_FCHID3 Fault Protection Trigger on Channel 3 Interrupt Enable **/
#define PWM_IER1_FCHID3		(1 << 19)
/** PWM_IER1_FCHID2 Fault Protection Trigger on Channel 2 Interrupt Enable **/
#define PWM_IER1_FCHID2		(1 << 18)
/** PWM_IER1_FCHID1 Fault Protection Trigger on Channel 1 Interrupt Enable **/
#define PWM_IER1_FCHID1		(1 << 17)
/** PWM_IER1_FCHID0 Fault Protection Trigger on Channel 0 Interrupt Enable **/
#define PWM_IER1_FCHID0		(1 << 16)
/** PWM_IER1_CHID3 Counter Event on Channel 3 Interrupt Enable **/
#define PWM_IER1_CHID3		(1 << 3)
/** PWM_IER1_CHID2 Counter Event on Channel 2 Interrupt Enable **/
#define PWM_IER1_CHID2		(1 << 2)
/** PWM_IER1_CHID1 Counter Event on Channel 1 Interrupt Enable **/
#define PWM_IER1_CHID1		(1 << 1)
/** PWM_IER1_CHID0 Counter Event on Channel 0 Interrupt Enable **/
#define PWM_IER1_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm_idr1 IDR1 PWM Interrupt Disable Register 1
@{*/

/** PWM_IDR1_FCHID3 Fault Protection Trigger on Channel 3 Interrupt Disable **/
#define PWM_IDR1_FCHID3		(1 << 19)
/** PWM_IDR1_FCHID2 Fault Protection Trigger on Channel 2 Interrupt Disable **/
#define PWM_IDR1_FCHID2		(1 << 18)
/** PWM_IDR1_FCHID1 Fault Protection Trigger on Channel 1 Interrupt Disable **/
#define PWM_IDR1_FCHID1		(1 << 17)
/** PWM_IDR1_FCHID0 Fault Protection Trigger on Channel 0 Interrupt Disable **/
#define PWM_IDR1_FCHID0		(1 << 16)
/** PWM_IDR1_CHID3 Counter Event on Channel 3 Interrupt Disable **/
#define PWM_IDR1_CHID3		(1 << 3)
/** PWM_IDR1_CHID2 Counter Event on Channel 2 Interrupt Disable **/
#define PWM_IDR1_CHID2		(1 << 2)
/** PWM_IDR1_CHID1 Counter Event on Channel 1 Interrupt Disable **/
#define PWM_IDR1_CHID1		(1 << 1)
/** PWM_IDR1_CHID0 Counter Event on Channel 0 Interrupt Disable **/
#define PWM_IDR1_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm_imr1 IMR1 PWM Interrupt Mask Register 1
@{*/

/** PWM_IMR1_FCHID3 Fault Protection Trigger on Channel 3 Interrupt Mask **/
#define PWM_IMR1_FCHID3		(1 << 19)
/** PWM_IMR1_FCHID2 Fault Protection Trigger on Channel 2 Interrupt Mask **/
#define PWM_IMR1_FCHID2		(1 << 18)
/** PWM_IMR1_FCHID1 Fault Protection Trigger on Channel 1 Interrupt Mask **/
#define PWM_IMR1_FCHID1		(1 << 17)
/** PWM_IMR1_FCHID0 Fault Protection Trigger on Channel 0 Interrupt Mask **/
#define PWM_IMR1_FCHID0		(1 << 16)
/** PWM_IMR1_CHID3 Counter Event on Channel 3 Interrupt Mask **/
#define PWM_IMR1_CHID3		(1 << 3)
/** PWM_IMR1_CHID2 Counter Event on Channel 2 Interrupt Mask **/
#define PWM_IMR1_CHID2		(1 << 2)
/** PWM_IMR1_CHID1 Counter Event on Channel 1 Interrupt Mask **/
#define PWM_IMR1_CHID1		(1 << 1)
/** PWM_IMR1_CHID0 Counter Event on Channel 0 Interrupt Mask **/
#define PWM_IMR1_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm_isr1 ISR1 PWM Interrupt Status Register 1
@{*/

/** PWM_ISR1_FCHID3 Fault Protection Trigger on Channel 3 **/
#define PWM_ISR1_FCHID3		(1 << 19)
/** PWM_ISR1_FCHID2 Fault Protection Trigger on Channel 2 **/
#define PWM_ISR1_FCHID2		(1 << 18)
/** PWM_ISR1_FCHID1 Fault Protection Trigger on Channel 1 **/
#define PWM_ISR1_FCHID1		(1 << 17)
/** PWM_ISR1_FCHID0 Fault Protection Trigger on Channel 0 **/
#define PWM_ISR1_FCHID0		(1 << 16)
/** PWM_ISR1_CHID3 Counter Event on Channel 3 **/
#define PWM_ISR1_CHID3		(1 << 3)
/** PWM_ISR1_CHID2 Counter Event on Channel 2 **/
#define PWM_ISR1_CHID2		(1 << 2)
/** PWM_ISR1_CHID1 Counter Event on Channel 1 **/
#define PWM_ISR1_CHID1		(1 << 1)
/** PWM_ISR1_CHID0 Counter Event on Channel 0 **/
#define PWM_ISR1_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm_scm SCM PWM Sync Channels Mode Register
@{*/


#define PWM_SCM_PTRCS_SHIFT		21
#define PWM_SCM_PTRCS_MASK		0x07
/** @defgroup pwm_scm_ptrcs PTRCS PDC Transfer Request Comparison Selection
@{*/
/**@}*/

/** PWM_SCM_PTRM PDC Transfer Request Mode **/
#define PWM_SCM_PTRM		(1 << 20)

#define PWM_SCM_UPDM_SHIFT		16
#define PWM_SCM_UPDM_MASK		0x03
/** @defgroup pwm_scm_updm UPDM Synchronous Channels Update Mode
@{*/
/**@}*/

/** PWM_SCM_SYNC3 Synchronous Channel 3 **/
#define PWM_SCM_SYNC3		(1 << 3)
/** PWM_SCM_SYNC2 Synchronous Channel 2 **/
#define PWM_SCM_SYNC2		(1 << 2)
/** PWM_SCM_SYNC1 Synchronous Channel 1 **/
#define PWM_SCM_SYNC1		(1 << 1)
/** PWM_SCM_SYNC0 Synchronous Channel 0 **/
#define PWM_SCM_SYNC0		(1 << 0)

/**@}*/

/** @defgroup pwm_scuc SCUC PWM Sync Channels Update Control Register
@{*/

/** PWM_SCUC_UPDULOCK Synchronous Channels Update Unlock **/
#define PWM_SCUC_UPDULOCK		(1 << 0)

/**@}*/

/** @defgroup pwm_scup SCUP PWM Sync Channels Update Period Register
@{*/


#define PWM_SCUP_UPRCNT_SHIFT		4
#define PWM_SCUP_UPRCNT_MASK		0x0f
/** @defgroup pwm_scup_uprcnt UPRCNT Update Period Counter
@{*/
/**@}*/


#define PWM_SCUP_UPR_SHIFT		0
#define PWM_SCUP_UPR_MASK		0x0f
/** @defgroup pwm_scup_upr UPR Update Period
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_scupupd SCUPUPD PWM Sync Channels Update Period Update Register
@{*/


#define PWM_SCUPUPD_UPRUPD_SHIFT		0
#define PWM_SCUPUPD_UPRUPD_MASK		0x0f
/** @defgroup pwm_scupupd_uprupd UPRUPD Update Period Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_ier2 IER2 PWM Interrupt Enable Register 2
@{*/

/** PWM_IER2_CMPU7 Comparison 7 Update Interrupt Enable **/
#define PWM_IER2_CMPU7		(1 << 23)
/** PWM_IER2_CMPU6 Comparison 6 Update Interrupt Enable **/
#define PWM_IER2_CMPU6		(1 << 22)
/** PWM_IER2_CMPU5 Comparison 5 Update Interrupt Enable **/
#define PWM_IER2_CMPU5		(1 << 21)
/** PWM_IER2_CMPU4 Comparison 4 Update Interrupt Enable **/
#define PWM_IER2_CMPU4		(1 << 20)
/** PWM_IER2_CMPU3 Comparison 3 Update Interrupt Enable **/
#define PWM_IER2_CMPU3		(1 << 19)
/** PWM_IER2_CMPU2 Comparison 2 Update Interrupt Enable **/
#define PWM_IER2_CMPU2		(1 << 18)
/** PWM_IER2_CMPU1 Comparison 1 Update Interrupt Enable **/
#define PWM_IER2_CMPU1		(1 << 17)
/** PWM_IER2_CMPU0 Comparison 0 Update Interrupt Enable **/
#define PWM_IER2_CMPU0		(1 << 16)
/** PWM_IER2_CMPM7 Comparison 7 Match Interrupt Enable **/
#define PWM_IER2_CMPM7		(1 << 15)
/** PWM_IER2_CMPM6 Comparison 6 Match Interrupt Enable **/
#define PWM_IER2_CMPM6		(1 << 14)
/** PWM_IER2_CMPM5 Comparison 5 Match Interrupt Enable **/
#define PWM_IER2_CMPM5		(1 << 13)
/** PWM_IER2_CMPM4 Comparison 4 Match Interrupt Enable **/
#define PWM_IER2_CMPM4		(1 << 12)
/** PWM_IER2_CMPM3 Comparison 3 Match Interrupt Enable **/
#define PWM_IER2_CMPM3		(1 << 11)
/** PWM_IER2_CMPM2 Comparison 2 Match Interrupt Enable **/
#define PWM_IER2_CMPM2		(1 << 10)
/** PWM_IER2_CMPM1 Comparison 1 Match Interrupt Enable **/
#define PWM_IER2_CMPM1		(1 << 9)
/** PWM_IER2_CMPM0 Comparison 0 Match Interrupt Enable **/
#define PWM_IER2_CMPM0		(1 << 8)
/** PWM_IER2_UNRE Synchronous Channels Update Underrun Error Interrupt Enable **/
#define PWM_IER2_UNRE		(1 << 3)
/** PWM_IER2_TXBUFE PDC TX Buffer Empty Interrupt Enable **/
#define PWM_IER2_TXBUFE		(1 << 2)
/** PWM_IER2_ENDTX PDC End of TX Buffer Interrupt Enable **/
#define PWM_IER2_ENDTX		(1 << 1)
/** PWM_IER2_WRDY Write Ready for Synchronous Channels Update Interrupt Enable **/
#define PWM_IER2_WRDY		(1 << 0)

/**@}*/

/** @defgroup pwm_idr2 IDR2 PWM Interrupt Disable Register 2
@{*/

/** PWM_IDR2_CMPU7 Comparison 7 Update Interrupt Disable **/
#define PWM_IDR2_CMPU7		(1 << 23)
/** PWM_IDR2_CMPU6 Comparison 6 Update Interrupt Disable **/
#define PWM_IDR2_CMPU6		(1 << 22)
/** PWM_IDR2_CMPU5 Comparison 5 Update Interrupt Disable **/
#define PWM_IDR2_CMPU5		(1 << 21)
/** PWM_IDR2_CMPU4 Comparison 4 Update Interrupt Disable **/
#define PWM_IDR2_CMPU4		(1 << 20)
/** PWM_IDR2_CMPU3 Comparison 3 Update Interrupt Disable **/
#define PWM_IDR2_CMPU3		(1 << 19)
/** PWM_IDR2_CMPU2 Comparison 2 Update Interrupt Disable **/
#define PWM_IDR2_CMPU2		(1 << 18)
/** PWM_IDR2_CMPU1 Comparison 1 Update Interrupt Disable **/
#define PWM_IDR2_CMPU1		(1 << 17)
/** PWM_IDR2_CMPU0 Comparison 0 Update Interrupt Disable **/
#define PWM_IDR2_CMPU0		(1 << 16)
/** PWM_IDR2_CMPM7 Comparison 7 Match Interrupt Disable **/
#define PWM_IDR2_CMPM7		(1 << 15)
/** PWM_IDR2_CMPM6 Comparison 6 Match Interrupt Disable **/
#define PWM_IDR2_CMPM6		(1 << 14)
/** PWM_IDR2_CMPM5 Comparison 5 Match Interrupt Disable **/
#define PWM_IDR2_CMPM5		(1 << 13)
/** PWM_IDR2_CMPM4 Comparison 4 Match Interrupt Disable **/
#define PWM_IDR2_CMPM4		(1 << 12)
/** PWM_IDR2_CMPM3 Comparison 3 Match Interrupt Disable **/
#define PWM_IDR2_CMPM3		(1 << 11)
/** PWM_IDR2_CMPM2 Comparison 2 Match Interrupt Disable **/
#define PWM_IDR2_CMPM2		(1 << 10)
/** PWM_IDR2_CMPM1 Comparison 1 Match Interrupt Disable **/
#define PWM_IDR2_CMPM1		(1 << 9)
/** PWM_IDR2_CMPM0 Comparison 0 Match Interrupt Disable **/
#define PWM_IDR2_CMPM0		(1 << 8)
/** PWM_IDR2_UNRE Synchronous Channels Update Underrun Error Interrupt Disable **/
#define PWM_IDR2_UNRE		(1 << 3)
/** PWM_IDR2_TXBUFE PDC TX Buffer Empty Interrupt Disable **/
#define PWM_IDR2_TXBUFE		(1 << 2)
/** PWM_IDR2_ENDTX PDC End of TX Buffer Interrupt Disable **/
#define PWM_IDR2_ENDTX		(1 << 1)
/** PWM_IDR2_WRDY Write Ready for Synchronous Channels Update Interrupt Disable **/
#define PWM_IDR2_WRDY		(1 << 0)

/**@}*/

/** @defgroup pwm_imr2 IMR2 PWM Interrupt Mask Register 2
@{*/

/** PWM_IMR2_CMPU7 Comparison 7 Update Interrupt Mask **/
#define PWM_IMR2_CMPU7		(1 << 23)
/** PWM_IMR2_CMPU6 Comparison 6 Update Interrupt Mask **/
#define PWM_IMR2_CMPU6		(1 << 22)
/** PWM_IMR2_CMPU5 Comparison 5 Update Interrupt Mask **/
#define PWM_IMR2_CMPU5		(1 << 21)
/** PWM_IMR2_CMPU4 Comparison 4 Update Interrupt Mask **/
#define PWM_IMR2_CMPU4		(1 << 20)
/** PWM_IMR2_CMPU3 Comparison 3 Update Interrupt Mask **/
#define PWM_IMR2_CMPU3		(1 << 19)
/** PWM_IMR2_CMPU2 Comparison 2 Update Interrupt Mask **/
#define PWM_IMR2_CMPU2		(1 << 18)
/** PWM_IMR2_CMPU1 Comparison 1 Update Interrupt Mask **/
#define PWM_IMR2_CMPU1		(1 << 17)
/** PWM_IMR2_CMPU0 Comparison 0 Update Interrupt Mask **/
#define PWM_IMR2_CMPU0		(1 << 16)
/** PWM_IMR2_CMPM7 Comparison 7 Match Interrupt Mask **/
#define PWM_IMR2_CMPM7		(1 << 15)
/** PWM_IMR2_CMPM6 Comparison 6 Match Interrupt Mask **/
#define PWM_IMR2_CMPM6		(1 << 14)
/** PWM_IMR2_CMPM5 Comparison 5 Match Interrupt Mask **/
#define PWM_IMR2_CMPM5		(1 << 13)
/** PWM_IMR2_CMPM4 Comparison 4 Match Interrupt Mask **/
#define PWM_IMR2_CMPM4		(1 << 12)
/** PWM_IMR2_CMPM3 Comparison 3 Match Interrupt Mask **/
#define PWM_IMR2_CMPM3		(1 << 11)
/** PWM_IMR2_CMPM2 Comparison 2 Match Interrupt Mask **/
#define PWM_IMR2_CMPM2		(1 << 10)
/** PWM_IMR2_CMPM1 Comparison 1 Match Interrupt Mask **/
#define PWM_IMR2_CMPM1		(1 << 9)
/** PWM_IMR2_CMPM0 Comparison 0 Match Interrupt Mask **/
#define PWM_IMR2_CMPM0		(1 << 8)
/** PWM_IMR2_UNRE Synchronous Channels Update Underrun Error Interrupt Mask **/
#define PWM_IMR2_UNRE		(1 << 3)
/** PWM_IMR2_TXBUFE PDC TX Buffer Empty Interrupt Mask **/
#define PWM_IMR2_TXBUFE		(1 << 2)
/** PWM_IMR2_ENDTX PDC End of TX Buffer Interrupt Mask **/
#define PWM_IMR2_ENDTX		(1 << 1)
/** PWM_IMR2_WRDY Write Ready for Synchronous Channels Update Interrupt Mask **/
#define PWM_IMR2_WRDY		(1 << 0)

/**@}*/

/** @defgroup pwm_isr2 ISR2 PWM Interrupt Status Register 2
@{*/

/** PWM_ISR2_CMPU7 Comparison 7 Update **/
#define PWM_ISR2_CMPU7		(1 << 23)
/** PWM_ISR2_CMPU6 Comparison 6 Update **/
#define PWM_ISR2_CMPU6		(1 << 22)
/** PWM_ISR2_CMPU5 Comparison 5 Update **/
#define PWM_ISR2_CMPU5		(1 << 21)
/** PWM_ISR2_CMPU4 Comparison 4 Update **/
#define PWM_ISR2_CMPU4		(1 << 20)
/** PWM_ISR2_CMPU3 Comparison 3 Update **/
#define PWM_ISR2_CMPU3		(1 << 19)
/** PWM_ISR2_CMPU2 Comparison 2 Update **/
#define PWM_ISR2_CMPU2		(1 << 18)
/** PWM_ISR2_CMPU1 Comparison 1 Update **/
#define PWM_ISR2_CMPU1		(1 << 17)
/** PWM_ISR2_CMPU0 Comparison 0 Update **/
#define PWM_ISR2_CMPU0		(1 << 16)
/** PWM_ISR2_CMPM7 Comparison 7 Match **/
#define PWM_ISR2_CMPM7		(1 << 15)
/** PWM_ISR2_CMPM6 Comparison 6 Match **/
#define PWM_ISR2_CMPM6		(1 << 14)
/** PWM_ISR2_CMPM5 Comparison 5 Match **/
#define PWM_ISR2_CMPM5		(1 << 13)
/** PWM_ISR2_CMPM4 Comparison 4 Match **/
#define PWM_ISR2_CMPM4		(1 << 12)
/** PWM_ISR2_CMPM3 Comparison 3 Match **/
#define PWM_ISR2_CMPM3		(1 << 11)
/** PWM_ISR2_CMPM2 Comparison 2 Match **/
#define PWM_ISR2_CMPM2		(1 << 10)
/** PWM_ISR2_CMPM1 Comparison 1 Match **/
#define PWM_ISR2_CMPM1		(1 << 9)
/** PWM_ISR2_CMPM0 Comparison 0 Match **/
#define PWM_ISR2_CMPM0		(1 << 8)
/** PWM_ISR2_UNRE Synchronous Channels Update Underrun Error **/
#define PWM_ISR2_UNRE		(1 << 3)
/** PWM_ISR2_TXBUFE PDC TX Buffer Empty **/
#define PWM_ISR2_TXBUFE		(1 << 2)
/** PWM_ISR2_ENDTX PDC End of TX Buffer **/
#define PWM_ISR2_ENDTX		(1 << 1)
/** PWM_ISR2_WRDY Write Ready for Synchronous Channels Update **/
#define PWM_ISR2_WRDY		(1 << 0)

/**@}*/

/** @defgroup pwm_oov OOV PWM Output Override Value Register
@{*/

/** PWM_OOV_OOVL3 Output Override Value for PWML output of the channel 3 **/
#define PWM_OOV_OOVL3		(1 << 19)
/** PWM_OOV_OOVL2 Output Override Value for PWML output of the channel 2 **/
#define PWM_OOV_OOVL2		(1 << 18)
/** PWM_OOV_OOVL1 Output Override Value for PWML output of the channel 1 **/
#define PWM_OOV_OOVL1		(1 << 17)
/** PWM_OOV_OOVL0 Output Override Value for PWML output of the channel 0 **/
#define PWM_OOV_OOVL0		(1 << 16)
/** PWM_OOV_OOVH3 Output Override Value for PWMH output of the channel 3 **/
#define PWM_OOV_OOVH3		(1 << 3)
/** PWM_OOV_OOVH2 Output Override Value for PWMH output of the channel 2 **/
#define PWM_OOV_OOVH2		(1 << 2)
/** PWM_OOV_OOVH1 Output Override Value for PWMH output of the channel 1 **/
#define PWM_OOV_OOVH1		(1 << 1)
/** PWM_OOV_OOVH0 Output Override Value for PWMH output of the channel 0 **/
#define PWM_OOV_OOVH0		(1 << 0)

/**@}*/

/** @defgroup pwm_os OS PWM Output Selection Register
@{*/

/** PWM_OS_OSL3 Output Selection for PWML output of the channel 3 **/
#define PWM_OS_OSL3		(1 << 19)
/** PWM_OS_OSL2 Output Selection for PWML output of the channel 2 **/
#define PWM_OS_OSL2		(1 << 18)
/** PWM_OS_OSL1 Output Selection for PWML output of the channel 1 **/
#define PWM_OS_OSL1		(1 << 17)
/** PWM_OS_OSL0 Output Selection for PWML output of the channel 0 **/
#define PWM_OS_OSL0		(1 << 16)
/** PWM_OS_OSH3 Output Selection for PWMH output of the channel 3 **/
#define PWM_OS_OSH3		(1 << 3)
/** PWM_OS_OSH2 Output Selection for PWMH output of the channel 2 **/
#define PWM_OS_OSH2		(1 << 2)
/** PWM_OS_OSH1 Output Selection for PWMH output of the channel 1 **/
#define PWM_OS_OSH1		(1 << 1)
/** PWM_OS_OSH0 Output Selection for PWMH output of the channel 0 **/
#define PWM_OS_OSH0		(1 << 0)

/**@}*/

/** @defgroup pwm_oss OSS PWM Output Selection Set Register
@{*/

/** PWM_OSS_OSSL3 Output Selection Set for PWML output of the channel 3 **/
#define PWM_OSS_OSSL3		(1 << 19)
/** PWM_OSS_OSSL2 Output Selection Set for PWML output of the channel 2 **/
#define PWM_OSS_OSSL2		(1 << 18)
/** PWM_OSS_OSSL1 Output Selection Set for PWML output of the channel 1 **/
#define PWM_OSS_OSSL1		(1 << 17)
/** PWM_OSS_OSSL0 Output Selection Set for PWML output of the channel 0 **/
#define PWM_OSS_OSSL0		(1 << 16)
/** PWM_OSS_OSSH3 Output Selection Set for PWMH output of the channel 3 **/
#define PWM_OSS_OSSH3		(1 << 3)
/** PWM_OSS_OSSH2 Output Selection Set for PWMH output of the channel 2 **/
#define PWM_OSS_OSSH2		(1 << 2)
/** PWM_OSS_OSSH1 Output Selection Set for PWMH output of the channel 1 **/
#define PWM_OSS_OSSH1		(1 << 1)
/** PWM_OSS_OSSH0 Output Selection Set for PWMH output of the channel 0 **/
#define PWM_OSS_OSSH0		(1 << 0)

/**@}*/

/** @defgroup pwm_osc OSC PWM Output Selection Clear Register
@{*/

/** PWM_OSC_OSCL3 Output Selection Clear for PWML output of the channel 3 **/
#define PWM_OSC_OSCL3		(1 << 19)
/** PWM_OSC_OSCL2 Output Selection Clear for PWML output of the channel 2 **/
#define PWM_OSC_OSCL2		(1 << 18)
/** PWM_OSC_OSCL1 Output Selection Clear for PWML output of the channel 1 **/
#define PWM_OSC_OSCL1		(1 << 17)
/** PWM_OSC_OSCL0 Output Selection Clear for PWML output of the channel 0 **/
#define PWM_OSC_OSCL0		(1 << 16)
/** PWM_OSC_OSCH3 Output Selection Clear for PWMH output of the channel 3 **/
#define PWM_OSC_OSCH3		(1 << 3)
/** PWM_OSC_OSCH2 Output Selection Clear for PWMH output of the channel 2 **/
#define PWM_OSC_OSCH2		(1 << 2)
/** PWM_OSC_OSCH1 Output Selection Clear for PWMH output of the channel 1 **/
#define PWM_OSC_OSCH1		(1 << 1)
/** PWM_OSC_OSCH0 Output Selection Clear for PWMH output of the channel 0 **/
#define PWM_OSC_OSCH0		(1 << 0)

/**@}*/

/** @defgroup pwm_ossupd OSSUPD PWM Output Selection Set Update Register
@{*/

/** PWM_OSSUPD_OSSUPL3 Output Selection Set for PWML output of the channel 3 **/
#define PWM_OSSUPD_OSSUPL3		(1 << 19)
/** PWM_OSSUPD_OSSUPL2 Output Selection Set for PWML output of the channel 2 **/
#define PWM_OSSUPD_OSSUPL2		(1 << 18)
/** PWM_OSSUPD_OSSUPL1 Output Selection Set for PWML output of the channel 1 **/
#define PWM_OSSUPD_OSSUPL1		(1 << 17)
/** PWM_OSSUPD_OSSUPL0 Output Selection Set for PWML output of the channel 0 **/
#define PWM_OSSUPD_OSSUPL0		(1 << 16)
/** PWM_OSSUPD_OSSUPH3 Output Selection Set for PWMH output of the channel 3 **/
#define PWM_OSSUPD_OSSUPH3		(1 << 3)
/** PWM_OSSUPD_OSSUPH2 Output Selection Set for PWMH output of the channel 2 **/
#define PWM_OSSUPD_OSSUPH2		(1 << 2)
/** PWM_OSSUPD_OSSUPH1 Output Selection Set for PWMH output of the channel 1 **/
#define PWM_OSSUPD_OSSUPH1		(1 << 1)
/** PWM_OSSUPD_OSSUPH0 Output Selection Set for PWMH output of the channel 0 **/
#define PWM_OSSUPD_OSSUPH0		(1 << 0)

/**@}*/

/** @defgroup pwm_oscupd OSCUPD PWM Output Selection Clear Update Register
@{*/

/** PWM_OSCUPD_OSCUPL3 Output Selection Clear for PWML output of the channel 3 **/
#define PWM_OSCUPD_OSCUPL3		(1 << 19)
/** PWM_OSCUPD_OSCUPL2 Output Selection Clear for PWML output of the channel 2 **/
#define PWM_OSCUPD_OSCUPL2		(1 << 18)
/** PWM_OSCUPD_OSCUPL1 Output Selection Clear for PWML output of the channel 1 **/
#define PWM_OSCUPD_OSCUPL1		(1 << 17)
/** PWM_OSCUPD_OSCUPL0 Output Selection Clear for PWML output of the channel 0 **/
#define PWM_OSCUPD_OSCUPL0		(1 << 16)
/** PWM_OSCUPD_OSCUPH3 Output Selection Clear for PWMH output of the channel 3 **/
#define PWM_OSCUPD_OSCUPH3		(1 << 3)
/** PWM_OSCUPD_OSCUPH2 Output Selection Clear for PWMH output of the channel 2 **/
#define PWM_OSCUPD_OSCUPH2		(1 << 2)
/** PWM_OSCUPD_OSCUPH1 Output Selection Clear for PWMH output of the channel 1 **/
#define PWM_OSCUPD_OSCUPH1		(1 << 1)
/** PWM_OSCUPD_OSCUPH0 Output Selection Clear for PWMH output of the channel 0 **/
#define PWM_OSCUPD_OSCUPH0		(1 << 0)

/**@}*/

/** @defgroup pwm_fmr FMR PWM Fault Mode Register
@{*/


#define PWM_FMR_FFIL_SHIFT		16
#define PWM_FMR_FFIL_MASK		0xff
/** @defgroup pwm_fmr_ffil FFIL Fault Filtering (fault input bit varies from 0 to 5)
@{*/
/**@}*/


#define PWM_FMR_FMOD_SHIFT		8
#define PWM_FMR_FMOD_MASK		0xff
/** @defgroup pwm_fmr_fmod FMOD Fault Activation Mode (fault input bit varies from 0 to 5)
@{*/
/**@}*/


#define PWM_FMR_FPOL_SHIFT		0
#define PWM_FMR_FPOL_MASK		0xff
/** @defgroup pwm_fmr_fpol FPOL Fault Polarity (fault input bit varies from 0 to 5)
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_fsr FSR PWM Fault Status Register
@{*/


#define PWM_FSR_FS_SHIFT		8
#define PWM_FSR_FS_MASK		0xff
/** @defgroup pwm_fsr_fs FS Fault Status (fault input bit varies from 0 to 5)
@{*/
/**@}*/


#define PWM_FSR_FIV_SHIFT		0
#define PWM_FSR_FIV_MASK		0xff
/** @defgroup pwm_fsr_fiv FIV Fault Input Value (fault input bit varies from 0 to 5)
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_fcr FCR PWM Fault Clear Register
@{*/


#define PWM_FCR_FCLR_SHIFT		0
#define PWM_FCR_FCLR_MASK		0xff
/** @defgroup pwm_fcr_fclr FCLR Fault Clear (fault input bit varies from 0 to 5)
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_fpv FPV PWM Fault Protection Value Register
@{*/

/** PWM_FPV_FPVL3 Fault Protection Value for PWML output on channel 3 **/
#define PWM_FPV_FPVL3		(1 << 19)
/** PWM_FPV_FPVL2 Fault Protection Value for PWML output on channel 2 **/
#define PWM_FPV_FPVL2		(1 << 18)
/** PWM_FPV_FPVL1 Fault Protection Value for PWML output on channel 1 **/
#define PWM_FPV_FPVL1		(1 << 17)
/** PWM_FPV_FPVL0 Fault Protection Value for PWML output on channel 0 **/
#define PWM_FPV_FPVL0		(1 << 16)
/** PWM_FPV_FPVH3 Fault Protection Value for PWMH output on channel 3 **/
#define PWM_FPV_FPVH3		(1 << 3)
/** PWM_FPV_FPVH2 Fault Protection Value for PWMH output on channel 2 **/
#define PWM_FPV_FPVH2		(1 << 2)
/** PWM_FPV_FPVH1 Fault Protection Value for PWMH output on channel 1 **/
#define PWM_FPV_FPVH1		(1 << 1)
/** PWM_FPV_FPVH0 Fault Protection Value for PWMH output on channel 0 **/
#define PWM_FPV_FPVH0		(1 << 0)

/**@}*/

/** @defgroup pwm_fpe FPE PWM Fault Protection Enable Register
@{*/


#define PWM_FPE_FPE3_SHIFT		24
#define PWM_FPE_FPE3_MASK		0xff
/** @defgroup pwm_fpe_fpe3 FPE3 Fault Protection Enable for channel 3 (fault input bit varies from 0 to 5)
@{*/
/**@}*/


#define PWM_FPE_FPE2_SHIFT		16
#define PWM_FPE_FPE2_MASK		0xff
/** @defgroup pwm_fpe_fpe2 FPE2 Fault Protection Enable for channel 2 (fault input bit varies from 0 to 5)
@{*/
/**@}*/


#define PWM_FPE_FPE1_SHIFT		8
#define PWM_FPE_FPE1_MASK		0xff
/** @defgroup pwm_fpe_fpe1 FPE1 Fault Protection Enable for channel 1 (fault input bit varies from 0 to 5)
@{*/
/**@}*/


#define PWM_FPE_FPE0_SHIFT		0
#define PWM_FPE_FPE0_MASK		0xff
/** @defgroup pwm_fpe_fpe0 FPE0 Fault Protection Enable for channel 0 (fault input bit varies from 0 to 5)
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_elmr[0] ELMR[0] PWM Event Line 0 Mode Register
@{*/

/** PWM_ELMR[0]_CSEL7 Comparison 7 Selection **/
#define PWM_ELMR[0]_CSEL7		(1 << 7)
/** PWM_ELMR[0]_CSEL6 Comparison 6 Selection **/
#define PWM_ELMR[0]_CSEL6		(1 << 6)
/** PWM_ELMR[0]_CSEL5 Comparison 5 Selection **/
#define PWM_ELMR[0]_CSEL5		(1 << 5)
/** PWM_ELMR[0]_CSEL4 Comparison 4 Selection **/
#define PWM_ELMR[0]_CSEL4		(1 << 4)
/** PWM_ELMR[0]_CSEL3 Comparison 3 Selection **/
#define PWM_ELMR[0]_CSEL3		(1 << 3)
/** PWM_ELMR[0]_CSEL2 Comparison 2 Selection **/
#define PWM_ELMR[0]_CSEL2		(1 << 2)
/** PWM_ELMR[0]_CSEL1 Comparison 1 Selection **/
#define PWM_ELMR[0]_CSEL1		(1 << 1)
/** PWM_ELMR[0]_CSEL0 Comparison 0 Selection **/
#define PWM_ELMR[0]_CSEL0		(1 << 0)

/**@}*/

/** @defgroup pwm_elmr[1] ELMR[1] PWM Event Line 0 Mode Register
@{*/

/** PWM_ELMR[1]_CSEL7 Comparison 7 Selection **/
#define PWM_ELMR[1]_CSEL7		(1 << 7)
/** PWM_ELMR[1]_CSEL6 Comparison 6 Selection **/
#define PWM_ELMR[1]_CSEL6		(1 << 6)
/** PWM_ELMR[1]_CSEL5 Comparison 5 Selection **/
#define PWM_ELMR[1]_CSEL5		(1 << 5)
/** PWM_ELMR[1]_CSEL4 Comparison 4 Selection **/
#define PWM_ELMR[1]_CSEL4		(1 << 4)
/** PWM_ELMR[1]_CSEL3 Comparison 3 Selection **/
#define PWM_ELMR[1]_CSEL3		(1 << 3)
/** PWM_ELMR[1]_CSEL2 Comparison 2 Selection **/
#define PWM_ELMR[1]_CSEL2		(1 << 2)
/** PWM_ELMR[1]_CSEL1 Comparison 1 Selection **/
#define PWM_ELMR[1]_CSEL1		(1 << 1)
/** PWM_ELMR[1]_CSEL0 Comparison 0 Selection **/
#define PWM_ELMR[1]_CSEL0		(1 << 0)

/**@}*/

/** @defgroup pwm_smmr SMMR PWM Stepper Motor Mode Register
@{*/

/** PWM_SMMR_DOWN1 DOWN Count **/
#define PWM_SMMR_DOWN1		(1 << 17)
/** PWM_SMMR_DOWN0 DOWN Count **/
#define PWM_SMMR_DOWN0		(1 << 16)
/** PWM_SMMR_GCEN1 Gray Count ENable **/
#define PWM_SMMR_GCEN1		(1 << 1)
/** PWM_SMMR_GCEN0 Gray Count ENable **/
#define PWM_SMMR_GCEN0		(1 << 0)

/**@}*/

/** @defgroup pwm_wpcr WPCR PWM Write Protect Control Register
@{*/


#define PWM_WPCR_WPKEY_SHIFT		8
#define PWM_WPCR_WPKEY_MASK		0xffffff
/** @defgroup pwm_wpcr_wpkey WPKEY Write Protect Key
@{*/
/**@}*/

/** PWM_WPCR_WPRG5 Write Protect Register Group 5 **/
#define PWM_WPCR_WPRG5		(1 << 7)
/** PWM_WPCR_WPRG4 Write Protect Register Group 4 **/
#define PWM_WPCR_WPRG4		(1 << 6)
/** PWM_WPCR_WPRG3 Write Protect Register Group 3 **/
#define PWM_WPCR_WPRG3		(1 << 5)
/** PWM_WPCR_WPRG2 Write Protect Register Group 2 **/
#define PWM_WPCR_WPRG2		(1 << 4)
/** PWM_WPCR_WPRG1 Write Protect Register Group 1 **/
#define PWM_WPCR_WPRG1		(1 << 3)
/** PWM_WPCR_WPRG0 Write Protect Register Group 0 **/
#define PWM_WPCR_WPRG0		(1 << 2)

#define PWM_WPCR_WPCMD_SHIFT		0
#define PWM_WPCR_WPCMD_MASK		0x03
/** @defgroup pwm_wpcr_wpcmd WPCMD Write Protect Command
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_wpsr WPSR PWM Write Protect Status Register
@{*/


#define PWM_WPSR_WPVSRC_SHIFT		16
#define PWM_WPSR_WPVSRC_MASK		0xffff
/** @defgroup pwm_wpsr_wpvsrc WPVSRC Write Protect Violation Source
@{*/
/**@}*/

/** PWM_WPSR_WPHWS5 Write Protect HW Status **/
#define PWM_WPSR_WPHWS5		(1 << 13)
/** PWM_WPSR_WPHWS4 Write Protect HW Status **/
#define PWM_WPSR_WPHWS4		(1 << 12)
/** PWM_WPSR_WPHWS3 Write Protect HW Status **/
#define PWM_WPSR_WPHWS3		(1 << 11)
/** PWM_WPSR_WPHWS2 Write Protect HW Status **/
#define PWM_WPSR_WPHWS2		(1 << 10)
/** PWM_WPSR_WPHWS1 Write Protect HW Status **/
#define PWM_WPSR_WPHWS1		(1 << 9)
/** PWM_WPSR_WPHWS0 Write Protect HW Status **/
#define PWM_WPSR_WPHWS0		(1 << 8)
/** PWM_WPSR_WPVS Write Protect Violation Status **/
#define PWM_WPSR_WPVS		(1 << 7)
/** PWM_WPSR_WPSWS5 Write Protect SW Status **/
#define PWM_WPSR_WPSWS5		(1 << 5)
/** PWM_WPSR_WPSWS4 Write Protect SW Status **/
#define PWM_WPSR_WPSWS4		(1 << 4)
/** PWM_WPSR_WPSWS3 Write Protect SW Status **/
#define PWM_WPSR_WPSWS3		(1 << 3)
/** PWM_WPSR_WPSWS2 Write Protect SW Status **/
#define PWM_WPSR_WPSWS2		(1 << 2)
/** PWM_WPSR_WPSWS1 Write Protect SW Status **/
#define PWM_WPSR_WPSWS1		(1 << 1)
/** PWM_WPSR_WPSWS0 Write Protect SW Status **/
#define PWM_WPSR_WPSWS0		(1 << 0)

/**@}*/

/** @defgroup pwm_tpr TPR Transmit Pointer Register
@{*/


#define PWM_TPR_TXPTR_SHIFT		0
#define PWM_TPR_TXPTR_MASK		0xffffffff
/** @defgroup pwm_tpr_txptr TXPTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_tcr TCR Transmit Counter Register
@{*/


#define PWM_TCR_TXCTR_SHIFT		0
#define PWM_TCR_TXCTR_MASK		0xffff
/** @defgroup pwm_tcr_txctr TXCTR Transmit Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_tnpr TNPR Transmit Next Pointer Register
@{*/


#define PWM_TNPR_TXNPTR_SHIFT		0
#define PWM_TNPR_TXNPTR_MASK		0xffffffff
/** @defgroup pwm_tnpr_txnptr TXNPTR Transmit Next Pointer
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_tncr TNCR Transmit Next Counter Register
@{*/


#define PWM_TNCR_TXNCTR_SHIFT		0
#define PWM_TNCR_TXNCTR_MASK		0xffff
/** @defgroup pwm_tncr_txnctr TXNCTR Transmit Counter Next
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_ptcr PTCR Transfer Control Register
@{*/

/** PWM_PTCR_TXTDIS Transmitter Transfer Disable **/
#define PWM_PTCR_TXTDIS		(1 << 9)
/** PWM_PTCR_TXTEN Transmitter Transfer Enable **/
#define PWM_PTCR_TXTEN		(1 << 8)
/** PWM_PTCR_RXTDIS Receiver Transfer Disable **/
#define PWM_PTCR_RXTDIS		(1 << 1)
/** PWM_PTCR_RXTEN Receiver Transfer Enable **/
#define PWM_PTCR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup pwm_ptsr PTSR Transfer Status Register
@{*/

/** PWM_PTSR_TXTEN Transmitter Transfer Enable **/
#define PWM_PTSR_TXTEN		(1 << 8)
/** PWM_PTSR_RXTEN Receiver Transfer Enable **/
#define PWM_PTSR_RXTEN		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpv0 CMPV0 PWM Comparison 0 Value Register
@{*/

/** PWM_CMPV0_CVM Comparison x Value Mode **/
#define PWM_CMPV0_CVM		(1 << 24)

#define PWM_CMPV0_CV_SHIFT		0
#define PWM_CMPV0_CV_MASK		0xffffff
/** @defgroup pwm_cmpv0_cv CV Comparison x Value
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpvupd0 CMPVUPD0 PWM Comparison 0 Value Update Register
@{*/

/** PWM_CMPVUPD0_CVMUPD Comparison x Value Mode Update **/
#define PWM_CMPVUPD0_CVMUPD		(1 << 24)

#define PWM_CMPVUPD0_CVUPD_SHIFT		0
#define PWM_CMPVUPD0_CVUPD_MASK		0xffffff
/** @defgroup pwm_cmpvupd0_cvupd CVUPD Comparison x Value Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpm0 CMPM0 PWM Comparison 0 Mode Register
@{*/


#define PWM_CMPM0_CUPRCNT_SHIFT		20
#define PWM_CMPM0_CUPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm0_cuprcnt CUPRCNT Comparison x Update Period Counter
@{*/
/**@}*/


#define PWM_CMPM0_CUPR_SHIFT		16
#define PWM_CMPM0_CUPR_MASK		0x0f
/** @defgroup pwm_cmpm0_cupr CUPR Comparison x Update Period
@{*/
/**@}*/


#define PWM_CMPM0_CPRCNT_SHIFT		12
#define PWM_CMPM0_CPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm0_cprcnt CPRCNT Comparison x Period Counter
@{*/
/**@}*/


#define PWM_CMPM0_CPR_SHIFT		8
#define PWM_CMPM0_CPR_MASK		0x0f
/** @defgroup pwm_cmpm0_cpr CPR Comparison x Period
@{*/
/**@}*/


#define PWM_CMPM0_CTR_SHIFT		4
#define PWM_CMPM0_CTR_MASK		0x0f
/** @defgroup pwm_cmpm0_ctr CTR Comparison x Trigger
@{*/
/**@}*/

/** PWM_CMPM0_CEN Comparison x Enable **/
#define PWM_CMPM0_CEN		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpmupd0 CMPMUPD0 PWM Comparison 0 Mode Update Register
@{*/


#define PWM_CMPMUPD0_CUPRUPD_SHIFT		16
#define PWM_CMPMUPD0_CUPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd0_cuprupd CUPRUPD Comparison x Update Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD0_CPRUPD_SHIFT		8
#define PWM_CMPMUPD0_CPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd0_cprupd CPRUPD Comparison x Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD0_CTRUPD_SHIFT		4
#define PWM_CMPMUPD0_CTRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd0_ctrupd CTRUPD Comparison x Trigger Update
@{*/
/**@}*/

/** PWM_CMPMUPD0_CENUPD Comparison x Enable Update **/
#define PWM_CMPMUPD0_CENUPD		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpv1 CMPV1 PWM Comparison 1 Value Register
@{*/

/** PWM_CMPV1_CVM Comparison x Value Mode **/
#define PWM_CMPV1_CVM		(1 << 24)

#define PWM_CMPV1_CV_SHIFT		0
#define PWM_CMPV1_CV_MASK		0xffffff
/** @defgroup pwm_cmpv1_cv CV Comparison x Value
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpvupd1 CMPVUPD1 PWM Comparison 1 Value Update Register
@{*/

/** PWM_CMPVUPD1_CVMUPD Comparison x Value Mode Update **/
#define PWM_CMPVUPD1_CVMUPD		(1 << 24)

#define PWM_CMPVUPD1_CVUPD_SHIFT		0
#define PWM_CMPVUPD1_CVUPD_MASK		0xffffff
/** @defgroup pwm_cmpvupd1_cvupd CVUPD Comparison x Value Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpm1 CMPM1 PWM Comparison 1 Mode Register
@{*/


#define PWM_CMPM1_CUPRCNT_SHIFT		20
#define PWM_CMPM1_CUPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm1_cuprcnt CUPRCNT Comparison x Update Period Counter
@{*/
/**@}*/


#define PWM_CMPM1_CUPR_SHIFT		16
#define PWM_CMPM1_CUPR_MASK		0x0f
/** @defgroup pwm_cmpm1_cupr CUPR Comparison x Update Period
@{*/
/**@}*/


#define PWM_CMPM1_CPRCNT_SHIFT		12
#define PWM_CMPM1_CPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm1_cprcnt CPRCNT Comparison x Period Counter
@{*/
/**@}*/


#define PWM_CMPM1_CPR_SHIFT		8
#define PWM_CMPM1_CPR_MASK		0x0f
/** @defgroup pwm_cmpm1_cpr CPR Comparison x Period
@{*/
/**@}*/


#define PWM_CMPM1_CTR_SHIFT		4
#define PWM_CMPM1_CTR_MASK		0x0f
/** @defgroup pwm_cmpm1_ctr CTR Comparison x Trigger
@{*/
/**@}*/

/** PWM_CMPM1_CEN Comparison x Enable **/
#define PWM_CMPM1_CEN		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpmupd1 CMPMUPD1 PWM Comparison 1 Mode Update Register
@{*/


#define PWM_CMPMUPD1_CUPRUPD_SHIFT		16
#define PWM_CMPMUPD1_CUPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd1_cuprupd CUPRUPD Comparison x Update Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD1_CPRUPD_SHIFT		8
#define PWM_CMPMUPD1_CPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd1_cprupd CPRUPD Comparison x Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD1_CTRUPD_SHIFT		4
#define PWM_CMPMUPD1_CTRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd1_ctrupd CTRUPD Comparison x Trigger Update
@{*/
/**@}*/

/** PWM_CMPMUPD1_CENUPD Comparison x Enable Update **/
#define PWM_CMPMUPD1_CENUPD		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpv2 CMPV2 PWM Comparison 2 Value Register
@{*/

/** PWM_CMPV2_CVM Comparison x Value Mode **/
#define PWM_CMPV2_CVM		(1 << 24)

#define PWM_CMPV2_CV_SHIFT		0
#define PWM_CMPV2_CV_MASK		0xffffff
/** @defgroup pwm_cmpv2_cv CV Comparison x Value
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpvupd2 CMPVUPD2 PWM Comparison 2 Value Update Register
@{*/

/** PWM_CMPVUPD2_CVMUPD Comparison x Value Mode Update **/
#define PWM_CMPVUPD2_CVMUPD		(1 << 24)

#define PWM_CMPVUPD2_CVUPD_SHIFT		0
#define PWM_CMPVUPD2_CVUPD_MASK		0xffffff
/** @defgroup pwm_cmpvupd2_cvupd CVUPD Comparison x Value Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpm2 CMPM2 PWM Comparison 2 Mode Register
@{*/


#define PWM_CMPM2_CUPRCNT_SHIFT		20
#define PWM_CMPM2_CUPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm2_cuprcnt CUPRCNT Comparison x Update Period Counter
@{*/
/**@}*/


#define PWM_CMPM2_CUPR_SHIFT		16
#define PWM_CMPM2_CUPR_MASK		0x0f
/** @defgroup pwm_cmpm2_cupr CUPR Comparison x Update Period
@{*/
/**@}*/


#define PWM_CMPM2_CPRCNT_SHIFT		12
#define PWM_CMPM2_CPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm2_cprcnt CPRCNT Comparison x Period Counter
@{*/
/**@}*/


#define PWM_CMPM2_CPR_SHIFT		8
#define PWM_CMPM2_CPR_MASK		0x0f
/** @defgroup pwm_cmpm2_cpr CPR Comparison x Period
@{*/
/**@}*/


#define PWM_CMPM2_CTR_SHIFT		4
#define PWM_CMPM2_CTR_MASK		0x0f
/** @defgroup pwm_cmpm2_ctr CTR Comparison x Trigger
@{*/
/**@}*/

/** PWM_CMPM2_CEN Comparison x Enable **/
#define PWM_CMPM2_CEN		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpmupd2 CMPMUPD2 PWM Comparison 2 Mode Update Register
@{*/


#define PWM_CMPMUPD2_CUPRUPD_SHIFT		16
#define PWM_CMPMUPD2_CUPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd2_cuprupd CUPRUPD Comparison x Update Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD2_CPRUPD_SHIFT		8
#define PWM_CMPMUPD2_CPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd2_cprupd CPRUPD Comparison x Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD2_CTRUPD_SHIFT		4
#define PWM_CMPMUPD2_CTRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd2_ctrupd CTRUPD Comparison x Trigger Update
@{*/
/**@}*/

/** PWM_CMPMUPD2_CENUPD Comparison x Enable Update **/
#define PWM_CMPMUPD2_CENUPD		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpv3 CMPV3 PWM Comparison 3 Value Register
@{*/

/** PWM_CMPV3_CVM Comparison x Value Mode **/
#define PWM_CMPV3_CVM		(1 << 24)

#define PWM_CMPV3_CV_SHIFT		0
#define PWM_CMPV3_CV_MASK		0xffffff
/** @defgroup pwm_cmpv3_cv CV Comparison x Value
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpvupd3 CMPVUPD3 PWM Comparison 3 Value Update Register
@{*/

/** PWM_CMPVUPD3_CVMUPD Comparison x Value Mode Update **/
#define PWM_CMPVUPD3_CVMUPD		(1 << 24)

#define PWM_CMPVUPD3_CVUPD_SHIFT		0
#define PWM_CMPVUPD3_CVUPD_MASK		0xffffff
/** @defgroup pwm_cmpvupd3_cvupd CVUPD Comparison x Value Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpm3 CMPM3 PWM Comparison 3 Mode Register
@{*/


#define PWM_CMPM3_CUPRCNT_SHIFT		20
#define PWM_CMPM3_CUPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm3_cuprcnt CUPRCNT Comparison x Update Period Counter
@{*/
/**@}*/


#define PWM_CMPM3_CUPR_SHIFT		16
#define PWM_CMPM3_CUPR_MASK		0x0f
/** @defgroup pwm_cmpm3_cupr CUPR Comparison x Update Period
@{*/
/**@}*/


#define PWM_CMPM3_CPRCNT_SHIFT		12
#define PWM_CMPM3_CPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm3_cprcnt CPRCNT Comparison x Period Counter
@{*/
/**@}*/


#define PWM_CMPM3_CPR_SHIFT		8
#define PWM_CMPM3_CPR_MASK		0x0f
/** @defgroup pwm_cmpm3_cpr CPR Comparison x Period
@{*/
/**@}*/


#define PWM_CMPM3_CTR_SHIFT		4
#define PWM_CMPM3_CTR_MASK		0x0f
/** @defgroup pwm_cmpm3_ctr CTR Comparison x Trigger
@{*/
/**@}*/

/** PWM_CMPM3_CEN Comparison x Enable **/
#define PWM_CMPM3_CEN		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpmupd3 CMPMUPD3 PWM Comparison 3 Mode Update Register
@{*/


#define PWM_CMPMUPD3_CUPRUPD_SHIFT		16
#define PWM_CMPMUPD3_CUPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd3_cuprupd CUPRUPD Comparison x Update Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD3_CPRUPD_SHIFT		8
#define PWM_CMPMUPD3_CPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd3_cprupd CPRUPD Comparison x Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD3_CTRUPD_SHIFT		4
#define PWM_CMPMUPD3_CTRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd3_ctrupd CTRUPD Comparison x Trigger Update
@{*/
/**@}*/

/** PWM_CMPMUPD3_CENUPD Comparison x Enable Update **/
#define PWM_CMPMUPD3_CENUPD		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpv4 CMPV4 PWM Comparison 4 Value Register
@{*/

/** PWM_CMPV4_CVM Comparison x Value Mode **/
#define PWM_CMPV4_CVM		(1 << 24)

#define PWM_CMPV4_CV_SHIFT		0
#define PWM_CMPV4_CV_MASK		0xffffff
/** @defgroup pwm_cmpv4_cv CV Comparison x Value
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpvupd4 CMPVUPD4 PWM Comparison 4 Value Update Register
@{*/

/** PWM_CMPVUPD4_CVMUPD Comparison x Value Mode Update **/
#define PWM_CMPVUPD4_CVMUPD		(1 << 24)

#define PWM_CMPVUPD4_CVUPD_SHIFT		0
#define PWM_CMPVUPD4_CVUPD_MASK		0xffffff
/** @defgroup pwm_cmpvupd4_cvupd CVUPD Comparison x Value Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpm4 CMPM4 PWM Comparison 4 Mode Register
@{*/


#define PWM_CMPM4_CUPRCNT_SHIFT		20
#define PWM_CMPM4_CUPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm4_cuprcnt CUPRCNT Comparison x Update Period Counter
@{*/
/**@}*/


#define PWM_CMPM4_CUPR_SHIFT		16
#define PWM_CMPM4_CUPR_MASK		0x0f
/** @defgroup pwm_cmpm4_cupr CUPR Comparison x Update Period
@{*/
/**@}*/


#define PWM_CMPM4_CPRCNT_SHIFT		12
#define PWM_CMPM4_CPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm4_cprcnt CPRCNT Comparison x Period Counter
@{*/
/**@}*/


#define PWM_CMPM4_CPR_SHIFT		8
#define PWM_CMPM4_CPR_MASK		0x0f
/** @defgroup pwm_cmpm4_cpr CPR Comparison x Period
@{*/
/**@}*/


#define PWM_CMPM4_CTR_SHIFT		4
#define PWM_CMPM4_CTR_MASK		0x0f
/** @defgroup pwm_cmpm4_ctr CTR Comparison x Trigger
@{*/
/**@}*/

/** PWM_CMPM4_CEN Comparison x Enable **/
#define PWM_CMPM4_CEN		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpmupd4 CMPMUPD4 PWM Comparison 4 Mode Update Register
@{*/


#define PWM_CMPMUPD4_CUPRUPD_SHIFT		16
#define PWM_CMPMUPD4_CUPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd4_cuprupd CUPRUPD Comparison x Update Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD4_CPRUPD_SHIFT		8
#define PWM_CMPMUPD4_CPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd4_cprupd CPRUPD Comparison x Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD4_CTRUPD_SHIFT		4
#define PWM_CMPMUPD4_CTRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd4_ctrupd CTRUPD Comparison x Trigger Update
@{*/
/**@}*/

/** PWM_CMPMUPD4_CENUPD Comparison x Enable Update **/
#define PWM_CMPMUPD4_CENUPD		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpv5 CMPV5 PWM Comparison 5 Value Register
@{*/

/** PWM_CMPV5_CVM Comparison x Value Mode **/
#define PWM_CMPV5_CVM		(1 << 24)

#define PWM_CMPV5_CV_SHIFT		0
#define PWM_CMPV5_CV_MASK		0xffffff
/** @defgroup pwm_cmpv5_cv CV Comparison x Value
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpvupd5 CMPVUPD5 PWM Comparison 5 Value Update Register
@{*/

/** PWM_CMPVUPD5_CVMUPD Comparison x Value Mode Update **/
#define PWM_CMPVUPD5_CVMUPD		(1 << 24)

#define PWM_CMPVUPD5_CVUPD_SHIFT		0
#define PWM_CMPVUPD5_CVUPD_MASK		0xffffff
/** @defgroup pwm_cmpvupd5_cvupd CVUPD Comparison x Value Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpm5 CMPM5 PWM Comparison 5 Mode Register
@{*/


#define PWM_CMPM5_CUPRCNT_SHIFT		20
#define PWM_CMPM5_CUPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm5_cuprcnt CUPRCNT Comparison x Update Period Counter
@{*/
/**@}*/


#define PWM_CMPM5_CUPR_SHIFT		16
#define PWM_CMPM5_CUPR_MASK		0x0f
/** @defgroup pwm_cmpm5_cupr CUPR Comparison x Update Period
@{*/
/**@}*/


#define PWM_CMPM5_CPRCNT_SHIFT		12
#define PWM_CMPM5_CPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm5_cprcnt CPRCNT Comparison x Period Counter
@{*/
/**@}*/


#define PWM_CMPM5_CPR_SHIFT		8
#define PWM_CMPM5_CPR_MASK		0x0f
/** @defgroup pwm_cmpm5_cpr CPR Comparison x Period
@{*/
/**@}*/


#define PWM_CMPM5_CTR_SHIFT		4
#define PWM_CMPM5_CTR_MASK		0x0f
/** @defgroup pwm_cmpm5_ctr CTR Comparison x Trigger
@{*/
/**@}*/

/** PWM_CMPM5_CEN Comparison x Enable **/
#define PWM_CMPM5_CEN		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpmupd5 CMPMUPD5 PWM Comparison 5 Mode Update Register
@{*/


#define PWM_CMPMUPD5_CUPRUPD_SHIFT		16
#define PWM_CMPMUPD5_CUPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd5_cuprupd CUPRUPD Comparison x Update Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD5_CPRUPD_SHIFT		8
#define PWM_CMPMUPD5_CPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd5_cprupd CPRUPD Comparison x Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD5_CTRUPD_SHIFT		4
#define PWM_CMPMUPD5_CTRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd5_ctrupd CTRUPD Comparison x Trigger Update
@{*/
/**@}*/

/** PWM_CMPMUPD5_CENUPD Comparison x Enable Update **/
#define PWM_CMPMUPD5_CENUPD		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpv6 CMPV6 PWM Comparison 6 Value Register
@{*/

/** PWM_CMPV6_CVM Comparison x Value Mode **/
#define PWM_CMPV6_CVM		(1 << 24)

#define PWM_CMPV6_CV_SHIFT		0
#define PWM_CMPV6_CV_MASK		0xffffff
/** @defgroup pwm_cmpv6_cv CV Comparison x Value
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpvupd6 CMPVUPD6 PWM Comparison 6 Value Update Register
@{*/

/** PWM_CMPVUPD6_CVMUPD Comparison x Value Mode Update **/
#define PWM_CMPVUPD6_CVMUPD		(1 << 24)

#define PWM_CMPVUPD6_CVUPD_SHIFT		0
#define PWM_CMPVUPD6_CVUPD_MASK		0xffffff
/** @defgroup pwm_cmpvupd6_cvupd CVUPD Comparison x Value Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpm6 CMPM6 PWM Comparison 6 Mode Register
@{*/


#define PWM_CMPM6_CUPRCNT_SHIFT		20
#define PWM_CMPM6_CUPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm6_cuprcnt CUPRCNT Comparison x Update Period Counter
@{*/
/**@}*/


#define PWM_CMPM6_CUPR_SHIFT		16
#define PWM_CMPM6_CUPR_MASK		0x0f
/** @defgroup pwm_cmpm6_cupr CUPR Comparison x Update Period
@{*/
/**@}*/


#define PWM_CMPM6_CPRCNT_SHIFT		12
#define PWM_CMPM6_CPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm6_cprcnt CPRCNT Comparison x Period Counter
@{*/
/**@}*/


#define PWM_CMPM6_CPR_SHIFT		8
#define PWM_CMPM6_CPR_MASK		0x0f
/** @defgroup pwm_cmpm6_cpr CPR Comparison x Period
@{*/
/**@}*/


#define PWM_CMPM6_CTR_SHIFT		4
#define PWM_CMPM6_CTR_MASK		0x0f
/** @defgroup pwm_cmpm6_ctr CTR Comparison x Trigger
@{*/
/**@}*/

/** PWM_CMPM6_CEN Comparison x Enable **/
#define PWM_CMPM6_CEN		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpmupd6 CMPMUPD6 PWM Comparison 6 Mode Update Register
@{*/


#define PWM_CMPMUPD6_CUPRUPD_SHIFT		16
#define PWM_CMPMUPD6_CUPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd6_cuprupd CUPRUPD Comparison x Update Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD6_CPRUPD_SHIFT		8
#define PWM_CMPMUPD6_CPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd6_cprupd CPRUPD Comparison x Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD6_CTRUPD_SHIFT		4
#define PWM_CMPMUPD6_CTRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd6_ctrupd CTRUPD Comparison x Trigger Update
@{*/
/**@}*/

/** PWM_CMPMUPD6_CENUPD Comparison x Enable Update **/
#define PWM_CMPMUPD6_CENUPD		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpv7 CMPV7 PWM Comparison 7 Value Register
@{*/

/** PWM_CMPV7_CVM Comparison x Value Mode **/
#define PWM_CMPV7_CVM		(1 << 24)

#define PWM_CMPV7_CV_SHIFT		0
#define PWM_CMPV7_CV_MASK		0xffffff
/** @defgroup pwm_cmpv7_cv CV Comparison x Value
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpvupd7 CMPVUPD7 PWM Comparison 7 Value Update Register
@{*/

/** PWM_CMPVUPD7_CVMUPD Comparison x Value Mode Update **/
#define PWM_CMPVUPD7_CVMUPD		(1 << 24)

#define PWM_CMPVUPD7_CVUPD_SHIFT		0
#define PWM_CMPVUPD7_CVUPD_MASK		0xffffff
/** @defgroup pwm_cmpvupd7_cvupd CVUPD Comparison x Value Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmpm7 CMPM7 PWM Comparison 7 Mode Register
@{*/


#define PWM_CMPM7_CUPRCNT_SHIFT		20
#define PWM_CMPM7_CUPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm7_cuprcnt CUPRCNT Comparison x Update Period Counter
@{*/
/**@}*/


#define PWM_CMPM7_CUPR_SHIFT		16
#define PWM_CMPM7_CUPR_MASK		0x0f
/** @defgroup pwm_cmpm7_cupr CUPR Comparison x Update Period
@{*/
/**@}*/


#define PWM_CMPM7_CPRCNT_SHIFT		12
#define PWM_CMPM7_CPRCNT_MASK		0x0f
/** @defgroup pwm_cmpm7_cprcnt CPRCNT Comparison x Period Counter
@{*/
/**@}*/


#define PWM_CMPM7_CPR_SHIFT		8
#define PWM_CMPM7_CPR_MASK		0x0f
/** @defgroup pwm_cmpm7_cpr CPR Comparison x Period
@{*/
/**@}*/


#define PWM_CMPM7_CTR_SHIFT		4
#define PWM_CMPM7_CTR_MASK		0x0f
/** @defgroup pwm_cmpm7_ctr CTR Comparison x Trigger
@{*/
/**@}*/

/** PWM_CMPM7_CEN Comparison x Enable **/
#define PWM_CMPM7_CEN		(1 << 0)

/**@}*/

/** @defgroup pwm_cmpmupd7 CMPMUPD7 PWM Comparison 7 Mode Update Register
@{*/


#define PWM_CMPMUPD7_CUPRUPD_SHIFT		16
#define PWM_CMPMUPD7_CUPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd7_cuprupd CUPRUPD Comparison x Update Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD7_CPRUPD_SHIFT		8
#define PWM_CMPMUPD7_CPRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd7_cprupd CPRUPD Comparison x Period Update
@{*/
/**@}*/


#define PWM_CMPMUPD7_CTRUPD_SHIFT		4
#define PWM_CMPMUPD7_CTRUPD_MASK		0x0f
/** @defgroup pwm_cmpmupd7_ctrupd CTRUPD Comparison x Trigger Update
@{*/
/**@}*/

/** PWM_CMPMUPD7_CENUPD Comparison x Enable Update **/
#define PWM_CMPMUPD7_CENUPD		(1 << 0)

/**@}*/

/** @defgroup pwm_cmr0 CMR0 PWM Channel Mode Register (ch_num = 0)
@{*/

/** PWM_CMR0_DTLI Dead-Time PWMLx Output Inverted **/
#define PWM_CMR0_DTLI		(1 << 18)
/** PWM_CMR0_DTHI Dead-Time PWMHx Output Inverted **/
#define PWM_CMR0_DTHI		(1 << 17)
/** PWM_CMR0_DTE Dead-Time Generator Enable **/
#define PWM_CMR0_DTE		(1 << 16)
/** PWM_CMR0_CES Counter Event Selection **/
#define PWM_CMR0_CES		(1 << 10)
/** PWM_CMR0_CPOL Channel Polarity **/
#define PWM_CMR0_CPOL		(1 << 9)
/** PWM_CMR0_CALG Channel Alignment **/
#define PWM_CMR0_CALG		(1 << 8)

#define PWM_CMR0_CPRE_SHIFT		0
#define PWM_CMR0_CPRE_MASK		0x0f
/** @defgroup pwm_cmr0_cpre CPRE Channel Pre-scaler
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cdty0 CDTY0 PWM Channel Duty Cycle Register (ch_num = 0)
@{*/


#define PWM_CDTY0_CDTY_SHIFT		0
#define PWM_CDTY0_CDTY_MASK		0xffffff
/** @defgroup pwm_cdty0_cdty CDTY Channel Duty-Cycle
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cdtyupd0 CDTYUPD0 PWM Channel Duty Cycle Update Register (ch_num = 0)
@{*/


#define PWM_CDTYUPD0_CDTYUPD_SHIFT		0
#define PWM_CDTYUPD0_CDTYUPD_MASK		0xffffff
/** @defgroup pwm_cdtyupd0_cdtyupd CDTYUPD Channel Duty-Cycle Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cprd0 CPRD0 PWM Channel Period Register (ch_num = 0)
@{*/


#define PWM_CPRD0_CPRD_SHIFT		0
#define PWM_CPRD0_CPRD_MASK		0xffffff
/** @defgroup pwm_cprd0_cprd CPRD Channel Period
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cprdupd0 CPRDUPD0 PWM Channel Period Update Register (ch_num = 0)
@{*/


#define PWM_CPRDUPD0_CPRDUPD_SHIFT		0
#define PWM_CPRDUPD0_CPRDUPD_MASK		0xffffff
/** @defgroup pwm_cprdupd0_cprdupd CPRDUPD Channel Period Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_ccnt0 CCNT0 PWM Channel Counter Register (ch_num = 0)
@{*/


#define PWM_CCNT0_CNT_SHIFT		0
#define PWM_CCNT0_CNT_MASK		0xffffff
/** @defgroup pwm_ccnt0_cnt CNT Channel Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_dt0 DT0 PWM Channel Dead Time Register (ch_num = 0)
@{*/


#define PWM_DT0_DTL_SHIFT		16
#define PWM_DT0_DTL_MASK		0xffff
/** @defgroup pwm_dt0_dtl DTL Dead-Time Value for PWMLx Output
@{*/
/**@}*/


#define PWM_DT0_DTH_SHIFT		0
#define PWM_DT0_DTH_MASK		0xffff
/** @defgroup pwm_dt0_dth DTH Dead-Time Value for PWMHx Output
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_dtupd0 DTUPD0 PWM Channel Dead Time Update Register (ch_num = 0)
@{*/


#define PWM_DTUPD0_DTLUPD_SHIFT		16
#define PWM_DTUPD0_DTLUPD_MASK		0xffff
/** @defgroup pwm_dtupd0_dtlupd DTLUPD Dead-Time Value Update for PWMLx Output
@{*/
/**@}*/


#define PWM_DTUPD0_DTHUPD_SHIFT		0
#define PWM_DTUPD0_DTHUPD_MASK		0xffff
/** @defgroup pwm_dtupd0_dthupd DTHUPD Dead-Time Value Update for PWMHx Output
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmr1 CMR1 PWM Channel Mode Register (ch_num = 1)
@{*/

/** PWM_CMR1_DTLI Dead-Time PWMLx Output Inverted **/
#define PWM_CMR1_DTLI		(1 << 18)
/** PWM_CMR1_DTHI Dead-Time PWMHx Output Inverted **/
#define PWM_CMR1_DTHI		(1 << 17)
/** PWM_CMR1_DTE Dead-Time Generator Enable **/
#define PWM_CMR1_DTE		(1 << 16)
/** PWM_CMR1_CES Counter Event Selection **/
#define PWM_CMR1_CES		(1 << 10)
/** PWM_CMR1_CPOL Channel Polarity **/
#define PWM_CMR1_CPOL		(1 << 9)
/** PWM_CMR1_CALG Channel Alignment **/
#define PWM_CMR1_CALG		(1 << 8)

#define PWM_CMR1_CPRE_SHIFT		0
#define PWM_CMR1_CPRE_MASK		0x0f
/** @defgroup pwm_cmr1_cpre CPRE Channel Pre-scaler
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cdty1 CDTY1 PWM Channel Duty Cycle Register (ch_num = 1)
@{*/


#define PWM_CDTY1_CDTY_SHIFT		0
#define PWM_CDTY1_CDTY_MASK		0xffffff
/** @defgroup pwm_cdty1_cdty CDTY Channel Duty-Cycle
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cdtyupd1 CDTYUPD1 PWM Channel Duty Cycle Update Register (ch_num = 1)
@{*/


#define PWM_CDTYUPD1_CDTYUPD_SHIFT		0
#define PWM_CDTYUPD1_CDTYUPD_MASK		0xffffff
/** @defgroup pwm_cdtyupd1_cdtyupd CDTYUPD Channel Duty-Cycle Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cprd1 CPRD1 PWM Channel Period Register (ch_num = 1)
@{*/


#define PWM_CPRD1_CPRD_SHIFT		0
#define PWM_CPRD1_CPRD_MASK		0xffffff
/** @defgroup pwm_cprd1_cprd CPRD Channel Period
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cprdupd1 CPRDUPD1 PWM Channel Period Update Register (ch_num = 1)
@{*/


#define PWM_CPRDUPD1_CPRDUPD_SHIFT		0
#define PWM_CPRDUPD1_CPRDUPD_MASK		0xffffff
/** @defgroup pwm_cprdupd1_cprdupd CPRDUPD Channel Period Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_ccnt1 CCNT1 PWM Channel Counter Register (ch_num = 1)
@{*/


#define PWM_CCNT1_CNT_SHIFT		0
#define PWM_CCNT1_CNT_MASK		0xffffff
/** @defgroup pwm_ccnt1_cnt CNT Channel Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_dt1 DT1 PWM Channel Dead Time Register (ch_num = 1)
@{*/


#define PWM_DT1_DTL_SHIFT		16
#define PWM_DT1_DTL_MASK		0xffff
/** @defgroup pwm_dt1_dtl DTL Dead-Time Value for PWMLx Output
@{*/
/**@}*/


#define PWM_DT1_DTH_SHIFT		0
#define PWM_DT1_DTH_MASK		0xffff
/** @defgroup pwm_dt1_dth DTH Dead-Time Value for PWMHx Output
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_dtupd1 DTUPD1 PWM Channel Dead Time Update Register (ch_num = 1)
@{*/


#define PWM_DTUPD1_DTLUPD_SHIFT		16
#define PWM_DTUPD1_DTLUPD_MASK		0xffff
/** @defgroup pwm_dtupd1_dtlupd DTLUPD Dead-Time Value Update for PWMLx Output
@{*/
/**@}*/


#define PWM_DTUPD1_DTHUPD_SHIFT		0
#define PWM_DTUPD1_DTHUPD_MASK		0xffff
/** @defgroup pwm_dtupd1_dthupd DTHUPD Dead-Time Value Update for PWMHx Output
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmr2 CMR2 PWM Channel Mode Register (ch_num = 2)
@{*/

/** PWM_CMR2_DTLI Dead-Time PWMLx Output Inverted **/
#define PWM_CMR2_DTLI		(1 << 18)
/** PWM_CMR2_DTHI Dead-Time PWMHx Output Inverted **/
#define PWM_CMR2_DTHI		(1 << 17)
/** PWM_CMR2_DTE Dead-Time Generator Enable **/
#define PWM_CMR2_DTE		(1 << 16)
/** PWM_CMR2_CES Counter Event Selection **/
#define PWM_CMR2_CES		(1 << 10)
/** PWM_CMR2_CPOL Channel Polarity **/
#define PWM_CMR2_CPOL		(1 << 9)
/** PWM_CMR2_CALG Channel Alignment **/
#define PWM_CMR2_CALG		(1 << 8)

#define PWM_CMR2_CPRE_SHIFT		0
#define PWM_CMR2_CPRE_MASK		0x0f
/** @defgroup pwm_cmr2_cpre CPRE Channel Pre-scaler
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cdty2 CDTY2 PWM Channel Duty Cycle Register (ch_num = 2)
@{*/


#define PWM_CDTY2_CDTY_SHIFT		0
#define PWM_CDTY2_CDTY_MASK		0xffffff
/** @defgroup pwm_cdty2_cdty CDTY Channel Duty-Cycle
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cdtyupd2 CDTYUPD2 PWM Channel Duty Cycle Update Register (ch_num = 2)
@{*/


#define PWM_CDTYUPD2_CDTYUPD_SHIFT		0
#define PWM_CDTYUPD2_CDTYUPD_MASK		0xffffff
/** @defgroup pwm_cdtyupd2_cdtyupd CDTYUPD Channel Duty-Cycle Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cprd2 CPRD2 PWM Channel Period Register (ch_num = 2)
@{*/


#define PWM_CPRD2_CPRD_SHIFT		0
#define PWM_CPRD2_CPRD_MASK		0xffffff
/** @defgroup pwm_cprd2_cprd CPRD Channel Period
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cprdupd2 CPRDUPD2 PWM Channel Period Update Register (ch_num = 2)
@{*/


#define PWM_CPRDUPD2_CPRDUPD_SHIFT		0
#define PWM_CPRDUPD2_CPRDUPD_MASK		0xffffff
/** @defgroup pwm_cprdupd2_cprdupd CPRDUPD Channel Period Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_ccnt2 CCNT2 PWM Channel Counter Register (ch_num = 2)
@{*/


#define PWM_CCNT2_CNT_SHIFT		0
#define PWM_CCNT2_CNT_MASK		0xffffff
/** @defgroup pwm_ccnt2_cnt CNT Channel Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_dt2 DT2 PWM Channel Dead Time Register (ch_num = 2)
@{*/


#define PWM_DT2_DTL_SHIFT		16
#define PWM_DT2_DTL_MASK		0xffff
/** @defgroup pwm_dt2_dtl DTL Dead-Time Value for PWMLx Output
@{*/
/**@}*/


#define PWM_DT2_DTH_SHIFT		0
#define PWM_DT2_DTH_MASK		0xffff
/** @defgroup pwm_dt2_dth DTH Dead-Time Value for PWMHx Output
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_dtupd2 DTUPD2 PWM Channel Dead Time Update Register (ch_num = 2)
@{*/


#define PWM_DTUPD2_DTLUPD_SHIFT		16
#define PWM_DTUPD2_DTLUPD_MASK		0xffff
/** @defgroup pwm_dtupd2_dtlupd DTLUPD Dead-Time Value Update for PWMLx Output
@{*/
/**@}*/


#define PWM_DTUPD2_DTHUPD_SHIFT		0
#define PWM_DTUPD2_DTHUPD_MASK		0xffff
/** @defgroup pwm_dtupd2_dthupd DTHUPD Dead-Time Value Update for PWMHx Output
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cmr3 CMR3 PWM Channel Mode Register (ch_num = 3)
@{*/

/** PWM_CMR3_DTLI Dead-Time PWMLx Output Inverted **/
#define PWM_CMR3_DTLI		(1 << 18)
/** PWM_CMR3_DTHI Dead-Time PWMHx Output Inverted **/
#define PWM_CMR3_DTHI		(1 << 17)
/** PWM_CMR3_DTE Dead-Time Generator Enable **/
#define PWM_CMR3_DTE		(1 << 16)
/** PWM_CMR3_CES Counter Event Selection **/
#define PWM_CMR3_CES		(1 << 10)
/** PWM_CMR3_CPOL Channel Polarity **/
#define PWM_CMR3_CPOL		(1 << 9)
/** PWM_CMR3_CALG Channel Alignment **/
#define PWM_CMR3_CALG		(1 << 8)

#define PWM_CMR3_CPRE_SHIFT		0
#define PWM_CMR3_CPRE_MASK		0x0f
/** @defgroup pwm_cmr3_cpre CPRE Channel Pre-scaler
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cdty3 CDTY3 PWM Channel Duty Cycle Register (ch_num = 3)
@{*/


#define PWM_CDTY3_CDTY_SHIFT		0
#define PWM_CDTY3_CDTY_MASK		0xffffff
/** @defgroup pwm_cdty3_cdty CDTY Channel Duty-Cycle
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cdtyupd3 CDTYUPD3 PWM Channel Duty Cycle Update Register (ch_num = 3)
@{*/


#define PWM_CDTYUPD3_CDTYUPD_SHIFT		0
#define PWM_CDTYUPD3_CDTYUPD_MASK		0xffffff
/** @defgroup pwm_cdtyupd3_cdtyupd CDTYUPD Channel Duty-Cycle Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cprd3 CPRD3 PWM Channel Period Register (ch_num = 3)
@{*/


#define PWM_CPRD3_CPRD_SHIFT		0
#define PWM_CPRD3_CPRD_MASK		0xffffff
/** @defgroup pwm_cprd3_cprd CPRD Channel Period
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_cprdupd3 CPRDUPD3 PWM Channel Period Update Register (ch_num = 3)
@{*/


#define PWM_CPRDUPD3_CPRDUPD_SHIFT		0
#define PWM_CPRDUPD3_CPRDUPD_MASK		0xffffff
/** @defgroup pwm_cprdupd3_cprdupd CPRDUPD Channel Period Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_ccnt3 CCNT3 PWM Channel Counter Register (ch_num = 3)
@{*/


#define PWM_CCNT3_CNT_SHIFT		0
#define PWM_CCNT3_CNT_MASK		0xffffff
/** @defgroup pwm_ccnt3_cnt CNT Channel Counter Register
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_dt3 DT3 PWM Channel Dead Time Register (ch_num = 3)
@{*/


#define PWM_DT3_DTL_SHIFT		16
#define PWM_DT3_DTL_MASK		0xffff
/** @defgroup pwm_dt3_dtl DTL Dead-Time Value for PWMLx Output
@{*/
/**@}*/


#define PWM_DT3_DTH_SHIFT		0
#define PWM_DT3_DTH_MASK		0xffff
/** @defgroup pwm_dt3_dth DTH Dead-Time Value for PWMHx Output
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm_dtupd3 DTUPD3 PWM Channel Dead Time Update Register (ch_num = 3)
@{*/


#define PWM_DTUPD3_DTLUPD_SHIFT		16
#define PWM_DTUPD3_DTLUPD_MASK		0xffff
/** @defgroup pwm_dtupd3_dtlupd DTLUPD Dead-Time Value Update for PWMLx Output
@{*/
/**@}*/


#define PWM_DTUPD3_DTHUPD_SHIFT		0
#define PWM_DTUPD3_DTHUPD_MASK		0xffff
/** @defgroup pwm_dtupd3_dthupd DTHUPD Dead-Time Value Update for PWMHx Output
@{*/
/**@}*/


/**@}*/

#pragma once 

/* --- PWM1: Pulse Width Modulation Controller ---------------------- */

/** @defgroup pwm1_registers Pulse Width Modulation Controller Register
@{*/

/** PWM1_PWM_CLK PWM Clock Register **/
#define PWM1_PWM_CLK			MMIO32(PWM1_BASE + 0x00)
/** PWM1_PWM_ENA PWM Enable Register **/
#define PWM1_PWM_ENA			MMIO32(PWM1_BASE + 0x04)
/** PWM1_PWM_DIS PWM Disable Register **/
#define PWM1_PWM_DIS			MMIO32(PWM1_BASE + 0x08)
/** PWM1_PWM_SR PWM Status Register **/
#define PWM1_PWM_SR			MMIO32(PWM1_BASE + 0x0c)
/** PWM1_PWM_IER1 PWM Interrupt Enable Register 1 **/
#define PWM1_PWM_IER1			MMIO32(PWM1_BASE + 0x10)
/** PWM1_PWM_IDR1 PWM Interrupt Disable Register 1 **/
#define PWM1_PWM_IDR1			MMIO32(PWM1_BASE + 0x14)
/** PWM1_PWM_IMR1 PWM Interrupt Mask Register 1 **/
#define PWM1_PWM_IMR1			MMIO32(PWM1_BASE + 0x18)
/** PWM1_PWM_ISR1 PWM Interrupt Status Register 1 **/
#define PWM1_PWM_ISR1			MMIO32(PWM1_BASE + 0x1c)
/** PWM1_PWM_SCM PWM Sync Channels Mode Register **/
#define PWM1_PWM_SCM			MMIO32(PWM1_BASE + 0x20)
/** PWM1_PWM_DMAR PWM DMA Register **/
#define PWM1_PWM_DMAR			MMIO32(PWM1_BASE + 0x24)
/** PWM1_PWM_SCUC PWM Sync Channels Update Control Register **/
#define PWM1_PWM_SCUC			MMIO32(PWM1_BASE + 0x28)
/** PWM1_PWM_SCUP PWM Sync Channels Update Period Register **/
#define PWM1_PWM_SCUP			MMIO32(PWM1_BASE + 0x2c)
/** PWM1_PWM_SCUPUPD PWM Sync Channels Update Period Update Register **/
#define PWM1_PWM_SCUPUPD			MMIO32(PWM1_BASE + 0x30)
/** PWM1_PWM_IER2 PWM Interrupt Enable Register 2 **/
#define PWM1_PWM_IER2			MMIO32(PWM1_BASE + 0x34)
/** PWM1_PWM_IDR2 PWM Interrupt Disable Register 2 **/
#define PWM1_PWM_IDR2			MMIO32(PWM1_BASE + 0x38)
/** PWM1_PWM_IMR2 PWM Interrupt Mask Register 2 **/
#define PWM1_PWM_IMR2			MMIO32(PWM1_BASE + 0x3c)
/** PWM1_PWM_ISR2 PWM Interrupt Status Register 2 **/
#define PWM1_PWM_ISR2			MMIO32(PWM1_BASE + 0x40)
/** PWM1_PWM_OOV PWM Output Override Value Register **/
#define PWM1_PWM_OOV			MMIO32(PWM1_BASE + 0x44)
/** PWM1_PWM_OS PWM Output Selection Register **/
#define PWM1_PWM_OS			MMIO32(PWM1_BASE + 0x48)
/** PWM1_PWM_OSS PWM Output Selection Set Register **/
#define PWM1_PWM_OSS			MMIO32(PWM1_BASE + 0x4c)
/** PWM1_PWM_OSC PWM Output Selection Clear Register **/
#define PWM1_PWM_OSC			MMIO32(PWM1_BASE + 0x50)
/** PWM1_PWM_OSSUPD PWM Output Selection Set Update Register **/
#define PWM1_PWM_OSSUPD			MMIO32(PWM1_BASE + 0x54)
/** PWM1_PWM_OSCUPD PWM Output Selection Clear Update Register **/
#define PWM1_PWM_OSCUPD			MMIO32(PWM1_BASE + 0x58)
/** PWM1_PWM_FMR PWM Fault Mode Register **/
#define PWM1_PWM_FMR			MMIO32(PWM1_BASE + 0x5c)
/** PWM1_PWM_FSR PWM Fault Status Register **/
#define PWM1_PWM_FSR			MMIO32(PWM1_BASE + 0x60)
/** PWM1_PWM_FCR PWM Fault Clear Register **/
#define PWM1_PWM_FCR			MMIO32(PWM1_BASE + 0x64)
/** PWM1_PWM_FPV1 PWM Fault Protection Value Register 1 **/
#define PWM1_PWM_FPV1			MMIO32(PWM1_BASE + 0x68)
/** PWM1_PWM_FPE PWM Fault Protection Enable Register **/
#define PWM1_PWM_FPE			MMIO32(PWM1_BASE + 0x6c)
/** PWM1_PWM_ELMR[0] PWM Event Line 0 Mode Register 0 **/
#define PWM1_PWM_ELMR[0]			MMIO32(PWM1_BASE + 0x7c)
/** PWM1_PWM_ELMR[1] PWM Event Line 0 Mode Register 0 **/
#define PWM1_PWM_ELMR[1]			MMIO32(PWM1_BASE + 0x80)
/** PWM1_PWM_SSPR PWM Spread Spectrum Register **/
#define PWM1_PWM_SSPR			MMIO32(PWM1_BASE + 0xa0)
/** PWM1_PWM_SSPUP PWM Spread Spectrum Update Register **/
#define PWM1_PWM_SSPUP			MMIO32(PWM1_BASE + 0xa4)
/** PWM1_PWM_SMMR PWM Stepper Motor Mode Register **/
#define PWM1_PWM_SMMR			MMIO32(PWM1_BASE + 0xb0)
/** PWM1_PWM_FPV2 PWM Fault Protection Value 2 Register **/
#define PWM1_PWM_FPV2			MMIO32(PWM1_BASE + 0xc0)
/** PWM1_PWM_WPCR PWM Write Protection Control Register **/
#define PWM1_PWM_WPCR			MMIO32(PWM1_BASE + 0xe4)
/** PWM1_PWM_WPSR PWM Write Protection Status Register **/
#define PWM1_PWM_WPSR			MMIO32(PWM1_BASE + 0xe8)
/** PWM1_PWM_VERSION Version Register **/
#define PWM1_PWM_VERSION			MMIO32(PWM1_BASE + 0xfc)
/** PWM1_PWM_CMUPD0 PWM Channel Mode Update Register (ch_num = 0) **/
#define PWM1_PWM_CMUPD0			MMIO32(PWM1_BASE + 0x400)
/** PWM1_PWM_CMUPD1 PWM Channel Mode Update Register (ch_num = 1) **/
#define PWM1_PWM_CMUPD1			MMIO32(PWM1_BASE + 0x420)
/** PWM1_PWM_ETRG1 PWM External Trigger Register (trg_num = 1) **/
#define PWM1_PWM_ETRG1			MMIO32(PWM1_BASE + 0x42c)
/** PWM1_PWM_LEBR1 PWM Leading-Edge Blanking Register (trg_num = 1) **/
#define PWM1_PWM_LEBR1			MMIO32(PWM1_BASE + 0x430)
/** PWM1_PWM_CMUPD2 PWM Channel Mode Update Register (ch_num = 2) **/
#define PWM1_PWM_CMUPD2			MMIO32(PWM1_BASE + 0x440)
/** PWM1_PWM_ETRG2 PWM External Trigger Register (trg_num = 2) **/
#define PWM1_PWM_ETRG2			MMIO32(PWM1_BASE + 0x44c)
/** PWM1_PWM_LEBR2 PWM Leading-Edge Blanking Register (trg_num = 2) **/
#define PWM1_PWM_LEBR2			MMIO32(PWM1_BASE + 0x450)
/** PWM1_PWM_CMUPD3 PWM Channel Mode Update Register (ch_num = 3) **/
#define PWM1_PWM_CMUPD3			MMIO32(PWM1_BASE + 0x460)

/**@}*/


/** @defgroup pwm1_pwm_clk PWMCLK PWM Clock Register
@{*/


#define PWM1_PWM_CLK_PREB_SHIFT		24
#define PWM1_PWM_CLK_PREB_MASK		0x0f
/** @defgroup pwm1_pwm_clk_preb PREB CLKB Source Clock Selection
@{*/
/**@}*/


#define PWM1_PWM_CLK_DIVB_SHIFT		16
#define PWM1_PWM_CLK_DIVB_MASK		0xff
/** @defgroup pwm1_pwm_clk_divb DIVB CLKB Divide Factor
@{*/
/**@}*/


#define PWM1_PWM_CLK_PREA_SHIFT		8
#define PWM1_PWM_CLK_PREA_MASK		0x0f
/** @defgroup pwm1_pwm_clk_prea PREA CLKA Source Clock Selection
@{*/
/**@}*/


#define PWM1_PWM_CLK_DIVA_SHIFT		0
#define PWM1_PWM_CLK_DIVA_MASK		0xff
/** @defgroup pwm1_pwm_clk_diva DIVA CLKA Divide Factor
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_ena PWMENA PWM Enable Register
@{*/

/** PWM1_PWM_ENA_CHID3 Channel ID **/
#define PWM1_PWM_ENA_CHID3		(1 << 3)
/** PWM1_PWM_ENA_CHID2 Channel ID **/
#define PWM1_PWM_ENA_CHID2		(1 << 2)
/** PWM1_PWM_ENA_CHID1 Channel ID **/
#define PWM1_PWM_ENA_CHID1		(1 << 1)
/** PWM1_PWM_ENA_CHID0 Channel ID **/
#define PWM1_PWM_ENA_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_dis PWMDIS PWM Disable Register
@{*/

/** PWM1_PWM_DIS_CHID3 Channel ID **/
#define PWM1_PWM_DIS_CHID3		(1 << 3)
/** PWM1_PWM_DIS_CHID2 Channel ID **/
#define PWM1_PWM_DIS_CHID2		(1 << 2)
/** PWM1_PWM_DIS_CHID1 Channel ID **/
#define PWM1_PWM_DIS_CHID1		(1 << 1)
/** PWM1_PWM_DIS_CHID0 Channel ID **/
#define PWM1_PWM_DIS_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_sr PWMSR PWM Status Register
@{*/

/** PWM1_PWM_SR_CHID3 Channel ID **/
#define PWM1_PWM_SR_CHID3		(1 << 3)
/** PWM1_PWM_SR_CHID2 Channel ID **/
#define PWM1_PWM_SR_CHID2		(1 << 2)
/** PWM1_PWM_SR_CHID1 Channel ID **/
#define PWM1_PWM_SR_CHID1		(1 << 1)
/** PWM1_PWM_SR_CHID0 Channel ID **/
#define PWM1_PWM_SR_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_ier1 PWMIER1 PWM Interrupt Enable Register 1
@{*/

/** PWM1_PWM_IER1_FCHID3 Fault Protection Trigger on Channel 3 Interrupt Enable **/
#define PWM1_PWM_IER1_FCHID3		(1 << 19)
/** PWM1_PWM_IER1_FCHID2 Fault Protection Trigger on Channel 2 Interrupt Enable **/
#define PWM1_PWM_IER1_FCHID2		(1 << 18)
/** PWM1_PWM_IER1_FCHID1 Fault Protection Trigger on Channel 1 Interrupt Enable **/
#define PWM1_PWM_IER1_FCHID1		(1 << 17)
/** PWM1_PWM_IER1_FCHID0 Fault Protection Trigger on Channel 0 Interrupt Enable **/
#define PWM1_PWM_IER1_FCHID0		(1 << 16)
/** PWM1_PWM_IER1_CHID3 Counter Event on Channel 3 Interrupt Enable **/
#define PWM1_PWM_IER1_CHID3		(1 << 3)
/** PWM1_PWM_IER1_CHID2 Counter Event on Channel 2 Interrupt Enable **/
#define PWM1_PWM_IER1_CHID2		(1 << 2)
/** PWM1_PWM_IER1_CHID1 Counter Event on Channel 1 Interrupt Enable **/
#define PWM1_PWM_IER1_CHID1		(1 << 1)
/** PWM1_PWM_IER1_CHID0 Counter Event on Channel 0 Interrupt Enable **/
#define PWM1_PWM_IER1_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_idr1 PWMIDR1 PWM Interrupt Disable Register 1
@{*/

/** PWM1_PWM_IDR1_FCHID3 Fault Protection Trigger on Channel 3 Interrupt Disable **/
#define PWM1_PWM_IDR1_FCHID3		(1 << 19)
/** PWM1_PWM_IDR1_FCHID2 Fault Protection Trigger on Channel 2 Interrupt Disable **/
#define PWM1_PWM_IDR1_FCHID2		(1 << 18)
/** PWM1_PWM_IDR1_FCHID1 Fault Protection Trigger on Channel 1 Interrupt Disable **/
#define PWM1_PWM_IDR1_FCHID1		(1 << 17)
/** PWM1_PWM_IDR1_FCHID0 Fault Protection Trigger on Channel 0 Interrupt Disable **/
#define PWM1_PWM_IDR1_FCHID0		(1 << 16)
/** PWM1_PWM_IDR1_CHID3 Counter Event on Channel 3 Interrupt Disable **/
#define PWM1_PWM_IDR1_CHID3		(1 << 3)
/** PWM1_PWM_IDR1_CHID2 Counter Event on Channel 2 Interrupt Disable **/
#define PWM1_PWM_IDR1_CHID2		(1 << 2)
/** PWM1_PWM_IDR1_CHID1 Counter Event on Channel 1 Interrupt Disable **/
#define PWM1_PWM_IDR1_CHID1		(1 << 1)
/** PWM1_PWM_IDR1_CHID0 Counter Event on Channel 0 Interrupt Disable **/
#define PWM1_PWM_IDR1_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_imr1 PWMIMR1 PWM Interrupt Mask Register 1
@{*/

/** PWM1_PWM_IMR1_FCHID3 Fault Protection Trigger on Channel 3 Interrupt Mask **/
#define PWM1_PWM_IMR1_FCHID3		(1 << 19)
/** PWM1_PWM_IMR1_FCHID2 Fault Protection Trigger on Channel 2 Interrupt Mask **/
#define PWM1_PWM_IMR1_FCHID2		(1 << 18)
/** PWM1_PWM_IMR1_FCHID1 Fault Protection Trigger on Channel 1 Interrupt Mask **/
#define PWM1_PWM_IMR1_FCHID1		(1 << 17)
/** PWM1_PWM_IMR1_FCHID0 Fault Protection Trigger on Channel 0 Interrupt Mask **/
#define PWM1_PWM_IMR1_FCHID0		(1 << 16)
/** PWM1_PWM_IMR1_CHID3 Counter Event on Channel 3 Interrupt Mask **/
#define PWM1_PWM_IMR1_CHID3		(1 << 3)
/** PWM1_PWM_IMR1_CHID2 Counter Event on Channel 2 Interrupt Mask **/
#define PWM1_PWM_IMR1_CHID2		(1 << 2)
/** PWM1_PWM_IMR1_CHID1 Counter Event on Channel 1 Interrupt Mask **/
#define PWM1_PWM_IMR1_CHID1		(1 << 1)
/** PWM1_PWM_IMR1_CHID0 Counter Event on Channel 0 Interrupt Mask **/
#define PWM1_PWM_IMR1_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_isr1 PWMISR1 PWM Interrupt Status Register 1
@{*/

/** PWM1_PWM_ISR1_FCHID3 Fault Protection Trigger on Channel 3 **/
#define PWM1_PWM_ISR1_FCHID3		(1 << 19)
/** PWM1_PWM_ISR1_FCHID2 Fault Protection Trigger on Channel 2 **/
#define PWM1_PWM_ISR1_FCHID2		(1 << 18)
/** PWM1_PWM_ISR1_FCHID1 Fault Protection Trigger on Channel 1 **/
#define PWM1_PWM_ISR1_FCHID1		(1 << 17)
/** PWM1_PWM_ISR1_FCHID0 Fault Protection Trigger on Channel 0 **/
#define PWM1_PWM_ISR1_FCHID0		(1 << 16)
/** PWM1_PWM_ISR1_CHID3 Counter Event on Channel 3 **/
#define PWM1_PWM_ISR1_CHID3		(1 << 3)
/** PWM1_PWM_ISR1_CHID2 Counter Event on Channel 2 **/
#define PWM1_PWM_ISR1_CHID2		(1 << 2)
/** PWM1_PWM_ISR1_CHID1 Counter Event on Channel 1 **/
#define PWM1_PWM_ISR1_CHID1		(1 << 1)
/** PWM1_PWM_ISR1_CHID0 Counter Event on Channel 0 **/
#define PWM1_PWM_ISR1_CHID0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_scm PWMSCM PWM Sync Channels Mode Register
@{*/


#define PWM1_PWM_SCM_PTRCS_SHIFT		21
#define PWM1_PWM_SCM_PTRCS_MASK		0x07
/** @defgroup pwm1_pwm_scm_ptrcs PTRCS DMA Controller Transfer Request Comparison Selection
@{*/
/**@}*/

/** PWM1_PWM_SCM_PTRM DMA Controller Transfer Request Mode **/
#define PWM1_PWM_SCM_PTRM		(1 << 20)

#define PWM1_PWM_SCM_UPDM_SHIFT		16
#define PWM1_PWM_SCM_UPDM_MASK		0x03
/** @defgroup pwm1_pwm_scm_updm UPDM Synchronous Channels Update Mode
@{*/
/**@}*/

/** PWM1_PWM_SCM_SYNC3 Synchronous Channel 3 **/
#define PWM1_PWM_SCM_SYNC3		(1 << 3)
/** PWM1_PWM_SCM_SYNC2 Synchronous Channel 2 **/
#define PWM1_PWM_SCM_SYNC2		(1 << 2)
/** PWM1_PWM_SCM_SYNC1 Synchronous Channel 1 **/
#define PWM1_PWM_SCM_SYNC1		(1 << 1)
/** PWM1_PWM_SCM_SYNC0 Synchronous Channel 0 **/
#define PWM1_PWM_SCM_SYNC0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_dmar PWMDMAR PWM DMA Register
@{*/


#define PWM1_PWM_DMAR_DMADUTY_SHIFT		0
#define PWM1_PWM_DMAR_DMADUTY_MASK		0xffffff
/** @defgroup pwm1_pwm_dmar_dmaduty DMADUTY Duty-Cycle Holding Register for DMA Access
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_scuc PWMSCUC PWM Sync Channels Update Control Register
@{*/

/** PWM1_PWM_SCUC_UPDULOCK Synchronous Channels Update Unlock **/
#define PWM1_PWM_SCUC_UPDULOCK		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_scup PWMSCUP PWM Sync Channels Update Period Register
@{*/


#define PWM1_PWM_SCUP_UPRCNT_SHIFT		4
#define PWM1_PWM_SCUP_UPRCNT_MASK		0x0f
/** @defgroup pwm1_pwm_scup_uprcnt UPRCNT Update Period Counter
@{*/
/**@}*/


#define PWM1_PWM_SCUP_UPR_SHIFT		0
#define PWM1_PWM_SCUP_UPR_MASK		0x0f
/** @defgroup pwm1_pwm_scup_upr UPR Update Period
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_scupupd PWMSCUPUPD PWM Sync Channels Update Period Update Register
@{*/


#define PWM1_PWM_SCUPUPD_UPRUPD_SHIFT		0
#define PWM1_PWM_SCUPUPD_UPRUPD_MASK		0x0f
/** @defgroup pwm1_pwm_scupupd_uprupd UPRUPD Update Period Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_ier2 PWMIER2 PWM Interrupt Enable Register 2
@{*/

/** PWM1_PWM_IER2_CMPU7 Comparison 7 Update Interrupt Enable **/
#define PWM1_PWM_IER2_CMPU7		(1 << 23)
/** PWM1_PWM_IER2_CMPU6 Comparison 6 Update Interrupt Enable **/
#define PWM1_PWM_IER2_CMPU6		(1 << 22)
/** PWM1_PWM_IER2_CMPU5 Comparison 5 Update Interrupt Enable **/
#define PWM1_PWM_IER2_CMPU5		(1 << 21)
/** PWM1_PWM_IER2_CMPU4 Comparison 4 Update Interrupt Enable **/
#define PWM1_PWM_IER2_CMPU4		(1 << 20)
/** PWM1_PWM_IER2_CMPU3 Comparison 3 Update Interrupt Enable **/
#define PWM1_PWM_IER2_CMPU3		(1 << 19)
/** PWM1_PWM_IER2_CMPU2 Comparison 2 Update Interrupt Enable **/
#define PWM1_PWM_IER2_CMPU2		(1 << 18)
/** PWM1_PWM_IER2_CMPU1 Comparison 1 Update Interrupt Enable **/
#define PWM1_PWM_IER2_CMPU1		(1 << 17)
/** PWM1_PWM_IER2_CMPU0 Comparison 0 Update Interrupt Enable **/
#define PWM1_PWM_IER2_CMPU0		(1 << 16)
/** PWM1_PWM_IER2_CMPM7 Comparison 7 Match Interrupt Enable **/
#define PWM1_PWM_IER2_CMPM7		(1 << 15)
/** PWM1_PWM_IER2_CMPM6 Comparison 6 Match Interrupt Enable **/
#define PWM1_PWM_IER2_CMPM6		(1 << 14)
/** PWM1_PWM_IER2_CMPM5 Comparison 5 Match Interrupt Enable **/
#define PWM1_PWM_IER2_CMPM5		(1 << 13)
/** PWM1_PWM_IER2_CMPM4 Comparison 4 Match Interrupt Enable **/
#define PWM1_PWM_IER2_CMPM4		(1 << 12)
/** PWM1_PWM_IER2_CMPM3 Comparison 3 Match Interrupt Enable **/
#define PWM1_PWM_IER2_CMPM3		(1 << 11)
/** PWM1_PWM_IER2_CMPM2 Comparison 2 Match Interrupt Enable **/
#define PWM1_PWM_IER2_CMPM2		(1 << 10)
/** PWM1_PWM_IER2_CMPM1 Comparison 1 Match Interrupt Enable **/
#define PWM1_PWM_IER2_CMPM1		(1 << 9)
/** PWM1_PWM_IER2_CMPM0 Comparison 0 Match Interrupt Enable **/
#define PWM1_PWM_IER2_CMPM0		(1 << 8)
/** PWM1_PWM_IER2_UNRE Synchronous Channels Update Underrun Error Interrupt Enable **/
#define PWM1_PWM_IER2_UNRE		(1 << 3)
/** PWM1_PWM_IER2_WRDY Write Ready for Synchronous Channels Update Interrupt Enable **/
#define PWM1_PWM_IER2_WRDY		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_idr2 PWMIDR2 PWM Interrupt Disable Register 2
@{*/

/** PWM1_PWM_IDR2_CMPU7 Comparison 7 Update Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPU7		(1 << 23)
/** PWM1_PWM_IDR2_CMPU6 Comparison 6 Update Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPU6		(1 << 22)
/** PWM1_PWM_IDR2_CMPU5 Comparison 5 Update Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPU5		(1 << 21)
/** PWM1_PWM_IDR2_CMPU4 Comparison 4 Update Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPU4		(1 << 20)
/** PWM1_PWM_IDR2_CMPU3 Comparison 3 Update Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPU3		(1 << 19)
/** PWM1_PWM_IDR2_CMPU2 Comparison 2 Update Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPU2		(1 << 18)
/** PWM1_PWM_IDR2_CMPU1 Comparison 1 Update Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPU1		(1 << 17)
/** PWM1_PWM_IDR2_CMPU0 Comparison 0 Update Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPU0		(1 << 16)
/** PWM1_PWM_IDR2_CMPM7 Comparison 7 Match Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPM7		(1 << 15)
/** PWM1_PWM_IDR2_CMPM6 Comparison 6 Match Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPM6		(1 << 14)
/** PWM1_PWM_IDR2_CMPM5 Comparison 5 Match Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPM5		(1 << 13)
/** PWM1_PWM_IDR2_CMPM4 Comparison 4 Match Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPM4		(1 << 12)
/** PWM1_PWM_IDR2_CMPM3 Comparison 3 Match Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPM3		(1 << 11)
/** PWM1_PWM_IDR2_CMPM2 Comparison 2 Match Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPM2		(1 << 10)
/** PWM1_PWM_IDR2_CMPM1 Comparison 1 Match Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPM1		(1 << 9)
/** PWM1_PWM_IDR2_CMPM0 Comparison 0 Match Interrupt Disable **/
#define PWM1_PWM_IDR2_CMPM0		(1 << 8)
/** PWM1_PWM_IDR2_UNRE Synchronous Channels Update Underrun Error Interrupt Disable **/
#define PWM1_PWM_IDR2_UNRE		(1 << 3)
/** PWM1_PWM_IDR2_WRDY Write Ready for Synchronous Channels Update Interrupt Disable **/
#define PWM1_PWM_IDR2_WRDY		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_imr2 PWMIMR2 PWM Interrupt Mask Register 2
@{*/

/** PWM1_PWM_IMR2_CMPU7 Comparison 7 Update Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPU7		(1 << 23)
/** PWM1_PWM_IMR2_CMPU6 Comparison 6 Update Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPU6		(1 << 22)
/** PWM1_PWM_IMR2_CMPU5 Comparison 5 Update Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPU5		(1 << 21)
/** PWM1_PWM_IMR2_CMPU4 Comparison 4 Update Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPU4		(1 << 20)
/** PWM1_PWM_IMR2_CMPU3 Comparison 3 Update Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPU3		(1 << 19)
/** PWM1_PWM_IMR2_CMPU2 Comparison 2 Update Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPU2		(1 << 18)
/** PWM1_PWM_IMR2_CMPU1 Comparison 1 Update Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPU1		(1 << 17)
/** PWM1_PWM_IMR2_CMPU0 Comparison 0 Update Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPU0		(1 << 16)
/** PWM1_PWM_IMR2_CMPM7 Comparison 7 Match Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPM7		(1 << 15)
/** PWM1_PWM_IMR2_CMPM6 Comparison 6 Match Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPM6		(1 << 14)
/** PWM1_PWM_IMR2_CMPM5 Comparison 5 Match Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPM5		(1 << 13)
/** PWM1_PWM_IMR2_CMPM4 Comparison 4 Match Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPM4		(1 << 12)
/** PWM1_PWM_IMR2_CMPM3 Comparison 3 Match Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPM3		(1 << 11)
/** PWM1_PWM_IMR2_CMPM2 Comparison 2 Match Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPM2		(1 << 10)
/** PWM1_PWM_IMR2_CMPM1 Comparison 1 Match Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPM1		(1 << 9)
/** PWM1_PWM_IMR2_CMPM0 Comparison 0 Match Interrupt Mask **/
#define PWM1_PWM_IMR2_CMPM0		(1 << 8)
/** PWM1_PWM_IMR2_UNRE Synchronous Channels Update Underrun Error Interrupt Mask **/
#define PWM1_PWM_IMR2_UNRE		(1 << 3)
/** PWM1_PWM_IMR2_WRDY Write Ready for Synchronous Channels Update Interrupt Mask **/
#define PWM1_PWM_IMR2_WRDY		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_isr2 PWMISR2 PWM Interrupt Status Register 2
@{*/

/** PWM1_PWM_ISR2_CMPU7 Comparison 7 Update **/
#define PWM1_PWM_ISR2_CMPU7		(1 << 23)
/** PWM1_PWM_ISR2_CMPU6 Comparison 6 Update **/
#define PWM1_PWM_ISR2_CMPU6		(1 << 22)
/** PWM1_PWM_ISR2_CMPU5 Comparison 5 Update **/
#define PWM1_PWM_ISR2_CMPU5		(1 << 21)
/** PWM1_PWM_ISR2_CMPU4 Comparison 4 Update **/
#define PWM1_PWM_ISR2_CMPU4		(1 << 20)
/** PWM1_PWM_ISR2_CMPU3 Comparison 3 Update **/
#define PWM1_PWM_ISR2_CMPU3		(1 << 19)
/** PWM1_PWM_ISR2_CMPU2 Comparison 2 Update **/
#define PWM1_PWM_ISR2_CMPU2		(1 << 18)
/** PWM1_PWM_ISR2_CMPU1 Comparison 1 Update **/
#define PWM1_PWM_ISR2_CMPU1		(1 << 17)
/** PWM1_PWM_ISR2_CMPU0 Comparison 0 Update **/
#define PWM1_PWM_ISR2_CMPU0		(1 << 16)
/** PWM1_PWM_ISR2_CMPM7 Comparison 7 Match **/
#define PWM1_PWM_ISR2_CMPM7		(1 << 15)
/** PWM1_PWM_ISR2_CMPM6 Comparison 6 Match **/
#define PWM1_PWM_ISR2_CMPM6		(1 << 14)
/** PWM1_PWM_ISR2_CMPM5 Comparison 5 Match **/
#define PWM1_PWM_ISR2_CMPM5		(1 << 13)
/** PWM1_PWM_ISR2_CMPM4 Comparison 4 Match **/
#define PWM1_PWM_ISR2_CMPM4		(1 << 12)
/** PWM1_PWM_ISR2_CMPM3 Comparison 3 Match **/
#define PWM1_PWM_ISR2_CMPM3		(1 << 11)
/** PWM1_PWM_ISR2_CMPM2 Comparison 2 Match **/
#define PWM1_PWM_ISR2_CMPM2		(1 << 10)
/** PWM1_PWM_ISR2_CMPM1 Comparison 1 Match **/
#define PWM1_PWM_ISR2_CMPM1		(1 << 9)
/** PWM1_PWM_ISR2_CMPM0 Comparison 0 Match **/
#define PWM1_PWM_ISR2_CMPM0		(1 << 8)
/** PWM1_PWM_ISR2_UNRE Synchronous Channels Update Underrun Error **/
#define PWM1_PWM_ISR2_UNRE		(1 << 3)
/** PWM1_PWM_ISR2_WRDY Write Ready for Synchronous Channels Update **/
#define PWM1_PWM_ISR2_WRDY		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_oov PWMOOV PWM Output Override Value Register
@{*/

/** PWM1_PWM_OOV_OOVL3 Output Override Value for PWML output of the channel 3 **/
#define PWM1_PWM_OOV_OOVL3		(1 << 19)
/** PWM1_PWM_OOV_OOVL2 Output Override Value for PWML output of the channel 2 **/
#define PWM1_PWM_OOV_OOVL2		(1 << 18)
/** PWM1_PWM_OOV_OOVL1 Output Override Value for PWML output of the channel 1 **/
#define PWM1_PWM_OOV_OOVL1		(1 << 17)
/** PWM1_PWM_OOV_OOVL0 Output Override Value for PWML output of the channel 0 **/
#define PWM1_PWM_OOV_OOVL0		(1 << 16)
/** PWM1_PWM_OOV_OOVH3 Output Override Value for PWMH output of the channel 3 **/
#define PWM1_PWM_OOV_OOVH3		(1 << 3)
/** PWM1_PWM_OOV_OOVH2 Output Override Value for PWMH output of the channel 2 **/
#define PWM1_PWM_OOV_OOVH2		(1 << 2)
/** PWM1_PWM_OOV_OOVH1 Output Override Value for PWMH output of the channel 1 **/
#define PWM1_PWM_OOV_OOVH1		(1 << 1)
/** PWM1_PWM_OOV_OOVH0 Output Override Value for PWMH output of the channel 0 **/
#define PWM1_PWM_OOV_OOVH0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_os PWMOS PWM Output Selection Register
@{*/

/** PWM1_PWM_OS_OSL3 Output Selection for PWML output of the channel 3 **/
#define PWM1_PWM_OS_OSL3		(1 << 19)
/** PWM1_PWM_OS_OSL2 Output Selection for PWML output of the channel 2 **/
#define PWM1_PWM_OS_OSL2		(1 << 18)
/** PWM1_PWM_OS_OSL1 Output Selection for PWML output of the channel 1 **/
#define PWM1_PWM_OS_OSL1		(1 << 17)
/** PWM1_PWM_OS_OSL0 Output Selection for PWML output of the channel 0 **/
#define PWM1_PWM_OS_OSL0		(1 << 16)
/** PWM1_PWM_OS_OSH3 Output Selection for PWMH output of the channel 3 **/
#define PWM1_PWM_OS_OSH3		(1 << 3)
/** PWM1_PWM_OS_OSH2 Output Selection for PWMH output of the channel 2 **/
#define PWM1_PWM_OS_OSH2		(1 << 2)
/** PWM1_PWM_OS_OSH1 Output Selection for PWMH output of the channel 1 **/
#define PWM1_PWM_OS_OSH1		(1 << 1)
/** PWM1_PWM_OS_OSH0 Output Selection for PWMH output of the channel 0 **/
#define PWM1_PWM_OS_OSH0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_oss PWMOSS PWM Output Selection Set Register
@{*/

/** PWM1_PWM_OSS_OSSL3 Output Selection Set for PWML output of the channel 3 **/
#define PWM1_PWM_OSS_OSSL3		(1 << 19)
/** PWM1_PWM_OSS_OSSL2 Output Selection Set for PWML output of the channel 2 **/
#define PWM1_PWM_OSS_OSSL2		(1 << 18)
/** PWM1_PWM_OSS_OSSL1 Output Selection Set for PWML output of the channel 1 **/
#define PWM1_PWM_OSS_OSSL1		(1 << 17)
/** PWM1_PWM_OSS_OSSL0 Output Selection Set for PWML output of the channel 0 **/
#define PWM1_PWM_OSS_OSSL0		(1 << 16)
/** PWM1_PWM_OSS_OSSH3 Output Selection Set for PWMH output of the channel 3 **/
#define PWM1_PWM_OSS_OSSH3		(1 << 3)
/** PWM1_PWM_OSS_OSSH2 Output Selection Set for PWMH output of the channel 2 **/
#define PWM1_PWM_OSS_OSSH2		(1 << 2)
/** PWM1_PWM_OSS_OSSH1 Output Selection Set for PWMH output of the channel 1 **/
#define PWM1_PWM_OSS_OSSH1		(1 << 1)
/** PWM1_PWM_OSS_OSSH0 Output Selection Set for PWMH output of the channel 0 **/
#define PWM1_PWM_OSS_OSSH0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_osc PWMOSC PWM Output Selection Clear Register
@{*/

/** PWM1_PWM_OSC_OSCL3 Output Selection Clear for PWML output of the channel 3 **/
#define PWM1_PWM_OSC_OSCL3		(1 << 19)
/** PWM1_PWM_OSC_OSCL2 Output Selection Clear for PWML output of the channel 2 **/
#define PWM1_PWM_OSC_OSCL2		(1 << 18)
/** PWM1_PWM_OSC_OSCL1 Output Selection Clear for PWML output of the channel 1 **/
#define PWM1_PWM_OSC_OSCL1		(1 << 17)
/** PWM1_PWM_OSC_OSCL0 Output Selection Clear for PWML output of the channel 0 **/
#define PWM1_PWM_OSC_OSCL0		(1 << 16)
/** PWM1_PWM_OSC_OSCH3 Output Selection Clear for PWMH output of the channel 3 **/
#define PWM1_PWM_OSC_OSCH3		(1 << 3)
/** PWM1_PWM_OSC_OSCH2 Output Selection Clear for PWMH output of the channel 2 **/
#define PWM1_PWM_OSC_OSCH2		(1 << 2)
/** PWM1_PWM_OSC_OSCH1 Output Selection Clear for PWMH output of the channel 1 **/
#define PWM1_PWM_OSC_OSCH1		(1 << 1)
/** PWM1_PWM_OSC_OSCH0 Output Selection Clear for PWMH output of the channel 0 **/
#define PWM1_PWM_OSC_OSCH0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_ossupd PWMOSSUPD PWM Output Selection Set Update Register
@{*/

/** PWM1_PWM_OSSUPD_OSSUPL3 Output Selection Set for PWML output of the channel 3 **/
#define PWM1_PWM_OSSUPD_OSSUPL3		(1 << 19)
/** PWM1_PWM_OSSUPD_OSSUPL2 Output Selection Set for PWML output of the channel 2 **/
#define PWM1_PWM_OSSUPD_OSSUPL2		(1 << 18)
/** PWM1_PWM_OSSUPD_OSSUPL1 Output Selection Set for PWML output of the channel 1 **/
#define PWM1_PWM_OSSUPD_OSSUPL1		(1 << 17)
/** PWM1_PWM_OSSUPD_OSSUPL0 Output Selection Set for PWML output of the channel 0 **/
#define PWM1_PWM_OSSUPD_OSSUPL0		(1 << 16)
/** PWM1_PWM_OSSUPD_OSSUPH3 Output Selection Set for PWMH output of the channel 3 **/
#define PWM1_PWM_OSSUPD_OSSUPH3		(1 << 3)
/** PWM1_PWM_OSSUPD_OSSUPH2 Output Selection Set for PWMH output of the channel 2 **/
#define PWM1_PWM_OSSUPD_OSSUPH2		(1 << 2)
/** PWM1_PWM_OSSUPD_OSSUPH1 Output Selection Set for PWMH output of the channel 1 **/
#define PWM1_PWM_OSSUPD_OSSUPH1		(1 << 1)
/** PWM1_PWM_OSSUPD_OSSUPH0 Output Selection Set for PWMH output of the channel 0 **/
#define PWM1_PWM_OSSUPD_OSSUPH0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_oscupd PWMOSCUPD PWM Output Selection Clear Update Register
@{*/

/** PWM1_PWM_OSCUPD_OSCUPL3 Output Selection Clear for PWML output of the channel 3 **/
#define PWM1_PWM_OSCUPD_OSCUPL3		(1 << 19)
/** PWM1_PWM_OSCUPD_OSCUPL2 Output Selection Clear for PWML output of the channel 2 **/
#define PWM1_PWM_OSCUPD_OSCUPL2		(1 << 18)
/** PWM1_PWM_OSCUPD_OSCUPL1 Output Selection Clear for PWML output of the channel 1 **/
#define PWM1_PWM_OSCUPD_OSCUPL1		(1 << 17)
/** PWM1_PWM_OSCUPD_OSCUPL0 Output Selection Clear for PWML output of the channel 0 **/
#define PWM1_PWM_OSCUPD_OSCUPL0		(1 << 16)
/** PWM1_PWM_OSCUPD_OSCUPH3 Output Selection Clear for PWMH output of the channel 3 **/
#define PWM1_PWM_OSCUPD_OSCUPH3		(1 << 3)
/** PWM1_PWM_OSCUPD_OSCUPH2 Output Selection Clear for PWMH output of the channel 2 **/
#define PWM1_PWM_OSCUPD_OSCUPH2		(1 << 2)
/** PWM1_PWM_OSCUPD_OSCUPH1 Output Selection Clear for PWMH output of the channel 1 **/
#define PWM1_PWM_OSCUPD_OSCUPH1		(1 << 1)
/** PWM1_PWM_OSCUPD_OSCUPH0 Output Selection Clear for PWMH output of the channel 0 **/
#define PWM1_PWM_OSCUPD_OSCUPH0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_fmr PWMFMR PWM Fault Mode Register
@{*/


#define PWM1_PWM_FMR_FFIL_SHIFT		16
#define PWM1_PWM_FMR_FFIL_MASK		0xff
/** @defgroup pwm1_pwm_fmr_ffil FFIL Fault Filtering
@{*/
/**@}*/


#define PWM1_PWM_FMR_FMOD_SHIFT		8
#define PWM1_PWM_FMR_FMOD_MASK		0xff
/** @defgroup pwm1_pwm_fmr_fmod FMOD Fault Activation Mode
@{*/
/**@}*/


#define PWM1_PWM_FMR_FPOL_SHIFT		0
#define PWM1_PWM_FMR_FPOL_MASK		0xff
/** @defgroup pwm1_pwm_fmr_fpol FPOL Fault Polarity
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_fsr PWMFSR PWM Fault Status Register
@{*/


#define PWM1_PWM_FSR_FS_SHIFT		8
#define PWM1_PWM_FSR_FS_MASK		0xff
/** @defgroup pwm1_pwm_fsr_fs FS Fault Status
@{*/
/**@}*/


#define PWM1_PWM_FSR_FIV_SHIFT		0
#define PWM1_PWM_FSR_FIV_MASK		0xff
/** @defgroup pwm1_pwm_fsr_fiv FIV Fault Input Value
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_fcr PWMFCR PWM Fault Clear Register
@{*/


#define PWM1_PWM_FCR_FCLR_SHIFT		0
#define PWM1_PWM_FCR_FCLR_MASK		0xff
/** @defgroup pwm1_pwm_fcr_fclr FCLR Fault Clear
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_fpv1 PWMFPV1 PWM Fault Protection Value Register 1
@{*/

/** PWM1_PWM_FPV1_FPVL3 Fault Protection Value for PWML output on channel 3 **/
#define PWM1_PWM_FPV1_FPVL3		(1 << 19)
/** PWM1_PWM_FPV1_FPVL2 Fault Protection Value for PWML output on channel 2 **/
#define PWM1_PWM_FPV1_FPVL2		(1 << 18)
/** PWM1_PWM_FPV1_FPVL1 Fault Protection Value for PWML output on channel 1 **/
#define PWM1_PWM_FPV1_FPVL1		(1 << 17)
/** PWM1_PWM_FPV1_FPVL0 Fault Protection Value for PWML output on channel 0 **/
#define PWM1_PWM_FPV1_FPVL0		(1 << 16)
/** PWM1_PWM_FPV1_FPVH3 Fault Protection Value for PWMH output on channel 3 **/
#define PWM1_PWM_FPV1_FPVH3		(1 << 3)
/** PWM1_PWM_FPV1_FPVH2 Fault Protection Value for PWMH output on channel 2 **/
#define PWM1_PWM_FPV1_FPVH2		(1 << 2)
/** PWM1_PWM_FPV1_FPVH1 Fault Protection Value for PWMH output on channel 1 **/
#define PWM1_PWM_FPV1_FPVH1		(1 << 1)
/** PWM1_PWM_FPV1_FPVH0 Fault Protection Value for PWMH output on channel 0 **/
#define PWM1_PWM_FPV1_FPVH0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_fpe PWMFPE PWM Fault Protection Enable Register
@{*/


#define PWM1_PWM_FPE_FPE3_SHIFT		24
#define PWM1_PWM_FPE_FPE3_MASK		0xff
/** @defgroup pwm1_pwm_fpe_fpe3 FPE3 Fault Protection Enable for channel 3
@{*/
/**@}*/


#define PWM1_PWM_FPE_FPE2_SHIFT		16
#define PWM1_PWM_FPE_FPE2_MASK		0xff
/** @defgroup pwm1_pwm_fpe_fpe2 FPE2 Fault Protection Enable for channel 2
@{*/
/**@}*/


#define PWM1_PWM_FPE_FPE1_SHIFT		8
#define PWM1_PWM_FPE_FPE1_MASK		0xff
/** @defgroup pwm1_pwm_fpe_fpe1 FPE1 Fault Protection Enable for channel 1
@{*/
/**@}*/


#define PWM1_PWM_FPE_FPE0_SHIFT		0
#define PWM1_PWM_FPE_FPE0_MASK		0xff
/** @defgroup pwm1_pwm_fpe_fpe0 FPE0 Fault Protection Enable for channel 0
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_elmr[0] PWMELMR[0] PWM Event Line 0 Mode Register 0
@{*/

/** PWM1_PWM_ELMR[0]_CSEL7 Comparison 7 Selection **/
#define PWM1_PWM_ELMR[0]_CSEL7		(1 << 7)
/** PWM1_PWM_ELMR[0]_CSEL6 Comparison 6 Selection **/
#define PWM1_PWM_ELMR[0]_CSEL6		(1 << 6)
/** PWM1_PWM_ELMR[0]_CSEL5 Comparison 5 Selection **/
#define PWM1_PWM_ELMR[0]_CSEL5		(1 << 5)
/** PWM1_PWM_ELMR[0]_CSEL4 Comparison 4 Selection **/
#define PWM1_PWM_ELMR[0]_CSEL4		(1 << 4)
/** PWM1_PWM_ELMR[0]_CSEL3 Comparison 3 Selection **/
#define PWM1_PWM_ELMR[0]_CSEL3		(1 << 3)
/** PWM1_PWM_ELMR[0]_CSEL2 Comparison 2 Selection **/
#define PWM1_PWM_ELMR[0]_CSEL2		(1 << 2)
/** PWM1_PWM_ELMR[0]_CSEL1 Comparison 1 Selection **/
#define PWM1_PWM_ELMR[0]_CSEL1		(1 << 1)
/** PWM1_PWM_ELMR[0]_CSEL0 Comparison 0 Selection **/
#define PWM1_PWM_ELMR[0]_CSEL0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_elmr[1] PWMELMR[1] PWM Event Line 0 Mode Register 0
@{*/

/** PWM1_PWM_ELMR[1]_CSEL7 Comparison 7 Selection **/
#define PWM1_PWM_ELMR[1]_CSEL7		(1 << 7)
/** PWM1_PWM_ELMR[1]_CSEL6 Comparison 6 Selection **/
#define PWM1_PWM_ELMR[1]_CSEL6		(1 << 6)
/** PWM1_PWM_ELMR[1]_CSEL5 Comparison 5 Selection **/
#define PWM1_PWM_ELMR[1]_CSEL5		(1 << 5)
/** PWM1_PWM_ELMR[1]_CSEL4 Comparison 4 Selection **/
#define PWM1_PWM_ELMR[1]_CSEL4		(1 << 4)
/** PWM1_PWM_ELMR[1]_CSEL3 Comparison 3 Selection **/
#define PWM1_PWM_ELMR[1]_CSEL3		(1 << 3)
/** PWM1_PWM_ELMR[1]_CSEL2 Comparison 2 Selection **/
#define PWM1_PWM_ELMR[1]_CSEL2		(1 << 2)
/** PWM1_PWM_ELMR[1]_CSEL1 Comparison 1 Selection **/
#define PWM1_PWM_ELMR[1]_CSEL1		(1 << 1)
/** PWM1_PWM_ELMR[1]_CSEL0 Comparison 0 Selection **/
#define PWM1_PWM_ELMR[1]_CSEL0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_sspr PWMSSPR PWM Spread Spectrum Register
@{*/

/** PWM1_PWM_SSPR_SPRDM Spread Spectrum Counter Mode **/
#define PWM1_PWM_SSPR_SPRDM		(1 << 24)

#define PWM1_PWM_SSPR_SPRD_SHIFT		0
#define PWM1_PWM_SSPR_SPRD_MASK		0xffffff
/** @defgroup pwm1_pwm_sspr_sprd SPRD Spread Spectrum Limit Value
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_sspup PWMSSPUP PWM Spread Spectrum Update Register
@{*/


#define PWM1_PWM_SSPUP_SPRDUP_SHIFT		0
#define PWM1_PWM_SSPUP_SPRDUP_MASK		0xffffff
/** @defgroup pwm1_pwm_sspup_sprdup SPRDUP Spread Spectrum Limit Value Update
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_smmr PWMSMMR PWM Stepper Motor Mode Register
@{*/

/** PWM1_PWM_SMMR_DOWN1 DOWN Count **/
#define PWM1_PWM_SMMR_DOWN1		(1 << 17)
/** PWM1_PWM_SMMR_DOWN0 DOWN Count **/
#define PWM1_PWM_SMMR_DOWN0		(1 << 16)
/** PWM1_PWM_SMMR_GCEN1 Gray Count ENable **/
#define PWM1_PWM_SMMR_GCEN1		(1 << 1)
/** PWM1_PWM_SMMR_GCEN0 Gray Count ENable **/
#define PWM1_PWM_SMMR_GCEN0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_fpv2 PWMFPV2 PWM Fault Protection Value 2 Register
@{*/

/** PWM1_PWM_FPV2_FPZL3 Fault Protection to Hi-Z for PWML output on channel 3 **/
#define PWM1_PWM_FPV2_FPZL3		(1 << 19)
/** PWM1_PWM_FPV2_FPZL2 Fault Protection to Hi-Z for PWML output on channel 2 **/
#define PWM1_PWM_FPV2_FPZL2		(1 << 18)
/** PWM1_PWM_FPV2_FPZL1 Fault Protection to Hi-Z for PWML output on channel 1 **/
#define PWM1_PWM_FPV2_FPZL1		(1 << 17)
/** PWM1_PWM_FPV2_FPZL0 Fault Protection to Hi-Z for PWML output on channel 0 **/
#define PWM1_PWM_FPV2_FPZL0		(1 << 16)
/** PWM1_PWM_FPV2_FPZH3 Fault Protection to Hi-Z for PWMH output on channel 3 **/
#define PWM1_PWM_FPV2_FPZH3		(1 << 3)
/** PWM1_PWM_FPV2_FPZH2 Fault Protection to Hi-Z for PWMH output on channel 2 **/
#define PWM1_PWM_FPV2_FPZH2		(1 << 2)
/** PWM1_PWM_FPV2_FPZH1 Fault Protection to Hi-Z for PWMH output on channel 1 **/
#define PWM1_PWM_FPV2_FPZH1		(1 << 1)
/** PWM1_PWM_FPV2_FPZH0 Fault Protection to Hi-Z for PWMH output on channel 0 **/
#define PWM1_PWM_FPV2_FPZH0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_wpcr PWMWPCR PWM Write Protection Control Register
@{*/


#define PWM1_PWM_WPCR_WPKEY_SHIFT		8
#define PWM1_PWM_WPCR_WPKEY_MASK		0xffffff
/** @defgroup pwm1_pwm_wpcr_wpkey WPKEY Write Protection Key
@{*/
/**@}*/

/** PWM1_PWM_WPCR_WPRG5 Write Protection Register Group 5 **/
#define PWM1_PWM_WPCR_WPRG5		(1 << 7)
/** PWM1_PWM_WPCR_WPRG4 Write Protection Register Group 4 **/
#define PWM1_PWM_WPCR_WPRG4		(1 << 6)
/** PWM1_PWM_WPCR_WPRG3 Write Protection Register Group 3 **/
#define PWM1_PWM_WPCR_WPRG3		(1 << 5)
/** PWM1_PWM_WPCR_WPRG2 Write Protection Register Group 2 **/
#define PWM1_PWM_WPCR_WPRG2		(1 << 4)
/** PWM1_PWM_WPCR_WPRG1 Write Protection Register Group 1 **/
#define PWM1_PWM_WPCR_WPRG1		(1 << 3)
/** PWM1_PWM_WPCR_WPRG0 Write Protection Register Group 0 **/
#define PWM1_PWM_WPCR_WPRG0		(1 << 2)

#define PWM1_PWM_WPCR_WPCMD_SHIFT		0
#define PWM1_PWM_WPCR_WPCMD_MASK		0x03
/** @defgroup pwm1_pwm_wpcr_wpcmd WPCMD Write Protection Command
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_wpsr PWMWPSR PWM Write Protection Status Register
@{*/


#define PWM1_PWM_WPSR_WPVSRC_SHIFT		16
#define PWM1_PWM_WPSR_WPVSRC_MASK		0xffff
/** @defgroup pwm1_pwm_wpsr_wpvsrc WPVSRC Write Protect Violation Source
@{*/
/**@}*/

/** PWM1_PWM_WPSR_WPHWS5 Write Protect HW Status **/
#define PWM1_PWM_WPSR_WPHWS5		(1 << 13)
/** PWM1_PWM_WPSR_WPHWS4 Write Protect HW Status **/
#define PWM1_PWM_WPSR_WPHWS4		(1 << 12)
/** PWM1_PWM_WPSR_WPHWS3 Write Protect HW Status **/
#define PWM1_PWM_WPSR_WPHWS3		(1 << 11)
/** PWM1_PWM_WPSR_WPHWS2 Write Protect HW Status **/
#define PWM1_PWM_WPSR_WPHWS2		(1 << 10)
/** PWM1_PWM_WPSR_WPHWS1 Write Protect HW Status **/
#define PWM1_PWM_WPSR_WPHWS1		(1 << 9)
/** PWM1_PWM_WPSR_WPHWS0 Write Protect HW Status **/
#define PWM1_PWM_WPSR_WPHWS0		(1 << 8)
/** PWM1_PWM_WPSR_WPVS Write Protect Violation Status **/
#define PWM1_PWM_WPSR_WPVS		(1 << 7)
/** PWM1_PWM_WPSR_WPSWS5 Write Protect SW Status **/
#define PWM1_PWM_WPSR_WPSWS5		(1 << 5)
/** PWM1_PWM_WPSR_WPSWS4 Write Protect SW Status **/
#define PWM1_PWM_WPSR_WPSWS4		(1 << 4)
/** PWM1_PWM_WPSR_WPSWS3 Write Protect SW Status **/
#define PWM1_PWM_WPSR_WPSWS3		(1 << 3)
/** PWM1_PWM_WPSR_WPSWS2 Write Protect SW Status **/
#define PWM1_PWM_WPSR_WPSWS2		(1 << 2)
/** PWM1_PWM_WPSR_WPSWS1 Write Protect SW Status **/
#define PWM1_PWM_WPSR_WPSWS1		(1 << 1)
/** PWM1_PWM_WPSR_WPSWS0 Write Protect SW Status **/
#define PWM1_PWM_WPSR_WPSWS0		(1 << 0)

/**@}*/

/** @defgroup pwm1_pwm_version PWMVERSION Version Register
@{*/


#define PWM1_PWM_VERSION_MFN_SHIFT		16
#define PWM1_PWM_VERSION_MFN_MASK		0x07
/** @defgroup pwm1_pwm_version_mfn MFN Metal Fix Number
@{*/
/**@}*/


#define PWM1_PWM_VERSION_VERSION_SHIFT		0
#define PWM1_PWM_VERSION_VERSION_MASK		0xfff
/** @defgroup pwm1_pwm_version_version VERSION Version of the Hardware Module
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_cmupd0 PWMCMUPD0 PWM Channel Mode Update Register (ch_num = 0)
@{*/

/** PWM1_PWM_CMUPD0_CPOLINVUP Channel Polarity Inversion Update **/
#define PWM1_PWM_CMUPD0_CPOLINVUP		(1 << 13)
/** PWM1_PWM_CMUPD0_CPOLUP Channel Polarity Update **/
#define PWM1_PWM_CMUPD0_CPOLUP		(1 << 9)

/**@}*/

/** @defgroup pwm1_pwm_cmupd1 PWMCMUPD1 PWM Channel Mode Update Register (ch_num = 1)
@{*/

/** PWM1_PWM_CMUPD1_CPOLINVUP Channel Polarity Inversion Update **/
#define PWM1_PWM_CMUPD1_CPOLINVUP		(1 << 13)
/** PWM1_PWM_CMUPD1_CPOLUP Channel Polarity Update **/
#define PWM1_PWM_CMUPD1_CPOLUP		(1 << 9)

/**@}*/

/** @defgroup pwm1_pwm_etrg1 PWMETRG1 PWM External Trigger Register (trg_num = 1)
@{*/

/** PWM1_PWM_ETRG1_RFEN Recoverable Fault Enable **/
#define PWM1_PWM_ETRG1_RFEN		(1 << 31)
/** PWM1_PWM_ETRG1_TRGSRC Trigger Source **/
#define PWM1_PWM_ETRG1_TRGSRC		(1 << 30)
/** PWM1_PWM_ETRG1_TRGFILT Filtered input **/
#define PWM1_PWM_ETRG1_TRGFILT		(1 << 29)
/** PWM1_PWM_ETRG1_TRGEDGE Edge Selection **/
#define PWM1_PWM_ETRG1_TRGEDGE		(1 << 28)

#define PWM1_PWM_ETRG1_TRGMODE_SHIFT		24
#define PWM1_PWM_ETRG1_TRGMODE_MASK		0x03
/** @defgroup pwm1_pwm_etrg1_trgmode TRGMODE External Trigger Mode
@{*/
/**@}*/


#define PWM1_PWM_ETRG1_MAXCNT_SHIFT		0
#define PWM1_PWM_ETRG1_MAXCNT_MASK		0xffffff
/** @defgroup pwm1_pwm_etrg1_maxcnt MAXCNT Maximum Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_lebr1 PWMLEBR1 PWM Leading-Edge Blanking Register (trg_num = 1)
@{*/

/** PWM1_PWM_LEBR1_PWMHREN PWMH Rising Edge Enable **/
#define PWM1_PWM_LEBR1_PWMHREN		(1 << 19)
/** PWM1_PWM_LEBR1_PWMHFEN PWMH Falling Edge Enable **/
#define PWM1_PWM_LEBR1_PWMHFEN		(1 << 18)
/** PWM1_PWM_LEBR1_PWMLREN PWML Rising Edge Enable **/
#define PWM1_PWM_LEBR1_PWMLREN		(1 << 17)
/** PWM1_PWM_LEBR1_PWMLFEN PWML Falling Edge Enable **/
#define PWM1_PWM_LEBR1_PWMLFEN		(1 << 16)

#define PWM1_PWM_LEBR1_LEBDELAY_SHIFT		0
#define PWM1_PWM_LEBR1_LEBDELAY_MASK		0x7f
/** @defgroup pwm1_pwm_lebr1_lebdelay LEBDELAY Leading-Edge Blanking Delay for TRGINx
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_cmupd2 PWMCMUPD2 PWM Channel Mode Update Register (ch_num = 2)
@{*/

/** PWM1_PWM_CMUPD2_CPOLINVUP Channel Polarity Inversion Update **/
#define PWM1_PWM_CMUPD2_CPOLINVUP		(1 << 13)
/** PWM1_PWM_CMUPD2_CPOLUP Channel Polarity Update **/
#define PWM1_PWM_CMUPD2_CPOLUP		(1 << 9)

/**@}*/

/** @defgroup pwm1_pwm_etrg2 PWMETRG2 PWM External Trigger Register (trg_num = 2)
@{*/

/** PWM1_PWM_ETRG2_RFEN Recoverable Fault Enable **/
#define PWM1_PWM_ETRG2_RFEN		(1 << 31)
/** PWM1_PWM_ETRG2_TRGSRC Trigger Source **/
#define PWM1_PWM_ETRG2_TRGSRC		(1 << 30)
/** PWM1_PWM_ETRG2_TRGFILT Filtered input **/
#define PWM1_PWM_ETRG2_TRGFILT		(1 << 29)
/** PWM1_PWM_ETRG2_TRGEDGE Edge Selection **/
#define PWM1_PWM_ETRG2_TRGEDGE		(1 << 28)

#define PWM1_PWM_ETRG2_TRGMODE_SHIFT		24
#define PWM1_PWM_ETRG2_TRGMODE_MASK		0x03
/** @defgroup pwm1_pwm_etrg2_trgmode TRGMODE External Trigger Mode
@{*/
/**@}*/


#define PWM1_PWM_ETRG2_MAXCNT_SHIFT		0
#define PWM1_PWM_ETRG2_MAXCNT_MASK		0xffffff
/** @defgroup pwm1_pwm_etrg2_maxcnt MAXCNT Maximum Counter value
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_lebr2 PWMLEBR2 PWM Leading-Edge Blanking Register (trg_num = 2)
@{*/

/** PWM1_PWM_LEBR2_PWMHREN PWMH Rising Edge Enable **/
#define PWM1_PWM_LEBR2_PWMHREN		(1 << 19)
/** PWM1_PWM_LEBR2_PWMHFEN PWMH Falling Edge Enable **/
#define PWM1_PWM_LEBR2_PWMHFEN		(1 << 18)
/** PWM1_PWM_LEBR2_PWMLREN PWML Rising Edge Enable **/
#define PWM1_PWM_LEBR2_PWMLREN		(1 << 17)
/** PWM1_PWM_LEBR2_PWMLFEN PWML Falling Edge Enable **/
#define PWM1_PWM_LEBR2_PWMLFEN		(1 << 16)

#define PWM1_PWM_LEBR2_LEBDELAY_SHIFT		0
#define PWM1_PWM_LEBR2_LEBDELAY_MASK		0x7f
/** @defgroup pwm1_pwm_lebr2_lebdelay LEBDELAY Leading-Edge Blanking Delay for TRGINx
@{*/
/**@}*/


/**@}*/

/** @defgroup pwm1_pwm_cmupd3 PWMCMUPD3 PWM Channel Mode Update Register (ch_num = 3)
@{*/

/** PWM1_PWM_CMUPD3_CPOLINVUP Channel Polarity Inversion Update **/
#define PWM1_PWM_CMUPD3_CPOLINVUP		(1 << 13)
/** PWM1_PWM_CMUPD3_CPOLUP Channel Polarity Update **/
#define PWM1_PWM_CMUPD3_CPOLUP		(1 << 9)

/**@}*/

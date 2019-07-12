#pragma once 

/* --- HRTIM_Common: High Resolution Timer: Common functions -------- */

/** @defgroup hrtim_common_registers High Resolution Timer: Common       functions Register
@{*/

/** HRTIM_Common_CR1 Control Register 1 **/
#define HRTIM_Common_CR1			MMIO32(HRTIM_Common_BASE + 0x00)
/** HRTIM_Common_CR2 Control Register 2 **/
#define HRTIM_Common_CR2			MMIO32(HRTIM_Common_BASE + 0x04)
/** HRTIM_Common_ISR Interrupt Status Register **/
#define HRTIM_Common_ISR			MMIO32(HRTIM_Common_BASE + 0x08)
/** HRTIM_Common_ICR Interrupt Clear Register **/
#define HRTIM_Common_ICR			MMIO32(HRTIM_Common_BASE + 0x0c)
/** HRTIM_Common_IER Interrupt Enable Register **/
#define HRTIM_Common_IER			MMIO32(HRTIM_Common_BASE + 0x10)
/** HRTIM_Common_OENR Output Enable Register **/
#define HRTIM_Common_OENR			MMIO32(HRTIM_Common_BASE + 0x14)
/** HRTIM_Common_ODISR ODISR **/
#define HRTIM_Common_ODISR			MMIO32(HRTIM_Common_BASE + 0x18)
/** HRTIM_Common_ODSR Output Disable Status Register **/
#define HRTIM_Common_ODSR			MMIO32(HRTIM_Common_BASE + 0x1c)
/** HRTIM_Common_BMCR Burst Mode Control Register **/
#define HRTIM_Common_BMCR			MMIO32(HRTIM_Common_BASE + 0x20)
/** HRTIM_Common_BMTRG BMTRG **/
#define HRTIM_Common_BMTRG			MMIO32(HRTIM_Common_BASE + 0x24)
/** HRTIM_Common_BMCMPR BMCMPR **/
#define HRTIM_Common_BMCMPR			MMIO32(HRTIM_Common_BASE + 0x28)
/** HRTIM_Common_BMPER Burst Mode Period Register **/
#define HRTIM_Common_BMPER			MMIO32(HRTIM_Common_BASE + 0x2c)
/** HRTIM_Common_EECR1 Timer External Event Control Register 1 **/
#define HRTIM_Common_EECR1			MMIO32(HRTIM_Common_BASE + 0x30)
/** HRTIM_Common_EECR2 Timer External Event Control Register 2 **/
#define HRTIM_Common_EECR2			MMIO32(HRTIM_Common_BASE + 0x34)
/** HRTIM_Common_EECR3 Timer External Event Control Register 3 **/
#define HRTIM_Common_EECR3			MMIO32(HRTIM_Common_BASE + 0x38)
/** HRTIM_Common_ADC1R ADC Trigger 1 Register **/
#define HRTIM_Common_ADC1R			MMIO32(HRTIM_Common_BASE + 0x3c)
/** HRTIM_Common_ADC2R ADC Trigger 2 Register **/
#define HRTIM_Common_ADC2R			MMIO32(HRTIM_Common_BASE + 0x40)
/** HRTIM_Common_ADC3R ADC Trigger 3 Register **/
#define HRTIM_Common_ADC3R			MMIO32(HRTIM_Common_BASE + 0x44)
/** HRTIM_Common_ADC4R ADC Trigger 4 Register **/
#define HRTIM_Common_ADC4R			MMIO32(HRTIM_Common_BASE + 0x48)
/** HRTIM_Common_DLLCR DLL Control Register **/
#define HRTIM_Common_DLLCR			MMIO32(HRTIM_Common_BASE + 0x4c)
/** HRTIM_Common_FLTINR1 HRTIM Fault Input Register 1 **/
#define HRTIM_Common_FLTINR1			MMIO32(HRTIM_Common_BASE + 0x50)
/** HRTIM_Common_FLTINR2 HRTIM Fault Input Register 2 **/
#define HRTIM_Common_FLTINR2			MMIO32(HRTIM_Common_BASE + 0x54)
/** HRTIM_Common_BDMUPDR BDMUPDR **/
#define HRTIM_Common_BDMUPDR			MMIO32(HRTIM_Common_BASE + 0x58)
/** HRTIM_Common_BDTAUPR Burst DMA Timerx update Register **/
#define HRTIM_Common_BDTAUPR			MMIO32(HRTIM_Common_BASE + 0x5c)
/** HRTIM_Common_BDTBUPR Burst DMA Timerx update Register **/
#define HRTIM_Common_BDTBUPR			MMIO32(HRTIM_Common_BASE + 0x60)
/** HRTIM_Common_BDTCUPR Burst DMA Timerx update Register **/
#define HRTIM_Common_BDTCUPR			MMIO32(HRTIM_Common_BASE + 0x64)
/** HRTIM_Common_BDTDUPR Burst DMA Timerx update Register **/
#define HRTIM_Common_BDTDUPR			MMIO32(HRTIM_Common_BASE + 0x68)
/** HRTIM_Common_BDTEUPR Burst DMA Timerx update Register **/
#define HRTIM_Common_BDTEUPR			MMIO32(HRTIM_Common_BASE + 0x6c)
/** HRTIM_Common_BDMADR Burst DMA Data Register **/
#define HRTIM_Common_BDMADR			MMIO32(HRTIM_Common_BASE + 0x70)
/** HRTIM_Common_BDTFUPR Burst DMA Timerx update Register **/
#define HRTIM_Common_BDTFUPR			MMIO32(HRTIM_Common_BASE + 0x74)
/** HRTIM_Common_ADCER HRTIM ADC Extended Trigger Register **/
#define HRTIM_Common_ADCER			MMIO32(HRTIM_Common_BASE + 0x78)
/** HRTIM_Common_ADCUR HRTIM ADC Trigger Update Register **/
#define HRTIM_Common_ADCUR			MMIO32(HRTIM_Common_BASE + 0x7c)
/** HRTIM_Common_ADCPS1 HRTIM ADC Post Scaler Register 1 **/
#define HRTIM_Common_ADCPS1			MMIO32(HRTIM_Common_BASE + 0x80)
/** HRTIM_Common_ADCPS2 HRTIM ADC Post Scaler Register 2 **/
#define HRTIM_Common_ADCPS2			MMIO32(HRTIM_Common_BASE + 0x84)
/** HRTIM_Common_FLTINR3 HRTIM Fault Input Register 3 **/
#define HRTIM_Common_FLTINR3			MMIO32(HRTIM_Common_BASE + 0x88)
/** HRTIM_Common_FLTINR4 HRTIM Fault Input Register 4 **/
#define HRTIM_Common_FLTINR4			MMIO32(HRTIM_Common_BASE + 0x8c)

/**@}*/


/** @defgroup hrtim_common_cr1 CR1 Control Register 1
@{*/


#define HRTIM_Common_CR1_AD4USRC_SHIFT		25
#define HRTIM_Common_CR1_AD4USRC_MASK		0x07
/** @defgroup hrtim_common_cr1_ad4usrc AD4USRC ADC Trigger 4 Update Source
@{*/
/**@}*/


#define HRTIM_Common_CR1_AD3USRC_SHIFT		22
#define HRTIM_Common_CR1_AD3USRC_MASK		0x07
/** @defgroup hrtim_common_cr1_ad3usrc AD3USRC ADC Trigger 3 Update Source
@{*/
/**@}*/


#define HRTIM_Common_CR1_AD2USRC_SHIFT		19
#define HRTIM_Common_CR1_AD2USRC_MASK		0x07
/** @defgroup hrtim_common_cr1_ad2usrc AD2USRC ADC Trigger 2 Update Source
@{*/
/**@}*/


#define HRTIM_Common_CR1_AD1USRC_SHIFT		16
#define HRTIM_Common_CR1_AD1USRC_MASK		0x07
/** @defgroup hrtim_common_cr1_ad1usrc AD1USRC ADC Trigger 1 Update Source
@{*/
/**@}*/

/** HRTIM_Common_CR1_TFUDIS Timer f Update Disable **/
#define HRTIM_Common_CR1_TFUDIS		(1 << 6)
/** HRTIM_Common_CR1_TEUDIS Timer E Update Disable **/
#define HRTIM_Common_CR1_TEUDIS		(1 << 5)
/** HRTIM_Common_CR1_TDUDIS Timer D Update Disable **/
#define HRTIM_Common_CR1_TDUDIS		(1 << 4)
/** HRTIM_Common_CR1_TCUDIS Timer C Update Disable **/
#define HRTIM_Common_CR1_TCUDIS		(1 << 3)
/** HRTIM_Common_CR1_TBUDIS Timer B Update Disable **/
#define HRTIM_Common_CR1_TBUDIS		(1 << 2)
/** HRTIM_Common_CR1_TAUDIS Timer A Update Disable **/
#define HRTIM_Common_CR1_TAUDIS		(1 << 1)
/** HRTIM_Common_CR1_MUDIS Master Update Disable **/
#define HRTIM_Common_CR1_MUDIS		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_cr2 CR2 Control Register 2
@{*/

/** HRTIM_Common_CR2_SWPF Swap Timer F outputs **/
#define HRTIM_Common_CR2_SWPF		(1 << 21)
/** HRTIM_Common_CR2_SWPE Swap Timer E outputs **/
#define HRTIM_Common_CR2_SWPE		(1 << 20)
/** HRTIM_Common_CR2_SWPD Swap Timer D outputs **/
#define HRTIM_Common_CR2_SWPD		(1 << 19)
/** HRTIM_Common_CR2_SWPC Swap Timer C outputs **/
#define HRTIM_Common_CR2_SWPC		(1 << 18)
/** HRTIM_Common_CR2_SWPB Swap Timer B outputs **/
#define HRTIM_Common_CR2_SWPB		(1 << 17)
/** HRTIM_Common_CR2_SWPA Swap Timer A outputs **/
#define HRTIM_Common_CR2_SWPA		(1 << 16)
/** HRTIM_Common_CR2_TFRST Timer f counter software reset **/
#define HRTIM_Common_CR2_TFRST		(1 << 14)
/** HRTIM_Common_CR2_TERST Timer E counter software reset **/
#define HRTIM_Common_CR2_TERST		(1 << 13)
/** HRTIM_Common_CR2_TDRST Timer D counter software reset **/
#define HRTIM_Common_CR2_TDRST		(1 << 12)
/** HRTIM_Common_CR2_TCRST Timer C counter software reset **/
#define HRTIM_Common_CR2_TCRST		(1 << 11)
/** HRTIM_Common_CR2_TBRST Timer B counter software reset **/
#define HRTIM_Common_CR2_TBRST		(1 << 10)
/** HRTIM_Common_CR2_TARST Timer A counter software reset **/
#define HRTIM_Common_CR2_TARST		(1 << 9)
/** HRTIM_Common_CR2_MRST Master Counter software reset **/
#define HRTIM_Common_CR2_MRST		(1 << 8)
/** HRTIM_Common_CR2_TFSWU Timer f Software Update **/
#define HRTIM_Common_CR2_TFSWU		(1 << 6)
/** HRTIM_Common_CR2_TESWU Timer E Software Update **/
#define HRTIM_Common_CR2_TESWU		(1 << 5)
/** HRTIM_Common_CR2_TDSWU Timer D Software Update **/
#define HRTIM_Common_CR2_TDSWU		(1 << 4)
/** HRTIM_Common_CR2_TCSWU Timer C Software Update **/
#define HRTIM_Common_CR2_TCSWU		(1 << 3)
/** HRTIM_Common_CR2_TBSWU Timer B Software Update **/
#define HRTIM_Common_CR2_TBSWU		(1 << 2)
/** HRTIM_Common_CR2_TASWU Timer A Software update **/
#define HRTIM_Common_CR2_TASWU		(1 << 1)
/** HRTIM_Common_CR2_MSWU Master Timer Software update **/
#define HRTIM_Common_CR2_MSWU		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_isr ISR Interrupt Status Register
@{*/

/** HRTIM_Common_ISR_BMPER Burst mode Period Interrupt Flag **/
#define HRTIM_Common_ISR_BMPER		(1 << 17)
/** HRTIM_Common_ISR_DLLRDY DLL Ready Interrupt Flag **/
#define HRTIM_Common_ISR_DLLRDY		(1 << 16)
/** HRTIM_Common_ISR_FLT6 Fault 6 Interrupt Flag **/
#define HRTIM_Common_ISR_FLT6		(1 << 6)
/** HRTIM_Common_ISR_SYSFLT System Fault Interrupt Flag **/
#define HRTIM_Common_ISR_SYSFLT		(1 << 5)
/** HRTIM_Common_ISR_FLT5 Fault 5 Interrupt Flag **/
#define HRTIM_Common_ISR_FLT5		(1 << 4)
/** HRTIM_Common_ISR_FLT4 Fault 4 Interrupt Flag **/
#define HRTIM_Common_ISR_FLT4		(1 << 3)
/** HRTIM_Common_ISR_FLT3 Fault 3 Interrupt Flag **/
#define HRTIM_Common_ISR_FLT3		(1 << 2)
/** HRTIM_Common_ISR_FLT2 Fault 2 Interrupt Flag **/
#define HRTIM_Common_ISR_FLT2		(1 << 1)
/** HRTIM_Common_ISR_FLT1 Fault 1 Interrupt Flag **/
#define HRTIM_Common_ISR_FLT1		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_icr ICR Interrupt Clear Register
@{*/

/** HRTIM_Common_ICR_BMPERC Burst mode period flag Clear **/
#define HRTIM_Common_ICR_BMPERC		(1 << 17)
/** HRTIM_Common_ICR_DLLRDYC DLL Ready Interrupt flag Clear **/
#define HRTIM_Common_ICR_DLLRDYC		(1 << 16)
/** HRTIM_Common_ICR_FLT6C Fault 6 Interrupt Flag Clear **/
#define HRTIM_Common_ICR_FLT6C		(1 << 6)
/** HRTIM_Common_ICR_SYSFLTC System Fault Interrupt Flag Clear **/
#define HRTIM_Common_ICR_SYSFLTC		(1 << 5)
/** HRTIM_Common_ICR_FLT5C Fault 5 Interrupt Flag Clear **/
#define HRTIM_Common_ICR_FLT5C		(1 << 4)
/** HRTIM_Common_ICR_FLT4C Fault 4 Interrupt Flag Clear **/
#define HRTIM_Common_ICR_FLT4C		(1 << 3)
/** HRTIM_Common_ICR_FLT3C Fault 3 Interrupt Flag Clear **/
#define HRTIM_Common_ICR_FLT3C		(1 << 2)
/** HRTIM_Common_ICR_FLT2C Fault 2 Interrupt Flag Clear **/
#define HRTIM_Common_ICR_FLT2C		(1 << 1)
/** HRTIM_Common_ICR_FLT1C Fault 1 Interrupt Flag Clear **/
#define HRTIM_Common_ICR_FLT1C		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_ier IER Interrupt Enable Register
@{*/

/** HRTIM_Common_IER_BMPERIE Burst mode period Interrupt Enable **/
#define HRTIM_Common_IER_BMPERIE		(1 << 17)
/** HRTIM_Common_IER_DLLRDYIE DLL Ready Interrupt Enable **/
#define HRTIM_Common_IER_DLLRDYIE		(1 << 16)
/** HRTIM_Common_IER_FLT6IE Fault 6 Interrupt Enable **/
#define HRTIM_Common_IER_FLT6IE		(1 << 6)
/** HRTIM_Common_IER_SYSFLTE System Fault Interrupt Enable **/
#define HRTIM_Common_IER_SYSFLTE		(1 << 5)
/** HRTIM_Common_IER_FLT5IE Fault 5 Interrupt Enable **/
#define HRTIM_Common_IER_FLT5IE		(1 << 4)
/** HRTIM_Common_IER_FLT4IE Fault 4 Interrupt Enable **/
#define HRTIM_Common_IER_FLT4IE		(1 << 3)
/** HRTIM_Common_IER_FLT3IE Fault 3 Interrupt Enable **/
#define HRTIM_Common_IER_FLT3IE		(1 << 2)
/** HRTIM_Common_IER_FLT2IE Fault 2 Interrupt Enable **/
#define HRTIM_Common_IER_FLT2IE		(1 << 1)
/** HRTIM_Common_IER_FLT1IE Fault 1 Interrupt Enable **/
#define HRTIM_Common_IER_FLT1IE		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_oenr OENR Output Enable Register
@{*/

/** HRTIM_Common_OENR_TF2ODS Timer F Output 2 disable status **/
#define HRTIM_Common_OENR_TF2ODS		(1 << 11)
/** HRTIM_Common_OENR_TF1ODS Timer F Output 1 disable status **/
#define HRTIM_Common_OENR_TF1ODS		(1 << 10)
/** HRTIM_Common_OENR_TE2OEN Timer E Output 2 Enable **/
#define HRTIM_Common_OENR_TE2OEN		(1 << 9)
/** HRTIM_Common_OENR_TE1OEN Timer E Output 1 Enable **/
#define HRTIM_Common_OENR_TE1OEN		(1 << 8)
/** HRTIM_Common_OENR_TD2OEN Timer D Output 2 Enable **/
#define HRTIM_Common_OENR_TD2OEN		(1 << 7)
/** HRTIM_Common_OENR_TD1OEN Timer D Output 1 Enable **/
#define HRTIM_Common_OENR_TD1OEN		(1 << 6)
/** HRTIM_Common_OENR_TC2OEN Timer C Output 2 Enable **/
#define HRTIM_Common_OENR_TC2OEN		(1 << 5)
/** HRTIM_Common_OENR_TC1OEN Timer C Output 1 Enable **/
#define HRTIM_Common_OENR_TC1OEN		(1 << 4)
/** HRTIM_Common_OENR_TB2OEN Timer B Output 2 Enable **/
#define HRTIM_Common_OENR_TB2OEN		(1 << 3)
/** HRTIM_Common_OENR_TB1OEN Timer B Output 1 Enable **/
#define HRTIM_Common_OENR_TB1OEN		(1 << 2)
/** HRTIM_Common_OENR_TA2OEN Timer A Output 2 Enable **/
#define HRTIM_Common_OENR_TA2OEN		(1 << 1)
/** HRTIM_Common_OENR_TA1OEN Timer A Output 1 Enable **/
#define HRTIM_Common_OENR_TA1OEN		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_odisr ODISR ODISR
@{*/

/** HRTIM_Common_ODISR_TF2ODIS TF2ODIS **/
#define HRTIM_Common_ODISR_TF2ODIS		(1 << 11)
/** HRTIM_Common_ODISR_TF1ODIS TF1ODIS **/
#define HRTIM_Common_ODISR_TF1ODIS		(1 << 10)
/** HRTIM_Common_ODISR_TE2ODIS TE2ODIS **/
#define HRTIM_Common_ODISR_TE2ODIS		(1 << 9)
/** HRTIM_Common_ODISR_TE1ODIS TE1ODIS **/
#define HRTIM_Common_ODISR_TE1ODIS		(1 << 8)
/** HRTIM_Common_ODISR_TD2ODIS TD2ODIS **/
#define HRTIM_Common_ODISR_TD2ODIS		(1 << 7)
/** HRTIM_Common_ODISR_TD1ODIS TD1ODIS **/
#define HRTIM_Common_ODISR_TD1ODIS		(1 << 6)
/** HRTIM_Common_ODISR_TC2ODIS TC2ODIS **/
#define HRTIM_Common_ODISR_TC2ODIS		(1 << 5)
/** HRTIM_Common_ODISR_TC1ODIS TC1ODIS **/
#define HRTIM_Common_ODISR_TC1ODIS		(1 << 4)
/** HRTIM_Common_ODISR_TB2ODIS TB2ODIS **/
#define HRTIM_Common_ODISR_TB2ODIS		(1 << 3)
/** HRTIM_Common_ODISR_TB1ODIS TB1ODIS **/
#define HRTIM_Common_ODISR_TB1ODIS		(1 << 2)
/** HRTIM_Common_ODISR_TA2ODIS TA2ODIS **/
#define HRTIM_Common_ODISR_TA2ODIS		(1 << 1)
/** HRTIM_Common_ODISR_TA1ODIS TA1ODIS **/
#define HRTIM_Common_ODISR_TA1ODIS		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_odsr ODSR Output Disable Status Register
@{*/

/** HRTIM_Common_ODSR_TF2ODS TF2ODS **/
#define HRTIM_Common_ODSR_TF2ODS		(1 << 11)
/** HRTIM_Common_ODSR_TF1ODS TF1ODS **/
#define HRTIM_Common_ODSR_TF1ODS		(1 << 10)
/** HRTIM_Common_ODSR_TE2ODS Timer E Output 2 disable status **/
#define HRTIM_Common_ODSR_TE2ODS		(1 << 9)
/** HRTIM_Common_ODSR_TE1ODS Timer E Output 1 disable status **/
#define HRTIM_Common_ODSR_TE1ODS		(1 << 8)
/** HRTIM_Common_ODSR_TD2ODS Timer D Output 2 disable status **/
#define HRTIM_Common_ODSR_TD2ODS		(1 << 7)
/** HRTIM_Common_ODSR_TD1ODS Timer D Output 1 disable status **/
#define HRTIM_Common_ODSR_TD1ODS		(1 << 6)
/** HRTIM_Common_ODSR_TC2ODS Timer C Output 2 disable status **/
#define HRTIM_Common_ODSR_TC2ODS		(1 << 5)
/** HRTIM_Common_ODSR_TC1ODS Timer C Output 1 disable status **/
#define HRTIM_Common_ODSR_TC1ODS		(1 << 4)
/** HRTIM_Common_ODSR_TB2ODS Timer B Output 2 disable status **/
#define HRTIM_Common_ODSR_TB2ODS		(1 << 3)
/** HRTIM_Common_ODSR_TB1ODS Timer B Output 1 disable status **/
#define HRTIM_Common_ODSR_TB1ODS		(1 << 2)
/** HRTIM_Common_ODSR_TA2ODS Timer A Output 2 disable status **/
#define HRTIM_Common_ODSR_TA2ODS		(1 << 1)
/** HRTIM_Common_ODSR_TA1ODS Timer A Output 1 disable status **/
#define HRTIM_Common_ODSR_TA1ODS		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_bmcr BMCR Burst Mode Control Register
@{*/

/** HRTIM_Common_BMCR_BMSTAT Burst Mode Status **/
#define HRTIM_Common_BMCR_BMSTAT		(1 << 31)
/** HRTIM_Common_BMCR_TFBM Timer f Burst Mode **/
#define HRTIM_Common_BMCR_TFBM		(1 << 22)
/** HRTIM_Common_BMCR_TEBM Timer E Burst Mode **/
#define HRTIM_Common_BMCR_TEBM		(1 << 21)
/** HRTIM_Common_BMCR_TDBM Timer D Burst Mode **/
#define HRTIM_Common_BMCR_TDBM		(1 << 20)
/** HRTIM_Common_BMCR_TCBM Timer C Burst Mode **/
#define HRTIM_Common_BMCR_TCBM		(1 << 19)
/** HRTIM_Common_BMCR_TBBM Timer B Burst Mode **/
#define HRTIM_Common_BMCR_TBBM		(1 << 18)
/** HRTIM_Common_BMCR_TABM Timer A Burst Mode **/
#define HRTIM_Common_BMCR_TABM		(1 << 17)
/** HRTIM_Common_BMCR_MTBM Master Timer Burst Mode **/
#define HRTIM_Common_BMCR_MTBM		(1 << 16)
/** HRTIM_Common_BMCR_BMPREN Burst Mode Preload Enable **/
#define HRTIM_Common_BMCR_BMPREN		(1 << 10)

#define HRTIM_Common_BMCR_BMPRSC_SHIFT		6
#define HRTIM_Common_BMCR_BMPRSC_MASK		0x0f
/** @defgroup hrtim_common_bmcr_bmprsc BMPRSC Burst Mode Prescaler
@{*/
/**@}*/


#define HRTIM_Common_BMCR_BMCLK_SHIFT		2
#define HRTIM_Common_BMCR_BMCLK_MASK		0x0f
/** @defgroup hrtim_common_bmcr_bmclk BMCLK Burst Mode Clock source
@{*/
/**@}*/

/** HRTIM_Common_BMCR_BMOM Burst Mode operating mode **/
#define HRTIM_Common_BMCR_BMOM		(1 << 1)
/** HRTIM_Common_BMCR_BME Burst Mode enable **/
#define HRTIM_Common_BMCR_BME		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_bmtrg BMTRG BMTRG
@{*/

/** HRTIM_Common_BMTRG_OCHPEV OCHPEV **/
#define HRTIM_Common_BMTRG_OCHPEV		(1 << 31)
/** HRTIM_Common_BMTRG_EEV8 EEV8 **/
#define HRTIM_Common_BMTRG_EEV8		(1 << 30)
/** HRTIM_Common_BMTRG_EEV7 EEV7 **/
#define HRTIM_Common_BMTRG_EEV7		(1 << 29)
/** HRTIM_Common_BMTRG_TDEEV8 TDEEV8 **/
#define HRTIM_Common_BMTRG_TDEEV8		(1 << 28)
/** HRTIM_Common_BMTRG_TDEEV7 TDEEV7 **/
#define HRTIM_Common_BMTRG_TDEEV7		(1 << 27)
/** HRTIM_Common_BMTRG_TECMP2 TECMP2 **/
#define HRTIM_Common_BMTRG_TECMP2		(1 << 26)
/** HRTIM_Common_BMTRG_TECMP1 TECMP1 **/
#define HRTIM_Common_BMTRG_TECMP1		(1 << 25)
/** HRTIM_Common_BMTRG_TEREP TEREP **/
#define HRTIM_Common_BMTRG_TEREP		(1 << 24)
/** HRTIM_Common_BMTRG_TERST TERST **/
#define HRTIM_Common_BMTRG_TERST		(1 << 23)
/** HRTIM_Common_BMTRG_TDCMP2 TDCMP2 **/
#define HRTIM_Common_BMTRG_TDCMP2		(1 << 22)
/** HRTIM_Common_BMTRG_TDCMP1 TDCMP1 **/
#define HRTIM_Common_BMTRG_TDCMP1		(1 << 21)
/** HRTIM_Common_BMTRG_TDREP TDREP **/
#define HRTIM_Common_BMTRG_TDREP		(1 << 20)
/** HRTIM_Common_BMTRG_TDRST TDRST **/
#define HRTIM_Common_BMTRG_TDRST		(1 << 19)
/** HRTIM_Common_BMTRG_TCCMP2 TCCMP2 **/
#define HRTIM_Common_BMTRG_TCCMP2		(1 << 18)
/** HRTIM_Common_BMTRG_TCCMP1 TCCMP1 **/
#define HRTIM_Common_BMTRG_TCCMP1		(1 << 17)
/** HRTIM_Common_BMTRG_TCREP TCREP **/
#define HRTIM_Common_BMTRG_TCREP		(1 << 16)
/** HRTIM_Common_BMTRG_TCRST TCRST **/
#define HRTIM_Common_BMTRG_TCRST		(1 << 15)
/** HRTIM_Common_BMTRG_TBCMP2 TBCMP2 **/
#define HRTIM_Common_BMTRG_TBCMP2		(1 << 14)
/** HRTIM_Common_BMTRG_TBCMP1 TBCMP1 **/
#define HRTIM_Common_BMTRG_TBCMP1		(1 << 13)
/** HRTIM_Common_BMTRG_TBREP TBREP **/
#define HRTIM_Common_BMTRG_TBREP		(1 << 12)
/** HRTIM_Common_BMTRG_TBRST TBRST **/
#define HRTIM_Common_BMTRG_TBRST		(1 << 11)
/** HRTIM_Common_BMTRG_TACMP2 TACMP2 **/
#define HRTIM_Common_BMTRG_TACMP2		(1 << 10)
/** HRTIM_Common_BMTRG_TACMP1 TACMP1 **/
#define HRTIM_Common_BMTRG_TACMP1		(1 << 9)
/** HRTIM_Common_BMTRG_TAREP TAREP **/
#define HRTIM_Common_BMTRG_TAREP		(1 << 8)
/** HRTIM_Common_BMTRG_TARST TARST **/
#define HRTIM_Common_BMTRG_TARST		(1 << 7)
/** HRTIM_Common_BMTRG_MSTCMP4 MSTCMP4 **/
#define HRTIM_Common_BMTRG_MSTCMP4		(1 << 6)
/** HRTIM_Common_BMTRG_MSTCMP3 MSTCMP3 **/
#define HRTIM_Common_BMTRG_MSTCMP3		(1 << 5)
/** HRTIM_Common_BMTRG_MSTCMP2 MSTCMP2 **/
#define HRTIM_Common_BMTRG_MSTCMP2		(1 << 4)
/** HRTIM_Common_BMTRG_MSTCMP1 MSTCMP1 **/
#define HRTIM_Common_BMTRG_MSTCMP1		(1 << 3)
/** HRTIM_Common_BMTRG_MSTREP MSTREP **/
#define HRTIM_Common_BMTRG_MSTREP		(1 << 2)
/** HRTIM_Common_BMTRG_MSTRST MSTRST **/
#define HRTIM_Common_BMTRG_MSTRST		(1 << 1)
/** HRTIM_Common_BMTRG_SW SW **/
#define HRTIM_Common_BMTRG_SW		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_bmcmpr BMCMPR BMCMPR
@{*/


#define HRTIM_Common_BMCMPR_BMCMP_SHIFT		0
#define HRTIM_Common_BMCMPR_BMCMP_MASK		0xffff
/** @defgroup hrtim_common_bmcmpr_bmcmp BMCMP BMCMP
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_common_bmper BMPER Burst Mode Period Register
@{*/


#define HRTIM_Common_BMPER_BMPER_SHIFT		0
#define HRTIM_Common_BMPER_BMPER_MASK		0xffff
/** @defgroup hrtim_common_bmper_bmper BMPER Burst mode Period
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_common_eecr1 EECR1 Timer External Event Control Register 1
@{*/

/** HRTIM_Common_EECR1_EE5FAST External Event 5 Fast mode **/
#define HRTIM_Common_EECR1_EE5FAST		(1 << 29)

#define HRTIM_Common_EECR1_EE5SNS_SHIFT		27
#define HRTIM_Common_EECR1_EE5SNS_MASK		0x03
/** @defgroup hrtim_common_eecr1_ee5sns EE5SNS External Event 5 Sensitivity
@{*/
/**@}*/

/** HRTIM_Common_EECR1_EE5POL External Event 5 Polarity **/
#define HRTIM_Common_EECR1_EE5POL		(1 << 26)

#define HRTIM_Common_EECR1_EE5SRC_SHIFT		24
#define HRTIM_Common_EECR1_EE5SRC_MASK		0x03
/** @defgroup hrtim_common_eecr1_ee5src EE5SRC External Event 5 Source
@{*/
/**@}*/

/** HRTIM_Common_EECR1_EE4FAST External Event 4 Fast mode **/
#define HRTIM_Common_EECR1_EE4FAST		(1 << 23)

#define HRTIM_Common_EECR1_EE4SNS_SHIFT		21
#define HRTIM_Common_EECR1_EE4SNS_MASK		0x03
/** @defgroup hrtim_common_eecr1_ee4sns EE4SNS External Event 4 Sensitivity
@{*/
/**@}*/

/** HRTIM_Common_EECR1_EE4POL External Event 4 Polarity **/
#define HRTIM_Common_EECR1_EE4POL		(1 << 20)

#define HRTIM_Common_EECR1_EE4SRC_SHIFT		18
#define HRTIM_Common_EECR1_EE4SRC_MASK		0x03
/** @defgroup hrtim_common_eecr1_ee4src EE4SRC External Event 4 Source
@{*/
/**@}*/

/** HRTIM_Common_EECR1_EE3FAST External Event 3 Fast mode **/
#define HRTIM_Common_EECR1_EE3FAST		(1 << 17)

#define HRTIM_Common_EECR1_EE3SNS_SHIFT		15
#define HRTIM_Common_EECR1_EE3SNS_MASK		0x03
/** @defgroup hrtim_common_eecr1_ee3sns EE3SNS External Event 3 Sensitivity
@{*/
/**@}*/

/** HRTIM_Common_EECR1_EE3POL External Event 3 Polarity **/
#define HRTIM_Common_EECR1_EE3POL		(1 << 14)

#define HRTIM_Common_EECR1_EE3SRC_SHIFT		12
#define HRTIM_Common_EECR1_EE3SRC_MASK		0x03
/** @defgroup hrtim_common_eecr1_ee3src EE3SRC External Event 3 Source
@{*/
/**@}*/

/** HRTIM_Common_EECR1_EE2FAST External Event 2 Fast mode **/
#define HRTIM_Common_EECR1_EE2FAST		(1 << 11)

#define HRTIM_Common_EECR1_EE2SNS_SHIFT		9
#define HRTIM_Common_EECR1_EE2SNS_MASK		0x03
/** @defgroup hrtim_common_eecr1_ee2sns EE2SNS External Event 2 Sensitivity
@{*/
/**@}*/

/** HRTIM_Common_EECR1_EE2POL External Event 2 Polarity **/
#define HRTIM_Common_EECR1_EE2POL		(1 << 8)

#define HRTIM_Common_EECR1_EE2SRC_SHIFT		6
#define HRTIM_Common_EECR1_EE2SRC_MASK		0x03
/** @defgroup hrtim_common_eecr1_ee2src EE2SRC External Event 2 Source
@{*/
/**@}*/

/** HRTIM_Common_EECR1_EE1FAST External Event 1 Fast mode **/
#define HRTIM_Common_EECR1_EE1FAST		(1 << 5)

#define HRTIM_Common_EECR1_EE1SNS_SHIFT		3
#define HRTIM_Common_EECR1_EE1SNS_MASK		0x03
/** @defgroup hrtim_common_eecr1_ee1sns EE1SNS External Event 1 Sensitivity
@{*/
/**@}*/

/** HRTIM_Common_EECR1_EE1POL External Event 1 Polarity **/
#define HRTIM_Common_EECR1_EE1POL		(1 << 2)

#define HRTIM_Common_EECR1_EE1SRC_SHIFT		0
#define HRTIM_Common_EECR1_EE1SRC_MASK		0x03
/** @defgroup hrtim_common_eecr1_ee1src EE1SRC External Event 1 Source
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_common_eecr2 EECR2 Timer External Event Control Register 2
@{*/


#define HRTIM_Common_EECR2_EE10SNS_SHIFT		27
#define HRTIM_Common_EECR2_EE10SNS_MASK		0x03
/** @defgroup hrtim_common_eecr2_ee10sns EE10SNS EE10SNS
@{*/
/**@}*/

/** HRTIM_Common_EECR2_EE10POL EE10POL **/
#define HRTIM_Common_EECR2_EE10POL		(1 << 26)

#define HRTIM_Common_EECR2_EE10SRC_SHIFT		24
#define HRTIM_Common_EECR2_EE10SRC_MASK		0x03
/** @defgroup hrtim_common_eecr2_ee10src EE10SRC EE10SRC
@{*/
/**@}*/


#define HRTIM_Common_EECR2_EE9SNS_SHIFT		21
#define HRTIM_Common_EECR2_EE9SNS_MASK		0x03
/** @defgroup hrtim_common_eecr2_ee9sns EE9SNS EE9SNS
@{*/
/**@}*/

/** HRTIM_Common_EECR2_EE9POL EE9POL **/
#define HRTIM_Common_EECR2_EE9POL		(1 << 20)

#define HRTIM_Common_EECR2_EE9SRC_SHIFT		18
#define HRTIM_Common_EECR2_EE9SRC_MASK		0x03
/** @defgroup hrtim_common_eecr2_ee9src EE9SRC EE9SRC
@{*/
/**@}*/


#define HRTIM_Common_EECR2_EE8SNS_SHIFT		15
#define HRTIM_Common_EECR2_EE8SNS_MASK		0x03
/** @defgroup hrtim_common_eecr2_ee8sns EE8SNS EE8SNS
@{*/
/**@}*/

/** HRTIM_Common_EECR2_EE8POL EE8POL **/
#define HRTIM_Common_EECR2_EE8POL		(1 << 14)

#define HRTIM_Common_EECR2_EE8SRC_SHIFT		12
#define HRTIM_Common_EECR2_EE8SRC_MASK		0x03
/** @defgroup hrtim_common_eecr2_ee8src EE8SRC EE8SRC
@{*/
/**@}*/


#define HRTIM_Common_EECR2_EE7SNS_SHIFT		9
#define HRTIM_Common_EECR2_EE7SNS_MASK		0x03
/** @defgroup hrtim_common_eecr2_ee7sns EE7SNS EE7SNS
@{*/
/**@}*/

/** HRTIM_Common_EECR2_EE7POL EE7POL **/
#define HRTIM_Common_EECR2_EE7POL		(1 << 8)

#define HRTIM_Common_EECR2_EE7SRC_SHIFT		6
#define HRTIM_Common_EECR2_EE7SRC_MASK		0x03
/** @defgroup hrtim_common_eecr2_ee7src EE7SRC EE7SRC
@{*/
/**@}*/


#define HRTIM_Common_EECR2_EE6SNS_SHIFT		3
#define HRTIM_Common_EECR2_EE6SNS_MASK		0x03
/** @defgroup hrtim_common_eecr2_ee6sns EE6SNS EE6SNS
@{*/
/**@}*/

/** HRTIM_Common_EECR2_EE6POL EE6POL **/
#define HRTIM_Common_EECR2_EE6POL		(1 << 2)

#define HRTIM_Common_EECR2_EE6SRC_SHIFT		0
#define HRTIM_Common_EECR2_EE6SRC_MASK		0x03
/** @defgroup hrtim_common_eecr2_ee6src EE6SRC EE6SRC
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_common_eecr3 EECR3 Timer External Event Control Register 3
@{*/


#define HRTIM_Common_EECR3_EEVSD_SHIFT		30
#define HRTIM_Common_EECR3_EEVSD_MASK		0x03
/** @defgroup hrtim_common_eecr3_eevsd EEVSD EEVSD
@{*/
/**@}*/


#define HRTIM_Common_EECR3_EE10F_SHIFT		24
#define HRTIM_Common_EECR3_EE10F_MASK		0x0f
/** @defgroup hrtim_common_eecr3_ee10f EE10F EE10F
@{*/
/**@}*/


#define HRTIM_Common_EECR3_EE9F_SHIFT		18
#define HRTIM_Common_EECR3_EE9F_MASK		0x0f
/** @defgroup hrtim_common_eecr3_ee9f EE9F EE9F
@{*/
/**@}*/


#define HRTIM_Common_EECR3_EE8F_SHIFT		12
#define HRTIM_Common_EECR3_EE8F_MASK		0x0f
/** @defgroup hrtim_common_eecr3_ee8f EE8F EE8F
@{*/
/**@}*/


#define HRTIM_Common_EECR3_EE7F_SHIFT		6
#define HRTIM_Common_EECR3_EE7F_MASK		0x0f
/** @defgroup hrtim_common_eecr3_ee7f EE7F EE7F
@{*/
/**@}*/


#define HRTIM_Common_EECR3_EE6F_SHIFT		0
#define HRTIM_Common_EECR3_EE6F_MASK		0x0f
/** @defgroup hrtim_common_eecr3_ee6f EE6F EE6F
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_common_adc1r ADC1R ADC Trigger 1 Register
@{*/

/** HRTIM_Common_ADC1R_AD1TEPER ADC trigger 1 on Timer E Period **/
#define HRTIM_Common_ADC1R_AD1TEPER		(1 << 31)
/** HRTIM_Common_ADC1R_AD1TEC4 ADC trigger 1 on Timer E compare 4 **/
#define HRTIM_Common_ADC1R_AD1TEC4		(1 << 30)
/** HRTIM_Common_ADC1R_AD1TEC3 ADC trigger 1 on Timer E compare 3 **/
#define HRTIM_Common_ADC1R_AD1TEC3		(1 << 29)
/** HRTIM_Common_ADC1R_AD1TEC2 ADC trigger 1 on Timer E compare 2 **/
#define HRTIM_Common_ADC1R_AD1TEC2		(1 << 28)
/** HRTIM_Common_ADC1R_AD1TDPER ADC trigger 1 on Timer D Period **/
#define HRTIM_Common_ADC1R_AD1TDPER		(1 << 27)
/** HRTIM_Common_ADC1R_AD1TDC4 ADC trigger 1 on Timer D compare 4 **/
#define HRTIM_Common_ADC1R_AD1TDC4		(1 << 26)
/** HRTIM_Common_ADC1R_AD1TDC3 ADC trigger 1 on Timer D compare 3 **/
#define HRTIM_Common_ADC1R_AD1TDC3		(1 << 25)
/** HRTIM_Common_ADC1R_AD1TDC2 ADC trigger 1 on Timer D compare 2 **/
#define HRTIM_Common_ADC1R_AD1TDC2		(1 << 24)
/** HRTIM_Common_ADC1R_AD1TCPER ADC trigger 1 on Timer C Period **/
#define HRTIM_Common_ADC1R_AD1TCPER		(1 << 23)
/** HRTIM_Common_ADC1R_AD1TCC4 ADC trigger 1 on Timer C compare 4 **/
#define HRTIM_Common_ADC1R_AD1TCC4		(1 << 22)
/** HRTIM_Common_ADC1R_AD1TCC3 ADC trigger 1 on Timer C compare 3 **/
#define HRTIM_Common_ADC1R_AD1TCC3		(1 << 21)
/** HRTIM_Common_ADC1R_AD1TCC2 ADC trigger 1 on Timer C compare 2 **/
#define HRTIM_Common_ADC1R_AD1TCC2		(1 << 20)
/** HRTIM_Common_ADC1R_AD1TBRST ADC trigger 1 on Timer B Reset **/
#define HRTIM_Common_ADC1R_AD1TBRST		(1 << 19)
/** HRTIM_Common_ADC1R_AD1TBPER ADC trigger 1 on Timer B Period **/
#define HRTIM_Common_ADC1R_AD1TBPER		(1 << 18)
/** HRTIM_Common_ADC1R_AD1TBC4 ADC trigger 1 on Timer B compare 4 **/
#define HRTIM_Common_ADC1R_AD1TBC4		(1 << 17)
/** HRTIM_Common_ADC1R_AD1TBC3 ADC trigger 1 on Timer B compare 3 **/
#define HRTIM_Common_ADC1R_AD1TBC3		(1 << 16)
/** HRTIM_Common_ADC1R_AD1TBC2 ADC trigger 1 on Timer B compare 2 **/
#define HRTIM_Common_ADC1R_AD1TBC2		(1 << 15)
/** HRTIM_Common_ADC1R_AD1TARST ADC trigger 1 on Timer A Reset **/
#define HRTIM_Common_ADC1R_AD1TARST		(1 << 14)
/** HRTIM_Common_ADC1R_AD1TAPER ADC trigger 1 on Timer A Period **/
#define HRTIM_Common_ADC1R_AD1TAPER		(1 << 13)
/** HRTIM_Common_ADC1R_AD1TAC4 ADC trigger 1 on Timer A compare 4 **/
#define HRTIM_Common_ADC1R_AD1TAC4		(1 << 12)
/** HRTIM_Common_ADC1R_AD1TAC3 ADC trigger 1 on Timer A compare 3 **/
#define HRTIM_Common_ADC1R_AD1TAC3		(1 << 11)
/** HRTIM_Common_ADC1R_AD1TAC2 ADC trigger 1 on Timer A compare 2 **/
#define HRTIM_Common_ADC1R_AD1TAC2		(1 << 10)
/** HRTIM_Common_ADC1R_AD1EEV5 ADC trigger 1 on External Event 5 **/
#define HRTIM_Common_ADC1R_AD1EEV5		(1 << 9)
/** HRTIM_Common_ADC1R_AD1EEV4 ADC trigger 1 on External Event 4 **/
#define HRTIM_Common_ADC1R_AD1EEV4		(1 << 8)
/** HRTIM_Common_ADC1R_AD1EEV3 ADC trigger 1 on External Event 3 **/
#define HRTIM_Common_ADC1R_AD1EEV3		(1 << 7)
/** HRTIM_Common_ADC1R_AD1EEV2 ADC trigger 1 on External Event 2 **/
#define HRTIM_Common_ADC1R_AD1EEV2		(1 << 6)
/** HRTIM_Common_ADC1R_AD1EEV1 ADC trigger 1 on External Event 1 **/
#define HRTIM_Common_ADC1R_AD1EEV1		(1 << 5)
/** HRTIM_Common_ADC1R_AD1MPER ADC trigger 1 on Master Period **/
#define HRTIM_Common_ADC1R_AD1MPER		(1 << 4)
/** HRTIM_Common_ADC1R_AD1MC4 ADC trigger 1 on Master Compare 4 **/
#define HRTIM_Common_ADC1R_AD1MC4		(1 << 3)
/** HRTIM_Common_ADC1R_AD1MC3 ADC trigger 1 on Master Compare 3 **/
#define HRTIM_Common_ADC1R_AD1MC3		(1 << 2)
/** HRTIM_Common_ADC1R_AD1MC2 ADC trigger 1 on Master Compare 2 **/
#define HRTIM_Common_ADC1R_AD1MC2		(1 << 1)
/** HRTIM_Common_ADC1R_AD1MC1 ADC trigger 1 on Master Compare 1 **/
#define HRTIM_Common_ADC1R_AD1MC1		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_adc2r ADC2R ADC Trigger 2 Register
@{*/

/** HRTIM_Common_ADC2R_AD2TERST ADC trigger 2 on Timer E Reset **/
#define HRTIM_Common_ADC2R_AD2TERST		(1 << 31)
/** HRTIM_Common_ADC2R_AD2TEC4 ADC trigger 2 on Timer E compare 4 **/
#define HRTIM_Common_ADC2R_AD2TEC4		(1 << 30)
/** HRTIM_Common_ADC2R_AD2TEC3 ADC trigger 2 on Timer E compare 3 **/
#define HRTIM_Common_ADC2R_AD2TEC3		(1 << 29)
/** HRTIM_Common_ADC2R_AD2TEC2 ADC trigger 2 on Timer E compare 2 **/
#define HRTIM_Common_ADC2R_AD2TEC2		(1 << 28)
/** HRTIM_Common_ADC2R_AD2TDRST ADC trigger 2 on Timer D Reset **/
#define HRTIM_Common_ADC2R_AD2TDRST		(1 << 27)
/** HRTIM_Common_ADC2R_AD2TDPER ADC trigger 2 on Timer D Period **/
#define HRTIM_Common_ADC2R_AD2TDPER		(1 << 26)
/** HRTIM_Common_ADC2R_AD2TDC4 ADC trigger 2 on Timer D compare 4 **/
#define HRTIM_Common_ADC2R_AD2TDC4		(1 << 25)
/** HRTIM_Common_ADC2R_AD2TDC3 ADC trigger 2 on Timer D compare 3 **/
#define HRTIM_Common_ADC2R_AD2TDC3		(1 << 24)
/** HRTIM_Common_ADC2R_AD2TDC2 ADC trigger 2 on Timer D compare 2 **/
#define HRTIM_Common_ADC2R_AD2TDC2		(1 << 23)
/** HRTIM_Common_ADC2R_AD2TCRST ADC trigger 2 on Timer C Reset **/
#define HRTIM_Common_ADC2R_AD2TCRST		(1 << 22)
/** HRTIM_Common_ADC2R_AD2TCPER ADC trigger 2 on Timer C Period **/
#define HRTIM_Common_ADC2R_AD2TCPER		(1 << 21)
/** HRTIM_Common_ADC2R_AD2TCC4 ADC trigger 2 on Timer C compare 4 **/
#define HRTIM_Common_ADC2R_AD2TCC4		(1 << 20)
/** HRTIM_Common_ADC2R_AD2TCC3 ADC trigger 2 on Timer C compare 3 **/
#define HRTIM_Common_ADC2R_AD2TCC3		(1 << 19)
/** HRTIM_Common_ADC2R_AD2TCC2 ADC trigger 2 on Timer C compare 2 **/
#define HRTIM_Common_ADC2R_AD2TCC2		(1 << 18)
/** HRTIM_Common_ADC2R_AD2TBPER ADC trigger 2 on Timer B Period **/
#define HRTIM_Common_ADC2R_AD2TBPER		(1 << 17)
/** HRTIM_Common_ADC2R_AD2TBC4 ADC trigger 2 on Timer B compare 4 **/
#define HRTIM_Common_ADC2R_AD2TBC4		(1 << 16)
/** HRTIM_Common_ADC2R_AD2TBC3 ADC trigger 2 on Timer B compare 3 **/
#define HRTIM_Common_ADC2R_AD2TBC3		(1 << 15)
/** HRTIM_Common_ADC2R_AD2TBC2 ADC trigger 2 on Timer B compare 2 **/
#define HRTIM_Common_ADC2R_AD2TBC2		(1 << 14)
/** HRTIM_Common_ADC2R_AD2TAPER ADC trigger 2 on Timer A Period **/
#define HRTIM_Common_ADC2R_AD2TAPER		(1 << 13)
/** HRTIM_Common_ADC2R_AD2TAC4 ADC trigger 2 on Timer A compare 4 **/
#define HRTIM_Common_ADC2R_AD2TAC4		(1 << 12)
/** HRTIM_Common_ADC2R_AD2TAC3 ADC trigger 2 on Timer A compare 3 **/
#define HRTIM_Common_ADC2R_AD2TAC3		(1 << 11)
/** HRTIM_Common_ADC2R_AD2TAC2 ADC trigger 2 on Timer A compare 2 **/
#define HRTIM_Common_ADC2R_AD2TAC2		(1 << 10)
/** HRTIM_Common_ADC2R_AD2EEV10 ADC trigger 2 on External Event 10 **/
#define HRTIM_Common_ADC2R_AD2EEV10		(1 << 9)
/** HRTIM_Common_ADC2R_AD2EEV9 ADC trigger 2 on External Event 9 **/
#define HRTIM_Common_ADC2R_AD2EEV9		(1 << 8)
/** HRTIM_Common_ADC2R_AD2EEV8 ADC trigger 2 on External Event 8 **/
#define HRTIM_Common_ADC2R_AD2EEV8		(1 << 7)
/** HRTIM_Common_ADC2R_AD2EEV7 ADC trigger 2 on External Event 7 **/
#define HRTIM_Common_ADC2R_AD2EEV7		(1 << 6)
/** HRTIM_Common_ADC2R_AD2EEV6 ADC trigger 2 on External Event 6 **/
#define HRTIM_Common_ADC2R_AD2EEV6		(1 << 5)
/** HRTIM_Common_ADC2R_AD2MPER ADC trigger 2 on Master Period **/
#define HRTIM_Common_ADC2R_AD2MPER		(1 << 4)
/** HRTIM_Common_ADC2R_AD2MC4 ADC trigger 2 on Master Compare 4 **/
#define HRTIM_Common_ADC2R_AD2MC4		(1 << 3)
/** HRTIM_Common_ADC2R_AD2MC3 ADC trigger 2 on Master Compare 3 **/
#define HRTIM_Common_ADC2R_AD2MC3		(1 << 2)
/** HRTIM_Common_ADC2R_AD2MC2 ADC trigger 2 on Master Compare 2 **/
#define HRTIM_Common_ADC2R_AD2MC2		(1 << 1)
/** HRTIM_Common_ADC2R_AD2MC1 ADC trigger 2 on Master Compare 1 **/
#define HRTIM_Common_ADC2R_AD2MC1		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_adc3r ADC3R ADC Trigger 3 Register
@{*/

/** HRTIM_Common_ADC3R_AD1TEPER AD1TEPER **/
#define HRTIM_Common_ADC3R_AD1TEPER		(1 << 31)
/** HRTIM_Common_ADC3R_AD1TEC4 AD1TEC4 **/
#define HRTIM_Common_ADC3R_AD1TEC4		(1 << 30)
/** HRTIM_Common_ADC3R_AD1TEC3 AD1TEC3 **/
#define HRTIM_Common_ADC3R_AD1TEC3		(1 << 29)
/** HRTIM_Common_ADC3R_AD1TEC2 AD1TEC2 **/
#define HRTIM_Common_ADC3R_AD1TEC2		(1 << 28)
/** HRTIM_Common_ADC3R_AD1TDPER AD1TDPER **/
#define HRTIM_Common_ADC3R_AD1TDPER		(1 << 27)
/** HRTIM_Common_ADC3R_AD1TDC4 AD1TDC4 **/
#define HRTIM_Common_ADC3R_AD1TDC4		(1 << 26)
/** HRTIM_Common_ADC3R_AD1TDC3 AD1TDC3 **/
#define HRTIM_Common_ADC3R_AD1TDC3		(1 << 25)
/** HRTIM_Common_ADC3R_AD1TDC2 AD1TDC2 **/
#define HRTIM_Common_ADC3R_AD1TDC2		(1 << 24)
/** HRTIM_Common_ADC3R_AD1TCPER AD1TCPER **/
#define HRTIM_Common_ADC3R_AD1TCPER		(1 << 23)
/** HRTIM_Common_ADC3R_AD1TCC4 AD1TCC4 **/
#define HRTIM_Common_ADC3R_AD1TCC4		(1 << 22)
/** HRTIM_Common_ADC3R_AD1TCC3 AD1TCC3 **/
#define HRTIM_Common_ADC3R_AD1TCC3		(1 << 21)
/** HRTIM_Common_ADC3R_AD1TCC2 AD1TCC2 **/
#define HRTIM_Common_ADC3R_AD1TCC2		(1 << 20)
/** HRTIM_Common_ADC3R_AD1TBRST AD1TBRST **/
#define HRTIM_Common_ADC3R_AD1TBRST		(1 << 19)
/** HRTIM_Common_ADC3R_AD1TBPER AD1TBPER **/
#define HRTIM_Common_ADC3R_AD1TBPER		(1 << 18)
/** HRTIM_Common_ADC3R_AD1TBC4 AD1TBC4 **/
#define HRTIM_Common_ADC3R_AD1TBC4		(1 << 17)
/** HRTIM_Common_ADC3R_AD1TBC3 AD1TBC3 **/
#define HRTIM_Common_ADC3R_AD1TBC3		(1 << 16)
/** HRTIM_Common_ADC3R_AD1TBC2 AD1TBC2 **/
#define HRTIM_Common_ADC3R_AD1TBC2		(1 << 15)
/** HRTIM_Common_ADC3R_AD1TARST AD1TARST **/
#define HRTIM_Common_ADC3R_AD1TARST		(1 << 14)
/** HRTIM_Common_ADC3R_AD1TAPER AD1TAPER **/
#define HRTIM_Common_ADC3R_AD1TAPER		(1 << 13)
/** HRTIM_Common_ADC3R_AD1TAC4 AD1TAC4 **/
#define HRTIM_Common_ADC3R_AD1TAC4		(1 << 12)
/** HRTIM_Common_ADC3R_AD1TAC3 AD1TAC3 **/
#define HRTIM_Common_ADC3R_AD1TAC3		(1 << 11)
/** HRTIM_Common_ADC3R_AD1TAC2 AD1TAC2 **/
#define HRTIM_Common_ADC3R_AD1TAC2		(1 << 10)
/** HRTIM_Common_ADC3R_AD1EEV5 AD1EEV5 **/
#define HRTIM_Common_ADC3R_AD1EEV5		(1 << 9)
/** HRTIM_Common_ADC3R_AD1EEV4 AD1EEV4 **/
#define HRTIM_Common_ADC3R_AD1EEV4		(1 << 8)
/** HRTIM_Common_ADC3R_AD1EEV3 AD1EEV3 **/
#define HRTIM_Common_ADC3R_AD1EEV3		(1 << 7)
/** HRTIM_Common_ADC3R_AD1EEV2 AD1EEV2 **/
#define HRTIM_Common_ADC3R_AD1EEV2		(1 << 6)
/** HRTIM_Common_ADC3R_AD1EEV1 AD1EEV1 **/
#define HRTIM_Common_ADC3R_AD1EEV1		(1 << 5)
/** HRTIM_Common_ADC3R_AD1MPER AD1MPER **/
#define HRTIM_Common_ADC3R_AD1MPER		(1 << 4)
/** HRTIM_Common_ADC3R_AD1MC4 AD1MC4 **/
#define HRTIM_Common_ADC3R_AD1MC4		(1 << 3)
/** HRTIM_Common_ADC3R_AD1MC3 AD1MC3 **/
#define HRTIM_Common_ADC3R_AD1MC3		(1 << 2)
/** HRTIM_Common_ADC3R_AD1MC2 AD1MC2 **/
#define HRTIM_Common_ADC3R_AD1MC2		(1 << 1)
/** HRTIM_Common_ADC3R_AD1MC1 AD1MC1 **/
#define HRTIM_Common_ADC3R_AD1MC1		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_adc4r ADC4R ADC Trigger 4 Register
@{*/

/** HRTIM_Common_ADC4R_AD2TERST AD2TERST **/
#define HRTIM_Common_ADC4R_AD2TERST		(1 << 31)
/** HRTIM_Common_ADC4R_AD2TEC4 AD2TEC4 **/
#define HRTIM_Common_ADC4R_AD2TEC4		(1 << 30)
/** HRTIM_Common_ADC4R_AD2TEC3 AD2TEC3 **/
#define HRTIM_Common_ADC4R_AD2TEC3		(1 << 29)
/** HRTIM_Common_ADC4R_AD2TEC2 AD2TEC2 **/
#define HRTIM_Common_ADC4R_AD2TEC2		(1 << 28)
/** HRTIM_Common_ADC4R_AD2TDRST AD2TDRST **/
#define HRTIM_Common_ADC4R_AD2TDRST		(1 << 27)
/** HRTIM_Common_ADC4R_AD2TDPER AD2TDPER **/
#define HRTIM_Common_ADC4R_AD2TDPER		(1 << 26)
/** HRTIM_Common_ADC4R_AD2TDC4 AD2TDC4 **/
#define HRTIM_Common_ADC4R_AD2TDC4		(1 << 25)
/** HRTIM_Common_ADC4R_AD2TDC3 AD2TDC3 **/
#define HRTIM_Common_ADC4R_AD2TDC3		(1 << 24)
/** HRTIM_Common_ADC4R_AD2TDC2 AD2TDC2 **/
#define HRTIM_Common_ADC4R_AD2TDC2		(1 << 23)
/** HRTIM_Common_ADC4R_AD2TCRST AD2TCRST **/
#define HRTIM_Common_ADC4R_AD2TCRST		(1 << 22)
/** HRTIM_Common_ADC4R_AD2TCPER AD2TCPER **/
#define HRTIM_Common_ADC4R_AD2TCPER		(1 << 21)
/** HRTIM_Common_ADC4R_AD2TCC4 AD2TCC4 **/
#define HRTIM_Common_ADC4R_AD2TCC4		(1 << 20)
/** HRTIM_Common_ADC4R_AD2TCC3 AD2TCC3 **/
#define HRTIM_Common_ADC4R_AD2TCC3		(1 << 19)
/** HRTIM_Common_ADC4R_AD2TCC2 AD2TCC2 **/
#define HRTIM_Common_ADC4R_AD2TCC2		(1 << 18)
/** HRTIM_Common_ADC4R_AD2TBPER AD2TBPER **/
#define HRTIM_Common_ADC4R_AD2TBPER		(1 << 17)
/** HRTIM_Common_ADC4R_AD2TBC4 AD2TBC4 **/
#define HRTIM_Common_ADC4R_AD2TBC4		(1 << 16)
/** HRTIM_Common_ADC4R_AD2TBC3 AD2TBC3 **/
#define HRTIM_Common_ADC4R_AD2TBC3		(1 << 15)
/** HRTIM_Common_ADC4R_AD2TBC2 AD2TBC2 **/
#define HRTIM_Common_ADC4R_AD2TBC2		(1 << 14)
/** HRTIM_Common_ADC4R_AD2TAPER AD2TAPER **/
#define HRTIM_Common_ADC4R_AD2TAPER		(1 << 13)
/** HRTIM_Common_ADC4R_AD2TAC4 AD2TAC4 **/
#define HRTIM_Common_ADC4R_AD2TAC4		(1 << 12)
/** HRTIM_Common_ADC4R_AD2TAC3 AD2TAC3 **/
#define HRTIM_Common_ADC4R_AD2TAC3		(1 << 11)
/** HRTIM_Common_ADC4R_AD2TAC2 AD2TAC2 **/
#define HRTIM_Common_ADC4R_AD2TAC2		(1 << 10)
/** HRTIM_Common_ADC4R_AD2EEV10 AD2EEV10 **/
#define HRTIM_Common_ADC4R_AD2EEV10		(1 << 9)
/** HRTIM_Common_ADC4R_AD2EEV9 AD2EEV9 **/
#define HRTIM_Common_ADC4R_AD2EEV9		(1 << 8)
/** HRTIM_Common_ADC4R_AD2EEV8 AD2EEV8 **/
#define HRTIM_Common_ADC4R_AD2EEV8		(1 << 7)
/** HRTIM_Common_ADC4R_AD2EEV7 AD2EEV7 **/
#define HRTIM_Common_ADC4R_AD2EEV7		(1 << 6)
/** HRTIM_Common_ADC4R_AD2EEV6 AD2EEV6 **/
#define HRTIM_Common_ADC4R_AD2EEV6		(1 << 5)
/** HRTIM_Common_ADC4R_AD2MPER AD2MPER **/
#define HRTIM_Common_ADC4R_AD2MPER		(1 << 4)
/** HRTIM_Common_ADC4R_AD2MC4 AD2MC4 **/
#define HRTIM_Common_ADC4R_AD2MC4		(1 << 3)
/** HRTIM_Common_ADC4R_AD2MC3 AD2MC3 **/
#define HRTIM_Common_ADC4R_AD2MC3		(1 << 2)
/** HRTIM_Common_ADC4R_AD2MC2 AD2MC2 **/
#define HRTIM_Common_ADC4R_AD2MC2		(1 << 1)
/** HRTIM_Common_ADC4R_AD2MC1 AD2MC1 **/
#define HRTIM_Common_ADC4R_AD2MC1		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_dllcr DLLCR DLL Control Register
@{*/


#define HRTIM_Common_DLLCR_CALRTE_SHIFT		2
#define HRTIM_Common_DLLCR_CALRTE_MASK		0x03
/** @defgroup hrtim_common_dllcr_calrte CALRTE DLL Calibration rate
@{*/
/**@}*/

/** HRTIM_Common_DLLCR_CALEN DLL Calibration Enable **/
#define HRTIM_Common_DLLCR_CALEN		(1 << 1)
/** HRTIM_Common_DLLCR_CAL DLL Calibration Start **/
#define HRTIM_Common_DLLCR_CAL		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_fltinr1 FLTINR1 HRTIM Fault Input Register 1
@{*/

/** HRTIM_Common_FLTINR1_FLT4LCK FLT4LCK **/
#define HRTIM_Common_FLTINR1_FLT4LCK		(1 << 31)

#define HRTIM_Common_FLTINR1_FLT4F_SHIFT		27
#define HRTIM_Common_FLTINR1_FLT4F_MASK		0x0f
/** @defgroup hrtim_common_fltinr1_flt4f FLT4F FLT4F
@{*/
/**@}*/

/** HRTIM_Common_FLTINR1_FLT4SRC FLT4SRC **/
#define HRTIM_Common_FLTINR1_FLT4SRC		(1 << 26)
/** HRTIM_Common_FLTINR1_FLT4P FLT4P **/
#define HRTIM_Common_FLTINR1_FLT4P		(1 << 25)
/** HRTIM_Common_FLTINR1_FLT4E FLT4E **/
#define HRTIM_Common_FLTINR1_FLT4E		(1 << 24)
/** HRTIM_Common_FLTINR1_FLT3LCK FLT3LCK **/
#define HRTIM_Common_FLTINR1_FLT3LCK		(1 << 23)

#define HRTIM_Common_FLTINR1_FLT3F_SHIFT		19
#define HRTIM_Common_FLTINR1_FLT3F_MASK		0x0f
/** @defgroup hrtim_common_fltinr1_flt3f FLT3F FLT3F
@{*/
/**@}*/

/** HRTIM_Common_FLTINR1_FLT3SRC FLT3SRC **/
#define HRTIM_Common_FLTINR1_FLT3SRC		(1 << 18)
/** HRTIM_Common_FLTINR1_FLT3P FLT3P **/
#define HRTIM_Common_FLTINR1_FLT3P		(1 << 17)
/** HRTIM_Common_FLTINR1_FLT3E FLT3E **/
#define HRTIM_Common_FLTINR1_FLT3E		(1 << 16)
/** HRTIM_Common_FLTINR1_FLT2LCK FLT2LCK **/
#define HRTIM_Common_FLTINR1_FLT2LCK		(1 << 15)

#define HRTIM_Common_FLTINR1_FLT2F_SHIFT		11
#define HRTIM_Common_FLTINR1_FLT2F_MASK		0x0f
/** @defgroup hrtim_common_fltinr1_flt2f FLT2F FLT2F
@{*/
/**@}*/

/** HRTIM_Common_FLTINR1_FLT2SRC FLT2SRC **/
#define HRTIM_Common_FLTINR1_FLT2SRC		(1 << 10)
/** HRTIM_Common_FLTINR1_FLT2P FLT2P **/
#define HRTIM_Common_FLTINR1_FLT2P		(1 << 9)
/** HRTIM_Common_FLTINR1_FLT2E FLT2E **/
#define HRTIM_Common_FLTINR1_FLT2E		(1 << 8)
/** HRTIM_Common_FLTINR1_FLT1LCK FLT1LCK **/
#define HRTIM_Common_FLTINR1_FLT1LCK		(1 << 7)

#define HRTIM_Common_FLTINR1_FLT1F_SHIFT		3
#define HRTIM_Common_FLTINR1_FLT1F_MASK		0x0f
/** @defgroup hrtim_common_fltinr1_flt1f FLT1F FLT1F
@{*/
/**@}*/

/** HRTIM_Common_FLTINR1_FLT1SRC FLT1SRC **/
#define HRTIM_Common_FLTINR1_FLT1SRC		(1 << 2)
/** HRTIM_Common_FLTINR1_FLT1P FLT1P **/
#define HRTIM_Common_FLTINR1_FLT1P		(1 << 1)
/** HRTIM_Common_FLTINR1_FLT1E FLT1E **/
#define HRTIM_Common_FLTINR1_FLT1E		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_fltinr2 FLTINR2 HRTIM Fault Input Register 2
@{*/


#define HRTIM_Common_FLTINR2_FLTSD_SHIFT		24
#define HRTIM_Common_FLTINR2_FLTSD_MASK		0x03
/** @defgroup hrtim_common_fltinr2_fltsd FLTSD FLTSD
@{*/
/**@}*/

/** HRTIM_Common_FLTINR2_FLT6SRC_1 FLT6SRC **/
#define HRTIM_Common_FLTINR2_FLT6SRC_1		(1 << 21)
/** HRTIM_Common_FLTINR2_FLT5SRC_1 FLT5SRC_1 **/
#define HRTIM_Common_FLTINR2_FLT5SRC_1		(1 << 20)
/** HRTIM_Common_FLTINR2_FLT4SRC_1 FLT4SRC_1 **/
#define HRTIM_Common_FLTINR2_FLT4SRC_1		(1 << 19)
/** HRTIM_Common_FLTINR2_FLT3SRC_1 FLT3SRC_1 **/
#define HRTIM_Common_FLTINR2_FLT3SRC_1		(1 << 18)
/** HRTIM_Common_FLTINR2_FLT2SRC_1 FLT2SRC_1 **/
#define HRTIM_Common_FLTINR2_FLT2SRC_1		(1 << 17)
/** HRTIM_Common_FLTINR2_FLT1SRC_1 FLT1SRC_1 **/
#define HRTIM_Common_FLTINR2_FLT1SRC_1		(1 << 16)
/** HRTIM_Common_FLTINR2_FLT6LCK FLT6LCK **/
#define HRTIM_Common_FLTINR2_FLT6LCK		(1 << 15)

#define HRTIM_Common_FLTINR2_FLT6F_SHIFT		11
#define HRTIM_Common_FLTINR2_FLT6F_MASK		0x0f
/** @defgroup hrtim_common_fltinr2_flt6f FLT6F FLT6F
@{*/
/**@}*/

/** HRTIM_Common_FLTINR2_FLT6SRC_0 FLT6F **/
#define HRTIM_Common_FLTINR2_FLT6SRC_0		(1 << 10)
/** HRTIM_Common_FLTINR2_FLT6P FLT6P **/
#define HRTIM_Common_FLTINR2_FLT6P		(1 << 9)
/** HRTIM_Common_FLTINR2_FLT6E FLT6E **/
#define HRTIM_Common_FLTINR2_FLT6E		(1 << 8)
/** HRTIM_Common_FLTINR2_FLT5LCK FLT5LCK **/
#define HRTIM_Common_FLTINR2_FLT5LCK		(1 << 7)

#define HRTIM_Common_FLTINR2_FLT5F_SHIFT		3
#define HRTIM_Common_FLTINR2_FLT5F_MASK		0x0f
/** @defgroup hrtim_common_fltinr2_flt5f FLT5F FLT5F
@{*/
/**@}*/

/** HRTIM_Common_FLTINR2_FLT5SRC FLT5SRC **/
#define HRTIM_Common_FLTINR2_FLT5SRC		(1 << 2)
/** HRTIM_Common_FLTINR2_FLT5P FLT5P **/
#define HRTIM_Common_FLTINR2_FLT5P		(1 << 1)
/** HRTIM_Common_FLTINR2_FLT5E FLT5E **/
#define HRTIM_Common_FLTINR2_FLT5E		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_bdmupdr BDMUPDR BDMUPDR
@{*/

/** HRTIM_Common_BDMUPDR_MCMP4 MCMP4 **/
#define HRTIM_Common_BDMUPDR_MCMP4		(1 << 9)
/** HRTIM_Common_BDMUPDR_MCMP3 MCMP3 **/
#define HRTIM_Common_BDMUPDR_MCMP3		(1 << 8)
/** HRTIM_Common_BDMUPDR_MCMP2 MCMP2 **/
#define HRTIM_Common_BDMUPDR_MCMP2		(1 << 7)
/** HRTIM_Common_BDMUPDR_MCMP1 MCMP1 **/
#define HRTIM_Common_BDMUPDR_MCMP1		(1 << 6)
/** HRTIM_Common_BDMUPDR_MREP MREP **/
#define HRTIM_Common_BDMUPDR_MREP		(1 << 5)
/** HRTIM_Common_BDMUPDR_MPER MPER **/
#define HRTIM_Common_BDMUPDR_MPER		(1 << 4)
/** HRTIM_Common_BDMUPDR_MCNT MCNT **/
#define HRTIM_Common_BDMUPDR_MCNT		(1 << 3)
/** HRTIM_Common_BDMUPDR_MDIER MDIER **/
#define HRTIM_Common_BDMUPDR_MDIER		(1 << 2)
/** HRTIM_Common_BDMUPDR_MICR MICR **/
#define HRTIM_Common_BDMUPDR_MICR		(1 << 1)
/** HRTIM_Common_BDMUPDR_MCR MCR **/
#define HRTIM_Common_BDMUPDR_MCR		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_bdtaupr BDTAUPR Burst DMA Timerx update Register
@{*/

/** HRTIM_Common_BDTAUPR_TIMxEEFR3 TIMxEEFR3 **/
#define HRTIM_Common_BDTAUPR_TIMxEEFR3		(1 << 22)
/** HRTIM_Common_BDTAUPR_TIMxCR2 TIMxCR2 **/
#define HRTIM_Common_BDTAUPR_TIMxCR2		(1 << 21)
/** HRTIM_Common_BDTAUPR_TIMxFLTR HRTIM_FLTxR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxFLTR		(1 << 20)
/** HRTIM_Common_BDTAUPR_TIMxOUTR HRTIM_OUTxR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxOUTR		(1 << 19)
/** HRTIM_Common_BDTAUPR_TIMxCHPR HRTIM_CHPxR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxCHPR		(1 << 18)
/** HRTIM_Common_BDTAUPR_TIMxRSTR HRTIM_RSTxR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxRSTR		(1 << 17)
/** HRTIM_Common_BDTAUPR_TIMxEEFR2 HRTIM_EEFxR2 register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxEEFR2		(1 << 16)
/** HRTIM_Common_BDTAUPR_TIMxEEFR1 HRTIM_EEFxR1 register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxEEFR1		(1 << 15)
/** HRTIM_Common_BDTAUPR_TIMxRST2R HRTIM_RST2xR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxRST2R		(1 << 14)
/** HRTIM_Common_BDTAUPR_TIMxSET2R HRTIM_SET2xR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxSET2R		(1 << 13)
/** HRTIM_Common_BDTAUPR_TIMxRST1R HRTIM_RST1xR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxRST1R		(1 << 12)
/** HRTIM_Common_BDTAUPR_TIMxSET1R HRTIM_SET1xR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxSET1R		(1 << 11)
/** HRTIM_Common_BDTAUPR_TIMx_DTxR HRTIM_DTxR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMx_DTxR		(1 << 10)
/** HRTIM_Common_BDTAUPR_TIMxCMP4 HRTIM_CMP4xR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxCMP4		(1 << 9)
/** HRTIM_Common_BDTAUPR_TIMxCMP3 HRTIM_CMP3xR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxCMP3		(1 << 8)
/** HRTIM_Common_BDTAUPR_TIMxCMP2 HRTIM_CMP2xR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxCMP2		(1 << 7)
/** HRTIM_Common_BDTAUPR_TIMxCMP1 HRTIM_CMP1xR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxCMP1		(1 << 6)
/** HRTIM_Common_BDTAUPR_TIMxREP HRTIM_REPxR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxREP		(1 << 5)
/** HRTIM_Common_BDTAUPR_TIMxPER HRTIM_PERxR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxPER		(1 << 4)
/** HRTIM_Common_BDTAUPR_TIMxCNT HRTIM_CNTxR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxCNT		(1 << 3)
/** HRTIM_Common_BDTAUPR_TIMxDIER HRTIM_TIMxDIER register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxDIER		(1 << 2)
/** HRTIM_Common_BDTAUPR_TIMxICR HRTIM_TIMxICR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxICR		(1 << 1)
/** HRTIM_Common_BDTAUPR_TIMxCR HRTIM_TIMxCR register update enable **/
#define HRTIM_Common_BDTAUPR_TIMxCR		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_bdtbupr BDTBUPR Burst DMA Timerx update Register
@{*/

/** HRTIM_Common_BDTBUPR_TIMxEEFR3 TIMxEEFR3 **/
#define HRTIM_Common_BDTBUPR_TIMxEEFR3		(1 << 22)
/** HRTIM_Common_BDTBUPR_TIMxCR2 TIMxCR2 **/
#define HRTIM_Common_BDTBUPR_TIMxCR2		(1 << 21)
/** HRTIM_Common_BDTBUPR_TIMxFLTR HRTIM_FLTxR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxFLTR		(1 << 20)
/** HRTIM_Common_BDTBUPR_TIMxOUTR HRTIM_OUTxR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxOUTR		(1 << 19)
/** HRTIM_Common_BDTBUPR_TIMxCHPR HRTIM_CHPxR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxCHPR		(1 << 18)
/** HRTIM_Common_BDTBUPR_TIMxRSTR HRTIM_RSTxR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxRSTR		(1 << 17)
/** HRTIM_Common_BDTBUPR_TIMxEEFR2 HRTIM_EEFxR2 register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxEEFR2		(1 << 16)
/** HRTIM_Common_BDTBUPR_TIMxEEFR1 HRTIM_EEFxR1 register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxEEFR1		(1 << 15)
/** HRTIM_Common_BDTBUPR_TIMxRST2R HRTIM_RST2xR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxRST2R		(1 << 14)
/** HRTIM_Common_BDTBUPR_TIMxSET2R HRTIM_SET2xR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxSET2R		(1 << 13)
/** HRTIM_Common_BDTBUPR_TIMxRST1R HRTIM_RST1xR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxRST1R		(1 << 12)
/** HRTIM_Common_BDTBUPR_TIMxSET1R HRTIM_SET1xR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxSET1R		(1 << 11)
/** HRTIM_Common_BDTBUPR_TIMx_DTxR HRTIM_DTxR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMx_DTxR		(1 << 10)
/** HRTIM_Common_BDTBUPR_TIMxCMP4 HRTIM_CMP4xR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxCMP4		(1 << 9)
/** HRTIM_Common_BDTBUPR_TIMxCMP3 HRTIM_CMP3xR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxCMP3		(1 << 8)
/** HRTIM_Common_BDTBUPR_TIMxCMP2 HRTIM_CMP2xR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxCMP2		(1 << 7)
/** HRTIM_Common_BDTBUPR_TIMxCMP1 HRTIM_CMP1xR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxCMP1		(1 << 6)
/** HRTIM_Common_BDTBUPR_TIMxREP HRTIM_REPxR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxREP		(1 << 5)
/** HRTIM_Common_BDTBUPR_TIMxPER HRTIM_PERxR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxPER		(1 << 4)
/** HRTIM_Common_BDTBUPR_TIMxCNT HRTIM_CNTxR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxCNT		(1 << 3)
/** HRTIM_Common_BDTBUPR_TIMxDIER HRTIM_TIMxDIER register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxDIER		(1 << 2)
/** HRTIM_Common_BDTBUPR_TIMxICR HRTIM_TIMxICR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxICR		(1 << 1)
/** HRTIM_Common_BDTBUPR_TIMxCR HRTIM_TIMxCR register update enable **/
#define HRTIM_Common_BDTBUPR_TIMxCR		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_bdtcupr BDTCUPR Burst DMA Timerx update Register
@{*/

/** HRTIM_Common_BDTCUPR_TIMxEEFR3 TIMxEEFR3 **/
#define HRTIM_Common_BDTCUPR_TIMxEEFR3		(1 << 22)
/** HRTIM_Common_BDTCUPR_TIMxCR2 TIMxCR2 **/
#define HRTIM_Common_BDTCUPR_TIMxCR2		(1 << 21)
/** HRTIM_Common_BDTCUPR_TIMxFLTR HRTIM_FLTxR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxFLTR		(1 << 20)
/** HRTIM_Common_BDTCUPR_TIMxOUTR HRTIM_OUTxR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxOUTR		(1 << 19)
/** HRTIM_Common_BDTCUPR_TIMxCHPR HRTIM_CHPxR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxCHPR		(1 << 18)
/** HRTIM_Common_BDTCUPR_TIMxRSTR HRTIM_RSTxR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxRSTR		(1 << 17)
/** HRTIM_Common_BDTCUPR_TIMxEEFR2 HRTIM_EEFxR2 register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxEEFR2		(1 << 16)
/** HRTIM_Common_BDTCUPR_TIMxEEFR1 HRTIM_EEFxR1 register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxEEFR1		(1 << 15)
/** HRTIM_Common_BDTCUPR_TIMxRST2R HRTIM_RST2xR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxRST2R		(1 << 14)
/** HRTIM_Common_BDTCUPR_TIMxSET2R HRTIM_SET2xR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxSET2R		(1 << 13)
/** HRTIM_Common_BDTCUPR_TIMxRST1R HRTIM_RST1xR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxRST1R		(1 << 12)
/** HRTIM_Common_BDTCUPR_TIMxSET1R HRTIM_SET1xR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxSET1R		(1 << 11)
/** HRTIM_Common_BDTCUPR_TIMx_DTxR HRTIM_DTxR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMx_DTxR		(1 << 10)
/** HRTIM_Common_BDTCUPR_TIMxCMP4 HRTIM_CMP4xR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxCMP4		(1 << 9)
/** HRTIM_Common_BDTCUPR_TIMxCMP3 HRTIM_CMP3xR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxCMP3		(1 << 8)
/** HRTIM_Common_BDTCUPR_TIMxCMP2 HRTIM_CMP2xR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxCMP2		(1 << 7)
/** HRTIM_Common_BDTCUPR_TIMxCMP1 HRTIM_CMP1xR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxCMP1		(1 << 6)
/** HRTIM_Common_BDTCUPR_TIMxREP HRTIM_REPxR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxREP		(1 << 5)
/** HRTIM_Common_BDTCUPR_TIMxPER HRTIM_PERxR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxPER		(1 << 4)
/** HRTIM_Common_BDTCUPR_TIMxCNT HRTIM_CNTxR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxCNT		(1 << 3)
/** HRTIM_Common_BDTCUPR_TIMxDIER HRTIM_TIMxDIER register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxDIER		(1 << 2)
/** HRTIM_Common_BDTCUPR_TIMxICR HRTIM_TIMxICR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxICR		(1 << 1)
/** HRTIM_Common_BDTCUPR_TIMxCR HRTIM_TIMxCR register update enable **/
#define HRTIM_Common_BDTCUPR_TIMxCR		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_bdtdupr BDTDUPR Burst DMA Timerx update Register
@{*/

/** HRTIM_Common_BDTDUPR_TIMxEEFR3 TIMxEEFR3 **/
#define HRTIM_Common_BDTDUPR_TIMxEEFR3		(1 << 22)
/** HRTIM_Common_BDTDUPR_TIMxCR2 TIMxCR2 **/
#define HRTIM_Common_BDTDUPR_TIMxCR2		(1 << 21)
/** HRTIM_Common_BDTDUPR_TIMxFLTR HRTIM_FLTxR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxFLTR		(1 << 20)
/** HRTIM_Common_BDTDUPR_TIMxOUTR HRTIM_OUTxR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxOUTR		(1 << 19)
/** HRTIM_Common_BDTDUPR_TIMxCHPR HRTIM_CHPxR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxCHPR		(1 << 18)
/** HRTIM_Common_BDTDUPR_TIMxRSTR HRTIM_RSTxR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxRSTR		(1 << 17)
/** HRTIM_Common_BDTDUPR_TIMxEEFR2 HRTIM_EEFxR2 register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxEEFR2		(1 << 16)
/** HRTIM_Common_BDTDUPR_TIMxEEFR1 HRTIM_EEFxR1 register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxEEFR1		(1 << 15)
/** HRTIM_Common_BDTDUPR_TIMxRST2R HRTIM_RST2xR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxRST2R		(1 << 14)
/** HRTIM_Common_BDTDUPR_TIMxSET2R HRTIM_SET2xR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxSET2R		(1 << 13)
/** HRTIM_Common_BDTDUPR_TIMxRST1R HRTIM_RST1xR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxRST1R		(1 << 12)
/** HRTIM_Common_BDTDUPR_TIMxSET1R HRTIM_SET1xR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxSET1R		(1 << 11)
/** HRTIM_Common_BDTDUPR_TIMx_DTxR HRTIM_DTxR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMx_DTxR		(1 << 10)
/** HRTIM_Common_BDTDUPR_TIMxCMP4 HRTIM_CMP4xR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxCMP4		(1 << 9)
/** HRTIM_Common_BDTDUPR_TIMxCMP3 HRTIM_CMP3xR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxCMP3		(1 << 8)
/** HRTIM_Common_BDTDUPR_TIMxCMP2 HRTIM_CMP2xR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxCMP2		(1 << 7)
/** HRTIM_Common_BDTDUPR_TIMxCMP1 HRTIM_CMP1xR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxCMP1		(1 << 6)
/** HRTIM_Common_BDTDUPR_TIMxREP HRTIM_REPxR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxREP		(1 << 5)
/** HRTIM_Common_BDTDUPR_TIMxPER HRTIM_PERxR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxPER		(1 << 4)
/** HRTIM_Common_BDTDUPR_TIMxCNT HRTIM_CNTxR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxCNT		(1 << 3)
/** HRTIM_Common_BDTDUPR_TIMxDIER HRTIM_TIMxDIER register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxDIER		(1 << 2)
/** HRTIM_Common_BDTDUPR_TIMxICR HRTIM_TIMxICR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxICR		(1 << 1)
/** HRTIM_Common_BDTDUPR_TIMxCR HRTIM_TIMxCR register update enable **/
#define HRTIM_Common_BDTDUPR_TIMxCR		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_bdteupr BDTEUPR Burst DMA Timerx update Register
@{*/

/** HRTIM_Common_BDTEUPR_TIMxEEFR3 TIMxEEFR3 **/
#define HRTIM_Common_BDTEUPR_TIMxEEFR3		(1 << 22)
/** HRTIM_Common_BDTEUPR_TIMxCR2 TIMxCR2 **/
#define HRTIM_Common_BDTEUPR_TIMxCR2		(1 << 21)
/** HRTIM_Common_BDTEUPR_TIMxFLTR HRTIM_FLTxR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxFLTR		(1 << 20)
/** HRTIM_Common_BDTEUPR_TIMxOUTR HRTIM_OUTxR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxOUTR		(1 << 19)
/** HRTIM_Common_BDTEUPR_TIMxCHPR HRTIM_CHPxR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxCHPR		(1 << 18)
/** HRTIM_Common_BDTEUPR_TIMxRSTR HRTIM_RSTxR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxRSTR		(1 << 17)
/** HRTIM_Common_BDTEUPR_TIMxEEFR2 HRTIM_EEFxR2 register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxEEFR2		(1 << 16)
/** HRTIM_Common_BDTEUPR_TIMxEEFR1 HRTIM_EEFxR1 register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxEEFR1		(1 << 15)
/** HRTIM_Common_BDTEUPR_TIMxRST2R HRTIM_RST2xR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxRST2R		(1 << 14)
/** HRTIM_Common_BDTEUPR_TIMxSET2R HRTIM_SET2xR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxSET2R		(1 << 13)
/** HRTIM_Common_BDTEUPR_TIMxRST1R HRTIM_RST1xR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxRST1R		(1 << 12)
/** HRTIM_Common_BDTEUPR_TIMxSET1R HRTIM_SET1xR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxSET1R		(1 << 11)
/** HRTIM_Common_BDTEUPR_TIMx_DTxR HRTIM_DTxR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMx_DTxR		(1 << 10)
/** HRTIM_Common_BDTEUPR_TIMxCMP4 HRTIM_CMP4xR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxCMP4		(1 << 9)
/** HRTIM_Common_BDTEUPR_TIMxCMP3 HRTIM_CMP3xR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxCMP3		(1 << 8)
/** HRTIM_Common_BDTEUPR_TIMxCMP2 HRTIM_CMP2xR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxCMP2		(1 << 7)
/** HRTIM_Common_BDTEUPR_TIMxCMP1 HRTIM_CMP1xR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxCMP1		(1 << 6)
/** HRTIM_Common_BDTEUPR_TIMxREP HRTIM_REPxR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxREP		(1 << 5)
/** HRTIM_Common_BDTEUPR_TIMxPER HRTIM_PERxR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxPER		(1 << 4)
/** HRTIM_Common_BDTEUPR_TIMxCNT HRTIM_CNTxR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxCNT		(1 << 3)
/** HRTIM_Common_BDTEUPR_TIMxDIER HRTIM_TIMxDIER register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxDIER		(1 << 2)
/** HRTIM_Common_BDTEUPR_TIMxICR HRTIM_TIMxICR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxICR		(1 << 1)
/** HRTIM_Common_BDTEUPR_TIMxCR HRTIM_TIMxCR register update enable **/
#define HRTIM_Common_BDTEUPR_TIMxCR		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_bdmadr BDMADR Burst DMA Data Register
@{*/


#define HRTIM_Common_BDMADR_BDMADR_SHIFT		0
#define HRTIM_Common_BDMADR_BDMADR_MASK		0xffffffff
/** @defgroup hrtim_common_bdmadr_bdmadr BDMADR Burst DMA Data register
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_common_bdtfupr BDTFUPR Burst DMA Timerx update Register
@{*/

/** HRTIM_Common_BDTFUPR_TIMxEEFR3 TIMxEEFR3 **/
#define HRTIM_Common_BDTFUPR_TIMxEEFR3		(1 << 22)
/** HRTIM_Common_BDTFUPR_TIMxCR2 TIMxCR2 **/
#define HRTIM_Common_BDTFUPR_TIMxCR2		(1 << 21)
/** HRTIM_Common_BDTFUPR_TIMxFLTR HRTIM_FLTxR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxFLTR		(1 << 20)
/** HRTIM_Common_BDTFUPR_TIMxOUTR HRTIM_OUTxR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxOUTR		(1 << 19)
/** HRTIM_Common_BDTFUPR_TIMxCHPR HRTIM_CHPxR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxCHPR		(1 << 18)
/** HRTIM_Common_BDTFUPR_TIMxRSTR HRTIM_RSTxR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxRSTR		(1 << 17)
/** HRTIM_Common_BDTFUPR_TIMxEEFR2 HRTIM_EEFxR2 register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxEEFR2		(1 << 16)
/** HRTIM_Common_BDTFUPR_TIMxEEFR1 HRTIM_EEFxR1 register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxEEFR1		(1 << 15)
/** HRTIM_Common_BDTFUPR_TIMxRST2R HRTIM_RST2xR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxRST2R		(1 << 14)
/** HRTIM_Common_BDTFUPR_TIMxSET2R HRTIM_SET2xR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxSET2R		(1 << 13)
/** HRTIM_Common_BDTFUPR_TIMxRST1R HRTIM_RST1xR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxRST1R		(1 << 12)
/** HRTIM_Common_BDTFUPR_TIMxSET1R HRTIM_SET1xR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxSET1R		(1 << 11)
/** HRTIM_Common_BDTFUPR_TIMx_DTxR HRTIM_DTxR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMx_DTxR		(1 << 10)
/** HRTIM_Common_BDTFUPR_TIMxCMP4 HRTIM_CMP4xR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxCMP4		(1 << 9)
/** HRTIM_Common_BDTFUPR_TIMxCMP3 HRTIM_CMP3xR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxCMP3		(1 << 8)
/** HRTIM_Common_BDTFUPR_TIMxCMP2 HRTIM_CMP2xR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxCMP2		(1 << 7)
/** HRTIM_Common_BDTFUPR_TIMxCMP1 HRTIM_CMP1xR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxCMP1		(1 << 6)
/** HRTIM_Common_BDTFUPR_TIMxREP HRTIM_REPxR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxREP		(1 << 5)
/** HRTIM_Common_BDTFUPR_TIMxPER HRTIM_PERxR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxPER		(1 << 4)
/** HRTIM_Common_BDTFUPR_TIMxCNT HRTIM_CNTxR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxCNT		(1 << 3)
/** HRTIM_Common_BDTFUPR_TIMxDIER HRTIM_TIMxDIER register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxDIER		(1 << 2)
/** HRTIM_Common_BDTFUPR_TIMxICR HRTIM_TIMxICR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxICR		(1 << 1)
/** HRTIM_Common_BDTFUPR_TIMxCR HRTIM_TIMxCR register update enable **/
#define HRTIM_Common_BDTFUPR_TIMxCR		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_adcer ADCER HRTIM ADC Extended Trigger Register
@{*/


#define HRTIM_Common_ADCER_ADC10TRG_SHIFT		26
#define HRTIM_Common_ADCER_ADC10TRG_MASK		0x1f
/** @defgroup hrtim_common_adcer_adc10trg ADC10TRG ADC10TRG
@{*/
/**@}*/


#define HRTIM_Common_ADCER_ADC9TRG_SHIFT		21
#define HRTIM_Common_ADCER_ADC9TRG_MASK		0x1f
/** @defgroup hrtim_common_adcer_adc9trg ADC9TRG ADC9TRG
@{*/
/**@}*/


#define HRTIM_Common_ADCER_ADC8TRG_SHIFT		16
#define HRTIM_Common_ADCER_ADC8TRG_MASK		0x1f
/** @defgroup hrtim_common_adcer_adc8trg ADC8TRG ADC8TRG
@{*/
/**@}*/


#define HRTIM_Common_ADCER_ADC7TRG_SHIFT		10
#define HRTIM_Common_ADCER_ADC7TRG_MASK		0x1f
/** @defgroup hrtim_common_adcer_adc7trg ADC7TRG ADC7TRG
@{*/
/**@}*/


#define HRTIM_Common_ADCER_ADC6TRG_SHIFT		5
#define HRTIM_Common_ADCER_ADC6TRG_MASK		0x1f
/** @defgroup hrtim_common_adcer_adc6trg ADC6TRG ADC6TRG
@{*/
/**@}*/


#define HRTIM_Common_ADCER_ADC5TRG_SHIFT		0
#define HRTIM_Common_ADCER_ADC5TRG_MASK		0x1f
/** @defgroup hrtim_common_adcer_adc5trg ADC5TRG ADC5TRG
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_common_adcur ADCUR HRTIM ADC Trigger Update Register
@{*/


#define HRTIM_Common_ADCUR_AD10USRC_SHIFT		20
#define HRTIM_Common_ADCUR_AD10USRC_MASK		0x07
/** @defgroup hrtim_common_adcur_ad10usrc AD10USRC AD10USRC
@{*/
/**@}*/


#define HRTIM_Common_ADCUR_AD9USRC_SHIFT		16
#define HRTIM_Common_ADCUR_AD9USRC_MASK		0x07
/** @defgroup hrtim_common_adcur_ad9usrc AD9USRC AD9USRC
@{*/
/**@}*/


#define HRTIM_Common_ADCUR_AD8USRC_SHIFT		12
#define HRTIM_Common_ADCUR_AD8USRC_MASK		0x07
/** @defgroup hrtim_common_adcur_ad8usrc AD8USRC AD8USRC
@{*/
/**@}*/


#define HRTIM_Common_ADCUR_AD7USRC_SHIFT		8
#define HRTIM_Common_ADCUR_AD7USRC_MASK		0x07
/** @defgroup hrtim_common_adcur_ad7usrc AD7USRC AD7USRC
@{*/
/**@}*/


#define HRTIM_Common_ADCUR_AD6USRC_SHIFT		4
#define HRTIM_Common_ADCUR_AD6USRC_MASK		0x07
/** @defgroup hrtim_common_adcur_ad6usrc AD6USRC AD6USRC
@{*/
/**@}*/


#define HRTIM_Common_ADCUR_AD5USRC_SHIFT		0
#define HRTIM_Common_ADCUR_AD5USRC_MASK		0x07
/** @defgroup hrtim_common_adcur_ad5usrc AD5USRC AD5USRC
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_common_adcps1 ADCPS1 HRTIM ADC Post Scaler Register 1
@{*/


#define HRTIM_Common_ADCPS1_ADC5PSC_SHIFT		24
#define HRTIM_Common_ADCPS1_ADC5PSC_MASK		0x1f
/** @defgroup hrtim_common_adcps1_adc5psc ADC5PSC ADC5PSC
@{*/
/**@}*/


#define HRTIM_Common_ADCPS1_ADC4PSC_SHIFT		18
#define HRTIM_Common_ADCPS1_ADC4PSC_MASK		0x1f
/** @defgroup hrtim_common_adcps1_adc4psc ADC4PSC ADC4PSC
@{*/
/**@}*/


#define HRTIM_Common_ADCPS1_ADC3PSC_SHIFT		12
#define HRTIM_Common_ADCPS1_ADC3PSC_MASK		0x1f
/** @defgroup hrtim_common_adcps1_adc3psc ADC3PSC ADC3PSC
@{*/
/**@}*/


#define HRTIM_Common_ADCPS1_ADC2PSC_SHIFT		6
#define HRTIM_Common_ADCPS1_ADC2PSC_MASK		0x1f
/** @defgroup hrtim_common_adcps1_adc2psc ADC2PSC ADC2PSC
@{*/
/**@}*/


#define HRTIM_Common_ADCPS1_ADC1PSC_SHIFT		0
#define HRTIM_Common_ADCPS1_ADC1PSC_MASK		0x1f
/** @defgroup hrtim_common_adcps1_adc1psc ADC1PSC ADC1PSC
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_common_adcps2 ADCPS2 HRTIM ADC Post Scaler Register 2
@{*/


#define HRTIM_Common_ADCPS2_ADC10PSC_SHIFT		24
#define HRTIM_Common_ADCPS2_ADC10PSC_MASK		0x1f
/** @defgroup hrtim_common_adcps2_adc10psc ADC10PSC ADC10PSC
@{*/
/**@}*/


#define HRTIM_Common_ADCPS2_ADC9PSC_SHIFT		18
#define HRTIM_Common_ADCPS2_ADC9PSC_MASK		0x1f
/** @defgroup hrtim_common_adcps2_adc9psc ADC9PSC ADC9PSC
@{*/
/**@}*/


#define HRTIM_Common_ADCPS2_ADC8PSC_SHIFT		12
#define HRTIM_Common_ADCPS2_ADC8PSC_MASK		0x1f
/** @defgroup hrtim_common_adcps2_adc8psc ADC8PSC ADC8PSC
@{*/
/**@}*/


#define HRTIM_Common_ADCPS2_ADC7PSC_SHIFT		6
#define HRTIM_Common_ADCPS2_ADC7PSC_MASK		0x1f
/** @defgroup hrtim_common_adcps2_adc7psc ADC7PSC ADC7PSC
@{*/
/**@}*/


#define HRTIM_Common_ADCPS2_ADC6PSC_SHIFT		0
#define HRTIM_Common_ADCPS2_ADC6PSC_MASK		0x1f
/** @defgroup hrtim_common_adcps2_adc6psc ADC6PSC ADC6PSC
@{*/
/**@}*/


/**@}*/

/** @defgroup hrtim_common_fltinr3 FLTINR3 HRTIM Fault Input Register 3
@{*/

/** HRTIM_Common_FLTINR3_FLT4RSTM FLT4RSTM **/
#define HRTIM_Common_FLTINR3_FLT4RSTM		(1 << 31)
/** HRTIM_Common_FLTINR3_FLT4CRES FLT4CRES **/
#define HRTIM_Common_FLTINR3_FLT4CRES		(1 << 30)

#define HRTIM_Common_FLTINR3_FLT4CNT_SHIFT		26
#define HRTIM_Common_FLTINR3_FLT4CNT_MASK		0x0f
/** @defgroup hrtim_common_fltinr3_flt4cnt FLT4CNT FLT4CNT
@{*/
/**@}*/

/** HRTIM_Common_FLTINR3_FLT4BLKS FLT4BLKS **/
#define HRTIM_Common_FLTINR3_FLT4BLKS		(1 << 25)
/** HRTIM_Common_FLTINR3_FLT4BLKE FLT4BLKE **/
#define HRTIM_Common_FLTINR3_FLT4BLKE		(1 << 24)
/** HRTIM_Common_FLTINR3_FLT3RSTM FLT3RSTM **/
#define HRTIM_Common_FLTINR3_FLT3RSTM		(1 << 23)
/** HRTIM_Common_FLTINR3_FLT3CRES FLT3CRES **/
#define HRTIM_Common_FLTINR3_FLT3CRES		(1 << 22)

#define HRTIM_Common_FLTINR3_FLT3CNT_SHIFT		18
#define HRTIM_Common_FLTINR3_FLT3CNT_MASK		0x0f
/** @defgroup hrtim_common_fltinr3_flt3cnt FLT3CNT FLT3CNT
@{*/
/**@}*/

/** HRTIM_Common_FLTINR3_FLT3BLKS FLT3BLKS **/
#define HRTIM_Common_FLTINR3_FLT3BLKS		(1 << 17)
/** HRTIM_Common_FLTINR3_FLT3BLKE FLT3BLKE **/
#define HRTIM_Common_FLTINR3_FLT3BLKE		(1 << 16)
/** HRTIM_Common_FLTINR3_FLT2RSTM FLT2RSTM **/
#define HRTIM_Common_FLTINR3_FLT2RSTM		(1 << 15)
/** HRTIM_Common_FLTINR3_FLT2CRES FLT2CRES **/
#define HRTIM_Common_FLTINR3_FLT2CRES		(1 << 14)

#define HRTIM_Common_FLTINR3_FLT2CNT_SHIFT		10
#define HRTIM_Common_FLTINR3_FLT2CNT_MASK		0x0f
/** @defgroup hrtim_common_fltinr3_flt2cnt FLT2CNT FLT2CNT
@{*/
/**@}*/

/** HRTIM_Common_FLTINR3_FLT2BLKS FLT2BLKS **/
#define HRTIM_Common_FLTINR3_FLT2BLKS		(1 << 9)
/** HRTIM_Common_FLTINR3_FLT2BLKE FLT2BLKE **/
#define HRTIM_Common_FLTINR3_FLT2BLKE		(1 << 8)
/** HRTIM_Common_FLTINR3_FLT1RSTM FLT1RSTM **/
#define HRTIM_Common_FLTINR3_FLT1RSTM		(1 << 7)
/** HRTIM_Common_FLTINR3_FLT1CRES FLT1CRES **/
#define HRTIM_Common_FLTINR3_FLT1CRES		(1 << 6)

#define HRTIM_Common_FLTINR3_FLT1CNT_SHIFT		2
#define HRTIM_Common_FLTINR3_FLT1CNT_MASK		0x0f
/** @defgroup hrtim_common_fltinr3_flt1cnt FLT1CNT FLT1CNT
@{*/
/**@}*/

/** HRTIM_Common_FLTINR3_FLT1BLKS FLT1BLKS **/
#define HRTIM_Common_FLTINR3_FLT1BLKS		(1 << 1)
/** HRTIM_Common_FLTINR3_FLT1BLKE FLT1BLKE **/
#define HRTIM_Common_FLTINR3_FLT1BLKE		(1 << 0)

/**@}*/

/** @defgroup hrtim_common_fltinr4 FLTINR4 HRTIM Fault Input Register 4
@{*/

/** HRTIM_Common_FLTINR4_FLT6RSTM FLT6RSTM **/
#define HRTIM_Common_FLTINR4_FLT6RSTM		(1 << 15)
/** HRTIM_Common_FLTINR4_FLT6CRES FLT6CRES **/
#define HRTIM_Common_FLTINR4_FLT6CRES		(1 << 14)

#define HRTIM_Common_FLTINR4_FLT6CNT_SHIFT		10
#define HRTIM_Common_FLTINR4_FLT6CNT_MASK		0x0f
/** @defgroup hrtim_common_fltinr4_flt6cnt FLT6CNT FLT6CNT
@{*/
/**@}*/

/** HRTIM_Common_FLTINR4_FLT6BLKS FLT6BLKS **/
#define HRTIM_Common_FLTINR4_FLT6BLKS		(1 << 9)
/** HRTIM_Common_FLTINR4_FLT6BLKE FLT6BLKE **/
#define HRTIM_Common_FLTINR4_FLT6BLKE		(1 << 8)
/** HRTIM_Common_FLTINR4_FLT5RSTM FLT5RSTM **/
#define HRTIM_Common_FLTINR4_FLT5RSTM		(1 << 7)
/** HRTIM_Common_FLTINR4_FLT5CRES FLT5CRES **/
#define HRTIM_Common_FLTINR4_FLT5CRES		(1 << 6)

#define HRTIM_Common_FLTINR4_FLT5CNT_SHIFT		2
#define HRTIM_Common_FLTINR4_FLT5CNT_MASK		0x0f
/** @defgroup hrtim_common_fltinr4_flt5cnt FLT5CNT FLT5CNT
@{*/
/**@}*/

/** HRTIM_Common_FLTINR4_FLT5BLKS FLT5BLKS **/
#define HRTIM_Common_FLTINR4_FLT5BLKS		(1 << 1)
/** HRTIM_Common_FLTINR4_FLT5BLKE FLT5BLKE **/
#define HRTIM_Common_FLTINR4_FLT5BLKE		(1 << 0)

/**@}*/

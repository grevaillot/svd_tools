#pragma once 

/* --- PWR: Power control ------------------------------------------- */

/** @defgroup pwr_registers Power control Register
@{*/

/** PWR_PWR_DSLEEPCR1 PWR_DSLEEPCR1 **/
#define PWR_PWR_DSLEEPCR1			MMIO32(PWR_BASE + 0x00)
/** PWR_PWR_DSLEEPCR2 PWR_DSLEEPCR2 **/
#define PWR_PWR_DSLEEPCR2			MMIO32(PWR_BASE + 0x10)
/** PWR_PWR_VREGCR Voltage regulator Control register **/
#define PWR_PWR_VREGCR			MMIO32(PWR_BASE + 0x14)
/** PWR_PWR_WAKECR1 PWR_WAKECR1 **/
#define PWR_PWR_WAKECR1			MMIO32(PWR_BASE + 0x1c)
/** PWR_PWR_WAKECR2 PWR_WAKECR2 **/
#define PWR_PWR_WAKECR2			MMIO32(PWR_BASE + 0x20)
/** PWR_PWR_WAKESR PWR_WAKESR **/
#define PWR_PWR_WAKESR			MMIO32(PWR_BASE + 0x24)
/** PWR_PWR_CPWRUPREQSR PWR_CPWRUPREQSR **/
#define PWR_PWR_CPWRUPREQSR			MMIO32(PWR_BASE + 0x30)
/** PWR_PWR_CSYSPWRUPREQSR PWR_CSYSPWRUPREQSR **/
#define PWR_PWR_CSYSPWRUPREQSR			MMIO32(PWR_BASE + 0x34)
/** PWR_PWR_CSYSPWRUPACKSR PWR_CSYSPWRUPACKSR **/
#define PWR_PWR_CSYSPWRUPACKSR			MMIO32(PWR_BASE + 0x38)
/** PWR_PWR_CSYSPWRUPACKCR PWR_CSYSPWRUPACKCR **/
#define PWR_PWR_CSYSPWRUPACKCR			MMIO32(PWR_BASE + 0x3c)
/** PWR_PWR_WAKEPAR Wake GPIO Port A register **/
#define PWR_PWR_WAKEPAR			MMIO32(PWR_BASE + 0xbc04)
/** PWR_PWR_WAKEPBR Wake GPIO Port B register **/
#define PWR_PWR_WAKEPBR			MMIO32(PWR_BASE + 0xbc08)
/** PWR_PWR_WAKEPCR Wake GPIO Port C register **/
#define PWR_PWR_WAKEPCR			MMIO32(PWR_BASE + 0xbc0c)
/** PWR_PWR_WAKEFILTR Wake filter register **/
#define PWR_PWR_WAKEFILTR			MMIO32(PWR_BASE + 0xbc18)

/**@}*/


/** @defgroup pwr_pwr_dsleepcr1 PWRDSLEEPCR1 PWR_DSLEEPCR1
@{*/

/** PWR_PWR_DSLEEPCR1_PWR_CSYSPWRUPACKCR PWR_CSYSPWRUPACKCR **/
#define PWR_PWR_DSLEEPCR1_PWR_CSYSPWRUPACKCR		(1 << 1)

/**@}*/

/** @defgroup pwr_pwr_dsleepcr2 PWRDSLEEPCR2 PWR_DSLEEPCR2
@{*/

/** PWR_PWR_DSLEEPCR2_MODE MODE **/
#define PWR_PWR_DSLEEPCR2_MODE		(1 << 0)

/**@}*/

/** @defgroup pwr_pwr_vregcr PWRVREGCR Voltage regulator Control register
@{*/

/** PWR_PWR_VREGCR_PWR_VREGCR_VREFEN VREF on/off **/
#define PWR_PWR_VREGCR_PWR_VREGCR_VREFEN		(1 << 15)
/** PWR_PWR_VREGCR_PWR_VREGCR_1V8EN 1V8 direct controle of regulator on/off **/
#define PWR_PWR_VREGCR_PWR_VREGCR_1V8EN		(1 << 11)

#define PWR_PWR_VREGCR_PWR_VREGCR_1V8TRIM_SHIFT		7
#define PWR_PWR_VREGCR_PWR_VREGCR_1V8TRIM_MASK		0x07
/** @defgroup pwr_pwr_vregcr_pwr_vregcr_1v8trim PWRVREGCR1V8TRIM 1V8 regulator trim value
@{*/
/**@}*/

/** PWR_PWR_VREGCR_PWR_VREGCR_1V2EN 1V2 direct controle of regulator on/off **/
#define PWR_PWR_VREGCR_PWR_VREGCR_1V2EN		(1 << 4)

#define PWR_PWR_VREGCR_PWR_VREGCR_1V2TRIM_SHIFT		0
#define PWR_PWR_VREGCR_PWR_VREGCR_1V2TRIM_MASK		0x07
/** @defgroup pwr_pwr_vregcr_pwr_vregcr_1v2trim PWRVREGCR1V2TRIM 1V2 regulator trim value
@{*/
/**@}*/


/**@}*/

/** @defgroup pwr_pwr_wakecr1 PWRWAKECR1 PWR_WAKECR1
@{*/

/** PWR_PWR_WAKECR1_CSYSPWRUPREQ CSYSPWRUPREQ **/
#define PWR_PWR_WAKECR1_CSYSPWRUPREQ		(1 << 9)
/** PWR_PWR_WAKECR1_CPWRRUPREQ CPWRRUPREQ **/
#define PWR_PWR_WAKECR1_CPWRRUPREQ		(1 << 8)
/** PWR_PWR_WAKECR1_CORE CORE **/
#define PWR_PWR_WAKECR1_CORE		(1 << 7)
/** PWR_PWR_WAKECR1_WRAP WRAP **/
#define PWR_PWR_WAKECR1_WRAP		(1 << 6)
/** PWR_PWR_WAKECR1_COMPB COMPB **/
#define PWR_PWR_WAKECR1_COMPB		(1 << 5)
/** PWR_PWR_WAKECR1_COMPA COMPA **/
#define PWR_PWR_WAKECR1_COMPA		(1 << 4)
/** PWR_PWR_WAKECR1_IRQD IRQD **/
#define PWR_PWR_WAKECR1_IRQD		(1 << 3)
/** PWR_PWR_WAKECR1_SC2 SC2 **/
#define PWR_PWR_WAKECR1_SC2		(1 << 2)
/** PWR_PWR_WAKECR1_SC1 SC1 **/
#define PWR_PWR_WAKECR1_SC1		(1 << 1)
/** PWR_PWR_WAKECR1_WAKEEN WAKEEN **/
#define PWR_PWR_WAKECR1_WAKEEN		(1 << 0)

/**@}*/

/** @defgroup pwr_pwr_wakecr2 PWRWAKECR2 PWR_WAKECR2
@{*/

/** PWR_PWR_WAKECR2_COREWAKE COREWAKE **/
#define PWR_PWR_WAKECR2_COREWAKE		(1 << 5)

/**@}*/

/** @defgroup pwr_pwr_wakesr PWRWAKESR PWR_WAKESR
@{*/

/** PWR_PWR_WAKESR_CSYSPWRUPREQ CSYSPWRUPREQ **/
#define PWR_PWR_WAKESR_CSYSPWRUPREQ		(1 << 9)
/** PWR_PWR_WAKESR_CPWRRUPREQ CPWRRUPREQ **/
#define PWR_PWR_WAKESR_CPWRRUPREQ		(1 << 8)
/** PWR_PWR_WAKESR_CORE CORE **/
#define PWR_PWR_WAKESR_CORE		(1 << 7)
/** PWR_PWR_WAKESR_WRAP WRAP **/
#define PWR_PWR_WAKESR_WRAP		(1 << 6)
/** PWR_PWR_WAKESR_COMPB COMPB **/
#define PWR_PWR_WAKESR_COMPB		(1 << 5)
/** PWR_PWR_WAKESR_COMPA COMPA **/
#define PWR_PWR_WAKESR_COMPA		(1 << 4)
/** PWR_PWR_WAKESR_IRQD IRQD **/
#define PWR_PWR_WAKESR_IRQD		(1 << 3)
/** PWR_PWR_WAKESR_SC2 SC2 **/
#define PWR_PWR_WAKESR_SC2		(1 << 2)
/** PWR_PWR_WAKESR_SC1 SC1 **/
#define PWR_PWR_WAKESR_SC1		(1 << 1)
/** PWR_PWR_WAKESR_GPIOPIN GPIOPIN **/
#define PWR_PWR_WAKESR_GPIOPIN		(1 << 0)

/**@}*/

/** @defgroup pwr_pwr_cpwrupreqsr PWRCPWRUPREQSR PWR_CPWRUPREQSR
@{*/

/** PWR_PWR_CPWRUPREQSR_REQ REQ **/
#define PWR_PWR_CPWRUPREQSR_REQ		(1 << 0)

/**@}*/

/** @defgroup pwr_pwr_csyspwrupreqsr PWRCSYSPWRUPREQSR PWR_CSYSPWRUPREQSR
@{*/

/** PWR_PWR_CSYSPWRUPREQSR_REQ REQ **/
#define PWR_PWR_CSYSPWRUPREQSR_REQ		(1 << 0)

/**@}*/

/** @defgroup pwr_pwr_csyspwrupacksr PWRCSYSPWRUPACKSR PWR_CSYSPWRUPACKSR
@{*/

/** PWR_PWR_CSYSPWRUPACKSR_ACK ACK **/
#define PWR_PWR_CSYSPWRUPACKSR_ACK		(1 << 0)

/**@}*/

/** @defgroup pwr_pwr_csyspwrupackcr PWRCSYSPWRUPACKCR PWR_CSYSPWRUPACKCR
@{*/

/** PWR_PWR_CSYSPWRUPACKCR_INHIBIT INHIBIT **/
#define PWR_PWR_CSYSPWRUPACKCR_INHIBIT		(1 << 0)

/**@}*/

/** @defgroup pwr_pwr_wakepar PWRWAKEPAR Wake GPIO Port A register
@{*/

/** PWR_PWR_WAKEPAR_PA7 PA7 **/
#define PWR_PWR_WAKEPAR_PA7		(1 << 7)
/** PWR_PWR_WAKEPAR_PA6 PA6 **/
#define PWR_PWR_WAKEPAR_PA6		(1 << 6)
/** PWR_PWR_WAKEPAR_PA5 PA5 **/
#define PWR_PWR_WAKEPAR_PA5		(1 << 5)
/** PWR_PWR_WAKEPAR_PA4 PA4 **/
#define PWR_PWR_WAKEPAR_PA4		(1 << 4)
/** PWR_PWR_WAKEPAR_PA3 PA3 **/
#define PWR_PWR_WAKEPAR_PA3		(1 << 3)
/** PWR_PWR_WAKEPAR_PA2 PA2 **/
#define PWR_PWR_WAKEPAR_PA2		(1 << 2)
/** PWR_PWR_WAKEPAR_PA1 PA1 **/
#define PWR_PWR_WAKEPAR_PA1		(1 << 1)
/** PWR_PWR_WAKEPAR_PA0 PA0 **/
#define PWR_PWR_WAKEPAR_PA0		(1 << 0)

/**@}*/

/** @defgroup pwr_pwr_wakepbr PWRWAKEPBR Wake GPIO Port B register
@{*/

/** PWR_PWR_WAKEPBR_PB7 PB7 **/
#define PWR_PWR_WAKEPBR_PB7		(1 << 7)
/** PWR_PWR_WAKEPBR_PB6 PB6 **/
#define PWR_PWR_WAKEPBR_PB6		(1 << 6)
/** PWR_PWR_WAKEPBR_PB5 PB5 **/
#define PWR_PWR_WAKEPBR_PB5		(1 << 5)
/** PWR_PWR_WAKEPBR_PB4 PB4 **/
#define PWR_PWR_WAKEPBR_PB4		(1 << 4)
/** PWR_PWR_WAKEPBR_PB3 PB3 **/
#define PWR_PWR_WAKEPBR_PB3		(1 << 3)
/** PWR_PWR_WAKEPBR_PB2 PB2 **/
#define PWR_PWR_WAKEPBR_PB2		(1 << 2)
/** PWR_PWR_WAKEPBR_PB1 PB1 **/
#define PWR_PWR_WAKEPBR_PB1		(1 << 1)
/** PWR_PWR_WAKEPBR_PB0 PB0 **/
#define PWR_PWR_WAKEPBR_PB0		(1 << 0)

/**@}*/

/** @defgroup pwr_pwr_wakepcr PWRWAKEPCR Wake GPIO Port C register
@{*/

/** PWR_PWR_WAKEPCR_PC7 PC7 **/
#define PWR_PWR_WAKEPCR_PC7		(1 << 7)
/** PWR_PWR_WAKEPCR_PC6 PC6 **/
#define PWR_PWR_WAKEPCR_PC6		(1 << 6)
/** PWR_PWR_WAKEPCR_PC5 PC5 **/
#define PWR_PWR_WAKEPCR_PC5		(1 << 5)
/** PWR_PWR_WAKEPCR_PC4 PC4 **/
#define PWR_PWR_WAKEPCR_PC4		(1 << 4)
/** PWR_PWR_WAKEPCR_PC3 PC3 **/
#define PWR_PWR_WAKEPCR_PC3		(1 << 3)
/** PWR_PWR_WAKEPCR_PC2 PC2 **/
#define PWR_PWR_WAKEPCR_PC2		(1 << 2)
/** PWR_PWR_WAKEPCR_PC1 PC1 **/
#define PWR_PWR_WAKEPCR_PC1		(1 << 1)
/** PWR_PWR_WAKEPCR_PC0 PC0 **/
#define PWR_PWR_WAKEPCR_PC0		(1 << 0)

/**@}*/

/** @defgroup pwr_pwr_wakefiltr PWRWAKEFILTR Wake filter register
@{*/

/** PWR_PWR_WAKEFILTR_IRQD Enable filter on GPIO wakeup source EXTI D **/
#define PWR_PWR_WAKEFILTR_IRQD		(1 << 3)
/** PWR_PWR_WAKEFILTR_SC2 Enable filter on GPIO wakeup source SC2 (PA2) **/
#define PWR_PWR_WAKEFILTR_SC2		(1 << 2)
/** PWR_PWR_WAKEFILTR_SC1 Enable filter on GPIO wakeup source SC1 (PB2) **/
#define PWR_PWR_WAKEFILTR_SC1		(1 << 1)
/** PWR_PWR_WAKEFILTR_GPIO Enable filter on GPIO wakeup sources enabled by the PWR_WAKEPxR registers **/
#define PWR_PWR_WAKEFILTR_GPIO		(1 << 0)

/**@}*/

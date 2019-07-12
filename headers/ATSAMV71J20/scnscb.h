#pragma once 

/* --- SCnSCB: System control not in SCB ---------------------------- */

/** @defgroup scnscb_registers System control not in SCB Register
@{*/

/** SCnSCB_ICTR Interrupt Controller Type Register **/
#define SCnSCB_ICTR			MMIO32(SCnSCB_BASE + 0x04)
/** SCnSCB_ACTLR Auxiliary Control Register **/
#define SCnSCB_ACTLR			MMIO32(SCnSCB_BASE + 0x08)

/**@}*/


/** @defgroup scnscb_ictr ICTR Interrupt Controller Type Register
@{*/


#define SCnSCB_ICTR_INTLINESNUM_SHIFT		0
#define SCnSCB_ICTR_INTLINESNUM_MASK		0x0f
/** @defgroup scnscb_ictr_intlinesnum INTLINESNUM Total number of interrupt lines supported by an implementation, defined in groups of 32
@{*/
/**@}*/


/**@}*/

/** @defgroup scnscb_actlr ACTLR Auxiliary Control Register
@{*/

/** SCnSCB_ACTLR_DISFPUISSOPT Disables dynamic allocation of ADD and SUB instructions **/
#define SCnSCB_ACTLR_DISFPUISSOPT		(1 << 28)
/** SCnSCB_ACTLR_DISCRITAXIRUW Disable critical AXI read-under-write **/
#define SCnSCB_ACTLR_DISCRITAXIRUW		(1 << 27)
/** SCnSCB_ACTLR_DISDYNADD Disables dynamic allocation of ADD and SUB instructions **/
#define SCnSCB_ACTLR_DISDYNADD		(1 << 26)

#define SCnSCB_ACTLR_DISISSCH1_SHIFT		21
#define SCnSCB_ACTLR_DISISSCH1_MASK		0x1f
/** @defgroup scnscb_actlr_disissch1 DISISSCH1 
@{*/
/**@}*/


#define SCnSCB_ACTLR_DISDI_SHIFT		16
#define SCnSCB_ACTLR_DISDI_MASK		0x1f
/** @defgroup scnscb_actlr_disdi DISDI 
@{*/
/**@}*/

/** SCnSCB_ACTLR_DISCRITAXIRUR  **/
#define SCnSCB_ACTLR_DISCRITAXIRUR		(1 << 15)
/** SCnSCB_ACTLR_DISBTACALLOC  **/
#define SCnSCB_ACTLR_DISBTACALLOC		(1 << 14)
/** SCnSCB_ACTLR_DISBTACREAD  **/
#define SCnSCB_ACTLR_DISBTACREAD		(1 << 13)
/** SCnSCB_ACTLR_DISITMATBFLUSH Disables ITM and DWT ATB flush **/
#define SCnSCB_ACTLR_DISITMATBFLUSH		(1 << 12)
/** SCnSCB_ACTLR_DISRAMODE Disables dynamic read allocate mode for Write-Back Write-Allocate memory regions **/
#define SCnSCB_ACTLR_DISRAMODE		(1 << 11)
/** SCnSCB_ACTLR_FPEXCODIS Disables FPU exception outputs **/
#define SCnSCB_ACTLR_FPEXCODIS		(1 << 10)
/** SCnSCB_ACTLR_DISFOLD Disables folding of IT instructions **/
#define SCnSCB_ACTLR_DISFOLD		(1 << 2)

/**@}*/

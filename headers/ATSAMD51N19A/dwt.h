#pragma once 

/* --- DWT: Data Watchpoint and Trace Register ---------------------- */

/** @defgroup dwt_registers Data Watchpoint and Trace Register Register
@{*/

/** DWT_CTRL Control Register **/
#define DWT_CTRL			MMIO32(DWT_BASE + 0x00)
/** DWT_CYCCNT Cycle Count Register **/
#define DWT_CYCCNT			MMIO32(DWT_BASE + 0x04)
/** DWT_CPICNT CPI Count Register **/
#define DWT_CPICNT			MMIO32(DWT_BASE + 0x08)
/** DWT_EXCCNT Exception Overhead Count Register **/
#define DWT_EXCCNT			MMIO32(DWT_BASE + 0x0c)
/** DWT_SLEEPCNT Sleep Count Register **/
#define DWT_SLEEPCNT			MMIO32(DWT_BASE + 0x10)
/** DWT_LSUCNT LSU Count Register **/
#define DWT_LSUCNT			MMIO32(DWT_BASE + 0x14)
/** DWT_FOLDCNT Folded-instruction Count Register **/
#define DWT_FOLDCNT			MMIO32(DWT_BASE + 0x18)
/** DWT_PCSR Program Counter Sample Register **/
#define DWT_PCSR			MMIO32(DWT_BASE + 0x1c)
/** DWT_COMP0 Comparator Register 0 **/
#define DWT_COMP0			MMIO32(DWT_BASE + 0x20)
/** DWT_MASK0 Mask Register 0 **/
#define DWT_MASK0			MMIO32(DWT_BASE + 0x24)
/** DWT_FUNCTION0 Function Register 0 **/
#define DWT_FUNCTION0			MMIO32(DWT_BASE + 0x28)
/** DWT_COMP1 Comparator Register 1 **/
#define DWT_COMP1			MMIO32(DWT_BASE + 0x30)
/** DWT_MASK1 Mask Register 1 **/
#define DWT_MASK1			MMIO32(DWT_BASE + 0x34)
/** DWT_FUNCTION1 Function Register 1 **/
#define DWT_FUNCTION1			MMIO32(DWT_BASE + 0x38)
/** DWT_COMP2 Comparator Register 2 **/
#define DWT_COMP2			MMIO32(DWT_BASE + 0x40)
/** DWT_MASK2 Mask Register 2 **/
#define DWT_MASK2			MMIO32(DWT_BASE + 0x44)
/** DWT_FUNCTION2 Function Register 2 **/
#define DWT_FUNCTION2			MMIO32(DWT_BASE + 0x48)
/** DWT_COMP3 Comparator Register 3 **/
#define DWT_COMP3			MMIO32(DWT_BASE + 0x50)
/** DWT_MASK3 Mask Register 3 **/
#define DWT_MASK3			MMIO32(DWT_BASE + 0x54)
/** DWT_FUNCTION3 Function Register 3 **/
#define DWT_FUNCTION3			MMIO32(DWT_BASE + 0x58)

/**@}*/


/** @defgroup dwt_ctrl CTRL Control Register
@{*/


#define DWT_CTRL_NUMCOMP_SHIFT		28
#define DWT_CTRL_NUMCOMP_MASK		0x0f
/** @defgroup dwt_ctrl_numcomp NUMCOMP 
@{*/
/**@}*/

/** DWT_CTRL_NOTRCPKT  **/
#define DWT_CTRL_NOTRCPKT		(1 << 27)
/** DWT_CTRL_NOEXTTRIG  **/
#define DWT_CTRL_NOEXTTRIG		(1 << 26)
/** DWT_CTRL_NOCYCCNT  **/
#define DWT_CTRL_NOCYCCNT		(1 << 25)
/** DWT_CTRL_NOPRFCNT  **/
#define DWT_CTRL_NOPRFCNT		(1 << 24)
/** DWT_CTRL_CYCEVTENA  **/
#define DWT_CTRL_CYCEVTENA		(1 << 22)
/** DWT_CTRL_FOLDEVTENA  **/
#define DWT_CTRL_FOLDEVTENA		(1 << 21)
/** DWT_CTRL_LSUEVTENA  **/
#define DWT_CTRL_LSUEVTENA		(1 << 20)
/** DWT_CTRL_SLEEPEVTENA  **/
#define DWT_CTRL_SLEEPEVTENA		(1 << 19)
/** DWT_CTRL_EXCEVTENA  **/
#define DWT_CTRL_EXCEVTENA		(1 << 18)
/** DWT_CTRL_CPIEVTENA  **/
#define DWT_CTRL_CPIEVTENA		(1 << 17)
/** DWT_CTRL_EXCTRCENA  **/
#define DWT_CTRL_EXCTRCENA		(1 << 16)
/** DWT_CTRL_PCSAMPLENA  **/
#define DWT_CTRL_PCSAMPLENA		(1 << 12)

#define DWT_CTRL_SYNCTAP_SHIFT		10
#define DWT_CTRL_SYNCTAP_MASK		0x03
/** @defgroup dwt_ctrl_synctap SYNCTAP 
@{*/
/**@}*/

/** DWT_CTRL_CYCTAP  **/
#define DWT_CTRL_CYCTAP		(1 << 9)

#define DWT_CTRL_POSTINIT_SHIFT		5
#define DWT_CTRL_POSTINIT_MASK		0x0f
/** @defgroup dwt_ctrl_postinit POSTINIT 
@{*/
/**@}*/


#define DWT_CTRL_POSTPRESET_SHIFT		1
#define DWT_CTRL_POSTPRESET_MASK		0x0f
/** @defgroup dwt_ctrl_postpreset POSTPRESET 
@{*/
/**@}*/

/** DWT_CTRL_CYCCNTENA  **/
#define DWT_CTRL_CYCCNTENA		(1 << 0)

/**@}*/

/** @defgroup dwt_cyccnt CYCCNT Cycle Count Register
@{*/


/**@}*/

/** @defgroup dwt_cpicnt CPICNT CPI Count Register
@{*/


#define DWT_CPICNT_CPICNT_SHIFT		0
#define DWT_CPICNT_CPICNT_MASK		0xff
/** @defgroup dwt_cpicnt_cpicnt CPICNT 
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_exccnt EXCCNT Exception Overhead Count Register
@{*/


#define DWT_EXCCNT_EXCCNT_SHIFT		0
#define DWT_EXCCNT_EXCCNT_MASK		0xff
/** @defgroup dwt_exccnt_exccnt EXCCNT 
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_sleepcnt SLEEPCNT Sleep Count Register
@{*/


#define DWT_SLEEPCNT_SLEEPCNT_SHIFT		0
#define DWT_SLEEPCNT_SLEEPCNT_MASK		0xff
/** @defgroup dwt_sleepcnt_sleepcnt SLEEPCNT 
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_lsucnt LSUCNT LSU Count Register
@{*/


#define DWT_LSUCNT_LSUCNT_SHIFT		0
#define DWT_LSUCNT_LSUCNT_MASK		0xff
/** @defgroup dwt_lsucnt_lsucnt LSUCNT 
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_foldcnt FOLDCNT Folded-instruction Count Register
@{*/


#define DWT_FOLDCNT_FOLDCNT_SHIFT		0
#define DWT_FOLDCNT_FOLDCNT_MASK		0xff
/** @defgroup dwt_foldcnt_foldcnt FOLDCNT 
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_pcsr PCSR Program Counter Sample Register
@{*/


/**@}*/

/** @defgroup dwt_comp0 COMP0 Comparator Register 0
@{*/


/**@}*/

/** @defgroup dwt_mask0 MASK0 Mask Register 0
@{*/


#define DWT_MASK0_MASK_SHIFT		0
#define DWT_MASK0_MASK_MASK		0x1f
/** @defgroup dwt_mask0_mask MASK 
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_function0 FUNCTION0 Function Register 0
@{*/

/** DWT_FUNCTION0_MATCHED  **/
#define DWT_FUNCTION0_MATCHED		(1 << 24)

#define DWT_FUNCTION0_DATAVADDR1_SHIFT		16
#define DWT_FUNCTION0_DATAVADDR1_MASK		0x0f
/** @defgroup dwt_function0_datavaddr1 DATAVADDR1 
@{*/
/**@}*/


#define DWT_FUNCTION0_DATAVADDR0_SHIFT		12
#define DWT_FUNCTION0_DATAVADDR0_MASK		0x0f
/** @defgroup dwt_function0_datavaddr0 DATAVADDR0 
@{*/
/**@}*/


#define DWT_FUNCTION0_DATAVSIZE_SHIFT		10
#define DWT_FUNCTION0_DATAVSIZE_MASK		0x03
/** @defgroup dwt_function0_datavsize DATAVSIZE 
@{*/
/**@}*/

/** DWT_FUNCTION0_LNK1ENA  **/
#define DWT_FUNCTION0_LNK1ENA		(1 << 9)
/** DWT_FUNCTION0_DATAVMATCH  **/
#define DWT_FUNCTION0_DATAVMATCH		(1 << 8)
/** DWT_FUNCTION0_CYCMATCH  **/
#define DWT_FUNCTION0_CYCMATCH		(1 << 7)
/** DWT_FUNCTION0_EMITRANGE  **/
#define DWT_FUNCTION0_EMITRANGE		(1 << 5)

#define DWT_FUNCTION0_FUNCTION_SHIFT		0
#define DWT_FUNCTION0_FUNCTION_MASK		0x0f
/** @defgroup dwt_function0_function FUNCTION 
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_comp1 COMP1 Comparator Register 1
@{*/


/**@}*/

/** @defgroup dwt_mask1 MASK1 Mask Register 1
@{*/


#define DWT_MASK1_MASK_SHIFT		0
#define DWT_MASK1_MASK_MASK		0x1f
/** @defgroup dwt_mask1_mask MASK 
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_function1 FUNCTION1 Function Register 1
@{*/

/** DWT_FUNCTION1_MATCHED  **/
#define DWT_FUNCTION1_MATCHED		(1 << 24)

#define DWT_FUNCTION1_DATAVADDR1_SHIFT		16
#define DWT_FUNCTION1_DATAVADDR1_MASK		0x0f
/** @defgroup dwt_function1_datavaddr1 DATAVADDR1 
@{*/
/**@}*/


#define DWT_FUNCTION1_DATAVADDR0_SHIFT		12
#define DWT_FUNCTION1_DATAVADDR0_MASK		0x0f
/** @defgroup dwt_function1_datavaddr0 DATAVADDR0 
@{*/
/**@}*/


#define DWT_FUNCTION1_DATAVSIZE_SHIFT		10
#define DWT_FUNCTION1_DATAVSIZE_MASK		0x03
/** @defgroup dwt_function1_datavsize DATAVSIZE 
@{*/
/**@}*/

/** DWT_FUNCTION1_LNK1ENA  **/
#define DWT_FUNCTION1_LNK1ENA		(1 << 9)
/** DWT_FUNCTION1_DATAVMATCH  **/
#define DWT_FUNCTION1_DATAVMATCH		(1 << 8)
/** DWT_FUNCTION1_CYCMATCH  **/
#define DWT_FUNCTION1_CYCMATCH		(1 << 7)
/** DWT_FUNCTION1_EMITRANGE  **/
#define DWT_FUNCTION1_EMITRANGE		(1 << 5)

#define DWT_FUNCTION1_FUNCTION_SHIFT		0
#define DWT_FUNCTION1_FUNCTION_MASK		0x0f
/** @defgroup dwt_function1_function FUNCTION 
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_comp2 COMP2 Comparator Register 2
@{*/


/**@}*/

/** @defgroup dwt_mask2 MASK2 Mask Register 2
@{*/


#define DWT_MASK2_MASK_SHIFT		0
#define DWT_MASK2_MASK_MASK		0x1f
/** @defgroup dwt_mask2_mask MASK 
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_function2 FUNCTION2 Function Register 2
@{*/

/** DWT_FUNCTION2_MATCHED  **/
#define DWT_FUNCTION2_MATCHED		(1 << 24)

#define DWT_FUNCTION2_DATAVADDR1_SHIFT		16
#define DWT_FUNCTION2_DATAVADDR1_MASK		0x0f
/** @defgroup dwt_function2_datavaddr1 DATAVADDR1 
@{*/
/**@}*/


#define DWT_FUNCTION2_DATAVADDR0_SHIFT		12
#define DWT_FUNCTION2_DATAVADDR0_MASK		0x0f
/** @defgroup dwt_function2_datavaddr0 DATAVADDR0 
@{*/
/**@}*/


#define DWT_FUNCTION2_DATAVSIZE_SHIFT		10
#define DWT_FUNCTION2_DATAVSIZE_MASK		0x03
/** @defgroup dwt_function2_datavsize DATAVSIZE 
@{*/
/**@}*/

/** DWT_FUNCTION2_LNK1ENA  **/
#define DWT_FUNCTION2_LNK1ENA		(1 << 9)
/** DWT_FUNCTION2_DATAVMATCH  **/
#define DWT_FUNCTION2_DATAVMATCH		(1 << 8)
/** DWT_FUNCTION2_CYCMATCH  **/
#define DWT_FUNCTION2_CYCMATCH		(1 << 7)
/** DWT_FUNCTION2_EMITRANGE  **/
#define DWT_FUNCTION2_EMITRANGE		(1 << 5)

#define DWT_FUNCTION2_FUNCTION_SHIFT		0
#define DWT_FUNCTION2_FUNCTION_MASK		0x0f
/** @defgroup dwt_function2_function FUNCTION 
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_comp3 COMP3 Comparator Register 3
@{*/


/**@}*/

/** @defgroup dwt_mask3 MASK3 Mask Register 3
@{*/


#define DWT_MASK3_MASK_SHIFT		0
#define DWT_MASK3_MASK_MASK		0x1f
/** @defgroup dwt_mask3_mask MASK 
@{*/
/**@}*/


/**@}*/

/** @defgroup dwt_function3 FUNCTION3 Function Register 3
@{*/

/** DWT_FUNCTION3_MATCHED  **/
#define DWT_FUNCTION3_MATCHED		(1 << 24)

#define DWT_FUNCTION3_DATAVADDR1_SHIFT		16
#define DWT_FUNCTION3_DATAVADDR1_MASK		0x0f
/** @defgroup dwt_function3_datavaddr1 DATAVADDR1 
@{*/
/**@}*/


#define DWT_FUNCTION3_DATAVADDR0_SHIFT		12
#define DWT_FUNCTION3_DATAVADDR0_MASK		0x0f
/** @defgroup dwt_function3_datavaddr0 DATAVADDR0 
@{*/
/**@}*/


#define DWT_FUNCTION3_DATAVSIZE_SHIFT		10
#define DWT_FUNCTION3_DATAVSIZE_MASK		0x03
/** @defgroup dwt_function3_datavsize DATAVSIZE 
@{*/
/**@}*/

/** DWT_FUNCTION3_LNK1ENA  **/
#define DWT_FUNCTION3_LNK1ENA		(1 << 9)
/** DWT_FUNCTION3_DATAVMATCH  **/
#define DWT_FUNCTION3_DATAVMATCH		(1 << 8)
/** DWT_FUNCTION3_CYCMATCH  **/
#define DWT_FUNCTION3_CYCMATCH		(1 << 7)
/** DWT_FUNCTION3_EMITRANGE  **/
#define DWT_FUNCTION3_EMITRANGE		(1 << 5)

#define DWT_FUNCTION3_FUNCTION_SHIFT		0
#define DWT_FUNCTION3_FUNCTION_MASK		0x0f
/** @defgroup dwt_function3_function FUNCTION 
@{*/
/**@}*/


/**@}*/

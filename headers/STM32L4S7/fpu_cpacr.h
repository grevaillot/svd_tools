#pragma once 

/* --- FPU_CPACR: Floating point unit CPACR ------------------------- */

/** @defgroup fpu_cpacr_registers Floating point unit CPACR Register
@{*/

/** FPU_CPACR_CPACR Coprocessor access control register **/
#define FPU_CPACR_CPACR			MMIO32(FPU_CPACR_BASE + 0x00)

/**@}*/


/** @defgroup fpu_cpacr_cpacr CPACR Coprocessor access control register
@{*/


#define FPU_CPACR_CPACR_CP_SHIFT		20
#define FPU_CPACR_CPACR_CP_MASK		0x0f
/** @defgroup fpu_cpacr_cpacr_cp CP CP
@{*/
/**@}*/


/**@}*/

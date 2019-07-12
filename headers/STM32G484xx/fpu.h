#pragma once 

/* --- FPU: Floting point unit -------------------------------------- */

/** @defgroup fpu_registers Floting point unit Register
@{*/

/** FPU_FPCCR Floating-point context control register **/
#define FPU_FPCCR			MMIO32(FPU_BASE + 0x00)
/** FPU_FPCAR Floating-point context address register **/
#define FPU_FPCAR			MMIO32(FPU_BASE + 0x04)
/** FPU_FPSCR Floating-point status control register **/
#define FPU_FPSCR			MMIO32(FPU_BASE + 0x08)

/**@}*/


/** @defgroup fpu_fpccr FPCCR Floating-point context control register
@{*/

/** FPU_FPCCR_ASPEN ASPEN **/
#define FPU_FPCCR_ASPEN		(1 << 31)
/** FPU_FPCCR_LSPEN LSPEN **/
#define FPU_FPCCR_LSPEN		(1 << 30)
/** FPU_FPCCR_MONRDY MONRDY **/
#define FPU_FPCCR_MONRDY		(1 << 8)
/** FPU_FPCCR_BFRDY BFRDY **/
#define FPU_FPCCR_BFRDY		(1 << 6)
/** FPU_FPCCR_MMRDY MMRDY **/
#define FPU_FPCCR_MMRDY		(1 << 5)
/** FPU_FPCCR_HFRDY HFRDY **/
#define FPU_FPCCR_HFRDY		(1 << 4)
/** FPU_FPCCR_THREAD THREAD **/
#define FPU_FPCCR_THREAD		(1 << 3)
/** FPU_FPCCR_USER USER **/
#define FPU_FPCCR_USER		(1 << 1)
/** FPU_FPCCR_LSPACT LSPACT **/
#define FPU_FPCCR_LSPACT		(1 << 0)

/**@}*/

/** @defgroup fpu_fpcar FPCAR Floating-point context address register
@{*/


#define FPU_FPCAR_ADDRESS_SHIFT		3
#define FPU_FPCAR_ADDRESS_MASK		0x1fffffff
/** @defgroup fpu_fpcar_address ADDRESS Location of unpopulated floating-point
@{*/
/**@}*/


/**@}*/

/** @defgroup fpu_fpscr FPSCR Floating-point status control register
@{*/

/** FPU_FPSCR_N Negative condition code flag **/
#define FPU_FPSCR_N		(1 << 31)
/** FPU_FPSCR_Z Zero condition code flag **/
#define FPU_FPSCR_Z		(1 << 30)
/** FPU_FPSCR_C Carry condition code flag **/
#define FPU_FPSCR_C		(1 << 29)
/** FPU_FPSCR_V Overflow condition code flag **/
#define FPU_FPSCR_V		(1 << 28)
/** FPU_FPSCR_AHP Alternative half-precision control bit **/
#define FPU_FPSCR_AHP		(1 << 26)
/** FPU_FPSCR_DN Default NaN mode control bit **/
#define FPU_FPSCR_DN		(1 << 25)
/** FPU_FPSCR_FZ Flush-to-zero mode control bit: **/
#define FPU_FPSCR_FZ		(1 << 24)

#define FPU_FPSCR_RMode_SHIFT		22
#define FPU_FPSCR_RMode_MASK		0x03
/** @defgroup fpu_fpscr_rmode RMode Rounding Mode control field
@{*/
/**@}*/

/** FPU_FPSCR_IDC Input denormal cumulative exception bit. **/
#define FPU_FPSCR_IDC		(1 << 7)
/** FPU_FPSCR_IXC Inexact cumulative exception bit **/
#define FPU_FPSCR_IXC		(1 << 4)
/** FPU_FPSCR_UFC Underflow cumulative exception bit **/
#define FPU_FPSCR_UFC		(1 << 3)
/** FPU_FPSCR_OFC Overflow cumulative exception bit **/
#define FPU_FPSCR_OFC		(1 << 2)
/** FPU_FPSCR_DZC Division by zero cumulative exception bit. **/
#define FPU_FPSCR_DZC		(1 << 1)
/** FPU_FPSCR_IOC Invalid operation cumulative exception bit **/
#define FPU_FPSCR_IOC		(1 << 0)

/**@}*/

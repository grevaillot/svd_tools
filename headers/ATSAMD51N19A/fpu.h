#pragma once 

/* --- FPU: Floating Point Unit ------------------------------------- */

/** @defgroup fpu_registers Floating Point Unit Register
@{*/

/** FPU_FPCCR Floating-Point Context Control Register **/
#define FPU_FPCCR			MMIO32(FPU_BASE + 0x04)
/** FPU_FPCAR Floating-Point Context Address Register **/
#define FPU_FPCAR			MMIO32(FPU_BASE + 0x08)
/** FPU_FPDSCR Floating-Point Default Status Control Register **/
#define FPU_FPDSCR			MMIO32(FPU_BASE + 0x0c)
/** FPU_MVFR0 Media and FP Feature Register 0 **/
#define FPU_MVFR0			MMIO32(FPU_BASE + 0x10)
/** FPU_MVFR1 Media and FP Feature Register 1 **/
#define FPU_MVFR1			MMIO32(FPU_BASE + 0x14)

/**@}*/


/** @defgroup fpu_fpccr FPCCR Floating-Point Context Control Register
@{*/

/** FPU_FPCCR_ASPEN  **/
#define FPU_FPCCR_ASPEN		(1 << 31)
/** FPU_FPCCR_LSPEN  **/
#define FPU_FPCCR_LSPEN		(1 << 30)
/** FPU_FPCCR_MONRDY  **/
#define FPU_FPCCR_MONRDY		(1 << 8)
/** FPU_FPCCR_BFRDY  **/
#define FPU_FPCCR_BFRDY		(1 << 6)
/** FPU_FPCCR_MMRDY  **/
#define FPU_FPCCR_MMRDY		(1 << 5)
/** FPU_FPCCR_HFRDY  **/
#define FPU_FPCCR_HFRDY		(1 << 4)
/** FPU_FPCCR_THREAD  **/
#define FPU_FPCCR_THREAD		(1 << 3)
/** FPU_FPCCR_USER  **/
#define FPU_FPCCR_USER		(1 << 1)
/** FPU_FPCCR_LSPACT  **/
#define FPU_FPCCR_LSPACT		(1 << 0)

/**@}*/

/** @defgroup fpu_fpcar FPCAR Floating-Point Context Address Register
@{*/


#define FPU_FPCAR_ADDRESS_SHIFT		3
#define FPU_FPCAR_ADDRESS_MASK		0x1fffffff
/** @defgroup fpu_fpcar_address ADDRESS Address for FP registers in exception stack frame
@{*/
/**@}*/


/**@}*/

/** @defgroup fpu_fpdscr FPDSCR Floating-Point Default Status Control Register
@{*/

/** FPU_FPDSCR_AHP Default value for FPSCR.AHP **/
#define FPU_FPDSCR_AHP		(1 << 26)
/** FPU_FPDSCR_DN Default value for FPSCR.DN **/
#define FPU_FPDSCR_DN		(1 << 25)
/** FPU_FPDSCR_FZ Default value for FPSCR.FZ **/
#define FPU_FPDSCR_FZ		(1 << 24)

#define FPU_FPDSCR_RMODE_SHIFT		22
#define FPU_FPDSCR_RMODE_MASK		0x03
/** @defgroup fpu_fpdscr_rmode RMODE Default value for FPSCR.RMODE
@{*/
/**@}*/


/**@}*/

/** @defgroup fpu_mvfr0 MVFR0 Media and FP Feature Register 0
@{*/


#define FPU_MVFR0_FP_rounding_modes_SHIFT		28
#define FPU_MVFR0_FP_rounding_modes_MASK		0x0f
/** @defgroup fpu_mvfr0_fp_rounding_modes FProundingmodes 
@{*/
/**@}*/


#define FPU_MVFR0_Short_vectors_SHIFT		24
#define FPU_MVFR0_Short_vectors_MASK		0x0f
/** @defgroup fpu_mvfr0_short_vectors Shortvectors 
@{*/
/**@}*/


#define FPU_MVFR0_Square_root_SHIFT		20
#define FPU_MVFR0_Square_root_MASK		0x0f
/** @defgroup fpu_mvfr0_square_root Squareroot 
@{*/
/**@}*/


#define FPU_MVFR0_Divide_SHIFT		16
#define FPU_MVFR0_Divide_MASK		0x0f
/** @defgroup fpu_mvfr0_divide Divide 
@{*/
/**@}*/


#define FPU_MVFR0_FP_excep_trapping_SHIFT		12
#define FPU_MVFR0_FP_excep_trapping_MASK		0x0f
/** @defgroup fpu_mvfr0_fp_excep_trapping FPexceptrapping 
@{*/
/**@}*/


#define FPU_MVFR0_Double_precision_SHIFT		8
#define FPU_MVFR0_Double_precision_MASK		0x0f
/** @defgroup fpu_mvfr0_double_precision Doubleprecision 
@{*/
/**@}*/


#define FPU_MVFR0_Single_precision_SHIFT		4
#define FPU_MVFR0_Single_precision_MASK		0x0f
/** @defgroup fpu_mvfr0_single_precision Singleprecision 
@{*/
/**@}*/


#define FPU_MVFR0_A_SIMD_registers_SHIFT		0
#define FPU_MVFR0_A_SIMD_registers_MASK		0x0f
/** @defgroup fpu_mvfr0_a_simd_registers ASIMDregisters 
@{*/
/**@}*/


/**@}*/

/** @defgroup fpu_mvfr1 MVFR1 Media and FP Feature Register 1
@{*/


#define FPU_MVFR1_FP_fused_MAC_SHIFT		28
#define FPU_MVFR1_FP_fused_MAC_MASK		0x0f
/** @defgroup fpu_mvfr1_fp_fused_mac FPfusedMAC 
@{*/
/**@}*/


#define FPU_MVFR1_FP_HPFP_SHIFT		24
#define FPU_MVFR1_FP_HPFP_MASK		0x0f
/** @defgroup fpu_mvfr1_fp_hpfp FPHPFP 
@{*/
/**@}*/


#define FPU_MVFR1_D_NaN_mode_SHIFT		4
#define FPU_MVFR1_D_NaN_mode_MASK		0x0f
/** @defgroup fpu_mvfr1_d_nan_mode DNaNmode 
@{*/
/**@}*/


#define FPU_MVFR1_FtZ_mode_SHIFT		0
#define FPU_MVFR1_FtZ_mode_MASK		0x0f
/** @defgroup fpu_mvfr1_ftz_mode FtZmode 
@{*/
/**@}*/


/**@}*/
